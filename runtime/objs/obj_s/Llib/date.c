/*===========================================================================*/
/*   (Llib/date.scm)                                                         */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -c Llib/date.scm -indent -o objs/obj_s/Llib/date.c) */
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

typedef struct BgL_z62iozd2closedzd2errorz62_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_fnamez00;
   obj_t BgL_locationz00;
   obj_t BgL_stackz00;
   obj_t BgL_procz00;
   obj_t BgL_msgz00;
   obj_t BgL_objz00;
} *BgL_z62iozd2closedzd2errorz62_bglt;

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


extern obj_t BGl_raisez00zz__errorz00(obj_t);
static obj_t BGl_dayzd2ofzd2weekzd2grammarzd2zz__datez00 = BUNSPEC;
extern obj_t bgl_seconds_to_gmtdate(long);
extern bool_t BGl_classzd2fieldzf3z21zz__objectz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_datezd2updatez12zc0zz__datez00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62millisecondszd2ze3datez53zz__datez00(obj_t, obj_t);
extern bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_z62datezd2yearzd2dayz62zz__datez00(obj_t, obj_t);
static obj_t BGl_objectzd2initzd2zz__datez00();
static obj_t BGl_z62datezd2ze3gmtdatez12z41zz__datez00(obj_t, obj_t);
extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_z62dayzd2anamezb0zz__datez00(obj_t, obj_t);
static long BGl_blitzd2int2z12zc0zz__datez00(obj_t, long, int);
static obj_t BGl_z62datezd2ze3iso8601zd2datez81zz__datez00(obj_t, obj_t);
extern BGL_LONGLONG_T bgl_date_to_nanoseconds(obj_t);
extern obj_t bstring_to_symbol(obj_t);
static obj_t BGl_search1345ze70ze7zz__datez00(long, obj_t, obj_t, long);
static obj_t BGl_z62iso8601zd2datezd2ze3datez81zz__datez00(obj_t, obj_t);
static obj_t BGl_keyword7645z00zz__datez00 = BUNSPEC;
extern obj_t bgl_seconds_to_utc_string(long);
static obj_t BGl_keyword7647z00zz__datez00 = BUNSPEC;
static obj_t BGl_keyword7649z00zz__datez00 = BUNSPEC;
static obj_t BGl_methodzd2initzd2zz__datez00();
static obj_t BGl_symbol7605z00zz__datez00 = BUNSPEC;
static obj_t BGl_symbol7607z00zz__datez00 = BUNSPEC;
static obj_t BGl_symbol7609z00zz__datez00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_dayzd2anamezd2zz__datez00(int);
static obj_t BGl_keyword7651z00zz__datez00 = BUNSPEC;
static obj_t BGl_keyword7653z00zz__datez00 = BUNSPEC;
extern obj_t bgl_milliseconds_to_gmtdate(BGL_LONGLONG_T);
static obj_t BGl_keyword7655z00zz__datez00 = BUNSPEC;
static obj_t BGl_keyword7657z00zz__datez00 = BUNSPEC;
static obj_t BGl_keyword7659z00zz__datez00 = BUNSPEC;
static obj_t BGl_za2timezd2za7onesza2z75zz__datez00 = BUNSPEC;
static obj_t BGl_symbol7612z00zz__datez00 = BUNSPEC;
static obj_t BGl_symbol7614z00zz__datez00 = BUNSPEC;
static obj_t BGl_symbol7617z00zz__datez00 = BUNSPEC;
static obj_t BGl_z62currentzd2secondszb0zz__datez00(obj_t);
static obj_t BGl_symbol7619z00zz__datez00 = BUNSPEC;
static obj_t BGl_keyword7661z00zz__datez00 = BUNSPEC;
static obj_t BGl_symbol7622z00zz__datez00 = BUNSPEC;
extern obj_t make_string(long, unsigned char);
static obj_t BGl_symbol7624z00zz__datez00 = BUNSPEC;
extern obj_t bgl_month_name(int);
static obj_t BGl_symbol7627z00zz__datez00 = BUNSPEC;
static obj_t BGl_z62nanosecondszd2ze3datez53zz__datez00(obj_t, obj_t);
static obj_t BGl_keyword7670z00zz__datez00 = BUNSPEC;
extern obj_t bgl_day_name(int);
static obj_t BGl_symbol7630z00zz__datez00 = BUNSPEC;
static obj_t BGl_symbol7633z00zz__datez00 = BUNSPEC;
static obj_t BGl_symbol7636z00zz__datez00 = BUNSPEC;
static obj_t BGl_symbol7639z00zz__datez00 = BUNSPEC;
extern obj_t rgc_buffer_substring(obj_t, long, long);
BGL_EXPORTED_DECL obj_t BGl_datezd2ze3stringz31zz__datez00(obj_t);
static obj_t BGl_z62datezd2yearzb0zz__datez00(obj_t, obj_t);
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62datezd2millisecondzb0zz__datez00(obj_t, obj_t);
static obj_t BGl_symbol7483z00zz__datez00 = BUNSPEC;
static obj_t BGl_symbol7486z00zz__datez00 = BUNSPEC;
static obj_t BGl_symbol7489z00zz__datez00 = BUNSPEC;
static obj_t BGl_symbol7492z00zz__datez00 = BUNSPEC;
static obj_t BGl_symbol7495z00zz__datez00 = BUNSPEC;
static obj_t BGl_symbol7498z00zz__datez00 = BUNSPEC;
static obj_t BGl_symbol7663z00zz__datez00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_millisecondszd2ze3datez31zz__datez00(BGL_LONGLONG_T);
static obj_t BGl_z62iso8601zd2parsezd2datez62zz__datez00(obj_t, obj_t);
extern obj_t bgl_milliseconds_to_date(BGL_LONGLONG_T);
BGL_EXPORTED_DECL BGL_LONGLONG_T BGl_datezd2ze3nanosecondsz31zz__datez00(obj_t);
static obj_t BGl_symbol7672z00zz__datez00 = BUNSPEC;
static obj_t BGl_z62secondszd2ze3gmtdatez53zz__datez00(obj_t, obj_t);
static obj_t BGl_symbol7678z00zz__datez00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_secondszd2ze3stringz31zz__datez00(long);
static obj_t BGl_z62secondszd2ze3utczd2stringz81zz__datez00(obj_t, obj_t);
BGL_EXPORTED_DECL int BGl_datezd2yearzd2zz__datez00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_datezd2ze3utczd2stringze3zz__datez00(obj_t);
static obj_t BGl_z62datezd2ze3secondsz53zz__datez00(obj_t, obj_t);
extern obj_t BGl_remainderz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
extern obj_t bgl_nanoseconds_to_date(BGL_LONGLONG_T);
static obj_t BGl_z62currentzd2nanosecondszb0zz__datez00(obj_t);
static obj_t BGl_z62datezf3z91zz__datez00(obj_t, obj_t);
extern obj_t bgl_day_aname(int);
static obj_t BGl_z62datezd2za7onezd2offsetzc5zz__datez00(obj_t, obj_t);
extern BGL_LONGLONG_T bgl_date_to_milliseconds(obj_t);
extern obj_t BGl_readzd2linezd2zz__r4_input_6_10_2z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_datezd2ze3iso8601zd2dateze3zz__datez00(obj_t);
static obj_t BGl_gczd2rootszd2initz00zz__datez00();
static obj_t BGl_z62integerzd2ze3secondz53zz__datez00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_iso8601zd2datezd2ze3dateze3zz__datez00(obj_t);
static obj_t BGl_z62currentzd2millisecondszb0zz__datez00(obj_t);
static obj_t BGl_monthzd2grammarzd2zz__datez00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_millisecondszd2ze3gmtdatez31zz__datez00(BGL_LONGLONG_T);
BGL_EXPORTED_DECL long BGl_dayzd2secondszd2zz__datez00();
BGL_EXPORTED_DECL BGL_LONGLONG_T BGl_currentzd2millisecondszd2zz__datez00();
extern BGL_LONGLONG_T bgl_current_nanoseconds();
extern obj_t rgc_buffer_symbol(obj_t);
BGL_EXPORTED_DECL obj_t BGl_secondszd2ze3utczd2stringze3zz__datez00(long);
BGL_EXPORTED_DECL BGL_LONGLONG_T BGl_datezd2nanosecondzd2zz__datez00(obj_t);
BGL_EXPORTED_DECL bool_t BGl_leapzd2yearzf3z21zz__datez00(int);
static obj_t BGl_thezd2failureze70z35zz__datez00(obj_t);
static obj_t BGl_thezd2failureze71z35zz__datez00(obj_t);
static obj_t BGl_thezd2failureze72z35zz__datez00(obj_t);
static obj_t BGl_thezd2failureze73z35zz__datez00(obj_t);
static obj_t BGl_thezd2failureze74z35zz__datez00(obj_t);
static obj_t BGl_thezd2failureze75z35zz__datez00(obj_t);
static obj_t BGl_thezd2failureze76z35zz__datez00(obj_t);
static obj_t BGl_thezd2failureze77z35zz__datez00(obj_t);
extern obj_t BGl_exitdzd2popzd2protectz12z12zz__bexitz00(obj_t);
BGL_EXPORTED_DECL BGL_LONGLONG_T BGl_currentzd2nanosecondszd2zz__datez00();
BGL_EXPORTED_DECL long BGl_datezd2timeza7onez75zz__datez00(obj_t);
static obj_t BGl_z62datezd2ze3millisecondsz53zz__datez00(obj_t, obj_t);
BGL_EXPORTED_DECL int BGl_datezd2weekzd2dayz00zz__datez00(obj_t);
static obj_t BGl_parsezd2errorzd2zz__datez00(obj_t, obj_t, obj_t, obj_t);
extern long bgl_date_to_seconds(obj_t);
BGL_EXPORTED_DECL int BGl_datezd2iszd2dstz00zz__datez00(obj_t);
static obj_t BGl_z62leapzd2yearzf3z43zz__datez00(obj_t, obj_t);
static obj_t BGl_z62millisecondszd2ze3gmtdatez53zz__datez00(obj_t, obj_t);
static obj_t BGl_z62datezd2ze3stringz53zz__datez00(obj_t, obj_t);
static obj_t BGl_list7604z00zz__datez00 = BUNSPEC;
extern obj_t BGl_blitzd2stringz12zc0zz__r4_strings_6_7z00(obj_t, long, obj_t, long, long);
static obj_t BGl_list7611z00zz__datez00 = BUNSPEC;
static obj_t BGl_list7616z00zz__datez00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_iso8601zd2parsezd2datez00zz__datez00(obj_t);
static obj_t BGl_list7621z00zz__datez00 = BUNSPEC;
static obj_t BGl_list7626z00zz__datez00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_currentzd2datezd2zz__datez00();
static obj_t BGl_search1315ze70ze7zz__datez00(long, obj_t, obj_t, long);
static obj_t BGl_list7629z00zz__datez00 = BUNSPEC;
extern obj_t bgl_update_date(obj_t, BGL_LONGLONG_T, int, int, int, int, int, int, long, bool_t, int);
BGL_EXPORTED_DECL obj_t BGl_datezd2updatezd2millisecondz12z12zz__datez00(obj_t, long);
static obj_t BGl_z62currentzd2microsecondszb0zz__datez00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_nanosecondszd2ze3datez31zz__datez00(BGL_LONGLONG_T);
static obj_t BGl_list7632z00zz__datez00 = BUNSPEC;
static obj_t BGl_list7635z00zz__datez00 = BUNSPEC;
BGL_EXPORTED_DECL int BGl_datezd2monthzd2zz__datez00(obj_t);
static obj_t BGl_list7638z00zz__datez00 = BUNSPEC;
static obj_t BGl_requirezd2initializa7ationz75zz__datez00 = BUNSPEC;
static obj_t BGl_z62dayzd2secondszb0zz__datez00(obj_t);
static obj_t BGl_timezd2grammarzd2zz__datez00 = BUNSPEC;
static obj_t BGl_list7481z00zz__datez00 = BUNSPEC;
static obj_t BGl_list7644z00zz__datez00 = BUNSPEC;
static obj_t BGl_list7482z00zz__datez00 = BUNSPEC;
static obj_t BGl_list7485z00zz__datez00 = BUNSPEC;
static obj_t BGl_list7488z00zz__datez00 = BUNSPEC;
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL BGL_LONGLONG_T BGl_currentzd2microsecondszd2zz__datez00();
static obj_t BGl_list7491z00zz__datez00 = BUNSPEC;
static obj_t BGl_list7494z00zz__datez00 = BUNSPEC;
static obj_t BGl_list7497z00zz__datez00 = BUNSPEC;
static obj_t BGl_z62datezd2monthzb0zz__datez00(obj_t, obj_t);
extern obj_t BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(obj_t);
extern obj_t bgl_seconds_to_date(long);
static obj_t BGl_toplevelzd2initzd2zz__datez00();
static obj_t BGl_z62datezd2hourzb0zz__datez00(obj_t, obj_t);
static obj_t BGl_list7669z00zz__datez00 = BUNSPEC;
static obj_t BGl_z62zc3z04anonymousza31858ze3ze5zz__datez00(obj_t, obj_t);
extern obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
static obj_t BGl_z62datezd2iszd2dstz62zz__datez00(obj_t, obj_t);
static obj_t BGl_list7677z00zz__datez00 = BUNSPEC;
extern unsigned char BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(long);
static obj_t BGl_genericzd2initzd2zz__datez00();
extern obj_t BGl_z62iozd2parsezd2errorz62zz__objectz00;
extern obj_t BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(obj_t, obj_t);
extern obj_t BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(obj_t);
static obj_t BGl_z62datezd2wdayzb0zz__datez00(obj_t, obj_t);
static obj_t BGl_z62rfc2822zd2datezd2ze3datez81zz__datez00(obj_t, obj_t);
static obj_t BGl_z62datezd2monthzd2lengthz62zz__datez00(obj_t, obj_t);
extern BGL_LONGLONG_T bgl_current_milliseconds();
static obj_t BGl_thezd2fixnumzd2grammarz00zz__datez00 = BUNSPEC;
static obj_t BGl_z62zc3z04anonymousza31699ze3ze5zz__datez00(obj_t, obj_t);
BGL_EXPORTED_DECL int BGl_datezd2hourzd2zz__datez00(obj_t);
static obj_t BGl_z62datezd2dayzb0zz__datez00(obj_t, obj_t);
static obj_t BGl_symbol7501z00zz__datez00 = BUNSPEC;
BGL_EXPORTED_DECL BGL_LONGLONG_T BGl_datezd2millisecondzd2zz__datez00(obj_t);
static obj_t BGl_symbol7504z00zz__datez00 = BUNSPEC;
static obj_t BGl_symbol7507z00zz__datez00 = BUNSPEC;
static obj_t BGl_za7onezd2grammarz75zz__datez00 = BUNSPEC;
BGL_EXPORTED_DECL BGL_LONGLONG_T BGl_datezd2ze3millisecondsz31zz__datez00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_secondszd2ze3datez31zz__datez00(long);
static obj_t BGl_symbol7510z00zz__datez00 = BUNSPEC;
static obj_t BGl_symbol7513z00zz__datez00 = BUNSPEC;
static obj_t BGl_symbol7516z00zz__datez00 = BUNSPEC;
static obj_t BGl_z62dayzd2namezb0zz__datez00(obj_t, obj_t);
extern obj_t bgl_date_to_gmtdate(obj_t);
BGL_EXPORTED_DECL int BGl_datezd2wdayzd2zz__datez00(obj_t);
BGL_EXPORTED_DECL int BGl_datezd2secondzd2zz__datez00(obj_t);
static obj_t BGl_z62datezd2ze3rfc2822zd2datez81zz__datez00(obj_t, obj_t);
static long BGl_blitzd2intz12zc0zz__datez00(obj_t, long, int);
BGL_EXPORTED_DECL long BGl_currentzd2secondszd2zz__datez00();
BGL_EXPORTED_DECL obj_t BGl_secondszd2ze3gmtdatez31zz__datez00(long);
BGL_EXPORTED_DECL obj_t BGl_datezd2ze3gmtdatez12z23zz__datez00(obj_t);
static obj_t BGl_z62datezd2ydayzb0zz__datez00(obj_t, obj_t);
extern obj_t bgl_close_input_port(obj_t);
static obj_t BGl_z62zc3z04anonymousza32063ze3ze5zz__datez00(obj_t, obj_t);
static obj_t BGl_za2monthzd2lengthsza2zd2zz__datez00 = BUNSPEC;
static obj_t BGl_symbol7716z00zz__datez00 = BUNSPEC;
static obj_t BGl_z62currentzd2datezb0zz__datez00(obj_t);
extern long bgl_current_seconds();
BGL_EXPORTED_DECL long BGl_datezd2za7onezd2offsetza7zz__datez00(obj_t);
static obj_t BGl_z62zc3z04anonymousza32985ze3ze5zz__datez00(obj_t);
static obj_t BGl_symbol7721z00zz__datez00 = BUNSPEC;
static obj_t BGl__makezd2datezd2zz__datez00(obj_t, obj_t);
static obj_t BGl_symbol7724z00zz__datez00 = BUNSPEC;
static obj_t BGl_z62rfc2822zd2parsezd2datez62zz__datez00(obj_t, obj_t);
static obj_t BGl_symbol7564z00zz__datez00 = BUNSPEC;
static obj_t BGl_symbol7566z00zz__datez00 = BUNSPEC;
static obj_t BGl_symbol7568z00zz__datez00 = BUNSPEC;
BGL_EXPORTED_DECL bool_t BGl_datezf3zf3zz__datez00(obj_t);
static obj_t BGl_z62datezd2updatezd2minutez12z70zz__datez00(obj_t, obj_t, obj_t);
static obj_t BGl_z62datezd2timeza7onez17zz__datez00(obj_t, obj_t);
extern obj_t BGl_z62iozd2closedzd2errorz62zz__objectz00;
BGL_EXPORTED_DECL obj_t BGl_makezd2datezd2zz__datez00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_symbol7570z00zz__datez00 = BUNSPEC;
static obj_t BGl_symbol7572z00zz__datez00 = BUNSPEC;
extern long BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(long, long);
static obj_t BGl_z62datezd2weekzd2dayz62zz__datez00(obj_t, obj_t);
static obj_t BGl_symbol7574z00zz__datez00 = BUNSPEC;
static obj_t BGl_symbol7576z00zz__datez00 = BUNSPEC;
static obj_t BGl_symbol7578z00zz__datez00 = BUNSPEC;
extern BGL_LONGLONG_T bgl_current_microseconds();
extern obj_t bgl_make_date(BGL_LONGLONG_T, int, int, int, int, int, int, long, bool_t, int);
BGL_EXPORTED_DECL int BGl_datezd2minutezd2zz__datez00(obj_t);
BGL_EXPORTED_DECL int BGl_datezd2ydayzd2zz__datez00(obj_t);
static obj_t BGl_symbol7580z00zz__datez00 = BUNSPEC;
static obj_t BGl_symbol7582z00zz__datez00 = BUNSPEC;
static obj_t BGl_symbol7584z00zz__datez00 = BUNSPEC;
static obj_t BGl_symbol7586z00zz__datez00 = BUNSPEC;
extern obj_t BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL int BGl_datezd2dayzd2zz__datez00(obj_t);
BGL_EXPORTED_DECL int BGl_datezd2yearzd2dayz00zz__datez00(obj_t);
static obj_t BGl_z62secondszd2ze3stringz53zz__datez00(obj_t, obj_t);
static obj_t BGl__datezd2copyzd2zz__datez00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__datez00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
static obj_t BGl_z62datezd2secondzb0zz__datez00(obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza32352ze3ze5zz__datez00(obj_t, obj_t);
extern obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_datezd2copyzd2zz__datez00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62datezd2updatezd2secondz12z70zz__datez00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_dayzd2namezd2zz__datez00(int);
BGL_EXPORTED_DECL obj_t BGl_monthzd2anamezd2zz__datez00(int);
BGL_EXPORTED_DECL obj_t BGl_rfc2822zd2datezd2ze3dateze3zz__datez00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_monthzd2namezd2zz__datez00(int);
static obj_t BGl_cnstzd2initzd2zz__datez00();
static obj_t BGl_importedzd2moduleszd2initz00zz__datez00();
BGL_EXPORTED_DECL long BGl_integerzd2ze3secondz31zz__datez00(long);
static obj_t BGl_z62datezd2updatezd2millisecondz12z70zz__datez00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_datezd2updatezd2minutez12z12zz__datez00(obj_t, long);
static obj_t BGl_z62monthzd2namezb0zz__datez00(obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza31449ze3ze5zz__datez00(obj_t, obj_t);
extern long rgc_buffer_fixnum(obj_t);
BGL_EXPORTED_DECL obj_t BGl_datezd2ze3rfc2822zd2dateze3zz__datez00(obj_t);
static obj_t BGl_z62datezd2minutezb0zz__datez00(obj_t, obj_t);
static obj_t BGl_z62datezd2ze3utczd2stringz81zz__datez00(obj_t, obj_t);
extern obj_t BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(obj_t);
static obj_t BGl_z62datezd2nanosecondzb0zz__datez00(obj_t, obj_t);
BGL_EXPORTED_DECL int BGl_datezd2monthzd2lengthz00zz__datez00(obj_t);
extern obj_t bgl_month_aname(int);
extern obj_t BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(obj_t, obj_t, obj_t, obj_t, int, int);
BGL_EXPORTED_DECL obj_t BGl_datezd2updatezd2secondz12z12zz__datez00(obj_t, long);
static obj_t BGl_list7500z00zz__datez00 = BUNSPEC;
static obj_t BGl_list7503z00zz__datez00 = BUNSPEC;
static obj_t BGl_list7506z00zz__datez00 = BUNSPEC;
extern obj_t BGl_unreadzd2charz12zc0zz__r4_input_6_10_2z00(unsigned char, obj_t);
static obj_t BGl_search1330ze70ze7zz__datez00(long, obj_t, obj_t, long);
static obj_t BGl_list7509z00zz__datez00 = BUNSPEC;
static obj_t BGl_z62monthzd2anamezb0zz__datez00(obj_t, obj_t);
extern obj_t bstring_to_keyword(obj_t);
extern bool_t rgc_fill_buffer(obj_t);
BGL_EXPORTED_DECL obj_t BGl_rfc2822zd2parsezd2datez00zz__datez00(obj_t);
static obj_t BGl_list7512z00zz__datez00 = BUNSPEC;
static obj_t BGl_list7515z00zz__datez00 = BUNSPEC;
static obj_t BGl_z62secondszd2ze3datez53zz__datez00(obj_t, obj_t);
static obj_t BGl__datezd2updatez12zc0zz__datez00(obj_t, obj_t);
static obj_t BGl_z62datezd2ze3nanosecondsz53zz__datez00(obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_datezd2ze3secondsz31zz__datez00(obj_t);
extern obj_t bgl_seconds_to_string(long);
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_datezd2millisecondzd2envz00zz__datez00, BgL_bgl_za762dateza7d2millis7761z00, BGl_z62datezd2millisecondzb0zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datezd2ze3nanosecondszd2envze3zz__datez00, BgL_bgl_za762dateza7d2za7e3nan7762za7, BGl_z62datezd2ze3nanosecondsz53zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datezf3zd2envz21zz__datez00, BgL_bgl_za762dateza7f3za791za7za7_7763za7, BGl_z62datezf3z91zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datezd2weekzd2dayzd2envzd2zz__datez00, BgL_bgl_za762dateza7d2weekza7d7764za7, BGl_z62datezd2weekzd2dayz62zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_dayzd2namezd2envz00zz__datez00, BgL_bgl_za762dayza7d2nameza7b07765za7, BGl_z62dayzd2namezb0zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datezd2minutezd2envz00zz__datez00, BgL_bgl_za762dateza7d2minute7766z00, BGl_z62datezd2minutezb0zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datezd2monthzd2envz00zz__datez00, BgL_bgl_za762dateza7d2monthza77767za7, BGl_z62datezd2monthzb0zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datezd2ze3millisecondszd2envze3zz__datez00, BgL_bgl_za762dateza7d2za7e3mil7768za7, BGl_z62datezd2ze3millisecondsz53zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datezd2nanosecondzd2envz00zz__datez00, BgL_bgl_za762dateza7d2nanose7769z00, BGl_z62datezd2nanosecondzb0zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_currentzd2secondszd2envz00zz__datez00, BgL_bgl_za762currentza7d2sec7770z00, BGl_z62currentzd2secondszb0zz__datez00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_rfc2822zd2datezd2ze3datezd2envz31zz__datez00, BgL_bgl_za762rfc2822za7d2dat7771z00, BGl_z62rfc2822zd2datezd2ze3datez81zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datezd2wdayzd2envz00zz__datez00, BgL_bgl_za762dateza7d2wdayza7b7772za7, BGl_z62datezd2wdayzb0zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_secondszd2ze3gmtdatezd2envze3zz__datez00, BgL_bgl_za762secondsza7d2za7e37773za7, BGl_z62secondszd2ze3gmtdatez53zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datezd2ze3gmtdatez12zd2envzf1zz__datez00, BgL_bgl_za762dateza7d2za7e3gmt7774za7, BGl_z62datezd2ze3gmtdatez12z41zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_rfc2822zd2parsezd2datezd2envzd2zz__datez00, BgL_bgl_za762rfc2822za7d2par7775z00, BGl_z62rfc2822zd2parsezd2datez62zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datezd2ze3rfc2822zd2datezd2envz31zz__datez00, BgL_bgl_za762dateza7d2za7e3rfc7776za7, BGl_z62datezd2ze3rfc2822zd2datez81zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datezd2updatezd2minutez12zd2envzc0zz__datez00, BgL_bgl_za762dateza7d2update7777z00, BGl_z62datezd2updatezd2minutez12z70zz__datez00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_nanosecondszd2ze3datezd2envze3zz__datez00, BgL_bgl_za762nanosecondsza7d7778z00, BGl_z62nanosecondszd2ze3datez53zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_currentzd2millisecondszd2envz00zz__datez00, BgL_bgl_za762currentza7d2mil7779z00, BGl_z62currentzd2millisecondszb0zz__datez00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datezd2timeza7onezd2envza7zz__datez00, BgL_bgl_za762dateza7d2timeza7a7780za7, BGl_z62datezd2timeza7onez17zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_millisecondszd2ze3gmtdatezd2envze3zz__datez00, BgL_bgl_za762millisecondsza77781z00, BGl_z62millisecondszd2ze3gmtdatez53zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datezd2ze3utczd2stringzd2envz31zz__datez00, BgL_bgl_za762dateza7d2za7e3utc7782za7, BGl_z62datezd2ze3utczd2stringz81zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string7600z00zz__datez00, BgL_bgl_string7600za700za7za7_7783za7, "<@anonymous:1699>", 17 );
DEFINE_STRING( BGl_string7601z00zz__datez00, BgL_bgl_string7601za700za7za7_7784za7, "Illegal day of week", 19 );
DEFINE_STRING( BGl_string7602z00zz__datez00, BgL_bgl_string7602za700za7za7_7785za7, "procedure", 9 );
DEFINE_STRING( BGl_string7603z00zz__datez00, BgL_bgl_string7603za700za7za7_7786za7, "ignore:Wrong number of arguments", 32 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc7518z00zz__datez00, BgL_bgl_za762za7c3za704anonymo7787za7, BGl_z62zc3z04anonymousza32352ze3ze5zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string7606z00zz__datez00, BgL_bgl_string7606za700za7za7_7788za7, "funcall", 7 );
DEFINE_STRING( BGl_string7608z00zz__datez00, BgL_bgl_string7608za700za7za7_7789za7, "month-grammar", 13 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datezd2ydayzd2envz00zz__datez00, BgL_bgl_za762dateza7d2ydayza7b7790za7, BGl_z62datezd2ydayzb0zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string7610z00zz__datez00, BgL_bgl_string7610za700za7za7_7791za7, "arg1686", 7 );
DEFINE_STRING( BGl_string7613z00zz__datez00, BgL_bgl_string7613za700za7za7_7792za7, "the-fixnum-grammar", 18 );
DEFINE_STRING( BGl_string7615z00zz__datez00, BgL_bgl_string7615za700za7za7_7793za7, "arg1685", 7 );
DEFINE_STRING( BGl_string7618z00zz__datez00, BgL_bgl_string7618za700za7za7_7794za7, "time-grammar", 12 );
DEFINE_STRING( BGl_string7620z00zz__datez00, BgL_bgl_string7620za700za7za7_7795za7, "arg1684", 7 );
DEFINE_STRING( BGl_string7623z00zz__datez00, BgL_bgl_string7623za700za7za7_7796za7, "zone-grammar", 12 );
DEFINE_STRING( BGl_string7625z00zz__datez00, BgL_bgl_string7625za700za7za7_7797za7, "arg1683", 7 );
DEFINE_STRING( BGl_string7628z00zz__datez00, BgL_bgl_string7628za700za7za7_7798za7, "arg1696", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datezd2monthzd2lengthzd2envzd2zz__datez00, BgL_bgl_za762dateza7d2monthza77799za7, BGl_z62datezd2monthzd2lengthz62zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string7631z00zz__datez00, BgL_bgl_string7631za700za7za7_7800za7, "arg1695", 7 );
DEFINE_STRING( BGl_string7634z00zz__datez00, BgL_bgl_string7634za700za7za7_7801za7, "arg1693", 7 );
DEFINE_STRING( BGl_string7637z00zz__datez00, BgL_bgl_string7637za700za7za7_7802za7, "arg1692", 7 );
DEFINE_STRING( BGl_string7640z00zz__datez00, BgL_bgl_string7640za700za7za7_7803za7, "arg1691", 7 );
DEFINE_STRING( BGl_string7641z00zz__datez00, BgL_bgl_string7641za700za7za7_7804za7, "<@anonymous:1449>", 17 );
DEFINE_STRING( BGl_string7643z00zz__datez00, BgL_bgl_string7643za700za7za7_7805za7, "vector-ref", 10 );
DEFINE_STRING( BGl_string7646z00zz__datez00, BgL_bgl_string7646za700za7za7_7806za7, "day", 3 );
DEFINE_STRING( BGl_string7484z00zz__datez00, BgL_bgl_string7484za700za7za7_7807za7, "EDT", 3 );
DEFINE_STRING( BGl_string7648z00zz__datez00, BgL_bgl_string7648za700za7za7_7808za7, "dst", 3 );
DEFINE_STRING( BGl_string7487z00zz__datez00, BgL_bgl_string7487za700za7za7_7809za7, "EST", 3 );
DEFINE_STRING( BGl_string7650z00zz__datez00, BgL_bgl_string7650za700za7za7_7810za7, "hour", 4 );
DEFINE_STRING( BGl_string7652z00zz__datez00, BgL_bgl_string7652za700za7za7_7811za7, "min", 3 );
DEFINE_STRING( BGl_string7490z00zz__datez00, BgL_bgl_string7490za700za7za7_7812za7, "CDT", 3 );
DEFINE_STRING( BGl_string7654z00zz__datez00, BgL_bgl_string7654za700za7za7_7813za7, "month", 5 );
DEFINE_STRING( BGl_string7493z00zz__datez00, BgL_bgl_string7493za700za7za7_7814za7, "CST", 3 );
DEFINE_STRING( BGl_string7656z00zz__datez00, BgL_bgl_string7656za700za7za7_7815za7, "nsec", 4 );
DEFINE_STRING( BGl_string7658z00zz__datez00, BgL_bgl_string7658za700za7za7_7816za7, "sec", 3 );
DEFINE_STRING( BGl_string7496z00zz__datez00, BgL_bgl_string7496za700za7za7_7817za7, "MDT", 3 );
DEFINE_STRING( BGl_string7499z00zz__datez00, BgL_bgl_string7499za700za7za7_7818za7, "MST", 3 );
DEFINE_STRING( BGl_string7660z00zz__datez00, BgL_bgl_string7660za700za7za7_7819za7, "timezone", 8 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datezd2updatez12zd2envz12zz__datez00, BgL_bgl__dateza7d2updateza717820z00, opt_generic_entry, BGl__datezd2updatez12zc0zz__datez00, BFALSE, -1 );
DEFINE_STRING( BGl_string7662z00zz__datez00, BgL_bgl_string7662za700za7za7_7821za7, "year", 4 );
DEFINE_STRING( BGl_string7664z00zz__datez00, BgL_bgl_string7664za700za7za7_7822za7, "make-date", 9 );
DEFINE_STRING( BGl_string7665z00zz__datez00, BgL_bgl_string7665za700za7za7_7823za7, "Illegal keyword argument", 24 );
DEFINE_STRING( BGl_string7666z00zz__datez00, BgL_bgl_string7666za700za7za7_7824za7, "_make-date", 10 );
DEFINE_STRING( BGl_string7667z00zz__datez00, BgL_bgl_string7667za700za7za7_7825za7, "bllong", 6 );
DEFINE_STRING( BGl_string7668z00zz__datez00, BgL_bgl_string7668za700za7za7_7826za7, "wrong number of arguments: [0..9] expected, provided", 52 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_dayzd2anamezd2envz00zz__datez00, BgL_bgl_za762dayza7d2anameza7b7827za7, BGl_z62dayzd2anamezb0zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string7671z00zz__datez00, BgL_bgl_string7671za700za7za7_7828za7, "isdst", 5 );
DEFINE_STRING( BGl_string7673z00zz__datez00, BgL_bgl_string7673za700za7za7_7829za7, "date-copy", 9 );
DEFINE_STRING( BGl_string7674z00zz__datez00, BgL_bgl_string7674za700za7za7_7830za7, "_date-copy", 10 );
DEFINE_STRING( BGl_string7675z00zz__datez00, BgL_bgl_string7675za700za7za7_7831za7, "date", 4 );
DEFINE_STRING( BGl_string7676z00zz__datez00, BgL_bgl_string7676za700za7za7_7832za7, "wrong number of arguments: [1..10] expected, provided", 53 );
DEFINE_STRING( BGl_string7679z00zz__datez00, BgL_bgl_string7679za700za7za7_7833za7, "date-update!", 12 );
DEFINE_STRING( BGl_string7680z00zz__datez00, BgL_bgl_string7680za700za7za7_7834za7, "_date-update!", 13 );
DEFINE_STRING( BGl_string7681z00zz__datez00, BgL_bgl_string7681za700za7za7_7835za7, "wrong number of arguments: [1..8] expected, provided", 52 );
DEFINE_STRING( BGl_string7682z00zz__datez00, BgL_bgl_string7682za700za7za7_7836za7, "&date->gmtdate!", 15 );
DEFINE_STRING( BGl_string7683z00zz__datez00, BgL_bgl_string7683za700za7za7_7837za7, "&date-update-millisecond!", 25 );
DEFINE_STRING( BGl_string7684z00zz__datez00, BgL_bgl_string7684za700za7za7_7838za7, "&date-update-second!", 20 );
DEFINE_STRING( BGl_string7685z00zz__datez00, BgL_bgl_string7685za700za7za7_7839za7, "&date-update-minute!", 20 );
DEFINE_STRING( BGl_string7686z00zz__datez00, BgL_bgl_string7686za700za7za7_7840za7, "&integer->second", 16 );
DEFINE_STRING( BGl_string7687z00zz__datez00, BgL_bgl_string7687za700za7za7_7841za7, "&date-nanosecond", 16 );
DEFINE_STRING( BGl_string7688z00zz__datez00, BgL_bgl_string7688za700za7za7_7842za7, "&date-millisecond", 17 );
DEFINE_STRING( BGl_string7689z00zz__datez00, BgL_bgl_string7689za700za7za7_7843za7, "&date-second", 12 );
DEFINE_STRING( BGl_string7690z00zz__datez00, BgL_bgl_string7690za700za7za7_7844za7, "&date-minute", 12 );
DEFINE_STRING( BGl_string7691z00zz__datez00, BgL_bgl_string7691za700za7za7_7845za7, "&date-hour", 10 );
DEFINE_STRING( BGl_string7692z00zz__datez00, BgL_bgl_string7692za700za7za7_7846za7, "&date-day", 9 );
DEFINE_STRING( BGl_string7693z00zz__datez00, BgL_bgl_string7693za700za7za7_7847za7, "&date-week-day", 14 );
DEFINE_STRING( BGl_string7694z00zz__datez00, BgL_bgl_string7694za700za7za7_7848za7, "&date-wday", 10 );
DEFINE_STRING( BGl_string7695z00zz__datez00, BgL_bgl_string7695za700za7za7_7849za7, "&date-year-day", 14 );
DEFINE_STRING( BGl_string7696z00zz__datez00, BgL_bgl_string7696za700za7za7_7850za7, "&date-yday", 10 );
DEFINE_STRING( BGl_string7697z00zz__datez00, BgL_bgl_string7697za700za7za7_7851za7, "&date-month", 11 );
DEFINE_STRING( BGl_string7698z00zz__datez00, BgL_bgl_string7698za700za7za7_7852za7, "&date-year", 10 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_dayzd2secondszd2envz00zz__datez00, BgL_bgl_za762dayza7d2seconds7853z00, BGl_z62dayzd2secondszb0zz__datez00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string7699z00zz__datez00, BgL_bgl_string7699za700za7za7_7854za7, "&date-timezone", 14 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_secondszd2ze3utczd2stringzd2envz31zz__datez00, BgL_bgl_za762secondsza7d2za7e37855za7, BGl_z62secondszd2ze3utczd2stringz81zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_LLONG( BGl_llong7642z00zz__datez00, BgL_bgl_llong7642za700za7za7__7856za7, ((BGL_LONGLONG_T)0) );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datezd2yearzd2envz00zz__datez00, BgL_bgl_za762dateza7d2yearza7b7857za7, BGl_z62datezd2yearzb0zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_monthzd2namezd2envz00zz__datez00, BgL_bgl_za762monthza7d2nameza77858za7, BGl_z62monthzd2namezb0zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_currentzd2microsecondszd2envz00zz__datez00, BgL_bgl_za762currentza7d2mic7859z00, BGl_z62currentzd2microsecondszb0zz__datez00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datezd2secondzd2envz00zz__datez00, BgL_bgl_za762dateza7d2second7860z00, BGl_z62datezd2secondzb0zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_currentzd2nanosecondszd2envz00zz__datez00, BgL_bgl_za762currentza7d2nan7861z00, BGl_z62currentzd2nanosecondszb0zz__datez00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_monthzd2anamezd2envz00zz__datez00, BgL_bgl_za762monthza7d2aname7862z00, BGl_z62monthzd2anamezb0zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_secondszd2ze3datezd2envze3zz__datez00, BgL_bgl_za762secondsza7d2za7e37863za7, BGl_z62secondszd2ze3datez53zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_integerzd2ze3secondzd2envze3zz__datez00, BgL_bgl_za762integerza7d2za7e37864za7, BGl_z62integerzd2ze3secondz53zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datezd2copyzd2envz00zz__datez00, BgL_bgl__dateza7d2copyza7d2za77865za7, opt_generic_entry, BGl__datezd2copyzd2zz__datez00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datezd2hourzd2envz00zz__datez00, BgL_bgl_za762dateza7d2hourza7b7866za7, BGl_z62datezd2hourzb0zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datezd2ze3iso8601zd2datezd2envz31zz__datez00, BgL_bgl_za762dateza7d2za7e3iso7867za7, BGl_z62datezd2ze3iso8601zd2datez81zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_millisecondszd2ze3datezd2envze3zz__datez00, BgL_bgl_za762millisecondsza77868z00, BGl_z62millisecondszd2ze3datez53zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datezd2yearzd2dayzd2envzd2zz__datez00, BgL_bgl_za762dateza7d2yearza7d7869za7, BGl_z62datezd2yearzd2dayz62zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datezd2ze3stringzd2envze3zz__datez00, BgL_bgl_za762dateza7d2za7e3str7870za7, BGl_z62datezd2ze3stringz53zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_iso8601zd2datezd2ze3datezd2envz31zz__datez00, BgL_bgl_za762iso8601za7d2dat7871z00, BGl_z62iso8601zd2datezd2ze3datez81zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_iso8601zd2parsezd2datezd2envzd2zz__datez00, BgL_bgl_za762iso8601za7d2par7872z00, BGl_z62iso8601zd2parsezd2datez62zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2datezd2envz00zz__datez00, BgL_bgl__makeza7d2dateza7d2za77873za7, opt_generic_entry, BGl__makezd2datezd2zz__datez00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datezd2dayzd2envz00zz__datez00, BgL_bgl_za762dateza7d2dayza7b07874za7, BGl_z62datezd2dayzb0zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string7502z00zz__datez00, BgL_bgl_string7502za700za7za7_7875za7, "PDT", 3 );
DEFINE_STRING( BGl_string7505z00zz__datez00, BgL_bgl_string7505za700za7za7_7876za7, "PST", 3 );
DEFINE_STRING( BGl_string7508z00zz__datez00, BgL_bgl_string7508za700za7za7_7877za7, "CEST", 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_secondszd2ze3stringzd2envze3zz__datez00, BgL_bgl_za762secondsza7d2za7e37878za7, BGl_z62secondszd2ze3stringz53zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_leapzd2yearzf3zd2envzf3zz__datez00, BgL_bgl_za762leapza7d2yearza7f7879za7, BGl_z62leapzd2yearzf3z43zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string7511z00zz__datez00, BgL_bgl_string7511za700za7za7_7880za7, "UT", 2 );
DEFINE_STRING( BGl_string7514z00zz__datez00, BgL_bgl_string7514za700za7za7_7881za7, "GMT", 3 );
DEFINE_STRING( BGl_string7517z00zz__datez00, BgL_bgl_string7517za700za7za7_7882za7, "BST", 3 );
DEFINE_STRING( BGl_string7519z00zz__datez00, BgL_bgl_string7519za700za7za7_7883za7, "/tmp/4.4a/runtime/Llib/date.scm", 31 );
DEFINE_STRING( BGl_string7520z00zz__datez00, BgL_bgl_string7520za700za7za7_7884za7, "ignore", 6 );
DEFINE_STRING( BGl_string7521z00zz__datez00, BgL_bgl_string7521za700za7za7_7885za7, "input-port", 10 );
DEFINE_STRING( BGl_string7522z00zz__datez00, BgL_bgl_string7522za700za7za7_7886za7, "rfc2822-parse-date", 18 );
DEFINE_STRING( BGl_string7523z00zz__datez00, BgL_bgl_string7523za700za7za7_7887za7, "Illegal zone", 12 );
DEFINE_STRING( BGl_string7524z00zz__datez00, BgL_bgl_string7524za700za7za7_7888za7, "bint", 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_currentzd2datezd2envz00zz__datez00, BgL_bgl_za762currentza7d2dat7889z00, BGl_z62currentzd2datezb0zz__datez00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string7525z00zz__datez00, BgL_bgl_string7525za700za7za7_7890za7, "regular-grammar", 15 );
DEFINE_STRING( BGl_string7526z00zz__datez00, BgL_bgl_string7526za700za7za7_7891za7, "Illegal match", 13 );
DEFINE_STRING( BGl_string7527z00zz__datez00, BgL_bgl_string7527za700za7za7_7892za7, "the-failure", 11 );
DEFINE_STRING( BGl_string7528z00zz__datez00, BgL_bgl_string7528za700za7za7_7893za7, "STATE-16-1225", 13 );
DEFINE_STRING( BGl_string7529z00zz__datez00, BgL_bgl_string7529za700za7za7_7894za7, "STATE-14-1223", 13 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datezd2iszd2dstzd2envzd2zz__datez00, BgL_bgl_za762dateza7d2isza7d2d7895za7, BGl_z62datezd2iszd2dstz62zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string7530z00zz__datez00, BgL_bgl_string7530za700za7za7_7896za7, "STATE-11-1220", 13 );
DEFINE_STRING( BGl_string7531z00zz__datez00, BgL_bgl_string7531za700za7za7_7897za7, "STATE-10-1219", 13 );
DEFINE_STRING( BGl_string7532z00zz__datez00, BgL_bgl_string7532za700za7za7_7898za7, "STATE-9-1218", 12 );
DEFINE_STRING( BGl_string7533z00zz__datez00, BgL_bgl_string7533za700za7za7_7899za7, "STATE-4-1213", 12 );
DEFINE_STRING( BGl_string7534z00zz__datez00, BgL_bgl_string7534za700za7za7_7900za7, "STATE-13-1222", 13 );
DEFINE_STRING( BGl_string7535z00zz__datez00, BgL_bgl_string7535za700za7za7_7901za7, "STATE-0-1209", 12 );
DEFINE_STRING( BGl_string7536z00zz__datez00, BgL_bgl_string7536za700za7za7_7902za7, "STATE-2-1211", 12 );
DEFINE_STRING( BGl_string7537z00zz__datez00, BgL_bgl_string7537za700za7za7_7903za7, "STATE-6-1215", 12 );
DEFINE_STRING( BGl_string7538z00zz__datez00, BgL_bgl_string7538za700za7za7_7904za7, "STATE-3-1212", 12 );
DEFINE_STRING( BGl_string7539z00zz__datez00, BgL_bgl_string7539za700za7za7_7905za7, "STATE-5-1214", 12 );
DEFINE_STRING( BGl_string7700z00zz__datez00, BgL_bgl_string7700za700za7za7_7906za7, "&date-zone-offset", 17 );
DEFINE_STRING( BGl_string7701z00zz__datez00, BgL_bgl_string7701za700za7za7_7907za7, "&date-is-dst", 12 );
DEFINE_STRING( BGl_string7702z00zz__datez00, BgL_bgl_string7702za700za7za7_7908za7, "&seconds->date", 14 );
DEFINE_STRING( BGl_string7540z00zz__datez00, BgL_bgl_string7540za700za7za7_7909za7, "STATE-8-1217", 12 );
DEFINE_STRING( BGl_string7703z00zz__datez00, BgL_bgl_string7703za700za7za7_7910za7, "belong", 6 );
DEFINE_STRING( BGl_string7541z00zz__datez00, BgL_bgl_string7541za700za7za7_7911za7, "<@anonymous:2352>", 17 );
DEFINE_STRING( BGl_string7704z00zz__datez00, BgL_bgl_string7704za700za7za7_7912za7, "&seconds->gmtdate", 17 );
DEFINE_STRING( BGl_string7542z00zz__datez00, BgL_bgl_string7542za700za7za7_7913za7, "class-field", 11 );
DEFINE_STRING( BGl_string7705z00zz__datez00, BgL_bgl_string7705za700za7za7_7914za7, "&milliseconds->gmtdate", 22 );
DEFINE_STRING( BGl_string7543z00zz__datez00, BgL_bgl_string7543za700za7za7_7915za7, "Can't read on a closed input port", 33 );
DEFINE_STRING( BGl_string7706z00zz__datez00, BgL_bgl_string7706za700za7za7_7916za7, "&nanoseconds->date", 18 );
DEFINE_STRING( BGl_string7544z00zz__datez00, BgL_bgl_string7544za700za7za7_7917za7, "Illegal time", 12 );
DEFINE_STRING( BGl_string7707z00zz__datez00, BgL_bgl_string7707za700za7za7_7918za7, "&milliseconds->date", 19 );
DEFINE_STRING( BGl_string7545z00zz__datez00, BgL_bgl_string7545za700za7za7_7919za7, "STATE-21-1206", 13 );
DEFINE_STRING( BGl_string7708z00zz__datez00, BgL_bgl_string7708za700za7za7_7920za7, "&date->seconds", 14 );
DEFINE_STRING( BGl_string7546z00zz__datez00, BgL_bgl_string7546za700za7za7_7921za7, "STATE-19-1204", 13 );
DEFINE_STRING( BGl_string7709z00zz__datez00, BgL_bgl_string7709za700za7za7_7922za7, "&date->nanoseconds", 18 );
DEFINE_STRING( BGl_string7547z00zz__datez00, BgL_bgl_string7547za700za7za7_7923za7, "STATE-18-1203", 13 );
DEFINE_STRING( BGl_string7548z00zz__datez00, BgL_bgl_string7548za700za7za7_7924za7, "STATE-17-1202", 13 );
DEFINE_STRING( BGl_string7549z00zz__datez00, BgL_bgl_string7549za700za7za7_7925za7, "STATE-0-1185", 12 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datezd2za7onezd2offsetzd2envz75zz__datez00, BgL_bgl_za762dateza7d2za7a7one7926za7, BGl_z62datezd2za7onezd2offsetzc5zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string7710z00zz__datez00, BgL_bgl_string7710za700za7za7_7927za7, "&date->milliseconds", 19 );
DEFINE_STRING( BGl_string7711z00zz__datez00, BgL_bgl_string7711za700za7za7_7928za7, "&date->string", 13 );
DEFINE_STRING( BGl_string7712z00zz__datez00, BgL_bgl_string7712za700za7za7_7929za7, "string-set!", 11 );
DEFINE_STRING( BGl_string7550z00zz__datez00, BgL_bgl_string7550za700za7za7_7930za7, "STATE-3-1188", 12 );
DEFINE_STRING( BGl_string7713z00zz__datez00, BgL_bgl_string7713za700za7za7_7931za7, "&date->utc-string", 17 );
DEFINE_STRING( BGl_string7551z00zz__datez00, BgL_bgl_string7551za700za7za7_7932za7, "STATE-10-1195", 13 );
DEFINE_STRING( BGl_string7714z00zz__datez00, BgL_bgl_string7714za700za7za7_7933za7, "&seconds->string", 16 );
DEFINE_STRING( BGl_string7552z00zz__datez00, BgL_bgl_string7552za700za7za7_7934za7, "STATE-13-1198", 13 );
DEFINE_STRING( BGl_string7715z00zz__datez00, BgL_bgl_string7715za700za7za7_7935za7, "&seconds->utc-string", 20 );
DEFINE_STRING( BGl_string7553z00zz__datez00, BgL_bgl_string7553za700za7za7_7936za7, "STATE-12-1197", 13 );
DEFINE_STRING( BGl_string7554z00zz__datez00, BgL_bgl_string7554za700za7za7_7937za7, "STATE-11-1196", 13 );
DEFINE_STRING( BGl_string7717z00zz__datez00, BgL_bgl_string7717za700za7za7_7938za7, "day-name", 8 );
DEFINE_STRING( BGl_string7555z00zz__datez00, BgL_bgl_string7555za700za7za7_7939za7, "STATE-8-1193", 12 );
DEFINE_STRING( BGl_string7718z00zz__datez00, BgL_bgl_string7718za700za7za7_7940za7, "Illegal day number", 18 );
DEFINE_STRING( BGl_string7556z00zz__datez00, BgL_bgl_string7556za700za7za7_7941za7, "STATE-15-1200", 13 );
DEFINE_STRING( BGl_string7719z00zz__datez00, BgL_bgl_string7719za700za7za7_7942za7, "bstring", 7 );
DEFINE_STRING( BGl_string7557z00zz__datez00, BgL_bgl_string7557za700za7za7_7943za7, "STATE-5-1190", 12 );
DEFINE_STRING( BGl_string7558z00zz__datez00, BgL_bgl_string7558za700za7za7_7944za7, "STATE-4-1189", 12 );
DEFINE_STRING( BGl_string7559z00zz__datez00, BgL_bgl_string7559za700za7za7_7945za7, "STATE-9-1194", 12 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datezd2updatezd2secondz12zd2envzc0zz__datez00, BgL_bgl_za762dateza7d2update7946z00, BGl_z62datezd2updatezd2secondz12z70zz__datez00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string7720z00zz__datez00, BgL_bgl_string7720za700za7za7_7947za7, "&day-name", 9 );
DEFINE_STRING( BGl_string7722z00zz__datez00, BgL_bgl_string7722za700za7za7_7948za7, "day-aname", 9 );
DEFINE_STRING( BGl_string7560z00zz__datez00, BgL_bgl_string7560za700za7za7_7949za7, "STATE-2-1187", 12 );
DEFINE_STRING( BGl_string7723z00zz__datez00, BgL_bgl_string7723za700za7za7_7950za7, "&day-aname", 10 );
DEFINE_STRING( BGl_string7561z00zz__datez00, BgL_bgl_string7561za700za7za7_7951za7, "STATE-16-1201", 13 );
DEFINE_STRING( BGl_string7562z00zz__datez00, BgL_bgl_string7562za700za7za7_7952za7, "<@anonymous:2063>", 17 );
DEFINE_STRING( BGl_string7725z00zz__datez00, BgL_bgl_string7725za700za7za7_7953za7, "month-aname", 11 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc7478z00zz__datez00, BgL_bgl_za762za7c3za704anonymo7954za7, BGl_z62zc3z04anonymousza31699ze3ze5zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string7563z00zz__datez00, BgL_bgl_string7563za700za7za7_7955za7, "Illegal month", 13 );
DEFINE_STRING( BGl_string7726z00zz__datez00, BgL_bgl_string7726za700za7za7_7956za7, "Illegal month number", 20 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc7479z00zz__datez00, BgL_bgl_za762za7c3za704anonymo7957za7, BGl_z62zc3z04anonymousza31858ze3ze5zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string7727z00zz__datez00, BgL_bgl_string7727za700za7za7_7958za7, "month-name", 10 );
DEFINE_STRING( BGl_string7565z00zz__datez00, BgL_bgl_string7565za700za7za7_7959za7, "Jan", 3 );
DEFINE_STRING( BGl_string7728z00zz__datez00, BgL_bgl_string7728za700za7za7_7960za7, "&month-name", 11 );
DEFINE_STRING( BGl_string7729z00zz__datez00, BgL_bgl_string7729za700za7za7_7961za7, "&month-aname", 12 );
DEFINE_STRING( BGl_string7567z00zz__datez00, BgL_bgl_string7567za700za7za7_7962za7, "Feb", 3 );
DEFINE_STRING( BGl_string7569z00zz__datez00, BgL_bgl_string7569za700za7za7_7963za7, "Mar", 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datezd2updatezd2millisecondz12zd2envzc0zz__datez00, BgL_bgl_za762dateza7d2update7964z00, BGl_z62datezd2updatezd2millisecondz12z70zz__datez00, 0L, BUNSPEC, 2 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc7480z00zz__datez00, BgL_bgl_za762za7c3za704anonymo7965za7, BGl_z62zc3z04anonymousza32063ze3ze5zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string7730z00zz__datez00, BgL_bgl_string7730za700za7za7_7966za7, "date-month-length", 17 );
DEFINE_STRING( BGl_string7731z00zz__datez00, BgL_bgl_string7731za700za7za7_7967za7, "&date-month-length", 18 );
DEFINE_STRING( BGl_string7732z00zz__datez00, BgL_bgl_string7732za700za7za7_7968za7, "&leap-year?", 11 );
DEFINE_STRING( BGl_string7733z00zz__datez00, BgL_bgl_string7733za700za7za7_7969za7, "rfc2822-date->date", 18 );
DEFINE_STRING( BGl_string7571z00zz__datez00, BgL_bgl_string7571za700za7za7_7970za7, "Apr", 3 );
DEFINE_STRING( BGl_string7734z00zz__datez00, BgL_bgl_string7734za700za7za7_7971za7, "&rfc2822-date->date", 19 );
DEFINE_STRING( BGl_string7735z00zz__datez00, BgL_bgl_string7735za700za7za7_7972za7, "&rfc2822-parse-date", 19 );
DEFINE_STRING( BGl_string7573z00zz__datez00, BgL_bgl_string7573za700za7za7_7973za7, "May", 3 );
DEFINE_STRING( BGl_string7736z00zz__datez00, BgL_bgl_string7736za700za7za7_7974za7, "&date->rfc2822-date", 19 );
DEFINE_STRING( BGl_string7737z00zz__datez00, BgL_bgl_string7737za700za7za7_7975za7, "~a-~2,0d-~2,0dT~2,0d:~2,0d:~2,0dZ", 33 );
DEFINE_STRING( BGl_string7575z00zz__datez00, BgL_bgl_string7575za700za7za7_7976za7, "Jun", 3 );
DEFINE_STRING( BGl_string7738z00zz__datez00, BgL_bgl_string7738za700za7za7_7977za7, "-", 1 );
DEFINE_STRING( BGl_string7739z00zz__datez00, BgL_bgl_string7739za700za7za7_7978za7, "+", 1 );
DEFINE_STRING( BGl_string7577z00zz__datez00, BgL_bgl_string7577za700za7za7_7979za7, "Jul", 3 );
DEFINE_STRING( BGl_string7579z00zz__datez00, BgL_bgl_string7579za700za7za7_7980za7, "Aug", 3 );
DEFINE_STRING( BGl_string7740z00zz__datez00, BgL_bgl_string7740za700za7za7_7981za7, "date->iso8601-date", 18 );
DEFINE_STRING( BGl_string7741z00zz__datez00, BgL_bgl_string7741za700za7za7_7982za7, "~a-~2,0d-~2,0dT~2,0d:~2,0d:~2,0d~a~2,0d:~2,0d", 45 );
DEFINE_STRING( BGl_string7742z00zz__datez00, BgL_bgl_string7742za700za7za7_7983za7, "&date->iso8601-date", 19 );
DEFINE_STRING( BGl_string7743z00zz__datez00, BgL_bgl_string7743za700za7za7_7984za7, "&iso8601-date->date", 19 );
DEFINE_STRING( BGl_string7581z00zz__datez00, BgL_bgl_string7581za700za7za7_7985za7, "Sep", 3 );
DEFINE_STRING( BGl_string7744z00zz__datez00, BgL_bgl_string7744za700za7za7_7986za7, "iso8601-parse-date", 18 );
DEFINE_STRING( BGl_string7745z00zz__datez00, BgL_bgl_string7745za700za7za7_7987za7, "iso8601-ZMM-grammar", 19 );
DEFINE_STRING( BGl_string7583z00zz__datez00, BgL_bgl_string7583za700za7za7_7988za7, "Oct", 3 );
DEFINE_STRING( BGl_string7746z00zz__datez00, BgL_bgl_string7746za700za7za7_7989za7, "iso8601-Z-grammar", 17 );
DEFINE_STRING( BGl_string7747z00zz__datez00, BgL_bgl_string7747za700za7za7_7990za7, "bchar", 5 );
DEFINE_STRING( BGl_string7585z00zz__datez00, BgL_bgl_string7585za700za7za7_7991za7, "Nov", 3 );
DEFINE_STRING( BGl_string7748z00zz__datez00, BgL_bgl_string7748za700za7za7_7992za7, "iso8601-sss-grammar", 19 );
DEFINE_STRING( BGl_string7749z00zz__datez00, BgL_bgl_string7749za700za7za7_7993za7, "iso8601-ss-grammar", 18 );
DEFINE_STRING( BGl_string7587z00zz__datez00, BgL_bgl_string7587za700za7za7_7994za7, "Dec", 3 );
DEFINE_STRING( BGl_string7588z00zz__datez00, BgL_bgl_string7588za700za7za7_7995za7, "STATE-4-1179", 12 );
DEFINE_STRING( BGl_string7589z00zz__datez00, BgL_bgl_string7589za700za7za7_7996za7, "STATE-3-1178", 12 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datezd2ze3secondszd2envze3zz__datez00, BgL_bgl_za762dateza7d2za7e3sec7997za7, BGl_z62datezd2ze3secondsz53zz__datez00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string7750z00zz__datez00, BgL_bgl_string7750za700za7za7_7998za7, "iso8601-mm-grammar", 18 );
DEFINE_STRING( BGl_string7751z00zz__datez00, BgL_bgl_string7751za700za7za7_7999za7, "long", 4 );
DEFINE_STRING( BGl_string7752z00zz__datez00, BgL_bgl_string7752za700za7za7_8000za7, "iso8601-HH-grammar", 18 );
DEFINE_STRING( BGl_string7590z00zz__datez00, BgL_bgl_string7590za700za7za7_8001za7, "STATE-7-1182", 12 );
DEFINE_STRING( BGl_string7753z00zz__datez00, BgL_bgl_string7753za700za7za7_8002za7, "iso8601-DD-grammar", 18 );
DEFINE_STRING( BGl_string7591z00zz__datez00, BgL_bgl_string7591za700za7za7_8003za7, "STATE-2-1177", 12 );
DEFINE_STRING( BGl_string7754z00zz__datez00, BgL_bgl_string7754za700za7za7_8004za7, "iso8601-MM-grammar", 18 );
DEFINE_STRING( BGl_string7592z00zz__datez00, BgL_bgl_string7592za700za7za7_8005za7, "STATE-0-1175", 12 );
DEFINE_STRING( BGl_string7755z00zz__datez00, BgL_bgl_string7755za700za7za7_8006za7, "iso8601-grammar", 15 );
DEFINE_STRING( BGl_string7593z00zz__datez00, BgL_bgl_string7593za700za7za7_8007za7, "<@anonymous:1858>", 17 );
DEFINE_STRING( BGl_string7756z00zz__datez00, BgL_bgl_string7756za700za7za7_8008za7, "&iso8601-parse-date", 19 );
DEFINE_STRING( BGl_string7594z00zz__datez00, BgL_bgl_string7594za700za7za7_8009za7, "Illegal integer", 15 );
DEFINE_STRING( BGl_string7757z00zz__datez00, BgL_bgl_string7757za700za7za7_8010za7, "parse-error", 11 );
DEFINE_STRING( BGl_string7595z00zz__datez00, BgL_bgl_string7595za700za7za7_8011za7, "STATE-6-1172", 12 );
DEFINE_STRING( BGl_string7758z00zz__datez00, BgL_bgl_string7758za700za7za7_8012za7, "}", 1 );
DEFINE_STRING( BGl_string7596z00zz__datez00, BgL_bgl_string7596za700za7za7_8013za7, "STATE-4-1170", 12 );
DEFINE_STRING( BGl_string7759z00zz__datez00, BgL_bgl_string7759za700za7za7_8014za7, "{", 1 );
DEFINE_STRING( BGl_string7597z00zz__datez00, BgL_bgl_string7597za700za7za7_8015za7, "STATE-3-1169", 12 );
DEFINE_STRING( BGl_string7598z00zz__datez00, BgL_bgl_string7598za700za7za7_8016za7, "STATE-2-1168", 12 );
DEFINE_STRING( BGl_string7599z00zz__datez00, BgL_bgl_string7599za700za7za7_8017za7, "STATE-0-1166", 12 );
DEFINE_STRING( BGl_string7760z00zz__datez00, BgL_bgl_string7760za700za7za7_8018za7, "__date", 6 );

/* GC roots registration */
static obj_t bgl_gc_roots_register() {
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
void *roots_min = (void*)ULONG_MAX, *roots_max = 0;
ADD_ROOT( (void *)(&BGl_dayzd2ofzd2weekzd2grammarzd2zz__datez00) );
ADD_ROOT( (void *)(&BGl_keyword7645z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_keyword7647z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_keyword7649z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_symbol7605z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_symbol7607z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_symbol7609z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_keyword7651z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_keyword7653z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_keyword7655z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_keyword7657z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_keyword7659z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_za2timezd2za7onesza2z75zz__datez00) );
ADD_ROOT( (void *)(&BGl_symbol7612z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_symbol7614z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_symbol7617z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_symbol7619z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_keyword7661z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_symbol7622z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_symbol7624z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_symbol7627z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_keyword7670z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_symbol7630z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_symbol7633z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_symbol7636z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_symbol7639z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_symbol7483z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_symbol7486z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_symbol7489z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_symbol7492z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_symbol7495z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_symbol7498z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_symbol7663z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_symbol7672z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_symbol7678z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_monthzd2grammarzd2zz__datez00) );
ADD_ROOT( (void *)(&BGl_list7604z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_list7611z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_list7616z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_list7621z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_list7626z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_list7629z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_list7632z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_list7635z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_list7638z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_requirezd2initializa7ationz75zz__datez00) );
ADD_ROOT( (void *)(&BGl_timezd2grammarzd2zz__datez00) );
ADD_ROOT( (void *)(&BGl_list7481z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_list7644z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_list7482z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_list7485z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_list7488z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_list7491z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_list7494z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_list7497z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_list7669z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_list7677z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_thezd2fixnumzd2grammarz00zz__datez00) );
ADD_ROOT( (void *)(&BGl_symbol7501z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_symbol7504z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_symbol7507z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_za7onezd2grammarz75zz__datez00) );
ADD_ROOT( (void *)(&BGl_symbol7510z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_symbol7513z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_symbol7516z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_za2monthzd2lengthsza2zd2zz__datez00) );
ADD_ROOT( (void *)(&BGl_symbol7716z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_symbol7721z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_symbol7724z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_symbol7564z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_symbol7566z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_symbol7568z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_symbol7570z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_symbol7572z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_symbol7574z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_symbol7576z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_symbol7578z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_symbol7580z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_symbol7582z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_symbol7584z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_symbol7586z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_list7500z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_list7503z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_list7506z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_list7509z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_list7512z00zz__datez00) );
ADD_ROOT( (void *)(&BGl_list7515z00zz__datez00) );
#undef ADD_ROOT
if( roots_max > 0 ) GC_add_roots( roots_min, ((void **)roots_max) + 1 );
#endif
return BUNSPEC;
}



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__datez00(long BgL_checksumz00_13814, char * BgL_fromz00_13815)
{
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__datez00))
{ 
BGl_requirezd2initializa7ationz75zz__datez00 = 
BBOOL(((bool_t)0)); 
BGl_gczd2rootszd2initz00zz__datez00(); 
BGl_cnstzd2initzd2zz__datez00(); 
BGl_importedzd2moduleszd2initz00zz__datez00(); 
return 
BGl_toplevelzd2initzd2zz__datez00();}  else 
{ 
return BUNSPEC;} } 

}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__datez00()
{
{ /* Llib/date.scm 19 */
BGl_symbol7483z00zz__datez00 = 
bstring_to_symbol(BGl_string7484z00zz__datez00); 
BGl_list7482z00zz__datez00 = 
MAKE_YOUNG_PAIR(BGl_symbol7483z00zz__datez00, 
BINT(((long)-4))); 
BGl_symbol7486z00zz__datez00 = 
bstring_to_symbol(BGl_string7487z00zz__datez00); 
BGl_list7485z00zz__datez00 = 
MAKE_YOUNG_PAIR(BGl_symbol7486z00zz__datez00, 
BINT(((long)-5))); 
BGl_symbol7489z00zz__datez00 = 
bstring_to_symbol(BGl_string7490z00zz__datez00); 
BGl_list7488z00zz__datez00 = 
MAKE_YOUNG_PAIR(BGl_symbol7489z00zz__datez00, 
BINT(((long)-5))); 
BGl_symbol7492z00zz__datez00 = 
bstring_to_symbol(BGl_string7493z00zz__datez00); 
BGl_list7491z00zz__datez00 = 
MAKE_YOUNG_PAIR(BGl_symbol7492z00zz__datez00, 
BINT(((long)-6))); 
BGl_symbol7495z00zz__datez00 = 
bstring_to_symbol(BGl_string7496z00zz__datez00); 
BGl_list7494z00zz__datez00 = 
MAKE_YOUNG_PAIR(BGl_symbol7495z00zz__datez00, 
BINT(((long)-6))); 
BGl_symbol7498z00zz__datez00 = 
bstring_to_symbol(BGl_string7499z00zz__datez00); 
BGl_list7497z00zz__datez00 = 
MAKE_YOUNG_PAIR(BGl_symbol7498z00zz__datez00, 
BINT(((long)-7))); 
BGl_symbol7501z00zz__datez00 = 
bstring_to_symbol(BGl_string7502z00zz__datez00); 
BGl_list7500z00zz__datez00 = 
MAKE_YOUNG_PAIR(BGl_symbol7501z00zz__datez00, 
BINT(((long)-7))); 
BGl_symbol7504z00zz__datez00 = 
bstring_to_symbol(BGl_string7505z00zz__datez00); 
BGl_list7503z00zz__datez00 = 
MAKE_YOUNG_PAIR(BGl_symbol7504z00zz__datez00, 
BINT(((long)-8))); 
BGl_symbol7507z00zz__datez00 = 
bstring_to_symbol(BGl_string7508z00zz__datez00); 
BGl_list7506z00zz__datez00 = 
MAKE_YOUNG_PAIR(BGl_symbol7507z00zz__datez00, 
BINT(((long)2))); 
BGl_symbol7510z00zz__datez00 = 
bstring_to_symbol(BGl_string7511z00zz__datez00); 
BGl_list7509z00zz__datez00 = 
MAKE_YOUNG_PAIR(BGl_symbol7510z00zz__datez00, 
BINT(((long)0))); 
BGl_symbol7513z00zz__datez00 = 
bstring_to_symbol(BGl_string7514z00zz__datez00); 
BGl_list7512z00zz__datez00 = 
MAKE_YOUNG_PAIR(BGl_symbol7513z00zz__datez00, 
BINT(((long)0))); 
BGl_symbol7516z00zz__datez00 = 
bstring_to_symbol(BGl_string7517z00zz__datez00); 
BGl_list7515z00zz__datez00 = 
MAKE_YOUNG_PAIR(BGl_symbol7516z00zz__datez00, 
BINT(((long)1))); 
BGl_list7481z00zz__datez00 = 
MAKE_YOUNG_PAIR(BGl_list7482z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_list7485z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_list7488z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_list7491z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_list7494z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_list7497z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_list7500z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_list7503z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_list7506z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_list7509z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_list7512z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_list7515z00zz__datez00, BNIL)))))))))))); 
BGl_symbol7564z00zz__datez00 = 
bstring_to_symbol(BGl_string7565z00zz__datez00); 
BGl_symbol7566z00zz__datez00 = 
bstring_to_symbol(BGl_string7567z00zz__datez00); 
BGl_symbol7568z00zz__datez00 = 
bstring_to_symbol(BGl_string7569z00zz__datez00); 
BGl_symbol7570z00zz__datez00 = 
bstring_to_symbol(BGl_string7571z00zz__datez00); 
BGl_symbol7572z00zz__datez00 = 
bstring_to_symbol(BGl_string7573z00zz__datez00); 
BGl_symbol7574z00zz__datez00 = 
bstring_to_symbol(BGl_string7575z00zz__datez00); 
BGl_symbol7576z00zz__datez00 = 
bstring_to_symbol(BGl_string7577z00zz__datez00); 
BGl_symbol7578z00zz__datez00 = 
bstring_to_symbol(BGl_string7579z00zz__datez00); 
BGl_symbol7580z00zz__datez00 = 
bstring_to_symbol(BGl_string7581z00zz__datez00); 
BGl_symbol7582z00zz__datez00 = 
bstring_to_symbol(BGl_string7583z00zz__datez00); 
BGl_symbol7584z00zz__datez00 = 
bstring_to_symbol(BGl_string7585z00zz__datez00); 
BGl_symbol7586z00zz__datez00 = 
bstring_to_symbol(BGl_string7587z00zz__datez00); 
BGl_symbol7605z00zz__datez00 = 
bstring_to_symbol(BGl_string7606z00zz__datez00); 
BGl_symbol7607z00zz__datez00 = 
bstring_to_symbol(BGl_string7608z00zz__datez00); 
BGl_symbol7609z00zz__datez00 = 
bstring_to_symbol(BGl_string7610z00zz__datez00); 
BGl_list7604z00zz__datez00 = 
MAKE_YOUNG_PAIR(BGl_symbol7605z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_symbol7607z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_symbol7607z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_symbol7609z00zz__datez00, BNIL)))); 
BGl_symbol7612z00zz__datez00 = 
bstring_to_symbol(BGl_string7613z00zz__datez00); 
BGl_symbol7614z00zz__datez00 = 
bstring_to_symbol(BGl_string7615z00zz__datez00); 
BGl_list7611z00zz__datez00 = 
MAKE_YOUNG_PAIR(BGl_symbol7605z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_symbol7612z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_symbol7612z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_symbol7614z00zz__datez00, BNIL)))); 
BGl_symbol7617z00zz__datez00 = 
bstring_to_symbol(BGl_string7618z00zz__datez00); 
BGl_symbol7619z00zz__datez00 = 
bstring_to_symbol(BGl_string7620z00zz__datez00); 
BGl_list7616z00zz__datez00 = 
MAKE_YOUNG_PAIR(BGl_symbol7605z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_symbol7617z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_symbol7617z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_symbol7619z00zz__datez00, BNIL)))); 
BGl_symbol7622z00zz__datez00 = 
bstring_to_symbol(BGl_string7623z00zz__datez00); 
BGl_symbol7624z00zz__datez00 = 
bstring_to_symbol(BGl_string7625z00zz__datez00); 
BGl_list7621z00zz__datez00 = 
MAKE_YOUNG_PAIR(BGl_symbol7605z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_symbol7622z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_symbol7622z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_symbol7624z00zz__datez00, BNIL)))); 
BGl_symbol7627z00zz__datez00 = 
bstring_to_symbol(BGl_string7628z00zz__datez00); 
BGl_list7626z00zz__datez00 = 
MAKE_YOUNG_PAIR(BGl_symbol7605z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_symbol7612z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_symbol7612z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_symbol7627z00zz__datez00, BNIL)))); 
BGl_symbol7630z00zz__datez00 = 
bstring_to_symbol(BGl_string7631z00zz__datez00); 
BGl_list7629z00zz__datez00 = 
MAKE_YOUNG_PAIR(BGl_symbol7605z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_symbol7607z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_symbol7607z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_symbol7630z00zz__datez00, BNIL)))); 
BGl_symbol7633z00zz__datez00 = 
bstring_to_symbol(BGl_string7634z00zz__datez00); 
BGl_list7632z00zz__datez00 = 
MAKE_YOUNG_PAIR(BGl_symbol7605z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_symbol7612z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_symbol7612z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_symbol7633z00zz__datez00, BNIL)))); 
BGl_symbol7636z00zz__datez00 = 
bstring_to_symbol(BGl_string7637z00zz__datez00); 
BGl_list7635z00zz__datez00 = 
MAKE_YOUNG_PAIR(BGl_symbol7605z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_symbol7617z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_symbol7617z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_symbol7636z00zz__datez00, BNIL)))); 
BGl_symbol7639z00zz__datez00 = 
bstring_to_symbol(BGl_string7640z00zz__datez00); 
BGl_list7638z00zz__datez00 = 
MAKE_YOUNG_PAIR(BGl_symbol7605z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_symbol7622z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_symbol7622z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_symbol7639z00zz__datez00, BNIL)))); 
BGl_keyword7645z00zz__datez00 = 
bstring_to_keyword(BGl_string7646z00zz__datez00); 
BGl_keyword7647z00zz__datez00 = 
bstring_to_keyword(BGl_string7648z00zz__datez00); 
BGl_keyword7649z00zz__datez00 = 
bstring_to_keyword(BGl_string7650z00zz__datez00); 
BGl_keyword7651z00zz__datez00 = 
bstring_to_keyword(BGl_string7652z00zz__datez00); 
BGl_keyword7653z00zz__datez00 = 
bstring_to_keyword(BGl_string7654z00zz__datez00); 
BGl_keyword7655z00zz__datez00 = 
bstring_to_keyword(BGl_string7656z00zz__datez00); 
BGl_keyword7657z00zz__datez00 = 
bstring_to_keyword(BGl_string7658z00zz__datez00); 
BGl_keyword7659z00zz__datez00 = 
bstring_to_keyword(BGl_string7660z00zz__datez00); 
BGl_keyword7661z00zz__datez00 = 
bstring_to_keyword(BGl_string7662z00zz__datez00); 
BGl_list7644z00zz__datez00 = 
MAKE_YOUNG_PAIR(BGl_keyword7645z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_keyword7647z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_keyword7649z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_keyword7651z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_keyword7653z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_keyword7655z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_keyword7657z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_keyword7659z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_keyword7661z00zz__datez00, BNIL))))))))); 
BGl_symbol7663z00zz__datez00 = 
bstring_to_symbol(BGl_string7664z00zz__datez00); 
BGl_keyword7670z00zz__datez00 = 
bstring_to_keyword(BGl_string7671z00zz__datez00); 
BGl_list7669z00zz__datez00 = 
MAKE_YOUNG_PAIR(BGl_keyword7645z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_keyword7649z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_keyword7670z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_keyword7651z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_keyword7653z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_keyword7655z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_keyword7657z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_keyword7659z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_keyword7661z00zz__datez00, BNIL))))))))); 
BGl_symbol7672z00zz__datez00 = 
bstring_to_symbol(BGl_string7673z00zz__datez00); 
BGl_list7677z00zz__datez00 = 
MAKE_YOUNG_PAIR(BGl_keyword7645z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_keyword7649z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_keyword7651z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_keyword7653z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_keyword7655z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_keyword7657z00zz__datez00, 
MAKE_YOUNG_PAIR(BGl_keyword7661z00zz__datez00, BNIL))))))); 
BGl_symbol7678z00zz__datez00 = 
bstring_to_symbol(BGl_string7679z00zz__datez00); 
BGl_symbol7716z00zz__datez00 = 
bstring_to_symbol(BGl_string7717z00zz__datez00); 
BGl_symbol7721z00zz__datez00 = 
bstring_to_symbol(BGl_string7722z00zz__datez00); 
return ( 
BGl_symbol7724z00zz__datez00 = 
bstring_to_symbol(BGl_string7725z00zz__datez00), BUNSPEC) ;} 

}



/* gc-roots-init */
obj_t BGl_gczd2rootszd2initz00zz__datez00()
{
{ /* Llib/date.scm 19 */
return 
bgl_gc_roots_register();} 

}



/* toplevel-init */
obj_t BGl_toplevelzd2initzd2zz__datez00()
{
{ /* Llib/date.scm 19 */
{ /* Llib/date.scm 676 */
obj_t BgL_arg1436z00_1217;
{ /* Llib/date.scm 676 */
obj_t BgL_arg1437z00_1218;
{ /* Llib/date.scm 676 */
obj_t BgL_arg1438z00_1219;
{ /* Llib/date.scm 676 */
obj_t BgL_arg1439z00_1220;
{ /* Llib/date.scm 676 */
obj_t BgL_arg1440z00_1221;
{ /* Llib/date.scm 676 */
obj_t BgL_arg1441z00_1222;
{ /* Llib/date.scm 676 */
obj_t BgL_arg1442z00_1223;
{ /* Llib/date.scm 676 */
obj_t BgL_arg1443z00_1224;
{ /* Llib/date.scm 676 */
obj_t BgL_arg1444z00_1225;
{ /* Llib/date.scm 676 */
obj_t BgL_arg1445z00_1226;
{ /* Llib/date.scm 676 */
obj_t BgL_arg1446z00_1227;
{ /* Llib/date.scm 676 */
obj_t BgL_arg1448z00_1228;
BgL_arg1448z00_1228 = 
MAKE_YOUNG_PAIR(
BINT(((long)31)), BNIL); 
BgL_arg1446z00_1227 = 
MAKE_YOUNG_PAIR(
BINT(((long)30)), BgL_arg1448z00_1228); } 
BgL_arg1445z00_1226 = 
MAKE_YOUNG_PAIR(
BINT(((long)31)), BgL_arg1446z00_1227); } 
BgL_arg1444z00_1225 = 
MAKE_YOUNG_PAIR(
BINT(((long)30)), BgL_arg1445z00_1226); } 
BgL_arg1443z00_1224 = 
MAKE_YOUNG_PAIR(
BINT(((long)31)), BgL_arg1444z00_1225); } 
BgL_arg1442z00_1223 = 
MAKE_YOUNG_PAIR(
BINT(((long)31)), BgL_arg1443z00_1224); } 
BgL_arg1441z00_1222 = 
MAKE_YOUNG_PAIR(
BINT(((long)30)), BgL_arg1442z00_1223); } 
BgL_arg1440z00_1221 = 
MAKE_YOUNG_PAIR(
BINT(((long)31)), BgL_arg1441z00_1222); } 
BgL_arg1439z00_1220 = 
MAKE_YOUNG_PAIR(
BINT(((long)30)), BgL_arg1440z00_1221); } 
BgL_arg1438z00_1219 = 
MAKE_YOUNG_PAIR(
BINT(((long)31)), BgL_arg1439z00_1220); } 
BgL_arg1437z00_1218 = 
MAKE_YOUNG_PAIR(
BINT(((long)28)), BgL_arg1438z00_1219); } 
BgL_arg1436z00_1217 = 
MAKE_YOUNG_PAIR(
BINT(((long)31)), BgL_arg1437z00_1218); } 
BGl_za2monthzd2lengthsza2zd2zz__datez00 = 
BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(BgL_arg1436z00_1217); } 
{ /* Llib/date.scm 980 */
obj_t BgL_zc3z04anonymousza31449ze3z87_11319;
{ 
int BgL_tmpz00_14000;
BgL_tmpz00_14000 = 
(int)(((long)0)); 
BgL_zc3z04anonymousza31449ze3z87_11319 = 
MAKE_EL_PROCEDURE(BgL_tmpz00_14000); } 
BGl_dayzd2ofzd2weekzd2grammarzd2zz__datez00 = BgL_zc3z04anonymousza31449ze3z87_11319; } 
BGl_thezd2fixnumzd2grammarz00zz__datez00 = BGl_proc7478z00zz__datez00; 
BGl_monthzd2grammarzd2zz__datez00 = BGl_proc7479z00zz__datez00; 
BGl_timezd2grammarzd2zz__datez00 = BGl_proc7480z00zz__datez00; 
BGl_za2timezd2za7onesza2z75zz__datez00 = BGl_list7481z00zz__datez00; 
return ( 
BGl_za7onezd2grammarz75zz__datez00 = BGl_proc7518z00zz__datez00, BUNSPEC) ;} 

}



/* &<@anonymous:2352> */
obj_t BGl_z62zc3z04anonymousza32352ze3ze5zz__datez00(obj_t BgL_envz00_11320, obj_t BgL_iportz00_11321)
{
{ /* Llib/date.scm 1122 */
{ 
obj_t BgL_iportz00_12863;long BgL_lastzd2matchzd2_12864;long BgL_forwardz00_12865;long BgL_bufposz00_12866;obj_t BgL_iportz00_12845;long BgL_lastzd2matchzd2_12846;long BgL_forwardz00_12847;long BgL_bufposz00_12848;obj_t BgL_iportz00_12827;long BgL_lastzd2matchzd2_12828;long BgL_forwardz00_12829;long BgL_bufposz00_12830;obj_t BgL_iportz00_12809;long BgL_lastzd2matchzd2_12810;long BgL_forwardz00_12811;long BgL_bufposz00_12812;obj_t BgL_iportz00_12791;long BgL_lastzd2matchzd2_12792;long BgL_forwardz00_12793;long BgL_bufposz00_12794;obj_t BgL_iportz00_12772;long BgL_lastzd2matchzd2_12773;long BgL_forwardz00_12774;long BgL_bufposz00_12775;obj_t BgL_iportz00_12757;long BgL_lastzd2matchzd2_12758;long BgL_forwardz00_12759;long BgL_bufposz00_12760;obj_t BgL_iportz00_12739;long BgL_lastzd2matchzd2_12740;long BgL_forwardz00_12741;long BgL_bufposz00_12742;obj_t BgL_iportz00_12724;long BgL_lastzd2matchzd2_12725;long BgL_forwardz00_12726;long BgL_bufposz00_12727;obj_t BgL_iportz00_12709;long BgL_lastzd2matchzd2_12710;long BgL_forwardz00_12711;long BgL_bufposz00_12712;obj_t BgL_iportz00_12687;long BgL_lastzd2matchzd2_12688;long BgL_forwardz00_12689;long BgL_bufposz00_12690;obj_t BgL_iportz00_12668;long BgL_lastzd2matchzd2_12669;long BgL_forwardz00_12670;long BgL_bufposz00_12671;obj_t BgL_iportz00_12650;long BgL_lastzd2matchzd2_12651;long BgL_forwardz00_12652;long BgL_bufposz00_12653;
{ /* Llib/date.scm 1122 */
bool_t BgL_test8020z00_14003;
{ /* Llib/date.scm 1122 */
obj_t BgL_arg2357z00_12878;
{ /* Llib/date.scm 1122 */
obj_t BgL_res5461z00_12879;
if(
INPUT_PORTP(BgL_iportz00_11321))
{ /* Llib/date.scm 1122 */
BgL_res5461z00_12879 = BgL_iportz00_11321; }  else 
{ 
obj_t BgL_auxz00_14006;
BgL_auxz00_14006 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7541z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11321); 
FAILURE(BgL_auxz00_14006,BFALSE,BFALSE);} 
BgL_arg2357z00_12878 = BgL_res5461z00_12879; } 
{ /* Llib/date.scm 1122 */
bool_t BgL_res5462z00_12880;
BgL_res5462z00_12880 = 
INPUT_PORT_CLOSEP(BgL_arg2357z00_12878); 
BgL_test8020z00_14003 = BgL_res5462z00_12880; } } 
if(BgL_test8020z00_14003)
{ /* Llib/date.scm 1122 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_arg2353z00_12881;
{ /* Llib/date.scm 1122 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_new1077z00_12882;
{ /* Llib/date.scm 1122 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_new1076z00_12883;
BgL_new1076z00_12883 = 
((BgL_z62iozd2closedzd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2closedzd2errorz62_bgl) ))); 
{ /* Llib/date.scm 1122 */
long BgL_arg2356z00_12884;
{ /* Llib/date.scm 1122 */
long BgL_res5463z00_12885;
BgL_res5463z00_12885 = 
BGL_CLASS_INDEX(BGl_z62iozd2closedzd2errorz62zz__objectz00); 
BgL_arg2356z00_12884 = BgL_res5463z00_12885; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1076z00_12883), BgL_arg2356z00_12884); } 
BgL_new1077z00_12882 = BgL_new1076z00_12883; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1077z00_12882)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1077z00_12882)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_14019;
{ /* Llib/date.scm 1122 */
obj_t BgL_arg2354z00_12886;
{ /* Llib/date.scm 1122 */
obj_t BgL_arg2355z00_12887;
{ /* Llib/date.scm 1122 */
obj_t BgL_res5464z00_12888;
{ /* Llib/date.scm 1122 */
obj_t BgL_classz00_12889;
BgL_classz00_12889 = BGl_z62iozd2closedzd2errorz62zz__objectz00; 
BgL_res5464z00_12888 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_12889); } 
BgL_arg2355z00_12887 = BgL_res5464z00_12888; } 
BgL_arg2354z00_12886 = 
VECTOR_REF(BgL_arg2355z00_12887,((long)2)); } 
{ /* Llib/date.scm 1122 */
obj_t BgL_auxz00_14023;
if(
BGl_classzd2fieldzf3z21zz__objectz00(BgL_arg2354z00_12886))
{ /* Llib/date.scm 1122 */
BgL_auxz00_14023 = BgL_arg2354z00_12886
; }  else 
{ 
obj_t BgL_auxz00_14026;
BgL_auxz00_14026 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7541z00zz__datez00, BGl_string7542z00zz__datez00, BgL_arg2354z00_12886); 
FAILURE(BgL_auxz00_14026,BFALSE,BFALSE);} 
BgL_auxz00_14019 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_auxz00_14023); } } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1077z00_12882)))->BgL_stackz00)=((obj_t)BgL_auxz00_14019),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1077z00_12882)))->BgL_procz00)=((obj_t)BGl_string7525z00zz__datez00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1077z00_12882)))->BgL_msgz00)=((obj_t)BGl_string7543z00zz__datez00),BUNSPEC); 
{ 
obj_t BgL_auxz00_14036;
{ /* Llib/date.scm 1122 */
obj_t BgL_res5465z00_12890;
if(
INPUT_PORTP(BgL_iportz00_11321))
{ /* Llib/date.scm 1122 */
BgL_res5465z00_12890 = BgL_iportz00_11321; }  else 
{ 
obj_t BgL_auxz00_14040;
BgL_auxz00_14040 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7541z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11321); 
FAILURE(BgL_auxz00_14040,BFALSE,BFALSE);} 
BgL_auxz00_14036 = BgL_res5465z00_12890; } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1077z00_12882)))->BgL_objz00)=((obj_t)BgL_auxz00_14036),BUNSPEC); } 
BgL_arg2353z00_12881 = BgL_new1077z00_12882; } 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg2353z00_12881));}  else 
{ /* Llib/date.scm 1122 */
BgL_ignorez00_12556:
{ /* Llib/date.scm 1122 */
long BgL_res5404z00_12571;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12572;
if(
INPUT_PORTP(BgL_iportz00_11321))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12572 = BgL_iportz00_11321; }  else 
{ 
obj_t BgL_auxz00_14049;
BgL_auxz00_14049 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11321); 
FAILURE(BgL_auxz00_14049,BFALSE,BFALSE);} 
BgL_res5404z00_12571 = 
RGC_START_MATCH(BgL_inputzd2portzd2_12572); } BgL_res5404z00_12571; } 
{ /* Llib/date.scm 1122 */
long BgL_matchz00_12573;
{ /* Llib/date.scm 1122 */
long BgL_arg2658z00_12574;long BgL_arg2659z00_12575;
{ /* Llib/date.scm 1122 */
long BgL_res5405z00_12576;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12577;
if(
INPUT_PORTP(BgL_iportz00_11321))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12577 = BgL_iportz00_11321; }  else 
{ 
obj_t BgL_auxz00_14056;
BgL_auxz00_14056 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11321); 
FAILURE(BgL_auxz00_14056,BFALSE,BFALSE);} 
BgL_res5405z00_12576 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_12577); } 
BgL_arg2658z00_12574 = BgL_res5405z00_12576; } 
{ /* Llib/date.scm 1122 */
long BgL_res5406z00_12578;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12579;
if(
INPUT_PORTP(BgL_iportz00_11321))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12579 = BgL_iportz00_11321; }  else 
{ 
obj_t BgL_auxz00_14063;
BgL_auxz00_14063 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11321); 
FAILURE(BgL_auxz00_14063,BFALSE,BFALSE);} 
BgL_res5406z00_12578 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_12579); } 
BgL_arg2659z00_12575 = BgL_res5406z00_12578; } 
BgL_iportz00_12772 = BgL_iportz00_11321; 
BgL_lastzd2matchzd2_12773 = ((long)5); 
BgL_forwardz00_12774 = BgL_arg2658z00_12574; 
BgL_bufposz00_12775 = BgL_arg2659z00_12575; 
BgL_statezd20zd21209z00_12565:
if(
(BgL_forwardz00_12774==BgL_bufposz00_12775))
{ /* Llib/date.scm 1122 */
bool_t BgL_test8028z00_14070;
{ /* Llib/date.scm 1122 */
bool_t BgL_res5312z00_12776;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12777;
if(
INPUT_PORTP(BgL_iportz00_12772))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12777 = BgL_iportz00_12772; }  else 
{ 
obj_t BgL_auxz00_14073;
BgL_auxz00_14073 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7535z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12772); 
FAILURE(BgL_auxz00_14073,BFALSE,BFALSE);} 
BgL_res5312z00_12776 = 
rgc_fill_buffer(BgL_inputzd2portzd2_12777); } 
BgL_test8028z00_14070 = BgL_res5312z00_12776; } 
if(BgL_test8028z00_14070)
{ /* Llib/date.scm 1122 */
long BgL_arg2409z00_12778;long BgL_arg2411z00_12779;
{ /* Llib/date.scm 1122 */
long BgL_res5313z00_12780;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12781;
if(
INPUT_PORTP(BgL_iportz00_12772))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12781 = BgL_iportz00_12772; }  else 
{ 
obj_t BgL_auxz00_14080;
BgL_auxz00_14080 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7535z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12772); 
FAILURE(BgL_auxz00_14080,BFALSE,BFALSE);} 
BgL_res5313z00_12780 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_12781); } 
BgL_arg2409z00_12778 = BgL_res5313z00_12780; } 
{ /* Llib/date.scm 1122 */
long BgL_res5314z00_12782;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12783;
if(
INPUT_PORTP(BgL_iportz00_12772))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12783 = BgL_iportz00_12772; }  else 
{ 
obj_t BgL_auxz00_14087;
BgL_auxz00_14087 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7535z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12772); 
FAILURE(BgL_auxz00_14087,BFALSE,BFALSE);} 
BgL_res5314z00_12782 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_12783); } 
BgL_arg2411z00_12779 = BgL_res5314z00_12782; } 
{ 
long BgL_bufposz00_14093;long BgL_forwardz00_14092;
BgL_forwardz00_14092 = BgL_arg2409z00_12778; 
BgL_bufposz00_14093 = BgL_arg2411z00_12779; 
BgL_bufposz00_12775 = BgL_bufposz00_14093; 
BgL_forwardz00_12774 = BgL_forwardz00_14092; 
goto BgL_statezd20zd21209z00_12565;} }  else 
{ /* Llib/date.scm 1122 */
BgL_matchz00_12573 = BgL_lastzd2matchzd2_12773; } }  else 
{ /* Llib/date.scm 1122 */
int BgL_curz00_12784;
{ /* Llib/date.scm 1122 */
int BgL_res5315z00_12785;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12786;
if(
INPUT_PORTP(BgL_iportz00_12772))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12786 = BgL_iportz00_12772; }  else 
{ 
obj_t BgL_auxz00_14096;
BgL_auxz00_14096 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7535z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12772); 
FAILURE(BgL_auxz00_14096,BFALSE,BFALSE);} 
BgL_res5315z00_12785 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_12786, BgL_forwardz00_12774); } 
BgL_curz00_12784 = BgL_res5315z00_12785; } 
{ /* Llib/date.scm 1122 */

{ /* Llib/date.scm 1122 */
bool_t BgL_test8033z00_14101;
{ /* Llib/date.scm 1122 */
bool_t BgL_test8034z00_14102;
if(
(
(long)(BgL_curz00_12784)>=((long)65)))
{ /* Llib/date.scm 1122 */
BgL_test8034z00_14102 = 
(
(long)(BgL_curz00_12784)<((long)91))
; }  else 
{ /* Llib/date.scm 1122 */
BgL_test8034z00_14102 = ((bool_t)0)
; } 
if(BgL_test8034z00_14102)
{ /* Llib/date.scm 1122 */
BgL_test8033z00_14101 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1122 */
if(
(
(long)(BgL_curz00_12784)>=((long)97)))
{ /* Llib/date.scm 1122 */
BgL_test8033z00_14101 = 
(
(long)(BgL_curz00_12784)<((long)123))
; }  else 
{ /* Llib/date.scm 1122 */
BgL_test8033z00_14101 = ((bool_t)0)
; } } } 
if(BgL_test8033z00_14101)
{ /* Llib/date.scm 1122 */
BgL_iportz00_12845 = BgL_iportz00_12772; 
BgL_lastzd2matchzd2_12846 = BgL_lastzd2matchzd2_12773; 
BgL_forwardz00_12847 = 
(((long)1)+BgL_forwardz00_12774); 
BgL_bufposz00_12848 = BgL_bufposz00_12775; 
BgL_statezd25zd21214z00_12569:
{ /* Llib/date.scm 1122 */
long BgL_newzd2matchzd2_12849;
{ /* Llib/date.scm 1122 */
long BgL_res5268z00_12850;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12851;
if(
INPUT_PORTP(BgL_iportz00_12845))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12851 = BgL_iportz00_12845; }  else 
{ 
obj_t BgL_auxz00_14115;
BgL_auxz00_14115 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7539z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12845); 
FAILURE(BgL_auxz00_14115,BFALSE,BFALSE);} 
BgL_res5268z00_12850 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_12851, BgL_forwardz00_12847); } BgL_res5268z00_12850; } 
BgL_newzd2matchzd2_12849 = ((long)5); 
if(
(BgL_forwardz00_12847==BgL_bufposz00_12848))
{ /* Llib/date.scm 1122 */
bool_t BgL_test8039z00_14122;
{ /* Llib/date.scm 1122 */
bool_t BgL_res5270z00_12852;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12853;
if(
INPUT_PORTP(BgL_iportz00_12845))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12853 = BgL_iportz00_12845; }  else 
{ 
obj_t BgL_auxz00_14125;
BgL_auxz00_14125 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7539z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12845); 
FAILURE(BgL_auxz00_14125,BFALSE,BFALSE);} 
BgL_res5270z00_12852 = 
rgc_fill_buffer(BgL_inputzd2portzd2_12853); } 
BgL_test8039z00_14122 = BgL_res5270z00_12852; } 
if(BgL_test8039z00_14122)
{ /* Llib/date.scm 1122 */
long BgL_arg2369z00_12854;long BgL_arg2370z00_12855;
{ /* Llib/date.scm 1122 */
long BgL_res5271z00_12856;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12857;
if(
INPUT_PORTP(BgL_iportz00_12845))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12857 = BgL_iportz00_12845; }  else 
{ 
obj_t BgL_auxz00_14132;
BgL_auxz00_14132 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7539z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12845); 
FAILURE(BgL_auxz00_14132,BFALSE,BFALSE);} 
BgL_res5271z00_12856 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_12857); } 
BgL_arg2369z00_12854 = BgL_res5271z00_12856; } 
{ /* Llib/date.scm 1122 */
long BgL_res5272z00_12858;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12859;
if(
INPUT_PORTP(BgL_iportz00_12845))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12859 = BgL_iportz00_12845; }  else 
{ 
obj_t BgL_auxz00_14139;
BgL_auxz00_14139 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7539z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12845); 
FAILURE(BgL_auxz00_14139,BFALSE,BFALSE);} 
BgL_res5272z00_12858 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_12859); } 
BgL_arg2370z00_12855 = BgL_res5272z00_12858; } 
{ 
long BgL_bufposz00_14145;long BgL_forwardz00_14144;
BgL_forwardz00_14144 = BgL_arg2369z00_12854; 
BgL_bufposz00_14145 = BgL_arg2370z00_12855; 
BgL_bufposz00_12848 = BgL_bufposz00_14145; 
BgL_forwardz00_12847 = BgL_forwardz00_14144; 
goto BgL_statezd25zd21214z00_12569;} }  else 
{ /* Llib/date.scm 1122 */
BgL_matchz00_12573 = BgL_newzd2matchzd2_12849; } }  else 
{ /* Llib/date.scm 1122 */
int BgL_curz00_12860;
{ /* Llib/date.scm 1122 */
int BgL_res5273z00_12861;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12862;
if(
INPUT_PORTP(BgL_iportz00_12845))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12862 = BgL_iportz00_12845; }  else 
{ 
obj_t BgL_auxz00_14148;
BgL_auxz00_14148 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7539z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12845); 
FAILURE(BgL_auxz00_14148,BFALSE,BFALSE);} 
BgL_res5273z00_12861 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_12862, BgL_forwardz00_12847); } 
BgL_curz00_12860 = BgL_res5273z00_12861; } 
{ /* Llib/date.scm 1122 */

{ /* Llib/date.scm 1122 */
bool_t BgL_test8044z00_14153;
{ /* Llib/date.scm 1122 */
bool_t BgL_test8045z00_14154;
if(
(
(long)(BgL_curz00_12860)>=((long)65)))
{ /* Llib/date.scm 1122 */
BgL_test8045z00_14154 = 
(
(long)(BgL_curz00_12860)<((long)91))
; }  else 
{ /* Llib/date.scm 1122 */
BgL_test8045z00_14154 = ((bool_t)0)
; } 
if(BgL_test8045z00_14154)
{ /* Llib/date.scm 1122 */
BgL_test8044z00_14153 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1122 */
if(
(
(long)(BgL_curz00_12860)>=((long)97)))
{ /* Llib/date.scm 1122 */
BgL_test8044z00_14153 = 
(
(long)(BgL_curz00_12860)<((long)123))
; }  else 
{ /* Llib/date.scm 1122 */
BgL_test8044z00_14153 = ((bool_t)0)
; } } } 
if(BgL_test8044z00_14153)
{ /* Llib/date.scm 1122 */
BgL_iportz00_12809 = BgL_iportz00_12845; 
BgL_lastzd2matchzd2_12810 = BgL_newzd2matchzd2_12849; 
BgL_forwardz00_12811 = 
(((long)1)+BgL_forwardz00_12847); 
BgL_bufposz00_12812 = BgL_bufposz00_12848; 
BgL_statezd26zd21215z00_12567:
{ /* Llib/date.scm 1122 */
long BgL_newzd2matchzd2_12813;
{ /* Llib/date.scm 1122 */
long BgL_res5288z00_12814;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12815;
if(
INPUT_PORTP(BgL_iportz00_12809))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12815 = BgL_iportz00_12809; }  else 
{ 
obj_t BgL_auxz00_14167;
BgL_auxz00_14167 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7537z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12809); 
FAILURE(BgL_auxz00_14167,BFALSE,BFALSE);} 
BgL_res5288z00_12814 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_12815, BgL_forwardz00_12811); } BgL_res5288z00_12814; } 
BgL_newzd2matchzd2_12813 = ((long)4); 
if(
(BgL_forwardz00_12811==BgL_bufposz00_12812))
{ /* Llib/date.scm 1122 */
bool_t BgL_test8050z00_14174;
{ /* Llib/date.scm 1122 */
bool_t BgL_res5290z00_12816;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12817;
if(
INPUT_PORTP(BgL_iportz00_12809))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12817 = BgL_iportz00_12809; }  else 
{ 
obj_t BgL_auxz00_14177;
BgL_auxz00_14177 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7537z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12809); 
FAILURE(BgL_auxz00_14177,BFALSE,BFALSE);} 
BgL_res5290z00_12816 = 
rgc_fill_buffer(BgL_inputzd2portzd2_12817); } 
BgL_test8050z00_14174 = BgL_res5290z00_12816; } 
if(BgL_test8050z00_14174)
{ /* Llib/date.scm 1122 */
long BgL_arg2388z00_12818;long BgL_arg2389z00_12819;
{ /* Llib/date.scm 1122 */
long BgL_res5291z00_12820;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12821;
if(
INPUT_PORTP(BgL_iportz00_12809))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12821 = BgL_iportz00_12809; }  else 
{ 
obj_t BgL_auxz00_14184;
BgL_auxz00_14184 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7537z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12809); 
FAILURE(BgL_auxz00_14184,BFALSE,BFALSE);} 
BgL_res5291z00_12820 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_12821); } 
BgL_arg2388z00_12818 = BgL_res5291z00_12820; } 
{ /* Llib/date.scm 1122 */
long BgL_res5292z00_12822;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12823;
if(
INPUT_PORTP(BgL_iportz00_12809))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12823 = BgL_iportz00_12809; }  else 
{ 
obj_t BgL_auxz00_14191;
BgL_auxz00_14191 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7537z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12809); 
FAILURE(BgL_auxz00_14191,BFALSE,BFALSE);} 
BgL_res5292z00_12822 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_12823); } 
BgL_arg2389z00_12819 = BgL_res5292z00_12822; } 
{ 
long BgL_bufposz00_14197;long BgL_forwardz00_14196;
BgL_forwardz00_14196 = BgL_arg2388z00_12818; 
BgL_bufposz00_14197 = BgL_arg2389z00_12819; 
BgL_bufposz00_12812 = BgL_bufposz00_14197; 
BgL_forwardz00_12811 = BgL_forwardz00_14196; 
goto BgL_statezd26zd21215z00_12567;} }  else 
{ /* Llib/date.scm 1122 */
BgL_matchz00_12573 = BgL_newzd2matchzd2_12813; } }  else 
{ /* Llib/date.scm 1122 */
int BgL_curz00_12824;
{ /* Llib/date.scm 1122 */
int BgL_res5293z00_12825;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12826;
if(
INPUT_PORTP(BgL_iportz00_12809))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12826 = BgL_iportz00_12809; }  else 
{ 
obj_t BgL_auxz00_14200;
BgL_auxz00_14200 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7537z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12809); 
FAILURE(BgL_auxz00_14200,BFALSE,BFALSE);} 
BgL_res5293z00_12825 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_12826, BgL_forwardz00_12811); } 
BgL_curz00_12824 = BgL_res5293z00_12825; } 
{ /* Llib/date.scm 1122 */

{ /* Llib/date.scm 1122 */
bool_t BgL_test8055z00_14205;
{ /* Llib/date.scm 1122 */
bool_t BgL_test8056z00_14206;
if(
(
(long)(BgL_curz00_12824)>=((long)65)))
{ /* Llib/date.scm 1122 */
BgL_test8056z00_14206 = 
(
(long)(BgL_curz00_12824)<((long)91))
; }  else 
{ /* Llib/date.scm 1122 */
BgL_test8056z00_14206 = ((bool_t)0)
; } 
if(BgL_test8056z00_14206)
{ /* Llib/date.scm 1122 */
BgL_test8055z00_14205 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1122 */
if(
(
(long)(BgL_curz00_12824)>=((long)97)))
{ /* Llib/date.scm 1122 */
BgL_test8055z00_14205 = 
(
(long)(BgL_curz00_12824)<((long)123))
; }  else 
{ /* Llib/date.scm 1122 */
BgL_test8055z00_14205 = ((bool_t)0)
; } } } 
if(BgL_test8055z00_14205)
{ 
long BgL_forwardz00_14218;long BgL_lastzd2matchzd2_14217;
BgL_lastzd2matchzd2_14217 = BgL_newzd2matchzd2_12813; 
BgL_forwardz00_14218 = 
(((long)1)+BgL_forwardz00_12811); 
BgL_forwardz00_12811 = BgL_forwardz00_14218; 
BgL_lastzd2matchzd2_12810 = BgL_lastzd2matchzd2_14217; 
goto BgL_statezd26zd21215z00_12567;}  else 
{ /* Llib/date.scm 1122 */
BgL_matchz00_12573 = BgL_newzd2matchzd2_12813; } } } } } }  else 
{ /* Llib/date.scm 1122 */
BgL_matchz00_12573 = BgL_newzd2matchzd2_12849; } } } } } }  else 
{ /* Llib/date.scm 1122 */
if(
(
(long)(BgL_curz00_12784)==((long)45)))
{ /* Llib/date.scm 1122 */
BgL_iportz00_12739 = BgL_iportz00_12772; 
BgL_lastzd2matchzd2_12740 = BgL_lastzd2matchzd2_12773; 
BgL_forwardz00_12741 = 
(((long)1)+BgL_forwardz00_12774); 
BgL_bufposz00_12742 = BgL_bufposz00_12775; 
BgL_statezd24zd21213z00_12563:
{ /* Llib/date.scm 1122 */
long BgL_newzd2matchzd2_12743;
{ /* Llib/date.scm 1122 */
long BgL_res5340z00_12744;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12745;
if(
INPUT_PORTP(BgL_iportz00_12739))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12745 = BgL_iportz00_12739; }  else 
{ 
obj_t BgL_auxz00_14227;
BgL_auxz00_14227 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7533z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12739); 
FAILURE(BgL_auxz00_14227,BFALSE,BFALSE);} 
BgL_res5340z00_12744 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_12745, BgL_forwardz00_12741); } BgL_res5340z00_12744; } 
BgL_newzd2matchzd2_12743 = ((long)5); 
if(
(BgL_forwardz00_12741==BgL_bufposz00_12742))
{ /* Llib/date.scm 1122 */
bool_t BgL_test8062z00_14234;
{ /* Llib/date.scm 1122 */
bool_t BgL_res5342z00_12746;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12747;
if(
INPUT_PORTP(BgL_iportz00_12739))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12747 = BgL_iportz00_12739; }  else 
{ 
obj_t BgL_auxz00_14237;
BgL_auxz00_14237 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7533z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12739); 
FAILURE(BgL_auxz00_14237,BFALSE,BFALSE);} 
BgL_res5342z00_12746 = 
rgc_fill_buffer(BgL_inputzd2portzd2_12747); } 
BgL_test8062z00_14234 = BgL_res5342z00_12746; } 
if(BgL_test8062z00_14234)
{ /* Llib/date.scm 1122 */
long BgL_arg2439z00_12748;long BgL_arg2441z00_12749;
{ /* Llib/date.scm 1122 */
long BgL_res5343z00_12750;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12751;
if(
INPUT_PORTP(BgL_iportz00_12739))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12751 = BgL_iportz00_12739; }  else 
{ 
obj_t BgL_auxz00_14244;
BgL_auxz00_14244 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7533z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12739); 
FAILURE(BgL_auxz00_14244,BFALSE,BFALSE);} 
BgL_res5343z00_12750 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_12751); } 
BgL_arg2439z00_12748 = BgL_res5343z00_12750; } 
{ /* Llib/date.scm 1122 */
long BgL_res5344z00_12752;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12753;
if(
INPUT_PORTP(BgL_iportz00_12739))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12753 = BgL_iportz00_12739; }  else 
{ 
obj_t BgL_auxz00_14251;
BgL_auxz00_14251 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7533z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12739); 
FAILURE(BgL_auxz00_14251,BFALSE,BFALSE);} 
BgL_res5344z00_12752 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_12753); } 
BgL_arg2441z00_12749 = BgL_res5344z00_12752; } 
{ 
long BgL_bufposz00_14257;long BgL_forwardz00_14256;
BgL_forwardz00_14256 = BgL_arg2439z00_12748; 
BgL_bufposz00_14257 = BgL_arg2441z00_12749; 
BgL_bufposz00_12742 = BgL_bufposz00_14257; 
BgL_forwardz00_12741 = BgL_forwardz00_14256; 
goto BgL_statezd24zd21213z00_12563;} }  else 
{ /* Llib/date.scm 1122 */
BgL_matchz00_12573 = BgL_newzd2matchzd2_12743; } }  else 
{ /* Llib/date.scm 1122 */
int BgL_curz00_12754;
{ /* Llib/date.scm 1122 */
int BgL_res5345z00_12755;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12756;
if(
INPUT_PORTP(BgL_iportz00_12739))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12756 = BgL_iportz00_12739; }  else 
{ 
obj_t BgL_auxz00_14260;
BgL_auxz00_14260 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7533z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12739); 
FAILURE(BgL_auxz00_14260,BFALSE,BFALSE);} 
BgL_res5345z00_12755 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_12756, BgL_forwardz00_12741); } 
BgL_curz00_12754 = BgL_res5345z00_12755; } 
{ /* Llib/date.scm 1122 */

{ /* Llib/date.scm 1122 */
bool_t BgL_test8067z00_14265;
if(
(
(long)(BgL_curz00_12754)>=((long)48)))
{ /* Llib/date.scm 1122 */
BgL_test8067z00_14265 = 
(
(long)(BgL_curz00_12754)<((long)58))
; }  else 
{ /* Llib/date.scm 1122 */
BgL_test8067z00_14265 = ((bool_t)0)
; } 
if(BgL_test8067z00_14265)
{ /* Llib/date.scm 1122 */
BgL_iportz00_12724 = BgL_iportz00_12739; 
BgL_lastzd2matchzd2_12725 = BgL_newzd2matchzd2_12743; 
BgL_forwardz00_12726 = 
(((long)1)+BgL_forwardz00_12741); 
BgL_bufposz00_12727 = BgL_bufposz00_12742; 
BgL_statezd29zd21218z00_12562:
if(
(BgL_forwardz00_12726==BgL_bufposz00_12727))
{ /* Llib/date.scm 1122 */
bool_t BgL_test8070z00_14273;
{ /* Llib/date.scm 1122 */
bool_t BgL_res5352z00_12728;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12729;
if(
INPUT_PORTP(BgL_iportz00_12724))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12729 = BgL_iportz00_12724; }  else 
{ 
obj_t BgL_auxz00_14276;
BgL_auxz00_14276 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7532z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12724); 
FAILURE(BgL_auxz00_14276,BFALSE,BFALSE);} 
BgL_res5352z00_12728 = 
rgc_fill_buffer(BgL_inputzd2portzd2_12729); } 
BgL_test8070z00_14273 = BgL_res5352z00_12728; } 
if(BgL_test8070z00_14273)
{ /* Llib/date.scm 1122 */
long BgL_arg2450z00_12730;long BgL_arg2451z00_12731;
{ /* Llib/date.scm 1122 */
long BgL_res5353z00_12732;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12733;
if(
INPUT_PORTP(BgL_iportz00_12724))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12733 = BgL_iportz00_12724; }  else 
{ 
obj_t BgL_auxz00_14283;
BgL_auxz00_14283 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7532z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12724); 
FAILURE(BgL_auxz00_14283,BFALSE,BFALSE);} 
BgL_res5353z00_12732 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_12733); } 
BgL_arg2450z00_12730 = BgL_res5353z00_12732; } 
{ /* Llib/date.scm 1122 */
long BgL_res5354z00_12734;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12735;
if(
INPUT_PORTP(BgL_iportz00_12724))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12735 = BgL_iportz00_12724; }  else 
{ 
obj_t BgL_auxz00_14290;
BgL_auxz00_14290 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7532z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12724); 
FAILURE(BgL_auxz00_14290,BFALSE,BFALSE);} 
BgL_res5354z00_12734 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_12735); } 
BgL_arg2451z00_12731 = BgL_res5354z00_12734; } 
{ 
long BgL_bufposz00_14296;long BgL_forwardz00_14295;
BgL_forwardz00_14295 = BgL_arg2450z00_12730; 
BgL_bufposz00_14296 = BgL_arg2451z00_12731; 
BgL_bufposz00_12727 = BgL_bufposz00_14296; 
BgL_forwardz00_12726 = BgL_forwardz00_14295; 
goto BgL_statezd29zd21218z00_12562;} }  else 
{ /* Llib/date.scm 1122 */
BgL_matchz00_12573 = BgL_lastzd2matchzd2_12725; } }  else 
{ /* Llib/date.scm 1122 */
int BgL_curz00_12736;
{ /* Llib/date.scm 1122 */
int BgL_res5355z00_12737;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12738;
if(
INPUT_PORTP(BgL_iportz00_12724))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12738 = BgL_iportz00_12724; }  else 
{ 
obj_t BgL_auxz00_14299;
BgL_auxz00_14299 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7532z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12724); 
FAILURE(BgL_auxz00_14299,BFALSE,BFALSE);} 
BgL_res5355z00_12737 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_12738, BgL_forwardz00_12726); } 
BgL_curz00_12736 = BgL_res5355z00_12737; } 
{ /* Llib/date.scm 1122 */

{ /* Llib/date.scm 1122 */
bool_t BgL_test8075z00_14304;
if(
(
(long)(BgL_curz00_12736)>=((long)48)))
{ /* Llib/date.scm 1122 */
BgL_test8075z00_14304 = 
(
(long)(BgL_curz00_12736)<((long)58))
; }  else 
{ /* Llib/date.scm 1122 */
BgL_test8075z00_14304 = ((bool_t)0)
; } 
if(BgL_test8075z00_14304)
{ /* Llib/date.scm 1122 */
BgL_iportz00_12709 = BgL_iportz00_12724; 
BgL_lastzd2matchzd2_12710 = BgL_lastzd2matchzd2_12725; 
BgL_forwardz00_12711 = 
(((long)1)+BgL_forwardz00_12726); 
BgL_bufposz00_12712 = BgL_bufposz00_12727; 
BgL_statezd210zd21219z00_12561:
if(
(BgL_forwardz00_12711==BgL_bufposz00_12712))
{ /* Llib/date.scm 1122 */
bool_t BgL_test8078z00_14312;
{ /* Llib/date.scm 1122 */
bool_t BgL_res5360z00_12713;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12714;
if(
INPUT_PORTP(BgL_iportz00_12709))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12714 = BgL_iportz00_12709; }  else 
{ 
obj_t BgL_auxz00_14315;
BgL_auxz00_14315 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7531z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12709); 
FAILURE(BgL_auxz00_14315,BFALSE,BFALSE);} 
BgL_res5360z00_12713 = 
rgc_fill_buffer(BgL_inputzd2portzd2_12714); } 
BgL_test8078z00_14312 = BgL_res5360z00_12713; } 
if(BgL_test8078z00_14312)
{ /* Llib/date.scm 1122 */
long BgL_arg2460z00_12715;long BgL_arg2461z00_12716;
{ /* Llib/date.scm 1122 */
long BgL_res5361z00_12717;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12718;
if(
INPUT_PORTP(BgL_iportz00_12709))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12718 = BgL_iportz00_12709; }  else 
{ 
obj_t BgL_auxz00_14322;
BgL_auxz00_14322 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7531z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12709); 
FAILURE(BgL_auxz00_14322,BFALSE,BFALSE);} 
BgL_res5361z00_12717 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_12718); } 
BgL_arg2460z00_12715 = BgL_res5361z00_12717; } 
{ /* Llib/date.scm 1122 */
long BgL_res5362z00_12719;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12720;
if(
INPUT_PORTP(BgL_iportz00_12709))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12720 = BgL_iportz00_12709; }  else 
{ 
obj_t BgL_auxz00_14329;
BgL_auxz00_14329 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7531z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12709); 
FAILURE(BgL_auxz00_14329,BFALSE,BFALSE);} 
BgL_res5362z00_12719 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_12720); } 
BgL_arg2461z00_12716 = BgL_res5362z00_12719; } 
{ 
long BgL_bufposz00_14335;long BgL_forwardz00_14334;
BgL_forwardz00_14334 = BgL_arg2460z00_12715; 
BgL_bufposz00_14335 = BgL_arg2461z00_12716; 
BgL_bufposz00_12712 = BgL_bufposz00_14335; 
BgL_forwardz00_12711 = BgL_forwardz00_14334; 
goto BgL_statezd210zd21219z00_12561;} }  else 
{ /* Llib/date.scm 1122 */
BgL_matchz00_12573 = BgL_lastzd2matchzd2_12710; } }  else 
{ /* Llib/date.scm 1122 */
int BgL_curz00_12721;
{ /* Llib/date.scm 1122 */
int BgL_res5363z00_12722;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12723;
if(
INPUT_PORTP(BgL_iportz00_12709))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12723 = BgL_iportz00_12709; }  else 
{ 
obj_t BgL_auxz00_14338;
BgL_auxz00_14338 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7531z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12709); 
FAILURE(BgL_auxz00_14338,BFALSE,BFALSE);} 
BgL_res5363z00_12722 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_12723, BgL_forwardz00_12711); } 
BgL_curz00_12721 = BgL_res5363z00_12722; } 
{ /* Llib/date.scm 1122 */

{ /* Llib/date.scm 1122 */
bool_t BgL_test8083z00_14343;
if(
(
(long)(BgL_curz00_12721)>=((long)48)))
{ /* Llib/date.scm 1122 */
BgL_test8083z00_14343 = 
(
(long)(BgL_curz00_12721)<((long)58))
; }  else 
{ /* Llib/date.scm 1122 */
BgL_test8083z00_14343 = ((bool_t)0)
; } 
if(BgL_test8083z00_14343)
{ /* Llib/date.scm 1122 */
BgL_iportz00_12687 = BgL_iportz00_12709; 
BgL_lastzd2matchzd2_12688 = BgL_lastzd2matchzd2_12710; 
BgL_forwardz00_12689 = 
(((long)1)+BgL_forwardz00_12711); 
BgL_bufposz00_12690 = BgL_bufposz00_12712; 
BgL_statezd211zd21220z00_12560:
{ /* Llib/date.scm 1122 */
long BgL_newzd2matchzd2_12691;
{ /* Llib/date.scm 1122 */
long BgL_res5367z00_12692;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12693;
if(
INPUT_PORTP(BgL_iportz00_12687))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12693 = BgL_iportz00_12687; }  else 
{ 
obj_t BgL_auxz00_14351;
BgL_auxz00_14351 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7530z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12687); 
FAILURE(BgL_auxz00_14351,BFALSE,BFALSE);} 
BgL_res5367z00_12692 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_12693, BgL_forwardz00_12689); } BgL_res5367z00_12692; } 
BgL_newzd2matchzd2_12691 = ((long)2); 
if(
(BgL_forwardz00_12689==BgL_bufposz00_12690))
{ /* Llib/date.scm 1122 */
bool_t BgL_test8087z00_14358;
{ /* Llib/date.scm 1122 */
bool_t BgL_res5369z00_12694;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12695;
if(
INPUT_PORTP(BgL_iportz00_12687))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12695 = BgL_iportz00_12687; }  else 
{ 
obj_t BgL_auxz00_14361;
BgL_auxz00_14361 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7530z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12687); 
FAILURE(BgL_auxz00_14361,BFALSE,BFALSE);} 
BgL_res5369z00_12694 = 
rgc_fill_buffer(BgL_inputzd2portzd2_12695); } 
BgL_test8087z00_14358 = BgL_res5369z00_12694; } 
if(BgL_test8087z00_14358)
{ /* Llib/date.scm 1122 */
long BgL_arg2469z00_12696;long BgL_arg2470z00_12697;
{ /* Llib/date.scm 1122 */
long BgL_res5370z00_12698;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12699;
if(
INPUT_PORTP(BgL_iportz00_12687))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12699 = BgL_iportz00_12687; }  else 
{ 
obj_t BgL_auxz00_14368;
BgL_auxz00_14368 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7530z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12687); 
FAILURE(BgL_auxz00_14368,BFALSE,BFALSE);} 
BgL_res5370z00_12698 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_12699); } 
BgL_arg2469z00_12696 = BgL_res5370z00_12698; } 
{ /* Llib/date.scm 1122 */
long BgL_res5371z00_12700;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12701;
if(
INPUT_PORTP(BgL_iportz00_12687))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12701 = BgL_iportz00_12687; }  else 
{ 
obj_t BgL_auxz00_14375;
BgL_auxz00_14375 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7530z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12687); 
FAILURE(BgL_auxz00_14375,BFALSE,BFALSE);} 
BgL_res5371z00_12700 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_12701); } 
BgL_arg2470z00_12697 = BgL_res5371z00_12700; } 
{ 
long BgL_bufposz00_14381;long BgL_forwardz00_14380;
BgL_forwardz00_14380 = BgL_arg2469z00_12696; 
BgL_bufposz00_14381 = BgL_arg2470z00_12697; 
BgL_bufposz00_12690 = BgL_bufposz00_14381; 
BgL_forwardz00_12689 = BgL_forwardz00_14380; 
goto BgL_statezd211zd21220z00_12560;} }  else 
{ /* Llib/date.scm 1122 */
BgL_matchz00_12573 = BgL_newzd2matchzd2_12691; } }  else 
{ /* Llib/date.scm 1122 */
int BgL_curz00_12702;
{ /* Llib/date.scm 1122 */
int BgL_res5372z00_12703;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12704;
if(
INPUT_PORTP(BgL_iportz00_12687))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12704 = BgL_iportz00_12687; }  else 
{ 
obj_t BgL_auxz00_14384;
BgL_auxz00_14384 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7530z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12687); 
FAILURE(BgL_auxz00_14384,BFALSE,BFALSE);} 
BgL_res5372z00_12703 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_12704, BgL_forwardz00_12689); } 
BgL_curz00_12702 = BgL_res5372z00_12703; } 
{ /* Llib/date.scm 1122 */

{ /* Llib/date.scm 1122 */
bool_t BgL_test8092z00_14389;
if(
(
(long)(BgL_curz00_12702)>=((long)48)))
{ /* Llib/date.scm 1122 */
BgL_test8092z00_14389 = 
(
(long)(BgL_curz00_12702)<((long)58))
; }  else 
{ /* Llib/date.scm 1122 */
BgL_test8092z00_14389 = ((bool_t)0)
; } 
if(BgL_test8092z00_14389)
{ /* Llib/date.scm 1122 */
long BgL_arg2473z00_12705;
BgL_arg2473z00_12705 = 
(((long)1)+BgL_forwardz00_12689); 
{ /* Llib/date.scm 1122 */
long BgL_newzd2matchzd2_12706;
{ /* Llib/date.scm 1122 */
long BgL_res5376z00_12707;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12708;
if(
INPUT_PORTP(BgL_iportz00_12687))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12708 = BgL_iportz00_12687; }  else 
{ 
obj_t BgL_auxz00_14398;
BgL_auxz00_14398 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7530z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12687); 
FAILURE(BgL_auxz00_14398,BFALSE,BFALSE);} 
BgL_res5376z00_12707 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_12708, BgL_arg2473z00_12705); } BgL_res5376z00_12707; } 
BgL_newzd2matchzd2_12706 = ((long)1); 
BgL_matchz00_12573 = BgL_newzd2matchzd2_12706; } }  else 
{ /* Llib/date.scm 1122 */
BgL_matchz00_12573 = BgL_newzd2matchzd2_12691; } } } } } }  else 
{ /* Llib/date.scm 1122 */
BgL_matchz00_12573 = BgL_lastzd2matchzd2_12710; } } } } }  else 
{ /* Llib/date.scm 1122 */
BgL_matchz00_12573 = BgL_lastzd2matchzd2_12725; } } } } }  else 
{ /* Llib/date.scm 1122 */
if(
(
(long)(BgL_curz00_12754)==((long)45)))
{ /* Llib/date.scm 1122 */
BgL_iportz00_12863 = BgL_iportz00_12739; 
BgL_lastzd2matchzd2_12864 = BgL_newzd2matchzd2_12743; 
BgL_forwardz00_12865 = 
(((long)1)+BgL_forwardz00_12741); 
BgL_bufposz00_12866 = BgL_bufposz00_12742; 
BgL_statezd28zd21217z00_12570:
if(
(BgL_forwardz00_12865==BgL_bufposz00_12866))
{ /* Llib/date.scm 1122 */
bool_t BgL_test8097z00_14411;
{ /* Llib/date.scm 1122 */
bool_t BgL_res5261z00_12867;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12868;
if(
INPUT_PORTP(BgL_iportz00_12863))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12868 = BgL_iportz00_12863; }  else 
{ 
obj_t BgL_auxz00_14414;
BgL_auxz00_14414 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7540z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12863); 
FAILURE(BgL_auxz00_14414,BFALSE,BFALSE);} 
BgL_res5261z00_12867 = 
rgc_fill_buffer(BgL_inputzd2portzd2_12868); } 
BgL_test8097z00_14411 = BgL_res5261z00_12867; } 
if(BgL_test8097z00_14411)
{ /* Llib/date.scm 1122 */
long BgL_arg2361z00_12869;long BgL_arg2362z00_12870;
{ /* Llib/date.scm 1122 */
long BgL_res5262z00_12871;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12872;
if(
INPUT_PORTP(BgL_iportz00_12863))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12872 = BgL_iportz00_12863; }  else 
{ 
obj_t BgL_auxz00_14421;
BgL_auxz00_14421 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7540z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12863); 
FAILURE(BgL_auxz00_14421,BFALSE,BFALSE);} 
BgL_res5262z00_12871 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_12872); } 
BgL_arg2361z00_12869 = BgL_res5262z00_12871; } 
{ /* Llib/date.scm 1122 */
long BgL_res5263z00_12873;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12874;
if(
INPUT_PORTP(BgL_iportz00_12863))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12874 = BgL_iportz00_12863; }  else 
{ 
obj_t BgL_auxz00_14428;
BgL_auxz00_14428 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7540z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12863); 
FAILURE(BgL_auxz00_14428,BFALSE,BFALSE);} 
BgL_res5263z00_12873 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_12874); } 
BgL_arg2362z00_12870 = BgL_res5263z00_12873; } 
{ 
long BgL_bufposz00_14434;long BgL_forwardz00_14433;
BgL_forwardz00_14433 = BgL_arg2361z00_12869; 
BgL_bufposz00_14434 = BgL_arg2362z00_12870; 
BgL_bufposz00_12866 = BgL_bufposz00_14434; 
BgL_forwardz00_12865 = BgL_forwardz00_14433; 
goto BgL_statezd28zd21217z00_12570;} }  else 
{ /* Llib/date.scm 1122 */
BgL_matchz00_12573 = BgL_lastzd2matchzd2_12864; } }  else 
{ /* Llib/date.scm 1122 */
int BgL_curz00_12875;
{ /* Llib/date.scm 1122 */
int BgL_res5264z00_12876;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12877;
if(
INPUT_PORTP(BgL_iportz00_12863))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12877 = BgL_iportz00_12863; }  else 
{ 
obj_t BgL_auxz00_14437;
BgL_auxz00_14437 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7540z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12863); 
FAILURE(BgL_auxz00_14437,BFALSE,BFALSE);} 
BgL_res5264z00_12876 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_12877, BgL_forwardz00_12865); } 
BgL_curz00_12875 = BgL_res5264z00_12876; } 
{ /* Llib/date.scm 1122 */

{ /* Llib/date.scm 1122 */
bool_t BgL_test8102z00_14442;
if(
(
(long)(BgL_curz00_12875)>=((long)48)))
{ /* Llib/date.scm 1122 */
BgL_test8102z00_14442 = 
(
(long)(BgL_curz00_12875)<((long)58))
; }  else 
{ /* Llib/date.scm 1122 */
BgL_test8102z00_14442 = ((bool_t)0)
; } 
if(BgL_test8102z00_14442)
{ /* Llib/date.scm 1122 */
BgL_iportz00_12757 = BgL_iportz00_12863; 
BgL_lastzd2matchzd2_12758 = BgL_lastzd2matchzd2_12864; 
BgL_forwardz00_12759 = 
(((long)1)+BgL_forwardz00_12865); 
BgL_bufposz00_12760 = BgL_bufposz00_12866; 
BgL_statezd213zd21222z00_12564:
if(
(BgL_forwardz00_12759==BgL_bufposz00_12760))
{ /* Llib/date.scm 1122 */
bool_t BgL_test8105z00_14450;
{ /* Llib/date.scm 1122 */
bool_t BgL_res5333z00_12761;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12762;
if(
INPUT_PORTP(BgL_iportz00_12757))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12762 = BgL_iportz00_12757; }  else 
{ 
obj_t BgL_auxz00_14453;
BgL_auxz00_14453 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7534z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12757); 
FAILURE(BgL_auxz00_14453,BFALSE,BFALSE);} 
BgL_res5333z00_12761 = 
rgc_fill_buffer(BgL_inputzd2portzd2_12762); } 
BgL_test8105z00_14450 = BgL_res5333z00_12761; } 
if(BgL_test8105z00_14450)
{ /* Llib/date.scm 1122 */
long BgL_arg2430z00_12763;long BgL_arg2431z00_12764;
{ /* Llib/date.scm 1122 */
long BgL_res5334z00_12765;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12766;
if(
INPUT_PORTP(BgL_iportz00_12757))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12766 = BgL_iportz00_12757; }  else 
{ 
obj_t BgL_auxz00_14460;
BgL_auxz00_14460 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7534z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12757); 
FAILURE(BgL_auxz00_14460,BFALSE,BFALSE);} 
BgL_res5334z00_12765 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_12766); } 
BgL_arg2430z00_12763 = BgL_res5334z00_12765; } 
{ /* Llib/date.scm 1122 */
long BgL_res5335z00_12767;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12768;
if(
INPUT_PORTP(BgL_iportz00_12757))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12768 = BgL_iportz00_12757; }  else 
{ 
obj_t BgL_auxz00_14467;
BgL_auxz00_14467 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7534z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12757); 
FAILURE(BgL_auxz00_14467,BFALSE,BFALSE);} 
BgL_res5335z00_12767 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_12768); } 
BgL_arg2431z00_12764 = BgL_res5335z00_12767; } 
{ 
long BgL_bufposz00_14473;long BgL_forwardz00_14472;
BgL_forwardz00_14472 = BgL_arg2430z00_12763; 
BgL_bufposz00_14473 = BgL_arg2431z00_12764; 
BgL_bufposz00_12760 = BgL_bufposz00_14473; 
BgL_forwardz00_12759 = BgL_forwardz00_14472; 
goto BgL_statezd213zd21222z00_12564;} }  else 
{ /* Llib/date.scm 1122 */
BgL_matchz00_12573 = BgL_lastzd2matchzd2_12758; } }  else 
{ /* Llib/date.scm 1122 */
int BgL_curz00_12769;
{ /* Llib/date.scm 1122 */
int BgL_res5336z00_12770;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12771;
if(
INPUT_PORTP(BgL_iportz00_12757))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12771 = BgL_iportz00_12757; }  else 
{ 
obj_t BgL_auxz00_14476;
BgL_auxz00_14476 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7534z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12757); 
FAILURE(BgL_auxz00_14476,BFALSE,BFALSE);} 
BgL_res5336z00_12770 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_12771, BgL_forwardz00_12759); } 
BgL_curz00_12769 = BgL_res5336z00_12770; } 
{ /* Llib/date.scm 1122 */

{ /* Llib/date.scm 1122 */
bool_t BgL_test8110z00_14481;
if(
(
(long)(BgL_curz00_12769)>=((long)48)))
{ /* Llib/date.scm 1122 */
BgL_test8110z00_14481 = 
(
(long)(BgL_curz00_12769)<((long)58))
; }  else 
{ /* Llib/date.scm 1122 */
BgL_test8110z00_14481 = ((bool_t)0)
; } 
if(BgL_test8110z00_14481)
{ /* Llib/date.scm 1122 */
BgL_iportz00_12668 = BgL_iportz00_12757; 
BgL_lastzd2matchzd2_12669 = BgL_lastzd2matchzd2_12758; 
BgL_forwardz00_12670 = 
(((long)1)+BgL_forwardz00_12759); 
BgL_bufposz00_12671 = BgL_bufposz00_12760; 
BgL_statezd214zd21223z00_12559:
if(
(BgL_forwardz00_12670==BgL_bufposz00_12671))
{ /* Llib/date.scm 1122 */
bool_t BgL_test8113z00_14489;
{ /* Llib/date.scm 1122 */
bool_t BgL_res5378z00_12672;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12673;
if(
INPUT_PORTP(BgL_iportz00_12668))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12673 = BgL_iportz00_12668; }  else 
{ 
obj_t BgL_auxz00_14492;
BgL_auxz00_14492 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7529z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12668); 
FAILURE(BgL_auxz00_14492,BFALSE,BFALSE);} 
BgL_res5378z00_12672 = 
rgc_fill_buffer(BgL_inputzd2portzd2_12673); } 
BgL_test8113z00_14489 = BgL_res5378z00_12672; } 
if(BgL_test8113z00_14489)
{ /* Llib/date.scm 1122 */
long BgL_arg2477z00_12674;long BgL_arg2479z00_12675;
{ /* Llib/date.scm 1122 */
long BgL_res5379z00_12676;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12677;
if(
INPUT_PORTP(BgL_iportz00_12668))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12677 = BgL_iportz00_12668; }  else 
{ 
obj_t BgL_auxz00_14499;
BgL_auxz00_14499 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7529z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12668); 
FAILURE(BgL_auxz00_14499,BFALSE,BFALSE);} 
BgL_res5379z00_12676 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_12677); } 
BgL_arg2477z00_12674 = BgL_res5379z00_12676; } 
{ /* Llib/date.scm 1122 */
long BgL_res5380z00_12678;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12679;
if(
INPUT_PORTP(BgL_iportz00_12668))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12679 = BgL_iportz00_12668; }  else 
{ 
obj_t BgL_auxz00_14506;
BgL_auxz00_14506 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7529z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12668); 
FAILURE(BgL_auxz00_14506,BFALSE,BFALSE);} 
BgL_res5380z00_12678 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_12679); } 
BgL_arg2479z00_12675 = BgL_res5380z00_12678; } 
{ 
long BgL_bufposz00_14512;long BgL_forwardz00_14511;
BgL_forwardz00_14511 = BgL_arg2477z00_12674; 
BgL_bufposz00_14512 = BgL_arg2479z00_12675; 
BgL_bufposz00_12671 = BgL_bufposz00_14512; 
BgL_forwardz00_12670 = BgL_forwardz00_14511; 
goto BgL_statezd214zd21223z00_12559;} }  else 
{ /* Llib/date.scm 1122 */
BgL_matchz00_12573 = BgL_lastzd2matchzd2_12669; } }  else 
{ /* Llib/date.scm 1122 */
int BgL_curz00_12680;
{ /* Llib/date.scm 1122 */
int BgL_res5381z00_12681;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12682;
if(
INPUT_PORTP(BgL_iportz00_12668))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12682 = BgL_iportz00_12668; }  else 
{ 
obj_t BgL_auxz00_14515;
BgL_auxz00_14515 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7529z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12668); 
FAILURE(BgL_auxz00_14515,BFALSE,BFALSE);} 
BgL_res5381z00_12681 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_12682, BgL_forwardz00_12670); } 
BgL_curz00_12680 = BgL_res5381z00_12681; } 
{ /* Llib/date.scm 1122 */

{ /* Llib/date.scm 1122 */
bool_t BgL_test8118z00_14520;
if(
(
(long)(BgL_curz00_12680)>=((long)48)))
{ /* Llib/date.scm 1122 */
BgL_test8118z00_14520 = 
(
(long)(BgL_curz00_12680)<((long)58))
; }  else 
{ /* Llib/date.scm 1122 */
BgL_test8118z00_14520 = ((bool_t)0)
; } 
if(BgL_test8118z00_14520)
{ /* Llib/date.scm 1122 */
long BgL_arg2482z00_12683;
BgL_arg2482z00_12683 = 
(((long)1)+BgL_forwardz00_12670); 
{ /* Llib/date.scm 1122 */
long BgL_newzd2matchzd2_12684;
{ /* Llib/date.scm 1122 */
long BgL_res5385z00_12685;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12686;
if(
INPUT_PORTP(BgL_iportz00_12668))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12686 = BgL_iportz00_12668; }  else 
{ 
obj_t BgL_auxz00_14529;
BgL_auxz00_14529 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7529z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12668); 
FAILURE(BgL_auxz00_14529,BFALSE,BFALSE);} 
BgL_res5385z00_12685 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_12686, BgL_arg2482z00_12683); } BgL_res5385z00_12685; } 
BgL_newzd2matchzd2_12684 = ((long)3); 
BgL_matchz00_12573 = BgL_newzd2matchzd2_12684; } }  else 
{ /* Llib/date.scm 1122 */
BgL_matchz00_12573 = BgL_lastzd2matchzd2_12669; } } } } }  else 
{ /* Llib/date.scm 1122 */
BgL_matchz00_12573 = BgL_lastzd2matchzd2_12758; } } } } }  else 
{ /* Llib/date.scm 1122 */
BgL_matchz00_12573 = BgL_lastzd2matchzd2_12864; } } } } }  else 
{ /* Llib/date.scm 1122 */
BgL_matchz00_12573 = BgL_newzd2matchzd2_12743; } } } } } } }  else 
{ /* Llib/date.scm 1122 */
if(
(
(long)(BgL_curz00_12784)==((long)43)))
{ /* Llib/date.scm 1122 */
BgL_iportz00_12827 = BgL_iportz00_12772; 
BgL_lastzd2matchzd2_12828 = BgL_lastzd2matchzd2_12773; 
BgL_forwardz00_12829 = 
(((long)1)+BgL_forwardz00_12774); 
BgL_bufposz00_12830 = BgL_bufposz00_12775; 
BgL_statezd23zd21212z00_12568:
{ /* Llib/date.scm 1122 */
long BgL_newzd2matchzd2_12831;
{ /* Llib/date.scm 1122 */
long BgL_res5279z00_12832;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12833;
if(
INPUT_PORTP(BgL_iportz00_12827))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12833 = BgL_iportz00_12827; }  else 
{ 
obj_t BgL_auxz00_14543;
BgL_auxz00_14543 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7538z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12827); 
FAILURE(BgL_auxz00_14543,BFALSE,BFALSE);} 
BgL_res5279z00_12832 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_12833, BgL_forwardz00_12829); } BgL_res5279z00_12832; } 
BgL_newzd2matchzd2_12831 = ((long)5); 
if(
(BgL_forwardz00_12829==BgL_bufposz00_12830))
{ /* Llib/date.scm 1122 */
bool_t BgL_test8124z00_14550;
{ /* Llib/date.scm 1122 */
bool_t BgL_res5281z00_12834;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12835;
if(
INPUT_PORTP(BgL_iportz00_12827))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12835 = BgL_iportz00_12827; }  else 
{ 
obj_t BgL_auxz00_14553;
BgL_auxz00_14553 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7538z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12827); 
FAILURE(BgL_auxz00_14553,BFALSE,BFALSE);} 
BgL_res5281z00_12834 = 
rgc_fill_buffer(BgL_inputzd2portzd2_12835); } 
BgL_test8124z00_14550 = BgL_res5281z00_12834; } 
if(BgL_test8124z00_14550)
{ /* Llib/date.scm 1122 */
long BgL_arg2379z00_12836;long BgL_arg2380z00_12837;
{ /* Llib/date.scm 1122 */
long BgL_res5282z00_12838;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12839;
if(
INPUT_PORTP(BgL_iportz00_12827))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12839 = BgL_iportz00_12827; }  else 
{ 
obj_t BgL_auxz00_14560;
BgL_auxz00_14560 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7538z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12827); 
FAILURE(BgL_auxz00_14560,BFALSE,BFALSE);} 
BgL_res5282z00_12838 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_12839); } 
BgL_arg2379z00_12836 = BgL_res5282z00_12838; } 
{ /* Llib/date.scm 1122 */
long BgL_res5283z00_12840;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12841;
if(
INPUT_PORTP(BgL_iportz00_12827))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12841 = BgL_iportz00_12827; }  else 
{ 
obj_t BgL_auxz00_14567;
BgL_auxz00_14567 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7538z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12827); 
FAILURE(BgL_auxz00_14567,BFALSE,BFALSE);} 
BgL_res5283z00_12840 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_12841); } 
BgL_arg2380z00_12837 = BgL_res5283z00_12840; } 
{ 
long BgL_bufposz00_14573;long BgL_forwardz00_14572;
BgL_forwardz00_14572 = BgL_arg2379z00_12836; 
BgL_bufposz00_14573 = BgL_arg2380z00_12837; 
BgL_bufposz00_12830 = BgL_bufposz00_14573; 
BgL_forwardz00_12829 = BgL_forwardz00_14572; 
goto BgL_statezd23zd21212z00_12568;} }  else 
{ /* Llib/date.scm 1122 */
BgL_matchz00_12573 = BgL_newzd2matchzd2_12831; } }  else 
{ /* Llib/date.scm 1122 */
int BgL_curz00_12842;
{ /* Llib/date.scm 1122 */
int BgL_res5284z00_12843;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12844;
if(
INPUT_PORTP(BgL_iportz00_12827))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12844 = BgL_iportz00_12827; }  else 
{ 
obj_t BgL_auxz00_14576;
BgL_auxz00_14576 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7538z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12827); 
FAILURE(BgL_auxz00_14576,BFALSE,BFALSE);} 
BgL_res5284z00_12843 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_12844, BgL_forwardz00_12829); } 
BgL_curz00_12842 = BgL_res5284z00_12843; } 
{ /* Llib/date.scm 1122 */

{ /* Llib/date.scm 1122 */
bool_t BgL_test8129z00_14581;
if(
(
(long)(BgL_curz00_12842)>=((long)48)))
{ /* Llib/date.scm 1122 */
BgL_test8129z00_14581 = 
(
(long)(BgL_curz00_12842)<((long)58))
; }  else 
{ /* Llib/date.scm 1122 */
BgL_test8129z00_14581 = ((bool_t)0)
; } 
if(BgL_test8129z00_14581)
{ 
long BgL_bufposz00_14591;long BgL_forwardz00_14589;long BgL_lastzd2matchzd2_14588;obj_t BgL_iportz00_14587;
BgL_iportz00_14587 = BgL_iportz00_12827; 
BgL_lastzd2matchzd2_14588 = BgL_newzd2matchzd2_12831; 
BgL_forwardz00_14589 = 
(((long)1)+BgL_forwardz00_12829); 
BgL_bufposz00_14591 = BgL_bufposz00_12830; 
BgL_bufposz00_12727 = BgL_bufposz00_14591; 
BgL_forwardz00_12726 = BgL_forwardz00_14589; 
BgL_lastzd2matchzd2_12725 = BgL_lastzd2matchzd2_14588; 
BgL_iportz00_12724 = BgL_iportz00_14587; 
goto BgL_statezd29zd21218z00_12562;}  else 
{ /* Llib/date.scm 1122 */
BgL_matchz00_12573 = BgL_newzd2matchzd2_12831; } } } } } }  else 
{ /* Llib/date.scm 1122 */
bool_t BgL_test8131z00_14593;
{ /* Llib/date.scm 1122 */
bool_t BgL_test8132z00_14594;
if(
(
(long)(BgL_curz00_12784)==((long)10)))
{ /* Llib/date.scm 1122 */
BgL_test8132z00_14594 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1122 */
BgL_test8132z00_14594 = 
(
(long)(BgL_curz00_12784)==((long)9))
; } 
if(BgL_test8132z00_14594)
{ /* Llib/date.scm 1122 */
BgL_test8131z00_14593 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1122 */
if(
(
(long)(BgL_curz00_12784)==((long)13)))
{ /* Llib/date.scm 1122 */
BgL_test8131z00_14593 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1122 */
BgL_test8131z00_14593 = 
(
(long)(BgL_curz00_12784)==((long)32))
; } } } 
if(BgL_test8131z00_14593)
{ /* Llib/date.scm 1122 */
BgL_iportz00_12791 = BgL_iportz00_12772; 
BgL_lastzd2matchzd2_12792 = BgL_lastzd2matchzd2_12773; 
BgL_forwardz00_12793 = 
(((long)1)+BgL_forwardz00_12774); 
BgL_bufposz00_12794 = BgL_bufposz00_12775; 
BgL_statezd22zd21211z00_12566:
{ /* Llib/date.scm 1122 */
long BgL_newzd2matchzd2_12795;
{ /* Llib/date.scm 1122 */
long BgL_res5299z00_12796;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12797;
if(
INPUT_PORTP(BgL_iportz00_12791))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12797 = BgL_iportz00_12791; }  else 
{ 
obj_t BgL_auxz00_14607;
BgL_auxz00_14607 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7536z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12791); 
FAILURE(BgL_auxz00_14607,BFALSE,BFALSE);} 
BgL_res5299z00_12796 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_12797, BgL_forwardz00_12793); } BgL_res5299z00_12796; } 
BgL_newzd2matchzd2_12795 = ((long)0); 
if(
(BgL_forwardz00_12793==BgL_bufposz00_12794))
{ /* Llib/date.scm 1122 */
bool_t BgL_test8137z00_14614;
{ /* Llib/date.scm 1122 */
bool_t BgL_res5301z00_12798;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12799;
if(
INPUT_PORTP(BgL_iportz00_12791))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12799 = BgL_iportz00_12791; }  else 
{ 
obj_t BgL_auxz00_14617;
BgL_auxz00_14617 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7536z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12791); 
FAILURE(BgL_auxz00_14617,BFALSE,BFALSE);} 
BgL_res5301z00_12798 = 
rgc_fill_buffer(BgL_inputzd2portzd2_12799); } 
BgL_test8137z00_14614 = BgL_res5301z00_12798; } 
if(BgL_test8137z00_14614)
{ /* Llib/date.scm 1122 */
long BgL_arg2397z00_12800;long BgL_arg2398z00_12801;
{ /* Llib/date.scm 1122 */
long BgL_res5302z00_12802;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12803;
if(
INPUT_PORTP(BgL_iportz00_12791))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12803 = BgL_iportz00_12791; }  else 
{ 
obj_t BgL_auxz00_14624;
BgL_auxz00_14624 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7536z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12791); 
FAILURE(BgL_auxz00_14624,BFALSE,BFALSE);} 
BgL_res5302z00_12802 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_12803); } 
BgL_arg2397z00_12800 = BgL_res5302z00_12802; } 
{ /* Llib/date.scm 1122 */
long BgL_res5303z00_12804;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12805;
if(
INPUT_PORTP(BgL_iportz00_12791))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12805 = BgL_iportz00_12791; }  else 
{ 
obj_t BgL_auxz00_14631;
BgL_auxz00_14631 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7536z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12791); 
FAILURE(BgL_auxz00_14631,BFALSE,BFALSE);} 
BgL_res5303z00_12804 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_12805); } 
BgL_arg2398z00_12801 = BgL_res5303z00_12804; } 
{ 
long BgL_bufposz00_14637;long BgL_forwardz00_14636;
BgL_forwardz00_14636 = BgL_arg2397z00_12800; 
BgL_bufposz00_14637 = BgL_arg2398z00_12801; 
BgL_bufposz00_12794 = BgL_bufposz00_14637; 
BgL_forwardz00_12793 = BgL_forwardz00_14636; 
goto BgL_statezd22zd21211z00_12566;} }  else 
{ /* Llib/date.scm 1122 */
BgL_matchz00_12573 = BgL_newzd2matchzd2_12795; } }  else 
{ /* Llib/date.scm 1122 */
int BgL_curz00_12806;
{ /* Llib/date.scm 1122 */
int BgL_res5304z00_12807;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12808;
if(
INPUT_PORTP(BgL_iportz00_12791))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12808 = BgL_iportz00_12791; }  else 
{ 
obj_t BgL_auxz00_14640;
BgL_auxz00_14640 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7536z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12791); 
FAILURE(BgL_auxz00_14640,BFALSE,BFALSE);} 
BgL_res5304z00_12807 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_12808, BgL_forwardz00_12793); } 
BgL_curz00_12806 = BgL_res5304z00_12807; } 
{ /* Llib/date.scm 1122 */

{ /* Llib/date.scm 1122 */
bool_t BgL_test8142z00_14645;
{ /* Llib/date.scm 1122 */
bool_t BgL_test8143z00_14646;
if(
(
(long)(BgL_curz00_12806)==((long)10)))
{ /* Llib/date.scm 1122 */
BgL_test8143z00_14646 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1122 */
BgL_test8143z00_14646 = 
(
(long)(BgL_curz00_12806)==((long)9))
; } 
if(BgL_test8143z00_14646)
{ /* Llib/date.scm 1122 */
BgL_test8142z00_14645 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1122 */
if(
(
(long)(BgL_curz00_12806)==((long)13)))
{ /* Llib/date.scm 1122 */
BgL_test8142z00_14645 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1122 */
BgL_test8142z00_14645 = 
(
(long)(BgL_curz00_12806)==((long)32))
; } } } 
if(BgL_test8142z00_14645)
{ /* Llib/date.scm 1122 */
BgL_iportz00_12650 = BgL_iportz00_12791; 
BgL_lastzd2matchzd2_12651 = BgL_newzd2matchzd2_12795; 
BgL_forwardz00_12652 = 
(((long)1)+BgL_forwardz00_12793); 
BgL_bufposz00_12653 = BgL_bufposz00_12794; 
BgL_statezd216zd21225z00_12558:
{ /* Llib/date.scm 1122 */
long BgL_newzd2matchzd2_12654;
{ /* Llib/date.scm 1122 */
long BgL_res5388z00_12655;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12656;
if(
INPUT_PORTP(BgL_iportz00_12650))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12656 = BgL_iportz00_12650; }  else 
{ 
obj_t BgL_auxz00_14659;
BgL_auxz00_14659 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7528z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12650); 
FAILURE(BgL_auxz00_14659,BFALSE,BFALSE);} 
BgL_res5388z00_12655 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_12656, BgL_forwardz00_12652); } BgL_res5388z00_12655; } 
BgL_newzd2matchzd2_12654 = ((long)0); 
if(
(BgL_forwardz00_12652==BgL_bufposz00_12653))
{ /* Llib/date.scm 1122 */
bool_t BgL_test8148z00_14666;
{ /* Llib/date.scm 1122 */
bool_t BgL_res5390z00_12657;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12658;
if(
INPUT_PORTP(BgL_iportz00_12650))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12658 = BgL_iportz00_12650; }  else 
{ 
obj_t BgL_auxz00_14669;
BgL_auxz00_14669 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7528z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12650); 
FAILURE(BgL_auxz00_14669,BFALSE,BFALSE);} 
BgL_res5390z00_12657 = 
rgc_fill_buffer(BgL_inputzd2portzd2_12658); } 
BgL_test8148z00_14666 = BgL_res5390z00_12657; } 
if(BgL_test8148z00_14666)
{ /* Llib/date.scm 1122 */
long BgL_arg2488z00_12659;long BgL_arg2491z00_12660;
{ /* Llib/date.scm 1122 */
long BgL_res5391z00_12661;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12662;
if(
INPUT_PORTP(BgL_iportz00_12650))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12662 = BgL_iportz00_12650; }  else 
{ 
obj_t BgL_auxz00_14676;
BgL_auxz00_14676 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7528z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12650); 
FAILURE(BgL_auxz00_14676,BFALSE,BFALSE);} 
BgL_res5391z00_12661 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_12662); } 
BgL_arg2488z00_12659 = BgL_res5391z00_12661; } 
{ /* Llib/date.scm 1122 */
long BgL_res5392z00_12663;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12664;
if(
INPUT_PORTP(BgL_iportz00_12650))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12664 = BgL_iportz00_12650; }  else 
{ 
obj_t BgL_auxz00_14683;
BgL_auxz00_14683 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7528z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12650); 
FAILURE(BgL_auxz00_14683,BFALSE,BFALSE);} 
BgL_res5392z00_12663 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_12664); } 
BgL_arg2491z00_12660 = BgL_res5392z00_12663; } 
{ 
long BgL_bufposz00_14689;long BgL_forwardz00_14688;
BgL_forwardz00_14688 = BgL_arg2488z00_12659; 
BgL_bufposz00_14689 = BgL_arg2491z00_12660; 
BgL_bufposz00_12653 = BgL_bufposz00_14689; 
BgL_forwardz00_12652 = BgL_forwardz00_14688; 
goto BgL_statezd216zd21225z00_12558;} }  else 
{ /* Llib/date.scm 1122 */
BgL_matchz00_12573 = BgL_newzd2matchzd2_12654; } }  else 
{ /* Llib/date.scm 1122 */
int BgL_curz00_12665;
{ /* Llib/date.scm 1122 */
int BgL_res5393z00_12666;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12667;
if(
INPUT_PORTP(BgL_iportz00_12650))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12667 = BgL_iportz00_12650; }  else 
{ 
obj_t BgL_auxz00_14692;
BgL_auxz00_14692 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7528z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12650); 
FAILURE(BgL_auxz00_14692,BFALSE,BFALSE);} 
BgL_res5393z00_12666 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_12667, BgL_forwardz00_12652); } 
BgL_curz00_12665 = BgL_res5393z00_12666; } 
{ /* Llib/date.scm 1122 */

{ /* Llib/date.scm 1122 */
bool_t BgL_test8153z00_14697;
{ /* Llib/date.scm 1122 */
bool_t BgL_test8154z00_14698;
if(
(
(long)(BgL_curz00_12665)==((long)10)))
{ /* Llib/date.scm 1122 */
BgL_test8154z00_14698 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1122 */
BgL_test8154z00_14698 = 
(
(long)(BgL_curz00_12665)==((long)9))
; } 
if(BgL_test8154z00_14698)
{ /* Llib/date.scm 1122 */
BgL_test8153z00_14697 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1122 */
if(
(
(long)(BgL_curz00_12665)==((long)13)))
{ /* Llib/date.scm 1122 */
BgL_test8153z00_14697 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1122 */
BgL_test8153z00_14697 = 
(
(long)(BgL_curz00_12665)==((long)32))
; } } } 
if(BgL_test8153z00_14697)
{ 
long BgL_forwardz00_14710;long BgL_lastzd2matchzd2_14709;
BgL_lastzd2matchzd2_14709 = BgL_newzd2matchzd2_12654; 
BgL_forwardz00_14710 = 
(((long)1)+BgL_forwardz00_12652); 
BgL_forwardz00_12652 = BgL_forwardz00_14710; 
BgL_lastzd2matchzd2_12651 = BgL_lastzd2matchzd2_14709; 
goto BgL_statezd216zd21225z00_12558;}  else 
{ /* Llib/date.scm 1122 */
BgL_matchz00_12573 = BgL_newzd2matchzd2_12654; } } } } } }  else 
{ /* Llib/date.scm 1122 */
BgL_matchz00_12573 = BgL_newzd2matchzd2_12795; } } } } } }  else 
{ /* Llib/date.scm 1122 */
long BgL_arg2426z00_12787;
BgL_arg2426z00_12787 = 
(((long)1)+BgL_forwardz00_12774); 
{ /* Llib/date.scm 1122 */
long BgL_newzd2matchzd2_12788;
{ /* Llib/date.scm 1122 */
long BgL_res5331z00_12789;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12790;
if(
INPUT_PORTP(BgL_iportz00_12772))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12790 = BgL_iportz00_12772; }  else 
{ 
obj_t BgL_auxz00_14717;
BgL_auxz00_14717 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7535z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_12772); 
FAILURE(BgL_auxz00_14717,BFALSE,BFALSE);} 
BgL_res5331z00_12789 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_12790, BgL_arg2426z00_12787); } BgL_res5331z00_12789; } 
BgL_newzd2matchzd2_12788 = ((long)5); 
BgL_matchz00_12573 = BgL_newzd2matchzd2_12788; } } } } } } } } } 
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12580;
if(
INPUT_PORTP(BgL_iportz00_11321))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12580 = BgL_iportz00_11321; }  else 
{ 
obj_t BgL_auxz00_14724;
BgL_auxz00_14724 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11321); 
FAILURE(BgL_auxz00_14724,BFALSE,BFALSE);} 
RGC_SET_FILEPOS(BgL_inputzd2portzd2_12580); } 
switch( BgL_matchz00_12573) { case ((long)5) : 

{ /* Llib/date.scm 1150 */
obj_t BgL_arg2602z00_12581;obj_t BgL_arg2603z00_12582;
{ /* Llib/date.scm 1122 */
bool_t BgL_test8159z00_14729;
{ /* Llib/date.scm 1122 */
long BgL_arg2594z00_12645;
{ /* Llib/date.scm 1122 */
long BgL_res5401z00_12646;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12647;
if(
INPUT_PORTP(BgL_iportz00_11321))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12647 = BgL_iportz00_11321; }  else 
{ 
obj_t BgL_auxz00_14732;
BgL_auxz00_14732 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7527z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11321); 
FAILURE(BgL_auxz00_14732,BFALSE,BFALSE);} 
BgL_res5401z00_12646 = 
RGC_BUFFER_MATCH_LENGTH(BgL_inputzd2portzd2_12647); } 
BgL_arg2594z00_12645 = BgL_res5401z00_12646; } 
BgL_test8159z00_14729 = 
(BgL_arg2594z00_12645==((long)0)); } 
if(BgL_test8159z00_14729)
{ /* Llib/date.scm 1122 */
BgL_arg2602z00_12581 = BEOF; }  else 
{ /* Llib/date.scm 1122 */
unsigned char BgL_res5403z00_12648;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12649;
if(
INPUT_PORTP(BgL_iportz00_11321))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12649 = BgL_iportz00_11321; }  else 
{ 
obj_t BgL_auxz00_14740;
BgL_auxz00_14740 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7527z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11321); 
FAILURE(BgL_auxz00_14740,BFALSE,BFALSE);} 
BgL_res5403z00_12648 = 
RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_12649); } 
BgL_arg2602z00_12581 = 
BCHAR(BgL_res5403z00_12648); } } 
{ /* Llib/date.scm 1150 */
obj_t BgL_res5407z00_12583;
if(
INPUT_PORTP(BgL_iportz00_11321))
{ /* Llib/date.scm 1122 */
BgL_res5407z00_12583 = BgL_iportz00_11321; }  else 
{ 
obj_t BgL_auxz00_14748;
BgL_auxz00_14748 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11321); 
FAILURE(BgL_auxz00_14748,BFALSE,BFALSE);} 
BgL_arg2603z00_12582 = BgL_res5407z00_12583; } 
return 
BGl_parsezd2errorzd2zz__datez00(BGl_string7522z00zz__datez00, BGl_string7523z00zz__datez00, BgL_arg2602z00_12581, BgL_arg2603z00_12582);} break;case ((long)4) : 

{ /* Llib/date.scm 1144 */
obj_t BgL_cz00_12584;
{ /* Llib/date.scm 1144 */
obj_t BgL_arg2606z00_12585;
{ /* Llib/date.scm 1144 */
obj_t BgL_res5409z00_12586;
{ /* Llib/date.scm 1122 */
obj_t BgL_res5408z00_12587;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12588;
if(
INPUT_PORTP(BgL_iportz00_11321))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12588 = BgL_iportz00_11321; }  else 
{ 
obj_t BgL_auxz00_14755;
BgL_auxz00_14755 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11321); 
FAILURE(BgL_auxz00_14755,BFALSE,BFALSE);} 
BgL_res5408z00_12587 = 
rgc_buffer_symbol(BgL_inputzd2portzd2_12588); } 
BgL_res5409z00_12586 = BgL_res5408z00_12587; } 
BgL_arg2606z00_12585 = BgL_res5409z00_12586; } 
BgL_cz00_12584 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_arg2606z00_12585, BGl_list7481z00zz__datez00); } 
if(
PAIRP(BgL_cz00_12584))
{ /* Llib/date.scm 1146 */
long BgL_za72za7_12589;
{ /* Llib/date.scm 1146 */
obj_t BgL_tmpz00_14763;
{ /* Llib/date.scm 1146 */
obj_t BgL_aux6501z00_12590;
BgL_aux6501z00_12590 = 
CDR(BgL_cz00_12584); 
if(
INTEGERP(BgL_aux6501z00_12590))
{ /* Llib/date.scm 1146 */
BgL_tmpz00_14763 = BgL_aux6501z00_12590
; }  else 
{ 
obj_t BgL_auxz00_14767;
BgL_auxz00_14767 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)46685)), BGl_string7520z00zz__datez00, BGl_string7524z00zz__datez00, BgL_aux6501z00_12590); 
FAILURE(BgL_auxz00_14767,BFALSE,BFALSE);} } 
BgL_za72za7_12589 = 
(long)CINT(BgL_tmpz00_14763); } 
return 
BINT(
(((long)3600)*BgL_za72za7_12589));}  else 
{ /* Llib/date.scm 1145 */
return 
BINT(((long)0));} } break;case ((long)3) : 

{ /* Llib/date.scm 1139 */
long BgL_hz00_12591;long BgL_mz00_12592;
{ /* Llib/date.scm 1139 */
int BgL_arg2609z00_12593;
{ /* Llib/date.scm 1122 */
int BgL_res5412z00_12594;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12595;
if(
INPUT_PORTP(BgL_iportz00_11321))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12595 = BgL_iportz00_11321; }  else 
{ 
obj_t BgL_auxz00_14777;
BgL_auxz00_14777 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11321); 
FAILURE(BgL_auxz00_14777,BFALSE,BFALSE);} 
{ /* Llib/date.scm 1122 */
int BgL_tmpz00_14781;
BgL_tmpz00_14781 = 
(int)(((long)2)); 
BgL_res5412z00_12594 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_12595, BgL_tmpz00_14781); } } 
BgL_arg2609z00_12593 = BgL_res5412z00_12594; } 
BgL_hz00_12591 = 
(
(long)(BgL_arg2609z00_12593)-((long)48)); } 
{ /* Llib/date.scm 1140 */
long BgL_arg2611z00_12596;long BgL_arg2612z00_12597;
{ /* Llib/date.scm 1140 */
long BgL_arg2613z00_12598;
{ /* Llib/date.scm 1140 */
int BgL_arg2614z00_12599;
{ /* Llib/date.scm 1122 */
int BgL_res5414z00_12600;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12601;
if(
INPUT_PORTP(BgL_iportz00_11321))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12601 = BgL_iportz00_11321; }  else 
{ 
obj_t BgL_auxz00_14788;
BgL_auxz00_14788 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11321); 
FAILURE(BgL_auxz00_14788,BFALSE,BFALSE);} 
{ /* Llib/date.scm 1122 */
int BgL_tmpz00_14792;
BgL_tmpz00_14792 = 
(int)(((long)3)); 
BgL_res5414z00_12600 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_12601, BgL_tmpz00_14792); } } 
BgL_arg2614z00_12599 = BgL_res5414z00_12600; } 
BgL_arg2613z00_12598 = 
(
(long)(BgL_arg2614z00_12599)-((long)48)); } 
BgL_arg2611z00_12596 = 
(((long)10)*BgL_arg2613z00_12598); } 
{ /* Llib/date.scm 1140 */
int BgL_arg2615z00_12602;
{ /* Llib/date.scm 1122 */
int BgL_res5417z00_12603;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12604;
if(
INPUT_PORTP(BgL_iportz00_11321))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12604 = BgL_iportz00_11321; }  else 
{ 
obj_t BgL_auxz00_14800;
BgL_auxz00_14800 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11321); 
FAILURE(BgL_auxz00_14800,BFALSE,BFALSE);} 
{ /* Llib/date.scm 1122 */
int BgL_tmpz00_14804;
BgL_tmpz00_14804 = 
(int)(((long)4)); 
BgL_res5417z00_12603 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_12604, BgL_tmpz00_14804); } } 
BgL_arg2615z00_12602 = BgL_res5417z00_12603; } 
BgL_arg2612z00_12597 = 
(
(long)(BgL_arg2615z00_12602)-((long)48)); } 
BgL_mz00_12592 = 
(BgL_arg2611z00_12596+BgL_arg2612z00_12597); } 
return 
BINT(
(((long)60)*
(
(BgL_hz00_12591*((long)60))+BgL_mz00_12592)));} break;case ((long)2) : 

{ /* Llib/date.scm 1132 */
long BgL_hz00_12605;long BgL_mz00_12606;
{ /* Llib/date.scm 1132 */
int BgL_arg2626z00_12607;
{ /* Llib/date.scm 1122 */
int BgL_res5423z00_12608;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12609;
if(
INPUT_PORTP(BgL_iportz00_11321))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12609 = BgL_iportz00_11321; }  else 
{ 
obj_t BgL_auxz00_14816;
BgL_auxz00_14816 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11321); 
FAILURE(BgL_auxz00_14816,BFALSE,BFALSE);} 
{ /* Llib/date.scm 1122 */
int BgL_tmpz00_14820;
BgL_tmpz00_14820 = 
(int)(((long)1)); 
BgL_res5423z00_12608 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_12609, BgL_tmpz00_14820); } } 
BgL_arg2626z00_12607 = BgL_res5423z00_12608; } 
BgL_hz00_12605 = 
(
(long)(BgL_arg2626z00_12607)-((long)48)); } 
{ /* Llib/date.scm 1133 */
long BgL_arg2628z00_12610;long BgL_arg2629z00_12611;
{ /* Llib/date.scm 1133 */
long BgL_arg2631z00_12612;
{ /* Llib/date.scm 1133 */
int BgL_arg2633z00_12613;
{ /* Llib/date.scm 1122 */
int BgL_res5425z00_12614;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12615;
if(
INPUT_PORTP(BgL_iportz00_11321))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12615 = BgL_iportz00_11321; }  else 
{ 
obj_t BgL_auxz00_14827;
BgL_auxz00_14827 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11321); 
FAILURE(BgL_auxz00_14827,BFALSE,BFALSE);} 
{ /* Llib/date.scm 1122 */
int BgL_tmpz00_14831;
BgL_tmpz00_14831 = 
(int)(((long)2)); 
BgL_res5425z00_12614 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_12615, BgL_tmpz00_14831); } } 
BgL_arg2633z00_12613 = BgL_res5425z00_12614; } 
BgL_arg2631z00_12612 = 
(
(long)(BgL_arg2633z00_12613)-((long)48)); } 
BgL_arg2628z00_12610 = 
(((long)10)*BgL_arg2631z00_12612); } 
{ /* Llib/date.scm 1133 */
int BgL_arg2635z00_12616;
{ /* Llib/date.scm 1122 */
int BgL_res5428z00_12617;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12618;
if(
INPUT_PORTP(BgL_iportz00_11321))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12618 = BgL_iportz00_11321; }  else 
{ 
obj_t BgL_auxz00_14839;
BgL_auxz00_14839 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11321); 
FAILURE(BgL_auxz00_14839,BFALSE,BFALSE);} 
{ /* Llib/date.scm 1122 */
int BgL_tmpz00_14843;
BgL_tmpz00_14843 = 
(int)(((long)3)); 
BgL_res5428z00_12617 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_12618, BgL_tmpz00_14843); } } 
BgL_arg2635z00_12616 = BgL_res5428z00_12617; } 
BgL_arg2629z00_12611 = 
(
(long)(BgL_arg2635z00_12616)-((long)48)); } 
BgL_mz00_12606 = 
(BgL_arg2628z00_12610+BgL_arg2629z00_12611); } 
{ /* Llib/date.scm 1134 */
bool_t BgL_test8172z00_14849;
{ /* Llib/date.scm 1134 */
int BgL_arg2625z00_12619;
{ /* Llib/date.scm 1122 */
int BgL_res5431z00_12620;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12621;
if(
INPUT_PORTP(BgL_iportz00_11321))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12621 = BgL_iportz00_11321; }  else 
{ 
obj_t BgL_auxz00_14852;
BgL_auxz00_14852 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11321); 
FAILURE(BgL_auxz00_14852,BFALSE,BFALSE);} 
{ /* Llib/date.scm 1122 */
int BgL_tmpz00_14856;
BgL_tmpz00_14856 = 
(int)(((long)0)); 
BgL_res5431z00_12620 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_12621, BgL_tmpz00_14856); } } 
BgL_arg2625z00_12619 = BgL_res5431z00_12620; } 
BgL_test8172z00_14849 = 
(
(long)(BgL_arg2625z00_12619)==((long)45)); } 
if(BgL_test8172z00_14849)
{ /* Llib/date.scm 1134 */
return 
BINT(
NEG(
(((long)60)*
(
(BgL_hz00_12605*((long)60))+BgL_mz00_12606))));}  else 
{ /* Llib/date.scm 1134 */
return 
BINT(
(((long)60)*
(
(BgL_hz00_12605*((long)60))+BgL_mz00_12606)));} } } break;case ((long)1) : 

{ /* Llib/date.scm 1126 */
long BgL_hz00_12622;long BgL_mz00_12623;
{ /* Llib/date.scm 1126 */
long BgL_arg2646z00_12624;long BgL_arg2648z00_12625;
{ /* Llib/date.scm 1126 */
long BgL_arg2649z00_12626;
{ /* Llib/date.scm 1126 */
int BgL_arg2650z00_12627;
{ /* Llib/date.scm 1122 */
int BgL_res5440z00_12628;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12629;
if(
INPUT_PORTP(BgL_iportz00_11321))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12629 = BgL_iportz00_11321; }  else 
{ 
obj_t BgL_auxz00_14872;
BgL_auxz00_14872 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11321); 
FAILURE(BgL_auxz00_14872,BFALSE,BFALSE);} 
{ /* Llib/date.scm 1122 */
int BgL_tmpz00_14876;
BgL_tmpz00_14876 = 
(int)(((long)1)); 
BgL_res5440z00_12628 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_12629, BgL_tmpz00_14876); } } 
BgL_arg2650z00_12627 = BgL_res5440z00_12628; } 
BgL_arg2649z00_12626 = 
(
(long)(BgL_arg2650z00_12627)-((long)48)); } 
BgL_arg2646z00_12624 = 
(((long)10)*BgL_arg2649z00_12626); } 
{ /* Llib/date.scm 1126 */
int BgL_arg2651z00_12630;
{ /* Llib/date.scm 1122 */
int BgL_res5443z00_12631;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12632;
if(
INPUT_PORTP(BgL_iportz00_11321))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12632 = BgL_iportz00_11321; }  else 
{ 
obj_t BgL_auxz00_14884;
BgL_auxz00_14884 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11321); 
FAILURE(BgL_auxz00_14884,BFALSE,BFALSE);} 
{ /* Llib/date.scm 1122 */
int BgL_tmpz00_14888;
BgL_tmpz00_14888 = 
(int)(((long)2)); 
BgL_res5443z00_12631 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_12632, BgL_tmpz00_14888); } } 
BgL_arg2651z00_12630 = BgL_res5443z00_12631; } 
BgL_arg2648z00_12625 = 
(
(long)(BgL_arg2651z00_12630)-((long)48)); } 
BgL_hz00_12622 = 
(BgL_arg2646z00_12624+BgL_arg2648z00_12625); } 
{ /* Llib/date.scm 1127 */
long BgL_arg2653z00_12633;long BgL_arg2654z00_12634;
{ /* Llib/date.scm 1127 */
long BgL_arg2655z00_12635;
{ /* Llib/date.scm 1127 */
int BgL_arg2656z00_12636;
{ /* Llib/date.scm 1122 */
int BgL_res5446z00_12637;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12638;
if(
INPUT_PORTP(BgL_iportz00_11321))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12638 = BgL_iportz00_11321; }  else 
{ 
obj_t BgL_auxz00_14896;
BgL_auxz00_14896 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11321); 
FAILURE(BgL_auxz00_14896,BFALSE,BFALSE);} 
{ /* Llib/date.scm 1122 */
int BgL_tmpz00_14900;
BgL_tmpz00_14900 = 
(int)(((long)3)); 
BgL_res5446z00_12637 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_12638, BgL_tmpz00_14900); } } 
BgL_arg2656z00_12636 = BgL_res5446z00_12637; } 
BgL_arg2655z00_12635 = 
(
(long)(BgL_arg2656z00_12636)-((long)48)); } 
BgL_arg2653z00_12633 = 
(((long)10)*BgL_arg2655z00_12635); } 
{ /* Llib/date.scm 1127 */
int BgL_arg2657z00_12639;
{ /* Llib/date.scm 1122 */
int BgL_res5449z00_12640;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12641;
if(
INPUT_PORTP(BgL_iportz00_11321))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12641 = BgL_iportz00_11321; }  else 
{ 
obj_t BgL_auxz00_14908;
BgL_auxz00_14908 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11321); 
FAILURE(BgL_auxz00_14908,BFALSE,BFALSE);} 
{ /* Llib/date.scm 1122 */
int BgL_tmpz00_14912;
BgL_tmpz00_14912 = 
(int)(((long)4)); 
BgL_res5449z00_12640 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_12641, BgL_tmpz00_14912); } } 
BgL_arg2657z00_12639 = BgL_res5449z00_12640; } 
BgL_arg2654z00_12634 = 
(
(long)(BgL_arg2657z00_12639)-((long)48)); } 
BgL_mz00_12623 = 
(BgL_arg2653z00_12633+BgL_arg2654z00_12634); } 
{ /* Llib/date.scm 1128 */
bool_t BgL_test8178z00_14918;
{ /* Llib/date.scm 1128 */
int BgL_arg2645z00_12642;
{ /* Llib/date.scm 1122 */
int BgL_res5452z00_12643;
{ /* Llib/date.scm 1122 */
obj_t BgL_inputzd2portzd2_12644;
if(
INPUT_PORTP(BgL_iportz00_11321))
{ /* Llib/date.scm 1122 */
BgL_inputzd2portzd2_12644 = BgL_iportz00_11321; }  else 
{ 
obj_t BgL_auxz00_14921;
BgL_auxz00_14921 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)45732)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11321); 
FAILURE(BgL_auxz00_14921,BFALSE,BFALSE);} 
{ /* Llib/date.scm 1122 */
int BgL_tmpz00_14925;
BgL_tmpz00_14925 = 
(int)(((long)0)); 
BgL_res5452z00_12643 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_12644, BgL_tmpz00_14925); } } 
BgL_arg2645z00_12642 = BgL_res5452z00_12643; } 
BgL_test8178z00_14918 = 
(
(long)(BgL_arg2645z00_12642)==((long)45)); } 
if(BgL_test8178z00_14918)
{ /* Llib/date.scm 1128 */
return 
BINT(
NEG(
(((long)60)*
(
(BgL_hz00_12622*((long)60))+BgL_mz00_12623))));}  else 
{ /* Llib/date.scm 1128 */
return 
BINT(
(((long)60)*
(
(BgL_hz00_12622*((long)60))+BgL_mz00_12623)));} } } break;case ((long)0) : 

goto BgL_ignorez00_12556;break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_string7525z00zz__datez00, BGl_string7526z00zz__datez00, 
BINT(BgL_matchz00_12573));} } } } } } 

}



/* &<@anonymous:2063> */
obj_t BGl_z62zc3z04anonymousza32063ze3ze5zz__datez00(obj_t BgL_envz00_11322, obj_t BgL_iportz00_11323)
{
{ /* Llib/date.scm 1064 */
{ 
obj_t BgL_iportz00_13296;long BgL_lastzd2matchzd2_13297;long BgL_forwardz00_13298;long BgL_bufposz00_13299;obj_t BgL_iportz00_13278;long BgL_lastzd2matchzd2_13279;long BgL_forwardz00_13280;long BgL_bufposz00_13281;obj_t BgL_iportz00_13263;long BgL_lastzd2matchzd2_13264;long BgL_forwardz00_13265;long BgL_bufposz00_13266;obj_t BgL_iportz00_13245;long BgL_lastzd2matchzd2_13246;long BgL_forwardz00_13247;long BgL_bufposz00_13248;obj_t BgL_iportz00_13226;long BgL_lastzd2matchzd2_13227;long BgL_forwardz00_13228;long BgL_bufposz00_13229;obj_t BgL_iportz00_13211;long BgL_lastzd2matchzd2_13212;long BgL_forwardz00_13213;long BgL_bufposz00_13214;obj_t BgL_iportz00_13196;long BgL_lastzd2matchzd2_13197;long BgL_forwardz00_13198;long BgL_bufposz00_13199;obj_t BgL_iportz00_13178;long BgL_lastzd2matchzd2_13179;long BgL_forwardz00_13180;long BgL_bufposz00_13181;obj_t BgL_iportz00_13163;long BgL_lastzd2matchzd2_13164;long BgL_forwardz00_13165;long BgL_bufposz00_13166;obj_t BgL_iportz00_13144;long BgL_lastzd2matchzd2_13145;long BgL_forwardz00_13146;long BgL_bufposz00_13147;obj_t BgL_iportz00_13129;long BgL_lastzd2matchzd2_13130;long BgL_forwardz00_13131;long BgL_bufposz00_13132;obj_t BgL_iportz00_13111;long BgL_lastzd2matchzd2_13112;long BgL_forwardz00_13113;long BgL_bufposz00_13114;obj_t BgL_iportz00_13092;long BgL_lastzd2matchzd2_13093;long BgL_forwardz00_13094;long BgL_bufposz00_13095;obj_t BgL_iportz00_13074;long BgL_lastzd2matchzd2_13075;long BgL_forwardz00_13076;long BgL_bufposz00_13077;obj_t BgL_iportz00_13059;long BgL_lastzd2matchzd2_13060;long BgL_forwardz00_13061;long BgL_bufposz00_13062;obj_t BgL_iportz00_13040;long BgL_lastzd2matchzd2_13041;long BgL_forwardz00_13042;long BgL_bufposz00_13043;obj_t BgL_iportz00_13022;long BgL_lastzd2matchzd2_13023;long BgL_forwardz00_13024;long BgL_bufposz00_13025;
{ /* Llib/date.scm 1064 */
bool_t BgL_test8180z00_14942;
{ /* Llib/date.scm 1064 */
obj_t BgL_arg2070z00_13311;
{ /* Llib/date.scm 1064 */
obj_t BgL_res5255z00_13312;
if(
INPUT_PORTP(BgL_iportz00_11323))
{ /* Llib/date.scm 1064 */
BgL_res5255z00_13312 = BgL_iportz00_11323; }  else 
{ 
obj_t BgL_auxz00_14945;
BgL_auxz00_14945 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7562z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11323); 
FAILURE(BgL_auxz00_14945,BFALSE,BFALSE);} 
BgL_arg2070z00_13311 = BgL_res5255z00_13312; } 
{ /* Llib/date.scm 1064 */
bool_t BgL_res5256z00_13313;
BgL_res5256z00_13313 = 
INPUT_PORT_CLOSEP(BgL_arg2070z00_13311); 
BgL_test8180z00_14942 = BgL_res5256z00_13313; } } 
if(BgL_test8180z00_14942)
{ /* Llib/date.scm 1064 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_arg2065z00_13314;
{ /* Llib/date.scm 1064 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_new1077z00_13315;
{ /* Llib/date.scm 1064 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_new1076z00_13316;
BgL_new1076z00_13316 = 
((BgL_z62iozd2closedzd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2closedzd2errorz62_bgl) ))); 
{ /* Llib/date.scm 1064 */
long BgL_arg2069z00_13317;
{ /* Llib/date.scm 1064 */
long BgL_res5257z00_13318;
BgL_res5257z00_13318 = 
BGL_CLASS_INDEX(BGl_z62iozd2closedzd2errorz62zz__objectz00); 
BgL_arg2069z00_13317 = BgL_res5257z00_13318; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1076z00_13316), BgL_arg2069z00_13317); } 
BgL_new1077z00_13315 = BgL_new1076z00_13316; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1077z00_13315)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1077z00_13315)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_14958;
{ /* Llib/date.scm 1064 */
obj_t BgL_arg2066z00_13319;
{ /* Llib/date.scm 1064 */
obj_t BgL_arg2068z00_13320;
{ /* Llib/date.scm 1064 */
obj_t BgL_res5258z00_13321;
{ /* Llib/date.scm 1064 */
obj_t BgL_classz00_13322;
BgL_classz00_13322 = BGl_z62iozd2closedzd2errorz62zz__objectz00; 
BgL_res5258z00_13321 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_13322); } 
BgL_arg2068z00_13320 = BgL_res5258z00_13321; } 
BgL_arg2066z00_13319 = 
VECTOR_REF(BgL_arg2068z00_13320,((long)2)); } 
{ /* Llib/date.scm 1064 */
obj_t BgL_auxz00_14962;
if(
BGl_classzd2fieldzf3z21zz__objectz00(BgL_arg2066z00_13319))
{ /* Llib/date.scm 1064 */
BgL_auxz00_14962 = BgL_arg2066z00_13319
; }  else 
{ 
obj_t BgL_auxz00_14965;
BgL_auxz00_14965 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7562z00zz__datez00, BGl_string7542z00zz__datez00, BgL_arg2066z00_13319); 
FAILURE(BgL_auxz00_14965,BFALSE,BFALSE);} 
BgL_auxz00_14958 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_auxz00_14962); } } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1077z00_13315)))->BgL_stackz00)=((obj_t)BgL_auxz00_14958),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1077z00_13315)))->BgL_procz00)=((obj_t)BGl_string7525z00zz__datez00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1077z00_13315)))->BgL_msgz00)=((obj_t)BGl_string7543z00zz__datez00),BUNSPEC); 
{ 
obj_t BgL_auxz00_14975;
{ /* Llib/date.scm 1064 */
obj_t BgL_res5259z00_13323;
if(
INPUT_PORTP(BgL_iportz00_11323))
{ /* Llib/date.scm 1064 */
BgL_res5259z00_13323 = BgL_iportz00_11323; }  else 
{ 
obj_t BgL_auxz00_14979;
BgL_auxz00_14979 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7562z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11323); 
FAILURE(BgL_auxz00_14979,BFALSE,BFALSE);} 
BgL_auxz00_14975 = BgL_res5259z00_13323; } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1077z00_13315)))->BgL_objz00)=((obj_t)BgL_auxz00_14975),BUNSPEC); } 
BgL_arg2065z00_13314 = BgL_new1077z00_13315; } 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg2065z00_13314));}  else 
{ /* Llib/date.scm 1064 */
BgL_ignorez00_12891:
{ /* Llib/date.scm 1064 */
long BgL_res5188z00_12910;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_12911;
if(
INPUT_PORTP(BgL_iportz00_11323))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_12911 = BgL_iportz00_11323; }  else 
{ 
obj_t BgL_auxz00_14988;
BgL_auxz00_14988 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11323); 
FAILURE(BgL_auxz00_14988,BFALSE,BFALSE);} 
BgL_res5188z00_12910 = 
RGC_START_MATCH(BgL_inputzd2portzd2_12911); } BgL_res5188z00_12910; } 
{ /* Llib/date.scm 1064 */
long BgL_matchz00_12912;
{ /* Llib/date.scm 1064 */
long BgL_arg2350z00_12913;long BgL_arg2351z00_12914;
{ /* Llib/date.scm 1064 */
long BgL_res5189z00_12915;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_12916;
if(
INPUT_PORTP(BgL_iportz00_11323))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_12916 = BgL_iportz00_11323; }  else 
{ 
obj_t BgL_auxz00_14995;
BgL_auxz00_14995 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11323); 
FAILURE(BgL_auxz00_14995,BFALSE,BFALSE);} 
BgL_res5189z00_12915 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_12916); } 
BgL_arg2350z00_12913 = BgL_res5189z00_12915; } 
{ /* Llib/date.scm 1064 */
long BgL_res5190z00_12917;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_12918;
if(
INPUT_PORTP(BgL_iportz00_11323))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_12918 = BgL_iportz00_11323; }  else 
{ 
obj_t BgL_auxz00_15002;
BgL_auxz00_15002 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11323); 
FAILURE(BgL_auxz00_15002,BFALSE,BFALSE);} 
BgL_res5190z00_12917 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_12918); } 
BgL_arg2351z00_12914 = BgL_res5190z00_12917; } 
BgL_iportz00_13092 = BgL_iportz00_11323; 
BgL_lastzd2matchzd2_13093 = ((long)6); 
BgL_forwardz00_13094 = BgL_arg2350z00_12913; 
BgL_bufposz00_13095 = BgL_arg2351z00_12914; 
BgL_statezd20zd21185z00_12897:
if(
(BgL_forwardz00_13094==BgL_bufposz00_13095))
{ /* Llib/date.scm 1064 */
bool_t BgL_test8188z00_15009;
{ /* Llib/date.scm 1064 */
bool_t BgL_res5131z00_13096;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13097;
if(
INPUT_PORTP(BgL_iportz00_13092))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13097 = BgL_iportz00_13092; }  else 
{ 
obj_t BgL_auxz00_15012;
BgL_auxz00_15012 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7549z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13092); 
FAILURE(BgL_auxz00_15012,BFALSE,BFALSE);} 
BgL_res5131z00_13096 = 
rgc_fill_buffer(BgL_inputzd2portzd2_13097); } 
BgL_test8188z00_15009 = BgL_res5131z00_13096; } 
if(BgL_test8188z00_15009)
{ /* Llib/date.scm 1064 */
long BgL_arg2176z00_13098;long BgL_arg2177z00_13099;
{ /* Llib/date.scm 1064 */
long BgL_res5132z00_13100;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13101;
if(
INPUT_PORTP(BgL_iportz00_13092))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13101 = BgL_iportz00_13092; }  else 
{ 
obj_t BgL_auxz00_15019;
BgL_auxz00_15019 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7549z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13092); 
FAILURE(BgL_auxz00_15019,BFALSE,BFALSE);} 
BgL_res5132z00_13100 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_13101); } 
BgL_arg2176z00_13098 = BgL_res5132z00_13100; } 
{ /* Llib/date.scm 1064 */
long BgL_res5133z00_13102;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13103;
if(
INPUT_PORTP(BgL_iportz00_13092))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13103 = BgL_iportz00_13092; }  else 
{ 
obj_t BgL_auxz00_15026;
BgL_auxz00_15026 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7549z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13092); 
FAILURE(BgL_auxz00_15026,BFALSE,BFALSE);} 
BgL_res5133z00_13102 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_13103); } 
BgL_arg2177z00_13099 = BgL_res5133z00_13102; } 
{ 
long BgL_bufposz00_15032;long BgL_forwardz00_15031;
BgL_forwardz00_15031 = BgL_arg2176z00_13098; 
BgL_bufposz00_15032 = BgL_arg2177z00_13099; 
BgL_bufposz00_13095 = BgL_bufposz00_15032; 
BgL_forwardz00_13094 = BgL_forwardz00_15031; 
goto BgL_statezd20zd21185z00_12897;} }  else 
{ /* Llib/date.scm 1064 */
BgL_matchz00_12912 = BgL_lastzd2matchzd2_13093; } }  else 
{ /* Llib/date.scm 1064 */
int BgL_curz00_13104;
{ /* Llib/date.scm 1064 */
int BgL_res5134z00_13105;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13106;
if(
INPUT_PORTP(BgL_iportz00_13092))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13106 = BgL_iportz00_13092; }  else 
{ 
obj_t BgL_auxz00_15035;
BgL_auxz00_15035 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7549z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13092); 
FAILURE(BgL_auxz00_15035,BFALSE,BFALSE);} 
BgL_res5134z00_13105 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_13106, BgL_forwardz00_13094); } 
BgL_curz00_13104 = BgL_res5134z00_13105; } 
{ /* Llib/date.scm 1064 */

if(
(
(long)(BgL_curz00_13104)==((long)58)))
{ /* Llib/date.scm 1064 */
BgL_iportz00_13245 = BgL_iportz00_13092; 
BgL_lastzd2matchzd2_13246 = BgL_lastzd2matchzd2_13093; 
BgL_forwardz00_13247 = 
(((long)1)+BgL_forwardz00_13094); 
BgL_bufposz00_13248 = BgL_bufposz00_13095; 
BgL_statezd24zd21189z00_12906:
{ /* Llib/date.scm 1064 */
long BgL_newzd2matchzd2_13249;
{ /* Llib/date.scm 1064 */
long BgL_res5051z00_13250;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13251;
if(
INPUT_PORTP(BgL_iportz00_13245))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13251 = BgL_iportz00_13245; }  else 
{ 
obj_t BgL_auxz00_15045;
BgL_auxz00_15045 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7558z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13245); 
FAILURE(BgL_auxz00_15045,BFALSE,BFALSE);} 
BgL_res5051z00_13250 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_13251, BgL_forwardz00_13247); } BgL_res5051z00_13250; } 
BgL_newzd2matchzd2_13249 = ((long)6); 
if(
(BgL_forwardz00_13247==BgL_bufposz00_13248))
{ /* Llib/date.scm 1064 */
bool_t BgL_test8196z00_15052;
{ /* Llib/date.scm 1064 */
bool_t BgL_res5053z00_13252;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13253;
if(
INPUT_PORTP(BgL_iportz00_13245))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13253 = BgL_iportz00_13245; }  else 
{ 
obj_t BgL_auxz00_15055;
BgL_auxz00_15055 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7558z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13245); 
FAILURE(BgL_auxz00_15055,BFALSE,BFALSE);} 
BgL_res5053z00_13252 = 
rgc_fill_buffer(BgL_inputzd2portzd2_13253); } 
BgL_test8196z00_15052 = BgL_res5053z00_13252; } 
if(BgL_test8196z00_15052)
{ /* Llib/date.scm 1064 */
long BgL_arg2102z00_13254;long BgL_arg2103z00_13255;
{ /* Llib/date.scm 1064 */
long BgL_res5054z00_13256;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13257;
if(
INPUT_PORTP(BgL_iportz00_13245))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13257 = BgL_iportz00_13245; }  else 
{ 
obj_t BgL_auxz00_15062;
BgL_auxz00_15062 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7558z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13245); 
FAILURE(BgL_auxz00_15062,BFALSE,BFALSE);} 
BgL_res5054z00_13256 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_13257); } 
BgL_arg2102z00_13254 = BgL_res5054z00_13256; } 
{ /* Llib/date.scm 1064 */
long BgL_res5055z00_13258;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13259;
if(
INPUT_PORTP(BgL_iportz00_13245))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13259 = BgL_iportz00_13245; }  else 
{ 
obj_t BgL_auxz00_15069;
BgL_auxz00_15069 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7558z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13245); 
FAILURE(BgL_auxz00_15069,BFALSE,BFALSE);} 
BgL_res5055z00_13258 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_13259); } 
BgL_arg2103z00_13255 = BgL_res5055z00_13258; } 
{ 
long BgL_bufposz00_15075;long BgL_forwardz00_15074;
BgL_forwardz00_15074 = BgL_arg2102z00_13254; 
BgL_bufposz00_15075 = BgL_arg2103z00_13255; 
BgL_bufposz00_13248 = BgL_bufposz00_15075; 
BgL_forwardz00_13247 = BgL_forwardz00_15074; 
goto BgL_statezd24zd21189z00_12906;} }  else 
{ /* Llib/date.scm 1064 */
BgL_matchz00_12912 = BgL_newzd2matchzd2_13249; } }  else 
{ /* Llib/date.scm 1064 */
int BgL_curz00_13260;
{ /* Llib/date.scm 1064 */
int BgL_res5056z00_13261;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13262;
if(
INPUT_PORTP(BgL_iportz00_13245))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13262 = BgL_iportz00_13245; }  else 
{ 
obj_t BgL_auxz00_15078;
BgL_auxz00_15078 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7558z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13245); 
FAILURE(BgL_auxz00_15078,BFALSE,BFALSE);} 
BgL_res5056z00_13261 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_13262, BgL_forwardz00_13247); } 
BgL_curz00_13260 = BgL_res5056z00_13261; } 
{ /* Llib/date.scm 1064 */

{ /* Llib/date.scm 1064 */
bool_t BgL_test8201z00_15083;
if(
(
(long)(BgL_curz00_13260)>=((long)48)))
{ /* Llib/date.scm 1064 */
BgL_test8201z00_15083 = 
(
(long)(BgL_curz00_13260)<((long)58))
; }  else 
{ /* Llib/date.scm 1064 */
BgL_test8201z00_15083 = ((bool_t)0)
; } 
if(BgL_test8201z00_15083)
{ /* Llib/date.scm 1064 */
BgL_iportz00_13226 = BgL_iportz00_13245; 
BgL_lastzd2matchzd2_13227 = BgL_newzd2matchzd2_13249; 
BgL_forwardz00_13228 = 
(((long)1)+BgL_forwardz00_13247); 
BgL_bufposz00_13229 = BgL_bufposz00_13248; 
BgL_statezd25zd21190z00_12905:
if(
(BgL_forwardz00_13228==BgL_bufposz00_13229))
{ /* Llib/date.scm 1064 */
bool_t BgL_test8204z00_15091;
{ /* Llib/date.scm 1064 */
bool_t BgL_res5061z00_13230;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13231;
if(
INPUT_PORTP(BgL_iportz00_13226))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13231 = BgL_iportz00_13226; }  else 
{ 
obj_t BgL_auxz00_15094;
BgL_auxz00_15094 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7557z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13226); 
FAILURE(BgL_auxz00_15094,BFALSE,BFALSE);} 
BgL_res5061z00_13230 = 
rgc_fill_buffer(BgL_inputzd2portzd2_13231); } 
BgL_test8204z00_15091 = BgL_res5061z00_13230; } 
if(BgL_test8204z00_15091)
{ /* Llib/date.scm 1064 */
long BgL_arg2110z00_13232;long BgL_arg2111z00_13233;
{ /* Llib/date.scm 1064 */
long BgL_res5062z00_13234;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13235;
if(
INPUT_PORTP(BgL_iportz00_13226))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13235 = BgL_iportz00_13226; }  else 
{ 
obj_t BgL_auxz00_15101;
BgL_auxz00_15101 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7557z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13226); 
FAILURE(BgL_auxz00_15101,BFALSE,BFALSE);} 
BgL_res5062z00_13234 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_13235); } 
BgL_arg2110z00_13232 = BgL_res5062z00_13234; } 
{ /* Llib/date.scm 1064 */
long BgL_res5063z00_13236;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13237;
if(
INPUT_PORTP(BgL_iportz00_13226))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13237 = BgL_iportz00_13226; }  else 
{ 
obj_t BgL_auxz00_15108;
BgL_auxz00_15108 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7557z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13226); 
FAILURE(BgL_auxz00_15108,BFALSE,BFALSE);} 
BgL_res5063z00_13236 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_13237); } 
BgL_arg2111z00_13233 = BgL_res5063z00_13236; } 
{ 
long BgL_bufposz00_15114;long BgL_forwardz00_15113;
BgL_forwardz00_15113 = BgL_arg2110z00_13232; 
BgL_bufposz00_15114 = BgL_arg2111z00_13233; 
BgL_bufposz00_13229 = BgL_bufposz00_15114; 
BgL_forwardz00_13228 = BgL_forwardz00_15113; 
goto BgL_statezd25zd21190z00_12905;} }  else 
{ /* Llib/date.scm 1064 */
BgL_matchz00_12912 = BgL_lastzd2matchzd2_13227; } }  else 
{ /* Llib/date.scm 1064 */
int BgL_curz00_13238;
{ /* Llib/date.scm 1064 */
int BgL_res5064z00_13239;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13240;
if(
INPUT_PORTP(BgL_iportz00_13226))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13240 = BgL_iportz00_13226; }  else 
{ 
obj_t BgL_auxz00_15117;
BgL_auxz00_15117 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7557z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13226); 
FAILURE(BgL_auxz00_15117,BFALSE,BFALSE);} 
BgL_res5064z00_13239 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_13240, BgL_forwardz00_13228); } 
BgL_curz00_13238 = BgL_res5064z00_13239; } 
{ /* Llib/date.scm 1064 */

{ /* Llib/date.scm 1064 */
bool_t BgL_test8209z00_15122;
if(
(
(long)(BgL_curz00_13238)>=((long)48)))
{ /* Llib/date.scm 1064 */
BgL_test8209z00_15122 = 
(
(long)(BgL_curz00_13238)<((long)58))
; }  else 
{ /* Llib/date.scm 1064 */
BgL_test8209z00_15122 = ((bool_t)0)
; } 
if(BgL_test8209z00_15122)
{ /* Llib/date.scm 1064 */
long BgL_arg2114z00_13241;
BgL_arg2114z00_13241 = 
(((long)1)+BgL_forwardz00_13228); 
{ /* Llib/date.scm 1064 */
long BgL_newzd2matchzd2_13242;
{ /* Llib/date.scm 1064 */
long BgL_res5068z00_13243;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13244;
if(
INPUT_PORTP(BgL_iportz00_13226))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13244 = BgL_iportz00_13226; }  else 
{ 
obj_t BgL_auxz00_15131;
BgL_auxz00_15131 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7557z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13226); 
FAILURE(BgL_auxz00_15131,BFALSE,BFALSE);} 
BgL_res5068z00_13243 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_13244, BgL_arg2114z00_13241); } BgL_res5068z00_13243; } 
BgL_newzd2matchzd2_13242 = ((long)5); 
BgL_matchz00_12912 = BgL_newzd2matchzd2_13242; } }  else 
{ /* Llib/date.scm 1064 */
BgL_matchz00_12912 = BgL_lastzd2matchzd2_13227; } } } } }  else 
{ /* Llib/date.scm 1064 */
BgL_matchz00_12912 = BgL_newzd2matchzd2_13249; } } } } } }  else 
{ /* Llib/date.scm 1064 */
bool_t BgL_test8212z00_15138;
if(
(
(long)(BgL_curz00_13104)>=((long)48)))
{ /* Llib/date.scm 1064 */
BgL_test8212z00_15138 = 
(
(long)(BgL_curz00_13104)<((long)58))
; }  else 
{ /* Llib/date.scm 1064 */
BgL_test8212z00_15138 = ((bool_t)0)
; } 
if(BgL_test8212z00_15138)
{ /* Llib/date.scm 1064 */
BgL_iportz00_13111 = BgL_iportz00_13092; 
BgL_lastzd2matchzd2_13112 = BgL_lastzd2matchzd2_13093; 
BgL_forwardz00_13113 = 
(((long)1)+BgL_forwardz00_13094); 
BgL_bufposz00_13114 = BgL_bufposz00_13095; 
BgL_statezd23zd21188z00_12898:
{ /* Llib/date.scm 1064 */
long BgL_newzd2matchzd2_13115;
{ /* Llib/date.scm 1064 */
long BgL_res5119z00_13116;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13117;
if(
INPUT_PORTP(BgL_iportz00_13111))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13117 = BgL_iportz00_13111; }  else 
{ 
obj_t BgL_auxz00_15146;
BgL_auxz00_15146 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7550z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13111); 
FAILURE(BgL_auxz00_15146,BFALSE,BFALSE);} 
BgL_res5119z00_13116 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_13117, BgL_forwardz00_13113); } BgL_res5119z00_13116; } 
BgL_newzd2matchzd2_13115 = ((long)6); 
if(
(BgL_forwardz00_13113==BgL_bufposz00_13114))
{ /* Llib/date.scm 1064 */
bool_t BgL_test8216z00_15153;
{ /* Llib/date.scm 1064 */
bool_t BgL_res5121z00_13118;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13119;
if(
INPUT_PORTP(BgL_iportz00_13111))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13119 = BgL_iportz00_13111; }  else 
{ 
obj_t BgL_auxz00_15156;
BgL_auxz00_15156 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7550z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13111); 
FAILURE(BgL_auxz00_15156,BFALSE,BFALSE);} 
BgL_res5121z00_13118 = 
rgc_fill_buffer(BgL_inputzd2portzd2_13119); } 
BgL_test8216z00_15153 = BgL_res5121z00_13118; } 
if(BgL_test8216z00_15153)
{ /* Llib/date.scm 1064 */
long BgL_arg2166z00_13120;long BgL_arg2167z00_13121;
{ /* Llib/date.scm 1064 */
long BgL_res5122z00_13122;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13123;
if(
INPUT_PORTP(BgL_iportz00_13111))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13123 = BgL_iportz00_13111; }  else 
{ 
obj_t BgL_auxz00_15163;
BgL_auxz00_15163 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7550z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13111); 
FAILURE(BgL_auxz00_15163,BFALSE,BFALSE);} 
BgL_res5122z00_13122 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_13123); } 
BgL_arg2166z00_13120 = BgL_res5122z00_13122; } 
{ /* Llib/date.scm 1064 */
long BgL_res5123z00_13124;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13125;
if(
INPUT_PORTP(BgL_iportz00_13111))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13125 = BgL_iportz00_13111; }  else 
{ 
obj_t BgL_auxz00_15170;
BgL_auxz00_15170 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7550z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13111); 
FAILURE(BgL_auxz00_15170,BFALSE,BFALSE);} 
BgL_res5123z00_13124 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_13125); } 
BgL_arg2167z00_13121 = BgL_res5123z00_13124; } 
{ 
long BgL_bufposz00_15176;long BgL_forwardz00_15175;
BgL_forwardz00_15175 = BgL_arg2166z00_13120; 
BgL_bufposz00_15176 = BgL_arg2167z00_13121; 
BgL_bufposz00_13114 = BgL_bufposz00_15176; 
BgL_forwardz00_13113 = BgL_forwardz00_15175; 
goto BgL_statezd23zd21188z00_12898;} }  else 
{ /* Llib/date.scm 1064 */
BgL_matchz00_12912 = BgL_newzd2matchzd2_13115; } }  else 
{ /* Llib/date.scm 1064 */
int BgL_curz00_13126;
{ /* Llib/date.scm 1064 */
int BgL_res5124z00_13127;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13128;
if(
INPUT_PORTP(BgL_iportz00_13111))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13128 = BgL_iportz00_13111; }  else 
{ 
obj_t BgL_auxz00_15179;
BgL_auxz00_15179 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7550z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13111); 
FAILURE(BgL_auxz00_15179,BFALSE,BFALSE);} 
BgL_res5124z00_13127 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_13128, BgL_forwardz00_13113); } 
BgL_curz00_13126 = BgL_res5124z00_13127; } 
{ /* Llib/date.scm 1064 */

if(
(
(long)(BgL_curz00_13126)==((long)58)))
{ /* Llib/date.scm 1064 */
BgL_iportz00_13263 = BgL_iportz00_13111; 
BgL_lastzd2matchzd2_13264 = BgL_newzd2matchzd2_13115; 
BgL_forwardz00_13265 = 
(((long)1)+BgL_forwardz00_13113); 
BgL_bufposz00_13266 = BgL_bufposz00_13114; 
BgL_statezd29zd21194z00_12907:
if(
(BgL_forwardz00_13265==BgL_bufposz00_13266))
{ /* Llib/date.scm 1064 */
bool_t BgL_test8223z00_15189;
{ /* Llib/date.scm 1064 */
bool_t BgL_res5043z00_13267;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13268;
if(
INPUT_PORTP(BgL_iportz00_13263))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13268 = BgL_iportz00_13263; }  else 
{ 
obj_t BgL_auxz00_15192;
BgL_auxz00_15192 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7559z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13263); 
FAILURE(BgL_auxz00_15192,BFALSE,BFALSE);} 
BgL_res5043z00_13267 = 
rgc_fill_buffer(BgL_inputzd2portzd2_13268); } 
BgL_test8223z00_15189 = BgL_res5043z00_13267; } 
if(BgL_test8223z00_15189)
{ /* Llib/date.scm 1064 */
long BgL_arg2093z00_13269;long BgL_arg2094z00_13270;
{ /* Llib/date.scm 1064 */
long BgL_res5044z00_13271;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13272;
if(
INPUT_PORTP(BgL_iportz00_13263))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13272 = BgL_iportz00_13263; }  else 
{ 
obj_t BgL_auxz00_15199;
BgL_auxz00_15199 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7559z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13263); 
FAILURE(BgL_auxz00_15199,BFALSE,BFALSE);} 
BgL_res5044z00_13271 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_13272); } 
BgL_arg2093z00_13269 = BgL_res5044z00_13271; } 
{ /* Llib/date.scm 1064 */
long BgL_res5045z00_13273;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13274;
if(
INPUT_PORTP(BgL_iportz00_13263))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13274 = BgL_iportz00_13263; }  else 
{ 
obj_t BgL_auxz00_15206;
BgL_auxz00_15206 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7559z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13263); 
FAILURE(BgL_auxz00_15206,BFALSE,BFALSE);} 
BgL_res5045z00_13273 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_13274); } 
BgL_arg2094z00_13270 = BgL_res5045z00_13273; } 
{ 
long BgL_bufposz00_15212;long BgL_forwardz00_15211;
BgL_forwardz00_15211 = BgL_arg2093z00_13269; 
BgL_bufposz00_15212 = BgL_arg2094z00_13270; 
BgL_bufposz00_13266 = BgL_bufposz00_15212; 
BgL_forwardz00_13265 = BgL_forwardz00_15211; 
goto BgL_statezd29zd21194z00_12907;} }  else 
{ /* Llib/date.scm 1064 */
BgL_matchz00_12912 = BgL_lastzd2matchzd2_13264; } }  else 
{ /* Llib/date.scm 1064 */
int BgL_curz00_13275;
{ /* Llib/date.scm 1064 */
int BgL_res5046z00_13276;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13277;
if(
INPUT_PORTP(BgL_iportz00_13263))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13277 = BgL_iportz00_13263; }  else 
{ 
obj_t BgL_auxz00_15215;
BgL_auxz00_15215 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7559z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13263); 
FAILURE(BgL_auxz00_15215,BFALSE,BFALSE);} 
BgL_res5046z00_13276 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_13277, BgL_forwardz00_13265); } 
BgL_curz00_13275 = BgL_res5046z00_13276; } 
{ /* Llib/date.scm 1064 */

{ /* Llib/date.scm 1064 */
bool_t BgL_test8228z00_15220;
if(
(
(long)(BgL_curz00_13275)>=((long)48)))
{ /* Llib/date.scm 1064 */
BgL_test8228z00_15220 = 
(
(long)(BgL_curz00_13275)<((long)58))
; }  else 
{ /* Llib/date.scm 1064 */
BgL_test8228z00_15220 = ((bool_t)0)
; } 
if(BgL_test8228z00_15220)
{ /* Llib/date.scm 1064 */
BgL_iportz00_13129 = BgL_iportz00_13263; 
BgL_lastzd2matchzd2_13130 = BgL_lastzd2matchzd2_13264; 
BgL_forwardz00_13131 = 
(((long)1)+BgL_forwardz00_13265); 
BgL_bufposz00_13132 = BgL_bufposz00_13266; 
BgL_statezd210zd21195z00_12899:
if(
(BgL_forwardz00_13131==BgL_bufposz00_13132))
{ /* Llib/date.scm 1064 */
bool_t BgL_test8231z00_15228;
{ /* Llib/date.scm 1064 */
bool_t BgL_res5112z00_13133;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13134;
if(
INPUT_PORTP(BgL_iportz00_13129))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13134 = BgL_iportz00_13129; }  else 
{ 
obj_t BgL_auxz00_15231;
BgL_auxz00_15231 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7551z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13129); 
FAILURE(BgL_auxz00_15231,BFALSE,BFALSE);} 
BgL_res5112z00_13133 = 
rgc_fill_buffer(BgL_inputzd2portzd2_13134); } 
BgL_test8231z00_15228 = BgL_res5112z00_13133; } 
if(BgL_test8231z00_15228)
{ /* Llib/date.scm 1064 */
long BgL_arg2158z00_13135;long BgL_arg2159z00_13136;
{ /* Llib/date.scm 1064 */
long BgL_res5113z00_13137;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13138;
if(
INPUT_PORTP(BgL_iportz00_13129))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13138 = BgL_iportz00_13129; }  else 
{ 
obj_t BgL_auxz00_15238;
BgL_auxz00_15238 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7551z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13129); 
FAILURE(BgL_auxz00_15238,BFALSE,BFALSE);} 
BgL_res5113z00_13137 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_13138); } 
BgL_arg2158z00_13135 = BgL_res5113z00_13137; } 
{ /* Llib/date.scm 1064 */
long BgL_res5114z00_13139;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13140;
if(
INPUT_PORTP(BgL_iportz00_13129))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13140 = BgL_iportz00_13129; }  else 
{ 
obj_t BgL_auxz00_15245;
BgL_auxz00_15245 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7551z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13129); 
FAILURE(BgL_auxz00_15245,BFALSE,BFALSE);} 
BgL_res5114z00_13139 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_13140); } 
BgL_arg2159z00_13136 = BgL_res5114z00_13139; } 
{ 
long BgL_bufposz00_15251;long BgL_forwardz00_15250;
BgL_forwardz00_15250 = BgL_arg2158z00_13135; 
BgL_bufposz00_15251 = BgL_arg2159z00_13136; 
BgL_bufposz00_13132 = BgL_bufposz00_15251; 
BgL_forwardz00_13131 = BgL_forwardz00_15250; 
goto BgL_statezd210zd21195z00_12899;} }  else 
{ /* Llib/date.scm 1064 */
BgL_matchz00_12912 = BgL_lastzd2matchzd2_13130; } }  else 
{ /* Llib/date.scm 1064 */
int BgL_curz00_13141;
{ /* Llib/date.scm 1064 */
int BgL_res5115z00_13142;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13143;
if(
INPUT_PORTP(BgL_iportz00_13129))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13143 = BgL_iportz00_13129; }  else 
{ 
obj_t BgL_auxz00_15254;
BgL_auxz00_15254 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7551z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13129); 
FAILURE(BgL_auxz00_15254,BFALSE,BFALSE);} 
BgL_res5115z00_13142 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_13143, BgL_forwardz00_13131); } 
BgL_curz00_13141 = BgL_res5115z00_13142; } 
{ /* Llib/date.scm 1064 */

{ /* Llib/date.scm 1064 */
bool_t BgL_test8236z00_15259;
if(
(
(long)(BgL_curz00_13141)>=((long)48)))
{ /* Llib/date.scm 1064 */
BgL_test8236z00_15259 = 
(
(long)(BgL_curz00_13141)<((long)58))
; }  else 
{ /* Llib/date.scm 1064 */
BgL_test8236z00_15259 = ((bool_t)0)
; } 
if(BgL_test8236z00_15259)
{ /* Llib/date.scm 1064 */
BgL_iportz00_13178 = BgL_iportz00_13129; 
BgL_lastzd2matchzd2_13179 = BgL_lastzd2matchzd2_13130; 
BgL_forwardz00_13180 = 
(((long)1)+BgL_forwardz00_13131); 
BgL_bufposz00_13181 = BgL_bufposz00_13132; 
BgL_statezd211zd21196z00_12902:
{ /* Llib/date.scm 1064 */
long BgL_newzd2matchzd2_13182;
{ /* Llib/date.scm 1064 */
long BgL_res5085z00_13183;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13184;
if(
INPUT_PORTP(BgL_iportz00_13178))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13184 = BgL_iportz00_13178; }  else 
{ 
obj_t BgL_auxz00_15267;
BgL_auxz00_15267 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7554z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13178); 
FAILURE(BgL_auxz00_15267,BFALSE,BFALSE);} 
BgL_res5085z00_13183 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_13184, BgL_forwardz00_13180); } BgL_res5085z00_13183; } 
BgL_newzd2matchzd2_13182 = ((long)1); 
if(
(BgL_forwardz00_13180==BgL_bufposz00_13181))
{ /* Llib/date.scm 1064 */
bool_t BgL_test8240z00_15274;
{ /* Llib/date.scm 1064 */
bool_t BgL_res5087z00_13185;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13186;
if(
INPUT_PORTP(BgL_iportz00_13178))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13186 = BgL_iportz00_13178; }  else 
{ 
obj_t BgL_auxz00_15277;
BgL_auxz00_15277 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7554z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13178); 
FAILURE(BgL_auxz00_15277,BFALSE,BFALSE);} 
BgL_res5087z00_13185 = 
rgc_fill_buffer(BgL_inputzd2portzd2_13186); } 
BgL_test8240z00_15274 = BgL_res5087z00_13185; } 
if(BgL_test8240z00_15274)
{ /* Llib/date.scm 1064 */
long BgL_arg2134z00_13187;long BgL_arg2135z00_13188;
{ /* Llib/date.scm 1064 */
long BgL_res5088z00_13189;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13190;
if(
INPUT_PORTP(BgL_iportz00_13178))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13190 = BgL_iportz00_13178; }  else 
{ 
obj_t BgL_auxz00_15284;
BgL_auxz00_15284 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7554z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13178); 
FAILURE(BgL_auxz00_15284,BFALSE,BFALSE);} 
BgL_res5088z00_13189 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_13190); } 
BgL_arg2134z00_13187 = BgL_res5088z00_13189; } 
{ /* Llib/date.scm 1064 */
long BgL_res5089z00_13191;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13192;
if(
INPUT_PORTP(BgL_iportz00_13178))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13192 = BgL_iportz00_13178; }  else 
{ 
obj_t BgL_auxz00_15291;
BgL_auxz00_15291 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7554z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13178); 
FAILURE(BgL_auxz00_15291,BFALSE,BFALSE);} 
BgL_res5089z00_13191 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_13192); } 
BgL_arg2135z00_13188 = BgL_res5089z00_13191; } 
{ 
long BgL_bufposz00_15297;long BgL_forwardz00_15296;
BgL_forwardz00_15296 = BgL_arg2134z00_13187; 
BgL_bufposz00_15297 = BgL_arg2135z00_13188; 
BgL_bufposz00_13181 = BgL_bufposz00_15297; 
BgL_forwardz00_13180 = BgL_forwardz00_15296; 
goto BgL_statezd211zd21196z00_12902;} }  else 
{ /* Llib/date.scm 1064 */
BgL_matchz00_12912 = BgL_newzd2matchzd2_13182; } }  else 
{ /* Llib/date.scm 1064 */
int BgL_curz00_13193;
{ /* Llib/date.scm 1064 */
int BgL_res5090z00_13194;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13195;
if(
INPUT_PORTP(BgL_iportz00_13178))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13195 = BgL_iportz00_13178; }  else 
{ 
obj_t BgL_auxz00_15300;
BgL_auxz00_15300 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7554z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13178); 
FAILURE(BgL_auxz00_15300,BFALSE,BFALSE);} 
BgL_res5090z00_13194 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_13195, BgL_forwardz00_13180); } 
BgL_curz00_13193 = BgL_res5090z00_13194; } 
{ /* Llib/date.scm 1064 */

if(
(
(long)(BgL_curz00_13193)==((long)58)))
{ /* Llib/date.scm 1064 */
BgL_iportz00_13163 = BgL_iportz00_13178; 
BgL_lastzd2matchzd2_13164 = BgL_newzd2matchzd2_13182; 
BgL_forwardz00_13165 = 
(((long)1)+BgL_forwardz00_13180); 
BgL_bufposz00_13166 = BgL_bufposz00_13181; 
BgL_statezd212zd21197z00_12901:
if(
(BgL_forwardz00_13165==BgL_bufposz00_13166))
{ /* Llib/date.scm 1064 */
bool_t BgL_test8247z00_15310;
{ /* Llib/date.scm 1064 */
bool_t BgL_res5094z00_13167;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13168;
if(
INPUT_PORTP(BgL_iportz00_13163))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13168 = BgL_iportz00_13163; }  else 
{ 
obj_t BgL_auxz00_15313;
BgL_auxz00_15313 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7553z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13163); 
FAILURE(BgL_auxz00_15313,BFALSE,BFALSE);} 
BgL_res5094z00_13167 = 
rgc_fill_buffer(BgL_inputzd2portzd2_13168); } 
BgL_test8247z00_15310 = BgL_res5094z00_13167; } 
if(BgL_test8247z00_15310)
{ /* Llib/date.scm 1064 */
long BgL_arg2141z00_13169;long BgL_arg2142z00_13170;
{ /* Llib/date.scm 1064 */
long BgL_res5095z00_13171;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13172;
if(
INPUT_PORTP(BgL_iportz00_13163))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13172 = BgL_iportz00_13163; }  else 
{ 
obj_t BgL_auxz00_15320;
BgL_auxz00_15320 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7553z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13163); 
FAILURE(BgL_auxz00_15320,BFALSE,BFALSE);} 
BgL_res5095z00_13171 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_13172); } 
BgL_arg2141z00_13169 = BgL_res5095z00_13171; } 
{ /* Llib/date.scm 1064 */
long BgL_res5096z00_13173;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13174;
if(
INPUT_PORTP(BgL_iportz00_13163))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13174 = BgL_iportz00_13163; }  else 
{ 
obj_t BgL_auxz00_15327;
BgL_auxz00_15327 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7553z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13163); 
FAILURE(BgL_auxz00_15327,BFALSE,BFALSE);} 
BgL_res5096z00_13173 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_13174); } 
BgL_arg2142z00_13170 = BgL_res5096z00_13173; } 
{ 
long BgL_bufposz00_15333;long BgL_forwardz00_15332;
BgL_forwardz00_15332 = BgL_arg2141z00_13169; 
BgL_bufposz00_15333 = BgL_arg2142z00_13170; 
BgL_bufposz00_13166 = BgL_bufposz00_15333; 
BgL_forwardz00_13165 = BgL_forwardz00_15332; 
goto BgL_statezd212zd21197z00_12901;} }  else 
{ /* Llib/date.scm 1064 */
BgL_matchz00_12912 = BgL_lastzd2matchzd2_13164; } }  else 
{ /* Llib/date.scm 1064 */
int BgL_curz00_13175;
{ /* Llib/date.scm 1064 */
int BgL_res5097z00_13176;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13177;
if(
INPUT_PORTP(BgL_iportz00_13163))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13177 = BgL_iportz00_13163; }  else 
{ 
obj_t BgL_auxz00_15336;
BgL_auxz00_15336 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7553z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13163); 
FAILURE(BgL_auxz00_15336,BFALSE,BFALSE);} 
BgL_res5097z00_13176 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_13177, BgL_forwardz00_13165); } 
BgL_curz00_13175 = BgL_res5097z00_13176; } 
{ /* Llib/date.scm 1064 */

{ /* Llib/date.scm 1064 */
bool_t BgL_test8252z00_15341;
if(
(
(long)(BgL_curz00_13175)>=((long)48)))
{ /* Llib/date.scm 1064 */
BgL_test8252z00_15341 = 
(
(long)(BgL_curz00_13175)<((long)58))
; }  else 
{ /* Llib/date.scm 1064 */
BgL_test8252z00_15341 = ((bool_t)0)
; } 
if(BgL_test8252z00_15341)
{ /* Llib/date.scm 1064 */
BgL_iportz00_13144 = BgL_iportz00_13163; 
BgL_lastzd2matchzd2_13145 = BgL_lastzd2matchzd2_13164; 
BgL_forwardz00_13146 = 
(((long)1)+BgL_forwardz00_13165); 
BgL_bufposz00_13147 = BgL_bufposz00_13166; 
BgL_statezd213zd21198z00_12900:
if(
(BgL_forwardz00_13146==BgL_bufposz00_13147))
{ /* Llib/date.scm 1064 */
bool_t BgL_test8255z00_15349;
{ /* Llib/date.scm 1064 */
bool_t BgL_res5102z00_13148;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13149;
if(
INPUT_PORTP(BgL_iportz00_13144))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13149 = BgL_iportz00_13144; }  else 
{ 
obj_t BgL_auxz00_15352;
BgL_auxz00_15352 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7552z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13144); 
FAILURE(BgL_auxz00_15352,BFALSE,BFALSE);} 
BgL_res5102z00_13148 = 
rgc_fill_buffer(BgL_inputzd2portzd2_13149); } 
BgL_test8255z00_15349 = BgL_res5102z00_13148; } 
if(BgL_test8255z00_15349)
{ /* Llib/date.scm 1064 */
long BgL_arg2149z00_13150;long BgL_arg2150z00_13151;
{ /* Llib/date.scm 1064 */
long BgL_res5103z00_13152;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13153;
if(
INPUT_PORTP(BgL_iportz00_13144))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13153 = BgL_iportz00_13144; }  else 
{ 
obj_t BgL_auxz00_15359;
BgL_auxz00_15359 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7552z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13144); 
FAILURE(BgL_auxz00_15359,BFALSE,BFALSE);} 
BgL_res5103z00_13152 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_13153); } 
BgL_arg2149z00_13150 = BgL_res5103z00_13152; } 
{ /* Llib/date.scm 1064 */
long BgL_res5104z00_13154;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13155;
if(
INPUT_PORTP(BgL_iportz00_13144))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13155 = BgL_iportz00_13144; }  else 
{ 
obj_t BgL_auxz00_15366;
BgL_auxz00_15366 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7552z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13144); 
FAILURE(BgL_auxz00_15366,BFALSE,BFALSE);} 
BgL_res5104z00_13154 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_13155); } 
BgL_arg2150z00_13151 = BgL_res5104z00_13154; } 
{ 
long BgL_bufposz00_15372;long BgL_forwardz00_15371;
BgL_forwardz00_15371 = BgL_arg2149z00_13150; 
BgL_bufposz00_15372 = BgL_arg2150z00_13151; 
BgL_bufposz00_13147 = BgL_bufposz00_15372; 
BgL_forwardz00_13146 = BgL_forwardz00_15371; 
goto BgL_statezd213zd21198z00_12900;} }  else 
{ /* Llib/date.scm 1064 */
BgL_matchz00_12912 = BgL_lastzd2matchzd2_13145; } }  else 
{ /* Llib/date.scm 1064 */
int BgL_curz00_13156;
{ /* Llib/date.scm 1064 */
int BgL_res5105z00_13157;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13158;
if(
INPUT_PORTP(BgL_iportz00_13144))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13158 = BgL_iportz00_13144; }  else 
{ 
obj_t BgL_auxz00_15375;
BgL_auxz00_15375 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7552z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13144); 
FAILURE(BgL_auxz00_15375,BFALSE,BFALSE);} 
BgL_res5105z00_13157 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_13158, BgL_forwardz00_13146); } 
BgL_curz00_13156 = BgL_res5105z00_13157; } 
{ /* Llib/date.scm 1064 */

{ /* Llib/date.scm 1064 */
bool_t BgL_test8260z00_15380;
if(
(
(long)(BgL_curz00_13156)>=((long)48)))
{ /* Llib/date.scm 1064 */
BgL_test8260z00_15380 = 
(
(long)(BgL_curz00_13156)<((long)58))
; }  else 
{ /* Llib/date.scm 1064 */
BgL_test8260z00_15380 = ((bool_t)0)
; } 
if(BgL_test8260z00_15380)
{ /* Llib/date.scm 1064 */
long BgL_arg2153z00_13159;
BgL_arg2153z00_13159 = 
(((long)1)+BgL_forwardz00_13146); 
{ /* Llib/date.scm 1064 */
long BgL_newzd2matchzd2_13160;
{ /* Llib/date.scm 1064 */
long BgL_res5109z00_13161;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13162;
if(
INPUT_PORTP(BgL_iportz00_13144))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13162 = BgL_iportz00_13144; }  else 
{ 
obj_t BgL_auxz00_15389;
BgL_auxz00_15389 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7552z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13144); 
FAILURE(BgL_auxz00_15389,BFALSE,BFALSE);} 
BgL_res5109z00_13161 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_13162, BgL_arg2153z00_13159); } BgL_res5109z00_13161; } 
BgL_newzd2matchzd2_13160 = ((long)4); 
BgL_matchz00_12912 = BgL_newzd2matchzd2_13160; } }  else 
{ /* Llib/date.scm 1064 */
BgL_matchz00_12912 = BgL_lastzd2matchzd2_13145; } } } } }  else 
{ /* Llib/date.scm 1064 */
BgL_matchz00_12912 = BgL_lastzd2matchzd2_13164; } } } } }  else 
{ /* Llib/date.scm 1064 */
BgL_matchz00_12912 = BgL_newzd2matchzd2_13182; } } } } }  else 
{ /* Llib/date.scm 1064 */
BgL_matchz00_12912 = BgL_lastzd2matchzd2_13130; } } } } }  else 
{ /* Llib/date.scm 1064 */
BgL_matchz00_12912 = BgL_lastzd2matchzd2_13264; } } } } }  else 
{ /* Llib/date.scm 1064 */
bool_t BgL_test8263z00_15399;
if(
(
(long)(BgL_curz00_13126)>=((long)48)))
{ /* Llib/date.scm 1064 */
BgL_test8263z00_15399 = 
(
(long)(BgL_curz00_13126)<((long)58))
; }  else 
{ /* Llib/date.scm 1064 */
BgL_test8263z00_15399 = ((bool_t)0)
; } 
if(BgL_test8263z00_15399)
{ /* Llib/date.scm 1064 */
BgL_iportz00_13196 = BgL_iportz00_13111; 
BgL_lastzd2matchzd2_13197 = BgL_newzd2matchzd2_13115; 
BgL_forwardz00_13198 = 
(((long)1)+BgL_forwardz00_13113); 
BgL_bufposz00_13199 = BgL_bufposz00_13114; 
BgL_statezd28zd21193z00_12903:
if(
(BgL_forwardz00_13198==BgL_bufposz00_13199))
{ /* Llib/date.scm 1064 */
bool_t BgL_test8266z00_15407;
{ /* Llib/date.scm 1064 */
bool_t BgL_res5079z00_13200;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13201;
if(
INPUT_PORTP(BgL_iportz00_13196))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13201 = BgL_iportz00_13196; }  else 
{ 
obj_t BgL_auxz00_15410;
BgL_auxz00_15410 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7555z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13196); 
FAILURE(BgL_auxz00_15410,BFALSE,BFALSE);} 
BgL_res5079z00_13200 = 
rgc_fill_buffer(BgL_inputzd2portzd2_13201); } 
BgL_test8266z00_15407 = BgL_res5079z00_13200; } 
if(BgL_test8266z00_15407)
{ /* Llib/date.scm 1064 */
long BgL_arg2127z00_13202;long BgL_arg2128z00_13203;
{ /* Llib/date.scm 1064 */
long BgL_res5080z00_13204;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13205;
if(
INPUT_PORTP(BgL_iportz00_13196))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13205 = BgL_iportz00_13196; }  else 
{ 
obj_t BgL_auxz00_15417;
BgL_auxz00_15417 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7555z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13196); 
FAILURE(BgL_auxz00_15417,BFALSE,BFALSE);} 
BgL_res5080z00_13204 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_13205); } 
BgL_arg2127z00_13202 = BgL_res5080z00_13204; } 
{ /* Llib/date.scm 1064 */
long BgL_res5081z00_13206;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13207;
if(
INPUT_PORTP(BgL_iportz00_13196))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13207 = BgL_iportz00_13196; }  else 
{ 
obj_t BgL_auxz00_15424;
BgL_auxz00_15424 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7555z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13196); 
FAILURE(BgL_auxz00_15424,BFALSE,BFALSE);} 
BgL_res5081z00_13206 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_13207); } 
BgL_arg2128z00_13203 = BgL_res5081z00_13206; } 
{ 
long BgL_bufposz00_15430;long BgL_forwardz00_15429;
BgL_forwardz00_15429 = BgL_arg2127z00_13202; 
BgL_bufposz00_15430 = BgL_arg2128z00_13203; 
BgL_bufposz00_13199 = BgL_bufposz00_15430; 
BgL_forwardz00_13198 = BgL_forwardz00_15429; 
goto BgL_statezd28zd21193z00_12903;} }  else 
{ /* Llib/date.scm 1064 */
BgL_matchz00_12912 = BgL_lastzd2matchzd2_13197; } }  else 
{ /* Llib/date.scm 1064 */
int BgL_curz00_13208;
{ /* Llib/date.scm 1064 */
int BgL_res5082z00_13209;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13210;
if(
INPUT_PORTP(BgL_iportz00_13196))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13210 = BgL_iportz00_13196; }  else 
{ 
obj_t BgL_auxz00_15433;
BgL_auxz00_15433 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7555z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13196); 
FAILURE(BgL_auxz00_15433,BFALSE,BFALSE);} 
BgL_res5082z00_13209 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_13210, BgL_forwardz00_13198); } 
BgL_curz00_13208 = BgL_res5082z00_13209; } 
{ /* Llib/date.scm 1064 */

if(
(
(long)(BgL_curz00_13208)==((long)58)))
{ /* Llib/date.scm 1064 */
BgL_iportz00_13211 = BgL_iportz00_13196; 
BgL_lastzd2matchzd2_13212 = BgL_lastzd2matchzd2_13197; 
BgL_forwardz00_13213 = 
(((long)1)+BgL_forwardz00_13198); 
BgL_bufposz00_13214 = BgL_bufposz00_13199; 
BgL_statezd215zd21200z00_12904:
if(
(BgL_forwardz00_13213==BgL_bufposz00_13214))
{ /* Llib/date.scm 1064 */
bool_t BgL_test8273z00_15443;
{ /* Llib/date.scm 1064 */
bool_t BgL_res5071z00_13215;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13216;
if(
INPUT_PORTP(BgL_iportz00_13211))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13216 = BgL_iportz00_13211; }  else 
{ 
obj_t BgL_auxz00_15446;
BgL_auxz00_15446 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7556z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13211); 
FAILURE(BgL_auxz00_15446,BFALSE,BFALSE);} 
BgL_res5071z00_13215 = 
rgc_fill_buffer(BgL_inputzd2portzd2_13216); } 
BgL_test8273z00_15443 = BgL_res5071z00_13215; } 
if(BgL_test8273z00_15443)
{ /* Llib/date.scm 1064 */
long BgL_arg2119z00_13217;long BgL_arg2120z00_13218;
{ /* Llib/date.scm 1064 */
long BgL_res5072z00_13219;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13220;
if(
INPUT_PORTP(BgL_iportz00_13211))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13220 = BgL_iportz00_13211; }  else 
{ 
obj_t BgL_auxz00_15453;
BgL_auxz00_15453 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7556z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13211); 
FAILURE(BgL_auxz00_15453,BFALSE,BFALSE);} 
BgL_res5072z00_13219 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_13220); } 
BgL_arg2119z00_13217 = BgL_res5072z00_13219; } 
{ /* Llib/date.scm 1064 */
long BgL_res5073z00_13221;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13222;
if(
INPUT_PORTP(BgL_iportz00_13211))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13222 = BgL_iportz00_13211; }  else 
{ 
obj_t BgL_auxz00_15460;
BgL_auxz00_15460 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7556z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13211); 
FAILURE(BgL_auxz00_15460,BFALSE,BFALSE);} 
BgL_res5073z00_13221 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_13222); } 
BgL_arg2120z00_13218 = BgL_res5073z00_13221; } 
{ 
long BgL_bufposz00_15466;long BgL_forwardz00_15465;
BgL_forwardz00_15465 = BgL_arg2119z00_13217; 
BgL_bufposz00_15466 = BgL_arg2120z00_13218; 
BgL_bufposz00_13214 = BgL_bufposz00_15466; 
BgL_forwardz00_13213 = BgL_forwardz00_15465; 
goto BgL_statezd215zd21200z00_12904;} }  else 
{ /* Llib/date.scm 1064 */
BgL_matchz00_12912 = BgL_lastzd2matchzd2_13212; } }  else 
{ /* Llib/date.scm 1064 */
int BgL_curz00_13223;
{ /* Llib/date.scm 1064 */
int BgL_res5074z00_13224;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13225;
if(
INPUT_PORTP(BgL_iportz00_13211))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13225 = BgL_iportz00_13211; }  else 
{ 
obj_t BgL_auxz00_15469;
BgL_auxz00_15469 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7556z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13211); 
FAILURE(BgL_auxz00_15469,BFALSE,BFALSE);} 
BgL_res5074z00_13224 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_13225, BgL_forwardz00_13213); } 
BgL_curz00_13223 = BgL_res5074z00_13224; } 
{ /* Llib/date.scm 1064 */

{ /* Llib/date.scm 1064 */
bool_t BgL_test8278z00_15474;
if(
(
(long)(BgL_curz00_13223)>=((long)48)))
{ /* Llib/date.scm 1064 */
BgL_test8278z00_15474 = 
(
(long)(BgL_curz00_13223)<((long)58))
; }  else 
{ /* Llib/date.scm 1064 */
BgL_test8278z00_15474 = ((bool_t)0)
; } 
if(BgL_test8278z00_15474)
{ /* Llib/date.scm 1064 */
BgL_iportz00_13296 = BgL_iportz00_13211; 
BgL_lastzd2matchzd2_13297 = BgL_lastzd2matchzd2_13212; 
BgL_forwardz00_13298 = 
(((long)1)+BgL_forwardz00_13213); 
BgL_bufposz00_13299 = BgL_bufposz00_13214; 
BgL_statezd216zd21201z00_12909:
if(
(BgL_forwardz00_13298==BgL_bufposz00_13299))
{ /* Llib/date.scm 1064 */
bool_t BgL_test8281z00_15482;
{ /* Llib/date.scm 1064 */
bool_t BgL_res5024z00_13300;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13301;
if(
INPUT_PORTP(BgL_iportz00_13296))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13301 = BgL_iportz00_13296; }  else 
{ 
obj_t BgL_auxz00_15485;
BgL_auxz00_15485 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7561z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13296); 
FAILURE(BgL_auxz00_15485,BFALSE,BFALSE);} 
BgL_res5024z00_13300 = 
rgc_fill_buffer(BgL_inputzd2portzd2_13301); } 
BgL_test8281z00_15482 = BgL_res5024z00_13300; } 
if(BgL_test8281z00_15482)
{ /* Llib/date.scm 1064 */
long BgL_arg2075z00_13302;long BgL_arg2076z00_13303;
{ /* Llib/date.scm 1064 */
long BgL_res5025z00_13304;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13305;
if(
INPUT_PORTP(BgL_iportz00_13296))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13305 = BgL_iportz00_13296; }  else 
{ 
obj_t BgL_auxz00_15492;
BgL_auxz00_15492 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7561z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13296); 
FAILURE(BgL_auxz00_15492,BFALSE,BFALSE);} 
BgL_res5025z00_13304 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_13305); } 
BgL_arg2075z00_13302 = BgL_res5025z00_13304; } 
{ /* Llib/date.scm 1064 */
long BgL_res5026z00_13306;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13307;
if(
INPUT_PORTP(BgL_iportz00_13296))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13307 = BgL_iportz00_13296; }  else 
{ 
obj_t BgL_auxz00_15499;
BgL_auxz00_15499 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7561z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13296); 
FAILURE(BgL_auxz00_15499,BFALSE,BFALSE);} 
BgL_res5026z00_13306 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_13307); } 
BgL_arg2076z00_13303 = BgL_res5026z00_13306; } 
{ 
long BgL_bufposz00_15505;long BgL_forwardz00_15504;
BgL_forwardz00_15504 = BgL_arg2075z00_13302; 
BgL_bufposz00_15505 = BgL_arg2076z00_13303; 
BgL_bufposz00_13299 = BgL_bufposz00_15505; 
BgL_forwardz00_13298 = BgL_forwardz00_15504; 
goto BgL_statezd216zd21201z00_12909;} }  else 
{ /* Llib/date.scm 1064 */
BgL_matchz00_12912 = BgL_lastzd2matchzd2_13297; } }  else 
{ /* Llib/date.scm 1064 */
int BgL_curz00_13308;
{ /* Llib/date.scm 1064 */
int BgL_res5027z00_13309;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13310;
if(
INPUT_PORTP(BgL_iportz00_13296))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13310 = BgL_iportz00_13296; }  else 
{ 
obj_t BgL_auxz00_15508;
BgL_auxz00_15508 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7561z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13296); 
FAILURE(BgL_auxz00_15508,BFALSE,BFALSE);} 
BgL_res5027z00_13309 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_13310, BgL_forwardz00_13298); } 
BgL_curz00_13308 = BgL_res5027z00_13309; } 
{ /* Llib/date.scm 1064 */

{ /* Llib/date.scm 1064 */
bool_t BgL_test8286z00_15513;
if(
(
(long)(BgL_curz00_13308)>=((long)48)))
{ /* Llib/date.scm 1064 */
BgL_test8286z00_15513 = 
(
(long)(BgL_curz00_13308)<((long)58))
; }  else 
{ /* Llib/date.scm 1064 */
BgL_test8286z00_15513 = ((bool_t)0)
; } 
if(BgL_test8286z00_15513)
{ /* Llib/date.scm 1064 */
BgL_iportz00_13074 = BgL_iportz00_13296; 
BgL_lastzd2matchzd2_13075 = BgL_lastzd2matchzd2_13297; 
BgL_forwardz00_13076 = 
(((long)1)+BgL_forwardz00_13298); 
BgL_bufposz00_13077 = BgL_bufposz00_13299; 
BgL_statezd217zd21202z00_12896:
{ /* Llib/date.scm 1064 */
long BgL_newzd2matchzd2_13078;
{ /* Llib/date.scm 1064 */
long BgL_res5147z00_13079;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13080;
if(
INPUT_PORTP(BgL_iportz00_13074))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13080 = BgL_iportz00_13074; }  else 
{ 
obj_t BgL_auxz00_15521;
BgL_auxz00_15521 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7548z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13074); 
FAILURE(BgL_auxz00_15521,BFALSE,BFALSE);} 
BgL_res5147z00_13079 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_13080, BgL_forwardz00_13076); } BgL_res5147z00_13079; } 
BgL_newzd2matchzd2_13078 = ((long)2); 
if(
(BgL_forwardz00_13076==BgL_bufposz00_13077))
{ /* Llib/date.scm 1064 */
bool_t BgL_test8290z00_15528;
{ /* Llib/date.scm 1064 */
bool_t BgL_res5149z00_13081;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13082;
if(
INPUT_PORTP(BgL_iportz00_13074))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13082 = BgL_iportz00_13074; }  else 
{ 
obj_t BgL_auxz00_15531;
BgL_auxz00_15531 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7548z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13074); 
FAILURE(BgL_auxz00_15531,BFALSE,BFALSE);} 
BgL_res5149z00_13081 = 
rgc_fill_buffer(BgL_inputzd2portzd2_13082); } 
BgL_test8290z00_15528 = BgL_res5149z00_13081; } 
if(BgL_test8290z00_15528)
{ /* Llib/date.scm 1064 */
long BgL_arg2192z00_13083;long BgL_arg2193z00_13084;
{ /* Llib/date.scm 1064 */
long BgL_res5150z00_13085;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13086;
if(
INPUT_PORTP(BgL_iportz00_13074))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13086 = BgL_iportz00_13074; }  else 
{ 
obj_t BgL_auxz00_15538;
BgL_auxz00_15538 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7548z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13074); 
FAILURE(BgL_auxz00_15538,BFALSE,BFALSE);} 
BgL_res5150z00_13085 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_13086); } 
BgL_arg2192z00_13083 = BgL_res5150z00_13085; } 
{ /* Llib/date.scm 1064 */
long BgL_res5151z00_13087;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13088;
if(
INPUT_PORTP(BgL_iportz00_13074))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13088 = BgL_iportz00_13074; }  else 
{ 
obj_t BgL_auxz00_15545;
BgL_auxz00_15545 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7548z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13074); 
FAILURE(BgL_auxz00_15545,BFALSE,BFALSE);} 
BgL_res5151z00_13087 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_13088); } 
BgL_arg2193z00_13084 = BgL_res5151z00_13087; } 
{ 
long BgL_bufposz00_15551;long BgL_forwardz00_15550;
BgL_forwardz00_15550 = BgL_arg2192z00_13083; 
BgL_bufposz00_15551 = BgL_arg2193z00_13084; 
BgL_bufposz00_13077 = BgL_bufposz00_15551; 
BgL_forwardz00_13076 = BgL_forwardz00_15550; 
goto BgL_statezd217zd21202z00_12896;} }  else 
{ /* Llib/date.scm 1064 */
BgL_matchz00_12912 = BgL_newzd2matchzd2_13078; } }  else 
{ /* Llib/date.scm 1064 */
int BgL_curz00_13089;
{ /* Llib/date.scm 1064 */
int BgL_res5152z00_13090;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13091;
if(
INPUT_PORTP(BgL_iportz00_13074))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13091 = BgL_iportz00_13074; }  else 
{ 
obj_t BgL_auxz00_15554;
BgL_auxz00_15554 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7548z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13074); 
FAILURE(BgL_auxz00_15554,BFALSE,BFALSE);} 
BgL_res5152z00_13090 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_13091, BgL_forwardz00_13076); } 
BgL_curz00_13089 = BgL_res5152z00_13090; } 
{ /* Llib/date.scm 1064 */

if(
(
(long)(BgL_curz00_13089)==((long)58)))
{ /* Llib/date.scm 1064 */
BgL_iportz00_13059 = BgL_iportz00_13074; 
BgL_lastzd2matchzd2_13060 = BgL_newzd2matchzd2_13078; 
BgL_forwardz00_13061 = 
(((long)1)+BgL_forwardz00_13076); 
BgL_bufposz00_13062 = BgL_bufposz00_13077; 
BgL_statezd218zd21203z00_12895:
if(
(BgL_forwardz00_13061==BgL_bufposz00_13062))
{ /* Llib/date.scm 1064 */
bool_t BgL_test8297z00_15564;
{ /* Llib/date.scm 1064 */
bool_t BgL_res5156z00_13063;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13064;
if(
INPUT_PORTP(BgL_iportz00_13059))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13064 = BgL_iportz00_13059; }  else 
{ 
obj_t BgL_auxz00_15567;
BgL_auxz00_15567 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7547z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13059); 
FAILURE(BgL_auxz00_15567,BFALSE,BFALSE);} 
BgL_res5156z00_13063 = 
rgc_fill_buffer(BgL_inputzd2portzd2_13064); } 
BgL_test8297z00_15564 = BgL_res5156z00_13063; } 
if(BgL_test8297z00_15564)
{ /* Llib/date.scm 1064 */
long BgL_arg2199z00_13065;long BgL_arg2200z00_13066;
{ /* Llib/date.scm 1064 */
long BgL_res5157z00_13067;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13068;
if(
INPUT_PORTP(BgL_iportz00_13059))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13068 = BgL_iportz00_13059; }  else 
{ 
obj_t BgL_auxz00_15574;
BgL_auxz00_15574 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7547z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13059); 
FAILURE(BgL_auxz00_15574,BFALSE,BFALSE);} 
BgL_res5157z00_13067 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_13068); } 
BgL_arg2199z00_13065 = BgL_res5157z00_13067; } 
{ /* Llib/date.scm 1064 */
long BgL_res5158z00_13069;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13070;
if(
INPUT_PORTP(BgL_iportz00_13059))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13070 = BgL_iportz00_13059; }  else 
{ 
obj_t BgL_auxz00_15581;
BgL_auxz00_15581 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7547z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13059); 
FAILURE(BgL_auxz00_15581,BFALSE,BFALSE);} 
BgL_res5158z00_13069 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_13070); } 
BgL_arg2200z00_13066 = BgL_res5158z00_13069; } 
{ 
long BgL_bufposz00_15587;long BgL_forwardz00_15586;
BgL_forwardz00_15586 = BgL_arg2199z00_13065; 
BgL_bufposz00_15587 = BgL_arg2200z00_13066; 
BgL_bufposz00_13062 = BgL_bufposz00_15587; 
BgL_forwardz00_13061 = BgL_forwardz00_15586; 
goto BgL_statezd218zd21203z00_12895;} }  else 
{ /* Llib/date.scm 1064 */
BgL_matchz00_12912 = BgL_lastzd2matchzd2_13060; } }  else 
{ /* Llib/date.scm 1064 */
int BgL_curz00_13071;
{ /* Llib/date.scm 1064 */
int BgL_res5159z00_13072;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13073;
if(
INPUT_PORTP(BgL_iportz00_13059))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13073 = BgL_iportz00_13059; }  else 
{ 
obj_t BgL_auxz00_15590;
BgL_auxz00_15590 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7547z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13059); 
FAILURE(BgL_auxz00_15590,BFALSE,BFALSE);} 
BgL_res5159z00_13072 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_13073, BgL_forwardz00_13061); } 
BgL_curz00_13071 = BgL_res5159z00_13072; } 
{ /* Llib/date.scm 1064 */

{ /* Llib/date.scm 1064 */
bool_t BgL_test8302z00_15595;
if(
(
(long)(BgL_curz00_13071)>=((long)48)))
{ /* Llib/date.scm 1064 */
BgL_test8302z00_15595 = 
(
(long)(BgL_curz00_13071)<((long)58))
; }  else 
{ /* Llib/date.scm 1064 */
BgL_test8302z00_15595 = ((bool_t)0)
; } 
if(BgL_test8302z00_15595)
{ /* Llib/date.scm 1064 */
BgL_iportz00_13040 = BgL_iportz00_13059; 
BgL_lastzd2matchzd2_13041 = BgL_lastzd2matchzd2_13060; 
BgL_forwardz00_13042 = 
(((long)1)+BgL_forwardz00_13061); 
BgL_bufposz00_13043 = BgL_bufposz00_13062; 
BgL_statezd219zd21204z00_12894:
if(
(BgL_forwardz00_13042==BgL_bufposz00_13043))
{ /* Llib/date.scm 1064 */
bool_t BgL_test8305z00_15603;
{ /* Llib/date.scm 1064 */
bool_t BgL_res5164z00_13044;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13045;
if(
INPUT_PORTP(BgL_iportz00_13040))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13045 = BgL_iportz00_13040; }  else 
{ 
obj_t BgL_auxz00_15606;
BgL_auxz00_15606 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7546z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13040); 
FAILURE(BgL_auxz00_15606,BFALSE,BFALSE);} 
BgL_res5164z00_13044 = 
rgc_fill_buffer(BgL_inputzd2portzd2_13045); } 
BgL_test8305z00_15603 = BgL_res5164z00_13044; } 
if(BgL_test8305z00_15603)
{ /* Llib/date.scm 1064 */
long BgL_arg2207z00_13046;long BgL_arg2208z00_13047;
{ /* Llib/date.scm 1064 */
long BgL_res5165z00_13048;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13049;
if(
INPUT_PORTP(BgL_iportz00_13040))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13049 = BgL_iportz00_13040; }  else 
{ 
obj_t BgL_auxz00_15613;
BgL_auxz00_15613 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7546z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13040); 
FAILURE(BgL_auxz00_15613,BFALSE,BFALSE);} 
BgL_res5165z00_13048 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_13049); } 
BgL_arg2207z00_13046 = BgL_res5165z00_13048; } 
{ /* Llib/date.scm 1064 */
long BgL_res5166z00_13050;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13051;
if(
INPUT_PORTP(BgL_iportz00_13040))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13051 = BgL_iportz00_13040; }  else 
{ 
obj_t BgL_auxz00_15620;
BgL_auxz00_15620 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7546z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13040); 
FAILURE(BgL_auxz00_15620,BFALSE,BFALSE);} 
BgL_res5166z00_13050 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_13051); } 
BgL_arg2208z00_13047 = BgL_res5166z00_13050; } 
{ 
long BgL_bufposz00_15626;long BgL_forwardz00_15625;
BgL_forwardz00_15625 = BgL_arg2207z00_13046; 
BgL_bufposz00_15626 = BgL_arg2208z00_13047; 
BgL_bufposz00_13043 = BgL_bufposz00_15626; 
BgL_forwardz00_13042 = BgL_forwardz00_15625; 
goto BgL_statezd219zd21204z00_12894;} }  else 
{ /* Llib/date.scm 1064 */
BgL_matchz00_12912 = BgL_lastzd2matchzd2_13041; } }  else 
{ /* Llib/date.scm 1064 */
int BgL_curz00_13052;
{ /* Llib/date.scm 1064 */
int BgL_res5167z00_13053;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13054;
if(
INPUT_PORTP(BgL_iportz00_13040))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13054 = BgL_iportz00_13040; }  else 
{ 
obj_t BgL_auxz00_15629;
BgL_auxz00_15629 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7546z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13040); 
FAILURE(BgL_auxz00_15629,BFALSE,BFALSE);} 
BgL_res5167z00_13053 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_13054, BgL_forwardz00_13042); } 
BgL_curz00_13052 = BgL_res5167z00_13053; } 
{ /* Llib/date.scm 1064 */

{ /* Llib/date.scm 1064 */
bool_t BgL_test8310z00_15634;
if(
(
(long)(BgL_curz00_13052)>=((long)48)))
{ /* Llib/date.scm 1064 */
BgL_test8310z00_15634 = 
(
(long)(BgL_curz00_13052)<((long)58))
; }  else 
{ /* Llib/date.scm 1064 */
BgL_test8310z00_15634 = ((bool_t)0)
; } 
if(BgL_test8310z00_15634)
{ /* Llib/date.scm 1064 */
long BgL_arg2211z00_13055;
BgL_arg2211z00_13055 = 
(((long)1)+BgL_forwardz00_13042); 
{ /* Llib/date.scm 1064 */
long BgL_newzd2matchzd2_13056;
{ /* Llib/date.scm 1064 */
long BgL_res5171z00_13057;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13058;
if(
INPUT_PORTP(BgL_iportz00_13040))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13058 = BgL_iportz00_13040; }  else 
{ 
obj_t BgL_auxz00_15643;
BgL_auxz00_15643 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7546z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13040); 
FAILURE(BgL_auxz00_15643,BFALSE,BFALSE);} 
BgL_res5171z00_13057 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_13058, BgL_arg2211z00_13055); } BgL_res5171z00_13057; } 
BgL_newzd2matchzd2_13056 = ((long)3); 
BgL_matchz00_12912 = BgL_newzd2matchzd2_13056; } }  else 
{ /* Llib/date.scm 1064 */
BgL_matchz00_12912 = BgL_lastzd2matchzd2_13041; } } } } }  else 
{ /* Llib/date.scm 1064 */
BgL_matchz00_12912 = BgL_lastzd2matchzd2_13060; } } } } }  else 
{ /* Llib/date.scm 1064 */
BgL_matchz00_12912 = BgL_newzd2matchzd2_13078; } } } } }  else 
{ /* Llib/date.scm 1064 */
BgL_matchz00_12912 = BgL_lastzd2matchzd2_13297; } } } } }  else 
{ /* Llib/date.scm 1064 */
BgL_matchz00_12912 = BgL_lastzd2matchzd2_13212; } } } } }  else 
{ /* Llib/date.scm 1064 */
BgL_matchz00_12912 = BgL_lastzd2matchzd2_13197; } } } }  else 
{ /* Llib/date.scm 1064 */
BgL_matchz00_12912 = BgL_newzd2matchzd2_13115; } } } } } }  else 
{ /* Llib/date.scm 1064 */
bool_t BgL_test8313z00_15655;
{ /* Llib/date.scm 1064 */
bool_t BgL_test8314z00_15656;
if(
(
(long)(BgL_curz00_13104)==((long)10)))
{ /* Llib/date.scm 1064 */
BgL_test8314z00_15656 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1064 */
BgL_test8314z00_15656 = 
(
(long)(BgL_curz00_13104)==((long)9))
; } 
if(BgL_test8314z00_15656)
{ /* Llib/date.scm 1064 */
BgL_test8313z00_15655 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1064 */
if(
(
(long)(BgL_curz00_13104)==((long)13)))
{ /* Llib/date.scm 1064 */
BgL_test8313z00_15655 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1064 */
BgL_test8313z00_15655 = 
(
(long)(BgL_curz00_13104)==((long)32))
; } } } 
if(BgL_test8313z00_15655)
{ /* Llib/date.scm 1064 */
BgL_iportz00_13278 = BgL_iportz00_13092; 
BgL_lastzd2matchzd2_13279 = BgL_lastzd2matchzd2_13093; 
BgL_forwardz00_13280 = 
(((long)1)+BgL_forwardz00_13094); 
BgL_bufposz00_13281 = BgL_bufposz00_13095; 
BgL_statezd22zd21187z00_12908:
{ /* Llib/date.scm 1064 */
long BgL_newzd2matchzd2_13282;
{ /* Llib/date.scm 1064 */
long BgL_res5031z00_13283;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13284;
if(
INPUT_PORTP(BgL_iportz00_13278))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13284 = BgL_iportz00_13278; }  else 
{ 
obj_t BgL_auxz00_15669;
BgL_auxz00_15669 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7560z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13278); 
FAILURE(BgL_auxz00_15669,BFALSE,BFALSE);} 
BgL_res5031z00_13283 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_13284, BgL_forwardz00_13280); } BgL_res5031z00_13283; } 
BgL_newzd2matchzd2_13282 = ((long)0); 
if(
(BgL_forwardz00_13280==BgL_bufposz00_13281))
{ /* Llib/date.scm 1064 */
bool_t BgL_test8319z00_15676;
{ /* Llib/date.scm 1064 */
bool_t BgL_res5033z00_13285;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13286;
if(
INPUT_PORTP(BgL_iportz00_13278))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13286 = BgL_iportz00_13278; }  else 
{ 
obj_t BgL_auxz00_15679;
BgL_auxz00_15679 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7560z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13278); 
FAILURE(BgL_auxz00_15679,BFALSE,BFALSE);} 
BgL_res5033z00_13285 = 
rgc_fill_buffer(BgL_inputzd2portzd2_13286); } 
BgL_test8319z00_15676 = BgL_res5033z00_13285; } 
if(BgL_test8319z00_15676)
{ /* Llib/date.scm 1064 */
long BgL_arg2083z00_13287;long BgL_arg2084z00_13288;
{ /* Llib/date.scm 1064 */
long BgL_res5034z00_13289;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13290;
if(
INPUT_PORTP(BgL_iportz00_13278))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13290 = BgL_iportz00_13278; }  else 
{ 
obj_t BgL_auxz00_15686;
BgL_auxz00_15686 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7560z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13278); 
FAILURE(BgL_auxz00_15686,BFALSE,BFALSE);} 
BgL_res5034z00_13289 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_13290); } 
BgL_arg2083z00_13287 = BgL_res5034z00_13289; } 
{ /* Llib/date.scm 1064 */
long BgL_res5035z00_13291;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13292;
if(
INPUT_PORTP(BgL_iportz00_13278))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13292 = BgL_iportz00_13278; }  else 
{ 
obj_t BgL_auxz00_15693;
BgL_auxz00_15693 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7560z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13278); 
FAILURE(BgL_auxz00_15693,BFALSE,BFALSE);} 
BgL_res5035z00_13291 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_13292); } 
BgL_arg2084z00_13288 = BgL_res5035z00_13291; } 
{ 
long BgL_bufposz00_15699;long BgL_forwardz00_15698;
BgL_forwardz00_15698 = BgL_arg2083z00_13287; 
BgL_bufposz00_15699 = BgL_arg2084z00_13288; 
BgL_bufposz00_13281 = BgL_bufposz00_15699; 
BgL_forwardz00_13280 = BgL_forwardz00_15698; 
goto BgL_statezd22zd21187z00_12908;} }  else 
{ /* Llib/date.scm 1064 */
BgL_matchz00_12912 = BgL_newzd2matchzd2_13282; } }  else 
{ /* Llib/date.scm 1064 */
int BgL_curz00_13293;
{ /* Llib/date.scm 1064 */
int BgL_res5036z00_13294;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13295;
if(
INPUT_PORTP(BgL_iportz00_13278))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13295 = BgL_iportz00_13278; }  else 
{ 
obj_t BgL_auxz00_15702;
BgL_auxz00_15702 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7560z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13278); 
FAILURE(BgL_auxz00_15702,BFALSE,BFALSE);} 
BgL_res5036z00_13294 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_13295, BgL_forwardz00_13280); } 
BgL_curz00_13293 = BgL_res5036z00_13294; } 
{ /* Llib/date.scm 1064 */

{ /* Llib/date.scm 1064 */
bool_t BgL_test8324z00_15707;
{ /* Llib/date.scm 1064 */
bool_t BgL_test8325z00_15708;
if(
(
(long)(BgL_curz00_13293)==((long)10)))
{ /* Llib/date.scm 1064 */
BgL_test8325z00_15708 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1064 */
BgL_test8325z00_15708 = 
(
(long)(BgL_curz00_13293)==((long)9))
; } 
if(BgL_test8325z00_15708)
{ /* Llib/date.scm 1064 */
BgL_test8324z00_15707 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1064 */
if(
(
(long)(BgL_curz00_13293)==((long)13)))
{ /* Llib/date.scm 1064 */
BgL_test8324z00_15707 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1064 */
BgL_test8324z00_15707 = 
(
(long)(BgL_curz00_13293)==((long)32))
; } } } 
if(BgL_test8324z00_15707)
{ /* Llib/date.scm 1064 */
BgL_iportz00_13022 = BgL_iportz00_13278; 
BgL_lastzd2matchzd2_13023 = BgL_newzd2matchzd2_13282; 
BgL_forwardz00_13024 = 
(((long)1)+BgL_forwardz00_13280); 
BgL_bufposz00_13025 = BgL_bufposz00_13281; 
BgL_statezd221zd21206z00_12893:
{ /* Llib/date.scm 1064 */
long BgL_newzd2matchzd2_13026;
{ /* Llib/date.scm 1064 */
long BgL_res5173z00_13027;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13028;
if(
INPUT_PORTP(BgL_iportz00_13022))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13028 = BgL_iportz00_13022; }  else 
{ 
obj_t BgL_auxz00_15721;
BgL_auxz00_15721 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7545z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13022); 
FAILURE(BgL_auxz00_15721,BFALSE,BFALSE);} 
BgL_res5173z00_13027 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_13028, BgL_forwardz00_13024); } BgL_res5173z00_13027; } 
BgL_newzd2matchzd2_13026 = ((long)0); 
if(
(BgL_forwardz00_13024==BgL_bufposz00_13025))
{ /* Llib/date.scm 1064 */
bool_t BgL_test8330z00_15728;
{ /* Llib/date.scm 1064 */
bool_t BgL_res5175z00_13029;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13030;
if(
INPUT_PORTP(BgL_iportz00_13022))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13030 = BgL_iportz00_13022; }  else 
{ 
obj_t BgL_auxz00_15731;
BgL_auxz00_15731 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7545z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13022); 
FAILURE(BgL_auxz00_15731,BFALSE,BFALSE);} 
BgL_res5175z00_13029 = 
rgc_fill_buffer(BgL_inputzd2portzd2_13030); } 
BgL_test8330z00_15728 = BgL_res5175z00_13029; } 
if(BgL_test8330z00_15728)
{ /* Llib/date.scm 1064 */
long BgL_arg2216z00_13031;long BgL_arg2217z00_13032;
{ /* Llib/date.scm 1064 */
long BgL_res5176z00_13033;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13034;
if(
INPUT_PORTP(BgL_iportz00_13022))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13034 = BgL_iportz00_13022; }  else 
{ 
obj_t BgL_auxz00_15738;
BgL_auxz00_15738 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7545z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13022); 
FAILURE(BgL_auxz00_15738,BFALSE,BFALSE);} 
BgL_res5176z00_13033 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_13034); } 
BgL_arg2216z00_13031 = BgL_res5176z00_13033; } 
{ /* Llib/date.scm 1064 */
long BgL_res5177z00_13035;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13036;
if(
INPUT_PORTP(BgL_iportz00_13022))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13036 = BgL_iportz00_13022; }  else 
{ 
obj_t BgL_auxz00_15745;
BgL_auxz00_15745 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7545z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13022); 
FAILURE(BgL_auxz00_15745,BFALSE,BFALSE);} 
BgL_res5177z00_13035 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_13036); } 
BgL_arg2217z00_13032 = BgL_res5177z00_13035; } 
{ 
long BgL_bufposz00_15751;long BgL_forwardz00_15750;
BgL_forwardz00_15750 = BgL_arg2216z00_13031; 
BgL_bufposz00_15751 = BgL_arg2217z00_13032; 
BgL_bufposz00_13025 = BgL_bufposz00_15751; 
BgL_forwardz00_13024 = BgL_forwardz00_15750; 
goto BgL_statezd221zd21206z00_12893;} }  else 
{ /* Llib/date.scm 1064 */
BgL_matchz00_12912 = BgL_newzd2matchzd2_13026; } }  else 
{ /* Llib/date.scm 1064 */
int BgL_curz00_13037;
{ /* Llib/date.scm 1064 */
int BgL_res5178z00_13038;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13039;
if(
INPUT_PORTP(BgL_iportz00_13022))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13039 = BgL_iportz00_13022; }  else 
{ 
obj_t BgL_auxz00_15754;
BgL_auxz00_15754 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7545z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13022); 
FAILURE(BgL_auxz00_15754,BFALSE,BFALSE);} 
BgL_res5178z00_13038 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_13039, BgL_forwardz00_13024); } 
BgL_curz00_13037 = BgL_res5178z00_13038; } 
{ /* Llib/date.scm 1064 */

{ /* Llib/date.scm 1064 */
bool_t BgL_test8335z00_15759;
{ /* Llib/date.scm 1064 */
bool_t BgL_test8336z00_15760;
if(
(
(long)(BgL_curz00_13037)==((long)10)))
{ /* Llib/date.scm 1064 */
BgL_test8336z00_15760 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1064 */
BgL_test8336z00_15760 = 
(
(long)(BgL_curz00_13037)==((long)9))
; } 
if(BgL_test8336z00_15760)
{ /* Llib/date.scm 1064 */
BgL_test8335z00_15759 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1064 */
if(
(
(long)(BgL_curz00_13037)==((long)13)))
{ /* Llib/date.scm 1064 */
BgL_test8335z00_15759 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1064 */
BgL_test8335z00_15759 = 
(
(long)(BgL_curz00_13037)==((long)32))
; } } } 
if(BgL_test8335z00_15759)
{ 
long BgL_forwardz00_15772;long BgL_lastzd2matchzd2_15771;
BgL_lastzd2matchzd2_15771 = BgL_newzd2matchzd2_13026; 
BgL_forwardz00_15772 = 
(((long)1)+BgL_forwardz00_13024); 
BgL_forwardz00_13024 = BgL_forwardz00_15772; 
BgL_lastzd2matchzd2_13023 = BgL_lastzd2matchzd2_15771; 
goto BgL_statezd221zd21206z00_12893;}  else 
{ /* Llib/date.scm 1064 */
BgL_matchz00_12912 = BgL_newzd2matchzd2_13026; } } } } } }  else 
{ /* Llib/date.scm 1064 */
BgL_matchz00_12912 = BgL_newzd2matchzd2_13282; } } } } } }  else 
{ /* Llib/date.scm 1064 */
long BgL_arg2188z00_13107;
BgL_arg2188z00_13107 = 
(((long)1)+BgL_forwardz00_13094); 
{ /* Llib/date.scm 1064 */
long BgL_newzd2matchzd2_13108;
{ /* Llib/date.scm 1064 */
long BgL_res5146z00_13109;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13110;
if(
INPUT_PORTP(BgL_iportz00_13092))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13110 = BgL_iportz00_13092; }  else 
{ 
obj_t BgL_auxz00_15779;
BgL_auxz00_15779 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7549z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13092); 
FAILURE(BgL_auxz00_15779,BFALSE,BFALSE);} 
BgL_res5146z00_13109 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_13110, BgL_arg2188z00_13107); } BgL_res5146z00_13109; } 
BgL_newzd2matchzd2_13108 = ((long)6); 
BgL_matchz00_12912 = BgL_newzd2matchzd2_13108; } } } } } } } 
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_12919;
if(
INPUT_PORTP(BgL_iportz00_11323))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_12919 = BgL_iportz00_11323; }  else 
{ 
obj_t BgL_auxz00_15786;
BgL_auxz00_15786 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11323); 
FAILURE(BgL_auxz00_15786,BFALSE,BFALSE);} 
RGC_SET_FILEPOS(BgL_inputzd2portzd2_12919); } 
switch( BgL_matchz00_12912) { case ((long)6) : 

{ /* Llib/date.scm 1099 */
obj_t BgL_arg2313z00_12920;obj_t BgL_arg2314z00_12921;
{ /* Llib/date.scm 1064 */
bool_t BgL_test8341z00_15791;
{ /* Llib/date.scm 1064 */
long BgL_arg2305z00_13017;
{ /* Llib/date.scm 1064 */
long BgL_res5185z00_13018;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13019;
if(
INPUT_PORTP(BgL_iportz00_11323))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13019 = BgL_iportz00_11323; }  else 
{ 
obj_t BgL_auxz00_15794;
BgL_auxz00_15794 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7527z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11323); 
FAILURE(BgL_auxz00_15794,BFALSE,BFALSE);} 
BgL_res5185z00_13018 = 
RGC_BUFFER_MATCH_LENGTH(BgL_inputzd2portzd2_13019); } 
BgL_arg2305z00_13017 = BgL_res5185z00_13018; } 
BgL_test8341z00_15791 = 
(BgL_arg2305z00_13017==((long)0)); } 
if(BgL_test8341z00_15791)
{ /* Llib/date.scm 1064 */
BgL_arg2313z00_12920 = BEOF; }  else 
{ /* Llib/date.scm 1064 */
unsigned char BgL_res5187z00_13020;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13021;
if(
INPUT_PORTP(BgL_iportz00_11323))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13021 = BgL_iportz00_11323; }  else 
{ 
obj_t BgL_auxz00_15802;
BgL_auxz00_15802 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7527z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11323); 
FAILURE(BgL_auxz00_15802,BFALSE,BFALSE);} 
BgL_res5187z00_13020 = 
RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_13021); } 
BgL_arg2313z00_12920 = 
BCHAR(BgL_res5187z00_13020); } } 
{ /* Llib/date.scm 1099 */
obj_t BgL_res5191z00_12922;
if(
INPUT_PORTP(BgL_iportz00_11323))
{ /* Llib/date.scm 1064 */
BgL_res5191z00_12922 = BgL_iportz00_11323; }  else 
{ 
obj_t BgL_auxz00_15810;
BgL_auxz00_15810 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11323); 
FAILURE(BgL_auxz00_15810,BFALSE,BFALSE);} 
BgL_arg2314z00_12921 = BgL_res5191z00_12922; } 
return 
BGl_parsezd2errorzd2zz__datez00(BGl_string7522z00zz__datez00, BGl_string7544z00zz__datez00, BgL_arg2313z00_12920, BgL_arg2314z00_12921);} break;case ((long)5) : 

{ /* Llib/date.scm 1094 */
long BgL_b1z00_12923;long BgL_b2z00_12924;
{ /* Llib/date.scm 1094 */
int BgL_arg2318z00_12925;
{ /* Llib/date.scm 1064 */
int BgL_res5192z00_12926;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_12927;
if(
INPUT_PORTP(BgL_iportz00_11323))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_12927 = BgL_iportz00_11323; }  else 
{ 
obj_t BgL_auxz00_15817;
BgL_auxz00_15817 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11323); 
FAILURE(BgL_auxz00_15817,BFALSE,BFALSE);} 
{ /* Llib/date.scm 1064 */
int BgL_tmpz00_15821;
BgL_tmpz00_15821 = 
(int)(((long)0)); 
BgL_res5192z00_12926 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_12927, BgL_tmpz00_15821); } } 
BgL_arg2318z00_12925 = BgL_res5192z00_12926; } 
BgL_b1z00_12923 = 
(
(long)(BgL_arg2318z00_12925)-((long)48)); } 
{ /* Llib/date.scm 1095 */
int BgL_arg2319z00_12928;
{ /* Llib/date.scm 1064 */
int BgL_res5194z00_12929;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_12930;
if(
INPUT_PORTP(BgL_iportz00_11323))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_12930 = BgL_iportz00_11323; }  else 
{ 
obj_t BgL_auxz00_15828;
BgL_auxz00_15828 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11323); 
FAILURE(BgL_auxz00_15828,BFALSE,BFALSE);} 
{ /* Llib/date.scm 1064 */
int BgL_tmpz00_15832;
BgL_tmpz00_15832 = 
(int)(((long)2)); 
BgL_res5194z00_12929 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_12930, BgL_tmpz00_15832); } } 
BgL_arg2319z00_12928 = BgL_res5194z00_12929; } 
BgL_b2z00_12924 = 
(
(long)(BgL_arg2319z00_12928)-((long)48)); } 
{ /* Llib/date.scm 1096 */
long BgL_val2_1283z00_12931;
BgL_val2_1283z00_12931 = 
(
(BgL_b1z00_12923*((long)10))+BgL_b2z00_12924); 
{ /* Llib/date.scm 1096 */
int BgL_res5198z00_12932;
{ /* Llib/date.scm 1096 */
int BgL_tmpz00_15839;
BgL_tmpz00_15839 = 
(int)(((long)3)); 
BgL_res5198z00_12932 = 
BGL_MVALUES_NUMBER_SET(BgL_tmpz00_15839); } BgL_res5198z00_12932; } 
{ /* Llib/date.scm 1096 */
obj_t BgL_auxz00_15844;int BgL_tmpz00_15842;
BgL_auxz00_15844 = 
BINT(((long)0)); 
BgL_tmpz00_15842 = 
(int)(((long)1)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_15842, BgL_auxz00_15844); } 
{ /* Llib/date.scm 1096 */
obj_t BgL_auxz00_15849;int BgL_tmpz00_15847;
BgL_auxz00_15849 = 
BINT(BgL_val2_1283z00_12931); 
BgL_tmpz00_15847 = 
(int)(((long)2)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_15847, BgL_auxz00_15849); } 
return 
BINT(((long)0));} } break;case ((long)4) : 

{ /* Llib/date.scm 1087 */
long BgL_b1z00_12933;long BgL_b3z00_12934;long BgL_b4z00_12935;long BgL_b5z00_12936;long BgL_b6z00_12937;
{ /* Llib/date.scm 1087 */
int BgL_arg2322z00_12938;
{ /* Llib/date.scm 1064 */
int BgL_res5199z00_12939;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_12940;
if(
INPUT_PORTP(BgL_iportz00_11323))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_12940 = BgL_iportz00_11323; }  else 
{ 
obj_t BgL_auxz00_15855;
BgL_auxz00_15855 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11323); 
FAILURE(BgL_auxz00_15855,BFALSE,BFALSE);} 
{ /* Llib/date.scm 1064 */
int BgL_tmpz00_15859;
BgL_tmpz00_15859 = 
(int)(((long)0)); 
BgL_res5199z00_12939 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_12940, BgL_tmpz00_15859); } } 
BgL_arg2322z00_12938 = BgL_res5199z00_12939; } 
BgL_b1z00_12933 = 
(
(long)(BgL_arg2322z00_12938)-((long)48)); } 
{ /* Llib/date.scm 1088 */
int BgL_arg2323z00_12941;
{ /* Llib/date.scm 1064 */
int BgL_res5201z00_12942;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_12943;
if(
INPUT_PORTP(BgL_iportz00_11323))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_12943 = BgL_iportz00_11323; }  else 
{ 
obj_t BgL_auxz00_15866;
BgL_auxz00_15866 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11323); 
FAILURE(BgL_auxz00_15866,BFALSE,BFALSE);} 
{ /* Llib/date.scm 1064 */
int BgL_tmpz00_15870;
BgL_tmpz00_15870 = 
(int)(((long)2)); 
BgL_res5201z00_12942 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_12943, BgL_tmpz00_15870); } } 
BgL_arg2323z00_12941 = BgL_res5201z00_12942; } 
BgL_b3z00_12934 = 
(
(long)(BgL_arg2323z00_12941)-((long)48)); } 
{ /* Llib/date.scm 1089 */
int BgL_arg2324z00_12944;
{ /* Llib/date.scm 1064 */
int BgL_res5203z00_12945;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_12946;
if(
INPUT_PORTP(BgL_iportz00_11323))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_12946 = BgL_iportz00_11323; }  else 
{ 
obj_t BgL_auxz00_15877;
BgL_auxz00_15877 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11323); 
FAILURE(BgL_auxz00_15877,BFALSE,BFALSE);} 
{ /* Llib/date.scm 1064 */
int BgL_tmpz00_15881;
BgL_tmpz00_15881 = 
(int)(((long)3)); 
BgL_res5203z00_12945 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_12946, BgL_tmpz00_15881); } } 
BgL_arg2324z00_12944 = BgL_res5203z00_12945; } 
BgL_b4z00_12935 = 
(
(long)(BgL_arg2324z00_12944)-((long)48)); } 
{ /* Llib/date.scm 1090 */
int BgL_arg2325z00_12947;
{ /* Llib/date.scm 1064 */
int BgL_res5205z00_12948;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_12949;
if(
INPUT_PORTP(BgL_iportz00_11323))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_12949 = BgL_iportz00_11323; }  else 
{ 
obj_t BgL_auxz00_15888;
BgL_auxz00_15888 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11323); 
FAILURE(BgL_auxz00_15888,BFALSE,BFALSE);} 
{ /* Llib/date.scm 1064 */
int BgL_tmpz00_15892;
BgL_tmpz00_15892 = 
(int)(((long)5)); 
BgL_res5205z00_12948 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_12949, BgL_tmpz00_15892); } } 
BgL_arg2325z00_12947 = BgL_res5205z00_12948; } 
BgL_b5z00_12936 = 
(
(long)(BgL_arg2325z00_12947)-((long)48)); } 
{ /* Llib/date.scm 1091 */
int BgL_arg2326z00_12950;
{ /* Llib/date.scm 1064 */
int BgL_res5207z00_12951;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_12952;
if(
INPUT_PORTP(BgL_iportz00_11323))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_12952 = BgL_iportz00_11323; }  else 
{ 
obj_t BgL_auxz00_15899;
BgL_auxz00_15899 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11323); 
FAILURE(BgL_auxz00_15899,BFALSE,BFALSE);} 
{ /* Llib/date.scm 1064 */
int BgL_tmpz00_15903;
BgL_tmpz00_15903 = 
(int)(((long)6)); 
BgL_res5207z00_12951 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_12952, BgL_tmpz00_15903); } } 
BgL_arg2326z00_12950 = BgL_res5207z00_12951; } 
BgL_b6z00_12937 = 
(
(long)(BgL_arg2326z00_12950)-((long)48)); } 
{ /* Llib/date.scm 1092 */
long BgL_val1_1285z00_12953;long BgL_val2_1286z00_12954;
BgL_val1_1285z00_12953 = 
(
(BgL_b3z00_12934*((long)10))+BgL_b4z00_12935); 
BgL_val2_1286z00_12954 = 
(
(BgL_b5z00_12936*((long)10))+BgL_b6z00_12937); 
{ /* Llib/date.scm 1092 */
int BgL_res5213z00_12955;
{ /* Llib/date.scm 1092 */
int BgL_tmpz00_15912;
BgL_tmpz00_15912 = 
(int)(((long)3)); 
BgL_res5213z00_12955 = 
BGL_MVALUES_NUMBER_SET(BgL_tmpz00_15912); } BgL_res5213z00_12955; } 
{ /* Llib/date.scm 1092 */
obj_t BgL_auxz00_15917;int BgL_tmpz00_15915;
BgL_auxz00_15917 = 
BINT(BgL_val1_1285z00_12953); 
BgL_tmpz00_15915 = 
(int)(((long)1)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_15915, BgL_auxz00_15917); } 
{ /* Llib/date.scm 1092 */
obj_t BgL_auxz00_15922;int BgL_tmpz00_15920;
BgL_auxz00_15922 = 
BINT(BgL_val2_1286z00_12954); 
BgL_tmpz00_15920 = 
(int)(((long)2)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_15920, BgL_auxz00_15922); } 
return 
BINT(BgL_b1z00_12933);} } break;case ((long)3) : 

{ /* Llib/date.scm 1079 */
long BgL_b1z00_12956;long BgL_b2z00_12957;long BgL_b3z00_12958;long BgL_b4z00_12959;long BgL_b5z00_12960;long BgL_b6z00_12961;
{ /* Llib/date.scm 1079 */
int BgL_arg2331z00_12962;
{ /* Llib/date.scm 1064 */
int BgL_res5214z00_12963;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_12964;
if(
INPUT_PORTP(BgL_iportz00_11323))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_12964 = BgL_iportz00_11323; }  else 
{ 
obj_t BgL_auxz00_15928;
BgL_auxz00_15928 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11323); 
FAILURE(BgL_auxz00_15928,BFALSE,BFALSE);} 
{ /* Llib/date.scm 1064 */
int BgL_tmpz00_15932;
BgL_tmpz00_15932 = 
(int)(((long)0)); 
BgL_res5214z00_12963 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_12964, BgL_tmpz00_15932); } } 
BgL_arg2331z00_12962 = BgL_res5214z00_12963; } 
BgL_b1z00_12956 = 
(
(long)(BgL_arg2331z00_12962)-((long)48)); } 
{ /* Llib/date.scm 1080 */
int BgL_arg2332z00_12965;
{ /* Llib/date.scm 1064 */
int BgL_res5216z00_12966;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_12967;
if(
INPUT_PORTP(BgL_iportz00_11323))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_12967 = BgL_iportz00_11323; }  else 
{ 
obj_t BgL_auxz00_15939;
BgL_auxz00_15939 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11323); 
FAILURE(BgL_auxz00_15939,BFALSE,BFALSE);} 
{ /* Llib/date.scm 1064 */
int BgL_tmpz00_15943;
BgL_tmpz00_15943 = 
(int)(((long)1)); 
BgL_res5216z00_12966 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_12967, BgL_tmpz00_15943); } } 
BgL_arg2332z00_12965 = BgL_res5216z00_12966; } 
BgL_b2z00_12957 = 
(
(long)(BgL_arg2332z00_12965)-((long)48)); } 
{ /* Llib/date.scm 1081 */
int BgL_arg2334z00_12968;
{ /* Llib/date.scm 1064 */
int BgL_res5218z00_12969;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_12970;
if(
INPUT_PORTP(BgL_iportz00_11323))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_12970 = BgL_iportz00_11323; }  else 
{ 
obj_t BgL_auxz00_15950;
BgL_auxz00_15950 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11323); 
FAILURE(BgL_auxz00_15950,BFALSE,BFALSE);} 
{ /* Llib/date.scm 1064 */
int BgL_tmpz00_15954;
BgL_tmpz00_15954 = 
(int)(((long)3)); 
BgL_res5218z00_12969 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_12970, BgL_tmpz00_15954); } } 
BgL_arg2334z00_12968 = BgL_res5218z00_12969; } 
BgL_b3z00_12958 = 
(
(long)(BgL_arg2334z00_12968)-((long)48)); } 
{ /* Llib/date.scm 1082 */
int BgL_arg2335z00_12971;
{ /* Llib/date.scm 1064 */
int BgL_res5220z00_12972;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_12973;
if(
INPUT_PORTP(BgL_iportz00_11323))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_12973 = BgL_iportz00_11323; }  else 
{ 
obj_t BgL_auxz00_15961;
BgL_auxz00_15961 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11323); 
FAILURE(BgL_auxz00_15961,BFALSE,BFALSE);} 
{ /* Llib/date.scm 1064 */
int BgL_tmpz00_15965;
BgL_tmpz00_15965 = 
(int)(((long)4)); 
BgL_res5220z00_12972 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_12973, BgL_tmpz00_15965); } } 
BgL_arg2335z00_12971 = BgL_res5220z00_12972; } 
BgL_b4z00_12959 = 
(
(long)(BgL_arg2335z00_12971)-((long)48)); } 
{ /* Llib/date.scm 1083 */
int BgL_arg2336z00_12974;
{ /* Llib/date.scm 1064 */
int BgL_res5222z00_12975;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_12976;
if(
INPUT_PORTP(BgL_iportz00_11323))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_12976 = BgL_iportz00_11323; }  else 
{ 
obj_t BgL_auxz00_15972;
BgL_auxz00_15972 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11323); 
FAILURE(BgL_auxz00_15972,BFALSE,BFALSE);} 
{ /* Llib/date.scm 1064 */
int BgL_tmpz00_15976;
BgL_tmpz00_15976 = 
(int)(((long)6)); 
BgL_res5222z00_12975 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_12976, BgL_tmpz00_15976); } } 
BgL_arg2336z00_12974 = BgL_res5222z00_12975; } 
BgL_b5z00_12960 = 
(
(long)(BgL_arg2336z00_12974)-((long)48)); } 
{ /* Llib/date.scm 1084 */
int BgL_arg2337z00_12977;
{ /* Llib/date.scm 1064 */
int BgL_res5224z00_12978;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_12979;
if(
INPUT_PORTP(BgL_iportz00_11323))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_12979 = BgL_iportz00_11323; }  else 
{ 
obj_t BgL_auxz00_15983;
BgL_auxz00_15983 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11323); 
FAILURE(BgL_auxz00_15983,BFALSE,BFALSE);} 
{ /* Llib/date.scm 1064 */
int BgL_tmpz00_15987;
BgL_tmpz00_15987 = 
(int)(((long)7)); 
BgL_res5224z00_12978 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_12979, BgL_tmpz00_15987); } } 
BgL_arg2337z00_12977 = BgL_res5224z00_12978; } 
BgL_b6z00_12961 = 
(
(long)(BgL_arg2337z00_12977)-((long)48)); } 
{ /* Llib/date.scm 1085 */
long BgL_val0_1287z00_12980;long BgL_val1_1288z00_12981;long BgL_val2_1289z00_12982;
BgL_val0_1287z00_12980 = 
(
(BgL_b1z00_12956*((long)10))+BgL_b2z00_12957); 
BgL_val1_1288z00_12981 = 
(
(BgL_b3z00_12958*((long)10))+BgL_b4z00_12959); 
BgL_val2_1289z00_12982 = 
(
(BgL_b5z00_12960*((long)10))+BgL_b6z00_12961); 
{ /* Llib/date.scm 1085 */
int BgL_res5232z00_12983;
{ /* Llib/date.scm 1085 */
int BgL_tmpz00_15998;
BgL_tmpz00_15998 = 
(int)(((long)3)); 
BgL_res5232z00_12983 = 
BGL_MVALUES_NUMBER_SET(BgL_tmpz00_15998); } BgL_res5232z00_12983; } 
{ /* Llib/date.scm 1085 */
obj_t BgL_auxz00_16003;int BgL_tmpz00_16001;
BgL_auxz00_16003 = 
BINT(BgL_val1_1288z00_12981); 
BgL_tmpz00_16001 = 
(int)(((long)1)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_16001, BgL_auxz00_16003); } 
{ /* Llib/date.scm 1085 */
obj_t BgL_auxz00_16008;int BgL_tmpz00_16006;
BgL_auxz00_16008 = 
BINT(BgL_val2_1289z00_12982); 
BgL_tmpz00_16006 = 
(int)(((long)2)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_16006, BgL_auxz00_16008); } 
return 
BINT(BgL_val0_1287z00_12980);} } break;case ((long)2) : 

{ /* Llib/date.scm 1073 */
long BgL_b1z00_12984;long BgL_b2z00_12985;long BgL_b3z00_12986;long BgL_b4z00_12987;
{ /* Llib/date.scm 1073 */
int BgL_arg2340z00_12988;
{ /* Llib/date.scm 1064 */
int BgL_res5233z00_12989;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_12990;
if(
INPUT_PORTP(BgL_iportz00_11323))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_12990 = BgL_iportz00_11323; }  else 
{ 
obj_t BgL_auxz00_16014;
BgL_auxz00_16014 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11323); 
FAILURE(BgL_auxz00_16014,BFALSE,BFALSE);} 
{ /* Llib/date.scm 1064 */
int BgL_tmpz00_16018;
BgL_tmpz00_16018 = 
(int)(((long)0)); 
BgL_res5233z00_12989 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_12990, BgL_tmpz00_16018); } } 
BgL_arg2340z00_12988 = BgL_res5233z00_12989; } 
BgL_b1z00_12984 = 
(
(long)(BgL_arg2340z00_12988)-((long)48)); } 
{ /* Llib/date.scm 1074 */
int BgL_arg2341z00_12991;
{ /* Llib/date.scm 1064 */
int BgL_res5235z00_12992;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_12993;
if(
INPUT_PORTP(BgL_iportz00_11323))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_12993 = BgL_iportz00_11323; }  else 
{ 
obj_t BgL_auxz00_16025;
BgL_auxz00_16025 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11323); 
FAILURE(BgL_auxz00_16025,BFALSE,BFALSE);} 
{ /* Llib/date.scm 1064 */
int BgL_tmpz00_16029;
BgL_tmpz00_16029 = 
(int)(((long)1)); 
BgL_res5235z00_12992 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_12993, BgL_tmpz00_16029); } } 
BgL_arg2341z00_12991 = BgL_res5235z00_12992; } 
BgL_b2z00_12985 = 
(
(long)(BgL_arg2341z00_12991)-((long)48)); } 
{ /* Llib/date.scm 1075 */
int BgL_arg2342z00_12994;
{ /* Llib/date.scm 1064 */
int BgL_res5237z00_12995;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_12996;
if(
INPUT_PORTP(BgL_iportz00_11323))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_12996 = BgL_iportz00_11323; }  else 
{ 
obj_t BgL_auxz00_16036;
BgL_auxz00_16036 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11323); 
FAILURE(BgL_auxz00_16036,BFALSE,BFALSE);} 
{ /* Llib/date.scm 1064 */
int BgL_tmpz00_16040;
BgL_tmpz00_16040 = 
(int)(((long)3)); 
BgL_res5237z00_12995 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_12996, BgL_tmpz00_16040); } } 
BgL_arg2342z00_12994 = BgL_res5237z00_12995; } 
BgL_b3z00_12986 = 
(
(long)(BgL_arg2342z00_12994)-((long)48)); } 
{ /* Llib/date.scm 1076 */
int BgL_arg2343z00_12997;
{ /* Llib/date.scm 1064 */
int BgL_res5239z00_12998;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_12999;
if(
INPUT_PORTP(BgL_iportz00_11323))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_12999 = BgL_iportz00_11323; }  else 
{ 
obj_t BgL_auxz00_16047;
BgL_auxz00_16047 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11323); 
FAILURE(BgL_auxz00_16047,BFALSE,BFALSE);} 
{ /* Llib/date.scm 1064 */
int BgL_tmpz00_16051;
BgL_tmpz00_16051 = 
(int)(((long)4)); 
BgL_res5239z00_12998 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_12999, BgL_tmpz00_16051); } } 
BgL_arg2343z00_12997 = BgL_res5239z00_12998; } 
BgL_b4z00_12987 = 
(
(long)(BgL_arg2343z00_12997)-((long)48)); } 
{ /* Llib/date.scm 1077 */
long BgL_val0_1290z00_13000;long BgL_val1_1291z00_13001;
BgL_val0_1290z00_13000 = 
(
(BgL_b1z00_12984*((long)10))+BgL_b2z00_12985); 
BgL_val1_1291z00_13001 = 
(
(BgL_b3z00_12986*((long)10))+BgL_b4z00_12987); 
{ /* Llib/date.scm 1077 */
int BgL_res5245z00_13002;
{ /* Llib/date.scm 1077 */
int BgL_tmpz00_16060;
BgL_tmpz00_16060 = 
(int)(((long)3)); 
BgL_res5245z00_13002 = 
BGL_MVALUES_NUMBER_SET(BgL_tmpz00_16060); } BgL_res5245z00_13002; } 
{ /* Llib/date.scm 1077 */
obj_t BgL_auxz00_16065;int BgL_tmpz00_16063;
BgL_auxz00_16065 = 
BINT(BgL_val1_1291z00_13001); 
BgL_tmpz00_16063 = 
(int)(((long)1)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_16063, BgL_auxz00_16065); } 
{ /* Llib/date.scm 1077 */
obj_t BgL_auxz00_16070;int BgL_tmpz00_16068;
BgL_auxz00_16070 = 
BINT(((long)0)); 
BgL_tmpz00_16068 = 
(int)(((long)2)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_16068, BgL_auxz00_16070); } 
return 
BINT(BgL_val0_1290z00_13000);} } break;case ((long)1) : 

{ /* Llib/date.scm 1068 */
long BgL_b1z00_13003;long BgL_b3z00_13004;long BgL_b4z00_13005;
{ /* Llib/date.scm 1068 */
int BgL_arg2346z00_13006;
{ /* Llib/date.scm 1064 */
int BgL_res5246z00_13007;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13008;
if(
INPUT_PORTP(BgL_iportz00_11323))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13008 = BgL_iportz00_11323; }  else 
{ 
obj_t BgL_auxz00_16076;
BgL_auxz00_16076 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11323); 
FAILURE(BgL_auxz00_16076,BFALSE,BFALSE);} 
{ /* Llib/date.scm 1064 */
int BgL_tmpz00_16080;
BgL_tmpz00_16080 = 
(int)(((long)0)); 
BgL_res5246z00_13007 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_13008, BgL_tmpz00_16080); } } 
BgL_arg2346z00_13006 = BgL_res5246z00_13007; } 
BgL_b1z00_13003 = 
(
(long)(BgL_arg2346z00_13006)-((long)48)); } 
{ /* Llib/date.scm 1069 */
int BgL_arg2347z00_13009;
{ /* Llib/date.scm 1064 */
int BgL_res5248z00_13010;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13011;
if(
INPUT_PORTP(BgL_iportz00_11323))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13011 = BgL_iportz00_11323; }  else 
{ 
obj_t BgL_auxz00_16087;
BgL_auxz00_16087 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11323); 
FAILURE(BgL_auxz00_16087,BFALSE,BFALSE);} 
{ /* Llib/date.scm 1064 */
int BgL_tmpz00_16091;
BgL_tmpz00_16091 = 
(int)(((long)2)); 
BgL_res5248z00_13010 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_13011, BgL_tmpz00_16091); } } 
BgL_arg2347z00_13009 = BgL_res5248z00_13010; } 
BgL_b3z00_13004 = 
(
(long)(BgL_arg2347z00_13009)-((long)48)); } 
{ /* Llib/date.scm 1070 */
int BgL_arg2349z00_13012;
{ /* Llib/date.scm 1064 */
int BgL_res5250z00_13013;
{ /* Llib/date.scm 1064 */
obj_t BgL_inputzd2portzd2_13014;
if(
INPUT_PORTP(BgL_iportz00_11323))
{ /* Llib/date.scm 1064 */
BgL_inputzd2portzd2_13014 = BgL_iportz00_11323; }  else 
{ 
obj_t BgL_auxz00_16098;
BgL_auxz00_16098 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43906)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11323); 
FAILURE(BgL_auxz00_16098,BFALSE,BFALSE);} 
{ /* Llib/date.scm 1064 */
int BgL_tmpz00_16102;
BgL_tmpz00_16102 = 
(int)(((long)3)); 
BgL_res5250z00_13013 = 
RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_13014, BgL_tmpz00_16102); } } 
BgL_arg2349z00_13012 = BgL_res5250z00_13013; } 
BgL_b4z00_13005 = 
(
(long)(BgL_arg2349z00_13012)-((long)48)); } 
{ /* Llib/date.scm 1071 */
long BgL_val1_1294z00_13015;
BgL_val1_1294z00_13015 = 
(
(BgL_b3z00_13004*((long)10))+BgL_b4z00_13005); 
{ /* Llib/date.scm 1071 */
int BgL_res5254z00_13016;
{ /* Llib/date.scm 1071 */
int BgL_tmpz00_16109;
BgL_tmpz00_16109 = 
(int)(((long)3)); 
BgL_res5254z00_13016 = 
BGL_MVALUES_NUMBER_SET(BgL_tmpz00_16109); } BgL_res5254z00_13016; } 
{ /* Llib/date.scm 1071 */
obj_t BgL_auxz00_16114;int BgL_tmpz00_16112;
BgL_auxz00_16114 = 
BINT(BgL_val1_1294z00_13015); 
BgL_tmpz00_16112 = 
(int)(((long)1)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_16112, BgL_auxz00_16114); } 
{ /* Llib/date.scm 1071 */
obj_t BgL_auxz00_16119;int BgL_tmpz00_16117;
BgL_auxz00_16119 = 
BINT(((long)0)); 
BgL_tmpz00_16117 = 
(int)(((long)2)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_16117, BgL_auxz00_16119); } 
return 
BINT(BgL_b1z00_13003);} } break;case ((long)0) : 

goto BgL_ignorez00_12891;break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_string7525z00zz__datez00, BGl_string7526z00zz__datez00, 
BINT(BgL_matchz00_12912));} } } } } } 

}



/* &<@anonymous:1858> */
obj_t BGl_z62zc3z04anonymousza31858ze3ze5zz__datez00(obj_t BgL_envz00_11324, obj_t BgL_iportz00_11325)
{
{ /* Llib/date.scm 1036 */
{ 
obj_t BgL_iportz00_13435;long BgL_lastzd2matchzd2_13436;long BgL_forwardz00_13437;long BgL_bufposz00_13438;obj_t BgL_iportz00_13417;long BgL_lastzd2matchzd2_13418;long BgL_forwardz00_13419;long BgL_bufposz00_13420;obj_t BgL_iportz00_13399;long BgL_lastzd2matchzd2_13400;long BgL_forwardz00_13401;long BgL_bufposz00_13402;obj_t BgL_iportz00_13381;long BgL_lastzd2matchzd2_13382;long BgL_forwardz00_13383;long BgL_bufposz00_13384;obj_t BgL_iportz00_13362;long BgL_lastzd2matchzd2_13363;long BgL_forwardz00_13364;long BgL_bufposz00_13365;
{ /* Llib/date.scm 1036 */
bool_t BgL_test8365z00_16126;
{ /* Llib/date.scm 1036 */
obj_t BgL_arg1865z00_13454;
{ /* Llib/date.scm 1036 */
obj_t BgL_res5018z00_13455;
if(
INPUT_PORTP(BgL_iportz00_11325))
{ /* Llib/date.scm 1036 */
BgL_res5018z00_13455 = BgL_iportz00_11325; }  else 
{ 
obj_t BgL_auxz00_16129;
BgL_auxz00_16129 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43140)), BGl_string7593z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11325); 
FAILURE(BgL_auxz00_16129,BFALSE,BFALSE);} 
BgL_arg1865z00_13454 = BgL_res5018z00_13455; } 
{ /* Llib/date.scm 1036 */
bool_t BgL_res5019z00_13456;
BgL_res5019z00_13456 = 
INPUT_PORT_CLOSEP(BgL_arg1865z00_13454); 
BgL_test8365z00_16126 = BgL_res5019z00_13456; } } 
if(BgL_test8365z00_16126)
{ /* Llib/date.scm 1036 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_arg1859z00_13457;
{ /* Llib/date.scm 1036 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_new1077z00_13458;
{ /* Llib/date.scm 1036 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_new1076z00_13459;
BgL_new1076z00_13459 = 
((BgL_z62iozd2closedzd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2closedzd2errorz62_bgl) ))); 
{ /* Llib/date.scm 1036 */
long BgL_arg1863z00_13460;
{ /* Llib/date.scm 1036 */
long BgL_res5020z00_13461;
BgL_res5020z00_13461 = 
BGL_CLASS_INDEX(BGl_z62iozd2closedzd2errorz62zz__objectz00); 
BgL_arg1863z00_13460 = BgL_res5020z00_13461; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1076z00_13459), BgL_arg1863z00_13460); } 
BgL_new1077z00_13458 = BgL_new1076z00_13459; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1077z00_13458)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1077z00_13458)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_16142;
{ /* Llib/date.scm 1036 */
obj_t BgL_arg1861z00_13462;
{ /* Llib/date.scm 1036 */
obj_t BgL_arg1862z00_13463;
{ /* Llib/date.scm 1036 */
obj_t BgL_res5021z00_13464;
{ /* Llib/date.scm 1036 */
obj_t BgL_classz00_13465;
BgL_classz00_13465 = BGl_z62iozd2closedzd2errorz62zz__objectz00; 
BgL_res5021z00_13464 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_13465); } 
BgL_arg1862z00_13463 = BgL_res5021z00_13464; } 
BgL_arg1861z00_13462 = 
VECTOR_REF(BgL_arg1862z00_13463,((long)2)); } 
{ /* Llib/date.scm 1036 */
obj_t BgL_auxz00_16146;
if(
BGl_classzd2fieldzf3z21zz__objectz00(BgL_arg1861z00_13462))
{ /* Llib/date.scm 1036 */
BgL_auxz00_16146 = BgL_arg1861z00_13462
; }  else 
{ 
obj_t BgL_auxz00_16149;
BgL_auxz00_16149 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43140)), BGl_string7593z00zz__datez00, BGl_string7542z00zz__datez00, BgL_arg1861z00_13462); 
FAILURE(BgL_auxz00_16149,BFALSE,BFALSE);} 
BgL_auxz00_16142 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_auxz00_16146); } } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1077z00_13458)))->BgL_stackz00)=((obj_t)BgL_auxz00_16142),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1077z00_13458)))->BgL_procz00)=((obj_t)BGl_string7525z00zz__datez00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1077z00_13458)))->BgL_msgz00)=((obj_t)BGl_string7543z00zz__datez00),BUNSPEC); 
{ 
obj_t BgL_auxz00_16159;
{ /* Llib/date.scm 1036 */
obj_t BgL_res5022z00_13466;
if(
INPUT_PORTP(BgL_iportz00_11325))
{ /* Llib/date.scm 1036 */
BgL_res5022z00_13466 = BgL_iportz00_11325; }  else 
{ 
obj_t BgL_auxz00_16163;
BgL_auxz00_16163 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43140)), BGl_string7593z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11325); 
FAILURE(BgL_auxz00_16163,BFALSE,BFALSE);} 
BgL_auxz00_16159 = BgL_res5022z00_13466; } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1077z00_13458)))->BgL_objz00)=((obj_t)BgL_auxz00_16159),BUNSPEC); } 
BgL_arg1859z00_13457 = BgL_new1077z00_13458; } 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg1859z00_13457));}  else 
{ /* Llib/date.scm 1036 */
BgL_ignorez00_13324:
{ /* Llib/date.scm 1036 */
long BgL_res4996z00_13331;
{ /* Llib/date.scm 1036 */
obj_t BgL_inputzd2portzd2_13332;
if(
INPUT_PORTP(BgL_iportz00_11325))
{ /* Llib/date.scm 1036 */
BgL_inputzd2portzd2_13332 = BgL_iportz00_11325; }  else 
{ 
obj_t BgL_auxz00_16172;
BgL_auxz00_16172 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43140)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11325); 
FAILURE(BgL_auxz00_16172,BFALSE,BFALSE);} 
BgL_res4996z00_13331 = 
RGC_START_MATCH(BgL_inputzd2portzd2_13332); } BgL_res4996z00_13331; } 
{ /* Llib/date.scm 1036 */
long BgL_matchz00_13333;
{ /* Llib/date.scm 1036 */
long BgL_arg2061z00_13334;long BgL_arg2062z00_13335;
{ /* Llib/date.scm 1036 */
long BgL_res4997z00_13336;
{ /* Llib/date.scm 1036 */
obj_t BgL_inputzd2portzd2_13337;
if(
INPUT_PORTP(BgL_iportz00_11325))
{ /* Llib/date.scm 1036 */
BgL_inputzd2portzd2_13337 = BgL_iportz00_11325; }  else 
{ 
obj_t BgL_auxz00_16179;
BgL_auxz00_16179 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43140)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11325); 
FAILURE(BgL_auxz00_16179,BFALSE,BFALSE);} 
BgL_res4997z00_13336 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_13337); } 
BgL_arg2061z00_13334 = BgL_res4997z00_13336; } 
{ /* Llib/date.scm 1036 */
long BgL_res4998z00_13338;
{ /* Llib/date.scm 1036 */
obj_t BgL_inputzd2portzd2_13339;
if(
INPUT_PORTP(BgL_iportz00_11325))
{ /* Llib/date.scm 1036 */
BgL_inputzd2portzd2_13339 = BgL_iportz00_11325; }  else 
{ 
obj_t BgL_auxz00_16186;
BgL_auxz00_16186 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43140)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11325); 
FAILURE(BgL_auxz00_16186,BFALSE,BFALSE);} 
BgL_res4998z00_13338 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_13339); } 
BgL_arg2062z00_13335 = BgL_res4998z00_13338; } 
BgL_iportz00_13435 = BgL_iportz00_11325; 
BgL_lastzd2matchzd2_13436 = ((long)2); 
BgL_forwardz00_13437 = BgL_arg2061z00_13334; 
BgL_bufposz00_13438 = BgL_arg2062z00_13335; 
BgL_statezd20zd21175z00_13330:
if(
(BgL_forwardz00_13437==BgL_bufposz00_13438))
{ /* Llib/date.scm 1036 */
bool_t BgL_test8373z00_16193;
{ /* Llib/date.scm 1036 */
bool_t BgL_res4903z00_13439;
{ /* Llib/date.scm 1036 */
obj_t BgL_inputzd2portzd2_13440;
if(
INPUT_PORTP(BgL_iportz00_13435))
{ /* Llib/date.scm 1036 */
BgL_inputzd2portzd2_13440 = BgL_iportz00_13435; }  else 
{ 
obj_t BgL_auxz00_16196;
BgL_auxz00_16196 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43140)), BGl_string7592z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13435); 
FAILURE(BgL_auxz00_16196,BFALSE,BFALSE);} 
BgL_res4903z00_13439 = 
rgc_fill_buffer(BgL_inputzd2portzd2_13440); } 
BgL_test8373z00_16193 = BgL_res4903z00_13439; } 
if(BgL_test8373z00_16193)
{ /* Llib/date.scm 1036 */
long BgL_arg1870z00_13441;long BgL_arg1871z00_13442;
{ /* Llib/date.scm 1036 */
long BgL_res4904z00_13443;
{ /* Llib/date.scm 1036 */
obj_t BgL_inputzd2portzd2_13444;
if(
INPUT_PORTP(BgL_iportz00_13435))
{ /* Llib/date.scm 1036 */
BgL_inputzd2portzd2_13444 = BgL_iportz00_13435; }  else 
{ 
obj_t BgL_auxz00_16203;
BgL_auxz00_16203 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43140)), BGl_string7592z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13435); 
FAILURE(BgL_auxz00_16203,BFALSE,BFALSE);} 
BgL_res4904z00_13443 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_13444); } 
BgL_arg1870z00_13441 = BgL_res4904z00_13443; } 
{ /* Llib/date.scm 1036 */
long BgL_res4905z00_13445;
{ /* Llib/date.scm 1036 */
obj_t BgL_inputzd2portzd2_13446;
if(
INPUT_PORTP(BgL_iportz00_13435))
{ /* Llib/date.scm 1036 */
BgL_inputzd2portzd2_13446 = BgL_iportz00_13435; }  else 
{ 
obj_t BgL_auxz00_16210;
BgL_auxz00_16210 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43140)), BGl_string7592z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13435); 
FAILURE(BgL_auxz00_16210,BFALSE,BFALSE);} 
BgL_res4905z00_13445 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_13446); } 
BgL_arg1871z00_13442 = BgL_res4905z00_13445; } 
{ 
long BgL_bufposz00_16216;long BgL_forwardz00_16215;
BgL_forwardz00_16215 = BgL_arg1870z00_13441; 
BgL_bufposz00_16216 = BgL_arg1871z00_13442; 
BgL_bufposz00_13438 = BgL_bufposz00_16216; 
BgL_forwardz00_13437 = BgL_forwardz00_16215; 
goto BgL_statezd20zd21175z00_13330;} }  else 
{ /* Llib/date.scm 1036 */
BgL_matchz00_13333 = BgL_lastzd2matchzd2_13436; } }  else 
{ /* Llib/date.scm 1036 */
int BgL_curz00_13447;
{ /* Llib/date.scm 1036 */
int BgL_res4906z00_13448;
{ /* Llib/date.scm 1036 */
obj_t BgL_inputzd2portzd2_13449;
if(
INPUT_PORTP(BgL_iportz00_13435))
{ /* Llib/date.scm 1036 */
BgL_inputzd2portzd2_13449 = BgL_iportz00_13435; }  else 
{ 
obj_t BgL_auxz00_16219;
BgL_auxz00_16219 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43140)), BGl_string7592z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13435); 
FAILURE(BgL_auxz00_16219,BFALSE,BFALSE);} 
BgL_res4906z00_13448 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_13449, BgL_forwardz00_13437); } 
BgL_curz00_13447 = BgL_res4906z00_13448; } 
{ /* Llib/date.scm 1036 */

{ /* Llib/date.scm 1036 */
bool_t BgL_test8378z00_16224;
if(
(
(long)(BgL_curz00_13447)==((long)65)))
{ /* Llib/date.scm 1036 */
BgL_test8378z00_16224 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1036 */
if(
(
(long)(BgL_curz00_13447)==((long)68)))
{ /* Llib/date.scm 1036 */
BgL_test8378z00_16224 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1036 */
if(
(
(long)(BgL_curz00_13447)==((long)70)))
{ /* Llib/date.scm 1036 */
BgL_test8378z00_16224 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1036 */
if(
(
(long)(BgL_curz00_13447)==((long)74)))
{ /* Llib/date.scm 1036 */
BgL_test8378z00_16224 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1036 */
bool_t BgL_test8383z00_16237;
if(
(
(long)(BgL_curz00_13447)==((long)79)))
{ /* Llib/date.scm 1036 */
BgL_test8383z00_16237 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1036 */
if(
(
(long)(BgL_curz00_13447)==((long)78)))
{ /* Llib/date.scm 1036 */
BgL_test8383z00_16237 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1036 */
BgL_test8383z00_16237 = 
(
(long)(BgL_curz00_13447)==((long)77))
; } } 
if(BgL_test8383z00_16237)
{ /* Llib/date.scm 1036 */
BgL_test8378z00_16224 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1036 */
BgL_test8378z00_16224 = 
(
(long)(BgL_curz00_13447)==((long)83))
; } } } } } 
if(BgL_test8378z00_16224)
{ /* Llib/date.scm 1036 */
BgL_iportz00_13381 = BgL_iportz00_13435; 
BgL_lastzd2matchzd2_13382 = BgL_lastzd2matchzd2_13436; 
BgL_forwardz00_13383 = 
(((long)1)+BgL_forwardz00_13437); 
BgL_bufposz00_13384 = BgL_bufposz00_13438; 
BgL_statezd23zd21178z00_13327:
{ /* Llib/date.scm 1036 */
long BgL_newzd2matchzd2_13385;
{ /* Llib/date.scm 1036 */
long BgL_res4946z00_13386;
{ /* Llib/date.scm 1036 */
obj_t BgL_inputzd2portzd2_13387;
if(
INPUT_PORTP(BgL_iportz00_13381))
{ /* Llib/date.scm 1036 */
BgL_inputzd2portzd2_13387 = BgL_iportz00_13381; }  else 
{ 
obj_t BgL_auxz00_16250;
BgL_auxz00_16250 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43140)), BGl_string7589z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13381); 
FAILURE(BgL_auxz00_16250,BFALSE,BFALSE);} 
BgL_res4946z00_13386 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_13387, BgL_forwardz00_13383); } BgL_res4946z00_13386; } 
BgL_newzd2matchzd2_13385 = ((long)2); 
if(
(BgL_forwardz00_13383==BgL_bufposz00_13384))
{ /* Llib/date.scm 1036 */
bool_t BgL_test8388z00_16257;
{ /* Llib/date.scm 1036 */
bool_t BgL_res4948z00_13388;
{ /* Llib/date.scm 1036 */
obj_t BgL_inputzd2portzd2_13389;
if(
INPUT_PORTP(BgL_iportz00_13381))
{ /* Llib/date.scm 1036 */
BgL_inputzd2portzd2_13389 = BgL_iportz00_13381; }  else 
{ 
obj_t BgL_auxz00_16260;
BgL_auxz00_16260 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43140)), BGl_string7589z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13381); 
FAILURE(BgL_auxz00_16260,BFALSE,BFALSE);} 
BgL_res4948z00_13388 = 
rgc_fill_buffer(BgL_inputzd2portzd2_13389); } 
BgL_test8388z00_16257 = BgL_res4948z00_13388; } 
if(BgL_test8388z00_16257)
{ /* Llib/date.scm 1036 */
long BgL_arg1912z00_13390;long BgL_arg1913z00_13391;
{ /* Llib/date.scm 1036 */
long BgL_res4949z00_13392;
{ /* Llib/date.scm 1036 */
obj_t BgL_inputzd2portzd2_13393;
if(
INPUT_PORTP(BgL_iportz00_13381))
{ /* Llib/date.scm 1036 */
BgL_inputzd2portzd2_13393 = BgL_iportz00_13381; }  else 
{ 
obj_t BgL_auxz00_16267;
BgL_auxz00_16267 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43140)), BGl_string7589z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13381); 
FAILURE(BgL_auxz00_16267,BFALSE,BFALSE);} 
BgL_res4949z00_13392 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_13393); } 
BgL_arg1912z00_13390 = BgL_res4949z00_13392; } 
{ /* Llib/date.scm 1036 */
long BgL_res4950z00_13394;
{ /* Llib/date.scm 1036 */
obj_t BgL_inputzd2portzd2_13395;
if(
INPUT_PORTP(BgL_iportz00_13381))
{ /* Llib/date.scm 1036 */
BgL_inputzd2portzd2_13395 = BgL_iportz00_13381; }  else 
{ 
obj_t BgL_auxz00_16274;
BgL_auxz00_16274 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43140)), BGl_string7589z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13381); 
FAILURE(BgL_auxz00_16274,BFALSE,BFALSE);} 
BgL_res4950z00_13394 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_13395); } 
BgL_arg1913z00_13391 = BgL_res4950z00_13394; } 
{ 
long BgL_bufposz00_16280;long BgL_forwardz00_16279;
BgL_forwardz00_16279 = BgL_arg1912z00_13390; 
BgL_bufposz00_16280 = BgL_arg1913z00_13391; 
BgL_bufposz00_13384 = BgL_bufposz00_16280; 
BgL_forwardz00_13383 = BgL_forwardz00_16279; 
goto BgL_statezd23zd21178z00_13327;} }  else 
{ /* Llib/date.scm 1036 */
BgL_matchz00_13333 = BgL_newzd2matchzd2_13385; } }  else 
{ /* Llib/date.scm 1036 */
int BgL_curz00_13396;
{ /* Llib/date.scm 1036 */
int BgL_res4951z00_13397;
{ /* Llib/date.scm 1036 */
obj_t BgL_inputzd2portzd2_13398;
if(
INPUT_PORTP(BgL_iportz00_13381))
{ /* Llib/date.scm 1036 */
BgL_inputzd2portzd2_13398 = BgL_iportz00_13381; }  else 
{ 
obj_t BgL_auxz00_16283;
BgL_auxz00_16283 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43140)), BGl_string7589z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13381); 
FAILURE(BgL_auxz00_16283,BFALSE,BFALSE);} 
BgL_res4951z00_13397 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_13398, BgL_forwardz00_13383); } 
BgL_curz00_13396 = BgL_res4951z00_13397; } 
{ /* Llib/date.scm 1036 */

{ /* Llib/date.scm 1036 */
bool_t BgL_test8393z00_16288;
{ /* Llib/date.scm 1036 */
bool_t BgL_test8394z00_16289;
if(
(
(long)(BgL_curz00_13396)==((long)99)))
{ /* Llib/date.scm 1036 */
BgL_test8394z00_16289 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1036 */
if(
(
(long)(BgL_curz00_13396)==((long)98)))
{ /* Llib/date.scm 1036 */
BgL_test8394z00_16289 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1036 */
BgL_test8394z00_16289 = 
(
(long)(BgL_curz00_13396)==((long)97))
; } } 
if(BgL_test8394z00_16289)
{ /* Llib/date.scm 1036 */
BgL_test8393z00_16288 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1036 */
if(
(
(long)(BgL_curz00_13396)==((long)101)))
{ /* Llib/date.scm 1036 */
BgL_test8393z00_16288 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1036 */
if(
(
(long)(BgL_curz00_13396)==((long)103)))
{ /* Llib/date.scm 1036 */
BgL_test8393z00_16288 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1036 */
if(
(
(long)(BgL_curz00_13396)==((long)108)))
{ /* Llib/date.scm 1036 */
BgL_test8393z00_16288 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1036 */
bool_t BgL_test8400z00_16307;
if(
(
(long)(BgL_curz00_13396)==((long)112)))
{ /* Llib/date.scm 1036 */
BgL_test8400z00_16307 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1036 */
if(
(
(long)(BgL_curz00_13396)==((long)111)))
{ /* Llib/date.scm 1036 */
BgL_test8400z00_16307 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1036 */
BgL_test8400z00_16307 = 
(
(long)(BgL_curz00_13396)==((long)110))
; } } 
if(BgL_test8400z00_16307)
{ /* Llib/date.scm 1036 */
BgL_test8393z00_16288 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1036 */
if(
(
(long)(BgL_curz00_13396)==((long)114)))
{ /* Llib/date.scm 1036 */
BgL_test8393z00_16288 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1036 */
bool_t BgL_test8404z00_16319;
if(
(
(long)(BgL_curz00_13396)==((long)118)))
{ /* Llib/date.scm 1036 */
BgL_test8404z00_16319 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1036 */
if(
(
(long)(BgL_curz00_13396)==((long)117)))
{ /* Llib/date.scm 1036 */
BgL_test8404z00_16319 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1036 */
BgL_test8404z00_16319 = 
(
(long)(BgL_curz00_13396)==((long)116))
; } } 
if(BgL_test8404z00_16319)
{ /* Llib/date.scm 1036 */
BgL_test8393z00_16288 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1036 */
BgL_test8393z00_16288 = 
(
(long)(BgL_curz00_13396)==((long)121))
; } } } } } } } } 
if(BgL_test8393z00_16288)
{ /* Llib/date.scm 1036 */
BgL_iportz00_13362 = BgL_iportz00_13381; 
BgL_lastzd2matchzd2_13363 = BgL_newzd2matchzd2_13385; 
BgL_forwardz00_13364 = 
(((long)1)+BgL_forwardz00_13383); 
BgL_bufposz00_13365 = BgL_bufposz00_13384; 
BgL_statezd24zd21179z00_13326:
if(
(BgL_forwardz00_13364==BgL_bufposz00_13365))
{ /* Llib/date.scm 1036 */
bool_t BgL_test8408z00_16332;
{ /* Llib/date.scm 1036 */
bool_t BgL_res4968z00_13366;
{ /* Llib/date.scm 1036 */
obj_t BgL_inputzd2portzd2_13367;
if(
INPUT_PORTP(BgL_iportz00_13362))
{ /* Llib/date.scm 1036 */
BgL_inputzd2portzd2_13367 = BgL_iportz00_13362; }  else 
{ 
obj_t BgL_auxz00_16335;
BgL_auxz00_16335 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43140)), BGl_string7588z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13362); 
FAILURE(BgL_auxz00_16335,BFALSE,BFALSE);} 
BgL_res4968z00_13366 = 
rgc_fill_buffer(BgL_inputzd2portzd2_13367); } 
BgL_test8408z00_16332 = BgL_res4968z00_13366; } 
if(BgL_test8408z00_16332)
{ /* Llib/date.scm 1036 */
long BgL_arg1932z00_13368;long BgL_arg1933z00_13369;
{ /* Llib/date.scm 1036 */
long BgL_res4969z00_13370;
{ /* Llib/date.scm 1036 */
obj_t BgL_inputzd2portzd2_13371;
if(
INPUT_PORTP(BgL_iportz00_13362))
{ /* Llib/date.scm 1036 */
BgL_inputzd2portzd2_13371 = BgL_iportz00_13362; }  else 
{ 
obj_t BgL_auxz00_16342;
BgL_auxz00_16342 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43140)), BGl_string7588z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13362); 
FAILURE(BgL_auxz00_16342,BFALSE,BFALSE);} 
BgL_res4969z00_13370 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_13371); } 
BgL_arg1932z00_13368 = BgL_res4969z00_13370; } 
{ /* Llib/date.scm 1036 */
long BgL_res4970z00_13372;
{ /* Llib/date.scm 1036 */
obj_t BgL_inputzd2portzd2_13373;
if(
INPUT_PORTP(BgL_iportz00_13362))
{ /* Llib/date.scm 1036 */
BgL_inputzd2portzd2_13373 = BgL_iportz00_13362; }  else 
{ 
obj_t BgL_auxz00_16349;
BgL_auxz00_16349 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43140)), BGl_string7588z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13362); 
FAILURE(BgL_auxz00_16349,BFALSE,BFALSE);} 
BgL_res4970z00_13372 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_13373); } 
BgL_arg1933z00_13369 = BgL_res4970z00_13372; } 
{ 
long BgL_bufposz00_16355;long BgL_forwardz00_16354;
BgL_forwardz00_16354 = BgL_arg1932z00_13368; 
BgL_bufposz00_16355 = BgL_arg1933z00_13369; 
BgL_bufposz00_13365 = BgL_bufposz00_16355; 
BgL_forwardz00_13364 = BgL_forwardz00_16354; 
goto BgL_statezd24zd21179z00_13326;} }  else 
{ /* Llib/date.scm 1036 */
BgL_matchz00_13333 = BgL_lastzd2matchzd2_13363; } }  else 
{ /* Llib/date.scm 1036 */
int BgL_curz00_13374;
{ /* Llib/date.scm 1036 */
int BgL_res4971z00_13375;
{ /* Llib/date.scm 1036 */
obj_t BgL_inputzd2portzd2_13376;
if(
INPUT_PORTP(BgL_iportz00_13362))
{ /* Llib/date.scm 1036 */
BgL_inputzd2portzd2_13376 = BgL_iportz00_13362; }  else 
{ 
obj_t BgL_auxz00_16358;
BgL_auxz00_16358 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43140)), BGl_string7588z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13362); 
FAILURE(BgL_auxz00_16358,BFALSE,BFALSE);} 
BgL_res4971z00_13375 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_13376, BgL_forwardz00_13364); } 
BgL_curz00_13374 = BgL_res4971z00_13375; } 
{ /* Llib/date.scm 1036 */

{ /* Llib/date.scm 1036 */
bool_t BgL_test8413z00_16363;
{ /* Llib/date.scm 1036 */
bool_t BgL_test8414z00_16364;
if(
(
(long)(BgL_curz00_13374)==((long)99)))
{ /* Llib/date.scm 1036 */
BgL_test8414z00_16364 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1036 */
if(
(
(long)(BgL_curz00_13374)==((long)98)))
{ /* Llib/date.scm 1036 */
BgL_test8414z00_16364 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1036 */
BgL_test8414z00_16364 = 
(
(long)(BgL_curz00_13374)==((long)97))
; } } 
if(BgL_test8414z00_16364)
{ /* Llib/date.scm 1036 */
BgL_test8413z00_16363 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1036 */
if(
(
(long)(BgL_curz00_13374)==((long)101)))
{ /* Llib/date.scm 1036 */
BgL_test8413z00_16363 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1036 */
if(
(
(long)(BgL_curz00_13374)==((long)103)))
{ /* Llib/date.scm 1036 */
BgL_test8413z00_16363 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1036 */
if(
(
(long)(BgL_curz00_13374)==((long)108)))
{ /* Llib/date.scm 1036 */
BgL_test8413z00_16363 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1036 */
bool_t BgL_test8420z00_16382;
if(
(
(long)(BgL_curz00_13374)==((long)112)))
{ /* Llib/date.scm 1036 */
BgL_test8420z00_16382 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1036 */
if(
(
(long)(BgL_curz00_13374)==((long)111)))
{ /* Llib/date.scm 1036 */
BgL_test8420z00_16382 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1036 */
BgL_test8420z00_16382 = 
(
(long)(BgL_curz00_13374)==((long)110))
; } } 
if(BgL_test8420z00_16382)
{ /* Llib/date.scm 1036 */
BgL_test8413z00_16363 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1036 */
if(
(
(long)(BgL_curz00_13374)==((long)114)))
{ /* Llib/date.scm 1036 */
BgL_test8413z00_16363 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1036 */
bool_t BgL_test8424z00_16394;
if(
(
(long)(BgL_curz00_13374)==((long)118)))
{ /* Llib/date.scm 1036 */
BgL_test8424z00_16394 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1036 */
if(
(
(long)(BgL_curz00_13374)==((long)117)))
{ /* Llib/date.scm 1036 */
BgL_test8424z00_16394 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1036 */
BgL_test8424z00_16394 = 
(
(long)(BgL_curz00_13374)==((long)116))
; } } 
if(BgL_test8424z00_16394)
{ /* Llib/date.scm 1036 */
BgL_test8413z00_16363 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1036 */
BgL_test8413z00_16363 = 
(
(long)(BgL_curz00_13374)==((long)121))
; } } } } } } } } 
if(BgL_test8413z00_16363)
{ /* Llib/date.scm 1036 */
long BgL_arg1948z00_13377;
BgL_arg1948z00_13377 = 
(((long)1)+BgL_forwardz00_13364); 
{ /* Llib/date.scm 1036 */
long BgL_newzd2matchzd2_13378;
{ /* Llib/date.scm 1036 */
long BgL_res4987z00_13379;
{ /* Llib/date.scm 1036 */
obj_t BgL_inputzd2portzd2_13380;
if(
INPUT_PORTP(BgL_iportz00_13362))
{ /* Llib/date.scm 1036 */
BgL_inputzd2portzd2_13380 = BgL_iportz00_13362; }  else 
{ 
obj_t BgL_auxz00_16408;
BgL_auxz00_16408 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43140)), BGl_string7588z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13362); 
FAILURE(BgL_auxz00_16408,BFALSE,BFALSE);} 
BgL_res4987z00_13379 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_13380, BgL_arg1948z00_13377); } BgL_res4987z00_13379; } 
BgL_newzd2matchzd2_13378 = ((long)1); 
BgL_matchz00_13333 = BgL_newzd2matchzd2_13378; } }  else 
{ /* Llib/date.scm 1036 */
BgL_matchz00_13333 = BgL_lastzd2matchzd2_13363; } } } } }  else 
{ /* Llib/date.scm 1036 */
BgL_matchz00_13333 = BgL_newzd2matchzd2_13385; } } } } } }  else 
{ /* Llib/date.scm 1036 */
bool_t BgL_test8428z00_16415;
{ /* Llib/date.scm 1036 */
bool_t BgL_test8429z00_16416;
if(
(
(long)(BgL_curz00_13447)==((long)10)))
{ /* Llib/date.scm 1036 */
BgL_test8429z00_16416 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1036 */
BgL_test8429z00_16416 = 
(
(long)(BgL_curz00_13447)==((long)9))
; } 
if(BgL_test8429z00_16416)
{ /* Llib/date.scm 1036 */
BgL_test8428z00_16415 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1036 */
if(
(
(long)(BgL_curz00_13447)==((long)13)))
{ /* Llib/date.scm 1036 */
BgL_test8428z00_16415 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1036 */
BgL_test8428z00_16415 = 
(
(long)(BgL_curz00_13447)==((long)32))
; } } } 
if(BgL_test8428z00_16415)
{ /* Llib/date.scm 1036 */
BgL_iportz00_13417 = BgL_iportz00_13435; 
BgL_lastzd2matchzd2_13418 = BgL_lastzd2matchzd2_13436; 
BgL_forwardz00_13419 = 
(((long)1)+BgL_forwardz00_13437); 
BgL_bufposz00_13420 = BgL_bufposz00_13438; 
BgL_statezd22zd21177z00_13329:
{ /* Llib/date.scm 1036 */
long BgL_newzd2matchzd2_13421;
{ /* Llib/date.scm 1036 */
long BgL_res4923z00_13422;
{ /* Llib/date.scm 1036 */
obj_t BgL_inputzd2portzd2_13423;
if(
INPUT_PORTP(BgL_iportz00_13417))
{ /* Llib/date.scm 1036 */
BgL_inputzd2portzd2_13423 = BgL_iportz00_13417; }  else 
{ 
obj_t BgL_auxz00_16429;
BgL_auxz00_16429 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43140)), BGl_string7591z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13417); 
FAILURE(BgL_auxz00_16429,BFALSE,BFALSE);} 
BgL_res4923z00_13422 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_13423, BgL_forwardz00_13419); } BgL_res4923z00_13422; } 
BgL_newzd2matchzd2_13421 = ((long)0); 
if(
(BgL_forwardz00_13419==BgL_bufposz00_13420))
{ /* Llib/date.scm 1036 */
bool_t BgL_test8434z00_16436;
{ /* Llib/date.scm 1036 */
bool_t BgL_res4925z00_13424;
{ /* Llib/date.scm 1036 */
obj_t BgL_inputzd2portzd2_13425;
if(
INPUT_PORTP(BgL_iportz00_13417))
{ /* Llib/date.scm 1036 */
BgL_inputzd2portzd2_13425 = BgL_iportz00_13417; }  else 
{ 
obj_t BgL_auxz00_16439;
BgL_auxz00_16439 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43140)), BGl_string7591z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13417); 
FAILURE(BgL_auxz00_16439,BFALSE,BFALSE);} 
BgL_res4925z00_13424 = 
rgc_fill_buffer(BgL_inputzd2portzd2_13425); } 
BgL_test8434z00_16436 = BgL_res4925z00_13424; } 
if(BgL_test8434z00_16436)
{ /* Llib/date.scm 1036 */
long BgL_arg1891z00_13426;long BgL_arg1892z00_13427;
{ /* Llib/date.scm 1036 */
long BgL_res4926z00_13428;
{ /* Llib/date.scm 1036 */
obj_t BgL_inputzd2portzd2_13429;
if(
INPUT_PORTP(BgL_iportz00_13417))
{ /* Llib/date.scm 1036 */
BgL_inputzd2portzd2_13429 = BgL_iportz00_13417; }  else 
{ 
obj_t BgL_auxz00_16446;
BgL_auxz00_16446 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43140)), BGl_string7591z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13417); 
FAILURE(BgL_auxz00_16446,BFALSE,BFALSE);} 
BgL_res4926z00_13428 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_13429); } 
BgL_arg1891z00_13426 = BgL_res4926z00_13428; } 
{ /* Llib/date.scm 1036 */
long BgL_res4927z00_13430;
{ /* Llib/date.scm 1036 */
obj_t BgL_inputzd2portzd2_13431;
if(
INPUT_PORTP(BgL_iportz00_13417))
{ /* Llib/date.scm 1036 */
BgL_inputzd2portzd2_13431 = BgL_iportz00_13417; }  else 
{ 
obj_t BgL_auxz00_16453;
BgL_auxz00_16453 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43140)), BGl_string7591z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13417); 
FAILURE(BgL_auxz00_16453,BFALSE,BFALSE);} 
BgL_res4927z00_13430 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_13431); } 
BgL_arg1892z00_13427 = BgL_res4927z00_13430; } 
{ 
long BgL_bufposz00_16459;long BgL_forwardz00_16458;
BgL_forwardz00_16458 = BgL_arg1891z00_13426; 
BgL_bufposz00_16459 = BgL_arg1892z00_13427; 
BgL_bufposz00_13420 = BgL_bufposz00_16459; 
BgL_forwardz00_13419 = BgL_forwardz00_16458; 
goto BgL_statezd22zd21177z00_13329;} }  else 
{ /* Llib/date.scm 1036 */
BgL_matchz00_13333 = BgL_newzd2matchzd2_13421; } }  else 
{ /* Llib/date.scm 1036 */
int BgL_curz00_13432;
{ /* Llib/date.scm 1036 */
int BgL_res4928z00_13433;
{ /* Llib/date.scm 1036 */
obj_t BgL_inputzd2portzd2_13434;
if(
INPUT_PORTP(BgL_iportz00_13417))
{ /* Llib/date.scm 1036 */
BgL_inputzd2portzd2_13434 = BgL_iportz00_13417; }  else 
{ 
obj_t BgL_auxz00_16462;
BgL_auxz00_16462 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43140)), BGl_string7591z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13417); 
FAILURE(BgL_auxz00_16462,BFALSE,BFALSE);} 
BgL_res4928z00_13433 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_13434, BgL_forwardz00_13419); } 
BgL_curz00_13432 = BgL_res4928z00_13433; } 
{ /* Llib/date.scm 1036 */

{ /* Llib/date.scm 1036 */
bool_t BgL_test8439z00_16467;
{ /* Llib/date.scm 1036 */
bool_t BgL_test8440z00_16468;
if(
(
(long)(BgL_curz00_13432)==((long)10)))
{ /* Llib/date.scm 1036 */
BgL_test8440z00_16468 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1036 */
BgL_test8440z00_16468 = 
(
(long)(BgL_curz00_13432)==((long)9))
; } 
if(BgL_test8440z00_16468)
{ /* Llib/date.scm 1036 */
BgL_test8439z00_16467 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1036 */
if(
(
(long)(BgL_curz00_13432)==((long)13)))
{ /* Llib/date.scm 1036 */
BgL_test8439z00_16467 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1036 */
BgL_test8439z00_16467 = 
(
(long)(BgL_curz00_13432)==((long)32))
; } } } 
if(BgL_test8439z00_16467)
{ /* Llib/date.scm 1036 */
BgL_iportz00_13399 = BgL_iportz00_13417; 
BgL_lastzd2matchzd2_13400 = BgL_newzd2matchzd2_13421; 
BgL_forwardz00_13401 = 
(((long)1)+BgL_forwardz00_13419); 
BgL_bufposz00_13402 = BgL_bufposz00_13420; 
BgL_statezd27zd21182z00_13328:
{ /* Llib/date.scm 1036 */
long BgL_newzd2matchzd2_13403;
{ /* Llib/date.scm 1036 */
long BgL_res4934z00_13404;
{ /* Llib/date.scm 1036 */
obj_t BgL_inputzd2portzd2_13405;
if(
INPUT_PORTP(BgL_iportz00_13399))
{ /* Llib/date.scm 1036 */
BgL_inputzd2portzd2_13405 = BgL_iportz00_13399; }  else 
{ 
obj_t BgL_auxz00_16481;
BgL_auxz00_16481 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43140)), BGl_string7590z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13399); 
FAILURE(BgL_auxz00_16481,BFALSE,BFALSE);} 
BgL_res4934z00_13404 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_13405, BgL_forwardz00_13401); } BgL_res4934z00_13404; } 
BgL_newzd2matchzd2_13403 = ((long)0); 
if(
(BgL_forwardz00_13401==BgL_bufposz00_13402))
{ /* Llib/date.scm 1036 */
bool_t BgL_test8445z00_16488;
{ /* Llib/date.scm 1036 */
bool_t BgL_res4936z00_13406;
{ /* Llib/date.scm 1036 */
obj_t BgL_inputzd2portzd2_13407;
if(
INPUT_PORTP(BgL_iportz00_13399))
{ /* Llib/date.scm 1036 */
BgL_inputzd2portzd2_13407 = BgL_iportz00_13399; }  else 
{ 
obj_t BgL_auxz00_16491;
BgL_auxz00_16491 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43140)), BGl_string7590z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13399); 
FAILURE(BgL_auxz00_16491,BFALSE,BFALSE);} 
BgL_res4936z00_13406 = 
rgc_fill_buffer(BgL_inputzd2portzd2_13407); } 
BgL_test8445z00_16488 = BgL_res4936z00_13406; } 
if(BgL_test8445z00_16488)
{ /* Llib/date.scm 1036 */
long BgL_arg1901z00_13408;long BgL_arg1902z00_13409;
{ /* Llib/date.scm 1036 */
long BgL_res4937z00_13410;
{ /* Llib/date.scm 1036 */
obj_t BgL_inputzd2portzd2_13411;
if(
INPUT_PORTP(BgL_iportz00_13399))
{ /* Llib/date.scm 1036 */
BgL_inputzd2portzd2_13411 = BgL_iportz00_13399; }  else 
{ 
obj_t BgL_auxz00_16498;
BgL_auxz00_16498 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43140)), BGl_string7590z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13399); 
FAILURE(BgL_auxz00_16498,BFALSE,BFALSE);} 
BgL_res4937z00_13410 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_13411); } 
BgL_arg1901z00_13408 = BgL_res4937z00_13410; } 
{ /* Llib/date.scm 1036 */
long BgL_res4938z00_13412;
{ /* Llib/date.scm 1036 */
obj_t BgL_inputzd2portzd2_13413;
if(
INPUT_PORTP(BgL_iportz00_13399))
{ /* Llib/date.scm 1036 */
BgL_inputzd2portzd2_13413 = BgL_iportz00_13399; }  else 
{ 
obj_t BgL_auxz00_16505;
BgL_auxz00_16505 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43140)), BGl_string7590z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13399); 
FAILURE(BgL_auxz00_16505,BFALSE,BFALSE);} 
BgL_res4938z00_13412 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_13413); } 
BgL_arg1902z00_13409 = BgL_res4938z00_13412; } 
{ 
long BgL_bufposz00_16511;long BgL_forwardz00_16510;
BgL_forwardz00_16510 = BgL_arg1901z00_13408; 
BgL_bufposz00_16511 = BgL_arg1902z00_13409; 
BgL_bufposz00_13402 = BgL_bufposz00_16511; 
BgL_forwardz00_13401 = BgL_forwardz00_16510; 
goto BgL_statezd27zd21182z00_13328;} }  else 
{ /* Llib/date.scm 1036 */
BgL_matchz00_13333 = BgL_newzd2matchzd2_13403; } }  else 
{ /* Llib/date.scm 1036 */
int BgL_curz00_13414;
{ /* Llib/date.scm 1036 */
int BgL_res4939z00_13415;
{ /* Llib/date.scm 1036 */
obj_t BgL_inputzd2portzd2_13416;
if(
INPUT_PORTP(BgL_iportz00_13399))
{ /* Llib/date.scm 1036 */
BgL_inputzd2portzd2_13416 = BgL_iportz00_13399; }  else 
{ 
obj_t BgL_auxz00_16514;
BgL_auxz00_16514 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43140)), BGl_string7590z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13399); 
FAILURE(BgL_auxz00_16514,BFALSE,BFALSE);} 
BgL_res4939z00_13415 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_13416, BgL_forwardz00_13401); } 
BgL_curz00_13414 = BgL_res4939z00_13415; } 
{ /* Llib/date.scm 1036 */

{ /* Llib/date.scm 1036 */
bool_t BgL_test8450z00_16519;
{ /* Llib/date.scm 1036 */
bool_t BgL_test8451z00_16520;
if(
(
(long)(BgL_curz00_13414)==((long)10)))
{ /* Llib/date.scm 1036 */
BgL_test8451z00_16520 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1036 */
BgL_test8451z00_16520 = 
(
(long)(BgL_curz00_13414)==((long)9))
; } 
if(BgL_test8451z00_16520)
{ /* Llib/date.scm 1036 */
BgL_test8450z00_16519 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1036 */
if(
(
(long)(BgL_curz00_13414)==((long)13)))
{ /* Llib/date.scm 1036 */
BgL_test8450z00_16519 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1036 */
BgL_test8450z00_16519 = 
(
(long)(BgL_curz00_13414)==((long)32))
; } } } 
if(BgL_test8450z00_16519)
{ 
long BgL_forwardz00_16532;long BgL_lastzd2matchzd2_16531;
BgL_lastzd2matchzd2_16531 = BgL_newzd2matchzd2_13403; 
BgL_forwardz00_16532 = 
(((long)1)+BgL_forwardz00_13401); 
BgL_forwardz00_13401 = BgL_forwardz00_16532; 
BgL_lastzd2matchzd2_13400 = BgL_lastzd2matchzd2_16531; 
goto BgL_statezd27zd21182z00_13328;}  else 
{ /* Llib/date.scm 1036 */
BgL_matchz00_13333 = BgL_newzd2matchzd2_13403; } } } } } }  else 
{ /* Llib/date.scm 1036 */
BgL_matchz00_13333 = BgL_newzd2matchzd2_13421; } } } } } }  else 
{ /* Llib/date.scm 1036 */
long BgL_arg1887z00_13450;
BgL_arg1887z00_13450 = 
(((long)1)+BgL_forwardz00_13437); 
{ /* Llib/date.scm 1036 */
long BgL_newzd2matchzd2_13451;
{ /* Llib/date.scm 1036 */
long BgL_res4922z00_13452;
{ /* Llib/date.scm 1036 */
obj_t BgL_inputzd2portzd2_13453;
if(
INPUT_PORTP(BgL_iportz00_13435))
{ /* Llib/date.scm 1036 */
BgL_inputzd2portzd2_13453 = BgL_iportz00_13435; }  else 
{ 
obj_t BgL_auxz00_16539;
BgL_auxz00_16539 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43140)), BGl_string7592z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13435); 
FAILURE(BgL_auxz00_16539,BFALSE,BFALSE);} 
BgL_res4922z00_13452 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_13453, BgL_arg1887z00_13450); } BgL_res4922z00_13452; } 
BgL_newzd2matchzd2_13451 = ((long)2); 
BgL_matchz00_13333 = BgL_newzd2matchzd2_13451; } } } } } } } 
{ /* Llib/date.scm 1036 */
obj_t BgL_inputzd2portzd2_13340;
if(
INPUT_PORTP(BgL_iportz00_11325))
{ /* Llib/date.scm 1036 */
BgL_inputzd2portzd2_13340 = BgL_iportz00_11325; }  else 
{ 
obj_t BgL_auxz00_16546;
BgL_auxz00_16546 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43140)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11325); 
FAILURE(BgL_auxz00_16546,BFALSE,BFALSE);} 
RGC_SET_FILEPOS(BgL_inputzd2portzd2_13340); } 
switch( BgL_matchz00_13333) { case ((long)2) : 

{ /* Llib/date.scm 1058 */
obj_t BgL_arg2044z00_13341;obj_t BgL_arg2045z00_13342;
{ /* Llib/date.scm 1036 */
bool_t BgL_test8456z00_16551;
{ /* Llib/date.scm 1036 */
long BgL_arg2036z00_13357;
{ /* Llib/date.scm 1036 */
long BgL_res4993z00_13358;
{ /* Llib/date.scm 1036 */
obj_t BgL_inputzd2portzd2_13359;
if(
INPUT_PORTP(BgL_iportz00_11325))
{ /* Llib/date.scm 1036 */
BgL_inputzd2portzd2_13359 = BgL_iportz00_11325; }  else 
{ 
obj_t BgL_auxz00_16554;
BgL_auxz00_16554 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43140)), BGl_string7527z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11325); 
FAILURE(BgL_auxz00_16554,BFALSE,BFALSE);} 
BgL_res4993z00_13358 = 
RGC_BUFFER_MATCH_LENGTH(BgL_inputzd2portzd2_13359); } 
BgL_arg2036z00_13357 = BgL_res4993z00_13358; } 
BgL_test8456z00_16551 = 
(BgL_arg2036z00_13357==((long)0)); } 
if(BgL_test8456z00_16551)
{ /* Llib/date.scm 1036 */
BgL_arg2044z00_13341 = BEOF; }  else 
{ /* Llib/date.scm 1036 */
unsigned char BgL_res4995z00_13360;
{ /* Llib/date.scm 1036 */
obj_t BgL_inputzd2portzd2_13361;
if(
INPUT_PORTP(BgL_iportz00_11325))
{ /* Llib/date.scm 1036 */
BgL_inputzd2portzd2_13361 = BgL_iportz00_11325; }  else 
{ 
obj_t BgL_auxz00_16562;
BgL_auxz00_16562 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43140)), BGl_string7527z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11325); 
FAILURE(BgL_auxz00_16562,BFALSE,BFALSE);} 
BgL_res4995z00_13360 = 
RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_13361); } 
BgL_arg2044z00_13341 = 
BCHAR(BgL_res4995z00_13360); } } 
{ /* Llib/date.scm 1058 */
obj_t BgL_res4999z00_13343;
if(
INPUT_PORTP(BgL_iportz00_11325))
{ /* Llib/date.scm 1036 */
BgL_res4999z00_13343 = BgL_iportz00_11325; }  else 
{ 
obj_t BgL_auxz00_16570;
BgL_auxz00_16570 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43140)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11325); 
FAILURE(BgL_auxz00_16570,BFALSE,BFALSE);} 
BgL_arg2045z00_13342 = BgL_res4999z00_13343; } 
return 
BGl_parsezd2errorzd2zz__datez00(BGl_string7522z00zz__datez00, BGl_string7563z00zz__datez00, BgL_arg2044z00_13341, BgL_arg2045z00_13342);} break;case ((long)1) : 

{ /* Llib/date.scm 1040 */
obj_t BgL_casezd2valuezd2_13344;
{ /* Llib/date.scm 1040 */
obj_t BgL_res5001z00_13345;
{ /* Llib/date.scm 1036 */
obj_t BgL_res5000z00_13346;
{ /* Llib/date.scm 1036 */
obj_t BgL_inputzd2portzd2_13347;
if(
INPUT_PORTP(BgL_iportz00_11325))
{ /* Llib/date.scm 1036 */
BgL_inputzd2portzd2_13347 = BgL_iportz00_11325; }  else 
{ 
obj_t BgL_auxz00_16577;
BgL_auxz00_16577 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43140)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11325); 
FAILURE(BgL_auxz00_16577,BFALSE,BFALSE);} 
BgL_res5000z00_13346 = 
rgc_buffer_symbol(BgL_inputzd2portzd2_13347); } 
BgL_res5001z00_13345 = BgL_res5000z00_13346; } 
BgL_casezd2valuezd2_13344 = BgL_res5001z00_13345; } 
if(
(BgL_casezd2valuezd2_13344==BGl_symbol7564z00zz__datez00))
{ /* Llib/date.scm 1040 */
return 
BINT(((long)1));}  else 
{ /* Llib/date.scm 1040 */
if(
(BgL_casezd2valuezd2_13344==BGl_symbol7566z00zz__datez00))
{ /* Llib/date.scm 1040 */
return 
BINT(((long)2));}  else 
{ /* Llib/date.scm 1040 */
if(
(BgL_casezd2valuezd2_13344==BGl_symbol7568z00zz__datez00))
{ /* Llib/date.scm 1040 */
return 
BINT(((long)3));}  else 
{ /* Llib/date.scm 1040 */
if(
(BgL_casezd2valuezd2_13344==BGl_symbol7570z00zz__datez00))
{ /* Llib/date.scm 1040 */
return 
BINT(((long)4));}  else 
{ /* Llib/date.scm 1040 */
if(
(BgL_casezd2valuezd2_13344==BGl_symbol7572z00zz__datez00))
{ /* Llib/date.scm 1040 */
return 
BINT(((long)5));}  else 
{ /* Llib/date.scm 1040 */
if(
(BgL_casezd2valuezd2_13344==BGl_symbol7574z00zz__datez00))
{ /* Llib/date.scm 1040 */
return 
BINT(((long)6));}  else 
{ /* Llib/date.scm 1040 */
if(
(BgL_casezd2valuezd2_13344==BGl_symbol7576z00zz__datez00))
{ /* Llib/date.scm 1040 */
return 
BINT(((long)7));}  else 
{ /* Llib/date.scm 1040 */
if(
(BgL_casezd2valuezd2_13344==BGl_symbol7578z00zz__datez00))
{ /* Llib/date.scm 1040 */
return 
BINT(((long)8));}  else 
{ /* Llib/date.scm 1040 */
if(
(BgL_casezd2valuezd2_13344==BGl_symbol7580z00zz__datez00))
{ /* Llib/date.scm 1040 */
return 
BINT(((long)9));}  else 
{ /* Llib/date.scm 1040 */
if(
(BgL_casezd2valuezd2_13344==BGl_symbol7582z00zz__datez00))
{ /* Llib/date.scm 1040 */
return 
BINT(((long)10));}  else 
{ /* Llib/date.scm 1040 */
if(
(BgL_casezd2valuezd2_13344==BGl_symbol7584z00zz__datez00))
{ /* Llib/date.scm 1040 */
return 
BINT(((long)11));}  else 
{ /* Llib/date.scm 1040 */
if(
(BgL_casezd2valuezd2_13344==BGl_symbol7586z00zz__datez00))
{ /* Llib/date.scm 1040 */
return 
BINT(((long)12));}  else 
{ /* Llib/date.scm 1055 */
obj_t BgL_arg2059z00_13348;obj_t BgL_arg2060z00_13349;
{ /* Llib/date.scm 1055 */
obj_t BgL_res5016z00_13350;
{ /* Llib/date.scm 1036 */
long BgL_arg1956z00_13351;
{ /* Llib/date.scm 1036 */
long BgL_res5014z00_13352;
{ /* Llib/date.scm 1036 */
obj_t BgL_inputzd2portzd2_13353;
if(
INPUT_PORTP(BgL_iportz00_11325))
{ /* Llib/date.scm 1036 */
BgL_inputzd2portzd2_13353 = BgL_iportz00_11325; }  else 
{ 
obj_t BgL_auxz00_16620;
BgL_auxz00_16620 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43140)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11325); 
FAILURE(BgL_auxz00_16620,BFALSE,BFALSE);} 
BgL_res5014z00_13352 = 
RGC_BUFFER_MATCH_LENGTH(BgL_inputzd2portzd2_13353); } 
BgL_arg1956z00_13351 = BgL_res5014z00_13352; } 
{ /* Llib/date.scm 1036 */
obj_t BgL_res5015z00_13354;
{ /* Llib/date.scm 1036 */
obj_t BgL_inputzd2portzd2_13355;
if(
INPUT_PORTP(BgL_iportz00_11325))
{ /* Llib/date.scm 1036 */
BgL_inputzd2portzd2_13355 = BgL_iportz00_11325; }  else 
{ 
obj_t BgL_auxz00_16627;
BgL_auxz00_16627 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43140)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11325); 
FAILURE(BgL_auxz00_16627,BFALSE,BFALSE);} 
BgL_res5015z00_13354 = 
rgc_buffer_substring(BgL_inputzd2portzd2_13355, ((long)0), BgL_arg1956z00_13351); } 
BgL_res5016z00_13350 = BgL_res5015z00_13354; } } 
BgL_arg2059z00_13348 = BgL_res5016z00_13350; } 
{ /* Llib/date.scm 1055 */
obj_t BgL_res5017z00_13356;
if(
INPUT_PORTP(BgL_iportz00_11325))
{ /* Llib/date.scm 1036 */
BgL_res5017z00_13356 = BgL_iportz00_11325; }  else 
{ 
obj_t BgL_auxz00_16634;
BgL_auxz00_16634 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)43140)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11325); 
FAILURE(BgL_auxz00_16634,BFALSE,BFALSE);} 
BgL_arg2060z00_13349 = BgL_res5017z00_13356; } 
return 
BGl_parsezd2errorzd2zz__datez00(BGl_string7522z00zz__datez00, BGl_string7563z00zz__datez00, BgL_arg2059z00_13348, BgL_arg2060z00_13349);} } } } } } } } } } } } } break;case ((long)0) : 

goto BgL_ignorez00_13324;break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_string7525z00zz__datez00, BGl_string7526z00zz__datez00, 
BINT(BgL_matchz00_13333));} } } } } } 

}



/* &<@anonymous:1699> */
obj_t BGl_z62zc3z04anonymousza31699ze3ze5zz__datez00(obj_t BgL_envz00_11326, obj_t BgL_iportz00_11327)
{
{ /* Llib/date.scm 1022 */
{ 
obj_t BgL_iportz00_13566;long BgL_lastzd2matchzd2_13567;long BgL_forwardz00_13568;long BgL_bufposz00_13569;obj_t BgL_iportz00_13548;long BgL_lastzd2matchzd2_13549;long BgL_forwardz00_13550;long BgL_bufposz00_13551;obj_t BgL_iportz00_13530;long BgL_lastzd2matchzd2_13531;long BgL_forwardz00_13532;long BgL_bufposz00_13533;obj_t BgL_iportz00_13512;long BgL_lastzd2matchzd2_13513;long BgL_forwardz00_13514;long BgL_bufposz00_13515;obj_t BgL_iportz00_13494;long BgL_lastzd2matchzd2_13495;long BgL_forwardz00_13496;long BgL_bufposz00_13497;
{ /* Llib/date.scm 1022 */
bool_t BgL_test8476z00_16642;
{ /* Llib/date.scm 1022 */
obj_t BgL_arg1707z00_13585;
{ /* Llib/date.scm 1022 */
obj_t BgL_res4897z00_13586;
if(
INPUT_PORTP(BgL_iportz00_11327))
{ /* Llib/date.scm 1022 */
BgL_res4897z00_13586 = BgL_iportz00_11327; }  else 
{ 
obj_t BgL_auxz00_16645;
BgL_auxz00_16645 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)42664)), BGl_string7600z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11327); 
FAILURE(BgL_auxz00_16645,BFALSE,BFALSE);} 
BgL_arg1707z00_13585 = BgL_res4897z00_13586; } 
{ /* Llib/date.scm 1022 */
bool_t BgL_res4898z00_13587;
BgL_res4898z00_13587 = 
INPUT_PORT_CLOSEP(BgL_arg1707z00_13585); 
BgL_test8476z00_16642 = BgL_res4898z00_13587; } } 
if(BgL_test8476z00_16642)
{ /* Llib/date.scm 1022 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_arg1700z00_13588;
{ /* Llib/date.scm 1022 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_new1077z00_13589;
{ /* Llib/date.scm 1022 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_new1076z00_13590;
BgL_new1076z00_13590 = 
((BgL_z62iozd2closedzd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2closedzd2errorz62_bgl) ))); 
{ /* Llib/date.scm 1022 */
long BgL_arg1704z00_13591;
{ /* Llib/date.scm 1022 */
long BgL_res4899z00_13592;
BgL_res4899z00_13592 = 
BGL_CLASS_INDEX(BGl_z62iozd2closedzd2errorz62zz__objectz00); 
BgL_arg1704z00_13591 = BgL_res4899z00_13592; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1076z00_13590), BgL_arg1704z00_13591); } 
BgL_new1077z00_13589 = BgL_new1076z00_13590; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1077z00_13589)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1077z00_13589)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_16658;
{ /* Llib/date.scm 1022 */
obj_t BgL_arg1701z00_13593;
{ /* Llib/date.scm 1022 */
obj_t BgL_arg1702z00_13594;
{ /* Llib/date.scm 1022 */
obj_t BgL_res4900z00_13595;
{ /* Llib/date.scm 1022 */
obj_t BgL_classz00_13596;
BgL_classz00_13596 = BGl_z62iozd2closedzd2errorz62zz__objectz00; 
BgL_res4900z00_13595 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_13596); } 
BgL_arg1702z00_13594 = BgL_res4900z00_13595; } 
BgL_arg1701z00_13593 = 
VECTOR_REF(BgL_arg1702z00_13594,((long)2)); } 
{ /* Llib/date.scm 1022 */
obj_t BgL_auxz00_16662;
if(
BGl_classzd2fieldzf3z21zz__objectz00(BgL_arg1701z00_13593))
{ /* Llib/date.scm 1022 */
BgL_auxz00_16662 = BgL_arg1701z00_13593
; }  else 
{ 
obj_t BgL_auxz00_16665;
BgL_auxz00_16665 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)42664)), BGl_string7600z00zz__datez00, BGl_string7542z00zz__datez00, BgL_arg1701z00_13593); 
FAILURE(BgL_auxz00_16665,BFALSE,BFALSE);} 
BgL_auxz00_16658 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_auxz00_16662); } } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1077z00_13589)))->BgL_stackz00)=((obj_t)BgL_auxz00_16658),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1077z00_13589)))->BgL_procz00)=((obj_t)BGl_string7525z00zz__datez00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1077z00_13589)))->BgL_msgz00)=((obj_t)BGl_string7543z00zz__datez00),BUNSPEC); 
{ 
obj_t BgL_auxz00_16675;
{ /* Llib/date.scm 1022 */
obj_t BgL_res4901z00_13597;
if(
INPUT_PORTP(BgL_iportz00_11327))
{ /* Llib/date.scm 1022 */
BgL_res4901z00_13597 = BgL_iportz00_11327; }  else 
{ 
obj_t BgL_auxz00_16679;
BgL_auxz00_16679 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)42664)), BGl_string7600z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11327); 
FAILURE(BgL_auxz00_16679,BFALSE,BFALSE);} 
BgL_auxz00_16675 = BgL_res4901z00_13597; } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1077z00_13589)))->BgL_objz00)=((obj_t)BgL_auxz00_16675),BUNSPEC); } 
BgL_arg1700z00_13588 = BgL_new1077z00_13589; } 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg1700z00_13588));}  else 
{ /* Llib/date.scm 1022 */
BgL_ignorez00_13467:
{ /* Llib/date.scm 1022 */
long BgL_res4892z00_13474;
{ /* Llib/date.scm 1022 */
obj_t BgL_inputzd2portzd2_13475;
if(
INPUT_PORTP(BgL_iportz00_11327))
{ /* Llib/date.scm 1022 */
BgL_inputzd2portzd2_13475 = BgL_iportz00_11327; }  else 
{ 
obj_t BgL_auxz00_16688;
BgL_auxz00_16688 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)42664)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11327); 
FAILURE(BgL_auxz00_16688,BFALSE,BFALSE);} 
BgL_res4892z00_13474 = 
RGC_START_MATCH(BgL_inputzd2portzd2_13475); } BgL_res4892z00_13474; } 
{ /* Llib/date.scm 1022 */
long BgL_matchz00_13476;
{ /* Llib/date.scm 1022 */
long BgL_arg1856z00_13477;long BgL_arg1857z00_13478;
{ /* Llib/date.scm 1022 */
long BgL_res4893z00_13479;
{ /* Llib/date.scm 1022 */
obj_t BgL_inputzd2portzd2_13480;
if(
INPUT_PORTP(BgL_iportz00_11327))
{ /* Llib/date.scm 1022 */
BgL_inputzd2portzd2_13480 = BgL_iportz00_11327; }  else 
{ 
obj_t BgL_auxz00_16695;
BgL_auxz00_16695 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)42664)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11327); 
FAILURE(BgL_auxz00_16695,BFALSE,BFALSE);} 
BgL_res4893z00_13479 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_13480); } 
BgL_arg1856z00_13477 = BgL_res4893z00_13479; } 
{ /* Llib/date.scm 1022 */
long BgL_res4894z00_13481;
{ /* Llib/date.scm 1022 */
obj_t BgL_inputzd2portzd2_13482;
if(
INPUT_PORTP(BgL_iportz00_11327))
{ /* Llib/date.scm 1022 */
BgL_inputzd2portzd2_13482 = BgL_iportz00_11327; }  else 
{ 
obj_t BgL_auxz00_16702;
BgL_auxz00_16702 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)42664)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11327); 
FAILURE(BgL_auxz00_16702,BFALSE,BFALSE);} 
BgL_res4894z00_13481 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_13482); } 
BgL_arg1857z00_13478 = BgL_res4894z00_13481; } 
BgL_iportz00_13566 = BgL_iportz00_11327; 
BgL_lastzd2matchzd2_13567 = ((long)2); 
BgL_forwardz00_13568 = BgL_arg1856z00_13477; 
BgL_bufposz00_13569 = BgL_arg1857z00_13478; 
BgL_statezd20zd21166z00_13473:
if(
(BgL_forwardz00_13568==BgL_bufposz00_13569))
{ /* Llib/date.scm 1022 */
bool_t BgL_test8484z00_16709;
{ /* Llib/date.scm 1022 */
bool_t BgL_res4833z00_13570;
{ /* Llib/date.scm 1022 */
obj_t BgL_inputzd2portzd2_13571;
if(
INPUT_PORTP(BgL_iportz00_13566))
{ /* Llib/date.scm 1022 */
BgL_inputzd2portzd2_13571 = BgL_iportz00_13566; }  else 
{ 
obj_t BgL_auxz00_16712;
BgL_auxz00_16712 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)42664)), BGl_string7599z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13566); 
FAILURE(BgL_auxz00_16712,BFALSE,BFALSE);} 
BgL_res4833z00_13570 = 
rgc_fill_buffer(BgL_inputzd2portzd2_13571); } 
BgL_test8484z00_16709 = BgL_res4833z00_13570; } 
if(BgL_test8484z00_16709)
{ /* Llib/date.scm 1022 */
long BgL_arg1711z00_13572;long BgL_arg1712z00_13573;
{ /* Llib/date.scm 1022 */
long BgL_res4834z00_13574;
{ /* Llib/date.scm 1022 */
obj_t BgL_inputzd2portzd2_13575;
if(
INPUT_PORTP(BgL_iportz00_13566))
{ /* Llib/date.scm 1022 */
BgL_inputzd2portzd2_13575 = BgL_iportz00_13566; }  else 
{ 
obj_t BgL_auxz00_16719;
BgL_auxz00_16719 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)42664)), BGl_string7599z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13566); 
FAILURE(BgL_auxz00_16719,BFALSE,BFALSE);} 
BgL_res4834z00_13574 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_13575); } 
BgL_arg1711z00_13572 = BgL_res4834z00_13574; } 
{ /* Llib/date.scm 1022 */
long BgL_res4835z00_13576;
{ /* Llib/date.scm 1022 */
obj_t BgL_inputzd2portzd2_13577;
if(
INPUT_PORTP(BgL_iportz00_13566))
{ /* Llib/date.scm 1022 */
BgL_inputzd2portzd2_13577 = BgL_iportz00_13566; }  else 
{ 
obj_t BgL_auxz00_16726;
BgL_auxz00_16726 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)42664)), BGl_string7599z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13566); 
FAILURE(BgL_auxz00_16726,BFALSE,BFALSE);} 
BgL_res4835z00_13576 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_13577); } 
BgL_arg1712z00_13573 = BgL_res4835z00_13576; } 
{ 
long BgL_bufposz00_16732;long BgL_forwardz00_16731;
BgL_forwardz00_16731 = BgL_arg1711z00_13572; 
BgL_bufposz00_16732 = BgL_arg1712z00_13573; 
BgL_bufposz00_13569 = BgL_bufposz00_16732; 
BgL_forwardz00_13568 = BgL_forwardz00_16731; 
goto BgL_statezd20zd21166z00_13473;} }  else 
{ /* Llib/date.scm 1022 */
BgL_matchz00_13476 = BgL_lastzd2matchzd2_13567; } }  else 
{ /* Llib/date.scm 1022 */
int BgL_curz00_13578;
{ /* Llib/date.scm 1022 */
int BgL_res4836z00_13579;
{ /* Llib/date.scm 1022 */
obj_t BgL_inputzd2portzd2_13580;
if(
INPUT_PORTP(BgL_iportz00_13566))
{ /* Llib/date.scm 1022 */
BgL_inputzd2portzd2_13580 = BgL_iportz00_13566; }  else 
{ 
obj_t BgL_auxz00_16735;
BgL_auxz00_16735 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)42664)), BGl_string7599z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13566); 
FAILURE(BgL_auxz00_16735,BFALSE,BFALSE);} 
BgL_res4836z00_13579 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_13580, BgL_forwardz00_13568); } 
BgL_curz00_13578 = BgL_res4836z00_13579; } 
{ /* Llib/date.scm 1022 */

{ /* Llib/date.scm 1022 */
bool_t BgL_test8489z00_16740;
if(
(
(long)(BgL_curz00_13578)>=((long)48)))
{ /* Llib/date.scm 1022 */
BgL_test8489z00_16740 = 
(
(long)(BgL_curz00_13578)<((long)58))
; }  else 
{ /* Llib/date.scm 1022 */
BgL_test8489z00_16740 = ((bool_t)0)
; } 
if(BgL_test8489z00_16740)
{ /* Llib/date.scm 1022 */
BgL_iportz00_13530 = BgL_iportz00_13566; 
BgL_lastzd2matchzd2_13531 = BgL_lastzd2matchzd2_13567; 
BgL_forwardz00_13532 = 
(((long)1)+BgL_forwardz00_13568); 
BgL_bufposz00_13533 = BgL_bufposz00_13569; 
BgL_statezd23zd21169z00_13471:
{ /* Llib/date.scm 1022 */
long BgL_newzd2matchzd2_13534;
{ /* Llib/date.scm 1022 */
long BgL_res4859z00_13535;
{ /* Llib/date.scm 1022 */
obj_t BgL_inputzd2portzd2_13536;
if(
INPUT_PORTP(BgL_iportz00_13530))
{ /* Llib/date.scm 1022 */
BgL_inputzd2portzd2_13536 = BgL_iportz00_13530; }  else 
{ 
obj_t BgL_auxz00_16748;
BgL_auxz00_16748 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)42664)), BGl_string7597z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13530); 
FAILURE(BgL_auxz00_16748,BFALSE,BFALSE);} 
BgL_res4859z00_13535 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_13536, BgL_forwardz00_13532); } BgL_res4859z00_13535; } 
BgL_newzd2matchzd2_13534 = ((long)1); 
if(
(BgL_forwardz00_13532==BgL_bufposz00_13533))
{ /* Llib/date.scm 1022 */
bool_t BgL_test8493z00_16755;
{ /* Llib/date.scm 1022 */
bool_t BgL_res4861z00_13537;
{ /* Llib/date.scm 1022 */
obj_t BgL_inputzd2portzd2_13538;
if(
INPUT_PORTP(BgL_iportz00_13530))
{ /* Llib/date.scm 1022 */
BgL_inputzd2portzd2_13538 = BgL_iportz00_13530; }  else 
{ 
obj_t BgL_auxz00_16758;
BgL_auxz00_16758 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)42664)), BGl_string7597z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13530); 
FAILURE(BgL_auxz00_16758,BFALSE,BFALSE);} 
BgL_res4861z00_13537 = 
rgc_fill_buffer(BgL_inputzd2portzd2_13538); } 
BgL_test8493z00_16755 = BgL_res4861z00_13537; } 
if(BgL_test8493z00_16755)
{ /* Llib/date.scm 1022 */
long BgL_arg1738z00_13539;long BgL_arg1739z00_13540;
{ /* Llib/date.scm 1022 */
long BgL_res4862z00_13541;
{ /* Llib/date.scm 1022 */
obj_t BgL_inputzd2portzd2_13542;
if(
INPUT_PORTP(BgL_iportz00_13530))
{ /* Llib/date.scm 1022 */
BgL_inputzd2portzd2_13542 = BgL_iportz00_13530; }  else 
{ 
obj_t BgL_auxz00_16765;
BgL_auxz00_16765 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)42664)), BGl_string7597z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13530); 
FAILURE(BgL_auxz00_16765,BFALSE,BFALSE);} 
BgL_res4862z00_13541 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_13542); } 
BgL_arg1738z00_13539 = BgL_res4862z00_13541; } 
{ /* Llib/date.scm 1022 */
long BgL_res4863z00_13543;
{ /* Llib/date.scm 1022 */
obj_t BgL_inputzd2portzd2_13544;
if(
INPUT_PORTP(BgL_iportz00_13530))
{ /* Llib/date.scm 1022 */
BgL_inputzd2portzd2_13544 = BgL_iportz00_13530; }  else 
{ 
obj_t BgL_auxz00_16772;
BgL_auxz00_16772 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)42664)), BGl_string7597z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13530); 
FAILURE(BgL_auxz00_16772,BFALSE,BFALSE);} 
BgL_res4863z00_13543 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_13544); } 
BgL_arg1739z00_13540 = BgL_res4863z00_13543; } 
{ 
long BgL_bufposz00_16778;long BgL_forwardz00_16777;
BgL_forwardz00_16777 = BgL_arg1738z00_13539; 
BgL_bufposz00_16778 = BgL_arg1739z00_13540; 
BgL_bufposz00_13533 = BgL_bufposz00_16778; 
BgL_forwardz00_13532 = BgL_forwardz00_16777; 
goto BgL_statezd23zd21169z00_13471;} }  else 
{ /* Llib/date.scm 1022 */
BgL_matchz00_13476 = BgL_newzd2matchzd2_13534; } }  else 
{ /* Llib/date.scm 1022 */
int BgL_curz00_13545;
{ /* Llib/date.scm 1022 */
int BgL_res4864z00_13546;
{ /* Llib/date.scm 1022 */
obj_t BgL_inputzd2portzd2_13547;
if(
INPUT_PORTP(BgL_iportz00_13530))
{ /* Llib/date.scm 1022 */
BgL_inputzd2portzd2_13547 = BgL_iportz00_13530; }  else 
{ 
obj_t BgL_auxz00_16781;
BgL_auxz00_16781 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)42664)), BGl_string7597z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13530); 
FAILURE(BgL_auxz00_16781,BFALSE,BFALSE);} 
BgL_res4864z00_13546 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_13547, BgL_forwardz00_13532); } 
BgL_curz00_13545 = BgL_res4864z00_13546; } 
{ /* Llib/date.scm 1022 */

{ /* Llib/date.scm 1022 */
bool_t BgL_test8498z00_16786;
if(
(
(long)(BgL_curz00_13545)>=((long)48)))
{ /* Llib/date.scm 1022 */
BgL_test8498z00_16786 = 
(
(long)(BgL_curz00_13545)<((long)58))
; }  else 
{ /* Llib/date.scm 1022 */
BgL_test8498z00_16786 = ((bool_t)0)
; } 
if(BgL_test8498z00_16786)
{ /* Llib/date.scm 1022 */
BgL_iportz00_13512 = BgL_iportz00_13530; 
BgL_lastzd2matchzd2_13513 = BgL_newzd2matchzd2_13534; 
BgL_forwardz00_13514 = 
(((long)1)+BgL_forwardz00_13532); 
BgL_bufposz00_13515 = BgL_bufposz00_13533; 
BgL_statezd24zd21170z00_13470:
{ /* Llib/date.scm 1022 */
long BgL_newzd2matchzd2_13516;
{ /* Llib/date.scm 1022 */
long BgL_res4868z00_13517;
{ /* Llib/date.scm 1022 */
obj_t BgL_inputzd2portzd2_13518;
if(
INPUT_PORTP(BgL_iportz00_13512))
{ /* Llib/date.scm 1022 */
BgL_inputzd2portzd2_13518 = BgL_iportz00_13512; }  else 
{ 
obj_t BgL_auxz00_16794;
BgL_auxz00_16794 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)42664)), BGl_string7596z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13512); 
FAILURE(BgL_auxz00_16794,BFALSE,BFALSE);} 
BgL_res4868z00_13517 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_13518, BgL_forwardz00_13514); } BgL_res4868z00_13517; } 
BgL_newzd2matchzd2_13516 = ((long)1); 
if(
(BgL_forwardz00_13514==BgL_bufposz00_13515))
{ /* Llib/date.scm 1022 */
bool_t BgL_test8502z00_16801;
{ /* Llib/date.scm 1022 */
bool_t BgL_res4870z00_13519;
{ /* Llib/date.scm 1022 */
obj_t BgL_inputzd2portzd2_13520;
if(
INPUT_PORTP(BgL_iportz00_13512))
{ /* Llib/date.scm 1022 */
BgL_inputzd2portzd2_13520 = BgL_iportz00_13512; }  else 
{ 
obj_t BgL_auxz00_16804;
BgL_auxz00_16804 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)42664)), BGl_string7596z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13512); 
FAILURE(BgL_auxz00_16804,BFALSE,BFALSE);} 
BgL_res4870z00_13519 = 
rgc_fill_buffer(BgL_inputzd2portzd2_13520); } 
BgL_test8502z00_16801 = BgL_res4870z00_13519; } 
if(BgL_test8502z00_16801)
{ /* Llib/date.scm 1022 */
long BgL_arg1746z00_13521;long BgL_arg1747z00_13522;
{ /* Llib/date.scm 1022 */
long BgL_res4871z00_13523;
{ /* Llib/date.scm 1022 */
obj_t BgL_inputzd2portzd2_13524;
if(
INPUT_PORTP(BgL_iportz00_13512))
{ /* Llib/date.scm 1022 */
BgL_inputzd2portzd2_13524 = BgL_iportz00_13512; }  else 
{ 
obj_t BgL_auxz00_16811;
BgL_auxz00_16811 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)42664)), BGl_string7596z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13512); 
FAILURE(BgL_auxz00_16811,BFALSE,BFALSE);} 
BgL_res4871z00_13523 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_13524); } 
BgL_arg1746z00_13521 = BgL_res4871z00_13523; } 
{ /* Llib/date.scm 1022 */
long BgL_res4872z00_13525;
{ /* Llib/date.scm 1022 */
obj_t BgL_inputzd2portzd2_13526;
if(
INPUT_PORTP(BgL_iportz00_13512))
{ /* Llib/date.scm 1022 */
BgL_inputzd2portzd2_13526 = BgL_iportz00_13512; }  else 
{ 
obj_t BgL_auxz00_16818;
BgL_auxz00_16818 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)42664)), BGl_string7596z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13512); 
FAILURE(BgL_auxz00_16818,BFALSE,BFALSE);} 
BgL_res4872z00_13525 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_13526); } 
BgL_arg1747z00_13522 = BgL_res4872z00_13525; } 
{ 
long BgL_bufposz00_16824;long BgL_forwardz00_16823;
BgL_forwardz00_16823 = BgL_arg1746z00_13521; 
BgL_bufposz00_16824 = BgL_arg1747z00_13522; 
BgL_bufposz00_13515 = BgL_bufposz00_16824; 
BgL_forwardz00_13514 = BgL_forwardz00_16823; 
goto BgL_statezd24zd21170z00_13470;} }  else 
{ /* Llib/date.scm 1022 */
BgL_matchz00_13476 = BgL_newzd2matchzd2_13516; } }  else 
{ /* Llib/date.scm 1022 */
int BgL_curz00_13527;
{ /* Llib/date.scm 1022 */
int BgL_res4873z00_13528;
{ /* Llib/date.scm 1022 */
obj_t BgL_inputzd2portzd2_13529;
if(
INPUT_PORTP(BgL_iportz00_13512))
{ /* Llib/date.scm 1022 */
BgL_inputzd2portzd2_13529 = BgL_iportz00_13512; }  else 
{ 
obj_t BgL_auxz00_16827;
BgL_auxz00_16827 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)42664)), BGl_string7596z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13512); 
FAILURE(BgL_auxz00_16827,BFALSE,BFALSE);} 
BgL_res4873z00_13528 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_13529, BgL_forwardz00_13514); } 
BgL_curz00_13527 = BgL_res4873z00_13528; } 
{ /* Llib/date.scm 1022 */

{ /* Llib/date.scm 1022 */
bool_t BgL_test8507z00_16832;
if(
(
(long)(BgL_curz00_13527)>=((long)48)))
{ /* Llib/date.scm 1022 */
BgL_test8507z00_16832 = 
(
(long)(BgL_curz00_13527)<((long)58))
; }  else 
{ /* Llib/date.scm 1022 */
BgL_test8507z00_16832 = ((bool_t)0)
; } 
if(BgL_test8507z00_16832)
{ 
long BgL_forwardz00_16839;long BgL_lastzd2matchzd2_16838;
BgL_lastzd2matchzd2_16838 = BgL_newzd2matchzd2_13516; 
BgL_forwardz00_16839 = 
(((long)1)+BgL_forwardz00_13514); 
BgL_forwardz00_13514 = BgL_forwardz00_16839; 
BgL_lastzd2matchzd2_13513 = BgL_lastzd2matchzd2_16838; 
goto BgL_statezd24zd21170z00_13470;}  else 
{ /* Llib/date.scm 1022 */
BgL_matchz00_13476 = BgL_newzd2matchzd2_13516; } } } } } }  else 
{ /* Llib/date.scm 1022 */
BgL_matchz00_13476 = BgL_newzd2matchzd2_13534; } } } } } }  else 
{ /* Llib/date.scm 1022 */
bool_t BgL_test8509z00_16843;
{ /* Llib/date.scm 1022 */
bool_t BgL_test8510z00_16844;
if(
(
(long)(BgL_curz00_13578)==((long)10)))
{ /* Llib/date.scm 1022 */
BgL_test8510z00_16844 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1022 */
BgL_test8510z00_16844 = 
(
(long)(BgL_curz00_13578)==((long)9))
; } 
if(BgL_test8510z00_16844)
{ /* Llib/date.scm 1022 */
BgL_test8509z00_16843 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1022 */
if(
(
(long)(BgL_curz00_13578)==((long)13)))
{ /* Llib/date.scm 1022 */
BgL_test8509z00_16843 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1022 */
BgL_test8509z00_16843 = 
(
(long)(BgL_curz00_13578)==((long)32))
; } } } 
if(BgL_test8509z00_16843)
{ /* Llib/date.scm 1022 */
BgL_iportz00_13548 = BgL_iportz00_13566; 
BgL_lastzd2matchzd2_13549 = BgL_lastzd2matchzd2_13567; 
BgL_forwardz00_13550 = 
(((long)1)+BgL_forwardz00_13568); 
BgL_bufposz00_13551 = BgL_bufposz00_13569; 
BgL_statezd22zd21168z00_13472:
{ /* Llib/date.scm 1022 */
long BgL_newzd2matchzd2_13552;
{ /* Llib/date.scm 1022 */
long BgL_res4848z00_13553;
{ /* Llib/date.scm 1022 */
obj_t BgL_inputzd2portzd2_13554;
if(
INPUT_PORTP(BgL_iportz00_13548))
{ /* Llib/date.scm 1022 */
BgL_inputzd2portzd2_13554 = BgL_iportz00_13548; }  else 
{ 
obj_t BgL_auxz00_16857;
BgL_auxz00_16857 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)42664)), BGl_string7598z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13548); 
FAILURE(BgL_auxz00_16857,BFALSE,BFALSE);} 
BgL_res4848z00_13553 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_13554, BgL_forwardz00_13550); } BgL_res4848z00_13553; } 
BgL_newzd2matchzd2_13552 = ((long)0); 
if(
(BgL_forwardz00_13550==BgL_bufposz00_13551))
{ /* Llib/date.scm 1022 */
bool_t BgL_test8515z00_16864;
{ /* Llib/date.scm 1022 */
bool_t BgL_res4850z00_13555;
{ /* Llib/date.scm 1022 */
obj_t BgL_inputzd2portzd2_13556;
if(
INPUT_PORTP(BgL_iportz00_13548))
{ /* Llib/date.scm 1022 */
BgL_inputzd2portzd2_13556 = BgL_iportz00_13548; }  else 
{ 
obj_t BgL_auxz00_16867;
BgL_auxz00_16867 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)42664)), BGl_string7598z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13548); 
FAILURE(BgL_auxz00_16867,BFALSE,BFALSE);} 
BgL_res4850z00_13555 = 
rgc_fill_buffer(BgL_inputzd2portzd2_13556); } 
BgL_test8515z00_16864 = BgL_res4850z00_13555; } 
if(BgL_test8515z00_16864)
{ /* Llib/date.scm 1022 */
long BgL_arg1728z00_13557;long BgL_arg1729z00_13558;
{ /* Llib/date.scm 1022 */
long BgL_res4851z00_13559;
{ /* Llib/date.scm 1022 */
obj_t BgL_inputzd2portzd2_13560;
if(
INPUT_PORTP(BgL_iportz00_13548))
{ /* Llib/date.scm 1022 */
BgL_inputzd2portzd2_13560 = BgL_iportz00_13548; }  else 
{ 
obj_t BgL_auxz00_16874;
BgL_auxz00_16874 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)42664)), BGl_string7598z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13548); 
FAILURE(BgL_auxz00_16874,BFALSE,BFALSE);} 
BgL_res4851z00_13559 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_13560); } 
BgL_arg1728z00_13557 = BgL_res4851z00_13559; } 
{ /* Llib/date.scm 1022 */
long BgL_res4852z00_13561;
{ /* Llib/date.scm 1022 */
obj_t BgL_inputzd2portzd2_13562;
if(
INPUT_PORTP(BgL_iportz00_13548))
{ /* Llib/date.scm 1022 */
BgL_inputzd2portzd2_13562 = BgL_iportz00_13548; }  else 
{ 
obj_t BgL_auxz00_16881;
BgL_auxz00_16881 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)42664)), BGl_string7598z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13548); 
FAILURE(BgL_auxz00_16881,BFALSE,BFALSE);} 
BgL_res4852z00_13561 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_13562); } 
BgL_arg1729z00_13558 = BgL_res4852z00_13561; } 
{ 
long BgL_bufposz00_16887;long BgL_forwardz00_16886;
BgL_forwardz00_16886 = BgL_arg1728z00_13557; 
BgL_bufposz00_16887 = BgL_arg1729z00_13558; 
BgL_bufposz00_13551 = BgL_bufposz00_16887; 
BgL_forwardz00_13550 = BgL_forwardz00_16886; 
goto BgL_statezd22zd21168z00_13472;} }  else 
{ /* Llib/date.scm 1022 */
BgL_matchz00_13476 = BgL_newzd2matchzd2_13552; } }  else 
{ /* Llib/date.scm 1022 */
int BgL_curz00_13563;
{ /* Llib/date.scm 1022 */
int BgL_res4853z00_13564;
{ /* Llib/date.scm 1022 */
obj_t BgL_inputzd2portzd2_13565;
if(
INPUT_PORTP(BgL_iportz00_13548))
{ /* Llib/date.scm 1022 */
BgL_inputzd2portzd2_13565 = BgL_iportz00_13548; }  else 
{ 
obj_t BgL_auxz00_16890;
BgL_auxz00_16890 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)42664)), BGl_string7598z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13548); 
FAILURE(BgL_auxz00_16890,BFALSE,BFALSE);} 
BgL_res4853z00_13564 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_13565, BgL_forwardz00_13550); } 
BgL_curz00_13563 = BgL_res4853z00_13564; } 
{ /* Llib/date.scm 1022 */

{ /* Llib/date.scm 1022 */
bool_t BgL_test8520z00_16895;
{ /* Llib/date.scm 1022 */
bool_t BgL_test8521z00_16896;
if(
(
(long)(BgL_curz00_13563)==((long)10)))
{ /* Llib/date.scm 1022 */
BgL_test8521z00_16896 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1022 */
BgL_test8521z00_16896 = 
(
(long)(BgL_curz00_13563)==((long)9))
; } 
if(BgL_test8521z00_16896)
{ /* Llib/date.scm 1022 */
BgL_test8520z00_16895 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1022 */
if(
(
(long)(BgL_curz00_13563)==((long)13)))
{ /* Llib/date.scm 1022 */
BgL_test8520z00_16895 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1022 */
BgL_test8520z00_16895 = 
(
(long)(BgL_curz00_13563)==((long)32))
; } } } 
if(BgL_test8520z00_16895)
{ /* Llib/date.scm 1022 */
BgL_iportz00_13494 = BgL_iportz00_13548; 
BgL_lastzd2matchzd2_13495 = BgL_newzd2matchzd2_13552; 
BgL_forwardz00_13496 = 
(((long)1)+BgL_forwardz00_13550); 
BgL_bufposz00_13497 = BgL_bufposz00_13551; 
BgL_statezd26zd21172z00_13469:
{ /* Llib/date.scm 1022 */
long BgL_newzd2matchzd2_13498;
{ /* Llib/date.scm 1022 */
long BgL_res4877z00_13499;
{ /* Llib/date.scm 1022 */
obj_t BgL_inputzd2portzd2_13500;
if(
INPUT_PORTP(BgL_iportz00_13494))
{ /* Llib/date.scm 1022 */
BgL_inputzd2portzd2_13500 = BgL_iportz00_13494; }  else 
{ 
obj_t BgL_auxz00_16909;
BgL_auxz00_16909 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)42664)), BGl_string7595z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13494); 
FAILURE(BgL_auxz00_16909,BFALSE,BFALSE);} 
BgL_res4877z00_13499 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_13500, BgL_forwardz00_13496); } BgL_res4877z00_13499; } 
BgL_newzd2matchzd2_13498 = ((long)0); 
if(
(BgL_forwardz00_13496==BgL_bufposz00_13497))
{ /* Llib/date.scm 1022 */
bool_t BgL_test8526z00_16916;
{ /* Llib/date.scm 1022 */
bool_t BgL_res4879z00_13501;
{ /* Llib/date.scm 1022 */
obj_t BgL_inputzd2portzd2_13502;
if(
INPUT_PORTP(BgL_iportz00_13494))
{ /* Llib/date.scm 1022 */
BgL_inputzd2portzd2_13502 = BgL_iportz00_13494; }  else 
{ 
obj_t BgL_auxz00_16919;
BgL_auxz00_16919 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)42664)), BGl_string7595z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13494); 
FAILURE(BgL_auxz00_16919,BFALSE,BFALSE);} 
BgL_res4879z00_13501 = 
rgc_fill_buffer(BgL_inputzd2portzd2_13502); } 
BgL_test8526z00_16916 = BgL_res4879z00_13501; } 
if(BgL_test8526z00_16916)
{ /* Llib/date.scm 1022 */
long BgL_arg1754z00_13503;long BgL_arg1755z00_13504;
{ /* Llib/date.scm 1022 */
long BgL_res4880z00_13505;
{ /* Llib/date.scm 1022 */
obj_t BgL_inputzd2portzd2_13506;
if(
INPUT_PORTP(BgL_iportz00_13494))
{ /* Llib/date.scm 1022 */
BgL_inputzd2portzd2_13506 = BgL_iportz00_13494; }  else 
{ 
obj_t BgL_auxz00_16926;
BgL_auxz00_16926 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)42664)), BGl_string7595z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13494); 
FAILURE(BgL_auxz00_16926,BFALSE,BFALSE);} 
BgL_res4880z00_13505 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_13506); } 
BgL_arg1754z00_13503 = BgL_res4880z00_13505; } 
{ /* Llib/date.scm 1022 */
long BgL_res4881z00_13507;
{ /* Llib/date.scm 1022 */
obj_t BgL_inputzd2portzd2_13508;
if(
INPUT_PORTP(BgL_iportz00_13494))
{ /* Llib/date.scm 1022 */
BgL_inputzd2portzd2_13508 = BgL_iportz00_13494; }  else 
{ 
obj_t BgL_auxz00_16933;
BgL_auxz00_16933 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)42664)), BGl_string7595z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13494); 
FAILURE(BgL_auxz00_16933,BFALSE,BFALSE);} 
BgL_res4881z00_13507 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_13508); } 
BgL_arg1755z00_13504 = BgL_res4881z00_13507; } 
{ 
long BgL_bufposz00_16939;long BgL_forwardz00_16938;
BgL_forwardz00_16938 = BgL_arg1754z00_13503; 
BgL_bufposz00_16939 = BgL_arg1755z00_13504; 
BgL_bufposz00_13497 = BgL_bufposz00_16939; 
BgL_forwardz00_13496 = BgL_forwardz00_16938; 
goto BgL_statezd26zd21172z00_13469;} }  else 
{ /* Llib/date.scm 1022 */
BgL_matchz00_13476 = BgL_newzd2matchzd2_13498; } }  else 
{ /* Llib/date.scm 1022 */
int BgL_curz00_13509;
{ /* Llib/date.scm 1022 */
int BgL_res4882z00_13510;
{ /* Llib/date.scm 1022 */
obj_t BgL_inputzd2portzd2_13511;
if(
INPUT_PORTP(BgL_iportz00_13494))
{ /* Llib/date.scm 1022 */
BgL_inputzd2portzd2_13511 = BgL_iportz00_13494; }  else 
{ 
obj_t BgL_auxz00_16942;
BgL_auxz00_16942 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)42664)), BGl_string7595z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13494); 
FAILURE(BgL_auxz00_16942,BFALSE,BFALSE);} 
BgL_res4882z00_13510 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_13511, BgL_forwardz00_13496); } 
BgL_curz00_13509 = BgL_res4882z00_13510; } 
{ /* Llib/date.scm 1022 */

{ /* Llib/date.scm 1022 */
bool_t BgL_test8531z00_16947;
{ /* Llib/date.scm 1022 */
bool_t BgL_test8532z00_16948;
if(
(
(long)(BgL_curz00_13509)==((long)10)))
{ /* Llib/date.scm 1022 */
BgL_test8532z00_16948 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1022 */
BgL_test8532z00_16948 = 
(
(long)(BgL_curz00_13509)==((long)9))
; } 
if(BgL_test8532z00_16948)
{ /* Llib/date.scm 1022 */
BgL_test8531z00_16947 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1022 */
if(
(
(long)(BgL_curz00_13509)==((long)13)))
{ /* Llib/date.scm 1022 */
BgL_test8531z00_16947 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 1022 */
BgL_test8531z00_16947 = 
(
(long)(BgL_curz00_13509)==((long)32))
; } } } 
if(BgL_test8531z00_16947)
{ 
long BgL_forwardz00_16960;long BgL_lastzd2matchzd2_16959;
BgL_lastzd2matchzd2_16959 = BgL_newzd2matchzd2_13498; 
BgL_forwardz00_16960 = 
(((long)1)+BgL_forwardz00_13496); 
BgL_forwardz00_13496 = BgL_forwardz00_16960; 
BgL_lastzd2matchzd2_13495 = BgL_lastzd2matchzd2_16959; 
goto BgL_statezd26zd21172z00_13469;}  else 
{ /* Llib/date.scm 1022 */
BgL_matchz00_13476 = BgL_newzd2matchzd2_13498; } } } } } }  else 
{ /* Llib/date.scm 1022 */
BgL_matchz00_13476 = BgL_newzd2matchzd2_13552; } } } } } }  else 
{ /* Llib/date.scm 1022 */
long BgL_arg1723z00_13581;
BgL_arg1723z00_13581 = 
(((long)1)+BgL_forwardz00_13568); 
{ /* Llib/date.scm 1022 */
long BgL_newzd2matchzd2_13582;
{ /* Llib/date.scm 1022 */
long BgL_res4846z00_13583;
{ /* Llib/date.scm 1022 */
obj_t BgL_inputzd2portzd2_13584;
if(
INPUT_PORTP(BgL_iportz00_13566))
{ /* Llib/date.scm 1022 */
BgL_inputzd2portzd2_13584 = BgL_iportz00_13566; }  else 
{ 
obj_t BgL_auxz00_16967;
BgL_auxz00_16967 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)42664)), BGl_string7599z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_13566); 
FAILURE(BgL_auxz00_16967,BFALSE,BFALSE);} 
BgL_res4846z00_13583 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_13584, BgL_arg1723z00_13581); } BgL_res4846z00_13583; } 
BgL_newzd2matchzd2_13582 = ((long)2); 
BgL_matchz00_13476 = BgL_newzd2matchzd2_13582; } } } } } } } 
{ /* Llib/date.scm 1022 */
obj_t BgL_inputzd2portzd2_13483;
if(
INPUT_PORTP(BgL_iportz00_11327))
{ /* Llib/date.scm 1022 */
BgL_inputzd2portzd2_13483 = BgL_iportz00_11327; }  else 
{ 
obj_t BgL_auxz00_16974;
BgL_auxz00_16974 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)42664)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11327); 
FAILURE(BgL_auxz00_16974,BFALSE,BFALSE);} 
RGC_SET_FILEPOS(BgL_inputzd2portzd2_13483); } 
switch( BgL_matchz00_13476) { case ((long)2) : 

{ /* Llib/date.scm 1030 */
obj_t BgL_arg1853z00_13484;obj_t BgL_arg1855z00_13485;
{ /* Llib/date.scm 1022 */
bool_t BgL_test8537z00_16979;
{ /* Llib/date.scm 1022 */
long BgL_arg1845z00_13489;
{ /* Llib/date.scm 1022 */
long BgL_res4889z00_13490;
{ /* Llib/date.scm 1022 */
obj_t BgL_inputzd2portzd2_13491;
if(
INPUT_PORTP(BgL_iportz00_11327))
{ /* Llib/date.scm 1022 */
BgL_inputzd2portzd2_13491 = BgL_iportz00_11327; }  else 
{ 
obj_t BgL_auxz00_16982;
BgL_auxz00_16982 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)42664)), BGl_string7527z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11327); 
FAILURE(BgL_auxz00_16982,BFALSE,BFALSE);} 
BgL_res4889z00_13490 = 
RGC_BUFFER_MATCH_LENGTH(BgL_inputzd2portzd2_13491); } 
BgL_arg1845z00_13489 = BgL_res4889z00_13490; } 
BgL_test8537z00_16979 = 
(BgL_arg1845z00_13489==((long)0)); } 
if(BgL_test8537z00_16979)
{ /* Llib/date.scm 1022 */
BgL_arg1853z00_13484 = BEOF; }  else 
{ /* Llib/date.scm 1022 */
unsigned char BgL_res4891z00_13492;
{ /* Llib/date.scm 1022 */
obj_t BgL_inputzd2portzd2_13493;
if(
INPUT_PORTP(BgL_iportz00_11327))
{ /* Llib/date.scm 1022 */
BgL_inputzd2portzd2_13493 = BgL_iportz00_11327; }  else 
{ 
obj_t BgL_auxz00_16990;
BgL_auxz00_16990 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)42664)), BGl_string7527z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11327); 
FAILURE(BgL_auxz00_16990,BFALSE,BFALSE);} 
BgL_res4891z00_13492 = 
RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_13493); } 
BgL_arg1853z00_13484 = 
BCHAR(BgL_res4891z00_13492); } } 
{ /* Llib/date.scm 1030 */
obj_t BgL_res4895z00_13486;
if(
INPUT_PORTP(BgL_iportz00_11327))
{ /* Llib/date.scm 1022 */
BgL_res4895z00_13486 = BgL_iportz00_11327; }  else 
{ 
obj_t BgL_auxz00_16998;
BgL_auxz00_16998 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)42664)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11327); 
FAILURE(BgL_auxz00_16998,BFALSE,BFALSE);} 
BgL_arg1855z00_13485 = BgL_res4895z00_13486; } 
return 
BGl_parsezd2errorzd2zz__datez00(BGl_string7522z00zz__datez00, BGl_string7594z00zz__datez00, BgL_arg1853z00_13484, BgL_arg1855z00_13485);} break;case ((long)1) : 

{ /* Llib/date.scm 1022 */
long BgL_res4896z00_13487;
{ /* Llib/date.scm 1022 */
obj_t BgL_inputzd2portzd2_13488;
if(
INPUT_PORTP(BgL_iportz00_11327))
{ /* Llib/date.scm 1022 */
BgL_inputzd2portzd2_13488 = BgL_iportz00_11327; }  else 
{ 
obj_t BgL_auxz00_17005;
BgL_auxz00_17005 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)42664)), BGl_string7520z00zz__datez00, BGl_string7521z00zz__datez00, BgL_iportz00_11327); 
FAILURE(BgL_auxz00_17005,BFALSE,BFALSE);} 
BgL_res4896z00_13487 = 
rgc_buffer_fixnum(BgL_inputzd2portzd2_13488); } 
return 
BINT(BgL_res4896z00_13487);} break;case ((long)0) : 

goto BgL_ignorez00_13467;break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_string7525z00zz__datez00, BGl_string7526z00zz__datez00, 
BINT(BgL_matchz00_13476));} } } } } } 

}



/* &<@anonymous:1449> */
obj_t BGl_z62zc3z04anonymousza31449ze3ze5zz__datez00(obj_t BgL_envz00_11328, obj_t BgL_iportz00_11329)
{
{ /* Llib/date.scm 980 */
{ 
obj_t BgL_iportz00_13750;long BgL_lastzd2matchzd2_13751;long BgL_forwardz00_13752;long BgL_bufposz00_13753;obj_t BgL_iportz00_13737;long BgL_lastzd2matchzd2_13738;long BgL_forwardz00_13739;long BgL_bufposz00_13740;obj_t BgL_iportz00_13726;long BgL_lastzd2matchzd2_13727;long BgL_forwardz00_13728;long BgL_bufposz00_13729;obj_t BgL_iportz00_13714;long BgL_lastzd2matchzd2_13715;long BgL_forwardz00_13716;long BgL_bufposz00_13717;obj_t BgL_iportz00_13702;long BgL_lastzd2matchzd2_13703;long BgL_forwardz00_13704;long BgL_bufposz00_13705;obj_t BgL_iportz00_13689;long BgL_lastzd2matchzd2_13690;long BgL_forwardz00_13691;long BgL_bufposz00_13692;obj_t BgL_iportz00_13677;long BgL_lastzd2matchzd2_13678;long BgL_forwardz00_13679;long BgL_bufposz00_13680;obj_t BgL_iportz00_13667;long BgL_lastzd2matchzd2_13668;long BgL_forwardz00_13669;long BgL_bufposz00_13670;obj_t BgL_iportz00_13655;long BgL_lastzd2matchzd2_13656;long BgL_forwardz00_13657;long BgL_bufposz00_13658;
{ /* Llib/date.scm 980 */
bool_t BgL_test8542z00_17014;
{ /* Llib/date.scm 980 */
bool_t BgL_res4828z00_13763;
BgL_res4828z00_13763 = 
INPUT_PORT_CLOSEP(BgL_iportz00_11329); 
BgL_test8542z00_17014 = BgL_res4828z00_13763; } 
if(BgL_test8542z00_17014)
{ /* Llib/date.scm 980 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_arg1453z00_13764;
{ /* Llib/date.scm 980 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_new1077z00_13765;
{ /* Llib/date.scm 980 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_new1076z00_13766;
BgL_new1076z00_13766 = 
((BgL_z62iozd2closedzd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2closedzd2errorz62_bgl) ))); 
{ /* Llib/date.scm 980 */
long BgL_arg1456z00_13767;
{ /* Llib/date.scm 980 */
long BgL_res4829z00_13768;
BgL_res4829z00_13768 = 
BGL_CLASS_INDEX(BGl_z62iozd2closedzd2errorz62zz__objectz00); 
BgL_arg1456z00_13767 = BgL_res4829z00_13768; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1076z00_13766), BgL_arg1456z00_13767); } 
BgL_new1077z00_13765 = BgL_new1076z00_13766; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1077z00_13765)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1077z00_13765)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_17024;
{ /* Llib/date.scm 980 */
obj_t BgL_arg1454z00_13769;
{ /* Llib/date.scm 980 */
obj_t BgL_arg1455z00_13770;
{ /* Llib/date.scm 980 */
obj_t BgL_res4830z00_13771;
{ /* Llib/date.scm 980 */
obj_t BgL_classz00_13772;
BgL_classz00_13772 = BGl_z62iozd2closedzd2errorz62zz__objectz00; 
BgL_res4830z00_13771 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_13772); } 
BgL_arg1455z00_13770 = BgL_res4830z00_13771; } 
BgL_arg1454z00_13769 = 
VECTOR_REF(BgL_arg1455z00_13770,((long)2)); } 
{ /* Llib/date.scm 980 */
obj_t BgL_auxz00_17028;
if(
BGl_classzd2fieldzf3z21zz__objectz00(BgL_arg1454z00_13769))
{ /* Llib/date.scm 980 */
BgL_auxz00_17028 = BgL_arg1454z00_13769
; }  else 
{ 
obj_t BgL_auxz00_17031;
BgL_auxz00_17031 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)41215)), BGl_string7641z00zz__datez00, BGl_string7542z00zz__datez00, BgL_arg1454z00_13769); 
FAILURE(BgL_auxz00_17031,BFALSE,BFALSE);} 
BgL_auxz00_17024 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_auxz00_17028); } } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1077z00_13765)))->BgL_stackz00)=((obj_t)BgL_auxz00_17024),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1077z00_13765)))->BgL_procz00)=((obj_t)BGl_string7525z00zz__datez00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1077z00_13765)))->BgL_msgz00)=((obj_t)BGl_string7543z00zz__datez00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1077z00_13765)))->BgL_objz00)=((obj_t)BgL_iportz00_11329),BUNSPEC); 
BgL_arg1453z00_13764 = BgL_new1077z00_13765; } 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg1453z00_13764));}  else 
{ /* Llib/date.scm 980 */
BgL_ignorez00_13599:
{ /* Llib/date.scm 980 */
long BgL_res4809z00_13610;
BgL_res4809z00_13610 = 
RGC_START_MATCH(BgL_iportz00_11329); BgL_res4809z00_13610; } 
{ /* Llib/date.scm 980 */
long BgL_matchz00_13611;
{ /* Llib/date.scm 980 */
long BgL_arg1697z00_13612;long BgL_arg1698z00_13613;
{ /* Llib/date.scm 980 */
long BgL_res4810z00_13614;
BgL_res4810z00_13614 = 
RGC_BUFFER_FORWARD(BgL_iportz00_11329); 
BgL_arg1697z00_13612 = BgL_res4810z00_13614; } 
{ /* Llib/date.scm 980 */
long BgL_res4811z00_13615;
BgL_res4811z00_13615 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_11329); 
BgL_arg1698z00_13613 = BgL_res4811z00_13615; } 
BgL_iportz00_13750 = BgL_iportz00_11329; 
BgL_lastzd2matchzd2_13751 = ((long)3); 
BgL_forwardz00_13752 = BgL_arg1697z00_13612; 
BgL_bufposz00_13753 = BgL_arg1698z00_13613; 
BgL_statezd20zd21150z00_13609:
if(
(BgL_forwardz00_13752==BgL_bufposz00_13753))
{ /* Llib/date.scm 980 */
if(
rgc_fill_buffer(BgL_iportz00_13750))
{ /* Llib/date.scm 980 */
long BgL_arg1461z00_13754;long BgL_arg1462z00_13755;
{ /* Llib/date.scm 980 */
long BgL_res4693z00_13756;
BgL_res4693z00_13756 = 
RGC_BUFFER_FORWARD(BgL_iportz00_13750); 
BgL_arg1461z00_13754 = BgL_res4693z00_13756; } 
{ /* Llib/date.scm 980 */
long BgL_res4694z00_13757;
BgL_res4694z00_13757 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_13750); 
BgL_arg1462z00_13755 = BgL_res4694z00_13757; } 
{ 
long BgL_bufposz00_17055;long BgL_forwardz00_17054;
BgL_forwardz00_17054 = BgL_arg1461z00_13754; 
BgL_bufposz00_17055 = BgL_arg1462z00_13755; 
BgL_bufposz00_13753 = BgL_bufposz00_17055; 
BgL_forwardz00_13752 = BgL_forwardz00_17054; 
goto BgL_statezd20zd21150z00_13609;} }  else 
{ /* Llib/date.scm 980 */
BgL_matchz00_13611 = BgL_lastzd2matchzd2_13751; } }  else 
{ /* Llib/date.scm 980 */
int BgL_curz00_13758;
{ /* Llib/date.scm 980 */
int BgL_res4695z00_13759;
BgL_res4695z00_13759 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_13750, BgL_forwardz00_13752); 
BgL_curz00_13758 = BgL_res4695z00_13759; } 
{ /* Llib/date.scm 980 */

{ /* Llib/date.scm 980 */
bool_t BgL_test8546z00_17057;
if(
(
(long)(BgL_curz00_13758)==((long)70)))
{ /* Llib/date.scm 980 */
BgL_test8546z00_17057 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 980 */
if(
(
(long)(BgL_curz00_13758)==((long)77)))
{ /* Llib/date.scm 980 */
BgL_test8546z00_17057 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 980 */
bool_t BgL_test8549z00_17064;
if(
(
(long)(BgL_curz00_13758)==((long)84)))
{ /* Llib/date.scm 980 */
BgL_test8549z00_17064 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 980 */
BgL_test8549z00_17064 = 
(
(long)(BgL_curz00_13758)==((long)83))
; } 
if(BgL_test8549z00_17064)
{ /* Llib/date.scm 980 */
BgL_test8546z00_17057 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 980 */
BgL_test8546z00_17057 = 
(
(long)(BgL_curz00_13758)==((long)87))
; } } } 
if(BgL_test8546z00_17057)
{ /* Llib/date.scm 980 */
BgL_iportz00_13689 = BgL_iportz00_13750; 
BgL_lastzd2matchzd2_13690 = BgL_lastzd2matchzd2_13751; 
BgL_forwardz00_13691 = 
(((long)1)+BgL_forwardz00_13752); 
BgL_bufposz00_13692 = BgL_bufposz00_13753; 
BgL_statezd24zd21154z00_13604:
{ /* Llib/date.scm 980 */
long BgL_newzd2matchzd2_13693;
{ /* Llib/date.scm 980 */
long BgL_res4761z00_13694;
BgL_res4761z00_13694 = 
RGC_STOP_MATCH(BgL_iportz00_13689, BgL_forwardz00_13691); BgL_res4761z00_13694; } 
BgL_newzd2matchzd2_13693 = ((long)3); 
if(
(BgL_forwardz00_13691==BgL_bufposz00_13692))
{ /* Llib/date.scm 980 */
if(
rgc_fill_buffer(BgL_iportz00_13689))
{ /* Llib/date.scm 980 */
long BgL_arg1528z00_13695;long BgL_arg1530z00_13696;
{ /* Llib/date.scm 980 */
long BgL_res4764z00_13697;
BgL_res4764z00_13697 = 
RGC_BUFFER_FORWARD(BgL_iportz00_13689); 
BgL_arg1528z00_13695 = BgL_res4764z00_13697; } 
{ /* Llib/date.scm 980 */
long BgL_res4765z00_13698;
BgL_res4765z00_13698 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_13689); 
BgL_arg1530z00_13696 = BgL_res4765z00_13698; } 
{ 
long BgL_bufposz00_17080;long BgL_forwardz00_17079;
BgL_forwardz00_17079 = BgL_arg1528z00_13695; 
BgL_bufposz00_17080 = BgL_arg1530z00_13696; 
BgL_bufposz00_13692 = BgL_bufposz00_17080; 
BgL_forwardz00_13691 = BgL_forwardz00_17079; 
goto BgL_statezd24zd21154z00_13604;} }  else 
{ /* Llib/date.scm 980 */
BgL_matchz00_13611 = BgL_newzd2matchzd2_13693; } }  else 
{ /* Llib/date.scm 980 */
int BgL_curz00_13699;
{ /* Llib/date.scm 980 */
int BgL_res4766z00_13700;
BgL_res4766z00_13700 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_13689, BgL_forwardz00_13691); 
BgL_curz00_13699 = BgL_res4766z00_13700; } 
{ /* Llib/date.scm 980 */

{ /* Llib/date.scm 980 */
bool_t BgL_test8553z00_17082;
if(
(
(long)(BgL_curz00_13699)==((long)97)))
{ /* Llib/date.scm 980 */
BgL_test8553z00_17082 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 980 */
bool_t BgL_test8555z00_17086;
if(
(
(long)(BgL_curz00_13699)==((long)101)))
{ /* Llib/date.scm 980 */
BgL_test8555z00_17086 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 980 */
BgL_test8555z00_17086 = 
(
(long)(BgL_curz00_13699)==((long)100))
; } 
if(BgL_test8555z00_17086)
{ /* Llib/date.scm 980 */
BgL_test8553z00_17082 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 980 */
bool_t BgL_test8557z00_17092;
if(
(
(long)(BgL_curz00_13699)==((long)105)))
{ /* Llib/date.scm 980 */
BgL_test8557z00_17092 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 980 */
BgL_test8557z00_17092 = 
(
(long)(BgL_curz00_13699)==((long)104))
; } 
if(BgL_test8557z00_17092)
{ /* Llib/date.scm 980 */
BgL_test8553z00_17082 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 980 */
bool_t BgL_test8559z00_17098;
if(
(
(long)(BgL_curz00_13699)==((long)111)))
{ /* Llib/date.scm 980 */
BgL_test8559z00_17098 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 980 */
BgL_test8559z00_17098 = 
(
(long)(BgL_curz00_13699)==((long)110))
; } 
if(BgL_test8559z00_17098)
{ /* Llib/date.scm 980 */
BgL_test8553z00_17082 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 980 */
if(
(
(long)(BgL_curz00_13699)==((long)114)))
{ /* Llib/date.scm 980 */
BgL_test8553z00_17082 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 980 */
bool_t BgL__ortest_1163z00_13701;
BgL__ortest_1163z00_13701 = 
(
(long)(BgL_curz00_13699)==((long)117)); 
if(BgL__ortest_1163z00_13701)
{ /* Llib/date.scm 980 */
BgL_test8553z00_17082 = BgL__ortest_1163z00_13701
; }  else 
{ /* Llib/date.scm 980 */
BgL_test8553z00_17082 = 
(
(long)(BgL_curz00_13699)==((long)116))
; } } } } } } 
if(BgL_test8553z00_17082)
{ /* Llib/date.scm 980 */
BgL_iportz00_13726 = BgL_iportz00_13689; 
BgL_lastzd2matchzd2_13727 = BgL_newzd2matchzd2_13693; 
BgL_forwardz00_13728 = 
(((long)1)+BgL_forwardz00_13691); 
BgL_bufposz00_13729 = BgL_bufposz00_13692; 
BgL_statezd25zd21155z00_13607:
if(
(BgL_forwardz00_13728==BgL_bufposz00_13729))
{ /* Llib/date.scm 980 */
if(
rgc_fill_buffer(BgL_iportz00_13726))
{ /* Llib/date.scm 980 */
long BgL_arg1493z00_13730;long BgL_arg1494z00_13731;
{ /* Llib/date.scm 980 */
long BgL_res4726z00_13732;
BgL_res4726z00_13732 = 
RGC_BUFFER_FORWARD(BgL_iportz00_13726); 
BgL_arg1493z00_13730 = BgL_res4726z00_13732; } 
{ /* Llib/date.scm 980 */
long BgL_res4727z00_13733;
BgL_res4727z00_13733 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_13726); 
BgL_arg1494z00_13731 = BgL_res4727z00_13733; } 
{ 
long BgL_bufposz00_17119;long BgL_forwardz00_17118;
BgL_forwardz00_17118 = BgL_arg1493z00_13730; 
BgL_bufposz00_17119 = BgL_arg1494z00_13731; 
BgL_bufposz00_13729 = BgL_bufposz00_17119; 
BgL_forwardz00_13728 = BgL_forwardz00_17118; 
goto BgL_statezd25zd21155z00_13607;} }  else 
{ /* Llib/date.scm 980 */
BgL_matchz00_13611 = BgL_lastzd2matchzd2_13727; } }  else 
{ /* Llib/date.scm 980 */
int BgL_curz00_13734;
{ /* Llib/date.scm 980 */
int BgL_res4728z00_13735;
BgL_res4728z00_13735 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_13726, BgL_forwardz00_13728); 
BgL_curz00_13734 = BgL_res4728z00_13735; } 
{ /* Llib/date.scm 980 */

{ /* Llib/date.scm 980 */
bool_t BgL_test8565z00_17121;
if(
(
(long)(BgL_curz00_13734)==((long)97)))
{ /* Llib/date.scm 980 */
BgL_test8565z00_17121 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 980 */
bool_t BgL_test8567z00_17125;
if(
(
(long)(BgL_curz00_13734)==((long)101)))
{ /* Llib/date.scm 980 */
BgL_test8567z00_17125 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 980 */
BgL_test8567z00_17125 = 
(
(long)(BgL_curz00_13734)==((long)100))
; } 
if(BgL_test8567z00_17125)
{ /* Llib/date.scm 980 */
BgL_test8565z00_17121 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 980 */
bool_t BgL_test8569z00_17131;
if(
(
(long)(BgL_curz00_13734)==((long)105)))
{ /* Llib/date.scm 980 */
BgL_test8569z00_17131 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 980 */
BgL_test8569z00_17131 = 
(
(long)(BgL_curz00_13734)==((long)104))
; } 
if(BgL_test8569z00_17131)
{ /* Llib/date.scm 980 */
BgL_test8565z00_17121 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 980 */
bool_t BgL_test8571z00_17137;
if(
(
(long)(BgL_curz00_13734)==((long)111)))
{ /* Llib/date.scm 980 */
BgL_test8571z00_17137 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 980 */
BgL_test8571z00_17137 = 
(
(long)(BgL_curz00_13734)==((long)110))
; } 
if(BgL_test8571z00_17137)
{ /* Llib/date.scm 980 */
BgL_test8565z00_17121 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 980 */
if(
(
(long)(BgL_curz00_13734)==((long)114)))
{ /* Llib/date.scm 980 */
BgL_test8565z00_17121 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 980 */
bool_t BgL__ortest_1162z00_13736;
BgL__ortest_1162z00_13736 = 
(
(long)(BgL_curz00_13734)==((long)117)); 
if(BgL__ortest_1162z00_13736)
{ /* Llib/date.scm 980 */
BgL_test8565z00_17121 = BgL__ortest_1162z00_13736
; }  else 
{ /* Llib/date.scm 980 */
BgL_test8565z00_17121 = 
(
(long)(BgL_curz00_13734)==((long)116))
; } } } } } } 
if(BgL_test8565z00_17121)
{ /* Llib/date.scm 980 */
BgL_iportz00_13667 = BgL_iportz00_13726; 
BgL_lastzd2matchzd2_13668 = BgL_lastzd2matchzd2_13727; 
BgL_forwardz00_13669 = 
(((long)1)+BgL_forwardz00_13728); 
BgL_bufposz00_13670 = BgL_bufposz00_13729; 
BgL_statezd27zd21157z00_13602:
if(
(BgL_forwardz00_13669==BgL_bufposz00_13670))
{ /* Llib/date.scm 980 */
if(
rgc_fill_buffer(BgL_iportz00_13667))
{ /* Llib/date.scm 980 */
long BgL_arg1556z00_13671;long BgL_arg1557z00_13672;
{ /* Llib/date.scm 980 */
long BgL_res4789z00_13673;
BgL_res4789z00_13673 = 
RGC_BUFFER_FORWARD(BgL_iportz00_13667); 
BgL_arg1556z00_13671 = BgL_res4789z00_13673; } 
{ /* Llib/date.scm 980 */
long BgL_res4790z00_13674;
BgL_res4790z00_13674 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_13667); 
BgL_arg1557z00_13672 = BgL_res4790z00_13674; } 
{ 
long BgL_bufposz00_17158;long BgL_forwardz00_17157;
BgL_forwardz00_17157 = BgL_arg1556z00_13671; 
BgL_bufposz00_17158 = BgL_arg1557z00_13672; 
BgL_bufposz00_13670 = BgL_bufposz00_17158; 
BgL_forwardz00_13669 = BgL_forwardz00_17157; 
goto BgL_statezd27zd21157z00_13602;} }  else 
{ /* Llib/date.scm 980 */
BgL_matchz00_13611 = BgL_lastzd2matchzd2_13668; } }  else 
{ /* Llib/date.scm 980 */
int BgL_curz00_13675;
{ /* Llib/date.scm 980 */
int BgL_res4791z00_13676;
BgL_res4791z00_13676 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_13667, BgL_forwardz00_13669); 
BgL_curz00_13675 = BgL_res4791z00_13676; } 
{ /* Llib/date.scm 980 */

if(
(
(long)(BgL_curz00_13675)==((long)44)))
{ /* Llib/date.scm 980 */
BgL_iportz00_13737 = BgL_iportz00_13667; 
BgL_lastzd2matchzd2_13738 = BgL_lastzd2matchzd2_13668; 
BgL_forwardz00_13739 = 
(((long)1)+BgL_forwardz00_13669); 
BgL_bufposz00_13740 = BgL_bufposz00_13670; 
BgL_statezd28zd21158z00_13608:
if(
(BgL_forwardz00_13739==BgL_bufposz00_13740))
{ /* Llib/date.scm 980 */
if(
rgc_fill_buffer(BgL_iportz00_13737))
{ /* Llib/date.scm 980 */
long BgL_arg1483z00_13741;long BgL_arg1484z00_13742;
{ /* Llib/date.scm 980 */
long BgL_res4715z00_13743;
BgL_res4715z00_13743 = 
RGC_BUFFER_FORWARD(BgL_iportz00_13737); 
BgL_arg1483z00_13741 = BgL_res4715z00_13743; } 
{ /* Llib/date.scm 980 */
long BgL_res4716z00_13744;
BgL_res4716z00_13744 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_13737); 
BgL_arg1484z00_13742 = BgL_res4716z00_13744; } 
{ 
long BgL_bufposz00_17170;long BgL_forwardz00_17169;
BgL_forwardz00_17169 = BgL_arg1483z00_13741; 
BgL_bufposz00_17170 = BgL_arg1484z00_13742; 
BgL_bufposz00_13740 = BgL_bufposz00_17170; 
BgL_forwardz00_13739 = BgL_forwardz00_17169; 
goto BgL_statezd28zd21158z00_13608;} }  else 
{ /* Llib/date.scm 980 */
BgL_matchz00_13611 = BgL_lastzd2matchzd2_13738; } }  else 
{ /* Llib/date.scm 980 */
int BgL_curz00_13745;
{ /* Llib/date.scm 980 */
int BgL_res4717z00_13746;
BgL_res4717z00_13746 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_13737, BgL_forwardz00_13739); 
BgL_curz00_13745 = BgL_res4717z00_13746; } 
{ /* Llib/date.scm 980 */

{ /* Llib/date.scm 980 */
bool_t BgL_test8580z00_17172;
{ /* Llib/date.scm 980 */
bool_t BgL_test8581z00_17173;
if(
(
(long)(BgL_curz00_13745)==((long)10)))
{ /* Llib/date.scm 980 */
BgL_test8581z00_17173 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 980 */
BgL_test8581z00_17173 = 
(
(long)(BgL_curz00_13745)==((long)9))
; } 
if(BgL_test8581z00_17173)
{ /* Llib/date.scm 980 */
BgL_test8580z00_17172 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 980 */
if(
(
(long)(BgL_curz00_13745)==((long)13)))
{ /* Llib/date.scm 980 */
BgL_test8580z00_17172 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 980 */
BgL_test8580z00_17172 = 
(
(long)(BgL_curz00_13745)==((long)32))
; } } } 
if(BgL_test8580z00_17172)
{ /* Llib/date.scm 980 */
long BgL_arg1489z00_13747;
BgL_arg1489z00_13747 = 
(((long)1)+BgL_forwardz00_13739); 
{ /* Llib/date.scm 980 */
long BgL_newzd2matchzd2_13748;
{ /* Llib/date.scm 980 */
long BgL_res4723z00_13749;
BgL_res4723z00_13749 = 
RGC_STOP_MATCH(BgL_iportz00_13737, BgL_arg1489z00_13747); BgL_res4723z00_13749; } 
BgL_newzd2matchzd2_13748 = ((long)1); 
BgL_matchz00_13611 = BgL_newzd2matchzd2_13748; } }  else 
{ /* Llib/date.scm 980 */
BgL_matchz00_13611 = BgL_lastzd2matchzd2_13738; } } } } }  else 
{ /* Llib/date.scm 980 */
BgL_matchz00_13611 = BgL_lastzd2matchzd2_13668; } } } }  else 
{ /* Llib/date.scm 980 */
BgL_matchz00_13611 = BgL_lastzd2matchzd2_13727; } } } } }  else 
{ /* Llib/date.scm 980 */
BgL_matchz00_13611 = BgL_newzd2matchzd2_13693; } } } } } }  else 
{ /* Llib/date.scm 980 */
bool_t BgL_test8584z00_17190;
if(
(
(long)(BgL_curz00_13758)>=((long)48)))
{ /* Llib/date.scm 980 */
BgL_test8584z00_17190 = 
(
(long)(BgL_curz00_13758)<((long)58))
; }  else 
{ /* Llib/date.scm 980 */
BgL_test8584z00_17190 = ((bool_t)0)
; } 
if(BgL_test8584z00_17190)
{ /* Llib/date.scm 980 */
BgL_iportz00_13702 = BgL_iportz00_13750; 
BgL_lastzd2matchzd2_13703 = BgL_lastzd2matchzd2_13751; 
BgL_forwardz00_13704 = 
(((long)1)+BgL_forwardz00_13752); 
BgL_bufposz00_13705 = BgL_bufposz00_13753; 
BgL_statezd23zd21153z00_13605:
{ /* Llib/date.scm 980 */
long BgL_newzd2matchzd2_13706;
{ /* Llib/date.scm 980 */
long BgL_res4752z00_13707;
BgL_res4752z00_13707 = 
RGC_STOP_MATCH(BgL_iportz00_13702, BgL_forwardz00_13704); BgL_res4752z00_13707; } 
BgL_newzd2matchzd2_13706 = ((long)2); 
if(
(BgL_forwardz00_13704==BgL_bufposz00_13705))
{ /* Llib/date.scm 980 */
if(
rgc_fill_buffer(BgL_iportz00_13702))
{ /* Llib/date.scm 980 */
long BgL_arg1520z00_13708;long BgL_arg1521z00_13709;
{ /* Llib/date.scm 980 */
long BgL_res4755z00_13710;
BgL_res4755z00_13710 = 
RGC_BUFFER_FORWARD(BgL_iportz00_13702); 
BgL_arg1520z00_13708 = BgL_res4755z00_13710; } 
{ /* Llib/date.scm 980 */
long BgL_res4756z00_13711;
BgL_res4756z00_13711 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_13702); 
BgL_arg1521z00_13709 = BgL_res4756z00_13711; } 
{ 
long BgL_bufposz00_17204;long BgL_forwardz00_17203;
BgL_forwardz00_17203 = BgL_arg1520z00_13708; 
BgL_bufposz00_17204 = BgL_arg1521z00_13709; 
BgL_bufposz00_13705 = BgL_bufposz00_17204; 
BgL_forwardz00_13704 = BgL_forwardz00_17203; 
goto BgL_statezd23zd21153z00_13605;} }  else 
{ /* Llib/date.scm 980 */
BgL_matchz00_13611 = BgL_newzd2matchzd2_13706; } }  else 
{ /* Llib/date.scm 980 */
int BgL_curz00_13712;
{ /* Llib/date.scm 980 */
int BgL_res4757z00_13713;
BgL_res4757z00_13713 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_13702, BgL_forwardz00_13704); 
BgL_curz00_13712 = BgL_res4757z00_13713; } 
{ /* Llib/date.scm 980 */

{ /* Llib/date.scm 980 */
bool_t BgL_test8588z00_17206;
if(
(
(long)(BgL_curz00_13712)>=((long)48)))
{ /* Llib/date.scm 980 */
BgL_test8588z00_17206 = 
(
(long)(BgL_curz00_13712)<((long)58))
; }  else 
{ /* Llib/date.scm 980 */
BgL_test8588z00_17206 = ((bool_t)0)
; } 
if(BgL_test8588z00_17206)
{ /* Llib/date.scm 980 */
BgL_iportz00_13677 = BgL_iportz00_13702; 
BgL_lastzd2matchzd2_13678 = BgL_newzd2matchzd2_13706; 
BgL_forwardz00_13679 = 
(((long)1)+BgL_forwardz00_13704); 
BgL_bufposz00_13680 = BgL_bufposz00_13705; 
BgL_statezd210zd21160z00_13603:
{ /* Llib/date.scm 980 */
long BgL_newzd2matchzd2_13681;
{ /* Llib/date.scm 980 */
long BgL_res4778z00_13682;
BgL_res4778z00_13682 = 
RGC_STOP_MATCH(BgL_iportz00_13677, BgL_forwardz00_13679); BgL_res4778z00_13682; } 
BgL_newzd2matchzd2_13681 = ((long)2); 
if(
(BgL_forwardz00_13679==BgL_bufposz00_13680))
{ /* Llib/date.scm 980 */
if(
rgc_fill_buffer(BgL_iportz00_13677))
{ /* Llib/date.scm 980 */
long BgL_arg1544z00_13683;long BgL_arg1545z00_13684;
{ /* Llib/date.scm 980 */
long BgL_res4781z00_13685;
BgL_res4781z00_13685 = 
RGC_BUFFER_FORWARD(BgL_iportz00_13677); 
BgL_arg1544z00_13683 = BgL_res4781z00_13685; } 
{ /* Llib/date.scm 980 */
long BgL_res4782z00_13686;
BgL_res4782z00_13686 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_13677); 
BgL_arg1545z00_13684 = BgL_res4782z00_13686; } 
{ 
long BgL_bufposz00_17220;long BgL_forwardz00_17219;
BgL_forwardz00_17219 = BgL_arg1544z00_13683; 
BgL_bufposz00_17220 = BgL_arg1545z00_13684; 
BgL_bufposz00_13680 = BgL_bufposz00_17220; 
BgL_forwardz00_13679 = BgL_forwardz00_17219; 
goto BgL_statezd210zd21160z00_13603;} }  else 
{ /* Llib/date.scm 980 */
BgL_matchz00_13611 = BgL_newzd2matchzd2_13681; } }  else 
{ /* Llib/date.scm 980 */
int BgL_curz00_13687;
{ /* Llib/date.scm 980 */
int BgL_res4783z00_13688;
BgL_res4783z00_13688 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_13677, BgL_forwardz00_13679); 
BgL_curz00_13687 = BgL_res4783z00_13688; } 
{ /* Llib/date.scm 980 */

{ /* Llib/date.scm 980 */
bool_t BgL_test8592z00_17222;
if(
(
(long)(BgL_curz00_13687)>=((long)48)))
{ /* Llib/date.scm 980 */
BgL_test8592z00_17222 = 
(
(long)(BgL_curz00_13687)<((long)58))
; }  else 
{ /* Llib/date.scm 980 */
BgL_test8592z00_17222 = ((bool_t)0)
; } 
if(BgL_test8592z00_17222)
{ 
long BgL_forwardz00_17229;long BgL_lastzd2matchzd2_17228;
BgL_lastzd2matchzd2_17228 = BgL_newzd2matchzd2_13681; 
BgL_forwardz00_17229 = 
(((long)1)+BgL_forwardz00_13679); 
BgL_forwardz00_13679 = BgL_forwardz00_17229; 
BgL_lastzd2matchzd2_13678 = BgL_lastzd2matchzd2_17228; 
goto BgL_statezd210zd21160z00_13603;}  else 
{ /* Llib/date.scm 980 */
BgL_matchz00_13611 = BgL_newzd2matchzd2_13681; } } } } } }  else 
{ /* Llib/date.scm 980 */
BgL_matchz00_13611 = BgL_newzd2matchzd2_13706; } } } } } }  else 
{ /* Llib/date.scm 980 */
bool_t BgL_test8594z00_17233;
{ /* Llib/date.scm 980 */
bool_t BgL_test8595z00_17234;
if(
(
(long)(BgL_curz00_13758)==((long)10)))
{ /* Llib/date.scm 980 */
BgL_test8595z00_17234 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 980 */
BgL_test8595z00_17234 = 
(
(long)(BgL_curz00_13758)==((long)9))
; } 
if(BgL_test8595z00_17234)
{ /* Llib/date.scm 980 */
BgL_test8594z00_17233 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 980 */
if(
(
(long)(BgL_curz00_13758)==((long)13)))
{ /* Llib/date.scm 980 */
BgL_test8594z00_17233 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 980 */
BgL_test8594z00_17233 = 
(
(long)(BgL_curz00_13758)==((long)32))
; } } } 
if(BgL_test8594z00_17233)
{ /* Llib/date.scm 980 */
BgL_iportz00_13714 = BgL_iportz00_13750; 
BgL_lastzd2matchzd2_13715 = BgL_lastzd2matchzd2_13751; 
BgL_forwardz00_13716 = 
(((long)1)+BgL_forwardz00_13752); 
BgL_bufposz00_13717 = BgL_bufposz00_13753; 
BgL_statezd22zd21152z00_13606:
{ /* Llib/date.scm 980 */
long BgL_newzd2matchzd2_13718;
{ /* Llib/date.scm 980 */
long BgL_res4740z00_13719;
BgL_res4740z00_13719 = 
RGC_STOP_MATCH(BgL_iportz00_13714, BgL_forwardz00_13716); BgL_res4740z00_13719; } 
BgL_newzd2matchzd2_13718 = ((long)0); 
if(
(BgL_forwardz00_13716==BgL_bufposz00_13717))
{ /* Llib/date.scm 980 */
if(
rgc_fill_buffer(BgL_iportz00_13714))
{ /* Llib/date.scm 980 */
long BgL_arg1509z00_13720;long BgL_arg1510z00_13721;
{ /* Llib/date.scm 980 */
long BgL_res4743z00_13722;
BgL_res4743z00_13722 = 
RGC_BUFFER_FORWARD(BgL_iportz00_13714); 
BgL_arg1509z00_13720 = BgL_res4743z00_13722; } 
{ /* Llib/date.scm 980 */
long BgL_res4744z00_13723;
BgL_res4744z00_13723 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_13714); 
BgL_arg1510z00_13721 = BgL_res4744z00_13723; } 
{ 
long BgL_bufposz00_17253;long BgL_forwardz00_17252;
BgL_forwardz00_17252 = BgL_arg1509z00_13720; 
BgL_bufposz00_17253 = BgL_arg1510z00_13721; 
BgL_bufposz00_13717 = BgL_bufposz00_17253; 
BgL_forwardz00_13716 = BgL_forwardz00_17252; 
goto BgL_statezd22zd21152z00_13606;} }  else 
{ /* Llib/date.scm 980 */
BgL_matchz00_13611 = BgL_newzd2matchzd2_13718; } }  else 
{ /* Llib/date.scm 980 */
int BgL_curz00_13724;
{ /* Llib/date.scm 980 */
int BgL_res4745z00_13725;
BgL_res4745z00_13725 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_13714, BgL_forwardz00_13716); 
BgL_curz00_13724 = BgL_res4745z00_13725; } 
{ /* Llib/date.scm 980 */

{ /* Llib/date.scm 980 */
bool_t BgL_test8600z00_17255;
{ /* Llib/date.scm 980 */
bool_t BgL_test8601z00_17256;
if(
(
(long)(BgL_curz00_13724)==((long)10)))
{ /* Llib/date.scm 980 */
BgL_test8601z00_17256 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 980 */
BgL_test8601z00_17256 = 
(
(long)(BgL_curz00_13724)==((long)9))
; } 
if(BgL_test8601z00_17256)
{ /* Llib/date.scm 980 */
BgL_test8600z00_17255 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 980 */
if(
(
(long)(BgL_curz00_13724)==((long)13)))
{ /* Llib/date.scm 980 */
BgL_test8600z00_17255 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 980 */
BgL_test8600z00_17255 = 
(
(long)(BgL_curz00_13724)==((long)32))
; } } } 
if(BgL_test8600z00_17255)
{ /* Llib/date.scm 980 */
BgL_iportz00_13655 = BgL_iportz00_13714; 
BgL_lastzd2matchzd2_13656 = BgL_newzd2matchzd2_13718; 
BgL_forwardz00_13657 = 
(((long)1)+BgL_forwardz00_13716); 
BgL_bufposz00_13658 = BgL_bufposz00_13717; 
BgL_statezd211zd21161z00_13601:
{ /* Llib/date.scm 980 */
long BgL_newzd2matchzd2_13659;
{ /* Llib/date.scm 980 */
long BgL_res4794z00_13660;
BgL_res4794z00_13660 = 
RGC_STOP_MATCH(BgL_iportz00_13655, BgL_forwardz00_13657); BgL_res4794z00_13660; } 
BgL_newzd2matchzd2_13659 = ((long)0); 
if(
(BgL_forwardz00_13657==BgL_bufposz00_13658))
{ /* Llib/date.scm 980 */
if(
rgc_fill_buffer(BgL_iportz00_13655))
{ /* Llib/date.scm 980 */
long BgL_arg1564z00_13661;long BgL_arg1565z00_13662;
{ /* Llib/date.scm 980 */
long BgL_res4797z00_13663;
BgL_res4797z00_13663 = 
RGC_BUFFER_FORWARD(BgL_iportz00_13655); 
BgL_arg1564z00_13661 = BgL_res4797z00_13663; } 
{ /* Llib/date.scm 980 */
long BgL_res4798z00_13664;
BgL_res4798z00_13664 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_13655); 
BgL_arg1565z00_13662 = BgL_res4798z00_13664; } 
{ 
long BgL_bufposz00_17275;long BgL_forwardz00_17274;
BgL_forwardz00_17274 = BgL_arg1564z00_13661; 
BgL_bufposz00_17275 = BgL_arg1565z00_13662; 
BgL_bufposz00_13658 = BgL_bufposz00_17275; 
BgL_forwardz00_13657 = BgL_forwardz00_17274; 
goto BgL_statezd211zd21161z00_13601;} }  else 
{ /* Llib/date.scm 980 */
BgL_matchz00_13611 = BgL_newzd2matchzd2_13659; } }  else 
{ /* Llib/date.scm 980 */
int BgL_curz00_13665;
{ /* Llib/date.scm 980 */
int BgL_res4799z00_13666;
BgL_res4799z00_13666 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_13655, BgL_forwardz00_13657); 
BgL_curz00_13665 = BgL_res4799z00_13666; } 
{ /* Llib/date.scm 980 */

{ /* Llib/date.scm 980 */
bool_t BgL_test8606z00_17277;
{ /* Llib/date.scm 980 */
bool_t BgL_test8607z00_17278;
if(
(
(long)(BgL_curz00_13665)==((long)10)))
{ /* Llib/date.scm 980 */
BgL_test8607z00_17278 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 980 */
BgL_test8607z00_17278 = 
(
(long)(BgL_curz00_13665)==((long)9))
; } 
if(BgL_test8607z00_17278)
{ /* Llib/date.scm 980 */
BgL_test8606z00_17277 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 980 */
if(
(
(long)(BgL_curz00_13665)==((long)13)))
{ /* Llib/date.scm 980 */
BgL_test8606z00_17277 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 980 */
BgL_test8606z00_17277 = 
(
(long)(BgL_curz00_13665)==((long)32))
; } } } 
if(BgL_test8606z00_17277)
{ 
long BgL_forwardz00_17290;long BgL_lastzd2matchzd2_17289;
BgL_lastzd2matchzd2_17289 = BgL_newzd2matchzd2_13659; 
BgL_forwardz00_17290 = 
(((long)1)+BgL_forwardz00_13657); 
BgL_forwardz00_13657 = BgL_forwardz00_17290; 
BgL_lastzd2matchzd2_13656 = BgL_lastzd2matchzd2_17289; 
goto BgL_statezd211zd21161z00_13601;}  else 
{ /* Llib/date.scm 980 */
BgL_matchz00_13611 = BgL_newzd2matchzd2_13659; } } } } } }  else 
{ /* Llib/date.scm 980 */
BgL_matchz00_13611 = BgL_newzd2matchzd2_13718; } } } } } }  else 
{ /* Llib/date.scm 980 */
long BgL_arg1477z00_13760;
BgL_arg1477z00_13760 = 
(((long)1)+BgL_forwardz00_13752); 
{ /* Llib/date.scm 980 */
long BgL_newzd2matchzd2_13761;
{ /* Llib/date.scm 980 */
long BgL_res4711z00_13762;
BgL_res4711z00_13762 = 
RGC_STOP_MATCH(BgL_iportz00_13750, BgL_arg1477z00_13760); BgL_res4711z00_13762; } 
BgL_newzd2matchzd2_13761 = ((long)3); 
BgL_matchz00_13611 = BgL_newzd2matchzd2_13761; } } } } } } } } 
RGC_SET_FILEPOS(BgL_iportz00_11329); 
switch( BgL_matchz00_13611) { case ((long)3) : 

{ /* Llib/date.scm 1014 */
obj_t BgL_auxz00_17297;
{ /* Llib/date.scm 980 */
bool_t BgL_test8610z00_17298;
{ /* Llib/date.scm 980 */
long BgL_arg1661z00_13652;
{ /* Llib/date.scm 980 */
long BgL_res4806z00_13653;
BgL_res4806z00_13653 = 
RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_11329); 
BgL_arg1661z00_13652 = BgL_res4806z00_13653; } 
BgL_test8610z00_17298 = 
(BgL_arg1661z00_13652==((long)0)); } 
if(BgL_test8610z00_17298)
{ /* Llib/date.scm 980 */
BgL_auxz00_17297 = BEOF
; }  else 
{ /* Llib/date.scm 980 */
unsigned char BgL_res4808z00_13654;
BgL_res4808z00_13654 = 
RGC_BUFFER_CHARACTER(BgL_iportz00_11329); 
BgL_auxz00_17297 = 
BCHAR(BgL_res4808z00_13654); } } 
return 
BGl_parsezd2errorzd2zz__datez00(BGl_string7522z00zz__datez00, BGl_string7601z00zz__datez00, BgL_auxz00_17297, BgL_iportz00_11329);} break;case ((long)2) : 

{ /* Llib/date.scm 999 */
long BgL_dayz00_13616;
BgL_dayz00_13616 = 
rgc_buffer_fixnum(BgL_iportz00_11329); 
{ /* Llib/date.scm 999 */
obj_t BgL_monthz00_13617;
{ /* Llib/date.scm 1000 */
obj_t BgL_funz00_13618;
{ /* Llib/date.scm 1000 */
obj_t BgL_aux7027z00_13619;
BgL_aux7027z00_13619 = BGl_monthzd2grammarzd2zz__datez00; 
if(
PROCEDUREP(BgL_aux7027z00_13619))
{ /* Llib/date.scm 1000 */
BgL_funz00_13618 = BgL_aux7027z00_13619; }  else 
{ 
obj_t BgL_auxz00_17307;
BgL_auxz00_17307 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)41891)), BGl_string7520z00zz__datez00, BGl_string7602z00zz__datez00, BgL_aux7027z00_13619); 
FAILURE(BgL_auxz00_17307,BFALSE,BFALSE);} } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_13618, ((long)1)))
{ /* Llib/date.scm 1000 */
BgL_monthz00_13617 = 
PROCEDURE_ENTRY(BgL_funz00_13618)(BGl_monthzd2grammarzd2zz__datez00, BgL_iportz00_11329, BEOA); }  else 
{ /* Llib/date.scm 1000 */
FAILURE(BGl_string7603z00zz__datez00,BGl_list7604z00zz__datez00,BgL_funz00_13618);} } 
{ /* Llib/date.scm 1000 */
obj_t BgL_yearz00_13620;
{ /* Llib/date.scm 1001 */
obj_t BgL_funz00_13621;
{ /* Llib/date.scm 1001 */
obj_t BgL_aux7031z00_13622;
BgL_aux7031z00_13622 = BGl_thezd2fixnumzd2grammarz00zz__datez00; 
if(
PROCEDUREP(BgL_aux7031z00_13622))
{ /* Llib/date.scm 1001 */
BgL_funz00_13621 = BgL_aux7031z00_13622; }  else 
{ 
obj_t BgL_auxz00_17320;
BgL_auxz00_17320 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)41940)), BGl_string7520z00zz__datez00, BGl_string7602z00zz__datez00, BgL_aux7031z00_13622); 
FAILURE(BgL_auxz00_17320,BFALSE,BFALSE);} } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_13621, ((long)1)))
{ /* Llib/date.scm 1001 */
BgL_yearz00_13620 = 
PROCEDURE_ENTRY(BgL_funz00_13621)(BGl_thezd2fixnumzd2grammarz00zz__datez00, BgL_iportz00_11329, BEOA); }  else 
{ /* Llib/date.scm 1001 */
FAILURE(BGl_string7603z00zz__datez00,BGl_list7611z00zz__datez00,BgL_funz00_13621);} } 
{ /* Llib/date.scm 1001 */

{ /* Llib/date.scm 1002 */
obj_t BgL_hourz00_13623;
{ /* Llib/date.scm 1003 */
obj_t BgL_funz00_13624;
{ /* Llib/date.scm 1003 */
obj_t BgL_aux7035z00_13625;
BgL_aux7035z00_13625 = BGl_timezd2grammarzd2zz__datez00; 
if(
PROCEDUREP(BgL_aux7035z00_13625))
{ /* Llib/date.scm 1003 */
BgL_funz00_13624 = BgL_aux7035z00_13625; }  else 
{ 
obj_t BgL_auxz00_17333;
BgL_auxz00_17333 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)42033)), BGl_string7520z00zz__datez00, BGl_string7602z00zz__datez00, BgL_aux7035z00_13625); 
FAILURE(BgL_auxz00_17333,BFALSE,BFALSE);} } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_13624, ((long)1)))
{ /* Llib/date.scm 1003 */
BgL_hourz00_13623 = 
PROCEDURE_ENTRY(BgL_funz00_13624)(BGl_timezd2grammarzd2zz__datez00, BgL_iportz00_11329, BEOA); }  else 
{ /* Llib/date.scm 1003 */
FAILURE(BGl_string7603z00zz__datez00,BGl_list7616z00zz__datez00,BgL_funz00_13624);} } 
{ /* Llib/date.scm 1003 */
obj_t BgL_minutez00_13626;obj_t BgL_secondz00_13627;
{ /* Llib/date.scm 1004 */
int BgL_tmpz00_17344;
BgL_tmpz00_17344 = 
(int)(((long)1)); 
BgL_minutez00_13626 = 
BGL_MVALUES_VAL(BgL_tmpz00_17344); } 
{ /* Llib/date.scm 1004 */
int BgL_tmpz00_17347;
BgL_tmpz00_17347 = 
(int)(((long)2)); 
BgL_secondz00_13627 = 
BGL_MVALUES_VAL(BgL_tmpz00_17347); } 
{ /* Llib/date.scm 1004 */
obj_t BgL_za7oneza7_13628;
{ /* Llib/date.scm 1004 */
obj_t BgL_funz00_13629;
{ /* Llib/date.scm 1004 */
obj_t BgL_aux7039z00_13630;
BgL_aux7039z00_13630 = BGl_za7onezd2grammarz75zz__datez00; 
if(
PROCEDUREP(BgL_aux7039z00_13630))
{ /* Llib/date.scm 1004 */
BgL_funz00_13629 = BgL_aux7039z00_13630; }  else 
{ 
obj_t BgL_auxz00_17352;
BgL_auxz00_17352 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)42085)), BGl_string7520z00zz__datez00, BGl_string7602z00zz__datez00, BgL_aux7039z00_13630); 
FAILURE(BgL_auxz00_17352,BFALSE,BFALSE);} } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_13629, ((long)1)))
{ /* Llib/date.scm 1004 */
BgL_za7oneza7_13628 = 
PROCEDURE_ENTRY(BgL_funz00_13629)(BGl_za7onezd2grammarz75zz__datez00, BgL_iportz00_11329, BEOA); }  else 
{ /* Llib/date.scm 1004 */
FAILURE(BGl_string7603z00zz__datez00,BGl_list7621z00zz__datez00,BgL_funz00_13629);} } 
{ /* Llib/date.scm 1009 */
obj_t BgL_arg1675z00_13631;
{ /* Llib/date.scm 1009 */
bool_t BgL_test8619z00_17363;
{ /* Llib/date.scm 1009 */
long BgL_n1z00_13632;
{ /* Llib/date.scm 1009 */
obj_t BgL_tmpz00_17364;
if(
INTEGERP(BgL_yearz00_13620))
{ /* Llib/date.scm 1009 */
BgL_tmpz00_17364 = BgL_yearz00_13620
; }  else 
{ 
obj_t BgL_auxz00_17367;
BgL_auxz00_17367 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)42217)), BGl_string7520z00zz__datez00, BGl_string7524z00zz__datez00, BgL_yearz00_13620); 
FAILURE(BgL_auxz00_17367,BFALSE,BFALSE);} 
BgL_n1z00_13632 = 
(long)CINT(BgL_tmpz00_17364); } 
BgL_test8619z00_17363 = 
(BgL_n1z00_13632<((long)100)); } 
if(BgL_test8619z00_17363)
{ /* Llib/date.scm 1004 */
obj_t BgL_tmpz00_17373;
if(
INTEGERP(BgL_yearz00_13620))
{ /* Llib/date.scm 1009 */
BgL_tmpz00_17373 = BgL_yearz00_13620
; }  else 
{ 
obj_t BgL_auxz00_17376;
BgL_auxz00_17376 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)42232)), BGl_string7520z00zz__datez00, BGl_string7524z00zz__datez00, BgL_yearz00_13620); 
FAILURE(BgL_auxz00_17376,BFALSE,BFALSE);} 
BgL_arg1675z00_13631 = 
ADDFX(BgL_tmpz00_17373, 
BINT(((long)2000))); }  else 
{ /* Llib/date.scm 1009 */
BgL_arg1675z00_13631 = BgL_yearz00_13620; } } 
if(
BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BgL_za7oneza7_13628))
{ /* Llib/date.scm 233 */
long BgL_auxz00_17430;int BgL_auxz00_17421;int BgL_auxz00_17411;int BgL_auxz00_17402;int BgL_auxz00_17393;int BgL_tmpz00_17384;
{ /* Llib/date.scm 233 */
obj_t BgL_tmpz00_17431;
if(
INTEGERP(BgL_za7oneza7_13628))
{ /* Llib/date.scm 233 */
BgL_tmpz00_17431 = BgL_za7oneza7_13628
; }  else 
{ 
obj_t BgL_auxz00_17434;
BgL_auxz00_17434 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11085)), BGl_string7520z00zz__datez00, BGl_string7524z00zz__datez00, BgL_za7oneza7_13628); 
FAILURE(BgL_auxz00_17434,BFALSE,BFALSE);} 
BgL_auxz00_17430 = 
(long)CINT(BgL_tmpz00_17431); } 
{ /* Llib/date.scm 233 */
obj_t BgL_tmpz00_17422;
if(
INTEGERP(BgL_arg1675z00_13631))
{ /* Llib/date.scm 233 */
BgL_tmpz00_17422 = BgL_arg1675z00_13631
; }  else 
{ 
obj_t BgL_auxz00_17425;
BgL_auxz00_17425 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11080)), BGl_string7520z00zz__datez00, BGl_string7524z00zz__datez00, BgL_arg1675z00_13631); 
FAILURE(BgL_auxz00_17425,BFALSE,BFALSE);} 
BgL_auxz00_17421 = 
CINT(BgL_tmpz00_17422); } 
{ /* Llib/date.scm 233 */
obj_t BgL_tmpz00_17413;
if(
INTEGERP(BgL_monthz00_13617))
{ /* Llib/date.scm 233 */
BgL_tmpz00_17413 = BgL_monthz00_13617
; }  else 
{ 
obj_t BgL_auxz00_17416;
BgL_auxz00_17416 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11074)), BGl_string7520z00zz__datez00, BGl_string7524z00zz__datez00, BgL_monthz00_13617); 
FAILURE(BgL_auxz00_17416,BFALSE,BFALSE);} 
BgL_auxz00_17411 = 
CINT(BgL_tmpz00_17413); } 
{ /* Llib/date.scm 233 */
obj_t BgL_tmpz00_17403;
if(
INTEGERP(BgL_hourz00_13623))
{ /* Llib/date.scm 233 */
BgL_tmpz00_17403 = BgL_hourz00_13623
; }  else 
{ 
obj_t BgL_auxz00_17406;
BgL_auxz00_17406 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11065)), BGl_string7520z00zz__datez00, BGl_string7524z00zz__datez00, BgL_hourz00_13623); 
FAILURE(BgL_auxz00_17406,BFALSE,BFALSE);} 
BgL_auxz00_17402 = 
CINT(BgL_tmpz00_17403); } 
{ /* Llib/date.scm 233 */
obj_t BgL_tmpz00_17394;
if(
INTEGERP(BgL_minutez00_13626))
{ /* Llib/date.scm 233 */
BgL_tmpz00_17394 = BgL_minutez00_13626
; }  else 
{ 
obj_t BgL_auxz00_17397;
BgL_auxz00_17397 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11061)), BGl_string7520z00zz__datez00, BGl_string7524z00zz__datez00, BgL_minutez00_13626); 
FAILURE(BgL_auxz00_17397,BFALSE,BFALSE);} 
BgL_auxz00_17393 = 
CINT(BgL_tmpz00_17394); } 
{ /* Llib/date.scm 233 */
obj_t BgL_tmpz00_17385;
if(
INTEGERP(BgL_secondz00_13627))
{ /* Llib/date.scm 233 */
BgL_tmpz00_17385 = BgL_secondz00_13627
; }  else 
{ 
obj_t BgL_auxz00_17388;
BgL_auxz00_17388 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11057)), BGl_string7520z00zz__datez00, BGl_string7524z00zz__datez00, BgL_secondz00_13627); 
FAILURE(BgL_auxz00_17388,BFALSE,BFALSE);} 
BgL_tmpz00_17384 = 
CINT(BgL_tmpz00_17385); } 
return 
bgl_make_date(((BGL_LONGLONG_T)0), BgL_tmpz00_17384, BgL_auxz00_17393, BgL_auxz00_17402, 
(int)(BgL_dayz00_13616), BgL_auxz00_17411, BgL_auxz00_17421, BgL_auxz00_17430, ((bool_t)1), 
(int)(((long)-1)));}  else 
{ /* Llib/date.scm 234 */
int BgL_auxz00_17478;int BgL_auxz00_17468;int BgL_auxz00_17459;int BgL_auxz00_17450;int BgL_tmpz00_17441;
{ /* Llib/date.scm 234 */
obj_t BgL_tmpz00_17479;
if(
INTEGERP(BgL_arg1675z00_13631))
{ /* Llib/date.scm 234 */
BgL_tmpz00_17479 = BgL_arg1675z00_13631
; }  else 
{ 
obj_t BgL_auxz00_17482;
BgL_auxz00_17482 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11148)), BGl_string7520z00zz__datez00, BGl_string7524z00zz__datez00, BgL_arg1675z00_13631); 
FAILURE(BgL_auxz00_17482,BFALSE,BFALSE);} 
BgL_auxz00_17478 = 
CINT(BgL_tmpz00_17479); } 
{ /* Llib/date.scm 234 */
obj_t BgL_tmpz00_17470;
if(
INTEGERP(BgL_monthz00_13617))
{ /* Llib/date.scm 234 */
BgL_tmpz00_17470 = BgL_monthz00_13617
; }  else 
{ 
obj_t BgL_auxz00_17473;
BgL_auxz00_17473 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11142)), BGl_string7520z00zz__datez00, BGl_string7524z00zz__datez00, BgL_monthz00_13617); 
FAILURE(BgL_auxz00_17473,BFALSE,BFALSE);} 
BgL_auxz00_17468 = 
CINT(BgL_tmpz00_17470); } 
{ /* Llib/date.scm 234 */
obj_t BgL_tmpz00_17460;
if(
INTEGERP(BgL_hourz00_13623))
{ /* Llib/date.scm 234 */
BgL_tmpz00_17460 = BgL_hourz00_13623
; }  else 
{ 
obj_t BgL_auxz00_17463;
BgL_auxz00_17463 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11133)), BGl_string7520z00zz__datez00, BGl_string7524z00zz__datez00, BgL_hourz00_13623); 
FAILURE(BgL_auxz00_17463,BFALSE,BFALSE);} 
BgL_auxz00_17459 = 
CINT(BgL_tmpz00_17460); } 
{ /* Llib/date.scm 234 */
obj_t BgL_tmpz00_17451;
if(
INTEGERP(BgL_minutez00_13626))
{ /* Llib/date.scm 234 */
BgL_tmpz00_17451 = BgL_minutez00_13626
; }  else 
{ 
obj_t BgL_auxz00_17454;
BgL_auxz00_17454 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11129)), BGl_string7520z00zz__datez00, BGl_string7524z00zz__datez00, BgL_minutez00_13626); 
FAILURE(BgL_auxz00_17454,BFALSE,BFALSE);} 
BgL_auxz00_17450 = 
CINT(BgL_tmpz00_17451); } 
{ /* Llib/date.scm 234 */
obj_t BgL_tmpz00_17442;
if(
INTEGERP(BgL_secondz00_13627))
{ /* Llib/date.scm 234 */
BgL_tmpz00_17442 = BgL_secondz00_13627
; }  else 
{ 
obj_t BgL_auxz00_17445;
BgL_auxz00_17445 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11125)), BGl_string7520z00zz__datez00, BGl_string7524z00zz__datez00, BgL_secondz00_13627); 
FAILURE(BgL_auxz00_17445,BFALSE,BFALSE);} 
BgL_tmpz00_17441 = 
CINT(BgL_tmpz00_17442); } 
return 
bgl_make_date(((BGL_LONGLONG_T)0), BgL_tmpz00_17441, BgL_auxz00_17450, BgL_auxz00_17459, 
(int)(BgL_dayz00_13616), BgL_auxz00_17468, BgL_auxz00_17478, ((long)0), ((bool_t)0), 
(int)(((long)-1)));} } } } } } } } } break;case ((long)1) : 

{ /* Llib/date.scm 984 */
obj_t BgL_dayz00_13633;
{ /* Llib/date.scm 984 */
obj_t BgL_funz00_13634;
{ /* Llib/date.scm 984 */
obj_t BgL_aux7069z00_13635;
BgL_aux7069z00_13635 = BGl_thezd2fixnumzd2grammarz00zz__datez00; 
if(
PROCEDUREP(BgL_aux7069z00_13635))
{ /* Llib/date.scm 984 */
BgL_funz00_13634 = BgL_aux7069z00_13635; }  else 
{ 
obj_t BgL_auxz00_17491;
BgL_auxz00_17491 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)41362)), BGl_string7520z00zz__datez00, BGl_string7602z00zz__datez00, BgL_aux7069z00_13635); 
FAILURE(BgL_auxz00_17491,BFALSE,BFALSE);} } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_13634, ((long)1)))
{ /* Llib/date.scm 984 */
BgL_dayz00_13633 = 
PROCEDURE_ENTRY(BgL_funz00_13634)(BGl_thezd2fixnumzd2grammarz00zz__datez00, BgL_iportz00_11329, BEOA); }  else 
{ /* Llib/date.scm 984 */
FAILURE(BGl_string7603z00zz__datez00,BGl_list7626z00zz__datez00,BgL_funz00_13634);} } 
{ /* Llib/date.scm 984 */
obj_t BgL_monthz00_13636;
{ /* Llib/date.scm 985 */
obj_t BgL_funz00_13637;
{ /* Llib/date.scm 985 */
obj_t BgL_aux7073z00_13638;
BgL_aux7073z00_13638 = BGl_monthzd2grammarzd2zz__datez00; 
if(
PROCEDUREP(BgL_aux7073z00_13638))
{ /* Llib/date.scm 985 */
BgL_funz00_13637 = BgL_aux7073z00_13638; }  else 
{ 
obj_t BgL_auxz00_17504;
BgL_auxz00_17504 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)41417)), BGl_string7520z00zz__datez00, BGl_string7602z00zz__datez00, BgL_aux7073z00_13638); 
FAILURE(BgL_auxz00_17504,BFALSE,BFALSE);} } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_13637, ((long)1)))
{ /* Llib/date.scm 985 */
BgL_monthz00_13636 = 
PROCEDURE_ENTRY(BgL_funz00_13637)(BGl_monthzd2grammarzd2zz__datez00, BgL_iportz00_11329, BEOA); }  else 
{ /* Llib/date.scm 985 */
FAILURE(BGl_string7603z00zz__datez00,BGl_list7629z00zz__datez00,BgL_funz00_13637);} } 
{ /* Llib/date.scm 985 */
obj_t BgL_yearz00_13639;
{ /* Llib/date.scm 986 */
obj_t BgL_funz00_13640;
{ /* Llib/date.scm 986 */
obj_t BgL_aux7077z00_13641;
BgL_aux7077z00_13641 = BGl_thezd2fixnumzd2grammarz00zz__datez00; 
if(
PROCEDUREP(BgL_aux7077z00_13641))
{ /* Llib/date.scm 986 */
BgL_funz00_13640 = BgL_aux7077z00_13641; }  else 
{ 
obj_t BgL_auxz00_17517;
BgL_auxz00_17517 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)41466)), BGl_string7520z00zz__datez00, BGl_string7602z00zz__datez00, BgL_aux7077z00_13641); 
FAILURE(BgL_auxz00_17517,BFALSE,BFALSE);} } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_13640, ((long)1)))
{ /* Llib/date.scm 986 */
BgL_yearz00_13639 = 
PROCEDURE_ENTRY(BgL_funz00_13640)(BGl_thezd2fixnumzd2grammarz00zz__datez00, BgL_iportz00_11329, BEOA); }  else 
{ /* Llib/date.scm 986 */
FAILURE(BGl_string7603z00zz__datez00,BGl_list7632z00zz__datez00,BgL_funz00_13640);} } 
{ /* Llib/date.scm 986 */

{ /* Llib/date.scm 987 */
obj_t BgL_hourz00_13642;
{ /* Llib/date.scm 988 */
obj_t BgL_funz00_13643;
{ /* Llib/date.scm 988 */
obj_t BgL_aux7081z00_13644;
BgL_aux7081z00_13644 = BGl_timezd2grammarzd2zz__datez00; 
if(
PROCEDUREP(BgL_aux7081z00_13644))
{ /* Llib/date.scm 988 */
BgL_funz00_13643 = BgL_aux7081z00_13644; }  else 
{ 
obj_t BgL_auxz00_17530;
BgL_auxz00_17530 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)41559)), BGl_string7520z00zz__datez00, BGl_string7602z00zz__datez00, BgL_aux7081z00_13644); 
FAILURE(BgL_auxz00_17530,BFALSE,BFALSE);} } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_13643, ((long)1)))
{ /* Llib/date.scm 988 */
BgL_hourz00_13642 = 
PROCEDURE_ENTRY(BgL_funz00_13643)(BGl_timezd2grammarzd2zz__datez00, BgL_iportz00_11329, BEOA); }  else 
{ /* Llib/date.scm 988 */
FAILURE(BGl_string7603z00zz__datez00,BGl_list7635z00zz__datez00,BgL_funz00_13643);} } 
{ /* Llib/date.scm 988 */
obj_t BgL_minutez00_13645;obj_t BgL_secondz00_13646;
{ /* Llib/date.scm 989 */
int BgL_tmpz00_17541;
BgL_tmpz00_17541 = 
(int)(((long)1)); 
BgL_minutez00_13645 = 
BGL_MVALUES_VAL(BgL_tmpz00_17541); } 
{ /* Llib/date.scm 989 */
int BgL_tmpz00_17544;
BgL_tmpz00_17544 = 
(int)(((long)2)); 
BgL_secondz00_13646 = 
BGL_MVALUES_VAL(BgL_tmpz00_17544); } 
{ /* Llib/date.scm 989 */
obj_t BgL_za7oneza7_13647;
{ /* Llib/date.scm 989 */
obj_t BgL_funz00_13648;
{ /* Llib/date.scm 989 */
obj_t BgL_aux7085z00_13649;
BgL_aux7085z00_13649 = BGl_za7onezd2grammarz75zz__datez00; 
if(
PROCEDUREP(BgL_aux7085z00_13649))
{ /* Llib/date.scm 989 */
BgL_funz00_13648 = BgL_aux7085z00_13649; }  else 
{ 
obj_t BgL_auxz00_17549;
BgL_auxz00_17549 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)41611)), BGl_string7520z00zz__datez00, BGl_string7602z00zz__datez00, BgL_aux7085z00_13649); 
FAILURE(BgL_auxz00_17549,BFALSE,BFALSE);} } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_13648, ((long)1)))
{ /* Llib/date.scm 989 */
BgL_za7oneza7_13647 = 
PROCEDURE_ENTRY(BgL_funz00_13648)(BGl_za7onezd2grammarz75zz__datez00, BgL_iportz00_11329, BEOA); }  else 
{ /* Llib/date.scm 989 */
FAILURE(BGl_string7603z00zz__datez00,BGl_list7638z00zz__datez00,BgL_funz00_13648);} } 
{ /* Llib/date.scm 994 */
obj_t BgL_arg1687z00_13650;
{ /* Llib/date.scm 994 */
bool_t BgL_test8644z00_17560;
{ /* Llib/date.scm 994 */
long BgL_n1z00_13651;
{ /* Llib/date.scm 994 */
obj_t BgL_tmpz00_17561;
if(
INTEGERP(BgL_yearz00_13639))
{ /* Llib/date.scm 994 */
BgL_tmpz00_17561 = BgL_yearz00_13639
; }  else 
{ 
obj_t BgL_auxz00_17564;
BgL_auxz00_17564 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)41743)), BGl_string7520z00zz__datez00, BGl_string7524z00zz__datez00, BgL_yearz00_13639); 
FAILURE(BgL_auxz00_17564,BFALSE,BFALSE);} 
BgL_n1z00_13651 = 
(long)CINT(BgL_tmpz00_17561); } 
BgL_test8644z00_17560 = 
(BgL_n1z00_13651<((long)100)); } 
if(BgL_test8644z00_17560)
{ /* Llib/date.scm 989 */
obj_t BgL_tmpz00_17570;
if(
INTEGERP(BgL_yearz00_13639))
{ /* Llib/date.scm 994 */
BgL_tmpz00_17570 = BgL_yearz00_13639
; }  else 
{ 
obj_t BgL_auxz00_17573;
BgL_auxz00_17573 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)41758)), BGl_string7520z00zz__datez00, BGl_string7524z00zz__datez00, BgL_yearz00_13639); 
FAILURE(BgL_auxz00_17573,BFALSE,BFALSE);} 
BgL_arg1687z00_13650 = 
ADDFX(BgL_tmpz00_17570, 
BINT(((long)2000))); }  else 
{ /* Llib/date.scm 994 */
BgL_arg1687z00_13650 = BgL_yearz00_13639; } } 
if(
BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BgL_za7oneza7_13647))
{ /* Llib/date.scm 233 */
long BgL_auxz00_17635;int BgL_auxz00_17626;int BgL_auxz00_17617;int BgL_auxz00_17608;int BgL_auxz00_17599;int BgL_auxz00_17590;int BgL_tmpz00_17581;
{ /* Llib/date.scm 233 */
obj_t BgL_tmpz00_17636;
if(
INTEGERP(BgL_za7oneza7_13647))
{ /* Llib/date.scm 233 */
BgL_tmpz00_17636 = BgL_za7oneza7_13647
; }  else 
{ 
obj_t BgL_auxz00_17639;
BgL_auxz00_17639 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11085)), BGl_string7520z00zz__datez00, BGl_string7524z00zz__datez00, BgL_za7oneza7_13647); 
FAILURE(BgL_auxz00_17639,BFALSE,BFALSE);} 
BgL_auxz00_17635 = 
(long)CINT(BgL_tmpz00_17636); } 
{ /* Llib/date.scm 233 */
obj_t BgL_tmpz00_17627;
if(
INTEGERP(BgL_arg1687z00_13650))
{ /* Llib/date.scm 233 */
BgL_tmpz00_17627 = BgL_arg1687z00_13650
; }  else 
{ 
obj_t BgL_auxz00_17630;
BgL_auxz00_17630 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11080)), BGl_string7520z00zz__datez00, BGl_string7524z00zz__datez00, BgL_arg1687z00_13650); 
FAILURE(BgL_auxz00_17630,BFALSE,BFALSE);} 
BgL_auxz00_17626 = 
CINT(BgL_tmpz00_17627); } 
{ /* Llib/date.scm 233 */
obj_t BgL_tmpz00_17618;
if(
INTEGERP(BgL_monthz00_13636))
{ /* Llib/date.scm 233 */
BgL_tmpz00_17618 = BgL_monthz00_13636
; }  else 
{ 
obj_t BgL_auxz00_17621;
BgL_auxz00_17621 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11074)), BGl_string7520z00zz__datez00, BGl_string7524z00zz__datez00, BgL_monthz00_13636); 
FAILURE(BgL_auxz00_17621,BFALSE,BFALSE);} 
BgL_auxz00_17617 = 
CINT(BgL_tmpz00_17618); } 
{ /* Llib/date.scm 233 */
obj_t BgL_tmpz00_17609;
if(
INTEGERP(BgL_dayz00_13633))
{ /* Llib/date.scm 233 */
BgL_tmpz00_17609 = BgL_dayz00_13633
; }  else 
{ 
obj_t BgL_auxz00_17612;
BgL_auxz00_17612 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11070)), BGl_string7520z00zz__datez00, BGl_string7524z00zz__datez00, BgL_dayz00_13633); 
FAILURE(BgL_auxz00_17612,BFALSE,BFALSE);} 
BgL_auxz00_17608 = 
CINT(BgL_tmpz00_17609); } 
{ /* Llib/date.scm 233 */
obj_t BgL_tmpz00_17600;
if(
INTEGERP(BgL_hourz00_13642))
{ /* Llib/date.scm 233 */
BgL_tmpz00_17600 = BgL_hourz00_13642
; }  else 
{ 
obj_t BgL_auxz00_17603;
BgL_auxz00_17603 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11065)), BGl_string7520z00zz__datez00, BGl_string7524z00zz__datez00, BgL_hourz00_13642); 
FAILURE(BgL_auxz00_17603,BFALSE,BFALSE);} 
BgL_auxz00_17599 = 
CINT(BgL_tmpz00_17600); } 
{ /* Llib/date.scm 233 */
obj_t BgL_tmpz00_17591;
if(
INTEGERP(BgL_minutez00_13645))
{ /* Llib/date.scm 233 */
BgL_tmpz00_17591 = BgL_minutez00_13645
; }  else 
{ 
obj_t BgL_auxz00_17594;
BgL_auxz00_17594 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11061)), BGl_string7520z00zz__datez00, BGl_string7524z00zz__datez00, BgL_minutez00_13645); 
FAILURE(BgL_auxz00_17594,BFALSE,BFALSE);} 
BgL_auxz00_17590 = 
CINT(BgL_tmpz00_17591); } 
{ /* Llib/date.scm 233 */
obj_t BgL_tmpz00_17582;
if(
INTEGERP(BgL_secondz00_13646))
{ /* Llib/date.scm 233 */
BgL_tmpz00_17582 = BgL_secondz00_13646
; }  else 
{ 
obj_t BgL_auxz00_17585;
BgL_auxz00_17585 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11057)), BGl_string7520z00zz__datez00, BGl_string7524z00zz__datez00, BgL_secondz00_13646); 
FAILURE(BgL_auxz00_17585,BFALSE,BFALSE);} 
BgL_tmpz00_17581 = 
CINT(BgL_tmpz00_17582); } 
return 
bgl_make_date(((BGL_LONGLONG_T)0), BgL_tmpz00_17581, BgL_auxz00_17590, BgL_auxz00_17599, BgL_auxz00_17608, BgL_auxz00_17617, BgL_auxz00_17626, BgL_auxz00_17635, ((bool_t)1), 
(int)(((long)-1)));}  else 
{ /* Llib/date.scm 234 */
int BgL_auxz00_17691;int BgL_auxz00_17682;int BgL_auxz00_17673;int BgL_auxz00_17664;int BgL_auxz00_17655;int BgL_tmpz00_17646;
{ /* Llib/date.scm 234 */
obj_t BgL_tmpz00_17692;
if(
INTEGERP(BgL_arg1687z00_13650))
{ /* Llib/date.scm 234 */
BgL_tmpz00_17692 = BgL_arg1687z00_13650
; }  else 
{ 
obj_t BgL_auxz00_17695;
BgL_auxz00_17695 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11148)), BGl_string7520z00zz__datez00, BGl_string7524z00zz__datez00, BgL_arg1687z00_13650); 
FAILURE(BgL_auxz00_17695,BFALSE,BFALSE);} 
BgL_auxz00_17691 = 
CINT(BgL_tmpz00_17692); } 
{ /* Llib/date.scm 234 */
obj_t BgL_tmpz00_17683;
if(
INTEGERP(BgL_monthz00_13636))
{ /* Llib/date.scm 234 */
BgL_tmpz00_17683 = BgL_monthz00_13636
; }  else 
{ 
obj_t BgL_auxz00_17686;
BgL_auxz00_17686 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11142)), BGl_string7520z00zz__datez00, BGl_string7524z00zz__datez00, BgL_monthz00_13636); 
FAILURE(BgL_auxz00_17686,BFALSE,BFALSE);} 
BgL_auxz00_17682 = 
CINT(BgL_tmpz00_17683); } 
{ /* Llib/date.scm 234 */
obj_t BgL_tmpz00_17674;
if(
INTEGERP(BgL_dayz00_13633))
{ /* Llib/date.scm 234 */
BgL_tmpz00_17674 = BgL_dayz00_13633
; }  else 
{ 
obj_t BgL_auxz00_17677;
BgL_auxz00_17677 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11138)), BGl_string7520z00zz__datez00, BGl_string7524z00zz__datez00, BgL_dayz00_13633); 
FAILURE(BgL_auxz00_17677,BFALSE,BFALSE);} 
BgL_auxz00_17673 = 
CINT(BgL_tmpz00_17674); } 
{ /* Llib/date.scm 234 */
obj_t BgL_tmpz00_17665;
if(
INTEGERP(BgL_hourz00_13642))
{ /* Llib/date.scm 234 */
BgL_tmpz00_17665 = BgL_hourz00_13642
; }  else 
{ 
obj_t BgL_auxz00_17668;
BgL_auxz00_17668 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11133)), BGl_string7520z00zz__datez00, BGl_string7524z00zz__datez00, BgL_hourz00_13642); 
FAILURE(BgL_auxz00_17668,BFALSE,BFALSE);} 
BgL_auxz00_17664 = 
CINT(BgL_tmpz00_17665); } 
{ /* Llib/date.scm 234 */
obj_t BgL_tmpz00_17656;
if(
INTEGERP(BgL_minutez00_13645))
{ /* Llib/date.scm 234 */
BgL_tmpz00_17656 = BgL_minutez00_13645
; }  else 
{ 
obj_t BgL_auxz00_17659;
BgL_auxz00_17659 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11129)), BGl_string7520z00zz__datez00, BGl_string7524z00zz__datez00, BgL_minutez00_13645); 
FAILURE(BgL_auxz00_17659,BFALSE,BFALSE);} 
BgL_auxz00_17655 = 
CINT(BgL_tmpz00_17656); } 
{ /* Llib/date.scm 234 */
obj_t BgL_tmpz00_17647;
if(
INTEGERP(BgL_secondz00_13646))
{ /* Llib/date.scm 234 */
BgL_tmpz00_17647 = BgL_secondz00_13646
; }  else 
{ 
obj_t BgL_auxz00_17650;
BgL_auxz00_17650 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11125)), BGl_string7520z00zz__datez00, BGl_string7524z00zz__datez00, BgL_secondz00_13646); 
FAILURE(BgL_auxz00_17650,BFALSE,BFALSE);} 
BgL_tmpz00_17646 = 
CINT(BgL_tmpz00_17647); } 
return 
bgl_make_date(((BGL_LONGLONG_T)0), BgL_tmpz00_17646, BgL_auxz00_17655, BgL_auxz00_17664, BgL_auxz00_17673, BgL_auxz00_17682, BgL_auxz00_17691, ((long)0), ((bool_t)0), 
(int)(((long)-1)));} } } } } } } } } break;case ((long)0) : 

goto BgL_ignorez00_13599;break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_string7525z00zz__datez00, BGl_string7526z00zz__datez00, 
BINT(BgL_matchz00_13611));} } } } } } 

}



/* date? */
BGL_EXPORTED_DEF bool_t BGl_datezf3zf3zz__datez00(obj_t BgL_objz00_3)
{
{ /* Llib/date.scm 221 */
return 
BGL_DATEP(BgL_objz00_3);} 

}



/* &date? */
obj_t BGl_z62datezf3z91zz__datez00(obj_t BgL_envz00_11330, obj_t BgL_objz00_11331)
{
{ /* Llib/date.scm 221 */
return 
BBOOL(
BGl_datezf3zf3zz__datez00(BgL_objz00_11331));} 

}



/* _make-date */
obj_t BGl__makezd2datezd2zz__datez00(obj_t BgL_env1313z00_14, obj_t BgL_opt1312z00_13)
{
{ /* Llib/date.scm 227 */
{ /* Llib/date.scm 227 */

{ /* Llib/date.scm 227 */
obj_t BgL_dayz00_3526;
BgL_dayz00_3526 = 
BINT(((long)1)); 
{ /* Llib/date.scm 227 */
obj_t BgL_dstz00_3527;
BgL_dstz00_3527 = 
BINT(((long)-1)); 
{ /* Llib/date.scm 227 */
obj_t BgL_hourz00_3528;
BgL_hourz00_3528 = 
BINT(((long)0)); 
{ /* Llib/date.scm 227 */
obj_t BgL_minz00_3529;
BgL_minz00_3529 = 
BINT(((long)0)); 
{ /* Llib/date.scm 227 */
obj_t BgL_monthz00_3530;
BgL_monthz00_3530 = 
BINT(((long)1)); 
{ /* Llib/date.scm 227 */
obj_t BgL_nsecz00_3531;
BgL_nsecz00_3531 = BGl_llong7642z00zz__datez00; 
{ /* Llib/date.scm 227 */
obj_t BgL_secz00_3532;
BgL_secz00_3532 = 
BINT(((long)0)); 
{ /* Llib/date.scm 227 */
obj_t BgL_timeza7oneza7_3533;
BgL_timeza7oneza7_3533 = BFALSE; 
{ /* Llib/date.scm 227 */
obj_t BgL_yearz00_3534;
BgL_yearz00_3534 = 
BINT(((long)1970)); 
{ /* Llib/date.scm 227 */

{ 
long BgL_iz00_3535;
BgL_iz00_3535 = ((long)0); 
BgL_check1316z00_3536:
if(
(BgL_iz00_3535==
VECTOR_LENGTH(BgL_opt1312z00_13)))
{ /* Llib/date.scm 227 */BNIL; }  else 
{ /* Llib/date.scm 227 */
bool_t BgL_test8662z00_17718;
{ /* Llib/date.scm 227 */
obj_t BgL_arg2669z00_3542;
{ /* Llib/date.scm 227 */
bool_t BgL_test8663z00_17719;
{ /* Llib/date.scm 227 */
long BgL_tmpz00_17720;
BgL_tmpz00_17720 = 
VECTOR_LENGTH(BgL_opt1312z00_13); 
BgL_test8663z00_17719 = 
BOUND_CHECK(BgL_iz00_3535, BgL_tmpz00_17720); } 
if(BgL_test8663z00_17719)
{ /* Llib/date.scm 227 */
BgL_arg2669z00_3542 = 
VECTOR_REF(BgL_opt1312z00_13,BgL_iz00_3535); }  else 
{ 
obj_t BgL_auxz00_17724;
BgL_auxz00_17724 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)10881)), BGl_string7643z00zz__datez00, BgL_opt1312z00_13, 
(int)(
VECTOR_LENGTH(BgL_opt1312z00_13)), 
(int)(BgL_iz00_3535)); 
FAILURE(BgL_auxz00_17724,BFALSE,BFALSE);} } 
BgL_test8662z00_17718 = 
CBOOL(
BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_arg2669z00_3542, BGl_list7644z00zz__datez00)); } 
if(BgL_test8662z00_17718)
{ 
long BgL_iz00_17733;
BgL_iz00_17733 = 
(BgL_iz00_3535+((long)2)); 
BgL_iz00_3535 = BgL_iz00_17733; 
goto BgL_check1316z00_3536;}  else 
{ /* Llib/date.scm 227 */
obj_t BgL_arg2667z00_3541;
{ /* Llib/date.scm 227 */
bool_t BgL_test8664z00_17735;
{ /* Llib/date.scm 227 */
long BgL_tmpz00_17736;
BgL_tmpz00_17736 = 
VECTOR_LENGTH(BgL_opt1312z00_13); 
BgL_test8664z00_17735 = 
BOUND_CHECK(BgL_iz00_3535, BgL_tmpz00_17736); } 
if(BgL_test8664z00_17735)
{ /* Llib/date.scm 227 */
BgL_arg2667z00_3541 = 
VECTOR_REF(BgL_opt1312z00_13,BgL_iz00_3535); }  else 
{ 
obj_t BgL_auxz00_17740;
BgL_auxz00_17740 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)10881)), BGl_string7643z00zz__datez00, BgL_opt1312z00_13, 
(int)(
VECTOR_LENGTH(BgL_opt1312z00_13)), 
(int)(BgL_iz00_3535)); 
FAILURE(BgL_auxz00_17740,BFALSE,BFALSE);} } 
BGl_errorz00zz__errorz00(BGl_symbol7663z00zz__datez00, BGl_string7665z00zz__datez00, BgL_arg2667z00_3541); } } } 
{ /* Llib/date.scm 227 */
obj_t BgL_index1318z00_3543;
BgL_index1318z00_3543 = 
BGl_search1315ze70ze7zz__datez00(
VECTOR_LENGTH(BgL_opt1312z00_13), BgL_opt1312z00_13, BGl_keyword7645z00zz__datez00, ((long)0)); 
{ /* Llib/date.scm 227 */
bool_t BgL_test8665z00_17750;
{ /* Llib/date.scm 227 */
long BgL_n1z00_8802;
{ /* Llib/date.scm 227 */
obj_t BgL_tmpz00_17751;
if(
INTEGERP(BgL_index1318z00_3543))
{ /* Llib/date.scm 227 */
BgL_tmpz00_17751 = BgL_index1318z00_3543
; }  else 
{ 
obj_t BgL_auxz00_17754;
BgL_auxz00_17754 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)10881)), BGl_string7666z00zz__datez00, BGl_string7524z00zz__datez00, BgL_index1318z00_3543); 
FAILURE(BgL_auxz00_17754,BFALSE,BFALSE);} 
BgL_n1z00_8802 = 
(long)CINT(BgL_tmpz00_17751); } 
BgL_test8665z00_17750 = 
(BgL_n1z00_8802>=((long)0)); } 
if(BgL_test8665z00_17750)
{ 
long BgL_auxz00_17760;
{ /* Llib/date.scm 227 */
obj_t BgL_tmpz00_17761;
if(
INTEGERP(BgL_index1318z00_3543))
{ /* Llib/date.scm 227 */
BgL_tmpz00_17761 = BgL_index1318z00_3543
; }  else 
{ 
obj_t BgL_auxz00_17764;
BgL_auxz00_17764 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)10881)), BGl_string7666z00zz__datez00, BGl_string7524z00zz__datez00, BgL_index1318z00_3543); 
FAILURE(BgL_auxz00_17764,BFALSE,BFALSE);} 
BgL_auxz00_17760 = 
(long)CINT(BgL_tmpz00_17761); } 
BgL_dayz00_3526 = 
VECTOR_REF(BgL_opt1312z00_13,BgL_auxz00_17760); }  else 
{ /* Llib/date.scm 227 */BFALSE; } } } 
{ /* Llib/date.scm 227 */
obj_t BgL_index1319z00_3545;
BgL_index1319z00_3545 = 
BGl_search1315ze70ze7zz__datez00(
VECTOR_LENGTH(BgL_opt1312z00_13), BgL_opt1312z00_13, BGl_keyword7647z00zz__datez00, ((long)0)); 
{ /* Llib/date.scm 227 */
bool_t BgL_test8668z00_17772;
{ /* Llib/date.scm 227 */
long BgL_n1z00_8804;
{ /* Llib/date.scm 227 */
obj_t BgL_tmpz00_17773;
if(
INTEGERP(BgL_index1319z00_3545))
{ /* Llib/date.scm 227 */
BgL_tmpz00_17773 = BgL_index1319z00_3545
; }  else 
{ 
obj_t BgL_auxz00_17776;
BgL_auxz00_17776 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)10881)), BGl_string7666z00zz__datez00, BGl_string7524z00zz__datez00, BgL_index1319z00_3545); 
FAILURE(BgL_auxz00_17776,BFALSE,BFALSE);} 
BgL_n1z00_8804 = 
(long)CINT(BgL_tmpz00_17773); } 
BgL_test8668z00_17772 = 
(BgL_n1z00_8804>=((long)0)); } 
if(BgL_test8668z00_17772)
{ 
long BgL_auxz00_17782;
{ /* Llib/date.scm 227 */
obj_t BgL_tmpz00_17783;
if(
INTEGERP(BgL_index1319z00_3545))
{ /* Llib/date.scm 227 */
BgL_tmpz00_17783 = BgL_index1319z00_3545
; }  else 
{ 
obj_t BgL_auxz00_17786;
BgL_auxz00_17786 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)10881)), BGl_string7666z00zz__datez00, BGl_string7524z00zz__datez00, BgL_index1319z00_3545); 
FAILURE(BgL_auxz00_17786,BFALSE,BFALSE);} 
BgL_auxz00_17782 = 
(long)CINT(BgL_tmpz00_17783); } 
BgL_dstz00_3527 = 
VECTOR_REF(BgL_opt1312z00_13,BgL_auxz00_17782); }  else 
{ /* Llib/date.scm 227 */BFALSE; } } } 
{ /* Llib/date.scm 227 */
obj_t BgL_index1320z00_3547;
BgL_index1320z00_3547 = 
BGl_search1315ze70ze7zz__datez00(
VECTOR_LENGTH(BgL_opt1312z00_13), BgL_opt1312z00_13, BGl_keyword7649z00zz__datez00, ((long)0)); 
{ /* Llib/date.scm 227 */
bool_t BgL_test8671z00_17794;
{ /* Llib/date.scm 227 */
long BgL_n1z00_8806;
{ /* Llib/date.scm 227 */
obj_t BgL_tmpz00_17795;
if(
INTEGERP(BgL_index1320z00_3547))
{ /* Llib/date.scm 227 */
BgL_tmpz00_17795 = BgL_index1320z00_3547
; }  else 
{ 
obj_t BgL_auxz00_17798;
BgL_auxz00_17798 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)10881)), BGl_string7666z00zz__datez00, BGl_string7524z00zz__datez00, BgL_index1320z00_3547); 
FAILURE(BgL_auxz00_17798,BFALSE,BFALSE);} 
BgL_n1z00_8806 = 
(long)CINT(BgL_tmpz00_17795); } 
BgL_test8671z00_17794 = 
(BgL_n1z00_8806>=((long)0)); } 
if(BgL_test8671z00_17794)
{ 
long BgL_auxz00_17804;
{ /* Llib/date.scm 227 */
obj_t BgL_tmpz00_17805;
if(
INTEGERP(BgL_index1320z00_3547))
{ /* Llib/date.scm 227 */
BgL_tmpz00_17805 = BgL_index1320z00_3547
; }  else 
{ 
obj_t BgL_auxz00_17808;
BgL_auxz00_17808 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)10881)), BGl_string7666z00zz__datez00, BGl_string7524z00zz__datez00, BgL_index1320z00_3547); 
FAILURE(BgL_auxz00_17808,BFALSE,BFALSE);} 
BgL_auxz00_17804 = 
(long)CINT(BgL_tmpz00_17805); } 
BgL_hourz00_3528 = 
VECTOR_REF(BgL_opt1312z00_13,BgL_auxz00_17804); }  else 
{ /* Llib/date.scm 227 */BFALSE; } } } 
{ /* Llib/date.scm 227 */
obj_t BgL_index1321z00_3549;
BgL_index1321z00_3549 = 
BGl_search1315ze70ze7zz__datez00(
VECTOR_LENGTH(BgL_opt1312z00_13), BgL_opt1312z00_13, BGl_keyword7651z00zz__datez00, ((long)0)); 
{ /* Llib/date.scm 227 */
bool_t BgL_test8674z00_17816;
{ /* Llib/date.scm 227 */
long BgL_n1z00_8808;
{ /* Llib/date.scm 227 */
obj_t BgL_tmpz00_17817;
if(
INTEGERP(BgL_index1321z00_3549))
{ /* Llib/date.scm 227 */
BgL_tmpz00_17817 = BgL_index1321z00_3549
; }  else 
{ 
obj_t BgL_auxz00_17820;
BgL_auxz00_17820 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)10881)), BGl_string7666z00zz__datez00, BGl_string7524z00zz__datez00, BgL_index1321z00_3549); 
FAILURE(BgL_auxz00_17820,BFALSE,BFALSE);} 
BgL_n1z00_8808 = 
(long)CINT(BgL_tmpz00_17817); } 
BgL_test8674z00_17816 = 
(BgL_n1z00_8808>=((long)0)); } 
if(BgL_test8674z00_17816)
{ 
long BgL_auxz00_17826;
{ /* Llib/date.scm 227 */
obj_t BgL_tmpz00_17827;
if(
INTEGERP(BgL_index1321z00_3549))
{ /* Llib/date.scm 227 */
BgL_tmpz00_17827 = BgL_index1321z00_3549
; }  else 
{ 
obj_t BgL_auxz00_17830;
BgL_auxz00_17830 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)10881)), BGl_string7666z00zz__datez00, BGl_string7524z00zz__datez00, BgL_index1321z00_3549); 
FAILURE(BgL_auxz00_17830,BFALSE,BFALSE);} 
BgL_auxz00_17826 = 
(long)CINT(BgL_tmpz00_17827); } 
BgL_minz00_3529 = 
VECTOR_REF(BgL_opt1312z00_13,BgL_auxz00_17826); }  else 
{ /* Llib/date.scm 227 */BFALSE; } } } 
{ /* Llib/date.scm 227 */
obj_t BgL_index1322z00_3551;
BgL_index1322z00_3551 = 
BGl_search1315ze70ze7zz__datez00(
VECTOR_LENGTH(BgL_opt1312z00_13), BgL_opt1312z00_13, BGl_keyword7653z00zz__datez00, ((long)0)); 
{ /* Llib/date.scm 227 */
bool_t BgL_test8677z00_17838;
{ /* Llib/date.scm 227 */
long BgL_n1z00_8810;
{ /* Llib/date.scm 227 */
obj_t BgL_tmpz00_17839;
if(
INTEGERP(BgL_index1322z00_3551))
{ /* Llib/date.scm 227 */
BgL_tmpz00_17839 = BgL_index1322z00_3551
; }  else 
{ 
obj_t BgL_auxz00_17842;
BgL_auxz00_17842 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)10881)), BGl_string7666z00zz__datez00, BGl_string7524z00zz__datez00, BgL_index1322z00_3551); 
FAILURE(BgL_auxz00_17842,BFALSE,BFALSE);} 
BgL_n1z00_8810 = 
(long)CINT(BgL_tmpz00_17839); } 
BgL_test8677z00_17838 = 
(BgL_n1z00_8810>=((long)0)); } 
if(BgL_test8677z00_17838)
{ 
long BgL_auxz00_17848;
{ /* Llib/date.scm 227 */
obj_t BgL_tmpz00_17849;
if(
INTEGERP(BgL_index1322z00_3551))
{ /* Llib/date.scm 227 */
BgL_tmpz00_17849 = BgL_index1322z00_3551
; }  else 
{ 
obj_t BgL_auxz00_17852;
BgL_auxz00_17852 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)10881)), BGl_string7666z00zz__datez00, BGl_string7524z00zz__datez00, BgL_index1322z00_3551); 
FAILURE(BgL_auxz00_17852,BFALSE,BFALSE);} 
BgL_auxz00_17848 = 
(long)CINT(BgL_tmpz00_17849); } 
BgL_monthz00_3530 = 
VECTOR_REF(BgL_opt1312z00_13,BgL_auxz00_17848); }  else 
{ /* Llib/date.scm 227 */BFALSE; } } } 
{ /* Llib/date.scm 227 */
obj_t BgL_index1323z00_3553;
BgL_index1323z00_3553 = 
BGl_search1315ze70ze7zz__datez00(
VECTOR_LENGTH(BgL_opt1312z00_13), BgL_opt1312z00_13, BGl_keyword7655z00zz__datez00, ((long)0)); 
{ /* Llib/date.scm 227 */
bool_t BgL_test8680z00_17860;
{ /* Llib/date.scm 227 */
long BgL_n1z00_8812;
{ /* Llib/date.scm 227 */
obj_t BgL_tmpz00_17861;
if(
INTEGERP(BgL_index1323z00_3553))
{ /* Llib/date.scm 227 */
BgL_tmpz00_17861 = BgL_index1323z00_3553
; }  else 
{ 
obj_t BgL_auxz00_17864;
BgL_auxz00_17864 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)10881)), BGl_string7666z00zz__datez00, BGl_string7524z00zz__datez00, BgL_index1323z00_3553); 
FAILURE(BgL_auxz00_17864,BFALSE,BFALSE);} 
BgL_n1z00_8812 = 
(long)CINT(BgL_tmpz00_17861); } 
BgL_test8680z00_17860 = 
(BgL_n1z00_8812>=((long)0)); } 
if(BgL_test8680z00_17860)
{ 
long BgL_auxz00_17870;
{ /* Llib/date.scm 227 */
obj_t BgL_tmpz00_17871;
if(
INTEGERP(BgL_index1323z00_3553))
{ /* Llib/date.scm 227 */
BgL_tmpz00_17871 = BgL_index1323z00_3553
; }  else 
{ 
obj_t BgL_auxz00_17874;
BgL_auxz00_17874 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)10881)), BGl_string7666z00zz__datez00, BGl_string7524z00zz__datez00, BgL_index1323z00_3553); 
FAILURE(BgL_auxz00_17874,BFALSE,BFALSE);} 
BgL_auxz00_17870 = 
(long)CINT(BgL_tmpz00_17871); } 
BgL_nsecz00_3531 = 
VECTOR_REF(BgL_opt1312z00_13,BgL_auxz00_17870); }  else 
{ /* Llib/date.scm 227 */BFALSE; } } } 
{ /* Llib/date.scm 227 */
obj_t BgL_index1324z00_3555;
BgL_index1324z00_3555 = 
BGl_search1315ze70ze7zz__datez00(
VECTOR_LENGTH(BgL_opt1312z00_13), BgL_opt1312z00_13, BGl_keyword7657z00zz__datez00, ((long)0)); 
{ /* Llib/date.scm 227 */
bool_t BgL_test8683z00_17882;
{ /* Llib/date.scm 227 */
long BgL_n1z00_8814;
{ /* Llib/date.scm 227 */
obj_t BgL_tmpz00_17883;
if(
INTEGERP(BgL_index1324z00_3555))
{ /* Llib/date.scm 227 */
BgL_tmpz00_17883 = BgL_index1324z00_3555
; }  else 
{ 
obj_t BgL_auxz00_17886;
BgL_auxz00_17886 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)10881)), BGl_string7666z00zz__datez00, BGl_string7524z00zz__datez00, BgL_index1324z00_3555); 
FAILURE(BgL_auxz00_17886,BFALSE,BFALSE);} 
BgL_n1z00_8814 = 
(long)CINT(BgL_tmpz00_17883); } 
BgL_test8683z00_17882 = 
(BgL_n1z00_8814>=((long)0)); } 
if(BgL_test8683z00_17882)
{ 
long BgL_auxz00_17892;
{ /* Llib/date.scm 227 */
obj_t BgL_tmpz00_17893;
if(
INTEGERP(BgL_index1324z00_3555))
{ /* Llib/date.scm 227 */
BgL_tmpz00_17893 = BgL_index1324z00_3555
; }  else 
{ 
obj_t BgL_auxz00_17896;
BgL_auxz00_17896 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)10881)), BGl_string7666z00zz__datez00, BGl_string7524z00zz__datez00, BgL_index1324z00_3555); 
FAILURE(BgL_auxz00_17896,BFALSE,BFALSE);} 
BgL_auxz00_17892 = 
(long)CINT(BgL_tmpz00_17893); } 
BgL_secz00_3532 = 
VECTOR_REF(BgL_opt1312z00_13,BgL_auxz00_17892); }  else 
{ /* Llib/date.scm 227 */BFALSE; } } } 
{ /* Llib/date.scm 227 */
obj_t BgL_index1325z00_3557;
BgL_index1325z00_3557 = 
BGl_search1315ze70ze7zz__datez00(
VECTOR_LENGTH(BgL_opt1312z00_13), BgL_opt1312z00_13, BGl_keyword7659z00zz__datez00, ((long)0)); 
{ /* Llib/date.scm 227 */
bool_t BgL_test8686z00_17904;
{ /* Llib/date.scm 227 */
long BgL_n1z00_8816;
{ /* Llib/date.scm 227 */
obj_t BgL_tmpz00_17905;
if(
INTEGERP(BgL_index1325z00_3557))
{ /* Llib/date.scm 227 */
BgL_tmpz00_17905 = BgL_index1325z00_3557
; }  else 
{ 
obj_t BgL_auxz00_17908;
BgL_auxz00_17908 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)10881)), BGl_string7666z00zz__datez00, BGl_string7524z00zz__datez00, BgL_index1325z00_3557); 
FAILURE(BgL_auxz00_17908,BFALSE,BFALSE);} 
BgL_n1z00_8816 = 
(long)CINT(BgL_tmpz00_17905); } 
BgL_test8686z00_17904 = 
(BgL_n1z00_8816>=((long)0)); } 
if(BgL_test8686z00_17904)
{ 
long BgL_auxz00_17914;
{ /* Llib/date.scm 227 */
obj_t BgL_tmpz00_17915;
if(
INTEGERP(BgL_index1325z00_3557))
{ /* Llib/date.scm 227 */
BgL_tmpz00_17915 = BgL_index1325z00_3557
; }  else 
{ 
obj_t BgL_auxz00_17918;
BgL_auxz00_17918 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)10881)), BGl_string7666z00zz__datez00, BGl_string7524z00zz__datez00, BgL_index1325z00_3557); 
FAILURE(BgL_auxz00_17918,BFALSE,BFALSE);} 
BgL_auxz00_17914 = 
(long)CINT(BgL_tmpz00_17915); } 
BgL_timeza7oneza7_3533 = 
VECTOR_REF(BgL_opt1312z00_13,BgL_auxz00_17914); }  else 
{ /* Llib/date.scm 227 */BFALSE; } } } 
{ /* Llib/date.scm 227 */
obj_t BgL_index1326z00_3559;
BgL_index1326z00_3559 = 
BGl_search1315ze70ze7zz__datez00(
VECTOR_LENGTH(BgL_opt1312z00_13), BgL_opt1312z00_13, BGl_keyword7661z00zz__datez00, ((long)0)); 
{ /* Llib/date.scm 227 */
bool_t BgL_test8689z00_17926;
{ /* Llib/date.scm 227 */
long BgL_n1z00_8818;
{ /* Llib/date.scm 227 */
obj_t BgL_tmpz00_17927;
if(
INTEGERP(BgL_index1326z00_3559))
{ /* Llib/date.scm 227 */
BgL_tmpz00_17927 = BgL_index1326z00_3559
; }  else 
{ 
obj_t BgL_auxz00_17930;
BgL_auxz00_17930 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)10881)), BGl_string7666z00zz__datez00, BGl_string7524z00zz__datez00, BgL_index1326z00_3559); 
FAILURE(BgL_auxz00_17930,BFALSE,BFALSE);} 
BgL_n1z00_8818 = 
(long)CINT(BgL_tmpz00_17927); } 
BgL_test8689z00_17926 = 
(BgL_n1z00_8818>=((long)0)); } 
if(BgL_test8689z00_17926)
{ 
long BgL_auxz00_17936;
{ /* Llib/date.scm 227 */
obj_t BgL_tmpz00_17937;
if(
INTEGERP(BgL_index1326z00_3559))
{ /* Llib/date.scm 227 */
BgL_tmpz00_17937 = BgL_index1326z00_3559
; }  else 
{ 
obj_t BgL_auxz00_17940;
BgL_auxz00_17940 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)10881)), BGl_string7666z00zz__datez00, BGl_string7524z00zz__datez00, BgL_index1326z00_3559); 
FAILURE(BgL_auxz00_17940,BFALSE,BFALSE);} 
BgL_auxz00_17936 = 
(long)CINT(BgL_tmpz00_17937); } 
BgL_yearz00_3534 = 
VECTOR_REF(BgL_opt1312z00_13,BgL_auxz00_17936); }  else 
{ /* Llib/date.scm 227 */BFALSE; } } } 
{ /* Llib/date.scm 227 */
obj_t BgL_dayz00_3561;
BgL_dayz00_3561 = BgL_dayz00_3526; 
{ /* Llib/date.scm 227 */
obj_t BgL_dstz00_3562;
BgL_dstz00_3562 = BgL_dstz00_3527; 
{ /* Llib/date.scm 227 */
obj_t BgL_hourz00_3563;
BgL_hourz00_3563 = BgL_hourz00_3528; 
{ /* Llib/date.scm 227 */
obj_t BgL_minz00_3564;
BgL_minz00_3564 = BgL_minz00_3529; 
{ /* Llib/date.scm 227 */
obj_t BgL_monthz00_3565;
BgL_monthz00_3565 = BgL_monthz00_3530; 
{ /* Llib/date.scm 227 */
obj_t BgL_nsecz00_3566;
BgL_nsecz00_3566 = BgL_nsecz00_3531; 
{ /* Llib/date.scm 227 */
obj_t BgL_secz00_3567;
BgL_secz00_3567 = BgL_secz00_3532; 
{ /* Llib/date.scm 227 */
obj_t BgL_timeza7oneza7_3568;
BgL_timeza7oneza7_3568 = BgL_timeza7oneza7_3533; 
{ /* Llib/date.scm 227 */
obj_t BgL_yearz00_3569;
BgL_yearz00_3569 = BgL_yearz00_3534; 
if(
BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BgL_timeza7oneza7_3568))
{ /* Llib/date.scm 233 */
int BgL_auxz00_18020;long BgL_auxz00_18011;int BgL_auxz00_18002;int BgL_auxz00_17993;int BgL_auxz00_17984;int BgL_auxz00_17975;int BgL_auxz00_17966;int BgL_auxz00_17957;BGL_LONGLONG_T BgL_tmpz00_17948;
{ /* Llib/date.scm 233 */
obj_t BgL_tmpz00_18021;
if(
INTEGERP(BgL_dstz00_3562))
{ /* Llib/date.scm 233 */
BgL_tmpz00_18021 = BgL_dstz00_3562
; }  else 
{ 
obj_t BgL_auxz00_18024;
BgL_auxz00_18024 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11097)), BGl_string7666z00zz__datez00, BGl_string7524z00zz__datez00, BgL_dstz00_3562); 
FAILURE(BgL_auxz00_18024,BFALSE,BFALSE);} 
BgL_auxz00_18020 = 
CINT(BgL_tmpz00_18021); } 
{ /* Llib/date.scm 233 */
obj_t BgL_tmpz00_18012;
if(
INTEGERP(BgL_timeza7oneza7_3568))
{ /* Llib/date.scm 233 */
BgL_tmpz00_18012 = BgL_timeza7oneza7_3568
; }  else 
{ 
obj_t BgL_auxz00_18015;
BgL_auxz00_18015 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11085)), BGl_string7666z00zz__datez00, BGl_string7524z00zz__datez00, BgL_timeza7oneza7_3568); 
FAILURE(BgL_auxz00_18015,BFALSE,BFALSE);} 
BgL_auxz00_18011 = 
(long)CINT(BgL_tmpz00_18012); } 
{ /* Llib/date.scm 233 */
obj_t BgL_tmpz00_18003;
if(
INTEGERP(BgL_yearz00_3569))
{ /* Llib/date.scm 233 */
BgL_tmpz00_18003 = BgL_yearz00_3569
; }  else 
{ 
obj_t BgL_auxz00_18006;
BgL_auxz00_18006 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11080)), BGl_string7666z00zz__datez00, BGl_string7524z00zz__datez00, BgL_yearz00_3569); 
FAILURE(BgL_auxz00_18006,BFALSE,BFALSE);} 
BgL_auxz00_18002 = 
CINT(BgL_tmpz00_18003); } 
{ /* Llib/date.scm 233 */
obj_t BgL_tmpz00_17994;
if(
INTEGERP(BgL_monthz00_3565))
{ /* Llib/date.scm 233 */
BgL_tmpz00_17994 = BgL_monthz00_3565
; }  else 
{ 
obj_t BgL_auxz00_17997;
BgL_auxz00_17997 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11074)), BGl_string7666z00zz__datez00, BGl_string7524z00zz__datez00, BgL_monthz00_3565); 
FAILURE(BgL_auxz00_17997,BFALSE,BFALSE);} 
BgL_auxz00_17993 = 
CINT(BgL_tmpz00_17994); } 
{ /* Llib/date.scm 233 */
obj_t BgL_tmpz00_17985;
if(
INTEGERP(BgL_dayz00_3561))
{ /* Llib/date.scm 233 */
BgL_tmpz00_17985 = BgL_dayz00_3561
; }  else 
{ 
obj_t BgL_auxz00_17988;
BgL_auxz00_17988 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11070)), BGl_string7666z00zz__datez00, BGl_string7524z00zz__datez00, BgL_dayz00_3561); 
FAILURE(BgL_auxz00_17988,BFALSE,BFALSE);} 
BgL_auxz00_17984 = 
CINT(BgL_tmpz00_17985); } 
{ /* Llib/date.scm 233 */
obj_t BgL_tmpz00_17976;
if(
INTEGERP(BgL_hourz00_3563))
{ /* Llib/date.scm 233 */
BgL_tmpz00_17976 = BgL_hourz00_3563
; }  else 
{ 
obj_t BgL_auxz00_17979;
BgL_auxz00_17979 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11065)), BGl_string7666z00zz__datez00, BGl_string7524z00zz__datez00, BgL_hourz00_3563); 
FAILURE(BgL_auxz00_17979,BFALSE,BFALSE);} 
BgL_auxz00_17975 = 
CINT(BgL_tmpz00_17976); } 
{ /* Llib/date.scm 233 */
obj_t BgL_tmpz00_17967;
if(
INTEGERP(BgL_minz00_3564))
{ /* Llib/date.scm 233 */
BgL_tmpz00_17967 = BgL_minz00_3564
; }  else 
{ 
obj_t BgL_auxz00_17970;
BgL_auxz00_17970 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11061)), BGl_string7666z00zz__datez00, BGl_string7524z00zz__datez00, BgL_minz00_3564); 
FAILURE(BgL_auxz00_17970,BFALSE,BFALSE);} 
BgL_auxz00_17966 = 
CINT(BgL_tmpz00_17967); } 
{ /* Llib/date.scm 233 */
obj_t BgL_tmpz00_17958;
if(
INTEGERP(BgL_secz00_3567))
{ /* Llib/date.scm 233 */
BgL_tmpz00_17958 = BgL_secz00_3567
; }  else 
{ 
obj_t BgL_auxz00_17961;
BgL_auxz00_17961 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11057)), BGl_string7666z00zz__datez00, BGl_string7524z00zz__datez00, BgL_secz00_3567); 
FAILURE(BgL_auxz00_17961,BFALSE,BFALSE);} 
BgL_auxz00_17957 = 
CINT(BgL_tmpz00_17958); } 
{ /* Llib/date.scm 233 */
obj_t BgL_tmpz00_17949;
if(
LLONGP(BgL_nsecz00_3566))
{ /* Llib/date.scm 233 */
BgL_tmpz00_17949 = BgL_nsecz00_3566
; }  else 
{ 
obj_t BgL_auxz00_17952;
BgL_auxz00_17952 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11052)), BGl_string7666z00zz__datez00, BGl_string7667z00zz__datez00, BgL_nsecz00_3566); 
FAILURE(BgL_auxz00_17952,BFALSE,BFALSE);} 
BgL_tmpz00_17948 = 
BLLONG_TO_LLONG(BgL_tmpz00_17949); } 
return 
bgl_make_date(BgL_tmpz00_17948, BgL_auxz00_17957, BgL_auxz00_17966, BgL_auxz00_17975, BgL_auxz00_17984, BgL_auxz00_17993, BgL_auxz00_18002, BgL_auxz00_18011, ((bool_t)1), BgL_auxz00_18020);}  else 
{ /* Llib/date.scm 234 */
int BgL_auxz00_18093;int BgL_auxz00_18084;int BgL_auxz00_18075;int BgL_auxz00_18066;int BgL_auxz00_18057;int BgL_auxz00_18048;int BgL_auxz00_18039;BGL_LONGLONG_T BgL_tmpz00_18030;
{ /* Llib/date.scm 234 */
obj_t BgL_tmpz00_18094;
if(
INTEGERP(BgL_dstz00_3562))
{ /* Llib/date.scm 234 */
BgL_tmpz00_18094 = BgL_dstz00_3562
; }  else 
{ 
obj_t BgL_auxz00_18097;
BgL_auxz00_18097 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11158)), BGl_string7666z00zz__datez00, BGl_string7524z00zz__datez00, BgL_dstz00_3562); 
FAILURE(BgL_auxz00_18097,BFALSE,BFALSE);} 
BgL_auxz00_18093 = 
CINT(BgL_tmpz00_18094); } 
{ /* Llib/date.scm 234 */
obj_t BgL_tmpz00_18085;
if(
INTEGERP(BgL_yearz00_3569))
{ /* Llib/date.scm 234 */
BgL_tmpz00_18085 = BgL_yearz00_3569
; }  else 
{ 
obj_t BgL_auxz00_18088;
BgL_auxz00_18088 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11148)), BGl_string7666z00zz__datez00, BGl_string7524z00zz__datez00, BgL_yearz00_3569); 
FAILURE(BgL_auxz00_18088,BFALSE,BFALSE);} 
BgL_auxz00_18084 = 
CINT(BgL_tmpz00_18085); } 
{ /* Llib/date.scm 234 */
obj_t BgL_tmpz00_18076;
if(
INTEGERP(BgL_monthz00_3565))
{ /* Llib/date.scm 234 */
BgL_tmpz00_18076 = BgL_monthz00_3565
; }  else 
{ 
obj_t BgL_auxz00_18079;
BgL_auxz00_18079 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11142)), BGl_string7666z00zz__datez00, BGl_string7524z00zz__datez00, BgL_monthz00_3565); 
FAILURE(BgL_auxz00_18079,BFALSE,BFALSE);} 
BgL_auxz00_18075 = 
CINT(BgL_tmpz00_18076); } 
{ /* Llib/date.scm 234 */
obj_t BgL_tmpz00_18067;
if(
INTEGERP(BgL_dayz00_3561))
{ /* Llib/date.scm 234 */
BgL_tmpz00_18067 = BgL_dayz00_3561
; }  else 
{ 
obj_t BgL_auxz00_18070;
BgL_auxz00_18070 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11138)), BGl_string7666z00zz__datez00, BGl_string7524z00zz__datez00, BgL_dayz00_3561); 
FAILURE(BgL_auxz00_18070,BFALSE,BFALSE);} 
BgL_auxz00_18066 = 
CINT(BgL_tmpz00_18067); } 
{ /* Llib/date.scm 234 */
obj_t BgL_tmpz00_18058;
if(
INTEGERP(BgL_hourz00_3563))
{ /* Llib/date.scm 234 */
BgL_tmpz00_18058 = BgL_hourz00_3563
; }  else 
{ 
obj_t BgL_auxz00_18061;
BgL_auxz00_18061 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11133)), BGl_string7666z00zz__datez00, BGl_string7524z00zz__datez00, BgL_hourz00_3563); 
FAILURE(BgL_auxz00_18061,BFALSE,BFALSE);} 
BgL_auxz00_18057 = 
CINT(BgL_tmpz00_18058); } 
{ /* Llib/date.scm 234 */
obj_t BgL_tmpz00_18049;
if(
INTEGERP(BgL_minz00_3564))
{ /* Llib/date.scm 234 */
BgL_tmpz00_18049 = BgL_minz00_3564
; }  else 
{ 
obj_t BgL_auxz00_18052;
BgL_auxz00_18052 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11129)), BGl_string7666z00zz__datez00, BGl_string7524z00zz__datez00, BgL_minz00_3564); 
FAILURE(BgL_auxz00_18052,BFALSE,BFALSE);} 
BgL_auxz00_18048 = 
CINT(BgL_tmpz00_18049); } 
{ /* Llib/date.scm 234 */
obj_t BgL_tmpz00_18040;
if(
INTEGERP(BgL_secz00_3567))
{ /* Llib/date.scm 234 */
BgL_tmpz00_18040 = BgL_secz00_3567
; }  else 
{ 
obj_t BgL_auxz00_18043;
BgL_auxz00_18043 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11125)), BGl_string7666z00zz__datez00, BGl_string7524z00zz__datez00, BgL_secz00_3567); 
FAILURE(BgL_auxz00_18043,BFALSE,BFALSE);} 
BgL_auxz00_18039 = 
CINT(BgL_tmpz00_18040); } 
{ /* Llib/date.scm 234 */
obj_t BgL_tmpz00_18031;
if(
LLONGP(BgL_nsecz00_3566))
{ /* Llib/date.scm 234 */
BgL_tmpz00_18031 = BgL_nsecz00_3566
; }  else 
{ 
obj_t BgL_auxz00_18034;
BgL_auxz00_18034 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11120)), BGl_string7666z00zz__datez00, BGl_string7667z00zz__datez00, BgL_nsecz00_3566); 
FAILURE(BgL_auxz00_18034,BFALSE,BFALSE);} 
BgL_tmpz00_18030 = 
BLLONG_TO_LLONG(BgL_tmpz00_18031); } 
return 
bgl_make_date(BgL_tmpz00_18030, BgL_auxz00_18039, BgL_auxz00_18048, BgL_auxz00_18057, BgL_auxz00_18066, BgL_auxz00_18075, BgL_auxz00_18084, ((long)0), ((bool_t)0), BgL_auxz00_18093);} } } } } } } } } } } } } } } } } } } } } } 

}



/* search1315~0 */
obj_t BGl_search1315ze70ze7zz__datez00(long BgL_l1314z00_11445, obj_t BgL_opt1312z00_11444, obj_t BgL_k1z00_3523, long BgL_iz00_3524)
{
{ /* Llib/date.scm 227 */
BGl_search1315ze70ze7zz__datez00:
if(
(BgL_iz00_3524==BgL_l1314z00_11445))
{ /* Llib/date.scm 227 */
return 
BINT(((long)-1));}  else 
{ /* Llib/date.scm 227 */
if(
(BgL_iz00_3524==
(BgL_l1314z00_11445-((long)1))))
{ /* Llib/date.scm 227 */
return 
BGl_errorz00zz__errorz00(BGl_symbol7663z00zz__datez00, BGl_string7668z00zz__datez00, 
BINT(
VECTOR_LENGTH(BgL_opt1312z00_11444)));}  else 
{ /* Llib/date.scm 227 */
obj_t BgL_vz00_3574;
BgL_vz00_3574 = 
VECTOR_REF(BgL_opt1312z00_11444,BgL_iz00_3524); 
if(
(BgL_vz00_3574==BgL_k1z00_3523))
{ /* Llib/date.scm 227 */
return 
BINT(
(BgL_iz00_3524+((long)1)));}  else 
{ 
long BgL_iz00_18117;
BgL_iz00_18117 = 
(BgL_iz00_3524+((long)2)); 
BgL_iz00_3524 = BgL_iz00_18117; 
goto BGl_search1315ze70ze7zz__datez00;} } } } 

}



/* make-date */
BGL_EXPORTED_DEF obj_t BGl_makezd2datezd2zz__datez00(obj_t BgL_dayz00_4, obj_t BgL_dstz00_5, obj_t BgL_hourz00_6, obj_t BgL_minz00_7, obj_t BgL_monthz00_8, obj_t BgL_nsecz00_9, obj_t BgL_secz00_10, obj_t BgL_timeza7oneza7_11, obj_t BgL_yearz00_12)
{
{ /* Llib/date.scm 227 */
if(
BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BgL_timeza7oneza7_11))
{ /* Llib/date.scm 233 */
int BgL_auxz00_18193;long BgL_auxz00_18184;int BgL_auxz00_18175;int BgL_auxz00_18166;int BgL_auxz00_18157;int BgL_auxz00_18148;int BgL_auxz00_18139;int BgL_auxz00_18130;BGL_LONGLONG_T BgL_tmpz00_18121;
{ /* Llib/date.scm 233 */
obj_t BgL_tmpz00_18194;
if(
INTEGERP(BgL_dstz00_5))
{ /* Llib/date.scm 233 */
BgL_tmpz00_18194 = BgL_dstz00_5
; }  else 
{ 
obj_t BgL_auxz00_18197;
BgL_auxz00_18197 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11097)), BGl_string7664z00zz__datez00, BGl_string7524z00zz__datez00, BgL_dstz00_5); 
FAILURE(BgL_auxz00_18197,BFALSE,BFALSE);} 
BgL_auxz00_18193 = 
CINT(BgL_tmpz00_18194); } 
{ /* Llib/date.scm 233 */
obj_t BgL_tmpz00_18185;
if(
INTEGERP(BgL_timeza7oneza7_11))
{ /* Llib/date.scm 233 */
BgL_tmpz00_18185 = BgL_timeza7oneza7_11
; }  else 
{ 
obj_t BgL_auxz00_18188;
BgL_auxz00_18188 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11085)), BGl_string7664z00zz__datez00, BGl_string7524z00zz__datez00, BgL_timeza7oneza7_11); 
FAILURE(BgL_auxz00_18188,BFALSE,BFALSE);} 
BgL_auxz00_18184 = 
(long)CINT(BgL_tmpz00_18185); } 
{ /* Llib/date.scm 233 */
obj_t BgL_tmpz00_18176;
if(
INTEGERP(BgL_yearz00_12))
{ /* Llib/date.scm 233 */
BgL_tmpz00_18176 = BgL_yearz00_12
; }  else 
{ 
obj_t BgL_auxz00_18179;
BgL_auxz00_18179 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11080)), BGl_string7664z00zz__datez00, BGl_string7524z00zz__datez00, BgL_yearz00_12); 
FAILURE(BgL_auxz00_18179,BFALSE,BFALSE);} 
BgL_auxz00_18175 = 
CINT(BgL_tmpz00_18176); } 
{ /* Llib/date.scm 233 */
obj_t BgL_tmpz00_18167;
if(
INTEGERP(BgL_monthz00_8))
{ /* Llib/date.scm 233 */
BgL_tmpz00_18167 = BgL_monthz00_8
; }  else 
{ 
obj_t BgL_auxz00_18170;
BgL_auxz00_18170 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11074)), BGl_string7664z00zz__datez00, BGl_string7524z00zz__datez00, BgL_monthz00_8); 
FAILURE(BgL_auxz00_18170,BFALSE,BFALSE);} 
BgL_auxz00_18166 = 
CINT(BgL_tmpz00_18167); } 
{ /* Llib/date.scm 233 */
obj_t BgL_tmpz00_18158;
if(
INTEGERP(BgL_dayz00_4))
{ /* Llib/date.scm 233 */
BgL_tmpz00_18158 = BgL_dayz00_4
; }  else 
{ 
obj_t BgL_auxz00_18161;
BgL_auxz00_18161 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11070)), BGl_string7664z00zz__datez00, BGl_string7524z00zz__datez00, BgL_dayz00_4); 
FAILURE(BgL_auxz00_18161,BFALSE,BFALSE);} 
BgL_auxz00_18157 = 
CINT(BgL_tmpz00_18158); } 
{ /* Llib/date.scm 233 */
obj_t BgL_tmpz00_18149;
if(
INTEGERP(BgL_hourz00_6))
{ /* Llib/date.scm 233 */
BgL_tmpz00_18149 = BgL_hourz00_6
; }  else 
{ 
obj_t BgL_auxz00_18152;
BgL_auxz00_18152 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11065)), BGl_string7664z00zz__datez00, BGl_string7524z00zz__datez00, BgL_hourz00_6); 
FAILURE(BgL_auxz00_18152,BFALSE,BFALSE);} 
BgL_auxz00_18148 = 
CINT(BgL_tmpz00_18149); } 
{ /* Llib/date.scm 233 */
obj_t BgL_tmpz00_18140;
if(
INTEGERP(BgL_minz00_7))
{ /* Llib/date.scm 233 */
BgL_tmpz00_18140 = BgL_minz00_7
; }  else 
{ 
obj_t BgL_auxz00_18143;
BgL_auxz00_18143 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11061)), BGl_string7664z00zz__datez00, BGl_string7524z00zz__datez00, BgL_minz00_7); 
FAILURE(BgL_auxz00_18143,BFALSE,BFALSE);} 
BgL_auxz00_18139 = 
CINT(BgL_tmpz00_18140); } 
{ /* Llib/date.scm 233 */
obj_t BgL_tmpz00_18131;
if(
INTEGERP(BgL_secz00_10))
{ /* Llib/date.scm 233 */
BgL_tmpz00_18131 = BgL_secz00_10
; }  else 
{ 
obj_t BgL_auxz00_18134;
BgL_auxz00_18134 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11057)), BGl_string7664z00zz__datez00, BGl_string7524z00zz__datez00, BgL_secz00_10); 
FAILURE(BgL_auxz00_18134,BFALSE,BFALSE);} 
BgL_auxz00_18130 = 
CINT(BgL_tmpz00_18131); } 
{ /* Llib/date.scm 233 */
obj_t BgL_tmpz00_18122;
if(
LLONGP(BgL_nsecz00_9))
{ /* Llib/date.scm 233 */
BgL_tmpz00_18122 = BgL_nsecz00_9
; }  else 
{ 
obj_t BgL_auxz00_18125;
BgL_auxz00_18125 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11052)), BGl_string7664z00zz__datez00, BGl_string7667z00zz__datez00, BgL_nsecz00_9); 
FAILURE(BgL_auxz00_18125,BFALSE,BFALSE);} 
BgL_tmpz00_18121 = 
BLLONG_TO_LLONG(BgL_tmpz00_18122); } 
return 
bgl_make_date(BgL_tmpz00_18121, BgL_auxz00_18130, BgL_auxz00_18139, BgL_auxz00_18148, BgL_auxz00_18157, BgL_auxz00_18166, BgL_auxz00_18175, BgL_auxz00_18184, ((bool_t)1), BgL_auxz00_18193);}  else 
{ /* Llib/date.scm 234 */
int BgL_auxz00_18266;int BgL_auxz00_18257;int BgL_auxz00_18248;int BgL_auxz00_18239;int BgL_auxz00_18230;int BgL_auxz00_18221;int BgL_auxz00_18212;BGL_LONGLONG_T BgL_tmpz00_18203;
{ /* Llib/date.scm 234 */
obj_t BgL_tmpz00_18267;
if(
INTEGERP(BgL_dstz00_5))
{ /* Llib/date.scm 234 */
BgL_tmpz00_18267 = BgL_dstz00_5
; }  else 
{ 
obj_t BgL_auxz00_18270;
BgL_auxz00_18270 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11158)), BGl_string7664z00zz__datez00, BGl_string7524z00zz__datez00, BgL_dstz00_5); 
FAILURE(BgL_auxz00_18270,BFALSE,BFALSE);} 
BgL_auxz00_18266 = 
CINT(BgL_tmpz00_18267); } 
{ /* Llib/date.scm 234 */
obj_t BgL_tmpz00_18258;
if(
INTEGERP(BgL_yearz00_12))
{ /* Llib/date.scm 234 */
BgL_tmpz00_18258 = BgL_yearz00_12
; }  else 
{ 
obj_t BgL_auxz00_18261;
BgL_auxz00_18261 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11148)), BGl_string7664z00zz__datez00, BGl_string7524z00zz__datez00, BgL_yearz00_12); 
FAILURE(BgL_auxz00_18261,BFALSE,BFALSE);} 
BgL_auxz00_18257 = 
CINT(BgL_tmpz00_18258); } 
{ /* Llib/date.scm 234 */
obj_t BgL_tmpz00_18249;
if(
INTEGERP(BgL_monthz00_8))
{ /* Llib/date.scm 234 */
BgL_tmpz00_18249 = BgL_monthz00_8
; }  else 
{ 
obj_t BgL_auxz00_18252;
BgL_auxz00_18252 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11142)), BGl_string7664z00zz__datez00, BGl_string7524z00zz__datez00, BgL_monthz00_8); 
FAILURE(BgL_auxz00_18252,BFALSE,BFALSE);} 
BgL_auxz00_18248 = 
CINT(BgL_tmpz00_18249); } 
{ /* Llib/date.scm 234 */
obj_t BgL_tmpz00_18240;
if(
INTEGERP(BgL_dayz00_4))
{ /* Llib/date.scm 234 */
BgL_tmpz00_18240 = BgL_dayz00_4
; }  else 
{ 
obj_t BgL_auxz00_18243;
BgL_auxz00_18243 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11138)), BGl_string7664z00zz__datez00, BGl_string7524z00zz__datez00, BgL_dayz00_4); 
FAILURE(BgL_auxz00_18243,BFALSE,BFALSE);} 
BgL_auxz00_18239 = 
CINT(BgL_tmpz00_18240); } 
{ /* Llib/date.scm 234 */
obj_t BgL_tmpz00_18231;
if(
INTEGERP(BgL_hourz00_6))
{ /* Llib/date.scm 234 */
BgL_tmpz00_18231 = BgL_hourz00_6
; }  else 
{ 
obj_t BgL_auxz00_18234;
BgL_auxz00_18234 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11133)), BGl_string7664z00zz__datez00, BGl_string7524z00zz__datez00, BgL_hourz00_6); 
FAILURE(BgL_auxz00_18234,BFALSE,BFALSE);} 
BgL_auxz00_18230 = 
CINT(BgL_tmpz00_18231); } 
{ /* Llib/date.scm 234 */
obj_t BgL_tmpz00_18222;
if(
INTEGERP(BgL_minz00_7))
{ /* Llib/date.scm 234 */
BgL_tmpz00_18222 = BgL_minz00_7
; }  else 
{ 
obj_t BgL_auxz00_18225;
BgL_auxz00_18225 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11129)), BGl_string7664z00zz__datez00, BGl_string7524z00zz__datez00, BgL_minz00_7); 
FAILURE(BgL_auxz00_18225,BFALSE,BFALSE);} 
BgL_auxz00_18221 = 
CINT(BgL_tmpz00_18222); } 
{ /* Llib/date.scm 234 */
obj_t BgL_tmpz00_18213;
if(
INTEGERP(BgL_secz00_10))
{ /* Llib/date.scm 234 */
BgL_tmpz00_18213 = BgL_secz00_10
; }  else 
{ 
obj_t BgL_auxz00_18216;
BgL_auxz00_18216 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11125)), BGl_string7664z00zz__datez00, BGl_string7524z00zz__datez00, BgL_secz00_10); 
FAILURE(BgL_auxz00_18216,BFALSE,BFALSE);} 
BgL_auxz00_18212 = 
CINT(BgL_tmpz00_18213); } 
{ /* Llib/date.scm 234 */
obj_t BgL_tmpz00_18204;
if(
LLONGP(BgL_nsecz00_9))
{ /* Llib/date.scm 234 */
BgL_tmpz00_18204 = BgL_nsecz00_9
; }  else 
{ 
obj_t BgL_auxz00_18207;
BgL_auxz00_18207 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11120)), BGl_string7664z00zz__datez00, BGl_string7667z00zz__datez00, BgL_nsecz00_9); 
FAILURE(BgL_auxz00_18207,BFALSE,BFALSE);} 
BgL_tmpz00_18203 = 
BLLONG_TO_LLONG(BgL_tmpz00_18204); } 
return 
bgl_make_date(BgL_tmpz00_18203, BgL_auxz00_18212, BgL_auxz00_18221, BgL_auxz00_18230, BgL_auxz00_18239, BgL_auxz00_18248, BgL_auxz00_18257, ((long)0), ((bool_t)0), BgL_auxz00_18266);} } 

}



/* _date-copy */
obj_t BGl__datezd2copyzd2zz__datez00(obj_t BgL_env1328z00_26, obj_t BgL_opt1327z00_25)
{
{ /* Llib/date.scm 239 */
{ /* Llib/date.scm 239 */
obj_t BgL_datez00_3583;
BgL_datez00_3583 = 
VECTOR_REF(BgL_opt1327z00_25,((long)0)); 
{ /* Llib/date.scm 239 */
obj_t BgL_dayz00_3584;
BgL_dayz00_3584 = BFALSE; 
{ /* Llib/date.scm 239 */
obj_t BgL_hourz00_3585;
BgL_hourz00_3585 = BFALSE; 
{ /* Llib/date.scm 239 */
obj_t BgL_isdstz00_3586;
BgL_isdstz00_3586 = BFALSE; 
{ /* Llib/date.scm 239 */
obj_t BgL_minz00_3587;
BgL_minz00_3587 = BFALSE; 
{ /* Llib/date.scm 239 */
obj_t BgL_monthz00_3588;
BgL_monthz00_3588 = BFALSE; 
{ /* Llib/date.scm 239 */
obj_t BgL_nsecz00_3589;
BgL_nsecz00_3589 = BFALSE; 
{ /* Llib/date.scm 239 */
obj_t BgL_secz00_3590;
BgL_secz00_3590 = BFALSE; 
{ /* Llib/date.scm 239 */
obj_t BgL_timeza7oneza7_3591;
BgL_timeza7oneza7_3591 = BFALSE; 
{ /* Llib/date.scm 239 */
obj_t BgL_yearz00_3592;
BgL_yearz00_3592 = BFALSE; 
{ /* Llib/date.scm 239 */

{ 
long BgL_iz00_3593;
BgL_iz00_3593 = ((long)1); 
BgL_check1331z00_3594:
if(
(BgL_iz00_3593==
VECTOR_LENGTH(BgL_opt1327z00_25)))
{ /* Llib/date.scm 239 */BNIL; }  else 
{ /* Llib/date.scm 239 */
bool_t BgL_test8732z00_18280;
{ /* Llib/date.scm 239 */
obj_t BgL_arg2693z00_3600;
{ /* Llib/date.scm 239 */
bool_t BgL_test8733z00_18281;
{ /* Llib/date.scm 239 */
long BgL_tmpz00_18282;
BgL_tmpz00_18282 = 
VECTOR_LENGTH(BgL_opt1327z00_25); 
BgL_test8733z00_18281 = 
BOUND_CHECK(BgL_iz00_3593, BgL_tmpz00_18282); } 
if(BgL_test8733z00_18281)
{ /* Llib/date.scm 239 */
BgL_arg2693z00_3600 = 
VECTOR_REF(BgL_opt1327z00_25,BgL_iz00_3593); }  else 
{ 
obj_t BgL_auxz00_18286;
BgL_auxz00_18286 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11388)), BGl_string7643z00zz__datez00, BgL_opt1327z00_25, 
(int)(
VECTOR_LENGTH(BgL_opt1327z00_25)), 
(int)(BgL_iz00_3593)); 
FAILURE(BgL_auxz00_18286,BFALSE,BFALSE);} } 
BgL_test8732z00_18280 = 
CBOOL(
BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_arg2693z00_3600, BGl_list7669z00zz__datez00)); } 
if(BgL_test8732z00_18280)
{ 
long BgL_iz00_18295;
BgL_iz00_18295 = 
(BgL_iz00_3593+((long)2)); 
BgL_iz00_3593 = BgL_iz00_18295; 
goto BgL_check1331z00_3594;}  else 
{ /* Llib/date.scm 239 */
obj_t BgL_arg2692z00_3599;
{ /* Llib/date.scm 239 */
bool_t BgL_test8734z00_18297;
{ /* Llib/date.scm 239 */
long BgL_tmpz00_18298;
BgL_tmpz00_18298 = 
VECTOR_LENGTH(BgL_opt1327z00_25); 
BgL_test8734z00_18297 = 
BOUND_CHECK(BgL_iz00_3593, BgL_tmpz00_18298); } 
if(BgL_test8734z00_18297)
{ /* Llib/date.scm 239 */
BgL_arg2692z00_3599 = 
VECTOR_REF(BgL_opt1327z00_25,BgL_iz00_3593); }  else 
{ 
obj_t BgL_auxz00_18302;
BgL_auxz00_18302 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11388)), BGl_string7643z00zz__datez00, BgL_opt1327z00_25, 
(int)(
VECTOR_LENGTH(BgL_opt1327z00_25)), 
(int)(BgL_iz00_3593)); 
FAILURE(BgL_auxz00_18302,BFALSE,BFALSE);} } 
BGl_errorz00zz__errorz00(BGl_symbol7672z00zz__datez00, BGl_string7665z00zz__datez00, BgL_arg2692z00_3599); } } } 
{ /* Llib/date.scm 239 */
obj_t BgL_index1333z00_3601;
BgL_index1333z00_3601 = 
BGl_search1330ze70ze7zz__datez00(
VECTOR_LENGTH(BgL_opt1327z00_25), BgL_opt1327z00_25, BGl_keyword7645z00zz__datez00, ((long)1)); 
{ /* Llib/date.scm 239 */
bool_t BgL_test8735z00_18312;
{ /* Llib/date.scm 239 */
long BgL_n1z00_8844;
{ /* Llib/date.scm 239 */
obj_t BgL_tmpz00_18313;
if(
INTEGERP(BgL_index1333z00_3601))
{ /* Llib/date.scm 239 */
BgL_tmpz00_18313 = BgL_index1333z00_3601
; }  else 
{ 
obj_t BgL_auxz00_18316;
BgL_auxz00_18316 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11388)), BGl_string7674z00zz__datez00, BGl_string7524z00zz__datez00, BgL_index1333z00_3601); 
FAILURE(BgL_auxz00_18316,BFALSE,BFALSE);} 
BgL_n1z00_8844 = 
(long)CINT(BgL_tmpz00_18313); } 
BgL_test8735z00_18312 = 
(BgL_n1z00_8844>=((long)0)); } 
if(BgL_test8735z00_18312)
{ 
long BgL_auxz00_18322;
{ /* Llib/date.scm 239 */
obj_t BgL_tmpz00_18323;
if(
INTEGERP(BgL_index1333z00_3601))
{ /* Llib/date.scm 239 */
BgL_tmpz00_18323 = BgL_index1333z00_3601
; }  else 
{ 
obj_t BgL_auxz00_18326;
BgL_auxz00_18326 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11388)), BGl_string7674z00zz__datez00, BGl_string7524z00zz__datez00, BgL_index1333z00_3601); 
FAILURE(BgL_auxz00_18326,BFALSE,BFALSE);} 
BgL_auxz00_18322 = 
(long)CINT(BgL_tmpz00_18323); } 
BgL_dayz00_3584 = 
VECTOR_REF(BgL_opt1327z00_25,BgL_auxz00_18322); }  else 
{ /* Llib/date.scm 239 */BFALSE; } } } 
{ /* Llib/date.scm 239 */
obj_t BgL_index1334z00_3603;
BgL_index1334z00_3603 = 
BGl_search1330ze70ze7zz__datez00(
VECTOR_LENGTH(BgL_opt1327z00_25), BgL_opt1327z00_25, BGl_keyword7649z00zz__datez00, ((long)1)); 
{ /* Llib/date.scm 239 */
bool_t BgL_test8738z00_18334;
{ /* Llib/date.scm 239 */
long BgL_n1z00_8846;
{ /* Llib/date.scm 239 */
obj_t BgL_tmpz00_18335;
if(
INTEGERP(BgL_index1334z00_3603))
{ /* Llib/date.scm 239 */
BgL_tmpz00_18335 = BgL_index1334z00_3603
; }  else 
{ 
obj_t BgL_auxz00_18338;
BgL_auxz00_18338 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11388)), BGl_string7674z00zz__datez00, BGl_string7524z00zz__datez00, BgL_index1334z00_3603); 
FAILURE(BgL_auxz00_18338,BFALSE,BFALSE);} 
BgL_n1z00_8846 = 
(long)CINT(BgL_tmpz00_18335); } 
BgL_test8738z00_18334 = 
(BgL_n1z00_8846>=((long)0)); } 
if(BgL_test8738z00_18334)
{ 
long BgL_auxz00_18344;
{ /* Llib/date.scm 239 */
obj_t BgL_tmpz00_18345;
if(
INTEGERP(BgL_index1334z00_3603))
{ /* Llib/date.scm 239 */
BgL_tmpz00_18345 = BgL_index1334z00_3603
; }  else 
{ 
obj_t BgL_auxz00_18348;
BgL_auxz00_18348 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11388)), BGl_string7674z00zz__datez00, BGl_string7524z00zz__datez00, BgL_index1334z00_3603); 
FAILURE(BgL_auxz00_18348,BFALSE,BFALSE);} 
BgL_auxz00_18344 = 
(long)CINT(BgL_tmpz00_18345); } 
BgL_hourz00_3585 = 
VECTOR_REF(BgL_opt1327z00_25,BgL_auxz00_18344); }  else 
{ /* Llib/date.scm 239 */BFALSE; } } } 
{ /* Llib/date.scm 239 */
obj_t BgL_index1335z00_3605;
BgL_index1335z00_3605 = 
BGl_search1330ze70ze7zz__datez00(
VECTOR_LENGTH(BgL_opt1327z00_25), BgL_opt1327z00_25, BGl_keyword7670z00zz__datez00, ((long)1)); 
{ /* Llib/date.scm 239 */
bool_t BgL_test8741z00_18356;
{ /* Llib/date.scm 239 */
long BgL_n1z00_8848;
{ /* Llib/date.scm 239 */
obj_t BgL_tmpz00_18357;
if(
INTEGERP(BgL_index1335z00_3605))
{ /* Llib/date.scm 239 */
BgL_tmpz00_18357 = BgL_index1335z00_3605
; }  else 
{ 
obj_t BgL_auxz00_18360;
BgL_auxz00_18360 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11388)), BGl_string7674z00zz__datez00, BGl_string7524z00zz__datez00, BgL_index1335z00_3605); 
FAILURE(BgL_auxz00_18360,BFALSE,BFALSE);} 
BgL_n1z00_8848 = 
(long)CINT(BgL_tmpz00_18357); } 
BgL_test8741z00_18356 = 
(BgL_n1z00_8848>=((long)0)); } 
if(BgL_test8741z00_18356)
{ 
long BgL_auxz00_18366;
{ /* Llib/date.scm 239 */
obj_t BgL_tmpz00_18367;
if(
INTEGERP(BgL_index1335z00_3605))
{ /* Llib/date.scm 239 */
BgL_tmpz00_18367 = BgL_index1335z00_3605
; }  else 
{ 
obj_t BgL_auxz00_18370;
BgL_auxz00_18370 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11388)), BGl_string7674z00zz__datez00, BGl_string7524z00zz__datez00, BgL_index1335z00_3605); 
FAILURE(BgL_auxz00_18370,BFALSE,BFALSE);} 
BgL_auxz00_18366 = 
(long)CINT(BgL_tmpz00_18367); } 
BgL_isdstz00_3586 = 
VECTOR_REF(BgL_opt1327z00_25,BgL_auxz00_18366); }  else 
{ /* Llib/date.scm 239 */BFALSE; } } } 
{ /* Llib/date.scm 239 */
obj_t BgL_index1336z00_3607;
BgL_index1336z00_3607 = 
BGl_search1330ze70ze7zz__datez00(
VECTOR_LENGTH(BgL_opt1327z00_25), BgL_opt1327z00_25, BGl_keyword7651z00zz__datez00, ((long)1)); 
{ /* Llib/date.scm 239 */
bool_t BgL_test8744z00_18378;
{ /* Llib/date.scm 239 */
long BgL_n1z00_8850;
{ /* Llib/date.scm 239 */
obj_t BgL_tmpz00_18379;
if(
INTEGERP(BgL_index1336z00_3607))
{ /* Llib/date.scm 239 */
BgL_tmpz00_18379 = BgL_index1336z00_3607
; }  else 
{ 
obj_t BgL_auxz00_18382;
BgL_auxz00_18382 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11388)), BGl_string7674z00zz__datez00, BGl_string7524z00zz__datez00, BgL_index1336z00_3607); 
FAILURE(BgL_auxz00_18382,BFALSE,BFALSE);} 
BgL_n1z00_8850 = 
(long)CINT(BgL_tmpz00_18379); } 
BgL_test8744z00_18378 = 
(BgL_n1z00_8850>=((long)0)); } 
if(BgL_test8744z00_18378)
{ 
long BgL_auxz00_18388;
{ /* Llib/date.scm 239 */
obj_t BgL_tmpz00_18389;
if(
INTEGERP(BgL_index1336z00_3607))
{ /* Llib/date.scm 239 */
BgL_tmpz00_18389 = BgL_index1336z00_3607
; }  else 
{ 
obj_t BgL_auxz00_18392;
BgL_auxz00_18392 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11388)), BGl_string7674z00zz__datez00, BGl_string7524z00zz__datez00, BgL_index1336z00_3607); 
FAILURE(BgL_auxz00_18392,BFALSE,BFALSE);} 
BgL_auxz00_18388 = 
(long)CINT(BgL_tmpz00_18389); } 
BgL_minz00_3587 = 
VECTOR_REF(BgL_opt1327z00_25,BgL_auxz00_18388); }  else 
{ /* Llib/date.scm 239 */BFALSE; } } } 
{ /* Llib/date.scm 239 */
obj_t BgL_index1337z00_3609;
BgL_index1337z00_3609 = 
BGl_search1330ze70ze7zz__datez00(
VECTOR_LENGTH(BgL_opt1327z00_25), BgL_opt1327z00_25, BGl_keyword7653z00zz__datez00, ((long)1)); 
{ /* Llib/date.scm 239 */
bool_t BgL_test8747z00_18400;
{ /* Llib/date.scm 239 */
long BgL_n1z00_8852;
{ /* Llib/date.scm 239 */
obj_t BgL_tmpz00_18401;
if(
INTEGERP(BgL_index1337z00_3609))
{ /* Llib/date.scm 239 */
BgL_tmpz00_18401 = BgL_index1337z00_3609
; }  else 
{ 
obj_t BgL_auxz00_18404;
BgL_auxz00_18404 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11388)), BGl_string7674z00zz__datez00, BGl_string7524z00zz__datez00, BgL_index1337z00_3609); 
FAILURE(BgL_auxz00_18404,BFALSE,BFALSE);} 
BgL_n1z00_8852 = 
(long)CINT(BgL_tmpz00_18401); } 
BgL_test8747z00_18400 = 
(BgL_n1z00_8852>=((long)0)); } 
if(BgL_test8747z00_18400)
{ 
long BgL_auxz00_18410;
{ /* Llib/date.scm 239 */
obj_t BgL_tmpz00_18411;
if(
INTEGERP(BgL_index1337z00_3609))
{ /* Llib/date.scm 239 */
BgL_tmpz00_18411 = BgL_index1337z00_3609
; }  else 
{ 
obj_t BgL_auxz00_18414;
BgL_auxz00_18414 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11388)), BGl_string7674z00zz__datez00, BGl_string7524z00zz__datez00, BgL_index1337z00_3609); 
FAILURE(BgL_auxz00_18414,BFALSE,BFALSE);} 
BgL_auxz00_18410 = 
(long)CINT(BgL_tmpz00_18411); } 
BgL_monthz00_3588 = 
VECTOR_REF(BgL_opt1327z00_25,BgL_auxz00_18410); }  else 
{ /* Llib/date.scm 239 */BFALSE; } } } 
{ /* Llib/date.scm 239 */
obj_t BgL_index1338z00_3611;
BgL_index1338z00_3611 = 
BGl_search1330ze70ze7zz__datez00(
VECTOR_LENGTH(BgL_opt1327z00_25), BgL_opt1327z00_25, BGl_keyword7655z00zz__datez00, ((long)1)); 
{ /* Llib/date.scm 239 */
bool_t BgL_test8750z00_18422;
{ /* Llib/date.scm 239 */
long BgL_n1z00_8854;
{ /* Llib/date.scm 239 */
obj_t BgL_tmpz00_18423;
if(
INTEGERP(BgL_index1338z00_3611))
{ /* Llib/date.scm 239 */
BgL_tmpz00_18423 = BgL_index1338z00_3611
; }  else 
{ 
obj_t BgL_auxz00_18426;
BgL_auxz00_18426 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11388)), BGl_string7674z00zz__datez00, BGl_string7524z00zz__datez00, BgL_index1338z00_3611); 
FAILURE(BgL_auxz00_18426,BFALSE,BFALSE);} 
BgL_n1z00_8854 = 
(long)CINT(BgL_tmpz00_18423); } 
BgL_test8750z00_18422 = 
(BgL_n1z00_8854>=((long)0)); } 
if(BgL_test8750z00_18422)
{ 
long BgL_auxz00_18432;
{ /* Llib/date.scm 239 */
obj_t BgL_tmpz00_18433;
if(
INTEGERP(BgL_index1338z00_3611))
{ /* Llib/date.scm 239 */
BgL_tmpz00_18433 = BgL_index1338z00_3611
; }  else 
{ 
obj_t BgL_auxz00_18436;
BgL_auxz00_18436 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11388)), BGl_string7674z00zz__datez00, BGl_string7524z00zz__datez00, BgL_index1338z00_3611); 
FAILURE(BgL_auxz00_18436,BFALSE,BFALSE);} 
BgL_auxz00_18432 = 
(long)CINT(BgL_tmpz00_18433); } 
BgL_nsecz00_3589 = 
VECTOR_REF(BgL_opt1327z00_25,BgL_auxz00_18432); }  else 
{ /* Llib/date.scm 239 */BFALSE; } } } 
{ /* Llib/date.scm 239 */
obj_t BgL_index1339z00_3613;
BgL_index1339z00_3613 = 
BGl_search1330ze70ze7zz__datez00(
VECTOR_LENGTH(BgL_opt1327z00_25), BgL_opt1327z00_25, BGl_keyword7657z00zz__datez00, ((long)1)); 
{ /* Llib/date.scm 239 */
bool_t BgL_test8753z00_18444;
{ /* Llib/date.scm 239 */
long BgL_n1z00_8856;
{ /* Llib/date.scm 239 */
obj_t BgL_tmpz00_18445;
if(
INTEGERP(BgL_index1339z00_3613))
{ /* Llib/date.scm 239 */
BgL_tmpz00_18445 = BgL_index1339z00_3613
; }  else 
{ 
obj_t BgL_auxz00_18448;
BgL_auxz00_18448 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11388)), BGl_string7674z00zz__datez00, BGl_string7524z00zz__datez00, BgL_index1339z00_3613); 
FAILURE(BgL_auxz00_18448,BFALSE,BFALSE);} 
BgL_n1z00_8856 = 
(long)CINT(BgL_tmpz00_18445); } 
BgL_test8753z00_18444 = 
(BgL_n1z00_8856>=((long)0)); } 
if(BgL_test8753z00_18444)
{ 
long BgL_auxz00_18454;
{ /* Llib/date.scm 239 */
obj_t BgL_tmpz00_18455;
if(
INTEGERP(BgL_index1339z00_3613))
{ /* Llib/date.scm 239 */
BgL_tmpz00_18455 = BgL_index1339z00_3613
; }  else 
{ 
obj_t BgL_auxz00_18458;
BgL_auxz00_18458 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11388)), BGl_string7674z00zz__datez00, BGl_string7524z00zz__datez00, BgL_index1339z00_3613); 
FAILURE(BgL_auxz00_18458,BFALSE,BFALSE);} 
BgL_auxz00_18454 = 
(long)CINT(BgL_tmpz00_18455); } 
BgL_secz00_3590 = 
VECTOR_REF(BgL_opt1327z00_25,BgL_auxz00_18454); }  else 
{ /* Llib/date.scm 239 */BFALSE; } } } 
{ /* Llib/date.scm 239 */
obj_t BgL_index1340z00_3615;
BgL_index1340z00_3615 = 
BGl_search1330ze70ze7zz__datez00(
VECTOR_LENGTH(BgL_opt1327z00_25), BgL_opt1327z00_25, BGl_keyword7659z00zz__datez00, ((long)1)); 
{ /* Llib/date.scm 239 */
bool_t BgL_test8756z00_18466;
{ /* Llib/date.scm 239 */
long BgL_n1z00_8858;
{ /* Llib/date.scm 239 */
obj_t BgL_tmpz00_18467;
if(
INTEGERP(BgL_index1340z00_3615))
{ /* Llib/date.scm 239 */
BgL_tmpz00_18467 = BgL_index1340z00_3615
; }  else 
{ 
obj_t BgL_auxz00_18470;
BgL_auxz00_18470 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11388)), BGl_string7674z00zz__datez00, BGl_string7524z00zz__datez00, BgL_index1340z00_3615); 
FAILURE(BgL_auxz00_18470,BFALSE,BFALSE);} 
BgL_n1z00_8858 = 
(long)CINT(BgL_tmpz00_18467); } 
BgL_test8756z00_18466 = 
(BgL_n1z00_8858>=((long)0)); } 
if(BgL_test8756z00_18466)
{ 
long BgL_auxz00_18476;
{ /* Llib/date.scm 239 */
obj_t BgL_tmpz00_18477;
if(
INTEGERP(BgL_index1340z00_3615))
{ /* Llib/date.scm 239 */
BgL_tmpz00_18477 = BgL_index1340z00_3615
; }  else 
{ 
obj_t BgL_auxz00_18480;
BgL_auxz00_18480 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11388)), BGl_string7674z00zz__datez00, BGl_string7524z00zz__datez00, BgL_index1340z00_3615); 
FAILURE(BgL_auxz00_18480,BFALSE,BFALSE);} 
BgL_auxz00_18476 = 
(long)CINT(BgL_tmpz00_18477); } 
BgL_timeza7oneza7_3591 = 
VECTOR_REF(BgL_opt1327z00_25,BgL_auxz00_18476); }  else 
{ /* Llib/date.scm 239 */BFALSE; } } } 
{ /* Llib/date.scm 239 */
obj_t BgL_index1341z00_3617;
BgL_index1341z00_3617 = 
BGl_search1330ze70ze7zz__datez00(
VECTOR_LENGTH(BgL_opt1327z00_25), BgL_opt1327z00_25, BGl_keyword7661z00zz__datez00, ((long)1)); 
{ /* Llib/date.scm 239 */
bool_t BgL_test8759z00_18488;
{ /* Llib/date.scm 239 */
long BgL_n1z00_8860;
{ /* Llib/date.scm 239 */
obj_t BgL_tmpz00_18489;
if(
INTEGERP(BgL_index1341z00_3617))
{ /* Llib/date.scm 239 */
BgL_tmpz00_18489 = BgL_index1341z00_3617
; }  else 
{ 
obj_t BgL_auxz00_18492;
BgL_auxz00_18492 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11388)), BGl_string7674z00zz__datez00, BGl_string7524z00zz__datez00, BgL_index1341z00_3617); 
FAILURE(BgL_auxz00_18492,BFALSE,BFALSE);} 
BgL_n1z00_8860 = 
(long)CINT(BgL_tmpz00_18489); } 
BgL_test8759z00_18488 = 
(BgL_n1z00_8860>=((long)0)); } 
if(BgL_test8759z00_18488)
{ 
long BgL_auxz00_18498;
{ /* Llib/date.scm 239 */
obj_t BgL_tmpz00_18499;
if(
INTEGERP(BgL_index1341z00_3617))
{ /* Llib/date.scm 239 */
BgL_tmpz00_18499 = BgL_index1341z00_3617
; }  else 
{ 
obj_t BgL_auxz00_18502;
BgL_auxz00_18502 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11388)), BGl_string7674z00zz__datez00, BGl_string7524z00zz__datez00, BgL_index1341z00_3617); 
FAILURE(BgL_auxz00_18502,BFALSE,BFALSE);} 
BgL_auxz00_18498 = 
(long)CINT(BgL_tmpz00_18499); } 
BgL_yearz00_3592 = 
VECTOR_REF(BgL_opt1327z00_25,BgL_auxz00_18498); }  else 
{ /* Llib/date.scm 239 */BFALSE; } } } 
{ /* Llib/date.scm 239 */
obj_t BgL_arg2703z00_3619;
BgL_arg2703z00_3619 = 
VECTOR_REF(BgL_opt1327z00_25,((long)0)); 
{ /* Llib/date.scm 239 */
obj_t BgL_dayz00_3620;
BgL_dayz00_3620 = BgL_dayz00_3584; 
{ /* Llib/date.scm 239 */
obj_t BgL_hourz00_3621;
BgL_hourz00_3621 = BgL_hourz00_3585; 
{ /* Llib/date.scm 239 */
obj_t BgL_isdstz00_3622;
BgL_isdstz00_3622 = BgL_isdstz00_3586; 
{ /* Llib/date.scm 239 */
obj_t BgL_minz00_3623;
BgL_minz00_3623 = BgL_minz00_3587; 
{ /* Llib/date.scm 239 */
obj_t BgL_monthz00_3624;
BgL_monthz00_3624 = BgL_monthz00_3588; 
{ /* Llib/date.scm 239 */
obj_t BgL_nsecz00_3625;
BgL_nsecz00_3625 = BgL_nsecz00_3589; 
{ /* Llib/date.scm 239 */
obj_t BgL_secz00_3626;
BgL_secz00_3626 = BgL_secz00_3590; 
{ /* Llib/date.scm 239 */
obj_t BgL_timeza7oneza7_3627;
BgL_timeza7oneza7_3627 = BgL_timeza7oneza7_3591; 
{ /* Llib/date.scm 239 */
obj_t BgL_yearz00_3628;
BgL_yearz00_3628 = BgL_yearz00_3592; 
{ /* Llib/date.scm 239 */
obj_t BgL_datez00_8862;
if(
BGL_DATEP(BgL_arg2703z00_3619))
{ /* Llib/date.scm 239 */
BgL_datez00_8862 = BgL_arg2703z00_3619; }  else 
{ 
obj_t BgL_auxz00_18511;
BgL_auxz00_18511 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11388)), BGl_string7674z00zz__datez00, BGl_string7675z00zz__datez00, BgL_arg2703z00_3619); 
FAILURE(BgL_auxz00_18511,BFALSE,BFALSE);} 
{ /* Llib/date.scm 241 */
obj_t BgL_arg2712z00_8863;obj_t BgL_arg2713z00_8864;obj_t BgL_arg2714z00_8865;obj_t BgL_arg2715z00_8866;obj_t BgL_arg2716z00_8867;obj_t BgL_arg2717z00_8868;obj_t BgL_arg2718z00_8869;long BgL_arg2720z00_8870;bool_t BgL_arg2722z00_8871;obj_t BgL_arg2723z00_8872;
if(
CBOOL(BgL_nsecz00_3625))
{ /* Llib/date.scm 241 */
BgL_arg2712z00_8863 = BgL_nsecz00_3625; }  else 
{ /* Llib/date.scm 241 */
BGL_LONGLONG_T BgL_res5498z00_8882;
BgL_res5498z00_8882 = 
BGL_DATE_NANOSECOND(BgL_datez00_8862); 
BgL_arg2712z00_8863 = 
make_bllong(BgL_res5498z00_8882); } 
if(
CBOOL(BgL_secz00_3626))
{ /* Llib/date.scm 242 */
BgL_arg2713z00_8864 = BgL_secz00_3626; }  else 
{ /* Llib/date.scm 242 */
int BgL_res5499z00_8884;
BgL_res5499z00_8884 = 
BGL_DATE_SECOND(BgL_datez00_8862); 
BgL_arg2713z00_8864 = 
BINT(BgL_res5499z00_8884); } 
if(
CBOOL(BgL_minz00_3623))
{ /* Llib/date.scm 243 */
BgL_arg2714z00_8865 = BgL_minz00_3623; }  else 
{ /* Llib/date.scm 243 */
int BgL_res5500z00_8886;
BgL_res5500z00_8886 = 
BGL_DATE_MINUTE(BgL_datez00_8862); 
BgL_arg2714z00_8865 = 
BINT(BgL_res5500z00_8886); } 
if(
CBOOL(BgL_hourz00_3621))
{ /* Llib/date.scm 244 */
BgL_arg2715z00_8866 = BgL_hourz00_3621; }  else 
{ /* Llib/date.scm 244 */
int BgL_res5501z00_8888;
BgL_res5501z00_8888 = 
BGL_DATE_HOUR(BgL_datez00_8862); 
BgL_arg2715z00_8866 = 
BINT(BgL_res5501z00_8888); } 
if(
CBOOL(BgL_dayz00_3620))
{ /* Llib/date.scm 245 */
BgL_arg2716z00_8867 = BgL_dayz00_3620; }  else 
{ /* Llib/date.scm 245 */
int BgL_res5502z00_8890;
BgL_res5502z00_8890 = 
BGL_DATE_DAY(BgL_datez00_8862); 
BgL_arg2716z00_8867 = 
BINT(BgL_res5502z00_8890); } 
if(
CBOOL(BgL_monthz00_3624))
{ /* Llib/date.scm 246 */
BgL_arg2717z00_8868 = BgL_monthz00_3624; }  else 
{ /* Llib/date.scm 246 */
int BgL_res5503z00_8892;
BgL_res5503z00_8892 = 
BGL_DATE_MONTH(BgL_datez00_8862); 
BgL_arg2717z00_8868 = 
BINT(BgL_res5503z00_8892); } 
if(
CBOOL(BgL_yearz00_3628))
{ /* Llib/date.scm 247 */
BgL_arg2718z00_8869 = BgL_yearz00_3628; }  else 
{ /* Llib/date.scm 247 */
int BgL_res5504z00_8894;
BgL_res5504z00_8894 = 
BGL_DATE_YEAR(BgL_datez00_8862); 
BgL_arg2718z00_8869 = 
BINT(BgL_res5504z00_8894); } 
{ /* Llib/date.scm 248 */
long BgL_res5505z00_8896;
BgL_res5505z00_8896 = 
BGL_DATE_TIMEZONE(BgL_datez00_8862); 
BgL_arg2720z00_8870 = BgL_res5505z00_8896; } 
BgL_arg2722z00_8871 = 
BGL_DATE_ISGMT(BgL_datez00_8862); 
if(
CBOOL(BgL_isdstz00_3622))
{ /* Llib/date.scm 250 */
BgL_arg2723z00_8872 = BgL_isdstz00_3622; }  else 
{ /* Llib/date.scm 250 */
BgL_arg2723z00_8872 = 
BINT(((long)-1)); } 
{ /* Llib/date.scm 240 */
int BgL_auxz00_18611;int BgL_auxz00_18602;int BgL_auxz00_18593;int BgL_auxz00_18584;int BgL_auxz00_18575;int BgL_auxz00_18566;int BgL_auxz00_18557;BGL_LONGLONG_T BgL_tmpz00_18548;
{ /* Llib/date.scm 250 */
obj_t BgL_tmpz00_18612;
if(
INTEGERP(BgL_arg2723z00_8872))
{ /* Llib/date.scm 250 */
BgL_tmpz00_18612 = BgL_arg2723z00_8872
; }  else 
{ 
obj_t BgL_auxz00_18615;
BgL_auxz00_18615 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11791)), BGl_string7674z00zz__datez00, BGl_string7524z00zz__datez00, BgL_arg2723z00_8872); 
FAILURE(BgL_auxz00_18615,BFALSE,BFALSE);} 
BgL_auxz00_18611 = 
CINT(BgL_tmpz00_18612); } 
{ /* Llib/date.scm 247 */
obj_t BgL_tmpz00_18603;
if(
INTEGERP(BgL_arg2718z00_8869))
{ /* Llib/date.scm 247 */
BgL_tmpz00_18603 = BgL_arg2718z00_8869
; }  else 
{ 
obj_t BgL_auxz00_18606;
BgL_auxz00_18606 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11718)), BGl_string7674z00zz__datez00, BGl_string7524z00zz__datez00, BgL_arg2718z00_8869); 
FAILURE(BgL_auxz00_18606,BFALSE,BFALSE);} 
BgL_auxz00_18602 = 
CINT(BgL_tmpz00_18603); } 
{ /* Llib/date.scm 246 */
obj_t BgL_tmpz00_18594;
if(
INTEGERP(BgL_arg2717z00_8868))
{ /* Llib/date.scm 246 */
BgL_tmpz00_18594 = BgL_arg2717z00_8868
; }  else 
{ 
obj_t BgL_auxz00_18597;
BgL_auxz00_18597 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11685)), BGl_string7674z00zz__datez00, BGl_string7524z00zz__datez00, BgL_arg2717z00_8868); 
FAILURE(BgL_auxz00_18597,BFALSE,BFALSE);} 
BgL_auxz00_18593 = 
CINT(BgL_tmpz00_18594); } 
{ /* Llib/date.scm 245 */
obj_t BgL_tmpz00_18585;
if(
INTEGERP(BgL_arg2716z00_8867))
{ /* Llib/date.scm 245 */
BgL_tmpz00_18585 = BgL_arg2716z00_8867
; }  else 
{ 
obj_t BgL_auxz00_18588;
BgL_auxz00_18588 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11650)), BGl_string7674z00zz__datez00, BGl_string7524z00zz__datez00, BgL_arg2716z00_8867); 
FAILURE(BgL_auxz00_18588,BFALSE,BFALSE);} 
BgL_auxz00_18584 = 
CINT(BgL_tmpz00_18585); } 
{ /* Llib/date.scm 244 */
obj_t BgL_tmpz00_18576;
if(
INTEGERP(BgL_arg2715z00_8866))
{ /* Llib/date.scm 244 */
BgL_tmpz00_18576 = BgL_arg2715z00_8866
; }  else 
{ 
obj_t BgL_auxz00_18579;
BgL_auxz00_18579 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11619)), BGl_string7674z00zz__datez00, BGl_string7524z00zz__datez00, BgL_arg2715z00_8866); 
FAILURE(BgL_auxz00_18579,BFALSE,BFALSE);} 
BgL_auxz00_18575 = 
CINT(BgL_tmpz00_18576); } 
{ /* Llib/date.scm 243 */
obj_t BgL_tmpz00_18567;
if(
INTEGERP(BgL_arg2714z00_8865))
{ /* Llib/date.scm 243 */
BgL_tmpz00_18567 = BgL_arg2714z00_8865
; }  else 
{ 
obj_t BgL_auxz00_18570;
BgL_auxz00_18570 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11586)), BGl_string7674z00zz__datez00, BGl_string7524z00zz__datez00, BgL_arg2714z00_8865); 
FAILURE(BgL_auxz00_18570,BFALSE,BFALSE);} 
BgL_auxz00_18566 = 
CINT(BgL_tmpz00_18567); } 
{ /* Llib/date.scm 242 */
obj_t BgL_tmpz00_18558;
if(
INTEGERP(BgL_arg2713z00_8864))
{ /* Llib/date.scm 242 */
BgL_tmpz00_18558 = BgL_arg2713z00_8864
; }  else 
{ 
obj_t BgL_auxz00_18561;
BgL_auxz00_18561 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11552)), BGl_string7674z00zz__datez00, BGl_string7524z00zz__datez00, BgL_arg2713z00_8864); 
FAILURE(BgL_auxz00_18561,BFALSE,BFALSE);} 
BgL_auxz00_18557 = 
CINT(BgL_tmpz00_18558); } 
{ /* Llib/date.scm 241 */
obj_t BgL_tmpz00_18549;
if(
LLONGP(BgL_arg2712z00_8863))
{ /* Llib/date.scm 241 */
BgL_tmpz00_18549 = BgL_arg2712z00_8863
; }  else 
{ 
obj_t BgL_auxz00_18552;
BgL_auxz00_18552 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11518)), BGl_string7674z00zz__datez00, BGl_string7667z00zz__datez00, BgL_arg2712z00_8863); 
FAILURE(BgL_auxz00_18552,BFALSE,BFALSE);} 
BgL_tmpz00_18548 = 
BLLONG_TO_LLONG(BgL_tmpz00_18549); } 
return 
bgl_make_date(BgL_tmpz00_18548, BgL_auxz00_18557, BgL_auxz00_18566, BgL_auxz00_18575, BgL_auxz00_18584, BgL_auxz00_18593, BgL_auxz00_18602, BgL_arg2720z00_8870, BgL_arg2722z00_8871, BgL_auxz00_18611);} } } } } } } } } } } } } } } } } } } } } } } } } 

}



/* search1330~0 */
obj_t BGl_search1330ze70ze7zz__datez00(long BgL_l1329z00_11443, obj_t BgL_opt1327z00_11442, obj_t BgL_k1z00_3580, long BgL_iz00_3581)
{
{ /* Llib/date.scm 239 */
BGl_search1330ze70ze7zz__datez00:
if(
(BgL_iz00_3581==BgL_l1329z00_11443))
{ /* Llib/date.scm 239 */
return 
BINT(((long)-1));}  else 
{ /* Llib/date.scm 239 */
if(
(BgL_iz00_3581==
(BgL_l1329z00_11443-((long)1))))
{ /* Llib/date.scm 239 */
return 
BGl_errorz00zz__errorz00(BGl_symbol7672z00zz__datez00, BGl_string7676z00zz__datez00, 
BINT(
VECTOR_LENGTH(BgL_opt1327z00_11442)));}  else 
{ /* Llib/date.scm 239 */
obj_t BgL_vz00_3633;
BgL_vz00_3633 = 
VECTOR_REF(BgL_opt1327z00_11442,BgL_iz00_3581); 
if(
(BgL_vz00_3633==BgL_k1z00_3580))
{ /* Llib/date.scm 239 */
return 
BINT(
(BgL_iz00_3581+((long)1)));}  else 
{ 
long BgL_iz00_18635;
BgL_iz00_18635 = 
(BgL_iz00_3581+((long)2)); 
BgL_iz00_3581 = BgL_iz00_18635; 
goto BGl_search1330ze70ze7zz__datez00;} } } } 

}



/* date-copy */
BGL_EXPORTED_DEF obj_t BGl_datezd2copyzd2zz__datez00(obj_t BgL_datez00_15, obj_t BgL_dayz00_16, obj_t BgL_hourz00_17, obj_t BgL_isdstz00_18, obj_t BgL_minz00_19, obj_t BgL_monthz00_20, obj_t BgL_nsecz00_21, obj_t BgL_secz00_22, obj_t BgL_timeza7oneza7_23, obj_t BgL_yearz00_24)
{
{ /* Llib/date.scm 239 */
{ /* Llib/date.scm 241 */
obj_t BgL_arg2712z00_8897;obj_t BgL_arg2713z00_8898;obj_t BgL_arg2714z00_8899;obj_t BgL_arg2715z00_8900;obj_t BgL_arg2716z00_8901;obj_t BgL_arg2717z00_8902;obj_t BgL_arg2718z00_8903;long BgL_arg2720z00_8904;bool_t BgL_arg2722z00_8905;obj_t BgL_arg2723z00_8906;
if(
CBOOL(BgL_nsecz00_21))
{ /* Llib/date.scm 241 */
BgL_arg2712z00_8897 = BgL_nsecz00_21; }  else 
{ /* Llib/date.scm 241 */
BGL_LONGLONG_T BgL_res5506z00_8916;
BgL_res5506z00_8916 = 
BGL_DATE_NANOSECOND(BgL_datez00_15); 
BgL_arg2712z00_8897 = 
make_bllong(BgL_res5506z00_8916); } 
if(
CBOOL(BgL_secz00_22))
{ /* Llib/date.scm 242 */
BgL_arg2713z00_8898 = BgL_secz00_22; }  else 
{ /* Llib/date.scm 242 */
int BgL_res5507z00_8918;
BgL_res5507z00_8918 = 
BGL_DATE_SECOND(BgL_datez00_15); 
BgL_arg2713z00_8898 = 
BINT(BgL_res5507z00_8918); } 
if(
CBOOL(BgL_minz00_19))
{ /* Llib/date.scm 243 */
BgL_arg2714z00_8899 = BgL_minz00_19; }  else 
{ /* Llib/date.scm 243 */
int BgL_res5508z00_8920;
BgL_res5508z00_8920 = 
BGL_DATE_MINUTE(BgL_datez00_15); 
BgL_arg2714z00_8899 = 
BINT(BgL_res5508z00_8920); } 
if(
CBOOL(BgL_hourz00_17))
{ /* Llib/date.scm 244 */
BgL_arg2715z00_8900 = BgL_hourz00_17; }  else 
{ /* Llib/date.scm 244 */
int BgL_res5509z00_8922;
BgL_res5509z00_8922 = 
BGL_DATE_HOUR(BgL_datez00_15); 
BgL_arg2715z00_8900 = 
BINT(BgL_res5509z00_8922); } 
if(
CBOOL(BgL_dayz00_16))
{ /* Llib/date.scm 245 */
BgL_arg2716z00_8901 = BgL_dayz00_16; }  else 
{ /* Llib/date.scm 245 */
int BgL_res5510z00_8924;
BgL_res5510z00_8924 = 
BGL_DATE_DAY(BgL_datez00_15); 
BgL_arg2716z00_8901 = 
BINT(BgL_res5510z00_8924); } 
if(
CBOOL(BgL_monthz00_20))
{ /* Llib/date.scm 246 */
BgL_arg2717z00_8902 = BgL_monthz00_20; }  else 
{ /* Llib/date.scm 246 */
int BgL_res5511z00_8926;
BgL_res5511z00_8926 = 
BGL_DATE_MONTH(BgL_datez00_15); 
BgL_arg2717z00_8902 = 
BINT(BgL_res5511z00_8926); } 
if(
CBOOL(BgL_yearz00_24))
{ /* Llib/date.scm 247 */
BgL_arg2718z00_8903 = BgL_yearz00_24; }  else 
{ /* Llib/date.scm 247 */
int BgL_res5512z00_8928;
BgL_res5512z00_8928 = 
BGL_DATE_YEAR(BgL_datez00_15); 
BgL_arg2718z00_8903 = 
BINT(BgL_res5512z00_8928); } 
{ /* Llib/date.scm 248 */
long BgL_res5513z00_8930;
BgL_res5513z00_8930 = 
BGL_DATE_TIMEZONE(BgL_datez00_15); 
BgL_arg2720z00_8904 = BgL_res5513z00_8930; } 
BgL_arg2722z00_8905 = 
BGL_DATE_ISGMT(BgL_datez00_15); 
if(
CBOOL(BgL_isdstz00_18))
{ /* Llib/date.scm 250 */
BgL_arg2723z00_8906 = BgL_isdstz00_18; }  else 
{ /* Llib/date.scm 250 */
BgL_arg2723z00_8906 = 
BINT(((long)-1)); } 
{ /* Llib/date.scm 240 */
int BgL_auxz00_18733;int BgL_auxz00_18724;int BgL_auxz00_18715;int BgL_auxz00_18706;int BgL_auxz00_18697;int BgL_auxz00_18688;int BgL_auxz00_18679;BGL_LONGLONG_T BgL_tmpz00_18670;
{ /* Llib/date.scm 250 */
obj_t BgL_tmpz00_18734;
if(
INTEGERP(BgL_arg2723z00_8906))
{ /* Llib/date.scm 250 */
BgL_tmpz00_18734 = BgL_arg2723z00_8906
; }  else 
{ 
obj_t BgL_auxz00_18737;
BgL_auxz00_18737 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11791)), BGl_string7673z00zz__datez00, BGl_string7524z00zz__datez00, BgL_arg2723z00_8906); 
FAILURE(BgL_auxz00_18737,BFALSE,BFALSE);} 
BgL_auxz00_18733 = 
CINT(BgL_tmpz00_18734); } 
{ /* Llib/date.scm 247 */
obj_t BgL_tmpz00_18725;
if(
INTEGERP(BgL_arg2718z00_8903))
{ /* Llib/date.scm 247 */
BgL_tmpz00_18725 = BgL_arg2718z00_8903
; }  else 
{ 
obj_t BgL_auxz00_18728;
BgL_auxz00_18728 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11718)), BGl_string7673z00zz__datez00, BGl_string7524z00zz__datez00, BgL_arg2718z00_8903); 
FAILURE(BgL_auxz00_18728,BFALSE,BFALSE);} 
BgL_auxz00_18724 = 
CINT(BgL_tmpz00_18725); } 
{ /* Llib/date.scm 246 */
obj_t BgL_tmpz00_18716;
if(
INTEGERP(BgL_arg2717z00_8902))
{ /* Llib/date.scm 246 */
BgL_tmpz00_18716 = BgL_arg2717z00_8902
; }  else 
{ 
obj_t BgL_auxz00_18719;
BgL_auxz00_18719 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11685)), BGl_string7673z00zz__datez00, BGl_string7524z00zz__datez00, BgL_arg2717z00_8902); 
FAILURE(BgL_auxz00_18719,BFALSE,BFALSE);} 
BgL_auxz00_18715 = 
CINT(BgL_tmpz00_18716); } 
{ /* Llib/date.scm 245 */
obj_t BgL_tmpz00_18707;
if(
INTEGERP(BgL_arg2716z00_8901))
{ /* Llib/date.scm 245 */
BgL_tmpz00_18707 = BgL_arg2716z00_8901
; }  else 
{ 
obj_t BgL_auxz00_18710;
BgL_auxz00_18710 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11650)), BGl_string7673z00zz__datez00, BGl_string7524z00zz__datez00, BgL_arg2716z00_8901); 
FAILURE(BgL_auxz00_18710,BFALSE,BFALSE);} 
BgL_auxz00_18706 = 
CINT(BgL_tmpz00_18707); } 
{ /* Llib/date.scm 244 */
obj_t BgL_tmpz00_18698;
if(
INTEGERP(BgL_arg2715z00_8900))
{ /* Llib/date.scm 244 */
BgL_tmpz00_18698 = BgL_arg2715z00_8900
; }  else 
{ 
obj_t BgL_auxz00_18701;
BgL_auxz00_18701 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11619)), BGl_string7673z00zz__datez00, BGl_string7524z00zz__datez00, BgL_arg2715z00_8900); 
FAILURE(BgL_auxz00_18701,BFALSE,BFALSE);} 
BgL_auxz00_18697 = 
CINT(BgL_tmpz00_18698); } 
{ /* Llib/date.scm 243 */
obj_t BgL_tmpz00_18689;
if(
INTEGERP(BgL_arg2714z00_8899))
{ /* Llib/date.scm 243 */
BgL_tmpz00_18689 = BgL_arg2714z00_8899
; }  else 
{ 
obj_t BgL_auxz00_18692;
BgL_auxz00_18692 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11586)), BGl_string7673z00zz__datez00, BGl_string7524z00zz__datez00, BgL_arg2714z00_8899); 
FAILURE(BgL_auxz00_18692,BFALSE,BFALSE);} 
BgL_auxz00_18688 = 
CINT(BgL_tmpz00_18689); } 
{ /* Llib/date.scm 242 */
obj_t BgL_tmpz00_18680;
if(
INTEGERP(BgL_arg2713z00_8898))
{ /* Llib/date.scm 242 */
BgL_tmpz00_18680 = BgL_arg2713z00_8898
; }  else 
{ 
obj_t BgL_auxz00_18683;
BgL_auxz00_18683 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11552)), BGl_string7673z00zz__datez00, BGl_string7524z00zz__datez00, BgL_arg2713z00_8898); 
FAILURE(BgL_auxz00_18683,BFALSE,BFALSE);} 
BgL_auxz00_18679 = 
CINT(BgL_tmpz00_18680); } 
{ /* Llib/date.scm 241 */
obj_t BgL_tmpz00_18671;
if(
LLONGP(BgL_arg2712z00_8897))
{ /* Llib/date.scm 241 */
BgL_tmpz00_18671 = BgL_arg2712z00_8897
; }  else 
{ 
obj_t BgL_auxz00_18674;
BgL_auxz00_18674 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)11518)), BGl_string7673z00zz__datez00, BGl_string7667z00zz__datez00, BgL_arg2712z00_8897); 
FAILURE(BgL_auxz00_18674,BFALSE,BFALSE);} 
BgL_tmpz00_18670 = 
BLLONG_TO_LLONG(BgL_tmpz00_18671); } 
return 
bgl_make_date(BgL_tmpz00_18670, BgL_auxz00_18679, BgL_auxz00_18688, BgL_auxz00_18697, BgL_auxz00_18706, BgL_auxz00_18715, BgL_auxz00_18724, BgL_arg2720z00_8904, BgL_arg2722z00_8905, BgL_auxz00_18733);} } } 

}



/* _date-update! */
obj_t BGl__datezd2updatez12zc0zz__datez00(obj_t BgL_env1343z00_36, obj_t BgL_opt1342z00_35)
{
{ /* Llib/date.scm 255 */
{ /* Llib/date.scm 255 */
obj_t BgL_datez00_3659;
BgL_datez00_3659 = 
VECTOR_REF(BgL_opt1342z00_35,((long)0)); 
{ /* Llib/date.scm 255 */
obj_t BgL_dayz00_3660;
BgL_dayz00_3660 = BFALSE; 
{ /* Llib/date.scm 255 */
obj_t BgL_hourz00_3661;
BgL_hourz00_3661 = BFALSE; 
{ /* Llib/date.scm 255 */
obj_t BgL_minz00_3662;
BgL_minz00_3662 = BFALSE; 
{ /* Llib/date.scm 255 */
obj_t BgL_monthz00_3663;
BgL_monthz00_3663 = BFALSE; 
{ /* Llib/date.scm 255 */
obj_t BgL_nsecz00_3664;
BgL_nsecz00_3664 = BFALSE; 
{ /* Llib/date.scm 255 */
obj_t BgL_secz00_3665;
BgL_secz00_3665 = BFALSE; 
{ /* Llib/date.scm 255 */
obj_t BgL_yearz00_3666;
BgL_yearz00_3666 = BFALSE; 
{ /* Llib/date.scm 255 */

{ 
long BgL_iz00_3667;
BgL_iz00_3667 = ((long)1); 
BgL_check1346z00_3668:
if(
(BgL_iz00_3667==
VECTOR_LENGTH(BgL_opt1342z00_35)))
{ /* Llib/date.scm 255 */BNIL; }  else 
{ /* Llib/date.scm 255 */
bool_t BgL_test8799z00_18747;
{ /* Llib/date.scm 255 */
obj_t BgL_arg2729z00_3674;
{ /* Llib/date.scm 255 */
bool_t BgL_test8800z00_18748;
{ /* Llib/date.scm 255 */
long BgL_tmpz00_18749;
BgL_tmpz00_18749 = 
VECTOR_LENGTH(BgL_opt1342z00_35); 
BgL_test8800z00_18748 = 
BOUND_CHECK(BgL_iz00_3667, BgL_tmpz00_18749); } 
if(BgL_test8800z00_18748)
{ /* Llib/date.scm 255 */
BgL_arg2729z00_3674 = 
VECTOR_REF(BgL_opt1342z00_35,BgL_iz00_3667); }  else 
{ 
obj_t BgL_auxz00_18753;
BgL_auxz00_18753 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)12018)), BGl_string7643z00zz__datez00, BgL_opt1342z00_35, 
(int)(
VECTOR_LENGTH(BgL_opt1342z00_35)), 
(int)(BgL_iz00_3667)); 
FAILURE(BgL_auxz00_18753,BFALSE,BFALSE);} } 
BgL_test8799z00_18747 = 
CBOOL(
BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_arg2729z00_3674, BGl_list7677z00zz__datez00)); } 
if(BgL_test8799z00_18747)
{ 
long BgL_iz00_18762;
BgL_iz00_18762 = 
(BgL_iz00_3667+((long)2)); 
BgL_iz00_3667 = BgL_iz00_18762; 
goto BgL_check1346z00_3668;}  else 
{ /* Llib/date.scm 255 */
obj_t BgL_arg2728z00_3673;
{ /* Llib/date.scm 255 */
bool_t BgL_test8801z00_18764;
{ /* Llib/date.scm 255 */
long BgL_tmpz00_18765;
BgL_tmpz00_18765 = 
VECTOR_LENGTH(BgL_opt1342z00_35); 
BgL_test8801z00_18764 = 
BOUND_CHECK(BgL_iz00_3667, BgL_tmpz00_18765); } 
if(BgL_test8801z00_18764)
{ /* Llib/date.scm 255 */
BgL_arg2728z00_3673 = 
VECTOR_REF(BgL_opt1342z00_35,BgL_iz00_3667); }  else 
{ 
obj_t BgL_auxz00_18769;
BgL_auxz00_18769 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)12018)), BGl_string7643z00zz__datez00, BgL_opt1342z00_35, 
(int)(
VECTOR_LENGTH(BgL_opt1342z00_35)), 
(int)(BgL_iz00_3667)); 
FAILURE(BgL_auxz00_18769,BFALSE,BFALSE);} } 
BGl_errorz00zz__errorz00(BGl_symbol7678z00zz__datez00, BGl_string7665z00zz__datez00, BgL_arg2728z00_3673); } } } 
{ /* Llib/date.scm 255 */
obj_t BgL_index1348z00_3675;
BgL_index1348z00_3675 = 
BGl_search1345ze70ze7zz__datez00(
VECTOR_LENGTH(BgL_opt1342z00_35), BgL_opt1342z00_35, BGl_keyword7645z00zz__datez00, ((long)1)); 
{ /* Llib/date.scm 255 */
bool_t BgL_test8802z00_18779;
{ /* Llib/date.scm 255 */
long BgL_n1z00_8953;
{ /* Llib/date.scm 255 */
obj_t BgL_tmpz00_18780;
if(
INTEGERP(BgL_index1348z00_3675))
{ /* Llib/date.scm 255 */
BgL_tmpz00_18780 = BgL_index1348z00_3675
; }  else 
{ 
obj_t BgL_auxz00_18783;
BgL_auxz00_18783 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)12018)), BGl_string7680z00zz__datez00, BGl_string7524z00zz__datez00, BgL_index1348z00_3675); 
FAILURE(BgL_auxz00_18783,BFALSE,BFALSE);} 
BgL_n1z00_8953 = 
(long)CINT(BgL_tmpz00_18780); } 
BgL_test8802z00_18779 = 
(BgL_n1z00_8953>=((long)0)); } 
if(BgL_test8802z00_18779)
{ 
long BgL_auxz00_18789;
{ /* Llib/date.scm 255 */
obj_t BgL_tmpz00_18790;
if(
INTEGERP(BgL_index1348z00_3675))
{ /* Llib/date.scm 255 */
BgL_tmpz00_18790 = BgL_index1348z00_3675
; }  else 
{ 
obj_t BgL_auxz00_18793;
BgL_auxz00_18793 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)12018)), BGl_string7680z00zz__datez00, BGl_string7524z00zz__datez00, BgL_index1348z00_3675); 
FAILURE(BgL_auxz00_18793,BFALSE,BFALSE);} 
BgL_auxz00_18789 = 
(long)CINT(BgL_tmpz00_18790); } 
BgL_dayz00_3660 = 
VECTOR_REF(BgL_opt1342z00_35,BgL_auxz00_18789); }  else 
{ /* Llib/date.scm 255 */BFALSE; } } } 
{ /* Llib/date.scm 255 */
obj_t BgL_index1349z00_3677;
BgL_index1349z00_3677 = 
BGl_search1345ze70ze7zz__datez00(
VECTOR_LENGTH(BgL_opt1342z00_35), BgL_opt1342z00_35, BGl_keyword7649z00zz__datez00, ((long)1)); 
{ /* Llib/date.scm 255 */
bool_t BgL_test8805z00_18801;
{ /* Llib/date.scm 255 */
long BgL_n1z00_8955;
{ /* Llib/date.scm 255 */
obj_t BgL_tmpz00_18802;
if(
INTEGERP(BgL_index1349z00_3677))
{ /* Llib/date.scm 255 */
BgL_tmpz00_18802 = BgL_index1349z00_3677
; }  else 
{ 
obj_t BgL_auxz00_18805;
BgL_auxz00_18805 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)12018)), BGl_string7680z00zz__datez00, BGl_string7524z00zz__datez00, BgL_index1349z00_3677); 
FAILURE(BgL_auxz00_18805,BFALSE,BFALSE);} 
BgL_n1z00_8955 = 
(long)CINT(BgL_tmpz00_18802); } 
BgL_test8805z00_18801 = 
(BgL_n1z00_8955>=((long)0)); } 
if(BgL_test8805z00_18801)
{ 
long BgL_auxz00_18811;
{ /* Llib/date.scm 255 */
obj_t BgL_tmpz00_18812;
if(
INTEGERP(BgL_index1349z00_3677))
{ /* Llib/date.scm 255 */
BgL_tmpz00_18812 = BgL_index1349z00_3677
; }  else 
{ 
obj_t BgL_auxz00_18815;
BgL_auxz00_18815 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)12018)), BGl_string7680z00zz__datez00, BGl_string7524z00zz__datez00, BgL_index1349z00_3677); 
FAILURE(BgL_auxz00_18815,BFALSE,BFALSE);} 
BgL_auxz00_18811 = 
(long)CINT(BgL_tmpz00_18812); } 
BgL_hourz00_3661 = 
VECTOR_REF(BgL_opt1342z00_35,BgL_auxz00_18811); }  else 
{ /* Llib/date.scm 255 */BFALSE; } } } 
{ /* Llib/date.scm 255 */
obj_t BgL_index1350z00_3679;
BgL_index1350z00_3679 = 
BGl_search1345ze70ze7zz__datez00(
VECTOR_LENGTH(BgL_opt1342z00_35), BgL_opt1342z00_35, BGl_keyword7651z00zz__datez00, ((long)1)); 
{ /* Llib/date.scm 255 */
bool_t BgL_test8808z00_18823;
{ /* Llib/date.scm 255 */
long BgL_n1z00_8957;
{ /* Llib/date.scm 255 */
obj_t BgL_tmpz00_18824;
if(
INTEGERP(BgL_index1350z00_3679))
{ /* Llib/date.scm 255 */
BgL_tmpz00_18824 = BgL_index1350z00_3679
; }  else 
{ 
obj_t BgL_auxz00_18827;
BgL_auxz00_18827 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)12018)), BGl_string7680z00zz__datez00, BGl_string7524z00zz__datez00, BgL_index1350z00_3679); 
FAILURE(BgL_auxz00_18827,BFALSE,BFALSE);} 
BgL_n1z00_8957 = 
(long)CINT(BgL_tmpz00_18824); } 
BgL_test8808z00_18823 = 
(BgL_n1z00_8957>=((long)0)); } 
if(BgL_test8808z00_18823)
{ 
long BgL_auxz00_18833;
{ /* Llib/date.scm 255 */
obj_t BgL_tmpz00_18834;
if(
INTEGERP(BgL_index1350z00_3679))
{ /* Llib/date.scm 255 */
BgL_tmpz00_18834 = BgL_index1350z00_3679
; }  else 
{ 
obj_t BgL_auxz00_18837;
BgL_auxz00_18837 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)12018)), BGl_string7680z00zz__datez00, BGl_string7524z00zz__datez00, BgL_index1350z00_3679); 
FAILURE(BgL_auxz00_18837,BFALSE,BFALSE);} 
BgL_auxz00_18833 = 
(long)CINT(BgL_tmpz00_18834); } 
BgL_minz00_3662 = 
VECTOR_REF(BgL_opt1342z00_35,BgL_auxz00_18833); }  else 
{ /* Llib/date.scm 255 */BFALSE; } } } 
{ /* Llib/date.scm 255 */
obj_t BgL_index1351z00_3681;
BgL_index1351z00_3681 = 
BGl_search1345ze70ze7zz__datez00(
VECTOR_LENGTH(BgL_opt1342z00_35), BgL_opt1342z00_35, BGl_keyword7653z00zz__datez00, ((long)1)); 
{ /* Llib/date.scm 255 */
bool_t BgL_test8811z00_18845;
{ /* Llib/date.scm 255 */
long BgL_n1z00_8959;
{ /* Llib/date.scm 255 */
obj_t BgL_tmpz00_18846;
if(
INTEGERP(BgL_index1351z00_3681))
{ /* Llib/date.scm 255 */
BgL_tmpz00_18846 = BgL_index1351z00_3681
; }  else 
{ 
obj_t BgL_auxz00_18849;
BgL_auxz00_18849 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)12018)), BGl_string7680z00zz__datez00, BGl_string7524z00zz__datez00, BgL_index1351z00_3681); 
FAILURE(BgL_auxz00_18849,BFALSE,BFALSE);} 
BgL_n1z00_8959 = 
(long)CINT(BgL_tmpz00_18846); } 
BgL_test8811z00_18845 = 
(BgL_n1z00_8959>=((long)0)); } 
if(BgL_test8811z00_18845)
{ 
long BgL_auxz00_18855;
{ /* Llib/date.scm 255 */
obj_t BgL_tmpz00_18856;
if(
INTEGERP(BgL_index1351z00_3681))
{ /* Llib/date.scm 255 */
BgL_tmpz00_18856 = BgL_index1351z00_3681
; }  else 
{ 
obj_t BgL_auxz00_18859;
BgL_auxz00_18859 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)12018)), BGl_string7680z00zz__datez00, BGl_string7524z00zz__datez00, BgL_index1351z00_3681); 
FAILURE(BgL_auxz00_18859,BFALSE,BFALSE);} 
BgL_auxz00_18855 = 
(long)CINT(BgL_tmpz00_18856); } 
BgL_monthz00_3663 = 
VECTOR_REF(BgL_opt1342z00_35,BgL_auxz00_18855); }  else 
{ /* Llib/date.scm 255 */BFALSE; } } } 
{ /* Llib/date.scm 255 */
obj_t BgL_index1352z00_3683;
BgL_index1352z00_3683 = 
BGl_search1345ze70ze7zz__datez00(
VECTOR_LENGTH(BgL_opt1342z00_35), BgL_opt1342z00_35, BGl_keyword7655z00zz__datez00, ((long)1)); 
{ /* Llib/date.scm 255 */
bool_t BgL_test8814z00_18867;
{ /* Llib/date.scm 255 */
long BgL_n1z00_8961;
{ /* Llib/date.scm 255 */
obj_t BgL_tmpz00_18868;
if(
INTEGERP(BgL_index1352z00_3683))
{ /* Llib/date.scm 255 */
BgL_tmpz00_18868 = BgL_index1352z00_3683
; }  else 
{ 
obj_t BgL_auxz00_18871;
BgL_auxz00_18871 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)12018)), BGl_string7680z00zz__datez00, BGl_string7524z00zz__datez00, BgL_index1352z00_3683); 
FAILURE(BgL_auxz00_18871,BFALSE,BFALSE);} 
BgL_n1z00_8961 = 
(long)CINT(BgL_tmpz00_18868); } 
BgL_test8814z00_18867 = 
(BgL_n1z00_8961>=((long)0)); } 
if(BgL_test8814z00_18867)
{ 
long BgL_auxz00_18877;
{ /* Llib/date.scm 255 */
obj_t BgL_tmpz00_18878;
if(
INTEGERP(BgL_index1352z00_3683))
{ /* Llib/date.scm 255 */
BgL_tmpz00_18878 = BgL_index1352z00_3683
; }  else 
{ 
obj_t BgL_auxz00_18881;
BgL_auxz00_18881 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)12018)), BGl_string7680z00zz__datez00, BGl_string7524z00zz__datez00, BgL_index1352z00_3683); 
FAILURE(BgL_auxz00_18881,BFALSE,BFALSE);} 
BgL_auxz00_18877 = 
(long)CINT(BgL_tmpz00_18878); } 
BgL_nsecz00_3664 = 
VECTOR_REF(BgL_opt1342z00_35,BgL_auxz00_18877); }  else 
{ /* Llib/date.scm 255 */BFALSE; } } } 
{ /* Llib/date.scm 255 */
obj_t BgL_index1353z00_3685;
BgL_index1353z00_3685 = 
BGl_search1345ze70ze7zz__datez00(
VECTOR_LENGTH(BgL_opt1342z00_35), BgL_opt1342z00_35, BGl_keyword7657z00zz__datez00, ((long)1)); 
{ /* Llib/date.scm 255 */
bool_t BgL_test8817z00_18889;
{ /* Llib/date.scm 255 */
long BgL_n1z00_8963;
{ /* Llib/date.scm 255 */
obj_t BgL_tmpz00_18890;
if(
INTEGERP(BgL_index1353z00_3685))
{ /* Llib/date.scm 255 */
BgL_tmpz00_18890 = BgL_index1353z00_3685
; }  else 
{ 
obj_t BgL_auxz00_18893;
BgL_auxz00_18893 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)12018)), BGl_string7680z00zz__datez00, BGl_string7524z00zz__datez00, BgL_index1353z00_3685); 
FAILURE(BgL_auxz00_18893,BFALSE,BFALSE);} 
BgL_n1z00_8963 = 
(long)CINT(BgL_tmpz00_18890); } 
BgL_test8817z00_18889 = 
(BgL_n1z00_8963>=((long)0)); } 
if(BgL_test8817z00_18889)
{ 
long BgL_auxz00_18899;
{ /* Llib/date.scm 255 */
obj_t BgL_tmpz00_18900;
if(
INTEGERP(BgL_index1353z00_3685))
{ /* Llib/date.scm 255 */
BgL_tmpz00_18900 = BgL_index1353z00_3685
; }  else 
{ 
obj_t BgL_auxz00_18903;
BgL_auxz00_18903 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)12018)), BGl_string7680z00zz__datez00, BGl_string7524z00zz__datez00, BgL_index1353z00_3685); 
FAILURE(BgL_auxz00_18903,BFALSE,BFALSE);} 
BgL_auxz00_18899 = 
(long)CINT(BgL_tmpz00_18900); } 
BgL_secz00_3665 = 
VECTOR_REF(BgL_opt1342z00_35,BgL_auxz00_18899); }  else 
{ /* Llib/date.scm 255 */BFALSE; } } } 
{ /* Llib/date.scm 255 */
obj_t BgL_index1354z00_3687;
BgL_index1354z00_3687 = 
BGl_search1345ze70ze7zz__datez00(
VECTOR_LENGTH(BgL_opt1342z00_35), BgL_opt1342z00_35, BGl_keyword7661z00zz__datez00, ((long)1)); 
{ /* Llib/date.scm 255 */
bool_t BgL_test8820z00_18911;
{ /* Llib/date.scm 255 */
long BgL_n1z00_8965;
{ /* Llib/date.scm 255 */
obj_t BgL_tmpz00_18912;
if(
INTEGERP(BgL_index1354z00_3687))
{ /* Llib/date.scm 255 */
BgL_tmpz00_18912 = BgL_index1354z00_3687
; }  else 
{ 
obj_t BgL_auxz00_18915;
BgL_auxz00_18915 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)12018)), BGl_string7680z00zz__datez00, BGl_string7524z00zz__datez00, BgL_index1354z00_3687); 
FAILURE(BgL_auxz00_18915,BFALSE,BFALSE);} 
BgL_n1z00_8965 = 
(long)CINT(BgL_tmpz00_18912); } 
BgL_test8820z00_18911 = 
(BgL_n1z00_8965>=((long)0)); } 
if(BgL_test8820z00_18911)
{ 
long BgL_auxz00_18921;
{ /* Llib/date.scm 255 */
obj_t BgL_tmpz00_18922;
if(
INTEGERP(BgL_index1354z00_3687))
{ /* Llib/date.scm 255 */
BgL_tmpz00_18922 = BgL_index1354z00_3687
; }  else 
{ 
obj_t BgL_auxz00_18925;
BgL_auxz00_18925 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)12018)), BGl_string7680z00zz__datez00, BGl_string7524z00zz__datez00, BgL_index1354z00_3687); 
FAILURE(BgL_auxz00_18925,BFALSE,BFALSE);} 
BgL_auxz00_18921 = 
(long)CINT(BgL_tmpz00_18922); } 
BgL_yearz00_3666 = 
VECTOR_REF(BgL_opt1342z00_35,BgL_auxz00_18921); }  else 
{ /* Llib/date.scm 255 */BFALSE; } } } 
{ /* Llib/date.scm 255 */
obj_t BgL_arg2739z00_3689;
BgL_arg2739z00_3689 = 
VECTOR_REF(BgL_opt1342z00_35,((long)0)); 
{ /* Llib/date.scm 255 */
obj_t BgL_dayz00_3690;
BgL_dayz00_3690 = BgL_dayz00_3660; 
{ /* Llib/date.scm 255 */
obj_t BgL_hourz00_3691;
BgL_hourz00_3691 = BgL_hourz00_3661; 
{ /* Llib/date.scm 255 */
obj_t BgL_minz00_3692;
BgL_minz00_3692 = BgL_minz00_3662; 
{ /* Llib/date.scm 255 */
obj_t BgL_monthz00_3693;
BgL_monthz00_3693 = BgL_monthz00_3663; 
{ /* Llib/date.scm 255 */
obj_t BgL_nsecz00_3694;
BgL_nsecz00_3694 = BgL_nsecz00_3664; 
{ /* Llib/date.scm 255 */
obj_t BgL_secz00_3695;
BgL_secz00_3695 = BgL_secz00_3665; 
{ /* Llib/date.scm 255 */
obj_t BgL_yearz00_3696;
BgL_yearz00_3696 = BgL_yearz00_3666; 
{ /* Llib/date.scm 255 */
obj_t BgL_auxz00_18932;
if(
BGL_DATEP(BgL_arg2739z00_3689))
{ /* Llib/date.scm 255 */
BgL_auxz00_18932 = BgL_arg2739z00_3689
; }  else 
{ 
obj_t BgL_auxz00_18935;
BgL_auxz00_18935 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)12018)), BGl_string7680z00zz__datez00, BGl_string7675z00zz__datez00, BgL_arg2739z00_3689); 
FAILURE(BgL_auxz00_18935,BFALSE,BFALSE);} 
return 
BGl_datezd2updatez12zc0zz__datez00(BgL_auxz00_18932, BgL_dayz00_3690, BgL_hourz00_3691, BgL_minz00_3692, BgL_monthz00_3693, BgL_nsecz00_3694, BgL_secz00_3695, BgL_yearz00_3696);} } } } } } } } } } } } } } } } } } } 

}



/* search1345~0 */
obj_t BGl_search1345ze70ze7zz__datez00(long BgL_l1344z00_11441, obj_t BgL_opt1342z00_11440, obj_t BgL_k1z00_3656, long BgL_iz00_3657)
{
{ /* Llib/date.scm 255 */
BGl_search1345ze70ze7zz__datez00:
if(
(BgL_iz00_3657==BgL_l1344z00_11441))
{ /* Llib/date.scm 255 */
return 
BINT(((long)-1));}  else 
{ /* Llib/date.scm 255 */
if(
(BgL_iz00_3657==
(BgL_l1344z00_11441-((long)1))))
{ /* Llib/date.scm 255 */
return 
BGl_errorz00zz__errorz00(BGl_symbol7678z00zz__datez00, BGl_string7681z00zz__datez00, 
BINT(
VECTOR_LENGTH(BgL_opt1342z00_11440)));}  else 
{ /* Llib/date.scm 255 */
obj_t BgL_vz00_3701;
BgL_vz00_3701 = 
VECTOR_REF(BgL_opt1342z00_11440,BgL_iz00_3657); 
if(
(BgL_vz00_3701==BgL_k1z00_3656))
{ /* Llib/date.scm 255 */
return 
BINT(
(BgL_iz00_3657+((long)1)));}  else 
{ 
long BgL_iz00_18954;
BgL_iz00_18954 = 
(BgL_iz00_3657+((long)2)); 
BgL_iz00_3657 = BgL_iz00_18954; 
goto BGl_search1345ze70ze7zz__datez00;} } } } 

}



/* date-update! */
BGL_EXPORTED_DEF obj_t BGl_datezd2updatez12zc0zz__datez00(obj_t BgL_datez00_27, obj_t BgL_dayz00_28, obj_t BgL_hourz00_29, obj_t BgL_minz00_30, obj_t BgL_monthz00_31, obj_t BgL_nsecz00_32, obj_t BgL_secz00_33, obj_t BgL_yearz00_34)
{
{ /* Llib/date.scm 255 */
{ /* Llib/date.scm 257 */
obj_t BgL_arg2750z00_3705;obj_t BgL_arg2751z00_3706;obj_t BgL_arg2752z00_3707;obj_t BgL_arg2753z00_3708;obj_t BgL_arg2756z00_3709;obj_t BgL_arg2759z00_3710;obj_t BgL_arg2760z00_3711;long BgL_arg2762z00_3712;bool_t BgL_arg2763z00_3713;
if(
CBOOL(BgL_nsecz00_32))
{ /* Llib/date.scm 257 */
BgL_arg2750z00_3705 = BgL_nsecz00_32; }  else 
{ /* Llib/date.scm 257 */
BGL_LONGLONG_T BgL_res5528z00_8968;
BgL_res5528z00_8968 = 
BGL_DATE_NANOSECOND(BgL_datez00_27); 
BgL_arg2750z00_3705 = 
make_bllong(BgL_res5528z00_8968); } 
if(
CBOOL(BgL_secz00_33))
{ /* Llib/date.scm 258 */
BgL_arg2751z00_3706 = BgL_secz00_33; }  else 
{ /* Llib/date.scm 258 */
int BgL_res5529z00_8970;
BgL_res5529z00_8970 = 
BGL_DATE_SECOND(BgL_datez00_27); 
BgL_arg2751z00_3706 = 
BINT(BgL_res5529z00_8970); } 
if(
CBOOL(BgL_minz00_30))
{ /* Llib/date.scm 259 */
BgL_arg2752z00_3707 = BgL_minz00_30; }  else 
{ /* Llib/date.scm 259 */
int BgL_res5530z00_8972;
BgL_res5530z00_8972 = 
BGL_DATE_MINUTE(BgL_datez00_27); 
BgL_arg2752z00_3707 = 
BINT(BgL_res5530z00_8972); } 
if(
CBOOL(BgL_hourz00_29))
{ /* Llib/date.scm 260 */
BgL_arg2753z00_3708 = BgL_hourz00_29; }  else 
{ /* Llib/date.scm 260 */
int BgL_res5531z00_8974;
BgL_res5531z00_8974 = 
BGL_DATE_HOUR(BgL_datez00_27); 
BgL_arg2753z00_3708 = 
BINT(BgL_res5531z00_8974); } 
if(
CBOOL(BgL_dayz00_28))
{ /* Llib/date.scm 261 */
BgL_arg2756z00_3709 = BgL_dayz00_28; }  else 
{ /* Llib/date.scm 261 */
int BgL_res5532z00_8976;
BgL_res5532z00_8976 = 
BGL_DATE_DAY(BgL_datez00_27); 
BgL_arg2756z00_3709 = 
BINT(BgL_res5532z00_8976); } 
if(
CBOOL(BgL_monthz00_31))
{ /* Llib/date.scm 262 */
BgL_arg2759z00_3710 = BgL_monthz00_31; }  else 
{ /* Llib/date.scm 262 */
int BgL_res5533z00_8978;
BgL_res5533z00_8978 = 
BGL_DATE_MONTH(BgL_datez00_27); 
BgL_arg2759z00_3710 = 
BINT(BgL_res5533z00_8978); } 
if(
CBOOL(BgL_yearz00_34))
{ /* Llib/date.scm 263 */
BgL_arg2760z00_3711 = BgL_yearz00_34; }  else 
{ /* Llib/date.scm 263 */
int BgL_res5534z00_8980;
BgL_res5534z00_8980 = 
BGL_DATE_YEAR(BgL_datez00_27); 
BgL_arg2760z00_3711 = 
BINT(BgL_res5534z00_8980); } 
{ /* Llib/date.scm 264 */
long BgL_res5535z00_8982;
BgL_res5535z00_8982 = 
BGL_DATE_TIMEZONE(BgL_datez00_27); 
BgL_arg2762z00_3712 = BgL_res5535z00_8982; } 
BgL_arg2763z00_3713 = 
BGL_DATE_ISGMT(BgL_datez00_27); 
{ /* Llib/date.scm 256 */
int BgL_auxz00_19040;int BgL_auxz00_19031;int BgL_auxz00_19022;int BgL_auxz00_19013;int BgL_auxz00_19004;int BgL_auxz00_18995;BGL_LONGLONG_T BgL_tmpz00_18986;
{ /* Llib/date.scm 263 */
obj_t BgL_tmpz00_19041;
if(
INTEGERP(BgL_arg2760z00_3711))
{ /* Llib/date.scm 263 */
BgL_tmpz00_19041 = BgL_arg2760z00_3711
; }  else 
{ 
obj_t BgL_auxz00_19044;
BgL_auxz00_19044 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)12344)), BGl_string7679z00zz__datez00, BGl_string7524z00zz__datez00, BgL_arg2760z00_3711); 
FAILURE(BgL_auxz00_19044,BFALSE,BFALSE);} 
BgL_auxz00_19040 = 
CINT(BgL_tmpz00_19041); } 
{ /* Llib/date.scm 262 */
obj_t BgL_tmpz00_19032;
if(
INTEGERP(BgL_arg2759z00_3710))
{ /* Llib/date.scm 262 */
BgL_tmpz00_19032 = BgL_arg2759z00_3710
; }  else 
{ 
obj_t BgL_auxz00_19035;
BgL_auxz00_19035 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)12311)), BGl_string7679z00zz__datez00, BGl_string7524z00zz__datez00, BgL_arg2759z00_3710); 
FAILURE(BgL_auxz00_19035,BFALSE,BFALSE);} 
BgL_auxz00_19031 = 
CINT(BgL_tmpz00_19032); } 
{ /* Llib/date.scm 261 */
obj_t BgL_tmpz00_19023;
if(
INTEGERP(BgL_arg2756z00_3709))
{ /* Llib/date.scm 261 */
BgL_tmpz00_19023 = BgL_arg2756z00_3709
; }  else 
{ 
obj_t BgL_auxz00_19026;
BgL_auxz00_19026 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)12276)), BGl_string7679z00zz__datez00, BGl_string7524z00zz__datez00, BgL_arg2756z00_3709); 
FAILURE(BgL_auxz00_19026,BFALSE,BFALSE);} 
BgL_auxz00_19022 = 
CINT(BgL_tmpz00_19023); } 
{ /* Llib/date.scm 260 */
obj_t BgL_tmpz00_19014;
if(
INTEGERP(BgL_arg2753z00_3708))
{ /* Llib/date.scm 260 */
BgL_tmpz00_19014 = BgL_arg2753z00_3708
; }  else 
{ 
obj_t BgL_auxz00_19017;
BgL_auxz00_19017 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)12245)), BGl_string7679z00zz__datez00, BGl_string7524z00zz__datez00, BgL_arg2753z00_3708); 
FAILURE(BgL_auxz00_19017,BFALSE,BFALSE);} 
BgL_auxz00_19013 = 
CINT(BgL_tmpz00_19014); } 
{ /* Llib/date.scm 259 */
obj_t BgL_tmpz00_19005;
if(
INTEGERP(BgL_arg2752z00_3707))
{ /* Llib/date.scm 259 */
BgL_tmpz00_19005 = BgL_arg2752z00_3707
; }  else 
{ 
obj_t BgL_auxz00_19008;
BgL_auxz00_19008 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)12212)), BGl_string7679z00zz__datez00, BGl_string7524z00zz__datez00, BgL_arg2752z00_3707); 
FAILURE(BgL_auxz00_19008,BFALSE,BFALSE);} 
BgL_auxz00_19004 = 
CINT(BgL_tmpz00_19005); } 
{ /* Llib/date.scm 258 */
obj_t BgL_tmpz00_18996;
if(
INTEGERP(BgL_arg2751z00_3706))
{ /* Llib/date.scm 258 */
BgL_tmpz00_18996 = BgL_arg2751z00_3706
; }  else 
{ 
obj_t BgL_auxz00_18999;
BgL_auxz00_18999 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)12178)), BGl_string7679z00zz__datez00, BGl_string7524z00zz__datez00, BgL_arg2751z00_3706); 
FAILURE(BgL_auxz00_18999,BFALSE,BFALSE);} 
BgL_auxz00_18995 = 
CINT(BgL_tmpz00_18996); } 
{ /* Llib/date.scm 257 */
obj_t BgL_tmpz00_18987;
if(
LLONGP(BgL_arg2750z00_3705))
{ /* Llib/date.scm 257 */
BgL_tmpz00_18987 = BgL_arg2750z00_3705
; }  else 
{ 
obj_t BgL_auxz00_18990;
BgL_auxz00_18990 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)12144)), BGl_string7679z00zz__datez00, BGl_string7667z00zz__datez00, BgL_arg2750z00_3705); 
FAILURE(BgL_auxz00_18990,BFALSE,BFALSE);} 
BgL_tmpz00_18986 = 
BLLONG_TO_LLONG(BgL_tmpz00_18987); } 
return 
bgl_update_date(BgL_datez00_27, BgL_tmpz00_18986, BgL_auxz00_18995, BgL_auxz00_19004, BgL_auxz00_19013, BgL_auxz00_19022, BgL_auxz00_19031, BgL_auxz00_19040, BgL_arg2762z00_3712, BgL_arg2763z00_3713, 
(int)(((long)-1)));} } } 

}



/* date->gmtdate! */
BGL_EXPORTED_DEF obj_t BGl_datezd2ze3gmtdatez12z23zz__datez00(obj_t BgL_datez00_37)
{
{ /* Llib/date.scm 271 */
return 
bgl_date_to_gmtdate(BgL_datez00_37);} 

}



/* &date->gmtdate! */
obj_t BGl_z62datezd2ze3gmtdatez12z41zz__datez00(obj_t BgL_envz00_11332, obj_t BgL_datez00_11333)
{
{ /* Llib/date.scm 271 */
{ /* Llib/date.scm 274 */
obj_t BgL_auxz00_19052;
if(
BGL_DATEP(BgL_datez00_11333))
{ /* Llib/date.scm 274 */
BgL_auxz00_19052 = BgL_datez00_11333
; }  else 
{ 
obj_t BgL_auxz00_19055;
BgL_auxz00_19055 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)12709)), BGl_string7682z00zz__datez00, BGl_string7675z00zz__datez00, BgL_datez00_11333); 
FAILURE(BgL_auxz00_19055,BFALSE,BFALSE);} 
return 
BGl_datezd2ze3gmtdatez12z23zz__datez00(BgL_auxz00_19052);} } 

}



/* date-update-millisecond! */
BGL_EXPORTED_DEF obj_t BGl_datezd2updatezd2millisecondz12z12zz__datez00(obj_t BgL_datez00_38, long BgL_msz00_39)
{
{ /* Llib/date.scm 282 */
{ /* Llib/date.scm 285 */
bool_t BgL_test8842z00_19060;
if(
(BgL_msz00_39>=((long)0)))
{ /* Llib/date.scm 285 */
BgL_test8842z00_19060 = 
(BgL_msz00_39<((long)1000))
; }  else 
{ /* Llib/date.scm 285 */
BgL_test8842z00_19060 = ((bool_t)0)
; } 
if(BgL_test8842z00_19060)
{ /* Llib/date.scm 286 */
int BgL_osecz00_3724;
{ /* Llib/date.scm 286 */
int BgL_res5538z00_8989;
BgL_res5538z00_8989 = 
BGL_DATE_SECOND(BgL_datez00_38); 
BgL_osecz00_3724 = BgL_res5538z00_8989; } 
BGL_DATE_UPDATE_MILLISECOND(BgL_datez00_38, BgL_msz00_39); 
return BgL_datez00_38;}  else 
{ /* Llib/date.scm 289 */
BGL_LONGLONG_T BgL_arg2766z00_3725;
{ /* Llib/date.scm 289 */
BGL_LONGLONG_T BgL_arg2767z00_3733;
{ /* Llib/date.scm 289 */
BGL_LONGLONG_T BgL_res5539z00_8991;
BgL_res5539z00_8991 = 
LONG_TO_LLONG(BgL_msz00_39); 
BgL_arg2767z00_3733 = BgL_res5539z00_8991; } 
BgL_arg2766z00_3725 = 
((16960 + ((BGL_LONGLONG_T)65536 * (((BGL_LONGLONG_T)15))))*BgL_arg2767z00_3733); } 
return 
BGl_datezd2updatez12zc0zz__datez00(BgL_datez00_38, BFALSE, BFALSE, BFALSE, BFALSE, 
make_bllong(BgL_arg2766z00_3725), BFALSE, BFALSE);} } } 

}



/* &date-update-millisecond! */
obj_t BGl_z62datezd2updatezd2millisecondz12z70zz__datez00(obj_t BgL_envz00_11334, obj_t BgL_datez00_11335, obj_t BgL_msz00_11336)
{
{ /* Llib/date.scm 282 */
{ /* Llib/date.scm 285 */
long BgL_auxz00_19077;obj_t BgL_auxz00_19070;
{ /* Llib/date.scm 285 */
obj_t BgL_tmpz00_19078;
if(
INTEGERP(BgL_msz00_11336))
{ /* Llib/date.scm 285 */
BgL_tmpz00_19078 = BgL_msz00_11336
; }  else 
{ 
obj_t BgL_auxz00_19081;
BgL_auxz00_19081 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)13151)), BGl_string7683z00zz__datez00, BGl_string7524z00zz__datez00, BgL_msz00_11336); 
FAILURE(BgL_auxz00_19081,BFALSE,BFALSE);} 
BgL_auxz00_19077 = 
(long)CINT(BgL_tmpz00_19078); } 
if(
BGL_DATEP(BgL_datez00_11335))
{ /* Llib/date.scm 285 */
BgL_auxz00_19070 = BgL_datez00_11335
; }  else 
{ 
obj_t BgL_auxz00_19073;
BgL_auxz00_19073 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)13151)), BGl_string7683z00zz__datez00, BGl_string7675z00zz__datez00, BgL_datez00_11335); 
FAILURE(BgL_auxz00_19073,BFALSE,BFALSE);} 
return 
BGl_datezd2updatezd2millisecondz12z12zz__datez00(BgL_auxz00_19070, BgL_auxz00_19077);} } 

}



/* date-update-second! */
BGL_EXPORTED_DEF obj_t BGl_datezd2updatezd2secondz12z12zz__datez00(obj_t BgL_datez00_40, long BgL_secz00_41)
{
{ /* Llib/date.scm 296 */
{ /* Llib/date.scm 299 */
bool_t BgL_test8846z00_19087;
if(
(BgL_secz00_41>=((long)0)))
{ /* Llib/date.scm 299 */
BgL_test8846z00_19087 = 
(BgL_secz00_41<((long)60))
; }  else 
{ /* Llib/date.scm 299 */
BgL_test8846z00_19087 = ((bool_t)0)
; } 
if(BgL_test8846z00_19087)
{ /* Llib/date.scm 300 */
int BgL_osecz00_3737;
{ /* Llib/date.scm 300 */
int BgL_res5543z00_9000;
BgL_res5543z00_9000 = 
BGL_DATE_SECOND(BgL_datez00_40); 
BgL_osecz00_3737 = BgL_res5543z00_9000; } 
BGL_DATE_UPDATE_SECOND(BgL_datez00_40, BgL_secz00_41); 
{ /* Llib/date.scm 302 */
long BgL_arg2770z00_3738;
{ /* Llib/date.scm 302 */
long BgL_arg2771z00_3739;long BgL_arg2774z00_3740;
BgL_arg2771z00_3739 = 
BGL_DATE_TIME(BgL_datez00_40); 
BgL_arg2774z00_3740 = 
(BgL_secz00_41-
(long)(BgL_osecz00_3737)); 
BgL_arg2770z00_3738 = 
(BgL_arg2771z00_3739+BgL_arg2774z00_3740); } 
BGL_DATE_UPDATE_TIME(BgL_datez00_40, BgL_arg2770z00_3738); } 
return BgL_datez00_40;}  else 
{ /* Llib/date.scm 299 */
return 
BGl_datezd2updatez12zc0zz__datez00(BgL_datez00_40, BFALSE, BFALSE, BFALSE, BFALSE, BFALSE, 
BINT(BgL_secz00_41), BFALSE);} } } 

}



/* &date-update-second! */
obj_t BGl_z62datezd2updatezd2secondz12z70zz__datez00(obj_t BgL_envz00_11337, obj_t BgL_datez00_11338, obj_t BgL_secz00_11339)
{
{ /* Llib/date.scm 296 */
{ /* Llib/date.scm 299 */
long BgL_auxz00_19107;obj_t BgL_auxz00_19100;
{ /* Llib/date.scm 299 */
obj_t BgL_tmpz00_19108;
if(
INTEGERP(BgL_secz00_11339))
{ /* Llib/date.scm 299 */
BgL_tmpz00_19108 = BgL_secz00_11339
; }  else 
{ 
obj_t BgL_auxz00_19111;
BgL_auxz00_19111 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)13739)), BGl_string7684z00zz__datez00, BGl_string7524z00zz__datez00, BgL_secz00_11339); 
FAILURE(BgL_auxz00_19111,BFALSE,BFALSE);} 
BgL_auxz00_19107 = 
(long)CINT(BgL_tmpz00_19108); } 
if(
BGL_DATEP(BgL_datez00_11338))
{ /* Llib/date.scm 299 */
BgL_auxz00_19100 = BgL_datez00_11338
; }  else 
{ 
obj_t BgL_auxz00_19103;
BgL_auxz00_19103 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)13739)), BGl_string7684z00zz__datez00, BGl_string7675z00zz__datez00, BgL_datez00_11338); 
FAILURE(BgL_auxz00_19103,BFALSE,BFALSE);} 
return 
BGl_datezd2updatezd2secondz12z12zz__datez00(BgL_auxz00_19100, BgL_auxz00_19107);} } 

}



/* date-update-minute! */
BGL_EXPORTED_DEF obj_t BGl_datezd2updatezd2minutez12z12zz__datez00(obj_t BgL_datez00_42, long BgL_minz00_43)
{
{ /* Llib/date.scm 311 */
{ /* Llib/date.scm 314 */
bool_t BgL_test8850z00_19117;
if(
(BgL_minz00_43>=((long)0)))
{ /* Llib/date.scm 314 */
BgL_test8850z00_19117 = 
(BgL_minz00_43<((long)60))
; }  else 
{ /* Llib/date.scm 314 */
BgL_test8850z00_19117 = ((bool_t)0)
; } 
if(BgL_test8850z00_19117)
{ /* Llib/date.scm 315 */
int BgL_ominz00_3751;
{ /* Llib/date.scm 315 */
int BgL_res5548z00_9012;
BgL_res5548z00_9012 = 
BGL_DATE_MINUTE(BgL_datez00_42); 
BgL_ominz00_3751 = BgL_res5548z00_9012; } 
BGL_DATE_UPDATE_MINUTE(BgL_datez00_42, BgL_minz00_43); 
{ /* Llib/date.scm 318 */
long BgL_arg2778z00_3752;
{ /* Llib/date.scm 318 */
long BgL_arg2779z00_3753;long BgL_arg2782z00_3754;
BgL_arg2779z00_3753 = 
BGL_DATE_TIME(BgL_datez00_42); 
BgL_arg2782z00_3754 = 
(((long)60)*
(BgL_minz00_43-
(long)(BgL_ominz00_3751))); 
BgL_arg2778z00_3752 = 
(BgL_arg2779z00_3753+BgL_arg2782z00_3754); } 
BGL_DATE_UPDATE_TIME(BgL_datez00_42, BgL_arg2778z00_3752); } 
return BgL_datez00_42;}  else 
{ /* Llib/date.scm 314 */
return 
BGl_datezd2updatez12zc0zz__datez00(BgL_datez00_42, BFALSE, BFALSE, 
BINT(BgL_minz00_43), BFALSE, BFALSE, BFALSE, BFALSE);} } } 

}



/* &date-update-minute! */
obj_t BGl_z62datezd2updatezd2minutez12z70zz__datez00(obj_t BgL_envz00_11340, obj_t BgL_datez00_11341, obj_t BgL_minz00_11342)
{
{ /* Llib/date.scm 311 */
{ /* Llib/date.scm 314 */
long BgL_auxz00_19138;obj_t BgL_auxz00_19131;
{ /* Llib/date.scm 314 */
obj_t BgL_tmpz00_19139;
if(
INTEGERP(BgL_minz00_11342))
{ /* Llib/date.scm 314 */
BgL_tmpz00_19139 = BgL_minz00_11342
; }  else 
{ 
obj_t BgL_auxz00_19142;
BgL_auxz00_19142 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)14324)), BGl_string7685z00zz__datez00, BGl_string7524z00zz__datez00, BgL_minz00_11342); 
FAILURE(BgL_auxz00_19142,BFALSE,BFALSE);} 
BgL_auxz00_19138 = 
(long)CINT(BgL_tmpz00_19139); } 
if(
BGL_DATEP(BgL_datez00_11341))
{ /* Llib/date.scm 314 */
BgL_auxz00_19131 = BgL_datez00_11341
; }  else 
{ 
obj_t BgL_auxz00_19134;
BgL_auxz00_19134 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)14324)), BGl_string7685z00zz__datez00, BGl_string7675z00zz__datez00, BgL_datez00_11341); 
FAILURE(BgL_auxz00_19134,BFALSE,BFALSE);} 
return 
BGl_datezd2updatezd2minutez12z12zz__datez00(BgL_auxz00_19131, BgL_auxz00_19138);} } 

}



/* integer->second */
BGL_EXPORTED_DEF long BGl_integerzd2ze3secondz31zz__datez00(long BgL_iz00_44)
{
{ /* Llib/date.scm 327 */
return 
(long)(BgL_iz00_44);} 

}



/* &integer->second */
obj_t BGl_z62integerzd2ze3secondz53zz__datez00(obj_t BgL_envz00_11343, obj_t BgL_iz00_11344)
{
{ /* Llib/date.scm 327 */
{ /* Llib/date.scm 328 */
long BgL_tmpz00_19149;
{ /* Llib/date.scm 328 */
long BgL_auxz00_19150;
{ /* Llib/date.scm 328 */
obj_t BgL_tmpz00_19151;
if(
INTEGERP(BgL_iz00_11344))
{ /* Llib/date.scm 328 */
BgL_tmpz00_19151 = BgL_iz00_11344
; }  else 
{ 
obj_t BgL_auxz00_19154;
BgL_auxz00_19154 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)14881)), BGl_string7686z00zz__datez00, BGl_string7524z00zz__datez00, BgL_iz00_11344); 
FAILURE(BgL_auxz00_19154,BFALSE,BFALSE);} 
BgL_auxz00_19150 = 
(long)CINT(BgL_tmpz00_19151); } 
BgL_tmpz00_19149 = 
BGl_integerzd2ze3secondz31zz__datez00(BgL_auxz00_19150); } 
return 
make_belong(BgL_tmpz00_19149);} } 

}



/* date-nanosecond */
BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_datezd2nanosecondzd2zz__datez00(obj_t BgL_dz00_45)
{
{ /* Llib/date.scm 333 */
return 
BGL_DATE_NANOSECOND(BgL_dz00_45);} 

}



/* &date-nanosecond */
obj_t BGl_z62datezd2nanosecondzb0zz__datez00(obj_t BgL_envz00_11345, obj_t BgL_dz00_11346)
{
{ /* Llib/date.scm 333 */
{ /* Llib/date.scm 334 */
BGL_LONGLONG_T BgL_tmpz00_19162;
{ /* Llib/date.scm 334 */
obj_t BgL_auxz00_19163;
if(
BGL_DATEP(BgL_dz00_11346))
{ /* Llib/date.scm 334 */
BgL_auxz00_19163 = BgL_dz00_11346
; }  else 
{ 
obj_t BgL_auxz00_19166;
BgL_auxz00_19166 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)15175)), BGl_string7687z00zz__datez00, BGl_string7675z00zz__datez00, BgL_dz00_11346); 
FAILURE(BgL_auxz00_19166,BFALSE,BFALSE);} 
BgL_tmpz00_19162 = 
BGl_datezd2nanosecondzd2zz__datez00(BgL_auxz00_19163); } 
return 
make_bllong(BgL_tmpz00_19162);} } 

}



/* date-millisecond */
BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_datezd2millisecondzd2zz__datez00(obj_t BgL_dz00_46)
{
{ /* Llib/date.scm 339 */
{ /* Llib/date.scm 340 */
long BgL_tmpz00_19172;
BgL_tmpz00_19172 = 
BGL_DATE_MILLISECOND(BgL_dz00_46); 
return 
LONG_TO_LLONG(BgL_tmpz00_19172);} } 

}



/* &date-millisecond */
obj_t BGl_z62datezd2millisecondzb0zz__datez00(obj_t BgL_envz00_11347, obj_t BgL_dz00_11348)
{
{ /* Llib/date.scm 339 */
{ /* Llib/date.scm 340 */
BGL_LONGLONG_T BgL_tmpz00_19175;
{ /* Llib/date.scm 340 */
obj_t BgL_auxz00_19176;
if(
BGL_DATEP(BgL_dz00_11348))
{ /* Llib/date.scm 340 */
BgL_auxz00_19176 = BgL_dz00_11348
; }  else 
{ 
obj_t BgL_auxz00_19179;
BgL_auxz00_19179 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)15465)), BGl_string7688z00zz__datez00, BGl_string7675z00zz__datez00, BgL_dz00_11348); 
FAILURE(BgL_auxz00_19179,BFALSE,BFALSE);} 
BgL_tmpz00_19175 = 
BGl_datezd2millisecondzd2zz__datez00(BgL_auxz00_19176); } 
return 
make_bllong(BgL_tmpz00_19175);} } 

}



/* date-second */
BGL_EXPORTED_DEF int BGl_datezd2secondzd2zz__datez00(obj_t BgL_dz00_47)
{
{ /* Llib/date.scm 345 */
return 
BGL_DATE_SECOND(BgL_dz00_47);} 

}



/* &date-second */
obj_t BGl_z62datezd2secondzb0zz__datez00(obj_t BgL_envz00_11349, obj_t BgL_dz00_11350)
{
{ /* Llib/date.scm 345 */
{ /* Llib/date.scm 346 */
int BgL_tmpz00_19186;
{ /* Llib/date.scm 346 */
obj_t BgL_auxz00_19187;
if(
BGL_DATEP(BgL_dz00_11350))
{ /* Llib/date.scm 346 */
BgL_auxz00_19187 = BgL_dz00_11350
; }  else 
{ 
obj_t BgL_auxz00_19190;
BgL_auxz00_19190 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)15751)), BGl_string7689z00zz__datez00, BGl_string7675z00zz__datez00, BgL_dz00_11350); 
FAILURE(BgL_auxz00_19190,BFALSE,BFALSE);} 
BgL_tmpz00_19186 = 
BGl_datezd2secondzd2zz__datez00(BgL_auxz00_19187); } 
return 
BINT(BgL_tmpz00_19186);} } 

}



/* date-minute */
BGL_EXPORTED_DEF int BGl_datezd2minutezd2zz__datez00(obj_t BgL_dz00_48)
{
{ /* Llib/date.scm 351 */
return 
BGL_DATE_MINUTE(BgL_dz00_48);} 

}



/* &date-minute */
obj_t BGl_z62datezd2minutezb0zz__datez00(obj_t BgL_envz00_11351, obj_t BgL_dz00_11352)
{
{ /* Llib/date.scm 351 */
{ /* Llib/date.scm 352 */
int BgL_tmpz00_19197;
{ /* Llib/date.scm 352 */
obj_t BgL_auxz00_19198;
if(
BGL_DATEP(BgL_dz00_11352))
{ /* Llib/date.scm 352 */
BgL_auxz00_19198 = BgL_dz00_11352
; }  else 
{ 
obj_t BgL_auxz00_19201;
BgL_auxz00_19201 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)16032)), BGl_string7690z00zz__datez00, BGl_string7675z00zz__datez00, BgL_dz00_11352); 
FAILURE(BgL_auxz00_19201,BFALSE,BFALSE);} 
BgL_tmpz00_19197 = 
BGl_datezd2minutezd2zz__datez00(BgL_auxz00_19198); } 
return 
BINT(BgL_tmpz00_19197);} } 

}



/* date-hour */
BGL_EXPORTED_DEF int BGl_datezd2hourzd2zz__datez00(obj_t BgL_dz00_49)
{
{ /* Llib/date.scm 357 */
return 
BGL_DATE_HOUR(BgL_dz00_49);} 

}



/* &date-hour */
obj_t BGl_z62datezd2hourzb0zz__datez00(obj_t BgL_envz00_11353, obj_t BgL_dz00_11354)
{
{ /* Llib/date.scm 357 */
{ /* Llib/date.scm 358 */
int BgL_tmpz00_19208;
{ /* Llib/date.scm 358 */
obj_t BgL_auxz00_19209;
if(
BGL_DATEP(BgL_dz00_11354))
{ /* Llib/date.scm 358 */
BgL_auxz00_19209 = BgL_dz00_11354
; }  else 
{ 
obj_t BgL_auxz00_19212;
BgL_auxz00_19212 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)16311)), BGl_string7691z00zz__datez00, BGl_string7675z00zz__datez00, BgL_dz00_11354); 
FAILURE(BgL_auxz00_19212,BFALSE,BFALSE);} 
BgL_tmpz00_19208 = 
BGl_datezd2hourzd2zz__datez00(BgL_auxz00_19209); } 
return 
BINT(BgL_tmpz00_19208);} } 

}



/* date-day */
BGL_EXPORTED_DEF int BGl_datezd2dayzd2zz__datez00(obj_t BgL_dz00_50)
{
{ /* Llib/date.scm 363 */
return 
BGL_DATE_DAY(BgL_dz00_50);} 

}



/* &date-day */
obj_t BGl_z62datezd2dayzb0zz__datez00(obj_t BgL_envz00_11355, obj_t BgL_dz00_11356)
{
{ /* Llib/date.scm 363 */
{ /* Llib/date.scm 364 */
int BgL_tmpz00_19219;
{ /* Llib/date.scm 364 */
obj_t BgL_auxz00_19220;
if(
BGL_DATEP(BgL_dz00_11356))
{ /* Llib/date.scm 364 */
BgL_auxz00_19220 = BgL_dz00_11356
; }  else 
{ 
obj_t BgL_auxz00_19223;
BgL_auxz00_19223 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)16587)), BGl_string7692z00zz__datez00, BGl_string7675z00zz__datez00, BgL_dz00_11356); 
FAILURE(BgL_auxz00_19223,BFALSE,BFALSE);} 
BgL_tmpz00_19219 = 
BGl_datezd2dayzd2zz__datez00(BgL_auxz00_19220); } 
return 
BINT(BgL_tmpz00_19219);} } 

}



/* date-week-day */
BGL_EXPORTED_DEF int BGl_datezd2weekzd2dayz00zz__datez00(obj_t BgL_dz00_51)
{
{ /* Llib/date.scm 369 */
return 
BGL_DATE_WDAY(BgL_dz00_51);} 

}



/* &date-week-day */
obj_t BGl_z62datezd2weekzd2dayz62zz__datez00(obj_t BgL_envz00_11357, obj_t BgL_dz00_11358)
{
{ /* Llib/date.scm 369 */
{ /* Llib/date.scm 370 */
int BgL_tmpz00_19230;
{ /* Llib/date.scm 370 */
obj_t BgL_auxz00_19231;
if(
BGL_DATEP(BgL_dz00_11358))
{ /* Llib/date.scm 370 */
BgL_auxz00_19231 = BgL_dz00_11358
; }  else 
{ 
obj_t BgL_auxz00_19234;
BgL_auxz00_19234 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)16867)), BGl_string7693z00zz__datez00, BGl_string7675z00zz__datez00, BgL_dz00_11358); 
FAILURE(BgL_auxz00_19234,BFALSE,BFALSE);} 
BgL_tmpz00_19230 = 
BGl_datezd2weekzd2dayz00zz__datez00(BgL_auxz00_19231); } 
return 
BINT(BgL_tmpz00_19230);} } 

}



/* date-wday */
BGL_EXPORTED_DEF int BGl_datezd2wdayzd2zz__datez00(obj_t BgL_dz00_52)
{
{ /* Llib/date.scm 375 */
return 
BGL_DATE_WDAY(BgL_dz00_52);} 

}



/* &date-wday */
obj_t BGl_z62datezd2wdayzb0zz__datez00(obj_t BgL_envz00_11359, obj_t BgL_dz00_11360)
{
{ /* Llib/date.scm 375 */
{ /* Llib/date.scm 376 */
int BgL_tmpz00_19241;
{ /* Llib/date.scm 376 */
obj_t BgL_auxz00_19242;
if(
BGL_DATEP(BgL_dz00_11360))
{ /* Llib/date.scm 376 */
BgL_auxz00_19242 = BgL_dz00_11360
; }  else 
{ 
obj_t BgL_auxz00_19245;
BgL_auxz00_19245 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)17144)), BGl_string7694z00zz__datez00, BGl_string7675z00zz__datez00, BgL_dz00_11360); 
FAILURE(BgL_auxz00_19245,BFALSE,BFALSE);} 
BgL_tmpz00_19241 = 
BGl_datezd2wdayzd2zz__datez00(BgL_auxz00_19242); } 
return 
BINT(BgL_tmpz00_19241);} } 

}



/* date-year-day */
BGL_EXPORTED_DEF int BGl_datezd2yearzd2dayz00zz__datez00(obj_t BgL_dz00_53)
{
{ /* Llib/date.scm 381 */
return 
BGL_DATE_YDAY(BgL_dz00_53);} 

}



/* &date-year-day */
obj_t BGl_z62datezd2yearzd2dayz62zz__datez00(obj_t BgL_envz00_11361, obj_t BgL_dz00_11362)
{
{ /* Llib/date.scm 381 */
{ /* Llib/date.scm 382 */
int BgL_tmpz00_19252;
{ /* Llib/date.scm 382 */
obj_t BgL_auxz00_19253;
if(
BGL_DATEP(BgL_dz00_11362))
{ /* Llib/date.scm 382 */
BgL_auxz00_19253 = BgL_dz00_11362
; }  else 
{ 
obj_t BgL_auxz00_19256;
BgL_auxz00_19256 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)17425)), BGl_string7695z00zz__datez00, BGl_string7675z00zz__datez00, BgL_dz00_11362); 
FAILURE(BgL_auxz00_19256,BFALSE,BFALSE);} 
BgL_tmpz00_19252 = 
BGl_datezd2yearzd2dayz00zz__datez00(BgL_auxz00_19253); } 
return 
BINT(BgL_tmpz00_19252);} } 

}



/* date-yday */
BGL_EXPORTED_DEF int BGl_datezd2ydayzd2zz__datez00(obj_t BgL_dz00_54)
{
{ /* Llib/date.scm 387 */
return 
BGL_DATE_YDAY(BgL_dz00_54);} 

}



/* &date-yday */
obj_t BGl_z62datezd2ydayzb0zz__datez00(obj_t BgL_envz00_11363, obj_t BgL_dz00_11364)
{
{ /* Llib/date.scm 387 */
{ /* Llib/date.scm 388 */
int BgL_tmpz00_19263;
{ /* Llib/date.scm 388 */
obj_t BgL_auxz00_19264;
if(
BGL_DATEP(BgL_dz00_11364))
{ /* Llib/date.scm 388 */
BgL_auxz00_19264 = BgL_dz00_11364
; }  else 
{ 
obj_t BgL_auxz00_19267;
BgL_auxz00_19267 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)17702)), BGl_string7696z00zz__datez00, BGl_string7675z00zz__datez00, BgL_dz00_11364); 
FAILURE(BgL_auxz00_19267,BFALSE,BFALSE);} 
BgL_tmpz00_19263 = 
BGl_datezd2ydayzd2zz__datez00(BgL_auxz00_19264); } 
return 
BINT(BgL_tmpz00_19263);} } 

}



/* date-month */
BGL_EXPORTED_DEF int BGl_datezd2monthzd2zz__datez00(obj_t BgL_dz00_55)
{
{ /* Llib/date.scm 393 */
return 
BGL_DATE_MONTH(BgL_dz00_55);} 

}



/* &date-month */
obj_t BGl_z62datezd2monthzb0zz__datez00(obj_t BgL_envz00_11365, obj_t BgL_dz00_11366)
{
{ /* Llib/date.scm 393 */
{ /* Llib/date.scm 394 */
int BgL_tmpz00_19274;
{ /* Llib/date.scm 394 */
obj_t BgL_auxz00_19275;
if(
BGL_DATEP(BgL_dz00_11366))
{ /* Llib/date.scm 394 */
BgL_auxz00_19275 = BgL_dz00_11366
; }  else 
{ 
obj_t BgL_auxz00_19278;
BgL_auxz00_19278 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)17980)), BGl_string7697z00zz__datez00, BGl_string7675z00zz__datez00, BgL_dz00_11366); 
FAILURE(BgL_auxz00_19278,BFALSE,BFALSE);} 
BgL_tmpz00_19274 = 
BGl_datezd2monthzd2zz__datez00(BgL_auxz00_19275); } 
return 
BINT(BgL_tmpz00_19274);} } 

}



/* date-year */
BGL_EXPORTED_DEF int BGl_datezd2yearzd2zz__datez00(obj_t BgL_dz00_56)
{
{ /* Llib/date.scm 399 */
return 
BGL_DATE_YEAR(BgL_dz00_56);} 

}



/* &date-year */
obj_t BGl_z62datezd2yearzb0zz__datez00(obj_t BgL_envz00_11367, obj_t BgL_dz00_11368)
{
{ /* Llib/date.scm 399 */
{ /* Llib/date.scm 400 */
int BgL_tmpz00_19285;
{ /* Llib/date.scm 400 */
obj_t BgL_auxz00_19286;
if(
BGL_DATEP(BgL_dz00_11368))
{ /* Llib/date.scm 400 */
BgL_auxz00_19286 = BgL_dz00_11368
; }  else 
{ 
obj_t BgL_auxz00_19289;
BgL_auxz00_19289 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)18258)), BGl_string7698z00zz__datez00, BGl_string7675z00zz__datez00, BgL_dz00_11368); 
FAILURE(BgL_auxz00_19289,BFALSE,BFALSE);} 
BgL_tmpz00_19285 = 
BGl_datezd2yearzd2zz__datez00(BgL_auxz00_19286); } 
return 
BINT(BgL_tmpz00_19285);} } 

}



/* date-timezone */
BGL_EXPORTED_DEF long BGl_datezd2timeza7onez75zz__datez00(obj_t BgL_dz00_57)
{
{ /* Llib/date.scm 405 */
return 
BGL_DATE_TIMEZONE(BgL_dz00_57);} 

}



/* &date-timezone */
obj_t BGl_z62datezd2timeza7onez17zz__datez00(obj_t BgL_envz00_11369, obj_t BgL_dz00_11370)
{
{ /* Llib/date.scm 405 */
{ /* Llib/date.scm 406 */
long BgL_tmpz00_19296;
{ /* Llib/date.scm 406 */
obj_t BgL_auxz00_19297;
if(
BGL_DATEP(BgL_dz00_11370))
{ /* Llib/date.scm 406 */
BgL_auxz00_19297 = BgL_dz00_11370
; }  else 
{ 
obj_t BgL_auxz00_19300;
BgL_auxz00_19300 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)18539)), BGl_string7699z00zz__datez00, BGl_string7675z00zz__datez00, BgL_dz00_11370); 
FAILURE(BgL_auxz00_19300,BFALSE,BFALSE);} 
BgL_tmpz00_19296 = 
BGl_datezd2timeza7onez75zz__datez00(BgL_auxz00_19297); } 
return 
BINT(BgL_tmpz00_19296);} } 

}



/* date-zone-offset */
BGL_EXPORTED_DEF long BGl_datezd2za7onezd2offsetza7zz__datez00(obj_t BgL_dz00_58)
{
{ /* Llib/date.scm 411 */
{ /* Llib/date.scm 412 */
long BgL_arg2784z00_13773;
BgL_arg2784z00_13773 = 
BGL_DATE_TIMEZONE(BgL_dz00_58); 
return 
(((long)3600)*BgL_arg2784z00_13773);} } 

}



/* &date-zone-offset */
obj_t BGl_z62datezd2za7onezd2offsetzc5zz__datez00(obj_t BgL_envz00_11371, obj_t BgL_dz00_11372)
{
{ /* Llib/date.scm 411 */
{ /* Llib/date.scm 412 */
long BgL_tmpz00_19308;
{ /* Llib/date.scm 412 */
obj_t BgL_auxz00_19309;
if(
BGL_DATEP(BgL_dz00_11372))
{ /* Llib/date.scm 412 */
BgL_auxz00_19309 = BgL_dz00_11372
; }  else 
{ 
obj_t BgL_auxz00_19312;
BgL_auxz00_19312 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)18837)), BGl_string7700z00zz__datez00, BGl_string7675z00zz__datez00, BgL_dz00_11372); 
FAILURE(BgL_auxz00_19312,BFALSE,BFALSE);} 
BgL_tmpz00_19308 = 
BGl_datezd2za7onezd2offsetza7zz__datez00(BgL_auxz00_19309); } 
return 
BINT(BgL_tmpz00_19308);} } 

}



/* date-is-dst */
BGL_EXPORTED_DEF int BGl_datezd2iszd2dstz00zz__datez00(obj_t BgL_dz00_59)
{
{ /* Llib/date.scm 417 */
return 
BGL_DATE_ISDST(BgL_dz00_59);} 

}



/* &date-is-dst */
obj_t BGl_z62datezd2iszd2dstz62zz__datez00(obj_t BgL_envz00_11373, obj_t BgL_dz00_11374)
{
{ /* Llib/date.scm 417 */
{ /* Llib/date.scm 418 */
int BgL_tmpz00_19319;
{ /* Llib/date.scm 418 */
obj_t BgL_auxz00_19320;
if(
BGL_DATEP(BgL_dz00_11374))
{ /* Llib/date.scm 418 */
BgL_auxz00_19320 = BgL_dz00_11374
; }  else 
{ 
obj_t BgL_auxz00_19323;
BgL_auxz00_19323 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)19121)), BGl_string7701z00zz__datez00, BGl_string7675z00zz__datez00, BgL_dz00_11374); 
FAILURE(BgL_auxz00_19323,BFALSE,BFALSE);} 
BgL_tmpz00_19319 = 
BGl_datezd2iszd2dstz00zz__datez00(BgL_auxz00_19320); } 
return 
BINT(BgL_tmpz00_19319);} } 

}



/* current-seconds */
BGL_EXPORTED_DEF long BGl_currentzd2secondszd2zz__datez00()
{
{ /* Llib/date.scm 423 */
return 
bgl_current_seconds();} 

}



/* &current-seconds */
obj_t BGl_z62currentzd2secondszb0zz__datez00(obj_t BgL_envz00_11375)
{
{ /* Llib/date.scm 423 */
{ /* Llib/date.scm 424 */
long BgL_tmpz00_19330;
BgL_tmpz00_19330 = 
BGl_currentzd2secondszd2zz__datez00(); 
return 
make_belong(BgL_tmpz00_19330);} } 

}



/* current-milliseconds */
BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_currentzd2millisecondszd2zz__datez00()
{
{ /* Llib/date.scm 429 */
return 
bgl_current_milliseconds();} 

}



/* &current-milliseconds */
obj_t BGl_z62currentzd2millisecondszb0zz__datez00(obj_t BgL_envz00_11376)
{
{ /* Llib/date.scm 429 */
return 
make_bllong(
BGl_currentzd2millisecondszd2zz__datez00());} 

}



/* current-microseconds */
BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_currentzd2microsecondszd2zz__datez00()
{
{ /* Llib/date.scm 435 */
return 
bgl_current_microseconds();} 

}



/* &current-microseconds */
obj_t BGl_z62currentzd2microsecondszb0zz__datez00(obj_t BgL_envz00_11377)
{
{ /* Llib/date.scm 435 */
return 
make_bllong(
BGl_currentzd2microsecondszd2zz__datez00());} 

}



/* current-nanoseconds */
BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_currentzd2nanosecondszd2zz__datez00()
{
{ /* Llib/date.scm 441 */
return 
bgl_current_nanoseconds();} 

}



/* &current-nanoseconds */
obj_t BGl_z62currentzd2nanosecondszb0zz__datez00(obj_t BgL_envz00_11378)
{
{ /* Llib/date.scm 441 */
return 
make_bllong(
BGl_currentzd2nanosecondszd2zz__datez00());} 

}



/* current-date */
BGL_EXPORTED_DEF obj_t BGl_currentzd2datezd2zz__datez00()
{
{ /* Llib/date.scm 447 */
return 
bgl_nanoseconds_to_date(
bgl_current_nanoseconds());} 

}



/* &current-date */
obj_t BGl_z62currentzd2datezb0zz__datez00(obj_t BgL_envz00_11379)
{
{ /* Llib/date.scm 447 */
return 
BGl_currentzd2datezd2zz__datez00();} 

}



/* seconds->date */
BGL_EXPORTED_DEF obj_t BGl_secondszd2ze3datez31zz__datez00(long BgL_elongz00_60)
{
{ /* Llib/date.scm 453 */
return 
bgl_seconds_to_date(BgL_elongz00_60);} 

}



/* &seconds->date */
obj_t BGl_z62secondszd2ze3datez53zz__datez00(obj_t BgL_envz00_11380, obj_t BgL_elongz00_11381)
{
{ /* Llib/date.scm 453 */
{ /* Llib/date.scm 454 */
long BgL_auxz00_19346;
{ /* Llib/date.scm 454 */
obj_t BgL_tmpz00_19347;
if(
ELONGP(BgL_elongz00_11381))
{ /* Llib/date.scm 454 */
BgL_tmpz00_19347 = BgL_elongz00_11381
; }  else 
{ 
obj_t BgL_auxz00_19350;
BgL_auxz00_19350 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)20876)), BGl_string7702z00zz__datez00, BGl_string7703z00zz__datez00, BgL_elongz00_11381); 
FAILURE(BgL_auxz00_19350,BFALSE,BFALSE);} 
BgL_auxz00_19346 = 
BELONG_TO_LONG(BgL_tmpz00_19347); } 
return 
BGl_secondszd2ze3datez31zz__datez00(BgL_auxz00_19346);} } 

}



/* seconds->gmtdate */
BGL_EXPORTED_DEF obj_t BGl_secondszd2ze3gmtdatez31zz__datez00(long BgL_elongz00_61)
{
{ /* Llib/date.scm 459 */
return 
bgl_seconds_to_gmtdate(BgL_elongz00_61);} 

}



/* &seconds->gmtdate */
obj_t BGl_z62secondszd2ze3gmtdatez53zz__datez00(obj_t BgL_envz00_11382, obj_t BgL_elongz00_11383)
{
{ /* Llib/date.scm 459 */
{ /* Llib/date.scm 460 */
long BgL_auxz00_19357;
{ /* Llib/date.scm 460 */
obj_t BgL_tmpz00_19358;
if(
ELONGP(BgL_elongz00_11383))
{ /* Llib/date.scm 460 */
BgL_tmpz00_19358 = BgL_elongz00_11383
; }  else 
{ 
obj_t BgL_auxz00_19361;
BgL_auxz00_19361 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)21170)), BGl_string7704z00zz__datez00, BGl_string7703z00zz__datez00, BgL_elongz00_11383); 
FAILURE(BgL_auxz00_19361,BFALSE,BFALSE);} 
BgL_auxz00_19357 = 
BELONG_TO_LONG(BgL_tmpz00_19358); } 
return 
BGl_secondszd2ze3gmtdatez31zz__datez00(BgL_auxz00_19357);} } 

}



/* milliseconds->gmtdate */
BGL_EXPORTED_DEF obj_t BGl_millisecondszd2ze3gmtdatez31zz__datez00(BGL_LONGLONG_T BgL_llongz00_62)
{
{ /* Llib/date.scm 465 */
return 
bgl_milliseconds_to_gmtdate(BgL_llongz00_62);} 

}



/* &milliseconds->gmtdate */
obj_t BGl_z62millisecondszd2ze3gmtdatez53zz__datez00(obj_t BgL_envz00_11384, obj_t BgL_llongz00_11385)
{
{ /* Llib/date.scm 465 */
{ /* Llib/date.scm 466 */
BGL_LONGLONG_T BgL_auxz00_19368;
{ /* Llib/date.scm 466 */
obj_t BgL_tmpz00_19369;
if(
LLONGP(BgL_llongz00_11385))
{ /* Llib/date.scm 466 */
BgL_tmpz00_19369 = BgL_llongz00_11385
; }  else 
{ 
obj_t BgL_auxz00_19372;
BgL_auxz00_19372 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)21473)), BGl_string7705z00zz__datez00, BGl_string7667z00zz__datez00, BgL_llongz00_11385); 
FAILURE(BgL_auxz00_19372,BFALSE,BFALSE);} 
BgL_auxz00_19368 = 
BLLONG_TO_LLONG(BgL_tmpz00_19369); } 
return 
BGl_millisecondszd2ze3gmtdatez31zz__datez00(BgL_auxz00_19368);} } 

}



/* nanoseconds->date */
BGL_EXPORTED_DEF obj_t BGl_nanosecondszd2ze3datez31zz__datez00(BGL_LONGLONG_T BgL_llongz00_63)
{
{ /* Llib/date.scm 471 */
return 
bgl_nanoseconds_to_date(BgL_llongz00_63);} 

}



/* &nanoseconds->date */
obj_t BGl_z62nanosecondszd2ze3datez53zz__datez00(obj_t BgL_envz00_11386, obj_t BgL_llongz00_11387)
{
{ /* Llib/date.scm 471 */
{ /* Llib/date.scm 472 */
BGL_LONGLONG_T BgL_auxz00_19379;
{ /* Llib/date.scm 472 */
obj_t BgL_tmpz00_19380;
if(
LLONGP(BgL_llongz00_11387))
{ /* Llib/date.scm 472 */
BgL_tmpz00_19380 = BgL_llongz00_11387
; }  else 
{ 
obj_t BgL_auxz00_19383;
BgL_auxz00_19383 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)21777)), BGl_string7706z00zz__datez00, BGl_string7667z00zz__datez00, BgL_llongz00_11387); 
FAILURE(BgL_auxz00_19383,BFALSE,BFALSE);} 
BgL_auxz00_19379 = 
BLLONG_TO_LLONG(BgL_tmpz00_19380); } 
return 
BGl_nanosecondszd2ze3datez31zz__datez00(BgL_auxz00_19379);} } 

}



/* milliseconds->date */
BGL_EXPORTED_DEF obj_t BGl_millisecondszd2ze3datez31zz__datez00(BGL_LONGLONG_T BgL_llongz00_64)
{
{ /* Llib/date.scm 477 */
return 
bgl_milliseconds_to_date(BgL_llongz00_64);} 

}



/* &milliseconds->date */
obj_t BGl_z62millisecondszd2ze3datez53zz__datez00(obj_t BgL_envz00_11388, obj_t BgL_llongz00_11389)
{
{ /* Llib/date.scm 477 */
{ /* Llib/date.scm 478 */
BGL_LONGLONG_T BgL_auxz00_19390;
{ /* Llib/date.scm 478 */
obj_t BgL_tmpz00_19391;
if(
LLONGP(BgL_llongz00_11389))
{ /* Llib/date.scm 478 */
BgL_tmpz00_19391 = BgL_llongz00_11389
; }  else 
{ 
obj_t BgL_auxz00_19394;
BgL_auxz00_19394 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)22077)), BGl_string7707z00zz__datez00, BGl_string7667z00zz__datez00, BgL_llongz00_11389); 
FAILURE(BgL_auxz00_19394,BFALSE,BFALSE);} 
BgL_auxz00_19390 = 
BLLONG_TO_LLONG(BgL_tmpz00_19391); } 
return 
BGl_millisecondszd2ze3datez31zz__datez00(BgL_auxz00_19390);} } 

}



/* date->seconds */
BGL_EXPORTED_DEF long BGl_datezd2ze3secondsz31zz__datez00(obj_t BgL_datez00_65)
{
{ /* Llib/date.scm 483 */
return 
bgl_date_to_seconds(BgL_datez00_65);} 

}



/* &date->seconds */
obj_t BGl_z62datezd2ze3secondsz53zz__datez00(obj_t BgL_envz00_11390, obj_t BgL_datez00_11391)
{
{ /* Llib/date.scm 483 */
{ /* Llib/date.scm 484 */
long BgL_tmpz00_19401;
{ /* Llib/date.scm 484 */
obj_t BgL_auxz00_19402;
if(
BGL_DATEP(BgL_datez00_11391))
{ /* Llib/date.scm 484 */
BgL_auxz00_19402 = BgL_datez00_11391
; }  else 
{ 
obj_t BgL_auxz00_19405;
BgL_auxz00_19405 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)22372)), BGl_string7708z00zz__datez00, BGl_string7675z00zz__datez00, BgL_datez00_11391); 
FAILURE(BgL_auxz00_19405,BFALSE,BFALSE);} 
BgL_tmpz00_19401 = 
BGl_datezd2ze3secondsz31zz__datez00(BgL_auxz00_19402); } 
return 
make_belong(BgL_tmpz00_19401);} } 

}



/* date->nanoseconds */
BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_datezd2ze3nanosecondsz31zz__datez00(obj_t BgL_datez00_66)
{
{ /* Llib/date.scm 489 */
return 
bgl_date_to_nanoseconds(BgL_datez00_66);} 

}



/* &date->nanoseconds */
obj_t BGl_z62datezd2ze3nanosecondsz53zz__datez00(obj_t BgL_envz00_11392, obj_t BgL_datez00_11393)
{
{ /* Llib/date.scm 489 */
{ /* Llib/date.scm 490 */
BGL_LONGLONG_T BgL_tmpz00_19412;
{ /* Llib/date.scm 490 */
obj_t BgL_auxz00_19413;
if(
BGL_DATEP(BgL_datez00_11393))
{ /* Llib/date.scm 490 */
BgL_auxz00_19413 = BgL_datez00_11393
; }  else 
{ 
obj_t BgL_auxz00_19416;
BgL_auxz00_19416 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)22663)), BGl_string7709z00zz__datez00, BGl_string7675z00zz__datez00, BgL_datez00_11393); 
FAILURE(BgL_auxz00_19416,BFALSE,BFALSE);} 
BgL_tmpz00_19412 = 
BGl_datezd2ze3nanosecondsz31zz__datez00(BgL_auxz00_19413); } 
return 
make_bllong(BgL_tmpz00_19412);} } 

}



/* date->milliseconds */
BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_datezd2ze3millisecondsz31zz__datez00(obj_t BgL_datez00_67)
{
{ /* Llib/date.scm 495 */
return 
bgl_date_to_milliseconds(BgL_datez00_67);} 

}



/* &date->milliseconds */
obj_t BGl_z62datezd2ze3millisecondsz53zz__datez00(obj_t BgL_envz00_11394, obj_t BgL_datez00_11395)
{
{ /* Llib/date.scm 495 */
{ /* Llib/date.scm 496 */
BGL_LONGLONG_T BgL_tmpz00_19423;
{ /* Llib/date.scm 496 */
obj_t BgL_auxz00_19424;
if(
BGL_DATEP(BgL_datez00_11395))
{ /* Llib/date.scm 496 */
BgL_auxz00_19424 = BgL_datez00_11395
; }  else 
{ 
obj_t BgL_auxz00_19427;
BgL_auxz00_19427 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)22959)), BGl_string7710z00zz__datez00, BGl_string7675z00zz__datez00, BgL_datez00_11395); 
FAILURE(BgL_auxz00_19427,BFALSE,BFALSE);} 
BgL_tmpz00_19423 = 
BGl_datezd2ze3millisecondsz31zz__datez00(BgL_auxz00_19424); } 
return 
make_bllong(BgL_tmpz00_19423);} } 

}



/* date->string */
BGL_EXPORTED_DEF obj_t BGl_datezd2ze3stringz31zz__datez00(obj_t BgL_datez00_68)
{
{ /* Llib/date.scm 501 */
return 
BGl_datezd2ze3rfc2822zd2dateze3zz__datez00(BgL_datez00_68);} 

}



/* &date->string */
obj_t BGl_z62datezd2ze3stringz53zz__datez00(obj_t BgL_envz00_11396, obj_t BgL_datez00_11397)
{
{ /* Llib/date.scm 501 */
{ /* Llib/date.scm 502 */
obj_t BgL_auxz00_19434;
if(
BGL_DATEP(BgL_datez00_11397))
{ /* Llib/date.scm 502 */
BgL_auxz00_19434 = BgL_datez00_11397
; }  else 
{ 
obj_t BgL_auxz00_19437;
BgL_auxz00_19437 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)23243)), BGl_string7711z00zz__datez00, BGl_string7675z00zz__datez00, BgL_datez00_11397); 
FAILURE(BgL_auxz00_19437,BFALSE,BFALSE);} 
return 
BGl_datezd2ze3stringz31zz__datez00(BgL_auxz00_19434);} } 

}



/* blit-int2! */
long BGl_blitzd2int2z12zc0zz__datez00(obj_t BgL_bufz00_72, long BgL_wz00_73, int BgL_intz00_74)
{
{ /* Llib/date.scm 513 */
if(
(
(long)(BgL_intz00_74)<((long)10)))
{ /* Llib/date.scm 514 */
{ /* Llib/date.scm 516 */
long BgL_l6403z00_11472;
BgL_l6403z00_11472 = 
STRING_LENGTH(BgL_bufz00_72); 
if(
BOUND_CHECK(BgL_wz00_73, BgL_l6403z00_11472))
{ /* Llib/date.scm 516 */
STRING_SET(BgL_bufz00_72, BgL_wz00_73, ((unsigned char)'0')); }  else 
{ 
obj_t BgL_auxz00_19449;
BgL_auxz00_19449 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)23890)), BGl_string7712z00zz__datez00, BgL_bufz00_72, 
(int)(BgL_l6403z00_11472), 
(int)(BgL_wz00_73)); 
FAILURE(BgL_auxz00_19449,BFALSE,BFALSE);} } 
{ /* Llib/date.scm 517 */
long BgL_arg2791z00_3769;
BgL_arg2791z00_3769 = 
(BgL_wz00_73+((long)1)); 
{ /* Llib/date.scm 508 */
unsigned char BgL_arg2788z00_9039;
BgL_arg2788z00_9039 = 
BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(
(((long)48)+
(long)(BgL_intz00_74))); 
{ /* Llib/date.scm 508 */
long BgL_l6407z00_11476;
BgL_l6407z00_11476 = 
STRING_LENGTH(BgL_bufz00_72); 
if(
BOUND_CHECK(BgL_arg2791z00_3769, BgL_l6407z00_11476))
{ /* Llib/date.scm 508 */
STRING_SET(BgL_bufz00_72, BgL_arg2791z00_3769, BgL_arg2788z00_9039); }  else 
{ 
obj_t BgL_auxz00_19463;
BgL_auxz00_19463 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)23530)), BGl_string7712z00zz__datez00, BgL_bufz00_72, 
(int)(BgL_l6407z00_11476), 
(int)(BgL_arg2791z00_3769)); 
FAILURE(BgL_auxz00_19463,BFALSE,BFALSE);} } } } }  else 
{ /* Llib/date.scm 514 */
{ /* Llib/date.scm 519 */
long BgL_arg2792z00_3770;
BgL_arg2792z00_3770 = 
(
(long)(BgL_intz00_74)/((long)10)); 
{ /* Llib/date.scm 508 */
unsigned char BgL_arg2788z00_9048;
BgL_arg2788z00_9048 = 
BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(
(((long)48)+BgL_arg2792z00_3770)); 
{ /* Llib/date.scm 508 */
long BgL_l6411z00_11480;
BgL_l6411z00_11480 = 
STRING_LENGTH(BgL_bufz00_72); 
if(
BOUND_CHECK(BgL_wz00_73, BgL_l6411z00_11480))
{ /* Llib/date.scm 508 */
STRING_SET(BgL_bufz00_72, BgL_wz00_73, BgL_arg2788z00_9048); }  else 
{ 
obj_t BgL_auxz00_19477;
BgL_auxz00_19477 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)23530)), BGl_string7712z00zz__datez00, BgL_bufz00_72, 
(int)(BgL_l6411z00_11480), 
(int)(BgL_wz00_73)); 
FAILURE(BgL_auxz00_19477,BFALSE,BFALSE);} } } } 
{ /* Llib/date.scm 520 */
long BgL_arg2795z00_3771;long BgL_arg2799z00_3772;
BgL_arg2795z00_3771 = 
(BgL_wz00_73+((long)1)); 
BgL_arg2799z00_3772 = 
BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(
(long)(BgL_intz00_74), ((long)10)); 
{ /* Llib/date.scm 508 */
unsigned char BgL_arg2788z00_9057;
BgL_arg2788z00_9057 = 
BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(
(((long)48)+BgL_arg2799z00_3772)); 
{ /* Llib/date.scm 508 */
long BgL_l6415z00_11484;
BgL_l6415z00_11484 = 
STRING_LENGTH(BgL_bufz00_72); 
if(
BOUND_CHECK(BgL_arg2795z00_3771, BgL_l6415z00_11484))
{ /* Llib/date.scm 508 */
STRING_SET(BgL_bufz00_72, BgL_arg2795z00_3771, BgL_arg2788z00_9057); }  else 
{ 
obj_t BgL_auxz00_19492;
BgL_auxz00_19492 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)23530)), BGl_string7712z00zz__datez00, BgL_bufz00_72, 
(int)(BgL_l6415z00_11484), 
(int)(BgL_arg2795z00_3771)); 
FAILURE(BgL_auxz00_19492,BFALSE,BFALSE);} } } } } 
return ((long)2);} 

}



/* blit-int! */
long BGl_blitzd2intz12zc0zz__datez00(obj_t BgL_bufz00_75, long BgL_wz00_76, int BgL_intz00_77)
{
{ /* Llib/date.scm 526 */
if(
(
(long)(BgL_intz00_77)<((long)10)))
{ /* Llib/date.scm 528 */
{ /* Llib/date.scm 508 */
unsigned char BgL_arg2788z00_9066;
BgL_arg2788z00_9066 = 
BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(
(((long)48)+
(long)(BgL_intz00_77))); 
{ /* Llib/date.scm 508 */
long BgL_l6419z00_11488;
BgL_l6419z00_11488 = 
STRING_LENGTH(BgL_bufz00_75); 
if(
BOUND_CHECK(BgL_wz00_76, BgL_l6419z00_11488))
{ /* Llib/date.scm 508 */
STRING_SET(BgL_bufz00_75, BgL_wz00_76, BgL_arg2788z00_9066); }  else 
{ 
obj_t BgL_auxz00_19508;
BgL_auxz00_19508 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)23530)), BGl_string7712z00zz__datez00, BgL_bufz00_75, 
(int)(BgL_l6419z00_11488), 
(int)(BgL_wz00_76)); 
FAILURE(BgL_auxz00_19508,BFALSE,BFALSE);} } } 
return ((long)1);}  else 
{ /* Llib/date.scm 528 */
if(
(
(long)(BgL_intz00_77)<((long)100)))
{ /* Llib/date.scm 531 */
{ /* Llib/date.scm 532 */
long BgL_arg2802z00_3775;
BgL_arg2802z00_3775 = 
(
(long)(BgL_intz00_77)/((long)10)); 
{ /* Llib/date.scm 508 */
unsigned char BgL_arg2788z00_9077;
BgL_arg2788z00_9077 = 
BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(
(((long)48)+BgL_arg2802z00_3775)); 
{ /* Llib/date.scm 508 */
long BgL_l6423z00_11492;
BgL_l6423z00_11492 = 
STRING_LENGTH(BgL_bufz00_75); 
if(
BOUND_CHECK(BgL_wz00_76, BgL_l6423z00_11492))
{ /* Llib/date.scm 508 */
STRING_SET(BgL_bufz00_75, BgL_wz00_76, BgL_arg2788z00_9077); }  else 
{ 
obj_t BgL_auxz00_19525;
BgL_auxz00_19525 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)23530)), BGl_string7712z00zz__datez00, BgL_bufz00_75, 
(int)(BgL_l6423z00_11492), 
(int)(BgL_wz00_76)); 
FAILURE(BgL_auxz00_19525,BFALSE,BFALSE);} } } } 
{ /* Llib/date.scm 533 */
long BgL_arg2805z00_3776;long BgL_arg2806z00_3777;
BgL_arg2805z00_3776 = 
(BgL_wz00_76+((long)1)); 
BgL_arg2806z00_3777 = 
BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(
(long)(BgL_intz00_77), ((long)10)); 
{ /* Llib/date.scm 508 */
unsigned char BgL_arg2788z00_9086;
BgL_arg2788z00_9086 = 
BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(
(((long)48)+BgL_arg2806z00_3777)); 
{ /* Llib/date.scm 508 */
long BgL_l6427z00_11496;
BgL_l6427z00_11496 = 
STRING_LENGTH(BgL_bufz00_75); 
if(
BOUND_CHECK(BgL_arg2805z00_3776, BgL_l6427z00_11496))
{ /* Llib/date.scm 508 */
STRING_SET(BgL_bufz00_75, BgL_arg2805z00_3776, BgL_arg2788z00_9086); }  else 
{ 
obj_t BgL_auxz00_19540;
BgL_auxz00_19540 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)23530)), BGl_string7712z00zz__datez00, BgL_bufz00_75, 
(int)(BgL_l6427z00_11496), 
(int)(BgL_arg2805z00_3776)); 
FAILURE(BgL_auxz00_19540,BFALSE,BFALSE);} } } } 
return ((long)2);}  else 
{ /* Llib/date.scm 531 */
if(
(
(long)(BgL_intz00_77)<((long)1000)))
{ /* Llib/date.scm 535 */
{ /* Llib/date.scm 536 */
long BgL_arg2808z00_3779;
BgL_arg2808z00_3779 = 
(
(long)(BgL_intz00_77)/((long)100)); 
{ /* Llib/date.scm 508 */
unsigned char BgL_arg2788z00_9097;
BgL_arg2788z00_9097 = 
BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(
(((long)48)+BgL_arg2808z00_3779)); 
{ /* Llib/date.scm 508 */
long BgL_l6431z00_11500;
BgL_l6431z00_11500 = 
STRING_LENGTH(BgL_bufz00_75); 
if(
BOUND_CHECK(BgL_wz00_76, BgL_l6431z00_11500))
{ /* Llib/date.scm 508 */
STRING_SET(BgL_bufz00_75, BgL_wz00_76, BgL_arg2788z00_9097); }  else 
{ 
obj_t BgL_auxz00_19557;
BgL_auxz00_19557 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)23530)), BGl_string7712z00zz__datez00, BgL_bufz00_75, 
(int)(BgL_l6431z00_11500), 
(int)(BgL_wz00_76)); 
FAILURE(BgL_auxz00_19557,BFALSE,BFALSE);} } } } 
{ /* Llib/date.scm 537 */
long BgL_rz00_3780;
BgL_rz00_3780 = 
BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(
(long)(BgL_intz00_77), ((long)100)); 
{ /* Llib/date.scm 538 */
long BgL_arg2809z00_3781;long BgL_arg2810z00_3782;
BgL_arg2809z00_3781 = 
(BgL_wz00_76+((long)1)); 
BgL_arg2810z00_3782 = 
(BgL_rz00_3780/((long)10)); 
{ /* Llib/date.scm 508 */
unsigned char BgL_arg2788z00_9108;
BgL_arg2788z00_9108 = 
BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(
(((long)48)+BgL_arg2810z00_3782)); 
{ /* Llib/date.scm 508 */
long BgL_l6435z00_11504;
BgL_l6435z00_11504 = 
STRING_LENGTH(BgL_bufz00_75); 
if(
BOUND_CHECK(BgL_arg2809z00_3781, BgL_l6435z00_11504))
{ /* Llib/date.scm 508 */
STRING_SET(BgL_bufz00_75, BgL_arg2809z00_3781, BgL_arg2788z00_9108); }  else 
{ 
obj_t BgL_auxz00_19573;
BgL_auxz00_19573 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)23530)), BGl_string7712z00zz__datez00, BgL_bufz00_75, 
(int)(BgL_l6435z00_11504), 
(int)(BgL_arg2809z00_3781)); 
FAILURE(BgL_auxz00_19573,BFALSE,BFALSE);} } } } 
{ /* Llib/date.scm 539 */
long BgL_arg2812z00_3783;long BgL_arg2813z00_3784;
BgL_arg2812z00_3783 = 
(BgL_wz00_76+((long)2)); 
BgL_arg2813z00_3784 = 
BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(BgL_rz00_3780, ((long)10)); 
{ /* Llib/date.scm 508 */
unsigned char BgL_arg2788z00_9117;
BgL_arg2788z00_9117 = 
BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(
(((long)48)+BgL_arg2813z00_3784)); 
{ /* Llib/date.scm 508 */
long BgL_l6439z00_11508;
BgL_l6439z00_11508 = 
STRING_LENGTH(BgL_bufz00_75); 
if(
BOUND_CHECK(BgL_arg2812z00_3783, BgL_l6439z00_11508))
{ /* Llib/date.scm 508 */
STRING_SET(BgL_bufz00_75, BgL_arg2812z00_3783, BgL_arg2788z00_9117); }  else 
{ 
obj_t BgL_auxz00_19587;
BgL_auxz00_19587 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)23530)), BGl_string7712z00zz__datez00, BgL_bufz00_75, 
(int)(BgL_l6439z00_11508), 
(int)(BgL_arg2812z00_3783)); 
FAILURE(BgL_auxz00_19587,BFALSE,BFALSE);} } } } 
return ((long)3);} }  else 
{ /* Llib/date.scm 535 */
{ /* Llib/date.scm 542 */
long BgL_arg2814z00_3785;
BgL_arg2814z00_3785 = 
(
(long)(BgL_intz00_77)/((long)1000)); 
{ /* Llib/date.scm 508 */
unsigned char BgL_arg2788z00_9126;
BgL_arg2788z00_9126 = 
BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(
(((long)48)+BgL_arg2814z00_3785)); 
{ /* Llib/date.scm 508 */
long BgL_l6443z00_11512;
BgL_l6443z00_11512 = 
STRING_LENGTH(BgL_bufz00_75); 
if(
BOUND_CHECK(BgL_wz00_76, BgL_l6443z00_11512))
{ /* Llib/date.scm 508 */
STRING_SET(BgL_bufz00_75, BgL_wz00_76, BgL_arg2788z00_9126); }  else 
{ 
obj_t BgL_auxz00_19601;
BgL_auxz00_19601 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)23530)), BGl_string7712z00zz__datez00, BgL_bufz00_75, 
(int)(BgL_l6443z00_11512), 
(int)(BgL_wz00_76)); 
FAILURE(BgL_auxz00_19601,BFALSE,BFALSE);} } } } 
{ /* Llib/date.scm 543 */
long BgL_rz00_3786;
BgL_rz00_3786 = 
BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(
(long)(BgL_intz00_77), ((long)1000)); 
{ /* Llib/date.scm 544 */
long BgL_arg2815z00_3787;long BgL_arg2816z00_3788;
BgL_arg2815z00_3787 = 
(BgL_wz00_76+((long)1)); 
BgL_arg2816z00_3788 = 
(BgL_rz00_3786/((long)100)); 
{ /* Llib/date.scm 508 */
unsigned char BgL_arg2788z00_9137;
BgL_arg2788z00_9137 = 
BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(
(((long)48)+BgL_arg2816z00_3788)); 
{ /* Llib/date.scm 508 */
long BgL_l6447z00_11516;
BgL_l6447z00_11516 = 
STRING_LENGTH(BgL_bufz00_75); 
if(
BOUND_CHECK(BgL_arg2815z00_3787, BgL_l6447z00_11516))
{ /* Llib/date.scm 508 */
STRING_SET(BgL_bufz00_75, BgL_arg2815z00_3787, BgL_arg2788z00_9137); }  else 
{ 
obj_t BgL_auxz00_19617;
BgL_auxz00_19617 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)23530)), BGl_string7712z00zz__datez00, BgL_bufz00_75, 
(int)(BgL_l6447z00_11516), 
(int)(BgL_arg2815z00_3787)); 
FAILURE(BgL_auxz00_19617,BFALSE,BFALSE);} } } } 
{ /* Llib/date.scm 545 */
long BgL_rz00_3789;
BgL_rz00_3789 = 
BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(
(long)(BgL_intz00_77), ((long)100)); 
{ /* Llib/date.scm 546 */
long BgL_arg2817z00_3790;long BgL_arg2819z00_3791;
BgL_arg2817z00_3790 = 
(BgL_wz00_76+((long)2)); 
BgL_arg2819z00_3791 = 
(BgL_rz00_3789/((long)10)); 
{ /* Llib/date.scm 508 */
unsigned char BgL_arg2788z00_9148;
BgL_arg2788z00_9148 = 
BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(
(((long)48)+BgL_arg2819z00_3791)); 
{ /* Llib/date.scm 508 */
long BgL_l6451z00_11520;
BgL_l6451z00_11520 = 
STRING_LENGTH(BgL_bufz00_75); 
if(
BOUND_CHECK(BgL_arg2817z00_3790, BgL_l6451z00_11520))
{ /* Llib/date.scm 508 */
STRING_SET(BgL_bufz00_75, BgL_arg2817z00_3790, BgL_arg2788z00_9148); }  else 
{ 
obj_t BgL_auxz00_19633;
BgL_auxz00_19633 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)23530)), BGl_string7712z00zz__datez00, BgL_bufz00_75, 
(int)(BgL_l6451z00_11520), 
(int)(BgL_arg2817z00_3790)); 
FAILURE(BgL_auxz00_19633,BFALSE,BFALSE);} } } } 
{ /* Llib/date.scm 547 */
long BgL_arg2820z00_3792;long BgL_arg2821z00_3793;
BgL_arg2820z00_3792 = 
(BgL_wz00_76+((long)3)); 
BgL_arg2821z00_3793 = 
BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(BgL_rz00_3789, ((long)10)); 
{ /* Llib/date.scm 508 */
unsigned char BgL_arg2788z00_9157;
BgL_arg2788z00_9157 = 
BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(
(((long)48)+BgL_arg2821z00_3793)); 
{ /* Llib/date.scm 508 */
long BgL_l6455z00_11524;
BgL_l6455z00_11524 = 
STRING_LENGTH(BgL_bufz00_75); 
if(
BOUND_CHECK(BgL_arg2820z00_3792, BgL_l6455z00_11524))
{ /* Llib/date.scm 508 */
STRING_SET(BgL_bufz00_75, BgL_arg2820z00_3792, BgL_arg2788z00_9157); }  else 
{ 
obj_t BgL_auxz00_19647;
BgL_auxz00_19647 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)23530)), BGl_string7712z00zz__datez00, BgL_bufz00_75, 
(int)(BgL_l6455z00_11524), 
(int)(BgL_arg2820z00_3792)); 
FAILURE(BgL_auxz00_19647,BFALSE,BFALSE);} } } } 
return ((long)4);} } } } } } 

}



/* date->utc-string */
BGL_EXPORTED_DEF obj_t BGl_datezd2ze3utczd2stringze3zz__datez00(obj_t BgL_datez00_81)
{
{ /* Llib/date.scm 561 */
{ 
obj_t BgL_datez00_3800;
{ /* Llib/date.scm 602 */
long BgL_tza7za7_3796;
{ /* Llib/date.scm 602 */
long BgL_res5613z00_9244;
BgL_res5613z00_9244 = 
BGL_DATE_TIMEZONE(BgL_datez00_81); 
BgL_tza7za7_3796 = BgL_res5613z00_9244; } 
if(
(BgL_tza7za7_3796==((long)0)))
{ /* Llib/date.scm 603 */
BgL_datez00_3800 = BgL_datez00_81; 
BgL_zc3z04anonymousza32826ze3z87_3801:
{ /* Llib/date.scm 564 */
obj_t BgL_bufz00_3802;long BgL_wz00_3803;
BgL_bufz00_3802 = 
make_string(((long)29), ((unsigned char)' ')); 
BgL_wz00_3803 = ((long)0); 
{ /* Llib/date.scm 575 */
long BgL_arg2831z00_3804;
{ /* Llib/date.scm 575 */
obj_t BgL_arg2838z00_3805;
{ /* Llib/date.scm 575 */
int BgL_arg2839z00_3806;
{ /* Llib/date.scm 575 */
int BgL_res5588z00_9169;
BgL_res5588z00_9169 = 
BGL_DATE_WDAY(BgL_datez00_3800); 
BgL_arg2839z00_3806 = BgL_res5588z00_9169; } 
BgL_arg2838z00_3805 = 
BGl_dayzd2anamezd2zz__datez00(BgL_arg2839z00_3806); } 
{ /* Llib/date.scm 575 */
long BgL_wz00_9170;
BgL_wz00_9170 = BgL_wz00_3803; 
{ /* Llib/date.scm 554 */
long BgL_lz00_9171;
BgL_lz00_9171 = 
STRING_LENGTH(BgL_arg2838z00_3805); 
BGl_blitzd2stringz12zc0zz__r4_strings_6_7z00(BgL_arg2838z00_3805, ((long)0), BgL_bufz00_3802, BgL_wz00_9170, BgL_lz00_9171); 
BgL_arg2831z00_3804 = BgL_lz00_9171; } } } 
BgL_wz00_3803 = 
(BgL_wz00_3803+BgL_arg2831z00_3804); } 
{ /* Llib/date.scm 576 */
long BgL_kz00_9178;
BgL_kz00_9178 = BgL_wz00_3803; 
{ /* Llib/date.scm 576 */
long BgL_l6459z00_11528;
BgL_l6459z00_11528 = 
STRING_LENGTH(BgL_bufz00_3802); 
if(
BOUND_CHECK(BgL_kz00_9178, BgL_l6459z00_11528))
{ /* Llib/date.scm 576 */
STRING_SET(BgL_bufz00_3802, BgL_kz00_9178, ((unsigned char)',')); }  else 
{ 
obj_t BgL_auxz00_19666;
BgL_auxz00_19666 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)26296)), BGl_string7712z00zz__datez00, BgL_bufz00_3802, 
(int)(BgL_l6459z00_11528), 
(int)(BgL_kz00_9178)); 
FAILURE(BgL_auxz00_19666,BFALSE,BFALSE);} } } 
BgL_wz00_3803 = 
(BgL_wz00_3803+((long)2)); 
{ /* Llib/date.scm 579 */
long BgL_arg2845z00_3807;
{ /* Llib/date.scm 579 */
int BgL_arg2846z00_3808;
{ /* Llib/date.scm 579 */
int BgL_res5592z00_9183;
BgL_res5592z00_9183 = 
BGL_DATE_DAY(BgL_datez00_3800); 
BgL_arg2846z00_3808 = BgL_res5592z00_9183; } 
BgL_arg2845z00_3807 = 
BGl_blitzd2intz12zc0zz__datez00(BgL_bufz00_3802, BgL_wz00_3803, BgL_arg2846z00_3808); } 
BgL_wz00_3803 = 
(BgL_wz00_3803+BgL_arg2845z00_3807); } 
BgL_wz00_3803 = 
(BgL_wz00_3803+((long)1)); 
{ /* Llib/date.scm 582 */
long BgL_arg2847z00_3809;
{ /* Llib/date.scm 582 */
obj_t BgL_arg2848z00_3810;
{ /* Llib/date.scm 582 */
int BgL_arg2849z00_3811;
{ /* Llib/date.scm 582 */
int BgL_res5595z00_9190;
BgL_res5595z00_9190 = 
BGL_DATE_MONTH(BgL_datez00_3800); 
BgL_arg2849z00_3811 = BgL_res5595z00_9190; } 
BgL_arg2848z00_3810 = 
BGl_monthzd2anamezd2zz__datez00(BgL_arg2849z00_3811); } 
{ /* Llib/date.scm 582 */
long BgL_wz00_9191;
BgL_wz00_9191 = BgL_wz00_3803; 
{ /* Llib/date.scm 554 */
long BgL_lz00_9192;
BgL_lz00_9192 = 
STRING_LENGTH(BgL_arg2848z00_3810); 
BGl_blitzd2stringz12zc0zz__r4_strings_6_7z00(BgL_arg2848z00_3810, ((long)0), BgL_bufz00_3802, BgL_wz00_9191, BgL_lz00_9192); 
BgL_arg2847z00_3809 = BgL_lz00_9192; } } } 
BgL_wz00_3803 = 
(BgL_wz00_3803+BgL_arg2847z00_3809); } 
BgL_wz00_3803 = 
(BgL_wz00_3803+((long)1)); 
{ /* Llib/date.scm 585 */
long BgL_arg2850z00_3812;
{ /* Llib/date.scm 585 */
int BgL_arg2851z00_3813;
{ /* Llib/date.scm 585 */
int BgL_res5599z00_9201;
BgL_res5599z00_9201 = 
BGL_DATE_YEAR(BgL_datez00_3800); 
BgL_arg2851z00_3813 = BgL_res5599z00_9201; } 
BgL_arg2850z00_3812 = 
BGl_blitzd2intz12zc0zz__datez00(BgL_bufz00_3802, BgL_wz00_3803, BgL_arg2851z00_3813); } 
BgL_wz00_3803 = 
(BgL_wz00_3803+BgL_arg2850z00_3812); } 
BgL_wz00_3803 = 
(BgL_wz00_3803+((long)1)); 
{ /* Llib/date.scm 588 */
long BgL_arg2852z00_3814;
{ /* Llib/date.scm 588 */
int BgL_arg2853z00_3815;
{ /* Llib/date.scm 588 */
int BgL_res5602z00_9208;
BgL_res5602z00_9208 = 
BGL_DATE_HOUR(BgL_datez00_3800); 
BgL_arg2853z00_3815 = BgL_res5602z00_9208; } 
BgL_arg2852z00_3814 = 
BGl_blitzd2int2z12zc0zz__datez00(BgL_bufz00_3802, BgL_wz00_3803, BgL_arg2853z00_3815); } 
BgL_wz00_3803 = 
(BgL_wz00_3803+BgL_arg2852z00_3814); } 
{ /* Llib/date.scm 589 */
long BgL_kz00_9213;
BgL_kz00_9213 = BgL_wz00_3803; 
{ /* Llib/date.scm 589 */
long BgL_l6463z00_11532;
BgL_l6463z00_11532 = 
STRING_LENGTH(BgL_bufz00_3802); 
if(
BOUND_CHECK(BgL_kz00_9213, BgL_l6463z00_11532))
{ /* Llib/date.scm 589 */
STRING_SET(BgL_bufz00_3802, BgL_kz00_9213, ((unsigned char)':')); }  else 
{ 
obj_t BgL_auxz00_19694;
BgL_auxz00_19694 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)26698)), BGl_string7712z00zz__datez00, BgL_bufz00_3802, 
(int)(BgL_l6463z00_11532), 
(int)(BgL_kz00_9213)); 
FAILURE(BgL_auxz00_19694,BFALSE,BFALSE);} } } 
BgL_wz00_3803 = 
(BgL_wz00_3803+((long)1)); 
{ /* Llib/date.scm 592 */
long BgL_arg2857z00_3816;
{ /* Llib/date.scm 592 */
int BgL_arg2858z00_3817;
{ /* Llib/date.scm 592 */
int BgL_res5605z00_9218;
BgL_res5605z00_9218 = 
BGL_DATE_MINUTE(BgL_datez00_3800); 
BgL_arg2858z00_3817 = BgL_res5605z00_9218; } 
BgL_arg2857z00_3816 = 
BGl_blitzd2int2z12zc0zz__datez00(BgL_bufz00_3802, BgL_wz00_3803, BgL_arg2858z00_3817); } 
BgL_wz00_3803 = 
(BgL_wz00_3803+BgL_arg2857z00_3816); } 
{ /* Llib/date.scm 593 */
long BgL_kz00_9223;
BgL_kz00_9223 = BgL_wz00_3803; 
{ /* Llib/date.scm 593 */
long BgL_l6467z00_11536;
BgL_l6467z00_11536 = 
STRING_LENGTH(BgL_bufz00_3802); 
if(
BOUND_CHECK(BgL_kz00_9223, BgL_l6467z00_11536))
{ /* Llib/date.scm 593 */
STRING_SET(BgL_bufz00_3802, BgL_kz00_9223, ((unsigned char)':')); }  else 
{ 
obj_t BgL_auxz00_19708;
BgL_auxz00_19708 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)26819)), BGl_string7712z00zz__datez00, BgL_bufz00_3802, 
(int)(BgL_l6467z00_11536), 
(int)(BgL_kz00_9223)); 
FAILURE(BgL_auxz00_19708,BFALSE,BFALSE);} } } 
BgL_wz00_3803 = 
(BgL_wz00_3803+((long)1)); 
{ /* Llib/date.scm 596 */
long BgL_arg2859z00_3818;
{ /* Llib/date.scm 596 */
int BgL_arg2860z00_3819;
{ /* Llib/date.scm 596 */
int BgL_res5608z00_9228;
BgL_res5608z00_9228 = 
BGL_DATE_SECOND(BgL_datez00_3800); 
BgL_arg2860z00_3819 = BgL_res5608z00_9228; } 
BgL_arg2859z00_3818 = 
BGl_blitzd2int2z12zc0zz__datez00(BgL_bufz00_3802, BgL_wz00_3803, BgL_arg2860z00_3819); } 
BgL_wz00_3803 = 
(BgL_wz00_3803+BgL_arg2859z00_3818); } 
BgL_wz00_3803 = 
(BgL_wz00_3803+((long)1)); 
{ /* Llib/date.scm 599 */
long BgL_arg2861z00_3820;
{ /* Llib/date.scm 599 */
long BgL_wz00_9234;
BgL_wz00_9234 = BgL_wz00_3803; 
BGl_blitzd2stringz12zc0zz__r4_strings_6_7z00(BGl_string7514z00zz__datez00, ((long)0), BgL_bufz00_3802, BgL_wz00_9234, ((long)3)); 
BgL_arg2861z00_3820 = ((long)3); } 
BgL_wz00_3803 = 
(BgL_wz00_3803+BgL_arg2861z00_3820); } 
return 
bgl_string_shrink(BgL_bufz00_3802, BgL_wz00_3803);} }  else 
{ 
obj_t BgL_datez00_19722;
BgL_datez00_19722 = 
bgl_seconds_to_gmtdate(
bgl_date_to_seconds(BgL_datez00_81)); 
BgL_datez00_3800 = BgL_datez00_19722; 
goto BgL_zc3z04anonymousza32826ze3z87_3801;} } } } 

}



/* &date->utc-string */
obj_t BGl_z62datezd2ze3utczd2stringz81zz__datez00(obj_t BgL_envz00_11398, obj_t BgL_datez00_11399)
{
{ /* Llib/date.scm 561 */
{ /* Llib/date.scm 564 */
obj_t BgL_auxz00_19725;
if(
BGL_DATEP(BgL_datez00_11399))
{ /* Llib/date.scm 564 */
BgL_auxz00_19725 = BgL_datez00_11399
; }  else 
{ 
obj_t BgL_auxz00_19728;
BgL_auxz00_19728 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)25599)), BGl_string7713z00zz__datez00, BGl_string7675z00zz__datez00, BgL_datez00_11399); 
FAILURE(BgL_auxz00_19728,BFALSE,BFALSE);} 
return 
BGl_datezd2ze3utczd2stringze3zz__datez00(BgL_auxz00_19725);} } 

}



/* seconds->string */
BGL_EXPORTED_DEF obj_t BGl_secondszd2ze3stringz31zz__datez00(long BgL_secz00_82)
{
{ /* Llib/date.scm 610 */
return 
bgl_seconds_to_string(BgL_secz00_82);} 

}



/* &seconds->string */
obj_t BGl_z62secondszd2ze3stringz53zz__datez00(obj_t BgL_envz00_11400, obj_t BgL_secz00_11401)
{
{ /* Llib/date.scm 610 */
{ /* Llib/date.scm 611 */
long BgL_auxz00_19734;
{ /* Llib/date.scm 611 */
obj_t BgL_tmpz00_19735;
if(
ELONGP(BgL_secz00_11401))
{ /* Llib/date.scm 611 */
BgL_tmpz00_19735 = BgL_secz00_11401
; }  else 
{ 
obj_t BgL_auxz00_19738;
BgL_auxz00_19738 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)27442)), BGl_string7714z00zz__datez00, BGl_string7703z00zz__datez00, BgL_secz00_11401); 
FAILURE(BgL_auxz00_19738,BFALSE,BFALSE);} 
BgL_auxz00_19734 = 
BELONG_TO_LONG(BgL_tmpz00_19735); } 
return 
BGl_secondszd2ze3stringz31zz__datez00(BgL_auxz00_19734);} } 

}



/* seconds->utc-string */
BGL_EXPORTED_DEF obj_t BGl_secondszd2ze3utczd2stringze3zz__datez00(long BgL_secz00_83)
{
{ /* Llib/date.scm 616 */
return 
bgl_seconds_to_utc_string(BgL_secz00_83);} 

}



/* &seconds->utc-string */
obj_t BGl_z62secondszd2ze3utczd2stringz81zz__datez00(obj_t BgL_envz00_11402, obj_t BgL_secz00_11403)
{
{ /* Llib/date.scm 616 */
{ /* Llib/date.scm 617 */
long BgL_auxz00_19745;
{ /* Llib/date.scm 617 */
obj_t BgL_tmpz00_19746;
if(
ELONGP(BgL_secz00_11403))
{ /* Llib/date.scm 617 */
BgL_tmpz00_19746 = BgL_secz00_11403
; }  else 
{ 
obj_t BgL_auxz00_19749;
BgL_auxz00_19749 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)27740)), BGl_string7715z00zz__datez00, BGl_string7703z00zz__datez00, BgL_secz00_11403); 
FAILURE(BgL_auxz00_19749,BFALSE,BFALSE);} 
BgL_auxz00_19745 = 
BELONG_TO_LONG(BgL_tmpz00_19746); } 
return 
BGl_secondszd2ze3utczd2stringze3zz__datez00(BgL_auxz00_19745);} } 

}



/* day-seconds */
BGL_EXPORTED_DEF long BGl_dayzd2secondszd2zz__datez00()
{
{ /* Llib/date.scm 622 */
return ((long)86400);} 

}



/* &day-seconds */
obj_t BGl_z62dayzd2secondszb0zz__datez00(obj_t BgL_envz00_11404)
{
{ /* Llib/date.scm 622 */
{ /* Llib/date.scm 622 */
long BgL_tmpz00_19755;
BgL_tmpz00_19755 = 
BGl_dayzd2secondszd2zz__datez00(); 
return 
make_belong(BgL_tmpz00_19755);} } 

}



/* day-name */
BGL_EXPORTED_DEF obj_t BGl_dayzd2namezd2zz__datez00(int BgL_dayz00_84)
{
{ /* Llib/date.scm 628 */
if(
(
(long)(BgL_dayz00_84)<((long)1)))
{ /* Llib/date.scm 631 */
obj_t BgL_aux7409z00_12487;
BgL_aux7409z00_12487 = 
BGl_errorz00zz__errorz00(BGl_symbol7716z00zz__datez00, BGl_string7718z00zz__datez00, 
BINT(BgL_dayz00_84)); 
if(
STRINGP(BgL_aux7409z00_12487))
{ /* Llib/date.scm 631 */
return BgL_aux7409z00_12487;}  else 
{ 
obj_t BgL_auxz00_19765;
BgL_auxz00_19765 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)28320)), BGl_string7717z00zz__datez00, BGl_string7719z00zz__datez00, BgL_aux7409z00_12487); 
FAILURE(BgL_auxz00_19765,BFALSE,BFALSE);} }  else 
{ /* Llib/date.scm 630 */
if(
(
(long)(BgL_dayz00_84)>((long)7)))
{ /* Llib/date.scm 633 */
long BgL_arg2864z00_3824;
{ /* Llib/date.scm 633 */
long BgL_arg2865z00_3825;
{ /* Llib/date.scm 633 */
long BgL_res5624z00_9273;
{ /* Llib/date.scm 633 */
long BgL_n1z00_9255;long BgL_n2z00_9256;
BgL_n1z00_9255 = 
(long)(BgL_dayz00_84); 
BgL_n2z00_9256 = ((long)7); 
{ /* Llib/date.scm 633 */
bool_t BgL_test8907z00_19773;
{ /* Llib/date.scm 633 */
long BgL_arg4560z00_9258;
BgL_arg4560z00_9258 = 
(((BgL_n1z00_9255) | (BgL_n2z00_9256)) & -2147483648); 
BgL_test8907z00_19773 = 
(BgL_arg4560z00_9258==((long)0)); } 
if(BgL_test8907z00_19773)
{ /* Llib/date.scm 633 */
int32_t BgL_arg4557z00_9259;
{ /* Llib/date.scm 633 */
int32_t BgL_arg4558z00_9260;int32_t BgL_arg4559z00_9261;
{ /* Llib/date.scm 633 */
int32_t BgL_res5620z00_9265;
BgL_res5620z00_9265 = 
(int32_t)(BgL_n1z00_9255); 
BgL_arg4558z00_9260 = BgL_res5620z00_9265; } 
{ /* Llib/date.scm 633 */
int32_t BgL_res5621z00_9267;
BgL_res5621z00_9267 = 
(int32_t)(BgL_n2z00_9256); 
BgL_arg4559z00_9261 = BgL_res5621z00_9267; } 
BgL_arg4557z00_9259 = 
(BgL_arg4558z00_9260%BgL_arg4559z00_9261); } 
{ /* Llib/date.scm 633 */
long BgL_res5623z00_9272;
{ /* Llib/date.scm 633 */
long BgL_arg4651z00_9269;
BgL_arg4651z00_9269 = 
(long)(BgL_arg4557z00_9259); 
{ /* Llib/date.scm 633 */
long BgL_res5622z00_9271;
BgL_res5622z00_9271 = 
(long)(BgL_arg4651z00_9269); 
BgL_res5623z00_9272 = BgL_res5622z00_9271; } } 
BgL_res5624z00_9273 = BgL_res5623z00_9272; } }  else 
{ /* Llib/date.scm 633 */
BgL_res5624z00_9273 = 
(BgL_n1z00_9255%BgL_n2z00_9256); } } } 
BgL_arg2865z00_3825 = BgL_res5624z00_9273; } 
BgL_arg2864z00_3824 = 
(((long)1)+BgL_arg2865z00_3825); } 
return 
bgl_day_name(
(int)(BgL_arg2864z00_3824));}  else 
{ /* Llib/date.scm 632 */
return 
bgl_day_name(BgL_dayz00_84);} } } 

}



/* &day-name */
obj_t BGl_z62dayzd2namezb0zz__datez00(obj_t BgL_envz00_11405, obj_t BgL_dayz00_11406)
{
{ /* Llib/date.scm 628 */
{ /* Llib/date.scm 630 */
int BgL_auxz00_19786;
{ /* Llib/date.scm 630 */
obj_t BgL_tmpz00_19787;
if(
INTEGERP(BgL_dayz00_11406))
{ /* Llib/date.scm 630 */
BgL_tmpz00_19787 = BgL_dayz00_11406
; }  else 
{ 
obj_t BgL_auxz00_19790;
BgL_auxz00_19790 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)28300)), BGl_string7720z00zz__datez00, BGl_string7524z00zz__datez00, BgL_dayz00_11406); 
FAILURE(BgL_auxz00_19790,BFALSE,BFALSE);} 
BgL_auxz00_19786 = 
CINT(BgL_tmpz00_19787); } 
return 
BGl_dayzd2namezd2zz__datez00(BgL_auxz00_19786);} } 

}



/* day-aname */
BGL_EXPORTED_DEF obj_t BGl_dayzd2anamezd2zz__datez00(int BgL_dayz00_85)
{
{ /* Llib/date.scm 640 */
if(
(
(long)(BgL_dayz00_85)<((long)1)))
{ /* Llib/date.scm 643 */
obj_t BgL_aux7413z00_12491;
BgL_aux7413z00_12491 = 
BGl_errorz00zz__errorz00(BGl_symbol7721z00zz__datez00, BGl_string7718z00zz__datez00, 
BINT(BgL_dayz00_85)); 
if(
STRINGP(BgL_aux7413z00_12491))
{ /* Llib/date.scm 643 */
return BgL_aux7413z00_12491;}  else 
{ 
obj_t BgL_auxz00_19803;
BgL_auxz00_19803 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)28761)), BGl_string7722z00zz__datez00, BGl_string7719z00zz__datez00, BgL_aux7413z00_12491); 
FAILURE(BgL_auxz00_19803,BFALSE,BFALSE);} }  else 
{ /* Llib/date.scm 642 */
if(
(
(long)(BgL_dayz00_85)>((long)7)))
{ /* Llib/date.scm 645 */
long BgL_arg2869z00_3828;
{ /* Llib/date.scm 645 */
long BgL_arg2870z00_3829;
{ /* Llib/date.scm 645 */
long BgL_res5633z00_9298;
{ /* Llib/date.scm 645 */
long BgL_n1z00_9280;long BgL_n2z00_9281;
BgL_n1z00_9280 = 
(long)(BgL_dayz00_85); 
BgL_n2z00_9281 = ((long)7); 
{ /* Llib/date.scm 645 */
bool_t BgL_test8912z00_19811;
{ /* Llib/date.scm 645 */
long BgL_arg4560z00_9283;
BgL_arg4560z00_9283 = 
(((BgL_n1z00_9280) | (BgL_n2z00_9281)) & -2147483648); 
BgL_test8912z00_19811 = 
(BgL_arg4560z00_9283==((long)0)); } 
if(BgL_test8912z00_19811)
{ /* Llib/date.scm 645 */
int32_t BgL_arg4557z00_9284;
{ /* Llib/date.scm 645 */
int32_t BgL_arg4558z00_9285;int32_t BgL_arg4559z00_9286;
{ /* Llib/date.scm 645 */
int32_t BgL_res5629z00_9290;
BgL_res5629z00_9290 = 
(int32_t)(BgL_n1z00_9280); 
BgL_arg4558z00_9285 = BgL_res5629z00_9290; } 
{ /* Llib/date.scm 645 */
int32_t BgL_res5630z00_9292;
BgL_res5630z00_9292 = 
(int32_t)(BgL_n2z00_9281); 
BgL_arg4559z00_9286 = BgL_res5630z00_9292; } 
BgL_arg4557z00_9284 = 
(BgL_arg4558z00_9285%BgL_arg4559z00_9286); } 
{ /* Llib/date.scm 645 */
long BgL_res5632z00_9297;
{ /* Llib/date.scm 645 */
long BgL_arg4651z00_9294;
BgL_arg4651z00_9294 = 
(long)(BgL_arg4557z00_9284); 
{ /* Llib/date.scm 645 */
long BgL_res5631z00_9296;
BgL_res5631z00_9296 = 
(long)(BgL_arg4651z00_9294); 
BgL_res5632z00_9297 = BgL_res5631z00_9296; } } 
BgL_res5633z00_9298 = BgL_res5632z00_9297; } }  else 
{ /* Llib/date.scm 645 */
BgL_res5633z00_9298 = 
(BgL_n1z00_9280%BgL_n2z00_9281); } } } 
BgL_arg2870z00_3829 = BgL_res5633z00_9298; } 
BgL_arg2869z00_3828 = 
(((long)1)+BgL_arg2870z00_3829); } 
return 
bgl_day_aname(
(int)(BgL_arg2869z00_3828));}  else 
{ /* Llib/date.scm 644 */
return 
bgl_day_aname(BgL_dayz00_85);} } } 

}



/* &day-aname */
obj_t BGl_z62dayzd2anamezb0zz__datez00(obj_t BgL_envz00_11407, obj_t BgL_dayz00_11408)
{
{ /* Llib/date.scm 640 */
{ /* Llib/date.scm 642 */
int BgL_auxz00_19824;
{ /* Llib/date.scm 642 */
obj_t BgL_tmpz00_19825;
if(
INTEGERP(BgL_dayz00_11408))
{ /* Llib/date.scm 642 */
BgL_tmpz00_19825 = BgL_dayz00_11408
; }  else 
{ 
obj_t BgL_auxz00_19828;
BgL_auxz00_19828 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)28741)), BGl_string7723z00zz__datez00, BGl_string7524z00zz__datez00, BgL_dayz00_11408); 
FAILURE(BgL_auxz00_19828,BFALSE,BFALSE);} 
BgL_auxz00_19824 = 
CINT(BgL_tmpz00_19825); } 
return 
BGl_dayzd2anamezd2zz__datez00(BgL_auxz00_19824);} } 

}



/* month-name */
BGL_EXPORTED_DEF obj_t BGl_monthzd2namezd2zz__datez00(int BgL_monthz00_86)
{
{ /* Llib/date.scm 652 */
if(
(
(long)(BgL_monthz00_86)<((long)1)))
{ /* Llib/date.scm 655 */
obj_t BgL_aux7417z00_12495;
BgL_aux7417z00_12495 = 
BGl_errorz00zz__errorz00(BGl_symbol7724z00zz__datez00, BGl_string7726z00zz__datez00, 
BINT(BgL_monthz00_86)); 
if(
STRINGP(BgL_aux7417z00_12495))
{ /* Llib/date.scm 655 */
return BgL_aux7417z00_12495;}  else 
{ 
obj_t BgL_auxz00_19841;
BgL_auxz00_19841 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)29210)), BGl_string7727z00zz__datez00, BGl_string7719z00zz__datez00, BgL_aux7417z00_12495); 
FAILURE(BgL_auxz00_19841,BFALSE,BFALSE);} }  else 
{ /* Llib/date.scm 654 */
if(
(
(long)(BgL_monthz00_86)>((long)12)))
{ /* Llib/date.scm 657 */
long BgL_arg2873z00_3832;
{ /* Llib/date.scm 657 */
long BgL_arg2874z00_3833;
{ /* Llib/date.scm 657 */
long BgL_res5642z00_9323;
{ /* Llib/date.scm 657 */
long BgL_n1z00_9305;long BgL_n2z00_9306;
BgL_n1z00_9305 = 
(long)(BgL_monthz00_86); 
BgL_n2z00_9306 = ((long)12); 
{ /* Llib/date.scm 657 */
bool_t BgL_test8917z00_19849;
{ /* Llib/date.scm 657 */
long BgL_arg4560z00_9308;
BgL_arg4560z00_9308 = 
(((BgL_n1z00_9305) | (BgL_n2z00_9306)) & -2147483648); 
BgL_test8917z00_19849 = 
(BgL_arg4560z00_9308==((long)0)); } 
if(BgL_test8917z00_19849)
{ /* Llib/date.scm 657 */
int32_t BgL_arg4557z00_9309;
{ /* Llib/date.scm 657 */
int32_t BgL_arg4558z00_9310;int32_t BgL_arg4559z00_9311;
{ /* Llib/date.scm 657 */
int32_t BgL_res5638z00_9315;
BgL_res5638z00_9315 = 
(int32_t)(BgL_n1z00_9305); 
BgL_arg4558z00_9310 = BgL_res5638z00_9315; } 
{ /* Llib/date.scm 657 */
int32_t BgL_res5639z00_9317;
BgL_res5639z00_9317 = 
(int32_t)(BgL_n2z00_9306); 
BgL_arg4559z00_9311 = BgL_res5639z00_9317; } 
BgL_arg4557z00_9309 = 
(BgL_arg4558z00_9310%BgL_arg4559z00_9311); } 
{ /* Llib/date.scm 657 */
long BgL_res5641z00_9322;
{ /* Llib/date.scm 657 */
long BgL_arg4651z00_9319;
BgL_arg4651z00_9319 = 
(long)(BgL_arg4557z00_9309); 
{ /* Llib/date.scm 657 */
long BgL_res5640z00_9321;
BgL_res5640z00_9321 = 
(long)(BgL_arg4651z00_9319); 
BgL_res5641z00_9322 = BgL_res5640z00_9321; } } 
BgL_res5642z00_9323 = BgL_res5641z00_9322; } }  else 
{ /* Llib/date.scm 657 */
BgL_res5642z00_9323 = 
(BgL_n1z00_9305%BgL_n2z00_9306); } } } 
BgL_arg2874z00_3833 = BgL_res5642z00_9323; } 
BgL_arg2873z00_3832 = 
(((long)1)+BgL_arg2874z00_3833); } 
return 
bgl_month_name(
(int)(BgL_arg2873z00_3832));}  else 
{ /* Llib/date.scm 656 */
return 
bgl_month_name(BgL_monthz00_86);} } } 

}



/* &month-name */
obj_t BGl_z62monthzd2namezb0zz__datez00(obj_t BgL_envz00_11409, obj_t BgL_monthz00_11410)
{
{ /* Llib/date.scm 652 */
{ /* Llib/date.scm 654 */
int BgL_auxz00_19862;
{ /* Llib/date.scm 654 */
obj_t BgL_tmpz00_19863;
if(
INTEGERP(BgL_monthz00_11410))
{ /* Llib/date.scm 654 */
BgL_tmpz00_19863 = BgL_monthz00_11410
; }  else 
{ 
obj_t BgL_auxz00_19866;
BgL_auxz00_19866 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)29188)), BGl_string7728z00zz__datez00, BGl_string7524z00zz__datez00, BgL_monthz00_11410); 
FAILURE(BgL_auxz00_19866,BFALSE,BFALSE);} 
BgL_auxz00_19862 = 
CINT(BgL_tmpz00_19863); } 
return 
BGl_monthzd2namezd2zz__datez00(BgL_auxz00_19862);} } 

}



/* month-aname */
BGL_EXPORTED_DEF obj_t BGl_monthzd2anamezd2zz__datez00(int BgL_monthz00_87)
{
{ /* Llib/date.scm 664 */
if(
(
(long)(BgL_monthz00_87)<((long)1)))
{ /* Llib/date.scm 667 */
obj_t BgL_aux7421z00_12499;
BgL_aux7421z00_12499 = 
BGl_errorz00zz__errorz00(BGl_symbol7724z00zz__datez00, BGl_string7726z00zz__datez00, 
BINT(BgL_monthz00_87)); 
if(
STRINGP(BgL_aux7421z00_12499))
{ /* Llib/date.scm 667 */
return BgL_aux7421z00_12499;}  else 
{ 
obj_t BgL_auxz00_19879;
BgL_auxz00_19879 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)29676)), BGl_string7725z00zz__datez00, BGl_string7719z00zz__datez00, BgL_aux7421z00_12499); 
FAILURE(BgL_auxz00_19879,BFALSE,BFALSE);} }  else 
{ /* Llib/date.scm 666 */
if(
(
(long)(BgL_monthz00_87)>((long)12)))
{ /* Llib/date.scm 669 */
long BgL_arg2877z00_3836;
{ /* Llib/date.scm 669 */
long BgL_arg2880z00_3837;
{ /* Llib/date.scm 669 */
long BgL_res5651z00_9348;
{ /* Llib/date.scm 669 */
long BgL_n1z00_9330;long BgL_n2z00_9331;
BgL_n1z00_9330 = 
(long)(BgL_monthz00_87); 
BgL_n2z00_9331 = ((long)12); 
{ /* Llib/date.scm 669 */
bool_t BgL_test8922z00_19887;
{ /* Llib/date.scm 669 */
long BgL_arg4560z00_9333;
BgL_arg4560z00_9333 = 
(((BgL_n1z00_9330) | (BgL_n2z00_9331)) & -2147483648); 
BgL_test8922z00_19887 = 
(BgL_arg4560z00_9333==((long)0)); } 
if(BgL_test8922z00_19887)
{ /* Llib/date.scm 669 */
int32_t BgL_arg4557z00_9334;
{ /* Llib/date.scm 669 */
int32_t BgL_arg4558z00_9335;int32_t BgL_arg4559z00_9336;
{ /* Llib/date.scm 669 */
int32_t BgL_res5647z00_9340;
BgL_res5647z00_9340 = 
(int32_t)(BgL_n1z00_9330); 
BgL_arg4558z00_9335 = BgL_res5647z00_9340; } 
{ /* Llib/date.scm 669 */
int32_t BgL_res5648z00_9342;
BgL_res5648z00_9342 = 
(int32_t)(BgL_n2z00_9331); 
BgL_arg4559z00_9336 = BgL_res5648z00_9342; } 
BgL_arg4557z00_9334 = 
(BgL_arg4558z00_9335%BgL_arg4559z00_9336); } 
{ /* Llib/date.scm 669 */
long BgL_res5650z00_9347;
{ /* Llib/date.scm 669 */
long BgL_arg4651z00_9344;
BgL_arg4651z00_9344 = 
(long)(BgL_arg4557z00_9334); 
{ /* Llib/date.scm 669 */
long BgL_res5649z00_9346;
BgL_res5649z00_9346 = 
(long)(BgL_arg4651z00_9344); 
BgL_res5650z00_9347 = BgL_res5649z00_9346; } } 
BgL_res5651z00_9348 = BgL_res5650z00_9347; } }  else 
{ /* Llib/date.scm 669 */
BgL_res5651z00_9348 = 
(BgL_n1z00_9330%BgL_n2z00_9331); } } } 
BgL_arg2880z00_3837 = BgL_res5651z00_9348; } 
BgL_arg2877z00_3836 = 
(((long)1)+BgL_arg2880z00_3837); } 
return 
bgl_month_aname(
(int)(BgL_arg2877z00_3836));}  else 
{ /* Llib/date.scm 668 */
return 
bgl_month_aname(BgL_monthz00_87);} } } 

}



/* &month-aname */
obj_t BGl_z62monthzd2anamezb0zz__datez00(obj_t BgL_envz00_11411, obj_t BgL_monthz00_11412)
{
{ /* Llib/date.scm 664 */
{ /* Llib/date.scm 666 */
int BgL_auxz00_19900;
{ /* Llib/date.scm 666 */
obj_t BgL_tmpz00_19901;
if(
INTEGERP(BgL_monthz00_11412))
{ /* Llib/date.scm 666 */
BgL_tmpz00_19901 = BgL_monthz00_11412
; }  else 
{ 
obj_t BgL_auxz00_19904;
BgL_auxz00_19904 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)29654)), BGl_string7729z00zz__datez00, BGl_string7524z00zz__datez00, BgL_monthz00_11412); 
FAILURE(BgL_auxz00_19904,BFALSE,BFALSE);} 
BgL_auxz00_19900 = 
CINT(BgL_tmpz00_19901); } 
return 
BGl_monthzd2anamezd2zz__datez00(BgL_auxz00_19900);} } 

}



/* date-month-length */
BGL_EXPORTED_DEF int BGl_datezd2monthzd2lengthz00zz__datez00(obj_t BgL_dz00_88)
{
{ /* Llib/date.scm 681 */
{ /* Llib/date.scm 682 */
int BgL_mz00_3838;
{ /* Llib/date.scm 682 */
int BgL_res5653z00_9352;
BgL_res5653z00_9352 = 
BGL_DATE_MONTH(BgL_dz00_88); 
BgL_mz00_3838 = BgL_res5653z00_9352; } 
if(
(
(long)(BgL_mz00_3838)==((long)2)))
{ /* Llib/date.scm 684 */
bool_t BgL_test8925z00_19914;
{ /* Llib/date.scm 684 */
int BgL_arg2884z00_3842;
{ /* Llib/date.scm 684 */
int BgL_res5655z00_9356;
BgL_res5655z00_9356 = 
BGL_DATE_YEAR(BgL_dz00_88); 
BgL_arg2884z00_3842 = BgL_res5655z00_9356; } 
{ /* Llib/date.scm 684 */
bool_t BgL_res5677z00_9427;
{ /* Llib/date.scm 691 */
bool_t BgL_test8926z00_19916;
{ /* Llib/date.scm 691 */
long BgL_arg2894z00_9359;
{ /* Llib/date.scm 691 */
long BgL_res5661z00_9382;
{ /* Llib/date.scm 691 */
long BgL_n1z00_9364;long BgL_n2z00_9365;
BgL_n1z00_9364 = 
(long)(BgL_arg2884z00_3842); 
BgL_n2z00_9365 = ((long)4); 
{ /* Llib/date.scm 691 */
bool_t BgL_test8927z00_19918;
{ /* Llib/date.scm 691 */
long BgL_arg4560z00_9367;
BgL_arg4560z00_9367 = 
(((BgL_n1z00_9364) | (BgL_n2z00_9365)) & -2147483648); 
BgL_test8927z00_19918 = 
(BgL_arg4560z00_9367==((long)0)); } 
if(BgL_test8927z00_19918)
{ /* Llib/date.scm 691 */
int32_t BgL_arg4557z00_9368;
{ /* Llib/date.scm 691 */
int32_t BgL_arg4558z00_9369;int32_t BgL_arg4559z00_9370;
{ /* Llib/date.scm 691 */
int32_t BgL_res5657z00_9374;
BgL_res5657z00_9374 = 
(int32_t)(BgL_n1z00_9364); 
BgL_arg4558z00_9369 = BgL_res5657z00_9374; } 
{ /* Llib/date.scm 691 */
int32_t BgL_res5658z00_9376;
BgL_res5658z00_9376 = 
(int32_t)(BgL_n2z00_9365); 
BgL_arg4559z00_9370 = BgL_res5658z00_9376; } 
BgL_arg4557z00_9368 = 
(BgL_arg4558z00_9369%BgL_arg4559z00_9370); } 
{ /* Llib/date.scm 691 */
long BgL_res5660z00_9381;
{ /* Llib/date.scm 691 */
long BgL_arg4651z00_9378;
BgL_arg4651z00_9378 = 
(long)(BgL_arg4557z00_9368); 
{ /* Llib/date.scm 691 */
long BgL_res5659z00_9380;
BgL_res5659z00_9380 = 
(long)(BgL_arg4651z00_9378); 
BgL_res5660z00_9381 = BgL_res5659z00_9380; } } 
BgL_res5661z00_9382 = BgL_res5660z00_9381; } }  else 
{ /* Llib/date.scm 691 */
BgL_res5661z00_9382 = 
(BgL_n1z00_9364%BgL_n2z00_9365); } } } 
BgL_arg2894z00_9359 = BgL_res5661z00_9382; } 
BgL_test8926z00_19916 = 
(BgL_arg2894z00_9359==((long)0)); } 
if(BgL_test8926z00_19916)
{ /* Llib/date.scm 692 */
bool_t BgL__ortest_1058z00_9360;
{ /* Llib/date.scm 692 */
bool_t BgL_test8928z00_19928;
{ /* Llib/date.scm 692 */
long BgL_arg2889z00_9362;
{ /* Llib/date.scm 692 */
long BgL_res5668z00_9403;
{ /* Llib/date.scm 692 */
long BgL_n1z00_9385;long BgL_n2z00_9386;
BgL_n1z00_9385 = 
(long)(BgL_arg2884z00_3842); 
BgL_n2z00_9386 = ((long)100); 
{ /* Llib/date.scm 692 */
bool_t BgL_test8929z00_19930;
{ /* Llib/date.scm 692 */
long BgL_arg4560z00_9388;
BgL_arg4560z00_9388 = 
(((BgL_n1z00_9385) | (BgL_n2z00_9386)) & -2147483648); 
BgL_test8929z00_19930 = 
(BgL_arg4560z00_9388==((long)0)); } 
if(BgL_test8929z00_19930)
{ /* Llib/date.scm 692 */
int32_t BgL_arg4557z00_9389;
{ /* Llib/date.scm 692 */
int32_t BgL_arg4558z00_9390;int32_t BgL_arg4559z00_9391;
{ /* Llib/date.scm 692 */
int32_t BgL_res5664z00_9395;
BgL_res5664z00_9395 = 
(int32_t)(BgL_n1z00_9385); 
BgL_arg4558z00_9390 = BgL_res5664z00_9395; } 
{ /* Llib/date.scm 692 */
int32_t BgL_res5665z00_9397;
BgL_res5665z00_9397 = 
(int32_t)(BgL_n2z00_9386); 
BgL_arg4559z00_9391 = BgL_res5665z00_9397; } 
BgL_arg4557z00_9389 = 
(BgL_arg4558z00_9390%BgL_arg4559z00_9391); } 
{ /* Llib/date.scm 692 */
long BgL_res5667z00_9402;
{ /* Llib/date.scm 692 */
long BgL_arg4651z00_9399;
BgL_arg4651z00_9399 = 
(long)(BgL_arg4557z00_9389); 
{ /* Llib/date.scm 692 */
long BgL_res5666z00_9401;
BgL_res5666z00_9401 = 
(long)(BgL_arg4651z00_9399); 
BgL_res5667z00_9402 = BgL_res5666z00_9401; } } 
BgL_res5668z00_9403 = BgL_res5667z00_9402; } }  else 
{ /* Llib/date.scm 692 */
BgL_res5668z00_9403 = 
(BgL_n1z00_9385%BgL_n2z00_9386); } } } 
BgL_arg2889z00_9362 = BgL_res5668z00_9403; } 
BgL_test8928z00_19928 = 
(BgL_arg2889z00_9362==((long)0)); } 
if(BgL_test8928z00_19928)
{ /* Llib/date.scm 692 */
BgL__ortest_1058z00_9360 = ((bool_t)0); }  else 
{ /* Llib/date.scm 692 */
BgL__ortest_1058z00_9360 = ((bool_t)1); } } 
if(BgL__ortest_1058z00_9360)
{ /* Llib/date.scm 692 */
BgL_res5677z00_9427 = BgL__ortest_1058z00_9360; }  else 
{ /* Llib/date.scm 693 */
long BgL_arg2886z00_9363;
{ /* Llib/date.scm 693 */
long BgL_res5675z00_9424;
{ /* Llib/date.scm 693 */
long BgL_n1z00_9406;long BgL_n2z00_9407;
BgL_n1z00_9406 = 
(long)(BgL_arg2884z00_3842); 
BgL_n2z00_9407 = ((long)400); 
{ /* Llib/date.scm 693 */
bool_t BgL_test8931z00_19942;
{ /* Llib/date.scm 693 */
long BgL_arg4560z00_9409;
BgL_arg4560z00_9409 = 
(((BgL_n1z00_9406) | (BgL_n2z00_9407)) & -2147483648); 
BgL_test8931z00_19942 = 
(BgL_arg4560z00_9409==((long)0)); } 
if(BgL_test8931z00_19942)
{ /* Llib/date.scm 693 */
int32_t BgL_arg4557z00_9410;
{ /* Llib/date.scm 693 */
int32_t BgL_arg4558z00_9411;int32_t BgL_arg4559z00_9412;
{ /* Llib/date.scm 693 */
int32_t BgL_res5671z00_9416;
BgL_res5671z00_9416 = 
(int32_t)(BgL_n1z00_9406); 
BgL_arg4558z00_9411 = BgL_res5671z00_9416; } 
{ /* Llib/date.scm 693 */
int32_t BgL_res5672z00_9418;
BgL_res5672z00_9418 = 
(int32_t)(BgL_n2z00_9407); 
BgL_arg4559z00_9412 = BgL_res5672z00_9418; } 
BgL_arg4557z00_9410 = 
(BgL_arg4558z00_9411%BgL_arg4559z00_9412); } 
{ /* Llib/date.scm 693 */
long BgL_res5674z00_9423;
{ /* Llib/date.scm 693 */
long BgL_arg4651z00_9420;
BgL_arg4651z00_9420 = 
(long)(BgL_arg4557z00_9410); 
{ /* Llib/date.scm 693 */
long BgL_res5673z00_9422;
BgL_res5673z00_9422 = 
(long)(BgL_arg4651z00_9420); 
BgL_res5674z00_9423 = BgL_res5673z00_9422; } } 
BgL_res5675z00_9424 = BgL_res5674z00_9423; } }  else 
{ /* Llib/date.scm 693 */
BgL_res5675z00_9424 = 
(BgL_n1z00_9406%BgL_n2z00_9407); } } } 
BgL_arg2886z00_9363 = BgL_res5675z00_9424; } 
BgL_res5677z00_9427 = 
(BgL_arg2886z00_9363==((long)0)); } }  else 
{ /* Llib/date.scm 691 */
BgL_res5677z00_9427 = ((bool_t)0); } } 
BgL_test8925z00_19914 = BgL_res5677z00_9427; } } 
if(BgL_test8925z00_19914)
{ /* Llib/date.scm 684 */
return 
(int)(((long)29));}  else 
{ /* Llib/date.scm 684 */
return 
(int)(((long)28));} }  else 
{ /* Llib/date.scm 685 */
long BgL_arg2885z00_3843;
BgL_arg2885z00_3843 = 
(
(long)(BgL_mz00_3838)-((long)1)); 
{ /* Llib/date.scm 685 */
obj_t BgL_vectorz00_9430;
BgL_vectorz00_9430 = BGl_za2monthzd2lengthsza2zd2zz__datez00; 
{ /* Llib/date.scm 685 */
bool_t BgL_test8932z00_19956;
{ /* Llib/date.scm 685 */
long BgL_tmpz00_19957;
BgL_tmpz00_19957 = 
VECTOR_LENGTH(BgL_vectorz00_9430); 
BgL_test8932z00_19956 = 
BOUND_CHECK(BgL_arg2885z00_3843, BgL_tmpz00_19957); } 
if(BgL_test8932z00_19956)
{ /* Llib/date.scm 685 */
obj_t BgL_tmpz00_19960;
{ /* Llib/date.scm 685 */
obj_t BgL_aux7425z00_12503;
BgL_aux7425z00_12503 = 
VECTOR_REF(BgL_vectorz00_9430,BgL_arg2885z00_3843); 
if(
INTEGERP(BgL_aux7425z00_12503))
{ /* Llib/date.scm 685 */
BgL_tmpz00_19960 = BgL_aux7425z00_12503
; }  else 
{ 
obj_t BgL_auxz00_19964;
BgL_auxz00_19964 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)30490)), BGl_string7730z00zz__datez00, BGl_string7524z00zz__datez00, BgL_aux7425z00_12503); 
FAILURE(BgL_auxz00_19964,BFALSE,BFALSE);} } 
return 
CINT(BgL_tmpz00_19960);}  else 
{ 
obj_t BgL_auxz00_19969;
BgL_auxz00_19969 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)30490)), BGl_string7643z00zz__datez00, BgL_vectorz00_9430, 
(int)(
VECTOR_LENGTH(BgL_vectorz00_9430)), 
(int)(BgL_arg2885z00_3843)); 
FAILURE(BgL_auxz00_19969,BFALSE,BFALSE);} } } } } } 

}



/* &date-month-length */
obj_t BGl_z62datezd2monthzd2lengthz62zz__datez00(obj_t BgL_envz00_11413, obj_t BgL_dz00_11414)
{
{ /* Llib/date.scm 681 */
{ /* Llib/date.scm 682 */
int BgL_tmpz00_19976;
{ /* Llib/date.scm 682 */
obj_t BgL_auxz00_19977;
if(
BGL_DATEP(BgL_dz00_11414))
{ /* Llib/date.scm 682 */
BgL_auxz00_19977 = BgL_dz00_11414
; }  else 
{ 
obj_t BgL_auxz00_19980;
BgL_auxz00_19980 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)30400)), BGl_string7731z00zz__datez00, BGl_string7675z00zz__datez00, BgL_dz00_11414); 
FAILURE(BgL_auxz00_19980,BFALSE,BFALSE);} 
BgL_tmpz00_19976 = 
BGl_datezd2monthzd2lengthz00zz__datez00(BgL_auxz00_19977); } 
return 
BINT(BgL_tmpz00_19976);} } 

}



/* leap-year? */
BGL_EXPORTED_DEF bool_t BGl_leapzd2yearzf3z21zz__datez00(int BgL_yearz00_89)
{
{ /* Llib/date.scm 690 */
{ /* Llib/date.scm 691 */
bool_t BgL_test8935z00_19986;
{ /* Llib/date.scm 691 */
long BgL_arg2894z00_13774;
{ /* Llib/date.scm 691 */
long BgL_res5684z00_13775;
{ /* Llib/date.scm 691 */
long BgL_n1z00_13776;long BgL_n2z00_13777;
BgL_n1z00_13776 = 
(long)(BgL_yearz00_89); 
BgL_n2z00_13777 = ((long)4); 
{ /* Llib/date.scm 691 */
bool_t BgL_test8936z00_19988;
{ /* Llib/date.scm 691 */
long BgL_arg4560z00_13778;
BgL_arg4560z00_13778 = 
(((BgL_n1z00_13776) | (BgL_n2z00_13777)) & -2147483648); 
BgL_test8936z00_19988 = 
(BgL_arg4560z00_13778==((long)0)); } 
if(BgL_test8936z00_19988)
{ /* Llib/date.scm 691 */
int32_t BgL_arg4557z00_13779;
{ /* Llib/date.scm 691 */
int32_t BgL_arg4558z00_13780;int32_t BgL_arg4559z00_13781;
{ /* Llib/date.scm 691 */
int32_t BgL_res5680z00_13782;
BgL_res5680z00_13782 = 
(int32_t)(BgL_n1z00_13776); 
BgL_arg4558z00_13780 = BgL_res5680z00_13782; } 
{ /* Llib/date.scm 691 */
int32_t BgL_res5681z00_13783;
BgL_res5681z00_13783 = 
(int32_t)(BgL_n2z00_13777); 
BgL_arg4559z00_13781 = BgL_res5681z00_13783; } 
BgL_arg4557z00_13779 = 
(BgL_arg4558z00_13780%BgL_arg4559z00_13781); } 
{ /* Llib/date.scm 691 */
long BgL_res5683z00_13784;
{ /* Llib/date.scm 691 */
long BgL_arg4651z00_13785;
BgL_arg4651z00_13785 = 
(long)(BgL_arg4557z00_13779); 
{ /* Llib/date.scm 691 */
long BgL_res5682z00_13786;
BgL_res5682z00_13786 = 
(long)(BgL_arg4651z00_13785); 
BgL_res5683z00_13784 = BgL_res5682z00_13786; } } 
BgL_res5684z00_13775 = BgL_res5683z00_13784; } }  else 
{ /* Llib/date.scm 691 */
BgL_res5684z00_13775 = 
(BgL_n1z00_13776%BgL_n2z00_13777); } } } 
BgL_arg2894z00_13774 = BgL_res5684z00_13775; } 
BgL_test8935z00_19986 = 
(BgL_arg2894z00_13774==((long)0)); } 
if(BgL_test8935z00_19986)
{ /* Llib/date.scm 692 */
bool_t BgL__ortest_1058z00_13787;
{ /* Llib/date.scm 692 */
bool_t BgL_test8937z00_19998;
{ /* Llib/date.scm 692 */
long BgL_arg2889z00_13788;
{ /* Llib/date.scm 692 */
long BgL_res5691z00_13789;
{ /* Llib/date.scm 692 */
long BgL_n1z00_13790;long BgL_n2z00_13791;
BgL_n1z00_13790 = 
(long)(BgL_yearz00_89); 
BgL_n2z00_13791 = ((long)100); 
{ /* Llib/date.scm 692 */
bool_t BgL_test8938z00_20000;
{ /* Llib/date.scm 692 */
long BgL_arg4560z00_13792;
BgL_arg4560z00_13792 = 
(((BgL_n1z00_13790) | (BgL_n2z00_13791)) & -2147483648); 
BgL_test8938z00_20000 = 
(BgL_arg4560z00_13792==((long)0)); } 
if(BgL_test8938z00_20000)
{ /* Llib/date.scm 692 */
int32_t BgL_arg4557z00_13793;
{ /* Llib/date.scm 692 */
int32_t BgL_arg4558z00_13794;int32_t BgL_arg4559z00_13795;
{ /* Llib/date.scm 692 */
int32_t BgL_res5687z00_13796;
BgL_res5687z00_13796 = 
(int32_t)(BgL_n1z00_13790); 
BgL_arg4558z00_13794 = BgL_res5687z00_13796; } 
{ /* Llib/date.scm 692 */
int32_t BgL_res5688z00_13797;
BgL_res5688z00_13797 = 
(int32_t)(BgL_n2z00_13791); 
BgL_arg4559z00_13795 = BgL_res5688z00_13797; } 
BgL_arg4557z00_13793 = 
(BgL_arg4558z00_13794%BgL_arg4559z00_13795); } 
{ /* Llib/date.scm 692 */
long BgL_res5690z00_13798;
{ /* Llib/date.scm 692 */
long BgL_arg4651z00_13799;
BgL_arg4651z00_13799 = 
(long)(BgL_arg4557z00_13793); 
{ /* Llib/date.scm 692 */
long BgL_res5689z00_13800;
BgL_res5689z00_13800 = 
(long)(BgL_arg4651z00_13799); 
BgL_res5690z00_13798 = BgL_res5689z00_13800; } } 
BgL_res5691z00_13789 = BgL_res5690z00_13798; } }  else 
{ /* Llib/date.scm 692 */
BgL_res5691z00_13789 = 
(BgL_n1z00_13790%BgL_n2z00_13791); } } } 
BgL_arg2889z00_13788 = BgL_res5691z00_13789; } 
BgL_test8937z00_19998 = 
(BgL_arg2889z00_13788==((long)0)); } 
if(BgL_test8937z00_19998)
{ /* Llib/date.scm 692 */
BgL__ortest_1058z00_13787 = ((bool_t)0); }  else 
{ /* Llib/date.scm 692 */
BgL__ortest_1058z00_13787 = ((bool_t)1); } } 
if(BgL__ortest_1058z00_13787)
{ /* Llib/date.scm 692 */
return BgL__ortest_1058z00_13787;}  else 
{ /* Llib/date.scm 693 */
long BgL_arg2886z00_13801;
{ /* Llib/date.scm 693 */
long BgL_res5698z00_13802;
{ /* Llib/date.scm 693 */
long BgL_n1z00_13803;long BgL_n2z00_13804;
BgL_n1z00_13803 = 
(long)(BgL_yearz00_89); 
BgL_n2z00_13804 = ((long)400); 
{ /* Llib/date.scm 693 */
bool_t BgL_test8940z00_20012;
{ /* Llib/date.scm 693 */
long BgL_arg4560z00_13805;
BgL_arg4560z00_13805 = 
(((BgL_n1z00_13803) | (BgL_n2z00_13804)) & -2147483648); 
BgL_test8940z00_20012 = 
(BgL_arg4560z00_13805==((long)0)); } 
if(BgL_test8940z00_20012)
{ /* Llib/date.scm 693 */
int32_t BgL_arg4557z00_13806;
{ /* Llib/date.scm 693 */
int32_t BgL_arg4558z00_13807;int32_t BgL_arg4559z00_13808;
{ /* Llib/date.scm 693 */
int32_t BgL_res5694z00_13809;
BgL_res5694z00_13809 = 
(int32_t)(BgL_n1z00_13803); 
BgL_arg4558z00_13807 = BgL_res5694z00_13809; } 
{ /* Llib/date.scm 693 */
int32_t BgL_res5695z00_13810;
BgL_res5695z00_13810 = 
(int32_t)(BgL_n2z00_13804); 
BgL_arg4559z00_13808 = BgL_res5695z00_13810; } 
BgL_arg4557z00_13806 = 
(BgL_arg4558z00_13807%BgL_arg4559z00_13808); } 
{ /* Llib/date.scm 693 */
long BgL_res5697z00_13811;
{ /* Llib/date.scm 693 */
long BgL_arg4651z00_13812;
BgL_arg4651z00_13812 = 
(long)(BgL_arg4557z00_13806); 
{ /* Llib/date.scm 693 */
long BgL_res5696z00_13813;
BgL_res5696z00_13813 = 
(long)(BgL_arg4651z00_13812); 
BgL_res5697z00_13811 = BgL_res5696z00_13813; } } 
BgL_res5698z00_13802 = BgL_res5697z00_13811; } }  else 
{ /* Llib/date.scm 693 */
BgL_res5698z00_13802 = 
(BgL_n1z00_13803%BgL_n2z00_13804); } } } 
BgL_arg2886z00_13801 = BgL_res5698z00_13802; } 
return 
(BgL_arg2886z00_13801==((long)0));} }  else 
{ /* Llib/date.scm 691 */
return ((bool_t)0);} } } 

}



/* &leap-year? */
obj_t BGl_z62leapzd2yearzf3z43zz__datez00(obj_t BgL_envz00_11415, obj_t BgL_yearz00_11416)
{
{ /* Llib/date.scm 690 */
{ /* Llib/date.scm 691 */
bool_t BgL_tmpz00_20022;
{ /* Llib/date.scm 691 */
int BgL_auxz00_20023;
{ /* Llib/date.scm 691 */
obj_t BgL_tmpz00_20024;
if(
INTEGERP(BgL_yearz00_11416))
{ /* Llib/date.scm 691 */
BgL_tmpz00_20024 = BgL_yearz00_11416
; }  else 
{ 
obj_t BgL_auxz00_20027;
BgL_auxz00_20027 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)30796)), BGl_string7732z00zz__datez00, BGl_string7524z00zz__datez00, BgL_yearz00_11416); 
FAILURE(BgL_auxz00_20027,BFALSE,BFALSE);} 
BgL_auxz00_20023 = 
CINT(BgL_tmpz00_20024); } 
BgL_tmpz00_20022 = 
BGl_leapzd2yearzf3z21zz__datez00(BgL_auxz00_20023); } 
return 
BBOOL(BgL_tmpz00_20022);} } 

}



/* rfc2822-date->date */
BGL_EXPORTED_DEF obj_t BGl_rfc2822zd2datezd2ze3dateze3zz__datez00(obj_t BgL_stringz00_90)
{
{ /* Llib/date.scm 698 */
{ /* Llib/date.scm 699 */
obj_t BgL_portz00_3851;
{ /* Ieee/port.scm 442 */
long BgL_endz00_3855;
BgL_endz00_3855 = 
STRING_LENGTH(BgL_stringz00_90); 
{ /* Ieee/port.scm 442 */

BgL_portz00_3851 = 
BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(BgL_stringz00_90, 
BINT(((long)0)), 
BINT(BgL_endz00_3855)); } } 
{ /* Llib/date.scm 700 */
obj_t BgL_dz00_3852;
{ /* Llib/date.scm 700 */
obj_t BgL_res5701z00_9504;
{ /* Llib/date.scm 708 */
obj_t BgL_aux7431z00_12509;
BgL_aux7431z00_12509 = 
BGl_z62zc3z04anonymousza31449ze3ze5zz__datez00(BGl_dayzd2ofzd2weekzd2grammarzd2zz__datez00, BgL_portz00_3851); 
if(
BGL_DATEP(BgL_aux7431z00_12509))
{ /* Llib/date.scm 708 */
BgL_res5701z00_9504 = BgL_aux7431z00_12509; }  else 
{ 
obj_t BgL_auxz00_20044;
BgL_auxz00_20044 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)31555)), BGl_string7733z00zz__datez00, BGl_string7675z00zz__datez00, BgL_aux7431z00_12509); 
FAILURE(BgL_auxz00_20044,BFALSE,BFALSE);} } 
BgL_dz00_3852 = BgL_res5701z00_9504; } 
bgl_close_input_port(BgL_portz00_3851); 
return BgL_dz00_3852;} } } 

}



/* &rfc2822-date->date */
obj_t BGl_z62rfc2822zd2datezd2ze3datez81zz__datez00(obj_t BgL_envz00_11417, obj_t BgL_stringz00_11418)
{
{ /* Llib/date.scm 698 */
{ /* Llib/date.scm 699 */
obj_t BgL_auxz00_20049;
if(
STRINGP(BgL_stringz00_11418))
{ /* Llib/date.scm 699 */
BgL_auxz00_20049 = BgL_stringz00_11418
; }  else 
{ 
obj_t BgL_auxz00_20052;
BgL_auxz00_20052 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)31168)), BGl_string7734z00zz__datez00, BGl_string7719z00zz__datez00, BgL_stringz00_11418); 
FAILURE(BgL_auxz00_20052,BFALSE,BFALSE);} 
return 
BGl_rfc2822zd2datezd2ze3dateze3zz__datez00(BgL_auxz00_20049);} } 

}



/* rfc2822-parse-date */
BGL_EXPORTED_DEF obj_t BGl_rfc2822zd2parsezd2datez00zz__datez00(obj_t BgL_ipz00_91)
{
{ /* Llib/date.scm 707 */
{ /* Llib/date.scm 708 */
obj_t BgL_aux7435z00_12513;
BgL_aux7435z00_12513 = 
BGl_z62zc3z04anonymousza31449ze3ze5zz__datez00(BGl_dayzd2ofzd2weekzd2grammarzd2zz__datez00, BgL_ipz00_91); 
if(
BGL_DATEP(BgL_aux7435z00_12513))
{ /* Llib/date.scm 708 */
return BgL_aux7435z00_12513;}  else 
{ 
obj_t BgL_auxz00_20063;
BgL_auxz00_20063 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)31555)), BGl_string7522z00zz__datez00, BGl_string7675z00zz__datez00, BgL_aux7435z00_12513); 
FAILURE(BgL_auxz00_20063,BFALSE,BFALSE);} } } 

}



/* &rfc2822-parse-date */
obj_t BGl_z62rfc2822zd2parsezd2datez62zz__datez00(obj_t BgL_envz00_11419, obj_t BgL_ipz00_11420)
{
{ /* Llib/date.scm 707 */
{ /* Llib/date.scm 708 */
obj_t BgL_auxz00_20067;
if(
INPUT_PORTP(BgL_ipz00_11420))
{ /* Llib/date.scm 708 */
BgL_auxz00_20067 = BgL_ipz00_11420
; }  else 
{ 
obj_t BgL_auxz00_20070;
BgL_auxz00_20070 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)31555)), BGl_string7735z00zz__datez00, BGl_string7521z00zz__datez00, BgL_ipz00_11420); 
FAILURE(BgL_auxz00_20070,BFALSE,BFALSE);} 
return 
BGl_rfc2822zd2parsezd2datez00zz__datez00(BgL_auxz00_20067);} } 

}



/* date->rfc2822-date */
BGL_EXPORTED_DEF obj_t BGl_datezd2ze3rfc2822zd2dateze3zz__datez00(obj_t BgL_datez00_92)
{
{ /* Llib/date.scm 713 */
{ 
obj_t BgL_datez00_3859;long BgL_tza7za7_3860;
{ /* Llib/date.scm 762 */
long BgL_tza7za7_3857;
{ /* Llib/date.scm 762 */
long BgL_res5737z00_9610;
BgL_res5737z00_9610 = 
BGL_DATE_TIMEZONE(BgL_datez00_92); 
BgL_tza7za7_3857 = BgL_res5737z00_9610; } 
if(
(BgL_tza7za7_3857==((long)0)))
{ /* Llib/date.scm 763 */
return 
BGl_datezd2ze3utczd2stringze3zz__datez00(BgL_datez00_92);}  else 
{ /* Llib/date.scm 763 */
BgL_datez00_3859 = BgL_datez00_92; 
BgL_tza7za7_3860 = BgL_tza7za7_3857; 
{ /* Llib/date.scm 716 */
obj_t BgL_bufz00_3862;long BgL_wz00_3863;
BgL_bufz00_3862 = 
make_string(((long)32), ((unsigned char)' ')); 
BgL_wz00_3863 = ((long)0); 
{ /* Llib/date.scm 730 */
long BgL_arg2897z00_3864;
{ /* Llib/date.scm 730 */
obj_t BgL_arg2898z00_3865;
{ /* Llib/date.scm 730 */
int BgL_arg2899z00_3866;
{ /* Llib/date.scm 730 */
int BgL_res5703z00_9508;
BgL_res5703z00_9508 = 
BGL_DATE_WDAY(BgL_datez00_3859); 
BgL_arg2899z00_3866 = BgL_res5703z00_9508; } 
BgL_arg2898z00_3865 = 
BGl_dayzd2anamezd2zz__datez00(BgL_arg2899z00_3866); } 
{ /* Llib/date.scm 730 */
long BgL_wz00_9509;
BgL_wz00_9509 = BgL_wz00_3863; 
{ /* Llib/date.scm 554 */
long BgL_lz00_9510;
BgL_lz00_9510 = 
STRING_LENGTH(BgL_arg2898z00_3865); 
BGl_blitzd2stringz12zc0zz__r4_strings_6_7z00(BgL_arg2898z00_3865, ((long)0), BgL_bufz00_3862, BgL_wz00_9509, BgL_lz00_9510); 
BgL_arg2897z00_3864 = BgL_lz00_9510; } } } 
BgL_wz00_3863 = 
(BgL_wz00_3863+BgL_arg2897z00_3864); } 
{ /* Llib/date.scm 731 */
long BgL_kz00_9517;
BgL_kz00_9517 = BgL_wz00_3863; 
{ /* Llib/date.scm 731 */
long BgL_l6475z00_11544;
BgL_l6475z00_11544 = 
STRING_LENGTH(BgL_bufz00_3862); 
if(
BOUND_CHECK(BgL_kz00_9517, BgL_l6475z00_11544))
{ /* Llib/date.scm 731 */
STRING_SET(BgL_bufz00_3862, BgL_kz00_9517, ((unsigned char)',')); }  else 
{ 
obj_t BgL_auxz00_20089;
BgL_auxz00_20089 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)32791)), BGl_string7712z00zz__datez00, BgL_bufz00_3862, 
(int)(BgL_l6475z00_11544), 
(int)(BgL_kz00_9517)); 
FAILURE(BgL_auxz00_20089,BFALSE,BFALSE);} } } 
BgL_wz00_3863 = 
(BgL_wz00_3863+((long)2)); 
{ /* Llib/date.scm 734 */
long BgL_arg2900z00_3867;
{ /* Llib/date.scm 734 */
int BgL_arg2901z00_3868;
{ /* Llib/date.scm 734 */
int BgL_res5707z00_9522;
BgL_res5707z00_9522 = 
BGL_DATE_DAY(BgL_datez00_3859); 
BgL_arg2901z00_3868 = BgL_res5707z00_9522; } 
BgL_arg2900z00_3867 = 
BGl_blitzd2intz12zc0zz__datez00(BgL_bufz00_3862, BgL_wz00_3863, BgL_arg2901z00_3868); } 
BgL_wz00_3863 = 
(BgL_wz00_3863+BgL_arg2900z00_3867); } 
BgL_wz00_3863 = 
(BgL_wz00_3863+((long)1)); 
{ /* Llib/date.scm 737 */
long BgL_arg2902z00_3869;
{ /* Llib/date.scm 737 */
obj_t BgL_arg2903z00_3870;
{ /* Llib/date.scm 737 */
int BgL_arg2904z00_3871;
{ /* Llib/date.scm 737 */
int BgL_res5710z00_9529;
BgL_res5710z00_9529 = 
BGL_DATE_MONTH(BgL_datez00_3859); 
BgL_arg2904z00_3871 = BgL_res5710z00_9529; } 
BgL_arg2903z00_3870 = 
BGl_monthzd2anamezd2zz__datez00(BgL_arg2904z00_3871); } 
{ /* Llib/date.scm 737 */
long BgL_wz00_9530;
BgL_wz00_9530 = BgL_wz00_3863; 
{ /* Llib/date.scm 554 */
long BgL_lz00_9531;
BgL_lz00_9531 = 
STRING_LENGTH(BgL_arg2903z00_3870); 
BGl_blitzd2stringz12zc0zz__r4_strings_6_7z00(BgL_arg2903z00_3870, ((long)0), BgL_bufz00_3862, BgL_wz00_9530, BgL_lz00_9531); 
BgL_arg2902z00_3869 = BgL_lz00_9531; } } } 
BgL_wz00_3863 = 
(BgL_wz00_3863+BgL_arg2902z00_3869); } 
BgL_wz00_3863 = 
(BgL_wz00_3863+((long)1)); 
{ /* Llib/date.scm 740 */
long BgL_arg2905z00_3872;
{ /* Llib/date.scm 740 */
int BgL_arg2906z00_3873;
{ /* Llib/date.scm 740 */
int BgL_res5714z00_9540;
BgL_res5714z00_9540 = 
BGL_DATE_YEAR(BgL_datez00_3859); 
BgL_arg2906z00_3873 = BgL_res5714z00_9540; } 
BgL_arg2905z00_3872 = 
BGl_blitzd2intz12zc0zz__datez00(BgL_bufz00_3862, BgL_wz00_3863, BgL_arg2906z00_3873); } 
BgL_wz00_3863 = 
(BgL_wz00_3863+BgL_arg2905z00_3872); } 
BgL_wz00_3863 = 
(BgL_wz00_3863+((long)1)); 
{ /* Llib/date.scm 743 */
long BgL_arg2907z00_3874;
{ /* Llib/date.scm 743 */
int BgL_arg2910z00_3875;
{ /* Llib/date.scm 743 */
int BgL_res5717z00_9547;
BgL_res5717z00_9547 = 
BGL_DATE_HOUR(BgL_datez00_3859); 
BgL_arg2910z00_3875 = BgL_res5717z00_9547; } 
BgL_arg2907z00_3874 = 
BGl_blitzd2int2z12zc0zz__datez00(BgL_bufz00_3862, BgL_wz00_3863, BgL_arg2910z00_3875); } 
BgL_wz00_3863 = 
(BgL_wz00_3863+BgL_arg2907z00_3874); } 
{ /* Llib/date.scm 744 */
long BgL_kz00_9552;
BgL_kz00_9552 = BgL_wz00_3863; 
{ /* Llib/date.scm 744 */
long BgL_l6479z00_11548;
BgL_l6479z00_11548 = 
STRING_LENGTH(BgL_bufz00_3862); 
if(
BOUND_CHECK(BgL_kz00_9552, BgL_l6479z00_11548))
{ /* Llib/date.scm 744 */
STRING_SET(BgL_bufz00_3862, BgL_kz00_9552, ((unsigned char)':')); }  else 
{ 
obj_t BgL_auxz00_20117;
BgL_auxz00_20117 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)33193)), BGl_string7712z00zz__datez00, BgL_bufz00_3862, 
(int)(BgL_l6479z00_11548), 
(int)(BgL_kz00_9552)); 
FAILURE(BgL_auxz00_20117,BFALSE,BFALSE);} } } 
BgL_wz00_3863 = 
(BgL_wz00_3863+((long)1)); 
{ /* Llib/date.scm 747 */
long BgL_arg2911z00_3876;
{ /* Llib/date.scm 747 */
int BgL_arg2912z00_3877;
{ /* Llib/date.scm 747 */
int BgL_res5720z00_9557;
BgL_res5720z00_9557 = 
BGL_DATE_MINUTE(BgL_datez00_3859); 
BgL_arg2912z00_3877 = BgL_res5720z00_9557; } 
BgL_arg2911z00_3876 = 
BGl_blitzd2int2z12zc0zz__datez00(BgL_bufz00_3862, BgL_wz00_3863, BgL_arg2912z00_3877); } 
BgL_wz00_3863 = 
(BgL_wz00_3863+BgL_arg2911z00_3876); } 
{ /* Llib/date.scm 748 */
long BgL_kz00_9562;
BgL_kz00_9562 = BgL_wz00_3863; 
{ /* Llib/date.scm 748 */
long BgL_l6483z00_11552;
BgL_l6483z00_11552 = 
STRING_LENGTH(BgL_bufz00_3862); 
if(
BOUND_CHECK(BgL_kz00_9562, BgL_l6483z00_11552))
{ /* Llib/date.scm 748 */
STRING_SET(BgL_bufz00_3862, BgL_kz00_9562, ((unsigned char)':')); }  else 
{ 
obj_t BgL_auxz00_20131;
BgL_auxz00_20131 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)33314)), BGl_string7712z00zz__datez00, BgL_bufz00_3862, 
(int)(BgL_l6483z00_11552), 
(int)(BgL_kz00_9562)); 
FAILURE(BgL_auxz00_20131,BFALSE,BFALSE);} } } 
BgL_wz00_3863 = 
(BgL_wz00_3863+((long)1)); 
{ /* Llib/date.scm 751 */
long BgL_arg2913z00_3878;
{ /* Llib/date.scm 751 */
int BgL_arg2914z00_3879;
{ /* Llib/date.scm 751 */
int BgL_res5723z00_9567;
BgL_res5723z00_9567 = 
BGL_DATE_SECOND(BgL_datez00_3859); 
BgL_arg2914z00_3879 = BgL_res5723z00_9567; } 
BgL_arg2913z00_3878 = 
BGl_blitzd2int2z12zc0zz__datez00(BgL_bufz00_3862, BgL_wz00_3863, BgL_arg2914z00_3879); } 
BgL_wz00_3863 = 
(BgL_wz00_3863+BgL_arg2913z00_3878); } 
BgL_wz00_3863 = 
(BgL_wz00_3863+((long)1)); 
{ /* Llib/date.scm 754 */
unsigned char BgL_arg2915z00_3880;
if(
(BgL_tza7za7_3860<((long)0)))
{ /* Llib/date.scm 754 */
BgL_arg2915z00_3880 = ((unsigned char)'-'); }  else 
{ /* Llib/date.scm 754 */
BgL_arg2915z00_3880 = ((unsigned char)'+'); } 
{ /* Llib/date.scm 754 */
long BgL_kz00_9576;
BgL_kz00_9576 = BgL_wz00_3863; 
{ /* Llib/date.scm 754 */
long BgL_l6487z00_11556;
BgL_l6487z00_11556 = 
STRING_LENGTH(BgL_bufz00_3862); 
if(
BOUND_CHECK(BgL_kz00_9576, BgL_l6487z00_11556))
{ /* Llib/date.scm 754 */
STRING_SET(BgL_bufz00_3862, BgL_kz00_9576, BgL_arg2915z00_3880); }  else 
{ 
obj_t BgL_auxz00_20148;
BgL_auxz00_20148 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)33465)), BGl_string7712z00zz__datez00, BgL_bufz00_3862, 
(int)(BgL_l6487z00_11556), 
(int)(BgL_kz00_9576)); 
FAILURE(BgL_auxz00_20148,BFALSE,BFALSE);} } } } 
BgL_wz00_3863 = 
(BgL_wz00_3863+((long)1)); 
{ /* Llib/date.scm 757 */
long BgL_arg2919z00_3882;
{ /* Llib/date.scm 757 */
long BgL_arg2925z00_3883;
BgL_arg2925z00_3883 = 
(BgL_tza7za7_3860/((long)3600)); 
BgL_arg2919z00_3882 = 
BGl_blitzd2int2z12zc0zz__datez00(BgL_bufz00_3862, BgL_wz00_3863, 
(int)(BgL_arg2925z00_3883)); } 
BgL_wz00_3863 = 
(BgL_wz00_3863+BgL_arg2919z00_3882); } 
{ /* Llib/date.scm 759 */
long BgL_arg2926z00_3884;
{ /* Llib/date.scm 759 */
long BgL_arg2941z00_3885;
{ /* Llib/date.scm 759 */
long BgL_res5735z00_9603;
{ /* Llib/date.scm 759 */
long BgL_n1z00_9585;long BgL_n2z00_9586;
BgL_n1z00_9585 = BgL_tza7za7_3860; 
BgL_n2z00_9586 = ((long)3600); 
{ /* Llib/date.scm 759 */
bool_t BgL_test8952z00_20159;
{ /* Llib/date.scm 759 */
long BgL_arg4560z00_9588;
BgL_arg4560z00_9588 = 
(((BgL_n1z00_9585) | (BgL_n2z00_9586)) & -2147483648); 
BgL_test8952z00_20159 = 
(BgL_arg4560z00_9588==((long)0)); } 
if(BgL_test8952z00_20159)
{ /* Llib/date.scm 759 */
int32_t BgL_arg4557z00_9589;
{ /* Llib/date.scm 759 */
int32_t BgL_arg4558z00_9590;int32_t BgL_arg4559z00_9591;
{ /* Llib/date.scm 759 */
int32_t BgL_res5731z00_9595;
BgL_res5731z00_9595 = 
(int32_t)(BgL_n1z00_9585); 
BgL_arg4558z00_9590 = BgL_res5731z00_9595; } 
{ /* Llib/date.scm 759 */
int32_t BgL_res5732z00_9597;
BgL_res5732z00_9597 = 
(int32_t)(BgL_n2z00_9586); 
BgL_arg4559z00_9591 = BgL_res5732z00_9597; } 
BgL_arg4557z00_9589 = 
(BgL_arg4558z00_9590%BgL_arg4559z00_9591); } 
{ /* Llib/date.scm 759 */
long BgL_res5734z00_9602;
{ /* Llib/date.scm 759 */
long BgL_arg4651z00_9599;
BgL_arg4651z00_9599 = 
(long)(BgL_arg4557z00_9589); 
{ /* Llib/date.scm 759 */
long BgL_res5733z00_9601;
BgL_res5733z00_9601 = 
(long)(BgL_arg4651z00_9599); 
BgL_res5734z00_9602 = BgL_res5733z00_9601; } } 
BgL_res5735z00_9603 = BgL_res5734z00_9602; } }  else 
{ /* Llib/date.scm 759 */
BgL_res5735z00_9603 = 
(BgL_n1z00_9585%BgL_n2z00_9586); } } } 
BgL_arg2941z00_3885 = BgL_res5735z00_9603; } 
BgL_arg2926z00_3884 = 
BGl_blitzd2int2z12zc0zz__datez00(BgL_bufz00_3862, BgL_wz00_3863, 
(int)(BgL_arg2941z00_3885)); } 
BgL_wz00_3863 = 
(BgL_wz00_3863+BgL_arg2926z00_3884); } 
return 
bgl_string_shrink(BgL_bufz00_3862, BgL_wz00_3863);} } } } } 

}



/* &date->rfc2822-date */
obj_t BGl_z62datezd2ze3rfc2822zd2datez81zz__datez00(obj_t BgL_envz00_11421, obj_t BgL_datez00_11422)
{
{ /* Llib/date.scm 713 */
{ /* Llib/date.scm 716 */
obj_t BgL_auxz00_20172;
if(
BGL_DATEP(BgL_datez00_11422))
{ /* Llib/date.scm 716 */
BgL_auxz00_20172 = BgL_datez00_11422
; }  else 
{ 
obj_t BgL_auxz00_20175;
BgL_auxz00_20175 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)31888)), BGl_string7736z00zz__datez00, BGl_string7675z00zz__datez00, BgL_datez00_11422); 
FAILURE(BgL_auxz00_20175,BFALSE,BFALSE);} 
return 
BGl_datezd2ze3rfc2822zd2dateze3zz__datez00(BgL_auxz00_20172);} } 

}



/* date->iso8601-date */
BGL_EXPORTED_DEF obj_t BGl_datezd2ze3iso8601zd2dateze3zz__datez00(obj_t BgL_datez00_93)
{
{ /* Llib/date.scm 770 */
{ /* Llib/date.scm 771 */
long BgL_tza7za7_3887;
{ /* Llib/date.scm 771 */
long BgL_res5739z00_9614;
BgL_res5739z00_9614 = 
BGL_DATE_TIMEZONE(BgL_datez00_93); 
BgL_tza7za7_3887 = BgL_res5739z00_9614; } 
if(
(BgL_tza7za7_3887==((long)0)))
{ /* Llib/date.scm 774 */
int BgL_arg2943z00_3889;int BgL_arg2944z00_3890;int BgL_arg2945z00_3891;int BgL_arg2946z00_3892;int BgL_arg2947z00_3893;int BgL_arg2948z00_3894;
{ /* Llib/date.scm 774 */
int BgL_res5741z00_9618;
BgL_res5741z00_9618 = 
BGL_DATE_YEAR(BgL_datez00_93); 
BgL_arg2943z00_3889 = BgL_res5741z00_9618; } 
{ /* Llib/date.scm 775 */
int BgL_res5742z00_9620;
BgL_res5742z00_9620 = 
BGL_DATE_MONTH(BgL_datez00_93); 
BgL_arg2944z00_3890 = BgL_res5742z00_9620; } 
{ /* Llib/date.scm 776 */
int BgL_res5743z00_9622;
BgL_res5743z00_9622 = 
BGL_DATE_DAY(BgL_datez00_93); 
BgL_arg2945z00_3891 = BgL_res5743z00_9622; } 
{ /* Llib/date.scm 777 */
int BgL_res5744z00_9624;
BgL_res5744z00_9624 = 
BGL_DATE_HOUR(BgL_datez00_93); 
BgL_arg2946z00_3892 = BgL_res5744z00_9624; } 
{ /* Llib/date.scm 778 */
int BgL_res5745z00_9626;
BgL_res5745z00_9626 = 
BGL_DATE_MINUTE(BgL_datez00_93); 
BgL_arg2947z00_3893 = BgL_res5745z00_9626; } 
{ /* Llib/date.scm 779 */
int BgL_res5746z00_9628;
BgL_res5746z00_9628 = 
BGL_DATE_SECOND(BgL_datez00_93); 
BgL_arg2948z00_3894 = BgL_res5746z00_9628; } 
{ /* Llib/date.scm 773 */
obj_t BgL_list2949z00_3895;
{ /* Llib/date.scm 773 */
obj_t BgL_arg2953z00_3896;
{ /* Llib/date.scm 773 */
obj_t BgL_arg2954z00_3897;
{ /* Llib/date.scm 773 */
obj_t BgL_arg2955z00_3898;
{ /* Llib/date.scm 773 */
obj_t BgL_arg2956z00_3899;
{ /* Llib/date.scm 773 */
obj_t BgL_arg2957z00_3900;
BgL_arg2957z00_3900 = 
MAKE_YOUNG_PAIR(
BINT(BgL_arg2948z00_3894), BNIL); 
BgL_arg2956z00_3899 = 
MAKE_YOUNG_PAIR(
BINT(BgL_arg2947z00_3893), BgL_arg2957z00_3900); } 
BgL_arg2955z00_3898 = 
MAKE_YOUNG_PAIR(
BINT(BgL_arg2946z00_3892), BgL_arg2956z00_3899); } 
BgL_arg2954z00_3897 = 
MAKE_YOUNG_PAIR(
BINT(BgL_arg2945z00_3891), BgL_arg2955z00_3898); } 
BgL_arg2953z00_3896 = 
MAKE_YOUNG_PAIR(
BINT(BgL_arg2944z00_3890), BgL_arg2954z00_3897); } 
BgL_list2949z00_3895 = 
MAKE_YOUNG_PAIR(
BINT(BgL_arg2943z00_3889), BgL_arg2953z00_3896); } 
return 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string7737z00zz__datez00, BgL_list2949z00_3895);} }  else 
{ /* Llib/date.scm 781 */
int BgL_arg2958z00_3901;int BgL_arg2960z00_3902;int BgL_arg2962z00_3903;int BgL_arg2964z00_3904;int BgL_arg2965z00_3905;int BgL_arg2966z00_3906;obj_t BgL_arg2967z00_3907;long BgL_arg2968z00_3908;long BgL_arg2969z00_3909;
{ /* Llib/date.scm 781 */
int BgL_res5747z00_9630;
BgL_res5747z00_9630 = 
BGL_DATE_YEAR(BgL_datez00_93); 
BgL_arg2958z00_3901 = BgL_res5747z00_9630; } 
{ /* Llib/date.scm 782 */
int BgL_res5748z00_9632;
BgL_res5748z00_9632 = 
BGL_DATE_MONTH(BgL_datez00_93); 
BgL_arg2960z00_3902 = BgL_res5748z00_9632; } 
{ /* Llib/date.scm 783 */
int BgL_res5749z00_9634;
BgL_res5749z00_9634 = 
BGL_DATE_DAY(BgL_datez00_93); 
BgL_arg2962z00_3903 = BgL_res5749z00_9634; } 
{ /* Llib/date.scm 784 */
int BgL_res5750z00_9636;
BgL_res5750z00_9636 = 
BGL_DATE_HOUR(BgL_datez00_93); 
BgL_arg2964z00_3904 = BgL_res5750z00_9636; } 
{ /* Llib/date.scm 785 */
int BgL_res5751z00_9638;
BgL_res5751z00_9638 = 
BGL_DATE_MINUTE(BgL_datez00_93); 
BgL_arg2965z00_3905 = BgL_res5751z00_9638; } 
{ /* Llib/date.scm 786 */
int BgL_res5752z00_9640;
BgL_res5752z00_9640 = 
BGL_DATE_SECOND(BgL_datez00_93); 
BgL_arg2966z00_3906 = BgL_res5752z00_9640; } 
if(
(BgL_tza7za7_3887<((long)0)))
{ /* Llib/date.scm 787 */
BgL_arg2967z00_3907 = BGl_string7738z00zz__datez00; }  else 
{ /* Llib/date.scm 787 */
BgL_arg2967z00_3907 = BGl_string7739z00zz__datez00; } 
{ /* Llib/date.scm 788 */
long BgL_nz00_9645;
BgL_nz00_9645 = 
(BgL_tza7za7_3887/((long)3600)); 
if(
(BgL_nz00_9645<((long)0)))
{ /* Llib/date.scm 788 */
BgL_arg2968z00_3908 = 
NEG(BgL_nz00_9645); }  else 
{ /* Llib/date.scm 788 */
BgL_arg2968z00_3908 = BgL_nz00_9645; } } 
{ /* Llib/date.scm 789 */
obj_t BgL_arg2984z00_3921;
BgL_arg2984z00_3921 = 
BGl_remainderz00zz__r4_numbers_6_5_fixnumz00(
BINT(BgL_tza7za7_3887), 
BINT(((long)3600))); 
{ /* Llib/date.scm 789 */
long BgL_nz00_9652;
{ /* Llib/date.scm 789 */
obj_t BgL_tmpz00_20217;
if(
INTEGERP(BgL_arg2984z00_3921))
{ /* Llib/date.scm 789 */
BgL_tmpz00_20217 = BgL_arg2984z00_3921
; }  else 
{ 
obj_t BgL_auxz00_20220;
BgL_auxz00_20220 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)34709)), BGl_string7740z00zz__datez00, BGl_string7524z00zz__datez00, BgL_arg2984z00_3921); 
FAILURE(BgL_auxz00_20220,BFALSE,BFALSE);} 
BgL_nz00_9652 = 
(long)CINT(BgL_tmpz00_20217); } 
if(
(BgL_nz00_9652<((long)0)))
{ /* Llib/date.scm 789 */
BgL_arg2969z00_3909 = 
NEG(BgL_nz00_9652); }  else 
{ /* Llib/date.scm 789 */
BgL_arg2969z00_3909 = BgL_nz00_9652; } } } 
{ /* Llib/date.scm 780 */
obj_t BgL_list2970z00_3910;
{ /* Llib/date.scm 780 */
obj_t BgL_arg2972z00_3911;
{ /* Llib/date.scm 780 */
obj_t BgL_arg2973z00_3912;
{ /* Llib/date.scm 780 */
obj_t BgL_arg2974z00_3913;
{ /* Llib/date.scm 780 */
obj_t BgL_arg2976z00_3914;
{ /* Llib/date.scm 780 */
obj_t BgL_arg2978z00_3915;
{ /* Llib/date.scm 780 */
obj_t BgL_arg2979z00_3916;
{ /* Llib/date.scm 780 */
obj_t BgL_arg2980z00_3917;
{ /* Llib/date.scm 780 */
obj_t BgL_arg2981z00_3918;
BgL_arg2981z00_3918 = 
MAKE_YOUNG_PAIR(
BINT(BgL_arg2969z00_3909), BNIL); 
BgL_arg2980z00_3917 = 
MAKE_YOUNG_PAIR(
BINT(BgL_arg2968z00_3908), BgL_arg2981z00_3918); } 
BgL_arg2979z00_3916 = 
MAKE_YOUNG_PAIR(BgL_arg2967z00_3907, BgL_arg2980z00_3917); } 
BgL_arg2978z00_3915 = 
MAKE_YOUNG_PAIR(
BINT(BgL_arg2966z00_3906), BgL_arg2979z00_3916); } 
BgL_arg2976z00_3914 = 
MAKE_YOUNG_PAIR(
BINT(BgL_arg2965z00_3905), BgL_arg2978z00_3915); } 
BgL_arg2974z00_3913 = 
MAKE_YOUNG_PAIR(
BINT(BgL_arg2964z00_3904), BgL_arg2976z00_3914); } 
BgL_arg2973z00_3912 = 
MAKE_YOUNG_PAIR(
BINT(BgL_arg2962z00_3903), BgL_arg2974z00_3913); } 
BgL_arg2972z00_3911 = 
MAKE_YOUNG_PAIR(
BINT(BgL_arg2960z00_3902), BgL_arg2973z00_3912); } 
BgL_list2970z00_3910 = 
MAKE_YOUNG_PAIR(
BINT(BgL_arg2958z00_3901), BgL_arg2972z00_3911); } 
return 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string7741z00zz__datez00, BgL_list2970z00_3910);} } } } 

}



/* &date->iso8601-date */
obj_t BGl_z62datezd2ze3iso8601zd2datez81zz__datez00(obj_t BgL_envz00_11423, obj_t BgL_datez00_11424)
{
{ /* Llib/date.scm 770 */
{ /* Llib/date.scm 771 */
obj_t BgL_auxz00_20246;
if(
BGL_DATEP(BgL_datez00_11424))
{ /* Llib/date.scm 771 */
BgL_auxz00_20246 = BgL_datez00_11424
; }  else 
{ 
obj_t BgL_auxz00_20249;
BgL_auxz00_20249 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)34070)), BGl_string7742z00zz__datez00, BGl_string7675z00zz__datez00, BgL_datez00_11424); 
FAILURE(BgL_auxz00_20249,BFALSE,BFALSE);} 
return 
BGl_datezd2ze3iso8601zd2dateze3zz__datez00(BgL_auxz00_20246);} } 

}



/* iso8601-date->date */
BGL_EXPORTED_DEF obj_t BGl_iso8601zd2datezd2ze3dateze3zz__datez00(obj_t BgL_stringz00_94)
{
{ /* Llib/date.scm 806 */
{ /* Llib/date.scm 807 */
obj_t BgL_portz00_3922;
{ /* Ieee/port.scm 442 */
long BgL_endz00_3930;
BgL_endz00_3930 = 
STRING_LENGTH(BgL_stringz00_94); 
{ /* Ieee/port.scm 442 */

BgL_portz00_3922 = 
BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(BgL_stringz00_94, 
BINT(((long)0)), 
BINT(BgL_endz00_3930)); } } 
{ /* Llib/date.scm 808 */
obj_t BgL_exitd1065z00_3923;
BgL_exitd1065z00_3923 = 
BGL_EXITD_TOP_AS_OBJ(); 
{ /* Llib/date.scm 810 */
obj_t BgL_zc3z04anonymousza32985ze3z87_11425;
BgL_zc3z04anonymousza32985ze3z87_11425 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza32985ze3ze5zz__datez00, 
(int)(((long)0)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3z04anonymousza32985ze3z87_11425, 
(int)(((long)0)), BgL_portz00_3922); 
BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(BgL_exitd1065z00_3923, BgL_zc3z04anonymousza32985ze3z87_11425); 
{ /* Llib/date.scm 809 */
obj_t BgL_tmp1067z00_3925;
BgL_tmp1067z00_3925 = 
BGl_iso8601zd2parsezd2datez00zz__datez00(BgL_portz00_3922); 
BGl_exitdzd2popzd2protectz12z12zz__bexitz00(BgL_exitd1065z00_3923); 
bgl_close_input_port(BgL_portz00_3922); 
return BgL_tmp1067z00_3925;} } } } } 

}



/* &iso8601-date->date */
obj_t BGl_z62iso8601zd2datezd2ze3datez81zz__datez00(obj_t BgL_envz00_11426, obj_t BgL_stringz00_11427)
{
{ /* Llib/date.scm 806 */
{ /* Llib/date.scm 807 */
obj_t BgL_auxz00_20268;
if(
STRINGP(BgL_stringz00_11427))
{ /* Llib/date.scm 807 */
BgL_auxz00_20268 = BgL_stringz00_11427
; }  else 
{ 
obj_t BgL_auxz00_20271;
BgL_auxz00_20271 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)35559)), BGl_string7743z00zz__datez00, BGl_string7719z00zz__datez00, BgL_stringz00_11427); 
FAILURE(BgL_auxz00_20271,BFALSE,BFALSE);} 
return 
BGl_iso8601zd2datezd2ze3dateze3zz__datez00(BgL_auxz00_20268);} } 

}



/* &<@anonymous:2985> */
obj_t BGl_z62zc3z04anonymousza32985ze3ze5zz__datez00(obj_t BgL_envz00_11428)
{
{ /* Llib/date.scm 808 */
{ /* Llib/date.scm 810 */
obj_t BgL_portz00_11429;
BgL_portz00_11429 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_11428, 
(int)(((long)0)))); 
return 
bgl_close_input_port(BgL_portz00_11429);} } 

}



/* iso8601-parse-date */
BGL_EXPORTED_DEF obj_t BGl_iso8601zd2parsezd2datez00zz__datez00(obj_t BgL_ipz00_95)
{
{ /* Llib/date.scm 815 */
{ 
obj_t BgL_iportz00_6286;long BgL_yyyyz00_6287;long BgL_mmz00_6288;long BgL_ddz00_6289;long BgL_hhz00_6290;long BgL_mmz00_6291;long BgL_ssz00_6292;BGL_LONGLONG_T BgL_sssz00_6293;long BgL_za7hhza7_6294;
{ 
obj_t BgL_iportz00_5929;long BgL_yyyyz00_5930;long BgL_mmz00_5931;long BgL_ddz00_5932;long BgL_hhz00_5933;long BgL_mmz00_5934;long BgL_ssz00_5935;BGL_LONGLONG_T BgL_sssz00_5936;
{ 
obj_t BgL_iportz00_5624;long BgL_yyyyz00_5625;long BgL_mmz00_5626;long BgL_ddz00_5627;long BgL_hhz00_5628;long BgL_mmz00_5629;long BgL_ssz00_5630;
{ 
obj_t BgL_iportz00_5342;long BgL_yyyyz00_5343;long BgL_mmz00_5344;long BgL_ddz00_5345;long BgL_hhz00_5346;long BgL_mmz00_5347;
{ 
obj_t BgL_iportz00_5062;long BgL_yyyyz00_5063;long BgL_mmz00_5064;long BgL_ddz00_5065;long BgL_hhz00_5066;
{ 
obj_t BgL_iportz00_4781;long BgL_yyyyz00_4782;long BgL_mmz00_4783;long BgL_ddz00_4784;
{ 
obj_t BgL_iportz00_4503;long BgL_yyyyz00_4504;long BgL_mmz00_4505;
{ 
obj_t BgL_iportz00_4226;long BgL_yyyyz00_4227;
{ 
obj_t BgL_iportz00_3941;
{ /* Llib/date.scm 960 */
obj_t BgL_aux7472z00_12550;
BgL_iportz00_3941 = BgL_ipz00_95; 
{ 
obj_t BgL_iportz00_3984;long BgL_lastzd2matchzd2_3985;long BgL_forwardz00_3986;long BgL_bufposz00_3987;obj_t BgL_iportz00_4005;long BgL_lastzd2matchzd2_4006;long BgL_forwardz00_4007;long BgL_bufposz00_4008;obj_t BgL_iportz00_4020;long BgL_lastzd2matchzd2_4021;long BgL_forwardz00_4022;long BgL_bufposz00_4023;obj_t BgL_iportz00_4034;long BgL_lastzd2matchzd2_4035;long BgL_forwardz00_4036;long BgL_bufposz00_4037;
{ /* Llib/date.scm 949 */
bool_t BgL_test8961z00_20280;
{ /* Llib/date.scm 949 */
bool_t BgL_res6279z00_10871;
BgL_res6279z00_10871 = 
INPUT_PORT_CLOSEP(BgL_iportz00_3941); 
BgL_test8961z00_20280 = BgL_res6279z00_10871; } 
if(BgL_test8961z00_20280)
{ /* Llib/date.scm 949 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_arg2990z00_3977;
{ /* Llib/date.scm 949 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_new1077z00_3978;
{ /* Llib/date.scm 949 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_new1076z00_3981;
BgL_new1076z00_3981 = 
((BgL_z62iozd2closedzd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2closedzd2errorz62_bgl) ))); 
{ /* Llib/date.scm 949 */
long BgL_arg2994z00_3982;
{ /* Llib/date.scm 949 */
long BgL_res6280z00_10873;
BgL_res6280z00_10873 = 
BGL_CLASS_INDEX(BGl_z62iozd2closedzd2errorz62zz__objectz00); 
BgL_arg2994z00_3982 = BgL_res6280z00_10873; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1076z00_3981), BgL_arg2994z00_3982); } 
BgL_new1077z00_3978 = BgL_new1076z00_3981; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1077z00_3978)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1077z00_3978)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_20290;
{ /* Llib/date.scm 949 */
obj_t BgL_arg2992z00_3979;
{ /* Llib/date.scm 949 */
obj_t BgL_arg2993z00_3980;
{ /* Llib/date.scm 949 */
obj_t BgL_res6281z00_10877;
{ /* Llib/date.scm 949 */
obj_t BgL_classz00_10876;
BgL_classz00_10876 = BGl_z62iozd2closedzd2errorz62zz__objectz00; 
BgL_res6281z00_10877 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_10876); } 
BgL_arg2993z00_3980 = BgL_res6281z00_10877; } 
BgL_arg2992z00_3979 = 
VECTOR_REF(BgL_arg2993z00_3980,((long)2)); } 
{ /* Llib/date.scm 949 */
obj_t BgL_auxz00_20294;
if(
BGl_classzd2fieldzf3z21zz__objectz00(BgL_arg2992z00_3979))
{ /* Llib/date.scm 949 */
BgL_auxz00_20294 = BgL_arg2992z00_3979
; }  else 
{ 
obj_t BgL_auxz00_20297;
BgL_auxz00_20297 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)40108)), BGl_string7755z00zz__datez00, BGl_string7542z00zz__datez00, BgL_arg2992z00_3979); 
FAILURE(BgL_auxz00_20297,BFALSE,BFALSE);} 
BgL_auxz00_20290 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_auxz00_20294); } } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1077z00_3978)))->BgL_stackz00)=((obj_t)BgL_auxz00_20290),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1077z00_3978)))->BgL_procz00)=((obj_t)BGl_string7525z00zz__datez00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1077z00_3978)))->BgL_msgz00)=((obj_t)BGl_string7543z00zz__datez00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1077z00_3978)))->BgL_objz00)=((obj_t)BgL_iportz00_3941),BUNSPEC); 
BgL_arg2990z00_3977 = BgL_new1077z00_3978; } 
BgL_aux7472z00_12550 = 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg2990z00_3977)); }  else 
{ /* Llib/date.scm 949 */
{ /* Llib/date.scm 949 */
long BgL_res6264z00_10843;
BgL_res6264z00_10843 = 
RGC_START_MATCH(BgL_iportz00_3941); BgL_res6264z00_10843; } 
{ /* Llib/date.scm 949 */
long BgL_matchz00_4173;
{ /* Llib/date.scm 949 */
long BgL_arg3167z00_4189;long BgL_arg3168z00_4190;
{ /* Llib/date.scm 949 */
long BgL_res6265z00_10845;
BgL_res6265z00_10845 = 
RGC_BUFFER_FORWARD(BgL_iportz00_3941); 
BgL_arg3167z00_4189 = BgL_res6265z00_10845; } 
{ /* Llib/date.scm 949 */
long BgL_res6266z00_10847;
BgL_res6266z00_10847 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_3941); 
BgL_arg3168z00_4190 = BgL_res6266z00_10847; } 
BgL_iportz00_3984 = BgL_iportz00_3941; 
BgL_lastzd2matchzd2_3985 = ((long)1); 
BgL_forwardz00_3986 = BgL_arg3167z00_4189; 
BgL_bufposz00_3987 = BgL_arg3168z00_4190; 
BgL_zc3z04anonymousza32996ze3z87_3988:
if(
(BgL_forwardz00_3986==BgL_bufposz00_3987))
{ /* Llib/date.scm 949 */
if(
rgc_fill_buffer(BgL_iportz00_3984))
{ /* Llib/date.scm 949 */
long BgL_arg3000z00_3991;long BgL_arg3001z00_3992;
{ /* Llib/date.scm 949 */
long BgL_res6223z00_10744;
BgL_res6223z00_10744 = 
RGC_BUFFER_FORWARD(BgL_iportz00_3984); 
BgL_arg3000z00_3991 = BgL_res6223z00_10744; } 
{ /* Llib/date.scm 949 */
long BgL_res6224z00_10746;
BgL_res6224z00_10746 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_3984); 
BgL_arg3001z00_3992 = BgL_res6224z00_10746; } 
{ 
long BgL_bufposz00_20321;long BgL_forwardz00_20320;
BgL_forwardz00_20320 = BgL_arg3000z00_3991; 
BgL_bufposz00_20321 = BgL_arg3001z00_3992; 
BgL_bufposz00_3987 = BgL_bufposz00_20321; 
BgL_forwardz00_3986 = BgL_forwardz00_20320; 
goto BgL_zc3z04anonymousza32996ze3z87_3988;} }  else 
{ /* Llib/date.scm 949 */
BgL_matchz00_4173 = BgL_lastzd2matchzd2_3985; } }  else 
{ /* Llib/date.scm 949 */
int BgL_curz00_3993;
{ /* Llib/date.scm 949 */
int BgL_res6225z00_10749;
BgL_res6225z00_10749 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_3984, BgL_forwardz00_3986); 
BgL_curz00_3993 = BgL_res6225z00_10749; } 
{ /* Llib/date.scm 949 */

{ /* Llib/date.scm 949 */
bool_t BgL_test8965z00_20323;
if(
(
(long)(BgL_curz00_3993)>=((long)48)))
{ /* Llib/date.scm 949 */
BgL_test8965z00_20323 = 
(
(long)(BgL_curz00_3993)<((long)58))
; }  else 
{ /* Llib/date.scm 949 */
BgL_test8965z00_20323 = ((bool_t)0)
; } 
if(BgL_test8965z00_20323)
{ /* Llib/date.scm 949 */
BgL_iportz00_4005 = BgL_iportz00_3984; 
BgL_lastzd2matchzd2_4006 = BgL_lastzd2matchzd2_3985; 
BgL_forwardz00_4007 = 
(((long)1)+BgL_forwardz00_3986); 
BgL_bufposz00_4008 = BgL_bufposz00_3987; 
BgL_zc3z04anonymousza33007ze3z87_4009:
{ /* Llib/date.scm 949 */
long BgL_newzd2matchzd2_4010;
{ /* Llib/date.scm 949 */
long BgL_res6232z00_10768;
BgL_res6232z00_10768 = 
RGC_STOP_MATCH(BgL_iportz00_4005, BgL_forwardz00_4007); BgL_res6232z00_10768; } 
BgL_newzd2matchzd2_4010 = ((long)1); 
if(
(BgL_forwardz00_4007==BgL_bufposz00_4008))
{ /* Llib/date.scm 949 */
if(
rgc_fill_buffer(BgL_iportz00_4005))
{ /* Llib/date.scm 949 */
long BgL_arg3012z00_4013;long BgL_arg3013z00_4014;
{ /* Llib/date.scm 949 */
long BgL_res6235z00_10775;
BgL_res6235z00_10775 = 
RGC_BUFFER_FORWARD(BgL_iportz00_4005); 
BgL_arg3012z00_4013 = BgL_res6235z00_10775; } 
{ /* Llib/date.scm 949 */
long BgL_res6236z00_10777;
BgL_res6236z00_10777 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_4005); 
BgL_arg3013z00_4014 = BgL_res6236z00_10777; } 
{ 
long BgL_bufposz00_20337;long BgL_forwardz00_20336;
BgL_forwardz00_20336 = BgL_arg3012z00_4013; 
BgL_bufposz00_20337 = BgL_arg3013z00_4014; 
BgL_bufposz00_4008 = BgL_bufposz00_20337; 
BgL_forwardz00_4007 = BgL_forwardz00_20336; 
goto BgL_zc3z04anonymousza33007ze3z87_4009;} }  else 
{ /* Llib/date.scm 949 */
BgL_matchz00_4173 = BgL_newzd2matchzd2_4010; } }  else 
{ /* Llib/date.scm 949 */
int BgL_curz00_4015;
{ /* Llib/date.scm 949 */
int BgL_res6237z00_10780;
BgL_res6237z00_10780 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_4005, BgL_forwardz00_4007); 
BgL_curz00_4015 = BgL_res6237z00_10780; } 
{ /* Llib/date.scm 949 */

{ /* Llib/date.scm 949 */
bool_t BgL_test8969z00_20339;
if(
(
(long)(BgL_curz00_4015)>=((long)48)))
{ /* Llib/date.scm 949 */
BgL_test8969z00_20339 = 
(
(long)(BgL_curz00_4015)<((long)58))
; }  else 
{ /* Llib/date.scm 949 */
BgL_test8969z00_20339 = ((bool_t)0)
; } 
if(BgL_test8969z00_20339)
{ /* Llib/date.scm 949 */
BgL_iportz00_4020 = BgL_iportz00_4005; 
BgL_lastzd2matchzd2_4021 = BgL_newzd2matchzd2_4010; 
BgL_forwardz00_4022 = 
(((long)1)+BgL_forwardz00_4007); 
BgL_bufposz00_4023 = BgL_bufposz00_4008; 
BgL_zc3z04anonymousza33018ze3z87_4024:
if(
(BgL_forwardz00_4022==BgL_bufposz00_4023))
{ /* Llib/date.scm 949 */
if(
rgc_fill_buffer(BgL_iportz00_4020))
{ /* Llib/date.scm 949 */
long BgL_arg3021z00_4027;long BgL_arg3025z00_4028;
{ /* Llib/date.scm 949 */
long BgL_res6243z00_10793;
BgL_res6243z00_10793 = 
RGC_BUFFER_FORWARD(BgL_iportz00_4020); 
BgL_arg3021z00_4027 = BgL_res6243z00_10793; } 
{ /* Llib/date.scm 949 */
long BgL_res6244z00_10795;
BgL_res6244z00_10795 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_4020); 
BgL_arg3025z00_4028 = BgL_res6244z00_10795; } 
{ 
long BgL_bufposz00_20352;long BgL_forwardz00_20351;
BgL_forwardz00_20351 = BgL_arg3021z00_4027; 
BgL_bufposz00_20352 = BgL_arg3025z00_4028; 
BgL_bufposz00_4023 = BgL_bufposz00_20352; 
BgL_forwardz00_4022 = BgL_forwardz00_20351; 
goto BgL_zc3z04anonymousza33018ze3z87_4024;} }  else 
{ /* Llib/date.scm 949 */
BgL_matchz00_4173 = BgL_lastzd2matchzd2_4021; } }  else 
{ /* Llib/date.scm 949 */
int BgL_curz00_4029;
{ /* Llib/date.scm 949 */
int BgL_res6245z00_10798;
BgL_res6245z00_10798 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_4020, BgL_forwardz00_4022); 
BgL_curz00_4029 = BgL_res6245z00_10798; } 
{ /* Llib/date.scm 949 */

{ /* Llib/date.scm 949 */
bool_t BgL_test8973z00_20354;
if(
(
(long)(BgL_curz00_4029)>=((long)48)))
{ /* Llib/date.scm 949 */
BgL_test8973z00_20354 = 
(
(long)(BgL_curz00_4029)<((long)58))
; }  else 
{ /* Llib/date.scm 949 */
BgL_test8973z00_20354 = ((bool_t)0)
; } 
if(BgL_test8973z00_20354)
{ /* Llib/date.scm 949 */
BgL_iportz00_4034 = BgL_iportz00_4020; 
BgL_lastzd2matchzd2_4035 = BgL_lastzd2matchzd2_4021; 
BgL_forwardz00_4036 = 
(((long)1)+BgL_forwardz00_4022); 
BgL_bufposz00_4037 = BgL_bufposz00_4023; 
BgL_zc3z04anonymousza33029ze3z87_4038:
if(
(BgL_forwardz00_4036==BgL_bufposz00_4037))
{ /* Llib/date.scm 949 */
if(
rgc_fill_buffer(BgL_iportz00_4034))
{ /* Llib/date.scm 949 */
long BgL_arg3032z00_4041;long BgL_arg3033z00_4042;
{ /* Llib/date.scm 949 */
long BgL_res6251z00_10811;
BgL_res6251z00_10811 = 
RGC_BUFFER_FORWARD(BgL_iportz00_4034); 
BgL_arg3032z00_4041 = BgL_res6251z00_10811; } 
{ /* Llib/date.scm 949 */
long BgL_res6252z00_10813;
BgL_res6252z00_10813 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_4034); 
BgL_arg3033z00_4042 = BgL_res6252z00_10813; } 
{ 
long BgL_bufposz00_20367;long BgL_forwardz00_20366;
BgL_forwardz00_20366 = BgL_arg3032z00_4041; 
BgL_bufposz00_20367 = BgL_arg3033z00_4042; 
BgL_bufposz00_4037 = BgL_bufposz00_20367; 
BgL_forwardz00_4036 = BgL_forwardz00_20366; 
goto BgL_zc3z04anonymousza33029ze3z87_4038;} }  else 
{ /* Llib/date.scm 949 */
BgL_matchz00_4173 = BgL_lastzd2matchzd2_4035; } }  else 
{ /* Llib/date.scm 949 */
int BgL_curz00_4043;
{ /* Llib/date.scm 949 */
int BgL_res6253z00_10816;
BgL_res6253z00_10816 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_4034, BgL_forwardz00_4036); 
BgL_curz00_4043 = BgL_res6253z00_10816; } 
{ /* Llib/date.scm 949 */

{ /* Llib/date.scm 949 */
bool_t BgL_test8977z00_20369;
if(
(
(long)(BgL_curz00_4043)>=((long)48)))
{ /* Llib/date.scm 949 */
BgL_test8977z00_20369 = 
(
(long)(BgL_curz00_4043)<((long)58))
; }  else 
{ /* Llib/date.scm 949 */
BgL_test8977z00_20369 = ((bool_t)0)
; } 
if(BgL_test8977z00_20369)
{ /* Llib/date.scm 949 */
long BgL_arg3036z00_4046;
BgL_arg3036z00_4046 = 
(((long)1)+BgL_forwardz00_4036); 
{ /* Llib/date.scm 949 */
long BgL_newzd2matchzd2_10823;
{ /* Llib/date.scm 949 */
long BgL_res6257z00_10826;
BgL_res6257z00_10826 = 
RGC_STOP_MATCH(BgL_iportz00_4034, BgL_arg3036z00_4046); BgL_res6257z00_10826; } 
BgL_newzd2matchzd2_10823 = ((long)0); 
BgL_matchz00_4173 = BgL_newzd2matchzd2_10823; } }  else 
{ /* Llib/date.scm 949 */
BgL_matchz00_4173 = BgL_lastzd2matchzd2_4035; } } } } }  else 
{ /* Llib/date.scm 949 */
BgL_matchz00_4173 = BgL_lastzd2matchzd2_4021; } } } } }  else 
{ /* Llib/date.scm 949 */
BgL_matchz00_4173 = BgL_newzd2matchzd2_4010; } } } } } }  else 
{ /* Llib/date.scm 949 */
long BgL_arg3005z00_3997;
BgL_arg3005z00_3997 = 
(((long)1)+BgL_forwardz00_3986); 
{ /* Llib/date.scm 949 */
long BgL_newzd2matchzd2_10758;
{ /* Llib/date.scm 949 */
long BgL_res6230z00_10761;
BgL_res6230z00_10761 = 
RGC_STOP_MATCH(BgL_iportz00_3984, BgL_arg3005z00_3997); BgL_res6230z00_10761; } 
BgL_newzd2matchzd2_10758 = ((long)1); 
BgL_matchz00_4173 = BgL_newzd2matchzd2_10758; } } } } } } 
RGC_SET_FILEPOS(BgL_iportz00_3941); 
switch( BgL_matchz00_4173) { case ((long)1) : 

{ /* Llib/date.scm 957 */
obj_t BgL_auxz00_20383;
{ /* Llib/date.scm 949 */
bool_t BgL_test8979z00_20384;
{ /* Llib/date.scm 949 */
long BgL_arg3145z00_4163;
{ /* Llib/date.scm 949 */
long BgL_res6261z00_10837;
BgL_res6261z00_10837 = 
RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_3941); 
BgL_arg3145z00_4163 = BgL_res6261z00_10837; } 
BgL_test8979z00_20384 = 
(BgL_arg3145z00_4163==((long)0)); } 
if(BgL_test8979z00_20384)
{ /* Llib/date.scm 949 */
BgL_auxz00_20383 = BEOF
; }  else 
{ /* Llib/date.scm 949 */
unsigned char BgL_res6263z00_10841;
BgL_res6263z00_10841 = 
RGC_BUFFER_CHARACTER(BgL_iportz00_3941); 
BgL_auxz00_20383 = 
BCHAR(BgL_res6263z00_10841); } } 
BgL_aux7472z00_12550 = 
BGl_parsezd2errorzd2zz__datez00(BGl_string7744z00zz__datez00, BGl_string7544z00zz__datez00, BgL_auxz00_20383, BgL_iportz00_3941); } break;case ((long)0) : 

{ /* Llib/date.scm 951 */
long BgL_b1z00_4179;long BgL_b2z00_4180;long BgL_b3z00_4181;long BgL_b4z00_4182;
{ /* Llib/date.scm 951 */
int BgL_arg3162z00_4185;
{ /* Llib/date.scm 949 */
int BgL_res6268z00_10851;
{ /* Llib/date.scm 949 */
int BgL_tmpz00_20390;
BgL_tmpz00_20390 = 
(int)(((long)0)); 
BgL_res6268z00_10851 = 
RGC_BUFFER_BYTE_REF(BgL_iportz00_3941, BgL_tmpz00_20390); } 
BgL_arg3162z00_4185 = BgL_res6268z00_10851; } 
BgL_b1z00_4179 = 
(
(long)(BgL_arg3162z00_4185)-((long)48)); } 
{ /* Llib/date.scm 952 */
int BgL_arg3163z00_4186;
{ /* Llib/date.scm 949 */
int BgL_res6270z00_10855;
{ /* Llib/date.scm 949 */
int BgL_tmpz00_20395;
BgL_tmpz00_20395 = 
(int)(((long)1)); 
BgL_res6270z00_10855 = 
RGC_BUFFER_BYTE_REF(BgL_iportz00_3941, BgL_tmpz00_20395); } 
BgL_arg3163z00_4186 = BgL_res6270z00_10855; } 
BgL_b2z00_4180 = 
(
(long)(BgL_arg3163z00_4186)-((long)48)); } 
{ /* Llib/date.scm 953 */
int BgL_arg3164z00_4187;
{ /* Llib/date.scm 949 */
int BgL_res6272z00_10859;
{ /* Llib/date.scm 949 */
int BgL_tmpz00_20400;
BgL_tmpz00_20400 = 
(int)(((long)3)); 
BgL_res6272z00_10859 = 
RGC_BUFFER_BYTE_REF(BgL_iportz00_3941, BgL_tmpz00_20400); } 
BgL_arg3164z00_4187 = BgL_res6272z00_10859; } 
BgL_b3z00_4181 = 
(
(long)(BgL_arg3164z00_4187)-((long)48)); } 
{ /* Llib/date.scm 954 */
int BgL_arg3166z00_4188;
{ /* Llib/date.scm 949 */
int BgL_res6274z00_10863;
{ /* Llib/date.scm 949 */
int BgL_tmpz00_20405;
BgL_tmpz00_20405 = 
(int)(((long)4)); 
BgL_res6274z00_10863 = 
RGC_BUFFER_BYTE_REF(BgL_iportz00_3941, BgL_tmpz00_20405); } 
BgL_arg3166z00_4188 = BgL_res6274z00_10863; } 
BgL_b4z00_4182 = 
(
(long)(BgL_arg3166z00_4188)-((long)48)); } 
BgL_iportz00_4226 = BgL_iportz00_3941; 
BgL_yyyyz00_4227 = 
rgc_buffer_fixnum(BgL_iportz00_3941); 
{ 
obj_t BgL_iportz00_4269;long BgL_lastzd2matchzd2_4270;long BgL_forwardz00_4271;long BgL_bufposz00_4272;obj_t BgL_iportz00_4288;long BgL_lastzd2matchzd2_4289;long BgL_forwardz00_4290;long BgL_bufposz00_4291;obj_t BgL_iportz00_4303;long BgL_lastzd2matchzd2_4304;long BgL_forwardz00_4305;long BgL_bufposz00_4306;
{ /* Llib/date.scm 936 */
bool_t BgL_test8980z00_20410;
{ /* Llib/date.scm 936 */
bool_t BgL_res6217z00_10729;
BgL_res6217z00_10729 = 
INPUT_PORT_CLOSEP(BgL_iportz00_4226); 
BgL_test8980z00_20410 = BgL_res6217z00_10729; } 
if(BgL_test8980z00_20410)
{ /* Llib/date.scm 936 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_arg3172z00_4262;
{ /* Llib/date.scm 936 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_new1077z00_4263;
{ /* Llib/date.scm 936 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_new1076z00_4266;
BgL_new1076z00_4266 = 
((BgL_z62iozd2closedzd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2closedzd2errorz62_bgl) ))); 
{ /* Llib/date.scm 936 */
long BgL_arg3177z00_4267;
{ /* Llib/date.scm 936 */
long BgL_res6218z00_10731;
BgL_res6218z00_10731 = 
BGL_CLASS_INDEX(BGl_z62iozd2closedzd2errorz62zz__objectz00); 
BgL_arg3177z00_4267 = BgL_res6218z00_10731; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1076z00_4266), BgL_arg3177z00_4267); } 
BgL_new1077z00_4263 = BgL_new1076z00_4266; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1077z00_4263)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1077z00_4263)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_20420;
{ /* Llib/date.scm 936 */
obj_t BgL_arg3174z00_4264;
{ /* Llib/date.scm 936 */
obj_t BgL_arg3175z00_4265;
{ /* Llib/date.scm 936 */
obj_t BgL_res6219z00_10735;
{ /* Llib/date.scm 936 */
obj_t BgL_classz00_10734;
BgL_classz00_10734 = BGl_z62iozd2closedzd2errorz62zz__objectz00; 
BgL_res6219z00_10735 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_10734); } 
BgL_arg3175z00_4265 = BgL_res6219z00_10735; } 
BgL_arg3174z00_4264 = 
VECTOR_REF(BgL_arg3175z00_4265,((long)2)); } 
{ /* Llib/date.scm 936 */
obj_t BgL_auxz00_20424;
if(
BGl_classzd2fieldzf3z21zz__objectz00(BgL_arg3174z00_4264))
{ /* Llib/date.scm 936 */
BgL_auxz00_20424 = BgL_arg3174z00_4264
; }  else 
{ 
obj_t BgL_auxz00_20427;
BgL_auxz00_20427 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)39736)), BGl_string7754z00zz__datez00, BGl_string7542z00zz__datez00, BgL_arg3174z00_4264); 
FAILURE(BgL_auxz00_20427,BFALSE,BFALSE);} 
BgL_auxz00_20420 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_auxz00_20424); } } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1077z00_4263)))->BgL_stackz00)=((obj_t)BgL_auxz00_20420),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1077z00_4263)))->BgL_procz00)=((obj_t)BGl_string7525z00zz__datez00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1077z00_4263)))->BgL_msgz00)=((obj_t)BGl_string7543z00zz__datez00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1077z00_4263)))->BgL_objz00)=((obj_t)BgL_iportz00_4226),BUNSPEC); 
BgL_arg3172z00_4262 = BgL_new1077z00_4263; } 
BgL_aux7472z00_12550 = 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg3172z00_4262)); }  else 
{ /* Llib/date.scm 936 */
{ /* Llib/date.scm 936 */
long BgL_res6204z00_10704;
BgL_res6204z00_10704 = 
RGC_START_MATCH(BgL_iportz00_4226); BgL_res6204z00_10704; } 
{ /* Llib/date.scm 936 */
long BgL_matchz00_4442;
{ /* Llib/date.scm 936 */
long BgL_arg3345z00_4467;long BgL_arg3346z00_4468;
{ /* Llib/date.scm 936 */
long BgL_res6205z00_10706;
BgL_res6205z00_10706 = 
RGC_BUFFER_FORWARD(BgL_iportz00_4226); 
BgL_arg3345z00_4467 = BgL_res6205z00_10706; } 
{ /* Llib/date.scm 936 */
long BgL_res6206z00_10708;
BgL_res6206z00_10708 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_4226); 
BgL_arg3346z00_4468 = BgL_res6206z00_10708; } 
BgL_iportz00_4269 = BgL_iportz00_4226; 
BgL_lastzd2matchzd2_4270 = ((long)1); 
BgL_forwardz00_4271 = BgL_arg3345z00_4467; 
BgL_bufposz00_4272 = BgL_arg3346z00_4468; 
BgL_zc3z04anonymousza33179ze3z87_4273:
if(
(BgL_forwardz00_4271==BgL_bufposz00_4272))
{ /* Llib/date.scm 936 */
if(
rgc_fill_buffer(BgL_iportz00_4269))
{ /* Llib/date.scm 936 */
long BgL_arg3182z00_4276;long BgL_arg3184z00_4277;
{ /* Llib/date.scm 936 */
long BgL_res6173z00_10627;
BgL_res6173z00_10627 = 
RGC_BUFFER_FORWARD(BgL_iportz00_4269); 
BgL_arg3182z00_4276 = BgL_res6173z00_10627; } 
{ /* Llib/date.scm 936 */
long BgL_res6174z00_10629;
BgL_res6174z00_10629 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_4269); 
BgL_arg3184z00_4277 = BgL_res6174z00_10629; } 
{ 
long BgL_bufposz00_20451;long BgL_forwardz00_20450;
BgL_forwardz00_20450 = BgL_arg3182z00_4276; 
BgL_bufposz00_20451 = BgL_arg3184z00_4277; 
BgL_bufposz00_4272 = BgL_bufposz00_20451; 
BgL_forwardz00_4271 = BgL_forwardz00_20450; 
goto BgL_zc3z04anonymousza33179ze3z87_4273;} }  else 
{ /* Llib/date.scm 936 */
BgL_matchz00_4442 = BgL_lastzd2matchzd2_4270; } }  else 
{ /* Llib/date.scm 936 */
int BgL_curz00_4278;
{ /* Llib/date.scm 936 */
int BgL_res6175z00_10632;
BgL_res6175z00_10632 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_4269, BgL_forwardz00_4271); 
BgL_curz00_4278 = BgL_res6175z00_10632; } 
{ /* Llib/date.scm 936 */

if(
(
(long)(BgL_curz00_4278)==((long)45)))
{ /* Llib/date.scm 936 */
BgL_iportz00_4288 = BgL_iportz00_4269; 
BgL_lastzd2matchzd2_4289 = BgL_lastzd2matchzd2_4270; 
BgL_forwardz00_4290 = 
(((long)1)+BgL_forwardz00_4271); 
BgL_bufposz00_4291 = BgL_bufposz00_4272; 
BgL_zc3z04anonymousza33190ze3z87_4292:
{ /* Llib/date.scm 936 */
long BgL_newzd2matchzd2_4293;
{ /* Llib/date.scm 936 */
long BgL_res6181z00_10649;
BgL_res6181z00_10649 = 
RGC_STOP_MATCH(BgL_iportz00_4288, BgL_forwardz00_4290); BgL_res6181z00_10649; } 
BgL_newzd2matchzd2_4293 = ((long)1); 
if(
(BgL_forwardz00_4290==BgL_bufposz00_4291))
{ /* Llib/date.scm 936 */
if(
rgc_fill_buffer(BgL_iportz00_4288))
{ /* Llib/date.scm 936 */
long BgL_arg3193z00_4296;long BgL_arg3194z00_4297;
{ /* Llib/date.scm 936 */
long BgL_res6184z00_10656;
BgL_res6184z00_10656 = 
RGC_BUFFER_FORWARD(BgL_iportz00_4288); 
BgL_arg3193z00_4296 = BgL_res6184z00_10656; } 
{ /* Llib/date.scm 936 */
long BgL_res6185z00_10658;
BgL_res6185z00_10658 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_4288); 
BgL_arg3194z00_4297 = BgL_res6185z00_10658; } 
{ 
long BgL_bufposz00_20464;long BgL_forwardz00_20463;
BgL_forwardz00_20463 = BgL_arg3193z00_4296; 
BgL_bufposz00_20464 = BgL_arg3194z00_4297; 
BgL_bufposz00_4291 = BgL_bufposz00_20464; 
BgL_forwardz00_4290 = BgL_forwardz00_20463; 
goto BgL_zc3z04anonymousza33190ze3z87_4292;} }  else 
{ /* Llib/date.scm 936 */
BgL_matchz00_4442 = BgL_newzd2matchzd2_4293; } }  else 
{ /* Llib/date.scm 936 */
int BgL_curz00_4298;
{ /* Llib/date.scm 936 */
int BgL_res6186z00_10661;
BgL_res6186z00_10661 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_4288, BgL_forwardz00_4290); 
BgL_curz00_4298 = BgL_res6186z00_10661; } 
{ /* Llib/date.scm 936 */

{ /* Llib/date.scm 936 */
bool_t BgL_test8987z00_20466;
if(
(
(long)(BgL_curz00_4298)>=((long)48)))
{ /* Llib/date.scm 936 */
BgL_test8987z00_20466 = 
(
(long)(BgL_curz00_4298)<((long)58))
; }  else 
{ /* Llib/date.scm 936 */
BgL_test8987z00_20466 = ((bool_t)0)
; } 
if(BgL_test8987z00_20466)
{ /* Llib/date.scm 936 */
BgL_iportz00_4303 = BgL_iportz00_4288; 
BgL_lastzd2matchzd2_4304 = BgL_newzd2matchzd2_4293; 
BgL_forwardz00_4305 = 
(((long)1)+BgL_forwardz00_4290); 
BgL_bufposz00_4306 = BgL_bufposz00_4291; 
BgL_zc3z04anonymousza33198ze3z87_4307:
if(
(BgL_forwardz00_4305==BgL_bufposz00_4306))
{ /* Llib/date.scm 936 */
if(
rgc_fill_buffer(BgL_iportz00_4303))
{ /* Llib/date.scm 936 */
long BgL_arg3201z00_4310;long BgL_arg3204z00_4311;
{ /* Llib/date.scm 936 */
long BgL_res6192z00_10674;
BgL_res6192z00_10674 = 
RGC_BUFFER_FORWARD(BgL_iportz00_4303); 
BgL_arg3201z00_4310 = BgL_res6192z00_10674; } 
{ /* Llib/date.scm 936 */
long BgL_res6193z00_10676;
BgL_res6193z00_10676 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_4303); 
BgL_arg3204z00_4311 = BgL_res6193z00_10676; } 
{ 
long BgL_bufposz00_20479;long BgL_forwardz00_20478;
BgL_forwardz00_20478 = BgL_arg3201z00_4310; 
BgL_bufposz00_20479 = BgL_arg3204z00_4311; 
BgL_bufposz00_4306 = BgL_bufposz00_20479; 
BgL_forwardz00_4305 = BgL_forwardz00_20478; 
goto BgL_zc3z04anonymousza33198ze3z87_4307;} }  else 
{ /* Llib/date.scm 936 */
BgL_matchz00_4442 = BgL_lastzd2matchzd2_4304; } }  else 
{ /* Llib/date.scm 936 */
int BgL_curz00_4312;
{ /* Llib/date.scm 936 */
int BgL_res6194z00_10679;
BgL_res6194z00_10679 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_4303, BgL_forwardz00_4305); 
BgL_curz00_4312 = BgL_res6194z00_10679; } 
{ /* Llib/date.scm 936 */

{ /* Llib/date.scm 936 */
bool_t BgL_test8991z00_20481;
if(
(
(long)(BgL_curz00_4312)>=((long)48)))
{ /* Llib/date.scm 936 */
BgL_test8991z00_20481 = 
(
(long)(BgL_curz00_4312)<((long)58))
; }  else 
{ /* Llib/date.scm 936 */
BgL_test8991z00_20481 = ((bool_t)0)
; } 
if(BgL_test8991z00_20481)
{ /* Llib/date.scm 936 */
long BgL_arg3207z00_4315;
BgL_arg3207z00_4315 = 
(((long)1)+BgL_forwardz00_4305); 
{ /* Llib/date.scm 936 */
long BgL_newzd2matchzd2_10686;
{ /* Llib/date.scm 936 */
long BgL_res6198z00_10689;
BgL_res6198z00_10689 = 
RGC_STOP_MATCH(BgL_iportz00_4303, BgL_arg3207z00_4315); BgL_res6198z00_10689; } 
BgL_newzd2matchzd2_10686 = ((long)0); 
BgL_matchz00_4442 = BgL_newzd2matchzd2_10686; } }  else 
{ /* Llib/date.scm 936 */
BgL_matchz00_4442 = BgL_lastzd2matchzd2_4304; } } } } }  else 
{ /* Llib/date.scm 936 */
BgL_matchz00_4442 = BgL_newzd2matchzd2_4293; } } } } } }  else 
{ /* Llib/date.scm 936 */
long BgL_arg3188z00_4281;
BgL_arg3188z00_4281 = 
(((long)1)+BgL_forwardz00_4271); 
{ /* Llib/date.scm 936 */
long BgL_newzd2matchzd2_10639;
{ /* Llib/date.scm 936 */
long BgL_res6179z00_10642;
BgL_res6179z00_10642 = 
RGC_STOP_MATCH(BgL_iportz00_4269, BgL_arg3188z00_4281); BgL_res6179z00_10642; } 
BgL_newzd2matchzd2_10639 = ((long)1); 
BgL_matchz00_4442 = BgL_newzd2matchzd2_10639; } } } } } 
RGC_SET_FILEPOS(BgL_iportz00_4226); 
switch( BgL_matchz00_4442) { case ((long)1) : 

{ /* Llib/date.scm 943 */
bool_t BgL_test8993z00_20494;
{ /* Llib/date.scm 943 */
obj_t BgL_arg3339z00_4459;
BgL_arg3339z00_4459 = 
BGl_thezd2failureze77z35zz__datez00(BgL_iportz00_4226); 
{ /* Llib/date.scm 943 */
bool_t BgL_res6207z00_10710;
BgL_res6207z00_10710 = 
EOF_OBJECTP(BgL_arg3339z00_4459); 
BgL_test8993z00_20494 = BgL_res6207z00_10710; } } 
if(BgL_test8993z00_20494)
{ /* Llib/date.scm 943 */
if(
BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BFALSE))
{ /* Llib/date.scm 233 */
long BgL_tmpz00_20499;
{ /* Llib/date.scm 944 */
obj_t BgL_aux7467z00_12545;
BgL_aux7467z00_12545 = BFALSE; 
{ 
obj_t BgL_auxz00_20506;
BgL_auxz00_20506 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)39954)), BGl_string7520z00zz__datez00, BGl_string7751z00zz__datez00, BgL_aux7467z00_12545); 
FAILURE(BgL_auxz00_20506,BFALSE,BFALSE);} } 
BgL_tmpz00_20499 = ((long)0); 
BgL_aux7472z00_12550 = 
bgl_make_date(((BGL_LONGLONG_T)0), 
(int)(((long)0)), 
(int)(((long)0)), 
(int)(((long)1)), 
(int)(((long)1)), 
(int)(((long)1)), 
(int)(BgL_yyyyz00_4227), BgL_tmpz00_20499, ((bool_t)1), 
(int)(((long)-1))); }  else 
{ /* Llib/date.scm 232 */
BgL_aux7472z00_12550 = 
bgl_make_date(((BGL_LONGLONG_T)0), 
(int)(((long)0)), 
(int)(((long)0)), 
(int)(((long)1)), 
(int)(((long)1)), 
(int)(((long)1)), 
(int)(BgL_yyyyz00_4227), ((long)0), ((bool_t)0), 
(int)(((long)-1))); } }  else 
{ /* Llib/date.scm 943 */
BgL_aux7472z00_12550 = 
BGl_parsezd2errorzd2zz__datez00(BGl_string7744z00zz__datez00, BGl_string7544z00zz__datez00, 
BGl_thezd2failureze77z35zz__datez00(BgL_iportz00_4226), BgL_iportz00_4226); } } break;case ((long)0) : 

{ /* Llib/date.scm 938 */
long BgL_b1z00_4460;long BgL_b2z00_4461;
{ /* Llib/date.scm 938 */
int BgL_arg3343z00_4465;
{ /* Llib/date.scm 936 */
int BgL_res6209z00_10714;
{ /* Llib/date.scm 936 */
int BgL_tmpz00_20522;
BgL_tmpz00_20522 = 
(int)(((long)1)); 
BgL_res6209z00_10714 = 
RGC_BUFFER_BYTE_REF(BgL_iportz00_4226, BgL_tmpz00_20522); } 
BgL_arg3343z00_4465 = BgL_res6209z00_10714; } 
BgL_b1z00_4460 = 
(
(long)(BgL_arg3343z00_4465)-((long)48)); } 
{ /* Llib/date.scm 939 */
int BgL_arg3344z00_4466;
{ /* Llib/date.scm 936 */
int BgL_res6211z00_10718;
{ /* Llib/date.scm 936 */
int BgL_tmpz00_20527;
BgL_tmpz00_20527 = 
(int)(((long)2)); 
BgL_res6211z00_10718 = 
RGC_BUFFER_BYTE_REF(BgL_iportz00_4226, BgL_tmpz00_20527); } 
BgL_arg3344z00_4466 = BgL_res6211z00_10718; } 
BgL_b2z00_4461 = 
(
(long)(BgL_arg3344z00_4466)-((long)48)); } 
BgL_iportz00_4503 = BgL_iportz00_4226; 
BgL_yyyyz00_4504 = BgL_yyyyz00_4227; 
BgL_mmz00_4505 = 
(
(BgL_b1z00_4460*((long)10))+BgL_b2z00_4461); 
{ 
obj_t BgL_iportz00_4547;long BgL_lastzd2matchzd2_4548;long BgL_forwardz00_4549;long BgL_bufposz00_4550;obj_t BgL_iportz00_4566;long BgL_lastzd2matchzd2_4567;long BgL_forwardz00_4568;long BgL_bufposz00_4569;obj_t BgL_iportz00_4581;long BgL_lastzd2matchzd2_4582;long BgL_forwardz00_4583;long BgL_bufposz00_4584;
{ /* Llib/date.scm 922 */
bool_t BgL_test8995z00_20532;
{ /* Llib/date.scm 922 */
bool_t BgL_res6167z00_10612;
BgL_res6167z00_10612 = 
INPUT_PORT_CLOSEP(BgL_iportz00_4503); 
BgL_test8995z00_20532 = BgL_res6167z00_10612; } 
if(BgL_test8995z00_20532)
{ /* Llib/date.scm 922 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_arg3353z00_4540;
{ /* Llib/date.scm 922 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_new1077z00_4541;
{ /* Llib/date.scm 922 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_new1076z00_4544;
BgL_new1076z00_4544 = 
((BgL_z62iozd2closedzd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2closedzd2errorz62_bgl) ))); 
{ /* Llib/date.scm 922 */
long BgL_arg3357z00_4545;
{ /* Llib/date.scm 922 */
long BgL_res6168z00_10614;
BgL_res6168z00_10614 = 
BGL_CLASS_INDEX(BGl_z62iozd2closedzd2errorz62zz__objectz00); 
BgL_arg3357z00_4545 = BgL_res6168z00_10614; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1076z00_4544), BgL_arg3357z00_4545); } 
BgL_new1077z00_4541 = BgL_new1076z00_4544; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1077z00_4541)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1077z00_4541)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_20542;
{ /* Llib/date.scm 922 */
obj_t BgL_arg3354z00_4542;
{ /* Llib/date.scm 922 */
obj_t BgL_arg3356z00_4543;
{ /* Llib/date.scm 922 */
obj_t BgL_res6169z00_10618;
{ /* Llib/date.scm 922 */
obj_t BgL_classz00_10617;
BgL_classz00_10617 = BGl_z62iozd2closedzd2errorz62zz__objectz00; 
BgL_res6169z00_10618 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_10617); } 
BgL_arg3356z00_4543 = BgL_res6169z00_10618; } 
BgL_arg3354z00_4542 = 
VECTOR_REF(BgL_arg3356z00_4543,((long)2)); } 
{ /* Llib/date.scm 922 */
obj_t BgL_auxz00_20546;
if(
BGl_classzd2fieldzf3z21zz__objectz00(BgL_arg3354z00_4542))
{ /* Llib/date.scm 922 */
BgL_auxz00_20546 = BgL_arg3354z00_4542
; }  else 
{ 
obj_t BgL_auxz00_20549;
BgL_auxz00_20549 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)39339)), BGl_string7753z00zz__datez00, BGl_string7542z00zz__datez00, BgL_arg3354z00_4542); 
FAILURE(BgL_auxz00_20549,BFALSE,BFALSE);} 
BgL_auxz00_20542 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_auxz00_20546); } } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1077z00_4541)))->BgL_stackz00)=((obj_t)BgL_auxz00_20542),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1077z00_4541)))->BgL_procz00)=((obj_t)BGl_string7525z00zz__datez00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1077z00_4541)))->BgL_msgz00)=((obj_t)BGl_string7543z00zz__datez00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1077z00_4541)))->BgL_objz00)=((obj_t)BgL_iportz00_4503),BUNSPEC); 
BgL_arg3353z00_4540 = BgL_new1077z00_4541; } 
BgL_aux7472z00_12550 = 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg3353z00_4540)); }  else 
{ /* Llib/date.scm 922 */
{ /* Llib/date.scm 922 */
long BgL_res6154z00_10587;
BgL_res6154z00_10587 = 
RGC_START_MATCH(BgL_iportz00_4503); BgL_res6154z00_10587; } 
{ /* Llib/date.scm 922 */
long BgL_matchz00_4720;
{ /* Llib/date.scm 922 */
long BgL_arg3502z00_4745;long BgL_arg3503z00_4746;
{ /* Llib/date.scm 922 */
long BgL_res6155z00_10589;
BgL_res6155z00_10589 = 
RGC_BUFFER_FORWARD(BgL_iportz00_4503); 
BgL_arg3502z00_4745 = BgL_res6155z00_10589; } 
{ /* Llib/date.scm 922 */
long BgL_res6156z00_10591;
BgL_res6156z00_10591 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_4503); 
BgL_arg3503z00_4746 = BgL_res6156z00_10591; } 
BgL_iportz00_4547 = BgL_iportz00_4503; 
BgL_lastzd2matchzd2_4548 = ((long)1); 
BgL_forwardz00_4549 = BgL_arg3502z00_4745; 
BgL_bufposz00_4550 = BgL_arg3503z00_4746; 
BgL_zc3z04anonymousza33359ze3z87_4551:
if(
(BgL_forwardz00_4549==BgL_bufposz00_4550))
{ /* Llib/date.scm 922 */
if(
rgc_fill_buffer(BgL_iportz00_4547))
{ /* Llib/date.scm 922 */
long BgL_arg3362z00_4554;long BgL_arg3363z00_4555;
{ /* Llib/date.scm 922 */
long BgL_res6123z00_10510;
BgL_res6123z00_10510 = 
RGC_BUFFER_FORWARD(BgL_iportz00_4547); 
BgL_arg3362z00_4554 = BgL_res6123z00_10510; } 
{ /* Llib/date.scm 922 */
long BgL_res6124z00_10512;
BgL_res6124z00_10512 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_4547); 
BgL_arg3363z00_4555 = BgL_res6124z00_10512; } 
{ 
long BgL_bufposz00_20573;long BgL_forwardz00_20572;
BgL_forwardz00_20572 = BgL_arg3362z00_4554; 
BgL_bufposz00_20573 = BgL_arg3363z00_4555; 
BgL_bufposz00_4550 = BgL_bufposz00_20573; 
BgL_forwardz00_4549 = BgL_forwardz00_20572; 
goto BgL_zc3z04anonymousza33359ze3z87_4551;} }  else 
{ /* Llib/date.scm 922 */
BgL_matchz00_4720 = BgL_lastzd2matchzd2_4548; } }  else 
{ /* Llib/date.scm 922 */
int BgL_curz00_4556;
{ /* Llib/date.scm 922 */
int BgL_res6125z00_10515;
BgL_res6125z00_10515 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_4547, BgL_forwardz00_4549); 
BgL_curz00_4556 = BgL_res6125z00_10515; } 
{ /* Llib/date.scm 922 */

if(
(
(long)(BgL_curz00_4556)==((long)45)))
{ /* Llib/date.scm 922 */
BgL_iportz00_4566 = BgL_iportz00_4547; 
BgL_lastzd2matchzd2_4567 = BgL_lastzd2matchzd2_4548; 
BgL_forwardz00_4568 = 
(((long)1)+BgL_forwardz00_4549); 
BgL_bufposz00_4569 = BgL_bufposz00_4550; 
BgL_zc3z04anonymousza33368ze3z87_4570:
{ /* Llib/date.scm 922 */
long BgL_newzd2matchzd2_4571;
{ /* Llib/date.scm 922 */
long BgL_res6131z00_10532;
BgL_res6131z00_10532 = 
RGC_STOP_MATCH(BgL_iportz00_4566, BgL_forwardz00_4568); BgL_res6131z00_10532; } 
BgL_newzd2matchzd2_4571 = ((long)1); 
if(
(BgL_forwardz00_4568==BgL_bufposz00_4569))
{ /* Llib/date.scm 922 */
if(
rgc_fill_buffer(BgL_iportz00_4566))
{ /* Llib/date.scm 922 */
long BgL_arg3378z00_4574;long BgL_arg3379z00_4575;
{ /* Llib/date.scm 922 */
long BgL_res6134z00_10539;
BgL_res6134z00_10539 = 
RGC_BUFFER_FORWARD(BgL_iportz00_4566); 
BgL_arg3378z00_4574 = BgL_res6134z00_10539; } 
{ /* Llib/date.scm 922 */
long BgL_res6135z00_10541;
BgL_res6135z00_10541 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_4566); 
BgL_arg3379z00_4575 = BgL_res6135z00_10541; } 
{ 
long BgL_bufposz00_20586;long BgL_forwardz00_20585;
BgL_forwardz00_20585 = BgL_arg3378z00_4574; 
BgL_bufposz00_20586 = BgL_arg3379z00_4575; 
BgL_bufposz00_4569 = BgL_bufposz00_20586; 
BgL_forwardz00_4568 = BgL_forwardz00_20585; 
goto BgL_zc3z04anonymousza33368ze3z87_4570;} }  else 
{ /* Llib/date.scm 922 */
BgL_matchz00_4720 = BgL_newzd2matchzd2_4571; } }  else 
{ /* Llib/date.scm 922 */
int BgL_curz00_4576;
{ /* Llib/date.scm 922 */
int BgL_res6136z00_10544;
BgL_res6136z00_10544 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_4566, BgL_forwardz00_4568); 
BgL_curz00_4576 = BgL_res6136z00_10544; } 
{ /* Llib/date.scm 922 */

{ /* Llib/date.scm 922 */
bool_t BgL_test9002z00_20588;
if(
(
(long)(BgL_curz00_4576)>=((long)48)))
{ /* Llib/date.scm 922 */
BgL_test9002z00_20588 = 
(
(long)(BgL_curz00_4576)<((long)58))
; }  else 
{ /* Llib/date.scm 922 */
BgL_test9002z00_20588 = ((bool_t)0)
; } 
if(BgL_test9002z00_20588)
{ /* Llib/date.scm 922 */
BgL_iportz00_4581 = BgL_iportz00_4566; 
BgL_lastzd2matchzd2_4582 = BgL_newzd2matchzd2_4571; 
BgL_forwardz00_4583 = 
(((long)1)+BgL_forwardz00_4568); 
BgL_bufposz00_4584 = BgL_bufposz00_4569; 
BgL_zc3z04anonymousza33383ze3z87_4585:
if(
(BgL_forwardz00_4583==BgL_bufposz00_4584))
{ /* Llib/date.scm 922 */
if(
rgc_fill_buffer(BgL_iportz00_4581))
{ /* Llib/date.scm 922 */
long BgL_arg3387z00_4588;long BgL_arg3388z00_4589;
{ /* Llib/date.scm 922 */
long BgL_res6142z00_10557;
BgL_res6142z00_10557 = 
RGC_BUFFER_FORWARD(BgL_iportz00_4581); 
BgL_arg3387z00_4588 = BgL_res6142z00_10557; } 
{ /* Llib/date.scm 922 */
long BgL_res6143z00_10559;
BgL_res6143z00_10559 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_4581); 
BgL_arg3388z00_4589 = BgL_res6143z00_10559; } 
{ 
long BgL_bufposz00_20601;long BgL_forwardz00_20600;
BgL_forwardz00_20600 = BgL_arg3387z00_4588; 
BgL_bufposz00_20601 = BgL_arg3388z00_4589; 
BgL_bufposz00_4584 = BgL_bufposz00_20601; 
BgL_forwardz00_4583 = BgL_forwardz00_20600; 
goto BgL_zc3z04anonymousza33383ze3z87_4585;} }  else 
{ /* Llib/date.scm 922 */
BgL_matchz00_4720 = BgL_lastzd2matchzd2_4582; } }  else 
{ /* Llib/date.scm 922 */
int BgL_curz00_4590;
{ /* Llib/date.scm 922 */
int BgL_res6144z00_10562;
BgL_res6144z00_10562 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_4581, BgL_forwardz00_4583); 
BgL_curz00_4590 = BgL_res6144z00_10562; } 
{ /* Llib/date.scm 922 */

{ /* Llib/date.scm 922 */
bool_t BgL_test9006z00_20603;
if(
(
(long)(BgL_curz00_4590)>=((long)48)))
{ /* Llib/date.scm 922 */
BgL_test9006z00_20603 = 
(
(long)(BgL_curz00_4590)<((long)58))
; }  else 
{ /* Llib/date.scm 922 */
BgL_test9006z00_20603 = ((bool_t)0)
; } 
if(BgL_test9006z00_20603)
{ /* Llib/date.scm 922 */
long BgL_arg3393z00_4593;
BgL_arg3393z00_4593 = 
(((long)1)+BgL_forwardz00_4583); 
{ /* Llib/date.scm 922 */
long BgL_newzd2matchzd2_10569;
{ /* Llib/date.scm 922 */
long BgL_res6148z00_10572;
BgL_res6148z00_10572 = 
RGC_STOP_MATCH(BgL_iportz00_4581, BgL_arg3393z00_4593); BgL_res6148z00_10572; } 
BgL_newzd2matchzd2_10569 = ((long)0); 
BgL_matchz00_4720 = BgL_newzd2matchzd2_10569; } }  else 
{ /* Llib/date.scm 922 */
BgL_matchz00_4720 = BgL_lastzd2matchzd2_4582; } } } } }  else 
{ /* Llib/date.scm 922 */
BgL_matchz00_4720 = BgL_newzd2matchzd2_4571; } } } } } }  else 
{ /* Llib/date.scm 922 */
long BgL_arg3366z00_4559;
BgL_arg3366z00_4559 = 
(((long)1)+BgL_forwardz00_4549); 
{ /* Llib/date.scm 922 */
long BgL_newzd2matchzd2_10522;
{ /* Llib/date.scm 922 */
long BgL_res6129z00_10525;
BgL_res6129z00_10525 = 
RGC_STOP_MATCH(BgL_iportz00_4547, BgL_arg3366z00_4559); BgL_res6129z00_10525; } 
BgL_newzd2matchzd2_10522 = ((long)1); 
BgL_matchz00_4720 = BgL_newzd2matchzd2_10522; } } } } } 
RGC_SET_FILEPOS(BgL_iportz00_4503); 
switch( BgL_matchz00_4720) { case ((long)1) : 

{ /* Llib/date.scm 929 */
bool_t BgL_test9008z00_20616;
{ /* Llib/date.scm 929 */
obj_t BgL_arg3494z00_4737;
BgL_arg3494z00_4737 = 
BGl_thezd2failureze76z35zz__datez00(BgL_iportz00_4503); 
{ /* Llib/date.scm 929 */
bool_t BgL_res6157z00_10593;
BgL_res6157z00_10593 = 
EOF_OBJECTP(BgL_arg3494z00_4737); 
BgL_test9008z00_20616 = BgL_res6157z00_10593; } } 
if(BgL_test9008z00_20616)
{ /* Llib/date.scm 929 */
if(
BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BFALSE))
{ /* Llib/date.scm 233 */
long BgL_tmpz00_20621;
{ /* Llib/date.scm 930 */
obj_t BgL_aux7464z00_12542;
BgL_aux7464z00_12542 = BFALSE; 
{ 
obj_t BgL_auxz00_20628;
BgL_auxz00_20628 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)39563)), BGl_string7520z00zz__datez00, BGl_string7751z00zz__datez00, BgL_aux7464z00_12542); 
FAILURE(BgL_auxz00_20628,BFALSE,BFALSE);} } 
BgL_tmpz00_20621 = ((long)0); 
BgL_aux7472z00_12550 = 
bgl_make_date(((BGL_LONGLONG_T)0), 
(int)(((long)0)), 
(int)(((long)0)), 
(int)(((long)1)), 
(int)(((long)1)), 
(int)(BgL_mmz00_4505), 
(int)(BgL_yyyyz00_4504), BgL_tmpz00_20621, ((bool_t)1), 
(int)(((long)-1))); }  else 
{ /* Llib/date.scm 232 */
BgL_aux7472z00_12550 = 
bgl_make_date(((BGL_LONGLONG_T)0), 
(int)(((long)0)), 
(int)(((long)0)), 
(int)(((long)1)), 
(int)(((long)1)), 
(int)(BgL_mmz00_4505), 
(int)(BgL_yyyyz00_4504), ((long)0), ((bool_t)0), 
(int)(((long)-1))); } }  else 
{ /* Llib/date.scm 929 */
BgL_aux7472z00_12550 = 
BGl_parsezd2errorzd2zz__datez00(BGl_string7744z00zz__datez00, BGl_string7544z00zz__datez00, 
BGl_thezd2failureze76z35zz__datez00(BgL_iportz00_4503), BgL_iportz00_4503); } } break;case ((long)0) : 

{ /* Llib/date.scm 924 */
long BgL_b1z00_4738;long BgL_b2z00_4739;
{ /* Llib/date.scm 924 */
int BgL_arg3499z00_4743;
{ /* Llib/date.scm 922 */
int BgL_res6159z00_10597;
{ /* Llib/date.scm 922 */
int BgL_tmpz00_20644;
BgL_tmpz00_20644 = 
(int)(((long)1)); 
BgL_res6159z00_10597 = 
RGC_BUFFER_BYTE_REF(BgL_iportz00_4503, BgL_tmpz00_20644); } 
BgL_arg3499z00_4743 = BgL_res6159z00_10597; } 
BgL_b1z00_4738 = 
(
(long)(BgL_arg3499z00_4743)-((long)48)); } 
{ /* Llib/date.scm 925 */
int BgL_arg3500z00_4744;
{ /* Llib/date.scm 922 */
int BgL_res6161z00_10601;
{ /* Llib/date.scm 922 */
int BgL_tmpz00_20649;
BgL_tmpz00_20649 = 
(int)(((long)2)); 
BgL_res6161z00_10601 = 
RGC_BUFFER_BYTE_REF(BgL_iportz00_4503, BgL_tmpz00_20649); } 
BgL_arg3500z00_4744 = BgL_res6161z00_10601; } 
BgL_b2z00_4739 = 
(
(long)(BgL_arg3500z00_4744)-((long)48)); } 
BgL_iportz00_4781 = BgL_iportz00_4503; 
BgL_yyyyz00_4782 = BgL_yyyyz00_4504; 
BgL_mmz00_4783 = BgL_mmz00_4505; 
BgL_ddz00_4784 = 
(
(BgL_b1z00_4738*((long)10))+BgL_b2z00_4739); 
{ 
obj_t BgL_iportz00_4826;long BgL_lastzd2matchzd2_4827;long BgL_forwardz00_4828;long BgL_bufposz00_4829;obj_t BgL_iportz00_4847;long BgL_lastzd2matchzd2_4848;long BgL_forwardz00_4849;long BgL_bufposz00_4850;obj_t BgL_iportz00_4862;long BgL_lastzd2matchzd2_4863;long BgL_forwardz00_4864;long BgL_bufposz00_4865;
{ /* Llib/date.scm 907 */
bool_t BgL_test9010z00_20654;
{ /* Llib/date.scm 907 */
bool_t BgL_res6117z00_10495;
BgL_res6117z00_10495 = 
INPUT_PORT_CLOSEP(BgL_iportz00_4781); 
BgL_test9010z00_20654 = BgL_res6117z00_10495; } 
if(BgL_test9010z00_20654)
{ /* Llib/date.scm 907 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_arg3505z00_4819;
{ /* Llib/date.scm 907 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_new1077z00_4820;
{ /* Llib/date.scm 907 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_new1076z00_4823;
BgL_new1076z00_4823 = 
((BgL_z62iozd2closedzd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2closedzd2errorz62_bgl) ))); 
{ /* Llib/date.scm 907 */
long BgL_arg3509z00_4824;
{ /* Llib/date.scm 907 */
long BgL_res6118z00_10497;
BgL_res6118z00_10497 = 
BGL_CLASS_INDEX(BGl_z62iozd2closedzd2errorz62zz__objectz00); 
BgL_arg3509z00_4824 = BgL_res6118z00_10497; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1076z00_4823), BgL_arg3509z00_4824); } 
BgL_new1077z00_4820 = BgL_new1076z00_4823; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1077z00_4820)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1077z00_4820)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_20664;
{ /* Llib/date.scm 907 */
obj_t BgL_arg3506z00_4821;
{ /* Llib/date.scm 907 */
obj_t BgL_arg3507z00_4822;
{ /* Llib/date.scm 907 */
obj_t BgL_res6119z00_10501;
{ /* Llib/date.scm 907 */
obj_t BgL_classz00_10500;
BgL_classz00_10500 = BGl_z62iozd2closedzd2errorz62zz__objectz00; 
BgL_res6119z00_10501 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_10500); } 
BgL_arg3507z00_4822 = BgL_res6119z00_10501; } 
BgL_arg3506z00_4821 = 
VECTOR_REF(BgL_arg3507z00_4822,((long)2)); } 
{ /* Llib/date.scm 907 */
obj_t BgL_auxz00_20668;
if(
BGl_classzd2fieldzf3z21zz__objectz00(BgL_arg3506z00_4821))
{ /* Llib/date.scm 907 */
BgL_auxz00_20668 = BgL_arg3506z00_4821
; }  else 
{ 
obj_t BgL_auxz00_20671;
BgL_auxz00_20671 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)38860)), BGl_string7752z00zz__datez00, BGl_string7542z00zz__datez00, BgL_arg3506z00_4821); 
FAILURE(BgL_auxz00_20671,BFALSE,BFALSE);} 
BgL_auxz00_20664 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_auxz00_20668); } } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1077z00_4820)))->BgL_stackz00)=((obj_t)BgL_auxz00_20664),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1077z00_4820)))->BgL_procz00)=((obj_t)BGl_string7525z00zz__datez00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1077z00_4820)))->BgL_msgz00)=((obj_t)BGl_string7543z00zz__datez00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1077z00_4820)))->BgL_objz00)=((obj_t)BgL_iportz00_4781),BUNSPEC); 
BgL_arg3505z00_4819 = BgL_new1077z00_4820; } 
BgL_aux7472z00_12550 = 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg3505z00_4819)); }  else 
{ /* Llib/date.scm 907 */
{ /* Llib/date.scm 907 */
long BgL_res6104z00_10470;
BgL_res6104z00_10470 = 
RGC_START_MATCH(BgL_iportz00_4781); BgL_res6104z00_10470; } 
{ /* Llib/date.scm 907 */
long BgL_matchz00_5001;
{ /* Llib/date.scm 907 */
long BgL_arg3645z00_5026;long BgL_arg3647z00_5027;
{ /* Llib/date.scm 907 */
long BgL_res6105z00_10472;
BgL_res6105z00_10472 = 
RGC_BUFFER_FORWARD(BgL_iportz00_4781); 
BgL_arg3645z00_5026 = BgL_res6105z00_10472; } 
{ /* Llib/date.scm 907 */
long BgL_res6106z00_10474;
BgL_res6106z00_10474 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_4781); 
BgL_arg3647z00_5027 = BgL_res6106z00_10474; } 
BgL_iportz00_4826 = BgL_iportz00_4781; 
BgL_lastzd2matchzd2_4827 = ((long)1); 
BgL_forwardz00_4828 = BgL_arg3645z00_5026; 
BgL_bufposz00_4829 = BgL_arg3647z00_5027; 
BgL_zc3z04anonymousza33511ze3z87_4830:
if(
(BgL_forwardz00_4828==BgL_bufposz00_4829))
{ /* Llib/date.scm 907 */
if(
rgc_fill_buffer(BgL_iportz00_4826))
{ /* Llib/date.scm 907 */
long BgL_arg3514z00_4833;long BgL_arg3515z00_4834;
{ /* Llib/date.scm 907 */
long BgL_res6072z00_10391;
BgL_res6072z00_10391 = 
RGC_BUFFER_FORWARD(BgL_iportz00_4826); 
BgL_arg3514z00_4833 = BgL_res6072z00_10391; } 
{ /* Llib/date.scm 907 */
long BgL_res6073z00_10393;
BgL_res6073z00_10393 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_4826); 
BgL_arg3515z00_4834 = BgL_res6073z00_10393; } 
{ 
long BgL_bufposz00_20695;long BgL_forwardz00_20694;
BgL_forwardz00_20694 = BgL_arg3514z00_4833; 
BgL_bufposz00_20695 = BgL_arg3515z00_4834; 
BgL_bufposz00_4829 = BgL_bufposz00_20695; 
BgL_forwardz00_4828 = BgL_forwardz00_20694; 
goto BgL_zc3z04anonymousza33511ze3z87_4830;} }  else 
{ /* Llib/date.scm 907 */
BgL_matchz00_5001 = BgL_lastzd2matchzd2_4827; } }  else 
{ /* Llib/date.scm 907 */
int BgL_curz00_4835;
{ /* Llib/date.scm 907 */
int BgL_res6074z00_10396;
BgL_res6074z00_10396 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_4826, BgL_forwardz00_4828); 
BgL_curz00_4835 = BgL_res6074z00_10396; } 
{ /* Llib/date.scm 907 */

{ /* Llib/date.scm 907 */
bool_t BgL_test9014z00_20697;
if(
(
(long)(BgL_curz00_4835)==((long)32)))
{ /* Llib/date.scm 907 */
BgL_test9014z00_20697 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 907 */
BgL_test9014z00_20697 = 
(
(long)(BgL_curz00_4835)==((long)84))
; } 
if(BgL_test9014z00_20697)
{ /* Llib/date.scm 907 */
BgL_iportz00_4847 = BgL_iportz00_4826; 
BgL_lastzd2matchzd2_4848 = BgL_lastzd2matchzd2_4827; 
BgL_forwardz00_4849 = 
(((long)1)+BgL_forwardz00_4828); 
BgL_bufposz00_4850 = BgL_bufposz00_4829; 
BgL_zc3z04anonymousza33521ze3z87_4851:
{ /* Llib/date.scm 907 */
long BgL_newzd2matchzd2_4852;
{ /* Llib/date.scm 907 */
long BgL_res6081z00_10415;
BgL_res6081z00_10415 = 
RGC_STOP_MATCH(BgL_iportz00_4847, BgL_forwardz00_4849); BgL_res6081z00_10415; } 
BgL_newzd2matchzd2_4852 = ((long)1); 
if(
(BgL_forwardz00_4849==BgL_bufposz00_4850))
{ /* Llib/date.scm 907 */
if(
rgc_fill_buffer(BgL_iportz00_4847))
{ /* Llib/date.scm 907 */
long BgL_arg3524z00_4855;long BgL_arg3525z00_4856;
{ /* Llib/date.scm 907 */
long BgL_res6084z00_10422;
BgL_res6084z00_10422 = 
RGC_BUFFER_FORWARD(BgL_iportz00_4847); 
BgL_arg3524z00_4855 = BgL_res6084z00_10422; } 
{ /* Llib/date.scm 907 */
long BgL_res6085z00_10424;
BgL_res6085z00_10424 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_4847); 
BgL_arg3525z00_4856 = BgL_res6085z00_10424; } 
{ 
long BgL_bufposz00_20711;long BgL_forwardz00_20710;
BgL_forwardz00_20710 = BgL_arg3524z00_4855; 
BgL_bufposz00_20711 = BgL_arg3525z00_4856; 
BgL_bufposz00_4850 = BgL_bufposz00_20711; 
BgL_forwardz00_4849 = BgL_forwardz00_20710; 
goto BgL_zc3z04anonymousza33521ze3z87_4851;} }  else 
{ /* Llib/date.scm 907 */
BgL_matchz00_5001 = BgL_newzd2matchzd2_4852; } }  else 
{ /* Llib/date.scm 907 */
int BgL_curz00_4857;
{ /* Llib/date.scm 907 */
int BgL_res6086z00_10427;
BgL_res6086z00_10427 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_4847, BgL_forwardz00_4849); 
BgL_curz00_4857 = BgL_res6086z00_10427; } 
{ /* Llib/date.scm 907 */

{ /* Llib/date.scm 907 */
bool_t BgL_test9018z00_20713;
if(
(
(long)(BgL_curz00_4857)>=((long)48)))
{ /* Llib/date.scm 907 */
BgL_test9018z00_20713 = 
(
(long)(BgL_curz00_4857)<((long)58))
; }  else 
{ /* Llib/date.scm 907 */
BgL_test9018z00_20713 = ((bool_t)0)
; } 
if(BgL_test9018z00_20713)
{ /* Llib/date.scm 907 */
BgL_iportz00_4862 = BgL_iportz00_4847; 
BgL_lastzd2matchzd2_4863 = BgL_newzd2matchzd2_4852; 
BgL_forwardz00_4864 = 
(((long)1)+BgL_forwardz00_4849); 
BgL_bufposz00_4865 = BgL_bufposz00_4850; 
BgL_zc3z04anonymousza33530ze3z87_4866:
if(
(BgL_forwardz00_4864==BgL_bufposz00_4865))
{ /* Llib/date.scm 907 */
if(
rgc_fill_buffer(BgL_iportz00_4862))
{ /* Llib/date.scm 907 */
long BgL_arg3533z00_4869;long BgL_arg3534z00_4870;
{ /* Llib/date.scm 907 */
long BgL_res6092z00_10440;
BgL_res6092z00_10440 = 
RGC_BUFFER_FORWARD(BgL_iportz00_4862); 
BgL_arg3533z00_4869 = BgL_res6092z00_10440; } 
{ /* Llib/date.scm 907 */
long BgL_res6093z00_10442;
BgL_res6093z00_10442 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_4862); 
BgL_arg3534z00_4870 = BgL_res6093z00_10442; } 
{ 
long BgL_bufposz00_20726;long BgL_forwardz00_20725;
BgL_forwardz00_20725 = BgL_arg3533z00_4869; 
BgL_bufposz00_20726 = BgL_arg3534z00_4870; 
BgL_bufposz00_4865 = BgL_bufposz00_20726; 
BgL_forwardz00_4864 = BgL_forwardz00_20725; 
goto BgL_zc3z04anonymousza33530ze3z87_4866;} }  else 
{ /* Llib/date.scm 907 */
BgL_matchz00_5001 = BgL_lastzd2matchzd2_4863; } }  else 
{ /* Llib/date.scm 907 */
int BgL_curz00_4871;
{ /* Llib/date.scm 907 */
int BgL_res6094z00_10445;
BgL_res6094z00_10445 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_4862, BgL_forwardz00_4864); 
BgL_curz00_4871 = BgL_res6094z00_10445; } 
{ /* Llib/date.scm 907 */

{ /* Llib/date.scm 907 */
bool_t BgL_test9022z00_20728;
if(
(
(long)(BgL_curz00_4871)>=((long)48)))
{ /* Llib/date.scm 907 */
BgL_test9022z00_20728 = 
(
(long)(BgL_curz00_4871)<((long)58))
; }  else 
{ /* Llib/date.scm 907 */
BgL_test9022z00_20728 = ((bool_t)0)
; } 
if(BgL_test9022z00_20728)
{ /* Llib/date.scm 907 */
long BgL_arg3537z00_4874;
BgL_arg3537z00_4874 = 
(((long)1)+BgL_forwardz00_4864); 
{ /* Llib/date.scm 907 */
long BgL_newzd2matchzd2_10452;
{ /* Llib/date.scm 907 */
long BgL_res6098z00_10455;
BgL_res6098z00_10455 = 
RGC_STOP_MATCH(BgL_iportz00_4862, BgL_arg3537z00_4874); BgL_res6098z00_10455; } 
BgL_newzd2matchzd2_10452 = ((long)0); 
BgL_matchz00_5001 = BgL_newzd2matchzd2_10452; } }  else 
{ /* Llib/date.scm 907 */
BgL_matchz00_5001 = BgL_lastzd2matchzd2_4863; } } } } }  else 
{ /* Llib/date.scm 907 */
BgL_matchz00_5001 = BgL_newzd2matchzd2_4852; } } } } } }  else 
{ /* Llib/date.scm 907 */
long BgL_arg3519z00_4839;
BgL_arg3519z00_4839 = 
(((long)1)+BgL_forwardz00_4828); 
{ /* Llib/date.scm 907 */
long BgL_newzd2matchzd2_10405;
{ /* Llib/date.scm 907 */
long BgL_res6079z00_10408;
BgL_res6079z00_10408 = 
RGC_STOP_MATCH(BgL_iportz00_4826, BgL_arg3519z00_4839); BgL_res6079z00_10408; } 
BgL_newzd2matchzd2_10405 = ((long)1); 
BgL_matchz00_5001 = BgL_newzd2matchzd2_10405; } } } } } } 
RGC_SET_FILEPOS(BgL_iportz00_4781); 
switch( BgL_matchz00_5001) { case ((long)1) : 

{ /* Llib/date.scm 915 */
bool_t BgL_test9024z00_20741;
{ /* Llib/date.scm 915 */
obj_t BgL_arg3639z00_5018;
BgL_arg3639z00_5018 = 
BGl_thezd2failureze75z35zz__datez00(BgL_iportz00_4781); 
{ /* Llib/date.scm 915 */
bool_t BgL_res6107z00_10476;
BgL_res6107z00_10476 = 
EOF_OBJECTP(BgL_arg3639z00_5018); 
BgL_test9024z00_20741 = BgL_res6107z00_10476; } } 
if(BgL_test9024z00_20741)
{ /* Llib/date.scm 915 */
if(
BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BFALSE))
{ /* Llib/date.scm 233 */
long BgL_tmpz00_20746;
{ /* Llib/date.scm 916 */
obj_t BgL_aux7461z00_12539;
BgL_aux7461z00_12539 = BFALSE; 
{ 
obj_t BgL_auxz00_20753;
BgL_auxz00_20753 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)39161)), BGl_string7520z00zz__datez00, BGl_string7751z00zz__datez00, BgL_aux7461z00_12539); 
FAILURE(BgL_auxz00_20753,BFALSE,BFALSE);} } 
BgL_tmpz00_20746 = ((long)0); 
BgL_aux7472z00_12550 = 
bgl_make_date(((BGL_LONGLONG_T)0), 
(int)(((long)0)), 
(int)(((long)0)), 
(int)(((long)1)), 
(int)(BgL_ddz00_4784), 
(int)(BgL_mmz00_4783), 
(int)(BgL_yyyyz00_4782), BgL_tmpz00_20746, ((bool_t)1), 
(int)(((long)-1))); }  else 
{ /* Llib/date.scm 232 */
BgL_aux7472z00_12550 = 
bgl_make_date(((BGL_LONGLONG_T)0), 
(int)(((long)0)), 
(int)(((long)0)), 
(int)(((long)1)), 
(int)(BgL_ddz00_4784), 
(int)(BgL_mmz00_4783), 
(int)(BgL_yyyyz00_4782), ((long)0), ((bool_t)0), 
(int)(((long)-1))); } }  else 
{ /* Llib/date.scm 915 */
BgL_aux7472z00_12550 = 
BGl_parsezd2errorzd2zz__datez00(BGl_string7744z00zz__datez00, BGl_string7544z00zz__datez00, 
BGl_thezd2failureze75z35zz__datez00(BgL_iportz00_4781), BgL_iportz00_4781); } } break;case ((long)0) : 

{ /* Llib/date.scm 910 */
long BgL_b1z00_5019;long BgL_b2z00_5020;
{ /* Llib/date.scm 910 */
int BgL_arg3643z00_5024;
{ /* Llib/date.scm 907 */
int BgL_res6109z00_10480;
{ /* Llib/date.scm 907 */
int BgL_tmpz00_20769;
BgL_tmpz00_20769 = 
(int)(((long)1)); 
BgL_res6109z00_10480 = 
RGC_BUFFER_BYTE_REF(BgL_iportz00_4781, BgL_tmpz00_20769); } 
BgL_arg3643z00_5024 = BgL_res6109z00_10480; } 
BgL_b1z00_5019 = 
(
(long)(BgL_arg3643z00_5024)-((long)48)); } 
{ /* Llib/date.scm 911 */
int BgL_arg3644z00_5025;
{ /* Llib/date.scm 907 */
int BgL_res6111z00_10484;
{ /* Llib/date.scm 907 */
int BgL_tmpz00_20774;
BgL_tmpz00_20774 = 
(int)(((long)2)); 
BgL_res6111z00_10484 = 
RGC_BUFFER_BYTE_REF(BgL_iportz00_4781, BgL_tmpz00_20774); } 
BgL_arg3644z00_5025 = BgL_res6111z00_10484; } 
BgL_b2z00_5020 = 
(
(long)(BgL_arg3644z00_5025)-((long)48)); } 
BgL_iportz00_5062 = BgL_iportz00_4781; 
BgL_yyyyz00_5063 = BgL_yyyyz00_4782; 
BgL_mmz00_5064 = BgL_mmz00_4783; 
BgL_ddz00_5065 = BgL_ddz00_4784; 
BgL_hhz00_5066 = 
(
(BgL_b1z00_5019*((long)10))+BgL_b2z00_5020); 
{ 
obj_t BgL_iportz00_5108;long BgL_lastzd2matchzd2_5109;long BgL_forwardz00_5110;long BgL_bufposz00_5111;obj_t BgL_iportz00_5127;long BgL_lastzd2matchzd2_5128;long BgL_forwardz00_5129;long BgL_bufposz00_5130;obj_t BgL_iportz00_5142;long BgL_lastzd2matchzd2_5143;long BgL_forwardz00_5144;long BgL_bufposz00_5145;
{ /* Llib/date.scm 893 */
bool_t BgL_test9026z00_20779;
{ /* Llib/date.scm 893 */
bool_t BgL_res6066z00_10376;
BgL_res6066z00_10376 = 
INPUT_PORT_CLOSEP(BgL_iportz00_5062); 
BgL_test9026z00_20779 = BgL_res6066z00_10376; } 
if(BgL_test9026z00_20779)
{ /* Llib/date.scm 893 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_arg3650z00_5101;
{ /* Llib/date.scm 893 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_new1077z00_5102;
{ /* Llib/date.scm 893 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_new1076z00_5105;
BgL_new1076z00_5105 = 
((BgL_z62iozd2closedzd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2closedzd2errorz62_bgl) ))); 
{ /* Llib/date.scm 893 */
long BgL_arg3653z00_5106;
{ /* Llib/date.scm 893 */
long BgL_res6067z00_10378;
BgL_res6067z00_10378 = 
BGL_CLASS_INDEX(BGl_z62iozd2closedzd2errorz62zz__objectz00); 
BgL_arg3653z00_5106 = BgL_res6067z00_10378; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1076z00_5105), BgL_arg3653z00_5106); } 
BgL_new1077z00_5102 = BgL_new1076z00_5105; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1077z00_5102)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1077z00_5102)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_20789;
{ /* Llib/date.scm 893 */
obj_t BgL_arg3651z00_5103;
{ /* Llib/date.scm 893 */
obj_t BgL_arg3652z00_5104;
{ /* Llib/date.scm 893 */
obj_t BgL_res6068z00_10382;
{ /* Llib/date.scm 893 */
obj_t BgL_classz00_10381;
BgL_classz00_10381 = BGl_z62iozd2closedzd2errorz62zz__objectz00; 
BgL_res6068z00_10382 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_10381); } 
BgL_arg3652z00_5104 = BgL_res6068z00_10382; } 
BgL_arg3651z00_5103 = 
VECTOR_REF(BgL_arg3652z00_5104,((long)2)); } 
{ /* Llib/date.scm 893 */
obj_t BgL_auxz00_20793;
if(
BGl_classzd2fieldzf3z21zz__objectz00(BgL_arg3651z00_5103))
{ /* Llib/date.scm 893 */
BgL_auxz00_20793 = BgL_arg3651z00_5103
; }  else 
{ 
obj_t BgL_auxz00_20796;
BgL_auxz00_20796 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)38422)), BGl_string7750z00zz__datez00, BGl_string7542z00zz__datez00, BgL_arg3651z00_5103); 
FAILURE(BgL_auxz00_20796,BFALSE,BFALSE);} 
BgL_auxz00_20789 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_auxz00_20793); } } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1077z00_5102)))->BgL_stackz00)=((obj_t)BgL_auxz00_20789),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1077z00_5102)))->BgL_procz00)=((obj_t)BGl_string7525z00zz__datez00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1077z00_5102)))->BgL_msgz00)=((obj_t)BGl_string7543z00zz__datez00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1077z00_5102)))->BgL_objz00)=((obj_t)BgL_iportz00_5062),BUNSPEC); 
BgL_arg3650z00_5101 = BgL_new1077z00_5102; } 
BgL_aux7472z00_12550 = 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg3650z00_5101)); }  else 
{ /* Llib/date.scm 893 */
{ /* Llib/date.scm 893 */
long BgL_res6053z00_10351;
BgL_res6053z00_10351 = 
RGC_START_MATCH(BgL_iportz00_5062); BgL_res6053z00_10351; } 
{ /* Llib/date.scm 893 */
long BgL_matchz00_5281;
{ /* Llib/date.scm 893 */
long BgL_arg3784z00_5306;long BgL_arg3785z00_5307;
{ /* Llib/date.scm 893 */
long BgL_res6054z00_10353;
BgL_res6054z00_10353 = 
RGC_BUFFER_FORWARD(BgL_iportz00_5062); 
BgL_arg3784z00_5306 = BgL_res6054z00_10353; } 
{ /* Llib/date.scm 893 */
long BgL_res6055z00_10355;
BgL_res6055z00_10355 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_5062); 
BgL_arg3785z00_5307 = BgL_res6055z00_10355; } 
BgL_iportz00_5108 = BgL_iportz00_5062; 
BgL_lastzd2matchzd2_5109 = ((long)1); 
BgL_forwardz00_5110 = BgL_arg3784z00_5306; 
BgL_bufposz00_5111 = BgL_arg3785z00_5307; 
BgL_zc3z04anonymousza33655ze3z87_5112:
if(
(BgL_forwardz00_5110==BgL_bufposz00_5111))
{ /* Llib/date.scm 893 */
if(
rgc_fill_buffer(BgL_iportz00_5108))
{ /* Llib/date.scm 893 */
long BgL_arg3658z00_5115;long BgL_arg3659z00_5116;
{ /* Llib/date.scm 893 */
long BgL_res6022z00_10274;
BgL_res6022z00_10274 = 
RGC_BUFFER_FORWARD(BgL_iportz00_5108); 
BgL_arg3658z00_5115 = BgL_res6022z00_10274; } 
{ /* Llib/date.scm 893 */
long BgL_res6023z00_10276;
BgL_res6023z00_10276 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_5108); 
BgL_arg3659z00_5116 = BgL_res6023z00_10276; } 
{ 
long BgL_bufposz00_20820;long BgL_forwardz00_20819;
BgL_forwardz00_20819 = BgL_arg3658z00_5115; 
BgL_bufposz00_20820 = BgL_arg3659z00_5116; 
BgL_bufposz00_5111 = BgL_bufposz00_20820; 
BgL_forwardz00_5110 = BgL_forwardz00_20819; 
goto BgL_zc3z04anonymousza33655ze3z87_5112;} }  else 
{ /* Llib/date.scm 893 */
BgL_matchz00_5281 = BgL_lastzd2matchzd2_5109; } }  else 
{ /* Llib/date.scm 893 */
int BgL_curz00_5117;
{ /* Llib/date.scm 893 */
int BgL_res6024z00_10279;
BgL_res6024z00_10279 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_5108, BgL_forwardz00_5110); 
BgL_curz00_5117 = BgL_res6024z00_10279; } 
{ /* Llib/date.scm 893 */

if(
(
(long)(BgL_curz00_5117)==((long)58)))
{ /* Llib/date.scm 893 */
BgL_iportz00_5127 = BgL_iportz00_5108; 
BgL_lastzd2matchzd2_5128 = BgL_lastzd2matchzd2_5109; 
BgL_forwardz00_5129 = 
(((long)1)+BgL_forwardz00_5110); 
BgL_bufposz00_5130 = BgL_bufposz00_5111; 
BgL_zc3z04anonymousza33664ze3z87_5131:
{ /* Llib/date.scm 893 */
long BgL_newzd2matchzd2_5132;
{ /* Llib/date.scm 893 */
long BgL_res6030z00_10296;
BgL_res6030z00_10296 = 
RGC_STOP_MATCH(BgL_iportz00_5127, BgL_forwardz00_5129); BgL_res6030z00_10296; } 
BgL_newzd2matchzd2_5132 = ((long)1); 
if(
(BgL_forwardz00_5129==BgL_bufposz00_5130))
{ /* Llib/date.scm 893 */
if(
rgc_fill_buffer(BgL_iportz00_5127))
{ /* Llib/date.scm 893 */
long BgL_arg3667z00_5135;long BgL_arg3669z00_5136;
{ /* Llib/date.scm 893 */
long BgL_res6033z00_10303;
BgL_res6033z00_10303 = 
RGC_BUFFER_FORWARD(BgL_iportz00_5127); 
BgL_arg3667z00_5135 = BgL_res6033z00_10303; } 
{ /* Llib/date.scm 893 */
long BgL_res6034z00_10305;
BgL_res6034z00_10305 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_5127); 
BgL_arg3669z00_5136 = BgL_res6034z00_10305; } 
{ 
long BgL_bufposz00_20833;long BgL_forwardz00_20832;
BgL_forwardz00_20832 = BgL_arg3667z00_5135; 
BgL_bufposz00_20833 = BgL_arg3669z00_5136; 
BgL_bufposz00_5130 = BgL_bufposz00_20833; 
BgL_forwardz00_5129 = BgL_forwardz00_20832; 
goto BgL_zc3z04anonymousza33664ze3z87_5131;} }  else 
{ /* Llib/date.scm 893 */
BgL_matchz00_5281 = BgL_newzd2matchzd2_5132; } }  else 
{ /* Llib/date.scm 893 */
int BgL_curz00_5137;
{ /* Llib/date.scm 893 */
int BgL_res6035z00_10308;
BgL_res6035z00_10308 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_5127, BgL_forwardz00_5129); 
BgL_curz00_5137 = BgL_res6035z00_10308; } 
{ /* Llib/date.scm 893 */

{ /* Llib/date.scm 893 */
bool_t BgL_test9033z00_20835;
if(
(
(long)(BgL_curz00_5137)>=((long)48)))
{ /* Llib/date.scm 893 */
BgL_test9033z00_20835 = 
(
(long)(BgL_curz00_5137)<((long)58))
; }  else 
{ /* Llib/date.scm 893 */
BgL_test9033z00_20835 = ((bool_t)0)
; } 
if(BgL_test9033z00_20835)
{ /* Llib/date.scm 893 */
BgL_iportz00_5142 = BgL_iportz00_5127; 
BgL_lastzd2matchzd2_5143 = BgL_newzd2matchzd2_5132; 
BgL_forwardz00_5144 = 
(((long)1)+BgL_forwardz00_5129); 
BgL_bufposz00_5145 = BgL_bufposz00_5130; 
BgL_zc3z04anonymousza33673ze3z87_5146:
if(
(BgL_forwardz00_5144==BgL_bufposz00_5145))
{ /* Llib/date.scm 893 */
if(
rgc_fill_buffer(BgL_iportz00_5142))
{ /* Llib/date.scm 893 */
long BgL_arg3676z00_5149;long BgL_arg3678z00_5150;
{ /* Llib/date.scm 893 */
long BgL_res6041z00_10321;
BgL_res6041z00_10321 = 
RGC_BUFFER_FORWARD(BgL_iportz00_5142); 
BgL_arg3676z00_5149 = BgL_res6041z00_10321; } 
{ /* Llib/date.scm 893 */
long BgL_res6042z00_10323;
BgL_res6042z00_10323 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_5142); 
BgL_arg3678z00_5150 = BgL_res6042z00_10323; } 
{ 
long BgL_bufposz00_20848;long BgL_forwardz00_20847;
BgL_forwardz00_20847 = BgL_arg3676z00_5149; 
BgL_bufposz00_20848 = BgL_arg3678z00_5150; 
BgL_bufposz00_5145 = BgL_bufposz00_20848; 
BgL_forwardz00_5144 = BgL_forwardz00_20847; 
goto BgL_zc3z04anonymousza33673ze3z87_5146;} }  else 
{ /* Llib/date.scm 893 */
BgL_matchz00_5281 = BgL_lastzd2matchzd2_5143; } }  else 
{ /* Llib/date.scm 893 */
int BgL_curz00_5151;
{ /* Llib/date.scm 893 */
int BgL_res6043z00_10326;
BgL_res6043z00_10326 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_5142, BgL_forwardz00_5144); 
BgL_curz00_5151 = BgL_res6043z00_10326; } 
{ /* Llib/date.scm 893 */

{ /* Llib/date.scm 893 */
bool_t BgL_test9037z00_20850;
if(
(
(long)(BgL_curz00_5151)>=((long)48)))
{ /* Llib/date.scm 893 */
BgL_test9037z00_20850 = 
(
(long)(BgL_curz00_5151)<((long)58))
; }  else 
{ /* Llib/date.scm 893 */
BgL_test9037z00_20850 = ((bool_t)0)
; } 
if(BgL_test9037z00_20850)
{ /* Llib/date.scm 893 */
long BgL_arg3681z00_5154;
BgL_arg3681z00_5154 = 
(((long)1)+BgL_forwardz00_5144); 
{ /* Llib/date.scm 893 */
long BgL_newzd2matchzd2_10333;
{ /* Llib/date.scm 893 */
long BgL_res6047z00_10336;
BgL_res6047z00_10336 = 
RGC_STOP_MATCH(BgL_iportz00_5142, BgL_arg3681z00_5154); BgL_res6047z00_10336; } 
BgL_newzd2matchzd2_10333 = ((long)0); 
BgL_matchz00_5281 = BgL_newzd2matchzd2_10333; } }  else 
{ /* Llib/date.scm 893 */
BgL_matchz00_5281 = BgL_lastzd2matchzd2_5143; } } } } }  else 
{ /* Llib/date.scm 893 */
BgL_matchz00_5281 = BgL_newzd2matchzd2_5132; } } } } } }  else 
{ /* Llib/date.scm 893 */
long BgL_arg3662z00_5120;
BgL_arg3662z00_5120 = 
(((long)1)+BgL_forwardz00_5110); 
{ /* Llib/date.scm 893 */
long BgL_newzd2matchzd2_10286;
{ /* Llib/date.scm 893 */
long BgL_res6028z00_10289;
BgL_res6028z00_10289 = 
RGC_STOP_MATCH(BgL_iportz00_5108, BgL_arg3662z00_5120); BgL_res6028z00_10289; } 
BgL_newzd2matchzd2_10286 = ((long)1); 
BgL_matchz00_5281 = BgL_newzd2matchzd2_10286; } } } } } 
RGC_SET_FILEPOS(BgL_iportz00_5062); 
switch( BgL_matchz00_5281) { case ((long)1) : 

{ /* Llib/date.scm 900 */
bool_t BgL_test9039z00_20863;
{ /* Llib/date.scm 900 */
obj_t BgL_arg3778z00_5298;
BgL_arg3778z00_5298 = 
BGl_thezd2failureze74z35zz__datez00(BgL_iportz00_5062); 
{ /* Llib/date.scm 900 */
bool_t BgL_res6056z00_10357;
BgL_res6056z00_10357 = 
EOF_OBJECTP(BgL_arg3778z00_5298); 
BgL_test9039z00_20863 = BgL_res6056z00_10357; } } 
if(BgL_test9039z00_20863)
{ /* Llib/date.scm 900 */
if(
BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(
BINT(((long)0))))
{ /* Llib/date.scm 232 */
BgL_aux7472z00_12550 = 
bgl_make_date(((BGL_LONGLONG_T)0), 
(int)(((long)0)), 
(int)(((long)0)), 
(int)(BgL_hhz00_5066), 
(int)(BgL_ddz00_5065), 
(int)(BgL_mmz00_5064), 
(int)(BgL_yyyyz00_5063), ((long)0), ((bool_t)1), 
(int)(((long)0))); }  else 
{ /* Llib/date.scm 232 */
BgL_aux7472z00_12550 = 
bgl_make_date(((BGL_LONGLONG_T)0), 
(int)(((long)0)), 
(int)(((long)0)), 
(int)(BgL_hhz00_5066), 
(int)(BgL_ddz00_5065), 
(int)(BgL_mmz00_5064), 
(int)(BgL_yyyyz00_5063), ((long)0), ((bool_t)0), 
(int)(((long)0))); } }  else 
{ /* Llib/date.scm 900 */
BgL_aux7472z00_12550 = 
BGl_parsezd2errorzd2zz__datez00(BGl_string7744z00zz__datez00, BGl_string7544z00zz__datez00, 
BGl_thezd2failureze74z35zz__datez00(BgL_iportz00_5062), BgL_iportz00_5062); } } break;case ((long)0) : 

{ /* Llib/date.scm 895 */
long BgL_b1z00_5299;long BgL_b2z00_5300;
{ /* Llib/date.scm 895 */
int BgL_arg3782z00_5304;
{ /* Llib/date.scm 893 */
int BgL_res6058z00_10361;
{ /* Llib/date.scm 893 */
int BgL_tmpz00_20887;
BgL_tmpz00_20887 = 
(int)(((long)1)); 
BgL_res6058z00_10361 = 
RGC_BUFFER_BYTE_REF(BgL_iportz00_5062, BgL_tmpz00_20887); } 
BgL_arg3782z00_5304 = BgL_res6058z00_10361; } 
BgL_b1z00_5299 = 
(
(long)(BgL_arg3782z00_5304)-((long)48)); } 
{ /* Llib/date.scm 896 */
int BgL_arg3783z00_5305;
{ /* Llib/date.scm 893 */
int BgL_res6060z00_10365;
{ /* Llib/date.scm 893 */
int BgL_tmpz00_20892;
BgL_tmpz00_20892 = 
(int)(((long)2)); 
BgL_res6060z00_10365 = 
RGC_BUFFER_BYTE_REF(BgL_iportz00_5062, BgL_tmpz00_20892); } 
BgL_arg3783z00_5305 = BgL_res6060z00_10365; } 
BgL_b2z00_5300 = 
(
(long)(BgL_arg3783z00_5305)-((long)48)); } 
BgL_iportz00_5342 = BgL_iportz00_5062; 
BgL_yyyyz00_5343 = BgL_yyyyz00_5063; 
BgL_mmz00_5344 = BgL_mmz00_5064; 
BgL_ddz00_5345 = BgL_ddz00_5065; 
BgL_hhz00_5346 = BgL_hhz00_5066; 
BgL_mmz00_5347 = 
(
(BgL_b1z00_5299*((long)10))+BgL_b2z00_5300); 
{ 
obj_t BgL_iportz00_5389;long BgL_lastzd2matchzd2_5390;long BgL_forwardz00_5391;long BgL_bufposz00_5392;obj_t BgL_iportz00_5408;long BgL_lastzd2matchzd2_5409;long BgL_forwardz00_5410;long BgL_bufposz00_5411;obj_t BgL_iportz00_5423;long BgL_lastzd2matchzd2_5424;long BgL_forwardz00_5425;long BgL_bufposz00_5426;
{ /* Llib/date.scm 877 */
bool_t BgL_test9041z00_20897;
{ /* Llib/date.scm 877 */
bool_t BgL_res6016z00_10259;
BgL_res6016z00_10259 = 
INPUT_PORT_CLOSEP(BgL_iportz00_5342); 
BgL_test9041z00_20897 = BgL_res6016z00_10259; } 
if(BgL_test9041z00_20897)
{ /* Llib/date.scm 877 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_arg3787z00_5382;
{ /* Llib/date.scm 877 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_new1077z00_5383;
{ /* Llib/date.scm 877 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_new1076z00_5386;
BgL_new1076z00_5386 = 
((BgL_z62iozd2closedzd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2closedzd2errorz62_bgl) ))); 
{ /* Llib/date.scm 877 */
long BgL_arg3790z00_5387;
{ /* Llib/date.scm 877 */
long BgL_res6017z00_10261;
BgL_res6017z00_10261 = 
BGL_CLASS_INDEX(BGl_z62iozd2closedzd2errorz62zz__objectz00); 
BgL_arg3790z00_5387 = BgL_res6017z00_10261; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1076z00_5386), BgL_arg3790z00_5387); } 
BgL_new1077z00_5383 = BgL_new1076z00_5386; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1077z00_5383)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1077z00_5383)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_20907;
{ /* Llib/date.scm 877 */
obj_t BgL_arg3788z00_5384;
{ /* Llib/date.scm 877 */
obj_t BgL_arg3789z00_5385;
{ /* Llib/date.scm 877 */
obj_t BgL_res6018z00_10265;
{ /* Llib/date.scm 877 */
obj_t BgL_classz00_10264;
BgL_classz00_10264 = BGl_z62iozd2closedzd2errorz62zz__objectz00; 
BgL_res6018z00_10265 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_10264); } 
BgL_arg3789z00_5385 = BgL_res6018z00_10265; } 
BgL_arg3788z00_5384 = 
VECTOR_REF(BgL_arg3789z00_5385,((long)2)); } 
{ /* Llib/date.scm 877 */
obj_t BgL_auxz00_20911;
if(
BGl_classzd2fieldzf3z21zz__objectz00(BgL_arg3788z00_5384))
{ /* Llib/date.scm 877 */
BgL_auxz00_20911 = BgL_arg3788z00_5384
; }  else 
{ 
obj_t BgL_auxz00_20914;
BgL_auxz00_20914 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)37935)), BGl_string7749z00zz__datez00, BGl_string7542z00zz__datez00, BgL_arg3788z00_5384); 
FAILURE(BgL_auxz00_20914,BFALSE,BFALSE);} 
BgL_auxz00_20907 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_auxz00_20911); } } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1077z00_5383)))->BgL_stackz00)=((obj_t)BgL_auxz00_20907),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1077z00_5383)))->BgL_procz00)=((obj_t)BGl_string7525z00zz__datez00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1077z00_5383)))->BgL_msgz00)=((obj_t)BGl_string7543z00zz__datez00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1077z00_5383)))->BgL_objz00)=((obj_t)BgL_iportz00_5342),BUNSPEC); 
BgL_arg3787z00_5382 = BgL_new1077z00_5383; } 
BgL_aux7472z00_12550 = 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg3787z00_5382)); }  else 
{ /* Llib/date.scm 877 */
{ /* Llib/date.scm 877 */
long BgL_res6002z00_10233;
BgL_res6002z00_10233 = 
RGC_START_MATCH(BgL_iportz00_5342); BgL_res6002z00_10233; } 
{ /* Llib/date.scm 877 */
long BgL_matchz00_5562;
{ /* Llib/date.scm 877 */
long BgL_arg3917z00_5588;long BgL_arg3918z00_5589;
{ /* Llib/date.scm 877 */
long BgL_res6003z00_10235;
BgL_res6003z00_10235 = 
RGC_BUFFER_FORWARD(BgL_iportz00_5342); 
BgL_arg3917z00_5588 = BgL_res6003z00_10235; } 
{ /* Llib/date.scm 877 */
long BgL_res6004z00_10237;
BgL_res6004z00_10237 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_5342); 
BgL_arg3918z00_5589 = BgL_res6004z00_10237; } 
BgL_iportz00_5389 = BgL_iportz00_5342; 
BgL_lastzd2matchzd2_5390 = ((long)1); 
BgL_forwardz00_5391 = BgL_arg3917z00_5588; 
BgL_bufposz00_5392 = BgL_arg3918z00_5589; 
BgL_zc3z04anonymousza33792ze3z87_5393:
if(
(BgL_forwardz00_5391==BgL_bufposz00_5392))
{ /* Llib/date.scm 877 */
if(
rgc_fill_buffer(BgL_iportz00_5389))
{ /* Llib/date.scm 877 */
long BgL_arg3795z00_5396;long BgL_arg3796z00_5397;
{ /* Llib/date.scm 877 */
long BgL_res5971z00_10156;
BgL_res5971z00_10156 = 
RGC_BUFFER_FORWARD(BgL_iportz00_5389); 
BgL_arg3795z00_5396 = BgL_res5971z00_10156; } 
{ /* Llib/date.scm 877 */
long BgL_res5972z00_10158;
BgL_res5972z00_10158 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_5389); 
BgL_arg3796z00_5397 = BgL_res5972z00_10158; } 
{ 
long BgL_bufposz00_20938;long BgL_forwardz00_20937;
BgL_forwardz00_20937 = BgL_arg3795z00_5396; 
BgL_bufposz00_20938 = BgL_arg3796z00_5397; 
BgL_bufposz00_5392 = BgL_bufposz00_20938; 
BgL_forwardz00_5391 = BgL_forwardz00_20937; 
goto BgL_zc3z04anonymousza33792ze3z87_5393;} }  else 
{ /* Llib/date.scm 877 */
BgL_matchz00_5562 = BgL_lastzd2matchzd2_5390; } }  else 
{ /* Llib/date.scm 877 */
int BgL_curz00_5398;
{ /* Llib/date.scm 877 */
int BgL_res5973z00_10161;
BgL_res5973z00_10161 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_5389, BgL_forwardz00_5391); 
BgL_curz00_5398 = BgL_res5973z00_10161; } 
{ /* Llib/date.scm 877 */

if(
(
(long)(BgL_curz00_5398)==((long)58)))
{ /* Llib/date.scm 877 */
BgL_iportz00_5408 = BgL_iportz00_5389; 
BgL_lastzd2matchzd2_5409 = BgL_lastzd2matchzd2_5390; 
BgL_forwardz00_5410 = 
(((long)1)+BgL_forwardz00_5391); 
BgL_bufposz00_5411 = BgL_bufposz00_5392; 
BgL_zc3z04anonymousza33801ze3z87_5412:
{ /* Llib/date.scm 877 */
long BgL_newzd2matchzd2_5413;
{ /* Llib/date.scm 877 */
long BgL_res5979z00_10178;
BgL_res5979z00_10178 = 
RGC_STOP_MATCH(BgL_iportz00_5408, BgL_forwardz00_5410); BgL_res5979z00_10178; } 
BgL_newzd2matchzd2_5413 = ((long)1); 
if(
(BgL_forwardz00_5410==BgL_bufposz00_5411))
{ /* Llib/date.scm 877 */
if(
rgc_fill_buffer(BgL_iportz00_5408))
{ /* Llib/date.scm 877 */
long BgL_arg3804z00_5416;long BgL_arg3805z00_5417;
{ /* Llib/date.scm 877 */
long BgL_res5982z00_10185;
BgL_res5982z00_10185 = 
RGC_BUFFER_FORWARD(BgL_iportz00_5408); 
BgL_arg3804z00_5416 = BgL_res5982z00_10185; } 
{ /* Llib/date.scm 877 */
long BgL_res5983z00_10187;
BgL_res5983z00_10187 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_5408); 
BgL_arg3805z00_5417 = BgL_res5983z00_10187; } 
{ 
long BgL_bufposz00_20951;long BgL_forwardz00_20950;
BgL_forwardz00_20950 = BgL_arg3804z00_5416; 
BgL_bufposz00_20951 = BgL_arg3805z00_5417; 
BgL_bufposz00_5411 = BgL_bufposz00_20951; 
BgL_forwardz00_5410 = BgL_forwardz00_20950; 
goto BgL_zc3z04anonymousza33801ze3z87_5412;} }  else 
{ /* Llib/date.scm 877 */
BgL_matchz00_5562 = BgL_newzd2matchzd2_5413; } }  else 
{ /* Llib/date.scm 877 */
int BgL_curz00_5418;
{ /* Llib/date.scm 877 */
int BgL_res5984z00_10190;
BgL_res5984z00_10190 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_5408, BgL_forwardz00_5410); 
BgL_curz00_5418 = BgL_res5984z00_10190; } 
{ /* Llib/date.scm 877 */

{ /* Llib/date.scm 877 */
bool_t BgL_test9048z00_20953;
if(
(
(long)(BgL_curz00_5418)>=((long)48)))
{ /* Llib/date.scm 877 */
BgL_test9048z00_20953 = 
(
(long)(BgL_curz00_5418)<((long)58))
; }  else 
{ /* Llib/date.scm 877 */
BgL_test9048z00_20953 = ((bool_t)0)
; } 
if(BgL_test9048z00_20953)
{ /* Llib/date.scm 877 */
BgL_iportz00_5423 = BgL_iportz00_5408; 
BgL_lastzd2matchzd2_5424 = BgL_newzd2matchzd2_5413; 
BgL_forwardz00_5425 = 
(((long)1)+BgL_forwardz00_5410); 
BgL_bufposz00_5426 = BgL_bufposz00_5411; 
BgL_zc3z04anonymousza33809ze3z87_5427:
if(
(BgL_forwardz00_5425==BgL_bufposz00_5426))
{ /* Llib/date.scm 877 */
if(
rgc_fill_buffer(BgL_iportz00_5423))
{ /* Llib/date.scm 877 */
long BgL_arg3812z00_5430;long BgL_arg3813z00_5431;
{ /* Llib/date.scm 877 */
long BgL_res5990z00_10203;
BgL_res5990z00_10203 = 
RGC_BUFFER_FORWARD(BgL_iportz00_5423); 
BgL_arg3812z00_5430 = BgL_res5990z00_10203; } 
{ /* Llib/date.scm 877 */
long BgL_res5991z00_10205;
BgL_res5991z00_10205 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_5423); 
BgL_arg3813z00_5431 = BgL_res5991z00_10205; } 
{ 
long BgL_bufposz00_20966;long BgL_forwardz00_20965;
BgL_forwardz00_20965 = BgL_arg3812z00_5430; 
BgL_bufposz00_20966 = BgL_arg3813z00_5431; 
BgL_bufposz00_5426 = BgL_bufposz00_20966; 
BgL_forwardz00_5425 = BgL_forwardz00_20965; 
goto BgL_zc3z04anonymousza33809ze3z87_5427;} }  else 
{ /* Llib/date.scm 877 */
BgL_matchz00_5562 = BgL_lastzd2matchzd2_5424; } }  else 
{ /* Llib/date.scm 877 */
int BgL_curz00_5432;
{ /* Llib/date.scm 877 */
int BgL_res5992z00_10208;
BgL_res5992z00_10208 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_5423, BgL_forwardz00_5425); 
BgL_curz00_5432 = BgL_res5992z00_10208; } 
{ /* Llib/date.scm 877 */

{ /* Llib/date.scm 877 */
bool_t BgL_test9052z00_20968;
if(
(
(long)(BgL_curz00_5432)>=((long)48)))
{ /* Llib/date.scm 877 */
BgL_test9052z00_20968 = 
(
(long)(BgL_curz00_5432)<((long)58))
; }  else 
{ /* Llib/date.scm 877 */
BgL_test9052z00_20968 = ((bool_t)0)
; } 
if(BgL_test9052z00_20968)
{ /* Llib/date.scm 877 */
long BgL_arg3816z00_5435;
BgL_arg3816z00_5435 = 
(((long)1)+BgL_forwardz00_5425); 
{ /* Llib/date.scm 877 */
long BgL_newzd2matchzd2_10215;
{ /* Llib/date.scm 877 */
long BgL_res5996z00_10218;
BgL_res5996z00_10218 = 
RGC_STOP_MATCH(BgL_iportz00_5423, BgL_arg3816z00_5435); BgL_res5996z00_10218; } 
BgL_newzd2matchzd2_10215 = ((long)0); 
BgL_matchz00_5562 = BgL_newzd2matchzd2_10215; } }  else 
{ /* Llib/date.scm 877 */
BgL_matchz00_5562 = BgL_lastzd2matchzd2_5424; } } } } }  else 
{ /* Llib/date.scm 877 */
BgL_matchz00_5562 = BgL_newzd2matchzd2_5413; } } } } } }  else 
{ /* Llib/date.scm 877 */
long BgL_arg3799z00_5401;
BgL_arg3799z00_5401 = 
(((long)1)+BgL_forwardz00_5391); 
{ /* Llib/date.scm 877 */
long BgL_newzd2matchzd2_10168;
{ /* Llib/date.scm 877 */
long BgL_res5977z00_10171;
BgL_res5977z00_10171 = 
RGC_STOP_MATCH(BgL_iportz00_5389, BgL_arg3799z00_5401); BgL_res5977z00_10171; } 
BgL_newzd2matchzd2_10168 = ((long)1); 
BgL_matchz00_5562 = BgL_newzd2matchzd2_10168; } } } } } 
RGC_SET_FILEPOS(BgL_iportz00_5342); 
switch( BgL_matchz00_5562) { case ((long)1) : 

{ /* Llib/date.scm 884 */
bool_t BgL_test9054z00_20981;
{ /* Llib/date.scm 884 */
obj_t BgL_arg3911z00_5580;
BgL_arg3911z00_5580 = 
BGl_thezd2failureze73z35zz__datez00(BgL_iportz00_5342); 
{ /* Llib/date.scm 884 */
bool_t BgL_res6005z00_10239;
BgL_res6005z00_10239 = 
EOF_OBJECTP(BgL_arg3911z00_5580); 
BgL_test9054z00_20981 = BgL_res6005z00_10239; } } 
if(BgL_test9054z00_20981)
{ /* Llib/date.scm 884 */
if(
BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(
BINT(((long)0))))
{ /* Llib/date.scm 232 */
BgL_aux7472z00_12550 = 
bgl_make_date(((BGL_LONGLONG_T)0), 
(int)(((long)0)), 
(int)(BgL_mmz00_5347), 
(int)(BgL_hhz00_5346), 
(int)(BgL_ddz00_5345), 
(int)(BgL_mmz00_5344), 
(int)(BgL_yyyyz00_5343), ((long)0), ((bool_t)1), 
(int)(((long)-1))); }  else 
{ /* Llib/date.scm 232 */
BgL_aux7472z00_12550 = 
bgl_make_date(((BGL_LONGLONG_T)0), 
(int)(((long)0)), 
(int)(BgL_mmz00_5347), 
(int)(BgL_hhz00_5346), 
(int)(BgL_ddz00_5345), 
(int)(BgL_mmz00_5344), 
(int)(BgL_yyyyz00_5343), ((long)0), ((bool_t)0), 
(int)(((long)-1))); } }  else 
{ /* Llib/date.scm 884 */
{ /* Llib/date.scm 888 */
obj_t BgL_arg3908z00_5577;
BgL_arg3908z00_5577 = 
BGl_thezd2failureze73z35zz__datez00(BgL_iportz00_5342); 
{ /* Llib/date.scm 888 */
unsigned char BgL_auxz00_21004;
{ /* Llib/date.scm 888 */
obj_t BgL_tmpz00_21005;
if(
CHARP(BgL_arg3908z00_5577))
{ /* Llib/date.scm 888 */
BgL_tmpz00_21005 = BgL_arg3908z00_5577
; }  else 
{ 
obj_t BgL_auxz00_21008;
BgL_auxz00_21008 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)38295)), BGl_string7520z00zz__datez00, BGl_string7747z00zz__datez00, BgL_arg3908z00_5577); 
FAILURE(BgL_auxz00_21008,BFALSE,BFALSE);} 
BgL_auxz00_21004 = 
CCHAR(BgL_tmpz00_21005); } 
BGl_unreadzd2charz12zc0zz__r4_input_6_10_2z00(BgL_auxz00_21004, BgL_iportz00_5342); } } 
BgL_iportz00_5929 = BgL_iportz00_5342; 
BgL_yyyyz00_5930 = BgL_yyyyz00_5343; 
BgL_mmz00_5931 = BgL_mmz00_5344; 
BgL_ddz00_5932 = BgL_ddz00_5345; 
BgL_hhz00_5933 = BgL_hhz00_5346; 
BgL_mmz00_5934 = BgL_mmz00_5347; 
BgL_ssz00_5935 = ((long)0); 
BgL_sssz00_5936 = ((BGL_LONGLONG_T)0); 
BgL_zc3z04anonymousza34065ze3z87_5937:
{ 
obj_t BgL_iportz00_5982;long BgL_lastzd2matchzd2_5983;long BgL_forwardz00_5984;long BgL_bufposz00_5985;obj_t BgL_iportz00_6013;long BgL_lastzd2matchzd2_6014;long BgL_forwardz00_6015;long BgL_bufposz00_6016;obj_t BgL_iportz00_6028;long BgL_lastzd2matchzd2_6029;long BgL_forwardz00_6030;long BgL_bufposz00_6031;obj_t BgL_iportz00_6043;long BgL_lastzd2matchzd2_6044;long BgL_forwardz00_6045;long BgL_bufposz00_6046;obj_t BgL_iportz00_6063;long BgL_lastzd2matchzd2_6064;long BgL_forwardz00_6065;long BgL_bufposz00_6066;
{ /* Llib/date.scm 835 */
bool_t BgL_test9057z00_21014;
{ /* Llib/date.scm 835 */
bool_t BgL_res5900z00_9991;
BgL_res5900z00_9991 = 
INPUT_PORT_CLOSEP(BgL_iportz00_5929); 
BgL_test9057z00_21014 = BgL_res5900z00_9991; } 
if(BgL_test9057z00_21014)
{ /* Llib/date.scm 835 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_arg4066z00_5975;
{ /* Llib/date.scm 835 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_new1077z00_5976;
{ /* Llib/date.scm 835 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_new1076z00_5979;
BgL_new1076z00_5979 = 
((BgL_z62iozd2closedzd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2closedzd2errorz62_bgl) ))); 
{ /* Llib/date.scm 835 */
long BgL_arg4069z00_5980;
{ /* Llib/date.scm 835 */
long BgL_res5901z00_9993;
BgL_res5901z00_9993 = 
BGL_CLASS_INDEX(BGl_z62iozd2closedzd2errorz62zz__objectz00); 
BgL_arg4069z00_5980 = BgL_res5901z00_9993; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1076z00_5979), BgL_arg4069z00_5980); } 
BgL_new1077z00_5976 = BgL_new1076z00_5979; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1077z00_5976)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1077z00_5976)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_21024;
{ /* Llib/date.scm 835 */
obj_t BgL_arg4067z00_5977;
{ /* Llib/date.scm 835 */
obj_t BgL_arg4068z00_5978;
{ /* Llib/date.scm 835 */
obj_t BgL_res5902z00_9997;
{ /* Llib/date.scm 835 */
obj_t BgL_classz00_9996;
BgL_classz00_9996 = BGl_z62iozd2closedzd2errorz62zz__objectz00; 
BgL_res5902z00_9997 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_9996); } 
BgL_arg4068z00_5978 = BgL_res5902z00_9997; } 
BgL_arg4067z00_5977 = 
VECTOR_REF(BgL_arg4068z00_5978,((long)2)); } 
{ /* Llib/date.scm 835 */
obj_t BgL_auxz00_21028;
if(
BGl_classzd2fieldzf3z21zz__objectz00(BgL_arg4067z00_5977))
{ /* Llib/date.scm 835 */
BgL_auxz00_21028 = BgL_arg4067z00_5977
; }  else 
{ 
obj_t BgL_auxz00_21031;
BgL_auxz00_21031 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)36576)), BGl_string7746z00zz__datez00, BGl_string7542z00zz__datez00, BgL_arg4067z00_5977); 
FAILURE(BgL_auxz00_21031,BFALSE,BFALSE);} 
BgL_auxz00_21024 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_auxz00_21028); } } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1077z00_5976)))->BgL_stackz00)=((obj_t)BgL_auxz00_21024),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1077z00_5976)))->BgL_procz00)=((obj_t)BGl_string7525z00zz__datez00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1077z00_5976)))->BgL_msgz00)=((obj_t)BGl_string7543z00zz__datez00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1077z00_5976)))->BgL_objz00)=((obj_t)BgL_iportz00_5929),BUNSPEC); 
BgL_arg4066z00_5975 = BgL_new1077z00_5976; } 
BgL_aux7472z00_12550 = 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg4066z00_5975)); }  else 
{ /* Llib/date.scm 835 */
{ /* Llib/date.scm 835 */
long BgL_res5877z00_9945;
BgL_res5877z00_9945 = 
RGC_START_MATCH(BgL_iportz00_5929); BgL_res5877z00_9945; } 
{ /* Llib/date.scm 835 */
long BgL_matchz00_6202;
{ /* Llib/date.scm 835 */
long BgL_arg4226z00_6246;long BgL_arg4227z00_6247;
{ /* Llib/date.scm 835 */
long BgL_res5878z00_9947;
BgL_res5878z00_9947 = 
RGC_BUFFER_FORWARD(BgL_iportz00_5929); 
BgL_arg4226z00_6246 = BgL_res5878z00_9947; } 
{ /* Llib/date.scm 835 */
long BgL_res5879z00_9949;
BgL_res5879z00_9949 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_5929); 
BgL_arg4227z00_6247 = BgL_res5879z00_9949; } 
BgL_iportz00_5982 = BgL_iportz00_5929; 
BgL_lastzd2matchzd2_5983 = ((long)3); 
BgL_forwardz00_5984 = BgL_arg4226z00_6246; 
BgL_bufposz00_5985 = BgL_arg4227z00_6247; 
BgL_zc3z04anonymousza34071ze3z87_5986:
if(
(BgL_forwardz00_5984==BgL_bufposz00_5985))
{ /* Llib/date.scm 835 */
if(
rgc_fill_buffer(BgL_iportz00_5982))
{ /* Llib/date.scm 835 */
long BgL_arg4074z00_5989;long BgL_arg4075z00_5990;
{ /* Llib/date.scm 835 */
long BgL_res5820z00_9803;
BgL_res5820z00_9803 = 
RGC_BUFFER_FORWARD(BgL_iportz00_5982); 
BgL_arg4074z00_5989 = BgL_res5820z00_9803; } 
{ /* Llib/date.scm 835 */
long BgL_res5821z00_9805;
BgL_res5821z00_9805 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_5982); 
BgL_arg4075z00_5990 = BgL_res5821z00_9805; } 
{ 
long BgL_bufposz00_21055;long BgL_forwardz00_21054;
BgL_forwardz00_21054 = BgL_arg4074z00_5989; 
BgL_bufposz00_21055 = BgL_arg4075z00_5990; 
BgL_bufposz00_5985 = BgL_bufposz00_21055; 
BgL_forwardz00_5984 = BgL_forwardz00_21054; 
goto BgL_zc3z04anonymousza34071ze3z87_5986;} }  else 
{ /* Llib/date.scm 835 */
BgL_matchz00_6202 = BgL_lastzd2matchzd2_5983; } }  else 
{ /* Llib/date.scm 835 */
int BgL_curz00_5991;
{ /* Llib/date.scm 835 */
int BgL_res5822z00_9808;
BgL_res5822z00_9808 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_5982, BgL_forwardz00_5984); 
BgL_curz00_5991 = BgL_res5822z00_9808; } 
{ /* Llib/date.scm 835 */

{ /* Llib/date.scm 835 */
bool_t BgL_test9061z00_21057;
if(
(
(long)(BgL_curz00_5991)==((long)90)))
{ /* Llib/date.scm 835 */
BgL_test9061z00_21057 = ((bool_t)1)
; }  else 
{ /* Llib/date.scm 835 */
BgL_test9061z00_21057 = 
(
(long)(BgL_curz00_5991)==((long)122))
; } 
if(BgL_test9061z00_21057)
{ /* Llib/date.scm 835 */
long BgL_arg4078z00_5994;
BgL_arg4078z00_5994 = 
(((long)1)+BgL_forwardz00_5984); 
{ /* Llib/date.scm 835 */
long BgL_newzd2matchzd2_9815;
{ /* Llib/date.scm 835 */
long BgL_res5826z00_9818;
BgL_res5826z00_9818 = 
RGC_STOP_MATCH(BgL_iportz00_5982, BgL_arg4078z00_5994); BgL_res5826z00_9818; } 
BgL_newzd2matchzd2_9815 = ((long)0); 
BgL_matchz00_6202 = BgL_newzd2matchzd2_9815; } }  else 
{ /* Llib/date.scm 835 */
if(
(
(long)(BgL_curz00_5991)==((long)45)))
{ /* Llib/date.scm 835 */
BgL_iportz00_6028 = BgL_iportz00_5982; 
BgL_lastzd2matchzd2_6029 = BgL_lastzd2matchzd2_5983; 
BgL_forwardz00_6030 = 
(((long)1)+BgL_forwardz00_5984); 
BgL_bufposz00_6031 = BgL_bufposz00_5985; 
BgL_zc3z04anonymousza34094ze3z87_6032:
{ /* Llib/date.scm 835 */
long BgL_newzd2matchzd2_6033;
{ /* Llib/date.scm 835 */
long BgL_res5844z00_9864;
BgL_res5844z00_9864 = 
RGC_STOP_MATCH(BgL_iportz00_6028, BgL_forwardz00_6030); BgL_res5844z00_9864; } 
BgL_newzd2matchzd2_6033 = ((long)3); 
if(
(BgL_forwardz00_6030==BgL_bufposz00_6031))
{ /* Llib/date.scm 835 */
if(
rgc_fill_buffer(BgL_iportz00_6028))
{ /* Llib/date.scm 835 */
long BgL_arg4097z00_6036;long BgL_arg4098z00_6037;
{ /* Llib/date.scm 835 */
long BgL_res5847z00_9871;
BgL_res5847z00_9871 = 
RGC_BUFFER_FORWARD(BgL_iportz00_6028); 
BgL_arg4097z00_6036 = BgL_res5847z00_9871; } 
{ /* Llib/date.scm 835 */
long BgL_res5848z00_9873;
BgL_res5848z00_9873 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_6028); 
BgL_arg4098z00_6037 = BgL_res5848z00_9873; } 
{ 
long BgL_bufposz00_21076;long BgL_forwardz00_21075;
BgL_forwardz00_21075 = BgL_arg4097z00_6036; 
BgL_bufposz00_21076 = BgL_arg4098z00_6037; 
BgL_bufposz00_6031 = BgL_bufposz00_21076; 
BgL_forwardz00_6030 = BgL_forwardz00_21075; 
goto BgL_zc3z04anonymousza34094ze3z87_6032;} }  else 
{ /* Llib/date.scm 835 */
BgL_matchz00_6202 = BgL_newzd2matchzd2_6033; } }  else 
{ /* Llib/date.scm 835 */
int BgL_curz00_6038;
{ /* Llib/date.scm 835 */
int BgL_res5849z00_9876;
BgL_res5849z00_9876 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_6028, BgL_forwardz00_6030); 
BgL_curz00_6038 = BgL_res5849z00_9876; } 
{ /* Llib/date.scm 835 */

{ /* Llib/date.scm 835 */
bool_t BgL_test9066z00_21078;
if(
(
(long)(BgL_curz00_6038)>=((long)48)))
{ /* Llib/date.scm 835 */
BgL_test9066z00_21078 = 
(
(long)(BgL_curz00_6038)<((long)58))
; }  else 
{ /* Llib/date.scm 835 */
BgL_test9066z00_21078 = ((bool_t)0)
; } 
if(BgL_test9066z00_21078)
{ /* Llib/date.scm 835 */
BgL_iportz00_6043 = BgL_iportz00_6028; 
BgL_lastzd2matchzd2_6044 = BgL_newzd2matchzd2_6033; 
BgL_forwardz00_6045 = 
(((long)1)+BgL_forwardz00_6030); 
BgL_bufposz00_6046 = BgL_bufposz00_6031; 
BgL_zc3z04anonymousza34102ze3z87_6047:
if(
(BgL_forwardz00_6045==BgL_bufposz00_6046))
{ /* Llib/date.scm 835 */
if(
rgc_fill_buffer(BgL_iportz00_6043))
{ /* Llib/date.scm 835 */
long BgL_arg4105z00_6050;long BgL_arg4106z00_6051;
{ /* Llib/date.scm 835 */
long BgL_res5855z00_9889;
BgL_res5855z00_9889 = 
RGC_BUFFER_FORWARD(BgL_iportz00_6043); 
BgL_arg4105z00_6050 = BgL_res5855z00_9889; } 
{ /* Llib/date.scm 835 */
long BgL_res5856z00_9891;
BgL_res5856z00_9891 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_6043); 
BgL_arg4106z00_6051 = BgL_res5856z00_9891; } 
{ 
long BgL_bufposz00_21091;long BgL_forwardz00_21090;
BgL_forwardz00_21090 = BgL_arg4105z00_6050; 
BgL_bufposz00_21091 = BgL_arg4106z00_6051; 
BgL_bufposz00_6046 = BgL_bufposz00_21091; 
BgL_forwardz00_6045 = BgL_forwardz00_21090; 
goto BgL_zc3z04anonymousza34102ze3z87_6047;} }  else 
{ /* Llib/date.scm 835 */
BgL_matchz00_6202 = BgL_lastzd2matchzd2_6044; } }  else 
{ /* Llib/date.scm 835 */
int BgL_curz00_6052;
{ /* Llib/date.scm 835 */
int BgL_res5857z00_9894;
BgL_res5857z00_9894 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_6043, BgL_forwardz00_6045); 
BgL_curz00_6052 = BgL_res5857z00_9894; } 
{ /* Llib/date.scm 835 */

{ /* Llib/date.scm 835 */
bool_t BgL_test9070z00_21093;
if(
(
(long)(BgL_curz00_6052)>=((long)48)))
{ /* Llib/date.scm 835 */
BgL_test9070z00_21093 = 
(
(long)(BgL_curz00_6052)<((long)58))
; }  else 
{ /* Llib/date.scm 835 */
BgL_test9070z00_21093 = ((bool_t)0)
; } 
if(BgL_test9070z00_21093)
{ /* Llib/date.scm 835 */
long BgL_arg4109z00_6055;
BgL_arg4109z00_6055 = 
(((long)1)+BgL_forwardz00_6045); 
{ /* Llib/date.scm 835 */
long BgL_newzd2matchzd2_9901;
{ /* Llib/date.scm 835 */
long BgL_res5861z00_9904;
BgL_res5861z00_9904 = 
RGC_STOP_MATCH(BgL_iportz00_6043, BgL_arg4109z00_6055); BgL_res5861z00_9904; } 
BgL_newzd2matchzd2_9901 = ((long)2); 
BgL_matchz00_6202 = BgL_newzd2matchzd2_9901; } }  else 
{ /* Llib/date.scm 835 */
BgL_matchz00_6202 = BgL_lastzd2matchzd2_6044; } } } } }  else 
{ /* Llib/date.scm 835 */
BgL_matchz00_6202 = BgL_newzd2matchzd2_6033; } } } } } }  else 
{ /* Llib/date.scm 835 */
if(
(
(long)(BgL_curz00_5991)==((long)43)))
{ /* Llib/date.scm 835 */
BgL_iportz00_6013 = BgL_iportz00_5982; 
BgL_lastzd2matchzd2_6014 = BgL_lastzd2matchzd2_5983; 
BgL_forwardz00_6015 = 
(((long)1)+BgL_forwardz00_5984); 
BgL_bufposz00_6016 = BgL_bufposz00_5985; 
BgL_zc3z04anonymousza34086ze3z87_6017:
{ /* Llib/date.scm 835 */
long BgL_newzd2matchzd2_6018;
{ /* Llib/date.scm 835 */
long BgL_res5835z00_9843;
BgL_res5835z00_9843 = 
RGC_STOP_MATCH(BgL_iportz00_6013, BgL_forwardz00_6015); BgL_res5835z00_9843; } 
BgL_newzd2matchzd2_6018 = ((long)3); 
if(
(BgL_forwardz00_6015==BgL_bufposz00_6016))
{ /* Llib/date.scm 835 */
if(
rgc_fill_buffer(BgL_iportz00_6013))
{ /* Llib/date.scm 835 */
long BgL_arg4089z00_6021;long BgL_arg4090z00_6022;
{ /* Llib/date.scm 835 */
long BgL_res5838z00_9850;
BgL_res5838z00_9850 = 
RGC_BUFFER_FORWARD(BgL_iportz00_6013); 
BgL_arg4089z00_6021 = BgL_res5838z00_9850; } 
{ /* Llib/date.scm 835 */
long BgL_res5839z00_9852;
BgL_res5839z00_9852 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_6013); 
BgL_arg4090z00_6022 = BgL_res5839z00_9852; } 
{ 
long BgL_bufposz00_21114;long BgL_forwardz00_21113;
BgL_forwardz00_21113 = BgL_arg4089z00_6021; 
BgL_bufposz00_21114 = BgL_arg4090z00_6022; 
BgL_bufposz00_6016 = BgL_bufposz00_21114; 
BgL_forwardz00_6015 = BgL_forwardz00_21113; 
goto BgL_zc3z04anonymousza34086ze3z87_6017;} }  else 
{ /* Llib/date.scm 835 */
BgL_matchz00_6202 = BgL_newzd2matchzd2_6018; } }  else 
{ /* Llib/date.scm 835 */
int BgL_curz00_6023;
{ /* Llib/date.scm 835 */
int BgL_res5840z00_9855;
BgL_res5840z00_9855 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_6013, BgL_forwardz00_6015); 
BgL_curz00_6023 = BgL_res5840z00_9855; } 
{ /* Llib/date.scm 835 */

{ /* Llib/date.scm 835 */
bool_t BgL_test9075z00_21116;
if(
(
(long)(BgL_curz00_6023)>=((long)48)))
{ /* Llib/date.scm 835 */
BgL_test9075z00_21116 = 
(
(long)(BgL_curz00_6023)<((long)58))
; }  else 
{ /* Llib/date.scm 835 */
BgL_test9075z00_21116 = ((bool_t)0)
; } 
if(BgL_test9075z00_21116)
{ /* Llib/date.scm 835 */
BgL_iportz00_6063 = BgL_iportz00_6013; 
BgL_lastzd2matchzd2_6064 = BgL_newzd2matchzd2_6018; 
BgL_forwardz00_6065 = 
(((long)1)+BgL_forwardz00_6015); 
BgL_bufposz00_6066 = BgL_bufposz00_6016; 
BgL_zc3z04anonymousza34111ze3z87_6067:
if(
(BgL_forwardz00_6065==BgL_bufposz00_6066))
{ /* Llib/date.scm 835 */
if(
rgc_fill_buffer(BgL_iportz00_6063))
{ /* Llib/date.scm 835 */
long BgL_arg4114z00_6070;long BgL_arg4115z00_6071;
{ /* Llib/date.scm 835 */
long BgL_res5865z00_9915;
BgL_res5865z00_9915 = 
RGC_BUFFER_FORWARD(BgL_iportz00_6063); 
BgL_arg4114z00_6070 = BgL_res5865z00_9915; } 
{ /* Llib/date.scm 835 */
long BgL_res5866z00_9917;
BgL_res5866z00_9917 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_6063); 
BgL_arg4115z00_6071 = BgL_res5866z00_9917; } 
{ 
long BgL_bufposz00_21129;long BgL_forwardz00_21128;
BgL_forwardz00_21128 = BgL_arg4114z00_6070; 
BgL_bufposz00_21129 = BgL_arg4115z00_6071; 
BgL_bufposz00_6066 = BgL_bufposz00_21129; 
BgL_forwardz00_6065 = BgL_forwardz00_21128; 
goto BgL_zc3z04anonymousza34111ze3z87_6067;} }  else 
{ /* Llib/date.scm 835 */
BgL_matchz00_6202 = BgL_lastzd2matchzd2_6064; } }  else 
{ /* Llib/date.scm 835 */
int BgL_curz00_6072;
{ /* Llib/date.scm 835 */
int BgL_res5867z00_9920;
BgL_res5867z00_9920 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_6063, BgL_forwardz00_6065); 
BgL_curz00_6072 = BgL_res5867z00_9920; } 
{ /* Llib/date.scm 835 */

{ /* Llib/date.scm 835 */
bool_t BgL_test9079z00_21131;
if(
(
(long)(BgL_curz00_6072)>=((long)48)))
{ /* Llib/date.scm 835 */
BgL_test9079z00_21131 = 
(
(long)(BgL_curz00_6072)<((long)58))
; }  else 
{ /* Llib/date.scm 835 */
BgL_test9079z00_21131 = ((bool_t)0)
; } 
if(BgL_test9079z00_21131)
{ /* Llib/date.scm 835 */
long BgL_arg4118z00_6075;
BgL_arg4118z00_6075 = 
(((long)1)+BgL_forwardz00_6065); 
{ /* Llib/date.scm 835 */
long BgL_newzd2matchzd2_9927;
{ /* Llib/date.scm 835 */
long BgL_res5871z00_9930;
BgL_res5871z00_9930 = 
RGC_STOP_MATCH(BgL_iportz00_6063, BgL_arg4118z00_6075); BgL_res5871z00_9930; } 
BgL_newzd2matchzd2_9927 = ((long)1); 
BgL_matchz00_6202 = BgL_newzd2matchzd2_9927; } }  else 
{ /* Llib/date.scm 835 */
BgL_matchz00_6202 = BgL_lastzd2matchzd2_6064; } } } } }  else 
{ /* Llib/date.scm 835 */
BgL_matchz00_6202 = BgL_newzd2matchzd2_6018; } } } } } }  else 
{ /* Llib/date.scm 835 */
long BgL_arg4083z00_5999;
BgL_arg4083z00_5999 = 
(((long)1)+BgL_forwardz00_5984); 
{ /* Llib/date.scm 835 */
long BgL_newzd2matchzd2_9829;
{ /* Llib/date.scm 835 */
long BgL_res5832z00_9832;
BgL_res5832z00_9832 = 
RGC_STOP_MATCH(BgL_iportz00_5982, BgL_arg4083z00_5999); BgL_res5832z00_9832; } 
BgL_newzd2matchzd2_9829 = ((long)3); 
BgL_matchz00_6202 = BgL_newzd2matchzd2_9829; } } } } } } } } 
RGC_SET_FILEPOS(BgL_iportz00_5929); 
switch( BgL_matchz00_6202) { case ((long)3) : 

{ /* Llib/date.scm 850 */
bool_t BgL_test9081z00_21144;
{ /* Llib/date.scm 850 */
obj_t BgL_arg4212z00_6219;
BgL_arg4212z00_6219 = 
BGl_thezd2failureze71z35zz__datez00(BgL_iportz00_5929); 
{ /* Llib/date.scm 850 */
bool_t BgL_res5880z00_9951;
BgL_res5880z00_9951 = 
EOF_OBJECTP(BgL_arg4212z00_6219); 
BgL_test9081z00_21144 = BgL_res5880z00_9951; } } 
if(BgL_test9081z00_21144)
{ /* Llib/date.scm 850 */
if(
BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(
BINT(((long)0))))
{ /* Llib/date.scm 232 */
BgL_aux7472z00_12550 = 
bgl_make_date(BgL_sssz00_5936, 
(int)(BgL_ssz00_5935), 
(int)(BgL_mmz00_5934), 
(int)(BgL_hhz00_5933), 
(int)(BgL_ddz00_5932), 
(int)(BgL_mmz00_5931), 
(int)(BgL_yyyyz00_5930), ((long)0), ((bool_t)1), 
(int)(((long)-1))); }  else 
{ /* Llib/date.scm 232 */
BgL_aux7472z00_12550 = 
bgl_make_date(BgL_sssz00_5936, 
(int)(BgL_ssz00_5935), 
(int)(BgL_mmz00_5934), 
(int)(BgL_hhz00_5933), 
(int)(BgL_ddz00_5932), 
(int)(BgL_mmz00_5931), 
(int)(BgL_yyyyz00_5930), ((long)0), ((bool_t)0), 
(int)(((long)-1))); } }  else 
{ /* Llib/date.scm 850 */
BgL_aux7472z00_12550 = 
BGl_parsezd2errorzd2zz__datez00(BGl_string7744z00zz__datez00, BGl_string7544z00zz__datez00, 
BGl_thezd2failureze71z35zz__datez00(BgL_iportz00_5929), BgL_iportz00_5929); } } break;case ((long)2) : 

{ /* Llib/date.scm 845 */
long BgL_b1z00_6220;long BgL_b2z00_6221;
{ /* Llib/date.scm 845 */
int BgL_arg4218z00_6227;
{ /* Llib/date.scm 835 */
int BgL_res5882z00_9955;
{ /* Llib/date.scm 835 */
int BgL_tmpz00_21168;
BgL_tmpz00_21168 = 
(int)(((long)1)); 
BgL_res5882z00_9955 = 
RGC_BUFFER_BYTE_REF(BgL_iportz00_5929, BgL_tmpz00_21168); } 
BgL_arg4218z00_6227 = BgL_res5882z00_9955; } 
BgL_b1z00_6220 = 
(
(long)(BgL_arg4218z00_6227)-((long)48)); } 
{ /* Llib/date.scm 846 */
int BgL_arg4219z00_6228;
{ /* Llib/date.scm 835 */
int BgL_res5884z00_9959;
{ /* Llib/date.scm 835 */
int BgL_tmpz00_21173;
BgL_tmpz00_21173 = 
(int)(((long)2)); 
BgL_res5884z00_9959 = 
RGC_BUFFER_BYTE_REF(BgL_iportz00_5929, BgL_tmpz00_21173); } 
BgL_arg4219z00_6228 = BgL_res5884z00_9959; } 
BgL_b2z00_6221 = 
(
(long)(BgL_arg4219z00_6228)-((long)48)); } 
BgL_iportz00_6286 = BgL_iportz00_5929; 
BgL_yyyyz00_6287 = BgL_yyyyz00_5930; 
BgL_mmz00_6288 = BgL_mmz00_5931; 
BgL_ddz00_6289 = BgL_ddz00_5932; 
BgL_hhz00_6290 = BgL_hhz00_5933; 
BgL_mmz00_6291 = BgL_mmz00_5934; 
BgL_ssz00_6292 = BgL_ssz00_5935; 
BgL_sssz00_6293 = BgL_sssz00_5936; 
BgL_za7hhza7_6294 = 
NEG(
(((long)3600)*
(
(BgL_b1z00_6220*((long)10))+BgL_b2z00_6221))); 
BgL_zc3z04anonymousza34228ze3z87_6295:
{ 
obj_t BgL_iportz00_6336;long BgL_lastzd2matchzd2_6337;long BgL_forwardz00_6338;long BgL_bufposz00_6339;obj_t BgL_iportz00_6355;long BgL_lastzd2matchzd2_6356;long BgL_forwardz00_6357;long BgL_bufposz00_6358;obj_t BgL_iportz00_6370;long BgL_lastzd2matchzd2_6371;long BgL_forwardz00_6372;long BgL_bufposz00_6373;
{ /* Llib/date.scm 818 */
bool_t BgL_test9083z00_21178;
{ /* Llib/date.scm 818 */
bool_t BgL_res5814z00_9788;
BgL_res5814z00_9788 = 
INPUT_PORT_CLOSEP(BgL_iportz00_6286); 
BgL_test9083z00_21178 = BgL_res5814z00_9788; } 
if(BgL_test9083z00_21178)
{ /* Llib/date.scm 818 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_arg4229z00_6329;
{ /* Llib/date.scm 818 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_new1077z00_6330;
{ /* Llib/date.scm 818 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_new1076z00_6333;
BgL_new1076z00_6333 = 
((BgL_z62iozd2closedzd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2closedzd2errorz62_bgl) ))); 
{ /* Llib/date.scm 818 */
long BgL_arg4232z00_6334;
{ /* Llib/date.scm 818 */
long BgL_res5815z00_9790;
BgL_res5815z00_9790 = 
BGL_CLASS_INDEX(BGl_z62iozd2closedzd2errorz62zz__objectz00); 
BgL_arg4232z00_6334 = BgL_res5815z00_9790; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1076z00_6333), BgL_arg4232z00_6334); } 
BgL_new1077z00_6330 = BgL_new1076z00_6333; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1077z00_6330)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1077z00_6330)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_21188;
{ /* Llib/date.scm 818 */
obj_t BgL_arg4230z00_6331;
{ /* Llib/date.scm 818 */
obj_t BgL_arg4231z00_6332;
{ /* Llib/date.scm 818 */
obj_t BgL_res5816z00_9794;
{ /* Llib/date.scm 818 */
obj_t BgL_classz00_9793;
BgL_classz00_9793 = BGl_z62iozd2closedzd2errorz62zz__objectz00; 
BgL_res5816z00_9794 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_9793); } 
BgL_arg4231z00_6332 = BgL_res5816z00_9794; } 
BgL_arg4230z00_6331 = 
VECTOR_REF(BgL_arg4231z00_6332,((long)2)); } 
{ /* Llib/date.scm 818 */
obj_t BgL_auxz00_21192;
if(
BGl_classzd2fieldzf3z21zz__objectz00(BgL_arg4230z00_6331))
{ /* Llib/date.scm 818 */
BgL_auxz00_21192 = BgL_arg4230z00_6331
; }  else 
{ 
obj_t BgL_auxz00_21195;
BgL_auxz00_21195 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)35984)), BGl_string7745z00zz__datez00, BGl_string7542z00zz__datez00, BgL_arg4230z00_6331); 
FAILURE(BgL_auxz00_21195,BFALSE,BFALSE);} 
BgL_auxz00_21188 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_auxz00_21192); } } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1077z00_6330)))->BgL_stackz00)=((obj_t)BgL_auxz00_21188),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1077z00_6330)))->BgL_procz00)=((obj_t)BGl_string7525z00zz__datez00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1077z00_6330)))->BgL_msgz00)=((obj_t)BGl_string7543z00zz__datez00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1077z00_6330)))->BgL_objz00)=((obj_t)BgL_iportz00_6286),BUNSPEC); 
BgL_arg4229z00_6329 = BgL_new1077z00_6330; } 
BgL_aux7472z00_12550 = 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg4229z00_6329)); }  else 
{ /* Llib/date.scm 818 */
{ /* Llib/date.scm 818 */
long BgL_res5795z00_9746;
BgL_res5795z00_9746 = 
RGC_START_MATCH(BgL_iportz00_6286); BgL_res5795z00_9746; } 
{ /* Llib/date.scm 818 */
long BgL_matchz00_6509;
{ /* Llib/date.scm 818 */
long BgL_arg4362z00_6548;long BgL_arg4363z00_6549;
{ /* Llib/date.scm 818 */
long BgL_res5796z00_9748;
BgL_res5796z00_9748 = 
RGC_BUFFER_FORWARD(BgL_iportz00_6286); 
BgL_arg4362z00_6548 = BgL_res5796z00_9748; } 
{ /* Llib/date.scm 818 */
long BgL_res5797z00_9750;
BgL_res5797z00_9750 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_6286); 
BgL_arg4363z00_6549 = BgL_res5797z00_9750; } 
BgL_iportz00_6336 = BgL_iportz00_6286; 
BgL_lastzd2matchzd2_6337 = ((long)1); 
BgL_forwardz00_6338 = BgL_arg4362z00_6548; 
BgL_bufposz00_6339 = BgL_arg4363z00_6549; 
BgL_zc3z04anonymousza34234ze3z87_6340:
if(
(BgL_forwardz00_6338==BgL_bufposz00_6339))
{ /* Llib/date.scm 818 */
if(
rgc_fill_buffer(BgL_iportz00_6336))
{ /* Llib/date.scm 818 */
long BgL_arg4237z00_6343;long BgL_arg4238z00_6344;
{ /* Llib/date.scm 818 */
long BgL_res5764z00_9669;
BgL_res5764z00_9669 = 
RGC_BUFFER_FORWARD(BgL_iportz00_6336); 
BgL_arg4237z00_6343 = BgL_res5764z00_9669; } 
{ /* Llib/date.scm 818 */
long BgL_res5765z00_9671;
BgL_res5765z00_9671 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_6336); 
BgL_arg4238z00_6344 = BgL_res5765z00_9671; } 
{ 
long BgL_bufposz00_21219;long BgL_forwardz00_21218;
BgL_forwardz00_21218 = BgL_arg4237z00_6343; 
BgL_bufposz00_21219 = BgL_arg4238z00_6344; 
BgL_bufposz00_6339 = BgL_bufposz00_21219; 
BgL_forwardz00_6338 = BgL_forwardz00_21218; 
goto BgL_zc3z04anonymousza34234ze3z87_6340;} }  else 
{ /* Llib/date.scm 818 */
BgL_matchz00_6509 = BgL_lastzd2matchzd2_6337; } }  else 
{ /* Llib/date.scm 818 */
int BgL_curz00_6345;
{ /* Llib/date.scm 818 */
int BgL_res5766z00_9674;
BgL_res5766z00_9674 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_6336, BgL_forwardz00_6338); 
BgL_curz00_6345 = BgL_res5766z00_9674; } 
{ /* Llib/date.scm 818 */

if(
(
(long)(BgL_curz00_6345)==((long)58)))
{ /* Llib/date.scm 818 */
BgL_iportz00_6355 = BgL_iportz00_6336; 
BgL_lastzd2matchzd2_6356 = BgL_lastzd2matchzd2_6337; 
BgL_forwardz00_6357 = 
(((long)1)+BgL_forwardz00_6338); 
BgL_bufposz00_6358 = BgL_bufposz00_6339; 
BgL_zc3z04anonymousza34243ze3z87_6359:
{ /* Llib/date.scm 818 */
long BgL_newzd2matchzd2_6360;
{ /* Llib/date.scm 818 */
long BgL_res5772z00_9691;
BgL_res5772z00_9691 = 
RGC_STOP_MATCH(BgL_iportz00_6355, BgL_forwardz00_6357); BgL_res5772z00_9691; } 
BgL_newzd2matchzd2_6360 = ((long)1); 
if(
(BgL_forwardz00_6357==BgL_bufposz00_6358))
{ /* Llib/date.scm 818 */
if(
rgc_fill_buffer(BgL_iportz00_6355))
{ /* Llib/date.scm 818 */
long BgL_arg4246z00_6363;long BgL_arg4247z00_6364;
{ /* Llib/date.scm 818 */
long BgL_res5775z00_9698;
BgL_res5775z00_9698 = 
RGC_BUFFER_FORWARD(BgL_iportz00_6355); 
BgL_arg4246z00_6363 = BgL_res5775z00_9698; } 
{ /* Llib/date.scm 818 */
long BgL_res5776z00_9700;
BgL_res5776z00_9700 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_6355); 
BgL_arg4247z00_6364 = BgL_res5776z00_9700; } 
{ 
long BgL_bufposz00_21232;long BgL_forwardz00_21231;
BgL_forwardz00_21231 = BgL_arg4246z00_6363; 
BgL_bufposz00_21232 = BgL_arg4247z00_6364; 
BgL_bufposz00_6358 = BgL_bufposz00_21232; 
BgL_forwardz00_6357 = BgL_forwardz00_21231; 
goto BgL_zc3z04anonymousza34243ze3z87_6359;} }  else 
{ /* Llib/date.scm 818 */
BgL_matchz00_6509 = BgL_newzd2matchzd2_6360; } }  else 
{ /* Llib/date.scm 818 */
int BgL_curz00_6365;
{ /* Llib/date.scm 818 */
int BgL_res5777z00_9703;
BgL_res5777z00_9703 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_6355, BgL_forwardz00_6357); 
BgL_curz00_6365 = BgL_res5777z00_9703; } 
{ /* Llib/date.scm 818 */

{ /* Llib/date.scm 818 */
bool_t BgL_test9090z00_21234;
if(
(
(long)(BgL_curz00_6365)>=((long)48)))
{ /* Llib/date.scm 818 */
BgL_test9090z00_21234 = 
(
(long)(BgL_curz00_6365)<((long)58))
; }  else 
{ /* Llib/date.scm 818 */
BgL_test9090z00_21234 = ((bool_t)0)
; } 
if(BgL_test9090z00_21234)
{ /* Llib/date.scm 818 */
BgL_iportz00_6370 = BgL_iportz00_6355; 
BgL_lastzd2matchzd2_6371 = BgL_newzd2matchzd2_6360; 
BgL_forwardz00_6372 = 
(((long)1)+BgL_forwardz00_6357); 
BgL_bufposz00_6373 = BgL_bufposz00_6358; 
BgL_zc3z04anonymousza34251ze3z87_6374:
if(
(BgL_forwardz00_6372==BgL_bufposz00_6373))
{ /* Llib/date.scm 818 */
if(
rgc_fill_buffer(BgL_iportz00_6370))
{ /* Llib/date.scm 818 */
long BgL_arg4254z00_6377;long BgL_arg4255z00_6378;
{ /* Llib/date.scm 818 */
long BgL_res5783z00_9716;
BgL_res5783z00_9716 = 
RGC_BUFFER_FORWARD(BgL_iportz00_6370); 
BgL_arg4254z00_6377 = BgL_res5783z00_9716; } 
{ /* Llib/date.scm 818 */
long BgL_res5784z00_9718;
BgL_res5784z00_9718 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_6370); 
BgL_arg4255z00_6378 = BgL_res5784z00_9718; } 
{ 
long BgL_bufposz00_21247;long BgL_forwardz00_21246;
BgL_forwardz00_21246 = BgL_arg4254z00_6377; 
BgL_bufposz00_21247 = BgL_arg4255z00_6378; 
BgL_bufposz00_6373 = BgL_bufposz00_21247; 
BgL_forwardz00_6372 = BgL_forwardz00_21246; 
goto BgL_zc3z04anonymousza34251ze3z87_6374;} }  else 
{ /* Llib/date.scm 818 */
BgL_matchz00_6509 = BgL_lastzd2matchzd2_6371; } }  else 
{ /* Llib/date.scm 818 */
int BgL_curz00_6379;
{ /* Llib/date.scm 818 */
int BgL_res5785z00_9721;
BgL_res5785z00_9721 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_6370, BgL_forwardz00_6372); 
BgL_curz00_6379 = BgL_res5785z00_9721; } 
{ /* Llib/date.scm 818 */

{ /* Llib/date.scm 818 */
bool_t BgL_test9094z00_21249;
if(
(
(long)(BgL_curz00_6379)>=((long)48)))
{ /* Llib/date.scm 818 */
BgL_test9094z00_21249 = 
(
(long)(BgL_curz00_6379)<((long)58))
; }  else 
{ /* Llib/date.scm 818 */
BgL_test9094z00_21249 = ((bool_t)0)
; } 
if(BgL_test9094z00_21249)
{ /* Llib/date.scm 818 */
long BgL_arg4258z00_6382;
BgL_arg4258z00_6382 = 
(((long)1)+BgL_forwardz00_6372); 
{ /* Llib/date.scm 818 */
long BgL_newzd2matchzd2_9728;
{ /* Llib/date.scm 818 */
long BgL_res5789z00_9731;
BgL_res5789z00_9731 = 
RGC_STOP_MATCH(BgL_iportz00_6370, BgL_arg4258z00_6382); BgL_res5789z00_9731; } 
BgL_newzd2matchzd2_9728 = ((long)0); 
BgL_matchz00_6509 = BgL_newzd2matchzd2_9728; } }  else 
{ /* Llib/date.scm 818 */
BgL_matchz00_6509 = BgL_lastzd2matchzd2_6371; } } } } }  else 
{ /* Llib/date.scm 818 */
BgL_matchz00_6509 = BgL_newzd2matchzd2_6360; } } } } } }  else 
{ /* Llib/date.scm 818 */
long BgL_arg4241z00_6348;
BgL_arg4241z00_6348 = 
(((long)1)+BgL_forwardz00_6338); 
{ /* Llib/date.scm 818 */
long BgL_newzd2matchzd2_9681;
{ /* Llib/date.scm 818 */
long BgL_res5770z00_9684;
BgL_res5770z00_9684 = 
RGC_STOP_MATCH(BgL_iportz00_6336, BgL_arg4241z00_6348); BgL_res5770z00_9684; } 
BgL_newzd2matchzd2_9681 = ((long)1); 
BgL_matchz00_6509 = BgL_newzd2matchzd2_9681; } } } } } 
RGC_SET_FILEPOS(BgL_iportz00_6286); 
switch( BgL_matchz00_6509) { case ((long)1) : 

{ /* Llib/date.scm 828 */
bool_t BgL_test9096z00_21262;
{ /* Llib/date.scm 828 */
obj_t BgL_arg4352z00_6526;
BgL_arg4352z00_6526 = 
BGl_thezd2failureze70z35zz__datez00(BgL_iportz00_6286); 
{ /* Llib/date.scm 828 */
bool_t BgL_res5798z00_9752;
BgL_res5798z00_9752 = 
EOF_OBJECTP(BgL_arg4352z00_6526); 
BgL_test9096z00_21262 = BgL_res5798z00_9752; } } 
if(BgL_test9096z00_21262)
{ /* Llib/date.scm 828 */
if(
BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(
BINT(BgL_za7hhza7_6294)))
{ /* Llib/date.scm 232 */
BgL_aux7472z00_12550 = 
bgl_make_date(BgL_sssz00_6293, 
(int)(BgL_ssz00_6292), 
(int)(BgL_mmz00_6291), 
(int)(BgL_hhz00_6290), 
(int)(BgL_ddz00_6289), 
(int)(BgL_mmz00_6288), 
(int)(BgL_yyyyz00_6287), BgL_za7hhza7_6294, ((bool_t)1), 
(int)(((long)-1))); }  else 
{ /* Llib/date.scm 232 */
BgL_aux7472z00_12550 = 
bgl_make_date(BgL_sssz00_6293, 
(int)(BgL_ssz00_6292), 
(int)(BgL_mmz00_6291), 
(int)(BgL_hhz00_6290), 
(int)(BgL_ddz00_6289), 
(int)(BgL_mmz00_6288), 
(int)(BgL_yyyyz00_6287), ((long)0), ((bool_t)0), 
(int)(((long)-1))); } }  else 
{ /* Llib/date.scm 828 */
BgL_aux7472z00_12550 = 
BGl_parsezd2errorzd2zz__datez00(BGl_string7744z00zz__datez00, BGl_string7544z00zz__datez00, 
BGl_thezd2failureze70z35zz__datez00(BgL_iportz00_6286), BgL_iportz00_6286); } } break;case ((long)0) : 

{ /* Llib/date.scm 820 */
long BgL_b1z00_6527;
{ /* Llib/date.scm 820 */
int BgL_arg4361z00_6547;
{ /* Llib/date.scm 818 */
int BgL_res5800z00_9756;
{ /* Llib/date.scm 818 */
int BgL_tmpz00_21286;
BgL_tmpz00_21286 = 
(int)(((long)1)); 
BgL_res5800z00_9756 = 
RGC_BUFFER_BYTE_REF(BgL_iportz00_6286, BgL_tmpz00_21286); } 
BgL_arg4361z00_6547 = BgL_res5800z00_9756; } 
BgL_b1z00_6527 = 
(
(long)(BgL_arg4361z00_6547)-((long)48)); } 
{ /* Llib/date.scm 820 */
long BgL_b2z00_6528;
{ /* Llib/date.scm 821 */
int BgL_arg4360z00_6546;
{ /* Llib/date.scm 818 */
int BgL_res5802z00_9760;
{ /* Llib/date.scm 818 */
int BgL_tmpz00_21291;
BgL_tmpz00_21291 = 
(int)(((long)2)); 
BgL_res5802z00_9760 = 
RGC_BUFFER_BYTE_REF(BgL_iportz00_6286, BgL_tmpz00_21291); } 
BgL_arg4360z00_6546 = BgL_res5802z00_9760; } 
BgL_b2z00_6528 = 
(
(long)(BgL_arg4360z00_6546)-((long)48)); } 
{ /* Llib/date.scm 821 */
long BgL_tza7za7_6529;
if(
(BgL_za7hhza7_6294<((long)0)))
{ /* Llib/date.scm 822 */
BgL_tza7za7_6529 = 
(BgL_za7hhza7_6294-
(((long)60)*
(
(BgL_b1z00_6527*((long)10))+BgL_b2z00_6528))); }  else 
{ /* Llib/date.scm 822 */
BgL_tza7za7_6529 = 
(BgL_za7hhza7_6294+
(((long)60)*
(
(BgL_b1z00_6527*((long)10))+BgL_b2z00_6528))); } 
{ /* Llib/date.scm 822 */

if(
BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(
BINT(BgL_tza7za7_6529)))
{ /* Llib/date.scm 232 */
BgL_aux7472z00_12550 = 
bgl_make_date(BgL_sssz00_6293, 
(int)(BgL_ssz00_6292), 
(int)(BgL_mmz00_6291), 
(int)(BgL_hhz00_6290), 
(int)(BgL_ddz00_6289), 
(int)(BgL_mmz00_6288), 
(int)(BgL_yyyyz00_6287), BgL_tza7za7_6529, ((bool_t)1), 
(int)(((long)-1))); }  else 
{ /* Llib/date.scm 232 */
BgL_aux7472z00_12550 = 
bgl_make_date(BgL_sssz00_6293, 
(int)(BgL_ssz00_6292), 
(int)(BgL_mmz00_6291), 
(int)(BgL_hhz00_6290), 
(int)(BgL_ddz00_6289), 
(int)(BgL_mmz00_6288), 
(int)(BgL_yyyyz00_6287), ((long)0), ((bool_t)0), 
(int)(((long)-1))); } } } } } break;
default: 
BgL_aux7472z00_12550 = 
BGl_errorz00zz__errorz00(BGl_string7525z00zz__datez00, BGl_string7526z00zz__datez00, 
BINT(BgL_matchz00_6509)); } } } } } } break;case ((long)1) : 

{ /* Llib/date.scm 840 */
long BgL_b1z00_6229;long BgL_b2z00_6230;
{ /* Llib/date.scm 840 */
int BgL_arg4224z00_6235;
{ /* Llib/date.scm 835 */
int BgL_res5891z00_9973;
{ /* Llib/date.scm 835 */
int BgL_tmpz00_21332;
BgL_tmpz00_21332 = 
(int)(((long)1)); 
BgL_res5891z00_9973 = 
RGC_BUFFER_BYTE_REF(BgL_iportz00_5929, BgL_tmpz00_21332); } 
BgL_arg4224z00_6235 = BgL_res5891z00_9973; } 
BgL_b1z00_6229 = 
(
(long)(BgL_arg4224z00_6235)-((long)48)); } 
{ /* Llib/date.scm 841 */
int BgL_arg4225z00_6236;
{ /* Llib/date.scm 835 */
int BgL_res5893z00_9977;
{ /* Llib/date.scm 835 */
int BgL_tmpz00_21337;
BgL_tmpz00_21337 = 
(int)(((long)2)); 
BgL_res5893z00_9977 = 
RGC_BUFFER_BYTE_REF(BgL_iportz00_5929, BgL_tmpz00_21337); } 
BgL_arg4225z00_6236 = BgL_res5893z00_9977; } 
BgL_b2z00_6230 = 
(
(long)(BgL_arg4225z00_6236)-((long)48)); } 
{ 
long BgL_za7hhza7_21350;BGL_LONGLONG_T BgL_sssz00_21349;long BgL_ssz00_21348;long BgL_mmz00_21347;long BgL_hhz00_21346;long BgL_ddz00_21345;long BgL_mmz00_21344;long BgL_yyyyz00_21343;obj_t BgL_iportz00_21342;
BgL_iportz00_21342 = BgL_iportz00_5929; 
BgL_yyyyz00_21343 = BgL_yyyyz00_5930; 
BgL_mmz00_21344 = BgL_mmz00_5931; 
BgL_ddz00_21345 = BgL_ddz00_5932; 
BgL_hhz00_21346 = BgL_hhz00_5933; 
BgL_mmz00_21347 = BgL_mmz00_5934; 
BgL_ssz00_21348 = BgL_ssz00_5935; 
BgL_sssz00_21349 = BgL_sssz00_5936; 
BgL_za7hhza7_21350 = 
(((long)3600)*
(
(BgL_b1z00_6229*((long)10))+BgL_b2z00_6230)); 
BgL_za7hhza7_6294 = BgL_za7hhza7_21350; 
BgL_sssz00_6293 = BgL_sssz00_21349; 
BgL_ssz00_6292 = BgL_ssz00_21348; 
BgL_mmz00_6291 = BgL_mmz00_21347; 
BgL_hhz00_6290 = BgL_hhz00_21346; 
BgL_ddz00_6289 = BgL_ddz00_21345; 
BgL_mmz00_6288 = BgL_mmz00_21344; 
BgL_yyyyz00_6287 = BgL_yyyyz00_21343; 
BgL_iportz00_6286 = BgL_iportz00_21342; 
goto BgL_zc3z04anonymousza34228ze3z87_6295;} } break;case ((long)0) : 

if(
BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(
BINT(((long)0))))
{ /* Llib/date.scm 232 */
BgL_aux7472z00_12550 = 
bgl_make_date(BgL_sssz00_5936, 
(int)(BgL_ssz00_5935), 
(int)(BgL_mmz00_5934), 
(int)(BgL_hhz00_5933), 
(int)(BgL_ddz00_5932), 
(int)(BgL_mmz00_5931), 
(int)(BgL_yyyyz00_5930), ((long)0), ((bool_t)1), 
(int)(((long)-1))); }  else 
{ /* Llib/date.scm 232 */
BgL_aux7472z00_12550 = 
bgl_make_date(BgL_sssz00_5936, 
(int)(BgL_ssz00_5935), 
(int)(BgL_mmz00_5934), 
(int)(BgL_hhz00_5933), 
(int)(BgL_ddz00_5932), 
(int)(BgL_mmz00_5931), 
(int)(BgL_yyyyz00_5930), ((long)0), ((bool_t)0), 
(int)(((long)-1))); } break;
default: 
BgL_aux7472z00_12550 = 
BGl_errorz00zz__errorz00(BGl_string7525z00zz__datez00, BGl_string7526z00zz__datez00, 
BINT(BgL_matchz00_6202)); } } } } } } } break;case ((long)0) : 

{ /* Llib/date.scm 879 */
long BgL_b1z00_5581;long BgL_b2z00_5582;
{ /* Llib/date.scm 879 */
int BgL_arg3915z00_5586;
{ /* Llib/date.scm 877 */
int BgL_res6008z00_10244;
{ /* Llib/date.scm 877 */
int BgL_tmpz00_21376;
BgL_tmpz00_21376 = 
(int)(((long)1)); 
BgL_res6008z00_10244 = 
RGC_BUFFER_BYTE_REF(BgL_iportz00_5342, BgL_tmpz00_21376); } 
BgL_arg3915z00_5586 = BgL_res6008z00_10244; } 
BgL_b1z00_5581 = 
(
(long)(BgL_arg3915z00_5586)-((long)48)); } 
{ /* Llib/date.scm 880 */
int BgL_arg3916z00_5587;
{ /* Llib/date.scm 877 */
int BgL_res6010z00_10248;
{ /* Llib/date.scm 877 */
int BgL_tmpz00_21381;
BgL_tmpz00_21381 = 
(int)(((long)2)); 
BgL_res6010z00_10248 = 
RGC_BUFFER_BYTE_REF(BgL_iportz00_5342, BgL_tmpz00_21381); } 
BgL_arg3916z00_5587 = BgL_res6010z00_10248; } 
BgL_b2z00_5582 = 
(
(long)(BgL_arg3916z00_5587)-((long)48)); } 
BgL_iportz00_5624 = BgL_iportz00_5342; 
BgL_yyyyz00_5625 = BgL_yyyyz00_5343; 
BgL_mmz00_5626 = BgL_mmz00_5344; 
BgL_ddz00_5627 = BgL_ddz00_5345; 
BgL_hhz00_5628 = BgL_hhz00_5346; 
BgL_mmz00_5629 = BgL_mmz00_5347; 
BgL_ssz00_5630 = 
(
(BgL_b1z00_5581*((long)10))+BgL_b2z00_5582); 
{ 
obj_t BgL_iportz00_5673;long BgL_lastzd2matchzd2_5674;long BgL_forwardz00_5675;long BgL_bufposz00_5676;obj_t BgL_iportz00_5692;long BgL_lastzd2matchzd2_5693;long BgL_forwardz00_5694;long BgL_bufposz00_5695;obj_t BgL_iportz00_5707;long BgL_lastzd2matchzd2_5708;long BgL_forwardz00_5709;long BgL_bufposz00_5710;obj_t BgL_iportz00_5721;long BgL_lastzd2matchzd2_5722;long BgL_forwardz00_5723;long BgL_bufposz00_5724;
{ /* Llib/date.scm 858 */
bool_t BgL_test9101z00_21386;
{ /* Llib/date.scm 858 */
bool_t BgL_res5965z00_10141;
BgL_res5965z00_10141 = 
INPUT_PORT_CLOSEP(BgL_iportz00_5624); 
BgL_test9101z00_21386 = BgL_res5965z00_10141; } 
if(BgL_test9101z00_21386)
{ /* Llib/date.scm 858 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_arg3920z00_5666;
{ /* Llib/date.scm 858 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_new1077z00_5667;
{ /* Llib/date.scm 858 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_new1076z00_5670;
BgL_new1076z00_5670 = 
((BgL_z62iozd2closedzd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2closedzd2errorz62_bgl) ))); 
{ /* Llib/date.scm 858 */
long BgL_arg3923z00_5671;
{ /* Llib/date.scm 858 */
long BgL_res5966z00_10143;
BgL_res5966z00_10143 = 
BGL_CLASS_INDEX(BGl_z62iozd2closedzd2errorz62zz__objectz00); 
BgL_arg3923z00_5671 = BgL_res5966z00_10143; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1076z00_5670), BgL_arg3923z00_5671); } 
BgL_new1077z00_5667 = BgL_new1076z00_5670; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1077z00_5667)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1077z00_5667)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_21396;
{ /* Llib/date.scm 858 */
obj_t BgL_arg3921z00_5668;
{ /* Llib/date.scm 858 */
obj_t BgL_arg3922z00_5669;
{ /* Llib/date.scm 858 */
obj_t BgL_res5967z00_10147;
{ /* Llib/date.scm 858 */
obj_t BgL_classz00_10146;
BgL_classz00_10146 = BGl_z62iozd2closedzd2errorz62zz__objectz00; 
BgL_res5967z00_10147 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_10146); } 
BgL_arg3922z00_5669 = BgL_res5967z00_10147; } 
BgL_arg3921z00_5668 = 
VECTOR_REF(BgL_arg3922z00_5669,((long)2)); } 
{ /* Llib/date.scm 858 */
obj_t BgL_auxz00_21400;
if(
BGl_classzd2fieldzf3z21zz__objectz00(BgL_arg3921z00_5668))
{ /* Llib/date.scm 858 */
BgL_auxz00_21400 = BgL_arg3921z00_5668
; }  else 
{ 
obj_t BgL_auxz00_21403;
BgL_auxz00_21403 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)37362)), BGl_string7748z00zz__datez00, BGl_string7542z00zz__datez00, BgL_arg3921z00_5668); 
FAILURE(BgL_auxz00_21403,BFALSE,BFALSE);} 
BgL_auxz00_21396 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_auxz00_21400); } } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1077z00_5667)))->BgL_stackz00)=((obj_t)BgL_auxz00_21396),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1077z00_5667)))->BgL_procz00)=((obj_t)BGl_string7525z00zz__datez00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1077z00_5667)))->BgL_msgz00)=((obj_t)BGl_string7543z00zz__datez00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1077z00_5667)))->BgL_objz00)=((obj_t)BgL_iportz00_5624),BUNSPEC); 
BgL_arg3920z00_5666 = BgL_new1077z00_5667; } 
BgL_aux7472z00_12550 = 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg3920z00_5666)); }  else 
{ /* Llib/date.scm 858 */
{ /* Llib/date.scm 858 */
long BgL_res5945z00_10101;
BgL_res5945z00_10101 = 
RGC_START_MATCH(BgL_iportz00_5624); BgL_res5945z00_10101; } 
{ /* Llib/date.scm 858 */
long BgL_matchz00_5860;
{ /* Llib/date.scm 858 */
long BgL_arg4063z00_5892;long BgL_arg4064z00_5893;
{ /* Llib/date.scm 858 */
long BgL_res5946z00_10103;
BgL_res5946z00_10103 = 
RGC_BUFFER_FORWARD(BgL_iportz00_5624); 
BgL_arg4063z00_5892 = BgL_res5946z00_10103; } 
{ /* Llib/date.scm 858 */
long BgL_res5947z00_10105;
BgL_res5947z00_10105 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_5624); 
BgL_arg4064z00_5893 = BgL_res5947z00_10105; } 
BgL_iportz00_5673 = BgL_iportz00_5624; 
BgL_lastzd2matchzd2_5674 = ((long)1); 
BgL_forwardz00_5675 = BgL_arg4063z00_5892; 
BgL_bufposz00_5676 = BgL_arg4064z00_5893; 
BgL_zc3z04anonymousza33925ze3z87_5677:
if(
(BgL_forwardz00_5675==BgL_bufposz00_5676))
{ /* Llib/date.scm 858 */
if(
rgc_fill_buffer(BgL_iportz00_5673))
{ /* Llib/date.scm 858 */
long BgL_arg3928z00_5680;long BgL_arg3929z00_5681;
{ /* Llib/date.scm 858 */
long BgL_res5906z00_10006;
BgL_res5906z00_10006 = 
RGC_BUFFER_FORWARD(BgL_iportz00_5673); 
BgL_arg3928z00_5680 = BgL_res5906z00_10006; } 
{ /* Llib/date.scm 858 */
long BgL_res5907z00_10008;
BgL_res5907z00_10008 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_5673); 
BgL_arg3929z00_5681 = BgL_res5907z00_10008; } 
{ 
long BgL_bufposz00_21427;long BgL_forwardz00_21426;
BgL_forwardz00_21426 = BgL_arg3928z00_5680; 
BgL_bufposz00_21427 = BgL_arg3929z00_5681; 
BgL_bufposz00_5676 = BgL_bufposz00_21427; 
BgL_forwardz00_5675 = BgL_forwardz00_21426; 
goto BgL_zc3z04anonymousza33925ze3z87_5677;} }  else 
{ /* Llib/date.scm 858 */
BgL_matchz00_5860 = BgL_lastzd2matchzd2_5674; } }  else 
{ /* Llib/date.scm 858 */
int BgL_curz00_5682;
{ /* Llib/date.scm 858 */
int BgL_res5908z00_10011;
BgL_res5908z00_10011 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_5673, BgL_forwardz00_5675); 
BgL_curz00_5682 = BgL_res5908z00_10011; } 
{ /* Llib/date.scm 858 */

if(
(
(long)(BgL_curz00_5682)==((long)46)))
{ /* Llib/date.scm 858 */
BgL_iportz00_5692 = BgL_iportz00_5673; 
BgL_lastzd2matchzd2_5693 = BgL_lastzd2matchzd2_5674; 
BgL_forwardz00_5694 = 
(((long)1)+BgL_forwardz00_5675); 
BgL_bufposz00_5695 = BgL_bufposz00_5676; 
BgL_zc3z04anonymousza33934ze3z87_5696:
{ /* Llib/date.scm 858 */
long BgL_newzd2matchzd2_5697;
{ /* Llib/date.scm 858 */
long BgL_res5914z00_10028;
BgL_res5914z00_10028 = 
RGC_STOP_MATCH(BgL_iportz00_5692, BgL_forwardz00_5694); BgL_res5914z00_10028; } 
BgL_newzd2matchzd2_5697 = ((long)1); 
if(
(BgL_forwardz00_5694==BgL_bufposz00_5695))
{ /* Llib/date.scm 858 */
if(
rgc_fill_buffer(BgL_iportz00_5692))
{ /* Llib/date.scm 858 */
long BgL_arg3937z00_5700;long BgL_arg3938z00_5701;
{ /* Llib/date.scm 858 */
long BgL_res5917z00_10035;
BgL_res5917z00_10035 = 
RGC_BUFFER_FORWARD(BgL_iportz00_5692); 
BgL_arg3937z00_5700 = BgL_res5917z00_10035; } 
{ /* Llib/date.scm 858 */
long BgL_res5918z00_10037;
BgL_res5918z00_10037 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_5692); 
BgL_arg3938z00_5701 = BgL_res5918z00_10037; } 
{ 
long BgL_bufposz00_21440;long BgL_forwardz00_21439;
BgL_forwardz00_21439 = BgL_arg3937z00_5700; 
BgL_bufposz00_21440 = BgL_arg3938z00_5701; 
BgL_bufposz00_5695 = BgL_bufposz00_21440; 
BgL_forwardz00_5694 = BgL_forwardz00_21439; 
goto BgL_zc3z04anonymousza33934ze3z87_5696;} }  else 
{ /* Llib/date.scm 858 */
BgL_matchz00_5860 = BgL_newzd2matchzd2_5697; } }  else 
{ /* Llib/date.scm 858 */
int BgL_curz00_5702;
{ /* Llib/date.scm 858 */
int BgL_res5919z00_10040;
BgL_res5919z00_10040 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_5692, BgL_forwardz00_5694); 
BgL_curz00_5702 = BgL_res5919z00_10040; } 
{ /* Llib/date.scm 858 */

{ /* Llib/date.scm 858 */
bool_t BgL_test9108z00_21442;
if(
(
(long)(BgL_curz00_5702)>=((long)48)))
{ /* Llib/date.scm 858 */
BgL_test9108z00_21442 = 
(
(long)(BgL_curz00_5702)<((long)58))
; }  else 
{ /* Llib/date.scm 858 */
BgL_test9108z00_21442 = ((bool_t)0)
; } 
if(BgL_test9108z00_21442)
{ /* Llib/date.scm 858 */
BgL_iportz00_5707 = BgL_iportz00_5692; 
BgL_lastzd2matchzd2_5708 = BgL_newzd2matchzd2_5697; 
BgL_forwardz00_5709 = 
(((long)1)+BgL_forwardz00_5694); 
BgL_bufposz00_5710 = BgL_bufposz00_5695; 
BgL_zc3z04anonymousza33942ze3z87_5711:
if(
(BgL_forwardz00_5709==BgL_bufposz00_5710))
{ /* Llib/date.scm 858 */
if(
rgc_fill_buffer(BgL_iportz00_5707))
{ /* Llib/date.scm 858 */
long BgL_arg3945z00_5714;long BgL_arg3946z00_5715;
{ /* Llib/date.scm 858 */
long BgL_res5925z00_10053;
BgL_res5925z00_10053 = 
RGC_BUFFER_FORWARD(BgL_iportz00_5707); 
BgL_arg3945z00_5714 = BgL_res5925z00_10053; } 
{ /* Llib/date.scm 858 */
long BgL_res5926z00_10055;
BgL_res5926z00_10055 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_5707); 
BgL_arg3946z00_5715 = BgL_res5926z00_10055; } 
{ 
long BgL_bufposz00_21455;long BgL_forwardz00_21454;
BgL_forwardz00_21454 = BgL_arg3945z00_5714; 
BgL_bufposz00_21455 = BgL_arg3946z00_5715; 
BgL_bufposz00_5710 = BgL_bufposz00_21455; 
BgL_forwardz00_5709 = BgL_forwardz00_21454; 
goto BgL_zc3z04anonymousza33942ze3z87_5711;} }  else 
{ /* Llib/date.scm 858 */
BgL_matchz00_5860 = BgL_lastzd2matchzd2_5708; } }  else 
{ /* Llib/date.scm 858 */
int BgL_curz00_5716;
{ /* Llib/date.scm 858 */
int BgL_res5927z00_10058;
BgL_res5927z00_10058 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_5707, BgL_forwardz00_5709); 
BgL_curz00_5716 = BgL_res5927z00_10058; } 
{ /* Llib/date.scm 858 */

{ /* Llib/date.scm 858 */
bool_t BgL_test9112z00_21457;
if(
(
(long)(BgL_curz00_5716)>=((long)48)))
{ /* Llib/date.scm 858 */
BgL_test9112z00_21457 = 
(
(long)(BgL_curz00_5716)<((long)58))
; }  else 
{ /* Llib/date.scm 858 */
BgL_test9112z00_21457 = ((bool_t)0)
; } 
if(BgL_test9112z00_21457)
{ /* Llib/date.scm 858 */
BgL_iportz00_5721 = BgL_iportz00_5707; 
BgL_lastzd2matchzd2_5722 = BgL_lastzd2matchzd2_5708; 
BgL_forwardz00_5723 = 
(((long)1)+BgL_forwardz00_5709); 
BgL_bufposz00_5724 = BgL_bufposz00_5710; 
BgL_zc3z04anonymousza33950ze3z87_5725:
if(
(BgL_forwardz00_5723==BgL_bufposz00_5724))
{ /* Llib/date.scm 858 */
if(
rgc_fill_buffer(BgL_iportz00_5721))
{ /* Llib/date.scm 858 */
long BgL_arg3953z00_5728;long BgL_arg3954z00_5729;
{ /* Llib/date.scm 858 */
long BgL_res5933z00_10071;
BgL_res5933z00_10071 = 
RGC_BUFFER_FORWARD(BgL_iportz00_5721); 
BgL_arg3953z00_5728 = BgL_res5933z00_10071; } 
{ /* Llib/date.scm 858 */
long BgL_res5934z00_10073;
BgL_res5934z00_10073 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_5721); 
BgL_arg3954z00_5729 = BgL_res5934z00_10073; } 
{ 
long BgL_bufposz00_21470;long BgL_forwardz00_21469;
BgL_forwardz00_21469 = BgL_arg3953z00_5728; 
BgL_bufposz00_21470 = BgL_arg3954z00_5729; 
BgL_bufposz00_5724 = BgL_bufposz00_21470; 
BgL_forwardz00_5723 = BgL_forwardz00_21469; 
goto BgL_zc3z04anonymousza33950ze3z87_5725;} }  else 
{ /* Llib/date.scm 858 */
BgL_matchz00_5860 = BgL_lastzd2matchzd2_5722; } }  else 
{ /* Llib/date.scm 858 */
int BgL_curz00_5730;
{ /* Llib/date.scm 858 */
int BgL_res5935z00_10076;
BgL_res5935z00_10076 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_5721, BgL_forwardz00_5723); 
BgL_curz00_5730 = BgL_res5935z00_10076; } 
{ /* Llib/date.scm 858 */

{ /* Llib/date.scm 858 */
bool_t BgL_test9116z00_21472;
if(
(
(long)(BgL_curz00_5730)>=((long)48)))
{ /* Llib/date.scm 858 */
BgL_test9116z00_21472 = 
(
(long)(BgL_curz00_5730)<((long)58))
; }  else 
{ /* Llib/date.scm 858 */
BgL_test9116z00_21472 = ((bool_t)0)
; } 
if(BgL_test9116z00_21472)
{ /* Llib/date.scm 858 */
long BgL_arg3957z00_5733;
BgL_arg3957z00_5733 = 
(((long)1)+BgL_forwardz00_5723); 
{ /* Llib/date.scm 858 */
long BgL_newzd2matchzd2_10083;
{ /* Llib/date.scm 858 */
long BgL_res5939z00_10086;
BgL_res5939z00_10086 = 
RGC_STOP_MATCH(BgL_iportz00_5721, BgL_arg3957z00_5733); BgL_res5939z00_10086; } 
BgL_newzd2matchzd2_10083 = ((long)0); 
BgL_matchz00_5860 = BgL_newzd2matchzd2_10083; } }  else 
{ /* Llib/date.scm 858 */
BgL_matchz00_5860 = BgL_lastzd2matchzd2_5722; } } } } }  else 
{ /* Llib/date.scm 858 */
BgL_matchz00_5860 = BgL_lastzd2matchzd2_5708; } } } } }  else 
{ /* Llib/date.scm 858 */
BgL_matchz00_5860 = BgL_newzd2matchzd2_5697; } } } } } }  else 
{ /* Llib/date.scm 858 */
long BgL_arg3932z00_5685;
BgL_arg3932z00_5685 = 
(((long)1)+BgL_forwardz00_5675); 
{ /* Llib/date.scm 858 */
long BgL_newzd2matchzd2_10018;
{ /* Llib/date.scm 858 */
long BgL_res5912z00_10021;
BgL_res5912z00_10021 = 
RGC_STOP_MATCH(BgL_iportz00_5673, BgL_arg3932z00_5685); BgL_res5912z00_10021; } 
BgL_newzd2matchzd2_10018 = ((long)1); 
BgL_matchz00_5860 = BgL_newzd2matchzd2_10018; } } } } } 
RGC_SET_FILEPOS(BgL_iportz00_5624); 
switch( BgL_matchz00_5860) { case ((long)1) : 

{ /* Llib/date.scm 867 */
bool_t BgL_test9118z00_21486;
{ /* Llib/date.scm 867 */
obj_t BgL_arg4052z00_5878;
BgL_arg4052z00_5878 = 
BGl_thezd2failureze72z35zz__datez00(BgL_iportz00_5624); 
{ /* Llib/date.scm 867 */
bool_t BgL_res5948z00_10107;
BgL_res5948z00_10107 = 
EOF_OBJECTP(BgL_arg4052z00_5878); 
BgL_test9118z00_21486 = BgL_res5948z00_10107; } } 
if(BgL_test9118z00_21486)
{ /* Llib/date.scm 867 */
if(
BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(
BINT(((long)0))))
{ /* Llib/date.scm 232 */
BgL_aux7472z00_12550 = 
bgl_make_date(((BGL_LONGLONG_T)0), 
(int)(BgL_ssz00_5630), 
(int)(BgL_mmz00_5629), 
(int)(BgL_hhz00_5628), 
(int)(BgL_ddz00_5627), 
(int)(BgL_mmz00_5626), 
(int)(BgL_yyyyz00_5625), ((long)0), ((bool_t)1), 
(int)(((long)-1))); }  else 
{ /* Llib/date.scm 232 */
BgL_aux7472z00_12550 = 
bgl_make_date(((BGL_LONGLONG_T)0), 
(int)(BgL_ssz00_5630), 
(int)(BgL_mmz00_5629), 
(int)(BgL_hhz00_5628), 
(int)(BgL_ddz00_5627), 
(int)(BgL_mmz00_5626), 
(int)(BgL_yyyyz00_5625), ((long)0), ((bool_t)0), 
(int)(((long)-1))); } }  else 
{ /* Llib/date.scm 867 */
{ /* Llib/date.scm 872 */
obj_t BgL_arg4049z00_5875;
BgL_arg4049z00_5875 = 
BGl_thezd2failureze72z35zz__datez00(BgL_iportz00_5624); 
{ /* Llib/date.scm 872 */
unsigned char BgL_auxz00_21509;
{ /* Llib/date.scm 872 */
obj_t BgL_tmpz00_21510;
if(
CHARP(BgL_arg4049z00_5875))
{ /* Llib/date.scm 872 */
BgL_tmpz00_21510 = BgL_arg4049z00_5875
; }  else 
{ 
obj_t BgL_auxz00_21513;
BgL_auxz00_21513 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)37807)), BGl_string7520z00zz__datez00, BGl_string7747z00zz__datez00, BgL_arg4049z00_5875); 
FAILURE(BgL_auxz00_21513,BFALSE,BFALSE);} 
BgL_auxz00_21509 = 
CCHAR(BgL_tmpz00_21510); } 
BGl_unreadzd2charz12zc0zz__r4_input_6_10_2z00(BgL_auxz00_21509, BgL_iportz00_5624); } } 
{ 
BGL_LONGLONG_T BgL_sssz00_21526;long BgL_ssz00_21525;long BgL_mmz00_21524;long BgL_hhz00_21523;long BgL_ddz00_21522;long BgL_mmz00_21521;long BgL_yyyyz00_21520;obj_t BgL_iportz00_21519;
BgL_iportz00_21519 = BgL_iportz00_5624; 
BgL_yyyyz00_21520 = BgL_yyyyz00_5625; 
BgL_mmz00_21521 = BgL_mmz00_5626; 
BgL_ddz00_21522 = BgL_ddz00_5627; 
BgL_hhz00_21523 = BgL_hhz00_5628; 
BgL_mmz00_21524 = BgL_mmz00_5629; 
BgL_ssz00_21525 = BgL_ssz00_5630; 
BgL_sssz00_21526 = ((BGL_LONGLONG_T)0); 
BgL_sssz00_5936 = BgL_sssz00_21526; 
BgL_ssz00_5935 = BgL_ssz00_21525; 
BgL_mmz00_5934 = BgL_mmz00_21524; 
BgL_hhz00_5933 = BgL_hhz00_21523; 
BgL_ddz00_5932 = BgL_ddz00_21522; 
BgL_mmz00_5931 = BgL_mmz00_21521; 
BgL_yyyyz00_5930 = BgL_yyyyz00_21520; 
BgL_iportz00_5929 = BgL_iportz00_21519; 
goto BgL_zc3z04anonymousza34065ze3z87_5937;} } } break;case ((long)0) : 

{ /* Llib/date.scm 860 */
long BgL_b1z00_5879;long BgL_b2z00_5880;long BgL_b3z00_5881;
{ /* Llib/date.scm 860 */
int BgL_arg4060z00_5889;
{ /* Llib/date.scm 858 */
int BgL_res5951z00_10112;
{ /* Llib/date.scm 858 */
int BgL_tmpz00_21527;
BgL_tmpz00_21527 = 
(int)(((long)1)); 
BgL_res5951z00_10112 = 
RGC_BUFFER_BYTE_REF(BgL_iportz00_5624, BgL_tmpz00_21527); } 
BgL_arg4060z00_5889 = BgL_res5951z00_10112; } 
BgL_b1z00_5879 = 
(
(long)(BgL_arg4060z00_5889)-((long)48)); } 
{ /* Llib/date.scm 861 */
int BgL_arg4061z00_5890;
{ /* Llib/date.scm 858 */
int BgL_res5953z00_10116;
{ /* Llib/date.scm 858 */
int BgL_tmpz00_21532;
BgL_tmpz00_21532 = 
(int)(((long)2)); 
BgL_res5953z00_10116 = 
RGC_BUFFER_BYTE_REF(BgL_iportz00_5624, BgL_tmpz00_21532); } 
BgL_arg4061z00_5890 = BgL_res5953z00_10116; } 
BgL_b2z00_5880 = 
(
(long)(BgL_arg4061z00_5890)-((long)48)); } 
{ /* Llib/date.scm 862 */
int BgL_arg4062z00_5891;
{ /* Llib/date.scm 858 */
int BgL_res5955z00_10120;
{ /* Llib/date.scm 858 */
int BgL_tmpz00_21537;
BgL_tmpz00_21537 = 
(int)(((long)3)); 
BgL_res5955z00_10120 = 
RGC_BUFFER_BYTE_REF(BgL_iportz00_5624, BgL_tmpz00_21537); } 
BgL_arg4062z00_5891 = BgL_res5955z00_10120; } 
BgL_b3z00_5881 = 
(
(long)(BgL_arg4062z00_5891)-((long)48)); } 
{ /* Llib/date.scm 863 */
BGL_LONGLONG_T BgL_arg4054z00_5883;
{ /* Llib/date.scm 865 */
BGL_LONGLONG_T BgL_arg4055z00_5884;
{ /* Llib/date.scm 865 */
long BgL_arg4056z00_5885;
BgL_arg4056z00_5885 = 
(
(
(
(BgL_b1z00_5879*((long)10))+BgL_b2z00_5880)*((long)10))+BgL_b3z00_5881); 
{ /* Llib/date.scm 865 */
BGL_LONGLONG_T BgL_res5962z00_10135;
BgL_res5962z00_10135 = 
LONG_TO_LLONG(BgL_arg4056z00_5885); 
BgL_arg4055z00_5884 = BgL_res5962z00_10135; } } 
BgL_arg4054z00_5883 = 
((16960 + ((BGL_LONGLONG_T)65536 * (((BGL_LONGLONG_T)15))))*BgL_arg4055z00_5884); } 
{ 
BGL_LONGLONG_T BgL_sssz00_21555;long BgL_ssz00_21554;long BgL_mmz00_21553;long BgL_hhz00_21552;long BgL_ddz00_21551;long BgL_mmz00_21550;long BgL_yyyyz00_21549;obj_t BgL_iportz00_21548;
BgL_iportz00_21548 = BgL_iportz00_5624; 
BgL_yyyyz00_21549 = BgL_yyyyz00_5625; 
BgL_mmz00_21550 = BgL_mmz00_5626; 
BgL_ddz00_21551 = BgL_ddz00_5627; 
BgL_hhz00_21552 = BgL_hhz00_5628; 
BgL_mmz00_21553 = BgL_mmz00_5629; 
BgL_ssz00_21554 = BgL_ssz00_5630; 
BgL_sssz00_21555 = BgL_arg4054z00_5883; 
BgL_sssz00_5936 = BgL_sssz00_21555; 
BgL_ssz00_5935 = BgL_ssz00_21554; 
BgL_mmz00_5934 = BgL_mmz00_21553; 
BgL_hhz00_5933 = BgL_hhz00_21552; 
BgL_ddz00_5932 = BgL_ddz00_21551; 
BgL_mmz00_5931 = BgL_mmz00_21550; 
BgL_yyyyz00_5930 = BgL_yyyyz00_21549; 
BgL_iportz00_5929 = BgL_iportz00_21548; 
goto BgL_zc3z04anonymousza34065ze3z87_5937;} } } break;
default: 
BgL_aux7472z00_12550 = 
BGl_errorz00zz__errorz00(BGl_string7525z00zz__datez00, BGl_string7526z00zz__datez00, 
BINT(BgL_matchz00_5860)); } } } } } } break;
default: 
BgL_aux7472z00_12550 = 
BGl_errorz00zz__errorz00(BGl_string7525z00zz__datez00, BGl_string7526z00zz__datez00, 
BINT(BgL_matchz00_5562)); } } } } } } break;
default: 
BgL_aux7472z00_12550 = 
BGl_errorz00zz__errorz00(BGl_string7525z00zz__datez00, BGl_string7526z00zz__datez00, 
BINT(BgL_matchz00_5281)); } } } } } } break;
default: 
BgL_aux7472z00_12550 = 
BGl_errorz00zz__errorz00(BGl_string7525z00zz__datez00, BGl_string7526z00zz__datez00, 
BINT(BgL_matchz00_5001)); } } } } } } break;
default: 
BgL_aux7472z00_12550 = 
BGl_errorz00zz__errorz00(BGl_string7525z00zz__datez00, BGl_string7526z00zz__datez00, 
BINT(BgL_matchz00_4720)); } } } } } } break;
default: 
BgL_aux7472z00_12550 = 
BGl_errorz00zz__errorz00(BGl_string7525z00zz__datez00, BGl_string7526z00zz__datez00, 
BINT(BgL_matchz00_4442)); } } } } } } break;
default: 
BgL_aux7472z00_12550 = 
BGl_errorz00zz__errorz00(BGl_string7525z00zz__datez00, BGl_string7526z00zz__datez00, 
BINT(BgL_matchz00_4173)); } } } } } 
if(
BGL_DATEP(BgL_aux7472z00_12550))
{ /* Llib/date.scm 960 */
return BgL_aux7472z00_12550;}  else 
{ 
obj_t BgL_auxz00_21590;
BgL_auxz00_21590 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)40402)), BGl_string7744z00zz__datez00, BGl_string7675z00zz__datez00, BgL_aux7472z00_12550); 
FAILURE(BgL_auxz00_21590,BFALSE,BFALSE);} } } } } } } } } } } } 

}



/* the-failure~0 */
obj_t BGl_thezd2failureze70z35zz__datez00(obj_t BgL_iportz00_11432)
{
{ /* Llib/date.scm 818 */
{ /* Llib/date.scm 818 */
bool_t BgL_test9122z00_21594;
{ /* Llib/date.scm 818 */
long BgL_arg4340z00_6499;
{ /* Llib/date.scm 818 */
long BgL_res5792z00_9740;
BgL_res5792z00_9740 = 
RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_11432); 
BgL_arg4340z00_6499 = BgL_res5792z00_9740; } 
BgL_test9122z00_21594 = 
(BgL_arg4340z00_6499==((long)0)); } 
if(BgL_test9122z00_21594)
{ /* Llib/date.scm 818 */
return BEOF;}  else 
{ /* Llib/date.scm 818 */
unsigned char BgL_res5794z00_9744;
BgL_res5794z00_9744 = 
RGC_BUFFER_CHARACTER(BgL_iportz00_11432); 
return 
BCHAR(BgL_res5794z00_9744);} } } 

}



/* the-failure~1 */
obj_t BGl_thezd2failureze71z35zz__datez00(obj_t BgL_iportz00_11433)
{
{ /* Llib/date.scm 835 */
{ /* Llib/date.scm 835 */
bool_t BgL_test9123z00_21599;
{ /* Llib/date.scm 835 */
long BgL_arg4200z00_6192;
{ /* Llib/date.scm 835 */
long BgL_res5874z00_9939;
BgL_res5874z00_9939 = 
RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_11433); 
BgL_arg4200z00_6192 = BgL_res5874z00_9939; } 
BgL_test9123z00_21599 = 
(BgL_arg4200z00_6192==((long)0)); } 
if(BgL_test9123z00_21599)
{ /* Llib/date.scm 835 */
return BEOF;}  else 
{ /* Llib/date.scm 835 */
unsigned char BgL_res5876z00_9943;
BgL_res5876z00_9943 = 
RGC_BUFFER_CHARACTER(BgL_iportz00_11433); 
return 
BCHAR(BgL_res5876z00_9943);} } } 

}



/* the-failure~2 */
obj_t BGl_thezd2failureze72z35zz__datez00(obj_t BgL_iportz00_11434)
{
{ /* Llib/date.scm 858 */
{ /* Llib/date.scm 858 */
bool_t BgL_test9124z00_21604;
{ /* Llib/date.scm 858 */
long BgL_arg4039z00_5850;
{ /* Llib/date.scm 858 */
long BgL_res5942z00_10095;
BgL_res5942z00_10095 = 
RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_11434); 
BgL_arg4039z00_5850 = BgL_res5942z00_10095; } 
BgL_test9124z00_21604 = 
(BgL_arg4039z00_5850==((long)0)); } 
if(BgL_test9124z00_21604)
{ /* Llib/date.scm 858 */
return BEOF;}  else 
{ /* Llib/date.scm 858 */
unsigned char BgL_res5944z00_10099;
BgL_res5944z00_10099 = 
RGC_BUFFER_CHARACTER(BgL_iportz00_11434); 
return 
BCHAR(BgL_res5944z00_10099);} } } 

}



/* the-failure~3 */
obj_t BGl_thezd2failureze73z35zz__datez00(obj_t BgL_iportz00_11435)
{
{ /* Llib/date.scm 877 */
{ /* Llib/date.scm 877 */
bool_t BgL_test9125z00_21609;
{ /* Llib/date.scm 877 */
long BgL_arg3898z00_5552;
{ /* Llib/date.scm 877 */
long BgL_res5999z00_10227;
BgL_res5999z00_10227 = 
RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_11435); 
BgL_arg3898z00_5552 = BgL_res5999z00_10227; } 
BgL_test9125z00_21609 = 
(BgL_arg3898z00_5552==((long)0)); } 
if(BgL_test9125z00_21609)
{ /* Llib/date.scm 877 */
return BEOF;}  else 
{ /* Llib/date.scm 877 */
unsigned char BgL_res6001z00_10231;
BgL_res6001z00_10231 = 
RGC_BUFFER_CHARACTER(BgL_iportz00_11435); 
return 
BCHAR(BgL_res6001z00_10231);} } } 

}



/* the-failure~4 */
obj_t BGl_thezd2failureze74z35zz__datez00(obj_t BgL_iportz00_11436)
{
{ /* Llib/date.scm 893 */
{ /* Llib/date.scm 893 */
bool_t BgL_test9126z00_21614;
{ /* Llib/date.scm 893 */
long BgL_arg3766z00_5271;
{ /* Llib/date.scm 893 */
long BgL_res6050z00_10345;
BgL_res6050z00_10345 = 
RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_11436); 
BgL_arg3766z00_5271 = BgL_res6050z00_10345; } 
BgL_test9126z00_21614 = 
(BgL_arg3766z00_5271==((long)0)); } 
if(BgL_test9126z00_21614)
{ /* Llib/date.scm 893 */
return BEOF;}  else 
{ /* Llib/date.scm 893 */
unsigned char BgL_res6052z00_10349;
BgL_res6052z00_10349 = 
RGC_BUFFER_CHARACTER(BgL_iportz00_11436); 
return 
BCHAR(BgL_res6052z00_10349);} } } 

}



/* the-failure~5 */
obj_t BGl_thezd2failureze75z35zz__datez00(obj_t BgL_iportz00_11437)
{
{ /* Llib/date.scm 907 */
{ /* Llib/date.scm 907 */
bool_t BgL_test9127z00_21619;
{ /* Llib/date.scm 907 */
long BgL_arg3625z00_4991;
{ /* Llib/date.scm 907 */
long BgL_res6101z00_10464;
BgL_res6101z00_10464 = 
RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_11437); 
BgL_arg3625z00_4991 = BgL_res6101z00_10464; } 
BgL_test9127z00_21619 = 
(BgL_arg3625z00_4991==((long)0)); } 
if(BgL_test9127z00_21619)
{ /* Llib/date.scm 907 */
return BEOF;}  else 
{ /* Llib/date.scm 907 */
unsigned char BgL_res6103z00_10468;
BgL_res6103z00_10468 = 
RGC_BUFFER_CHARACTER(BgL_iportz00_11437); 
return 
BCHAR(BgL_res6103z00_10468);} } } 

}



/* the-failure~6 */
obj_t BGl_thezd2failureze76z35zz__datez00(obj_t BgL_iportz00_11438)
{
{ /* Llib/date.scm 922 */
{ /* Llib/date.scm 922 */
bool_t BgL_test9128z00_21624;
{ /* Llib/date.scm 922 */
long BgL_arg3481z00_4710;
{ /* Llib/date.scm 922 */
long BgL_res6151z00_10581;
BgL_res6151z00_10581 = 
RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_11438); 
BgL_arg3481z00_4710 = BgL_res6151z00_10581; } 
BgL_test9128z00_21624 = 
(BgL_arg3481z00_4710==((long)0)); } 
if(BgL_test9128z00_21624)
{ /* Llib/date.scm 922 */
return BEOF;}  else 
{ /* Llib/date.scm 922 */
unsigned char BgL_res6153z00_10585;
BgL_res6153z00_10585 = 
RGC_BUFFER_CHARACTER(BgL_iportz00_11438); 
return 
BCHAR(BgL_res6153z00_10585);} } } 

}



/* the-failure~7 */
obj_t BGl_thezd2failureze77z35zz__datez00(obj_t BgL_iportz00_11439)
{
{ /* Llib/date.scm 936 */
{ /* Llib/date.scm 936 */
bool_t BgL_test9129z00_21629;
{ /* Llib/date.scm 936 */
long BgL_arg3325z00_4432;
{ /* Llib/date.scm 936 */
long BgL_res6201z00_10698;
BgL_res6201z00_10698 = 
RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_11439); 
BgL_arg3325z00_4432 = BgL_res6201z00_10698; } 
BgL_test9129z00_21629 = 
(BgL_arg3325z00_4432==((long)0)); } 
if(BgL_test9129z00_21629)
{ /* Llib/date.scm 936 */
return BEOF;}  else 
{ /* Llib/date.scm 936 */
unsigned char BgL_res6203z00_10702;
BgL_res6203z00_10702 = 
RGC_BUFFER_CHARACTER(BgL_iportz00_11439); 
return 
BCHAR(BgL_res6203z00_10702);} } } 

}



/* &iso8601-parse-date */
obj_t BGl_z62iso8601zd2parsezd2datez62zz__datez00(obj_t BgL_envz00_11430, obj_t BgL_ipz00_11431)
{
{ /* Llib/date.scm 815 */
{ /* Llib/date.scm 818 */
obj_t BgL_auxz00_21634;
if(
INPUT_PORTP(BgL_ipz00_11431))
{ /* Llib/date.scm 818 */
BgL_auxz00_21634 = BgL_ipz00_11431
; }  else 
{ 
obj_t BgL_auxz00_21637;
BgL_auxz00_21637 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)35984)), BGl_string7756z00zz__datez00, BGl_string7521z00zz__datez00, BgL_ipz00_11431); 
FAILURE(BgL_auxz00_21637,BFALSE,BFALSE);} 
return 
BGl_iso8601zd2parsezd2datez00zz__datez00(BgL_auxz00_21634);} } 

}



/* parse-error */
obj_t BGl_parsezd2errorzd2zz__datez00(obj_t BgL_procz00_96, obj_t BgL_messagez00_97, obj_t BgL_objz00_98, obj_t BgL_portz00_99)
{
{ /* Llib/date.scm 965 */
{ /* Llib/date.scm 967 */
BgL_z62iozd2parsezd2errorz62_bglt BgL_arg4364z00_6583;
{ /* Llib/date.scm 967 */
BgL_z62iozd2parsezd2errorz62_bglt BgL_new1149z00_6584;
{ /* Llib/date.scm 973 */
BgL_z62iozd2parsezd2errorz62_bglt BgL_new1148z00_6595;
BgL_new1148z00_6595 = 
((BgL_z62iozd2parsezd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2parsezd2errorz62_bgl) ))); 
{ /* Llib/date.scm 973 */
long BgL_arg4375z00_6596;
{ /* Llib/date.scm 973 */
long BgL_res6283z00_10881;
BgL_res6283z00_10881 = 
BGL_CLASS_INDEX(BGl_z62iozd2parsezd2errorz62zz__objectz00); 
BgL_arg4375z00_6596 = BgL_res6283z00_10881; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1148z00_6595), BgL_arg4375z00_6596); } 
BgL_new1149z00_6584 = BgL_new1148z00_6595; } 
{ 
obj_t BgL_auxz00_21646;
{ /* Llib/date.scm 973 */
obj_t BgL_res6284z00_10885;
BgL_res6284z00_10885 = 
INPUT_PORT_NAME(BgL_portz00_99); 
BgL_auxz00_21646 = BgL_res6284z00_10885; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1149z00_6584)))->BgL_fnamez00)=((obj_t)BgL_auxz00_21646),BUNSPEC); } 
{ 
obj_t BgL_auxz00_21650;
{ /* Llib/date.scm 974 */
long BgL_res6285z00_10887;
BgL_res6285z00_10887 = 
INPUT_PORT_FILEPOS(BgL_portz00_99); 
BgL_auxz00_21650 = 
BINT(BgL_res6285z00_10887); } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1149z00_6584)))->BgL_locationz00)=((obj_t)BgL_auxz00_21650),BUNSPEC); } 
{ 
obj_t BgL_auxz00_21655;
{ /* Llib/date.scm 974 */
obj_t BgL_arg4365z00_6585;
{ /* Llib/date.scm 974 */
obj_t BgL_arg4366z00_6586;
{ /* Llib/date.scm 974 */
obj_t BgL_res6286z00_10889;
{ /* Llib/date.scm 974 */
obj_t BgL_classz00_10888;
BgL_classz00_10888 = BGl_z62iozd2parsezd2errorz62zz__objectz00; 
BgL_res6286z00_10889 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_10888); } 
BgL_arg4366z00_6586 = BgL_res6286z00_10889; } 
BgL_arg4365z00_6585 = 
VECTOR_REF(BgL_arg4366z00_6586,((long)2)); } 
{ /* Llib/date.scm 974 */
obj_t BgL_auxz00_21659;
if(
BGl_classzd2fieldzf3z21zz__objectz00(BgL_arg4365z00_6585))
{ /* Llib/date.scm 974 */
BgL_auxz00_21659 = BgL_arg4365z00_6585
; }  else 
{ 
obj_t BgL_auxz00_21662;
BgL_auxz00_21662 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7519z00zz__datez00, 
BINT(((long)40930)), BGl_string7757z00zz__datez00, BGl_string7542z00zz__datez00, BgL_arg4365z00_6585); 
FAILURE(BgL_auxz00_21662,BFALSE,BFALSE);} 
BgL_auxz00_21655 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_auxz00_21659); } } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1149z00_6584)))->BgL_stackz00)=((obj_t)BgL_auxz00_21655),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1149z00_6584)))->BgL_procz00)=((obj_t)BgL_procz00_96),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1149z00_6584)))->BgL_msgz00)=((obj_t)BgL_messagez00_97),BUNSPEC); 
{ 
obj_t BgL_auxz00_21672;
if(
CHARP(BgL_objz00_98))
{ /* Llib/date.scm 971 */
obj_t BgL_arg4368z00_6588;obj_t BgL_arg4369z00_6589;
{ /* Llib/date.scm 971 */
obj_t BgL_list4374z00_6594;
BgL_list4374z00_6594 = 
MAKE_YOUNG_PAIR(BgL_objz00_98, BNIL); 
{ /* Llib/date.scm 971 */
obj_t BgL_res6288z00_10892;
BgL_res6288z00_10892 = 
BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(BgL_list4374z00_6594); 
BgL_arg4368z00_6588 = BgL_res6288z00_10892; } } 
BgL_arg4369z00_6589 = 
BGl_readzd2linezd2zz__r4_input_6_10_2z00(BgL_portz00_99); 
{ /* Llib/date.scm 971 */
obj_t BgL_list4370z00_6590;
{ /* Llib/date.scm 971 */
obj_t BgL_arg4371z00_6591;
{ /* Llib/date.scm 971 */
obj_t BgL_arg4372z00_6592;
{ /* Llib/date.scm 971 */
obj_t BgL_arg4373z00_6593;
BgL_arg4373z00_6593 = 
MAKE_YOUNG_PAIR(BgL_arg4369z00_6589, BNIL); 
BgL_arg4372z00_6592 = 
MAKE_YOUNG_PAIR(BGl_string7758z00zz__datez00, BgL_arg4373z00_6593); } 
BgL_arg4371z00_6591 = 
MAKE_YOUNG_PAIR(BgL_arg4368z00_6588, BgL_arg4372z00_6592); } 
BgL_list4370z00_6590 = 
MAKE_YOUNG_PAIR(BGl_string7759z00zz__datez00, BgL_arg4371z00_6591); } 
BgL_auxz00_21672 = 
BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list4370z00_6590); } }  else 
{ /* Llib/date.scm 970 */
BgL_auxz00_21672 = BgL_objz00_98
; } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1149z00_6584)))->BgL_objz00)=((obj_t)BgL_auxz00_21672),BUNSPEC); } 
BgL_arg4364z00_6583 = BgL_new1149z00_6584; } 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg4364z00_6583));} } 

}



/* object-init */
obj_t BGl_objectzd2initzd2zz__datez00()
{
{ /* Llib/date.scm 19 */
return BUNSPEC;} 

}



/* generic-init */
obj_t BGl_genericzd2initzd2zz__datez00()
{
{ /* Llib/date.scm 19 */
return BUNSPEC;} 

}



/* method-init */
obj_t BGl_methodzd2initzd2zz__datez00()
{
{ /* Llib/date.scm 19 */
return BUNSPEC;} 

}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__datez00()
{
{ /* Llib/date.scm 19 */
return 
BGl_modulezd2initializa7ationz75zz__errorz00(((long)37115357), 
BSTRING_TO_STRING(BGl_string7760z00zz__datez00));} 

}

#ifdef __cplusplus
}
#endif
