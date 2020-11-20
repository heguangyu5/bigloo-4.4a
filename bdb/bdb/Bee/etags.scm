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
    (let* ((dirs (list "." *root-directory*))
          (afile (find-file/path *afile* dirs))
          (etags (find-file/path *etags* dirs)))
        (if (and (string? afile) (string? etags))
            (set! *prgm* (read-program afile etags))
            (error 'read-etags-file
                (format "Can't find ~a file in path ~a, please generate one with ~a"
                    (if (string? afile) *etags* *afile*)
                    dirs
                    (if (string? afile)
                        (format"`bgltags *.scm -o ~a`" *etags*)
                        (format"`bglafile *.scm -o ~a`" *afile*)))
                (if (string? afile) *etags* *afile*)))))

;*---------------------------------------------------------------------*/
;*    bigloo-symbol-etags-source-location ...                          */
;*---------------------------------------------------------------------*/
(define (bigloo-symbol-etags-source-location id)
   (let ((idents (find-bdl-regexp-ident *prgm* id)))
      (if (and (= (length idents) 1)
               (isa? (car idents) bdl-entity))
          (let ((e::bdl-entity (car idents)))
             (with-access::bdl-location (-> e loc) (file line)
                (string-append file ":" (integer->string line))))
          #f)))
