/*===========================================================================*/
/*   (Llib/error.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -c Llib/error.scm -indent -o objs/obj_s/Llib/error.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif

/* object type definitions */
typedef struct BgL_z62exceptionz62_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_fnamez00;
   obj_t BgL_locationz00;
   obj_t BgL_stackz00;
} *BgL_z62exceptionz62_bglt;

typedef struct BgL_z62errorz62_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_fnamez00;
   obj_t BgL_locationz00;
   obj_t BgL_stackz00;
   obj_t BgL_procz00;
   obj_t BgL_msgz00;
   obj_t BgL_objz00;
} *BgL_z62errorz62_bglt;

typedef struct BgL_z62typezd2errorzb0_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_fnamez00;
   obj_t BgL_locationz00;
   obj_t BgL_stackz00;
   obj_t BgL_procz00;
   obj_t BgL_msgz00;
   obj_t BgL_objz00;
   obj_t BgL_typez00;
} *BgL_z62typezd2errorzb0_bglt;

typedef struct BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_fnamez00;
   obj_t BgL_locationz00;
   obj_t BgL_stackz00;
   obj_t BgL_procz00;
   obj_t BgL_msgz00;
   obj_t BgL_objz00;
   obj_t BgL_indexz00;
} *BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt;

typedef struct BgL_z62iozd2errorzb0_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_fnamez00;
   obj_t BgL_locationz00;
   obj_t BgL_stackz00;
   obj_t BgL_procz00;
   obj_t BgL_msgz00;
   obj_t BgL_objz00;
} *BgL_z62iozd2errorzb0_bglt;

typedef struct BgL_z62iozd2portzd2errorz62_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_fnamez00;
   obj_t BgL_locationz00;
   obj_t BgL_stackz00;
   obj_t BgL_procz00;
   obj_t BgL_msgz00;
   obj_t BgL_objz00;
} *BgL_z62iozd2portzd2errorz62_bglt;

typedef struct BgL_z62iozd2readzd2errorz62_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_fnamez00;
   obj_t BgL_locationz00;
   obj_t BgL_stackz00;
   obj_t BgL_procz00;
   obj_t BgL_msgz00;
   obj_t BgL_objz00;
} *BgL_z62iozd2readzd2errorz62_bglt;

typedef struct BgL_z62iozd2writezd2errorz62_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_fnamez00;
   obj_t BgL_locationz00;
   obj_t BgL_stackz00;
   obj_t BgL_procz00;
   obj_t BgL_msgz00;
   obj_t BgL_objz00;
} *BgL_z62iozd2writezd2errorz62_bglt;

typedef struct BgL_z62iozd2filezd2notzd2foundzd2errorz62_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_fnamez00;
   obj_t BgL_locationz00;
   obj_t BgL_stackz00;
   obj_t BgL_procz00;
   obj_t BgL_msgz00;
   obj_t BgL_objz00;
} *BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt;

typedef struct BgL_z62iozd2parsezd2errorz62_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_fnamez00;
   obj_t BgL_locationz00;
   obj_t BgL_stackz00;
   obj_t BgL_procz00;
   obj_t BgL_msgz00;
   obj_t BgL_objz00;
} *BgL_z62iozd2parsezd2errorz62_bglt;

typedef struct BgL_z62iozd2unknownzd2hostzd2errorzb0_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_fnamez00;
   obj_t BgL_locationz00;
   obj_t BgL_stackz00;
   obj_t BgL_procz00;
   obj_t BgL_msgz00;
   obj_t BgL_objz00;
} *BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt;

typedef struct BgL_z62iozd2malformedzd2urlzd2errorzb0_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_fnamez00;
   obj_t BgL_locationz00;
   obj_t BgL_stackz00;
   obj_t BgL_procz00;
   obj_t BgL_msgz00;
   obj_t BgL_objz00;
} *BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt;

typedef struct BgL_z62iozd2sigpipezd2errorz62_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_fnamez00;
   obj_t BgL_locationz00;
   obj_t BgL_stackz00;
   obj_t BgL_procz00;
   obj_t BgL_msgz00;
   obj_t BgL_objz00;
} *BgL_z62iozd2sigpipezd2errorz62_bglt;

typedef struct BgL_z62iozd2timeoutzd2errorz62_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_fnamez00;
   obj_t BgL_locationz00;
   obj_t BgL_stackz00;
   obj_t BgL_procz00;
   obj_t BgL_msgz00;
   obj_t BgL_objz00;
} *BgL_z62iozd2timeoutzd2errorz62_bglt;

typedef struct BgL_z62iozd2connectionzd2errorz62_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_fnamez00;
   obj_t BgL_locationz00;
   obj_t BgL_stackz00;
   obj_t BgL_procz00;
   obj_t BgL_msgz00;
   obj_t BgL_objz00;
} *BgL_z62iozd2connectionzd2errorz62_bglt;

typedef struct BgL_z62processzd2exceptionzb0_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_fnamez00;
   obj_t BgL_locationz00;
   obj_t BgL_stackz00;
   obj_t BgL_procz00;
   obj_t BgL_msgz00;
   obj_t BgL_objz00;
} *BgL_z62processzd2exceptionzb0_bglt;

typedef struct BgL_z62stackzd2overflowzd2errorz62_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_fnamez00;
   obj_t BgL_locationz00;
   obj_t BgL_stackz00;
   obj_t BgL_procz00;
   obj_t BgL_msgz00;
   obj_t BgL_objz00;
} *BgL_z62stackzd2overflowzd2errorz62_bglt;

typedef struct BgL_z62warningz62_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_fnamez00;
   obj_t BgL_locationz00;
   obj_t BgL_stackz00;
   obj_t BgL_argsz00;
} *BgL_z62warningz62_bglt;


extern obj_t BGl_stringzd2replacezd2zz__r4_strings_6_7z00(obj_t, unsigned char, unsigned char);
BGL_EXPORTED_DECL obj_t BGl_raisez00zz__errorz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_errorzd2notifyzf2locationz20zz__errorz00(obj_t, obj_t, int);
static obj_t BGl_z62errorzf2locationz90zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t bgl_system_failure(int, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_warningz00zz__errorz00(obj_t);
static obj_t BGl_relativezd2filezd2namez00zz__errorz00(obj_t);
static obj_t BGl_zc3z04exitza32140ze3ze70z60zz__errorz00(obj_t, obj_t);
static obj_t BGl_z62displayzd2tracezd2stackzd2sourcezb0zz__errorz00(obj_t, obj_t, obj_t);
extern obj_t BGl_z62iozd2writezd2errorz62zz__objectz00;
BGL_EXPORTED_DECL obj_t BGl_warningzf2czd2locationz20zz__errorz00(char *, long, obj_t);
extern obj_t unwind_stack_until(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_uncygdrivez00zz__errorz00(obj_t);
extern obj_t BGl_getenvz00zz__osz00(obj_t);
extern bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_notifyzd2interruptzd2zz__errorz00(int);
static obj_t BGl_z62errorzd2notifyzf2locationz42zz__errorz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62warningzd2notifyzf2locationz42zz__errorz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_objectzd2initzd2zz__errorz00();
static obj_t BGl_defaultzd2interruptzd2notifierz00zz__errorz00(int);
static obj_t BGl_z62bigloozd2typezd2errorz62zz__errorz00(obj_t, obj_t, obj_t, obj_t);
extern obj_t BGl_z62exceptionz62zz__objectz00;
static obj_t BGl_z62withzd2exceptionzd2handlerz62zz__errorz00(obj_t, obj_t, obj_t);
extern obj_t BGl_dirnamez00zz__osz00(obj_t);
static obj_t BGl_dozd2warnzf2locationz20zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62findzd2runtimezd2typez62zz__errorz00(obj_t, obj_t);
static obj_t BGl_z62sigfpezd2errorzd2handlerz62zz__errorz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_warningzf2locationzf2zz__errorz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_errorzf2sourcezf2zz__errorz00(obj_t, obj_t, obj_t, obj_t);
extern obj_t bstring_to_symbol(obj_t);
extern bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
extern obj_t BGl_fprintfz00zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL char * bgl_show_type(obj_t);
static obj_t BGl_warningzf2locationzd2filez20zz__errorz00(obj_t, obj_t, obj_t);
static BgL_z62typezd2errorzb0_bglt BGl_typenamezd2errorzd2zz__errorz00(bool_t, bool_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62defaultzd2exceptionzd2handlerz62zz__errorz00(obj_t, obj_t);
static obj_t BGl_methodzd2initzd2zz__errorz00();
static obj_t BGl_z62errorzf2errnoz90zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_notifyzd2z62errorzf2locz42zz__errorz00(BgL_z62errorz62_bglt, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t bgl_typeof(obj_t);
static obj_t BGl_z62zc3z04anonymousza32142ze3ze5zz__errorz00(obj_t, obj_t);
static obj_t BGl_notifyzd2z62errorzf2locationzd2nozd2locz42zz__errorz00(BgL_z62errorz62_bglt);
BGL_EXPORTED_DECL obj_t BGl_errorzf2czd2locationz20zz__errorz00(obj_t, obj_t, obj_t, char *, long);
static obj_t BGl_z62typezd2error3085zb0zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
extern obj_t make_string(long, unsigned char);
static obj_t BGl_z62czd2debuggingzd2showzd2typezb0zz__errorz00(obj_t, obj_t);
static obj_t BGl_z62bigloozd2typezd2errorzf2locationz90zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
extern obj_t BGl_z62iozd2unknownzd2hostzd2errorzb0zz__objectz00;
extern obj_t BGl_newlinez00zz__r4_output_6_10_3z00(obj_t);
static obj_t BGl_z62warning3087z62zz__errorz00(obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza31433ze3ze5zz__errorz00(obj_t, obj_t);
static obj_t BGl_z62exitz62zz__errorz00(obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza31419ze3ze5zz__errorz00(obj_t, obj_t);
extern obj_t BGl_exceptionzd2notifyzd2zz__objectz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_errorzd2notifyzd2zz__errorz00(obj_t);
extern obj_t BGl_z62iozd2filezd2notzd2foundzd2errorz62zz__objectz00;
BGL_EXPORTED_DECL obj_t BGl_errorzf2sourcezd2locationz20zz__errorz00(obj_t, obj_t, obj_t, obj_t);
extern obj_t BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
extern bool_t BGl_classzf3zf3zz__objectz00(obj_t);
extern obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
extern bool_t fexists(char *);
BGL_EXPORTED_DECL obj_t BGl_z62tryz62zz__errorz00(obj_t, obj_t);
static obj_t BGl_z62sigsegvzd2errorzd2handlerz62zz__errorz00(obj_t, obj_t);
extern obj_t BGl_readzd2linezd2zz__r4_input_6_10_2z00(obj_t);
static obj_t BGl_locationzd2linezd2numz00zz__errorz00(obj_t);
extern bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_z62escz62zz__errorz00(obj_t, obj_t);
extern obj_t BGl_z62iozd2connectionzd2errorz62zz__objectz00;
extern long bgl_list_length(obj_t);
BGL_EXPORTED_DECL obj_t BGl_getzd2tracezd2stackz00zz__errorz00(obj_t);
static obj_t BGl_gczd2rootszd2initz00zz__errorz00();
BGL_EXPORTED_DECL obj_t BGl_dumpzd2tracezd2stackz00zz__errorz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_bigloozd2typezd2errorzd2msgzd2zz__errorz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62errorzf2sourcezd2locationz42zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62errorzf2sourcez90zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
extern obj_t BGl_displayzd2circlezd2zz__pp_circlez00(obj_t, obj_t);
static obj_t BGl_openzd2forzd2errorz00zz__errorz00(obj_t);
extern obj_t BGl_z62indexzd2outzd2ofzd2boundszd2errorz62zz__objectz00;
extern obj_t bgl_get_trace_stack(int);
static obj_t BGl_z62modulezd2initzd2errorz62zz__errorz00(obj_t, obj_t, obj_t);
static obj_t BGl_printzd2cursorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_symbol3141z00zz__errorz00 = BUNSPEC;
extern obj_t BGl_classzd2namezd2zz__objectz00(obj_t);
static obj_t BGl_dirnamezd2ze3listz31zz__errorz00(obj_t);
extern obj_t BGl_z62conditionz62zz__objectz00;
static obj_t BGl_z62zc3z04anonymousza31815ze3ze5zz__errorz00(obj_t, obj_t);
static obj_t BGl_displayzd2tracezd2stackzd2frameze70z35zz__errorz00(obj_t, obj_t, obj_t, long);
BGL_EXPORTED_DECL obj_t BGl_currentzd2exceptionzd2handlerz00zz__errorz00();
static obj_t BGl_z62zc3z04anonymousza31727ze3ze5zz__errorz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_warningzd2notifyzd2zz__errorz00(obj_t);
static obj_t BGl_z62bigloozd2typezd2errorzd2msgzb0zz__errorz00(obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_bigloozd2typezd2errorz00zz__errorz00(obj_t, obj_t, obj_t);
extern obj_t BGl_exitdzd2popzd2protectz12z12zz__bexitz00(obj_t);
BGL_EXPORTED_DECL obj_t bgl_find_runtime_type(obj_t);
extern bool_t BGl_stringzd2prefixzf3z21zz__r4_strings_6_7z00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_symbol3182z00zz__errorz00 = BUNSPEC;
static obj_t BGl_symbol3184z00zz__errorz00 = BUNSPEC;
static obj_t BGl_z62stackzd2overflowzd2erro3083z62zz__errorz00(obj_t);
static obj_t BGl_z62error3084z62zz__errorz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_notifyzd2z62errorzb0zz__errorz00(BgL_z62errorz62_bglt);
extern obj_t BGl_z62processzd2exceptionzb0zz__objectz00;
static obj_t BGl_z62errorzd2notifyzb0zz__errorz00(obj_t, obj_t);
extern int BGl_bigloozd2warningzd2zz__paramz00();
BGL_EXPORTED_DECL obj_t the_failure(obj_t, obj_t, obj_t);
static obj_t BGl_requirezd2initializa7ationz75zz__errorz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_displayzd2tracezd2stackzd2sourcezd2zz__errorz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza31783ze3ze5zz__errorz00(obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza31694ze3ze5zz__errorz00(obj_t);
extern obj_t BGl_za2classesza2z00zz__objectz00;
extern obj_t BGl_z62iozd2sigpipezd2errorz62zz__objectz00;
extern obj_t BGl_everyz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_toplevelzd2initzd2zz__errorz00();
extern obj_t BGl_z62typezd2errorzb0zz__objectz00;
extern obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
static obj_t BGl_filenamezd2forzd2errorz00zz__errorz00(obj_t, long);
static obj_t BGl_z62raisez62zz__errorz00(obj_t, obj_t);
extern obj_t bgl_reverse(obj_t);
static obj_t BGl_genericzd2initzd2zz__errorz00();
extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
extern obj_t BGl_z62iozd2parsezd2errorz62zz__objectz00;
extern obj_t BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_displayzd2tracezd2stackz00zz__errorz00(obj_t, obj_t, obj_t);
extern obj_t BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(obj_t);
extern obj_t bgl_reverse_bang(obj_t);
BGL_EXPORTED_DECL obj_t BGl_errorzf2locationzf2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62the_failurez62zz__errorz00(obj_t, obj_t, obj_t, obj_t);
extern obj_t BGl_basenamez00zz__osz00(obj_t);
static obj_t BGl_notifyzd2z62errorzf2locationzd2locz90zz__errorz00(BgL_z62errorz62_bglt, obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza31421ze3ze5zz__errorz00(obj_t);
static obj_t BGl_z62notifyzd2interruptzb0zz__errorz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initzd2errorz00zz__errorz00(char *, char *);
BGL_EXPORTED_DECL obj_t BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
extern obj_t bgl_close_input_port(obj_t);
extern obj_t BGl_forzd2eachzd2zz__r4_control_features_6_9z00(obj_t, obj_t);
extern obj_t BGl_fprintz00zz__r4_output_6_10_3z00(obj_t, obj_t);
extern obj_t BGl_signalz00zz__osz00(int, obj_t);
static obj_t BGl_defaultzd2exceptionzd2handlerz00zz__errorz00(obj_t);
extern bool_t bigloo_strncmp(obj_t, obj_t, long);
static obj_t BGl__getzd2tracezd2stackz00zz__errorz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_warningzf2loczf2zz__errorz00(obj_t, obj_t);
static obj_t BGl_z62warningzf2locationz90zz__errorz00(obj_t, obj_t, obj_t, obj_t);
extern obj_t BGl_substringz00zz__r4_strings_6_7z00(obj_t, long, long);
static obj_t BGl_fixzd2tabulationz12zc0zz__errorz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_exitz00zz__errorz00(obj_t);
extern obj_t BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
extern obj_t BGl_applyz00zz__r4_control_features_6_9z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62z62tryz00zz__errorz00(obj_t, obj_t, obj_t);
extern obj_t BGl_z62iozd2malformedzd2urlzd2errorzb0zz__objectz00;
static obj_t BGl_z62errorzf2czd2locationz42zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(long, char *);
extern obj_t BGl_z62errorz62zz__objectz00;
extern obj_t BGl_z62warningz62zz__objectz00;
extern obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
extern obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long, long);
extern obj_t BGl_z62stackzd2overflowzd2errorz62zz__objectz00;
static obj_t BGl_z62warningzd2notifyzb0zz__errorz00(obj_t, obj_t);
extern obj_t BGl_z62iozd2portzd2errorz62zz__objectz00;
static obj_t BGl_cnstzd2initzd2zz__errorz00();
static obj_t BGl_z62typeofz62zz__errorz00(obj_t, obj_t);
extern obj_t BGl_z62iozd2timeoutzd2errorz62zz__objectz00;
BGL_EXPORTED_DECL obj_t BGl_warningzd2notifyzf2locationz20zz__errorz00(obj_t, obj_t, int);
extern obj_t BGl_z62iozd2errorzb0zz__objectz00;
static obj_t BGl_importedzd2moduleszd2initz00zz__errorz00();
BGL_EXPORTED_DECL obj_t bgl_stack_overflow_error();
static obj_t BGl_symbol3202z00zz__errorz00 = BUNSPEC;
static obj_t BGl_z62warningzf2czd2locationz42zz__errorz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_symbol3204z00zz__errorz00 = BUNSPEC;
static obj_t BGl_z62currentzd2exceptionzd2handlerz62zz__errorz00(obj_t);
static obj_t BGl_z62warningzf2locz90zz__errorz00(obj_t, obj_t, obj_t);
extern obj_t BGl_homogeneouszd2vectorzd2infoz00zz__srfi4z00(obj_t);
static obj_t BGl_z62sigbuszd2errorzd2handlerz62zz__errorz00(obj_t, obj_t);
static obj_t BGl_symbol3215z00zz__errorz00 = BUNSPEC;
extern obj_t BGl_pwdz00zz__osz00();
extern obj_t BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(obj_t);
static obj_t BGl_z62indexzd2outzd2ofzd2bounds3086zb0zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(obj_t, obj_t, obj_t, obj_t, int, int);
static obj_t BGl__displayzd2tracezd2stackz00zz__errorz00(obj_t, obj_t);
extern int BGl_bigloozd2tracezd2stackzd2depthzd2zz__paramz00();
extern obj_t BGl_displayz00zz__r4_output_6_10_3z00(obj_t, obj_t);
static obj_t BGl_z62dumpzd2tracezd2stackz62zz__errorz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_withzd2exceptionzd2handlerz00zz__errorz00(obj_t, obj_t);
static bool_t BGl_exceptionzd2locationzf3z21zz__errorz00(obj_t);
extern long BGl_stringzd2ze3integerz31zz__r4_numbers_6_5_fixnumz00(obj_t, long, long);
static obj_t BGl_z62sigillzd2errorzd2handlerz62zz__errorz00(obj_t, obj_t);
extern obj_t BGl_z62iozd2readzd2errorz62zz__objectz00;
extern obj_t BGl_valuesz00zz__r5_control_features_6_4z00(obj_t);
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_errorzd2notifyzf2locationzd2envzf2zz__errorz00, BgL_bgl_za762errorza7d2notif3278z00, BGl_z62errorzd2notifyzf2locationz42zz__errorz00, 0L, BUNSPEC, 3 );
extern obj_t BGl_pairzf3zd2envz21zz__r4_pairs_and_lists_6_3z00;
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2typezd2errorzd2envzd2zz__errorz00, BgL_bgl_za762biglooza7d2type3279z00, BGl_z62bigloozd2typezd2errorz62zz__errorz00, 0L, BUNSPEC, 3 );
DEFINE_STRING( BGl_string3200z00zz__errorz00, BgL_bgl_string3200za700za7za7_3280za7, "  ", 2 );
DEFINE_STRING( BGl_string3201z00zz__errorz00, BgL_bgl_string3201za700za7za7_3281za7, ". ", 2 );
DEFINE_STRING( BGl_string3203z00zz__errorz00, BgL_bgl_string3203za700za7za7_3282za7, "margin", 6 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_modulezd2initzd2errorzd2envzd2zz__errorz00, BgL_bgl_za762moduleza7d2init3283z00, BGl_z62modulezd2initzd2errorz62zz__errorz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string3205z00zz__errorz00, BgL_bgl_string3205za700za7za7_3284za7, "format", 6 );
DEFINE_STRING( BGl_string3206z00zz__errorz00, BgL_bgl_string3206za700za7za7_3285za7, " ", 1 );
DEFINE_STRING( BGl_string3207z00zz__errorz00, BgL_bgl_string3207za700za7za7_3286za7, " (* ", 4 );
DEFINE_STRING( BGl_string3208z00zz__errorz00, BgL_bgl_string3208za700za7za7_3287za7, ")", 1 );
DEFINE_STRING( BGl_string3209z00zz__errorz00, BgL_bgl_string3209za700za7za7_3288za7, ", ", 2 );
DEFINE_STRING( BGl_string3210z00zz__errorz00, BgL_bgl_string3210za700za7za7_3289za7, ":", 1 );
DEFINE_STRING( BGl_string3211z00zz__errorz00, BgL_bgl_string3211za700za7za7_3290za7, "@", 1 );
DEFINE_STRING( BGl_string3212z00zz__errorz00, BgL_bgl_string3212za700za7za7_3291za7, "File ~s, line ~d, character ~d\n", 31 );
DEFINE_STRING( BGl_string3213z00zz__errorz00, BgL_bgl_string3213za700za7za7_3292za7, "File ~s, character ~d\n", 22 );
DEFINE_STRING( BGl_string3214z00zz__errorz00, BgL_bgl_string3214za700za7za7_3293za7, "&display-trace-stack-source", 27 );
DEFINE_STRING( BGl_string3216z00zz__errorz00, BgL_bgl_string3216za700za7za7_3294za7, "done", 4 );
DEFINE_STRING( BGl_string3217z00zz__errorz00, BgL_bgl_string3217za700za7za7_3295za7, "^", 1 );
DEFINE_STRING( BGl_string3218z00zz__errorz00, BgL_bgl_string3218za700za7za7_3296za7, "#", 1 );
DEFINE_STRING( BGl_string3219z00zz__errorz00, BgL_bgl_string3219za700za7za7_3297za7, ", character ", 12 );
DEFINE_STRING( BGl_string3220z00zz__errorz00, BgL_bgl_string3220za700za7za7_3298za7, "\", line ", 8 );
DEFINE_STRING( BGl_string3221z00zz__errorz00, BgL_bgl_string3221za700za7za7_3299za7, ".", 1 );
DEFINE_STRING( BGl_string3222z00zz__errorz00, BgL_bgl_string3222za700za7za7_3300za7, "../", 3 );
DEFINE_STRING( BGl_string3223z00zz__errorz00, BgL_bgl_string3223za700za7za7_3301za7, "/", 1 );
DEFINE_STRING( BGl_string3224z00zz__errorz00, BgL_bgl_string3224za700za7za7_3302za7, "/cygdrive/", 10 );
DEFINE_STRING( BGl_string3225z00zz__errorz00, BgL_bgl_string3225za700za7za7_3303za7, "real", 4 );
DEFINE_STRING( BGl_string3226z00zz__errorz00, BgL_bgl_string3226za700za7za7_3304za7, "symbol", 6 );
DEFINE_STRING( BGl_string3227z00zz__errorz00, BgL_bgl_string3227za700za7za7_3305za7, "keyword", 7 );
DEFINE_STRING( BGl_string3228z00zz__errorz00, BgL_bgl_string3228za700za7za7_3306za7, "bchar", 5 );
DEFINE_STRING( BGl_string3229z00zz__errorz00, BgL_bgl_string3229za700za7za7_3307za7, "bbool", 5 );
DEFINE_STRING( BGl_string3230z00zz__errorz00, BgL_bgl_string3230za700za7za7_3308za7, "bnil", 4 );
DEFINE_STRING( BGl_string3231z00zz__errorz00, BgL_bgl_string3231za700za7za7_3309za7, "unspecified", 11 );
DEFINE_STRING( BGl_string3232z00zz__errorz00, BgL_bgl_string3232za700za7za7_3310za7, "epair", 5 );
DEFINE_STRING( BGl_string3233z00zz__errorz00, BgL_bgl_string3233za700za7za7_3311za7, "pair", 4 );
DEFINE_STRING( BGl_string3234z00zz__errorz00, BgL_bgl_string3234za700za7za7_3312za7, "class", 5 );
DEFINE_STRING( BGl_string3235z00zz__errorz00, BgL_bgl_string3235za700za7za7_3313za7, "vector", 6 );
DEFINE_STRING( BGl_string3236z00zz__errorz00, BgL_bgl_string3236za700za7za7_3314za7, "tvector", 7 );
DEFINE_STRING( BGl_string3237z00zz__errorz00, BgL_bgl_string3237za700za7za7_3315za7, "struct:", 7 );
DEFINE_STRING( BGl_string3238z00zz__errorz00, BgL_bgl_string3238za700za7za7_3316za7, "input-port", 10 );
DEFINE_STRING( BGl_string3239z00zz__errorz00, BgL_bgl_string3239za700za7za7_3317za7, "binary-port", 11 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_typeofzd2envzd2zz__errorz00, BgL_bgl_za762typeofza762za7za7__3318z00, BGl_z62typeofz62zz__errorz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_z62tryzd2envzb0zz__errorz00, BgL_bgl_za762za762tryza700za7za7__3319za7, BGl_z62z62tryz00zz__errorz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string3240z00zz__errorz00, BgL_bgl_string3240za700za7za7_3320za7, "cell", 4 );
DEFINE_STRING( BGl_string3241z00zz__errorz00, BgL_bgl_string3241za700za7za7_3321za7, "foreign:", 8 );
DEFINE_STRING( BGl_string3242z00zz__errorz00, BgL_bgl_string3242za700za7za7_3322za7, "socket", 6 );
DEFINE_STRING( BGl_string3243z00zz__errorz00, BgL_bgl_string3243za700za7za7_3323za7, "datagram-socket", 15 );
DEFINE_STRING( BGl_string3244z00zz__errorz00, BgL_bgl_string3244za700za7za7_3324za7, "process", 7 );
DEFINE_STRING( BGl_string3245z00zz__errorz00, BgL_bgl_string3245za700za7za7_3325za7, "custom", 6 );
DEFINE_STRING( BGl_string3246z00zz__errorz00, BgL_bgl_string3246za700za7za7_3326za7, "opaque", 6 );
DEFINE_STRING( BGl_string3247z00zz__errorz00, BgL_bgl_string3247za700za7za7_3327za7, "_", 1 );
DEFINE_STRING( BGl_string3248z00zz__errorz00, BgL_bgl_string3248za700za7za7_3328za7, "ucs2string", 10 );
DEFINE_STRING( BGl_string3249z00zz__errorz00, BgL_bgl_string3249za700za7za7_3329za7, "ucs2", 4 );
DEFINE_STRING( BGl_string3250z00zz__errorz00, BgL_bgl_string3250za700za7za7_3330za7, "elong", 5 );
DEFINE_STRING( BGl_string3251z00zz__errorz00, BgL_bgl_string3251za700za7za7_3331za7, "llong", 5 );
DEFINE_STRING( BGl_string3252z00zz__errorz00, BgL_bgl_string3252za700za7za7_3332za7, "mutex", 5 );
DEFINE_STRING( BGl_string3253z00zz__errorz00, BgL_bgl_string3253za700za7za7_3333za7, "condvar", 7 );
DEFINE_STRING( BGl_string3254z00zz__errorz00, BgL_bgl_string3254za700za7za7_3334za7, "date", 4 );
DEFINE_STRING( BGl_string3255z00zz__errorz00, BgL_bgl_string3255za700za7za7_3335za7, "bignum", 6 );
DEFINE_STRING( BGl_string3256z00zz__errorz00, BgL_bgl_string3256za700za7za7_3336za7, "mmap", 4 );
DEFINE_STRING( BGl_string3257z00zz__errorz00, BgL_bgl_string3257za700za7za7_3337za7, "regexp", 6 );
DEFINE_STRING( BGl_string3258z00zz__errorz00, BgL_bgl_string3258za700za7za7_3338za7, "int8", 4 );
DEFINE_STRING( BGl_string3259z00zz__errorz00, BgL_bgl_string3259za700za7za7_3339za7, "uint8", 5 );
DEFINE_STRING( BGl_string3260z00zz__errorz00, BgL_bgl_string3260za700za7za7_3340za7, "int16", 5 );
DEFINE_STRING( BGl_string3261z00zz__errorz00, BgL_bgl_string3261za700za7za7_3341za7, "uint16", 6 );
DEFINE_STRING( BGl_string3262z00zz__errorz00, BgL_bgl_string3262za700za7za7_3342za7, "int32", 5 );
DEFINE_STRING( BGl_string3263z00zz__errorz00, BgL_bgl_string3263za700za7za7_3343za7, "uint32", 6 );
DEFINE_STRING( BGl_string3264z00zz__errorz00, BgL_bgl_string3264za700za7za7_3344za7, "int64", 5 );
DEFINE_STRING( BGl_string3265z00zz__errorz00, BgL_bgl_string3265za700za7za7_3345za7, "uint64", 6 );
DEFINE_STRING( BGl_string3266z00zz__errorz00, BgL_bgl_string3266za700za7za7_3346za7, "bcnst", 5 );
DEFINE_STRING( BGl_string3267z00zz__errorz00, BgL_bgl_string3267za700za7za7_3347za7, "&&try", 5 );
DEFINE_STRING( BGl_string3268z00zz__errorz00, BgL_bgl_string3268za700za7za7_3348za7, "&notify-interrupt", 17 );
DEFINE_STRING( BGl_string3269z00zz__errorz00, BgL_bgl_string3269za700za7za7_3349za7, "*** INTERRUPT:bigloo:", 21 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_dumpzd2tracezd2stackzd2envzd2zz__errorz00, BgL_bgl_za762dumpza7d2traceza73350za7, BGl_z62dumpzd2tracezd2stackz62zz__errorz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string3270z00zz__errorz00, BgL_bgl_string3270za700za7za7_3351za7, "arithmetic procedure", 20 );
DEFINE_STRING( BGl_string3271z00zz__errorz00, BgL_bgl_string3271za700za7za7_3352za7, "`floating point' exception", 26 );
DEFINE_STRING( BGl_string3272z00zz__errorz00, BgL_bgl_string3272za700za7za7_3353za7, "raised", 6 );
DEFINE_STRING( BGl_string3273z00zz__errorz00, BgL_bgl_string3273za700za7za7_3354za7, "bigloo", 6 );
DEFINE_STRING( BGl_string3274z00zz__errorz00, BgL_bgl_string3274za700za7za7_3355za7, "`illegal instruction' exception", 31 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc3189z00zz__errorz00, BgL_bgl_za762za7c3za704anonymo3356za7, BGl_z62zc3z04anonymousza31783ze3ze5zz__errorz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3275z00zz__errorz00, BgL_bgl_string3275za700za7za7_3357za7, "`bus error' exception", 21 );
DEFINE_STRING( BGl_string3276z00zz__errorz00, BgL_bgl_string3276za700za7za7_3358za7, "`segmentation violation' exception", 34 );
DEFINE_STRING( BGl_string3277z00zz__errorz00, BgL_bgl_string3277za700za7za7_3359za7, "__error", 7 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc3193z00zz__errorz00, BgL_bgl_za762za7c3za704anonymo3360za7, BGl_z62zc3z04anonymousza31815ze3ze5zz__errorz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_displayzd2tracezd2stackzd2sourcezd2envz00zz__errorz00, BgL_bgl_za762displayza7d2tra3361z00, BGl_z62displayzd2tracezd2stackzd2sourcezb0zz__errorz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_czd2debuggingzd2showzd2typezd2envz00zz__errorz00, BgL_bgl_za762cza7d2debugging3362z00, BGl_z62czd2debuggingzd2showzd2typezb0zz__errorz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stackzd2overflowzd2errorzd2envzd2zz__errorz00, BgL_bgl_za762stackza7d2overf3363z00, BGl_z62stackzd2overflowzd2erro3083z62zz__errorz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2typezd2errorzd2msgzd2envz00zz__errorz00, BgL_bgl_za762biglooza7d2type3364z00, BGl_z62bigloozd2typezd2errorzd2msgzb0zz__errorz00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_errorzf2locationzd2envz20zz__errorz00, BgL_bgl_za762errorza7f2locat3365z00, BGl_z62errorzf2locationz90zz__errorz00, 0L, BUNSPEC, 5 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_errorzf2sourcezd2envz20zz__errorz00, BgL_bgl_za762errorza7f2sourc3366z00, BGl_z62errorzf2sourcez90zz__errorz00, 0L, BUNSPEC, 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_indexzd2outzd2ofzd2boundszd2errorzd2envzd2zz__errorz00, BgL_bgl_za762indexza7d2outza7d3367za7, BGl_z62indexzd2outzd2ofzd2bounds3086zb0zz__errorz00, 0L, BUNSPEC, 6 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_sigbuszd2errorzd2handlerzd2envzd2zz__errorz00, BgL_bgl_za762sigbusza7d2erro3368z00, BGl_z62sigbuszd2errorzd2handlerz62zz__errorz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_errorzd2envzd2zz__errorz00, BgL_bgl_za762error3084za762za73369za7, BGl_z62error3084z62zz__errorz00, 0L, BUNSPEC, 3 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_sigsegvzd2errorzd2handlerzd2envzd2zz__errorz00, BgL_bgl_za762sigsegvza7d2err3370z00, BGl_z62sigsegvzd2errorzd2handlerz62zz__errorz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_displayzd2tracezd2stackzd2envzd2zz__errorz00, BgL_bgl__displayza7d2trace3371za7, opt_generic_entry, BGl__displayzd2tracezd2stackz00zz__errorz00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_warningzf2loczd2envz20zz__errorz00, BgL_bgl_za762warningza7f2loc3372z00, va_generic_entry, BGl_z62warningzf2locz90zz__errorz00, BUNSPEC, -2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_warningzf2czd2locationzd2envzf2zz__errorz00, BgL_bgl_za762warningza7f2cza7d3373za7, va_generic_entry, BGl_z62warningzf2czd2locationz42zz__errorz00, BUNSPEC, -3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_errorzf2errnozd2envz20zz__errorz00, BgL_bgl_za762errorza7f2errno3374z00, BGl_z62errorzf2errnoz90zz__errorz00, 0L, BUNSPEC, 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_warningzf2locationzd2envz20zz__errorz00, BgL_bgl_za762warningza7f2loc3375z00, va_generic_entry, BGl_z62warningzf2locationz90zz__errorz00, BUNSPEC, -3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_the_failurezd2envzd2zz__errorz00, BgL_bgl_za762the_failureza763376z00, BGl_z62the_failurez62zz__errorz00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_currentzd2exceptionzd2handlerzd2envzd2zz__errorz00, BgL_bgl_za762currentza7d2exc3377z00, BGl_z62currentzd2exceptionzd2handlerz62zz__errorz00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string3136z00zz__errorz00, BgL_bgl_string3136za700za7za7_3378za7, "BIGLOOSTACKDEPTH", 16 );
DEFINE_STRING( BGl_string3137z00zz__errorz00, BgL_bgl_string3137za700za7za7_3379za7, "/tmp/4.4a/runtime/Llib/error.scm", 32 );
DEFINE_STRING( BGl_string3138z00zz__errorz00, BgL_bgl_string3138za700za7za7_3380za7, "&error/errno", 12 );
DEFINE_STRING( BGl_string3139z00zz__errorz00, BgL_bgl_string3139za700za7za7_3381za7, "bint", 4 );
DEFINE_STRING( BGl_string3140z00zz__errorz00, BgL_bgl_string3140za700za7za7_3382za7, "stack overflow", 14 );
DEFINE_STRING( BGl_string3142z00zz__errorz00, BgL_bgl_string3142za700za7za7_3383za7, "at", 2 );
DEFINE_STRING( BGl_string3143z00zz__errorz00, BgL_bgl_string3143za700za7za7_3384za7, "with-exception-handler", 22 );
DEFINE_STRING( BGl_string3144z00zz__errorz00, BgL_bgl_string3144za700za7za7_3385za7, "Incorrect thunk arity", 21 );
DEFINE_STRING( BGl_string3145z00zz__errorz00, BgL_bgl_string3145za700za7za7_3386za7, "Incorrect handler arity", 23 );
DEFINE_STRING( BGl_string3146z00zz__errorz00, BgL_bgl_string3146za700za7za7_3387za7, "&with-exception-handler", 23 );
DEFINE_STRING( BGl_string3147z00zz__errorz00, BgL_bgl_string3147za700za7za7_3388za7, "procedure", 9 );
DEFINE_STRING( BGl_string3148z00zz__errorz00, BgL_bgl_string3148za700za7za7_3389za7, "raise", 5 );
DEFINE_STRING( BGl_string3149z00zz__errorz00, BgL_bgl_string3149za700za7za7_3390za7, "Handler return from error", 25 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_warningzd2notifyzf2locationzd2envzf2zz__errorz00, BgL_bgl_za762warningza7d2not3391z00, BGl_z62warningzd2notifyzf2locationz42zz__errorz00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_typezd2errorzd2envz00zz__errorz00, BgL_bgl_za762typeza7d2error33392z00, BGl_z62typezd2error3085zb0zz__errorz00, 0L, BUNSPEC, 5 );
DEFINE_STRING( BGl_string3150z00zz__errorz00, BgL_bgl_string3150za700za7za7_3393za7, "uncaught exception", 18 );
DEFINE_STRING( BGl_string3151z00zz__errorz00, BgL_bgl_string3151za700za7za7_3394za7, "' must be recompiled (see also -unsafev option).", 48 );
DEFINE_STRING( BGl_string3152z00zz__errorz00, BgL_bgl_string3152za700za7za7_3395za7, "At least `", 10 );
DEFINE_STRING( BGl_string3153z00zz__errorz00, BgL_bgl_string3153za700za7za7_3396za7, "'.\n", 3 );
DEFINE_STRING( BGl_string3154z00zz__errorz00, BgL_bgl_string3154za700za7za7_3397za7, "' is inconsistently initialized by module `", 43 );
DEFINE_STRING( BGl_string3155z00zz__errorz00, BgL_bgl_string3155za700za7za7_3398za7, "Module `", 8 );
DEFINE_STRING( BGl_string3156z00zz__errorz00, BgL_bgl_string3156za700za7za7_3399za7, ":Inconsistent module initialization\n", 36 );
DEFINE_STRING( BGl_string3157z00zz__errorz00, BgL_bgl_string3157za700za7za7_3400za7, "*** ERROR:", 10 );
DEFINE_STRING( BGl_string3158z00zz__errorz00, BgL_bgl_string3158za700za7za7_3401za7, "&module-init-error", 18 );
DEFINE_STRING( BGl_string3159z00zz__errorz00, BgL_bgl_string3159za700za7za7_3402za7, "bstring", 7 );
DEFINE_STRING( BGl_string3160z00zz__errorz00, BgL_bgl_string3160za700za7za7_3403za7, "&error/c-location", 17 );
DEFINE_STRING( BGl_string3161z00zz__errorz00, BgL_bgl_string3161za700za7za7_3404za7, "\" provided", 10 );
DEFINE_STRING( BGl_string3162z00zz__errorz00, BgL_bgl_string3162za700za7za7_3405za7, "\" expected, \"", 13 );
DEFINE_STRING( BGl_string3163z00zz__errorz00, BgL_bgl_string3163za700za7za7_3406za7, " \"", 2 );
DEFINE_STRING( BGl_string3164z00zz__errorz00, BgL_bgl_string3164za700za7za7_3407za7, "&bigloo-type-error-msg", 22 );
DEFINE_STRING( BGl_string3165z00zz__errorz00, BgL_bgl_string3165za700za7za7_3408za7, "\077\077?", 3 );
DEFINE_STRING( BGl_string3166z00zz__errorz00, BgL_bgl_string3166za700za7za7_3409za7, "Type", 4 );
DEFINE_STRING( BGl_string3167z00zz__errorz00, BgL_bgl_string3167za700za7za7_3410za7, "]", 1 );
DEFINE_STRING( BGl_string3168z00zz__errorz00, BgL_bgl_string3168za700za7za7_3411za7, " out of range [0..", 18 );
DEFINE_STRING( BGl_string3169z00zz__errorz00, BgL_bgl_string3169za700za7za7_3412za7, "index ", 6 );
DEFINE_STRING( BGl_string3170z00zz__errorz00, BgL_bgl_string3170za700za7za7_3413za7, "&index-out-of-bounds3086", 24 );
DEFINE_STRING( BGl_string3171z00zz__errorz00, BgL_bgl_string3171za700za7za7_3414za7, "&warning/c-location", 19 );
DEFINE_STRING( BGl_string3172z00zz__errorz00, BgL_bgl_string3172za700za7za7_3415za7, ":\n", 2 );
DEFINE_STRING( BGl_string3173z00zz__errorz00, BgL_bgl_string3173za700za7za7_3416za7, " -- ", 4 );
DEFINE_STRING( BGl_string3174z00zz__errorz00, BgL_bgl_string3174za700za7za7_3417za7, "\", character ", 13 );
DEFINE_STRING( BGl_string3175z00zz__errorz00, BgL_bgl_string3175za700za7za7_3418za7, "File \"", 6 );
DEFINE_STRING( BGl_string3176z00zz__errorz00, BgL_bgl_string3176za700za7za7_3419za7, "", 0 );
DEFINE_STRING( BGl_string3177z00zz__errorz00, BgL_bgl_string3177za700za7za7_3420za7, "stdin", 5 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_withzd2exceptionzd2handlerzd2envzd2zz__errorz00, BgL_bgl_za762withza7d2except3421z00, BGl_z62withzd2exceptionzd2handlerz62zz__errorz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string3178z00zz__errorz00, BgL_bgl_string3178za700za7za7_3422za7, "string://", 9 );
DEFINE_STRING( BGl_string3179z00zz__errorz00, BgL_bgl_string3179za700za7za7_3423za7, "...", 3 );
DEFINE_STRING( BGl_string3180z00zz__errorz00, BgL_bgl_string3180za700za7za7_3424za7, "win32", 5 );
DEFINE_STRING( BGl_string3181z00zz__errorz00, BgL_bgl_string3181za700za7za7_3425za7, "<eof>", 5 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_sigfpezd2errorzd2handlerzd2envzd2zz__errorz00, BgL_bgl_za762sigfpeza7d2erro3426z00, BGl_z62sigfpezd2errorzd2handlerz62zz__errorz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3183z00zz__errorz00, BgL_bgl_string3183za700za7za7_3427za7, "line-col", 8 );
DEFINE_STRING( BGl_string3185z00zz__errorz00, BgL_bgl_string3185za700za7za7_3428za7, "line", 4 );
DEFINE_STRING( BGl_string3186z00zz__errorz00, BgL_bgl_string3186za700za7za7_3429za7, "*** CONDITION: ", 15 );
DEFINE_STRING( BGl_string3187z00zz__errorz00, BgL_bgl_string3187za700za7za7_3430za7, "&error-notify/location", 22 );
DEFINE_STRING( BGl_string3188z00zz__errorz00, BgL_bgl_string3188za700za7za7_3431za7, "*** WARNING:bigloo:", 19 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_warningzd2notifyzd2envz00zz__errorz00, BgL_bgl_za762warningza7d2not3432z00, BGl_z62warningzd2notifyzb0zz__errorz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3190z00zz__errorz00, BgL_bgl_string3190za700za7za7_3433za7, "[string]", 8 );
DEFINE_STRING( BGl_string3191z00zz__errorz00, BgL_bgl_string3191za700za7za7_3434za7, "[stdin]", 7 );
DEFINE_STRING( BGl_string3192z00zz__errorz00, BgL_bgl_string3192za700za7za7_3435za7, "&warning-notify/location", 24 );
DEFINE_STRING( BGl_string3194z00zz__errorz00, BgL_bgl_string3194za700za7za7_3436za7, "_display-trace-stack", 20 );
DEFINE_STRING( BGl_string3195z00zz__errorz00, BgL_bgl_string3195za700za7za7_3437za7, "output-port", 11 );
DEFINE_STRING( BGl_string3196z00zz__errorz00, BgL_bgl_string3196za700za7za7_3438za7, "\n*** INTERNAL ERROR: corrupted stack -- ~s\n", 43 );
DEFINE_STRING( BGl_string3197z00zz__errorz00, BgL_bgl_string3197za700za7za7_3439za7, "! ", 2 );
DEFINE_STRING( BGl_string3198z00zz__errorz00, BgL_bgl_string3198za700za7za7_3440za7, "    ", 4 );
DEFINE_STRING( BGl_string3199z00zz__errorz00, BgL_bgl_string3199za700za7za7_3441za7, "   ", 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_raisezd2envzd2zz__errorz00, BgL_bgl_za762raiseza762za7za7__e3442z00, BGl_z62raisez62zz__errorz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_notifyzd2interruptzd2envz00zz__errorz00, BgL_bgl_za762notifyza7d2inte3443z00, BGl_z62notifyzd2interruptzb0zz__errorz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_getzd2tracezd2stackzd2envzd2zz__errorz00, BgL_bgl__getza7d2traceza7d2s3444z00, opt_generic_entry, BGl__getzd2tracezd2stackz00zz__errorz00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_errorzd2notifyzd2envz00zz__errorz00, BgL_bgl_za762errorza7d2notif3445z00, BGl_z62errorzd2notifyzb0zz__errorz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_errorzf2sourcezd2locationzd2envzf2zz__errorz00, BgL_bgl_za762errorza7f2sourc3446z00, BGl_z62errorzf2sourcezd2locationz42zz__errorz00, 0L, BUNSPEC, 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_errorzf2czd2locationzd2envzf2zz__errorz00, BgL_bgl_za762errorza7f2cza7d2l3447za7, BGl_z62errorzf2czd2locationz42zz__errorz00, 0L, BUNSPEC, 5 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2typezd2errorzf2locationzd2envz20zz__errorz00, BgL_bgl_za762biglooza7d2type3448z00, BGl_z62bigloozd2typezd2errorzf2locationz90zz__errorz00, 0L, BUNSPEC, 5 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_sigillzd2errorzd2handlerzd2envzd2zz__errorz00, BgL_bgl_za762sigillza7d2erro3449z00, BGl_z62sigillzd2errorzd2handlerz62zz__errorz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_exitzd2envzd2zz__errorz00, BgL_bgl_za762exitza762za7za7__er3450z00, va_generic_entry, BGl_z62exitz62zz__errorz00, BUNSPEC, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_warningzd2envzd2zz__errorz00, BgL_bgl_za762warning3087za763451z00, va_generic_entry, BGl_z62warning3087z62zz__errorz00, BUNSPEC, -1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_defaultzd2exceptionzd2handlerzd2envzd2zz__errorz00, BgL_bgl_za762defaultza7d2exc3452z00, BGl_z62defaultzd2exceptionzd2handlerz62zz__errorz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_findzd2runtimezd2typezd2envzd2zz__errorz00, BgL_bgl_za762findza7d2runtim3453z00, BGl_z62findzd2runtimezd2typez62zz__errorz00, 0L, BUNSPEC, 1 );

/* GC roots registration */
static obj_t bgl_gc_roots_register() {
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
void *roots_min = (void*)ULONG_MAX, *roots_max = 0;
ADD_ROOT( (void *)(&BGl_symbol3141z00zz__errorz00) );
ADD_ROOT( (void *)(&BGl_symbol3182z00zz__errorz00) );
ADD_ROOT( (void *)(&BGl_symbol3184z00zz__errorz00) );
ADD_ROOT( (void *)(&BGl_requirezd2initializa7ationz75zz__errorz00) );
ADD_ROOT( (void *)(&BGl_symbol3202z00zz__errorz00) );
ADD_ROOT( (void *)(&BGl_symbol3204z00zz__errorz00) );
ADD_ROOT( (void *)(&BGl_symbol3215z00zz__errorz00) );
#undef ADD_ROOT
if( roots_max > 0 ) GC_add_roots( roots_min, ((void **)roots_max) + 1 );
#endif
return BUNSPEC;
}



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long BgL_checksumz00_5080, char * BgL_fromz00_5081)
{
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__errorz00))
{ 
BGl_requirezd2initializa7ationz75zz__errorz00 = 
BBOOL(((bool_t)0)); 
BGl_gczd2rootszd2initz00zz__errorz00(); 
BGl_cnstzd2initzd2zz__errorz00(); 
BGl_importedzd2moduleszd2initz00zz__errorz00(); 
return 
BGl_toplevelzd2initzd2zz__errorz00();}  else 
{ 
return BUNSPEC;} } 

}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__errorz00()
{
{ /* Llib/error.scm 18 */
BGl_symbol3141z00zz__errorz00 = 
bstring_to_symbol(BGl_string3142z00zz__errorz00); 
BGl_symbol3182z00zz__errorz00 = 
bstring_to_symbol(BGl_string3183z00zz__errorz00); 
BGl_symbol3184z00zz__errorz00 = 
bstring_to_symbol(BGl_string3185z00zz__errorz00); 
BGl_symbol3202z00zz__errorz00 = 
bstring_to_symbol(BGl_string3203z00zz__errorz00); 
BGl_symbol3204z00zz__errorz00 = 
bstring_to_symbol(BGl_string3205z00zz__errorz00); 
return ( 
BGl_symbol3215z00zz__errorz00 = 
bstring_to_symbol(BGl_string3216z00zz__errorz00), BUNSPEC) ;} 

}



/* gc-roots-init */
obj_t BGl_gczd2rootszd2initz00zz__errorz00()
{
{ /* Llib/error.scm 18 */
return 
bgl_gc_roots_register();} 

}



/* toplevel-init */
obj_t BGl_toplevelzd2initzd2zz__errorz00()
{
{ /* Llib/error.scm 18 */
BGl_signalz00zz__osz00(SIGFPE, BGl_sigfpezd2errorzd2handlerzd2envzd2zz__errorz00); 
BGl_signalz00zz__osz00(SIGTRAP, BGl_sigfpezd2errorzd2handlerzd2envzd2zz__errorz00); 
BGl_signalz00zz__osz00(SIGILL, BGl_sigillzd2errorzd2handlerzd2envzd2zz__errorz00); 
BGl_signalz00zz__osz00(SIGBUS, BGl_sigbuszd2errorzd2handlerzd2envzd2zz__errorz00); 
return 
BGl_signalz00zz__osz00(SIGSEGV, BGl_sigsegvzd2errorzd2handlerzd2envzd2zz__errorz00);} 

}



/* _get-trace-stack */
obj_t BGl__getzd2tracezd2stackz00zz__errorz00(obj_t BgL_env1178z00_5, obj_t BgL_opt1177z00_4)
{
{ /* Llib/error.scm 278 */
{ /* Llib/error.scm 278 */

switch( 
VECTOR_LENGTH(BgL_opt1177z00_4)) { case ((long)0) : 

{ /* Llib/error.scm 278 */

return 
BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);} break;case ((long)1) : 

{ /* Llib/error.scm 278 */
obj_t BgL_depthz00_1559;
BgL_depthz00_1559 = 
VECTOR_REF(BgL_opt1177z00_4,((long)0)); 
{ /* Llib/error.scm 278 */

return 
BGl_getzd2tracezd2stackz00zz__errorz00(BgL_depthz00_1559);} } break;
default: 
return BUNSPEC;} } } 

}



/* get-trace-stack */
BGL_EXPORTED_DEF obj_t BGl_getzd2tracezd2stackz00zz__errorz00(obj_t BgL_depthz00_3)
{
{ /* Llib/error.scm 278 */
{ /* Llib/error.scm 279 */
obj_t BgL_dz00_1560;
if(
INTEGERP(BgL_depthz00_3))
{ /* Llib/error.scm 280 */
BgL_dz00_1560 = BgL_depthz00_3; }  else 
{ /* Llib/error.scm 281 */
obj_t BgL_g1040z00_1562;
BgL_g1040z00_1562 = 
BGl_getenvz00zz__osz00(BGl_string3136z00zz__errorz00); 
if(
CBOOL(BgL_g1040z00_1562))
{ /* Ieee/fixnum.scm 983 */

BgL_dz00_1560 = 
BINT(
BGl_stringzd2ze3integerz31zz__r4_numbers_6_5_fixnumz00(BgL_g1040z00_1562, ((long)10), ((long)0))); }  else 
{ /* Llib/error.scm 281 */
{ /* Llib/error.scm 282 */
int BgL_arg1302z00_1570;
BgL_arg1302z00_1570 = 
BGl_bigloozd2tracezd2stackzd2depthzd2zz__paramz00(); ((bool_t)1); } 
BgL_dz00_1560 = 
BINT(
BGl_bigloozd2tracezd2stackzd2depthzd2zz__paramz00()); } } 
return 
bgl_get_trace_stack(
CINT(BgL_dz00_1560));} } 

}



/* the_failure */
BGL_EXPORTED_DEF obj_t the_failure(obj_t BgL_procz00_6, obj_t BgL_msgz00_7, obj_t BgL_objz00_8)
{
{ /* Llib/error.scm 289 */
if(
BGl_isazf3zf3zz__objectz00(BgL_procz00_6, BGl_z62exceptionz62zz__objectz00))
{ /* Llib/error.scm 290 */
return 
BGl_raisez00zz__errorz00(BgL_procz00_6);}  else 
{ /* Llib/error.scm 290 */
return 
BGl_errorz00zz__errorz00(BgL_procz00_6, BgL_msgz00_7, BgL_objz00_8);} } 

}



/* &the_failure */
obj_t BGl_z62the_failurez62zz__errorz00(obj_t BgL_envz00_4831, obj_t BgL_procz00_4832, obj_t BgL_msgz00_4833, obj_t BgL_objz00_4834)
{
{ /* Llib/error.scm 289 */
return 
the_failure(BgL_procz00_4832, BgL_msgz00_4833, BgL_objz00_4834);} 

}



/* error/errno */
BGL_EXPORTED_DEF obj_t bgl_system_failure(int BgL_sysnoz00_9, obj_t BgL_procz00_10, obj_t BgL_msgz00_11, obj_t BgL_objz00_12)
{
{ /* Llib/error.scm 297 */
if(
(
(long)(BgL_sysnoz00_9)==
(long)(BGL_IO_ERROR)))
{ /* Llib/error.scm 301 */
BgL_z62iozd2errorzb0_bglt BgL_arg1306z00_1573;
{ /* Llib/error.scm 301 */
BgL_z62iozd2errorzb0_bglt BgL_new1043z00_1574;
{ /* Llib/error.scm 301 */
BgL_z62iozd2errorzb0_bglt BgL_new1042z00_1577;
BgL_new1042z00_1577 = 
((BgL_z62iozd2errorzb0_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2errorzb0_bgl) ))); 
{ /* Llib/error.scm 301 */
long BgL_arg1309z00_1578;
{ /* Llib/error.scm 301 */
long BgL_res2608z00_3283;
BgL_res2608z00_3283 = 
BGL_CLASS_INDEX(BGl_z62iozd2errorzb0zz__objectz00); 
BgL_arg1309z00_1578 = BgL_res2608z00_3283; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1042z00_1577), BgL_arg1309z00_1578); } 
BgL_new1043z00_1574 = BgL_new1042z00_1577; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1043z00_1574)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1043z00_1574)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_5135;
{ /* Llib/error.scm 301 */
obj_t BgL_arg1307z00_1575;
{ /* Llib/error.scm 301 */
obj_t BgL_arg1308z00_1576;
{ /* Llib/error.scm 301 */
obj_t BgL_res2609z00_3287;
{ /* Llib/error.scm 301 */
obj_t BgL_classz00_3286;
BgL_classz00_3286 = BGl_z62iozd2errorzb0zz__objectz00; 
BgL_res2609z00_3287 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_3286); } 
BgL_arg1308z00_1576 = BgL_res2609z00_3287; } 
BgL_arg1307z00_1575 = 
VECTOR_REF(BgL_arg1308z00_1576,((long)2)); } 
BgL_auxz00_5135 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_arg1307z00_1575); } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1043z00_1574)))->BgL_stackz00)=((obj_t)BgL_auxz00_5135),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1043z00_1574)))->BgL_procz00)=((obj_t)BgL_procz00_10),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1043z00_1574)))->BgL_msgz00)=((obj_t)BgL_msgz00_11),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1043z00_1574)))->BgL_objz00)=((obj_t)BgL_objz00_12),BUNSPEC); 
BgL_arg1306z00_1573 = BgL_new1043z00_1574; } 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg1306z00_1573));}  else 
{ /* Llib/error.scm 299 */
if(
(
(long)(BgL_sysnoz00_9)==
(long)(BGL_IO_PORT_ERROR)))
{ /* Llib/error.scm 304 */
BgL_z62iozd2portzd2errorz62_bglt BgL_arg1311z00_1580;
{ /* Llib/error.scm 304 */
BgL_z62iozd2portzd2errorz62_bglt BgL_new1045z00_1581;
{ /* Llib/error.scm 304 */
BgL_z62iozd2portzd2errorz62_bglt BgL_new1044z00_1584;
BgL_new1044z00_1584 = 
((BgL_z62iozd2portzd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2portzd2errorz62_bgl) ))); 
{ /* Llib/error.scm 304 */
long BgL_arg1314z00_1585;
{ /* Llib/error.scm 304 */
long BgL_res2611z00_3293;
BgL_res2611z00_3293 = 
BGL_CLASS_INDEX(BGl_z62iozd2portzd2errorz62zz__objectz00); 
BgL_arg1314z00_1585 = BgL_res2611z00_3293; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1044z00_1584), BgL_arg1314z00_1585); } 
BgL_new1045z00_1581 = BgL_new1044z00_1584; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1045z00_1581)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1045z00_1581)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_5161;
{ /* Llib/error.scm 304 */
obj_t BgL_arg1312z00_1582;
{ /* Llib/error.scm 304 */
obj_t BgL_arg1313z00_1583;
{ /* Llib/error.scm 304 */
obj_t BgL_res2612z00_3297;
{ /* Llib/error.scm 304 */
obj_t BgL_classz00_3296;
BgL_classz00_3296 = BGl_z62iozd2portzd2errorz62zz__objectz00; 
BgL_res2612z00_3297 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_3296); } 
BgL_arg1313z00_1583 = BgL_res2612z00_3297; } 
BgL_arg1312z00_1582 = 
VECTOR_REF(BgL_arg1313z00_1583,((long)2)); } 
BgL_auxz00_5161 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_arg1312z00_1582); } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1045z00_1581)))->BgL_stackz00)=((obj_t)BgL_auxz00_5161),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1045z00_1581)))->BgL_procz00)=((obj_t)BgL_procz00_10),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1045z00_1581)))->BgL_msgz00)=((obj_t)BgL_msgz00_11),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1045z00_1581)))->BgL_objz00)=((obj_t)BgL_objz00_12),BUNSPEC); 
BgL_arg1311z00_1580 = BgL_new1045z00_1581; } 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg1311z00_1580));}  else 
{ /* Llib/error.scm 302 */
if(
(
(long)(BgL_sysnoz00_9)==
(long)(BGL_IO_READ_ERROR)))
{ /* Llib/error.scm 307 */
BgL_z62iozd2readzd2errorz62_bglt BgL_arg1316z00_1587;
{ /* Llib/error.scm 307 */
BgL_z62iozd2readzd2errorz62_bglt BgL_new1047z00_1588;
{ /* Llib/error.scm 307 */
BgL_z62iozd2readzd2errorz62_bglt BgL_new1046z00_1591;
BgL_new1046z00_1591 = 
((BgL_z62iozd2readzd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2readzd2errorz62_bgl) ))); 
{ /* Llib/error.scm 307 */
long BgL_arg1319z00_1592;
{ /* Llib/error.scm 307 */
long BgL_res2614z00_3303;
BgL_res2614z00_3303 = 
BGL_CLASS_INDEX(BGl_z62iozd2readzd2errorz62zz__objectz00); 
BgL_arg1319z00_1592 = BgL_res2614z00_3303; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1046z00_1591), BgL_arg1319z00_1592); } 
BgL_new1047z00_1588 = BgL_new1046z00_1591; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1047z00_1588)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1047z00_1588)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_5187;
{ /* Llib/error.scm 307 */
obj_t BgL_arg1317z00_1589;
{ /* Llib/error.scm 307 */
obj_t BgL_arg1318z00_1590;
{ /* Llib/error.scm 307 */
obj_t BgL_res2615z00_3307;
{ /* Llib/error.scm 307 */
obj_t BgL_classz00_3306;
BgL_classz00_3306 = BGl_z62iozd2readzd2errorz62zz__objectz00; 
BgL_res2615z00_3307 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_3306); } 
BgL_arg1318z00_1590 = BgL_res2615z00_3307; } 
BgL_arg1317z00_1589 = 
VECTOR_REF(BgL_arg1318z00_1590,((long)2)); } 
BgL_auxz00_5187 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_arg1317z00_1589); } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1047z00_1588)))->BgL_stackz00)=((obj_t)BgL_auxz00_5187),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1047z00_1588)))->BgL_procz00)=((obj_t)BgL_procz00_10),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1047z00_1588)))->BgL_msgz00)=((obj_t)BgL_msgz00_11),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1047z00_1588)))->BgL_objz00)=((obj_t)BgL_objz00_12),BUNSPEC); 
BgL_arg1316z00_1587 = BgL_new1047z00_1588; } 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg1316z00_1587));}  else 
{ /* Llib/error.scm 305 */
if(
(
(long)(BgL_sysnoz00_9)==
(long)(BGL_IO_WRITE_ERROR)))
{ /* Llib/error.scm 310 */
BgL_z62iozd2writezd2errorz62_bglt BgL_arg1322z00_1594;
{ /* Llib/error.scm 310 */
BgL_z62iozd2writezd2errorz62_bglt BgL_new1049z00_1595;
{ /* Llib/error.scm 310 */
BgL_z62iozd2writezd2errorz62_bglt BgL_new1048z00_1598;
BgL_new1048z00_1598 = 
((BgL_z62iozd2writezd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2writezd2errorz62_bgl) ))); 
{ /* Llib/error.scm 310 */
long BgL_arg1326z00_1599;
{ /* Llib/error.scm 310 */
long BgL_res2617z00_3313;
BgL_res2617z00_3313 = 
BGL_CLASS_INDEX(BGl_z62iozd2writezd2errorz62zz__objectz00); 
BgL_arg1326z00_1599 = BgL_res2617z00_3313; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1048z00_1598), BgL_arg1326z00_1599); } 
BgL_new1049z00_1595 = BgL_new1048z00_1598; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1049z00_1595)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1049z00_1595)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_5213;
{ /* Llib/error.scm 310 */
obj_t BgL_arg1324z00_1596;
{ /* Llib/error.scm 310 */
obj_t BgL_arg1325z00_1597;
{ /* Llib/error.scm 310 */
obj_t BgL_res2618z00_3317;
{ /* Llib/error.scm 310 */
obj_t BgL_classz00_3316;
BgL_classz00_3316 = BGl_z62iozd2writezd2errorz62zz__objectz00; 
BgL_res2618z00_3317 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_3316); } 
BgL_arg1325z00_1597 = BgL_res2618z00_3317; } 
BgL_arg1324z00_1596 = 
VECTOR_REF(BgL_arg1325z00_1597,((long)2)); } 
BgL_auxz00_5213 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_arg1324z00_1596); } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1049z00_1595)))->BgL_stackz00)=((obj_t)BgL_auxz00_5213),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1049z00_1595)))->BgL_procz00)=((obj_t)BgL_procz00_10),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1049z00_1595)))->BgL_msgz00)=((obj_t)BgL_msgz00_11),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1049z00_1595)))->BgL_objz00)=((obj_t)BgL_objz00_12),BUNSPEC); 
BgL_arg1322z00_1594 = BgL_new1049z00_1595; } 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg1322z00_1594));}  else 
{ /* Llib/error.scm 308 */
if(
(
(long)(BgL_sysnoz00_9)==
(long)(BGL_IO_UNKNOWN_HOST_ERROR)))
{ /* Llib/error.scm 313 */
BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt BgL_arg1328z00_1601;
{ /* Llib/error.scm 313 */
BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt BgL_new1051z00_1602;
{ /* Llib/error.scm 313 */
BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt BgL_new1050z00_1605;
BgL_new1050z00_1605 = 
((BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2unknownzd2hostzd2errorzb0_bgl) ))); 
{ /* Llib/error.scm 313 */
long BgL_arg1331z00_1606;
{ /* Llib/error.scm 313 */
long BgL_res2620z00_3323;
BgL_res2620z00_3323 = 
BGL_CLASS_INDEX(BGl_z62iozd2unknownzd2hostzd2errorzb0zz__objectz00); 
BgL_arg1331z00_1606 = BgL_res2620z00_3323; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1050z00_1605), BgL_arg1331z00_1606); } 
BgL_new1051z00_1602 = BgL_new1050z00_1605; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1051z00_1602)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1051z00_1602)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_5239;
{ /* Llib/error.scm 313 */
obj_t BgL_arg1329z00_1603;
{ /* Llib/error.scm 313 */
obj_t BgL_arg1330z00_1604;
{ /* Llib/error.scm 313 */
obj_t BgL_res2621z00_3327;
{ /* Llib/error.scm 313 */
obj_t BgL_classz00_3326;
BgL_classz00_3326 = BGl_z62iozd2unknownzd2hostzd2errorzb0zz__objectz00; 
BgL_res2621z00_3327 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_3326); } 
BgL_arg1330z00_1604 = BgL_res2621z00_3327; } 
BgL_arg1329z00_1603 = 
VECTOR_REF(BgL_arg1330z00_1604,((long)2)); } 
BgL_auxz00_5239 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_arg1329z00_1603); } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1051z00_1602)))->BgL_stackz00)=((obj_t)BgL_auxz00_5239),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1051z00_1602)))->BgL_procz00)=((obj_t)BgL_procz00_10),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1051z00_1602)))->BgL_msgz00)=((obj_t)BgL_msgz00_11),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1051z00_1602)))->BgL_objz00)=((obj_t)BgL_objz00_12),BUNSPEC); 
BgL_arg1328z00_1601 = BgL_new1051z00_1602; } 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg1328z00_1601));}  else 
{ /* Llib/error.scm 311 */
if(
(
(long)(BgL_sysnoz00_9)==
(long)(BGL_IO_FILE_NOT_FOUND_ERROR)))
{ /* Llib/error.scm 316 */
BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt BgL_arg1333z00_1608;
{ /* Llib/error.scm 316 */
BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt BgL_new1053z00_1609;
{ /* Llib/error.scm 316 */
BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt BgL_new1052z00_1612;
BgL_new1052z00_1612 = 
((BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2filezd2notzd2foundzd2errorz62_bgl) ))); 
{ /* Llib/error.scm 316 */
long BgL_arg1337z00_1613;
{ /* Llib/error.scm 316 */
long BgL_res2623z00_3333;
BgL_res2623z00_3333 = 
BGL_CLASS_INDEX(BGl_z62iozd2filezd2notzd2foundzd2errorz62zz__objectz00); 
BgL_arg1337z00_1613 = BgL_res2623z00_3333; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1052z00_1612), BgL_arg1337z00_1613); } 
BgL_new1053z00_1609 = BgL_new1052z00_1612; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1053z00_1609)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1053z00_1609)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_5265;
{ /* Llib/error.scm 316 */
obj_t BgL_arg1334z00_1610;
{ /* Llib/error.scm 316 */
obj_t BgL_arg1335z00_1611;
{ /* Llib/error.scm 316 */
obj_t BgL_res2624z00_3337;
{ /* Llib/error.scm 316 */
obj_t BgL_classz00_3336;
BgL_classz00_3336 = BGl_z62iozd2filezd2notzd2foundzd2errorz62zz__objectz00; 
BgL_res2624z00_3337 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_3336); } 
BgL_arg1335z00_1611 = BgL_res2624z00_3337; } 
BgL_arg1334z00_1610 = 
VECTOR_REF(BgL_arg1335z00_1611,((long)2)); } 
BgL_auxz00_5265 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_arg1334z00_1610); } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1053z00_1609)))->BgL_stackz00)=((obj_t)BgL_auxz00_5265),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1053z00_1609)))->BgL_procz00)=((obj_t)BgL_procz00_10),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1053z00_1609)))->BgL_msgz00)=((obj_t)BgL_msgz00_11),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1053z00_1609)))->BgL_objz00)=((obj_t)BgL_objz00_12),BUNSPEC); 
BgL_arg1333z00_1608 = BgL_new1053z00_1609; } 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg1333z00_1608));}  else 
{ /* Llib/error.scm 314 */
if(
(
(long)(BgL_sysnoz00_9)==
(long)(BGL_IO_PARSE_ERROR)))
{ /* Llib/error.scm 319 */
BgL_z62iozd2parsezd2errorz62_bglt BgL_arg1339z00_1615;
{ /* Llib/error.scm 319 */
BgL_z62iozd2parsezd2errorz62_bglt BgL_new1055z00_1616;
{ /* Llib/error.scm 319 */
BgL_z62iozd2parsezd2errorz62_bglt BgL_new1054z00_1619;
BgL_new1054z00_1619 = 
((BgL_z62iozd2parsezd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2parsezd2errorz62_bgl) ))); 
{ /* Llib/error.scm 319 */
long BgL_arg1342z00_1620;
{ /* Llib/error.scm 319 */
long BgL_res2626z00_3343;
BgL_res2626z00_3343 = 
BGL_CLASS_INDEX(BGl_z62iozd2parsezd2errorz62zz__objectz00); 
BgL_arg1342z00_1620 = BgL_res2626z00_3343; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1054z00_1619), BgL_arg1342z00_1620); } 
BgL_new1055z00_1616 = BgL_new1054z00_1619; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1055z00_1616)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1055z00_1616)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_5291;
{ /* Llib/error.scm 319 */
obj_t BgL_arg1340z00_1617;
{ /* Llib/error.scm 319 */
obj_t BgL_arg1341z00_1618;
{ /* Llib/error.scm 319 */
obj_t BgL_res2627z00_3347;
{ /* Llib/error.scm 319 */
obj_t BgL_classz00_3346;
BgL_classz00_3346 = BGl_z62iozd2parsezd2errorz62zz__objectz00; 
BgL_res2627z00_3347 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_3346); } 
BgL_arg1341z00_1618 = BgL_res2627z00_3347; } 
BgL_arg1340z00_1617 = 
VECTOR_REF(BgL_arg1341z00_1618,((long)2)); } 
BgL_auxz00_5291 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_arg1340z00_1617); } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1055z00_1616)))->BgL_stackz00)=((obj_t)BgL_auxz00_5291),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1055z00_1616)))->BgL_procz00)=((obj_t)BgL_procz00_10),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1055z00_1616)))->BgL_msgz00)=((obj_t)BgL_msgz00_11),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1055z00_1616)))->BgL_objz00)=((obj_t)BgL_objz00_12),BUNSPEC); 
BgL_arg1339z00_1615 = BgL_new1055z00_1616; } 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg1339z00_1615));}  else 
{ /* Llib/error.scm 317 */
if(
(
(long)(BgL_sysnoz00_9)==
(long)(BGL_IO_MALFORMED_URL_ERROR)))
{ /* Llib/error.scm 322 */
BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt BgL_arg1344z00_1622;
{ /* Llib/error.scm 322 */
BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt BgL_new1057z00_1623;
{ /* Llib/error.scm 322 */
BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt BgL_new1056z00_1626;
BgL_new1056z00_1626 = 
((BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2malformedzd2urlzd2errorzb0_bgl) ))); 
{ /* Llib/error.scm 322 */
long BgL_arg1347z00_1627;
{ /* Llib/error.scm 322 */
long BgL_res2629z00_3353;
BgL_res2629z00_3353 = 
BGL_CLASS_INDEX(BGl_z62iozd2malformedzd2urlzd2errorzb0zz__objectz00); 
BgL_arg1347z00_1627 = BgL_res2629z00_3353; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1056z00_1626), BgL_arg1347z00_1627); } 
BgL_new1057z00_1623 = BgL_new1056z00_1626; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1057z00_1623)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1057z00_1623)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_5317;
{ /* Llib/error.scm 322 */
obj_t BgL_arg1345z00_1624;
{ /* Llib/error.scm 322 */
obj_t BgL_arg1346z00_1625;
{ /* Llib/error.scm 322 */
obj_t BgL_res2630z00_3357;
{ /* Llib/error.scm 322 */
obj_t BgL_classz00_3356;
BgL_classz00_3356 = BGl_z62iozd2malformedzd2urlzd2errorzb0zz__objectz00; 
BgL_res2630z00_3357 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_3356); } 
BgL_arg1346z00_1625 = BgL_res2630z00_3357; } 
BgL_arg1345z00_1624 = 
VECTOR_REF(BgL_arg1346z00_1625,((long)2)); } 
BgL_auxz00_5317 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_arg1345z00_1624); } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1057z00_1623)))->BgL_stackz00)=((obj_t)BgL_auxz00_5317),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1057z00_1623)))->BgL_procz00)=((obj_t)BgL_procz00_10),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1057z00_1623)))->BgL_msgz00)=((obj_t)BgL_msgz00_11),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1057z00_1623)))->BgL_objz00)=((obj_t)BgL_objz00_12),BUNSPEC); 
BgL_arg1344z00_1622 = BgL_new1057z00_1623; } 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg1344z00_1622));}  else 
{ /* Llib/error.scm 320 */
if(
(
(long)(BgL_sysnoz00_9)==
(long)(BGL_IO_SIGPIPE_ERROR)))
{ /* Llib/error.scm 325 */
BgL_z62iozd2sigpipezd2errorz62_bglt BgL_arg1350z00_1629;
{ /* Llib/error.scm 325 */
BgL_z62iozd2sigpipezd2errorz62_bglt BgL_new1060z00_1630;
{ /* Llib/error.scm 325 */
BgL_z62iozd2sigpipezd2errorz62_bglt BgL_new1059z00_1633;
BgL_new1059z00_1633 = 
((BgL_z62iozd2sigpipezd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2sigpipezd2errorz62_bgl) ))); 
{ /* Llib/error.scm 325 */
long BgL_arg1353z00_1634;
{ /* Llib/error.scm 325 */
long BgL_res2632z00_3363;
BgL_res2632z00_3363 = 
BGL_CLASS_INDEX(BGl_z62iozd2sigpipezd2errorz62zz__objectz00); 
BgL_arg1353z00_1634 = BgL_res2632z00_3363; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1059z00_1633), BgL_arg1353z00_1634); } 
BgL_new1060z00_1630 = BgL_new1059z00_1633; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1060z00_1630)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1060z00_1630)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_5343;
{ /* Llib/error.scm 325 */
obj_t BgL_arg1351z00_1631;
{ /* Llib/error.scm 325 */
obj_t BgL_arg1352z00_1632;
{ /* Llib/error.scm 325 */
obj_t BgL_res2633z00_3367;
{ /* Llib/error.scm 325 */
obj_t BgL_classz00_3366;
BgL_classz00_3366 = BGl_z62iozd2sigpipezd2errorz62zz__objectz00; 
BgL_res2633z00_3367 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_3366); } 
BgL_arg1352z00_1632 = BgL_res2633z00_3367; } 
BgL_arg1351z00_1631 = 
VECTOR_REF(BgL_arg1352z00_1632,((long)2)); } 
BgL_auxz00_5343 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_arg1351z00_1631); } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1060z00_1630)))->BgL_stackz00)=((obj_t)BgL_auxz00_5343),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1060z00_1630)))->BgL_procz00)=((obj_t)BgL_procz00_10),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1060z00_1630)))->BgL_msgz00)=((obj_t)BgL_msgz00_11),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1060z00_1630)))->BgL_objz00)=((obj_t)BgL_objz00_12),BUNSPEC); 
BgL_arg1350z00_1629 = BgL_new1060z00_1630; } 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg1350z00_1629));}  else 
{ /* Llib/error.scm 323 */
if(
(
(long)(BgL_sysnoz00_9)==
(long)(BGL_IO_TIMEOUT_ERROR)))
{ /* Llib/error.scm 328 */
BgL_z62iozd2timeoutzd2errorz62_bglt BgL_arg1355z00_1636;
{ /* Llib/error.scm 328 */
BgL_z62iozd2timeoutzd2errorz62_bglt BgL_new1062z00_1637;
{ /* Llib/error.scm 328 */
BgL_z62iozd2timeoutzd2errorz62_bglt BgL_new1061z00_1640;
BgL_new1061z00_1640 = 
((BgL_z62iozd2timeoutzd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2timeoutzd2errorz62_bgl) ))); 
{ /* Llib/error.scm 328 */
long BgL_arg1359z00_1641;
{ /* Llib/error.scm 328 */
long BgL_res2635z00_3373;
BgL_res2635z00_3373 = 
BGL_CLASS_INDEX(BGl_z62iozd2timeoutzd2errorz62zz__objectz00); 
BgL_arg1359z00_1641 = BgL_res2635z00_3373; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1061z00_1640), BgL_arg1359z00_1641); } 
BgL_new1062z00_1637 = BgL_new1061z00_1640; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1062z00_1637)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1062z00_1637)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_5369;
{ /* Llib/error.scm 328 */
obj_t BgL_arg1356z00_1638;
{ /* Llib/error.scm 328 */
obj_t BgL_arg1357z00_1639;
{ /* Llib/error.scm 328 */
obj_t BgL_res2636z00_3377;
{ /* Llib/error.scm 328 */
obj_t BgL_classz00_3376;
BgL_classz00_3376 = BGl_z62iozd2timeoutzd2errorz62zz__objectz00; 
BgL_res2636z00_3377 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_3376); } 
BgL_arg1357z00_1639 = BgL_res2636z00_3377; } 
BgL_arg1356z00_1638 = 
VECTOR_REF(BgL_arg1357z00_1639,((long)2)); } 
BgL_auxz00_5369 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_arg1356z00_1638); } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1062z00_1637)))->BgL_stackz00)=((obj_t)BgL_auxz00_5369),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1062z00_1637)))->BgL_procz00)=((obj_t)BgL_procz00_10),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1062z00_1637)))->BgL_msgz00)=((obj_t)BgL_msgz00_11),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1062z00_1637)))->BgL_objz00)=((obj_t)BgL_objz00_12),BUNSPEC); 
BgL_arg1355z00_1636 = BgL_new1062z00_1637; } 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg1355z00_1636));}  else 
{ /* Llib/error.scm 326 */
if(
(
(long)(BgL_sysnoz00_9)==
(long)(BGL_IO_CONNECTION_ERROR)))
{ /* Llib/error.scm 331 */
BgL_z62iozd2connectionzd2errorz62_bglt BgL_arg1361z00_1643;
{ /* Llib/error.scm 331 */
BgL_z62iozd2connectionzd2errorz62_bglt BgL_new1064z00_1644;
{ /* Llib/error.scm 331 */
BgL_z62iozd2connectionzd2errorz62_bglt BgL_new1063z00_1647;
BgL_new1063z00_1647 = 
((BgL_z62iozd2connectionzd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2connectionzd2errorz62_bgl) ))); 
{ /* Llib/error.scm 331 */
long BgL_arg1364z00_1648;
{ /* Llib/error.scm 331 */
long BgL_res2638z00_3383;
BgL_res2638z00_3383 = 
BGL_CLASS_INDEX(BGl_z62iozd2connectionzd2errorz62zz__objectz00); 
BgL_arg1364z00_1648 = BgL_res2638z00_3383; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1063z00_1647), BgL_arg1364z00_1648); } 
BgL_new1064z00_1644 = BgL_new1063z00_1647; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1064z00_1644)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1064z00_1644)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_5395;
{ /* Llib/error.scm 331 */
obj_t BgL_arg1362z00_1645;
{ /* Llib/error.scm 331 */
obj_t BgL_arg1363z00_1646;
{ /* Llib/error.scm 331 */
obj_t BgL_res2639z00_3387;
{ /* Llib/error.scm 331 */
obj_t BgL_classz00_3386;
BgL_classz00_3386 = BGl_z62iozd2connectionzd2errorz62zz__objectz00; 
BgL_res2639z00_3387 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_3386); } 
BgL_arg1363z00_1646 = BgL_res2639z00_3387; } 
BgL_arg1362z00_1645 = 
VECTOR_REF(BgL_arg1363z00_1646,((long)2)); } 
BgL_auxz00_5395 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_arg1362z00_1645); } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1064z00_1644)))->BgL_stackz00)=((obj_t)BgL_auxz00_5395),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1064z00_1644)))->BgL_procz00)=((obj_t)BgL_procz00_10),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1064z00_1644)))->BgL_msgz00)=((obj_t)BgL_msgz00_11),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1064z00_1644)))->BgL_objz00)=((obj_t)BgL_objz00_12),BUNSPEC); 
BgL_arg1361z00_1643 = BgL_new1064z00_1644; } 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg1361z00_1643));}  else 
{ /* Llib/error.scm 329 */
if(
(
(long)(BgL_sysnoz00_9)==
(long)(BGL_PROCESS_EXCEPTION)))
{ /* Llib/error.scm 334 */
BgL_z62processzd2exceptionzb0_bglt BgL_arg1367z00_1650;
{ /* Llib/error.scm 334 */
BgL_z62processzd2exceptionzb0_bglt BgL_new1066z00_1651;
{ /* Llib/error.scm 334 */
BgL_z62processzd2exceptionzb0_bglt BgL_new1065z00_1654;
BgL_new1065z00_1654 = 
((BgL_z62processzd2exceptionzb0_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62processzd2exceptionzb0_bgl) ))); 
{ /* Llib/error.scm 334 */
long BgL_arg1371z00_1655;
{ /* Llib/error.scm 334 */
long BgL_res2641z00_3393;
BgL_res2641z00_3393 = 
BGL_CLASS_INDEX(BGl_z62processzd2exceptionzb0zz__objectz00); 
BgL_arg1371z00_1655 = BgL_res2641z00_3393; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1065z00_1654), BgL_arg1371z00_1655); } 
BgL_new1066z00_1651 = BgL_new1065z00_1654; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1066z00_1651)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1066z00_1651)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_5421;
{ /* Llib/error.scm 334 */
obj_t BgL_arg1368z00_1652;
{ /* Llib/error.scm 334 */
obj_t BgL_arg1370z00_1653;
{ /* Llib/error.scm 334 */
obj_t BgL_res2642z00_3397;
{ /* Llib/error.scm 334 */
obj_t BgL_classz00_3396;
BgL_classz00_3396 = BGl_z62processzd2exceptionzb0zz__objectz00; 
BgL_res2642z00_3397 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_3396); } 
BgL_arg1370z00_1653 = BgL_res2642z00_3397; } 
BgL_arg1368z00_1652 = 
VECTOR_REF(BgL_arg1370z00_1653,((long)2)); } 
BgL_auxz00_5421 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_arg1368z00_1652); } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1066z00_1651)))->BgL_stackz00)=((obj_t)BgL_auxz00_5421),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1066z00_1651)))->BgL_procz00)=((obj_t)BgL_procz00_10),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1066z00_1651)))->BgL_msgz00)=((obj_t)BgL_msgz00_11),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1066z00_1651)))->BgL_objz00)=((obj_t)BgL_objz00_12),BUNSPEC); 
BgL_arg1367z00_1650 = BgL_new1066z00_1651; } 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg1367z00_1650));}  else 
{ /* Llib/error.scm 332 */
if(
(
(long)(BgL_sysnoz00_9)==
(long)(BGL_TYPE_ERROR)))
{ /* Llib/error.scm 335 */
return 
BGl_raisez00zz__errorz00(
BGl_typezd2errorzd2zz__errorz00(BFALSE, BFALSE, BgL_procz00_10, BgL_msgz00_11, BgL_objz00_12));}  else 
{ /* Llib/error.scm 335 */
if(
(
(long)(BgL_sysnoz00_9)==
(long)(BGL_TYPENAME_ERROR)))
{ /* Llib/error.scm 338 */
BgL_z62typezd2errorzb0_bglt BgL_arg1375z00_1659;
BgL_arg1375z00_1659 = 
BGl_typenamezd2errorzd2zz__errorz00(((bool_t)0), ((bool_t)0), BgL_procz00_10, BgL_msgz00_11, BgL_objz00_12); 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg1375z00_1659));}  else 
{ /* Llib/error.scm 337 */
if(
(
(long)(BgL_sysnoz00_9)==
(long)(BGL_INDEX_OUT_OF_BOUND_ERROR)))
{ /* Llib/error.scm 339 */
return 
BGl_raisez00zz__errorz00(
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BFALSE, BFALSE, BgL_procz00_10, BgL_objz00_12, 
CINT(BgL_msgz00_11), 
(int)(((long)-1))));}  else 
{ /* Llib/error.scm 339 */
return 
BGl_errorz00zz__errorz00(BgL_procz00_10, BgL_msgz00_11, BgL_objz00_12);} } } } } } } } } } } } } } } } 

}



/* &error/errno */
obj_t BGl_z62errorzf2errnoz90zz__errorz00(obj_t BgL_envz00_4835, obj_t BgL_sysnoz00_4836, obj_t BgL_procz00_4837, obj_t BgL_msgz00_4838, obj_t BgL_objz00_4839)
{
{ /* Llib/error.scm 297 */
{ /* Llib/error.scm 299 */
int BgL_auxz00_5457;
{ /* Llib/error.scm 299 */
obj_t BgL_tmpz00_5458;
if(
INTEGERP(BgL_sysnoz00_4836))
{ /* Llib/error.scm 299 */
BgL_tmpz00_5458 = BgL_sysnoz00_4836
; }  else 
{ 
obj_t BgL_auxz00_5461;
BgL_auxz00_5461 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3137z00zz__errorz00, 
BINT(((long)11952)), BGl_string3138z00zz__errorz00, BGl_string3139z00zz__errorz00, BgL_sysnoz00_4836); 
FAILURE(BgL_auxz00_5461,BFALSE,BFALSE);} 
BgL_auxz00_5457 = 
CINT(BgL_tmpz00_5458); } 
return 
bgl_system_failure(BgL_auxz00_5457, BgL_procz00_4837, BgL_msgz00_4838, BgL_objz00_4839);} } 

}



/* stack-overflow-error */
BGL_EXPORTED_DEF obj_t bgl_stack_overflow_error()
{
{ /* Llib/error.scm 347 */
{ /* Llib/error.scm 348 */
obj_t BgL_stkz00_1662;
{ /* Llib/error.scm 348 */

{ /* Llib/error.scm 348 */

BgL_stkz00_1662 = 
BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE); } } 
{ 
obj_t BgL_procz00_1667;obj_t BgL_procz00_1663;obj_t BgL_fnamez00_1664;obj_t BgL_locz00_1665;
if(
PAIRP(BgL_stkz00_1662))
{ /* Llib/error.scm 349 */
obj_t BgL_carzd2111zd2_1672;
BgL_carzd2111zd2_1672 = 
CAR(BgL_stkz00_1662); 
if(
PAIRP(BgL_carzd2111zd2_1672))
{ /* Llib/error.scm 349 */
obj_t BgL_cdrzd2117zd2_1674;
BgL_cdrzd2117zd2_1674 = 
CDR(BgL_carzd2111zd2_1672); 
if(
PAIRP(BgL_cdrzd2117zd2_1674))
{ /* Llib/error.scm 349 */
obj_t BgL_carzd2121zd2_1676;
BgL_carzd2121zd2_1676 = 
CAR(BgL_cdrzd2117zd2_1674); 
if(
PAIRP(BgL_carzd2121zd2_1676))
{ /* Llib/error.scm 349 */
obj_t BgL_cdrzd2126zd2_1678;
BgL_cdrzd2126zd2_1678 = 
CDR(BgL_carzd2121zd2_1676); 
if(
(
CAR(BgL_carzd2121zd2_1676)==BGl_symbol3141z00zz__errorz00))
{ /* Llib/error.scm 349 */
if(
PAIRP(BgL_cdrzd2126zd2_1678))
{ /* Llib/error.scm 349 */
obj_t BgL_cdrzd2130zd2_1682;
BgL_cdrzd2130zd2_1682 = 
CDR(BgL_cdrzd2126zd2_1678); 
if(
PAIRP(BgL_cdrzd2130zd2_1682))
{ /* Llib/error.scm 349 */
if(
NULLP(
CDR(BgL_cdrzd2130zd2_1682)))
{ /* Llib/error.scm 349 */
if(
NULLP(
CDR(BgL_cdrzd2117zd2_1674)))
{ /* Llib/error.scm 349 */
BgL_procz00_1663 = 
CAR(BgL_carzd2111zd2_1672); 
BgL_fnamez00_1664 = 
CAR(BgL_cdrzd2126zd2_1678); 
BgL_locz00_1665 = 
CAR(BgL_cdrzd2130zd2_1682); 
{ /* Llib/error.scm 352 */
BgL_z62stackzd2overflowzd2errorz62_bglt BgL_arg1405z00_1702;
{ /* Llib/error.scm 352 */
BgL_z62stackzd2overflowzd2errorz62_bglt BgL_new1068z00_1703;
{ /* Llib/error.scm 353 */
BgL_z62stackzd2overflowzd2errorz62_bglt BgL_new1067z00_1704;
BgL_new1067z00_1704 = 
((BgL_z62stackzd2overflowzd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62stackzd2overflowzd2errorz62_bgl) ))); 
{ /* Llib/error.scm 353 */
long BgL_arg1406z00_1705;
{ /* Llib/error.scm 353 */
long BgL_res2646z00_3409;
BgL_res2646z00_3409 = 
BGL_CLASS_INDEX(BGl_z62stackzd2overflowzd2errorz62zz__objectz00); 
BgL_arg1406z00_1705 = BgL_res2646z00_3409; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1067z00_1704), BgL_arg1406z00_1705); } 
BgL_new1068z00_1703 = BgL_new1067z00_1704; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1068z00_1703)))->BgL_fnamez00)=((obj_t)BgL_fnamez00_1664),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1068z00_1703)))->BgL_locationz00)=((obj_t)BgL_locz00_1665),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1068z00_1703)))->BgL_stackz00)=((obj_t)BgL_stkz00_1662),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1068z00_1703)))->BgL_procz00)=((obj_t)BgL_procz00_1663),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1068z00_1703)))->BgL_msgz00)=((obj_t)BGl_string3140z00zz__errorz00),BUNSPEC); 
{ 
obj_t BgL_auxz00_5508;
{ /* Llib/error.scm 358 */
obj_t BgL_res2647z00_3412;
BgL_res2647z00_3412 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_auxz00_5508 = BgL_res2647z00_3412; } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1068z00_1703)))->BgL_objz00)=((obj_t)BgL_auxz00_5508),BUNSPEC); } 
BgL_arg1405z00_1702 = BgL_new1068z00_1703; } 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg1405z00_1702));} }  else 
{ /* Llib/error.scm 349 */
BgL_procz00_1667 = BgL_carzd2111zd2_1672; 
BgL_tagzd2102zd2_1668:
{ /* Llib/error.scm 361 */
BgL_z62stackzd2overflowzd2errorz62_bglt BgL_arg1407z00_1706;
{ /* Llib/error.scm 361 */
BgL_z62stackzd2overflowzd2errorz62_bglt BgL_new1070z00_1707;
{ /* Llib/error.scm 361 */
BgL_z62stackzd2overflowzd2errorz62_bglt BgL_new1069z00_1708;
BgL_new1069z00_1708 = 
((BgL_z62stackzd2overflowzd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62stackzd2overflowzd2errorz62_bgl) ))); 
{ /* Llib/error.scm 361 */
long BgL_arg1409z00_1709;
{ /* Llib/error.scm 361 */
long BgL_res2648z00_3414;
BgL_res2648z00_3414 = 
BGL_CLASS_INDEX(BGl_z62stackzd2overflowzd2errorz62zz__objectz00); 
BgL_arg1409z00_1709 = BgL_res2648z00_3414; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1069z00_1708), BgL_arg1409z00_1709); } 
BgL_new1070z00_1707 = BgL_new1069z00_1708; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1070z00_1707)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1070z00_1707)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1070z00_1707)))->BgL_stackz00)=((obj_t)BgL_stkz00_1662),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1070z00_1707)))->BgL_procz00)=((obj_t)BgL_procz00_1667),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1070z00_1707)))->BgL_msgz00)=((obj_t)BGl_string3140z00zz__errorz00),BUNSPEC); 
{ 
obj_t BgL_auxz00_5531;
{ /* Llib/error.scm 365 */
obj_t BgL_res2649z00_3417;
BgL_res2649z00_3417 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_auxz00_5531 = BgL_res2649z00_3417; } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1070z00_1707)))->BgL_objz00)=((obj_t)BgL_auxz00_5531),BUNSPEC); } 
BgL_arg1407z00_1706 = BgL_new1070z00_1707; } 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg1407z00_1706));} } }  else 
{ 
obj_t BgL_procz00_5537;
BgL_procz00_5537 = BgL_carzd2111zd2_1672; 
BgL_procz00_1667 = BgL_procz00_5537; 
goto BgL_tagzd2102zd2_1668;} }  else 
{ 
obj_t BgL_procz00_5538;
BgL_procz00_5538 = BgL_carzd2111zd2_1672; 
BgL_procz00_1667 = BgL_procz00_5538; 
goto BgL_tagzd2102zd2_1668;} }  else 
{ 
obj_t BgL_procz00_5539;
BgL_procz00_5539 = BgL_carzd2111zd2_1672; 
BgL_procz00_1667 = BgL_procz00_5539; 
goto BgL_tagzd2102zd2_1668;} }  else 
{ 
obj_t BgL_procz00_5540;
BgL_procz00_5540 = BgL_carzd2111zd2_1672; 
BgL_procz00_1667 = BgL_procz00_5540; 
goto BgL_tagzd2102zd2_1668;} }  else 
{ 
obj_t BgL_procz00_5541;
BgL_procz00_5541 = BgL_carzd2111zd2_1672; 
BgL_procz00_1667 = BgL_procz00_5541; 
goto BgL_tagzd2102zd2_1668;} }  else 
{ 
obj_t BgL_procz00_5542;
BgL_procz00_5542 = BgL_carzd2111zd2_1672; 
BgL_procz00_1667 = BgL_procz00_5542; 
goto BgL_tagzd2102zd2_1668;} }  else 
{ 
obj_t BgL_procz00_5543;
BgL_procz00_5543 = BgL_carzd2111zd2_1672; 
BgL_procz00_1667 = BgL_procz00_5543; 
goto BgL_tagzd2102zd2_1668;} }  else 
{ /* Llib/error.scm 349 */
{ /* Llib/error.scm 368 */
BgL_z62stackzd2overflowzd2errorz62_bglt BgL_arg1410z00_1710;
{ /* Llib/error.scm 368 */
BgL_z62stackzd2overflowzd2errorz62_bglt BgL_new1072z00_1711;
{ /* Llib/error.scm 368 */
BgL_z62stackzd2overflowzd2errorz62_bglt BgL_new1071z00_1712;
BgL_new1071z00_1712 = 
((BgL_z62stackzd2overflowzd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62stackzd2overflowzd2errorz62_bgl) ))); 
{ /* Llib/error.scm 368 */
long BgL_arg1411z00_1713;
{ /* Llib/error.scm 368 */
long BgL_res2650z00_3419;
BgL_res2650z00_3419 = 
BGL_CLASS_INDEX(BGl_z62stackzd2overflowzd2errorz62zz__objectz00); 
BgL_arg1411z00_1713 = BgL_res2650z00_3419; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1071z00_1712), BgL_arg1411z00_1713); } 
BgL_new1072z00_1711 = BgL_new1071z00_1712; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1072z00_1711)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1072z00_1711)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1072z00_1711)))->BgL_stackz00)=((obj_t)BgL_stkz00_1662),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1072z00_1711)))->BgL_procz00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1072z00_1711)))->BgL_msgz00)=((obj_t)BGl_string3140z00zz__errorz00),BUNSPEC); 
{ 
obj_t BgL_auxz00_5558;
{ /* Llib/error.scm 372 */
obj_t BgL_res2651z00_3422;
BgL_res2651z00_3422 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_auxz00_5558 = BgL_res2651z00_3422; } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1072z00_1711)))->BgL_objz00)=((obj_t)BgL_auxz00_5558),BUNSPEC); } 
BgL_arg1410z00_1710 = BgL_new1072z00_1711; } 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg1410z00_1710));} } } } } 

}



/* &stack-overflow-erro3083 */
obj_t BGl_z62stackzd2overflowzd2erro3083z62zz__errorz00(obj_t BgL_envz00_4840)
{
{ /* Llib/error.scm 347 */
return 
bgl_stack_overflow_error();} 

}



/* exit */
BGL_EXPORTED_DEF obj_t BGl_exitz00zz__errorz00(obj_t BgL_nz00_13)
{
{ /* Llib/error.scm 377 */
{ /* Llib/error.scm 378 */
obj_t BgL_valz00_1715;
if(
NULLP(BgL_nz00_13))
{ /* Llib/error.scm 379 */
BgL_valz00_1715 = 
BINT(((long)0)); }  else 
{ /* Llib/error.scm 379 */
if(
INTEGERP(
CAR(
((obj_t)BgL_nz00_13))))
{ /* Llib/error.scm 380 */
BgL_valz00_1715 = 
CAR(
((obj_t)BgL_nz00_13)); }  else 
{ /* Llib/error.scm 380 */
BgL_valz00_1715 = 
BINT(((long)0)); } } 
BIGLOO_EXIT(BgL_valz00_1715); 
return BgL_valz00_1715;} } 

}



/* &exit */
obj_t BGl_z62exitz62zz__errorz00(obj_t BgL_envz00_4841, obj_t BgL_nz00_4842)
{
{ /* Llib/error.scm 377 */
return 
BGl_exitz00zz__errorz00(BgL_nz00_4842);} 

}



/* with-exception-handler */
BGL_EXPORTED_DEF obj_t BGl_withzd2exceptionzd2handlerz00zz__errorz00(obj_t BgL_handlerz00_14, obj_t BgL_thunkz00_15)
{
{ /* Llib/error.scm 388 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_handlerz00_14, 
(int)(((long)1))))
{ /* Llib/error.scm 390 */
obj_t BgL_oldzd2handlerszd2_1721;
BgL_oldzd2handlerszd2_1721 = 
BGL_ERROR_HANDLER_GET(); 
{ /* Llib/error.scm 393 */
obj_t BgL_arg1417z00_1722;
{ /* Llib/error.scm 393 */
obj_t BgL_zc3z04anonymousza31419ze3z87_4844;
BgL_zc3z04anonymousza31419ze3z87_4844 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31419ze3ze5zz__errorz00, 
(int)(((long)1)), 
(int)(((long)2))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31419ze3z87_4844, 
(int)(((long)0)), BgL_oldzd2handlerszd2_1721); 
PROCEDURE_SET(BgL_zc3z04anonymousza31419ze3z87_4844, 
(int)(((long)1)), 
((obj_t)BgL_handlerz00_14)); 
{ /* Llib/error.scm 392 */
obj_t BgL_res2663z00_3456;
BgL_res2663z00_3456 = 
MAKE_YOUNG_PAIR(BgL_zc3z04anonymousza31419ze3z87_4844, BgL_oldzd2handlerszd2_1721); 
BgL_arg1417z00_1722 = BgL_res2663z00_3456; } } 
BGL_ERROR_HANDLER_SET(BgL_arg1417z00_1722); BUNSPEC; } 
{ /* Llib/error.scm 396 */
obj_t BgL_exitd1073z00_1727;
BgL_exitd1073z00_1727 = 
BGL_EXITD_TOP_AS_OBJ(); 
{ 
obj_t BgL_zc3z04anonymousza31421ze3z87_4843;
BgL_zc3z04anonymousza31421ze3z87_4843 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31421ze3ze5zz__errorz00, 
(int)(((long)0)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31421ze3z87_4843, 
(int)(((long)0)), BgL_oldzd2handlerszd2_1721); 
BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(BgL_exitd1073z00_1727, BgL_zc3z04anonymousza31421ze3z87_4843); 
{ /* Llib/error.scm 397 */
obj_t BgL_tmp1075z00_1729;
if(
PROCEDURE_CORRECT_ARITYP(BgL_thunkz00_15, 
(int)(((long)0))))
{ /* Llib/error.scm 397 */
BgL_tmp1075z00_1729 = 
PROCEDURE_ENTRY(BgL_thunkz00_15)(BgL_thunkz00_15, BEOA); }  else 
{ /* Llib/error.scm 457 */
BgL_z62errorz62_bglt BgL_arg1448z00_3457;
{ /* Llib/error.scm 457 */
BgL_z62errorz62_bglt BgL_new1078z00_3458;
{ /* Llib/error.scm 457 */
BgL_z62errorz62_bglt BgL_new1077z00_3459;
BgL_new1077z00_3459 = 
((BgL_z62errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62errorz62_bgl) ))); 
{ /* Llib/error.scm 457 */
long BgL_arg1452z00_3460;
{ /* Llib/error.scm 457 */
long BgL_res2664z00_3464;
BgL_res2664z00_3464 = 
BGL_CLASS_INDEX(BGl_z62errorz62zz__objectz00); 
BgL_arg1452z00_3460 = BgL_res2664z00_3464; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1077z00_3459), BgL_arg1452z00_3460); } 
BgL_new1078z00_3458 = BgL_new1077z00_3459; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1078z00_3458)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1078z00_3458)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_5612;
{ /* Llib/error.scm 457 */
obj_t BgL_arg1449z00_3461;
{ /* Llib/error.scm 457 */
obj_t BgL_arg1451z00_3462;
{ /* Llib/error.scm 457 */
obj_t BgL_res2665z00_3468;
{ /* Llib/error.scm 457 */
obj_t BgL_classz00_3467;
BgL_classz00_3467 = BGl_z62errorz62zz__objectz00; 
BgL_res2665z00_3468 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_3467); } 
BgL_arg1451z00_3462 = BgL_res2665z00_3468; } 
BgL_arg1449z00_3461 = 
VECTOR_REF(BgL_arg1451z00_3462,((long)2)); } 
BgL_auxz00_5612 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_arg1449z00_3461); } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1078z00_3458)))->BgL_stackz00)=((obj_t)BgL_auxz00_5612),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(BgL_new1078z00_3458))->BgL_procz00)=((obj_t)BGl_string3143z00zz__errorz00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(BgL_new1078z00_3458))->BgL_msgz00)=((obj_t)BGl_string3144z00zz__errorz00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(BgL_new1078z00_3458))->BgL_objz00)=((obj_t)BgL_thunkz00_15),BUNSPEC); 
BgL_arg1448z00_3457 = BgL_new1078z00_3458; } 
BgL_tmp1075z00_1729 = 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg1448z00_3457)); } 
BGl_exitdzd2popzd2protectz12z12zz__bexitz00(BgL_exitd1073z00_1727); 
BGL_ERROR_HANDLER_SET(BgL_oldzd2handlerszd2_1721); BUNSPEC; 
return BgL_tmp1075z00_1729;} } } }  else 
{ /* Llib/error.scm 457 */
BgL_z62errorz62_bglt BgL_arg1448z00_3470;
{ /* Llib/error.scm 457 */
BgL_z62errorz62_bglt BgL_new1078z00_3471;
{ /* Llib/error.scm 457 */
BgL_z62errorz62_bglt BgL_new1077z00_3472;
BgL_new1077z00_3472 = 
((BgL_z62errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62errorz62_bgl) ))); 
{ /* Llib/error.scm 457 */
long BgL_arg1452z00_3473;
{ /* Llib/error.scm 457 */
long BgL_res2666z00_3477;
BgL_res2666z00_3477 = 
BGL_CLASS_INDEX(BGl_z62errorz62zz__objectz00); 
BgL_arg1452z00_3473 = BgL_res2666z00_3477; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1077z00_3472), BgL_arg1452z00_3473); } 
BgL_new1078z00_3471 = BgL_new1077z00_3472; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1078z00_3471)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1078z00_3471)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_5633;
{ /* Llib/error.scm 457 */
obj_t BgL_arg1449z00_3474;
{ /* Llib/error.scm 457 */
obj_t BgL_arg1451z00_3475;
{ /* Llib/error.scm 457 */
obj_t BgL_res2667z00_3481;
{ /* Llib/error.scm 457 */
obj_t BgL_classz00_3480;
BgL_classz00_3480 = BGl_z62errorz62zz__objectz00; 
BgL_res2667z00_3481 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_3480); } 
BgL_arg1451z00_3475 = BgL_res2667z00_3481; } 
BgL_arg1449z00_3474 = 
VECTOR_REF(BgL_arg1451z00_3475,((long)2)); } 
BgL_auxz00_5633 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_arg1449z00_3474); } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1078z00_3471)))->BgL_stackz00)=((obj_t)BgL_auxz00_5633),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(BgL_new1078z00_3471))->BgL_procz00)=((obj_t)BGl_string3143z00zz__errorz00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(BgL_new1078z00_3471))->BgL_msgz00)=((obj_t)BGl_string3145z00zz__errorz00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(BgL_new1078z00_3471))->BgL_objz00)=((obj_t)BgL_handlerz00_14),BUNSPEC); 
BgL_arg1448z00_3470 = BgL_new1078z00_3471; } 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg1448z00_3470));} } 

}



/* &with-exception-handler */
obj_t BGl_z62withzd2exceptionzd2handlerz62zz__errorz00(obj_t BgL_envz00_4845, obj_t BgL_handlerz00_4846, obj_t BgL_thunkz00_4847)
{
{ /* Llib/error.scm 388 */
{ /* Llib/error.scm 389 */
obj_t BgL_auxz00_5651;obj_t BgL_auxz00_5644;
if(
PROCEDUREP(BgL_thunkz00_4847))
{ /* Llib/error.scm 389 */
BgL_auxz00_5651 = BgL_thunkz00_4847
; }  else 
{ 
obj_t BgL_auxz00_5654;
BgL_auxz00_5654 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3137z00zz__errorz00, 
BINT(((long)15267)), BGl_string3146z00zz__errorz00, BGl_string3147z00zz__errorz00, BgL_thunkz00_4847); 
FAILURE(BgL_auxz00_5654,BFALSE,BFALSE);} 
if(
PROCEDUREP(BgL_handlerz00_4846))
{ /* Llib/error.scm 389 */
BgL_auxz00_5644 = BgL_handlerz00_4846
; }  else 
{ 
obj_t BgL_auxz00_5647;
BgL_auxz00_5647 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3137z00zz__errorz00, 
BINT(((long)15267)), BGl_string3146z00zz__errorz00, BGl_string3147z00zz__errorz00, BgL_handlerz00_4846); 
FAILURE(BgL_auxz00_5647,BFALSE,BFALSE);} 
return 
BGl_withzd2exceptionzd2handlerz00zz__errorz00(BgL_auxz00_5644, BgL_auxz00_5651);} } 

}



/* &<@anonymous:1421> */
obj_t BGl_z62zc3z04anonymousza31421ze3ze5zz__errorz00(obj_t BgL_envz00_4848)
{
{ /* Llib/error.scm 396 */
{ 
obj_t BgL_oldzd2handlerszd2_4849;
BgL_oldzd2handlerszd2_4849 = 
PROCEDURE_REF(BgL_envz00_4848, 
(int)(((long)0))); 
BGL_ERROR_HANDLER_SET(BgL_oldzd2handlerszd2_4849); 
return BUNSPEC;} } 

}



/* &<@anonymous:1419> */
obj_t BGl_z62zc3z04anonymousza31419ze3ze5zz__errorz00(obj_t BgL_envz00_4850, obj_t BgL_ez00_4853)
{
{ /* Llib/error.scm 392 */
{ /* Llib/error.scm 393 */
obj_t BgL_oldzd2handlerszd2_4851;obj_t BgL_handlerz00_4852;
BgL_oldzd2handlerszd2_4851 = 
PROCEDURE_REF(BgL_envz00_4850, 
(int)(((long)0))); 
BgL_handlerz00_4852 = 
PROCEDURE_REF(BgL_envz00_4850, 
(int)(((long)1))); 
BGL_ERROR_HANDLER_SET(BgL_oldzd2handlerszd2_4851); BUNSPEC; 
return 
PROCEDURE_ENTRY(BgL_handlerz00_4852)(BgL_handlerz00_4852, BgL_ez00_4853, BEOA);} } 

}



/* current-exception-handler */
BGL_EXPORTED_DEF obj_t BGl_currentzd2exceptionzd2handlerz00zz__errorz00()
{
{ /* Llib/error.scm 406 */
{ /* Llib/error.scm 407 */
bool_t BgL_test3489z00_5671;
{ /* Llib/error.scm 407 */
obj_t BgL_arg1425z00_1736;
BgL_arg1425z00_1736 = 
BGL_ERROR_HANDLER_GET(); 
BgL_test3489z00_5671 = 
PAIRP(BgL_arg1425z00_1736); } 
if(BgL_test3489z00_5671)
{ /* Llib/error.scm 408 */
obj_t BgL_arg1424z00_1735;
BgL_arg1424z00_1735 = 
BGL_ERROR_HANDLER_GET(); 
return 
CAR(
((obj_t)BgL_arg1424z00_1735));}  else 
{ /* Llib/error.scm 407 */
return BGl_defaultzd2exceptionzd2handlerzd2envzd2zz__errorz00;} } } 

}



/* &current-exception-handler */
obj_t BGl_z62currentzd2exceptionzd2handlerz62zz__errorz00(obj_t BgL_envz00_4854)
{
{ /* Llib/error.scm 406 */
return 
BGl_currentzd2exceptionzd2handlerz00zz__errorz00();} 

}



/* raise */
BGL_EXPORTED_DEF obj_t BGl_raisez00zz__errorz00(obj_t BgL_valz00_16)
{
{ /* Llib/error.scm 414 */
{ /* Llib/error.scm 415 */
obj_t BgL_handlersz00_1737;
BgL_handlersz00_1737 = 
BGL_ERROR_HANDLER_GET(); 
if(
PAIRP(BgL_handlersz00_1737))
{ /* Llib/error.scm 419 */
obj_t BgL_rz00_1740;
{ /* Llib/error.scm 419 */
obj_t BgL_fun1430z00_1745;
BgL_fun1430z00_1745 = 
CAR(BgL_handlersz00_1737); 
BgL_rz00_1740 = 
PROCEDURE_ENTRY(BgL_fun1430z00_1745)(BgL_fun1430z00_1745, BgL_valz00_16, BEOA); } 
if(
BGl_isazf3zf3zz__objectz00(BgL_valz00_16, BGl_z62errorz62zz__objectz00))
{ /* Llib/error.scm 423 */
obj_t BgL_arg1428z00_1743;obj_t BgL_arg1429z00_1744;
BgL_arg1428z00_1743 = 
(((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)
((BgL_z62errorz62_bglt)BgL_valz00_16))))->BgL_fnamez00); 
BgL_arg1429z00_1744 = 
(((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)
((BgL_z62errorz62_bglt)BgL_valz00_16))))->BgL_locationz00); 
{ /* Llib/error.scm 467 */
BgL_z62errorz62_bglt BgL_arg1453z00_3488;
{ /* Llib/error.scm 467 */
BgL_z62errorz62_bglt BgL_new1080z00_3489;
{ /* Llib/error.scm 468 */
BgL_z62errorz62_bglt BgL_new1079z00_3490;
BgL_new1079z00_3490 = 
((BgL_z62errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62errorz62_bgl) ))); 
{ /* Llib/error.scm 468 */
long BgL_arg1456z00_3491;
{ /* Llib/error.scm 468 */
long BgL_res2670z00_3495;
BgL_res2670z00_3495 = 
BGL_CLASS_INDEX(BGl_z62errorz62zz__objectz00); 
BgL_arg1456z00_3491 = BgL_res2670z00_3495; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1079z00_3490), BgL_arg1456z00_3491); } 
BgL_new1080z00_3489 = BgL_new1079z00_3490; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1080z00_3489)))->BgL_fnamez00)=((obj_t)BgL_arg1428z00_1743),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1080z00_3489)))->BgL_locationz00)=((obj_t)BgL_arg1429z00_1744),BUNSPEC); 
{ 
obj_t BgL_auxz00_5702;
{ /* Llib/error.scm 469 */
obj_t BgL_arg1454z00_3492;
{ /* Llib/error.scm 469 */
obj_t BgL_arg1455z00_3493;
{ /* Llib/error.scm 469 */
obj_t BgL_res2671z00_3499;
{ /* Llib/error.scm 469 */
obj_t BgL_classz00_3498;
BgL_classz00_3498 = BGl_z62errorz62zz__objectz00; 
BgL_res2671z00_3499 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_3498); } 
BgL_arg1455z00_3493 = BgL_res2671z00_3499; } 
BgL_arg1454z00_3492 = 
VECTOR_REF(BgL_arg1455z00_3493,((long)2)); } 
BgL_auxz00_5702 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_arg1454z00_3492); } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1080z00_3489)))->BgL_stackz00)=((obj_t)BgL_auxz00_5702),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(BgL_new1080z00_3489))->BgL_procz00)=((obj_t)BGl_string3148z00zz__errorz00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(BgL_new1080z00_3489))->BgL_msgz00)=((obj_t)BGl_string3149z00zz__errorz00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(BgL_new1080z00_3489))->BgL_objz00)=((obj_t)BgL_valz00_16),BUNSPEC); 
BgL_arg1453z00_3488 = BgL_new1080z00_3489; } 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg1453z00_3488)); } }  else 
{ /* Llib/error.scm 421 */BFALSE; } 
return BgL_rz00_1740;}  else 
{ /* Llib/error.scm 416 */
BGl_defaultzd2exceptionzd2handlerz00zz__errorz00(BgL_valz00_16); 
return 
BGl_errorz00zz__errorz00(BGl_string3148z00zz__errorz00, BGl_string3150z00zz__errorz00, BgL_valz00_16);} } } 

}



/* &raise */
obj_t BGl_z62raisez62zz__errorz00(obj_t BgL_envz00_4857, obj_t BgL_valz00_4858)
{
{ /* Llib/error.scm 414 */
return 
BGl_raisez00zz__errorz00(BgL_valz00_4858);} 

}



/* default-exception-handler */
obj_t BGl_defaultzd2exceptionzd2handlerz00zz__errorz00(obj_t BgL_valz00_17)
{
{ /* Llib/error.scm 434 */
BGl_exceptionzd2notifyzd2zz__objectz00(BgL_valz00_17); 
if(
BGl_isazf3zf3zz__objectz00(BgL_valz00_17, BGl_z62warningz62zz__objectz00))
{ /* Llib/error.scm 436 */BFALSE; }  else 
{ /* Llib/error.scm 437 */
long BgL_retvalz00_1747;
if(
BGl_isazf3zf3zz__objectz00(BgL_valz00_17, BGl_z62errorz62zz__objectz00))
{ /* Llib/error.scm 437 */
BgL_retvalz00_1747 = ((long)1); }  else 
{ /* Llib/error.scm 437 */
BgL_retvalz00_1747 = ((long)2); } 
{ /* Llib/error.scm 438 */
obj_t BgL_zc3z04anonymousza31433ze3z87_4859;
BgL_zc3z04anonymousza31433ze3z87_4859 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31433ze3ze5zz__errorz00, 
(int)(((long)1)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31433ze3z87_4859, 
(int)(((long)0)), 
BINT(BgL_retvalz00_1747)); 
unwind_stack_until(BFALSE, BFALSE, 
BINT(BgL_retvalz00_1747), BgL_zc3z04anonymousza31433ze3z87_4859); } } 
return BUNSPEC;} 

}



/* &default-exception-handler */
obj_t BGl_z62defaultzd2exceptionzd2handlerz62zz__errorz00(obj_t BgL_envz00_4855, obj_t BgL_valz00_4856)
{
{ /* Llib/error.scm 434 */
return 
BGl_defaultzd2exceptionzd2handlerz00zz__errorz00(BgL_valz00_4856);} 

}



/* &<@anonymous:1433> */
obj_t BGl_z62zc3z04anonymousza31433ze3ze5zz__errorz00(obj_t BgL_envz00_4860, obj_t BgL_xz00_4862)
{
{ /* Llib/error.scm 438 */
{ /* Llib/error.scm 438 */
long BgL_retvalz00_4861;
BgL_retvalz00_4861 = 
(long)CINT(
PROCEDURE_REF(BgL_envz00_4860, 
(int)(((long)0)))); 
{ /* Llib/error.scm 438 */
obj_t BgL_tmpz00_5733;
BgL_tmpz00_5733 = 
BINT(BgL_retvalz00_4861); 
return 
BIGLOO_EXIT(BgL_tmpz00_5733);} } } 

}



/* module-init-error */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initzd2errorz00zz__errorz00(char * BgL_currentz00_18, char * BgL_fromz00_19)
{
{ /* Llib/error.scm 444 */
{ /* Llib/error.scm 445 */
obj_t BgL_arg1435z00_1753;
{ /* Llib/error.scm 445 */
obj_t BgL_res2673z00_3504;
{ /* Llib/error.scm 445 */
obj_t BgL_tmpz00_5736;
BgL_tmpz00_5736 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2673z00_3504 = 
BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_5736); } 
BgL_arg1435z00_1753 = BgL_res2673z00_3504; } 
{ /* Llib/error.scm 445 */
obj_t BgL_list1436z00_1754;
{ /* Llib/error.scm 445 */
obj_t BgL_arg1437z00_1755;
{ /* Llib/error.scm 445 */
obj_t BgL_arg1438z00_1756;
{ /* Llib/error.scm 445 */
obj_t BgL_arg1439z00_1757;
{ /* Llib/error.scm 445 */
obj_t BgL_arg1440z00_1758;
{ /* Llib/error.scm 445 */
obj_t BgL_arg1441z00_1759;
{ /* Llib/error.scm 445 */
obj_t BgL_arg1442z00_1760;
{ /* Llib/error.scm 445 */
obj_t BgL_arg1443z00_1761;
{ /* Llib/error.scm 445 */
obj_t BgL_arg1444z00_1762;
{ /* Llib/error.scm 445 */
obj_t BgL_arg1445z00_1763;
{ /* Llib/error.scm 445 */
obj_t BgL_arg1446z00_1764;
BgL_arg1446z00_1764 = 
MAKE_YOUNG_PAIR(BGl_string3151z00zz__errorz00, BNIL); 
BgL_arg1445z00_1763 = 
MAKE_YOUNG_PAIR(
string_to_bstring(BgL_fromz00_19), BgL_arg1446z00_1764); } 
BgL_arg1444z00_1762 = 
MAKE_YOUNG_PAIR(BGl_string3152z00zz__errorz00, BgL_arg1445z00_1763); } 
BgL_arg1443z00_1761 = 
MAKE_YOUNG_PAIR(BGl_string3153z00zz__errorz00, BgL_arg1444z00_1762); } 
BgL_arg1442z00_1760 = 
MAKE_YOUNG_PAIR(
string_to_bstring(BgL_fromz00_19), BgL_arg1443z00_1761); } 
BgL_arg1441z00_1759 = 
MAKE_YOUNG_PAIR(BGl_string3154z00zz__errorz00, BgL_arg1442z00_1760); } 
BgL_arg1440z00_1758 = 
MAKE_YOUNG_PAIR(
string_to_bstring(BgL_currentz00_18), BgL_arg1441z00_1759); } 
BgL_arg1439z00_1757 = 
MAKE_YOUNG_PAIR(BGl_string3155z00zz__errorz00, BgL_arg1440z00_1758); } 
BgL_arg1438z00_1756 = 
MAKE_YOUNG_PAIR(BGl_string3156z00zz__errorz00, BgL_arg1439z00_1757); } 
BgL_arg1437z00_1755 = 
MAKE_YOUNG_PAIR(
string_to_bstring(BgL_currentz00_18), BgL_arg1438z00_1756); } 
BgL_list1436z00_1754 = 
MAKE_YOUNG_PAIR(BGl_string3157z00zz__errorz00, BgL_arg1437z00_1755); } 
BGl_fprintz00zz__r4_output_6_10_3z00(BgL_arg1435z00_1753, BgL_list1436z00_1754); } } 
{ /* Llib/error.scm 450 */
obj_t BgL_tmpz00_5755;
BgL_tmpz00_5755 = 
BINT(((long)1)); 
return 
BIGLOO_EXIT(BgL_tmpz00_5755);} } 

}



/* &module-init-error */
obj_t BGl_z62modulezd2initzd2errorz62zz__errorz00(obj_t BgL_envz00_4863, obj_t BgL_currentz00_4864, obj_t BgL_fromz00_4865)
{
{ /* Llib/error.scm 444 */
{ /* Llib/error.scm 449 */
char * BgL_auxz00_5767;char * BgL_auxz00_5758;
{ /* Llib/error.scm 449 */
obj_t BgL_tmpz00_5768;
if(
STRINGP(BgL_fromz00_4865))
{ /* Llib/error.scm 449 */
BgL_tmpz00_5768 = BgL_fromz00_4865
; }  else 
{ 
obj_t BgL_auxz00_5771;
BgL_auxz00_5771 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3137z00zz__errorz00, 
BINT(((long)17806)), BGl_string3158z00zz__errorz00, BGl_string3159z00zz__errorz00, BgL_fromz00_4865); 
FAILURE(BgL_auxz00_5771,BFALSE,BFALSE);} 
BgL_auxz00_5767 = 
BSTRING_TO_STRING(BgL_tmpz00_5768); } 
{ /* Llib/error.scm 449 */
obj_t BgL_tmpz00_5759;
if(
STRINGP(BgL_currentz00_4864))
{ /* Llib/error.scm 449 */
BgL_tmpz00_5759 = BgL_currentz00_4864
; }  else 
{ 
obj_t BgL_auxz00_5762;
BgL_auxz00_5762 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3137z00zz__errorz00, 
BINT(((long)17806)), BGl_string3158z00zz__errorz00, BGl_string3159z00zz__errorz00, BgL_currentz00_4864); 
FAILURE(BgL_auxz00_5762,BFALSE,BFALSE);} 
BgL_auxz00_5758 = 
BSTRING_TO_STRING(BgL_tmpz00_5759); } 
return 
BGl_modulezd2initzd2errorz00zz__errorz00(BgL_auxz00_5758, BgL_auxz00_5767);} } 

}



/* error */
BGL_EXPORTED_DEF obj_t BGl_errorz00zz__errorz00(obj_t BgL_procz00_20, obj_t BgL_msgz00_21, obj_t BgL_objz00_22)
{
{ /* Llib/error.scm 455 */
{ /* Llib/error.scm 457 */
BgL_z62errorz62_bglt BgL_arg1448z00_1765;
{ /* Llib/error.scm 457 */
BgL_z62errorz62_bglt BgL_new1078z00_1766;
{ /* Llib/error.scm 457 */
BgL_z62errorz62_bglt BgL_new1077z00_1769;
BgL_new1077z00_1769 = 
((BgL_z62errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62errorz62_bgl) ))); 
{ /* Llib/error.scm 457 */
long BgL_arg1452z00_1770;
{ /* Llib/error.scm 457 */
long BgL_res2674z00_3506;
BgL_res2674z00_3506 = 
BGL_CLASS_INDEX(BGl_z62errorz62zz__objectz00); 
BgL_arg1452z00_1770 = BgL_res2674z00_3506; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1077z00_1769), BgL_arg1452z00_1770); } 
BgL_new1078z00_1766 = BgL_new1077z00_1769; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1078z00_1766)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1078z00_1766)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_5785;
{ /* Llib/error.scm 457 */
obj_t BgL_arg1449z00_1767;
{ /* Llib/error.scm 457 */
obj_t BgL_arg1451z00_1768;
{ /* Llib/error.scm 457 */
obj_t BgL_res2675z00_3510;
{ /* Llib/error.scm 457 */
obj_t BgL_classz00_3509;
BgL_classz00_3509 = BGl_z62errorz62zz__objectz00; 
BgL_res2675z00_3510 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_3509); } 
BgL_arg1451z00_1768 = BgL_res2675z00_3510; } 
BgL_arg1449z00_1767 = 
VECTOR_REF(BgL_arg1451z00_1768,((long)2)); } 
BgL_auxz00_5785 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_arg1449z00_1767); } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1078z00_1766)))->BgL_stackz00)=((obj_t)BgL_auxz00_5785),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(BgL_new1078z00_1766))->BgL_procz00)=((obj_t)BgL_procz00_20),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(BgL_new1078z00_1766))->BgL_msgz00)=((obj_t)BgL_msgz00_21),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(BgL_new1078z00_1766))->BgL_objz00)=((obj_t)BgL_objz00_22),BUNSPEC); 
BgL_arg1448z00_1765 = BgL_new1078z00_1766; } 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg1448z00_1765));} } 

}



/* &error3084 */
obj_t BGl_z62error3084z62zz__errorz00(obj_t BgL_envz00_4866, obj_t BgL_procz00_4867, obj_t BgL_msgz00_4868, obj_t BgL_objz00_4869)
{
{ /* Llib/error.scm 455 */
return 
BGl_errorz00zz__errorz00(BgL_procz00_4867, BgL_msgz00_4868, BgL_objz00_4869);} 

}



/* error/location */
BGL_EXPORTED_DEF obj_t BGl_errorzf2locationzf2zz__errorz00(obj_t BgL_procz00_23, obj_t BgL_msgz00_24, obj_t BgL_objz00_25, obj_t BgL_fnamez00_26, obj_t BgL_locz00_27)
{
{ /* Llib/error.scm 465 */
{ /* Llib/error.scm 467 */
BgL_z62errorz62_bglt BgL_arg1453z00_3512;
{ /* Llib/error.scm 467 */
BgL_z62errorz62_bglt BgL_new1080z00_3513;
{ /* Llib/error.scm 468 */
BgL_z62errorz62_bglt BgL_new1079z00_3514;
BgL_new1079z00_3514 = 
((BgL_z62errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62errorz62_bgl) ))); 
{ /* Llib/error.scm 468 */
long BgL_arg1456z00_3515;
{ /* Llib/error.scm 468 */
long BgL_res2676z00_3519;
BgL_res2676z00_3519 = 
BGL_CLASS_INDEX(BGl_z62errorz62zz__objectz00); 
BgL_arg1456z00_3515 = BgL_res2676z00_3519; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1079z00_3514), BgL_arg1456z00_3515); } 
BgL_new1080z00_3513 = BgL_new1079z00_3514; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1080z00_3513)))->BgL_fnamez00)=((obj_t)BgL_fnamez00_26),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1080z00_3513)))->BgL_locationz00)=((obj_t)BgL_locz00_27),BUNSPEC); 
{ 
obj_t BgL_auxz00_5805;
{ /* Llib/error.scm 469 */
obj_t BgL_arg1454z00_3516;
{ /* Llib/error.scm 469 */
obj_t BgL_arg1455z00_3517;
{ /* Llib/error.scm 469 */
obj_t BgL_res2677z00_3523;
{ /* Llib/error.scm 469 */
obj_t BgL_classz00_3522;
BgL_classz00_3522 = BGl_z62errorz62zz__objectz00; 
BgL_res2677z00_3523 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_3522); } 
BgL_arg1455z00_3517 = BgL_res2677z00_3523; } 
BgL_arg1454z00_3516 = 
VECTOR_REF(BgL_arg1455z00_3517,((long)2)); } 
BgL_auxz00_5805 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_arg1454z00_3516); } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1080z00_3513)))->BgL_stackz00)=((obj_t)BgL_auxz00_5805),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(BgL_new1080z00_3513))->BgL_procz00)=((obj_t)BgL_procz00_23),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(BgL_new1080z00_3513))->BgL_msgz00)=((obj_t)BgL_msgz00_24),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(BgL_new1080z00_3513))->BgL_objz00)=((obj_t)BgL_objz00_25),BUNSPEC); 
BgL_arg1453z00_3512 = BgL_new1080z00_3513; } 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg1453z00_3512));} } 

}



/* &error/location */
obj_t BGl_z62errorzf2locationz90zz__errorz00(obj_t BgL_envz00_4870, obj_t BgL_procz00_4871, obj_t BgL_msgz00_4872, obj_t BgL_objz00_4873, obj_t BgL_fnamez00_4874, obj_t BgL_locz00_4875)
{
{ /* Llib/error.scm 465 */
return 
BGl_errorzf2locationzf2zz__errorz00(BgL_procz00_4871, BgL_msgz00_4872, BgL_objz00_4873, BgL_fnamez00_4874, BgL_locz00_4875);} 

}



/* error/source-location */
BGL_EXPORTED_DEF obj_t BGl_errorzf2sourcezd2locationz20zz__errorz00(obj_t BgL_procz00_28, obj_t BgL_msgz00_29, obj_t BgL_objz00_30, obj_t BgL_locz00_31)
{
{ /* Llib/error.scm 477 */
if(
PAIRP(BgL_locz00_31))
{ /* Llib/error.scm 478 */
obj_t BgL_cdrzd2186zd2_1783;
BgL_cdrzd2186zd2_1783 = 
CDR(BgL_locz00_31); 
if(
(
CAR(BgL_locz00_31)==BGl_symbol3141z00zz__errorz00))
{ /* Llib/error.scm 478 */
if(
PAIRP(BgL_cdrzd2186zd2_1783))
{ /* Llib/error.scm 478 */
obj_t BgL_cdrzd2190zd2_1787;
BgL_cdrzd2190zd2_1787 = 
CDR(BgL_cdrzd2186zd2_1783); 
if(
PAIRP(BgL_cdrzd2190zd2_1787))
{ /* Llib/error.scm 478 */
if(
NULLP(
CDR(BgL_cdrzd2190zd2_1787)))
{ /* Llib/error.scm 478 */
return 
BGl_errorzf2locationzf2zz__errorz00(BgL_procz00_28, BgL_msgz00_29, BgL_objz00_30, 
CAR(BgL_cdrzd2186zd2_1783), 
CAR(BgL_cdrzd2190zd2_1787));}  else 
{ /* Llib/error.scm 478 */
return 
BGl_errorz00zz__errorz00(BgL_procz00_28, BgL_msgz00_29, BgL_objz00_30);} }  else 
{ /* Llib/error.scm 478 */
return 
BGl_errorz00zz__errorz00(BgL_procz00_28, BgL_msgz00_29, BgL_objz00_30);} }  else 
{ /* Llib/error.scm 478 */
return 
BGl_errorz00zz__errorz00(BgL_procz00_28, BgL_msgz00_29, BgL_objz00_30);} }  else 
{ /* Llib/error.scm 478 */
return 
BGl_errorz00zz__errorz00(BgL_procz00_28, BgL_msgz00_29, BgL_objz00_30);} }  else 
{ /* Llib/error.scm 478 */
return 
BGl_errorz00zz__errorz00(BgL_procz00_28, BgL_msgz00_29, BgL_objz00_30);} } 

}



/* &error/source-location */
obj_t BGl_z62errorzf2sourcezd2locationz42zz__errorz00(obj_t BgL_envz00_4876, obj_t BgL_procz00_4877, obj_t BgL_msgz00_4878, obj_t BgL_objz00_4879, obj_t BgL_locz00_4880)
{
{ /* Llib/error.scm 477 */
return 
BGl_errorzf2sourcezd2locationz20zz__errorz00(BgL_procz00_4877, BgL_msgz00_4878, BgL_objz00_4879, BgL_locz00_4880);} 

}



/* error/source */
BGL_EXPORTED_DEF obj_t BGl_errorzf2sourcezf2zz__errorz00(obj_t BgL_procz00_32, obj_t BgL_msgz00_33, obj_t BgL_objz00_34, obj_t BgL_sourcez00_35)
{
{ /* Llib/error.scm 487 */
{ /* Llib/error.scm 488 */
bool_t BgL_test3501z00_5840;
{ /* Llib/error.scm 488 */
bool_t BgL_res2685z00_3552;
BgL_res2685z00_3552 = 
EPAIRP(BgL_sourcez00_35); 
BgL_test3501z00_5840 = BgL_res2685z00_3552; } 
if(BgL_test3501z00_5840)
{ /* Llib/error.scm 490 */
obj_t BgL_arg1469z00_3551;
BgL_arg1469z00_3551 = 
CER(
((obj_t)BgL_sourcez00_35)); 
return 
BGl_errorzf2sourcezd2locationz20zz__errorz00(BgL_procz00_32, BgL_msgz00_33, BgL_objz00_34, BgL_arg1469z00_3551);}  else 
{ /* Llib/error.scm 488 */
return 
BGl_errorz00zz__errorz00(BgL_procz00_32, BgL_msgz00_33, BgL_objz00_34);} } } 

}



/* &error/source */
obj_t BGl_z62errorzf2sourcez90zz__errorz00(obj_t BgL_envz00_4881, obj_t BgL_procz00_4882, obj_t BgL_msgz00_4883, obj_t BgL_objz00_4884, obj_t BgL_sourcez00_4885)
{
{ /* Llib/error.scm 487 */
return 
BGl_errorzf2sourcezf2zz__errorz00(BgL_procz00_4882, BgL_msgz00_4883, BgL_objz00_4884, BgL_sourcez00_4885);} 

}



/* error/c-location */
BGL_EXPORTED_DEF obj_t BGl_errorzf2czd2locationz20zz__errorz00(obj_t BgL_procz00_36, obj_t BgL_messagez00_37, obj_t BgL_objectz00_38, char * BgL_fnamez00_39, long BgL_locz00_40)
{
{ /* Llib/error.scm 499 */
{ /* Llib/error.scm 467 */
BgL_z62errorz62_bglt BgL_arg1453z00_3554;
{ /* Llib/error.scm 467 */
BgL_z62errorz62_bglt BgL_new1080z00_3555;
{ /* Llib/error.scm 468 */
BgL_z62errorz62_bglt BgL_new1079z00_3556;
BgL_new1079z00_3556 = 
((BgL_z62errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62errorz62_bgl) ))); 
{ /* Llib/error.scm 468 */
long BgL_arg1456z00_3557;
{ /* Llib/error.scm 468 */
long BgL_res2686z00_3561;
BgL_res2686z00_3561 = 
BGL_CLASS_INDEX(BGl_z62errorz62zz__objectz00); 
BgL_arg1456z00_3557 = BgL_res2686z00_3561; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1079z00_3556), BgL_arg1456z00_3557); } 
BgL_new1080z00_3555 = BgL_new1079z00_3556; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1080z00_3555)))->BgL_fnamez00)=((obj_t)
string_to_bstring(BgL_fnamez00_39)),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1080z00_3555)))->BgL_locationz00)=((obj_t)
BINT(BgL_locz00_40)),BUNSPEC); 
{ 
obj_t BgL_auxz00_5857;
{ /* Llib/error.scm 469 */
obj_t BgL_arg1454z00_3558;
{ /* Llib/error.scm 469 */
obj_t BgL_arg1455z00_3559;
{ /* Llib/error.scm 469 */
obj_t BgL_res2687z00_3565;
{ /* Llib/error.scm 469 */
obj_t BgL_classz00_3564;
BgL_classz00_3564 = BGl_z62errorz62zz__objectz00; 
BgL_res2687z00_3565 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_3564); } 
BgL_arg1455z00_3559 = BgL_res2687z00_3565; } 
BgL_arg1454z00_3558 = 
VECTOR_REF(BgL_arg1455z00_3559,((long)2)); } 
BgL_auxz00_5857 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_arg1454z00_3558); } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1080z00_3555)))->BgL_stackz00)=((obj_t)BgL_auxz00_5857),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(BgL_new1080z00_3555))->BgL_procz00)=((obj_t)BgL_procz00_36),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(BgL_new1080z00_3555))->BgL_msgz00)=((obj_t)BgL_messagez00_37),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(BgL_new1080z00_3555))->BgL_objz00)=((obj_t)BgL_objectz00_38),BUNSPEC); 
BgL_arg1453z00_3554 = BgL_new1080z00_3555; } 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg1453z00_3554));} } 

}



/* &error/c-location */
obj_t BGl_z62errorzf2czd2locationz42zz__errorz00(obj_t BgL_envz00_4886, obj_t BgL_procz00_4887, obj_t BgL_messagez00_4888, obj_t BgL_objectz00_4889, obj_t BgL_fnamez00_4890, obj_t BgL_locz00_4891)
{
{ /* Llib/error.scm 499 */
{ /* Llib/error.scm 467 */
long BgL_auxz00_5877;char * BgL_auxz00_5868;
{ /* Llib/error.scm 467 */
obj_t BgL_tmpz00_5878;
if(
INTEGERP(BgL_locz00_4891))
{ /* Llib/error.scm 467 */
BgL_tmpz00_5878 = BgL_locz00_4891
; }  else 
{ 
obj_t BgL_auxz00_5881;
BgL_auxz00_5881 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3137z00zz__errorz00, 
BINT(((long)18439)), BGl_string3160z00zz__errorz00, BGl_string3139z00zz__errorz00, BgL_locz00_4891); 
FAILURE(BgL_auxz00_5881,BFALSE,BFALSE);} 
BgL_auxz00_5877 = 
(long)CINT(BgL_tmpz00_5878); } 
{ /* Llib/error.scm 467 */
obj_t BgL_tmpz00_5869;
if(
STRINGP(BgL_fnamez00_4890))
{ /* Llib/error.scm 467 */
BgL_tmpz00_5869 = BgL_fnamez00_4890
; }  else 
{ 
obj_t BgL_auxz00_5872;
BgL_auxz00_5872 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3137z00zz__errorz00, 
BINT(((long)18439)), BGl_string3160z00zz__errorz00, BGl_string3159z00zz__errorz00, BgL_fnamez00_4890); 
FAILURE(BgL_auxz00_5872,BFALSE,BFALSE);} 
BgL_auxz00_5868 = 
BSTRING_TO_STRING(BgL_tmpz00_5869); } 
return 
BGl_errorzf2czd2locationz20zz__errorz00(BgL_procz00_4887, BgL_messagez00_4888, BgL_objectz00_4889, BgL_auxz00_5868, BgL_auxz00_5877);} } 

}



/* bigloo-type-error-msg */
BGL_EXPORTED_DEF obj_t BGl_bigloozd2typezd2errorzd2msgzd2zz__errorz00(obj_t BgL_prefixz00_41, obj_t BgL_fromz00_42, obj_t BgL_toz00_43)
{
{ /* Llib/error.scm 505 */
{ /* Llib/error.scm 506 */
obj_t BgL_list1470z00_3567;
{ /* Llib/error.scm 506 */
obj_t BgL_arg1471z00_3568;
{ /* Llib/error.scm 506 */
obj_t BgL_arg1472z00_3569;
{ /* Llib/error.scm 506 */
obj_t BgL_arg1473z00_3570;
{ /* Llib/error.scm 506 */
obj_t BgL_arg1474z00_3571;
{ /* Llib/error.scm 506 */
obj_t BgL_arg1475z00_3572;
BgL_arg1475z00_3572 = 
MAKE_YOUNG_PAIR(BGl_string3161z00zz__errorz00, BNIL); 
BgL_arg1474z00_3571 = 
MAKE_YOUNG_PAIR(BgL_toz00_43, BgL_arg1475z00_3572); } 
BgL_arg1473z00_3570 = 
MAKE_YOUNG_PAIR(BGl_string3162z00zz__errorz00, BgL_arg1474z00_3571); } 
BgL_arg1472z00_3569 = 
MAKE_YOUNG_PAIR(BgL_fromz00_42, BgL_arg1473z00_3570); } 
BgL_arg1471z00_3568 = 
MAKE_YOUNG_PAIR(BGl_string3163z00zz__errorz00, BgL_arg1472z00_3569); } 
BgL_list1470z00_3567 = 
MAKE_YOUNG_PAIR(BgL_prefixz00_41, BgL_arg1471z00_3568); } 
return 
BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list1470z00_3567);} } 

}



/* &bigloo-type-error-msg */
obj_t BGl_z62bigloozd2typezd2errorzd2msgzb0zz__errorz00(obj_t BgL_envz00_4892, obj_t BgL_prefixz00_4893, obj_t BgL_fromz00_4894, obj_t BgL_toz00_4895)
{
{ /* Llib/error.scm 505 */
{ /* Llib/error.scm 506 */
obj_t BgL_auxz00_5908;obj_t BgL_auxz00_5901;obj_t BgL_auxz00_5894;
if(
STRINGP(BgL_toz00_4895))
{ /* Llib/error.scm 506 */
BgL_auxz00_5908 = BgL_toz00_4895
; }  else 
{ 
obj_t BgL_auxz00_5911;
BgL_auxz00_5911 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3137z00zz__errorz00, 
BINT(((long)20222)), BGl_string3164z00zz__errorz00, BGl_string3159z00zz__errorz00, BgL_toz00_4895); 
FAILURE(BgL_auxz00_5911,BFALSE,BFALSE);} 
if(
STRINGP(BgL_fromz00_4894))
{ /* Llib/error.scm 506 */
BgL_auxz00_5901 = BgL_fromz00_4894
; }  else 
{ 
obj_t BgL_auxz00_5904;
BgL_auxz00_5904 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3137z00zz__errorz00, 
BINT(((long)20222)), BGl_string3164z00zz__errorz00, BGl_string3159z00zz__errorz00, BgL_fromz00_4894); 
FAILURE(BgL_auxz00_5904,BFALSE,BFALSE);} 
if(
STRINGP(BgL_prefixz00_4893))
{ /* Llib/error.scm 506 */
BgL_auxz00_5894 = BgL_prefixz00_4893
; }  else 
{ 
obj_t BgL_auxz00_5897;
BgL_auxz00_5897 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3137z00zz__errorz00, 
BINT(((long)20222)), BGl_string3164z00zz__errorz00, BGl_string3159z00zz__errorz00, BgL_prefixz00_4893); 
FAILURE(BgL_auxz00_5897,BFALSE,BFALSE);} 
return 
BGl_bigloozd2typezd2errorzd2msgzd2zz__errorz00(BgL_auxz00_5894, BgL_auxz00_5901, BgL_auxz00_5908);} } 

}



/* bigloo-type-error */
BGL_EXPORTED_DEF obj_t BGl_bigloozd2typezd2errorz00zz__errorz00(obj_t BgL_procz00_44, obj_t BgL_typez00_45, obj_t BgL_objz00_46)
{
{ /* Llib/error.scm 511 */
{ /* Llib/error.scm 512 */
obj_t BgL_tyz00_1803;
if(
STRINGP(BgL_typez00_45))
{ /* Llib/error.scm 513 */
BgL_tyz00_1803 = BgL_typez00_45; }  else 
{ /* Llib/error.scm 513 */
if(
SYMBOLP(BgL_typez00_45))
{ /* Llib/error.scm 516 */
obj_t BgL_res2690z00_3577;
{ /* Llib/error.scm 516 */
obj_t BgL_arg2216z00_3576;
BgL_arg2216z00_3576 = 
SYMBOL_TO_STRING(BgL_typez00_45); 
BgL_res2690z00_3577 = 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg2216z00_3576); } 
BgL_tyz00_1803 = BgL_res2690z00_3577; }  else 
{ /* Llib/error.scm 515 */
BgL_tyz00_1803 = BGl_string3165z00zz__errorz00; } } 
{ /* Llib/error.scm 512 */
obj_t BgL_msgz00_1804;
{ /* Llib/error.scm 519 */
obj_t BgL_arg1480z00_1811;
BgL_arg1480z00_1811 = 
bgl_typeof(BgL_objz00_46); 
{ /* Llib/error.scm 519 */
obj_t BgL_res2691z00_3587;
{ /* Llib/error.scm 506 */
obj_t BgL_list1470z00_3581;
{ /* Llib/error.scm 506 */
obj_t BgL_arg1471z00_3582;
{ /* Llib/error.scm 506 */
obj_t BgL_arg1472z00_3583;
{ /* Llib/error.scm 506 */
obj_t BgL_arg1473z00_3584;
{ /* Llib/error.scm 506 */
obj_t BgL_arg1474z00_3585;
{ /* Llib/error.scm 506 */
obj_t BgL_arg1475z00_3586;
BgL_arg1475z00_3586 = 
MAKE_YOUNG_PAIR(BGl_string3161z00zz__errorz00, BNIL); 
BgL_arg1474z00_3585 = 
MAKE_YOUNG_PAIR(BgL_arg1480z00_1811, BgL_arg1475z00_3586); } 
BgL_arg1473z00_3584 = 
MAKE_YOUNG_PAIR(BGl_string3162z00zz__errorz00, BgL_arg1474z00_3585); } 
BgL_arg1472z00_3583 = 
MAKE_YOUNG_PAIR(BgL_tyz00_1803, BgL_arg1473z00_3584); } 
BgL_arg1471z00_3582 = 
MAKE_YOUNG_PAIR(BGl_string3163z00zz__errorz00, BgL_arg1472z00_3583); } 
BgL_list1470z00_3581 = 
MAKE_YOUNG_PAIR(BGl_string3166z00zz__errorz00, BgL_arg1471z00_3582); } 
BgL_res2691z00_3587 = 
BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list1470z00_3581); } 
BgL_msgz00_1804 = BgL_res2691z00_3587; } } 
{ /* Llib/error.scm 519 */

{ /* Llib/error.scm 521 */
BgL_z62typezd2errorzb0_bglt BgL_arg1476z00_1805;
{ /* Llib/error.scm 521 */
BgL_z62typezd2errorzb0_bglt BgL_new1082z00_1806;
{ /* Llib/error.scm 521 */
BgL_z62typezd2errorzb0_bglt BgL_new1081z00_1809;
BgL_new1081z00_1809 = 
((BgL_z62typezd2errorzb0_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62typezd2errorzb0_bgl) ))); 
{ /* Llib/error.scm 521 */
long BgL_arg1479z00_1810;
{ /* Llib/error.scm 521 */
long BgL_res2692z00_3589;
BgL_res2692z00_3589 = 
BGL_CLASS_INDEX(BGl_z62typezd2errorzb0zz__objectz00); 
BgL_arg1479z00_1810 = BgL_res2692z00_3589; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1081z00_1809), BgL_arg1479z00_1810); } 
BgL_new1082z00_1806 = BgL_new1081z00_1809; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1082z00_1806)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1082z00_1806)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_5938;
{ /* Llib/error.scm 521 */
obj_t BgL_arg1477z00_1807;
{ /* Llib/error.scm 521 */
obj_t BgL_arg1478z00_1808;
{ /* Llib/error.scm 521 */
obj_t BgL_res2693z00_3593;
{ /* Llib/error.scm 521 */
obj_t BgL_classz00_3592;
BgL_classz00_3592 = BGl_z62typezd2errorzb0zz__objectz00; 
BgL_res2693z00_3593 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_3592); } 
BgL_arg1478z00_1808 = BgL_res2693z00_3593; } 
BgL_arg1477z00_1807 = 
VECTOR_REF(BgL_arg1478z00_1808,((long)2)); } 
BgL_auxz00_5938 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_arg1477z00_1807); } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1082z00_1806)))->BgL_stackz00)=((obj_t)BgL_auxz00_5938),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1082z00_1806)))->BgL_procz00)=((obj_t)BgL_procz00_44),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1082z00_1806)))->BgL_msgz00)=((obj_t)BgL_msgz00_1804),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1082z00_1806)))->BgL_objz00)=((obj_t)BgL_objz00_46),BUNSPEC); 
((((BgL_z62typezd2errorzb0_bglt)COBJECT(BgL_new1082z00_1806))->BgL_typez00)=((obj_t)BgL_typez00_45),BUNSPEC); 
BgL_arg1476z00_1805 = BgL_new1082z00_1806; } 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg1476z00_1805));} } } } } 

}



/* &bigloo-type-error */
obj_t BGl_z62bigloozd2typezd2errorz62zz__errorz00(obj_t BgL_envz00_4896, obj_t BgL_procz00_4897, obj_t BgL_typez00_4898, obj_t BgL_objz00_4899)
{
{ /* Llib/error.scm 511 */
return 
BGl_bigloozd2typezd2errorz00zz__errorz00(BgL_procz00_4897, BgL_typez00_4898, BgL_objz00_4899);} 

}



/* bigloo-type-error/location */
BGL_EXPORTED_DEF obj_t BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(obj_t BgL_procz00_47, obj_t BgL_typez00_48, obj_t BgL_objz00_49, obj_t BgL_fnamez00_50, obj_t BgL_locz00_51)
{
{ /* Llib/error.scm 530 */
return 
BGl_raisez00zz__errorz00(
BGl_typezd2errorzd2zz__errorz00(BgL_fnamez00_50, BgL_locz00_51, BgL_procz00_47, BgL_typez00_48, BgL_objz00_49));} 

}



/* &bigloo-type-error/location */
obj_t BGl_z62bigloozd2typezd2errorzf2locationz90zz__errorz00(obj_t BgL_envz00_4900, obj_t BgL_procz00_4901, obj_t BgL_typez00_4902, obj_t BgL_objz00_4903, obj_t BgL_fnamez00_4904, obj_t BgL_locz00_4905)
{
{ /* Llib/error.scm 530 */
return 
BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(BgL_procz00_4901, BgL_typez00_4902, BgL_objz00_4903, BgL_fnamez00_4904, BgL_locz00_4905);} 

}



/* type-error */
BGL_EXPORTED_DEF obj_t BGl_typezd2errorzd2zz__errorz00(obj_t BgL_fnamez00_52, obj_t BgL_locz00_53, obj_t BgL_procz00_54, obj_t BgL_typez00_55, obj_t BgL_objz00_56)
{
{ /* Llib/error.scm 536 */
{ /* Llib/error.scm 537 */
obj_t BgL_tyz00_1815;
if(
STRINGP(BgL_typez00_55))
{ /* Llib/error.scm 538 */
BgL_tyz00_1815 = BgL_typez00_55; }  else 
{ /* Llib/error.scm 538 */
if(
SYMBOLP(BgL_typez00_55))
{ /* Llib/error.scm 539 */
obj_t BgL_res2696z00_3600;
{ /* Llib/error.scm 539 */
obj_t BgL_arg2216z00_3599;
BgL_arg2216z00_3599 = 
SYMBOL_TO_STRING(BgL_typez00_55); 
BgL_res2696z00_3600 = 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg2216z00_3599); } 
BgL_tyz00_1815 = BgL_res2696z00_3600; }  else 
{ /* Llib/error.scm 539 */
BgL_tyz00_1815 = BGl_string3165z00zz__errorz00; } } 
{ /* Llib/error.scm 537 */
obj_t BgL_msgz00_1816;
{ /* Llib/error.scm 541 */
obj_t BgL_arg1487z00_1822;
BgL_arg1487z00_1822 = 
bgl_typeof(BgL_objz00_56); 
{ /* Llib/error.scm 541 */
obj_t BgL_res2697z00_3610;
{ /* Llib/error.scm 506 */
obj_t BgL_list1470z00_3604;
{ /* Llib/error.scm 506 */
obj_t BgL_arg1471z00_3605;
{ /* Llib/error.scm 506 */
obj_t BgL_arg1472z00_3606;
{ /* Llib/error.scm 506 */
obj_t BgL_arg1473z00_3607;
{ /* Llib/error.scm 506 */
obj_t BgL_arg1474z00_3608;
{ /* Llib/error.scm 506 */
obj_t BgL_arg1475z00_3609;
BgL_arg1475z00_3609 = 
MAKE_YOUNG_PAIR(BGl_string3161z00zz__errorz00, BNIL); 
BgL_arg1474z00_3608 = 
MAKE_YOUNG_PAIR(BgL_arg1487z00_1822, BgL_arg1475z00_3609); } 
BgL_arg1473z00_3607 = 
MAKE_YOUNG_PAIR(BGl_string3162z00zz__errorz00, BgL_arg1474z00_3608); } 
BgL_arg1472z00_3606 = 
MAKE_YOUNG_PAIR(BgL_tyz00_1815, BgL_arg1473z00_3607); } 
BgL_arg1471z00_3605 = 
MAKE_YOUNG_PAIR(BGl_string3163z00zz__errorz00, BgL_arg1472z00_3606); } 
BgL_list1470z00_3604 = 
MAKE_YOUNG_PAIR(BGl_string3166z00zz__errorz00, BgL_arg1471z00_3605); } 
BgL_res2697z00_3610 = 
BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list1470z00_3604); } 
BgL_msgz00_1816 = BgL_res2697z00_3610; } } 
{ /* Llib/error.scm 541 */

{ /* Llib/error.scm 542 */
BgL_z62typezd2errorzb0_bglt BgL_new1084z00_1817;
{ /* Llib/error.scm 543 */
BgL_z62typezd2errorzb0_bglt BgL_new1083z00_1820;
BgL_new1083z00_1820 = 
((BgL_z62typezd2errorzb0_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62typezd2errorzb0_bgl) ))); 
{ /* Llib/error.scm 543 */
long BgL_arg1486z00_1821;
{ /* Llib/error.scm 543 */
long BgL_res2698z00_3612;
BgL_res2698z00_3612 = 
BGL_CLASS_INDEX(BGl_z62typezd2errorzb0zz__objectz00); 
BgL_arg1486z00_1821 = BgL_res2698z00_3612; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1083z00_1820), BgL_arg1486z00_1821); } 
BgL_new1084z00_1817 = BgL_new1083z00_1820; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1084z00_1817)))->BgL_fnamez00)=((obj_t)BgL_fnamez00_52),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1084z00_1817)))->BgL_locationz00)=((obj_t)BgL_locz00_53),BUNSPEC); 
{ 
obj_t BgL_auxz00_5979;
{ /* Llib/error.scm 544 */
obj_t BgL_arg1484z00_1818;
{ /* Llib/error.scm 544 */
obj_t BgL_arg1485z00_1819;
{ /* Llib/error.scm 544 */
obj_t BgL_res2699z00_3616;
{ /* Llib/error.scm 544 */
obj_t BgL_classz00_3615;
BgL_classz00_3615 = BGl_z62typezd2errorzb0zz__objectz00; 
BgL_res2699z00_3616 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_3615); } 
BgL_arg1485z00_1819 = BgL_res2699z00_3616; } 
BgL_arg1484z00_1818 = 
VECTOR_REF(BgL_arg1485z00_1819,((long)2)); } 
BgL_auxz00_5979 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_arg1484z00_1818); } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1084z00_1817)))->BgL_stackz00)=((obj_t)BgL_auxz00_5979),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1084z00_1817)))->BgL_procz00)=((obj_t)BgL_procz00_54),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1084z00_1817)))->BgL_msgz00)=((obj_t)BgL_msgz00_1816),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1084z00_1817)))->BgL_objz00)=((obj_t)BgL_objz00_56),BUNSPEC); 
((((BgL_z62typezd2errorzb0_bglt)COBJECT(BgL_new1084z00_1817))->BgL_typez00)=((obj_t)BgL_typez00_55),BUNSPEC); 
return 
((obj_t)BgL_new1084z00_1817);} } } } } 

}



/* &type-error3085 */
obj_t BGl_z62typezd2error3085zb0zz__errorz00(obj_t BgL_envz00_4906, obj_t BgL_fnamez00_4907, obj_t BgL_locz00_4908, obj_t BgL_procz00_4909, obj_t BgL_typez00_4910, obj_t BgL_objz00_4911)
{
{ /* Llib/error.scm 536 */
return 
BGl_typezd2errorzd2zz__errorz00(BgL_fnamez00_4907, BgL_locz00_4908, BgL_procz00_4909, BgL_typez00_4910, BgL_objz00_4911);} 

}



/* typename-error */
BgL_z62typezd2errorzb0_bglt BGl_typenamezd2errorzd2zz__errorz00(bool_t BgL_fnamez00_57, bool_t BgL_locz00_58, obj_t BgL_procz00_59, obj_t BgL_typez00_60, obj_t BgL_objz00_61)
{
{ /* Llib/error.scm 553 */
{ /* Llib/error.scm 554 */
obj_t BgL_tyz00_1825;
if(
STRINGP(BgL_typez00_60))
{ /* Llib/error.scm 555 */
BgL_tyz00_1825 = BgL_typez00_60; }  else 
{ /* Llib/error.scm 555 */
if(
SYMBOLP(BgL_typez00_60))
{ /* Llib/error.scm 556 */
obj_t BgL_res2702z00_3622;
{ /* Llib/error.scm 556 */
obj_t BgL_arg2216z00_3621;
BgL_arg2216z00_3621 = 
SYMBOL_TO_STRING(BgL_typez00_60); 
BgL_res2702z00_3622 = 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg2216z00_3621); } 
BgL_tyz00_1825 = BgL_res2702z00_3622; }  else 
{ /* Llib/error.scm 556 */
BgL_tyz00_1825 = BGl_string3165z00zz__errorz00; } } 
{ /* Llib/error.scm 554 */
obj_t BgL_msgz00_1826;
{ /* Llib/error.scm 558 */
obj_t BgL_res2703z00_3632;
{ /* Llib/error.scm 506 */
obj_t BgL_list1470z00_3626;
{ /* Llib/error.scm 506 */
obj_t BgL_arg1471z00_3627;
{ /* Llib/error.scm 506 */
obj_t BgL_arg1472z00_3628;
{ /* Llib/error.scm 506 */
obj_t BgL_arg1473z00_3629;
{ /* Llib/error.scm 506 */
obj_t BgL_arg1474z00_3630;
{ /* Llib/error.scm 506 */
obj_t BgL_arg1475z00_3631;
BgL_arg1475z00_3631 = 
MAKE_YOUNG_PAIR(BGl_string3161z00zz__errorz00, BNIL); 
BgL_arg1474z00_3630 = 
MAKE_YOUNG_PAIR(
((obj_t)BgL_objz00_61), BgL_arg1475z00_3631); } 
BgL_arg1473z00_3629 = 
MAKE_YOUNG_PAIR(BGl_string3162z00zz__errorz00, BgL_arg1474z00_3630); } 
BgL_arg1472z00_3628 = 
MAKE_YOUNG_PAIR(BgL_tyz00_1825, BgL_arg1473z00_3629); } 
BgL_arg1471z00_3627 = 
MAKE_YOUNG_PAIR(BGl_string3163z00zz__errorz00, BgL_arg1472z00_3628); } 
BgL_list1470z00_3626 = 
MAKE_YOUNG_PAIR(BGl_string3166z00zz__errorz00, BgL_arg1471z00_3627); } 
BgL_res2703z00_3632 = 
BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list1470z00_3626); } 
BgL_msgz00_1826 = BgL_res2703z00_3632; } 
{ /* Llib/error.scm 558 */

{ /* Llib/error.scm 559 */
BgL_z62typezd2errorzb0_bglt BgL_new1086z00_1827;
{ /* Llib/error.scm 560 */
BgL_z62typezd2errorzb0_bglt BgL_new1085z00_1830;
BgL_new1085z00_1830 = 
((BgL_z62typezd2errorzb0_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62typezd2errorzb0_bgl) ))); 
{ /* Llib/error.scm 560 */
long BgL_arg1493z00_1831;
{ /* Llib/error.scm 560 */
long BgL_res2704z00_3634;
BgL_res2704z00_3634 = 
BGL_CLASS_INDEX(BGl_z62typezd2errorzb0zz__objectz00); 
BgL_arg1493z00_1831 = BgL_res2704z00_3634; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1085z00_1830), BgL_arg1493z00_1831); } 
BgL_new1086z00_1827 = BgL_new1085z00_1830; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1086z00_1827)))->BgL_fnamez00)=((obj_t)
BBOOL(BgL_fnamez00_57)),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1086z00_1827)))->BgL_locationz00)=((obj_t)
BBOOL(BgL_locz00_58)),BUNSPEC); 
{ 
obj_t BgL_auxz00_6018;
{ /* Llib/error.scm 561 */
obj_t BgL_arg1491z00_1828;
{ /* Llib/error.scm 561 */
obj_t BgL_arg1492z00_1829;
{ /* Llib/error.scm 561 */
obj_t BgL_res2705z00_3638;
{ /* Llib/error.scm 561 */
obj_t BgL_classz00_3637;
BgL_classz00_3637 = BGl_z62typezd2errorzb0zz__objectz00; 
BgL_res2705z00_3638 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_3637); } 
BgL_arg1492z00_1829 = BgL_res2705z00_3638; } 
BgL_arg1491z00_1828 = 
VECTOR_REF(BgL_arg1492z00_1829,((long)2)); } 
BgL_auxz00_6018 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_arg1491z00_1828); } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1086z00_1827)))->BgL_stackz00)=((obj_t)BgL_auxz00_6018),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1086z00_1827)))->BgL_procz00)=((obj_t)BgL_procz00_59),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1086z00_1827)))->BgL_msgz00)=((obj_t)BgL_msgz00_1826),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1086z00_1827)))->BgL_objz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62typezd2errorzb0_bglt)COBJECT(BgL_new1086z00_1827))->BgL_typez00)=((obj_t)BgL_typez00_60),BUNSPEC); 
return BgL_new1086z00_1827;} } } } } 

}



/* index-out-of-bounds-error */
BGL_EXPORTED_DEF obj_t BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(obj_t BgL_fnamez00_62, obj_t BgL_locz00_63, obj_t BgL_procz00_64, obj_t BgL_objz00_65, int BgL_lenz00_66, int BgL_iz00_67)
{
{ /* Llib/error.scm 570 */
{ /* Llib/error.scm 571 */
obj_t BgL_msgz00_1835;
{ /* Llib/error.scm 576 */
obj_t BgL_arg1500z00_1841;obj_t BgL_arg1502z00_1842;
{ /* Ieee/fixnum.scm 979 */

BgL_arg1500z00_1841 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
(long)(BgL_iz00_67), ((long)10)); } 
{ /* Ieee/fixnum.scm 979 */

BgL_arg1502z00_1842 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
(
(long)(BgL_lenz00_66)-((long)1)), ((long)10)); } 
{ /* Llib/error.scm 575 */
obj_t BgL_list1503z00_1843;
{ /* Llib/error.scm 575 */
obj_t BgL_arg1505z00_1844;
{ /* Llib/error.scm 575 */
obj_t BgL_arg1506z00_1845;
{ /* Llib/error.scm 575 */
obj_t BgL_arg1507z00_1846;
{ /* Llib/error.scm 575 */
obj_t BgL_arg1508z00_1847;
BgL_arg1508z00_1847 = 
MAKE_YOUNG_PAIR(BGl_string3167z00zz__errorz00, BNIL); 
BgL_arg1507z00_1846 = 
MAKE_YOUNG_PAIR(BgL_arg1502z00_1842, BgL_arg1508z00_1847); } 
BgL_arg1506z00_1845 = 
MAKE_YOUNG_PAIR(BGl_string3168z00zz__errorz00, BgL_arg1507z00_1846); } 
BgL_arg1505z00_1844 = 
MAKE_YOUNG_PAIR(BgL_arg1500z00_1841, BgL_arg1506z00_1845); } 
BgL_list1503z00_1843 = 
MAKE_YOUNG_PAIR(BGl_string3169z00zz__errorz00, BgL_arg1505z00_1844); } 
BgL_msgz00_1835 = 
BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list1503z00_1843); } } 
{ /* Llib/error.scm 575 */

{ /* Llib/error.scm 579 */
BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt BgL_new1088z00_1836;
{ /* Llib/error.scm 580 */
BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt BgL_new1087z00_1839;
BgL_new1087z00_1839 = 
((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bgl) ))); 
{ /* Llib/error.scm 580 */
long BgL_arg1498z00_1840;
{ /* Llib/error.scm 580 */
long BgL_res2709z00_3645;
BgL_res2709z00_3645 = 
BGL_CLASS_INDEX(BGl_z62indexzd2outzd2ofzd2boundszd2errorz62zz__objectz00); 
BgL_arg1498z00_1840 = BgL_res2709z00_3645; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1087z00_1839), BgL_arg1498z00_1840); } 
BgL_new1088z00_1836 = BgL_new1087z00_1839; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1088z00_1836)))->BgL_fnamez00)=((obj_t)BgL_fnamez00_62),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1088z00_1836)))->BgL_locationz00)=((obj_t)BgL_locz00_63),BUNSPEC); 
{ 
obj_t BgL_auxz00_6050;
{ /* Llib/error.scm 581 */
obj_t BgL_arg1496z00_1837;
{ /* Llib/error.scm 581 */
obj_t BgL_arg1497z00_1838;
{ /* Llib/error.scm 581 */
obj_t BgL_res2710z00_3649;
{ /* Llib/error.scm 581 */
obj_t BgL_classz00_3648;
BgL_classz00_3648 = BGl_z62indexzd2outzd2ofzd2boundszd2errorz62zz__objectz00; 
BgL_res2710z00_3649 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_3648); } 
BgL_arg1497z00_1838 = BgL_res2710z00_3649; } 
BgL_arg1496z00_1837 = 
VECTOR_REF(BgL_arg1497z00_1838,((long)2)); } 
BgL_auxz00_6050 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_arg1496z00_1837); } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1088z00_1836)))->BgL_stackz00)=((obj_t)BgL_auxz00_6050),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1088z00_1836)))->BgL_procz00)=((obj_t)BgL_procz00_64),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1088z00_1836)))->BgL_msgz00)=((obj_t)BgL_msgz00_1835),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1088z00_1836)))->BgL_objz00)=((obj_t)BgL_objz00_65),BUNSPEC); 
((((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)COBJECT(BgL_new1088z00_1836))->BgL_indexz00)=((obj_t)
BINT(BgL_lenz00_66)),BUNSPEC); 
return 
((obj_t)BgL_new1088z00_1836);} } } } 

}



/* &index-out-of-bounds3086 */
obj_t BGl_z62indexzd2outzd2ofzd2bounds3086zb0zz__errorz00(obj_t BgL_envz00_4912, obj_t BgL_fnamez00_4913, obj_t BgL_locz00_4914, obj_t BgL_procz00_4915, obj_t BgL_objz00_4916, obj_t BgL_lenz00_4917, obj_t BgL_iz00_4918)
{
{ /* Llib/error.scm 570 */
{ /* Llib/error.scm 571 */
int BgL_auxz00_6074;int BgL_auxz00_6065;
{ /* Llib/error.scm 571 */
obj_t BgL_tmpz00_6075;
if(
INTEGERP(BgL_iz00_4918))
{ /* Llib/error.scm 571 */
BgL_tmpz00_6075 = BgL_iz00_4918
; }  else 
{ 
obj_t BgL_auxz00_6078;
BgL_auxz00_6078 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3137z00zz__errorz00, 
BINT(((long)22564)), BGl_string3170z00zz__errorz00, BGl_string3139z00zz__errorz00, BgL_iz00_4918); 
FAILURE(BgL_auxz00_6078,BFALSE,BFALSE);} 
BgL_auxz00_6074 = 
CINT(BgL_tmpz00_6075); } 
{ /* Llib/error.scm 571 */
obj_t BgL_tmpz00_6066;
if(
INTEGERP(BgL_lenz00_4917))
{ /* Llib/error.scm 571 */
BgL_tmpz00_6066 = BgL_lenz00_4917
; }  else 
{ 
obj_t BgL_auxz00_6069;
BgL_auxz00_6069 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3137z00zz__errorz00, 
BINT(((long)22564)), BGl_string3170z00zz__errorz00, BGl_string3139z00zz__errorz00, BgL_lenz00_4917); 
FAILURE(BgL_auxz00_6069,BFALSE,BFALSE);} 
BgL_auxz00_6065 = 
CINT(BgL_tmpz00_6066); } 
return 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BgL_fnamez00_4913, BgL_locz00_4914, BgL_procz00_4915, BgL_objz00_4916, BgL_auxz00_6065, BgL_auxz00_6074);} } 

}



/* warning */
BGL_EXPORTED_DEF obj_t BGl_warningz00zz__errorz00(obj_t BgL_argsz00_68)
{
{ /* Llib/error.scm 590 */
{ /* Llib/error.scm 592 */
BgL_z62warningz62_bglt BgL_arg1513z00_1858;
{ /* Llib/error.scm 592 */
BgL_z62warningz62_bglt BgL_new1090z00_1859;
{ /* Llib/error.scm 592 */
BgL_z62warningz62_bglt BgL_new1089z00_1862;
BgL_new1089z00_1862 = 
((BgL_z62warningz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62warningz62_bgl) ))); 
{ /* Llib/error.scm 592 */
long BgL_arg1516z00_1863;
{ /* Llib/error.scm 592 */
long BgL_res2711z00_3652;
BgL_res2711z00_3652 = 
BGL_CLASS_INDEX(BGl_z62warningz62zz__objectz00); 
BgL_arg1516z00_1863 = BgL_res2711z00_3652; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1089z00_1862), BgL_arg1516z00_1863); } 
BgL_new1090z00_1859 = BgL_new1089z00_1862; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1090z00_1859)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1090z00_1859)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_6092;
{ /* Llib/error.scm 592 */
obj_t BgL_arg1514z00_1860;
{ /* Llib/error.scm 592 */
obj_t BgL_arg1515z00_1861;
{ /* Llib/error.scm 592 */
obj_t BgL_res2712z00_3656;
{ /* Llib/error.scm 592 */
obj_t BgL_classz00_3655;
BgL_classz00_3655 = BGl_z62warningz62zz__objectz00; 
BgL_res2712z00_3656 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_3655); } 
BgL_arg1515z00_1861 = BgL_res2712z00_3656; } 
BgL_arg1514z00_1860 = 
VECTOR_REF(BgL_arg1515z00_1861,((long)2)); } 
BgL_auxz00_6092 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_arg1514z00_1860); } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1090z00_1859)))->BgL_stackz00)=((obj_t)BgL_auxz00_6092),BUNSPEC); } 
((((BgL_z62warningz62_bglt)COBJECT(BgL_new1090z00_1859))->BgL_argsz00)=((obj_t)BgL_argsz00_68),BUNSPEC); 
BgL_arg1513z00_1858 = BgL_new1090z00_1859; } 
return 
BGl_warningzd2notifyzd2zz__errorz00(
((obj_t)BgL_arg1513z00_1858));} } 

}



/* &warning3087 */
obj_t BGl_z62warning3087z62zz__errorz00(obj_t BgL_envz00_4919, obj_t BgL_argsz00_4920)
{
{ /* Llib/error.scm 590 */
return 
BGl_warningz00zz__errorz00(BgL_argsz00_4920);} 

}



/* warning/location */
BGL_EXPORTED_DEF obj_t BGl_warningzf2locationzf2zz__errorz00(obj_t BgL_fnamez00_69, obj_t BgL_locz00_70, obj_t BgL_argsz00_71)
{
{ /* Llib/error.scm 597 */
{ /* Llib/error.scm 599 */
BgL_z62warningz62_bglt BgL_arg1518z00_1864;
{ /* Llib/error.scm 599 */
BgL_z62warningz62_bglt BgL_new1092z00_1865;
{ /* Llib/error.scm 599 */
BgL_z62warningz62_bglt BgL_new1091z00_1868;
BgL_new1091z00_1868 = 
((BgL_z62warningz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62warningz62_bgl) ))); 
{ /* Llib/error.scm 599 */
long BgL_arg1521z00_1869;
{ /* Llib/error.scm 599 */
long BgL_res2713z00_3659;
BgL_res2713z00_3659 = 
BGL_CLASS_INDEX(BGl_z62warningz62zz__objectz00); 
BgL_arg1521z00_1869 = BgL_res2713z00_3659; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1091z00_1868), BgL_arg1521z00_1869); } 
BgL_new1092z00_1865 = BgL_new1091z00_1868; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1092z00_1865)))->BgL_fnamez00)=((obj_t)BgL_fnamez00_69),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1092z00_1865)))->BgL_locationz00)=((obj_t)BgL_locz00_70),BUNSPEC); 
{ 
obj_t BgL_auxz00_6110;
{ /* Llib/error.scm 599 */
obj_t BgL_arg1519z00_1866;
{ /* Llib/error.scm 599 */
obj_t BgL_arg1520z00_1867;
{ /* Llib/error.scm 599 */
obj_t BgL_res2714z00_3663;
{ /* Llib/error.scm 599 */
obj_t BgL_classz00_3662;
BgL_classz00_3662 = BGl_z62warningz62zz__objectz00; 
BgL_res2714z00_3663 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_3662); } 
BgL_arg1520z00_1867 = BgL_res2714z00_3663; } 
BgL_arg1519z00_1866 = 
VECTOR_REF(BgL_arg1520z00_1867,((long)2)); } 
BgL_auxz00_6110 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_arg1519z00_1866); } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1092z00_1865)))->BgL_stackz00)=((obj_t)BgL_auxz00_6110),BUNSPEC); } 
((((BgL_z62warningz62_bglt)COBJECT(BgL_new1092z00_1865))->BgL_argsz00)=((obj_t)BgL_argsz00_71),BUNSPEC); 
BgL_arg1518z00_1864 = BgL_new1092z00_1865; } 
return 
BGl_warningzd2notifyzd2zz__errorz00(
((obj_t)BgL_arg1518z00_1864));} } 

}



/* &warning/location */
obj_t BGl_z62warningzf2locationz90zz__errorz00(obj_t BgL_envz00_4921, obj_t BgL_fnamez00_4922, obj_t BgL_locz00_4923, obj_t BgL_argsz00_4924)
{
{ /* Llib/error.scm 597 */
return 
BGl_warningzf2locationzf2zz__errorz00(BgL_fnamez00_4922, BgL_locz00_4923, BgL_argsz00_4924);} 

}



/* warning/loc */
BGL_EXPORTED_DEF obj_t BGl_warningzf2loczf2zz__errorz00(obj_t BgL_locz00_72, obj_t BgL_argsz00_73)
{
{ /* Llib/error.scm 604 */
if(
PAIRP(BgL_locz00_72))
{ /* Llib/error.scm 605 */
obj_t BgL_cdrzd2204zd2_1876;
BgL_cdrzd2204zd2_1876 = 
CDR(BgL_locz00_72); 
if(
(
CAR(BgL_locz00_72)==BGl_symbol3141z00zz__errorz00))
{ /* Llib/error.scm 605 */
if(
PAIRP(BgL_cdrzd2204zd2_1876))
{ /* Llib/error.scm 605 */
obj_t BgL_cdrzd2208zd2_1880;
BgL_cdrzd2208zd2_1880 = 
CDR(BgL_cdrzd2204zd2_1876); 
if(
PAIRP(BgL_cdrzd2208zd2_1880))
{ /* Llib/error.scm 605 */
if(
NULLP(
CDR(BgL_cdrzd2208zd2_1880)))
{ /* Llib/error.scm 605 */
obj_t BgL_arg1530z00_1884;obj_t BgL_arg1531z00_1885;
BgL_arg1530z00_1884 = 
CAR(BgL_cdrzd2204zd2_1876); 
BgL_arg1531z00_1885 = 
CAR(BgL_cdrzd2208zd2_1880); 
{ /* Llib/error.scm 607 */
obj_t BgL_list1534z00_3680;
{ /* Llib/error.scm 607 */
obj_t BgL_arg1535z00_3681;
BgL_arg1535z00_3681 = 
MAKE_YOUNG_PAIR(BgL_argsz00_73, BNIL); 
BgL_list1534z00_3680 = 
MAKE_YOUNG_PAIR(BgL_arg1531z00_1885, BgL_arg1535z00_3681); } 
return 
BGl_applyz00zz__r4_control_features_6_9z00(BGl_warningzf2locationzd2envz20zz__errorz00, BgL_arg1530z00_1884, BgL_list1534z00_3680);} }  else 
{ /* Llib/error.scm 605 */
return 
BGl_warningz00zz__errorz00(BgL_argsz00_73);} }  else 
{ /* Llib/error.scm 605 */
return 
BGl_warningz00zz__errorz00(BgL_argsz00_73);} }  else 
{ /* Llib/error.scm 605 */
return 
BGl_warningz00zz__errorz00(BgL_argsz00_73);} }  else 
{ /* Llib/error.scm 605 */
return 
BGl_warningz00zz__errorz00(BgL_argsz00_73);} }  else 
{ /* Llib/error.scm 605 */
return 
BGl_warningz00zz__errorz00(BgL_argsz00_73);} } 

}



/* &warning/loc */
obj_t BGl_z62warningzf2locz90zz__errorz00(obj_t BgL_envz00_4925, obj_t BgL_locz00_4926, obj_t BgL_argsz00_4927)
{
{ /* Llib/error.scm 604 */
return 
BGl_warningzf2loczf2zz__errorz00(BgL_locz00_4926, BgL_argsz00_4927);} 

}



/* warning/c-location */
BGL_EXPORTED_DEF obj_t BGl_warningzf2czd2locationz20zz__errorz00(char * BgL_fnamez00_74, long BgL_locz00_75, obj_t BgL_argsz00_76)
{
{ /* Llib/error.scm 618 */
{ /* Llib/error.scm 619 */
obj_t BgL_list1537z00_3687;
{ /* Llib/error.scm 619 */
obj_t BgL_arg1540z00_3688;
BgL_arg1540z00_3688 = 
MAKE_YOUNG_PAIR(BgL_argsz00_76, BNIL); 
BgL_list1537z00_3687 = 
MAKE_YOUNG_PAIR(
BINT(BgL_locz00_75), BgL_arg1540z00_3688); } 
return 
BGl_applyz00zz__r4_control_features_6_9z00(BGl_warningzf2locationzd2envz20zz__errorz00, 
string_to_bstring(BgL_fnamez00_74), BgL_list1537z00_3687);} } 

}



/* &warning/c-location */
obj_t BGl_z62warningzf2czd2locationz42zz__errorz00(obj_t BgL_envz00_4928, obj_t BgL_fnamez00_4929, obj_t BgL_locz00_4930, obj_t BgL_argsz00_4931)
{
{ /* Llib/error.scm 618 */
{ /* Llib/error.scm 619 */
long BgL_auxz00_6159;char * BgL_auxz00_6150;
{ /* Llib/error.scm 619 */
obj_t BgL_tmpz00_6160;
if(
INTEGERP(BgL_locz00_4930))
{ /* Llib/error.scm 619 */
BgL_tmpz00_6160 = BgL_locz00_4930
; }  else 
{ 
obj_t BgL_auxz00_6163;
BgL_auxz00_6163 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3137z00zz__errorz00, 
BINT(((long)24551)), BGl_string3171z00zz__errorz00, BGl_string3139z00zz__errorz00, BgL_locz00_4930); 
FAILURE(BgL_auxz00_6163,BFALSE,BFALSE);} 
BgL_auxz00_6159 = 
(long)CINT(BgL_tmpz00_6160); } 
{ /* Llib/error.scm 619 */
obj_t BgL_tmpz00_6151;
if(
STRINGP(BgL_fnamez00_4929))
{ /* Llib/error.scm 619 */
BgL_tmpz00_6151 = BgL_fnamez00_4929
; }  else 
{ 
obj_t BgL_auxz00_6154;
BgL_auxz00_6154 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3137z00zz__errorz00, 
BINT(((long)24551)), BGl_string3171z00zz__errorz00, BGl_string3159z00zz__errorz00, BgL_fnamez00_4929); 
FAILURE(BgL_auxz00_6154,BFALSE,BFALSE);} 
BgL_auxz00_6150 = 
BSTRING_TO_STRING(BgL_tmpz00_6151); } 
return 
BGl_warningzf2czd2locationz20zz__errorz00(BgL_auxz00_6150, BgL_auxz00_6159, BgL_argsz00_4931);} } 

}



/* notify-&error */
obj_t BGl_notifyzd2z62errorzb0zz__errorz00(BgL_z62errorz62_bglt BgL_errz00_77)
{
{ /* Llib/error.scm 624 */
{ /* Llib/error.scm 625 */
obj_t BgL_portz00_1893;
{ /* Llib/error.scm 625 */
obj_t BgL_res2720z00_3690;
{ /* Llib/error.scm 625 */
obj_t BgL_tmpz00_6169;
BgL_tmpz00_6169 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2720z00_3690 = 
BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_6169); } 
BgL_portz00_1893 = BgL_res2720z00_3690; } 
bgl_flush_output_port(BgL_portz00_1893); 
{ /* Llib/error.scm 628 */
obj_t BgL_list1541z00_1895;
BgL_list1541z00_1895 = 
MAKE_YOUNG_PAIR(BgL_portz00_1893, BNIL); 
BGl_displayz00zz__r4_output_6_10_3z00(BGl_string3157z00zz__errorz00, BgL_list1541z00_1895); } 
BGl_displayzd2circlezd2zz__pp_circlez00(
(((BgL_z62errorz62_bglt)COBJECT(BgL_errz00_77))->BgL_procz00), BgL_portz00_1893); 
{ /* Llib/error.scm 630 */
obj_t BgL_list1543z00_1897;
BgL_list1543z00_1897 = 
MAKE_YOUNG_PAIR(BgL_portz00_1893, BNIL); 
BGl_displayz00zz__r4_output_6_10_3z00(BGl_string3172z00zz__errorz00, BgL_list1543z00_1897); } 
BGl_displayzd2circlezd2zz__pp_circlez00(
(((BgL_z62errorz62_bglt)COBJECT(BgL_errz00_77))->BgL_msgz00), BgL_portz00_1893); 
{ /* Llib/error.scm 632 */
obj_t BgL_list1545z00_1899;
BgL_list1545z00_1899 = 
MAKE_YOUNG_PAIR(BgL_portz00_1893, BNIL); 
BGl_displayz00zz__r4_output_6_10_3z00(BGl_string3173z00zz__errorz00, BgL_list1545z00_1899); } 
BGl_displayzd2circlezd2zz__pp_circlez00(
(((BgL_z62errorz62_bglt)COBJECT(BgL_errz00_77))->BgL_objz00), BgL_portz00_1893); 
{ /* Llib/error.scm 634 */
obj_t BgL_list1547z00_1901;
BgL_list1547z00_1901 = 
MAKE_YOUNG_PAIR(BgL_portz00_1893, BNIL); 
BGl_newlinez00zz__r4_output_6_10_3z00(BgL_list1547z00_1901); } 
{ /* Llib/error.scm 635 */
obj_t BgL_arg1551z00_1902;
{ /* Llib/error.scm 635 */
obj_t BgL__ortest_1094z00_1906;
BgL__ortest_1094z00_1906 = 
(((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_errz00_77)))->BgL_stackz00); 
if(
CBOOL(BgL__ortest_1094z00_1906))
{ /* Llib/error.scm 635 */
BgL_arg1551z00_1902 = BgL__ortest_1094z00_1906; }  else 
{ /* Llib/error.scm 635 */

{ /* Llib/error.scm 635 */

BgL_arg1551z00_1902 = 
BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE); } } } 
{ /* Llib/error.scm 248 */

BGl_displayzd2tracezd2stackz00zz__errorz00(BgL_arg1551z00_1902, BgL_portz00_1893, 
BINT(((long)1))); } } 
return 
bgl_flush_output_port(BgL_portz00_1893);} } 

}



/* notify-&error/location-no-loc */
obj_t BGl_notifyzd2z62errorzf2locationzd2nozd2locz42zz__errorz00(BgL_z62errorz62_bglt BgL_errz00_78)
{
{ /* Llib/error.scm 641 */
{ /* Llib/error.scm 642 */
obj_t BgL_portz00_1908;
{ /* Llib/error.scm 642 */
obj_t BgL_res2721z00_3694;
{ /* Llib/error.scm 642 */
obj_t BgL_tmpz00_6195;
BgL_tmpz00_6195 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2721z00_3694 = 
BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_6195); } 
BgL_portz00_1908 = BgL_res2721z00_3694; } 
bgl_flush_output_port(BgL_portz00_1908); 
{ /* Llib/error.scm 645 */
obj_t BgL_list1552z00_1910;
BgL_list1552z00_1910 = 
MAKE_YOUNG_PAIR(BgL_portz00_1908, BNIL); 
BGl_newlinez00zz__r4_output_6_10_3z00(BgL_list1552z00_1910); } 
{ /* Llib/error.scm 646 */
obj_t BgL_arg1553z00_1911;obj_t BgL_arg1554z00_1912;
BgL_arg1553z00_1911 = 
(((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_errz00_78)))->BgL_fnamez00); 
BgL_arg1554z00_1912 = 
(((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_errz00_78)))->BgL_locationz00); 
{ /* Llib/error.scm 646 */
obj_t BgL_list1555z00_1913;
{ /* Llib/error.scm 646 */
obj_t BgL_arg1556z00_1914;
{ /* Llib/error.scm 646 */
obj_t BgL_arg1557z00_1915;
{ /* Llib/error.scm 646 */
obj_t BgL_arg1558z00_1916;
{ /* Llib/error.scm 646 */
obj_t BgL_arg1560z00_1917;
BgL_arg1560z00_1917 = 
MAKE_YOUNG_PAIR(
BCHAR(((unsigned char)':')), BNIL); 
BgL_arg1558z00_1916 = 
MAKE_YOUNG_PAIR(BgL_arg1554z00_1912, BgL_arg1560z00_1917); } 
BgL_arg1557z00_1915 = 
MAKE_YOUNG_PAIR(BGl_string3174z00zz__errorz00, BgL_arg1558z00_1916); } 
BgL_arg1556z00_1914 = 
MAKE_YOUNG_PAIR(BgL_arg1553z00_1911, BgL_arg1557z00_1915); } 
BgL_list1555z00_1913 = 
MAKE_YOUNG_PAIR(BGl_string3175z00zz__errorz00, BgL_arg1556z00_1914); } 
BGl_fprintz00zz__r4_output_6_10_3z00(BgL_portz00_1908, BgL_list1555z00_1913); } } 
return 
BGl_notifyzd2z62errorzb0zz__errorz00(BgL_errz00_78);} } 

}



/* notify-&error/location-loc */
obj_t BGl_notifyzd2z62errorzf2locationzd2locz90zz__errorz00(BgL_z62errorz62_bglt BgL_errz00_79, obj_t BgL_fnamez00_80, obj_t BgL_linez00_81, obj_t BgL_locz00_82, obj_t BgL_stringz00_83, obj_t BgL_colz00_84)
{
{ /* Llib/error.scm 652 */
{ /* Llib/error.scm 654 */
obj_t BgL_portz00_1919;
{ /* Llib/error.scm 654 */
obj_t BgL_res2722z00_3697;
{ /* Llib/error.scm 654 */
obj_t BgL_tmpz00_6213;
BgL_tmpz00_6213 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2722z00_3697 = 
BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_6213); } 
BgL_portz00_1919 = BgL_res2722z00_3697; } 
bgl_flush_output_port(BgL_portz00_1919); 
{ /* Llib/error.scm 657 */
obj_t BgL_list1561z00_1920;
BgL_list1561z00_1920 = 
MAKE_YOUNG_PAIR(BgL_portz00_1919, BNIL); 
BGl_newlinez00zz__r4_output_6_10_3z00(BgL_list1561z00_1920); } 
{ /* Llib/error.scm 658 */
obj_t BgL_spacezd2stringzd2_1921;
if(
(
(long)CINT(BgL_colz00_84)>((long)0)))
{ /* Llib/error.scm 658 */
BgL_spacezd2stringzd2_1921 = 
make_string(
(long)CINT(BgL_colz00_84), ((unsigned char)' ')); }  else 
{ /* Llib/error.scm 658 */
BgL_spacezd2stringzd2_1921 = BGl_string3176z00zz__errorz00; } 
{ /* Llib/error.scm 658 */
long BgL_lz00_1922;
BgL_lz00_1922 = 
STRING_LENGTH(
((obj_t)BgL_stringz00_83)); 
{ /* Llib/error.scm 659 */
obj_t BgL_nzd2colzd2_1923;
if(
(
(long)CINT(BgL_colz00_84)>=BgL_lz00_1922))
{ /* Llib/error.scm 660 */
BgL_nzd2colzd2_1923 = 
BINT(BgL_lz00_1922); }  else 
{ /* Llib/error.scm 660 */
BgL_nzd2colzd2_1923 = BgL_colz00_84; } 
{ /* Llib/error.scm 660 */

BGl_fixzd2tabulationz12zc0zz__errorz00(BgL_nzd2colzd2_1923, BgL_stringz00_83, BgL_spacezd2stringzd2_1921); 
BGl_printzd2cursorzd2zz__errorz00(BgL_fnamez00_80, BgL_linez00_81, BgL_locz00_82, BgL_stringz00_83, BgL_spacezd2stringzd2_1921); 
{ /* Llib/error.scm 666 */
obj_t BgL_list1562z00_1924;
BgL_list1562z00_1924 = 
MAKE_YOUNG_PAIR(BgL_portz00_1919, BNIL); 
BGl_displayz00zz__r4_output_6_10_3z00(BGl_string3157z00zz__errorz00, BgL_list1562z00_1924); } 
BGl_displayzd2circlezd2zz__pp_circlez00(
(((BgL_z62errorz62_bglt)COBJECT(BgL_errz00_79))->BgL_procz00), BgL_portz00_1919); 
{ /* Llib/error.scm 668 */
obj_t BgL_list1564z00_1926;
BgL_list1564z00_1926 = 
MAKE_YOUNG_PAIR(BgL_portz00_1919, BNIL); 
BGl_newlinez00zz__r4_output_6_10_3z00(BgL_list1564z00_1926); } 
BGl_displayzd2circlezd2zz__pp_circlez00(
(((BgL_z62errorz62_bglt)COBJECT(BgL_errz00_79))->BgL_msgz00), BgL_portz00_1919); 
{ /* Llib/error.scm 670 */
obj_t BgL_list1566z00_1928;
BgL_list1566z00_1928 = 
MAKE_YOUNG_PAIR(BgL_portz00_1919, BNIL); 
BGl_displayz00zz__r4_output_6_10_3z00(BGl_string3173z00zz__errorz00, BgL_list1566z00_1928); } 
BGl_displayzd2circlezd2zz__pp_circlez00(
(((BgL_z62errorz62_bglt)COBJECT(BgL_errz00_79))->BgL_objz00), BgL_portz00_1919); 
{ /* Llib/error.scm 672 */
obj_t BgL_list1568z00_1930;
BgL_list1568z00_1930 = 
MAKE_YOUNG_PAIR(BgL_portz00_1919, BNIL); 
BGl_newlinez00zz__r4_output_6_10_3z00(BgL_list1568z00_1930); } 
{ /* Llib/error.scm 673 */
obj_t BgL_arg1569z00_1931;
{ /* Llib/error.scm 673 */
obj_t BgL__ortest_1097z00_1935;
BgL__ortest_1097z00_1935 = 
(((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_errz00_79)))->BgL_stackz00); 
if(
CBOOL(BgL__ortest_1097z00_1935))
{ /* Llib/error.scm 673 */
BgL_arg1569z00_1931 = BgL__ortest_1097z00_1935; }  else 
{ /* Llib/error.scm 673 */

{ /* Llib/error.scm 673 */

BgL_arg1569z00_1931 = 
BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE); } } } 
{ /* Llib/error.scm 248 */

BGl_displayzd2tracezd2stackz00zz__errorz00(BgL_arg1569z00_1931, BgL_portz00_1919, 
BINT(((long)1))); } } 
return 
bgl_flush_output_port(BgL_portz00_1919);} } } } } } 

}



/* notify-&error/loc */
obj_t BGl_notifyzd2z62errorzf2locz42zz__errorz00(BgL_z62errorz62_bglt BgL_errz00_85, obj_t BgL_fnamez00_86, obj_t BgL_locz00_87)
{
{ /* Llib/error.scm 680 */
{ /* Llib/error.scm 681 */
bool_t BgL_test3526z00_6254;
if(
STRINGP(BgL_fnamez00_86))
{ /* Llib/error.scm 681 */
if(
INTEGERP(BgL_locz00_87))
{ /* Llib/error.scm 681 */
BgL_test3526z00_6254 = ((bool_t)0)
; }  else 
{ /* Llib/error.scm 681 */
BgL_test3526z00_6254 = ((bool_t)1)
; } }  else 
{ /* Llib/error.scm 681 */
BgL_test3526z00_6254 = ((bool_t)1)
; } 
if(BgL_test3526z00_6254)
{ /* Llib/error.scm 681 */
return 
BGl_notifyzd2z62errorzb0zz__errorz00(BgL_errz00_85);}  else 
{ /* Llib/error.scm 683 */
obj_t BgL_filez00_1942;
{ /* Llib/error.scm 684 */
obj_t BgL_arg1575z00_1946;
{ /* Llib/error.scm 684 */
obj_t BgL_list1576z00_1947;
{ /* Llib/error.scm 684 */
obj_t BgL_arg1577z00_1948;
{ /* Llib/error.scm 684 */
obj_t BgL_arg1578z00_1949;
BgL_arg1578z00_1949 = 
MAKE_YOUNG_PAIR(BNIL, BNIL); 
BgL_arg1577z00_1948 = 
MAKE_YOUNG_PAIR(BgL_locz00_87, BgL_arg1578z00_1949); } 
BgL_list1576z00_1947 = 
MAKE_YOUNG_PAIR(BgL_fnamez00_86, BgL_arg1577z00_1948); } 
BgL_arg1575z00_1946 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BGl_symbol3141z00zz__errorz00, BgL_list1576z00_1947); } 
BgL_filez00_1942 = 
BGl_locationzd2linezd2numz00zz__errorz00(BgL_arg1575z00_1946); } 
{ /* Llib/error.scm 684 */
obj_t BgL_lnumz00_1943;obj_t BgL_lpointz00_1944;obj_t BgL_lstringz00_1945;
{ /* Llib/error.scm 685 */
int BgL_tmpz00_6265;
BgL_tmpz00_6265 = 
(int)(((long)1)); 
BgL_lnumz00_1943 = 
BGL_MVALUES_VAL(BgL_tmpz00_6265); } 
{ /* Llib/error.scm 685 */
int BgL_tmpz00_6268;
BgL_tmpz00_6268 = 
(int)(((long)2)); 
BgL_lpointz00_1944 = 
BGL_MVALUES_VAL(BgL_tmpz00_6268); } 
{ /* Llib/error.scm 685 */
int BgL_tmpz00_6271;
BgL_tmpz00_6271 = 
(int)(((long)3)); 
BgL_lstringz00_1945 = 
BGL_MVALUES_VAL(BgL_tmpz00_6271); } 
if(
CBOOL(BgL_lnumz00_1943))
{ /* Llib/error.scm 685 */
return 
BGl_notifyzd2z62errorzf2locationzd2locz90zz__errorz00(BgL_errz00_85, BgL_fnamez00_86, BgL_lnumz00_1943, BgL_locz00_87, BgL_lstringz00_1945, BgL_lpointz00_1944);}  else 
{ /* Llib/error.scm 685 */
return 
BGl_notifyzd2z62errorzf2locationzd2nozd2locz42zz__errorz00(BgL_errz00_85);} } } } } 

}



/* open-for-error */
obj_t BGl_openzd2forzd2errorz00zz__errorz00(obj_t BgL_fnamez00_88)
{
{ /* Llib/error.scm 692 */
if(
fexists(
BSTRING_TO_STRING(BgL_fnamez00_88)))
{ /* Ieee/port.scm 440 */

return 
BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(BgL_fnamez00_88, BTRUE, 
BINT(((long)5000000)));}  else 
{ /* Llib/error.scm 696 */
bool_t BgL_test3531z00_6283;
{ /* Llib/error.scm 696 */
bool_t BgL_res2734z00_3728;
{ /* Llib/error.scm 696 */
long BgL_l1z00_3715;
BgL_l1z00_3715 = 
STRING_LENGTH(
((obj_t)BgL_fnamez00_88)); 
if(
(BgL_l1z00_3715==((long)5)))
{ /* Llib/error.scm 696 */
int BgL_arg2209z00_3718;
{ /* Llib/error.scm 696 */
char * BgL_auxz00_6291;char * BgL_tmpz00_6288;
BgL_auxz00_6291 = 
BSTRING_TO_STRING(BGl_string3177z00zz__errorz00); 
BgL_tmpz00_6288 = 
BSTRING_TO_STRING(
((obj_t)BgL_fnamez00_88)); 
BgL_arg2209z00_3718 = 
memcmp(BgL_tmpz00_6288, BgL_auxz00_6291, BgL_l1z00_3715); } 
BgL_res2734z00_3728 = 
(
(long)(BgL_arg2209z00_3718)==((long)0)); }  else 
{ /* Llib/error.scm 696 */
BgL_res2734z00_3728 = ((bool_t)0); } } 
BgL_test3531z00_6283 = BgL_res2734z00_3728; } 
if(BgL_test3531z00_6283)
{ /* Llib/error.scm 697 */
obj_t BgL_arg1582z00_1957;
{ /* Llib/error.scm 697 */
obj_t BgL_arg1583z00_1961;
{ /* Llib/error.scm 697 */
obj_t BgL_res2735z00_3730;
{ /* Llib/error.scm 697 */
obj_t BgL_tmpz00_6296;
BgL_tmpz00_6296 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2735z00_3730 = 
BGL_ENV_CURRENT_INPUT_PORT(BgL_tmpz00_6296); } 
BgL_arg1583z00_1961 = BgL_res2735z00_3730; } 
{ /* Llib/error.scm 697 */
obj_t BgL_res2736z00_3732;
BgL_res2736z00_3732 = 
BGL_INPUT_PORT_BUFFER(BgL_arg1583z00_1961); 
BgL_arg1582z00_1957 = BgL_res2736z00_3732; } } 
{ /* Ieee/port.scm 442 */
long BgL_endz00_1960;
BgL_endz00_1960 = 
STRING_LENGTH(BgL_arg1582z00_1957); 
{ /* Ieee/port.scm 442 */

return 
BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(BgL_arg1582z00_1957, 
BINT(((long)0)), 
BINT(BgL_endz00_1960));} } }  else 
{ /* Llib/error.scm 698 */
bool_t BgL_test3533z00_6304;
{ /* Llib/error.scm 698 */

BgL_test3533z00_6304 = 
BGl_stringzd2prefixzf3z21zz__r4_strings_6_7z00(BGl_string3178z00zz__errorz00, BgL_fnamez00_88, BFALSE, BFALSE, BFALSE, BFALSE); } 
if(BgL_test3533z00_6304)
{ /* Llib/error.scm 699 */
obj_t BgL_arg1587z00_1969;
{ /* Ieee/string.scm 190 */
long BgL_endz00_1975;
BgL_endz00_1975 = 
STRING_LENGTH(
((obj_t)BgL_fnamez00_88)); 
{ /* Ieee/string.scm 190 */

BgL_arg1587z00_1969 = 
BGl_substringz00zz__r4_strings_6_7z00(BgL_fnamez00_88, ((long)9), BgL_endz00_1975); } } 
{ /* Ieee/port.scm 442 */
long BgL_endz00_1972;
BgL_endz00_1972 = 
STRING_LENGTH(BgL_arg1587z00_1969); 
{ /* Ieee/port.scm 442 */

return 
BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(BgL_arg1587z00_1969, 
BINT(((long)0)), 
BINT(BgL_endz00_1972));} } }  else 
{ /* Llib/error.scm 698 */
return BFALSE;} } } } 

}



/* filename-for-error */
obj_t BGl_filenamezd2forzd2errorz00zz__errorz00(obj_t BgL_filez00_89, long BgL_sza7za7_90)
{
{ /* Llib/error.scm 706 */
if(
fexists(
BSTRING_TO_STRING(BgL_filez00_89)))
{ /* Llib/error.scm 708 */
return 
BGl_relativezd2filezd2namez00zz__errorz00(BgL_filez00_89);}  else 
{ /* Llib/error.scm 710 */
bool_t BgL_test3535z00_6317;
{ /* Llib/error.scm 710 */

BgL_test3535z00_6317 = 
BGl_stringzd2prefixzf3z21zz__r4_strings_6_7z00(BGl_string3178z00zz__errorz00, BgL_filez00_89, BFALSE, BFALSE, BFALSE, BFALSE); } 
if(BgL_test3535z00_6317)
{ /* Llib/error.scm 710 */
if(
(
STRING_LENGTH(
((obj_t)BgL_filez00_89))<=
(((long)9)+BgL_sza7za7_90)))
{ /* Ieee/string.scm 190 */
long BgL_endz00_2001;
BgL_endz00_2001 = 
STRING_LENGTH(
((obj_t)BgL_filez00_89)); 
{ /* Ieee/string.scm 190 */

return 
BGl_substringz00zz__r4_strings_6_7z00(BgL_filez00_89, ((long)9), BgL_endz00_2001);} }  else 
{ /* Llib/error.scm 713 */
obj_t BgL_arg1596z00_2002;
BgL_arg1596z00_2002 = 
BGl_substringz00zz__r4_strings_6_7z00(BgL_filez00_89, ((long)9), 
(BgL_sza7za7_90+((long)6))); 
{ /* Llib/error.scm 713 */
obj_t BgL_list1598z00_2003;
{ /* Llib/error.scm 713 */
obj_t BgL_arg1599z00_2004;
BgL_arg1599z00_2004 = 
MAKE_YOUNG_PAIR(BGl_string3179z00zz__errorz00, BNIL); 
BgL_list1598z00_2003 = 
MAKE_YOUNG_PAIR(BgL_arg1596z00_2002, BgL_arg1599z00_2004); } 
return 
BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list1598z00_2003);} } }  else 
{ /* Llib/error.scm 710 */
if(
(
STRING_LENGTH(
((obj_t)BgL_filez00_89))<=BgL_sza7za7_90))
{ /* Llib/error.scm 714 */
return BgL_filez00_89;}  else 
{ /* Llib/error.scm 717 */
obj_t BgL_arg1607z00_2010;
BgL_arg1607z00_2010 = 
BGl_substringz00zz__r4_strings_6_7z00(BgL_filez00_89, ((long)0), 
(BgL_sza7za7_90-((long)3))); 
{ /* Llib/error.scm 717 */
obj_t BgL_list1608z00_2011;
{ /* Llib/error.scm 717 */
obj_t BgL_arg1611z00_2012;
BgL_arg1611z00_2012 = 
MAKE_YOUNG_PAIR(BGl_string3179z00zz__errorz00, BNIL); 
BgL_list1608z00_2011 = 
MAKE_YOUNG_PAIR(BgL_arg1607z00_2010, BgL_arg1611z00_2012); } 
return 
BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list1608z00_2011);} } } } } 

}



/* location-line-num */
obj_t BGl_locationzd2linezd2numz00zz__errorz00(obj_t BgL_locz00_93)
{
{ /* Llib/error.scm 722 */
{ 
obj_t BgL_filez00_2129;obj_t BgL_linez00_2130;obj_t BgL_colz00_2131;obj_t BgL_filez00_2079;obj_t BgL_pointz00_2080;
{ 

if(
PAIRP(BgL_locz00_93))
{ /* Llib/error.scm 770 */
obj_t BgL_cdrzd2226zd2_2036;
BgL_cdrzd2226zd2_2036 = 
CDR(BgL_locz00_93); 
if(
(
CAR(BgL_locz00_93)==BGl_symbol3141z00zz__errorz00))
{ /* Llib/error.scm 770 */
if(
PAIRP(BgL_cdrzd2226zd2_2036))
{ /* Llib/error.scm 770 */
obj_t BgL_cdrzd2230zd2_2040;
BgL_cdrzd2230zd2_2040 = 
CDR(BgL_cdrzd2226zd2_2036); 
if(
PAIRP(BgL_cdrzd2230zd2_2040))
{ /* Llib/error.scm 770 */
if(
NULLP(
CDR(BgL_cdrzd2230zd2_2040)))
{ /* Llib/error.scm 770 */
BgL_filez00_2079 = 
CAR(BgL_cdrzd2226zd2_2036); 
BgL_pointz00_2080 = 
CAR(BgL_cdrzd2230zd2_2040); 
{ /* Llib/error.scm 725 */
bool_t BgL_test3543z00_6355;
if(
STRINGP(BgL_filez00_2079))
{ /* Llib/error.scm 725 */
BgL_test3543z00_6355 = 
BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BgL_pointz00_2080)
; }  else 
{ /* Llib/error.scm 725 */
BgL_test3543z00_6355 = ((bool_t)0)
; } 
if(BgL_test3543z00_6355)
{ /* Llib/error.scm 726 */
obj_t BgL_fnamez00_2084;
{ /* Llib/error.scm 726 */
bool_t BgL_test3545z00_6359;
{ /* Llib/error.scm 726 */
bool_t BgL_res2754z00_3775;
{ /* Llib/error.scm 726 */
obj_t BgL_string1z00_3760;
BgL_string1z00_3760 = 
string_to_bstring(OS_CLASS); 
{ /* Llib/error.scm 726 */
long BgL_l1z00_3762;
BgL_l1z00_3762 = 
STRING_LENGTH(BgL_string1z00_3760); 
if(
(BgL_l1z00_3762==((long)5)))
{ /* Llib/error.scm 726 */
int BgL_arg2209z00_3765;
{ /* Llib/error.scm 726 */
char * BgL_auxz00_6366;char * BgL_tmpz00_6364;
BgL_auxz00_6366 = 
BSTRING_TO_STRING(BGl_string3180z00zz__errorz00); 
BgL_tmpz00_6364 = 
BSTRING_TO_STRING(BgL_string1z00_3760); 
BgL_arg2209z00_3765 = 
memcmp(BgL_tmpz00_6364, BgL_auxz00_6366, BgL_l1z00_3762); } 
BgL_res2754z00_3775 = 
(
(long)(BgL_arg2209z00_3765)==((long)0)); }  else 
{ /* Llib/error.scm 726 */
BgL_res2754z00_3775 = ((bool_t)0); } } } 
BgL_test3545z00_6359 = BgL_res2754z00_3775; } 
if(BgL_test3545z00_6359)
{ /* Llib/error.scm 726 */
BgL_fnamez00_2084 = 
BGl_stringzd2replacezd2zz__r4_strings_6_7z00(
BGl_uncygdrivez00zz__errorz00(BgL_filez00_2079), 
(char)(((unsigned char)'/')), 
(char)(((unsigned char)'\\'))); }  else 
{ /* Llib/error.scm 726 */
BgL_fnamez00_2084 = BgL_filez00_2079; } } 
{ /* Llib/error.scm 726 */
obj_t BgL_portz00_2085;
BgL_portz00_2085 = 
BGl_openzd2forzd2errorz00zz__errorz00(BgL_fnamez00_2084); 
{ /* Llib/error.scm 729 */

if(
INPUT_PORTP(BgL_portz00_2085))
{ /* Llib/error.scm 731 */
obj_t BgL_exitd1099z00_2087;
BgL_exitd1099z00_2087 = 
BGL_EXITD_TOP_AS_OBJ(); 
{ /* Llib/error.scm 745 */
obj_t BgL_zc3z04anonymousza31694ze3z87_4933;
BgL_zc3z04anonymousza31694ze3z87_4933 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31694ze3ze5zz__errorz00, 
(int)(((long)0)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31694ze3z87_4933, 
(int)(((long)0)), BgL_portz00_2085); 
BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(BgL_exitd1099z00_2087, BgL_zc3z04anonymousza31694ze3z87_4933); 
{ /* Llib/error.scm 735 */
obj_t BgL_tmp1101z00_2089;
{ 
obj_t BgL_ostringz00_2091;long BgL_lnumz00_2092;long BgL_oposz00_2093;
BgL_ostringz00_2091 = BFALSE; 
BgL_lnumz00_2092 = ((long)1); 
BgL_oposz00_2093 = ((long)0); 
BgL_zc3z04anonymousza31662ze3z87_2094:
{ /* Llib/error.scm 735 */
obj_t BgL_lstringz00_2095;
BgL_lstringz00_2095 = 
BGl_readzd2linezd2zz__r4_input_6_10_2z00(BgL_portz00_2085); 
{ /* Llib/error.scm 736 */
bool_t BgL_test3548z00_6386;
{ /* Llib/error.scm 736 */
bool_t BgL_res2755z00_3777;
BgL_res2755z00_3777 = 
EOF_OBJECTP(BgL_lstringz00_2095); 
BgL_test3548z00_6386 = BgL_res2755z00_3777; } 
if(BgL_test3548z00_6386)
{ /* Llib/error.scm 737 */
long BgL_arg1664z00_2097;obj_t BgL_arg1665z00_2098;
BgL_arg1664z00_2097 = 
(((long)1)+
(
(long)CINT(BgL_pointz00_2080)-BgL_oposz00_2093)); 
if(
STRINGP(BgL_ostringz00_2091))
{ /* Llib/error.scm 739 */
obj_t BgL_list1674z00_2105;
{ /* Llib/error.scm 739 */
obj_t BgL_arg1675z00_2106;
BgL_arg1675z00_2106 = 
MAKE_YOUNG_PAIR(BGl_string3181z00zz__errorz00, BNIL); 
BgL_list1674z00_2105 = 
MAKE_YOUNG_PAIR(BgL_ostringz00_2091, BgL_arg1675z00_2106); } 
BgL_arg1665z00_2098 = 
BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list1674z00_2105); }  else 
{ /* Llib/error.scm 738 */
BgL_arg1665z00_2098 = BGl_string3181z00zz__errorz00; } 
{ /* Llib/error.scm 737 */
obj_t BgL_list1666z00_2099;
{ /* Llib/error.scm 737 */
obj_t BgL_arg1667z00_2100;
{ /* Llib/error.scm 737 */
obj_t BgL_arg1668z00_2101;
{ /* Llib/error.scm 737 */
obj_t BgL_arg1669z00_2102;
BgL_arg1669z00_2102 = 
MAKE_YOUNG_PAIR(BgL_arg1665z00_2098, BNIL); 
BgL_arg1668z00_2101 = 
MAKE_YOUNG_PAIR(
BINT(BgL_arg1664z00_2097), BgL_arg1669z00_2102); } 
BgL_arg1667z00_2100 = 
MAKE_YOUNG_PAIR(
BINT(BgL_lnumz00_2092), BgL_arg1668z00_2101); } 
BgL_list1666z00_2099 = 
MAKE_YOUNG_PAIR(BgL_fnamez00_2084, BgL_arg1667z00_2100); } 
BgL_tmp1101z00_2089 = 
BGl_valuesz00zz__r5_control_features_6_4z00(BgL_list1666z00_2099); } }  else 
{ /* Llib/error.scm 741 */
bool_t BgL_test3550z00_6403;
{ /* Llib/error.scm 741 */
long BgL_arg1693z00_2116;
{ /* Llib/error.scm 741 */
long BgL_res2759z00_3785;
{ /* Llib/error.scm 741 */
obj_t BgL_tmpz00_6404;
BgL_tmpz00_6404 = 
((obj_t)BgL_portz00_2085); 
BgL_res2759z00_3785 = 
INPUT_PORT_FILEPOS(BgL_tmpz00_6404); } 
BgL_arg1693z00_2116 = BgL_res2759z00_3785; } 
BgL_test3550z00_6403 = 
(BgL_arg1693z00_2116>
(long)CINT(BgL_pointz00_2080)); } 
if(BgL_test3550z00_6403)
{ /* Llib/error.scm 742 */
long BgL_arg1685z00_2109;
BgL_arg1685z00_2109 = 
(
(long)CINT(BgL_pointz00_2080)-BgL_oposz00_2093); 
{ /* Llib/error.scm 742 */
obj_t BgL_list1686z00_2110;
{ /* Llib/error.scm 742 */
obj_t BgL_arg1687z00_2111;
{ /* Llib/error.scm 742 */
obj_t BgL_arg1688z00_2112;
{ /* Llib/error.scm 742 */
obj_t BgL_arg1691z00_2113;
BgL_arg1691z00_2113 = 
MAKE_YOUNG_PAIR(BgL_lstringz00_2095, BNIL); 
BgL_arg1688z00_2112 = 
MAKE_YOUNG_PAIR(
BINT(BgL_arg1685z00_2109), BgL_arg1691z00_2113); } 
BgL_arg1687z00_2111 = 
MAKE_YOUNG_PAIR(
BINT(BgL_lnumz00_2092), BgL_arg1688z00_2112); } 
BgL_list1686z00_2110 = 
MAKE_YOUNG_PAIR(BgL_filez00_2079, BgL_arg1687z00_2111); } 
BgL_tmp1101z00_2089 = 
BGl_valuesz00zz__r5_control_features_6_4z00(BgL_list1686z00_2110); } }  else 
{ /* Llib/error.scm 743 */
long BgL_oposz00_2114;
{ /* Llib/error.scm 743 */
long BgL_res2762z00_3793;
{ /* Llib/error.scm 743 */
obj_t BgL_tmpz00_6418;
BgL_tmpz00_6418 = 
((obj_t)BgL_portz00_2085); 
BgL_res2762z00_3793 = 
INPUT_PORT_FILEPOS(BgL_tmpz00_6418); } 
BgL_oposz00_2114 = BgL_res2762z00_3793; } 
{ 
long BgL_oposz00_6424;long BgL_lnumz00_6422;obj_t BgL_ostringz00_6421;
BgL_ostringz00_6421 = BgL_lstringz00_2095; 
BgL_lnumz00_6422 = 
(BgL_lnumz00_2092+((long)1)); 
BgL_oposz00_6424 = BgL_oposz00_2114; 
BgL_oposz00_2093 = BgL_oposz00_6424; 
BgL_lnumz00_2092 = BgL_lnumz00_6422; 
BgL_ostringz00_2091 = BgL_ostringz00_6421; 
goto BgL_zc3z04anonymousza31662ze3z87_2094;} } } } } } 
BGl_exitdzd2popzd2protectz12z12zz__bexitz00(BgL_exitd1099z00_2087); 
bgl_close_input_port(BgL_portz00_2085); 
return BgL_tmp1101z00_2089;} } }  else 
{ /* Llib/error.scm 746 */
obj_t BgL_list1695z00_2120;
{ /* Llib/error.scm 746 */
obj_t BgL_arg1696z00_2121;
{ /* Llib/error.scm 746 */
obj_t BgL_arg1697z00_2122;
{ /* Llib/error.scm 746 */
obj_t BgL_arg1698z00_2123;
BgL_arg1698z00_2123 = 
MAKE_YOUNG_PAIR(BFALSE, BNIL); 
BgL_arg1697z00_2122 = 
MAKE_YOUNG_PAIR(BgL_pointz00_2080, BgL_arg1698z00_2123); } 
BgL_arg1696z00_2121 = 
MAKE_YOUNG_PAIR(BFALSE, BgL_arg1697z00_2122); } 
BgL_list1695z00_2120 = 
MAKE_YOUNG_PAIR(BgL_filez00_2079, BgL_arg1696z00_2121); } 
return 
BGl_valuesz00zz__r5_control_features_6_4z00(BgL_list1695z00_2120);} } } }  else 
{ /* Llib/error.scm 725 */
return BFALSE;} } }  else 
{ /* Llib/error.scm 770 */
BgL_tagzd2217zd2_2033:
{ /* Llib/error.scm 781 */
obj_t BgL_list1653z00_2075;
{ /* Llib/error.scm 781 */
obj_t BgL_arg1654z00_2076;
{ /* Llib/error.scm 781 */
obj_t BgL_arg1656z00_2077;
{ /* Llib/error.scm 781 */
obj_t BgL_arg1657z00_2078;
BgL_arg1657z00_2078 = 
MAKE_YOUNG_PAIR(BFALSE, BNIL); 
BgL_arg1656z00_2077 = 
MAKE_YOUNG_PAIR(BFALSE, BgL_arg1657z00_2078); } 
BgL_arg1654z00_2076 = 
MAKE_YOUNG_PAIR(BFALSE, BgL_arg1656z00_2077); } 
BgL_list1653z00_2075 = 
MAKE_YOUNG_PAIR(BFALSE, BgL_arg1654z00_2076); } 
return 
BGl_valuesz00zz__r5_control_features_6_4z00(BgL_list1653z00_2075);} } }  else 
{ /* Llib/error.scm 770 */
goto BgL_tagzd2217zd2_2033;} }  else 
{ /* Llib/error.scm 770 */
goto BgL_tagzd2217zd2_2033;} }  else 
{ /* Llib/error.scm 770 */
if(
(
CAR(BgL_locz00_93)==BGl_symbol3182z00zz__errorz00))
{ /* Llib/error.scm 770 */
if(
PAIRP(BgL_cdrzd2226zd2_2036))
{ /* Llib/error.scm 770 */
obj_t BgL_cdrzd2282zd2_2051;
BgL_cdrzd2282zd2_2051 = 
CDR(BgL_cdrzd2226zd2_2036); 
if(
PAIRP(BgL_cdrzd2282zd2_2051))
{ /* Llib/error.scm 770 */
obj_t BgL_cdrzd2287zd2_2053;
BgL_cdrzd2287zd2_2053 = 
CDR(BgL_cdrzd2282zd2_2051); 
if(
PAIRP(BgL_cdrzd2287zd2_2053))
{ /* Llib/error.scm 770 */
if(
NULLP(
CDR(BgL_cdrzd2287zd2_2053)))
{ /* Llib/error.scm 770 */
BgL_filez00_2129 = 
CAR(BgL_cdrzd2226zd2_2036); 
BgL_linez00_2130 = 
CAR(BgL_cdrzd2282zd2_2051); 
BgL_colz00_2131 = 
CAR(BgL_cdrzd2287zd2_2053); 
BgL_zc3z04anonymousza31703ze3z87_2132:
{ /* Llib/error.scm 749 */
bool_t BgL_test3556z00_6453;
if(
(
(long)CINT(BgL_linez00_2130)>=((long)0)))
{ /* Llib/error.scm 749 */
BgL_test3556z00_6453 = 
(
(long)CINT(BgL_colz00_2131)>=((long)0))
; }  else 
{ /* Llib/error.scm 749 */
BgL_test3556z00_6453 = ((bool_t)0)
; } 
if(BgL_test3556z00_6453)
{ /* Llib/error.scm 750 */
obj_t BgL_fnamez00_2135;
{ /* Llib/error.scm 750 */
bool_t BgL_test3558z00_6459;
{ /* Llib/error.scm 750 */
bool_t BgL_res2770z00_3816;
{ /* Llib/error.scm 750 */
obj_t BgL_string1z00_3801;
BgL_string1z00_3801 = 
string_to_bstring(OS_CLASS); 
{ /* Llib/error.scm 750 */
long BgL_l1z00_3803;
BgL_l1z00_3803 = 
STRING_LENGTH(BgL_string1z00_3801); 
if(
(BgL_l1z00_3803==((long)5)))
{ /* Llib/error.scm 750 */
int BgL_arg2209z00_3806;
{ /* Llib/error.scm 750 */
char * BgL_auxz00_6466;char * BgL_tmpz00_6464;
BgL_auxz00_6466 = 
BSTRING_TO_STRING(BGl_string3180z00zz__errorz00); 
BgL_tmpz00_6464 = 
BSTRING_TO_STRING(BgL_string1z00_3801); 
BgL_arg2209z00_3806 = 
memcmp(BgL_tmpz00_6464, BgL_auxz00_6466, BgL_l1z00_3803); } 
BgL_res2770z00_3816 = 
(
(long)(BgL_arg2209z00_3806)==((long)0)); }  else 
{ /* Llib/error.scm 750 */
BgL_res2770z00_3816 = ((bool_t)0); } } } 
BgL_test3558z00_6459 = BgL_res2770z00_3816; } 
if(BgL_test3558z00_6459)
{ /* Llib/error.scm 750 */
BgL_fnamez00_2135 = 
BGl_stringzd2replacezd2zz__r4_strings_6_7z00(
BGl_uncygdrivez00zz__errorz00(BgL_filez00_2129), 
(char)(((unsigned char)'/')), 
(char)(((unsigned char)'\\'))); }  else 
{ /* Llib/error.scm 750 */
BgL_fnamez00_2135 = BgL_filez00_2129; } } 
{ /* Llib/error.scm 750 */
obj_t BgL_portz00_2136;
BgL_portz00_2136 = 
BGl_openzd2forzd2errorz00zz__errorz00(BgL_fnamez00_2135); 
{ /* Llib/error.scm 753 */

if(
INPUT_PORTP(BgL_portz00_2136))
{ /* Llib/error.scm 755 */
obj_t BgL_exitd1102z00_2138;
BgL_exitd1102z00_2138 = 
BGL_EXITD_TOP_AS_OBJ(); 
{ /* Llib/error.scm 766 */
obj_t BgL_zc3z04anonymousza31727ze3z87_4932;
BgL_zc3z04anonymousza31727ze3z87_4932 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31727ze3ze5zz__errorz00, 
(int)(((long)0)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31727ze3z87_4932, 
(int)(((long)0)), BgL_portz00_2136); 
BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(BgL_exitd1102z00_2138, BgL_zc3z04anonymousza31727ze3z87_4932); 
{ /* Llib/error.scm 758 */
obj_t BgL_tmp1104z00_2140;
{ 
obj_t BgL_ostringz00_2142;obj_t BgL_lnumz00_2143;
BgL_ostringz00_2142 = BFALSE; 
BgL_lnumz00_2143 = BgL_linez00_2130; 
BgL_zc3z04anonymousza31707ze3z87_2144:
{ /* Llib/error.scm 758 */
obj_t BgL_lstringz00_2145;
BgL_lstringz00_2145 = 
BGl_readzd2linezd2zz__r4_input_6_10_2z00(BgL_portz00_2136); 
{ /* Llib/error.scm 759 */
bool_t BgL_test3561z00_6486;
{ /* Llib/error.scm 759 */
bool_t BgL_res2771z00_3818;
BgL_res2771z00_3818 = 
EOF_OBJECTP(BgL_lstringz00_2145); 
BgL_test3561z00_6486 = BgL_res2771z00_3818; } 
if(BgL_test3561z00_6486)
{ /* Llib/error.scm 760 */
long BgL_arg1709z00_2147;obj_t BgL_arg1710z00_2148;
BgL_arg1709z00_2147 = 
(
(long)CINT(BgL_colz00_2131)+((long)1)); 
{ /* Llib/error.scm 761 */
obj_t BgL_list1717z00_2153;
{ /* Llib/error.scm 761 */
obj_t BgL_arg1719z00_2154;
BgL_arg1719z00_2154 = 
MAKE_YOUNG_PAIR(BGl_string3181z00zz__errorz00, BNIL); 
BgL_list1717z00_2153 = 
MAKE_YOUNG_PAIR(BgL_ostringz00_2142, BgL_arg1719z00_2154); } 
BgL_arg1710z00_2148 = 
BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list1717z00_2153); } 
{ /* Llib/error.scm 760 */
obj_t BgL_list1711z00_2149;
{ /* Llib/error.scm 760 */
obj_t BgL_arg1712z00_2150;
{ /* Llib/error.scm 760 */
obj_t BgL_arg1713z00_2151;
{ /* Llib/error.scm 760 */
obj_t BgL_arg1716z00_2152;
BgL_arg1716z00_2152 = 
MAKE_YOUNG_PAIR(BgL_arg1710z00_2148, BNIL); 
BgL_arg1713z00_2151 = 
MAKE_YOUNG_PAIR(
BINT(BgL_arg1709z00_2147), BgL_arg1716z00_2152); } 
BgL_arg1712z00_2150 = 
MAKE_YOUNG_PAIR(BgL_linez00_2130, BgL_arg1713z00_2151); } 
BgL_list1711z00_2149 = 
MAKE_YOUNG_PAIR(BgL_filez00_2129, BgL_arg1712z00_2150); } 
BgL_tmp1104z00_2140 = 
BGl_valuesz00zz__r5_control_features_6_4z00(BgL_list1711z00_2149); } }  else 
{ /* Llib/error.scm 759 */
if(
(
(long)CINT(BgL_lnumz00_2143)==((long)0)))
{ /* Llib/error.scm 763 */
obj_t BgL_list1721z00_2156;
{ /* Llib/error.scm 763 */
obj_t BgL_arg1722z00_2157;
{ /* Llib/error.scm 763 */
obj_t BgL_arg1723z00_2158;
{ /* Llib/error.scm 763 */
obj_t BgL_arg1725z00_2159;
BgL_arg1725z00_2159 = 
MAKE_YOUNG_PAIR(BgL_lstringz00_2145, BNIL); 
BgL_arg1723z00_2158 = 
MAKE_YOUNG_PAIR(BgL_colz00_2131, BgL_arg1725z00_2159); } 
BgL_arg1722z00_2157 = 
MAKE_YOUNG_PAIR(BgL_linez00_2130, BgL_arg1723z00_2158); } 
BgL_list1721z00_2156 = 
MAKE_YOUNG_PAIR(BgL_filez00_2129, BgL_arg1722z00_2157); } 
BgL_tmp1104z00_2140 = 
BGl_valuesz00zz__r5_control_features_6_4z00(BgL_list1721z00_2156); }  else 
{ /* Llib/error.scm 764 */
long BgL_oposz00_2160;
{ /* Llib/error.scm 764 */
long BgL_res2774z00_3824;
{ /* Llib/error.scm 764 */
obj_t BgL_tmpz00_6507;
BgL_tmpz00_6507 = 
((obj_t)BgL_portz00_2136); 
BgL_res2774z00_3824 = 
INPUT_PORT_FILEPOS(BgL_tmpz00_6507); } 
BgL_oposz00_2160 = BgL_res2774z00_3824; } 
{ /* Llib/error.scm 765 */
long BgL_arg1726z00_2161;
BgL_arg1726z00_2161 = 
(
(long)CINT(BgL_lnumz00_2143)-((long)1)); 
{ 
obj_t BgL_lnumz00_6513;obj_t BgL_ostringz00_6512;
BgL_ostringz00_6512 = BgL_lstringz00_2145; 
BgL_lnumz00_6513 = 
BINT(BgL_arg1726z00_2161); 
BgL_lnumz00_2143 = BgL_lnumz00_6513; 
BgL_ostringz00_2142 = BgL_ostringz00_6512; 
goto BgL_zc3z04anonymousza31707ze3z87_2144;} } } } } } } 
BGl_exitdzd2popzd2protectz12z12zz__bexitz00(BgL_exitd1102z00_2138); 
bgl_close_input_port(BgL_portz00_2136); 
return BgL_tmp1104z00_2140;} } }  else 
{ /* Llib/error.scm 767 */
obj_t BgL_list1728z00_2165;
{ /* Llib/error.scm 767 */
obj_t BgL_arg1729z00_2166;
{ /* Llib/error.scm 767 */
obj_t BgL_arg1730z00_2167;
{ /* Llib/error.scm 767 */
obj_t BgL_arg1731z00_2168;
BgL_arg1731z00_2168 = 
MAKE_YOUNG_PAIR(BFALSE, BNIL); 
BgL_arg1730z00_2167 = 
MAKE_YOUNG_PAIR(BgL_colz00_2131, BgL_arg1731z00_2168); } 
BgL_arg1729z00_2166 = 
MAKE_YOUNG_PAIR(BgL_linez00_2130, BgL_arg1730z00_2167); } 
BgL_list1728z00_2165 = 
MAKE_YOUNG_PAIR(BgL_filez00_2129, BgL_arg1729z00_2166); } 
return 
BGl_valuesz00zz__r5_control_features_6_4z00(BgL_list1728z00_2165);} } } }  else 
{ /* Llib/error.scm 768 */
obj_t BgL_list1737z00_2173;
{ /* Llib/error.scm 768 */
obj_t BgL_arg1738z00_2174;
{ /* Llib/error.scm 768 */
obj_t BgL_arg1739z00_2175;
{ /* Llib/error.scm 768 */
obj_t BgL_arg1740z00_2176;
BgL_arg1740z00_2176 = 
MAKE_YOUNG_PAIR(BFALSE, BNIL); 
BgL_arg1739z00_2175 = 
MAKE_YOUNG_PAIR(BgL_colz00_2131, BgL_arg1740z00_2176); } 
BgL_arg1738z00_2174 = 
MAKE_YOUNG_PAIR(BgL_linez00_2130, BgL_arg1739z00_2175); } 
BgL_list1737z00_2173 = 
MAKE_YOUNG_PAIR(BgL_filez00_2129, BgL_arg1738z00_2174); } 
return 
BGl_valuesz00zz__r5_control_features_6_4z00(BgL_list1737z00_2173);} } }  else 
{ /* Llib/error.scm 770 */
goto BgL_tagzd2217zd2_2033;} }  else 
{ /* Llib/error.scm 770 */
goto BgL_tagzd2217zd2_2033;} }  else 
{ /* Llib/error.scm 770 */
goto BgL_tagzd2217zd2_2033;} }  else 
{ /* Llib/error.scm 770 */
goto BgL_tagzd2217zd2_2033;} }  else 
{ /* Llib/error.scm 770 */
obj_t BgL_cdrzd2314zd2_2061;
BgL_cdrzd2314zd2_2061 = 
CDR(BgL_locz00_93); 
if(
(
CAR(BgL_locz00_93)==BGl_symbol3184z00zz__errorz00))
{ /* Llib/error.scm 770 */
if(
PAIRP(BgL_cdrzd2314zd2_2061))
{ /* Llib/error.scm 770 */
obj_t BgL_cdrzd2318zd2_2065;
BgL_cdrzd2318zd2_2065 = 
CDR(BgL_cdrzd2314zd2_2061); 
if(
PAIRP(BgL_cdrzd2318zd2_2065))
{ /* Llib/error.scm 770 */
if(
NULLP(
CDR(BgL_cdrzd2318zd2_2065)))
{ 
obj_t BgL_colz00_6546;obj_t BgL_linez00_6544;obj_t BgL_filez00_6542;
BgL_filez00_6542 = 
CAR(BgL_cdrzd2314zd2_2061); 
BgL_linez00_6544 = 
CAR(BgL_cdrzd2318zd2_2065); 
BgL_colz00_6546 = 
BINT(((long)0)); 
BgL_colz00_2131 = BgL_colz00_6546; 
BgL_linez00_2130 = BgL_linez00_6544; 
BgL_filez00_2129 = BgL_filez00_6542; 
goto BgL_zc3z04anonymousza31703ze3z87_2132;}  else 
{ /* Llib/error.scm 770 */
goto BgL_tagzd2217zd2_2033;} }  else 
{ /* Llib/error.scm 770 */
goto BgL_tagzd2217zd2_2033;} }  else 
{ /* Llib/error.scm 770 */
goto BgL_tagzd2217zd2_2033;} }  else 
{ /* Llib/error.scm 770 */
goto BgL_tagzd2217zd2_2033;} } } }  else 
{ /* Llib/error.scm 770 */
goto BgL_tagzd2217zd2_2033;} } } } 

}



/* &<@anonymous:1727> */
obj_t BGl_z62zc3z04anonymousza31727ze3ze5zz__errorz00(obj_t BgL_envz00_4934)
{
{ /* Llib/error.scm 755 */
{ /* Llib/error.scm 766 */
obj_t BgL_portz00_4935;
BgL_portz00_4935 = 
PROCEDURE_REF(BgL_envz00_4934, 
(int)(((long)0))); 
return 
bgl_close_input_port(
((obj_t)BgL_portz00_4935));} } 

}



/* &<@anonymous:1694> */
obj_t BGl_z62zc3z04anonymousza31694ze3ze5zz__errorz00(obj_t BgL_envz00_4936)
{
{ /* Llib/error.scm 731 */
{ /* Llib/error.scm 745 */
obj_t BgL_portz00_4937;
BgL_portz00_4937 = 
PROCEDURE_REF(BgL_envz00_4936, 
(int)(((long)0))); 
return 
bgl_close_input_port(
((obj_t)BgL_portz00_4937));} } 

}



/* exception-location? */
bool_t BGl_exceptionzd2locationzf3z21zz__errorz00(obj_t BgL_ez00_94)
{
{ /* Llib/error.scm 786 */
{ /* Llib/error.scm 788 */
bool_t BgL_test3567z00_6556;
{ /* Llib/error.scm 788 */
obj_t BgL_tmpz00_6557;
BgL_tmpz00_6557 = 
(((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_ez00_94)))->BgL_fnamez00); 
BgL_test3567z00_6556 = 
STRINGP(BgL_tmpz00_6557); } 
if(BgL_test3567z00_6556)
{ /* Llib/error.scm 788 */
return 
BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(
(((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_ez00_94)))->BgL_locationz00));}  else 
{ /* Llib/error.scm 788 */
return ((bool_t)0);} } } 

}



/* error-notify */
BGL_EXPORTED_DEF obj_t BGl_errorzd2notifyzd2zz__errorz00(obj_t BgL_ez00_95)
{
{ /* Llib/error.scm 793 */
if(
BGl_isazf3zf3zz__objectz00(BgL_ez00_95, BGl_z62errorz62zz__objectz00))
{ /* Llib/error.scm 795 */
if(
BGl_exceptionzd2locationzf3z21zz__errorz00(BgL_ez00_95))
{ /* Llib/error.scm 798 */
obj_t BgL_arg1745z00_2187;obj_t BgL_arg1746z00_2188;
BgL_arg1745z00_2187 = 
(((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)
((BgL_z62errorz62_bglt)BgL_ez00_95))))->BgL_fnamez00); 
BgL_arg1746z00_2188 = 
(((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)
((BgL_z62errorz62_bglt)BgL_ez00_95))))->BgL_locationz00); 
return 
BGl_notifyzd2z62errorzf2locz42zz__errorz00(
((BgL_z62errorz62_bglt)BgL_ez00_95), BgL_arg1745z00_2187, BgL_arg1746z00_2188);}  else 
{ /* Llib/error.scm 796 */
return 
BGl_notifyzd2z62errorzb0zz__errorz00(
((BgL_z62errorz62_bglt)BgL_ez00_95));} }  else 
{ /* Llib/error.scm 795 */
if(
BGl_isazf3zf3zz__objectz00(BgL_ez00_95, BGl_z62conditionz62zz__objectz00))
{ /* Llib/error.scm 801 */
obj_t BgL_arg1748z00_2190;
{ /* Llib/error.scm 801 */
obj_t BgL_res2791z00_3867;
{ /* Llib/error.scm 801 */
obj_t BgL_tmpz00_6580;
BgL_tmpz00_6580 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2791z00_3867 = 
BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_6580); } 
BgL_arg1748z00_2190 = BgL_res2791z00_3867; } 
{ /* Llib/error.scm 801 */
obj_t BgL_list1749z00_2191;
{ /* Llib/error.scm 801 */
obj_t BgL_arg1750z00_2192;
BgL_arg1750z00_2192 = 
MAKE_YOUNG_PAIR(BgL_ez00_95, BNIL); 
BgL_list1749z00_2191 = 
MAKE_YOUNG_PAIR(BGl_string3186z00zz__errorz00, BgL_arg1750z00_2192); } 
return 
BGl_fprintz00zz__r4_output_6_10_3z00(BgL_arg1748z00_2190, BgL_list1749z00_2191);} }  else 
{ /* Llib/error.scm 800 */
return BFALSE;} } } 

}



/* &error-notify */
obj_t BGl_z62errorzd2notifyzb0zz__errorz00(obj_t BgL_envz00_4938, obj_t BgL_ez00_4939)
{
{ /* Llib/error.scm 793 */
return 
BGl_errorzd2notifyzd2zz__errorz00(BgL_ez00_4939);} 

}



/* error-notify/location */
BGL_EXPORTED_DEF obj_t BGl_errorzd2notifyzf2locationz20zz__errorz00(obj_t BgL_ez00_96, obj_t BgL_fnamez00_97, int BgL_locationz00_98)
{
{ /* Llib/error.scm 806 */
if(
BGl_isazf3zf3zz__objectz00(BgL_ez00_96, BGl_z62errorz62zz__objectz00))
{ /* Llib/error.scm 807 */
return 
BGl_notifyzd2z62errorzf2locz42zz__errorz00(
((BgL_z62errorz62_bglt)BgL_ez00_96), BgL_fnamez00_97, 
BINT(BgL_locationz00_98));}  else 
{ /* Llib/error.scm 807 */
return BFALSE;} } 

}



/* &error-notify/location */
obj_t BGl_z62errorzd2notifyzf2locationz42zz__errorz00(obj_t BgL_envz00_4940, obj_t BgL_ez00_4941, obj_t BgL_fnamez00_4942, obj_t BgL_locationz00_4943)
{
{ /* Llib/error.scm 806 */
{ /* Llib/error.scm 807 */
int BgL_auxz00_6599;obj_t BgL_auxz00_6592;
{ /* Llib/error.scm 807 */
obj_t BgL_tmpz00_6600;
if(
INTEGERP(BgL_locationz00_4943))
{ /* Llib/error.scm 807 */
BgL_tmpz00_6600 = BgL_locationz00_4943
; }  else 
{ 
obj_t BgL_auxz00_6603;
BgL_auxz00_6603 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3137z00zz__errorz00, 
BINT(((long)31954)), BGl_string3187z00zz__errorz00, BGl_string3139z00zz__errorz00, BgL_locationz00_4943); 
FAILURE(BgL_auxz00_6603,BFALSE,BFALSE);} 
BgL_auxz00_6599 = 
CINT(BgL_tmpz00_6600); } 
if(
STRINGP(BgL_fnamez00_4942))
{ /* Llib/error.scm 807 */
BgL_auxz00_6592 = BgL_fnamez00_4942
; }  else 
{ 
obj_t BgL_auxz00_6595;
BgL_auxz00_6595 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3137z00zz__errorz00, 
BINT(((long)31954)), BGl_string3187z00zz__errorz00, BGl_string3159z00zz__errorz00, BgL_fnamez00_4942); 
FAILURE(BgL_auxz00_6595,BFALSE,BFALSE);} 
return 
BGl_errorzd2notifyzf2locationz20zz__errorz00(BgL_ez00_4941, BgL_auxz00_6592, BgL_auxz00_6599);} } 

}



/* warning-notify */
BGL_EXPORTED_DEF obj_t BGl_warningzd2notifyzd2zz__errorz00(obj_t BgL_ez00_99)
{
{ /* Llib/error.scm 813 */
{ 
obj_t BgL_ez00_2216;
{ /* Llib/error.scm 827 */
bool_t BgL_test3574z00_6609;
{ /* Llib/error.scm 827 */
int BgL_arg1768z00_2215;
BgL_arg1768z00_2215 = 
BGl_bigloozd2warningzd2zz__paramz00(); 
BgL_test3574z00_6609 = 
(
(long)(BgL_arg1768z00_2215)>((long)0)); } 
if(BgL_test3574z00_6609)
{ /* Llib/error.scm 827 */
if(
BGl_exceptionzd2locationzf3z21zz__errorz00(BgL_ez00_99))
{ /* Llib/error.scm 831 */
bool_t BgL_test3576z00_6615;
{ /* Llib/error.scm 831 */
obj_t BgL_arg1763z00_2207;
BgL_arg1763z00_2207 = 
(((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)
((BgL_z62warningz62_bglt)BgL_ez00_99))))->BgL_fnamez00); 
{ /* Llib/error.scm 831 */
bool_t BgL_res2805z00_3906;
{ /* Llib/error.scm 831 */
long BgL_l1z00_3893;
BgL_l1z00_3893 = 
STRING_LENGTH(
((obj_t)BgL_arg1763z00_2207)); 
if(
(BgL_l1z00_3893==((long)8)))
{ /* Llib/error.scm 831 */
int BgL_arg2209z00_3896;
{ /* Llib/error.scm 831 */
char * BgL_auxz00_6626;char * BgL_tmpz00_6623;
BgL_auxz00_6626 = 
BSTRING_TO_STRING(BGl_string3190z00zz__errorz00); 
BgL_tmpz00_6623 = 
BSTRING_TO_STRING(
((obj_t)BgL_arg1763z00_2207)); 
BgL_arg2209z00_3896 = 
memcmp(BgL_tmpz00_6623, BgL_auxz00_6626, BgL_l1z00_3893); } 
BgL_res2805z00_3906 = 
(
(long)(BgL_arg2209z00_3896)==((long)0)); }  else 
{ /* Llib/error.scm 831 */
BgL_res2805z00_3906 = ((bool_t)0); } } 
BgL_test3576z00_6615 = BgL_res2805z00_3906; } } 
if(BgL_test3576z00_6615)
{ /* Llib/error.scm 831 */
BgL_ez00_2216 = BgL_ez00_99; 
BgL_zc3z04anonymousza31769ze3z87_2217:
{ /* Llib/error.scm 815 */
obj_t BgL_arg1770z00_2218;
{ /* Llib/error.scm 815 */
obj_t BgL_res2792z00_3870;
{ /* Llib/error.scm 815 */
obj_t BgL_tmpz00_6631;
BgL_tmpz00_6631 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2792z00_3870 = 
BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_6631); } 
BgL_arg1770z00_2218 = BgL_res2792z00_3870; } 
bgl_flush_output_port(BgL_arg1770z00_2218); } 
{ /* Llib/error.scm 816 */
obj_t BgL_arg1771z00_2219;
{ /* Llib/error.scm 816 */
obj_t BgL_res2793z00_3873;
{ /* Llib/error.scm 816 */
obj_t BgL_tmpz00_6635;
BgL_tmpz00_6635 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2793z00_3873 = 
BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_6635); } 
BgL_arg1771z00_2219 = BgL_res2793z00_3873; } 
{ /* Llib/error.scm 816 */
obj_t BgL_list1772z00_2220;
BgL_list1772z00_2220 = 
MAKE_YOUNG_PAIR(BgL_arg1771z00_2219, BNIL); 
BGl_displayz00zz__r4_output_6_10_3z00(BGl_string3188z00zz__errorz00, BgL_list1772z00_2220); } } 
if(
NULLP(
(((BgL_z62warningz62_bglt)COBJECT(
((BgL_z62warningz62_bglt)BgL_ez00_2216)))->BgL_argsz00)))
{ /* Llib/error.scm 818 */BFALSE; }  else 
{ /* Llib/error.scm 818 */
{ /* Llib/error.scm 820 */
obj_t BgL_arg1775z00_2224;obj_t BgL_arg1776z00_2225;
{ /* Llib/error.scm 820 */
obj_t BgL_pairz00_3875;
BgL_pairz00_3875 = 
(((BgL_z62warningz62_bglt)COBJECT(
((BgL_z62warningz62_bglt)BgL_ez00_2216)))->BgL_argsz00); 
BgL_arg1775z00_2224 = 
CAR(BgL_pairz00_3875); } 
{ /* Llib/error.scm 820 */
obj_t BgL_res2795z00_3877;
{ /* Llib/error.scm 820 */
obj_t BgL_tmpz00_6647;
BgL_tmpz00_6647 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2795z00_3877 = 
BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_6647); } 
BgL_arg1776z00_2225 = BgL_res2795z00_3877; } 
BGl_displayzd2circlezd2zz__pp_circlez00(BgL_arg1775z00_2224, BgL_arg1776z00_2225); } 
{ /* Llib/error.scm 821 */
obj_t BgL_arg1778z00_2227;
{ /* Llib/error.scm 821 */
obj_t BgL_res2796z00_3879;
{ /* Llib/error.scm 821 */
obj_t BgL_tmpz00_6651;
BgL_tmpz00_6651 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2796z00_3879 = 
BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_6651); } 
BgL_arg1778z00_2227 = BgL_res2796z00_3879; } 
{ /* Llib/error.scm 821 */
obj_t BgL_list1779z00_2228;
BgL_list1779z00_2228 = 
MAKE_YOUNG_PAIR(BgL_arg1778z00_2227, BNIL); 
BGl_newlinez00zz__r4_output_6_10_3z00(BgL_list1779z00_2228); } } 
{ /* Llib/error.scm 822 */
obj_t BgL_arg1781z00_2230;
{ /* Llib/error.scm 824 */
obj_t BgL_pairz00_3880;
BgL_pairz00_3880 = 
(((BgL_z62warningz62_bglt)COBJECT(
((BgL_z62warningz62_bglt)BgL_ez00_2216)))->BgL_argsz00); 
BgL_arg1781z00_2230 = 
CDR(BgL_pairz00_3880); } 
{ /* Llib/error.scm 822 */
obj_t BgL_list1782z00_2231;
BgL_list1782z00_2231 = 
MAKE_YOUNG_PAIR(BgL_arg1781z00_2230, BNIL); 
BGl_forzd2eachzd2zz__r4_control_features_6_9z00(BGl_proc3189z00zz__errorz00, BgL_list1782z00_2231); } } } 
{ /* Llib/error.scm 825 */
obj_t BgL_arg1788z00_2238;
{ /* Llib/error.scm 825 */
obj_t BgL_res2798z00_3885;
{ /* Llib/error.scm 825 */
obj_t BgL_tmpz00_6661;
BgL_tmpz00_6661 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2798z00_3885 = 
BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_6661); } 
BgL_arg1788z00_2238 = BgL_res2798z00_3885; } 
{ /* Llib/error.scm 825 */
obj_t BgL_list1789z00_2239;
BgL_list1789z00_2239 = 
MAKE_YOUNG_PAIR(BgL_arg1788z00_2238, BNIL); 
BGl_newlinez00zz__r4_output_6_10_3z00(BgL_list1789z00_2239); } } 
{ /* Llib/error.scm 826 */
obj_t BgL_arg1790z00_2240;
{ /* Llib/error.scm 826 */
obj_t BgL_res2799z00_3887;
{ /* Llib/error.scm 826 */
obj_t BgL_tmpz00_6666;
BgL_tmpz00_6666 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2799z00_3887 = 
BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_6666); } 
BgL_arg1790z00_2240 = BgL_res2799z00_3887; } 
bgl_flush_output_port(BgL_arg1790z00_2240); } }  else 
{ /* Llib/error.scm 833 */
bool_t BgL_test3579z00_6670;
{ /* Llib/error.scm 833 */
obj_t BgL_arg1762z00_2206;
BgL_arg1762z00_2206 = 
(((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)
((BgL_z62warningz62_bglt)BgL_ez00_99))))->BgL_fnamez00); 
{ /* Llib/error.scm 833 */
bool_t BgL_res2810z00_3922;
{ /* Llib/error.scm 833 */
long BgL_l1z00_3909;
BgL_l1z00_3909 = 
STRING_LENGTH(
((obj_t)BgL_arg1762z00_2206)); 
if(
(BgL_l1z00_3909==((long)7)))
{ /* Llib/error.scm 833 */
int BgL_arg2209z00_3912;
{ /* Llib/error.scm 833 */
char * BgL_auxz00_6681;char * BgL_tmpz00_6678;
BgL_auxz00_6681 = 
BSTRING_TO_STRING(BGl_string3191z00zz__errorz00); 
BgL_tmpz00_6678 = 
BSTRING_TO_STRING(
((obj_t)BgL_arg1762z00_2206)); 
BgL_arg2209z00_3912 = 
memcmp(BgL_tmpz00_6678, BgL_auxz00_6681, BgL_l1z00_3909); } 
BgL_res2810z00_3922 = 
(
(long)(BgL_arg2209z00_3912)==((long)0)); }  else 
{ /* Llib/error.scm 833 */
BgL_res2810z00_3922 = ((bool_t)0); } } 
BgL_test3579z00_6670 = BgL_res2810z00_3922; } } 
if(BgL_test3579z00_6670)
{ 
obj_t BgL_ez00_6686;
BgL_ez00_6686 = BgL_ez00_99; 
BgL_ez00_2216 = BgL_ez00_6686; 
goto BgL_zc3z04anonymousza31769ze3z87_2217;}  else 
{ /* Llib/error.scm 836 */
obj_t BgL_arg1759z00_2203;obj_t BgL_arg1760z00_2204;obj_t BgL_arg1761z00_2205;
BgL_arg1759z00_2203 = 
(((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)
((BgL_z62warningz62_bglt)BgL_ez00_99))))->BgL_fnamez00); 
BgL_arg1760z00_2204 = 
(((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)
((BgL_z62warningz62_bglt)BgL_ez00_99))))->BgL_locationz00); 
BgL_arg1761z00_2205 = 
(((BgL_z62warningz62_bglt)COBJECT(
((BgL_z62warningz62_bglt)BgL_ez00_99)))->BgL_argsz00); 
BGl_warningzf2locationzd2filez20zz__errorz00(BgL_arg1759z00_2203, BgL_arg1760z00_2204, BgL_arg1761z00_2205); } } }  else 
{ 
obj_t BgL_ez00_6696;
BgL_ez00_6696 = BgL_ez00_99; 
BgL_ez00_2216 = BgL_ez00_6696; 
goto BgL_zc3z04anonymousza31769ze3z87_2217;} 
if(
CBOOL(
(((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)
((BgL_z62warningz62_bglt)BgL_ez00_99))))->BgL_stackz00)))
{ /* Llib/error.scm 841 */
obj_t BgL_arg1765z00_2210;obj_t BgL_arg1766z00_2211;
BgL_arg1765z00_2210 = 
(((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)
((BgL_z62warningz62_bglt)BgL_ez00_99))))->BgL_stackz00); 
{ /* Llib/error.scm 841 */
obj_t BgL_res2811z00_3924;
{ /* Llib/error.scm 841 */
obj_t BgL_tmpz00_6705;
BgL_tmpz00_6705 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2811z00_3924 = 
BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_6705); } 
BgL_arg1766z00_2211 = BgL_res2811z00_3924; } 
{ /* Llib/error.scm 248 */

BGl_displayzd2tracezd2stackz00zz__errorz00(BgL_arg1765z00_2210, BgL_arg1766z00_2211, 
BINT(((long)1))); } }  else 
{ /* Llib/error.scm 840 */BFALSE; } }  else 
{ /* Llib/error.scm 827 */BFALSE; } } 
return BFALSE;} } 

}



/* &warning-notify */
obj_t BGl_z62warningzd2notifyzb0zz__errorz00(obj_t BgL_envz00_4945, obj_t BgL_ez00_4946)
{
{ /* Llib/error.scm 813 */
return 
BGl_warningzd2notifyzd2zz__errorz00(BgL_ez00_4946);} 

}



/* &<@anonymous:1783> */
obj_t BGl_z62zc3z04anonymousza31783ze3ze5zz__errorz00(obj_t BgL_envz00_4947, obj_t BgL_az00_4948)
{
{ /* Llib/error.scm 822 */
{ /* Llib/error.scm 823 */
obj_t BgL_arg1784z00_5036;
{ /* Llib/error.scm 823 */
obj_t BgL_res2797z00_5037;
{ /* Llib/error.scm 823 */
obj_t BgL_tmpz00_6711;
BgL_tmpz00_6711 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2797z00_5037 = 
BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_6711); } 
BgL_arg1784z00_5036 = BgL_res2797z00_5037; } 
return 
BGl_displayzd2circlezd2zz__pp_circlez00(BgL_az00_4948, BgL_arg1784z00_5036);} } 

}



/* warning-notify/location */
BGL_EXPORTED_DEF obj_t BGl_warningzd2notifyzf2locationz20zz__errorz00(obj_t BgL_ez00_100, obj_t BgL_fnamez00_101, int BgL_locationz00_102)
{
{ /* Llib/error.scm 847 */
{ /* Llib/error.scm 848 */
bool_t BgL_test3582z00_6715;
{ /* Llib/error.scm 848 */
int BgL_arg1795z00_3926;
BgL_arg1795z00_3926 = 
BGl_bigloozd2warningzd2zz__paramz00(); 
BgL_test3582z00_6715 = 
(
(long)(BgL_arg1795z00_3926)>((long)0)); } 
if(BgL_test3582z00_6715)
{ /* Llib/error.scm 850 */
obj_t BgL_arg1794z00_3928;
BgL_arg1794z00_3928 = 
(((BgL_z62warningz62_bglt)COBJECT(
((BgL_z62warningz62_bglt)BgL_ez00_100)))->BgL_argsz00); 
return 
BGl_warningzf2locationzd2filez20zz__errorz00(BgL_fnamez00_101, 
BINT(BgL_locationz00_102), BgL_arg1794z00_3928);}  else 
{ /* Llib/error.scm 848 */
return BFALSE;} } } 

}



/* &warning-notify/location */
obj_t BGl_z62warningzd2notifyzf2locationz42zz__errorz00(obj_t BgL_envz00_4949, obj_t BgL_ez00_4950, obj_t BgL_fnamez00_4951, obj_t BgL_locationz00_4952)
{
{ /* Llib/error.scm 847 */
{ /* Llib/error.scm 848 */
int BgL_auxz00_6730;obj_t BgL_auxz00_6723;
{ /* Llib/error.scm 848 */
obj_t BgL_tmpz00_6731;
if(
INTEGERP(BgL_locationz00_4952))
{ /* Llib/error.scm 848 */
BgL_tmpz00_6731 = BgL_locationz00_4952
; }  else 
{ 
obj_t BgL_auxz00_6734;
BgL_auxz00_6734 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3137z00zz__errorz00, 
BINT(((long)33473)), BGl_string3192z00zz__errorz00, BGl_string3139z00zz__errorz00, BgL_locationz00_4952); 
FAILURE(BgL_auxz00_6734,BFALSE,BFALSE);} 
BgL_auxz00_6730 = 
CINT(BgL_tmpz00_6731); } 
if(
STRINGP(BgL_fnamez00_4951))
{ /* Llib/error.scm 848 */
BgL_auxz00_6723 = BgL_fnamez00_4951
; }  else 
{ 
obj_t BgL_auxz00_6726;
BgL_auxz00_6726 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3137z00zz__errorz00, 
BINT(((long)33473)), BGl_string3192z00zz__errorz00, BGl_string3159z00zz__errorz00, BgL_fnamez00_4951); 
FAILURE(BgL_auxz00_6726,BFALSE,BFALSE);} 
return 
BGl_warningzd2notifyzf2locationz20zz__errorz00(BgL_ez00_4950, BgL_auxz00_6723, BgL_auxz00_6730);} } 

}



/* warning/location-file */
obj_t BGl_warningzf2locationzd2filez20zz__errorz00(obj_t BgL_fnamez00_103, obj_t BgL_locz00_104, obj_t BgL_argsz00_105)
{
{ /* Llib/error.scm 855 */
{ /* Llib/error.scm 857 */
obj_t BgL_portz00_2247;
BgL_portz00_2247 = 
BGl_openzd2forzd2errorz00zz__errorz00(BgL_fnamez00_103); 
if(
INPUT_PORTP(BgL_portz00_2247))
{ /* Llib/error.scm 863 */
obj_t BgL_filez00_2249;
{ /* Llib/error.scm 864 */
obj_t BgL_arg1798z00_2254;
{ /* Llib/error.scm 864 */
obj_t BgL_list1799z00_2255;
{ /* Llib/error.scm 864 */
obj_t BgL_arg1800z00_2256;
{ /* Llib/error.scm 864 */
obj_t BgL_arg1801z00_2257;
BgL_arg1801z00_2257 = 
MAKE_YOUNG_PAIR(BNIL, BNIL); 
BgL_arg1800z00_2256 = 
MAKE_YOUNG_PAIR(BgL_locz00_104, BgL_arg1801z00_2257); } 
BgL_list1799z00_2255 = 
MAKE_YOUNG_PAIR(BgL_fnamez00_103, BgL_arg1800z00_2256); } 
BgL_arg1798z00_2254 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BGl_symbol3141z00zz__errorz00, BgL_list1799z00_2255); } 
BgL_filez00_2249 = 
BGl_locationzd2linezd2numz00zz__errorz00(BgL_arg1798z00_2254); } 
{ /* Llib/error.scm 864 */
obj_t BgL_lnumz00_2250;obj_t BgL_lpointz00_2251;obj_t BgL_lstringz00_2252;
{ /* Llib/error.scm 865 */
int BgL_tmpz00_6748;
BgL_tmpz00_6748 = 
(int)(((long)1)); 
BgL_lnumz00_2250 = 
BGL_MVALUES_VAL(BgL_tmpz00_6748); } 
{ /* Llib/error.scm 865 */
int BgL_tmpz00_6751;
BgL_tmpz00_6751 = 
(int)(((long)2)); 
BgL_lpointz00_2251 = 
BGL_MVALUES_VAL(BgL_tmpz00_6751); } 
{ /* Llib/error.scm 865 */
int BgL_tmpz00_6754;
BgL_tmpz00_6754 = 
(int)(((long)3)); 
BgL_lstringz00_2252 = 
BGL_MVALUES_VAL(BgL_tmpz00_6754); } 
if(
CBOOL(BgL_lnumz00_2250))
{ /* Llib/error.scm 865 */
return 
BGl_dozd2warnzf2locationz20zz__errorz00(BgL_fnamez00_103, BgL_lnumz00_2250, BgL_locz00_104, BgL_lstringz00_2252, BgL_lpointz00_2251, BgL_argsz00_105);}  else 
{ /* Llib/error.scm 865 */
return 
BGl_warningz00zz__errorz00(BgL_argsz00_105);} } }  else 
{ /* Llib/error.scm 858 */
return 
BGl_warningz00zz__errorz00(BgL_argsz00_105);} } } 

}



/* do-warn/location */
obj_t BGl_dozd2warnzf2locationz20zz__errorz00(obj_t BgL_fnamez00_106, obj_t BgL_linez00_107, obj_t BgL_charz00_108, obj_t BgL_stringz00_109, obj_t BgL_markerz00_110, obj_t BgL_argsz00_111)
{
{ /* Llib/error.scm 872 */
{ /* Llib/error.scm 873 */
obj_t BgL_arg1803z00_2259;
{ /* Llib/error.scm 873 */
obj_t BgL_res2813z00_3932;
{ /* Llib/error.scm 873 */
obj_t BgL_tmpz00_6762;
BgL_tmpz00_6762 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2813z00_3932 = 
BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_6762); } 
BgL_arg1803z00_2259 = BgL_res2813z00_3932; } 
bgl_flush_output_port(BgL_arg1803z00_2259); } 
{ /* Llib/error.scm 874 */
obj_t BgL_arg1805z00_2260;
{ /* Llib/error.scm 874 */
obj_t BgL_res2814z00_3935;
{ /* Llib/error.scm 874 */
obj_t BgL_tmpz00_6766;
BgL_tmpz00_6766 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2814z00_3935 = 
BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_6766); } 
BgL_arg1805z00_2260 = BgL_res2814z00_3935; } 
{ /* Llib/error.scm 874 */
obj_t BgL_list1806z00_2261;
BgL_list1806z00_2261 = 
MAKE_YOUNG_PAIR(BgL_arg1805z00_2260, BNIL); 
BGl_newlinez00zz__r4_output_6_10_3z00(BgL_list1806z00_2261); } } 
{ /* Llib/error.scm 875 */
obj_t BgL_spacezd2stringzd2_2262;
if(
(
(long)CINT(BgL_markerz00_110)>((long)0)))
{ /* Llib/error.scm 875 */
BgL_spacezd2stringzd2_2262 = 
make_string(
(long)CINT(BgL_markerz00_110), ((unsigned char)' ')); }  else 
{ /* Llib/error.scm 875 */
BgL_spacezd2stringzd2_2262 = BGl_string3176z00zz__errorz00; } 
{ /* Llib/error.scm 875 */
long BgL_lz00_2263;
BgL_lz00_2263 = 
STRING_LENGTH(
((obj_t)BgL_stringz00_109)); 
{ /* Llib/error.scm 878 */
obj_t BgL_nzd2markerzd2_2264;
if(
(
(long)CINT(BgL_markerz00_110)>=BgL_lz00_2263))
{ /* Llib/error.scm 879 */
BgL_nzd2markerzd2_2264 = 
BINT(BgL_lz00_2263); }  else 
{ /* Llib/error.scm 879 */
BgL_nzd2markerzd2_2264 = BgL_markerz00_110; } 
{ /* Llib/error.scm 879 */

BGl_fixzd2tabulationz12zc0zz__errorz00(BgL_nzd2markerzd2_2264, BgL_stringz00_109, BgL_spacezd2stringzd2_2262); 
BGl_printzd2cursorzd2zz__errorz00(BgL_fnamez00_106, BgL_linez00_107, BgL_charz00_108, BgL_stringz00_109, BgL_spacezd2stringzd2_2262); 
{ /* Llib/error.scm 885 */
obj_t BgL_arg1807z00_2265;
{ /* Llib/error.scm 885 */
obj_t BgL_res2819z00_3946;
{ /* Llib/error.scm 885 */
obj_t BgL_tmpz00_6784;
BgL_tmpz00_6784 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2819z00_3946 = 
BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_6784); } 
BgL_arg1807z00_2265 = BgL_res2819z00_3946; } 
{ /* Llib/error.scm 885 */
obj_t BgL_list1808z00_2266;
BgL_list1808z00_2266 = 
MAKE_YOUNG_PAIR(BgL_arg1807z00_2265, BNIL); 
BGl_displayz00zz__r4_output_6_10_3z00(BGl_string3188z00zz__errorz00, BgL_list1808z00_2266); } } 
if(
NULLP(BgL_argsz00_111))
{ /* Llib/error.scm 886 */BFALSE; }  else 
{ /* Llib/error.scm 887 */
obj_t BgL_portz00_2268;
{ /* Llib/error.scm 887 */
obj_t BgL_res2821z00_3949;
{ /* Llib/error.scm 887 */
obj_t BgL_tmpz00_6791;
BgL_tmpz00_6791 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2821z00_3949 = 
BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_6791); } 
BgL_portz00_2268 = BgL_res2821z00_3949; } 
{ /* Llib/error.scm 888 */
obj_t BgL_arg1810z00_2269;
BgL_arg1810z00_2269 = 
CAR(
((obj_t)BgL_argsz00_111)); 
BGl_displayzd2circlezd2zz__pp_circlez00(BgL_arg1810z00_2269, BgL_portz00_2268); } 
{ /* Llib/error.scm 889 */
obj_t BgL_list1811z00_2270;
BgL_list1811z00_2270 = 
MAKE_YOUNG_PAIR(BgL_portz00_2268, BNIL); 
BGl_newlinez00zz__r4_output_6_10_3z00(BgL_list1811z00_2270); } 
{ /* Llib/error.scm 890 */
obj_t BgL_arg1813z00_2272;
BgL_arg1813z00_2272 = 
CDR(
((obj_t)BgL_argsz00_111)); 
{ /* Llib/error.scm 890 */
obj_t BgL_list1814z00_2273;
BgL_list1814z00_2273 = 
MAKE_YOUNG_PAIR(BgL_arg1813z00_2272, BNIL); 
BGl_forzd2eachzd2zz__r4_control_features_6_9z00(BGl_proc3193z00zz__errorz00, BgL_list1814z00_2273); } } } 
{ /* Llib/error.scm 893 */
obj_t BgL_arg1817z00_2278;
{ /* Llib/error.scm 893 */
obj_t BgL_res2823z00_3956;
{ /* Llib/error.scm 893 */
obj_t BgL_tmpz00_6803;
BgL_tmpz00_6803 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2823z00_3956 = 
BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_6803); } 
BgL_arg1817z00_2278 = BgL_res2823z00_3956; } 
{ /* Llib/error.scm 893 */
obj_t BgL_list1818z00_2279;
BgL_list1818z00_2279 = 
MAKE_YOUNG_PAIR(BgL_arg1817z00_2278, BNIL); 
BGl_newlinez00zz__r4_output_6_10_3z00(BgL_list1818z00_2279); } } 
{ /* Llib/error.scm 894 */
obj_t BgL_arg1819z00_2280;
{ /* Llib/error.scm 894 */
obj_t BgL_res2824z00_3958;
{ /* Llib/error.scm 894 */
obj_t BgL_tmpz00_6808;
BgL_tmpz00_6808 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2824z00_3958 = 
BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_6808); } 
BgL_arg1819z00_2280 = BgL_res2824z00_3958; } 
return 
bgl_flush_output_port(BgL_arg1819z00_2280);} } } } } } 

}



/* &<@anonymous:1815> */
obj_t BGl_z62zc3z04anonymousza31815ze3ze5zz__errorz00(obj_t BgL_envz00_4954, obj_t BgL_az00_4955)
{
{ /* Llib/error.scm 890 */
{ /* Llib/error.scm 891 */
obj_t BgL_arg1816z00_5038;
{ /* Llib/error.scm 891 */
obj_t BgL_res2822z00_5039;
{ /* Llib/error.scm 891 */
obj_t BgL_tmpz00_6812;
BgL_tmpz00_6812 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2822z00_5039 = 
BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_6812); } 
BgL_arg1816z00_5038 = BgL_res2822z00_5039; } 
return 
BGl_displayzd2circlezd2zz__pp_circlez00(BgL_az00_4955, BgL_arg1816z00_5038);} } 

}



/* _display-trace-stack */
obj_t BGl__displayzd2tracezd2stackz00zz__errorz00(obj_t BgL_env1186z00_117, obj_t BgL_opt1185z00_116)
{
{ /* Llib/error.scm 907 */
{ /* Llib/error.scm 907 */
obj_t BgL_g1187z00_2285;obj_t BgL_g1188z00_2286;
BgL_g1187z00_2285 = 
VECTOR_REF(BgL_opt1185z00_116,((long)0)); 
BgL_g1188z00_2286 = 
VECTOR_REF(BgL_opt1185z00_116,((long)1)); 
switch( 
VECTOR_LENGTH(BgL_opt1185z00_116)) { case ((long)2) : 

{ /* Llib/error.scm 907 */

{ /* Llib/error.scm 907 */
obj_t BgL_auxz00_6818;
if(
OUTPUT_PORTP(BgL_g1188z00_2286))
{ /* Llib/error.scm 907 */
BgL_auxz00_6818 = BgL_g1188z00_2286
; }  else 
{ 
obj_t BgL_auxz00_6821;
BgL_auxz00_6821 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3137z00zz__errorz00, 
BINT(((long)36115)), BGl_string3194z00zz__errorz00, BGl_string3195z00zz__errorz00, BgL_g1188z00_2286); 
FAILURE(BgL_auxz00_6821,BFALSE,BFALSE);} 
return 
BGl_displayzd2tracezd2stackz00zz__errorz00(BgL_g1187z00_2285, BgL_auxz00_6818, 
BINT(((long)1)));} } break;case ((long)3) : 

{ /* Llib/error.scm 907 */
obj_t BgL_offsetz00_2291;
BgL_offsetz00_2291 = 
VECTOR_REF(BgL_opt1185z00_116,((long)2)); 
{ /* Llib/error.scm 907 */

{ /* Llib/error.scm 907 */
obj_t BgL_auxz00_6828;
if(
OUTPUT_PORTP(BgL_g1188z00_2286))
{ /* Llib/error.scm 907 */
BgL_auxz00_6828 = BgL_g1188z00_2286
; }  else 
{ 
obj_t BgL_auxz00_6831;
BgL_auxz00_6831 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3137z00zz__errorz00, 
BINT(((long)36115)), BGl_string3194z00zz__errorz00, BGl_string3195z00zz__errorz00, BgL_g1188z00_2286); 
FAILURE(BgL_auxz00_6831,BFALSE,BFALSE);} 
return 
BGl_displayzd2tracezd2stackz00zz__errorz00(BgL_g1187z00_2285, BgL_auxz00_6828, BgL_offsetz00_2291);} } } break;
default: 
return BUNSPEC;} } } 

}



/* display-trace-stack */
BGL_EXPORTED_DEF obj_t BGl_displayzd2tracezd2stackz00zz__errorz00(obj_t BgL_stackz00_113, obj_t BgL_portz00_114, obj_t BgL_offsetz00_115)
{
{ /* Llib/error.scm 907 */
if(
PAIRP(BgL_stackz00_113))
{ /* Llib/error.scm 984 */
obj_t BgL_g1114z00_2295;obj_t BgL_g1115z00_2296;
BgL_g1114z00_2295 = 
CDR(BgL_stackz00_113); 
BgL_g1115z00_2296 = 
CAR(BgL_stackz00_113); 
{ 
obj_t BgL_iz00_2298;obj_t BgL_stkz00_2299;obj_t BgL_hdsz00_2300;long BgL_hdnz00_2301;
BgL_iz00_2298 = BgL_offsetz00_115; 
BgL_stkz00_2299 = BgL_g1114z00_2295; 
BgL_hdsz00_2300 = BgL_g1115z00_2296; 
BgL_hdnz00_2301 = ((long)1); 
BgL_zc3z04anonymousza31825ze3z87_2302:
if(
NULLP(BgL_stkz00_2299))
{ /* Llib/error.scm 989 */
BGl_displayzd2tracezd2stackzd2frameze70z35zz__errorz00(BgL_portz00_114, BgL_hdsz00_2300, BgL_iz00_2298, BgL_hdnz00_2301); 
return 
bgl_flush_output_port(BgL_portz00_114);}  else 
{ /* Llib/error.scm 989 */
if(
PAIRP(BgL_stkz00_2299))
{ /* Llib/error.scm 992 */
if(
(
CAR(BgL_stkz00_2299)==BgL_hdsz00_2300))
{ /* Llib/error.scm 997 */
long BgL_arg1830z00_2307;obj_t BgL_arg1831z00_2308;long BgL_arg1832z00_2309;
BgL_arg1830z00_2307 = 
(
(long)CINT(BgL_iz00_2298)+((long)1)); 
BgL_arg1831z00_2308 = 
CDR(BgL_stkz00_2299); 
BgL_arg1832z00_2309 = 
(BgL_hdnz00_2301+((long)1)); 
{ 
long BgL_hdnz00_6858;obj_t BgL_stkz00_6857;obj_t BgL_iz00_6855;
BgL_iz00_6855 = 
BINT(BgL_arg1830z00_2307); 
BgL_stkz00_6857 = BgL_arg1831z00_2308; 
BgL_hdnz00_6858 = BgL_arg1832z00_2309; 
BgL_hdnz00_2301 = BgL_hdnz00_6858; 
BgL_stkz00_2299 = BgL_stkz00_6857; 
BgL_iz00_2298 = BgL_iz00_6855; 
goto BgL_zc3z04anonymousza31825ze3z87_2302;} }  else 
{ 
long BgL_hdnz00_6865;obj_t BgL_hdsz00_6863;obj_t BgL_stkz00_6861;obj_t BgL_iz00_6859;
BgL_iz00_6859 = 
BGl_displayzd2tracezd2stackzd2frameze70z35zz__errorz00(BgL_portz00_114, BgL_hdsz00_2300, BgL_iz00_2298, BgL_hdnz00_2301); 
BgL_stkz00_6861 = 
CDR(BgL_stkz00_2299); 
BgL_hdsz00_6863 = 
CAR(BgL_stkz00_2299); 
BgL_hdnz00_6865 = ((long)1); 
BgL_hdnz00_2301 = BgL_hdnz00_6865; 
BgL_hdsz00_2300 = BgL_hdsz00_6863; 
BgL_stkz00_2299 = BgL_stkz00_6861; 
BgL_iz00_2298 = BgL_iz00_6859; 
goto BgL_zc3z04anonymousza31825ze3z87_2302;} }  else 
{ /* Llib/error.scm 992 */
{ /* Llib/error.scm 993 */
obj_t BgL_arg1838z00_2314;
{ /* Llib/error.scm 993 */
obj_t BgL_res2857z00_4034;
{ /* Llib/error.scm 993 */
obj_t BgL_tmpz00_6866;
BgL_tmpz00_6866 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2857z00_4034 = 
BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_6866); } 
BgL_arg1838z00_2314 = BgL_res2857z00_4034; } 
{ /* Llib/error.scm 993 */
obj_t BgL_list1839z00_2315;
BgL_list1839z00_2315 = 
MAKE_YOUNG_PAIR(BgL_stackz00_113, BNIL); 
BGl_fprintfz00zz__r4_output_6_10_3z00(BgL_arg1838z00_2314, BGl_string3196z00zz__errorz00, BgL_list1839z00_2315); } } 
return 
bgl_flush_output_port(BgL_portz00_114);} } } }  else 
{ /* Llib/error.scm 983 */
return BFALSE;} } 

}



/* display-trace-stack-frame~0 */
obj_t BGl_displayzd2tracezd2stackzd2frameze70z35zz__errorz00(obj_t BgL_portz00_4987, obj_t BgL_framez00_2322, obj_t BgL_levelz00_2323, long BgL_numz00_2324)
{
{ /* Llib/error.scm 981 */
{ 
obj_t BgL_namez00_2326;obj_t BgL_locz00_2327;obj_t BgL_restz00_2328;obj_t BgL_namez00_2330;
if(
PAIRP(BgL_framez00_2322))
{ /* Llib/error.scm 981 */
obj_t BgL_cdrzd2347zd2_2336;
BgL_cdrzd2347zd2_2336 = 
CDR(BgL_framez00_2322); 
if(
PAIRP(BgL_cdrzd2347zd2_2336))
{ /* Llib/error.scm 981 */
obj_t BgL_cdrzd2352zd2_2338;
BgL_cdrzd2352zd2_2338 = 
CDR(BgL_cdrzd2347zd2_2336); 
{ /* Llib/error.scm 981 */
bool_t BgL_test3598z00_6878;
if(
BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_cdrzd2352zd2_2338))
{ /* Llib/error.scm 902 */
obj_t BgL_list1822z00_4009;
BgL_list1822z00_4009 = 
MAKE_YOUNG_PAIR(BgL_cdrzd2352zd2_2338, BNIL); 
BgL_test3598z00_6878 = 
CBOOL(
BGl_everyz00zz__r4_pairs_and_lists_6_3z00(BGl_pairzf3zd2envz21zz__r4_pairs_and_lists_6_3z00, BgL_list1822z00_4009)); }  else 
{ /* Llib/error.scm 902 */
BgL_test3598z00_6878 = ((bool_t)0)
; } 
if(BgL_test3598z00_6878)
{ /* Llib/error.scm 981 */
obj_t BgL_arg1847z00_2340;obj_t BgL_arg1848z00_2341;
BgL_arg1847z00_2340 = 
CAR(BgL_framez00_2322); 
BgL_arg1848z00_2341 = 
CAR(BgL_cdrzd2347zd2_2336); 
{ /* Llib/error.scm 981 */
long BgL_tmpz00_6886;
BgL_namez00_2326 = BgL_arg1847z00_2340; 
BgL_locz00_2327 = BgL_arg1848z00_2341; 
BgL_restz00_2328 = BgL_cdrzd2352zd2_2338; 
{ /* Llib/error.scm 921 */
obj_t BgL_marginz00_2349;obj_t BgL_fmtz00_2350;
BgL_marginz00_2349 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BGl_symbol3202z00zz__errorz00, BgL_restz00_2328); 
BgL_fmtz00_2350 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BGl_symbol3204z00zz__errorz00, BgL_restz00_2328); 
{ /* Llib/error.scm 924 */
bool_t BgL_test3600z00_6889;
if(
PAIRP(BgL_marginz00_2349))
{ /* Llib/error.scm 924 */
obj_t BgL_tmpz00_6892;
BgL_tmpz00_6892 = 
CDR(BgL_marginz00_2349); 
BgL_test3600z00_6889 = 
CHARP(BgL_tmpz00_6892); }  else 
{ /* Llib/error.scm 924 */
BgL_test3600z00_6889 = ((bool_t)0)
; } 
if(BgL_test3600z00_6889)
{ /* Llib/error.scm 925 */
obj_t BgL_arg1861z00_2354;
BgL_arg1861z00_2354 = 
CDR(BgL_marginz00_2349); 
{ /* Llib/error.scm 925 */
obj_t BgL_list1862z00_2355;
BgL_list1862z00_2355 = 
MAKE_YOUNG_PAIR(BgL_portz00_4987, BNIL); 
BGl_displayz00zz__r4_output_6_10_3z00(BgL_arg1861z00_2354, BgL_list1862z00_2355); } }  else 
{ /* Llib/error.scm 926 */
obj_t BgL_list1863z00_2356;
BgL_list1863z00_2356 = 
MAKE_YOUNG_PAIR(BgL_portz00_4987, BNIL); 
BGl_displayz00zz__r4_output_6_10_3z00(BGl_string3206z00zz__errorz00, BgL_list1863z00_2356); } } 
if(
(
(long)CINT(BgL_levelz00_2323)<((long)10)))
{ /* Llib/error.scm 928 */
obj_t BgL_list1867z00_2360;
BgL_list1867z00_2360 = 
MAKE_YOUNG_PAIR(BgL_portz00_4987, BNIL); 
BGl_displayz00zz__r4_output_6_10_3z00(BGl_string3199z00zz__errorz00, BgL_list1867z00_2360); }  else 
{ /* Llib/error.scm 928 */
if(
(
(long)CINT(BgL_levelz00_2323)<((long)100)))
{ /* Llib/error.scm 929 */
obj_t BgL_list1869z00_2362;
BgL_list1869z00_2362 = 
MAKE_YOUNG_PAIR(BgL_portz00_4987, BNIL); 
BGl_displayz00zz__r4_output_6_10_3z00(BGl_string3200z00zz__errorz00, BgL_list1869z00_2362); }  else 
{ /* Llib/error.scm 929 */
if(
(
(long)CINT(BgL_levelz00_2323)<((long)1000)))
{ /* Llib/error.scm 930 */
obj_t BgL_list1871z00_2364;
BgL_list1871z00_2364 = 
MAKE_YOUNG_PAIR(BgL_portz00_4987, BNIL); 
BGl_displayz00zz__r4_output_6_10_3z00(BGl_string3206z00zz__errorz00, BgL_list1871z00_2364); }  else 
{ /* Llib/error.scm 930 */BFALSE; } } } 
{ /* Llib/error.scm 932 */
obj_t BgL_list1872z00_2365;
BgL_list1872z00_2365 = 
MAKE_YOUNG_PAIR(BgL_portz00_4987, BNIL); 
BGl_displayz00zz__r4_output_6_10_3z00(BgL_levelz00_2323, BgL_list1872z00_2365); } 
{ /* Llib/error.scm 933 */
obj_t BgL_list1873z00_2366;
BgL_list1873z00_2366 = 
MAKE_YOUNG_PAIR(BgL_portz00_4987, BNIL); 
BGl_displayz00zz__r4_output_6_10_3z00(BGl_string3201z00zz__errorz00, BgL_list1873z00_2366); } 
{ /* Llib/error.scm 935 */
bool_t BgL_test3605z00_6919;
if(
PAIRP(BgL_fmtz00_2350))
{ /* Llib/error.scm 935 */
obj_t BgL_tmpz00_6922;
BgL_tmpz00_6922 = 
CDR(BgL_fmtz00_2350); 
BgL_test3605z00_6919 = 
STRINGP(BgL_tmpz00_6922); }  else 
{ /* Llib/error.scm 935 */
BgL_test3605z00_6919 = ((bool_t)0)
; } 
if(BgL_test3605z00_6919)
{ /* Llib/error.scm 936 */
obj_t BgL_arg1878z00_2370;
{ /* Llib/error.scm 936 */
obj_t BgL_arg1881z00_2372;
BgL_arg1881z00_2372 = 
CDR(BgL_fmtz00_2350); 
{ /* Llib/error.scm 936 */
obj_t BgL_list1882z00_2373;
BgL_list1882z00_2373 = 
MAKE_YOUNG_PAIR(BgL_namez00_2326, BNIL); 
BgL_arg1878z00_2370 = 
BGl_formatz00zz__r4_output_6_10_3z00(BgL_arg1881z00_2372, BgL_list1882z00_2373); } } 
{ /* Llib/error.scm 936 */
obj_t BgL_list1879z00_2371;
BgL_list1879z00_2371 = 
MAKE_YOUNG_PAIR(BgL_portz00_4987, BNIL); 
BGl_displayz00zz__r4_output_6_10_3z00(BgL_arg1878z00_2370, BgL_list1879z00_2371); } }  else 
{ /* Llib/error.scm 937 */
obj_t BgL_list1883z00_2374;
BgL_list1883z00_2374 = 
MAKE_YOUNG_PAIR(BgL_portz00_4987, BNIL); 
BGl_displayz00zz__r4_output_6_10_3z00(BgL_namez00_2326, BgL_list1883z00_2374); } } 
if(
(BgL_numz00_2324>((long)1)))
{ /* Llib/error.scm 939 */
{ /* Llib/error.scm 940 */
obj_t BgL_list1886z00_2378;
BgL_list1886z00_2378 = 
MAKE_YOUNG_PAIR(BgL_portz00_4987, BNIL); 
BGl_displayz00zz__r4_output_6_10_3z00(BGl_string3207z00zz__errorz00, BgL_list1886z00_2378); } 
{ /* Llib/error.scm 941 */
obj_t BgL_list1887z00_2379;
BgL_list1887z00_2379 = 
MAKE_YOUNG_PAIR(BgL_portz00_4987, BNIL); 
BGl_displayz00zz__r4_output_6_10_3z00(
BINT(BgL_numz00_2324), BgL_list1887z00_2379); } 
{ /* Llib/error.scm 942 */
obj_t BgL_list1888z00_2380;
BgL_list1888z00_2380 = 
MAKE_YOUNG_PAIR(BgL_portz00_4987, BNIL); 
BGl_displayz00zz__r4_output_6_10_3z00(BGl_string3208z00zz__errorz00, BgL_list1888z00_2380); } }  else 
{ /* Llib/error.scm 939 */
if(
CBOOL(BgL_locz00_2327))
{ /* Llib/error.scm 943 */
{ /* Llib/error.scm 944 */
obj_t BgL_list1889z00_2381;
BgL_list1889z00_2381 = 
MAKE_YOUNG_PAIR(BgL_portz00_4987, BNIL); 
BGl_displayz00zz__r4_output_6_10_3z00(BGl_string3209z00zz__errorz00, BgL_list1889z00_2381); } 
{ /* Llib/error.scm 945 */
obj_t BgL_filez00_2382;
BgL_filez00_2382 = 
BGl_locationzd2linezd2numz00zz__errorz00(BgL_locz00_2327); 
{ /* Llib/error.scm 946 */
obj_t BgL_lnumz00_2383;obj_t BgL_lpointz00_2384;obj_t BgL_lstringz00_2385;
{ /* Llib/error.scm 949 */
int BgL_tmpz00_6946;
BgL_tmpz00_6946 = 
(int)(((long)1)); 
BgL_lnumz00_2383 = 
BGL_MVALUES_VAL(BgL_tmpz00_6946); } 
{ /* Llib/error.scm 949 */
int BgL_tmpz00_6949;
BgL_tmpz00_6949 = 
(int)(((long)2)); 
BgL_lpointz00_2384 = 
BGL_MVALUES_VAL(BgL_tmpz00_6949); } 
{ /* Llib/error.scm 949 */
int BgL_tmpz00_6952;
BgL_tmpz00_6952 = 
(int)(((long)3)); 
BgL_lstringz00_2385 = 
BGL_MVALUES_VAL(BgL_tmpz00_6952); } 
if(
CBOOL(BgL_filez00_2382))
{ /* Llib/error.scm 949 */
obj_t BgL_arg1891z00_2386;
if(
(BgL_numz00_2324==((long)1)))
{ /* Llib/error.scm 911 */
BgL_arg1891z00_2386 = 
BGl_filenamezd2forzd2errorz00zz__errorz00(BgL_filez00_2382, ((long)12)); }  else 
{ /* Llib/error.scm 911 */
if(
fexists(
BSTRING_TO_STRING(BgL_filez00_2382)))
{ /* Llib/error.scm 913 */
BgL_arg1891z00_2386 = BgL_filez00_2382; }  else 
{ /* Llib/error.scm 913 */
BgL_arg1891z00_2386 = BGl_string3176z00zz__errorz00; } } 
{ /* Llib/error.scm 949 */
obj_t BgL_list1892z00_2387;
BgL_list1892z00_2387 = 
MAKE_YOUNG_PAIR(BgL_portz00_4987, BNIL); 
BGl_displayz00zz__r4_output_6_10_3z00(BgL_arg1891z00_2386, BgL_list1892z00_2387); } }  else 
{ /* Llib/error.scm 948 */BFALSE; } 
if(
CBOOL(BgL_lnumz00_2383))
{ /* Llib/error.scm 952 */
{ /* Llib/error.scm 953 */
obj_t BgL_list1893z00_2388;
BgL_list1893z00_2388 = 
MAKE_YOUNG_PAIR(BgL_portz00_4987, BNIL); 
BGl_displayz00zz__r4_output_6_10_3z00(BGl_string3210z00zz__errorz00, BgL_list1893z00_2388); } 
{ /* Llib/error.scm 954 */
obj_t BgL_list1894z00_2389;
BgL_list1894z00_2389 = 
MAKE_YOUNG_PAIR(BgL_portz00_4987, BNIL); 
BGl_displayz00zz__r4_output_6_10_3z00(BgL_lnumz00_2383, BgL_list1894z00_2389); } }  else 
{ /* Llib/error.scm 952 */
if(
CBOOL(BgL_lpointz00_2384))
{ /* Llib/error.scm 955 */
{ /* Llib/error.scm 956 */
obj_t BgL_list1895z00_2390;
BgL_list1895z00_2390 = 
MAKE_YOUNG_PAIR(BgL_portz00_4987, BNIL); 
BGl_displayz00zz__r4_output_6_10_3z00(BGl_string3211z00zz__errorz00, BgL_list1895z00_2390); } 
{ /* Llib/error.scm 957 */
obj_t BgL_list1896z00_2391;
BgL_list1896z00_2391 = 
MAKE_YOUNG_PAIR(BgL_portz00_4987, BNIL); 
BGl_displayz00zz__r4_output_6_10_3z00(BgL_lpointz00_2384, BgL_list1896z00_2391); } }  else 
{ /* Llib/error.scm 955 */BFALSE; } } } } }  else 
{ /* Llib/error.scm 943 */BFALSE; } } 
{ /* Llib/error.scm 958 */
obj_t BgL_list1897z00_2392;
BgL_list1897z00_2392 = 
MAKE_YOUNG_PAIR(BgL_portz00_4987, BNIL); 
BGl_newlinez00zz__r4_output_6_10_3z00(BgL_list1897z00_2392); } } 
BgL_tmpz00_6886 = 
(
(long)CINT(BgL_levelz00_2323)+((long)1)); 
return 
BINT(BgL_tmpz00_6886);} }  else 
{ /* Llib/error.scm 981 */
long BgL_tmpz00_6982;
BgL_tagzd2338zd2_2333:
{ /* Llib/error.scm 978 */
obj_t BgL_list1913z00_2409;
BgL_list1913z00_2409 = 
MAKE_YOUNG_PAIR(BgL_portz00_4987, BNIL); 
BGl_displayz00zz__r4_output_6_10_3z00(BGl_string3197z00zz__errorz00, BgL_list1913z00_2409); } 
{ /* Llib/error.scm 979 */
obj_t BgL_list1914z00_2410;
BgL_list1914z00_2410 = 
MAKE_YOUNG_PAIR(BgL_portz00_4987, BNIL); 
BGl_displayz00zz__r4_output_6_10_3z00(BgL_framez00_2322, BgL_list1914z00_2410); } 
{ /* Llib/error.scm 980 */
obj_t BgL_list1915z00_2411;
BgL_list1915z00_2411 = 
MAKE_YOUNG_PAIR(BgL_portz00_4987, BNIL); 
BGl_newlinez00zz__r4_output_6_10_3z00(BgL_list1915z00_2411); } 
BgL_tmpz00_6982 = 
(
(long)CINT(BgL_levelz00_2323)+((long)1)); 
return 
BINT(BgL_tmpz00_6982);} } }  else 
{ /* Llib/error.scm 981 */
if(
NULLP(BgL_cdrzd2347zd2_2336))
{ /* Llib/error.scm 981 */
obj_t BgL_arg1852z00_2345;
BgL_arg1852z00_2345 = 
CAR(BgL_framez00_2322); 
{ /* Llib/error.scm 981 */
long BgL_tmpz00_6995;
BgL_namez00_2330 = BgL_arg1852z00_2345; 
if(
(
(long)CINT(BgL_levelz00_2323)<((long)10)))
{ /* Llib/error.scm 962 */
obj_t BgL_list1899z00_2394;
BgL_list1899z00_2394 = 
MAKE_YOUNG_PAIR(BgL_portz00_4987, BNIL); 
BGl_displayz00zz__r4_output_6_10_3z00(BGl_string3198z00zz__errorz00, BgL_list1899z00_2394); }  else 
{ /* Llib/error.scm 962 */
if(
(
(long)CINT(BgL_levelz00_2323)<((long)100)))
{ /* Llib/error.scm 963 */
obj_t BgL_list1901z00_2396;
BgL_list1901z00_2396 = 
MAKE_YOUNG_PAIR(BgL_portz00_4987, BNIL); 
BGl_displayz00zz__r4_output_6_10_3z00(BGl_string3199z00zz__errorz00, BgL_list1901z00_2396); }  else 
{ /* Llib/error.scm 963 */
if(
(
(long)CINT(BgL_levelz00_2323)<((long)1000)))
{ /* Llib/error.scm 964 */
obj_t BgL_list1903z00_2398;
BgL_list1903z00_2398 = 
MAKE_YOUNG_PAIR(BgL_portz00_4987, BNIL); 
BGl_displayz00zz__r4_output_6_10_3z00(BGl_string3200z00zz__errorz00, BgL_list1903z00_2398); }  else 
{ /* Llib/error.scm 964 */BFALSE; } } } 
{ /* Llib/error.scm 966 */
obj_t BgL_list1904z00_2399;
BgL_list1904z00_2399 = 
MAKE_YOUNG_PAIR(BgL_portz00_4987, BNIL); 
BGl_displayz00zz__r4_output_6_10_3z00(BgL_levelz00_2323, BgL_list1904z00_2399); } 
{ /* Llib/error.scm 967 */
obj_t BgL_arg1905z00_2400;
{ /* Llib/error.scm 967 */
bool_t BgL_test3618z00_7013;
if(
SYMBOLP(BgL_namez00_2330))
{ /* Llib/error.scm 967 */
BgL_test3618z00_7013 = ((bool_t)1)
; }  else 
{ /* Llib/error.scm 967 */
BgL_test3618z00_7013 = 
STRINGP(BgL_namez00_2330)
; } 
if(BgL_test3618z00_7013)
{ /* Llib/error.scm 967 */
BgL_arg1905z00_2400 = BGl_string3201z00zz__errorz00; }  else 
{ /* Llib/error.scm 967 */
BgL_arg1905z00_2400 = BGl_string3197z00zz__errorz00; } } 
{ /* Llib/error.scm 967 */
obj_t BgL_list1906z00_2401;
BgL_list1906z00_2401 = 
MAKE_YOUNG_PAIR(BgL_portz00_4987, BNIL); 
BGl_displayz00zz__r4_output_6_10_3z00(BgL_arg1905z00_2400, BgL_list1906z00_2401); } } 
{ /* Llib/error.scm 968 */
obj_t BgL_list1909z00_2405;
BgL_list1909z00_2405 = 
MAKE_YOUNG_PAIR(BgL_portz00_4987, BNIL); 
BGl_displayz00zz__r4_output_6_10_3z00(BgL_namez00_2330, BgL_list1909z00_2405); } 
{ /* Llib/error.scm 969 */
obj_t BgL_list1910z00_2406;
BgL_list1910z00_2406 = 
MAKE_YOUNG_PAIR(BgL_portz00_4987, BNIL); 
BGl_newlinez00zz__r4_output_6_10_3z00(BgL_list1910z00_2406); } 
BgL_tmpz00_6995 = 
(
(long)CINT(BgL_levelz00_2323)+((long)1)); 
return 
BINT(BgL_tmpz00_6995);} }  else 
{ /* Llib/error.scm 981 */
long BgL_tmpz00_7026;
goto BgL_tagzd2338zd2_2333;
return 
BINT(BgL_tmpz00_7026);} } }  else 
{ /* Llib/error.scm 981 */
if(
STRINGP(BgL_framez00_2322))
{ /* Llib/error.scm 981 */
{ /* Llib/error.scm 973 */
obj_t BgL_list1911z00_2407;
BgL_list1911z00_2407 = 
MAKE_YOUNG_PAIR(BgL_portz00_4987, BNIL); 
BGl_displayz00zz__r4_output_6_10_3z00(BgL_framez00_2322, BgL_list1911z00_2407); } 
{ /* Llib/error.scm 974 */
obj_t BgL_list1912z00_2408;
BgL_list1912z00_2408 = 
MAKE_YOUNG_PAIR(BgL_portz00_4987, BNIL); 
BGl_newlinez00zz__r4_output_6_10_3z00(BgL_list1912z00_2408); } 
return BgL_levelz00_2323;}  else 
{ /* Llib/error.scm 981 */
long BgL_tmpz00_7034;
goto BgL_tagzd2338zd2_2333;
return 
BINT(BgL_tmpz00_7034);} } } } 

}



/* display-trace-stack-source */
BGL_EXPORTED_DEF obj_t BGl_displayzd2tracezd2stackzd2sourcezd2zz__errorz00(obj_t BgL_stackz00_118, obj_t BgL_portz00_119)
{
{ /* Llib/error.scm 1008 */
{ 
obj_t BgL_stackz00_2416;
BgL_stackz00_2416 = BgL_stackz00_118; 
BgL_zc3z04anonymousza31916ze3z87_2417:
if(
PAIRP(BgL_stackz00_2416))
{ 
obj_t BgL_namez00_2419;obj_t BgL_locz00_2420;obj_t BgL_restz00_2421;
{ /* Llib/error.scm 1021 */
obj_t BgL_ezd2371zd2_2424;
BgL_ezd2371zd2_2424 = 
CAR(BgL_stackz00_2416); 
if(
PAIRP(BgL_ezd2371zd2_2424))
{ /* Llib/error.scm 1021 */
obj_t BgL_cdrzd2379zd2_2426;
BgL_cdrzd2379zd2_2426 = 
CDR(BgL_ezd2371zd2_2424); 
if(
PAIRP(BgL_cdrzd2379zd2_2426))
{ /* Llib/error.scm 1021 */
obj_t BgL_cdrzd2384zd2_2428;
BgL_cdrzd2384zd2_2428 = 
CDR(BgL_cdrzd2379zd2_2426); 
{ /* Llib/error.scm 1021 */
bool_t BgL_test3624z00_7045;
if(
BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_cdrzd2384zd2_2428))
{ /* Llib/error.scm 902 */
obj_t BgL_list1822z00_4081;
BgL_list1822z00_4081 = 
MAKE_YOUNG_PAIR(BgL_cdrzd2384zd2_2428, BNIL); 
BgL_test3624z00_7045 = 
CBOOL(
BGl_everyz00zz__r4_pairs_and_lists_6_3z00(BGl_pairzf3zd2envz21zz__r4_pairs_and_lists_6_3z00, BgL_list1822z00_4081)); }  else 
{ /* Llib/error.scm 902 */
BgL_test3624z00_7045 = ((bool_t)0)
; } 
if(BgL_test3624z00_7045)
{ /* Llib/error.scm 1021 */
BgL_namez00_2419 = 
CAR(BgL_ezd2371zd2_2424); 
BgL_locz00_2420 = 
CAR(BgL_cdrzd2379zd2_2426); 
BgL_restz00_2421 = BgL_cdrzd2384zd2_2428; 
{ /* Llib/error.scm 1024 */
obj_t BgL_filez00_2432;
BgL_filez00_2432 = 
BGl_locationzd2linezd2numz00zz__errorz00(BgL_locz00_2420); 
{ /* Llib/error.scm 1025 */
obj_t BgL_lnumz00_2433;obj_t BgL_lpointz00_2434;obj_t BgL_lstringz00_2435;
{ /* Llib/error.scm 1027 */
int BgL_tmpz00_7052;
BgL_tmpz00_7052 = 
(int)(((long)1)); 
BgL_lnumz00_2433 = 
BGL_MVALUES_VAL(BgL_tmpz00_7052); } 
{ /* Llib/error.scm 1027 */
int BgL_tmpz00_7055;
BgL_tmpz00_7055 = 
(int)(((long)2)); 
BgL_lpointz00_2434 = 
BGL_MVALUES_VAL(BgL_tmpz00_7055); } 
{ /* Llib/error.scm 1027 */
int BgL_tmpz00_7058;
BgL_tmpz00_7058 = 
(int)(((long)3)); 
BgL_lstringz00_2435 = 
BGL_MVALUES_VAL(BgL_tmpz00_7058); } 
{ /* Llib/error.scm 1027 */
bool_t BgL_test3626z00_7061;
if(
STRINGP(BgL_filez00_2432))
{ /* Llib/error.scm 1027 */
BgL_test3626z00_7061 = 
STRINGP(BgL_lstringz00_2435)
; }  else 
{ /* Llib/error.scm 1027 */
BgL_test3626z00_7061 = ((bool_t)0)
; } 
if(BgL_test3626z00_7061)
{ /* Llib/error.scm 1011 */
obj_t BgL_tabsz00_4053;
if(
(
(long)CINT(BgL_lpointz00_2434)>((long)0)))
{ /* Llib/error.scm 1011 */
BgL_tabsz00_4053 = 
make_string(
(long)CINT(BgL_lpointz00_2434), ((unsigned char)' ')); }  else 
{ /* Llib/error.scm 1011 */
BgL_tabsz00_4053 = BGl_string3176z00zz__errorz00; } 
{ /* Llib/error.scm 1011 */
long BgL_lz00_4055;
BgL_lz00_4055 = 
STRING_LENGTH(BgL_lstringz00_2435); 
{ /* Llib/error.scm 1012 */
obj_t BgL_ncolz00_4056;
if(
(
(long)CINT(BgL_lpointz00_2434)>=BgL_lz00_4055))
{ /* Llib/error.scm 1013 */
BgL_ncolz00_4056 = 
BINT(BgL_lz00_4055); }  else 
{ /* Llib/error.scm 1013 */
BgL_ncolz00_4056 = BgL_lpointz00_2434; } 
{ /* Llib/error.scm 1013 */

BGl_fixzd2tabulationz12zc0zz__errorz00(BgL_ncolz00_4056, BgL_lstringz00_2435, BgL_tabsz00_4053); 
return 
BGl_printzd2cursorzd2zz__errorz00(BgL_filez00_2432, BgL_lnumz00_2433, BgL_lpointz00_2434, BgL_lstringz00_2435, BgL_tabsz00_4053);} } } }  else 
{ /* Llib/error.scm 1029 */
bool_t BgL_test3630z00_7077;
if(
STRINGP(BgL_filez00_2432))
{ /* Llib/error.scm 1029 */
BgL_test3630z00_7077 = 
BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BgL_lpointz00_2434)
; }  else 
{ /* Llib/error.scm 1029 */
BgL_test3630z00_7077 = ((bool_t)0)
; } 
if(BgL_test3630z00_7077)
{ /* Llib/error.scm 1029 */
if(
BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BgL_lnumz00_2433))
{ /* Llib/error.scm 1031 */
obj_t BgL_arg1929z00_2441;obj_t BgL_arg1930z00_2442;
{ /* Llib/error.scm 1031 */
obj_t BgL_res2870z00_4069;
{ /* Llib/error.scm 1031 */
obj_t BgL_tmpz00_7083;
BgL_tmpz00_7083 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2870z00_4069 = 
BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_7083); } 
BgL_arg1929z00_2441 = BgL_res2870z00_4069; } 
{ /* Llib/error.scm 1033 */

BgL_arg1930z00_2442 = 
BGl_filenamezd2forzd2errorz00zz__errorz00(BgL_filez00_2432, ((long)255)); } 
{ /* Llib/error.scm 1031 */
obj_t BgL_list1931z00_2443;
{ /* Llib/error.scm 1031 */
obj_t BgL_arg1932z00_2444;
{ /* Llib/error.scm 1031 */
obj_t BgL_arg1933z00_2445;
BgL_arg1933z00_2445 = 
MAKE_YOUNG_PAIR(BgL_lpointz00_2434, BNIL); 
BgL_arg1932z00_2444 = 
MAKE_YOUNG_PAIR(BgL_lnumz00_2433, BgL_arg1933z00_2445); } 
BgL_list1931z00_2443 = 
MAKE_YOUNG_PAIR(BgL_arg1930z00_2442, BgL_arg1932z00_2444); } 
return 
BGl_fprintfz00zz__r4_output_6_10_3z00(BgL_arg1929z00_2441, BGl_string3212z00zz__errorz00, BgL_list1931z00_2443);} }  else 
{ /* Llib/error.scm 1036 */
obj_t BgL_arg1934z00_2448;obj_t BgL_arg1935z00_2449;
{ /* Llib/error.scm 1036 */
obj_t BgL_res2871z00_4071;
{ /* Llib/error.scm 1036 */
obj_t BgL_tmpz00_7091;
BgL_tmpz00_7091 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2871z00_4071 = 
BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_7091); } 
BgL_arg1934z00_2448 = BgL_res2871z00_4071; } 
{ /* Llib/error.scm 1038 */

BgL_arg1935z00_2449 = 
BGl_filenamezd2forzd2errorz00zz__errorz00(BgL_filez00_2432, ((long)255)); } 
{ /* Llib/error.scm 1036 */
obj_t BgL_list1936z00_2450;
{ /* Llib/error.scm 1036 */
obj_t BgL_arg1937z00_2451;
BgL_arg1937z00_2451 = 
MAKE_YOUNG_PAIR(BgL_lpointz00_2434, BNIL); 
BgL_list1936z00_2450 = 
MAKE_YOUNG_PAIR(BgL_arg1935z00_2449, BgL_arg1937z00_2451); } 
return 
BGl_fprintfz00zz__r4_output_6_10_3z00(BgL_arg1934z00_2448, BGl_string3213z00zz__errorz00, BgL_list1936z00_2450);} } }  else 
{ /* Llib/error.scm 1041 */
obj_t BgL_arg1938z00_2454;
BgL_arg1938z00_2454 = 
CDR(
((obj_t)BgL_stackz00_2416)); 
{ 
obj_t BgL_stackz00_7100;
BgL_stackz00_7100 = BgL_arg1938z00_2454; 
BgL_stackz00_2416 = BgL_stackz00_7100; 
goto BgL_zc3z04anonymousza31916ze3z87_2417;} } } } } } }  else 
{ 
obj_t BgL_stackz00_7103;
BgL_stackz00_7103 = 
CDR(BgL_stackz00_2416); 
BgL_stackz00_2416 = BgL_stackz00_7103; 
goto BgL_zc3z04anonymousza31916ze3z87_2417;} } }  else 
{ 
obj_t BgL_stackz00_7105;
BgL_stackz00_7105 = 
CDR(BgL_stackz00_2416); 
BgL_stackz00_2416 = BgL_stackz00_7105; 
goto BgL_zc3z04anonymousza31916ze3z87_2417;} }  else 
{ 
obj_t BgL_stackz00_7107;
BgL_stackz00_7107 = 
CDR(BgL_stackz00_2416); 
BgL_stackz00_2416 = BgL_stackz00_7107; 
goto BgL_zc3z04anonymousza31916ze3z87_2417;} } }  else 
{ /* Llib/error.scm 1020 */
return BFALSE;} } } 

}



/* &display-trace-stack-source */
obj_t BGl_z62displayzd2tracezd2stackzd2sourcezb0zz__errorz00(obj_t BgL_envz00_4958, obj_t BgL_stackz00_4959, obj_t BgL_portz00_4960)
{
{ /* Llib/error.scm 1008 */
{ /* Llib/error.scm 1020 */
obj_t BgL_auxz00_7109;
if(
OUTPUT_PORTP(BgL_portz00_4960))
{ /* Llib/error.scm 1020 */
BgL_auxz00_7109 = BgL_portz00_4960
; }  else 
{ 
obj_t BgL_auxz00_7112;
BgL_auxz00_7112 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3137z00zz__errorz00, 
BINT(((long)39440)), BGl_string3214z00zz__errorz00, BGl_string3195z00zz__errorz00, BgL_portz00_4960); 
FAILURE(BgL_auxz00_7112,BFALSE,BFALSE);} 
return 
BGl_displayzd2tracezd2stackzd2sourcezd2zz__errorz00(BgL_stackz00_4959, BgL_auxz00_7109);} } 

}



/* dump-trace-stack */
BGL_EXPORTED_DEF obj_t BGl_dumpzd2tracezd2stackz00zz__errorz00(obj_t BgL_portz00_120, obj_t BgL_depthz00_121)
{
{ /* Llib/error.scm 1048 */
{ /* Llib/error.scm 1049 */
obj_t BgL_arg1943z00_4090;
BgL_arg1943z00_4090 = 
BGl_getzd2tracezd2stackz00zz__errorz00(BgL_depthz00_121); 
{ /* Llib/error.scm 248 */

return 
BGl_displayzd2tracezd2stackz00zz__errorz00(BgL_arg1943z00_4090, BgL_portz00_120, 
BINT(((long)1)));} } } 

}



/* &dump-trace-stack */
obj_t BGl_z62dumpzd2tracezd2stackz62zz__errorz00(obj_t BgL_envz00_4961, obj_t BgL_portz00_4962, obj_t BgL_depthz00_4963)
{
{ /* Llib/error.scm 1048 */
return 
BGl_dumpzd2tracezd2stackz00zz__errorz00(BgL_portz00_4962, BgL_depthz00_4963);} 

}



/* fix-tabulation! */
obj_t BGl_fixzd2tabulationz12zc0zz__errorz00(obj_t BgL_markerz00_122, obj_t BgL_srcz00_123, obj_t BgL_dstz00_124)
{
{ /* Llib/error.scm 1054 */
{ /* Llib/error.scm 1055 */
long BgL_g1116z00_2474;
BgL_g1116z00_2474 = 
(
(long)CINT(BgL_markerz00_122)-((long)1)); 
{ 
long BgL_readz00_2476;
BgL_readz00_2476 = BgL_g1116z00_2474; 
BgL_zc3z04anonymousza31944ze3z87_2477:
if(
(BgL_readz00_2476==((long)-1)))
{ /* Llib/error.scm 1057 */
return BGl_symbol3215z00zz__errorz00;}  else 
{ /* Llib/error.scm 1057 */
if(
(
STRING_REF(
((obj_t)BgL_srcz00_123), BgL_readz00_2476)==((unsigned char)9)))
{ /* Llib/error.scm 1059 */
STRING_SET(BgL_dstz00_124, BgL_readz00_2476, ((unsigned char)9)); 
{ 
long BgL_readz00_7130;
BgL_readz00_7130 = 
(BgL_readz00_2476-((long)1)); 
BgL_readz00_2476 = BgL_readz00_7130; 
goto BgL_zc3z04anonymousza31944ze3z87_2477;} }  else 
{ 
long BgL_readz00_7132;
BgL_readz00_7132 = 
(BgL_readz00_2476-((long)1)); 
BgL_readz00_2476 = BgL_readz00_7132; 
goto BgL_zc3z04anonymousza31944ze3z87_2477;} } } } } 

}



/* print-cursor */
obj_t BGl_printzd2cursorzd2zz__errorz00(obj_t BgL_fnamez00_125, obj_t BgL_linez00_126, obj_t BgL_charz00_127, obj_t BgL_stringz00_128, obj_t BgL_spacezd2stringzd2_129)
{
{ /* Llib/error.scm 1068 */
{ /* Llib/error.scm 1069 */
obj_t BgL_arg1952z00_2485;obj_t BgL_arg1953z00_2486;
{ /* Llib/error.scm 1069 */
obj_t BgL_res2880z00_4112;
{ /* Llib/error.scm 1069 */
obj_t BgL_tmpz00_7134;
BgL_tmpz00_7134 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2880z00_4112 = 
BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_7134); } 
BgL_arg1952z00_2485 = BgL_res2880z00_4112; } 
{ /* Llib/error.scm 1070 */

BgL_arg1953z00_2486 = 
BGl_filenamezd2forzd2errorz00zz__errorz00(BgL_fnamez00_125, ((long)255)); } 
{ /* Llib/error.scm 1069 */
obj_t BgL_list1954z00_2487;
{ /* Llib/error.scm 1069 */
obj_t BgL_arg1955z00_2488;
{ /* Llib/error.scm 1069 */
obj_t BgL_arg1956z00_2489;
{ /* Llib/error.scm 1069 */
obj_t BgL_arg1957z00_2490;
{ /* Llib/error.scm 1069 */
obj_t BgL_arg1958z00_2491;
{ /* Llib/error.scm 1069 */
obj_t BgL_arg1959z00_2492;
{ /* Llib/error.scm 1069 */
obj_t BgL_arg1960z00_2493;
{ /* Llib/error.scm 1069 */
obj_t BgL_arg1961z00_2494;
{ /* Llib/error.scm 1069 */
obj_t BgL_arg1962z00_2495;
{ /* Llib/error.scm 1069 */
obj_t BgL_arg1963z00_2496;
{ /* Llib/error.scm 1069 */
obj_t BgL_arg1964z00_2497;
{ /* Llib/error.scm 1069 */
obj_t BgL_arg1965z00_2498;
{ /* Llib/error.scm 1069 */
obj_t BgL_arg1966z00_2499;
{ /* Llib/error.scm 1069 */
obj_t BgL_arg1967z00_2500;
BgL_arg1967z00_2500 = 
MAKE_YOUNG_PAIR(BGl_string3217z00zz__errorz00, BNIL); 
BgL_arg1966z00_2499 = 
MAKE_YOUNG_PAIR(BgL_spacezd2stringzd2_129, BgL_arg1967z00_2500); } 
BgL_arg1965z00_2498 = 
MAKE_YOUNG_PAIR(BGl_string3218z00zz__errorz00, BgL_arg1966z00_2499); } 
BgL_arg1964z00_2497 = 
MAKE_YOUNG_PAIR(
BCHAR(((unsigned char)10)), BgL_arg1965z00_2498); } 
BgL_arg1963z00_2496 = 
MAKE_YOUNG_PAIR(BgL_stringz00_128, BgL_arg1964z00_2497); } 
BgL_arg1962z00_2495 = 
MAKE_YOUNG_PAIR(BGl_string3218z00zz__errorz00, BgL_arg1963z00_2496); } 
BgL_arg1961z00_2494 = 
MAKE_YOUNG_PAIR(
BCHAR(((unsigned char)10)), BgL_arg1962z00_2495); } 
BgL_arg1960z00_2493 = 
MAKE_YOUNG_PAIR(BGl_string3210z00zz__errorz00, BgL_arg1961z00_2494); } 
BgL_arg1959z00_2492 = 
MAKE_YOUNG_PAIR(BgL_charz00_127, BgL_arg1960z00_2493); } 
BgL_arg1958z00_2491 = 
MAKE_YOUNG_PAIR(BGl_string3219z00zz__errorz00, BgL_arg1959z00_2492); } 
BgL_arg1957z00_2490 = 
MAKE_YOUNG_PAIR(BgL_linez00_126, BgL_arg1958z00_2491); } 
BgL_arg1956z00_2489 = 
MAKE_YOUNG_PAIR(BGl_string3220z00zz__errorz00, BgL_arg1957z00_2490); } 
BgL_arg1955z00_2488 = 
MAKE_YOUNG_PAIR(BgL_arg1953z00_2486, BgL_arg1956z00_2489); } 
BgL_list1954z00_2487 = 
MAKE_YOUNG_PAIR(BGl_string3175z00zz__errorz00, BgL_arg1955z00_2488); } 
return 
BGl_fprintz00zz__r4_output_6_10_3z00(BgL_arg1952z00_2485, BgL_list1954z00_2487);} } } 

}



/* relative-file-name */
obj_t BGl_relativezd2filezd2namez00zz__errorz00(obj_t BgL_fnamez00_130)
{
{ /* Llib/error.scm 1083 */
{ /* Llib/error.scm 1084 */
obj_t BgL_pwdz00_2503;obj_t BgL_dnamez00_2504;
BgL_pwdz00_2503 = 
BGl_pwdz00zz__osz00(); 
BgL_dnamez00_2504 = 
BGl_dirnamez00zz__osz00(BgL_fnamez00_130); 
{ /* Llib/error.scm 1086 */
bool_t BgL_test3636z00_7157;
if(
STRINGP(BgL_pwdz00_2503))
{ /* Llib/error.scm 1087 */
bool_t BgL_test3638z00_7160;
{ /* Llib/error.scm 1087 */
bool_t BgL_res2886z00_4129;
{ /* Llib/error.scm 1087 */
long BgL_l1z00_4116;
BgL_l1z00_4116 = 
STRING_LENGTH(BgL_dnamez00_2504); 
if(
(BgL_l1z00_4116==((long)1)))
{ /* Llib/error.scm 1087 */
int BgL_arg2209z00_4119;
{ /* Llib/error.scm 1087 */
char * BgL_auxz00_7166;char * BgL_tmpz00_7164;
BgL_auxz00_7166 = 
BSTRING_TO_STRING(BGl_string3221z00zz__errorz00); 
BgL_tmpz00_7164 = 
BSTRING_TO_STRING(BgL_dnamez00_2504); 
BgL_arg2209z00_4119 = 
memcmp(BgL_tmpz00_7164, BgL_auxz00_7166, BgL_l1z00_4116); } 
BgL_res2886z00_4129 = 
(
(long)(BgL_arg2209z00_4119)==((long)0)); }  else 
{ /* Llib/error.scm 1087 */
BgL_res2886z00_4129 = ((bool_t)0); } } 
BgL_test3638z00_7160 = BgL_res2886z00_4129; } 
if(BgL_test3638z00_7160)
{ /* Llib/error.scm 1087 */
BgL_test3636z00_7157 = ((bool_t)1)
; }  else 
{ /* Llib/error.scm 1087 */
if(
(
STRING_REF(
((obj_t)BgL_fnamez00_130), ((long)0))==((unsigned char)'/')))
{ /* Llib/error.scm 1088 */
BgL_test3636z00_7157 = ((bool_t)0)
; }  else 
{ /* Llib/error.scm 1088 */
BgL_test3636z00_7157 = ((bool_t)1)
; } } }  else 
{ /* Llib/error.scm 1086 */
BgL_test3636z00_7157 = ((bool_t)1)
; } 
if(BgL_test3636z00_7157)
{ /* Llib/error.scm 1086 */
return BgL_fnamez00_130;}  else 
{ /* Llib/error.scm 1091 */
obj_t BgL_originalzd2cmpzd2pathz00_2511;
BgL_originalzd2cmpzd2pathz00_2511 = 
BGl_dirnamezd2ze3listz31zz__errorz00(BgL_dnamez00_2504); 
{ /* Llib/error.scm 1092 */
obj_t BgL_g1117z00_2512;
BgL_g1117z00_2512 = 
BGl_dirnamezd2ze3listz31zz__errorz00(BgL_pwdz00_2503); 
{ 
obj_t BgL_cmpzd2pathzd2_2514;obj_t BgL_curzd2pathzd2_2515;
BgL_cmpzd2pathzd2_2514 = BgL_originalzd2cmpzd2pathz00_2511; 
BgL_curzd2pathzd2_2515 = BgL_g1117z00_2512; 
BgL_zc3z04anonymousza31974ze3z87_2516:
if(
NULLP(BgL_cmpzd2pathzd2_2514))
{ /* Llib/error.scm 1095 */
if(
NULLP(BgL_curzd2pathzd2_2515))
{ /* Llib/error.scm 1096 */
return 
BGl_basenamez00zz__osz00(BgL_fnamez00_130);}  else 
{ /* Llib/error.scm 1099 */
long BgL_g1118z00_2519;obj_t BgL_g1119z00_2520;
BgL_g1118z00_2519 = 
bgl_list_length(BgL_curzd2pathzd2_2515); 
BgL_g1119z00_2520 = 
BGl_basenamez00zz__osz00(BgL_fnamez00_130); 
{ 
long BgL_lenz00_2522;obj_t BgL_resz00_2523;
BgL_lenz00_2522 = BgL_g1118z00_2519; 
BgL_resz00_2523 = BgL_g1119z00_2520; 
BgL_zc3z04anonymousza31977ze3z87_2524:
if(
(BgL_lenz00_2522==((long)0)))
{ /* Llib/error.scm 1101 */
return BgL_resz00_2523;}  else 
{ /* Llib/error.scm 1103 */
long BgL_arg1979z00_2526;obj_t BgL_arg1980z00_2527;
BgL_arg1979z00_2526 = 
(BgL_lenz00_2522-((long)1)); 
{ /* Llib/error.scm 1103 */
obj_t BgL_list1981z00_2528;
{ /* Llib/error.scm 1103 */
obj_t BgL_arg1982z00_2529;
BgL_arg1982z00_2529 = 
MAKE_YOUNG_PAIR(BgL_resz00_2523, BNIL); 
BgL_list1981z00_2528 = 
MAKE_YOUNG_PAIR(BGl_string3222z00zz__errorz00, BgL_arg1982z00_2529); } 
BgL_arg1980z00_2527 = 
BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list1981z00_2528); } 
{ 
obj_t BgL_resz00_7191;long BgL_lenz00_7190;
BgL_lenz00_7190 = BgL_arg1979z00_2526; 
BgL_resz00_7191 = BgL_arg1980z00_2527; 
BgL_resz00_2523 = BgL_resz00_7191; 
BgL_lenz00_2522 = BgL_lenz00_7190; 
goto BgL_zc3z04anonymousza31977ze3z87_2524;} } } } }  else 
{ /* Llib/error.scm 1095 */
if(
NULLP(BgL_curzd2pathzd2_2515))
{ /* Llib/error.scm 1105 */
obj_t BgL_g1120z00_2532;obj_t BgL_g1121z00_2533;
BgL_g1120z00_2532 = 
bgl_reverse_bang(BgL_cmpzd2pathzd2_2514); 
BgL_g1121z00_2533 = 
BGl_basenamez00zz__osz00(BgL_fnamez00_130); 
{ 
obj_t BgL_pathz00_2535;obj_t BgL_resz00_2536;
BgL_pathz00_2535 = BgL_g1120z00_2532; 
BgL_resz00_2536 = BgL_g1121z00_2533; 
BgL_zc3z04anonymousza31984ze3z87_2537:
if(
NULLP(BgL_pathz00_2535))
{ /* Llib/error.scm 1107 */
return BgL_resz00_2536;}  else 
{ /* Llib/error.scm 1109 */
obj_t BgL_arg1986z00_2539;obj_t BgL_arg1987z00_2540;
BgL_arg1986z00_2539 = 
CDR(
((obj_t)BgL_pathz00_2535)); 
{ /* Llib/error.scm 1110 */
obj_t BgL_arg1988z00_2541;
BgL_arg1988z00_2541 = 
CAR(
((obj_t)BgL_pathz00_2535)); 
{ /* Llib/error.scm 1110 */
obj_t BgL_list1989z00_2542;
{ /* Llib/error.scm 1110 */
obj_t BgL_arg1990z00_2543;
{ /* Llib/error.scm 1110 */
obj_t BgL_arg1991z00_2544;
BgL_arg1991z00_2544 = 
MAKE_YOUNG_PAIR(BgL_resz00_2536, BNIL); 
BgL_arg1990z00_2543 = 
MAKE_YOUNG_PAIR(BGl_string3223z00zz__errorz00, BgL_arg1991z00_2544); } 
BgL_list1989z00_2542 = 
MAKE_YOUNG_PAIR(BgL_arg1988z00_2541, BgL_arg1990z00_2543); } 
BgL_arg1987z00_2540 = 
BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list1989z00_2542); } } 
{ 
obj_t BgL_resz00_7207;obj_t BgL_pathz00_7206;
BgL_pathz00_7206 = BgL_arg1986z00_2539; 
BgL_resz00_7207 = BgL_arg1987z00_2540; 
BgL_resz00_2536 = BgL_resz00_7207; 
BgL_pathz00_2535 = BgL_pathz00_7206; 
goto BgL_zc3z04anonymousza31984ze3z87_2537;} } } }  else 
{ /* Llib/error.scm 1111 */
bool_t BgL_test3646z00_7208;
{ /* Llib/error.scm 1111 */
obj_t BgL_arg2016z00_2579;obj_t BgL_arg2017z00_2580;
BgL_arg2016z00_2579 = 
CAR(
((obj_t)BgL_curzd2pathzd2_2515)); 
BgL_arg2017z00_2580 = 
CAR(
((obj_t)BgL_cmpzd2pathzd2_2514)); 
{ /* Llib/error.scm 1111 */
bool_t BgL_res2899z00_4162;
{ /* Llib/error.scm 1111 */
long BgL_l1z00_4149;
BgL_l1z00_4149 = 
STRING_LENGTH(
((obj_t)BgL_arg2016z00_2579)); 
if(
(BgL_l1z00_4149==
STRING_LENGTH(
((obj_t)BgL_arg2017z00_2580))))
{ /* Llib/error.scm 1111 */
int BgL_arg2209z00_4152;
{ /* Llib/error.scm 1111 */
char * BgL_auxz00_7222;char * BgL_tmpz00_7219;
BgL_auxz00_7222 = 
BSTRING_TO_STRING(
((obj_t)BgL_arg2017z00_2580)); 
BgL_tmpz00_7219 = 
BSTRING_TO_STRING(
((obj_t)BgL_arg2016z00_2579)); 
BgL_arg2209z00_4152 = 
memcmp(BgL_tmpz00_7219, BgL_auxz00_7222, BgL_l1z00_4149); } 
BgL_res2899z00_4162 = 
(
(long)(BgL_arg2209z00_4152)==((long)0)); }  else 
{ /* Llib/error.scm 1111 */
BgL_res2899z00_4162 = ((bool_t)0); } } 
BgL_test3646z00_7208 = BgL_res2899z00_4162; } } 
if(BgL_test3646z00_7208)
{ /* Llib/error.scm 1112 */
obj_t BgL_arg1995z00_2549;obj_t BgL_arg1996z00_2550;
BgL_arg1995z00_2549 = 
CDR(
((obj_t)BgL_cmpzd2pathzd2_2514)); 
BgL_arg1996z00_2550 = 
CDR(
((obj_t)BgL_curzd2pathzd2_2515)); 
{ 
obj_t BgL_curzd2pathzd2_7233;obj_t BgL_cmpzd2pathzd2_7232;
BgL_cmpzd2pathzd2_7232 = BgL_arg1995z00_2549; 
BgL_curzd2pathzd2_7233 = BgL_arg1996z00_2550; 
BgL_curzd2pathzd2_2515 = BgL_curzd2pathzd2_7233; 
BgL_cmpzd2pathzd2_2514 = BgL_cmpzd2pathzd2_7232; 
goto BgL_zc3z04anonymousza31974ze3z87_2516;} }  else 
{ /* Llib/error.scm 1114 */
obj_t BgL_g1122z00_2551;obj_t BgL_g1123z00_2552;
BgL_g1122z00_2551 = 
bgl_reverse(BgL_cmpzd2pathzd2_2514); 
BgL_g1123z00_2552 = 
BGl_basenamez00zz__osz00(BgL_fnamez00_130); 
{ 
obj_t BgL_pathz00_2554;obj_t BgL_resz00_2555;
BgL_pathz00_2554 = BgL_g1122z00_2551; 
BgL_resz00_2555 = BgL_g1123z00_2552; 
BgL_zc3z04anonymousza31997ze3z87_2556:
if(
NULLP(BgL_pathz00_2554))
{ /* Llib/error.scm 1116 */
if(
(BgL_cmpzd2pathzd2_2514==BgL_originalzd2cmpzd2pathz00_2511))
{ /* Llib/error.scm 1118 */
obj_t BgL_list2000z00_2559;
{ /* Llib/error.scm 1118 */
obj_t BgL_arg2001z00_2560;
BgL_arg2001z00_2560 = 
MAKE_YOUNG_PAIR(BgL_resz00_2555, BNIL); 
BgL_list2000z00_2559 = 
MAKE_YOUNG_PAIR(BGl_string3223z00zz__errorz00, BgL_arg2001z00_2560); } 
return 
BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list2000z00_2559);}  else 
{ /* Llib/error.scm 1119 */
long BgL_g1124z00_2561;
BgL_g1124z00_2561 = 
bgl_list_length(BgL_curzd2pathzd2_2515); 
{ 
long BgL_lenz00_2563;obj_t BgL_resz00_2564;
BgL_lenz00_2563 = BgL_g1124z00_2561; 
BgL_resz00_2564 = BgL_resz00_2555; 
BgL_zc3z04anonymousza32002ze3z87_2565:
if(
(BgL_lenz00_2563==((long)0)))
{ /* Llib/error.scm 1121 */
return BgL_resz00_2564;}  else 
{ /* Llib/error.scm 1123 */
long BgL_arg2004z00_2567;obj_t BgL_arg2005z00_2568;
BgL_arg2004z00_2567 = 
(BgL_lenz00_2563-((long)1)); 
{ /* Llib/error.scm 1124 */
obj_t BgL_list2006z00_2569;
{ /* Llib/error.scm 1124 */
obj_t BgL_arg2007z00_2570;
BgL_arg2007z00_2570 = 
MAKE_YOUNG_PAIR(BgL_resz00_2564, BNIL); 
BgL_list2006z00_2569 = 
MAKE_YOUNG_PAIR(BGl_string3222z00zz__errorz00, BgL_arg2007z00_2570); } 
BgL_arg2005z00_2568 = 
BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list2006z00_2569); } 
{ 
obj_t BgL_resz00_7251;long BgL_lenz00_7250;
BgL_lenz00_7250 = BgL_arg2004z00_2567; 
BgL_resz00_7251 = BgL_arg2005z00_2568; 
BgL_resz00_2564 = BgL_resz00_7251; 
BgL_lenz00_2563 = BgL_lenz00_7250; 
goto BgL_zc3z04anonymousza32002ze3z87_2565;} } } } }  else 
{ /* Llib/error.scm 1125 */
obj_t BgL_arg2008z00_2572;obj_t BgL_arg2010z00_2573;
BgL_arg2008z00_2572 = 
CDR(
((obj_t)BgL_pathz00_2554)); 
{ /* Llib/error.scm 1126 */
obj_t BgL_arg2011z00_2574;
BgL_arg2011z00_2574 = 
CAR(
((obj_t)BgL_pathz00_2554)); 
{ /* Llib/error.scm 1126 */
obj_t BgL_list2012z00_2575;
{ /* Llib/error.scm 1126 */
obj_t BgL_arg2013z00_2576;
{ /* Llib/error.scm 1126 */
obj_t BgL_arg2014z00_2577;
BgL_arg2014z00_2577 = 
MAKE_YOUNG_PAIR(BgL_resz00_2555, BNIL); 
BgL_arg2013z00_2576 = 
MAKE_YOUNG_PAIR(BGl_string3223z00zz__errorz00, BgL_arg2014z00_2577); } 
BgL_list2012z00_2575 = 
MAKE_YOUNG_PAIR(BgL_arg2011z00_2574, BgL_arg2013z00_2576); } 
BgL_arg2010z00_2573 = 
BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list2012z00_2575); } } 
{ 
obj_t BgL_resz00_7261;obj_t BgL_pathz00_7260;
BgL_pathz00_7260 = BgL_arg2008z00_2572; 
BgL_resz00_7261 = BgL_arg2010z00_2573; 
BgL_resz00_2555 = BgL_resz00_7261; 
BgL_pathz00_2554 = BgL_pathz00_7260; 
goto BgL_zc3z04anonymousza31997ze3z87_2556;} } } } } } } } } } } } 

}



/* uncygdrive */
obj_t BGl_uncygdrivez00zz__errorz00(obj_t BgL_strz00_131)
{
{ /* Llib/error.scm 1134 */
if(
bigloo_strncmp(BGl_string3224z00zz__errorz00, BgL_strz00_131, ((long)10)))
{ /* Llib/error.scm 1136 */
bool_t BgL_test3652z00_7264;
if(
(
STRING_LENGTH(BgL_strz00_131)>((long)12)))
{ /* Llib/error.scm 1137 */
bool_t BgL_test3654z00_7268;
{ /* Llib/error.scm 1137 */
unsigned char BgL_arg2043z00_2607;
BgL_arg2043z00_2607 = 
STRING_REF(BgL_strz00_131, ((long)10)); 
{ /* Llib/error.scm 1137 */
bool_t BgL_res2908z00_4183;
BgL_res2908z00_4183 = 
isalpha(BgL_arg2043z00_2607); 
BgL_test3654z00_7268 = BgL_res2908z00_4183; } } 
if(BgL_test3654z00_7268)
{ /* Llib/error.scm 1137 */
BgL_test3652z00_7264 = 
(
STRING_REF(BgL_strz00_131, ((long)11))==((unsigned char)'/'))
; }  else 
{ /* Llib/error.scm 1137 */
BgL_test3652z00_7264 = ((bool_t)0)
; } }  else 
{ /* Llib/error.scm 1136 */
BgL_test3652z00_7264 = ((bool_t)0)
; } 
if(BgL_test3652z00_7264)
{ /* Llib/error.scm 1139 */
obj_t BgL_arg2031z00_2595;obj_t BgL_arg2033z00_2596;
{ /* Llib/error.scm 1139 */
unsigned char BgL_arg2036z00_2599;
BgL_arg2036z00_2599 = 
STRING_REF(BgL_strz00_131, ((long)10)); 
{ /* Llib/error.scm 1139 */
obj_t BgL_list2037z00_2600;
{ /* Llib/error.scm 1139 */
obj_t BgL_arg2038z00_2601;
{ /* Llib/error.scm 1139 */
obj_t BgL_arg2039z00_2602;
BgL_arg2039z00_2602 = 
MAKE_YOUNG_PAIR(
BCHAR(((unsigned char)'/')), BNIL); 
BgL_arg2038z00_2601 = 
MAKE_YOUNG_PAIR(
BCHAR(((unsigned char)':')), BgL_arg2039z00_2602); } 
BgL_list2037z00_2600 = 
MAKE_YOUNG_PAIR(
BCHAR(BgL_arg2036z00_2599), BgL_arg2038z00_2601); } 
BgL_arg2031z00_2595 = 
BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(BgL_list2037z00_2600); } } 
BgL_arg2033z00_2596 = 
BGl_substringz00zz__r4_strings_6_7z00(BgL_strz00_131, ((long)12), 
STRING_LENGTH(BgL_strz00_131)); 
{ /* Llib/error.scm 1139 */
obj_t BgL_list2034z00_2597;
{ /* Llib/error.scm 1139 */
obj_t BgL_arg2035z00_2598;
BgL_arg2035z00_2598 = 
MAKE_YOUNG_PAIR(BgL_arg2033z00_2596, BNIL); 
BgL_list2034z00_2597 = 
MAKE_YOUNG_PAIR(BgL_arg2031z00_2595, BgL_arg2035z00_2598); } 
return 
BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list2034z00_2597);} }  else 
{ /* Llib/error.scm 1136 */
return BgL_strz00_131;} }  else 
{ /* Llib/error.scm 1135 */
return BgL_strz00_131;} } 

}



/* dirname->list */
obj_t BGl_dirnamezd2ze3listz31zz__errorz00(obj_t BgL_pathz00_132)
{
{ /* Llib/error.scm 1147 */
{ /* Llib/error.scm 1148 */
long BgL_lenz00_2609;long BgL_initz00_2610;
{ /* Llib/error.scm 1148 */
long BgL_lenz00_2632;
BgL_lenz00_2632 = 
STRING_LENGTH(
((obj_t)BgL_pathz00_132)); 
if(
(
STRING_REF(
((obj_t)BgL_pathz00_132), 
(BgL_lenz00_2632-((long)1)))==
(unsigned char)(FILE_SEPARATOR)))
{ /* Llib/error.scm 1149 */
BgL_lenz00_2609 = 
(BgL_lenz00_2632-((long)1)); }  else 
{ /* Llib/error.scm 1149 */
BgL_lenz00_2609 = BgL_lenz00_2632; } } 
if(
(
STRING_REF(
((obj_t)BgL_pathz00_132), ((long)0))==
(unsigned char)(FILE_SEPARATOR)))
{ /* Llib/error.scm 1152 */
BgL_initz00_2610 = ((long)1); }  else 
{ /* Llib/error.scm 1152 */
BgL_initz00_2610 = ((long)0); } 
{ /* Llib/error.scm 1153 */
bool_t BgL_test3657z00_7300;
{ /* Llib/error.scm 1153 */
bool_t BgL_res2925z00_4226;
{ /* Llib/error.scm 1153 */
long BgL_l1z00_4213;
BgL_l1z00_4213 = 
STRING_LENGTH(
((obj_t)BgL_pathz00_132)); 
if(
(BgL_l1z00_4213==((long)1)))
{ /* Llib/error.scm 1153 */
int BgL_arg2209z00_4216;
{ /* Llib/error.scm 1153 */
char * BgL_auxz00_7308;char * BgL_tmpz00_7305;
BgL_auxz00_7308 = 
BSTRING_TO_STRING(BGl_string3223z00zz__errorz00); 
BgL_tmpz00_7305 = 
BSTRING_TO_STRING(
((obj_t)BgL_pathz00_132)); 
BgL_arg2209z00_4216 = 
memcmp(BgL_tmpz00_7305, BgL_auxz00_7308, BgL_l1z00_4213); } 
BgL_res2925z00_4226 = 
(
(long)(BgL_arg2209z00_4216)==((long)0)); }  else 
{ /* Llib/error.scm 1153 */
BgL_res2925z00_4226 = ((bool_t)0); } } 
BgL_test3657z00_7300 = BgL_res2925z00_4226; } 
if(BgL_test3657z00_7300)
{ /* Llib/error.scm 1153 */
return BNIL;}  else 
{ 
long BgL_readz00_2614;long BgL_prevz00_2615;obj_t BgL_listz00_2616;
BgL_readz00_2614 = BgL_initz00_2610; 
BgL_prevz00_2615 = BgL_initz00_2610; 
BgL_listz00_2616 = BNIL; 
BgL_zc3z04anonymousza32046ze3z87_2617:
if(
(BgL_readz00_2614==BgL_lenz00_2609))
{ /* Llib/error.scm 1160 */
obj_t BgL_arg2048z00_2619;
{ /* Llib/error.scm 1160 */
obj_t BgL_arg2049z00_2620;
BgL_arg2049z00_2620 = 
BGl_substringz00zz__r4_strings_6_7z00(BgL_pathz00_132, BgL_prevz00_2615, BgL_readz00_2614); 
{ /* Llib/error.scm 1160 */
obj_t BgL_res2927z00_4230;
BgL_res2927z00_4230 = 
MAKE_YOUNG_PAIR(BgL_arg2049z00_2620, BgL_listz00_2616); 
BgL_arg2048z00_2619 = BgL_res2927z00_4230; } } 
return 
bgl_reverse_bang(BgL_arg2048z00_2619);}  else 
{ /* Llib/error.scm 1159 */
if(
(
STRING_REF(
((obj_t)BgL_pathz00_132), BgL_readz00_2614)==
(unsigned char)(FILE_SEPARATOR)))
{ /* Llib/error.scm 1162 */
long BgL_arg2053z00_2624;long BgL_arg2055z00_2625;obj_t BgL_arg2056z00_2626;
BgL_arg2053z00_2624 = 
(BgL_readz00_2614+((long)1)); 
BgL_arg2055z00_2625 = 
(BgL_readz00_2614+((long)1)); 
{ /* Llib/error.scm 1164 */
obj_t BgL_arg2057z00_2627;
BgL_arg2057z00_2627 = 
BGl_substringz00zz__r4_strings_6_7z00(BgL_pathz00_132, BgL_prevz00_2615, BgL_readz00_2614); 
{ /* Llib/error.scm 1164 */
obj_t BgL_res2932z00_4241;
BgL_res2932z00_4241 = 
MAKE_YOUNG_PAIR(BgL_arg2057z00_2627, BgL_listz00_2616); 
BgL_arg2056z00_2626 = BgL_res2932z00_4241; } } 
{ 
obj_t BgL_listz00_7329;long BgL_prevz00_7328;long BgL_readz00_7327;
BgL_readz00_7327 = BgL_arg2053z00_2624; 
BgL_prevz00_7328 = BgL_arg2055z00_2625; 
BgL_listz00_7329 = BgL_arg2056z00_2626; 
BgL_listz00_2616 = BgL_listz00_7329; 
BgL_prevz00_2615 = BgL_prevz00_7328; 
BgL_readz00_2614 = BgL_readz00_7327; 
goto BgL_zc3z04anonymousza32046ze3z87_2617;} }  else 
{ 
long BgL_readz00_7330;
BgL_readz00_7330 = 
(BgL_readz00_2614+((long)1)); 
BgL_readz00_2614 = BgL_readz00_7330; 
goto BgL_zc3z04anonymousza32046ze3z87_2617;} } } } } } 

}



/* typeof */
BGL_EXPORTED_DEF obj_t bgl_typeof(obj_t BgL_objz00_133)
{
{ /* Llib/error.scm 1174 */
if(
INTEGERP(BgL_objz00_133))
{ /* Llib/error.scm 1176 */
return BGl_string3139z00zz__errorz00;}  else 
{ /* Llib/error.scm 1176 */
if(
REALP(BgL_objz00_133))
{ /* Llib/error.scm 1178 */
return BGl_string3225z00zz__errorz00;}  else 
{ /* Llib/error.scm 1178 */
if(
STRINGP(BgL_objz00_133))
{ /* Llib/error.scm 1180 */
return BGl_string3159z00zz__errorz00;}  else 
{ /* Llib/error.scm 1180 */
if(
SYMBOLP(BgL_objz00_133))
{ /* Llib/error.scm 1182 */
return BGl_string3226z00zz__errorz00;}  else 
{ /* Llib/error.scm 1182 */
if(
KEYWORDP(BgL_objz00_133))
{ /* Llib/error.scm 1184 */
return BGl_string3227z00zz__errorz00;}  else 
{ /* Llib/error.scm 1184 */
if(
CHARP(BgL_objz00_133))
{ /* Llib/error.scm 1186 */
return BGl_string3228z00zz__errorz00;}  else 
{ /* Llib/error.scm 1186 */
if(
BOOLEANP(BgL_objz00_133))
{ /* Llib/error.scm 1188 */
return BGl_string3229z00zz__errorz00;}  else 
{ /* Llib/error.scm 1188 */
if(
NULLP(BgL_objz00_133))
{ /* Llib/error.scm 1190 */
return BGl_string3230z00zz__errorz00;}  else 
{ /* Llib/error.scm 1190 */
if(
(BgL_objz00_133==BUNSPEC))
{ /* Llib/error.scm 1192 */
return BGl_string3231z00zz__errorz00;}  else 
{ /* Llib/error.scm 1194 */
bool_t BgL_test3670z00_7350;
{ /* Llib/error.scm 1194 */
bool_t BgL_res2943z00_4253;
BgL_res2943z00_4253 = 
EPAIRP(BgL_objz00_133); 
BgL_test3670z00_7350 = BgL_res2943z00_4253; } 
if(BgL_test3670z00_7350)
{ /* Llib/error.scm 1194 */
return BGl_string3232z00zz__errorz00;}  else 
{ /* Llib/error.scm 1194 */
if(
PAIRP(BgL_objz00_133))
{ /* Llib/error.scm 1196 */
return BGl_string3233z00zz__errorz00;}  else 
{ /* Llib/error.scm 1196 */
if(
BGl_classzf3zf3zz__objectz00(BgL_objz00_133))
{ /* Llib/error.scm 1198 */
return BGl_string3234z00zz__errorz00;}  else 
{ /* Llib/error.scm 1198 */
if(
VECTORP(BgL_objz00_133))
{ /* Llib/error.scm 1200 */
return BGl_string3235z00zz__errorz00;}  else 
{ /* Llib/error.scm 1200 */
if(
TVECTORP(BgL_objz00_133))
{ /* Llib/error.scm 1202 */
return BGl_string3236z00zz__errorz00;}  else 
{ /* Llib/error.scm 1202 */
if(
STRUCTP(BgL_objz00_133))
{ /* Llib/error.scm 1205 */
obj_t BgL_arg2092z00_2660;
{ /* Llib/error.scm 1205 */
obj_t BgL_arg2095z00_2663;
BgL_arg2095z00_2663 = 
STRUCT_KEY(BgL_objz00_133); 
{ /* Llib/error.scm 1205 */
obj_t BgL_res2949z00_4261;
BgL_res2949z00_4261 = 
SYMBOL_TO_STRING(BgL_arg2095z00_2663); 
BgL_arg2092z00_2660 = BgL_res2949z00_4261; } } 
{ /* Llib/error.scm 1205 */
obj_t BgL_list2093z00_2661;
{ /* Llib/error.scm 1205 */
obj_t BgL_arg2094z00_2662;
BgL_arg2094z00_2662 = 
MAKE_YOUNG_PAIR(BgL_arg2092z00_2660, BNIL); 
BgL_list2093z00_2661 = 
MAKE_YOUNG_PAIR(BGl_string3237z00zz__errorz00, BgL_arg2094z00_2662); } 
return 
BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list2093z00_2661);} }  else 
{ /* Llib/error.scm 1204 */
if(
PROCEDUREP(BgL_objz00_133))
{ /* Llib/error.scm 1206 */
return BGl_string3147z00zz__errorz00;}  else 
{ /* Llib/error.scm 1206 */
if(
INPUT_PORTP(BgL_objz00_133))
{ /* Llib/error.scm 1208 */
return BGl_string3238z00zz__errorz00;}  else 
{ /* Llib/error.scm 1208 */
if(
OUTPUT_PORTP(BgL_objz00_133))
{ /* Llib/error.scm 1210 */
return BGl_string3195z00zz__errorz00;}  else 
{ /* Llib/error.scm 1210 */
if(
BINARY_PORTP(BgL_objz00_133))
{ /* Llib/error.scm 1212 */
return BGl_string3239z00zz__errorz00;}  else 
{ /* Llib/error.scm 1212 */
if(
CELLP(BgL_objz00_133))
{ /* Llib/error.scm 1214 */
return BGl_string3240z00zz__errorz00;}  else 
{ /* Llib/error.scm 1214 */
if(
FOREIGNP(BgL_objz00_133))
{ /* Llib/error.scm 1217 */
obj_t BgL_arg2102z00_2670;
{ /* Llib/error.scm 1217 */
obj_t BgL_arg2105z00_2673;
BgL_arg2105z00_2673 = 
FOREIGN_ID(BgL_objz00_133); 
{ /* Llib/error.scm 1217 */
obj_t BgL_res2953z00_4267;
{ /* Llib/error.scm 1217 */
obj_t BgL_arg2216z00_4266;
BgL_arg2216z00_4266 = 
SYMBOL_TO_STRING(BgL_arg2105z00_2673); 
BgL_res2953z00_4267 = 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg2216z00_4266); } 
BgL_arg2102z00_2670 = BgL_res2953z00_4267; } } 
{ /* Llib/error.scm 1217 */
obj_t BgL_list2103z00_2671;
{ /* Llib/error.scm 1217 */
obj_t BgL_arg2104z00_2672;
BgL_arg2104z00_2672 = 
MAKE_YOUNG_PAIR(BgL_arg2102z00_2670, BNIL); 
BgL_list2103z00_2671 = 
MAKE_YOUNG_PAIR(BGl_string3241z00zz__errorz00, BgL_arg2104z00_2672); } 
return 
BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list2103z00_2671);} }  else 
{ /* Llib/error.scm 1216 */
if(
SOCKETP(BgL_objz00_133))
{ /* Llib/error.scm 1218 */
return BGl_string3242z00zz__errorz00;}  else 
{ /* Llib/error.scm 1220 */
bool_t BgL_test3683z00_7387;
{ /* Llib/error.scm 1220 */
bool_t BgL_res2955z00_4269;
BgL_res2955z00_4269 = 
BGL_DATAGRAM_SOCKETP(BgL_objz00_133); 
BgL_test3683z00_7387 = BgL_res2955z00_4269; } 
if(BgL_test3683z00_7387)
{ /* Llib/error.scm 1220 */
return BGl_string3243z00zz__errorz00;}  else 
{ /* Llib/error.scm 1220 */
if(
PROCESSP(BgL_objz00_133))
{ /* Llib/error.scm 1222 */
return BGl_string3244z00zz__errorz00;}  else 
{ /* Llib/error.scm 1222 */
if(
CUSTOMP(BgL_objz00_133))
{ /* Llib/error.scm 1224 */
return BGl_string3245z00zz__errorz00;}  else 
{ /* Llib/error.scm 1224 */
if(
OPAQUEP(BgL_objz00_133))
{ /* Llib/error.scm 1226 */
return BGl_string3246z00zz__errorz00;}  else 
{ /* Llib/error.scm 1226 */
if(
BGL_OBJECTP(BgL_objz00_133))
{ /* Llib/error.scm 1229 */
obj_t BgL_classz00_2680;
{ /* Llib/error.scm 1229 */
long BgL_arg2579z00_4275;
{ /* Llib/error.scm 1229 */
long BgL_arg2580z00_4276;
{ /* Llib/error.scm 1229 */
long BgL_res2960z00_4278;
BgL_res2960z00_4278 = 
BGL_OBJECT_CLASS_NUM(
((BgL_objectz00_bglt)BgL_objz00_133)); 
BgL_arg2580z00_4276 = BgL_res2960z00_4278; } 
BgL_arg2579z00_4275 = 
(BgL_arg2580z00_4276-OBJECT_TYPE); } 
BgL_classz00_2680 = 
VECTOR_REF(BGl_za2classesza2z00zz__objectz00,BgL_arg2579z00_4275); } 
if(
BGl_classzf3zf3zz__objectz00(BgL_classz00_2680))
{ /* Llib/error.scm 1234 */
obj_t BgL_symz00_2682;
BgL_symz00_2682 = 
BGl_classzd2namezd2zz__objectz00(BgL_classz00_2680); 
{ /* Llib/error.scm 1236 */
obj_t BgL_res2963z00_4287;
{ /* Llib/error.scm 1236 */
obj_t BgL_arg2216z00_4286;
BgL_arg2216z00_4286 = 
SYMBOL_TO_STRING(BgL_symz00_2682); 
BgL_res2963z00_4287 = 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg2216z00_4286); } 
return BgL_res2963z00_4287;} }  else 
{ /* Llib/error.scm 1233 */
return BGl_string3247z00zz__errorz00;} }  else 
{ /* Llib/error.scm 1228 */
if(
UCS2_STRINGP(BgL_objz00_133))
{ /* Llib/error.scm 1239 */
return BGl_string3248z00zz__errorz00;}  else 
{ /* Llib/error.scm 1239 */
if(
UCS2P(BgL_objz00_133))
{ /* Llib/error.scm 1241 */
return BGl_string3249z00zz__errorz00;}  else 
{ /* Llib/error.scm 1241 */
if(
ELONGP(BgL_objz00_133))
{ /* Llib/error.scm 1243 */
return BGl_string3250z00zz__errorz00;}  else 
{ /* Llib/error.scm 1243 */
if(
LLONGP(BgL_objz00_133))
{ /* Llib/error.scm 1245 */
return BGl_string3251z00zz__errorz00;}  else 
{ /* Llib/error.scm 1247 */
bool_t BgL_test3693z00_7414;
{ /* Llib/error.scm 1247 */
bool_t BgL_res2968z00_4292;
BgL_res2968z00_4292 = 
BGL_MUTEXP(BgL_objz00_133); 
BgL_test3693z00_7414 = BgL_res2968z00_4292; } 
if(BgL_test3693z00_7414)
{ /* Llib/error.scm 1247 */
return BGl_string3252z00zz__errorz00;}  else 
{ /* Llib/error.scm 1249 */
bool_t BgL_test3694z00_7416;
{ /* Llib/error.scm 1249 */
bool_t BgL_res2969z00_4293;
BgL_res2969z00_4293 = 
BGL_CONDVARP(BgL_objz00_133); 
BgL_test3694z00_7416 = BgL_res2969z00_4293; } 
if(BgL_test3694z00_7416)
{ /* Llib/error.scm 1249 */
return BGl_string3253z00zz__errorz00;}  else 
{ /* Llib/error.scm 1249 */
if(
BGL_DATEP(BgL_objz00_133))
{ /* Llib/error.scm 1251 */
return BGl_string3254z00zz__errorz00;}  else 
{ /* Llib/error.scm 1251 */
if(
BGL_HVECTORP(BgL_objz00_133))
{ /* Llib/error.scm 1254 */
obj_t BgL_tagz00_2692;
BgL_tagz00_2692 = 
BGl_homogeneouszd2vectorzd2infoz00zz__srfi4z00(BgL_objz00_133); 
{ /* Llib/error.scm 1255 */
obj_t BgL__z00_2693;obj_t BgL__z00_2694;obj_t BgL__z00_2695;
{ /* Llib/error.scm 1256 */
int BgL_tmpz00_7423;
BgL_tmpz00_7423 = 
(int)(((long)1)); 
BgL__z00_2693 = 
BGL_MVALUES_VAL(BgL_tmpz00_7423); } 
{ /* Llib/error.scm 1256 */
int BgL_tmpz00_7426;
BgL_tmpz00_7426 = 
(int)(((long)2)); 
BgL__z00_2694 = 
BGL_MVALUES_VAL(BgL_tmpz00_7426); } 
{ /* Llib/error.scm 1256 */
int BgL_tmpz00_7429;
BgL_tmpz00_7429 = 
(int)(((long)3)); 
BgL__z00_2695 = 
BGL_MVALUES_VAL(BgL_tmpz00_7429); } 
{ /* Llib/error.scm 1256 */
obj_t BgL_arg2122z00_2696;
{ /* Llib/error.scm 1256 */
obj_t BgL_res2971z00_4297;
{ /* Llib/error.scm 1256 */
obj_t BgL_arg2216z00_4296;
BgL_arg2216z00_4296 = 
SYMBOL_TO_STRING(
((obj_t)BgL_tagz00_2692)); 
BgL_res2971z00_4297 = 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg2216z00_4296); } 
BgL_arg2122z00_2696 = BgL_res2971z00_4297; } 
{ /* Llib/error.scm 1256 */
obj_t BgL_list2123z00_2697;
{ /* Llib/error.scm 1256 */
obj_t BgL_arg2125z00_2698;
BgL_arg2125z00_2698 = 
MAKE_YOUNG_PAIR(BGl_string3235z00zz__errorz00, BNIL); 
BgL_list2123z00_2697 = 
MAKE_YOUNG_PAIR(BgL_arg2122z00_2696, BgL_arg2125z00_2698); } 
return 
BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list2123z00_2697);} } } }  else 
{ /* Llib/error.scm 1253 */
if(
BIGNUMP(BgL_objz00_133))
{ /* Llib/error.scm 1257 */
return BGl_string3255z00zz__errorz00;}  else 
{ /* Llib/error.scm 1257 */
if(
BGL_MMAPP(BgL_objz00_133))
{ /* Llib/error.scm 1259 */
return BGl_string3256z00zz__errorz00;}  else 
{ /* Llib/error.scm 1261 */
bool_t BgL_test3699z00_7442;
{ /* Llib/error.scm 1261 */
bool_t BgL_res2973z00_4299;
BgL_res2973z00_4299 = 
BGL_REGEXPP(BgL_objz00_133); 
BgL_test3699z00_7442 = BgL_res2973z00_4299; } 
if(BgL_test3699z00_7442)
{ /* Llib/error.scm 1261 */
return BGl_string3257z00zz__errorz00;}  else 
{ /* Llib/error.scm 1261 */
if(
BGL_INT8P(BgL_objz00_133))
{ /* Llib/error.scm 1263 */
return BGl_string3258z00zz__errorz00;}  else 
{ /* Llib/error.scm 1263 */
if(
BGL_UINT8P(BgL_objz00_133))
{ /* Llib/error.scm 1265 */
return BGl_string3259z00zz__errorz00;}  else 
{ /* Llib/error.scm 1265 */
if(
BGL_INT16P(BgL_objz00_133))
{ /* Llib/error.scm 1267 */
return BGl_string3260z00zz__errorz00;}  else 
{ /* Llib/error.scm 1267 */
if(
BGL_UINT16P(BgL_objz00_133))
{ /* Llib/error.scm 1269 */
return BGl_string3261z00zz__errorz00;}  else 
{ /* Llib/error.scm 1269 */
if(
BGL_INT32P(BgL_objz00_133))
{ /* Llib/error.scm 1271 */
return BGl_string3262z00zz__errorz00;}  else 
{ /* Llib/error.scm 1271 */
if(
BGL_UINT32P(BgL_objz00_133))
{ /* Llib/error.scm 1273 */
return BGl_string3263z00zz__errorz00;}  else 
{ /* Llib/error.scm 1273 */
if(
BGL_INT64P(BgL_objz00_133))
{ /* Llib/error.scm 1275 */
return BGl_string3264z00zz__errorz00;}  else 
{ /* Llib/error.scm 1275 */
if(
BGL_UINT64P(BgL_objz00_133))
{ /* Llib/error.scm 1277 */
return BGl_string3265z00zz__errorz00;}  else 
{ /* Llib/error.scm 1277 */
if(
CNSTP(BgL_objz00_133))
{ /* Llib/error.scm 1279 */
return BGl_string3266z00zz__errorz00;}  else 
{ /* Llib/error.scm 1279 */
return 
string_to_bstring(
FOREIGN_TYPE_NAME(BgL_objz00_133));} } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } 

}



/* &typeof */
obj_t BGl_z62typeofz62zz__errorz00(obj_t BgL_envz00_4964, obj_t BgL_objz00_4965)
{
{ /* Llib/error.scm 1174 */
return 
bgl_typeof(BgL_objz00_4965);} 

}



/* find-runtime-type */
BGL_EXPORTED_DEF obj_t bgl_find_runtime_type(obj_t BgL_oz00_134)
{
{ /* Llib/error.scm 1287 */
return 
bgl_typeof(BgL_oz00_134);} 

}



/* &find-runtime-type */
obj_t BGl_z62findzd2runtimezd2typez62zz__errorz00(obj_t BgL_envz00_4966, obj_t BgL_oz00_4967)
{
{ /* Llib/error.scm 1287 */
return 
bgl_find_runtime_type(BgL_oz00_4967);} 

}



/* c-debugging-show-type */
BGL_EXPORTED_DEF char * bgl_show_type(obj_t BgL_objz00_135)
{
{ /* Llib/error.scm 1295 */
{ /* Llib/error.scm 1296 */
obj_t BgL_tz00_4309;
BgL_tz00_4309 = 
bgl_typeof(BgL_objz00_135); 
{ /* Llib/error.scm 1297 */
obj_t BgL_arg2138z00_4310;
{ /* Llib/error.scm 1297 */
obj_t BgL_res2983z00_4313;
{ /* Llib/error.scm 1297 */
obj_t BgL_tmpz00_7468;
BgL_tmpz00_7468 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2983z00_4313 = 
BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_7468); } 
BgL_arg2138z00_4310 = BgL_res2983z00_4313; } 
{ /* Llib/error.scm 1297 */
obj_t BgL_list2139z00_4311;
BgL_list2139z00_4311 = 
MAKE_YOUNG_PAIR(BgL_tz00_4309, BNIL); 
BGl_fprintz00zz__r4_output_6_10_3z00(BgL_arg2138z00_4310, BgL_list2139z00_4311); } } 
return 
BSTRING_TO_STRING(BgL_tz00_4309);} } 

}



/* &c-debugging-show-type */
obj_t BGl_z62czd2debuggingzd2showzd2typezb0zz__errorz00(obj_t BgL_envz00_4968, obj_t BgL_objz00_4969)
{
{ /* Llib/error.scm 1295 */
return 
string_to_bstring(
bgl_show_type(BgL_objz00_4969));} 

}



/* &try */
BGL_EXPORTED_DEF obj_t BGl_z62tryz62zz__errorz00(obj_t BgL_thunkz00_136, obj_t BgL_handlerz00_137)
{
{ /* Llib/error.scm 1303 */
return 
BGl_zc3z04exitza32140ze3ze70z60zz__errorz00(BgL_thunkz00_136, BgL_handlerz00_137);} 

}



/* <@exit:2140>~0 */
obj_t BGl_zc3z04exitza32140ze3ze70z60zz__errorz00(obj_t BgL_thunkz00_4986, obj_t BgL_handlerz00_4985)
{
{ /* Llib/error.scm 1304 */
jmp_buf_t jmpbuf; 
void * BgL_an_exit1127z00_2715;
if( SET_EXIT(BgL_an_exit1127z00_2715) ) { 
return 
BGL_EXIT_VALUE();
} else {
#if( SIGSETJMP_SAVESIGS == 0 )
  bgl_restore_signal_handlers();
#endif

BgL_an_exit1127z00_2715 = 
(void *)jmpbuf; 
{ /* Llib/error.scm 1304 */

PUSH_EXIT(BgL_an_exit1127z00_2715, ((long)1)); 
{ /* Llib/error.scm 1304 */
obj_t BgL_an_exitd1128z00_2716;
BgL_an_exitd1128z00_2716 = 
((obj_t)(&exitd)); 
{ /* Llib/error.scm 1304 */
obj_t BgL_escz00_4970;
BgL_escz00_4970 = 
MAKE_FX_PROCEDURE(BGl_z62escz62zz__errorz00, 
(int)(((long)1)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_escz00_4970, 
(int)(((long)0)), BgL_an_exitd1128z00_2716); 
{ /* Llib/error.scm 1304 */
obj_t BgL_res1130z00_2719;
{ /* Llib/error.scm 1307 */
obj_t BgL_zc3z04anonymousza32142ze3z87_4971;
BgL_zc3z04anonymousza32142ze3z87_4971 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza32142ze3ze5zz__errorz00, 
(int)(((long)1)), 
(int)(((long)3))); 
PROCEDURE_SET(BgL_zc3z04anonymousza32142ze3z87_4971, 
(int)(((long)0)), BgL_an_exitd1128z00_2716); 
PROCEDURE_SET(BgL_zc3z04anonymousza32142ze3z87_4971, 
(int)(((long)1)), BgL_handlerz00_4985); 
PROCEDURE_SET(BgL_zc3z04anonymousza32142ze3z87_4971, 
(int)(((long)2)), BgL_escz00_4970); 
BgL_res1130z00_2719 = 
BGl_withzd2exceptionzd2handlerz00zz__errorz00(BgL_zc3z04anonymousza32142ze3z87_4971, BgL_thunkz00_4986); } 
POP_EXIT(); 
return BgL_res1130z00_2719;} } } } 
} } 

}



/* &&try */
obj_t BGl_z62z62tryz00zz__errorz00(obj_t BgL_envz00_4972, obj_t BgL_thunkz00_4973, obj_t BgL_handlerz00_4974)
{
{ /* Llib/error.scm 1303 */
{ /* Llib/error.scm 1304 */
obj_t BgL_auxz00_7503;obj_t BgL_auxz00_7496;
if(
PROCEDUREP(BgL_handlerz00_4974))
{ /* Llib/error.scm 1304 */
BgL_auxz00_7503 = BgL_handlerz00_4974
; }  else 
{ 
obj_t BgL_auxz00_7506;
BgL_auxz00_7506 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3137z00zz__errorz00, 
BINT(((long)48740)), BGl_string3267z00zz__errorz00, BGl_string3147z00zz__errorz00, BgL_handlerz00_4974); 
FAILURE(BgL_auxz00_7506,BFALSE,BFALSE);} 
if(
PROCEDUREP(BgL_thunkz00_4973))
{ /* Llib/error.scm 1304 */
BgL_auxz00_7496 = BgL_thunkz00_4973
; }  else 
{ 
obj_t BgL_auxz00_7499;
BgL_auxz00_7499 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3137z00zz__errorz00, 
BINT(((long)48740)), BGl_string3267z00zz__errorz00, BGl_string3147z00zz__errorz00, BgL_thunkz00_4973); 
FAILURE(BgL_auxz00_7499,BFALSE,BFALSE);} 
return 
BGl_z62tryz62zz__errorz00(BgL_auxz00_7496, BgL_auxz00_7503);} } 

}



/* &<@anonymous:2142> */
obj_t BGl_z62zc3z04anonymousza32142ze3ze5zz__errorz00(obj_t BgL_envz00_4975, obj_t BgL_ez00_4979)
{
{ /* Llib/error.scm 1306 */
{ /* Llib/error.scm 1307 */
obj_t BgL_handlerz00_4977;obj_t BgL_escz00_4978;
BgL_handlerz00_4977 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_4975, 
(int)(((long)1)))); 
BgL_escz00_4978 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_4975, 
(int)(((long)2)))); 
if(
BGl_isazf3zf3zz__objectz00(BgL_ez00_4979, BGl_z62errorz62zz__objectz00))
{ /* Llib/error.scm 1307 */
{ /* Llib/error.scm 1309 */
obj_t BgL_arg2144z00_5040;obj_t BgL_arg2145z00_5041;obj_t BgL_arg2146z00_5042;
BgL_arg2144z00_5040 = 
(((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_ez00_4979)))->BgL_procz00); 
BgL_arg2145z00_5041 = 
(((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_ez00_4979)))->BgL_msgz00); 
BgL_arg2146z00_5042 = 
(((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_ez00_4979)))->BgL_objz00); 
PROCEDURE_ENTRY(BgL_handlerz00_4977)(BgL_handlerz00_4977, BgL_escz00_4978, BgL_arg2144z00_5040, BgL_arg2145z00_5041, BgL_arg2146z00_5042, BEOA); } 
{ /* Llib/error.scm 1310 */
obj_t BgL_list2147z00_5043;
BgL_list2147z00_5043 = 
MAKE_YOUNG_PAIR(
BINT(((long)4)), BNIL); 
return 
BGl_exitz00zz__errorz00(BgL_list2147z00_5043);} }  else 
{ /* Llib/error.scm 1307 */
return 
BGl_raisez00zz__errorz00(BgL_ez00_4979);} } } 

}



/* &esc */
obj_t BGl_z62escz62zz__errorz00(obj_t BgL_envz00_4980, obj_t BgL_val1129z00_4982)
{
{ /* Llib/error.scm 1304 */
return 
BGl_unwindzd2untilz12zc0zz__bexitz00(
PROCEDURE_REF(BgL_envz00_4980, 
(int)(((long)0))), BgL_val1129z00_4982);} 

}



/* notify-interrupt */
BGL_EXPORTED_DEF obj_t BGl_notifyzd2interruptzd2zz__errorz00(int BgL_sigz00_138)
{
{ /* Llib/error.scm 1317 */
{ /* Llib/error.scm 1318 */
obj_t BgL_notifyz00_4314;
BgL_notifyz00_4314 = 
BGL_INTERRUPT_NOTIFIER_GET(); 
if(
PROCEDUREP(BgL_notifyz00_4314))
{ /* Llib/error.scm 1319 */
return 
PROCEDURE_ENTRY(BgL_notifyz00_4314)(BgL_notifyz00_4314, 
BINT(BgL_sigz00_138), BEOA);}  else 
{ /* Llib/error.scm 1319 */
return 
BGl_defaultzd2interruptzd2notifierz00zz__errorz00(BgL_sigz00_138);} } } 

}



/* &notify-interrupt */
obj_t BGl_z62notifyzd2interruptzb0zz__errorz00(obj_t BgL_envz00_4983, obj_t BgL_sigz00_4984)
{
{ /* Llib/error.scm 1317 */
{ /* Llib/error.scm 1318 */
int BgL_auxz00_7548;
{ /* Llib/error.scm 1318 */
obj_t BgL_tmpz00_7549;
if(
INTEGERP(BgL_sigz00_4984))
{ /* Llib/error.scm 1318 */
BgL_tmpz00_7549 = BgL_sigz00_4984
; }  else 
{ 
obj_t BgL_auxz00_7552;
BgL_auxz00_7552 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3137z00zz__errorz00, 
BINT(((long)49202)), BGl_string3268z00zz__errorz00, BGl_string3139z00zz__errorz00, BgL_sigz00_4984); 
FAILURE(BgL_auxz00_7552,BFALSE,BFALSE);} 
BgL_auxz00_7548 = 
CINT(BgL_tmpz00_7549); } 
return 
BGl_notifyzd2interruptzd2zz__errorz00(BgL_auxz00_7548);} } 

}



/* default-interrupt-notifier */
obj_t BGl_defaultzd2interruptzd2notifierz00zz__errorz00(int BgL_sigz00_139)
{
{ /* Llib/error.scm 1327 */
{ /* Llib/error.scm 1328 */
obj_t BgL_portz00_2732;
{ /* Llib/error.scm 1328 */
obj_t BgL_res2985z00_4318;
{ /* Llib/error.scm 1328 */
obj_t BgL_tmpz00_7558;
BgL_tmpz00_7558 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2985z00_4318 = 
BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_7558); } 
BgL_portz00_2732 = BgL_res2985z00_4318; } 
{ /* Llib/error.scm 1329 */
obj_t BgL_list2149z00_2733;
BgL_list2149z00_2733 = 
MAKE_YOUNG_PAIR(BgL_portz00_2732, BNIL); 
BGl_newlinez00zz__r4_output_6_10_3z00(BgL_list2149z00_2733); } 
{ /* Llib/error.scm 1330 */
obj_t BgL_list2150z00_2734;
BgL_list2150z00_2734 = 
MAKE_YOUNG_PAIR(BGl_string3269z00zz__errorz00, BNIL); 
BGl_fprintz00zz__r4_output_6_10_3z00(BgL_portz00_2732, BgL_list2150z00_2734); } 
return 
bgl_flush_output_port(BgL_portz00_2732);} } 

}



/* &sigfpe-error-handler */
obj_t BGl_z62sigfpezd2errorzd2handlerz62zz__errorz00(obj_t BgL_envz00_4823, obj_t BgL_nz00_4824)
{
{ /* Llib/error.scm 1336 */
{ /* Llib/error.scm 457 */
BgL_z62errorz62_bglt BgL_arg1448z00_5044;
{ /* Llib/error.scm 457 */
BgL_z62errorz62_bglt BgL_new1078z00_5045;
{ /* Llib/error.scm 457 */
BgL_z62errorz62_bglt BgL_new1077z00_5046;
BgL_new1077z00_5046 = 
((BgL_z62errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62errorz62_bgl) ))); 
{ /* Llib/error.scm 457 */
long BgL_arg1452z00_5047;
{ /* Llib/error.scm 457 */
long BgL_res2674z00_5048;
BgL_res2674z00_5048 = 
BGL_CLASS_INDEX(BGl_z62errorz62zz__objectz00); 
BgL_arg1452z00_5047 = BgL_res2674z00_5048; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1077z00_5046), BgL_arg1452z00_5047); } 
BgL_new1078z00_5045 = BgL_new1077z00_5046; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1078z00_5045)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1078z00_5045)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_7574;
{ /* Llib/error.scm 457 */
obj_t BgL_arg1449z00_5049;
{ /* Llib/error.scm 457 */
obj_t BgL_arg1451z00_5050;
{ /* Llib/error.scm 457 */
obj_t BgL_res2675z00_5051;
{ /* Llib/error.scm 457 */
obj_t BgL_classz00_5052;
BgL_classz00_5052 = BGl_z62errorz62zz__objectz00; 
BgL_res2675z00_5051 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_5052); } 
BgL_arg1451z00_5050 = BgL_res2675z00_5051; } 
BgL_arg1449z00_5049 = 
VECTOR_REF(BgL_arg1451z00_5050,((long)2)); } 
BgL_auxz00_7574 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_arg1449z00_5049); } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1078z00_5045)))->BgL_stackz00)=((obj_t)BgL_auxz00_7574),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(BgL_new1078z00_5045))->BgL_procz00)=((obj_t)BGl_string3270z00zz__errorz00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(BgL_new1078z00_5045))->BgL_msgz00)=((obj_t)BGl_string3271z00zz__errorz00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(BgL_new1078z00_5045))->BgL_objz00)=((obj_t)BGl_string3272z00zz__errorz00),BUNSPEC); 
BgL_arg1448z00_5044 = BgL_new1078z00_5045; } 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg1448z00_5044));} } 

}



/* &sigill-error-handler */
obj_t BGl_z62sigillzd2errorzd2handlerz62zz__errorz00(obj_t BgL_envz00_4825, obj_t BgL_nz00_4826)
{
{ /* Llib/error.scm 1342 */
{ /* Llib/error.scm 457 */
BgL_z62errorz62_bglt BgL_arg1448z00_5053;
{ /* Llib/error.scm 457 */
BgL_z62errorz62_bglt BgL_new1078z00_5054;
{ /* Llib/error.scm 457 */
BgL_z62errorz62_bglt BgL_new1077z00_5055;
BgL_new1077z00_5055 = 
((BgL_z62errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62errorz62_bgl) ))); 
{ /* Llib/error.scm 457 */
long BgL_arg1452z00_5056;
{ /* Llib/error.scm 457 */
long BgL_res2674z00_5057;
BgL_res2674z00_5057 = 
BGL_CLASS_INDEX(BGl_z62errorz62zz__objectz00); 
BgL_arg1452z00_5056 = BgL_res2674z00_5057; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1077z00_5055), BgL_arg1452z00_5056); } 
BgL_new1078z00_5054 = BgL_new1077z00_5055; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1078z00_5054)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1078z00_5054)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_7593;
{ /* Llib/error.scm 457 */
obj_t BgL_arg1449z00_5058;
{ /* Llib/error.scm 457 */
obj_t BgL_arg1451z00_5059;
{ /* Llib/error.scm 457 */
obj_t BgL_res2675z00_5060;
{ /* Llib/error.scm 457 */
obj_t BgL_classz00_5061;
BgL_classz00_5061 = BGl_z62errorz62zz__objectz00; 
BgL_res2675z00_5060 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_5061); } 
BgL_arg1451z00_5059 = BgL_res2675z00_5060; } 
BgL_arg1449z00_5058 = 
VECTOR_REF(BgL_arg1451z00_5059,((long)2)); } 
BgL_auxz00_7593 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_arg1449z00_5058); } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1078z00_5054)))->BgL_stackz00)=((obj_t)BgL_auxz00_7593),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(BgL_new1078z00_5054))->BgL_procz00)=((obj_t)BGl_string3273z00zz__errorz00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(BgL_new1078z00_5054))->BgL_msgz00)=((obj_t)BGl_string3274z00zz__errorz00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(BgL_new1078z00_5054))->BgL_objz00)=((obj_t)BGl_string3272z00zz__errorz00),BUNSPEC); 
BgL_arg1448z00_5053 = BgL_new1078z00_5054; } 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg1448z00_5053));} } 

}



/* &sigbus-error-handler */
obj_t BGl_z62sigbuszd2errorzd2handlerz62zz__errorz00(obj_t BgL_envz00_4827, obj_t BgL_nz00_4828)
{
{ /* Llib/error.scm 1348 */
{ /* Llib/error.scm 457 */
BgL_z62errorz62_bglt BgL_arg1448z00_5062;
{ /* Llib/error.scm 457 */
BgL_z62errorz62_bglt BgL_new1078z00_5063;
{ /* Llib/error.scm 457 */
BgL_z62errorz62_bglt BgL_new1077z00_5064;
BgL_new1077z00_5064 = 
((BgL_z62errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62errorz62_bgl) ))); 
{ /* Llib/error.scm 457 */
long BgL_arg1452z00_5065;
{ /* Llib/error.scm 457 */
long BgL_res2674z00_5066;
BgL_res2674z00_5066 = 
BGL_CLASS_INDEX(BGl_z62errorz62zz__objectz00); 
BgL_arg1452z00_5065 = BgL_res2674z00_5066; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1077z00_5064), BgL_arg1452z00_5065); } 
BgL_new1078z00_5063 = BgL_new1077z00_5064; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1078z00_5063)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1078z00_5063)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_7612;
{ /* Llib/error.scm 457 */
obj_t BgL_arg1449z00_5067;
{ /* Llib/error.scm 457 */
obj_t BgL_arg1451z00_5068;
{ /* Llib/error.scm 457 */
obj_t BgL_res2675z00_5069;
{ /* Llib/error.scm 457 */
obj_t BgL_classz00_5070;
BgL_classz00_5070 = BGl_z62errorz62zz__objectz00; 
BgL_res2675z00_5069 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_5070); } 
BgL_arg1451z00_5068 = BgL_res2675z00_5069; } 
BgL_arg1449z00_5067 = 
VECTOR_REF(BgL_arg1451z00_5068,((long)2)); } 
BgL_auxz00_7612 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_arg1449z00_5067); } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1078z00_5063)))->BgL_stackz00)=((obj_t)BgL_auxz00_7612),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(BgL_new1078z00_5063))->BgL_procz00)=((obj_t)BGl_string3273z00zz__errorz00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(BgL_new1078z00_5063))->BgL_msgz00)=((obj_t)BGl_string3275z00zz__errorz00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(BgL_new1078z00_5063))->BgL_objz00)=((obj_t)BGl_string3272z00zz__errorz00),BUNSPEC); 
BgL_arg1448z00_5062 = BgL_new1078z00_5063; } 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg1448z00_5062));} } 

}



/* &sigsegv-error-handler */
obj_t BGl_z62sigsegvzd2errorzd2handlerz62zz__errorz00(obj_t BgL_envz00_4829, obj_t BgL_nz00_4830)
{
{ /* Llib/error.scm 1354 */
{ /* Llib/error.scm 457 */
BgL_z62errorz62_bglt BgL_arg1448z00_5071;
{ /* Llib/error.scm 457 */
BgL_z62errorz62_bglt BgL_new1078z00_5072;
{ /* Llib/error.scm 457 */
BgL_z62errorz62_bglt BgL_new1077z00_5073;
BgL_new1077z00_5073 = 
((BgL_z62errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62errorz62_bgl) ))); 
{ /* Llib/error.scm 457 */
long BgL_arg1452z00_5074;
{ /* Llib/error.scm 457 */
long BgL_res2674z00_5075;
BgL_res2674z00_5075 = 
BGL_CLASS_INDEX(BGl_z62errorz62zz__objectz00); 
BgL_arg1452z00_5074 = BgL_res2674z00_5075; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1077z00_5073), BgL_arg1452z00_5074); } 
BgL_new1078z00_5072 = BgL_new1077z00_5073; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1078z00_5072)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1078z00_5072)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_7631;
{ /* Llib/error.scm 457 */
obj_t BgL_arg1449z00_5076;
{ /* Llib/error.scm 457 */
obj_t BgL_arg1451z00_5077;
{ /* Llib/error.scm 457 */
obj_t BgL_res2675z00_5078;
{ /* Llib/error.scm 457 */
obj_t BgL_classz00_5079;
BgL_classz00_5079 = BGl_z62errorz62zz__objectz00; 
BgL_res2675z00_5078 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_5079); } 
BgL_arg1451z00_5077 = BgL_res2675z00_5078; } 
BgL_arg1449z00_5076 = 
VECTOR_REF(BgL_arg1451z00_5077,((long)2)); } 
BgL_auxz00_7631 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_arg1449z00_5076); } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1078z00_5072)))->BgL_stackz00)=((obj_t)BgL_auxz00_7631),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(BgL_new1078z00_5072))->BgL_procz00)=((obj_t)BGl_string3273z00zz__errorz00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(BgL_new1078z00_5072))->BgL_msgz00)=((obj_t)BGl_string3276z00zz__errorz00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(BgL_new1078z00_5072))->BgL_objz00)=((obj_t)BGl_string3272z00zz__errorz00),BUNSPEC); 
BgL_arg1448z00_5071 = BgL_new1078z00_5072; } 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg1448z00_5071));} } 

}



/* object-init */
obj_t BGl_objectzd2initzd2zz__errorz00()
{
{ /* Llib/error.scm 18 */
return BUNSPEC;} 

}



/* generic-init */
obj_t BGl_genericzd2initzd2zz__errorz00()
{
{ /* Llib/error.scm 18 */
return BUNSPEC;} 

}



/* method-init */
obj_t BGl_methodzd2initzd2zz__errorz00()
{
{ /* Llib/error.scm 18 */
return BUNSPEC;} 

}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__errorz00()
{
{ /* Llib/error.scm 18 */
BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(((long)323064336), 
BSTRING_TO_STRING(BGl_string3277z00zz__errorz00)); 
return 
BGl_modulezd2initializa7ationz75zz__objectz00(((long)193422032), 
BSTRING_TO_STRING(BGl_string3277z00zz__errorz00));} 

}

#ifdef __cplusplus
}
#endif
