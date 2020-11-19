;; ==========================================================
;; Class accessors
;; Bigloo (4.3a)
;; Inria -- Sophia Antipolis     Wed Jun 1 13:31:23 CEST 2016 
;; (bigloo -classgen Inline/inline.scm)
;; ==========================================================

;; The directives
(directives

;; isfun
(cond-expand ((and bigloo-class-sans (not bigloo-class-generate))
  (export
    (inline make-isfun::isfun arity1127::long side-effect1128::obj predicate-of1129::obj stack-allocator1130::obj top?1131::bool the-closure1132::obj effect1133::obj failsafe1134::obj property1135::obj args1136::obj args-name1137::obj body1138::obj class1139::obj dsssl-keywords1140::obj loc1141::obj optionals1142::obj keys1143::obj the-closure-global1144::obj strength1145::symbol original-body1146::node recursive-calls1147::obj tailrec1148::bool)
    (inline isfun?::bool ::obj)
    (isfun-nil::isfun)
    (inline isfun-tailrec::bool ::isfun)
    (inline isfun-tailrec-set! ::isfun ::bool)
    (inline isfun-recursive-calls::obj ::isfun)
    (inline isfun-recursive-calls-set! ::isfun ::obj)
    (inline isfun-original-body::node ::isfun)
    (inline isfun-strength::symbol ::isfun)
    (inline isfun-strength-set! ::isfun ::symbol)
    (inline isfun-the-closure-global::obj ::isfun)
    (inline isfun-the-closure-global-set! ::isfun ::obj)
    (inline isfun-keys::obj ::isfun)
    (inline isfun-optionals::obj ::isfun)
    (inline isfun-loc::obj ::isfun)
    (inline isfun-loc-set! ::isfun ::obj)
    (inline isfun-dsssl-keywords::obj ::isfun)
    (inline isfun-dsssl-keywords-set! ::isfun ::obj)
    (inline isfun-class::obj ::isfun)
    (inline isfun-class-set! ::isfun ::obj)
    (inline isfun-body::obj ::isfun)
    (inline isfun-body-set! ::isfun ::obj)
    (inline isfun-args-name::obj ::isfun)
    (inline isfun-args::obj ::isfun)
    (inline isfun-args-set! ::isfun ::obj)
    (inline isfun-property::obj ::isfun)
    (inline isfun-property-set! ::isfun ::obj)
    (inline isfun-failsafe::obj ::isfun)
    (inline isfun-failsafe-set! ::isfun ::obj)
    (inline isfun-effect::obj ::isfun)
    (inline isfun-effect-set! ::isfun ::obj)
    (inline isfun-the-closure::obj ::isfun)
    (inline isfun-the-closure-set! ::isfun ::obj)
    (inline isfun-top?::bool ::isfun)
    (inline isfun-top?-set! ::isfun ::bool)
    (inline isfun-stack-allocator::obj ::isfun)
    (inline isfun-stack-allocator-set! ::isfun ::obj)
    (inline isfun-predicate-of::obj ::isfun)
    (inline isfun-predicate-of-set! ::isfun ::obj)
    (inline isfun-side-effect::obj ::isfun)
    (inline isfun-side-effect-set! ::isfun ::obj)
    (inline isfun-arity::long ::isfun)))))

