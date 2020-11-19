/*===========================================================================*/
/*   (Llib/unicode.scm)                                                      */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -c Llib/unicode.scm -indent -o objs/obj_s/Llib/unicode.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
static obj_t BGl_list4864z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_z62isozd2latinzd2ze3utf8z12z93zz__unicodez00(obj_t, obj_t);
static obj_t BGl_list4865z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_list4866z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_list4867z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_list4868z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_list4869z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_z62ucs2zd2substringzb0zz__unicodez00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__utf8zd2stringzf3z21zz__unicodez00(obj_t, obj_t);
static obj_t BGl_list4870z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_list4871z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_list4872z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_list4873z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_list4874z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_list4875z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_list4876z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_list4877z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_list4878z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_list4879z00zz__unicodez00 = BUNSPEC;
BGL_EXPORTED_DECL int BGl_ucs2zd2stringzd2lengthz00zz__unicodez00(obj_t);
static obj_t BGl_stringzd2unicodezd2fixz12ze70zf5zz__unicodez00(obj_t, long);
BGL_EXPORTED_DECL obj_t BGl_ucs2zd2stringzd2upcasez12z12zz__unicodez00(obj_t);
extern obj_t c_ucs2_string_copy(obj_t);
BGL_EXPORTED_DECL obj_t BGl_subucs2zd2stringzd2urz00zz__unicodez00(obj_t, int, int);
static obj_t BGl_z62utf8zd2stringzd2appendza2zc0zz__unicodez00(obj_t, obj_t);
static obj_t BGl_list4880z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_list4881z00zz__unicodez00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_listzd2ze3ucs2zd2stringze3zz__unicodez00(obj_t);
static obj_t BGl_list4882z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_list4883z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_list4884z00zz__unicodez00 = BUNSPEC;
static obj_t BGl__makezd2ucs2zd2stringz00zz__unicodez00(obj_t, obj_t);
static obj_t BGl_list4885z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_list4886z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_list4887z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_list4888z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_list4889z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_requirezd2initializa7ationz75zz__unicodez00 = BUNSPEC;
BGL_EXPORTED_DECL long BGl_utf8zd2stringzd2lengthz00zz__unicodez00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_ucs2zd2stringzd2ze3utf8zd2stringz31zz__unicodez00(obj_t);
static obj_t BGl_z62ucs2zd2stringze3zd3zf3z73zz__unicodez00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_utf8zd2stringzd2minimalzd2charsetzd2zz__unicodez00(obj_t);
static obj_t BGl_list4890z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_list4891z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_list4893z00zz__unicodez00 = BUNSPEC;
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_ucs2zd2stringzd2fillz12z12zz__unicodez00(obj_t, ucs2_t);
extern bool_t ucs2_string_cige(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_ucs2zd2stringzc3zf3ze2zz__unicodez00(obj_t, obj_t);
extern obj_t ucs2_string_append(obj_t, obj_t);
static obj_t BGl_z62utf8zd2charzd2siza7ezc5zz__unicodez00(obj_t, obj_t);
static obj_t BGl_utf8zd2collapsez12zc0zz__unicodez00(obj_t, long, obj_t, obj_t);
extern bool_t ucs2_string_cigt(obj_t, obj_t);
static obj_t BGl_z62utf8zd2ze3isozd2latinz12z93zz__unicodez00(obj_t, obj_t);
static obj_t BGl_z62ucs2zd2stringzd2appendz62zz__unicodez00(obj_t, obj_t);
extern obj_t BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(obj_t);
BGL_EXPORTED_DECL bool_t BGl_ucs2zd2stringzc3zd3zf3z31zz__unicodez00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_ucs2zd2stringzd3zf3zf2zz__unicodez00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_utf8zd2stringzd2ze3ucs2zd2stringz31zz__unicodez00(obj_t);
BGL_EXPORTED_DECL bool_t BGl_utf8zd2stringzf3z21zz__unicodez00(obj_t, bool_t);
BGL_EXPORTED_DECL obj_t BGl_inversezd2utf8zd2tablez00zz__unicodez00(obj_t);
static obj_t BGl_z62ucs2zd2stringzd2refzd2urzb0zz__unicodez00(obj_t, obj_t, obj_t);
static obj_t BGl_toplevelzd2initzd2zz__unicodez00();
BGL_EXPORTED_DECL obj_t BGl_utf8zd2ze3cp1252z12z23zz__unicodez00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_cp1252zd2ze3utf8z12z23zz__unicodez00(obj_t);
static obj_t BGl_list4997z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_z62utf8zd2stringzd2appendz62zz__unicodez00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_ucs2zd2stringze3zf3zc2zz__unicodez00(obj_t, obj_t);
extern obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_ucs2zd2substringzd2zz__unicodez00(obj_t, int, int);
extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
extern bool_t ucs2_strcmp(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_ucs2zd2stringzd2cizc3zd3zf3ze3zz__unicodez00(obj_t, obj_t);
extern unsigned char BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(long);
static obj_t BGl_genericzd2initzd2zz__unicodez00();
extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
static obj_t BGl_objectzd2initzd2zz__unicodez00();
BGL_EXPORTED_DECL obj_t BGl_ucs2zd2stringzd2minimalzd2charsetzd2zz__unicodez00(obj_t);
extern bool_t ucs2_strcicmp(obj_t, obj_t);
extern obj_t bgl_reverse_bang(obj_t);
BGL_EXPORTED_DECL bool_t BGl_ucs2zd2stringze3zd3zf3z11zz__unicodez00(obj_t, obj_t);
extern bool_t ucs2_string_cile(obj_t, obj_t);
extern obj_t string_append_3(obj_t, obj_t, obj_t);
static obj_t BGl_vector4892z00zz__unicodez00 = BUNSPEC;
extern bool_t ucs2_string_cilt(obj_t, obj_t);
static obj_t BGl__utf8zd2stringzd2appendzd2fillz12zc0zz__unicodez00(obj_t, obj_t);
static obj_t BGl_cp1252zd2invzd2zz__unicodez00 = BUNSPEC;
BGL_EXPORTED_DECL long BGl_utf8zd2charzd2siza7eza7zz__unicodez00(unsigned char);
BGL_EXPORTED_DECL obj_t BGl_utf8zd2stringzd2appendza2za2zz__unicodez00(obj_t);
extern obj_t bstring_to_symbol(obj_t);
static obj_t BGl__utf8zd2normaliza7ezd2utf16za7zz__unicodez00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_makezd2ucs2zd2stringz00zz__unicodez00(int, ucs2_t);
BGL_EXPORTED_DECL bool_t BGl_ucs2zd2stringzd2cize3zd3zf3zc3zz__unicodez00(obj_t, obj_t);
static obj_t BGl_symbol4922z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_z62utf8zd2stringzd2minimalzd2charsetzb0zz__unicodez00(obj_t, obj_t);
static obj_t BGl_vector4996z00zz__unicodez00 = BUNSPEC;
BGL_EXPORTED_DECL ucs2_t BGl_ucs2zd2stringzd2refz00zz__unicodez00(obj_t, int);
static obj_t BGl_z62ucs2zd2stringzd2refz62zz__unicodez00(obj_t, obj_t, obj_t);
static obj_t BGl_errorzd2toozd2shortze70ze7zz__unicodez00(int, obj_t, obj_t);
static obj_t BGl_methodzd2initzd2zz__unicodez00();
static obj_t BGl_8bitszd2invzd2zz__unicodez00 = BUNSPEC;
static obj_t BGl_symbol4933z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_symbol4936z00zz__unicodez00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_ucs2zd2stringzd2upcasez00zz__unicodez00(obj_t);
BGL_EXPORTED_DECL bool_t BGl_ucs2zd2stringzd2cizc3zf3z30zz__unicodez00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_utf8zd2ze38bitsz31zz__unicodez00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_8bitszd2ze3utf8z31zz__unicodez00(obj_t, obj_t);
static obj_t BGl_z62utf8zd2ze3isozd2latinzd215z53zz__unicodez00(obj_t, obj_t);
extern obj_t BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_ucs2zd2stringzd2cizd3zf3z20zz__unicodez00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_ucs2zd2stringzd2setz12z12zz__unicodez00(obj_t, int, ucs2_t);
static obj_t BGl_z62utf8zd2ze3isozd2latinzd215z12z41zz__unicodez00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_ucs2zd2substringzd2urz00zz__unicodez00(obj_t, int, int);
extern obj_t make_string(long, unsigned char);
static obj_t BGl_z62ucs2zd2stringzf3z43zz__unicodez00(obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_utf8zd2stringzd2indexzd2ze3stringzd2indexze3zz__unicodez00(obj_t, long);
static obj_t BGl_z62subucs2zd2stringzd2urz62zz__unicodez00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62utf8zd2stringzd2indexzd2ze3stringzd2indexz81zz__unicodez00(obj_t, obj_t, obj_t);
static obj_t BGl_z62listzd2ze3ucs2zd2stringz81zz__unicodez00(obj_t, obj_t);
static obj_t BGl_cp1252z00zz__unicodez00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_utf8zd2stringzd2refz00zz__unicodez00(obj_t, long);
BGL_EXPORTED_DECL bool_t BGl_ucs2zd2stringzd2cize3zf3z10zz__unicodez00(obj_t, obj_t);
static obj_t BGl_z62ucs2zd2stringzd2setzd2urz12za2zz__unicodez00(obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_utf8zd2ze38bitsz12z23zz__unicodez00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_8bitszd2ze3utf8z12z23zz__unicodez00(obj_t, obj_t);
static obj_t BGl_z62utf8zd2stringzd2refz62zz__unicodez00(obj_t, obj_t, obj_t);
extern obj_t string_append(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_ucs2zd2stringzd2ze3listze3zz__unicodez00(obj_t);
static obj_t BGl_z62ucs2zd2stringzd2downcasez62zz__unicodez00(obj_t, obj_t);
static obj_t BGl_z62ucs2zd2stringzd2minimalzd2charsetzb0zz__unicodez00(obj_t, obj_t);
static obj_t BGl_z62ucs2zd2stringzd2fillz12z70zz__unicodez00(obj_t, obj_t, obj_t);
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2minimalzd2charsetz00zz__unicodez00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_ucs2zd2stringzd2copyz00zz__unicodez00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_utf8zd2ze3cp1252z31zz__unicodez00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_cp1252zd2ze3utf8z31zz__unicodez00(obj_t);
extern obj_t BGl_substringz00zz__r4_strings_6_7z00(obj_t, long, long);
BGL_EXPORTED_DECL obj_t BGl_ucs2zd2stringzd2downcasez00zz__unicodez00(obj_t);
static obj_t BGl_symbol4982z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_symbol4985z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_symbol4988z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_z62asciizd2stringzf3z43zz__unicodez00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_isozd2latinzd2ze3utf8ze3zz__unicodez00(obj_t);
static obj_t BGl_z62isozd2latinzd2ze3utf8z81zz__unicodez00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_ucs2zd2stringzd2appendz00zz__unicodez00(obj_t);
static obj_t BGl_symbol4993z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_z62ucs2zd2stringzd2cizc3zd3zf3z81zz__unicodez00(obj_t, obj_t, obj_t);
static obj_t BGl_z62ucs2zd2stringzd2cizc3zf3z52zz__unicodez00(obj_t, obj_t, obj_t);
static obj_t BGl_8bitszd2invzd2latinzd215zd2zz__unicodez00 = BUNSPEC;
BGL_EXPORTED_DECL ucs2_t BGl_ucs2zd2stringzd2refzd2urzd2zz__unicodez00(obj_t, int);
static obj_t BGl_makezd2tablezd2entryze70ze7zz__unicodez00(obj_t, long);
static long BGl_8bitszd2ze3utf8zd2lengthze3zz__unicodez00(obj_t, long, obj_t);
static long BGl_utf8zd2ze38bitszd2lengthze3zz__unicodez00(obj_t, long);
BGL_EXPORTED_DECL obj_t BGl_utf8zd2stringzd2appendz00zz__unicodez00(obj_t, obj_t);
extern obj_t string_for_read(obj_t);
static obj_t BGl_z62ucs2zd2stringzd2lengthz62zz__unicodez00(obj_t, obj_t);
static obj_t BGl_z62ucs2zd2stringzd2cizd3zf3z42zz__unicodez00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__unicodez00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
static obj_t BGl_z62ucs2zd2stringzd2setz12z70zz__unicodez00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62subucs2zd2stringzb0zz__unicodez00(obj_t, obj_t, obj_t, obj_t);
extern obj_t ucs2_string_to_utf8_string(obj_t);
static obj_t BGl_z628bitszd2ze3utf8z53zz__unicodez00(obj_t, obj_t, obj_t);
static obj_t BGl_z62utf8zd2ze38bitsz53zz__unicodez00(obj_t, obj_t, obj_t);
static obj_t BGl_z62ucs2zd2stringzd2cize3zf3z72zz__unicodez00(obj_t, obj_t, obj_t);
static obj_t BGl_z62utf8zd2stringzd2lengthz62zz__unicodez00(obj_t, obj_t);
extern obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long, long);
BGL_EXPORTED_DECL obj_t BGl_utf8zd2ze3isozd2latinzd215z12z23zz__unicodez00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_utf8zd2ze3isozd2latinze3zz__unicodez00(obj_t);
static obj_t BGl_z62utf8zd2ze3isozd2latinz81zz__unicodez00(obj_t, obj_t);
static obj_t BGl_addzd2tablezd2entryze70ze7zz__unicodez00(obj_t, obj_t, long);
BGL_EXPORTED_DECL obj_t BGl_utf8zd2normaliza7ezd2utf16za7zz__unicodez00(obj_t, bool_t, long, long);
static obj_t BGl_z62ucs2zd2stringzd2copyz62zz__unicodez00(obj_t, obj_t);
extern obj_t utf8_string_to_ucs2_string(obj_t);
static obj_t BGl_cnstzd2initzd2zz__unicodez00();
BGL_EXPORTED_DECL obj_t BGl_ucs2zd2stringzd2setzd2urz12zc0zz__unicodez00(obj_t, int, ucs2_t);
extern long bgl_list_length(obj_t);
static obj_t BGl_z62ucs2zd2stringzd2cize3zd3zf3za1zz__unicodez00(obj_t, obj_t, obj_t);
static obj_t BGl_gczd2rootszd2initz00zz__unicodez00();
extern ucs2_t ucs2_tolower(ucs2_t);
static obj_t BGl_z62inversezd2utf8zd2tablez62zz__unicodez00(obj_t, obj_t);
static obj_t BGl_importedzd2moduleszd2initz00zz__unicodez00();
BGL_EXPORTED_DECL obj_t BGl_ucs2zd2stringzd2zz__unicodez00(obj_t);
static obj_t BGl_z62ucs2zd2stringzc3zf3z80zz__unicodez00(obj_t, obj_t, obj_t);
extern bool_t ucs2_string_ge(obj_t, obj_t);
extern obj_t c_subucs2_string(obj_t, int, int);
extern bool_t ucs2_string_gt(obj_t, obj_t);
static obj_t BGl_z62ucs2zd2stringzd3zf3z90zz__unicodez00(obj_t, obj_t, obj_t);
static obj_t BGl_z62ucs2zd2stringzd2ze3utf8zd2stringz53zz__unicodez00(obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_stringzd2indexzd2ze3utf8zd2stringzd2indexze3zz__unicodez00(obj_t, long);
BGL_EXPORTED_DECL obj_t BGl_ucs2zd2stringzd2downcasez12z12zz__unicodez00(obj_t);
static obj_t BGl_z62stringzd2indexzd2ze3utf8zd2stringzd2indexz81zz__unicodez00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_utf8zd2stringzd2appendzd2fillz12zc0zz__unicodez00(obj_t, long, obj_t, obj_t);
static obj_t BGl__utf8zd2substringzd2zz__unicodez00(obj_t, obj_t);
static obj_t BGl_z62cp1252zd2ze3utf8z12z41zz__unicodez00(obj_t, obj_t);
static obj_t BGl_z62utf8zd2ze3cp1252z12z41zz__unicodez00(obj_t, obj_t);
static obj_t BGl_z62ucs2zd2stringzd2upcasez12z70zz__unicodez00(obj_t, obj_t);
static obj_t BGl_symbol5006z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_z62ucs2zd2stringze3zf3za0zz__unicodez00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_isozd2latinzd2ze3utf8z12zf1zz__unicodez00(obj_t);
static obj_t BGl_z62ucs2zd2substringzd2urz62zz__unicodez00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_tablezd2ze38bitsze70zd6zz__unicodez00(obj_t, obj_t, obj_t, int, obj_t, obj_t, long, long);
BGL_EXPORTED_DECL obj_t BGl_subucs2zd2stringzd2zz__unicodez00(obj_t, int, int);
static obj_t BGl_z62stringzd2minimalzd2charsetz62zz__unicodez00(obj_t, obj_t);
static obj_t BGl_8bitszd2ze3utf8zd2fillz12zf1zz__unicodez00(obj_t, obj_t, long, obj_t);
static obj_t BGl_utf8zd2ze38bitszd2fillz12zf1zz__unicodez00(obj_t, obj_t, int, obj_t);
BGL_EXPORTED_DECL obj_t BGl_utf8zd2ze3isozd2latinzd215z31zz__unicodez00(obj_t);
extern ucs2_t ucs2_toupper(ucs2_t);
static obj_t BGl_symbol5015z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_z62utf8zd2stringzd2ze3ucs2zd2stringz53zz__unicodez00(obj_t, obj_t);
static obj_t BGl_z62ucs2zd2stringzd2ze3listz81zz__unicodez00(obj_t, obj_t);
extern obj_t make_ucs2_string(int, ucs2_t);
extern obj_t BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(obj_t, obj_t, obj_t, obj_t, int, int);
static obj_t BGl_loopze70ze7zz__unicodez00(long, long, obj_t, long);
static obj_t BGl_loopze71ze7zz__unicodez00(obj_t, obj_t);
static obj_t BGl_loopze72ze7zz__unicodez00(obj_t);
static obj_t BGl_z628bitszd2ze3utf8z12z41zz__unicodez00(obj_t, obj_t, obj_t);
static obj_t BGl_z62utf8zd2ze38bitsz12z41zz__unicodez00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_asciizd2stringzf3z21zz__unicodez00(obj_t);
static obj_t BGl_z62ucs2zd2stringzd2downcasez12z70zz__unicodez00(obj_t, obj_t);
extern bool_t ucs2_string_le(obj_t, obj_t);
extern bool_t ucs2_string_lt(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_utf8zd2ze3isozd2latinz12zf1zz__unicodez00(obj_t);
static obj_t BGl_z62cp1252zd2ze3utf8z53zz__unicodez00(obj_t, obj_t);
static obj_t BGl_z62utf8zd2ze3cp1252z53zz__unicodez00(obj_t, obj_t);
static obj_t BGl_z62ucs2zd2stringzd2upcasez62zz__unicodez00(obj_t, obj_t);
static obj_t BGl_symbol5051z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_z62ucs2zd2stringzc3zd3zf3z53zz__unicodez00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol5055z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_symbol5057z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_list4853z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_list4854z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_list4855z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_list4856z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_list4857z00zz__unicodez00 = BUNSPEC;
extern obj_t BGl_blitzd2stringz12zc0zz__r4_strings_6_7z00(obj_t, long, obj_t, long, long);
static obj_t BGl_list4858z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_list4859z00zz__unicodez00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_utf8zd2substringzd2zz__unicodez00(obj_t, long, long);
extern obj_t make_string_sans_fill(long);
BGL_EXPORTED_DECL bool_t BGl_ucs2zd2stringzf3z21zz__unicodez00(obj_t);
static obj_t BGl_z62ucs2zd2stringzb0zz__unicodez00(obj_t, obj_t);
static obj_t BGl_list4860z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_list4861z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_list4862z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_list4863z00zz__unicodez00 = BUNSPEC;
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2stringzd2lengthzd2envzd2zz__unicodez00, BgL_bgl_za762ucs2za7d2string5066z00, BGl_z62ucs2zd2stringzd2lengthz62zz__unicodez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2stringzd2upcasez12zd2envzc0zz__unicodez00, BgL_bgl_za762ucs2za7d2string5067z00, BGl_z62ucs2zd2stringzd2upcasez12z70zz__unicodez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_listzd2ze3ucs2zd2stringzd2envz31zz__unicodez00, BgL_bgl_za762listza7d2za7e3ucs5068za7, BGl_z62listzd2ze3ucs2zd2stringz81zz__unicodez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_utf8zd2stringzd2refzd2envzd2zz__unicodez00, BgL_bgl_za762utf8za7d2string5069z00, BGl_z62utf8zd2stringzd2refz62zz__unicodez00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_8bitszd2ze3utf8z12zd2envzf1zz__unicodez00, BgL_bgl_za7628bitsza7d2za7e3ut5070za7, BGl_z628bitszd2ze3utf8z12z41zz__unicodez00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_utf8zd2ze38bitsz12zd2envzf1zz__unicodez00, BgL_bgl_za762utf8za7d2za7e38bi5071za7, BGl_z62utf8zd2ze38bitsz12z41zz__unicodez00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2stringzd2downcasez12zd2envzc0zz__unicodez00, BgL_bgl_za762ucs2za7d2string5072z00, BGl_z62ucs2zd2stringzd2downcasez12z70zz__unicodez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_cp1252zd2ze3utf8z12zd2envzf1zz__unicodez00, BgL_bgl_za762cp1252za7d2za7e3u5073za7, BGl_z62cp1252zd2ze3utf8z12z41zz__unicodez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_utf8zd2ze3cp1252z12zd2envzf1zz__unicodez00, BgL_bgl_za762utf8za7d2za7e3cp15074za7, BGl_z62utf8zd2ze3cp1252z12z41zz__unicodez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2stringzd2cizd3zf3zd2envzf2zz__unicodez00, BgL_bgl_za762ucs2za7d2string5075z00, BGl_z62ucs2zd2stringzd2cizd3zf3z42zz__unicodez00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_isozd2latinzd2ze3utf8z12zd2envz23zz__unicodez00, BgL_bgl_za762isoza7d2latinza7d5076za7, BGl_z62isozd2latinzd2ze3utf8z12z93zz__unicodez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_subucs2zd2stringzd2envz00zz__unicodez00, BgL_bgl_za762subucs2za7d2str5077z00, BGl_z62subucs2zd2stringzb0zz__unicodez00, 0L, BUNSPEC, 3 );
DEFINE_STRING( BGl_string5000z00zz__unicodez00, BgL_bgl_string5000za700za7za7_5078za7, "bchar", 5 );
DEFINE_STRING( BGl_string5001z00zz__unicodez00, BgL_bgl_string5001za700za7za7_5079za7, "&utf8-string-length", 19 );
DEFINE_STRING( BGl_string5002z00zz__unicodez00, BgL_bgl_string5002za700za7za7_5080za7, "&utf8-string-ref", 16 );
DEFINE_STRING( BGl_string5003z00zz__unicodez00, BgL_bgl_string5003za700za7za7_5081za7, "&utf8-string-index->string-index", 32 );
DEFINE_STRING( BGl_string5004z00zz__unicodez00, BgL_bgl_string5004za700za7za7_5082za7, "&string-index->utf8-string-index", 32 );
DEFINE_STRING( BGl_string5005z00zz__unicodez00, BgL_bgl_string5005za700za7za7_5083za7, "utf8-collapse!", 14 );
DEFINE_STRING( BGl_string5007z00zz__unicodez00, BgL_bgl_string5007za700za7za7_5084za7, "utf8-string-append-fill!", 24 );
DEFINE_STRING( BGl_string5008z00zz__unicodez00, BgL_bgl_string5008za700za7za7_5085za7, "wrong number of arguments: [3..4] expected, provided", 52 );
DEFINE_STRING( BGl_string5009z00zz__unicodez00, BgL_bgl_string5009za700za7za7_5086za7, "_utf8-string-append-fill!", 25 );
DEFINE_STRING( BGl_string5010z00zz__unicodez00, BgL_bgl_string5010za700za7za7_5087za7, "&utf8-string-append", 19 );
DEFINE_STRING( BGl_string5011z00zz__unicodez00, BgL_bgl_string5011za700za7za7_5088za7, "<@anonymous:2219>", 17 );
DEFINE_STRING( BGl_string5012z00zz__unicodez00, BgL_bgl_string5012za700za7za7_5089za7, "for-each", 8 );
DEFINE_STRING( BGl_string5013z00zz__unicodez00, BgL_bgl_string5013za700za7za7_5090za7, "list", 4 );
DEFINE_STRING( BGl_string5014z00zz__unicodez00, BgL_bgl_string5014za700za7za7_5091za7, "<@anonymous:2224>", 17 );
DEFINE_STRING( BGl_string5016z00zz__unicodez00, BgL_bgl_string5016za700za7za7_5092za7, "utf8-substring", 14 );
DEFINE_STRING( BGl_string5017z00zz__unicodez00, BgL_bgl_string5017za700za7za7_5093za7, "wrong number of arguments: [2..3] expected, provided", 52 );
DEFINE_STRING( BGl_string5018z00zz__unicodez00, BgL_bgl_string5018za700za7za7_5094za7, "_utf8-substring", 15 );
DEFINE_STRING( BGl_string5019z00zz__unicodez00, BgL_bgl_string5019za700za7za7_5095za7, "Illegal start index \"", 21 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2stringzd2upcasezd2envzd2zz__unicodez00, BgL_bgl_za762ucs2za7d2string5096z00, BGl_z62ucs2zd2stringzd2upcasez62zz__unicodez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2stringzc3zd3zf3zd2envze3zz__unicodez00, BgL_bgl_za762ucs2za7d2string5097z00, BGl_z62ucs2zd2stringzc3zd3zf3z53zz__unicodez00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string5020z00zz__unicodez00, BgL_bgl_string5020za700za7za7_5098za7, "\"", 1 );
DEFINE_STRING( BGl_string5021z00zz__unicodez00, BgL_bgl_string5021za700za7za7_5099za7, "Illegal end index \"", 19 );
DEFINE_STRING( BGl_string5022z00zz__unicodez00, BgL_bgl_string5022za700za7za7_5100za7, "error-ill", 9 );
DEFINE_STRING( BGl_string5023z00zz__unicodez00, BgL_bgl_string5023za700za7za7_5101za7, "Illegal character \"~x\" at index ~a", 34 );
DEFINE_STRING( BGl_string5024z00zz__unicodez00, BgL_bgl_string5024za700za7za7_5102za7, "utf8->8bits", 11 );
DEFINE_STRING( BGl_string5025z00zz__unicodez00, BgL_bgl_string5025za700za7za7_5103za7, "error-too-short~0", 17 );
DEFINE_STRING( BGl_string5026z00zz__unicodez00, BgL_bgl_string5026za700za7za7_5104za7, "String too short", 16 );
DEFINE_STRING( BGl_string5027z00zz__unicodez00, BgL_bgl_string5027za700za7za7_5105za7, "error-subtable", 14 );
DEFINE_STRING( BGl_string5028z00zz__unicodez00, BgL_bgl_string5028za700za7za7_5106za7, "Cannot encode at index ", 23 );
DEFINE_STRING( BGl_string5029z00zz__unicodez00, BgL_bgl_string5029za700za7za7_5107za7, "table->8bits~0", 14 );
DEFINE_STRING( BGl_string5030z00zz__unicodez00, BgL_bgl_string5030za700za7za7_5108za7, "liip", 4 );
DEFINE_STRING( BGl_string5031z00zz__unicodez00, BgL_bgl_string5031za700za7za7_5109za7, "&utf8->8bits", 12 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2substringzd2urzd2envzd2zz__unicodez00, BgL_bgl_za762ucs2za7d2substr5110z00, BGl_z62ucs2zd2substringzd2urz62zz__unicodez00, 0L, BUNSPEC, 3 );
DEFINE_STRING( BGl_string5032z00zz__unicodez00, BgL_bgl_string5032za700za7za7_5111za7, "utf8->8bits!", 12 );
DEFINE_STRING( BGl_string5033z00zz__unicodez00, BgL_bgl_string5033za700za7za7_5112za7, "&utf8->8bits!", 13 );
DEFINE_STRING( BGl_string5034z00zz__unicodez00, BgL_bgl_string5034za700za7za7_5113za7, "utf8->iso-latin", 15 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_utf8zd2ze3isozd2latinz12zd2envz23zz__unicodez00, BgL_bgl_za762utf8za7d2za7e3iso5114za7, BGl_z62utf8zd2ze3isozd2latinz12z93zz__unicodez00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string5035z00zz__unicodez00, BgL_bgl_string5035za700za7za7_5115za7, "&utf8->iso-latin", 16 );
DEFINE_STRING( BGl_string5036z00zz__unicodez00, BgL_bgl_string5036za700za7za7_5116za7, "utf8->iso-latin!", 16 );
DEFINE_STRING( BGl_string5037z00zz__unicodez00, BgL_bgl_string5037za700za7za7_5117za7, "&utf8->iso-latin!", 17 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_utf8zd2stringzd2indexzd2ze3stringzd2indexzd2envz31zz__unicodez00, BgL_bgl_za762utf8za7d2string5118z00, BGl_z62utf8zd2stringzd2indexzd2ze3stringzd2indexz81zz__unicodez00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string5038z00zz__unicodez00, BgL_bgl_string5038za700za7za7_5119za7, "utf8->iso-latin-15", 18 );
DEFINE_STRING( BGl_string5039z00zz__unicodez00, BgL_bgl_string5039za700za7za7_5120za7, "&utf8->iso-latin-15", 19 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2stringzd2appendzd2envzd2zz__unicodez00, BgL_bgl_za762ucs2za7d2string5121z00, va_generic_entry, BGl_z62ucs2zd2stringzd2appendz62zz__unicodez00, BUNSPEC, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2stringzd2cize3zf3zd2envzc2zz__unicodez00, BgL_bgl_za762ucs2za7d2string5122z00, BGl_z62ucs2zd2stringzd2cize3zf3z72zz__unicodez00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_utf8zd2stringzd2lengthzd2envzd2zz__unicodez00, BgL_bgl_za762utf8za7d2string5123z00, BGl_z62utf8zd2stringzd2lengthz62zz__unicodez00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string5040z00zz__unicodez00, BgL_bgl_string5040za700za7za7_5124za7, "utf8->iso-latin-15!", 19 );
DEFINE_STRING( BGl_string5041z00zz__unicodez00, BgL_bgl_string5041za700za7za7_5125za7, "&utf8->iso-latin-15!", 20 );
DEFINE_STRING( BGl_string5042z00zz__unicodez00, BgL_bgl_string5042za700za7za7_5126za7, "&utf8->cp1252", 13 );
DEFINE_STRING( BGl_string5043z00zz__unicodez00, BgL_bgl_string5043za700za7za7_5127za7, "&utf8->cp1252!", 14 );
DEFINE_STRING( BGl_string5044z00zz__unicodez00, BgL_bgl_string5044za700za7za7_5128za7, "table-ref-len", 13 );
DEFINE_STRING( BGl_string5045z00zz__unicodez00, BgL_bgl_string5045za700za7za7_5129za7, "&8bits->utf8", 12 );
DEFINE_STRING( BGl_string5046z00zz__unicodez00, BgL_bgl_string5046za700za7za7_5130za7, "&8bits->utf8!", 13 );
DEFINE_STRING( BGl_string5047z00zz__unicodez00, BgL_bgl_string5047za700za7za7_5131za7, "&iso-latin->utf8", 16 );
DEFINE_STRING( BGl_string5048z00zz__unicodez00, BgL_bgl_string5048za700za7za7_5132za7, "&iso-latin->utf8!", 17 );
DEFINE_STRING( BGl_string5049z00zz__unicodez00, BgL_bgl_string5049za700za7za7_5133za7, "&cp1252->utf8", 13 );
DEFINE_STRING( BGl_string5050z00zz__unicodez00, BgL_bgl_string5050za700za7za7_5134za7, "&cp1252->utf8!", 14 );
DEFINE_STRING( BGl_string5052z00zz__unicodez00, BgL_bgl_string5052za700za7za7_5135za7, "latin1", 6 );
DEFINE_STRING( BGl_string5053z00zz__unicodez00, BgL_bgl_string5053za700za7za7_5136za7, "&string-minimal-charset", 23 );
DEFINE_STRING( BGl_string5054z00zz__unicodez00, BgL_bgl_string5054za700za7za7_5137za7, "&utf8-string-minimal-charset", 28 );
DEFINE_STRING( BGl_string5056z00zz__unicodez00, BgL_bgl_string5056za700za7za7_5138za7, "ucs2", 4 );
DEFINE_STRING( BGl_string5058z00zz__unicodez00, BgL_bgl_string5058za700za7za7_5139za7, "utf16", 5 );
DEFINE_STRING( BGl_string5059z00zz__unicodez00, BgL_bgl_string5059za700za7za7_5140za7, "&ucs2-string-minimal-charset", 28 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_cp1252zd2ze3utf8zd2envze3zz__unicodez00, BgL_bgl_za762cp1252za7d2za7e3u5141za7, BGl_z62cp1252zd2ze3utf8z53zz__unicodez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_utf8zd2ze3cp1252zd2envze3zz__unicodez00, BgL_bgl_za762utf8za7d2za7e3cp15142za7, BGl_z62utf8zd2ze3cp1252z53zz__unicodez00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string5060z00zz__unicodez00, BgL_bgl_string5060za700za7za7_5143za7, "__unicode", 9 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_utf8zd2stringzf3zd2envzf3zz__unicodez00, BgL_bgl__utf8za7d2stringza7f5144z00, opt_generic_entry, BGl__utf8zd2stringzf3z21zz__unicodez00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_asciizd2stringzf3zd2envzf3zz__unicodez00, BgL_bgl_za762asciiza7d2strin5145z00, BGl_z62asciizd2stringzf3z43zz__unicodez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_utf8zd2stringzd2appendzd2fillz12zd2envz12zz__unicodez00, BgL_bgl__utf8za7d2stringza7d5146z00, opt_generic_entry, BGl__utf8zd2stringzd2appendzd2fillz12zc0zz__unicodez00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_utf8zd2ze3isozd2latinzd215z12zd2envzf1zz__unicodez00, BgL_bgl_za762utf8za7d2za7e3iso5147za7, BGl_z62utf8zd2ze3isozd2latinzd215z12z41zz__unicodez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2stringzd2cizc3zd3zf3zd2envz31zz__unicodez00, BgL_bgl_za762ucs2za7d2string5148z00, BGl_z62ucs2zd2stringzd2cizc3zd3zf3z81zz__unicodez00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_utf8zd2ze3isozd2latinzd215zd2envze3zz__unicodez00, BgL_bgl_za762utf8za7d2za7e3iso5149za7, BGl_z62utf8zd2ze3isozd2latinzd215z53zz__unicodez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2stringzd2refzd2urzd2envz00zz__unicodez00, BgL_bgl_za762ucs2za7d2string5150z00, BGl_z62ucs2zd2stringzd2refzd2urzb0zz__unicodez00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2stringzd2ze3listzd2envz31zz__unicodez00, BgL_bgl_za762ucs2za7d2string5151z00, BGl_z62ucs2zd2stringzd2ze3listz81zz__unicodez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_utf8zd2charzd2siza7ezd2envz75zz__unicodez00, BgL_bgl_za762utf8za7d2charza7d5152za7, BGl_z62utf8zd2charzd2siza7ezc5zz__unicodez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_utf8zd2stringzd2appendza2zd2envz70zz__unicodez00, BgL_bgl_za762utf8za7d2string5153z00, va_generic_entry, BGl_z62utf8zd2stringzd2appendza2zc0zz__unicodez00, BUNSPEC, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2substringzd2envz00zz__unicodez00, BgL_bgl_za762ucs2za7d2substr5154z00, BGl_z62ucs2zd2substringzb0zz__unicodez00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2stringzd2setzd2urz12zd2envz12zz__unicodez00, BgL_bgl_za762ucs2za7d2string5155z00, BGl_z62ucs2zd2stringzd2setzd2urz12za2zz__unicodez00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_utf8zd2stringzd2appendzd2envzd2zz__unicodez00, BgL_bgl_za762utf8za7d2string5156z00, BGl_z62utf8zd2stringzd2appendz62zz__unicodez00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_utf8zd2substringzd2envz00zz__unicodez00, BgL_bgl__utf8za7d2substrin5157za7, opt_generic_entry, BGl__utf8zd2substringzd2zz__unicodez00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2stringzc3zf3zd2envz30zz__unicodez00, BgL_bgl_za762ucs2za7d2string5158z00, BGl_z62ucs2zd2stringzc3zf3z80zz__unicodez00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2stringzd2copyzd2envzd2zz__unicodez00, BgL_bgl_za762ucs2za7d2string5159z00, BGl_z62ucs2zd2stringzd2copyz62zz__unicodez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2stringze3zd3zf3zd2envzc3zz__unicodez00, BgL_bgl_za762ucs2za7d2string5160z00, BGl_z62ucs2zd2stringze3zd3zf3z73zz__unicodez00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2indexzd2ze3utf8zd2stringzd2indexzd2envz31zz__unicodez00, BgL_bgl_za762stringza7d2inde5161z00, BGl_z62stringzd2indexzd2ze3utf8zd2stringzd2indexz81zz__unicodez00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string4900z00zz__unicodez00, BgL_bgl_string4900za700za7za7_5162za7, "†", 3 );
DEFINE_STRING( BGl_string4901z00zz__unicodez00, BgL_bgl_string4901za700za7za7_5163za7, "‡", 3 );
DEFINE_STRING( BGl_string4902z00zz__unicodez00, BgL_bgl_string4902za700za7za7_5164za7, "ˆ", 2 );
DEFINE_STRING( BGl_string4903z00zz__unicodez00, BgL_bgl_string4903za700za7za7_5165za7, "‰", 3 );
DEFINE_STRING( BGl_string4904z00zz__unicodez00, BgL_bgl_string4904za700za7za7_5166za7, "Š", 2 );
DEFINE_STRING( BGl_string4905z00zz__unicodez00, BgL_bgl_string4905za700za7za7_5167za7, "‹", 3 );
DEFINE_STRING( BGl_string4906z00zz__unicodez00, BgL_bgl_string4906za700za7za7_5168za7, "Œ", 2 );
DEFINE_STRING( BGl_string4907z00zz__unicodez00, BgL_bgl_string4907za700za7za7_5169za7, "Ž", 2 );
DEFINE_STRING( BGl_string4908z00zz__unicodez00, BgL_bgl_string4908za700za7za7_5170za7, "‘", 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_utf8zd2normaliza7ezd2utf16zd2envz75zz__unicodez00, BgL_bgl__utf8za7d2normaliza75171z00, opt_generic_entry, BGl__utf8zd2normaliza7ezd2utf16za7zz__unicodez00, BFALSE, -1 );
DEFINE_STRING( BGl_string4909z00zz__unicodez00, BgL_bgl_string4909za700za7za7_5172za7, "’", 3 );
DEFINE_STRING( BGl_string4910z00zz__unicodez00, BgL_bgl_string4910za700za7za7_5173za7, "“", 3 );
DEFINE_STRING( BGl_string4911z00zz__unicodez00, BgL_bgl_string4911za700za7za7_5174za7, "”", 3 );
DEFINE_STRING( BGl_string4912z00zz__unicodez00, BgL_bgl_string4912za700za7za7_5175za7, "•", 3 );
DEFINE_STRING( BGl_string4913z00zz__unicodez00, BgL_bgl_string4913za700za7za7_5176za7, "–", 3 );
DEFINE_STRING( BGl_string4914z00zz__unicodez00, BgL_bgl_string4914za700za7za7_5177za7, "—", 3 );
DEFINE_STRING( BGl_string4915z00zz__unicodez00, BgL_bgl_string4915za700za7za7_5178za7, "˜", 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2stringzd2refzd2envzd2zz__unicodez00, BgL_bgl_za762ucs2za7d2string5179z00, BGl_z62ucs2zd2stringzd2refz62zz__unicodez00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string4916z00zz__unicodez00, BgL_bgl_string4916za700za7za7_5180za7, "™", 3 );
DEFINE_STRING( BGl_string4917z00zz__unicodez00, BgL_bgl_string4917za700za7za7_5181za7, "š", 2 );
DEFINE_STRING( BGl_string4918z00zz__unicodez00, BgL_bgl_string4918za700za7za7_5182za7, "›", 3 );
DEFINE_STRING( BGl_string4919z00zz__unicodez00, BgL_bgl_string4919za700za7za7_5183za7, "œ", 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2stringzd2minimalzd2charsetzd2envz00zz__unicodez00, BgL_bgl_za762ucs2za7d2string5184z00, BGl_z62ucs2zd2stringzd2minimalzd2charsetzb0zz__unicodez00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4920z00zz__unicodez00, BgL_bgl_string4920za700za7za7_5185za7, "ž", 2 );
DEFINE_STRING( BGl_string4921z00zz__unicodez00, BgL_bgl_string4921za700za7za7_5186za7, "Ÿ", 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2minimalzd2charsetzd2envzd2zz__unicodez00, BgL_bgl_za762stringza7d2mini5187z00, BGl_z62stringzd2minimalzd2charsetz62zz__unicodez00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4923z00zz__unicodez00, BgL_bgl_string4923za700za7za7_5188za7, "make-ucs2-string", 16 );
DEFINE_STRING( BGl_string4924z00zz__unicodez00, BgL_bgl_string4924za700za7za7_5189za7, "wrong number of arguments: [1..2] expected, provided", 52 );
DEFINE_STRING( BGl_string4925z00zz__unicodez00, BgL_bgl_string4925za700za7za7_5190za7, "/tmp/4.4a/runtime/Llib/unicode.scm", 34 );
DEFINE_STRING( BGl_string4926z00zz__unicodez00, BgL_bgl_string4926za700za7za7_5191za7, "_make-ucs2-string", 17 );
DEFINE_STRING( BGl_string4927z00zz__unicodez00, BgL_bgl_string4927za700za7za7_5192za7, "bint", 4 );
DEFINE_STRING( BGl_string4928z00zz__unicodez00, BgL_bgl_string4928za700za7za7_5193za7, "bucs2", 5 );
DEFINE_STRING( BGl_string4929z00zz__unicodez00, BgL_bgl_string4929za700za7za7_5194za7, "&ucs2-string-length", 19 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2stringzd3zf3zd2envz20zz__unicodez00, BgL_bgl_za762ucs2za7d2string5195z00, BGl_z62ucs2zd2stringzd3zf3z90zz__unicodez00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2stringzd2downcasezd2envzd2zz__unicodez00, BgL_bgl_za762ucs2za7d2string5196z00, BGl_z62ucs2zd2stringzd2downcasez62zz__unicodez00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4930z00zz__unicodez00, BgL_bgl_string4930za700za7za7_5197za7, "ucs2string", 10 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_inversezd2utf8zd2tablezd2envzd2zz__unicodez00, BgL_bgl_za762inverseza7d2utf5198z00, BGl_z62inversezd2utf8zd2tablez62zz__unicodez00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4931z00zz__unicodez00, BgL_bgl_string4931za700za7za7_5199za7, "index out of range [0..", 23 );
DEFINE_STRING( BGl_string4932z00zz__unicodez00, BgL_bgl_string4932za700za7za7_5200za7, "]", 1 );
DEFINE_STRING( BGl_string4934z00zz__unicodez00, BgL_bgl_string4934za700za7za7_5201za7, "ucs2-string-ref", 15 );
DEFINE_STRING( BGl_string4935z00zz__unicodez00, BgL_bgl_string4935za700za7za7_5202za7, "&ucs2-string-ref", 16 );
DEFINE_STRING( BGl_string4937z00zz__unicodez00, BgL_bgl_string4937za700za7za7_5203za7, "ucs2-string-set!", 16 );
DEFINE_STRING( BGl_string4938z00zz__unicodez00, BgL_bgl_string4938za700za7za7_5204za7, "&ucs2-string-set!", 17 );
DEFINE_STRING( BGl_string4939z00zz__unicodez00, BgL_bgl_string4939za700za7za7_5205za7, "&ucs2-string-ref-ur", 19 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2stringzd2setz12zd2envzc0zz__unicodez00, BgL_bgl_za762ucs2za7d2string5206z00, BGl_z62ucs2zd2stringzd2setz12z70zz__unicodez00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_isozd2latinzd2ze3utf8zd2envz31zz__unicodez00, BgL_bgl_za762isoza7d2latinza7d5207za7, BGl_z62isozd2latinzd2ze3utf8z81zz__unicodez00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4940z00zz__unicodez00, BgL_bgl_string4940za700za7za7_5208za7, "&ucs2-string-set-ur!", 20 );
DEFINE_STRING( BGl_string4941z00zz__unicodez00, BgL_bgl_string4941za700za7za7_5209za7, "&ucs2-string=?", 14 );
DEFINE_STRING( BGl_string4942z00zz__unicodez00, BgL_bgl_string4942za700za7za7_5210za7, "&ucs2-string-ci=?", 17 );
DEFINE_STRING( BGl_string4943z00zz__unicodez00, BgL_bgl_string4943za700za7za7_5211za7, "&ucs2-string<?", 14 );
DEFINE_STRING( BGl_string4944z00zz__unicodez00, BgL_bgl_string4944za700za7za7_5212za7, "&ucs2-string>?", 14 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2ucs2zd2stringzd2envzd2zz__unicodez00, BgL_bgl__makeza7d2ucs2za7d2s5213z00, opt_generic_entry, BGl__makezd2ucs2zd2stringz00zz__unicodez00, BFALSE, -1 );
DEFINE_STRING( BGl_string4945z00zz__unicodez00, BgL_bgl_string4945za700za7za7_5214za7, "&ucs2-string<=?", 15 );
DEFINE_STRING( BGl_string4946z00zz__unicodez00, BgL_bgl_string4946za700za7za7_5215za7, "&ucs2-string>=?", 15 );
DEFINE_STRING( BGl_string4947z00zz__unicodez00, BgL_bgl_string4947za700za7za7_5216za7, "&ucs2-string-ci<?", 17 );
DEFINE_STRING( BGl_string4948z00zz__unicodez00, BgL_bgl_string4948za700za7za7_5217za7, "&ucs2-string-ci>?", 17 );
DEFINE_STRING( BGl_string4949z00zz__unicodez00, BgL_bgl_string4949za700za7za7_5218za7, "&ucs2-string-ci<=?", 18 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2stringzd2cize3zd3zf3zd2envz11zz__unicodez00, BgL_bgl_za762ucs2za7d2string5219z00, BGl_z62ucs2zd2stringzd2cize3zd3zf3za1zz__unicodez00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_utf8zd2stringzd2minimalzd2charsetzd2envz00zz__unicodez00, BgL_bgl_za762utf8za7d2string5220z00, BGl_z62utf8zd2stringzd2minimalzd2charsetzb0zz__unicodez00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4950z00zz__unicodez00, BgL_bgl_string4950za700za7za7_5221za7, "&ucs2-string-ci>=?", 18 );
DEFINE_STRING( BGl_string4951z00zz__unicodez00, BgL_bgl_string4951za700za7za7_5222za7, "subucs2-string", 14 );
DEFINE_STRING( BGl_string4952z00zz__unicodez00, BgL_bgl_string4952za700za7za7_5223za7, "Illegal index", 13 );
DEFINE_STRING( BGl_string4953z00zz__unicodez00, BgL_bgl_string4953za700za7za7_5224za7, "&subucs2-string", 15 );
DEFINE_STRING( BGl_string4954z00zz__unicodez00, BgL_bgl_string4954za700za7za7_5225za7, "&subucs2-string-ur", 18 );
DEFINE_STRING( BGl_string4955z00zz__unicodez00, BgL_bgl_string4955za700za7za7_5226za7, "ucs2-substring", 14 );
DEFINE_STRING( BGl_string4956z00zz__unicodez00, BgL_bgl_string4956za700za7za7_5227za7, "&ucs2-substring", 15 );
DEFINE_STRING( BGl_string4957z00zz__unicodez00, BgL_bgl_string4957za700za7za7_5228za7, "&ucs2-substring-ur", 18 );
DEFINE_STRING( BGl_string4958z00zz__unicodez00, BgL_bgl_string4958za700za7za7_5229za7, "ucs2-string-append", 18 );
DEFINE_STRING( BGl_string4959z00zz__unicodez00, BgL_bgl_string4959za700za7za7_5230za7, "loop~2", 6 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2stringzd2fillz12zd2envzc0zz__unicodez00, BgL_bgl_za762ucs2za7d2string5231z00, BGl_z62ucs2zd2stringzd2fillz12z70zz__unicodez00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2stringzd2envz00zz__unicodez00, BgL_bgl_za762ucs2za7d2string5232z00, va_generic_entry, BGl_z62ucs2zd2stringzb0zz__unicodez00, BUNSPEC, -1 );
DEFINE_STRING( BGl_string4960z00zz__unicodez00, BgL_bgl_string4960za700za7za7_5233za7, "pair", 4 );
DEFINE_STRING( BGl_string4961z00zz__unicodez00, BgL_bgl_string4961za700za7za7_5234za7, "list->ucs2-string", 17 );
DEFINE_STRING( BGl_string4962z00zz__unicodez00, BgL_bgl_string4962za700za7za7_5235za7, "pair-nil", 8 );
DEFINE_STRING( BGl_string4963z00zz__unicodez00, BgL_bgl_string4963za700za7za7_5236za7, "loop", 4 );
DEFINE_STRING( BGl_string4964z00zz__unicodez00, BgL_bgl_string4964za700za7za7_5237za7, "&ucs2-string->list", 18 );
DEFINE_STRING( BGl_string4965z00zz__unicodez00, BgL_bgl_string4965za700za7za7_5238za7, "&ucs2-string-copy", 17 );
DEFINE_STRING( BGl_string4966z00zz__unicodez00, BgL_bgl_string4966za700za7za7_5239za7, "&ucs2-string-fill!", 18 );
DEFINE_STRING( BGl_string4967z00zz__unicodez00, BgL_bgl_string4967za700za7za7_5240za7, "&ucs2-string-upcase", 19 );
DEFINE_STRING( BGl_string4968z00zz__unicodez00, BgL_bgl_string4968za700za7za7_5241za7, "&ucs2-string-downcase", 21 );
DEFINE_STRING( BGl_string4969z00zz__unicodez00, BgL_bgl_string4969za700za7za7_5242za7, "&ucs2-string-upcase!", 20 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_8bitszd2ze3utf8zd2envze3zz__unicodez00, BgL_bgl_za7628bitsza7d2za7e3ut5243za7, BGl_z628bitszd2ze3utf8z53zz__unicodez00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_utf8zd2ze38bitszd2envze3zz__unicodez00, BgL_bgl_za762utf8za7d2za7e38bi5244za7, BGl_z62utf8zd2ze38bitsz53zz__unicodez00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string4970z00zz__unicodez00, BgL_bgl_string4970za700za7za7_5245za7, "&ucs2-string-downcase!", 22 );
DEFINE_STRING( BGl_string4971z00zz__unicodez00, BgL_bgl_string4971za700za7za7_5246za7, "&ucs2-string->utf8-string", 25 );
DEFINE_STRING( BGl_string4972z00zz__unicodez00, BgL_bgl_string4972za700za7za7_5247za7, "vector-ref", 10 );
DEFINE_STRING( BGl_string4973z00zz__unicodez00, BgL_bgl_string4973za700za7za7_5248za7, "bstring", 7 );
DEFINE_STRING( BGl_string4974z00zz__unicodez00, BgL_bgl_string4974za700za7za7_5249za7, "loop~0", 6 );
DEFINE_STRING( BGl_string4975z00zz__unicodez00, BgL_bgl_string4975za700za7za7_5250za7, "string-ref", 10 );
DEFINE_STRING( BGl_string4894z00zz__unicodez00, BgL_bgl_string4894za700za7za7_5251za7, "€", 3 );
DEFINE_STRING( BGl_string4976z00zz__unicodez00, BgL_bgl_string4976za700za7za7_5252za7, "make-table-entry~0", 18 );
DEFINE_STRING( BGl_string4895z00zz__unicodez00, BgL_bgl_string4895za700za7za7_5253za7, "", 0 );
DEFINE_STRING( BGl_string4977z00zz__unicodez00, BgL_bgl_string4977za700za7za7_5254za7, "loop~1", 6 );
DEFINE_STRING( BGl_string4896z00zz__unicodez00, BgL_bgl_string4896za700za7za7_5255za7, "‚", 3 );
DEFINE_STRING( BGl_string4978z00zz__unicodez00, BgL_bgl_string4978za700za7za7_5256za7, "add-table-entry~0", 17 );
DEFINE_STRING( BGl_string4897z00zz__unicodez00, BgL_bgl_string4897za700za7za7_5257za7, "ƒ", 2 );
DEFINE_STRING( BGl_string4979z00zz__unicodez00, BgL_bgl_string4979za700za7za7_5258za7, "&inverse-utf8-table", 19 );
DEFINE_STRING( BGl_string4898z00zz__unicodez00, BgL_bgl_string4898za700za7za7_5259za7, "„", 3 );
DEFINE_STRING( BGl_string4899z00zz__unicodez00, BgL_bgl_string4899za700za7za7_5260za7, "…", 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2stringze3zf3zd2envz10zz__unicodez00, BgL_bgl_za762ucs2za7d2string5261z00, BGl_z62ucs2zd2stringze3zf3za0zz__unicodez00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_subucs2zd2stringzd2urzd2envzd2zz__unicodez00, BgL_bgl_za762subucs2za7d2str5262z00, BGl_z62subucs2zd2stringzd2urz62zz__unicodez00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_utf8zd2ze3isozd2latinzd2envz31zz__unicodez00, BgL_bgl_za762utf8za7d2za7e3iso5263za7, BGl_z62utf8zd2ze3isozd2latinz81zz__unicodez00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4980z00zz__unicodez00, BgL_bgl_string4980za700za7za7_5264za7, "vector", 6 );
DEFINE_STRING( BGl_string4981z00zz__unicodez00, BgL_bgl_string4981za700za7za7_5265za7, "&utf8-string->ucs2-string", 25 );
DEFINE_STRING( BGl_string4983z00zz__unicodez00, BgL_bgl_string4983za700za7za7_5266za7, "ascii", 5 );
DEFINE_STRING( BGl_string4984z00zz__unicodez00, BgL_bgl_string4984za700za7za7_5267za7, "&ascii-string?", 14 );
DEFINE_STRING( BGl_string4986z00zz__unicodez00, BgL_bgl_string4986za700za7za7_5268za7, "utf8-string?", 12 );
DEFINE_STRING( BGl_string4987z00zz__unicodez00, BgL_bgl_string4987za700za7za7_5269za7, "_utf8-string?", 13 );
DEFINE_STRING( BGl_string4989z00zz__unicodez00, BgL_bgl_string4989za700za7za7_5270za7, "utf8-normalize-utf16", 20 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2stringzd2ze3utf8zd2stringzd2envze3zz__unicodez00, BgL_bgl_za762ucs2za7d2string5271z00, BGl_z62ucs2zd2stringzd2ze3utf8zd2stringz53zz__unicodez00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4990z00zz__unicodez00, BgL_bgl_string4990za700za7za7_5272za7, "wrong number of arguments: [1..4] expected, provided", 52 );
DEFINE_STRING( BGl_string4991z00zz__unicodez00, BgL_bgl_string4991za700za7za7_5273za7, "_utf8-normalize-utf16", 21 );
DEFINE_STRING( BGl_string4992z00zz__unicodez00, BgL_bgl_string4992za700za7za7_5274za7, "Illegal indexes", 15 );
DEFINE_STRING( BGl_string4994z00zz__unicodez00, BgL_bgl_string4994za700za7za7_5275za7, "utf8", 4 );
DEFINE_STRING( BGl_string4995z00zz__unicodez00, BgL_bgl_string4995za700za7za7_5276za7, "string-set!", 11 );
DEFINE_STRING( BGl_string4998z00zz__unicodez00, BgL_bgl_string4998za700za7za7_5277za7, "utf8-char-size", 14 );
DEFINE_STRING( BGl_string4999z00zz__unicodez00, BgL_bgl_string4999za700za7za7_5278za7, "&utf8-char-size", 15 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2stringzf3zd2envzf3zz__unicodez00, BgL_bgl_za762ucs2za7d2string5279z00, BGl_z62ucs2zd2stringzf3z43zz__unicodez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2stringzd2cizc3zf3zd2envze2zz__unicodez00, BgL_bgl_za762ucs2za7d2string5280z00, BGl_z62ucs2zd2stringzd2cizc3zf3z52zz__unicodez00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_utf8zd2stringzd2ze3ucs2zd2stringzd2envze3zz__unicodez00, BgL_bgl_za762utf8za7d2string5281z00, BGl_z62utf8zd2stringzd2ze3ucs2zd2stringz53zz__unicodez00, 0L, BUNSPEC, 1 );

/* GC roots registration */
static obj_t bgl_gc_roots_register() {
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
void *roots_min = (void*)ULONG_MAX, *roots_max = 0;
ADD_ROOT( (void *)(&BGl_list4864z00zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_list4865z00zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_list4866z00zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_list4867z00zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_list4868z00zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_list4869z00zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_list4870z00zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_list4871z00zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_list4872z00zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_list4873z00zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_list4874z00zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_list4875z00zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_list4876z00zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_list4877z00zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_list4878z00zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_list4879z00zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_list4880z00zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_list4881z00zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_list4882z00zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_list4883z00zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_list4884z00zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_list4885z00zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_list4886z00zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_list4887z00zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_list4888z00zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_list4889z00zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_requirezd2initializa7ationz75zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_list4890z00zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_list4891z00zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_list4893z00zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_list4997z00zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_vector4892z00zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_cp1252zd2invzd2zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_symbol4922z00zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_vector4996z00zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_8bitszd2invzd2zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_symbol4933z00zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_symbol4936z00zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_cp1252z00zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_symbol4982z00zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_symbol4985z00zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_symbol4988z00zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_symbol4993z00zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_8bitszd2invzd2latinzd215zd2zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_symbol5006z00zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_symbol5015z00zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_symbol5051z00zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_symbol5055z00zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_symbol5057z00zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_list4853z00zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_list4854z00zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_list4855z00zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_list4856z00zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_list4857z00zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_list4858z00zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_list4859z00zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_list4860z00zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_list4861z00zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_list4862z00zz__unicodez00) );
ADD_ROOT( (void *)(&BGl_list4863z00zz__unicodez00) );
#undef ADD_ROOT
if( roots_max > 0 ) GC_add_roots( roots_min, ((void **)roots_max) + 1 );
#endif
return BUNSPEC;
}



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__unicodez00(long BgL_checksumz00_7399, char * BgL_fromz00_7400)
{
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__unicodez00))
{ 
BGl_requirezd2initializa7ationz75zz__unicodez00 = 
BBOOL(((bool_t)0)); 
BGl_gczd2rootszd2initz00zz__unicodez00(); 
BGl_cnstzd2initzd2zz__unicodez00(); 
BGl_importedzd2moduleszd2initz00zz__unicodez00(); 
return 
BGl_toplevelzd2initzd2zz__unicodez00();}  else 
{ 
return BUNSPEC;} } 

}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__unicodez00()
{
{ /* Llib/unicode.scm 14 */
BGl_list4856z00zz__unicodez00 = 
MAKE_YOUNG_PAIR(
BINT(((long)144)), 
BCHAR(((unsigned char)'-'))); 
BGl_list4857z00zz__unicodez00 = 
MAKE_YOUNG_PAIR(
BINT(((long)145)), 
BCHAR(((unsigned char)'-'))); 
BGl_list4858z00zz__unicodez00 = 
MAKE_YOUNG_PAIR(
BINT(((long)146)), 
BCHAR(((unsigned char)'-'))); 
BGl_list4859z00zz__unicodez00 = 
MAKE_YOUNG_PAIR(
BINT(((long)147)), 
BCHAR(((unsigned char)'-'))); 
BGl_list4860z00zz__unicodez00 = 
MAKE_YOUNG_PAIR(
BINT(((long)148)), 
BCHAR(((unsigned char)'-'))); 
BGl_list4861z00zz__unicodez00 = 
MAKE_YOUNG_PAIR(
BINT(((long)149)), 
BCHAR(((unsigned char)'-'))); 
BGl_list4862z00zz__unicodez00 = 
MAKE_YOUNG_PAIR(
BINT(((long)152)), 
BCHAR(((unsigned char)'`'))); 
BGl_list4863z00zz__unicodez00 = 
MAKE_YOUNG_PAIR(
BINT(((long)153)), 
BCHAR(((unsigned char)'\''))); 
BGl_list4864z00zz__unicodez00 = 
MAKE_YOUNG_PAIR(
BINT(((long)154)), 
BCHAR(((unsigned char)','))); 
BGl_list4865z00zz__unicodez00 = 
MAKE_YOUNG_PAIR(
BINT(((long)155)), 
BCHAR(((unsigned char)'`'))); 
BGl_list4866z00zz__unicodez00 = 
MAKE_YOUNG_PAIR(
BINT(((long)164)), 
BCHAR(((unsigned char)'.'))); 
BGl_list4867z00zz__unicodez00 = 
MAKE_YOUNG_PAIR(
BINT(((long)167)), 
BCHAR(((unsigned char)'.'))); 
BGl_list4868z00zz__unicodez00 = 
MAKE_YOUNG_PAIR(
BINT(((long)178)), 
BCHAR(((unsigned char)'\''))); 
BGl_list4869z00zz__unicodez00 = 
MAKE_YOUNG_PAIR(
BINT(((long)179)), 
BCHAR(((unsigned char)'"'))); 
BGl_list4870z00zz__unicodez00 = 
MAKE_YOUNG_PAIR(
BINT(((long)181)), 
BCHAR(((unsigned char)'`'))); 
BGl_list4871z00zz__unicodez00 = 
MAKE_YOUNG_PAIR(
BINT(((long)187)), 
BCHAR(((unsigned char)'"'))); 
BGl_list4872z00zz__unicodez00 = 
MAKE_YOUNG_PAIR(
BINT(((long)184)), 
BCHAR(((unsigned char)'^'))); 
BGl_list4873z00zz__unicodez00 = 
MAKE_YOUNG_PAIR(
BINT(((long)185)), 
BCHAR(((unsigned char)'<'))); 
BGl_list4874z00zz__unicodez00 = 
MAKE_YOUNG_PAIR(
BINT(((long)186)), 
BCHAR(((unsigned char)'>'))); 
BGl_list4855z00zz__unicodez00 = 
MAKE_YOUNG_PAIR(
BINT(((long)128)), 
MAKE_YOUNG_PAIR(BGl_list4856z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_list4857z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_list4858z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_list4859z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_list4860z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_list4861z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_list4862z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_list4863z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_list4864z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_list4865z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_list4866z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_list4867z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_list4868z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_list4869z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_list4870z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_list4871z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_list4872z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_list4873z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_list4874z00zz__unicodez00, BNIL)))))))))))))))))))); 
BGl_list4876z00zz__unicodez00 = 
MAKE_YOUNG_PAIR(
BINT(((long)131)), 
BCHAR(((unsigned char)'*'))); 
BGl_list4875z00zz__unicodez00 = 
MAKE_YOUNG_PAIR(
BINT(((long)129)), 
MAKE_YOUNG_PAIR(BGl_list4876z00zz__unicodez00, BNIL)); 
BGl_list4878z00zz__unicodez00 = 
MAKE_YOUNG_PAIR(
BINT(((long)141)), 
BCHAR(((unsigned char)'('))); 
BGl_list4879z00zz__unicodez00 = 
MAKE_YOUNG_PAIR(
BINT(((long)142)), 
BCHAR(((unsigned char)')'))); 
BGl_list4877z00zz__unicodez00 = 
MAKE_YOUNG_PAIR(
BINT(((long)130)), 
MAKE_YOUNG_PAIR(BGl_list4878z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_list4879z00zz__unicodez00, BNIL))); 
BGl_list4854z00zz__unicodez00 = 
MAKE_YOUNG_PAIR(
BINT(((long)226)), 
MAKE_YOUNG_PAIR(BGl_list4855z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_list4875z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_list4877z00zz__unicodez00, BNIL)))); 
BGl_list4853z00zz__unicodez00 = 
MAKE_YOUNG_PAIR(BGl_list4854z00zz__unicodez00, BNIL); 
BGl_list4883z00zz__unicodez00 = 
MAKE_YOUNG_PAIR(
BINT(((long)172)), 
BCHAR(((unsigned char)164))); 
BGl_list4882z00zz__unicodez00 = 
MAKE_YOUNG_PAIR(
BINT(((long)130)), 
MAKE_YOUNG_PAIR(BGl_list4878z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_list4879z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_list4883z00zz__unicodez00, BNIL)))); 
BGl_list4881z00zz__unicodez00 = 
MAKE_YOUNG_PAIR(
BINT(((long)226)), 
MAKE_YOUNG_PAIR(BGl_list4855z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_list4875z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_list4882z00zz__unicodez00, BNIL)))); 
BGl_list4885z00zz__unicodez00 = 
MAKE_YOUNG_PAIR(
BINT(((long)147)), 
BCHAR(((unsigned char)189))); 
BGl_list4886z00zz__unicodez00 = 
MAKE_YOUNG_PAIR(
BINT(((long)146)), 
BCHAR(((unsigned char)188))); 
BGl_list4887z00zz__unicodez00 = 
MAKE_YOUNG_PAIR(
BINT(((long)184)), 
BCHAR(((unsigned char)190))); 
BGl_list4888z00zz__unicodez00 = 
MAKE_YOUNG_PAIR(
BINT(((long)161)), 
BCHAR(((unsigned char)168))); 
BGl_list4889z00zz__unicodez00 = 
MAKE_YOUNG_PAIR(
BINT(((long)160)), 
BCHAR(((unsigned char)166))); 
BGl_list4890z00zz__unicodez00 = 
MAKE_YOUNG_PAIR(
BINT(((long)190)), 
BCHAR(((unsigned char)184))); 
BGl_list4891z00zz__unicodez00 = 
MAKE_YOUNG_PAIR(
BINT(((long)189)), 
BCHAR(((unsigned char)180))); 
BGl_list4884z00zz__unicodez00 = 
MAKE_YOUNG_PAIR(
BINT(((long)197)), 
MAKE_YOUNG_PAIR(BGl_list4885z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_list4886z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_list4887z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_list4888z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_list4889z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_list4890z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_list4891z00zz__unicodez00, BNIL)))))))); 
BGl_list4880z00zz__unicodez00 = 
MAKE_YOUNG_PAIR(BGl_list4881z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_list4884z00zz__unicodez00, BNIL)); 
BGl_list4893z00zz__unicodez00 = 
MAKE_YOUNG_PAIR(BGl_string4894z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_string4895z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_string4896z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_string4897z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_string4898z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_string4899z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_string4900z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_string4901z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_string4902z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_string4903z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_string4904z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_string4905z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_string4906z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_string4895z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_string4907z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_string4895z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_string4895z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_string4908z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_string4909z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_string4910z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_string4911z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_string4912z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_string4913z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_string4914z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_string4915z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_string4916z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_string4917z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_string4918z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_string4919z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_string4895z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_string4920z00zz__unicodez00, 
MAKE_YOUNG_PAIR(BGl_string4921z00zz__unicodez00, BNIL)))))))))))))))))))))))))))))))); 
BGl_vector4892z00zz__unicodez00 = 
BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(BGl_list4893z00zz__unicodez00); 
BGl_symbol4922z00zz__unicodez00 = 
bstring_to_symbol(BGl_string4923z00zz__unicodez00); 
BGl_symbol4933z00zz__unicodez00 = 
bstring_to_symbol(BGl_string4934z00zz__unicodez00); 
BGl_symbol4936z00zz__unicodez00 = 
bstring_to_symbol(BGl_string4937z00zz__unicodez00); 
BGl_symbol4982z00zz__unicodez00 = 
bstring_to_symbol(BGl_string4983z00zz__unicodez00); 
BGl_symbol4985z00zz__unicodez00 = 
bstring_to_symbol(BGl_string4986z00zz__unicodez00); 
BGl_symbol4988z00zz__unicodez00 = 
bstring_to_symbol(BGl_string4989z00zz__unicodez00); 
BGl_symbol4993z00zz__unicodez00 = 
bstring_to_symbol(BGl_string4994z00zz__unicodez00); 
BGl_list4997z00zz__unicodez00 = 
MAKE_YOUNG_PAIR(
BINT(((long)1)), 
MAKE_YOUNG_PAIR(
BINT(((long)1)), 
MAKE_YOUNG_PAIR(
BINT(((long)1)), 
MAKE_YOUNG_PAIR(
BINT(((long)1)), 
MAKE_YOUNG_PAIR(
BINT(((long)1)), 
MAKE_YOUNG_PAIR(
BINT(((long)1)), 
MAKE_YOUNG_PAIR(
BINT(((long)1)), 
MAKE_YOUNG_PAIR(
BINT(((long)1)), 
MAKE_YOUNG_PAIR(
BINT(((long)2)), 
MAKE_YOUNG_PAIR(
BINT(((long)2)), 
MAKE_YOUNG_PAIR(
BINT(((long)2)), 
MAKE_YOUNG_PAIR(
BINT(((long)2)), 
MAKE_YOUNG_PAIR(
BINT(((long)2)), 
MAKE_YOUNG_PAIR(
BINT(((long)2)), 
MAKE_YOUNG_PAIR(
BINT(((long)3)), 
MAKE_YOUNG_PAIR(
BINT(((long)4)), BNIL)))))))))))))))); 
BGl_vector4996z00zz__unicodez00 = 
BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(BGl_list4997z00zz__unicodez00); 
BGl_symbol5006z00zz__unicodez00 = 
bstring_to_symbol(BGl_string5007z00zz__unicodez00); 
BGl_symbol5015z00zz__unicodez00 = 
bstring_to_symbol(BGl_string5016z00zz__unicodez00); 
BGl_symbol5051z00zz__unicodez00 = 
bstring_to_symbol(BGl_string5052z00zz__unicodez00); 
BGl_symbol5055z00zz__unicodez00 = 
bstring_to_symbol(BGl_string5056z00zz__unicodez00); 
return ( 
BGl_symbol5057z00zz__unicodez00 = 
bstring_to_symbol(BGl_string5058z00zz__unicodez00), BUNSPEC) ;} 

}



/* gc-roots-init */
obj_t BGl_gczd2rootszd2initz00zz__unicodez00()
{
{ /* Llib/unicode.scm 14 */
return 
bgl_gc_roots_register();} 

}



/* toplevel-init */
obj_t BGl_toplevelzd2initzd2zz__unicodez00()
{
{ /* Llib/unicode.scm 14 */
BGl_8bitszd2invzd2zz__unicodez00 = BGl_list4853z00zz__unicodez00; 
BGl_8bitszd2invzd2latinzd215zd2zz__unicodez00 = BGl_list4880z00zz__unicodez00; 
BGl_cp1252z00zz__unicodez00 = BGl_vector4892z00zz__unicodez00; 
return ( 
BGl_cp1252zd2invzd2zz__unicodez00 = BFALSE, BUNSPEC) ;} 

}



/* ucs2-string? */
BGL_EXPORTED_DEF bool_t BGl_ucs2zd2stringzf3z21zz__unicodez00(obj_t BgL_objz00_3)
{
{ /* Llib/unicode.scm 222 */
return 
UCS2_STRINGP(BgL_objz00_3);} 

}



/* &ucs2-string? */
obj_t BGl_z62ucs2zd2stringzf3z43zz__unicodez00(obj_t BgL_envz00_6142, obj_t BgL_objz00_6143)
{
{ /* Llib/unicode.scm 222 */
return 
BBOOL(
BGl_ucs2zd2stringzf3z21zz__unicodez00(BgL_objz00_6143));} 

}



/* _make-ucs2-string */
obj_t BGl__makezd2ucs2zd2stringz00zz__unicodez00(obj_t BgL_env1117z00_7, obj_t BgL_opt1116z00_6)
{
{ /* Llib/unicode.scm 228 */
{ /* Llib/unicode.scm 228 */
obj_t BgL_g1118z00_7358;
BgL_g1118z00_7358 = 
VECTOR_REF(BgL_opt1116z00_6,((long)0)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1116z00_6)) { case ((long)1) : 

{ /* Llib/unicode.scm 229 */
ucs2_t BgL_fillerz00_7360;
{ /* Llib/unicode.scm 229 */
int BgL_tmpz00_7636;
BgL_tmpz00_7636 = 
(int)(
(
(unsigned char)(
(char)(((unsigned char)' '))))); 
BgL_fillerz00_7360 = 
BGL_INT_TO_UCS2(BgL_tmpz00_7636); } 
{ /* Llib/unicode.scm 228 */

{ /* Llib/unicode.scm 228 */
obj_t BgL_res2794z00_7361;
{ /* Llib/unicode.scm 228 */
int BgL_kz00_7362;
{ /* Llib/unicode.scm 228 */
obj_t BgL_tmpz00_7642;
if(
INTEGERP(BgL_g1118z00_7358))
{ /* Llib/unicode.scm 228 */
BgL_tmpz00_7642 = BgL_g1118z00_7358
; }  else 
{ 
obj_t BgL_auxz00_7645;
BgL_auxz00_7645 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)10077)), BGl_string4926z00zz__unicodez00, BGl_string4927z00zz__unicodez00, BgL_g1118z00_7358); 
FAILURE(BgL_auxz00_7645,BFALSE,BFALSE);} 
BgL_kz00_7362 = 
CINT(BgL_tmpz00_7642); } 
BgL_res2794z00_7361 = 
make_ucs2_string(BgL_kz00_7362, BgL_fillerz00_7360); } 
return BgL_res2794z00_7361;} } } break;case ((long)2) : 

{ /* Llib/unicode.scm 228 */
obj_t BgL_fillerz00_7363;
BgL_fillerz00_7363 = 
VECTOR_REF(BgL_opt1116z00_6,((long)1)); 
{ /* Llib/unicode.scm 228 */

{ /* Llib/unicode.scm 228 */
obj_t BgL_res2795z00_7364;
{ /* Llib/unicode.scm 228 */
int BgL_kz00_7365;ucs2_t BgL_fillerz00_7366;
{ /* Llib/unicode.scm 228 */
obj_t BgL_tmpz00_7652;
if(
INTEGERP(BgL_g1118z00_7358))
{ /* Llib/unicode.scm 228 */
BgL_tmpz00_7652 = BgL_g1118z00_7358
; }  else 
{ 
obj_t BgL_auxz00_7655;
BgL_auxz00_7655 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)10077)), BGl_string4926z00zz__unicodez00, BGl_string4927z00zz__unicodez00, BgL_g1118z00_7358); 
FAILURE(BgL_auxz00_7655,BFALSE,BFALSE);} 
BgL_kz00_7365 = 
CINT(BgL_tmpz00_7652); } 
{ /* Llib/unicode.scm 228 */
obj_t BgL_tmpz00_7660;
if(
UCS2P(BgL_fillerz00_7363))
{ /* Llib/unicode.scm 228 */
BgL_tmpz00_7660 = BgL_fillerz00_7363
; }  else 
{ 
obj_t BgL_auxz00_7663;
BgL_auxz00_7663 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)10077)), BGl_string4926z00zz__unicodez00, BGl_string4928z00zz__unicodez00, BgL_fillerz00_7363); 
FAILURE(BgL_auxz00_7663,BFALSE,BFALSE);} 
BgL_fillerz00_7366 = 
CUCS2(BgL_tmpz00_7660); } 
BgL_res2795z00_7364 = 
make_ucs2_string(BgL_kz00_7365, BgL_fillerz00_7366); } 
return BgL_res2795z00_7364;} } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol4922z00zz__unicodez00, BGl_string4924z00zz__unicodez00, 
BINT(
VECTOR_LENGTH(BgL_opt1116z00_6)));} } } } 

}



/* make-ucs2-string */
BGL_EXPORTED_DEF obj_t BGl_makezd2ucs2zd2stringz00zz__unicodez00(int BgL_kz00_4, ucs2_t BgL_fillerz00_5)
{
{ /* Llib/unicode.scm 228 */
return 
make_ucs2_string(BgL_kz00_4, BgL_fillerz00_5);} 

}



/* ucs2-string */
BGL_EXPORTED_DEF obj_t BGl_ucs2zd2stringzd2zz__unicodez00(obj_t BgL_ucs2sz00_8)
{
{ /* Llib/unicode.scm 235 */
return 
BGl_listzd2ze3ucs2zd2stringze3zz__unicodez00(BgL_ucs2sz00_8);} 

}



/* &ucs2-string */
obj_t BGl_z62ucs2zd2stringzb0zz__unicodez00(obj_t BgL_envz00_6144, obj_t BgL_ucs2sz00_6145)
{
{ /* Llib/unicode.scm 235 */
return 
BGl_ucs2zd2stringzd2zz__unicodez00(BgL_ucs2sz00_6145);} 

}



/* ucs2-string-length */
BGL_EXPORTED_DEF int BGl_ucs2zd2stringzd2lengthz00zz__unicodez00(obj_t BgL_ucs2zd2stringzd2_9)
{
{ /* Llib/unicode.scm 241 */
return 
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_9);} 

}



/* &ucs2-string-length */
obj_t BGl_z62ucs2zd2stringzd2lengthz62zz__unicodez00(obj_t BgL_envz00_6146, obj_t BgL_ucs2zd2stringzd2_6147)
{
{ /* Llib/unicode.scm 241 */
{ /* Llib/unicode.scm 242 */
int BgL_tmpz00_7678;
{ /* Llib/unicode.scm 242 */
obj_t BgL_auxz00_7679;
if(
UCS2_STRINGP(BgL_ucs2zd2stringzd2_6147))
{ /* Llib/unicode.scm 242 */
BgL_auxz00_7679 = BgL_ucs2zd2stringzd2_6147
; }  else 
{ 
obj_t BgL_auxz00_7682;
BgL_auxz00_7682 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)10764)), BGl_string4929z00zz__unicodez00, BGl_string4930z00zz__unicodez00, BgL_ucs2zd2stringzd2_6147); 
FAILURE(BgL_auxz00_7682,BFALSE,BFALSE);} 
BgL_tmpz00_7678 = 
BGl_ucs2zd2stringzd2lengthz00zz__unicodez00(BgL_auxz00_7679); } 
return 
BINT(BgL_tmpz00_7678);} } 

}



/* ucs2-string-ref */
BGL_EXPORTED_DEF ucs2_t BGl_ucs2zd2stringzd2refz00zz__unicodez00(obj_t BgL_ucs2zd2stringzd2_10, int BgL_kz00_11)
{
{ /* Llib/unicode.scm 247 */
{ /* Llib/unicode.scm 248 */
bool_t BgL_test5287z00_7688;
{ /* Llib/unicode.scm 248 */
long BgL_auxz00_7691;long BgL_tmpz00_7689;
BgL_auxz00_7691 = 
(long)(
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_10)); 
BgL_tmpz00_7689 = 
(long)(BgL_kz00_11); 
BgL_test5287z00_7688 = 
BOUND_CHECK(BgL_tmpz00_7689, BgL_auxz00_7691); } 
if(BgL_test5287z00_7688)
{ /* Llib/unicode.scm 248 */
return 
UCS2_STRING_REF(BgL_ucs2zd2stringzd2_10, BgL_kz00_11);}  else 
{ /* Llib/unicode.scm 253 */
obj_t BgL_arg1225z00_7367;
{ /* Llib/unicode.scm 253 */
obj_t BgL_arg1227z00_7368;
{ /* Llib/unicode.scm 253 */

BgL_arg1227z00_7368 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
(
(long)(
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_10))-((long)1)), ((long)10)); } 
BgL_arg1225z00_7367 = 
string_append_3(BGl_string4931z00zz__unicodez00, BgL_arg1227z00_7368, BGl_string4932z00zz__unicodez00); } 
{ /* Llib/unicode.scm 250 */
obj_t BgL_tmpz00_7701;
{ /* Llib/unicode.scm 250 */
obj_t BgL_aux4476z00_7369;
BgL_aux4476z00_7369 = 
BGl_errorz00zz__errorz00(BGl_symbol4933z00zz__unicodez00, BgL_arg1225z00_7367, 
BINT(BgL_kz00_11)); 
if(
UCS2P(BgL_aux4476z00_7369))
{ /* Llib/unicode.scm 250 */
BgL_tmpz00_7701 = BgL_aux4476z00_7369
; }  else 
{ 
obj_t BgL_auxz00_7706;
BgL_auxz00_7706 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)11183)), BGl_string4934z00zz__unicodez00, BGl_string4928z00zz__unicodez00, BgL_aux4476z00_7369); 
FAILURE(BgL_auxz00_7706,BFALSE,BFALSE);} } 
return 
CUCS2(BgL_tmpz00_7701);} } } } 

}



/* &ucs2-string-ref */
obj_t BGl_z62ucs2zd2stringzd2refz62zz__unicodez00(obj_t BgL_envz00_6148, obj_t BgL_ucs2zd2stringzd2_6149, obj_t BgL_kz00_6150)
{
{ /* Llib/unicode.scm 247 */
{ /* Llib/unicode.scm 248 */
ucs2_t BgL_tmpz00_7711;
{ /* Llib/unicode.scm 248 */
int BgL_auxz00_7719;obj_t BgL_auxz00_7712;
{ /* Llib/unicode.scm 248 */
obj_t BgL_tmpz00_7720;
if(
INTEGERP(BgL_kz00_6150))
{ /* Llib/unicode.scm 248 */
BgL_tmpz00_7720 = BgL_kz00_6150
; }  else 
{ 
obj_t BgL_auxz00_7723;
BgL_auxz00_7723 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)11073)), BGl_string4935z00zz__unicodez00, BGl_string4927z00zz__unicodez00, BgL_kz00_6150); 
FAILURE(BgL_auxz00_7723,BFALSE,BFALSE);} 
BgL_auxz00_7719 = 
CINT(BgL_tmpz00_7720); } 
if(
UCS2_STRINGP(BgL_ucs2zd2stringzd2_6149))
{ /* Llib/unicode.scm 248 */
BgL_auxz00_7712 = BgL_ucs2zd2stringzd2_6149
; }  else 
{ 
obj_t BgL_auxz00_7715;
BgL_auxz00_7715 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)11073)), BGl_string4935z00zz__unicodez00, BGl_string4930z00zz__unicodez00, BgL_ucs2zd2stringzd2_6149); 
FAILURE(BgL_auxz00_7715,BFALSE,BFALSE);} 
BgL_tmpz00_7711 = 
BGl_ucs2zd2stringzd2refz00zz__unicodez00(BgL_auxz00_7712, BgL_auxz00_7719); } 
return 
BUCS2(BgL_tmpz00_7711);} } 

}



/* ucs2-string-set! */
BGL_EXPORTED_DEF obj_t BGl_ucs2zd2stringzd2setz12z12zz__unicodez00(obj_t BgL_ucs2zd2stringzd2_12, int BgL_kz00_13, ucs2_t BgL_ucs2z00_14)
{
{ /* Llib/unicode.scm 260 */
{ /* Llib/unicode.scm 261 */
bool_t BgL_test5291z00_7730;
{ /* Llib/unicode.scm 261 */
long BgL_auxz00_7733;long BgL_tmpz00_7731;
BgL_auxz00_7733 = 
(long)(
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_12)); 
BgL_tmpz00_7731 = 
(long)(BgL_kz00_13); 
BgL_test5291z00_7730 = 
BOUND_CHECK(BgL_tmpz00_7731, BgL_auxz00_7733); } 
if(BgL_test5291z00_7730)
{ /* Llib/unicode.scm 261 */
return 
UCS2_STRING_SET(BgL_ucs2zd2stringzd2_12, BgL_kz00_13, BgL_ucs2z00_14);}  else 
{ /* Llib/unicode.scm 266 */
obj_t BgL_arg1245z00_7370;
{ /* Llib/unicode.scm 266 */
obj_t BgL_arg1246z00_7371;
{ /* Llib/unicode.scm 266 */

BgL_arg1246z00_7371 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
(
(long)(
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_12))-((long)1)), ((long)10)); } 
BgL_arg1245z00_7370 = 
string_append_3(BGl_string4931z00zz__unicodez00, BgL_arg1246z00_7371, BGl_string4932z00zz__unicodez00); } 
return 
BGl_errorz00zz__errorz00(BGl_symbol4936z00zz__unicodez00, BgL_arg1245z00_7370, 
BINT(BgL_kz00_13));} } } 

}



/* &ucs2-string-set! */
obj_t BGl_z62ucs2zd2stringzd2setz12z70zz__unicodez00(obj_t BgL_envz00_6151, obj_t BgL_ucs2zd2stringzd2_6152, obj_t BgL_kz00_6153, obj_t BgL_ucs2z00_6154)
{
{ /* Llib/unicode.scm 260 */
{ /* Llib/unicode.scm 261 */
ucs2_t BgL_auxz00_7761;int BgL_auxz00_7752;obj_t BgL_auxz00_7745;
{ /* Llib/unicode.scm 261 */
obj_t BgL_tmpz00_7762;
if(
UCS2P(BgL_ucs2z00_6154))
{ /* Llib/unicode.scm 261 */
BgL_tmpz00_7762 = BgL_ucs2z00_6154
; }  else 
{ 
obj_t BgL_auxz00_7765;
BgL_auxz00_7765 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)11636)), BGl_string4938z00zz__unicodez00, BGl_string4928z00zz__unicodez00, BgL_ucs2z00_6154); 
FAILURE(BgL_auxz00_7765,BFALSE,BFALSE);} 
BgL_auxz00_7761 = 
CUCS2(BgL_tmpz00_7762); } 
{ /* Llib/unicode.scm 261 */
obj_t BgL_tmpz00_7753;
if(
INTEGERP(BgL_kz00_6153))
{ /* Llib/unicode.scm 261 */
BgL_tmpz00_7753 = BgL_kz00_6153
; }  else 
{ 
obj_t BgL_auxz00_7756;
BgL_auxz00_7756 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)11636)), BGl_string4938z00zz__unicodez00, BGl_string4927z00zz__unicodez00, BgL_kz00_6153); 
FAILURE(BgL_auxz00_7756,BFALSE,BFALSE);} 
BgL_auxz00_7752 = 
CINT(BgL_tmpz00_7753); } 
if(
UCS2_STRINGP(BgL_ucs2zd2stringzd2_6152))
{ /* Llib/unicode.scm 261 */
BgL_auxz00_7745 = BgL_ucs2zd2stringzd2_6152
; }  else 
{ 
obj_t BgL_auxz00_7748;
BgL_auxz00_7748 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)11636)), BGl_string4938z00zz__unicodez00, BGl_string4930z00zz__unicodez00, BgL_ucs2zd2stringzd2_6152); 
FAILURE(BgL_auxz00_7748,BFALSE,BFALSE);} 
return 
BGl_ucs2zd2stringzd2setz12z12zz__unicodez00(BgL_auxz00_7745, BgL_auxz00_7752, BgL_auxz00_7761);} } 

}



/* ucs2-string-ref-ur */
BGL_EXPORTED_DEF ucs2_t BGl_ucs2zd2stringzd2refzd2urzd2zz__unicodez00(obj_t BgL_ucs2zd2stringzd2_15, int BgL_kz00_16)
{
{ /* Llib/unicode.scm 273 */
return 
UCS2_STRING_REF(BgL_ucs2zd2stringzd2_15, BgL_kz00_16);} 

}



/* &ucs2-string-ref-ur */
obj_t BGl_z62ucs2zd2stringzd2refzd2urzb0zz__unicodez00(obj_t BgL_envz00_6155, obj_t BgL_ucs2zd2stringzd2_6156, obj_t BgL_kz00_6157)
{
{ /* Llib/unicode.scm 273 */
{ /* Llib/unicode.scm 274 */
ucs2_t BgL_tmpz00_7772;
{ /* Llib/unicode.scm 274 */
int BgL_auxz00_7780;obj_t BgL_auxz00_7773;
{ /* Llib/unicode.scm 274 */
obj_t BgL_tmpz00_7781;
if(
INTEGERP(BgL_kz00_6157))
{ /* Llib/unicode.scm 274 */
BgL_tmpz00_7781 = BgL_kz00_6157
; }  else 
{ 
obj_t BgL_auxz00_7784;
BgL_auxz00_7784 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)12202)), BGl_string4939z00zz__unicodez00, BGl_string4927z00zz__unicodez00, BgL_kz00_6157); 
FAILURE(BgL_auxz00_7784,BFALSE,BFALSE);} 
BgL_auxz00_7780 = 
CINT(BgL_tmpz00_7781); } 
if(
UCS2_STRINGP(BgL_ucs2zd2stringzd2_6156))
{ /* Llib/unicode.scm 274 */
BgL_auxz00_7773 = BgL_ucs2zd2stringzd2_6156
; }  else 
{ 
obj_t BgL_auxz00_7776;
BgL_auxz00_7776 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)12202)), BGl_string4939z00zz__unicodez00, BGl_string4930z00zz__unicodez00, BgL_ucs2zd2stringzd2_6156); 
FAILURE(BgL_auxz00_7776,BFALSE,BFALSE);} 
BgL_tmpz00_7772 = 
BGl_ucs2zd2stringzd2refzd2urzd2zz__unicodez00(BgL_auxz00_7773, BgL_auxz00_7780); } 
return 
BUCS2(BgL_tmpz00_7772);} } 

}



/* ucs2-string-set-ur! */
BGL_EXPORTED_DEF obj_t BGl_ucs2zd2stringzd2setzd2urz12zc0zz__unicodez00(obj_t BgL_ucs2zd2stringzd2_17, int BgL_kz00_18, ucs2_t BgL_ucs2z00_19)
{
{ /* Llib/unicode.scm 279 */
return 
UCS2_STRING_SET(BgL_ucs2zd2stringzd2_17, BgL_kz00_18, BgL_ucs2z00_19);} 

}



/* &ucs2-string-set-ur! */
obj_t BGl_z62ucs2zd2stringzd2setzd2urz12za2zz__unicodez00(obj_t BgL_envz00_6158, obj_t BgL_ucs2zd2stringzd2_6159, obj_t BgL_kz00_6160, obj_t BgL_ucs2z00_6161)
{
{ /* Llib/unicode.scm 279 */
{ /* Llib/unicode.scm 280 */
ucs2_t BgL_auxz00_7808;int BgL_auxz00_7799;obj_t BgL_auxz00_7792;
{ /* Llib/unicode.scm 280 */
obj_t BgL_tmpz00_7809;
if(
UCS2P(BgL_ucs2z00_6161))
{ /* Llib/unicode.scm 280 */
BgL_tmpz00_7809 = BgL_ucs2z00_6161
; }  else 
{ 
obj_t BgL_auxz00_7812;
BgL_auxz00_7812 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)12520)), BGl_string4940z00zz__unicodez00, BGl_string4928z00zz__unicodez00, BgL_ucs2z00_6161); 
FAILURE(BgL_auxz00_7812,BFALSE,BFALSE);} 
BgL_auxz00_7808 = 
CUCS2(BgL_tmpz00_7809); } 
{ /* Llib/unicode.scm 280 */
obj_t BgL_tmpz00_7800;
if(
INTEGERP(BgL_kz00_6160))
{ /* Llib/unicode.scm 280 */
BgL_tmpz00_7800 = BgL_kz00_6160
; }  else 
{ 
obj_t BgL_auxz00_7803;
BgL_auxz00_7803 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)12520)), BGl_string4940z00zz__unicodez00, BGl_string4927z00zz__unicodez00, BgL_kz00_6160); 
FAILURE(BgL_auxz00_7803,BFALSE,BFALSE);} 
BgL_auxz00_7799 = 
CINT(BgL_tmpz00_7800); } 
if(
UCS2_STRINGP(BgL_ucs2zd2stringzd2_6159))
{ /* Llib/unicode.scm 280 */
BgL_auxz00_7792 = BgL_ucs2zd2stringzd2_6159
; }  else 
{ 
obj_t BgL_auxz00_7795;
BgL_auxz00_7795 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)12520)), BGl_string4940z00zz__unicodez00, BGl_string4930z00zz__unicodez00, BgL_ucs2zd2stringzd2_6159); 
FAILURE(BgL_auxz00_7795,BFALSE,BFALSE);} 
return 
BGl_ucs2zd2stringzd2setzd2urz12zc0zz__unicodez00(BgL_auxz00_7792, BgL_auxz00_7799, BgL_auxz00_7808);} } 

}



/* ucs2-string=? */
BGL_EXPORTED_DEF bool_t BGl_ucs2zd2stringzd3zf3zf2zz__unicodez00(obj_t BgL_ucs2zd2string1zd2_20, obj_t BgL_ucs2zd2string2zd2_21)
{
{ /* Llib/unicode.scm 285 */
return 
ucs2_strcmp(BgL_ucs2zd2string1zd2_20, BgL_ucs2zd2string2zd2_21);} 

}



/* &ucs2-string=? */
obj_t BGl_z62ucs2zd2stringzd3zf3z90zz__unicodez00(obj_t BgL_envz00_6162, obj_t BgL_ucs2zd2string1zd2_6163, obj_t BgL_ucs2zd2string2zd2_6164)
{
{ /* Llib/unicode.scm 285 */
{ /* Llib/unicode.scm 286 */
bool_t BgL_tmpz00_7819;
{ /* Llib/unicode.scm 286 */
obj_t BgL_auxz00_7827;obj_t BgL_auxz00_7820;
if(
UCS2_STRINGP(BgL_ucs2zd2string2zd2_6164))
{ /* Llib/unicode.scm 286 */
BgL_auxz00_7827 = BgL_ucs2zd2string2zd2_6164
; }  else 
{ 
obj_t BgL_auxz00_7830;
BgL_auxz00_7830 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)12844)), BGl_string4941z00zz__unicodez00, BGl_string4930z00zz__unicodez00, BgL_ucs2zd2string2zd2_6164); 
FAILURE(BgL_auxz00_7830,BFALSE,BFALSE);} 
if(
UCS2_STRINGP(BgL_ucs2zd2string1zd2_6163))
{ /* Llib/unicode.scm 286 */
BgL_auxz00_7820 = BgL_ucs2zd2string1zd2_6163
; }  else 
{ 
obj_t BgL_auxz00_7823;
BgL_auxz00_7823 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)12844)), BGl_string4941z00zz__unicodez00, BGl_string4930z00zz__unicodez00, BgL_ucs2zd2string1zd2_6163); 
FAILURE(BgL_auxz00_7823,BFALSE,BFALSE);} 
BgL_tmpz00_7819 = 
BGl_ucs2zd2stringzd3zf3zf2zz__unicodez00(BgL_auxz00_7820, BgL_auxz00_7827); } 
return 
BBOOL(BgL_tmpz00_7819);} } 

}



/* ucs2-string-ci=? */
BGL_EXPORTED_DEF bool_t BGl_ucs2zd2stringzd2cizd3zf3z20zz__unicodez00(obj_t BgL_ucs2zd2string1zd2_22, obj_t BgL_ucs2zd2string2zd2_23)
{
{ /* Llib/unicode.scm 291 */
return 
ucs2_strcicmp(BgL_ucs2zd2string1zd2_22, BgL_ucs2zd2string2zd2_23);} 

}



/* &ucs2-string-ci=? */
obj_t BGl_z62ucs2zd2stringzd2cizd3zf3z42zz__unicodez00(obj_t BgL_envz00_6165, obj_t BgL_ucs2zd2string1zd2_6166, obj_t BgL_ucs2zd2string2zd2_6167)
{
{ /* Llib/unicode.scm 291 */
{ /* Llib/unicode.scm 292 */
bool_t BgL_tmpz00_7837;
{ /* Llib/unicode.scm 292 */
obj_t BgL_auxz00_7845;obj_t BgL_auxz00_7838;
if(
UCS2_STRINGP(BgL_ucs2zd2string2zd2_6167))
{ /* Llib/unicode.scm 292 */
BgL_auxz00_7845 = BgL_ucs2zd2string2zd2_6167
; }  else 
{ 
obj_t BgL_auxz00_7848;
BgL_auxz00_7848 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)13175)), BGl_string4942z00zz__unicodez00, BGl_string4930z00zz__unicodez00, BgL_ucs2zd2string2zd2_6167); 
FAILURE(BgL_auxz00_7848,BFALSE,BFALSE);} 
if(
UCS2_STRINGP(BgL_ucs2zd2string1zd2_6166))
{ /* Llib/unicode.scm 292 */
BgL_auxz00_7838 = BgL_ucs2zd2string1zd2_6166
; }  else 
{ 
obj_t BgL_auxz00_7841;
BgL_auxz00_7841 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)13175)), BGl_string4942z00zz__unicodez00, BGl_string4930z00zz__unicodez00, BgL_ucs2zd2string1zd2_6166); 
FAILURE(BgL_auxz00_7841,BFALSE,BFALSE);} 
BgL_tmpz00_7837 = 
BGl_ucs2zd2stringzd2cizd3zf3z20zz__unicodez00(BgL_auxz00_7838, BgL_auxz00_7845); } 
return 
BBOOL(BgL_tmpz00_7837);} } 

}



/* ucs2-string<? */
BGL_EXPORTED_DEF bool_t BGl_ucs2zd2stringzc3zf3ze2zz__unicodez00(obj_t BgL_ucs2zd2string1zd2_24, obj_t BgL_ucs2zd2string2zd2_25)
{
{ /* Llib/unicode.scm 297 */
return 
ucs2_string_lt(BgL_ucs2zd2string1zd2_24, BgL_ucs2zd2string2zd2_25);} 

}



/* &ucs2-string<? */
obj_t BGl_z62ucs2zd2stringzc3zf3z80zz__unicodez00(obj_t BgL_envz00_6168, obj_t BgL_ucs2zd2string1zd2_6169, obj_t BgL_ucs2zd2string2zd2_6170)
{
{ /* Llib/unicode.scm 297 */
{ /* Llib/unicode.scm 298 */
bool_t BgL_tmpz00_7855;
{ /* Llib/unicode.scm 298 */
obj_t BgL_auxz00_7863;obj_t BgL_auxz00_7856;
if(
UCS2_STRINGP(BgL_ucs2zd2string2zd2_6170))
{ /* Llib/unicode.scm 298 */
BgL_auxz00_7863 = BgL_ucs2zd2string2zd2_6170
; }  else 
{ 
obj_t BgL_auxz00_7866;
BgL_auxz00_7866 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)13501)), BGl_string4943z00zz__unicodez00, BGl_string4930z00zz__unicodez00, BgL_ucs2zd2string2zd2_6170); 
FAILURE(BgL_auxz00_7866,BFALSE,BFALSE);} 
if(
UCS2_STRINGP(BgL_ucs2zd2string1zd2_6169))
{ /* Llib/unicode.scm 298 */
BgL_auxz00_7856 = BgL_ucs2zd2string1zd2_6169
; }  else 
{ 
obj_t BgL_auxz00_7859;
BgL_auxz00_7859 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)13501)), BGl_string4943z00zz__unicodez00, BGl_string4930z00zz__unicodez00, BgL_ucs2zd2string1zd2_6169); 
FAILURE(BgL_auxz00_7859,BFALSE,BFALSE);} 
BgL_tmpz00_7855 = 
BGl_ucs2zd2stringzc3zf3ze2zz__unicodez00(BgL_auxz00_7856, BgL_auxz00_7863); } 
return 
BBOOL(BgL_tmpz00_7855);} } 

}



/* ucs2-string>? */
BGL_EXPORTED_DEF bool_t BGl_ucs2zd2stringze3zf3zc2zz__unicodez00(obj_t BgL_ucs2zd2string1zd2_26, obj_t BgL_ucs2zd2string2zd2_27)
{
{ /* Llib/unicode.scm 303 */
return 
ucs2_string_gt(BgL_ucs2zd2string1zd2_26, BgL_ucs2zd2string2zd2_27);} 

}



/* &ucs2-string>? */
obj_t BGl_z62ucs2zd2stringze3zf3za0zz__unicodez00(obj_t BgL_envz00_6171, obj_t BgL_ucs2zd2string1zd2_6172, obj_t BgL_ucs2zd2string2zd2_6173)
{
{ /* Llib/unicode.scm 303 */
{ /* Llib/unicode.scm 304 */
bool_t BgL_tmpz00_7873;
{ /* Llib/unicode.scm 304 */
obj_t BgL_auxz00_7881;obj_t BgL_auxz00_7874;
if(
UCS2_STRINGP(BgL_ucs2zd2string2zd2_6173))
{ /* Llib/unicode.scm 304 */
BgL_auxz00_7881 = BgL_ucs2zd2string2zd2_6173
; }  else 
{ 
obj_t BgL_auxz00_7884;
BgL_auxz00_7884 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)13828)), BGl_string4944z00zz__unicodez00, BGl_string4930z00zz__unicodez00, BgL_ucs2zd2string2zd2_6173); 
FAILURE(BgL_auxz00_7884,BFALSE,BFALSE);} 
if(
UCS2_STRINGP(BgL_ucs2zd2string1zd2_6172))
{ /* Llib/unicode.scm 304 */
BgL_auxz00_7874 = BgL_ucs2zd2string1zd2_6172
; }  else 
{ 
obj_t BgL_auxz00_7877;
BgL_auxz00_7877 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)13828)), BGl_string4944z00zz__unicodez00, BGl_string4930z00zz__unicodez00, BgL_ucs2zd2string1zd2_6172); 
FAILURE(BgL_auxz00_7877,BFALSE,BFALSE);} 
BgL_tmpz00_7873 = 
BGl_ucs2zd2stringze3zf3zc2zz__unicodez00(BgL_auxz00_7874, BgL_auxz00_7881); } 
return 
BBOOL(BgL_tmpz00_7873);} } 

}



/* ucs2-string<=? */
BGL_EXPORTED_DEF bool_t BGl_ucs2zd2stringzc3zd3zf3z31zz__unicodez00(obj_t BgL_ucs2zd2string1zd2_28, obj_t BgL_ucs2zd2string2zd2_29)
{
{ /* Llib/unicode.scm 309 */
return 
ucs2_string_le(BgL_ucs2zd2string1zd2_28, BgL_ucs2zd2string2zd2_29);} 

}



/* &ucs2-string<=? */
obj_t BGl_z62ucs2zd2stringzc3zd3zf3z53zz__unicodez00(obj_t BgL_envz00_6174, obj_t BgL_ucs2zd2string1zd2_6175, obj_t BgL_ucs2zd2string2zd2_6176)
{
{ /* Llib/unicode.scm 309 */
{ /* Llib/unicode.scm 310 */
bool_t BgL_tmpz00_7891;
{ /* Llib/unicode.scm 310 */
obj_t BgL_auxz00_7899;obj_t BgL_auxz00_7892;
if(
UCS2_STRINGP(BgL_ucs2zd2string2zd2_6176))
{ /* Llib/unicode.scm 310 */
BgL_auxz00_7899 = BgL_ucs2zd2string2zd2_6176
; }  else 
{ 
obj_t BgL_auxz00_7902;
BgL_auxz00_7902 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)14156)), BGl_string4945z00zz__unicodez00, BGl_string4930z00zz__unicodez00, BgL_ucs2zd2string2zd2_6176); 
FAILURE(BgL_auxz00_7902,BFALSE,BFALSE);} 
if(
UCS2_STRINGP(BgL_ucs2zd2string1zd2_6175))
{ /* Llib/unicode.scm 310 */
BgL_auxz00_7892 = BgL_ucs2zd2string1zd2_6175
; }  else 
{ 
obj_t BgL_auxz00_7895;
BgL_auxz00_7895 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)14156)), BGl_string4945z00zz__unicodez00, BGl_string4930z00zz__unicodez00, BgL_ucs2zd2string1zd2_6175); 
FAILURE(BgL_auxz00_7895,BFALSE,BFALSE);} 
BgL_tmpz00_7891 = 
BGl_ucs2zd2stringzc3zd3zf3z31zz__unicodez00(BgL_auxz00_7892, BgL_auxz00_7899); } 
return 
BBOOL(BgL_tmpz00_7891);} } 

}



/* ucs2-string>=? */
BGL_EXPORTED_DEF bool_t BGl_ucs2zd2stringze3zd3zf3z11zz__unicodez00(obj_t BgL_ucs2zd2string1zd2_30, obj_t BgL_ucs2zd2string2zd2_31)
{
{ /* Llib/unicode.scm 315 */
return 
ucs2_string_ge(BgL_ucs2zd2string1zd2_30, BgL_ucs2zd2string2zd2_31);} 

}



/* &ucs2-string>=? */
obj_t BGl_z62ucs2zd2stringze3zd3zf3z73zz__unicodez00(obj_t BgL_envz00_6177, obj_t BgL_ucs2zd2string1zd2_6178, obj_t BgL_ucs2zd2string2zd2_6179)
{
{ /* Llib/unicode.scm 315 */
{ /* Llib/unicode.scm 316 */
bool_t BgL_tmpz00_7909;
{ /* Llib/unicode.scm 316 */
obj_t BgL_auxz00_7917;obj_t BgL_auxz00_7910;
if(
UCS2_STRINGP(BgL_ucs2zd2string2zd2_6179))
{ /* Llib/unicode.scm 316 */
BgL_auxz00_7917 = BgL_ucs2zd2string2zd2_6179
; }  else 
{ 
obj_t BgL_auxz00_7920;
BgL_auxz00_7920 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)14484)), BGl_string4946z00zz__unicodez00, BGl_string4930z00zz__unicodez00, BgL_ucs2zd2string2zd2_6179); 
FAILURE(BgL_auxz00_7920,BFALSE,BFALSE);} 
if(
UCS2_STRINGP(BgL_ucs2zd2string1zd2_6178))
{ /* Llib/unicode.scm 316 */
BgL_auxz00_7910 = BgL_ucs2zd2string1zd2_6178
; }  else 
{ 
obj_t BgL_auxz00_7913;
BgL_auxz00_7913 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)14484)), BGl_string4946z00zz__unicodez00, BGl_string4930z00zz__unicodez00, BgL_ucs2zd2string1zd2_6178); 
FAILURE(BgL_auxz00_7913,BFALSE,BFALSE);} 
BgL_tmpz00_7909 = 
BGl_ucs2zd2stringze3zd3zf3z11zz__unicodez00(BgL_auxz00_7910, BgL_auxz00_7917); } 
return 
BBOOL(BgL_tmpz00_7909);} } 

}



/* ucs2-string-ci<? */
BGL_EXPORTED_DEF bool_t BGl_ucs2zd2stringzd2cizc3zf3z30zz__unicodez00(obj_t BgL_ucs2zd2string1zd2_32, obj_t BgL_ucs2zd2string2zd2_33)
{
{ /* Llib/unicode.scm 321 */
return 
ucs2_string_cilt(BgL_ucs2zd2string1zd2_32, BgL_ucs2zd2string2zd2_33);} 

}



/* &ucs2-string-ci<? */
obj_t BGl_z62ucs2zd2stringzd2cizc3zf3z52zz__unicodez00(obj_t BgL_envz00_6180, obj_t BgL_ucs2zd2string1zd2_6181, obj_t BgL_ucs2zd2string2zd2_6182)
{
{ /* Llib/unicode.scm 321 */
{ /* Llib/unicode.scm 322 */
bool_t BgL_tmpz00_7927;
{ /* Llib/unicode.scm 322 */
obj_t BgL_auxz00_7935;obj_t BgL_auxz00_7928;
if(
UCS2_STRINGP(BgL_ucs2zd2string2zd2_6182))
{ /* Llib/unicode.scm 322 */
BgL_auxz00_7935 = BgL_ucs2zd2string2zd2_6182
; }  else 
{ 
obj_t BgL_auxz00_7938;
BgL_auxz00_7938 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)14814)), BGl_string4947z00zz__unicodez00, BGl_string4930z00zz__unicodez00, BgL_ucs2zd2string2zd2_6182); 
FAILURE(BgL_auxz00_7938,BFALSE,BFALSE);} 
if(
UCS2_STRINGP(BgL_ucs2zd2string1zd2_6181))
{ /* Llib/unicode.scm 322 */
BgL_auxz00_7928 = BgL_ucs2zd2string1zd2_6181
; }  else 
{ 
obj_t BgL_auxz00_7931;
BgL_auxz00_7931 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)14814)), BGl_string4947z00zz__unicodez00, BGl_string4930z00zz__unicodez00, BgL_ucs2zd2string1zd2_6181); 
FAILURE(BgL_auxz00_7931,BFALSE,BFALSE);} 
BgL_tmpz00_7927 = 
BGl_ucs2zd2stringzd2cizc3zf3z30zz__unicodez00(BgL_auxz00_7928, BgL_auxz00_7935); } 
return 
BBOOL(BgL_tmpz00_7927);} } 

}



/* ucs2-string-ci>? */
BGL_EXPORTED_DEF bool_t BGl_ucs2zd2stringzd2cize3zf3z10zz__unicodez00(obj_t BgL_ucs2zd2string1zd2_34, obj_t BgL_ucs2zd2string2zd2_35)
{
{ /* Llib/unicode.scm 327 */
return 
ucs2_string_cigt(BgL_ucs2zd2string1zd2_34, BgL_ucs2zd2string2zd2_35);} 

}



/* &ucs2-string-ci>? */
obj_t BGl_z62ucs2zd2stringzd2cize3zf3z72zz__unicodez00(obj_t BgL_envz00_6183, obj_t BgL_ucs2zd2string1zd2_6184, obj_t BgL_ucs2zd2string2zd2_6185)
{
{ /* Llib/unicode.scm 327 */
{ /* Llib/unicode.scm 328 */
bool_t BgL_tmpz00_7945;
{ /* Llib/unicode.scm 328 */
obj_t BgL_auxz00_7953;obj_t BgL_auxz00_7946;
if(
UCS2_STRINGP(BgL_ucs2zd2string2zd2_6185))
{ /* Llib/unicode.scm 328 */
BgL_auxz00_7953 = BgL_ucs2zd2string2zd2_6185
; }  else 
{ 
obj_t BgL_auxz00_7956;
BgL_auxz00_7956 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)15146)), BGl_string4948z00zz__unicodez00, BGl_string4930z00zz__unicodez00, BgL_ucs2zd2string2zd2_6185); 
FAILURE(BgL_auxz00_7956,BFALSE,BFALSE);} 
if(
UCS2_STRINGP(BgL_ucs2zd2string1zd2_6184))
{ /* Llib/unicode.scm 328 */
BgL_auxz00_7946 = BgL_ucs2zd2string1zd2_6184
; }  else 
{ 
obj_t BgL_auxz00_7949;
BgL_auxz00_7949 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)15146)), BGl_string4948z00zz__unicodez00, BGl_string4930z00zz__unicodez00, BgL_ucs2zd2string1zd2_6184); 
FAILURE(BgL_auxz00_7949,BFALSE,BFALSE);} 
BgL_tmpz00_7945 = 
BGl_ucs2zd2stringzd2cize3zf3z10zz__unicodez00(BgL_auxz00_7946, BgL_auxz00_7953); } 
return 
BBOOL(BgL_tmpz00_7945);} } 

}



/* ucs2-string-ci<=? */
BGL_EXPORTED_DEF bool_t BGl_ucs2zd2stringzd2cizc3zd3zf3ze3zz__unicodez00(obj_t BgL_ucs2zd2string1zd2_36, obj_t BgL_ucs2zd2string2zd2_37)
{
{ /* Llib/unicode.scm 333 */
return 
ucs2_string_cile(BgL_ucs2zd2string1zd2_36, BgL_ucs2zd2string2zd2_37);} 

}



/* &ucs2-string-ci<=? */
obj_t BGl_z62ucs2zd2stringzd2cizc3zd3zf3z81zz__unicodez00(obj_t BgL_envz00_6186, obj_t BgL_ucs2zd2string1zd2_6187, obj_t BgL_ucs2zd2string2zd2_6188)
{
{ /* Llib/unicode.scm 333 */
{ /* Llib/unicode.scm 334 */
bool_t BgL_tmpz00_7963;
{ /* Llib/unicode.scm 334 */
obj_t BgL_auxz00_7971;obj_t BgL_auxz00_7964;
if(
UCS2_STRINGP(BgL_ucs2zd2string2zd2_6188))
{ /* Llib/unicode.scm 334 */
BgL_auxz00_7971 = BgL_ucs2zd2string2zd2_6188
; }  else 
{ 
obj_t BgL_auxz00_7974;
BgL_auxz00_7974 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)15479)), BGl_string4949z00zz__unicodez00, BGl_string4930z00zz__unicodez00, BgL_ucs2zd2string2zd2_6188); 
FAILURE(BgL_auxz00_7974,BFALSE,BFALSE);} 
if(
UCS2_STRINGP(BgL_ucs2zd2string1zd2_6187))
{ /* Llib/unicode.scm 334 */
BgL_auxz00_7964 = BgL_ucs2zd2string1zd2_6187
; }  else 
{ 
obj_t BgL_auxz00_7967;
BgL_auxz00_7967 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)15479)), BGl_string4949z00zz__unicodez00, BGl_string4930z00zz__unicodez00, BgL_ucs2zd2string1zd2_6187); 
FAILURE(BgL_auxz00_7967,BFALSE,BFALSE);} 
BgL_tmpz00_7963 = 
BGl_ucs2zd2stringzd2cizc3zd3zf3ze3zz__unicodez00(BgL_auxz00_7964, BgL_auxz00_7971); } 
return 
BBOOL(BgL_tmpz00_7963);} } 

}



/* ucs2-string-ci>=? */
BGL_EXPORTED_DEF bool_t BGl_ucs2zd2stringzd2cize3zd3zf3zc3zz__unicodez00(obj_t BgL_ucs2zd2string1zd2_38, obj_t BgL_ucs2zd2string2zd2_39)
{
{ /* Llib/unicode.scm 339 */
return 
ucs2_string_cige(BgL_ucs2zd2string1zd2_38, BgL_ucs2zd2string2zd2_39);} 

}



/* &ucs2-string-ci>=? */
obj_t BGl_z62ucs2zd2stringzd2cize3zd3zf3za1zz__unicodez00(obj_t BgL_envz00_6189, obj_t BgL_ucs2zd2string1zd2_6190, obj_t BgL_ucs2zd2string2zd2_6191)
{
{ /* Llib/unicode.scm 339 */
{ /* Llib/unicode.scm 340 */
bool_t BgL_tmpz00_7981;
{ /* Llib/unicode.scm 340 */
obj_t BgL_auxz00_7989;obj_t BgL_auxz00_7982;
if(
UCS2_STRINGP(BgL_ucs2zd2string2zd2_6191))
{ /* Llib/unicode.scm 340 */
BgL_auxz00_7989 = BgL_ucs2zd2string2zd2_6191
; }  else 
{ 
obj_t BgL_auxz00_7992;
BgL_auxz00_7992 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)15812)), BGl_string4950z00zz__unicodez00, BGl_string4930z00zz__unicodez00, BgL_ucs2zd2string2zd2_6191); 
FAILURE(BgL_auxz00_7992,BFALSE,BFALSE);} 
if(
UCS2_STRINGP(BgL_ucs2zd2string1zd2_6190))
{ /* Llib/unicode.scm 340 */
BgL_auxz00_7982 = BgL_ucs2zd2string1zd2_6190
; }  else 
{ 
obj_t BgL_auxz00_7985;
BgL_auxz00_7985 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)15812)), BGl_string4950z00zz__unicodez00, BGl_string4930z00zz__unicodez00, BgL_ucs2zd2string1zd2_6190); 
FAILURE(BgL_auxz00_7985,BFALSE,BFALSE);} 
BgL_tmpz00_7981 = 
BGl_ucs2zd2stringzd2cize3zd3zf3zc3zz__unicodez00(BgL_auxz00_7982, BgL_auxz00_7989); } 
return 
BBOOL(BgL_tmpz00_7981);} } 

}



/* subucs2-string */
BGL_EXPORTED_DEF obj_t BGl_subucs2zd2stringzd2zz__unicodez00(obj_t BgL_ucs2zd2stringzd2_40, int BgL_startz00_41, int BgL_endz00_42)
{
{ /* Llib/unicode.scm 345 */
{ /* Llib/unicode.scm 347 */
bool_t BgL_test5320z00_7998;
if(
(
(long)(BgL_endz00_42)>=
(long)(BgL_startz00_41)))
{ /* Llib/unicode.scm 348 */
bool_t BgL_test5322z00_8003;
{ /* Llib/unicode.scm 348 */
long BgL_auxz00_8006;long BgL_tmpz00_8004;
BgL_auxz00_8006 = 
(
(long)(
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_40))+((long)1)); 
BgL_tmpz00_8004 = 
(long)(BgL_startz00_41); 
BgL_test5322z00_8003 = 
BOUND_CHECK(BgL_tmpz00_8004, BgL_auxz00_8006); } 
if(BgL_test5322z00_8003)
{ /* Llib/unicode.scm 350 */
long BgL_auxz00_8013;long BgL_tmpz00_8011;
BgL_auxz00_8013 = 
(
(long)(
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_40))+((long)1)); 
BgL_tmpz00_8011 = 
(long)(BgL_endz00_42); 
BgL_test5320z00_7998 = 
BOUND_CHECK(BgL_tmpz00_8011, BgL_auxz00_8013); }  else 
{ /* Llib/unicode.scm 348 */
BgL_test5320z00_7998 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 347 */
BgL_test5320z00_7998 = ((bool_t)0)
; } 
if(BgL_test5320z00_7998)
{ /* Llib/unicode.scm 347 */
return 
c_subucs2_string(BgL_ucs2zd2stringzd2_40, BgL_startz00_41, BgL_endz00_42);}  else 
{ /* Llib/unicode.scm 355 */
obj_t BgL_arg1273z00_7372;
BgL_arg1273z00_7372 = 
MAKE_YOUNG_PAIR(
BINT(BgL_startz00_41), 
BINT(BgL_endz00_42)); 
{ /* Llib/unicode.scm 355 */
obj_t BgL_aux4538z00_7373;
BgL_aux4538z00_7373 = 
BGl_errorz00zz__errorz00(BGl_string4951z00zz__unicodez00, BGl_string4952z00zz__unicodez00, BgL_arg1273z00_7372); 
if(
UCS2_STRINGP(BgL_aux4538z00_7373))
{ /* Llib/unicode.scm 355 */
return BgL_aux4538z00_7373;}  else 
{ 
obj_t BgL_auxz00_8025;
BgL_auxz00_8025 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)16446)), BGl_string4951z00zz__unicodez00, BGl_string4930z00zz__unicodez00, BgL_aux4538z00_7373); 
FAILURE(BgL_auxz00_8025,BFALSE,BFALSE);} } } } } 

}



/* &subucs2-string */
obj_t BGl_z62subucs2zd2stringzb0zz__unicodez00(obj_t BgL_envz00_6192, obj_t BgL_ucs2zd2stringzd2_6193, obj_t BgL_startz00_6194, obj_t BgL_endz00_6195)
{
{ /* Llib/unicode.scm 345 */
{ /* Llib/unicode.scm 347 */
int BgL_auxz00_8045;int BgL_auxz00_8036;obj_t BgL_auxz00_8029;
{ /* Llib/unicode.scm 347 */
obj_t BgL_tmpz00_8046;
if(
INTEGERP(BgL_endz00_6195))
{ /* Llib/unicode.scm 347 */
BgL_tmpz00_8046 = BgL_endz00_6195
; }  else 
{ 
obj_t BgL_auxz00_8049;
BgL_auxz00_8049 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)16185)), BGl_string4953z00zz__unicodez00, BGl_string4927z00zz__unicodez00, BgL_endz00_6195); 
FAILURE(BgL_auxz00_8049,BFALSE,BFALSE);} 
BgL_auxz00_8045 = 
CINT(BgL_tmpz00_8046); } 
{ /* Llib/unicode.scm 347 */
obj_t BgL_tmpz00_8037;
if(
INTEGERP(BgL_startz00_6194))
{ /* Llib/unicode.scm 347 */
BgL_tmpz00_8037 = BgL_startz00_6194
; }  else 
{ 
obj_t BgL_auxz00_8040;
BgL_auxz00_8040 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)16185)), BGl_string4953z00zz__unicodez00, BGl_string4927z00zz__unicodez00, BgL_startz00_6194); 
FAILURE(BgL_auxz00_8040,BFALSE,BFALSE);} 
BgL_auxz00_8036 = 
CINT(BgL_tmpz00_8037); } 
if(
UCS2_STRINGP(BgL_ucs2zd2stringzd2_6193))
{ /* Llib/unicode.scm 347 */
BgL_auxz00_8029 = BgL_ucs2zd2stringzd2_6193
; }  else 
{ 
obj_t BgL_auxz00_8032;
BgL_auxz00_8032 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)16185)), BGl_string4953z00zz__unicodez00, BGl_string4930z00zz__unicodez00, BgL_ucs2zd2stringzd2_6193); 
FAILURE(BgL_auxz00_8032,BFALSE,BFALSE);} 
return 
BGl_subucs2zd2stringzd2zz__unicodez00(BgL_auxz00_8029, BgL_auxz00_8036, BgL_auxz00_8045);} } 

}



/* subucs2-string-ur */
BGL_EXPORTED_DEF obj_t BGl_subucs2zd2stringzd2urz00zz__unicodez00(obj_t BgL_ucs2zd2stringzd2_43, int BgL_startz00_44, int BgL_endz00_45)
{
{ /* Llib/unicode.scm 360 */
return 
c_subucs2_string(BgL_ucs2zd2stringzd2_43, BgL_startz00_44, BgL_endz00_45);} 

}



/* &subucs2-string-ur */
obj_t BGl_z62subucs2zd2stringzd2urz62zz__unicodez00(obj_t BgL_envz00_6196, obj_t BgL_ucs2zd2stringzd2_6197, obj_t BgL_startz00_6198, obj_t BgL_endz00_6199)
{
{ /* Llib/unicode.scm 360 */
{ /* Llib/unicode.scm 361 */
int BgL_auxz00_8072;int BgL_auxz00_8063;obj_t BgL_auxz00_8056;
{ /* Llib/unicode.scm 361 */
obj_t BgL_tmpz00_8073;
if(
INTEGERP(BgL_endz00_6199))
{ /* Llib/unicode.scm 361 */
BgL_tmpz00_8073 = BgL_endz00_6199
; }  else 
{ 
obj_t BgL_auxz00_8076;
BgL_auxz00_8076 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)16789)), BGl_string4954z00zz__unicodez00, BGl_string4927z00zz__unicodez00, BgL_endz00_6199); 
FAILURE(BgL_auxz00_8076,BFALSE,BFALSE);} 
BgL_auxz00_8072 = 
CINT(BgL_tmpz00_8073); } 
{ /* Llib/unicode.scm 361 */
obj_t BgL_tmpz00_8064;
if(
INTEGERP(BgL_startz00_6198))
{ /* Llib/unicode.scm 361 */
BgL_tmpz00_8064 = BgL_startz00_6198
; }  else 
{ 
obj_t BgL_auxz00_8067;
BgL_auxz00_8067 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)16789)), BGl_string4954z00zz__unicodez00, BGl_string4927z00zz__unicodez00, BgL_startz00_6198); 
FAILURE(BgL_auxz00_8067,BFALSE,BFALSE);} 
BgL_auxz00_8063 = 
CINT(BgL_tmpz00_8064); } 
if(
UCS2_STRINGP(BgL_ucs2zd2stringzd2_6197))
{ /* Llib/unicode.scm 361 */
BgL_auxz00_8056 = BgL_ucs2zd2stringzd2_6197
; }  else 
{ 
obj_t BgL_auxz00_8059;
BgL_auxz00_8059 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)16789)), BGl_string4954z00zz__unicodez00, BGl_string4930z00zz__unicodez00, BgL_ucs2zd2stringzd2_6197); 
FAILURE(BgL_auxz00_8059,BFALSE,BFALSE);} 
return 
BGl_subucs2zd2stringzd2urz00zz__unicodez00(BgL_auxz00_8056, BgL_auxz00_8063, BgL_auxz00_8072);} } 

}



/* ucs2-substring */
BGL_EXPORTED_DEF obj_t BGl_ucs2zd2substringzd2zz__unicodez00(obj_t BgL_ucs2zd2stringzd2_46, int BgL_startz00_47, int BgL_endz00_48)
{
{ /* Llib/unicode.scm 366 */
{ /* Llib/unicode.scm 368 */
bool_t BgL_test5330z00_8082;
if(
(
(long)(BgL_endz00_48)>=
(long)(BgL_startz00_47)))
{ /* Llib/unicode.scm 369 */
bool_t BgL_test5332z00_8087;
{ /* Llib/unicode.scm 369 */
long BgL_auxz00_8090;long BgL_tmpz00_8088;
BgL_auxz00_8090 = 
(
(long)(
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_46))+((long)1)); 
BgL_tmpz00_8088 = 
(long)(BgL_startz00_47); 
BgL_test5332z00_8087 = 
BOUND_CHECK(BgL_tmpz00_8088, BgL_auxz00_8090); } 
if(BgL_test5332z00_8087)
{ /* Llib/unicode.scm 371 */
long BgL_auxz00_8097;long BgL_tmpz00_8095;
BgL_auxz00_8097 = 
(
(long)(
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_46))+((long)1)); 
BgL_tmpz00_8095 = 
(long)(BgL_endz00_48); 
BgL_test5330z00_8082 = 
BOUND_CHECK(BgL_tmpz00_8095, BgL_auxz00_8097); }  else 
{ /* Llib/unicode.scm 369 */
BgL_test5330z00_8082 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 368 */
BgL_test5330z00_8082 = ((bool_t)0)
; } 
if(BgL_test5330z00_8082)
{ /* Llib/unicode.scm 368 */
return 
c_subucs2_string(BgL_ucs2zd2stringzd2_46, BgL_startz00_47, BgL_endz00_48);}  else 
{ /* Llib/unicode.scm 376 */
obj_t BgL_arg1289z00_7374;
BgL_arg1289z00_7374 = 
MAKE_YOUNG_PAIR(
BINT(BgL_startz00_47), 
BINT(BgL_endz00_48)); 
{ /* Llib/unicode.scm 376 */
obj_t BgL_aux4552z00_7375;
BgL_aux4552z00_7375 = 
BGl_errorz00zz__errorz00(BGl_string4951z00zz__unicodez00, BGl_string4952z00zz__unicodez00, BgL_arg1289z00_7374); 
if(
UCS2_STRINGP(BgL_aux4552z00_7375))
{ /* Llib/unicode.scm 376 */
return BgL_aux4552z00_7375;}  else 
{ 
obj_t BgL_auxz00_8109;
BgL_auxz00_8109 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)17418)), BGl_string4955z00zz__unicodez00, BGl_string4930z00zz__unicodez00, BgL_aux4552z00_7375); 
FAILURE(BgL_auxz00_8109,BFALSE,BFALSE);} } } } } 

}



/* &ucs2-substring */
obj_t BGl_z62ucs2zd2substringzb0zz__unicodez00(obj_t BgL_envz00_6200, obj_t BgL_ucs2zd2stringzd2_6201, obj_t BgL_startz00_6202, obj_t BgL_endz00_6203)
{
{ /* Llib/unicode.scm 366 */
{ /* Llib/unicode.scm 368 */
int BgL_auxz00_8129;int BgL_auxz00_8120;obj_t BgL_auxz00_8113;
{ /* Llib/unicode.scm 368 */
obj_t BgL_tmpz00_8130;
if(
INTEGERP(BgL_endz00_6203))
{ /* Llib/unicode.scm 368 */
BgL_tmpz00_8130 = BgL_endz00_6203
; }  else 
{ 
obj_t BgL_auxz00_8133;
BgL_auxz00_8133 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)17157)), BGl_string4956z00zz__unicodez00, BGl_string4927z00zz__unicodez00, BgL_endz00_6203); 
FAILURE(BgL_auxz00_8133,BFALSE,BFALSE);} 
BgL_auxz00_8129 = 
CINT(BgL_tmpz00_8130); } 
{ /* Llib/unicode.scm 368 */
obj_t BgL_tmpz00_8121;
if(
INTEGERP(BgL_startz00_6202))
{ /* Llib/unicode.scm 368 */
BgL_tmpz00_8121 = BgL_startz00_6202
; }  else 
{ 
obj_t BgL_auxz00_8124;
BgL_auxz00_8124 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)17157)), BGl_string4956z00zz__unicodez00, BGl_string4927z00zz__unicodez00, BgL_startz00_6202); 
FAILURE(BgL_auxz00_8124,BFALSE,BFALSE);} 
BgL_auxz00_8120 = 
CINT(BgL_tmpz00_8121); } 
if(
UCS2_STRINGP(BgL_ucs2zd2stringzd2_6201))
{ /* Llib/unicode.scm 368 */
BgL_auxz00_8113 = BgL_ucs2zd2stringzd2_6201
; }  else 
{ 
obj_t BgL_auxz00_8116;
BgL_auxz00_8116 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)17157)), BGl_string4956z00zz__unicodez00, BGl_string4930z00zz__unicodez00, BgL_ucs2zd2stringzd2_6201); 
FAILURE(BgL_auxz00_8116,BFALSE,BFALSE);} 
return 
BGl_ucs2zd2substringzd2zz__unicodez00(BgL_auxz00_8113, BgL_auxz00_8120, BgL_auxz00_8129);} } 

}



/* ucs2-substring-ur */
BGL_EXPORTED_DEF obj_t BGl_ucs2zd2substringzd2urz00zz__unicodez00(obj_t BgL_ucs2zd2stringzd2_49, int BgL_startz00_50, int BgL_endz00_51)
{
{ /* Llib/unicode.scm 381 */
return 
c_subucs2_string(BgL_ucs2zd2stringzd2_49, BgL_startz00_50, BgL_endz00_51);} 

}



/* &ucs2-substring-ur */
obj_t BGl_z62ucs2zd2substringzd2urz62zz__unicodez00(obj_t BgL_envz00_6204, obj_t BgL_ucs2zd2stringzd2_6205, obj_t BgL_startz00_6206, obj_t BgL_endz00_6207)
{
{ /* Llib/unicode.scm 381 */
{ /* Llib/unicode.scm 382 */
int BgL_auxz00_8156;int BgL_auxz00_8147;obj_t BgL_auxz00_8140;
{ /* Llib/unicode.scm 382 */
obj_t BgL_tmpz00_8157;
if(
INTEGERP(BgL_endz00_6207))
{ /* Llib/unicode.scm 382 */
BgL_tmpz00_8157 = BgL_endz00_6207
; }  else 
{ 
obj_t BgL_auxz00_8160;
BgL_auxz00_8160 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)17761)), BGl_string4957z00zz__unicodez00, BGl_string4927z00zz__unicodez00, BgL_endz00_6207); 
FAILURE(BgL_auxz00_8160,BFALSE,BFALSE);} 
BgL_auxz00_8156 = 
CINT(BgL_tmpz00_8157); } 
{ /* Llib/unicode.scm 382 */
obj_t BgL_tmpz00_8148;
if(
INTEGERP(BgL_startz00_6206))
{ /* Llib/unicode.scm 382 */
BgL_tmpz00_8148 = BgL_startz00_6206
; }  else 
{ 
obj_t BgL_auxz00_8151;
BgL_auxz00_8151 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)17761)), BGl_string4957z00zz__unicodez00, BGl_string4927z00zz__unicodez00, BgL_startz00_6206); 
FAILURE(BgL_auxz00_8151,BFALSE,BFALSE);} 
BgL_auxz00_8147 = 
CINT(BgL_tmpz00_8148); } 
if(
UCS2_STRINGP(BgL_ucs2zd2stringzd2_6205))
{ /* Llib/unicode.scm 382 */
BgL_auxz00_8140 = BgL_ucs2zd2stringzd2_6205
; }  else 
{ 
obj_t BgL_auxz00_8143;
BgL_auxz00_8143 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)17761)), BGl_string4957z00zz__unicodez00, BGl_string4930z00zz__unicodez00, BgL_ucs2zd2stringzd2_6205); 
FAILURE(BgL_auxz00_8143,BFALSE,BFALSE);} 
return 
BGl_ucs2zd2substringzd2urz00zz__unicodez00(BgL_auxz00_8140, BgL_auxz00_8147, BgL_auxz00_8156);} } 

}



/* ucs2-string-append */
BGL_EXPORTED_DEF obj_t BGl_ucs2zd2stringzd2appendz00zz__unicodez00(obj_t BgL_listz00_52)
{
{ /* Llib/unicode.scm 387 */
if(
NULLP(BgL_listz00_52))
{ /* Llib/unicode.scm 137 */
ucs2_t BgL_fillerz00_1258;
{ /* Llib/unicode.scm 137 */
int BgL_tmpz00_8168;
BgL_tmpz00_8168 = 
(int)(
(
(unsigned char)(
(char)(((unsigned char)' '))))); 
BgL_fillerz00_1258 = 
BGL_INT_TO_UCS2(BgL_tmpz00_8168); } 
{ /* Llib/unicode.scm 137 */

return 
make_ucs2_string(
(int)(((long)0)), BgL_fillerz00_1258);} }  else 
{ /* Llib/unicode.scm 390 */
obj_t BgL_aux4567z00_7070;
BgL_aux4567z00_7070 = 
BGl_loopze72ze7zz__unicodez00(BgL_listz00_52); 
if(
UCS2_STRINGP(BgL_aux4567z00_7070))
{ /* Llib/unicode.scm 390 */
return BgL_aux4567z00_7070;}  else 
{ 
obj_t BgL_auxz00_8179;
BgL_auxz00_8179 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)18116)), BGl_string4958z00zz__unicodez00, BGl_string4930z00zz__unicodez00, BgL_aux4567z00_7070); 
FAILURE(BgL_auxz00_8179,BFALSE,BFALSE);} } } 

}



/* loop~2 */
obj_t BGl_loopze72ze7zz__unicodez00(obj_t BgL_listz00_1260)
{
{ /* Llib/unicode.scm 390 */
{ /* Llib/unicode.scm 391 */
bool_t BgL_test5342z00_8183;
{ /* Llib/unicode.scm 391 */
obj_t BgL_tmpz00_8184;
{ /* Llib/unicode.scm 391 */
obj_t BgL_pairz00_3139;
if(
PAIRP(BgL_listz00_1260))
{ /* Llib/unicode.scm 391 */
BgL_pairz00_3139 = BgL_listz00_1260; }  else 
{ 
obj_t BgL_auxz00_8187;
BgL_auxz00_8187 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)18159)), BGl_string4959z00zz__unicodez00, BGl_string4960z00zz__unicodez00, BgL_listz00_1260); 
FAILURE(BgL_auxz00_8187,BFALSE,BFALSE);} 
BgL_tmpz00_8184 = 
CDR(BgL_pairz00_3139); } 
BgL_test5342z00_8183 = 
NULLP(BgL_tmpz00_8184); } 
if(BgL_test5342z00_8183)
{ /* Llib/unicode.scm 392 */
obj_t BgL_pairz00_3141;
if(
PAIRP(BgL_listz00_1260))
{ /* Llib/unicode.scm 392 */
BgL_pairz00_3141 = BgL_listz00_1260; }  else 
{ 
obj_t BgL_auxz00_8195;
BgL_auxz00_8195 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)18178)), BGl_string4959z00zz__unicodez00, BGl_string4960z00zz__unicodez00, BgL_listz00_1260); 
FAILURE(BgL_auxz00_8195,BFALSE,BFALSE);} 
return 
CAR(BgL_pairz00_3141);}  else 
{ /* Llib/unicode.scm 393 */
obj_t BgL_arg1300z00_1264;obj_t BgL_arg1301z00_1265;
{ /* Llib/unicode.scm 393 */
obj_t BgL_pairz00_3142;
if(
PAIRP(BgL_listz00_1260))
{ /* Llib/unicode.scm 393 */
BgL_pairz00_3142 = BgL_listz00_1260; }  else 
{ 
obj_t BgL_auxz00_8202;
BgL_auxz00_8202 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)18218)), BGl_string4959z00zz__unicodez00, BGl_string4960z00zz__unicodez00, BgL_listz00_1260); 
FAILURE(BgL_auxz00_8202,BFALSE,BFALSE);} 
BgL_arg1300z00_1264 = 
CAR(BgL_pairz00_3142); } 
{ /* Llib/unicode.scm 393 */
obj_t BgL_arg1302z00_1266;
{ /* Llib/unicode.scm 393 */
obj_t BgL_pairz00_3143;
if(
PAIRP(BgL_listz00_1260))
{ /* Llib/unicode.scm 393 */
BgL_pairz00_3143 = BgL_listz00_1260; }  else 
{ 
obj_t BgL_auxz00_8209;
BgL_auxz00_8209 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)18235)), BGl_string4959z00zz__unicodez00, BGl_string4960z00zz__unicodez00, BgL_listz00_1260); 
FAILURE(BgL_auxz00_8209,BFALSE,BFALSE);} 
BgL_arg1302z00_1266 = 
CDR(BgL_pairz00_3143); } 
BgL_arg1301z00_1265 = 
BGl_loopze72ze7zz__unicodez00(BgL_arg1302z00_1266); } 
{ /* Llib/unicode.scm 393 */
obj_t BgL_auxz00_8222;obj_t BgL_tmpz00_8215;
if(
UCS2_STRINGP(BgL_arg1301z00_1265))
{ /* Llib/unicode.scm 393 */
BgL_auxz00_8222 = BgL_arg1301z00_1265
; }  else 
{ 
obj_t BgL_auxz00_8225;
BgL_auxz00_8225 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)18240)), BGl_string4959z00zz__unicodez00, BGl_string4930z00zz__unicodez00, BgL_arg1301z00_1265); 
FAILURE(BgL_auxz00_8225,BFALSE,BFALSE);} 
if(
UCS2_STRINGP(BgL_arg1300z00_1264))
{ /* Llib/unicode.scm 393 */
BgL_tmpz00_8215 = BgL_arg1300z00_1264
; }  else 
{ 
obj_t BgL_auxz00_8218;
BgL_auxz00_8218 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)18222)), BGl_string4959z00zz__unicodez00, BGl_string4930z00zz__unicodez00, BgL_arg1300z00_1264); 
FAILURE(BgL_auxz00_8218,BFALSE,BFALSE);} 
return 
ucs2_string_append(BgL_tmpz00_8215, BgL_auxz00_8222);} } } } 

}



/* &ucs2-string-append */
obj_t BGl_z62ucs2zd2stringzd2appendz62zz__unicodez00(obj_t BgL_envz00_6208, obj_t BgL_listz00_6209)
{
{ /* Llib/unicode.scm 387 */
return 
BGl_ucs2zd2stringzd2appendz00zz__unicodez00(BgL_listz00_6209);} 

}



/* list->ucs2-string */
BGL_EXPORTED_DEF obj_t BGl_listzd2ze3ucs2zd2stringze3zz__unicodez00(obj_t BgL_listz00_53)
{
{ /* Llib/unicode.scm 398 */
{ /* Llib/unicode.scm 399 */
long BgL_lenz00_1269;
{ /* Llib/unicode.scm 399 */
obj_t BgL_auxz00_8231;
{ /* Llib/unicode.scm 399 */
bool_t BgL_test5349z00_8232;
if(
PAIRP(BgL_listz00_53))
{ /* Llib/unicode.scm 399 */
BgL_test5349z00_8232 = ((bool_t)1)
; }  else 
{ /* Llib/unicode.scm 399 */
BgL_test5349z00_8232 = 
NULLP(BgL_listz00_53)
; } 
if(BgL_test5349z00_8232)
{ /* Llib/unicode.scm 399 */
BgL_auxz00_8231 = BgL_listz00_53
; }  else 
{ 
obj_t BgL_auxz00_8236;
BgL_auxz00_8236 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)18529)), BGl_string4961z00zz__unicodez00, BGl_string4962z00zz__unicodez00, BgL_listz00_53); 
FAILURE(BgL_auxz00_8236,BFALSE,BFALSE);} } 
BgL_lenz00_1269 = 
bgl_list_length(BgL_auxz00_8231); } 
{ /* Llib/unicode.scm 399 */
obj_t BgL_ucs2zd2stringzd2_1270;
{ /* Llib/unicode.scm 137 */
ucs2_t BgL_fillerz00_1281;
{ /* Llib/unicode.scm 137 */
int BgL_tmpz00_8241;
BgL_tmpz00_8241 = 
(int)(
(
(unsigned char)(
(char)(((unsigned char)' '))))); 
BgL_fillerz00_1281 = 
BGL_INT_TO_UCS2(BgL_tmpz00_8241); } 
{ /* Llib/unicode.scm 137 */

BgL_ucs2zd2stringzd2_1270 = 
make_ucs2_string(
(int)(BgL_lenz00_1269), BgL_fillerz00_1281); } } 
{ /* Llib/unicode.scm 400 */

{ 
long BgL_iz00_3179;obj_t BgL_lz00_3180;
BgL_iz00_3179 = ((long)0); 
BgL_lz00_3180 = BgL_listz00_53; 
BgL_loopz00_3178:
if(
(BgL_iz00_3179==BgL_lenz00_1269))
{ /* Llib/unicode.scm 403 */
return BgL_ucs2zd2stringzd2_1270;}  else 
{ /* Llib/unicode.scm 403 */
{ /* Llib/unicode.scm 406 */
obj_t BgL_arg1306z00_3185;
{ /* Llib/unicode.scm 406 */
obj_t BgL_pairz00_3186;
if(
PAIRP(BgL_lz00_3180))
{ /* Llib/unicode.scm 406 */
BgL_pairz00_3186 = BgL_lz00_3180; }  else 
{ 
obj_t BgL_auxz00_8253;
BgL_auxz00_8253 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)18701)), BGl_string4963z00zz__unicodez00, BGl_string4960z00zz__unicodez00, BgL_lz00_3180); 
FAILURE(BgL_auxz00_8253,BFALSE,BFALSE);} 
BgL_arg1306z00_3185 = 
CAR(BgL_pairz00_3186); } 
{ /* Llib/unicode.scm 406 */
int BgL_kz00_3188;ucs2_t BgL_ucs2z00_3189;
BgL_kz00_3188 = 
(int)(BgL_iz00_3179); 
{ /* Llib/unicode.scm 406 */
obj_t BgL_tmpz00_8259;
if(
UCS2P(BgL_arg1306z00_3185))
{ /* Llib/unicode.scm 406 */
BgL_tmpz00_8259 = BgL_arg1306z00_3185
; }  else 
{ 
obj_t BgL_auxz00_8262;
BgL_auxz00_8262 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)18702)), BGl_string4963z00zz__unicodez00, BGl_string4928z00zz__unicodez00, BgL_arg1306z00_3185); 
FAILURE(BgL_auxz00_8262,BFALSE,BFALSE);} 
BgL_ucs2z00_3189 = 
CUCS2(BgL_tmpz00_8259); } 
{ /* Llib/unicode.scm 261 */
bool_t BgL_test5354z00_8267;
{ /* Llib/unicode.scm 261 */
long BgL_auxz00_8270;long BgL_tmpz00_8268;
BgL_auxz00_8270 = 
(long)(
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_1270)); 
BgL_tmpz00_8268 = 
(long)(BgL_kz00_3188); 
BgL_test5354z00_8267 = 
BOUND_CHECK(BgL_tmpz00_8268, BgL_auxz00_8270); } 
if(BgL_test5354z00_8267)
{ /* Llib/unicode.scm 261 */
UCS2_STRING_SET(BgL_ucs2zd2stringzd2_1270, BgL_kz00_3188, BgL_ucs2z00_3189); }  else 
{ /* Llib/unicode.scm 266 */
obj_t BgL_arg1245z00_3194;
{ /* Llib/unicode.scm 266 */
obj_t BgL_arg1246z00_3195;
{ /* Llib/unicode.scm 266 */

BgL_arg1246z00_3195 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
(
(long)(
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_1270))-((long)1)), ((long)10)); } 
BgL_arg1245z00_3194 = 
string_append_3(BGl_string4931z00zz__unicodez00, BgL_arg1246z00_3195, BGl_string4932z00zz__unicodez00); } 
BGl_errorz00zz__errorz00(BGl_symbol4936z00zz__unicodez00, BgL_arg1245z00_3194, 
BINT(BgL_kz00_3188)); } } } } 
{ /* Llib/unicode.scm 407 */
long BgL_arg1307z00_3204;obj_t BgL_arg1308z00_3205;
BgL_arg1307z00_3204 = 
(BgL_iz00_3179+((long)1)); 
{ /* Llib/unicode.scm 407 */
obj_t BgL_pairz00_3208;
if(
PAIRP(BgL_lz00_3180))
{ /* Llib/unicode.scm 407 */
BgL_pairz00_3208 = BgL_lz00_3180; }  else 
{ 
obj_t BgL_auxz00_8285;
BgL_auxz00_8285 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)18728)), BGl_string4963z00zz__unicodez00, BGl_string4960z00zz__unicodez00, BgL_lz00_3180); 
FAILURE(BgL_auxz00_8285,BFALSE,BFALSE);} 
BgL_arg1308z00_3205 = 
CDR(BgL_pairz00_3208); } 
{ 
obj_t BgL_lz00_8291;long BgL_iz00_8290;
BgL_iz00_8290 = BgL_arg1307z00_3204; 
BgL_lz00_8291 = BgL_arg1308z00_3205; 
BgL_lz00_3180 = BgL_lz00_8291; 
BgL_iz00_3179 = BgL_iz00_8290; 
goto BgL_loopz00_3178;} } } } } } } } 

}



/* &list->ucs2-string */
obj_t BGl_z62listzd2ze3ucs2zd2stringz81zz__unicodez00(obj_t BgL_envz00_6210, obj_t BgL_listz00_6211)
{
{ /* Llib/unicode.scm 398 */
return 
BGl_listzd2ze3ucs2zd2stringze3zz__unicodez00(BgL_listz00_6211);} 

}



/* ucs2-string->list */
BGL_EXPORTED_DEF obj_t BGl_ucs2zd2stringzd2ze3listze3zz__unicodez00(obj_t BgL_ucs2zd2stringzd2_54)
{
{ /* Llib/unicode.scm 412 */
{ /* Llib/unicode.scm 413 */
int BgL_lenz00_1282;
BgL_lenz00_1282 = 
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_54); 
{ 
long BgL_iz00_3234;obj_t BgL_accz00_3235;
BgL_iz00_3234 = ((long)0); 
BgL_accz00_3235 = BNIL; 
BgL_loopz00_3233:
if(
(BgL_iz00_3234==
(long)(BgL_lenz00_1282)))
{ /* Llib/unicode.scm 416 */
return 
bgl_reverse_bang(BgL_accz00_3235);}  else 
{ /* Llib/unicode.scm 418 */
long BgL_arg1311z00_3240;obj_t BgL_arg1312z00_3241;
BgL_arg1311z00_3240 = 
(BgL_iz00_3234+((long)1)); 
{ /* Llib/unicode.scm 419 */
ucs2_t BgL_arg1313z00_3244;
{ /* Llib/unicode.scm 419 */
ucs2_t BgL_res2833z00_3245;
{ /* Llib/unicode.scm 419 */
int BgL_kz00_3247;
BgL_kz00_3247 = 
(int)(BgL_iz00_3234); 
{ /* Llib/unicode.scm 248 */
bool_t BgL_test5357z00_8300;
{ /* Llib/unicode.scm 248 */
long BgL_auxz00_8303;long BgL_tmpz00_8301;
BgL_auxz00_8303 = 
(long)(
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_54)); 
BgL_tmpz00_8301 = 
(long)(BgL_kz00_3247); 
BgL_test5357z00_8300 = 
BOUND_CHECK(BgL_tmpz00_8301, BgL_auxz00_8303); } 
if(BgL_test5357z00_8300)
{ /* Llib/unicode.scm 248 */
BgL_res2833z00_3245 = 
UCS2_STRING_REF(BgL_ucs2zd2stringzd2_54, BgL_kz00_3247); }  else 
{ /* Llib/unicode.scm 253 */
obj_t BgL_arg1225z00_3252;
{ /* Llib/unicode.scm 253 */
obj_t BgL_arg1227z00_3253;
{ /* Llib/unicode.scm 253 */

BgL_arg1227z00_3253 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
(
(long)(
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_54))-((long)1)), ((long)10)); } 
BgL_arg1225z00_3252 = 
string_append_3(BGl_string4931z00zz__unicodez00, BgL_arg1227z00_3253, BGl_string4932z00zz__unicodez00); } 
{ /* Llib/unicode.scm 250 */
obj_t BgL_tmpz00_8313;
{ /* Llib/unicode.scm 250 */
obj_t BgL_aux4589z00_7092;
BgL_aux4589z00_7092 = 
BGl_errorz00zz__errorz00(BGl_symbol4933z00zz__unicodez00, BgL_arg1225z00_3252, 
BINT(BgL_kz00_3247)); 
if(
UCS2P(BgL_aux4589z00_7092))
{ /* Llib/unicode.scm 250 */
BgL_tmpz00_8313 = BgL_aux4589z00_7092
; }  else 
{ 
obj_t BgL_auxz00_8318;
BgL_auxz00_8318 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)11183)), BGl_string4963z00zz__unicodez00, BGl_string4928z00zz__unicodez00, BgL_aux4589z00_7092); 
FAILURE(BgL_auxz00_8318,BFALSE,BFALSE);} } 
BgL_res2833z00_3245 = 
CUCS2(BgL_tmpz00_8313); } } } } 
BgL_arg1313z00_3244 = BgL_res2833z00_3245; } 
BgL_arg1312z00_3241 = 
MAKE_YOUNG_PAIR(
BUCS2(BgL_arg1313z00_3244), BgL_accz00_3235); } 
{ 
obj_t BgL_accz00_8326;long BgL_iz00_8325;
BgL_iz00_8325 = BgL_arg1311z00_3240; 
BgL_accz00_8326 = BgL_arg1312z00_3241; 
BgL_accz00_3235 = BgL_accz00_8326; 
BgL_iz00_3234 = BgL_iz00_8325; 
goto BgL_loopz00_3233;} } } } } 

}



/* &ucs2-string->list */
obj_t BGl_z62ucs2zd2stringzd2ze3listz81zz__unicodez00(obj_t BgL_envz00_6212, obj_t BgL_ucs2zd2stringzd2_6213)
{
{ /* Llib/unicode.scm 412 */
{ /* Llib/unicode.scm 413 */
obj_t BgL_auxz00_8327;
if(
UCS2_STRINGP(BgL_ucs2zd2stringzd2_6213))
{ /* Llib/unicode.scm 413 */
BgL_auxz00_8327 = BgL_ucs2zd2stringzd2_6213
; }  else 
{ 
obj_t BgL_auxz00_8330;
BgL_auxz00_8330 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)19003)), BGl_string4964z00zz__unicodez00, BGl_string4930z00zz__unicodez00, BgL_ucs2zd2stringzd2_6213); 
FAILURE(BgL_auxz00_8330,BFALSE,BFALSE);} 
return 
BGl_ucs2zd2stringzd2ze3listze3zz__unicodez00(BgL_auxz00_8327);} } 

}



/* ucs2-string-copy */
BGL_EXPORTED_DEF obj_t BGl_ucs2zd2stringzd2copyz00zz__unicodez00(obj_t BgL_ucs2zd2stringzd2_55)
{
{ /* Llib/unicode.scm 425 */
return 
c_ucs2_string_copy(BgL_ucs2zd2stringzd2_55);} 

}



/* &ucs2-string-copy */
obj_t BGl_z62ucs2zd2stringzd2copyz62zz__unicodez00(obj_t BgL_envz00_6214, obj_t BgL_ucs2zd2stringzd2_6215)
{
{ /* Llib/unicode.scm 425 */
{ /* Llib/unicode.scm 426 */
obj_t BgL_auxz00_8336;
if(
UCS2_STRINGP(BgL_ucs2zd2stringzd2_6215))
{ /* Llib/unicode.scm 426 */
BgL_auxz00_8336 = BgL_ucs2zd2stringzd2_6215
; }  else 
{ 
obj_t BgL_auxz00_8339;
BgL_auxz00_8339 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)19478)), BGl_string4965z00zz__unicodez00, BGl_string4930z00zz__unicodez00, BgL_ucs2zd2stringzd2_6215); 
FAILURE(BgL_auxz00_8339,BFALSE,BFALSE);} 
return 
BGl_ucs2zd2stringzd2copyz00zz__unicodez00(BgL_auxz00_8336);} } 

}



/* ucs2-string-fill! */
BGL_EXPORTED_DEF obj_t BGl_ucs2zd2stringzd2fillz12z12zz__unicodez00(obj_t BgL_ucs2zd2stringzd2_56, ucs2_t BgL_ucs2z00_57)
{
{ /* Llib/unicode.scm 431 */
{ /* Llib/unicode.scm 432 */
int BgL_lenz00_1293;
BgL_lenz00_1293 = 
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_56); 
{ 
long BgL_iz00_3287;
BgL_iz00_3287 = ((long)0); 
BgL_loopz00_3286:
if(
(BgL_iz00_3287==
(long)(BgL_lenz00_1293)))
{ /* Llib/unicode.scm 434 */
return BgL_ucs2zd2stringzd2_56;}  else 
{ /* Llib/unicode.scm 434 */
{ /* Llib/unicode.scm 437 */
int BgL_kz00_3293;
BgL_kz00_3293 = 
(int)(BgL_iz00_3287); 
{ /* Llib/unicode.scm 261 */
bool_t BgL_test5362z00_8349;
{ /* Llib/unicode.scm 261 */
long BgL_auxz00_8352;long BgL_tmpz00_8350;
BgL_auxz00_8352 = 
(long)(
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_56)); 
BgL_tmpz00_8350 = 
(long)(BgL_kz00_3293); 
BgL_test5362z00_8349 = 
BOUND_CHECK(BgL_tmpz00_8350, BgL_auxz00_8352); } 
if(BgL_test5362z00_8349)
{ /* Llib/unicode.scm 261 */
UCS2_STRING_SET(BgL_ucs2zd2stringzd2_56, BgL_kz00_3293, BgL_ucs2z00_57); }  else 
{ /* Llib/unicode.scm 266 */
obj_t BgL_arg1245z00_3299;
{ /* Llib/unicode.scm 266 */
obj_t BgL_arg1246z00_3300;
{ /* Llib/unicode.scm 266 */

BgL_arg1246z00_3300 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
(
(long)(
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_56))-((long)1)), ((long)10)); } 
BgL_arg1245z00_3299 = 
string_append_3(BGl_string4931z00zz__unicodez00, BgL_arg1246z00_3300, BGl_string4932z00zz__unicodez00); } 
BGl_errorz00zz__errorz00(BGl_symbol4936z00zz__unicodez00, BgL_arg1245z00_3299, 
BINT(BgL_kz00_3293)); } } } 
{ 
long BgL_iz00_8364;
BgL_iz00_8364 = 
(BgL_iz00_3287+((long)1)); 
BgL_iz00_3287 = BgL_iz00_8364; 
goto BgL_loopz00_3286;} } } } } 

}



/* &ucs2-string-fill! */
obj_t BGl_z62ucs2zd2stringzd2fillz12z70zz__unicodez00(obj_t BgL_envz00_6216, obj_t BgL_ucs2zd2stringzd2_6217, obj_t BgL_ucs2z00_6218)
{
{ /* Llib/unicode.scm 431 */
{ /* Llib/unicode.scm 432 */
ucs2_t BgL_auxz00_8373;obj_t BgL_auxz00_8366;
{ /* Llib/unicode.scm 432 */
obj_t BgL_tmpz00_8374;
if(
UCS2P(BgL_ucs2z00_6218))
{ /* Llib/unicode.scm 432 */
BgL_tmpz00_8374 = BgL_ucs2z00_6218
; }  else 
{ 
obj_t BgL_auxz00_8377;
BgL_auxz00_8377 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)19783)), BGl_string4966z00zz__unicodez00, BGl_string4928z00zz__unicodez00, BgL_ucs2z00_6218); 
FAILURE(BgL_auxz00_8377,BFALSE,BFALSE);} 
BgL_auxz00_8373 = 
CUCS2(BgL_tmpz00_8374); } 
if(
UCS2_STRINGP(BgL_ucs2zd2stringzd2_6217))
{ /* Llib/unicode.scm 432 */
BgL_auxz00_8366 = BgL_ucs2zd2stringzd2_6217
; }  else 
{ 
obj_t BgL_auxz00_8369;
BgL_auxz00_8369 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)19783)), BGl_string4966z00zz__unicodez00, BGl_string4930z00zz__unicodez00, BgL_ucs2zd2stringzd2_6217); 
FAILURE(BgL_auxz00_8369,BFALSE,BFALSE);} 
return 
BGl_ucs2zd2stringzd2fillz12z12zz__unicodez00(BgL_auxz00_8366, BgL_auxz00_8373);} } 

}



/* ucs2-string-upcase */
BGL_EXPORTED_DEF obj_t BGl_ucs2zd2stringzd2upcasez00zz__unicodez00(obj_t BgL_ucs2zd2stringzd2_58)
{
{ /* Llib/unicode.scm 443 */
{ /* Llib/unicode.scm 444 */
int BgL_lenz00_1300;
BgL_lenz00_1300 = 
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_58); 
{ /* Llib/unicode.scm 444 */
obj_t BgL_resz00_1301;
{ /* Llib/unicode.scm 137 */
ucs2_t BgL_fillerz00_1311;
{ /* Llib/unicode.scm 137 */
int BgL_tmpz00_8384;
BgL_tmpz00_8384 = 
(int)(
(
(unsigned char)(
(char)(((unsigned char)' '))))); 
BgL_fillerz00_1311 = 
BGL_INT_TO_UCS2(BgL_tmpz00_8384); } 
{ /* Llib/unicode.scm 137 */

BgL_resz00_1301 = 
make_ucs2_string(BgL_lenz00_1300, BgL_fillerz00_1311); } } 
{ /* Llib/unicode.scm 445 */

{ 
long BgL_iz00_1303;
BgL_iz00_1303 = ((long)0); 
BgL_zc3z04anonymousza31317ze3z87_1304:
if(
(BgL_iz00_1303==
(long)(BgL_lenz00_1300)))
{ /* Llib/unicode.scm 447 */
return BgL_resz00_1301;}  else 
{ /* Llib/unicode.scm 447 */
{ /* Llib/unicode.scm 451 */
ucs2_t BgL_arg1319z00_1306;
{ /* Llib/unicode.scm 451 */
ucs2_t BgL_arg1322z00_1307;
{ /* Llib/unicode.scm 451 */
ucs2_t BgL_res2849z00_3343;
{ /* Llib/unicode.scm 451 */
int BgL_kz00_3328;
BgL_kz00_3328 = 
(int)(BgL_iz00_1303); 
{ /* Llib/unicode.scm 248 */
bool_t BgL_test5366z00_8395;
{ /* Llib/unicode.scm 248 */
long BgL_auxz00_8398;long BgL_tmpz00_8396;
BgL_auxz00_8398 = 
(long)(
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_58)); 
BgL_tmpz00_8396 = 
(long)(BgL_kz00_3328); 
BgL_test5366z00_8395 = 
BOUND_CHECK(BgL_tmpz00_8396, BgL_auxz00_8398); } 
if(BgL_test5366z00_8395)
{ /* Llib/unicode.scm 248 */
BgL_res2849z00_3343 = 
UCS2_STRING_REF(BgL_ucs2zd2stringzd2_58, BgL_kz00_3328); }  else 
{ /* Llib/unicode.scm 253 */
obj_t BgL_arg1225z00_3331;
{ /* Llib/unicode.scm 253 */
obj_t BgL_arg1227z00_3332;
{ /* Llib/unicode.scm 253 */

BgL_arg1227z00_3332 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
(
(long)(
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_58))-((long)1)), ((long)10)); } 
BgL_arg1225z00_3331 = 
string_append_3(BGl_string4931z00zz__unicodez00, BgL_arg1227z00_3332, BGl_string4932z00zz__unicodez00); } 
{ /* Llib/unicode.scm 250 */
obj_t BgL_tmpz00_8408;
{ /* Llib/unicode.scm 250 */
obj_t BgL_aux4599z00_7102;
BgL_aux4599z00_7102 = 
BGl_errorz00zz__errorz00(BGl_symbol4933z00zz__unicodez00, BgL_arg1225z00_3331, 
BINT(BgL_kz00_3328)); 
if(
UCS2P(BgL_aux4599z00_7102))
{ /* Llib/unicode.scm 250 */
BgL_tmpz00_8408 = BgL_aux4599z00_7102
; }  else 
{ 
obj_t BgL_auxz00_8413;
BgL_auxz00_8413 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)11183)), BGl_string4963z00zz__unicodez00, BGl_string4928z00zz__unicodez00, BgL_aux4599z00_7102); 
FAILURE(BgL_auxz00_8413,BFALSE,BFALSE);} } 
BgL_res2849z00_3343 = 
CUCS2(BgL_tmpz00_8408); } } } } 
BgL_arg1322z00_1307 = BgL_res2849z00_3343; } 
BgL_arg1319z00_1306 = 
ucs2_toupper(BgL_arg1322z00_1307); } 
{ /* Llib/unicode.scm 450 */
int BgL_kz00_3347;
BgL_kz00_3347 = 
(int)(BgL_iz00_1303); 
{ /* Llib/unicode.scm 261 */
bool_t BgL_test5368z00_8420;
{ /* Llib/unicode.scm 261 */
long BgL_auxz00_8423;long BgL_tmpz00_8421;
BgL_auxz00_8423 = 
(long)(
UCS2_STRING_LENGTH(BgL_resz00_1301)); 
BgL_tmpz00_8421 = 
(long)(BgL_kz00_3347); 
BgL_test5368z00_8420 = 
BOUND_CHECK(BgL_tmpz00_8421, BgL_auxz00_8423); } 
if(BgL_test5368z00_8420)
{ /* Llib/unicode.scm 261 */
UCS2_STRING_SET(BgL_resz00_1301, BgL_kz00_3347, BgL_arg1319z00_1306); }  else 
{ /* Llib/unicode.scm 266 */
obj_t BgL_arg1245z00_3351;
{ /* Llib/unicode.scm 266 */
obj_t BgL_arg1246z00_3352;
{ /* Llib/unicode.scm 266 */

BgL_arg1246z00_3352 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
(
(long)(
UCS2_STRING_LENGTH(BgL_resz00_1301))-((long)1)), ((long)10)); } 
BgL_arg1245z00_3351 = 
string_append_3(BGl_string4931z00zz__unicodez00, BgL_arg1246z00_3352, BGl_string4932z00zz__unicodez00); } 
BGl_errorz00zz__errorz00(BGl_symbol4936z00zz__unicodez00, BgL_arg1245z00_3351, 
BINT(BgL_kz00_3347)); } } } } 
{ 
long BgL_iz00_8435;
BgL_iz00_8435 = 
(BgL_iz00_1303+((long)1)); 
BgL_iz00_1303 = BgL_iz00_8435; 
goto BgL_zc3z04anonymousza31317ze3z87_1304;} } } } } } } 

}



/* &ucs2-string-upcase */
obj_t BGl_z62ucs2zd2stringzd2upcasez62zz__unicodez00(obj_t BgL_envz00_6219, obj_t BgL_ucs2zd2stringzd2_6220)
{
{ /* Llib/unicode.scm 443 */
{ /* Llib/unicode.scm 444 */
obj_t BgL_auxz00_8437;
if(
UCS2_STRINGP(BgL_ucs2zd2stringzd2_6220))
{ /* Llib/unicode.scm 444 */
BgL_auxz00_8437 = BgL_ucs2zd2stringzd2_6220
; }  else 
{ 
obj_t BgL_auxz00_8440;
BgL_auxz00_8440 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)20233)), BGl_string4967z00zz__unicodez00, BGl_string4930z00zz__unicodez00, BgL_ucs2zd2stringzd2_6220); 
FAILURE(BgL_auxz00_8440,BFALSE,BFALSE);} 
return 
BGl_ucs2zd2stringzd2upcasez00zz__unicodez00(BgL_auxz00_8437);} } 

}



/* ucs2-string-downcase */
BGL_EXPORTED_DEF obj_t BGl_ucs2zd2stringzd2downcasez00zz__unicodez00(obj_t BgL_ucs2zd2stringzd2_59)
{
{ /* Llib/unicode.scm 457 */
{ /* Llib/unicode.scm 458 */
int BgL_lenz00_1312;
BgL_lenz00_1312 = 
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_59); 
{ /* Llib/unicode.scm 458 */
obj_t BgL_resz00_1313;
{ /* Llib/unicode.scm 137 */
ucs2_t BgL_fillerz00_1323;
{ /* Llib/unicode.scm 137 */
int BgL_tmpz00_8446;
BgL_tmpz00_8446 = 
(int)(
(
(unsigned char)(
(char)(((unsigned char)' '))))); 
BgL_fillerz00_1323 = 
BGL_INT_TO_UCS2(BgL_tmpz00_8446); } 
{ /* Llib/unicode.scm 137 */

BgL_resz00_1313 = 
make_ucs2_string(BgL_lenz00_1312, BgL_fillerz00_1323); } } 
{ /* Llib/unicode.scm 459 */

{ 
long BgL_iz00_1315;
BgL_iz00_1315 = ((long)0); 
BgL_zc3z04anonymousza31325ze3z87_1316:
if(
(BgL_iz00_1315==
(long)(BgL_lenz00_1312)))
{ /* Llib/unicode.scm 461 */
return BgL_resz00_1313;}  else 
{ /* Llib/unicode.scm 461 */
{ /* Llib/unicode.scm 465 */
ucs2_t BgL_arg1327z00_1318;
{ /* Llib/unicode.scm 465 */
ucs2_t BgL_arg1328z00_1319;
{ /* Llib/unicode.scm 465 */
ucs2_t BgL_res2864z00_3396;
{ /* Llib/unicode.scm 465 */
int BgL_kz00_3381;
BgL_kz00_3381 = 
(int)(BgL_iz00_1315); 
{ /* Llib/unicode.scm 248 */
bool_t BgL_test5371z00_8457;
{ /* Llib/unicode.scm 248 */
long BgL_auxz00_8460;long BgL_tmpz00_8458;
BgL_auxz00_8460 = 
(long)(
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_59)); 
BgL_tmpz00_8458 = 
(long)(BgL_kz00_3381); 
BgL_test5371z00_8457 = 
BOUND_CHECK(BgL_tmpz00_8458, BgL_auxz00_8460); } 
if(BgL_test5371z00_8457)
{ /* Llib/unicode.scm 248 */
BgL_res2864z00_3396 = 
UCS2_STRING_REF(BgL_ucs2zd2stringzd2_59, BgL_kz00_3381); }  else 
{ /* Llib/unicode.scm 253 */
obj_t BgL_arg1225z00_3384;
{ /* Llib/unicode.scm 253 */
obj_t BgL_arg1227z00_3385;
{ /* Llib/unicode.scm 253 */

BgL_arg1227z00_3385 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
(
(long)(
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_59))-((long)1)), ((long)10)); } 
BgL_arg1225z00_3384 = 
string_append_3(BGl_string4931z00zz__unicodez00, BgL_arg1227z00_3385, BGl_string4932z00zz__unicodez00); } 
{ /* Llib/unicode.scm 250 */
obj_t BgL_tmpz00_8470;
{ /* Llib/unicode.scm 250 */
obj_t BgL_aux4603z00_7106;
BgL_aux4603z00_7106 = 
BGl_errorz00zz__errorz00(BGl_symbol4933z00zz__unicodez00, BgL_arg1225z00_3384, 
BINT(BgL_kz00_3381)); 
if(
UCS2P(BgL_aux4603z00_7106))
{ /* Llib/unicode.scm 250 */
BgL_tmpz00_8470 = BgL_aux4603z00_7106
; }  else 
{ 
obj_t BgL_auxz00_8475;
BgL_auxz00_8475 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)11183)), BGl_string4963z00zz__unicodez00, BGl_string4928z00zz__unicodez00, BgL_aux4603z00_7106); 
FAILURE(BgL_auxz00_8475,BFALSE,BFALSE);} } 
BgL_res2864z00_3396 = 
CUCS2(BgL_tmpz00_8470); } } } } 
BgL_arg1328z00_1319 = BgL_res2864z00_3396; } 
BgL_arg1327z00_1318 = 
ucs2_tolower(BgL_arg1328z00_1319); } 
{ /* Llib/unicode.scm 464 */
int BgL_kz00_3400;
BgL_kz00_3400 = 
(int)(BgL_iz00_1315); 
{ /* Llib/unicode.scm 261 */
bool_t BgL_test5373z00_8482;
{ /* Llib/unicode.scm 261 */
long BgL_auxz00_8485;long BgL_tmpz00_8483;
BgL_auxz00_8485 = 
(long)(
UCS2_STRING_LENGTH(BgL_resz00_1313)); 
BgL_tmpz00_8483 = 
(long)(BgL_kz00_3400); 
BgL_test5373z00_8482 = 
BOUND_CHECK(BgL_tmpz00_8483, BgL_auxz00_8485); } 
if(BgL_test5373z00_8482)
{ /* Llib/unicode.scm 261 */
UCS2_STRING_SET(BgL_resz00_1313, BgL_kz00_3400, BgL_arg1327z00_1318); }  else 
{ /* Llib/unicode.scm 266 */
obj_t BgL_arg1245z00_3404;
{ /* Llib/unicode.scm 266 */
obj_t BgL_arg1246z00_3405;
{ /* Llib/unicode.scm 266 */

BgL_arg1246z00_3405 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
(
(long)(
UCS2_STRING_LENGTH(BgL_resz00_1313))-((long)1)), ((long)10)); } 
BgL_arg1245z00_3404 = 
string_append_3(BGl_string4931z00zz__unicodez00, BgL_arg1246z00_3405, BGl_string4932z00zz__unicodez00); } 
BGl_errorz00zz__errorz00(BGl_symbol4936z00zz__unicodez00, BgL_arg1245z00_3404, 
BINT(BgL_kz00_3400)); } } } } 
{ 
long BgL_iz00_8497;
BgL_iz00_8497 = 
(BgL_iz00_1315+((long)1)); 
BgL_iz00_1315 = BgL_iz00_8497; 
goto BgL_zc3z04anonymousza31325ze3z87_1316;} } } } } } } 

}



/* &ucs2-string-downcase */
obj_t BGl_z62ucs2zd2stringzd2downcasez62zz__unicodez00(obj_t BgL_envz00_6221, obj_t BgL_ucs2zd2stringzd2_6222)
{
{ /* Llib/unicode.scm 457 */
{ /* Llib/unicode.scm 458 */
obj_t BgL_auxz00_8499;
if(
UCS2_STRINGP(BgL_ucs2zd2stringzd2_6222))
{ /* Llib/unicode.scm 458 */
BgL_auxz00_8499 = BgL_ucs2zd2stringzd2_6222
; }  else 
{ 
obj_t BgL_auxz00_8502;
BgL_auxz00_8502 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)20748)), BGl_string4968z00zz__unicodez00, BGl_string4930z00zz__unicodez00, BgL_ucs2zd2stringzd2_6222); 
FAILURE(BgL_auxz00_8502,BFALSE,BFALSE);} 
return 
BGl_ucs2zd2stringzd2downcasez00zz__unicodez00(BgL_auxz00_8499);} } 

}



/* ucs2-string-upcase! */
BGL_EXPORTED_DEF obj_t BGl_ucs2zd2stringzd2upcasez12z12zz__unicodez00(obj_t BgL_ucs2zd2stringzd2_60)
{
{ /* Llib/unicode.scm 471 */
{ /* Llib/unicode.scm 472 */
int BgL_lenz00_1324;
BgL_lenz00_1324 = 
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_60); 
{ /* Llib/unicode.scm 473 */

{ 
long BgL_iz00_1327;
BgL_iz00_1327 = ((long)0); 
BgL_zc3z04anonymousza31330ze3z87_1328:
if(
(BgL_iz00_1327==
(long)(BgL_lenz00_1324)))
{ /* Llib/unicode.scm 475 */
return BgL_ucs2zd2stringzd2_60;}  else 
{ /* Llib/unicode.scm 475 */
{ /* Llib/unicode.scm 479 */
ucs2_t BgL_arg1333z00_1330;
{ /* Llib/unicode.scm 479 */
ucs2_t BgL_arg1334z00_1331;
{ /* Llib/unicode.scm 479 */
ucs2_t BgL_res2875z00_3439;
{ /* Llib/unicode.scm 479 */
int BgL_kz00_3424;
BgL_kz00_3424 = 
(int)(BgL_iz00_1327); 
{ /* Llib/unicode.scm 248 */
bool_t BgL_test5376z00_8512;
{ /* Llib/unicode.scm 248 */
long BgL_auxz00_8515;long BgL_tmpz00_8513;
BgL_auxz00_8515 = 
(long)(
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_60)); 
BgL_tmpz00_8513 = 
(long)(BgL_kz00_3424); 
BgL_test5376z00_8512 = 
BOUND_CHECK(BgL_tmpz00_8513, BgL_auxz00_8515); } 
if(BgL_test5376z00_8512)
{ /* Llib/unicode.scm 248 */
BgL_res2875z00_3439 = 
UCS2_STRING_REF(BgL_ucs2zd2stringzd2_60, BgL_kz00_3424); }  else 
{ /* Llib/unicode.scm 253 */
obj_t BgL_arg1225z00_3427;
{ /* Llib/unicode.scm 253 */
obj_t BgL_arg1227z00_3428;
{ /* Llib/unicode.scm 253 */

BgL_arg1227z00_3428 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
(
(long)(
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_60))-((long)1)), ((long)10)); } 
BgL_arg1225z00_3427 = 
string_append_3(BGl_string4931z00zz__unicodez00, BgL_arg1227z00_3428, BGl_string4932z00zz__unicodez00); } 
{ /* Llib/unicode.scm 250 */
obj_t BgL_tmpz00_8525;
{ /* Llib/unicode.scm 250 */
obj_t BgL_aux4607z00_7110;
BgL_aux4607z00_7110 = 
BGl_errorz00zz__errorz00(BGl_symbol4933z00zz__unicodez00, BgL_arg1225z00_3427, 
BINT(BgL_kz00_3424)); 
if(
UCS2P(BgL_aux4607z00_7110))
{ /* Llib/unicode.scm 250 */
BgL_tmpz00_8525 = BgL_aux4607z00_7110
; }  else 
{ 
obj_t BgL_auxz00_8530;
BgL_auxz00_8530 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)11183)), BGl_string4963z00zz__unicodez00, BGl_string4928z00zz__unicodez00, BgL_aux4607z00_7110); 
FAILURE(BgL_auxz00_8530,BFALSE,BFALSE);} } 
BgL_res2875z00_3439 = 
CUCS2(BgL_tmpz00_8525); } } } } 
BgL_arg1334z00_1331 = BgL_res2875z00_3439; } 
BgL_arg1333z00_1330 = 
ucs2_toupper(BgL_arg1334z00_1331); } 
{ /* Llib/unicode.scm 478 */
int BgL_kz00_3443;
BgL_kz00_3443 = 
(int)(BgL_iz00_1327); 
{ /* Llib/unicode.scm 261 */
bool_t BgL_test5378z00_8537;
{ /* Llib/unicode.scm 261 */
long BgL_auxz00_8540;long BgL_tmpz00_8538;
BgL_auxz00_8540 = 
(long)(
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_60)); 
BgL_tmpz00_8538 = 
(long)(BgL_kz00_3443); 
BgL_test5378z00_8537 = 
BOUND_CHECK(BgL_tmpz00_8538, BgL_auxz00_8540); } 
if(BgL_test5378z00_8537)
{ /* Llib/unicode.scm 261 */
UCS2_STRING_SET(BgL_ucs2zd2stringzd2_60, BgL_kz00_3443, BgL_arg1333z00_1330); }  else 
{ /* Llib/unicode.scm 266 */
obj_t BgL_arg1245z00_3447;
{ /* Llib/unicode.scm 266 */
obj_t BgL_arg1246z00_3448;
{ /* Llib/unicode.scm 266 */

BgL_arg1246z00_3448 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
(
(long)(
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_60))-((long)1)), ((long)10)); } 
BgL_arg1245z00_3447 = 
string_append_3(BGl_string4931z00zz__unicodez00, BgL_arg1246z00_3448, BGl_string4932z00zz__unicodez00); } 
BGl_errorz00zz__errorz00(BGl_symbol4936z00zz__unicodez00, BgL_arg1245z00_3447, 
BINT(BgL_kz00_3443)); } } } } 
{ 
long BgL_iz00_8552;
BgL_iz00_8552 = 
(BgL_iz00_1327+((long)1)); 
BgL_iz00_1327 = BgL_iz00_8552; 
goto BgL_zc3z04anonymousza31330ze3z87_1328;} } } } } } 

}



/* &ucs2-string-upcase! */
obj_t BGl_z62ucs2zd2stringzd2upcasez12z70zz__unicodez00(obj_t BgL_envz00_6223, obj_t BgL_ucs2zd2stringzd2_6224)
{
{ /* Llib/unicode.scm 471 */
{ /* Llib/unicode.scm 472 */
obj_t BgL_auxz00_8554;
if(
UCS2_STRINGP(BgL_ucs2zd2stringzd2_6224))
{ /* Llib/unicode.scm 472 */
BgL_auxz00_8554 = BgL_ucs2zd2stringzd2_6224
; }  else 
{ 
obj_t BgL_auxz00_8557;
BgL_auxz00_8557 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)21264)), BGl_string4969z00zz__unicodez00, BGl_string4930z00zz__unicodez00, BgL_ucs2zd2stringzd2_6224); 
FAILURE(BgL_auxz00_8557,BFALSE,BFALSE);} 
return 
BGl_ucs2zd2stringzd2upcasez12z12zz__unicodez00(BgL_auxz00_8554);} } 

}



/* ucs2-string-downcase! */
BGL_EXPORTED_DEF obj_t BGl_ucs2zd2stringzd2downcasez12z12zz__unicodez00(obj_t BgL_ucs2zd2stringzd2_61)
{
{ /* Llib/unicode.scm 485 */
{ /* Llib/unicode.scm 486 */
int BgL_lenz00_1334;
BgL_lenz00_1334 = 
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_61); 
{ /* Llib/unicode.scm 487 */

{ 
long BgL_iz00_1337;
BgL_iz00_1337 = ((long)0); 
BgL_zc3z04anonymousza31336ze3z87_1338:
if(
(BgL_iz00_1337==
(long)(BgL_lenz00_1334)))
{ /* Llib/unicode.scm 489 */
return BgL_ucs2zd2stringzd2_61;}  else 
{ /* Llib/unicode.scm 489 */
{ /* Llib/unicode.scm 493 */
ucs2_t BgL_arg1338z00_1340;
{ /* Llib/unicode.scm 493 */
ucs2_t BgL_arg1339z00_1341;
{ /* Llib/unicode.scm 493 */
ucs2_t BgL_res2886z00_3482;
{ /* Llib/unicode.scm 493 */
int BgL_kz00_3467;
BgL_kz00_3467 = 
(int)(BgL_iz00_1337); 
{ /* Llib/unicode.scm 248 */
bool_t BgL_test5381z00_8567;
{ /* Llib/unicode.scm 248 */
long BgL_auxz00_8570;long BgL_tmpz00_8568;
BgL_auxz00_8570 = 
(long)(
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_61)); 
BgL_tmpz00_8568 = 
(long)(BgL_kz00_3467); 
BgL_test5381z00_8567 = 
BOUND_CHECK(BgL_tmpz00_8568, BgL_auxz00_8570); } 
if(BgL_test5381z00_8567)
{ /* Llib/unicode.scm 248 */
BgL_res2886z00_3482 = 
UCS2_STRING_REF(BgL_ucs2zd2stringzd2_61, BgL_kz00_3467); }  else 
{ /* Llib/unicode.scm 253 */
obj_t BgL_arg1225z00_3470;
{ /* Llib/unicode.scm 253 */
obj_t BgL_arg1227z00_3471;
{ /* Llib/unicode.scm 253 */

BgL_arg1227z00_3471 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
(
(long)(
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_61))-((long)1)), ((long)10)); } 
BgL_arg1225z00_3470 = 
string_append_3(BGl_string4931z00zz__unicodez00, BgL_arg1227z00_3471, BGl_string4932z00zz__unicodez00); } 
{ /* Llib/unicode.scm 250 */
obj_t BgL_tmpz00_8580;
{ /* Llib/unicode.scm 250 */
obj_t BgL_aux4611z00_7114;
BgL_aux4611z00_7114 = 
BGl_errorz00zz__errorz00(BGl_symbol4933z00zz__unicodez00, BgL_arg1225z00_3470, 
BINT(BgL_kz00_3467)); 
if(
UCS2P(BgL_aux4611z00_7114))
{ /* Llib/unicode.scm 250 */
BgL_tmpz00_8580 = BgL_aux4611z00_7114
; }  else 
{ 
obj_t BgL_auxz00_8585;
BgL_auxz00_8585 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)11183)), BGl_string4963z00zz__unicodez00, BGl_string4928z00zz__unicodez00, BgL_aux4611z00_7114); 
FAILURE(BgL_auxz00_8585,BFALSE,BFALSE);} } 
BgL_res2886z00_3482 = 
CUCS2(BgL_tmpz00_8580); } } } } 
BgL_arg1339z00_1341 = BgL_res2886z00_3482; } 
BgL_arg1338z00_1340 = 
ucs2_tolower(BgL_arg1339z00_1341); } 
{ /* Llib/unicode.scm 492 */
int BgL_kz00_3486;
BgL_kz00_3486 = 
(int)(BgL_iz00_1337); 
{ /* Llib/unicode.scm 261 */
bool_t BgL_test5383z00_8592;
{ /* Llib/unicode.scm 261 */
long BgL_auxz00_8595;long BgL_tmpz00_8593;
BgL_auxz00_8595 = 
(long)(
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_61)); 
BgL_tmpz00_8593 = 
(long)(BgL_kz00_3486); 
BgL_test5383z00_8592 = 
BOUND_CHECK(BgL_tmpz00_8593, BgL_auxz00_8595); } 
if(BgL_test5383z00_8592)
{ /* Llib/unicode.scm 261 */
UCS2_STRING_SET(BgL_ucs2zd2stringzd2_61, BgL_kz00_3486, BgL_arg1338z00_1340); }  else 
{ /* Llib/unicode.scm 266 */
obj_t BgL_arg1245z00_3490;
{ /* Llib/unicode.scm 266 */
obj_t BgL_arg1246z00_3491;
{ /* Llib/unicode.scm 266 */

BgL_arg1246z00_3491 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
(
(long)(
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_61))-((long)1)), ((long)10)); } 
BgL_arg1245z00_3490 = 
string_append_3(BGl_string4931z00zz__unicodez00, BgL_arg1246z00_3491, BGl_string4932z00zz__unicodez00); } 
BGl_errorz00zz__errorz00(BGl_symbol4936z00zz__unicodez00, BgL_arg1245z00_3490, 
BINT(BgL_kz00_3486)); } } } } 
{ 
long BgL_iz00_8607;
BgL_iz00_8607 = 
(BgL_iz00_1337+((long)1)); 
BgL_iz00_1337 = BgL_iz00_8607; 
goto BgL_zc3z04anonymousza31336ze3z87_1338;} } } } } } 

}



/* &ucs2-string-downcase! */
obj_t BGl_z62ucs2zd2stringzd2downcasez12z70zz__unicodez00(obj_t BgL_envz00_6225, obj_t BgL_ucs2zd2stringzd2_6226)
{
{ /* Llib/unicode.scm 485 */
{ /* Llib/unicode.scm 486 */
obj_t BgL_auxz00_8609;
if(
UCS2_STRINGP(BgL_ucs2zd2stringzd2_6226))
{ /* Llib/unicode.scm 486 */
BgL_auxz00_8609 = BgL_ucs2zd2stringzd2_6226
; }  else 
{ 
obj_t BgL_auxz00_8612;
BgL_auxz00_8612 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)21769)), BGl_string4970z00zz__unicodez00, BGl_string4930z00zz__unicodez00, BgL_ucs2zd2stringzd2_6226); 
FAILURE(BgL_auxz00_8612,BFALSE,BFALSE);} 
return 
BGl_ucs2zd2stringzd2downcasez12z12zz__unicodez00(BgL_auxz00_8609);} } 

}



/* ucs2-string->utf8-string */
BGL_EXPORTED_DEF obj_t BGl_ucs2zd2stringzd2ze3utf8zd2stringz31zz__unicodez00(obj_t BgL_ucs2z00_62)
{
{ /* Llib/unicode.scm 499 */
return 
ucs2_string_to_utf8_string(BgL_ucs2z00_62);} 

}



/* &ucs2-string->utf8-string */
obj_t BGl_z62ucs2zd2stringzd2ze3utf8zd2stringz53zz__unicodez00(obj_t BgL_envz00_6227, obj_t BgL_ucs2z00_6228)
{
{ /* Llib/unicode.scm 499 */
{ /* Llib/unicode.scm 500 */
obj_t BgL_auxz00_8618;
if(
UCS2_STRINGP(BgL_ucs2z00_6228))
{ /* Llib/unicode.scm 500 */
BgL_auxz00_8618 = BgL_ucs2z00_6228
; }  else 
{ 
obj_t BgL_auxz00_8621;
BgL_auxz00_8621 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)22285)), BGl_string4971z00zz__unicodez00, BGl_string4930z00zz__unicodez00, BgL_ucs2z00_6228); 
FAILURE(BgL_auxz00_8621,BFALSE,BFALSE);} 
return 
BGl_ucs2zd2stringzd2ze3utf8zd2stringz31zz__unicodez00(BgL_auxz00_8618);} } 

}



/* inverse-utf8-table */
BGL_EXPORTED_DEF obj_t BGl_inversezd2utf8zd2tablez00zz__unicodez00(obj_t BgL_tablez00_63)
{
{ /* Llib/unicode.scm 608 */
{ 
long BgL_iz00_1349;obj_t BgL_resz00_1350;
BgL_iz00_1349 = ((long)0); 
BgL_resz00_1350 = BNIL; 
BgL_zc3z04anonymousza31341ze3z87_1351:
if(
(BgL_iz00_1349==
VECTOR_LENGTH(BgL_tablez00_63)))
{ /* Llib/unicode.scm 633 */
return BgL_resz00_1350;}  else 
{ /* Llib/unicode.scm 635 */
obj_t BgL_sz00_1353;
{ /* Llib/unicode.scm 635 */
bool_t BgL_test5387z00_8629;
{ /* Llib/unicode.scm 635 */
long BgL_tmpz00_8630;
BgL_tmpz00_8630 = 
VECTOR_LENGTH(BgL_tablez00_63); 
BgL_test5387z00_8629 = 
BOUND_CHECK(BgL_iz00_1349, BgL_tmpz00_8630); } 
if(BgL_test5387z00_8629)
{ /* Llib/unicode.scm 635 */
BgL_sz00_1353 = 
VECTOR_REF(BgL_tablez00_63,BgL_iz00_1349); }  else 
{ 
obj_t BgL_auxz00_8634;
BgL_auxz00_8634 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)25815)), BGl_string4972z00zz__unicodez00, BgL_tablez00_63, 
(int)(
VECTOR_LENGTH(BgL_tablez00_63)), 
(int)(BgL_iz00_1349)); 
FAILURE(BgL_auxz00_8634,BFALSE,BFALSE);} } 
{ /* Llib/unicode.scm 636 */
bool_t BgL_test5388z00_8641;
{ /* Llib/unicode.scm 636 */
long BgL_tmpz00_8642;
{ /* Llib/unicode.scm 636 */
obj_t BgL_stringz00_3532;
if(
STRINGP(BgL_sz00_1353))
{ /* Llib/unicode.scm 636 */
BgL_stringz00_3532 = BgL_sz00_1353; }  else 
{ 
obj_t BgL_auxz00_8645;
BgL_auxz00_8645 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)25849)), BGl_string4963z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_sz00_1353); 
FAILURE(BgL_auxz00_8645,BFALSE,BFALSE);} 
BgL_tmpz00_8642 = 
STRING_LENGTH(BgL_stringz00_3532); } 
BgL_test5388z00_8641 = 
(BgL_tmpz00_8642>((long)0)); } 
if(BgL_test5388z00_8641)
{ 
obj_t BgL_resz00_8653;long BgL_iz00_8651;
BgL_iz00_8651 = 
(BgL_iz00_1349+((long)1)); 
BgL_resz00_8653 = 
BGl_addzd2tablezd2entryze70ze7zz__unicodez00(BgL_resz00_1350, BgL_sz00_1353, 
(((long)128)+BgL_iz00_1349)); 
BgL_resz00_1350 = BgL_resz00_8653; 
BgL_iz00_1349 = BgL_iz00_8651; 
goto BgL_zc3z04anonymousza31341ze3z87_1351;}  else 
{ 
long BgL_iz00_8656;
BgL_iz00_8656 = 
(BgL_iz00_1349+((long)1)); 
BgL_iz00_1349 = BgL_iz00_8656; 
goto BgL_zc3z04anonymousza31341ze3z87_1351;} } } } } 

}



/* loop~0 */
obj_t BGl_loopze70ze7zz__unicodez00(long BgL_lenz00_6299, long BgL_charz00_6298, obj_t BgL_sz00_6297, long BgL_iz00_1367)
{
{ /* Llib/unicode.scm 612 */
if(
(BgL_lenz00_6299==BgL_iz00_1367))
{ /* Llib/unicode.scm 613 */
return 
BCHAR(
BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(BgL_charz00_6298));}  else 
{ /* Llib/unicode.scm 615 */
obj_t BgL_arg1354z00_1370;
{ /* Llib/unicode.scm 615 */
long BgL_arg1356z00_1372;obj_t BgL_arg1357z00_1373;
{ /* Llib/unicode.scm 615 */
unsigned char BgL_tmpz00_8662;
{ /* Llib/unicode.scm 615 */
obj_t BgL_stringz00_3509;
if(
STRINGP(BgL_sz00_6297))
{ /* Llib/unicode.scm 615 */
BgL_stringz00_3509 = BgL_sz00_6297; }  else 
{ 
obj_t BgL_auxz00_8665;
BgL_auxz00_8665 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)25351)), BGl_string4974z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_sz00_6297); 
FAILURE(BgL_auxz00_8665,BFALSE,BFALSE);} 
{ /* Llib/unicode.scm 615 */
long BgL_l3802z00_6306;
BgL_l3802z00_6306 = 
STRING_LENGTH(BgL_stringz00_3509); 
if(
BOUND_CHECK(BgL_iz00_1367, BgL_l3802z00_6306))
{ /* Llib/unicode.scm 615 */
BgL_tmpz00_8662 = 
STRING_REF(BgL_stringz00_3509, BgL_iz00_1367)
; }  else 
{ 
obj_t BgL_auxz00_8673;
BgL_auxz00_8673 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)25339)), BGl_string4975z00zz__unicodez00, BgL_stringz00_3509, 
(int)(BgL_l3802z00_6306), 
(int)(BgL_iz00_1367)); 
FAILURE(BgL_auxz00_8673,BFALSE,BFALSE);} } } 
BgL_arg1356z00_1372 = 
(BgL_tmpz00_8662); } 
BgL_arg1357z00_1373 = 
BGl_loopze70ze7zz__unicodez00(BgL_lenz00_6299, BgL_charz00_6298, BgL_sz00_6297, 
(BgL_iz00_1367+((long)1))); 
BgL_arg1354z00_1370 = 
MAKE_YOUNG_PAIR(
BINT(BgL_arg1356z00_1372), BgL_arg1357z00_1373); } 
{ /* Llib/unicode.scm 615 */
obj_t BgL_list1355z00_1371;
BgL_list1355z00_1371 = 
MAKE_YOUNG_PAIR(BgL_arg1354z00_1370, BNIL); 
return BgL_list1355z00_1371;} } } 

}



/* make-table-entry~0 */
obj_t BGl_makezd2tablezd2entryze70ze7zz__unicodez00(obj_t BgL_sz00_1362, long BgL_charz00_1363)
{
{ /* Llib/unicode.scm 615 */
{ /* Llib/unicode.scm 611 */
long BgL_lenz00_1365;
{ /* Llib/unicode.scm 611 */
obj_t BgL_stringz00_3504;
if(
STRINGP(BgL_sz00_1362))
{ /* Llib/unicode.scm 611 */
BgL_stringz00_3504 = BgL_sz00_1362; }  else 
{ 
obj_t BgL_auxz00_8687;
BgL_auxz00_8687 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)25226)), BGl_string4976z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_sz00_1362); 
FAILURE(BgL_auxz00_8687,BFALSE,BFALSE);} 
BgL_lenz00_1365 = 
STRING_LENGTH(BgL_stringz00_3504); } 
return 
BGl_loopze70ze7zz__unicodez00(BgL_lenz00_1365, BgL_charz00_1363, BgL_sz00_1362, ((long)0));} } 

}



/* loop~1 */
obj_t BGl_loopze71ze7zz__unicodez00(obj_t BgL_ez00_1383, obj_t BgL_tablez00_1384)
{
{ /* Llib/unicode.scm 618 */
if(
NULLP(BgL_ez00_1383))
{ /* Llib/unicode.scm 620 */
return BgL_tablez00_1384;}  else 
{ /* Llib/unicode.scm 622 */
obj_t BgL_nz00_1387;
{ /* Llib/unicode.scm 622 */
obj_t BgL_pairz00_3519;
if(
PAIRP(BgL_ez00_1383))
{ /* Llib/unicode.scm 622 */
BgL_pairz00_3519 = BgL_ez00_1383; }  else 
{ 
obj_t BgL_auxz00_8697;
BgL_auxz00_8697 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)25546)), BGl_string4977z00zz__unicodez00, BGl_string4960z00zz__unicodez00, BgL_ez00_1383); 
FAILURE(BgL_auxz00_8697,BFALSE,BFALSE);} 
BgL_nz00_1387 = 
CAR(BgL_pairz00_3519); } 
{ /* Llib/unicode.scm 622 */
obj_t BgL_oz00_1388;
{ /* Llib/unicode.scm 623 */
obj_t BgL_auxz00_8702;
{ /* Llib/unicode.scm 623 */
bool_t BgL_test5396z00_8703;
if(
PAIRP(BgL_tablez00_1384))
{ /* Llib/unicode.scm 623 */
BgL_test5396z00_8703 = ((bool_t)1)
; }  else 
{ /* Llib/unicode.scm 623 */
BgL_test5396z00_8703 = 
NULLP(BgL_tablez00_1384)
; } 
if(BgL_test5396z00_8703)
{ /* Llib/unicode.scm 623 */
BgL_auxz00_8702 = BgL_tablez00_1384
; }  else 
{ 
obj_t BgL_auxz00_8707;
BgL_auxz00_8707 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)25567)), BGl_string4977z00zz__unicodez00, BGl_string4962z00zz__unicodez00, BgL_tablez00_1384); 
FAILURE(BgL_auxz00_8707,BFALSE,BFALSE);} } 
BgL_oz00_1388 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_nz00_1387, BgL_auxz00_8702); } 
{ /* Llib/unicode.scm 623 */

if(
CBOOL(BgL_oz00_1388))
{ /* Llib/unicode.scm 625 */
obj_t BgL_stz00_1389;
{ /* Llib/unicode.scm 625 */
obj_t BgL_pairz00_3520;
if(
PAIRP(BgL_oz00_1388))
{ /* Llib/unicode.scm 625 */
BgL_pairz00_3520 = BgL_oz00_1388; }  else 
{ 
obj_t BgL_auxz00_8716;
BgL_auxz00_8716 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)25605)), BGl_string4977z00zz__unicodez00, BGl_string4960z00zz__unicodez00, BgL_oz00_1388); 
FAILURE(BgL_auxz00_8716,BFALSE,BFALSE);} 
BgL_stz00_1389 = 
CDR(BgL_pairz00_3520); } 
{ /* Llib/unicode.scm 626 */
obj_t BgL_arg1364z00_1390;
{ /* Llib/unicode.scm 626 */
obj_t BgL_arg1365z00_1391;
{ /* Llib/unicode.scm 626 */
obj_t BgL_pairz00_3521;
if(
PAIRP(BgL_ez00_1383))
{ /* Llib/unicode.scm 626 */
BgL_pairz00_3521 = BgL_ez00_1383; }  else 
{ 
obj_t BgL_auxz00_8723;
BgL_auxz00_8723 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)25643)), BGl_string4977z00zz__unicodez00, BGl_string4960z00zz__unicodez00, BgL_ez00_1383); 
FAILURE(BgL_auxz00_8723,BFALSE,BFALSE);} 
{ /* Llib/unicode.scm 626 */
obj_t BgL_pairz00_3524;
{ /* Llib/unicode.scm 626 */
obj_t BgL_aux4631z00_7134;
BgL_aux4631z00_7134 = 
CDR(BgL_pairz00_3521); 
if(
PAIRP(BgL_aux4631z00_7134))
{ /* Llib/unicode.scm 626 */
BgL_pairz00_3524 = BgL_aux4631z00_7134; }  else 
{ 
obj_t BgL_auxz00_8730;
BgL_auxz00_8730 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)25637)), BGl_string4977z00zz__unicodez00, BGl_string4960z00zz__unicodez00, BgL_aux4631z00_7134); 
FAILURE(BgL_auxz00_8730,BFALSE,BFALSE);} } 
BgL_arg1365z00_1391 = 
CAR(BgL_pairz00_3524); } } 
BgL_arg1364z00_1390 = 
BGl_loopze71ze7zz__unicodez00(BgL_arg1365z00_1391, BgL_stz00_1389); } 
{ /* Llib/unicode.scm 626 */
obj_t BgL_pairz00_3525;
if(
PAIRP(BgL_oz00_1388))
{ /* Llib/unicode.scm 626 */
BgL_pairz00_3525 = BgL_oz00_1388; }  else 
{ 
obj_t BgL_auxz00_8738;
BgL_auxz00_8738 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)25629)), BGl_string4977z00zz__unicodez00, BGl_string4960z00zz__unicodez00, BgL_oz00_1388); 
FAILURE(BgL_auxz00_8738,BFALSE,BFALSE);} 
SET_CDR(BgL_pairz00_3525, BgL_arg1364z00_1390); } } 
return BgL_tablez00_1384;}  else 
{ /* Llib/unicode.scm 624 */
return 
MAKE_YOUNG_PAIR(BgL_ez00_1383, BgL_tablez00_1384);} } } } } 

}



/* add-table-entry~0 */
obj_t BGl_addzd2tablezd2entryze70ze7zz__unicodez00(obj_t BgL_tablez00_1377, obj_t BgL_sz00_1378, long BgL_charz00_1379)
{
{ /* Llib/unicode.scm 628 */
{ /* Llib/unicode.scm 618 */
obj_t BgL_g1042z00_1381;
{ /* Llib/unicode.scm 618 */
obj_t BgL_arg1367z00_1393;
BgL_arg1367z00_1393 = 
BGl_makezd2tablezd2entryze70ze7zz__unicodez00(BgL_sz00_1378, BgL_charz00_1379); 
{ /* Llib/unicode.scm 618 */
obj_t BgL_pairz00_3517;
if(
PAIRP(BgL_arg1367z00_1393))
{ /* Llib/unicode.scm 618 */
BgL_pairz00_3517 = BgL_arg1367z00_1393; }  else 
{ 
obj_t BgL_auxz00_8747;
BgL_auxz00_8747 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)25475)), BGl_string4978z00zz__unicodez00, BGl_string4960z00zz__unicodez00, BgL_arg1367z00_1393); 
FAILURE(BgL_auxz00_8747,BFALSE,BFALSE);} 
BgL_g1042z00_1381 = 
CAR(BgL_pairz00_3517); } } 
return 
BGl_loopze71ze7zz__unicodez00(BgL_g1042z00_1381, BgL_tablez00_1377);} } 

}



/* &inverse-utf8-table */
obj_t BGl_z62inversezd2utf8zd2tablez62zz__unicodez00(obj_t BgL_envz00_6229, obj_t BgL_tablez00_6230)
{
{ /* Llib/unicode.scm 608 */
{ /* Llib/unicode.scm 611 */
obj_t BgL_auxz00_8753;
if(
VECTORP(BgL_tablez00_6230))
{ /* Llib/unicode.scm 611 */
BgL_auxz00_8753 = BgL_tablez00_6230
; }  else 
{ 
obj_t BgL_auxz00_8756;
BgL_auxz00_8756 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)25215)), BGl_string4979z00zz__unicodez00, BGl_string4980z00zz__unicodez00, BgL_tablez00_6230); 
FAILURE(BgL_auxz00_8756,BFALSE,BFALSE);} 
return 
BGl_inversezd2utf8zd2tablez00zz__unicodez00(BgL_auxz00_8753);} } 

}



/* utf8-string->ucs2-string */
BGL_EXPORTED_DEF obj_t BGl_utf8zd2stringzd2ze3ucs2zd2stringz31zz__unicodez00(obj_t BgL_utf8z00_64)
{
{ /* Llib/unicode.scm 643 */
return 
utf8_string_to_ucs2_string(BgL_utf8z00_64);} 

}



/* &utf8-string->ucs2-string */
obj_t BGl_z62utf8zd2stringzd2ze3ucs2zd2stringz53zz__unicodez00(obj_t BgL_envz00_6231, obj_t BgL_utf8z00_6232)
{
{ /* Llib/unicode.scm 643 */
{ /* Llib/unicode.scm 644 */
obj_t BgL_auxz00_8762;
if(
STRINGP(BgL_utf8z00_6232))
{ /* Llib/unicode.scm 644 */
BgL_auxz00_8762 = BgL_utf8z00_6232
; }  else 
{ 
obj_t BgL_auxz00_8765;
BgL_auxz00_8765 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)26236)), BGl_string4981z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_utf8z00_6232); 
FAILURE(BgL_auxz00_8765,BFALSE,BFALSE);} 
return 
BGl_utf8zd2stringzd2ze3ucs2zd2stringz31zz__unicodez00(BgL_auxz00_8762);} } 

}



/* utf8->8bits-length */
long BGl_utf8zd2ze38bitszd2lengthze3zz__unicodez00(obj_t BgL_strz00_65, long BgL_lenz00_66)
{
{ /* Llib/unicode.scm 649 */
{ 
long BgL_siza7eza7_1397;long BgL_iz00_1398;
BgL_siza7eza7_1397 = ((long)0); 
BgL_iz00_1398 = ((long)0); 
BgL_zc3z04anonymousza31368ze3z87_1399:
if(
(BgL_iz00_1398>=BgL_lenz00_66))
{ /* Llib/unicode.scm 652 */
return BgL_siza7eza7_1397;}  else 
{ /* Llib/unicode.scm 654 */
long BgL_cz00_1401;
{ /* Llib/unicode.scm 654 */
unsigned char BgL_tmpz00_8772;
{ /* Llib/unicode.scm 654 */
long BgL_l3806z00_6310;
BgL_l3806z00_6310 = 
STRING_LENGTH(BgL_strz00_65); 
if(
BOUND_CHECK(BgL_iz00_1398, BgL_l3806z00_6310))
{ /* Llib/unicode.scm 654 */
BgL_tmpz00_8772 = 
STRING_REF(BgL_strz00_65, BgL_iz00_1398)
; }  else 
{ 
obj_t BgL_auxz00_8777;
BgL_auxz00_8777 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)26626)), BGl_string4975z00zz__unicodez00, BgL_strz00_65, 
(int)(BgL_l3806z00_6310), 
(int)(BgL_iz00_1398)); 
FAILURE(BgL_auxz00_8777,BFALSE,BFALSE);} } 
BgL_cz00_1401 = 
(BgL_tmpz00_8772); } 
if(
(BgL_cz00_1401<((long)194)))
{ 
long BgL_iz00_8788;long BgL_siza7eza7_8786;
BgL_siza7eza7_8786 = 
(BgL_siza7eza7_1397+((long)1)); 
BgL_iz00_8788 = 
(BgL_iz00_1398+((long)1)); 
BgL_iz00_1398 = BgL_iz00_8788; 
BgL_siza7eza7_1397 = BgL_siza7eza7_8786; 
goto BgL_zc3z04anonymousza31368ze3z87_1399;}  else 
{ /* Llib/unicode.scm 656 */
if(
(BgL_cz00_1401<=((long)223)))
{ 
long BgL_iz00_8794;long BgL_siza7eza7_8792;
BgL_siza7eza7_8792 = 
(BgL_siza7eza7_1397+((long)1)); 
BgL_iz00_8794 = 
(BgL_iz00_1398+((long)2)); 
BgL_iz00_1398 = BgL_iz00_8794; 
BgL_siza7eza7_1397 = BgL_siza7eza7_8792; 
goto BgL_zc3z04anonymousza31368ze3z87_1399;}  else 
{ /* Llib/unicode.scm 658 */
if(
(BgL_cz00_1401<=((long)239)))
{ 
long BgL_iz00_8800;long BgL_siza7eza7_8798;
BgL_siza7eza7_8798 = 
(BgL_siza7eza7_1397+((long)1)); 
BgL_iz00_8800 = 
(BgL_iz00_1398+((long)3)); 
BgL_iz00_1398 = BgL_iz00_8800; 
BgL_siza7eza7_1397 = BgL_siza7eza7_8798; 
goto BgL_zc3z04anonymousza31368ze3z87_1399;}  else 
{ /* Llib/unicode.scm 660 */
if(
(BgL_cz00_1401<=((long)247)))
{ 
long BgL_iz00_8806;long BgL_siza7eza7_8804;
BgL_siza7eza7_8804 = 
(BgL_siza7eza7_1397+((long)1)); 
BgL_iz00_8806 = 
(BgL_iz00_1398+((long)4)); 
BgL_iz00_1398 = BgL_iz00_8806; 
BgL_siza7eza7_1397 = BgL_siza7eza7_8804; 
goto BgL_zc3z04anonymousza31368ze3z87_1399;}  else 
{ /* Llib/unicode.scm 662 */
if(
(BgL_cz00_1401<=((long)251)))
{ 
long BgL_iz00_8812;long BgL_siza7eza7_8810;
BgL_siza7eza7_8810 = 
(BgL_siza7eza7_1397+((long)1)); 
BgL_iz00_8812 = 
(BgL_iz00_1398+((long)5)); 
BgL_iz00_1398 = BgL_iz00_8812; 
BgL_siza7eza7_1397 = BgL_siza7eza7_8810; 
goto BgL_zc3z04anonymousza31368ze3z87_1399;}  else 
{ 
long BgL_iz00_8816;long BgL_siza7eza7_8814;
BgL_siza7eza7_8814 = 
(BgL_siza7eza7_1397+((long)1)); 
BgL_iz00_8816 = 
(BgL_iz00_1398+((long)6)); 
BgL_iz00_1398 = BgL_iz00_8816; 
BgL_siza7eza7_1397 = BgL_siza7eza7_8814; 
goto BgL_zc3z04anonymousza31368ze3z87_1399;} } } } } } } } 

}



/* ascii-string? */
BGL_EXPORTED_DEF bool_t BGl_asciizd2stringzf3z21zz__unicodez00(obj_t BgL_strz00_67)
{
{ /* Llib/unicode.scm 672 */
return 
(
BGl_stringzd2minimalzd2charsetz00zz__unicodez00(BgL_strz00_67)==BGl_symbol4982z00zz__unicodez00);} 

}



/* &ascii-string? */
obj_t BGl_z62asciizd2stringzf3z43zz__unicodez00(obj_t BgL_envz00_6233, obj_t BgL_strz00_6234)
{
{ /* Llib/unicode.scm 672 */
{ /* Llib/unicode.scm 673 */
bool_t BgL_tmpz00_8820;
{ /* Llib/unicode.scm 673 */
obj_t BgL_auxz00_8821;
if(
STRINGP(BgL_strz00_6234))
{ /* Llib/unicode.scm 673 */
BgL_auxz00_8821 = BgL_strz00_6234
; }  else 
{ 
obj_t BgL_auxz00_8824;
BgL_auxz00_8824 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)27220)), BGl_string4984z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_strz00_6234); 
FAILURE(BgL_auxz00_8824,BFALSE,BFALSE);} 
BgL_tmpz00_8820 = 
BGl_asciizd2stringzf3z21zz__unicodez00(BgL_auxz00_8821); } 
return 
BBOOL(BgL_tmpz00_8820);} } 

}



/* _utf8-string? */
obj_t BGl__utf8zd2stringzf3z21zz__unicodez00(obj_t BgL_env1122z00_71, obj_t BgL_opt1121z00_70)
{
{ /* Llib/unicode.scm 678 */
{ /* Llib/unicode.scm 678 */
obj_t BgL_g1123z00_1422;
BgL_g1123z00_1422 = 
VECTOR_REF(BgL_opt1121z00_70,((long)0)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1121z00_70)) { case ((long)1) : 

{ /* Llib/unicode.scm 678 */

{ /* Llib/unicode.scm 678 */
bool_t BgL_tmpz00_8831;
{ /* Llib/unicode.scm 678 */
obj_t BgL_auxz00_8832;
if(
STRINGP(BgL_g1123z00_1422))
{ /* Llib/unicode.scm 678 */
BgL_auxz00_8832 = BgL_g1123z00_1422
; }  else 
{ 
obj_t BgL_auxz00_8835;
BgL_auxz00_8835 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)27481)), BGl_string4987z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_g1123z00_1422); 
FAILURE(BgL_auxz00_8835,BFALSE,BFALSE);} 
BgL_tmpz00_8831 = 
BGl_utf8zd2stringzf3z21zz__unicodez00(BgL_auxz00_8832, ((bool_t)0)); } 
return 
BBOOL(BgL_tmpz00_8831);} } break;case ((long)2) : 

{ /* Llib/unicode.scm 678 */
obj_t BgL_strictz00_1427;
BgL_strictz00_1427 = 
VECTOR_REF(BgL_opt1121z00_70,((long)1)); 
{ /* Llib/unicode.scm 678 */

{ /* Llib/unicode.scm 678 */
bool_t BgL_tmpz00_8842;
{ /* Llib/unicode.scm 678 */
obj_t BgL_auxz00_8843;
if(
STRINGP(BgL_g1123z00_1422))
{ /* Llib/unicode.scm 678 */
BgL_auxz00_8843 = BgL_g1123z00_1422
; }  else 
{ 
obj_t BgL_auxz00_8846;
BgL_auxz00_8846 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)27481)), BGl_string4987z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_g1123z00_1422); 
FAILURE(BgL_auxz00_8846,BFALSE,BFALSE);} 
BgL_tmpz00_8842 = 
BGl_utf8zd2stringzf3z21zz__unicodez00(BgL_auxz00_8843, 
CBOOL(BgL_strictz00_1427)); } 
return 
BBOOL(BgL_tmpz00_8842);} } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol4985z00zz__unicodez00, BGl_string4924z00zz__unicodez00, 
BINT(
VECTOR_LENGTH(BgL_opt1121z00_70)));} } } } 

}



/* utf8-string? */
BGL_EXPORTED_DEF bool_t BGl_utf8zd2stringzf3z21zz__unicodez00(obj_t BgL_strz00_68, bool_t BgL_strictz00_69)
{
{ /* Llib/unicode.scm 678 */
{ /* Llib/unicode.scm 684 */
long BgL_lenz00_1430;
BgL_lenz00_1430 = 
STRING_LENGTH(BgL_strz00_68); 
{ 
long BgL_rz00_1432;
BgL_rz00_1432 = ((long)0); 
BgL_zc3z04anonymousza31391ze3z87_1433:
if(
(BgL_rz00_1432==BgL_lenz00_1430))
{ /* Llib/unicode.scm 686 */
return ((bool_t)1);}  else 
{ /* Llib/unicode.scm 688 */
long BgL_nz00_1436;
{ /* Llib/unicode.scm 689 */
unsigned char BgL_tmpz00_8861;
{ /* Llib/unicode.scm 688 */
long BgL_l3810z00_6314;
BgL_l3810z00_6314 = 
STRING_LENGTH(BgL_strz00_68); 
if(
BOUND_CHECK(BgL_rz00_1432, BgL_l3810z00_6314))
{ /* Llib/unicode.scm 688 */
BgL_tmpz00_8861 = 
STRING_REF(BgL_strz00_68, BgL_rz00_1432)
; }  else 
{ 
obj_t BgL_auxz00_8866;
BgL_auxz00_8866 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)27751)), BGl_string4975z00zz__unicodez00, BgL_strz00_68, 
(int)(BgL_l3810z00_6314), 
(int)(BgL_rz00_1432)); 
FAILURE(BgL_auxz00_8866,BFALSE,BFALSE);} } 
BgL_nz00_1436 = 
(BgL_tmpz00_8861); } 
{ /* Llib/unicode.scm 689 */

if(
(BgL_nz00_1436<=((long)127)))
{ 
long BgL_rz00_8875;
BgL_rz00_8875 = 
(BgL_rz00_1432+((long)1)); 
BgL_rz00_1432 = BgL_rz00_8875; 
goto BgL_zc3z04anonymousza31391ze3z87_1433;}  else 
{ /* Llib/unicode.scm 691 */
if(
(BgL_nz00_1436<((long)194)))
{ /* Llib/unicode.scm 694 */
return ((bool_t)0);}  else 
{ /* Llib/unicode.scm 694 */
if(
(BgL_nz00_1436<((long)223)))
{ /* Llib/unicode.scm 699 */
bool_t BgL_test5421z00_8881;
if(
(
(((long)1)+BgL_rz00_1432)<BgL_lenz00_1430))
{ /* Llib/unicode.scm 681 */
long BgL_nz00_3623;
{ /* Llib/unicode.scm 681 */
unsigned char BgL_tmpz00_8885;
{ /* Llib/unicode.scm 700 */
long BgL_i3813z00_6317;
BgL_i3813z00_6317 = 
(BgL_rz00_1432+((long)1)); 
{ /* Llib/unicode.scm 700 */
long BgL_l3814z00_6318;
BgL_l3814z00_6318 = 
STRING_LENGTH(BgL_strz00_68); 
if(
BOUND_CHECK(BgL_i3813z00_6317, BgL_l3814z00_6318))
{ /* Llib/unicode.scm 700 */
BgL_tmpz00_8885 = 
STRING_REF(BgL_strz00_68, BgL_i3813z00_6317)
; }  else 
{ 
obj_t BgL_auxz00_8891;
BgL_auxz00_8891 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)28027)), BGl_string4975z00zz__unicodez00, BgL_strz00_68, 
(int)(BgL_l3814z00_6318), 
(int)(BgL_i3813z00_6317)); 
FAILURE(BgL_auxz00_8891,BFALSE,BFALSE);} } } 
BgL_nz00_3623 = 
(BgL_tmpz00_8885); } 
if(
(BgL_nz00_3623>=((long)128)))
{ /* Llib/unicode.scm 682 */
BgL_test5421z00_8881 = 
(BgL_nz00_3623<=((long)191))
; }  else 
{ /* Llib/unicode.scm 682 */
BgL_test5421z00_8881 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 699 */
BgL_test5421z00_8881 = ((bool_t)0)
; } 
if(BgL_test5421z00_8881)
{ 
long BgL_rz00_8901;
BgL_rz00_8901 = 
(BgL_rz00_1432+((long)2)); 
BgL_rz00_1432 = BgL_rz00_8901; 
goto BgL_zc3z04anonymousza31391ze3z87_1433;}  else 
{ /* Llib/unicode.scm 699 */
return ((bool_t)0);} }  else 
{ /* Llib/unicode.scm 702 */
bool_t BgL_test5425z00_8903;
if(
(BgL_nz00_1436>=((long)216)))
{ /* Llib/unicode.scm 702 */
BgL_test5425z00_8903 = 
(BgL_nz00_1436<=((long)219))
; }  else 
{ /* Llib/unicode.scm 702 */
BgL_test5425z00_8903 = ((bool_t)0)
; } 
if(BgL_test5425z00_8903)
{ /* Llib/unicode.scm 704 */
bool_t BgL_test5427z00_8907;
if(
(BgL_rz00_1432<
(BgL_lenz00_1430-((long)3))))
{ /* Llib/unicode.scm 705 */
bool_t BgL_test5429z00_8911;
{ /* Llib/unicode.scm 681 */
long BgL_nz00_3647;
{ /* Llib/unicode.scm 681 */
unsigned char BgL_tmpz00_8912;
{ /* Llib/unicode.scm 705 */
long BgL_i3817z00_6321;
BgL_i3817z00_6321 = 
(BgL_rz00_1432+((long)1)); 
{ /* Llib/unicode.scm 705 */
long BgL_l3818z00_6322;
BgL_l3818z00_6322 = 
STRING_LENGTH(BgL_strz00_68); 
if(
BOUND_CHECK(BgL_i3817z00_6321, BgL_l3818z00_6322))
{ /* Llib/unicode.scm 705 */
BgL_tmpz00_8912 = 
STRING_REF(BgL_strz00_68, BgL_i3817z00_6321)
; }  else 
{ 
obj_t BgL_auxz00_8918;
BgL_auxz00_8918 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)28214)), BGl_string4975z00zz__unicodez00, BgL_strz00_68, 
(int)(BgL_l3818z00_6322), 
(int)(BgL_i3817z00_6321)); 
FAILURE(BgL_auxz00_8918,BFALSE,BFALSE);} } } 
BgL_nz00_3647 = 
(BgL_tmpz00_8912); } 
if(
(BgL_nz00_3647>=((long)220)))
{ /* Llib/unicode.scm 682 */
BgL_test5429z00_8911 = 
(BgL_nz00_3647<=((long)223))
; }  else 
{ /* Llib/unicode.scm 682 */
BgL_test5429z00_8911 = ((bool_t)0)
; } } 
if(BgL_test5429z00_8911)
{ /* Llib/unicode.scm 706 */
bool_t BgL_test5432z00_8928;
{ /* Llib/unicode.scm 681 */
long BgL_nz00_3660;
{ /* Llib/unicode.scm 681 */
unsigned char BgL_tmpz00_8929;
{ /* Llib/unicode.scm 706 */
long BgL_i3821z00_6325;
BgL_i3821z00_6325 = 
(BgL_rz00_1432+((long)2)); 
{ /* Llib/unicode.scm 706 */
long BgL_l3822z00_6326;
BgL_l3822z00_6326 = 
STRING_LENGTH(BgL_strz00_68); 
if(
BOUND_CHECK(BgL_i3821z00_6325, BgL_l3822z00_6326))
{ /* Llib/unicode.scm 706 */
BgL_tmpz00_8929 = 
STRING_REF(BgL_strz00_68, BgL_i3821z00_6325)
; }  else 
{ 
obj_t BgL_auxz00_8935;
BgL_auxz00_8935 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)28273)), BGl_string4975z00zz__unicodez00, BgL_strz00_68, 
(int)(BgL_l3822z00_6326), 
(int)(BgL_i3821z00_6325)); 
FAILURE(BgL_auxz00_8935,BFALSE,BFALSE);} } } 
BgL_nz00_3660 = 
(BgL_tmpz00_8929); } 
if(
(BgL_nz00_3660>=((long)220)))
{ /* Llib/unicode.scm 682 */
BgL_test5432z00_8928 = 
(BgL_nz00_3660<=((long)223))
; }  else 
{ /* Llib/unicode.scm 682 */
BgL_test5432z00_8928 = ((bool_t)0)
; } } 
if(BgL_test5432z00_8928)
{ /* Llib/unicode.scm 681 */
long BgL_nz00_3673;
{ /* Llib/unicode.scm 681 */
unsigned char BgL_tmpz00_8945;
{ /* Llib/unicode.scm 707 */
long BgL_i3825z00_6329;
BgL_i3825z00_6329 = 
(BgL_rz00_1432+((long)3)); 
{ /* Llib/unicode.scm 707 */
long BgL_l3826z00_6330;
BgL_l3826z00_6330 = 
STRING_LENGTH(BgL_strz00_68); 
if(
BOUND_CHECK(BgL_i3825z00_6329, BgL_l3826z00_6330))
{ /* Llib/unicode.scm 707 */
BgL_tmpz00_8945 = 
STRING_REF(BgL_strz00_68, BgL_i3825z00_6329)
; }  else 
{ 
obj_t BgL_auxz00_8951;
BgL_auxz00_8951 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)28332)), BGl_string4975z00zz__unicodez00, BgL_strz00_68, 
(int)(BgL_l3826z00_6330), 
(int)(BgL_i3825z00_6329)); 
FAILURE(BgL_auxz00_8951,BFALSE,BFALSE);} } } 
BgL_nz00_3673 = 
(BgL_tmpz00_8945); } 
if(
(BgL_nz00_3673>=((long)220)))
{ /* Llib/unicode.scm 682 */
BgL_test5427z00_8907 = 
(BgL_nz00_3673<=((long)223))
; }  else 
{ /* Llib/unicode.scm 682 */
BgL_test5427z00_8907 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 706 */
BgL_test5427z00_8907 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 705 */
BgL_test5427z00_8907 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 704 */
BgL_test5427z00_8907 = ((bool_t)0)
; } 
if(BgL_test5427z00_8907)
{ 
long BgL_rz00_8961;
BgL_rz00_8961 = 
(BgL_rz00_1432+((long)4)); 
BgL_rz00_1432 = BgL_rz00_8961; 
goto BgL_zc3z04anonymousza31391ze3z87_1433;}  else 
{ /* Llib/unicode.scm 704 */
return ((bool_t)0);} }  else 
{ /* Llib/unicode.scm 702 */
if(
(BgL_nz00_1436<=((long)223)))
{ /* Llib/unicode.scm 711 */
bool_t BgL_test5438z00_8965;
if(
(
(((long)1)+BgL_rz00_1432)<BgL_lenz00_1430))
{ /* Llib/unicode.scm 681 */
long BgL_nz00_3695;
{ /* Llib/unicode.scm 681 */
unsigned char BgL_tmpz00_8969;
{ /* Llib/unicode.scm 712 */
long BgL_i3829z00_6333;
BgL_i3829z00_6333 = 
(BgL_rz00_1432+((long)1)); 
{ /* Llib/unicode.scm 712 */
long BgL_l3830z00_6334;
BgL_l3830z00_6334 = 
STRING_LENGTH(BgL_strz00_68); 
if(
BOUND_CHECK(BgL_i3829z00_6333, BgL_l3830z00_6334))
{ /* Llib/unicode.scm 712 */
BgL_tmpz00_8969 = 
STRING_REF(BgL_strz00_68, BgL_i3829z00_6333)
; }  else 
{ 
obj_t BgL_auxz00_8975;
BgL_auxz00_8975 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)28498)), BGl_string4975z00zz__unicodez00, BgL_strz00_68, 
(int)(BgL_l3830z00_6334), 
(int)(BgL_i3829z00_6333)); 
FAILURE(BgL_auxz00_8975,BFALSE,BFALSE);} } } 
BgL_nz00_3695 = 
(BgL_tmpz00_8969); } 
if(
(BgL_nz00_3695>=((long)128)))
{ /* Llib/unicode.scm 682 */
BgL_test5438z00_8965 = 
(BgL_nz00_3695<=((long)191))
; }  else 
{ /* Llib/unicode.scm 682 */
BgL_test5438z00_8965 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 711 */
BgL_test5438z00_8965 = ((bool_t)0)
; } 
if(BgL_test5438z00_8965)
{ 
long BgL_rz00_8985;
BgL_rz00_8985 = 
(BgL_rz00_1432+((long)2)); 
BgL_rz00_1432 = BgL_rz00_8985; 
goto BgL_zc3z04anonymousza31391ze3z87_1433;}  else 
{ /* Llib/unicode.scm 711 */
return ((bool_t)0);} }  else 
{ /* Llib/unicode.scm 709 */
if(
(BgL_nz00_1436<=((long)239)))
{ /* Llib/unicode.scm 716 */
bool_t BgL_test5443z00_8989;
if(
(BgL_rz00_1432<
(BgL_lenz00_1430-((long)2))))
{ /* Llib/unicode.scm 717 */
bool_t BgL_test5445z00_8993;
{ /* Llib/unicode.scm 681 */
long BgL_nz00_3717;
{ /* Llib/unicode.scm 681 */
unsigned char BgL_tmpz00_8994;
{ /* Llib/unicode.scm 717 */
long BgL_i3833z00_6337;
BgL_i3833z00_6337 = 
(BgL_rz00_1432+((long)1)); 
{ /* Llib/unicode.scm 717 */
long BgL_l3834z00_6338;
BgL_l3834z00_6338 = 
STRING_LENGTH(BgL_strz00_68); 
if(
BOUND_CHECK(BgL_i3833z00_6337, BgL_l3834z00_6338))
{ /* Llib/unicode.scm 717 */
BgL_tmpz00_8994 = 
STRING_REF(BgL_strz00_68, BgL_i3833z00_6337)
; }  else 
{ 
obj_t BgL_auxz00_9000;
BgL_auxz00_9000 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)28669)), BGl_string4975z00zz__unicodez00, BgL_strz00_68, 
(int)(BgL_l3834z00_6338), 
(int)(BgL_i3833z00_6337)); 
FAILURE(BgL_auxz00_9000,BFALSE,BFALSE);} } } 
BgL_nz00_3717 = 
(BgL_tmpz00_8994); } 
if(
(BgL_nz00_3717>=((long)128)))
{ /* Llib/unicode.scm 682 */
BgL_test5445z00_8993 = 
(BgL_nz00_3717<=((long)191))
; }  else 
{ /* Llib/unicode.scm 682 */
BgL_test5445z00_8993 = ((bool_t)0)
; } } 
if(BgL_test5445z00_8993)
{ /* Llib/unicode.scm 681 */
long BgL_nz00_3730;
{ /* Llib/unicode.scm 681 */
unsigned char BgL_tmpz00_9010;
{ /* Llib/unicode.scm 718 */
long BgL_i3837z00_6341;
BgL_i3837z00_6341 = 
(BgL_rz00_1432+((long)2)); 
{ /* Llib/unicode.scm 718 */
long BgL_l3838z00_6342;
BgL_l3838z00_6342 = 
STRING_LENGTH(BgL_strz00_68); 
if(
BOUND_CHECK(BgL_i3837z00_6341, BgL_l3838z00_6342))
{ /* Llib/unicode.scm 718 */
BgL_tmpz00_9010 = 
STRING_REF(BgL_strz00_68, BgL_i3837z00_6341)
; }  else 
{ 
obj_t BgL_auxz00_9016;
BgL_auxz00_9016 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)28728)), BGl_string4975z00zz__unicodez00, BgL_strz00_68, 
(int)(BgL_l3838z00_6342), 
(int)(BgL_i3837z00_6341)); 
FAILURE(BgL_auxz00_9016,BFALSE,BFALSE);} } } 
BgL_nz00_3730 = 
(BgL_tmpz00_9010); } 
if(
(BgL_nz00_3730>=((long)128)))
{ /* Llib/unicode.scm 682 */
BgL_test5443z00_8989 = 
(BgL_nz00_3730<=((long)191))
; }  else 
{ /* Llib/unicode.scm 682 */
BgL_test5443z00_8989 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 717 */
BgL_test5443z00_8989 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 716 */
BgL_test5443z00_8989 = ((bool_t)0)
; } 
if(BgL_test5443z00_8989)
{ 
long BgL_rz00_9026;
BgL_rz00_9026 = 
(BgL_rz00_1432+((long)3)); 
BgL_rz00_1432 = BgL_rz00_9026; 
goto BgL_zc3z04anonymousza31391ze3z87_1433;}  else 
{ /* Llib/unicode.scm 716 */
return ((bool_t)0);} }  else 
{ /* Llib/unicode.scm 714 */
if(
(BgL_nz00_1436==((long)240)))
{ /* Llib/unicode.scm 722 */
bool_t BgL_test5451z00_9030;
if(
(BgL_rz00_1432<
(BgL_lenz00_1430-((long)3))))
{ /* Llib/unicode.scm 723 */
bool_t BgL_test5453z00_9034;
{ /* Llib/unicode.scm 681 */
long BgL_nz00_3752;
{ /* Llib/unicode.scm 681 */
unsigned char BgL_tmpz00_9035;
{ /* Llib/unicode.scm 723 */
long BgL_i3841z00_6345;
BgL_i3841z00_6345 = 
(BgL_rz00_1432+((long)1)); 
{ /* Llib/unicode.scm 723 */
long BgL_l3842z00_6346;
BgL_l3842z00_6346 = 
STRING_LENGTH(BgL_strz00_68); 
if(
BOUND_CHECK(BgL_i3841z00_6345, BgL_l3842z00_6346))
{ /* Llib/unicode.scm 723 */
BgL_tmpz00_9035 = 
STRING_REF(BgL_strz00_68, BgL_i3841z00_6345)
; }  else 
{ 
obj_t BgL_auxz00_9041;
BgL_auxz00_9041 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)28907)), BGl_string4975z00zz__unicodez00, BgL_strz00_68, 
(int)(BgL_l3842z00_6346), 
(int)(BgL_i3841z00_6345)); 
FAILURE(BgL_auxz00_9041,BFALSE,BFALSE);} } } 
BgL_nz00_3752 = 
(BgL_tmpz00_9035); } 
if(
(BgL_nz00_3752>=((long)144)))
{ /* Llib/unicode.scm 682 */
BgL_test5453z00_9034 = 
(BgL_nz00_3752<=((long)191))
; }  else 
{ /* Llib/unicode.scm 682 */
BgL_test5453z00_9034 = ((bool_t)0)
; } } 
if(BgL_test5453z00_9034)
{ /* Llib/unicode.scm 724 */
bool_t BgL_test5456z00_9051;
{ /* Llib/unicode.scm 681 */
long BgL_nz00_3765;
{ /* Llib/unicode.scm 681 */
unsigned char BgL_tmpz00_9052;
{ /* Llib/unicode.scm 724 */
long BgL_i3845z00_6349;
BgL_i3845z00_6349 = 
(BgL_rz00_1432+((long)2)); 
{ /* Llib/unicode.scm 724 */
long BgL_l3846z00_6350;
BgL_l3846z00_6350 = 
STRING_LENGTH(BgL_strz00_68); 
if(
BOUND_CHECK(BgL_i3845z00_6349, BgL_l3846z00_6350))
{ /* Llib/unicode.scm 724 */
BgL_tmpz00_9052 = 
STRING_REF(BgL_strz00_68, BgL_i3845z00_6349)
; }  else 
{ 
obj_t BgL_auxz00_9058;
BgL_auxz00_9058 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)28966)), BGl_string4975z00zz__unicodez00, BgL_strz00_68, 
(int)(BgL_l3846z00_6350), 
(int)(BgL_i3845z00_6349)); 
FAILURE(BgL_auxz00_9058,BFALSE,BFALSE);} } } 
BgL_nz00_3765 = 
(BgL_tmpz00_9052); } 
if(
(BgL_nz00_3765>=((long)128)))
{ /* Llib/unicode.scm 682 */
BgL_test5456z00_9051 = 
(BgL_nz00_3765<=((long)191))
; }  else 
{ /* Llib/unicode.scm 682 */
BgL_test5456z00_9051 = ((bool_t)0)
; } } 
if(BgL_test5456z00_9051)
{ /* Llib/unicode.scm 681 */
long BgL_nz00_3778;
{ /* Llib/unicode.scm 681 */
unsigned char BgL_tmpz00_9068;
{ /* Llib/unicode.scm 725 */
long BgL_i3849z00_6353;
BgL_i3849z00_6353 = 
(BgL_rz00_1432+((long)3)); 
{ /* Llib/unicode.scm 725 */
long BgL_l3850z00_6354;
BgL_l3850z00_6354 = 
STRING_LENGTH(BgL_strz00_68); 
if(
BOUND_CHECK(BgL_i3849z00_6353, BgL_l3850z00_6354))
{ /* Llib/unicode.scm 725 */
BgL_tmpz00_9068 = 
STRING_REF(BgL_strz00_68, BgL_i3849z00_6353)
; }  else 
{ 
obj_t BgL_auxz00_9074;
BgL_auxz00_9074 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)29025)), BGl_string4975z00zz__unicodez00, BgL_strz00_68, 
(int)(BgL_l3850z00_6354), 
(int)(BgL_i3849z00_6353)); 
FAILURE(BgL_auxz00_9074,BFALSE,BFALSE);} } } 
BgL_nz00_3778 = 
(BgL_tmpz00_9068); } 
if(
(BgL_nz00_3778>=((long)128)))
{ /* Llib/unicode.scm 682 */
BgL_test5451z00_9030 = 
(BgL_nz00_3778<=((long)191))
; }  else 
{ /* Llib/unicode.scm 682 */
BgL_test5451z00_9030 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 724 */
BgL_test5451z00_9030 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 723 */
BgL_test5451z00_9030 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 722 */
BgL_test5451z00_9030 = ((bool_t)0)
; } 
if(BgL_test5451z00_9030)
{ 
long BgL_rz00_9084;
BgL_rz00_9084 = 
(BgL_rz00_1432+((long)4)); 
BgL_rz00_1432 = BgL_rz00_9084; 
goto BgL_zc3z04anonymousza31391ze3z87_1433;}  else 
{ /* Llib/unicode.scm 722 */
return ((bool_t)0);} }  else 
{ /* Llib/unicode.scm 727 */
bool_t BgL_test5461z00_9086;
if(
(BgL_nz00_1436==((long)244)))
{ /* Llib/unicode.scm 727 */
BgL_test5461z00_9086 = ((bool_t)1)
; }  else 
{ /* Llib/unicode.scm 728 */
bool_t BgL_test5463z00_9089;
{ /* Llib/unicode.scm 728 */
bool_t BgL__ortest_1047z00_1682;
BgL__ortest_1047z00_1682 = 
(BgL_nz00_1436==((long)248)); 
if(BgL__ortest_1047z00_1682)
{ /* Llib/unicode.scm 728 */
BgL_test5463z00_9089 = BgL__ortest_1047z00_1682
; }  else 
{ /* Llib/unicode.scm 728 */
BgL_test5463z00_9089 = 
(BgL_nz00_1436==((long)252))
; } } 
if(BgL_test5463z00_9089)
{ /* Llib/unicode.scm 728 */
if(BgL_strictz00_69)
{ /* Llib/unicode.scm 728 */
BgL_test5461z00_9086 = ((bool_t)0)
; }  else 
{ /* Llib/unicode.scm 728 */
BgL_test5461z00_9086 = ((bool_t)1)
; } }  else 
{ /* Llib/unicode.scm 728 */
BgL_test5461z00_9086 = ((bool_t)0)
; } } 
if(BgL_test5461z00_9086)
{ /* Llib/unicode.scm 730 */
bool_t BgL_test5466z00_9094;
if(
(BgL_rz00_1432<
(BgL_lenz00_1430-((long)3))))
{ /* Llib/unicode.scm 731 */
bool_t BgL_test5468z00_9098;
{ /* Llib/unicode.scm 681 */
long BgL_nz00_3804;
{ /* Llib/unicode.scm 681 */
unsigned char BgL_tmpz00_9099;
{ /* Llib/unicode.scm 731 */
long BgL_i3853z00_6357;
BgL_i3853z00_6357 = 
(BgL_rz00_1432+((long)1)); 
{ /* Llib/unicode.scm 731 */
long BgL_l3854z00_6358;
BgL_l3854z00_6358 = 
STRING_LENGTH(BgL_strz00_68); 
if(
BOUND_CHECK(BgL_i3853z00_6357, BgL_l3854z00_6358))
{ /* Llib/unicode.scm 731 */
BgL_tmpz00_9099 = 
STRING_REF(BgL_strz00_68, BgL_i3853z00_6357)
; }  else 
{ 
obj_t BgL_auxz00_9105;
BgL_auxz00_9105 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)29262)), BGl_string4975z00zz__unicodez00, BgL_strz00_68, 
(int)(BgL_l3854z00_6358), 
(int)(BgL_i3853z00_6357)); 
FAILURE(BgL_auxz00_9105,BFALSE,BFALSE);} } } 
BgL_nz00_3804 = 
(BgL_tmpz00_9099); } 
if(
(BgL_nz00_3804>=((long)128)))
{ /* Llib/unicode.scm 682 */
BgL_test5468z00_9098 = 
(BgL_nz00_3804<=((long)191))
; }  else 
{ /* Llib/unicode.scm 682 */
BgL_test5468z00_9098 = ((bool_t)0)
; } } 
if(BgL_test5468z00_9098)
{ /* Llib/unicode.scm 732 */
bool_t BgL_test5471z00_9115;
{ /* Llib/unicode.scm 681 */
long BgL_nz00_3817;
{ /* Llib/unicode.scm 681 */
unsigned char BgL_tmpz00_9116;
{ /* Llib/unicode.scm 732 */
long BgL_i3857z00_6361;
BgL_i3857z00_6361 = 
(BgL_rz00_1432+((long)2)); 
{ /* Llib/unicode.scm 732 */
long BgL_l3858z00_6362;
BgL_l3858z00_6362 = 
STRING_LENGTH(BgL_strz00_68); 
if(
BOUND_CHECK(BgL_i3857z00_6361, BgL_l3858z00_6362))
{ /* Llib/unicode.scm 732 */
BgL_tmpz00_9116 = 
STRING_REF(BgL_strz00_68, BgL_i3857z00_6361)
; }  else 
{ 
obj_t BgL_auxz00_9122;
BgL_auxz00_9122 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)29321)), BGl_string4975z00zz__unicodez00, BgL_strz00_68, 
(int)(BgL_l3858z00_6362), 
(int)(BgL_i3857z00_6361)); 
FAILURE(BgL_auxz00_9122,BFALSE,BFALSE);} } } 
BgL_nz00_3817 = 
(BgL_tmpz00_9116); } 
if(
(BgL_nz00_3817>=((long)128)))
{ /* Llib/unicode.scm 682 */
BgL_test5471z00_9115 = 
(BgL_nz00_3817<=((long)191))
; }  else 
{ /* Llib/unicode.scm 682 */
BgL_test5471z00_9115 = ((bool_t)0)
; } } 
if(BgL_test5471z00_9115)
{ /* Llib/unicode.scm 681 */
long BgL_nz00_3830;
{ /* Llib/unicode.scm 681 */
unsigned char BgL_tmpz00_9132;
{ /* Llib/unicode.scm 733 */
long BgL_i3861z00_6365;
BgL_i3861z00_6365 = 
(BgL_rz00_1432+((long)3)); 
{ /* Llib/unicode.scm 733 */
long BgL_l3862z00_6366;
BgL_l3862z00_6366 = 
STRING_LENGTH(BgL_strz00_68); 
if(
BOUND_CHECK(BgL_i3861z00_6365, BgL_l3862z00_6366))
{ /* Llib/unicode.scm 733 */
BgL_tmpz00_9132 = 
STRING_REF(BgL_strz00_68, BgL_i3861z00_6365)
; }  else 
{ 
obj_t BgL_auxz00_9138;
BgL_auxz00_9138 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)29380)), BGl_string4975z00zz__unicodez00, BgL_strz00_68, 
(int)(BgL_l3862z00_6366), 
(int)(BgL_i3861z00_6365)); 
FAILURE(BgL_auxz00_9138,BFALSE,BFALSE);} } } 
BgL_nz00_3830 = 
(BgL_tmpz00_9132); } 
if(
(BgL_nz00_3830>=((long)128)))
{ /* Llib/unicode.scm 682 */
BgL_test5466z00_9094 = 
(BgL_nz00_3830<=((long)191))
; }  else 
{ /* Llib/unicode.scm 682 */
BgL_test5466z00_9094 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 732 */
BgL_test5466z00_9094 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 731 */
BgL_test5466z00_9094 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 730 */
BgL_test5466z00_9094 = ((bool_t)0)
; } 
if(BgL_test5466z00_9094)
{ 
long BgL_rz00_9148;
BgL_rz00_9148 = 
(BgL_rz00_1432+((long)4)); 
BgL_rz00_1432 = BgL_rz00_9148; 
goto BgL_zc3z04anonymousza31391ze3z87_1433;}  else 
{ /* Llib/unicode.scm 730 */
return ((bool_t)0);} }  else 
{ /* Llib/unicode.scm 727 */
if(
(BgL_nz00_1436<=((long)247)))
{ /* Llib/unicode.scm 737 */
bool_t BgL_test5477z00_9152;
if(
(BgL_rz00_1432<
(BgL_lenz00_1430-((long)3))))
{ /* Llib/unicode.scm 738 */
bool_t BgL_test5479z00_9156;
{ /* Llib/unicode.scm 681 */
long BgL_nz00_3852;
{ /* Llib/unicode.scm 681 */
unsigned char BgL_tmpz00_9157;
{ /* Llib/unicode.scm 738 */
long BgL_i3865z00_6369;
BgL_i3865z00_6369 = 
(BgL_rz00_1432+((long)1)); 
{ /* Llib/unicode.scm 738 */
long BgL_l3866z00_6370;
BgL_l3866z00_6370 = 
STRING_LENGTH(BgL_strz00_68); 
if(
BOUND_CHECK(BgL_i3865z00_6369, BgL_l3866z00_6370))
{ /* Llib/unicode.scm 738 */
BgL_tmpz00_9157 = 
STRING_REF(BgL_strz00_68, BgL_i3865z00_6369)
; }  else 
{ 
obj_t BgL_auxz00_9163;
BgL_auxz00_9163 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)29551)), BGl_string4975z00zz__unicodez00, BgL_strz00_68, 
(int)(BgL_l3866z00_6370), 
(int)(BgL_i3865z00_6369)); 
FAILURE(BgL_auxz00_9163,BFALSE,BFALSE);} } } 
BgL_nz00_3852 = 
(BgL_tmpz00_9157); } 
if(
(BgL_nz00_3852>=((long)128)))
{ /* Llib/unicode.scm 682 */
BgL_test5479z00_9156 = 
(BgL_nz00_3852<=((long)191))
; }  else 
{ /* Llib/unicode.scm 682 */
BgL_test5479z00_9156 = ((bool_t)0)
; } } 
if(BgL_test5479z00_9156)
{ /* Llib/unicode.scm 739 */
bool_t BgL_test5482z00_9173;
{ /* Llib/unicode.scm 681 */
long BgL_nz00_3865;
{ /* Llib/unicode.scm 681 */
unsigned char BgL_tmpz00_9174;
{ /* Llib/unicode.scm 739 */
long BgL_i3869z00_6373;
BgL_i3869z00_6373 = 
(BgL_rz00_1432+((long)2)); 
{ /* Llib/unicode.scm 739 */
long BgL_l3870z00_6374;
BgL_l3870z00_6374 = 
STRING_LENGTH(BgL_strz00_68); 
if(
BOUND_CHECK(BgL_i3869z00_6373, BgL_l3870z00_6374))
{ /* Llib/unicode.scm 739 */
BgL_tmpz00_9174 = 
STRING_REF(BgL_strz00_68, BgL_i3869z00_6373)
; }  else 
{ 
obj_t BgL_auxz00_9180;
BgL_auxz00_9180 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)29610)), BGl_string4975z00zz__unicodez00, BgL_strz00_68, 
(int)(BgL_l3870z00_6374), 
(int)(BgL_i3869z00_6373)); 
FAILURE(BgL_auxz00_9180,BFALSE,BFALSE);} } } 
BgL_nz00_3865 = 
(BgL_tmpz00_9174); } 
if(
(BgL_nz00_3865>=((long)128)))
{ /* Llib/unicode.scm 682 */
BgL_test5482z00_9173 = 
(BgL_nz00_3865<=((long)191))
; }  else 
{ /* Llib/unicode.scm 682 */
BgL_test5482z00_9173 = ((bool_t)0)
; } } 
if(BgL_test5482z00_9173)
{ /* Llib/unicode.scm 681 */
long BgL_nz00_3878;
{ /* Llib/unicode.scm 681 */
unsigned char BgL_tmpz00_9190;
{ /* Llib/unicode.scm 740 */
long BgL_i3873z00_6377;
BgL_i3873z00_6377 = 
(BgL_rz00_1432+((long)3)); 
{ /* Llib/unicode.scm 740 */
long BgL_l3874z00_6378;
BgL_l3874z00_6378 = 
STRING_LENGTH(BgL_strz00_68); 
if(
BOUND_CHECK(BgL_i3873z00_6377, BgL_l3874z00_6378))
{ /* Llib/unicode.scm 740 */
BgL_tmpz00_9190 = 
STRING_REF(BgL_strz00_68, BgL_i3873z00_6377)
; }  else 
{ 
obj_t BgL_auxz00_9196;
BgL_auxz00_9196 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)29669)), BGl_string4975z00zz__unicodez00, BgL_strz00_68, 
(int)(BgL_l3874z00_6378), 
(int)(BgL_i3873z00_6377)); 
FAILURE(BgL_auxz00_9196,BFALSE,BFALSE);} } } 
BgL_nz00_3878 = 
(BgL_tmpz00_9190); } 
if(
(BgL_nz00_3878>=((long)128)))
{ /* Llib/unicode.scm 682 */
BgL_test5477z00_9152 = 
(BgL_nz00_3878<=((long)191))
; }  else 
{ /* Llib/unicode.scm 682 */
BgL_test5477z00_9152 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 739 */
BgL_test5477z00_9152 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 738 */
BgL_test5477z00_9152 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 737 */
BgL_test5477z00_9152 = ((bool_t)0)
; } 
if(BgL_test5477z00_9152)
{ 
long BgL_rz00_9206;
BgL_rz00_9206 = 
(BgL_rz00_1432+((long)4)); 
BgL_rz00_1432 = BgL_rz00_9206; 
goto BgL_zc3z04anonymousza31391ze3z87_1433;}  else 
{ /* Llib/unicode.scm 737 */
return ((bool_t)0);} }  else 
{ /* Llib/unicode.scm 735 */
if(
(BgL_nz00_1436<=((long)251)))
{ /* Llib/unicode.scm 743 */
bool_t BgL_test5488z00_9210;
if(
(BgL_rz00_1432<
(BgL_lenz00_1430-((long)4))))
{ /* Llib/unicode.scm 744 */
bool_t BgL_test5490z00_9214;
{ /* Llib/unicode.scm 681 */
long BgL_nz00_3900;
{ /* Llib/unicode.scm 681 */
unsigned char BgL_tmpz00_9215;
{ /* Llib/unicode.scm 744 */
long BgL_i3877z00_6381;
BgL_i3877z00_6381 = 
(BgL_rz00_1432+((long)1)); 
{ /* Llib/unicode.scm 744 */
long BgL_l3878z00_6382;
BgL_l3878z00_6382 = 
STRING_LENGTH(BgL_strz00_68); 
if(
BOUND_CHECK(BgL_i3877z00_6381, BgL_l3878z00_6382))
{ /* Llib/unicode.scm 744 */
BgL_tmpz00_9215 = 
STRING_REF(BgL_strz00_68, BgL_i3877z00_6381)
; }  else 
{ 
obj_t BgL_auxz00_9221;
BgL_auxz00_9221 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)29814)), BGl_string4975z00zz__unicodez00, BgL_strz00_68, 
(int)(BgL_l3878z00_6382), 
(int)(BgL_i3877z00_6381)); 
FAILURE(BgL_auxz00_9221,BFALSE,BFALSE);} } } 
BgL_nz00_3900 = 
(BgL_tmpz00_9215); } 
if(
(BgL_nz00_3900>=((long)128)))
{ /* Llib/unicode.scm 682 */
BgL_test5490z00_9214 = 
(BgL_nz00_3900<=((long)191))
; }  else 
{ /* Llib/unicode.scm 682 */
BgL_test5490z00_9214 = ((bool_t)0)
; } } 
if(BgL_test5490z00_9214)
{ /* Llib/unicode.scm 745 */
bool_t BgL_test5493z00_9231;
{ /* Llib/unicode.scm 681 */
long BgL_nz00_3913;
{ /* Llib/unicode.scm 681 */
unsigned char BgL_tmpz00_9232;
{ /* Llib/unicode.scm 745 */
long BgL_i3881z00_6385;
BgL_i3881z00_6385 = 
(BgL_rz00_1432+((long)2)); 
{ /* Llib/unicode.scm 745 */
long BgL_l3882z00_6386;
BgL_l3882z00_6386 = 
STRING_LENGTH(BgL_strz00_68); 
if(
BOUND_CHECK(BgL_i3881z00_6385, BgL_l3882z00_6386))
{ /* Llib/unicode.scm 745 */
BgL_tmpz00_9232 = 
STRING_REF(BgL_strz00_68, BgL_i3881z00_6385)
; }  else 
{ 
obj_t BgL_auxz00_9238;
BgL_auxz00_9238 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)29873)), BGl_string4975z00zz__unicodez00, BgL_strz00_68, 
(int)(BgL_l3882z00_6386), 
(int)(BgL_i3881z00_6385)); 
FAILURE(BgL_auxz00_9238,BFALSE,BFALSE);} } } 
BgL_nz00_3913 = 
(BgL_tmpz00_9232); } 
if(
(BgL_nz00_3913>=((long)128)))
{ /* Llib/unicode.scm 682 */
BgL_test5493z00_9231 = 
(BgL_nz00_3913<=((long)191))
; }  else 
{ /* Llib/unicode.scm 682 */
BgL_test5493z00_9231 = ((bool_t)0)
; } } 
if(BgL_test5493z00_9231)
{ /* Llib/unicode.scm 746 */
bool_t BgL_test5496z00_9248;
{ /* Llib/unicode.scm 681 */
long BgL_nz00_3926;
{ /* Llib/unicode.scm 681 */
unsigned char BgL_tmpz00_9249;
{ /* Llib/unicode.scm 746 */
long BgL_i3885z00_6389;
BgL_i3885z00_6389 = 
(BgL_rz00_1432+((long)3)); 
{ /* Llib/unicode.scm 746 */
long BgL_l3886z00_6390;
BgL_l3886z00_6390 = 
STRING_LENGTH(BgL_strz00_68); 
if(
BOUND_CHECK(BgL_i3885z00_6389, BgL_l3886z00_6390))
{ /* Llib/unicode.scm 746 */
BgL_tmpz00_9249 = 
STRING_REF(BgL_strz00_68, BgL_i3885z00_6389)
; }  else 
{ 
obj_t BgL_auxz00_9255;
BgL_auxz00_9255 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)29932)), BGl_string4975z00zz__unicodez00, BgL_strz00_68, 
(int)(BgL_l3886z00_6390), 
(int)(BgL_i3885z00_6389)); 
FAILURE(BgL_auxz00_9255,BFALSE,BFALSE);} } } 
BgL_nz00_3926 = 
(BgL_tmpz00_9249); } 
if(
(BgL_nz00_3926>=((long)128)))
{ /* Llib/unicode.scm 682 */
BgL_test5496z00_9248 = 
(BgL_nz00_3926<=((long)191))
; }  else 
{ /* Llib/unicode.scm 682 */
BgL_test5496z00_9248 = ((bool_t)0)
; } } 
if(BgL_test5496z00_9248)
{ /* Llib/unicode.scm 681 */
long BgL_nz00_3939;
{ /* Llib/unicode.scm 681 */
unsigned char BgL_tmpz00_9265;
{ /* Llib/unicode.scm 747 */
long BgL_i3889z00_6393;
BgL_i3889z00_6393 = 
(BgL_rz00_1432+((long)4)); 
{ /* Llib/unicode.scm 747 */
long BgL_l3890z00_6394;
BgL_l3890z00_6394 = 
STRING_LENGTH(BgL_strz00_68); 
if(
BOUND_CHECK(BgL_i3889z00_6393, BgL_l3890z00_6394))
{ /* Llib/unicode.scm 747 */
BgL_tmpz00_9265 = 
STRING_REF(BgL_strz00_68, BgL_i3889z00_6393)
; }  else 
{ 
obj_t BgL_auxz00_9271;
BgL_auxz00_9271 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)29991)), BGl_string4975z00zz__unicodez00, BgL_strz00_68, 
(int)(BgL_l3890z00_6394), 
(int)(BgL_i3889z00_6393)); 
FAILURE(BgL_auxz00_9271,BFALSE,BFALSE);} } } 
BgL_nz00_3939 = 
(BgL_tmpz00_9265); } 
if(
(BgL_nz00_3939>=((long)128)))
{ /* Llib/unicode.scm 682 */
BgL_test5488z00_9210 = 
(BgL_nz00_3939<=((long)191))
; }  else 
{ /* Llib/unicode.scm 682 */
BgL_test5488z00_9210 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 746 */
BgL_test5488z00_9210 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 745 */
BgL_test5488z00_9210 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 744 */
BgL_test5488z00_9210 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 743 */
BgL_test5488z00_9210 = ((bool_t)0)
; } 
if(BgL_test5488z00_9210)
{ 
long BgL_rz00_9281;
BgL_rz00_9281 = 
(BgL_rz00_1432+((long)5)); 
BgL_rz00_1432 = BgL_rz00_9281; 
goto BgL_zc3z04anonymousza31391ze3z87_1433;}  else 
{ /* Llib/unicode.scm 743 */
return ((bool_t)0);} }  else 
{ /* Llib/unicode.scm 742 */
if(
(BgL_nz00_1436<=((long)253)))
{ /* Llib/unicode.scm 750 */
bool_t BgL_test5502z00_9285;
if(
(BgL_rz00_1432<
(BgL_lenz00_1430-((long)5))))
{ /* Llib/unicode.scm 751 */
bool_t BgL_test5504z00_9289;
{ /* Llib/unicode.scm 681 */
long BgL_nz00_3961;
{ /* Llib/unicode.scm 681 */
unsigned char BgL_tmpz00_9290;
{ /* Llib/unicode.scm 751 */
long BgL_i3893z00_6397;
BgL_i3893z00_6397 = 
(BgL_rz00_1432+((long)1)); 
{ /* Llib/unicode.scm 751 */
long BgL_l3894z00_6398;
BgL_l3894z00_6398 = 
STRING_LENGTH(BgL_strz00_68); 
if(
BOUND_CHECK(BgL_i3893z00_6397, BgL_l3894z00_6398))
{ /* Llib/unicode.scm 751 */
BgL_tmpz00_9290 = 
STRING_REF(BgL_strz00_68, BgL_i3893z00_6397)
; }  else 
{ 
obj_t BgL_auxz00_9296;
BgL_auxz00_9296 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)30136)), BGl_string4975z00zz__unicodez00, BgL_strz00_68, 
(int)(BgL_l3894z00_6398), 
(int)(BgL_i3893z00_6397)); 
FAILURE(BgL_auxz00_9296,BFALSE,BFALSE);} } } 
BgL_nz00_3961 = 
(BgL_tmpz00_9290); } 
if(
(BgL_nz00_3961>=((long)128)))
{ /* Llib/unicode.scm 682 */
BgL_test5504z00_9289 = 
(BgL_nz00_3961<=((long)191))
; }  else 
{ /* Llib/unicode.scm 682 */
BgL_test5504z00_9289 = ((bool_t)0)
; } } 
if(BgL_test5504z00_9289)
{ /* Llib/unicode.scm 752 */
bool_t BgL_test5507z00_9306;
{ /* Llib/unicode.scm 681 */
long BgL_nz00_3974;
{ /* Llib/unicode.scm 681 */
unsigned char BgL_tmpz00_9307;
{ /* Llib/unicode.scm 752 */
long BgL_i3897z00_6401;
BgL_i3897z00_6401 = 
(BgL_rz00_1432+((long)2)); 
{ /* Llib/unicode.scm 752 */
long BgL_l3898z00_6402;
BgL_l3898z00_6402 = 
STRING_LENGTH(BgL_strz00_68); 
if(
BOUND_CHECK(BgL_i3897z00_6401, BgL_l3898z00_6402))
{ /* Llib/unicode.scm 752 */
BgL_tmpz00_9307 = 
STRING_REF(BgL_strz00_68, BgL_i3897z00_6401)
; }  else 
{ 
obj_t BgL_auxz00_9313;
BgL_auxz00_9313 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)30195)), BGl_string4975z00zz__unicodez00, BgL_strz00_68, 
(int)(BgL_l3898z00_6402), 
(int)(BgL_i3897z00_6401)); 
FAILURE(BgL_auxz00_9313,BFALSE,BFALSE);} } } 
BgL_nz00_3974 = 
(BgL_tmpz00_9307); } 
if(
(BgL_nz00_3974>=((long)128)))
{ /* Llib/unicode.scm 682 */
BgL_test5507z00_9306 = 
(BgL_nz00_3974<=((long)191))
; }  else 
{ /* Llib/unicode.scm 682 */
BgL_test5507z00_9306 = ((bool_t)0)
; } } 
if(BgL_test5507z00_9306)
{ /* Llib/unicode.scm 753 */
bool_t BgL_test5510z00_9323;
{ /* Llib/unicode.scm 681 */
long BgL_nz00_3987;
{ /* Llib/unicode.scm 681 */
unsigned char BgL_tmpz00_9324;
{ /* Llib/unicode.scm 753 */
long BgL_i3901z00_6405;
BgL_i3901z00_6405 = 
(BgL_rz00_1432+((long)3)); 
{ /* Llib/unicode.scm 753 */
long BgL_l3902z00_6406;
BgL_l3902z00_6406 = 
STRING_LENGTH(BgL_strz00_68); 
if(
BOUND_CHECK(BgL_i3901z00_6405, BgL_l3902z00_6406))
{ /* Llib/unicode.scm 753 */
BgL_tmpz00_9324 = 
STRING_REF(BgL_strz00_68, BgL_i3901z00_6405)
; }  else 
{ 
obj_t BgL_auxz00_9330;
BgL_auxz00_9330 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)30254)), BGl_string4975z00zz__unicodez00, BgL_strz00_68, 
(int)(BgL_l3902z00_6406), 
(int)(BgL_i3901z00_6405)); 
FAILURE(BgL_auxz00_9330,BFALSE,BFALSE);} } } 
BgL_nz00_3987 = 
(BgL_tmpz00_9324); } 
if(
(BgL_nz00_3987>=((long)128)))
{ /* Llib/unicode.scm 682 */
BgL_test5510z00_9323 = 
(BgL_nz00_3987<=((long)191))
; }  else 
{ /* Llib/unicode.scm 682 */
BgL_test5510z00_9323 = ((bool_t)0)
; } } 
if(BgL_test5510z00_9323)
{ /* Llib/unicode.scm 754 */
bool_t BgL_test5513z00_9340;
{ /* Llib/unicode.scm 681 */
long BgL_nz00_4000;
{ /* Llib/unicode.scm 681 */
unsigned char BgL_tmpz00_9341;
{ /* Llib/unicode.scm 754 */
long BgL_i3905z00_6409;
BgL_i3905z00_6409 = 
(BgL_rz00_1432+((long)4)); 
{ /* Llib/unicode.scm 754 */
long BgL_l3906z00_6410;
BgL_l3906z00_6410 = 
STRING_LENGTH(BgL_strz00_68); 
if(
BOUND_CHECK(BgL_i3905z00_6409, BgL_l3906z00_6410))
{ /* Llib/unicode.scm 754 */
BgL_tmpz00_9341 = 
STRING_REF(BgL_strz00_68, BgL_i3905z00_6409)
; }  else 
{ 
obj_t BgL_auxz00_9347;
BgL_auxz00_9347 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)30313)), BGl_string4975z00zz__unicodez00, BgL_strz00_68, 
(int)(BgL_l3906z00_6410), 
(int)(BgL_i3905z00_6409)); 
FAILURE(BgL_auxz00_9347,BFALSE,BFALSE);} } } 
BgL_nz00_4000 = 
(BgL_tmpz00_9341); } 
if(
(BgL_nz00_4000>=((long)128)))
{ /* Llib/unicode.scm 682 */
BgL_test5513z00_9340 = 
(BgL_nz00_4000<=((long)191))
; }  else 
{ /* Llib/unicode.scm 682 */
BgL_test5513z00_9340 = ((bool_t)0)
; } } 
if(BgL_test5513z00_9340)
{ /* Llib/unicode.scm 681 */
long BgL_nz00_4013;
{ /* Llib/unicode.scm 681 */
unsigned char BgL_tmpz00_9357;
{ /* Llib/unicode.scm 755 */
long BgL_i3909z00_6413;
BgL_i3909z00_6413 = 
(BgL_rz00_1432+((long)5)); 
{ /* Llib/unicode.scm 755 */
long BgL_l3910z00_6414;
BgL_l3910z00_6414 = 
STRING_LENGTH(BgL_strz00_68); 
if(
BOUND_CHECK(BgL_i3909z00_6413, BgL_l3910z00_6414))
{ /* Llib/unicode.scm 755 */
BgL_tmpz00_9357 = 
STRING_REF(BgL_strz00_68, BgL_i3909z00_6413)
; }  else 
{ 
obj_t BgL_auxz00_9363;
BgL_auxz00_9363 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)30372)), BGl_string4975z00zz__unicodez00, BgL_strz00_68, 
(int)(BgL_l3910z00_6414), 
(int)(BgL_i3909z00_6413)); 
FAILURE(BgL_auxz00_9363,BFALSE,BFALSE);} } } 
BgL_nz00_4013 = 
(BgL_tmpz00_9357); } 
if(
(BgL_nz00_4013>=((long)128)))
{ /* Llib/unicode.scm 682 */
BgL_test5502z00_9285 = 
(BgL_nz00_4013<=((long)191))
; }  else 
{ /* Llib/unicode.scm 682 */
BgL_test5502z00_9285 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 754 */
BgL_test5502z00_9285 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 753 */
BgL_test5502z00_9285 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 752 */
BgL_test5502z00_9285 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 751 */
BgL_test5502z00_9285 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 750 */
BgL_test5502z00_9285 = ((bool_t)0)
; } 
if(BgL_test5502z00_9285)
{ 
long BgL_rz00_9373;
BgL_rz00_9373 = 
(BgL_rz00_1432+((long)6)); 
BgL_rz00_1432 = BgL_rz00_9373; 
goto BgL_zc3z04anonymousza31391ze3z87_1433;}  else 
{ /* Llib/unicode.scm 750 */
return ((bool_t)0);} }  else 
{ /* Llib/unicode.scm 749 */
return ((bool_t)0);} } } } } } } } } } } } } } } } 

}



/* _utf8-normalize-utf16 */
obj_t BGl__utf8zd2normaliza7ezd2utf16za7zz__unicodez00(obj_t BgL_env1127z00_77, obj_t BgL_opt1126z00_76)
{
{ /* Llib/unicode.scm 767 */
{ /* Llib/unicode.scm 767 */
obj_t BgL_strz00_1692;
BgL_strz00_1692 = 
VECTOR_REF(BgL_opt1126z00_76,((long)0)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1126z00_76)) { case ((long)1) : 

{ /* Llib/unicode.scm 767 */
long BgL_endz00_1698;
{ /* Llib/unicode.scm 767 */
obj_t BgL_stringz00_4023;
if(
STRINGP(BgL_strz00_1692))
{ /* Llib/unicode.scm 767 */
BgL_stringz00_4023 = BgL_strz00_1692; }  else 
{ 
obj_t BgL_auxz00_9378;
BgL_auxz00_9378 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)31079)), BGl_string4991z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_strz00_1692); 
FAILURE(BgL_auxz00_9378,BFALSE,BFALSE);} 
BgL_endz00_1698 = 
STRING_LENGTH(BgL_stringz00_4023); } 
{ /* Llib/unicode.scm 767 */

{ /* Llib/unicode.scm 767 */
obj_t BgL_auxz00_9383;
if(
STRINGP(BgL_strz00_1692))
{ /* Llib/unicode.scm 767 */
BgL_auxz00_9383 = BgL_strz00_1692
; }  else 
{ 
obj_t BgL_auxz00_9386;
BgL_auxz00_9386 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)30985)), BGl_string4991z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_strz00_1692); 
FAILURE(BgL_auxz00_9386,BFALSE,BFALSE);} 
return 
BGl_utf8zd2normaliza7ezd2utf16za7zz__unicodez00(BgL_auxz00_9383, ((bool_t)0), ((long)0), BgL_endz00_1698);} } } break;case ((long)2) : 

{ /* Llib/unicode.scm 767 */
obj_t BgL_strictz00_1699;
BgL_strictz00_1699 = 
VECTOR_REF(BgL_opt1126z00_76,((long)1)); 
{ /* Llib/unicode.scm 767 */
long BgL_endz00_1701;
{ /* Llib/unicode.scm 767 */
obj_t BgL_stringz00_4025;
if(
STRINGP(BgL_strz00_1692))
{ /* Llib/unicode.scm 767 */
BgL_stringz00_4025 = BgL_strz00_1692; }  else 
{ 
obj_t BgL_auxz00_9394;
BgL_auxz00_9394 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)31079)), BGl_string4991z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_strz00_1692); 
FAILURE(BgL_auxz00_9394,BFALSE,BFALSE);} 
BgL_endz00_1701 = 
STRING_LENGTH(BgL_stringz00_4025); } 
{ /* Llib/unicode.scm 767 */

{ /* Llib/unicode.scm 767 */
obj_t BgL_auxz00_9399;
if(
STRINGP(BgL_strz00_1692))
{ /* Llib/unicode.scm 767 */
BgL_auxz00_9399 = BgL_strz00_1692
; }  else 
{ 
obj_t BgL_auxz00_9402;
BgL_auxz00_9402 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)30985)), BGl_string4991z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_strz00_1692); 
FAILURE(BgL_auxz00_9402,BFALSE,BFALSE);} 
return 
BGl_utf8zd2normaliza7ezd2utf16za7zz__unicodez00(BgL_auxz00_9399, 
CBOOL(BgL_strictz00_1699), ((long)0), BgL_endz00_1701);} } } } break;case ((long)3) : 

{ /* Llib/unicode.scm 767 */
obj_t BgL_strictz00_1702;
BgL_strictz00_1702 = 
VECTOR_REF(BgL_opt1126z00_76,((long)1)); 
{ /* Llib/unicode.scm 767 */
obj_t BgL_startz00_1703;
BgL_startz00_1703 = 
VECTOR_REF(BgL_opt1126z00_76,((long)2)); 
{ /* Llib/unicode.scm 767 */
long BgL_endz00_1704;
{ /* Llib/unicode.scm 767 */
obj_t BgL_stringz00_4027;
if(
STRINGP(BgL_strz00_1692))
{ /* Llib/unicode.scm 767 */
BgL_stringz00_4027 = BgL_strz00_1692; }  else 
{ 
obj_t BgL_auxz00_9412;
BgL_auxz00_9412 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)31079)), BGl_string4991z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_strz00_1692); 
FAILURE(BgL_auxz00_9412,BFALSE,BFALSE);} 
BgL_endz00_1704 = 
STRING_LENGTH(BgL_stringz00_4027); } 
{ /* Llib/unicode.scm 767 */

{ /* Llib/unicode.scm 767 */
long BgL_auxz00_9424;obj_t BgL_auxz00_9417;
{ /* Llib/unicode.scm 767 */
obj_t BgL_tmpz00_9426;
if(
INTEGERP(BgL_startz00_1703))
{ /* Llib/unicode.scm 767 */
BgL_tmpz00_9426 = BgL_startz00_1703
; }  else 
{ 
obj_t BgL_auxz00_9429;
BgL_auxz00_9429 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)30985)), BGl_string4991z00zz__unicodez00, BGl_string4927z00zz__unicodez00, BgL_startz00_1703); 
FAILURE(BgL_auxz00_9429,BFALSE,BFALSE);} 
BgL_auxz00_9424 = 
(long)CINT(BgL_tmpz00_9426); } 
if(
STRINGP(BgL_strz00_1692))
{ /* Llib/unicode.scm 767 */
BgL_auxz00_9417 = BgL_strz00_1692
; }  else 
{ 
obj_t BgL_auxz00_9420;
BgL_auxz00_9420 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)30985)), BGl_string4991z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_strz00_1692); 
FAILURE(BgL_auxz00_9420,BFALSE,BFALSE);} 
return 
BGl_utf8zd2normaliza7ezd2utf16za7zz__unicodez00(BgL_auxz00_9417, 
CBOOL(BgL_strictz00_1702), BgL_auxz00_9424, BgL_endz00_1704);} } } } } break;case ((long)4) : 

{ /* Llib/unicode.scm 767 */
obj_t BgL_strictz00_1705;
BgL_strictz00_1705 = 
VECTOR_REF(BgL_opt1126z00_76,((long)1)); 
{ /* Llib/unicode.scm 767 */
obj_t BgL_startz00_1706;
BgL_startz00_1706 = 
VECTOR_REF(BgL_opt1126z00_76,((long)2)); 
{ /* Llib/unicode.scm 767 */
obj_t BgL_endz00_1707;
BgL_endz00_1707 = 
VECTOR_REF(BgL_opt1126z00_76,((long)3)); 
{ /* Llib/unicode.scm 767 */

{ /* Llib/unicode.scm 767 */
long BgL_auxz00_9455;long BgL_auxz00_9445;obj_t BgL_auxz00_9438;
{ /* Llib/unicode.scm 767 */
obj_t BgL_tmpz00_9456;
if(
INTEGERP(BgL_endz00_1707))
{ /* Llib/unicode.scm 767 */
BgL_tmpz00_9456 = BgL_endz00_1707
; }  else 
{ 
obj_t BgL_auxz00_9459;
BgL_auxz00_9459 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)30985)), BGl_string4991z00zz__unicodez00, BGl_string4927z00zz__unicodez00, BgL_endz00_1707); 
FAILURE(BgL_auxz00_9459,BFALSE,BFALSE);} 
BgL_auxz00_9455 = 
(long)CINT(BgL_tmpz00_9456); } 
{ /* Llib/unicode.scm 767 */
obj_t BgL_tmpz00_9447;
if(
INTEGERP(BgL_startz00_1706))
{ /* Llib/unicode.scm 767 */
BgL_tmpz00_9447 = BgL_startz00_1706
; }  else 
{ 
obj_t BgL_auxz00_9450;
BgL_auxz00_9450 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)30985)), BGl_string4991z00zz__unicodez00, BGl_string4927z00zz__unicodez00, BgL_startz00_1706); 
FAILURE(BgL_auxz00_9450,BFALSE,BFALSE);} 
BgL_auxz00_9445 = 
(long)CINT(BgL_tmpz00_9447); } 
if(
STRINGP(BgL_strz00_1692))
{ /* Llib/unicode.scm 767 */
BgL_auxz00_9438 = BgL_strz00_1692
; }  else 
{ 
obj_t BgL_auxz00_9441;
BgL_auxz00_9441 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)30985)), BGl_string4991z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_strz00_1692); 
FAILURE(BgL_auxz00_9441,BFALSE,BFALSE);} 
return 
BGl_utf8zd2normaliza7ezd2utf16za7zz__unicodez00(BgL_auxz00_9438, 
CBOOL(BgL_strictz00_1705), BgL_auxz00_9445, BgL_auxz00_9455);} } } } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol4988z00zz__unicodez00, BGl_string4990z00zz__unicodez00, 
BINT(
VECTOR_LENGTH(BgL_opt1126z00_76)));} } } } 

}



/* utf8-normalize-utf16 */
BGL_EXPORTED_DEF obj_t BGl_utf8zd2normaliza7ezd2utf16za7zz__unicodez00(obj_t BgL_strz00_72, bool_t BgL_strictz00_73, long BgL_startz00_74, long BgL_endz00_75)
{
{ /* Llib/unicode.scm 767 */
{ /* Llib/unicode.scm 780 */
bool_t BgL_test5528z00_9470;
if(
(BgL_endz00_75>
STRING_LENGTH(BgL_strz00_72)))
{ /* Llib/unicode.scm 780 */
BgL_test5528z00_9470 = ((bool_t)1)
; }  else 
{ /* Llib/unicode.scm 780 */
if(
(BgL_startz00_74<((long)0)))
{ /* Llib/unicode.scm 781 */
BgL_test5528z00_9470 = ((bool_t)1)
; }  else 
{ /* Llib/unicode.scm 781 */
BgL_test5528z00_9470 = 
(BgL_startz00_74>BgL_endz00_75)
; } } 
if(BgL_test5528z00_9470)
{ /* Llib/unicode.scm 783 */
obj_t BgL_arg1659z00_1716;
BgL_arg1659z00_1716 = 
MAKE_YOUNG_PAIR(
BINT(BgL_startz00_74), 
BINT(BgL_endz00_75)); 
{ /* Llib/unicode.scm 783 */
obj_t BgL_aux4667z00_7170;
BgL_aux4667z00_7170 = 
BGl_errorz00zz__errorz00(BGl_string4989z00zz__unicodez00, BGl_string4992z00zz__unicodez00, BgL_arg1659z00_1716); 
if(
STRINGP(BgL_aux4667z00_7170))
{ /* Llib/unicode.scm 783 */
return BgL_aux4667z00_7170;}  else 
{ 
obj_t BgL_auxz00_9483;
BgL_auxz00_9483 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)31509)), BGl_string4989z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_aux4667z00_7170); 
FAILURE(BgL_auxz00_9483,BFALSE,BFALSE);} } }  else 
{ /* Llib/unicode.scm 785 */
long BgL_lenz00_1717;
BgL_lenz00_1717 = 
(BgL_endz00_75-BgL_startz00_74); 
{ /* Llib/unicode.scm 785 */
obj_t BgL_resz00_1718;
{ /* Llib/unicode.scm 786 */
long BgL_arg2133z00_2185;
BgL_arg2133z00_2185 = 
(((long)3)*BgL_lenz00_1717); 
{ /* Ieee/string.scm 168 */

BgL_resz00_1718 = 
make_string(BgL_arg2133z00_2185, ((unsigned char)' ')); } } 
{ /* Llib/unicode.scm 786 */

{ 
long BgL_rz00_1720;long BgL_wz00_1721;bool_t BgL_asciiz00_1722;
BgL_rz00_1720 = BgL_startz00_74; 
BgL_wz00_1721 = ((long)0); 
BgL_asciiz00_1722 = ((bool_t)1); 
BgL_zc3z04anonymousza31660ze3z87_1723:
if(
(BgL_rz00_1720==BgL_endz00_75))
{ /* Llib/unicode.scm 791 */
obj_t BgL_val0_1095z00_1725;obj_t BgL_val1_1096z00_1726;
BgL_val0_1095z00_1725 = 
bgl_string_shrink(BgL_resz00_1718, BgL_wz00_1721); 
if(BgL_asciiz00_1722)
{ /* Llib/unicode.scm 791 */
BgL_val1_1096z00_1726 = BGl_symbol4982z00zz__unicodez00; }  else 
{ /* Llib/unicode.scm 791 */
BgL_val1_1096z00_1726 = BGl_symbol4993z00zz__unicodez00; } 
{ /* Llib/unicode.scm 791 */
int BgL_res3115z00_4074;
{ /* Llib/unicode.scm 791 */
int BgL_tmpz00_9494;
BgL_tmpz00_9494 = 
(int)(((long)2)); 
BgL_res3115z00_4074 = 
BGL_MVALUES_NUMBER_SET(BgL_tmpz00_9494); } BgL_res3115z00_4074; } 
{ /* Llib/unicode.scm 791 */
int BgL_tmpz00_9497;
BgL_tmpz00_9497 = 
(int)(((long)1)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_9497, BgL_val1_1096z00_1726); } 
return BgL_val0_1095z00_1725;}  else 
{ /* Llib/unicode.scm 792 */
unsigned char BgL_cz00_1727;
{ /* Llib/unicode.scm 792 */
long BgL_l3914z00_6418;
BgL_l3914z00_6418 = 
STRING_LENGTH(BgL_strz00_72); 
if(
BOUND_CHECK(BgL_rz00_1720, BgL_l3914z00_6418))
{ /* Llib/unicode.scm 792 */
BgL_cz00_1727 = 
STRING_REF(BgL_strz00_72, BgL_rz00_1720); }  else 
{ 
obj_t BgL_auxz00_9504;
BgL_auxz00_9504 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)31814)), BGl_string4975z00zz__unicodez00, BgL_strz00_72, 
(int)(BgL_l3914z00_6418), 
(int)(BgL_rz00_1720)); 
FAILURE(BgL_auxz00_9504,BFALSE,BFALSE);} } 
{ /* Llib/unicode.scm 792 */
long BgL_nz00_1728;
BgL_nz00_1728 = 
(BgL_cz00_1727); 
{ /* Llib/unicode.scm 793 */

if(
(BgL_nz00_1728<=((long)127)))
{ /* Llib/unicode.scm 795 */
{ /* Llib/unicode.scm 797 */
long BgL_l3918z00_6422;
BgL_l3918z00_6422 = 
STRING_LENGTH(BgL_resz00_1718); 
if(
BOUND_CHECK(BgL_wz00_1721, BgL_l3918z00_6422))
{ /* Llib/unicode.scm 797 */
STRING_SET(BgL_resz00_1718, BgL_wz00_1721, BgL_cz00_1727); }  else 
{ 
obj_t BgL_auxz00_9517;
BgL_auxz00_9517 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)31912)), BGl_string4995z00zz__unicodez00, BgL_resz00_1718, 
(int)(BgL_l3918z00_6422), 
(int)(BgL_wz00_1721)); 
FAILURE(BgL_auxz00_9517,BFALSE,BFALSE);} } 
{ 
long BgL_wz00_9525;long BgL_rz00_9523;
BgL_rz00_9523 = 
(BgL_rz00_1720+((long)1)); 
BgL_wz00_9525 = 
(BgL_wz00_1721+((long)1)); 
BgL_wz00_1721 = BgL_wz00_9525; 
BgL_rz00_1720 = BgL_rz00_9523; 
goto BgL_zc3z04anonymousza31660ze3z87_1723;} }  else 
{ /* Llib/unicode.scm 795 */
if(
(BgL_nz00_1728<((long)194)))
{ /* Llib/unicode.scm 799 */
BGl_stringzd2unicodezd2fixz12ze70zf5zz__unicodez00(BgL_resz00_1718, BgL_wz00_1721); 
{ 
bool_t BgL_asciiz00_9534;long BgL_wz00_9532;long BgL_rz00_9530;
BgL_rz00_9530 = 
(BgL_rz00_1720+((long)1)); 
BgL_wz00_9532 = 
(BgL_wz00_1721+((long)3)); 
BgL_asciiz00_9534 = ((bool_t)0); 
BgL_asciiz00_1722 = BgL_asciiz00_9534; 
BgL_wz00_1721 = BgL_wz00_9532; 
BgL_rz00_1720 = BgL_rz00_9530; 
goto BgL_zc3z04anonymousza31660ze3z87_1723;} }  else 
{ /* Llib/unicode.scm 799 */
if(
(BgL_nz00_1728<((long)216)))
{ /* Llib/unicode.scm 805 */
bool_t BgL_test5540z00_9537;
if(
(
(((long)1)+BgL_rz00_1720)<BgL_endz00_75))
{ /* Llib/unicode.scm 770 */
long BgL_nz00_4107;
{ /* Llib/unicode.scm 770 */
unsigned char BgL_tmpz00_9541;
{ /* Llib/unicode.scm 806 */
long BgL_i3921z00_6425;
BgL_i3921z00_6425 = 
(BgL_rz00_1720+((long)1)); 
{ /* Llib/unicode.scm 806 */
long BgL_l3922z00_6426;
BgL_l3922z00_6426 = 
STRING_LENGTH(BgL_strz00_72); 
if(
BOUND_CHECK(BgL_i3921z00_6425, BgL_l3922z00_6426))
{ /* Llib/unicode.scm 806 */
BgL_tmpz00_9541 = 
STRING_REF(BgL_strz00_72, BgL_i3921z00_6425)
; }  else 
{ 
obj_t BgL_auxz00_9547;
BgL_auxz00_9547 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)32177)), BGl_string4975z00zz__unicodez00, BgL_strz00_72, 
(int)(BgL_l3922z00_6426), 
(int)(BgL_i3921z00_6425)); 
FAILURE(BgL_auxz00_9547,BFALSE,BFALSE);} } } 
BgL_nz00_4107 = 
(BgL_tmpz00_9541); } 
if(
(BgL_nz00_4107>=((long)128)))
{ /* Llib/unicode.scm 771 */
BgL_test5540z00_9537 = 
(BgL_nz00_4107<=((long)191))
; }  else 
{ /* Llib/unicode.scm 771 */
BgL_test5540z00_9537 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 805 */
BgL_test5540z00_9537 = ((bool_t)0)
; } 
if(BgL_test5540z00_9537)
{ /* Llib/unicode.scm 805 */
{ /* Llib/unicode.scm 808 */
long BgL_l3926z00_6430;
BgL_l3926z00_6430 = 
STRING_LENGTH(BgL_resz00_1718); 
if(
BOUND_CHECK(BgL_wz00_1721, BgL_l3926z00_6430))
{ /* Llib/unicode.scm 808 */
STRING_SET(BgL_resz00_1718, BgL_wz00_1721, BgL_cz00_1727); }  else 
{ 
obj_t BgL_auxz00_9561;
BgL_auxz00_9561 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)32240)), BGl_string4995z00zz__unicodez00, BgL_resz00_1718, 
(int)(BgL_l3926z00_6430), 
(int)(BgL_wz00_1721)); 
FAILURE(BgL_auxz00_9561,BFALSE,BFALSE);} } 
{ /* Llib/unicode.scm 809 */
long BgL_arg1686z00_1742;unsigned char BgL_arg1687z00_1743;
BgL_arg1686z00_1742 = 
(BgL_wz00_1721+((long)1)); 
{ /* Llib/unicode.scm 809 */
long BgL_i3929z00_6433;
BgL_i3929z00_6433 = 
(BgL_rz00_1720+((long)1)); 
{ /* Llib/unicode.scm 809 */
long BgL_l3930z00_6434;
BgL_l3930z00_6434 = 
STRING_LENGTH(BgL_strz00_72); 
if(
BOUND_CHECK(BgL_i3929z00_6433, BgL_l3930z00_6434))
{ /* Llib/unicode.scm 809 */
BgL_arg1687z00_1743 = 
STRING_REF(BgL_strz00_72, BgL_i3929z00_6433); }  else 
{ 
obj_t BgL_auxz00_9573;
BgL_auxz00_9573 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)32299)), BGl_string4975z00zz__unicodez00, BgL_strz00_72, 
(int)(BgL_l3930z00_6434), 
(int)(BgL_i3929z00_6433)); 
FAILURE(BgL_auxz00_9573,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 809 */
long BgL_l3934z00_6438;
BgL_l3934z00_6438 = 
STRING_LENGTH(BgL_resz00_1718); 
if(
BOUND_CHECK(BgL_arg1686z00_1742, BgL_l3934z00_6438))
{ /* Llib/unicode.scm 809 */
STRING_SET(BgL_resz00_1718, BgL_arg1686z00_1742, BgL_arg1687z00_1743); }  else 
{ 
obj_t BgL_auxz00_9583;
BgL_auxz00_9583 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)32272)), BGl_string4995z00zz__unicodez00, BgL_resz00_1718, 
(int)(BgL_l3934z00_6438), 
(int)(BgL_arg1686z00_1742)); 
FAILURE(BgL_auxz00_9583,BFALSE,BFALSE);} } } 
{ 
bool_t BgL_asciiz00_9593;long BgL_wz00_9591;long BgL_rz00_9589;
BgL_rz00_9589 = 
(BgL_rz00_1720+((long)2)); 
BgL_wz00_9591 = 
(BgL_wz00_1721+((long)2)); 
BgL_asciiz00_9593 = ((bool_t)0); 
BgL_asciiz00_1722 = BgL_asciiz00_9593; 
BgL_wz00_1721 = BgL_wz00_9591; 
BgL_rz00_1720 = BgL_rz00_9589; 
goto BgL_zc3z04anonymousza31660ze3z87_1723;} }  else 
{ /* Llib/unicode.scm 805 */
BGl_stringzd2unicodezd2fixz12ze70zf5zz__unicodez00(BgL_resz00_1718, BgL_wz00_1721); 
{ 
bool_t BgL_asciiz00_9599;long BgL_wz00_9597;long BgL_rz00_9595;
BgL_rz00_9595 = 
(BgL_rz00_1720+((long)1)); 
BgL_wz00_9597 = 
(BgL_wz00_1721+((long)3)); 
BgL_asciiz00_9599 = ((bool_t)0); 
BgL_asciiz00_1722 = BgL_asciiz00_9599; 
BgL_wz00_1721 = BgL_wz00_9597; 
BgL_rz00_1720 = BgL_rz00_9595; 
goto BgL_zc3z04anonymousza31660ze3z87_1723;} } }  else 
{ /* Llib/unicode.scm 803 */
if(
(BgL_nz00_1728<=((long)223)))
{ /* Llib/unicode.scm 815 */
bool_t BgL_test5548z00_9602;
if(
(
(((long)1)+BgL_rz00_1720)<BgL_endz00_75))
{ /* Llib/unicode.scm 770 */
long BgL_nz00_4148;
{ /* Llib/unicode.scm 770 */
unsigned char BgL_tmpz00_9606;
{ /* Llib/unicode.scm 816 */
long BgL_i3937z00_6441;
BgL_i3937z00_6441 = 
(BgL_rz00_1720+((long)1)); 
{ /* Llib/unicode.scm 816 */
long BgL_l3938z00_6442;
BgL_l3938z00_6442 = 
STRING_LENGTH(BgL_strz00_72); 
if(
BOUND_CHECK(BgL_i3937z00_6441, BgL_l3938z00_6442))
{ /* Llib/unicode.scm 816 */
BgL_tmpz00_9606 = 
STRING_REF(BgL_strz00_72, BgL_i3937z00_6441)
; }  else 
{ 
obj_t BgL_auxz00_9612;
BgL_auxz00_9612 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)32535)), BGl_string4975z00zz__unicodez00, BgL_strz00_72, 
(int)(BgL_l3938z00_6442), 
(int)(BgL_i3937z00_6441)); 
FAILURE(BgL_auxz00_9612,BFALSE,BFALSE);} } } 
BgL_nz00_4148 = 
(BgL_tmpz00_9606); } 
if(
(BgL_nz00_4148>=((long)128)))
{ /* Llib/unicode.scm 771 */
BgL_test5548z00_9602 = 
(BgL_nz00_4148<=((long)191))
; }  else 
{ /* Llib/unicode.scm 771 */
BgL_test5548z00_9602 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 815 */
BgL_test5548z00_9602 = ((bool_t)0)
; } 
if(BgL_test5548z00_9602)
{ /* Llib/unicode.scm 815 */
{ /* Llib/unicode.scm 818 */
long BgL_l3942z00_6446;
BgL_l3942z00_6446 = 
STRING_LENGTH(BgL_resz00_1718); 
if(
BOUND_CHECK(BgL_wz00_1721, BgL_l3942z00_6446))
{ /* Llib/unicode.scm 818 */
STRING_SET(BgL_resz00_1718, BgL_wz00_1721, BgL_cz00_1727); }  else 
{ 
obj_t BgL_auxz00_9626;
BgL_auxz00_9626 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)32598)), BGl_string4995z00zz__unicodez00, BgL_resz00_1718, 
(int)(BgL_l3942z00_6446), 
(int)(BgL_wz00_1721)); 
FAILURE(BgL_auxz00_9626,BFALSE,BFALSE);} } 
{ /* Llib/unicode.scm 819 */
long BgL_arg1709z00_1760;unsigned char BgL_arg1710z00_1761;
BgL_arg1709z00_1760 = 
(BgL_wz00_1721+((long)1)); 
{ /* Llib/unicode.scm 819 */
long BgL_i3945z00_6449;
BgL_i3945z00_6449 = 
(BgL_rz00_1720+((long)1)); 
{ /* Llib/unicode.scm 819 */
long BgL_l3946z00_6450;
BgL_l3946z00_6450 = 
STRING_LENGTH(BgL_strz00_72); 
if(
BOUND_CHECK(BgL_i3945z00_6449, BgL_l3946z00_6450))
{ /* Llib/unicode.scm 819 */
BgL_arg1710z00_1761 = 
STRING_REF(BgL_strz00_72, BgL_i3945z00_6449); }  else 
{ 
obj_t BgL_auxz00_9638;
BgL_auxz00_9638 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)32657)), BGl_string4975z00zz__unicodez00, BgL_strz00_72, 
(int)(BgL_l3946z00_6450), 
(int)(BgL_i3945z00_6449)); 
FAILURE(BgL_auxz00_9638,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 819 */
long BgL_l3950z00_6454;
BgL_l3950z00_6454 = 
STRING_LENGTH(BgL_resz00_1718); 
if(
BOUND_CHECK(BgL_arg1709z00_1760, BgL_l3950z00_6454))
{ /* Llib/unicode.scm 819 */
STRING_SET(BgL_resz00_1718, BgL_arg1709z00_1760, BgL_arg1710z00_1761); }  else 
{ 
obj_t BgL_auxz00_9648;
BgL_auxz00_9648 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)32630)), BGl_string4995z00zz__unicodez00, BgL_resz00_1718, 
(int)(BgL_l3950z00_6454), 
(int)(BgL_arg1709z00_1760)); 
FAILURE(BgL_auxz00_9648,BFALSE,BFALSE);} } } 
{ 
bool_t BgL_asciiz00_9658;long BgL_wz00_9656;long BgL_rz00_9654;
BgL_rz00_9654 = 
(BgL_rz00_1720+((long)2)); 
BgL_wz00_9656 = 
(BgL_wz00_1721+((long)2)); 
BgL_asciiz00_9658 = ((bool_t)0); 
BgL_asciiz00_1722 = BgL_asciiz00_9658; 
BgL_wz00_1721 = BgL_wz00_9656; 
BgL_rz00_1720 = BgL_rz00_9654; 
goto BgL_zc3z04anonymousza31660ze3z87_1723;} }  else 
{ /* Llib/unicode.scm 815 */
BGl_stringzd2unicodezd2fixz12ze70zf5zz__unicodez00(BgL_resz00_1718, BgL_wz00_1721); 
{ 
bool_t BgL_asciiz00_9664;long BgL_wz00_9662;long BgL_rz00_9660;
BgL_rz00_9660 = 
(BgL_rz00_1720+((long)1)); 
BgL_wz00_9662 = 
(BgL_wz00_1721+((long)3)); 
BgL_asciiz00_9664 = ((bool_t)0); 
BgL_asciiz00_1722 = BgL_asciiz00_9664; 
BgL_wz00_1721 = BgL_wz00_9662; 
BgL_rz00_1720 = BgL_rz00_9660; 
goto BgL_zc3z04anonymousza31660ze3z87_1723;} } }  else 
{ /* Llib/unicode.scm 814 */
if(
(BgL_nz00_1728==((long)237)))
{ /* Llib/unicode.scm 827 */
bool_t BgL_test5556z00_9667;
if(
(BgL_rz00_1720<
(BgL_endz00_75-((long)2))))
{ /* Llib/unicode.scm 828 */
bool_t BgL_test5558z00_9671;
{ /* Llib/unicode.scm 770 */
long BgL_nz00_4189;
{ /* Llib/unicode.scm 770 */
unsigned char BgL_tmpz00_9672;
{ /* Llib/unicode.scm 828 */
long BgL_i3953z00_6457;
BgL_i3953z00_6457 = 
(BgL_rz00_1720+((long)1)); 
{ /* Llib/unicode.scm 828 */
long BgL_l3954z00_6458;
BgL_l3954z00_6458 = 
STRING_LENGTH(BgL_strz00_72); 
if(
BOUND_CHECK(BgL_i3953z00_6457, BgL_l3954z00_6458))
{ /* Llib/unicode.scm 828 */
BgL_tmpz00_9672 = 
STRING_REF(BgL_strz00_72, BgL_i3953z00_6457)
; }  else 
{ 
obj_t BgL_auxz00_9678;
BgL_auxz00_9678 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)32975)), BGl_string4975z00zz__unicodez00, BgL_strz00_72, 
(int)(BgL_l3954z00_6458), 
(int)(BgL_i3953z00_6457)); 
FAILURE(BgL_auxz00_9678,BFALSE,BFALSE);} } } 
BgL_nz00_4189 = 
(BgL_tmpz00_9672); } 
if(
(BgL_nz00_4189>=((long)128)))
{ /* Llib/unicode.scm 771 */
BgL_test5558z00_9671 = 
(BgL_nz00_4189<=((long)191))
; }  else 
{ /* Llib/unicode.scm 771 */
BgL_test5558z00_9671 = ((bool_t)0)
; } } 
if(BgL_test5558z00_9671)
{ /* Llib/unicode.scm 770 */
long BgL_nz00_4202;
{ /* Llib/unicode.scm 770 */
unsigned char BgL_tmpz00_9688;
{ /* Llib/unicode.scm 829 */
long BgL_i3957z00_6461;
BgL_i3957z00_6461 = 
(BgL_rz00_1720+((long)2)); 
{ /* Llib/unicode.scm 829 */
long BgL_l3958z00_6462;
BgL_l3958z00_6462 = 
STRING_LENGTH(BgL_strz00_72); 
if(
BOUND_CHECK(BgL_i3957z00_6461, BgL_l3958z00_6462))
{ /* Llib/unicode.scm 829 */
BgL_tmpz00_9688 = 
STRING_REF(BgL_strz00_72, BgL_i3957z00_6461)
; }  else 
{ 
obj_t BgL_auxz00_9694;
BgL_auxz00_9694 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)33029)), BGl_string4975z00zz__unicodez00, BgL_strz00_72, 
(int)(BgL_l3958z00_6462), 
(int)(BgL_i3957z00_6461)); 
FAILURE(BgL_auxz00_9694,BFALSE,BFALSE);} } } 
BgL_nz00_4202 = 
(BgL_tmpz00_9688); } 
if(
(BgL_nz00_4202>=((long)128)))
{ /* Llib/unicode.scm 771 */
BgL_test5556z00_9667 = 
(BgL_nz00_4202<=((long)191))
; }  else 
{ /* Llib/unicode.scm 771 */
BgL_test5556z00_9667 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 828 */
BgL_test5556z00_9667 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 827 */
BgL_test5556z00_9667 = ((bool_t)0)
; } 
if(BgL_test5556z00_9667)
{ /* Llib/unicode.scm 835 */
long BgL_n1z00_1783;
{ /* Llib/unicode.scm 835 */
unsigned char BgL_tmpz00_9704;
{ /* Llib/unicode.scm 835 */
long BgL_i3961z00_6465;
BgL_i3961z00_6465 = 
(BgL_rz00_1720+((long)1)); 
{ /* Llib/unicode.scm 835 */
long BgL_l3962z00_6466;
BgL_l3962z00_6466 = 
STRING_LENGTH(BgL_strz00_72); 
if(
BOUND_CHECK(BgL_i3961z00_6465, BgL_l3962z00_6466))
{ /* Llib/unicode.scm 835 */
BgL_tmpz00_9704 = 
STRING_REF(BgL_strz00_72, BgL_i3961z00_6465)
; }  else 
{ 
obj_t BgL_auxz00_9710;
BgL_auxz00_9710 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)33382)), BGl_string4975z00zz__unicodez00, BgL_strz00_72, 
(int)(BgL_l3962z00_6466), 
(int)(BgL_i3961z00_6465)); 
FAILURE(BgL_auxz00_9710,BFALSE,BFALSE);} } } 
BgL_n1z00_1783 = 
(BgL_tmpz00_9704); } 
{ /* Llib/unicode.scm 835 */
long BgL_n2z00_1784;
{ /* Llib/unicode.scm 836 */
unsigned char BgL_tmpz00_9717;
{ /* Llib/unicode.scm 836 */
long BgL_i3965z00_6469;
BgL_i3965z00_6469 = 
(BgL_rz00_1720+((long)2)); 
{ /* Llib/unicode.scm 836 */
long BgL_l3966z00_6470;
BgL_l3966z00_6470 = 
STRING_LENGTH(BgL_strz00_72); 
if(
BOUND_CHECK(BgL_i3965z00_6469, BgL_l3966z00_6470))
{ /* Llib/unicode.scm 836 */
BgL_tmpz00_9717 = 
STRING_REF(BgL_strz00_72, BgL_i3965z00_6469)
; }  else 
{ 
obj_t BgL_auxz00_9723;
BgL_auxz00_9723 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)33437)), BGl_string4975z00zz__unicodez00, BgL_strz00_72, 
(int)(BgL_l3966z00_6470), 
(int)(BgL_i3965z00_6469)); 
FAILURE(BgL_auxz00_9723,BFALSE,BFALSE);} } } 
BgL_n2z00_1784 = 
(BgL_tmpz00_9717); } 
{ /* Llib/unicode.scm 836 */
long BgL_ucs2z00_1785;
BgL_ucs2z00_1785 = 
(
(
(BgL_nz00_1728 & ((long)15)) << 
(int)(((long)12)))+
(
(
(BgL_n1z00_1783 & ((long)63)) << 
(int)(((long)6)))+
(BgL_n2z00_1784 & ((long)63)))); 
{ /* Llib/unicode.scm 837 */

if(
(BgL_ucs2z00_1785>((long)57343)))
{ /* Llib/unicode.scm 841 */
BGl_stringzd2unicodezd2fixz12ze70zf5zz__unicodez00(BgL_resz00_1718, BgL_wz00_1721); 
{ 
bool_t BgL_asciiz00_9746;long BgL_wz00_9744;long BgL_rz00_9742;
BgL_rz00_9742 = 
(BgL_rz00_1720+((long)1)); 
BgL_wz00_9744 = 
(BgL_wz00_1721+((long)3)); 
BgL_asciiz00_9746 = ((bool_t)0); 
BgL_asciiz00_1722 = BgL_asciiz00_9746; 
BgL_wz00_1721 = BgL_wz00_9744; 
BgL_rz00_1720 = BgL_rz00_9742; 
goto BgL_zc3z04anonymousza31660ze3z87_1723;} }  else 
{ /* Llib/unicode.scm 844 */
bool_t BgL_test5566z00_9747;
if(
(BgL_rz00_1720<=
(BgL_endz00_75-((long)4))))
{ /* Llib/unicode.scm 845 */
long BgL_tmpz00_9751;
{ /* Llib/unicode.scm 845 */
unsigned char BgL_tmpz00_9752;
{ /* Llib/unicode.scm 845 */
long BgL_i3969z00_6473;
BgL_i3969z00_6473 = 
(BgL_rz00_1720+((long)3)); 
{ /* Llib/unicode.scm 845 */
long BgL_l3970z00_6474;
BgL_l3970z00_6474 = 
STRING_LENGTH(BgL_strz00_72); 
if(
BOUND_CHECK(BgL_i3969z00_6473, BgL_l3970z00_6474))
{ /* Llib/unicode.scm 845 */
BgL_tmpz00_9752 = 
STRING_REF(BgL_strz00_72, BgL_i3969z00_6473)
; }  else 
{ 
obj_t BgL_auxz00_9758;
BgL_auxz00_9758 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)33763)), BGl_string4975z00zz__unicodez00, BgL_strz00_72, 
(int)(BgL_l3970z00_6474), 
(int)(BgL_i3969z00_6473)); 
FAILURE(BgL_auxz00_9758,BFALSE,BFALSE);} } } 
BgL_tmpz00_9751 = 
(BgL_tmpz00_9752); } 
BgL_test5566z00_9747 = 
(BgL_tmpz00_9751==((long)237)); }  else 
{ /* Llib/unicode.scm 844 */
BgL_test5566z00_9747 = ((bool_t)0)
; } 
if(BgL_test5566z00_9747)
{ /* Llib/unicode.scm 847 */
long BgL_m1z00_1797;
{ /* Llib/unicode.scm 848 */
unsigned char BgL_tmpz00_9766;
{ /* Llib/unicode.scm 848 */
long BgL_i3973z00_6477;
BgL_i3973z00_6477 = 
(BgL_rz00_1720+((long)4)); 
{ /* Llib/unicode.scm 848 */
long BgL_l3974z00_6478;
BgL_l3974z00_6478 = 
STRING_LENGTH(BgL_strz00_72); 
if(
BOUND_CHECK(BgL_i3973z00_6477, BgL_l3974z00_6478))
{ /* Llib/unicode.scm 848 */
BgL_tmpz00_9766 = 
STRING_REF(BgL_strz00_72, BgL_i3973z00_6477)
; }  else 
{ 
obj_t BgL_auxz00_9772;
BgL_auxz00_9772 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)33877)), BGl_string4975z00zz__unicodez00, BgL_strz00_72, 
(int)(BgL_l3974z00_6478), 
(int)(BgL_i3973z00_6477)); 
FAILURE(BgL_auxz00_9772,BFALSE,BFALSE);} } } 
BgL_m1z00_1797 = 
(BgL_tmpz00_9766); } 
{ /* Llib/unicode.scm 848 */
long BgL_m2z00_1798;
{ /* Llib/unicode.scm 849 */
unsigned char BgL_tmpz00_9779;
{ /* Llib/unicode.scm 849 */
long BgL_i3977z00_6481;
BgL_i3977z00_6481 = 
(BgL_rz00_1720+((long)5)); 
{ /* Llib/unicode.scm 849 */
long BgL_l3978z00_6482;
BgL_l3978z00_6482 = 
STRING_LENGTH(BgL_strz00_72); 
if(
BOUND_CHECK(BgL_i3977z00_6481, BgL_l3978z00_6482))
{ /* Llib/unicode.scm 849 */
BgL_tmpz00_9779 = 
STRING_REF(BgL_strz00_72, BgL_i3977z00_6481)
; }  else 
{ 
obj_t BgL_auxz00_9785;
BgL_auxz00_9785 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)33932)), BGl_string4975z00zz__unicodez00, BgL_strz00_72, 
(int)(BgL_l3978z00_6482), 
(int)(BgL_i3977z00_6481)); 
FAILURE(BgL_auxz00_9785,BFALSE,BFALSE);} } } 
BgL_m2z00_1798 = 
(BgL_tmpz00_9779); } 
{ /* Llib/unicode.scm 849 */
long BgL_nuz00_1799;
BgL_nuz00_1799 = 
(
(
(((long)237) & ((long)15)) << 
(int)(((long)12)))+
(
(
(BgL_m1z00_1797 & ((long)63)) << 
(int)(((long)6)))+
(BgL_m2z00_1798 & ((long)63)))); 
{ /* Llib/unicode.scm 850 */

if(
(BgL_nuz00_1799>=((long)56320)))
{ /* Llib/unicode.scm 854 */
long BgL_za7za7za7za7za7za7z00_1801;
BgL_za7za7za7za7za7za7z00_1801 = 
(BgL_nuz00_1799 & ((long)63)); 
{ /* Llib/unicode.scm 854 */
long BgL_yyyyz00_1802;
BgL_yyyyz00_1802 = 
(
(BgL_nuz00_1799 & ((long)1023)) >> 
(int)(((long)6))); 
{ /* Llib/unicode.scm 855 */
long BgL_xxz00_1803;
BgL_xxz00_1803 = 
(BgL_ucs2z00_1785 & ((long)3)); 
{ /* Llib/unicode.scm 856 */
long BgL_wwwwz00_1804;
BgL_wwwwz00_1804 = 
(
(BgL_ucs2z00_1785 >> 
(int)(((long)2))) & ((long)15)); 
{ /* Llib/unicode.scm 857 */
long BgL_vvvvz00_1805;
BgL_vvvvz00_1805 = 
(
(BgL_ucs2z00_1785 >> 
(int)(((long)6))) & ((long)15)); 
{ /* Llib/unicode.scm 858 */
long BgL_uuuuuz00_1806;
BgL_uuuuuz00_1806 = 
(BgL_vvvvz00_1805+((long)1)); 
{ /* Llib/unicode.scm 859 */

{ /* Llib/unicode.scm 860 */
long BgL_arg1746z00_1807;unsigned char BgL_arg1747z00_1808;
BgL_arg1746z00_1807 = 
(BgL_wz00_1721+((long)3)); 
BgL_arg1747z00_1808 = 
BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(
(((long)128)+BgL_za7za7za7za7za7za7z00_1801)); 
{ /* Llib/unicode.scm 860 */
long BgL_l3982z00_6486;
BgL_l3982z00_6486 = 
STRING_LENGTH(BgL_resz00_1718); 
if(
BOUND_CHECK(BgL_arg1746z00_1807, BgL_l3982z00_6486))
{ /* Llib/unicode.scm 860 */
STRING_SET(BgL_resz00_1718, BgL_arg1746z00_1807, BgL_arg1747z00_1808); }  else 
{ 
obj_t BgL_auxz00_9822;
BgL_auxz00_9822 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)34357)), BGl_string4995z00zz__unicodez00, BgL_resz00_1718, 
(int)(BgL_l3982z00_6486), 
(int)(BgL_arg1746z00_1807)); 
FAILURE(BgL_auxz00_9822,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 863 */
long BgL_arg1750z00_1810;unsigned char BgL_arg1751z00_1811;
BgL_arg1750z00_1810 = 
(BgL_wz00_1721+((long)2)); 
BgL_arg1751z00_1811 = 
BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(
(((long)128)+
(
(BgL_xxz00_1803 << 
(int)(((long)4))) | BgL_yyyyz00_1802))); 
{ /* Llib/unicode.scm 863 */
long BgL_l3986z00_6490;
BgL_l3986z00_6490 = 
STRING_LENGTH(BgL_resz00_1718); 
if(
BOUND_CHECK(BgL_arg1750z00_1810, BgL_l3986z00_6490))
{ /* Llib/unicode.scm 863 */
STRING_SET(BgL_resz00_1718, BgL_arg1750z00_1810, BgL_arg1751z00_1811); }  else 
{ 
obj_t BgL_auxz00_9838;
BgL_auxz00_9838 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)34444)), BGl_string4995z00zz__unicodez00, BgL_resz00_1718, 
(int)(BgL_l3986z00_6490), 
(int)(BgL_arg1750z00_1810)); 
FAILURE(BgL_auxz00_9838,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 867 */
long BgL_arg1756z00_1815;unsigned char BgL_arg1757z00_1816;
BgL_arg1756z00_1815 = 
(BgL_wz00_1721+((long)1)); 
BgL_arg1757z00_1816 = 
BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(
(((long)128)+
(BgL_wwwwz00_1804 | 
(
(BgL_uuuuuz00_1806 & ((long)3)) << 
(int)(((long)4)))))); 
{ /* Llib/unicode.scm 867 */
long BgL_l3990z00_6494;
BgL_l3990z00_6494 = 
STRING_LENGTH(BgL_resz00_1718); 
if(
BOUND_CHECK(BgL_arg1756z00_1815, BgL_l3990z00_6494))
{ /* Llib/unicode.scm 867 */
STRING_SET(BgL_resz00_1718, BgL_arg1756z00_1815, BgL_arg1757z00_1816); }  else 
{ 
obj_t BgL_auxz00_9855;
BgL_auxz00_9855 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)34565)), BGl_string4995z00zz__unicodez00, BgL_resz00_1718, 
(int)(BgL_l3990z00_6494), 
(int)(BgL_arg1756z00_1815)); 
FAILURE(BgL_auxz00_9855,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 874 */
unsigned char BgL_arg1763z00_1821;
BgL_arg1763z00_1821 = 
BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(
(((long)240) | 
(BgL_uuuuuz00_1806 >> 
(int)(((long)2))))); 
{ /* Llib/unicode.scm 872 */
long BgL_l3994z00_6498;
BgL_l3994z00_6498 = 
STRING_LENGTH(BgL_resz00_1718); 
if(
BOUND_CHECK(BgL_wz00_1721, BgL_l3994z00_6498))
{ /* Llib/unicode.scm 872 */
STRING_SET(BgL_resz00_1718, BgL_wz00_1721, BgL_arg1763z00_1821); }  else 
{ 
obj_t BgL_auxz00_9869;
BgL_auxz00_9869 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)34711)), BGl_string4995z00zz__unicodez00, BgL_resz00_1718, 
(int)(BgL_l3994z00_6498), 
(int)(BgL_wz00_1721)); 
FAILURE(BgL_auxz00_9869,BFALSE,BFALSE);} } } 
{ 
bool_t BgL_asciiz00_9879;long BgL_wz00_9877;long BgL_rz00_9875;
BgL_rz00_9875 = 
(BgL_rz00_1720+((long)6)); 
BgL_wz00_9877 = 
(BgL_wz00_1721+((long)4)); 
BgL_asciiz00_9879 = ((bool_t)0); 
BgL_asciiz00_1722 = BgL_asciiz00_9879; 
BgL_wz00_1721 = BgL_wz00_9877; 
BgL_rz00_1720 = BgL_rz00_9875; 
goto BgL_zc3z04anonymousza31660ze3z87_1723;} } } } } } } }  else 
{ /* Llib/unicode.scm 853 */
BGl_stringzd2unicodezd2fixz12ze70zf5zz__unicodez00(BgL_resz00_1718, BgL_wz00_1721); 
{ 
bool_t BgL_asciiz00_9885;long BgL_wz00_9883;long BgL_rz00_9881;
BgL_rz00_9881 = 
(BgL_rz00_1720+((long)1)); 
BgL_wz00_9883 = 
(BgL_wz00_1721+((long)3)); 
BgL_asciiz00_9885 = ((bool_t)0); 
BgL_asciiz00_1722 = BgL_asciiz00_9885; 
BgL_wz00_1721 = BgL_wz00_9883; 
BgL_rz00_1720 = BgL_rz00_9881; 
goto BgL_zc3z04anonymousza31660ze3z87_1723;} } } } } }  else 
{ /* Llib/unicode.scm 844 */
if(
(BgL_ucs2z00_1785<=((long)56319)))
{ /* Llib/unicode.scm 880 */
long BgL_xxz00_1842;
BgL_xxz00_1842 = 
(BgL_ucs2z00_1785 & ((long)3)); 
{ /* Llib/unicode.scm 880 */
long BgL_wwwwz00_1843;
BgL_wwwwz00_1843 = 
(
(BgL_ucs2z00_1785 >> 
(int)(((long)2))) & ((long)15)); 
{ /* Llib/unicode.scm 881 */
long BgL_vvvvz00_1844;
BgL_vvvvz00_1844 = 
(
(BgL_ucs2z00_1785 >> 
(int)(((long)6))) & ((long)15)); 
{ /* Llib/unicode.scm 882 */
long BgL_uuuuuz00_1845;
BgL_uuuuuz00_1845 = 
(BgL_vvvvz00_1844+((long)1)); 
{ /* Llib/unicode.scm 883 */

{ /* Llib/unicode.scm 884 */
long BgL_arg1786z00_1846;unsigned char BgL_arg1787z00_1847;
BgL_arg1786z00_1846 = 
(BgL_wz00_1721+((long)3)); 
BgL_arg1787z00_1847 = 
BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(
(((long)128) | 
(BgL_uuuuuz00_1845 >> 
(int)(((long)2))))); 
{ /* Llib/unicode.scm 884 */
long BgL_l3998z00_6502;
BgL_l3998z00_6502 = 
STRING_LENGTH(BgL_resz00_1718); 
if(
BOUND_CHECK(BgL_arg1786z00_1846, BgL_l3998z00_6502))
{ /* Llib/unicode.scm 884 */
STRING_SET(BgL_resz00_1718, BgL_arg1786z00_1846, BgL_arg1787z00_1847); }  else 
{ 
obj_t BgL_auxz00_9905;
BgL_auxz00_9905 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)35124)), BGl_string4995z00zz__unicodez00, BgL_resz00_1718, 
(int)(BgL_l3998z00_6502), 
(int)(BgL_arg1786z00_1846)); 
FAILURE(BgL_auxz00_9905,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 886 */
long BgL_arg1790z00_1850;unsigned char BgL_arg1791z00_1851;
BgL_arg1790z00_1850 = 
(BgL_wz00_1721+((long)2)); 
BgL_arg1791z00_1851 = 
BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(
(
(BgL_xxz00_1842 << 
(int)(((long)4)))+((long)128))); 
{ /* Llib/unicode.scm 886 */
long BgL_l4002z00_6506;
BgL_l4002z00_6506 = 
STRING_LENGTH(BgL_resz00_1718); 
if(
BOUND_CHECK(BgL_arg1790z00_1850, BgL_l4002z00_6506))
{ /* Llib/unicode.scm 886 */
STRING_SET(BgL_resz00_1718, BgL_arg1790z00_1850, BgL_arg1791z00_1851); }  else 
{ 
obj_t BgL_auxz00_9920;
BgL_auxz00_9920 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)35216)), BGl_string4995z00zz__unicodez00, BgL_resz00_1718, 
(int)(BgL_l4002z00_6506), 
(int)(BgL_arg1790z00_1850)); 
FAILURE(BgL_auxz00_9920,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 888 */
long BgL_arg1795z00_1854;unsigned char BgL_arg1796z00_1855;
BgL_arg1795z00_1854 = 
(BgL_wz00_1721+((long)1)); 
BgL_arg1796z00_1855 = 
BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(
(((long)128)+
(BgL_wwwwz00_1843 | 
(
(BgL_uuuuuz00_1845 & ((long)3)) << 
(int)(((long)4)))))); 
{ /* Llib/unicode.scm 888 */
long BgL_l4006z00_6510;
BgL_l4006z00_6510 = 
STRING_LENGTH(BgL_resz00_1718); 
if(
BOUND_CHECK(BgL_arg1795z00_1854, BgL_l4006z00_6510))
{ /* Llib/unicode.scm 888 */
STRING_SET(BgL_resz00_1718, BgL_arg1795z00_1854, BgL_arg1796z00_1855); }  else 
{ 
obj_t BgL_auxz00_9937;
BgL_auxz00_9937 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)35302)), BGl_string4995z00zz__unicodez00, BgL_resz00_1718, 
(int)(BgL_l4006z00_6510), 
(int)(BgL_arg1795z00_1854)); 
FAILURE(BgL_auxz00_9937,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 893 */
long BgL_l4010z00_6514;
BgL_l4010z00_6514 = 
STRING_LENGTH(BgL_resz00_1718); 
if(
BOUND_CHECK(BgL_wz00_1721, BgL_l4010z00_6514))
{ /* Llib/unicode.scm 893 */
STRING_SET(BgL_resz00_1718, BgL_wz00_1721, ((unsigned char)248)); }  else 
{ 
obj_t BgL_auxz00_9947;
BgL_auxz00_9947 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)35446)), BGl_string4995z00zz__unicodez00, BgL_resz00_1718, 
(int)(BgL_l4010z00_6514), 
(int)(BgL_wz00_1721)); 
FAILURE(BgL_auxz00_9947,BFALSE,BFALSE);} } 
{ 
bool_t BgL_asciiz00_9957;long BgL_wz00_9955;long BgL_rz00_9953;
BgL_rz00_9953 = 
(BgL_rz00_1720+((long)3)); 
BgL_wz00_9955 = 
(BgL_wz00_1721+((long)4)); 
BgL_asciiz00_9957 = ((bool_t)0); 
BgL_asciiz00_1722 = BgL_asciiz00_9957; 
BgL_wz00_1721 = BgL_wz00_9955; 
BgL_rz00_1720 = BgL_rz00_9953; 
goto BgL_zc3z04anonymousza31660ze3z87_1723;} } } } } }  else 
{ /* Llib/unicode.scm 896 */
long BgL_za7za7za7za7za7za7z00_1864;long BgL_yyyyz00_1865;
BgL_za7za7za7za7za7za7z00_1864 = 
(BgL_nz00_1728 & ((long)63)); 
BgL_yyyyz00_1865 = 
(
(BgL_nz00_1728 & ((long)1023)) >> 
(int)(((long)6))); 
{ /* Llib/unicode.scm 898 */
long BgL_arg1807z00_1866;unsigned char BgL_arg1808z00_1867;
BgL_arg1807z00_1866 = 
(BgL_wz00_1721+((long)3)); 
BgL_arg1808z00_1867 = 
BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(
(BgL_za7za7za7za7za7za7z00_1864+((long)128))); 
{ /* Llib/unicode.scm 898 */
long BgL_l4014z00_6518;
BgL_l4014z00_6518 = 
STRING_LENGTH(BgL_resz00_1718); 
if(
BOUND_CHECK(BgL_arg1807z00_1866, BgL_l4014z00_6518))
{ /* Llib/unicode.scm 898 */
STRING_SET(BgL_resz00_1718, BgL_arg1807z00_1866, BgL_arg1808z00_1867); }  else 
{ 
obj_t BgL_auxz00_9969;
BgL_auxz00_9969 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)35634)), BGl_string4995z00zz__unicodez00, BgL_resz00_1718, 
(int)(BgL_l4014z00_6518), 
(int)(BgL_arg1807z00_1866)); 
FAILURE(BgL_auxz00_9969,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 900 */
long BgL_arg1810z00_1869;unsigned char BgL_arg1811z00_1870;
BgL_arg1810z00_1869 = 
(BgL_wz00_1721+((long)2)); 
BgL_arg1811z00_1870 = 
BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(
(BgL_yyyyz00_1865+((long)128))); 
{ /* Llib/unicode.scm 900 */
long BgL_l4018z00_6522;
BgL_l4018z00_6522 = 
STRING_LENGTH(BgL_resz00_1718); 
if(
BOUND_CHECK(BgL_arg1810z00_1869, BgL_l4018z00_6522))
{ /* Llib/unicode.scm 900 */
STRING_SET(BgL_resz00_1718, BgL_arg1810z00_1869, BgL_arg1811z00_1870); }  else 
{ 
obj_t BgL_auxz00_9982;
BgL_auxz00_9982 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)35712)), BGl_string4995z00zz__unicodez00, BgL_resz00_1718, 
(int)(BgL_l4018z00_6522), 
(int)(BgL_arg1810z00_1869)); 
FAILURE(BgL_auxz00_9982,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 902 */
long BgL_arg1813z00_1872;
BgL_arg1813z00_1872 = 
(BgL_wz00_1721+((long)1)); 
{ /* Llib/unicode.scm 902 */
long BgL_l4022z00_6526;
BgL_l4022z00_6526 = 
STRING_LENGTH(BgL_resz00_1718); 
if(
BOUND_CHECK(BgL_arg1813z00_1872, BgL_l4022z00_6526))
{ /* Llib/unicode.scm 902 */
STRING_SET(BgL_resz00_1718, BgL_arg1813z00_1872, ((unsigned char)128)); }  else 
{ 
obj_t BgL_auxz00_9993;
BgL_auxz00_9993 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)35788)), BGl_string4995z00zz__unicodez00, BgL_resz00_1718, 
(int)(BgL_l4022z00_6526), 
(int)(BgL_arg1813z00_1872)); 
FAILURE(BgL_auxz00_9993,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 903 */
long BgL_l4026z00_6530;
BgL_l4026z00_6530 = 
STRING_LENGTH(BgL_resz00_1718); 
if(
BOUND_CHECK(BgL_wz00_1721, BgL_l4026z00_6530))
{ /* Llib/unicode.scm 903 */
STRING_SET(BgL_resz00_1718, BgL_wz00_1721, ((unsigned char)252)); }  else 
{ 
obj_t BgL_auxz00_10003;
BgL_auxz00_10003 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)35847)), BGl_string4995z00zz__unicodez00, BgL_resz00_1718, 
(int)(BgL_l4026z00_6530), 
(int)(BgL_wz00_1721)); 
FAILURE(BgL_auxz00_10003,BFALSE,BFALSE);} } 
{ /* Llib/unicode.scm 908 */
bool_t BgL_test5585z00_10009;
if(
(BgL_wz00_1721>=((long)4)))
{ /* Llib/unicode.scm 909 */
bool_t BgL_test5587z00_10012;
{ /* Llib/unicode.scm 909 */
long BgL_arg1827z00_1888;
BgL_arg1827z00_1888 = 
(BgL_wz00_1721-((long)4)); 
if(
(
(BgL_wz00_1721+((long)4))>=
(BgL_arg1827z00_1888+((long)4))))
{ /* Llib/unicode.scm 1116 */
long BgL_tmpz00_10018;
{ /* Llib/unicode.scm 1116 */
unsigned char BgL_tmpz00_10019;
{ /* Llib/unicode.scm 1116 */
long BgL_l4030z00_6534;
BgL_l4030z00_6534 = 
STRING_LENGTH(BgL_resz00_1718); 
if(
BOUND_CHECK(BgL_arg1827z00_1888, BgL_l4030z00_6534))
{ /* Llib/unicode.scm 1116 */
BgL_tmpz00_10019 = 
STRING_REF(BgL_resz00_1718, BgL_arg1827z00_1888)
; }  else 
{ 
obj_t BgL_auxz00_10024;
BgL_auxz00_10024 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)44811)), BGl_string4975z00zz__unicodez00, BgL_resz00_1718, 
(int)(BgL_l4030z00_6534), 
(int)(BgL_arg1827z00_1888)); 
FAILURE(BgL_auxz00_10024,BFALSE,BFALSE);} } 
BgL_tmpz00_10018 = 
(BgL_tmpz00_10019); } 
BgL_test5587z00_10012 = 
(BgL_tmpz00_10018==((long)248)); }  else 
{ /* Llib/unicode.scm 1115 */
BgL_test5587z00_10012 = ((bool_t)0)
; } } 
if(BgL_test5587z00_10012)
{ /* Llib/unicode.scm 909 */
if(
(
(BgL_wz00_1721+((long)4))>=
(BgL_wz00_1721+((long)4))))
{ /* Llib/unicode.scm 1126 */
long BgL_tmpz00_10036;
{ /* Llib/unicode.scm 1126 */
unsigned char BgL_tmpz00_10037;
{ /* Llib/unicode.scm 1126 */
long BgL_l4034z00_6538;
BgL_l4034z00_6538 = 
STRING_LENGTH(BgL_resz00_1718); 
if(
BOUND_CHECK(BgL_wz00_1721, BgL_l4034z00_6538))
{ /* Llib/unicode.scm 1126 */
BgL_tmpz00_10037 = 
STRING_REF(BgL_resz00_1718, BgL_wz00_1721)
; }  else 
{ 
obj_t BgL_auxz00_10042;
BgL_auxz00_10042 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)45407)), BGl_string4975z00zz__unicodez00, BgL_resz00_1718, 
(int)(BgL_l4034z00_6538), 
(int)(BgL_wz00_1721)); 
FAILURE(BgL_auxz00_10042,BFALSE,BFALSE);} } 
BgL_tmpz00_10036 = 
(BgL_tmpz00_10037); } 
BgL_test5585z00_10009 = 
(BgL_tmpz00_10036==((long)252)); }  else 
{ /* Llib/unicode.scm 1125 */
BgL_test5585z00_10009 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 909 */
BgL_test5585z00_10009 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 908 */
BgL_test5585z00_10009 = ((bool_t)0)
; } 
if(BgL_test5585z00_10009)
{ /* Llib/unicode.scm 908 */
BGl_utf8zd2collapsez12zc0zz__unicodez00(BgL_resz00_1718, BgL_wz00_1721, BgL_resz00_1718, 
BINT(BgL_wz00_1721)); 
{ 
bool_t BgL_asciiz00_10054;long BgL_rz00_10052;
BgL_rz00_10052 = 
(BgL_rz00_1720+((long)3)); 
BgL_asciiz00_10054 = ((bool_t)0); 
BgL_asciiz00_1722 = BgL_asciiz00_10054; 
BgL_rz00_1720 = BgL_rz00_10052; 
goto BgL_zc3z04anonymousza31660ze3z87_1723;} }  else 
{ 
bool_t BgL_asciiz00_10059;long BgL_wz00_10057;long BgL_rz00_10055;
BgL_rz00_10055 = 
(BgL_rz00_1720+((long)3)); 
BgL_wz00_10057 = 
(BgL_wz00_1721+((long)4)); 
BgL_asciiz00_10059 = ((bool_t)0); 
BgL_asciiz00_1722 = BgL_asciiz00_10059; 
BgL_wz00_1721 = BgL_wz00_10057; 
BgL_rz00_1720 = BgL_rz00_10055; 
goto BgL_zc3z04anonymousza31660ze3z87_1723;} } } } } } } } }  else 
{ /* Llib/unicode.scm 827 */
BGl_stringzd2unicodezd2fixz12ze70zf5zz__unicodez00(BgL_resz00_1718, BgL_wz00_1721); 
{ 
bool_t BgL_asciiz00_10065;long BgL_wz00_10063;long BgL_rz00_10061;
BgL_rz00_10061 = 
(BgL_rz00_1720+((long)1)); 
BgL_wz00_10063 = 
(BgL_wz00_1721+((long)3)); 
BgL_asciiz00_10065 = ((bool_t)0); 
BgL_asciiz00_1722 = BgL_asciiz00_10065; 
BgL_wz00_1721 = BgL_wz00_10063; 
BgL_rz00_1720 = BgL_rz00_10061; 
goto BgL_zc3z04anonymousza31660ze3z87_1723;} } }  else 
{ /* Llib/unicode.scm 825 */
if(
(BgL_nz00_1728<=((long)239)))
{ /* Llib/unicode.scm 922 */
bool_t BgL_test5593z00_10068;
if(
(BgL_rz00_1720<
(BgL_endz00_75-((long)2))))
{ /* Llib/unicode.scm 923 */
bool_t BgL_test5595z00_10072;
{ /* Llib/unicode.scm 770 */
long BgL_nz00_4501;
{ /* Llib/unicode.scm 770 */
unsigned char BgL_tmpz00_10073;
{ /* Llib/unicode.scm 923 */
long BgL_i4037z00_6541;
BgL_i4037z00_6541 = 
(BgL_rz00_1720+((long)1)); 
{ /* Llib/unicode.scm 923 */
long BgL_l4038z00_6542;
BgL_l4038z00_6542 = 
STRING_LENGTH(BgL_strz00_72); 
if(
BOUND_CHECK(BgL_i4037z00_6541, BgL_l4038z00_6542))
{ /* Llib/unicode.scm 923 */
BgL_tmpz00_10073 = 
STRING_REF(BgL_strz00_72, BgL_i4037z00_6541)
; }  else 
{ 
obj_t BgL_auxz00_10079;
BgL_auxz00_10079 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)36554)), BGl_string4975z00zz__unicodez00, BgL_strz00_72, 
(int)(BgL_l4038z00_6542), 
(int)(BgL_i4037z00_6541)); 
FAILURE(BgL_auxz00_10079,BFALSE,BFALSE);} } } 
BgL_nz00_4501 = 
(BgL_tmpz00_10073); } 
if(
(BgL_nz00_4501>=((long)128)))
{ /* Llib/unicode.scm 771 */
BgL_test5595z00_10072 = 
(BgL_nz00_4501<=((long)191))
; }  else 
{ /* Llib/unicode.scm 771 */
BgL_test5595z00_10072 = ((bool_t)0)
; } } 
if(BgL_test5595z00_10072)
{ /* Llib/unicode.scm 770 */
long BgL_nz00_4514;
{ /* Llib/unicode.scm 770 */
unsigned char BgL_tmpz00_10089;
{ /* Llib/unicode.scm 924 */
long BgL_i4041z00_6545;
BgL_i4041z00_6545 = 
(BgL_rz00_1720+((long)2)); 
{ /* Llib/unicode.scm 924 */
long BgL_l4042z00_6546;
BgL_l4042z00_6546 = 
STRING_LENGTH(BgL_strz00_72); 
if(
BOUND_CHECK(BgL_i4041z00_6545, BgL_l4042z00_6546))
{ /* Llib/unicode.scm 924 */
BgL_tmpz00_10089 = 
STRING_REF(BgL_strz00_72, BgL_i4041z00_6545)
; }  else 
{ 
obj_t BgL_auxz00_10095;
BgL_auxz00_10095 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)36608)), BGl_string4975z00zz__unicodez00, BgL_strz00_72, 
(int)(BgL_l4042z00_6546), 
(int)(BgL_i4041z00_6545)); 
FAILURE(BgL_auxz00_10095,BFALSE,BFALSE);} } } 
BgL_nz00_4514 = 
(BgL_tmpz00_10089); } 
if(
(BgL_nz00_4514>=((long)128)))
{ /* Llib/unicode.scm 771 */
BgL_test5593z00_10068 = 
(BgL_nz00_4514<=((long)191))
; }  else 
{ /* Llib/unicode.scm 771 */
BgL_test5593z00_10068 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 923 */
BgL_test5593z00_10068 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 922 */
BgL_test5593z00_10068 = ((bool_t)0)
; } 
if(BgL_test5593z00_10068)
{ /* Llib/unicode.scm 922 */
{ /* Llib/unicode.scm 926 */
long BgL_l4046z00_6550;
BgL_l4046z00_6550 = 
STRING_LENGTH(BgL_resz00_1718); 
if(
BOUND_CHECK(BgL_wz00_1721, BgL_l4046z00_6550))
{ /* Llib/unicode.scm 926 */
STRING_SET(BgL_resz00_1718, BgL_wz00_1721, BgL_cz00_1727); }  else 
{ 
obj_t BgL_auxz00_10109;
BgL_auxz00_10109 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)36671)), BGl_string4995z00zz__unicodez00, BgL_resz00_1718, 
(int)(BgL_l4046z00_6550), 
(int)(BgL_wz00_1721)); 
FAILURE(BgL_auxz00_10109,BFALSE,BFALSE);} } 
{ /* Llib/unicode.scm 927 */
long BgL_arg1873z00_1926;unsigned char BgL_arg1874z00_1927;
BgL_arg1873z00_1926 = 
(BgL_wz00_1721+((long)1)); 
{ /* Llib/unicode.scm 927 */
long BgL_i4049z00_6553;
BgL_i4049z00_6553 = 
(BgL_rz00_1720+((long)1)); 
{ /* Llib/unicode.scm 927 */
long BgL_l4050z00_6554;
BgL_l4050z00_6554 = 
STRING_LENGTH(BgL_strz00_72); 
if(
BOUND_CHECK(BgL_i4049z00_6553, BgL_l4050z00_6554))
{ /* Llib/unicode.scm 927 */
BgL_arg1874z00_1927 = 
STRING_REF(BgL_strz00_72, BgL_i4049z00_6553); }  else 
{ 
obj_t BgL_auxz00_10121;
BgL_auxz00_10121 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)36730)), BGl_string4975z00zz__unicodez00, BgL_strz00_72, 
(int)(BgL_l4050z00_6554), 
(int)(BgL_i4049z00_6553)); 
FAILURE(BgL_auxz00_10121,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 927 */
long BgL_l4054z00_6558;
BgL_l4054z00_6558 = 
STRING_LENGTH(BgL_resz00_1718); 
if(
BOUND_CHECK(BgL_arg1873z00_1926, BgL_l4054z00_6558))
{ /* Llib/unicode.scm 927 */
STRING_SET(BgL_resz00_1718, BgL_arg1873z00_1926, BgL_arg1874z00_1927); }  else 
{ 
obj_t BgL_auxz00_10131;
BgL_auxz00_10131 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)36703)), BGl_string4995z00zz__unicodez00, BgL_resz00_1718, 
(int)(BgL_l4054z00_6558), 
(int)(BgL_arg1873z00_1926)); 
FAILURE(BgL_auxz00_10131,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 928 */
long BgL_arg1877z00_1929;unsigned char BgL_arg1878z00_1930;
BgL_arg1877z00_1929 = 
(BgL_wz00_1721+((long)2)); 
{ /* Llib/unicode.scm 928 */
long BgL_i4057z00_6561;
BgL_i4057z00_6561 = 
(BgL_rz00_1720+((long)2)); 
{ /* Llib/unicode.scm 928 */
long BgL_l4058z00_6562;
BgL_l4058z00_6562 = 
STRING_LENGTH(BgL_strz00_72); 
if(
BOUND_CHECK(BgL_i4057z00_6561, BgL_l4058z00_6562))
{ /* Llib/unicode.scm 928 */
BgL_arg1878z00_1930 = 
STRING_REF(BgL_strz00_72, BgL_i4057z00_6561); }  else 
{ 
obj_t BgL_auxz00_10143;
BgL_auxz00_10143 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)36795)), BGl_string4975z00zz__unicodez00, BgL_strz00_72, 
(int)(BgL_l4058z00_6562), 
(int)(BgL_i4057z00_6561)); 
FAILURE(BgL_auxz00_10143,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 928 */
long BgL_l4062z00_6566;
BgL_l4062z00_6566 = 
STRING_LENGTH(BgL_resz00_1718); 
if(
BOUND_CHECK(BgL_arg1877z00_1929, BgL_l4062z00_6566))
{ /* Llib/unicode.scm 928 */
STRING_SET(BgL_resz00_1718, BgL_arg1877z00_1929, BgL_arg1878z00_1930); }  else 
{ 
obj_t BgL_auxz00_10153;
BgL_auxz00_10153 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)36768)), BGl_string4995z00zz__unicodez00, BgL_resz00_1718, 
(int)(BgL_l4062z00_6566), 
(int)(BgL_arg1877z00_1929)); 
FAILURE(BgL_auxz00_10153,BFALSE,BFALSE);} } } 
{ 
bool_t BgL_asciiz00_10163;long BgL_wz00_10161;long BgL_rz00_10159;
BgL_rz00_10159 = 
(BgL_rz00_1720+((long)3)); 
BgL_wz00_10161 = 
(BgL_wz00_1721+((long)3)); 
BgL_asciiz00_10163 = ((bool_t)0); 
BgL_asciiz00_1722 = BgL_asciiz00_10163; 
BgL_wz00_1721 = BgL_wz00_10161; 
BgL_rz00_1720 = BgL_rz00_10159; 
goto BgL_zc3z04anonymousza31660ze3z87_1723;} }  else 
{ /* Llib/unicode.scm 922 */
BGl_stringzd2unicodezd2fixz12ze70zf5zz__unicodez00(BgL_resz00_1718, BgL_wz00_1721); 
{ 
bool_t BgL_asciiz00_10169;long BgL_wz00_10167;long BgL_rz00_10165;
BgL_rz00_10165 = 
(BgL_rz00_1720+((long)1)); 
BgL_wz00_10167 = 
(BgL_wz00_1721+((long)3)); 
BgL_asciiz00_10169 = ((bool_t)0); 
BgL_asciiz00_1722 = BgL_asciiz00_10169; 
BgL_wz00_1721 = BgL_wz00_10167; 
BgL_rz00_1720 = BgL_rz00_10165; 
goto BgL_zc3z04anonymousza31660ze3z87_1723;} } }  else 
{ /* Llib/unicode.scm 920 */
if(
(BgL_nz00_1728==((long)240)))
{ /* Llib/unicode.scm 935 */
bool_t BgL_test5606z00_10172;
if(
(BgL_rz00_1720<
(BgL_endz00_75-((long)3))))
{ /* Llib/unicode.scm 936 */
bool_t BgL_test5608z00_10176;
{ /* Llib/unicode.scm 770 */
long BgL_nz00_4565;
{ /* Llib/unicode.scm 770 */
unsigned char BgL_tmpz00_10177;
{ /* Llib/unicode.scm 936 */
long BgL_i4065z00_6569;
BgL_i4065z00_6569 = 
(BgL_rz00_1720+((long)1)); 
{ /* Llib/unicode.scm 936 */
long BgL_l4066z00_6570;
BgL_l4066z00_6570 = 
STRING_LENGTH(BgL_strz00_72); 
if(
BOUND_CHECK(BgL_i4065z00_6569, BgL_l4066z00_6570))
{ /* Llib/unicode.scm 936 */
BgL_tmpz00_10177 = 
STRING_REF(BgL_strz00_72, BgL_i4065z00_6569)
; }  else 
{ 
obj_t BgL_auxz00_10183;
BgL_auxz00_10183 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)37062)), BGl_string4975z00zz__unicodez00, BgL_strz00_72, 
(int)(BgL_l4066z00_6570), 
(int)(BgL_i4065z00_6569)); 
FAILURE(BgL_auxz00_10183,BFALSE,BFALSE);} } } 
BgL_nz00_4565 = 
(BgL_tmpz00_10177); } 
if(
(BgL_nz00_4565>=((long)144)))
{ /* Llib/unicode.scm 771 */
BgL_test5608z00_10176 = 
(BgL_nz00_4565<=((long)191))
; }  else 
{ /* Llib/unicode.scm 771 */
BgL_test5608z00_10176 = ((bool_t)0)
; } } 
if(BgL_test5608z00_10176)
{ /* Llib/unicode.scm 937 */
bool_t BgL_test5611z00_10193;
{ /* Llib/unicode.scm 770 */
long BgL_nz00_4578;
{ /* Llib/unicode.scm 770 */
unsigned char BgL_tmpz00_10194;
{ /* Llib/unicode.scm 937 */
long BgL_i4069z00_6573;
BgL_i4069z00_6573 = 
(BgL_rz00_1720+((long)2)); 
{ /* Llib/unicode.scm 937 */
long BgL_l4070z00_6574;
BgL_l4070z00_6574 = 
STRING_LENGTH(BgL_strz00_72); 
if(
BOUND_CHECK(BgL_i4069z00_6573, BgL_l4070z00_6574))
{ /* Llib/unicode.scm 937 */
BgL_tmpz00_10194 = 
STRING_REF(BgL_strz00_72, BgL_i4069z00_6573)
; }  else 
{ 
obj_t BgL_auxz00_10200;
BgL_auxz00_10200 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)37116)), BGl_string4975z00zz__unicodez00, BgL_strz00_72, 
(int)(BgL_l4070z00_6574), 
(int)(BgL_i4069z00_6573)); 
FAILURE(BgL_auxz00_10200,BFALSE,BFALSE);} } } 
BgL_nz00_4578 = 
(BgL_tmpz00_10194); } 
if(
(BgL_nz00_4578>=((long)128)))
{ /* Llib/unicode.scm 771 */
BgL_test5611z00_10193 = 
(BgL_nz00_4578<=((long)191))
; }  else 
{ /* Llib/unicode.scm 771 */
BgL_test5611z00_10193 = ((bool_t)0)
; } } 
if(BgL_test5611z00_10193)
{ /* Llib/unicode.scm 770 */
long BgL_nz00_4591;
{ /* Llib/unicode.scm 770 */
unsigned char BgL_tmpz00_10210;
{ /* Llib/unicode.scm 938 */
long BgL_i4073z00_6577;
BgL_i4073z00_6577 = 
(BgL_rz00_1720+((long)3)); 
{ /* Llib/unicode.scm 938 */
long BgL_l4074z00_6578;
BgL_l4074z00_6578 = 
STRING_LENGTH(BgL_strz00_72); 
if(
BOUND_CHECK(BgL_i4073z00_6577, BgL_l4074z00_6578))
{ /* Llib/unicode.scm 938 */
BgL_tmpz00_10210 = 
STRING_REF(BgL_strz00_72, BgL_i4073z00_6577)
; }  else 
{ 
obj_t BgL_auxz00_10216;
BgL_auxz00_10216 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)37170)), BGl_string4975z00zz__unicodez00, BgL_strz00_72, 
(int)(BgL_l4074z00_6578), 
(int)(BgL_i4073z00_6577)); 
FAILURE(BgL_auxz00_10216,BFALSE,BFALSE);} } } 
BgL_nz00_4591 = 
(BgL_tmpz00_10210); } 
if(
(BgL_nz00_4591>=((long)128)))
{ /* Llib/unicode.scm 771 */
BgL_test5606z00_10172 = 
(BgL_nz00_4591<=((long)191))
; }  else 
{ /* Llib/unicode.scm 771 */
BgL_test5606z00_10172 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 937 */
BgL_test5606z00_10172 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 936 */
BgL_test5606z00_10172 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 935 */
BgL_test5606z00_10172 = ((bool_t)0)
; } 
if(BgL_test5606z00_10172)
{ /* Llib/unicode.scm 935 */
{ /* Llib/unicode.scm 940 */
long BgL_l4078z00_6582;
BgL_l4078z00_6582 = 
STRING_LENGTH(BgL_resz00_1718); 
if(
BOUND_CHECK(BgL_wz00_1721, BgL_l4078z00_6582))
{ /* Llib/unicode.scm 940 */
STRING_SET(BgL_resz00_1718, BgL_wz00_1721, BgL_cz00_1727); }  else 
{ 
obj_t BgL_auxz00_10230;
BgL_auxz00_10230 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)37233)), BGl_string4995z00zz__unicodez00, BgL_resz00_1718, 
(int)(BgL_l4078z00_6582), 
(int)(BgL_wz00_1721)); 
FAILURE(BgL_auxz00_10230,BFALSE,BFALSE);} } 
{ /* Llib/unicode.scm 941 */
long BgL_arg1909z00_1960;unsigned char BgL_arg1910z00_1961;
BgL_arg1909z00_1960 = 
(BgL_wz00_1721+((long)1)); 
{ /* Llib/unicode.scm 941 */
long BgL_i4081z00_6585;
BgL_i4081z00_6585 = 
(BgL_rz00_1720+((long)1)); 
{ /* Llib/unicode.scm 941 */
long BgL_l4082z00_6586;
BgL_l4082z00_6586 = 
STRING_LENGTH(BgL_strz00_72); 
if(
BOUND_CHECK(BgL_i4081z00_6585, BgL_l4082z00_6586))
{ /* Llib/unicode.scm 941 */
BgL_arg1910z00_1961 = 
STRING_REF(BgL_strz00_72, BgL_i4081z00_6585); }  else 
{ 
obj_t BgL_auxz00_10242;
BgL_auxz00_10242 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)37292)), BGl_string4975z00zz__unicodez00, BgL_strz00_72, 
(int)(BgL_l4082z00_6586), 
(int)(BgL_i4081z00_6585)); 
FAILURE(BgL_auxz00_10242,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 941 */
long BgL_l4086z00_6590;
BgL_l4086z00_6590 = 
STRING_LENGTH(BgL_resz00_1718); 
if(
BOUND_CHECK(BgL_arg1909z00_1960, BgL_l4086z00_6590))
{ /* Llib/unicode.scm 941 */
STRING_SET(BgL_resz00_1718, BgL_arg1909z00_1960, BgL_arg1910z00_1961); }  else 
{ 
obj_t BgL_auxz00_10252;
BgL_auxz00_10252 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)37265)), BGl_string4995z00zz__unicodez00, BgL_resz00_1718, 
(int)(BgL_l4086z00_6590), 
(int)(BgL_arg1909z00_1960)); 
FAILURE(BgL_auxz00_10252,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 942 */
long BgL_arg1912z00_1963;unsigned char BgL_arg1913z00_1964;
BgL_arg1912z00_1963 = 
(BgL_wz00_1721+((long)2)); 
{ /* Llib/unicode.scm 942 */
long BgL_i4089z00_6593;
BgL_i4089z00_6593 = 
(BgL_rz00_1720+((long)2)); 
{ /* Llib/unicode.scm 942 */
long BgL_l4090z00_6594;
BgL_l4090z00_6594 = 
STRING_LENGTH(BgL_strz00_72); 
if(
BOUND_CHECK(BgL_i4089z00_6593, BgL_l4090z00_6594))
{ /* Llib/unicode.scm 942 */
BgL_arg1913z00_1964 = 
STRING_REF(BgL_strz00_72, BgL_i4089z00_6593); }  else 
{ 
obj_t BgL_auxz00_10264;
BgL_auxz00_10264 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)37357)), BGl_string4975z00zz__unicodez00, BgL_strz00_72, 
(int)(BgL_l4090z00_6594), 
(int)(BgL_i4089z00_6593)); 
FAILURE(BgL_auxz00_10264,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 942 */
long BgL_l4094z00_6598;
BgL_l4094z00_6598 = 
STRING_LENGTH(BgL_resz00_1718); 
if(
BOUND_CHECK(BgL_arg1912z00_1963, BgL_l4094z00_6598))
{ /* Llib/unicode.scm 942 */
STRING_SET(BgL_resz00_1718, BgL_arg1912z00_1963, BgL_arg1913z00_1964); }  else 
{ 
obj_t BgL_auxz00_10274;
BgL_auxz00_10274 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)37330)), BGl_string4995z00zz__unicodez00, BgL_resz00_1718, 
(int)(BgL_l4094z00_6598), 
(int)(BgL_arg1912z00_1963)); 
FAILURE(BgL_auxz00_10274,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 943 */
long BgL_arg1915z00_1966;unsigned char BgL_arg1916z00_1967;
BgL_arg1915z00_1966 = 
(BgL_wz00_1721+((long)3)); 
{ /* Llib/unicode.scm 943 */
long BgL_i4097z00_6601;
BgL_i4097z00_6601 = 
(BgL_rz00_1720+((long)3)); 
{ /* Llib/unicode.scm 943 */
long BgL_l4098z00_6602;
BgL_l4098z00_6602 = 
STRING_LENGTH(BgL_strz00_72); 
if(
BOUND_CHECK(BgL_i4097z00_6601, BgL_l4098z00_6602))
{ /* Llib/unicode.scm 943 */
BgL_arg1916z00_1967 = 
STRING_REF(BgL_strz00_72, BgL_i4097z00_6601); }  else 
{ 
obj_t BgL_auxz00_10286;
BgL_auxz00_10286 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)37422)), BGl_string4975z00zz__unicodez00, BgL_strz00_72, 
(int)(BgL_l4098z00_6602), 
(int)(BgL_i4097z00_6601)); 
FAILURE(BgL_auxz00_10286,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 943 */
long BgL_l4102z00_6606;
BgL_l4102z00_6606 = 
STRING_LENGTH(BgL_resz00_1718); 
if(
BOUND_CHECK(BgL_arg1915z00_1966, BgL_l4102z00_6606))
{ /* Llib/unicode.scm 943 */
STRING_SET(BgL_resz00_1718, BgL_arg1915z00_1966, BgL_arg1916z00_1967); }  else 
{ 
obj_t BgL_auxz00_10296;
BgL_auxz00_10296 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)37395)), BGl_string4995z00zz__unicodez00, BgL_resz00_1718, 
(int)(BgL_l4102z00_6606), 
(int)(BgL_arg1915z00_1966)); 
FAILURE(BgL_auxz00_10296,BFALSE,BFALSE);} } } 
{ 
bool_t BgL_asciiz00_10306;long BgL_wz00_10304;long BgL_rz00_10302;
BgL_rz00_10302 = 
(BgL_rz00_1720+((long)4)); 
BgL_wz00_10304 = 
(BgL_wz00_1721+((long)4)); 
BgL_asciiz00_10306 = ((bool_t)0); 
BgL_asciiz00_1722 = BgL_asciiz00_10306; 
BgL_wz00_1721 = BgL_wz00_10304; 
BgL_rz00_1720 = BgL_rz00_10302; 
goto BgL_zc3z04anonymousza31660ze3z87_1723;} }  else 
{ /* Llib/unicode.scm 935 */
BGl_stringzd2unicodezd2fixz12ze70zf5zz__unicodez00(BgL_resz00_1718, BgL_wz00_1721); 
{ 
bool_t BgL_asciiz00_10312;long BgL_wz00_10310;long BgL_rz00_10308;
BgL_rz00_10308 = 
(BgL_rz00_1720+((long)1)); 
BgL_wz00_10310 = 
(BgL_wz00_1721+((long)3)); 
BgL_asciiz00_10312 = ((bool_t)0); 
BgL_asciiz00_1722 = BgL_asciiz00_10312; 
BgL_wz00_1721 = BgL_wz00_10310; 
BgL_rz00_1720 = BgL_rz00_10308; 
goto BgL_zc3z04anonymousza31660ze3z87_1723;} } }  else 
{ /* Llib/unicode.scm 948 */
bool_t BgL_test5623z00_10313;
if(
(BgL_nz00_1728==((long)244)))
{ /* Llib/unicode.scm 948 */
BgL_test5623z00_10313 = ((bool_t)1)
; }  else 
{ /* Llib/unicode.scm 949 */
bool_t BgL_test5625z00_10316;
{ /* Llib/unicode.scm 949 */
bool_t BgL__ortest_1051z00_2183;
BgL__ortest_1051z00_2183 = 
(BgL_nz00_1728==((long)248)); 
if(BgL__ortest_1051z00_2183)
{ /* Llib/unicode.scm 949 */
BgL_test5625z00_10316 = BgL__ortest_1051z00_2183
; }  else 
{ /* Llib/unicode.scm 949 */
BgL_test5625z00_10316 = 
(BgL_nz00_1728==((long)252))
; } } 
if(BgL_test5625z00_10316)
{ /* Llib/unicode.scm 949 */
if(BgL_strictz00_73)
{ /* Llib/unicode.scm 949 */
BgL_test5623z00_10313 = ((bool_t)0)
; }  else 
{ /* Llib/unicode.scm 949 */
BgL_test5623z00_10313 = ((bool_t)1)
; } }  else 
{ /* Llib/unicode.scm 949 */
BgL_test5623z00_10313 = ((bool_t)0)
; } } 
if(BgL_test5623z00_10313)
{ /* Llib/unicode.scm 951 */
bool_t BgL_test5628z00_10321;
if(
(BgL_rz00_1720<
(BgL_endz00_75-((long)3))))
{ /* Llib/unicode.scm 952 */
bool_t BgL_test5630z00_10325;
{ /* Llib/unicode.scm 770 */
long BgL_nz00_4656;
{ /* Llib/unicode.scm 770 */
unsigned char BgL_tmpz00_10326;
{ /* Llib/unicode.scm 952 */
long BgL_i4105z00_6609;
BgL_i4105z00_6609 = 
(BgL_rz00_1720+((long)1)); 
{ /* Llib/unicode.scm 952 */
long BgL_l4106z00_6610;
BgL_l4106z00_6610 = 
STRING_LENGTH(BgL_strz00_72); 
if(
BOUND_CHECK(BgL_i4105z00_6609, BgL_l4106z00_6610))
{ /* Llib/unicode.scm 952 */
BgL_tmpz00_10326 = 
STRING_REF(BgL_strz00_72, BgL_i4105z00_6609)
; }  else 
{ 
obj_t BgL_auxz00_10332;
BgL_auxz00_10332 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)37751)), BGl_string4975z00zz__unicodez00, BgL_strz00_72, 
(int)(BgL_l4106z00_6610), 
(int)(BgL_i4105z00_6609)); 
FAILURE(BgL_auxz00_10332,BFALSE,BFALSE);} } } 
BgL_nz00_4656 = 
(BgL_tmpz00_10326); } 
if(
(BgL_nz00_4656>=((long)128)))
{ /* Llib/unicode.scm 771 */
BgL_test5630z00_10325 = 
(BgL_nz00_4656<=((long)191))
; }  else 
{ /* Llib/unicode.scm 771 */
BgL_test5630z00_10325 = ((bool_t)0)
; } } 
if(BgL_test5630z00_10325)
{ /* Llib/unicode.scm 953 */
bool_t BgL_test5633z00_10342;
{ /* Llib/unicode.scm 770 */
long BgL_nz00_4669;
{ /* Llib/unicode.scm 770 */
unsigned char BgL_tmpz00_10343;
{ /* Llib/unicode.scm 953 */
long BgL_i4109z00_6613;
BgL_i4109z00_6613 = 
(BgL_rz00_1720+((long)2)); 
{ /* Llib/unicode.scm 953 */
long BgL_l4110z00_6614;
BgL_l4110z00_6614 = 
STRING_LENGTH(BgL_strz00_72); 
if(
BOUND_CHECK(BgL_i4109z00_6613, BgL_l4110z00_6614))
{ /* Llib/unicode.scm 953 */
BgL_tmpz00_10343 = 
STRING_REF(BgL_strz00_72, BgL_i4109z00_6613)
; }  else 
{ 
obj_t BgL_auxz00_10349;
BgL_auxz00_10349 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)37805)), BGl_string4975z00zz__unicodez00, BgL_strz00_72, 
(int)(BgL_l4110z00_6614), 
(int)(BgL_i4109z00_6613)); 
FAILURE(BgL_auxz00_10349,BFALSE,BFALSE);} } } 
BgL_nz00_4669 = 
(BgL_tmpz00_10343); } 
if(
(BgL_nz00_4669>=((long)128)))
{ /* Llib/unicode.scm 771 */
BgL_test5633z00_10342 = 
(BgL_nz00_4669<=((long)191))
; }  else 
{ /* Llib/unicode.scm 771 */
BgL_test5633z00_10342 = ((bool_t)0)
; } } 
if(BgL_test5633z00_10342)
{ /* Llib/unicode.scm 770 */
long BgL_nz00_4682;
{ /* Llib/unicode.scm 770 */
unsigned char BgL_tmpz00_10359;
{ /* Llib/unicode.scm 954 */
long BgL_i4113z00_6617;
BgL_i4113z00_6617 = 
(BgL_rz00_1720+((long)3)); 
{ /* Llib/unicode.scm 954 */
long BgL_l4114z00_6618;
BgL_l4114z00_6618 = 
STRING_LENGTH(BgL_strz00_72); 
if(
BOUND_CHECK(BgL_i4113z00_6617, BgL_l4114z00_6618))
{ /* Llib/unicode.scm 954 */
BgL_tmpz00_10359 = 
STRING_REF(BgL_strz00_72, BgL_i4113z00_6617)
; }  else 
{ 
obj_t BgL_auxz00_10365;
BgL_auxz00_10365 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)37859)), BGl_string4975z00zz__unicodez00, BgL_strz00_72, 
(int)(BgL_l4114z00_6618), 
(int)(BgL_i4113z00_6617)); 
FAILURE(BgL_auxz00_10365,BFALSE,BFALSE);} } } 
BgL_nz00_4682 = 
(BgL_tmpz00_10359); } 
if(
(BgL_nz00_4682>=((long)128)))
{ /* Llib/unicode.scm 771 */
BgL_test5628z00_10321 = 
(BgL_nz00_4682<=((long)191))
; }  else 
{ /* Llib/unicode.scm 771 */
BgL_test5628z00_10321 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 953 */
BgL_test5628z00_10321 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 952 */
BgL_test5628z00_10321 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 951 */
BgL_test5628z00_10321 = ((bool_t)0)
; } 
if(BgL_test5628z00_10321)
{ /* Llib/unicode.scm 951 */
{ /* Llib/unicode.scm 956 */
long BgL_l4118z00_6622;
BgL_l4118z00_6622 = 
STRING_LENGTH(BgL_resz00_1718); 
if(
BOUND_CHECK(BgL_wz00_1721, BgL_l4118z00_6622))
{ /* Llib/unicode.scm 956 */
STRING_SET(BgL_resz00_1718, BgL_wz00_1721, BgL_cz00_1727); }  else 
{ 
obj_t BgL_auxz00_10379;
BgL_auxz00_10379 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)37922)), BGl_string4995z00zz__unicodez00, BgL_resz00_1718, 
(int)(BgL_l4118z00_6622), 
(int)(BgL_wz00_1721)); 
FAILURE(BgL_auxz00_10379,BFALSE,BFALSE);} } 
{ /* Llib/unicode.scm 957 */
long BgL_arg1948z00_2003;unsigned char BgL_arg1949z00_2004;
BgL_arg1948z00_2003 = 
(BgL_wz00_1721+((long)1)); 
{ /* Llib/unicode.scm 957 */
long BgL_i4121z00_6625;
BgL_i4121z00_6625 = 
(BgL_rz00_1720+((long)1)); 
{ /* Llib/unicode.scm 957 */
long BgL_l4122z00_6626;
BgL_l4122z00_6626 = 
STRING_LENGTH(BgL_strz00_72); 
if(
BOUND_CHECK(BgL_i4121z00_6625, BgL_l4122z00_6626))
{ /* Llib/unicode.scm 957 */
BgL_arg1949z00_2004 = 
STRING_REF(BgL_strz00_72, BgL_i4121z00_6625); }  else 
{ 
obj_t BgL_auxz00_10391;
BgL_auxz00_10391 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)37981)), BGl_string4975z00zz__unicodez00, BgL_strz00_72, 
(int)(BgL_l4122z00_6626), 
(int)(BgL_i4121z00_6625)); 
FAILURE(BgL_auxz00_10391,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 957 */
long BgL_l4126z00_6630;
BgL_l4126z00_6630 = 
STRING_LENGTH(BgL_resz00_1718); 
if(
BOUND_CHECK(BgL_arg1948z00_2003, BgL_l4126z00_6630))
{ /* Llib/unicode.scm 957 */
STRING_SET(BgL_resz00_1718, BgL_arg1948z00_2003, BgL_arg1949z00_2004); }  else 
{ 
obj_t BgL_auxz00_10401;
BgL_auxz00_10401 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)37954)), BGl_string4995z00zz__unicodez00, BgL_resz00_1718, 
(int)(BgL_l4126z00_6630), 
(int)(BgL_arg1948z00_2003)); 
FAILURE(BgL_auxz00_10401,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 958 */
long BgL_arg1952z00_2006;unsigned char BgL_arg1953z00_2007;
BgL_arg1952z00_2006 = 
(BgL_wz00_1721+((long)2)); 
{ /* Llib/unicode.scm 958 */
long BgL_i4129z00_6633;
BgL_i4129z00_6633 = 
(BgL_rz00_1720+((long)2)); 
{ /* Llib/unicode.scm 958 */
long BgL_l4130z00_6634;
BgL_l4130z00_6634 = 
STRING_LENGTH(BgL_strz00_72); 
if(
BOUND_CHECK(BgL_i4129z00_6633, BgL_l4130z00_6634))
{ /* Llib/unicode.scm 958 */
BgL_arg1953z00_2007 = 
STRING_REF(BgL_strz00_72, BgL_i4129z00_6633); }  else 
{ 
obj_t BgL_auxz00_10413;
BgL_auxz00_10413 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)38046)), BGl_string4975z00zz__unicodez00, BgL_strz00_72, 
(int)(BgL_l4130z00_6634), 
(int)(BgL_i4129z00_6633)); 
FAILURE(BgL_auxz00_10413,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 958 */
long BgL_l4134z00_6638;
BgL_l4134z00_6638 = 
STRING_LENGTH(BgL_resz00_1718); 
if(
BOUND_CHECK(BgL_arg1952z00_2006, BgL_l4134z00_6638))
{ /* Llib/unicode.scm 958 */
STRING_SET(BgL_resz00_1718, BgL_arg1952z00_2006, BgL_arg1953z00_2007); }  else 
{ 
obj_t BgL_auxz00_10423;
BgL_auxz00_10423 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)38019)), BGl_string4995z00zz__unicodez00, BgL_resz00_1718, 
(int)(BgL_l4134z00_6638), 
(int)(BgL_arg1952z00_2006)); 
FAILURE(BgL_auxz00_10423,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 959 */
long BgL_arg1955z00_2009;unsigned char BgL_arg1956z00_2010;
BgL_arg1955z00_2009 = 
(BgL_wz00_1721+((long)3)); 
{ /* Llib/unicode.scm 959 */
long BgL_i4137z00_6641;
BgL_i4137z00_6641 = 
(BgL_rz00_1720+((long)3)); 
{ /* Llib/unicode.scm 959 */
long BgL_l4138z00_6642;
BgL_l4138z00_6642 = 
STRING_LENGTH(BgL_strz00_72); 
if(
BOUND_CHECK(BgL_i4137z00_6641, BgL_l4138z00_6642))
{ /* Llib/unicode.scm 959 */
BgL_arg1956z00_2010 = 
STRING_REF(BgL_strz00_72, BgL_i4137z00_6641); }  else 
{ 
obj_t BgL_auxz00_10435;
BgL_auxz00_10435 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)38111)), BGl_string4975z00zz__unicodez00, BgL_strz00_72, 
(int)(BgL_l4138z00_6642), 
(int)(BgL_i4137z00_6641)); 
FAILURE(BgL_auxz00_10435,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 959 */
long BgL_l4142z00_6646;
BgL_l4142z00_6646 = 
STRING_LENGTH(BgL_resz00_1718); 
if(
BOUND_CHECK(BgL_arg1955z00_2009, BgL_l4142z00_6646))
{ /* Llib/unicode.scm 959 */
STRING_SET(BgL_resz00_1718, BgL_arg1955z00_2009, BgL_arg1956z00_2010); }  else 
{ 
obj_t BgL_auxz00_10445;
BgL_auxz00_10445 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)38084)), BGl_string4995z00zz__unicodez00, BgL_resz00_1718, 
(int)(BgL_l4142z00_6646), 
(int)(BgL_arg1955z00_2009)); 
FAILURE(BgL_auxz00_10445,BFALSE,BFALSE);} } } 
{ 
bool_t BgL_asciiz00_10455;long BgL_wz00_10453;long BgL_rz00_10451;
BgL_rz00_10451 = 
(BgL_rz00_1720+((long)4)); 
BgL_wz00_10453 = 
(BgL_wz00_1721+((long)4)); 
BgL_asciiz00_10455 = ((bool_t)0); 
BgL_asciiz00_1722 = BgL_asciiz00_10455; 
BgL_wz00_1721 = BgL_wz00_10453; 
BgL_rz00_1720 = BgL_rz00_10451; 
goto BgL_zc3z04anonymousza31660ze3z87_1723;} }  else 
{ /* Llib/unicode.scm 951 */
BGl_stringzd2unicodezd2fixz12ze70zf5zz__unicodez00(BgL_resz00_1718, BgL_wz00_1721); 
{ 
bool_t BgL_asciiz00_10461;long BgL_wz00_10459;long BgL_rz00_10457;
BgL_rz00_10457 = 
(BgL_rz00_1720+((long)1)); 
BgL_wz00_10459 = 
(BgL_wz00_1721+((long)3)); 
BgL_asciiz00_10461 = ((bool_t)0); 
BgL_asciiz00_1722 = BgL_asciiz00_10461; 
BgL_wz00_1721 = BgL_wz00_10459; 
BgL_rz00_1720 = BgL_rz00_10457; 
goto BgL_zc3z04anonymousza31660ze3z87_1723;} } }  else 
{ /* Llib/unicode.scm 948 */
if(
(BgL_nz00_1728<=((long)247)))
{ /* Llib/unicode.scm 966 */
bool_t BgL_test5646z00_10464;
if(
(BgL_rz00_1720<
(BgL_endz00_75-((long)3))))
{ /* Llib/unicode.scm 967 */
bool_t BgL_test5648z00_10468;
{ /* Llib/unicode.scm 770 */
long BgL_nz00_4743;
{ /* Llib/unicode.scm 770 */
unsigned char BgL_tmpz00_10469;
{ /* Llib/unicode.scm 967 */
long BgL_i4145z00_6649;
BgL_i4145z00_6649 = 
(BgL_rz00_1720+((long)1)); 
{ /* Llib/unicode.scm 967 */
long BgL_l4146z00_6650;
BgL_l4146z00_6650 = 
STRING_LENGTH(BgL_strz00_72); 
if(
BOUND_CHECK(BgL_i4145z00_6649, BgL_l4146z00_6650))
{ /* Llib/unicode.scm 967 */
BgL_tmpz00_10469 = 
STRING_REF(BgL_strz00_72, BgL_i4145z00_6649)
; }  else 
{ 
obj_t BgL_auxz00_10475;
BgL_auxz00_10475 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)38370)), BGl_string4975z00zz__unicodez00, BgL_strz00_72, 
(int)(BgL_l4146z00_6650), 
(int)(BgL_i4145z00_6649)); 
FAILURE(BgL_auxz00_10475,BFALSE,BFALSE);} } } 
BgL_nz00_4743 = 
(BgL_tmpz00_10469); } 
if(
(BgL_nz00_4743>=((long)128)))
{ /* Llib/unicode.scm 771 */
BgL_test5648z00_10468 = 
(BgL_nz00_4743<=((long)191))
; }  else 
{ /* Llib/unicode.scm 771 */
BgL_test5648z00_10468 = ((bool_t)0)
; } } 
if(BgL_test5648z00_10468)
{ /* Llib/unicode.scm 968 */
bool_t BgL_test5651z00_10485;
{ /* Llib/unicode.scm 770 */
long BgL_nz00_4756;
{ /* Llib/unicode.scm 770 */
unsigned char BgL_tmpz00_10486;
{ /* Llib/unicode.scm 968 */
long BgL_i4149z00_6653;
BgL_i4149z00_6653 = 
(BgL_rz00_1720+((long)2)); 
{ /* Llib/unicode.scm 968 */
long BgL_l4150z00_6654;
BgL_l4150z00_6654 = 
STRING_LENGTH(BgL_strz00_72); 
if(
BOUND_CHECK(BgL_i4149z00_6653, BgL_l4150z00_6654))
{ /* Llib/unicode.scm 968 */
BgL_tmpz00_10486 = 
STRING_REF(BgL_strz00_72, BgL_i4149z00_6653)
; }  else 
{ 
obj_t BgL_auxz00_10492;
BgL_auxz00_10492 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)38424)), BGl_string4975z00zz__unicodez00, BgL_strz00_72, 
(int)(BgL_l4150z00_6654), 
(int)(BgL_i4149z00_6653)); 
FAILURE(BgL_auxz00_10492,BFALSE,BFALSE);} } } 
BgL_nz00_4756 = 
(BgL_tmpz00_10486); } 
if(
(BgL_nz00_4756>=((long)128)))
{ /* Llib/unicode.scm 771 */
BgL_test5651z00_10485 = 
(BgL_nz00_4756<=((long)191))
; }  else 
{ /* Llib/unicode.scm 771 */
BgL_test5651z00_10485 = ((bool_t)0)
; } } 
if(BgL_test5651z00_10485)
{ /* Llib/unicode.scm 770 */
long BgL_nz00_4769;
{ /* Llib/unicode.scm 770 */
unsigned char BgL_tmpz00_10502;
{ /* Llib/unicode.scm 969 */
long BgL_i4153z00_6657;
BgL_i4153z00_6657 = 
(BgL_rz00_1720+((long)3)); 
{ /* Llib/unicode.scm 969 */
long BgL_l4154z00_6658;
BgL_l4154z00_6658 = 
STRING_LENGTH(BgL_strz00_72); 
if(
BOUND_CHECK(BgL_i4153z00_6657, BgL_l4154z00_6658))
{ /* Llib/unicode.scm 969 */
BgL_tmpz00_10502 = 
STRING_REF(BgL_strz00_72, BgL_i4153z00_6657)
; }  else 
{ 
obj_t BgL_auxz00_10508;
BgL_auxz00_10508 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)38478)), BGl_string4975z00zz__unicodez00, BgL_strz00_72, 
(int)(BgL_l4154z00_6658), 
(int)(BgL_i4153z00_6657)); 
FAILURE(BgL_auxz00_10508,BFALSE,BFALSE);} } } 
BgL_nz00_4769 = 
(BgL_tmpz00_10502); } 
if(
(BgL_nz00_4769>=((long)128)))
{ /* Llib/unicode.scm 771 */
BgL_test5646z00_10464 = 
(BgL_nz00_4769<=((long)191))
; }  else 
{ /* Llib/unicode.scm 771 */
BgL_test5646z00_10464 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 968 */
BgL_test5646z00_10464 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 967 */
BgL_test5646z00_10464 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 966 */
BgL_test5646z00_10464 = ((bool_t)0)
; } 
if(BgL_test5646z00_10464)
{ /* Llib/unicode.scm 966 */
{ /* Llib/unicode.scm 971 */
long BgL_l4158z00_6662;
BgL_l4158z00_6662 = 
STRING_LENGTH(BgL_resz00_1718); 
if(
BOUND_CHECK(BgL_wz00_1721, BgL_l4158z00_6662))
{ /* Llib/unicode.scm 971 */
STRING_SET(BgL_resz00_1718, BgL_wz00_1721, BgL_cz00_1727); }  else 
{ 
obj_t BgL_auxz00_10522;
BgL_auxz00_10522 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)38541)), BGl_string4995z00zz__unicodez00, BgL_resz00_1718, 
(int)(BgL_l4158z00_6662), 
(int)(BgL_wz00_1721)); 
FAILURE(BgL_auxz00_10522,BFALSE,BFALSE);} } 
{ /* Llib/unicode.scm 972 */
long BgL_arg1987z00_2043;unsigned char BgL_arg1988z00_2044;
BgL_arg1987z00_2043 = 
(BgL_wz00_1721+((long)1)); 
{ /* Llib/unicode.scm 972 */
long BgL_i4161z00_6665;
BgL_i4161z00_6665 = 
(BgL_rz00_1720+((long)1)); 
{ /* Llib/unicode.scm 972 */
long BgL_l4162z00_6666;
BgL_l4162z00_6666 = 
STRING_LENGTH(BgL_strz00_72); 
if(
BOUND_CHECK(BgL_i4161z00_6665, BgL_l4162z00_6666))
{ /* Llib/unicode.scm 972 */
BgL_arg1988z00_2044 = 
STRING_REF(BgL_strz00_72, BgL_i4161z00_6665); }  else 
{ 
obj_t BgL_auxz00_10534;
BgL_auxz00_10534 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)38600)), BGl_string4975z00zz__unicodez00, BgL_strz00_72, 
(int)(BgL_l4162z00_6666), 
(int)(BgL_i4161z00_6665)); 
FAILURE(BgL_auxz00_10534,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 972 */
long BgL_l4166z00_6670;
BgL_l4166z00_6670 = 
STRING_LENGTH(BgL_resz00_1718); 
if(
BOUND_CHECK(BgL_arg1987z00_2043, BgL_l4166z00_6670))
{ /* Llib/unicode.scm 972 */
STRING_SET(BgL_resz00_1718, BgL_arg1987z00_2043, BgL_arg1988z00_2044); }  else 
{ 
obj_t BgL_auxz00_10544;
BgL_auxz00_10544 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)38573)), BGl_string4995z00zz__unicodez00, BgL_resz00_1718, 
(int)(BgL_l4166z00_6670), 
(int)(BgL_arg1987z00_2043)); 
FAILURE(BgL_auxz00_10544,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 973 */
long BgL_arg1990z00_2046;unsigned char BgL_arg1991z00_2047;
BgL_arg1990z00_2046 = 
(BgL_wz00_1721+((long)2)); 
{ /* Llib/unicode.scm 973 */
long BgL_i4169z00_6673;
BgL_i4169z00_6673 = 
(BgL_rz00_1720+((long)2)); 
{ /* Llib/unicode.scm 973 */
long BgL_l4170z00_6674;
BgL_l4170z00_6674 = 
STRING_LENGTH(BgL_strz00_72); 
if(
BOUND_CHECK(BgL_i4169z00_6673, BgL_l4170z00_6674))
{ /* Llib/unicode.scm 973 */
BgL_arg1991z00_2047 = 
STRING_REF(BgL_strz00_72, BgL_i4169z00_6673); }  else 
{ 
obj_t BgL_auxz00_10556;
BgL_auxz00_10556 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)38665)), BGl_string4975z00zz__unicodez00, BgL_strz00_72, 
(int)(BgL_l4170z00_6674), 
(int)(BgL_i4169z00_6673)); 
FAILURE(BgL_auxz00_10556,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 973 */
long BgL_l4174z00_6678;
BgL_l4174z00_6678 = 
STRING_LENGTH(BgL_resz00_1718); 
if(
BOUND_CHECK(BgL_arg1990z00_2046, BgL_l4174z00_6678))
{ /* Llib/unicode.scm 973 */
STRING_SET(BgL_resz00_1718, BgL_arg1990z00_2046, BgL_arg1991z00_2047); }  else 
{ 
obj_t BgL_auxz00_10566;
BgL_auxz00_10566 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)38638)), BGl_string4995z00zz__unicodez00, BgL_resz00_1718, 
(int)(BgL_l4174z00_6678), 
(int)(BgL_arg1990z00_2046)); 
FAILURE(BgL_auxz00_10566,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 974 */
long BgL_arg1993z00_2049;unsigned char BgL_arg1995z00_2050;
BgL_arg1993z00_2049 = 
(BgL_wz00_1721+((long)3)); 
{ /* Llib/unicode.scm 974 */
long BgL_i4177z00_6681;
BgL_i4177z00_6681 = 
(BgL_rz00_1720+((long)3)); 
{ /* Llib/unicode.scm 974 */
long BgL_l4178z00_6682;
BgL_l4178z00_6682 = 
STRING_LENGTH(BgL_strz00_72); 
if(
BOUND_CHECK(BgL_i4177z00_6681, BgL_l4178z00_6682))
{ /* Llib/unicode.scm 974 */
BgL_arg1995z00_2050 = 
STRING_REF(BgL_strz00_72, BgL_i4177z00_6681); }  else 
{ 
obj_t BgL_auxz00_10578;
BgL_auxz00_10578 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)38730)), BGl_string4975z00zz__unicodez00, BgL_strz00_72, 
(int)(BgL_l4178z00_6682), 
(int)(BgL_i4177z00_6681)); 
FAILURE(BgL_auxz00_10578,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 974 */
long BgL_l4182z00_6686;
BgL_l4182z00_6686 = 
STRING_LENGTH(BgL_resz00_1718); 
if(
BOUND_CHECK(BgL_arg1993z00_2049, BgL_l4182z00_6686))
{ /* Llib/unicode.scm 974 */
STRING_SET(BgL_resz00_1718, BgL_arg1993z00_2049, BgL_arg1995z00_2050); }  else 
{ 
obj_t BgL_auxz00_10588;
BgL_auxz00_10588 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)38703)), BGl_string4995z00zz__unicodez00, BgL_resz00_1718, 
(int)(BgL_l4182z00_6686), 
(int)(BgL_arg1993z00_2049)); 
FAILURE(BgL_auxz00_10588,BFALSE,BFALSE);} } } 
{ 
bool_t BgL_asciiz00_10598;long BgL_wz00_10596;long BgL_rz00_10594;
BgL_rz00_10594 = 
(BgL_rz00_1720+((long)4)); 
BgL_wz00_10596 = 
(BgL_wz00_1721+((long)4)); 
BgL_asciiz00_10598 = ((bool_t)0); 
BgL_asciiz00_1722 = BgL_asciiz00_10598; 
BgL_wz00_1721 = BgL_wz00_10596; 
BgL_rz00_1720 = BgL_rz00_10594; 
goto BgL_zc3z04anonymousza31660ze3z87_1723;} }  else 
{ /* Llib/unicode.scm 966 */
BGl_stringzd2unicodezd2fixz12ze70zf5zz__unicodez00(BgL_resz00_1718, BgL_wz00_1721); 
{ 
bool_t BgL_asciiz00_10604;long BgL_wz00_10602;long BgL_rz00_10600;
BgL_rz00_10600 = 
(BgL_rz00_1720+((long)1)); 
BgL_wz00_10602 = 
(BgL_wz00_1721+((long)3)); 
BgL_asciiz00_10604 = ((bool_t)0); 
BgL_asciiz00_1722 = BgL_asciiz00_10604; 
BgL_wz00_1721 = BgL_wz00_10602; 
BgL_rz00_1720 = BgL_rz00_10600; 
goto BgL_zc3z04anonymousza31660ze3z87_1723;} } }  else 
{ /* Llib/unicode.scm 964 */
if(
(BgL_nz00_1728<=((long)251)))
{ /* Llib/unicode.scm 980 */
bool_t BgL_test5664z00_10607;
if(
(BgL_rz00_1720<
(BgL_endz00_75-((long)4))))
{ /* Llib/unicode.scm 981 */
bool_t BgL_test5666z00_10611;
{ /* Llib/unicode.scm 770 */
long BgL_nz00_4830;
{ /* Llib/unicode.scm 770 */
unsigned char BgL_tmpz00_10612;
{ /* Llib/unicode.scm 981 */
long BgL_i4185z00_6689;
BgL_i4185z00_6689 = 
(BgL_rz00_1720+((long)1)); 
{ /* Llib/unicode.scm 981 */
long BgL_l4186z00_6690;
BgL_l4186z00_6690 = 
STRING_LENGTH(BgL_strz00_72); 
if(
BOUND_CHECK(BgL_i4185z00_6689, BgL_l4186z00_6690))
{ /* Llib/unicode.scm 981 */
BgL_tmpz00_10612 = 
STRING_REF(BgL_strz00_72, BgL_i4185z00_6689)
; }  else 
{ 
obj_t BgL_auxz00_10618;
BgL_auxz00_10618 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)38966)), BGl_string4975z00zz__unicodez00, BgL_strz00_72, 
(int)(BgL_l4186z00_6690), 
(int)(BgL_i4185z00_6689)); 
FAILURE(BgL_auxz00_10618,BFALSE,BFALSE);} } } 
BgL_nz00_4830 = 
(BgL_tmpz00_10612); } 
if(
(BgL_nz00_4830>=((long)128)))
{ /* Llib/unicode.scm 771 */
BgL_test5666z00_10611 = 
(BgL_nz00_4830<=((long)191))
; }  else 
{ /* Llib/unicode.scm 771 */
BgL_test5666z00_10611 = ((bool_t)0)
; } } 
if(BgL_test5666z00_10611)
{ /* Llib/unicode.scm 982 */
bool_t BgL_test5669z00_10628;
{ /* Llib/unicode.scm 770 */
long BgL_nz00_4843;
{ /* Llib/unicode.scm 770 */
unsigned char BgL_tmpz00_10629;
{ /* Llib/unicode.scm 982 */
long BgL_i4189z00_6693;
BgL_i4189z00_6693 = 
(BgL_rz00_1720+((long)2)); 
{ /* Llib/unicode.scm 982 */
long BgL_l4190z00_6694;
BgL_l4190z00_6694 = 
STRING_LENGTH(BgL_strz00_72); 
if(
BOUND_CHECK(BgL_i4189z00_6693, BgL_l4190z00_6694))
{ /* Llib/unicode.scm 982 */
BgL_tmpz00_10629 = 
STRING_REF(BgL_strz00_72, BgL_i4189z00_6693)
; }  else 
{ 
obj_t BgL_auxz00_10635;
BgL_auxz00_10635 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)39020)), BGl_string4975z00zz__unicodez00, BgL_strz00_72, 
(int)(BgL_l4190z00_6694), 
(int)(BgL_i4189z00_6693)); 
FAILURE(BgL_auxz00_10635,BFALSE,BFALSE);} } } 
BgL_nz00_4843 = 
(BgL_tmpz00_10629); } 
if(
(BgL_nz00_4843>=((long)128)))
{ /* Llib/unicode.scm 771 */
BgL_test5669z00_10628 = 
(BgL_nz00_4843<=((long)191))
; }  else 
{ /* Llib/unicode.scm 771 */
BgL_test5669z00_10628 = ((bool_t)0)
; } } 
if(BgL_test5669z00_10628)
{ /* Llib/unicode.scm 983 */
bool_t BgL_test5672z00_10645;
{ /* Llib/unicode.scm 770 */
long BgL_nz00_4856;
{ /* Llib/unicode.scm 770 */
unsigned char BgL_tmpz00_10646;
{ /* Llib/unicode.scm 983 */
long BgL_i4193z00_6697;
BgL_i4193z00_6697 = 
(BgL_rz00_1720+((long)3)); 
{ /* Llib/unicode.scm 983 */
long BgL_l4194z00_6698;
BgL_l4194z00_6698 = 
STRING_LENGTH(BgL_strz00_72); 
if(
BOUND_CHECK(BgL_i4193z00_6697, BgL_l4194z00_6698))
{ /* Llib/unicode.scm 983 */
BgL_tmpz00_10646 = 
STRING_REF(BgL_strz00_72, BgL_i4193z00_6697)
; }  else 
{ 
obj_t BgL_auxz00_10652;
BgL_auxz00_10652 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)39074)), BGl_string4975z00zz__unicodez00, BgL_strz00_72, 
(int)(BgL_l4194z00_6698), 
(int)(BgL_i4193z00_6697)); 
FAILURE(BgL_auxz00_10652,BFALSE,BFALSE);} } } 
BgL_nz00_4856 = 
(BgL_tmpz00_10646); } 
if(
(BgL_nz00_4856>=((long)128)))
{ /* Llib/unicode.scm 771 */
BgL_test5672z00_10645 = 
(BgL_nz00_4856<=((long)191))
; }  else 
{ /* Llib/unicode.scm 771 */
BgL_test5672z00_10645 = ((bool_t)0)
; } } 
if(BgL_test5672z00_10645)
{ /* Llib/unicode.scm 770 */
long BgL_nz00_4869;
{ /* Llib/unicode.scm 770 */
unsigned char BgL_tmpz00_10662;
{ /* Llib/unicode.scm 984 */
long BgL_i4197z00_6701;
BgL_i4197z00_6701 = 
(BgL_rz00_1720+((long)4)); 
{ /* Llib/unicode.scm 984 */
long BgL_l4198z00_6702;
BgL_l4198z00_6702 = 
STRING_LENGTH(BgL_strz00_72); 
if(
BOUND_CHECK(BgL_i4197z00_6701, BgL_l4198z00_6702))
{ /* Llib/unicode.scm 984 */
BgL_tmpz00_10662 = 
STRING_REF(BgL_strz00_72, BgL_i4197z00_6701)
; }  else 
{ 
obj_t BgL_auxz00_10668;
BgL_auxz00_10668 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)39128)), BGl_string4975z00zz__unicodez00, BgL_strz00_72, 
(int)(BgL_l4198z00_6702), 
(int)(BgL_i4197z00_6701)); 
FAILURE(BgL_auxz00_10668,BFALSE,BFALSE);} } } 
BgL_nz00_4869 = 
(BgL_tmpz00_10662); } 
if(
(BgL_nz00_4869>=((long)128)))
{ /* Llib/unicode.scm 771 */
BgL_test5664z00_10607 = 
(BgL_nz00_4869<=((long)191))
; }  else 
{ /* Llib/unicode.scm 771 */
BgL_test5664z00_10607 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 983 */
BgL_test5664z00_10607 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 982 */
BgL_test5664z00_10607 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 981 */
BgL_test5664z00_10607 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 980 */
BgL_test5664z00_10607 = ((bool_t)0)
; } 
if(BgL_test5664z00_10607)
{ /* Llib/unicode.scm 980 */
{ /* Llib/unicode.scm 986 */
long BgL_l4202z00_6706;
BgL_l4202z00_6706 = 
STRING_LENGTH(BgL_resz00_1718); 
if(
BOUND_CHECK(BgL_wz00_1721, BgL_l4202z00_6706))
{ /* Llib/unicode.scm 986 */
STRING_SET(BgL_resz00_1718, BgL_wz00_1721, BgL_cz00_1727); }  else 
{ 
obj_t BgL_auxz00_10682;
BgL_auxz00_10682 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)39191)), BGl_string4995z00zz__unicodez00, BgL_resz00_1718, 
(int)(BgL_l4202z00_6706), 
(int)(BgL_wz00_1721)); 
FAILURE(BgL_auxz00_10682,BFALSE,BFALSE);} } 
{ /* Llib/unicode.scm 987 */
long BgL_arg2038z00_2088;unsigned char BgL_arg2039z00_2089;
BgL_arg2038z00_2088 = 
(BgL_wz00_1721+((long)1)); 
{ /* Llib/unicode.scm 987 */
long BgL_i4205z00_6709;
BgL_i4205z00_6709 = 
(BgL_rz00_1720+((long)1)); 
{ /* Llib/unicode.scm 987 */
long BgL_l4206z00_6710;
BgL_l4206z00_6710 = 
STRING_LENGTH(BgL_strz00_72); 
if(
BOUND_CHECK(BgL_i4205z00_6709, BgL_l4206z00_6710))
{ /* Llib/unicode.scm 987 */
BgL_arg2039z00_2089 = 
STRING_REF(BgL_strz00_72, BgL_i4205z00_6709); }  else 
{ 
obj_t BgL_auxz00_10694;
BgL_auxz00_10694 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)39250)), BGl_string4975z00zz__unicodez00, BgL_strz00_72, 
(int)(BgL_l4206z00_6710), 
(int)(BgL_i4205z00_6709)); 
FAILURE(BgL_auxz00_10694,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 987 */
long BgL_l4210z00_6714;
BgL_l4210z00_6714 = 
STRING_LENGTH(BgL_resz00_1718); 
if(
BOUND_CHECK(BgL_arg2038z00_2088, BgL_l4210z00_6714))
{ /* Llib/unicode.scm 987 */
STRING_SET(BgL_resz00_1718, BgL_arg2038z00_2088, BgL_arg2039z00_2089); }  else 
{ 
obj_t BgL_auxz00_10704;
BgL_auxz00_10704 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)39223)), BGl_string4995z00zz__unicodez00, BgL_resz00_1718, 
(int)(BgL_l4210z00_6714), 
(int)(BgL_arg2038z00_2088)); 
FAILURE(BgL_auxz00_10704,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 988 */
long BgL_arg2041z00_2091;unsigned char BgL_arg2043z00_2092;
BgL_arg2041z00_2091 = 
(BgL_wz00_1721+((long)2)); 
{ /* Llib/unicode.scm 988 */
long BgL_i4213z00_6717;
BgL_i4213z00_6717 = 
(BgL_rz00_1720+((long)2)); 
{ /* Llib/unicode.scm 988 */
long BgL_l4214z00_6718;
BgL_l4214z00_6718 = 
STRING_LENGTH(BgL_strz00_72); 
if(
BOUND_CHECK(BgL_i4213z00_6717, BgL_l4214z00_6718))
{ /* Llib/unicode.scm 988 */
BgL_arg2043z00_2092 = 
STRING_REF(BgL_strz00_72, BgL_i4213z00_6717); }  else 
{ 
obj_t BgL_auxz00_10716;
BgL_auxz00_10716 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)39315)), BGl_string4975z00zz__unicodez00, BgL_strz00_72, 
(int)(BgL_l4214z00_6718), 
(int)(BgL_i4213z00_6717)); 
FAILURE(BgL_auxz00_10716,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 988 */
long BgL_l4218z00_6722;
BgL_l4218z00_6722 = 
STRING_LENGTH(BgL_resz00_1718); 
if(
BOUND_CHECK(BgL_arg2041z00_2091, BgL_l4218z00_6722))
{ /* Llib/unicode.scm 988 */
STRING_SET(BgL_resz00_1718, BgL_arg2041z00_2091, BgL_arg2043z00_2092); }  else 
{ 
obj_t BgL_auxz00_10726;
BgL_auxz00_10726 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)39288)), BGl_string4995z00zz__unicodez00, BgL_resz00_1718, 
(int)(BgL_l4218z00_6722), 
(int)(BgL_arg2041z00_2091)); 
FAILURE(BgL_auxz00_10726,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 989 */
long BgL_arg2045z00_2094;unsigned char BgL_arg2046z00_2095;
BgL_arg2045z00_2094 = 
(BgL_wz00_1721+((long)3)); 
{ /* Llib/unicode.scm 989 */
long BgL_i4221z00_6725;
BgL_i4221z00_6725 = 
(BgL_rz00_1720+((long)3)); 
{ /* Llib/unicode.scm 989 */
long BgL_l4222z00_6726;
BgL_l4222z00_6726 = 
STRING_LENGTH(BgL_strz00_72); 
if(
BOUND_CHECK(BgL_i4221z00_6725, BgL_l4222z00_6726))
{ /* Llib/unicode.scm 989 */
BgL_arg2046z00_2095 = 
STRING_REF(BgL_strz00_72, BgL_i4221z00_6725); }  else 
{ 
obj_t BgL_auxz00_10738;
BgL_auxz00_10738 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)39380)), BGl_string4975z00zz__unicodez00, BgL_strz00_72, 
(int)(BgL_l4222z00_6726), 
(int)(BgL_i4221z00_6725)); 
FAILURE(BgL_auxz00_10738,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 989 */
long BgL_l4226z00_6730;
BgL_l4226z00_6730 = 
STRING_LENGTH(BgL_resz00_1718); 
if(
BOUND_CHECK(BgL_arg2045z00_2094, BgL_l4226z00_6730))
{ /* Llib/unicode.scm 989 */
STRING_SET(BgL_resz00_1718, BgL_arg2045z00_2094, BgL_arg2046z00_2095); }  else 
{ 
obj_t BgL_auxz00_10748;
BgL_auxz00_10748 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)39353)), BGl_string4995z00zz__unicodez00, BgL_resz00_1718, 
(int)(BgL_l4226z00_6730), 
(int)(BgL_arg2045z00_2094)); 
FAILURE(BgL_auxz00_10748,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 990 */
long BgL_arg2048z00_2097;unsigned char BgL_arg2049z00_2098;
BgL_arg2048z00_2097 = 
(BgL_wz00_1721+((long)4)); 
{ /* Llib/unicode.scm 990 */
long BgL_i4229z00_6733;
BgL_i4229z00_6733 = 
(BgL_rz00_1720+((long)4)); 
{ /* Llib/unicode.scm 990 */
long BgL_l4230z00_6734;
BgL_l4230z00_6734 = 
STRING_LENGTH(BgL_strz00_72); 
if(
BOUND_CHECK(BgL_i4229z00_6733, BgL_l4230z00_6734))
{ /* Llib/unicode.scm 990 */
BgL_arg2049z00_2098 = 
STRING_REF(BgL_strz00_72, BgL_i4229z00_6733); }  else 
{ 
obj_t BgL_auxz00_10760;
BgL_auxz00_10760 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)39445)), BGl_string4975z00zz__unicodez00, BgL_strz00_72, 
(int)(BgL_l4230z00_6734), 
(int)(BgL_i4229z00_6733)); 
FAILURE(BgL_auxz00_10760,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 990 */
long BgL_l4234z00_6738;
BgL_l4234z00_6738 = 
STRING_LENGTH(BgL_resz00_1718); 
if(
BOUND_CHECK(BgL_arg2048z00_2097, BgL_l4234z00_6738))
{ /* Llib/unicode.scm 990 */
STRING_SET(BgL_resz00_1718, BgL_arg2048z00_2097, BgL_arg2049z00_2098); }  else 
{ 
obj_t BgL_auxz00_10770;
BgL_auxz00_10770 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)39418)), BGl_string4995z00zz__unicodez00, BgL_resz00_1718, 
(int)(BgL_l4234z00_6738), 
(int)(BgL_arg2048z00_2097)); 
FAILURE(BgL_auxz00_10770,BFALSE,BFALSE);} } } 
{ 
bool_t BgL_asciiz00_10780;long BgL_wz00_10778;long BgL_rz00_10776;
BgL_rz00_10776 = 
(BgL_rz00_1720+((long)5)); 
BgL_wz00_10778 = 
(BgL_wz00_1721+((long)5)); 
BgL_asciiz00_10780 = ((bool_t)0); 
BgL_asciiz00_1722 = BgL_asciiz00_10780; 
BgL_wz00_1721 = BgL_wz00_10778; 
BgL_rz00_1720 = BgL_rz00_10776; 
goto BgL_zc3z04anonymousza31660ze3z87_1723;} }  else 
{ /* Llib/unicode.scm 980 */
BGl_stringzd2unicodezd2fixz12ze70zf5zz__unicodez00(BgL_resz00_1718, BgL_wz00_1721); 
{ 
bool_t BgL_asciiz00_10786;long BgL_wz00_10784;long BgL_rz00_10782;
BgL_rz00_10782 = 
(BgL_rz00_1720+((long)1)); 
BgL_wz00_10784 = 
(BgL_wz00_1721+((long)3)); 
BgL_asciiz00_10786 = ((bool_t)0); 
BgL_asciiz00_1722 = BgL_asciiz00_10786; 
BgL_wz00_1721 = BgL_wz00_10784; 
BgL_rz00_1720 = BgL_rz00_10782; 
goto BgL_zc3z04anonymousza31660ze3z87_1723;} } }  else 
{ /* Llib/unicode.scm 979 */
if(
(BgL_nz00_1728<=((long)253)))
{ /* Llib/unicode.scm 996 */
bool_t BgL_test5687z00_10789;
if(
(BgL_rz00_1720<
(BgL_endz00_75-((long)5))))
{ /* Llib/unicode.scm 997 */
bool_t BgL_test5689z00_10793;
{ /* Llib/unicode.scm 770 */
long BgL_nz00_4940;
{ /* Llib/unicode.scm 770 */
unsigned char BgL_tmpz00_10794;
{ /* Llib/unicode.scm 997 */
long BgL_i4237z00_6741;
BgL_i4237z00_6741 = 
(BgL_rz00_1720+((long)1)); 
{ /* Llib/unicode.scm 997 */
long BgL_l4238z00_6742;
BgL_l4238z00_6742 = 
STRING_LENGTH(BgL_strz00_72); 
if(
BOUND_CHECK(BgL_i4237z00_6741, BgL_l4238z00_6742))
{ /* Llib/unicode.scm 997 */
BgL_tmpz00_10794 = 
STRING_REF(BgL_strz00_72, BgL_i4237z00_6741)
; }  else 
{ 
obj_t BgL_auxz00_10800;
BgL_auxz00_10800 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)39681)), BGl_string4975z00zz__unicodez00, BgL_strz00_72, 
(int)(BgL_l4238z00_6742), 
(int)(BgL_i4237z00_6741)); 
FAILURE(BgL_auxz00_10800,BFALSE,BFALSE);} } } 
BgL_nz00_4940 = 
(BgL_tmpz00_10794); } 
if(
(BgL_nz00_4940>=((long)128)))
{ /* Llib/unicode.scm 771 */
BgL_test5689z00_10793 = 
(BgL_nz00_4940<=((long)191))
; }  else 
{ /* Llib/unicode.scm 771 */
BgL_test5689z00_10793 = ((bool_t)0)
; } } 
if(BgL_test5689z00_10793)
{ /* Llib/unicode.scm 998 */
bool_t BgL_test5692z00_10810;
{ /* Llib/unicode.scm 770 */
long BgL_nz00_4953;
{ /* Llib/unicode.scm 770 */
unsigned char BgL_tmpz00_10811;
{ /* Llib/unicode.scm 998 */
long BgL_i4241z00_6745;
BgL_i4241z00_6745 = 
(BgL_rz00_1720+((long)2)); 
{ /* Llib/unicode.scm 998 */
long BgL_l4242z00_6746;
BgL_l4242z00_6746 = 
STRING_LENGTH(BgL_strz00_72); 
if(
BOUND_CHECK(BgL_i4241z00_6745, BgL_l4242z00_6746))
{ /* Llib/unicode.scm 998 */
BgL_tmpz00_10811 = 
STRING_REF(BgL_strz00_72, BgL_i4241z00_6745)
; }  else 
{ 
obj_t BgL_auxz00_10817;
BgL_auxz00_10817 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)39735)), BGl_string4975z00zz__unicodez00, BgL_strz00_72, 
(int)(BgL_l4242z00_6746), 
(int)(BgL_i4241z00_6745)); 
FAILURE(BgL_auxz00_10817,BFALSE,BFALSE);} } } 
BgL_nz00_4953 = 
(BgL_tmpz00_10811); } 
if(
(BgL_nz00_4953>=((long)128)))
{ /* Llib/unicode.scm 771 */
BgL_test5692z00_10810 = 
(BgL_nz00_4953<=((long)191))
; }  else 
{ /* Llib/unicode.scm 771 */
BgL_test5692z00_10810 = ((bool_t)0)
; } } 
if(BgL_test5692z00_10810)
{ /* Llib/unicode.scm 999 */
bool_t BgL_test5695z00_10827;
{ /* Llib/unicode.scm 770 */
long BgL_nz00_4966;
{ /* Llib/unicode.scm 770 */
unsigned char BgL_tmpz00_10828;
{ /* Llib/unicode.scm 999 */
long BgL_i4245z00_6749;
BgL_i4245z00_6749 = 
(BgL_rz00_1720+((long)3)); 
{ /* Llib/unicode.scm 999 */
long BgL_l4246z00_6750;
BgL_l4246z00_6750 = 
STRING_LENGTH(BgL_strz00_72); 
if(
BOUND_CHECK(BgL_i4245z00_6749, BgL_l4246z00_6750))
{ /* Llib/unicode.scm 999 */
BgL_tmpz00_10828 = 
STRING_REF(BgL_strz00_72, BgL_i4245z00_6749)
; }  else 
{ 
obj_t BgL_auxz00_10834;
BgL_auxz00_10834 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)39789)), BGl_string4975z00zz__unicodez00, BgL_strz00_72, 
(int)(BgL_l4246z00_6750), 
(int)(BgL_i4245z00_6749)); 
FAILURE(BgL_auxz00_10834,BFALSE,BFALSE);} } } 
BgL_nz00_4966 = 
(BgL_tmpz00_10828); } 
if(
(BgL_nz00_4966>=((long)128)))
{ /* Llib/unicode.scm 771 */
BgL_test5695z00_10827 = 
(BgL_nz00_4966<=((long)191))
; }  else 
{ /* Llib/unicode.scm 771 */
BgL_test5695z00_10827 = ((bool_t)0)
; } } 
if(BgL_test5695z00_10827)
{ /* Llib/unicode.scm 1000 */
bool_t BgL_test5698z00_10844;
{ /* Llib/unicode.scm 770 */
long BgL_nz00_4979;
{ /* Llib/unicode.scm 770 */
unsigned char BgL_tmpz00_10845;
{ /* Llib/unicode.scm 1000 */
long BgL_i4249z00_6753;
BgL_i4249z00_6753 = 
(BgL_rz00_1720+((long)4)); 
{ /* Llib/unicode.scm 1000 */
long BgL_l4250z00_6754;
BgL_l4250z00_6754 = 
STRING_LENGTH(BgL_strz00_72); 
if(
BOUND_CHECK(BgL_i4249z00_6753, BgL_l4250z00_6754))
{ /* Llib/unicode.scm 1000 */
BgL_tmpz00_10845 = 
STRING_REF(BgL_strz00_72, BgL_i4249z00_6753)
; }  else 
{ 
obj_t BgL_auxz00_10851;
BgL_auxz00_10851 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)39843)), BGl_string4975z00zz__unicodez00, BgL_strz00_72, 
(int)(BgL_l4250z00_6754), 
(int)(BgL_i4249z00_6753)); 
FAILURE(BgL_auxz00_10851,BFALSE,BFALSE);} } } 
BgL_nz00_4979 = 
(BgL_tmpz00_10845); } 
if(
(BgL_nz00_4979>=((long)128)))
{ /* Llib/unicode.scm 771 */
BgL_test5698z00_10844 = 
(BgL_nz00_4979<=((long)191))
; }  else 
{ /* Llib/unicode.scm 771 */
BgL_test5698z00_10844 = ((bool_t)0)
; } } 
if(BgL_test5698z00_10844)
{ /* Llib/unicode.scm 770 */
long BgL_nz00_4992;
{ /* Llib/unicode.scm 770 */
unsigned char BgL_tmpz00_10861;
{ /* Llib/unicode.scm 1001 */
long BgL_i4253z00_6757;
BgL_i4253z00_6757 = 
(BgL_rz00_1720+((long)5)); 
{ /* Llib/unicode.scm 1001 */
long BgL_l4254z00_6758;
BgL_l4254z00_6758 = 
STRING_LENGTH(BgL_strz00_72); 
if(
BOUND_CHECK(BgL_i4253z00_6757, BgL_l4254z00_6758))
{ /* Llib/unicode.scm 1001 */
BgL_tmpz00_10861 = 
STRING_REF(BgL_strz00_72, BgL_i4253z00_6757)
; }  else 
{ 
obj_t BgL_auxz00_10867;
BgL_auxz00_10867 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)39897)), BGl_string4975z00zz__unicodez00, BgL_strz00_72, 
(int)(BgL_l4254z00_6758), 
(int)(BgL_i4253z00_6757)); 
FAILURE(BgL_auxz00_10867,BFALSE,BFALSE);} } } 
BgL_nz00_4992 = 
(BgL_tmpz00_10861); } 
if(
(BgL_nz00_4992>=((long)128)))
{ /* Llib/unicode.scm 771 */
BgL_test5687z00_10789 = 
(BgL_nz00_4992<=((long)191))
; }  else 
{ /* Llib/unicode.scm 771 */
BgL_test5687z00_10789 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 1000 */
BgL_test5687z00_10789 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 999 */
BgL_test5687z00_10789 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 998 */
BgL_test5687z00_10789 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 997 */
BgL_test5687z00_10789 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 996 */
BgL_test5687z00_10789 = ((bool_t)0)
; } 
if(BgL_test5687z00_10789)
{ /* Llib/unicode.scm 996 */
{ /* Llib/unicode.scm 1003 */
long BgL_l4258z00_6762;
BgL_l4258z00_6762 = 
STRING_LENGTH(BgL_resz00_1718); 
if(
BOUND_CHECK(BgL_wz00_1721, BgL_l4258z00_6762))
{ /* Llib/unicode.scm 1003 */
STRING_SET(BgL_resz00_1718, BgL_wz00_1721, BgL_cz00_1727); }  else 
{ 
obj_t BgL_auxz00_10881;
BgL_auxz00_10881 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)39960)), BGl_string4995z00zz__unicodez00, BgL_resz00_1718, 
(int)(BgL_l4258z00_6762), 
(int)(BgL_wz00_1721)); 
FAILURE(BgL_auxz00_10881,BFALSE,BFALSE);} } 
{ /* Llib/unicode.scm 1004 */
long BgL_arg2098z00_2144;unsigned char BgL_arg2100z00_2145;
BgL_arg2098z00_2144 = 
(BgL_wz00_1721+((long)1)); 
{ /* Llib/unicode.scm 1004 */
long BgL_i4261z00_6765;
BgL_i4261z00_6765 = 
(BgL_rz00_1720+((long)1)); 
{ /* Llib/unicode.scm 1004 */
long BgL_l4262z00_6766;
BgL_l4262z00_6766 = 
STRING_LENGTH(BgL_strz00_72); 
if(
BOUND_CHECK(BgL_i4261z00_6765, BgL_l4262z00_6766))
{ /* Llib/unicode.scm 1004 */
BgL_arg2100z00_2145 = 
STRING_REF(BgL_strz00_72, BgL_i4261z00_6765); }  else 
{ 
obj_t BgL_auxz00_10893;
BgL_auxz00_10893 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)40019)), BGl_string4975z00zz__unicodez00, BgL_strz00_72, 
(int)(BgL_l4262z00_6766), 
(int)(BgL_i4261z00_6765)); 
FAILURE(BgL_auxz00_10893,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 1004 */
long BgL_l4266z00_6770;
BgL_l4266z00_6770 = 
STRING_LENGTH(BgL_resz00_1718); 
if(
BOUND_CHECK(BgL_arg2098z00_2144, BgL_l4266z00_6770))
{ /* Llib/unicode.scm 1004 */
STRING_SET(BgL_resz00_1718, BgL_arg2098z00_2144, BgL_arg2100z00_2145); }  else 
{ 
obj_t BgL_auxz00_10903;
BgL_auxz00_10903 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)39992)), BGl_string4995z00zz__unicodez00, BgL_resz00_1718, 
(int)(BgL_l4266z00_6770), 
(int)(BgL_arg2098z00_2144)); 
FAILURE(BgL_auxz00_10903,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 1005 */
long BgL_arg2102z00_2147;unsigned char BgL_arg2103z00_2148;
BgL_arg2102z00_2147 = 
(BgL_wz00_1721+((long)2)); 
{ /* Llib/unicode.scm 1005 */
long BgL_i4269z00_6773;
BgL_i4269z00_6773 = 
(BgL_rz00_1720+((long)2)); 
{ /* Llib/unicode.scm 1005 */
long BgL_l4270z00_6774;
BgL_l4270z00_6774 = 
STRING_LENGTH(BgL_strz00_72); 
if(
BOUND_CHECK(BgL_i4269z00_6773, BgL_l4270z00_6774))
{ /* Llib/unicode.scm 1005 */
BgL_arg2103z00_2148 = 
STRING_REF(BgL_strz00_72, BgL_i4269z00_6773); }  else 
{ 
obj_t BgL_auxz00_10915;
BgL_auxz00_10915 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)40084)), BGl_string4975z00zz__unicodez00, BgL_strz00_72, 
(int)(BgL_l4270z00_6774), 
(int)(BgL_i4269z00_6773)); 
FAILURE(BgL_auxz00_10915,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 1005 */
long BgL_l4274z00_6778;
BgL_l4274z00_6778 = 
STRING_LENGTH(BgL_resz00_1718); 
if(
BOUND_CHECK(BgL_arg2102z00_2147, BgL_l4274z00_6778))
{ /* Llib/unicode.scm 1005 */
STRING_SET(BgL_resz00_1718, BgL_arg2102z00_2147, BgL_arg2103z00_2148); }  else 
{ 
obj_t BgL_auxz00_10925;
BgL_auxz00_10925 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)40057)), BGl_string4995z00zz__unicodez00, BgL_resz00_1718, 
(int)(BgL_l4274z00_6778), 
(int)(BgL_arg2102z00_2147)); 
FAILURE(BgL_auxz00_10925,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 1006 */
long BgL_arg2105z00_2150;unsigned char BgL_arg2106z00_2151;
BgL_arg2105z00_2150 = 
(BgL_wz00_1721+((long)3)); 
{ /* Llib/unicode.scm 1006 */
long BgL_i4277z00_6781;
BgL_i4277z00_6781 = 
(BgL_rz00_1720+((long)3)); 
{ /* Llib/unicode.scm 1006 */
long BgL_l4278z00_6782;
BgL_l4278z00_6782 = 
STRING_LENGTH(BgL_strz00_72); 
if(
BOUND_CHECK(BgL_i4277z00_6781, BgL_l4278z00_6782))
{ /* Llib/unicode.scm 1006 */
BgL_arg2106z00_2151 = 
STRING_REF(BgL_strz00_72, BgL_i4277z00_6781); }  else 
{ 
obj_t BgL_auxz00_10937;
BgL_auxz00_10937 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)40149)), BGl_string4975z00zz__unicodez00, BgL_strz00_72, 
(int)(BgL_l4278z00_6782), 
(int)(BgL_i4277z00_6781)); 
FAILURE(BgL_auxz00_10937,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 1006 */
long BgL_l4282z00_6786;
BgL_l4282z00_6786 = 
STRING_LENGTH(BgL_resz00_1718); 
if(
BOUND_CHECK(BgL_arg2105z00_2150, BgL_l4282z00_6786))
{ /* Llib/unicode.scm 1006 */
STRING_SET(BgL_resz00_1718, BgL_arg2105z00_2150, BgL_arg2106z00_2151); }  else 
{ 
obj_t BgL_auxz00_10947;
BgL_auxz00_10947 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)40122)), BGl_string4995z00zz__unicodez00, BgL_resz00_1718, 
(int)(BgL_l4282z00_6786), 
(int)(BgL_arg2105z00_2150)); 
FAILURE(BgL_auxz00_10947,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 1007 */
long BgL_arg2108z00_2153;unsigned char BgL_arg2109z00_2154;
BgL_arg2108z00_2153 = 
(BgL_wz00_1721+((long)4)); 
{ /* Llib/unicode.scm 1007 */
long BgL_i4285z00_6789;
BgL_i4285z00_6789 = 
(BgL_rz00_1720+((long)4)); 
{ /* Llib/unicode.scm 1007 */
long BgL_l4286z00_6790;
BgL_l4286z00_6790 = 
STRING_LENGTH(BgL_strz00_72); 
if(
BOUND_CHECK(BgL_i4285z00_6789, BgL_l4286z00_6790))
{ /* Llib/unicode.scm 1007 */
BgL_arg2109z00_2154 = 
STRING_REF(BgL_strz00_72, BgL_i4285z00_6789); }  else 
{ 
obj_t BgL_auxz00_10959;
BgL_auxz00_10959 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)40214)), BGl_string4975z00zz__unicodez00, BgL_strz00_72, 
(int)(BgL_l4286z00_6790), 
(int)(BgL_i4285z00_6789)); 
FAILURE(BgL_auxz00_10959,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 1007 */
long BgL_l4290z00_6794;
BgL_l4290z00_6794 = 
STRING_LENGTH(BgL_resz00_1718); 
if(
BOUND_CHECK(BgL_arg2108z00_2153, BgL_l4290z00_6794))
{ /* Llib/unicode.scm 1007 */
STRING_SET(BgL_resz00_1718, BgL_arg2108z00_2153, BgL_arg2109z00_2154); }  else 
{ 
obj_t BgL_auxz00_10969;
BgL_auxz00_10969 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)40187)), BGl_string4995z00zz__unicodez00, BgL_resz00_1718, 
(int)(BgL_l4290z00_6794), 
(int)(BgL_arg2108z00_2153)); 
FAILURE(BgL_auxz00_10969,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 1008 */
long BgL_arg2111z00_2156;unsigned char BgL_arg2112z00_2157;
BgL_arg2111z00_2156 = 
(BgL_wz00_1721+((long)5)); 
{ /* Llib/unicode.scm 1008 */
long BgL_i4293z00_6797;
BgL_i4293z00_6797 = 
(BgL_rz00_1720+((long)5)); 
{ /* Llib/unicode.scm 1008 */
long BgL_l4294z00_6798;
BgL_l4294z00_6798 = 
STRING_LENGTH(BgL_strz00_72); 
if(
BOUND_CHECK(BgL_i4293z00_6797, BgL_l4294z00_6798))
{ /* Llib/unicode.scm 1008 */
BgL_arg2112z00_2157 = 
STRING_REF(BgL_strz00_72, BgL_i4293z00_6797); }  else 
{ 
obj_t BgL_auxz00_10981;
BgL_auxz00_10981 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)40279)), BGl_string4975z00zz__unicodez00, BgL_strz00_72, 
(int)(BgL_l4294z00_6798), 
(int)(BgL_i4293z00_6797)); 
FAILURE(BgL_auxz00_10981,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 1008 */
long BgL_l4298z00_6802;
BgL_l4298z00_6802 = 
STRING_LENGTH(BgL_resz00_1718); 
if(
BOUND_CHECK(BgL_arg2111z00_2156, BgL_l4298z00_6802))
{ /* Llib/unicode.scm 1008 */
STRING_SET(BgL_resz00_1718, BgL_arg2111z00_2156, BgL_arg2112z00_2157); }  else 
{ 
obj_t BgL_auxz00_10991;
BgL_auxz00_10991 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)40252)), BGl_string4995z00zz__unicodez00, BgL_resz00_1718, 
(int)(BgL_l4298z00_6802), 
(int)(BgL_arg2111z00_2156)); 
FAILURE(BgL_auxz00_10991,BFALSE,BFALSE);} } } 
{ 
bool_t BgL_asciiz00_11001;long BgL_wz00_10999;long BgL_rz00_10997;
BgL_rz00_10997 = 
(BgL_rz00_1720+((long)6)); 
BgL_wz00_10999 = 
(BgL_wz00_1721+((long)6)); 
BgL_asciiz00_11001 = ((bool_t)0); 
BgL_asciiz00_1722 = BgL_asciiz00_11001; 
BgL_wz00_1721 = BgL_wz00_10999; 
BgL_rz00_1720 = BgL_rz00_10997; 
goto BgL_zc3z04anonymousza31660ze3z87_1723;} }  else 
{ /* Llib/unicode.scm 996 */
BGl_stringzd2unicodezd2fixz12ze70zf5zz__unicodez00(BgL_resz00_1718, BgL_wz00_1721); 
{ 
bool_t BgL_asciiz00_11007;long BgL_wz00_11005;long BgL_rz00_11003;
BgL_rz00_11003 = 
(BgL_rz00_1720+((long)1)); 
BgL_wz00_11005 = 
(BgL_wz00_1721+((long)3)); 
BgL_asciiz00_11007 = ((bool_t)0); 
BgL_asciiz00_1722 = BgL_asciiz00_11007; 
BgL_wz00_1721 = BgL_wz00_11005; 
BgL_rz00_1720 = BgL_rz00_11003; 
goto BgL_zc3z04anonymousza31660ze3z87_1723;} } }  else 
{ /* Llib/unicode.scm 995 */
BGl_stringzd2unicodezd2fixz12ze70zf5zz__unicodez00(BgL_resz00_1718, BgL_wz00_1721); 
{ 
bool_t BgL_asciiz00_11013;long BgL_wz00_11011;long BgL_rz00_11009;
BgL_rz00_11009 = 
(BgL_rz00_1720+((long)1)); 
BgL_wz00_11011 = 
(BgL_wz00_1721+((long)3)); 
BgL_asciiz00_11013 = ((bool_t)0); 
BgL_asciiz00_1722 = BgL_asciiz00_11013; 
BgL_wz00_1721 = BgL_wz00_11011; 
BgL_rz00_1720 = BgL_rz00_11009; 
goto BgL_zc3z04anonymousza31660ze3z87_1723;} } } } } } } } } } } } } } } } } } } } } 

}



/* string-unicode-fix!~0 */
obj_t BGl_stringzd2unicodezd2fixz12ze70zf5zz__unicodez00(obj_t BgL_sz00_2197, long BgL_jz00_2198)
{
{ /* Llib/unicode.scm 775 */
{ /* Llib/unicode.scm 775 */
long BgL_l4302z00_6806;
BgL_l4302z00_6806 = 
STRING_LENGTH(BgL_sz00_2197); 
if(
BOUND_CHECK(BgL_jz00_2198, BgL_l4302z00_6806))
{ /* Llib/unicode.scm 775 */
STRING_SET(BgL_sz00_2197, BgL_jz00_2198, ((unsigned char)239)); }  else 
{ 
obj_t BgL_auxz00_11018;
BgL_auxz00_11018 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)31311)), BGl_string4995z00zz__unicodez00, BgL_sz00_2197, 
(int)(BgL_l4302z00_6806), 
(int)(BgL_jz00_2198)); 
FAILURE(BgL_auxz00_11018,BFALSE,BFALSE);} } 
{ /* Llib/unicode.scm 776 */
long BgL_arg2137z00_2200;
BgL_arg2137z00_2200 = 
(BgL_jz00_2198+((long)1)); 
{ /* Llib/unicode.scm 776 */
long BgL_l4306z00_6810;
BgL_l4306z00_6810 = 
STRING_LENGTH(BgL_sz00_2197); 
if(
BOUND_CHECK(BgL_arg2137z00_2200, BgL_l4306z00_6810))
{ /* Llib/unicode.scm 776 */
STRING_SET(BgL_sz00_2197, BgL_arg2137z00_2200, ((unsigned char)191)); }  else 
{ 
obj_t BgL_auxz00_11029;
BgL_auxz00_11029 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)31341)), BGl_string4995z00zz__unicodez00, BgL_sz00_2197, 
(int)(BgL_l4306z00_6810), 
(int)(BgL_arg2137z00_2200)); 
FAILURE(BgL_auxz00_11029,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 777 */
long BgL_arg2138z00_2201;
BgL_arg2138z00_2201 = 
(BgL_jz00_2198+((long)2)); 
{ /* Llib/unicode.scm 777 */
long BgL_l4310z00_6814;
BgL_l4310z00_6814 = 
STRING_LENGTH(BgL_sz00_2197); 
if(
BOUND_CHECK(BgL_arg2138z00_2201, BgL_l4310z00_6814))
{ /* Llib/unicode.scm 777 */
return 
STRING_SET(BgL_sz00_2197, BgL_arg2138z00_2201, ((unsigned char)189));}  else 
{ 
obj_t BgL_auxz00_11040;
BgL_auxz00_11040 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)31379)), BGl_string4995z00zz__unicodez00, BgL_sz00_2197, 
(int)(BgL_l4310z00_6814), 
(int)(BgL_arg2138z00_2201)); 
FAILURE(BgL_auxz00_11040,BFALSE,BFALSE);} } } } 

}



/* utf8-char-size */
BGL_EXPORTED_DEF long BGl_utf8zd2charzd2siza7eza7zz__unicodez00(unsigned char BgL_cz00_78)
{
{ /* Llib/unicode.scm 1039 */
{ /* Llib/unicode.scm 1041 */
long BgL_arg2140z00_7384;
BgL_arg2140z00_7384 = 
(
(
(unsigned char)(BgL_cz00_78)) >> 
(int)(((long)4))); 
{ /* Llib/unicode.scm 1040 */
obj_t BgL_vectorz00_7385;
BgL_vectorz00_7385 = BGl_vector4996z00zz__unicodez00; 
{ /* Llib/unicode.scm 1040 */
obj_t BgL_tmpz00_11050;
{ /* Llib/unicode.scm 1040 */
obj_t BgL_aux4669z00_7386;
BgL_aux4669z00_7386 = 
VECTOR_REF(BgL_vectorz00_7385,BgL_arg2140z00_7384); 
if(
INTEGERP(BgL_aux4669z00_7386))
{ /* Llib/unicode.scm 1040 */
BgL_tmpz00_11050 = BgL_aux4669z00_7386
; }  else 
{ 
obj_t BgL_auxz00_11054;
BgL_auxz00_11054 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)42033)), BGl_string4998z00zz__unicodez00, BGl_string4927z00zz__unicodez00, BgL_aux4669z00_7386); 
FAILURE(BgL_auxz00_11054,BFALSE,BFALSE);} } 
return 
(long)CINT(BgL_tmpz00_11050);} } } } 

}



/* &utf8-char-size */
obj_t BGl_z62utf8zd2charzd2siza7ezc5zz__unicodez00(obj_t BgL_envz00_6235, obj_t BgL_cz00_6236)
{
{ /* Llib/unicode.scm 1039 */
{ /* Llib/unicode.scm 1041 */
long BgL_tmpz00_11059;
{ /* Llib/unicode.scm 1041 */
unsigned char BgL_auxz00_11060;
{ /* Llib/unicode.scm 1041 */
obj_t BgL_tmpz00_11061;
if(
CHARP(BgL_cz00_6236))
{ /* Llib/unicode.scm 1041 */
BgL_tmpz00_11061 = BgL_cz00_6236
; }  else 
{ 
obj_t BgL_auxz00_11064;
BgL_auxz00_11064 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)42099)), BGl_string4999z00zz__unicodez00, BGl_string5000z00zz__unicodez00, BgL_cz00_6236); 
FAILURE(BgL_auxz00_11064,BFALSE,BFALSE);} 
BgL_auxz00_11060 = 
CCHAR(BgL_tmpz00_11061); } 
BgL_tmpz00_11059 = 
BGl_utf8zd2charzd2siza7eza7zz__unicodez00(BgL_auxz00_11060); } 
return 
BINT(BgL_tmpz00_11059);} } 

}



/* utf8-string-length */
BGL_EXPORTED_DEF long BGl_utf8zd2stringzd2lengthz00zz__unicodez00(obj_t BgL_strz00_79)
{
{ /* Llib/unicode.scm 1048 */
{ /* Llib/unicode.scm 1049 */
long BgL_lenz00_2206;
BgL_lenz00_2206 = 
STRING_LENGTH(BgL_strz00_79); 
{ 
long BgL_rz00_5097;long BgL_lz00_5098;
BgL_rz00_5097 = ((long)0); 
BgL_lz00_5098 = ((long)0); 
BgL_loopz00_5096:
if(
(BgL_rz00_5097==BgL_lenz00_2206))
{ /* Llib/unicode.scm 1052 */
return BgL_lz00_5098;}  else 
{ /* Llib/unicode.scm 1054 */
long BgL_arg2144z00_5103;long BgL_arg2145z00_5104;
{ /* Llib/unicode.scm 1054 */
long BgL_arg2146z00_5105;
{ /* Llib/unicode.scm 1054 */
unsigned char BgL_arg2147z00_5106;
{ /* Llib/unicode.scm 1054 */
long BgL_l4314z00_6818;
BgL_l4314z00_6818 = 
STRING_LENGTH(BgL_strz00_79); 
if(
BOUND_CHECK(BgL_rz00_5097, BgL_l4314z00_6818))
{ /* Llib/unicode.scm 1054 */
BgL_arg2147z00_5106 = 
STRING_REF(BgL_strz00_79, BgL_rz00_5097); }  else 
{ 
obj_t BgL_auxz00_11078;
BgL_auxz00_11078 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)42656)), BGl_string4975z00zz__unicodez00, BgL_strz00_79, 
(int)(BgL_l4314z00_6818), 
(int)(BgL_rz00_5097)); 
FAILURE(BgL_auxz00_11078,BFALSE,BFALSE);} } 
{ /* Llib/unicode.scm 1054 */
long BgL_res3489z00_5110;
{ /* Llib/unicode.scm 1054 */
unsigned char BgL_cz00_5111;
BgL_cz00_5111 = 
(char)(BgL_arg2147z00_5106); 
{ /* Llib/unicode.scm 1041 */
long BgL_arg2140z00_5112;
BgL_arg2140z00_5112 = 
(
(
(unsigned char)(BgL_cz00_5111)) >> 
(int)(((long)4))); 
{ /* Llib/unicode.scm 1040 */
obj_t BgL_vectorz00_5118;
BgL_vectorz00_5118 = BGl_vector4996z00zz__unicodez00; 
{ /* Llib/unicode.scm 1040 */
obj_t BgL_tmpz00_11089;
{ /* Llib/unicode.scm 1040 */
obj_t BgL_aux4673z00_7176;
BgL_aux4673z00_7176 = 
VECTOR_REF(BgL_vectorz00_5118,BgL_arg2140z00_5112); 
if(
INTEGERP(BgL_aux4673z00_7176))
{ /* Llib/unicode.scm 1040 */
BgL_tmpz00_11089 = BgL_aux4673z00_7176
; }  else 
{ 
obj_t BgL_auxz00_11093;
BgL_auxz00_11093 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)42033)), BGl_string4963z00zz__unicodez00, BGl_string4927z00zz__unicodez00, BgL_aux4673z00_7176); 
FAILURE(BgL_auxz00_11093,BFALSE,BFALSE);} } 
BgL_res3489z00_5110 = 
(long)CINT(BgL_tmpz00_11089); } } } } 
BgL_arg2146z00_5105 = BgL_res3489z00_5110; } } 
BgL_arg2144z00_5103 = 
(BgL_rz00_5097+BgL_arg2146z00_5105); } 
BgL_arg2145z00_5104 = 
(BgL_lz00_5098+((long)1)); 
{ 
long BgL_lz00_11101;long BgL_rz00_11100;
BgL_rz00_11100 = BgL_arg2144z00_5103; 
BgL_lz00_11101 = BgL_arg2145z00_5104; 
BgL_lz00_5098 = BgL_lz00_11101; 
BgL_rz00_5097 = BgL_rz00_11100; 
goto BgL_loopz00_5096;} } } } } 

}



/* &utf8-string-length */
obj_t BGl_z62utf8zd2stringzd2lengthz62zz__unicodez00(obj_t BgL_envz00_6237, obj_t BgL_strz00_6238)
{
{ /* Llib/unicode.scm 1048 */
{ /* Llib/unicode.scm 1049 */
long BgL_tmpz00_11102;
{ /* Llib/unicode.scm 1049 */
obj_t BgL_auxz00_11103;
if(
STRINGP(BgL_strz00_6238))
{ /* Llib/unicode.scm 1049 */
BgL_auxz00_11103 = BgL_strz00_6238
; }  else 
{ 
obj_t BgL_auxz00_11106;
BgL_auxz00_11106 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)42529)), BGl_string5001z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_strz00_6238); 
FAILURE(BgL_auxz00_11106,BFALSE,BFALSE);} 
BgL_tmpz00_11102 = 
BGl_utf8zd2stringzd2lengthz00zz__unicodez00(BgL_auxz00_11103); } 
return 
BINT(BgL_tmpz00_11102);} } 

}



/* utf8-string-ref */
BGL_EXPORTED_DEF obj_t BGl_utf8zd2stringzd2refz00zz__unicodez00(obj_t BgL_strz00_80, long BgL_iz00_81)
{
{ /* Llib/unicode.scm 1059 */
{ 
long BgL_rz00_2219;long BgL_iz00_2220;
BgL_rz00_2219 = ((long)0); 
BgL_iz00_2220 = BgL_iz00_81; 
BgL_zc3z04anonymousza32148ze3z87_2221:
{ /* Llib/unicode.scm 1062 */
unsigned char BgL_cz00_2222;
{ /* Llib/unicode.scm 1062 */
long BgL_l4318z00_6822;
BgL_l4318z00_6822 = 
STRING_LENGTH(BgL_strz00_80); 
if(
BOUND_CHECK(BgL_rz00_2219, BgL_l4318z00_6822))
{ /* Llib/unicode.scm 1062 */
BgL_cz00_2222 = 
STRING_REF(BgL_strz00_80, BgL_rz00_2219); }  else 
{ 
obj_t BgL_auxz00_11116;
BgL_auxz00_11116 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)43025)), BGl_string4975z00zz__unicodez00, BgL_strz00_80, 
(int)(BgL_l4318z00_6822), 
(int)(BgL_rz00_2219)); 
FAILURE(BgL_auxz00_11116,BFALSE,BFALSE);} } 
{ /* Llib/unicode.scm 1062 */
long BgL_sz00_2223;
{ /* Llib/unicode.scm 1063 */
long BgL_res3496z00_5139;
{ /* Llib/unicode.scm 1063 */
unsigned char BgL_cz00_5130;
BgL_cz00_5130 = 
(char)(BgL_cz00_2222); 
{ /* Llib/unicode.scm 1041 */
long BgL_arg2140z00_5131;
BgL_arg2140z00_5131 = 
(
(
(unsigned char)(BgL_cz00_5130)) >> 
(int)(((long)4))); 
{ /* Llib/unicode.scm 1040 */
obj_t BgL_vectorz00_5137;
BgL_vectorz00_5137 = BGl_vector4996z00zz__unicodez00; 
{ /* Llib/unicode.scm 1040 */
obj_t BgL_tmpz00_11127;
{ /* Llib/unicode.scm 1040 */
obj_t BgL_aux4677z00_7180;
BgL_aux4677z00_7180 = 
VECTOR_REF(BgL_vectorz00_5137,BgL_arg2140z00_5131); 
if(
INTEGERP(BgL_aux4677z00_7180))
{ /* Llib/unicode.scm 1040 */
BgL_tmpz00_11127 = BgL_aux4677z00_7180
; }  else 
{ 
obj_t BgL_auxz00_11131;
BgL_auxz00_11131 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)42033)), BGl_string4963z00zz__unicodez00, BGl_string4927z00zz__unicodez00, BgL_aux4677z00_7180); 
FAILURE(BgL_auxz00_11131,BFALSE,BFALSE);} } 
BgL_res3496z00_5139 = 
(long)CINT(BgL_tmpz00_11127); } } } } 
BgL_sz00_2223 = BgL_res3496z00_5139; } 
{ /* Llib/unicode.scm 1063 */

if(
(BgL_iz00_2220==((long)0)))
{ /* Llib/unicode.scm 1064 */
return 
BGl_substringz00zz__r4_strings_6_7z00(BgL_strz00_80, BgL_rz00_2219, 
(BgL_rz00_2219+BgL_sz00_2223));}  else 
{ 
long BgL_iz00_11142;long BgL_rz00_11140;
BgL_rz00_11140 = 
(BgL_rz00_2219+BgL_sz00_2223); 
BgL_iz00_11142 = 
(BgL_iz00_2220-((long)1)); 
BgL_iz00_2220 = BgL_iz00_11142; 
BgL_rz00_2219 = BgL_rz00_11140; 
goto BgL_zc3z04anonymousza32148ze3z87_2221;} } } } } } 

}



/* &utf8-string-ref */
obj_t BGl_z62utf8zd2stringzd2refz62zz__unicodez00(obj_t BgL_envz00_6239, obj_t BgL_strz00_6240, obj_t BgL_iz00_6241)
{
{ /* Llib/unicode.scm 1059 */
{ /* Llib/unicode.scm 1062 */
long BgL_auxz00_11151;obj_t BgL_auxz00_11144;
{ /* Llib/unicode.scm 1062 */
obj_t BgL_tmpz00_11152;
if(
INTEGERP(BgL_iz00_6241))
{ /* Llib/unicode.scm 1062 */
BgL_tmpz00_11152 = BgL_iz00_6241
; }  else 
{ 
obj_t BgL_auxz00_11155;
BgL_auxz00_11155 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)43015)), BGl_string5002z00zz__unicodez00, BGl_string4927z00zz__unicodez00, BgL_iz00_6241); 
FAILURE(BgL_auxz00_11155,BFALSE,BFALSE);} 
BgL_auxz00_11151 = 
(long)CINT(BgL_tmpz00_11152); } 
if(
STRINGP(BgL_strz00_6240))
{ /* Llib/unicode.scm 1062 */
BgL_auxz00_11144 = BgL_strz00_6240
; }  else 
{ 
obj_t BgL_auxz00_11147;
BgL_auxz00_11147 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)43015)), BGl_string5002z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_strz00_6240); 
FAILURE(BgL_auxz00_11147,BFALSE,BFALSE);} 
return 
BGl_utf8zd2stringzd2refz00zz__unicodez00(BgL_auxz00_11144, BgL_auxz00_11151);} } 

}



/* utf8-string-index->string-index */
BGL_EXPORTED_DEF long BGl_utf8zd2stringzd2indexzd2ze3stringzd2indexze3zz__unicodez00(obj_t BgL_strz00_82, long BgL_iz00_83)
{
{ /* Llib/unicode.scm 1071 */
if(
(BgL_iz00_83<((long)0)))
{ /* Llib/unicode.scm 1073 */
return ((long)-1);}  else 
{ /* Llib/unicode.scm 1076 */
long BgL_lenz00_2230;
BgL_lenz00_2230 = 
STRING_LENGTH(BgL_strz00_82); 
{ 
long BgL_rz00_2232;long BgL_iz00_2233;
BgL_rz00_2232 = ((long)0); 
BgL_iz00_2233 = BgL_iz00_83; 
BgL_zc3z04anonymousza32155ze3z87_2234:
if(
(BgL_iz00_2233==((long)0)))
{ /* Llib/unicode.scm 1079 */
return BgL_rz00_2232;}  else 
{ /* Llib/unicode.scm 1079 */
if(
(BgL_rz00_2232<BgL_lenz00_2230))
{ /* Llib/unicode.scm 1083 */
long BgL_arg2158z00_2238;long BgL_arg2159z00_2239;
{ /* Llib/unicode.scm 1083 */
long BgL_arg2160z00_2240;
{ /* Llib/unicode.scm 1083 */
long BgL_res3508z00_5171;
{ /* Llib/unicode.scm 1083 */
unsigned char BgL_cz00_5162;
{ /* Llib/unicode.scm 1082 */
long BgL_l4322z00_6826;
BgL_l4322z00_6826 = 
STRING_LENGTH(BgL_strz00_82); 
if(
BOUND_CHECK(BgL_rz00_2232, BgL_l4322z00_6826))
{ /* Llib/unicode.scm 1082 */
BgL_cz00_5162 = 
(char)(
STRING_REF(BgL_strz00_82, BgL_rz00_2232)); }  else 
{ 
obj_t BgL_auxz00_11173;
BgL_auxz00_11173 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)43599)), BGl_string4975z00zz__unicodez00, BgL_strz00_82, 
(int)(BgL_l4322z00_6826), 
(int)(BgL_rz00_2232)); 
FAILURE(BgL_auxz00_11173,BFALSE,BFALSE);} } 
{ /* Llib/unicode.scm 1041 */
long BgL_arg2140z00_5163;
BgL_arg2140z00_5163 = 
(
(
(unsigned char)(BgL_cz00_5162)) >> 
(int)(((long)4))); 
{ /* Llib/unicode.scm 1040 */
obj_t BgL_vectorz00_5169;
BgL_vectorz00_5169 = BGl_vector4996z00zz__unicodez00; 
{ /* Llib/unicode.scm 1040 */
obj_t BgL_tmpz00_11183;
{ /* Llib/unicode.scm 1040 */
obj_t BgL_aux4683z00_7186;
BgL_aux4683z00_7186 = 
VECTOR_REF(BgL_vectorz00_5169,BgL_arg2140z00_5163); 
if(
INTEGERP(BgL_aux4683z00_7186))
{ /* Llib/unicode.scm 1040 */
BgL_tmpz00_11183 = BgL_aux4683z00_7186
; }  else 
{ 
obj_t BgL_auxz00_11187;
BgL_auxz00_11187 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)42033)), BGl_string4963z00zz__unicodez00, BGl_string4927z00zz__unicodez00, BgL_aux4683z00_7186); 
FAILURE(BgL_auxz00_11187,BFALSE,BFALSE);} } 
BgL_res3508z00_5171 = 
(long)CINT(BgL_tmpz00_11183); } } } } 
BgL_arg2160z00_2240 = BgL_res3508z00_5171; } 
BgL_arg2158z00_2238 = 
(BgL_rz00_2232+BgL_arg2160z00_2240); } 
BgL_arg2159z00_2239 = 
(BgL_iz00_2233-((long)1)); 
{ 
long BgL_iz00_11195;long BgL_rz00_11194;
BgL_rz00_11194 = BgL_arg2158z00_2238; 
BgL_iz00_11195 = BgL_arg2159z00_2239; 
BgL_iz00_2233 = BgL_iz00_11195; 
BgL_rz00_2232 = BgL_rz00_11194; 
goto BgL_zc3z04anonymousza32155ze3z87_2234;} }  else 
{ /* Llib/unicode.scm 1081 */
return ((long)-1);} } } } } 

}



/* &utf8-string-index->string-index */
obj_t BGl_z62utf8zd2stringzd2indexzd2ze3stringzd2indexz81zz__unicodez00(obj_t BgL_envz00_6242, obj_t BgL_strz00_6243, obj_t BgL_iz00_6244)
{
{ /* Llib/unicode.scm 1071 */
{ /* Llib/unicode.scm 1073 */
long BgL_tmpz00_11196;
{ /* Llib/unicode.scm 1073 */
long BgL_auxz00_11204;obj_t BgL_auxz00_11197;
{ /* Llib/unicode.scm 1073 */
obj_t BgL_tmpz00_11205;
if(
INTEGERP(BgL_iz00_6244))
{ /* Llib/unicode.scm 1073 */
BgL_tmpz00_11205 = BgL_iz00_6244
; }  else 
{ 
obj_t BgL_auxz00_11208;
BgL_auxz00_11208 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)43440)), BGl_string5003z00zz__unicodez00, BGl_string4927z00zz__unicodez00, BgL_iz00_6244); 
FAILURE(BgL_auxz00_11208,BFALSE,BFALSE);} 
BgL_auxz00_11204 = 
(long)CINT(BgL_tmpz00_11205); } 
if(
STRINGP(BgL_strz00_6243))
{ /* Llib/unicode.scm 1073 */
BgL_auxz00_11197 = BgL_strz00_6243
; }  else 
{ 
obj_t BgL_auxz00_11200;
BgL_auxz00_11200 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)43440)), BGl_string5003z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_strz00_6243); 
FAILURE(BgL_auxz00_11200,BFALSE,BFALSE);} 
BgL_tmpz00_11196 = 
BGl_utf8zd2stringzd2indexzd2ze3stringzd2indexze3zz__unicodez00(BgL_auxz00_11197, BgL_auxz00_11204); } 
return 
BINT(BgL_tmpz00_11196);} } 

}



/* string-index->utf8-string-index */
BGL_EXPORTED_DEF long BGl_stringzd2indexzd2ze3utf8zd2stringzd2indexze3zz__unicodez00(obj_t BgL_strz00_84, long BgL_iz00_85)
{
{ /* Llib/unicode.scm 1090 */
if(
(BgL_iz00_85<((long)0)))
{ /* Llib/unicode.scm 1092 */
return ((long)-1);}  else 
{ /* Llib/unicode.scm 1095 */
long BgL_lenz00_2243;
BgL_lenz00_2243 = 
STRING_LENGTH(BgL_strz00_84); 
{ 
long BgL_mz00_2245;long BgL_iz00_2246;
BgL_mz00_2245 = ((long)0); 
BgL_iz00_2246 = BgL_iz00_85; 
BgL_zc3z04anonymousza32162ze3z87_2247:
if(
(BgL_iz00_2246<=((long)0)))
{ /* Llib/unicode.scm 1099 */
return BgL_mz00_2245;}  else 
{ /* Llib/unicode.scm 1099 */
if(
(BgL_mz00_2245>=BgL_lenz00_2243))
{ /* Llib/unicode.scm 1101 */
return ((long)-1);}  else 
{ /* Llib/unicode.scm 1104 */
long BgL_sz00_2251;
{ /* Llib/unicode.scm 1105 */
long BgL_res3518z00_5198;
{ /* Llib/unicode.scm 1105 */
unsigned char BgL_cz00_5189;
{ /* Llib/unicode.scm 1104 */
long BgL_l4326z00_6830;
BgL_l4326z00_6830 = 
STRING_LENGTH(BgL_strz00_84); 
if(
BOUND_CHECK(BgL_mz00_2245, BgL_l4326z00_6830))
{ /* Llib/unicode.scm 1104 */
BgL_cz00_5189 = 
(char)(
STRING_REF(BgL_strz00_84, BgL_mz00_2245)); }  else 
{ 
obj_t BgL_auxz00_11227;
BgL_auxz00_11227 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)44163)), BGl_string4975z00zz__unicodez00, BgL_strz00_84, 
(int)(BgL_l4326z00_6830), 
(int)(BgL_mz00_2245)); 
FAILURE(BgL_auxz00_11227,BFALSE,BFALSE);} } 
{ /* Llib/unicode.scm 1041 */
long BgL_arg2140z00_5190;
BgL_arg2140z00_5190 = 
(
(
(unsigned char)(BgL_cz00_5189)) >> 
(int)(((long)4))); 
{ /* Llib/unicode.scm 1040 */
obj_t BgL_vectorz00_5196;
BgL_vectorz00_5196 = BGl_vector4996z00zz__unicodez00; 
{ /* Llib/unicode.scm 1040 */
obj_t BgL_tmpz00_11237;
{ /* Llib/unicode.scm 1040 */
obj_t BgL_aux4689z00_7192;
BgL_aux4689z00_7192 = 
VECTOR_REF(BgL_vectorz00_5196,BgL_arg2140z00_5190); 
if(
INTEGERP(BgL_aux4689z00_7192))
{ /* Llib/unicode.scm 1040 */
BgL_tmpz00_11237 = BgL_aux4689z00_7192
; }  else 
{ 
obj_t BgL_auxz00_11241;
BgL_auxz00_11241 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)42033)), BGl_string4963z00zz__unicodez00, BGl_string4927z00zz__unicodez00, BgL_aux4689z00_7192); 
FAILURE(BgL_auxz00_11241,BFALSE,BFALSE);} } 
BgL_res3518z00_5198 = 
(long)CINT(BgL_tmpz00_11237); } } } } 
BgL_sz00_2251 = BgL_res3518z00_5198; } 
{ /* Llib/unicode.scm 1105 */

{ 
long BgL_iz00_11248;long BgL_mz00_11246;
BgL_mz00_11246 = 
(BgL_mz00_2245+((long)1)); 
BgL_iz00_11248 = 
(BgL_iz00_2246-BgL_sz00_2251); 
BgL_iz00_2246 = BgL_iz00_11248; 
BgL_mz00_2245 = BgL_mz00_11246; 
goto BgL_zc3z04anonymousza32162ze3z87_2247;} } } } } } } 

}



/* &string-index->utf8-string-index */
obj_t BGl_z62stringzd2indexzd2ze3utf8zd2stringzd2indexz81zz__unicodez00(obj_t BgL_envz00_6245, obj_t BgL_strz00_6246, obj_t BgL_iz00_6247)
{
{ /* Llib/unicode.scm 1090 */
{ /* Llib/unicode.scm 1092 */
long BgL_tmpz00_11250;
{ /* Llib/unicode.scm 1092 */
long BgL_auxz00_11258;obj_t BgL_auxz00_11251;
{ /* Llib/unicode.scm 1092 */
obj_t BgL_tmpz00_11259;
if(
INTEGERP(BgL_iz00_6247))
{ /* Llib/unicode.scm 1092 */
BgL_tmpz00_11259 = BgL_iz00_6247
; }  else 
{ 
obj_t BgL_auxz00_11262;
BgL_auxz00_11262 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)43979)), BGl_string5004z00zz__unicodez00, BGl_string4927z00zz__unicodez00, BgL_iz00_6247); 
FAILURE(BgL_auxz00_11262,BFALSE,BFALSE);} 
BgL_auxz00_11258 = 
(long)CINT(BgL_tmpz00_11259); } 
if(
STRINGP(BgL_strz00_6246))
{ /* Llib/unicode.scm 1092 */
BgL_auxz00_11251 = BgL_strz00_6246
; }  else 
{ 
obj_t BgL_auxz00_11254;
BgL_auxz00_11254 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)43979)), BGl_string5004z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_strz00_6246); 
FAILURE(BgL_auxz00_11254,BFALSE,BFALSE);} 
BgL_tmpz00_11250 = 
BGl_stringzd2indexzd2ze3utf8zd2stringzd2indexze3zz__unicodez00(BgL_auxz00_11251, BgL_auxz00_11258); } 
return 
BINT(BgL_tmpz00_11250);} } 

}



/* utf8-collapse! */
obj_t BGl_utf8zd2collapsez12zc0zz__unicodez00(obj_t BgL_bufferz00_92, long BgL_indexbz00_93, obj_t BgL_strz00_94, obj_t BgL_indexsz00_95)
{
{ /* Llib/unicode.scm 1131 */
{ /* Llib/unicode.scm 1133 */
long BgL_cl1z00_2263;
{ /* Llib/unicode.scm 1133 */
unsigned char BgL_tmpz00_11269;
{ /* Llib/unicode.scm 1133 */
long BgL_i4329z00_6833;
BgL_i4329z00_6833 = 
(BgL_indexbz00_93-((long)4)); 
{ /* Llib/unicode.scm 1133 */
long BgL_l4330z00_6834;
BgL_l4330z00_6834 = 
STRING_LENGTH(BgL_bufferz00_92); 
if(
BOUND_CHECK(BgL_i4329z00_6833, BgL_l4330z00_6834))
{ /* Llib/unicode.scm 1133 */
BgL_tmpz00_11269 = 
STRING_REF(BgL_bufferz00_92, BgL_i4329z00_6833)
; }  else 
{ 
obj_t BgL_auxz00_11275;
BgL_auxz00_11275 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)45774)), BGl_string4975z00zz__unicodez00, BgL_bufferz00_92, 
(int)(BgL_l4330z00_6834), 
(int)(BgL_i4329z00_6833)); 
FAILURE(BgL_auxz00_11275,BFALSE,BFALSE);} } } 
BgL_cl1z00_2263 = 
(BgL_tmpz00_11269); } 
{ /* Llib/unicode.scm 1133 */
long BgL_cl2z00_2264;
{ /* Llib/unicode.scm 1134 */
unsigned char BgL_tmpz00_11282;
{ /* Llib/unicode.scm 1134 */
long BgL_i4333z00_6837;
BgL_i4333z00_6837 = 
(BgL_indexbz00_93-((long)3)); 
{ /* Llib/unicode.scm 1134 */
long BgL_l4334z00_6838;
BgL_l4334z00_6838 = 
STRING_LENGTH(BgL_bufferz00_92); 
if(
BOUND_CHECK(BgL_i4333z00_6837, BgL_l4334z00_6838))
{ /* Llib/unicode.scm 1134 */
BgL_tmpz00_11282 = 
STRING_REF(BgL_bufferz00_92, BgL_i4333z00_6837)
; }  else 
{ 
obj_t BgL_auxz00_11288;
BgL_auxz00_11288 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)45837)), BGl_string4975z00zz__unicodez00, BgL_bufferz00_92, 
(int)(BgL_l4334z00_6838), 
(int)(BgL_i4333z00_6837)); 
FAILURE(BgL_auxz00_11288,BFALSE,BFALSE);} } } 
BgL_cl2z00_2264 = 
(BgL_tmpz00_11282); } 
{ /* Llib/unicode.scm 1134 */
long BgL_cl3z00_2265;
{ /* Llib/unicode.scm 1135 */
unsigned char BgL_tmpz00_11295;
{ /* Llib/unicode.scm 1135 */
long BgL_i4337z00_6841;
BgL_i4337z00_6841 = 
(BgL_indexbz00_93-((long)2)); 
{ /* Llib/unicode.scm 1135 */
long BgL_l4338z00_6842;
BgL_l4338z00_6842 = 
STRING_LENGTH(BgL_bufferz00_92); 
if(
BOUND_CHECK(BgL_i4337z00_6841, BgL_l4338z00_6842))
{ /* Llib/unicode.scm 1135 */
BgL_tmpz00_11295 = 
STRING_REF(BgL_bufferz00_92, BgL_i4337z00_6841)
; }  else 
{ 
obj_t BgL_auxz00_11301;
BgL_auxz00_11301 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)45900)), BGl_string4975z00zz__unicodez00, BgL_bufferz00_92, 
(int)(BgL_l4338z00_6842), 
(int)(BgL_i4337z00_6841)); 
FAILURE(BgL_auxz00_11301,BFALSE,BFALSE);} } } 
BgL_cl3z00_2265 = 
(BgL_tmpz00_11295); } 
{ /* Llib/unicode.scm 1135 */
long BgL_cl4z00_2266;
{ /* Llib/unicode.scm 1136 */
unsigned char BgL_tmpz00_11308;
{ /* Llib/unicode.scm 1136 */
long BgL_i4341z00_6845;
BgL_i4341z00_6845 = 
(BgL_indexbz00_93-((long)1)); 
{ /* Llib/unicode.scm 1136 */
long BgL_l4342z00_6846;
BgL_l4342z00_6846 = 
STRING_LENGTH(BgL_bufferz00_92); 
if(
BOUND_CHECK(BgL_i4341z00_6845, BgL_l4342z00_6846))
{ /* Llib/unicode.scm 1136 */
BgL_tmpz00_11308 = 
STRING_REF(BgL_bufferz00_92, BgL_i4341z00_6845)
; }  else 
{ 
obj_t BgL_auxz00_11314;
BgL_auxz00_11314 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)45963)), BGl_string4975z00zz__unicodez00, BgL_bufferz00_92, 
(int)(BgL_l4342z00_6846), 
(int)(BgL_i4341z00_6845)); 
FAILURE(BgL_auxz00_11314,BFALSE,BFALSE);} } } 
BgL_cl4z00_2266 = 
(BgL_tmpz00_11308); } 
{ /* Llib/unicode.scm 1137 */
long BgL_cr3z00_2268;
{ /* Llib/unicode.scm 1138 */
unsigned char BgL_tmpz00_11321;
{ /* Llib/unicode.scm 1138 */
long BgL_i4345z00_6849;
{ /* Llib/unicode.scm 1138 */
long BgL_za71za7_5271;
{ /* Llib/unicode.scm 1138 */
obj_t BgL_tmpz00_11322;
if(
INTEGERP(BgL_indexsz00_95))
{ /* Llib/unicode.scm 1138 */
BgL_tmpz00_11322 = BgL_indexsz00_95
; }  else 
{ 
obj_t BgL_auxz00_11325;
BgL_auxz00_11325 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)46110)), BGl_string5005z00zz__unicodez00, BGl_string4927z00zz__unicodez00, BgL_indexsz00_95); 
FAILURE(BgL_auxz00_11325,BFALSE,BFALSE);} 
BgL_za71za7_5271 = 
(long)CINT(BgL_tmpz00_11322); } 
BgL_i4345z00_6849 = 
(BgL_za71za7_5271+((long)2)); } 
{ /* Llib/unicode.scm 1138 */
long BgL_l4346z00_6850;
BgL_l4346z00_6850 = 
STRING_LENGTH(BgL_strz00_94); 
if(
BOUND_CHECK(BgL_i4345z00_6849, BgL_l4346z00_6850))
{ /* Llib/unicode.scm 1138 */
BgL_tmpz00_11321 = 
STRING_REF(BgL_strz00_94, BgL_i4345z00_6849)
; }  else 
{ 
obj_t BgL_auxz00_11335;
BgL_auxz00_11335 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)46086)), BGl_string4975z00zz__unicodez00, BgL_strz00_94, 
(int)(BgL_l4346z00_6850), 
(int)(BgL_i4345z00_6849)); 
FAILURE(BgL_auxz00_11335,BFALSE,BFALSE);} } } 
BgL_cr3z00_2268 = 
(BgL_tmpz00_11321); } 
{ /* Llib/unicode.scm 1138 */
long BgL_cr4z00_2269;
{ /* Llib/unicode.scm 1139 */
unsigned char BgL_tmpz00_11342;
{ /* Llib/unicode.scm 1139 */
long BgL_i4349z00_6853;
{ /* Llib/unicode.scm 1139 */
long BgL_za71za7_5278;
{ /* Llib/unicode.scm 1139 */
obj_t BgL_tmpz00_11343;
if(
INTEGERP(BgL_indexsz00_95))
{ /* Llib/unicode.scm 1139 */
BgL_tmpz00_11343 = BgL_indexsz00_95
; }  else 
{ 
obj_t BgL_auxz00_11346;
BgL_auxz00_11346 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)46170)), BGl_string5005z00zz__unicodez00, BGl_string4927z00zz__unicodez00, BgL_indexsz00_95); 
FAILURE(BgL_auxz00_11346,BFALSE,BFALSE);} 
BgL_za71za7_5278 = 
(long)CINT(BgL_tmpz00_11343); } 
BgL_i4349z00_6853 = 
(BgL_za71za7_5278+((long)3)); } 
{ /* Llib/unicode.scm 1139 */
long BgL_l4350z00_6854;
BgL_l4350z00_6854 = 
STRING_LENGTH(BgL_strz00_94); 
if(
BOUND_CHECK(BgL_i4349z00_6853, BgL_l4350z00_6854))
{ /* Llib/unicode.scm 1139 */
BgL_tmpz00_11342 = 
STRING_REF(BgL_strz00_94, BgL_i4349z00_6853)
; }  else 
{ 
obj_t BgL_auxz00_11356;
BgL_auxz00_11356 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)46146)), BGl_string4975z00zz__unicodez00, BgL_strz00_94, 
(int)(BgL_l4350z00_6854), 
(int)(BgL_i4349z00_6853)); 
FAILURE(BgL_auxz00_11356,BFALSE,BFALSE);} } } 
BgL_cr4z00_2269 = 
(BgL_tmpz00_11342); } 
{ /* Llib/unicode.scm 1140 */
long BgL_yyyyz00_2271;
BgL_yyyyz00_2271 = 
(((long)15) & BgL_cr3z00_2268); 
{ /* Llib/unicode.scm 1141 */
long BgL_xxz00_2272;
BgL_xxz00_2272 = 
(
(BgL_cl3z00_2265 >> 
(int)(((long)4))) & ((long)3)); 
{ /* Llib/unicode.scm 1143 */
long BgL_uuuuuz00_2274;
BgL_uuuuuz00_2274 = 
(
(
(BgL_cl4z00_2266 & ((long)7)) << 
(int)(((long)2))) | 
(
(BgL_cl2z00_2264 >> 
(int)(((long)4))) & ((long)3))); 
{ /* Llib/unicode.scm 1144 */

{ /* Llib/unicode.scm 1148 */
long BgL_arg2174z00_2275;unsigned char BgL_arg2175z00_2276;
BgL_arg2174z00_2275 = 
(BgL_indexbz00_93-((long)4)); 
BgL_arg2175z00_2276 = 
BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(
(
(BgL_cl1z00_2263 & ((long)240)) | 
(BgL_uuuuuz00_2274 >> 
(int)(((long)2))))); 
{ /* Llib/unicode.scm 1148 */
long BgL_l4354z00_6858;
BgL_l4354z00_6858 = 
STRING_LENGTH(BgL_bufferz00_92); 
if(
BOUND_CHECK(BgL_arg2174z00_2275, BgL_l4354z00_6858))
{ /* Llib/unicode.scm 1148 */
STRING_SET(BgL_bufferz00_92, BgL_arg2174z00_2275, BgL_arg2175z00_2276); }  else 
{ 
obj_t BgL_auxz00_11384;
BgL_auxz00_11384 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)46437)), BGl_string4995z00zz__unicodez00, BgL_bufferz00_92, 
(int)(BgL_l4354z00_6858), 
(int)(BgL_arg2174z00_2275)); 
FAILURE(BgL_auxz00_11384,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 1154 */
long BgL_arg2179z00_2280;unsigned char BgL_arg2180z00_2281;
BgL_arg2179z00_2280 = 
(BgL_indexbz00_93-((long)3)); 
BgL_arg2180z00_2281 = 
BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(BgL_cl2z00_2264); 
{ /* Llib/unicode.scm 1154 */
long BgL_l4358z00_6862;
BgL_l4358z00_6862 = 
STRING_LENGTH(BgL_bufferz00_92); 
if(
BOUND_CHECK(BgL_arg2179z00_2280, BgL_l4358z00_6862))
{ /* Llib/unicode.scm 1154 */
STRING_SET(BgL_bufferz00_92, BgL_arg2179z00_2280, BgL_arg2180z00_2281); }  else 
{ 
obj_t BgL_auxz00_11396;
BgL_auxz00_11396 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)46586)), BGl_string4995z00zz__unicodez00, BgL_bufferz00_92, 
(int)(BgL_l4358z00_6862), 
(int)(BgL_arg2179z00_2280)); 
FAILURE(BgL_auxz00_11396,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 1157 */
long BgL_arg2181z00_2282;unsigned char BgL_arg2182z00_2283;
BgL_arg2181z00_2282 = 
(BgL_indexbz00_93-((long)2)); 
BgL_arg2182z00_2283 = 
BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(
(((long)128) | 
(
(BgL_xxz00_2272 << 
(int)(((long)4))) | BgL_yyyyz00_2271))); 
{ /* Llib/unicode.scm 1157 */
long BgL_l4362z00_6866;
BgL_l4362z00_6866 = 
STRING_LENGTH(BgL_bufferz00_92); 
if(
BOUND_CHECK(BgL_arg2181z00_2282, BgL_l4362z00_6866))
{ /* Llib/unicode.scm 1157 */
STRING_SET(BgL_bufferz00_92, BgL_arg2181z00_2282, BgL_arg2182z00_2283); }  else 
{ 
obj_t BgL_auxz00_11412;
BgL_auxz00_11412 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)46666)), BGl_string4995z00zz__unicodez00, BgL_bufferz00_92, 
(int)(BgL_l4362z00_6866), 
(int)(BgL_arg2181z00_2282)); 
FAILURE(BgL_auxz00_11412,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 1162 */
long BgL_arg2186z00_2287;unsigned char BgL_arg2187z00_2288;
BgL_arg2186z00_2287 = 
(BgL_indexbz00_93-((long)1)); 
BgL_arg2187z00_2288 = 
BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(BgL_cr4z00_2269); 
{ /* Llib/unicode.scm 1162 */
long BgL_l4366z00_6870;
BgL_l4366z00_6870 = 
STRING_LENGTH(BgL_bufferz00_92); 
if(
BOUND_CHECK(BgL_arg2186z00_2287, BgL_l4366z00_6870))
{ /* Llib/unicode.scm 1162 */
return 
STRING_SET(BgL_bufferz00_92, BgL_arg2186z00_2287, BgL_arg2187z00_2288);}  else 
{ 
obj_t BgL_auxz00_11424;
BgL_auxz00_11424 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)46798)), BGl_string4995z00zz__unicodez00, BgL_bufferz00_92, 
(int)(BgL_l4366z00_6870), 
(int)(BgL_arg2186z00_2287)); 
FAILURE(BgL_auxz00_11424,BFALSE,BFALSE);} } } } } } } } } } } } } } 

}



/* _utf8-string-append-fill! */
obj_t BGl__utf8zd2stringzd2appendzd2fillz12zc0zz__unicodez00(obj_t BgL_env1131z00_101, obj_t BgL_opt1130z00_100)
{
{ /* Llib/unicode.scm 1174 */
{ /* Llib/unicode.scm 1174 */
obj_t BgL_g1132z00_2308;obj_t BgL_g1133z00_2309;obj_t BgL_g1134z00_2310;
BgL_g1132z00_2308 = 
VECTOR_REF(BgL_opt1130z00_100,((long)0)); 
BgL_g1133z00_2309 = 
VECTOR_REF(BgL_opt1130z00_100,((long)1)); 
BgL_g1134z00_2310 = 
VECTOR_REF(BgL_opt1130z00_100,((long)2)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1130z00_100)) { case ((long)3) : 

{ /* Llib/unicode.scm 1174 */

{ /* Llib/unicode.scm 1174 */
long BgL_tmpz00_11433;
{ /* Llib/unicode.scm 1174 */
obj_t BgL_auxz00_11450;long BgL_auxz00_11441;obj_t BgL_auxz00_11434;
if(
STRINGP(BgL_g1134z00_2310))
{ /* Llib/unicode.scm 1174 */
BgL_auxz00_11450 = BgL_g1134z00_2310
; }  else 
{ 
obj_t BgL_auxz00_11453;
BgL_auxz00_11453 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)47528)), BGl_string5009z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_g1134z00_2310); 
FAILURE(BgL_auxz00_11453,BFALSE,BFALSE);} 
{ /* Llib/unicode.scm 1174 */
obj_t BgL_tmpz00_11442;
if(
INTEGERP(BgL_g1133z00_2309))
{ /* Llib/unicode.scm 1174 */
BgL_tmpz00_11442 = BgL_g1133z00_2309
; }  else 
{ 
obj_t BgL_auxz00_11445;
BgL_auxz00_11445 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)47528)), BGl_string5009z00zz__unicodez00, BGl_string4927z00zz__unicodez00, BgL_g1133z00_2309); 
FAILURE(BgL_auxz00_11445,BFALSE,BFALSE);} 
BgL_auxz00_11441 = 
(long)CINT(BgL_tmpz00_11442); } 
if(
STRINGP(BgL_g1132z00_2308))
{ /* Llib/unicode.scm 1174 */
BgL_auxz00_11434 = BgL_g1132z00_2308
; }  else 
{ 
obj_t BgL_auxz00_11437;
BgL_auxz00_11437 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)47528)), BGl_string5009z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_g1132z00_2308); 
FAILURE(BgL_auxz00_11437,BFALSE,BFALSE);} 
BgL_tmpz00_11433 = 
BGl_utf8zd2stringzd2appendzd2fillz12zc0zz__unicodez00(BgL_auxz00_11434, BgL_auxz00_11441, BgL_auxz00_11450, 
BINT(((long)0))); } 
return 
BINT(BgL_tmpz00_11433);} } break;case ((long)4) : 

{ /* Llib/unicode.scm 1174 */
obj_t BgL_offsetz00_2315;
BgL_offsetz00_2315 = 
VECTOR_REF(BgL_opt1130z00_100,((long)3)); 
{ /* Llib/unicode.scm 1174 */

{ /* Llib/unicode.scm 1174 */
long BgL_tmpz00_11461;
{ /* Llib/unicode.scm 1174 */
obj_t BgL_auxz00_11478;long BgL_auxz00_11469;obj_t BgL_auxz00_11462;
if(
STRINGP(BgL_g1134z00_2310))
{ /* Llib/unicode.scm 1174 */
BgL_auxz00_11478 = BgL_g1134z00_2310
; }  else 
{ 
obj_t BgL_auxz00_11481;
BgL_auxz00_11481 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)47528)), BGl_string5009z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_g1134z00_2310); 
FAILURE(BgL_auxz00_11481,BFALSE,BFALSE);} 
{ /* Llib/unicode.scm 1174 */
obj_t BgL_tmpz00_11470;
if(
INTEGERP(BgL_g1133z00_2309))
{ /* Llib/unicode.scm 1174 */
BgL_tmpz00_11470 = BgL_g1133z00_2309
; }  else 
{ 
obj_t BgL_auxz00_11473;
BgL_auxz00_11473 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)47528)), BGl_string5009z00zz__unicodez00, BGl_string4927z00zz__unicodez00, BgL_g1133z00_2309); 
FAILURE(BgL_auxz00_11473,BFALSE,BFALSE);} 
BgL_auxz00_11469 = 
(long)CINT(BgL_tmpz00_11470); } 
if(
STRINGP(BgL_g1132z00_2308))
{ /* Llib/unicode.scm 1174 */
BgL_auxz00_11462 = BgL_g1132z00_2308
; }  else 
{ 
obj_t BgL_auxz00_11465;
BgL_auxz00_11465 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)47528)), BGl_string5009z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_g1132z00_2308); 
FAILURE(BgL_auxz00_11465,BFALSE,BFALSE);} 
BgL_tmpz00_11461 = 
BGl_utf8zd2stringzd2appendzd2fillz12zc0zz__unicodez00(BgL_auxz00_11462, BgL_auxz00_11469, BgL_auxz00_11478, BgL_offsetz00_2315); } 
return 
BINT(BgL_tmpz00_11461);} } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol5006z00zz__unicodez00, BGl_string5008z00zz__unicodez00, 
BINT(
VECTOR_LENGTH(BgL_opt1130z00_100)));} } } } 

}



/* utf8-string-append-fill! */
BGL_EXPORTED_DEF long BGl_utf8zd2stringzd2appendzd2fillz12zc0zz__unicodez00(obj_t BgL_bufferz00_96, long BgL_indexz00_97, obj_t BgL_strz00_98, obj_t BgL_offsetz00_99)
{
{ /* Llib/unicode.scm 1174 */
{ /* Llib/unicode.scm 1175 */
long BgL_lenz00_2317;
BgL_lenz00_2317 = 
STRING_LENGTH(BgL_strz00_98); 
{ /* Llib/unicode.scm 1177 */
bool_t BgL_test5760z00_11493;
if(
(BgL_indexz00_97>=((long)4)))
{ /* Llib/unicode.scm 1178 */
bool_t BgL_test5762z00_11496;
{ /* Llib/unicode.scm 1125 */
bool_t BgL_test5763z00_11497;
{ /* Llib/unicode.scm 1125 */
long BgL_tmpz00_11498;
{ /* Llib/unicode.scm 1125 */
long BgL_za71za7_5348;
{ /* Llib/unicode.scm 1125 */
obj_t BgL_tmpz00_11499;
if(
INTEGERP(BgL_offsetz00_99))
{ /* Llib/unicode.scm 1125 */
BgL_tmpz00_11499 = BgL_offsetz00_99
; }  else 
{ 
obj_t BgL_auxz00_11502;
BgL_auxz00_11502 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)45376)), BGl_string5007z00zz__unicodez00, BGl_string4927z00zz__unicodez00, BgL_offsetz00_99); 
FAILURE(BgL_auxz00_11502,BFALSE,BFALSE);} 
BgL_za71za7_5348 = 
(long)CINT(BgL_tmpz00_11499); } 
BgL_tmpz00_11498 = 
(BgL_za71za7_5348+((long)4)); } 
BgL_test5763z00_11497 = 
(BgL_lenz00_2317>=BgL_tmpz00_11498); } 
if(BgL_test5763z00_11497)
{ /* Llib/unicode.scm 1126 */
long BgL_tmpz00_11509;
{ /* Llib/unicode.scm 1126 */
unsigned char BgL_tmpz00_11510;
{ /* Llib/unicode.scm 1126 */
long BgL_kz00_5354;
{ /* Llib/unicode.scm 1126 */
obj_t BgL_tmpz00_11511;
if(
INTEGERP(BgL_offsetz00_99))
{ /* Llib/unicode.scm 1126 */
BgL_tmpz00_11511 = BgL_offsetz00_99
; }  else 
{ 
obj_t BgL_auxz00_11514;
BgL_auxz00_11514 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)45426)), BGl_string5007z00zz__unicodez00, BGl_string4927z00zz__unicodez00, BgL_offsetz00_99); 
FAILURE(BgL_auxz00_11514,BFALSE,BFALSE);} 
BgL_kz00_5354 = 
(long)CINT(BgL_tmpz00_11511); } 
{ /* Llib/unicode.scm 1126 */
long BgL_l4370z00_6874;
BgL_l4370z00_6874 = 
STRING_LENGTH(BgL_strz00_98); 
if(
BOUND_CHECK(BgL_kz00_5354, BgL_l4370z00_6874))
{ /* Llib/unicode.scm 1126 */
BgL_tmpz00_11510 = 
STRING_REF(BgL_strz00_98, BgL_kz00_5354)
; }  else 
{ 
obj_t BgL_auxz00_11523;
BgL_auxz00_11523 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)45407)), BGl_string4975z00zz__unicodez00, BgL_strz00_98, 
(int)(BgL_l4370z00_6874), 
(int)(BgL_kz00_5354)); 
FAILURE(BgL_auxz00_11523,BFALSE,BFALSE);} } } 
BgL_tmpz00_11509 = 
(BgL_tmpz00_11510); } 
BgL_test5762z00_11496 = 
(BgL_tmpz00_11509==((long)252)); }  else 
{ /* Llib/unicode.scm 1125 */
BgL_test5762z00_11496 = ((bool_t)0)
; } } 
if(BgL_test5762z00_11496)
{ /* Llib/unicode.scm 1179 */
long BgL_arg2217z00_2328;
BgL_arg2217z00_2328 = 
(BgL_indexz00_97-((long)4)); 
if(
(BgL_indexz00_97>=
(BgL_arg2217z00_2328+((long)4))))
{ /* Llib/unicode.scm 1116 */
long BgL_tmpz00_11535;
{ /* Llib/unicode.scm 1116 */
unsigned char BgL_tmpz00_11536;
{ /* Llib/unicode.scm 1116 */
long BgL_l4374z00_6878;
BgL_l4374z00_6878 = 
STRING_LENGTH(BgL_bufferz00_96); 
if(
BOUND_CHECK(BgL_arg2217z00_2328, BgL_l4374z00_6878))
{ /* Llib/unicode.scm 1116 */
BgL_tmpz00_11536 = 
STRING_REF(BgL_bufferz00_96, BgL_arg2217z00_2328)
; }  else 
{ 
obj_t BgL_auxz00_11541;
BgL_auxz00_11541 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)44811)), BGl_string4975z00zz__unicodez00, BgL_bufferz00_96, 
(int)(BgL_l4374z00_6878), 
(int)(BgL_arg2217z00_2328)); 
FAILURE(BgL_auxz00_11541,BFALSE,BFALSE);} } 
BgL_tmpz00_11535 = 
(BgL_tmpz00_11536); } 
BgL_test5760z00_11493 = 
(BgL_tmpz00_11535==((long)248)); }  else 
{ /* Llib/unicode.scm 1115 */
BgL_test5760z00_11493 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 1178 */
BgL_test5760z00_11493 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 1177 */
BgL_test5760z00_11493 = ((bool_t)0)
; } 
if(BgL_test5760z00_11493)
{ /* Llib/unicode.scm 1177 */
BGl_blitzd2stringz12zc0zz__r4_strings_6_7z00(BgL_strz00_98, ((long)4), BgL_bufferz00_96, BgL_indexz00_97, 
(BgL_lenz00_2317-((long)4))); 
BGl_utf8zd2collapsez12zc0zz__unicodez00(BgL_bufferz00_96, BgL_indexz00_97, BgL_strz00_98, BgL_offsetz00_99); 
return 
(BgL_indexz00_97+
(BgL_lenz00_2317-((long)4)));}  else 
{ /* Llib/unicode.scm 1177 */
{ /* Llib/unicode.scm 1185 */
long BgL_arg2215z00_2324;
{ /* Llib/unicode.scm 1185 */
long BgL_za72za7_5386;
{ /* Llib/unicode.scm 1185 */
obj_t BgL_tmpz00_11554;
if(
INTEGERP(BgL_offsetz00_99))
{ /* Llib/unicode.scm 1185 */
BgL_tmpz00_11554 = BgL_offsetz00_99
; }  else 
{ 
obj_t BgL_auxz00_11557;
BgL_auxz00_11557 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)48000)), BGl_string5007z00zz__unicodez00, BGl_string4927z00zz__unicodez00, BgL_offsetz00_99); 
FAILURE(BgL_auxz00_11557,BFALSE,BFALSE);} 
BgL_za72za7_5386 = 
(long)CINT(BgL_tmpz00_11554); } 
BgL_arg2215z00_2324 = 
(BgL_lenz00_2317-BgL_za72za7_5386); } 
{ /* Llib/unicode.scm 1185 */
long BgL_auxz00_11563;
{ /* Llib/unicode.scm 1185 */
obj_t BgL_tmpz00_11564;
if(
INTEGERP(BgL_offsetz00_99))
{ /* Llib/unicode.scm 1185 */
BgL_tmpz00_11564 = BgL_offsetz00_99
; }  else 
{ 
obj_t BgL_auxz00_11567;
BgL_auxz00_11567 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)47953)), BGl_string5007z00zz__unicodez00, BGl_string4927z00zz__unicodez00, BgL_offsetz00_99); 
FAILURE(BgL_auxz00_11567,BFALSE,BFALSE);} 
BgL_auxz00_11563 = 
(long)CINT(BgL_tmpz00_11564); } 
BGl_blitzd2stringz12zc0zz__r4_strings_6_7z00(BgL_strz00_98, BgL_auxz00_11563, BgL_bufferz00_96, BgL_indexz00_97, BgL_arg2215z00_2324); } } 
{ /* Llib/unicode.scm 1186 */
long BgL_tmpz00_11573;
{ /* Llib/unicode.scm 1186 */
long BgL_za72za7_5389;
{ /* Llib/unicode.scm 1186 */
obj_t BgL_tmpz00_11574;
if(
INTEGERP(BgL_offsetz00_99))
{ /* Llib/unicode.scm 1186 */
BgL_tmpz00_11574 = BgL_offsetz00_99
; }  else 
{ 
obj_t BgL_auxz00_11577;
BgL_auxz00_11577 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)48032)), BGl_string5007z00zz__unicodez00, BGl_string4927z00zz__unicodez00, BgL_offsetz00_99); 
FAILURE(BgL_auxz00_11577,BFALSE,BFALSE);} 
BgL_za72za7_5389 = 
(long)CINT(BgL_tmpz00_11574); } 
BgL_tmpz00_11573 = 
(BgL_lenz00_2317-BgL_za72za7_5389); } 
return 
(BgL_indexz00_97+BgL_tmpz00_11573);} } } } } 

}



/* utf8-string-append */
BGL_EXPORTED_DEF obj_t BGl_utf8zd2stringzd2appendz00zz__unicodez00(obj_t BgL_leftz00_102, obj_t BgL_rightz00_103)
{
{ /* Llib/unicode.scm 1196 */
{ /* Llib/unicode.scm 1197 */
long BgL_llenz00_2329;
BgL_llenz00_2329 = 
STRING_LENGTH(BgL_leftz00_102); 
{ /* Llib/unicode.scm 1197 */
long BgL_rlenz00_2330;
BgL_rlenz00_2330 = 
STRING_LENGTH(BgL_rightz00_103); 
{ /* Llib/unicode.scm 1198 */
obj_t BgL_bufferz00_2331;
BgL_bufferz00_2331 = 
make_string_sans_fill(
(BgL_llenz00_2329+BgL_rlenz00_2330)); 
{ /* Llib/unicode.scm 1199 */

{ /* Llib/unicode.scm 1200 */
long BgL_nindexz00_2332;
{ /* Llib/unicode.scm 180 */

BgL_nindexz00_2332 = 
BGl_utf8zd2stringzd2appendzd2fillz12zc0zz__unicodez00(BgL_bufferz00_2331, ((long)0), BgL_leftz00_102, 
BINT(((long)0))); } 
{ /* Llib/unicode.scm 1201 */
long BgL_nindexz00_2333;
{ /* Llib/unicode.scm 180 */

BgL_nindexz00_2333 = 
BGl_utf8zd2stringzd2appendzd2fillz12zc0zz__unicodez00(BgL_bufferz00_2331, BgL_nindexz00_2332, BgL_rightz00_103, 
BINT(((long)0))); } 
return 
bgl_string_shrink(BgL_bufferz00_2331, BgL_nindexz00_2333);} } } } } } } 

}



/* &utf8-string-append */
obj_t BGl_z62utf8zd2stringzd2appendz62zz__unicodez00(obj_t BgL_envz00_6248, obj_t BgL_leftz00_6249, obj_t BgL_rightz00_6250)
{
{ /* Llib/unicode.scm 1196 */
{ /* Llib/unicode.scm 1197 */
obj_t BgL_auxz00_11600;obj_t BgL_auxz00_11593;
if(
STRINGP(BgL_rightz00_6250))
{ /* Llib/unicode.scm 1197 */
BgL_auxz00_11600 = BgL_rightz00_6250
; }  else 
{ 
obj_t BgL_auxz00_11603;
BgL_auxz00_11603 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)48681)), BGl_string5010z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_rightz00_6250); 
FAILURE(BgL_auxz00_11603,BFALSE,BFALSE);} 
if(
STRINGP(BgL_leftz00_6249))
{ /* Llib/unicode.scm 1197 */
BgL_auxz00_11593 = BgL_leftz00_6249
; }  else 
{ 
obj_t BgL_auxz00_11596;
BgL_auxz00_11596 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)48681)), BGl_string5010z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_leftz00_6249); 
FAILURE(BgL_auxz00_11596,BFALSE,BFALSE);} 
return 
BGl_utf8zd2stringzd2appendz00zz__unicodez00(BgL_auxz00_11593, BgL_auxz00_11600);} } 

}



/* utf8-string-append* */
BGL_EXPORTED_DEF obj_t BGl_utf8zd2stringzd2appendza2za2zz__unicodez00(obj_t BgL_stringsz00_104)
{
{ /* Llib/unicode.scm 1209 */
{ /* Llib/unicode.scm 1210 */
long BgL_lenz00_2343;
BgL_lenz00_2343 = ((long)0); 
{ 
obj_t BgL_l1098z00_2345;
BgL_l1098z00_2345 = BgL_stringsz00_104; 
BgL_zc3z04anonymousza32219ze3z87_2346:
if(
PAIRP(BgL_l1098z00_2345))
{ /* Llib/unicode.scm 1211 */
{ /* Llib/unicode.scm 1212 */
obj_t BgL_strz00_2348;
BgL_strz00_2348 = 
CAR(BgL_l1098z00_2345); 
{ /* Llib/unicode.scm 1212 */
long BgL_za71za7_5407;
BgL_za71za7_5407 = BgL_lenz00_2343; 
{ /* Llib/unicode.scm 1212 */
long BgL_tmpz00_11611;
{ /* Llib/unicode.scm 1212 */
obj_t BgL_stringz00_5405;
if(
STRINGP(BgL_strz00_2348))
{ /* Llib/unicode.scm 1212 */
BgL_stringz00_5405 = BgL_strz00_2348; }  else 
{ 
obj_t BgL_auxz00_11614;
BgL_auxz00_11614 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)49451)), BGl_string5011z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_strz00_2348); 
FAILURE(BgL_auxz00_11614,BFALSE,BFALSE);} 
BgL_tmpz00_11611 = 
STRING_LENGTH(BgL_stringz00_5405); } 
BgL_lenz00_2343 = 
(BgL_za71za7_5407+BgL_tmpz00_11611); } } } 
{ 
obj_t BgL_l1098z00_11620;
BgL_l1098z00_11620 = 
CDR(BgL_l1098z00_2345); 
BgL_l1098z00_2345 = BgL_l1098z00_11620; 
goto BgL_zc3z04anonymousza32219ze3z87_2346;} }  else 
{ /* Llib/unicode.scm 1211 */
if(
NULLP(BgL_l1098z00_2345))
{ /* Llib/unicode.scm 1211 */BTRUE; }  else 
{ /* Llib/unicode.scm 1211 */
BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(BGl_string5012z00zz__unicodez00, BGl_string5013z00zz__unicodez00, BgL_l1098z00_2345, BGl_string4925z00zz__unicodez00, 
BINT(((long)49403))); } } } 
{ /* Llib/unicode.scm 1214 */
obj_t BgL_bufferz00_2353;long BgL_indexz00_2354;
BgL_bufferz00_2353 = 
make_string_sans_fill(BgL_lenz00_2343); 
BgL_indexz00_2354 = ((long)0); 
{ 
obj_t BgL_l1100z00_2356;
BgL_l1100z00_2356 = BgL_stringsz00_104; 
BgL_zc3z04anonymousza32224ze3z87_2357:
if(
PAIRP(BgL_l1100z00_2356))
{ /* Llib/unicode.scm 1216 */
{ /* Llib/unicode.scm 1217 */
obj_t BgL_strz00_2359;
BgL_strz00_2359 = 
CAR(BgL_l1100z00_2356); 
{ /* Llib/unicode.scm 1217 */
long BgL_g1133z00_2361;
BgL_g1133z00_2361 = BgL_indexz00_2354; 
{ /* Llib/unicode.scm 180 */

{ /* Llib/unicode.scm 180 */
obj_t BgL_auxz00_11630;
if(
STRINGP(BgL_strz00_2359))
{ /* Llib/unicode.scm 180 */
BgL_auxz00_11630 = BgL_strz00_2359
; }  else 
{ 
obj_t BgL_auxz00_11633;
BgL_auxz00_11633 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)7780)), BGl_string5014z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_strz00_2359); 
FAILURE(BgL_auxz00_11633,BFALSE,BFALSE);} 
BgL_indexz00_2354 = 
BGl_utf8zd2stringzd2appendzd2fillz12zc0zz__unicodez00(BgL_bufferz00_2353, BgL_g1133z00_2361, BgL_auxz00_11630, 
BINT(((long)0))); } } } } 
{ 
obj_t BgL_l1100z00_11639;
BgL_l1100z00_11639 = 
CDR(BgL_l1100z00_2356); 
BgL_l1100z00_2356 = BgL_l1100z00_11639; 
goto BgL_zc3z04anonymousza32224ze3z87_2357;} }  else 
{ /* Llib/unicode.scm 1216 */
if(
NULLP(BgL_l1100z00_2356))
{ /* Llib/unicode.scm 1216 */BTRUE; }  else 
{ /* Llib/unicode.scm 1216 */
BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(BGl_string5012z00zz__unicodez00, BGl_string5013z00zz__unicodez00, BgL_l1100z00_2356, BGl_string4925z00zz__unicodez00, 
BINT(((long)49551))); } } } 
return 
bgl_string_shrink(BgL_bufferz00_2353, BgL_indexz00_2354);} } } 

}



/* &utf8-string-append* */
obj_t BGl_z62utf8zd2stringzd2appendza2zc0zz__unicodez00(obj_t BgL_envz00_6251, obj_t BgL_stringsz00_6252)
{
{ /* Llib/unicode.scm 1209 */
return 
BGl_utf8zd2stringzd2appendza2za2zz__unicodez00(BgL_stringsz00_6252);} 

}



/* _utf8-substring */
obj_t BGl__utf8zd2substringzd2zz__unicodez00(obj_t BgL_env1138z00_109, obj_t BgL_opt1137z00_108)
{
{ /* Llib/unicode.scm 1224 */
{ /* Llib/unicode.scm 1224 */
obj_t BgL_strz00_2367;obj_t BgL_g1139z00_2368;
BgL_strz00_2367 = 
VECTOR_REF(BgL_opt1137z00_108,((long)0)); 
BgL_g1139z00_2368 = 
VECTOR_REF(BgL_opt1137z00_108,((long)1)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1137z00_108)) { case ((long)2) : 

{ /* Llib/unicode.scm 1225 */
long BgL_endz00_2372;
{ /* Llib/unicode.scm 1225 */
obj_t BgL_auxz00_11649;
if(
STRINGP(BgL_strz00_2367))
{ /* Llib/unicode.scm 1225 */
BgL_auxz00_11649 = BgL_strz00_2367
; }  else 
{ 
obj_t BgL_auxz00_11652;
BgL_auxz00_11652 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)50008)), BGl_string5018z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_strz00_2367); 
FAILURE(BgL_auxz00_11652,BFALSE,BFALSE);} 
BgL_endz00_2372 = 
BGl_utf8zd2stringzd2lengthz00zz__unicodez00(BgL_auxz00_11649); } 
{ /* Llib/unicode.scm 1224 */

{ /* Llib/unicode.scm 1224 */
long BgL_auxz00_11664;obj_t BgL_auxz00_11657;
{ /* Llib/unicode.scm 1224 */
obj_t BgL_tmpz00_11665;
if(
INTEGERP(BgL_g1139z00_2368))
{ /* Llib/unicode.scm 1224 */
BgL_tmpz00_11665 = BgL_g1139z00_2368
; }  else 
{ 
obj_t BgL_auxz00_11668;
BgL_auxz00_11668 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)49913)), BGl_string5018z00zz__unicodez00, BGl_string4927z00zz__unicodez00, BgL_g1139z00_2368); 
FAILURE(BgL_auxz00_11668,BFALSE,BFALSE);} 
BgL_auxz00_11664 = 
(long)CINT(BgL_tmpz00_11665); } 
if(
STRINGP(BgL_strz00_2367))
{ /* Llib/unicode.scm 1224 */
BgL_auxz00_11657 = BgL_strz00_2367
; }  else 
{ 
obj_t BgL_auxz00_11660;
BgL_auxz00_11660 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)49913)), BGl_string5018z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_strz00_2367); 
FAILURE(BgL_auxz00_11660,BFALSE,BFALSE);} 
return 
BGl_utf8zd2substringzd2zz__unicodez00(BgL_auxz00_11657, BgL_auxz00_11664, BgL_endz00_2372);} } } break;case ((long)3) : 

{ /* Llib/unicode.scm 1224 */
obj_t BgL_endz00_2373;
BgL_endz00_2373 = 
VECTOR_REF(BgL_opt1137z00_108,((long)2)); 
{ /* Llib/unicode.scm 1224 */

{ /* Llib/unicode.scm 1224 */
long BgL_auxz00_11691;long BgL_auxz00_11682;obj_t BgL_auxz00_11675;
{ /* Llib/unicode.scm 1224 */
obj_t BgL_tmpz00_11692;
if(
INTEGERP(BgL_endz00_2373))
{ /* Llib/unicode.scm 1224 */
BgL_tmpz00_11692 = BgL_endz00_2373
; }  else 
{ 
obj_t BgL_auxz00_11695;
BgL_auxz00_11695 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)49913)), BGl_string5018z00zz__unicodez00, BGl_string4927z00zz__unicodez00, BgL_endz00_2373); 
FAILURE(BgL_auxz00_11695,BFALSE,BFALSE);} 
BgL_auxz00_11691 = 
(long)CINT(BgL_tmpz00_11692); } 
{ /* Llib/unicode.scm 1224 */
obj_t BgL_tmpz00_11683;
if(
INTEGERP(BgL_g1139z00_2368))
{ /* Llib/unicode.scm 1224 */
BgL_tmpz00_11683 = BgL_g1139z00_2368
; }  else 
{ 
obj_t BgL_auxz00_11686;
BgL_auxz00_11686 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)49913)), BGl_string5018z00zz__unicodez00, BGl_string4927z00zz__unicodez00, BgL_g1139z00_2368); 
FAILURE(BgL_auxz00_11686,BFALSE,BFALSE);} 
BgL_auxz00_11682 = 
(long)CINT(BgL_tmpz00_11683); } 
if(
STRINGP(BgL_strz00_2367))
{ /* Llib/unicode.scm 1224 */
BgL_auxz00_11675 = BgL_strz00_2367
; }  else 
{ 
obj_t BgL_auxz00_11678;
BgL_auxz00_11678 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)49913)), BGl_string5018z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_strz00_2367); 
FAILURE(BgL_auxz00_11678,BFALSE,BFALSE);} 
return 
BGl_utf8zd2substringzd2zz__unicodez00(BgL_auxz00_11675, BgL_auxz00_11682, BgL_auxz00_11691);} } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol5015z00zz__unicodez00, BGl_string5017z00zz__unicodez00, 
BINT(
VECTOR_LENGTH(BgL_opt1137z00_108)));} } } } 

}



/* utf8-substring */
BGL_EXPORTED_DEF obj_t BGl_utf8zd2substringzd2zz__unicodez00(obj_t BgL_strz00_105, long BgL_startz00_106, long BgL_endz00_107)
{
{ /* Llib/unicode.scm 1224 */
{ /* Llib/unicode.scm 1226 */
long BgL_lenz00_2375;
BgL_lenz00_2375 = 
STRING_LENGTH(BgL_strz00_105); 
{ /* Llib/unicode.scm 1228 */
bool_t BgL_test5786z00_11707;
if(
(BgL_startz00_106<((long)0)))
{ /* Llib/unicode.scm 1228 */
BgL_test5786z00_11707 = ((bool_t)1)
; }  else 
{ /* Llib/unicode.scm 1228 */
BgL_test5786z00_11707 = 
(BgL_startz00_106>BgL_lenz00_2375)
; } 
if(BgL_test5786z00_11707)
{ /* Llib/unicode.scm 1230 */
obj_t BgL_arg2232z00_2378;
BgL_arg2232z00_2378 = 
string_append_3(BGl_string5019z00zz__unicodez00, BgL_strz00_105, BGl_string5020z00zz__unicodez00); 
{ /* Llib/unicode.scm 1229 */
obj_t BgL_aux4741z00_7244;
BgL_aux4741z00_7244 = 
BGl_errorz00zz__errorz00(BGl_string5016z00zz__unicodez00, BgL_arg2232z00_2378, 
BINT(BgL_startz00_106)); 
if(
STRINGP(BgL_aux4741z00_7244))
{ /* Llib/unicode.scm 1229 */
return BgL_aux4741z00_7244;}  else 
{ 
obj_t BgL_auxz00_11716;
BgL_auxz00_11716 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)50104)), BGl_string5016z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_aux4741z00_7244); 
FAILURE(BgL_auxz00_11716,BFALSE,BFALSE);} } }  else 
{ /* Llib/unicode.scm 1228 */
if(
(BgL_endz00_107<((long)0)))
{ /* Llib/unicode.scm 1234 */
obj_t BgL_arg2234z00_2380;
BgL_arg2234z00_2380 = 
string_append_3(BGl_string5021z00zz__unicodez00, BgL_strz00_105, BGl_string5020z00zz__unicodez00); 
{ /* Llib/unicode.scm 1233 */
obj_t BgL_aux4743z00_7246;
BgL_aux4743z00_7246 = 
BGl_errorz00zz__errorz00(BGl_string5016z00zz__unicodez00, BgL_arg2234z00_2380, 
BINT(BgL_endz00_107)); 
if(
STRINGP(BgL_aux4743z00_7246))
{ /* Llib/unicode.scm 1233 */
return BgL_aux4743z00_7246;}  else 
{ 
obj_t BgL_auxz00_11727;
BgL_auxz00_11727 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)50216)), BGl_string5016z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_aux4743z00_7246); 
FAILURE(BgL_auxz00_11727,BFALSE,BFALSE);} } }  else 
{ /* Llib/unicode.scm 1236 */
bool_t BgL_test5791z00_11731;
if(
(BgL_endz00_107<BgL_startz00_106))
{ /* Llib/unicode.scm 1236 */
BgL_test5791z00_11731 = ((bool_t)1)
; }  else 
{ /* Llib/unicode.scm 1236 */
BgL_test5791z00_11731 = 
(BgL_endz00_107>BgL_lenz00_2375)
; } 
if(BgL_test5791z00_11731)
{ /* Llib/unicode.scm 1238 */
obj_t BgL_arg2237z00_2383;
BgL_arg2237z00_2383 = 
string_append_3(BGl_string5021z00zz__unicodez00, BgL_strz00_105, BGl_string5020z00zz__unicodez00); 
{ /* Llib/unicode.scm 1237 */
obj_t BgL_aux4745z00_7248;
BgL_aux4745z00_7248 = 
BGl_errorz00zz__errorz00(BGl_string5016z00zz__unicodez00, BgL_arg2237z00_2383, 
BINT(BgL_endz00_107)); 
if(
STRINGP(BgL_aux4745z00_7248))
{ /* Llib/unicode.scm 1237 */
return BgL_aux4745z00_7248;}  else 
{ 
obj_t BgL_auxz00_11740;
BgL_auxz00_11740 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)50347)), BGl_string5016z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_aux4745z00_7248); 
FAILURE(BgL_auxz00_11740,BFALSE,BFALSE);} } }  else 
{ /* Llib/unicode.scm 1236 */
if(
(BgL_startz00_106==BgL_endz00_107))
{ /* Llib/unicode.scm 1240 */
return BGl_string4895z00zz__unicodez00;}  else 
{ 
long BgL_rz00_2386;long BgL_nz00_2387;long BgL_iz00_2388;
BgL_rz00_2386 = ((long)0); 
BgL_nz00_2387 = ((long)0); 
BgL_iz00_2388 = ((long)0); 
BgL_zc3z04anonymousza32239ze3z87_2389:
if(
(BgL_rz00_2386==BgL_lenz00_2375))
{ /* Llib/unicode.scm 1246 */
return 
BGl_substringz00zz__r4_strings_6_7z00(BgL_strz00_105, BgL_iz00_2388, BgL_rz00_2386);}  else 
{ /* Llib/unicode.scm 1248 */
unsigned char BgL_cz00_2391;
{ /* Llib/unicode.scm 1248 */
long BgL_l4378z00_6882;
BgL_l4378z00_6882 = 
STRING_LENGTH(BgL_strz00_105); 
if(
BOUND_CHECK(BgL_rz00_2386, BgL_l4378z00_6882))
{ /* Llib/unicode.scm 1248 */
BgL_cz00_2391 = 
STRING_REF(BgL_strz00_105, BgL_rz00_2386); }  else 
{ 
obj_t BgL_auxz00_11753;
BgL_auxz00_11753 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)50576)), BGl_string4975z00zz__unicodez00, BgL_strz00_105, 
(int)(BgL_l4378z00_6882), 
(int)(BgL_rz00_2386)); 
FAILURE(BgL_auxz00_11753,BFALSE,BFALSE);} } 
{ /* Llib/unicode.scm 1248 */
long BgL_sz00_2392;
{ /* Llib/unicode.scm 1249 */
long BgL_res3611z00_5451;
{ /* Llib/unicode.scm 1249 */
unsigned char BgL_cz00_5442;
BgL_cz00_5442 = 
(char)(BgL_cz00_2391); 
{ /* Llib/unicode.scm 1041 */
long BgL_arg2140z00_5443;
BgL_arg2140z00_5443 = 
(
(
(unsigned char)(BgL_cz00_5442)) >> 
(int)(((long)4))); 
{ /* Llib/unicode.scm 1040 */
obj_t BgL_vectorz00_5449;
BgL_vectorz00_5449 = BGl_vector4996z00zz__unicodez00; 
{ /* Llib/unicode.scm 1040 */
obj_t BgL_tmpz00_11764;
{ /* Llib/unicode.scm 1040 */
obj_t BgL_aux4747z00_7250;
BgL_aux4747z00_7250 = 
VECTOR_REF(BgL_vectorz00_5449,BgL_arg2140z00_5443); 
if(
INTEGERP(BgL_aux4747z00_7250))
{ /* Llib/unicode.scm 1040 */
BgL_tmpz00_11764 = BgL_aux4747z00_7250
; }  else 
{ 
obj_t BgL_auxz00_11768;
BgL_auxz00_11768 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)42033)), BGl_string4963z00zz__unicodez00, BGl_string4927z00zz__unicodez00, BgL_aux4747z00_7250); 
FAILURE(BgL_auxz00_11768,BFALSE,BFALSE);} } 
BgL_res3611z00_5451 = 
(long)CINT(BgL_tmpz00_11764); } } } } 
BgL_sz00_2392 = BgL_res3611z00_5451; } 
{ /* Llib/unicode.scm 1249 */

if(
(BgL_nz00_2387==BgL_startz00_106))
{ 
long BgL_iz00_11779;long BgL_nz00_11777;long BgL_rz00_11775;
BgL_rz00_11775 = 
(BgL_rz00_2386+BgL_sz00_2392); 
BgL_nz00_11777 = 
(BgL_nz00_2387+((long)1)); 
BgL_iz00_11779 = BgL_rz00_2386; 
BgL_iz00_2388 = BgL_iz00_11779; 
BgL_nz00_2387 = BgL_nz00_11777; 
BgL_rz00_2386 = BgL_rz00_11775; 
goto BgL_zc3z04anonymousza32239ze3z87_2389;}  else 
{ /* Llib/unicode.scm 1251 */
if(
(BgL_nz00_2387==BgL_endz00_107))
{ /* Llib/unicode.scm 1253 */
return 
BGl_substringz00zz__r4_strings_6_7z00(BgL_strz00_105, BgL_iz00_2388, BgL_rz00_2386);}  else 
{ 
long BgL_nz00_11785;long BgL_rz00_11783;
BgL_rz00_11783 = 
(BgL_rz00_2386+BgL_sz00_2392); 
BgL_nz00_11785 = 
(BgL_nz00_2387+((long)1)); 
BgL_nz00_2387 = BgL_nz00_11785; 
BgL_rz00_2386 = BgL_rz00_11783; 
goto BgL_zc3z04anonymousza32239ze3z87_2389;} } } } } } } } } } } } 

}



/* utf8->8bits-fill! */
obj_t BGl_utf8zd2ze38bitszd2fillz12zf1zz__unicodez00(obj_t BgL_nstrz00_110, obj_t BgL_strz00_111, int BgL_lenz00_112, obj_t BgL_tablez00_113)
{
{ /* Llib/unicode.scm 1261 */
{ 
obj_t BgL_rz00_2449;
{ 
obj_t BgL_rz00_2407;long BgL_wz00_2408;
BgL_rz00_2407 = 
BINT(((long)0)); 
BgL_wz00_2408 = ((long)0); 
BgL_zc3z04anonymousza32247ze3z87_2409:
{ /* Llib/unicode.scm 1297 */
bool_t BgL_test5800z00_11787;
{ /* Llib/unicode.scm 1297 */
long BgL_n1z00_5513;long BgL_n2z00_5514;
{ /* Llib/unicode.scm 1297 */
obj_t BgL_tmpz00_11788;
if(
INTEGERP(BgL_rz00_2407))
{ /* Llib/unicode.scm 1297 */
BgL_tmpz00_11788 = BgL_rz00_2407
; }  else 
{ 
obj_t BgL_auxz00_11791;
BgL_auxz00_11791 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)52088)), BGl_string4963z00zz__unicodez00, BGl_string4927z00zz__unicodez00, BgL_rz00_2407); 
FAILURE(BgL_auxz00_11791,BFALSE,BFALSE);} 
BgL_n1z00_5513 = 
(long)CINT(BgL_tmpz00_11788); } 
BgL_n2z00_5514 = 
(long)(BgL_lenz00_112); 
BgL_test5800z00_11787 = 
(BgL_n1z00_5513==BgL_n2z00_5514); } 
if(BgL_test5800z00_11787)
{ /* Llib/unicode.scm 1297 */
return BgL_nstrz00_110;}  else 
{ /* Llib/unicode.scm 1299 */
unsigned char BgL_cz00_2411;
{ /* Llib/unicode.scm 1299 */
long BgL_kz00_5517;
{ /* Llib/unicode.scm 1299 */
obj_t BgL_tmpz00_11798;
if(
INTEGERP(BgL_rz00_2407))
{ /* Llib/unicode.scm 1299 */
BgL_tmpz00_11798 = BgL_rz00_2407
; }  else 
{ 
obj_t BgL_auxz00_11801;
BgL_auxz00_11801 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)52132)), BGl_string4963z00zz__unicodez00, BGl_string4927z00zz__unicodez00, BgL_rz00_2407); 
FAILURE(BgL_auxz00_11801,BFALSE,BFALSE);} 
BgL_kz00_5517 = 
(long)CINT(BgL_tmpz00_11798); } 
{ /* Llib/unicode.scm 1299 */
long BgL_l4386z00_6890;
BgL_l4386z00_6890 = 
STRING_LENGTH(BgL_strz00_111); 
if(
BOUND_CHECK(BgL_kz00_5517, BgL_l4386z00_6890))
{ /* Llib/unicode.scm 1299 */
BgL_cz00_2411 = 
STRING_REF(BgL_strz00_111, BgL_kz00_5517); }  else 
{ 
obj_t BgL_auxz00_11810;
BgL_auxz00_11810 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)52116)), BGl_string4975z00zz__unicodez00, BgL_strz00_111, 
(int)(BgL_l4386z00_6890), 
(int)(BgL_kz00_5517)); 
FAILURE(BgL_auxz00_11810,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 1299 */
long BgL_nz00_2412;
BgL_nz00_2412 = 
(BgL_cz00_2411); 
{ /* Llib/unicode.scm 1300 */

if(
(BgL_nz00_2412<=((long)127)))
{ /* Llib/unicode.scm 1302 */
{ /* Llib/unicode.scm 1303 */
long BgL_l4390z00_6894;
BgL_l4390z00_6894 = 
STRING_LENGTH(BgL_nstrz00_110); 
if(
BOUND_CHECK(BgL_wz00_2408, BgL_l4390z00_6894))
{ /* Llib/unicode.scm 1303 */
STRING_SET(BgL_nstrz00_110, BgL_wz00_2408, BgL_cz00_2411); }  else 
{ 
obj_t BgL_auxz00_11823;
BgL_auxz00_11823 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)52194)), BGl_string4995z00zz__unicodez00, BgL_nstrz00_110, 
(int)(BgL_l4390z00_6894), 
(int)(BgL_wz00_2408)); 
FAILURE(BgL_auxz00_11823,BFALSE,BFALSE);} } 
{ /* Llib/unicode.scm 1304 */
long BgL_arg2250z00_2414;long BgL_arg2251z00_2415;
{ /* Llib/unicode.scm 1304 */
long BgL_za71za7_5526;
{ /* Llib/unicode.scm 1304 */
obj_t BgL_tmpz00_11829;
if(
INTEGERP(BgL_rz00_2407))
{ /* Llib/unicode.scm 1304 */
BgL_tmpz00_11829 = BgL_rz00_2407
; }  else 
{ 
obj_t BgL_auxz00_11832;
BgL_auxz00_11832 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)52231)), BGl_string4963z00zz__unicodez00, BGl_string4927z00zz__unicodez00, BgL_rz00_2407); 
FAILURE(BgL_auxz00_11832,BFALSE,BFALSE);} 
BgL_za71za7_5526 = 
(long)CINT(BgL_tmpz00_11829); } 
BgL_arg2250z00_2414 = 
(BgL_za71za7_5526+((long)1)); } 
BgL_arg2251z00_2415 = 
(BgL_wz00_2408+((long)1)); 
{ 
long BgL_wz00_11841;obj_t BgL_rz00_11839;
BgL_rz00_11839 = 
BINT(BgL_arg2250z00_2414); 
BgL_wz00_11841 = BgL_arg2251z00_2415; 
BgL_wz00_2408 = BgL_wz00_11841; 
BgL_rz00_2407 = BgL_rz00_11839; 
goto BgL_zc3z04anonymousza32247ze3z87_2409;} } }  else 
{ /* Llib/unicode.scm 1302 */
if(
(BgL_nz00_2412<((long)194)))
{ /* Llib/unicode.scm 1305 */
BgL_rz00_2449 = BgL_rz00_2407; 
BgL_zc3z04anonymousza32277ze3z87_2450:
{ /* Llib/unicode.scm 1271 */
obj_t BgL_arg2278z00_2451;obj_t BgL_arg2280z00_2452;
{ /* Llib/unicode.scm 1271 */
long BgL_arg2281z00_2453;
{ /* Llib/unicode.scm 1271 */
unsigned char BgL_tmpz00_11844;
{ /* Llib/unicode.scm 1271 */
long BgL_kz00_5476;
{ /* Llib/unicode.scm 1271 */
obj_t BgL_tmpz00_11845;
if(
INTEGERP(BgL_rz00_2449))
{ /* Llib/unicode.scm 1271 */
BgL_tmpz00_11845 = BgL_rz00_2449
; }  else 
{ 
obj_t BgL_auxz00_11848;
BgL_auxz00_11848 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)51374)), BGl_string5022z00zz__unicodez00, BGl_string4927z00zz__unicodez00, BgL_rz00_2449); 
FAILURE(BgL_auxz00_11848,BFALSE,BFALSE);} 
BgL_kz00_5476 = 
(long)CINT(BgL_tmpz00_11845); } 
{ /* Llib/unicode.scm 1271 */
long BgL_l4382z00_6886;
BgL_l4382z00_6886 = 
STRING_LENGTH(BgL_strz00_111); 
if(
BOUND_CHECK(BgL_kz00_5476, BgL_l4382z00_6886))
{ /* Llib/unicode.scm 1271 */
BgL_tmpz00_11844 = 
STRING_REF(BgL_strz00_111, BgL_kz00_5476)
; }  else 
{ 
obj_t BgL_auxz00_11857;
BgL_auxz00_11857 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)51358)), BGl_string4975z00zz__unicodez00, BgL_strz00_111, 
(int)(BgL_l4382z00_6886), 
(int)(BgL_kz00_5476)); 
FAILURE(BgL_auxz00_11857,BFALSE,BFALSE);} } } 
BgL_arg2281z00_2453 = 
(BgL_tmpz00_11844); } 
{ /* Llib/unicode.scm 1270 */
obj_t BgL_list2282z00_2454;
{ /* Llib/unicode.scm 1270 */
obj_t BgL_arg2283z00_2455;
BgL_arg2283z00_2455 = 
MAKE_YOUNG_PAIR(BgL_rz00_2449, BNIL); 
BgL_list2282z00_2454 = 
MAKE_YOUNG_PAIR(
BINT(BgL_arg2281z00_2453), BgL_arg2283z00_2455); } 
BgL_arg2278z00_2451 = 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string5023z00zz__unicodez00, BgL_list2282z00_2454); } } 
{ /* Llib/unicode.scm 1273 */
obj_t BgL_arg2285z00_2457;
{ /* Llib/unicode.scm 1273 */
int BgL_arg2286z00_2458;
{ /* Llib/unicode.scm 1273 */
long BgL_bz00_2460;
{ /* Llib/unicode.scm 1273 */
long BgL_za71za7_5480;
{ /* Llib/unicode.scm 1273 */
obj_t BgL_tmpz00_11868;
if(
INTEGERP(BgL_rz00_2449))
{ /* Llib/unicode.scm 1273 */
BgL_tmpz00_11868 = BgL_rz00_2449
; }  else 
{ 
obj_t BgL_auxz00_11871;
BgL_auxz00_11871 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)51438)), BGl_string5022z00zz__unicodez00, BGl_string4927z00zz__unicodez00, BgL_rz00_2449); 
FAILURE(BgL_auxz00_11871,BFALSE,BFALSE);} 
BgL_za71za7_5480 = 
(long)CINT(BgL_tmpz00_11868); } 
BgL_bz00_2460 = 
(BgL_za71za7_5480+((long)10)); } 
if(
(
(long)(BgL_lenz00_112)<BgL_bz00_2460))
{ /* Llib/unicode.scm 1273 */
BgL_arg2286z00_2458 = BgL_lenz00_112; }  else 
{ /* Llib/unicode.scm 1273 */
BgL_arg2286z00_2458 = 
(int)(BgL_bz00_2460); } } 
{ /* Llib/unicode.scm 1273 */
long BgL_auxz00_11881;
{ /* Llib/unicode.scm 1273 */
obj_t BgL_tmpz00_11882;
if(
INTEGERP(BgL_rz00_2449))
{ /* Llib/unicode.scm 1273 */
BgL_tmpz00_11882 = BgL_rz00_2449
; }  else 
{ 
obj_t BgL_auxz00_11885;
BgL_auxz00_11885 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)51405)), BGl_string5022z00zz__unicodez00, BGl_string4927z00zz__unicodez00, BgL_rz00_2449); 
FAILURE(BgL_auxz00_11885,BFALSE,BFALSE);} 
BgL_auxz00_11881 = 
(long)CINT(BgL_tmpz00_11882); } 
BgL_arg2285z00_2457 = 
BGl_substringz00zz__r4_strings_6_7z00(BgL_strz00_111, BgL_auxz00_11881, 
(long)(BgL_arg2286z00_2458)); } } 
BgL_arg2280z00_2452 = 
string_for_read(BgL_arg2285z00_2457); } 
return 
BGl_errorz00zz__errorz00(BGl_string5024z00zz__unicodez00, BgL_arg2278z00_2451, BgL_arg2280z00_2452);} }  else 
{ /* Llib/unicode.scm 1307 */
obj_t BgL_g1059z00_2417;
if(
CBOOL(BgL_tablez00_113))
{ /* Llib/unicode.scm 1307 */
obj_t BgL_auxz00_11896;
{ /* Llib/unicode.scm 1307 */
bool_t BgL_test5814z00_11898;
if(
PAIRP(BgL_tablez00_113))
{ /* Llib/unicode.scm 1307 */
BgL_test5814z00_11898 = ((bool_t)1)
; }  else 
{ /* Llib/unicode.scm 1307 */
BgL_test5814z00_11898 = 
NULLP(BgL_tablez00_113)
; } 
if(BgL_test5814z00_11898)
{ /* Llib/unicode.scm 1307 */
BgL_auxz00_11896 = BgL_tablez00_113
; }  else 
{ 
obj_t BgL_auxz00_11902;
BgL_auxz00_11902 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)52304)), BGl_string4963z00zz__unicodez00, BGl_string4962z00zz__unicodez00, BgL_tablez00_113); 
FAILURE(BgL_auxz00_11902,BFALSE,BFALSE);} } 
BgL_g1059z00_2417 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(
BINT(BgL_nz00_2412), BgL_auxz00_11896); }  else 
{ /* Llib/unicode.scm 1307 */
BgL_g1059z00_2417 = BFALSE; } 
if(
CBOOL(BgL_g1059z00_2417))
{ 
long BgL_wz00_11911;obj_t BgL_rz00_11909;
BgL_rz00_11909 = 
BGl_tablezd2ze38bitsze70zd6zz__unicodez00(BgL_nstrz00_110, BgL_tablez00_113, BgL_strz00_111, BgL_lenz00_112, BgL_g1059z00_2417, BgL_rz00_2407, BgL_wz00_2408, BgL_nz00_2412); 
BgL_wz00_11911 = 
(BgL_wz00_2408+((long)1)); 
BgL_wz00_2408 = BgL_wz00_11911; 
BgL_rz00_2407 = BgL_rz00_11909; 
goto BgL_zc3z04anonymousza32247ze3z87_2409;}  else 
{ /* Llib/unicode.scm 1307 */
if(
(BgL_nz00_2412<=((long)223)))
{ /* Llib/unicode.scm 1312 */
bool_t BgL_test5818z00_11915;
{ /* Llib/unicode.scm 1312 */
long BgL_n1z00_5538;
{ /* Llib/unicode.scm 1312 */
obj_t BgL_tmpz00_11916;
if(
INTEGERP(BgL_rz00_2407))
{ /* Llib/unicode.scm 1312 */
BgL_tmpz00_11916 = BgL_rz00_2407
; }  else 
{ 
obj_t BgL_auxz00_11919;
BgL_auxz00_11919 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)52424)), BGl_string4963z00zz__unicodez00, BGl_string4927z00zz__unicodez00, BgL_rz00_2407); 
FAILURE(BgL_auxz00_11919,BFALSE,BFALSE);} 
BgL_n1z00_5538 = 
(long)CINT(BgL_tmpz00_11916); } 
BgL_test5818z00_11915 = 
(BgL_n1z00_5538==
(
(long)(BgL_lenz00_112)-((long)1))); } 
if(BgL_test5818z00_11915)
{ /* Llib/unicode.scm 1312 */
return 
BGl_errorzd2toozd2shortze70ze7zz__unicodez00(BgL_lenz00_112, BgL_strz00_111, BgL_rz00_2407);}  else 
{ /* Llib/unicode.scm 1314 */
unsigned char BgL_ncz00_2425;
{ /* Llib/unicode.scm 1314 */
long BgL_i4393z00_6897;
{ /* Llib/unicode.scm 1314 */
long BgL_za71za7_5541;
{ /* Llib/unicode.scm 1314 */
obj_t BgL_tmpz00_11928;
if(
INTEGERP(BgL_rz00_2407))
{ /* Llib/unicode.scm 1314 */
BgL_tmpz00_11928 = BgL_rz00_2407
; }  else 
{ 
obj_t BgL_auxz00_11931;
BgL_auxz00_11931 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)52505)), BGl_string4963z00zz__unicodez00, BGl_string4927z00zz__unicodez00, BgL_rz00_2407); 
FAILURE(BgL_auxz00_11931,BFALSE,BFALSE);} 
BgL_za71za7_5541 = 
(long)CINT(BgL_tmpz00_11928); } 
BgL_i4393z00_6897 = 
(BgL_za71za7_5541+((long)1)); } 
{ /* Llib/unicode.scm 1314 */
long BgL_l4394z00_6898;
BgL_l4394z00_6898 = 
STRING_LENGTH(BgL_strz00_111); 
if(
BOUND_CHECK(BgL_i4393z00_6897, BgL_l4394z00_6898))
{ /* Llib/unicode.scm 1314 */
BgL_ncz00_2425 = 
STRING_REF(BgL_strz00_111, BgL_i4393z00_6897); }  else 
{ 
obj_t BgL_auxz00_11941;
BgL_auxz00_11941 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)52484)), BGl_string4975z00zz__unicodez00, BgL_strz00_111, 
(int)(BgL_l4394z00_6898), 
(int)(BgL_i4393z00_6897)); 
FAILURE(BgL_auxz00_11941,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 1314 */
long BgL_nnz00_2426;
BgL_nnz00_2426 = 
(BgL_ncz00_2425); 
{ /* Llib/unicode.scm 1315 */

{ /* Llib/unicode.scm 1316 */
long BgL_mz00_2427;
BgL_mz00_2427 = 
(
(
(BgL_nz00_2412 & ((long)31)) << 
(int)(((long)6))) | 
(((long)63) & BgL_nnz00_2426)); 
if(
(BgL_mz00_2427>((long)255)))
{ /* Llib/unicode.scm 1318 */
{ /* Llib/unicode.scm 1323 */
long BgL_l4398z00_6902;
BgL_l4398z00_6902 = 
STRING_LENGTH(BgL_nstrz00_110); 
if(
BOUND_CHECK(BgL_wz00_2408, BgL_l4398z00_6902))
{ /* Llib/unicode.scm 1323 */
STRING_SET(BgL_nstrz00_110, BgL_wz00_2408, ((unsigned char)'.')); }  else 
{ 
obj_t BgL_auxz00_11959;
BgL_auxz00_11959 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)52799)), BGl_string4995z00zz__unicodez00, BgL_nstrz00_110, 
(int)(BgL_l4398z00_6902), 
(int)(BgL_wz00_2408)); 
FAILURE(BgL_auxz00_11959,BFALSE,BFALSE);} } 
{ /* Llib/unicode.scm 1324 */
long BgL_arg2259z00_2429;long BgL_arg2260z00_2430;
{ /* Llib/unicode.scm 1324 */
long BgL_za71za7_5562;
{ /* Llib/unicode.scm 1324 */
obj_t BgL_tmpz00_11965;
if(
INTEGERP(BgL_rz00_2407))
{ /* Llib/unicode.scm 1324 */
BgL_tmpz00_11965 = BgL_rz00_2407
; }  else 
{ 
obj_t BgL_auxz00_11968;
BgL_auxz00_11968 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)52841)), BGl_string4963z00zz__unicodez00, BGl_string4927z00zz__unicodez00, BgL_rz00_2407); 
FAILURE(BgL_auxz00_11968,BFALSE,BFALSE);} 
BgL_za71za7_5562 = 
(long)CINT(BgL_tmpz00_11965); } 
BgL_arg2259z00_2429 = 
(BgL_za71za7_5562+((long)2)); } 
BgL_arg2260z00_2430 = 
(BgL_wz00_2408+((long)1)); 
{ 
long BgL_wz00_11977;obj_t BgL_rz00_11975;
BgL_rz00_11975 = 
BINT(BgL_arg2259z00_2429); 
BgL_wz00_11977 = BgL_arg2260z00_2430; 
BgL_wz00_2408 = BgL_wz00_11977; 
BgL_rz00_2407 = BgL_rz00_11975; 
goto BgL_zc3z04anonymousza32247ze3z87_2409;} } }  else 
{ /* Llib/unicode.scm 1318 */
{ /* Llib/unicode.scm 1326 */
unsigned char BgL_arg2261z00_2431;
BgL_arg2261z00_2431 = 
BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(BgL_mz00_2427); 
{ /* Llib/unicode.scm 1326 */
long BgL_l4402z00_6906;
BgL_l4402z00_6906 = 
STRING_LENGTH(BgL_nstrz00_110); 
if(
BOUND_CHECK(BgL_wz00_2408, BgL_l4402z00_6906))
{ /* Llib/unicode.scm 1326 */
STRING_SET(BgL_nstrz00_110, BgL_wz00_2408, BgL_arg2261z00_2431); }  else 
{ 
obj_t BgL_auxz00_11983;
BgL_auxz00_11983 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)52881)), BGl_string4995z00zz__unicodez00, BgL_nstrz00_110, 
(int)(BgL_l4402z00_6906), 
(int)(BgL_wz00_2408)); 
FAILURE(BgL_auxz00_11983,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 1327 */
long BgL_arg2262z00_2432;long BgL_arg2263z00_2433;
{ /* Llib/unicode.scm 1327 */
long BgL_za71za7_5569;
{ /* Llib/unicode.scm 1327 */
obj_t BgL_tmpz00_11989;
if(
INTEGERP(BgL_rz00_2407))
{ /* Llib/unicode.scm 1327 */
BgL_tmpz00_11989 = BgL_rz00_2407
; }  else 
{ 
obj_t BgL_auxz00_11992;
BgL_auxz00_11992 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)52937)), BGl_string4963z00zz__unicodez00, BGl_string4927z00zz__unicodez00, BgL_rz00_2407); 
FAILURE(BgL_auxz00_11992,BFALSE,BFALSE);} 
BgL_za71za7_5569 = 
(long)CINT(BgL_tmpz00_11989); } 
BgL_arg2262z00_2432 = 
(BgL_za71za7_5569+((long)2)); } 
BgL_arg2263z00_2433 = 
(BgL_wz00_2408+((long)1)); 
{ 
long BgL_wz00_12001;obj_t BgL_rz00_11999;
BgL_rz00_11999 = 
BINT(BgL_arg2262z00_2432); 
BgL_wz00_12001 = BgL_arg2263z00_2433; 
BgL_wz00_2408 = BgL_wz00_12001; 
BgL_rz00_2407 = BgL_rz00_11999; 
goto BgL_zc3z04anonymousza32247ze3z87_2409;} } } } } } } }  else 
{ 
obj_t BgL_rz00_12002;
BgL_rz00_12002 = BgL_rz00_2407; 
BgL_rz00_2449 = BgL_rz00_12002; 
goto BgL_zc3z04anonymousza32277ze3z87_2450;} } } } } } } } } } } 

}



/* error-too-short~0 */
obj_t BGl_errorzd2toozd2shortze70ze7zz__unicodez00(int BgL_lenz00_6292, obj_t BgL_strz00_6291, obj_t BgL_rz00_2441)
{
{ /* Llib/unicode.scm 1266 */
{ /* Llib/unicode.scm 1266 */
obj_t BgL_arg2272z00_2443;
{ /* Llib/unicode.scm 1266 */
obj_t BgL_arg2273z00_2444;
{ /* Llib/unicode.scm 1266 */
long BgL_arg2275z00_2445;
{ /* Llib/unicode.scm 1266 */
long BgL_bz00_2447;
{ /* Llib/unicode.scm 1266 */
long BgL_za71za7_5468;
{ /* Llib/unicode.scm 1266 */
obj_t BgL_tmpz00_12004;
if(
INTEGERP(BgL_rz00_2441))
{ /* Llib/unicode.scm 1266 */
BgL_tmpz00_12004 = BgL_rz00_2441
; }  else 
{ 
obj_t BgL_auxz00_12007;
BgL_auxz00_12007 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)51218)), BGl_string5025z00zz__unicodez00, BGl_string4927z00zz__unicodez00, BgL_rz00_2441); 
FAILURE(BgL_auxz00_12007,BFALSE,BFALSE);} 
BgL_za71za7_5468 = 
(long)CINT(BgL_tmpz00_12004); } 
BgL_bz00_2447 = 
(BgL_za71za7_5468-((long)10)); } 
if(
(((long)0)>BgL_bz00_2447))
{ /* Llib/unicode.scm 1266 */
BgL_arg2275z00_2445 = ((long)0); }  else 
{ /* Llib/unicode.scm 1266 */
BgL_arg2275z00_2445 = BgL_bz00_2447; } } 
BgL_arg2273z00_2444 = 
BGl_substringz00zz__r4_strings_6_7z00(BgL_strz00_6291, BgL_arg2275z00_2445, 
(long)(BgL_lenz00_6292)); } 
BgL_arg2272z00_2443 = 
string_for_read(BgL_arg2273z00_2444); } 
return 
BGl_errorz00zz__errorz00(BGl_string5024z00zz__unicodez00, BGl_string5026z00zz__unicodez00, BgL_arg2272z00_2443);} } 

}



/* table->8bits~0 */
obj_t BGl_tablezd2ze38bitsze70zd6zz__unicodez00(obj_t BgL_nstrz00_6296, obj_t BgL_tablez00_6295, obj_t BgL_strz00_6294, int BgL_lenz00_6293, obj_t BgL_subtablez00_2474, obj_t BgL_rz00_2475, long BgL_wz00_2476, long BgL_nz00_2477)
{
{ /* Llib/unicode.scm 1293 */
{ 
obj_t BgL_rz00_2462;
{ /* Llib/unicode.scm 1281 */
obj_t BgL_g1056z00_2479;long BgL_g1057z00_2480;
{ /* Llib/unicode.scm 1281 */
obj_t BgL_auxz00_12019;
{ /* Llib/unicode.scm 1281 */
bool_t BgL_test5829z00_12021;
if(
PAIRP(BgL_tablez00_6295))
{ /* Llib/unicode.scm 1281 */
BgL_test5829z00_12021 = ((bool_t)1)
; }  else 
{ /* Llib/unicode.scm 1281 */
BgL_test5829z00_12021 = 
NULLP(BgL_tablez00_6295)
; } 
if(BgL_test5829z00_12021)
{ /* Llib/unicode.scm 1281 */
BgL_auxz00_12019 = BgL_tablez00_6295
; }  else 
{ 
obj_t BgL_auxz00_12025;
BgL_auxz00_12025 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)51714)), BGl_string5029z00zz__unicodez00, BGl_string4962z00zz__unicodez00, BgL_tablez00_6295); 
FAILURE(BgL_auxz00_12025,BFALSE,BFALSE);} } 
BgL_g1056z00_2479 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(
BINT(BgL_nz00_2477), BgL_auxz00_12019); } 
{ /* Llib/unicode.scm 1282 */
long BgL_za71za7_5494;
{ /* Llib/unicode.scm 1282 */
obj_t BgL_tmpz00_12030;
if(
INTEGERP(BgL_rz00_2475))
{ /* Llib/unicode.scm 1282 */
BgL_tmpz00_12030 = BgL_rz00_2475
; }  else 
{ 
obj_t BgL_auxz00_12033;
BgL_auxz00_12033 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)51734)), BGl_string5029z00zz__unicodez00, BGl_string4927z00zz__unicodez00, BgL_rz00_2475); 
FAILURE(BgL_auxz00_12033,BFALSE,BFALSE);} 
BgL_za71za7_5494 = 
(long)CINT(BgL_tmpz00_12030); } 
BgL_g1057z00_2480 = 
(BgL_za71za7_5494+((long)1)); } 
{ 
obj_t BgL_subtablez00_2482;long BgL_nrz00_2483;
BgL_subtablez00_2482 = BgL_g1056z00_2479; 
BgL_nrz00_2483 = BgL_g1057z00_2480; 
BgL_zc3z04anonymousza32297ze3z87_2484:
if(
CBOOL(BgL_subtablez00_2482))
{ /* Llib/unicode.scm 1286 */
bool_t BgL_test5833z00_12041;
{ /* Llib/unicode.scm 1286 */
obj_t BgL_tmpz00_12042;
{ /* Llib/unicode.scm 1286 */
obj_t BgL_pairz00_5496;
if(
PAIRP(BgL_subtablez00_2482))
{ /* Llib/unicode.scm 1286 */
BgL_pairz00_5496 = BgL_subtablez00_2482; }  else 
{ 
obj_t BgL_auxz00_12045;
BgL_auxz00_12045 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)51814)), BGl_string5030z00zz__unicodez00, BGl_string4960z00zz__unicodez00, BgL_subtablez00_2482); 
FAILURE(BgL_auxz00_12045,BFALSE,BFALSE);} 
BgL_tmpz00_12042 = 
CDR(BgL_pairz00_5496); } 
BgL_test5833z00_12041 = 
CHARP(BgL_tmpz00_12042); } 
if(BgL_test5833z00_12041)
{ /* Llib/unicode.scm 1286 */
{ /* Llib/unicode.scm 1287 */
obj_t BgL_arg2300z00_2487;
{ /* Llib/unicode.scm 1287 */
obj_t BgL_pairz00_5498;
if(
PAIRP(BgL_subtablez00_2482))
{ /* Llib/unicode.scm 1287 */
BgL_pairz00_5498 = BgL_subtablez00_2482; }  else 
{ 
obj_t BgL_auxz00_12053;
BgL_auxz00_12053 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)51856)), BGl_string5030z00zz__unicodez00, BGl_string4960z00zz__unicodez00, BgL_subtablez00_2482); 
FAILURE(BgL_auxz00_12053,BFALSE,BFALSE);} 
BgL_arg2300z00_2487 = 
CDR(BgL_pairz00_5498); } 
{ /* Llib/unicode.scm 1287 */
unsigned char BgL_charz00_5501;
{ /* Llib/unicode.scm 1287 */
obj_t BgL_tmpz00_12058;
if(
CHARP(BgL_arg2300z00_2487))
{ /* Llib/unicode.scm 1287 */
BgL_tmpz00_12058 = BgL_arg2300z00_2487
; }  else 
{ 
obj_t BgL_auxz00_12061;
BgL_auxz00_12061 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)51864)), BGl_string5030z00zz__unicodez00, BGl_string5000z00zz__unicodez00, BgL_arg2300z00_2487); 
FAILURE(BgL_auxz00_12061,BFALSE,BFALSE);} 
BgL_charz00_5501 = 
CCHAR(BgL_tmpz00_12058); } 
{ /* Llib/unicode.scm 1287 */
long BgL_l4406z00_6910;
BgL_l4406z00_6910 = 
STRING_LENGTH(BgL_nstrz00_6296); 
if(
BOUND_CHECK(BgL_wz00_2476, BgL_l4406z00_6910))
{ /* Llib/unicode.scm 1287 */
STRING_SET(BgL_nstrz00_6296, BgL_wz00_2476, BgL_charz00_5501); }  else 
{ 
obj_t BgL_auxz00_12070;
BgL_auxz00_12070 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)51831)), BGl_string4995z00zz__unicodez00, BgL_nstrz00_6296, 
(int)(BgL_l4406z00_6910), 
(int)(BgL_wz00_2476)); 
FAILURE(BgL_auxz00_12070,BFALSE,BFALSE);} } } } 
return 
BINT(BgL_nrz00_2483);}  else 
{ /* Llib/unicode.scm 1286 */
if(
(BgL_nrz00_2483==
(long)(BgL_lenz00_6293)))
{ /* Llib/unicode.scm 1289 */
return 
BGl_errorzd2toozd2shortze70ze7zz__unicodez00(BgL_lenz00_6293, BgL_strz00_6294, BgL_rz00_2475);}  else 
{ /* Llib/unicode.scm 1292 */
long BgL_ncz00_2489;
{ /* Llib/unicode.scm 1292 */
unsigned char BgL_tmpz00_12081;
{ /* Llib/unicode.scm 1292 */
long BgL_l4410z00_6914;
BgL_l4410z00_6914 = 
STRING_LENGTH(BgL_strz00_6294); 
if(
BOUND_CHECK(BgL_nrz00_2483, BgL_l4410z00_6914))
{ /* Llib/unicode.scm 1292 */
BgL_tmpz00_12081 = 
STRING_REF(BgL_strz00_6294, BgL_nrz00_2483)
; }  else 
{ 
obj_t BgL_auxz00_12086;
BgL_auxz00_12086 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)51965)), BGl_string4975z00zz__unicodez00, BgL_strz00_6294, 
(int)(BgL_l4410z00_6914), 
(int)(BgL_nrz00_2483)); 
FAILURE(BgL_auxz00_12086,BFALSE,BFALSE);} } 
BgL_ncz00_2489 = 
(BgL_tmpz00_12081); } 
{ /* Llib/unicode.scm 1293 */
obj_t BgL_arg2302z00_2490;long BgL_arg2303z00_2491;
{ /* Llib/unicode.scm 1293 */
obj_t BgL_auxz00_12093;
{ /* Llib/unicode.scm 1293 */
obj_t BgL_pairz00_5510;
if(
PAIRP(BgL_subtablez00_2482))
{ /* Llib/unicode.scm 1293 */
BgL_pairz00_5510 = BgL_subtablez00_2482; }  else 
{ 
obj_t BgL_auxz00_12097;
BgL_auxz00_12097 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)52010)), BGl_string5030z00zz__unicodez00, BGl_string4960z00zz__unicodez00, BgL_subtablez00_2482); 
FAILURE(BgL_auxz00_12097,BFALSE,BFALSE);} 
{ /* Llib/unicode.scm 1293 */
obj_t BgL_aux4791z00_7294;
BgL_aux4791z00_7294 = 
CDR(BgL_pairz00_5510); 
{ /* Llib/unicode.scm 1293 */
bool_t BgL_test5841z00_12102;
if(
PAIRP(BgL_aux4791z00_7294))
{ /* Llib/unicode.scm 1293 */
BgL_test5841z00_12102 = ((bool_t)1)
; }  else 
{ /* Llib/unicode.scm 1293 */
BgL_test5841z00_12102 = 
NULLP(BgL_aux4791z00_7294)
; } 
if(BgL_test5841z00_12102)
{ /* Llib/unicode.scm 1293 */
BgL_auxz00_12093 = BgL_aux4791z00_7294
; }  else 
{ 
obj_t BgL_auxz00_12106;
BgL_auxz00_12106 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)52005)), BGl_string5030z00zz__unicodez00, BGl_string4962z00zz__unicodez00, BgL_aux4791z00_7294); 
FAILURE(BgL_auxz00_12106,BFALSE,BFALSE);} } } } 
BgL_arg2302z00_2490 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(
BINT(BgL_ncz00_2489), BgL_auxz00_12093); } 
BgL_arg2303z00_2491 = 
(BgL_nrz00_2483+((long)1)); 
{ 
long BgL_nrz00_12113;obj_t BgL_subtablez00_12112;
BgL_subtablez00_12112 = BgL_arg2302z00_2490; 
BgL_nrz00_12113 = BgL_arg2303z00_2491; 
BgL_nrz00_2483 = BgL_nrz00_12113; 
BgL_subtablez00_2482 = BgL_subtablez00_12112; 
goto BgL_zc3z04anonymousza32297ze3z87_2484;} } } } }  else 
{ /* Llib/unicode.scm 1284 */
BgL_rz00_2462 = BgL_rz00_2475; 
{ /* Llib/unicode.scm 1277 */
obj_t BgL_arg2289z00_2464;obj_t BgL_arg2290z00_2465;
{ /* Llib/unicode.scm 1277 */
obj_t BgL_arg2291z00_2466;
{ /* Ieee/fixnum.scm 979 */

{ /* Ieee/fixnum.scm 979 */
long BgL_auxz00_12114;
{ /* Llib/unicode.scm 1277 */
obj_t BgL_tmpz00_12115;
if(
INTEGERP(BgL_rz00_2462))
{ /* Llib/unicode.scm 1277 */
BgL_tmpz00_12115 = BgL_rz00_2462
; }  else 
{ 
obj_t BgL_auxz00_12118;
BgL_auxz00_12118 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)51570)), BGl_string5027z00zz__unicodez00, BGl_string4927z00zz__unicodez00, BgL_rz00_2462); 
FAILURE(BgL_auxz00_12118,BFALSE,BFALSE);} 
BgL_auxz00_12114 = 
(long)CINT(BgL_tmpz00_12115); } 
BgL_arg2291z00_2466 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_12114, ((long)10)); } } 
BgL_arg2289z00_2464 = 
string_append(BGl_string5028z00zz__unicodez00, BgL_arg2291z00_2466); } 
{ /* Llib/unicode.scm 1278 */
obj_t BgL_arg2292z00_2469;
{ /* Llib/unicode.scm 1278 */
int BgL_arg2294z00_2470;
{ /* Llib/unicode.scm 1278 */
long BgL_bz00_2472;
{ /* Llib/unicode.scm 1278 */
long BgL_za71za7_5487;
{ /* Llib/unicode.scm 1278 */
obj_t BgL_tmpz00_12125;
if(
INTEGERP(BgL_rz00_2462))
{ /* Llib/unicode.scm 1278 */
BgL_tmpz00_12125 = BgL_rz00_2462
; }  else 
{ 
obj_t BgL_auxz00_12128;
BgL_auxz00_12128 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)51626)), BGl_string5027z00zz__unicodez00, BGl_string4927z00zz__unicodez00, BgL_rz00_2462); 
FAILURE(BgL_auxz00_12128,BFALSE,BFALSE);} 
BgL_za71za7_5487 = 
(long)CINT(BgL_tmpz00_12125); } 
BgL_bz00_2472 = 
(BgL_za71za7_5487+((long)10)); } 
if(
(
(long)(BgL_lenz00_6293)<BgL_bz00_2472))
{ /* Llib/unicode.scm 1278 */
BgL_arg2294z00_2470 = BgL_lenz00_6293; }  else 
{ /* Llib/unicode.scm 1278 */
BgL_arg2294z00_2470 = 
(int)(BgL_bz00_2472); } } 
{ /* Llib/unicode.scm 1278 */
long BgL_auxz00_12138;
{ /* Llib/unicode.scm 1278 */
obj_t BgL_tmpz00_12139;
if(
INTEGERP(BgL_rz00_2462))
{ /* Llib/unicode.scm 1278 */
BgL_tmpz00_12139 = BgL_rz00_2462
; }  else 
{ 
obj_t BgL_auxz00_12142;
BgL_auxz00_12142 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)51593)), BGl_string5027z00zz__unicodez00, BGl_string4927z00zz__unicodez00, BgL_rz00_2462); 
FAILURE(BgL_auxz00_12142,BFALSE,BFALSE);} 
BgL_auxz00_12138 = 
(long)CINT(BgL_tmpz00_12139); } 
BgL_arg2292z00_2469 = 
BGl_substringz00zz__r4_strings_6_7z00(BgL_strz00_6294, BgL_auxz00_12138, 
(long)(BgL_arg2294z00_2470)); } } 
BgL_arg2290z00_2465 = 
string_for_read(BgL_arg2292z00_2469); } 
return 
BGl_errorz00zz__errorz00(BGl_string5024z00zz__unicodez00, BgL_arg2289z00_2464, BgL_arg2290z00_2465);} } } } } } 

}



/* utf8->8bits */
BGL_EXPORTED_DEF obj_t BGl_utf8zd2ze38bitsz31zz__unicodez00(obj_t BgL_strz00_114, obj_t BgL_tablez00_115)
{
{ /* Llib/unicode.scm 1334 */
{ /* Llib/unicode.scm 1335 */
long BgL_lenz00_2500;
BgL_lenz00_2500 = 
STRING_LENGTH(BgL_strz00_114); 
{ /* Llib/unicode.scm 1335 */
long BgL_nlenz00_2501;
BgL_nlenz00_2501 = 
BGl_utf8zd2ze38bitszd2lengthze3zz__unicodez00(BgL_strz00_114, BgL_lenz00_2500); 
{ /* Llib/unicode.scm 1336 */

if(
(BgL_lenz00_2500==BgL_nlenz00_2501))
{ /* Llib/unicode.scm 1337 */
return 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_strz00_114);}  else 
{ /* Llib/unicode.scm 1339 */
obj_t BgL_arg2309z00_2503;
{ /* Ieee/string.scm 168 */

BgL_arg2309z00_2503 = 
make_string(BgL_nlenz00_2501, ((unsigned char)' ')); } 
{ /* Llib/unicode.scm 1339 */
obj_t BgL_aux4793z00_7296;
BgL_aux4793z00_7296 = 
BGl_utf8zd2ze38bitszd2fillz12zf1zz__unicodez00(BgL_arg2309z00_2503, BgL_strz00_114, 
(int)(BgL_lenz00_2500), BgL_tablez00_115); 
if(
STRINGP(BgL_aux4793z00_7296))
{ /* Llib/unicode.scm 1339 */
return BgL_aux4793z00_7296;}  else 
{ 
obj_t BgL_auxz00_12161;
BgL_auxz00_12161 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)53370)), BGl_string5024z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_aux4793z00_7296); 
FAILURE(BgL_auxz00_12161,BFALSE,BFALSE);} } } } } } } 

}



/* &utf8->8bits */
obj_t BGl_z62utf8zd2ze38bitsz53zz__unicodez00(obj_t BgL_envz00_6253, obj_t BgL_strz00_6254, obj_t BgL_tablez00_6255)
{
{ /* Llib/unicode.scm 1334 */
{ /* Llib/unicode.scm 1335 */
obj_t BgL_auxz00_12165;
if(
STRINGP(BgL_strz00_6254))
{ /* Llib/unicode.scm 1335 */
BgL_auxz00_12165 = BgL_strz00_6254
; }  else 
{ 
obj_t BgL_auxz00_12168;
BgL_auxz00_12168 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)53248)), BGl_string5031z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_strz00_6254); 
FAILURE(BgL_auxz00_12168,BFALSE,BFALSE);} 
return 
BGl_utf8zd2ze38bitsz31zz__unicodez00(BgL_auxz00_12165, BgL_tablez00_6255);} } 

}



/* utf8->8bits! */
BGL_EXPORTED_DEF obj_t BGl_utf8zd2ze38bitsz12z23zz__unicodez00(obj_t BgL_strz00_116, obj_t BgL_tablez00_117)
{
{ /* Llib/unicode.scm 1344 */
{ /* Llib/unicode.scm 1345 */
long BgL_lenz00_2506;
BgL_lenz00_2506 = 
STRING_LENGTH(BgL_strz00_116); 
{ /* Llib/unicode.scm 1345 */
long BgL_nlenz00_2507;
BgL_nlenz00_2507 = 
BGl_utf8zd2ze38bitszd2lengthze3zz__unicodez00(BgL_strz00_116, BgL_lenz00_2506); 
{ /* Llib/unicode.scm 1346 */

if(
(BgL_lenz00_2506==BgL_nlenz00_2507))
{ /* Llib/unicode.scm 1347 */
return BgL_strz00_116;}  else 
{ /* Llib/unicode.scm 1349 */
obj_t BgL_arg2311z00_2509;
{ /* Ieee/string.scm 168 */

BgL_arg2311z00_2509 = 
make_string(BgL_nlenz00_2507, ((unsigned char)' ')); } 
{ /* Llib/unicode.scm 1349 */
obj_t BgL_aux4797z00_7300;
BgL_aux4797z00_7300 = 
BGl_utf8zd2ze38bitszd2fillz12zf1zz__unicodez00(BgL_arg2311z00_2509, BgL_strz00_116, 
(int)(BgL_lenz00_2506), BgL_tablez00_117); 
if(
STRINGP(BgL_aux4797z00_7300))
{ /* Llib/unicode.scm 1349 */
return BgL_aux4797z00_7300;}  else 
{ 
obj_t BgL_auxz00_12182;
BgL_auxz00_12182 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)53793)), BGl_string5032z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_aux4797z00_7300); 
FAILURE(BgL_auxz00_12182,BFALSE,BFALSE);} } } } } } } 

}



/* &utf8->8bits! */
obj_t BGl_z62utf8zd2ze38bitsz12z41zz__unicodez00(obj_t BgL_envz00_6256, obj_t BgL_strz00_6257, obj_t BgL_tablez00_6258)
{
{ /* Llib/unicode.scm 1344 */
{ /* Llib/unicode.scm 1345 */
obj_t BgL_auxz00_12186;
if(
STRINGP(BgL_strz00_6257))
{ /* Llib/unicode.scm 1345 */
BgL_auxz00_12186 = BgL_strz00_6257
; }  else 
{ 
obj_t BgL_auxz00_12189;
BgL_auxz00_12189 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)53685)), BGl_string5033z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_strz00_6257); 
FAILURE(BgL_auxz00_12189,BFALSE,BFALSE);} 
return 
BGl_utf8zd2ze38bitsz12z23zz__unicodez00(BgL_auxz00_12186, BgL_tablez00_6258);} } 

}



/* utf8->iso-latin */
BGL_EXPORTED_DEF obj_t BGl_utf8zd2ze3isozd2latinze3zz__unicodez00(obj_t BgL_strz00_118)
{
{ /* Llib/unicode.scm 1354 */
{ /* Llib/unicode.scm 1355 */
obj_t BgL_res3664z00_5602;
{ /* Llib/unicode.scm 1355 */
obj_t BgL_tablez00_5588;
BgL_tablez00_5588 = BGl_list4853z00zz__unicodez00; 
{ /* Llib/unicode.scm 1335 */
long BgL_lenz00_5589;
BgL_lenz00_5589 = 
STRING_LENGTH(BgL_strz00_118); 
{ /* Llib/unicode.scm 1335 */
long BgL_nlenz00_5592;
BgL_nlenz00_5592 = 
BGl_utf8zd2ze38bitszd2lengthze3zz__unicodez00(BgL_strz00_118, BgL_lenz00_5589); 
{ /* Llib/unicode.scm 1336 */

if(
(BgL_lenz00_5589==BgL_nlenz00_5592))
{ /* Llib/unicode.scm 1337 */
BgL_res3664z00_5602 = 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_strz00_118); }  else 
{ /* Llib/unicode.scm 1339 */
obj_t BgL_arg2309z00_5597;
{ /* Llib/unicode.scm 1339 */

BgL_arg2309z00_5597 = 
make_string(BgL_nlenz00_5592, ((unsigned char)' ')); } 
{ /* Llib/unicode.scm 1339 */
obj_t BgL_aux4801z00_7304;
BgL_aux4801z00_7304 = 
BGl_utf8zd2ze38bitszd2fillz12zf1zz__unicodez00(BgL_arg2309z00_5597, BgL_strz00_118, 
(int)(BgL_lenz00_5589), BgL_tablez00_5588); 
if(
STRINGP(BgL_aux4801z00_7304))
{ /* Llib/unicode.scm 1339 */
BgL_res3664z00_5602 = BgL_aux4801z00_7304; }  else 
{ 
obj_t BgL_auxz00_12204;
BgL_auxz00_12204 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)53370)), BGl_string5034z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_aux4801z00_7304); 
FAILURE(BgL_auxz00_12204,BFALSE,BFALSE);} } } } } } } 
return BgL_res3664z00_5602;} } 

}



/* &utf8->iso-latin */
obj_t BGl_z62utf8zd2ze3isozd2latinz81zz__unicodez00(obj_t BgL_envz00_6259, obj_t BgL_strz00_6260)
{
{ /* Llib/unicode.scm 1354 */
{ /* Llib/unicode.scm 1355 */
obj_t BgL_auxz00_12208;
if(
STRINGP(BgL_strz00_6260))
{ /* Llib/unicode.scm 1355 */
BgL_auxz00_12208 = BgL_strz00_6260
; }  else 
{ 
obj_t BgL_auxz00_12211;
BgL_auxz00_12211 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)54105)), BGl_string5035z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_strz00_6260); 
FAILURE(BgL_auxz00_12211,BFALSE,BFALSE);} 
return 
BGl_utf8zd2ze3isozd2latinze3zz__unicodez00(BgL_auxz00_12208);} } 

}



/* utf8->iso-latin! */
BGL_EXPORTED_DEF obj_t BGl_utf8zd2ze3isozd2latinz12zf1zz__unicodez00(obj_t BgL_strz00_119)
{
{ /* Llib/unicode.scm 1360 */
{ /* Llib/unicode.scm 1361 */
obj_t BgL_res3665z00_5618;
{ /* Llib/unicode.scm 1361 */
obj_t BgL_tablez00_5604;
BgL_tablez00_5604 = BGl_list4853z00zz__unicodez00; 
{ /* Llib/unicode.scm 1345 */
long BgL_lenz00_5605;
BgL_lenz00_5605 = 
STRING_LENGTH(BgL_strz00_119); 
{ /* Llib/unicode.scm 1345 */
long BgL_nlenz00_5608;
BgL_nlenz00_5608 = 
BGl_utf8zd2ze38bitszd2lengthze3zz__unicodez00(BgL_strz00_119, BgL_lenz00_5605); 
{ /* Llib/unicode.scm 1346 */

if(
(BgL_lenz00_5605==BgL_nlenz00_5608))
{ /* Llib/unicode.scm 1347 */
BgL_res3665z00_5618 = BgL_strz00_119; }  else 
{ /* Llib/unicode.scm 1349 */
obj_t BgL_arg2311z00_5613;
{ /* Llib/unicode.scm 1349 */

BgL_arg2311z00_5613 = 
make_string(BgL_nlenz00_5608, ((unsigned char)' ')); } 
{ /* Llib/unicode.scm 1349 */
obj_t BgL_aux4805z00_7308;
BgL_aux4805z00_7308 = 
BGl_utf8zd2ze38bitszd2fillz12zf1zz__unicodez00(BgL_arg2311z00_5613, BgL_strz00_119, 
(int)(BgL_lenz00_5605), BgL_tablez00_5604); 
if(
STRINGP(BgL_aux4805z00_7308))
{ /* Llib/unicode.scm 1349 */
BgL_res3665z00_5618 = BgL_aux4805z00_7308; }  else 
{ 
obj_t BgL_auxz00_12225;
BgL_auxz00_12225 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)53793)), BGl_string5036z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_aux4805z00_7308); 
FAILURE(BgL_auxz00_12225,BFALSE,BFALSE);} } } } } } } 
return BgL_res3665z00_5618;} } 

}



/* &utf8->iso-latin! */
obj_t BGl_z62utf8zd2ze3isozd2latinz12z93zz__unicodez00(obj_t BgL_envz00_6261, obj_t BgL_strz00_6262)
{
{ /* Llib/unicode.scm 1360 */
{ /* Llib/unicode.scm 1361 */
obj_t BgL_auxz00_12229;
if(
STRINGP(BgL_strz00_6262))
{ /* Llib/unicode.scm 1361 */
BgL_auxz00_12229 = BgL_strz00_6262
; }  else 
{ 
obj_t BgL_auxz00_12232;
BgL_auxz00_12232 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)54391)), BGl_string5037z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_strz00_6262); 
FAILURE(BgL_auxz00_12232,BFALSE,BFALSE);} 
return 
BGl_utf8zd2ze3isozd2latinz12zf1zz__unicodez00(BgL_auxz00_12229);} } 

}



/* utf8->iso-latin-15 */
BGL_EXPORTED_DEF obj_t BGl_utf8zd2ze3isozd2latinzd215z31zz__unicodez00(obj_t BgL_strz00_120)
{
{ /* Llib/unicode.scm 1366 */
{ /* Llib/unicode.scm 1367 */
obj_t BgL_res3666z00_5634;
{ /* Llib/unicode.scm 1367 */
obj_t BgL_tablez00_5620;
BgL_tablez00_5620 = BGl_list4880z00zz__unicodez00; 
{ /* Llib/unicode.scm 1335 */
long BgL_lenz00_5621;
BgL_lenz00_5621 = 
STRING_LENGTH(BgL_strz00_120); 
{ /* Llib/unicode.scm 1335 */
long BgL_nlenz00_5624;
BgL_nlenz00_5624 = 
BGl_utf8zd2ze38bitszd2lengthze3zz__unicodez00(BgL_strz00_120, BgL_lenz00_5621); 
{ /* Llib/unicode.scm 1336 */

if(
(BgL_lenz00_5621==BgL_nlenz00_5624))
{ /* Llib/unicode.scm 1337 */
BgL_res3666z00_5634 = 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_strz00_120); }  else 
{ /* Llib/unicode.scm 1339 */
obj_t BgL_arg2309z00_5629;
{ /* Llib/unicode.scm 1339 */

BgL_arg2309z00_5629 = 
make_string(BgL_nlenz00_5624, ((unsigned char)' ')); } 
{ /* Llib/unicode.scm 1339 */
obj_t BgL_aux4809z00_7312;
BgL_aux4809z00_7312 = 
BGl_utf8zd2ze38bitszd2fillz12zf1zz__unicodez00(BgL_arg2309z00_5629, BgL_strz00_120, 
(int)(BgL_lenz00_5621), BgL_tablez00_5620); 
if(
STRINGP(BgL_aux4809z00_7312))
{ /* Llib/unicode.scm 1339 */
BgL_res3666z00_5634 = BgL_aux4809z00_7312; }  else 
{ 
obj_t BgL_auxz00_12247;
BgL_auxz00_12247 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)53370)), BGl_string5038z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_aux4809z00_7312); 
FAILURE(BgL_auxz00_12247,BFALSE,BFALSE);} } } } } } } 
return BgL_res3666z00_5634;} } 

}



/* &utf8->iso-latin-15 */
obj_t BGl_z62utf8zd2ze3isozd2latinzd215z53zz__unicodez00(obj_t BgL_envz00_6263, obj_t BgL_strz00_6264)
{
{ /* Llib/unicode.scm 1366 */
{ /* Llib/unicode.scm 1367 */
obj_t BgL_auxz00_12251;
if(
STRINGP(BgL_strz00_6264))
{ /* Llib/unicode.scm 1367 */
BgL_auxz00_12251 = BgL_strz00_6264
; }  else 
{ 
obj_t BgL_auxz00_12254;
BgL_auxz00_12254 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)54680)), BGl_string5039z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_strz00_6264); 
FAILURE(BgL_auxz00_12254,BFALSE,BFALSE);} 
return 
BGl_utf8zd2ze3isozd2latinzd215z31zz__unicodez00(BgL_auxz00_12251);} } 

}



/* utf8->iso-latin-15! */
BGL_EXPORTED_DEF obj_t BGl_utf8zd2ze3isozd2latinzd215z12z23zz__unicodez00(obj_t BgL_strz00_121)
{
{ /* Llib/unicode.scm 1372 */
{ /* Llib/unicode.scm 1373 */
obj_t BgL_res3667z00_5650;
{ /* Llib/unicode.scm 1373 */
obj_t BgL_tablez00_5636;
BgL_tablez00_5636 = BGl_list4880z00zz__unicodez00; 
{ /* Llib/unicode.scm 1345 */
long BgL_lenz00_5637;
BgL_lenz00_5637 = 
STRING_LENGTH(BgL_strz00_121); 
{ /* Llib/unicode.scm 1345 */
long BgL_nlenz00_5640;
BgL_nlenz00_5640 = 
BGl_utf8zd2ze38bitszd2lengthze3zz__unicodez00(BgL_strz00_121, BgL_lenz00_5637); 
{ /* Llib/unicode.scm 1346 */

if(
(BgL_lenz00_5637==BgL_nlenz00_5640))
{ /* Llib/unicode.scm 1347 */
BgL_res3667z00_5650 = BgL_strz00_121; }  else 
{ /* Llib/unicode.scm 1349 */
obj_t BgL_arg2311z00_5645;
{ /* Llib/unicode.scm 1349 */

BgL_arg2311z00_5645 = 
make_string(BgL_nlenz00_5640, ((unsigned char)' ')); } 
{ /* Llib/unicode.scm 1349 */
obj_t BgL_aux4813z00_7316;
BgL_aux4813z00_7316 = 
BGl_utf8zd2ze38bitszd2fillz12zf1zz__unicodez00(BgL_arg2311z00_5645, BgL_strz00_121, 
(int)(BgL_lenz00_5637), BgL_tablez00_5636); 
if(
STRINGP(BgL_aux4813z00_7316))
{ /* Llib/unicode.scm 1349 */
BgL_res3667z00_5650 = BgL_aux4813z00_7316; }  else 
{ 
obj_t BgL_auxz00_12268;
BgL_auxz00_12268 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)53793)), BGl_string5040z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_aux4813z00_7316); 
FAILURE(BgL_auxz00_12268,BFALSE,BFALSE);} } } } } } } 
return BgL_res3667z00_5650;} } 

}



/* &utf8->iso-latin-15! */
obj_t BGl_z62utf8zd2ze3isozd2latinzd215z12z41zz__unicodez00(obj_t BgL_envz00_6265, obj_t BgL_strz00_6266)
{
{ /* Llib/unicode.scm 1372 */
{ /* Llib/unicode.scm 1373 */
obj_t BgL_auxz00_12272;
if(
STRINGP(BgL_strz00_6266))
{ /* Llib/unicode.scm 1373 */
BgL_auxz00_12272 = BgL_strz00_6266
; }  else 
{ 
obj_t BgL_auxz00_12275;
BgL_auxz00_12275 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)54978)), BGl_string5041z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_strz00_6266); 
FAILURE(BgL_auxz00_12275,BFALSE,BFALSE);} 
return 
BGl_utf8zd2ze3isozd2latinzd215z12z23zz__unicodez00(BgL_auxz00_12272);} } 

}



/* utf8->cp1252 */
BGL_EXPORTED_DEF obj_t BGl_utf8zd2ze3cp1252z31zz__unicodez00(obj_t BgL_strz00_122)
{
{ /* Llib/unicode.scm 1378 */
if(
CBOOL(BGl_cp1252zd2invzd2zz__unicodez00))
{ /* Llib/unicode.scm 1379 */BFALSE; }  else 
{ /* Llib/unicode.scm 1379 */
BGl_cp1252zd2invzd2zz__unicodez00 = 
BGl_inversezd2utf8zd2tablez00zz__unicodez00(BGl_vector4892z00zz__unicodez00); } 
return 
BGl_utf8zd2ze38bitsz31zz__unicodez00(BgL_strz00_122, BGl_cp1252zd2invzd2zz__unicodez00);} 

}



/* &utf8->cp1252 */
obj_t BGl_z62utf8zd2ze3cp1252z53zz__unicodez00(obj_t BgL_envz00_6267, obj_t BgL_strz00_6268)
{
{ /* Llib/unicode.scm 1378 */
{ /* Llib/unicode.scm 1379 */
obj_t BgL_auxz00_12284;
if(
STRINGP(BgL_strz00_6268))
{ /* Llib/unicode.scm 1379 */
BgL_auxz00_12284 = BgL_strz00_6268
; }  else 
{ 
obj_t BgL_auxz00_12287;
BgL_auxz00_12287 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)55334)), BGl_string5042z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_strz00_6268); 
FAILURE(BgL_auxz00_12287,BFALSE,BFALSE);} 
return 
BGl_utf8zd2ze3cp1252z31zz__unicodez00(BgL_auxz00_12284);} } 

}



/* utf8->cp1252! */
BGL_EXPORTED_DEF obj_t BGl_utf8zd2ze3cp1252z12z23zz__unicodez00(obj_t BgL_strz00_123)
{
{ /* Llib/unicode.scm 1385 */
if(
CBOOL(BGl_cp1252zd2invzd2zz__unicodez00))
{ /* Llib/unicode.scm 1386 */BFALSE; }  else 
{ /* Llib/unicode.scm 1386 */
BGl_cp1252zd2invzd2zz__unicodez00 = 
BGl_inversezd2utf8zd2tablez00zz__unicodez00(BGl_vector4892z00zz__unicodez00); } 
return 
BGl_utf8zd2ze38bitsz12z23zz__unicodez00(BgL_strz00_123, BGl_cp1252zd2invzd2zz__unicodez00);} 

}



/* &utf8->cp1252! */
obj_t BGl_z62utf8zd2ze3cp1252z12z41zz__unicodez00(obj_t BgL_envz00_6269, obj_t BgL_strz00_6270)
{
{ /* Llib/unicode.scm 1385 */
{ /* Llib/unicode.scm 1386 */
obj_t BgL_auxz00_12296;
if(
STRINGP(BgL_strz00_6270))
{ /* Llib/unicode.scm 1386 */
BgL_auxz00_12296 = BgL_strz00_6270
; }  else 
{ 
obj_t BgL_auxz00_12299;
BgL_auxz00_12299 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)55687)), BGl_string5043z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_strz00_6270); 
FAILURE(BgL_auxz00_12299,BFALSE,BFALSE);} 
return 
BGl_utf8zd2ze3cp1252z12z23zz__unicodez00(BgL_auxz00_12296);} } 

}



/* 8bits->utf8-length */
long BGl_8bitszd2ze3utf8zd2lengthze3zz__unicodez00(obj_t BgL_strz00_124, long BgL_lenz00_125, obj_t BgL_tablez00_126)
{
{ /* Llib/unicode.scm 1392 */
{ 
long BgL_cz00_2529;
{ 
long BgL_siza7eza7_2514;long BgL_iz00_2515;
BgL_siza7eza7_2514 = ((long)0); 
BgL_iz00_2515 = ((long)0); 
BgL_zc3z04anonymousza32312ze3z87_2516:
if(
(BgL_iz00_2515==BgL_lenz00_125))
{ /* Llib/unicode.scm 1402 */
return BgL_siza7eza7_2514;}  else 
{ /* Llib/unicode.scm 1404 */
long BgL_cz00_2518;
{ /* Llib/unicode.scm 1404 */
unsigned char BgL_tmpz00_12306;
{ /* Llib/unicode.scm 1404 */
long BgL_l4418z00_6922;
BgL_l4418z00_6922 = 
STRING_LENGTH(BgL_strz00_124); 
if(
BOUND_CHECK(BgL_iz00_2515, BgL_l4418z00_6922))
{ /* Llib/unicode.scm 1404 */
BgL_tmpz00_12306 = 
STRING_REF(BgL_strz00_124, BgL_iz00_2515)
; }  else 
{ 
obj_t BgL_auxz00_12311;
BgL_auxz00_12311 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)56240)), BGl_string4975z00zz__unicodez00, BgL_strz00_124, 
(int)(BgL_l4418z00_6922), 
(int)(BgL_iz00_2515)); 
FAILURE(BgL_auxz00_12311,BFALSE,BFALSE);} } 
BgL_cz00_2518 = 
(BgL_tmpz00_12306); } 
if(
(BgL_cz00_2518>=((long)128)))
{ /* Llib/unicode.scm 1405 */
if(
CBOOL(BgL_tablez00_126))
{ 
long BgL_iz00_12360;long BgL_siza7eza7_12322;
{ /* Llib/unicode.scm 1407 */
long BgL_tmpz00_12323;
BgL_cz00_2529 = BgL_cz00_2518; 
{ /* Llib/unicode.scm 1395 */
long BgL_vz00_2531;
BgL_vz00_2531 = 
(BgL_cz00_2529-((long)128)); 
{ /* Llib/unicode.scm 1396 */
bool_t BgL_test5873z00_12325;
{ /* Llib/unicode.scm 1396 */
long BgL_arg2329z00_2535;
{ /* Llib/unicode.scm 1396 */
obj_t BgL_vectorz00_5653;
if(
VECTORP(BgL_tablez00_126))
{ /* Llib/unicode.scm 1396 */
BgL_vectorz00_5653 = BgL_tablez00_126; }  else 
{ 
obj_t BgL_auxz00_12328;
BgL_auxz00_12328 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)56080)), BGl_string5044z00zz__unicodez00, BGl_string4980z00zz__unicodez00, BgL_tablez00_126); 
FAILURE(BgL_auxz00_12328,BFALSE,BFALSE);} 
BgL_arg2329z00_2535 = 
VECTOR_LENGTH(BgL_vectorz00_5653); } 
BgL_test5873z00_12325 = 
(BgL_vz00_2531<BgL_arg2329z00_2535); } 
if(BgL_test5873z00_12325)
{ /* Llib/unicode.scm 1397 */
obj_t BgL_arg2328z00_2534;
{ /* Llib/unicode.scm 1397 */
obj_t BgL_vectorz00_5657;
if(
VECTORP(BgL_tablez00_126))
{ /* Llib/unicode.scm 1397 */
BgL_vectorz00_5657 = BgL_tablez00_126; }  else 
{ 
obj_t BgL_auxz00_12336;
BgL_auxz00_12336 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)56121)), BGl_string5044z00zz__unicodez00, BGl_string4980z00zz__unicodez00, BgL_tablez00_126); 
FAILURE(BgL_auxz00_12336,BFALSE,BFALSE);} 
{ /* Llib/unicode.scm 1397 */
bool_t BgL_test5876z00_12340;
{ /* Llib/unicode.scm 1397 */
long BgL_tmpz00_12341;
BgL_tmpz00_12341 = 
VECTOR_LENGTH(BgL_vectorz00_5657); 
BgL_test5876z00_12340 = 
BOUND_CHECK(BgL_vz00_2531, BgL_tmpz00_12341); } 
if(BgL_test5876z00_12340)
{ /* Llib/unicode.scm 1397 */
BgL_arg2328z00_2534 = 
VECTOR_REF(BgL_vectorz00_5657,BgL_vz00_2531); }  else 
{ 
obj_t BgL_auxz00_12345;
BgL_auxz00_12345 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)56109)), BGl_string4972z00zz__unicodez00, BgL_vectorz00_5657, 
(int)(
VECTOR_LENGTH(BgL_vectorz00_5657)), 
(int)(BgL_vz00_2531)); 
FAILURE(BgL_auxz00_12345,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 1397 */
obj_t BgL_stringz00_5659;
if(
STRINGP(BgL_arg2328z00_2534))
{ /* Llib/unicode.scm 1397 */
BgL_stringz00_5659 = BgL_arg2328z00_2534; }  else 
{ 
obj_t BgL_auxz00_12354;
BgL_auxz00_12354 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)56094)), BGl_string5044z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_arg2328z00_2534); 
FAILURE(BgL_auxz00_12354,BFALSE,BFALSE);} 
BgL_tmpz00_12323 = 
STRING_LENGTH(BgL_stringz00_5659); } }  else 
{ /* Llib/unicode.scm 1396 */
BgL_tmpz00_12323 = ((long)2)
; } } } 
BgL_siza7eza7_12322 = 
(BgL_siza7eza7_2514+BgL_tmpz00_12323); } 
BgL_iz00_12360 = 
(BgL_iz00_2515+((long)1)); 
BgL_iz00_2515 = BgL_iz00_12360; 
BgL_siza7eza7_2514 = BgL_siza7eza7_12322; 
goto BgL_zc3z04anonymousza32312ze3z87_2516;}  else 
{ 
long BgL_iz00_12364;long BgL_siza7eza7_12362;
BgL_siza7eza7_12362 = 
(BgL_siza7eza7_2514+((long)2)); 
BgL_iz00_12364 = 
(BgL_iz00_2515+((long)1)); 
BgL_iz00_2515 = BgL_iz00_12364; 
BgL_siza7eza7_2514 = BgL_siza7eza7_12362; 
goto BgL_zc3z04anonymousza32312ze3z87_2516;} }  else 
{ 
long BgL_iz00_12368;long BgL_siza7eza7_12366;
BgL_siza7eza7_12366 = 
(BgL_siza7eza7_2514+((long)1)); 
BgL_iz00_12368 = 
(BgL_iz00_2515+((long)1)); 
BgL_iz00_2515 = BgL_iz00_12368; 
BgL_siza7eza7_2514 = BgL_siza7eza7_12366; 
goto BgL_zc3z04anonymousza32312ze3z87_2516;} } } } } 

}



/* 8bits->utf8-fill! */
obj_t BGl_8bitszd2ze3utf8zd2fillz12zf1zz__unicodez00(obj_t BgL_nstrz00_127, obj_t BgL_strz00_128, long BgL_lenz00_129, obj_t BgL_tablez00_130)
{
{ /* Llib/unicode.scm 1414 */
{ 
long BgL_rz00_2538;long BgL_wz00_2539;
BgL_rz00_2538 = ((long)0); 
BgL_wz00_2539 = ((long)0); 
BgL_zc3z04anonymousza32330ze3z87_2540:
if(
(BgL_rz00_2538==BgL_lenz00_129))
{ /* Llib/unicode.scm 1417 */
return BgL_nstrz00_127;}  else 
{ /* Llib/unicode.scm 1419 */
long BgL_cz00_2542;
{ /* Llib/unicode.scm 1419 */
unsigned char BgL_tmpz00_12372;
{ /* Llib/unicode.scm 1419 */
long BgL_l4422z00_6926;
BgL_l4422z00_6926 = 
STRING_LENGTH(BgL_strz00_128); 
if(
BOUND_CHECK(BgL_rz00_2538, BgL_l4422z00_6926))
{ /* Llib/unicode.scm 1419 */
BgL_tmpz00_12372 = 
STRING_REF(BgL_strz00_128, BgL_rz00_2538)
; }  else 
{ 
obj_t BgL_auxz00_12377;
BgL_auxz00_12377 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)56792)), BGl_string4975z00zz__unicodez00, BgL_strz00_128, 
(int)(BgL_l4422z00_6926), 
(int)(BgL_rz00_2538)); 
FAILURE(BgL_auxz00_12377,BFALSE,BFALSE);} } 
BgL_cz00_2542 = 
(BgL_tmpz00_12372); } 
if(
(BgL_cz00_2542>=((long)192)))
{ /* Llib/unicode.scm 1421 */
{ /* Llib/unicode.scm 1422 */
long BgL_l4426z00_6930;
BgL_l4426z00_6930 = 
STRING_LENGTH(BgL_nstrz00_127); 
if(
BOUND_CHECK(BgL_wz00_2539, BgL_l4426z00_6930))
{ /* Llib/unicode.scm 1422 */
STRING_SET(BgL_nstrz00_127, BgL_wz00_2539, ((unsigned char)195)); }  else 
{ 
obj_t BgL_auxz00_12390;
BgL_auxz00_12390 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)56849)), BGl_string4995z00zz__unicodez00, BgL_nstrz00_127, 
(int)(BgL_l4426z00_6930), 
(int)(BgL_wz00_2539)); 
FAILURE(BgL_auxz00_12390,BFALSE,BFALSE);} } 
{ /* Llib/unicode.scm 1423 */
long BgL_arg2334z00_2544;unsigned char BgL_arg2335z00_2545;
BgL_arg2334z00_2544 = 
(BgL_wz00_2539+((long)1)); 
BgL_arg2335z00_2545 = 
BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(
(BgL_cz00_2542-((long)64))); 
{ /* Llib/unicode.scm 1423 */
long BgL_l4430z00_6934;
BgL_l4430z00_6934 = 
STRING_LENGTH(BgL_nstrz00_127); 
if(
BOUND_CHECK(BgL_arg2334z00_2544, BgL_l4430z00_6934))
{ /* Llib/unicode.scm 1423 */
STRING_SET(BgL_nstrz00_127, BgL_arg2334z00_2544, BgL_arg2335z00_2545); }  else 
{ 
obj_t BgL_auxz00_12403;
BgL_auxz00_12403 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)56897)), BGl_string4995z00zz__unicodez00, BgL_nstrz00_127, 
(int)(BgL_l4430z00_6934), 
(int)(BgL_arg2334z00_2544)); 
FAILURE(BgL_auxz00_12403,BFALSE,BFALSE);} } } 
{ 
long BgL_wz00_12411;long BgL_rz00_12409;
BgL_rz00_12409 = 
(BgL_rz00_2538+((long)1)); 
BgL_wz00_12411 = 
(BgL_wz00_2539+((long)2)); 
BgL_wz00_2539 = BgL_wz00_12411; 
BgL_rz00_2538 = BgL_rz00_12409; 
goto BgL_zc3z04anonymousza32330ze3z87_2540;} }  else 
{ /* Llib/unicode.scm 1421 */
if(
(BgL_cz00_2542>=((long)128)))
{ /* Llib/unicode.scm 1425 */
if(
CBOOL(BgL_tablez00_130))
{ /* Llib/unicode.scm 1427 */
long BgL_vz00_2550;
BgL_vz00_2550 = 
(BgL_cz00_2542-((long)128)); 
{ /* Llib/unicode.scm 1428 */
bool_t BgL_test5885z00_12418;
{ /* Llib/unicode.scm 1428 */
long BgL_arg2350z00_2561;
{ /* Llib/unicode.scm 1428 */
obj_t BgL_vectorz00_5712;
if(
VECTORP(BgL_tablez00_130))
{ /* Llib/unicode.scm 1428 */
BgL_vectorz00_5712 = BgL_tablez00_130; }  else 
{ 
obj_t BgL_auxz00_12421;
BgL_auxz00_12421 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)57079)), BGl_string4963z00zz__unicodez00, BGl_string4980z00zz__unicodez00, BgL_tablez00_130); 
FAILURE(BgL_auxz00_12421,BFALSE,BFALSE);} 
BgL_arg2350z00_2561 = 
VECTOR_LENGTH(BgL_vectorz00_5712); } 
BgL_test5885z00_12418 = 
(BgL_vz00_2550<BgL_arg2350z00_2561); } 
if(BgL_test5885z00_12418)
{ /* Llib/unicode.scm 1429 */
obj_t BgL_encz00_2553;
{ /* Llib/unicode.scm 1429 */
obj_t BgL_vectorz00_5716;
if(
VECTORP(BgL_tablez00_130))
{ /* Llib/unicode.scm 1429 */
BgL_vectorz00_5716 = BgL_tablez00_130; }  else 
{ 
obj_t BgL_auxz00_12429;
BgL_auxz00_12429 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)57118)), BGl_string4963z00zz__unicodez00, BGl_string4980z00zz__unicodez00, BgL_tablez00_130); 
FAILURE(BgL_auxz00_12429,BFALSE,BFALSE);} 
{ /* Llib/unicode.scm 1429 */
bool_t BgL_test5888z00_12433;
{ /* Llib/unicode.scm 1429 */
long BgL_tmpz00_12434;
BgL_tmpz00_12434 = 
VECTOR_LENGTH(BgL_vectorz00_5716); 
BgL_test5888z00_12433 = 
BOUND_CHECK(BgL_vz00_2550, BgL_tmpz00_12434); } 
if(BgL_test5888z00_12433)
{ /* Llib/unicode.scm 1429 */
BgL_encz00_2553 = 
VECTOR_REF(BgL_vectorz00_5716,BgL_vz00_2550); }  else 
{ 
obj_t BgL_auxz00_12438;
BgL_auxz00_12438 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)57106)), BGl_string4972z00zz__unicodez00, BgL_vectorz00_5716, 
(int)(
VECTOR_LENGTH(BgL_vectorz00_5716)), 
(int)(BgL_vz00_2550)); 
FAILURE(BgL_auxz00_12438,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 1429 */
long BgL_lenz00_2554;
{ /* Llib/unicode.scm 1430 */
obj_t BgL_stringz00_5718;
if(
STRINGP(BgL_encz00_2553))
{ /* Llib/unicode.scm 1430 */
BgL_stringz00_5718 = BgL_encz00_2553; }  else 
{ 
obj_t BgL_auxz00_12447;
BgL_auxz00_12447 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)57140)), BGl_string4963z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_encz00_2553); 
FAILURE(BgL_auxz00_12447,BFALSE,BFALSE);} 
BgL_lenz00_2554 = 
STRING_LENGTH(BgL_stringz00_5718); } 
{ /* Llib/unicode.scm 1430 */

{ /* Llib/unicode.scm 1431 */
obj_t BgL_auxz00_12452;
if(
STRINGP(BgL_encz00_2553))
{ /* Llib/unicode.scm 1431 */
BgL_auxz00_12452 = BgL_encz00_2553
; }  else 
{ 
obj_t BgL_auxz00_12455;
BgL_auxz00_12455 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)57172)), BGl_string4963z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_encz00_2553); 
FAILURE(BgL_auxz00_12455,BFALSE,BFALSE);} 
BGl_blitzd2stringz12zc0zz__r4_strings_6_7z00(BgL_auxz00_12452, ((long)0), BgL_nstrz00_127, BgL_wz00_2539, BgL_lenz00_2554); } 
{ 
long BgL_wz00_12462;long BgL_rz00_12460;
BgL_rz00_12460 = 
(BgL_rz00_2538+((long)1)); 
BgL_wz00_12462 = 
(BgL_wz00_2539+BgL_lenz00_2554); 
BgL_wz00_2539 = BgL_wz00_12462; 
BgL_rz00_2538 = BgL_rz00_12460; 
goto BgL_zc3z04anonymousza32330ze3z87_2540;} } } }  else 
{ /* Llib/unicode.scm 1428 */
{ /* Llib/unicode.scm 1434 */
long BgL_l4438z00_6942;
BgL_l4438z00_6942 = 
STRING_LENGTH(BgL_nstrz00_127); 
if(
BOUND_CHECK(BgL_wz00_2539, BgL_l4438z00_6942))
{ /* Llib/unicode.scm 1434 */
STRING_SET(BgL_nstrz00_127, BgL_wz00_2539, ((unsigned char)194)); }  else 
{ 
obj_t BgL_auxz00_12468;
BgL_auxz00_12468 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)57268)), BGl_string4995z00zz__unicodez00, BgL_nstrz00_127, 
(int)(BgL_l4438z00_6942), 
(int)(BgL_wz00_2539)); 
FAILURE(BgL_auxz00_12468,BFALSE,BFALSE);} } 
{ /* Llib/unicode.scm 1435 */
long BgL_arg2345z00_2557;unsigned char BgL_arg2346z00_2558;
BgL_arg2345z00_2557 = 
(BgL_wz00_2539+((long)1)); 
BgL_arg2346z00_2558 = 
BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(BgL_cz00_2542); 
{ /* Llib/unicode.scm 1435 */
long BgL_l4442z00_6946;
BgL_l4442z00_6946 = 
STRING_LENGTH(BgL_nstrz00_127); 
if(
BOUND_CHECK(BgL_arg2345z00_2557, BgL_l4442z00_6946))
{ /* Llib/unicode.scm 1435 */
STRING_SET(BgL_nstrz00_127, BgL_arg2345z00_2557, BgL_arg2346z00_2558); }  else 
{ 
obj_t BgL_auxz00_12480;
BgL_auxz00_12480 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)57323)), BGl_string4995z00zz__unicodez00, BgL_nstrz00_127, 
(int)(BgL_l4442z00_6946), 
(int)(BgL_arg2345z00_2557)); 
FAILURE(BgL_auxz00_12480,BFALSE,BFALSE);} } } 
{ 
long BgL_wz00_12488;long BgL_rz00_12486;
BgL_rz00_12486 = 
(BgL_rz00_2538+((long)1)); 
BgL_wz00_12488 = 
(BgL_wz00_2539+((long)2)); 
BgL_wz00_2539 = BgL_wz00_12488; 
BgL_rz00_2538 = BgL_rz00_12486; 
goto BgL_zc3z04anonymousza32330ze3z87_2540;} } } }  else 
{ /* Llib/unicode.scm 1426 */
{ /* Llib/unicode.scm 1438 */
long BgL_l4446z00_6950;
BgL_l4446z00_6950 = 
STRING_LENGTH(BgL_nstrz00_127); 
if(
BOUND_CHECK(BgL_wz00_2539, BgL_l4446z00_6950))
{ /* Llib/unicode.scm 1438 */
STRING_SET(BgL_nstrz00_127, BgL_wz00_2539, ((unsigned char)194)); }  else 
{ 
obj_t BgL_auxz00_12494;
BgL_auxz00_12494 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)57430)), BGl_string4995z00zz__unicodez00, BgL_nstrz00_127, 
(int)(BgL_l4446z00_6950), 
(int)(BgL_wz00_2539)); 
FAILURE(BgL_auxz00_12494,BFALSE,BFALSE);} } 
{ /* Llib/unicode.scm 1439 */
long BgL_arg2351z00_2562;unsigned char BgL_arg2352z00_2563;
BgL_arg2351z00_2562 = 
(BgL_wz00_2539+((long)1)); 
BgL_arg2352z00_2563 = 
BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(BgL_cz00_2542); 
{ /* Llib/unicode.scm 1439 */
long BgL_l4450z00_6954;
BgL_l4450z00_6954 = 
STRING_LENGTH(BgL_nstrz00_127); 
if(
BOUND_CHECK(BgL_arg2351z00_2562, BgL_l4450z00_6954))
{ /* Llib/unicode.scm 1439 */
STRING_SET(BgL_nstrz00_127, BgL_arg2351z00_2562, BgL_arg2352z00_2563); }  else 
{ 
obj_t BgL_auxz00_12506;
BgL_auxz00_12506 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)57478)), BGl_string4995z00zz__unicodez00, BgL_nstrz00_127, 
(int)(BgL_l4450z00_6954), 
(int)(BgL_arg2351z00_2562)); 
FAILURE(BgL_auxz00_12506,BFALSE,BFALSE);} } } 
{ 
long BgL_wz00_12514;long BgL_rz00_12512;
BgL_rz00_12512 = 
(BgL_rz00_2538+((long)1)); 
BgL_wz00_12514 = 
(BgL_wz00_2539+((long)2)); 
BgL_wz00_2539 = BgL_wz00_12514; 
BgL_rz00_2538 = BgL_rz00_12512; 
goto BgL_zc3z04anonymousza32330ze3z87_2540;} } }  else 
{ /* Llib/unicode.scm 1425 */
{ /* Llib/unicode.scm 1442 */
unsigned char BgL_arg2355z00_2566;
BgL_arg2355z00_2566 = 
BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(BgL_cz00_2542); 
{ /* Llib/unicode.scm 1442 */
long BgL_l4454z00_6958;
BgL_l4454z00_6958 = 
STRING_LENGTH(BgL_nstrz00_127); 
if(
BOUND_CHECK(BgL_wz00_2539, BgL_l4454z00_6958))
{ /* Llib/unicode.scm 1442 */
STRING_SET(BgL_nstrz00_127, BgL_wz00_2539, BgL_arg2355z00_2566); }  else 
{ 
obj_t BgL_auxz00_12521;
BgL_auxz00_12521 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)57572)), BGl_string4995z00zz__unicodez00, BgL_nstrz00_127, 
(int)(BgL_l4454z00_6958), 
(int)(BgL_wz00_2539)); 
FAILURE(BgL_auxz00_12521,BFALSE,BFALSE);} } } 
{ 
long BgL_wz00_12529;long BgL_rz00_12527;
BgL_rz00_12527 = 
(BgL_rz00_2538+((long)1)); 
BgL_wz00_12529 = 
(BgL_wz00_2539+((long)1)); 
BgL_wz00_2539 = BgL_wz00_12529; 
BgL_rz00_2538 = BgL_rz00_12527; 
goto BgL_zc3z04anonymousza32330ze3z87_2540;} } } } } } 

}



/* 8bits->utf8 */
BGL_EXPORTED_DEF obj_t BGl_8bitszd2ze3utf8z31zz__unicodez00(obj_t BgL_strz00_131, obj_t BgL_tablez00_132)
{
{ /* Llib/unicode.scm 1448 */
{ /* Llib/unicode.scm 1449 */
long BgL_lenz00_2571;
BgL_lenz00_2571 = 
STRING_LENGTH(BgL_strz00_131); 
{ /* Llib/unicode.scm 1449 */
long BgL_nlenz00_2572;
BgL_nlenz00_2572 = 
BGl_8bitszd2ze3utf8zd2lengthze3zz__unicodez00(BgL_strz00_131, BgL_lenz00_2571, BgL_tablez00_132); 
{ /* Llib/unicode.scm 1450 */

if(
(BgL_lenz00_2571==BgL_nlenz00_2572))
{ /* Llib/unicode.scm 1451 */
return 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_strz00_131);}  else 
{ /* Llib/unicode.scm 1451 */
return 
BGl_8bitszd2ze3utf8zd2fillz12zf1zz__unicodez00(
make_string_sans_fill(BgL_nlenz00_2572), BgL_strz00_131, BgL_lenz00_2571, BgL_tablez00_132);} } } } } 

}



/* &8bits->utf8 */
obj_t BGl_z628bitszd2ze3utf8z53zz__unicodez00(obj_t BgL_envz00_6271, obj_t BgL_strz00_6272, obj_t BgL_tablez00_6273)
{
{ /* Llib/unicode.scm 1448 */
{ /* Llib/unicode.scm 1449 */
obj_t BgL_auxz00_12538;
if(
STRINGP(BgL_strz00_6272))
{ /* Llib/unicode.scm 1449 */
BgL_auxz00_12538 = BgL_strz00_6272
; }  else 
{ 
obj_t BgL_auxz00_12541;
BgL_auxz00_12541 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)57908)), BGl_string5045z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_strz00_6272); 
FAILURE(BgL_auxz00_12541,BFALSE,BFALSE);} 
return 
BGl_8bitszd2ze3utf8z31zz__unicodez00(BgL_auxz00_12538, BgL_tablez00_6273);} } 

}



/* 8bits->utf8! */
BGL_EXPORTED_DEF obj_t BGl_8bitszd2ze3utf8z12z23zz__unicodez00(obj_t BgL_strz00_133, obj_t BgL_tablez00_134)
{
{ /* Llib/unicode.scm 1458 */
{ /* Llib/unicode.scm 1459 */
long BgL_lenz00_2575;
BgL_lenz00_2575 = 
STRING_LENGTH(BgL_strz00_133); 
{ /* Llib/unicode.scm 1459 */
long BgL_nlenz00_2576;
BgL_nlenz00_2576 = 
BGl_8bitszd2ze3utf8zd2lengthze3zz__unicodez00(BgL_strz00_133, BgL_lenz00_2575, BgL_tablez00_134); 
{ /* Llib/unicode.scm 1460 */

if(
(BgL_lenz00_2575==BgL_nlenz00_2576))
{ /* Llib/unicode.scm 1461 */
return BgL_strz00_133;}  else 
{ /* Llib/unicode.scm 1461 */
return 
BGl_8bitszd2ze3utf8zd2fillz12zf1zz__unicodez00(
make_string_sans_fill(BgL_nlenz00_2576), BgL_strz00_133, BgL_lenz00_2575, BgL_tablez00_134);} } } } } 

}



/* &8bits->utf8! */
obj_t BGl_z628bitszd2ze3utf8z12z41zz__unicodez00(obj_t BgL_envz00_6274, obj_t BgL_strz00_6275, obj_t BgL_tablez00_6276)
{
{ /* Llib/unicode.scm 1458 */
{ /* Llib/unicode.scm 1459 */
obj_t BgL_auxz00_12552;
if(
STRINGP(BgL_strz00_6275))
{ /* Llib/unicode.scm 1459 */
BgL_auxz00_12552 = BgL_strz00_6275
; }  else 
{ 
obj_t BgL_auxz00_12555;
BgL_auxz00_12555 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)58360)), BGl_string5046z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_strz00_6275); 
FAILURE(BgL_auxz00_12555,BFALSE,BFALSE);} 
return 
BGl_8bitszd2ze3utf8z12z23zz__unicodez00(BgL_auxz00_12552, BgL_tablez00_6276);} } 

}



/* iso-latin->utf8 */
BGL_EXPORTED_DEF obj_t BGl_isozd2latinzd2ze3utf8ze3zz__unicodez00(obj_t BgL_strz00_135)
{
{ /* Llib/unicode.scm 1468 */
{ /* Llib/unicode.scm 1469 */
obj_t BgL_res3707z00_5776;
{ /* Llib/unicode.scm 1449 */
long BgL_lenz00_5767;
BgL_lenz00_5767 = 
STRING_LENGTH(BgL_strz00_135); 
{ /* Llib/unicode.scm 1449 */
long BgL_nlenz00_5770;
BgL_nlenz00_5770 = 
BGl_8bitszd2ze3utf8zd2lengthze3zz__unicodez00(BgL_strz00_135, BgL_lenz00_5767, BFALSE); 
{ /* Llib/unicode.scm 1450 */

if(
(BgL_lenz00_5767==BgL_nlenz00_5770))
{ /* Llib/unicode.scm 1451 */
BgL_res3707z00_5776 = 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_strz00_135); }  else 
{ /* Llib/unicode.scm 1451 */
BgL_res3707z00_5776 = 
BGl_8bitszd2ze3utf8zd2fillz12zf1zz__unicodez00(
make_string_sans_fill(BgL_nlenz00_5770), BgL_strz00_135, BgL_lenz00_5767, BFALSE); } } } } 
return BgL_res3707z00_5776;} } 

}



/* &iso-latin->utf8 */
obj_t BGl_z62isozd2latinzd2ze3utf8z81zz__unicodez00(obj_t BgL_envz00_6277, obj_t BgL_strz00_6278)
{
{ /* Llib/unicode.scm 1468 */
{ /* Llib/unicode.scm 1469 */
obj_t BgL_auxz00_12567;
if(
STRINGP(BgL_strz00_6278))
{ /* Llib/unicode.scm 1469 */
BgL_auxz00_12567 = BgL_strz00_6278
; }  else 
{ 
obj_t BgL_auxz00_12570;
BgL_auxz00_12570 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)58795)), BGl_string5047z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_strz00_6278); 
FAILURE(BgL_auxz00_12570,BFALSE,BFALSE);} 
return 
BGl_isozd2latinzd2ze3utf8ze3zz__unicodez00(BgL_auxz00_12567);} } 

}



/* iso-latin->utf8! */
BGL_EXPORTED_DEF obj_t BGl_isozd2latinzd2ze3utf8z12zf1zz__unicodez00(obj_t BgL_strz00_136)
{
{ /* Llib/unicode.scm 1474 */
{ /* Llib/unicode.scm 1475 */
obj_t BgL_res3708z00_5787;
{ /* Llib/unicode.scm 1459 */
long BgL_lenz00_5778;
BgL_lenz00_5778 = 
STRING_LENGTH(BgL_strz00_136); 
{ /* Llib/unicode.scm 1459 */
long BgL_nlenz00_5781;
BgL_nlenz00_5781 = 
BGl_8bitszd2ze3utf8zd2lengthze3zz__unicodez00(BgL_strz00_136, BgL_lenz00_5778, BFALSE); 
{ /* Llib/unicode.scm 1460 */

if(
(BgL_lenz00_5778==BgL_nlenz00_5781))
{ /* Llib/unicode.scm 1461 */
BgL_res3708z00_5787 = BgL_strz00_136; }  else 
{ /* Llib/unicode.scm 1461 */
BgL_res3708z00_5787 = 
BGl_8bitszd2ze3utf8zd2fillz12zf1zz__unicodez00(
make_string_sans_fill(BgL_nlenz00_5781), BgL_strz00_136, BgL_lenz00_5778, BFALSE); } } } } 
return BgL_res3708z00_5787;} } 

}



/* &iso-latin->utf8! */
obj_t BGl_z62isozd2latinzd2ze3utf8z12z93zz__unicodez00(obj_t BgL_envz00_6279, obj_t BgL_strz00_6280)
{
{ /* Llib/unicode.scm 1474 */
{ /* Llib/unicode.scm 1475 */
obj_t BgL_auxz00_12581;
if(
STRINGP(BgL_strz00_6280))
{ /* Llib/unicode.scm 1475 */
BgL_auxz00_12581 = BgL_strz00_6280
; }  else 
{ 
obj_t BgL_auxz00_12584;
BgL_auxz00_12584 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)59077)), BGl_string5048z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_strz00_6280); 
FAILURE(BgL_auxz00_12584,BFALSE,BFALSE);} 
return 
BGl_isozd2latinzd2ze3utf8z12zf1zz__unicodez00(BgL_auxz00_12581);} } 

}



/* cp1252->utf8 */
BGL_EXPORTED_DEF obj_t BGl_cp1252zd2ze3utf8z31zz__unicodez00(obj_t BgL_strz00_137)
{
{ /* Llib/unicode.scm 1480 */
{ /* Llib/unicode.scm 1481 */
obj_t BgL_res3709z00_5799;
{ /* Llib/unicode.scm 1481 */
obj_t BgL_tablez00_5789;
BgL_tablez00_5789 = BGl_vector4892z00zz__unicodez00; 
{ /* Llib/unicode.scm 1449 */
long BgL_lenz00_5790;
BgL_lenz00_5790 = 
STRING_LENGTH(BgL_strz00_137); 
{ /* Llib/unicode.scm 1449 */
long BgL_nlenz00_5793;
BgL_nlenz00_5793 = 
BGl_8bitszd2ze3utf8zd2lengthze3zz__unicodez00(BgL_strz00_137, BgL_lenz00_5790, BgL_tablez00_5789); 
{ /* Llib/unicode.scm 1450 */

if(
(BgL_lenz00_5790==BgL_nlenz00_5793))
{ /* Llib/unicode.scm 1451 */
BgL_res3709z00_5799 = 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_strz00_137); }  else 
{ /* Llib/unicode.scm 1451 */
BgL_res3709z00_5799 = 
BGl_8bitszd2ze3utf8zd2fillz12zf1zz__unicodez00(
make_string_sans_fill(BgL_nlenz00_5793), BgL_strz00_137, BgL_lenz00_5790, BgL_tablez00_5789); } } } } } 
return BgL_res3709z00_5799;} } 

}



/* &cp1252->utf8 */
obj_t BGl_z62cp1252zd2ze3utf8z53zz__unicodez00(obj_t BgL_envz00_6281, obj_t BgL_strz00_6282)
{
{ /* Llib/unicode.scm 1480 */
{ /* Llib/unicode.scm 1481 */
obj_t BgL_auxz00_12596;
if(
STRINGP(BgL_strz00_6282))
{ /* Llib/unicode.scm 1481 */
BgL_auxz00_12596 = BgL_strz00_6282
; }  else 
{ 
obj_t BgL_auxz00_12599;
BgL_auxz00_12599 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)59353)), BGl_string5049z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_strz00_6282); 
FAILURE(BgL_auxz00_12599,BFALSE,BFALSE);} 
return 
BGl_cp1252zd2ze3utf8z31zz__unicodez00(BgL_auxz00_12596);} } 

}



/* cp1252->utf8! */
BGL_EXPORTED_DEF obj_t BGl_cp1252zd2ze3utf8z12z23zz__unicodez00(obj_t BgL_strz00_138)
{
{ /* Llib/unicode.scm 1486 */
{ /* Llib/unicode.scm 1487 */
obj_t BgL_res3710z00_5811;
{ /* Llib/unicode.scm 1487 */
obj_t BgL_tablez00_5801;
BgL_tablez00_5801 = BGl_vector4892z00zz__unicodez00; 
{ /* Llib/unicode.scm 1459 */
long BgL_lenz00_5802;
BgL_lenz00_5802 = 
STRING_LENGTH(BgL_strz00_138); 
{ /* Llib/unicode.scm 1459 */
long BgL_nlenz00_5805;
BgL_nlenz00_5805 = 
BGl_8bitszd2ze3utf8zd2lengthze3zz__unicodez00(BgL_strz00_138, BgL_lenz00_5802, BgL_tablez00_5801); 
{ /* Llib/unicode.scm 1460 */

if(
(BgL_lenz00_5802==BgL_nlenz00_5805))
{ /* Llib/unicode.scm 1461 */
BgL_res3710z00_5811 = BgL_strz00_138; }  else 
{ /* Llib/unicode.scm 1461 */
BgL_res3710z00_5811 = 
BGl_8bitszd2ze3utf8zd2fillz12zf1zz__unicodez00(
make_string_sans_fill(BgL_nlenz00_5805), BgL_strz00_138, BgL_lenz00_5802, BgL_tablez00_5801); } } } } } 
return BgL_res3710z00_5811;} } 

}



/* &cp1252->utf8! */
obj_t BGl_z62cp1252zd2ze3utf8z12z41zz__unicodez00(obj_t BgL_envz00_6283, obj_t BgL_strz00_6284)
{
{ /* Llib/unicode.scm 1486 */
{ /* Llib/unicode.scm 1487 */
obj_t BgL_auxz00_12610;
if(
STRINGP(BgL_strz00_6284))
{ /* Llib/unicode.scm 1487 */
BgL_auxz00_12610 = BgL_strz00_6284
; }  else 
{ 
obj_t BgL_auxz00_12613;
BgL_auxz00_12613 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)59636)), BGl_string5050z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_strz00_6284); 
FAILURE(BgL_auxz00_12613,BFALSE,BFALSE);} 
return 
BGl_cp1252zd2ze3utf8z12z23zz__unicodez00(BgL_auxz00_12610);} } 

}



/* string-minimal-charset */
BGL_EXPORTED_DEF obj_t BGl_stringzd2minimalzd2charsetz00zz__unicodez00(obj_t BgL_strz00_139)
{
{ /* Llib/unicode.scm 1495 */
{ 
long BgL_iz00_2581;
BgL_iz00_2581 = 
(
STRING_LENGTH(BgL_strz00_139)-((long)1)); 
BgL_zc3z04anonymousza32363ze3z87_2582:
if(
(BgL_iz00_2581==((long)-1)))
{ /* Llib/unicode.scm 1498 */
return BGl_symbol4982z00zz__unicodez00;}  else 
{ /* Llib/unicode.scm 1499 */
bool_t BgL_test5909z00_12620;
{ /* Llib/unicode.scm 1499 */
unsigned char BgL_tmpz00_12621;
{ /* Llib/unicode.scm 1499 */
long BgL_l4458z00_6962;
BgL_l4458z00_6962 = 
STRING_LENGTH(BgL_strz00_139); 
if(
BOUND_CHECK(BgL_iz00_2581, BgL_l4458z00_6962))
{ /* Llib/unicode.scm 1499 */
BgL_tmpz00_12621 = 
STRING_REF(BgL_strz00_139, BgL_iz00_2581)
; }  else 
{ 
obj_t BgL_auxz00_12626;
BgL_auxz00_12626 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)60238)), BGl_string4975z00zz__unicodez00, BgL_strz00_139, 
(int)(BgL_l4458z00_6962), 
(int)(BgL_iz00_2581)); 
FAILURE(BgL_auxz00_12626,BFALSE,BFALSE);} } 
BgL_test5909z00_12620 = 
(BgL_tmpz00_12621<=((unsigned char)'')); } 
if(BgL_test5909z00_12620)
{ 
long BgL_iz00_12633;
BgL_iz00_12633 = 
(BgL_iz00_2581-((long)1)); 
BgL_iz00_2581 = BgL_iz00_12633; 
goto BgL_zc3z04anonymousza32363ze3z87_2582;}  else 
{ /* Llib/unicode.scm 1499 */
return BGl_symbol5051z00zz__unicodez00;} } } } 

}



/* &string-minimal-charset */
obj_t BGl_z62stringzd2minimalzd2charsetz62zz__unicodez00(obj_t BgL_envz00_6285, obj_t BgL_strz00_6286)
{
{ /* Llib/unicode.scm 1495 */
{ /* Llib/unicode.scm 1496 */
obj_t BgL_auxz00_12637;
if(
STRINGP(BgL_strz00_6286))
{ /* Llib/unicode.scm 1496 */
BgL_auxz00_12637 = BgL_strz00_6286
; }  else 
{ 
obj_t BgL_auxz00_12640;
BgL_auxz00_12640 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)60148)), BGl_string5053z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_strz00_6286); 
FAILURE(BgL_auxz00_12640,BFALSE,BFALSE);} 
return 
BGl_stringzd2minimalzd2charsetz00zz__unicodez00(BgL_auxz00_12637);} } 

}



/* utf8-string-minimal-charset */
BGL_EXPORTED_DEF obj_t BGl_utf8zd2stringzd2minimalzd2charsetzd2zz__unicodez00(obj_t BgL_strz00_140)
{
{ /* Llib/unicode.scm 1508 */
{ /* Llib/unicode.scm 1510 */
long BgL_lenz00_2590;
BgL_lenz00_2590 = 
(
STRING_LENGTH(BgL_strz00_140)-((long)1)); 
{ 
long BgL_iz00_2593;obj_t BgL_charsetz00_2594;
BgL_iz00_2593 = ((long)0); 
BgL_charsetz00_2594 = BGl_symbol4982z00zz__unicodez00; 
BgL_zc3z04anonymousza32370ze3z87_2595:
if(
(BgL_iz00_2593>=BgL_lenz00_2590))
{ /* Llib/unicode.scm 1513 */
return BgL_charsetz00_2594;}  else 
{ /* Llib/unicode.scm 1515 */
long BgL_nz00_2597;
{ /* Llib/unicode.scm 1515 */
unsigned char BgL_tmpz00_12649;
{ /* Llib/unicode.scm 1515 */
long BgL_l4462z00_6966;
BgL_l4462z00_6966 = 
STRING_LENGTH(BgL_strz00_140); 
if(
BOUND_CHECK(BgL_iz00_2593, BgL_l4462z00_6966))
{ /* Llib/unicode.scm 1515 */
BgL_tmpz00_12649 = 
STRING_REF(BgL_strz00_140, BgL_iz00_2593)
; }  else 
{ 
obj_t BgL_auxz00_12654;
BgL_auxz00_12654 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)60997)), BGl_string4975z00zz__unicodez00, BgL_strz00_140, 
(int)(BgL_l4462z00_6966), 
(int)(BgL_iz00_2593)); 
FAILURE(BgL_auxz00_12654,BFALSE,BFALSE);} } 
BgL_nz00_2597 = 
(BgL_tmpz00_12649); } 
if(
(BgL_nz00_2597<=((long)127)))
{ 
long BgL_iz00_12663;
BgL_iz00_12663 = 
(BgL_iz00_2593+((long)1)); 
BgL_iz00_2593 = BgL_iz00_12663; 
goto BgL_zc3z04anonymousza32370ze3z87_2595;}  else 
{ /* Llib/unicode.scm 1519 */
bool_t BgL_test5915z00_12665;
if(
(BgL_nz00_2597==((long)194)))
{ /* Llib/unicode.scm 1519 */
BgL_test5915z00_12665 = ((bool_t)1)
; }  else 
{ /* Llib/unicode.scm 1519 */
BgL_test5915z00_12665 = 
(BgL_nz00_2597==((long)195))
; } 
if(BgL_test5915z00_12665)
{ /* Llib/unicode.scm 1520 */
long BgL_mz00_2602;
{ /* Llib/unicode.scm 1520 */
unsigned char BgL_tmpz00_12669;
{ /* Llib/unicode.scm 1520 */
long BgL_i4465z00_6969;
BgL_i4465z00_6969 = 
(BgL_iz00_2593+((long)1)); 
{ /* Llib/unicode.scm 1520 */
long BgL_l4466z00_6970;
BgL_l4466z00_6970 = 
STRING_LENGTH(BgL_strz00_140); 
if(
BOUND_CHECK(BgL_i4465z00_6969, BgL_l4466z00_6970))
{ /* Llib/unicode.scm 1520 */
BgL_tmpz00_12669 = 
STRING_REF(BgL_strz00_140, BgL_i4465z00_6969)
; }  else 
{ 
obj_t BgL_auxz00_12675;
BgL_auxz00_12675 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)61149)), BGl_string4975z00zz__unicodez00, BgL_strz00_140, 
(int)(BgL_l4466z00_6970), 
(int)(BgL_i4465z00_6969)); 
FAILURE(BgL_auxz00_12675,BFALSE,BFALSE);} } } 
BgL_mz00_2602 = 
(BgL_tmpz00_12669); } 
{ /* Llib/unicode.scm 1521 */
bool_t BgL_test5918z00_12682;
if(
(BgL_mz00_2602>=((long)128)))
{ /* Llib/unicode.scm 1521 */
BgL_test5918z00_12682 = 
(BgL_mz00_2602<=((long)191))
; }  else 
{ /* Llib/unicode.scm 1521 */
BgL_test5918z00_12682 = ((bool_t)0)
; } 
if(BgL_test5918z00_12682)
{ 
obj_t BgL_charsetz00_12688;long BgL_iz00_12686;
BgL_iz00_12686 = 
(BgL_iz00_2593+((long)2)); 
BgL_charsetz00_12688 = BGl_symbol5051z00zz__unicodez00; 
BgL_charsetz00_2594 = BgL_charsetz00_12688; 
BgL_iz00_2593 = BgL_iz00_12686; 
goto BgL_zc3z04anonymousza32370ze3z87_2595;}  else 
{ /* Llib/unicode.scm 1521 */
return BGl_symbol4993z00zz__unicodez00;} } }  else 
{ /* Llib/unicode.scm 1519 */
return BGl_symbol4993z00zz__unicodez00;} } } } } } 

}



/* &utf8-string-minimal-charset */
obj_t BGl_z62utf8zd2stringzd2minimalzd2charsetzb0zz__unicodez00(obj_t BgL_envz00_6287, obj_t BgL_strz00_6288)
{
{ /* Llib/unicode.scm 1508 */
{ /* Llib/unicode.scm 1510 */
obj_t BgL_auxz00_12689;
if(
STRINGP(BgL_strz00_6288))
{ /* Llib/unicode.scm 1510 */
BgL_auxz00_12689 = BgL_strz00_6288
; }  else 
{ 
obj_t BgL_auxz00_12692;
BgL_auxz00_12692 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)60849)), BGl_string5054z00zz__unicodez00, BGl_string4973z00zz__unicodez00, BgL_strz00_6288); 
FAILURE(BgL_auxz00_12692,BFALSE,BFALSE);} 
return 
BGl_utf8zd2stringzd2minimalzd2charsetzd2zz__unicodez00(BgL_auxz00_12689);} } 

}



/* ucs2-string-minimal-charset */
BGL_EXPORTED_DEF obj_t BGl_ucs2zd2stringzd2minimalzd2charsetzd2zz__unicodez00(obj_t BgL_strz00_141)
{
{ /* Llib/unicode.scm 1533 */
{ /* Llib/unicode.scm 1535 */
long BgL_lenz00_2613;
BgL_lenz00_2613 = 
(
(long)(
UCS2_STRING_LENGTH(BgL_strz00_141))-((long)1)); 
{ 
long BgL_iz00_2616;obj_t BgL_charsetz00_2617;
BgL_iz00_2616 = ((long)0); 
BgL_charsetz00_2617 = BGl_symbol4982z00zz__unicodez00; 
BgL_zc3z04anonymousza32384ze3z87_2618:
if(
(BgL_iz00_2616>=BgL_lenz00_2613))
{ /* Llib/unicode.scm 1538 */
return BgL_charsetz00_2617;}  else 
{ /* Llib/unicode.scm 1540 */
int BgL_nz00_2620;
{ /* Llib/unicode.scm 1540 */
ucs2_t BgL_arg2396z00_2631;
{ /* Llib/unicode.scm 274 */
int BgL_tmpz00_12702;
BgL_tmpz00_12702 = 
(int)(BgL_iz00_2616); 
BgL_arg2396z00_2631 = 
UCS2_STRING_REF(BgL_strz00_141, BgL_tmpz00_12702); } 
{ /* Llib/unicode.scm 1540 */
int BgL_res3736z00_5870;
{ /* Llib/unicode.scm 1540 */
obj_t BgL_tmpz00_12705;
BgL_tmpz00_12705 = 
BUCS2(BgL_arg2396z00_2631); 
BgL_res3736z00_5870 = 
CUCS2(BgL_tmpz00_12705); } 
BgL_nz00_2620 = BgL_res3736z00_5870; } } 
if(
(
(long)(BgL_nz00_2620)<=((long)127)))
{ 
long BgL_iz00_12711;
BgL_iz00_12711 = 
(BgL_iz00_2616+((long)1)); 
BgL_iz00_2616 = BgL_iz00_12711; 
goto BgL_zc3z04anonymousza32384ze3z87_2618;}  else 
{ /* Llib/unicode.scm 1542 */
if(
(
(long)(BgL_nz00_2620)<=((long)255)))
{ 
obj_t BgL_charsetz00_12718;long BgL_iz00_12716;
BgL_iz00_12716 = 
(BgL_iz00_2616+((long)1)); 
if(
(BgL_charsetz00_2617==BGl_symbol5055z00zz__unicodez00))
{ /* Llib/unicode.scm 1545 */
BgL_charsetz00_12718 = BGl_symbol5055z00zz__unicodez00; }  else 
{ /* Llib/unicode.scm 1545 */
BgL_charsetz00_12718 = BGl_symbol5051z00zz__unicodez00; } 
BgL_charsetz00_2617 = BgL_charsetz00_12718; 
BgL_iz00_2616 = BgL_iz00_12716; 
goto BgL_zc3z04anonymousza32384ze3z87_2618;}  else 
{ /* Llib/unicode.scm 1546 */
bool_t BgL_test5925z00_12721;
if(
(
(long)(BgL_nz00_2620)<((long)56320)))
{ /* Llib/unicode.scm 1546 */
BgL_test5925z00_12721 = ((bool_t)1)
; }  else 
{ /* Llib/unicode.scm 1546 */
BgL_test5925z00_12721 = 
(
(long)(BgL_nz00_2620)>((long)56319))
; } 
if(BgL_test5925z00_12721)
{ 
obj_t BgL_charsetz00_12729;long BgL_iz00_12727;
BgL_iz00_12727 = 
(BgL_iz00_2616+((long)1)); 
BgL_charsetz00_12729 = BGl_symbol5055z00zz__unicodez00; 
BgL_charsetz00_2617 = BgL_charsetz00_12729; 
BgL_iz00_2616 = BgL_iz00_12727; 
goto BgL_zc3z04anonymousza32384ze3z87_2618;}  else 
{ /* Llib/unicode.scm 1546 */
return BGl_symbol5057z00zz__unicodez00;} } } } } } } 

}



/* &ucs2-string-minimal-charset */
obj_t BGl_z62ucs2zd2stringzd2minimalzd2charsetzb0zz__unicodez00(obj_t BgL_envz00_6289, obj_t BgL_strz00_6290)
{
{ /* Llib/unicode.scm 1533 */
{ /* Llib/unicode.scm 1535 */
obj_t BgL_auxz00_12730;
if(
UCS2_STRINGP(BgL_strz00_6290))
{ /* Llib/unicode.scm 1535 */
BgL_auxz00_12730 = BgL_strz00_6290
; }  else 
{ 
obj_t BgL_auxz00_12733;
BgL_auxz00_12733 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4925z00zz__unicodez00, 
BINT(((long)61851)), BGl_string5059z00zz__unicodez00, BGl_string4930z00zz__unicodez00, BgL_strz00_6290); 
FAILURE(BgL_auxz00_12733,BFALSE,BFALSE);} 
return 
BGl_ucs2zd2stringzd2minimalzd2charsetzd2zz__unicodez00(BgL_auxz00_12730);} } 

}



/* object-init */
obj_t BGl_objectzd2initzd2zz__unicodez00()
{
{ /* Llib/unicode.scm 14 */
return BUNSPEC;} 

}



/* generic-init */
obj_t BGl_genericzd2initzd2zz__unicodez00()
{
{ /* Llib/unicode.scm 14 */
return BUNSPEC;} 

}



/* method-init */
obj_t BGl_methodzd2initzd2zz__unicodez00()
{
{ /* Llib/unicode.scm 14 */
return BUNSPEC;} 

}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__unicodez00()
{
{ /* Llib/unicode.scm 14 */
BGl_modulezd2initializa7ationz75zz__errorz00(((long)37115357), 
BSTRING_TO_STRING(BGl_string5060z00zz__unicodez00)); 
BGl_modulezd2initializa7ationz75zz__paramz00(((long)453938973), 
BSTRING_TO_STRING(BGl_string5060z00zz__unicodez00)); 
BGl_modulezd2initializa7ationz75zz__bexitz00(((long)340267996), 
BSTRING_TO_STRING(BGl_string5060z00zz__unicodez00)); 
BGl_modulezd2initializa7ationz75zz__objectz00(((long)193422032), 
BSTRING_TO_STRING(BGl_string5060z00zz__unicodez00)); 
return 
BGl_modulezd2initializa7ationz75zz__threadz00(((long)224967910), 
BSTRING_TO_STRING(BGl_string5060z00zz__unicodez00));} 

}

#ifdef __cplusplus
}
#endif
