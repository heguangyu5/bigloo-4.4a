;*=====================================================================*/
;*    serrano/prgm/project/bigloo/bdb/bdb/Bee/etags.scm                */
;*    -------------------------------------------------------------    */
;*    Author      :  Manuel Serrano                                    */
;*    Creation    :  Thu Jul 29 09:18:33 1999                          */
;*    Last change :  Fri Dec  9 11:11:28 2011 (serrano)                */
;*    -------------------------------------------------------------    */
;*    The debugger tries to load the etags file for the project in     */
;*    order to be able to do some eager demangling. This is important  */
;*    in order to be able to set breakpoints using Bigloo symbolic     */
;*    names before the execution starts.                               */
;*=====================================================================*/

;*---------------------------------------------------------------------*/
;*    The module                                                       */
;*---------------------------------------------------------------------*/
(module bee_etags
   (library bdl)
   (import  engine_param
            tools_speek
            tools_error
            (console-prompt tools_io)
            (bdb-repl-prompt engine_repl))
   (export  (read-etags-file)
            (bigloo-symbol-etags-source-location ::bstring)))

;*---------------------------------------------------------------------*/
;*    *prgm* ...                                                       */
;*---------------------------------------------------------------------*/
(define *prgm* #unspecified)

;*---------------------------------------------------------------------*/
;*    read-etags-file ...                                              */
;*---------------------------------------------------------------------*/
(define (read-etags-file)
    (let* ((afile-files (string-split (system->string "find " *root-directory* " -name " *afile*)))
           (etags-files (string-split (system->string "find " *root-directory* " -name " *etags*))))
        (if (and (not (null? afile-files))
                 (not (null? etags-files)))
            (begin
                (call-with-append-file ".bdb-tmp-afile"
                    (lambda (port)
                        (display "(" port)
                        (for-each (lambda (f)
                                    (let* ((s     (file->string f))
                                           (start (string-index s "("))
                                           (end   (string-index-right s ")"))
                                           (s     (substring s (+fx start 1) end)))
                                        (display s port)))
                                  afile-files)
                        (display ")" port)))
                (call-with-append-file ".bdb-tmp-etags"
                    (lambda (port)
                        (for-each (lambda (f) (send-file f port)) etags-files)))
                (set! *prgm* (read-program ".bdb-tmp-afile" ".bdb-tmp-etags"))
                (delete-file ".bdb-tmp-afile")
                (delete-file ".bdb-tmp-etags"))
            (error 'read-etags-file
                (format "Can't find ~a file in path ~a and subdirectories, please generate one with ~a"
                    (if (null? afile-files) *afile* *etags*)
                    *root-directory*
                    (if (null? afile-files)
                        (format "`bglafile *.scm -o ~a`" *afile*)
                        (format "`bgltags *.scm -o ~a`" *etags*)))
                (if (null? afile-files) *afile* *etags* )))))

;*---------------------------------------------------------------------*/
;*    bigloo-symbol-etags-source-location ...                          */
;*---------------------------------------------------------------------*/
(define (bigloo-symbol-etags-source-location id)
   (let ((idents (find-bdl-regexp-ident *prgm* (string-append "^" id "$"))))
      (if (and (= (length idents) 1)
               (isa? (car idents) bdl-entity))
          (let ((e::bdl-entity (car idents)))
             (with-access::bdl-location (-> e loc) (file line)
                (string-append file ":" (integer->string line))))
          #f)))