;; The definitions
(cond-expand (bigloo-class-sans
;; isfun
(define-inline (make-isfun::isfun arity1127::long side-effect1128::obj predicate-of1129::obj stack-allocator1130::obj top?1131::bool the-closure1132::obj effect1133::obj failsafe1134::obj property1135::obj args1136::obj args-name1137::obj body1138::obj class1139::obj dsssl-keywords1140::obj loc1141::obj optionals1142::obj keys1143::obj the-closure-global1144::obj strength1145::symbol original-body1146::node recursive-calls1147::obj tailrec1148::bool) (instantiate::isfun (arity arity1127) (side-effect side-effect1128) (predicate-of predicate-of1129) (stack-allocator stack-allocator1130) (top? top?1131) (the-closure the-closure1132) (effect effect1133) (failsafe failsafe1134) (property property1135) (args args1136) (args-name args-name1137) (body body1138) (class class1139) (dsssl-keywords dsssl-keywords1140) (loc loc1141) (optionals optionals1142) (keys keys1143) (the-closure-global the-closure-global1144) (strength strength1145) (original-body original-body1146) (recursive-calls recursive-calls1147) (tailrec tailrec1148)))
(define-inline (isfun?::bool obj::obj) ((@ isa? __object) obj (@ isfun inline_inline)))
(define (isfun-nil::isfun) (class-nil (@ isfun inline_inline)))
(define-inline (isfun-tailrec::bool o::isfun) (-> |#!bigloo_wallow| o tailrec))
(define-inline (isfun-tailrec-set! o::isfun v::bool) (set! (-> |#!bigloo_wallow| o tailrec) v))
(define-inline (isfun-recursive-calls::obj o::isfun) (-> |#!bigloo_wallow| o recursive-calls))
(define-inline (isfun-recursive-calls-set! o::isfun v::obj) (set! (-> |#!bigloo_wallow| o recursive-calls) v))
(define-inline (isfun-original-body::node o::isfun) (-> |#!bigloo_wallow| o original-body))
(define-inline (isfun-original-body-set! o::isfun v::node) (set! (-> |#!bigloo_wallow| o original-body) v))
(define-inline (isfun-strength::symbol o::isfun) (-> |#!bigloo_wallow| o strength))
(define-inline (isfun-strength-set! o::isfun v::symbol) (set! (-> |#!bigloo_wallow| o strength) v))
(define-inline (isfun-the-closure-global::obj o::isfun) (-> |#!bigloo_wallow| o the-closure-global))
(define-inline (isfun-the-closure-global-set! o::isfun v::obj) (set! (-> |#!bigloo_wallow| o the-closure-global) v))
(define-inline (isfun-keys::obj o::isfun) (-> |#!bigloo_wallow| o keys))
(define-inline (isfun-keys-set! o::isfun v::obj) (set! (-> |#!bigloo_wallow| o keys) v))
(define-inline (isfun-optionals::obj o::isfun) (-> |#!bigloo_wallow| o optionals))
(define-inline (isfun-optionals-set! o::isfun v::obj) (set! (-> |#!bigloo_wallow| o optionals) v))
(define-inline (isfun-loc::obj o::isfun) (-> |#!bigloo_wallow| o loc))
(define-inline (isfun-loc-set! o::isfun v::obj) (set! (-> |#!bigloo_wallow| o loc) v))
(define-inline (isfun-dsssl-keywords::obj o::isfun) (-> |#!bigloo_wallow| o dsssl-keywords))
(define-inline (isfun-dsssl-keywords-set! o::isfun v::obj) (set! (-> |#!bigloo_wallow| o dsssl-keywords) v))
(define-inline (isfun-class::obj o::isfun) (-> |#!bigloo_wallow| o class))
(define-inline (isfun-class-set! o::isfun v::obj) (set! (-> |#!bigloo_wallow| o class) v))
(define-inline (isfun-body::obj o::isfun) (-> |#!bigloo_wallow| o body))
(define-inline (isfun-body-set! o::isfun v::obj) (set! (-> |#!bigloo_wallow| o body) v))
(define-inline (isfun-args-name::obj o::isfun) (-> |#!bigloo_wallow| o args-name))
(define-inline (isfun-args-name-set! o::isfun v::obj) (set! (-> |#!bigloo_wallow| o args-name) v))
(define-inline (isfun-args::obj o::isfun) (-> |#!bigloo_wallow| o args))
(define-inline (isfun-args-set! o::isfun v::obj) (set! (-> |#!bigloo_wallow| o args) v))
(define-inline (isfun-property::obj o::isfun) (-> |#!bigloo_wallow| o property))
(define-inline (isfun-property-set! o::isfun v::obj) (set! (-> |#!bigloo_wallow| o property) v))
(define-inline (isfun-failsafe::obj o::isfun) (-> |#!bigloo_wallow| o failsafe))
(define-inline (isfun-failsafe-set! o::isfun v::obj) (set! (-> |#!bigloo_wallow| o failsafe) v))
(define-inline (isfun-effect::obj o::isfun) (-> |#!bigloo_wallow| o effect))
(define-inline (isfun-effect-set! o::isfun v::obj) (set! (-> |#!bigloo_wallow| o effect) v))
(define-inline (isfun-the-closure::obj o::isfun) (-> |#!bigloo_wallow| o the-closure))
(define-inline (isfun-the-closure-set! o::isfun v::obj) (set! (-> |#!bigloo_wallow| o the-closure) v))
(define-inline (isfun-top?::bool o::isfun) (-> |#!bigloo_wallow| o top?))
(define-inline (isfun-top?-set! o::isfun v::bool) (set! (-> |#!bigloo_wallow| o top?) v))
(define-inline (isfun-stack-allocator::obj o::isfun) (-> |#!bigloo_wallow| o stack-allocator))
(define-inline (isfun-stack-allocator-set! o::isfun v::obj) (set! (-> |#!bigloo_wallow| o stack-allocator) v))
(define-inline (isfun-predicate-of::obj o::isfun) (-> |#!bigloo_wallow| o predicate-of))
(define-inline (isfun-predicate-of-set! o::isfun v::obj) (set! (-> |#!bigloo_wallow| o predicate-of) v))
(define-inline (isfun-side-effect::obj o::isfun) (-> |#!bigloo_wallow| o side-effect))
(define-inline (isfun-side-effect-set! o::isfun v::obj) (set! (-> |#!bigloo_wallow| o side-effect) v))
(define-inline (isfun-arity::long o::isfun) (-> |#!bigloo_wallow| o arity))
(define-inline (isfun-arity-set! o::isfun v::long) (set! (-> |#!bigloo_wallow| o arity) v))
))
