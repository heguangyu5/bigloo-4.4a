(module saw_jvm_code
   (include "Tools/location.sch")
   (import type_type ast_var ast_node
	   type_env
	   type_typeof
	   engine_param
	   module_module
	   object_class
	   object_slots
	   read_jvm
	   backend_backend
	   backend_bvm
	   backend_jvm_class
	   backend_lib
	   backend_cplib
	   saw_defs
	   saw_jvm_names
	   saw_jvm_type
	   saw_jvm_out
	   saw_jvm_funcall
	   saw_jvm_inline
	   jas_as
	   )
   (export (module-code me::jvm params l)
	   (gen-expr me::jvm ins))
   (include "SawJvm/code.sch")
   (static (wide-class lreg::rtl_reg id)
	   (wide-class liveblock::block in out)
	   ))

(define *hasprotect* #f)
(define *protectresult* #f)
(define *bexitreg* #f)

;;
;; Specific methods for register allocation
;;
;* (define-method (rtl-type-interference b::jvm registers)             */
;*    ;; Java does not need any king of typed interference because     */
;*    ;; the VM is absolutely not typed                                */
;*    #f)                                                              */

;;
;; Main function
;;
(define (module-code me params l)
   (let ( (locs (get-locals params l)) )
      (define (double l)
	 (if (null? l)
	     l
	     (let ( (reg (car l)) (r (double (cdr l))) )
		(let ( (type (type-name (lreg-type reg))) )
		   (if (or (eq? type 'double) (eq? type 'long))
		       (cons (lreg-id reg) (cons '_ r))
		       (cons (lreg-id reg) r) )))))
      (declare-locals me (double params) (double locs)) )
   (when *hasprotect*
      ;; The "from" label is generated by protect
      (code! me '(handler from catch catch bexception))
      (code! me '(handler from catch catch2 throwable)))
   ;; Code generation
   (let ( (pending #unspecified) )
      (when *jvm-debug*
	 (label me 'begin)
	 (for-each live-init l)
	 (for-each live-fix l)
	 (set! pending (map (lambda (p) (cons p 'begin)) params)) )
      (for-each (lambda (b)
		   (label me (block-label b))
		   (when *jvm-debug* (set! pending (live-reset me b pending)))
		   (for-each (lambda (i) (set! pending (gen-ins me i pending)))
			     (block-first b) ))
		l )
      (when *jvm-debug*
	 (label me 'end)
	 (for-each (lambda (p) (out-localvar me (car p) (cdr p) 'end))
		   pending )))
   ;; Special code for protected functions
   (when *hasprotect*
      (code! me 'catch)
      (load-reg me *bexitreg*)
      (code! me '(checkcast exit))
      (code! me '(invokestatic debug_handler))
      (code! me '(areturn))
      ;; catch java exceptions
      (code! me 'catch2)
      (load-reg me *bexitreg*)
      (code! me '(checkcast exit))
      (code! me '(invokestatic java_exception_handler))
      (code! me '(areturn)) ))

;;
;; Scan the code to retrieve local variable
;; Update all reg to lreg and return all regs not parameters
;;
(define (get-locals params l) ;()
   (set! *hasprotect* #f)
   (let ( (n 0) (regs '()) )
      (define (name p n)
	 (string->symbol (string-append p (integer->string n))) )
      (define (reg->lreg r)
	 ;; Update a register.
	 (unless (lreg? r)
	    (widen!::lreg r (id (name "V" n)))
	    (set! n (+fx n 1))
	    (set! regs (cons r regs)) ))
      (define (nr t)
	 ;; Create a new register for specific use.
	 (let ( (r (instantiate::rtl_reg
		      (type t)
		      (var #f)
		      (name (gensym)))) )
	    (reg->lreg r)
	    r ))
      (define (check_fun e)
	 ;; Check if something must be done for specific instructions.
	 (let ( (fun (rtl_ins-fun e)) )
	    (cond
	       ((rtl_protect? fun)
		(set! *hasprotect* #t)
		(set! *bexitreg* (rtl_ins-dest e)) )
	       ((rtl_switch? fun) ))))
      (define (expr e)
	 (if (rtl_reg? e)
	     (reg->lreg e)
	     (begin (check_fun e)
		    (for-each expr (rtl_ins-args e)) )))
      (define (instruction e)
	 (let ( (dest (rtl_ins-dest e)) )
	    (if dest (reg->lreg dest))
	    (check_fun e)
	    (for-each expr (rtl_ins-args e)) ))
      (let loop ( (l params) )
	 (unless (null? l)
	    (widen!::lreg (car l) (id (name "P" n)))
	    (set! n (+fx n 1))
	    (loop (cdr l)) ))
      (for-each (lambda (b) (for-each instruction (block-first b))) l)
;      (print "After-building-tree : " n " registers.")
      (reverse! regs) ))

;;
;; Live Analysis
;;
(define (live-init b)
   (widen!::liveblock b (in '()) (out '())) )

(define (live-fix b)
   (define (include l1 l2)
      (cond ((null? l1) #t)
	    ((memq (car l1) l2) (include (cdr l1) l2))
	    (else #f) ))
   (define (union l1 l2)
      (cond ((null? l1) l2)
	    ((memq (car l1) l2) (union (cdr l1) l2))
	    (else (union (cdr l1) (cons (car l1) l2))) ))
   (define (live-arg a regs)
      (cond
	 ((not (rtl_reg? a))
	  (live-args (rtl_ins-args a) regs) )
	 ((memq a regs)
	  regs )
	 (else (cons a regs)) ))
   (define (live-args args regs)
      (for-each (lambda (a) (set! regs (live-arg a regs))) args)
      regs )
   (define (live-instr ins regs)
      (with-access::rtl_ins ins (dest fun args)
	 (live-args args (if dest (remq dest regs) regs)) ))
   (define (live-instrs l regs)
      (if (null? l)
	  regs
	  (live-instr (car l) (live-instrs (cdr l) regs)) ))
   (define (fixpoint b live)
      (with-access::liveblock b (in out preds first)
	 (set! out live)
	 (let ( (nlive (live-instrs first live)) )
	    (unless (include nlive in)
	       (set! in nlive)
	       (for-each (lambda (p)
			    (let ( (o (liveblock-out p)) )
			       (unless (include nlive o)
				  (fixpoint p (union nlive o)) )))
			 preds )))))
   (fixpoint b (liveblock-out b)) )

(define (live-reset me b pending)
   (let ( (lab (gensym)) (npending '()) )
      (label me lab)
      (with-access::liveblock b (in out)
	 (for-each (lambda (p)
		      (if (memq (car p) in)
			  (set! npending (cons p npending))
			  (out-localvar me (car p) (cdr p) lab) ))
		   pending )
	 (for-each (lambda (i)
		      (unless (assq i npending)
			 (set! npending (cons (cons i lab) npending)) ))
		   in )
	 ;; CARE Find dead for (in - out)
	 npending )))

(define (out-localvar me r b e)
   (with-access::lreg r (var id)
      (localvar me r b e id) ))

;;
;; Instruction generation
;;
(define (gen-ins me ins p)
   (with-access::rtl_ins ins (dest fun args)
      ;; Call the generic method and check for existing value on stack
      (if (eq? (gen-args-gen-fun fun me args) 'no-value)
	  (when dest
	     (code! me '(getstatic *unspecified*))
	     (store-reg me dest) )
	  (if dest
	      (store-reg me dest)
	      ;; Prove that test is always false
	      (unless (or (rtl_last? fun)
			  (rtl_notseq? fun)
			  (rtl_effect? fun) )
		 (let ( (n (size-dest ins)) )
		    (when (>fx n 0)
		       (if (>fx n 1)
			   (code! me '(pop2))
			   (code! me '(pop)) ))))))
      (when (rtl_protect? fun) (code! me 'from))
      (when (and *jvm-debug* dest)
	 (unless (assq dest p)
	    (let ( (lab (gensym)) )
	       (label me lab)
	       (set! p (cons (cons dest lab) p)) )))
      p ))

(define (gen-expr me::jvm ins)
   (if (rtl_reg? ins)
       (load-reg me ins)
       (with-access::rtl_ins ins (fun args)
	  (when (eq? (gen-args-gen-fun fun me args) 'no-value)
	     (code! me '(getstatic *unspecified*)) ))))

(define (load-reg me r)
   (code! me
	  `(,(case (type-name (lreg-type r))
		((boolean byte char short int) 'iload)
		((long) 'lload)
		((float) 'fload)
		((double) 'dload)
		(else 'aload) )
	    ,(lreg-id r) )))

(define (store-reg me r)
   (code! me
	  `(,(case (type-name (lreg-type r))
		((boolean byte char short int) 'istore)
		((long) 'lstore)
		((float) 'fstore)
		((double) 'dstore)
		(else 'astore) )
	    ,(lreg-id r) )))

;;
;;
;;
(define *last-line* -1)
(define (out-line me fun)
   (let ( (loc (rtl_fun-loc fun)) )
      (when (and *jvm-debug* (location? loc))
	 (let* ( (n (location-lnum loc))
		 (p (+fx (location-pos loc) 1))
		 (last (if *jvm-char-info*
			   p
			   n)) )
	    (unless (=fx last *last-line*)
	       (set! *last-line* last)
	       (code! me `(line ,n ,p)) )))))


;;
;; Main entry for instruction generation (argument not generated)
;; Specific for predicates and some inlined functions
;;
(define-generic (gen-args-gen-fun fun::rtl_fun me args);
   ;; Default case : generate arguments and call another generic method.
   (for-each (lambda (a) (gen-expr me a)) args)
   (out-line me fun)
   (gen-fun-with-args fun me args) )

;;
;; Entry for instruction who needs the (already generated) argument.
;; Specific for instruction with no specific arity
;;
(define-generic (gen-fun-with-args fun::rtl_fun me args);
   ;; Default case: forget arguments and call another generic method.
   (gen-fun fun me) )

;* (define-method (gen-fun-with-args fun::rtl_cast me args);           */
;*    (when *purify*                                                   */
;*       (let ( (totype (rtl_cast-totype fun))                         */
;* 	     (fromtype (rtl_cast-fromtype fun)) )                      */
;* {* 	 (unless (subtype? fromtype totype)                            *} */
;* 	    (code! me `(checkcast ,(compile-type me totype))) ))))     */

;;
;; Last entry for generating instructions
;;
(define-generic (gen-fun fun::rtl_fun me));

;;
;; Simple one
;;
(define-method (gen-fun fun::rtl_nop me);
   'no-value )

(define-method (gen-fun fun::rtl_mov me);
   'ok )

;;
;; Constants
;;
(define-method (gen-fun fun::rtl_loadi me);
   (let ( (constant (rtl_loadi-constant fun)) )
      (let ( (value (atom-value constant)) )
	 (cond
	    ((number? value)
	     (push-num me value (type-name (node-type constant))) )
	    ((null? value)
	     (code! me '(getstatic *nil*)) )
	    ((boolean? value)
	     (push-int me (if value 1 0)) )
	    ((char? value)
	     (push-int me (char->integer value)) )
	    ((string? value)
	     (push-string me value)
	     ;; CARE do the creation at clinit time
	     (code! me '(invokestatic getbytes)) )
	    ((eof-object? value)
	     (code! me '(getstatic *eof*)) )
	    ((eq? value '#!optional)
	     (code! me '(getstatic *optional*)) )
	    ((eq? value '#!rest)
	     (code! me '(getstatic *rest*)) )
	    ((eq? value '#!key)
	     (code! me '(getstatic *key*)) )
	    ((eq? value #unspecified)
	     (code! me '(getstatic *unspecified*)) )
	    ((ucs2? value)
	     ;; CARE do the creation at clinit time
	     (code! me '(new bucs2))
	     (code! me '(dup))
	     (push-int me (ucs2->integer value))
	     (code! me '(invokespecial init_bucs2)) )
	    (else (error "loadi" "bad atom value" value)) ))))

;;
;; Accessing globals
;;
(define-method (gen-fun fun::rtl_loadg me);
   (code! me `(getstatic ,(declare-global me (rtl_loadg-var fun)))) )

(define-method (gen-fun fun::rtl_storeg me);
   (code! me `(putstatic ,(declare-global me (rtl_storeg-var fun))))
   'no-value )

(define-method (gen-fun fun::rtl_globalref me);
   (let ( (var (rtl_globalref-var fun)) )
      (code! me '(new me))
      (code! me '(dup))
      (code! me '(invokespecial init))
      (code! me '(dup))
      (push-int me (indexed-index var))
      (code! me '(putfield procindex)) ))

;;
;; Control
;;
(define-method (gen-args-gen-fun fun::rtl_ifeq me args);
   (let ( (arg (car args)) (lab (block-label (rtl_ifeq-then fun))) )
      (if (rtl_reg? arg)
	  (begin (load-reg me arg)
		 (branch me 'ifeq lab) )
	  (with-access::rtl_ins arg (fun args)
	     (gen-args-gen-predicate fun me args #f lab) ))
      'no-value ))

(define-method (gen-args-gen-fun fun::rtl_ifne me args);
   (let ( (arg (car args)) (lab (block-label (rtl_ifne-then fun))) )
      (if (rtl_reg? arg)
	  (begin (load-reg me arg)
		 (branch me 'ifne lab) )
	  (with-access::rtl_ins arg (fun args)
	     (gen-args-gen-predicate fun me args #t lab) ))
      'no-value ))

(define-method (gen-fun fun::rtl_go me);
   (branch me 'goto (block-label (rtl_go-to fun)))
   'no-value )

(define (intify x)
   (cond
      ((fixnum? x) x)
      ((uint32? x) (uint32->fixnum x))
      ((int32? x) (int32->fixnum x))
      (else x)))

(define-method (gen-fun fun::rtl_switch me);
   (with-access::rtl_switch fun (type patterns labels)
      ;; CARE do we have to make a coercion from "type" to int ??
      (let ( (ldef #unspecified) (num2lab '()) )
	 (define (L n)
	    (string->symbol (string-append "L" (integer->string n))) )
	 (define (add n lab)
	    (set! num2lab (cons (cons (intify n) (L lab)) num2lab)))
	 (for-each (lambda (pat lab)
		      (if (eq? pat 'else)
			  (set! ldef (L lab))
			  (for-each (lambda (n) (add n lab)) pat) ))
		   patterns
		   (map block-label labels) )
	 (cond
	    ((null? (cdr num2lab))
	     (push-int me (caar num2lab))
	     (branch me 'if_icmpne ldef)
	     (branch me 'goto (cdar num2lab)) )
	    (else
	     (set! num2lab (sort num2lab (lambda (x y) (<fx (car x) (car y)))))
	     (let* ( (nums (map car num2lab))
		     (min (car nums))
		     (max (car (last-pair nums)))
		     (n (length nums)) )
		(if (< (/ n (+fx 1 (-fx max min))) 0.75)
		    (code! me `(lookupswitch ,ldef ,@num2lab))
		    (code! me `(tableswitch ,ldef ,min
					    ,@(flat num2lab ldef) ))))))
	 'no-value )))

(define (flat al ldef)
   (define (walk al i r)
      (cond
	 ((null? al) (reverse! r))
	 ((=fx i (caar al)) (walk (cdr al) (+fx i 1) (cons (cdar al) r)))
	 ((>fx i (caar al)) (walk (cdr al) i r))
	 (else (walk al (+fx i 1) (cons ldef r))) ))
   (walk al (caar al) '()) )

;;
;; Call
;;
(define-method (gen-args-gen-fun fun::rtl_call me args);
   (let ( (r (inline-call-with-args? me (rtl_call-var fun) args)) )
      (if (eq? r  'not-inlined)
	  (begin (for-each (lambda (a) (gen-expr me a)) args)
		 (gen-fun fun me) )
	  r )))

(define-method (gen-fun fun::rtl_call me);
   (let ( (var (rtl_call-var fun)) )
      (let ( (r (inline-call? me var)) )
	 (if (eq? r  'not-inlined)
	     (with-access::global var (type)
		(call-global me var)
		(if (eq? (type-name type) 'void)
		    'no-value
		    'ok ))
	     r ))))

;(define-method (gen-fun-with-args fun::rtl_lightfuncall me args);
;   (gen-funcall me args) )

(define-method (gen-fun fun::rtl_lightfuncall me);
   (with-access::rtl_lightfuncall fun (name funs)
      (with-access::jvm me (light-funcalls)
         (unless (memq fun light-funcalls)
            (set! light-funcalls (cons fun light-funcalls)) ))
      (code! me `(invokestatic ,name)) ))


(define-method (gen-fun-with-args fun::rtl_funcall me args);
   (gen-funcall me args) )

(define (gen-funcall me args)
   (let ( (n (-fx (length args) 1)) )
      (case n
	 ((0) (code! me '(invokevirtual pfuncall0)))
	 ((1) (code! me '(invokevirtual pfuncall1)))
	 ((2) (code! me '(invokevirtual pfuncall2)))
	 ((3) (code! me '(invokevirtual pfuncall3)))
	 ((4) (code! me '(invokevirtual pfuncall4)))
	 (else ;; CARE Why not putting args in a global vector
	     (code! me '(getstatic *nil*))
	     (for-each (lambda (a) (code! me '(invokestatic cons))) (cdr args))
	     (code! me '(invokevirtual papply)) ))))

(define-method (gen-fun-with-args fun::rtl_return me args);
   (let ( (a (car args)) )
      (let ( (reg (if (rtl_reg? a) a (rtl_ins-dest a))) )
	 (code! me 
		(case (type-name (rtl_reg-type reg))
		   ((void) '(return))
		   ((boolean byte char short int) '(ireturn))
		   ((long) '(lreturn))
		   ((float) '(freturn))
		   ((double) '(dreturn))
		   (else '(areturn)) ))
	 'no-value )))

(define-method (gen-fun fun::rtl_loadfun me);
   (let ( (var (rtl_loadfun-var fun)) )
      (push-int me (indexed-index var)) ))

(define-method (gen-fun fun::rtl_apply me);
   (code! me '(invokevirtual papply)) )

;;
;; Vectors
;;
(define-method (gen-fun fun::rtl_vref me);
   (let ( (type (compile-type me (rtl_vref-type fun))) )
      (code! me (case type
		   ((boolean byte) '(baload))
		   ((char) '(caload))
		   ((short) '(saload))
		   ((int) '(iaload))
		   ((long) '(laload))
		   ((float) '(faload))
		   ((double) '(daload))
		   (else '(aaload)) ))))

(define-method (gen-fun fun::rtl_vset me);
   (let ( (type (compile-type me (rtl_vset-type fun))) )
      (code! me (case type
		   ((boolean byte) '(bastore))
		   ((char) '(castore))
		   ((short) '(sastore))
		   ((int) '(iastore))
		   ((long) '(lastore))
		   ((float) '(fastore))
		   ((double) '(dastore))
		   (else '(aastore)) ))
      'no-value ))

(define-method (gen-fun fun::rtl_vlength me);
   (code! me '(arraylength)) )

(define-method (gen-fun fun::rtl_valloc me);
   (let ( (type (compile-type me (rtl_valloc-type fun))) )
      (code! me `(,(case type
		      ((boolean byte char short int long float double)
		       'newarray )
		      (else 'anewarray) )
		  ,type ))))

;;
;; Objects
;;
(define-method (gen-args-gen-fun fun::rtl_new me args);
   (out-line me fun)
   (newobj me (rtl_new-type fun)
	   (lambda () (for-each (lambda (a) (gen-expr me a)) args))
	   (rtl_new-constr fun) ))

(define-method (gen-fun fun::rtl_getfield me);
   (with-access::rtl_getfield fun (name objtype type)
      (load-field me type objtype name) ))

(define-method (gen-fun fun::rtl_setfield me);
   (with-access::rtl_setfield fun (name objtype type)
      (store-field me type objtype name)
      'no-value ))

(define-method (gen-fun fun::rtl_instanceof me);
   (code! me `(instanceof ,(compile-type me (rtl_instanceof-type fun))))
   (let ( (l1 (gensym "I")) (l2 (gensym "I")) )
      (branch me 'ifeq l1)
      (push-int me 1)
      (branch me 'goto l2)
      (label me l1)
      (push-int me 0)
      (label me l2) ))

(define-method (gen-fun fun::rtl_cast me);
   (when *purify*
      (let ( (type (rtl_cast-totype fun)) )
         (unless (eq? (type-name type) 'obj)
            (code! me `(checkcast ,(compile-type me type))) ))))

(define-method (gen-fun fun::rtl_cast_null me);
   (let ( (type (rtl_cast_null-type fun)) ) 
      (if (eq? (type-name type) 'float)
	  (code! me `(fconst_0))
	  (code! me `(aconst_null)) )))

;;
;; Box
;;
(define-method (gen-args-gen-fun fun::rtl_makebox me args);
   (code! me '(new cell))
   (code! me '(dup))
   (gen-expr me (car args))
   (out-line me fun)
   (code! me '(invokespecial init_cell)) )

(define-method (gen-fun fun::rtl_boxref me);
   (code! me '(getfield ccar)) )

(define-method (gen-fun fun::rtl_boxset me);
   (code! me '(putfield ccar))
   'no-value )

;;
;; Exceptions
;;
(define-method (gen-fun fun::rtl_jumpexit me);
   (code! me '(invokestatic jumpexit))
   ;; CARE Dead code !!
   (code! me '(checkcast throwable))
   (code! me '(athrow))
   'no-value )

(define-method (gen-fun fun::rtl_fail me);
   (code! me '(invokestatic fail))
   (code! me '(athrow))
   'no-value )

(define-method (gen-fun fun::rtl_protect me);
   (code! me '(invokestatic setexit)) )

(define-method (gen-fun fun::rtl_protected me);
   ;; CARE Strange nothing to do...
   'ok )

;;
;; Main entry for predicate generation (arguments generated)
;; Drop args and call another generic function.
;; Currently not used by inlined functions
;;
(define-generic (gen-args-gen-predicate fun::rtl_fun me args on? lab);
   ;; Default case
   (gen-args-gen-fun fun me args)
   (out-line me fun)
   (branch me (if on? 'ifne 'ifeq) lab) )

;; Call
(define-method (gen-args-gen-predicate fun::rtl_call me args on? lab);
   (for-each (lambda (a) (gen-expr me a)) args)
   (out-line me fun)
   (let ( (r (inline-predicate? me (rtl_call-var fun) on? lab)) )
      (if (eq? r  'not-inlined)
	  (begin (gen-fun-with-args fun me args)
		 (branch me (if on? 'ifne 'ifeq) lab) )
	  r )))

;(define-method (gen-predicate fun::rtl_call args me on? lab);
;   (let ( (r (inline-predicate? me (rtl_call-var fun) on? lab)) )
;      (if (eq? r  'not-inlined)
;	  (default-gen-predicate fun args me on? lab)
;	  r )))

;;CARE instanceof

