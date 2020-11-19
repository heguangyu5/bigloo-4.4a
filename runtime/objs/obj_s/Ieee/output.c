/*===========================================================================*/
/*   (Ieee/output.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -c Ieee/output.scm -indent -o objs/obj_s/Ieee/output.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif

/* object type definitions */

static obj_t BGl_z62newlinez62zz__r4_output_6_10_3z00(obj_t, obj_t);
static obj_t BGl_writezf2displayzd2vectorz20zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
extern obj_t BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(obj_t, obj_t);
extern obj_t bgl_write_utf8string(obj_t, obj_t);
static obj_t BGl_displayzd2pairzd2zz__r4_output_6_10_3z00(obj_t, obj_t);
extern obj_t bgl_write_ucs2(obj_t, obj_t);
extern obj_t bgl_write_binary_port(obj_t, obj_t);
extern obj_t symbol_for_read(obj_t);
static obj_t BGl_requirezd2initializa7ationz75zz__r4_output_6_10_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t bgl_display_obj(obj_t, obj_t);
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_displayzd2stringzd2zz__r4_output_6_10_3z00(obj_t, obj_t);
extern obj_t bgl_display_ucs2string(obj_t, obj_t);
static obj_t BGl_z62illegalzd2charzd2repz62zz__r4_output_6_10_3z00(obj_t, obj_t);
extern obj_t bgl_write_output_port(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_writezd2stringzd2zz__r4_output_6_10_3z00(obj_t, obj_t);
extern obj_t bgl_write_cnst(obj_t, obj_t);
extern obj_t weakptr_data(obj_t);
static obj_t BGl_z62displayzd2flonumzb0zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
extern obj_t bgl_write_procedure(obj_t, obj_t);
static obj_t BGl_toplevelzd2initzd2zz__r4_output_6_10_3z00();
extern obj_t bgl_write_char(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
static obj_t BGl_z62writeza2zc0zz__r4_output_6_10_3z00(obj_t, obj_t);
extern obj_t BGl_objectzd2displayzd2zz__objectz00(BgL_objectz00_bglt, obj_t);
static obj_t BGl_genericzd2initzd2zz__r4_output_6_10_3z00();
static obj_t BGl_objectzd2initzd2zz__r4_output_6_10_3z00();
extern obj_t BGl_stringzd2skipzd2zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
extern obj_t BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(obj_t);
static obj_t BGl_z62displayzd2ucs2stringzb0zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
static obj_t BGl__writezd2bytezd2zz__r4_output_6_10_3z00(obj_t, obj_t);
static obj_t BGl_symbol2958z00zz__r4_output_6_10_3z00 = BUNSPEC;
static obj_t BGl_z62printfz62zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
extern obj_t bgl_write_custom(obj_t, obj_t);
extern obj_t bgl_write_bignum(obj_t, obj_t);
static obj_t BGl_list3106z00zz__r4_output_6_10_3z00 = BUNSPEC;
extern obj_t string_append_3(obj_t, obj_t, obj_t);
static obj_t BGl_list3109z00zz__r4_output_6_10_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_printz00zz__r4_output_6_10_3z00(obj_t);
static obj_t BGl_symbol2964z00zz__r4_output_6_10_3z00 = BUNSPEC;
extern obj_t bgl_write_unknown(obj_t, obj_t);
static obj_t BGl_z62displayzd2substringzb0zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t, obj_t, obj_t);
extern obj_t BGl_tvectorzd2refzd2zz__tvectorz00(obj_t);
static obj_t BGl_list3114z00zz__r4_output_6_10_3z00 = BUNSPEC;
static obj_t BGl_list3119z00zz__r4_output_6_10_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_writezd2bytezd2zz__r4_output_6_10_3z00(unsigned char, obj_t);
extern obj_t bstring_to_symbol(obj_t);
BGL_EXPORTED_DECL obj_t BGl_writezd2ucs2stringzd2zz__r4_output_6_10_3z00(obj_t, obj_t);
static obj_t BGl_z62writezd2bytezd22z62zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62newlinezd21zb0zz__r4_output_6_10_3z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_fprintfz00zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62writezd2symbolzb0zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_displayzd2flonumzd2zz__r4_output_6_10_3z00(obj_t, obj_t);
static obj_t BGl_list3122z00zz__r4_output_6_10_3z00 = BUNSPEC;
static obj_t BGl_z62displayzd2elongzb0zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_writez00zz__r4_output_6_10_3z00(obj_t, obj_t);
static obj_t BGl_z62writezd22zb0zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62writezd2charzd22z62zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_methodzd2initzd2zz__r4_output_6_10_3z00();
static obj_t BGl_symbol2995z00zz__r4_output_6_10_3z00 = BUNSPEC;
extern obj_t BGl_objectzd2writezd2zz__objectz00(BgL_objectz00_bglt, obj_t);
static obj_t BGl_symbol2999z00zz__r4_output_6_10_3z00 = BUNSPEC;
static obj_t BGl_writezf2displayzd2structurez20zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
extern obj_t BGl_tvectorzd2idzd2zz__tvectorz00(obj_t);
extern obj_t bgl_write_input_port(obj_t, obj_t);
extern obj_t bgl_display_llong(BGL_LONGLONG_T, obj_t);
static obj_t BGl_list3067z00zz__r4_output_6_10_3z00 = BUNSPEC;
static obj_t BGl_z62printz62zz__r4_output_6_10_3z00(obj_t, obj_t);
static obj_t BGl_z62displayz62zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_tprintzd2mutexzd2zz__r4_output_6_10_3z00 = BUNSPEC;
extern obj_t make_string(long, unsigned char);
extern obj_t bgl_write_mmap(obj_t, obj_t);
static obj_t BGl_list3077z00zz__r4_output_6_10_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_newlinezd21zd2zz__r4_output_6_10_3z00(obj_t);
extern obj_t BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(obj_t);
extern obj_t bgl_write_dynamic_env(obj_t, obj_t);
static obj_t BGl_list3080z00zz__r4_output_6_10_3z00 = BUNSPEC;
static obj_t BGl_list3084z00zz__r4_output_6_10_3z00 = BUNSPEC;
static obj_t BGl_list3088z00zz__r4_output_6_10_3z00 = BUNSPEC;
static obj_t BGl_z62writez62zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_fprintz00zz__r4_output_6_10_3z00(obj_t, obj_t);
extern obj_t BGl_datezd2ze3stringz31zz__datez00(obj_t);
static obj_t BGl_z62displayza2zc0zz__r4_output_6_10_3z00(obj_t, obj_t);
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
static obj_t BGl_list3091z00zz__r4_output_6_10_3z00 = BUNSPEC;
extern obj_t bgl_ill_char_rep(unsigned char);
static obj_t BGl_list3095z00zz__r4_output_6_10_3z00 = BUNSPEC;
static obj_t BGl_z62formatz62zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
extern obj_t bgl_display_bignum(obj_t, obj_t);
static obj_t BGl_list3099z00zz__r4_output_6_10_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_newlinez00zz__r4_output_6_10_3z00(obj_t);
extern obj_t bgl_close_output_port(obj_t);
static obj_t BGl_z62writezd2ucs2stringzb0zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
extern obj_t bgl_write_llong(BGL_LONGLONG_T, obj_t);
extern obj_t BGl_substringz00zz__r4_strings_6_7z00(obj_t, long, long);
extern obj_t bgl_display_elong(long, obj_t);
extern obj_t bgl_write_datagram_socket(obj_t, obj_t);
extern bool_t BGl_bigloozd2strictzd2r5rszd2stringszd2zz__paramz00();
static obj_t BGl_z62writezd2stringzb0zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol3002z00zz__r4_output_6_10_3z00 = BUNSPEC;
extern obj_t string_for_read(obj_t);
static obj_t BGl_z62displayzd2fixnumzb0zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__srfi4z00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonum_dtoaz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
extern obj_t bgl_display_ucs2(obj_t, obj_t);
extern obj_t bgl_write_socket(obj_t, obj_t);
extern bool_t BGl_classzf3zf3zz__objectz00(obj_t);
extern obj_t bgl_write_elong(long, obj_t);
extern obj_t ucs2_string_to_utf8_string(obj_t);
extern bool_t BGl_numberzf3zf3zz__r4_numbers_6_5z00(obj_t);
static obj_t BGl__writezd2charzd2zz__r4_output_6_10_3z00(obj_t, obj_t);
static obj_t BGl_symbol3100z00zz__r4_output_6_10_3z00 = BUNSPEC;
static obj_t BGl_symbol3102z00zz__r4_output_6_10_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_tprintz00zz__r4_output_6_10_3z00(obj_t, obj_t);
static obj_t BGl_symbol3104z00zz__r4_output_6_10_3z00 = BUNSPEC;
extern obj_t bgl_write_process(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_displayzd2ucs2stringzd2zz__r4_output_6_10_3z00(obj_t, obj_t);
static obj_t BGl_symbol3107z00zz__r4_output_6_10_3z00 = BUNSPEC;
static obj_t BGl_writezf2displayzd2hvectorz20zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62displayzd2symbolzb0zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_cnstzd2initzd2zz__r4_output_6_10_3z00();
static obj_t BGl_symbol3110z00zz__r4_output_6_10_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_displayzd2elongzd2zz__r4_output_6_10_3z00(long, obj_t);
extern obj_t BGl_stringzd2indexzd2zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol3115z00zz__r4_output_6_10_3z00 = BUNSPEC;
static obj_t BGl_symbol3117z00zz__r4_output_6_10_3z00 = BUNSPEC;
static obj_t BGl_xprintfz00zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_gczd2rootszd2initz00zz__r4_output_6_10_3z00();
static obj_t BGl_importedzd2moduleszd2initz00zz__r4_output_6_10_3z00();
BGL_EXPORTED_DECL obj_t BGl_writezd2charzd2zz__r4_output_6_10_3z00(unsigned char, obj_t);
static obj_t BGl_symbol3120z00zz__r4_output_6_10_3z00 = BUNSPEC;
static obj_t BGl_symbol3041z00zz__r4_output_6_10_3z00 = BUNSPEC;
static obj_t BGl_symbol3123z00zz__r4_output_6_10_3z00 = BUNSPEC;
static obj_t BGl_symbol3043z00zz__r4_output_6_10_3z00 = BUNSPEC;
extern obj_t bgl_display_fixnum(obj_t, obj_t);
static obj_t BGl_symbol3049z00zz__r4_output_6_10_3z00 = BUNSPEC;
extern obj_t bgl_write_semaphore(obj_t, obj_t);
extern obj_t bgl_write_foreign(obj_t, obj_t);
extern obj_t BGl_homogeneouszd2vectorzd2infoz00zz__srfi4z00(obj_t);
extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
extern obj_t BGl_displayzd2circlezd2zz__pp_circlez00(obj_t, obj_t);
static obj_t BGl_writezd2pairzd2zz__r4_output_6_10_3z00(obj_t, obj_t);
extern obj_t BGl_writezd2circlezd2zz__pp_circlez00(obj_t, obj_t);
static obj_t BGl_z62fprintz62zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_displayzd2fixnumzd2zz__r4_output_6_10_3z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_displayza2za2zz__r4_output_6_10_3z00(obj_t);
extern obj_t BGl_classzd2namezd2zz__objectz00(obj_t);
static obj_t BGl_symbol3068z00zz__r4_output_6_10_3z00 = BUNSPEC;
extern obj_t bgl_write_regexp(obj_t, obj_t);
extern obj_t bgl_write_opaque(obj_t, obj_t);
extern obj_t bgl_write_string(obj_t, bool_t, obj_t);
static obj_t BGl_z62fprintfz62zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_symbol3070z00zz__r4_output_6_10_3z00 = BUNSPEC;
static obj_t BGl_symbol3072z00zz__r4_output_6_10_3z00 = BUNSPEC;
static obj_t BGl_symbol3074z00zz__r4_output_6_10_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t bgl_write_obj(obj_t, obj_t);
static obj_t BGl_symbol3078z00zz__r4_output_6_10_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_displayzd2symbolzd2zz__r4_output_6_10_3z00(obj_t, obj_t);
static obj_t BGl_symbol3081z00zz__r4_output_6_10_3z00 = BUNSPEC;
static obj_t BGl_symbol3085z00zz__r4_output_6_10_3z00 = BUNSPEC;
extern obj_t BGl_bigloozd2typezd2errorz00zz__errorz00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol3089z00zz__r4_output_6_10_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_writezd2bytezd22z00zz__r4_output_6_10_3z00(unsigned char, obj_t);
BGL_EXPORTED_DECL obj_t BGl_writezd2symbolzd2zz__r4_output_6_10_3z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_writeza2za2zz__r4_output_6_10_3z00(obj_t);
extern obj_t BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(obj_t, obj_t, obj_t, obj_t, int, int);
static obj_t BGl_printzd2flatzd2listze70ze7zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol3092z00zz__r4_output_6_10_3z00 = BUNSPEC;
static obj_t BGl_symbol3096z00zz__r4_output_6_10_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_displayzd2substringzd2zz__r4_output_6_10_3z00(obj_t, long, long, obj_t);
BGL_EXPORTED_DECL obj_t BGl_displayz00zz__r4_output_6_10_3z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_writezd2charzd22z00zz__r4_output_6_10_3z00(unsigned char, obj_t);
BGL_EXPORTED_DECL obj_t BGl_illegalzd2charzd2repz00zz__r4_output_6_10_3z00(unsigned char);
static obj_t BGl_z62displayzd2stringzb0zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_writezf2displayzd2tvectorz20zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_printfz00zz__r4_output_6_10_3z00(obj_t, obj_t);
extern obj_t bgl_real_to_string(double);
static obj_t BGl_writezd2mutexzd2zz__r4_output_6_10_3z00(obj_t, obj_t);
static obj_t BGl_z62displayzd22zb0zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62tprintz62zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_displayzd2fixnumzd2envz00zz__r4_output_6_10_3z00, BgL_bgl_za762displayza7d2fix3131z00, BGl_z62displayzd2fixnumzb0zz__r4_output_6_10_3z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_illegalzd2charzd2repzd2envzd2zz__r4_output_6_10_3z00, BgL_bgl_za762illegalza7d2cha3132z00, BGl_z62illegalzd2charzd2repz62zz__r4_output_6_10_3z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3010z00zz__r4_output_6_10_3z00, BgL_bgl_string3010za700za7za7_3133za7, "display-2", 9 );
DEFINE_STRING( BGl_string3011z00zz__r4_output_6_10_3z00, BgL_bgl_string3011za700za7za7_3134za7, "class", 5 );
DEFINE_STRING( BGl_string3012z00zz__r4_output_6_10_3z00, BgL_bgl_string3012za700za7za7_3135za7, ">", 1 );
DEFINE_STRING( BGl_string3013z00zz__r4_output_6_10_3z00, BgL_bgl_string3013za700za7za7_3136za7, "#<condition-variable:", 21 );
DEFINE_STRING( BGl_string3014z00zz__r4_output_6_10_3z00, BgL_bgl_string3014za700za7za7_3137za7, "condvar", 7 );
DEFINE_STRING( BGl_string3015z00zz__r4_output_6_10_3z00, BgL_bgl_string3015za700za7za7_3138za7, "#<cell:", 7 );
DEFINE_STRING( BGl_string3016z00zz__r4_output_6_10_3z00, BgL_bgl_string3016za700za7za7_3139za7, "#eof-object", 11 );
DEFINE_STRING( BGl_string3017z00zz__r4_output_6_10_3z00, BgL_bgl_string3017za700za7za7_3140za7, "#!optional", 10 );
DEFINE_STRING( BGl_string3018z00zz__r4_output_6_10_3z00, BgL_bgl_string3018za700za7za7_3141za7, "#!rest", 6 );
DEFINE_STRING( BGl_string3019z00zz__r4_output_6_10_3z00, BgL_bgl_string3019za700za7za7_3142za7, "#!key", 5 );
DEFINE_STRING( BGl_string3101z00zz__r4_output_6_10_3z00, BgL_bgl_string3101za700za7za7_3143za7, "tvector-ref", 11 );
DEFINE_STRING( BGl_string3020z00zz__r4_output_6_10_3z00, BgL_bgl_string3020za700za7za7_3144za7, "#<output_string_port>", 21 );
DEFINE_STRING( BGl_string3021z00zz__r4_output_6_10_3z00, BgL_bgl_string3021za700za7za7_3145za7, "#<output_procedure_port>", 24 );
DEFINE_STRING( BGl_string3103z00zz__r4_output_6_10_3z00, BgL_bgl_string3103za700za7za7_3146za7, "tvec", 4 );
DEFINE_STRING( BGl_string3022z00zz__r4_output_6_10_3z00, BgL_bgl_string3022za700za7za7_3147za7, "#<weakptr:", 10 );
DEFINE_STRING( BGl_string3023z00zz__r4_output_6_10_3z00, BgL_bgl_string3023za700za7za7_3148za7, "process", 7 );
DEFINE_STRING( BGl_string3105z00zz__r4_output_6_10_3z00, BgL_bgl_string3105za700za7za7_3149za7, "i", 1 );
DEFINE_STRING( BGl_string3024z00zz__r4_output_6_10_3z00, BgL_bgl_string3024za700za7za7_3150za7, "socket", 6 );
DEFINE_STRING( BGl_string3025z00zz__r4_output_6_10_3z00, BgL_bgl_string3025za700za7za7_3151za7, "datagram-socket", 15 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_writezd22zd2envz00zz__r4_output_6_10_3z00, BgL_bgl_za762writeza7d22za7b0za73152z00, BGl_z62writezd22zb0zz__r4_output_6_10_3z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string3026z00zz__r4_output_6_10_3z00, BgL_bgl_string3026za700za7za7_3153za7, "regexp", 6 );
DEFINE_STRING( BGl_string3108z00zz__r4_output_6_10_3z00, BgL_bgl_string3108za700za7za7_3154za7, "arg1663", 7 );
DEFINE_STRING( BGl_string3027z00zz__r4_output_6_10_3z00, BgL_bgl_string3027za700za7za7_3155za7, "mmap", 4 );
DEFINE_STRING( BGl_string3028z00zz__r4_output_6_10_3z00, BgL_bgl_string3028za700za7za7_3156za7, "semaphore", 9 );
DEFINE_STRING( BGl_string3029z00zz__r4_output_6_10_3z00, BgL_bgl_string3029za700za7za7_3157za7, "write-2", 7 );
DEFINE_STRING( BGl_string3111z00zz__r4_output_6_10_3z00, BgL_bgl_string3111za700za7za7_3158za7, "arg1664", 7 );
DEFINE_STRING( BGl_string3030z00zz__r4_output_6_10_3z00, BgL_bgl_string3030za700za7za7_3159za7, "#<date:", 7 );
DEFINE_STRING( BGl_string3112z00zz__r4_output_6_10_3z00, BgL_bgl_string3112za700za7za7_3160za7, "...)", 4 );
DEFINE_STRING( BGl_string3031z00zz__r4_output_6_10_3z00, BgL_bgl_string3031za700za7za7_3161za7, "#s8:", 4 );
DEFINE_STRING( BGl_string3113z00zz__r4_output_6_10_3z00, BgL_bgl_string3113za700za7za7_3162za7, "write/display-hvector", 21 );
DEFINE_STRING( BGl_string3032z00zz__r4_output_6_10_3z00, BgL_bgl_string3032za700za7za7_3163za7, "#u8:", 4 );
DEFINE_STRING( BGl_string3033z00zz__r4_output_6_10_3z00, BgL_bgl_string3033za700za7za7_3164za7, "#s16:", 5 );
DEFINE_STRING( BGl_string3034z00zz__r4_output_6_10_3z00, BgL_bgl_string3034za700za7za7_3165za7, "#u16:", 5 );
DEFINE_STRING( BGl_string3116z00zz__r4_output_6_10_3z00, BgL_bgl_string3116za700za7za7_3166za7, "vref", 4 );
DEFINE_STRING( BGl_string3035z00zz__r4_output_6_10_3z00, BgL_bgl_string3035za700za7za7_3167za7, "#s32:", 5 );
DEFINE_STRING( BGl_string3036z00zz__r4_output_6_10_3z00, BgL_bgl_string3036za700za7za7_3168za7, "#u32:", 5 );
DEFINE_STRING( BGl_string3118z00zz__r4_output_6_10_3z00, BgL_bgl_string3118za700za7za7_3169za7, "svec", 4 );
DEFINE_STRING( BGl_string3037z00zz__r4_output_6_10_3z00, BgL_bgl_string3037za700za7za7_3170za7, "#s64:", 5 );
DEFINE_STRING( BGl_string3038z00zz__r4_output_6_10_3z00, BgL_bgl_string3038za700za7za7_3171za7, "#u64:", 5 );
DEFINE_STRING( BGl_string3039z00zz__r4_output_6_10_3z00, BgL_bgl_string3039za700za7za7_3172za7, "&display-symbol", 15 );
DEFINE_STRING( BGl_string3121z00zz__r4_output_6_10_3z00, BgL_bgl_string3121za700za7za7_3173za7, "arg1675", 7 );
DEFINE_STRING( BGl_string3040z00zz__r4_output_6_10_3z00, BgL_bgl_string3040za700za7za7_3174za7, "symbol", 6 );
DEFINE_STRING( BGl_string3042z00zz__r4_output_6_10_3z00, BgL_bgl_string3042za700za7za7_3175za7, "+", 1 );
DEFINE_STRING( BGl_string3124z00zz__r4_output_6_10_3z00, BgL_bgl_string3124za700za7za7_3176za7, "arg1683", 7 );
DEFINE_STRING( BGl_string3125z00zz__r4_output_6_10_3z00, BgL_bgl_string3125za700za7za7_3177za7, "__r4_output_6_10_3", 18 );
DEFINE_STRING( BGl_string3044z00zz__r4_output_6_10_3z00, BgL_bgl_string3044za700za7za7_3178za7, "-", 1 );
DEFINE_STRING( BGl_string3045z00zz__r4_output_6_10_3z00, BgL_bgl_string3045za700za7za7_3179za7, "|", 1 );
DEFINE_STRING( BGl_string3046z00zz__r4_output_6_10_3z00, BgL_bgl_string3046za700za7za7_3180za7, "&write-symbol", 13 );
DEFINE_STRING( BGl_string3047z00zz__r4_output_6_10_3z00, BgL_bgl_string3047za700za7za7_3181za7, "&display-string", 15 );
DEFINE_STRING( BGl_string3048z00zz__r4_output_6_10_3z00, BgL_bgl_string3048za700za7za7_3182za7, "Illegal index, start=~a end=~a", 30 );
DEFINE_STRING( BGl_string3050z00zz__r4_output_6_10_3z00, BgL_bgl_string3050za700za7za7_3183za7, "display-substring", 17 );
DEFINE_STRING( BGl_string3051z00zz__r4_output_6_10_3z00, BgL_bgl_string3051za700za7za7_3184za7, "&display-substring", 18 );
DEFINE_STRING( BGl_string3052z00zz__r4_output_6_10_3z00, BgL_bgl_string3052za700za7za7_3185za7, "&write-string", 13 );
DEFINE_STRING( BGl_string3053z00zz__r4_output_6_10_3z00, BgL_bgl_string3053za700za7za7_3186za7, "&display-fixnum", 15 );
DEFINE_STRING( BGl_string3054z00zz__r4_output_6_10_3z00, BgL_bgl_string3054za700za7za7_3187za7, "&display-elong", 14 );
DEFINE_STRING( BGl_string3055z00zz__r4_output_6_10_3z00, BgL_bgl_string3055za700za7za7_3188za7, "belong", 6 );
DEFINE_STRING( BGl_string3056z00zz__r4_output_6_10_3z00, BgL_bgl_string3056za700za7za7_3189za7, "&display-flonum", 15 );
DEFINE_STRING( BGl_string3057z00zz__r4_output_6_10_3z00, BgL_bgl_string3057za700za7za7_3190za7, "real", 4 );
DEFINE_STRING( BGl_string3058z00zz__r4_output_6_10_3z00, BgL_bgl_string3058za700za7za7_3191za7, "&display-ucs2string", 19 );
DEFINE_STRING( BGl_string3059z00zz__r4_output_6_10_3z00, BgL_bgl_string3059za700za7za7_3192za7, "ucs2string", 10 );
DEFINE_STRING( BGl_string3060z00zz__r4_output_6_10_3z00, BgL_bgl_string3060za700za7za7_3193za7, "&write-ucs2string", 17 );
DEFINE_STRING( BGl_string3061z00zz__r4_output_6_10_3z00, BgL_bgl_string3061za700za7za7_3194za7, "#<mutex:", 8 );
DEFINE_STRING( BGl_string3062z00zz__r4_output_6_10_3z00, BgL_bgl_string3062za700za7za7_3195za7, "write-mutex", 11 );
DEFINE_STRING( BGl_string3063z00zz__r4_output_6_10_3z00, BgL_bgl_string3063za700za7za7_3196za7, "mutex", 5 );
DEFINE_STRING( BGl_string3064z00zz__r4_output_6_10_3z00, BgL_bgl_string3064za700za7za7_3197za7, ":", 1 );
DEFINE_STRING( BGl_string3065z00zz__r4_output_6_10_3z00, BgL_bgl_string3065za700za7za7_3198za7, "write/display-structure", 23 );
DEFINE_STRING( BGl_string3066z00zz__r4_output_6_10_3z00, BgL_bgl_string3066za700za7za7_3199za7, "write/display-structure:Wrong number of arguments", 49 );
DEFINE_STRING( BGl_string3069z00zz__r4_output_6_10_3z00, BgL_bgl_string3069za700za7za7_3200za7, "funcall", 7 );
DEFINE_STRING( BGl_string3071z00zz__r4_output_6_10_3z00, BgL_bgl_string3071za700za7za7_3201za7, "disp", 4 );
DEFINE_STRING( BGl_string3073z00zz__r4_output_6_10_3z00, BgL_bgl_string3073za700za7za7_3202za7, "arg1634", 7 );
DEFINE_STRING( BGl_string3075z00zz__r4_output_6_10_3z00, BgL_bgl_string3075za700za7za7_3203za7, "port", 4 );
DEFINE_STRING( BGl_string3076z00zz__r4_output_6_10_3z00, BgL_bgl_string3076za700za7za7_3204za7, "loop:Wrong number of arguments", 30 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_writezd2bytezd22zd2envzd2zz__r4_output_6_10_3z00, BgL_bgl_za762writeza7d2byteza73205za7, BGl_z62writezd2bytezd22z62zz__r4_output_6_10_3z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string3079z00zz__r4_output_6_10_3z00, BgL_bgl_string3079za700za7za7_3206za7, "arg1639", 7 );
DEFINE_STRING( BGl_string3082z00zz__r4_output_6_10_3z00, BgL_bgl_string3082za700za7za7_3207za7, "arg1640", 7 );
DEFINE_STRING( BGl_string3083z00zz__r4_output_6_10_3z00, BgL_bgl_string3083za700za7za7_3208za7, "write/display-vector:Wrong number of arguments", 46 );
DEFINE_STRING( BGl_string3086z00zz__r4_output_6_10_3z00, BgL_bgl_string3086za700za7za7_3209za7, "tag", 3 );
DEFINE_STRING( BGl_string3087z00zz__r4_output_6_10_3z00, BgL_bgl_string3087za700za7za7_3210za7, "vector-ref", 10 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_formatzd2envzd2zz__r4_output_6_10_3z00, BgL_bgl_za762formatza762za7za7__3211z00, va_generic_entry, BGl_z62formatz62zz__r4_output_6_10_3z00, BUNSPEC, -2 );
DEFINE_STRING( BGl_string3090z00zz__r4_output_6_10_3z00, BgL_bgl_string3090za700za7za7_3212za7, "arg1652", 7 );
DEFINE_STRING( BGl_string3093z00zz__r4_output_6_10_3z00, BgL_bgl_string3093za700za7za7_3213za7, "arg1654", 7 );
DEFINE_STRING( BGl_string3094z00zz__r4_output_6_10_3z00, BgL_bgl_string3094za700za7za7_3214za7, "write/display-tvector:Wrong number of arguments", 47 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_printfzd2envzd2zz__r4_output_6_10_3z00, BgL_bgl_za762printfza762za7za7__3215z00, va_generic_entry, BGl_z62printfz62zz__r4_output_6_10_3z00, BUNSPEC, -2 );
DEFINE_STRING( BGl_string3097z00zz__r4_output_6_10_3z00, BgL_bgl_string3097za700za7za7_3216za7, "id", 2 );
DEFINE_STRING( BGl_string3098z00zz__r4_output_6_10_3z00, BgL_bgl_string3098za700za7za7_3217za7, "procedure", 9 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_displayzd2stringzd2envz00zz__r4_output_6_10_3z00, BgL_bgl_za762displayza7d2str3218z00, BGl_z62displayzd2stringzb0zz__r4_output_6_10_3z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_displayzd2substringzd2envz00zz__r4_output_6_10_3z00, BgL_bgl_za762displayza7d2sub3219z00, BGl_z62displayzd2substringzb0zz__r4_output_6_10_3z00, 0L, BUNSPEC, 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_newlinezd21zd2envz00zz__r4_output_6_10_3z00, BgL_bgl_za762newlineza7d21za7b3220za7, BGl_z62newlinezd21zb0zz__r4_output_6_10_3z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_fprintfzd2envzd2zz__r4_output_6_10_3z00, BgL_bgl_za762fprintfza762za7za7_3221z00, va_generic_entry, BGl_z62fprintfz62zz__r4_output_6_10_3z00, BUNSPEC, -3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_writezd2charzd2envz00zz__r4_output_6_10_3z00, BgL_bgl__writeza7d2charza7d23222z00, opt_generic_entry, BGl__writezd2charzd2zz__r4_output_6_10_3z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_writeza2zd2envz70zz__r4_output_6_10_3z00, BgL_bgl_za762writeza7a2za7c0za7za73223za7, va_generic_entry, BGl_z62writeza2zc0zz__r4_output_6_10_3z00, BUNSPEC, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_writezd2charzd22zd2envzd2zz__r4_output_6_10_3z00, BgL_bgl_za762writeza7d2charza73224za7, BGl_z62writezd2charzd22z62zz__r4_output_6_10_3z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_displayzd2ucs2stringzd2envz00zz__r4_output_6_10_3z00, BgL_bgl_za762displayza7d2ucs3225z00, BGl_z62displayzd2ucs2stringzb0zz__r4_output_6_10_3z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_writezd2symbolzd2envz00zz__r4_output_6_10_3z00, BgL_bgl_za762writeza7d2symbo3226z00, BGl_z62writezd2symbolzb0zz__r4_output_6_10_3z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2950z00zz__r4_output_6_10_3z00, BgL_bgl_string2950za700za7za7_3227za7, "tprint", 6 );
DEFINE_STRING( BGl_string2951z00zz__r4_output_6_10_3z00, BgL_bgl_string2951za700za7za7_3228za7, "newline", 7 );
DEFINE_STRING( BGl_string2952z00zz__r4_output_6_10_3z00, BgL_bgl_string2952za700za7za7_3229za7, "wrong number of optional arguments", 34 );
DEFINE_STRING( BGl_string2953z00zz__r4_output_6_10_3z00, BgL_bgl_string2953za700za7za7_3230za7, "/tmp/4.4a/runtime/Ieee/output.scm", 33 );
DEFINE_STRING( BGl_string2954z00zz__r4_output_6_10_3z00, BgL_bgl_string2954za700za7za7_3231za7, "output-port", 11 );
DEFINE_STRING( BGl_string2955z00zz__r4_output_6_10_3z00, BgL_bgl_string2955za700za7za7_3232za7, "&newline-1", 10 );
DEFINE_STRING( BGl_string2956z00zz__r4_output_6_10_3z00, BgL_bgl_string2956za700za7za7_3233za7, "display", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_displayzd2envzd2zz__r4_output_6_10_3z00, BgL_bgl_za762displayza762za7za7_3234z00, va_generic_entry, BGl_z62displayz62zz__r4_output_6_10_3z00, BUNSPEC, -2 );
DEFINE_STRING( BGl_string2957z00zz__r4_output_6_10_3z00, BgL_bgl_string2957za700za7za7_3235za7, "write", 5 );
DEFINE_STRING( BGl_string2959z00zz__r4_output_6_10_3z00, BgL_bgl_string2959za700za7za7_3236za7, "write-char", 10 );
DEFINE_STRING( BGl_string2960z00zz__r4_output_6_10_3z00, BgL_bgl_string2960za700za7za7_3237za7, "wrong number of arguments: [1..2] expected, provided", 52 );
DEFINE_STRING( BGl_string2961z00zz__r4_output_6_10_3z00, BgL_bgl_string2961za700za7za7_3238za7, "_write-char", 11 );
DEFINE_STRING( BGl_string2962z00zz__r4_output_6_10_3z00, BgL_bgl_string2962za700za7za7_3239za7, "bchar", 5 );
DEFINE_STRING( BGl_string2963z00zz__r4_output_6_10_3z00, BgL_bgl_string2963za700za7za7_3240za7, "&write-char-2", 13 );
DEFINE_STRING( BGl_string2965z00zz__r4_output_6_10_3z00, BgL_bgl_string2965za700za7za7_3241za7, "write-byte", 10 );
DEFINE_STRING( BGl_string2966z00zz__r4_output_6_10_3z00, BgL_bgl_string2966za700za7za7_3242za7, "_write-byte", 11 );
DEFINE_STRING( BGl_string2967z00zz__r4_output_6_10_3z00, BgL_bgl_string2967za700za7za7_3243za7, "bint", 4 );
DEFINE_STRING( BGl_string2968z00zz__r4_output_6_10_3z00, BgL_bgl_string2968za700za7za7_3244za7, "&write-byte-2", 13 );
DEFINE_STRING( BGl_string2969z00zz__r4_output_6_10_3z00, BgL_bgl_string2969za700za7za7_3245za7, "#Newline", 8 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_displayzd2elongzd2envz00zz__r4_output_6_10_3z00, BgL_bgl_za762displayza7d2elo3246z00, BGl_z62displayzd2elongzb0zz__r4_output_6_10_3z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_writezd2envzd2zz__r4_output_6_10_3z00, BgL_bgl_za762writeza762za7za7__r3247z00, va_generic_entry, BGl_z62writez62zz__r4_output_6_10_3z00, BUNSPEC, -2 );
DEFINE_STRING( BGl_string2970z00zz__r4_output_6_10_3z00, BgL_bgl_string2970za700za7za7_3248za7, "#Return", 7 );
DEFINE_STRING( BGl_string2971z00zz__r4_output_6_10_3z00, BgL_bgl_string2971za700za7za7_3249za7, "#Space", 6 );
DEFINE_STRING( BGl_string2972z00zz__r4_output_6_10_3z00, BgL_bgl_string2972za700za7za7_3250za7, "#Tab", 4 );
DEFINE_STRING( BGl_string2973z00zz__r4_output_6_10_3z00, BgL_bgl_string2973za700za7za7_3251za7, "&illegal-char-rep", 17 );
DEFINE_STRING( BGl_string2974z00zz__r4_output_6_10_3z00, BgL_bgl_string2974za700za7za7_3252za7, "loop", 4 );
DEFINE_STRING( BGl_string2975z00zz__r4_output_6_10_3z00, BgL_bgl_string2975za700za7za7_3253za7, "pair", 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_displayzd22zd2envz00zz__r4_output_6_10_3z00, BgL_bgl_za762displayza7d22za7b3254za7, BGl_z62displayzd22zb0zz__r4_output_6_10_3z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2976z00zz__r4_output_6_10_3z00, BgL_bgl_string2976za700za7za7_3255za7, "&tprint", 7 );
DEFINE_STRING( BGl_string2977z00zz__r4_output_6_10_3z00, BgL_bgl_string2977za700za7za7_3256za7, "&fprint", 7 );
DEFINE_STRING( BGl_string2978z00zz__r4_output_6_10_3z00, BgL_bgl_string2978za700za7za7_3257za7, "Insufficient number of arguments", 32 );
DEFINE_STRING( BGl_string2979z00zz__r4_output_6_10_3z00, BgL_bgl_string2979za700za7za7_3258za7, "case_else1047", 13 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_newlinezd2envzd2zz__r4_output_6_10_3z00, BgL_bgl_za762newlineza762za7za7_3259z00, va_generic_entry, BGl_z62newlinez62zz__r4_output_6_10_3z00, BUNSPEC, -1 );
DEFINE_STRING( BGl_string2980z00zz__r4_output_6_10_3z00, BgL_bgl_string2980za700za7za7_3260za7, "Illegal tag \"", 13 );
DEFINE_STRING( BGl_string2981z00zz__r4_output_6_10_3z00, BgL_bgl_string2981za700za7za7_3261za7, "\"", 1 );
DEFINE_STRING( BGl_string2982z00zz__r4_output_6_10_3z00, BgL_bgl_string2982za700za7za7_3262za7, "handle-tag", 10 );
DEFINE_STRING( BGl_string2983z00zz__r4_output_6_10_3z00, BgL_bgl_string2983za700za7za7_3263za7, "Illegal char", 12 );
DEFINE_STRING( BGl_string2984z00zz__r4_output_6_10_3z00, BgL_bgl_string2984za700za7za7_3264za7, "number", 6 );
DEFINE_STRING( BGl_string2985z00zz__r4_output_6_10_3z00, BgL_bgl_string2985za700za7za7_3265za7, " ", 1 );
DEFINE_STRING( BGl_string2986z00zz__r4_output_6_10_3z00, BgL_bgl_string2986za700za7za7_3266za7, "0123456789", 10 );
DEFINE_STRING( BGl_string2987z00zz__r4_output_6_10_3z00, BgL_bgl_string2987za700za7za7_3267za7, "print-formatted-number", 22 );
DEFINE_STRING( BGl_string2988z00zz__r4_output_6_10_3z00, BgL_bgl_string2988za700za7za7_3268za7, "string-ref", 10 );
DEFINE_STRING( BGl_string2989z00zz__r4_output_6_10_3z00, BgL_bgl_string2989za700za7za7_3269za7, "Illegal tag", 11 );
DEFINE_STRING( BGl_string2990z00zz__r4_output_6_10_3z00, BgL_bgl_string2990za700za7za7_3270za7, "print-padded-number", 19 );
DEFINE_STRING( BGl_string2991z00zz__r4_output_6_10_3z00, BgL_bgl_string2991za700za7za7_3271za7, "bstring", 7 );
DEFINE_STRING( BGl_string2992z00zz__r4_output_6_10_3z00, BgL_bgl_string2992za700za7za7_3272za7, "print-list", 10 );
DEFINE_STRING( BGl_string2993z00zz__r4_output_6_10_3z00, BgL_bgl_string2993za700za7za7_3273za7, "Tag not allowed here", 20 );
DEFINE_STRING( BGl_string2994z00zz__r4_output_6_10_3z00, BgL_bgl_string2994za700za7za7_3274za7, " . ", 3 );
DEFINE_STRING( BGl_string2996z00zz__r4_output_6_10_3z00, BgL_bgl_string2996za700za7za7_3275za7, "format", 6 );
DEFINE_STRING( BGl_string2997z00zz__r4_output_6_10_3z00, BgL_bgl_string2997za700za7za7_3276za7, "pair-nil", 8 );
DEFINE_STRING( BGl_string2998z00zz__r4_output_6_10_3z00, BgL_bgl_string2998za700za7za7_3277za7, "&format", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_tprintzd2envzd2zz__r4_output_6_10_3z00, BgL_bgl_za762tprintza762za7za7__3278z00, va_generic_entry, BGl_z62tprintz62zz__r4_output_6_10_3z00, BUNSPEC, -2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_displayza2zd2envz70zz__r4_output_6_10_3z00, BgL_bgl_za762displayza7a2za7c03279za7, va_generic_entry, BGl_z62displayza2zc0zz__r4_output_6_10_3z00, BUNSPEC, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_writezd2bytezd2envz00zz__r4_output_6_10_3z00, BgL_bgl__writeza7d2byteza7d23280z00, opt_generic_entry, BGl__writezd2bytezd2zz__r4_output_6_10_3z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_writezd2ucs2stringzd2envz00zz__r4_output_6_10_3z00, BgL_bgl_za762writeza7d2ucs2s3281z00, BGl_z62writezd2ucs2stringzb0zz__r4_output_6_10_3z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_displayzd2flonumzd2envz00zz__r4_output_6_10_3z00, BgL_bgl_za762displayza7d2flo3282z00, BGl_z62displayzd2flonumzb0zz__r4_output_6_10_3z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_fprintzd2envzd2zz__r4_output_6_10_3z00, BgL_bgl_za762fprintza762za7za7__3283z00, va_generic_entry, BGl_z62fprintz62zz__r4_output_6_10_3z00, BUNSPEC, -2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_printzd2envzd2zz__r4_output_6_10_3z00, BgL_bgl_za762printza762za7za7__r3284z00, va_generic_entry, BGl_z62printz62zz__r4_output_6_10_3z00, BUNSPEC, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_displayzd2symbolzd2envz00zz__r4_output_6_10_3z00, BgL_bgl_za762displayza7d2sym3285z00, BGl_z62displayzd2symbolzb0zz__r4_output_6_10_3z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_writezd2stringzd2envz00zz__r4_output_6_10_3z00, BgL_bgl_za762writeza7d2strin3286z00, BGl_z62writezd2stringzb0zz__r4_output_6_10_3z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string3000z00zz__r4_output_6_10_3z00, BgL_bgl_string3000za700za7za7_3287za7, "printf", 6 );
DEFINE_STRING( BGl_string3001z00zz__r4_output_6_10_3z00, BgL_bgl_string3001za700za7za7_3288za7, "&printf", 7 );
DEFINE_STRING( BGl_string3003z00zz__r4_output_6_10_3z00, BgL_bgl_string3003za700za7za7_3289za7, "fprintf", 7 );
DEFINE_STRING( BGl_string3004z00zz__r4_output_6_10_3z00, BgL_bgl_string3004za700za7za7_3290za7, "&fprintf", 8 );
DEFINE_STRING( BGl_string3005z00zz__r4_output_6_10_3z00, BgL_bgl_string3005za700za7za7_3291za7, "()", 2 );
DEFINE_STRING( BGl_string3006z00zz__r4_output_6_10_3z00, BgL_bgl_string3006za700za7za7_3292za7, "#f", 2 );
DEFINE_STRING( BGl_string3007z00zz__r4_output_6_10_3z00, BgL_bgl_string3007za700za7za7_3293za7, "#t", 2 );
DEFINE_STRING( BGl_string3008z00zz__r4_output_6_10_3z00, BgL_bgl_string3008za700za7za7_3294za7, "#unspecified", 12 );
DEFINE_STRING( BGl_string3009z00zz__r4_output_6_10_3z00, BgL_bgl_string3009za700za7za7_3295za7, "#<class:", 8 );

/* GC roots registration */
static obj_t bgl_gc_roots_register() {
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
void *roots_min = (void*)ULONG_MAX, *roots_max = 0;
ADD_ROOT( (void *)(&BGl_requirezd2initializa7ationz75zz__r4_output_6_10_3z00) );
ADD_ROOT( (void *)(&BGl_symbol2958z00zz__r4_output_6_10_3z00) );
ADD_ROOT( (void *)(&BGl_list3106z00zz__r4_output_6_10_3z00) );
ADD_ROOT( (void *)(&BGl_list3109z00zz__r4_output_6_10_3z00) );
ADD_ROOT( (void *)(&BGl_symbol2964z00zz__r4_output_6_10_3z00) );
ADD_ROOT( (void *)(&BGl_list3114z00zz__r4_output_6_10_3z00) );
ADD_ROOT( (void *)(&BGl_list3119z00zz__r4_output_6_10_3z00) );
ADD_ROOT( (void *)(&BGl_list3122z00zz__r4_output_6_10_3z00) );
ADD_ROOT( (void *)(&BGl_symbol2995z00zz__r4_output_6_10_3z00) );
ADD_ROOT( (void *)(&BGl_symbol2999z00zz__r4_output_6_10_3z00) );
ADD_ROOT( (void *)(&BGl_list3067z00zz__r4_output_6_10_3z00) );
ADD_ROOT( (void *)(&BGl_tprintzd2mutexzd2zz__r4_output_6_10_3z00) );
ADD_ROOT( (void *)(&BGl_list3077z00zz__r4_output_6_10_3z00) );
ADD_ROOT( (void *)(&BGl_list3080z00zz__r4_output_6_10_3z00) );
ADD_ROOT( (void *)(&BGl_list3084z00zz__r4_output_6_10_3z00) );
ADD_ROOT( (void *)(&BGl_list3088z00zz__r4_output_6_10_3z00) );
ADD_ROOT( (void *)(&BGl_list3091z00zz__r4_output_6_10_3z00) );
ADD_ROOT( (void *)(&BGl_list3095z00zz__r4_output_6_10_3z00) );
ADD_ROOT( (void *)(&BGl_list3099z00zz__r4_output_6_10_3z00) );
ADD_ROOT( (void *)(&BGl_symbol3002z00zz__r4_output_6_10_3z00) );
ADD_ROOT( (void *)(&BGl_symbol3100z00zz__r4_output_6_10_3z00) );
ADD_ROOT( (void *)(&BGl_symbol3102z00zz__r4_output_6_10_3z00) );
ADD_ROOT( (void *)(&BGl_symbol3104z00zz__r4_output_6_10_3z00) );
ADD_ROOT( (void *)(&BGl_symbol3107z00zz__r4_output_6_10_3z00) );
ADD_ROOT( (void *)(&BGl_symbol3110z00zz__r4_output_6_10_3z00) );
ADD_ROOT( (void *)(&BGl_symbol3115z00zz__r4_output_6_10_3z00) );
ADD_ROOT( (void *)(&BGl_symbol3117z00zz__r4_output_6_10_3z00) );
ADD_ROOT( (void *)(&BGl_symbol3120z00zz__r4_output_6_10_3z00) );
ADD_ROOT( (void *)(&BGl_symbol3041z00zz__r4_output_6_10_3z00) );
ADD_ROOT( (void *)(&BGl_symbol3123z00zz__r4_output_6_10_3z00) );
ADD_ROOT( (void *)(&BGl_symbol3043z00zz__r4_output_6_10_3z00) );
ADD_ROOT( (void *)(&BGl_symbol3049z00zz__r4_output_6_10_3z00) );
ADD_ROOT( (void *)(&BGl_symbol3068z00zz__r4_output_6_10_3z00) );
ADD_ROOT( (void *)(&BGl_symbol3070z00zz__r4_output_6_10_3z00) );
ADD_ROOT( (void *)(&BGl_symbol3072z00zz__r4_output_6_10_3z00) );
ADD_ROOT( (void *)(&BGl_symbol3074z00zz__r4_output_6_10_3z00) );
ADD_ROOT( (void *)(&BGl_symbol3078z00zz__r4_output_6_10_3z00) );
ADD_ROOT( (void *)(&BGl_symbol3081z00zz__r4_output_6_10_3z00) );
ADD_ROOT( (void *)(&BGl_symbol3085z00zz__r4_output_6_10_3z00) );
ADD_ROOT( (void *)(&BGl_symbol3089z00zz__r4_output_6_10_3z00) );
ADD_ROOT( (void *)(&BGl_symbol3092z00zz__r4_output_6_10_3z00) );
ADD_ROOT( (void *)(&BGl_symbol3096z00zz__r4_output_6_10_3z00) );
#undef ADD_ROOT
if( roots_max > 0 ) GC_add_roots( roots_min, ((void **)roots_max) + 1 );
#endif
return BUNSPEC;
}



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long BgL_checksumz00_4588, char * BgL_fromz00_4589)
{
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__r4_output_6_10_3z00))
{ 
BGl_requirezd2initializa7ationz75zz__r4_output_6_10_3z00 = 
BBOOL(((bool_t)0)); 
BGl_gczd2rootszd2initz00zz__r4_output_6_10_3z00(); 
BGl_cnstzd2initzd2zz__r4_output_6_10_3z00(); 
BGl_importedzd2moduleszd2initz00zz__r4_output_6_10_3z00(); 
return 
BGl_toplevelzd2initzd2zz__r4_output_6_10_3z00();}  else 
{ 
return BUNSPEC;} } 

}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__r4_output_6_10_3z00()
{
{ /* Ieee/output.scm 24 */
BGl_symbol2958z00zz__r4_output_6_10_3z00 = 
bstring_to_symbol(BGl_string2959z00zz__r4_output_6_10_3z00); 
BGl_symbol2964z00zz__r4_output_6_10_3z00 = 
bstring_to_symbol(BGl_string2965z00zz__r4_output_6_10_3z00); 
BGl_symbol2995z00zz__r4_output_6_10_3z00 = 
bstring_to_symbol(BGl_string2996z00zz__r4_output_6_10_3z00); 
BGl_symbol2999z00zz__r4_output_6_10_3z00 = 
bstring_to_symbol(BGl_string3000z00zz__r4_output_6_10_3z00); 
BGl_symbol3002z00zz__r4_output_6_10_3z00 = 
bstring_to_symbol(BGl_string3003z00zz__r4_output_6_10_3z00); 
BGl_symbol3041z00zz__r4_output_6_10_3z00 = 
bstring_to_symbol(BGl_string3042z00zz__r4_output_6_10_3z00); 
BGl_symbol3043z00zz__r4_output_6_10_3z00 = 
bstring_to_symbol(BGl_string3044z00zz__r4_output_6_10_3z00); 
BGl_symbol3049z00zz__r4_output_6_10_3z00 = 
bstring_to_symbol(BGl_string3050z00zz__r4_output_6_10_3z00); 
BGl_symbol3068z00zz__r4_output_6_10_3z00 = 
bstring_to_symbol(BGl_string3069z00zz__r4_output_6_10_3z00); 
BGl_symbol3070z00zz__r4_output_6_10_3z00 = 
bstring_to_symbol(BGl_string3071z00zz__r4_output_6_10_3z00); 
BGl_symbol3072z00zz__r4_output_6_10_3z00 = 
bstring_to_symbol(BGl_string3073z00zz__r4_output_6_10_3z00); 
BGl_symbol3074z00zz__r4_output_6_10_3z00 = 
bstring_to_symbol(BGl_string3075z00zz__r4_output_6_10_3z00); 
BGl_list3067z00zz__r4_output_6_10_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol3068z00zz__r4_output_6_10_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol3070z00zz__r4_output_6_10_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol3070z00zz__r4_output_6_10_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol3072z00zz__r4_output_6_10_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol3074z00zz__r4_output_6_10_3z00, BNIL))))); 
BGl_symbol3078z00zz__r4_output_6_10_3z00 = 
bstring_to_symbol(BGl_string3079z00zz__r4_output_6_10_3z00); 
BGl_list3077z00zz__r4_output_6_10_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol3068z00zz__r4_output_6_10_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol3070z00zz__r4_output_6_10_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol3070z00zz__r4_output_6_10_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol3078z00zz__r4_output_6_10_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol3074z00zz__r4_output_6_10_3z00, BNIL))))); 
BGl_symbol3081z00zz__r4_output_6_10_3z00 = 
bstring_to_symbol(BGl_string3082z00zz__r4_output_6_10_3z00); 
BGl_list3080z00zz__r4_output_6_10_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol3068z00zz__r4_output_6_10_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol3070z00zz__r4_output_6_10_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol3070z00zz__r4_output_6_10_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol3081z00zz__r4_output_6_10_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol3074z00zz__r4_output_6_10_3z00, BNIL))))); 
BGl_symbol3085z00zz__r4_output_6_10_3z00 = 
bstring_to_symbol(BGl_string3086z00zz__r4_output_6_10_3z00); 
BGl_list3084z00zz__r4_output_6_10_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol3068z00zz__r4_output_6_10_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol3070z00zz__r4_output_6_10_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol3070z00zz__r4_output_6_10_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol3085z00zz__r4_output_6_10_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol3074z00zz__r4_output_6_10_3z00, BNIL))))); 
BGl_symbol3089z00zz__r4_output_6_10_3z00 = 
bstring_to_symbol(BGl_string3090z00zz__r4_output_6_10_3z00); 
BGl_list3088z00zz__r4_output_6_10_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol3068z00zz__r4_output_6_10_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol3070z00zz__r4_output_6_10_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol3070z00zz__r4_output_6_10_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol3089z00zz__r4_output_6_10_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol3074z00zz__r4_output_6_10_3z00, BNIL))))); 
BGl_symbol3092z00zz__r4_output_6_10_3z00 = 
bstring_to_symbol(BGl_string3093z00zz__r4_output_6_10_3z00); 
BGl_list3091z00zz__r4_output_6_10_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol3068z00zz__r4_output_6_10_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol3070z00zz__r4_output_6_10_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol3070z00zz__r4_output_6_10_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol3092z00zz__r4_output_6_10_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol3074z00zz__r4_output_6_10_3z00, BNIL))))); 
BGl_symbol3096z00zz__r4_output_6_10_3z00 = 
bstring_to_symbol(BGl_string3097z00zz__r4_output_6_10_3z00); 
BGl_list3095z00zz__r4_output_6_10_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol3068z00zz__r4_output_6_10_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol3070z00zz__r4_output_6_10_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol3070z00zz__r4_output_6_10_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol3096z00zz__r4_output_6_10_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol3074z00zz__r4_output_6_10_3z00, BNIL))))); 
BGl_symbol3100z00zz__r4_output_6_10_3z00 = 
bstring_to_symbol(BGl_string3101z00zz__r4_output_6_10_3z00); 
BGl_symbol3102z00zz__r4_output_6_10_3z00 = 
bstring_to_symbol(BGl_string3103z00zz__r4_output_6_10_3z00); 
BGl_symbol3104z00zz__r4_output_6_10_3z00 = 
bstring_to_symbol(BGl_string3105z00zz__r4_output_6_10_3z00); 
BGl_list3099z00zz__r4_output_6_10_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol3068z00zz__r4_output_6_10_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol3100z00zz__r4_output_6_10_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol3100z00zz__r4_output_6_10_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol3102z00zz__r4_output_6_10_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol3104z00zz__r4_output_6_10_3z00, BNIL))))); 
BGl_symbol3107z00zz__r4_output_6_10_3z00 = 
bstring_to_symbol(BGl_string3108z00zz__r4_output_6_10_3z00); 
BGl_list3106z00zz__r4_output_6_10_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol3068z00zz__r4_output_6_10_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol3070z00zz__r4_output_6_10_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol3070z00zz__r4_output_6_10_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol3107z00zz__r4_output_6_10_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol3074z00zz__r4_output_6_10_3z00, BNIL))))); 
BGl_symbol3110z00zz__r4_output_6_10_3z00 = 
bstring_to_symbol(BGl_string3111z00zz__r4_output_6_10_3z00); 
BGl_list3109z00zz__r4_output_6_10_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol3068z00zz__r4_output_6_10_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol3070z00zz__r4_output_6_10_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol3070z00zz__r4_output_6_10_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol3110z00zz__r4_output_6_10_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol3074z00zz__r4_output_6_10_3z00, BNIL))))); 
BGl_symbol3115z00zz__r4_output_6_10_3z00 = 
bstring_to_symbol(BGl_string3116z00zz__r4_output_6_10_3z00); 
BGl_symbol3117z00zz__r4_output_6_10_3z00 = 
bstring_to_symbol(BGl_string3118z00zz__r4_output_6_10_3z00); 
BGl_list3114z00zz__r4_output_6_10_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol3068z00zz__r4_output_6_10_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol3115z00zz__r4_output_6_10_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol3115z00zz__r4_output_6_10_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol3117z00zz__r4_output_6_10_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol3104z00zz__r4_output_6_10_3z00, BNIL))))); 
BGl_symbol3120z00zz__r4_output_6_10_3z00 = 
bstring_to_symbol(BGl_string3121z00zz__r4_output_6_10_3z00); 
BGl_list3119z00zz__r4_output_6_10_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol3068z00zz__r4_output_6_10_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol3070z00zz__r4_output_6_10_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol3070z00zz__r4_output_6_10_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol3120z00zz__r4_output_6_10_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol3074z00zz__r4_output_6_10_3z00, BNIL))))); 
BGl_symbol3123z00zz__r4_output_6_10_3z00 = 
bstring_to_symbol(BGl_string3124z00zz__r4_output_6_10_3z00); 
return ( 
BGl_list3122z00zz__r4_output_6_10_3z00 = 
MAKE_YOUNG_PAIR(BGl_symbol3068z00zz__r4_output_6_10_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol3070z00zz__r4_output_6_10_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol3070z00zz__r4_output_6_10_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol3123z00zz__r4_output_6_10_3z00, 
MAKE_YOUNG_PAIR(BGl_symbol3074z00zz__r4_output_6_10_3z00, BNIL))))), BUNSPEC) ;} 

}



/* gc-roots-init */
obj_t BGl_gczd2rootszd2initz00zz__r4_output_6_10_3z00()
{
{ /* Ieee/output.scm 24 */
return 
bgl_gc_roots_register();} 

}



/* toplevel-init */
obj_t BGl_toplevelzd2initzd2zz__r4_output_6_10_3z00()
{
{ /* Ieee/output.scm 24 */
{ /* Ieee/output.scm 391 */
obj_t BgL_res2164z00_2688;
BgL_res2164z00_2688 = 
bgl_make_mutex(BGl_string2950z00zz__r4_output_6_10_3z00); 
return ( 
BGl_tprintzd2mutexzd2zz__r4_output_6_10_3z00 = BgL_res2164z00_2688, BUNSPEC) ;} } 

}



/* newline */
BGL_EXPORTED_DEF obj_t BGl_newlinez00zz__r4_output_6_10_3z00(obj_t BgL_portz00_3)
{
{ /* Ieee/output.scm 256 */
{ /* Ieee/output.scm 257 */
obj_t BgL_portz00_1540;
if(
NULLP(BgL_portz00_3))
{ /* Ieee/output.scm 259 */
obj_t BgL_res2167z00_2694;
{ /* Ieee/output.scm 259 */
obj_t BgL_tmpz00_4693;
BgL_tmpz00_4693 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2167z00_2694 = 
BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4693); } 
BgL_portz00_1540 = BgL_res2167z00_2694; }  else 
{ /* Ieee/output.scm 257 */
if(
PAIRP(BgL_portz00_3))
{ /* Ieee/output.scm 257 */
if(
NULLP(
CDR(BgL_portz00_3)))
{ /* Ieee/output.scm 257 */
BgL_portz00_1540 = 
CAR(
((obj_t)BgL_portz00_3)); }  else 
{ /* Ieee/output.scm 257 */
BgL_portz00_1540 = 
BGl_errorz00zz__errorz00(BGl_string2951z00zz__r4_output_6_10_3z00, BGl_string2952z00zz__r4_output_6_10_3z00, BgL_portz00_3); } }  else 
{ /* Ieee/output.scm 257 */
BgL_portz00_1540 = 
BGl_errorz00zz__errorz00(BGl_string2951z00zz__r4_output_6_10_3z00, BGl_string2952z00zz__r4_output_6_10_3z00, BgL_portz00_3); } } 
{ /* Ieee/output.scm 266 */
obj_t BgL_portz00_2699;
if(
OUTPUT_PORTP(BgL_portz00_1540))
{ /* Ieee/output.scm 266 */
BgL_portz00_2699 = BgL_portz00_1540; }  else 
{ 
obj_t BgL_auxz00_4707;
BgL_auxz00_4707 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)10219)), BGl_string2951z00zz__r4_output_6_10_3z00, BGl_string2954z00zz__r4_output_6_10_3z00, BgL_portz00_1540); 
FAILURE(BgL_auxz00_4707,BFALSE,BFALSE);} 
return 
bgl_display_char(((unsigned char)10), BgL_portz00_2699);} } } 

}



/* &newline */
obj_t BGl_z62newlinez62zz__r4_output_6_10_3z00(obj_t BgL_envz00_4086, obj_t BgL_portz00_4087)
{
{ /* Ieee/output.scm 256 */
return 
BGl_newlinez00zz__r4_output_6_10_3z00(BgL_portz00_4087);} 

}



/* newline-1 */
BGL_EXPORTED_DEF obj_t BGl_newlinezd21zd2zz__r4_output_6_10_3z00(obj_t BgL_portz00_4)
{
{ /* Ieee/output.scm 271 */
return 
bgl_display_char(((unsigned char)10), BgL_portz00_4);} 

}



/* &newline-1 */
obj_t BGl_z62newlinezd21zb0zz__r4_output_6_10_3z00(obj_t BgL_envz00_4088, obj_t BgL_portz00_4089)
{
{ /* Ieee/output.scm 271 */
{ /* Ieee/output.scm 272 */
obj_t BgL_auxz00_4714;
if(
OUTPUT_PORTP(BgL_portz00_4089))
{ /* Ieee/output.scm 272 */
BgL_auxz00_4714 = BgL_portz00_4089
; }  else 
{ 
obj_t BgL_auxz00_4717;
BgL_auxz00_4717 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)10498)), BGl_string2955z00zz__r4_output_6_10_3z00, BGl_string2954z00zz__r4_output_6_10_3z00, BgL_portz00_4089); 
FAILURE(BgL_auxz00_4717,BFALSE,BFALSE);} 
return 
BGl_newlinezd21zd2zz__r4_output_6_10_3z00(BgL_auxz00_4714);} } 

}



/* display */
BGL_EXPORTED_DEF obj_t BGl_displayz00zz__r4_output_6_10_3z00(obj_t BgL_objz00_5, obj_t BgL_portz00_6)
{
{ /* Ieee/output.scm 277 */
{ /* Ieee/output.scm 278 */
obj_t BgL_portz00_1550;
if(
NULLP(BgL_portz00_6))
{ /* Ieee/output.scm 280 */
obj_t BgL_res2172z00_2705;
{ /* Ieee/output.scm 280 */
obj_t BgL_tmpz00_4724;
BgL_tmpz00_4724 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2172z00_2705 = 
BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4724); } 
BgL_portz00_1550 = BgL_res2172z00_2705; }  else 
{ /* Ieee/output.scm 278 */
if(
PAIRP(BgL_portz00_6))
{ /* Ieee/output.scm 278 */
if(
NULLP(
CDR(BgL_portz00_6)))
{ /* Ieee/output.scm 278 */
BgL_portz00_1550 = 
CAR(
((obj_t)BgL_portz00_6)); }  else 
{ /* Ieee/output.scm 278 */
BgL_portz00_1550 = 
BGl_errorz00zz__errorz00(BGl_string2956z00zz__r4_output_6_10_3z00, BGl_string2952z00zz__r4_output_6_10_3z00, BgL_portz00_6); } }  else 
{ /* Ieee/output.scm 278 */
BgL_portz00_1550 = 
BGl_errorz00zz__errorz00(BGl_string2956z00zz__r4_output_6_10_3z00, BGl_string2952z00zz__r4_output_6_10_3z00, BgL_portz00_6); } } 
{ /* Ieee/output.scm 287 */
obj_t BgL_auxz00_4736;
if(
OUTPUT_PORTP(BgL_portz00_1550))
{ /* Ieee/output.scm 287 */
BgL_auxz00_4736 = BgL_portz00_1550
; }  else 
{ 
obj_t BgL_auxz00_4739;
BgL_auxz00_4739 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)10987)), BGl_string2956z00zz__r4_output_6_10_3z00, BGl_string2954z00zz__r4_output_6_10_3z00, BgL_portz00_1550); 
FAILURE(BgL_auxz00_4739,BFALSE,BFALSE);} 
return 
bgl_display_obj(BgL_objz00_5, BgL_auxz00_4736);} } } 

}



/* &display */
obj_t BGl_z62displayz62zz__r4_output_6_10_3z00(obj_t BgL_envz00_4090, obj_t BgL_objz00_4091, obj_t BgL_portz00_4092)
{
{ /* Ieee/output.scm 277 */
return 
BGl_displayz00zz__r4_output_6_10_3z00(BgL_objz00_4091, BgL_portz00_4092);} 

}



/* write */
BGL_EXPORTED_DEF obj_t BGl_writez00zz__r4_output_6_10_3z00(obj_t BgL_objz00_7, obj_t BgL_portz00_8)
{
{ /* Ieee/output.scm 292 */
{ /* Ieee/output.scm 293 */
obj_t BgL_portz00_1560;
if(
NULLP(BgL_portz00_8))
{ /* Ieee/output.scm 295 */
obj_t BgL_res2177z00_2715;
{ /* Ieee/output.scm 295 */
obj_t BgL_tmpz00_4747;
BgL_tmpz00_4747 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2177z00_2715 = 
BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4747); } 
BgL_portz00_1560 = BgL_res2177z00_2715; }  else 
{ /* Ieee/output.scm 293 */
if(
PAIRP(BgL_portz00_8))
{ /* Ieee/output.scm 293 */
if(
NULLP(
CDR(BgL_portz00_8)))
{ /* Ieee/output.scm 293 */
BgL_portz00_1560 = 
CAR(
((obj_t)BgL_portz00_8)); }  else 
{ /* Ieee/output.scm 293 */
BgL_portz00_1560 = 
BGl_errorz00zz__errorz00(BGl_string2957z00zz__r4_output_6_10_3z00, BGl_string2952z00zz__r4_output_6_10_3z00, BgL_portz00_8); } }  else 
{ /* Ieee/output.scm 293 */
BgL_portz00_1560 = 
BGl_errorz00zz__errorz00(BGl_string2957z00zz__r4_output_6_10_3z00, BGl_string2952z00zz__r4_output_6_10_3z00, BgL_portz00_8); } } 
{ /* Ieee/output.scm 302 */
obj_t BgL_auxz00_4759;
if(
OUTPUT_PORTP(BgL_portz00_1560))
{ /* Ieee/output.scm 302 */
BgL_auxz00_4759 = BgL_portz00_1560
; }  else 
{ 
obj_t BgL_auxz00_4762;
BgL_auxz00_4762 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)11446)), BGl_string2957z00zz__r4_output_6_10_3z00, BGl_string2954z00zz__r4_output_6_10_3z00, BgL_portz00_1560); 
FAILURE(BgL_auxz00_4762,BFALSE,BFALSE);} 
return 
bgl_write_obj(BgL_objz00_7, BgL_auxz00_4759);} } } 

}



/* &write */
obj_t BGl_z62writez62zz__r4_output_6_10_3z00(obj_t BgL_envz00_4093, obj_t BgL_objz00_4094, obj_t BgL_portz00_4095)
{
{ /* Ieee/output.scm 292 */
return 
BGl_writez00zz__r4_output_6_10_3z00(BgL_objz00_4094, BgL_portz00_4095);} 

}



/* _write-char */
obj_t BGl__writezd2charzd2zz__r4_output_6_10_3z00(obj_t BgL_env1145z00_12, obj_t BgL_opt1144z00_11)
{
{ /* Ieee/output.scm 307 */
{ /* Ieee/output.scm 307 */
obj_t BgL_g1146z00_1570;
BgL_g1146z00_1570 = 
VECTOR_REF(BgL_opt1144z00_11,((long)0)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1144z00_11)) { case ((long)1) : 

{ /* Ieee/output.scm 307 */
obj_t BgL_portz00_1574;
{ /* Ieee/output.scm 307 */
obj_t BgL_res2180z00_2721;
{ /* Ieee/output.scm 307 */
obj_t BgL_tmpz00_4769;
BgL_tmpz00_4769 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2180z00_2721 = 
BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4769); } 
BgL_portz00_1574 = BgL_res2180z00_2721; } 
{ /* Ieee/output.scm 307 */

{ /* Ieee/output.scm 307 */
unsigned char BgL_charz00_2722;
{ /* Ieee/output.scm 307 */
obj_t BgL_tmpz00_4772;
if(
CHARP(BgL_g1146z00_1570))
{ /* Ieee/output.scm 307 */
BgL_tmpz00_4772 = BgL_g1146z00_1570
; }  else 
{ 
obj_t BgL_auxz00_4775;
BgL_auxz00_4775 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)11677)), BGl_string2961z00zz__r4_output_6_10_3z00, BGl_string2962z00zz__r4_output_6_10_3z00, BgL_g1146z00_1570); 
FAILURE(BgL_auxz00_4775,BFALSE,BFALSE);} 
BgL_charz00_2722 = 
CCHAR(BgL_tmpz00_4772); } 
return 
bgl_display_char(BgL_charz00_2722, BgL_portz00_1574);} } } break;case ((long)2) : 

{ /* Ieee/output.scm 307 */
obj_t BgL_portz00_1575;
BgL_portz00_1575 = 
VECTOR_REF(BgL_opt1144z00_11,((long)1)); 
{ /* Ieee/output.scm 307 */

{ /* Ieee/output.scm 307 */
unsigned char BgL_charz00_2725;
{ /* Ieee/output.scm 307 */
obj_t BgL_tmpz00_4782;
if(
CHARP(BgL_g1146z00_1570))
{ /* Ieee/output.scm 307 */
BgL_tmpz00_4782 = BgL_g1146z00_1570
; }  else 
{ 
obj_t BgL_auxz00_4785;
BgL_auxz00_4785 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)11677)), BGl_string2961z00zz__r4_output_6_10_3z00, BGl_string2962z00zz__r4_output_6_10_3z00, BgL_g1146z00_1570); 
FAILURE(BgL_auxz00_4785,BFALSE,BFALSE);} 
BgL_charz00_2725 = 
CCHAR(BgL_tmpz00_4782); } 
{ /* Ieee/output.scm 308 */
obj_t BgL_portz00_2727;
if(
OUTPUT_PORTP(BgL_portz00_1575))
{ /* Ieee/output.scm 308 */
BgL_portz00_2727 = BgL_portz00_1575; }  else 
{ 
obj_t BgL_auxz00_4792;
BgL_auxz00_4792 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)11765)), BGl_string2961z00zz__r4_output_6_10_3z00, BGl_string2954z00zz__r4_output_6_10_3z00, BgL_portz00_1575); 
FAILURE(BgL_auxz00_4792,BFALSE,BFALSE);} 
return 
bgl_display_char(BgL_charz00_2725, BgL_portz00_2727);} } } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol2958z00zz__r4_output_6_10_3z00, BGl_string2960z00zz__r4_output_6_10_3z00, 
BINT(
VECTOR_LENGTH(BgL_opt1144z00_11)));} } } } 

}



/* write-char */
BGL_EXPORTED_DEF obj_t BGl_writezd2charzd2zz__r4_output_6_10_3z00(unsigned char BgL_charz00_9, obj_t BgL_portz00_10)
{
{ /* Ieee/output.scm 307 */
{ /* Ieee/output.scm 308 */
obj_t BgL_portz00_2729;
if(
OUTPUT_PORTP(BgL_portz00_10))
{ /* Ieee/output.scm 308 */
BgL_portz00_2729 = BgL_portz00_10; }  else 
{ 
obj_t BgL_auxz00_4804;
BgL_auxz00_4804 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)11765)), BGl_string2959z00zz__r4_output_6_10_3z00, BGl_string2954z00zz__r4_output_6_10_3z00, BgL_portz00_10); 
FAILURE(BgL_auxz00_4804,BFALSE,BFALSE);} 
return 
bgl_display_char(BgL_charz00_9, BgL_portz00_2729);} } 

}



/* write-char-2 */
BGL_EXPORTED_DEF obj_t BGl_writezd2charzd22z00zz__r4_output_6_10_3z00(unsigned char BgL_charz00_13, obj_t BgL_portz00_14)
{
{ /* Ieee/output.scm 313 */
return 
bgl_display_char(BgL_charz00_13, BgL_portz00_14);} 

}



/* &write-char-2 */
obj_t BGl_z62writezd2charzd22z62zz__r4_output_6_10_3z00(obj_t BgL_envz00_4096, obj_t BgL_charz00_4097, obj_t BgL_portz00_4098)
{
{ /* Ieee/output.scm 313 */
{ /* Ieee/output.scm 314 */
obj_t BgL_auxz00_4819;unsigned char BgL_auxz00_4810;
if(
OUTPUT_PORTP(BgL_portz00_4098))
{ /* Ieee/output.scm 314 */
BgL_auxz00_4819 = BgL_portz00_4098
; }  else 
{ 
obj_t BgL_auxz00_4822;
BgL_auxz00_4822 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)12058)), BGl_string2963z00zz__r4_output_6_10_3z00, BGl_string2954z00zz__r4_output_6_10_3z00, BgL_portz00_4098); 
FAILURE(BgL_auxz00_4822,BFALSE,BFALSE);} 
{ /* Ieee/output.scm 314 */
obj_t BgL_tmpz00_4811;
if(
CHARP(BgL_charz00_4097))
{ /* Ieee/output.scm 314 */
BgL_tmpz00_4811 = BgL_charz00_4097
; }  else 
{ 
obj_t BgL_auxz00_4814;
BgL_auxz00_4814 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)12058)), BGl_string2963z00zz__r4_output_6_10_3z00, BGl_string2962z00zz__r4_output_6_10_3z00, BgL_charz00_4097); 
FAILURE(BgL_auxz00_4814,BFALSE,BFALSE);} 
BgL_auxz00_4810 = 
CCHAR(BgL_tmpz00_4811); } 
return 
BGl_writezd2charzd22z00zz__r4_output_6_10_3z00(BgL_auxz00_4810, BgL_auxz00_4819);} } 

}



/* _write-byte */
obj_t BGl__writezd2bytezd2zz__r4_output_6_10_3z00(obj_t BgL_env1150z00_18, obj_t BgL_opt1149z00_17)
{
{ /* Ieee/output.scm 319 */
{ /* Ieee/output.scm 319 */
obj_t BgL_g1151z00_1577;
BgL_g1151z00_1577 = 
VECTOR_REF(BgL_opt1149z00_17,((long)0)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1149z00_17)) { case ((long)1) : 

{ /* Ieee/output.scm 319 */
obj_t BgL_portz00_1581;
{ /* Ieee/output.scm 319 */
obj_t BgL_res2181z00_2731;
{ /* Ieee/output.scm 319 */
obj_t BgL_tmpz00_4828;
BgL_tmpz00_4828 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2181z00_2731 = 
BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4828); } 
BgL_portz00_1581 = BgL_res2181z00_2731; } 
{ /* Ieee/output.scm 319 */

{ /* Ieee/output.scm 319 */
unsigned char BgL_bytez00_2732;
{ /* Ieee/output.scm 319 */
obj_t BgL_tmpz00_4831;
if(
INTEGERP(BgL_g1151z00_1577))
{ /* Ieee/output.scm 319 */
BgL_tmpz00_4831 = BgL_g1151z00_1577
; }  else 
{ 
obj_t BgL_auxz00_4834;
BgL_auxz00_4834 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)12309)), BGl_string2966z00zz__r4_output_6_10_3z00, BGl_string2967z00zz__r4_output_6_10_3z00, BgL_g1151z00_1577); 
FAILURE(BgL_auxz00_4834,BFALSE,BFALSE);} 
BgL_bytez00_2732 = 
(unsigned char)CINT(BgL_tmpz00_4831); } 
return 
bgl_display_char(BgL_bytez00_2732, BgL_portz00_1581);} } } break;case ((long)2) : 

{ /* Ieee/output.scm 319 */
obj_t BgL_portz00_1582;
BgL_portz00_1582 = 
VECTOR_REF(BgL_opt1149z00_17,((long)1)); 
{ /* Ieee/output.scm 319 */

{ /* Ieee/output.scm 319 */
unsigned char BgL_bytez00_2735;
{ /* Ieee/output.scm 319 */
obj_t BgL_tmpz00_4841;
if(
INTEGERP(BgL_g1151z00_1577))
{ /* Ieee/output.scm 319 */
BgL_tmpz00_4841 = BgL_g1151z00_1577
; }  else 
{ 
obj_t BgL_auxz00_4844;
BgL_auxz00_4844 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)12309)), BGl_string2966z00zz__r4_output_6_10_3z00, BGl_string2967z00zz__r4_output_6_10_3z00, BgL_g1151z00_1577); 
FAILURE(BgL_auxz00_4844,BFALSE,BFALSE);} 
BgL_bytez00_2735 = 
(unsigned char)CINT(BgL_tmpz00_4841); } 
{ /* Ieee/output.scm 320 */
obj_t BgL_portz00_2737;
if(
OUTPUT_PORTP(BgL_portz00_1582))
{ /* Ieee/output.scm 320 */
BgL_portz00_2737 = BgL_portz00_1582; }  else 
{ 
obj_t BgL_auxz00_4851;
BgL_auxz00_4851 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)12397)), BGl_string2966z00zz__r4_output_6_10_3z00, BGl_string2954z00zz__r4_output_6_10_3z00, BgL_portz00_1582); 
FAILURE(BgL_auxz00_4851,BFALSE,BFALSE);} 
return 
bgl_display_char(BgL_bytez00_2735, BgL_portz00_2737);} } } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol2964z00zz__r4_output_6_10_3z00, BGl_string2960z00zz__r4_output_6_10_3z00, 
BINT(
VECTOR_LENGTH(BgL_opt1149z00_17)));} } } } 

}



/* write-byte */
BGL_EXPORTED_DEF obj_t BGl_writezd2bytezd2zz__r4_output_6_10_3z00(unsigned char BgL_bytez00_15, obj_t BgL_portz00_16)
{
{ /* Ieee/output.scm 319 */
{ /* Ieee/output.scm 320 */
obj_t BgL_portz00_2739;
if(
OUTPUT_PORTP(BgL_portz00_16))
{ /* Ieee/output.scm 320 */
BgL_portz00_2739 = BgL_portz00_16; }  else 
{ 
obj_t BgL_auxz00_4863;
BgL_auxz00_4863 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)12397)), BGl_string2965z00zz__r4_output_6_10_3z00, BGl_string2954z00zz__r4_output_6_10_3z00, BgL_portz00_16); 
FAILURE(BgL_auxz00_4863,BFALSE,BFALSE);} 
return 
bgl_display_char(BgL_bytez00_15, BgL_portz00_2739);} } 

}



/* write-byte-2 */
BGL_EXPORTED_DEF obj_t BGl_writezd2bytezd22z00zz__r4_output_6_10_3z00(unsigned char BgL_bytez00_19, obj_t BgL_portz00_20)
{
{ /* Ieee/output.scm 325 */
return 
bgl_display_char(BgL_bytez00_19, BgL_portz00_20);} 

}



/* &write-byte-2 */
obj_t BGl_z62writezd2bytezd22z62zz__r4_output_6_10_3z00(obj_t BgL_envz00_4099, obj_t BgL_bytez00_4100, obj_t BgL_portz00_4101)
{
{ /* Ieee/output.scm 325 */
{ /* Ieee/output.scm 326 */
obj_t BgL_auxz00_4878;unsigned char BgL_auxz00_4869;
if(
OUTPUT_PORTP(BgL_portz00_4101))
{ /* Ieee/output.scm 326 */
BgL_auxz00_4878 = BgL_portz00_4101
; }  else 
{ 
obj_t BgL_auxz00_4881;
BgL_auxz00_4881 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)12690)), BGl_string2968z00zz__r4_output_6_10_3z00, BGl_string2954z00zz__r4_output_6_10_3z00, BgL_portz00_4101); 
FAILURE(BgL_auxz00_4881,BFALSE,BFALSE);} 
{ /* Ieee/output.scm 326 */
obj_t BgL_tmpz00_4870;
if(
INTEGERP(BgL_bytez00_4100))
{ /* Ieee/output.scm 326 */
BgL_tmpz00_4870 = BgL_bytez00_4100
; }  else 
{ 
obj_t BgL_auxz00_4873;
BgL_auxz00_4873 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)12690)), BGl_string2968z00zz__r4_output_6_10_3z00, BGl_string2967z00zz__r4_output_6_10_3z00, BgL_bytez00_4100); 
FAILURE(BgL_auxz00_4873,BFALSE,BFALSE);} 
BgL_auxz00_4869 = 
(unsigned char)CINT(BgL_tmpz00_4870); } 
return 
BGl_writezd2bytezd22z00zz__r4_output_6_10_3z00(BgL_auxz00_4869, BgL_auxz00_4878);} } 

}



/* illegal-char-rep */
BGL_EXPORTED_DEF obj_t BGl_illegalzd2charzd2repz00zz__r4_output_6_10_3z00(unsigned char BgL_charz00_21)
{
{ /* Ieee/output.scm 331 */
{ /* Ieee/output.scm 332 */
bool_t BgL_test3322z00_4886;
{ /* Ieee/output.scm 332 */
bool_t BgL_test3323z00_4887;
{ /* Ieee/output.scm 332 */
bool_t BgL_res2182z00_2741;
BgL_res2182z00_2741 = 
isalpha(BgL_charz00_21); 
BgL_test3323z00_4887 = BgL_res2182z00_2741; } 
if(BgL_test3323z00_4887)
{ /* Ieee/output.scm 332 */
BgL_test3322z00_4886 = ((bool_t)1)
; }  else 
{ /* Ieee/output.scm 332 */
bool_t BgL_res2183z00_2743;
BgL_res2183z00_2743 = 
isdigit(BgL_charz00_21); 
BgL_test3322z00_4886 = BgL_res2183z00_2743; } } 
if(BgL_test3322z00_4886)
{ /* Ieee/output.scm 332 */
return 
BCHAR(BgL_charz00_21);}  else 
{ 

switch( BgL_charz00_21) { case ((unsigned char)10) : 

return BGl_string2969z00zz__r4_output_6_10_3z00;break;case ((unsigned char)13) : 

return BGl_string2970z00zz__r4_output_6_10_3z00;break;case ((unsigned char)' ') : 

return BGl_string2971z00zz__r4_output_6_10_3z00;break;case ((unsigned char)9) : 

return BGl_string2972z00zz__r4_output_6_10_3z00;break;
default: 
{ /* Ieee/output.scm 344 */
long BgL_iz00_1589;
BgL_iz00_1589 = 
(BgL_charz00_21); 
if(
(BgL_iz00_1589<((long)33)))
{ /* Ieee/output.scm 345 */
return 
bgl_ill_char_rep(BgL_charz00_21);}  else 
{ /* Ieee/output.scm 345 */
return 
BCHAR(BgL_charz00_21);} } } } } } 

}



/* &illegal-char-rep */
obj_t BGl_z62illegalzd2charzd2repz62zz__r4_output_6_10_3z00(obj_t BgL_envz00_4102, obj_t BgL_charz00_4103)
{
{ /* Ieee/output.scm 331 */
{ /* Ieee/output.scm 332 */
unsigned char BgL_auxz00_4897;
{ /* Ieee/output.scm 332 */
obj_t BgL_tmpz00_4898;
if(
CHARP(BgL_charz00_4103))
{ /* Ieee/output.scm 332 */
BgL_tmpz00_4898 = BgL_charz00_4103
; }  else 
{ 
obj_t BgL_auxz00_4901;
BgL_auxz00_4901 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)12975)), BGl_string2973z00zz__r4_output_6_10_3z00, BGl_string2962z00zz__r4_output_6_10_3z00, BgL_charz00_4103); 
FAILURE(BgL_auxz00_4901,BFALSE,BFALSE);} 
BgL_auxz00_4897 = 
CCHAR(BgL_tmpz00_4898); } 
return 
BGl_illegalzd2charzd2repz00zz__r4_output_6_10_3z00(BgL_auxz00_4897);} } 

}



/* print */
BGL_EXPORTED_DEF obj_t BGl_printz00zz__r4_output_6_10_3z00(obj_t BgL_objz00_22)
{
{ /* Ieee/output.scm 352 */
{ /* Ieee/output.scm 353 */
obj_t BgL_portz00_1592;
{ /* Ieee/output.scm 353 */
obj_t BgL_res2186z00_2749;
{ /* Ieee/output.scm 353 */
obj_t BgL_tmpz00_4907;
BgL_tmpz00_4907 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2186z00_2749 = 
BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4907); } 
BgL_portz00_1592 = BgL_res2186z00_2749; } 
{ 
obj_t BgL_lz00_1595;obj_t BgL_resz00_1596;
BgL_lz00_1595 = BgL_objz00_22; 
BgL_resz00_1596 = BNIL; 
BgL_zc3z04anonymousza31289ze3z87_1597:
if(
NULLP(BgL_lz00_1595))
{ /* Ieee/output.scm 356 */
bgl_display_char(((unsigned char)10), BgL_portz00_1592); 
return BgL_resz00_1596;}  else 
{ /* Ieee/output.scm 360 */
obj_t BgL_vz00_1599;
{ /* Ieee/output.scm 360 */
obj_t BgL_pairz00_2751;
if(
PAIRP(BgL_lz00_1595))
{ /* Ieee/output.scm 360 */
BgL_pairz00_2751 = BgL_lz00_1595; }  else 
{ 
obj_t BgL_auxz00_4915;
BgL_auxz00_4915 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)13715)), BGl_string2974z00zz__r4_output_6_10_3z00, BGl_string2975z00zz__r4_output_6_10_3z00, BgL_lz00_1595); 
FAILURE(BgL_auxz00_4915,BFALSE,BFALSE);} 
BgL_vz00_1599 = 
CAR(BgL_pairz00_2751); } 
bgl_display_obj(BgL_vz00_1599, BgL_portz00_1592); 
{ /* Ieee/output.scm 362 */
obj_t BgL_arg1291z00_1600;
{ /* Ieee/output.scm 362 */
obj_t BgL_pairz00_2752;
if(
PAIRP(BgL_lz00_1595))
{ /* Ieee/output.scm 362 */
BgL_pairz00_2752 = BgL_lz00_1595; }  else 
{ 
obj_t BgL_auxz00_4923;
BgL_auxz00_4923 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)13754)), BGl_string2974z00zz__r4_output_6_10_3z00, BGl_string2975z00zz__r4_output_6_10_3z00, BgL_lz00_1595); 
FAILURE(BgL_auxz00_4923,BFALSE,BFALSE);} 
BgL_arg1291z00_1600 = 
CDR(BgL_pairz00_2752); } 
{ 
obj_t BgL_resz00_4929;obj_t BgL_lz00_4928;
BgL_lz00_4928 = BgL_arg1291z00_1600; 
BgL_resz00_4929 = BgL_vz00_1599; 
BgL_resz00_1596 = BgL_resz00_4929; 
BgL_lz00_1595 = BgL_lz00_4928; 
goto BgL_zc3z04anonymousza31289ze3z87_1597;} } } } } } 

}



/* &print */
obj_t BGl_z62printz62zz__r4_output_6_10_3z00(obj_t BgL_envz00_4104, obj_t BgL_objz00_4105)
{
{ /* Ieee/output.scm 352 */
return 
BGl_printz00zz__r4_output_6_10_3z00(BgL_objz00_4105);} 

}



/* display* */
BGL_EXPORTED_DEF obj_t BGl_displayza2za2zz__r4_output_6_10_3z00(obj_t BgL_objz00_23)
{
{ /* Ieee/output.scm 367 */
{ /* Ieee/output.scm 368 */
obj_t BgL_portz00_1602;
{ /* Ieee/output.scm 368 */
obj_t BgL_res2188z00_2754;
{ /* Ieee/output.scm 368 */
obj_t BgL_tmpz00_4931;
BgL_tmpz00_4931 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2188z00_2754 = 
BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4931); } 
BgL_portz00_1602 = BgL_res2188z00_2754; } 
{ 
obj_t BgL_lz00_1604;
BgL_lz00_1604 = BgL_objz00_23; 
BgL_zc3z04anonymousza31292ze3z87_1605:
if(
NULLP(BgL_lz00_1604))
{ /* Ieee/output.scm 370 */
return BUNSPEC;}  else 
{ /* Ieee/output.scm 370 */
{ /* Ieee/output.scm 373 */
obj_t BgL_arg1295z00_1608;
{ /* Ieee/output.scm 373 */
obj_t BgL_pairz00_2757;
if(
PAIRP(BgL_lz00_1604))
{ /* Ieee/output.scm 373 */
BgL_pairz00_2757 = BgL_lz00_1604; }  else 
{ 
obj_t BgL_auxz00_4938;
BgL_auxz00_4938 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)14154)), BGl_string2974z00zz__r4_output_6_10_3z00, BGl_string2975z00zz__r4_output_6_10_3z00, BgL_lz00_1604); 
FAILURE(BgL_auxz00_4938,BFALSE,BFALSE);} 
BgL_arg1295z00_1608 = 
CAR(BgL_pairz00_2757); } 
bgl_display_obj(BgL_arg1295z00_1608, BgL_portz00_1602); } 
{ /* Ieee/output.scm 374 */
obj_t BgL_arg1296z00_1609;
{ /* Ieee/output.scm 374 */
obj_t BgL_pairz00_2758;
if(
PAIRP(BgL_lz00_1604))
{ /* Ieee/output.scm 374 */
BgL_pairz00_2758 = BgL_lz00_1604; }  else 
{ 
obj_t BgL_auxz00_4946;
BgL_auxz00_4946 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)14176)), BGl_string2974z00zz__r4_output_6_10_3z00, BGl_string2975z00zz__r4_output_6_10_3z00, BgL_lz00_1604); 
FAILURE(BgL_auxz00_4946,BFALSE,BFALSE);} 
BgL_arg1296z00_1609 = 
CDR(BgL_pairz00_2758); } 
{ 
obj_t BgL_lz00_4951;
BgL_lz00_4951 = BgL_arg1296z00_1609; 
BgL_lz00_1604 = BgL_lz00_4951; 
goto BgL_zc3z04anonymousza31292ze3z87_1605;} } } } } } 

}



/* &display* */
obj_t BGl_z62displayza2zc0zz__r4_output_6_10_3z00(obj_t BgL_envz00_4106, obj_t BgL_objz00_4107)
{
{ /* Ieee/output.scm 367 */
return 
BGl_displayza2za2zz__r4_output_6_10_3z00(BgL_objz00_4107);} 

}



/* write* */
BGL_EXPORTED_DEF obj_t BGl_writeza2za2zz__r4_output_6_10_3z00(obj_t BgL_objz00_24)
{
{ /* Ieee/output.scm 379 */
{ /* Ieee/output.scm 380 */
obj_t BgL_portz00_1611;
{ /* Ieee/output.scm 380 */
obj_t BgL_res2190z00_2760;
{ /* Ieee/output.scm 380 */
obj_t BgL_tmpz00_4953;
BgL_tmpz00_4953 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2190z00_2760 = 
BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4953); } 
BgL_portz00_1611 = BgL_res2190z00_2760; } 
{ 
obj_t BgL_lz00_1613;
BgL_lz00_1613 = BgL_objz00_24; 
BgL_zc3z04anonymousza31297ze3z87_1614:
if(
NULLP(BgL_lz00_1613))
{ /* Ieee/output.scm 382 */
return BUNSPEC;}  else 
{ /* Ieee/output.scm 382 */
{ /* Ieee/output.scm 385 */
obj_t BgL_arg1299z00_1617;
{ /* Ieee/output.scm 385 */
obj_t BgL_pairz00_2763;
if(
PAIRP(BgL_lz00_1613))
{ /* Ieee/output.scm 385 */
BgL_pairz00_2763 = BgL_lz00_1613; }  else 
{ 
obj_t BgL_auxz00_4960;
BgL_auxz00_4960 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)14572)), BGl_string2974z00zz__r4_output_6_10_3z00, BGl_string2975z00zz__r4_output_6_10_3z00, BgL_lz00_1613); 
FAILURE(BgL_auxz00_4960,BFALSE,BFALSE);} 
BgL_arg1299z00_1617 = 
CAR(BgL_pairz00_2763); } 
bgl_write_obj(BgL_arg1299z00_1617, BgL_portz00_1611); } 
{ /* Ieee/output.scm 386 */
obj_t BgL_arg1300z00_1618;
{ /* Ieee/output.scm 386 */
obj_t BgL_pairz00_2764;
if(
PAIRP(BgL_lz00_1613))
{ /* Ieee/output.scm 386 */
BgL_pairz00_2764 = BgL_lz00_1613; }  else 
{ 
obj_t BgL_auxz00_4968;
BgL_auxz00_4968 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)14594)), BGl_string2974z00zz__r4_output_6_10_3z00, BGl_string2975z00zz__r4_output_6_10_3z00, BgL_lz00_1613); 
FAILURE(BgL_auxz00_4968,BFALSE,BFALSE);} 
BgL_arg1300z00_1618 = 
CDR(BgL_pairz00_2764); } 
{ 
obj_t BgL_lz00_4973;
BgL_lz00_4973 = BgL_arg1300z00_1618; 
BgL_lz00_1613 = BgL_lz00_4973; 
goto BgL_zc3z04anonymousza31297ze3z87_1614;} } } } } } 

}



/* &write* */
obj_t BGl_z62writeza2zc0zz__r4_output_6_10_3z00(obj_t BgL_envz00_4108, obj_t BgL_objz00_4109)
{
{ /* Ieee/output.scm 379 */
return 
BGl_writeza2za2zz__r4_output_6_10_3z00(BgL_objz00_4109);} 

}



/* tprint */
BGL_EXPORTED_DEF obj_t BGl_tprintz00zz__r4_output_6_10_3z00(obj_t BgL_portz00_25, obj_t BgL_objz00_26)
{
{ /* Ieee/output.scm 396 */
{ /* Ieee/output.scm 397 */
obj_t BgL_top3336z00_4976;
BgL_top3336z00_4976 = 
BGL_EXITD_TOP_AS_OBJ(); 
BGL_MUTEX_LOCK(BGl_tprintzd2mutexzd2zz__r4_output_6_10_3z00); 
BGL_EXITD_PUSH_PROTECT(BgL_top3336z00_4976, BGl_tprintzd2mutexzd2zz__r4_output_6_10_3z00); BUNSPEC; 
{ /* Ieee/output.scm 397 */
obj_t BgL_tmp3335z00_4975;
{ /* Ieee/output.scm 398 */
obj_t BgL_runner1303z00_1622;
{ /* Ieee/output.scm 398 */
obj_t BgL_list1301z00_1620;
BgL_list1301z00_1620 = 
MAKE_YOUNG_PAIR(BgL_objz00_26, BNIL); 
BgL_runner1303z00_1622 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_portz00_25, BgL_list1301z00_1620); } 
{ /* Ieee/output.scm 398 */
obj_t BgL_aux1302z00_1621;
{ /* Ieee/output.scm 398 */
obj_t BgL_pairz00_2765;
{ /* Ieee/output.scm 398 */
obj_t BgL_aux2656z00_4260;
BgL_aux2656z00_4260 = BgL_runner1303z00_1622; 
if(
PAIRP(BgL_aux2656z00_4260))
{ /* Ieee/output.scm 398 */
BgL_pairz00_2765 = BgL_aux2656z00_4260; }  else 
{ 
obj_t BgL_auxz00_4984;
BgL_auxz00_4984 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)15156)), BGl_string2950z00zz__r4_output_6_10_3z00, BGl_string2975z00zz__r4_output_6_10_3z00, BgL_aux2656z00_4260); 
FAILURE(BgL_auxz00_4984,BFALSE,BFALSE);} } 
{ /* Ieee/output.scm 398 */
obj_t BgL_aux2658z00_4262;
BgL_aux2658z00_4262 = 
CAR(BgL_pairz00_2765); 
if(
OUTPUT_PORTP(BgL_aux2658z00_4262))
{ /* Ieee/output.scm 398 */
BgL_aux1302z00_1621 = BgL_aux2658z00_4262; }  else 
{ 
obj_t BgL_auxz00_4991;
BgL_auxz00_4991 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)15156)), BGl_string2950z00zz__r4_output_6_10_3z00, BGl_string2954z00zz__r4_output_6_10_3z00, BgL_aux2658z00_4262); 
FAILURE(BgL_auxz00_4991,BFALSE,BFALSE);} } } 
{ /* Ieee/output.scm 398 */
obj_t BgL_pairz00_2766;
{ /* Ieee/output.scm 398 */
obj_t BgL_aux2660z00_4264;
BgL_aux2660z00_4264 = BgL_runner1303z00_1622; 
if(
PAIRP(BgL_aux2660z00_4264))
{ /* Ieee/output.scm 398 */
BgL_pairz00_2766 = BgL_aux2660z00_4264; }  else 
{ 
obj_t BgL_auxz00_4997;
BgL_auxz00_4997 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)15156)), BGl_string2950z00zz__r4_output_6_10_3z00, BGl_string2975z00zz__r4_output_6_10_3z00, BgL_aux2660z00_4264); 
FAILURE(BgL_auxz00_4997,BFALSE,BFALSE);} } 
BgL_runner1303z00_1622 = 
CDR(BgL_pairz00_2766); } 
BGl_fprintz00zz__r4_output_6_10_3z00(BgL_aux1302z00_1621, BgL_runner1303z00_1622); } } 
BgL_tmp3335z00_4975 = 
bgl_flush_output_port(BgL_portz00_25); 
BGL_EXITD_POP_PROTECT(BgL_top3336z00_4976); BUNSPEC; 
BGL_MUTEX_UNLOCK(BGl_tprintzd2mutexzd2zz__r4_output_6_10_3z00); 
return BgL_tmp3335z00_4975;} } } 

}



/* &tprint */
obj_t BGl_z62tprintz62zz__r4_output_6_10_3z00(obj_t BgL_envz00_4110, obj_t BgL_portz00_4111, obj_t BgL_objz00_4112)
{
{ /* Ieee/output.scm 396 */
{ /* Ieee/output.scm 397 */
obj_t BgL_auxz00_5006;
if(
OUTPUT_PORTP(BgL_portz00_4111))
{ /* Ieee/output.scm 397 */
BgL_auxz00_5006 = BgL_portz00_4111
; }  else 
{ 
obj_t BgL_auxz00_5009;
BgL_auxz00_5009 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)15124)), BGl_string2976z00zz__r4_output_6_10_3z00, BGl_string2954z00zz__r4_output_6_10_3z00, BgL_portz00_4111); 
FAILURE(BgL_auxz00_5009,BFALSE,BFALSE);} 
return 
BGl_tprintz00zz__r4_output_6_10_3z00(BgL_auxz00_5006, BgL_objz00_4112);} } 

}



/* fprint */
BGL_EXPORTED_DEF obj_t BGl_fprintz00zz__r4_output_6_10_3z00(obj_t BgL_portz00_27, obj_t BgL_objz00_28)
{
{ /* Ieee/output.scm 404 */
{ 
obj_t BgL_lz00_1625;obj_t BgL_resz00_1626;
BgL_lz00_1625 = BgL_objz00_28; 
BgL_resz00_1626 = BNIL; 
BgL_zc3z04anonymousza31304ze3z87_1627:
if(
NULLP(BgL_lz00_1625))
{ /* Ieee/output.scm 407 */
bgl_display_char(((unsigned char)10), BgL_portz00_27); 
return BgL_resz00_1626;}  else 
{ /* Ieee/output.scm 411 */
obj_t BgL_vz00_1629;
{ /* Ieee/output.scm 411 */
obj_t BgL_pairz00_2769;
if(
PAIRP(BgL_lz00_1625))
{ /* Ieee/output.scm 411 */
BgL_pairz00_2769 = BgL_lz00_1625; }  else 
{ 
obj_t BgL_auxz00_5019;
BgL_auxz00_5019 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)15599)), BGl_string2974z00zz__r4_output_6_10_3z00, BGl_string2975z00zz__r4_output_6_10_3z00, BgL_lz00_1625); 
FAILURE(BgL_auxz00_5019,BFALSE,BFALSE);} 
BgL_vz00_1629 = 
CAR(BgL_pairz00_2769); } 
{ /* Ieee/output.scm 412 */
obj_t BgL_arg1306z00_1630;
{ /* Ieee/output.scm 412 */
obj_t BgL_pairz00_2770;
if(
PAIRP(BgL_lz00_1625))
{ /* Ieee/output.scm 412 */
BgL_pairz00_2770 = BgL_lz00_1625; }  else 
{ 
obj_t BgL_auxz00_5026;
BgL_auxz00_5026 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)15626)), BGl_string2974z00zz__r4_output_6_10_3z00, BGl_string2975z00zz__r4_output_6_10_3z00, BgL_lz00_1625); 
FAILURE(BgL_auxz00_5026,BFALSE,BFALSE);} 
BgL_arg1306z00_1630 = 
CAR(BgL_pairz00_2770); } 
bgl_display_obj(BgL_arg1306z00_1630, BgL_portz00_27); } 
{ /* Ieee/output.scm 413 */
obj_t BgL_arg1307z00_1631;
{ /* Ieee/output.scm 413 */
obj_t BgL_pairz00_2771;
if(
PAIRP(BgL_lz00_1625))
{ /* Ieee/output.scm 413 */
BgL_pairz00_2771 = BgL_lz00_1625; }  else 
{ 
obj_t BgL_auxz00_5034;
BgL_auxz00_5034 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)15652)), BGl_string2974z00zz__r4_output_6_10_3z00, BGl_string2975z00zz__r4_output_6_10_3z00, BgL_lz00_1625); 
FAILURE(BgL_auxz00_5034,BFALSE,BFALSE);} 
BgL_arg1307z00_1631 = 
CDR(BgL_pairz00_2771); } 
{ 
obj_t BgL_resz00_5040;obj_t BgL_lz00_5039;
BgL_lz00_5039 = BgL_arg1307z00_1631; 
BgL_resz00_5040 = BgL_vz00_1629; 
BgL_resz00_1626 = BgL_resz00_5040; 
BgL_lz00_1625 = BgL_lz00_5039; 
goto BgL_zc3z04anonymousza31304ze3z87_1627;} } } } } 

}



/* &fprint */
obj_t BGl_z62fprintz62zz__r4_output_6_10_3z00(obj_t BgL_envz00_4113, obj_t BgL_portz00_4114, obj_t BgL_objz00_4115)
{
{ /* Ieee/output.scm 404 */
{ /* Ieee/output.scm 407 */
obj_t BgL_auxz00_5041;
if(
OUTPUT_PORTP(BgL_portz00_4114))
{ /* Ieee/output.scm 407 */
BgL_auxz00_5041 = BgL_portz00_4114
; }  else 
{ 
obj_t BgL_auxz00_5044;
BgL_auxz00_5044 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)15510)), BGl_string2977z00zz__r4_output_6_10_3z00, BGl_string2954z00zz__r4_output_6_10_3z00, BgL_portz00_4114); 
FAILURE(BgL_auxz00_5044,BFALSE,BFALSE);} 
return 
BGl_fprintz00zz__r4_output_6_10_3z00(BgL_auxz00_5041, BgL_objz00_4115);} } 

}



/* xprintf */
obj_t BGl_xprintfz00zz__r4_output_6_10_3z00(obj_t BgL_procnamez00_29, obj_t BgL_pz00_30, obj_t BgL__fmtz00_31, obj_t BgL_objsz00_32)
{
{ /* Ieee/output.scm 418 */
{ /* Ieee/output.scm 419 */
long BgL_lenz00_1633;
BgL_lenz00_1633 = 
STRING_LENGTH(BgL__fmtz00_31); 
{ 
obj_t BgL_iz00_1635;obj_t BgL_osz00_1636;
BgL_iz00_1635 = 
BINT(((long)0)); 
BgL_osz00_1636 = BgL_objsz00_32; 
BgL_zc3z04anonymousza31308ze3z87_1637:
{ 
long BgL_iz00_1696;obj_t BgL_lz00_1697;obj_t BgL_pz00_1698;obj_t BgL_iz00_1703;obj_t BgL_numz00_1704;long BgL_mincolz00_1705;unsigned char BgL_paddingz00_1706;long BgL_iz00_1717;obj_t BgL_numz00_1718;obj_t BgL_pz00_1719;unsigned char BgL_fz00_1736;long BgL_iz00_1737;bool_t BgL_altzf3zf3_1738;
{ /* Ieee/output.scm 556 */
bool_t BgL_test3346z00_5050;
{ /* Ieee/output.scm 556 */
long BgL_n1z00_2927;
{ /* Ieee/output.scm 556 */
obj_t BgL_tmpz00_5051;
if(
INTEGERP(BgL_iz00_1635))
{ /* Ieee/output.scm 556 */
BgL_tmpz00_5051 = BgL_iz00_1635
; }  else 
{ 
obj_t BgL_auxz00_5054;
BgL_auxz00_5054 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)19607)), BGl_string2974z00zz__r4_output_6_10_3z00, BGl_string2967z00zz__r4_output_6_10_3z00, BgL_iz00_1635); 
FAILURE(BgL_auxz00_5054,BFALSE,BFALSE);} 
BgL_n1z00_2927 = 
(long)CINT(BgL_tmpz00_5051); } 
BgL_test3346z00_5050 = 
(BgL_n1z00_2927<BgL_lenz00_1633); } 
if(BgL_test3346z00_5050)
{ /* Ieee/output.scm 557 */
unsigned char BgL_cz00_1646;
{ /* Ieee/output.scm 557 */
long BgL_kz00_2931;
{ /* Ieee/output.scm 557 */
obj_t BgL_tmpz00_5060;
if(
INTEGERP(BgL_iz00_1635))
{ /* Ieee/output.scm 557 */
BgL_tmpz00_5060 = BgL_iz00_1635
; }  else 
{ 
obj_t BgL_auxz00_5063;
BgL_auxz00_5063 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)19646)), BGl_string2974z00zz__r4_output_6_10_3z00, BGl_string2967z00zz__r4_output_6_10_3z00, BgL_iz00_1635); 
FAILURE(BgL_auxz00_5063,BFALSE,BFALSE);} 
BgL_kz00_2931 = 
(long)CINT(BgL_tmpz00_5060); } 
{ /* Ieee/output.scm 557 */
long BgL_l2574z00_4178;
BgL_l2574z00_4178 = 
STRING_LENGTH(BgL__fmtz00_31); 
if(
BOUND_CHECK(BgL_kz00_2931, BgL_l2574z00_4178))
{ /* Ieee/output.scm 557 */
BgL_cz00_1646 = 
STRING_REF(BgL__fmtz00_31, BgL_kz00_2931); }  else 
{ 
obj_t BgL_auxz00_5072;
BgL_auxz00_5072 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)19629)), BGl_string2988z00zz__r4_output_6_10_3z00, BgL__fmtz00_31, 
(int)(BgL_l2574z00_4178), 
(int)(BgL_kz00_2931)); 
FAILURE(BgL_auxz00_5072,BFALSE,BFALSE);} } } 
if(
(BgL_cz00_1646==((unsigned char)'~')))
{ /* Ieee/output.scm 560 */
bool_t BgL_test3351z00_5080;
{ /* Ieee/output.scm 560 */
long BgL_n1z00_2938;
{ /* Ieee/output.scm 560 */
obj_t BgL_tmpz00_5081;
if(
INTEGERP(BgL_iz00_1635))
{ /* Ieee/output.scm 560 */
BgL_tmpz00_5081 = BgL_iz00_1635
; }  else 
{ 
obj_t BgL_auxz00_5084;
BgL_auxz00_5084 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)19699)), BGl_string2974z00zz__r4_output_6_10_3z00, BGl_string2967z00zz__r4_output_6_10_3z00, BgL_iz00_1635); 
FAILURE(BgL_auxz00_5084,BFALSE,BFALSE);} 
BgL_n1z00_2938 = 
(long)CINT(BgL_tmpz00_5081); } 
BgL_test3351z00_5080 = 
(BgL_n1z00_2938==
(BgL_lenz00_1633-((long)1))); } 
if(BgL_test3351z00_5080)
{ /* Ieee/output.scm 563 */
obj_t BgL_arg1313z00_1650;
{ /* Ieee/output.scm 563 */
long BgL_auxz00_5091;
{ /* Ieee/output.scm 563 */
obj_t BgL_tmpz00_5092;
if(
INTEGERP(BgL_iz00_1635))
{ /* Ieee/output.scm 563 */
BgL_tmpz00_5092 = BgL_iz00_1635
; }  else 
{ 
obj_t BgL_auxz00_5095;
BgL_auxz00_5095 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)19768)), BGl_string2974z00zz__r4_output_6_10_3z00, BGl_string2967z00zz__r4_output_6_10_3z00, BgL_iz00_1635); 
FAILURE(BgL_auxz00_5095,BFALSE,BFALSE);} 
BgL_auxz00_5091 = 
(long)CINT(BgL_tmpz00_5092); } 
BgL_arg1313z00_1650 = 
BGl_substringz00zz__r4_strings_6_7z00(BgL__fmtz00_31, BgL_auxz00_5091, BgL_lenz00_1633); } 
return 
BGl_errorz00zz__errorz00(BgL_procnamez00_29, BGl_string2993z00zz__r4_output_6_10_3z00, BgL_arg1313z00_1650);}  else 
{ /* Ieee/output.scm 564 */
bool_t BgL_test3354z00_5102;
{ /* Ieee/output.scm 564 */
unsigned char BgL_tmpz00_5103;
{ /* Ieee/output.scm 564 */
long BgL_i2577z00_4181;
{ /* Ieee/output.scm 564 */
long BgL_za71za7_2941;
{ /* Ieee/output.scm 564 */
obj_t BgL_tmpz00_5104;
if(
INTEGERP(BgL_iz00_1635))
{ /* Ieee/output.scm 564 */
BgL_tmpz00_5104 = BgL_iz00_1635
; }  else 
{ 
obj_t BgL_auxz00_5107;
BgL_auxz00_5107 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)19837)), BGl_string2974z00zz__r4_output_6_10_3z00, BGl_string2967z00zz__r4_output_6_10_3z00, BgL_iz00_1635); 
FAILURE(BgL_auxz00_5107,BFALSE,BFALSE);} 
BgL_za71za7_2941 = 
(long)CINT(BgL_tmpz00_5104); } 
BgL_i2577z00_4181 = 
(BgL_za71za7_2941+((long)1)); } 
{ /* Ieee/output.scm 564 */
long BgL_l2578z00_4182;
BgL_l2578z00_4182 = 
STRING_LENGTH(BgL__fmtz00_31); 
if(
BOUND_CHECK(BgL_i2577z00_4181, BgL_l2578z00_4182))
{ /* Ieee/output.scm 564 */
BgL_tmpz00_5103 = 
STRING_REF(BgL__fmtz00_31, BgL_i2577z00_4181)
; }  else 
{ 
obj_t BgL_auxz00_5117;
BgL_auxz00_5117 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)19815)), BGl_string2988z00zz__r4_output_6_10_3z00, BgL__fmtz00_31, 
(int)(BgL_l2578z00_4182), 
(int)(BgL_i2577z00_4181)); 
FAILURE(BgL_auxz00_5117,BFALSE,BFALSE);} } } 
BgL_test3354z00_5102 = 
(((unsigned char)':')==BgL_tmpz00_5103); } 
if(BgL_test3354z00_5102)
{ /* Ieee/output.scm 565 */
bool_t BgL_test3357z00_5124;
{ /* Ieee/output.scm 565 */
long BgL_n1z00_2951;
{ /* Ieee/output.scm 565 */
obj_t BgL_tmpz00_5125;
if(
INTEGERP(BgL_iz00_1635))
{ /* Ieee/output.scm 565 */
BgL_tmpz00_5125 = BgL_iz00_1635
; }  else 
{ 
obj_t BgL_auxz00_5128;
BgL_auxz00_5128 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)19856)), BGl_string2974z00zz__r4_output_6_10_3z00, BGl_string2967z00zz__r4_output_6_10_3z00, BgL_iz00_1635); 
FAILURE(BgL_auxz00_5128,BFALSE,BFALSE);} 
BgL_n1z00_2951 = 
(long)CINT(BgL_tmpz00_5125); } 
BgL_test3357z00_5124 = 
(BgL_n1z00_2951==
(BgL_lenz00_1633-((long)2))); } 
if(BgL_test3357z00_5124)
{ /* Ieee/output.scm 568 */
obj_t BgL_arg1319z00_1656;
{ /* Ieee/output.scm 568 */
long BgL_auxz00_5135;
{ /* Ieee/output.scm 568 */
obj_t BgL_tmpz00_5136;
if(
INTEGERP(BgL_iz00_1635))
{ /* Ieee/output.scm 568 */
BgL_tmpz00_5136 = BgL_iz00_1635
; }  else 
{ 
obj_t BgL_auxz00_5139;
BgL_auxz00_5139 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)19937)), BGl_string2974z00zz__r4_output_6_10_3z00, BGl_string2967z00zz__r4_output_6_10_3z00, BgL_iz00_1635); 
FAILURE(BgL_auxz00_5139,BFALSE,BFALSE);} 
BgL_auxz00_5135 = 
(long)CINT(BgL_tmpz00_5136); } 
BgL_arg1319z00_1656 = 
BGl_substringz00zz__r4_strings_6_7z00(BgL__fmtz00_31, BgL_auxz00_5135, BgL_lenz00_1633); } 
return 
BGl_errorz00zz__errorz00(BgL_procnamez00_29, BGl_string2993z00zz__r4_output_6_10_3z00, BgL_arg1319z00_1656);}  else 
{ /* Ieee/output.scm 569 */
unsigned char BgL_arg1322z00_1657;long BgL_arg1324z00_1658;
{ /* Ieee/output.scm 569 */
long BgL_i2581z00_4185;
{ /* Ieee/output.scm 569 */
long BgL_za71za7_2954;
{ /* Ieee/output.scm 569 */
obj_t BgL_tmpz00_5146;
if(
INTEGERP(BgL_iz00_1635))
{ /* Ieee/output.scm 569 */
BgL_tmpz00_5146 = BgL_iz00_1635
; }  else 
{ 
obj_t BgL_auxz00_5149;
BgL_auxz00_5149 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)20002)), BGl_string2974z00zz__r4_output_6_10_3z00, BGl_string2967z00zz__r4_output_6_10_3z00, BgL_iz00_1635); 
FAILURE(BgL_auxz00_5149,BFALSE,BFALSE);} 
BgL_za71za7_2954 = 
(long)CINT(BgL_tmpz00_5146); } 
BgL_i2581z00_4185 = 
(BgL_za71za7_2954+((long)2)); } 
{ /* Ieee/output.scm 569 */
long BgL_l2582z00_4186;
BgL_l2582z00_4186 = 
STRING_LENGTH(BgL__fmtz00_31); 
if(
BOUND_CHECK(BgL_i2581z00_4185, BgL_l2582z00_4186))
{ /* Ieee/output.scm 569 */
BgL_arg1322z00_1657 = 
STRING_REF(BgL__fmtz00_31, BgL_i2581z00_4185); }  else 
{ 
obj_t BgL_auxz00_5159;
BgL_auxz00_5159 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)19980)), BGl_string2988z00zz__r4_output_6_10_3z00, BgL__fmtz00_31, 
(int)(BgL_l2582z00_4186), 
(int)(BgL_i2581z00_4185)); 
FAILURE(BgL_auxz00_5159,BFALSE,BFALSE);} } } 
{ /* Ieee/output.scm 570 */
long BgL_za71za7_2959;
{ /* Ieee/output.scm 570 */
obj_t BgL_tmpz00_5165;
if(
INTEGERP(BgL_iz00_1635))
{ /* Ieee/output.scm 570 */
BgL_tmpz00_5165 = BgL_iz00_1635
; }  else 
{ 
obj_t BgL_auxz00_5168;
BgL_auxz00_5168 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)20023)), BGl_string2974z00zz__r4_output_6_10_3z00, BGl_string2967z00zz__r4_output_6_10_3z00, BgL_iz00_1635); 
FAILURE(BgL_auxz00_5168,BFALSE,BFALSE);} 
BgL_za71za7_2959 = 
(long)CINT(BgL_tmpz00_5165); } 
BgL_arg1324z00_1658 = 
(BgL_za71za7_2959+((long)2)); } 
BgL_fz00_1736 = BgL_arg1322z00_1657; 
BgL_iz00_1737 = BgL_arg1324z00_1658; 
BgL_altzf3zf3_1738 = ((bool_t)1); 
BgL_zc3z04anonymousza31379ze3z87_1739:
{ 

switch( BgL_fz00_1736) { case ((unsigned char)'a') : 
case ((unsigned char)'A') : 

if(BgL_altzf3zf3_1738)
{ /* Ieee/output.scm 500 */
obj_t BgL_arg1381z00_1743;
if(
NULLP(BgL_osz00_1636))
{ /* Ieee/output.scm 424 */
BgL_arg1381z00_1743 = 
BGl_errorz00zz__errorz00(BgL_procnamez00_29, BGl_string2978z00zz__r4_output_6_10_3z00, 
BCHAR(BgL_fz00_1736)); }  else 
{ /* Ieee/output.scm 426 */
obj_t BgL_pairz00_2839;
if(
PAIRP(BgL_osz00_1636))
{ /* Ieee/output.scm 426 */
BgL_pairz00_2839 = BgL_osz00_1636; }  else 
{ 
obj_t BgL_auxz00_5181;
BgL_auxz00_5181 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)16142)), BGl_string2982z00zz__r4_output_6_10_3z00, BGl_string2975z00zz__r4_output_6_10_3z00, BgL_osz00_1636); 
FAILURE(BgL_auxz00_5181,BFALSE,BFALSE);} 
BgL_arg1381z00_1743 = 
CAR(BgL_pairz00_2839); } 
BGl_displayzd2circlezd2zz__pp_circlez00(BgL_arg1381z00_1743, BgL_pz00_30); }  else 
{ /* Ieee/output.scm 501 */
obj_t BgL_arg1382z00_1744;
if(
NULLP(BgL_osz00_1636))
{ /* Ieee/output.scm 424 */
BgL_arg1382z00_1744 = 
BGl_errorz00zz__errorz00(BgL_procnamez00_29, BGl_string2978z00zz__r4_output_6_10_3z00, 
BCHAR(BgL_fz00_1736)); }  else 
{ /* Ieee/output.scm 426 */
obj_t BgL_pairz00_2842;
if(
PAIRP(BgL_osz00_1636))
{ /* Ieee/output.scm 426 */
BgL_pairz00_2842 = BgL_osz00_1636; }  else 
{ 
obj_t BgL_auxz00_5193;
BgL_auxz00_5193 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)16142)), BGl_string2982z00zz__r4_output_6_10_3z00, BGl_string2975z00zz__r4_output_6_10_3z00, BgL_osz00_1636); 
FAILURE(BgL_auxz00_5193,BFALSE,BFALSE);} 
BgL_arg1382z00_1744 = 
CAR(BgL_pairz00_2842); } 
bgl_display_obj(BgL_arg1382z00_1744, BgL_pz00_30); } 
{ /* Ieee/output.scm 502 */
long BgL_arg1383z00_1745;obj_t BgL_arg1384z00_1746;
BgL_arg1383z00_1745 = 
(BgL_iz00_1737+((long)1)); 
{ /* Ieee/output.scm 502 */
obj_t BgL_pairz00_2845;
if(
PAIRP(BgL_osz00_1636))
{ /* Ieee/output.scm 502 */
BgL_pairz00_2845 = BgL_osz00_1636; }  else 
{ 
obj_t BgL_auxz00_5202;
BgL_auxz00_5202 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)18256)), BGl_string2982z00zz__r4_output_6_10_3z00, BGl_string2975z00zz__r4_output_6_10_3z00, BgL_osz00_1636); 
FAILURE(BgL_auxz00_5202,BFALSE,BFALSE);} 
BgL_arg1384z00_1746 = 
CDR(BgL_pairz00_2845); } 
{ 
obj_t BgL_osz00_5209;obj_t BgL_iz00_5207;
BgL_iz00_5207 = 
BINT(BgL_arg1383z00_1745); 
BgL_osz00_5209 = BgL_arg1384z00_1746; 
BgL_osz00_1636 = BgL_osz00_5209; 
BgL_iz00_1635 = BgL_iz00_5207; 
goto BgL_zc3z04anonymousza31308ze3z87_1637;} } break;case ((unsigned char)'s') : 
case ((unsigned char)'S') : 

if(BgL_altzf3zf3_1738)
{ /* Ieee/output.scm 505 */
obj_t BgL_arg1385z00_1747;
if(
NULLP(BgL_osz00_1636))
{ /* Ieee/output.scm 424 */
BgL_arg1385z00_1747 = 
BGl_errorz00zz__errorz00(BgL_procnamez00_29, BGl_string2978z00zz__r4_output_6_10_3z00, 
BCHAR(BgL_fz00_1736)); }  else 
{ /* Ieee/output.scm 426 */
obj_t BgL_pairz00_2848;
if(
PAIRP(BgL_osz00_1636))
{ /* Ieee/output.scm 426 */
BgL_pairz00_2848 = BgL_osz00_1636; }  else 
{ 
obj_t BgL_auxz00_5217;
BgL_auxz00_5217 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)16142)), BGl_string2982z00zz__r4_output_6_10_3z00, BGl_string2975z00zz__r4_output_6_10_3z00, BgL_osz00_1636); 
FAILURE(BgL_auxz00_5217,BFALSE,BFALSE);} 
BgL_arg1385z00_1747 = 
CAR(BgL_pairz00_2848); } 
BGl_writezd2circlezd2zz__pp_circlez00(BgL_arg1385z00_1747, BgL_pz00_30); }  else 
{ /* Ieee/output.scm 506 */
obj_t BgL_arg1386z00_1748;
if(
NULLP(BgL_osz00_1636))
{ /* Ieee/output.scm 424 */
BgL_arg1386z00_1748 = 
BGl_errorz00zz__errorz00(BgL_procnamez00_29, BGl_string2978z00zz__r4_output_6_10_3z00, 
BCHAR(BgL_fz00_1736)); }  else 
{ /* Ieee/output.scm 426 */
obj_t BgL_pairz00_2851;
if(
PAIRP(BgL_osz00_1636))
{ /* Ieee/output.scm 426 */
BgL_pairz00_2851 = BgL_osz00_1636; }  else 
{ 
obj_t BgL_auxz00_5229;
BgL_auxz00_5229 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)16142)), BGl_string2982z00zz__r4_output_6_10_3z00, BGl_string2975z00zz__r4_output_6_10_3z00, BgL_osz00_1636); 
FAILURE(BgL_auxz00_5229,BFALSE,BFALSE);} 
BgL_arg1386z00_1748 = 
CAR(BgL_pairz00_2851); } 
{ /* Ieee/output.scm 506 */
obj_t BgL_list1387z00_1749;
BgL_list1387z00_1749 = 
MAKE_YOUNG_PAIR(BgL_pz00_30, BNIL); 
BGl_writez00zz__r4_output_6_10_3z00(BgL_arg1386z00_1748, BgL_list1387z00_1749); } } 
{ /* Ieee/output.scm 507 */
long BgL_arg1388z00_1750;obj_t BgL_arg1389z00_1751;
BgL_arg1388z00_1750 = 
(BgL_iz00_1737+((long)1)); 
{ /* Ieee/output.scm 507 */
obj_t BgL_pairz00_2854;
if(
PAIRP(BgL_osz00_1636))
{ /* Ieee/output.scm 507 */
BgL_pairz00_2854 = BgL_osz00_1636; }  else 
{ 
obj_t BgL_auxz00_5239;
BgL_auxz00_5239 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)18379)), BGl_string2982z00zz__r4_output_6_10_3z00, BGl_string2975z00zz__r4_output_6_10_3z00, BgL_osz00_1636); 
FAILURE(BgL_auxz00_5239,BFALSE,BFALSE);} 
BgL_arg1389z00_1751 = 
CDR(BgL_pairz00_2854); } 
{ 
obj_t BgL_osz00_5246;obj_t BgL_iz00_5244;
BgL_iz00_5244 = 
BINT(BgL_arg1388z00_1750); 
BgL_osz00_5246 = BgL_arg1389z00_1751; 
BgL_osz00_1636 = BgL_osz00_5246; 
BgL_iz00_1635 = BgL_iz00_5244; 
goto BgL_zc3z04anonymousza31308ze3z87_1637;} } break;case ((unsigned char)'v') : 
case ((unsigned char)'V') : 

if(BgL_altzf3zf3_1738)
{ /* Ieee/output.scm 510 */
obj_t BgL_arg1390z00_1752;
if(
NULLP(BgL_osz00_1636))
{ /* Ieee/output.scm 424 */
BgL_arg1390z00_1752 = 
BGl_errorz00zz__errorz00(BgL_procnamez00_29, BGl_string2978z00zz__r4_output_6_10_3z00, 
BCHAR(BgL_fz00_1736)); }  else 
{ /* Ieee/output.scm 426 */
obj_t BgL_pairz00_2857;
if(
PAIRP(BgL_osz00_1636))
{ /* Ieee/output.scm 426 */
BgL_pairz00_2857 = BgL_osz00_1636; }  else 
{ 
obj_t BgL_auxz00_5254;
BgL_auxz00_5254 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)16142)), BGl_string2982z00zz__r4_output_6_10_3z00, BGl_string2975z00zz__r4_output_6_10_3z00, BgL_osz00_1636); 
FAILURE(BgL_auxz00_5254,BFALSE,BFALSE);} 
BgL_arg1390z00_1752 = 
CAR(BgL_pairz00_2857); } 
BGl_displayzd2circlezd2zz__pp_circlez00(BgL_arg1390z00_1752, BgL_pz00_30); }  else 
{ /* Ieee/output.scm 511 */
obj_t BgL_arg1391z00_1753;
if(
NULLP(BgL_osz00_1636))
{ /* Ieee/output.scm 424 */
BgL_arg1391z00_1753 = 
BGl_errorz00zz__errorz00(BgL_procnamez00_29, BGl_string2978z00zz__r4_output_6_10_3z00, 
BCHAR(BgL_fz00_1736)); }  else 
{ /* Ieee/output.scm 426 */
obj_t BgL_pairz00_2860;
if(
PAIRP(BgL_osz00_1636))
{ /* Ieee/output.scm 426 */
BgL_pairz00_2860 = BgL_osz00_1636; }  else 
{ 
obj_t BgL_auxz00_5266;
BgL_auxz00_5266 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)16142)), BGl_string2982z00zz__r4_output_6_10_3z00, BGl_string2975z00zz__r4_output_6_10_3z00, BgL_osz00_1636); 
FAILURE(BgL_auxz00_5266,BFALSE,BFALSE);} 
BgL_arg1391z00_1753 = 
CAR(BgL_pairz00_2860); } 
bgl_display_obj(BgL_arg1391z00_1753, BgL_pz00_30); } 
bgl_display_char(((unsigned char)10), BgL_pz00_30); 
{ /* Ieee/output.scm 513 */
long BgL_arg1392z00_1754;obj_t BgL_arg1393z00_1755;
BgL_arg1392z00_1754 = 
(BgL_iz00_1737+((long)1)); 
{ /* Ieee/output.scm 513 */
obj_t BgL_pairz00_2864;
if(
PAIRP(BgL_osz00_1636))
{ /* Ieee/output.scm 513 */
BgL_pairz00_2864 = BgL_osz00_1636; }  else 
{ 
obj_t BgL_auxz00_5276;
BgL_auxz00_5276 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)18520)), BGl_string2982z00zz__r4_output_6_10_3z00, BGl_string2975z00zz__r4_output_6_10_3z00, BgL_osz00_1636); 
FAILURE(BgL_auxz00_5276,BFALSE,BFALSE);} 
BgL_arg1393z00_1755 = 
CDR(BgL_pairz00_2864); } 
{ 
obj_t BgL_osz00_5283;obj_t BgL_iz00_5281;
BgL_iz00_5281 = 
BINT(BgL_arg1392z00_1754); 
BgL_osz00_5283 = BgL_arg1393z00_1755; 
BgL_osz00_1636 = BgL_osz00_5283; 
BgL_iz00_1635 = BgL_iz00_5281; 
goto BgL_zc3z04anonymousza31308ze3z87_1637;} } break;case ((unsigned char)'c') : 
case ((unsigned char)'C') : 

{ /* Ieee/output.scm 515 */
obj_t BgL_oz00_1756;
if(
NULLP(BgL_osz00_1636))
{ /* Ieee/output.scm 424 */
BgL_oz00_1756 = 
BGl_errorz00zz__errorz00(BgL_procnamez00_29, BGl_string2978z00zz__r4_output_6_10_3z00, 
BCHAR(BgL_fz00_1736)); }  else 
{ /* Ieee/output.scm 426 */
obj_t BgL_pairz00_2867;
if(
PAIRP(BgL_osz00_1636))
{ /* Ieee/output.scm 426 */
BgL_pairz00_2867 = BgL_osz00_1636; }  else 
{ 
obj_t BgL_auxz00_5290;
BgL_auxz00_5290 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)16142)), BGl_string2982z00zz__r4_output_6_10_3z00, BGl_string2975z00zz__r4_output_6_10_3z00, BgL_osz00_1636); 
FAILURE(BgL_auxz00_5290,BFALSE,BFALSE);} 
BgL_oz00_1756 = 
CAR(BgL_pairz00_2867); } 
if(
CHARP(BgL_oz00_1756))
{ /* Ieee/output.scm 516 */
{ /* Ieee/output.scm 314 */
unsigned char BgL_tmpz00_5297;
BgL_tmpz00_5297 = 
CCHAR(BgL_oz00_1756); 
bgl_display_char(BgL_tmpz00_5297, BgL_pz00_30); } 
{ /* Ieee/output.scm 520 */
long BgL_arg1395z00_1758;obj_t BgL_arg1396z00_1759;
BgL_arg1395z00_1758 = 
(BgL_iz00_1737+((long)1)); 
{ /* Ieee/output.scm 520 */
obj_t BgL_pairz00_2873;
if(
PAIRP(BgL_osz00_1636))
{ /* Ieee/output.scm 520 */
BgL_pairz00_2873 = BgL_osz00_1636; }  else 
{ 
obj_t BgL_auxz00_5303;
BgL_auxz00_5303 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)18702)), BGl_string2982z00zz__r4_output_6_10_3z00, BGl_string2975z00zz__r4_output_6_10_3z00, BgL_osz00_1636); 
FAILURE(BgL_auxz00_5303,BFALSE,BFALSE);} 
BgL_arg1396z00_1759 = 
CDR(BgL_pairz00_2873); } 
{ 
obj_t BgL_osz00_5310;obj_t BgL_iz00_5308;
BgL_iz00_5308 = 
BINT(BgL_arg1395z00_1758); 
BgL_osz00_5310 = BgL_arg1396z00_1759; 
BgL_osz00_1636 = BgL_osz00_5310; 
BgL_iz00_1635 = BgL_iz00_5308; 
goto BgL_zc3z04anonymousza31308ze3z87_1637;} } }  else 
{ /* Ieee/output.scm 516 */
return 
BGl_errorz00zz__errorz00(BgL_procnamez00_29, BGl_string2983z00zz__r4_output_6_10_3z00, BgL_oz00_1756);} } break;case ((unsigned char)'d') : 
case ((unsigned char)'D') : 

{ /* Ieee/output.scm 522 */
obj_t BgL_arg1397z00_1760;
if(
NULLP(BgL_osz00_1636))
{ /* Ieee/output.scm 424 */
BgL_arg1397z00_1760 = 
BGl_errorz00zz__errorz00(BgL_procnamez00_29, BGl_string2978z00zz__r4_output_6_10_3z00, 
BCHAR(BgL_fz00_1736)); }  else 
{ /* Ieee/output.scm 426 */
obj_t BgL_pairz00_2876;
if(
PAIRP(BgL_osz00_1636))
{ /* Ieee/output.scm 426 */
BgL_pairz00_2876 = BgL_osz00_1636; }  else 
{ 
obj_t BgL_auxz00_5318;
BgL_auxz00_5318 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)16142)), BGl_string2982z00zz__r4_output_6_10_3z00, BGl_string2975z00zz__r4_output_6_10_3z00, BgL_osz00_1636); 
FAILURE(BgL_auxz00_5318,BFALSE,BFALSE);} 
BgL_arg1397z00_1760 = 
CAR(BgL_pairz00_2876); } 
if(
BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_arg1397z00_1760))
{ /* Ieee/output.scm 429 */
bgl_display_obj(
BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(BgL_arg1397z00_1760, 
BINT(((long)10))), BgL_pz00_30); }  else 
{ /* Ieee/output.scm 429 */
BGl_bigloozd2typezd2errorz00zz__errorz00(BgL_procnamez00_29, BGl_string2984z00zz__r4_output_6_10_3z00, BgL_arg1397z00_1760); } } 
{ /* Ieee/output.scm 523 */
long BgL_arg1398z00_1761;obj_t BgL_arg1399z00_1762;
BgL_arg1398z00_1761 = 
(BgL_iz00_1737+((long)1)); 
{ /* Ieee/output.scm 523 */
obj_t BgL_pairz00_2881;
if(
PAIRP(BgL_osz00_1636))
{ /* Ieee/output.scm 523 */
BgL_pairz00_2881 = BgL_osz00_1636; }  else 
{ 
obj_t BgL_auxz00_5332;
BgL_auxz00_5332 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)18784)), BGl_string2982z00zz__r4_output_6_10_3z00, BGl_string2975z00zz__r4_output_6_10_3z00, BgL_osz00_1636); 
FAILURE(BgL_auxz00_5332,BFALSE,BFALSE);} 
BgL_arg1399z00_1762 = 
CDR(BgL_pairz00_2881); } 
{ 
obj_t BgL_osz00_5339;obj_t BgL_iz00_5337;
BgL_iz00_5337 = 
BINT(BgL_arg1398z00_1761); 
BgL_osz00_5339 = BgL_arg1399z00_1762; 
BgL_osz00_1636 = BgL_osz00_5339; 
BgL_iz00_1635 = BgL_iz00_5337; 
goto BgL_zc3z04anonymousza31308ze3z87_1637;} } break;case ((unsigned char)'x') : 
case ((unsigned char)'X') : 

{ /* Ieee/output.scm 525 */
obj_t BgL_arg1400z00_1763;
if(
NULLP(BgL_osz00_1636))
{ /* Ieee/output.scm 424 */
BgL_arg1400z00_1763 = 
BGl_errorz00zz__errorz00(BgL_procnamez00_29, BGl_string2978z00zz__r4_output_6_10_3z00, 
BCHAR(BgL_fz00_1736)); }  else 
{ /* Ieee/output.scm 426 */
obj_t BgL_pairz00_2884;
if(
PAIRP(BgL_osz00_1636))
{ /* Ieee/output.scm 426 */
BgL_pairz00_2884 = BgL_osz00_1636; }  else 
{ 
obj_t BgL_auxz00_5346;
BgL_auxz00_5346 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)16142)), BGl_string2982z00zz__r4_output_6_10_3z00, BGl_string2975z00zz__r4_output_6_10_3z00, BgL_osz00_1636); 
FAILURE(BgL_auxz00_5346,BFALSE,BFALSE);} 
BgL_arg1400z00_1763 = 
CAR(BgL_pairz00_2884); } 
if(
BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_arg1400z00_1763))
{ /* Ieee/output.scm 429 */
bgl_display_obj(
BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(BgL_arg1400z00_1763, 
BINT(((long)16))), BgL_pz00_30); }  else 
{ /* Ieee/output.scm 429 */
BGl_bigloozd2typezd2errorz00zz__errorz00(BgL_procnamez00_29, BGl_string2984z00zz__r4_output_6_10_3z00, BgL_arg1400z00_1763); } } 
{ /* Ieee/output.scm 526 */
long BgL_arg1401z00_1764;obj_t BgL_arg1402z00_1765;
BgL_arg1401z00_1764 = 
(BgL_iz00_1737+((long)1)); 
{ /* Ieee/output.scm 526 */
obj_t BgL_pairz00_2889;
if(
PAIRP(BgL_osz00_1636))
{ /* Ieee/output.scm 526 */
BgL_pairz00_2889 = BgL_osz00_1636; }  else 
{ 
obj_t BgL_auxz00_5360;
BgL_auxz00_5360 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)18863)), BGl_string2982z00zz__r4_output_6_10_3z00, BGl_string2975z00zz__r4_output_6_10_3z00, BgL_osz00_1636); 
FAILURE(BgL_auxz00_5360,BFALSE,BFALSE);} 
BgL_arg1402z00_1765 = 
CDR(BgL_pairz00_2889); } 
{ 
obj_t BgL_osz00_5367;obj_t BgL_iz00_5365;
BgL_iz00_5365 = 
BINT(BgL_arg1401z00_1764); 
BgL_osz00_5367 = BgL_arg1402z00_1765; 
BgL_osz00_1636 = BgL_osz00_5367; 
BgL_iz00_1635 = BgL_iz00_5365; 
goto BgL_zc3z04anonymousza31308ze3z87_1637;} } break;case ((unsigned char)'o') : 
case ((unsigned char)'O') : 

{ /* Ieee/output.scm 528 */
obj_t BgL_arg1404z00_1766;
if(
NULLP(BgL_osz00_1636))
{ /* Ieee/output.scm 424 */
BgL_arg1404z00_1766 = 
BGl_errorz00zz__errorz00(BgL_procnamez00_29, BGl_string2978z00zz__r4_output_6_10_3z00, 
BCHAR(BgL_fz00_1736)); }  else 
{ /* Ieee/output.scm 426 */
obj_t BgL_pairz00_2892;
if(
PAIRP(BgL_osz00_1636))
{ /* Ieee/output.scm 426 */
BgL_pairz00_2892 = BgL_osz00_1636; }  else 
{ 
obj_t BgL_auxz00_5374;
BgL_auxz00_5374 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)16142)), BGl_string2982z00zz__r4_output_6_10_3z00, BGl_string2975z00zz__r4_output_6_10_3z00, BgL_osz00_1636); 
FAILURE(BgL_auxz00_5374,BFALSE,BFALSE);} 
BgL_arg1404z00_1766 = 
CAR(BgL_pairz00_2892); } 
if(
BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_arg1404z00_1766))
{ /* Ieee/output.scm 429 */
bgl_display_obj(
BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(BgL_arg1404z00_1766, 
BINT(((long)8))), BgL_pz00_30); }  else 
{ /* Ieee/output.scm 429 */
BGl_bigloozd2typezd2errorz00zz__errorz00(BgL_procnamez00_29, BGl_string2984z00zz__r4_output_6_10_3z00, BgL_arg1404z00_1766); } } 
{ /* Ieee/output.scm 529 */
long BgL_arg1405z00_1767;obj_t BgL_arg1406z00_1768;
BgL_arg1405z00_1767 = 
(BgL_iz00_1737+((long)1)); 
{ /* Ieee/output.scm 529 */
obj_t BgL_pairz00_2897;
if(
PAIRP(BgL_osz00_1636))
{ /* Ieee/output.scm 529 */
BgL_pairz00_2897 = BgL_osz00_1636; }  else 
{ 
obj_t BgL_auxz00_5388;
BgL_auxz00_5388 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)18941)), BGl_string2982z00zz__r4_output_6_10_3z00, BGl_string2975z00zz__r4_output_6_10_3z00, BgL_osz00_1636); 
FAILURE(BgL_auxz00_5388,BFALSE,BFALSE);} 
BgL_arg1406z00_1768 = 
CDR(BgL_pairz00_2897); } 
{ 
obj_t BgL_osz00_5395;obj_t BgL_iz00_5393;
BgL_iz00_5393 = 
BINT(BgL_arg1405z00_1767); 
BgL_osz00_5395 = BgL_arg1406z00_1768; 
BgL_osz00_1636 = BgL_osz00_5395; 
BgL_iz00_1635 = BgL_iz00_5393; 
goto BgL_zc3z04anonymousza31308ze3z87_1637;} } break;case ((unsigned char)'b') : 
case ((unsigned char)'B') : 

{ /* Ieee/output.scm 531 */
obj_t BgL_arg1407z00_1769;
if(
NULLP(BgL_osz00_1636))
{ /* Ieee/output.scm 424 */
BgL_arg1407z00_1769 = 
BGl_errorz00zz__errorz00(BgL_procnamez00_29, BGl_string2978z00zz__r4_output_6_10_3z00, 
BCHAR(BgL_fz00_1736)); }  else 
{ /* Ieee/output.scm 426 */
obj_t BgL_pairz00_2900;
if(
PAIRP(BgL_osz00_1636))
{ /* Ieee/output.scm 426 */
BgL_pairz00_2900 = BgL_osz00_1636; }  else 
{ 
obj_t BgL_auxz00_5402;
BgL_auxz00_5402 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)16142)), BGl_string2982z00zz__r4_output_6_10_3z00, BGl_string2975z00zz__r4_output_6_10_3z00, BgL_osz00_1636); 
FAILURE(BgL_auxz00_5402,BFALSE,BFALSE);} 
BgL_arg1407z00_1769 = 
CAR(BgL_pairz00_2900); } 
if(
BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_arg1407z00_1769))
{ /* Ieee/output.scm 429 */
bgl_display_obj(
BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(BgL_arg1407z00_1769, 
BINT(((long)2))), BgL_pz00_30); }  else 
{ /* Ieee/output.scm 429 */
BGl_bigloozd2typezd2errorz00zz__errorz00(BgL_procnamez00_29, BGl_string2984z00zz__r4_output_6_10_3z00, BgL_arg1407z00_1769); } } 
{ /* Ieee/output.scm 532 */
long BgL_arg1409z00_1770;obj_t BgL_arg1410z00_1771;
BgL_arg1409z00_1770 = 
(BgL_iz00_1737+((long)1)); 
{ /* Ieee/output.scm 532 */
obj_t BgL_pairz00_2905;
if(
PAIRP(BgL_osz00_1636))
{ /* Ieee/output.scm 532 */
BgL_pairz00_2905 = BgL_osz00_1636; }  else 
{ 
obj_t BgL_auxz00_5416;
BgL_auxz00_5416 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)19019)), BGl_string2982z00zz__r4_output_6_10_3z00, BGl_string2975z00zz__r4_output_6_10_3z00, BgL_osz00_1636); 
FAILURE(BgL_auxz00_5416,BFALSE,BFALSE);} 
BgL_arg1410z00_1771 = 
CDR(BgL_pairz00_2905); } 
{ 
obj_t BgL_osz00_5423;obj_t BgL_iz00_5421;
BgL_iz00_5421 = 
BINT(BgL_arg1409z00_1770); 
BgL_osz00_5423 = BgL_arg1410z00_1771; 
BgL_osz00_1636 = BgL_osz00_5423; 
BgL_iz00_1635 = BgL_iz00_5421; 
goto BgL_zc3z04anonymousza31308ze3z87_1637;} } break;case ((unsigned char)'%') : 
case ((unsigned char)'n') : 

bgl_display_char(((unsigned char)10), BgL_pz00_30); 
{ /* Ieee/output.scm 535 */
long BgL_arg1411z00_1772;
BgL_arg1411z00_1772 = 
(BgL_iz00_1737+((long)1)); 
{ 
obj_t BgL_iz00_5426;
BgL_iz00_5426 = 
BINT(BgL_arg1411z00_1772); 
BgL_iz00_1635 = BgL_iz00_5426; 
goto BgL_zc3z04anonymousza31308ze3z87_1637;} } break;case ((unsigned char)'r') : 

bgl_display_char(((unsigned char)13), BgL_pz00_30); 
{ /* Ieee/output.scm 538 */
long BgL_arg1412z00_1773;
BgL_arg1412z00_1773 = 
(BgL_iz00_1737+((long)1)); 
{ 
obj_t BgL_iz00_5430;
BgL_iz00_5430 = 
BINT(BgL_arg1412z00_1773); 
BgL_iz00_1635 = BgL_iz00_5430; 
goto BgL_zc3z04anonymousza31308ze3z87_1637;} } break;case ((unsigned char)'l') : 
case ((unsigned char)'L') : 

{ /* Ieee/output.scm 540 */
obj_t BgL_arg1413z00_1774;
if(
NULLP(BgL_osz00_1636))
{ /* Ieee/output.scm 424 */
BgL_arg1413z00_1774 = 
BGl_errorz00zz__errorz00(BgL_procnamez00_29, BGl_string2978z00zz__r4_output_6_10_3z00, 
BCHAR(BgL_fz00_1736)); }  else 
{ /* Ieee/output.scm 426 */
obj_t BgL_pairz00_2915;
if(
PAIRP(BgL_osz00_1636))
{ /* Ieee/output.scm 426 */
BgL_pairz00_2915 = BgL_osz00_1636; }  else 
{ 
obj_t BgL_auxz00_5438;
BgL_auxz00_5438 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)16142)), BGl_string2982z00zz__r4_output_6_10_3z00, BGl_string2975z00zz__r4_output_6_10_3z00, BgL_osz00_1636); 
FAILURE(BgL_auxz00_5438,BFALSE,BFALSE);} 
BgL_arg1413z00_1774 = 
CAR(BgL_pairz00_2915); } 
BGl_printzd2flatzd2listze70ze7zz__r4_output_6_10_3z00(BgL_arg1413z00_1774, BgL_pz00_30, BGl_string2985z00zz__r4_output_6_10_3z00); } 
{ /* Ieee/output.scm 541 */
long BgL_arg1414z00_1775;obj_t BgL_arg1415z00_1776;
BgL_arg1414z00_1775 = 
(BgL_iz00_1737+((long)1)); 
{ /* Ieee/output.scm 541 */
obj_t BgL_pairz00_2918;
if(
PAIRP(BgL_osz00_1636))
{ /* Ieee/output.scm 541 */
BgL_pairz00_2918 = BgL_osz00_1636; }  else 
{ 
obj_t BgL_auxz00_5447;
BgL_auxz00_5447 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)19225)), BGl_string2982z00zz__r4_output_6_10_3z00, BGl_string2975z00zz__r4_output_6_10_3z00, BgL_osz00_1636); 
FAILURE(BgL_auxz00_5447,BFALSE,BFALSE);} 
BgL_arg1415z00_1776 = 
CDR(BgL_pairz00_2918); } 
{ 
obj_t BgL_osz00_5454;obj_t BgL_iz00_5452;
BgL_iz00_5452 = 
BINT(BgL_arg1414z00_1775); 
BgL_osz00_5454 = BgL_arg1415z00_1776; 
BgL_osz00_1636 = BgL_osz00_5454; 
BgL_iz00_1635 = BgL_iz00_5452; 
goto BgL_zc3z04anonymousza31308ze3z87_1637;} } break;case ((unsigned char)'(') : 

{ /* Ieee/output.scm 543 */
obj_t BgL_niz00_1777;
{ /* Ieee/output.scm 543 */
obj_t BgL_arg1417z00_1779;
if(
NULLP(BgL_osz00_1636))
{ /* Ieee/output.scm 424 */
BgL_arg1417z00_1779 = 
BGl_errorz00zz__errorz00(BgL_procnamez00_29, BGl_string2978z00zz__r4_output_6_10_3z00, 
BCHAR(BgL_fz00_1736)); }  else 
{ /* Ieee/output.scm 426 */
obj_t BgL_pairz00_2921;
if(
PAIRP(BgL_osz00_1636))
{ /* Ieee/output.scm 426 */
BgL_pairz00_2921 = BgL_osz00_1636; }  else 
{ 
obj_t BgL_auxz00_5461;
BgL_auxz00_5461 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)16142)), BGl_string2982z00zz__r4_output_6_10_3z00, BGl_string2975z00zz__r4_output_6_10_3z00, BgL_osz00_1636); 
FAILURE(BgL_auxz00_5461,BFALSE,BFALSE);} 
BgL_arg1417z00_1779 = 
CAR(BgL_pairz00_2921); } 
BgL_iz00_1696 = BgL_iz00_1737; 
BgL_lz00_1697 = BgL_arg1417z00_1779; 
BgL_pz00_1698 = BgL_pz00_30; 
{ /* Ieee/output.scm 449 */
obj_t BgL_jz00_1700;
BgL_jz00_1700 = 
BGl_stringzd2indexzd2zz__r4_strings_6_7z00(BgL__fmtz00_31, 
BCHAR(((unsigned char)')')), 
BINT(BgL_iz00_1696)); 
if(
CBOOL(BgL_jz00_1700))
{ /* Ieee/output.scm 452 */
obj_t BgL_sepz00_1701;
{ /* Ieee/output.scm 452 */
long BgL_arg1355z00_1702;
BgL_arg1355z00_1702 = 
(BgL_iz00_1696+((long)1)); 
{ /* Ieee/output.scm 452 */
long BgL_auxz00_5472;
{ /* Ieee/output.scm 452 */
obj_t BgL_tmpz00_5473;
if(
INTEGERP(BgL_jz00_1700))
{ /* Ieee/output.scm 452 */
BgL_tmpz00_5473 = BgL_jz00_1700
; }  else 
{ 
obj_t BgL_auxz00_5476;
BgL_auxz00_5476 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)16811)), BGl_string2992z00zz__r4_output_6_10_3z00, BGl_string2967z00zz__r4_output_6_10_3z00, BgL_jz00_1700); 
FAILURE(BgL_auxz00_5476,BFALSE,BFALSE);} 
BgL_auxz00_5472 = 
(long)CINT(BgL_tmpz00_5473); } 
BgL_sepz00_1701 = 
BGl_substringz00zz__r4_strings_6_7z00(BgL__fmtz00_31, BgL_arg1355z00_1702, BgL_auxz00_5472); } } 
BGl_printzd2flatzd2listze70ze7zz__r4_output_6_10_3z00(BgL_lz00_1697, BgL_pz00_1698, BgL_sepz00_1701); 
{ 
obj_t BgL_tmpz00_5483;
if(
INTEGERP(BgL_jz00_1700))
{ /* Ieee/output.scm 454 */
BgL_tmpz00_5483 = BgL_jz00_1700
; }  else 
{ 
obj_t BgL_auxz00_5486;
BgL_auxz00_5486 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)16889)), BGl_string2992z00zz__r4_output_6_10_3z00, BGl_string2967z00zz__r4_output_6_10_3z00, BgL_jz00_1700); 
FAILURE(BgL_auxz00_5486,BFALSE,BFALSE);} 
BgL_niz00_1777 = 
ADDFX(BgL_tmpz00_5483, 
BINT(((long)1))); } }  else 
{ /* Ieee/output.scm 450 */
BgL_niz00_1777 = 
BGl_errorz00zz__errorz00(BgL_procnamez00_29, BGl_string2989z00zz__r4_output_6_10_3z00, BgL__fmtz00_31); } } } 
{ /* Ieee/output.scm 544 */
obj_t BgL_arg1416z00_1778;
{ /* Ieee/output.scm 544 */
obj_t BgL_pairz00_2922;
if(
PAIRP(BgL_osz00_1636))
{ /* Ieee/output.scm 544 */
BgL_pairz00_2922 = BgL_osz00_1636; }  else 
{ 
obj_t BgL_auxz00_5495;
BgL_auxz00_5495 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)19308)), BGl_string2982z00zz__r4_output_6_10_3z00, BGl_string2975z00zz__r4_output_6_10_3z00, BgL_osz00_1636); 
FAILURE(BgL_auxz00_5495,BFALSE,BFALSE);} 
BgL_arg1416z00_1778 = 
CDR(BgL_pairz00_2922); } 
{ 
obj_t BgL_osz00_5501;obj_t BgL_iz00_5500;
BgL_iz00_5500 = BgL_niz00_1777; 
BgL_osz00_5501 = BgL_arg1416z00_1778; 
BgL_osz00_1636 = BgL_osz00_5501; 
BgL_iz00_1635 = BgL_iz00_5500; 
goto BgL_zc3z04anonymousza31308ze3z87_1637;} } } break;case ((unsigned char)'~') : 

bgl_display_char(((unsigned char)'~'), BgL_pz00_30); 
{ /* Ieee/output.scm 547 */
long BgL_arg1418z00_1780;
BgL_arg1418z00_1780 = 
(BgL_iz00_1737+((long)1)); 
{ 
obj_t BgL_iz00_5504;
BgL_iz00_5504 = 
BINT(BgL_arg1418z00_1780); 
BgL_iz00_1635 = BgL_iz00_5504; 
goto BgL_zc3z04anonymousza31308ze3z87_1637;} } break;
default: 
{ /* Ieee/output.scm 549 */
bool_t BgL_test3410z00_5506;
{ /* Ieee/output.scm 549 */
bool_t BgL_res2215z00_2831;
BgL_res2215z00_2831 = 
isdigit(BgL_fz00_1736); 
BgL_test3410z00_5506 = BgL_res2215z00_2831; } 
if(BgL_test3410z00_5506)
{ /* Ieee/output.scm 550 */
obj_t BgL_niz00_1782;
{ /* Ieee/output.scm 550 */
obj_t BgL_arg1421z00_1784;
if(
NULLP(BgL_osz00_1636))
{ /* Ieee/output.scm 424 */
BgL_arg1421z00_1784 = 
BGl_errorz00zz__errorz00(BgL_procnamez00_29, BGl_string2978z00zz__r4_output_6_10_3z00, 
BCHAR(BgL_fz00_1736)); }  else 
{ /* Ieee/output.scm 426 */
obj_t BgL_pairz00_2834;
if(
PAIRP(BgL_osz00_1636))
{ /* Ieee/output.scm 426 */
BgL_pairz00_2834 = BgL_osz00_1636; }  else 
{ 
obj_t BgL_auxz00_5514;
BgL_auxz00_5514 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)16142)), BGl_string2979z00zz__r4_output_6_10_3z00, BGl_string2975z00zz__r4_output_6_10_3z00, BgL_osz00_1636); 
FAILURE(BgL_auxz00_5514,BFALSE,BFALSE);} 
BgL_arg1421z00_1784 = 
CAR(BgL_pairz00_2834); } 
BgL_iz00_1717 = BgL_iz00_1737; 
BgL_numz00_1718 = BgL_arg1421z00_1784; 
BgL_pz00_1719 = BgL_pz00_30; 
if(
BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_numz00_1718))
{ /* Ieee/output.scm 479 */
obj_t BgL_jz00_1722;
BgL_jz00_1722 = 
BGl_stringzd2skipzd2zz__r4_strings_6_7z00(BgL__fmtz00_31, BGl_string2986z00zz__r4_output_6_10_3z00, 
BINT(BgL_iz00_1717)); 
if(
CBOOL(BgL_jz00_1722))
{ /* Ieee/output.scm 483 */
bool_t BgL_test3415z00_5525;
{ /* Ieee/output.scm 483 */
unsigned char BgL_tmpz00_5526;
{ /* Ieee/output.scm 483 */
long BgL_kz00_2813;
{ /* Ieee/output.scm 483 */
obj_t BgL_tmpz00_5527;
if(
INTEGERP(BgL_jz00_1722))
{ /* Ieee/output.scm 483 */
BgL_tmpz00_5527 = BgL_jz00_1722
; }  else 
{ 
obj_t BgL_auxz00_5530;
BgL_auxz00_5530 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)17750)), BGl_string2987z00zz__r4_output_6_10_3z00, BGl_string2967z00zz__r4_output_6_10_3z00, BgL_jz00_1722); 
FAILURE(BgL_auxz00_5530,BFALSE,BFALSE);} 
BgL_kz00_2813 = 
(long)CINT(BgL_tmpz00_5527); } 
{ /* Ieee/output.scm 483 */
long BgL_l2562z00_4166;
BgL_l2562z00_4166 = 
STRING_LENGTH(BgL__fmtz00_31); 
if(
BOUND_CHECK(BgL_kz00_2813, BgL_l2562z00_4166))
{ /* Ieee/output.scm 483 */
BgL_tmpz00_5526 = 
STRING_REF(BgL__fmtz00_31, BgL_kz00_2813)
; }  else 
{ 
obj_t BgL_auxz00_5539;
BgL_auxz00_5539 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)17733)), BGl_string2988z00zz__r4_output_6_10_3z00, BgL__fmtz00_31, 
(int)(BgL_l2562z00_4166), 
(int)(BgL_kz00_2813)); 
FAILURE(BgL_auxz00_5539,BFALSE,BFALSE);} } } 
BgL_test3415z00_5525 = 
(BgL_tmpz00_5526==((unsigned char)',')); } 
if(BgL_test3415z00_5525)
{ /* Ieee/output.scm 484 */
bool_t BgL_test3418z00_5546;
{ /* Ieee/output.scm 484 */
long BgL_n1z00_2820;
{ /* Ieee/output.scm 484 */
obj_t BgL_tmpz00_5547;
if(
INTEGERP(BgL_jz00_1722))
{ /* Ieee/output.scm 484 */
BgL_tmpz00_5547 = BgL_jz00_1722
; }  else 
{ 
obj_t BgL_auxz00_5550;
BgL_auxz00_5550 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)17776)), BGl_string2987z00zz__r4_output_6_10_3z00, BGl_string2967z00zz__r4_output_6_10_3z00, BgL_jz00_1722); 
FAILURE(BgL_auxz00_5550,BFALSE,BFALSE);} 
BgL_n1z00_2820 = 
(long)CINT(BgL_tmpz00_5547); } 
BgL_test3418z00_5546 = 
(BgL_n1z00_2820==
(BgL_lenz00_1633-((long)1))); } 
if(BgL_test3418z00_5546)
{ /* Ieee/output.scm 484 */
BgL_niz00_1782 = 
BGl_errorz00zz__errorz00(BgL_procnamez00_29, BGl_string2989z00zz__r4_output_6_10_3z00, BgL__fmtz00_31); }  else 
{ /* Ieee/output.scm 486 */
long BgL_arg1370z00_1727;long BgL_arg1371z00_1728;unsigned char BgL_arg1372z00_1729;
{ /* Ieee/output.scm 486 */
long BgL_za71za7_2823;
{ /* Ieee/output.scm 486 */
obj_t BgL_tmpz00_5558;
if(
INTEGERP(BgL_jz00_1722))
{ /* Ieee/output.scm 486 */
BgL_tmpz00_5558 = BgL_jz00_1722
; }  else 
{ 
obj_t BgL_auxz00_5561;
BgL_auxz00_5561 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)17865)), BGl_string2987z00zz__r4_output_6_10_3z00, BGl_string2967z00zz__r4_output_6_10_3z00, BgL_jz00_1722); 
FAILURE(BgL_auxz00_5561,BFALSE,BFALSE);} 
BgL_za71za7_2823 = 
(long)CINT(BgL_tmpz00_5558); } 
BgL_arg1370z00_1727 = 
(BgL_za71za7_2823+((long)2)); } 
{ /* Ieee/output.scm 488 */
obj_t BgL_arg1373z00_1730;
{ /* Ieee/output.scm 488 */
long BgL_auxz00_5567;
{ /* Ieee/output.scm 488 */
obj_t BgL_tmpz00_5568;
if(
INTEGERP(BgL_jz00_1722))
{ /* Ieee/output.scm 488 */
BgL_tmpz00_5568 = BgL_jz00_1722
; }  else 
{ 
obj_t BgL_auxz00_5571;
BgL_auxz00_5571 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)17909)), BGl_string2987z00zz__r4_output_6_10_3z00, BGl_string2967z00zz__r4_output_6_10_3z00, BgL_jz00_1722); 
FAILURE(BgL_auxz00_5571,BFALSE,BFALSE);} 
BgL_auxz00_5567 = 
(long)CINT(BgL_tmpz00_5568); } 
BgL_arg1373z00_1730 = 
BGl_substringz00zz__r4_strings_6_7z00(BgL__fmtz00_31, BgL_iz00_1717, BgL_auxz00_5567); } 
{ /* Ieee/output.scm 488 */
char * BgL_tmpz00_5577;
BgL_tmpz00_5577 = 
BSTRING_TO_STRING(BgL_arg1373z00_1730); 
BgL_arg1371z00_1728 = 
BGL_STRTOL(BgL_tmpz00_5577, ((long)0), ((long)10)); } } 
{ /* Ieee/output.scm 489 */
long BgL_i2565z00_4169;
{ /* Ieee/output.scm 489 */
long BgL_za71za7_2825;
{ /* Ieee/output.scm 489 */
obj_t BgL_tmpz00_5580;
if(
INTEGERP(BgL_jz00_1722))
{ /* Ieee/output.scm 489 */
BgL_tmpz00_5580 = BgL_jz00_1722
; }  else 
{ 
obj_t BgL_auxz00_5583;
BgL_auxz00_5583 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)17962)), BGl_string2987z00zz__r4_output_6_10_3z00, BGl_string2967z00zz__r4_output_6_10_3z00, BgL_jz00_1722); 
FAILURE(BgL_auxz00_5583,BFALSE,BFALSE);} 
BgL_za71za7_2825 = 
(long)CINT(BgL_tmpz00_5580); } 
BgL_i2565z00_4169 = 
(BgL_za71za7_2825+((long)1)); } 
{ /* Ieee/output.scm 489 */
long BgL_l2566z00_4170;
BgL_l2566z00_4170 = 
STRING_LENGTH(BgL__fmtz00_31); 
if(
BOUND_CHECK(BgL_i2565z00_4169, BgL_l2566z00_4170))
{ /* Ieee/output.scm 489 */
BgL_arg1372z00_1729 = 
STRING_REF(BgL__fmtz00_31, BgL_i2565z00_4169); }  else 
{ 
obj_t BgL_auxz00_5593;
BgL_auxz00_5593 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)17940)), BGl_string2988z00zz__r4_output_6_10_3z00, BgL__fmtz00_31, 
(int)(BgL_l2566z00_4170), 
(int)(BgL_i2565z00_4169)); 
FAILURE(BgL_auxz00_5593,BFALSE,BFALSE);} } } 
BgL_iz00_1703 = 
BINT(BgL_arg1370z00_1727); 
BgL_numz00_1704 = BgL_numz00_1718; 
BgL_mincolz00_1705 = BgL_arg1371z00_1728; 
BgL_paddingz00_1706 = BgL_arg1372z00_1729; 
BgL_zc3z04anonymousza31356ze3z87_1707:
{ /* Ieee/output.scm 457 */
bool_t BgL_test3424z00_5599;
{ /* Ieee/output.scm 457 */
long BgL_n1z00_2794;
{ /* Ieee/output.scm 457 */
obj_t BgL_tmpz00_5600;
if(
INTEGERP(BgL_iz00_1703))
{ /* Ieee/output.scm 457 */
BgL_tmpz00_5600 = BgL_iz00_1703
; }  else 
{ 
obj_t BgL_auxz00_5603;
BgL_auxz00_5603 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)16968)), BGl_string2990z00zz__r4_output_6_10_3z00, BGl_string2967z00zz__r4_output_6_10_3z00, BgL_iz00_1703); 
FAILURE(BgL_auxz00_5603,BFALSE,BFALSE);} 
BgL_n1z00_2794 = 
(long)CINT(BgL_tmpz00_5600); } 
BgL_test3424z00_5599 = 
(BgL_n1z00_2794==BgL_lenz00_1633); } 
if(BgL_test3424z00_5599)
{ /* Ieee/output.scm 457 */
BgL_niz00_1782 = 
BGl_errorz00zz__errorz00(BgL_procnamez00_29, BGl_string2989z00zz__r4_output_6_10_3z00, BgL__fmtz00_31); }  else 
{ /* Ieee/output.scm 459 */
obj_t BgL_sz00_1709;
{ /* Ieee/output.scm 459 */
unsigned char BgL_aux1046z00_1715;
{ /* Ieee/output.scm 459 */
long BgL_kz00_2798;
{ /* Ieee/output.scm 459 */
obj_t BgL_tmpz00_5610;
if(
INTEGERP(BgL_iz00_1703))
{ /* Ieee/output.scm 459 */
BgL_tmpz00_5610 = BgL_iz00_1703
; }  else 
{ 
obj_t BgL_auxz00_5613;
BgL_auxz00_5613 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)17048)), BGl_string2990z00zz__r4_output_6_10_3z00, BGl_string2967z00zz__r4_output_6_10_3z00, BgL_iz00_1703); 
FAILURE(BgL_auxz00_5613,BFALSE,BFALSE);} 
BgL_kz00_2798 = 
(long)CINT(BgL_tmpz00_5610); } 
{ /* Ieee/output.scm 459 */
long BgL_l2570z00_4174;
BgL_l2570z00_4174 = 
STRING_LENGTH(BgL__fmtz00_31); 
if(
BOUND_CHECK(BgL_kz00_2798, BgL_l2570z00_4174))
{ /* Ieee/output.scm 459 */
BgL_aux1046z00_1715 = 
STRING_REF(BgL__fmtz00_31, BgL_kz00_2798); }  else 
{ 
obj_t BgL_auxz00_5622;
BgL_auxz00_5622 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)17031)), BGl_string2988z00zz__r4_output_6_10_3z00, BgL__fmtz00_31, 
(int)(BgL_l2570z00_4174), 
(int)(BgL_kz00_2798)); 
FAILURE(BgL_auxz00_5622,BFALSE,BFALSE);} } } 
switch( BgL_aux1046z00_1715) { case ((unsigned char)'d') : 
case ((unsigned char)'D') : 

BgL_sz00_1709 = 
BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(BgL_numz00_1704, 
BINT(((long)10))); break;case ((unsigned char)'x') : 
case ((unsigned char)'X') : 

BgL_sz00_1709 = 
BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(BgL_numz00_1704, 
BINT(((long)16))); break;case ((unsigned char)'o') : 
case ((unsigned char)'O') : 

BgL_sz00_1709 = 
BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(BgL_numz00_1704, 
BINT(((long)8))); break;case ((unsigned char)'b') : 
case ((unsigned char)'B') : 

BgL_sz00_1709 = 
BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(BgL_numz00_1704, 
BINT(((long)2))); break;
default: 
BgL_sz00_1709 = 
BGl_errorz00zz__errorz00(BgL_procnamez00_29, BGl_string2989z00zz__r4_output_6_10_3z00, BgL__fmtz00_31); } } 
{ /* Ieee/output.scm 459 */
long BgL_lz00_1710;
{ /* Ieee/output.scm 470 */
obj_t BgL_stringz00_2800;
if(
STRINGP(BgL_sz00_1709))
{ /* Ieee/output.scm 470 */
BgL_stringz00_2800 = BgL_sz00_1709; }  else 
{ 
obj_t BgL_auxz00_5640;
BgL_auxz00_5640 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)17335)), BGl_string2990z00zz__r4_output_6_10_3z00, BGl_string2991z00zz__r4_output_6_10_3z00, BgL_sz00_1709); 
FAILURE(BgL_auxz00_5640,BFALSE,BFALSE);} 
BgL_lz00_1710 = 
STRING_LENGTH(BgL_stringz00_2800); } 
{ /* Ieee/output.scm 470 */

if(
(BgL_lz00_1710<BgL_mincolz00_1705))
{ /* Ieee/output.scm 471 */
bgl_display_obj(
make_string(
(BgL_mincolz00_1705-BgL_lz00_1710), BgL_paddingz00_1706), BgL_pz00_30); }  else 
{ /* Ieee/output.scm 471 */BFALSE; } 
bgl_display_obj(BgL_sz00_1709, BgL_pz00_30); 
{ 
obj_t BgL_tmpz00_5651;
if(
INTEGERP(BgL_iz00_1703))
{ /* Ieee/output.scm 474 */
BgL_tmpz00_5651 = BgL_iz00_1703
; }  else 
{ 
obj_t BgL_auxz00_5654;
BgL_auxz00_5654 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)17468)), BGl_string2990z00zz__r4_output_6_10_3z00, BGl_string2967z00zz__r4_output_6_10_3z00, BgL_iz00_1703); 
FAILURE(BgL_auxz00_5654,BFALSE,BFALSE);} 
BgL_niz00_1782 = 
ADDFX(BgL_tmpz00_5651, 
BINT(((long)1))); } } } } } } }  else 
{ /* Ieee/output.scm 493 */
long BgL_arg1376z00_1733;
{ /* Ieee/output.scm 493 */
obj_t BgL_arg1377z00_1734;
{ /* Ieee/output.scm 493 */
long BgL_auxz00_5661;
{ /* Ieee/output.scm 493 */
obj_t BgL_tmpz00_5662;
if(
INTEGERP(BgL_jz00_1722))
{ /* Ieee/output.scm 493 */
BgL_tmpz00_5662 = BgL_jz00_1722
; }  else 
{ 
obj_t BgL_auxz00_5665;
BgL_auxz00_5665 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)18048)), BGl_string2987z00zz__r4_output_6_10_3z00, BGl_string2967z00zz__r4_output_6_10_3z00, BgL_jz00_1722); 
FAILURE(BgL_auxz00_5665,BFALSE,BFALSE);} 
BgL_auxz00_5661 = 
(long)CINT(BgL_tmpz00_5662); } 
BgL_arg1377z00_1734 = 
BGl_substringz00zz__r4_strings_6_7z00(BgL__fmtz00_31, BgL_iz00_1717, BgL_auxz00_5661); } 
{ /* Ieee/output.scm 493 */
char * BgL_tmpz00_5671;
BgL_tmpz00_5671 = 
BSTRING_TO_STRING(BgL_arg1377z00_1734); 
BgL_arg1376z00_1733 = 
BGL_STRTOL(BgL_tmpz00_5671, ((long)0), ((long)10)); } } 
{ 
unsigned char BgL_paddingz00_5677;long BgL_mincolz00_5676;obj_t BgL_numz00_5675;obj_t BgL_iz00_5674;
BgL_iz00_5674 = BgL_jz00_1722; 
BgL_numz00_5675 = BgL_numz00_1718; 
BgL_mincolz00_5676 = BgL_arg1376z00_1733; 
BgL_paddingz00_5677 = ((unsigned char)' '); 
BgL_paddingz00_1706 = BgL_paddingz00_5677; 
BgL_mincolz00_1705 = BgL_mincolz00_5676; 
BgL_numz00_1704 = BgL_numz00_5675; 
BgL_iz00_1703 = BgL_iz00_5674; 
goto BgL_zc3z04anonymousza31356ze3z87_1707;} } }  else 
{ /* Ieee/output.scm 481 */
BgL_niz00_1782 = 
BGl_errorz00zz__errorz00(BgL_procnamez00_29, BGl_string2989z00zz__r4_output_6_10_3z00, BgL__fmtz00_31); } }  else 
{ /* Ieee/output.scm 477 */
BgL_niz00_1782 = 
BGl_bigloozd2typezd2errorz00zz__errorz00(BgL_procnamez00_29, BGl_string2984z00zz__r4_output_6_10_3z00, BgL_numz00_1718); } } 
{ /* Ieee/output.scm 551 */
obj_t BgL_arg1420z00_1783;
{ /* Ieee/output.scm 551 */
obj_t BgL_pairz00_2835;
if(
PAIRP(BgL_osz00_1636))
{ /* Ieee/output.scm 551 */
BgL_pairz00_2835 = BgL_osz00_1636; }  else 
{ 
obj_t BgL_auxz00_5682;
BgL_auxz00_5682 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)19494)), BGl_string2979z00zz__r4_output_6_10_3z00, BGl_string2975z00zz__r4_output_6_10_3z00, BgL_osz00_1636); 
FAILURE(BgL_auxz00_5682,BFALSE,BFALSE);} 
BgL_arg1420z00_1783 = 
CDR(BgL_pairz00_2835); } 
{ 
obj_t BgL_osz00_5688;obj_t BgL_iz00_5687;
BgL_iz00_5687 = BgL_niz00_1782; 
BgL_osz00_5688 = BgL_arg1420z00_1783; 
BgL_osz00_1636 = BgL_osz00_5688; 
BgL_iz00_1635 = BgL_iz00_5687; 
goto BgL_zc3z04anonymousza31308ze3z87_1637;} } }  else 
{ /* Ieee/output.scm 554 */
obj_t BgL_arg1422z00_1785;
{ /* Ieee/output.scm 554 */
obj_t BgL_arg1424z00_1786;
{ /* Ieee/output.scm 554 */
obj_t BgL_list1425z00_1787;
BgL_list1425z00_1787 = 
MAKE_YOUNG_PAIR(
BCHAR(BgL_fz00_1736), BNIL); 
BgL_arg1424z00_1786 = 
BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(BgL_list1425z00_1787); } 
BgL_arg1422z00_1785 = 
string_append_3(BGl_string2980z00zz__r4_output_6_10_3z00, BgL_arg1424z00_1786, BGl_string2981z00zz__r4_output_6_10_3z00); } 
return 
BGl_errorz00zz__errorz00(BgL_procnamez00_29, BgL_arg1422z00_1785, BgL__fmtz00_31);} } } } } }  else 
{ /* Ieee/output.scm 573 */
unsigned char BgL_arg1327z00_1661;long BgL_arg1328z00_1662;
{ /* Ieee/output.scm 573 */
long BgL_i2585z00_4189;
{ /* Ieee/output.scm 573 */
long BgL_za71za7_2961;
{ /* Ieee/output.scm 573 */
obj_t BgL_tmpz00_5695;
if(
INTEGERP(BgL_iz00_1635))
{ /* Ieee/output.scm 573 */
BgL_tmpz00_5695 = BgL_iz00_1635
; }  else 
{ 
obj_t BgL_auxz00_5698;
BgL_auxz00_5698 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)20096)), BGl_string2974z00zz__r4_output_6_10_3z00, BGl_string2967z00zz__r4_output_6_10_3z00, BgL_iz00_1635); 
FAILURE(BgL_auxz00_5698,BFALSE,BFALSE);} 
BgL_za71za7_2961 = 
(long)CINT(BgL_tmpz00_5695); } 
BgL_i2585z00_4189 = 
(BgL_za71za7_2961+((long)1)); } 
{ /* Ieee/output.scm 573 */
long BgL_l2586z00_4190;
BgL_l2586z00_4190 = 
STRING_LENGTH(BgL__fmtz00_31); 
if(
BOUND_CHECK(BgL_i2585z00_4189, BgL_l2586z00_4190))
{ /* Ieee/output.scm 573 */
BgL_arg1327z00_1661 = 
STRING_REF(BgL__fmtz00_31, BgL_i2585z00_4189); }  else 
{ 
obj_t BgL_auxz00_5708;
BgL_auxz00_5708 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)20074)), BGl_string2988z00zz__r4_output_6_10_3z00, BgL__fmtz00_31, 
(int)(BgL_l2586z00_4190), 
(int)(BgL_i2585z00_4189)); 
FAILURE(BgL_auxz00_5708,BFALSE,BFALSE);} } } 
{ /* Ieee/output.scm 574 */
long BgL_za71za7_2966;
{ /* Ieee/output.scm 574 */
obj_t BgL_tmpz00_5714;
if(
INTEGERP(BgL_iz00_1635))
{ /* Ieee/output.scm 574 */
BgL_tmpz00_5714 = BgL_iz00_1635
; }  else 
{ 
obj_t BgL_auxz00_5717;
BgL_auxz00_5717 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)20113)), BGl_string2974z00zz__r4_output_6_10_3z00, BGl_string2967z00zz__r4_output_6_10_3z00, BgL_iz00_1635); 
FAILURE(BgL_auxz00_5717,BFALSE,BFALSE);} 
BgL_za71za7_2966 = 
(long)CINT(BgL_tmpz00_5714); } 
BgL_arg1328z00_1662 = 
(BgL_za71za7_2966+((long)1)); } 
{ 
bool_t BgL_altzf3zf3_5725;long BgL_iz00_5724;unsigned char BgL_fz00_5723;
BgL_fz00_5723 = BgL_arg1327z00_1661; 
BgL_iz00_5724 = BgL_arg1328z00_1662; 
BgL_altzf3zf3_5725 = ((bool_t)0); 
BgL_altzf3zf3_1738 = BgL_altzf3zf3_5725; 
BgL_iz00_1737 = BgL_iz00_5724; 
BgL_fz00_1736 = BgL_fz00_5723; 
goto BgL_zc3z04anonymousza31379ze3z87_1739;} } } }  else 
{ /* Ieee/output.scm 558 */
bgl_display_char(BgL_cz00_1646, BgL_pz00_30); 
{ /* Ieee/output.scm 578 */
long BgL_arg1334z00_1667;
{ /* Ieee/output.scm 578 */
long BgL_za71za7_2970;
{ /* Ieee/output.scm 578 */
obj_t BgL_tmpz00_5727;
if(
INTEGERP(BgL_iz00_1635))
{ /* Ieee/output.scm 578 */
BgL_tmpz00_5727 = BgL_iz00_1635
; }  else 
{ 
obj_t BgL_auxz00_5730;
BgL_auxz00_5730 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)20189)), BGl_string2974z00zz__r4_output_6_10_3z00, BGl_string2967z00zz__r4_output_6_10_3z00, BgL_iz00_1635); 
FAILURE(BgL_auxz00_5730,BFALSE,BFALSE);} 
BgL_za71za7_2970 = 
(long)CINT(BgL_tmpz00_5727); } 
BgL_arg1334z00_1667 = 
(BgL_za71za7_2970+((long)1)); } 
{ 
obj_t BgL_iz00_5736;
BgL_iz00_5736 = 
BINT(BgL_arg1334z00_1667); 
BgL_iz00_1635 = BgL_iz00_5736; 
goto BgL_zc3z04anonymousza31308ze3z87_1637;} } } }  else 
{ /* Ieee/output.scm 556 */
return BFALSE;} } } } } } 

}



/* print-flat-list~0 */
obj_t BGl_printzd2flatzd2listze70ze7zz__r4_output_6_10_3z00(obj_t BgL_lz00_1677, obj_t BgL_pz00_1678, obj_t BgL_sepz00_1679)
{
{ /* Ieee/output.scm 446 */
BGl_printzd2flatzd2listze70ze7zz__r4_output_6_10_3z00:
if(
PAIRP(BgL_lz00_1677))
{ 
obj_t BgL_lz00_1683;
BgL_lz00_1683 = BgL_lz00_1677; 
BgL_zc3z04anonymousza31342ze3z87_1684:
{ /* Ieee/output.scm 437 */
obj_t BgL_arg1343z00_1685;
{ /* Ieee/output.scm 437 */
obj_t BgL_pairz00_2780;
if(
PAIRP(BgL_lz00_1683))
{ /* Ieee/output.scm 437 */
BgL_pairz00_2780 = BgL_lz00_1683; }  else 
{ 
obj_t BgL_auxz00_5743;
BgL_auxz00_5743 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)16417)), BGl_string2974z00zz__r4_output_6_10_3z00, BGl_string2975z00zz__r4_output_6_10_3z00, BgL_lz00_1683); 
FAILURE(BgL_auxz00_5743,BFALSE,BFALSE);} 
BgL_arg1343z00_1685 = 
CAR(BgL_pairz00_2780); } 
BGl_printzd2flatzd2listze70ze7zz__r4_output_6_10_3z00(BgL_arg1343z00_1685, BgL_pz00_1678, BgL_sepz00_1679); } 
{ /* Ieee/output.scm 439 */
bool_t BgL_test3439z00_5749;
{ /* Ieee/output.scm 439 */
obj_t BgL_tmpz00_5750;
{ /* Ieee/output.scm 439 */
obj_t BgL_pairz00_2781;
if(
PAIRP(BgL_lz00_1683))
{ /* Ieee/output.scm 439 */
BgL_pairz00_2781 = BgL_lz00_1683; }  else 
{ 
obj_t BgL_auxz00_5753;
BgL_auxz00_5753 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)16459)), BGl_string2974z00zz__r4_output_6_10_3z00, BGl_string2975z00zz__r4_output_6_10_3z00, BgL_lz00_1683); 
FAILURE(BgL_auxz00_5753,BFALSE,BFALSE);} 
BgL_tmpz00_5750 = 
CDR(BgL_pairz00_2781); } 
BgL_test3439z00_5749 = 
PAIRP(BgL_tmpz00_5750); } 
if(BgL_test3439z00_5749)
{ /* Ieee/output.scm 439 */
bgl_display_obj(BgL_sepz00_1679, BgL_pz00_1678); 
{ /* Ieee/output.scm 441 */
obj_t BgL_arg1346z00_1688;
{ /* Ieee/output.scm 441 */
obj_t BgL_pairz00_2783;
if(
PAIRP(BgL_lz00_1683))
{ /* Ieee/output.scm 441 */
BgL_pairz00_2783 = BgL_lz00_1683; }  else 
{ 
obj_t BgL_auxz00_5762;
BgL_auxz00_5762 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)16508)), BGl_string2974z00zz__r4_output_6_10_3z00, BGl_string2975z00zz__r4_output_6_10_3z00, BgL_lz00_1683); 
FAILURE(BgL_auxz00_5762,BFALSE,BFALSE);} 
BgL_arg1346z00_1688 = 
CDR(BgL_pairz00_2783); } 
{ 
obj_t BgL_lz00_5767;
BgL_lz00_5767 = BgL_arg1346z00_1688; 
BgL_lz00_1683 = BgL_lz00_5767; 
goto BgL_zc3z04anonymousza31342ze3z87_1684;} } }  else 
{ /* Ieee/output.scm 442 */
bool_t BgL_test3442z00_5768;
{ /* Ieee/output.scm 442 */
obj_t BgL_tmpz00_5769;
{ /* Ieee/output.scm 442 */
obj_t BgL_pairz00_2784;
if(
PAIRP(BgL_lz00_1683))
{ /* Ieee/output.scm 442 */
BgL_pairz00_2784 = BgL_lz00_1683; }  else 
{ 
obj_t BgL_auxz00_5772;
BgL_auxz00_5772 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)16539)), BGl_string2974z00zz__r4_output_6_10_3z00, BGl_string2975z00zz__r4_output_6_10_3z00, BgL_lz00_1683); 
FAILURE(BgL_auxz00_5772,BFALSE,BFALSE);} 
BgL_tmpz00_5769 = 
CDR(BgL_pairz00_2784); } 
BgL_test3442z00_5768 = 
NULLP(BgL_tmpz00_5769); } 
if(BgL_test3442z00_5768)
{ /* Ieee/output.scm 442 */
return BFALSE;}  else 
{ /* Ieee/output.scm 442 */
bgl_display_string(BGl_string2994z00zz__r4_output_6_10_3z00, BgL_pz00_1678); 
{ /* Ieee/output.scm 444 */
obj_t BgL_arg1350z00_1691;
{ /* Ieee/output.scm 444 */
obj_t BgL_pairz00_2788;
if(
PAIRP(BgL_lz00_1683))
{ /* Ieee/output.scm 444 */
BgL_pairz00_2788 = BgL_lz00_1683; }  else 
{ 
obj_t BgL_auxz00_5781;
BgL_auxz00_5781 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)16602)), BGl_string2974z00zz__r4_output_6_10_3z00, BGl_string2975z00zz__r4_output_6_10_3z00, BgL_lz00_1683); 
FAILURE(BgL_auxz00_5781,BFALSE,BFALSE);} 
BgL_arg1350z00_1691 = 
CDR(BgL_pairz00_2788); } 
{ 
obj_t BgL_lz00_5786;
BgL_lz00_5786 = BgL_arg1350z00_1691; 
BgL_lz00_1677 = BgL_lz00_5786; 
goto BGl_printzd2flatzd2listze70ze7zz__r4_output_6_10_3z00;} } } } } }  else 
{ /* Ieee/output.scm 435 */
if(
NULLP(BgL_lz00_1677))
{ /* Ieee/output.scm 445 */
return BFALSE;}  else 
{ /* Ieee/output.scm 445 */
return 
bgl_display_obj(BgL_lz00_1677, BgL_pz00_1678);} } } 

}



/* format */
BGL_EXPORTED_DEF obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t BgL_fmtz00_33, obj_t BgL_objz00_34)
{
{ /* Ieee/output.scm 583 */
{ /* Ieee/output.scm 584 */
obj_t BgL_pz00_2972;
{ /* Ieee/output.scm 584 */

{ /* Ieee/output.scm 584 */

BgL_pz00_2972 = 
BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(BTRUE); } } 
{ /* Ieee/output.scm 585 */
obj_t BgL_auxz00_5791;
{ /* Ieee/output.scm 585 */
bool_t BgL_test3446z00_5792;
if(
PAIRP(BgL_objz00_34))
{ /* Ieee/output.scm 585 */
BgL_test3446z00_5792 = ((bool_t)1)
; }  else 
{ /* Ieee/output.scm 585 */
BgL_test3446z00_5792 = 
NULLP(BgL_objz00_34)
; } 
if(BgL_test3446z00_5792)
{ /* Ieee/output.scm 585 */
BgL_auxz00_5791 = BgL_objz00_34
; }  else 
{ 
obj_t BgL_auxz00_5796;
BgL_auxz00_5796 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)20523)), BGl_string2996z00zz__r4_output_6_10_3z00, BGl_string2997z00zz__r4_output_6_10_3z00, BgL_objz00_34); 
FAILURE(BgL_auxz00_5796,BFALSE,BFALSE);} } 
BGl_xprintfz00zz__r4_output_6_10_3z00(BGl_symbol2995z00zz__r4_output_6_10_3z00, BgL_pz00_2972, BgL_fmtz00_33, BgL_auxz00_5791); } 
{ /* Ieee/output.scm 586 */
obj_t BgL_aux2782z00_4386;
BgL_aux2782z00_4386 = 
bgl_close_output_port(BgL_pz00_2972); 
if(
STRINGP(BgL_aux2782z00_4386))
{ /* Ieee/output.scm 586 */
return BgL_aux2782z00_4386;}  else 
{ 
obj_t BgL_auxz00_5804;
BgL_auxz00_5804 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)20534)), BGl_string2996z00zz__r4_output_6_10_3z00, BGl_string2991z00zz__r4_output_6_10_3z00, BgL_aux2782z00_4386); 
FAILURE(BgL_auxz00_5804,BFALSE,BFALSE);} } } } 

}



/* &format */
obj_t BGl_z62formatz62zz__r4_output_6_10_3z00(obj_t BgL_envz00_4116, obj_t BgL_fmtz00_4117, obj_t BgL_objz00_4118)
{
{ /* Ieee/output.scm 583 */
{ /* Ieee/output.scm 584 */
obj_t BgL_auxz00_5808;
if(
STRINGP(BgL_fmtz00_4117))
{ /* Ieee/output.scm 584 */
BgL_auxz00_5808 = BgL_fmtz00_4117
; }  else 
{ 
obj_t BgL_auxz00_5811;
BgL_auxz00_5811 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)20462)), BGl_string2998z00zz__r4_output_6_10_3z00, BGl_string2991z00zz__r4_output_6_10_3z00, BgL_fmtz00_4117); 
FAILURE(BgL_auxz00_5811,BFALSE,BFALSE);} 
return 
BGl_formatz00zz__r4_output_6_10_3z00(BgL_auxz00_5808, BgL_objz00_4118);} } 

}



/* printf */
BGL_EXPORTED_DEF obj_t BGl_printfz00zz__r4_output_6_10_3z00(obj_t BgL_fmtz00_35, obj_t BgL_objz00_36)
{
{ /* Ieee/output.scm 591 */
{ /* Ieee/output.scm 592 */
obj_t BgL_arg1426z00_2975;
{ /* Ieee/output.scm 592 */
obj_t BgL_res2261z00_2977;
{ /* Ieee/output.scm 592 */
obj_t BgL_tmpz00_5816;
BgL_tmpz00_5816 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2261z00_2977 = 
BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_5816); } 
BgL_arg1426z00_2975 = BgL_res2261z00_2977; } 
{ /* Ieee/output.scm 592 */
obj_t BgL_auxz00_5819;
{ /* Ieee/output.scm 592 */
bool_t BgL_test3450z00_5820;
if(
PAIRP(BgL_objz00_36))
{ /* Ieee/output.scm 592 */
BgL_test3450z00_5820 = ((bool_t)1)
; }  else 
{ /* Ieee/output.scm 592 */
BgL_test3450z00_5820 = 
NULLP(BgL_objz00_36)
; } 
if(BgL_test3450z00_5820)
{ /* Ieee/output.scm 592 */
BgL_auxz00_5819 = BgL_objz00_36
; }  else 
{ 
obj_t BgL_auxz00_5824;
BgL_auxz00_5824 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)20854)), BGl_string3000z00zz__r4_output_6_10_3z00, BGl_string2997z00zz__r4_output_6_10_3z00, BgL_objz00_36); 
FAILURE(BgL_auxz00_5824,BFALSE,BFALSE);} } 
return 
BGl_xprintfz00zz__r4_output_6_10_3z00(BGl_symbol2999z00zz__r4_output_6_10_3z00, BgL_arg1426z00_2975, BgL_fmtz00_35, BgL_auxz00_5819);} } } 

}



/* &printf */
obj_t BGl_z62printfz62zz__r4_output_6_10_3z00(obj_t BgL_envz00_4119, obj_t BgL_fmtz00_4120, obj_t BgL_objz00_4121)
{
{ /* Ieee/output.scm 591 */
{ /* Ieee/output.scm 592 */
obj_t BgL_auxz00_5829;
if(
STRINGP(BgL_fmtz00_4120))
{ /* Ieee/output.scm 592 */
BgL_auxz00_5829 = BgL_fmtz00_4120
; }  else 
{ 
obj_t BgL_auxz00_5832;
BgL_auxz00_5832 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)20828)), BGl_string3001z00zz__r4_output_6_10_3z00, BGl_string2991z00zz__r4_output_6_10_3z00, BgL_fmtz00_4120); 
FAILURE(BgL_auxz00_5832,BFALSE,BFALSE);} 
return 
BGl_printfz00zz__r4_output_6_10_3z00(BgL_auxz00_5829, BgL_objz00_4121);} } 

}



/* fprintf */
BGL_EXPORTED_DEF obj_t BGl_fprintfz00zz__r4_output_6_10_3z00(obj_t BgL_portz00_37, obj_t BgL_fmtz00_38, obj_t BgL_objz00_39)
{
{ /* Ieee/output.scm 597 */
{ /* Ieee/output.scm 598 */
obj_t BgL_auxz00_5837;
{ /* Ieee/output.scm 598 */
bool_t BgL_test3453z00_5838;
if(
PAIRP(BgL_objz00_39))
{ /* Ieee/output.scm 598 */
BgL_test3453z00_5838 = ((bool_t)1)
; }  else 
{ /* Ieee/output.scm 598 */
BgL_test3453z00_5838 = 
NULLP(BgL_objz00_39)
; } 
if(BgL_test3453z00_5838)
{ /* Ieee/output.scm 598 */
BgL_auxz00_5837 = BgL_objz00_39
; }  else 
{ 
obj_t BgL_auxz00_5842;
BgL_auxz00_5842 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)21146)), BGl_string3003z00zz__r4_output_6_10_3z00, BGl_string2997z00zz__r4_output_6_10_3z00, BgL_objz00_39); 
FAILURE(BgL_auxz00_5842,BFALSE,BFALSE);} } 
return 
BGl_xprintfz00zz__r4_output_6_10_3z00(BGl_symbol3002z00zz__r4_output_6_10_3z00, BgL_portz00_37, BgL_fmtz00_38, BgL_auxz00_5837);} } 

}



/* &fprintf */
obj_t BGl_z62fprintfz62zz__r4_output_6_10_3z00(obj_t BgL_envz00_4122, obj_t BgL_portz00_4123, obj_t BgL_fmtz00_4124, obj_t BgL_objz00_4125)
{
{ /* Ieee/output.scm 597 */
{ /* Ieee/output.scm 598 */
obj_t BgL_auxz00_5854;obj_t BgL_auxz00_5847;
if(
STRINGP(BgL_fmtz00_4124))
{ /* Ieee/output.scm 598 */
BgL_auxz00_5854 = BgL_fmtz00_4124
; }  else 
{ 
obj_t BgL_auxz00_5857;
BgL_auxz00_5857 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)21119)), BGl_string3004z00zz__r4_output_6_10_3z00, BGl_string2991z00zz__r4_output_6_10_3z00, BgL_fmtz00_4124); 
FAILURE(BgL_auxz00_5857,BFALSE,BFALSE);} 
if(
OUTPUT_PORTP(BgL_portz00_4123))
{ /* Ieee/output.scm 598 */
BgL_auxz00_5847 = BgL_portz00_4123
; }  else 
{ 
obj_t BgL_auxz00_5850;
BgL_auxz00_5850 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)21119)), BGl_string3004z00zz__r4_output_6_10_3z00, BGl_string2954z00zz__r4_output_6_10_3z00, BgL_portz00_4123); 
FAILURE(BgL_auxz00_5850,BFALSE,BFALSE);} 
return 
BGl_fprintfz00zz__r4_output_6_10_3z00(BgL_auxz00_5847, BgL_auxz00_5854, BgL_objz00_4125);} } 

}



/* display-2 */
BGL_EXPORTED_DEF obj_t bgl_display_obj(obj_t BgL_objz00_40, obj_t BgL_portz00_41)
{
{ /* Ieee/output.scm 757 */
bgl_display_obj:
if(
STRINGP(BgL_objz00_40))
{ /* Ieee/output.scm 758 */
return 
bgl_display_string(BgL_objz00_40, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 758 */
if(
SYMBOLP(BgL_objz00_40))
{ /* Ieee/output.scm 770 */
obj_t BgL_arg1573z00_2984;
{ /* Ieee/output.scm 770 */
obj_t BgL_res2264z00_2986;
BgL_res2264z00_2986 = 
SYMBOL_TO_STRING(BgL_objz00_40); 
BgL_arg1573z00_2984 = BgL_res2264z00_2986; } 
return 
bgl_display_string(BgL_arg1573z00_2984, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 758 */
if(
INTEGERP(BgL_objz00_40))
{ /* Ieee/output.scm 758 */
return 
bgl_display_fixnum(BgL_objz00_40, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 758 */
if(
CHARP(BgL_objz00_40))
{ /* Ieee/output.scm 758 */
unsigned char BgL_tmpz00_5874;
BgL_tmpz00_5874 = 
CCHAR(BgL_objz00_40); 
return 
bgl_display_char(BgL_tmpz00_5874, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 758 */
if(
PAIRP(BgL_objz00_40))
{ /* Ieee/output.scm 758 */
return 
BGl_displayzd2pairzd2zz__r4_output_6_10_3z00(BgL_objz00_40, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 758 */
if(
NULLP(BgL_objz00_40))
{ /* Ieee/output.scm 758 */
return 
bgl_display_string(BGl_string3005z00zz__r4_output_6_10_3z00, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 758 */
if(
(BgL_objz00_40==BFALSE))
{ /* Ieee/output.scm 758 */
return 
bgl_display_string(BGl_string3006z00zz__r4_output_6_10_3z00, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 758 */
if(
(BgL_objz00_40==BTRUE))
{ /* Ieee/output.scm 758 */
return 
bgl_display_string(BGl_string3007z00zz__r4_output_6_10_3z00, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 758 */
if(
(BgL_objz00_40==BUNSPEC))
{ /* Ieee/output.scm 758 */
return 
bgl_display_string(BGl_string3008z00zz__r4_output_6_10_3z00, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 758 */
if(
ELONGP(BgL_objz00_40))
{ /* Ieee/output.scm 758 */
return 
bgl_display_elong(
BELONG_TO_LONG(BgL_objz00_40), BgL_portz00_41);}  else 
{ /* Ieee/output.scm 758 */
if(
REALP(BgL_objz00_40))
{ /* Ieee/output.scm 881 */
obj_t BgL_arg1623z00_3005;
BgL_arg1623z00_3005 = 
bgl_real_to_string(
REAL_TO_DOUBLE(BgL_objz00_40)); 
return 
bgl_display_string(BgL_arg1623z00_3005, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 758 */
if(
KEYWORDP(BgL_objz00_40))
{ /* Ieee/output.scm 758 */
bgl_display_char(((unsigned char)':'), BgL_portz00_41); 
{ /* Ieee/output.scm 863 */
obj_t BgL_arg1621z00_3009;
{ /* Ieee/output.scm 863 */
obj_t BgL_res2272z00_3011;
BgL_res2272z00_3011 = 
KEYWORD_TO_STRING(BgL_objz00_40); 
BgL_arg1621z00_3009 = BgL_res2272z00_3011; } 
return 
bgl_display_string(BgL_arg1621z00_3009, BgL_portz00_41);} }  else 
{ /* Ieee/output.scm 758 */
if(
BGl_classzf3zf3zz__objectz00(BgL_objz00_40))
{ /* Ieee/output.scm 758 */
bgl_display_string(BGl_string3009z00zz__r4_output_6_10_3z00, BgL_portz00_41); 
{ /* Ieee/output.scm 933 */
obj_t BgL_arg1632z00_3014;
{ /* Ieee/output.scm 933 */
obj_t BgL_auxz00_5909;
if(
BGl_classzf3zf3zz__objectz00(BgL_objz00_40))
{ /* Ieee/output.scm 933 */
BgL_auxz00_5909 = BgL_objz00_40
; }  else 
{ 
obj_t BgL_auxz00_5912;
BgL_auxz00_5912 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)33858)), BGl_string3010z00zz__r4_output_6_10_3z00, BGl_string3011z00zz__r4_output_6_10_3z00, BgL_objz00_40); 
FAILURE(BgL_auxz00_5912,BFALSE,BFALSE);} 
BgL_arg1632z00_3014 = 
BGl_classzd2namezd2zz__objectz00(BgL_auxz00_5909); } 
{ /* Ieee/output.scm 770 */
obj_t BgL_arg1573z00_3019;
{ /* Ieee/output.scm 770 */
obj_t BgL_res2273z00_3021;
BgL_res2273z00_3021 = 
SYMBOL_TO_STRING(BgL_arg1632z00_3014); 
BgL_arg1573z00_3019 = BgL_res2273z00_3021; } 
bgl_display_string(BgL_arg1573z00_3019, BgL_portz00_41); } } 
return 
bgl_display_string(BGl_string3012z00zz__r4_output_6_10_3z00, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 758 */
if(
VECTORP(BgL_objz00_40))
{ /* Ieee/output.scm 758 */
return 
BGl_writezf2displayzd2vectorz20zz__r4_output_6_10_3z00(BgL_objz00_40, BgL_portz00_41, BGl_displayzd22zd2envz00zz__r4_output_6_10_3z00);}  else 
{ /* Ieee/output.scm 758 */
if(
LLONGP(BgL_objz00_40))
{ /* Ieee/output.scm 758 */
return 
bgl_display_llong(
BLLONG_TO_LLONG(BgL_objz00_40), BgL_portz00_41);}  else 
{ /* Ieee/output.scm 758 */
if(
UCS2_STRINGP(BgL_objz00_40))
{ /* Ieee/output.scm 758 */
return 
bgl_display_ucs2string(BgL_objz00_40, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 758 */
if(
STRUCTP(BgL_objz00_40))
{ /* Ieee/output.scm 758 */
return 
BGl_writezf2displayzd2structurez20zz__r4_output_6_10_3z00(BgL_objz00_40, BgL_portz00_41, BGl_displayzd22zd2envz00zz__r4_output_6_10_3z00);}  else 
{ /* Ieee/output.scm 758 */
if(
BGL_OBJECTP(BgL_objz00_40))
{ /* Ieee/output.scm 758 */
obj_t BgL_list1445z00_1817;
BgL_list1445z00_1817 = 
MAKE_YOUNG_PAIR(BgL_portz00_41, BNIL); 
return 
BGl_objectzd2displayzd2zz__objectz00(
((BgL_objectz00_bglt)BgL_objz00_40), BgL_list1445z00_1817);}  else 
{ /* Ieee/output.scm 758 */
if(
BGL_DATEP(BgL_objz00_40))
{ /* Ieee/output.scm 830 */
obj_t BgL_tmpz00_5940;
BgL_tmpz00_5940 = 
BGl_datezd2ze3stringz31zz__datez00(BgL_objz00_40); 
return 
bgl_display_string(BgL_tmpz00_5940, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 758 */
bool_t BgL_test3477z00_5943;
{ /* Ieee/output.scm 758 */
bool_t BgL_res2280z00_3037;
BgL_res2280z00_3037 = 
BGL_MUTEXP(BgL_objz00_40); 
BgL_test3477z00_5943 = BgL_res2280z00_3037; } 
if(BgL_test3477z00_5943)
{ /* Ieee/output.scm 758 */
return 
BGl_writezd2mutexzd2zz__r4_output_6_10_3z00(BgL_objz00_40, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 758 */
bool_t BgL_test3478z00_5946;
{ /* Ieee/output.scm 758 */
bool_t BgL_res2281z00_3038;
BgL_res2281z00_3038 = 
BGL_CONDVARP(BgL_objz00_40); 
BgL_test3478z00_5946 = BgL_res2281z00_3038; } 
if(BgL_test3478z00_5946)
{ /* Ieee/output.scm 758 */
bgl_display_string(BGl_string3013z00zz__r4_output_6_10_3z00, BgL_portz00_41); 
{ /* Ieee/output.scm 925 */
obj_t BgL_arg1631z00_3039;
{ /* Ieee/output.scm 925 */
obj_t BgL_objz00_3042;
if(
BGL_CONDVARP(BgL_objz00_40))
{ /* Ieee/output.scm 925 */
BgL_objz00_3042 = BgL_objz00_40; }  else 
{ 
obj_t BgL_auxz00_5951;
BgL_auxz00_5951 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)33495)), BGl_string3010z00zz__r4_output_6_10_3z00, BGl_string3014z00zz__r4_output_6_10_3z00, BgL_objz00_40); 
FAILURE(BgL_auxz00_5951,BFALSE,BFALSE);} 
BgL_arg1631z00_3039 = 
BGL_CONDVAR_NAME(BgL_objz00_3042); } 
bgl_display_obj(BgL_arg1631z00_3039, BgL_portz00_41); } 
return 
bgl_display_string(BGl_string3012z00zz__r4_output_6_10_3z00, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 758 */
if(
UCS2P(BgL_objz00_40))
{ /* Ieee/output.scm 758 */
return 
bgl_display_ucs2(BgL_objz00_40, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 758 */
if(
CELLP(BgL_objz00_40))
{ /* Ieee/output.scm 758 */
bgl_display_string(BGl_string3015z00zz__r4_output_6_10_3z00, BgL_portz00_41); 
bgl_display_obj(
CELL_REF(BgL_objz00_40), BgL_portz00_41); 
return 
bgl_display_string(BGl_string3012z00zz__r4_output_6_10_3z00, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 758 */
bool_t BgL_test3482z00_5967;
{ /* Ieee/output.scm 758 */
bool_t BgL_res2283z00_3052;
BgL_res2283z00_3052 = 
EOF_OBJECTP(BgL_objz00_40); 
BgL_test3482z00_5967 = BgL_res2283z00_3052; } 
if(BgL_test3482z00_5967)
{ /* Ieee/output.scm 758 */
return 
bgl_display_string(BGl_string3016z00zz__r4_output_6_10_3z00, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 758 */
if(
(BgL_objz00_40==(BOPTIONAL)))
{ /* Ieee/output.scm 758 */
return 
bgl_display_string(BGl_string3017z00zz__r4_output_6_10_3z00, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 758 */
if(
(BgL_objz00_40==(BREST)))
{ /* Ieee/output.scm 758 */
return 
bgl_display_string(BGl_string3018z00zz__r4_output_6_10_3z00, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 758 */
if(
(BgL_objz00_40==(BKEY)))
{ /* Ieee/output.scm 758 */
return 
bgl_display_string(BGl_string3019z00zz__r4_output_6_10_3z00, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 758 */
if(
PROCEDUREP(BgL_objz00_40))
{ /* Ieee/output.scm 758 */
return 
bgl_write_procedure(BgL_objz00_40, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 758 */
if(
OUTPUT_PORTP(BgL_objz00_40))
{ /* Ieee/output.scm 758 */
if(
BGL_OUTPUT_STRING_PORTP(BgL_objz00_40))
{ /* Ieee/output.scm 758 */
return 
bgl_display_string(BGl_string3020z00zz__r4_output_6_10_3z00, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 758 */
if(
BGL_OUTPUT_PROCEDURE_PORTP(BgL_objz00_40))
{ /* Ieee/output.scm 758 */
return 
bgl_display_string(BGl_string3021z00zz__r4_output_6_10_3z00, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 758 */
return 
bgl_write_output_port(BgL_objz00_40, BgL_portz00_41);} } }  else 
{ /* Ieee/output.scm 758 */
if(
INPUT_PORTP(BgL_objz00_40))
{ /* Ieee/output.scm 758 */
return 
bgl_write_input_port(BgL_objz00_40, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 758 */
if(
BIGNUMP(BgL_objz00_40))
{ /* Ieee/output.scm 758 */
return 
bgl_display_bignum(BgL_objz00_40, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 758 */
if(
BGL_HVECTORP(BgL_objz00_40))
{ /* Ieee/output.scm 758 */
return 
BGl_writezf2displayzd2hvectorz20zz__r4_output_6_10_3z00(BgL_objz00_40, BgL_portz00_41, BGl_displayzd22zd2envz00zz__r4_output_6_10_3z00);}  else 
{ /* Ieee/output.scm 758 */
if(
TVECTORP(BgL_objz00_40))
{ /* Ieee/output.scm 758 */
return 
BGl_writezf2displayzd2tvectorz20zz__r4_output_6_10_3z00(BgL_objz00_40, BgL_portz00_41, BGl_displayzd22zd2envz00zz__r4_output_6_10_3z00);}  else 
{ /* Ieee/output.scm 758 */
if(
BGL_WEAKPTRP(BgL_objz00_40))
{ /* Ieee/output.scm 1049 */
obj_t BgL_dataz00_3069;
BgL_dataz00_3069 = 
weakptr_data(BgL_objz00_40); 
bgl_display_string(BGl_string3022z00zz__r4_output_6_10_3z00, BgL_portz00_41); 
bgl_display_obj(BgL_dataz00_3069, BgL_portz00_41); 
return 
bgl_display_char(((unsigned char)'>'), BgL_portz00_41);}  else 
{ /* Ieee/output.scm 758 */
if(
FOREIGNP(BgL_objz00_40))
{ /* Ieee/output.scm 758 */
return 
bgl_write_foreign(BgL_objz00_40, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 758 */
if(
PROCESSP(BgL_objz00_40))
{ /* Ieee/output.scm 758 */
obj_t BgL_tmpz00_6014;
if(
PROCESSP(BgL_objz00_40))
{ /* Ieee/output.scm 758 */
BgL_tmpz00_6014 = BgL_objz00_40
; }  else 
{ 
obj_t BgL_auxz00_6017;
BgL_auxz00_6017 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)26701)), BGl_string3010z00zz__r4_output_6_10_3z00, BGl_string3023z00zz__r4_output_6_10_3z00, BgL_objz00_40); 
FAILURE(BgL_auxz00_6017,BFALSE,BFALSE);} 
return 
bgl_write_process(BgL_tmpz00_6014, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 758 */
if(
SOCKETP(BgL_objz00_40))
{ /* Ieee/output.scm 758 */
obj_t BgL_tmpz00_6024;
if(
SOCKETP(BgL_objz00_40))
{ /* Ieee/output.scm 758 */
BgL_tmpz00_6024 = BgL_objz00_40
; }  else 
{ 
obj_t BgL_auxz00_6027;
BgL_auxz00_6027 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)26701)), BGl_string3010z00zz__r4_output_6_10_3z00, BGl_string3024z00zz__r4_output_6_10_3z00, BgL_objz00_40); 
FAILURE(BgL_auxz00_6027,BFALSE,BFALSE);} 
return 
bgl_write_socket(BgL_tmpz00_6024, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 758 */
bool_t BgL_test3500z00_6032;
{ /* Ieee/output.scm 758 */
bool_t BgL_res2291z00_3074;
BgL_res2291z00_3074 = 
BGL_DATAGRAM_SOCKETP(BgL_objz00_40); 
BgL_test3500z00_6032 = BgL_res2291z00_3074; } 
if(BgL_test3500z00_6032)
{ /* Ieee/output.scm 758 */
obj_t BgL_tmpz00_6034;
if(
BGL_DATAGRAM_SOCKETP(BgL_objz00_40))
{ /* Ieee/output.scm 758 */
BgL_tmpz00_6034 = BgL_objz00_40
; }  else 
{ 
obj_t BgL_auxz00_6037;
BgL_auxz00_6037 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)26701)), BGl_string3010z00zz__r4_output_6_10_3z00, BGl_string3025z00zz__r4_output_6_10_3z00, BgL_objz00_40); 
FAILURE(BgL_auxz00_6037,BFALSE,BFALSE);} 
return 
bgl_write_datagram_socket(BgL_tmpz00_6034, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 758 */
bool_t BgL_test3502z00_6042;
{ /* Ieee/output.scm 758 */
bool_t BgL_res2292z00_3075;
BgL_res2292z00_3075 = 
BGL_REGEXPP(BgL_objz00_40); 
BgL_test3502z00_6042 = BgL_res2292z00_3075; } 
if(BgL_test3502z00_6042)
{ /* Ieee/output.scm 758 */
obj_t BgL_tmpz00_6044;
{ /* Ieee/output.scm 758 */
bool_t BgL_test3503z00_6045;
{ /* Ieee/output.scm 758 */
bool_t BgL_res3129z00_4583;
BgL_res3129z00_4583 = 
BGL_REGEXPP(BgL_objz00_40); 
BgL_test3503z00_6045 = BgL_res3129z00_4583; } 
if(BgL_test3503z00_6045)
{ /* Ieee/output.scm 758 */
BgL_tmpz00_6044 = BgL_objz00_40
; }  else 
{ 
obj_t BgL_auxz00_6047;
BgL_auxz00_6047 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)26701)), BGl_string3010z00zz__r4_output_6_10_3z00, BGl_string3026z00zz__r4_output_6_10_3z00, BgL_objz00_40); 
FAILURE(BgL_auxz00_6047,BFALSE,BFALSE);} } 
return 
bgl_write_regexp(BgL_tmpz00_6044, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 758 */
bool_t BgL_test3504z00_6052;
{ /* Ieee/output.scm 758 */
bool_t BgL_res2293z00_3076;
BgL_res2293z00_3076 = 
BGL_MMAPP(BgL_objz00_40); 
BgL_test3504z00_6052 = BgL_res2293z00_3076; } 
if(BgL_test3504z00_6052)
{ /* Ieee/output.scm 758 */
obj_t BgL_tmpz00_6054;
if(
BGL_MMAPP(BgL_objz00_40))
{ /* Ieee/output.scm 758 */
BgL_tmpz00_6054 = BgL_objz00_40
; }  else 
{ 
obj_t BgL_auxz00_6057;
BgL_auxz00_6057 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)26701)), BGl_string3010z00zz__r4_output_6_10_3z00, BGl_string3027z00zz__r4_output_6_10_3z00, BgL_objz00_40); 
FAILURE(BgL_auxz00_6057,BFALSE,BFALSE);} 
return 
bgl_write_mmap(BgL_tmpz00_6054, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 758 */
bool_t BgL_test3506z00_6062;
{ /* Ieee/output.scm 758 */
bool_t BgL_res2294z00_3077;
BgL_res2294z00_3077 = 
BGL_SEMAPHOREP(BgL_objz00_40); 
BgL_test3506z00_6062 = BgL_res2294z00_3077; } 
if(BgL_test3506z00_6062)
{ /* Ieee/output.scm 758 */
obj_t BgL_tmpz00_6064;
if(
BGL_SEMAPHOREP(BgL_objz00_40))
{ /* Ieee/output.scm 758 */
BgL_tmpz00_6064 = BgL_objz00_40
; }  else 
{ 
obj_t BgL_auxz00_6067;
BgL_auxz00_6067 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)26701)), BGl_string3010z00zz__r4_output_6_10_3z00, BGl_string3028z00zz__r4_output_6_10_3z00, BgL_objz00_40); 
FAILURE(BgL_auxz00_6067,BFALSE,BFALSE);} 
return 
bgl_write_semaphore(BgL_tmpz00_6064, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 758 */
if(
OPAQUEP(BgL_objz00_40))
{ /* Ieee/output.scm 758 */
return 
bgl_write_opaque(BgL_objz00_40, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 758 */
if(
CUSTOMP(BgL_objz00_40))
{ /* Ieee/output.scm 758 */
return 
bgl_write_custom(BgL_objz00_40, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 758 */
if(
BINARY_PORTP(BgL_objz00_40))
{ /* Ieee/output.scm 758 */
return 
bgl_write_binary_port(BgL_objz00_40, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 758 */
if(
BGL_DYNAMIC_ENVP(BgL_objz00_40))
{ /* Ieee/output.scm 758 */
return 
bgl_write_dynamic_env(BgL_objz00_40, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 758 */
if(
BGL_INT8P(BgL_objz00_40))
{ /* Ieee/output.scm 758 */
long BgL_arg1476z00_1848;
{ /* Ieee/output.scm 758 */
long BgL_res2301z00_3087;
{ /* Ieee/output.scm 758 */
int8_t BgL_xz00_3083;
BgL_xz00_3083 = 
BGL_BINT8_TO_INT8(BgL_objz00_40); 
{ /* Ieee/output.scm 758 */
long BgL_arg1960z00_3084;
BgL_arg1960z00_3084 = 
(long)(BgL_xz00_3083); 
{ /* Ieee/output.scm 758 */
long BgL_res2300z00_3086;
BgL_res2300z00_3086 = 
(long)(BgL_arg1960z00_3084); 
BgL_res2301z00_3087 = BgL_res2300z00_3086; } } } 
BgL_arg1476z00_1848 = BgL_res2301z00_3087; } 
{ 
obj_t BgL_objz00_6089;
BgL_objz00_6089 = 
BINT(BgL_arg1476z00_1848); 
BgL_objz00_40 = BgL_objz00_6089; 
goto bgl_display_obj;} }  else 
{ /* Ieee/output.scm 758 */
if(
BGL_UINT8P(BgL_objz00_40))
{ /* Ieee/output.scm 758 */
long BgL_arg1478z00_1850;
{ /* Ieee/output.scm 758 */
long BgL_res2304z00_3093;
{ /* Ieee/output.scm 758 */
uint8_t BgL_xz00_3089;
BgL_xz00_3089 = 
BGL_BUINT8_TO_UINT8(BgL_objz00_40); 
{ /* Ieee/output.scm 758 */
long BgL_arg1959z00_3090;
BgL_arg1959z00_3090 = 
(long)(BgL_xz00_3089); 
{ /* Ieee/output.scm 758 */
long BgL_res2303z00_3092;
BgL_res2303z00_3092 = 
(long)(BgL_arg1959z00_3090); 
BgL_res2304z00_3093 = BgL_res2303z00_3092; } } } 
BgL_arg1478z00_1850 = BgL_res2304z00_3093; } 
{ 
obj_t BgL_objz00_6096;
BgL_objz00_6096 = 
BINT(BgL_arg1478z00_1850); 
BgL_objz00_40 = BgL_objz00_6096; 
goto bgl_display_obj;} }  else 
{ /* Ieee/output.scm 758 */
if(
BGL_INT16P(BgL_objz00_40))
{ /* Ieee/output.scm 758 */
long BgL_arg1480z00_1852;
{ /* Ieee/output.scm 758 */
long BgL_res2307z00_3099;
{ /* Ieee/output.scm 758 */
int16_t BgL_xz00_3095;
BgL_xz00_3095 = 
BGL_BINT16_TO_INT16(BgL_objz00_40); 
{ /* Ieee/output.scm 758 */
long BgL_arg1958z00_3096;
BgL_arg1958z00_3096 = 
(long)(BgL_xz00_3095); 
{ /* Ieee/output.scm 758 */
long BgL_res2306z00_3098;
BgL_res2306z00_3098 = 
(long)(BgL_arg1958z00_3096); 
BgL_res2307z00_3099 = BgL_res2306z00_3098; } } } 
BgL_arg1480z00_1852 = BgL_res2307z00_3099; } 
{ 
obj_t BgL_objz00_6103;
BgL_objz00_6103 = 
BINT(BgL_arg1480z00_1852); 
BgL_objz00_40 = BgL_objz00_6103; 
goto bgl_display_obj;} }  else 
{ /* Ieee/output.scm 758 */
if(
BGL_UINT16P(BgL_objz00_40))
{ /* Ieee/output.scm 758 */
long BgL_arg1483z00_1854;
{ /* Ieee/output.scm 758 */
long BgL_res2310z00_3105;
{ /* Ieee/output.scm 758 */
uint16_t BgL_xz00_3101;
BgL_xz00_3101 = 
BGL_BUINT16_TO_UINT16(BgL_objz00_40); 
{ /* Ieee/output.scm 758 */
long BgL_arg1957z00_3102;
BgL_arg1957z00_3102 = 
(long)(BgL_xz00_3101); 
{ /* Ieee/output.scm 758 */
long BgL_res2309z00_3104;
BgL_res2309z00_3104 = 
(long)(BgL_arg1957z00_3102); 
BgL_res2310z00_3105 = BgL_res2309z00_3104; } } } 
BgL_arg1483z00_1854 = BgL_res2310z00_3105; } 
{ 
obj_t BgL_objz00_6110;
BgL_objz00_6110 = 
BINT(BgL_arg1483z00_1854); 
BgL_objz00_40 = BgL_objz00_6110; 
goto bgl_display_obj;} }  else 
{ /* Ieee/output.scm 758 */
if(
BGL_INT32P(BgL_objz00_40))
{ /* Ieee/output.scm 758 */
long BgL_arg1485z00_1856;
{ /* Ieee/output.scm 758 */
long BgL_res2312z00_3108;
{ /* Ieee/output.scm 758 */
int32_t BgL_nz00_3107;
BgL_nz00_3107 = 
BGL_BINT32_TO_INT32(BgL_objz00_40); 
BgL_res2312z00_3108 = 
(long)(BgL_nz00_3107); } 
BgL_arg1485z00_1856 = BgL_res2312z00_3108; } 
{ 
obj_t BgL_objz00_6116;
BgL_objz00_6116 = 
make_belong(BgL_arg1485z00_1856); 
BgL_objz00_40 = BgL_objz00_6116; 
goto bgl_display_obj;} }  else 
{ /* Ieee/output.scm 758 */
if(
BGL_UINT32P(BgL_objz00_40))
{ /* Ieee/output.scm 758 */
BGL_LONGLONG_T BgL_arg1487z00_1858;
{ /* Ieee/output.scm 758 */
BGL_LONGLONG_T BgL_res2314z00_3111;
{ /* Ieee/output.scm 758 */
uint32_t BgL_nz00_3110;
BgL_nz00_3110 = 
BGL_BUINT32_TO_UINT32(BgL_objz00_40); 
BgL_res2314z00_3111 = 
(BGL_LONGLONG_T)(BgL_nz00_3110); } 
BgL_arg1487z00_1858 = BgL_res2314z00_3111; } 
{ 
obj_t BgL_objz00_6122;
BgL_objz00_6122 = 
make_bllong(BgL_arg1487z00_1858); 
BgL_objz00_40 = BgL_objz00_6122; 
goto bgl_display_obj;} }  else 
{ /* Ieee/output.scm 758 */
if(
BGL_INT64P(BgL_objz00_40))
{ /* Ieee/output.scm 758 */
BGL_LONGLONG_T BgL_arg1489z00_1860;
{ /* Ieee/output.scm 758 */
BGL_LONGLONG_T BgL_res2316z00_3114;
{ /* Ieee/output.scm 758 */
int64_t BgL_nz00_3113;
BgL_nz00_3113 = 
BGL_BINT64_TO_INT64(BgL_objz00_40); 
BgL_res2316z00_3114 = 
(BGL_LONGLONG_T)(BgL_nz00_3113); } 
BgL_arg1489z00_1860 = BgL_res2316z00_3114; } 
{ 
obj_t BgL_objz00_6128;
BgL_objz00_6128 = 
make_bllong(BgL_arg1489z00_1860); 
BgL_objz00_40 = BgL_objz00_6128; 
goto bgl_display_obj;} }  else 
{ /* Ieee/output.scm 758 */
if(
BGL_UINT64P(BgL_objz00_40))
{ /* Ieee/output.scm 758 */
{ /* Ieee/output.scm 758 */
uint64_t BgL_vz00_1862;
{ /* Ieee/output.scm 758 */
uint64_t BgL_arg1493z00_1865;
{ /* Ieee/output.scm 758 */
uint64_t BgL_res2318z00_3116;
BgL_res2318z00_3116 = 
(uint64_t)(((long)10)); 
BgL_arg1493z00_1865 = BgL_res2318z00_3116; } 
{ /* Ieee/output.scm 758 */
uint64_t BgL_za71za7_3117;
BgL_za71za7_3117 = 
BGL_BINT64_TO_INT64(BgL_objz00_40); 
BgL_vz00_1862 = 
(BgL_za71za7_3117/BgL_arg1493z00_1865); } } 
if(
(BgL_vz00_1862>(uint64_t)(0)))
{ /* Ieee/output.scm 758 */
BGL_LONGLONG_T BgL_arg1492z00_1864;
{ /* Ieee/output.scm 758 */
BGL_LONGLONG_T BgL_res2321z00_3124;
BgL_res2321z00_3124 = 
(BGL_LONGLONG_T)(BgL_vz00_1862); 
BgL_arg1492z00_1864 = BgL_res2321z00_3124; } 
bgl_display_obj(
make_bllong(BgL_arg1492z00_1864), BgL_portz00_41); }  else 
{ /* Ieee/output.scm 758 */BFALSE; } } 
{ /* Ieee/output.scm 758 */
long BgL_arg1494z00_1866;
{ /* Ieee/output.scm 758 */
uint64_t BgL_arg1495z00_1867;
{ /* Ieee/output.scm 758 */
uint64_t BgL_arg1496z00_1868;
{ /* Ieee/output.scm 758 */
uint64_t BgL_res2322z00_3125;
BgL_res2322z00_3125 = 
(uint64_t)(((long)10)); 
BgL_arg1496z00_1868 = BgL_res2322z00_3125; } 
{ /* Ieee/output.scm 758 */
uint64_t BgL_res2323z00_3128;
{ /* Ieee/output.scm 758 */
uint64_t BgL_n1z00_3126;
BgL_n1z00_3126 = 
BGL_BINT64_TO_INT64(BgL_objz00_40); 
{ /* Ieee/output.scm 758 */
int64_t BgL_tmpz00_6142;
BgL_tmpz00_6142 = 
(int64_t)(BgL_arg1496z00_1868); 
BgL_res2323z00_3128 = 
(BgL_n1z00_3126%BgL_tmpz00_6142); } } 
BgL_arg1495z00_1867 = BgL_res2323z00_3128; } } 
{ /* Ieee/output.scm 758 */
long BgL_res2325z00_3133;
{ /* Ieee/output.scm 758 */
long BgL_arg1954z00_3130;
BgL_arg1954z00_3130 = 
(long)(BgL_arg1495z00_1867); 
{ /* Ieee/output.scm 758 */
long BgL_res2324z00_3132;
BgL_res2324z00_3132 = 
(long)(BgL_arg1954z00_3130); 
BgL_res2325z00_3133 = BgL_res2324z00_3132; } } 
BgL_arg1494z00_1866 = BgL_res2325z00_3133; } } 
{ 
obj_t BgL_objz00_6147;
BgL_objz00_6147 = 
BINT(BgL_arg1494z00_1866); 
BgL_objz00_40 = BgL_objz00_6147; 
goto bgl_display_obj;} } }  else 
{ /* Ieee/output.scm 758 */
if(
CNSTP(BgL_objz00_40))
{ /* Ieee/output.scm 758 */
return 
bgl_write_cnst(BgL_objz00_40, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 758 */
return 
bgl_write_unknown(BgL_objz00_40, BgL_portz00_41);} } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } 

}



/* &display-2 */
obj_t BGl_z62displayzd22zb0zz__r4_output_6_10_3z00(obj_t BgL_envz00_4126, obj_t BgL_objz00_4127, obj_t BgL_portz00_4128)
{
{ /* Ieee/output.scm 757 */
return 
bgl_display_obj(BgL_objz00_4127, BgL_portz00_4128);} 

}



/* write-2 */
BGL_EXPORTED_DEF obj_t bgl_write_obj(obj_t BgL_objz00_42, obj_t BgL_portz00_43)
{
{ /* Ieee/output.scm 763 */
if(
STRINGP(BgL_objz00_42))
{ /* Ieee/output.scm 764 */
if(
BGl_bigloozd2strictzd2r5rszd2stringszd2zz__paramz00())
{ /* Ieee/output.scm 851 */
obj_t BgL_strz00_3139;
BgL_strz00_3139 = 
string_for_read(BgL_objz00_42); 
{ /* Ieee/output.scm 852 */
obj_t BgL_escz00_3140;
{ /* Ieee/output.scm 853 */
int BgL_tmpz00_6159;
BgL_tmpz00_6159 = 
(int)(((long)1)); 
BgL_escz00_3140 = 
BGL_MVALUES_VAL(BgL_tmpz00_6159); } 
return 
bgl_write_string(BgL_strz00_3139, 
CBOOL(BgL_escz00_3140), BgL_portz00_43);} }  else 
{ /* Ieee/output.scm 848 */
return 
bgl_write_string(
string_for_read(BgL_objz00_42), ((bool_t)0), BgL_portz00_43);} }  else 
{ /* Ieee/output.scm 764 */
if(
SYMBOLP(BgL_objz00_42))
{ /* Ieee/output.scm 764 */
return 
BGl_writezd2symbolzd2zz__r4_output_6_10_3z00(BgL_objz00_42, BgL_portz00_43);}  else 
{ /* Ieee/output.scm 764 */
if(
INTEGERP(BgL_objz00_42))
{ /* Ieee/output.scm 764 */
return 
bgl_display_fixnum(BgL_objz00_42, BgL_portz00_43);}  else 
{ /* Ieee/output.scm 764 */
if(
CHARP(BgL_objz00_42))
{ /* Ieee/output.scm 764 */
return 
bgl_write_char(BgL_objz00_42, BgL_portz00_43);}  else 
{ /* Ieee/output.scm 764 */
if(
PAIRP(BgL_objz00_42))
{ /* Ieee/output.scm 764 */
return 
BGl_writezd2pairzd2zz__r4_output_6_10_3z00(BgL_objz00_42, BgL_portz00_43);}  else 
{ /* Ieee/output.scm 764 */
if(
NULLP(BgL_objz00_42))
{ /* Ieee/output.scm 764 */
return 
bgl_display_string(BGl_string3005z00zz__r4_output_6_10_3z00, BgL_portz00_43);}  else 
{ /* Ieee/output.scm 764 */
if(
(BgL_objz00_42==BFALSE))
{ /* Ieee/output.scm 764 */
return 
bgl_display_string(BGl_string3006z00zz__r4_output_6_10_3z00, BgL_portz00_43);}  else 
{ /* Ieee/output.scm 764 */
if(
(BgL_objz00_42==BTRUE))
{ /* Ieee/output.scm 764 */
return 
bgl_display_string(BGl_string3007z00zz__r4_output_6_10_3z00, BgL_portz00_43);}  else 
{ /* Ieee/output.scm 764 */
if(
(BgL_objz00_42==BUNSPEC))
{ /* Ieee/output.scm 764 */
return 
bgl_display_string(BGl_string3008z00zz__r4_output_6_10_3z00, BgL_portz00_43);}  else 
{ /* Ieee/output.scm 764 */
if(
ELONGP(BgL_objz00_42))
{ /* Ieee/output.scm 764 */
return 
bgl_write_elong(
BELONG_TO_LONG(BgL_objz00_42), BgL_portz00_43);}  else 
{ /* Ieee/output.scm 764 */
if(
REALP(BgL_objz00_42))
{ /* Ieee/output.scm 881 */
obj_t BgL_arg1623z00_3163;
BgL_arg1623z00_3163 = 
bgl_real_to_string(
REAL_TO_DOUBLE(BgL_objz00_42)); 
return 
bgl_display_string(BgL_arg1623z00_3163, BgL_portz00_43);}  else 
{ /* Ieee/output.scm 764 */
if(
KEYWORDP(BgL_objz00_42))
{ /* Ieee/output.scm 764 */
bgl_display_char(((unsigned char)':'), BgL_portz00_43); 
{ /* Ieee/output.scm 863 */
obj_t BgL_arg1621z00_3167;
{ /* Ieee/output.scm 863 */
obj_t BgL_res2338z00_3169;
BgL_res2338z00_3169 = 
KEYWORD_TO_STRING(BgL_objz00_42); 
BgL_arg1621z00_3167 = BgL_res2338z00_3169; } 
return 
bgl_display_string(BgL_arg1621z00_3167, BgL_portz00_43);} }  else 
{ /* Ieee/output.scm 764 */
if(
BGl_classzf3zf3zz__objectz00(BgL_objz00_42))
{ /* Ieee/output.scm 764 */
bgl_display_string(BGl_string3009z00zz__r4_output_6_10_3z00, BgL_portz00_43); 
{ /* Ieee/output.scm 933 */
obj_t BgL_arg1632z00_3172;
{ /* Ieee/output.scm 933 */
obj_t BgL_auxz00_6207;
if(
BGl_classzf3zf3zz__objectz00(BgL_objz00_42))
{ /* Ieee/output.scm 933 */
BgL_auxz00_6207 = BgL_objz00_42
; }  else 
{ 
obj_t BgL_auxz00_6210;
BgL_auxz00_6210 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)33858)), BGl_string3029z00zz__r4_output_6_10_3z00, BGl_string3011z00zz__r4_output_6_10_3z00, BgL_objz00_42); 
FAILURE(BgL_auxz00_6210,BFALSE,BFALSE);} 
BgL_arg1632z00_3172 = 
BGl_classzd2namezd2zz__objectz00(BgL_auxz00_6207); } 
{ /* Ieee/output.scm 770 */
obj_t BgL_arg1573z00_3177;
{ /* Ieee/output.scm 770 */
obj_t BgL_res2339z00_3179;
BgL_res2339z00_3179 = 
SYMBOL_TO_STRING(BgL_arg1632z00_3172); 
BgL_arg1573z00_3177 = BgL_res2339z00_3179; } 
bgl_display_string(BgL_arg1573z00_3177, BgL_portz00_43); } } 
return 
bgl_display_string(BGl_string3012z00zz__r4_output_6_10_3z00, BgL_portz00_43);}  else 
{ /* Ieee/output.scm 764 */
if(
VECTORP(BgL_objz00_42))
{ /* Ieee/output.scm 764 */
return 
BGl_writezf2displayzd2vectorz20zz__r4_output_6_10_3z00(BgL_objz00_42, BgL_portz00_43, BGl_writezd22zd2envz00zz__r4_output_6_10_3z00);}  else 
{ /* Ieee/output.scm 764 */
if(
LLONGP(BgL_objz00_42))
{ /* Ieee/output.scm 764 */
return 
bgl_write_llong(
BLLONG_TO_LLONG(BgL_objz00_42), BgL_portz00_43);}  else 
{ /* Ieee/output.scm 764 */
if(
UCS2_STRINGP(BgL_objz00_42))
{ /* Ieee/output.scm 764 */
return 
bgl_write_utf8string(
string_for_read(
ucs2_string_to_utf8_string(BgL_objz00_42)), BgL_portz00_43);}  else 
{ /* Ieee/output.scm 764 */
if(
STRUCTP(BgL_objz00_42))
{ /* Ieee/output.scm 764 */
return 
BGl_writezf2displayzd2structurez20zz__r4_output_6_10_3z00(BgL_objz00_42, BgL_portz00_43, BGl_writezd22zd2envz00zz__r4_output_6_10_3z00);}  else 
{ /* Ieee/output.scm 764 */
if(
BGL_OBJECTP(BgL_objz00_42))
{ /* Ieee/output.scm 764 */
obj_t BgL_list1516z00_1888;
BgL_list1516z00_1888 = 
MAKE_YOUNG_PAIR(BgL_portz00_43, BNIL); 
return 
BGl_objectzd2writezd2zz__objectz00(
((BgL_objectz00_bglt)BgL_objz00_42), BgL_list1516z00_1888);}  else 
{ /* Ieee/output.scm 764 */
if(
BGL_DATEP(BgL_objz00_42))
{ /* Ieee/output.scm 764 */
bgl_display_string(BGl_string3030z00zz__r4_output_6_10_3z00, BgL_portz00_43); 
{ /* Ieee/output.scm 830 */
obj_t BgL_tmpz00_6241;
BgL_tmpz00_6241 = 
BGl_datezd2ze3stringz31zz__datez00(BgL_objz00_42); 
bgl_display_string(BgL_tmpz00_6241, BgL_portz00_43); } 
return 
bgl_display_string(BGl_string3012z00zz__r4_output_6_10_3z00, BgL_portz00_43);}  else 
{ /* Ieee/output.scm 764 */
bool_t BgL_test3543z00_6245;
{ /* Ieee/output.scm 764 */
bool_t BgL_res2348z00_3205;
BgL_res2348z00_3205 = 
BGL_MUTEXP(BgL_objz00_42); 
BgL_test3543z00_6245 = BgL_res2348z00_3205; } 
if(BgL_test3543z00_6245)
{ /* Ieee/output.scm 764 */
return 
BGl_writezd2mutexzd2zz__r4_output_6_10_3z00(BgL_objz00_42, BgL_portz00_43);}  else 
{ /* Ieee/output.scm 764 */
bool_t BgL_test3544z00_6248;
{ /* Ieee/output.scm 764 */
bool_t BgL_res2349z00_3206;
BgL_res2349z00_3206 = 
BGL_CONDVARP(BgL_objz00_42); 
BgL_test3544z00_6248 = BgL_res2349z00_3206; } 
if(BgL_test3544z00_6248)
{ /* Ieee/output.scm 764 */
bgl_display_string(BGl_string3013z00zz__r4_output_6_10_3z00, BgL_portz00_43); 
{ /* Ieee/output.scm 925 */
obj_t BgL_arg1631z00_3207;
{ /* Ieee/output.scm 925 */
obj_t BgL_objz00_3210;
if(
BGL_CONDVARP(BgL_objz00_42))
{ /* Ieee/output.scm 925 */
BgL_objz00_3210 = BgL_objz00_42; }  else 
{ 
obj_t BgL_auxz00_6253;
BgL_auxz00_6253 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)33495)), BGl_string3029z00zz__r4_output_6_10_3z00, BGl_string3014z00zz__r4_output_6_10_3z00, BgL_objz00_42); 
FAILURE(BgL_auxz00_6253,BFALSE,BFALSE);} 
BgL_arg1631z00_3207 = 
BGL_CONDVAR_NAME(BgL_objz00_3210); } 
bgl_display_obj(BgL_arg1631z00_3207, BgL_portz00_43); } 
return 
bgl_display_string(BGl_string3012z00zz__r4_output_6_10_3z00, BgL_portz00_43);}  else 
{ /* Ieee/output.scm 764 */
if(
UCS2P(BgL_objz00_42))
{ /* Ieee/output.scm 764 */
return 
bgl_write_ucs2(BgL_objz00_42, BgL_portz00_43);}  else 
{ /* Ieee/output.scm 764 */
if(
CELLP(BgL_objz00_42))
{ /* Ieee/output.scm 764 */
bgl_display_string(BGl_string3015z00zz__r4_output_6_10_3z00, BgL_portz00_43); 
bgl_write_obj(
CELL_REF(BgL_objz00_42), BgL_portz00_43); 
return 
bgl_display_string(BGl_string3012z00zz__r4_output_6_10_3z00, BgL_portz00_43);}  else 
{ /* Ieee/output.scm 764 */
bool_t BgL_test3548z00_6269;
{ /* Ieee/output.scm 764 */
bool_t BgL_res2351z00_3220;
BgL_res2351z00_3220 = 
EOF_OBJECTP(BgL_objz00_42); 
BgL_test3548z00_6269 = BgL_res2351z00_3220; } 
if(BgL_test3548z00_6269)
{ /* Ieee/output.scm 764 */
return 
bgl_display_string(BGl_string3016z00zz__r4_output_6_10_3z00, BgL_portz00_43);}  else 
{ /* Ieee/output.scm 764 */
if(
(BgL_objz00_42==(BOPTIONAL)))
{ /* Ieee/output.scm 764 */
return 
bgl_display_string(BGl_string3017z00zz__r4_output_6_10_3z00, BgL_portz00_43);}  else 
{ /* Ieee/output.scm 764 */
if(
(BgL_objz00_42==(BREST)))
{ /* Ieee/output.scm 764 */
return 
bgl_display_string(BGl_string3018z00zz__r4_output_6_10_3z00, BgL_portz00_43);}  else 
{ /* Ieee/output.scm 764 */
if(
(BgL_objz00_42==(BKEY)))
{ /* Ieee/output.scm 764 */
return 
bgl_display_string(BGl_string3019z00zz__r4_output_6_10_3z00, BgL_portz00_43);}  else 
{ /* Ieee/output.scm 764 */
if(
PROCEDUREP(BgL_objz00_42))
{ /* Ieee/output.scm 764 */
return 
bgl_write_procedure(BgL_objz00_42, BgL_portz00_43);}  else 
{ /* Ieee/output.scm 764 */
if(
OUTPUT_PORTP(BgL_objz00_42))
{ /* Ieee/output.scm 764 */
if(
BGL_OUTPUT_STRING_PORTP(BgL_objz00_42))
{ /* Ieee/output.scm 764 */
return 
bgl_display_string(BGl_string3020z00zz__r4_output_6_10_3z00, BgL_portz00_43);}  else 
{ /* Ieee/output.scm 764 */
if(
BGL_OUTPUT_PROCEDURE_PORTP(BgL_objz00_42))
{ /* Ieee/output.scm 764 */
return 
bgl_display_string(BGl_string3021z00zz__r4_output_6_10_3z00, BgL_portz00_43);}  else 
{ /* Ieee/output.scm 764 */
return 
bgl_write_output_port(BgL_objz00_42, BgL_portz00_43);} } }  else 
{ /* Ieee/output.scm 764 */
if(
INPUT_PORTP(BgL_objz00_42))
{ /* Ieee/output.scm 764 */
return 
bgl_write_input_port(BgL_objz00_42, BgL_portz00_43);}  else 
{ /* Ieee/output.scm 764 */
if(
BIGNUMP(BgL_objz00_42))
{ /* Ieee/output.scm 764 */
return 
bgl_write_bignum(BgL_objz00_42, BgL_portz00_43);}  else 
{ /* Ieee/output.scm 764 */
if(
BGL_HVECTORP(BgL_objz00_42))
{ /* Ieee/output.scm 764 */
return 
BGl_writezf2displayzd2hvectorz20zz__r4_output_6_10_3z00(BgL_objz00_42, BgL_portz00_43, BGl_writezd22zd2envz00zz__r4_output_6_10_3z00);}  else 
{ /* Ieee/output.scm 764 */
if(
TVECTORP(BgL_objz00_42))
{ /* Ieee/output.scm 764 */
return 
BGl_writezf2displayzd2tvectorz20zz__r4_output_6_10_3z00(BgL_objz00_42, BgL_portz00_43, BGl_writezd22zd2envz00zz__r4_output_6_10_3z00);}  else 
{ /* Ieee/output.scm 764 */
if(
BGL_WEAKPTRP(BgL_objz00_42))
{ /* Ieee/output.scm 1049 */
obj_t BgL_dataz00_3237;
BgL_dataz00_3237 = 
weakptr_data(BgL_objz00_42); 
bgl_display_string(BGl_string3022z00zz__r4_output_6_10_3z00, BgL_portz00_43); 
bgl_write_obj(BgL_dataz00_3237, BgL_portz00_43); 
return 
bgl_display_char(((unsigned char)'>'), BgL_portz00_43);}  else 
{ /* Ieee/output.scm 764 */
if(
FOREIGNP(BgL_objz00_42))
{ /* Ieee/output.scm 764 */
return 
bgl_write_foreign(BgL_objz00_42, BgL_portz00_43);}  else 
{ /* Ieee/output.scm 764 */
if(
PROCESSP(BgL_objz00_42))
{ /* Ieee/output.scm 764 */
obj_t BgL_tmpz00_6316;
if(
PROCESSP(BgL_objz00_42))
{ /* Ieee/output.scm 764 */
BgL_tmpz00_6316 = BgL_objz00_42
; }  else 
{ 
obj_t BgL_auxz00_6319;
BgL_auxz00_6319 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)27004)), BGl_string3029z00zz__r4_output_6_10_3z00, BGl_string3023z00zz__r4_output_6_10_3z00, BgL_objz00_42); 
FAILURE(BgL_auxz00_6319,BFALSE,BFALSE);} 
return 
bgl_write_process(BgL_tmpz00_6316, BgL_portz00_43);}  else 
{ /* Ieee/output.scm 764 */
if(
SOCKETP(BgL_objz00_42))
{ /* Ieee/output.scm 764 */
obj_t BgL_tmpz00_6326;
if(
SOCKETP(BgL_objz00_42))
{ /* Ieee/output.scm 764 */
BgL_tmpz00_6326 = BgL_objz00_42
; }  else 
{ 
obj_t BgL_auxz00_6329;
BgL_auxz00_6329 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)27004)), BGl_string3029z00zz__r4_output_6_10_3z00, BGl_string3024z00zz__r4_output_6_10_3z00, BgL_objz00_42); 
FAILURE(BgL_auxz00_6329,BFALSE,BFALSE);} 
return 
bgl_write_socket(BgL_tmpz00_6326, BgL_portz00_43);}  else 
{ /* Ieee/output.scm 764 */
bool_t BgL_test3566z00_6334;
{ /* Ieee/output.scm 764 */
bool_t BgL_res2359z00_3242;
BgL_res2359z00_3242 = 
BGL_DATAGRAM_SOCKETP(BgL_objz00_42); 
BgL_test3566z00_6334 = BgL_res2359z00_3242; } 
if(BgL_test3566z00_6334)
{ /* Ieee/output.scm 764 */
obj_t BgL_tmpz00_6336;
if(
BGL_DATAGRAM_SOCKETP(BgL_objz00_42))
{ /* Ieee/output.scm 764 */
BgL_tmpz00_6336 = BgL_objz00_42
; }  else 
{ 
obj_t BgL_auxz00_6339;
BgL_auxz00_6339 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)27004)), BGl_string3029z00zz__r4_output_6_10_3z00, BGl_string3025z00zz__r4_output_6_10_3z00, BgL_objz00_42); 
FAILURE(BgL_auxz00_6339,BFALSE,BFALSE);} 
return 
bgl_write_datagram_socket(BgL_tmpz00_6336, BgL_portz00_43);}  else 
{ /* Ieee/output.scm 764 */
bool_t BgL_test3568z00_6344;
{ /* Ieee/output.scm 764 */
bool_t BgL_res2360z00_3243;
BgL_res2360z00_3243 = 
BGL_REGEXPP(BgL_objz00_42); 
BgL_test3568z00_6344 = BgL_res2360z00_3243; } 
if(BgL_test3568z00_6344)
{ /* Ieee/output.scm 764 */
obj_t BgL_tmpz00_6346;
{ /* Ieee/output.scm 764 */
bool_t BgL_test3569z00_6347;
{ /* Ieee/output.scm 764 */
bool_t BgL_res3130z00_4584;
BgL_res3130z00_4584 = 
BGL_REGEXPP(BgL_objz00_42); 
BgL_test3569z00_6347 = BgL_res3130z00_4584; } 
if(BgL_test3569z00_6347)
{ /* Ieee/output.scm 764 */
BgL_tmpz00_6346 = BgL_objz00_42
; }  else 
{ 
obj_t BgL_auxz00_6349;
BgL_auxz00_6349 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)27004)), BGl_string3029z00zz__r4_output_6_10_3z00, BGl_string3026z00zz__r4_output_6_10_3z00, BgL_objz00_42); 
FAILURE(BgL_auxz00_6349,BFALSE,BFALSE);} } 
return 
bgl_write_regexp(BgL_tmpz00_6346, BgL_portz00_43);}  else 
{ /* Ieee/output.scm 764 */
bool_t BgL_test3570z00_6354;
{ /* Ieee/output.scm 764 */
bool_t BgL_res2361z00_3244;
BgL_res2361z00_3244 = 
BGL_MMAPP(BgL_objz00_42); 
BgL_test3570z00_6354 = BgL_res2361z00_3244; } 
if(BgL_test3570z00_6354)
{ /* Ieee/output.scm 764 */
obj_t BgL_tmpz00_6356;
if(
BGL_MMAPP(BgL_objz00_42))
{ /* Ieee/output.scm 764 */
BgL_tmpz00_6356 = BgL_objz00_42
; }  else 
{ 
obj_t BgL_auxz00_6359;
BgL_auxz00_6359 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)27004)), BGl_string3029z00zz__r4_output_6_10_3z00, BGl_string3027z00zz__r4_output_6_10_3z00, BgL_objz00_42); 
FAILURE(BgL_auxz00_6359,BFALSE,BFALSE);} 
return 
bgl_write_mmap(BgL_tmpz00_6356, BgL_portz00_43);}  else 
{ /* Ieee/output.scm 764 */
bool_t BgL_test3572z00_6364;
{ /* Ieee/output.scm 764 */
bool_t BgL_res2362z00_3245;
BgL_res2362z00_3245 = 
BGL_SEMAPHOREP(BgL_objz00_42); 
BgL_test3572z00_6364 = BgL_res2362z00_3245; } 
if(BgL_test3572z00_6364)
{ /* Ieee/output.scm 764 */
obj_t BgL_tmpz00_6366;
if(
BGL_SEMAPHOREP(BgL_objz00_42))
{ /* Ieee/output.scm 764 */
BgL_tmpz00_6366 = BgL_objz00_42
; }  else 
{ 
obj_t BgL_auxz00_6369;
BgL_auxz00_6369 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)27004)), BGl_string3029z00zz__r4_output_6_10_3z00, BGl_string3028z00zz__r4_output_6_10_3z00, BgL_objz00_42); 
FAILURE(BgL_auxz00_6369,BFALSE,BFALSE);} 
return 
bgl_write_semaphore(BgL_tmpz00_6366, BgL_portz00_43);}  else 
{ /* Ieee/output.scm 764 */
if(
OPAQUEP(BgL_objz00_42))
{ /* Ieee/output.scm 764 */
return 
bgl_write_opaque(BgL_objz00_42, BgL_portz00_43);}  else 
{ /* Ieee/output.scm 764 */
if(
CUSTOMP(BgL_objz00_42))
{ /* Ieee/output.scm 764 */
return 
bgl_write_custom(BgL_objz00_42, BgL_portz00_43);}  else 
{ /* Ieee/output.scm 764 */
if(
BINARY_PORTP(BgL_objz00_42))
{ /* Ieee/output.scm 764 */
return 
bgl_write_binary_port(BgL_objz00_42, BgL_portz00_43);}  else 
{ /* Ieee/output.scm 764 */
if(
BGL_DYNAMIC_ENVP(BgL_objz00_42))
{ /* Ieee/output.scm 764 */
return 
bgl_write_dynamic_env(BgL_objz00_42, BgL_portz00_43);}  else 
{ /* Ieee/output.scm 764 */
if(
BGL_INT8P(BgL_objz00_42))
{ /* Ieee/output.scm 764 */
bgl_display_string(BGl_string3031z00zz__r4_output_6_10_3z00, BgL_portz00_43); 
{ /* Ieee/output.scm 764 */
long BgL_arg1547z00_1919;
{ /* Ieee/output.scm 764 */
long BgL_res2369z00_3257;
{ /* Ieee/output.scm 764 */
int8_t BgL_xz00_3253;
BgL_xz00_3253 = 
BGL_BINT8_TO_INT8(BgL_objz00_42); 
{ /* Ieee/output.scm 764 */
long BgL_arg1960z00_3254;
BgL_arg1960z00_3254 = 
(long)(BgL_xz00_3253); 
{ /* Ieee/output.scm 764 */
long BgL_res2368z00_3256;
BgL_res2368z00_3256 = 
(long)(BgL_arg1960z00_3254); 
BgL_res2369z00_3257 = BgL_res2368z00_3256; } } } 
BgL_arg1547z00_1919 = BgL_res2369z00_3257; } 
return 
bgl_display_obj(
BINT(BgL_arg1547z00_1919), BgL_portz00_43);} }  else 
{ /* Ieee/output.scm 764 */
if(
BGL_UINT8P(BgL_objz00_42))
{ /* Ieee/output.scm 764 */
bgl_display_string(BGl_string3032z00zz__r4_output_6_10_3z00, BgL_portz00_43); 
{ /* Ieee/output.scm 764 */
long BgL_arg1551z00_1921;
{ /* Ieee/output.scm 764 */
long BgL_res2372z00_3265;
{ /* Ieee/output.scm 764 */
uint8_t BgL_xz00_3261;
BgL_xz00_3261 = 
BGL_BUINT8_TO_UINT8(BgL_objz00_42); 
{ /* Ieee/output.scm 764 */
long BgL_arg1959z00_3262;
BgL_arg1959z00_3262 = 
(long)(BgL_xz00_3261); 
{ /* Ieee/output.scm 764 */
long BgL_res2371z00_3264;
BgL_res2371z00_3264 = 
(long)(BgL_arg1959z00_3262); 
BgL_res2372z00_3265 = BgL_res2371z00_3264; } } } 
BgL_arg1551z00_1921 = BgL_res2372z00_3265; } 
return 
bgl_display_obj(
BINT(BgL_arg1551z00_1921), BgL_portz00_43);} }  else 
{ /* Ieee/output.scm 764 */
if(
BGL_INT16P(BgL_objz00_42))
{ /* Ieee/output.scm 764 */
bgl_display_string(BGl_string3033z00zz__r4_output_6_10_3z00, BgL_portz00_43); 
{ /* Ieee/output.scm 764 */
long BgL_arg1553z00_1923;
{ /* Ieee/output.scm 764 */
long BgL_res2375z00_3273;
{ /* Ieee/output.scm 764 */
int16_t BgL_xz00_3269;
BgL_xz00_3269 = 
BGL_BINT16_TO_INT16(BgL_objz00_42); 
{ /* Ieee/output.scm 764 */
long BgL_arg1958z00_3270;
BgL_arg1958z00_3270 = 
(long)(BgL_xz00_3269); 
{ /* Ieee/output.scm 764 */
long BgL_res2374z00_3272;
BgL_res2374z00_3272 = 
(long)(BgL_arg1958z00_3270); 
BgL_res2375z00_3273 = BgL_res2374z00_3272; } } } 
BgL_arg1553z00_1923 = BgL_res2375z00_3273; } 
return 
bgl_display_obj(
BINT(BgL_arg1553z00_1923), BgL_portz00_43);} }  else 
{ /* Ieee/output.scm 764 */
if(
BGL_UINT16P(BgL_objz00_42))
{ /* Ieee/output.scm 764 */
bgl_display_string(BGl_string3034z00zz__r4_output_6_10_3z00, BgL_portz00_43); 
{ /* Ieee/output.scm 764 */
long BgL_arg1556z00_1925;
{ /* Ieee/output.scm 764 */
long BgL_res2378z00_3281;
{ /* Ieee/output.scm 764 */
uint16_t BgL_xz00_3277;
BgL_xz00_3277 = 
BGL_BUINT16_TO_UINT16(BgL_objz00_42); 
{ /* Ieee/output.scm 764 */
long BgL_arg1957z00_3278;
BgL_arg1957z00_3278 = 
(long)(BgL_xz00_3277); 
{ /* Ieee/output.scm 764 */
long BgL_res2377z00_3280;
BgL_res2377z00_3280 = 
(long)(BgL_arg1957z00_3278); 
BgL_res2378z00_3281 = BgL_res2377z00_3280; } } } 
BgL_arg1556z00_1925 = BgL_res2378z00_3281; } 
return 
bgl_display_obj(
BINT(BgL_arg1556z00_1925), BgL_portz00_43);} }  else 
{ /* Ieee/output.scm 764 */
if(
BGL_INT32P(BgL_objz00_42))
{ /* Ieee/output.scm 764 */
bgl_display_string(BGl_string3035z00zz__r4_output_6_10_3z00, BgL_portz00_43); 
{ /* Ieee/output.scm 764 */
long BgL_arg1558z00_1927;
{ /* Ieee/output.scm 764 */
long BgL_res2380z00_3286;
{ /* Ieee/output.scm 764 */
int32_t BgL_nz00_3285;
BgL_nz00_3285 = 
BGL_BINT32_TO_INT32(BgL_objz00_42); 
BgL_res2380z00_3286 = 
(long)(BgL_nz00_3285); } 
BgL_arg1558z00_1927 = BgL_res2380z00_3286; } 
return 
bgl_display_obj(
make_belong(BgL_arg1558z00_1927), BgL_portz00_43);} }  else 
{ /* Ieee/output.scm 764 */
if(
BGL_UINT32P(BgL_objz00_42))
{ /* Ieee/output.scm 764 */
bgl_display_string(BGl_string3036z00zz__r4_output_6_10_3z00, BgL_portz00_43); 
{ /* Ieee/output.scm 764 */
BGL_LONGLONG_T BgL_arg1560z00_1929;
{ /* Ieee/output.scm 764 */
BGL_LONGLONG_T BgL_res2382z00_3291;
{ /* Ieee/output.scm 764 */
uint32_t BgL_nz00_3290;
BgL_nz00_3290 = 
BGL_BUINT32_TO_UINT32(BgL_objz00_42); 
BgL_res2382z00_3291 = 
(BGL_LONGLONG_T)(BgL_nz00_3290); } 
BgL_arg1560z00_1929 = BgL_res2382z00_3291; } 
return 
bgl_display_obj(
make_bllong(BgL_arg1560z00_1929), BgL_portz00_43);} }  else 
{ /* Ieee/output.scm 764 */
if(
BGL_INT64P(BgL_objz00_42))
{ /* Ieee/output.scm 764 */
bgl_display_string(BGl_string3037z00zz__r4_output_6_10_3z00, BgL_portz00_43); 
{ /* Ieee/output.scm 764 */
BGL_LONGLONG_T BgL_arg1562z00_1931;
{ /* Ieee/output.scm 764 */
BGL_LONGLONG_T BgL_res2384z00_3296;
{ /* Ieee/output.scm 764 */
int64_t BgL_nz00_3295;
BgL_nz00_3295 = 
BGL_BINT64_TO_INT64(BgL_objz00_42); 
BgL_res2384z00_3296 = 
(BGL_LONGLONG_T)(BgL_nz00_3295); } 
BgL_arg1562z00_1931 = BgL_res2384z00_3296; } 
return 
bgl_display_obj(
make_bllong(BgL_arg1562z00_1931), BgL_portz00_43);} }  else 
{ /* Ieee/output.scm 764 */
if(
BGL_UINT64P(BgL_objz00_42))
{ /* Ieee/output.scm 764 */
bgl_display_string(BGl_string3038z00zz__r4_output_6_10_3z00, BgL_portz00_43); 
{ /* Ieee/output.scm 764 */
uint64_t BgL_vz00_1933;
{ /* Ieee/output.scm 764 */
uint64_t BgL_arg1566z00_1936;
{ /* Ieee/output.scm 764 */
uint64_t BgL_res2386z00_3300;
BgL_res2386z00_3300 = 
(uint64_t)(((long)10)); 
BgL_arg1566z00_1936 = BgL_res2386z00_3300; } 
{ /* Ieee/output.scm 764 */
uint64_t BgL_za71za7_3301;
BgL_za71za7_3301 = 
BGL_BINT64_TO_INT64(BgL_objz00_42); 
BgL_vz00_1933 = 
(BgL_za71za7_3301/BgL_arg1566z00_1936); } } 
if(
(BgL_vz00_1933>(uint64_t)(0)))
{ /* Ieee/output.scm 764 */
BGL_LONGLONG_T BgL_arg1565z00_1935;
{ /* Ieee/output.scm 764 */
BGL_LONGLONG_T BgL_res2389z00_3308;
BgL_res2389z00_3308 = 
(BGL_LONGLONG_T)(BgL_vz00_1933); 
BgL_arg1565z00_1935 = BgL_res2389z00_3308; } 
bgl_display_obj(
make_bllong(BgL_arg1565z00_1935), BgL_portz00_43); }  else 
{ /* Ieee/output.scm 764 */BFALSE; } } 
{ /* Ieee/output.scm 764 */
long BgL_arg1567z00_1937;
{ /* Ieee/output.scm 764 */
uint64_t BgL_arg1568z00_1938;
{ /* Ieee/output.scm 764 */
uint64_t BgL_arg1569z00_1939;
{ /* Ieee/output.scm 764 */
uint64_t BgL_res2390z00_3309;
BgL_res2390z00_3309 = 
(uint64_t)(((long)10)); 
BgL_arg1569z00_1939 = BgL_res2390z00_3309; } 
{ /* Ieee/output.scm 764 */
uint64_t BgL_res2391z00_3312;
{ /* Ieee/output.scm 764 */
uint64_t BgL_n1z00_3310;
BgL_n1z00_3310 = 
BGL_BINT64_TO_INT64(BgL_objz00_42); 
{ /* Ieee/output.scm 764 */
int64_t BgL_tmpz00_6452;
BgL_tmpz00_6452 = 
(int64_t)(BgL_arg1569z00_1939); 
BgL_res2391z00_3312 = 
(BgL_n1z00_3310%BgL_tmpz00_6452); } } 
BgL_arg1568z00_1938 = BgL_res2391z00_3312; } } 
{ /* Ieee/output.scm 764 */
long BgL_res2393z00_3317;
{ /* Ieee/output.scm 764 */
long BgL_arg1954z00_3314;
BgL_arg1954z00_3314 = 
(long)(BgL_arg1568z00_1938); 
{ /* Ieee/output.scm 764 */
long BgL_res2392z00_3316;
BgL_res2392z00_3316 = 
(long)(BgL_arg1954z00_3314); 
BgL_res2393z00_3317 = BgL_res2392z00_3316; } } 
BgL_arg1567z00_1937 = BgL_res2393z00_3317; } } 
return 
bgl_display_obj(
BINT(BgL_arg1567z00_1937), BgL_portz00_43);} }  else 
{ /* Ieee/output.scm 764 */
if(
CNSTP(BgL_objz00_42))
{ /* Ieee/output.scm 764 */
return 
bgl_write_cnst(BgL_objz00_42, BgL_portz00_43);}  else 
{ /* Ieee/output.scm 764 */
return 
bgl_write_unknown(BgL_objz00_42, BgL_portz00_43);} } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } 

}



/* &write-2 */
obj_t BGl_z62writezd22zb0zz__r4_output_6_10_3z00(obj_t BgL_envz00_4129, obj_t BgL_objz00_4130, obj_t BgL_portz00_4131)
{
{ /* Ieee/output.scm 763 */
return 
bgl_write_obj(BgL_objz00_4130, BgL_portz00_4131);} 

}



/* display-symbol */
BGL_EXPORTED_DEF obj_t BGl_displayzd2symbolzd2zz__r4_output_6_10_3z00(obj_t BgL_objz00_44, obj_t BgL_portz00_45)
{
{ /* Ieee/output.scm 769 */
{ /* Ieee/output.scm 770 */
obj_t BgL_arg1573z00_3319;
{ /* Ieee/output.scm 770 */
obj_t BgL_res2395z00_3321;
BgL_res2395z00_3321 = 
SYMBOL_TO_STRING(BgL_objz00_44); 
BgL_arg1573z00_3319 = BgL_res2395z00_3321; } 
return 
bgl_display_string(BgL_arg1573z00_3319, BgL_portz00_45);} } 

}



/* &display-symbol */
obj_t BGl_z62displayzd2symbolzb0zz__r4_output_6_10_3z00(obj_t BgL_envz00_4132, obj_t BgL_objz00_4133, obj_t BgL_portz00_4134)
{
{ /* Ieee/output.scm 769 */
{ /* Ieee/output.scm 770 */
obj_t BgL_auxz00_6473;obj_t BgL_auxz00_6466;
if(
OUTPUT_PORTP(BgL_portz00_4134))
{ /* Ieee/output.scm 770 */
BgL_auxz00_6473 = BgL_portz00_4134
; }  else 
{ 
obj_t BgL_auxz00_6476;
BgL_auxz00_6476 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)27315)), BGl_string3039z00zz__r4_output_6_10_3z00, BGl_string2954z00zz__r4_output_6_10_3z00, BgL_portz00_4134); 
FAILURE(BgL_auxz00_6476,BFALSE,BFALSE);} 
if(
SYMBOLP(BgL_objz00_4133))
{ /* Ieee/output.scm 770 */
BgL_auxz00_6466 = BgL_objz00_4133
; }  else 
{ 
obj_t BgL_auxz00_6469;
BgL_auxz00_6469 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)27315)), BGl_string3039z00zz__r4_output_6_10_3z00, BGl_string3040z00zz__r4_output_6_10_3z00, BgL_objz00_4133); 
FAILURE(BgL_auxz00_6469,BFALSE,BFALSE);} 
return 
BGl_displayzd2symbolzd2zz__r4_output_6_10_3z00(BgL_auxz00_6466, BgL_auxz00_6473);} } 

}



/* write-symbol */
BGL_EXPORTED_DEF obj_t BGl_writezd2symbolzd2zz__r4_output_6_10_3z00(obj_t BgL_objz00_46, obj_t BgL_portz00_47)
{
{ /* Ieee/output.scm 775 */
{ /* Ieee/output.scm 782 */
obj_t BgL_strz00_1943;
{ /* Ieee/output.scm 782 */
obj_t BgL_res2396z00_3332;
BgL_res2396z00_3332 = 
SYMBOL_TO_STRING(BgL_objz00_46); 
BgL_strz00_1943 = BgL_res2396z00_3332; } 
{ /* Ieee/output.scm 782 */
long BgL_lenz00_1944;
BgL_lenz00_1944 = 
STRING_LENGTH(BgL_strz00_1943); 
{ /* Ieee/output.scm 783 */
long BgL_lenzd21zd2_1945;
BgL_lenzd21zd2_1945 = 
(BgL_lenz00_1944-((long)1)); 
{ /* Ieee/output.scm 784 */

{ 
long BgL_iz00_1947;bool_t BgL_az00_1948;
BgL_iz00_1947 = ((long)0); 
BgL_az00_1948 = ((bool_t)0); 
BgL_zc3z04anonymousza31574ze3z87_1949:
if(
(BgL_iz00_1947==BgL_lenz00_1944))
{ /* Ieee/output.scm 787 */
if(BgL_az00_1948)
{ /* Ieee/output.scm 789 */
return 
bgl_display_string(BgL_strz00_1943, BgL_portz00_47);}  else 
{ /* Ieee/output.scm 790 */
bool_t BgL_test3592z00_6488;
if(
(BgL_objz00_46==BGl_symbol3041z00zz__r4_output_6_10_3z00))
{ /* Ieee/output.scm 790 */
BgL_test3592z00_6488 = ((bool_t)1)
; }  else 
{ /* Ieee/output.scm 790 */
BgL_test3592z00_6488 = 
(BgL_objz00_46==BGl_symbol3043z00zz__r4_output_6_10_3z00)
; } 
if(BgL_test3592z00_6488)
{ /* Ieee/output.scm 790 */
return 
bgl_display_string(BgL_strz00_1943, BgL_portz00_47);}  else 
{ /* Ieee/output.scm 790 */
bgl_display_string(BGl_string3045z00zz__r4_output_6_10_3z00, BgL_portz00_47); 
{ /* Ieee/output.scm 830 */
obj_t BgL_tmpz00_6494;
BgL_tmpz00_6494 = 
symbol_for_read(BgL_strz00_1943); 
bgl_display_string(BgL_tmpz00_6494, BgL_portz00_47); } 
return 
bgl_display_string(BGl_string3045z00zz__r4_output_6_10_3z00, BgL_portz00_47);} } }  else 
{ /* Ieee/output.scm 792 */
unsigned char BgL_cz00_1954;
{ /* Ieee/output.scm 792 */
long BgL_l2590z00_4194;
BgL_l2590z00_4194 = 
STRING_LENGTH(BgL_strz00_1943); 
if(
BOUND_CHECK(BgL_iz00_1947, BgL_l2590z00_4194))
{ /* Ieee/output.scm 792 */
BgL_cz00_1954 = 
STRING_REF(BgL_strz00_1943, BgL_iz00_1947); }  else 
{ 
obj_t BgL_auxz00_6502;
BgL_auxz00_6502 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)28027)), BGl_string2988z00zz__r4_output_6_10_3z00, BgL_strz00_1943, 
(int)(BgL_l2590z00_4194), 
(int)(BgL_iz00_1947)); 
FAILURE(BgL_auxz00_6502,BFALSE,BFALSE);} } 
{ 

switch( BgL_cz00_1954) { case ((unsigned char)10) : 
case ((unsigned char)9) : 
case ((unsigned char)13) : 
case ((unsigned char)'`') : 
case ((unsigned char)'\'') : 
case ((unsigned char)'"') : 
case ((unsigned char)'#') : 
case ((unsigned char)'\\') : 
case ((unsigned char)';') : 
case ((unsigned char)'(') : 
case ((unsigned char)')') : 
case ((unsigned char)'[') : 
case ((unsigned char)']') : 
case ((unsigned char)'{') : 
case ((unsigned char)'}') : 
case ((unsigned char)',') : 

bgl_display_string(BGl_string3045z00zz__r4_output_6_10_3z00, BgL_portz00_47); 
{ /* Ieee/output.scm 830 */
obj_t BgL_tmpz00_6509;
BgL_tmpz00_6509 = 
symbol_for_read(BgL_strz00_1943); 
bgl_display_string(BgL_tmpz00_6509, BgL_portz00_47); } 
return 
bgl_display_string(BGl_string3045z00zz__r4_output_6_10_3z00, BgL_portz00_47);break;case ((unsigned char)':') : 

if(
(BgL_iz00_1947==((long)0)))
{ /* Ieee/output.scm 800 */
bool_t BgL_test3596z00_6515;
if(
(BgL_lenzd21zd2_1945>((long)2)))
{ /* Ieee/output.scm 801 */
unsigned char BgL_tmpz00_6518;
{ /* Ieee/output.scm 801 */
long BgL_i2593z00_4197;
BgL_i2593z00_4197 = 
(BgL_iz00_1947+((long)1)); 
{ /* Ieee/output.scm 801 */
long BgL_l2594z00_4198;
BgL_l2594z00_4198 = 
STRING_LENGTH(BgL_strz00_1943); 
if(
BOUND_CHECK(BgL_i2593z00_4197, BgL_l2594z00_4198))
{ /* Ieee/output.scm 801 */
BgL_tmpz00_6518 = 
STRING_REF(BgL_strz00_1943, BgL_i2593z00_4197)
; }  else 
{ 
obj_t BgL_auxz00_6524;
BgL_auxz00_6524 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)28252)), BGl_string2988z00zz__r4_output_6_10_3z00, BgL_strz00_1943, 
(int)(BgL_l2594z00_4198), 
(int)(BgL_i2593z00_4197)); 
FAILURE(BgL_auxz00_6524,BFALSE,BFALSE);} } } 
BgL_test3596z00_6515 = 
(BgL_tmpz00_6518==((unsigned char)':')); }  else 
{ /* Ieee/output.scm 800 */
BgL_test3596z00_6515 = ((bool_t)0)
; } 
if(BgL_test3596z00_6515)
{ 
long BgL_iz00_6531;
BgL_iz00_6531 = 
(BgL_iz00_1947+((long)2)); 
BgL_iz00_1947 = BgL_iz00_6531; 
goto BgL_zc3z04anonymousza31574ze3z87_1949;}  else 
{ /* Ieee/output.scm 800 */
bgl_display_string(BGl_string3045z00zz__r4_output_6_10_3z00, BgL_portz00_47); 
{ /* Ieee/output.scm 830 */
obj_t BgL_tmpz00_6534;
BgL_tmpz00_6534 = 
symbol_for_read(BgL_strz00_1943); 
bgl_display_string(BgL_tmpz00_6534, BgL_portz00_47); } 
return 
bgl_display_string(BGl_string3045z00zz__r4_output_6_10_3z00, BgL_portz00_47);} }  else 
{ /* Ieee/output.scm 799 */
if(
(BgL_iz00_1947==BgL_lenzd21zd2_1945))
{ /* Ieee/output.scm 804 */
bgl_display_string(BGl_string3045z00zz__r4_output_6_10_3z00, BgL_portz00_47); 
{ /* Ieee/output.scm 830 */
obj_t BgL_tmpz00_6541;
BgL_tmpz00_6541 = 
symbol_for_read(BgL_strz00_1943); 
bgl_display_string(BgL_tmpz00_6541, BgL_portz00_47); } 
return 
bgl_display_string(BGl_string3045z00zz__r4_output_6_10_3z00, BgL_portz00_47);}  else 
{ 
long BgL_iz00_6545;
BgL_iz00_6545 = 
(BgL_iz00_1947+((long)1)); 
BgL_iz00_1947 = BgL_iz00_6545; 
goto BgL_zc3z04anonymousza31574ze3z87_1949;} } break;case ((unsigned char)'.') : 

if(
(BgL_lenz00_1944==((long)1)))
{ /* Ieee/output.scm 809 */
bgl_display_string(BGl_string3045z00zz__r4_output_6_10_3z00, BgL_portz00_47); 
{ /* Ieee/output.scm 830 */
obj_t BgL_tmpz00_6550;
BgL_tmpz00_6550 = 
symbol_for_read(BgL_strz00_1943); 
bgl_display_string(BgL_tmpz00_6550, BgL_portz00_47); } 
return 
bgl_display_string(BGl_string3045z00zz__r4_output_6_10_3z00, BgL_portz00_47);}  else 
{ 
long BgL_iz00_6554;
BgL_iz00_6554 = 
(BgL_iz00_1947+((long)1)); 
BgL_iz00_1947 = BgL_iz00_6554; 
goto BgL_zc3z04anonymousza31574ze3z87_1949;} break;
default: 
{ /* Ieee/output.scm 813 */
bool_t BgL_test3601z00_6556;
if(
(BgL_cz00_1954<=((unsigned char)' ')))
{ /* Ieee/output.scm 813 */
BgL_test3601z00_6556 = ((bool_t)1)
; }  else 
{ /* Ieee/output.scm 813 */
BgL_test3601z00_6556 = 
(BgL_cz00_1954>=((unsigned char)''))
; } 
if(BgL_test3601z00_6556)
{ /* Ieee/output.scm 813 */
bgl_display_string(BGl_string3045z00zz__r4_output_6_10_3z00, BgL_portz00_47); 
{ /* Ieee/output.scm 830 */
obj_t BgL_tmpz00_6561;
BgL_tmpz00_6561 = 
symbol_for_read(BgL_strz00_1943); 
bgl_display_string(BgL_tmpz00_6561, BgL_portz00_47); } 
return 
bgl_display_string(BGl_string3045z00zz__r4_output_6_10_3z00, BgL_portz00_47);}  else 
{ /* Ieee/output.scm 815 */
long BgL_arg1599z00_1973;bool_t BgL_arg1602z00_1974;
BgL_arg1599z00_1973 = 
(BgL_iz00_1947+((long)1)); 
if(BgL_az00_1948)
{ /* Ieee/output.scm 816 */
BgL_arg1602z00_1974 = BgL_az00_1948; }  else 
{ /* Ieee/output.scm 817 */
bool_t BgL__ortest_1053z00_1976;
{ /* Ieee/output.scm 817 */
bool_t BgL_test3604z00_6567;
{ /* Ieee/output.scm 817 */
bool_t BgL_res2404z00_3370;
BgL_res2404z00_3370 = 
isdigit(BgL_cz00_1954); 
BgL_test3604z00_6567 = BgL_res2404z00_3370; } 
if(BgL_test3604z00_6567)
{ /* Ieee/output.scm 817 */
BgL__ortest_1053z00_1976 = ((bool_t)0); }  else 
{ /* Ieee/output.scm 817 */
if(
(BgL_cz00_1954==((unsigned char)'e')))
{ /* Ieee/output.scm 818 */
BgL__ortest_1053z00_1976 = ((bool_t)0); }  else 
{ /* Ieee/output.scm 818 */
if(
(BgL_cz00_1954==((unsigned char)'E')))
{ /* Ieee/output.scm 819 */
BgL__ortest_1053z00_1976 = ((bool_t)0); }  else 
{ /* Ieee/output.scm 819 */
if(
(BgL_cz00_1954==((unsigned char)'-')))
{ /* Ieee/output.scm 820 */
BgL__ortest_1053z00_1976 = ((bool_t)0); }  else 
{ /* Ieee/output.scm 820 */
if(
(BgL_cz00_1954==((unsigned char)'+')))
{ /* Ieee/output.scm 821 */
BgL__ortest_1053z00_1976 = ((bool_t)0); }  else 
{ /* Ieee/output.scm 821 */
BgL__ortest_1053z00_1976 = ((bool_t)1); } } } } } } 
if(BgL__ortest_1053z00_1976)
{ /* Ieee/output.scm 817 */
BgL_arg1602z00_1974 = BgL__ortest_1053z00_1976; }  else 
{ /* Ieee/output.scm 817 */
if(
(BgL_iz00_1947==((long)0)))
{ /* Ieee/output.scm 823 */
bool_t BgL__ortest_1059z00_1978;
BgL__ortest_1059z00_1978 = 
(BgL_cz00_1954==((unsigned char)'e')); 
if(BgL__ortest_1059z00_1978)
{ /* Ieee/output.scm 823 */
BgL_arg1602z00_1974 = BgL__ortest_1059z00_1978; }  else 
{ /* Ieee/output.scm 823 */
BgL_arg1602z00_1974 = 
(BgL_cz00_1954==((unsigned char)'E')); } }  else 
{ /* Ieee/output.scm 822 */
BgL_arg1602z00_1974 = ((bool_t)0); } } } 
{ 
bool_t BgL_az00_6584;long BgL_iz00_6583;
BgL_iz00_6583 = BgL_arg1599z00_1973; 
BgL_az00_6584 = BgL_arg1602z00_1974; 
BgL_az00_1948 = BgL_az00_6584; 
BgL_iz00_1947 = BgL_iz00_6583; 
goto BgL_zc3z04anonymousza31574ze3z87_1949;} } } } } } } } } } } } 

}



/* &write-symbol */
obj_t BGl_z62writezd2symbolzb0zz__r4_output_6_10_3z00(obj_t BgL_envz00_4135, obj_t BgL_objz00_4136, obj_t BgL_portz00_4137)
{
{ /* Ieee/output.scm 775 */
{ /* Ieee/output.scm 782 */
obj_t BgL_auxz00_6593;obj_t BgL_auxz00_6586;
if(
OUTPUT_PORTP(BgL_portz00_4137))
{ /* Ieee/output.scm 782 */
BgL_auxz00_6593 = BgL_portz00_4137
; }  else 
{ 
obj_t BgL_auxz00_6596;
BgL_auxz00_6596 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)27747)), BGl_string3046z00zz__r4_output_6_10_3z00, BGl_string2954z00zz__r4_output_6_10_3z00, BgL_portz00_4137); 
FAILURE(BgL_auxz00_6596,BFALSE,BFALSE);} 
if(
SYMBOLP(BgL_objz00_4136))
{ /* Ieee/output.scm 782 */
BgL_auxz00_6586 = BgL_objz00_4136
; }  else 
{ 
obj_t BgL_auxz00_6589;
BgL_auxz00_6589 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)27747)), BGl_string3046z00zz__r4_output_6_10_3z00, BGl_string3040z00zz__r4_output_6_10_3z00, BgL_objz00_4136); 
FAILURE(BgL_auxz00_6589,BFALSE,BFALSE);} 
return 
BGl_writezd2symbolzd2zz__r4_output_6_10_3z00(BgL_auxz00_6586, BgL_auxz00_6593);} } 

}



/* display-string */
BGL_EXPORTED_DEF obj_t BGl_displayzd2stringzd2zz__r4_output_6_10_3z00(obj_t BgL_objz00_48, obj_t BgL_portz00_49)
{
{ /* Ieee/output.scm 829 */
return 
bgl_display_string(BgL_objz00_48, BgL_portz00_49);} 

}



/* &display-string */
obj_t BGl_z62displayzd2stringzb0zz__r4_output_6_10_3z00(obj_t BgL_envz00_4138, obj_t BgL_objz00_4139, obj_t BgL_portz00_4140)
{
{ /* Ieee/output.scm 829 */
{ /* Ieee/output.scm 830 */
obj_t BgL_auxz00_6609;obj_t BgL_auxz00_6602;
if(
OUTPUT_PORTP(BgL_portz00_4140))
{ /* Ieee/output.scm 830 */
BgL_auxz00_6609 = BgL_portz00_4140
; }  else 
{ 
obj_t BgL_auxz00_6612;
BgL_auxz00_6612 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)29085)), BGl_string3047z00zz__r4_output_6_10_3z00, BGl_string2954z00zz__r4_output_6_10_3z00, BgL_portz00_4140); 
FAILURE(BgL_auxz00_6612,BFALSE,BFALSE);} 
if(
STRINGP(BgL_objz00_4139))
{ /* Ieee/output.scm 830 */
BgL_auxz00_6602 = BgL_objz00_4139
; }  else 
{ 
obj_t BgL_auxz00_6605;
BgL_auxz00_6605 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)29085)), BGl_string3047z00zz__r4_output_6_10_3z00, BGl_string2991z00zz__r4_output_6_10_3z00, BgL_objz00_4139); 
FAILURE(BgL_auxz00_6605,BFALSE,BFALSE);} 
return 
BGl_displayzd2stringzd2zz__r4_output_6_10_3z00(BgL_auxz00_6602, BgL_auxz00_6609);} } 

}



/* display-substring */
BGL_EXPORTED_DEF obj_t BGl_displayzd2substringzd2zz__r4_output_6_10_3z00(obj_t BgL_objz00_50, long BgL_startz00_51, long BgL_endz00_52, obj_t BgL_portz00_53)
{
{ /* Ieee/output.scm 835 */
{ /* Ieee/output.scm 836 */
bool_t BgL_test3616z00_6617;
if(
(BgL_endz00_52>=BgL_startz00_51))
{ /* Ieee/output.scm 837 */
bool_t BgL_test3618z00_6620;
{ /* Ieee/output.scm 837 */
long BgL_tmpz00_6621;
BgL_tmpz00_6621 = 
(
STRING_LENGTH(BgL_objz00_50)+((long)1)); 
BgL_test3618z00_6620 = 
BOUND_CHECK(BgL_endz00_52, BgL_tmpz00_6621); } 
if(BgL_test3618z00_6620)
{ /* Ieee/output.scm 837 */
BgL_test3616z00_6617 = 
(BgL_startz00_51>=((long)0))
; }  else 
{ /* Ieee/output.scm 837 */
BgL_test3616z00_6617 = ((bool_t)0)
; } }  else 
{ /* Ieee/output.scm 836 */
BgL_test3616z00_6617 = ((bool_t)0)
; } 
if(BgL_test3616z00_6617)
{ /* Ieee/output.scm 836 */
return 
bgl_display_substring(BgL_objz00_50, BgL_startz00_51, BgL_endz00_52, BgL_portz00_53);}  else 
{ /* Ieee/output.scm 841 */
obj_t BgL_arg1614z00_4585;
{ /* Ieee/output.scm 841 */
obj_t BgL_list1615z00_4586;
{ /* Ieee/output.scm 841 */
obj_t BgL_arg1616z00_4587;
BgL_arg1616z00_4587 = 
MAKE_YOUNG_PAIR(
BINT(BgL_endz00_52), BNIL); 
BgL_list1615z00_4586 = 
MAKE_YOUNG_PAIR(
BINT(BgL_startz00_51), BgL_arg1616z00_4587); } 
BgL_arg1614z00_4585 = 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string3048z00zz__r4_output_6_10_3z00, BgL_list1615z00_4586); } 
return 
BGl_errorz00zz__errorz00(BGl_symbol3049z00zz__r4_output_6_10_3z00, BgL_arg1614z00_4585, BgL_objz00_50);} } } 

}



/* &display-substring */
obj_t BGl_z62displayzd2substringzb0zz__r4_output_6_10_3z00(obj_t BgL_envz00_4141, obj_t BgL_objz00_4142, obj_t BgL_startz00_4143, obj_t BgL_endz00_4144, obj_t BgL_portz00_4145)
{
{ /* Ieee/output.scm 835 */
{ /* Ieee/output.scm 836 */
obj_t BgL_auxz00_6658;long BgL_auxz00_6649;long BgL_auxz00_6640;obj_t BgL_auxz00_6633;
if(
OUTPUT_PORTP(BgL_portz00_4145))
{ /* Ieee/output.scm 836 */
BgL_auxz00_6658 = BgL_portz00_4145
; }  else 
{ 
obj_t BgL_auxz00_6661;
BgL_auxz00_6661 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)29393)), BGl_string3051z00zz__r4_output_6_10_3z00, BGl_string2954z00zz__r4_output_6_10_3z00, BgL_portz00_4145); 
FAILURE(BgL_auxz00_6661,BFALSE,BFALSE);} 
{ /* Ieee/output.scm 836 */
obj_t BgL_tmpz00_6650;
if(
INTEGERP(BgL_endz00_4144))
{ /* Ieee/output.scm 836 */
BgL_tmpz00_6650 = BgL_endz00_4144
; }  else 
{ 
obj_t BgL_auxz00_6653;
BgL_auxz00_6653 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)29393)), BGl_string3051z00zz__r4_output_6_10_3z00, BGl_string2967z00zz__r4_output_6_10_3z00, BgL_endz00_4144); 
FAILURE(BgL_auxz00_6653,BFALSE,BFALSE);} 
BgL_auxz00_6649 = 
(long)CINT(BgL_tmpz00_6650); } 
{ /* Ieee/output.scm 836 */
obj_t BgL_tmpz00_6641;
if(
INTEGERP(BgL_startz00_4143))
{ /* Ieee/output.scm 836 */
BgL_tmpz00_6641 = BgL_startz00_4143
; }  else 
{ 
obj_t BgL_auxz00_6644;
BgL_auxz00_6644 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)29393)), BGl_string3051z00zz__r4_output_6_10_3z00, BGl_string2967z00zz__r4_output_6_10_3z00, BgL_startz00_4143); 
FAILURE(BgL_auxz00_6644,BFALSE,BFALSE);} 
BgL_auxz00_6640 = 
(long)CINT(BgL_tmpz00_6641); } 
if(
STRINGP(BgL_objz00_4142))
{ /* Ieee/output.scm 836 */
BgL_auxz00_6633 = BgL_objz00_4142
; }  else 
{ 
obj_t BgL_auxz00_6636;
BgL_auxz00_6636 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)29393)), BGl_string3051z00zz__r4_output_6_10_3z00, BGl_string2991z00zz__r4_output_6_10_3z00, BgL_objz00_4142); 
FAILURE(BgL_auxz00_6636,BFALSE,BFALSE);} 
return 
BGl_displayzd2substringzd2zz__r4_output_6_10_3z00(BgL_auxz00_6633, BgL_auxz00_6640, BgL_auxz00_6649, BgL_auxz00_6658);} } 

}



/* write-string */
BGL_EXPORTED_DEF obj_t BGl_writezd2stringzd2zz__r4_output_6_10_3z00(obj_t BgL_objz00_54, obj_t BgL_portz00_55)
{
{ /* Ieee/output.scm 847 */
if(
BGl_bigloozd2strictzd2r5rszd2stringszd2zz__paramz00())
{ /* Ieee/output.scm 851 */
obj_t BgL_strz00_3460;
BgL_strz00_3460 = 
string_for_read(BgL_objz00_54); 
{ /* Ieee/output.scm 852 */
obj_t BgL_escz00_3461;
{ /* Ieee/output.scm 853 */
int BgL_tmpz00_6669;
BgL_tmpz00_6669 = 
(int)(((long)1)); 
BgL_escz00_3461 = 
BGL_MVALUES_VAL(BgL_tmpz00_6669); } 
return 
bgl_write_string(BgL_strz00_3460, 
CBOOL(BgL_escz00_3461), BgL_portz00_55);} }  else 
{ /* Ieee/output.scm 848 */
return 
bgl_write_string(
string_for_read(BgL_objz00_54), ((bool_t)0), BgL_portz00_55);} } 

}



/* &write-string */
obj_t BGl_z62writezd2stringzb0zz__r4_output_6_10_3z00(obj_t BgL_envz00_4146, obj_t BgL_objz00_4147, obj_t BgL_portz00_4148)
{
{ /* Ieee/output.scm 847 */
{ /* Ieee/output.scm 848 */
obj_t BgL_auxz00_6683;obj_t BgL_auxz00_6676;
if(
OUTPUT_PORTP(BgL_portz00_4148))
{ /* Ieee/output.scm 848 */
BgL_auxz00_6683 = BgL_portz00_4148
; }  else 
{ 
obj_t BgL_auxz00_6686;
BgL_auxz00_6686 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)29911)), BGl_string3052z00zz__r4_output_6_10_3z00, BGl_string2954z00zz__r4_output_6_10_3z00, BgL_portz00_4148); 
FAILURE(BgL_auxz00_6686,BFALSE,BFALSE);} 
if(
STRINGP(BgL_objz00_4147))
{ /* Ieee/output.scm 848 */
BgL_auxz00_6676 = BgL_objz00_4147
; }  else 
{ 
obj_t BgL_auxz00_6679;
BgL_auxz00_6679 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)29911)), BGl_string3052z00zz__r4_output_6_10_3z00, BGl_string2991z00zz__r4_output_6_10_3z00, BgL_objz00_4147); 
FAILURE(BgL_auxz00_6679,BFALSE,BFALSE);} 
return 
BGl_writezd2stringzd2zz__r4_output_6_10_3z00(BgL_auxz00_6676, BgL_auxz00_6683);} } 

}



/* display-fixnum */
BGL_EXPORTED_DEF obj_t BGl_displayzd2fixnumzd2zz__r4_output_6_10_3z00(obj_t BgL_objz00_58, obj_t BgL_portz00_59)
{
{ /* Ieee/output.scm 868 */
return 
bgl_display_fixnum(BgL_objz00_58, BgL_portz00_59);} 

}



/* &display-fixnum */
obj_t BGl_z62displayzd2fixnumzb0zz__r4_output_6_10_3z00(obj_t BgL_envz00_4149, obj_t BgL_objz00_4150, obj_t BgL_portz00_4151)
{
{ /* Ieee/output.scm 868 */
{ /* Ieee/output.scm 869 */
obj_t BgL_auxz00_6699;obj_t BgL_auxz00_6692;
if(
OUTPUT_PORTP(BgL_portz00_4151))
{ /* Ieee/output.scm 869 */
BgL_auxz00_6699 = BgL_portz00_4151
; }  else 
{ 
obj_t BgL_auxz00_6702;
BgL_auxz00_6702 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)30797)), BGl_string3053z00zz__r4_output_6_10_3z00, BGl_string2954z00zz__r4_output_6_10_3z00, BgL_portz00_4151); 
FAILURE(BgL_auxz00_6702,BFALSE,BFALSE);} 
if(
INTEGERP(BgL_objz00_4150))
{ /* Ieee/output.scm 869 */
BgL_auxz00_6692 = BgL_objz00_4150
; }  else 
{ 
obj_t BgL_auxz00_6695;
BgL_auxz00_6695 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)30797)), BGl_string3053z00zz__r4_output_6_10_3z00, BGl_string2967z00zz__r4_output_6_10_3z00, BgL_objz00_4150); 
FAILURE(BgL_auxz00_6695,BFALSE,BFALSE);} 
return 
BGl_displayzd2fixnumzd2zz__r4_output_6_10_3z00(BgL_auxz00_6692, BgL_auxz00_6699);} } 

}



/* display-elong */
BGL_EXPORTED_DEF obj_t BGl_displayzd2elongzd2zz__r4_output_6_10_3z00(long BgL_objz00_60, obj_t BgL_portz00_61)
{
{ /* Ieee/output.scm 874 */
return 
bgl_display_elong(BgL_objz00_60, BgL_portz00_61);} 

}



/* &display-elong */
obj_t BGl_z62displayzd2elongzb0zz__r4_output_6_10_3z00(obj_t BgL_envz00_4152, obj_t BgL_objz00_4153, obj_t BgL_portz00_4154)
{
{ /* Ieee/output.scm 874 */
{ /* Ieee/output.scm 875 */
obj_t BgL_auxz00_6717;long BgL_auxz00_6708;
if(
OUTPUT_PORTP(BgL_portz00_4154))
{ /* Ieee/output.scm 875 */
BgL_auxz00_6717 = BgL_portz00_4154
; }  else 
{ 
obj_t BgL_auxz00_6720;
BgL_auxz00_6720 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)31091)), BGl_string3054z00zz__r4_output_6_10_3z00, BGl_string2954z00zz__r4_output_6_10_3z00, BgL_portz00_4154); 
FAILURE(BgL_auxz00_6720,BFALSE,BFALSE);} 
{ /* Ieee/output.scm 875 */
obj_t BgL_tmpz00_6709;
if(
ELONGP(BgL_objz00_4153))
{ /* Ieee/output.scm 875 */
BgL_tmpz00_6709 = BgL_objz00_4153
; }  else 
{ 
obj_t BgL_auxz00_6712;
BgL_auxz00_6712 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)31091)), BGl_string3054z00zz__r4_output_6_10_3z00, BGl_string3055z00zz__r4_output_6_10_3z00, BgL_objz00_4153); 
FAILURE(BgL_auxz00_6712,BFALSE,BFALSE);} 
BgL_auxz00_6708 = 
BELONG_TO_LONG(BgL_tmpz00_6709); } 
return 
BGl_displayzd2elongzd2zz__r4_output_6_10_3z00(BgL_auxz00_6708, BgL_auxz00_6717);} } 

}



/* display-flonum */
BGL_EXPORTED_DEF obj_t BGl_displayzd2flonumzd2zz__r4_output_6_10_3z00(obj_t BgL_objz00_62, obj_t BgL_portz00_63)
{
{ /* Ieee/output.scm 880 */
{ /* Ieee/output.scm 881 */
obj_t BgL_arg1623z00_3472;
BgL_arg1623z00_3472 = 
bgl_real_to_string(
REAL_TO_DOUBLE(BgL_objz00_62)); 
return 
bgl_display_string(BgL_arg1623z00_3472, BgL_portz00_63);} } 

}



/* &display-flonum */
obj_t BGl_z62displayzd2flonumzb0zz__r4_output_6_10_3z00(obj_t BgL_envz00_4155, obj_t BgL_objz00_4156, obj_t BgL_portz00_4157)
{
{ /* Ieee/output.scm 880 */
{ /* Ieee/output.scm 881 */
obj_t BgL_auxz00_6735;obj_t BgL_auxz00_6728;
if(
OUTPUT_PORTP(BgL_portz00_4157))
{ /* Ieee/output.scm 881 */
BgL_auxz00_6735 = BgL_portz00_4157
; }  else 
{ 
obj_t BgL_auxz00_6738;
BgL_auxz00_6738 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)31394)), BGl_string3056z00zz__r4_output_6_10_3z00, BGl_string2954z00zz__r4_output_6_10_3z00, BgL_portz00_4157); 
FAILURE(BgL_auxz00_6738,BFALSE,BFALSE);} 
if(
REALP(BgL_objz00_4156))
{ /* Ieee/output.scm 881 */
BgL_auxz00_6728 = BgL_objz00_4156
; }  else 
{ 
obj_t BgL_auxz00_6731;
BgL_auxz00_6731 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)31394)), BGl_string3056z00zz__r4_output_6_10_3z00, BGl_string3057z00zz__r4_output_6_10_3z00, BgL_objz00_4156); 
FAILURE(BgL_auxz00_6731,BFALSE,BFALSE);} 
return 
BGl_displayzd2flonumzd2zz__r4_output_6_10_3z00(BgL_auxz00_6728, BgL_auxz00_6735);} } 

}



/* display-ucs2string */
BGL_EXPORTED_DEF obj_t BGl_displayzd2ucs2stringzd2zz__r4_output_6_10_3z00(obj_t BgL_objz00_64, obj_t BgL_portz00_65)
{
{ /* Ieee/output.scm 886 */
return 
bgl_display_ucs2string(BgL_objz00_64, BgL_portz00_65);} 

}



/* &display-ucs2string */
obj_t BGl_z62displayzd2ucs2stringzb0zz__r4_output_6_10_3z00(obj_t BgL_envz00_4158, obj_t BgL_objz00_4159, obj_t BgL_portz00_4160)
{
{ /* Ieee/output.scm 886 */
{ /* Ieee/output.scm 887 */
obj_t BgL_auxz00_6751;obj_t BgL_auxz00_6744;
if(
OUTPUT_PORTP(BgL_portz00_4160))
{ /* Ieee/output.scm 887 */
BgL_auxz00_6751 = BgL_portz00_4160
; }  else 
{ 
obj_t BgL_auxz00_6754;
BgL_auxz00_6754 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)31684)), BGl_string3058z00zz__r4_output_6_10_3z00, BGl_string2954z00zz__r4_output_6_10_3z00, BgL_portz00_4160); 
FAILURE(BgL_auxz00_6754,BFALSE,BFALSE);} 
if(
UCS2_STRINGP(BgL_objz00_4159))
{ /* Ieee/output.scm 887 */
BgL_auxz00_6744 = BgL_objz00_4159
; }  else 
{ 
obj_t BgL_auxz00_6747;
BgL_auxz00_6747 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)31684)), BGl_string3058z00zz__r4_output_6_10_3z00, BGl_string3059z00zz__r4_output_6_10_3z00, BgL_objz00_4159); 
FAILURE(BgL_auxz00_6747,BFALSE,BFALSE);} 
return 
BGl_displayzd2ucs2stringzd2zz__r4_output_6_10_3z00(BgL_auxz00_6744, BgL_auxz00_6751);} } 

}



/* write-ucs2string */
BGL_EXPORTED_DEF obj_t BGl_writezd2ucs2stringzd2zz__r4_output_6_10_3z00(obj_t BgL_objz00_66, obj_t BgL_portz00_67)
{
{ /* Ieee/output.scm 892 */
return 
bgl_write_utf8string(
string_for_read(
ucs2_string_to_utf8_string(BgL_objz00_66)), BgL_portz00_67);} 

}



/* &write-ucs2string */
obj_t BGl_z62writezd2ucs2stringzb0zz__r4_output_6_10_3z00(obj_t BgL_envz00_4161, obj_t BgL_objz00_4162, obj_t BgL_portz00_4163)
{
{ /* Ieee/output.scm 892 */
{ /* Ieee/output.scm 893 */
obj_t BgL_auxz00_6769;obj_t BgL_auxz00_6762;
if(
OUTPUT_PORTP(BgL_portz00_4163))
{ /* Ieee/output.scm 893 */
BgL_auxz00_6769 = BgL_portz00_4163
; }  else 
{ 
obj_t BgL_auxz00_6772;
BgL_auxz00_6772 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)32014)), BGl_string3060z00zz__r4_output_6_10_3z00, BGl_string2954z00zz__r4_output_6_10_3z00, BgL_portz00_4163); 
FAILURE(BgL_auxz00_6772,BFALSE,BFALSE);} 
if(
UCS2_STRINGP(BgL_objz00_4162))
{ /* Ieee/output.scm 893 */
BgL_auxz00_6762 = BgL_objz00_4162
; }  else 
{ 
obj_t BgL_auxz00_6765;
BgL_auxz00_6765 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)32014)), BGl_string3060z00zz__r4_output_6_10_3z00, BGl_string3059z00zz__r4_output_6_10_3z00, BgL_objz00_4162); 
FAILURE(BgL_auxz00_6765,BFALSE,BFALSE);} 
return 
BGl_writezd2ucs2stringzd2zz__r4_output_6_10_3z00(BgL_auxz00_6762, BgL_auxz00_6769);} } 

}



/* write-mutex */
obj_t BGl_writezd2mutexzd2zz__r4_output_6_10_3z00(obj_t BgL_objz00_72, obj_t BgL_portz00_73)
{
{ /* Ieee/output.scm 913 */
bgl_display_string(BGl_string3061z00zz__r4_output_6_10_3z00, BgL_portz00_73); 
{ /* Ieee/output.scm 915 */
obj_t BgL_arg1629z00_2014;
{ /* Ieee/output.scm 915 */
obj_t BgL_objz00_3493;
if(
BGL_MUTEXP(BgL_objz00_72))
{ /* Ieee/output.scm 915 */
BgL_objz00_3493 = BgL_objz00_72; }  else 
{ 
obj_t BgL_auxz00_6780;
BgL_auxz00_6780 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)33040)), BGl_string3062z00zz__r4_output_6_10_3z00, BGl_string3063z00zz__r4_output_6_10_3z00, BgL_objz00_72); 
FAILURE(BgL_auxz00_6780,BFALSE,BFALSE);} 
BgL_arg1629z00_2014 = 
BGL_MUTEX_NAME(BgL_objz00_3493); } 
bgl_display_obj(BgL_arg1629z00_2014, BgL_portz00_73); } 
bgl_display_string(BGl_string3064z00zz__r4_output_6_10_3z00, BgL_portz00_73); 
{ /* Ieee/output.scm 917 */
obj_t BgL_arg1630z00_2015;
{ /* Ieee/output.scm 917 */
obj_t BgL_tmpz00_6787;
if(
BGL_MUTEXP(BgL_objz00_72))
{ /* Ieee/output.scm 917 */
BgL_tmpz00_6787 = BgL_objz00_72
; }  else 
{ 
obj_t BgL_auxz00_6790;
BgL_auxz00_6790 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)33101)), BGl_string3062z00zz__r4_output_6_10_3z00, BGl_string3063z00zz__r4_output_6_10_3z00, BgL_objz00_72); 
FAILURE(BgL_auxz00_6790,BFALSE,BFALSE);} 
BgL_arg1630z00_2015 = 
BGL_MUTEX_BACKEND(BgL_tmpz00_6787); } 
bgl_display_obj(BgL_arg1630z00_2015, BgL_portz00_73); } 
return 
bgl_display_string(BGl_string3012z00zz__r4_output_6_10_3z00, BgL_portz00_73);} 

}



/* write/display-structure */
obj_t BGl_writezf2displayzd2structurez20zz__r4_output_6_10_3z00(obj_t BgL_objz00_81, obj_t BgL_portz00_82, obj_t BgL_dispz00_83)
{
{ /* Ieee/output.scm 947 */
bgl_display_char(((unsigned char)'#'), BgL_portz00_82); 
bgl_display_char(((unsigned char)'{'), BgL_portz00_82); 
{ /* Ieee/output.scm 950 */
obj_t BgL_arg1634z00_2019;
{ /* Ieee/output.scm 950 */
obj_t BgL_res2432z00_3523;
{ /* Ieee/output.scm 950 */
obj_t BgL_aux2876z00_4480;
BgL_aux2876z00_4480 = 
STRUCT_KEY(BgL_objz00_81); 
if(
SYMBOLP(BgL_aux2876z00_4480))
{ /* Ieee/output.scm 950 */
BgL_res2432z00_3523 = BgL_aux2876z00_4480; }  else 
{ 
obj_t BgL_auxz00_6802;
BgL_auxz00_6802 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)34599)), BGl_string3065z00zz__r4_output_6_10_3z00, BGl_string3040z00zz__r4_output_6_10_3z00, BgL_aux2876z00_4480); 
FAILURE(BgL_auxz00_6802,BFALSE,BFALSE);} } 
BgL_arg1634z00_2019 = BgL_res2432z00_3523; } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_dispz00_83, ((long)2)))
{ /* Ieee/output.scm 950 */
PROCEDURE_ENTRY(BgL_dispz00_83)(BgL_dispz00_83, BgL_arg1634z00_2019, BgL_portz00_82, BEOA); }  else 
{ /* Ieee/output.scm 950 */
FAILURE(BGl_string3066z00zz__r4_output_6_10_3z00,BGl_list3067z00zz__r4_output_6_10_3z00,BgL_dispz00_83);} } 
if(
(((long)0)==
(long)(
STRUCT_LENGTH(BgL_objz00_81))))
{ /* Ieee/output.scm 951 */
return 
bgl_display_char(((unsigned char)'}'), BgL_portz00_82);}  else 
{ /* Ieee/output.scm 953 */
long BgL_lenz00_2022;
BgL_lenz00_2022 = 
(
(long)(
STRUCT_LENGTH(BgL_objz00_81))-((long)1)); 
bgl_display_char(((unsigned char)' '), BgL_portz00_82); 
{ 
long BgL_iz00_2024;
BgL_iz00_2024 = ((long)0); 
BgL_zc3z04anonymousza31637ze3z87_2025:
if(
(BgL_iz00_2024==BgL_lenz00_2022))
{ /* Ieee/output.scm 957 */
{ /* Ieee/output.scm 958 */
obj_t BgL_arg1639z00_2027;
BgL_arg1639z00_2027 = 
STRUCT_REF(BgL_objz00_81, 
(int)(BgL_iz00_2024)); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_dispz00_83, ((long)2)))
{ /* Ieee/output.scm 958 */
PROCEDURE_ENTRY(BgL_dispz00_83)(BgL_dispz00_83, BgL_arg1639z00_2027, BgL_portz00_82, BEOA); }  else 
{ /* Ieee/output.scm 958 */
FAILURE(BGl_string3076z00zz__r4_output_6_10_3z00,BGl_list3077z00zz__r4_output_6_10_3z00,BgL_dispz00_83);} } 
return 
bgl_display_char(((unsigned char)'}'), BgL_portz00_82);}  else 
{ /* Ieee/output.scm 957 */
{ /* Ieee/output.scm 961 */
obj_t BgL_arg1640z00_2028;
BgL_arg1640z00_2028 = 
STRUCT_REF(BgL_objz00_81, 
(int)(BgL_iz00_2024)); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_dispz00_83, ((long)2)))
{ /* Ieee/output.scm 961 */
PROCEDURE_ENTRY(BgL_dispz00_83)(BgL_dispz00_83, BgL_arg1640z00_2028, BgL_portz00_82, BEOA); }  else 
{ /* Ieee/output.scm 961 */
FAILURE(BGl_string3076z00zz__r4_output_6_10_3z00,BGl_list3080z00zz__r4_output_6_10_3z00,BgL_dispz00_83);} } 
bgl_display_char(((unsigned char)' '), BgL_portz00_82); 
{ 
long BgL_iz00_6847;
BgL_iz00_6847 = 
(((long)1)+BgL_iz00_2024); 
BgL_iz00_2024 = BgL_iz00_6847; 
goto BgL_zc3z04anonymousza31637ze3z87_2025;} } } } } 

}



/* write/display-vector */
obj_t BGl_writezf2displayzd2vectorz20zz__r4_output_6_10_3z00(obj_t BgL_objz00_84, obj_t BgL_portz00_85, obj_t BgL_dispz00_86)
{
{ /* Ieee/output.scm 968 */
bgl_display_char(((unsigned char)'#'), BgL_portz00_85); 
{ /* Ieee/output.scm 970 */
int BgL_tagz00_2033;
{ /* Ieee/output.scm 970 */
int BgL_res2439z00_3542;
BgL_res2439z00_3542 = 
VECTOR_TAG(BgL_objz00_84); 
BgL_tagz00_2033 = BgL_res2439z00_3542; } 
if(
(
(long)(BgL_tagz00_2033)>((long)0)))
{ /* Ieee/output.scm 971 */
if(
(
(long)(BgL_tagz00_2033)>=((long)100)))
{ /* Ieee/output.scm 973 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_dispz00_86, ((long)2)))
{ /* Ieee/output.scm 974 */
PROCEDURE_ENTRY(BgL_dispz00_86)(BgL_dispz00_86, 
BINT(BgL_tagz00_2033), BgL_portz00_85, BEOA); }  else 
{ /* Ieee/output.scm 974 */
FAILURE(BGl_string3083z00zz__r4_output_6_10_3z00,BGl_list3084z00zz__r4_output_6_10_3z00,BgL_dispz00_86);} }  else 
{ /* Ieee/output.scm 973 */
bgl_display_char(((unsigned char)'0'), BgL_portz00_85); 
if(
(
(long)(BgL_tagz00_2033)>=((long)10)))
{ /* Ieee/output.scm 977 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_dispz00_86, ((long)2)))
{ /* Ieee/output.scm 978 */
PROCEDURE_ENTRY(BgL_dispz00_86)(BgL_dispz00_86, 
BINT(BgL_tagz00_2033), BgL_portz00_85, BEOA); }  else 
{ /* Ieee/output.scm 978 */
FAILURE(BGl_string3083z00zz__r4_output_6_10_3z00,BGl_list3084z00zz__r4_output_6_10_3z00,BgL_dispz00_86);} }  else 
{ /* Ieee/output.scm 977 */
bgl_display_char(((unsigned char)'0'), BgL_portz00_85); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_dispz00_86, ((long)2)))
{ /* Ieee/output.scm 981 */
PROCEDURE_ENTRY(BgL_dispz00_86)(BgL_dispz00_86, 
BINT(BgL_tagz00_2033), BgL_portz00_85, BEOA); }  else 
{ /* Ieee/output.scm 981 */
FAILURE(BGl_string3083z00zz__r4_output_6_10_3z00,BGl_list3084z00zz__r4_output_6_10_3z00,BgL_dispz00_86);} } } }  else 
{ /* Ieee/output.scm 971 */BFALSE; } } 
bgl_display_char(((unsigned char)'('), BgL_portz00_85); 
if(
(((long)0)==
VECTOR_LENGTH(BgL_objz00_84)))
{ /* Ieee/output.scm 983 */
return 
bgl_display_char(((unsigned char)')'), BgL_portz00_85);}  else 
{ /* Ieee/output.scm 985 */
long BgL_lenz00_2039;
BgL_lenz00_2039 = 
(
VECTOR_LENGTH(BgL_objz00_84)-((long)1)); 
{ 
long BgL_iz00_2041;
BgL_iz00_2041 = ((long)0); 
BgL_zc3z04anonymousza31650ze3z87_2042:
if(
(BgL_iz00_2041==BgL_lenz00_2039))
{ /* Ieee/output.scm 988 */
{ /* Ieee/output.scm 989 */
obj_t BgL_arg1652z00_2044;
{ /* Ieee/output.scm 989 */
bool_t BgL_test3652z00_6898;
{ /* Ieee/output.scm 989 */
long BgL_tmpz00_6899;
BgL_tmpz00_6899 = 
VECTOR_LENGTH(BgL_objz00_84); 
BgL_test3652z00_6898 = 
BOUND_CHECK(BgL_iz00_2041, BgL_tmpz00_6899); } 
if(BgL_test3652z00_6898)
{ /* Ieee/output.scm 989 */
BgL_arg1652z00_2044 = 
VECTOR_REF(BgL_objz00_84,BgL_iz00_2041); }  else 
{ 
obj_t BgL_auxz00_6903;
BgL_auxz00_6903 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)35739)), BGl_string3087z00zz__r4_output_6_10_3z00, BgL_objz00_84, 
(int)(
VECTOR_LENGTH(BgL_objz00_84)), 
(int)(BgL_iz00_2041)); 
FAILURE(BgL_auxz00_6903,BFALSE,BFALSE);} } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_dispz00_86, ((long)2)))
{ /* Ieee/output.scm 989 */
PROCEDURE_ENTRY(BgL_dispz00_86)(BgL_dispz00_86, BgL_arg1652z00_2044, BgL_portz00_85, BEOA); }  else 
{ /* Ieee/output.scm 989 */
FAILURE(BGl_string3076z00zz__r4_output_6_10_3z00,BGl_list3088z00zz__r4_output_6_10_3z00,BgL_dispz00_86);} } 
return 
bgl_display_char(((unsigned char)')'), BgL_portz00_85);}  else 
{ /* Ieee/output.scm 988 */
{ /* Ieee/output.scm 992 */
obj_t BgL_arg1654z00_2045;
{ /* Ieee/output.scm 992 */
bool_t BgL_test3654z00_6919;
{ /* Ieee/output.scm 992 */
long BgL_tmpz00_6920;
BgL_tmpz00_6920 = 
VECTOR_LENGTH(BgL_objz00_84); 
BgL_test3654z00_6919 = 
BOUND_CHECK(BgL_iz00_2041, BgL_tmpz00_6920); } 
if(BgL_test3654z00_6919)
{ /* Ieee/output.scm 992 */
BgL_arg1654z00_2045 = 
VECTOR_REF(BgL_objz00_84,BgL_iz00_2041); }  else 
{ 
obj_t BgL_auxz00_6924;
BgL_auxz00_6924 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)35810)), BGl_string3087z00zz__r4_output_6_10_3z00, BgL_objz00_84, 
(int)(
VECTOR_LENGTH(BgL_objz00_84)), 
(int)(BgL_iz00_2041)); 
FAILURE(BgL_auxz00_6924,BFALSE,BFALSE);} } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_dispz00_86, ((long)2)))
{ /* Ieee/output.scm 992 */
PROCEDURE_ENTRY(BgL_dispz00_86)(BgL_dispz00_86, BgL_arg1654z00_2045, BgL_portz00_85, BEOA); }  else 
{ /* Ieee/output.scm 992 */
FAILURE(BGl_string3076z00zz__r4_output_6_10_3z00,BGl_list3091z00zz__r4_output_6_10_3z00,BgL_dispz00_86);} } 
bgl_display_char(((unsigned char)' '), BgL_portz00_85); 
{ 
long BgL_iz00_6940;
BgL_iz00_6940 = 
(((long)1)+BgL_iz00_2041); 
BgL_iz00_2041 = BgL_iz00_6940; 
goto BgL_zc3z04anonymousza31650ze3z87_2042;} } } } } 

}



/* write/display-tvector */
obj_t BGl_writezf2displayzd2tvectorz20zz__r4_output_6_10_3z00(obj_t BgL_tvecz00_87, obj_t BgL_portz00_88, obj_t BgL_dispz00_89)
{
{ /* Ieee/output.scm 999 */
{ /* Ieee/output.scm 1000 */
obj_t BgL_tvectorzd2refzd2_2050;obj_t BgL_idz00_2051;
BgL_tvectorzd2refzd2_2050 = 
BGl_tvectorzd2refzd2zz__tvectorz00(BgL_tvecz00_87); 
BgL_idz00_2051 = 
BGl_tvectorzd2idzd2zz__tvectorz00(BgL_tvecz00_87); 
bgl_display_char(((unsigned char)'#'), BgL_portz00_88); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_dispz00_89, ((long)2)))
{ /* Ieee/output.scm 1003 */
PROCEDURE_ENTRY(BgL_dispz00_89)(BgL_dispz00_89, BgL_idz00_2051, BgL_portz00_88, BEOA); }  else 
{ /* Ieee/output.scm 1003 */
FAILURE(BGl_string3094z00zz__r4_output_6_10_3z00,BGl_list3095z00zz__r4_output_6_10_3z00,BgL_dispz00_89);} 
bgl_display_char(((unsigned char)'('), BgL_portz00_88); 
if(
CBOOL(BgL_tvectorzd2refzd2_2050))
{ /* Ieee/output.scm 1005 */
if(
(((long)0)==
(long)(
TVECTOR_LENGTH(BgL_tvecz00_87))))
{ /* Ieee/output.scm 1010 */
return 
bgl_display_char(((unsigned char)')'), BgL_portz00_88);}  else 
{ /* Ieee/output.scm 1012 */
long BgL_lenz00_2054;
BgL_lenz00_2054 = 
(
(long)(
TVECTOR_LENGTH(BgL_tvecz00_87))-((long)1)); 
{ 
long BgL_iz00_2056;
BgL_iz00_2056 = ((long)0); 
BgL_zc3z04anonymousza31661ze3z87_2057:
if(
(BgL_iz00_2056==BgL_lenz00_2054))
{ /* Ieee/output.scm 1015 */
{ /* Ieee/output.scm 1016 */
obj_t BgL_arg1663z00_2059;
{ /* Ieee/output.scm 1016 */
obj_t BgL_funz00_4511;
if(
PROCEDUREP(BgL_tvectorzd2refzd2_2050))
{ /* Ieee/output.scm 1016 */
BgL_funz00_4511 = BgL_tvectorzd2refzd2_2050; }  else 
{ 
obj_t BgL_auxz00_6968;
BgL_auxz00_6968 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)36593)), BGl_string2974z00zz__r4_output_6_10_3z00, BGl_string3098z00zz__r4_output_6_10_3z00, BgL_tvectorzd2refzd2_2050); 
FAILURE(BgL_auxz00_6968,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4511, ((long)2)))
{ /* Ieee/output.scm 1016 */
BgL_arg1663z00_2059 = 
PROCEDURE_ENTRY(BgL_funz00_4511)(BgL_tvectorzd2refzd2_2050, BgL_tvecz00_87, 
BINT(BgL_iz00_2056), BEOA); }  else 
{ /* Ieee/output.scm 1016 */
FAILURE(BGl_string3076z00zz__r4_output_6_10_3z00,BGl_list3099z00zz__r4_output_6_10_3z00,BgL_funz00_4511);} } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_dispz00_89, ((long)2)))
{ /* Ieee/output.scm 1016 */
PROCEDURE_ENTRY(BgL_dispz00_89)(BgL_dispz00_89, BgL_arg1663z00_2059, BgL_portz00_88, BEOA); }  else 
{ /* Ieee/output.scm 1016 */
FAILURE(BGl_string3076z00zz__r4_output_6_10_3z00,BGl_list3106z00zz__r4_output_6_10_3z00,BgL_dispz00_89);} } 
return 
bgl_display_char(((unsigned char)')'), BgL_portz00_88);}  else 
{ /* Ieee/output.scm 1015 */
{ /* Ieee/output.scm 1019 */
obj_t BgL_arg1664z00_2060;
{ /* Ieee/output.scm 1019 */
obj_t BgL_funz00_4519;
if(
PROCEDUREP(BgL_tvectorzd2refzd2_2050))
{ /* Ieee/output.scm 1019 */
BgL_funz00_4519 = BgL_tvectorzd2refzd2_2050; }  else 
{ 
obj_t BgL_auxz00_6992;
BgL_auxz00_6992 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)36675)), BGl_string2974z00zz__r4_output_6_10_3z00, BGl_string3098z00zz__r4_output_6_10_3z00, BgL_tvectorzd2refzd2_2050); 
FAILURE(BgL_auxz00_6992,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4519, ((long)2)))
{ /* Ieee/output.scm 1019 */
BgL_arg1664z00_2060 = 
PROCEDURE_ENTRY(BgL_funz00_4519)(BgL_tvectorzd2refzd2_2050, BgL_tvecz00_87, 
BINT(BgL_iz00_2056), BEOA); }  else 
{ /* Ieee/output.scm 1019 */
FAILURE(BGl_string3076z00zz__r4_output_6_10_3z00,BGl_list3099z00zz__r4_output_6_10_3z00,BgL_funz00_4519);} } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_dispz00_89, ((long)2)))
{ /* Ieee/output.scm 1019 */
PROCEDURE_ENTRY(BgL_dispz00_89)(BgL_dispz00_89, BgL_arg1664z00_2060, BgL_portz00_88, BEOA); }  else 
{ /* Ieee/output.scm 1019 */
FAILURE(BGl_string3076z00zz__r4_output_6_10_3z00,BGl_list3109z00zz__r4_output_6_10_3z00,BgL_dispz00_89);} } 
bgl_display_char(((unsigned char)' '), BgL_portz00_88); 
{ 
long BgL_iz00_7014;
BgL_iz00_7014 = 
(((long)1)+BgL_iz00_2056); 
BgL_iz00_2056 = BgL_iz00_7014; 
goto BgL_zc3z04anonymousza31661ze3z87_2057;} } } } }  else 
{ /* Ieee/output.scm 1005 */
bgl_display_string(BGl_string3112z00zz__r4_output_6_10_3z00, BgL_portz00_88); 
return BgL_tvecz00_87;} } } 

}



/* write/display-hvector */
obj_t BGl_writezf2displayzd2hvectorz20zz__r4_output_6_10_3z00(obj_t BgL_svecz00_90, obj_t BgL_portz00_91, obj_t BgL_dispz00_92)
{
{ /* Ieee/output.scm 1026 */
{ /* Ieee/output.scm 1027 */
obj_t BgL_idz00_2065;
BgL_idz00_2065 = 
BGl_homogeneouszd2vectorzd2infoz00zz__srfi4z00(BgL_svecz00_90); 
{ /* Ieee/output.scm 1028 */
obj_t BgL__z00_2066;obj_t BgL_vrefz00_2067;obj_t BgL__z00_2068;obj_t BgL__z00_2069;
{ /* Ieee/output.scm 1029 */
int BgL_tmpz00_7018;
BgL_tmpz00_7018 = 
(int)(((long)1)); 
BgL__z00_2066 = 
BGL_MVALUES_VAL(BgL_tmpz00_7018); } 
{ /* Ieee/output.scm 1029 */
int BgL_tmpz00_7021;
BgL_tmpz00_7021 = 
(int)(((long)2)); 
BgL_vrefz00_2067 = 
BGL_MVALUES_VAL(BgL_tmpz00_7021); } 
{ /* Ieee/output.scm 1029 */
int BgL_tmpz00_7024;
BgL_tmpz00_7024 = 
(int)(((long)3)); 
BgL__z00_2068 = 
BGL_MVALUES_VAL(BgL_tmpz00_7024); } 
{ /* Ieee/output.scm 1029 */
int BgL_tmpz00_7027;
BgL_tmpz00_7027 = 
(int)(((long)4)); 
BgL__z00_2069 = 
BGL_MVALUES_VAL(BgL_tmpz00_7027); } 
bgl_display_char(((unsigned char)'#'), BgL_portz00_91); 
{ /* Ieee/output.scm 1030 */
obj_t BgL_objz00_3579;
if(
SYMBOLP(BgL_idz00_2065))
{ /* Ieee/output.scm 1030 */
BgL_objz00_3579 = BgL_idz00_2065; }  else 
{ 
obj_t BgL_auxz00_7033;
BgL_auxz00_7033 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)37169)), BGl_string3113z00zz__r4_output_6_10_3z00, BGl_string3040z00zz__r4_output_6_10_3z00, BgL_idz00_2065); 
FAILURE(BgL_auxz00_7033,BFALSE,BFALSE);} 
{ /* Ieee/output.scm 770 */
obj_t BgL_arg1573z00_3581;
{ /* Ieee/output.scm 770 */
obj_t BgL_res2453z00_3583;
BgL_res2453z00_3583 = 
SYMBOL_TO_STRING(BgL_objz00_3579); 
BgL_arg1573z00_3581 = BgL_res2453z00_3583; } 
bgl_display_string(BgL_arg1573z00_3581, BgL_portz00_91); } } 
bgl_display_char(((unsigned char)'('), BgL_portz00_91); 
{ /* Ieee/output.scm 1032 */
bool_t BgL_test3667z00_7040;
{ /* Ieee/output.scm 1032 */
long BgL_arg1686z00_2082;
BgL_arg1686z00_2082 = 
BGL_HVECTOR_LENGTH(BgL_svecz00_90); 
BgL_test3667z00_7040 = 
(((long)0)==BgL_arg1686z00_2082); } 
if(BgL_test3667z00_7040)
{ /* Ieee/output.scm 1032 */
return 
bgl_display_char(((unsigned char)')'), BgL_portz00_91);}  else 
{ /* Ieee/output.scm 1034 */
long BgL_lenz00_2072;
{ /* Ieee/output.scm 1034 */
long BgL_arg1685z00_2081;
BgL_arg1685z00_2081 = 
BGL_HVECTOR_LENGTH(BgL_svecz00_90); 
BgL_lenz00_2072 = 
(BgL_arg1685z00_2081-((long)1)); } 
{ 
long BgL_iz00_2074;
BgL_iz00_2074 = ((long)0); 
BgL_zc3z04anonymousza31671ze3z87_2075:
if(
(BgL_iz00_2074==BgL_lenz00_2072))
{ /* Ieee/output.scm 1037 */
{ /* Ieee/output.scm 1038 */
obj_t BgL_arg1675z00_2077;
{ /* Ieee/output.scm 1038 */
obj_t BgL_funz00_4529;
if(
PROCEDUREP(BgL_vrefz00_2067))
{ /* Ieee/output.scm 1038 */
BgL_funz00_4529 = BgL_vrefz00_2067; }  else 
{ 
obj_t BgL_auxz00_7050;
BgL_auxz00_7050 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)37387)), BGl_string2974z00zz__r4_output_6_10_3z00, BGl_string3098z00zz__r4_output_6_10_3z00, BgL_vrefz00_2067); 
FAILURE(BgL_auxz00_7050,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4529, ((long)2)))
{ /* Ieee/output.scm 1038 */
BgL_arg1675z00_2077 = 
PROCEDURE_ENTRY(BgL_funz00_4529)(BgL_vrefz00_2067, BgL_svecz00_90, 
BINT(BgL_iz00_2074), BEOA); }  else 
{ /* Ieee/output.scm 1038 */
FAILURE(BGl_string3076z00zz__r4_output_6_10_3z00,BGl_list3114z00zz__r4_output_6_10_3z00,BgL_funz00_4529);} } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_dispz00_92, ((long)2)))
{ /* Ieee/output.scm 1038 */
PROCEDURE_ENTRY(BgL_dispz00_92)(BgL_dispz00_92, BgL_arg1675z00_2077, BgL_portz00_91, BEOA); }  else 
{ /* Ieee/output.scm 1038 */
FAILURE(BGl_string3076z00zz__r4_output_6_10_3z00,BGl_list3119z00zz__r4_output_6_10_3z00,BgL_dispz00_92);} } 
return 
bgl_display_char(((unsigned char)')'), BgL_portz00_91);}  else 
{ /* Ieee/output.scm 1037 */
{ /* Ieee/output.scm 1041 */
obj_t BgL_arg1683z00_2078;
{ /* Ieee/output.scm 1041 */
obj_t BgL_funz00_4537;
if(
PROCEDUREP(BgL_vrefz00_2067))
{ /* Ieee/output.scm 1041 */
BgL_funz00_4537 = BgL_vrefz00_2067; }  else 
{ 
obj_t BgL_auxz00_7074;
BgL_auxz00_7074 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)37462)), BGl_string2974z00zz__r4_output_6_10_3z00, BGl_string3098z00zz__r4_output_6_10_3z00, BgL_vrefz00_2067); 
FAILURE(BgL_auxz00_7074,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4537, ((long)2)))
{ /* Ieee/output.scm 1041 */
BgL_arg1683z00_2078 = 
PROCEDURE_ENTRY(BgL_funz00_4537)(BgL_vrefz00_2067, BgL_svecz00_90, 
BINT(BgL_iz00_2074), BEOA); }  else 
{ /* Ieee/output.scm 1041 */
FAILURE(BGl_string3076z00zz__r4_output_6_10_3z00,BGl_list3114z00zz__r4_output_6_10_3z00,BgL_funz00_4537);} } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_dispz00_92, ((long)2)))
{ /* Ieee/output.scm 1041 */
PROCEDURE_ENTRY(BgL_dispz00_92)(BgL_dispz00_92, BgL_arg1683z00_2078, BgL_portz00_91, BEOA); }  else 
{ /* Ieee/output.scm 1041 */
FAILURE(BGl_string3076z00zz__r4_output_6_10_3z00,BGl_list3122z00zz__r4_output_6_10_3z00,BgL_dispz00_92);} } 
bgl_display_char(((unsigned char)' '), BgL_portz00_91); 
{ 
long BgL_iz00_7096;
BgL_iz00_7096 = 
(((long)1)+BgL_iz00_2074); 
BgL_iz00_2074 = BgL_iz00_7096; 
goto BgL_zc3z04anonymousza31671ze3z87_2075;} } } } } } } } 

}



/* display-pair */
obj_t BGl_displayzd2pairzd2zz__r4_output_6_10_3z00(obj_t BgL_objz00_96, obj_t BgL_portz00_97)
{
{ /* Ieee/output.scm 1080 */
bgl_display_char(((unsigned char)'('), BgL_portz00_97); 
{ 
obj_t BgL_lz00_2085;
BgL_lz00_2085 = BgL_objz00_96; 
BgL_zc3z04anonymousza31687ze3z87_2086:
{ /* Ieee/output.scm 1081 */
bool_t BgL_test3675z00_7099;
{ /* Ieee/output.scm 1081 */
obj_t BgL_tmpz00_7100;
{ /* Ieee/output.scm 1081 */
obj_t BgL_pairz00_3597;
if(
PAIRP(BgL_lz00_2085))
{ /* Ieee/output.scm 1081 */
BgL_pairz00_3597 = BgL_lz00_2085; }  else 
{ 
obj_t BgL_auxz00_7103;
BgL_auxz00_7103 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)38981)), BGl_string2974z00zz__r4_output_6_10_3z00, BGl_string2975z00zz__r4_output_6_10_3z00, BgL_lz00_2085); 
FAILURE(BgL_auxz00_7103,BFALSE,BFALSE);} 
BgL_tmpz00_7100 = 
CDR(BgL_pairz00_3597); } 
BgL_test3675z00_7099 = 
NULLP(BgL_tmpz00_7100); } 
if(BgL_test3675z00_7099)
{ /* Ieee/output.scm 1081 */
{ /* Ieee/output.scm 1081 */
obj_t BgL_arg1691z00_2089;
{ /* Ieee/output.scm 1081 */
obj_t BgL_pairz00_3599;
if(
PAIRP(BgL_lz00_2085))
{ /* Ieee/output.scm 1081 */
BgL_pairz00_3599 = BgL_lz00_2085; }  else 
{ 
obj_t BgL_auxz00_7111;
BgL_auxz00_7111 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)38981)), BGl_string2974z00zz__r4_output_6_10_3z00, BGl_string2975z00zz__r4_output_6_10_3z00, BgL_lz00_2085); 
FAILURE(BgL_auxz00_7111,BFALSE,BFALSE);} 
BgL_arg1691z00_2089 = 
CAR(BgL_pairz00_3599); } 
bgl_display_obj(BgL_arg1691z00_2089, BgL_portz00_97); } 
return 
bgl_display_char(((unsigned char)')'), BgL_portz00_97);}  else 
{ /* Ieee/output.scm 1081 */
bool_t BgL_test3678z00_7118;
{ /* Ieee/output.scm 1081 */
obj_t BgL_tmpz00_7119;
{ /* Ieee/output.scm 1081 */
obj_t BgL_pairz00_3600;
if(
PAIRP(BgL_lz00_2085))
{ /* Ieee/output.scm 1081 */
BgL_pairz00_3600 = BgL_lz00_2085; }  else 
{ 
obj_t BgL_auxz00_7122;
BgL_auxz00_7122 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)38981)), BGl_string2974z00zz__r4_output_6_10_3z00, BGl_string2975z00zz__r4_output_6_10_3z00, BgL_lz00_2085); 
FAILURE(BgL_auxz00_7122,BFALSE,BFALSE);} 
BgL_tmpz00_7119 = 
CDR(BgL_pairz00_3600); } 
BgL_test3678z00_7118 = 
PAIRP(BgL_tmpz00_7119); } 
if(BgL_test3678z00_7118)
{ /* Ieee/output.scm 1081 */
{ /* Ieee/output.scm 1081 */
obj_t BgL_arg1695z00_2092;
{ /* Ieee/output.scm 1081 */
obj_t BgL_pairz00_3602;
if(
PAIRP(BgL_lz00_2085))
{ /* Ieee/output.scm 1081 */
BgL_pairz00_3602 = BgL_lz00_2085; }  else 
{ 
obj_t BgL_auxz00_7130;
BgL_auxz00_7130 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)38981)), BGl_string2974z00zz__r4_output_6_10_3z00, BGl_string2975z00zz__r4_output_6_10_3z00, BgL_lz00_2085); 
FAILURE(BgL_auxz00_7130,BFALSE,BFALSE);} 
BgL_arg1695z00_2092 = 
CAR(BgL_pairz00_3602); } 
bgl_display_obj(BgL_arg1695z00_2092, BgL_portz00_97); } 
bgl_display_char(((unsigned char)' '), BgL_portz00_97); 
{ /* Ieee/output.scm 1081 */
obj_t BgL_arg1696z00_2093;
{ /* Ieee/output.scm 1081 */
obj_t BgL_pairz00_3603;
if(
PAIRP(BgL_lz00_2085))
{ /* Ieee/output.scm 1081 */
BgL_pairz00_3603 = BgL_lz00_2085; }  else 
{ 
obj_t BgL_auxz00_7139;
BgL_auxz00_7139 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)38981)), BGl_string2974z00zz__r4_output_6_10_3z00, BGl_string2975z00zz__r4_output_6_10_3z00, BgL_lz00_2085); 
FAILURE(BgL_auxz00_7139,BFALSE,BFALSE);} 
BgL_arg1696z00_2093 = 
CDR(BgL_pairz00_3603); } 
{ 
obj_t BgL_lz00_7144;
BgL_lz00_7144 = BgL_arg1696z00_2093; 
BgL_lz00_2085 = BgL_lz00_7144; 
goto BgL_zc3z04anonymousza31687ze3z87_2086;} } }  else 
{ /* Ieee/output.scm 1081 */
{ /* Ieee/output.scm 1081 */
obj_t BgL_arg1697z00_2094;
{ /* Ieee/output.scm 1081 */
obj_t BgL_pairz00_3604;
if(
PAIRP(BgL_lz00_2085))
{ /* Ieee/output.scm 1081 */
BgL_pairz00_3604 = BgL_lz00_2085; }  else 
{ 
obj_t BgL_auxz00_7147;
BgL_auxz00_7147 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)38981)), BGl_string2974z00zz__r4_output_6_10_3z00, BGl_string2975z00zz__r4_output_6_10_3z00, BgL_lz00_2085); 
FAILURE(BgL_auxz00_7147,BFALSE,BFALSE);} 
BgL_arg1697z00_2094 = 
CAR(BgL_pairz00_3604); } 
bgl_display_obj(BgL_arg1697z00_2094, BgL_portz00_97); } 
bgl_display_char(((unsigned char)' '), BgL_portz00_97); 
bgl_display_char(((unsigned char)'.'), BgL_portz00_97); 
bgl_display_char(((unsigned char)' '), BgL_portz00_97); 
{ /* Ieee/output.scm 1081 */
obj_t BgL_arg1698z00_2095;
{ /* Ieee/output.scm 1081 */
obj_t BgL_pairz00_3605;
if(
PAIRP(BgL_lz00_2085))
{ /* Ieee/output.scm 1081 */
BgL_pairz00_3605 = BgL_lz00_2085; }  else 
{ 
obj_t BgL_auxz00_7158;
BgL_auxz00_7158 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)38981)), BGl_string2974z00zz__r4_output_6_10_3z00, BGl_string2975z00zz__r4_output_6_10_3z00, BgL_lz00_2085); 
FAILURE(BgL_auxz00_7158,BFALSE,BFALSE);} 
BgL_arg1698z00_2095 = 
CDR(BgL_pairz00_3605); } 
bgl_display_obj(BgL_arg1698z00_2095, BgL_portz00_97); } 
return 
bgl_display_char(((unsigned char)')'), BgL_portz00_97);} } } } } 

}



/* write-pair */
obj_t BGl_writezd2pairzd2zz__r4_output_6_10_3z00(obj_t BgL_objz00_98, obj_t BgL_portz00_99)
{
{ /* Ieee/output.scm 1086 */
bgl_display_char(((unsigned char)'('), BgL_portz00_99); 
{ 
obj_t BgL_lz00_2100;
BgL_lz00_2100 = BgL_objz00_98; 
BgL_zc3z04anonymousza31701ze3z87_2101:
{ /* Ieee/output.scm 1087 */
bool_t BgL_test3684z00_7166;
{ /* Ieee/output.scm 1087 */
obj_t BgL_tmpz00_7167;
{ /* Ieee/output.scm 1087 */
obj_t BgL_pairz00_3606;
if(
PAIRP(BgL_lz00_2100))
{ /* Ieee/output.scm 1087 */
BgL_pairz00_3606 = BgL_lz00_2100; }  else 
{ 
obj_t BgL_auxz00_7170;
BgL_auxz00_7170 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)39279)), BGl_string2974z00zz__r4_output_6_10_3z00, BGl_string2975z00zz__r4_output_6_10_3z00, BgL_lz00_2100); 
FAILURE(BgL_auxz00_7170,BFALSE,BFALSE);} 
BgL_tmpz00_7167 = 
CDR(BgL_pairz00_3606); } 
BgL_test3684z00_7166 = 
NULLP(BgL_tmpz00_7167); } 
if(BgL_test3684z00_7166)
{ /* Ieee/output.scm 1087 */
{ /* Ieee/output.scm 1087 */
obj_t BgL_arg1704z00_2104;
{ /* Ieee/output.scm 1087 */
obj_t BgL_pairz00_3608;
if(
PAIRP(BgL_lz00_2100))
{ /* Ieee/output.scm 1087 */
BgL_pairz00_3608 = BgL_lz00_2100; }  else 
{ 
obj_t BgL_auxz00_7178;
BgL_auxz00_7178 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)39279)), BGl_string2974z00zz__r4_output_6_10_3z00, BGl_string2975z00zz__r4_output_6_10_3z00, BgL_lz00_2100); 
FAILURE(BgL_auxz00_7178,BFALSE,BFALSE);} 
BgL_arg1704z00_2104 = 
CAR(BgL_pairz00_3608); } 
bgl_write_obj(BgL_arg1704z00_2104, BgL_portz00_99); } 
return 
bgl_display_char(((unsigned char)')'), BgL_portz00_99);}  else 
{ /* Ieee/output.scm 1087 */
bool_t BgL_test3687z00_7185;
{ /* Ieee/output.scm 1087 */
obj_t BgL_tmpz00_7186;
{ /* Ieee/output.scm 1087 */
obj_t BgL_pairz00_3609;
if(
PAIRP(BgL_lz00_2100))
{ /* Ieee/output.scm 1087 */
BgL_pairz00_3609 = BgL_lz00_2100; }  else 
{ 
obj_t BgL_auxz00_7189;
BgL_auxz00_7189 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)39279)), BGl_string2974z00zz__r4_output_6_10_3z00, BGl_string2975z00zz__r4_output_6_10_3z00, BgL_lz00_2100); 
FAILURE(BgL_auxz00_7189,BFALSE,BFALSE);} 
BgL_tmpz00_7186 = 
CDR(BgL_pairz00_3609); } 
BgL_test3687z00_7185 = 
PAIRP(BgL_tmpz00_7186); } 
if(BgL_test3687z00_7185)
{ /* Ieee/output.scm 1087 */
{ /* Ieee/output.scm 1087 */
obj_t BgL_arg1709z00_2107;
{ /* Ieee/output.scm 1087 */
obj_t BgL_pairz00_3611;
if(
PAIRP(BgL_lz00_2100))
{ /* Ieee/output.scm 1087 */
BgL_pairz00_3611 = BgL_lz00_2100; }  else 
{ 
obj_t BgL_auxz00_7197;
BgL_auxz00_7197 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)39279)), BGl_string2974z00zz__r4_output_6_10_3z00, BGl_string2975z00zz__r4_output_6_10_3z00, BgL_lz00_2100); 
FAILURE(BgL_auxz00_7197,BFALSE,BFALSE);} 
BgL_arg1709z00_2107 = 
CAR(BgL_pairz00_3611); } 
bgl_write_obj(BgL_arg1709z00_2107, BgL_portz00_99); } 
bgl_display_char(((unsigned char)' '), BgL_portz00_99); 
{ /* Ieee/output.scm 1087 */
obj_t BgL_arg1710z00_2108;
{ /* Ieee/output.scm 1087 */
obj_t BgL_pairz00_3612;
if(
PAIRP(BgL_lz00_2100))
{ /* Ieee/output.scm 1087 */
BgL_pairz00_3612 = BgL_lz00_2100; }  else 
{ 
obj_t BgL_auxz00_7206;
BgL_auxz00_7206 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)39279)), BGl_string2974z00zz__r4_output_6_10_3z00, BGl_string2975z00zz__r4_output_6_10_3z00, BgL_lz00_2100); 
FAILURE(BgL_auxz00_7206,BFALSE,BFALSE);} 
BgL_arg1710z00_2108 = 
CDR(BgL_pairz00_3612); } 
{ 
obj_t BgL_lz00_7211;
BgL_lz00_7211 = BgL_arg1710z00_2108; 
BgL_lz00_2100 = BgL_lz00_7211; 
goto BgL_zc3z04anonymousza31701ze3z87_2101;} } }  else 
{ /* Ieee/output.scm 1087 */
{ /* Ieee/output.scm 1087 */
obj_t BgL_arg1711z00_2109;
{ /* Ieee/output.scm 1087 */
obj_t BgL_pairz00_3613;
if(
PAIRP(BgL_lz00_2100))
{ /* Ieee/output.scm 1087 */
BgL_pairz00_3613 = BgL_lz00_2100; }  else 
{ 
obj_t BgL_auxz00_7214;
BgL_auxz00_7214 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)39279)), BGl_string2974z00zz__r4_output_6_10_3z00, BGl_string2975z00zz__r4_output_6_10_3z00, BgL_lz00_2100); 
FAILURE(BgL_auxz00_7214,BFALSE,BFALSE);} 
BgL_arg1711z00_2109 = 
CAR(BgL_pairz00_3613); } 
bgl_write_obj(BgL_arg1711z00_2109, BgL_portz00_99); } 
bgl_display_char(((unsigned char)' '), BgL_portz00_99); 
bgl_display_char(((unsigned char)'.'), BgL_portz00_99); 
bgl_display_char(((unsigned char)' '), BgL_portz00_99); 
{ /* Ieee/output.scm 1087 */
obj_t BgL_arg1712z00_2110;
{ /* Ieee/output.scm 1087 */
obj_t BgL_pairz00_3614;
if(
PAIRP(BgL_lz00_2100))
{ /* Ieee/output.scm 1087 */
BgL_pairz00_3614 = BgL_lz00_2100; }  else 
{ 
obj_t BgL_auxz00_7225;
BgL_auxz00_7225 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__r4_output_6_10_3z00, 
BINT(((long)39279)), BGl_string2974z00zz__r4_output_6_10_3z00, BGl_string2975z00zz__r4_output_6_10_3z00, BgL_lz00_2100); 
FAILURE(BgL_auxz00_7225,BFALSE,BFALSE);} 
BgL_arg1712z00_2110 = 
CDR(BgL_pairz00_3614); } 
bgl_write_obj(BgL_arg1712z00_2110, BgL_portz00_99); } 
return 
bgl_display_char(((unsigned char)')'), BgL_portz00_99);} } } } } 

}



/* object-init */
obj_t BGl_objectzd2initzd2zz__r4_output_6_10_3z00()
{
{ /* Ieee/output.scm 24 */
return BUNSPEC;} 

}



/* generic-init */
obj_t BGl_genericzd2initzd2zz__r4_output_6_10_3z00()
{
{ /* Ieee/output.scm 24 */
return BUNSPEC;} 

}



/* method-init */
obj_t BGl_methodzd2initzd2zz__r4_output_6_10_3z00()
{
{ /* Ieee/output.scm 24 */
return BUNSPEC;} 

}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__r4_output_6_10_3z00()
{
{ /* Ieee/output.scm 24 */
BGl_modulezd2initializa7ationz75zz__errorz00(((long)37115357), 
BSTRING_TO_STRING(BGl_string3125z00zz__r4_output_6_10_3z00)); 
BGl_modulezd2initializa7ationz75zz__bexitz00(((long)340267996), 
BSTRING_TO_STRING(BGl_string3125z00zz__r4_output_6_10_3z00)); 
BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long)331540733), 
BSTRING_TO_STRING(BGl_string3125z00zz__r4_output_6_10_3z00)); 
BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonum_dtoaz00(((long)268155874), 
BSTRING_TO_STRING(BGl_string3125z00zz__r4_output_6_10_3z00)); 
BGl_modulezd2initializa7ationz75zz__biglooz00(((long)70989162), 
BSTRING_TO_STRING(BGl_string3125z00zz__r4_output_6_10_3z00)); 
BGl_modulezd2initializa7ationz75zz__srfi4z00(((long)467925662), 
BSTRING_TO_STRING(BGl_string3125z00zz__r4_output_6_10_3z00)); 
return 
BGl_modulezd2initializa7ationz75zz__paramz00(((long)453938973), 
BSTRING_TO_STRING(BGl_string3125z00zz__r4_output_6_10_3z00));} 

}

#ifdef __cplusplus
}
#endif
