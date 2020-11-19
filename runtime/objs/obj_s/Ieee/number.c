/*===========================================================================*/
/*   (Ieee/number.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -c Ieee/number.scm -indent -o objs/obj_s/Ieee/number.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
BGL_EXPORTED_DECL obj_t bgl_inexact_to_exact(obj_t);
BGL_EXPORTED_DECL bool_t BGl_negativezf3zf3zz__r4_numbers_6_5z00(obj_t);
BGL_EXPORTED_DECL bool_t BGl_complexzf3zf3zz__r4_numbers_6_5z00(obj_t);
static obj_t BGl_z62logz62zz__r4_numbers_6_5z00(obj_t, obj_t);
BGL_EXPORTED_DECL double BGl_sinz00zz__r4_numbers_6_5z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_2minz00zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl_z62flonumzd2ze3elongz53zz__r4_numbers_6_5z00(obj_t, obj_t);
BGL_EXPORTED_DECL double BGl_acosz00zz__r4_numbers_6_5z00(obj_t);
static obj_t BGl_z62llongzd2ze3flonumz53zz__r4_numbers_6_5z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_flonumzd2ze3bignumz31zz__r4_numbers_6_5z00(double);
extern obj_t the_failure(obj_t, obj_t, obj_t);
static obj_t BGl_z62uint64zd2ze3flonumz53zz__r4_numbers_6_5z00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_zc3zd3z10zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL int64_t BGl_flonumzd2ze3int64z31zz__r4_numbers_6_5z00(double);
BGL_EXPORTED_DECL bool_t BGl_rationalzf3zf3zz__r4_numbers_6_5z00(obj_t);
extern obj_t BGl_elongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long, obj_t);
static obj_t BGl_z62int64zd2ze3flonumz53zz__r4_numbers_6_5z00(obj_t, obj_t);
extern long BGl_exptfxz00zz__r4_numbers_6_5_fixnumz00(long, long);
static obj_t BGl_requirezd2initializa7ationz75zz__r4_numbers_6_5z00 = BUNSPEC;
static obj_t BGl_z62tanz62zz__r4_numbers_6_5z00(obj_t, obj_t);
extern obj_t BGl_bignumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(obj_t, long);
BGL_EXPORTED_DECL bool_t BGl_inexactzf3zf3zz__r4_numbers_6_5z00(obj_t);
BGL_EXPORTED_DECL double BGl_int32zd2ze3flonumz31zz__r4_numbers_6_5z00(int32_t);
extern obj_t bgl_bignum_neg(obj_t);
static obj_t BGl_z62flonumzd2ze3int32z53zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl_z62positivezf3z91zz__r4_numbers_6_5z00(obj_t, obj_t);
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62fixnumzd2ze3flonumz53zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl_z62flonumzd2ze3fixnumz53zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl_symbol5340z00zz__r4_numbers_6_5z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_truncatez00zz__r4_numbers_6_5z00(obj_t);
static obj_t BGl_z62atanz62zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
BGL_EXPORTED_DECL double BGl_expz00zz__r4_numbers_6_5z00(obj_t);
static obj_t BGl_symbol5346z00zz__r4_numbers_6_5z00 = BUNSPEC;
static obj_t BGl_z62bignumzd2ze3flonumz53zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl_z62roundz62zz__r4_numbers_6_5z00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_ze3zd3z30zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62zc3zd3z72zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_minz00zz__r4_numbers_6_5z00(obj_t, obj_t);
extern obj_t bgl_bignum_div(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_numberzf3zf3zz__r4_numbers_6_5z00(obj_t);
static obj_t BGl_z62maxz62zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
static obj_t BGl_z622zc3zd3z72zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62numberzf3z91zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl_toplevelzd2initzd2zz__r4_numbers_6_5z00();
BGL_EXPORTED_DECL obj_t BGl_absz00zz__r4_numbers_6_5z00(obj_t);
extern obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long, long);
BGL_EXPORTED_DECL obj_t BGl_ceilingz00zz__r4_numbers_6_5z00(obj_t);
BGL_EXPORTED_DECL double BGl_atanz00zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl_z62ceilingz62zz__r4_numbers_6_5z00(obj_t, obj_t);
extern obj_t BGl_stringzd2ze3integerzd2objze3zz__r4_numbers_6_5_fixnumz00(obj_t, long);
static obj_t BGl_z62sqrtz62zz__r4_numbers_6_5z00(obj_t, obj_t);
extern bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
static double BGl_za2minintflza2z00zz__r4_numbers_6_5z00;
extern double BGl_roundflz00zz__r4_numbers_6_5_flonumz00(double);
static obj_t BGl_cnstzd2initzd2zz__r4_numbers_6_5z00();
static obj_t BGl_z62ze3zd3z52zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62flonumzd2ze3int64z53zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl_z62complexzf3z91zz__r4_numbers_6_5z00(obj_t, obj_t);
BGL_EXPORTED_DECL double BGl_cosz00zz__r4_numbers_6_5z00(obj_t);
extern obj_t BGl_llongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T, obj_t);
static obj_t BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(obj_t);
static obj_t BGl_z62uint32zd2ze3flonumz53zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl_z62flonumzd2ze3uint32z53zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl_z622ze3zd3z52zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_positivezf3zf3zz__r4_numbers_6_5z00(obj_t);
static obj_t BGl_gczd2rootszd2initz00zz__r4_numbers_6_5z00();
BGL_EXPORTED_DECL obj_t BGl_2za2za2zz__r4_numbers_6_5z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl_z62int32zd2ze3flonumz53zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl_importedzd2moduleszd2initz00zz__r4_numbers_6_5z00();
BGL_EXPORTED_DECL obj_t BGl_2zd2zd2zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl_z622maxz62zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_2zf2zf2zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl_z62exptz62zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
extern obj_t bgl_bignum_mul(obj_t, obj_t);
BGL_EXPORTED_DECL double BGl_sqrtz00zz__r4_numbers_6_5z00(obj_t);
BGL_EXPORTED_DECL bool_t BGl_2zc3zc3zz__r4_numbers_6_5z00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_2zd3zd3zz__r4_numbers_6_5z00(obj_t, obj_t);
extern double bgl_bignum_to_flonum(obj_t);
BGL_EXPORTED_DECL bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
BGL_EXPORTED_DECL double BGl_uint64zd2ze3flonumz31zz__r4_numbers_6_5z00(uint64_t);
BGL_EXPORTED_DECL double BGl_logz00zz__r4_numbers_6_5z00(obj_t);
static obj_t BGl_z62sinz62zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl_z62inexactzf3z91zz__r4_numbers_6_5z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_2maxz00zz__r4_numbers_6_5z00(obj_t, obj_t);
BGL_EXPORTED_DECL double BGl_elongzd2ze3flonumz31zz__r4_numbers_6_5z00(long);
static obj_t BGl_z62exactzd2ze3inexactz53zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl_z62exactzf3z91zz__r4_numbers_6_5z00(obj_t, obj_t);
BGL_EXPORTED_DECL double BGl_fixnumzd2ze3flonumz31zz__r4_numbers_6_5z00(long);
BGL_EXPORTED_DECL long BGl_flonumzd2ze3fixnumz31zz__r4_numbers_6_5z00(double);
static obj_t BGl_z622za2zc0zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_exptz00zz__r4_numbers_6_5z00(obj_t, obj_t);
BGL_EXPORTED_DECL BGL_LONGLONG_T BGl_flonumzd2ze3llongz31zz__r4_numbers_6_5z00(double);
static obj_t BGl_z622zb2zd0zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
static obj_t BGl_z622zd2zb0zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
static obj_t BGl_z622zf2z90zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL double BGl_bignumzd2ze3flonumz31zz__r4_numbers_6_5z00(obj_t);
extern obj_t bgl_bignum_add(obj_t, obj_t);
static obj_t BGl_z62truncatez62zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl_z62asinz62zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl_z622zc3za1zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
static obj_t BGl_z622zd3zb1zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
static obj_t BGl_z622ze3z81zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62flonumzd2ze3uint64z53zz__r4_numbers_6_5z00(obj_t, obj_t);
extern obj_t bstring_to_symbol(obj_t);
static obj_t BGl_z62inexactzd2ze3exactz53zz__r4_numbers_6_5z00(obj_t, obj_t);
static double BGl_za2maxintflza2z00zz__r4_numbers_6_5z00;
BGL_EXPORTED_DECL double BGl_tanz00zz__r4_numbers_6_5z00(obj_t);
static obj_t BGl_z62za2zc0zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl_z62zb2zd0zz__r4_numbers_6_5z00(obj_t, obj_t);
extern obj_t bgl_long_to_bignum(long);
static obj_t BGl_z62zd2zb0zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62zf2z90zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
static obj_t BGl__stringzd2ze3numberz31zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl__numberzd2ze3stringz31zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl_z62zc3za1zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_za7erozf3z54zz__r4_numbers_6_5z00(obj_t);
static obj_t BGl_z62zd3zb1zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62ze3z81zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_floorz00zz__r4_numbers_6_5z00(obj_t);
BGL_EXPORTED_DECL double BGl_asinz00zz__r4_numbers_6_5z00(obj_t);
static obj_t BGl_z62flonumzd2ze3bignumz53zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl_z62expz62zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl_z62negativezf3z91zz__r4_numbers_6_5z00(obj_t, obj_t);
extern obj_t BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(obj_t, obj_t, obj_t, obj_t, int, int);
BGL_EXPORTED_DECL obj_t BGl_maxz00zz__r4_numbers_6_5z00(obj_t, obj_t);
static bool_t BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(obj_t);
static obj_t BGl_z62minz62zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_2zc3zd3z10zz__r4_numbers_6_5z00(obj_t, obj_t);
BGL_EXPORTED_DECL double BGl_uint32zd2ze3flonumz31zz__r4_numbers_6_5z00(uint32_t);
BGL_EXPORTED_DECL uint32_t BGl_flonumzd2ze3uint32z31zz__r4_numbers_6_5z00(double);
BGL_EXPORTED_DECL long BGl_flonumzd2ze3elongz31zz__r4_numbers_6_5z00(double);
static obj_t BGl_z62absz62zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl_z62elongzd2ze3flonumz53zz__r4_numbers_6_5z00(obj_t, obj_t);
BGL_EXPORTED_DECL double BGl_llongzd2ze3flonumz31zz__r4_numbers_6_5z00(BGL_LONGLONG_T);
extern obj_t bgl_uint64_to_bignum(uint64_t);
static obj_t BGl_z62flonumzd2ze3llongz53zz__r4_numbers_6_5z00(obj_t, obj_t);
extern obj_t bgl_bignum_sub(obj_t, obj_t);
extern obj_t bgl_bignum_abs(obj_t);
BGL_EXPORTED_DECL double BGl_int64zd2ze3flonumz31zz__r4_numbers_6_5z00(int64_t);
extern int bgl_bignum_cmp(obj_t, obj_t);
extern obj_t BGl_exptbxz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
static obj_t BGl_z62rationalzf3z91zz__r4_numbers_6_5z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_za2za2zz__r4_numbers_6_5z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_zb2zb2zz__r4_numbers_6_5z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_zd2zd2zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl_z62cosz62zz__r4_numbers_6_5z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_zf2zf2zz__r4_numbers_6_5z00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_2ze3zd3z30zz__r4_numbers_6_5z00(obj_t, obj_t);
extern obj_t bgl_real_to_string(double);
extern obj_t bgl_long_to_bignum(long);
BGL_EXPORTED_DECL int32_t BGl_flonumzd2ze3int32z31zz__r4_numbers_6_5z00(double);
BGL_EXPORTED_DECL obj_t bgl_exact_to_inexact(obj_t);
BGL_EXPORTED_DECL bool_t BGl_exactzf3zf3zz__r4_numbers_6_5z00(obj_t);
extern obj_t bgl_llong_to_bignum(BGL_LONGLONG_T);
BGL_EXPORTED_DECL bool_t BGl_zc3zc3zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_zd3zd3zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
static obj_t BGl_z622minz62zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62za7erozf3z36zz__r4_numbers_6_5z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_roundz00zz__r4_numbers_6_5z00(obj_t);
static obj_t BGl_z62floorz62zz__r4_numbers_6_5z00(obj_t, obj_t);
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62acosz62zz__r4_numbers_6_5z00(obj_t, obj_t);
extern obj_t bgl_flonum_to_bignum(double);
BGL_EXPORTED_DECL uint64_t BGl_flonumzd2ze3uint64z31zz__r4_numbers_6_5z00(double);
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_ceilingzd2envzd2zz__r4_numbers_6_5z00, BgL_bgl_za762ceilingza762za7za7_5359z00, BGl_z62ceilingz62zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bignumzd2ze3flonumzd2envze3zz__r4_numbers_6_5z00, BgL_bgl_za762bignumza7d2za7e3f5360za7, BGl_z62bignumzd2ze3flonumz53zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string5350z00zz__r4_numbers_6_5z00, BgL_bgl_string5350za700za7za7_5361za7, "loop", 4 );
DEFINE_STRING( BGl_string5351z00zz__r4_numbers_6_5z00, BgL_bgl_string5351za700za7za7_5362za7, "+nan.0", 6 );
DEFINE_STRING( BGl_string5270z00zz__r4_numbers_6_5z00, BgL_bgl_string5270za700za7za7_5363za7, "belong", 6 );
DEFINE_STRING( BGl_string5271z00zz__r4_numbers_6_5z00, BgL_bgl_string5271za700za7za7_5364za7, "&flonum->llong", 14 );
DEFINE_STRING( BGl_string5353z00zz__r4_numbers_6_5z00, BgL_bgl_string5353za700za7za7_5365za7, "+inf.0", 6 );
DEFINE_STRING( BGl_string5272z00zz__r4_numbers_6_5z00, BgL_bgl_string5272za700za7za7_5366za7, "&llong->flonum", 14 );
DEFINE_STRING( BGl_string5273z00zz__r4_numbers_6_5z00, BgL_bgl_string5273za700za7za7_5367za7, "bllong", 6 );
DEFINE_STRING( BGl_string5355z00zz__r4_numbers_6_5z00, BgL_bgl_string5355za700za7za7_5368za7, "-inf.0", 6 );
DEFINE_STRING( BGl_string5274z00zz__r4_numbers_6_5z00, BgL_bgl_string5274za700za7za7_5369za7, "&flonum->bignum", 15 );
DEFINE_STRING( BGl_string5275z00zz__r4_numbers_6_5z00, BgL_bgl_string5275za700za7za7_5370za7, "&bignum->flonum", 15 );
DEFINE_STRING( BGl_string5357z00zz__r4_numbers_6_5z00, BgL_bgl_string5357za700za7za7_5371za7, "Only radix `10' is legal for floating point number", 50 );
DEFINE_STRING( BGl_string5276z00zz__r4_numbers_6_5z00, BgL_bgl_string5276za700za7za7_5372za7, "bignum", 6 );
DEFINE_STRING( BGl_string5358z00zz__r4_numbers_6_5z00, BgL_bgl_string5358za700za7za7_5373za7, "__r4_numbers_6_5", 16 );
DEFINE_STRING( BGl_string5277z00zz__r4_numbers_6_5z00, BgL_bgl_string5277za700za7za7_5374za7, "&flonum->int32", 14 );
DEFINE_STRING( BGl_string5278z00zz__r4_numbers_6_5z00, BgL_bgl_string5278za700za7za7_5375za7, "&int32->flonum", 14 );
DEFINE_STRING( BGl_string5279z00zz__r4_numbers_6_5z00, BgL_bgl_string5279za700za7za7_5376za7, "bint32", 6 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_int64zd2ze3flonumzd2envze3zz__r4_numbers_6_5z00, BgL_bgl_za762int64za7d2za7e3fl5377za7, BGl_z62int64zd2ze3flonumz53zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_zd2zd2envz00zz__r4_numbers_6_5z00, BgL_bgl_za762za7d2za7b0za7za7__r4_5378za7, va_generic_entry, BGl_z62zd2zb0zz__r4_numbers_6_5z00, BUNSPEC, -2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_2ze3zd3zd2envze2zz__r4_numbers_6_5z00, BgL_bgl_za7622za7e3za7d3za752za7za7_5379z00, BGl_z622ze3zd3z52zz__r4_numbers_6_5z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string5280z00zz__r4_numbers_6_5z00, BgL_bgl_string5280za700za7za7_5380za7, "&flonum->uint32", 15 );
DEFINE_STRING( BGl_string5281z00zz__r4_numbers_6_5z00, BgL_bgl_string5281za700za7za7_5381za7, "&uint32->flonum", 15 );
DEFINE_STRING( BGl_string5282z00zz__r4_numbers_6_5z00, BgL_bgl_string5282za700za7za7_5382za7, "buint32", 7 );
DEFINE_STRING( BGl_string5283z00zz__r4_numbers_6_5z00, BgL_bgl_string5283za700za7za7_5383za7, "&flonum->int64", 14 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_int32zd2ze3flonumzd2envze3zz__r4_numbers_6_5z00, BgL_bgl_za762int32za7d2za7e3fl5384za7, BGl_z62int32zd2ze3flonumz53zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string5284z00zz__r4_numbers_6_5z00, BgL_bgl_string5284za700za7za7_5385za7, "&int64->flonum", 14 );
DEFINE_STRING( BGl_string5285z00zz__r4_numbers_6_5z00, BgL_bgl_string5285za700za7za7_5386za7, "bint64", 6 );
DEFINE_STRING( BGl_string5286z00zz__r4_numbers_6_5z00, BgL_bgl_string5286za700za7za7_5387za7, "&flonum->uint64", 15 );
DEFINE_STRING( BGl_string5287z00zz__r4_numbers_6_5z00, BgL_bgl_string5287za700za7za7_5388za7, "&uint64->flonum", 15 );
DEFINE_STRING( BGl_string5288z00zz__r4_numbers_6_5z00, BgL_bgl_string5288za700za7za7_5389za7, "buint64", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_zd3zd2envz01zz__r4_numbers_6_5z00, BgL_bgl_za762za7d3za7b1za7za7__r4_5390za7, va_generic_entry, BGl_z62zd3zb1zz__r4_numbers_6_5z00, BUNSPEC, -3 );
DEFINE_STRING( BGl_string5289z00zz__r4_numbers_6_5z00, BgL_bgl_string5289za700za7za7_5391za7, "2=", 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_2zd2zd2envz00zz__r4_numbers_6_5z00, BgL_bgl_za7622za7d2za7b0za7za7__r45392za7, BGl_z622zd2zb0zz__r4_numbers_6_5z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_floorzd2envzd2zz__r4_numbers_6_5z00, BgL_bgl_za762floorza762za7za7__r5393z00, BGl_z62floorz62zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_2zd3zd2envz01zz__r4_numbers_6_5z00, BgL_bgl_za7622za7d3za7b1za7za7__r45394za7, BGl_z622zd3zb1zz__r4_numbers_6_5z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string5290z00zz__r4_numbers_6_5z00, BgL_bgl_string5290za700za7za7_5395za7, "=", 1 );
DEFINE_STRING( BGl_string5291z00zz__r4_numbers_6_5z00, BgL_bgl_string5291za700za7za7_5396za7, "not a number", 12 );
DEFINE_STRING( BGl_string5292z00zz__r4_numbers_6_5z00, BgL_bgl_string5292za700za7za7_5397za7, "not a number5", 13 );
DEFINE_STRING( BGl_string5293z00zz__r4_numbers_6_5z00, BgL_bgl_string5293za700za7za7_5398za7, "=-list", 6 );
DEFINE_STRING( BGl_string5294z00zz__r4_numbers_6_5z00, BgL_bgl_string5294za700za7za7_5399za7, "pair", 4 );
DEFINE_STRING( BGl_string5295z00zz__r4_numbers_6_5z00, BgL_bgl_string5295za700za7za7_5400za7, "2<", 2 );
DEFINE_STRING( BGl_string5296z00zz__r4_numbers_6_5z00, BgL_bgl_string5296za700za7za7_5401za7, "<", 1 );
DEFINE_STRING( BGl_string5297z00zz__r4_numbers_6_5z00, BgL_bgl_string5297za700za7za7_5402za7, "<-list", 6 );
DEFINE_STRING( BGl_string5298z00zz__r4_numbers_6_5z00, BgL_bgl_string5298za700za7za7_5403za7, "2>", 2 );
DEFINE_STRING( BGl_string5299z00zz__r4_numbers_6_5z00, BgL_bgl_string5299za700za7za7_5404za7, ">", 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_minzd2envzd2zz__r4_numbers_6_5z00, BgL_bgl_za762minza762za7za7__r4_5405z00, va_generic_entry, BGl_z62minz62zz__r4_numbers_6_5z00, BUNSPEC, -2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_maxzd2envzd2zz__r4_numbers_6_5z00, BgL_bgl_za762maxza762za7za7__r4_5406z00, va_generic_entry, BGl_z62maxz62zz__r4_numbers_6_5z00, BUNSPEC, -2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_numberzf3zd2envz21zz__r4_numbers_6_5z00, BgL_bgl_za762numberza7f3za791za75407z00, BGl_z62numberzf3z91zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_fixnumzd2ze3flonumzd2envze3zz__r4_numbers_6_5z00, BgL_bgl_za762fixnumza7d2za7e3f5408za7, BGl_z62fixnumzd2ze3flonumz53zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_flonumzd2ze3fixnumzd2envze3zz__r4_numbers_6_5z00, BgL_bgl_za762flonumza7d2za7e3f5409za7, BGl_z62flonumzd2ze3fixnumz53zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_atanzd2envzd2zz__r4_numbers_6_5z00, BgL_bgl_za762atanza762za7za7__r45410z00, va_generic_entry, BGl_z62atanz62zz__r4_numbers_6_5z00, BUNSPEC, -2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_zc3zd3zd2envzc2zz__r4_numbers_6_5z00, BgL_bgl_za762za7c3za7d3za772za7za7__5411z00, va_generic_entry, BGl_z62zc3zd3z72zz__r4_numbers_6_5z00, BUNSPEC, -3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_flonumzd2ze3int64zd2envze3zz__r4_numbers_6_5z00, BgL_bgl_za762flonumza7d2za7e3i5412za7, BGl_z62flonumzd2ze3int64z53zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_rationalzf3zd2envz21zz__r4_numbers_6_5z00, BgL_bgl_za762rationalza7f3za795413za7, BGl_z62rationalzf3z91zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_tanzd2envzd2zz__r4_numbers_6_5z00, BgL_bgl_za762tanza762za7za7__r4_5414z00, BGl_z62tanz62zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_za2zd2envz70zz__r4_numbers_6_5z00, BgL_bgl_za762za7a2za7c0za7za7__r4_5415za7, va_generic_entry, BGl_z62za2zc0zz__r4_numbers_6_5z00, BUNSPEC, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_2za2zd2envz70zz__r4_numbers_6_5z00, BgL_bgl_za7622za7a2za7c0za7za7__r45416za7, BGl_z622za2zc0zz__r4_numbers_6_5z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ze3zd2envz31zz__r4_numbers_6_5z00, BgL_bgl_za762za7e3za781za7za7__r4_5417za7, va_generic_entry, BGl_z62ze3z81zz__r4_numbers_6_5z00, BUNSPEC, -3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_za7erozf3zd2envz86zz__r4_numbers_6_5z00, BgL_bgl_za762za7a7eroza7f3za736za75418za7, BGl_z62za7erozf3z36zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_asinzd2envzd2zz__r4_numbers_6_5z00, BgL_bgl_za762asinza762za7za7__r45419z00, BGl_z62asinz62zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_expzd2envzd2zz__r4_numbers_6_5z00, BgL_bgl_za762expza762za7za7__r4_5420z00, BGl_z62expz62zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_2ze3zd2envz31zz__r4_numbers_6_5z00, BgL_bgl_za7622za7e3za781za7za7__r45421za7, BGl_z622ze3z81zz__r4_numbers_6_5z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_flonumzd2ze3uint64zd2envze3zz__r4_numbers_6_5z00, BgL_bgl_za762flonumza7d2za7e3u5422za7, BGl_z62flonumzd2ze3uint64z53zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_negativezf3zd2envz21zz__r4_numbers_6_5z00, BgL_bgl_za762negativeza7f3za795423za7, BGl_z62negativezf3z91zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_sinzd2envzd2zz__r4_numbers_6_5z00, BgL_bgl_za762sinza762za7za7__r4_5424z00, BGl_z62sinz62zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_2zc3zd3zd2envzc2zz__r4_numbers_6_5z00, BgL_bgl_za7622za7c3za7d3za772za7za7_5425z00, BGl_z622zc3zd3z72zz__r4_numbers_6_5z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_2minzd2envzd2zz__r4_numbers_6_5z00, BgL_bgl_za7622minza762za7za7__r45426z00, BGl_z622minz62zz__r4_numbers_6_5z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_2maxzd2envzd2zz__r4_numbers_6_5z00, BgL_bgl_za7622maxza762za7za7__r45427z00, BGl_z622maxz62zz__r4_numbers_6_5z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_flonumzd2ze3llongzd2envze3zz__r4_numbers_6_5z00, BgL_bgl_za762flonumza7d2za7e3l5428za7, BGl_z62flonumzd2ze3llongz53zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_acoszd2envzd2zz__r4_numbers_6_5z00, BgL_bgl_za762acosza762za7za7__r45429z00, BGl_z62acosz62zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_flonumzd2ze3bignumzd2envze3zz__r4_numbers_6_5z00, BgL_bgl_za762flonumza7d2za7e3b5430za7, BGl_z62flonumzd2ze3bignumz53zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_coszd2envzd2zz__r4_numbers_6_5z00, BgL_bgl_za762cosza762za7za7__r4_5431z00, BGl_z62cosz62zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_zb2zd2envz60zz__r4_numbers_6_5z00, BgL_bgl_za762za7b2za7d0za7za7__r4_5432za7, va_generic_entry, BGl_z62zb2zd0zz__r4_numbers_6_5z00, BUNSPEC, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_zf2zd2envz20zz__r4_numbers_6_5z00, BgL_bgl_za762za7f2za790za7za7__r4_5433za7, va_generic_entry, BGl_z62zf2z90zz__r4_numbers_6_5z00, BUNSPEC, -2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_2zb2zd2envz60zz__r4_numbers_6_5z00, BgL_bgl_za7622za7b2za7d0za7za7__r45434za7, BGl_z622zb2zd0zz__r4_numbers_6_5z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_2zf2zd2envz20zz__r4_numbers_6_5z00, BgL_bgl_za7622za7f2za790za7za7__r45435za7, BGl_z622zf2z90zz__r4_numbers_6_5z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_truncatezd2envzd2zz__r4_numbers_6_5z00, BgL_bgl_za762truncateza762za7za75436z00, BGl_z62truncatez62zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_complexzf3zd2envz21zz__r4_numbers_6_5z00, BgL_bgl_za762complexza7f3za7915437za7, BGl_z62complexzf3z91zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string5300z00zz__r4_numbers_6_5z00, BgL_bgl_string5300za700za7za7_5438za7, ">-list", 6 );
DEFINE_STRING( BGl_string5301z00zz__r4_numbers_6_5z00, BgL_bgl_string5301za700za7za7_5439za7, "2<=", 3 );
DEFINE_STRING( BGl_string5302z00zz__r4_numbers_6_5z00, BgL_bgl_string5302za700za7za7_5440za7, "<=", 2 );
DEFINE_STRING( BGl_string5303z00zz__r4_numbers_6_5z00, BgL_bgl_string5303za700za7za7_5441za7, "<=-list", 7 );
DEFINE_STRING( BGl_string5304z00zz__r4_numbers_6_5z00, BgL_bgl_string5304za700za7za7_5442za7, "2>=", 3 );
DEFINE_STRING( BGl_string5305z00zz__r4_numbers_6_5z00, BgL_bgl_string5305za700za7za7_5443za7, ">=", 2 );
DEFINE_STRING( BGl_string5306z00zz__r4_numbers_6_5z00, BgL_bgl_string5306za700za7za7_5444za7, ">=-list", 7 );
DEFINE_STRING( BGl_string5307z00zz__r4_numbers_6_5z00, BgL_bgl_string5307za700za7za7_5445za7, "zero", 4 );
DEFINE_STRING( BGl_string5308z00zz__r4_numbers_6_5z00, BgL_bgl_string5308za700za7za7_5446za7, "positive", 8 );
DEFINE_STRING( BGl_string5309z00zz__r4_numbers_6_5z00, BgL_bgl_string5309za700za7za7_5447za7, "negative", 8 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2ze3numberzd2envze3zz__r4_numbers_6_5z00, BgL_bgl__stringza7d2za7e3num5448z00, opt_generic_entry, BGl__stringzd2ze3numberz31zz__r4_numbers_6_5z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_numberzd2ze3stringzd2envze3zz__r4_numbers_6_5z00, BgL_bgl__numberza7d2za7e3str5449z00, opt_generic_entry, BGl__numberzd2ze3stringz31zz__r4_numbers_6_5z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_abszd2envzd2zz__r4_numbers_6_5z00, BgL_bgl_za762absza762za7za7__r4_5450z00, BGl_z62absz62zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_elongzd2ze3flonumzd2envze3zz__r4_numbers_6_5z00, BgL_bgl_za762elongza7d2za7e3fl5451za7, BGl_z62elongzd2ze3flonumz53zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_exptzd2envzd2zz__r4_numbers_6_5z00, BgL_bgl_za762exptza762za7za7__r45452z00, BGl_z62exptz62zz__r4_numbers_6_5z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_llongzd2ze3flonumzd2envze3zz__r4_numbers_6_5z00, BgL_bgl_za762llongza7d2za7e3fl5453za7, BGl_z62llongzd2ze3flonumz53zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string5310z00zz__r4_numbers_6_5z00, BgL_bgl_string5310za700za7za7_5454za7, "2max", 4 );
DEFINE_STRING( BGl_string5311z00zz__r4_numbers_6_5z00, BgL_bgl_string5311za700za7za7_5455za7, "2min", 4 );
DEFINE_STRING( BGl_string5312z00zz__r4_numbers_6_5z00, BgL_bgl_string5312za700za7za7_5456za7, "2+", 2 );
DEFINE_STRING( BGl_string5313z00zz__r4_numbers_6_5z00, BgL_bgl_string5313za700za7za7_5457za7, "+", 1 );
DEFINE_STRING( BGl_string5314z00zz__r4_numbers_6_5z00, BgL_bgl_string5314za700za7za7_5458za7, "2*", 2 );
DEFINE_STRING( BGl_string5315z00zz__r4_numbers_6_5z00, BgL_bgl_string5315za700za7za7_5459za7, "*", 1 );
DEFINE_STRING( BGl_string5316z00zz__r4_numbers_6_5z00, BgL_bgl_string5316za700za7za7_5460za7, "2-", 2 );
DEFINE_STRING( BGl_string5317z00zz__r4_numbers_6_5z00, BgL_bgl_string5317za700za7za7_5461za7, "-", 1 );
DEFINE_STRING( BGl_string5318z00zz__r4_numbers_6_5z00, BgL_bgl_string5318za700za7za7_5462za7, "2/", 2 );
DEFINE_STRING( BGl_string5319z00zz__r4_numbers_6_5z00, BgL_bgl_string5319za700za7za7_5463za7, "/", 1 );
DEFINE_REAL( BGl_real5335z00zz__r4_numbers_6_5z00, BgL_bgl_real5335za700za7za7__r5464za7, 0.0 );
DEFINE_REAL( BGl_real5338z00zz__r4_numbers_6_5z00, BgL_bgl_real5338za700za7za7__r5465za7, 1.0 );
DEFINE_STRING( BGl_string5320z00zz__r4_numbers_6_5z00, BgL_bgl_string5320za700za7za7_5466za7, "abs", 3 );
DEFINE_STRING( BGl_string5321z00zz__r4_numbers_6_5z00, BgL_bgl_string5321za700za7za7_5467za7, "floor", 5 );
DEFINE_STRING( BGl_string5322z00zz__r4_numbers_6_5z00, BgL_bgl_string5322za700za7za7_5468za7, "ceiling", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_inexactzf3zd2envz21zz__r4_numbers_6_5z00, BgL_bgl_za762inexactza7f3za7915469za7, BGl_z62inexactzf3z91zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string5323z00zz__r4_numbers_6_5z00, BgL_bgl_string5323za700za7za7_5470za7, "truncate", 8 );
DEFINE_STRING( BGl_string5324z00zz__r4_numbers_6_5z00, BgL_bgl_string5324za700za7za7_5471za7, "round", 5 );
DEFINE_STRING( BGl_string5325z00zz__r4_numbers_6_5z00, BgL_bgl_string5325za700za7za7_5472za7, "exp", 3 );
DEFINE_STRING( BGl_string5326z00zz__r4_numbers_6_5z00, BgL_bgl_string5326za700za7za7_5473za7, "log", 3 );
DEFINE_STRING( BGl_string5327z00zz__r4_numbers_6_5z00, BgL_bgl_string5327za700za7za7_5474za7, "sin", 3 );
DEFINE_STRING( BGl_string5328z00zz__r4_numbers_6_5z00, BgL_bgl_string5328za700za7za7_5475za7, "cos", 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_flonumzd2ze3int32zd2envze3zz__r4_numbers_6_5z00, BgL_bgl_za762flonumza7d2za7e3i5476za7, BGl_z62flonumzd2ze3int32z53zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string5329z00zz__r4_numbers_6_5z00, BgL_bgl_string5329za700za7za7_5477za7, "tan", 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_exactzd2ze3inexactzd2envze3zz__r4_numbers_6_5z00, BgL_bgl_za762exactza7d2za7e3in5478za7, BGl_z62exactzd2ze3inexactz53zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_exactzf3zd2envz21zz__r4_numbers_6_5z00, BgL_bgl_za762exactza7f3za791za7za75479za7, BGl_z62exactzf3z91zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_positivezf3zd2envz21zz__r4_numbers_6_5z00, BgL_bgl_za762positiveza7f3za795480za7, BGl_z62positivezf3z91zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_zc3zd2envz11zz__r4_numbers_6_5z00, BgL_bgl_za762za7c3za7a1za7za7__r4_5481za7, va_generic_entry, BGl_z62zc3za1zz__r4_numbers_6_5z00, BUNSPEC, -3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_roundzd2envzd2zz__r4_numbers_6_5z00, BgL_bgl_za762roundza762za7za7__r5482z00, BGl_z62roundz62zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_sqrtzd2envzd2zz__r4_numbers_6_5z00, BgL_bgl_za762sqrtza762za7za7__r45483z00, BGl_z62sqrtz62zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_2zc3zd2envz11zz__r4_numbers_6_5z00, BgL_bgl_za7622za7c3za7a1za7za7__r45484za7, BGl_z622zc3za1zz__r4_numbers_6_5z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string5330z00zz__r4_numbers_6_5z00, BgL_bgl_string5330za700za7za7_5485za7, "asin", 4 );
DEFINE_STRING( BGl_string5331z00zz__r4_numbers_6_5z00, BgL_bgl_string5331za700za7za7_5486za7, "acos", 4 );
DEFINE_STRING( BGl_string5332z00zz__r4_numbers_6_5z00, BgL_bgl_string5332za700za7za7_5487za7, "atan", 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_uint64zd2ze3flonumzd2envze3zz__r4_numbers_6_5z00, BgL_bgl_za762uint64za7d2za7e3f5488za7, BGl_z62uint64zd2ze3flonumz53zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string5333z00zz__r4_numbers_6_5z00, BgL_bgl_string5333za700za7za7_5489za7, "atanfl", 6 );
DEFINE_STRING( BGl_string5334z00zz__r4_numbers_6_5z00, BgL_bgl_string5334za700za7za7_5490za7, "Domain error", 12 );
DEFINE_STRING( BGl_string5336z00zz__r4_numbers_6_5z00, BgL_bgl_string5336za700za7za7_5491za7, "sqrtfl", 6 );
DEFINE_STRING( BGl_string5337z00zz__r4_numbers_6_5z00, BgL_bgl_string5337za700za7za7_5492za7, "sqrt", 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_inexactzd2ze3exactzd2envze3zz__r4_numbers_6_5z00, BgL_bgl_za762inexactza7d2za7e35493za7, BGl_z62inexactzd2ze3exactz53zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string5339z00zz__r4_numbers_6_5z00, BgL_bgl_string5339za700za7za7_5494za7, "expt", 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ze3zd3zd2envze2zz__r4_numbers_6_5z00, BgL_bgl_za762za7e3za7d3za752za7za7__5495z00, va_generic_entry, BGl_z62ze3zd3z52zz__r4_numbers_6_5z00, BUNSPEC, -3 );
#define BGl_real5352z00zz__r4_numbers_6_5z00 bigloo_nan
#define BGl_real5354z00zz__r4_numbers_6_5z00 bigloo_infinity
#define BGl_real5356z00zz__r4_numbers_6_5z00 bigloo_minfinity
DEFINE_EXPORT_BGL_PROCEDURE( BGl_logzd2envzd2zz__r4_numbers_6_5z00, BgL_bgl_za762logza762za7za7__r4_5496z00, BGl_z62logz62zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_uint32zd2ze3flonumzd2envze3zz__r4_numbers_6_5z00, BgL_bgl_za762uint32za7d2za7e3f5497za7, BGl_z62uint32zd2ze3flonumz53zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_flonumzd2ze3uint32zd2envze3zz__r4_numbers_6_5z00, BgL_bgl_za762flonumza7d2za7e3u5498za7, BGl_z62flonumzd2ze3uint32z53zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string5341z00zz__r4_numbers_6_5z00, BgL_bgl_string5341za700za7za7_5499za7, "number->string", 14 );
DEFINE_STRING( BGl_string5342z00zz__r4_numbers_6_5z00, BgL_bgl_string5342za700za7za7_5500za7, "wrong number of arguments: [1..2] expected, provided", 52 );
DEFINE_STRING( BGl_string5343z00zz__r4_numbers_6_5z00, BgL_bgl_string5343za700za7za7_5501za7, "Argument not a number", 21 );
DEFINE_STRING( BGl_string5344z00zz__r4_numbers_6_5z00, BgL_bgl_string5344za700za7za7_5502za7, "bstring", 7 );
DEFINE_STRING( BGl_string5263z00zz__r4_numbers_6_5z00, BgL_bgl_string5263za700za7za7_5503za7, "/tmp/4.4a/runtime/Ieee/number.scm", 33 );
DEFINE_STRING( BGl_string5345z00zz__r4_numbers_6_5z00, BgL_bgl_string5345za700za7za7_5504za7, "Illegal radix", 13 );
DEFINE_STRING( BGl_string5264z00zz__r4_numbers_6_5z00, BgL_bgl_string5264za700za7za7_5505za7, "&flonum->fixnum", 15 );
DEFINE_STRING( BGl_string5265z00zz__r4_numbers_6_5z00, BgL_bgl_string5265za700za7za7_5506za7, "real", 4 );
DEFINE_STRING( BGl_string5347z00zz__r4_numbers_6_5z00, BgL_bgl_string5347za700za7za7_5507za7, "string->number", 14 );
DEFINE_STRING( BGl_string5266z00zz__r4_numbers_6_5z00, BgL_bgl_string5266za700za7za7_5508za7, "&fixnum->flonum", 15 );
DEFINE_STRING( BGl_string5348z00zz__r4_numbers_6_5z00, BgL_bgl_string5348za700za7za7_5509za7, "_string->number", 15 );
DEFINE_STRING( BGl_string5267z00zz__r4_numbers_6_5z00, BgL_bgl_string5267za700za7za7_5510za7, "bint", 4 );
DEFINE_STRING( BGl_string5349z00zz__r4_numbers_6_5z00, BgL_bgl_string5349za700za7za7_5511za7, "string-ref", 10 );
DEFINE_STRING( BGl_string5268z00zz__r4_numbers_6_5z00, BgL_bgl_string5268za700za7za7_5512za7, "&flonum->elong", 14 );
DEFINE_STRING( BGl_string5269z00zz__r4_numbers_6_5z00, BgL_bgl_string5269za700za7za7_5513za7, "&elong->flonum", 14 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_flonumzd2ze3elongzd2envze3zz__r4_numbers_6_5z00, BgL_bgl_za762flonumza7d2za7e3e5514za7, BGl_z62flonumzd2ze3elongz53zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );

/* GC roots registration */
static obj_t bgl_gc_roots_register() {
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
void *roots_min = (void*)ULONG_MAX, *roots_max = 0;
ADD_ROOT( (void *)(&BGl_requirezd2initializa7ationz75zz__r4_numbers_6_5z00) );
ADD_ROOT( (void *)(&BGl_symbol5340z00zz__r4_numbers_6_5z00) );
ADD_ROOT( (void *)(&BGl_symbol5346z00zz__r4_numbers_6_5z00) );
#undef ADD_ROOT
if( roots_max > 0 ) GC_add_roots( roots_min, ((void **)roots_max) + 1 );
#endif
return BUNSPEC;
}



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long BgL_checksumz00_7068, char * BgL_fromz00_7069)
{
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__r4_numbers_6_5z00))
{ 
BGl_requirezd2initializa7ationz75zz__r4_numbers_6_5z00 = 
BBOOL(((bool_t)0)); 
BGl_gczd2rootszd2initz00zz__r4_numbers_6_5z00(); 
BGl_cnstzd2initzd2zz__r4_numbers_6_5z00(); 
BGl_importedzd2moduleszd2initz00zz__r4_numbers_6_5z00(); 
return 
BGl_toplevelzd2initzd2zz__r4_numbers_6_5z00();}  else 
{ 
return BUNSPEC;} } 

}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__r4_numbers_6_5z00()
{
{ /* Ieee/number.scm 18 */
BGl_symbol5340z00zz__r4_numbers_6_5z00 = 
bstring_to_symbol(BGl_string5341z00zz__r4_numbers_6_5z00); 
return ( 
BGl_symbol5346z00zz__r4_numbers_6_5z00 = 
bstring_to_symbol(BGl_string5347z00zz__r4_numbers_6_5z00), BUNSPEC) ;} 

}



/* gc-roots-init */
obj_t BGl_gczd2rootszd2initz00zz__r4_numbers_6_5z00()
{
{ /* Ieee/number.scm 18 */
return 
bgl_gc_roots_register();} 

}



/* toplevel-init */
obj_t BGl_toplevelzd2initzd2zz__r4_numbers_6_5z00()
{
{ /* Ieee/number.scm 18 */
BGl_za2maxintflza2z00zz__r4_numbers_6_5z00 = 
(double)(BGL_LONG_MAX); 
return ( 
BGl_za2minintflza2z00zz__r4_numbers_6_5z00 = 
(double)(BGL_LONG_MIN), BUNSPEC) ;} 

}



/* number? */
BGL_EXPORTED_DEF bool_t BGl_numberzf3zf3zz__r4_numbers_6_5z00(obj_t BgL_objz00_3)
{
{ /* Ieee/number.scm 231 */
{ /* Ieee/number.scm 232 */
bool_t BgL__ortest_1012z00_847;
BgL__ortest_1012z00_847 = 
INTEGERP(BgL_objz00_3); 
if(BgL__ortest_1012z00_847)
{ /* Ieee/number.scm 232 */
return BgL__ortest_1012z00_847;}  else 
{ /* Ieee/number.scm 233 */
bool_t BgL__ortest_1013z00_848;
BgL__ortest_1013z00_848 = 
REALP(BgL_objz00_3); 
if(BgL__ortest_1013z00_848)
{ /* Ieee/number.scm 233 */
return BgL__ortest_1013z00_848;}  else 
{ /* Ieee/number.scm 234 */
bool_t BgL__ortest_1014z00_849;
BgL__ortest_1014z00_849 = 
ELONGP(BgL_objz00_3); 
if(BgL__ortest_1014z00_849)
{ /* Ieee/number.scm 234 */
return BgL__ortest_1014z00_849;}  else 
{ /* Ieee/number.scm 235 */
bool_t BgL__ortest_1015z00_850;
BgL__ortest_1015z00_850 = 
LLONGP(BgL_objz00_3); 
if(BgL__ortest_1015z00_850)
{ /* Ieee/number.scm 235 */
return BgL__ortest_1015z00_850;}  else 
{ /* Ieee/number.scm 236 */
bool_t BgL__ortest_1016z00_851;
BgL__ortest_1016z00_851 = 
BGL_INT8P(BgL_objz00_3); 
if(BgL__ortest_1016z00_851)
{ /* Ieee/number.scm 236 */
return BgL__ortest_1016z00_851;}  else 
{ /* Ieee/number.scm 237 */
bool_t BgL__ortest_1017z00_852;
BgL__ortest_1017z00_852 = 
BGL_UINT8P(BgL_objz00_3); 
if(BgL__ortest_1017z00_852)
{ /* Ieee/number.scm 237 */
return BgL__ortest_1017z00_852;}  else 
{ /* Ieee/number.scm 238 */
bool_t BgL__ortest_1018z00_853;
BgL__ortest_1018z00_853 = 
BGL_INT16P(BgL_objz00_3); 
if(BgL__ortest_1018z00_853)
{ /* Ieee/number.scm 238 */
return BgL__ortest_1018z00_853;}  else 
{ /* Ieee/number.scm 239 */
bool_t BgL__ortest_1019z00_854;
BgL__ortest_1019z00_854 = 
BGL_UINT16P(BgL_objz00_3); 
if(BgL__ortest_1019z00_854)
{ /* Ieee/number.scm 239 */
return BgL__ortest_1019z00_854;}  else 
{ /* Ieee/number.scm 240 */
bool_t BgL__ortest_1020z00_855;
BgL__ortest_1020z00_855 = 
BGL_INT32P(BgL_objz00_3); 
if(BgL__ortest_1020z00_855)
{ /* Ieee/number.scm 240 */
return BgL__ortest_1020z00_855;}  else 
{ /* Ieee/number.scm 241 */
bool_t BgL__ortest_1021z00_856;
BgL__ortest_1021z00_856 = 
BGL_UINT32P(BgL_objz00_3); 
if(BgL__ortest_1021z00_856)
{ /* Ieee/number.scm 241 */
return BgL__ortest_1021z00_856;}  else 
{ /* Ieee/number.scm 242 */
bool_t BgL__ortest_1022z00_857;
BgL__ortest_1022z00_857 = 
BGL_INT64P(BgL_objz00_3); 
if(BgL__ortest_1022z00_857)
{ /* Ieee/number.scm 242 */
return BgL__ortest_1022z00_857;}  else 
{ /* Ieee/number.scm 243 */
bool_t BgL__ortest_1023z00_858;
BgL__ortest_1023z00_858 = 
BGL_UINT64P(BgL_objz00_3); 
if(BgL__ortest_1023z00_858)
{ /* Ieee/number.scm 243 */
return BgL__ortest_1023z00_858;}  else 
{ /* Ieee/number.scm 243 */
return 
BIGNUMP(BgL_objz00_3);} } } } } } } } } } } } } } 

}



/* &number? */
obj_t BGl_z62numberzf3z91zz__r4_numbers_6_5z00(obj_t BgL_envz00_6442, obj_t BgL_objz00_6443)
{
{ /* Ieee/number.scm 231 */
return 
BBOOL(
BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_objz00_6443));} 

}



/* exact? */
BGL_EXPORTED_DEF bool_t BGl_exactzf3zf3zz__r4_numbers_6_5z00(obj_t BgL_za7za7_4)
{
{ /* Ieee/number.scm 249 */
{ /* Ieee/number.scm 250 */
bool_t BgL__ortest_1024z00_7057;
BgL__ortest_1024z00_7057 = 
INTEGERP(BgL_za7za7_4); 
if(BgL__ortest_1024z00_7057)
{ /* Ieee/number.scm 250 */
return BgL__ortest_1024z00_7057;}  else 
{ /* Ieee/number.scm 251 */
bool_t BgL__ortest_1025z00_7058;
BgL__ortest_1025z00_7058 = 
ELONGP(BgL_za7za7_4); 
if(BgL__ortest_1025z00_7058)
{ /* Ieee/number.scm 251 */
return BgL__ortest_1025z00_7058;}  else 
{ /* Ieee/number.scm 252 */
bool_t BgL__ortest_1026z00_7059;
BgL__ortest_1026z00_7059 = 
LLONGP(BgL_za7za7_4); 
if(BgL__ortest_1026z00_7059)
{ /* Ieee/number.scm 252 */
return BgL__ortest_1026z00_7059;}  else 
{ /* Ieee/number.scm 253 */
bool_t BgL__ortest_1027z00_7060;
BgL__ortest_1027z00_7060 = 
BGL_INT8P(BgL_za7za7_4); 
if(BgL__ortest_1027z00_7060)
{ /* Ieee/number.scm 253 */
return BgL__ortest_1027z00_7060;}  else 
{ /* Ieee/number.scm 254 */
bool_t BgL__ortest_1028z00_7061;
BgL__ortest_1028z00_7061 = 
BGL_UINT8P(BgL_za7za7_4); 
if(BgL__ortest_1028z00_7061)
{ /* Ieee/number.scm 254 */
return BgL__ortest_1028z00_7061;}  else 
{ /* Ieee/number.scm 255 */
bool_t BgL__ortest_1029z00_7062;
BgL__ortest_1029z00_7062 = 
BGL_INT16P(BgL_za7za7_4); 
if(BgL__ortest_1029z00_7062)
{ /* Ieee/number.scm 255 */
return BgL__ortest_1029z00_7062;}  else 
{ /* Ieee/number.scm 256 */
bool_t BgL__ortest_1030z00_7063;
BgL__ortest_1030z00_7063 = 
BGL_UINT16P(BgL_za7za7_4); 
if(BgL__ortest_1030z00_7063)
{ /* Ieee/number.scm 256 */
return BgL__ortest_1030z00_7063;}  else 
{ /* Ieee/number.scm 257 */
bool_t BgL__ortest_1031z00_7064;
BgL__ortest_1031z00_7064 = 
BGL_INT32P(BgL_za7za7_4); 
if(BgL__ortest_1031z00_7064)
{ /* Ieee/number.scm 257 */
return BgL__ortest_1031z00_7064;}  else 
{ /* Ieee/number.scm 258 */
bool_t BgL__ortest_1032z00_7065;
BgL__ortest_1032z00_7065 = 
BGL_UINT32P(BgL_za7za7_4); 
if(BgL__ortest_1032z00_7065)
{ /* Ieee/number.scm 258 */
return BgL__ortest_1032z00_7065;}  else 
{ /* Ieee/number.scm 259 */
bool_t BgL__ortest_1033z00_7066;
BgL__ortest_1033z00_7066 = 
BGL_INT64P(BgL_za7za7_4); 
if(BgL__ortest_1033z00_7066)
{ /* Ieee/number.scm 259 */
return BgL__ortest_1033z00_7066;}  else 
{ /* Ieee/number.scm 260 */
bool_t BgL__ortest_1034z00_7067;
BgL__ortest_1034z00_7067 = 
BGL_UINT64P(BgL_za7za7_4); 
if(BgL__ortest_1034z00_7067)
{ /* Ieee/number.scm 260 */
return BgL__ortest_1034z00_7067;}  else 
{ /* Ieee/number.scm 260 */
return 
BIGNUMP(BgL_za7za7_4);} } } } } } } } } } } } } 

}



/* &exact? */
obj_t BGl_z62exactzf3z91zz__r4_numbers_6_5z00(obj_t BgL_envz00_6444, obj_t BgL_za7za7_6445)
{
{ /* Ieee/number.scm 249 */
return 
BBOOL(
BGl_exactzf3zf3zz__r4_numbers_6_5z00(BgL_za7za7_6445));} 

}



/* inexact? */
BGL_EXPORTED_DEF bool_t BGl_inexactzf3zf3zz__r4_numbers_6_5z00(obj_t BgL_za7za7_5)
{
{ /* Ieee/number.scm 266 */
return 
REALP(BgL_za7za7_5);} 

}



/* &inexact? */
obj_t BGl_z62inexactzf3z91zz__r4_numbers_6_5z00(obj_t BgL_envz00_6446, obj_t BgL_za7za7_6447)
{
{ /* Ieee/number.scm 266 */
return 
BBOOL(
BGl_inexactzf3zf3zz__r4_numbers_6_5z00(BgL_za7za7_6447));} 

}



/* complex? */
BGL_EXPORTED_DEF bool_t BGl_complexzf3zf3zz__r4_numbers_6_5z00(obj_t BgL_xz00_6)
{
{ /* Ieee/number.scm 272 */
return 
BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_xz00_6);} 

}



/* &complex? */
obj_t BGl_z62complexzf3z91zz__r4_numbers_6_5z00(obj_t BgL_envz00_6448, obj_t BgL_xz00_6449)
{
{ /* Ieee/number.scm 272 */
return 
BBOOL(
BGl_complexzf3zf3zz__r4_numbers_6_5z00(BgL_xz00_6449));} 

}



/* rational? */
BGL_EXPORTED_DEF bool_t BGl_rationalzf3zf3zz__r4_numbers_6_5z00(obj_t BgL_xz00_7)
{
{ /* Ieee/number.scm 278 */
if(
INTEGERP(BgL_xz00_7))
{ /* Ieee/number.scm 279 */
return ((bool_t)1);}  else 
{ /* Ieee/number.scm 279 */
return 
REALP(BgL_xz00_7);} } 

}



/* &rational? */
obj_t BGl_z62rationalzf3z91zz__r4_numbers_6_5z00(obj_t BgL_envz00_6450, obj_t BgL_xz00_6451)
{
{ /* Ieee/number.scm 278 */
return 
BBOOL(
BGl_rationalzf3zf3zz__r4_numbers_6_5z00(BgL_xz00_6451));} 

}



/* flonum->fixnum */
BGL_EXPORTED_DEF long BGl_flonumzd2ze3fixnumz31zz__r4_numbers_6_5z00(double BgL_xz00_8)
{
{ /* Ieee/number.scm 284 */
return 
(long)(BgL_xz00_8);} 

}



/* &flonum->fixnum */
obj_t BGl_z62flonumzd2ze3fixnumz53zz__r4_numbers_6_5z00(obj_t BgL_envz00_6452, obj_t BgL_xz00_6453)
{
{ /* Ieee/number.scm 284 */
{ /* Ieee/number.scm 284 */
long BgL_tmpz00_7146;
{ /* Ieee/number.scm 284 */
double BgL_auxz00_7147;
{ /* Ieee/number.scm 284 */
obj_t BgL_tmpz00_7148;
if(
REALP(BgL_xz00_6453))
{ /* Ieee/number.scm 284 */
BgL_tmpz00_7148 = BgL_xz00_6453
; }  else 
{ 
obj_t BgL_auxz00_7151;
BgL_auxz00_7151 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)10964)), BGl_string5264z00zz__r4_numbers_6_5z00, BGl_string5265z00zz__r4_numbers_6_5z00, BgL_xz00_6453); 
FAILURE(BgL_auxz00_7151,BFALSE,BFALSE);} 
BgL_auxz00_7147 = 
REAL_TO_DOUBLE(BgL_tmpz00_7148); } 
BgL_tmpz00_7146 = 
BGl_flonumzd2ze3fixnumz31zz__r4_numbers_6_5z00(BgL_auxz00_7147); } 
return 
BINT(BgL_tmpz00_7146);} } 

}



/* fixnum->flonum */
BGL_EXPORTED_DEF double BGl_fixnumzd2ze3flonumz31zz__r4_numbers_6_5z00(long BgL_xz00_9)
{
{ /* Ieee/number.scm 285 */
return 
(double)(BgL_xz00_9);} 

}



/* &fixnum->flonum */
obj_t BGl_z62fixnumzd2ze3flonumz53zz__r4_numbers_6_5z00(obj_t BgL_envz00_6454, obj_t BgL_xz00_6455)
{
{ /* Ieee/number.scm 285 */
{ /* Ieee/number.scm 285 */
double BgL_tmpz00_7159;
{ /* Ieee/number.scm 285 */
long BgL_auxz00_7160;
{ /* Ieee/number.scm 285 */
obj_t BgL_tmpz00_7161;
if(
INTEGERP(BgL_xz00_6455))
{ /* Ieee/number.scm 285 */
BgL_tmpz00_7161 = BgL_xz00_6455
; }  else 
{ 
obj_t BgL_auxz00_7164;
BgL_auxz00_7164 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)11019)), BGl_string5266z00zz__r4_numbers_6_5z00, BGl_string5267z00zz__r4_numbers_6_5z00, BgL_xz00_6455); 
FAILURE(BgL_auxz00_7164,BFALSE,BFALSE);} 
BgL_auxz00_7160 = 
(long)CINT(BgL_tmpz00_7161); } 
BgL_tmpz00_7159 = 
BGl_fixnumzd2ze3flonumz31zz__r4_numbers_6_5z00(BgL_auxz00_7160); } 
return 
DOUBLE_TO_REAL(BgL_tmpz00_7159);} } 

}



/* flonum->elong */
BGL_EXPORTED_DEF long BGl_flonumzd2ze3elongz31zz__r4_numbers_6_5z00(double BgL_xz00_10)
{
{ /* Ieee/number.scm 290 */
{ /* Ieee/number.scm 290 */
long BgL_tmpz00_7171;
BgL_tmpz00_7171 = 
(long)(BgL_xz00_10); 
return 
(long)(BgL_tmpz00_7171);} } 

}



/* &flonum->elong */
obj_t BGl_z62flonumzd2ze3elongz53zz__r4_numbers_6_5z00(obj_t BgL_envz00_6456, obj_t BgL_xz00_6457)
{
{ /* Ieee/number.scm 290 */
{ /* Ieee/number.scm 290 */
long BgL_tmpz00_7174;
{ /* Ieee/number.scm 290 */
double BgL_auxz00_7175;
{ /* Ieee/number.scm 290 */
obj_t BgL_tmpz00_7176;
if(
REALP(BgL_xz00_6457))
{ /* Ieee/number.scm 290 */
BgL_tmpz00_7176 = BgL_xz00_6457
; }  else 
{ 
obj_t BgL_auxz00_7179;
BgL_auxz00_7179 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)11305)), BGl_string5268z00zz__r4_numbers_6_5z00, BGl_string5265z00zz__r4_numbers_6_5z00, BgL_xz00_6457); 
FAILURE(BgL_auxz00_7179,BFALSE,BFALSE);} 
BgL_auxz00_7175 = 
REAL_TO_DOUBLE(BgL_tmpz00_7176); } 
BgL_tmpz00_7174 = 
BGl_flonumzd2ze3elongz31zz__r4_numbers_6_5z00(BgL_auxz00_7175); } 
return 
make_belong(BgL_tmpz00_7174);} } 

}



/* elong->flonum */
BGL_EXPORTED_DEF double BGl_elongzd2ze3flonumz31zz__r4_numbers_6_5z00(long BgL_xz00_11)
{
{ /* Ieee/number.scm 291 */
return 
(double)(BgL_xz00_11);} 

}



/* &elong->flonum */
obj_t BGl_z62elongzd2ze3flonumz53zz__r4_numbers_6_5z00(obj_t BgL_envz00_6458, obj_t BgL_xz00_6459)
{
{ /* Ieee/number.scm 291 */
{ /* Ieee/number.scm 291 */
double BgL_tmpz00_7187;
{ /* Ieee/number.scm 291 */
long BgL_auxz00_7188;
{ /* Ieee/number.scm 291 */
obj_t BgL_tmpz00_7189;
if(
ELONGP(BgL_xz00_6459))
{ /* Ieee/number.scm 291 */
BgL_tmpz00_7189 = BgL_xz00_6459
; }  else 
{ 
obj_t BgL_auxz00_7192;
BgL_auxz00_7192 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)11358)), BGl_string5269z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_xz00_6459); 
FAILURE(BgL_auxz00_7192,BFALSE,BFALSE);} 
BgL_auxz00_7188 = 
BELONG_TO_LONG(BgL_tmpz00_7189); } 
BgL_tmpz00_7187 = 
BGl_elongzd2ze3flonumz31zz__r4_numbers_6_5z00(BgL_auxz00_7188); } 
return 
DOUBLE_TO_REAL(BgL_tmpz00_7187);} } 

}



/* flonum->llong */
BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_flonumzd2ze3llongz31zz__r4_numbers_6_5z00(double BgL_xz00_12)
{
{ /* Ieee/number.scm 296 */
return 
(BGL_LONGLONG_T)(BgL_xz00_12);} 

}



/* &flonum->llong */
obj_t BGl_z62flonumzd2ze3llongz53zz__r4_numbers_6_5z00(obj_t BgL_envz00_6460, obj_t BgL_xz00_6461)
{
{ /* Ieee/number.scm 296 */
{ /* Ieee/number.scm 296 */
BGL_LONGLONG_T BgL_tmpz00_7200;
{ /* Ieee/number.scm 296 */
double BgL_auxz00_7201;
{ /* Ieee/number.scm 296 */
obj_t BgL_tmpz00_7202;
if(
REALP(BgL_xz00_6461))
{ /* Ieee/number.scm 296 */
BgL_tmpz00_7202 = BgL_xz00_6461
; }  else 
{ 
obj_t BgL_auxz00_7205;
BgL_auxz00_7205 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)11643)), BGl_string5271z00zz__r4_numbers_6_5z00, BGl_string5265z00zz__r4_numbers_6_5z00, BgL_xz00_6461); 
FAILURE(BgL_auxz00_7205,BFALSE,BFALSE);} 
BgL_auxz00_7201 = 
REAL_TO_DOUBLE(BgL_tmpz00_7202); } 
BgL_tmpz00_7200 = 
BGl_flonumzd2ze3llongz31zz__r4_numbers_6_5z00(BgL_auxz00_7201); } 
return 
make_bllong(BgL_tmpz00_7200);} } 

}



/* llong->flonum */
BGL_EXPORTED_DEF double BGl_llongzd2ze3flonumz31zz__r4_numbers_6_5z00(BGL_LONGLONG_T BgL_xz00_13)
{
{ /* Ieee/number.scm 297 */
return 
(double)(BgL_xz00_13);} 

}



/* &llong->flonum */
obj_t BGl_z62llongzd2ze3flonumz53zz__r4_numbers_6_5z00(obj_t BgL_envz00_6462, obj_t BgL_xz00_6463)
{
{ /* Ieee/number.scm 297 */
{ /* Ieee/number.scm 297 */
double BgL_tmpz00_7213;
{ /* Ieee/number.scm 297 */
BGL_LONGLONG_T BgL_auxz00_7214;
{ /* Ieee/number.scm 297 */
obj_t BgL_tmpz00_7215;
if(
LLONGP(BgL_xz00_6463))
{ /* Ieee/number.scm 297 */
BgL_tmpz00_7215 = BgL_xz00_6463
; }  else 
{ 
obj_t BgL_auxz00_7218;
BgL_auxz00_7218 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)11696)), BGl_string5272z00zz__r4_numbers_6_5z00, BGl_string5273z00zz__r4_numbers_6_5z00, BgL_xz00_6463); 
FAILURE(BgL_auxz00_7218,BFALSE,BFALSE);} 
BgL_auxz00_7214 = 
BLLONG_TO_LLONG(BgL_tmpz00_7215); } 
BgL_tmpz00_7213 = 
BGl_llongzd2ze3flonumz31zz__r4_numbers_6_5z00(BgL_auxz00_7214); } 
return 
DOUBLE_TO_REAL(BgL_tmpz00_7213);} } 

}



/* flonum->bignum */
BGL_EXPORTED_DEF obj_t BGl_flonumzd2ze3bignumz31zz__r4_numbers_6_5z00(double BgL_xz00_14)
{
{ /* Ieee/number.scm 302 */
return 
bgl_flonum_to_bignum(BgL_xz00_14);} 

}



/* &flonum->bignum */
obj_t BGl_z62flonumzd2ze3bignumz53zz__r4_numbers_6_5z00(obj_t BgL_envz00_6464, obj_t BgL_xz00_6465)
{
{ /* Ieee/number.scm 302 */
{ /* Ieee/number.scm 302 */
double BgL_auxz00_7226;
{ /* Ieee/number.scm 302 */
obj_t BgL_tmpz00_7227;
if(
REALP(BgL_xz00_6465))
{ /* Ieee/number.scm 302 */
BgL_tmpz00_7227 = BgL_xz00_6465
; }  else 
{ 
obj_t BgL_auxz00_7230;
BgL_auxz00_7230 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)11982)), BGl_string5274z00zz__r4_numbers_6_5z00, BGl_string5265z00zz__r4_numbers_6_5z00, BgL_xz00_6465); 
FAILURE(BgL_auxz00_7230,BFALSE,BFALSE);} 
BgL_auxz00_7226 = 
REAL_TO_DOUBLE(BgL_tmpz00_7227); } 
return 
BGl_flonumzd2ze3bignumz31zz__r4_numbers_6_5z00(BgL_auxz00_7226);} } 

}



/* bignum->flonum */
BGL_EXPORTED_DEF double BGl_bignumzd2ze3flonumz31zz__r4_numbers_6_5z00(obj_t BgL_xz00_15)
{
{ /* Ieee/number.scm 303 */
return 
bgl_bignum_to_flonum(BgL_xz00_15);} 

}



/* &bignum->flonum */
obj_t BGl_z62bignumzd2ze3flonumz53zz__r4_numbers_6_5z00(obj_t BgL_envz00_6466, obj_t BgL_xz00_6467)
{
{ /* Ieee/number.scm 303 */
{ /* Ieee/number.scm 303 */
double BgL_tmpz00_7237;
{ /* Ieee/number.scm 303 */
obj_t BgL_auxz00_7238;
if(
BIGNUMP(BgL_xz00_6467))
{ /* Ieee/number.scm 303 */
BgL_auxz00_7238 = BgL_xz00_6467
; }  else 
{ 
obj_t BgL_auxz00_7241;
BgL_auxz00_7241 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)12037)), BGl_string5275z00zz__r4_numbers_6_5z00, BGl_string5276z00zz__r4_numbers_6_5z00, BgL_xz00_6467); 
FAILURE(BgL_auxz00_7241,BFALSE,BFALSE);} 
BgL_tmpz00_7237 = 
BGl_bignumzd2ze3flonumz31zz__r4_numbers_6_5z00(BgL_auxz00_7238); } 
return 
DOUBLE_TO_REAL(BgL_tmpz00_7237);} } 

}



/* flonum->int32 */
BGL_EXPORTED_DEF int32_t BGl_flonumzd2ze3int32z31zz__r4_numbers_6_5z00(double BgL_xz00_16)
{
{ /* Ieee/number.scm 308 */
return 
(int32_t)(BgL_xz00_16);} 

}



/* &flonum->int32 */
obj_t BGl_z62flonumzd2ze3int32z53zz__r4_numbers_6_5z00(obj_t BgL_envz00_6468, obj_t BgL_xz00_6469)
{
{ /* Ieee/number.scm 308 */
{ /* Ieee/number.scm 308 */
int32_t BgL_tmpz00_7248;
{ /* Ieee/number.scm 308 */
double BgL_auxz00_7249;
{ /* Ieee/number.scm 308 */
obj_t BgL_tmpz00_7250;
if(
REALP(BgL_xz00_6469))
{ /* Ieee/number.scm 308 */
BgL_tmpz00_7250 = BgL_xz00_6469
; }  else 
{ 
obj_t BgL_auxz00_7253;
BgL_auxz00_7253 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)12314)), BGl_string5277z00zz__r4_numbers_6_5z00, BGl_string5265z00zz__r4_numbers_6_5z00, BgL_xz00_6469); 
FAILURE(BgL_auxz00_7253,BFALSE,BFALSE);} 
BgL_auxz00_7249 = 
REAL_TO_DOUBLE(BgL_tmpz00_7250); } 
BgL_tmpz00_7248 = 
BGl_flonumzd2ze3int32z31zz__r4_numbers_6_5z00(BgL_auxz00_7249); } 
return 
BGL_INT32_TO_BINT32(BgL_tmpz00_7248);} } 

}



/* int32->flonum */
BGL_EXPORTED_DEF double BGl_int32zd2ze3flonumz31zz__r4_numbers_6_5z00(int32_t BgL_xz00_17)
{
{ /* Ieee/number.scm 309 */
return 
(double)(BgL_xz00_17);} 

}



/* &int32->flonum */
obj_t BGl_z62int32zd2ze3flonumz53zz__r4_numbers_6_5z00(obj_t BgL_envz00_6470, obj_t BgL_xz00_6471)
{
{ /* Ieee/number.scm 309 */
{ /* Ieee/number.scm 309 */
double BgL_tmpz00_7261;
{ /* Ieee/number.scm 309 */
int32_t BgL_auxz00_7262;
{ /* Ieee/number.scm 309 */
obj_t BgL_tmpz00_7263;
if(
BGL_INT32P(BgL_xz00_6471))
{ /* Ieee/number.scm 309 */
BgL_tmpz00_7263 = BgL_xz00_6471
; }  else 
{ 
obj_t BgL_auxz00_7266;
BgL_auxz00_7266 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)12367)), BGl_string5278z00zz__r4_numbers_6_5z00, BGl_string5279z00zz__r4_numbers_6_5z00, BgL_xz00_6471); 
FAILURE(BgL_auxz00_7266,BFALSE,BFALSE);} 
BgL_auxz00_7262 = 
BGL_BINT32_TO_INT32(BgL_tmpz00_7263); } 
BgL_tmpz00_7261 = 
BGl_int32zd2ze3flonumz31zz__r4_numbers_6_5z00(BgL_auxz00_7262); } 
return 
DOUBLE_TO_REAL(BgL_tmpz00_7261);} } 

}



/* flonum->uint32 */
BGL_EXPORTED_DEF uint32_t BGl_flonumzd2ze3uint32z31zz__r4_numbers_6_5z00(double BgL_xz00_18)
{
{ /* Ieee/number.scm 311 */
{ /* Ieee/number.scm 311 */
int32_t BgL_tmpz00_7273;
BgL_tmpz00_7273 = 
(uint32_t)(BgL_xz00_18); 
return 
(uint32_t)(BgL_tmpz00_7273);} } 

}



/* &flonum->uint32 */
obj_t BGl_z62flonumzd2ze3uint32z53zz__r4_numbers_6_5z00(obj_t BgL_envz00_6472, obj_t BgL_xz00_6473)
{
{ /* Ieee/number.scm 311 */
{ /* Ieee/number.scm 311 */
uint32_t BgL_tmpz00_7276;
{ /* Ieee/number.scm 311 */
double BgL_auxz00_7277;
{ /* Ieee/number.scm 311 */
obj_t BgL_tmpz00_7278;
if(
REALP(BgL_xz00_6473))
{ /* Ieee/number.scm 311 */
BgL_tmpz00_7278 = BgL_xz00_6473
; }  else 
{ 
obj_t BgL_auxz00_7281;
BgL_auxz00_7281 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)12422)), BGl_string5280z00zz__r4_numbers_6_5z00, BGl_string5265z00zz__r4_numbers_6_5z00, BgL_xz00_6473); 
FAILURE(BgL_auxz00_7281,BFALSE,BFALSE);} 
BgL_auxz00_7277 = 
REAL_TO_DOUBLE(BgL_tmpz00_7278); } 
BgL_tmpz00_7276 = 
BGl_flonumzd2ze3uint32z31zz__r4_numbers_6_5z00(BgL_auxz00_7277); } 
return 
BGL_UINT32_TO_BUINT32(BgL_tmpz00_7276);} } 

}



/* uint32->flonum */
BGL_EXPORTED_DEF double BGl_uint32zd2ze3flonumz31zz__r4_numbers_6_5z00(uint32_t BgL_xz00_19)
{
{ /* Ieee/number.scm 312 */
return 
(double)(BgL_xz00_19);} 

}



/* &uint32->flonum */
obj_t BGl_z62uint32zd2ze3flonumz53zz__r4_numbers_6_5z00(obj_t BgL_envz00_6474, obj_t BgL_xz00_6475)
{
{ /* Ieee/number.scm 312 */
{ /* Ieee/number.scm 312 */
double BgL_tmpz00_7289;
{ /* Ieee/number.scm 312 */
uint32_t BgL_auxz00_7290;
{ /* Ieee/number.scm 312 */
obj_t BgL_tmpz00_7291;
if(
BGL_UINT32P(BgL_xz00_6475))
{ /* Ieee/number.scm 312 */
BgL_tmpz00_7291 = BgL_xz00_6475
; }  else 
{ 
obj_t BgL_auxz00_7294;
BgL_auxz00_7294 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)12477)), BGl_string5281z00zz__r4_numbers_6_5z00, BGl_string5282z00zz__r4_numbers_6_5z00, BgL_xz00_6475); 
FAILURE(BgL_auxz00_7294,BFALSE,BFALSE);} 
BgL_auxz00_7290 = 
BGL_BUINT32_TO_UINT32(BgL_tmpz00_7291); } 
BgL_tmpz00_7289 = 
BGl_uint32zd2ze3flonumz31zz__r4_numbers_6_5z00(BgL_auxz00_7290); } 
return 
DOUBLE_TO_REAL(BgL_tmpz00_7289);} } 

}



/* flonum->int64 */
BGL_EXPORTED_DEF int64_t BGl_flonumzd2ze3int64z31zz__r4_numbers_6_5z00(double BgL_xz00_20)
{
{ /* Ieee/number.scm 317 */
return 
(int64_t)(BgL_xz00_20);} 

}



/* &flonum->int64 */
obj_t BGl_z62flonumzd2ze3int64z53zz__r4_numbers_6_5z00(obj_t BgL_envz00_6476, obj_t BgL_xz00_6477)
{
{ /* Ieee/number.scm 317 */
{ /* Ieee/number.scm 317 */
int64_t BgL_tmpz00_7302;
{ /* Ieee/number.scm 317 */
double BgL_auxz00_7303;
{ /* Ieee/number.scm 317 */
obj_t BgL_tmpz00_7304;
if(
REALP(BgL_xz00_6477))
{ /* Ieee/number.scm 317 */
BgL_tmpz00_7304 = BgL_xz00_6477
; }  else 
{ 
obj_t BgL_auxz00_7307;
BgL_auxz00_7307 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)12754)), BGl_string5283z00zz__r4_numbers_6_5z00, BGl_string5265z00zz__r4_numbers_6_5z00, BgL_xz00_6477); 
FAILURE(BgL_auxz00_7307,BFALSE,BFALSE);} 
BgL_auxz00_7303 = 
REAL_TO_DOUBLE(BgL_tmpz00_7304); } 
BgL_tmpz00_7302 = 
BGl_flonumzd2ze3int64z31zz__r4_numbers_6_5z00(BgL_auxz00_7303); } 
return 
BGL_INT64_TO_BINT64(BgL_tmpz00_7302);} } 

}



/* int64->flonum */
BGL_EXPORTED_DEF double BGl_int64zd2ze3flonumz31zz__r4_numbers_6_5z00(int64_t BgL_xz00_21)
{
{ /* Ieee/number.scm 318 */
return 
(double)(BgL_xz00_21);} 

}



/* &int64->flonum */
obj_t BGl_z62int64zd2ze3flonumz53zz__r4_numbers_6_5z00(obj_t BgL_envz00_6478, obj_t BgL_xz00_6479)
{
{ /* Ieee/number.scm 318 */
{ /* Ieee/number.scm 318 */
double BgL_tmpz00_7315;
{ /* Ieee/number.scm 318 */
int64_t BgL_auxz00_7316;
{ /* Ieee/number.scm 318 */
obj_t BgL_tmpz00_7317;
if(
BGL_INT64P(BgL_xz00_6479))
{ /* Ieee/number.scm 318 */
BgL_tmpz00_7317 = BgL_xz00_6479
; }  else 
{ 
obj_t BgL_auxz00_7320;
BgL_auxz00_7320 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)12807)), BGl_string5284z00zz__r4_numbers_6_5z00, BGl_string5285z00zz__r4_numbers_6_5z00, BgL_xz00_6479); 
FAILURE(BgL_auxz00_7320,BFALSE,BFALSE);} 
BgL_auxz00_7316 = 
BGL_BINT64_TO_INT64(BgL_tmpz00_7317); } 
BgL_tmpz00_7315 = 
BGl_int64zd2ze3flonumz31zz__r4_numbers_6_5z00(BgL_auxz00_7316); } 
return 
DOUBLE_TO_REAL(BgL_tmpz00_7315);} } 

}



/* flonum->uint64 */
BGL_EXPORTED_DEF uint64_t BGl_flonumzd2ze3uint64z31zz__r4_numbers_6_5z00(double BgL_xz00_22)
{
{ /* Ieee/number.scm 320 */
return 
(uint64_t)(BgL_xz00_22);} 

}



/* &flonum->uint64 */
obj_t BGl_z62flonumzd2ze3uint64z53zz__r4_numbers_6_5z00(obj_t BgL_envz00_6480, obj_t BgL_xz00_6481)
{
{ /* Ieee/number.scm 320 */
{ /* Ieee/number.scm 320 */
uint64_t BgL_tmpz00_7328;
{ /* Ieee/number.scm 320 */
double BgL_auxz00_7329;
{ /* Ieee/number.scm 320 */
obj_t BgL_tmpz00_7330;
if(
REALP(BgL_xz00_6481))
{ /* Ieee/number.scm 320 */
BgL_tmpz00_7330 = BgL_xz00_6481
; }  else 
{ 
obj_t BgL_auxz00_7333;
BgL_auxz00_7333 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)12862)), BGl_string5286z00zz__r4_numbers_6_5z00, BGl_string5265z00zz__r4_numbers_6_5z00, BgL_xz00_6481); 
FAILURE(BgL_auxz00_7333,BFALSE,BFALSE);} 
BgL_auxz00_7329 = 
REAL_TO_DOUBLE(BgL_tmpz00_7330); } 
BgL_tmpz00_7328 = 
BGl_flonumzd2ze3uint64z31zz__r4_numbers_6_5z00(BgL_auxz00_7329); } 
return 
BGL_UINT64_TO_BUINT64(BgL_tmpz00_7328);} } 

}



/* uint64->flonum */
BGL_EXPORTED_DEF double BGl_uint64zd2ze3flonumz31zz__r4_numbers_6_5z00(uint64_t BgL_xz00_23)
{
{ /* Ieee/number.scm 321 */
return 
(double)(BgL_xz00_23);} 

}



/* &uint64->flonum */
obj_t BGl_z62uint64zd2ze3flonumz53zz__r4_numbers_6_5z00(obj_t BgL_envz00_6482, obj_t BgL_xz00_6483)
{
{ /* Ieee/number.scm 321 */
{ /* Ieee/number.scm 321 */
double BgL_tmpz00_7341;
{ /* Ieee/number.scm 321 */
uint64_t BgL_auxz00_7342;
{ /* Ieee/number.scm 321 */
obj_t BgL_tmpz00_7343;
if(
BGL_UINT64P(BgL_xz00_6483))
{ /* Ieee/number.scm 321 */
BgL_tmpz00_7343 = BgL_xz00_6483
; }  else 
{ 
obj_t BgL_auxz00_7346;
BgL_auxz00_7346 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)12917)), BGl_string5287z00zz__r4_numbers_6_5z00, BGl_string5288z00zz__r4_numbers_6_5z00, BgL_xz00_6483); 
FAILURE(BgL_auxz00_7346,BFALSE,BFALSE);} 
BgL_auxz00_7342 = 
BGL_BINT64_TO_INT64(BgL_tmpz00_7343); } 
BgL_tmpz00_7341 = 
BGl_uint64zd2ze3flonumz31zz__r4_numbers_6_5z00(BgL_auxz00_7342); } 
return 
DOUBLE_TO_REAL(BgL_tmpz00_7341);} } 

}



/* $subelong->elong */
obj_t BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(obj_t BgL_xz00_24)
{
{ /* Ieee/number.scm 326 */
if(
ELONGP(BgL_xz00_24))
{ /* Ieee/number.scm 330 */
return BgL_xz00_24;}  else 
{ /* Ieee/number.scm 330 */
if(
BGL_INT8P(BgL_xz00_24))
{ /* Ieee/number.scm 331 */
long BgL_arg1117z00_872;
{ /* Ieee/number.scm 331 */
long BgL_res3222z00_2814;
{ /* Ieee/number.scm 331 */
int8_t BgL_xz00_2810;
BgL_xz00_2810 = 
BGL_BINT8_TO_INT8(BgL_xz00_24); 
{ /* Ieee/number.scm 331 */
long BgL_arg3189z00_2811;
BgL_arg3189z00_2811 = 
(long)(BgL_xz00_2810); 
{ /* Ieee/number.scm 331 */
long BgL_res3221z00_2813;
BgL_res3221z00_2813 = 
(long)(BgL_arg3189z00_2811); 
BgL_res3222z00_2814 = BgL_res3221z00_2813; } } } 
BgL_arg1117z00_872 = BgL_res3222z00_2814; } 
{ /* Ieee/number.scm 331 */
long BgL_res3223z00_2816;
BgL_res3223z00_2816 = 
(long)(BgL_arg1117z00_872); 
return 
make_belong(BgL_res3223z00_2816);} }  else 
{ /* Ieee/number.scm 331 */
if(
BGL_UINT8P(BgL_xz00_24))
{ /* Ieee/number.scm 332 */
long BgL_arg1121z00_874;
{ /* Ieee/number.scm 332 */
long BgL_res3226z00_2822;
{ /* Ieee/number.scm 332 */
uint8_t BgL_xz00_2818;
BgL_xz00_2818 = 
BGL_BUINT8_TO_UINT8(BgL_xz00_24); 
{ /* Ieee/number.scm 332 */
long BgL_arg3188z00_2819;
BgL_arg3188z00_2819 = 
(long)(BgL_xz00_2818); 
{ /* Ieee/number.scm 332 */
long BgL_res3225z00_2821;
BgL_res3225z00_2821 = 
(long)(BgL_arg3188z00_2819); 
BgL_res3226z00_2822 = BgL_res3225z00_2821; } } } 
BgL_arg1121z00_874 = BgL_res3226z00_2822; } 
{ /* Ieee/number.scm 332 */
long BgL_res3227z00_2824;
BgL_res3227z00_2824 = 
(long)(BgL_arg1121z00_874); 
return 
make_belong(BgL_res3227z00_2824);} }  else 
{ /* Ieee/number.scm 332 */
if(
BGL_INT16P(BgL_xz00_24))
{ /* Ieee/number.scm 333 */
long BgL_arg1123z00_876;
{ /* Ieee/number.scm 333 */
long BgL_res3230z00_2830;
{ /* Ieee/number.scm 333 */
int16_t BgL_xz00_2826;
BgL_xz00_2826 = 
BGL_BINT16_TO_INT16(BgL_xz00_24); 
{ /* Ieee/number.scm 333 */
long BgL_arg3186z00_2827;
BgL_arg3186z00_2827 = 
(long)(BgL_xz00_2826); 
{ /* Ieee/number.scm 333 */
long BgL_res3229z00_2829;
BgL_res3229z00_2829 = 
(long)(BgL_arg3186z00_2827); 
BgL_res3230z00_2830 = BgL_res3229z00_2829; } } } 
BgL_arg1123z00_876 = BgL_res3230z00_2830; } 
{ /* Ieee/number.scm 333 */
long BgL_res3231z00_2832;
BgL_res3231z00_2832 = 
(long)(BgL_arg1123z00_876); 
return 
make_belong(BgL_res3231z00_2832);} }  else 
{ /* Ieee/number.scm 333 */
if(
BGL_UINT16P(BgL_xz00_24))
{ /* Ieee/number.scm 334 */
long BgL_arg1125z00_878;
{ /* Ieee/number.scm 334 */
long BgL_res3234z00_2838;
{ /* Ieee/number.scm 334 */
uint16_t BgL_xz00_2834;
BgL_xz00_2834 = 
BGL_BUINT16_TO_UINT16(BgL_xz00_24); 
{ /* Ieee/number.scm 334 */
long BgL_arg3185z00_2835;
BgL_arg3185z00_2835 = 
(long)(BgL_xz00_2834); 
{ /* Ieee/number.scm 334 */
long BgL_res3233z00_2837;
BgL_res3233z00_2837 = 
(long)(BgL_arg3185z00_2835); 
BgL_res3234z00_2838 = BgL_res3233z00_2837; } } } 
BgL_arg1125z00_878 = BgL_res3234z00_2838; } 
{ /* Ieee/number.scm 334 */
long BgL_res3235z00_2840;
BgL_res3235z00_2840 = 
(long)(BgL_arg1125z00_878); 
return 
make_belong(BgL_res3235z00_2840);} }  else 
{ /* Ieee/number.scm 334 */
if(
BGL_INT32P(BgL_xz00_24))
{ /* Ieee/number.scm 335 */
long BgL_arg1127z00_880;
{ /* Ieee/number.scm 335 */
long BgL_res3238z00_2846;
{ /* Ieee/number.scm 335 */
int32_t BgL_xz00_2842;
BgL_xz00_2842 = 
BGL_BINT32_TO_INT32(BgL_xz00_24); 
{ /* Ieee/number.scm 335 */
long BgL_arg3184z00_2843;
BgL_arg3184z00_2843 = 
(long)(BgL_xz00_2842); 
{ /* Ieee/number.scm 335 */
long BgL_res3237z00_2845;
BgL_res3237z00_2845 = 
(long)(BgL_arg3184z00_2843); 
BgL_res3238z00_2846 = BgL_res3237z00_2845; } } } 
BgL_arg1127z00_880 = BgL_res3238z00_2846; } 
{ /* Ieee/number.scm 335 */
long BgL_res3239z00_2848;
BgL_res3239z00_2848 = 
(long)(BgL_arg1127z00_880); 
return 
make_belong(BgL_res3239z00_2848);} }  else 
{ /* Ieee/number.scm 335 */
if(
BGL_UINT32P(BgL_xz00_24))
{ /* Ieee/number.scm 336 */
long BgL_arg1129z00_882;
{ /* Ieee/number.scm 336 */
long BgL_res3241z00_2851;
{ /* Ieee/number.scm 336 */
uint32_t BgL_xz00_2850;
BgL_xz00_2850 = 
BGL_BUINT32_TO_UINT32(BgL_xz00_24); 
BgL_res3241z00_2851 = 
(long)(BgL_xz00_2850); } 
BgL_arg1129z00_882 = BgL_res3241z00_2851; } 
{ /* Ieee/number.scm 336 */
long BgL_res3242z00_2853;
BgL_res3242z00_2853 = 
(long)(BgL_arg1129z00_882); 
return 
make_belong(BgL_res3242z00_2853);} }  else 
{ /* Ieee/number.scm 336 */
if(
BGL_INT64P(BgL_xz00_24))
{ /* Ieee/number.scm 337 */
long BgL_arg1133z00_884;
{ /* Ieee/number.scm 337 */
long BgL_res3245z00_2859;
{ /* Ieee/number.scm 337 */
int64_t BgL_xz00_2855;
BgL_xz00_2855 = 
BGL_BINT64_TO_INT64(BgL_xz00_24); 
{ /* Ieee/number.scm 337 */
long BgL_arg3182z00_2856;
BgL_arg3182z00_2856 = 
(long)(BgL_xz00_2855); 
{ /* Ieee/number.scm 337 */
long BgL_res3244z00_2858;
BgL_res3244z00_2858 = 
(long)(BgL_arg3182z00_2856); 
BgL_res3245z00_2859 = BgL_res3244z00_2858; } } } 
BgL_arg1133z00_884 = BgL_res3245z00_2859; } 
{ /* Ieee/number.scm 337 */
long BgL_res3246z00_2861;
BgL_res3246z00_2861 = 
(long)(BgL_arg1133z00_884); 
return 
make_belong(BgL_res3246z00_2861);} }  else 
{ /* Ieee/number.scm 337 */
return BFALSE;} } } } } } } } } 

}



/* $subelong? */
bool_t BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(obj_t BgL_xz00_26)
{
{ /* Ieee/number.scm 357 */
{ /* Ieee/number.scm 360 */
bool_t BgL__ortest_1035z00_885;
BgL__ortest_1035z00_885 = 
ELONGP(BgL_xz00_26); 
if(BgL__ortest_1035z00_885)
{ /* Ieee/number.scm 360 */
return BgL__ortest_1035z00_885;}  else 
{ /* Ieee/number.scm 360 */
bool_t BgL__ortest_1036z00_886;
BgL__ortest_1036z00_886 = 
BGL_INT8P(BgL_xz00_26); 
if(BgL__ortest_1036z00_886)
{ /* Ieee/number.scm 360 */
return BgL__ortest_1036z00_886;}  else 
{ /* Ieee/number.scm 360 */
bool_t BgL__ortest_1037z00_887;
BgL__ortest_1037z00_887 = 
BGL_UINT8P(BgL_xz00_26); 
if(BgL__ortest_1037z00_887)
{ /* Ieee/number.scm 360 */
return BgL__ortest_1037z00_887;}  else 
{ /* Ieee/number.scm 360 */
bool_t BgL__ortest_1038z00_888;
BgL__ortest_1038z00_888 = 
BGL_INT16P(BgL_xz00_26); 
if(BgL__ortest_1038z00_888)
{ /* Ieee/number.scm 360 */
return BgL__ortest_1038z00_888;}  else 
{ /* Ieee/number.scm 360 */
bool_t BgL__ortest_1039z00_889;
BgL__ortest_1039z00_889 = 
BGL_UINT16P(BgL_xz00_26); 
if(BgL__ortest_1039z00_889)
{ /* Ieee/number.scm 360 */
return BgL__ortest_1039z00_889;}  else 
{ /* Ieee/number.scm 360 */
bool_t BgL__ortest_1040z00_890;
BgL__ortest_1040z00_890 = 
BGL_INT32P(BgL_xz00_26); 
if(BgL__ortest_1040z00_890)
{ /* Ieee/number.scm 360 */
return BgL__ortest_1040z00_890;}  else 
{ /* Ieee/number.scm 361 */
bool_t BgL__ortest_1041z00_891;
BgL__ortest_1041z00_891 = 
BGL_UINT32P(BgL_xz00_26); 
if(BgL__ortest_1041z00_891)
{ /* Ieee/number.scm 361 */
return BgL__ortest_1041z00_891;}  else 
{ /* Ieee/number.scm 361 */
return 
BGL_INT64P(BgL_xz00_26);} } } } } } } } } 

}



/* 2= */
BGL_EXPORTED_DEF bool_t BGl_2zd3zd3zz__r4_numbers_6_5z00(obj_t BgL_xz00_28, obj_t BgL_yz00_29)
{
{ /* Ieee/number.scm 492 */
if(
INTEGERP(BgL_xz00_28))
{ /* Ieee/number.scm 493 */
if(
INTEGERP(BgL_yz00_29))
{ /* Ieee/number.scm 493 */
return 
(
(long)CINT(BgL_xz00_28)==
(long)CINT(BgL_yz00_29));}  else 
{ /* Ieee/number.scm 493 */
if(
REALP(BgL_yz00_29))
{ /* Ieee/number.scm 493 */
return 
(
(double)(
(long)CINT(BgL_xz00_28))==
REAL_TO_DOUBLE(BgL_yz00_29));}  else 
{ /* Ieee/number.scm 493 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_29))
{ /* Ieee/number.scm 493 */
long BgL_arg1145z00_897;obj_t BgL_arg1146z00_898;
{ /* Ieee/number.scm 493 */
long BgL_res3261z00_2881;
{ /* Ieee/number.scm 493 */
long BgL_tmpz00_7433;
BgL_tmpz00_7433 = 
(long)CINT(BgL_xz00_28); 
BgL_res3261z00_2881 = 
(long)(BgL_tmpz00_7433); } 
BgL_arg1145z00_897 = BgL_res3261z00_2881; } 
BgL_arg1146z00_898 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_29); 
{ /* Ieee/number.scm 493 */
long BgL_n2z00_2883;
{ /* Ieee/number.scm 493 */
obj_t BgL_tmpz00_7437;
if(
ELONGP(BgL_arg1146z00_898))
{ /* Ieee/number.scm 493 */
BgL_tmpz00_7437 = BgL_arg1146z00_898
; }  else 
{ 
obj_t BgL_auxz00_7440;
BgL_auxz00_7440 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)18767)), BGl_string5289z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1146z00_898); 
FAILURE(BgL_auxz00_7440,BFALSE,BFALSE);} 
BgL_n2z00_2883 = 
BELONG_TO_LONG(BgL_tmpz00_7437); } 
return 
(BgL_arg1145z00_897==BgL_n2z00_2883);} }  else 
{ /* Ieee/number.scm 493 */
if(
LLONGP(BgL_yz00_29))
{ /* Ieee/number.scm 493 */
BGL_LONGLONG_T BgL_arg1155z00_900;
{ /* Ieee/number.scm 493 */
BGL_LONGLONG_T BgL_res3264z00_2887;
{ /* Ieee/number.scm 493 */
long BgL_tmpz00_7448;
BgL_tmpz00_7448 = 
(long)CINT(BgL_xz00_28); 
BgL_res3264z00_2887 = 
LONG_TO_LLONG(BgL_tmpz00_7448); } 
BgL_arg1155z00_900 = BgL_res3264z00_2887; } 
return 
(BgL_arg1155z00_900==
BLLONG_TO_LLONG(BgL_yz00_29));}  else 
{ /* Ieee/number.scm 493 */
if(
BGL_UINT64P(BgL_yz00_29))
{ /* Ieee/number.scm 493 */
uint64_t BgL_arg1165z00_903;
{ /* Ieee/number.scm 493 */
BGL_LONGLONG_T BgL_arg1166z00_904;
{ /* Ieee/number.scm 493 */
BGL_LONGLONG_T BgL_res3267z00_2893;
{ /* Ieee/number.scm 493 */
long BgL_tmpz00_7455;
BgL_tmpz00_7455 = 
(long)CINT(BgL_xz00_28); 
BgL_res3267z00_2893 = 
LONG_TO_LLONG(BgL_tmpz00_7455); } 
BgL_arg1166z00_904 = BgL_res3267z00_2893; } 
{ /* Ieee/number.scm 493 */
uint64_t BgL_res3268z00_2895;
BgL_res3268z00_2895 = 
(uint64_t)(BgL_arg1166z00_904); 
BgL_arg1165z00_903 = BgL_res3268z00_2895; } } 
{ /* Ieee/number.scm 493 */
bool_t BgL_res3269z00_2898;
{ /* Ieee/number.scm 493 */
uint64_t BgL_n2z00_2897;
BgL_n2z00_2897 = 
BGL_BINT64_TO_INT64(BgL_yz00_29); 
BgL_res3269z00_2898 = 
(BgL_arg1165z00_903==BgL_n2z00_2897); } 
return BgL_res3269z00_2898;} }  else 
{ /* Ieee/number.scm 493 */
if(
BIGNUMP(BgL_yz00_29))
{ /* Ieee/number.scm 493 */
return 
(
(long)(
bgl_bignum_cmp(
bgl_long_to_bignum(
(long)CINT(BgL_xz00_28)), BgL_yz00_29))==((long)0));}  else 
{ /* Ieee/number.scm 493 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_string5290z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_29));} } } } } } }  else 
{ /* Ieee/number.scm 493 */
if(
REALP(BgL_xz00_28))
{ /* Ieee/number.scm 493 */
if(
REALP(BgL_yz00_29))
{ /* Ieee/number.scm 493 */
return 
(
REAL_TO_DOUBLE(BgL_xz00_28)==
REAL_TO_DOUBLE(BgL_yz00_29));}  else 
{ /* Ieee/number.scm 493 */
if(
INTEGERP(BgL_yz00_29))
{ /* Ieee/number.scm 493 */
return 
(
REAL_TO_DOUBLE(BgL_xz00_28)==
(double)(
(long)CINT(BgL_yz00_29)));}  else 
{ /* Ieee/number.scm 493 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_29))
{ /* Ieee/number.scm 493 */
double BgL_arg1176z00_912;
{ /* Ieee/number.scm 493 */
obj_t BgL_arg1177z00_913;
BgL_arg1177z00_913 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_29); 
{ /* Ieee/number.scm 493 */
long BgL_tmpz00_7486;
{ /* Ieee/number.scm 493 */
obj_t BgL_tmpz00_7487;
if(
ELONGP(BgL_arg1177z00_913))
{ /* Ieee/number.scm 493 */
BgL_tmpz00_7487 = BgL_arg1177z00_913
; }  else 
{ 
obj_t BgL_auxz00_7490;
BgL_auxz00_7490 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)18767)), BGl_string5289z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1177z00_913); 
FAILURE(BgL_auxz00_7490,BFALSE,BFALSE);} 
BgL_tmpz00_7486 = 
BELONG_TO_LONG(BgL_tmpz00_7487); } 
BgL_arg1176z00_912 = 
(double)(BgL_tmpz00_7486); } } 
return 
(
REAL_TO_DOUBLE(BgL_xz00_28)==BgL_arg1176z00_912);}  else 
{ /* Ieee/number.scm 493 */
if(
LLONGP(BgL_yz00_29))
{ /* Ieee/number.scm 493 */
return 
(
REAL_TO_DOUBLE(BgL_xz00_28)==
(double)(
BLLONG_TO_LLONG(BgL_yz00_29)));}  else 
{ /* Ieee/number.scm 493 */
if(
BGL_UINT64P(BgL_yz00_29))
{ /* Ieee/number.scm 493 */
double BgL_arg1190z00_918;
{ /* Ieee/number.scm 493 */
double BgL_res3283z00_2926;
{ /* Ieee/number.scm 493 */
uint64_t BgL_xz00_2925;
BgL_xz00_2925 = 
BGL_BINT64_TO_INT64(BgL_yz00_29); 
BgL_res3283z00_2926 = 
(double)(BgL_xz00_2925); } 
BgL_arg1190z00_918 = BgL_res3283z00_2926; } 
return 
(
REAL_TO_DOUBLE(BgL_xz00_28)==BgL_arg1190z00_918);}  else 
{ /* Ieee/number.scm 493 */
if(
BIGNUMP(BgL_yz00_29))
{ /* Ieee/number.scm 493 */
return 
(
REAL_TO_DOUBLE(BgL_xz00_28)==
bgl_bignum_to_flonum(BgL_yz00_29));}  else 
{ /* Ieee/number.scm 493 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_string5290z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_29));} } } } } } }  else 
{ /* Ieee/number.scm 493 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_xz00_28))
{ /* Ieee/number.scm 493 */
if(
INTEGERP(BgL_yz00_29))
{ /* Ieee/number.scm 493 */
obj_t BgL_arg1197z00_923;long BgL_arg1201z00_924;
BgL_arg1197z00_923 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_28); 
{ /* Ieee/number.scm 493 */
long BgL_res3289z00_2938;
{ /* Ieee/number.scm 493 */
long BgL_tmpz00_7522;
BgL_tmpz00_7522 = 
(long)CINT(BgL_yz00_29); 
BgL_res3289z00_2938 = 
(long)(BgL_tmpz00_7522); } 
BgL_arg1201z00_924 = BgL_res3289z00_2938; } 
{ /* Ieee/number.scm 493 */
long BgL_n1z00_2939;
{ /* Ieee/number.scm 493 */
obj_t BgL_tmpz00_7525;
if(
ELONGP(BgL_arg1197z00_923))
{ /* Ieee/number.scm 493 */
BgL_tmpz00_7525 = BgL_arg1197z00_923
; }  else 
{ 
obj_t BgL_auxz00_7528;
BgL_auxz00_7528 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)18767)), BGl_string5289z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1197z00_923); 
FAILURE(BgL_auxz00_7528,BFALSE,BFALSE);} 
BgL_n1z00_2939 = 
BELONG_TO_LONG(BgL_tmpz00_7525); } 
return 
(BgL_n1z00_2939==BgL_arg1201z00_924);} }  else 
{ /* Ieee/number.scm 493 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_29))
{ /* Ieee/number.scm 493 */
obj_t BgL_arg1208z00_926;obj_t BgL_arg1211z00_927;
BgL_arg1208z00_926 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_28); 
BgL_arg1211z00_927 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_29); 
{ /* Ieee/number.scm 493 */
long BgL_n1z00_2942;long BgL_n2z00_2943;
{ /* Ieee/number.scm 493 */
obj_t BgL_tmpz00_7538;
if(
ELONGP(BgL_arg1208z00_926))
{ /* Ieee/number.scm 493 */
BgL_tmpz00_7538 = BgL_arg1208z00_926
; }  else 
{ 
obj_t BgL_auxz00_7541;
BgL_auxz00_7541 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)18767)), BGl_string5289z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1208z00_926); 
FAILURE(BgL_auxz00_7541,BFALSE,BFALSE);} 
BgL_n1z00_2942 = 
BELONG_TO_LONG(BgL_tmpz00_7538); } 
{ /* Ieee/number.scm 493 */
obj_t BgL_tmpz00_7546;
if(
ELONGP(BgL_arg1211z00_927))
{ /* Ieee/number.scm 493 */
BgL_tmpz00_7546 = BgL_arg1211z00_927
; }  else 
{ 
obj_t BgL_auxz00_7549;
BgL_auxz00_7549 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)18767)), BGl_string5289z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1211z00_927); 
FAILURE(BgL_auxz00_7549,BFALSE,BFALSE);} 
BgL_n2z00_2943 = 
BELONG_TO_LONG(BgL_tmpz00_7546); } 
return 
(BgL_n1z00_2942==BgL_n2z00_2943);} }  else 
{ /* Ieee/number.scm 493 */
if(
REALP(BgL_yz00_29))
{ /* Ieee/number.scm 493 */
double BgL_arg1216z00_929;
{ /* Ieee/number.scm 493 */
obj_t BgL_arg1221z00_930;
BgL_arg1221z00_930 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_28); 
{ /* Ieee/number.scm 493 */
long BgL_tmpz00_7558;
{ /* Ieee/number.scm 493 */
obj_t BgL_tmpz00_7559;
if(
ELONGP(BgL_arg1221z00_930))
{ /* Ieee/number.scm 493 */
BgL_tmpz00_7559 = BgL_arg1221z00_930
; }  else 
{ 
obj_t BgL_auxz00_7562;
BgL_auxz00_7562 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)18767)), BGl_string5289z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1221z00_930); 
FAILURE(BgL_auxz00_7562,BFALSE,BFALSE);} 
BgL_tmpz00_7558 = 
BELONG_TO_LONG(BgL_tmpz00_7559); } 
BgL_arg1216z00_929 = 
(double)(BgL_tmpz00_7558); } } 
return 
(BgL_arg1216z00_929==
REAL_TO_DOUBLE(BgL_yz00_29));}  else 
{ /* Ieee/number.scm 493 */
if(
LLONGP(BgL_yz00_29))
{ /* Ieee/number.scm 493 */
BGL_LONGLONG_T BgL_arg1223z00_932;
{ /* Ieee/number.scm 493 */
obj_t BgL_arg1227z00_934;
BgL_arg1227z00_934 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_28); 
{ /* Ieee/number.scm 493 */
long BgL_tmpz00_7573;
{ /* Ieee/number.scm 493 */
obj_t BgL_tmpz00_7574;
if(
ELONGP(BgL_arg1227z00_934))
{ /* Ieee/number.scm 493 */
BgL_tmpz00_7574 = BgL_arg1227z00_934
; }  else 
{ 
obj_t BgL_auxz00_7577;
BgL_auxz00_7577 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)18767)), BGl_string5289z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1227z00_934); 
FAILURE(BgL_auxz00_7577,BFALSE,BFALSE);} 
BgL_tmpz00_7573 = 
BELONG_TO_LONG(BgL_tmpz00_7574); } 
BgL_arg1223z00_932 = 
(BGL_LONGLONG_T)(BgL_tmpz00_7573); } } 
return 
(BgL_arg1223z00_932==
BLLONG_TO_LLONG(BgL_yz00_29));}  else 
{ /* Ieee/number.scm 493 */
if(
BGL_UINT64P(BgL_yz00_29))
{ /* Ieee/number.scm 493 */
uint64_t BgL_arg1229z00_936;
{ /* Ieee/number.scm 493 */
BGL_LONGLONG_T BgL_arg1232z00_937;
{ /* Ieee/number.scm 493 */
obj_t BgL_arg1239z00_938;
BgL_arg1239z00_938 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_28); 
{ /* Ieee/number.scm 493 */
long BgL_tmpz00_7588;
{ /* Ieee/number.scm 493 */
obj_t BgL_tmpz00_7589;
if(
ELONGP(BgL_arg1239z00_938))
{ /* Ieee/number.scm 493 */
BgL_tmpz00_7589 = BgL_arg1239z00_938
; }  else 
{ 
obj_t BgL_auxz00_7592;
BgL_auxz00_7592 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)18767)), BGl_string5289z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1239z00_938); 
FAILURE(BgL_auxz00_7592,BFALSE,BFALSE);} 
BgL_tmpz00_7588 = 
BELONG_TO_LONG(BgL_tmpz00_7589); } 
BgL_arg1232z00_937 = 
(BGL_LONGLONG_T)(BgL_tmpz00_7588); } } 
{ /* Ieee/number.scm 493 */
uint64_t BgL_res3297z00_2955;
BgL_res3297z00_2955 = 
(uint64_t)(BgL_arg1232z00_937); 
BgL_arg1229z00_936 = BgL_res3297z00_2955; } } 
{ /* Ieee/number.scm 493 */
bool_t BgL_res3298z00_2958;
{ /* Ieee/number.scm 493 */
uint64_t BgL_n2z00_2957;
BgL_n2z00_2957 = 
BGL_BINT64_TO_INT64(BgL_yz00_29); 
BgL_res3298z00_2958 = 
(BgL_arg1229z00_936==BgL_n2z00_2957); } 
return BgL_res3298z00_2958;} }  else 
{ /* Ieee/number.scm 493 */
if(
BIGNUMP(BgL_yz00_29))
{ /* Ieee/number.scm 493 */
obj_t BgL_arg1242z00_940;
{ /* Ieee/number.scm 493 */
obj_t BgL_arg1243z00_941;
BgL_arg1243z00_941 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_28); 
{ /* Ieee/number.scm 493 */
long BgL_xz00_2960;
{ /* Ieee/number.scm 493 */
obj_t BgL_tmpz00_7604;
if(
ELONGP(BgL_arg1243z00_941))
{ /* Ieee/number.scm 493 */
BgL_tmpz00_7604 = BgL_arg1243z00_941
; }  else 
{ 
obj_t BgL_auxz00_7607;
BgL_auxz00_7607 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)18767)), BGl_string5289z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1243z00_941); 
FAILURE(BgL_auxz00_7607,BFALSE,BFALSE);} 
BgL_xz00_2960 = 
BELONG_TO_LONG(BgL_tmpz00_7604); } 
BgL_arg1242z00_940 = 
bgl_long_to_bignum(BgL_xz00_2960); } } 
return 
(
(long)(
bgl_bignum_cmp(BgL_arg1242z00_940, BgL_yz00_29))==((long)0));}  else 
{ /* Ieee/number.scm 493 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_string5290z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_29));} } } } } } }  else 
{ /* Ieee/number.scm 493 */
if(
LLONGP(BgL_xz00_28))
{ /* Ieee/number.scm 493 */
if(
INTEGERP(BgL_yz00_29))
{ /* Ieee/number.scm 493 */
BGL_LONGLONG_T BgL_arg1247z00_945;
{ /* Ieee/number.scm 493 */
BGL_LONGLONG_T BgL_res3305z00_2971;
{ /* Ieee/number.scm 493 */
long BgL_tmpz00_7622;
BgL_tmpz00_7622 = 
(long)CINT(BgL_yz00_29); 
BgL_res3305z00_2971 = 
LONG_TO_LLONG(BgL_tmpz00_7622); } 
BgL_arg1247z00_945 = BgL_res3305z00_2971; } 
return 
(
BLLONG_TO_LLONG(BgL_xz00_28)==BgL_arg1247z00_945);}  else 
{ /* Ieee/number.scm 493 */
if(
REALP(BgL_yz00_29))
{ /* Ieee/number.scm 493 */
return 
(
(double)(
BLLONG_TO_LLONG(BgL_xz00_28))==
REAL_TO_DOUBLE(BgL_yz00_29));}  else 
{ /* Ieee/number.scm 493 */
if(
LLONGP(BgL_yz00_29))
{ /* Ieee/number.scm 493 */
return 
(
BLLONG_TO_LLONG(BgL_xz00_28)==
BLLONG_TO_LLONG(BgL_yz00_29));}  else 
{ /* Ieee/number.scm 493 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_29))
{ /* Ieee/number.scm 493 */
BGL_LONGLONG_T BgL_arg1258z00_953;
{ /* Ieee/number.scm 493 */
obj_t BgL_arg1263z00_954;
BgL_arg1263z00_954 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_29); 
{ /* Ieee/number.scm 493 */
long BgL_tmpz00_7641;
{ /* Ieee/number.scm 493 */
obj_t BgL_tmpz00_7642;
if(
ELONGP(BgL_arg1263z00_954))
{ /* Ieee/number.scm 493 */
BgL_tmpz00_7642 = BgL_arg1263z00_954
; }  else 
{ 
obj_t BgL_auxz00_7645;
BgL_auxz00_7645 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)18767)), BGl_string5289z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1263z00_954); 
FAILURE(BgL_auxz00_7645,BFALSE,BFALSE);} 
BgL_tmpz00_7641 = 
BELONG_TO_LONG(BgL_tmpz00_7642); } 
BgL_arg1258z00_953 = 
(BGL_LONGLONG_T)(BgL_tmpz00_7641); } } 
return 
(
BLLONG_TO_LLONG(BgL_xz00_28)==BgL_arg1258z00_953);}  else 
{ /* Ieee/number.scm 493 */
if(
BIGNUMP(BgL_yz00_29))
{ /* Ieee/number.scm 493 */
return 
(
(long)(
bgl_bignum_cmp(
bgl_llong_to_bignum(
BLLONG_TO_LLONG(BgL_xz00_28)), BgL_yz00_29))==((long)0));}  else 
{ /* Ieee/number.scm 493 */
if(
BGL_UINT64P(BgL_yz00_29))
{ /* Ieee/number.scm 493 */
uint64_t BgL_arg1273z00_959;
{ /* Ieee/number.scm 493 */
uint64_t BgL_res3317z00_2997;
{ /* Ieee/number.scm 493 */
BGL_LONGLONG_T BgL_tmpz00_7662;
BgL_tmpz00_7662 = 
BLLONG_TO_LLONG(BgL_xz00_28); 
BgL_res3317z00_2997 = 
(uint64_t)(BgL_tmpz00_7662); } 
BgL_arg1273z00_959 = BgL_res3317z00_2997; } 
{ /* Ieee/number.scm 493 */
bool_t BgL_res3318z00_3000;
{ /* Ieee/number.scm 493 */
uint64_t BgL_n2z00_2999;
BgL_n2z00_2999 = 
BGL_BINT64_TO_INT64(BgL_yz00_29); 
BgL_res3318z00_3000 = 
(BgL_arg1273z00_959==BgL_n2z00_2999); } 
return BgL_res3318z00_3000;} }  else 
{ /* Ieee/number.scm 493 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_string5290z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_29));} } } } } } }  else 
{ /* Ieee/number.scm 493 */
if(
BGL_UINT64P(BgL_xz00_28))
{ /* Ieee/number.scm 493 */
if(
INTEGERP(BgL_yz00_29))
{ /* Ieee/number.scm 493 */
uint64_t BgL_arg1276z00_962;
{ /* Ieee/number.scm 493 */
uint64_t BgL_res3321z00_3004;
{ /* Ieee/number.scm 493 */
long BgL_tmpz00_7673;
BgL_tmpz00_7673 = 
(long)CINT(BgL_yz00_29); 
BgL_res3321z00_3004 = 
(uint64_t)(BgL_tmpz00_7673); } 
BgL_arg1276z00_962 = BgL_res3321z00_3004; } 
{ /* Ieee/number.scm 493 */
bool_t BgL_res3322z00_3007;
{ /* Ieee/number.scm 493 */
uint64_t BgL_n1z00_3005;
BgL_n1z00_3005 = 
BGL_BINT64_TO_INT64(BgL_xz00_28); 
BgL_res3322z00_3007 = 
(BgL_n1z00_3005==BgL_arg1276z00_962); } 
return BgL_res3322z00_3007;} }  else 
{ /* Ieee/number.scm 493 */
if(
BGL_UINT64P(BgL_yz00_29))
{ /* Ieee/number.scm 493 */
bool_t BgL_res3324z00_3011;
{ /* Ieee/number.scm 493 */
uint64_t BgL_n1z00_3009;uint64_t BgL_n2z00_3010;
BgL_n1z00_3009 = 
BGL_BINT64_TO_INT64(BgL_xz00_28); 
BgL_n2z00_3010 = 
BGL_BINT64_TO_INT64(BgL_yz00_29); 
BgL_res3324z00_3011 = 
(BgL_n1z00_3009==BgL_n2z00_3010); } 
return BgL_res3324z00_3011;}  else 
{ /* Ieee/number.scm 493 */
if(
REALP(BgL_yz00_29))
{ /* Ieee/number.scm 493 */
double BgL_arg1280z00_965;
{ /* Ieee/number.scm 493 */
uint64_t BgL_tmpz00_7685;
BgL_tmpz00_7685 = 
BGL_BINT64_TO_INT64(BgL_xz00_28); 
BgL_arg1280z00_965 = 
(double)(BgL_tmpz00_7685); } 
return 
(BgL_arg1280z00_965==
REAL_TO_DOUBLE(BgL_yz00_29));}  else 
{ /* Ieee/number.scm 493 */
if(
LLONGP(BgL_yz00_29))
{ /* Ieee/number.scm 493 */
uint64_t BgL_arg1282z00_967;
{ /* Ieee/number.scm 493 */
uint64_t BgL_res3328z00_3018;
{ /* Ieee/number.scm 493 */
BGL_LONGLONG_T BgL_tmpz00_7692;
BgL_tmpz00_7692 = 
BLLONG_TO_LLONG(BgL_yz00_29); 
BgL_res3328z00_3018 = 
(uint64_t)(BgL_tmpz00_7692); } 
BgL_arg1282z00_967 = BgL_res3328z00_3018; } 
{ /* Ieee/number.scm 493 */
bool_t BgL_res3329z00_3021;
{ /* Ieee/number.scm 493 */
uint64_t BgL_n1z00_3019;
BgL_n1z00_3019 = 
BGL_BINT64_TO_INT64(BgL_xz00_28); 
BgL_res3329z00_3021 = 
(BgL_n1z00_3019==BgL_arg1282z00_967); } 
return BgL_res3329z00_3021;} }  else 
{ /* Ieee/number.scm 493 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_29))
{ /* Ieee/number.scm 493 */
uint64_t BgL_arg1286z00_970;
{ /* Ieee/number.scm 493 */
BGL_LONGLONG_T BgL_arg1287z00_971;
{ /* Ieee/number.scm 493 */
obj_t BgL_arg1288z00_972;
BgL_arg1288z00_972 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_29); 
{ /* Ieee/number.scm 493 */
long BgL_tmpz00_7700;
{ /* Ieee/number.scm 493 */
obj_t BgL_tmpz00_7701;
if(
ELONGP(BgL_arg1288z00_972))
{ /* Ieee/number.scm 493 */
BgL_tmpz00_7701 = BgL_arg1288z00_972
; }  else 
{ 
obj_t BgL_auxz00_7704;
BgL_auxz00_7704 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)18767)), BGl_string5289z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1288z00_972); 
FAILURE(BgL_auxz00_7704,BFALSE,BFALSE);} 
BgL_tmpz00_7700 = 
BELONG_TO_LONG(BgL_tmpz00_7701); } 
BgL_arg1287z00_971 = 
(BGL_LONGLONG_T)(BgL_tmpz00_7700); } } 
{ /* Ieee/number.scm 493 */
uint64_t BgL_res3330z00_3023;
BgL_res3330z00_3023 = 
(uint64_t)(BgL_arg1287z00_971); 
BgL_arg1286z00_970 = BgL_res3330z00_3023; } } 
{ /* Ieee/number.scm 493 */
bool_t BgL_res3331z00_3026;
{ /* Ieee/number.scm 493 */
uint64_t BgL_n1z00_3024;
BgL_n1z00_3024 = 
BGL_BINT64_TO_INT64(BgL_xz00_28); 
BgL_res3331z00_3026 = 
(BgL_n1z00_3024==BgL_arg1286z00_970); } 
return BgL_res3331z00_3026;} }  else 
{ /* Ieee/number.scm 493 */
if(
BIGNUMP(BgL_yz00_29))
{ /* Ieee/number.scm 493 */
long BgL_n1z00_3031;
BgL_n1z00_3031 = 
(long)(
bgl_bignum_cmp(
bgl_uint64_to_bignum(
BGL_BINT64_TO_INT64(BgL_xz00_28)), BgL_yz00_29)); 
return 
(BgL_n1z00_3031==((long)0));}  else 
{ /* Ieee/number.scm 493 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_string5290z00zz__r4_numbers_6_5z00, BGl_string5292z00zz__r4_numbers_6_5z00, BgL_yz00_29));} } } } } } }  else 
{ /* Ieee/number.scm 493 */
if(
BIGNUMP(BgL_xz00_28))
{ /* Ieee/number.scm 493 */
if(
BIGNUMP(BgL_yz00_29))
{ /* Ieee/number.scm 493 */
return 
(
(long)(
bgl_bignum_cmp(BgL_xz00_28, BgL_yz00_29))==((long)0));}  else 
{ /* Ieee/number.scm 493 */
if(
INTEGERP(BgL_yz00_29))
{ /* Ieee/number.scm 493 */
return 
(
(long)(
bgl_bignum_cmp(BgL_xz00_28, 
bgl_long_to_bignum(
(long)CINT(BgL_yz00_29))))==((long)0));}  else 
{ /* Ieee/number.scm 493 */
if(
REALP(BgL_yz00_29))
{ /* Ieee/number.scm 493 */
return 
(
bgl_bignum_to_flonum(BgL_xz00_28)==
REAL_TO_DOUBLE(BgL_yz00_29));}  else 
{ /* Ieee/number.scm 493 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_29))
{ /* Ieee/number.scm 493 */
obj_t BgL_arg1299z00_982;
{ /* Ieee/number.scm 493 */
obj_t BgL_arg1300z00_983;
BgL_arg1300z00_983 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_29); 
{ /* Ieee/number.scm 493 */
long BgL_xz00_3057;
{ /* Ieee/number.scm 493 */
obj_t BgL_tmpz00_7744;
if(
ELONGP(BgL_arg1300z00_983))
{ /* Ieee/number.scm 493 */
BgL_tmpz00_7744 = BgL_arg1300z00_983
; }  else 
{ 
obj_t BgL_auxz00_7747;
BgL_auxz00_7747 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)18767)), BGl_string5289z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1300z00_983); 
FAILURE(BgL_auxz00_7747,BFALSE,BFALSE);} 
BgL_xz00_3057 = 
BELONG_TO_LONG(BgL_tmpz00_7744); } 
BgL_arg1299z00_982 = 
bgl_long_to_bignum(BgL_xz00_3057); } } 
return 
(
(long)(
bgl_bignum_cmp(BgL_xz00_28, BgL_arg1299z00_982))==((long)0));}  else 
{ /* Ieee/number.scm 493 */
if(
LLONGP(BgL_yz00_29))
{ /* Ieee/number.scm 493 */
return 
(
(long)(
bgl_bignum_cmp(BgL_xz00_28, 
bgl_llong_to_bignum(
BLLONG_TO_LLONG(BgL_yz00_29))))==((long)0));}  else 
{ /* Ieee/number.scm 493 */
if(
BGL_UINT64P(BgL_yz00_29))
{ /* Ieee/number.scm 493 */
long BgL_n1z00_3078;
BgL_n1z00_3078 = 
(long)(
bgl_bignum_cmp(BgL_xz00_28, 
bgl_uint64_to_bignum(
BGL_BINT64_TO_INT64(BgL_yz00_29)))); 
return 
(BgL_n1z00_3078==((long)0));}  else 
{ /* Ieee/number.scm 493 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_string5290z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_29));} } } } } } }  else 
{ /* Ieee/number.scm 493 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_string5290z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_xz00_28));} } } } } } } 

}



/* &2= */
obj_t BGl_z622zd3zb1zz__r4_numbers_6_5z00(obj_t BgL_envz00_6484, obj_t BgL_xz00_6485, obj_t BgL_yz00_6486)
{
{ /* Ieee/number.scm 492 */
return 
BBOOL(
BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_xz00_6485, BgL_yz00_6486));} 

}



/* = */
BGL_EXPORTED_DEF bool_t BGl_zd3zd3zz__r4_numbers_6_5z00(obj_t BgL_xz00_30, obj_t BgL_yz00_31, obj_t BgL_za7za7_32)
{
{ /* Ieee/number.scm 498 */
{ 
obj_t BgL_xz00_991;obj_t BgL_za7za7_992;
if(
BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_xz00_30, BgL_yz00_31))
{ /* Ieee/number.scm 504 */
BgL_xz00_991 = BgL_yz00_31; 
BgL_za7za7_992 = BgL_za7za7_32; 
BgL_zc3z04anonymousza31307ze3z87_993:
if(
NULLP(BgL_za7za7_992))
{ /* Ieee/number.scm 501 */
return ((bool_t)1);}  else 
{ /* Ieee/number.scm 502 */
bool_t BgL_test5628z00_7780;
{ /* Ieee/number.scm 502 */
obj_t BgL_arg1312z00_998;
{ /* Ieee/number.scm 502 */
obj_t BgL_pairz00_3082;
if(
PAIRP(BgL_za7za7_992))
{ /* Ieee/number.scm 502 */
BgL_pairz00_3082 = BgL_za7za7_992; }  else 
{ 
obj_t BgL_auxz00_7783;
BgL_auxz00_7783 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)19090)), BGl_string5293z00zz__r4_numbers_6_5z00, BGl_string5294z00zz__r4_numbers_6_5z00, BgL_za7za7_992); 
FAILURE(BgL_auxz00_7783,BFALSE,BFALSE);} 
BgL_arg1312z00_998 = 
CAR(BgL_pairz00_3082); } 
BgL_test5628z00_7780 = 
BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_xz00_991, BgL_arg1312z00_998); } 
if(BgL_test5628z00_7780)
{ 
obj_t BgL_za7za7_7789;
{ /* Ieee/number.scm 502 */
obj_t BgL_pairz00_3083;
if(
PAIRP(BgL_za7za7_992))
{ /* Ieee/number.scm 502 */
BgL_pairz00_3083 = BgL_za7za7_992; }  else 
{ 
obj_t BgL_auxz00_7792;
BgL_auxz00_7792 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)19109)), BGl_string5293z00zz__r4_numbers_6_5z00, BGl_string5294z00zz__r4_numbers_6_5z00, BgL_za7za7_992); 
FAILURE(BgL_auxz00_7792,BFALSE,BFALSE);} 
BgL_za7za7_7789 = 
CDR(BgL_pairz00_3083); } 
BgL_za7za7_992 = BgL_za7za7_7789; 
goto BgL_zc3z04anonymousza31307ze3z87_993;}  else 
{ /* Ieee/number.scm 502 */
return ((bool_t)0);} } }  else 
{ /* Ieee/number.scm 504 */
return ((bool_t)0);} } } 

}



/* &= */
obj_t BGl_z62zd3zb1zz__r4_numbers_6_5z00(obj_t BgL_envz00_6487, obj_t BgL_xz00_6488, obj_t BgL_yz00_6489, obj_t BgL_za7za7_6490)
{
{ /* Ieee/number.scm 498 */
return 
BBOOL(
BGl_zd3zd3zz__r4_numbers_6_5z00(BgL_xz00_6488, BgL_yz00_6489, BgL_za7za7_6490));} 

}



/* 2< */
BGL_EXPORTED_DEF bool_t BGl_2zc3zc3zz__r4_numbers_6_5z00(obj_t BgL_xz00_33, obj_t BgL_yz00_34)
{
{ /* Ieee/number.scm 509 */
if(
INTEGERP(BgL_xz00_33))
{ /* Ieee/number.scm 510 */
if(
INTEGERP(BgL_yz00_34))
{ /* Ieee/number.scm 510 */
return 
(
(long)CINT(BgL_xz00_33)<
(long)CINT(BgL_yz00_34));}  else 
{ /* Ieee/number.scm 510 */
if(
REALP(BgL_yz00_34))
{ /* Ieee/number.scm 510 */
return 
(
(double)(
(long)CINT(BgL_xz00_33))<
REAL_TO_DOUBLE(BgL_yz00_34));}  else 
{ /* Ieee/number.scm 510 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_34))
{ /* Ieee/number.scm 510 */
long BgL_arg1318z00_1005;obj_t BgL_arg1319z00_1006;
{ /* Ieee/number.scm 510 */
long BgL_res3362z00_3094;
{ /* Ieee/number.scm 510 */
long BgL_tmpz00_7814;
BgL_tmpz00_7814 = 
(long)CINT(BgL_xz00_33); 
BgL_res3362z00_3094 = 
(long)(BgL_tmpz00_7814); } 
BgL_arg1318z00_1005 = BgL_res3362z00_3094; } 
BgL_arg1319z00_1006 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_34); 
{ /* Ieee/number.scm 510 */
long BgL_n2z00_3096;
{ /* Ieee/number.scm 510 */
obj_t BgL_tmpz00_7818;
if(
ELONGP(BgL_arg1319z00_1006))
{ /* Ieee/number.scm 510 */
BgL_tmpz00_7818 = BgL_arg1319z00_1006
; }  else 
{ 
obj_t BgL_auxz00_7821;
BgL_auxz00_7821 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)19404)), BGl_string5295z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1319z00_1006); 
FAILURE(BgL_auxz00_7821,BFALSE,BFALSE);} 
BgL_n2z00_3096 = 
BELONG_TO_LONG(BgL_tmpz00_7818); } 
return 
(BgL_arg1318z00_1005<BgL_n2z00_3096);} }  else 
{ /* Ieee/number.scm 510 */
if(
LLONGP(BgL_yz00_34))
{ /* Ieee/number.scm 510 */
BGL_LONGLONG_T BgL_arg1322z00_1008;
{ /* Ieee/number.scm 510 */
BGL_LONGLONG_T BgL_res3365z00_3100;
{ /* Ieee/number.scm 510 */
long BgL_tmpz00_7829;
BgL_tmpz00_7829 = 
(long)CINT(BgL_xz00_33); 
BgL_res3365z00_3100 = 
LONG_TO_LLONG(BgL_tmpz00_7829); } 
BgL_arg1322z00_1008 = BgL_res3365z00_3100; } 
return 
(BgL_arg1322z00_1008<
BLLONG_TO_LLONG(BgL_yz00_34));}  else 
{ /* Ieee/number.scm 510 */
if(
BGL_UINT64P(BgL_yz00_34))
{ /* Ieee/number.scm 510 */
uint64_t BgL_arg1326z00_1011;
{ /* Ieee/number.scm 510 */
BGL_LONGLONG_T BgL_arg1327z00_1012;
{ /* Ieee/number.scm 510 */
BGL_LONGLONG_T BgL_res3368z00_3106;
{ /* Ieee/number.scm 510 */
long BgL_tmpz00_7836;
BgL_tmpz00_7836 = 
(long)CINT(BgL_xz00_33); 
BgL_res3368z00_3106 = 
LONG_TO_LLONG(BgL_tmpz00_7836); } 
BgL_arg1327z00_1012 = BgL_res3368z00_3106; } 
{ /* Ieee/number.scm 510 */
uint64_t BgL_res3369z00_3108;
BgL_res3369z00_3108 = 
(uint64_t)(BgL_arg1327z00_1012); 
BgL_arg1326z00_1011 = BgL_res3369z00_3108; } } 
{ /* Ieee/number.scm 510 */
uint64_t BgL_n2z00_3110;
BgL_n2z00_3110 = 
BGL_BINT64_TO_INT64(BgL_yz00_34); 
return 
(BgL_arg1326z00_1011<BgL_n2z00_3110);} }  else 
{ /* Ieee/number.scm 510 */
if(
BIGNUMP(BgL_yz00_34))
{ /* Ieee/number.scm 510 */
return 
(
(long)(
bgl_bignum_cmp(
bgl_long_to_bignum(
(long)CINT(BgL_xz00_33)), BgL_yz00_34))<((long)0));}  else 
{ /* Ieee/number.scm 510 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_string5296z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_34));} } } } } } }  else 
{ /* Ieee/number.scm 510 */
if(
REALP(BgL_xz00_33))
{ /* Ieee/number.scm 510 */
if(
REALP(BgL_yz00_34))
{ /* Ieee/number.scm 510 */
return 
(
REAL_TO_DOUBLE(BgL_xz00_33)<
REAL_TO_DOUBLE(BgL_yz00_34));}  else 
{ /* Ieee/number.scm 510 */
if(
INTEGERP(BgL_yz00_34))
{ /* Ieee/number.scm 510 */
return 
(
REAL_TO_DOUBLE(BgL_xz00_33)<
(double)(
(long)CINT(BgL_yz00_34)));}  else 
{ /* Ieee/number.scm 510 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_34))
{ /* Ieee/number.scm 510 */
double BgL_arg1335z00_1020;
{ /* Ieee/number.scm 510 */
obj_t BgL_arg1337z00_1021;
BgL_arg1337z00_1021 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_34); 
{ /* Ieee/number.scm 510 */
long BgL_tmpz00_7867;
{ /* Ieee/number.scm 510 */
obj_t BgL_tmpz00_7868;
if(
ELONGP(BgL_arg1337z00_1021))
{ /* Ieee/number.scm 510 */
BgL_tmpz00_7868 = BgL_arg1337z00_1021
; }  else 
{ 
obj_t BgL_auxz00_7871;
BgL_auxz00_7871 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)19404)), BGl_string5295z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1337z00_1021); 
FAILURE(BgL_auxz00_7871,BFALSE,BFALSE);} 
BgL_tmpz00_7867 = 
BELONG_TO_LONG(BgL_tmpz00_7868); } 
BgL_arg1335z00_1020 = 
(double)(BgL_tmpz00_7867); } } 
return 
(
REAL_TO_DOUBLE(BgL_xz00_33)<BgL_arg1335z00_1020);}  else 
{ /* Ieee/number.scm 510 */
if(
LLONGP(BgL_yz00_34))
{ /* Ieee/number.scm 510 */
return 
(
REAL_TO_DOUBLE(BgL_xz00_33)<
(double)(
BLLONG_TO_LLONG(BgL_yz00_34)));}  else 
{ /* Ieee/number.scm 510 */
if(
BGL_UINT64P(BgL_yz00_34))
{ /* Ieee/number.scm 510 */
double BgL_arg1342z00_1026;
{ /* Ieee/number.scm 510 */
double BgL_res3384z00_3139;
{ /* Ieee/number.scm 510 */
uint64_t BgL_xz00_3138;
BgL_xz00_3138 = 
BGL_BINT64_TO_INT64(BgL_yz00_34); 
BgL_res3384z00_3139 = 
(double)(BgL_xz00_3138); } 
BgL_arg1342z00_1026 = BgL_res3384z00_3139; } 
return 
(
REAL_TO_DOUBLE(BgL_xz00_33)<BgL_arg1342z00_1026);}  else 
{ /* Ieee/number.scm 510 */
if(
BIGNUMP(BgL_yz00_34))
{ /* Ieee/number.scm 510 */
return 
(
REAL_TO_DOUBLE(BgL_xz00_33)<
bgl_bignum_to_flonum(BgL_yz00_34));}  else 
{ /* Ieee/number.scm 510 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_string5296z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_34));} } } } } } }  else 
{ /* Ieee/number.scm 510 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_xz00_33))
{ /* Ieee/number.scm 510 */
if(
INTEGERP(BgL_yz00_34))
{ /* Ieee/number.scm 510 */
obj_t BgL_arg1347z00_1031;long BgL_arg1348z00_1032;
BgL_arg1347z00_1031 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_33); 
{ /* Ieee/number.scm 510 */
long BgL_res3390z00_3151;
{ /* Ieee/number.scm 510 */
long BgL_tmpz00_7903;
BgL_tmpz00_7903 = 
(long)CINT(BgL_yz00_34); 
BgL_res3390z00_3151 = 
(long)(BgL_tmpz00_7903); } 
BgL_arg1348z00_1032 = BgL_res3390z00_3151; } 
{ /* Ieee/number.scm 510 */
long BgL_n1z00_3152;
{ /* Ieee/number.scm 510 */
obj_t BgL_tmpz00_7906;
if(
ELONGP(BgL_arg1347z00_1031))
{ /* Ieee/number.scm 510 */
BgL_tmpz00_7906 = BgL_arg1347z00_1031
; }  else 
{ 
obj_t BgL_auxz00_7909;
BgL_auxz00_7909 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)19404)), BGl_string5295z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1347z00_1031); 
FAILURE(BgL_auxz00_7909,BFALSE,BFALSE);} 
BgL_n1z00_3152 = 
BELONG_TO_LONG(BgL_tmpz00_7906); } 
return 
(BgL_n1z00_3152<BgL_arg1348z00_1032);} }  else 
{ /* Ieee/number.scm 510 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_34))
{ /* Ieee/number.scm 510 */
obj_t BgL_arg1350z00_1034;obj_t BgL_arg1351z00_1035;
BgL_arg1350z00_1034 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_33); 
BgL_arg1351z00_1035 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_34); 
{ /* Ieee/number.scm 510 */
long BgL_n1z00_3155;long BgL_n2z00_3156;
{ /* Ieee/number.scm 510 */
obj_t BgL_tmpz00_7919;
if(
ELONGP(BgL_arg1350z00_1034))
{ /* Ieee/number.scm 510 */
BgL_tmpz00_7919 = BgL_arg1350z00_1034
; }  else 
{ 
obj_t BgL_auxz00_7922;
BgL_auxz00_7922 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)19404)), BGl_string5295z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1350z00_1034); 
FAILURE(BgL_auxz00_7922,BFALSE,BFALSE);} 
BgL_n1z00_3155 = 
BELONG_TO_LONG(BgL_tmpz00_7919); } 
{ /* Ieee/number.scm 510 */
obj_t BgL_tmpz00_7927;
if(
ELONGP(BgL_arg1351z00_1035))
{ /* Ieee/number.scm 510 */
BgL_tmpz00_7927 = BgL_arg1351z00_1035
; }  else 
{ 
obj_t BgL_auxz00_7930;
BgL_auxz00_7930 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)19404)), BGl_string5295z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1351z00_1035); 
FAILURE(BgL_auxz00_7930,BFALSE,BFALSE);} 
BgL_n2z00_3156 = 
BELONG_TO_LONG(BgL_tmpz00_7927); } 
return 
(BgL_n1z00_3155<BgL_n2z00_3156);} }  else 
{ /* Ieee/number.scm 510 */
if(
REALP(BgL_yz00_34))
{ /* Ieee/number.scm 510 */
double BgL_arg1353z00_1037;
{ /* Ieee/number.scm 510 */
obj_t BgL_arg1354z00_1038;
BgL_arg1354z00_1038 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_33); 
{ /* Ieee/number.scm 510 */
long BgL_tmpz00_7939;
{ /* Ieee/number.scm 510 */
obj_t BgL_tmpz00_7940;
if(
ELONGP(BgL_arg1354z00_1038))
{ /* Ieee/number.scm 510 */
BgL_tmpz00_7940 = BgL_arg1354z00_1038
; }  else 
{ 
obj_t BgL_auxz00_7943;
BgL_auxz00_7943 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)19404)), BGl_string5295z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1354z00_1038); 
FAILURE(BgL_auxz00_7943,BFALSE,BFALSE);} 
BgL_tmpz00_7939 = 
BELONG_TO_LONG(BgL_tmpz00_7940); } 
BgL_arg1353z00_1037 = 
(double)(BgL_tmpz00_7939); } } 
return 
(BgL_arg1353z00_1037<
REAL_TO_DOUBLE(BgL_yz00_34));}  else 
{ /* Ieee/number.scm 510 */
if(
LLONGP(BgL_yz00_34))
{ /* Ieee/number.scm 510 */
BGL_LONGLONG_T BgL_arg1356z00_1040;
{ /* Ieee/number.scm 510 */
obj_t BgL_arg1359z00_1042;
BgL_arg1359z00_1042 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_33); 
{ /* Ieee/number.scm 510 */
long BgL_tmpz00_7954;
{ /* Ieee/number.scm 510 */
obj_t BgL_tmpz00_7955;
if(
ELONGP(BgL_arg1359z00_1042))
{ /* Ieee/number.scm 510 */
BgL_tmpz00_7955 = BgL_arg1359z00_1042
; }  else 
{ 
obj_t BgL_auxz00_7958;
BgL_auxz00_7958 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)19404)), BGl_string5295z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1359z00_1042); 
FAILURE(BgL_auxz00_7958,BFALSE,BFALSE);} 
BgL_tmpz00_7954 = 
BELONG_TO_LONG(BgL_tmpz00_7955); } 
BgL_arg1356z00_1040 = 
(BGL_LONGLONG_T)(BgL_tmpz00_7954); } } 
return 
(BgL_arg1356z00_1040<
BLLONG_TO_LLONG(BgL_yz00_34));}  else 
{ /* Ieee/number.scm 510 */
if(
BGL_UINT64P(BgL_yz00_34))
{ /* Ieee/number.scm 510 */
uint64_t BgL_arg1361z00_1044;
{ /* Ieee/number.scm 510 */
BGL_LONGLONG_T BgL_arg1362z00_1045;
{ /* Ieee/number.scm 510 */
obj_t BgL_arg1363z00_1046;
BgL_arg1363z00_1046 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_33); 
{ /* Ieee/number.scm 510 */
long BgL_tmpz00_7969;
{ /* Ieee/number.scm 510 */
obj_t BgL_tmpz00_7970;
if(
ELONGP(BgL_arg1363z00_1046))
{ /* Ieee/number.scm 510 */
BgL_tmpz00_7970 = BgL_arg1363z00_1046
; }  else 
{ 
obj_t BgL_auxz00_7973;
BgL_auxz00_7973 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)19404)), BGl_string5295z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1363z00_1046); 
FAILURE(BgL_auxz00_7973,BFALSE,BFALSE);} 
BgL_tmpz00_7969 = 
BELONG_TO_LONG(BgL_tmpz00_7970); } 
BgL_arg1362z00_1045 = 
(BGL_LONGLONG_T)(BgL_tmpz00_7969); } } 
{ /* Ieee/number.scm 510 */
uint64_t BgL_res3398z00_3168;
BgL_res3398z00_3168 = 
(uint64_t)(BgL_arg1362z00_1045); 
BgL_arg1361z00_1044 = BgL_res3398z00_3168; } } 
{ /* Ieee/number.scm 510 */
uint64_t BgL_n2z00_3170;
BgL_n2z00_3170 = 
BGL_BINT64_TO_INT64(BgL_yz00_34); 
return 
(BgL_arg1361z00_1044<BgL_n2z00_3170);} }  else 
{ /* Ieee/number.scm 510 */
if(
BIGNUMP(BgL_yz00_34))
{ /* Ieee/number.scm 510 */
obj_t BgL_arg1365z00_1048;
{ /* Ieee/number.scm 510 */
obj_t BgL_arg1367z00_1049;
BgL_arg1367z00_1049 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_33); 
{ /* Ieee/number.scm 510 */
long BgL_xz00_3173;
{ /* Ieee/number.scm 510 */
obj_t BgL_tmpz00_7985;
if(
ELONGP(BgL_arg1367z00_1049))
{ /* Ieee/number.scm 510 */
BgL_tmpz00_7985 = BgL_arg1367z00_1049
; }  else 
{ 
obj_t BgL_auxz00_7988;
BgL_auxz00_7988 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)19404)), BGl_string5295z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1367z00_1049); 
FAILURE(BgL_auxz00_7988,BFALSE,BFALSE);} 
BgL_xz00_3173 = 
BELONG_TO_LONG(BgL_tmpz00_7985); } 
BgL_arg1365z00_1048 = 
bgl_long_to_bignum(BgL_xz00_3173); } } 
return 
(
(long)(
bgl_bignum_cmp(BgL_arg1365z00_1048, BgL_yz00_34))<((long)0));}  else 
{ /* Ieee/number.scm 510 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_string5296z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_34));} } } } } } }  else 
{ /* Ieee/number.scm 510 */
if(
LLONGP(BgL_xz00_33))
{ /* Ieee/number.scm 510 */
if(
INTEGERP(BgL_yz00_34))
{ /* Ieee/number.scm 510 */
BGL_LONGLONG_T BgL_arg1371z00_1053;
{ /* Ieee/number.scm 510 */
BGL_LONGLONG_T BgL_res3406z00_3184;
{ /* Ieee/number.scm 510 */
long BgL_tmpz00_8003;
BgL_tmpz00_8003 = 
(long)CINT(BgL_yz00_34); 
BgL_res3406z00_3184 = 
LONG_TO_LLONG(BgL_tmpz00_8003); } 
BgL_arg1371z00_1053 = BgL_res3406z00_3184; } 
return 
(
BLLONG_TO_LLONG(BgL_xz00_33)<BgL_arg1371z00_1053);}  else 
{ /* Ieee/number.scm 510 */
if(
REALP(BgL_yz00_34))
{ /* Ieee/number.scm 510 */
return 
(
(double)(
BLLONG_TO_LLONG(BgL_xz00_33))<
REAL_TO_DOUBLE(BgL_yz00_34));}  else 
{ /* Ieee/number.scm 510 */
if(
LLONGP(BgL_yz00_34))
{ /* Ieee/number.scm 510 */
return 
(
BLLONG_TO_LLONG(BgL_xz00_33)<
BLLONG_TO_LLONG(BgL_yz00_34));}  else 
{ /* Ieee/number.scm 510 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_34))
{ /* Ieee/number.scm 510 */
BGL_LONGLONG_T BgL_arg1379z00_1061;
{ /* Ieee/number.scm 510 */
obj_t BgL_arg1380z00_1062;
BgL_arg1380z00_1062 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_34); 
{ /* Ieee/number.scm 510 */
long BgL_tmpz00_8022;
{ /* Ieee/number.scm 510 */
obj_t BgL_tmpz00_8023;
if(
ELONGP(BgL_arg1380z00_1062))
{ /* Ieee/number.scm 510 */
BgL_tmpz00_8023 = BgL_arg1380z00_1062
; }  else 
{ 
obj_t BgL_auxz00_8026;
BgL_auxz00_8026 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)19404)), BGl_string5295z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1380z00_1062); 
FAILURE(BgL_auxz00_8026,BFALSE,BFALSE);} 
BgL_tmpz00_8022 = 
BELONG_TO_LONG(BgL_tmpz00_8023); } 
BgL_arg1379z00_1061 = 
(BGL_LONGLONG_T)(BgL_tmpz00_8022); } } 
return 
(
BLLONG_TO_LLONG(BgL_xz00_33)<BgL_arg1379z00_1061);}  else 
{ /* Ieee/number.scm 510 */
if(
BIGNUMP(BgL_yz00_34))
{ /* Ieee/number.scm 510 */
return 
(
(long)(
bgl_bignum_cmp(
bgl_llong_to_bignum(
BLLONG_TO_LLONG(BgL_xz00_33)), BgL_yz00_34))<((long)0));}  else 
{ /* Ieee/number.scm 510 */
if(
BGL_UINT64P(BgL_yz00_34))
{ /* Ieee/number.scm 510 */
uint64_t BgL_arg1385z00_1067;
{ /* Ieee/number.scm 510 */
uint64_t BgL_res3418z00_3210;
{ /* Ieee/number.scm 510 */
BGL_LONGLONG_T BgL_tmpz00_8043;
BgL_tmpz00_8043 = 
BLLONG_TO_LLONG(BgL_xz00_33); 
BgL_res3418z00_3210 = 
(uint64_t)(BgL_tmpz00_8043); } 
BgL_arg1385z00_1067 = BgL_res3418z00_3210; } 
{ /* Ieee/number.scm 510 */
uint64_t BgL_n2z00_3212;
BgL_n2z00_3212 = 
BGL_BINT64_TO_INT64(BgL_yz00_34); 
return 
(BgL_arg1385z00_1067<BgL_n2z00_3212);} }  else 
{ /* Ieee/number.scm 510 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_string5296z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_34));} } } } } } }  else 
{ /* Ieee/number.scm 510 */
if(
BGL_UINT64P(BgL_xz00_33))
{ /* Ieee/number.scm 510 */
if(
INTEGERP(BgL_yz00_34))
{ /* Ieee/number.scm 510 */
uint64_t BgL_arg1388z00_1070;
{ /* Ieee/number.scm 510 */
uint64_t BgL_res3422z00_3217;
{ /* Ieee/number.scm 510 */
long BgL_tmpz00_8054;
BgL_tmpz00_8054 = 
(long)CINT(BgL_yz00_34); 
BgL_res3422z00_3217 = 
(uint64_t)(BgL_tmpz00_8054); } 
BgL_arg1388z00_1070 = BgL_res3422z00_3217; } 
{ /* Ieee/number.scm 510 */
uint64_t BgL_n1z00_3218;
BgL_n1z00_3218 = 
BGL_BINT64_TO_INT64(BgL_xz00_33); 
return 
(BgL_n1z00_3218<BgL_arg1388z00_1070);} }  else 
{ /* Ieee/number.scm 510 */
if(
BGL_UINT64P(BgL_yz00_34))
{ /* Ieee/number.scm 510 */
uint64_t BgL_n1z00_3222;uint64_t BgL_n2z00_3223;
BgL_n1z00_3222 = 
BGL_BINT64_TO_INT64(BgL_xz00_33); 
BgL_n2z00_3223 = 
BGL_BINT64_TO_INT64(BgL_yz00_34); 
return 
(BgL_n1z00_3222<BgL_n2z00_3223);}  else 
{ /* Ieee/number.scm 510 */
if(
REALP(BgL_yz00_34))
{ /* Ieee/number.scm 510 */
double BgL_arg1391z00_1073;
{ /* Ieee/number.scm 510 */
uint64_t BgL_tmpz00_8066;
BgL_tmpz00_8066 = 
BGL_BINT64_TO_INT64(BgL_xz00_33); 
BgL_arg1391z00_1073 = 
(double)(BgL_tmpz00_8066); } 
return 
(BgL_arg1391z00_1073<
REAL_TO_DOUBLE(BgL_yz00_34));}  else 
{ /* Ieee/number.scm 510 */
if(
LLONGP(BgL_yz00_34))
{ /* Ieee/number.scm 510 */
uint64_t BgL_arg1393z00_1075;
{ /* Ieee/number.scm 510 */
uint64_t BgL_res3429z00_3231;
{ /* Ieee/number.scm 510 */
BGL_LONGLONG_T BgL_tmpz00_8073;
BgL_tmpz00_8073 = 
BLLONG_TO_LLONG(BgL_yz00_34); 
BgL_res3429z00_3231 = 
(uint64_t)(BgL_tmpz00_8073); } 
BgL_arg1393z00_1075 = BgL_res3429z00_3231; } 
{ /* Ieee/number.scm 510 */
uint64_t BgL_n1z00_3232;
BgL_n1z00_3232 = 
BGL_BINT64_TO_INT64(BgL_xz00_33); 
return 
(BgL_n1z00_3232<BgL_arg1393z00_1075);} }  else 
{ /* Ieee/number.scm 510 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_34))
{ /* Ieee/number.scm 510 */
uint64_t BgL_arg1396z00_1078;
{ /* Ieee/number.scm 510 */
BGL_LONGLONG_T BgL_arg1397z00_1079;
{ /* Ieee/number.scm 510 */
obj_t BgL_arg1398z00_1080;
BgL_arg1398z00_1080 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_34); 
{ /* Ieee/number.scm 510 */
long BgL_tmpz00_8081;
{ /* Ieee/number.scm 510 */
obj_t BgL_tmpz00_8082;
if(
ELONGP(BgL_arg1398z00_1080))
{ /* Ieee/number.scm 510 */
BgL_tmpz00_8082 = BgL_arg1398z00_1080
; }  else 
{ 
obj_t BgL_auxz00_8085;
BgL_auxz00_8085 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)19404)), BGl_string5295z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1398z00_1080); 
FAILURE(BgL_auxz00_8085,BFALSE,BFALSE);} 
BgL_tmpz00_8081 = 
BELONG_TO_LONG(BgL_tmpz00_8082); } 
BgL_arg1397z00_1079 = 
(BGL_LONGLONG_T)(BgL_tmpz00_8081); } } 
{ /* Ieee/number.scm 510 */
uint64_t BgL_res3431z00_3236;
BgL_res3431z00_3236 = 
(uint64_t)(BgL_arg1397z00_1079); 
BgL_arg1396z00_1078 = BgL_res3431z00_3236; } } 
{ /* Ieee/number.scm 510 */
uint64_t BgL_n1z00_3237;
BgL_n1z00_3237 = 
BGL_BINT64_TO_INT64(BgL_xz00_33); 
return 
(BgL_n1z00_3237<BgL_arg1396z00_1078);} }  else 
{ /* Ieee/number.scm 510 */
if(
BIGNUMP(BgL_yz00_34))
{ /* Ieee/number.scm 510 */
long BgL_n1z00_3244;
BgL_n1z00_3244 = 
(long)(
bgl_bignum_cmp(
bgl_uint64_to_bignum(
BGL_BINT64_TO_INT64(BgL_xz00_33)), BgL_yz00_34)); 
return 
(BgL_n1z00_3244<((long)0));}  else 
{ /* Ieee/number.scm 510 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_string5296z00zz__r4_numbers_6_5z00, BGl_string5292z00zz__r4_numbers_6_5z00, BgL_yz00_34));} } } } } } }  else 
{ /* Ieee/number.scm 510 */
if(
BIGNUMP(BgL_xz00_33))
{ /* Ieee/number.scm 510 */
if(
BIGNUMP(BgL_yz00_34))
{ /* Ieee/number.scm 510 */
return 
(
(long)(
bgl_bignum_cmp(BgL_xz00_33, BgL_yz00_34))<((long)0));}  else 
{ /* Ieee/number.scm 510 */
if(
INTEGERP(BgL_yz00_34))
{ /* Ieee/number.scm 510 */
return 
(
(long)(
bgl_bignum_cmp(BgL_xz00_33, 
bgl_long_to_bignum(
(long)CINT(BgL_yz00_34))))<((long)0));}  else 
{ /* Ieee/number.scm 510 */
if(
REALP(BgL_yz00_34))
{ /* Ieee/number.scm 510 */
return 
(
bgl_bignum_to_flonum(BgL_xz00_33)<
REAL_TO_DOUBLE(BgL_yz00_34));}  else 
{ /* Ieee/number.scm 510 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_34))
{ /* Ieee/number.scm 510 */
obj_t BgL_arg1409z00_1090;
{ /* Ieee/number.scm 510 */
obj_t BgL_arg1410z00_1091;
BgL_arg1410z00_1091 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_34); 
{ /* Ieee/number.scm 510 */
long BgL_xz00_3270;
{ /* Ieee/number.scm 510 */
obj_t BgL_tmpz00_8125;
if(
ELONGP(BgL_arg1410z00_1091))
{ /* Ieee/number.scm 510 */
BgL_tmpz00_8125 = BgL_arg1410z00_1091
; }  else 
{ 
obj_t BgL_auxz00_8128;
BgL_auxz00_8128 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)19404)), BGl_string5295z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1410z00_1091); 
FAILURE(BgL_auxz00_8128,BFALSE,BFALSE);} 
BgL_xz00_3270 = 
BELONG_TO_LONG(BgL_tmpz00_8125); } 
BgL_arg1409z00_1090 = 
bgl_long_to_bignum(BgL_xz00_3270); } } 
return 
(
(long)(
bgl_bignum_cmp(BgL_xz00_33, BgL_arg1409z00_1090))<((long)0));}  else 
{ /* Ieee/number.scm 510 */
if(
LLONGP(BgL_yz00_34))
{ /* Ieee/number.scm 510 */
return 
(
(long)(
bgl_bignum_cmp(BgL_xz00_33, 
bgl_llong_to_bignum(
BLLONG_TO_LLONG(BgL_yz00_34))))<((long)0));}  else 
{ /* Ieee/number.scm 510 */
if(
BGL_UINT64P(BgL_yz00_34))
{ /* Ieee/number.scm 510 */
long BgL_n1z00_3291;
BgL_n1z00_3291 = 
(long)(
bgl_bignum_cmp(BgL_xz00_33, 
bgl_uint64_to_bignum(
BGL_BINT64_TO_INT64(BgL_yz00_34)))); 
return 
(BgL_n1z00_3291<((long)0));}  else 
{ /* Ieee/number.scm 510 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_string5296z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_34));} } } } } } }  else 
{ /* Ieee/number.scm 510 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_string5296z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_xz00_33));} } } } } } } 

}



/* &2< */
obj_t BGl_z622zc3za1zz__r4_numbers_6_5z00(obj_t BgL_envz00_6491, obj_t BgL_xz00_6492, obj_t BgL_yz00_6493)
{
{ /* Ieee/number.scm 509 */
return 
BBOOL(
BGl_2zc3zc3zz__r4_numbers_6_5z00(BgL_xz00_6492, BgL_yz00_6493));} 

}



/* < */
BGL_EXPORTED_DEF bool_t BGl_zc3zc3zz__r4_numbers_6_5z00(obj_t BgL_xz00_35, obj_t BgL_yz00_36, obj_t BgL_za7za7_37)
{
{ /* Ieee/number.scm 515 */
{ 
obj_t BgL_xz00_1099;obj_t BgL_za7za7_1100;
if(
BGl_2zc3zc3zz__r4_numbers_6_5z00(BgL_xz00_35, BgL_yz00_36))
{ /* Ieee/number.scm 521 */
BgL_xz00_1099 = BgL_yz00_36; 
BgL_za7za7_1100 = BgL_za7za7_37; 
BgL_zc3z04anonymousza31416ze3z87_1101:
if(
NULLP(BgL_za7za7_1100))
{ /* Ieee/number.scm 518 */
return ((bool_t)1);}  else 
{ /* Ieee/number.scm 519 */
bool_t BgL_test5687z00_8161;
{ /* Ieee/number.scm 519 */
obj_t BgL_arg1422z00_1107;
{ /* Ieee/number.scm 519 */
obj_t BgL_pairz00_3295;
if(
PAIRP(BgL_za7za7_1100))
{ /* Ieee/number.scm 519 */
BgL_pairz00_3295 = BgL_za7za7_1100; }  else 
{ 
obj_t BgL_auxz00_8164;
BgL_auxz00_8164 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)19727)), BGl_string5297z00zz__r4_numbers_6_5z00, BGl_string5294z00zz__r4_numbers_6_5z00, BgL_za7za7_1100); 
FAILURE(BgL_auxz00_8164,BFALSE,BFALSE);} 
BgL_arg1422z00_1107 = 
CAR(BgL_pairz00_3295); } 
BgL_test5687z00_8161 = 
BGl_2zc3zc3zz__r4_numbers_6_5z00(BgL_xz00_1099, BgL_arg1422z00_1107); } 
if(BgL_test5687z00_8161)
{ 
obj_t BgL_za7za7_8178;obj_t BgL_xz00_8170;
{ /* Ieee/number.scm 519 */
obj_t BgL_pairz00_3296;
if(
PAIRP(BgL_za7za7_1100))
{ /* Ieee/number.scm 519 */
BgL_pairz00_3296 = BgL_za7za7_1100; }  else 
{ 
obj_t BgL_auxz00_8173;
BgL_auxz00_8173 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)19744)), BGl_string5297z00zz__r4_numbers_6_5z00, BGl_string5294z00zz__r4_numbers_6_5z00, BgL_za7za7_1100); 
FAILURE(BgL_auxz00_8173,BFALSE,BFALSE);} 
BgL_xz00_8170 = 
CAR(BgL_pairz00_3296); } 
{ /* Ieee/number.scm 519 */
obj_t BgL_pairz00_3297;
if(
PAIRP(BgL_za7za7_1100))
{ /* Ieee/number.scm 519 */
BgL_pairz00_3297 = BgL_za7za7_1100; }  else 
{ 
obj_t BgL_auxz00_8181;
BgL_auxz00_8181 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)19752)), BGl_string5297z00zz__r4_numbers_6_5z00, BGl_string5294z00zz__r4_numbers_6_5z00, BgL_za7za7_1100); 
FAILURE(BgL_auxz00_8181,BFALSE,BFALSE);} 
BgL_za7za7_8178 = 
CDR(BgL_pairz00_3297); } 
BgL_za7za7_1100 = BgL_za7za7_8178; 
BgL_xz00_1099 = BgL_xz00_8170; 
goto BgL_zc3z04anonymousza31416ze3z87_1101;}  else 
{ /* Ieee/number.scm 519 */
return ((bool_t)0);} } }  else 
{ /* Ieee/number.scm 521 */
return ((bool_t)0);} } } 

}



/* &< */
obj_t BGl_z62zc3za1zz__r4_numbers_6_5z00(obj_t BgL_envz00_6494, obj_t BgL_xz00_6495, obj_t BgL_yz00_6496, obj_t BgL_za7za7_6497)
{
{ /* Ieee/number.scm 515 */
return 
BBOOL(
BGl_zc3zc3zz__r4_numbers_6_5z00(BgL_xz00_6495, BgL_yz00_6496, BgL_za7za7_6497));} 

}



/* 2> */
BGL_EXPORTED_DEF bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t BgL_xz00_38, obj_t BgL_yz00_39)
{
{ /* Ieee/number.scm 526 */
if(
INTEGERP(BgL_xz00_38))
{ /* Ieee/number.scm 527 */
if(
INTEGERP(BgL_yz00_39))
{ /* Ieee/number.scm 527 */
return 
(
(long)CINT(BgL_xz00_38)>
(long)CINT(BgL_yz00_39));}  else 
{ /* Ieee/number.scm 527 */
if(
REALP(BgL_yz00_39))
{ /* Ieee/number.scm 527 */
return 
(
(double)(
(long)CINT(BgL_xz00_38))>
REAL_TO_DOUBLE(BgL_yz00_39));}  else 
{ /* Ieee/number.scm 527 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_39))
{ /* Ieee/number.scm 527 */
long BgL_arg1428z00_1114;obj_t BgL_arg1429z00_1115;
{ /* Ieee/number.scm 527 */
long BgL_res3463z00_3308;
{ /* Ieee/number.scm 527 */
long BgL_tmpz00_8203;
BgL_tmpz00_8203 = 
(long)CINT(BgL_xz00_38); 
BgL_res3463z00_3308 = 
(long)(BgL_tmpz00_8203); } 
BgL_arg1428z00_1114 = BgL_res3463z00_3308; } 
BgL_arg1429z00_1115 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_39); 
{ /* Ieee/number.scm 527 */
long BgL_n2z00_3310;
{ /* Ieee/number.scm 527 */
obj_t BgL_tmpz00_8207;
if(
ELONGP(BgL_arg1429z00_1115))
{ /* Ieee/number.scm 527 */
BgL_tmpz00_8207 = BgL_arg1429z00_1115
; }  else 
{ 
obj_t BgL_auxz00_8210;
BgL_auxz00_8210 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)20049)), BGl_string5298z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1429z00_1115); 
FAILURE(BgL_auxz00_8210,BFALSE,BFALSE);} 
BgL_n2z00_3310 = 
BELONG_TO_LONG(BgL_tmpz00_8207); } 
return 
(BgL_arg1428z00_1114>BgL_n2z00_3310);} }  else 
{ /* Ieee/number.scm 527 */
if(
LLONGP(BgL_yz00_39))
{ /* Ieee/number.scm 527 */
BGL_LONGLONG_T BgL_arg1431z00_1117;
{ /* Ieee/number.scm 527 */
BGL_LONGLONG_T BgL_res3466z00_3314;
{ /* Ieee/number.scm 527 */
long BgL_tmpz00_8218;
BgL_tmpz00_8218 = 
(long)CINT(BgL_xz00_38); 
BgL_res3466z00_3314 = 
LONG_TO_LLONG(BgL_tmpz00_8218); } 
BgL_arg1431z00_1117 = BgL_res3466z00_3314; } 
return 
(BgL_arg1431z00_1117>
BLLONG_TO_LLONG(BgL_yz00_39));}  else 
{ /* Ieee/number.scm 527 */
if(
BGL_UINT64P(BgL_yz00_39))
{ /* Ieee/number.scm 527 */
uint64_t BgL_arg1434z00_1120;
{ /* Ieee/number.scm 527 */
BGL_LONGLONG_T BgL_arg1435z00_1121;
{ /* Ieee/number.scm 527 */
BGL_LONGLONG_T BgL_res3469z00_3320;
{ /* Ieee/number.scm 527 */
long BgL_tmpz00_8225;
BgL_tmpz00_8225 = 
(long)CINT(BgL_xz00_38); 
BgL_res3469z00_3320 = 
LONG_TO_LLONG(BgL_tmpz00_8225); } 
BgL_arg1435z00_1121 = BgL_res3469z00_3320; } 
{ /* Ieee/number.scm 527 */
uint64_t BgL_res3470z00_3322;
BgL_res3470z00_3322 = 
(uint64_t)(BgL_arg1435z00_1121); 
BgL_arg1434z00_1120 = BgL_res3470z00_3322; } } 
{ /* Ieee/number.scm 527 */
uint64_t BgL_n2z00_3324;
BgL_n2z00_3324 = 
BGL_BINT64_TO_INT64(BgL_yz00_39); 
return 
(BgL_arg1434z00_1120>BgL_n2z00_3324);} }  else 
{ /* Ieee/number.scm 527 */
if(
BIGNUMP(BgL_yz00_39))
{ /* Ieee/number.scm 527 */
return 
(
(long)(
bgl_bignum_cmp(
bgl_long_to_bignum(
(long)CINT(BgL_xz00_38)), BgL_yz00_39))>((long)0));}  else 
{ /* Ieee/number.scm 527 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_string5299z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_39));} } } } } } }  else 
{ /* Ieee/number.scm 527 */
if(
REALP(BgL_xz00_38))
{ /* Ieee/number.scm 527 */
if(
REALP(BgL_yz00_39))
{ /* Ieee/number.scm 527 */
return 
(
REAL_TO_DOUBLE(BgL_xz00_38)>
REAL_TO_DOUBLE(BgL_yz00_39));}  else 
{ /* Ieee/number.scm 527 */
if(
INTEGERP(BgL_yz00_39))
{ /* Ieee/number.scm 527 */
return 
(
REAL_TO_DOUBLE(BgL_xz00_38)>
(double)(
(long)CINT(BgL_yz00_39)));}  else 
{ /* Ieee/number.scm 527 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_39))
{ /* Ieee/number.scm 527 */
double BgL_arg1443z00_1129;
{ /* Ieee/number.scm 527 */
obj_t BgL_arg1444z00_1130;
BgL_arg1444z00_1130 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_39); 
{ /* Ieee/number.scm 527 */
long BgL_tmpz00_8256;
{ /* Ieee/number.scm 527 */
obj_t BgL_tmpz00_8257;
if(
ELONGP(BgL_arg1444z00_1130))
{ /* Ieee/number.scm 527 */
BgL_tmpz00_8257 = BgL_arg1444z00_1130
; }  else 
{ 
obj_t BgL_auxz00_8260;
BgL_auxz00_8260 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)20049)), BGl_string5298z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1444z00_1130); 
FAILURE(BgL_auxz00_8260,BFALSE,BFALSE);} 
BgL_tmpz00_8256 = 
BELONG_TO_LONG(BgL_tmpz00_8257); } 
BgL_arg1443z00_1129 = 
(double)(BgL_tmpz00_8256); } } 
return 
(
REAL_TO_DOUBLE(BgL_xz00_38)>BgL_arg1443z00_1129);}  else 
{ /* Ieee/number.scm 527 */
if(
LLONGP(BgL_yz00_39))
{ /* Ieee/number.scm 527 */
return 
(
REAL_TO_DOUBLE(BgL_xz00_38)>
(double)(
BLLONG_TO_LLONG(BgL_yz00_39)));}  else 
{ /* Ieee/number.scm 527 */
if(
BGL_UINT64P(BgL_yz00_39))
{ /* Ieee/number.scm 527 */
double BgL_arg1451z00_1135;
{ /* Ieee/number.scm 527 */
double BgL_res3485z00_3353;
{ /* Ieee/number.scm 527 */
uint64_t BgL_xz00_3352;
BgL_xz00_3352 = 
BGL_BINT64_TO_INT64(BgL_yz00_39); 
BgL_res3485z00_3353 = 
(double)(BgL_xz00_3352); } 
BgL_arg1451z00_1135 = BgL_res3485z00_3353; } 
return 
(
REAL_TO_DOUBLE(BgL_xz00_38)>BgL_arg1451z00_1135);}  else 
{ /* Ieee/number.scm 527 */
if(
BIGNUMP(BgL_yz00_39))
{ /* Ieee/number.scm 527 */
return 
(
REAL_TO_DOUBLE(BgL_xz00_38)>
bgl_bignum_to_flonum(BgL_yz00_39));}  else 
{ /* Ieee/number.scm 527 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_string5299z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_39));} } } } } } }  else 
{ /* Ieee/number.scm 527 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_xz00_38))
{ /* Ieee/number.scm 527 */
if(
INTEGERP(BgL_yz00_39))
{ /* Ieee/number.scm 527 */
obj_t BgL_arg1456z00_1140;long BgL_arg1457z00_1141;
BgL_arg1456z00_1140 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_38); 
{ /* Ieee/number.scm 527 */
long BgL_res3491z00_3365;
{ /* Ieee/number.scm 527 */
long BgL_tmpz00_8292;
BgL_tmpz00_8292 = 
(long)CINT(BgL_yz00_39); 
BgL_res3491z00_3365 = 
(long)(BgL_tmpz00_8292); } 
BgL_arg1457z00_1141 = BgL_res3491z00_3365; } 
{ /* Ieee/number.scm 527 */
long BgL_n1z00_3366;
{ /* Ieee/number.scm 527 */
obj_t BgL_tmpz00_8295;
if(
ELONGP(BgL_arg1456z00_1140))
{ /* Ieee/number.scm 527 */
BgL_tmpz00_8295 = BgL_arg1456z00_1140
; }  else 
{ 
obj_t BgL_auxz00_8298;
BgL_auxz00_8298 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)20049)), BGl_string5298z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1456z00_1140); 
FAILURE(BgL_auxz00_8298,BFALSE,BFALSE);} 
BgL_n1z00_3366 = 
BELONG_TO_LONG(BgL_tmpz00_8295); } 
return 
(BgL_n1z00_3366>BgL_arg1457z00_1141);} }  else 
{ /* Ieee/number.scm 527 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_39))
{ /* Ieee/number.scm 527 */
obj_t BgL_arg1459z00_1143;obj_t BgL_arg1460z00_1144;
BgL_arg1459z00_1143 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_38); 
BgL_arg1460z00_1144 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_39); 
{ /* Ieee/number.scm 527 */
long BgL_n1z00_3369;long BgL_n2z00_3370;
{ /* Ieee/number.scm 527 */
obj_t BgL_tmpz00_8308;
if(
ELONGP(BgL_arg1459z00_1143))
{ /* Ieee/number.scm 527 */
BgL_tmpz00_8308 = BgL_arg1459z00_1143
; }  else 
{ 
obj_t BgL_auxz00_8311;
BgL_auxz00_8311 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)20049)), BGl_string5298z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1459z00_1143); 
FAILURE(BgL_auxz00_8311,BFALSE,BFALSE);} 
BgL_n1z00_3369 = 
BELONG_TO_LONG(BgL_tmpz00_8308); } 
{ /* Ieee/number.scm 527 */
obj_t BgL_tmpz00_8316;
if(
ELONGP(BgL_arg1460z00_1144))
{ /* Ieee/number.scm 527 */
BgL_tmpz00_8316 = BgL_arg1460z00_1144
; }  else 
{ 
obj_t BgL_auxz00_8319;
BgL_auxz00_8319 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)20049)), BGl_string5298z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1460z00_1144); 
FAILURE(BgL_auxz00_8319,BFALSE,BFALSE);} 
BgL_n2z00_3370 = 
BELONG_TO_LONG(BgL_tmpz00_8316); } 
return 
(BgL_n1z00_3369>BgL_n2z00_3370);} }  else 
{ /* Ieee/number.scm 527 */
if(
REALP(BgL_yz00_39))
{ /* Ieee/number.scm 527 */
double BgL_arg1462z00_1146;
{ /* Ieee/number.scm 527 */
obj_t BgL_arg1463z00_1147;
BgL_arg1463z00_1147 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_38); 
{ /* Ieee/number.scm 527 */
long BgL_tmpz00_8328;
{ /* Ieee/number.scm 527 */
obj_t BgL_tmpz00_8329;
if(
ELONGP(BgL_arg1463z00_1147))
{ /* Ieee/number.scm 527 */
BgL_tmpz00_8329 = BgL_arg1463z00_1147
; }  else 
{ 
obj_t BgL_auxz00_8332;
BgL_auxz00_8332 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)20049)), BGl_string5298z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1463z00_1147); 
FAILURE(BgL_auxz00_8332,BFALSE,BFALSE);} 
BgL_tmpz00_8328 = 
BELONG_TO_LONG(BgL_tmpz00_8329); } 
BgL_arg1462z00_1146 = 
(double)(BgL_tmpz00_8328); } } 
return 
(BgL_arg1462z00_1146>
REAL_TO_DOUBLE(BgL_yz00_39));}  else 
{ /* Ieee/number.scm 527 */
if(
LLONGP(BgL_yz00_39))
{ /* Ieee/number.scm 527 */
BGL_LONGLONG_T BgL_arg1465z00_1149;
{ /* Ieee/number.scm 527 */
obj_t BgL_arg1467z00_1151;
BgL_arg1467z00_1151 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_38); 
{ /* Ieee/number.scm 527 */
long BgL_tmpz00_8343;
{ /* Ieee/number.scm 527 */
obj_t BgL_tmpz00_8344;
if(
ELONGP(BgL_arg1467z00_1151))
{ /* Ieee/number.scm 527 */
BgL_tmpz00_8344 = BgL_arg1467z00_1151
; }  else 
{ 
obj_t BgL_auxz00_8347;
BgL_auxz00_8347 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)20049)), BGl_string5298z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1467z00_1151); 
FAILURE(BgL_auxz00_8347,BFALSE,BFALSE);} 
BgL_tmpz00_8343 = 
BELONG_TO_LONG(BgL_tmpz00_8344); } 
BgL_arg1465z00_1149 = 
(BGL_LONGLONG_T)(BgL_tmpz00_8343); } } 
return 
(BgL_arg1465z00_1149>
BLLONG_TO_LLONG(BgL_yz00_39));}  else 
{ /* Ieee/number.scm 527 */
if(
BGL_UINT64P(BgL_yz00_39))
{ /* Ieee/number.scm 527 */
uint64_t BgL_arg1469z00_1153;
{ /* Ieee/number.scm 527 */
BGL_LONGLONG_T BgL_arg1470z00_1154;
{ /* Ieee/number.scm 527 */
obj_t BgL_arg1471z00_1155;
BgL_arg1471z00_1155 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_38); 
{ /* Ieee/number.scm 527 */
long BgL_tmpz00_8358;
{ /* Ieee/number.scm 527 */
obj_t BgL_tmpz00_8359;
if(
ELONGP(BgL_arg1471z00_1155))
{ /* Ieee/number.scm 527 */
BgL_tmpz00_8359 = BgL_arg1471z00_1155
; }  else 
{ 
obj_t BgL_auxz00_8362;
BgL_auxz00_8362 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)20049)), BGl_string5298z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1471z00_1155); 
FAILURE(BgL_auxz00_8362,BFALSE,BFALSE);} 
BgL_tmpz00_8358 = 
BELONG_TO_LONG(BgL_tmpz00_8359); } 
BgL_arg1470z00_1154 = 
(BGL_LONGLONG_T)(BgL_tmpz00_8358); } } 
{ /* Ieee/number.scm 527 */
uint64_t BgL_res3499z00_3382;
BgL_res3499z00_3382 = 
(uint64_t)(BgL_arg1470z00_1154); 
BgL_arg1469z00_1153 = BgL_res3499z00_3382; } } 
{ /* Ieee/number.scm 527 */
uint64_t BgL_n2z00_3384;
BgL_n2z00_3384 = 
BGL_BINT64_TO_INT64(BgL_yz00_39); 
return 
(BgL_arg1469z00_1153>BgL_n2z00_3384);} }  else 
{ /* Ieee/number.scm 527 */
if(
BIGNUMP(BgL_yz00_39))
{ /* Ieee/number.scm 527 */
obj_t BgL_arg1473z00_1157;
{ /* Ieee/number.scm 527 */
obj_t BgL_arg1474z00_1158;
BgL_arg1474z00_1158 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_38); 
{ /* Ieee/number.scm 527 */
long BgL_xz00_3387;
{ /* Ieee/number.scm 527 */
obj_t BgL_tmpz00_8374;
if(
ELONGP(BgL_arg1474z00_1158))
{ /* Ieee/number.scm 527 */
BgL_tmpz00_8374 = BgL_arg1474z00_1158
; }  else 
{ 
obj_t BgL_auxz00_8377;
BgL_auxz00_8377 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)20049)), BGl_string5298z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1474z00_1158); 
FAILURE(BgL_auxz00_8377,BFALSE,BFALSE);} 
BgL_xz00_3387 = 
BELONG_TO_LONG(BgL_tmpz00_8374); } 
BgL_arg1473z00_1157 = 
bgl_long_to_bignum(BgL_xz00_3387); } } 
return 
(
(long)(
bgl_bignum_cmp(BgL_arg1473z00_1157, BgL_yz00_39))>((long)0));}  else 
{ /* Ieee/number.scm 527 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_string5299z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_39));} } } } } } }  else 
{ /* Ieee/number.scm 527 */
if(
LLONGP(BgL_xz00_38))
{ /* Ieee/number.scm 527 */
if(
INTEGERP(BgL_yz00_39))
{ /* Ieee/number.scm 527 */
BGL_LONGLONG_T BgL_arg1478z00_1162;
{ /* Ieee/number.scm 527 */
BGL_LONGLONG_T BgL_res3507z00_3398;
{ /* Ieee/number.scm 527 */
long BgL_tmpz00_8392;
BgL_tmpz00_8392 = 
(long)CINT(BgL_yz00_39); 
BgL_res3507z00_3398 = 
LONG_TO_LLONG(BgL_tmpz00_8392); } 
BgL_arg1478z00_1162 = BgL_res3507z00_3398; } 
return 
(
BLLONG_TO_LLONG(BgL_xz00_38)>BgL_arg1478z00_1162);}  else 
{ /* Ieee/number.scm 527 */
if(
REALP(BgL_yz00_39))
{ /* Ieee/number.scm 527 */
return 
(
(double)(
BLLONG_TO_LLONG(BgL_xz00_38))>
REAL_TO_DOUBLE(BgL_yz00_39));}  else 
{ /* Ieee/number.scm 527 */
if(
LLONGP(BgL_yz00_39))
{ /* Ieee/number.scm 527 */
return 
(
BLLONG_TO_LLONG(BgL_xz00_38)>
BLLONG_TO_LLONG(BgL_yz00_39));}  else 
{ /* Ieee/number.scm 527 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_39))
{ /* Ieee/number.scm 527 */
BGL_LONGLONG_T BgL_arg1487z00_1170;
{ /* Ieee/number.scm 527 */
obj_t BgL_arg1489z00_1171;
BgL_arg1489z00_1171 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_39); 
{ /* Ieee/number.scm 527 */
long BgL_tmpz00_8411;
{ /* Ieee/number.scm 527 */
obj_t BgL_tmpz00_8412;
if(
ELONGP(BgL_arg1489z00_1171))
{ /* Ieee/number.scm 527 */
BgL_tmpz00_8412 = BgL_arg1489z00_1171
; }  else 
{ 
obj_t BgL_auxz00_8415;
BgL_auxz00_8415 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)20049)), BGl_string5298z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1489z00_1171); 
FAILURE(BgL_auxz00_8415,BFALSE,BFALSE);} 
BgL_tmpz00_8411 = 
BELONG_TO_LONG(BgL_tmpz00_8412); } 
BgL_arg1487z00_1170 = 
(BGL_LONGLONG_T)(BgL_tmpz00_8411); } } 
return 
(
BLLONG_TO_LLONG(BgL_xz00_38)>BgL_arg1487z00_1170);}  else 
{ /* Ieee/number.scm 527 */
if(
BIGNUMP(BgL_yz00_39))
{ /* Ieee/number.scm 527 */
return 
(
(long)(
bgl_bignum_cmp(
bgl_llong_to_bignum(
BLLONG_TO_LLONG(BgL_xz00_38)), BgL_yz00_39))>((long)0));}  else 
{ /* Ieee/number.scm 527 */
if(
BGL_UINT64P(BgL_yz00_39))
{ /* Ieee/number.scm 527 */
uint64_t BgL_arg1494z00_1176;
{ /* Ieee/number.scm 527 */
uint64_t BgL_res3519z00_3424;
{ /* Ieee/number.scm 527 */
BGL_LONGLONG_T BgL_tmpz00_8432;
BgL_tmpz00_8432 = 
BLLONG_TO_LLONG(BgL_xz00_38); 
BgL_res3519z00_3424 = 
(uint64_t)(BgL_tmpz00_8432); } 
BgL_arg1494z00_1176 = BgL_res3519z00_3424; } 
{ /* Ieee/number.scm 527 */
uint64_t BgL_n2z00_3426;
BgL_n2z00_3426 = 
BGL_BINT64_TO_INT64(BgL_yz00_39); 
return 
(BgL_arg1494z00_1176>BgL_n2z00_3426);} }  else 
{ /* Ieee/number.scm 527 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_string5299z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_39));} } } } } } }  else 
{ /* Ieee/number.scm 527 */
if(
BGL_UINT64P(BgL_xz00_38))
{ /* Ieee/number.scm 527 */
if(
INTEGERP(BgL_yz00_39))
{ /* Ieee/number.scm 527 */
uint64_t BgL_arg1497z00_1179;
{ /* Ieee/number.scm 527 */
uint64_t BgL_res3523z00_3431;
{ /* Ieee/number.scm 527 */
long BgL_tmpz00_8443;
BgL_tmpz00_8443 = 
(long)CINT(BgL_yz00_39); 
BgL_res3523z00_3431 = 
(uint64_t)(BgL_tmpz00_8443); } 
BgL_arg1497z00_1179 = BgL_res3523z00_3431; } 
{ /* Ieee/number.scm 527 */
uint64_t BgL_n1z00_3432;
BgL_n1z00_3432 = 
BGL_BINT64_TO_INT64(BgL_xz00_38); 
return 
(BgL_n1z00_3432>BgL_arg1497z00_1179);} }  else 
{ /* Ieee/number.scm 527 */
if(
BGL_UINT64P(BgL_yz00_39))
{ /* Ieee/number.scm 527 */
uint64_t BgL_n1z00_3436;uint64_t BgL_n2z00_3437;
BgL_n1z00_3436 = 
BGL_BINT64_TO_INT64(BgL_xz00_38); 
BgL_n2z00_3437 = 
BGL_BINT64_TO_INT64(BgL_yz00_39); 
return 
(BgL_n1z00_3436>BgL_n2z00_3437);}  else 
{ /* Ieee/number.scm 527 */
if(
REALP(BgL_yz00_39))
{ /* Ieee/number.scm 527 */
double BgL_arg1500z00_1182;
{ /* Ieee/number.scm 527 */
uint64_t BgL_tmpz00_8455;
BgL_tmpz00_8455 = 
BGL_BINT64_TO_INT64(BgL_xz00_38); 
BgL_arg1500z00_1182 = 
(double)(BgL_tmpz00_8455); } 
return 
(BgL_arg1500z00_1182>
REAL_TO_DOUBLE(BgL_yz00_39));}  else 
{ /* Ieee/number.scm 527 */
if(
LLONGP(BgL_yz00_39))
{ /* Ieee/number.scm 527 */
uint64_t BgL_arg1502z00_1184;
{ /* Ieee/number.scm 527 */
uint64_t BgL_res3530z00_3445;
{ /* Ieee/number.scm 527 */
BGL_LONGLONG_T BgL_tmpz00_8462;
BgL_tmpz00_8462 = 
BLLONG_TO_LLONG(BgL_yz00_39); 
BgL_res3530z00_3445 = 
(uint64_t)(BgL_tmpz00_8462); } 
BgL_arg1502z00_1184 = BgL_res3530z00_3445; } 
{ /* Ieee/number.scm 527 */
uint64_t BgL_n1z00_3446;
BgL_n1z00_3446 = 
BGL_BINT64_TO_INT64(BgL_xz00_38); 
return 
(BgL_n1z00_3446>BgL_arg1502z00_1184);} }  else 
{ /* Ieee/number.scm 527 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_39))
{ /* Ieee/number.scm 527 */
uint64_t BgL_arg1507z00_1187;
{ /* Ieee/number.scm 527 */
BGL_LONGLONG_T BgL_arg1508z00_1188;
{ /* Ieee/number.scm 527 */
obj_t BgL_arg1509z00_1189;
BgL_arg1509z00_1189 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_39); 
{ /* Ieee/number.scm 527 */
long BgL_tmpz00_8470;
{ /* Ieee/number.scm 527 */
obj_t BgL_tmpz00_8471;
if(
ELONGP(BgL_arg1509z00_1189))
{ /* Ieee/number.scm 527 */
BgL_tmpz00_8471 = BgL_arg1509z00_1189
; }  else 
{ 
obj_t BgL_auxz00_8474;
BgL_auxz00_8474 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)20049)), BGl_string5298z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1509z00_1189); 
FAILURE(BgL_auxz00_8474,BFALSE,BFALSE);} 
BgL_tmpz00_8470 = 
BELONG_TO_LONG(BgL_tmpz00_8471); } 
BgL_arg1508z00_1188 = 
(BGL_LONGLONG_T)(BgL_tmpz00_8470); } } 
{ /* Ieee/number.scm 527 */
uint64_t BgL_res3532z00_3450;
BgL_res3532z00_3450 = 
(uint64_t)(BgL_arg1508z00_1188); 
BgL_arg1507z00_1187 = BgL_res3532z00_3450; } } 
{ /* Ieee/number.scm 527 */
uint64_t BgL_n1z00_3451;
BgL_n1z00_3451 = 
BGL_BINT64_TO_INT64(BgL_xz00_38); 
return 
(BgL_n1z00_3451>BgL_arg1507z00_1187);} }  else 
{ /* Ieee/number.scm 527 */
if(
BIGNUMP(BgL_yz00_39))
{ /* Ieee/number.scm 527 */
long BgL_n1z00_3458;
BgL_n1z00_3458 = 
(long)(
bgl_bignum_cmp(
bgl_uint64_to_bignum(
BGL_BINT64_TO_INT64(BgL_xz00_38)), BgL_yz00_39)); 
return 
(BgL_n1z00_3458>((long)0));}  else 
{ /* Ieee/number.scm 527 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_string5299z00zz__r4_numbers_6_5z00, BGl_string5292z00zz__r4_numbers_6_5z00, BgL_yz00_39));} } } } } } }  else 
{ /* Ieee/number.scm 527 */
if(
BIGNUMP(BgL_xz00_38))
{ /* Ieee/number.scm 527 */
if(
BIGNUMP(BgL_yz00_39))
{ /* Ieee/number.scm 527 */
return 
(
(long)(
bgl_bignum_cmp(BgL_xz00_38, BgL_yz00_39))>((long)0));}  else 
{ /* Ieee/number.scm 527 */
if(
INTEGERP(BgL_yz00_39))
{ /* Ieee/number.scm 527 */
return 
(
(long)(
bgl_bignum_cmp(BgL_xz00_38, 
bgl_long_to_bignum(
(long)CINT(BgL_yz00_39))))>((long)0));}  else 
{ /* Ieee/number.scm 527 */
if(
REALP(BgL_yz00_39))
{ /* Ieee/number.scm 527 */
return 
(
bgl_bignum_to_flonum(BgL_xz00_38)>
REAL_TO_DOUBLE(BgL_yz00_39));}  else 
{ /* Ieee/number.scm 527 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_39))
{ /* Ieee/number.scm 527 */
obj_t BgL_arg1520z00_1199;
{ /* Ieee/number.scm 527 */
obj_t BgL_arg1521z00_1200;
BgL_arg1521z00_1200 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_39); 
{ /* Ieee/number.scm 527 */
long BgL_xz00_3484;
{ /* Ieee/number.scm 527 */
obj_t BgL_tmpz00_8514;
if(
ELONGP(BgL_arg1521z00_1200))
{ /* Ieee/number.scm 527 */
BgL_tmpz00_8514 = BgL_arg1521z00_1200
; }  else 
{ 
obj_t BgL_auxz00_8517;
BgL_auxz00_8517 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)20049)), BGl_string5298z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1521z00_1200); 
FAILURE(BgL_auxz00_8517,BFALSE,BFALSE);} 
BgL_xz00_3484 = 
BELONG_TO_LONG(BgL_tmpz00_8514); } 
BgL_arg1520z00_1199 = 
bgl_long_to_bignum(BgL_xz00_3484); } } 
return 
(
(long)(
bgl_bignum_cmp(BgL_xz00_38, BgL_arg1520z00_1199))>((long)0));}  else 
{ /* Ieee/number.scm 527 */
if(
LLONGP(BgL_yz00_39))
{ /* Ieee/number.scm 527 */
return 
(
(long)(
bgl_bignum_cmp(BgL_xz00_38, 
bgl_llong_to_bignum(
BLLONG_TO_LLONG(BgL_yz00_39))))>((long)0));}  else 
{ /* Ieee/number.scm 527 */
if(
BGL_UINT64P(BgL_yz00_39))
{ /* Ieee/number.scm 527 */
long BgL_n1z00_3505;
BgL_n1z00_3505 = 
(long)(
bgl_bignum_cmp(BgL_xz00_38, 
bgl_uint64_to_bignum(
BGL_BINT64_TO_INT64(BgL_yz00_39)))); 
return 
(BgL_n1z00_3505>((long)0));}  else 
{ /* Ieee/number.scm 527 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_string5299z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_39));} } } } } } }  else 
{ /* Ieee/number.scm 527 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_string5299z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_xz00_38));} } } } } } } 

}



/* &2> */
obj_t BGl_z622ze3z81zz__r4_numbers_6_5z00(obj_t BgL_envz00_6498, obj_t BgL_xz00_6499, obj_t BgL_yz00_6500)
{
{ /* Ieee/number.scm 526 */
return 
BBOOL(
BGl_2ze3ze3zz__r4_numbers_6_5z00(BgL_xz00_6499, BgL_yz00_6500));} 

}



/* > */
BGL_EXPORTED_DEF bool_t BGl_ze3ze3zz__r4_numbers_6_5z00(obj_t BgL_xz00_40, obj_t BgL_yz00_41, obj_t BgL_za7za7_42)
{
{ /* Ieee/number.scm 532 */
{ 
obj_t BgL_xz00_1208;obj_t BgL_za7za7_1209;
if(
BGl_2ze3ze3zz__r4_numbers_6_5z00(BgL_xz00_40, BgL_yz00_41))
{ /* Ieee/number.scm 538 */
BgL_xz00_1208 = BgL_yz00_41; 
BgL_za7za7_1209 = BgL_za7za7_42; 
BgL_zc3z04anonymousza31527ze3z87_1210:
if(
NULLP(BgL_za7za7_1209))
{ /* Ieee/number.scm 535 */
return ((bool_t)1);}  else 
{ /* Ieee/number.scm 536 */
bool_t BgL_test5747z00_8550;
{ /* Ieee/number.scm 536 */
obj_t BgL_arg1534z00_1216;
{ /* Ieee/number.scm 536 */
obj_t BgL_pairz00_3509;
if(
PAIRP(BgL_za7za7_1209))
{ /* Ieee/number.scm 536 */
BgL_pairz00_3509 = BgL_za7za7_1209; }  else 
{ 
obj_t BgL_auxz00_8553;
BgL_auxz00_8553 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)20372)), BGl_string5300z00zz__r4_numbers_6_5z00, BGl_string5294z00zz__r4_numbers_6_5z00, BgL_za7za7_1209); 
FAILURE(BgL_auxz00_8553,BFALSE,BFALSE);} 
BgL_arg1534z00_1216 = 
CAR(BgL_pairz00_3509); } 
BgL_test5747z00_8550 = 
BGl_2ze3ze3zz__r4_numbers_6_5z00(BgL_xz00_1208, BgL_arg1534z00_1216); } 
if(BgL_test5747z00_8550)
{ 
obj_t BgL_za7za7_8567;obj_t BgL_xz00_8559;
{ /* Ieee/number.scm 536 */
obj_t BgL_pairz00_3510;
if(
PAIRP(BgL_za7za7_1209))
{ /* Ieee/number.scm 536 */
BgL_pairz00_3510 = BgL_za7za7_1209; }  else 
{ 
obj_t BgL_auxz00_8562;
BgL_auxz00_8562 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)20389)), BGl_string5300z00zz__r4_numbers_6_5z00, BGl_string5294z00zz__r4_numbers_6_5z00, BgL_za7za7_1209); 
FAILURE(BgL_auxz00_8562,BFALSE,BFALSE);} 
BgL_xz00_8559 = 
CAR(BgL_pairz00_3510); } 
{ /* Ieee/number.scm 536 */
obj_t BgL_pairz00_3511;
if(
PAIRP(BgL_za7za7_1209))
{ /* Ieee/number.scm 536 */
BgL_pairz00_3511 = BgL_za7za7_1209; }  else 
{ 
obj_t BgL_auxz00_8570;
BgL_auxz00_8570 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)20397)), BGl_string5300z00zz__r4_numbers_6_5z00, BGl_string5294z00zz__r4_numbers_6_5z00, BgL_za7za7_1209); 
FAILURE(BgL_auxz00_8570,BFALSE,BFALSE);} 
BgL_za7za7_8567 = 
CDR(BgL_pairz00_3511); } 
BgL_za7za7_1209 = BgL_za7za7_8567; 
BgL_xz00_1208 = BgL_xz00_8559; 
goto BgL_zc3z04anonymousza31527ze3z87_1210;}  else 
{ /* Ieee/number.scm 536 */
return ((bool_t)0);} } }  else 
{ /* Ieee/number.scm 538 */
return ((bool_t)0);} } } 

}



/* &> */
obj_t BGl_z62ze3z81zz__r4_numbers_6_5z00(obj_t BgL_envz00_6501, obj_t BgL_xz00_6502, obj_t BgL_yz00_6503, obj_t BgL_za7za7_6504)
{
{ /* Ieee/number.scm 532 */
return 
BBOOL(
BGl_ze3ze3zz__r4_numbers_6_5z00(BgL_xz00_6502, BgL_yz00_6503, BgL_za7za7_6504));} 

}



/* 2<= */
BGL_EXPORTED_DEF bool_t BGl_2zc3zd3z10zz__r4_numbers_6_5z00(obj_t BgL_xz00_43, obj_t BgL_yz00_44)
{
{ /* Ieee/number.scm 543 */
if(
INTEGERP(BgL_xz00_43))
{ /* Ieee/number.scm 544 */
if(
INTEGERP(BgL_yz00_44))
{ /* Ieee/number.scm 544 */
return 
(
(long)CINT(BgL_xz00_43)<=
(long)CINT(BgL_yz00_44));}  else 
{ /* Ieee/number.scm 544 */
if(
REALP(BgL_yz00_44))
{ /* Ieee/number.scm 544 */
return 
(
(double)(
(long)CINT(BgL_xz00_43))<=
REAL_TO_DOUBLE(BgL_yz00_44));}  else 
{ /* Ieee/number.scm 544 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_44))
{ /* Ieee/number.scm 544 */
long BgL_arg1542z00_1223;obj_t BgL_arg1544z00_1224;
{ /* Ieee/number.scm 544 */
long BgL_res3564z00_3522;
{ /* Ieee/number.scm 544 */
long BgL_tmpz00_8592;
BgL_tmpz00_8592 = 
(long)CINT(BgL_xz00_43); 
BgL_res3564z00_3522 = 
(long)(BgL_tmpz00_8592); } 
BgL_arg1542z00_1223 = BgL_res3564z00_3522; } 
BgL_arg1544z00_1224 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_44); 
{ /* Ieee/number.scm 544 */
long BgL_n2z00_3524;
{ /* Ieee/number.scm 544 */
obj_t BgL_tmpz00_8596;
if(
ELONGP(BgL_arg1544z00_1224))
{ /* Ieee/number.scm 544 */
BgL_tmpz00_8596 = BgL_arg1544z00_1224
; }  else 
{ 
obj_t BgL_auxz00_8599;
BgL_auxz00_8599 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)20693)), BGl_string5301z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1544z00_1224); 
FAILURE(BgL_auxz00_8599,BFALSE,BFALSE);} 
BgL_n2z00_3524 = 
BELONG_TO_LONG(BgL_tmpz00_8596); } 
return 
(BgL_arg1542z00_1223<=BgL_n2z00_3524);} }  else 
{ /* Ieee/number.scm 544 */
if(
LLONGP(BgL_yz00_44))
{ /* Ieee/number.scm 544 */
BGL_LONGLONG_T BgL_arg1546z00_1226;
{ /* Ieee/number.scm 544 */
BGL_LONGLONG_T BgL_res3567z00_3528;
{ /* Ieee/number.scm 544 */
long BgL_tmpz00_8607;
BgL_tmpz00_8607 = 
(long)CINT(BgL_xz00_43); 
BgL_res3567z00_3528 = 
LONG_TO_LLONG(BgL_tmpz00_8607); } 
BgL_arg1546z00_1226 = BgL_res3567z00_3528; } 
return 
(BgL_arg1546z00_1226<=
BLLONG_TO_LLONG(BgL_yz00_44));}  else 
{ /* Ieee/number.scm 544 */
if(
BGL_UINT64P(BgL_yz00_44))
{ /* Ieee/number.scm 544 */
uint64_t BgL_arg1551z00_1229;
{ /* Ieee/number.scm 544 */
BGL_LONGLONG_T BgL_arg1552z00_1230;
{ /* Ieee/number.scm 544 */
BGL_LONGLONG_T BgL_res3570z00_3534;
{ /* Ieee/number.scm 544 */
long BgL_tmpz00_8614;
BgL_tmpz00_8614 = 
(long)CINT(BgL_xz00_43); 
BgL_res3570z00_3534 = 
LONG_TO_LLONG(BgL_tmpz00_8614); } 
BgL_arg1552z00_1230 = BgL_res3570z00_3534; } 
{ /* Ieee/number.scm 544 */
uint64_t BgL_res3571z00_3536;
BgL_res3571z00_3536 = 
(uint64_t)(BgL_arg1552z00_1230); 
BgL_arg1551z00_1229 = BgL_res3571z00_3536; } } 
{ /* Ieee/number.scm 544 */
uint64_t BgL_n2z00_3538;
BgL_n2z00_3538 = 
BGL_BINT64_TO_INT64(BgL_yz00_44); 
return 
(BgL_arg1551z00_1229<=BgL_n2z00_3538);} }  else 
{ /* Ieee/number.scm 544 */
if(
BIGNUMP(BgL_yz00_44))
{ /* Ieee/number.scm 544 */
return 
(
(long)(
bgl_bignum_cmp(
bgl_long_to_bignum(
(long)CINT(BgL_xz00_43)), BgL_yz00_44))<=((long)0));}  else 
{ /* Ieee/number.scm 544 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_string5302z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_44));} } } } } } }  else 
{ /* Ieee/number.scm 544 */
if(
REALP(BgL_xz00_43))
{ /* Ieee/number.scm 544 */
if(
REALP(BgL_yz00_44))
{ /* Ieee/number.scm 544 */
return 
(
REAL_TO_DOUBLE(BgL_xz00_43)<=
REAL_TO_DOUBLE(BgL_yz00_44));}  else 
{ /* Ieee/number.scm 544 */
if(
INTEGERP(BgL_yz00_44))
{ /* Ieee/number.scm 544 */
return 
(
REAL_TO_DOUBLE(BgL_xz00_43)<=
(double)(
(long)CINT(BgL_yz00_44)));}  else 
{ /* Ieee/number.scm 544 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_44))
{ /* Ieee/number.scm 544 */
double BgL_arg1560z00_1238;
{ /* Ieee/number.scm 544 */
obj_t BgL_arg1561z00_1239;
BgL_arg1561z00_1239 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_44); 
{ /* Ieee/number.scm 544 */
long BgL_tmpz00_8645;
{ /* Ieee/number.scm 544 */
obj_t BgL_tmpz00_8646;
if(
ELONGP(BgL_arg1561z00_1239))
{ /* Ieee/number.scm 544 */
BgL_tmpz00_8646 = BgL_arg1561z00_1239
; }  else 
{ 
obj_t BgL_auxz00_8649;
BgL_auxz00_8649 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)20693)), BGl_string5301z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1561z00_1239); 
FAILURE(BgL_auxz00_8649,BFALSE,BFALSE);} 
BgL_tmpz00_8645 = 
BELONG_TO_LONG(BgL_tmpz00_8646); } 
BgL_arg1560z00_1238 = 
(double)(BgL_tmpz00_8645); } } 
return 
(
REAL_TO_DOUBLE(BgL_xz00_43)<=BgL_arg1560z00_1238);}  else 
{ /* Ieee/number.scm 544 */
if(
LLONGP(BgL_yz00_44))
{ /* Ieee/number.scm 544 */
return 
(
REAL_TO_DOUBLE(BgL_xz00_43)<=
(double)(
BLLONG_TO_LLONG(BgL_yz00_44)));}  else 
{ /* Ieee/number.scm 544 */
if(
BGL_UINT64P(BgL_yz00_44))
{ /* Ieee/number.scm 544 */
double BgL_arg1566z00_1244;
{ /* Ieee/number.scm 544 */
double BgL_res3586z00_3567;
{ /* Ieee/number.scm 544 */
uint64_t BgL_xz00_3566;
BgL_xz00_3566 = 
BGL_BINT64_TO_INT64(BgL_yz00_44); 
BgL_res3586z00_3567 = 
(double)(BgL_xz00_3566); } 
BgL_arg1566z00_1244 = BgL_res3586z00_3567; } 
return 
(
REAL_TO_DOUBLE(BgL_xz00_43)<=BgL_arg1566z00_1244);}  else 
{ /* Ieee/number.scm 544 */
if(
BIGNUMP(BgL_yz00_44))
{ /* Ieee/number.scm 544 */
return 
(
REAL_TO_DOUBLE(BgL_xz00_43)<=
bgl_bignum_to_flonum(BgL_yz00_44));}  else 
{ /* Ieee/number.scm 544 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_string5302z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_44));} } } } } } }  else 
{ /* Ieee/number.scm 544 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_xz00_43))
{ /* Ieee/number.scm 544 */
if(
INTEGERP(BgL_yz00_44))
{ /* Ieee/number.scm 544 */
obj_t BgL_arg1573z00_1249;long BgL_arg1574z00_1250;
BgL_arg1573z00_1249 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_43); 
{ /* Ieee/number.scm 544 */
long BgL_res3592z00_3579;
{ /* Ieee/number.scm 544 */
long BgL_tmpz00_8681;
BgL_tmpz00_8681 = 
(long)CINT(BgL_yz00_44); 
BgL_res3592z00_3579 = 
(long)(BgL_tmpz00_8681); } 
BgL_arg1574z00_1250 = BgL_res3592z00_3579; } 
{ /* Ieee/number.scm 544 */
long BgL_n1z00_3580;
{ /* Ieee/number.scm 544 */
obj_t BgL_tmpz00_8684;
if(
ELONGP(BgL_arg1573z00_1249))
{ /* Ieee/number.scm 544 */
BgL_tmpz00_8684 = BgL_arg1573z00_1249
; }  else 
{ 
obj_t BgL_auxz00_8687;
BgL_auxz00_8687 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)20693)), BGl_string5301z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1573z00_1249); 
FAILURE(BgL_auxz00_8687,BFALSE,BFALSE);} 
BgL_n1z00_3580 = 
BELONG_TO_LONG(BgL_tmpz00_8684); } 
return 
(BgL_n1z00_3580<=BgL_arg1574z00_1250);} }  else 
{ /* Ieee/number.scm 544 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_44))
{ /* Ieee/number.scm 544 */
obj_t BgL_arg1577z00_1252;obj_t BgL_arg1578z00_1253;
BgL_arg1577z00_1252 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_43); 
BgL_arg1578z00_1253 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_44); 
{ /* Ieee/number.scm 544 */
long BgL_n1z00_3583;long BgL_n2z00_3584;
{ /* Ieee/number.scm 544 */
obj_t BgL_tmpz00_8697;
if(
ELONGP(BgL_arg1577z00_1252))
{ /* Ieee/number.scm 544 */
BgL_tmpz00_8697 = BgL_arg1577z00_1252
; }  else 
{ 
obj_t BgL_auxz00_8700;
BgL_auxz00_8700 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)20693)), BGl_string5301z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1577z00_1252); 
FAILURE(BgL_auxz00_8700,BFALSE,BFALSE);} 
BgL_n1z00_3583 = 
BELONG_TO_LONG(BgL_tmpz00_8697); } 
{ /* Ieee/number.scm 544 */
obj_t BgL_tmpz00_8705;
if(
ELONGP(BgL_arg1578z00_1253))
{ /* Ieee/number.scm 544 */
BgL_tmpz00_8705 = BgL_arg1578z00_1253
; }  else 
{ 
obj_t BgL_auxz00_8708;
BgL_auxz00_8708 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)20693)), BGl_string5301z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1578z00_1253); 
FAILURE(BgL_auxz00_8708,BFALSE,BFALSE);} 
BgL_n2z00_3584 = 
BELONG_TO_LONG(BgL_tmpz00_8705); } 
return 
(BgL_n1z00_3583<=BgL_n2z00_3584);} }  else 
{ /* Ieee/number.scm 544 */
if(
REALP(BgL_yz00_44))
{ /* Ieee/number.scm 544 */
double BgL_arg1580z00_1255;
{ /* Ieee/number.scm 544 */
obj_t BgL_arg1582z00_1256;
BgL_arg1582z00_1256 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_43); 
{ /* Ieee/number.scm 544 */
long BgL_tmpz00_8717;
{ /* Ieee/number.scm 544 */
obj_t BgL_tmpz00_8718;
if(
ELONGP(BgL_arg1582z00_1256))
{ /* Ieee/number.scm 544 */
BgL_tmpz00_8718 = BgL_arg1582z00_1256
; }  else 
{ 
obj_t BgL_auxz00_8721;
BgL_auxz00_8721 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)20693)), BGl_string5301z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1582z00_1256); 
FAILURE(BgL_auxz00_8721,BFALSE,BFALSE);} 
BgL_tmpz00_8717 = 
BELONG_TO_LONG(BgL_tmpz00_8718); } 
BgL_arg1580z00_1255 = 
(double)(BgL_tmpz00_8717); } } 
return 
(BgL_arg1580z00_1255<=
REAL_TO_DOUBLE(BgL_yz00_44));}  else 
{ /* Ieee/number.scm 544 */
if(
LLONGP(BgL_yz00_44))
{ /* Ieee/number.scm 544 */
BGL_LONGLONG_T BgL_arg1584z00_1258;
{ /* Ieee/number.scm 544 */
obj_t BgL_arg1588z00_1260;
BgL_arg1588z00_1260 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_43); 
{ /* Ieee/number.scm 544 */
long BgL_tmpz00_8732;
{ /* Ieee/number.scm 544 */
obj_t BgL_tmpz00_8733;
if(
ELONGP(BgL_arg1588z00_1260))
{ /* Ieee/number.scm 544 */
BgL_tmpz00_8733 = BgL_arg1588z00_1260
; }  else 
{ 
obj_t BgL_auxz00_8736;
BgL_auxz00_8736 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)20693)), BGl_string5301z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1588z00_1260); 
FAILURE(BgL_auxz00_8736,BFALSE,BFALSE);} 
BgL_tmpz00_8732 = 
BELONG_TO_LONG(BgL_tmpz00_8733); } 
BgL_arg1584z00_1258 = 
(BGL_LONGLONG_T)(BgL_tmpz00_8732); } } 
return 
(BgL_arg1584z00_1258<=
BLLONG_TO_LLONG(BgL_yz00_44));}  else 
{ /* Ieee/number.scm 544 */
if(
BGL_UINT64P(BgL_yz00_44))
{ /* Ieee/number.scm 544 */
uint64_t BgL_arg1592z00_1262;
{ /* Ieee/number.scm 544 */
BGL_LONGLONG_T BgL_arg1593z00_1263;
{ /* Ieee/number.scm 544 */
obj_t BgL_arg1596z00_1264;
BgL_arg1596z00_1264 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_43); 
{ /* Ieee/number.scm 544 */
long BgL_tmpz00_8747;
{ /* Ieee/number.scm 544 */
obj_t BgL_tmpz00_8748;
if(
ELONGP(BgL_arg1596z00_1264))
{ /* Ieee/number.scm 544 */
BgL_tmpz00_8748 = BgL_arg1596z00_1264
; }  else 
{ 
obj_t BgL_auxz00_8751;
BgL_auxz00_8751 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)20693)), BGl_string5301z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1596z00_1264); 
FAILURE(BgL_auxz00_8751,BFALSE,BFALSE);} 
BgL_tmpz00_8747 = 
BELONG_TO_LONG(BgL_tmpz00_8748); } 
BgL_arg1593z00_1263 = 
(BGL_LONGLONG_T)(BgL_tmpz00_8747); } } 
{ /* Ieee/number.scm 544 */
uint64_t BgL_res3600z00_3596;
BgL_res3600z00_3596 = 
(uint64_t)(BgL_arg1593z00_1263); 
BgL_arg1592z00_1262 = BgL_res3600z00_3596; } } 
{ /* Ieee/number.scm 544 */
uint64_t BgL_n2z00_3598;
BgL_n2z00_3598 = 
BGL_BINT64_TO_INT64(BgL_yz00_44); 
return 
(BgL_arg1592z00_1262<=BgL_n2z00_3598);} }  else 
{ /* Ieee/number.scm 544 */
if(
BIGNUMP(BgL_yz00_44))
{ /* Ieee/number.scm 544 */
obj_t BgL_arg1598z00_1266;
{ /* Ieee/number.scm 544 */
obj_t BgL_arg1599z00_1267;
BgL_arg1599z00_1267 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_43); 
{ /* Ieee/number.scm 544 */
long BgL_xz00_3601;
{ /* Ieee/number.scm 544 */
obj_t BgL_tmpz00_8763;
if(
ELONGP(BgL_arg1599z00_1267))
{ /* Ieee/number.scm 544 */
BgL_tmpz00_8763 = BgL_arg1599z00_1267
; }  else 
{ 
obj_t BgL_auxz00_8766;
BgL_auxz00_8766 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)20693)), BGl_string5301z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1599z00_1267); 
FAILURE(BgL_auxz00_8766,BFALSE,BFALSE);} 
BgL_xz00_3601 = 
BELONG_TO_LONG(BgL_tmpz00_8763); } 
BgL_arg1598z00_1266 = 
bgl_long_to_bignum(BgL_xz00_3601); } } 
return 
(
(long)(
bgl_bignum_cmp(BgL_arg1598z00_1266, BgL_yz00_44))<=((long)0));}  else 
{ /* Ieee/number.scm 544 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_string5302z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_44));} } } } } } }  else 
{ /* Ieee/number.scm 544 */
if(
LLONGP(BgL_xz00_43))
{ /* Ieee/number.scm 544 */
if(
INTEGERP(BgL_yz00_44))
{ /* Ieee/number.scm 544 */
BGL_LONGLONG_T BgL_arg1603z00_1271;
{ /* Ieee/number.scm 544 */
BGL_LONGLONG_T BgL_res3608z00_3612;
{ /* Ieee/number.scm 544 */
long BgL_tmpz00_8781;
BgL_tmpz00_8781 = 
(long)CINT(BgL_yz00_44); 
BgL_res3608z00_3612 = 
LONG_TO_LLONG(BgL_tmpz00_8781); } 
BgL_arg1603z00_1271 = BgL_res3608z00_3612; } 
return 
(
BLLONG_TO_LLONG(BgL_xz00_43)<=BgL_arg1603z00_1271);}  else 
{ /* Ieee/number.scm 544 */
if(
REALP(BgL_yz00_44))
{ /* Ieee/number.scm 544 */
return 
(
(double)(
BLLONG_TO_LLONG(BgL_xz00_43))<=
REAL_TO_DOUBLE(BgL_yz00_44));}  else 
{ /* Ieee/number.scm 544 */
if(
LLONGP(BgL_yz00_44))
{ /* Ieee/number.scm 544 */
return 
(
BLLONG_TO_LLONG(BgL_xz00_43)<=
BLLONG_TO_LLONG(BgL_yz00_44));}  else 
{ /* Ieee/number.scm 544 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_44))
{ /* Ieee/number.scm 544 */
BGL_LONGLONG_T BgL_arg1612z00_1279;
{ /* Ieee/number.scm 544 */
obj_t BgL_arg1613z00_1280;
BgL_arg1613z00_1280 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_44); 
{ /* Ieee/number.scm 544 */
long BgL_tmpz00_8800;
{ /* Ieee/number.scm 544 */
obj_t BgL_tmpz00_8801;
if(
ELONGP(BgL_arg1613z00_1280))
{ /* Ieee/number.scm 544 */
BgL_tmpz00_8801 = BgL_arg1613z00_1280
; }  else 
{ 
obj_t BgL_auxz00_8804;
BgL_auxz00_8804 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)20693)), BGl_string5301z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1613z00_1280); 
FAILURE(BgL_auxz00_8804,BFALSE,BFALSE);} 
BgL_tmpz00_8800 = 
BELONG_TO_LONG(BgL_tmpz00_8801); } 
BgL_arg1612z00_1279 = 
(BGL_LONGLONG_T)(BgL_tmpz00_8800); } } 
return 
(
BLLONG_TO_LLONG(BgL_xz00_43)<=BgL_arg1612z00_1279);}  else 
{ /* Ieee/number.scm 544 */
if(
BIGNUMP(BgL_yz00_44))
{ /* Ieee/number.scm 544 */
return 
(
(long)(
bgl_bignum_cmp(
bgl_llong_to_bignum(
BLLONG_TO_LLONG(BgL_xz00_43)), BgL_yz00_44))<=((long)0));}  else 
{ /* Ieee/number.scm 544 */
if(
BGL_UINT64P(BgL_yz00_44))
{ /* Ieee/number.scm 544 */
uint64_t BgL_arg1618z00_1285;
{ /* Ieee/number.scm 544 */
uint64_t BgL_res3620z00_3638;
{ /* Ieee/number.scm 544 */
BGL_LONGLONG_T BgL_tmpz00_8821;
BgL_tmpz00_8821 = 
BLLONG_TO_LLONG(BgL_xz00_43); 
BgL_res3620z00_3638 = 
(uint64_t)(BgL_tmpz00_8821); } 
BgL_arg1618z00_1285 = BgL_res3620z00_3638; } 
{ /* Ieee/number.scm 544 */
uint64_t BgL_n2z00_3640;
BgL_n2z00_3640 = 
BGL_BINT64_TO_INT64(BgL_yz00_44); 
return 
(BgL_arg1618z00_1285<=BgL_n2z00_3640);} }  else 
{ /* Ieee/number.scm 544 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_string5302z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_44));} } } } } } }  else 
{ /* Ieee/number.scm 544 */
if(
BGL_UINT64P(BgL_xz00_43))
{ /* Ieee/number.scm 544 */
if(
INTEGERP(BgL_yz00_44))
{ /* Ieee/number.scm 544 */
uint64_t BgL_arg1621z00_1288;
{ /* Ieee/number.scm 544 */
uint64_t BgL_res3624z00_3645;
{ /* Ieee/number.scm 544 */
long BgL_tmpz00_8832;
BgL_tmpz00_8832 = 
(long)CINT(BgL_yz00_44); 
BgL_res3624z00_3645 = 
(uint64_t)(BgL_tmpz00_8832); } 
BgL_arg1621z00_1288 = BgL_res3624z00_3645; } 
{ /* Ieee/number.scm 544 */
uint64_t BgL_n1z00_3646;
BgL_n1z00_3646 = 
BGL_BINT64_TO_INT64(BgL_xz00_43); 
return 
(BgL_n1z00_3646<=BgL_arg1621z00_1288);} }  else 
{ /* Ieee/number.scm 544 */
if(
BGL_UINT64P(BgL_yz00_44))
{ /* Ieee/number.scm 544 */
uint64_t BgL_n1z00_3650;uint64_t BgL_n2z00_3651;
BgL_n1z00_3650 = 
BGL_BINT64_TO_INT64(BgL_xz00_43); 
BgL_n2z00_3651 = 
BGL_BINT64_TO_INT64(BgL_yz00_44); 
return 
(BgL_n1z00_3650<=BgL_n2z00_3651);}  else 
{ /* Ieee/number.scm 544 */
if(
REALP(BgL_yz00_44))
{ /* Ieee/number.scm 544 */
double BgL_arg1624z00_1291;
{ /* Ieee/number.scm 544 */
uint64_t BgL_tmpz00_8844;
BgL_tmpz00_8844 = 
BGL_BINT64_TO_INT64(BgL_xz00_43); 
BgL_arg1624z00_1291 = 
(double)(BgL_tmpz00_8844); } 
return 
(BgL_arg1624z00_1291<=
REAL_TO_DOUBLE(BgL_yz00_44));}  else 
{ /* Ieee/number.scm 544 */
if(
LLONGP(BgL_yz00_44))
{ /* Ieee/number.scm 544 */
uint64_t BgL_arg1626z00_1293;
{ /* Ieee/number.scm 544 */
uint64_t BgL_res3631z00_3659;
{ /* Ieee/number.scm 544 */
BGL_LONGLONG_T BgL_tmpz00_8851;
BgL_tmpz00_8851 = 
BLLONG_TO_LLONG(BgL_yz00_44); 
BgL_res3631z00_3659 = 
(uint64_t)(BgL_tmpz00_8851); } 
BgL_arg1626z00_1293 = BgL_res3631z00_3659; } 
{ /* Ieee/number.scm 544 */
uint64_t BgL_n1z00_3660;
BgL_n1z00_3660 = 
BGL_BINT64_TO_INT64(BgL_xz00_43); 
return 
(BgL_n1z00_3660<=BgL_arg1626z00_1293);} }  else 
{ /* Ieee/number.scm 544 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_44))
{ /* Ieee/number.scm 544 */
uint64_t BgL_arg1629z00_1296;
{ /* Ieee/number.scm 544 */
BGL_LONGLONG_T BgL_arg1630z00_1297;
{ /* Ieee/number.scm 544 */
obj_t BgL_arg1631z00_1298;
BgL_arg1631z00_1298 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_44); 
{ /* Ieee/number.scm 544 */
long BgL_tmpz00_8859;
{ /* Ieee/number.scm 544 */
obj_t BgL_tmpz00_8860;
if(
ELONGP(BgL_arg1631z00_1298))
{ /* Ieee/number.scm 544 */
BgL_tmpz00_8860 = BgL_arg1631z00_1298
; }  else 
{ 
obj_t BgL_auxz00_8863;
BgL_auxz00_8863 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)20693)), BGl_string5301z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1631z00_1298); 
FAILURE(BgL_auxz00_8863,BFALSE,BFALSE);} 
BgL_tmpz00_8859 = 
BELONG_TO_LONG(BgL_tmpz00_8860); } 
BgL_arg1630z00_1297 = 
(BGL_LONGLONG_T)(BgL_tmpz00_8859); } } 
{ /* Ieee/number.scm 544 */
uint64_t BgL_res3633z00_3664;
BgL_res3633z00_3664 = 
(uint64_t)(BgL_arg1630z00_1297); 
BgL_arg1629z00_1296 = BgL_res3633z00_3664; } } 
{ /* Ieee/number.scm 544 */
uint64_t BgL_n1z00_3665;
BgL_n1z00_3665 = 
BGL_BINT64_TO_INT64(BgL_xz00_43); 
return 
(BgL_n1z00_3665<=BgL_arg1629z00_1296);} }  else 
{ /* Ieee/number.scm 544 */
if(
BIGNUMP(BgL_yz00_44))
{ /* Ieee/number.scm 544 */
long BgL_n1z00_3672;
BgL_n1z00_3672 = 
(long)(
bgl_bignum_cmp(
bgl_uint64_to_bignum(
BGL_BINT64_TO_INT64(BgL_xz00_43)), BgL_yz00_44)); 
return 
(BgL_n1z00_3672<=((long)0));}  else 
{ /* Ieee/number.scm 544 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_string5302z00zz__r4_numbers_6_5z00, BGl_string5292z00zz__r4_numbers_6_5z00, BgL_yz00_44));} } } } } } }  else 
{ /* Ieee/number.scm 544 */
if(
BIGNUMP(BgL_xz00_43))
{ /* Ieee/number.scm 544 */
if(
BIGNUMP(BgL_yz00_44))
{ /* Ieee/number.scm 544 */
return 
(
(long)(
bgl_bignum_cmp(BgL_xz00_43, BgL_yz00_44))<=((long)0));}  else 
{ /* Ieee/number.scm 544 */
if(
INTEGERP(BgL_yz00_44))
{ /* Ieee/number.scm 544 */
return 
(
(long)(
bgl_bignum_cmp(BgL_xz00_43, 
bgl_long_to_bignum(
(long)CINT(BgL_yz00_44))))<=((long)0));}  else 
{ /* Ieee/number.scm 544 */
if(
REALP(BgL_yz00_44))
{ /* Ieee/number.scm 544 */
return 
(
bgl_bignum_to_flonum(BgL_xz00_43)<=
REAL_TO_DOUBLE(BgL_yz00_44));}  else 
{ /* Ieee/number.scm 544 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_44))
{ /* Ieee/number.scm 544 */
obj_t BgL_arg1641z00_1308;
{ /* Ieee/number.scm 544 */
obj_t BgL_arg1642z00_1309;
BgL_arg1642z00_1309 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_44); 
{ /* Ieee/number.scm 544 */
long BgL_xz00_3698;
{ /* Ieee/number.scm 544 */
obj_t BgL_tmpz00_8903;
if(
ELONGP(BgL_arg1642z00_1309))
{ /* Ieee/number.scm 544 */
BgL_tmpz00_8903 = BgL_arg1642z00_1309
; }  else 
{ 
obj_t BgL_auxz00_8906;
BgL_auxz00_8906 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)20693)), BGl_string5301z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1642z00_1309); 
FAILURE(BgL_auxz00_8906,BFALSE,BFALSE);} 
BgL_xz00_3698 = 
BELONG_TO_LONG(BgL_tmpz00_8903); } 
BgL_arg1641z00_1308 = 
bgl_long_to_bignum(BgL_xz00_3698); } } 
return 
(
(long)(
bgl_bignum_cmp(BgL_xz00_43, BgL_arg1641z00_1308))<=((long)0));}  else 
{ /* Ieee/number.scm 544 */
if(
LLONGP(BgL_yz00_44))
{ /* Ieee/number.scm 544 */
return 
(
(long)(
bgl_bignum_cmp(BgL_xz00_43, 
bgl_llong_to_bignum(
BLLONG_TO_LLONG(BgL_yz00_44))))<=((long)0));}  else 
{ /* Ieee/number.scm 544 */
if(
BGL_UINT64P(BgL_yz00_44))
{ /* Ieee/number.scm 544 */
long BgL_n1z00_3719;
BgL_n1z00_3719 = 
(long)(
bgl_bignum_cmp(BgL_xz00_43, 
bgl_uint64_to_bignum(
BGL_BINT64_TO_INT64(BgL_yz00_44)))); 
return 
(BgL_n1z00_3719<=((long)0));}  else 
{ /* Ieee/number.scm 544 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_string5302z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_44));} } } } } } }  else 
{ /* Ieee/number.scm 544 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_string5302z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_xz00_43));} } } } } } } 

}



/* &2<= */
obj_t BGl_z622zc3zd3z72zz__r4_numbers_6_5z00(obj_t BgL_envz00_6505, obj_t BgL_xz00_6506, obj_t BgL_yz00_6507)
{
{ /* Ieee/number.scm 543 */
return 
BBOOL(
BGl_2zc3zd3z10zz__r4_numbers_6_5z00(BgL_xz00_6506, BgL_yz00_6507));} 

}



/* <= */
BGL_EXPORTED_DEF bool_t BGl_zc3zd3z10zz__r4_numbers_6_5z00(obj_t BgL_xz00_45, obj_t BgL_yz00_46, obj_t BgL_za7za7_47)
{
{ /* Ieee/number.scm 549 */
{ 
obj_t BgL_xz00_1317;obj_t BgL_za7za7_1318;
if(
BGl_2zc3zd3z10zz__r4_numbers_6_5z00(BgL_xz00_45, BgL_yz00_46))
{ /* Ieee/number.scm 555 */
BgL_xz00_1317 = BgL_yz00_46; 
BgL_za7za7_1318 = BgL_za7za7_47; 
BgL_zc3z04anonymousza31649ze3z87_1319:
if(
NULLP(BgL_za7za7_1318))
{ /* Ieee/number.scm 552 */
return ((bool_t)1);}  else 
{ /* Ieee/number.scm 553 */
bool_t BgL_test5807z00_8939;
{ /* Ieee/number.scm 553 */
obj_t BgL_arg1657z00_1325;
{ /* Ieee/number.scm 553 */
obj_t BgL_pairz00_3723;
if(
PAIRP(BgL_za7za7_1318))
{ /* Ieee/number.scm 553 */
BgL_pairz00_3723 = BgL_za7za7_1318; }  else 
{ 
obj_t BgL_auxz00_8942;
BgL_auxz00_8942 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)21020)), BGl_string5303z00zz__r4_numbers_6_5z00, BGl_string5294z00zz__r4_numbers_6_5z00, BgL_za7za7_1318); 
FAILURE(BgL_auxz00_8942,BFALSE,BFALSE);} 
BgL_arg1657z00_1325 = 
CAR(BgL_pairz00_3723); } 
BgL_test5807z00_8939 = 
BGl_2zc3zd3z10zz__r4_numbers_6_5z00(BgL_xz00_1317, BgL_arg1657z00_1325); } 
if(BgL_test5807z00_8939)
{ 
obj_t BgL_za7za7_8956;obj_t BgL_xz00_8948;
{ /* Ieee/number.scm 553 */
obj_t BgL_pairz00_3724;
if(
PAIRP(BgL_za7za7_1318))
{ /* Ieee/number.scm 553 */
BgL_pairz00_3724 = BgL_za7za7_1318; }  else 
{ 
obj_t BgL_auxz00_8951;
BgL_auxz00_8951 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)21038)), BGl_string5303z00zz__r4_numbers_6_5z00, BGl_string5294z00zz__r4_numbers_6_5z00, BgL_za7za7_1318); 
FAILURE(BgL_auxz00_8951,BFALSE,BFALSE);} 
BgL_xz00_8948 = 
CAR(BgL_pairz00_3724); } 
{ /* Ieee/number.scm 553 */
obj_t BgL_pairz00_3725;
if(
PAIRP(BgL_za7za7_1318))
{ /* Ieee/number.scm 553 */
BgL_pairz00_3725 = BgL_za7za7_1318; }  else 
{ 
obj_t BgL_auxz00_8959;
BgL_auxz00_8959 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)21046)), BGl_string5303z00zz__r4_numbers_6_5z00, BGl_string5294z00zz__r4_numbers_6_5z00, BgL_za7za7_1318); 
FAILURE(BgL_auxz00_8959,BFALSE,BFALSE);} 
BgL_za7za7_8956 = 
CDR(BgL_pairz00_3725); } 
BgL_za7za7_1318 = BgL_za7za7_8956; 
BgL_xz00_1317 = BgL_xz00_8948; 
goto BgL_zc3z04anonymousza31649ze3z87_1319;}  else 
{ /* Ieee/number.scm 553 */
return ((bool_t)0);} } }  else 
{ /* Ieee/number.scm 555 */
return ((bool_t)0);} } } 

}



/* &<= */
obj_t BGl_z62zc3zd3z72zz__r4_numbers_6_5z00(obj_t BgL_envz00_6508, obj_t BgL_xz00_6509, obj_t BgL_yz00_6510, obj_t BgL_za7za7_6511)
{
{ /* Ieee/number.scm 549 */
return 
BBOOL(
BGl_zc3zd3z10zz__r4_numbers_6_5z00(BgL_xz00_6509, BgL_yz00_6510, BgL_za7za7_6511));} 

}



/* 2>= */
BGL_EXPORTED_DEF bool_t BGl_2ze3zd3z30zz__r4_numbers_6_5z00(obj_t BgL_xz00_48, obj_t BgL_yz00_49)
{
{ /* Ieee/number.scm 560 */
if(
INTEGERP(BgL_xz00_48))
{ /* Ieee/number.scm 561 */
if(
INTEGERP(BgL_yz00_49))
{ /* Ieee/number.scm 561 */
return 
(
(long)CINT(BgL_xz00_48)>=
(long)CINT(BgL_yz00_49));}  else 
{ /* Ieee/number.scm 561 */
if(
REALP(BgL_yz00_49))
{ /* Ieee/number.scm 561 */
return 
(
(double)(
(long)CINT(BgL_xz00_48))>=
REAL_TO_DOUBLE(BgL_yz00_49));}  else 
{ /* Ieee/number.scm 561 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_49))
{ /* Ieee/number.scm 561 */
long BgL_arg1663z00_1332;obj_t BgL_arg1664z00_1333;
{ /* Ieee/number.scm 561 */
long BgL_res3665z00_3736;
{ /* Ieee/number.scm 561 */
long BgL_tmpz00_8981;
BgL_tmpz00_8981 = 
(long)CINT(BgL_xz00_48); 
BgL_res3665z00_3736 = 
(long)(BgL_tmpz00_8981); } 
BgL_arg1663z00_1332 = BgL_res3665z00_3736; } 
BgL_arg1664z00_1333 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_49); 
{ /* Ieee/number.scm 561 */
long BgL_n2z00_3738;
{ /* Ieee/number.scm 561 */
obj_t BgL_tmpz00_8985;
if(
ELONGP(BgL_arg1664z00_1333))
{ /* Ieee/number.scm 561 */
BgL_tmpz00_8985 = BgL_arg1664z00_1333
; }  else 
{ 
obj_t BgL_auxz00_8988;
BgL_auxz00_8988 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)21343)), BGl_string5304z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1664z00_1333); 
FAILURE(BgL_auxz00_8988,BFALSE,BFALSE);} 
BgL_n2z00_3738 = 
BELONG_TO_LONG(BgL_tmpz00_8985); } 
return 
(BgL_arg1663z00_1332>=BgL_n2z00_3738);} }  else 
{ /* Ieee/number.scm 561 */
if(
LLONGP(BgL_yz00_49))
{ /* Ieee/number.scm 561 */
BGL_LONGLONG_T BgL_arg1667z00_1335;
{ /* Ieee/number.scm 561 */
BGL_LONGLONG_T BgL_res3668z00_3742;
{ /* Ieee/number.scm 561 */
long BgL_tmpz00_8996;
BgL_tmpz00_8996 = 
(long)CINT(BgL_xz00_48); 
BgL_res3668z00_3742 = 
LONG_TO_LLONG(BgL_tmpz00_8996); } 
BgL_arg1667z00_1335 = BgL_res3668z00_3742; } 
return 
(BgL_arg1667z00_1335>=
BLLONG_TO_LLONG(BgL_yz00_49));}  else 
{ /* Ieee/number.scm 561 */
if(
BGL_UINT64P(BgL_yz00_49))
{ /* Ieee/number.scm 561 */
uint64_t BgL_arg1672z00_1338;
{ /* Ieee/number.scm 561 */
BGL_LONGLONG_T BgL_arg1675z00_1339;
{ /* Ieee/number.scm 561 */
BGL_LONGLONG_T BgL_res3671z00_3748;
{ /* Ieee/number.scm 561 */
long BgL_tmpz00_9003;
BgL_tmpz00_9003 = 
(long)CINT(BgL_xz00_48); 
BgL_res3671z00_3748 = 
LONG_TO_LLONG(BgL_tmpz00_9003); } 
BgL_arg1675z00_1339 = BgL_res3671z00_3748; } 
{ /* Ieee/number.scm 561 */
uint64_t BgL_res3672z00_3750;
BgL_res3672z00_3750 = 
(uint64_t)(BgL_arg1675z00_1339); 
BgL_arg1672z00_1338 = BgL_res3672z00_3750; } } 
{ /* Ieee/number.scm 561 */
uint64_t BgL_n2z00_3752;
BgL_n2z00_3752 = 
BGL_BINT64_TO_INT64(BgL_yz00_49); 
return 
(BgL_arg1672z00_1338>=BgL_n2z00_3752);} }  else 
{ /* Ieee/number.scm 561 */
if(
BIGNUMP(BgL_yz00_49))
{ /* Ieee/number.scm 561 */
return 
(
(long)(
bgl_bignum_cmp(
bgl_long_to_bignum(
(long)CINT(BgL_xz00_48)), BgL_yz00_49))>=((long)0));}  else 
{ /* Ieee/number.scm 561 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_string5305z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_49));} } } } } } }  else 
{ /* Ieee/number.scm 561 */
if(
REALP(BgL_xz00_48))
{ /* Ieee/number.scm 561 */
if(
REALP(BgL_yz00_49))
{ /* Ieee/number.scm 561 */
return 
(
REAL_TO_DOUBLE(BgL_xz00_48)>=
REAL_TO_DOUBLE(BgL_yz00_49));}  else 
{ /* Ieee/number.scm 561 */
if(
INTEGERP(BgL_yz00_49))
{ /* Ieee/number.scm 561 */
return 
(
REAL_TO_DOUBLE(BgL_xz00_48)>=
(double)(
(long)CINT(BgL_yz00_49)));}  else 
{ /* Ieee/number.scm 561 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_49))
{ /* Ieee/number.scm 561 */
double BgL_arg1691z00_1347;
{ /* Ieee/number.scm 561 */
obj_t BgL_arg1692z00_1348;
BgL_arg1692z00_1348 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_49); 
{ /* Ieee/number.scm 561 */
long BgL_tmpz00_9034;
{ /* Ieee/number.scm 561 */
obj_t BgL_tmpz00_9035;
if(
ELONGP(BgL_arg1692z00_1348))
{ /* Ieee/number.scm 561 */
BgL_tmpz00_9035 = BgL_arg1692z00_1348
; }  else 
{ 
obj_t BgL_auxz00_9038;
BgL_auxz00_9038 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)21343)), BGl_string5304z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1692z00_1348); 
FAILURE(BgL_auxz00_9038,BFALSE,BFALSE);} 
BgL_tmpz00_9034 = 
BELONG_TO_LONG(BgL_tmpz00_9035); } 
BgL_arg1691z00_1347 = 
(double)(BgL_tmpz00_9034); } } 
return 
(
REAL_TO_DOUBLE(BgL_xz00_48)>=BgL_arg1691z00_1347);}  else 
{ /* Ieee/number.scm 561 */
if(
LLONGP(BgL_yz00_49))
{ /* Ieee/number.scm 561 */
return 
(
REAL_TO_DOUBLE(BgL_xz00_48)>=
(double)(
BLLONG_TO_LLONG(BgL_yz00_49)));}  else 
{ /* Ieee/number.scm 561 */
if(
BGL_UINT64P(BgL_yz00_49))
{ /* Ieee/number.scm 561 */
double BgL_arg1698z00_1353;
{ /* Ieee/number.scm 561 */
double BgL_res3687z00_3781;
{ /* Ieee/number.scm 561 */
uint64_t BgL_xz00_3780;
BgL_xz00_3780 = 
BGL_BINT64_TO_INT64(BgL_yz00_49); 
BgL_res3687z00_3781 = 
(double)(BgL_xz00_3780); } 
BgL_arg1698z00_1353 = BgL_res3687z00_3781; } 
return 
(
REAL_TO_DOUBLE(BgL_xz00_48)>=BgL_arg1698z00_1353);}  else 
{ /* Ieee/number.scm 561 */
if(
BIGNUMP(BgL_yz00_49))
{ /* Ieee/number.scm 561 */
return 
(
REAL_TO_DOUBLE(BgL_xz00_48)>=
bgl_bignum_to_flonum(BgL_yz00_49));}  else 
{ /* Ieee/number.scm 561 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_string5305z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_49));} } } } } } }  else 
{ /* Ieee/number.scm 561 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_xz00_48))
{ /* Ieee/number.scm 561 */
if(
INTEGERP(BgL_yz00_49))
{ /* Ieee/number.scm 561 */
obj_t BgL_arg1704z00_1358;long BgL_arg1707z00_1359;
BgL_arg1704z00_1358 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_48); 
{ /* Ieee/number.scm 561 */
long BgL_res3693z00_3793;
{ /* Ieee/number.scm 561 */
long BgL_tmpz00_9070;
BgL_tmpz00_9070 = 
(long)CINT(BgL_yz00_49); 
BgL_res3693z00_3793 = 
(long)(BgL_tmpz00_9070); } 
BgL_arg1707z00_1359 = BgL_res3693z00_3793; } 
{ /* Ieee/number.scm 561 */
long BgL_n1z00_3794;
{ /* Ieee/number.scm 561 */
obj_t BgL_tmpz00_9073;
if(
ELONGP(BgL_arg1704z00_1358))
{ /* Ieee/number.scm 561 */
BgL_tmpz00_9073 = BgL_arg1704z00_1358
; }  else 
{ 
obj_t BgL_auxz00_9076;
BgL_auxz00_9076 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)21343)), BGl_string5304z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1704z00_1358); 
FAILURE(BgL_auxz00_9076,BFALSE,BFALSE);} 
BgL_n1z00_3794 = 
BELONG_TO_LONG(BgL_tmpz00_9073); } 
return 
(BgL_n1z00_3794>=BgL_arg1707z00_1359);} }  else 
{ /* Ieee/number.scm 561 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_49))
{ /* Ieee/number.scm 561 */
obj_t BgL_arg1709z00_1361;obj_t BgL_arg1710z00_1362;
BgL_arg1709z00_1361 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_48); 
BgL_arg1710z00_1362 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_49); 
{ /* Ieee/number.scm 561 */
long BgL_n1z00_3797;long BgL_n2z00_3798;
{ /* Ieee/number.scm 561 */
obj_t BgL_tmpz00_9086;
if(
ELONGP(BgL_arg1709z00_1361))
{ /* Ieee/number.scm 561 */
BgL_tmpz00_9086 = BgL_arg1709z00_1361
; }  else 
{ 
obj_t BgL_auxz00_9089;
BgL_auxz00_9089 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)21343)), BGl_string5304z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1709z00_1361); 
FAILURE(BgL_auxz00_9089,BFALSE,BFALSE);} 
BgL_n1z00_3797 = 
BELONG_TO_LONG(BgL_tmpz00_9086); } 
{ /* Ieee/number.scm 561 */
obj_t BgL_tmpz00_9094;
if(
ELONGP(BgL_arg1710z00_1362))
{ /* Ieee/number.scm 561 */
BgL_tmpz00_9094 = BgL_arg1710z00_1362
; }  else 
{ 
obj_t BgL_auxz00_9097;
BgL_auxz00_9097 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)21343)), BGl_string5304z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1710z00_1362); 
FAILURE(BgL_auxz00_9097,BFALSE,BFALSE);} 
BgL_n2z00_3798 = 
BELONG_TO_LONG(BgL_tmpz00_9094); } 
return 
(BgL_n1z00_3797>=BgL_n2z00_3798);} }  else 
{ /* Ieee/number.scm 561 */
if(
REALP(BgL_yz00_49))
{ /* Ieee/number.scm 561 */
double BgL_arg1712z00_1364;
{ /* Ieee/number.scm 561 */
obj_t BgL_arg1713z00_1365;
BgL_arg1713z00_1365 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_48); 
{ /* Ieee/number.scm 561 */
long BgL_tmpz00_9106;
{ /* Ieee/number.scm 561 */
obj_t BgL_tmpz00_9107;
if(
ELONGP(BgL_arg1713z00_1365))
{ /* Ieee/number.scm 561 */
BgL_tmpz00_9107 = BgL_arg1713z00_1365
; }  else 
{ 
obj_t BgL_auxz00_9110;
BgL_auxz00_9110 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)21343)), BGl_string5304z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1713z00_1365); 
FAILURE(BgL_auxz00_9110,BFALSE,BFALSE);} 
BgL_tmpz00_9106 = 
BELONG_TO_LONG(BgL_tmpz00_9107); } 
BgL_arg1712z00_1364 = 
(double)(BgL_tmpz00_9106); } } 
return 
(BgL_arg1712z00_1364>=
REAL_TO_DOUBLE(BgL_yz00_49));}  else 
{ /* Ieee/number.scm 561 */
if(
LLONGP(BgL_yz00_49))
{ /* Ieee/number.scm 561 */
BGL_LONGLONG_T BgL_arg1716z00_1367;
{ /* Ieee/number.scm 561 */
obj_t BgL_arg1719z00_1369;
BgL_arg1719z00_1369 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_48); 
{ /* Ieee/number.scm 561 */
long BgL_tmpz00_9121;
{ /* Ieee/number.scm 561 */
obj_t BgL_tmpz00_9122;
if(
ELONGP(BgL_arg1719z00_1369))
{ /* Ieee/number.scm 561 */
BgL_tmpz00_9122 = BgL_arg1719z00_1369
; }  else 
{ 
obj_t BgL_auxz00_9125;
BgL_auxz00_9125 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)21343)), BGl_string5304z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1719z00_1369); 
FAILURE(BgL_auxz00_9125,BFALSE,BFALSE);} 
BgL_tmpz00_9121 = 
BELONG_TO_LONG(BgL_tmpz00_9122); } 
BgL_arg1716z00_1367 = 
(BGL_LONGLONG_T)(BgL_tmpz00_9121); } } 
return 
(BgL_arg1716z00_1367>=
BLLONG_TO_LLONG(BgL_yz00_49));}  else 
{ /* Ieee/number.scm 561 */
if(
BGL_UINT64P(BgL_yz00_49))
{ /* Ieee/number.scm 561 */
uint64_t BgL_arg1721z00_1371;
{ /* Ieee/number.scm 561 */
BGL_LONGLONG_T BgL_arg1722z00_1372;
{ /* Ieee/number.scm 561 */
obj_t BgL_arg1723z00_1373;
BgL_arg1723z00_1373 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_48); 
{ /* Ieee/number.scm 561 */
long BgL_tmpz00_9136;
{ /* Ieee/number.scm 561 */
obj_t BgL_tmpz00_9137;
if(
ELONGP(BgL_arg1723z00_1373))
{ /* Ieee/number.scm 561 */
BgL_tmpz00_9137 = BgL_arg1723z00_1373
; }  else 
{ 
obj_t BgL_auxz00_9140;
BgL_auxz00_9140 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)21343)), BGl_string5304z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1723z00_1373); 
FAILURE(BgL_auxz00_9140,BFALSE,BFALSE);} 
BgL_tmpz00_9136 = 
BELONG_TO_LONG(BgL_tmpz00_9137); } 
BgL_arg1722z00_1372 = 
(BGL_LONGLONG_T)(BgL_tmpz00_9136); } } 
{ /* Ieee/number.scm 561 */
uint64_t BgL_res3701z00_3810;
BgL_res3701z00_3810 = 
(uint64_t)(BgL_arg1722z00_1372); 
BgL_arg1721z00_1371 = BgL_res3701z00_3810; } } 
{ /* Ieee/number.scm 561 */
uint64_t BgL_n2z00_3812;
BgL_n2z00_3812 = 
BGL_BINT64_TO_INT64(BgL_yz00_49); 
return 
(BgL_arg1721z00_1371>=BgL_n2z00_3812);} }  else 
{ /* Ieee/number.scm 561 */
if(
BIGNUMP(BgL_yz00_49))
{ /* Ieee/number.scm 561 */
obj_t BgL_arg1725z00_1375;
{ /* Ieee/number.scm 561 */
obj_t BgL_arg1726z00_1376;
BgL_arg1726z00_1376 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_48); 
{ /* Ieee/number.scm 561 */
long BgL_xz00_3815;
{ /* Ieee/number.scm 561 */
obj_t BgL_tmpz00_9152;
if(
ELONGP(BgL_arg1726z00_1376))
{ /* Ieee/number.scm 561 */
BgL_tmpz00_9152 = BgL_arg1726z00_1376
; }  else 
{ 
obj_t BgL_auxz00_9155;
BgL_auxz00_9155 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)21343)), BGl_string5304z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1726z00_1376); 
FAILURE(BgL_auxz00_9155,BFALSE,BFALSE);} 
BgL_xz00_3815 = 
BELONG_TO_LONG(BgL_tmpz00_9152); } 
BgL_arg1725z00_1375 = 
bgl_long_to_bignum(BgL_xz00_3815); } } 
return 
(
(long)(
bgl_bignum_cmp(BgL_arg1725z00_1375, BgL_yz00_49))>=((long)0));}  else 
{ /* Ieee/number.scm 561 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_string5305z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_49));} } } } } } }  else 
{ /* Ieee/number.scm 561 */
if(
LLONGP(BgL_xz00_48))
{ /* Ieee/number.scm 561 */
if(
INTEGERP(BgL_yz00_49))
{ /* Ieee/number.scm 561 */
BGL_LONGLONG_T BgL_arg1730z00_1380;
{ /* Ieee/number.scm 561 */
BGL_LONGLONG_T BgL_res3709z00_3826;
{ /* Ieee/number.scm 561 */
long BgL_tmpz00_9170;
BgL_tmpz00_9170 = 
(long)CINT(BgL_yz00_49); 
BgL_res3709z00_3826 = 
LONG_TO_LLONG(BgL_tmpz00_9170); } 
BgL_arg1730z00_1380 = BgL_res3709z00_3826; } 
return 
(
BLLONG_TO_LLONG(BgL_xz00_48)>=BgL_arg1730z00_1380);}  else 
{ /* Ieee/number.scm 561 */
if(
REALP(BgL_yz00_49))
{ /* Ieee/number.scm 561 */
return 
(
(double)(
BLLONG_TO_LLONG(BgL_xz00_48))>=
REAL_TO_DOUBLE(BgL_yz00_49));}  else 
{ /* Ieee/number.scm 561 */
if(
LLONGP(BgL_yz00_49))
{ /* Ieee/number.scm 561 */
return 
(
BLLONG_TO_LLONG(BgL_xz00_48)>=
BLLONG_TO_LLONG(BgL_yz00_49));}  else 
{ /* Ieee/number.scm 561 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_49))
{ /* Ieee/number.scm 561 */
BGL_LONGLONG_T BgL_arg1739z00_1388;
{ /* Ieee/number.scm 561 */
obj_t BgL_arg1740z00_1389;
BgL_arg1740z00_1389 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_49); 
{ /* Ieee/number.scm 561 */
long BgL_tmpz00_9189;
{ /* Ieee/number.scm 561 */
obj_t BgL_tmpz00_9190;
if(
ELONGP(BgL_arg1740z00_1389))
{ /* Ieee/number.scm 561 */
BgL_tmpz00_9190 = BgL_arg1740z00_1389
; }  else 
{ 
obj_t BgL_auxz00_9193;
BgL_auxz00_9193 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)21343)), BGl_string5304z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1740z00_1389); 
FAILURE(BgL_auxz00_9193,BFALSE,BFALSE);} 
BgL_tmpz00_9189 = 
BELONG_TO_LONG(BgL_tmpz00_9190); } 
BgL_arg1739z00_1388 = 
(BGL_LONGLONG_T)(BgL_tmpz00_9189); } } 
return 
(
BLLONG_TO_LLONG(BgL_xz00_48)>=BgL_arg1739z00_1388);}  else 
{ /* Ieee/number.scm 561 */
if(
BIGNUMP(BgL_yz00_49))
{ /* Ieee/number.scm 561 */
return 
(
(long)(
bgl_bignum_cmp(
bgl_llong_to_bignum(
BLLONG_TO_LLONG(BgL_xz00_48)), BgL_yz00_49))>=((long)0));}  else 
{ /* Ieee/number.scm 561 */
if(
BGL_UINT64P(BgL_yz00_49))
{ /* Ieee/number.scm 561 */
uint64_t BgL_arg1745z00_1394;
{ /* Ieee/number.scm 561 */
uint64_t BgL_res3721z00_3852;
{ /* Ieee/number.scm 561 */
BGL_LONGLONG_T BgL_tmpz00_9210;
BgL_tmpz00_9210 = 
BLLONG_TO_LLONG(BgL_xz00_48); 
BgL_res3721z00_3852 = 
(uint64_t)(BgL_tmpz00_9210); } 
BgL_arg1745z00_1394 = BgL_res3721z00_3852; } 
{ /* Ieee/number.scm 561 */
uint64_t BgL_n2z00_3854;
BgL_n2z00_3854 = 
BGL_BINT64_TO_INT64(BgL_yz00_49); 
return 
(BgL_arg1745z00_1394>=BgL_n2z00_3854);} }  else 
{ /* Ieee/number.scm 561 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_string5305z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_49));} } } } } } }  else 
{ /* Ieee/number.scm 561 */
if(
BGL_UINT64P(BgL_xz00_48))
{ /* Ieee/number.scm 561 */
if(
INTEGERP(BgL_yz00_49))
{ /* Ieee/number.scm 561 */
uint64_t BgL_arg1748z00_1397;
{ /* Ieee/number.scm 561 */
uint64_t BgL_res3725z00_3859;
{ /* Ieee/number.scm 561 */
long BgL_tmpz00_9221;
BgL_tmpz00_9221 = 
(long)CINT(BgL_yz00_49); 
BgL_res3725z00_3859 = 
(uint64_t)(BgL_tmpz00_9221); } 
BgL_arg1748z00_1397 = BgL_res3725z00_3859; } 
{ /* Ieee/number.scm 561 */
uint64_t BgL_n1z00_3860;
BgL_n1z00_3860 = 
BGL_BINT64_TO_INT64(BgL_xz00_48); 
return 
(BgL_n1z00_3860>=BgL_arg1748z00_1397);} }  else 
{ /* Ieee/number.scm 561 */
if(
BGL_UINT64P(BgL_yz00_49))
{ /* Ieee/number.scm 561 */
uint64_t BgL_n1z00_3864;uint64_t BgL_n2z00_3865;
BgL_n1z00_3864 = 
BGL_BINT64_TO_INT64(BgL_xz00_48); 
BgL_n2z00_3865 = 
BGL_BINT64_TO_INT64(BgL_yz00_49); 
return 
(BgL_n1z00_3864>=BgL_n2z00_3865);}  else 
{ /* Ieee/number.scm 561 */
if(
REALP(BgL_yz00_49))
{ /* Ieee/number.scm 561 */
double BgL_arg1751z00_1400;
{ /* Ieee/number.scm 561 */
uint64_t BgL_tmpz00_9233;
BgL_tmpz00_9233 = 
BGL_BINT64_TO_INT64(BgL_xz00_48); 
BgL_arg1751z00_1400 = 
(double)(BgL_tmpz00_9233); } 
return 
(BgL_arg1751z00_1400>=
REAL_TO_DOUBLE(BgL_yz00_49));}  else 
{ /* Ieee/number.scm 561 */
if(
LLONGP(BgL_yz00_49))
{ /* Ieee/number.scm 561 */
uint64_t BgL_arg1754z00_1402;
{ /* Ieee/number.scm 561 */
uint64_t BgL_res3732z00_3873;
{ /* Ieee/number.scm 561 */
BGL_LONGLONG_T BgL_tmpz00_9240;
BgL_tmpz00_9240 = 
BLLONG_TO_LLONG(BgL_yz00_49); 
BgL_res3732z00_3873 = 
(uint64_t)(BgL_tmpz00_9240); } 
BgL_arg1754z00_1402 = BgL_res3732z00_3873; } 
{ /* Ieee/number.scm 561 */
uint64_t BgL_n1z00_3874;
BgL_n1z00_3874 = 
BGL_BINT64_TO_INT64(BgL_xz00_48); 
return 
(BgL_n1z00_3874>=BgL_arg1754z00_1402);} }  else 
{ /* Ieee/number.scm 561 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_49))
{ /* Ieee/number.scm 561 */
uint64_t BgL_arg1757z00_1405;
{ /* Ieee/number.scm 561 */
BGL_LONGLONG_T BgL_arg1759z00_1406;
{ /* Ieee/number.scm 561 */
obj_t BgL_arg1760z00_1407;
BgL_arg1760z00_1407 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_49); 
{ /* Ieee/number.scm 561 */
long BgL_tmpz00_9248;
{ /* Ieee/number.scm 561 */
obj_t BgL_tmpz00_9249;
if(
ELONGP(BgL_arg1760z00_1407))
{ /* Ieee/number.scm 561 */
BgL_tmpz00_9249 = BgL_arg1760z00_1407
; }  else 
{ 
obj_t BgL_auxz00_9252;
BgL_auxz00_9252 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)21343)), BGl_string5304z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1760z00_1407); 
FAILURE(BgL_auxz00_9252,BFALSE,BFALSE);} 
BgL_tmpz00_9248 = 
BELONG_TO_LONG(BgL_tmpz00_9249); } 
BgL_arg1759z00_1406 = 
(BGL_LONGLONG_T)(BgL_tmpz00_9248); } } 
{ /* Ieee/number.scm 561 */
uint64_t BgL_res3734z00_3878;
BgL_res3734z00_3878 = 
(uint64_t)(BgL_arg1759z00_1406); 
BgL_arg1757z00_1405 = BgL_res3734z00_3878; } } 
{ /* Ieee/number.scm 561 */
uint64_t BgL_n1z00_3879;
BgL_n1z00_3879 = 
BGL_BINT64_TO_INT64(BgL_xz00_48); 
return 
(BgL_n1z00_3879>=BgL_arg1757z00_1405);} }  else 
{ /* Ieee/number.scm 561 */
if(
BIGNUMP(BgL_yz00_49))
{ /* Ieee/number.scm 561 */
long BgL_n1z00_3886;
BgL_n1z00_3886 = 
(long)(
bgl_bignum_cmp(
bgl_uint64_to_bignum(
BGL_BINT64_TO_INT64(BgL_xz00_48)), BgL_yz00_49)); 
return 
(BgL_n1z00_3886>=((long)0));}  else 
{ /* Ieee/number.scm 561 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_string5305z00zz__r4_numbers_6_5z00, BGl_string5292z00zz__r4_numbers_6_5z00, BgL_yz00_49));} } } } } } }  else 
{ /* Ieee/number.scm 561 */
if(
BIGNUMP(BgL_xz00_48))
{ /* Ieee/number.scm 561 */
if(
BIGNUMP(BgL_yz00_49))
{ /* Ieee/number.scm 561 */
return 
(
(long)(
bgl_bignum_cmp(BgL_xz00_48, BgL_yz00_49))>=((long)0));}  else 
{ /* Ieee/number.scm 561 */
if(
INTEGERP(BgL_yz00_49))
{ /* Ieee/number.scm 561 */
return 
(
(long)(
bgl_bignum_cmp(BgL_xz00_48, 
bgl_long_to_bignum(
(long)CINT(BgL_yz00_49))))>=((long)0));}  else 
{ /* Ieee/number.scm 561 */
if(
REALP(BgL_yz00_49))
{ /* Ieee/number.scm 561 */
return 
(
bgl_bignum_to_flonum(BgL_xz00_48)>=
REAL_TO_DOUBLE(BgL_yz00_49));}  else 
{ /* Ieee/number.scm 561 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_49))
{ /* Ieee/number.scm 561 */
obj_t BgL_arg1770z00_1417;
{ /* Ieee/number.scm 561 */
obj_t BgL_arg1771z00_1418;
BgL_arg1771z00_1418 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_49); 
{ /* Ieee/number.scm 561 */
long BgL_xz00_3912;
{ /* Ieee/number.scm 561 */
obj_t BgL_tmpz00_9292;
if(
ELONGP(BgL_arg1771z00_1418))
{ /* Ieee/number.scm 561 */
BgL_tmpz00_9292 = BgL_arg1771z00_1418
; }  else 
{ 
obj_t BgL_auxz00_9295;
BgL_auxz00_9295 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)21343)), BGl_string5304z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1771z00_1418); 
FAILURE(BgL_auxz00_9295,BFALSE,BFALSE);} 
BgL_xz00_3912 = 
BELONG_TO_LONG(BgL_tmpz00_9292); } 
BgL_arg1770z00_1417 = 
bgl_long_to_bignum(BgL_xz00_3912); } } 
return 
(
(long)(
bgl_bignum_cmp(BgL_xz00_48, BgL_arg1770z00_1417))>=((long)0));}  else 
{ /* Ieee/number.scm 561 */
if(
LLONGP(BgL_yz00_49))
{ /* Ieee/number.scm 561 */
return 
(
(long)(
bgl_bignum_cmp(BgL_xz00_48, 
bgl_llong_to_bignum(
BLLONG_TO_LLONG(BgL_yz00_49))))>=((long)0));}  else 
{ /* Ieee/number.scm 561 */
if(
BGL_UINT64P(BgL_yz00_49))
{ /* Ieee/number.scm 561 */
long BgL_n1z00_3933;
BgL_n1z00_3933 = 
(long)(
bgl_bignum_cmp(BgL_xz00_48, 
bgl_uint64_to_bignum(
BGL_BINT64_TO_INT64(BgL_yz00_49)))); 
return 
(BgL_n1z00_3933>=((long)0));}  else 
{ /* Ieee/number.scm 561 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_string5305z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_49));} } } } } } }  else 
{ /* Ieee/number.scm 561 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_string5305z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_xz00_48));} } } } } } } 

}



/* &2>= */
obj_t BGl_z622ze3zd3z52zz__r4_numbers_6_5z00(obj_t BgL_envz00_6512, obj_t BgL_xz00_6513, obj_t BgL_yz00_6514)
{
{ /* Ieee/number.scm 560 */
return 
BBOOL(
BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_xz00_6513, BgL_yz00_6514));} 

}



/* >= */
BGL_EXPORTED_DEF bool_t BGl_ze3zd3z30zz__r4_numbers_6_5z00(obj_t BgL_xz00_50, obj_t BgL_yz00_51, obj_t BgL_za7za7_52)
{
{ /* Ieee/number.scm 566 */
{ 
obj_t BgL_xz00_1426;obj_t BgL_za7za7_1427;
if(
BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_xz00_50, BgL_yz00_51))
{ /* Ieee/number.scm 572 */
BgL_xz00_1426 = BgL_yz00_51; 
BgL_za7za7_1427 = BgL_za7za7_52; 
BgL_zc3z04anonymousza31777ze3z87_1428:
if(
NULLP(BgL_za7za7_1427))
{ /* Ieee/number.scm 569 */
return ((bool_t)1);}  else 
{ /* Ieee/number.scm 570 */
bool_t BgL_test5867z00_9328;
{ /* Ieee/number.scm 570 */
obj_t BgL_arg1783z00_1434;
{ /* Ieee/number.scm 570 */
obj_t BgL_pairz00_3937;
if(
PAIRP(BgL_za7za7_1427))
{ /* Ieee/number.scm 570 */
BgL_pairz00_3937 = BgL_za7za7_1427; }  else 
{ 
obj_t BgL_auxz00_9331;
BgL_auxz00_9331 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)21670)), BGl_string5306z00zz__r4_numbers_6_5z00, BGl_string5294z00zz__r4_numbers_6_5z00, BgL_za7za7_1427); 
FAILURE(BgL_auxz00_9331,BFALSE,BFALSE);} 
BgL_arg1783z00_1434 = 
CAR(BgL_pairz00_3937); } 
BgL_test5867z00_9328 = 
BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_xz00_1426, BgL_arg1783z00_1434); } 
if(BgL_test5867z00_9328)
{ 
obj_t BgL_za7za7_9345;obj_t BgL_xz00_9337;
{ /* Ieee/number.scm 570 */
obj_t BgL_pairz00_3938;
if(
PAIRP(BgL_za7za7_1427))
{ /* Ieee/number.scm 570 */
BgL_pairz00_3938 = BgL_za7za7_1427; }  else 
{ 
obj_t BgL_auxz00_9340;
BgL_auxz00_9340 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)21688)), BGl_string5306z00zz__r4_numbers_6_5z00, BGl_string5294z00zz__r4_numbers_6_5z00, BgL_za7za7_1427); 
FAILURE(BgL_auxz00_9340,BFALSE,BFALSE);} 
BgL_xz00_9337 = 
CAR(BgL_pairz00_3938); } 
{ /* Ieee/number.scm 570 */
obj_t BgL_pairz00_3939;
if(
PAIRP(BgL_za7za7_1427))
{ /* Ieee/number.scm 570 */
BgL_pairz00_3939 = BgL_za7za7_1427; }  else 
{ 
obj_t BgL_auxz00_9348;
BgL_auxz00_9348 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)21696)), BGl_string5306z00zz__r4_numbers_6_5z00, BGl_string5294z00zz__r4_numbers_6_5z00, BgL_za7za7_1427); 
FAILURE(BgL_auxz00_9348,BFALSE,BFALSE);} 
BgL_za7za7_9345 = 
CDR(BgL_pairz00_3939); } 
BgL_za7za7_1427 = BgL_za7za7_9345; 
BgL_xz00_1426 = BgL_xz00_9337; 
goto BgL_zc3z04anonymousza31777ze3z87_1428;}  else 
{ /* Ieee/number.scm 570 */
return ((bool_t)0);} } }  else 
{ /* Ieee/number.scm 572 */
return ((bool_t)0);} } } 

}



/* &>= */
obj_t BGl_z62ze3zd3z52zz__r4_numbers_6_5z00(obj_t BgL_envz00_6515, obj_t BgL_xz00_6516, obj_t BgL_yz00_6517, obj_t BgL_za7za7_6518)
{
{ /* Ieee/number.scm 566 */
return 
BBOOL(
BGl_ze3zd3z30zz__r4_numbers_6_5z00(BgL_xz00_6516, BgL_yz00_6517, BgL_za7za7_6518));} 

}



/* zero? */
BGL_EXPORTED_DEF bool_t BGl_za7erozf3z54zz__r4_numbers_6_5z00(obj_t BgL_xz00_53)
{
{ /* Ieee/number.scm 577 */
if(
INTEGERP(BgL_xz00_53))
{ /* Ieee/number.scm 579 */
return 
(
(long)CINT(BgL_xz00_53)==((long)0));}  else 
{ /* Ieee/number.scm 579 */
if(
REALP(BgL_xz00_53))
{ /* Ieee/number.scm 580 */
return 
(
REAL_TO_DOUBLE(BgL_xz00_53)==((double)0.0));}  else 
{ /* Ieee/number.scm 580 */
if(
ELONGP(BgL_xz00_53))
{ /* Ieee/number.scm 581 */
long BgL_n1z00_3952;
BgL_n1z00_3952 = 
BELONG_TO_LONG(BgL_xz00_53); 
return 
(BgL_n1z00_3952==((long)0));}  else 
{ /* Ieee/number.scm 581 */
if(
LLONGP(BgL_xz00_53))
{ /* Ieee/number.scm 582 */
return 
(
BLLONG_TO_LLONG(BgL_xz00_53)==((BGL_LONGLONG_T)0));}  else 
{ /* Ieee/number.scm 582 */
if(
BIGNUMP(BgL_xz00_53))
{ /* Ieee/number.scm 583 */
return 
BXZERO(BgL_xz00_53);}  else 
{ /* Ieee/number.scm 583 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_string5307z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_xz00_53));} } } } } } 

}



/* &zero? */
obj_t BGl_z62za7erozf3z36zz__r4_numbers_6_5z00(obj_t BgL_envz00_6519, obj_t BgL_xz00_6520)
{
{ /* Ieee/number.scm 577 */
return 
BBOOL(
BGl_za7erozf3z54zz__r4_numbers_6_5z00(BgL_xz00_6520));} 

}



/* positive? */
BGL_EXPORTED_DEF bool_t BGl_positivezf3zf3zz__r4_numbers_6_5z00(obj_t BgL_xz00_54)
{
{ /* Ieee/number.scm 589 */
if(
INTEGERP(BgL_xz00_54))
{ /* Ieee/number.scm 591 */
return 
(
(long)CINT(BgL_xz00_54)>((long)0));}  else 
{ /* Ieee/number.scm 591 */
if(
REALP(BgL_xz00_54))
{ /* Ieee/number.scm 592 */
return 
(
REAL_TO_DOUBLE(BgL_xz00_54)>((double)0.0));}  else 
{ /* Ieee/number.scm 592 */
if(
ELONGP(BgL_xz00_54))
{ /* Ieee/number.scm 593 */
long BgL_n1z00_3974;
BgL_n1z00_3974 = 
BELONG_TO_LONG(BgL_xz00_54); 
return 
(BgL_n1z00_3974>((long)0));}  else 
{ /* Ieee/number.scm 593 */
if(
LLONGP(BgL_xz00_54))
{ /* Ieee/number.scm 594 */
return 
(
BLLONG_TO_LLONG(BgL_xz00_54)>((BGL_LONGLONG_T)0));}  else 
{ /* Ieee/number.scm 594 */
if(
BIGNUMP(BgL_xz00_54))
{ /* Ieee/number.scm 595 */
return 
BXPOSITIVE(BgL_xz00_54);}  else 
{ /* Ieee/number.scm 595 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_string5308z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_xz00_54));} } } } } } 

}



/* &positive? */
obj_t BGl_z62positivezf3z91zz__r4_numbers_6_5z00(obj_t BgL_envz00_6521, obj_t BgL_xz00_6522)
{
{ /* Ieee/number.scm 589 */
return 
BBOOL(
BGl_positivezf3zf3zz__r4_numbers_6_5z00(BgL_xz00_6522));} 

}



/* negative? */
BGL_EXPORTED_DEF bool_t BGl_negativezf3zf3zz__r4_numbers_6_5z00(obj_t BgL_xz00_55)
{
{ /* Ieee/number.scm 601 */
if(
INTEGERP(BgL_xz00_55))
{ /* Ieee/number.scm 603 */
return 
(
(long)CINT(BgL_xz00_55)<((long)0));}  else 
{ /* Ieee/number.scm 603 */
if(
REALP(BgL_xz00_55))
{ /* Ieee/number.scm 604 */
return 
(
REAL_TO_DOUBLE(BgL_xz00_55)<((double)0.0));}  else 
{ /* Ieee/number.scm 604 */
if(
ELONGP(BgL_xz00_55))
{ /* Ieee/number.scm 605 */
long BgL_n1z00_3996;
BgL_n1z00_3996 = 
BELONG_TO_LONG(BgL_xz00_55); 
return 
(BgL_n1z00_3996<((long)0));}  else 
{ /* Ieee/number.scm 605 */
if(
LLONGP(BgL_xz00_55))
{ /* Ieee/number.scm 606 */
return 
(
BLLONG_TO_LLONG(BgL_xz00_55)<((BGL_LONGLONG_T)0));}  else 
{ /* Ieee/number.scm 606 */
if(
BIGNUMP(BgL_xz00_55))
{ /* Ieee/number.scm 607 */
return 
BXNEGATIVE(BgL_xz00_55);}  else 
{ /* Ieee/number.scm 607 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_string5309z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_xz00_55));} } } } } } 

}



/* &negative? */
obj_t BGl_z62negativezf3z91zz__r4_numbers_6_5z00(obj_t BgL_envz00_6523, obj_t BgL_xz00_6524)
{
{ /* Ieee/number.scm 601 */
return 
BBOOL(
BGl_negativezf3zf3zz__r4_numbers_6_5z00(BgL_xz00_6524));} 

}



/* 2max */
BGL_EXPORTED_DEF obj_t BGl_2maxz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_68, obj_t BgL_yz00_69)
{
{ /* Ieee/number.scm 629 */
if(
INTEGERP(BgL_xz00_68))
{ /* Ieee/number.scm 630 */
if(
INTEGERP(BgL_yz00_69))
{ /* Ieee/number.scm 630 */
if(
(
(long)CINT(BgL_xz00_68)>
(long)CINT(BgL_yz00_69)))
{ /* Ieee/number.scm 614 */
return BgL_xz00_68;}  else 
{ /* Ieee/number.scm 614 */
return BgL_yz00_69;} }  else 
{ /* Ieee/number.scm 630 */
if(
REALP(BgL_yz00_69))
{ /* Ieee/number.scm 630 */
double BgL_arg1808z00_1460;
BgL_arg1808z00_1460 = 
(double)(
(long)CINT(BgL_xz00_68)); 
if(
(BgL_arg1808z00_1460>
REAL_TO_DOUBLE(BgL_yz00_69)))
{ /* Ieee/number.scm 616 */
return 
DOUBLE_TO_REAL(BgL_arg1808z00_1460);}  else 
{ /* Ieee/number.scm 616 */
return BgL_yz00_69;} }  else 
{ /* Ieee/number.scm 630 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_69))
{ /* Ieee/number.scm 630 */
long BgL_arg1810z00_1462;obj_t BgL_arg1811z00_1463;
{ /* Ieee/number.scm 630 */
long BgL_res3809z00_4045;
{ /* Ieee/number.scm 630 */
long BgL_tmpz00_9442;
BgL_tmpz00_9442 = 
(long)CINT(BgL_xz00_68); 
BgL_res3809z00_4045 = 
(long)(BgL_tmpz00_9442); } 
BgL_arg1810z00_1462 = BgL_res3809z00_4045; } 
BgL_arg1811z00_1463 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_69); 
{ /* Ieee/number.scm 618 */
bool_t BgL_test5892z00_9446;
{ /* Ieee/number.scm 618 */
long BgL_n2z00_4048;
{ /* Ieee/number.scm 618 */
obj_t BgL_tmpz00_9447;
if(
ELONGP(BgL_arg1811z00_1463))
{ /* Ieee/number.scm 618 */
BgL_tmpz00_9447 = BgL_arg1811z00_1463
; }  else 
{ 
obj_t BgL_auxz00_9450;
BgL_auxz00_9450 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)23545)), BGl_string5310z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1811z00_1463); 
FAILURE(BgL_auxz00_9450,BFALSE,BFALSE);} 
BgL_n2z00_4048 = 
BELONG_TO_LONG(BgL_tmpz00_9447); } 
BgL_test5892z00_9446 = 
(BgL_arg1810z00_1462>BgL_n2z00_4048); } 
if(BgL_test5892z00_9446)
{ /* Ieee/number.scm 618 */
return 
make_belong(BgL_arg1810z00_1462);}  else 
{ /* Ieee/number.scm 618 */
return BgL_arg1811z00_1463;} } }  else 
{ /* Ieee/number.scm 630 */
if(
LLONGP(BgL_yz00_69))
{ /* Ieee/number.scm 630 */
BGL_LONGLONG_T BgL_arg1813z00_1465;
{ /* Ieee/number.scm 630 */
BGL_LONGLONG_T BgL_res3812z00_4052;
{ /* Ieee/number.scm 630 */
long BgL_tmpz00_9459;
BgL_tmpz00_9459 = 
(long)CINT(BgL_xz00_68); 
BgL_res3812z00_4052 = 
LONG_TO_LLONG(BgL_tmpz00_9459); } 
BgL_arg1813z00_1465 = BgL_res3812z00_4052; } 
if(
(BgL_arg1813z00_1465>
BLLONG_TO_LLONG(BgL_yz00_69)))
{ /* Ieee/number.scm 620 */
return 
make_bllong(BgL_arg1813z00_1465);}  else 
{ /* Ieee/number.scm 620 */
return BgL_yz00_69;} }  else 
{ /* Ieee/number.scm 630 */
if(
BGL_UINT64P(BgL_yz00_69))
{ /* Ieee/number.scm 630 */
uint64_t BgL_arg1816z00_1468;
{ /* Ieee/number.scm 630 */
BGL_LONGLONG_T BgL_arg1817z00_1469;
{ /* Ieee/number.scm 630 */
BGL_LONGLONG_T BgL_res3815z00_4059;
{ /* Ieee/number.scm 630 */
long BgL_tmpz00_9468;
BgL_tmpz00_9468 = 
(long)CINT(BgL_xz00_68); 
BgL_res3815z00_4059 = 
LONG_TO_LLONG(BgL_tmpz00_9468); } 
BgL_arg1817z00_1469 = BgL_res3815z00_4059; } 
{ /* Ieee/number.scm 630 */
uint64_t BgL_res3816z00_4061;
BgL_res3816z00_4061 = 
(uint64_t)(BgL_arg1817z00_1469); 
BgL_arg1816z00_1468 = BgL_res3816z00_4061; } } 
{ /* Ieee/number.scm 624 */
bool_t BgL_test5897z00_9472;
{ /* Ieee/number.scm 624 */
uint64_t BgL_n2z00_4064;
BgL_n2z00_4064 = 
BGL_BINT64_TO_INT64(BgL_yz00_69); 
BgL_test5897z00_9472 = 
(BgL_arg1816z00_1468>BgL_n2z00_4064); } 
if(BgL_test5897z00_9472)
{ /* Ieee/number.scm 624 */
return 
BGL_UINT64_TO_BUINT64(BgL_arg1816z00_1468);}  else 
{ /* Ieee/number.scm 624 */
return BgL_yz00_69;} } }  else 
{ /* Ieee/number.scm 630 */
if(
BIGNUMP(BgL_yz00_69))
{ /* Ieee/number.scm 630 */
obj_t BgL_arg1819z00_1471;
BgL_arg1819z00_1471 = 
bgl_long_to_bignum(
(long)CINT(BgL_xz00_68)); 
if(
(
(long)(
bgl_bignum_cmp(BgL_arg1819z00_1471, BgL_yz00_69))>((long)0)))
{ /* Ieee/number.scm 622 */
return BgL_arg1819z00_1471;}  else 
{ /* Ieee/number.scm 622 */
return BgL_yz00_69;} }  else 
{ /* Ieee/number.scm 630 */
return 
BGl_errorz00zz__errorz00(BGl_string5310z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_69);} } } } } } }  else 
{ /* Ieee/number.scm 630 */
if(
REALP(BgL_xz00_68))
{ /* Ieee/number.scm 630 */
if(
REALP(BgL_yz00_69))
{ /* Ieee/number.scm 630 */
if(
(
REAL_TO_DOUBLE(BgL_xz00_68)>
REAL_TO_DOUBLE(BgL_yz00_69)))
{ /* Ieee/number.scm 616 */
return BgL_xz00_68;}  else 
{ /* Ieee/number.scm 616 */
return BgL_yz00_69;} }  else 
{ /* Ieee/number.scm 630 */
if(
INTEGERP(BgL_yz00_69))
{ /* Ieee/number.scm 630 */
double BgL_arg1823z00_1475;
BgL_arg1823z00_1475 = 
(double)(
(long)CINT(BgL_yz00_69)); 
if(
(
REAL_TO_DOUBLE(BgL_xz00_68)>BgL_arg1823z00_1475))
{ /* Ieee/number.scm 616 */
return BgL_xz00_68;}  else 
{ /* Ieee/number.scm 616 */
return 
DOUBLE_TO_REAL(BgL_arg1823z00_1475);} }  else 
{ /* Ieee/number.scm 630 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_69))
{ /* Ieee/number.scm 630 */
double BgL_arg1825z00_1477;
{ /* Ieee/number.scm 630 */
obj_t BgL_arg1826z00_1478;
BgL_arg1826z00_1478 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_69); 
{ /* Ieee/number.scm 630 */
long BgL_tmpz00_9504;
{ /* Ieee/number.scm 630 */
obj_t BgL_tmpz00_9505;
if(
ELONGP(BgL_arg1826z00_1478))
{ /* Ieee/number.scm 630 */
BgL_tmpz00_9505 = BgL_arg1826z00_1478
; }  else 
{ 
obj_t BgL_auxz00_9508;
BgL_auxz00_9508 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)23960)), BGl_string5310z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1826z00_1478); 
FAILURE(BgL_auxz00_9508,BFALSE,BFALSE);} 
BgL_tmpz00_9504 = 
BELONG_TO_LONG(BgL_tmpz00_9505); } 
BgL_arg1825z00_1477 = 
(double)(BgL_tmpz00_9504); } } 
if(
(
REAL_TO_DOUBLE(BgL_xz00_68)>BgL_arg1825z00_1477))
{ /* Ieee/number.scm 616 */
return BgL_xz00_68;}  else 
{ /* Ieee/number.scm 616 */
return 
DOUBLE_TO_REAL(BgL_arg1825z00_1477);} }  else 
{ /* Ieee/number.scm 630 */
if(
LLONGP(BgL_yz00_69))
{ /* Ieee/number.scm 630 */
double BgL_arg1828z00_1480;
BgL_arg1828z00_1480 = 
(double)(
BLLONG_TO_LLONG(BgL_yz00_69)); 
if(
(
REAL_TO_DOUBLE(BgL_xz00_68)>BgL_arg1828z00_1480))
{ /* Ieee/number.scm 616 */
return BgL_xz00_68;}  else 
{ /* Ieee/number.scm 616 */
return 
DOUBLE_TO_REAL(BgL_arg1828z00_1480);} }  else 
{ /* Ieee/number.scm 630 */
if(
BGL_UINT64P(BgL_yz00_69))
{ /* Ieee/number.scm 630 */
double BgL_arg1831z00_1483;
{ /* Ieee/number.scm 630 */
double BgL_res3831z00_4098;
{ /* Ieee/number.scm 630 */
uint64_t BgL_xz00_4097;
BgL_xz00_4097 = 
BGL_BINT64_TO_INT64(BgL_yz00_69); 
BgL_res3831z00_4098 = 
(double)(BgL_xz00_4097); } 
BgL_arg1831z00_1483 = BgL_res3831z00_4098; } 
if(
(
REAL_TO_DOUBLE(BgL_xz00_68)>BgL_arg1831z00_1483))
{ /* Ieee/number.scm 616 */
return BgL_xz00_68;}  else 
{ /* Ieee/number.scm 616 */
return 
DOUBLE_TO_REAL(BgL_arg1831z00_1483);} }  else 
{ /* Ieee/number.scm 630 */
if(
BIGNUMP(BgL_yz00_69))
{ /* Ieee/number.scm 630 */
double BgL_arg1833z00_1485;
BgL_arg1833z00_1485 = 
bgl_bignum_to_flonum(BgL_yz00_69); 
if(
(
REAL_TO_DOUBLE(BgL_xz00_68)>BgL_arg1833z00_1485))
{ /* Ieee/number.scm 616 */
return BgL_xz00_68;}  else 
{ /* Ieee/number.scm 616 */
return 
DOUBLE_TO_REAL(BgL_arg1833z00_1485);} }  else 
{ /* Ieee/number.scm 630 */
return 
BGl_errorz00zz__errorz00(BGl_string5310z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_69);} } } } } } }  else 
{ /* Ieee/number.scm 630 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_xz00_68))
{ /* Ieee/number.scm 630 */
if(
INTEGERP(BgL_yz00_69))
{ /* Ieee/number.scm 630 */
obj_t BgL_arg1836z00_1488;long BgL_arg1838z00_1489;
BgL_arg1836z00_1488 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_68); 
{ /* Ieee/number.scm 630 */
long BgL_res3837z00_4112;
{ /* Ieee/number.scm 630 */
long BgL_tmpz00_9547;
BgL_tmpz00_9547 = 
(long)CINT(BgL_yz00_69); 
BgL_res3837z00_4112 = 
(long)(BgL_tmpz00_9547); } 
BgL_arg1838z00_1489 = BgL_res3837z00_4112; } 
{ /* Ieee/number.scm 618 */
bool_t BgL_test5916z00_9550;
{ /* Ieee/number.scm 618 */
long BgL_n1z00_4114;
{ /* Ieee/number.scm 618 */
obj_t BgL_tmpz00_9551;
if(
ELONGP(BgL_arg1836z00_1488))
{ /* Ieee/number.scm 618 */
BgL_tmpz00_9551 = BgL_arg1836z00_1488
; }  else 
{ 
obj_t BgL_auxz00_9554;
BgL_auxz00_9554 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)23543)), BGl_string5310z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1836z00_1488); 
FAILURE(BgL_auxz00_9554,BFALSE,BFALSE);} 
BgL_n1z00_4114 = 
BELONG_TO_LONG(BgL_tmpz00_9551); } 
BgL_test5916z00_9550 = 
(BgL_n1z00_4114>BgL_arg1838z00_1489); } 
if(BgL_test5916z00_9550)
{ /* Ieee/number.scm 618 */
return BgL_arg1836z00_1488;}  else 
{ /* Ieee/number.scm 618 */
return 
make_belong(BgL_arg1838z00_1489);} } }  else 
{ /* Ieee/number.scm 630 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_69))
{ /* Ieee/number.scm 630 */
obj_t BgL_arg1840z00_1491;obj_t BgL_arg1841z00_1492;
BgL_arg1840z00_1491 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_68); 
BgL_arg1841z00_1492 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_69); 
{ /* Ieee/number.scm 618 */
bool_t BgL_test5919z00_9565;
{ /* Ieee/number.scm 618 */
long BgL_n1z00_4118;long BgL_n2z00_4119;
{ /* Ieee/number.scm 618 */
obj_t BgL_tmpz00_9566;
if(
ELONGP(BgL_arg1840z00_1491))
{ /* Ieee/number.scm 618 */
BgL_tmpz00_9566 = BgL_arg1840z00_1491
; }  else 
{ 
obj_t BgL_auxz00_9569;
BgL_auxz00_9569 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)23543)), BGl_string5310z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1840z00_1491); 
FAILURE(BgL_auxz00_9569,BFALSE,BFALSE);} 
BgL_n1z00_4118 = 
BELONG_TO_LONG(BgL_tmpz00_9566); } 
{ /* Ieee/number.scm 618 */
obj_t BgL_tmpz00_9574;
if(
ELONGP(BgL_arg1841z00_1492))
{ /* Ieee/number.scm 618 */
BgL_tmpz00_9574 = BgL_arg1841z00_1492
; }  else 
{ 
obj_t BgL_auxz00_9577;
BgL_auxz00_9577 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)23545)), BGl_string5310z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1841z00_1492); 
FAILURE(BgL_auxz00_9577,BFALSE,BFALSE);} 
BgL_n2z00_4119 = 
BELONG_TO_LONG(BgL_tmpz00_9574); } 
BgL_test5919z00_9565 = 
(BgL_n1z00_4118>BgL_n2z00_4119); } 
if(BgL_test5919z00_9565)
{ /* Ieee/number.scm 618 */
return BgL_arg1840z00_1491;}  else 
{ /* Ieee/number.scm 618 */
return BgL_arg1841z00_1492;} } }  else 
{ /* Ieee/number.scm 630 */
if(
REALP(BgL_yz00_69))
{ /* Ieee/number.scm 630 */
double BgL_arg1845z00_1494;
{ /* Ieee/number.scm 630 */
obj_t BgL_arg1846z00_1495;
BgL_arg1846z00_1495 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_68); 
{ /* Ieee/number.scm 630 */
long BgL_tmpz00_9586;
{ /* Ieee/number.scm 630 */
obj_t BgL_tmpz00_9587;
if(
ELONGP(BgL_arg1846z00_1495))
{ /* Ieee/number.scm 630 */
BgL_tmpz00_9587 = BgL_arg1846z00_1495
; }  else 
{ 
obj_t BgL_auxz00_9590;
BgL_auxz00_9590 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)23960)), BGl_string5310z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1846z00_1495); 
FAILURE(BgL_auxz00_9590,BFALSE,BFALSE);} 
BgL_tmpz00_9586 = 
BELONG_TO_LONG(BgL_tmpz00_9587); } 
BgL_arg1845z00_1494 = 
(double)(BgL_tmpz00_9586); } } 
if(
(BgL_arg1845z00_1494>
REAL_TO_DOUBLE(BgL_yz00_69)))
{ /* Ieee/number.scm 616 */
return 
DOUBLE_TO_REAL(BgL_arg1845z00_1494);}  else 
{ /* Ieee/number.scm 616 */
return BgL_yz00_69;} }  else 
{ /* Ieee/number.scm 630 */
if(
LLONGP(BgL_yz00_69))
{ /* Ieee/number.scm 630 */
BGL_LONGLONG_T BgL_arg1848z00_1497;
{ /* Ieee/number.scm 630 */
obj_t BgL_arg1851z00_1499;
BgL_arg1851z00_1499 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_68); 
{ /* Ieee/number.scm 630 */
long BgL_tmpz00_9603;
{ /* Ieee/number.scm 630 */
obj_t BgL_tmpz00_9604;
if(
ELONGP(BgL_arg1851z00_1499))
{ /* Ieee/number.scm 630 */
BgL_tmpz00_9604 = BgL_arg1851z00_1499
; }  else 
{ 
obj_t BgL_auxz00_9607;
BgL_auxz00_9607 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)23960)), BGl_string5310z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1851z00_1499); 
FAILURE(BgL_auxz00_9607,BFALSE,BFALSE);} 
BgL_tmpz00_9603 = 
BELONG_TO_LONG(BgL_tmpz00_9604); } 
BgL_arg1848z00_1497 = 
(BGL_LONGLONG_T)(BgL_tmpz00_9603); } } 
if(
(BgL_arg1848z00_1497>
BLLONG_TO_LLONG(BgL_yz00_69)))
{ /* Ieee/number.scm 620 */
return 
make_bllong(BgL_arg1848z00_1497);}  else 
{ /* Ieee/number.scm 620 */
return BgL_yz00_69;} }  else 
{ /* Ieee/number.scm 630 */
if(
BGL_UINT64P(BgL_yz00_69))
{ /* Ieee/number.scm 630 */
uint64_t BgL_arg1853z00_1501;
{ /* Ieee/number.scm 630 */
BGL_LONGLONG_T BgL_arg1855z00_1502;
{ /* Ieee/number.scm 630 */
obj_t BgL_arg1856z00_1503;
BgL_arg1856z00_1503 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_68); 
{ /* Ieee/number.scm 630 */
long BgL_tmpz00_9620;
{ /* Ieee/number.scm 630 */
obj_t BgL_tmpz00_9621;
if(
ELONGP(BgL_arg1856z00_1503))
{ /* Ieee/number.scm 630 */
BgL_tmpz00_9621 = BgL_arg1856z00_1503
; }  else 
{ 
obj_t BgL_auxz00_9624;
BgL_auxz00_9624 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)23960)), BGl_string5310z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1856z00_1503); 
FAILURE(BgL_auxz00_9624,BFALSE,BFALSE);} 
BgL_tmpz00_9620 = 
BELONG_TO_LONG(BgL_tmpz00_9621); } 
BgL_arg1855z00_1502 = 
(BGL_LONGLONG_T)(BgL_tmpz00_9620); } } 
{ /* Ieee/number.scm 630 */
uint64_t BgL_res3845z00_4133;
BgL_res3845z00_4133 = 
(uint64_t)(BgL_arg1855z00_1502); 
BgL_arg1853z00_1501 = BgL_res3845z00_4133; } } 
{ /* Ieee/number.scm 624 */
bool_t BgL_test5930z00_9631;
{ /* Ieee/number.scm 624 */
uint64_t BgL_n2z00_4136;
BgL_n2z00_4136 = 
BGL_BINT64_TO_INT64(BgL_yz00_69); 
BgL_test5930z00_9631 = 
(BgL_arg1853z00_1501>BgL_n2z00_4136); } 
if(BgL_test5930z00_9631)
{ /* Ieee/number.scm 624 */
return 
BGL_UINT64_TO_BUINT64(BgL_arg1853z00_1501);}  else 
{ /* Ieee/number.scm 624 */
return BgL_yz00_69;} } }  else 
{ /* Ieee/number.scm 630 */
if(
BIGNUMP(BgL_yz00_69))
{ /* Ieee/number.scm 630 */
obj_t BgL_arg1858z00_1505;
{ /* Ieee/number.scm 630 */
obj_t BgL_arg1859z00_1506;
BgL_arg1859z00_1506 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_68); 
{ /* Ieee/number.scm 630 */
long BgL_xz00_4139;
{ /* Ieee/number.scm 630 */
obj_t BgL_tmpz00_9638;
if(
ELONGP(BgL_arg1859z00_1506))
{ /* Ieee/number.scm 630 */
BgL_tmpz00_9638 = BgL_arg1859z00_1506
; }  else 
{ 
obj_t BgL_auxz00_9641;
BgL_auxz00_9641 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)23960)), BGl_string5310z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1859z00_1506); 
FAILURE(BgL_auxz00_9641,BFALSE,BFALSE);} 
BgL_xz00_4139 = 
BELONG_TO_LONG(BgL_tmpz00_9638); } 
BgL_arg1858z00_1505 = 
bgl_long_to_bignum(BgL_xz00_4139); } } 
if(
(
(long)(
bgl_bignum_cmp(BgL_arg1858z00_1505, BgL_yz00_69))>((long)0)))
{ /* Ieee/number.scm 622 */
return BgL_arg1858z00_1505;}  else 
{ /* Ieee/number.scm 622 */
return BgL_yz00_69;} }  else 
{ /* Ieee/number.scm 630 */
return 
BGl_errorz00zz__errorz00(BGl_string5310z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_69);} } } } } } }  else 
{ /* Ieee/number.scm 630 */
if(
LLONGP(BgL_xz00_68))
{ /* Ieee/number.scm 630 */
if(
INTEGERP(BgL_yz00_69))
{ /* Ieee/number.scm 630 */
BGL_LONGLONG_T BgL_arg1863z00_1510;
{ /* Ieee/number.scm 630 */
BGL_LONGLONG_T BgL_res3853z00_4151;
{ /* Ieee/number.scm 630 */
long BgL_tmpz00_9656;
BgL_tmpz00_9656 = 
(long)CINT(BgL_yz00_69); 
BgL_res3853z00_4151 = 
LONG_TO_LLONG(BgL_tmpz00_9656); } 
BgL_arg1863z00_1510 = BgL_res3853z00_4151; } 
if(
(
BLLONG_TO_LLONG(BgL_xz00_68)>BgL_arg1863z00_1510))
{ /* Ieee/number.scm 620 */
return BgL_xz00_68;}  else 
{ /* Ieee/number.scm 620 */
return 
make_bllong(BgL_arg1863z00_1510);} }  else 
{ /* Ieee/number.scm 630 */
if(
REALP(BgL_yz00_69))
{ /* Ieee/number.scm 630 */
double BgL_arg1865z00_1512;
BgL_arg1865z00_1512 = 
(double)(
BLLONG_TO_LLONG(BgL_xz00_68)); 
if(
(BgL_arg1865z00_1512>
REAL_TO_DOUBLE(BgL_yz00_69)))
{ /* Ieee/number.scm 616 */
return 
DOUBLE_TO_REAL(BgL_arg1865z00_1512);}  else 
{ /* Ieee/number.scm 616 */
return BgL_yz00_69;} }  else 
{ /* Ieee/number.scm 630 */
if(
LLONGP(BgL_yz00_69))
{ /* Ieee/number.scm 630 */
if(
(
BLLONG_TO_LLONG(BgL_xz00_68)>
BLLONG_TO_LLONG(BgL_yz00_69)))
{ /* Ieee/number.scm 620 */
return BgL_xz00_68;}  else 
{ /* Ieee/number.scm 620 */
return BgL_yz00_69;} }  else 
{ /* Ieee/number.scm 630 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_69))
{ /* Ieee/number.scm 630 */
BGL_LONGLONG_T BgL_arg1873z00_1518;
{ /* Ieee/number.scm 630 */
obj_t BgL_arg1874z00_1519;
BgL_arg1874z00_1519 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_69); 
{ /* Ieee/number.scm 630 */
long BgL_tmpz00_9680;
{ /* Ieee/number.scm 630 */
obj_t BgL_tmpz00_9681;
if(
ELONGP(BgL_arg1874z00_1519))
{ /* Ieee/number.scm 630 */
BgL_tmpz00_9681 = BgL_arg1874z00_1519
; }  else 
{ 
obj_t BgL_auxz00_9684;
BgL_auxz00_9684 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)23960)), BGl_string5310z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1874z00_1519); 
FAILURE(BgL_auxz00_9684,BFALSE,BFALSE);} 
BgL_tmpz00_9680 = 
BELONG_TO_LONG(BgL_tmpz00_9681); } 
BgL_arg1873z00_1518 = 
(BGL_LONGLONG_T)(BgL_tmpz00_9680); } } 
if(
(
BLLONG_TO_LLONG(BgL_xz00_68)>BgL_arg1873z00_1518))
{ /* Ieee/number.scm 620 */
return BgL_xz00_68;}  else 
{ /* Ieee/number.scm 620 */
return 
make_bllong(BgL_arg1873z00_1518);} }  else 
{ /* Ieee/number.scm 630 */
if(
BIGNUMP(BgL_yz00_69))
{ /* Ieee/number.scm 630 */
obj_t BgL_arg1876z00_1521;
BgL_arg1876z00_1521 = 
bgl_llong_to_bignum(
BLLONG_TO_LLONG(BgL_xz00_68)); 
if(
(
(long)(
bgl_bignum_cmp(BgL_arg1876z00_1521, BgL_yz00_69))>((long)0)))
{ /* Ieee/number.scm 622 */
return BgL_arg1876z00_1521;}  else 
{ /* Ieee/number.scm 622 */
return BgL_yz00_69;} }  else 
{ /* Ieee/number.scm 630 */
if(
BGL_UINT64P(BgL_yz00_69))
{ /* Ieee/number.scm 630 */
uint64_t BgL_arg1879z00_1524;
{ /* Ieee/number.scm 630 */
uint64_t BgL_res3865z00_4182;
{ /* Ieee/number.scm 630 */
BGL_LONGLONG_T BgL_tmpz00_9704;
BgL_tmpz00_9704 = 
BLLONG_TO_LLONG(BgL_xz00_68); 
BgL_res3865z00_4182 = 
(uint64_t)(BgL_tmpz00_9704); } 
BgL_arg1879z00_1524 = BgL_res3865z00_4182; } 
{ /* Ieee/number.scm 624 */
bool_t BgL_test5947z00_9707;
{ /* Ieee/number.scm 624 */
uint64_t BgL_n2z00_4185;
BgL_n2z00_4185 = 
BGL_BINT64_TO_INT64(BgL_yz00_69); 
BgL_test5947z00_9707 = 
(BgL_arg1879z00_1524>BgL_n2z00_4185); } 
if(BgL_test5947z00_9707)
{ /* Ieee/number.scm 624 */
return 
BGL_UINT64_TO_BUINT64(BgL_arg1879z00_1524);}  else 
{ /* Ieee/number.scm 624 */
return BgL_yz00_69;} } }  else 
{ /* Ieee/number.scm 630 */
return 
BGl_errorz00zz__errorz00(BGl_string5310z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_69);} } } } } } }  else 
{ /* Ieee/number.scm 630 */
if(
BGL_UINT64P(BgL_xz00_68))
{ /* Ieee/number.scm 630 */
if(
INTEGERP(BgL_yz00_69))
{ /* Ieee/number.scm 630 */
uint64_t BgL_arg1882z00_1527;
{ /* Ieee/number.scm 630 */
uint64_t BgL_res3869z00_4190;
{ /* Ieee/number.scm 630 */
long BgL_tmpz00_9716;
BgL_tmpz00_9716 = 
(long)CINT(BgL_yz00_69); 
BgL_res3869z00_4190 = 
(uint64_t)(BgL_tmpz00_9716); } 
BgL_arg1882z00_1527 = BgL_res3869z00_4190; } 
{ /* Ieee/number.scm 624 */
bool_t BgL_test5950z00_9719;
{ /* Ieee/number.scm 624 */
uint64_t BgL_n1z00_4192;
BgL_n1z00_4192 = 
BGL_BINT64_TO_INT64(BgL_xz00_68); 
BgL_test5950z00_9719 = 
(BgL_n1z00_4192>BgL_arg1882z00_1527); } 
if(BgL_test5950z00_9719)
{ /* Ieee/number.scm 624 */
return BgL_xz00_68;}  else 
{ /* Ieee/number.scm 624 */
return 
BGL_UINT64_TO_BUINT64(BgL_arg1882z00_1527);} } }  else 
{ /* Ieee/number.scm 630 */
if(
BGL_UINT64P(BgL_yz00_69))
{ /* Ieee/number.scm 624 */
bool_t BgL_test5952z00_9725;
{ /* Ieee/number.scm 624 */
uint64_t BgL_n1z00_4197;uint64_t BgL_n2z00_4198;
BgL_n1z00_4197 = 
BGL_BINT64_TO_INT64(BgL_xz00_68); 
BgL_n2z00_4198 = 
BGL_BINT64_TO_INT64(BgL_yz00_69); 
BgL_test5952z00_9725 = 
(BgL_n1z00_4197>BgL_n2z00_4198); } 
if(BgL_test5952z00_9725)
{ /* Ieee/number.scm 624 */
return BgL_xz00_68;}  else 
{ /* Ieee/number.scm 624 */
return BgL_yz00_69;} }  else 
{ /* Ieee/number.scm 630 */
if(
REALP(BgL_yz00_69))
{ /* Ieee/number.scm 630 */
double BgL_arg1885z00_1530;
{ /* Ieee/number.scm 630 */
uint64_t BgL_tmpz00_9731;
BgL_tmpz00_9731 = 
BGL_BINT64_TO_INT64(BgL_xz00_68); 
BgL_arg1885z00_1530 = 
(double)(BgL_tmpz00_9731); } 
if(
(BgL_arg1885z00_1530>
REAL_TO_DOUBLE(BgL_yz00_69)))
{ /* Ieee/number.scm 616 */
return 
DOUBLE_TO_REAL(BgL_arg1885z00_1530);}  else 
{ /* Ieee/number.scm 616 */
return BgL_yz00_69;} }  else 
{ /* Ieee/number.scm 630 */
if(
LLONGP(BgL_yz00_69))
{ /* Ieee/number.scm 630 */
uint64_t BgL_arg1887z00_1532;
{ /* Ieee/number.scm 630 */
uint64_t BgL_res3876z00_4207;
{ /* Ieee/number.scm 630 */
BGL_LONGLONG_T BgL_tmpz00_9740;
BgL_tmpz00_9740 = 
BLLONG_TO_LLONG(BgL_yz00_69); 
BgL_res3876z00_4207 = 
(uint64_t)(BgL_tmpz00_9740); } 
BgL_arg1887z00_1532 = BgL_res3876z00_4207; } 
{ /* Ieee/number.scm 624 */
bool_t BgL_test5956z00_9743;
{ /* Ieee/number.scm 624 */
uint64_t BgL_n1z00_4209;
BgL_n1z00_4209 = 
BGL_BINT64_TO_INT64(BgL_xz00_68); 
BgL_test5956z00_9743 = 
(BgL_n1z00_4209>BgL_arg1887z00_1532); } 
if(BgL_test5956z00_9743)
{ /* Ieee/number.scm 624 */
return BgL_xz00_68;}  else 
{ /* Ieee/number.scm 624 */
return 
BGL_UINT64_TO_BUINT64(BgL_arg1887z00_1532);} } }  else 
{ /* Ieee/number.scm 630 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_69))
{ /* Ieee/number.scm 630 */
uint64_t BgL_arg1891z00_1535;
{ /* Ieee/number.scm 630 */
BGL_LONGLONG_T BgL_arg1892z00_1536;
{ /* Ieee/number.scm 630 */
obj_t BgL_arg1893z00_1537;
BgL_arg1893z00_1537 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_69); 
{ /* Ieee/number.scm 630 */
long BgL_tmpz00_9750;
{ /* Ieee/number.scm 630 */
obj_t BgL_tmpz00_9751;
if(
ELONGP(BgL_arg1893z00_1537))
{ /* Ieee/number.scm 630 */
BgL_tmpz00_9751 = BgL_arg1893z00_1537
; }  else 
{ 
obj_t BgL_auxz00_9754;
BgL_auxz00_9754 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)23960)), BGl_string5310z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1893z00_1537); 
FAILURE(BgL_auxz00_9754,BFALSE,BFALSE);} 
BgL_tmpz00_9750 = 
BELONG_TO_LONG(BgL_tmpz00_9751); } 
BgL_arg1892z00_1536 = 
(BGL_LONGLONG_T)(BgL_tmpz00_9750); } } 
{ /* Ieee/number.scm 630 */
uint64_t BgL_res3878z00_4213;
BgL_res3878z00_4213 = 
(uint64_t)(BgL_arg1892z00_1536); 
BgL_arg1891z00_1535 = BgL_res3878z00_4213; } } 
{ /* Ieee/number.scm 624 */
bool_t BgL_test5959z00_9761;
{ /* Ieee/number.scm 624 */
uint64_t BgL_n1z00_4215;
BgL_n1z00_4215 = 
BGL_BINT64_TO_INT64(BgL_xz00_68); 
BgL_test5959z00_9761 = 
(BgL_n1z00_4215>BgL_arg1891z00_1535); } 
if(BgL_test5959z00_9761)
{ /* Ieee/number.scm 624 */
return BgL_xz00_68;}  else 
{ /* Ieee/number.scm 624 */
return 
BGL_UINT64_TO_BUINT64(BgL_arg1891z00_1535);} } }  else 
{ /* Ieee/number.scm 630 */
if(
BIGNUMP(BgL_yz00_69))
{ /* Ieee/number.scm 630 */
obj_t BgL_arg1895z00_1539;
BgL_arg1895z00_1539 = 
bgl_uint64_to_bignum(
BGL_BINT64_TO_INT64(BgL_xz00_68)); 
if(
(
(long)(
bgl_bignum_cmp(BgL_arg1895z00_1539, BgL_yz00_69))>((long)0)))
{ /* Ieee/number.scm 622 */
return BgL_arg1895z00_1539;}  else 
{ /* Ieee/number.scm 622 */
return BgL_yz00_69;} }  else 
{ /* Ieee/number.scm 630 */
return 
BGl_errorz00zz__errorz00(BGl_string5310z00zz__r4_numbers_6_5z00, BGl_string5292z00zz__r4_numbers_6_5z00, BgL_yz00_69);} } } } } } }  else 
{ /* Ieee/number.scm 630 */
if(
BIGNUMP(BgL_xz00_68))
{ /* Ieee/number.scm 630 */
if(
BIGNUMP(BgL_yz00_69))
{ /* Ieee/number.scm 630 */
if(
(
(long)(
bgl_bignum_cmp(BgL_xz00_68, BgL_yz00_69))>((long)0)))
{ /* Ieee/number.scm 622 */
return BgL_xz00_68;}  else 
{ /* Ieee/number.scm 622 */
return BgL_yz00_69;} }  else 
{ /* Ieee/number.scm 630 */
if(
INTEGERP(BgL_yz00_69))
{ /* Ieee/number.scm 630 */
obj_t BgL_arg1901z00_1543;
BgL_arg1901z00_1543 = 
bgl_long_to_bignum(
(long)CINT(BgL_yz00_69)); 
if(
(
(long)(
bgl_bignum_cmp(BgL_xz00_68, BgL_arg1901z00_1543))>((long)0)))
{ /* Ieee/number.scm 622 */
return BgL_xz00_68;}  else 
{ /* Ieee/number.scm 622 */
return BgL_arg1901z00_1543;} }  else 
{ /* Ieee/number.scm 630 */
if(
REALP(BgL_yz00_69))
{ /* Ieee/number.scm 630 */
double BgL_arg1903z00_1545;
BgL_arg1903z00_1545 = 
bgl_bignum_to_flonum(BgL_xz00_68); 
if(
(BgL_arg1903z00_1545>
REAL_TO_DOUBLE(BgL_yz00_69)))
{ /* Ieee/number.scm 616 */
return 
DOUBLE_TO_REAL(BgL_arg1903z00_1545);}  else 
{ /* Ieee/number.scm 616 */
return BgL_yz00_69;} }  else 
{ /* Ieee/number.scm 630 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_69))
{ /* Ieee/number.scm 630 */
obj_t BgL_arg1905z00_1547;
{ /* Ieee/number.scm 630 */
obj_t BgL_arg1906z00_1548;
BgL_arg1906z00_1548 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_69); 
{ /* Ieee/number.scm 630 */
long BgL_xz00_4252;
{ /* Ieee/number.scm 630 */
obj_t BgL_tmpz00_9800;
if(
ELONGP(BgL_arg1906z00_1548))
{ /* Ieee/number.scm 630 */
BgL_tmpz00_9800 = BgL_arg1906z00_1548
; }  else 
{ 
obj_t BgL_auxz00_9803;
BgL_auxz00_9803 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)23960)), BGl_string5310z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1906z00_1548); 
FAILURE(BgL_auxz00_9803,BFALSE,BFALSE);} 
BgL_xz00_4252 = 
BELONG_TO_LONG(BgL_tmpz00_9800); } 
BgL_arg1905z00_1547 = 
bgl_long_to_bignum(BgL_xz00_4252); } } 
if(
(
(long)(
bgl_bignum_cmp(BgL_xz00_68, BgL_arg1905z00_1547))>((long)0)))
{ /* Ieee/number.scm 622 */
return BgL_xz00_68;}  else 
{ /* Ieee/number.scm 622 */
return BgL_arg1905z00_1547;} }  else 
{ /* Ieee/number.scm 630 */
if(
LLONGP(BgL_yz00_69))
{ /* Ieee/number.scm 630 */
obj_t BgL_arg1908z00_1550;
BgL_arg1908z00_1550 = 
bgl_llong_to_bignum(
BLLONG_TO_LLONG(BgL_yz00_69)); 
if(
(
(long)(
bgl_bignum_cmp(BgL_xz00_68, BgL_arg1908z00_1550))>((long)0)))
{ /* Ieee/number.scm 622 */
return BgL_xz00_68;}  else 
{ /* Ieee/number.scm 622 */
return BgL_arg1908z00_1550;} }  else 
{ /* Ieee/number.scm 630 */
if(
BGL_UINT64P(BgL_yz00_69))
{ /* Ieee/number.scm 630 */
obj_t BgL_arg1911z00_1553;
BgL_arg1911z00_1553 = 
bgl_uint64_to_bignum(
BGL_BINT64_TO_INT64(BgL_yz00_69)); 
if(
(
(long)(
bgl_bignum_cmp(BgL_xz00_68, BgL_arg1911z00_1553))>((long)0)))
{ /* Ieee/number.scm 622 */
return BgL_xz00_68;}  else 
{ /* Ieee/number.scm 622 */
return BgL_arg1911z00_1553;} }  else 
{ /* Ieee/number.scm 630 */
return 
BGl_errorz00zz__errorz00(BGl_string5310z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_69);} } } } } } }  else 
{ /* Ieee/number.scm 630 */
return 
BGl_errorz00zz__errorz00(BGl_string5310z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_xz00_68);} } } } } } } 

}



/* &2max */
obj_t BGl_z622maxz62zz__r4_numbers_6_5z00(obj_t BgL_envz00_6525, obj_t BgL_xz00_6526, obj_t BgL_yz00_6527)
{
{ /* Ieee/number.scm 629 */
return 
BGl_2maxz00zz__r4_numbers_6_5z00(BgL_xz00_6526, BgL_yz00_6527);} 

}



/* max */
BGL_EXPORTED_DEF obj_t BGl_maxz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_70, obj_t BgL_yz00_71)
{
{ /* Ieee/number.scm 635 */
{ 
obj_t BgL_xz00_4294;obj_t BgL_yz00_4295;
BgL_xz00_4294 = BgL_xz00_70; 
BgL_yz00_4295 = BgL_yz00_71; 
BgL_loopz00_4293:
if(
PAIRP(BgL_yz00_4295))
{ 
obj_t BgL_yz00_9837;obj_t BgL_xz00_9834;
BgL_xz00_9834 = 
BGl_2maxz00zz__r4_numbers_6_5z00(BgL_xz00_4294, 
CAR(BgL_yz00_4295)); 
BgL_yz00_9837 = 
CDR(BgL_yz00_4295); 
BgL_yz00_4295 = BgL_yz00_9837; 
BgL_xz00_4294 = BgL_xz00_9834; 
goto BgL_loopz00_4293;}  else 
{ /* Ieee/number.scm 638 */
return BgL_xz00_4294;} } } 

}



/* &max */
obj_t BGl_z62maxz62zz__r4_numbers_6_5z00(obj_t BgL_envz00_6528, obj_t BgL_xz00_6529, obj_t BgL_yz00_6530)
{
{ /* Ieee/number.scm 635 */
return 
BGl_maxz00zz__r4_numbers_6_5z00(BgL_xz00_6529, BgL_yz00_6530);} 

}



/* 2min */
BGL_EXPORTED_DEF obj_t BGl_2minz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_84, obj_t BgL_yz00_85)
{
{ /* Ieee/number.scm 661 */
if(
INTEGERP(BgL_xz00_84))
{ /* Ieee/number.scm 662 */
if(
INTEGERP(BgL_yz00_85))
{ /* Ieee/number.scm 662 */
if(
(
(long)CINT(BgL_xz00_84)>
(long)CINT(BgL_yz00_85)))
{ /* Ieee/number.scm 646 */
return BgL_yz00_85;}  else 
{ /* Ieee/number.scm 646 */
return BgL_xz00_84;} }  else 
{ /* Ieee/number.scm 662 */
if(
REALP(BgL_yz00_85))
{ /* Ieee/number.scm 662 */
double BgL_arg1926z00_1572;
BgL_arg1926z00_1572 = 
(double)(
(long)CINT(BgL_xz00_84)); 
if(
(BgL_arg1926z00_1572>
REAL_TO_DOUBLE(BgL_yz00_85)))
{ /* Ieee/number.scm 648 */
return BgL_yz00_85;}  else 
{ /* Ieee/number.scm 648 */
return 
DOUBLE_TO_REAL(BgL_arg1926z00_1572);} }  else 
{ /* Ieee/number.scm 662 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_85))
{ /* Ieee/number.scm 662 */
long BgL_arg1928z00_1574;obj_t BgL_arg1929z00_1575;
{ /* Ieee/number.scm 662 */
long BgL_res3919z00_4346;
{ /* Ieee/number.scm 662 */
long BgL_tmpz00_9858;
BgL_tmpz00_9858 = 
(long)CINT(BgL_xz00_84); 
BgL_res3919z00_4346 = 
(long)(BgL_tmpz00_9858); } 
BgL_arg1928z00_1574 = BgL_res3919z00_4346; } 
BgL_arg1929z00_1575 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_85); 
{ /* Ieee/number.scm 650 */
bool_t BgL_test5983z00_9862;
{ /* Ieee/number.scm 650 */
long BgL_n2z00_4349;
{ /* Ieee/number.scm 650 */
obj_t BgL_tmpz00_9863;
if(
ELONGP(BgL_arg1929z00_1575))
{ /* Ieee/number.scm 650 */
BgL_tmpz00_9863 = BgL_arg1929z00_1575
; }  else 
{ 
obj_t BgL_auxz00_9866;
BgL_auxz00_9866 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)24689)), BGl_string5311z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1929z00_1575); 
FAILURE(BgL_auxz00_9866,BFALSE,BFALSE);} 
BgL_n2z00_4349 = 
BELONG_TO_LONG(BgL_tmpz00_9863); } 
BgL_test5983z00_9862 = 
(BgL_arg1928z00_1574>BgL_n2z00_4349); } 
if(BgL_test5983z00_9862)
{ /* Ieee/number.scm 650 */
return BgL_arg1929z00_1575;}  else 
{ /* Ieee/number.scm 650 */
return 
make_belong(BgL_arg1928z00_1574);} } }  else 
{ /* Ieee/number.scm 662 */
if(
LLONGP(BgL_yz00_85))
{ /* Ieee/number.scm 662 */
BGL_LONGLONG_T BgL_arg1931z00_1577;
{ /* Ieee/number.scm 662 */
BGL_LONGLONG_T BgL_res3922z00_4353;
{ /* Ieee/number.scm 662 */
long BgL_tmpz00_9875;
BgL_tmpz00_9875 = 
(long)CINT(BgL_xz00_84); 
BgL_res3922z00_4353 = 
LONG_TO_LLONG(BgL_tmpz00_9875); } 
BgL_arg1931z00_1577 = BgL_res3922z00_4353; } 
if(
(BgL_arg1931z00_1577>
BLLONG_TO_LLONG(BgL_yz00_85)))
{ /* Ieee/number.scm 652 */
return BgL_yz00_85;}  else 
{ /* Ieee/number.scm 652 */
return 
make_bllong(BgL_arg1931z00_1577);} }  else 
{ /* Ieee/number.scm 662 */
if(
BGL_UINT64P(BgL_yz00_85))
{ /* Ieee/number.scm 662 */
uint64_t BgL_arg1934z00_1580;
{ /* Ieee/number.scm 662 */
BGL_LONGLONG_T BgL_arg1935z00_1581;
{ /* Ieee/number.scm 662 */
BGL_LONGLONG_T BgL_res3925z00_4360;
{ /* Ieee/number.scm 662 */
long BgL_tmpz00_9884;
BgL_tmpz00_9884 = 
(long)CINT(BgL_xz00_84); 
BgL_res3925z00_4360 = 
LONG_TO_LLONG(BgL_tmpz00_9884); } 
BgL_arg1935z00_1581 = BgL_res3925z00_4360; } 
{ /* Ieee/number.scm 662 */
uint64_t BgL_res3926z00_4362;
BgL_res3926z00_4362 = 
(uint64_t)(BgL_arg1935z00_1581); 
BgL_arg1934z00_1580 = BgL_res3926z00_4362; } } 
{ /* Ieee/number.scm 656 */
bool_t BgL_test5988z00_9888;
{ /* Ieee/number.scm 656 */
uint64_t BgL_n2z00_4365;
BgL_n2z00_4365 = 
BGL_BINT64_TO_INT64(BgL_yz00_85); 
BgL_test5988z00_9888 = 
(BgL_arg1934z00_1580>BgL_n2z00_4365); } 
if(BgL_test5988z00_9888)
{ /* Ieee/number.scm 656 */
return BgL_yz00_85;}  else 
{ /* Ieee/number.scm 656 */
return 
BGL_UINT64_TO_BUINT64(BgL_arg1934z00_1580);} } }  else 
{ /* Ieee/number.scm 662 */
if(
BIGNUMP(BgL_yz00_85))
{ /* Ieee/number.scm 662 */
obj_t BgL_arg1937z00_1583;
BgL_arg1937z00_1583 = 
bgl_long_to_bignum(
(long)CINT(BgL_xz00_84)); 
if(
(
(long)(
bgl_bignum_cmp(BgL_arg1937z00_1583, BgL_yz00_85))>((long)0)))
{ /* Ieee/number.scm 654 */
return BgL_yz00_85;}  else 
{ /* Ieee/number.scm 654 */
return BgL_arg1937z00_1583;} }  else 
{ /* Ieee/number.scm 662 */
return 
BGl_errorz00zz__errorz00(BGl_string5311z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_85);} } } } } } }  else 
{ /* Ieee/number.scm 662 */
if(
REALP(BgL_xz00_84))
{ /* Ieee/number.scm 662 */
if(
REALP(BgL_yz00_85))
{ /* Ieee/number.scm 662 */
if(
(
REAL_TO_DOUBLE(BgL_xz00_84)>
REAL_TO_DOUBLE(BgL_yz00_85)))
{ /* Ieee/number.scm 648 */
return BgL_yz00_85;}  else 
{ /* Ieee/number.scm 648 */
return BgL_xz00_84;} }  else 
{ /* Ieee/number.scm 662 */
if(
INTEGERP(BgL_yz00_85))
{ /* Ieee/number.scm 662 */
double BgL_arg1941z00_1587;
BgL_arg1941z00_1587 = 
(double)(
(long)CINT(BgL_yz00_85)); 
if(
(
REAL_TO_DOUBLE(BgL_xz00_84)>BgL_arg1941z00_1587))
{ /* Ieee/number.scm 648 */
return 
DOUBLE_TO_REAL(BgL_arg1941z00_1587);}  else 
{ /* Ieee/number.scm 648 */
return BgL_xz00_84;} }  else 
{ /* Ieee/number.scm 662 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_85))
{ /* Ieee/number.scm 662 */
double BgL_arg1943z00_1589;
{ /* Ieee/number.scm 662 */
obj_t BgL_arg1944z00_1590;
BgL_arg1944z00_1590 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_85); 
{ /* Ieee/number.scm 662 */
long BgL_tmpz00_9920;
{ /* Ieee/number.scm 662 */
obj_t BgL_tmpz00_9921;
if(
ELONGP(BgL_arg1944z00_1590))
{ /* Ieee/number.scm 662 */
BgL_tmpz00_9921 = BgL_arg1944z00_1590
; }  else 
{ 
obj_t BgL_auxz00_9924;
BgL_auxz00_9924 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)25104)), BGl_string5311z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1944z00_1590); 
FAILURE(BgL_auxz00_9924,BFALSE,BFALSE);} 
BgL_tmpz00_9920 = 
BELONG_TO_LONG(BgL_tmpz00_9921); } 
BgL_arg1943z00_1589 = 
(double)(BgL_tmpz00_9920); } } 
if(
(
REAL_TO_DOUBLE(BgL_xz00_84)>BgL_arg1943z00_1589))
{ /* Ieee/number.scm 648 */
return 
DOUBLE_TO_REAL(BgL_arg1943z00_1589);}  else 
{ /* Ieee/number.scm 648 */
return BgL_xz00_84;} }  else 
{ /* Ieee/number.scm 662 */
if(
LLONGP(BgL_yz00_85))
{ /* Ieee/number.scm 662 */
double BgL_arg1946z00_1592;
BgL_arg1946z00_1592 = 
(double)(
BLLONG_TO_LLONG(BgL_yz00_85)); 
if(
(
REAL_TO_DOUBLE(BgL_xz00_84)>BgL_arg1946z00_1592))
{ /* Ieee/number.scm 648 */
return 
DOUBLE_TO_REAL(BgL_arg1946z00_1592);}  else 
{ /* Ieee/number.scm 648 */
return BgL_xz00_84;} }  else 
{ /* Ieee/number.scm 662 */
if(
BGL_UINT64P(BgL_yz00_85))
{ /* Ieee/number.scm 662 */
double BgL_arg1949z00_1595;
{ /* Ieee/number.scm 662 */
double BgL_res3941z00_4399;
{ /* Ieee/number.scm 662 */
uint64_t BgL_xz00_4398;
BgL_xz00_4398 = 
BGL_BINT64_TO_INT64(BgL_yz00_85); 
BgL_res3941z00_4399 = 
(double)(BgL_xz00_4398); } 
BgL_arg1949z00_1595 = BgL_res3941z00_4399; } 
if(
(
REAL_TO_DOUBLE(BgL_xz00_84)>BgL_arg1949z00_1595))
{ /* Ieee/number.scm 648 */
return 
DOUBLE_TO_REAL(BgL_arg1949z00_1595);}  else 
{ /* Ieee/number.scm 648 */
return BgL_xz00_84;} }  else 
{ /* Ieee/number.scm 662 */
if(
BIGNUMP(BgL_yz00_85))
{ /* Ieee/number.scm 662 */
double BgL_arg1951z00_1597;
BgL_arg1951z00_1597 = 
bgl_bignum_to_flonum(BgL_yz00_85); 
if(
(
REAL_TO_DOUBLE(BgL_xz00_84)>BgL_arg1951z00_1597))
{ /* Ieee/number.scm 648 */
return 
DOUBLE_TO_REAL(BgL_arg1951z00_1597);}  else 
{ /* Ieee/number.scm 648 */
return BgL_xz00_84;} }  else 
{ /* Ieee/number.scm 662 */
return 
BGl_errorz00zz__errorz00(BGl_string5311z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_85);} } } } } } }  else 
{ /* Ieee/number.scm 662 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_xz00_84))
{ /* Ieee/number.scm 662 */
if(
INTEGERP(BgL_yz00_85))
{ /* Ieee/number.scm 662 */
obj_t BgL_arg1954z00_1600;long BgL_arg1955z00_1601;
BgL_arg1954z00_1600 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_84); 
{ /* Ieee/number.scm 662 */
long BgL_res3947z00_4413;
{ /* Ieee/number.scm 662 */
long BgL_tmpz00_9963;
BgL_tmpz00_9963 = 
(long)CINT(BgL_yz00_85); 
BgL_res3947z00_4413 = 
(long)(BgL_tmpz00_9963); } 
BgL_arg1955z00_1601 = BgL_res3947z00_4413; } 
{ /* Ieee/number.scm 650 */
bool_t BgL_test6007z00_9966;
{ /* Ieee/number.scm 650 */
long BgL_n1z00_4415;
{ /* Ieee/number.scm 650 */
obj_t BgL_tmpz00_9967;
if(
ELONGP(BgL_arg1954z00_1600))
{ /* Ieee/number.scm 650 */
BgL_tmpz00_9967 = BgL_arg1954z00_1600
; }  else 
{ 
obj_t BgL_auxz00_9970;
BgL_auxz00_9970 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)24687)), BGl_string5311z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1954z00_1600); 
FAILURE(BgL_auxz00_9970,BFALSE,BFALSE);} 
BgL_n1z00_4415 = 
BELONG_TO_LONG(BgL_tmpz00_9967); } 
BgL_test6007z00_9966 = 
(BgL_n1z00_4415>BgL_arg1955z00_1601); } 
if(BgL_test6007z00_9966)
{ /* Ieee/number.scm 650 */
return 
make_belong(BgL_arg1955z00_1601);}  else 
{ /* Ieee/number.scm 650 */
return BgL_arg1954z00_1600;} } }  else 
{ /* Ieee/number.scm 662 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_85))
{ /* Ieee/number.scm 662 */
obj_t BgL_arg1957z00_1603;obj_t BgL_arg1958z00_1604;
BgL_arg1957z00_1603 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_84); 
BgL_arg1958z00_1604 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_85); 
{ /* Ieee/number.scm 650 */
bool_t BgL_test6010z00_9981;
{ /* Ieee/number.scm 650 */
long BgL_n1z00_4419;long BgL_n2z00_4420;
{ /* Ieee/number.scm 650 */
obj_t BgL_tmpz00_9982;
if(
ELONGP(BgL_arg1957z00_1603))
{ /* Ieee/number.scm 650 */
BgL_tmpz00_9982 = BgL_arg1957z00_1603
; }  else 
{ 
obj_t BgL_auxz00_9985;
BgL_auxz00_9985 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)24687)), BGl_string5311z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1957z00_1603); 
FAILURE(BgL_auxz00_9985,BFALSE,BFALSE);} 
BgL_n1z00_4419 = 
BELONG_TO_LONG(BgL_tmpz00_9982); } 
{ /* Ieee/number.scm 650 */
obj_t BgL_tmpz00_9990;
if(
ELONGP(BgL_arg1958z00_1604))
{ /* Ieee/number.scm 650 */
BgL_tmpz00_9990 = BgL_arg1958z00_1604
; }  else 
{ 
obj_t BgL_auxz00_9993;
BgL_auxz00_9993 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)24689)), BGl_string5311z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1958z00_1604); 
FAILURE(BgL_auxz00_9993,BFALSE,BFALSE);} 
BgL_n2z00_4420 = 
BELONG_TO_LONG(BgL_tmpz00_9990); } 
BgL_test6010z00_9981 = 
(BgL_n1z00_4419>BgL_n2z00_4420); } 
if(BgL_test6010z00_9981)
{ /* Ieee/number.scm 650 */
return BgL_arg1958z00_1604;}  else 
{ /* Ieee/number.scm 650 */
return BgL_arg1957z00_1603;} } }  else 
{ /* Ieee/number.scm 662 */
if(
REALP(BgL_yz00_85))
{ /* Ieee/number.scm 662 */
double BgL_arg1960z00_1606;
{ /* Ieee/number.scm 662 */
obj_t BgL_arg1961z00_1607;
BgL_arg1961z00_1607 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_84); 
{ /* Ieee/number.scm 662 */
long BgL_tmpz00_10002;
{ /* Ieee/number.scm 662 */
obj_t BgL_tmpz00_10003;
if(
ELONGP(BgL_arg1961z00_1607))
{ /* Ieee/number.scm 662 */
BgL_tmpz00_10003 = BgL_arg1961z00_1607
; }  else 
{ 
obj_t BgL_auxz00_10006;
BgL_auxz00_10006 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)25104)), BGl_string5311z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1961z00_1607); 
FAILURE(BgL_auxz00_10006,BFALSE,BFALSE);} 
BgL_tmpz00_10002 = 
BELONG_TO_LONG(BgL_tmpz00_10003); } 
BgL_arg1960z00_1606 = 
(double)(BgL_tmpz00_10002); } } 
if(
(BgL_arg1960z00_1606>
REAL_TO_DOUBLE(BgL_yz00_85)))
{ /* Ieee/number.scm 648 */
return BgL_yz00_85;}  else 
{ /* Ieee/number.scm 648 */
return 
DOUBLE_TO_REAL(BgL_arg1960z00_1606);} }  else 
{ /* Ieee/number.scm 662 */
if(
LLONGP(BgL_yz00_85))
{ /* Ieee/number.scm 662 */
BGL_LONGLONG_T BgL_arg1963z00_1609;
{ /* Ieee/number.scm 662 */
obj_t BgL_arg1965z00_1611;
BgL_arg1965z00_1611 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_84); 
{ /* Ieee/number.scm 662 */
long BgL_tmpz00_10019;
{ /* Ieee/number.scm 662 */
obj_t BgL_tmpz00_10020;
if(
ELONGP(BgL_arg1965z00_1611))
{ /* Ieee/number.scm 662 */
BgL_tmpz00_10020 = BgL_arg1965z00_1611
; }  else 
{ 
obj_t BgL_auxz00_10023;
BgL_auxz00_10023 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)25104)), BGl_string5311z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1965z00_1611); 
FAILURE(BgL_auxz00_10023,BFALSE,BFALSE);} 
BgL_tmpz00_10019 = 
BELONG_TO_LONG(BgL_tmpz00_10020); } 
BgL_arg1963z00_1609 = 
(BGL_LONGLONG_T)(BgL_tmpz00_10019); } } 
if(
(BgL_arg1963z00_1609>
BLLONG_TO_LLONG(BgL_yz00_85)))
{ /* Ieee/number.scm 652 */
return BgL_yz00_85;}  else 
{ /* Ieee/number.scm 652 */
return 
make_bllong(BgL_arg1963z00_1609);} }  else 
{ /* Ieee/number.scm 662 */
if(
BGL_UINT64P(BgL_yz00_85))
{ /* Ieee/number.scm 662 */
uint64_t BgL_arg1967z00_1613;
{ /* Ieee/number.scm 662 */
BGL_LONGLONG_T BgL_arg1968z00_1614;
{ /* Ieee/number.scm 662 */
obj_t BgL_arg1969z00_1615;
BgL_arg1969z00_1615 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_84); 
{ /* Ieee/number.scm 662 */
long BgL_tmpz00_10036;
{ /* Ieee/number.scm 662 */
obj_t BgL_tmpz00_10037;
if(
ELONGP(BgL_arg1969z00_1615))
{ /* Ieee/number.scm 662 */
BgL_tmpz00_10037 = BgL_arg1969z00_1615
; }  else 
{ 
obj_t BgL_auxz00_10040;
BgL_auxz00_10040 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)25104)), BGl_string5311z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1969z00_1615); 
FAILURE(BgL_auxz00_10040,BFALSE,BFALSE);} 
BgL_tmpz00_10036 = 
BELONG_TO_LONG(BgL_tmpz00_10037); } 
BgL_arg1968z00_1614 = 
(BGL_LONGLONG_T)(BgL_tmpz00_10036); } } 
{ /* Ieee/number.scm 662 */
uint64_t BgL_res3955z00_4434;
BgL_res3955z00_4434 = 
(uint64_t)(BgL_arg1968z00_1614); 
BgL_arg1967z00_1613 = BgL_res3955z00_4434; } } 
{ /* Ieee/number.scm 656 */
bool_t BgL_test6021z00_10047;
{ /* Ieee/number.scm 656 */
uint64_t BgL_n2z00_4437;
BgL_n2z00_4437 = 
BGL_BINT64_TO_INT64(BgL_yz00_85); 
BgL_test6021z00_10047 = 
(BgL_arg1967z00_1613>BgL_n2z00_4437); } 
if(BgL_test6021z00_10047)
{ /* Ieee/number.scm 656 */
return BgL_yz00_85;}  else 
{ /* Ieee/number.scm 656 */
return 
BGL_UINT64_TO_BUINT64(BgL_arg1967z00_1613);} } }  else 
{ /* Ieee/number.scm 662 */
if(
BIGNUMP(BgL_yz00_85))
{ /* Ieee/number.scm 662 */
obj_t BgL_arg1971z00_1617;
{ /* Ieee/number.scm 662 */
obj_t BgL_arg1972z00_1618;
BgL_arg1972z00_1618 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_84); 
{ /* Ieee/number.scm 662 */
long BgL_xz00_4440;
{ /* Ieee/number.scm 662 */
obj_t BgL_tmpz00_10054;
if(
ELONGP(BgL_arg1972z00_1618))
{ /* Ieee/number.scm 662 */
BgL_tmpz00_10054 = BgL_arg1972z00_1618
; }  else 
{ 
obj_t BgL_auxz00_10057;
BgL_auxz00_10057 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)25104)), BGl_string5311z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1972z00_1618); 
FAILURE(BgL_auxz00_10057,BFALSE,BFALSE);} 
BgL_xz00_4440 = 
BELONG_TO_LONG(BgL_tmpz00_10054); } 
BgL_arg1971z00_1617 = 
bgl_long_to_bignum(BgL_xz00_4440); } } 
if(
(
(long)(
bgl_bignum_cmp(BgL_arg1971z00_1617, BgL_yz00_85))>((long)0)))
{ /* Ieee/number.scm 654 */
return BgL_yz00_85;}  else 
{ /* Ieee/number.scm 654 */
return BgL_arg1971z00_1617;} }  else 
{ /* Ieee/number.scm 662 */
return 
BGl_errorz00zz__errorz00(BGl_string5311z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_85);} } } } } } }  else 
{ /* Ieee/number.scm 662 */
if(
LLONGP(BgL_xz00_84))
{ /* Ieee/number.scm 662 */
if(
INTEGERP(BgL_yz00_85))
{ /* Ieee/number.scm 662 */
BGL_LONGLONG_T BgL_arg1976z00_1622;
{ /* Ieee/number.scm 662 */
BGL_LONGLONG_T BgL_res3963z00_4452;
{ /* Ieee/number.scm 662 */
long BgL_tmpz00_10072;
BgL_tmpz00_10072 = 
(long)CINT(BgL_yz00_85); 
BgL_res3963z00_4452 = 
LONG_TO_LLONG(BgL_tmpz00_10072); } 
BgL_arg1976z00_1622 = BgL_res3963z00_4452; } 
if(
(
BLLONG_TO_LLONG(BgL_xz00_84)>BgL_arg1976z00_1622))
{ /* Ieee/number.scm 652 */
return 
make_bllong(BgL_arg1976z00_1622);}  else 
{ /* Ieee/number.scm 652 */
return BgL_xz00_84;} }  else 
{ /* Ieee/number.scm 662 */
if(
REALP(BgL_yz00_85))
{ /* Ieee/number.scm 662 */
double BgL_arg1979z00_1624;
BgL_arg1979z00_1624 = 
(double)(
BLLONG_TO_LLONG(BgL_xz00_84)); 
if(
(BgL_arg1979z00_1624>
REAL_TO_DOUBLE(BgL_yz00_85)))
{ /* Ieee/number.scm 648 */
return BgL_yz00_85;}  else 
{ /* Ieee/number.scm 648 */
return 
DOUBLE_TO_REAL(BgL_arg1979z00_1624);} }  else 
{ /* Ieee/number.scm 662 */
if(
LLONGP(BgL_yz00_85))
{ /* Ieee/number.scm 662 */
if(
(
BLLONG_TO_LLONG(BgL_xz00_84)>
BLLONG_TO_LLONG(BgL_yz00_85)))
{ /* Ieee/number.scm 652 */
return BgL_yz00_85;}  else 
{ /* Ieee/number.scm 652 */
return BgL_xz00_84;} }  else 
{ /* Ieee/number.scm 662 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_85))
{ /* Ieee/number.scm 662 */
BGL_LONGLONG_T BgL_arg1985z00_1630;
{ /* Ieee/number.scm 662 */
obj_t BgL_arg1986z00_1631;
BgL_arg1986z00_1631 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_85); 
{ /* Ieee/number.scm 662 */
long BgL_tmpz00_10096;
{ /* Ieee/number.scm 662 */
obj_t BgL_tmpz00_10097;
if(
ELONGP(BgL_arg1986z00_1631))
{ /* Ieee/number.scm 662 */
BgL_tmpz00_10097 = BgL_arg1986z00_1631
; }  else 
{ 
obj_t BgL_auxz00_10100;
BgL_auxz00_10100 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)25104)), BGl_string5311z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg1986z00_1631); 
FAILURE(BgL_auxz00_10100,BFALSE,BFALSE);} 
BgL_tmpz00_10096 = 
BELONG_TO_LONG(BgL_tmpz00_10097); } 
BgL_arg1985z00_1630 = 
(BGL_LONGLONG_T)(BgL_tmpz00_10096); } } 
if(
(
BLLONG_TO_LLONG(BgL_xz00_84)>BgL_arg1985z00_1630))
{ /* Ieee/number.scm 652 */
return 
make_bllong(BgL_arg1985z00_1630);}  else 
{ /* Ieee/number.scm 652 */
return BgL_xz00_84;} }  else 
{ /* Ieee/number.scm 662 */
if(
BIGNUMP(BgL_yz00_85))
{ /* Ieee/number.scm 662 */
obj_t BgL_arg1988z00_1633;
BgL_arg1988z00_1633 = 
bgl_llong_to_bignum(
BLLONG_TO_LLONG(BgL_xz00_84)); 
if(
(
(long)(
bgl_bignum_cmp(BgL_arg1988z00_1633, BgL_yz00_85))>((long)0)))
{ /* Ieee/number.scm 654 */
return BgL_yz00_85;}  else 
{ /* Ieee/number.scm 654 */
return BgL_arg1988z00_1633;} }  else 
{ /* Ieee/number.scm 662 */
if(
BGL_UINT64P(BgL_yz00_85))
{ /* Ieee/number.scm 662 */
uint64_t BgL_arg1991z00_1636;
{ /* Ieee/number.scm 662 */
uint64_t BgL_res3975z00_4483;
{ /* Ieee/number.scm 662 */
BGL_LONGLONG_T BgL_tmpz00_10120;
BgL_tmpz00_10120 = 
BLLONG_TO_LLONG(BgL_xz00_84); 
BgL_res3975z00_4483 = 
(uint64_t)(BgL_tmpz00_10120); } 
BgL_arg1991z00_1636 = BgL_res3975z00_4483; } 
{ /* Ieee/number.scm 656 */
bool_t BgL_test6038z00_10123;
{ /* Ieee/number.scm 656 */
uint64_t BgL_n2z00_4486;
BgL_n2z00_4486 = 
BGL_BINT64_TO_INT64(BgL_yz00_85); 
BgL_test6038z00_10123 = 
(BgL_arg1991z00_1636>BgL_n2z00_4486); } 
if(BgL_test6038z00_10123)
{ /* Ieee/number.scm 656 */
return BgL_yz00_85;}  else 
{ /* Ieee/number.scm 656 */
return 
BGL_UINT64_TO_BUINT64(BgL_arg1991z00_1636);} } }  else 
{ /* Ieee/number.scm 662 */
return 
BGl_errorz00zz__errorz00(BGl_string5311z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_85);} } } } } } }  else 
{ /* Ieee/number.scm 662 */
if(
BGL_UINT64P(BgL_xz00_84))
{ /* Ieee/number.scm 662 */
if(
INTEGERP(BgL_yz00_85))
{ /* Ieee/number.scm 662 */
uint64_t BgL_arg1995z00_1639;
{ /* Ieee/number.scm 662 */
uint64_t BgL_res3979z00_4491;
{ /* Ieee/number.scm 662 */
long BgL_tmpz00_10132;
BgL_tmpz00_10132 = 
(long)CINT(BgL_yz00_85); 
BgL_res3979z00_4491 = 
(uint64_t)(BgL_tmpz00_10132); } 
BgL_arg1995z00_1639 = BgL_res3979z00_4491; } 
{ /* Ieee/number.scm 656 */
bool_t BgL_test6041z00_10135;
{ /* Ieee/number.scm 656 */
uint64_t BgL_n1z00_4493;
BgL_n1z00_4493 = 
BGL_BINT64_TO_INT64(BgL_xz00_84); 
BgL_test6041z00_10135 = 
(BgL_n1z00_4493>BgL_arg1995z00_1639); } 
if(BgL_test6041z00_10135)
{ /* Ieee/number.scm 656 */
return 
BGL_UINT64_TO_BUINT64(BgL_arg1995z00_1639);}  else 
{ /* Ieee/number.scm 656 */
return BgL_xz00_84;} } }  else 
{ /* Ieee/number.scm 662 */
if(
BGL_UINT64P(BgL_yz00_85))
{ /* Ieee/number.scm 656 */
bool_t BgL_test6043z00_10141;
{ /* Ieee/number.scm 656 */
uint64_t BgL_n1z00_4498;uint64_t BgL_n2z00_4499;
BgL_n1z00_4498 = 
BGL_BINT64_TO_INT64(BgL_xz00_84); 
BgL_n2z00_4499 = 
BGL_BINT64_TO_INT64(BgL_yz00_85); 
BgL_test6043z00_10141 = 
(BgL_n1z00_4498>BgL_n2z00_4499); } 
if(BgL_test6043z00_10141)
{ /* Ieee/number.scm 656 */
return BgL_yz00_85;}  else 
{ /* Ieee/number.scm 656 */
return BgL_xz00_84;} }  else 
{ /* Ieee/number.scm 662 */
if(
REALP(BgL_yz00_85))
{ /* Ieee/number.scm 662 */
double BgL_arg1998z00_1642;
{ /* Ieee/number.scm 662 */
uint64_t BgL_tmpz00_10147;
BgL_tmpz00_10147 = 
BGL_BINT64_TO_INT64(BgL_xz00_84); 
BgL_arg1998z00_1642 = 
(double)(BgL_tmpz00_10147); } 
if(
(BgL_arg1998z00_1642>
REAL_TO_DOUBLE(BgL_yz00_85)))
{ /* Ieee/number.scm 648 */
return BgL_yz00_85;}  else 
{ /* Ieee/number.scm 648 */
return 
DOUBLE_TO_REAL(BgL_arg1998z00_1642);} }  else 
{ /* Ieee/number.scm 662 */
if(
LLONGP(BgL_yz00_85))
{ /* Ieee/number.scm 662 */
uint64_t BgL_arg2000z00_1644;
{ /* Ieee/number.scm 662 */
uint64_t BgL_res3986z00_4508;
{ /* Ieee/number.scm 662 */
BGL_LONGLONG_T BgL_tmpz00_10156;
BgL_tmpz00_10156 = 
BLLONG_TO_LLONG(BgL_yz00_85); 
BgL_res3986z00_4508 = 
(uint64_t)(BgL_tmpz00_10156); } 
BgL_arg2000z00_1644 = BgL_res3986z00_4508; } 
{ /* Ieee/number.scm 656 */
bool_t BgL_test6047z00_10159;
{ /* Ieee/number.scm 656 */
uint64_t BgL_n1z00_4510;
BgL_n1z00_4510 = 
BGL_BINT64_TO_INT64(BgL_xz00_84); 
BgL_test6047z00_10159 = 
(BgL_n1z00_4510>BgL_arg2000z00_1644); } 
if(BgL_test6047z00_10159)
{ /* Ieee/number.scm 656 */
return 
BGL_UINT64_TO_BUINT64(BgL_arg2000z00_1644);}  else 
{ /* Ieee/number.scm 656 */
return BgL_xz00_84;} } }  else 
{ /* Ieee/number.scm 662 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_85))
{ /* Ieee/number.scm 662 */
uint64_t BgL_arg2003z00_1647;
{ /* Ieee/number.scm 662 */
BGL_LONGLONG_T BgL_arg2004z00_1648;
{ /* Ieee/number.scm 662 */
obj_t BgL_arg2005z00_1649;
BgL_arg2005z00_1649 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_85); 
{ /* Ieee/number.scm 662 */
long BgL_tmpz00_10166;
{ /* Ieee/number.scm 662 */
obj_t BgL_tmpz00_10167;
if(
ELONGP(BgL_arg2005z00_1649))
{ /* Ieee/number.scm 662 */
BgL_tmpz00_10167 = BgL_arg2005z00_1649
; }  else 
{ 
obj_t BgL_auxz00_10170;
BgL_auxz00_10170 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)25104)), BGl_string5311z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg2005z00_1649); 
FAILURE(BgL_auxz00_10170,BFALSE,BFALSE);} 
BgL_tmpz00_10166 = 
BELONG_TO_LONG(BgL_tmpz00_10167); } 
BgL_arg2004z00_1648 = 
(BGL_LONGLONG_T)(BgL_tmpz00_10166); } } 
{ /* Ieee/number.scm 662 */
uint64_t BgL_res3988z00_4514;
BgL_res3988z00_4514 = 
(uint64_t)(BgL_arg2004z00_1648); 
BgL_arg2003z00_1647 = BgL_res3988z00_4514; } } 
{ /* Ieee/number.scm 656 */
bool_t BgL_test6050z00_10177;
{ /* Ieee/number.scm 656 */
uint64_t BgL_n1z00_4516;
BgL_n1z00_4516 = 
BGL_BINT64_TO_INT64(BgL_xz00_84); 
BgL_test6050z00_10177 = 
(BgL_n1z00_4516>BgL_arg2003z00_1647); } 
if(BgL_test6050z00_10177)
{ /* Ieee/number.scm 656 */
return 
BGL_UINT64_TO_BUINT64(BgL_arg2003z00_1647);}  else 
{ /* Ieee/number.scm 656 */
return BgL_xz00_84;} } }  else 
{ /* Ieee/number.scm 662 */
if(
BIGNUMP(BgL_yz00_85))
{ /* Ieee/number.scm 662 */
obj_t BgL_arg2007z00_1651;
BgL_arg2007z00_1651 = 
bgl_uint64_to_bignum(
BGL_BINT64_TO_INT64(BgL_xz00_84)); 
if(
(
(long)(
bgl_bignum_cmp(BgL_arg2007z00_1651, BgL_yz00_85))>((long)0)))
{ /* Ieee/number.scm 654 */
return BgL_yz00_85;}  else 
{ /* Ieee/number.scm 654 */
return BgL_arg2007z00_1651;} }  else 
{ /* Ieee/number.scm 662 */
return 
BGl_errorz00zz__errorz00(BGl_string5311z00zz__r4_numbers_6_5z00, BGl_string5292z00zz__r4_numbers_6_5z00, BgL_yz00_85);} } } } } } }  else 
{ /* Ieee/number.scm 662 */
if(
BIGNUMP(BgL_xz00_84))
{ /* Ieee/number.scm 662 */
if(
BIGNUMP(BgL_yz00_85))
{ /* Ieee/number.scm 662 */
if(
(
(long)(
bgl_bignum_cmp(BgL_xz00_84, BgL_yz00_85))>((long)0)))
{ /* Ieee/number.scm 654 */
return BgL_yz00_85;}  else 
{ /* Ieee/number.scm 654 */
return BgL_xz00_84;} }  else 
{ /* Ieee/number.scm 662 */
if(
INTEGERP(BgL_yz00_85))
{ /* Ieee/number.scm 662 */
obj_t BgL_arg2011z00_1655;
BgL_arg2011z00_1655 = 
bgl_long_to_bignum(
(long)CINT(BgL_yz00_85)); 
if(
(
(long)(
bgl_bignum_cmp(BgL_xz00_84, BgL_arg2011z00_1655))>((long)0)))
{ /* Ieee/number.scm 654 */
return BgL_arg2011z00_1655;}  else 
{ /* Ieee/number.scm 654 */
return BgL_xz00_84;} }  else 
{ /* Ieee/number.scm 662 */
if(
REALP(BgL_yz00_85))
{ /* Ieee/number.scm 662 */
double BgL_arg2013z00_1657;
BgL_arg2013z00_1657 = 
bgl_bignum_to_flonum(BgL_xz00_84); 
if(
(BgL_arg2013z00_1657>
REAL_TO_DOUBLE(BgL_yz00_85)))
{ /* Ieee/number.scm 648 */
return BgL_yz00_85;}  else 
{ /* Ieee/number.scm 648 */
return 
DOUBLE_TO_REAL(BgL_arg2013z00_1657);} }  else 
{ /* Ieee/number.scm 662 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_85))
{ /* Ieee/number.scm 662 */
obj_t BgL_arg2016z00_1659;
{ /* Ieee/number.scm 662 */
obj_t BgL_arg2017z00_1660;
BgL_arg2017z00_1660 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_85); 
{ /* Ieee/number.scm 662 */
long BgL_xz00_4553;
{ /* Ieee/number.scm 662 */
obj_t BgL_tmpz00_10216;
if(
ELONGP(BgL_arg2017z00_1660))
{ /* Ieee/number.scm 662 */
BgL_tmpz00_10216 = BgL_arg2017z00_1660
; }  else 
{ 
obj_t BgL_auxz00_10219;
BgL_auxz00_10219 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)25104)), BGl_string5311z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg2017z00_1660); 
FAILURE(BgL_auxz00_10219,BFALSE,BFALSE);} 
BgL_xz00_4553 = 
BELONG_TO_LONG(BgL_tmpz00_10216); } 
BgL_arg2016z00_1659 = 
bgl_long_to_bignum(BgL_xz00_4553); } } 
if(
(
(long)(
bgl_bignum_cmp(BgL_xz00_84, BgL_arg2016z00_1659))>((long)0)))
{ /* Ieee/number.scm 654 */
return BgL_arg2016z00_1659;}  else 
{ /* Ieee/number.scm 654 */
return BgL_xz00_84;} }  else 
{ /* Ieee/number.scm 662 */
if(
LLONGP(BgL_yz00_85))
{ /* Ieee/number.scm 662 */
obj_t BgL_arg2020z00_1662;
BgL_arg2020z00_1662 = 
bgl_llong_to_bignum(
BLLONG_TO_LLONG(BgL_yz00_85)); 
if(
(
(long)(
bgl_bignum_cmp(BgL_xz00_84, BgL_arg2020z00_1662))>((long)0)))
{ /* Ieee/number.scm 654 */
return BgL_arg2020z00_1662;}  else 
{ /* Ieee/number.scm 654 */
return BgL_xz00_84;} }  else 
{ /* Ieee/number.scm 662 */
if(
BGL_UINT64P(BgL_yz00_85))
{ /* Ieee/number.scm 662 */
obj_t BgL_arg2023z00_1665;
BgL_arg2023z00_1665 = 
bgl_uint64_to_bignum(
BGL_BINT64_TO_INT64(BgL_yz00_85)); 
if(
(
(long)(
bgl_bignum_cmp(BgL_xz00_84, BgL_arg2023z00_1665))>((long)0)))
{ /* Ieee/number.scm 654 */
return BgL_arg2023z00_1665;}  else 
{ /* Ieee/number.scm 654 */
return BgL_xz00_84;} }  else 
{ /* Ieee/number.scm 662 */
return 
BGl_errorz00zz__errorz00(BGl_string5311z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_85);} } } } } } }  else 
{ /* Ieee/number.scm 662 */
return 
BGl_errorz00zz__errorz00(BGl_string5311z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_xz00_84);} } } } } } } 

}



/* &2min */
obj_t BGl_z622minz62zz__r4_numbers_6_5z00(obj_t BgL_envz00_6531, obj_t BgL_xz00_6532, obj_t BgL_yz00_6533)
{
{ /* Ieee/number.scm 661 */
return 
BGl_2minz00zz__r4_numbers_6_5z00(BgL_xz00_6532, BgL_yz00_6533);} 

}



/* min */
BGL_EXPORTED_DEF obj_t BGl_minz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_86, obj_t BgL_yz00_87)
{
{ /* Ieee/number.scm 667 */
{ 
obj_t BgL_xz00_4595;obj_t BgL_yz00_4596;
BgL_xz00_4595 = BgL_xz00_86; 
BgL_yz00_4596 = BgL_yz00_87; 
BgL_loopz00_4594:
if(
PAIRP(BgL_yz00_4596))
{ 
obj_t BgL_yz00_10253;obj_t BgL_xz00_10250;
BgL_xz00_10250 = 
BGl_2minz00zz__r4_numbers_6_5z00(BgL_xz00_4595, 
CAR(BgL_yz00_4596)); 
BgL_yz00_10253 = 
CDR(BgL_yz00_4596); 
BgL_yz00_4596 = BgL_yz00_10253; 
BgL_xz00_4595 = BgL_xz00_10250; 
goto BgL_loopz00_4594;}  else 
{ /* Ieee/number.scm 670 */
return BgL_xz00_4595;} } } 

}



/* &min */
obj_t BGl_z62minz62zz__r4_numbers_6_5z00(obj_t BgL_envz00_6534, obj_t BgL_xz00_6535, obj_t BgL_yz00_6536)
{
{ /* Ieee/number.scm 667 */
return 
BGl_minz00zz__r4_numbers_6_5z00(BgL_xz00_6535, BgL_yz00_6536);} 

}



/* 2+ */
BGL_EXPORTED_DEF obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t BgL_xz00_88, obj_t BgL_yz00_89)
{
{ /* Ieee/number.scm 677 */
if(
INTEGERP(BgL_xz00_88))
{ /* Ieee/number.scm 678 */
if(
INTEGERP(BgL_yz00_89))
{ /* Ieee/number.scm 678 */
long BgL_auxz00_10262;long BgL_tmpz00_10260;
BgL_auxz00_10262 = 
(long)CINT(BgL_yz00_89); 
BgL_tmpz00_10260 = 
(long)CINT(BgL_xz00_88); 
return 
BGL_SAFE_PLUS_FX(BgL_tmpz00_10260, BgL_auxz00_10262);}  else 
{ /* Ieee/number.scm 678 */
if(
REALP(BgL_yz00_89))
{ /* Ieee/number.scm 678 */
return 
DOUBLE_TO_REAL(
(
(double)(
(long)CINT(BgL_xz00_88))+
REAL_TO_DOUBLE(BgL_yz00_89)));}  else 
{ /* Ieee/number.scm 678 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_89))
{ /* Ieee/number.scm 678 */
long BgL_arg2035z00_1680;obj_t BgL_arg2036z00_1681;
{ /* Ieee/number.scm 678 */
long BgL_res4021z00_4615;
{ /* Ieee/number.scm 678 */
long BgL_tmpz00_10274;
BgL_tmpz00_10274 = 
(long)CINT(BgL_xz00_88); 
BgL_res4021z00_4615 = 
(long)(BgL_tmpz00_10274); } 
BgL_arg2035z00_1680 = BgL_res4021z00_4615; } 
BgL_arg2036z00_1681 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_89); 
{ /* Ieee/number.scm 678 */
long BgL_tmpz00_10278;
{ /* Ieee/number.scm 678 */
obj_t BgL_tmpz00_10279;
if(
ELONGP(BgL_arg2036z00_1681))
{ /* Ieee/number.scm 678 */
BgL_tmpz00_10279 = BgL_arg2036z00_1681
; }  else 
{ 
obj_t BgL_auxz00_10282;
BgL_auxz00_10282 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)25703)), BGl_string5312z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg2036z00_1681); 
FAILURE(BgL_auxz00_10282,BFALSE,BFALSE);} 
BgL_tmpz00_10278 = 
BELONG_TO_LONG(BgL_tmpz00_10279); } 
return 
BGL_SAFE_PLUS_ELONG(BgL_arg2035z00_1680, BgL_tmpz00_10278);} }  else 
{ /* Ieee/number.scm 678 */
if(
LLONGP(BgL_yz00_89))
{ /* Ieee/number.scm 678 */
BGL_LONGLONG_T BgL_arg2038z00_1683;
{ /* Ieee/number.scm 678 */
BGL_LONGLONG_T BgL_res4023z00_4618;
{ /* Ieee/number.scm 678 */
long BgL_tmpz00_10290;
BgL_tmpz00_10290 = 
(long)CINT(BgL_xz00_88); 
BgL_res4023z00_4618 = 
LONG_TO_LLONG(BgL_tmpz00_10290); } 
BgL_arg2038z00_1683 = BgL_res4023z00_4618; } 
{ /* Ieee/number.scm 678 */
BGL_LONGLONG_T BgL_tmpz00_10293;
BgL_tmpz00_10293 = 
BLLONG_TO_LLONG(BgL_yz00_89); 
return 
BGL_SAFE_PLUS_LLONG(BgL_arg2038z00_1683, BgL_tmpz00_10293);} }  else 
{ /* Ieee/number.scm 678 */
if(
BGL_UINT64P(BgL_yz00_89))
{ /* Ieee/number.scm 678 */
uint64_t BgL_arg2041z00_1686;
{ /* Ieee/number.scm 678 */
BGL_LONGLONG_T BgL_arg2043z00_1687;
{ /* Ieee/number.scm 678 */
BGL_LONGLONG_T BgL_res4025z00_4621;
{ /* Ieee/number.scm 678 */
long BgL_tmpz00_10298;
BgL_tmpz00_10298 = 
(long)CINT(BgL_xz00_88); 
BgL_res4025z00_4621 = 
LONG_TO_LLONG(BgL_tmpz00_10298); } 
BgL_arg2043z00_1687 = BgL_res4025z00_4621; } 
{ /* Ieee/number.scm 678 */
uint64_t BgL_res4026z00_4623;
BgL_res4026z00_4623 = 
(uint64_t)(BgL_arg2043z00_1687); 
BgL_arg2041z00_1686 = BgL_res4026z00_4623; } } 
{ /* Ieee/number.scm 678 */
uint64_t BgL_za72za7_4625;
BgL_za72za7_4625 = 
BGL_BINT64_TO_INT64(BgL_yz00_89); 
{ /* Ieee/number.scm 678 */
uint64_t BgL_tmpz00_10303;
BgL_tmpz00_10303 = 
(BgL_arg2041z00_1686+BgL_za72za7_4625); 
return 
BGL_UINT64_TO_BUINT64(BgL_tmpz00_10303);} } }  else 
{ /* Ieee/number.scm 678 */
if(
BIGNUMP(BgL_yz00_89))
{ /* Ieee/number.scm 678 */
obj_t BgL_tmpz00_10308;
BgL_tmpz00_10308 = 
bgl_bignum_add(
bgl_long_to_bignum(
(long)CINT(BgL_xz00_88)), BgL_yz00_89); 
return 
BGL_SAFE_BX_TO_FX(BgL_tmpz00_10308);}  else 
{ /* Ieee/number.scm 678 */
return 
BGl_errorz00zz__errorz00(BGl_string5313z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_89);} } } } } } }  else 
{ /* Ieee/number.scm 678 */
if(
REALP(BgL_xz00_88))
{ /* Ieee/number.scm 678 */
if(
REALP(BgL_yz00_89))
{ /* Ieee/number.scm 678 */
return 
DOUBLE_TO_REAL(
(
REAL_TO_DOUBLE(BgL_xz00_88)+
REAL_TO_DOUBLE(BgL_yz00_89)));}  else 
{ /* Ieee/number.scm 678 */
if(
INTEGERP(BgL_yz00_89))
{ /* Ieee/number.scm 678 */
return 
DOUBLE_TO_REAL(
(
REAL_TO_DOUBLE(BgL_xz00_88)+
(double)(
(long)CINT(BgL_yz00_89))));}  else 
{ /* Ieee/number.scm 678 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_89))
{ /* Ieee/number.scm 678 */
double BgL_arg2053z00_1696;
{ /* Ieee/number.scm 678 */
obj_t BgL_arg2055z00_1697;
BgL_arg2055z00_1697 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_89); 
{ /* Ieee/number.scm 678 */
long BgL_tmpz00_10332;
{ /* Ieee/number.scm 678 */
obj_t BgL_tmpz00_10333;
if(
ELONGP(BgL_arg2055z00_1697))
{ /* Ieee/number.scm 678 */
BgL_tmpz00_10333 = BgL_arg2055z00_1697
; }  else 
{ 
obj_t BgL_auxz00_10336;
BgL_auxz00_10336 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)25703)), BGl_string5312z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg2055z00_1697); 
FAILURE(BgL_auxz00_10336,BFALSE,BFALSE);} 
BgL_tmpz00_10332 = 
BELONG_TO_LONG(BgL_tmpz00_10333); } 
BgL_arg2053z00_1696 = 
(double)(BgL_tmpz00_10332); } } 
return 
DOUBLE_TO_REAL(
(
REAL_TO_DOUBLE(BgL_xz00_88)+BgL_arg2053z00_1696));}  else 
{ /* Ieee/number.scm 678 */
if(
LLONGP(BgL_yz00_89))
{ /* Ieee/number.scm 678 */
return 
DOUBLE_TO_REAL(
(
REAL_TO_DOUBLE(BgL_xz00_88)+
(double)(
BLLONG_TO_LLONG(BgL_yz00_89))));}  else 
{ /* Ieee/number.scm 678 */
if(
BGL_UINT64P(BgL_yz00_89))
{ /* Ieee/number.scm 678 */
double BgL_arg2061z00_1702;
{ /* Ieee/number.scm 678 */
double BgL_res4040z00_4651;
{ /* Ieee/number.scm 678 */
uint64_t BgL_xz00_4650;
BgL_xz00_4650 = 
BGL_BINT64_TO_INT64(BgL_yz00_89); 
BgL_res4040z00_4651 = 
(double)(BgL_xz00_4650); } 
BgL_arg2061z00_1702 = BgL_res4040z00_4651; } 
return 
DOUBLE_TO_REAL(
(
REAL_TO_DOUBLE(BgL_xz00_88)+BgL_arg2061z00_1702));}  else 
{ /* Ieee/number.scm 678 */
if(
BIGNUMP(BgL_yz00_89))
{ /* Ieee/number.scm 678 */
return 
DOUBLE_TO_REAL(
(
REAL_TO_DOUBLE(BgL_xz00_88)+
bgl_bignum_to_flonum(BgL_yz00_89)));}  else 
{ /* Ieee/number.scm 678 */
return 
BGl_errorz00zz__errorz00(BGl_string5313z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_89);} } } } } } }  else 
{ /* Ieee/number.scm 678 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_xz00_88))
{ /* Ieee/number.scm 678 */
if(
INTEGERP(BgL_yz00_89))
{ /* Ieee/number.scm 678 */
obj_t BgL_arg2066z00_1707;long BgL_arg2068z00_1708;
BgL_arg2066z00_1707 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_88); 
{ /* Ieee/number.scm 678 */
long BgL_res4046z00_4663;
{ /* Ieee/number.scm 678 */
long BgL_tmpz00_10371;
BgL_tmpz00_10371 = 
(long)CINT(BgL_yz00_89); 
BgL_res4046z00_4663 = 
(long)(BgL_tmpz00_10371); } 
BgL_arg2068z00_1708 = BgL_res4046z00_4663; } 
{ /* Ieee/number.scm 678 */
long BgL_tmpz00_10374;
{ /* Ieee/number.scm 678 */
obj_t BgL_tmpz00_10375;
if(
ELONGP(BgL_arg2066z00_1707))
{ /* Ieee/number.scm 678 */
BgL_tmpz00_10375 = BgL_arg2066z00_1707
; }  else 
{ 
obj_t BgL_auxz00_10378;
BgL_auxz00_10378 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)25703)), BGl_string5312z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg2066z00_1707); 
FAILURE(BgL_auxz00_10378,BFALSE,BFALSE);} 
BgL_tmpz00_10374 = 
BELONG_TO_LONG(BgL_tmpz00_10375); } 
return 
BGL_SAFE_PLUS_ELONG(BgL_tmpz00_10374, BgL_arg2068z00_1708);} }  else 
{ /* Ieee/number.scm 678 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_89))
{ /* Ieee/number.scm 678 */
obj_t BgL_arg2070z00_1710;obj_t BgL_arg2071z00_1711;
BgL_arg2070z00_1710 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_88); 
BgL_arg2071z00_1711 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_89); 
{ /* Ieee/number.scm 678 */
long BgL_auxz00_10397;long BgL_tmpz00_10388;
{ /* Ieee/number.scm 678 */
obj_t BgL_tmpz00_10398;
if(
ELONGP(BgL_arg2071z00_1711))
{ /* Ieee/number.scm 678 */
BgL_tmpz00_10398 = BgL_arg2071z00_1711
; }  else 
{ 
obj_t BgL_auxz00_10401;
BgL_auxz00_10401 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)25703)), BGl_string5312z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg2071z00_1711); 
FAILURE(BgL_auxz00_10401,BFALSE,BFALSE);} 
BgL_auxz00_10397 = 
BELONG_TO_LONG(BgL_tmpz00_10398); } 
{ /* Ieee/number.scm 678 */
obj_t BgL_tmpz00_10389;
if(
ELONGP(BgL_arg2070z00_1710))
{ /* Ieee/number.scm 678 */
BgL_tmpz00_10389 = BgL_arg2070z00_1710
; }  else 
{ 
obj_t BgL_auxz00_10392;
BgL_auxz00_10392 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)25703)), BGl_string5312z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg2070z00_1710); 
FAILURE(BgL_auxz00_10392,BFALSE,BFALSE);} 
BgL_tmpz00_10388 = 
BELONG_TO_LONG(BgL_tmpz00_10389); } 
return 
BGL_SAFE_PLUS_ELONG(BgL_tmpz00_10388, BgL_auxz00_10397);} }  else 
{ /* Ieee/number.scm 678 */
if(
REALP(BgL_yz00_89))
{ /* Ieee/number.scm 678 */
double BgL_arg2075z00_1713;
{ /* Ieee/number.scm 678 */
obj_t BgL_arg2076z00_1714;
BgL_arg2076z00_1714 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_88); 
{ /* Ieee/number.scm 678 */
long BgL_tmpz00_10410;
{ /* Ieee/number.scm 678 */
obj_t BgL_tmpz00_10411;
if(
ELONGP(BgL_arg2076z00_1714))
{ /* Ieee/number.scm 678 */
BgL_tmpz00_10411 = BgL_arg2076z00_1714
; }  else 
{ 
obj_t BgL_auxz00_10414;
BgL_auxz00_10414 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)25703)), BGl_string5312z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg2076z00_1714); 
FAILURE(BgL_auxz00_10414,BFALSE,BFALSE);} 
BgL_tmpz00_10410 = 
BELONG_TO_LONG(BgL_tmpz00_10411); } 
BgL_arg2075z00_1713 = 
(double)(BgL_tmpz00_10410); } } 
return 
DOUBLE_TO_REAL(
(BgL_arg2075z00_1713+
REAL_TO_DOUBLE(BgL_yz00_89)));}  else 
{ /* Ieee/number.scm 678 */
if(
LLONGP(BgL_yz00_89))
{ /* Ieee/number.scm 678 */
BGL_LONGLONG_T BgL_arg2078z00_1716;
{ /* Ieee/number.scm 678 */
obj_t BgL_arg2080z00_1718;
BgL_arg2080z00_1718 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_88); 
{ /* Ieee/number.scm 678 */
long BgL_tmpz00_10426;
{ /* Ieee/number.scm 678 */
obj_t BgL_tmpz00_10427;
if(
ELONGP(BgL_arg2080z00_1718))
{ /* Ieee/number.scm 678 */
BgL_tmpz00_10427 = BgL_arg2080z00_1718
; }  else 
{ 
obj_t BgL_auxz00_10430;
BgL_auxz00_10430 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)25703)), BGl_string5312z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg2080z00_1718); 
FAILURE(BgL_auxz00_10430,BFALSE,BFALSE);} 
BgL_tmpz00_10426 = 
BELONG_TO_LONG(BgL_tmpz00_10427); } 
BgL_arg2078z00_1716 = 
(BGL_LONGLONG_T)(BgL_tmpz00_10426); } } 
{ /* Ieee/number.scm 678 */
BGL_LONGLONG_T BgL_tmpz00_10436;
BgL_tmpz00_10436 = 
BLLONG_TO_LLONG(BgL_yz00_89); 
return 
BGL_SAFE_PLUS_LLONG(BgL_arg2078z00_1716, BgL_tmpz00_10436);} }  else 
{ /* Ieee/number.scm 678 */
if(
BGL_UINT64P(BgL_yz00_89))
{ /* Ieee/number.scm 678 */
uint64_t BgL_arg2082z00_1720;
{ /* Ieee/number.scm 678 */
BGL_LONGLONG_T BgL_arg2083z00_1721;
{ /* Ieee/number.scm 678 */
obj_t BgL_arg2084z00_1722;
BgL_arg2084z00_1722 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_88); 
{ /* Ieee/number.scm 678 */
long BgL_tmpz00_10442;
{ /* Ieee/number.scm 678 */
obj_t BgL_tmpz00_10443;
if(
ELONGP(BgL_arg2084z00_1722))
{ /* Ieee/number.scm 678 */
BgL_tmpz00_10443 = BgL_arg2084z00_1722
; }  else 
{ 
obj_t BgL_auxz00_10446;
BgL_auxz00_10446 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)25703)), BGl_string5312z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg2084z00_1722); 
FAILURE(BgL_auxz00_10446,BFALSE,BFALSE);} 
BgL_tmpz00_10442 = 
BELONG_TO_LONG(BgL_tmpz00_10443); } 
BgL_arg2083z00_1721 = 
(BGL_LONGLONG_T)(BgL_tmpz00_10442); } } 
{ /* Ieee/number.scm 678 */
uint64_t BgL_res4051z00_4671;
BgL_res4051z00_4671 = 
(uint64_t)(BgL_arg2083z00_1721); 
BgL_arg2082z00_1720 = BgL_res4051z00_4671; } } 
{ /* Ieee/number.scm 678 */
uint64_t BgL_za72za7_4673;
BgL_za72za7_4673 = 
BGL_BINT64_TO_INT64(BgL_yz00_89); 
{ /* Ieee/number.scm 678 */
uint64_t BgL_tmpz00_10454;
BgL_tmpz00_10454 = 
(BgL_arg2082z00_1720+BgL_za72za7_4673); 
return 
BGL_UINT64_TO_BUINT64(BgL_tmpz00_10454);} } }  else 
{ /* Ieee/number.scm 678 */
if(
BIGNUMP(BgL_yz00_89))
{ /* Ieee/number.scm 678 */
obj_t BgL_arg2086z00_1724;
{ /* Ieee/number.scm 678 */
obj_t BgL_arg2087z00_1725;
BgL_arg2087z00_1725 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_88); 
{ /* Ieee/number.scm 678 */
long BgL_xz00_4676;
{ /* Ieee/number.scm 678 */
obj_t BgL_tmpz00_10460;
if(
ELONGP(BgL_arg2087z00_1725))
{ /* Ieee/number.scm 678 */
BgL_tmpz00_10460 = BgL_arg2087z00_1725
; }  else 
{ 
obj_t BgL_auxz00_10463;
BgL_auxz00_10463 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)25703)), BGl_string5312z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg2087z00_1725); 
FAILURE(BgL_auxz00_10463,BFALSE,BFALSE);} 
BgL_xz00_4676 = 
BELONG_TO_LONG(BgL_tmpz00_10460); } 
BgL_arg2086z00_1724 = 
bgl_long_to_bignum(BgL_xz00_4676); } } 
return 
bgl_bignum_add(BgL_arg2086z00_1724, BgL_yz00_89);}  else 
{ /* Ieee/number.scm 678 */
return 
BGl_errorz00zz__errorz00(BGl_string5313z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_89);} } } } } } }  else 
{ /* Ieee/number.scm 678 */
if(
LLONGP(BgL_xz00_88))
{ /* Ieee/number.scm 678 */
if(
INTEGERP(BgL_yz00_89))
{ /* Ieee/number.scm 678 */
BGL_LONGLONG_T BgL_arg2091z00_1729;
{ /* Ieee/number.scm 678 */
BGL_LONGLONG_T BgL_res4058z00_4684;
{ /* Ieee/number.scm 678 */
long BgL_tmpz00_10475;
BgL_tmpz00_10475 = 
(long)CINT(BgL_yz00_89); 
BgL_res4058z00_4684 = 
LONG_TO_LLONG(BgL_tmpz00_10475); } 
BgL_arg2091z00_1729 = BgL_res4058z00_4684; } 
{ /* Ieee/number.scm 678 */
BGL_LONGLONG_T BgL_tmpz00_10478;
BgL_tmpz00_10478 = 
BLLONG_TO_LLONG(BgL_xz00_88); 
return 
BGL_SAFE_PLUS_LLONG(BgL_tmpz00_10478, BgL_arg2091z00_1729);} }  else 
{ /* Ieee/number.scm 678 */
if(
REALP(BgL_yz00_89))
{ /* Ieee/number.scm 678 */
return 
DOUBLE_TO_REAL(
(
(double)(
BLLONG_TO_LLONG(BgL_xz00_88))+
REAL_TO_DOUBLE(BgL_yz00_89)));}  else 
{ /* Ieee/number.scm 678 */
if(
LLONGP(BgL_yz00_89))
{ /* Ieee/number.scm 678 */
BGL_LONGLONG_T BgL_auxz00_10492;BGL_LONGLONG_T BgL_tmpz00_10490;
BgL_auxz00_10492 = 
BLLONG_TO_LLONG(BgL_yz00_89); 
BgL_tmpz00_10490 = 
BLLONG_TO_LLONG(BgL_xz00_88); 
return 
BGL_SAFE_PLUS_LLONG(BgL_tmpz00_10490, BgL_auxz00_10492);}  else 
{ /* Ieee/number.scm 678 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_89))
{ /* Ieee/number.scm 678 */
BGL_LONGLONG_T BgL_arg2100z00_1737;
{ /* Ieee/number.scm 678 */
obj_t BgL_arg2101z00_1738;
BgL_arg2101z00_1738 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_89); 
{ /* Ieee/number.scm 678 */
long BgL_tmpz00_10498;
{ /* Ieee/number.scm 678 */
obj_t BgL_tmpz00_10499;
if(
ELONGP(BgL_arg2101z00_1738))
{ /* Ieee/number.scm 678 */
BgL_tmpz00_10499 = BgL_arg2101z00_1738
; }  else 
{ 
obj_t BgL_auxz00_10502;
BgL_auxz00_10502 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)25703)), BGl_string5312z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg2101z00_1738); 
FAILURE(BgL_auxz00_10502,BFALSE,BFALSE);} 
BgL_tmpz00_10498 = 
BELONG_TO_LONG(BgL_tmpz00_10499); } 
BgL_arg2100z00_1737 = 
(BGL_LONGLONG_T)(BgL_tmpz00_10498); } } 
{ /* Ieee/number.scm 678 */
BGL_LONGLONG_T BgL_tmpz00_10508;
BgL_tmpz00_10508 = 
BLLONG_TO_LLONG(BgL_xz00_88); 
return 
BGL_SAFE_PLUS_LLONG(BgL_tmpz00_10508, BgL_arg2100z00_1737);} }  else 
{ /* Ieee/number.scm 678 */
if(
BIGNUMP(BgL_yz00_89))
{ /* Ieee/number.scm 678 */
return 
bgl_bignum_add(
bgl_llong_to_bignum(
BLLONG_TO_LLONG(BgL_xz00_88)), BgL_yz00_89);}  else 
{ /* Ieee/number.scm 678 */
if(
BGL_UINT64P(BgL_yz00_89))
{ /* Ieee/number.scm 678 */
uint64_t BgL_arg2106z00_1743;
{ /* Ieee/number.scm 678 */
uint64_t BgL_res4066z00_4698;
{ /* Ieee/number.scm 678 */
BGL_LONGLONG_T BgL_tmpz00_10518;
BgL_tmpz00_10518 = 
BLLONG_TO_LLONG(BgL_xz00_88); 
BgL_res4066z00_4698 = 
(uint64_t)(BgL_tmpz00_10518); } 
BgL_arg2106z00_1743 = BgL_res4066z00_4698; } 
{ /* Ieee/number.scm 678 */
uint64_t BgL_za72za7_4700;
BgL_za72za7_4700 = 
BGL_BINT64_TO_INT64(BgL_yz00_89); 
{ /* Ieee/number.scm 678 */
uint64_t BgL_tmpz00_10522;
BgL_tmpz00_10522 = 
(BgL_arg2106z00_1743+BgL_za72za7_4700); 
return 
BGL_UINT64_TO_BUINT64(BgL_tmpz00_10522);} } }  else 
{ /* Ieee/number.scm 678 */
return 
BGl_errorz00zz__errorz00(BGl_string5313z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_89);} } } } } } }  else 
{ /* Ieee/number.scm 678 */
if(
BGL_UINT64P(BgL_xz00_88))
{ /* Ieee/number.scm 678 */
if(
INTEGERP(BgL_yz00_89))
{ /* Ieee/number.scm 678 */
uint64_t BgL_arg2109z00_1746;
{ /* Ieee/number.scm 678 */
uint64_t BgL_res4070z00_4705;
{ /* Ieee/number.scm 678 */
long BgL_tmpz00_10530;
BgL_tmpz00_10530 = 
(long)CINT(BgL_yz00_89); 
BgL_res4070z00_4705 = 
(uint64_t)(BgL_tmpz00_10530); } 
BgL_arg2109z00_1746 = BgL_res4070z00_4705; } 
{ /* Ieee/number.scm 678 */
uint64_t BgL_za71za7_4706;
BgL_za71za7_4706 = 
BGL_BINT64_TO_INT64(BgL_xz00_88); 
{ /* Ieee/number.scm 678 */
uint64_t BgL_tmpz00_10534;
BgL_tmpz00_10534 = 
(BgL_za71za7_4706+BgL_arg2109z00_1746); 
return 
BGL_UINT64_TO_BUINT64(BgL_tmpz00_10534);} } }  else 
{ /* Ieee/number.scm 678 */
if(
BGL_UINT64P(BgL_yz00_89))
{ /* Ieee/number.scm 678 */
uint64_t BgL_za71za7_4710;uint64_t BgL_za72za7_4711;
BgL_za71za7_4710 = 
BGL_BINT64_TO_INT64(BgL_xz00_88); 
BgL_za72za7_4711 = 
BGL_BINT64_TO_INT64(BgL_yz00_89); 
{ /* Ieee/number.scm 678 */
uint64_t BgL_tmpz00_10541;
BgL_tmpz00_10541 = 
(BgL_za71za7_4710+BgL_za72za7_4711); 
return 
BGL_UINT64_TO_BUINT64(BgL_tmpz00_10541);} }  else 
{ /* Ieee/number.scm 678 */
if(
REALP(BgL_yz00_89))
{ /* Ieee/number.scm 678 */
double BgL_arg2112z00_1749;
{ /* Ieee/number.scm 678 */
uint64_t BgL_tmpz00_10546;
BgL_tmpz00_10546 = 
BGL_BINT64_TO_INT64(BgL_xz00_88); 
BgL_arg2112z00_1749 = 
(double)(BgL_tmpz00_10546); } 
return 
DOUBLE_TO_REAL(
(BgL_arg2112z00_1749+
REAL_TO_DOUBLE(BgL_yz00_89)));}  else 
{ /* Ieee/number.scm 678 */
if(
LLONGP(BgL_yz00_89))
{ /* Ieee/number.scm 678 */
uint64_t BgL_arg2114z00_1751;
{ /* Ieee/number.scm 678 */
uint64_t BgL_res4077z00_4719;
{ /* Ieee/number.scm 678 */
BGL_LONGLONG_T BgL_tmpz00_10554;
BgL_tmpz00_10554 = 
BLLONG_TO_LLONG(BgL_yz00_89); 
BgL_res4077z00_4719 = 
(uint64_t)(BgL_tmpz00_10554); } 
BgL_arg2114z00_1751 = BgL_res4077z00_4719; } 
{ /* Ieee/number.scm 678 */
uint64_t BgL_za71za7_4720;
BgL_za71za7_4720 = 
BGL_BINT64_TO_INT64(BgL_xz00_88); 
{ /* Ieee/number.scm 678 */
uint64_t BgL_tmpz00_10558;
BgL_tmpz00_10558 = 
(BgL_za71za7_4720+BgL_arg2114z00_1751); 
return 
BGL_UINT64_TO_BUINT64(BgL_tmpz00_10558);} } }  else 
{ /* Ieee/number.scm 678 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_89))
{ /* Ieee/number.scm 678 */
uint64_t BgL_arg2117z00_1754;
{ /* Ieee/number.scm 678 */
BGL_LONGLONG_T BgL_arg2118z00_1755;
{ /* Ieee/number.scm 678 */
obj_t BgL_arg2119z00_1756;
BgL_arg2119z00_1756 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_89); 
{ /* Ieee/number.scm 678 */
long BgL_tmpz00_10564;
{ /* Ieee/number.scm 678 */
obj_t BgL_tmpz00_10565;
if(
ELONGP(BgL_arg2119z00_1756))
{ /* Ieee/number.scm 678 */
BgL_tmpz00_10565 = BgL_arg2119z00_1756
; }  else 
{ 
obj_t BgL_auxz00_10568;
BgL_auxz00_10568 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)25703)), BGl_string5312z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg2119z00_1756); 
FAILURE(BgL_auxz00_10568,BFALSE,BFALSE);} 
BgL_tmpz00_10564 = 
BELONG_TO_LONG(BgL_tmpz00_10565); } 
BgL_arg2118z00_1755 = 
(BGL_LONGLONG_T)(BgL_tmpz00_10564); } } 
{ /* Ieee/number.scm 678 */
uint64_t BgL_res4079z00_4724;
BgL_res4079z00_4724 = 
(uint64_t)(BgL_arg2118z00_1755); 
BgL_arg2117z00_1754 = BgL_res4079z00_4724; } } 
{ /* Ieee/number.scm 678 */
uint64_t BgL_za71za7_4725;
BgL_za71za7_4725 = 
BGL_BINT64_TO_INT64(BgL_xz00_88); 
{ /* Ieee/number.scm 678 */
uint64_t BgL_tmpz00_10576;
BgL_tmpz00_10576 = 
(BgL_za71za7_4725+BgL_arg2117z00_1754); 
return 
BGL_UINT64_TO_BUINT64(BgL_tmpz00_10576);} } }  else 
{ /* Ieee/number.scm 678 */
if(
BIGNUMP(BgL_yz00_89))
{ /* Ieee/number.scm 678 */
return 
bgl_bignum_add(
bgl_uint64_to_bignum(
BGL_BINT64_TO_INT64(BgL_xz00_88)), BgL_yz00_89);}  else 
{ /* Ieee/number.scm 678 */
return 
BGl_errorz00zz__errorz00(BGl_string5313z00zz__r4_numbers_6_5z00, BGl_string5292z00zz__r4_numbers_6_5z00, BgL_yz00_89);} } } } } } }  else 
{ /* Ieee/number.scm 678 */
if(
BIGNUMP(BgL_xz00_88))
{ /* Ieee/number.scm 678 */
if(
BIGNUMP(BgL_yz00_89))
{ /* Ieee/number.scm 678 */
obj_t BgL_tmpz00_10589;
BgL_tmpz00_10589 = 
bgl_bignum_add(BgL_xz00_88, BgL_yz00_89); 
return 
BGL_SAFE_BX_TO_FX(BgL_tmpz00_10589);}  else 
{ /* Ieee/number.scm 678 */
if(
INTEGERP(BgL_yz00_89))
{ /* Ieee/number.scm 678 */
obj_t BgL_tmpz00_10594;
BgL_tmpz00_10594 = 
bgl_bignum_add(BgL_xz00_88, 
bgl_long_to_bignum(
(long)CINT(BgL_yz00_89))); 
return 
BGL_SAFE_BX_TO_FX(BgL_tmpz00_10594);}  else 
{ /* Ieee/number.scm 678 */
if(
REALP(BgL_yz00_89))
{ /* Ieee/number.scm 678 */
return 
DOUBLE_TO_REAL(
(
bgl_bignum_to_flonum(BgL_xz00_88)+
REAL_TO_DOUBLE(BgL_yz00_89)));}  else 
{ /* Ieee/number.scm 678 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_89))
{ /* Ieee/number.scm 678 */
obj_t BgL_arg2132z00_1768;
{ /* Ieee/number.scm 678 */
obj_t BgL_arg2133z00_1769;
BgL_arg2133z00_1769 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_89); 
{ /* Ieee/number.scm 678 */
long BgL_xz00_4749;
{ /* Ieee/number.scm 678 */
obj_t BgL_tmpz00_10608;
if(
ELONGP(BgL_arg2133z00_1769))
{ /* Ieee/number.scm 678 */
BgL_tmpz00_10608 = BgL_arg2133z00_1769
; }  else 
{ 
obj_t BgL_auxz00_10611;
BgL_auxz00_10611 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)25703)), BGl_string5312z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg2133z00_1769); 
FAILURE(BgL_auxz00_10611,BFALSE,BFALSE);} 
BgL_xz00_4749 = 
BELONG_TO_LONG(BgL_tmpz00_10608); } 
BgL_arg2132z00_1768 = 
bgl_long_to_bignum(BgL_xz00_4749); } } 
return 
bgl_bignum_add(BgL_xz00_88, BgL_arg2132z00_1768);}  else 
{ /* Ieee/number.scm 678 */
if(
LLONGP(BgL_yz00_89))
{ /* Ieee/number.scm 678 */
return 
bgl_bignum_add(BgL_xz00_88, 
bgl_llong_to_bignum(
BLLONG_TO_LLONG(BgL_yz00_89)));}  else 
{ /* Ieee/number.scm 678 */
if(
BGL_UINT64P(BgL_yz00_89))
{ /* Ieee/number.scm 678 */
return 
bgl_bignum_add(BgL_xz00_88, 
bgl_uint64_to_bignum(
BGL_BINT64_TO_INT64(BgL_yz00_89)));}  else 
{ /* Ieee/number.scm 678 */
return 
BGl_errorz00zz__errorz00(BGl_string5313z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_89);} } } } } } }  else 
{ /* Ieee/number.scm 678 */
return 
BGl_errorz00zz__errorz00(BGl_string5313z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_xz00_88);} } } } } } } 

}



/* &2+ */
obj_t BGl_z622zb2zd0zz__r4_numbers_6_5z00(obj_t BgL_envz00_6537, obj_t BgL_xz00_6538, obj_t BgL_yz00_6539)
{
{ /* Ieee/number.scm 677 */
return 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_xz00_6538, BgL_yz00_6539);} 

}



/* + */
BGL_EXPORTED_DEF obj_t BGl_zb2zb2zz__r4_numbers_6_5z00(obj_t BgL_xz00_90)
{
{ /* Ieee/number.scm 683 */
if(
NULLP(BgL_xz00_90))
{ /* Ieee/number.scm 686 */
return 
BINT(((long)0));}  else 
{ /* Ieee/number.scm 688 */
obj_t BgL_g1050z00_1776;obj_t BgL_g1051z00_1777;
{ /* Ieee/number.scm 688 */
obj_t BgL_pairz00_4765;
if(
PAIRP(BgL_xz00_90))
{ /* Ieee/number.scm 688 */
BgL_pairz00_4765 = BgL_xz00_90; }  else 
{ 
obj_t BgL_auxz00_10636;
BgL_auxz00_10636 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)26127)), BGl_string5313z00zz__r4_numbers_6_5z00, BGl_string5294z00zz__r4_numbers_6_5z00, BgL_xz00_90); 
FAILURE(BgL_auxz00_10636,BFALSE,BFALSE);} 
BgL_g1050z00_1776 = 
CAR(BgL_pairz00_4765); } 
{ /* Ieee/number.scm 689 */
obj_t BgL_pairz00_4766;
if(
PAIRP(BgL_xz00_90))
{ /* Ieee/number.scm 689 */
BgL_pairz00_4766 = BgL_xz00_90; }  else 
{ 
obj_t BgL_auxz00_10643;
BgL_auxz00_10643 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)26143)), BGl_string5313z00zz__r4_numbers_6_5z00, BGl_string5294z00zz__r4_numbers_6_5z00, BgL_xz00_90); 
FAILURE(BgL_auxz00_10643,BFALSE,BFALSE);} 
BgL_g1051z00_1777 = 
CDR(BgL_pairz00_4766); } 
{ 
obj_t BgL_sumz00_4782;obj_t BgL_xz00_4783;
BgL_sumz00_4782 = BgL_g1050z00_1776; 
BgL_xz00_4783 = BgL_g1051z00_1777; 
BgL_loopz00_4781:
if(
PAIRP(BgL_xz00_4783))
{ 
obj_t BgL_xz00_10653;obj_t BgL_sumz00_10650;
BgL_sumz00_10650 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_sumz00_4782, 
CAR(BgL_xz00_4783)); 
BgL_xz00_10653 = 
CDR(BgL_xz00_4783); 
BgL_xz00_4783 = BgL_xz00_10653; 
BgL_sumz00_4782 = BgL_sumz00_10650; 
goto BgL_loopz00_4781;}  else 
{ /* Ieee/number.scm 690 */
return BgL_sumz00_4782;} } } } 

}



/* &+ */
obj_t BGl_z62zb2zd0zz__r4_numbers_6_5z00(obj_t BgL_envz00_6540, obj_t BgL_xz00_6541)
{
{ /* Ieee/number.scm 683 */
return 
BGl_zb2zb2zz__r4_numbers_6_5z00(BgL_xz00_6541);} 

}



/* 2* */
BGL_EXPORTED_DEF obj_t BGl_2za2za2zz__r4_numbers_6_5z00(obj_t BgL_xz00_91, obj_t BgL_yz00_92)
{
{ /* Ieee/number.scm 697 */
if(
INTEGERP(BgL_xz00_91))
{ /* Ieee/number.scm 698 */
if(
INTEGERP(BgL_yz00_92))
{ /* Ieee/number.scm 698 */
long BgL_auxz00_10662;long BgL_tmpz00_10660;
BgL_auxz00_10662 = 
(long)CINT(BgL_yz00_92); 
BgL_tmpz00_10660 = 
(long)CINT(BgL_xz00_91); 
return 
BGL_SAFE_MUL_FX(BgL_tmpz00_10660, BgL_auxz00_10662);}  else 
{ /* Ieee/number.scm 698 */
if(
REALP(BgL_yz00_92))
{ /* Ieee/number.scm 698 */
return 
DOUBLE_TO_REAL(
(
(double)(
(long)CINT(BgL_xz00_91))*
REAL_TO_DOUBLE(BgL_yz00_92)));}  else 
{ /* Ieee/number.scm 698 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_92))
{ /* Ieee/number.scm 698 */
long BgL_arg2150z00_1792;obj_t BgL_arg2152z00_1793;
{ /* Ieee/number.scm 698 */
long BgL_res4107z00_4802;
{ /* Ieee/number.scm 698 */
long BgL_tmpz00_10674;
BgL_tmpz00_10674 = 
(long)CINT(BgL_xz00_91); 
BgL_res4107z00_4802 = 
(long)(BgL_tmpz00_10674); } 
BgL_arg2150z00_1792 = BgL_res4107z00_4802; } 
BgL_arg2152z00_1793 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_92); 
{ /* Ieee/number.scm 698 */
long BgL_tmpz00_10678;
{ /* Ieee/number.scm 698 */
obj_t BgL_tmpz00_10679;
if(
ELONGP(BgL_arg2152z00_1793))
{ /* Ieee/number.scm 698 */
BgL_tmpz00_10679 = BgL_arg2152z00_1793
; }  else 
{ 
obj_t BgL_auxz00_10682;
BgL_auxz00_10682 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)26462)), BGl_string5314z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg2152z00_1793); 
FAILURE(BgL_auxz00_10682,BFALSE,BFALSE);} 
BgL_tmpz00_10678 = 
BELONG_TO_LONG(BgL_tmpz00_10679); } 
return 
BGL_SAFE_MUL_ELONG(BgL_arg2150z00_1792, BgL_tmpz00_10678);} }  else 
{ /* Ieee/number.scm 698 */
if(
LLONGP(BgL_yz00_92))
{ /* Ieee/number.scm 698 */
BGL_LONGLONG_T BgL_arg2154z00_1795;
{ /* Ieee/number.scm 698 */
BGL_LONGLONG_T BgL_res4109z00_4805;
{ /* Ieee/number.scm 698 */
long BgL_tmpz00_10690;
BgL_tmpz00_10690 = 
(long)CINT(BgL_xz00_91); 
BgL_res4109z00_4805 = 
LONG_TO_LLONG(BgL_tmpz00_10690); } 
BgL_arg2154z00_1795 = BgL_res4109z00_4805; } 
{ /* Ieee/number.scm 698 */
BGL_LONGLONG_T BgL_tmpz00_10693;
BgL_tmpz00_10693 = 
BLLONG_TO_LLONG(BgL_yz00_92); 
return 
BGL_SAFE_MUL_LLONG(BgL_arg2154z00_1795, BgL_tmpz00_10693);} }  else 
{ /* Ieee/number.scm 698 */
if(
BGL_UINT64P(BgL_yz00_92))
{ /* Ieee/number.scm 698 */
uint64_t BgL_arg2157z00_1798;
{ /* Ieee/number.scm 698 */
BGL_LONGLONG_T BgL_arg2158z00_1799;
{ /* Ieee/number.scm 698 */
BGL_LONGLONG_T BgL_res4111z00_4808;
{ /* Ieee/number.scm 698 */
long BgL_tmpz00_10698;
BgL_tmpz00_10698 = 
(long)CINT(BgL_xz00_91); 
BgL_res4111z00_4808 = 
LONG_TO_LLONG(BgL_tmpz00_10698); } 
BgL_arg2158z00_1799 = BgL_res4111z00_4808; } 
{ /* Ieee/number.scm 698 */
uint64_t BgL_res4112z00_4810;
BgL_res4112z00_4810 = 
(uint64_t)(BgL_arg2158z00_1799); 
BgL_arg2157z00_1798 = BgL_res4112z00_4810; } } 
{ /* Ieee/number.scm 698 */
uint64_t BgL_za72za7_4812;
BgL_za72za7_4812 = 
BGL_BINT64_TO_INT64(BgL_yz00_92); 
{ /* Ieee/number.scm 698 */
uint64_t BgL_tmpz00_10703;
BgL_tmpz00_10703 = 
(BgL_arg2157z00_1798*BgL_za72za7_4812); 
return 
BGL_UINT64_TO_BUINT64(BgL_tmpz00_10703);} } }  else 
{ /* Ieee/number.scm 698 */
if(
BIGNUMP(BgL_yz00_92))
{ /* Ieee/number.scm 698 */
obj_t BgL_tmpz00_10708;
BgL_tmpz00_10708 = 
bgl_bignum_mul(
bgl_long_to_bignum(
(long)CINT(BgL_xz00_91)), BgL_yz00_92); 
return 
BGL_SAFE_BX_TO_FX(BgL_tmpz00_10708);}  else 
{ /* Ieee/number.scm 698 */
return 
BGl_errorz00zz__errorz00(BGl_string5315z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_92);} } } } } } }  else 
{ /* Ieee/number.scm 698 */
if(
REALP(BgL_xz00_91))
{ /* Ieee/number.scm 698 */
if(
REALP(BgL_yz00_92))
{ /* Ieee/number.scm 698 */
return 
DOUBLE_TO_REAL(
(
REAL_TO_DOUBLE(BgL_xz00_91)*
REAL_TO_DOUBLE(BgL_yz00_92)));}  else 
{ /* Ieee/number.scm 698 */
if(
INTEGERP(BgL_yz00_92))
{ /* Ieee/number.scm 698 */
return 
DOUBLE_TO_REAL(
(
REAL_TO_DOUBLE(BgL_xz00_91)*
(double)(
(long)CINT(BgL_yz00_92))));}  else 
{ /* Ieee/number.scm 698 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_92))
{ /* Ieee/number.scm 698 */
double BgL_arg2167z00_1808;
{ /* Ieee/number.scm 698 */
obj_t BgL_arg2168z00_1809;
BgL_arg2168z00_1809 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_92); 
{ /* Ieee/number.scm 698 */
long BgL_tmpz00_10732;
{ /* Ieee/number.scm 698 */
obj_t BgL_tmpz00_10733;
if(
ELONGP(BgL_arg2168z00_1809))
{ /* Ieee/number.scm 698 */
BgL_tmpz00_10733 = BgL_arg2168z00_1809
; }  else 
{ 
obj_t BgL_auxz00_10736;
BgL_auxz00_10736 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)26462)), BGl_string5314z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg2168z00_1809); 
FAILURE(BgL_auxz00_10736,BFALSE,BFALSE);} 
BgL_tmpz00_10732 = 
BELONG_TO_LONG(BgL_tmpz00_10733); } 
BgL_arg2167z00_1808 = 
(double)(BgL_tmpz00_10732); } } 
return 
DOUBLE_TO_REAL(
(
REAL_TO_DOUBLE(BgL_xz00_91)*BgL_arg2167z00_1808));}  else 
{ /* Ieee/number.scm 698 */
if(
LLONGP(BgL_yz00_92))
{ /* Ieee/number.scm 698 */
return 
DOUBLE_TO_REAL(
(
REAL_TO_DOUBLE(BgL_xz00_91)*
(double)(
BLLONG_TO_LLONG(BgL_yz00_92))));}  else 
{ /* Ieee/number.scm 698 */
if(
BGL_UINT64P(BgL_yz00_92))
{ /* Ieee/number.scm 698 */
double BgL_arg2174z00_1814;
{ /* Ieee/number.scm 698 */
double BgL_res4126z00_4838;
{ /* Ieee/number.scm 698 */
uint64_t BgL_xz00_4837;
BgL_xz00_4837 = 
BGL_BINT64_TO_INT64(BgL_yz00_92); 
BgL_res4126z00_4838 = 
(double)(BgL_xz00_4837); } 
BgL_arg2174z00_1814 = BgL_res4126z00_4838; } 
return 
DOUBLE_TO_REAL(
(
REAL_TO_DOUBLE(BgL_xz00_91)*BgL_arg2174z00_1814));}  else 
{ /* Ieee/number.scm 698 */
if(
BIGNUMP(BgL_yz00_92))
{ /* Ieee/number.scm 698 */
return 
DOUBLE_TO_REAL(
(
REAL_TO_DOUBLE(BgL_xz00_91)*
bgl_bignum_to_flonum(BgL_yz00_92)));}  else 
{ /* Ieee/number.scm 698 */
return 
BGl_errorz00zz__errorz00(BGl_string5315z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_92);} } } } } } }  else 
{ /* Ieee/number.scm 698 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_xz00_91))
{ /* Ieee/number.scm 698 */
if(
INTEGERP(BgL_yz00_92))
{ /* Ieee/number.scm 698 */
obj_t BgL_arg2179z00_1819;long BgL_arg2180z00_1820;
BgL_arg2179z00_1819 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_91); 
{ /* Ieee/number.scm 698 */
long BgL_res4132z00_4850;
{ /* Ieee/number.scm 698 */
long BgL_tmpz00_10771;
BgL_tmpz00_10771 = 
(long)CINT(BgL_yz00_92); 
BgL_res4132z00_4850 = 
(long)(BgL_tmpz00_10771); } 
BgL_arg2180z00_1820 = BgL_res4132z00_4850; } 
{ /* Ieee/number.scm 698 */
long BgL_tmpz00_10774;
{ /* Ieee/number.scm 698 */
obj_t BgL_tmpz00_10775;
if(
ELONGP(BgL_arg2179z00_1819))
{ /* Ieee/number.scm 698 */
BgL_tmpz00_10775 = BgL_arg2179z00_1819
; }  else 
{ 
obj_t BgL_auxz00_10778;
BgL_auxz00_10778 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)26462)), BGl_string5314z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg2179z00_1819); 
FAILURE(BgL_auxz00_10778,BFALSE,BFALSE);} 
BgL_tmpz00_10774 = 
BELONG_TO_LONG(BgL_tmpz00_10775); } 
return 
BGL_SAFE_MUL_ELONG(BgL_tmpz00_10774, BgL_arg2180z00_1820);} }  else 
{ /* Ieee/number.scm 698 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_92))
{ /* Ieee/number.scm 698 */
obj_t BgL_arg2182z00_1822;obj_t BgL_arg2183z00_1823;
BgL_arg2182z00_1822 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_91); 
BgL_arg2183z00_1823 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_92); 
{ /* Ieee/number.scm 698 */
long BgL_auxz00_10797;long BgL_tmpz00_10788;
{ /* Ieee/number.scm 698 */
obj_t BgL_tmpz00_10798;
if(
ELONGP(BgL_arg2183z00_1823))
{ /* Ieee/number.scm 698 */
BgL_tmpz00_10798 = BgL_arg2183z00_1823
; }  else 
{ 
obj_t BgL_auxz00_10801;
BgL_auxz00_10801 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)26462)), BGl_string5314z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg2183z00_1823); 
FAILURE(BgL_auxz00_10801,BFALSE,BFALSE);} 
BgL_auxz00_10797 = 
BELONG_TO_LONG(BgL_tmpz00_10798); } 
{ /* Ieee/number.scm 698 */
obj_t BgL_tmpz00_10789;
if(
ELONGP(BgL_arg2182z00_1822))
{ /* Ieee/number.scm 698 */
BgL_tmpz00_10789 = BgL_arg2182z00_1822
; }  else 
{ 
obj_t BgL_auxz00_10792;
BgL_auxz00_10792 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)26462)), BGl_string5314z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg2182z00_1822); 
FAILURE(BgL_auxz00_10792,BFALSE,BFALSE);} 
BgL_tmpz00_10788 = 
BELONG_TO_LONG(BgL_tmpz00_10789); } 
return 
BGL_SAFE_MUL_ELONG(BgL_tmpz00_10788, BgL_auxz00_10797);} }  else 
{ /* Ieee/number.scm 698 */
if(
REALP(BgL_yz00_92))
{ /* Ieee/number.scm 698 */
double BgL_arg2185z00_1825;
{ /* Ieee/number.scm 698 */
obj_t BgL_arg2186z00_1826;
BgL_arg2186z00_1826 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_91); 
{ /* Ieee/number.scm 698 */
long BgL_tmpz00_10810;
{ /* Ieee/number.scm 698 */
obj_t BgL_tmpz00_10811;
if(
ELONGP(BgL_arg2186z00_1826))
{ /* Ieee/number.scm 698 */
BgL_tmpz00_10811 = BgL_arg2186z00_1826
; }  else 
{ 
obj_t BgL_auxz00_10814;
BgL_auxz00_10814 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)26462)), BGl_string5314z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg2186z00_1826); 
FAILURE(BgL_auxz00_10814,BFALSE,BFALSE);} 
BgL_tmpz00_10810 = 
BELONG_TO_LONG(BgL_tmpz00_10811); } 
BgL_arg2185z00_1825 = 
(double)(BgL_tmpz00_10810); } } 
return 
DOUBLE_TO_REAL(
(BgL_arg2185z00_1825*
REAL_TO_DOUBLE(BgL_yz00_92)));}  else 
{ /* Ieee/number.scm 698 */
if(
LLONGP(BgL_yz00_92))
{ /* Ieee/number.scm 698 */
BGL_LONGLONG_T BgL_arg2188z00_1828;
{ /* Ieee/number.scm 698 */
obj_t BgL_arg2190z00_1830;
BgL_arg2190z00_1830 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_91); 
{ /* Ieee/number.scm 698 */
long BgL_tmpz00_10826;
{ /* Ieee/number.scm 698 */
obj_t BgL_tmpz00_10827;
if(
ELONGP(BgL_arg2190z00_1830))
{ /* Ieee/number.scm 698 */
BgL_tmpz00_10827 = BgL_arg2190z00_1830
; }  else 
{ 
obj_t BgL_auxz00_10830;
BgL_auxz00_10830 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)26462)), BGl_string5314z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg2190z00_1830); 
FAILURE(BgL_auxz00_10830,BFALSE,BFALSE);} 
BgL_tmpz00_10826 = 
BELONG_TO_LONG(BgL_tmpz00_10827); } 
BgL_arg2188z00_1828 = 
(BGL_LONGLONG_T)(BgL_tmpz00_10826); } } 
{ /* Ieee/number.scm 698 */
BGL_LONGLONG_T BgL_tmpz00_10836;
BgL_tmpz00_10836 = 
BLLONG_TO_LLONG(BgL_yz00_92); 
return 
BGL_SAFE_MUL_LLONG(BgL_arg2188z00_1828, BgL_tmpz00_10836);} }  else 
{ /* Ieee/number.scm 698 */
if(
BGL_UINT64P(BgL_yz00_92))
{ /* Ieee/number.scm 698 */
uint64_t BgL_arg2192z00_1832;
{ /* Ieee/number.scm 698 */
BGL_LONGLONG_T BgL_arg2193z00_1833;
{ /* Ieee/number.scm 698 */
obj_t BgL_arg2194z00_1834;
BgL_arg2194z00_1834 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_91); 
{ /* Ieee/number.scm 698 */
long BgL_tmpz00_10842;
{ /* Ieee/number.scm 698 */
obj_t BgL_tmpz00_10843;
if(
ELONGP(BgL_arg2194z00_1834))
{ /* Ieee/number.scm 698 */
BgL_tmpz00_10843 = BgL_arg2194z00_1834
; }  else 
{ 
obj_t BgL_auxz00_10846;
BgL_auxz00_10846 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)26462)), BGl_string5314z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg2194z00_1834); 
FAILURE(BgL_auxz00_10846,BFALSE,BFALSE);} 
BgL_tmpz00_10842 = 
BELONG_TO_LONG(BgL_tmpz00_10843); } 
BgL_arg2193z00_1833 = 
(BGL_LONGLONG_T)(BgL_tmpz00_10842); } } 
{ /* Ieee/number.scm 698 */
uint64_t BgL_res4137z00_4858;
BgL_res4137z00_4858 = 
(uint64_t)(BgL_arg2193z00_1833); 
BgL_arg2192z00_1832 = BgL_res4137z00_4858; } } 
{ /* Ieee/number.scm 698 */
uint64_t BgL_za72za7_4860;
BgL_za72za7_4860 = 
BGL_BINT64_TO_INT64(BgL_yz00_92); 
{ /* Ieee/number.scm 698 */
uint64_t BgL_tmpz00_10854;
BgL_tmpz00_10854 = 
(BgL_arg2192z00_1832*BgL_za72za7_4860); 
return 
BGL_UINT64_TO_BUINT64(BgL_tmpz00_10854);} } }  else 
{ /* Ieee/number.scm 698 */
if(
BIGNUMP(BgL_yz00_92))
{ /* Ieee/number.scm 698 */
obj_t BgL_arg2196z00_1836;
{ /* Ieee/number.scm 698 */
obj_t BgL_arg2197z00_1837;
BgL_arg2197z00_1837 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_91); 
{ /* Ieee/number.scm 698 */
long BgL_xz00_4863;
{ /* Ieee/number.scm 698 */
obj_t BgL_tmpz00_10860;
if(
ELONGP(BgL_arg2197z00_1837))
{ /* Ieee/number.scm 698 */
BgL_tmpz00_10860 = BgL_arg2197z00_1837
; }  else 
{ 
obj_t BgL_auxz00_10863;
BgL_auxz00_10863 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)26462)), BGl_string5314z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg2197z00_1837); 
FAILURE(BgL_auxz00_10863,BFALSE,BFALSE);} 
BgL_xz00_4863 = 
BELONG_TO_LONG(BgL_tmpz00_10860); } 
BgL_arg2196z00_1836 = 
bgl_long_to_bignum(BgL_xz00_4863); } } 
return 
bgl_bignum_mul(BgL_arg2196z00_1836, BgL_yz00_92);}  else 
{ /* Ieee/number.scm 698 */
return 
BGl_errorz00zz__errorz00(BGl_string5315z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_92);} } } } } } }  else 
{ /* Ieee/number.scm 698 */
if(
LLONGP(BgL_xz00_91))
{ /* Ieee/number.scm 698 */
if(
INTEGERP(BgL_yz00_92))
{ /* Ieee/number.scm 698 */
BGL_LONGLONG_T BgL_arg2201z00_1841;
{ /* Ieee/number.scm 698 */
BGL_LONGLONG_T BgL_res4144z00_4871;
{ /* Ieee/number.scm 698 */
long BgL_tmpz00_10875;
BgL_tmpz00_10875 = 
(long)CINT(BgL_yz00_92); 
BgL_res4144z00_4871 = 
LONG_TO_LLONG(BgL_tmpz00_10875); } 
BgL_arg2201z00_1841 = BgL_res4144z00_4871; } 
{ /* Ieee/number.scm 698 */
BGL_LONGLONG_T BgL_tmpz00_10878;
BgL_tmpz00_10878 = 
BLLONG_TO_LLONG(BgL_xz00_91); 
return 
BGL_SAFE_MUL_LLONG(BgL_tmpz00_10878, BgL_arg2201z00_1841);} }  else 
{ /* Ieee/number.scm 698 */
if(
REALP(BgL_yz00_92))
{ /* Ieee/number.scm 698 */
return 
DOUBLE_TO_REAL(
(
(double)(
BLLONG_TO_LLONG(BgL_xz00_91))*
REAL_TO_DOUBLE(BgL_yz00_92)));}  else 
{ /* Ieee/number.scm 698 */
if(
LLONGP(BgL_yz00_92))
{ /* Ieee/number.scm 698 */
BGL_LONGLONG_T BgL_auxz00_10892;BGL_LONGLONG_T BgL_tmpz00_10890;
BgL_auxz00_10892 = 
BLLONG_TO_LLONG(BgL_yz00_92); 
BgL_tmpz00_10890 = 
BLLONG_TO_LLONG(BgL_xz00_91); 
return 
BGL_SAFE_MUL_LLONG(BgL_tmpz00_10890, BgL_auxz00_10892);}  else 
{ /* Ieee/number.scm 698 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_92))
{ /* Ieee/number.scm 698 */
BGL_LONGLONG_T BgL_arg2209z00_1849;
{ /* Ieee/number.scm 698 */
obj_t BgL_arg2210z00_1850;
BgL_arg2210z00_1850 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_92); 
{ /* Ieee/number.scm 698 */
long BgL_tmpz00_10898;
{ /* Ieee/number.scm 698 */
obj_t BgL_tmpz00_10899;
if(
ELONGP(BgL_arg2210z00_1850))
{ /* Ieee/number.scm 698 */
BgL_tmpz00_10899 = BgL_arg2210z00_1850
; }  else 
{ 
obj_t BgL_auxz00_10902;
BgL_auxz00_10902 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)26462)), BGl_string5314z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg2210z00_1850); 
FAILURE(BgL_auxz00_10902,BFALSE,BFALSE);} 
BgL_tmpz00_10898 = 
BELONG_TO_LONG(BgL_tmpz00_10899); } 
BgL_arg2209z00_1849 = 
(BGL_LONGLONG_T)(BgL_tmpz00_10898); } } 
{ /* Ieee/number.scm 698 */
BGL_LONGLONG_T BgL_tmpz00_10908;
BgL_tmpz00_10908 = 
BLLONG_TO_LLONG(BgL_xz00_91); 
return 
BGL_SAFE_MUL_LLONG(BgL_tmpz00_10908, BgL_arg2209z00_1849);} }  else 
{ /* Ieee/number.scm 698 */
if(
BIGNUMP(BgL_yz00_92))
{ /* Ieee/number.scm 698 */
return 
bgl_bignum_mul(
bgl_llong_to_bignum(
BLLONG_TO_LLONG(BgL_xz00_91)), BgL_yz00_92);}  else 
{ /* Ieee/number.scm 698 */
if(
BGL_UINT64P(BgL_yz00_92))
{ /* Ieee/number.scm 698 */
uint64_t BgL_arg2215z00_1855;
{ /* Ieee/number.scm 698 */
uint64_t BgL_res4152z00_4885;
{ /* Ieee/number.scm 698 */
BGL_LONGLONG_T BgL_tmpz00_10918;
BgL_tmpz00_10918 = 
BLLONG_TO_LLONG(BgL_xz00_91); 
BgL_res4152z00_4885 = 
(uint64_t)(BgL_tmpz00_10918); } 
BgL_arg2215z00_1855 = BgL_res4152z00_4885; } 
{ /* Ieee/number.scm 698 */
uint64_t BgL_za72za7_4887;
BgL_za72za7_4887 = 
BGL_BINT64_TO_INT64(BgL_yz00_92); 
{ /* Ieee/number.scm 698 */
uint64_t BgL_tmpz00_10922;
BgL_tmpz00_10922 = 
(BgL_arg2215z00_1855*BgL_za72za7_4887); 
return 
BGL_UINT64_TO_BUINT64(BgL_tmpz00_10922);} } }  else 
{ /* Ieee/number.scm 698 */
return 
BGl_errorz00zz__errorz00(BGl_string5315z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_92);} } } } } } }  else 
{ /* Ieee/number.scm 698 */
if(
BGL_UINT64P(BgL_xz00_91))
{ /* Ieee/number.scm 698 */
if(
INTEGERP(BgL_yz00_92))
{ /* Ieee/number.scm 698 */
uint64_t BgL_arg2218z00_1858;
{ /* Ieee/number.scm 698 */
uint64_t BgL_res4156z00_4892;
{ /* Ieee/number.scm 698 */
long BgL_tmpz00_10930;
BgL_tmpz00_10930 = 
(long)CINT(BgL_yz00_92); 
BgL_res4156z00_4892 = 
(uint64_t)(BgL_tmpz00_10930); } 
BgL_arg2218z00_1858 = BgL_res4156z00_4892; } 
{ /* Ieee/number.scm 698 */
uint64_t BgL_za71za7_4893;
BgL_za71za7_4893 = 
BGL_BINT64_TO_INT64(BgL_xz00_91); 
{ /* Ieee/number.scm 698 */
uint64_t BgL_tmpz00_10934;
BgL_tmpz00_10934 = 
(BgL_za71za7_4893*BgL_arg2218z00_1858); 
return 
BGL_UINT64_TO_BUINT64(BgL_tmpz00_10934);} } }  else 
{ /* Ieee/number.scm 698 */
if(
BGL_UINT64P(BgL_yz00_92))
{ /* Ieee/number.scm 698 */
uint64_t BgL_za71za7_4897;uint64_t BgL_za72za7_4898;
BgL_za71za7_4897 = 
BGL_BINT64_TO_INT64(BgL_xz00_91); 
BgL_za72za7_4898 = 
BGL_BINT64_TO_INT64(BgL_yz00_92); 
{ /* Ieee/number.scm 698 */
uint64_t BgL_tmpz00_10941;
BgL_tmpz00_10941 = 
(BgL_za71za7_4897*BgL_za72za7_4898); 
return 
BGL_UINT64_TO_BUINT64(BgL_tmpz00_10941);} }  else 
{ /* Ieee/number.scm 698 */
if(
REALP(BgL_yz00_92))
{ /* Ieee/number.scm 698 */
double BgL_arg2221z00_1861;
{ /* Ieee/number.scm 698 */
uint64_t BgL_tmpz00_10946;
BgL_tmpz00_10946 = 
BGL_BINT64_TO_INT64(BgL_xz00_91); 
BgL_arg2221z00_1861 = 
(double)(BgL_tmpz00_10946); } 
return 
DOUBLE_TO_REAL(
(BgL_arg2221z00_1861*
REAL_TO_DOUBLE(BgL_yz00_92)));}  else 
{ /* Ieee/number.scm 698 */
if(
LLONGP(BgL_yz00_92))
{ /* Ieee/number.scm 698 */
uint64_t BgL_arg2223z00_1863;
{ /* Ieee/number.scm 698 */
uint64_t BgL_res4163z00_4906;
{ /* Ieee/number.scm 698 */
BGL_LONGLONG_T BgL_tmpz00_10954;
BgL_tmpz00_10954 = 
BLLONG_TO_LLONG(BgL_yz00_92); 
BgL_res4163z00_4906 = 
(uint64_t)(BgL_tmpz00_10954); } 
BgL_arg2223z00_1863 = BgL_res4163z00_4906; } 
{ /* Ieee/number.scm 698 */
uint64_t BgL_za71za7_4907;
BgL_za71za7_4907 = 
BGL_BINT64_TO_INT64(BgL_xz00_91); 
{ /* Ieee/number.scm 698 */
uint64_t BgL_tmpz00_10958;
BgL_tmpz00_10958 = 
(BgL_za71za7_4907*BgL_arg2223z00_1863); 
return 
BGL_UINT64_TO_BUINT64(BgL_tmpz00_10958);} } }  else 
{ /* Ieee/number.scm 698 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_92))
{ /* Ieee/number.scm 698 */
uint64_t BgL_arg2226z00_1866;
{ /* Ieee/number.scm 698 */
BGL_LONGLONG_T BgL_arg2227z00_1867;
{ /* Ieee/number.scm 698 */
obj_t BgL_arg2228z00_1868;
BgL_arg2228z00_1868 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_92); 
{ /* Ieee/number.scm 698 */
long BgL_tmpz00_10964;
{ /* Ieee/number.scm 698 */
obj_t BgL_tmpz00_10965;
if(
ELONGP(BgL_arg2228z00_1868))
{ /* Ieee/number.scm 698 */
BgL_tmpz00_10965 = BgL_arg2228z00_1868
; }  else 
{ 
obj_t BgL_auxz00_10968;
BgL_auxz00_10968 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)26462)), BGl_string5314z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg2228z00_1868); 
FAILURE(BgL_auxz00_10968,BFALSE,BFALSE);} 
BgL_tmpz00_10964 = 
BELONG_TO_LONG(BgL_tmpz00_10965); } 
BgL_arg2227z00_1867 = 
(BGL_LONGLONG_T)(BgL_tmpz00_10964); } } 
{ /* Ieee/number.scm 698 */
uint64_t BgL_res4165z00_4911;
BgL_res4165z00_4911 = 
(uint64_t)(BgL_arg2227z00_1867); 
BgL_arg2226z00_1866 = BgL_res4165z00_4911; } } 
{ /* Ieee/number.scm 698 */
uint64_t BgL_za71za7_4912;
BgL_za71za7_4912 = 
BGL_BINT64_TO_INT64(BgL_xz00_91); 
{ /* Ieee/number.scm 698 */
uint64_t BgL_tmpz00_10976;
BgL_tmpz00_10976 = 
(BgL_za71za7_4912*BgL_arg2226z00_1866); 
return 
BGL_UINT64_TO_BUINT64(BgL_tmpz00_10976);} } }  else 
{ /* Ieee/number.scm 698 */
if(
BIGNUMP(BgL_yz00_92))
{ /* Ieee/number.scm 698 */
return 
bgl_bignum_mul(
bgl_uint64_to_bignum(
BGL_BINT64_TO_INT64(BgL_xz00_91)), BgL_yz00_92);}  else 
{ /* Ieee/number.scm 698 */
return 
BGl_errorz00zz__errorz00(BGl_string5315z00zz__r4_numbers_6_5z00, BGl_string5292z00zz__r4_numbers_6_5z00, BgL_yz00_92);} } } } } } }  else 
{ /* Ieee/number.scm 698 */
if(
BIGNUMP(BgL_xz00_91))
{ /* Ieee/number.scm 698 */
if(
BIGNUMP(BgL_yz00_92))
{ /* Ieee/number.scm 698 */
obj_t BgL_tmpz00_10989;
BgL_tmpz00_10989 = 
bgl_bignum_mul(BgL_xz00_91, BgL_yz00_92); 
return 
BGL_SAFE_BX_TO_FX(BgL_tmpz00_10989);}  else 
{ /* Ieee/number.scm 698 */
if(
INTEGERP(BgL_yz00_92))
{ /* Ieee/number.scm 698 */
obj_t BgL_tmpz00_10994;
BgL_tmpz00_10994 = 
bgl_bignum_mul(BgL_xz00_91, 
bgl_long_to_bignum(
(long)CINT(BgL_yz00_92))); 
return 
BGL_SAFE_BX_TO_FX(BgL_tmpz00_10994);}  else 
{ /* Ieee/number.scm 698 */
if(
REALP(BgL_yz00_92))
{ /* Ieee/number.scm 698 */
return 
DOUBLE_TO_REAL(
(
bgl_bignum_to_flonum(BgL_xz00_91)*
REAL_TO_DOUBLE(BgL_yz00_92)));}  else 
{ /* Ieee/number.scm 698 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_92))
{ /* Ieee/number.scm 698 */
obj_t BgL_arg2240z00_1880;
{ /* Ieee/number.scm 698 */
obj_t BgL_arg2241z00_1881;
BgL_arg2241z00_1881 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_92); 
{ /* Ieee/number.scm 698 */
long BgL_xz00_4936;
{ /* Ieee/number.scm 698 */
obj_t BgL_tmpz00_11008;
if(
ELONGP(BgL_arg2241z00_1881))
{ /* Ieee/number.scm 698 */
BgL_tmpz00_11008 = BgL_arg2241z00_1881
; }  else 
{ 
obj_t BgL_auxz00_11011;
BgL_auxz00_11011 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)26462)), BGl_string5314z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg2241z00_1881); 
FAILURE(BgL_auxz00_11011,BFALSE,BFALSE);} 
BgL_xz00_4936 = 
BELONG_TO_LONG(BgL_tmpz00_11008); } 
BgL_arg2240z00_1880 = 
bgl_long_to_bignum(BgL_xz00_4936); } } 
return 
bgl_bignum_mul(BgL_xz00_91, BgL_arg2240z00_1880);}  else 
{ /* Ieee/number.scm 698 */
if(
LLONGP(BgL_yz00_92))
{ /* Ieee/number.scm 698 */
return 
bgl_bignum_mul(BgL_xz00_91, 
bgl_llong_to_bignum(
BLLONG_TO_LLONG(BgL_yz00_92)));}  else 
{ /* Ieee/number.scm 698 */
if(
BGL_UINT64P(BgL_yz00_92))
{ /* Ieee/number.scm 698 */
return 
bgl_bignum_mul(BgL_xz00_91, 
bgl_uint64_to_bignum(
BGL_BINT64_TO_INT64(BgL_yz00_92)));}  else 
{ /* Ieee/number.scm 698 */
return 
BGl_errorz00zz__errorz00(BGl_string5315z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_92);} } } } } } }  else 
{ /* Ieee/number.scm 698 */
return 
BGl_errorz00zz__errorz00(BGl_string5315z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_xz00_91);} } } } } } } 

}



/* &2* */
obj_t BGl_z622za2zc0zz__r4_numbers_6_5z00(obj_t BgL_envz00_6542, obj_t BgL_xz00_6543, obj_t BgL_yz00_6544)
{
{ /* Ieee/number.scm 697 */
return 
BGl_2za2za2zz__r4_numbers_6_5z00(BgL_xz00_6543, BgL_yz00_6544);} 

}



/* * */
BGL_EXPORTED_DEF obj_t BGl_za2za2zz__r4_numbers_6_5z00(obj_t BgL_xz00_93)
{
{ /* Ieee/number.scm 703 */
{ 
obj_t BgL_productz00_4966;obj_t BgL_xz00_4967;
BgL_productz00_4966 = 
BINT(((long)1)); 
BgL_xz00_4967 = BgL_xz00_93; 
BgL_loopz00_4965:
if(
PAIRP(BgL_xz00_4967))
{ 
obj_t BgL_xz00_11036;obj_t BgL_productz00_11033;
BgL_productz00_11033 = 
BGl_2za2za2zz__r4_numbers_6_5z00(BgL_productz00_4966, 
CAR(BgL_xz00_4967)); 
BgL_xz00_11036 = 
CDR(BgL_xz00_4967); 
BgL_xz00_4967 = BgL_xz00_11036; 
BgL_productz00_4966 = BgL_productz00_11033; 
goto BgL_loopz00_4965;}  else 
{ /* Ieee/number.scm 706 */
return BgL_productz00_4966;} } } 

}



/* &* */
obj_t BGl_z62za2zc0zz__r4_numbers_6_5z00(obj_t BgL_envz00_6545, obj_t BgL_xz00_6546)
{
{ /* Ieee/number.scm 703 */
return 
BGl_za2za2zz__r4_numbers_6_5z00(BgL_xz00_6546);} 

}



/* 2- */
BGL_EXPORTED_DEF obj_t BGl_2zd2zd2zz__r4_numbers_6_5z00(obj_t BgL_xz00_94, obj_t BgL_yz00_95)
{
{ /* Ieee/number.scm 713 */
if(
INTEGERP(BgL_xz00_94))
{ /* Ieee/number.scm 714 */
if(
INTEGERP(BgL_yz00_95))
{ /* Ieee/number.scm 714 */
long BgL_auxz00_11046;long BgL_tmpz00_11044;
BgL_auxz00_11046 = 
(long)CINT(BgL_yz00_95); 
BgL_tmpz00_11044 = 
(long)CINT(BgL_xz00_94); 
return 
BGL_SAFE_MINUS_FX(BgL_tmpz00_11044, BgL_auxz00_11046);}  else 
{ /* Ieee/number.scm 714 */
if(
REALP(BgL_yz00_95))
{ /* Ieee/number.scm 714 */
return 
DOUBLE_TO_REAL(
(
(double)(
(long)CINT(BgL_xz00_94))-
REAL_TO_DOUBLE(BgL_yz00_95)));}  else 
{ /* Ieee/number.scm 714 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_95))
{ /* Ieee/number.scm 714 */
long BgL_arg2258z00_1901;obj_t BgL_arg2259z00_1902;
{ /* Ieee/number.scm 714 */
long BgL_res4192z00_4986;
{ /* Ieee/number.scm 714 */
long BgL_tmpz00_11058;
BgL_tmpz00_11058 = 
(long)CINT(BgL_xz00_94); 
BgL_res4192z00_4986 = 
(long)(BgL_tmpz00_11058); } 
BgL_arg2258z00_1901 = BgL_res4192z00_4986; } 
BgL_arg2259z00_1902 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_95); 
{ /* Ieee/number.scm 714 */
long BgL_tmpz00_11062;
{ /* Ieee/number.scm 714 */
obj_t BgL_tmpz00_11063;
if(
ELONGP(BgL_arg2259z00_1902))
{ /* Ieee/number.scm 714 */
BgL_tmpz00_11063 = BgL_arg2259z00_1902
; }  else 
{ 
obj_t BgL_auxz00_11066;
BgL_auxz00_11066 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)27071)), BGl_string5316z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg2259z00_1902); 
FAILURE(BgL_auxz00_11066,BFALSE,BFALSE);} 
BgL_tmpz00_11062 = 
BELONG_TO_LONG(BgL_tmpz00_11063); } 
return 
BGL_SAFE_MINUS_ELONG(BgL_arg2258z00_1901, BgL_tmpz00_11062);} }  else 
{ /* Ieee/number.scm 714 */
if(
LLONGP(BgL_yz00_95))
{ /* Ieee/number.scm 714 */
BGL_LONGLONG_T BgL_arg2261z00_1904;
{ /* Ieee/number.scm 714 */
BGL_LONGLONG_T BgL_res4194z00_4989;
{ /* Ieee/number.scm 714 */
long BgL_tmpz00_11074;
BgL_tmpz00_11074 = 
(long)CINT(BgL_xz00_94); 
BgL_res4194z00_4989 = 
LONG_TO_LLONG(BgL_tmpz00_11074); } 
BgL_arg2261z00_1904 = BgL_res4194z00_4989; } 
{ /* Ieee/number.scm 714 */
BGL_LONGLONG_T BgL_tmpz00_11077;
BgL_tmpz00_11077 = 
BLLONG_TO_LLONG(BgL_yz00_95); 
return 
BGL_SAFE_MINUS_LLONG(BgL_arg2261z00_1904, BgL_tmpz00_11077);} }  else 
{ /* Ieee/number.scm 714 */
if(
BGL_UINT64P(BgL_yz00_95))
{ /* Ieee/number.scm 714 */
uint64_t BgL_arg2264z00_1907;
{ /* Ieee/number.scm 714 */
BGL_LONGLONG_T BgL_arg2265z00_1908;
{ /* Ieee/number.scm 714 */
BGL_LONGLONG_T BgL_res4196z00_4992;
{ /* Ieee/number.scm 714 */
long BgL_tmpz00_11082;
BgL_tmpz00_11082 = 
(long)CINT(BgL_xz00_94); 
BgL_res4196z00_4992 = 
LONG_TO_LLONG(BgL_tmpz00_11082); } 
BgL_arg2265z00_1908 = BgL_res4196z00_4992; } 
{ /* Ieee/number.scm 714 */
uint64_t BgL_res4197z00_4994;
BgL_res4197z00_4994 = 
(uint64_t)(BgL_arg2265z00_1908); 
BgL_arg2264z00_1907 = BgL_res4197z00_4994; } } 
{ /* Ieee/number.scm 714 */
uint64_t BgL_za72za7_4996;
BgL_za72za7_4996 = 
BGL_BINT64_TO_INT64(BgL_yz00_95); 
{ /* Ieee/number.scm 714 */
uint64_t BgL_tmpz00_11087;
BgL_tmpz00_11087 = 
(BgL_arg2264z00_1907-BgL_za72za7_4996); 
return 
BGL_UINT64_TO_BUINT64(BgL_tmpz00_11087);} } }  else 
{ /* Ieee/number.scm 714 */
if(
BIGNUMP(BgL_yz00_95))
{ /* Ieee/number.scm 714 */
obj_t BgL_tmpz00_11092;
BgL_tmpz00_11092 = 
bgl_bignum_sub(
bgl_long_to_bignum(
(long)CINT(BgL_xz00_94)), BgL_yz00_95); 
return 
BGL_SAFE_BX_TO_FX(BgL_tmpz00_11092);}  else 
{ /* Ieee/number.scm 714 */
return 
BGl_errorz00zz__errorz00(BGl_string5317z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_95);} } } } } } }  else 
{ /* Ieee/number.scm 714 */
if(
REALP(BgL_xz00_94))
{ /* Ieee/number.scm 714 */
if(
REALP(BgL_yz00_95))
{ /* Ieee/number.scm 714 */
return 
DOUBLE_TO_REAL(
(
REAL_TO_DOUBLE(BgL_xz00_94)-
REAL_TO_DOUBLE(BgL_yz00_95)));}  else 
{ /* Ieee/number.scm 714 */
if(
INTEGERP(BgL_yz00_95))
{ /* Ieee/number.scm 714 */
return 
DOUBLE_TO_REAL(
(
REAL_TO_DOUBLE(BgL_xz00_94)-
(double)(
(long)CINT(BgL_yz00_95))));}  else 
{ /* Ieee/number.scm 714 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_95))
{ /* Ieee/number.scm 714 */
double BgL_arg2275z00_1917;
{ /* Ieee/number.scm 714 */
obj_t BgL_arg2276z00_1918;
BgL_arg2276z00_1918 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_95); 
{ /* Ieee/number.scm 714 */
long BgL_tmpz00_11116;
{ /* Ieee/number.scm 714 */
obj_t BgL_tmpz00_11117;
if(
ELONGP(BgL_arg2276z00_1918))
{ /* Ieee/number.scm 714 */
BgL_tmpz00_11117 = BgL_arg2276z00_1918
; }  else 
{ 
obj_t BgL_auxz00_11120;
BgL_auxz00_11120 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)27071)), BGl_string5316z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg2276z00_1918); 
FAILURE(BgL_auxz00_11120,BFALSE,BFALSE);} 
BgL_tmpz00_11116 = 
BELONG_TO_LONG(BgL_tmpz00_11117); } 
BgL_arg2275z00_1917 = 
(double)(BgL_tmpz00_11116); } } 
return 
DOUBLE_TO_REAL(
(
REAL_TO_DOUBLE(BgL_xz00_94)-BgL_arg2275z00_1917));}  else 
{ /* Ieee/number.scm 714 */
if(
LLONGP(BgL_yz00_95))
{ /* Ieee/number.scm 714 */
return 
DOUBLE_TO_REAL(
(
REAL_TO_DOUBLE(BgL_xz00_94)-
(double)(
BLLONG_TO_LLONG(BgL_yz00_95))));}  else 
{ /* Ieee/number.scm 714 */
if(
BGL_UINT64P(BgL_yz00_95))
{ /* Ieee/number.scm 714 */
double BgL_arg2282z00_1923;
{ /* Ieee/number.scm 714 */
double BgL_res4211z00_5022;
{ /* Ieee/number.scm 714 */
uint64_t BgL_xz00_5021;
BgL_xz00_5021 = 
BGL_BINT64_TO_INT64(BgL_yz00_95); 
BgL_res4211z00_5022 = 
(double)(BgL_xz00_5021); } 
BgL_arg2282z00_1923 = BgL_res4211z00_5022; } 
return 
DOUBLE_TO_REAL(
(
REAL_TO_DOUBLE(BgL_xz00_94)-BgL_arg2282z00_1923));}  else 
{ /* Ieee/number.scm 714 */
if(
BIGNUMP(BgL_yz00_95))
{ /* Ieee/number.scm 714 */
return 
DOUBLE_TO_REAL(
(
REAL_TO_DOUBLE(BgL_xz00_94)-
bgl_bignum_to_flonum(BgL_yz00_95)));}  else 
{ /* Ieee/number.scm 714 */
return 
BGl_errorz00zz__errorz00(BGl_string5317z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_95);} } } } } } }  else 
{ /* Ieee/number.scm 714 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_xz00_94))
{ /* Ieee/number.scm 714 */
if(
INTEGERP(BgL_yz00_95))
{ /* Ieee/number.scm 714 */
obj_t BgL_arg2287z00_1928;long BgL_arg2288z00_1929;
BgL_arg2287z00_1928 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_94); 
{ /* Ieee/number.scm 714 */
long BgL_res4217z00_5034;
{ /* Ieee/number.scm 714 */
long BgL_tmpz00_11155;
BgL_tmpz00_11155 = 
(long)CINT(BgL_yz00_95); 
BgL_res4217z00_5034 = 
(long)(BgL_tmpz00_11155); } 
BgL_arg2288z00_1929 = BgL_res4217z00_5034; } 
{ /* Ieee/number.scm 714 */
long BgL_tmpz00_11158;
{ /* Ieee/number.scm 714 */
obj_t BgL_tmpz00_11159;
if(
ELONGP(BgL_arg2287z00_1928))
{ /* Ieee/number.scm 714 */
BgL_tmpz00_11159 = BgL_arg2287z00_1928
; }  else 
{ 
obj_t BgL_auxz00_11162;
BgL_auxz00_11162 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)27071)), BGl_string5316z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg2287z00_1928); 
FAILURE(BgL_auxz00_11162,BFALSE,BFALSE);} 
BgL_tmpz00_11158 = 
BELONG_TO_LONG(BgL_tmpz00_11159); } 
return 
BGL_SAFE_MINUS_ELONG(BgL_tmpz00_11158, BgL_arg2288z00_1929);} }  else 
{ /* Ieee/number.scm 714 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_95))
{ /* Ieee/number.scm 714 */
obj_t BgL_arg2290z00_1931;obj_t BgL_arg2291z00_1932;
BgL_arg2290z00_1931 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_94); 
BgL_arg2291z00_1932 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_95); 
{ /* Ieee/number.scm 714 */
long BgL_auxz00_11181;long BgL_tmpz00_11172;
{ /* Ieee/number.scm 714 */
obj_t BgL_tmpz00_11182;
if(
ELONGP(BgL_arg2291z00_1932))
{ /* Ieee/number.scm 714 */
BgL_tmpz00_11182 = BgL_arg2291z00_1932
; }  else 
{ 
obj_t BgL_auxz00_11185;
BgL_auxz00_11185 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)27071)), BGl_string5316z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg2291z00_1932); 
FAILURE(BgL_auxz00_11185,BFALSE,BFALSE);} 
BgL_auxz00_11181 = 
BELONG_TO_LONG(BgL_tmpz00_11182); } 
{ /* Ieee/number.scm 714 */
obj_t BgL_tmpz00_11173;
if(
ELONGP(BgL_arg2290z00_1931))
{ /* Ieee/number.scm 714 */
BgL_tmpz00_11173 = BgL_arg2290z00_1931
; }  else 
{ 
obj_t BgL_auxz00_11176;
BgL_auxz00_11176 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)27071)), BGl_string5316z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg2290z00_1931); 
FAILURE(BgL_auxz00_11176,BFALSE,BFALSE);} 
BgL_tmpz00_11172 = 
BELONG_TO_LONG(BgL_tmpz00_11173); } 
return 
BGL_SAFE_MINUS_ELONG(BgL_tmpz00_11172, BgL_auxz00_11181);} }  else 
{ /* Ieee/number.scm 714 */
if(
REALP(BgL_yz00_95))
{ /* Ieee/number.scm 714 */
double BgL_arg2294z00_1934;
{ /* Ieee/number.scm 714 */
obj_t BgL_arg2295z00_1935;
BgL_arg2295z00_1935 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_94); 
{ /* Ieee/number.scm 714 */
long BgL_tmpz00_11194;
{ /* Ieee/number.scm 714 */
obj_t BgL_tmpz00_11195;
if(
ELONGP(BgL_arg2295z00_1935))
{ /* Ieee/number.scm 714 */
BgL_tmpz00_11195 = BgL_arg2295z00_1935
; }  else 
{ 
obj_t BgL_auxz00_11198;
BgL_auxz00_11198 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)27071)), BGl_string5316z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg2295z00_1935); 
FAILURE(BgL_auxz00_11198,BFALSE,BFALSE);} 
BgL_tmpz00_11194 = 
BELONG_TO_LONG(BgL_tmpz00_11195); } 
BgL_arg2294z00_1934 = 
(double)(BgL_tmpz00_11194); } } 
return 
DOUBLE_TO_REAL(
(BgL_arg2294z00_1934-
REAL_TO_DOUBLE(BgL_yz00_95)));}  else 
{ /* Ieee/number.scm 714 */
if(
LLONGP(BgL_yz00_95))
{ /* Ieee/number.scm 714 */
BGL_LONGLONG_T BgL_arg2297z00_1937;
{ /* Ieee/number.scm 714 */
obj_t BgL_arg2299z00_1939;
BgL_arg2299z00_1939 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_94); 
{ /* Ieee/number.scm 714 */
long BgL_tmpz00_11210;
{ /* Ieee/number.scm 714 */
obj_t BgL_tmpz00_11211;
if(
ELONGP(BgL_arg2299z00_1939))
{ /* Ieee/number.scm 714 */
BgL_tmpz00_11211 = BgL_arg2299z00_1939
; }  else 
{ 
obj_t BgL_auxz00_11214;
BgL_auxz00_11214 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)27071)), BGl_string5316z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg2299z00_1939); 
FAILURE(BgL_auxz00_11214,BFALSE,BFALSE);} 
BgL_tmpz00_11210 = 
BELONG_TO_LONG(BgL_tmpz00_11211); } 
BgL_arg2297z00_1937 = 
(BGL_LONGLONG_T)(BgL_tmpz00_11210); } } 
{ /* Ieee/number.scm 714 */
BGL_LONGLONG_T BgL_tmpz00_11220;
BgL_tmpz00_11220 = 
BLLONG_TO_LLONG(BgL_yz00_95); 
return 
BGL_SAFE_MINUS_LLONG(BgL_arg2297z00_1937, BgL_tmpz00_11220);} }  else 
{ /* Ieee/number.scm 714 */
if(
BGL_UINT64P(BgL_yz00_95))
{ /* Ieee/number.scm 714 */
uint64_t BgL_arg2302z00_1941;
{ /* Ieee/number.scm 714 */
BGL_LONGLONG_T BgL_arg2303z00_1942;
{ /* Ieee/number.scm 714 */
obj_t BgL_arg2305z00_1943;
BgL_arg2305z00_1943 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_94); 
{ /* Ieee/number.scm 714 */
long BgL_tmpz00_11226;
{ /* Ieee/number.scm 714 */
obj_t BgL_tmpz00_11227;
if(
ELONGP(BgL_arg2305z00_1943))
{ /* Ieee/number.scm 714 */
BgL_tmpz00_11227 = BgL_arg2305z00_1943
; }  else 
{ 
obj_t BgL_auxz00_11230;
BgL_auxz00_11230 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)27071)), BGl_string5316z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg2305z00_1943); 
FAILURE(BgL_auxz00_11230,BFALSE,BFALSE);} 
BgL_tmpz00_11226 = 
BELONG_TO_LONG(BgL_tmpz00_11227); } 
BgL_arg2303z00_1942 = 
(BGL_LONGLONG_T)(BgL_tmpz00_11226); } } 
{ /* Ieee/number.scm 714 */
uint64_t BgL_res4222z00_5042;
BgL_res4222z00_5042 = 
(uint64_t)(BgL_arg2303z00_1942); 
BgL_arg2302z00_1941 = BgL_res4222z00_5042; } } 
{ /* Ieee/number.scm 714 */
uint64_t BgL_za72za7_5044;
BgL_za72za7_5044 = 
BGL_BINT64_TO_INT64(BgL_yz00_95); 
{ /* Ieee/number.scm 714 */
uint64_t BgL_tmpz00_11238;
BgL_tmpz00_11238 = 
(BgL_arg2302z00_1941-BgL_za72za7_5044); 
return 
BGL_UINT64_TO_BUINT64(BgL_tmpz00_11238);} } }  else 
{ /* Ieee/number.scm 714 */
if(
BIGNUMP(BgL_yz00_95))
{ /* Ieee/number.scm 714 */
obj_t BgL_arg2307z00_1945;
{ /* Ieee/number.scm 714 */
obj_t BgL_arg2308z00_1946;
BgL_arg2308z00_1946 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_xz00_94); 
{ /* Ieee/number.scm 714 */
long BgL_xz00_5047;
{ /* Ieee/number.scm 714 */
obj_t BgL_tmpz00_11244;
if(
ELONGP(BgL_arg2308z00_1946))
{ /* Ieee/number.scm 714 */
BgL_tmpz00_11244 = BgL_arg2308z00_1946
; }  else 
{ 
obj_t BgL_auxz00_11247;
BgL_auxz00_11247 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)27071)), BGl_string5316z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg2308z00_1946); 
FAILURE(BgL_auxz00_11247,BFALSE,BFALSE);} 
BgL_xz00_5047 = 
BELONG_TO_LONG(BgL_tmpz00_11244); } 
BgL_arg2307z00_1945 = 
bgl_long_to_bignum(BgL_xz00_5047); } } 
return 
bgl_bignum_sub(BgL_arg2307z00_1945, BgL_yz00_95);}  else 
{ /* Ieee/number.scm 714 */
return 
BGl_errorz00zz__errorz00(BGl_string5317z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_95);} } } } } } }  else 
{ /* Ieee/number.scm 714 */
if(
LLONGP(BgL_xz00_94))
{ /* Ieee/number.scm 714 */
if(
INTEGERP(BgL_yz00_95))
{ /* Ieee/number.scm 714 */
BGL_LONGLONG_T BgL_arg2312z00_1950;
{ /* Ieee/number.scm 714 */
BGL_LONGLONG_T BgL_res4229z00_5055;
{ /* Ieee/number.scm 714 */
long BgL_tmpz00_11259;
BgL_tmpz00_11259 = 
(long)CINT(BgL_yz00_95); 
BgL_res4229z00_5055 = 
LONG_TO_LLONG(BgL_tmpz00_11259); } 
BgL_arg2312z00_1950 = BgL_res4229z00_5055; } 
{ /* Ieee/number.scm 714 */
BGL_LONGLONG_T BgL_tmpz00_11262;
BgL_tmpz00_11262 = 
BLLONG_TO_LLONG(BgL_xz00_94); 
return 
BGL_SAFE_MINUS_LLONG(BgL_tmpz00_11262, BgL_arg2312z00_1950);} }  else 
{ /* Ieee/number.scm 714 */
if(
REALP(BgL_yz00_95))
{ /* Ieee/number.scm 714 */
return 
DOUBLE_TO_REAL(
(
(double)(
BLLONG_TO_LLONG(BgL_xz00_94))-
REAL_TO_DOUBLE(BgL_yz00_95)));}  else 
{ /* Ieee/number.scm 714 */
if(
LLONGP(BgL_yz00_95))
{ /* Ieee/number.scm 714 */
BGL_LONGLONG_T BgL_auxz00_11276;BGL_LONGLONG_T BgL_tmpz00_11274;
BgL_auxz00_11276 = 
BLLONG_TO_LLONG(BgL_yz00_95); 
BgL_tmpz00_11274 = 
BLLONG_TO_LLONG(BgL_xz00_94); 
return 
BGL_SAFE_MINUS_LLONG(BgL_tmpz00_11274, BgL_auxz00_11276);}  else 
{ /* Ieee/number.scm 714 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_95))
{ /* Ieee/number.scm 714 */
BGL_LONGLONG_T BgL_arg2321z00_1958;
{ /* Ieee/number.scm 714 */
obj_t BgL_arg2322z00_1959;
BgL_arg2322z00_1959 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_95); 
{ /* Ieee/number.scm 714 */
long BgL_tmpz00_11282;
{ /* Ieee/number.scm 714 */
obj_t BgL_tmpz00_11283;
if(
ELONGP(BgL_arg2322z00_1959))
{ /* Ieee/number.scm 714 */
BgL_tmpz00_11283 = BgL_arg2322z00_1959
; }  else 
{ 
obj_t BgL_auxz00_11286;
BgL_auxz00_11286 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)27071)), BGl_string5316z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg2322z00_1959); 
FAILURE(BgL_auxz00_11286,BFALSE,BFALSE);} 
BgL_tmpz00_11282 = 
BELONG_TO_LONG(BgL_tmpz00_11283); } 
BgL_arg2321z00_1958 = 
(BGL_LONGLONG_T)(BgL_tmpz00_11282); } } 
{ /* Ieee/number.scm 714 */
BGL_LONGLONG_T BgL_tmpz00_11292;
BgL_tmpz00_11292 = 
BLLONG_TO_LLONG(BgL_xz00_94); 
return 
BGL_SAFE_MINUS_LLONG(BgL_tmpz00_11292, BgL_arg2321z00_1958);} }  else 
{ /* Ieee/number.scm 714 */
if(
BIGNUMP(BgL_yz00_95))
{ /* Ieee/number.scm 714 */
return 
bgl_bignum_sub(
bgl_llong_to_bignum(
BLLONG_TO_LLONG(BgL_xz00_94)), BgL_yz00_95);}  else 
{ /* Ieee/number.scm 714 */
if(
BGL_UINT64P(BgL_yz00_95))
{ /* Ieee/number.scm 714 */
uint64_t BgL_arg2327z00_1964;
{ /* Ieee/number.scm 714 */
uint64_t BgL_res4237z00_5069;
{ /* Ieee/number.scm 714 */
BGL_LONGLONG_T BgL_tmpz00_11302;
BgL_tmpz00_11302 = 
BLLONG_TO_LLONG(BgL_xz00_94); 
BgL_res4237z00_5069 = 
(uint64_t)(BgL_tmpz00_11302); } 
BgL_arg2327z00_1964 = BgL_res4237z00_5069; } 
{ /* Ieee/number.scm 714 */
uint64_t BgL_za72za7_5071;
BgL_za72za7_5071 = 
BGL_BINT64_TO_INT64(BgL_yz00_95); 
{ /* Ieee/number.scm 714 */
uint64_t BgL_tmpz00_11306;
BgL_tmpz00_11306 = 
(BgL_arg2327z00_1964-BgL_za72za7_5071); 
return 
BGL_UINT64_TO_BUINT64(BgL_tmpz00_11306);} } }  else 
{ /* Ieee/number.scm 714 */
return 
BGl_errorz00zz__errorz00(BGl_string5317z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_95);} } } } } } }  else 
{ /* Ieee/number.scm 714 */
if(
BGL_UINT64P(BgL_xz00_94))
{ /* Ieee/number.scm 714 */
if(
INTEGERP(BgL_yz00_95))
{ /* Ieee/number.scm 714 */
uint64_t BgL_arg2331z00_1967;
{ /* Ieee/number.scm 714 */
uint64_t BgL_res4241z00_5076;
{ /* Ieee/number.scm 714 */
long BgL_tmpz00_11314;
BgL_tmpz00_11314 = 
(long)CINT(BgL_yz00_95); 
BgL_res4241z00_5076 = 
(uint64_t)(BgL_tmpz00_11314); } 
BgL_arg2331z00_1967 = BgL_res4241z00_5076; } 
{ /* Ieee/number.scm 714 */
uint64_t BgL_za71za7_5077;
BgL_za71za7_5077 = 
BGL_BINT64_TO_INT64(BgL_xz00_94); 
{ /* Ieee/number.scm 714 */
uint64_t BgL_tmpz00_11318;
BgL_tmpz00_11318 = 
(BgL_za71za7_5077-BgL_arg2331z00_1967); 
return 
BGL_UINT64_TO_BUINT64(BgL_tmpz00_11318);} } }  else 
{ /* Ieee/number.scm 714 */
if(
BGL_UINT64P(BgL_yz00_95))
{ /* Ieee/number.scm 714 */
uint64_t BgL_za71za7_5081;uint64_t BgL_za72za7_5082;
BgL_za71za7_5081 = 
BGL_BINT64_TO_INT64(BgL_xz00_94); 
BgL_za72za7_5082 = 
BGL_BINT64_TO_INT64(BgL_yz00_95); 
{ /* Ieee/number.scm 714 */
uint64_t BgL_tmpz00_11325;
BgL_tmpz00_11325 = 
(BgL_za71za7_5081-BgL_za72za7_5082); 
return 
BGL_UINT64_TO_BUINT64(BgL_tmpz00_11325);} }  else 
{ /* Ieee/number.scm 714 */
if(
REALP(BgL_yz00_95))
{ /* Ieee/number.scm 714 */
double BgL_arg2334z00_1970;
{ /* Ieee/number.scm 714 */
uint64_t BgL_tmpz00_11330;
BgL_tmpz00_11330 = 
BGL_BINT64_TO_INT64(BgL_xz00_94); 
BgL_arg2334z00_1970 = 
(double)(BgL_tmpz00_11330); } 
return 
DOUBLE_TO_REAL(
(BgL_arg2334z00_1970-
REAL_TO_DOUBLE(BgL_yz00_95)));}  else 
{ /* Ieee/number.scm 714 */
if(
LLONGP(BgL_yz00_95))
{ /* Ieee/number.scm 714 */
uint64_t BgL_arg2336z00_1972;
{ /* Ieee/number.scm 714 */
uint64_t BgL_res4248z00_5090;
{ /* Ieee/number.scm 714 */
BGL_LONGLONG_T BgL_tmpz00_11338;
BgL_tmpz00_11338 = 
BLLONG_TO_LLONG(BgL_yz00_95); 
BgL_res4248z00_5090 = 
(uint64_t)(BgL_tmpz00_11338); } 
BgL_arg2336z00_1972 = BgL_res4248z00_5090; } 
{ /* Ieee/number.scm 714 */
uint64_t BgL_za71za7_5091;
BgL_za71za7_5091 = 
BGL_BINT64_TO_INT64(BgL_xz00_94); 
{ /* Ieee/number.scm 714 */
uint64_t BgL_tmpz00_11342;
BgL_tmpz00_11342 = 
(BgL_za71za7_5091-BgL_arg2336z00_1972); 
return 
BGL_UINT64_TO_BUINT64(BgL_tmpz00_11342);} } }  else 
{ /* Ieee/number.scm 714 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_95))
{ /* Ieee/number.scm 714 */
uint64_t BgL_arg2339z00_1975;
{ /* Ieee/number.scm 714 */
BGL_LONGLONG_T BgL_arg2340z00_1976;
{ /* Ieee/number.scm 714 */
obj_t BgL_arg2341z00_1977;
BgL_arg2341z00_1977 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_95); 
{ /* Ieee/number.scm 714 */
long BgL_tmpz00_11348;
{ /* Ieee/number.scm 714 */
obj_t BgL_tmpz00_11349;
if(
ELONGP(BgL_arg2341z00_1977))
{ /* Ieee/number.scm 714 */
BgL_tmpz00_11349 = BgL_arg2341z00_1977
; }  else 
{ 
obj_t BgL_auxz00_11352;
BgL_auxz00_11352 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)27071)), BGl_string5316z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg2341z00_1977); 
FAILURE(BgL_auxz00_11352,BFALSE,BFALSE);} 
BgL_tmpz00_11348 = 
BELONG_TO_LONG(BgL_tmpz00_11349); } 
BgL_arg2340z00_1976 = 
(BGL_LONGLONG_T)(BgL_tmpz00_11348); } } 
{ /* Ieee/number.scm 714 */
uint64_t BgL_res4250z00_5095;
BgL_res4250z00_5095 = 
(uint64_t)(BgL_arg2340z00_1976); 
BgL_arg2339z00_1975 = BgL_res4250z00_5095; } } 
{ /* Ieee/number.scm 714 */
uint64_t BgL_za71za7_5096;
BgL_za71za7_5096 = 
BGL_BINT64_TO_INT64(BgL_xz00_94); 
{ /* Ieee/number.scm 714 */
uint64_t BgL_tmpz00_11360;
BgL_tmpz00_11360 = 
(BgL_za71za7_5096-BgL_arg2339z00_1975); 
return 
BGL_UINT64_TO_BUINT64(BgL_tmpz00_11360);} } }  else 
{ /* Ieee/number.scm 714 */
if(
BIGNUMP(BgL_yz00_95))
{ /* Ieee/number.scm 714 */
return 
bgl_bignum_sub(
bgl_uint64_to_bignum(
BGL_BINT64_TO_INT64(BgL_xz00_94)), BgL_yz00_95);}  else 
{ /* Ieee/number.scm 714 */
return 
BGl_errorz00zz__errorz00(BGl_string5317z00zz__r4_numbers_6_5z00, BGl_string5292z00zz__r4_numbers_6_5z00, BgL_yz00_95);} } } } } } }  else 
{ /* Ieee/number.scm 714 */
if(
BIGNUMP(BgL_xz00_94))
{ /* Ieee/number.scm 714 */
if(
BIGNUMP(BgL_yz00_95))
{ /* Ieee/number.scm 714 */
obj_t BgL_tmpz00_11373;
BgL_tmpz00_11373 = 
bgl_bignum_sub(BgL_xz00_94, BgL_yz00_95); 
return 
BGL_SAFE_BX_TO_FX(BgL_tmpz00_11373);}  else 
{ /* Ieee/number.scm 714 */
if(
INTEGERP(BgL_yz00_95))
{ /* Ieee/number.scm 714 */
obj_t BgL_tmpz00_11378;
BgL_tmpz00_11378 = 
bgl_bignum_sub(BgL_xz00_94, 
bgl_long_to_bignum(
(long)CINT(BgL_yz00_95))); 
return 
BGL_SAFE_BX_TO_FX(BgL_tmpz00_11378);}  else 
{ /* Ieee/number.scm 714 */
if(
REALP(BgL_yz00_95))
{ /* Ieee/number.scm 714 */
return 
DOUBLE_TO_REAL(
(
bgl_bignum_to_flonum(BgL_xz00_94)-
REAL_TO_DOUBLE(BgL_yz00_95)));}  else 
{ /* Ieee/number.scm 714 */
if(
BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_95))
{ /* Ieee/number.scm 714 */
obj_t BgL_arg2354z00_1989;
{ /* Ieee/number.scm 714 */
obj_t BgL_arg2355z00_1990;
BgL_arg2355z00_1990 = 
BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(BgL_yz00_95); 
{ /* Ieee/number.scm 714 */
long BgL_xz00_5120;
{ /* Ieee/number.scm 714 */
obj_t BgL_tmpz00_11392;
if(
ELONGP(BgL_arg2355z00_1990))
{ /* Ieee/number.scm 714 */
BgL_tmpz00_11392 = BgL_arg2355z00_1990
; }  else 
{ 
obj_t BgL_auxz00_11395;
BgL_auxz00_11395 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)27071)), BGl_string5316z00zz__r4_numbers_6_5z00, BGl_string5270z00zz__r4_numbers_6_5z00, BgL_arg2355z00_1990); 
FAILURE(BgL_auxz00_11395,BFALSE,BFALSE);} 
BgL_xz00_5120 = 
BELONG_TO_LONG(BgL_tmpz00_11392); } 
BgL_arg2354z00_1989 = 
bgl_long_to_bignum(BgL_xz00_5120); } } 
return 
bgl_bignum_sub(BgL_xz00_94, BgL_arg2354z00_1989);}  else 
{ /* Ieee/number.scm 714 */
if(
LLONGP(BgL_yz00_95))
{ /* Ieee/number.scm 714 */
return 
bgl_bignum_sub(BgL_xz00_94, 
bgl_llong_to_bignum(
BLLONG_TO_LLONG(BgL_yz00_95)));}  else 
{ /* Ieee/number.scm 714 */
if(
BGL_UINT64P(BgL_yz00_95))
{ /* Ieee/number.scm 714 */
return 
bgl_bignum_sub(BgL_xz00_94, 
bgl_uint64_to_bignum(
BGL_BINT64_TO_INT64(BgL_yz00_95)));}  else 
{ /* Ieee/number.scm 714 */
return 
BGl_errorz00zz__errorz00(BGl_string5317z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_95);} } } } } } }  else 
{ /* Ieee/number.scm 714 */
return 
BGl_errorz00zz__errorz00(BGl_string5317z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_xz00_94);} } } } } } } 

}



/* &2- */
obj_t BGl_z622zd2zb0zz__r4_numbers_6_5z00(obj_t BgL_envz00_6547, obj_t BgL_xz00_6548, obj_t BgL_yz00_6549)
{
{ /* Ieee/number.scm 713 */
return 
BGl_2zd2zd2zz__r4_numbers_6_5z00(BgL_xz00_6548, BgL_yz00_6549);} 

}



/* - */
BGL_EXPORTED_DEF obj_t BGl_zd2zd2zz__r4_numbers_6_5z00(obj_t BgL_xz00_96, obj_t BgL_yz00_97)
{
{ /* Ieee/number.scm 719 */
if(
PAIRP(BgL_yz00_97))
{ /* Ieee/number.scm 721 */
obj_t BgL_g1052z00_1997;obj_t BgL_g1053z00_1998;
BgL_g1052z00_1997 = 
BGl_2zd2zd2zz__r4_numbers_6_5z00(BgL_xz00_96, 
CAR(BgL_yz00_97)); 
BgL_g1053z00_1998 = 
CDR(BgL_yz00_97); 
{ 
obj_t BgL_resultz00_5153;obj_t BgL_argsz00_5154;
BgL_resultz00_5153 = BgL_g1052z00_1997; 
BgL_argsz00_5154 = BgL_g1053z00_1998; 
BgL_loopz00_5152:
if(
PAIRP(BgL_argsz00_5154))
{ 
obj_t BgL_argsz00_11425;obj_t BgL_resultz00_11422;
BgL_resultz00_11422 = 
BGl_2zd2zd2zz__r4_numbers_6_5z00(BgL_resultz00_5153, 
CAR(BgL_argsz00_5154)); 
BgL_argsz00_11425 = 
CDR(BgL_argsz00_5154); 
BgL_argsz00_5154 = BgL_argsz00_11425; 
BgL_resultz00_5153 = BgL_resultz00_11422; 
goto BgL_loopz00_5152;}  else 
{ /* Ieee/number.scm 723 */
return BgL_resultz00_5153;} } }  else 
{ /* Ieee/number.scm 720 */
return 
BGl_2zd2zd2zz__r4_numbers_6_5z00(
BINT(((long)0)), BgL_xz00_96);} } 

}



/* &- */
obj_t BGl_z62zd2zb0zz__r4_numbers_6_5z00(obj_t BgL_envz00_6550, obj_t BgL_xz00_6551, obj_t BgL_yz00_6552)
{
{ /* Ieee/number.scm 719 */
return 
BGl_zd2zd2zz__r4_numbers_6_5z00(BgL_xz00_6551, BgL_yz00_6552);} 

}



/* 2/ */
BGL_EXPORTED_DEF obj_t BGl_2zf2zf2zz__r4_numbers_6_5z00(obj_t BgL_xz00_98, obj_t BgL_yz00_99)
{
{ /* Ieee/number.scm 731 */
if(
INTEGERP(BgL_xz00_98))
{ /* Ieee/number.scm 733 */
if(
INTEGERP(BgL_yz00_99))
{ /* Ieee/number.scm 736 */
bool_t BgL_test6239z00_11434;
{ /* Ieee/number.scm 736 */
long BgL_arg2376z00_2015;
{ /* Ieee/number.scm 736 */
long BgL_res4281z00_5186;
{ /* Ieee/number.scm 736 */
long BgL_n1z00_5168;long BgL_n2z00_5169;
BgL_n1z00_5168 = 
(long)CINT(BgL_xz00_98); 
BgL_n2z00_5169 = 
(long)CINT(BgL_yz00_99); 
{ /* Ieee/number.scm 736 */
bool_t BgL_test6240z00_11437;
{ /* Ieee/number.scm 736 */
long BgL_arg3046z00_5171;
BgL_arg3046z00_5171 = 
(((BgL_n1z00_5168) | (BgL_n2z00_5169)) & -2147483648); 
BgL_test6240z00_11437 = 
(BgL_arg3046z00_5171==((long)0)); } 
if(BgL_test6240z00_11437)
{ /* Ieee/number.scm 736 */
int32_t BgL_arg3042z00_5172;
{ /* Ieee/number.scm 736 */
int32_t BgL_arg3043z00_5173;int32_t BgL_arg3045z00_5174;
{ /* Ieee/number.scm 736 */
int32_t BgL_res4277z00_5178;
BgL_res4277z00_5178 = 
(int32_t)(BgL_n1z00_5168); 
BgL_arg3043z00_5173 = BgL_res4277z00_5178; } 
{ /* Ieee/number.scm 736 */
int32_t BgL_res4278z00_5180;
BgL_res4278z00_5180 = 
(int32_t)(BgL_n2z00_5169); 
BgL_arg3045z00_5174 = BgL_res4278z00_5180; } 
BgL_arg3042z00_5172 = 
(BgL_arg3043z00_5173%BgL_arg3045z00_5174); } 
{ /* Ieee/number.scm 736 */
long BgL_res4280z00_5185;
{ /* Ieee/number.scm 736 */
long BgL_arg3184z00_5182;
BgL_arg3184z00_5182 = 
(long)(BgL_arg3042z00_5172); 
{ /* Ieee/number.scm 736 */
long BgL_res4279z00_5184;
BgL_res4279z00_5184 = 
(long)(BgL_arg3184z00_5182); 
BgL_res4280z00_5185 = BgL_res4279z00_5184; } } 
BgL_res4281z00_5186 = BgL_res4280z00_5185; } }  else 
{ /* Ieee/number.scm 736 */
BgL_res4281z00_5186 = 
(BgL_n1z00_5168%BgL_n2z00_5169); } } } 
BgL_arg2376z00_2015 = BgL_res4281z00_5186; } 
BgL_test6239z00_11434 = 
(BgL_arg2376z00_2015==((long)0)); } 
if(BgL_test6239z00_11434)
{ /* Ieee/number.scm 736 */
return 
BINT(
(
(long)CINT(BgL_xz00_98)/
(long)CINT(BgL_yz00_99)));}  else 
{ /* Ieee/number.scm 736 */
return 
DOUBLE_TO_REAL(
(
(double)(
(long)CINT(BgL_xz00_98))/
(double)(
(long)CINT(BgL_yz00_99))));} }  else 
{ /* Ieee/number.scm 735 */
if(
REALP(BgL_yz00_99))
{ /* Ieee/number.scm 739 */
return 
DOUBLE_TO_REAL(
(
(double)(
(long)CINT(BgL_xz00_98))/
REAL_TO_DOUBLE(BgL_yz00_99)));}  else 
{ /* Ieee/number.scm 739 */
if(
ELONGP(BgL_yz00_99))
{ /* Ieee/number.scm 742 */
long BgL_exz00_2019;
{ /* Ieee/number.scm 742 */
long BgL_res4288z00_5201;
{ /* Ieee/number.scm 742 */
long BgL_tmpz00_11466;
BgL_tmpz00_11466 = 
(long)CINT(BgL_xz00_98); 
BgL_res4288z00_5201 = 
(long)(BgL_tmpz00_11466); } 
BgL_exz00_2019 = BgL_res4288z00_5201; } 
{ /* Ieee/number.scm 743 */
bool_t BgL_test6243z00_11469;
{ /* Ieee/number.scm 743 */
long BgL_arg2385z00_2024;
{ /* Ieee/number.scm 743 */
long BgL_res4289z00_5204;
{ /* Ieee/number.scm 743 */
long BgL_n2z00_5203;
BgL_n2z00_5203 = 
BELONG_TO_LONG(BgL_yz00_99); 
BgL_res4289z00_5204 = 
(BgL_exz00_2019%BgL_n2z00_5203); } 
BgL_arg2385z00_2024 = BgL_res4289z00_5204; } 
BgL_test6243z00_11469 = 
(BgL_arg2385z00_2024==((long)0)); } 
if(BgL_test6243z00_11469)
{ /* Ieee/number.scm 744 */
long BgL_res4291z00_5210;
{ /* Ieee/number.scm 744 */
long BgL_za72za7_5209;
BgL_za72za7_5209 = 
BELONG_TO_LONG(BgL_yz00_99); 
BgL_res4291z00_5210 = 
(BgL_exz00_2019/BgL_za72za7_5209); } 
return 
make_belong(BgL_res4291z00_5210);}  else 
{ /* Ieee/number.scm 743 */
return 
DOUBLE_TO_REAL(
(
(double)(
(long)CINT(BgL_xz00_98))/
(double)(
BELONG_TO_LONG(BgL_yz00_99))));} } }  else 
{ /* Ieee/number.scm 741 */
if(
LLONGP(BgL_yz00_99))
{ /* Ieee/number.scm 747 */
BGL_LONGLONG_T BgL_lxz00_2026;
{ /* Ieee/number.scm 747 */
BGL_LONGLONG_T BgL_res4294z00_5216;
{ /* Ieee/number.scm 747 */
long BgL_tmpz00_11484;
BgL_tmpz00_11484 = 
(long)CINT(BgL_xz00_98); 
BgL_res4294z00_5216 = 
LONG_TO_LLONG(BgL_tmpz00_11484); } 
BgL_lxz00_2026 = BgL_res4294z00_5216; } 
{ /* Ieee/number.scm 748 */
bool_t BgL_test6245z00_11487;
{ /* Ieee/number.scm 748 */
BGL_LONGLONG_T BgL_arg2392z00_2031;
{ /* Ieee/number.scm 748 */
BGL_LONGLONG_T BgL_res4295z00_5219;
{ /* Ieee/number.scm 748 */
BGL_LONGLONG_T BgL_tmpz00_11488;
BgL_tmpz00_11488 = 
BLLONG_TO_LLONG(BgL_yz00_99); 
BgL_res4295z00_5219 = 
(BgL_lxz00_2026%BgL_tmpz00_11488); } 
BgL_arg2392z00_2031 = BgL_res4295z00_5219; } 
BgL_test6245z00_11487 = 
(BgL_arg2392z00_2031==((BGL_LONGLONG_T)0)); } 
if(BgL_test6245z00_11487)
{ /* Ieee/number.scm 749 */
BGL_LONGLONG_T BgL_res4297z00_5225;
{ /* Ieee/number.scm 749 */
BGL_LONGLONG_T BgL_tmpz00_11492;
BgL_tmpz00_11492 = 
BLLONG_TO_LLONG(BgL_yz00_99); 
BgL_res4297z00_5225 = 
(BgL_lxz00_2026/BgL_tmpz00_11492); } 
return 
make_bllong(BgL_res4297z00_5225);}  else 
{ /* Ieee/number.scm 748 */
return 
DOUBLE_TO_REAL(
(
(double)(
(long)CINT(BgL_xz00_98))/
(double)(
BLLONG_TO_LLONG(BgL_yz00_99))));} } }  else 
{ /* Ieee/number.scm 746 */
if(
BIGNUMP(BgL_yz00_99))
{ /* Ieee/number.scm 752 */
obj_t BgL_qz00_2033;
BgL_qz00_2033 = 
bgl_bignum_div(
bgl_long_to_bignum(
(long)CINT(BgL_xz00_98)), BgL_yz00_99); 
{ /* Ieee/number.scm 753 */
obj_t BgL_rz00_2034;
{ /* Ieee/number.scm 754 */
int BgL_tmpz00_11507;
BgL_tmpz00_11507 = 
(int)(((long)1)); 
BgL_rz00_2034 = 
BGL_MVALUES_VAL(BgL_tmpz00_11507); } 
{ /* Ieee/number.scm 754 */
bool_t BgL_test6247z00_11510;
{ /* Ieee/number.scm 754 */
obj_t BgL_nz00_5232;
if(
BIGNUMP(BgL_rz00_2034))
{ /* Ieee/number.scm 754 */
BgL_nz00_5232 = BgL_rz00_2034; }  else 
{ 
obj_t BgL_auxz00_11513;
BgL_auxz00_11513 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)28390)), BGl_string5318z00zz__r4_numbers_6_5z00, BGl_string5276z00zz__r4_numbers_6_5z00, BgL_rz00_2034); 
FAILURE(BgL_auxz00_11513,BFALSE,BFALSE);} 
BgL_test6247z00_11510 = 
BXZERO(BgL_nz00_5232); } 
if(BgL_test6247z00_11510)
{ /* Ieee/number.scm 754 */
return BgL_qz00_2033;}  else 
{ /* Ieee/number.scm 754 */
return 
DOUBLE_TO_REAL(
(
(double)(
(long)CINT(BgL_xz00_98))/
bgl_bignum_to_flonum(BgL_yz00_99)));} } } }  else 
{ /* Ieee/number.scm 751 */
return 
BGl_errorz00zz__errorz00(BGl_string5319z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_99);} } } } } }  else 
{ /* Ieee/number.scm 733 */
if(
REALP(BgL_xz00_98))
{ /* Ieee/number.scm 759 */
if(
REALP(BgL_yz00_99))
{ /* Ieee/number.scm 761 */
return 
DOUBLE_TO_REAL(
(
REAL_TO_DOUBLE(BgL_xz00_98)/
REAL_TO_DOUBLE(BgL_yz00_99)));}  else 
{ /* Ieee/number.scm 761 */
if(
INTEGERP(BgL_yz00_99))
{ /* Ieee/number.scm 763 */
return 
DOUBLE_TO_REAL(
(
REAL_TO_DOUBLE(BgL_xz00_98)/
(double)(
(long)CINT(BgL_yz00_99))));}  else 
{ /* Ieee/number.scm 763 */
if(
ELONGP(BgL_yz00_99))
{ /* Ieee/number.scm 766 */
double BgL_r1z00_5249;
BgL_r1z00_5249 = 
REAL_TO_DOUBLE(BgL_xz00_98); 
return 
DOUBLE_TO_REAL(
(BgL_r1z00_5249/
(double)(
BELONG_TO_LONG(BgL_yz00_99))));}  else 
{ /* Ieee/number.scm 765 */
if(
LLONGP(BgL_yz00_99))
{ /* Ieee/number.scm 767 */
return 
DOUBLE_TO_REAL(
(
REAL_TO_DOUBLE(BgL_xz00_98)/
(double)(
BLLONG_TO_LLONG(BgL_yz00_99))));}  else 
{ /* Ieee/number.scm 767 */
if(
BIGNUMP(BgL_yz00_99))
{ /* Ieee/number.scm 769 */
return 
DOUBLE_TO_REAL(
(
REAL_TO_DOUBLE(BgL_xz00_98)/
bgl_bignum_to_flonum(BgL_yz00_99)));}  else 
{ /* Ieee/number.scm 769 */
return 
BGl_errorz00zz__errorz00(BGl_string5319z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_99);} } } } } }  else 
{ /* Ieee/number.scm 759 */
if(
ELONGP(BgL_xz00_98))
{ /* Ieee/number.scm 773 */
if(
INTEGERP(BgL_yz00_99))
{ /* Ieee/number.scm 776 */
long BgL_eyz00_2051;
{ /* Ieee/number.scm 776 */
long BgL_res4318z00_5265;
{ /* Ieee/number.scm 776 */
long BgL_tmpz00_11564;
BgL_tmpz00_11564 = 
(long)CINT(BgL_yz00_99); 
BgL_res4318z00_5265 = 
(long)(BgL_tmpz00_11564); } 
BgL_eyz00_2051 = BgL_res4318z00_5265; } 
{ /* Ieee/number.scm 777 */
bool_t BgL_test6257z00_11567;
{ /* Ieee/number.scm 777 */
long BgL_arg2416z00_2056;
{ /* Ieee/number.scm 777 */
long BgL_res4319z00_5268;
{ /* Ieee/number.scm 777 */
long BgL_n1z00_5266;
BgL_n1z00_5266 = 
BELONG_TO_LONG(BgL_xz00_98); 
BgL_res4319z00_5268 = 
(BgL_n1z00_5266%BgL_eyz00_2051); } 
BgL_arg2416z00_2056 = BgL_res4319z00_5268; } 
BgL_test6257z00_11567 = 
(BgL_arg2416z00_2056==((long)0)); } 
if(BgL_test6257z00_11567)
{ /* Ieee/number.scm 778 */
long BgL_res4321z00_5274;
{ /* Ieee/number.scm 778 */
long BgL_za71za7_5272;
BgL_za71za7_5272 = 
BELONG_TO_LONG(BgL_xz00_98); 
BgL_res4321z00_5274 = 
(BgL_za71za7_5272/BgL_eyz00_2051); } 
return 
make_belong(BgL_res4321z00_5274);}  else 
{ /* Ieee/number.scm 777 */
return 
DOUBLE_TO_REAL(
(
(double)(
BELONG_TO_LONG(BgL_xz00_98))/
(double)(
(long)CINT(BgL_yz00_99))));} } }  else 
{ /* Ieee/number.scm 775 */
if(
REALP(BgL_yz00_99))
{ /* Ieee/number.scm 781 */
double BgL_r2z00_5280;
BgL_r2z00_5280 = 
REAL_TO_DOUBLE(BgL_yz00_99); 
return 
DOUBLE_TO_REAL(
(
(double)(
BELONG_TO_LONG(BgL_xz00_98))/BgL_r2z00_5280));}  else 
{ /* Ieee/number.scm 780 */
if(
ELONGP(BgL_yz00_99))
{ /* Ieee/number.scm 783 */
bool_t BgL_test6260z00_11589;
{ /* Ieee/number.scm 783 */
long BgL_arg2425z00_2064;
{ /* Ieee/number.scm 783 */
long BgL_res4326z00_5285;
{ /* Ieee/number.scm 783 */
long BgL_n1z00_5283;long BgL_n2z00_5284;
BgL_n1z00_5283 = 
BELONG_TO_LONG(BgL_xz00_98); 
BgL_n2z00_5284 = 
BELONG_TO_LONG(BgL_yz00_99); 
BgL_res4326z00_5285 = 
(BgL_n1z00_5283%BgL_n2z00_5284); } 
BgL_arg2425z00_2064 = BgL_res4326z00_5285; } 
BgL_test6260z00_11589 = 
(BgL_arg2425z00_2064==((long)0)); } 
if(BgL_test6260z00_11589)
{ /* Ieee/number.scm 784 */
long BgL_res4328z00_5291;
{ /* Ieee/number.scm 784 */
long BgL_za71za7_5289;long BgL_za72za7_5290;
BgL_za71za7_5289 = 
BELONG_TO_LONG(BgL_xz00_98); 
BgL_za72za7_5290 = 
BELONG_TO_LONG(BgL_yz00_99); 
BgL_res4328z00_5291 = 
(BgL_za71za7_5289/BgL_za72za7_5290); } 
return 
make_belong(BgL_res4328z00_5291);}  else 
{ /* Ieee/number.scm 783 */
return 
DOUBLE_TO_REAL(
(
(double)(
BELONG_TO_LONG(BgL_xz00_98))/
(double)(
BELONG_TO_LONG(BgL_yz00_99))));} }  else 
{ /* Ieee/number.scm 782 */
if(
LLONGP(BgL_yz00_99))
{ /* Ieee/number.scm 787 */
double BgL_fxz00_2066;
BgL_fxz00_2066 = 
(double)(
BELONG_TO_LONG(BgL_xz00_98)); 
{ /* Ieee/number.scm 787 */
BGL_LONGLONG_T BgL_lxz00_2067;
BgL_lxz00_2067 = 
(BGL_LONGLONG_T)(BgL_fxz00_2066); 
{ /* Ieee/number.scm 788 */

{ /* Ieee/number.scm 789 */
bool_t BgL_test6262z00_11609;
{ /* Ieee/number.scm 789 */
BGL_LONGLONG_T BgL_arg2431z00_2071;
{ /* Ieee/number.scm 789 */
BGL_LONGLONG_T BgL_res4331z00_5298;
{ /* Ieee/number.scm 789 */
BGL_LONGLONG_T BgL_tmpz00_11610;
BgL_tmpz00_11610 = 
BLLONG_TO_LLONG(BgL_yz00_99); 
BgL_res4331z00_5298 = 
(BgL_lxz00_2067%BgL_tmpz00_11610); } 
BgL_arg2431z00_2071 = BgL_res4331z00_5298; } 
BgL_test6262z00_11609 = 
(BgL_arg2431z00_2071==((BGL_LONGLONG_T)0)); } 
if(BgL_test6262z00_11609)
{ /* Ieee/number.scm 790 */
BGL_LONGLONG_T BgL_res4333z00_5304;
{ /* Ieee/number.scm 790 */
BGL_LONGLONG_T BgL_tmpz00_11614;
BgL_tmpz00_11614 = 
BLLONG_TO_LLONG(BgL_yz00_99); 
BgL_res4333z00_5304 = 
(BgL_lxz00_2067/BgL_tmpz00_11614); } 
return 
make_bllong(BgL_res4333z00_5304);}  else 
{ /* Ieee/number.scm 789 */
return 
DOUBLE_TO_REAL(
(BgL_fxz00_2066/
(double)(
BLLONG_TO_LLONG(BgL_yz00_99))));} } } } }  else 
{ /* Ieee/number.scm 786 */
if(
BIGNUMP(BgL_yz00_99))
{ /* Ieee/number.scm 793 */
obj_t BgL_qz00_2073;
{ /* Ieee/number.scm 794 */
obj_t BgL_arg2438z00_2078;
{ /* Ieee/number.scm 794 */
long BgL_xz00_5309;
BgL_xz00_5309 = 
BELONG_TO_LONG(BgL_xz00_98); 
BgL_arg2438z00_2078 = 
bgl_long_to_bignum(BgL_xz00_5309); } 
BgL_qz00_2073 = 
bgl_bignum_div(BgL_arg2438z00_2078, BgL_yz00_99); } 
{ /* Ieee/number.scm 794 */
obj_t BgL_rz00_2074;
{ /* Ieee/number.scm 795 */
int BgL_tmpz00_11627;
BgL_tmpz00_11627 = 
(int)(((long)1)); 
BgL_rz00_2074 = 
BGL_MVALUES_VAL(BgL_tmpz00_11627); } 
{ /* Ieee/number.scm 795 */
bool_t BgL_test6264z00_11630;
{ /* Ieee/number.scm 795 */
obj_t BgL_nz00_5311;
if(
BIGNUMP(BgL_rz00_2074))
{ /* Ieee/number.scm 795 */
BgL_nz00_5311 = BgL_rz00_2074; }  else 
{ 
obj_t BgL_auxz00_11633;
BgL_auxz00_11633 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)29457)), BGl_string5318z00zz__r4_numbers_6_5z00, BGl_string5276z00zz__r4_numbers_6_5z00, BgL_rz00_2074); 
FAILURE(BgL_auxz00_11633,BFALSE,BFALSE);} 
BgL_test6264z00_11630 = 
BXZERO(BgL_nz00_5311); } 
if(BgL_test6264z00_11630)
{ /* Ieee/number.scm 795 */
return BgL_qz00_2073;}  else 
{ /* Ieee/number.scm 795 */
return 
DOUBLE_TO_REAL(
(
(double)(
BELONG_TO_LONG(BgL_xz00_98))/
bgl_bignum_to_flonum(BgL_yz00_99)));} } } }  else 
{ /* Ieee/number.scm 792 */
return 
BGl_errorz00zz__errorz00(BGl_string5319z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_99);} } } } } }  else 
{ /* Ieee/number.scm 773 */
if(
LLONGP(BgL_xz00_98))
{ /* Ieee/number.scm 800 */
if(
INTEGERP(BgL_yz00_99))
{ /* Ieee/number.scm 803 */
BGL_LONGLONG_T BgL_lyz00_2081;
{ /* Ieee/number.scm 803 */
BGL_LONGLONG_T BgL_res4342z00_5321;
{ /* Ieee/number.scm 803 */
long BgL_tmpz00_11648;
BgL_tmpz00_11648 = 
(long)CINT(BgL_yz00_99); 
BgL_res4342z00_5321 = 
LONG_TO_LLONG(BgL_tmpz00_11648); } 
BgL_lyz00_2081 = BgL_res4342z00_5321; } 
{ /* Ieee/number.scm 804 */
bool_t BgL_test6268z00_11651;
{ /* Ieee/number.scm 804 */
BGL_LONGLONG_T BgL_arg2446z00_2086;
{ /* Ieee/number.scm 804 */
BGL_LONGLONG_T BgL_res4343z00_5324;
{ /* Ieee/number.scm 804 */
BGL_LONGLONG_T BgL_tmpz00_11652;
BgL_tmpz00_11652 = 
BLLONG_TO_LLONG(BgL_xz00_98); 
BgL_res4343z00_5324 = 
(BgL_tmpz00_11652%BgL_lyz00_2081); } 
BgL_arg2446z00_2086 = BgL_res4343z00_5324; } 
BgL_test6268z00_11651 = 
(BgL_arg2446z00_2086==((BGL_LONGLONG_T)0)); } 
if(BgL_test6268z00_11651)
{ /* Ieee/number.scm 805 */
BGL_LONGLONG_T BgL_res4345z00_5330;
{ /* Ieee/number.scm 805 */
BGL_LONGLONG_T BgL_tmpz00_11656;
BgL_tmpz00_11656 = 
BLLONG_TO_LLONG(BgL_xz00_98); 
BgL_res4345z00_5330 = 
(BgL_tmpz00_11656/BgL_lyz00_2081); } 
return 
make_bllong(BgL_res4345z00_5330);}  else 
{ /* Ieee/number.scm 804 */
return 
DOUBLE_TO_REAL(
(
(double)(
BLLONG_TO_LLONG(BgL_xz00_98))/
(double)(
(long)CINT(BgL_yz00_99))));} } }  else 
{ /* Ieee/number.scm 802 */
if(
REALP(BgL_yz00_99))
{ /* Ieee/number.scm 807 */
return 
DOUBLE_TO_REAL(
(
(double)(
BLLONG_TO_LLONG(BgL_xz00_98))/
REAL_TO_DOUBLE(BgL_yz00_99)));}  else 
{ /* Ieee/number.scm 807 */
if(
ELONGP(BgL_yz00_99))
{ /* Ieee/number.scm 810 */
double BgL_fyz00_2090;
BgL_fyz00_2090 = 
(double)(
BELONG_TO_LONG(BgL_yz00_99)); 
{ /* Ieee/number.scm 810 */
BGL_LONGLONG_T BgL_lyz00_2091;
BgL_lyz00_2091 = 
(BGL_LONGLONG_T)(BgL_fyz00_2090); 
{ /* Ieee/number.scm 811 */

{ /* Ieee/number.scm 812 */
bool_t BgL_test6271z00_11678;
{ /* Ieee/number.scm 812 */
BGL_LONGLONG_T BgL_arg2453z00_2095;
{ /* Ieee/number.scm 812 */
BGL_LONGLONG_T BgL_res4350z00_5341;
{ /* Ieee/number.scm 812 */
BGL_LONGLONG_T BgL_tmpz00_11679;
BgL_tmpz00_11679 = 
BLLONG_TO_LLONG(BgL_xz00_98); 
BgL_res4350z00_5341 = 
(BgL_tmpz00_11679%BgL_lyz00_2091); } 
BgL_arg2453z00_2095 = BgL_res4350z00_5341; } 
BgL_test6271z00_11678 = 
(BgL_arg2453z00_2095==((BGL_LONGLONG_T)0)); } 
if(BgL_test6271z00_11678)
{ /* Ieee/number.scm 813 */
BGL_LONGLONG_T BgL_res4352z00_5347;
{ /* Ieee/number.scm 813 */
BGL_LONGLONG_T BgL_tmpz00_11683;
BgL_tmpz00_11683 = 
BLLONG_TO_LLONG(BgL_xz00_98); 
BgL_res4352z00_5347 = 
(BgL_tmpz00_11683/BgL_lyz00_2091); } 
return 
make_bllong(BgL_res4352z00_5347);}  else 
{ /* Ieee/number.scm 812 */
return 
DOUBLE_TO_REAL(
(
(double)(
BLLONG_TO_LLONG(BgL_xz00_98))/BgL_fyz00_2090));} } } } }  else 
{ /* Ieee/number.scm 809 */
if(
LLONGP(BgL_yz00_99))
{ /* Ieee/number.scm 816 */
bool_t BgL_test6273z00_11693;
{ /* Ieee/number.scm 816 */
BGL_LONGLONG_T BgL_arg2460z00_2101;
{ /* Ieee/number.scm 816 */
BGL_LONGLONG_T BgL_res4355z00_5354;
{ /* Ieee/number.scm 816 */
BGL_LONGLONG_T BgL_auxz00_11696;BGL_LONGLONG_T BgL_tmpz00_11694;
BgL_auxz00_11696 = 
BLLONG_TO_LLONG(BgL_yz00_99); 
BgL_tmpz00_11694 = 
BLLONG_TO_LLONG(BgL_xz00_98); 
BgL_res4355z00_5354 = 
(BgL_tmpz00_11694%BgL_auxz00_11696); } 
BgL_arg2460z00_2101 = BgL_res4355z00_5354; } 
BgL_test6273z00_11693 = 
(BgL_arg2460z00_2101==((BGL_LONGLONG_T)0)); } 
if(BgL_test6273z00_11693)
{ /* Ieee/number.scm 817 */
BGL_LONGLONG_T BgL_res4357z00_5360;
{ /* Ieee/number.scm 817 */
BGL_LONGLONG_T BgL_auxz00_11702;BGL_LONGLONG_T BgL_tmpz00_11700;
BgL_auxz00_11702 = 
BLLONG_TO_LLONG(BgL_yz00_99); 
BgL_tmpz00_11700 = 
BLLONG_TO_LLONG(BgL_xz00_98); 
BgL_res4357z00_5360 = 
(BgL_tmpz00_11700/BgL_auxz00_11702); } 
return 
make_bllong(BgL_res4357z00_5360);}  else 
{ /* Ieee/number.scm 816 */
return 
DOUBLE_TO_REAL(
(
(double)(
BLLONG_TO_LLONG(BgL_xz00_98))/
(double)(
BLLONG_TO_LLONG(BgL_yz00_99))));} }  else 
{ /* Ieee/number.scm 815 */
if(
BIGNUMP(BgL_yz00_99))
{ /* Ieee/number.scm 820 */
obj_t BgL_qz00_2103;
BgL_qz00_2103 = 
bgl_bignum_div(
bgl_llong_to_bignum(
BLLONG_TO_LLONG(BgL_xz00_98)), BgL_yz00_99); 
{ /* Ieee/number.scm 821 */
obj_t BgL_rz00_2104;
{ /* Ieee/number.scm 822 */
int BgL_tmpz00_11717;
BgL_tmpz00_11717 = 
(int)(((long)1)); 
BgL_rz00_2104 = 
BGL_MVALUES_VAL(BgL_tmpz00_11717); } 
{ /* Ieee/number.scm 822 */
bool_t BgL_test6275z00_11720;
{ /* Ieee/number.scm 822 */
obj_t BgL_nz00_5367;
if(
BIGNUMP(BgL_rz00_2104))
{ /* Ieee/number.scm 822 */
BgL_nz00_5367 = BgL_rz00_2104; }  else 
{ 
obj_t BgL_auxz00_11723;
BgL_auxz00_11723 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)30224)), BGl_string5318z00zz__r4_numbers_6_5z00, BGl_string5276z00zz__r4_numbers_6_5z00, BgL_rz00_2104); 
FAILURE(BgL_auxz00_11723,BFALSE,BFALSE);} 
BgL_test6275z00_11720 = 
BXZERO(BgL_nz00_5367); } 
if(BgL_test6275z00_11720)
{ /* Ieee/number.scm 822 */
return BgL_qz00_2103;}  else 
{ /* Ieee/number.scm 822 */
return 
DOUBLE_TO_REAL(
(
(double)(
BLLONG_TO_LLONG(BgL_xz00_98))/
bgl_bignum_to_flonum(BgL_yz00_99)));} } } }  else 
{ /* Ieee/number.scm 819 */
return 
BGl_errorz00zz__errorz00(BGl_string5319z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_99);} } } } } }  else 
{ /* Ieee/number.scm 800 */
if(
BIGNUMP(BgL_xz00_98))
{ /* Ieee/number.scm 827 */
if(
INTEGERP(BgL_yz00_99))
{ /* Ieee/number.scm 830 */
obj_t BgL_qz00_2111;
BgL_qz00_2111 = 
bgl_bignum_div(BgL_xz00_98, 
bgl_long_to_bignum(
(long)CINT(BgL_yz00_99))); 
{ /* Ieee/number.scm 831 */
obj_t BgL_rz00_2112;
{ /* Ieee/number.scm 832 */
int BgL_tmpz00_11741;
BgL_tmpz00_11741 = 
(int)(((long)1)); 
BgL_rz00_2112 = 
BGL_MVALUES_VAL(BgL_tmpz00_11741); } 
{ /* Ieee/number.scm 832 */
bool_t BgL_test6279z00_11744;
{ /* Ieee/number.scm 832 */
obj_t BgL_nz00_5378;
if(
BIGNUMP(BgL_rz00_2112))
{ /* Ieee/number.scm 832 */
BgL_nz00_5378 = BgL_rz00_2112; }  else 
{ 
obj_t BgL_auxz00_11747;
BgL_auxz00_11747 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)30470)), BGl_string5318z00zz__r4_numbers_6_5z00, BGl_string5276z00zz__r4_numbers_6_5z00, BgL_rz00_2112); 
FAILURE(BgL_auxz00_11747,BFALSE,BFALSE);} 
BgL_test6279z00_11744 = 
BXZERO(BgL_nz00_5378); } 
if(BgL_test6279z00_11744)
{ /* Ieee/number.scm 832 */
return BgL_qz00_2111;}  else 
{ /* Ieee/number.scm 832 */
return 
DOUBLE_TO_REAL(
(
bgl_bignum_to_flonum(BgL_xz00_98)/
(double)(
(long)CINT(BgL_yz00_99))));} } } }  else 
{ /* Ieee/number.scm 829 */
if(
REALP(BgL_yz00_99))
{ /* Ieee/number.scm 835 */
return 
DOUBLE_TO_REAL(
(
bgl_bignum_to_flonum(BgL_xz00_98)/
REAL_TO_DOUBLE(BgL_yz00_99)));}  else 
{ /* Ieee/number.scm 835 */
if(
ELONGP(BgL_yz00_99))
{ /* Ieee/number.scm 838 */
obj_t BgL_qz00_2120;
{ /* Ieee/number.scm 839 */
obj_t BgL_arg2482z00_2125;
{ /* Ieee/number.scm 839 */
long BgL_xz00_5392;
BgL_xz00_5392 = 
BELONG_TO_LONG(BgL_yz00_99); 
BgL_arg2482z00_2125 = 
bgl_long_to_bignum(BgL_xz00_5392); } 
BgL_qz00_2120 = 
bgl_bignum_div(BgL_xz00_98, BgL_arg2482z00_2125); } 
{ /* Ieee/number.scm 839 */
obj_t BgL_rz00_2121;
{ /* Ieee/number.scm 840 */
int BgL_tmpz00_11768;
BgL_tmpz00_11768 = 
(int)(((long)1)); 
BgL_rz00_2121 = 
BGL_MVALUES_VAL(BgL_tmpz00_11768); } 
{ /* Ieee/number.scm 840 */
bool_t BgL_test6283z00_11771;
{ /* Ieee/number.scm 840 */
obj_t BgL_nz00_5394;
if(
BIGNUMP(BgL_rz00_2121))
{ /* Ieee/number.scm 840 */
BgL_nz00_5394 = BgL_rz00_2121; }  else 
{ 
obj_t BgL_auxz00_11774;
BgL_auxz00_11774 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)30690)), BGl_string5318z00zz__r4_numbers_6_5z00, BGl_string5276z00zz__r4_numbers_6_5z00, BgL_rz00_2121); 
FAILURE(BgL_auxz00_11774,BFALSE,BFALSE);} 
BgL_test6283z00_11771 = 
BXZERO(BgL_nz00_5394); } 
if(BgL_test6283z00_11771)
{ /* Ieee/number.scm 840 */
return BgL_qz00_2120;}  else 
{ /* Ieee/number.scm 840 */
return 
DOUBLE_TO_REAL(
(
bgl_bignum_to_flonum(BgL_xz00_98)/
(double)(
BELONG_TO_LONG(BgL_yz00_99))));} } } }  else 
{ /* Ieee/number.scm 837 */
if(
LLONGP(BgL_yz00_99))
{ /* Ieee/number.scm 844 */
obj_t BgL_qz00_2127;
BgL_qz00_2127 = 
bgl_bignum_div(BgL_xz00_98, 
bgl_llong_to_bignum(
BLLONG_TO_LLONG(BgL_yz00_99))); 
{ /* Ieee/number.scm 845 */
obj_t BgL_rz00_2128;
{ /* Ieee/number.scm 846 */
int BgL_tmpz00_11789;
BgL_tmpz00_11789 = 
(int)(((long)1)); 
BgL_rz00_2128 = 
BGL_MVALUES_VAL(BgL_tmpz00_11789); } 
{ /* Ieee/number.scm 846 */
bool_t BgL_test6286z00_11792;
{ /* Ieee/number.scm 846 */
obj_t BgL_nz00_5404;
if(
BIGNUMP(BgL_rz00_2128))
{ /* Ieee/number.scm 846 */
BgL_nz00_5404 = BgL_rz00_2128; }  else 
{ 
obj_t BgL_auxz00_11795;
BgL_auxz00_11795 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)30859)), BGl_string5318z00zz__r4_numbers_6_5z00, BGl_string5276z00zz__r4_numbers_6_5z00, BgL_rz00_2128); 
FAILURE(BgL_auxz00_11795,BFALSE,BFALSE);} 
BgL_test6286z00_11792 = 
BXZERO(BgL_nz00_5404); } 
if(BgL_test6286z00_11792)
{ /* Ieee/number.scm 846 */
return BgL_qz00_2127;}  else 
{ /* Ieee/number.scm 846 */
return 
DOUBLE_TO_REAL(
(
bgl_bignum_to_flonum(BgL_xz00_98)/
(double)(
BLLONG_TO_LLONG(BgL_yz00_99))));} } } }  else 
{ /* Ieee/number.scm 843 */
if(
BIGNUMP(BgL_yz00_99))
{ /* Ieee/number.scm 850 */
obj_t BgL_qz00_2134;
BgL_qz00_2134 = 
bgl_bignum_div(BgL_xz00_98, BgL_yz00_99); 
{ /* Ieee/number.scm 851 */
obj_t BgL_rz00_2135;
{ /* Ieee/number.scm 852 */
int BgL_tmpz00_11808;
BgL_tmpz00_11808 = 
(int)(((long)1)); 
BgL_rz00_2135 = 
BGL_MVALUES_VAL(BgL_tmpz00_11808); } 
{ /* Ieee/number.scm 852 */
bool_t BgL_test6289z00_11811;
{ /* Ieee/number.scm 852 */
obj_t BgL_nz00_5412;
if(
BIGNUMP(BgL_rz00_2135))
{ /* Ieee/number.scm 852 */
BgL_nz00_5412 = BgL_rz00_2135; }  else 
{ 
obj_t BgL_auxz00_11814;
BgL_auxz00_11814 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)31013)), BGl_string5318z00zz__r4_numbers_6_5z00, BGl_string5276z00zz__r4_numbers_6_5z00, BgL_rz00_2135); 
FAILURE(BgL_auxz00_11814,BFALSE,BFALSE);} 
BgL_test6289z00_11811 = 
BXZERO(BgL_nz00_5412); } 
if(BgL_test6289z00_11811)
{ /* Ieee/number.scm 852 */
return BgL_qz00_2134;}  else 
{ /* Ieee/number.scm 852 */
return 
DOUBLE_TO_REAL(
(
bgl_bignum_to_flonum(BgL_xz00_98)/
bgl_bignum_to_flonum(BgL_yz00_99)));} } } }  else 
{ /* Ieee/number.scm 849 */
return 
BGl_errorz00zz__errorz00(BGl_string5319z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_99);} } } } } }  else 
{ /* Ieee/number.scm 827 */
return 
BGl_errorz00zz__errorz00(BGl_string5319z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_xz00_98);} } } } } } 

}



/* &2/ */
obj_t BGl_z622zf2z90zz__r4_numbers_6_5z00(obj_t BgL_envz00_6553, obj_t BgL_xz00_6554, obj_t BgL_yz00_6555)
{
{ /* Ieee/number.scm 731 */
return 
BGl_2zf2zf2zz__r4_numbers_6_5z00(BgL_xz00_6554, BgL_yz00_6555);} 

}



/* / */
BGL_EXPORTED_DEF obj_t BGl_zf2zf2zz__r4_numbers_6_5z00(obj_t BgL_xz00_100, obj_t BgL_yz00_101)
{
{ /* Ieee/number.scm 863 */
if(
PAIRP(BgL_yz00_101))
{ /* Ieee/number.scm 865 */
obj_t BgL_g1054z00_2140;obj_t BgL_g1055z00_2141;
BgL_g1054z00_2140 = 
BGl_2zf2zf2zz__r4_numbers_6_5z00(BgL_xz00_100, 
CAR(BgL_yz00_101)); 
BgL_g1055z00_2141 = 
CDR(BgL_yz00_101); 
{ 
obj_t BgL_resultz00_5439;obj_t BgL_za7za7_5440;
BgL_resultz00_5439 = BgL_g1054z00_2140; 
BgL_za7za7_5440 = BgL_g1055z00_2141; 
BgL_loopz00_5438:
if(
PAIRP(BgL_za7za7_5440))
{ 
obj_t BgL_za7za7_11836;obj_t BgL_resultz00_11833;
BgL_resultz00_11833 = 
BGl_2zf2zf2zz__r4_numbers_6_5z00(BgL_resultz00_5439, 
CAR(BgL_za7za7_5440)); 
BgL_za7za7_11836 = 
CDR(BgL_za7za7_5440); 
BgL_za7za7_5440 = BgL_za7za7_11836; 
BgL_resultz00_5439 = BgL_resultz00_11833; 
goto BgL_loopz00_5438;}  else 
{ /* Ieee/number.scm 867 */
return BgL_resultz00_5439;} } }  else 
{ /* Ieee/number.scm 864 */
return 
BGl_2zf2zf2zz__r4_numbers_6_5z00(
BINT(((long)1)), BgL_xz00_100);} } 

}



/* &/ */
obj_t BGl_z62zf2z90zz__r4_numbers_6_5z00(obj_t BgL_envz00_6556, obj_t BgL_xz00_6557, obj_t BgL_yz00_6558)
{
{ /* Ieee/number.scm 863 */
return 
BGl_zf2zf2zz__r4_numbers_6_5z00(BgL_xz00_6557, BgL_yz00_6558);} 

}



/* abs */
BGL_EXPORTED_DEF obj_t BGl_absz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_102)
{
{ /* Ieee/number.scm 876 */
if(
INTEGERP(BgL_xz00_102))
{ /* Ieee/number.scm 878 */
if(
(
(long)CINT(BgL_xz00_102)==BGL_LONG_MIN))
{ /* Ieee/number.scm 879 */
return 
bgl_bignum_neg(
bgl_long_to_bignum(
(long)CINT(BgL_xz00_102)));}  else 
{ /* Ieee/number.scm 881 */
long BgL_nz00_5461;
BgL_nz00_5461 = 
(long)CINT(BgL_xz00_102); 
if(
(BgL_nz00_5461<((long)0)))
{ /* Ieee/number.scm 881 */
return 
BINT(
NEG(BgL_nz00_5461));}  else 
{ /* Ieee/number.scm 881 */
return 
BINT(BgL_nz00_5461);} } }  else 
{ /* Ieee/number.scm 878 */
if(
REALP(BgL_xz00_102))
{ /* Ieee/number.scm 882 */
return 
DOUBLE_TO_REAL(
fabs(
REAL_TO_DOUBLE(BgL_xz00_102)));}  else 
{ /* Ieee/number.scm 882 */
if(
ELONGP(BgL_xz00_102))
{ /* Ieee/number.scm 885 */
bool_t BgL_test6298z00_11862;
{ /* Ieee/number.scm 885 */
long BgL_n1z00_5473;
BgL_n1z00_5473 = 
BELONG_TO_LONG(BgL_xz00_102); 
BgL_test6298z00_11862 = 
(BgL_n1z00_5473==LONG_MIN); } 
if(BgL_test6298z00_11862)
{ /* Ieee/number.scm 886 */
obj_t BgL_tmpz00_11865;
{ /* Ieee/number.scm 886 */
long BgL_xz00_5476;
BgL_xz00_5476 = 
BELONG_TO_LONG(BgL_xz00_102); 
BgL_tmpz00_11865 = 
bgl_long_to_bignum(BgL_xz00_5476); } 
return 
bgl_bignum_neg(BgL_tmpz00_11865);}  else 
{ /* Ieee/number.scm 887 */
long BgL_nz00_5480;
BgL_nz00_5480 = 
BELONG_TO_LONG(BgL_xz00_102); 
if(
(BgL_nz00_5480<((long)0)))
{ /* Ieee/number.scm 887 */
long BgL_tmpz00_11872;
BgL_tmpz00_11872 = 
NEG(BgL_nz00_5480); 
return 
make_belong(BgL_tmpz00_11872);}  else 
{ /* Ieee/number.scm 887 */
return 
make_belong(BgL_nz00_5480);} } }  else 
{ /* Ieee/number.scm 884 */
if(
LLONGP(BgL_xz00_102))
{ /* Ieee/number.scm 888 */
if(
(
BLLONG_TO_LLONG(BgL_xz00_102)==BGL_LONGLONG_MIN))
{ /* Ieee/number.scm 889 */
return 
bgl_bignum_neg(
bgl_llong_to_bignum(
BLLONG_TO_LLONG(BgL_xz00_102)));}  else 
{ /* Ieee/number.scm 891 */
BGL_LONGLONG_T BgL_nz00_5497;
BgL_nz00_5497 = 
BLLONG_TO_LLONG(BgL_xz00_102); 
if(
(BgL_nz00_5497<((BGL_LONGLONG_T)0)))
{ /* Ieee/number.scm 891 */
return 
make_bllong(
NEG(BgL_nz00_5497));}  else 
{ /* Ieee/number.scm 891 */
return 
make_bllong(BgL_nz00_5497);} } }  else 
{ /* Ieee/number.scm 888 */
if(
BIGNUMP(BgL_xz00_102))
{ /* Ieee/number.scm 892 */
return 
bgl_bignum_abs(BgL_xz00_102);}  else 
{ /* Ieee/number.scm 892 */
return 
BGl_errorz00zz__errorz00(BGl_string5320z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_xz00_102);} } } } } } 

}



/* &abs */
obj_t BGl_z62absz62zz__r4_numbers_6_5z00(obj_t BgL_envz00_6559, obj_t BgL_xz00_6560)
{
{ /* Ieee/number.scm 876 */
return 
BGl_absz00zz__r4_numbers_6_5z00(BgL_xz00_6560);} 

}



/* floor */
BGL_EXPORTED_DEF obj_t BGl_floorz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_103)
{
{ /* Ieee/number.scm 900 */
if(
INTEGERP(BgL_xz00_103))
{ /* Ieee/number.scm 902 */
return BgL_xz00_103;}  else 
{ /* Ieee/number.scm 902 */
if(
REALP(BgL_xz00_103))
{ /* Ieee/number.scm 903 */
double BgL_res4422z00_5511;
{ /* Ieee/number.scm 903 */
double BgL_rz00_5510;
BgL_rz00_5510 = 
REAL_TO_DOUBLE(BgL_xz00_103); 
BgL_res4422z00_5511 = 
floor(BgL_rz00_5510); } 
return 
DOUBLE_TO_REAL(BgL_res4422z00_5511);}  else 
{ /* Ieee/number.scm 903 */
if(
ELONGP(BgL_xz00_103))
{ /* Ieee/number.scm 904 */
return BgL_xz00_103;}  else 
{ /* Ieee/number.scm 904 */
if(
LLONGP(BgL_xz00_103))
{ /* Ieee/number.scm 905 */
return BgL_xz00_103;}  else 
{ /* Ieee/number.scm 905 */
if(
BIGNUMP(BgL_xz00_103))
{ /* Ieee/number.scm 906 */
return BgL_xz00_103;}  else 
{ /* Ieee/number.scm 906 */
return 
BGl_errorz00zz__errorz00(BGl_string5321z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_xz00_103);} } } } } } 

}



/* &floor */
obj_t BGl_z62floorz62zz__r4_numbers_6_5z00(obj_t BgL_envz00_6561, obj_t BgL_xz00_6562)
{
{ /* Ieee/number.scm 900 */
return 
BGl_floorz00zz__r4_numbers_6_5z00(BgL_xz00_6562);} 

}



/* ceiling */
BGL_EXPORTED_DEF obj_t BGl_ceilingz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_104)
{
{ /* Ieee/number.scm 912 */
if(
INTEGERP(BgL_xz00_104))
{ /* Ieee/number.scm 914 */
return BgL_xz00_104;}  else 
{ /* Ieee/number.scm 914 */
if(
REALP(BgL_xz00_104))
{ /* Ieee/number.scm 915 */
double BgL_res4428z00_5518;
{ /* Ieee/number.scm 915 */
double BgL_rz00_5517;
BgL_rz00_5517 = 
REAL_TO_DOUBLE(BgL_xz00_104); 
BgL_res4428z00_5518 = 
ceil(BgL_rz00_5517); } 
return 
DOUBLE_TO_REAL(BgL_res4428z00_5518);}  else 
{ /* Ieee/number.scm 915 */
if(
ELONGP(BgL_xz00_104))
{ /* Ieee/number.scm 916 */
return BgL_xz00_104;}  else 
{ /* Ieee/number.scm 916 */
if(
LLONGP(BgL_xz00_104))
{ /* Ieee/number.scm 917 */
return BgL_xz00_104;}  else 
{ /* Ieee/number.scm 917 */
if(
BIGNUMP(BgL_xz00_104))
{ /* Ieee/number.scm 918 */
return BgL_xz00_104;}  else 
{ /* Ieee/number.scm 918 */
return 
BGl_errorz00zz__errorz00(BGl_string5322z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_xz00_104);} } } } } } 

}



/* &ceiling */
obj_t BGl_z62ceilingz62zz__r4_numbers_6_5z00(obj_t BgL_envz00_6563, obj_t BgL_xz00_6564)
{
{ /* Ieee/number.scm 912 */
return 
BGl_ceilingz00zz__r4_numbers_6_5z00(BgL_xz00_6564);} 

}



/* truncate */
BGL_EXPORTED_DEF obj_t BGl_truncatez00zz__r4_numbers_6_5z00(obj_t BgL_xz00_105)
{
{ /* Ieee/number.scm 924 */
if(
INTEGERP(BgL_xz00_105))
{ /* Ieee/number.scm 926 */
return BgL_xz00_105;}  else 
{ /* Ieee/number.scm 926 */
if(
REALP(BgL_xz00_105))
{ /* Ieee/number.scm 927 */
double BgL_res4438z00_5535;
{ /* Ieee/number.scm 927 */
double BgL_rz00_5524;
BgL_rz00_5524 = 
REAL_TO_DOUBLE(BgL_xz00_105); 
if(
(BgL_rz00_5524<((double)0.0)))
{ /* Ieee/number.scm 927 */
double BgL_res4436z00_5532;
BgL_res4436z00_5532 = 
ceil(BgL_rz00_5524); 
BgL_res4438z00_5535 = BgL_res4436z00_5532; }  else 
{ /* Ieee/number.scm 927 */
double BgL_res4437z00_5534;
BgL_res4437z00_5534 = 
floor(BgL_rz00_5524); 
BgL_res4438z00_5535 = BgL_res4437z00_5534; } } 
return 
DOUBLE_TO_REAL(BgL_res4438z00_5535);}  else 
{ /* Ieee/number.scm 927 */
if(
ELONGP(BgL_xz00_105))
{ /* Ieee/number.scm 928 */
return BgL_xz00_105;}  else 
{ /* Ieee/number.scm 928 */
if(
LLONGP(BgL_xz00_105))
{ /* Ieee/number.scm 929 */
return BgL_xz00_105;}  else 
{ /* Ieee/number.scm 929 */
return 
BGl_errorz00zz__errorz00(BGl_string5323z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_xz00_105);} } } } } 

}



/* &truncate */
obj_t BGl_z62truncatez62zz__r4_numbers_6_5z00(obj_t BgL_envz00_6565, obj_t BgL_xz00_6566)
{
{ /* Ieee/number.scm 924 */
return 
BGl_truncatez00zz__r4_numbers_6_5z00(BgL_xz00_6566);} 

}



/* round */
BGL_EXPORTED_DEF obj_t BGl_roundz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_106)
{
{ /* Ieee/number.scm 935 */
if(
INTEGERP(BgL_xz00_106))
{ /* Ieee/number.scm 937 */
return BgL_xz00_106;}  else 
{ /* Ieee/number.scm 937 */
if(
REALP(BgL_xz00_106))
{ /* Ieee/number.scm 938 */
return 
DOUBLE_TO_REAL(
BGl_roundflz00zz__r4_numbers_6_5_flonumz00(
REAL_TO_DOUBLE(BgL_xz00_106)));}  else 
{ /* Ieee/number.scm 938 */
if(
ELONGP(BgL_xz00_106))
{ /* Ieee/number.scm 939 */
return BgL_xz00_106;}  else 
{ /* Ieee/number.scm 939 */
if(
LLONGP(BgL_xz00_106))
{ /* Ieee/number.scm 940 */
return BgL_xz00_106;}  else 
{ /* Ieee/number.scm 940 */
if(
BIGNUMP(BgL_xz00_106))
{ /* Ieee/number.scm 941 */
return BgL_xz00_106;}  else 
{ /* Ieee/number.scm 941 */
return 
BGl_errorz00zz__errorz00(BGl_string5324z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_xz00_106);} } } } } } 

}



/* &round */
obj_t BGl_z62roundz62zz__r4_numbers_6_5z00(obj_t BgL_envz00_6567, obj_t BgL_xz00_6568)
{
{ /* Ieee/number.scm 935 */
return 
BGl_roundz00zz__r4_numbers_6_5z00(BgL_xz00_6568);} 

}



/* exp */
BGL_EXPORTED_DEF double BGl_expz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_107)
{
{ /* Ieee/number.scm 947 */
if(
REALP(BgL_xz00_107))
{ /* Ieee/number.scm 949 */
return 
exp(
REAL_TO_DOUBLE(BgL_xz00_107));}  else 
{ /* Ieee/number.scm 949 */
if(
INTEGERP(BgL_xz00_107))
{ /* Ieee/number.scm 950 */
return 
exp(
(double)(
(long)CINT(BgL_xz00_107)));}  else 
{ /* Ieee/number.scm 950 */
if(
ELONGP(BgL_xz00_107))
{ /* Ieee/number.scm 951 */
return 
exp(
(double)(
BELONG_TO_LONG(BgL_xz00_107)));}  else 
{ /* Ieee/number.scm 951 */
if(
LLONGP(BgL_xz00_107))
{ /* Ieee/number.scm 952 */
return 
exp(
(double)(
BLLONG_TO_LLONG(BgL_xz00_107)));}  else 
{ /* Ieee/number.scm 952 */
if(
BIGNUMP(BgL_xz00_107))
{ /* Ieee/number.scm 953 */
return 
exp(
bgl_bignum_to_flonum(BgL_xz00_107));}  else 
{ /* Ieee/number.scm 954 */
obj_t BgL_tmpz00_11979;
{ /* Ieee/number.scm 954 */
obj_t BgL_aux5195z00_6989;
BgL_aux5195z00_6989 = 
BGl_errorz00zz__errorz00(BGl_string5325z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_xz00_107); 
if(
REALP(BgL_aux5195z00_6989))
{ /* Ieee/number.scm 954 */
BgL_tmpz00_11979 = BgL_aux5195z00_6989
; }  else 
{ 
obj_t BgL_auxz00_11983;
BgL_auxz00_11983 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)34390)), BGl_string5325z00zz__r4_numbers_6_5z00, BGl_string5265z00zz__r4_numbers_6_5z00, BgL_aux5195z00_6989); 
FAILURE(BgL_auxz00_11983,BFALSE,BFALSE);} } 
return 
REAL_TO_DOUBLE(BgL_tmpz00_11979);} } } } } } 

}



/* &exp */
obj_t BGl_z62expz62zz__r4_numbers_6_5z00(obj_t BgL_envz00_6569, obj_t BgL_xz00_6570)
{
{ /* Ieee/number.scm 947 */
return 
DOUBLE_TO_REAL(
BGl_expz00zz__r4_numbers_6_5z00(BgL_xz00_6570));} 

}



/* log */
BGL_EXPORTED_DEF double BGl_logz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_108)
{
{ /* Ieee/number.scm 959 */
if(
REALP(BgL_xz00_108))
{ /* Ieee/number.scm 961 */
return 
log(
REAL_TO_DOUBLE(BgL_xz00_108));}  else 
{ /* Ieee/number.scm 961 */
if(
INTEGERP(BgL_xz00_108))
{ /* Ieee/number.scm 962 */
return 
log(
(double)(
(long)CINT(BgL_xz00_108)));}  else 
{ /* Ieee/number.scm 962 */
if(
ELONGP(BgL_xz00_108))
{ /* Ieee/number.scm 963 */
return 
log(
(double)(
BELONG_TO_LONG(BgL_xz00_108)));}  else 
{ /* Ieee/number.scm 963 */
if(
LLONGP(BgL_xz00_108))
{ /* Ieee/number.scm 964 */
return 
log(
(double)(
BLLONG_TO_LLONG(BgL_xz00_108)));}  else 
{ /* Ieee/number.scm 964 */
if(
BIGNUMP(BgL_xz00_108))
{ /* Ieee/number.scm 965 */
return 
log(
bgl_bignum_to_flonum(BgL_xz00_108));}  else 
{ /* Ieee/number.scm 966 */
obj_t BgL_tmpz00_12013;
{ /* Ieee/number.scm 966 */
obj_t BgL_aux5197z00_6991;
BgL_aux5197z00_6991 = 
BGl_errorz00zz__errorz00(BGl_string5326z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_xz00_108); 
if(
REALP(BgL_aux5197z00_6991))
{ /* Ieee/number.scm 966 */
BgL_tmpz00_12013 = BgL_aux5197z00_6991
; }  else 
{ 
obj_t BgL_auxz00_12017;
BgL_auxz00_12017 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)34902)), BGl_string5326z00zz__r4_numbers_6_5z00, BGl_string5265z00zz__r4_numbers_6_5z00, BgL_aux5197z00_6991); 
FAILURE(BgL_auxz00_12017,BFALSE,BFALSE);} } 
return 
REAL_TO_DOUBLE(BgL_tmpz00_12013);} } } } } } 

}



/* &log */
obj_t BGl_z62logz62zz__r4_numbers_6_5z00(obj_t BgL_envz00_6571, obj_t BgL_xz00_6572)
{
{ /* Ieee/number.scm 959 */
return 
DOUBLE_TO_REAL(
BGl_logz00zz__r4_numbers_6_5z00(BgL_xz00_6572));} 

}



/* sin */
BGL_EXPORTED_DEF double BGl_sinz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_109)
{
{ /* Ieee/number.scm 971 */
if(
REALP(BgL_xz00_109))
{ /* Ieee/number.scm 973 */
return 
sin(
REAL_TO_DOUBLE(BgL_xz00_109));}  else 
{ /* Ieee/number.scm 973 */
if(
INTEGERP(BgL_xz00_109))
{ /* Ieee/number.scm 974 */
return 
sin(
(double)(
(long)CINT(BgL_xz00_109)));}  else 
{ /* Ieee/number.scm 974 */
if(
ELONGP(BgL_xz00_109))
{ /* Ieee/number.scm 975 */
return 
sin(
(double)(
BELONG_TO_LONG(BgL_xz00_109)));}  else 
{ /* Ieee/number.scm 975 */
if(
LLONGP(BgL_xz00_109))
{ /* Ieee/number.scm 976 */
return 
sin(
(double)(
BLLONG_TO_LLONG(BgL_xz00_109)));}  else 
{ /* Ieee/number.scm 976 */
if(
BIGNUMP(BgL_xz00_109))
{ /* Ieee/number.scm 977 */
return 
sin(
bgl_bignum_to_flonum(BgL_xz00_109));}  else 
{ /* Ieee/number.scm 978 */
obj_t BgL_tmpz00_12047;
{ /* Ieee/number.scm 978 */
obj_t BgL_aux5199z00_6993;
BgL_aux5199z00_6993 = 
BGl_errorz00zz__errorz00(BGl_string5327z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_xz00_109); 
if(
REALP(BgL_aux5199z00_6993))
{ /* Ieee/number.scm 978 */
BgL_tmpz00_12047 = BgL_aux5199z00_6993
; }  else 
{ 
obj_t BgL_auxz00_12051;
BgL_auxz00_12051 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)35413)), BGl_string5327z00zz__r4_numbers_6_5z00, BGl_string5265z00zz__r4_numbers_6_5z00, BgL_aux5199z00_6993); 
FAILURE(BgL_auxz00_12051,BFALSE,BFALSE);} } 
return 
REAL_TO_DOUBLE(BgL_tmpz00_12047);} } } } } } 

}



/* &sin */
obj_t BGl_z62sinz62zz__r4_numbers_6_5z00(obj_t BgL_envz00_6573, obj_t BgL_xz00_6574)
{
{ /* Ieee/number.scm 971 */
return 
DOUBLE_TO_REAL(
BGl_sinz00zz__r4_numbers_6_5z00(BgL_xz00_6574));} 

}



/* cos */
BGL_EXPORTED_DEF double BGl_cosz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_110)
{
{ /* Ieee/number.scm 983 */
if(
REALP(BgL_xz00_110))
{ /* Ieee/number.scm 985 */
return 
cos(
REAL_TO_DOUBLE(BgL_xz00_110));}  else 
{ /* Ieee/number.scm 985 */
if(
INTEGERP(BgL_xz00_110))
{ /* Ieee/number.scm 986 */
return 
cos(
(double)(
(long)CINT(BgL_xz00_110)));}  else 
{ /* Ieee/number.scm 986 */
if(
ELONGP(BgL_xz00_110))
{ /* Ieee/number.scm 987 */
return 
cos(
(double)(
BELONG_TO_LONG(BgL_xz00_110)));}  else 
{ /* Ieee/number.scm 987 */
if(
LLONGP(BgL_xz00_110))
{ /* Ieee/number.scm 988 */
return 
cos(
(double)(
BLLONG_TO_LLONG(BgL_xz00_110)));}  else 
{ /* Ieee/number.scm 988 */
if(
BIGNUMP(BgL_xz00_110))
{ /* Ieee/number.scm 989 */
return 
cos(
bgl_bignum_to_flonum(BgL_xz00_110));}  else 
{ /* Ieee/number.scm 990 */
obj_t BgL_tmpz00_12081;
{ /* Ieee/number.scm 990 */
obj_t BgL_aux5201z00_6995;
BgL_aux5201z00_6995 = 
BGl_errorz00zz__errorz00(BGl_string5328z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_xz00_110); 
if(
REALP(BgL_aux5201z00_6995))
{ /* Ieee/number.scm 990 */
BgL_tmpz00_12081 = BgL_aux5201z00_6995
; }  else 
{ 
obj_t BgL_auxz00_12085;
BgL_auxz00_12085 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)35924)), BGl_string5328z00zz__r4_numbers_6_5z00, BGl_string5265z00zz__r4_numbers_6_5z00, BgL_aux5201z00_6995); 
FAILURE(BgL_auxz00_12085,BFALSE,BFALSE);} } 
return 
REAL_TO_DOUBLE(BgL_tmpz00_12081);} } } } } } 

}



/* &cos */
obj_t BGl_z62cosz62zz__r4_numbers_6_5z00(obj_t BgL_envz00_6575, obj_t BgL_xz00_6576)
{
{ /* Ieee/number.scm 983 */
return 
DOUBLE_TO_REAL(
BGl_cosz00zz__r4_numbers_6_5z00(BgL_xz00_6576));} 

}



/* tan */
BGL_EXPORTED_DEF double BGl_tanz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_111)
{
{ /* Ieee/number.scm 995 */
if(
REALP(BgL_xz00_111))
{ /* Ieee/number.scm 997 */
return 
tan(
REAL_TO_DOUBLE(BgL_xz00_111));}  else 
{ /* Ieee/number.scm 997 */
if(
INTEGERP(BgL_xz00_111))
{ /* Ieee/number.scm 998 */
return 
tan(
(double)(
(long)CINT(BgL_xz00_111)));}  else 
{ /* Ieee/number.scm 998 */
if(
ELONGP(BgL_xz00_111))
{ /* Ieee/number.scm 999 */
return 
tan(
(double)(
BELONG_TO_LONG(BgL_xz00_111)));}  else 
{ /* Ieee/number.scm 999 */
if(
LLONGP(BgL_xz00_111))
{ /* Ieee/number.scm 1000 */
return 
tan(
(double)(
BLLONG_TO_LLONG(BgL_xz00_111)));}  else 
{ /* Ieee/number.scm 1000 */
if(
BIGNUMP(BgL_xz00_111))
{ /* Ieee/number.scm 1001 */
return 
tan(
bgl_bignum_to_flonum(BgL_xz00_111));}  else 
{ /* Ieee/number.scm 1002 */
obj_t BgL_tmpz00_12115;
{ /* Ieee/number.scm 1002 */
obj_t BgL_aux5203z00_6997;
BgL_aux5203z00_6997 = 
BGl_errorz00zz__errorz00(BGl_string5329z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_xz00_111); 
if(
REALP(BgL_aux5203z00_6997))
{ /* Ieee/number.scm 1002 */
BgL_tmpz00_12115 = BgL_aux5203z00_6997
; }  else 
{ 
obj_t BgL_auxz00_12119;
BgL_auxz00_12119 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)36435)), BGl_string5329z00zz__r4_numbers_6_5z00, BGl_string5265z00zz__r4_numbers_6_5z00, BgL_aux5203z00_6997); 
FAILURE(BgL_auxz00_12119,BFALSE,BFALSE);} } 
return 
REAL_TO_DOUBLE(BgL_tmpz00_12115);} } } } } } 

}



/* &tan */
obj_t BGl_z62tanz62zz__r4_numbers_6_5z00(obj_t BgL_envz00_6577, obj_t BgL_xz00_6578)
{
{ /* Ieee/number.scm 995 */
return 
DOUBLE_TO_REAL(
BGl_tanz00zz__r4_numbers_6_5z00(BgL_xz00_6578));} 

}



/* asin */
BGL_EXPORTED_DEF double BGl_asinz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_112)
{
{ /* Ieee/number.scm 1007 */
if(
REALP(BgL_xz00_112))
{ /* Ieee/number.scm 1009 */
return 
asin(
REAL_TO_DOUBLE(BgL_xz00_112));}  else 
{ /* Ieee/number.scm 1009 */
if(
INTEGERP(BgL_xz00_112))
{ /* Ieee/number.scm 1010 */
return 
asin(
(double)(
(long)CINT(BgL_xz00_112)));}  else 
{ /* Ieee/number.scm 1010 */
if(
ELONGP(BgL_xz00_112))
{ /* Ieee/number.scm 1011 */
return 
asin(
(double)(
BELONG_TO_LONG(BgL_xz00_112)));}  else 
{ /* Ieee/number.scm 1011 */
if(
LLONGP(BgL_xz00_112))
{ /* Ieee/number.scm 1012 */
return 
asin(
(double)(
BLLONG_TO_LLONG(BgL_xz00_112)));}  else 
{ /* Ieee/number.scm 1012 */
if(
BIGNUMP(BgL_xz00_112))
{ /* Ieee/number.scm 1013 */
return 
asin(
bgl_bignum_to_flonum(BgL_xz00_112));}  else 
{ /* Ieee/number.scm 1014 */
obj_t BgL_tmpz00_12149;
{ /* Ieee/number.scm 1014 */
obj_t BgL_aux5205z00_6999;
BgL_aux5205z00_6999 = 
BGl_errorz00zz__errorz00(BGl_string5330z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_xz00_112); 
if(
REALP(BgL_aux5205z00_6999))
{ /* Ieee/number.scm 1014 */
BgL_tmpz00_12149 = BgL_aux5205z00_6999
; }  else 
{ 
obj_t BgL_auxz00_12153;
BgL_auxz00_12153 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)36952)), BGl_string5330z00zz__r4_numbers_6_5z00, BGl_string5265z00zz__r4_numbers_6_5z00, BgL_aux5205z00_6999); 
FAILURE(BgL_auxz00_12153,BFALSE,BFALSE);} } 
return 
REAL_TO_DOUBLE(BgL_tmpz00_12149);} } } } } } 

}



/* &asin */
obj_t BGl_z62asinz62zz__r4_numbers_6_5z00(obj_t BgL_envz00_6579, obj_t BgL_xz00_6580)
{
{ /* Ieee/number.scm 1007 */
return 
DOUBLE_TO_REAL(
BGl_asinz00zz__r4_numbers_6_5z00(BgL_xz00_6580));} 

}



/* acos */
BGL_EXPORTED_DEF double BGl_acosz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_113)
{
{ /* Ieee/number.scm 1019 */
if(
REALP(BgL_xz00_113))
{ /* Ieee/number.scm 1021 */
return 
acos(
REAL_TO_DOUBLE(BgL_xz00_113));}  else 
{ /* Ieee/number.scm 1021 */
if(
INTEGERP(BgL_xz00_113))
{ /* Ieee/number.scm 1022 */
return 
acos(
(double)(
(long)CINT(BgL_xz00_113)));}  else 
{ /* Ieee/number.scm 1022 */
if(
ELONGP(BgL_xz00_113))
{ /* Ieee/number.scm 1023 */
return 
acos(
(double)(
BELONG_TO_LONG(BgL_xz00_113)));}  else 
{ /* Ieee/number.scm 1023 */
if(
LLONGP(BgL_xz00_113))
{ /* Ieee/number.scm 1024 */
return 
acos(
(double)(
BLLONG_TO_LLONG(BgL_xz00_113)));}  else 
{ /* Ieee/number.scm 1024 */
if(
BIGNUMP(BgL_xz00_113))
{ /* Ieee/number.scm 1025 */
return 
acos(
bgl_bignum_to_flonum(BgL_xz00_113));}  else 
{ /* Ieee/number.scm 1026 */
obj_t BgL_tmpz00_12183;
{ /* Ieee/number.scm 1026 */
obj_t BgL_aux5207z00_7001;
BgL_aux5207z00_7001 = 
BGl_errorz00zz__errorz00(BGl_string5331z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_xz00_113); 
if(
REALP(BgL_aux5207z00_7001))
{ /* Ieee/number.scm 1026 */
BgL_tmpz00_12183 = BgL_aux5207z00_7001
; }  else 
{ 
obj_t BgL_auxz00_12187;
BgL_auxz00_12187 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)37470)), BGl_string5331z00zz__r4_numbers_6_5z00, BGl_string5265z00zz__r4_numbers_6_5z00, BgL_aux5207z00_7001); 
FAILURE(BgL_auxz00_12187,BFALSE,BFALSE);} } 
return 
REAL_TO_DOUBLE(BgL_tmpz00_12183);} } } } } } 

}



/* &acos */
obj_t BGl_z62acosz62zz__r4_numbers_6_5z00(obj_t BgL_envz00_6581, obj_t BgL_xz00_6582)
{
{ /* Ieee/number.scm 1019 */
return 
DOUBLE_TO_REAL(
BGl_acosz00zz__r4_numbers_6_5z00(BgL_xz00_6582));} 

}



/* atan */
BGL_EXPORTED_DEF double BGl_atanz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_114, obj_t BgL_yz00_115)
{
{ /* Ieee/number.scm 1031 */
{ /* Ieee/number.scm 1032 */
obj_t BgL_yz00_2251;
if(
PAIRP(BgL_yz00_115))
{ /* Ieee/number.scm 1033 */
obj_t BgL_yz00_2267;
BgL_yz00_2267 = 
CAR(BgL_yz00_115); 
if(
INTEGERP(BgL_yz00_2267))
{ /* Ieee/number.scm 1035 */
BgL_yz00_2251 = 
DOUBLE_TO_REAL(
(double)(
(long)CINT(BgL_yz00_2267))); }  else 
{ /* Ieee/number.scm 1035 */
if(
REALP(BgL_yz00_2267))
{ /* Ieee/number.scm 1036 */
BgL_yz00_2251 = BgL_yz00_2267; }  else 
{ /* Ieee/number.scm 1036 */
BgL_yz00_2251 = 
BGl_errorz00zz__errorz00(BGl_string5332z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_2267); } } }  else 
{ /* Ieee/number.scm 1032 */
BgL_yz00_2251 = BFALSE; } 
if(
REALP(BgL_xz00_114))
{ /* Ieee/number.scm 1044 */
if(
BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_yz00_2251))
{ /* Ieee/number.scm 1041 */
double BgL_res4532z00_5696;
{ /* Ieee/number.scm 1041 */
double BgL_xz00_5683;double BgL_yz00_5684;
BgL_xz00_5683 = 
REAL_TO_DOUBLE(BgL_xz00_114); 
{ /* Ieee/number.scm 1041 */
obj_t BgL_tmpz00_12210;
if(
REALP(BgL_yz00_2251))
{ /* Ieee/number.scm 1041 */
BgL_tmpz00_12210 = BgL_yz00_2251
; }  else 
{ 
obj_t BgL_auxz00_12213;
BgL_auxz00_12213 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)37983)), BGl_string5332z00zz__r4_numbers_6_5z00, BGl_string5265z00zz__r4_numbers_6_5z00, BgL_yz00_2251); 
FAILURE(BgL_auxz00_12213,BFALSE,BFALSE);} 
BgL_yz00_5684 = 
REAL_TO_DOUBLE(BgL_tmpz00_12210); } 
{ /* Ieee/number.scm 1041 */
bool_t BgL_test6372z00_12218;
if(
(BgL_xz00_5683==((double)0.0)))
{ /* Ieee/number.scm 1041 */
BgL_test6372z00_12218 = 
(BgL_yz00_5684==((double)0.0))
; }  else 
{ /* Ieee/number.scm 1041 */
BgL_test6372z00_12218 = ((bool_t)0)
; } 
if(BgL_test6372z00_12218)
{ /* Ieee/number.scm 1041 */
obj_t BgL_procz00_5687;obj_t BgL_msgz00_5688;obj_t BgL_objz00_5689;
BgL_procz00_5687 = 
string_to_bstring(
BSTRING_TO_STRING(BGl_string5333z00zz__r4_numbers_6_5z00)); 
BgL_msgz00_5688 = 
string_to_bstring(
BSTRING_TO_STRING(BGl_string5334z00zz__r4_numbers_6_5z00)); 
BgL_objz00_5689 = BGL_REAL_CNST( BGl_real5335z00zz__r4_numbers_6_5z00); 
the_failure(BgL_procz00_5687, BgL_msgz00_5688, BgL_objz00_5689); 
BgL_res4532z00_5696 = ((double)0.0); }  else 
{ /* Ieee/number.scm 1041 */
BgL_res4532z00_5696 = 
atan2(BgL_xz00_5683, BgL_yz00_5684); } } } 
return BgL_res4532z00_5696;}  else 
{ /* Ieee/number.scm 1040 */
return 
atan(
REAL_TO_DOUBLE(BgL_xz00_114));} }  else 
{ /* Ieee/number.scm 1044 */
if(
INTEGERP(BgL_xz00_114))
{ /* Ieee/number.scm 1045 */
double BgL_arg2620z00_2255;
BgL_arg2620z00_2255 = 
(double)(
(long)CINT(BgL_xz00_114)); 
if(
BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_yz00_2251))
{ /* Ieee/number.scm 1041 */
double BgL_res4537z00_5714;
{ /* Ieee/number.scm 1041 */
double BgL_yz00_5702;
{ /* Ieee/number.scm 1041 */
obj_t BgL_tmpz00_12236;
if(
REALP(BgL_yz00_2251))
{ /* Ieee/number.scm 1041 */
BgL_tmpz00_12236 = BgL_yz00_2251
; }  else 
{ 
obj_t BgL_auxz00_12239;
BgL_auxz00_12239 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)37983)), BGl_string5332z00zz__r4_numbers_6_5z00, BGl_string5265z00zz__r4_numbers_6_5z00, BgL_yz00_2251); 
FAILURE(BgL_auxz00_12239,BFALSE,BFALSE);} 
BgL_yz00_5702 = 
REAL_TO_DOUBLE(BgL_tmpz00_12236); } 
{ /* Ieee/number.scm 1041 */
bool_t BgL_test6377z00_12244;
if(
(BgL_arg2620z00_2255==((double)0.0)))
{ /* Ieee/number.scm 1041 */
BgL_test6377z00_12244 = 
(BgL_yz00_5702==((double)0.0))
; }  else 
{ /* Ieee/number.scm 1041 */
BgL_test6377z00_12244 = ((bool_t)0)
; } 
if(BgL_test6377z00_12244)
{ /* Ieee/number.scm 1041 */
obj_t BgL_procz00_5705;obj_t BgL_msgz00_5706;obj_t BgL_objz00_5707;
BgL_procz00_5705 = 
string_to_bstring(
BSTRING_TO_STRING(BGl_string5333z00zz__r4_numbers_6_5z00)); 
BgL_msgz00_5706 = 
string_to_bstring(
BSTRING_TO_STRING(BGl_string5334z00zz__r4_numbers_6_5z00)); 
BgL_objz00_5707 = BGL_REAL_CNST( BGl_real5335z00zz__r4_numbers_6_5z00); 
the_failure(BgL_procz00_5705, BgL_msgz00_5706, BgL_objz00_5707); 
BgL_res4537z00_5714 = ((double)0.0); }  else 
{ /* Ieee/number.scm 1041 */
BgL_res4537z00_5714 = 
atan2(BgL_arg2620z00_2255, BgL_yz00_5702); } } } 
return BgL_res4537z00_5714;}  else 
{ /* Ieee/number.scm 1040 */
return 
atan(BgL_arg2620z00_2255);} }  else 
{ /* Ieee/number.scm 1045 */
if(
ELONGP(BgL_xz00_114))
{ /* Ieee/number.scm 1046 */
double BgL_arg2622z00_2257;
BgL_arg2622z00_2257 = 
(double)(
BELONG_TO_LONG(BgL_xz00_114)); 
if(
BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_yz00_2251))
{ /* Ieee/number.scm 1041 */
double BgL_res4542z00_5732;
{ /* Ieee/number.scm 1041 */
double BgL_yz00_5720;
{ /* Ieee/number.scm 1041 */
obj_t BgL_tmpz00_12261;
if(
REALP(BgL_yz00_2251))
{ /* Ieee/number.scm 1041 */
BgL_tmpz00_12261 = BgL_yz00_2251
; }  else 
{ 
obj_t BgL_auxz00_12264;
BgL_auxz00_12264 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)37983)), BGl_string5332z00zz__r4_numbers_6_5z00, BGl_string5265z00zz__r4_numbers_6_5z00, BgL_yz00_2251); 
FAILURE(BgL_auxz00_12264,BFALSE,BFALSE);} 
BgL_yz00_5720 = 
REAL_TO_DOUBLE(BgL_tmpz00_12261); } 
{ /* Ieee/number.scm 1041 */
bool_t BgL_test6382z00_12269;
if(
(BgL_arg2622z00_2257==((double)0.0)))
{ /* Ieee/number.scm 1041 */
BgL_test6382z00_12269 = 
(BgL_yz00_5720==((double)0.0))
; }  else 
{ /* Ieee/number.scm 1041 */
BgL_test6382z00_12269 = ((bool_t)0)
; } 
if(BgL_test6382z00_12269)
{ /* Ieee/number.scm 1041 */
obj_t BgL_procz00_5723;obj_t BgL_msgz00_5724;obj_t BgL_objz00_5725;
BgL_procz00_5723 = 
string_to_bstring(
BSTRING_TO_STRING(BGl_string5333z00zz__r4_numbers_6_5z00)); 
BgL_msgz00_5724 = 
string_to_bstring(
BSTRING_TO_STRING(BGl_string5334z00zz__r4_numbers_6_5z00)); 
BgL_objz00_5725 = BGL_REAL_CNST( BGl_real5335z00zz__r4_numbers_6_5z00); 
the_failure(BgL_procz00_5723, BgL_msgz00_5724, BgL_objz00_5725); 
BgL_res4542z00_5732 = ((double)0.0); }  else 
{ /* Ieee/number.scm 1041 */
BgL_res4542z00_5732 = 
atan2(BgL_arg2622z00_2257, BgL_yz00_5720); } } } 
return BgL_res4542z00_5732;}  else 
{ /* Ieee/number.scm 1040 */
return 
atan(BgL_arg2622z00_2257);} }  else 
{ /* Ieee/number.scm 1046 */
if(
LLONGP(BgL_xz00_114))
{ /* Ieee/number.scm 1047 */
double BgL_arg2624z00_2259;
BgL_arg2624z00_2259 = 
(double)(
BLLONG_TO_LLONG(BgL_xz00_114)); 
if(
BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_yz00_2251))
{ /* Ieee/number.scm 1041 */
double BgL_res4547z00_5750;
{ /* Ieee/number.scm 1041 */
double BgL_yz00_5738;
{ /* Ieee/number.scm 1041 */
obj_t BgL_tmpz00_12286;
if(
REALP(BgL_yz00_2251))
{ /* Ieee/number.scm 1041 */
BgL_tmpz00_12286 = BgL_yz00_2251
; }  else 
{ 
obj_t BgL_auxz00_12289;
BgL_auxz00_12289 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)37983)), BGl_string5332z00zz__r4_numbers_6_5z00, BGl_string5265z00zz__r4_numbers_6_5z00, BgL_yz00_2251); 
FAILURE(BgL_auxz00_12289,BFALSE,BFALSE);} 
BgL_yz00_5738 = 
REAL_TO_DOUBLE(BgL_tmpz00_12286); } 
{ /* Ieee/number.scm 1041 */
bool_t BgL_test6387z00_12294;
if(
(BgL_arg2624z00_2259==((double)0.0)))
{ /* Ieee/number.scm 1041 */
BgL_test6387z00_12294 = 
(BgL_yz00_5738==((double)0.0))
; }  else 
{ /* Ieee/number.scm 1041 */
BgL_test6387z00_12294 = ((bool_t)0)
; } 
if(BgL_test6387z00_12294)
{ /* Ieee/number.scm 1041 */
obj_t BgL_procz00_5741;obj_t BgL_msgz00_5742;obj_t BgL_objz00_5743;
BgL_procz00_5741 = 
string_to_bstring(
BSTRING_TO_STRING(BGl_string5333z00zz__r4_numbers_6_5z00)); 
BgL_msgz00_5742 = 
string_to_bstring(
BSTRING_TO_STRING(BGl_string5334z00zz__r4_numbers_6_5z00)); 
BgL_objz00_5743 = BGL_REAL_CNST( BGl_real5335z00zz__r4_numbers_6_5z00); 
the_failure(BgL_procz00_5741, BgL_msgz00_5742, BgL_objz00_5743); 
BgL_res4547z00_5750 = ((double)0.0); }  else 
{ /* Ieee/number.scm 1041 */
BgL_res4547z00_5750 = 
atan2(BgL_arg2624z00_2259, BgL_yz00_5738); } } } 
return BgL_res4547z00_5750;}  else 
{ /* Ieee/number.scm 1040 */
return 
atan(BgL_arg2624z00_2259);} }  else 
{ /* Ieee/number.scm 1047 */
if(
BIGNUMP(BgL_xz00_114))
{ /* Ieee/number.scm 1048 */
double BgL_arg2626z00_2261;
BgL_arg2626z00_2261 = 
bgl_bignum_to_flonum(BgL_xz00_114); 
if(
BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_yz00_2251))
{ /* Ieee/number.scm 1041 */
double BgL_res4553z00_5770;
{ /* Ieee/number.scm 1041 */
double BgL_yz00_5758;
{ /* Ieee/number.scm 1041 */
obj_t BgL_tmpz00_12310;
if(
REALP(BgL_yz00_2251))
{ /* Ieee/number.scm 1041 */
BgL_tmpz00_12310 = BgL_yz00_2251
; }  else 
{ 
obj_t BgL_auxz00_12313;
BgL_auxz00_12313 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)37983)), BGl_string5332z00zz__r4_numbers_6_5z00, BGl_string5265z00zz__r4_numbers_6_5z00, BgL_yz00_2251); 
FAILURE(BgL_auxz00_12313,BFALSE,BFALSE);} 
BgL_yz00_5758 = 
REAL_TO_DOUBLE(BgL_tmpz00_12310); } 
{ /* Ieee/number.scm 1041 */
bool_t BgL_test6392z00_12318;
if(
(BgL_arg2626z00_2261==((double)0.0)))
{ /* Ieee/number.scm 1041 */
BgL_test6392z00_12318 = 
(BgL_yz00_5758==((double)0.0))
; }  else 
{ /* Ieee/number.scm 1041 */
BgL_test6392z00_12318 = ((bool_t)0)
; } 
if(BgL_test6392z00_12318)
{ /* Ieee/number.scm 1041 */
obj_t BgL_procz00_5761;obj_t BgL_msgz00_5762;obj_t BgL_objz00_5763;
BgL_procz00_5761 = 
string_to_bstring(
BSTRING_TO_STRING(BGl_string5333z00zz__r4_numbers_6_5z00)); 
BgL_msgz00_5762 = 
string_to_bstring(
BSTRING_TO_STRING(BGl_string5334z00zz__r4_numbers_6_5z00)); 
BgL_objz00_5763 = BGL_REAL_CNST( BGl_real5335z00zz__r4_numbers_6_5z00); 
the_failure(BgL_procz00_5761, BgL_msgz00_5762, BgL_objz00_5763); 
BgL_res4553z00_5770 = ((double)0.0); }  else 
{ /* Ieee/number.scm 1041 */
BgL_res4553z00_5770 = 
atan2(BgL_arg2626z00_2261, BgL_yz00_5758); } } } 
return BgL_res4553z00_5770;}  else 
{ /* Ieee/number.scm 1040 */
return 
atan(BgL_arg2626z00_2261);} }  else 
{ /* Ieee/number.scm 1049 */
obj_t BgL_tmpz00_12329;
{ /* Ieee/number.scm 1049 */
obj_t BgL_aux5219z00_7013;
BgL_aux5219z00_7013 = 
BGl_errorz00zz__errorz00(BGl_string5332z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_xz00_114); 
if(
REALP(BgL_aux5219z00_7013))
{ /* Ieee/number.scm 1049 */
BgL_tmpz00_12329 = BgL_aux5219z00_7013
; }  else 
{ 
obj_t BgL_auxz00_12333;
BgL_auxz00_12333 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)38252)), BGl_string5332z00zz__r4_numbers_6_5z00, BGl_string5265z00zz__r4_numbers_6_5z00, BgL_aux5219z00_7013); 
FAILURE(BgL_auxz00_12333,BFALSE,BFALSE);} } 
return 
REAL_TO_DOUBLE(BgL_tmpz00_12329);} } } } } } } 

}



/* &atan */
obj_t BGl_z62atanz62zz__r4_numbers_6_5z00(obj_t BgL_envz00_6583, obj_t BgL_xz00_6584, obj_t BgL_yz00_6585)
{
{ /* Ieee/number.scm 1031 */
return 
DOUBLE_TO_REAL(
BGl_atanz00zz__r4_numbers_6_5z00(BgL_xz00_6584, BgL_yz00_6585));} 

}



/* sqrt */
BGL_EXPORTED_DEF double BGl_sqrtz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_116)
{
{ /* Ieee/number.scm 1054 */
if(
INTEGERP(BgL_xz00_116))
{ /* Ieee/number.scm 1056 */
double BgL_arg2633z00_2271;
BgL_arg2633z00_2271 = 
(double)(
(long)CINT(BgL_xz00_116)); 
{ /* Ieee/number.scm 1056 */
double BgL_res4557z00_5782;
if(
(BgL_arg2633z00_2271<((double)0.0)))
{ /* Ieee/number.scm 1056 */
obj_t BgL_procz00_5776;obj_t BgL_msgz00_5777;obj_t BgL_objz00_5778;
BgL_procz00_5776 = 
string_to_bstring(
BSTRING_TO_STRING(BGl_string5336z00zz__r4_numbers_6_5z00)); 
BgL_msgz00_5777 = 
string_to_bstring(
BSTRING_TO_STRING(BGl_string5334z00zz__r4_numbers_6_5z00)); 
BgL_objz00_5778 = 
DOUBLE_TO_REAL(BgL_arg2633z00_2271); 
BGl_errorz00zz__errorz00(BgL_procz00_5776, BgL_msgz00_5777, BgL_objz00_5778); 
BgL_res4557z00_5782 = ((double)0.0); }  else 
{ /* Ieee/number.scm 1056 */
BgL_res4557z00_5782 = 
sqrt(BgL_arg2633z00_2271); } 
return BgL_res4557z00_5782;} }  else 
{ /* Ieee/number.scm 1056 */
if(
REALP(BgL_xz00_116))
{ /* Ieee/number.scm 1057 */
double BgL_res4560z00_5792;
{ /* Ieee/number.scm 1057 */
double BgL_rz00_5784;
BgL_rz00_5784 = 
REAL_TO_DOUBLE(BgL_xz00_116); 
if(
(BgL_rz00_5784<((double)0.0)))
{ /* Ieee/number.scm 1057 */
obj_t BgL_procz00_5786;obj_t BgL_msgz00_5787;obj_t BgL_objz00_5788;
BgL_procz00_5786 = 
string_to_bstring(
BSTRING_TO_STRING(BGl_string5336z00zz__r4_numbers_6_5z00)); 
BgL_msgz00_5787 = 
string_to_bstring(
BSTRING_TO_STRING(BGl_string5334z00zz__r4_numbers_6_5z00)); 
BgL_objz00_5788 = 
DOUBLE_TO_REAL(BgL_rz00_5784); 
BGl_errorz00zz__errorz00(BgL_procz00_5786, BgL_msgz00_5787, BgL_objz00_5788); 
BgL_res4560z00_5792 = ((double)0.0); }  else 
{ /* Ieee/number.scm 1057 */
BgL_res4560z00_5792 = 
sqrt(BgL_rz00_5784); } } 
return BgL_res4560z00_5792;}  else 
{ /* Ieee/number.scm 1057 */
if(
ELONGP(BgL_xz00_116))
{ /* Ieee/number.scm 1058 */
double BgL_arg2636z00_2274;
BgL_arg2636z00_2274 = 
(double)(
BELONG_TO_LONG(BgL_xz00_116)); 
{ /* Ieee/number.scm 1058 */
double BgL_res4563z00_5802;
if(
(BgL_arg2636z00_2274<((double)0.0)))
{ /* Ieee/number.scm 1058 */
obj_t BgL_procz00_5796;obj_t BgL_msgz00_5797;obj_t BgL_objz00_5798;
BgL_procz00_5796 = 
string_to_bstring(
BSTRING_TO_STRING(BGl_string5336z00zz__r4_numbers_6_5z00)); 
BgL_msgz00_5797 = 
string_to_bstring(
BSTRING_TO_STRING(BGl_string5334z00zz__r4_numbers_6_5z00)); 
BgL_objz00_5798 = 
DOUBLE_TO_REAL(BgL_arg2636z00_2274); 
BGl_errorz00zz__errorz00(BgL_procz00_5796, BgL_msgz00_5797, BgL_objz00_5798); 
BgL_res4563z00_5802 = ((double)0.0); }  else 
{ /* Ieee/number.scm 1058 */
BgL_res4563z00_5802 = 
sqrt(BgL_arg2636z00_2274); } 
return BgL_res4563z00_5802;} }  else 
{ /* Ieee/number.scm 1058 */
if(
LLONGP(BgL_xz00_116))
{ /* Ieee/number.scm 1059 */
double BgL_arg2638z00_2276;
BgL_arg2638z00_2276 = 
(double)(
BLLONG_TO_LLONG(BgL_xz00_116)); 
{ /* Ieee/number.scm 1059 */
double BgL_res4566z00_5812;
if(
(BgL_arg2638z00_2276<((double)0.0)))
{ /* Ieee/number.scm 1059 */
obj_t BgL_procz00_5806;obj_t BgL_msgz00_5807;obj_t BgL_objz00_5808;
BgL_procz00_5806 = 
string_to_bstring(
BSTRING_TO_STRING(BGl_string5336z00zz__r4_numbers_6_5z00)); 
BgL_msgz00_5807 = 
string_to_bstring(
BSTRING_TO_STRING(BGl_string5334z00zz__r4_numbers_6_5z00)); 
BgL_objz00_5808 = 
DOUBLE_TO_REAL(BgL_arg2638z00_2276); 
BGl_errorz00zz__errorz00(BgL_procz00_5806, BgL_msgz00_5807, BgL_objz00_5808); 
BgL_res4566z00_5812 = ((double)0.0); }  else 
{ /* Ieee/number.scm 1059 */
BgL_res4566z00_5812 = 
sqrt(BgL_arg2638z00_2276); } 
return BgL_res4566z00_5812;} }  else 
{ /* Ieee/number.scm 1059 */
if(
BIGNUMP(BgL_xz00_116))
{ /* Ieee/number.scm 1060 */
double BgL_arg2640z00_2278;
BgL_arg2640z00_2278 = 
bgl_bignum_to_flonum(BgL_xz00_116); 
{ /* Ieee/number.scm 1060 */
double BgL_res4570z00_5824;
if(
(BgL_arg2640z00_2278<((double)0.0)))
{ /* Ieee/number.scm 1060 */
obj_t BgL_procz00_5818;obj_t BgL_msgz00_5819;obj_t BgL_objz00_5820;
BgL_procz00_5818 = 
string_to_bstring(
BSTRING_TO_STRING(BGl_string5336z00zz__r4_numbers_6_5z00)); 
BgL_msgz00_5819 = 
string_to_bstring(
BSTRING_TO_STRING(BGl_string5334z00zz__r4_numbers_6_5z00)); 
BgL_objz00_5820 = 
DOUBLE_TO_REAL(BgL_arg2640z00_2278); 
BGl_errorz00zz__errorz00(BgL_procz00_5818, BgL_msgz00_5819, BgL_objz00_5820); 
BgL_res4570z00_5824 = ((double)0.0); }  else 
{ /* Ieee/number.scm 1060 */
BgL_res4570z00_5824 = 
sqrt(BgL_arg2640z00_2278); } 
return BgL_res4570z00_5824;} }  else 
{ /* Ieee/number.scm 1061 */
obj_t BgL_tmpz00_12403;
{ /* Ieee/number.scm 1061 */
obj_t BgL_aux5221z00_7015;
BgL_aux5221z00_7015 = 
BGl_errorz00zz__errorz00(BGl_string5337z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_xz00_116); 
if(
REALP(BgL_aux5221z00_7015))
{ /* Ieee/number.scm 1061 */
BgL_tmpz00_12403 = BgL_aux5221z00_7015
; }  else 
{ 
obj_t BgL_auxz00_12407;
BgL_auxz00_12407 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)38771)), BGl_string5337z00zz__r4_numbers_6_5z00, BGl_string5265z00zz__r4_numbers_6_5z00, BgL_aux5221z00_7015); 
FAILURE(BgL_auxz00_12407,BFALSE,BFALSE);} } 
return 
REAL_TO_DOUBLE(BgL_tmpz00_12403);} } } } } } 

}



/* &sqrt */
obj_t BGl_z62sqrtz62zz__r4_numbers_6_5z00(obj_t BgL_envz00_6586, obj_t BgL_xz00_6587)
{
{ /* Ieee/number.scm 1054 */
return 
DOUBLE_TO_REAL(
BGl_sqrtz00zz__r4_numbers_6_5z00(BgL_xz00_6587));} 

}



/* expt */
BGL_EXPORTED_DEF obj_t BGl_exptz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_117, obj_t BgL_yz00_118)
{
{ /* Ieee/number.scm 1066 */
{ /* Ieee/number.scm 1068 */
bool_t BgL_test6406z00_12414;
if(
REALP(BgL_xz00_117))
{ /* Ieee/number.scm 1068 */
if(
REALP(BgL_yz00_118))
{ /* Ieee/number.scm 1068 */
if(
(
REAL_TO_DOUBLE(BgL_xz00_117)==((double)0.0)))
{ /* Ieee/number.scm 1068 */
BgL_test6406z00_12414 = 
(
REAL_TO_DOUBLE(BgL_yz00_118)==((double)0.0))
; }  else 
{ /* Ieee/number.scm 1068 */
BgL_test6406z00_12414 = ((bool_t)0)
; } }  else 
{ /* Ieee/number.scm 1068 */
BgL_test6406z00_12414 = ((bool_t)0)
; } }  else 
{ /* Ieee/number.scm 1068 */
BgL_test6406z00_12414 = ((bool_t)0)
; } 
if(BgL_test6406z00_12414)
{ /* Ieee/number.scm 1068 */
return BGL_REAL_CNST( BGl_real5338z00zz__r4_numbers_6_5z00);}  else 
{ /* Ieee/number.scm 1070 */
bool_t BgL_test6410z00_12424;
if(
INTEGERP(BgL_xz00_117))
{ /* Ieee/number.scm 1070 */
if(
INTEGERP(BgL_yz00_118))
{ /* Ieee/number.scm 1070 */
BgL_test6410z00_12424 = 
(
(long)CINT(BgL_yz00_118)>=((long)0))
; }  else 
{ /* Ieee/number.scm 1070 */
BgL_test6410z00_12424 = ((bool_t)0)
; } }  else 
{ /* Ieee/number.scm 1070 */
BgL_test6410z00_12424 = ((bool_t)0)
; } 
if(BgL_test6410z00_12424)
{ /* Ieee/number.scm 1070 */
return 
BINT(
BGl_exptfxz00zz__r4_numbers_6_5_fixnumz00(
(long)CINT(BgL_xz00_117), 
(long)CINT(BgL_yz00_118)));}  else 
{ /* Ieee/number.scm 1072 */
bool_t BgL_test6413z00_12435;
if(
BIGNUMP(BgL_xz00_117))
{ /* Ieee/number.scm 1072 */
if(
BIGNUMP(BgL_yz00_118))
{ /* Ieee/number.scm 1072 */
BgL_test6413z00_12435 = 
BXPOSITIVE(BgL_yz00_118)
; }  else 
{ /* Ieee/number.scm 1072 */
BgL_test6413z00_12435 = ((bool_t)0)
; } }  else 
{ /* Ieee/number.scm 1072 */
BgL_test6413z00_12435 = ((bool_t)0)
; } 
if(BgL_test6413z00_12435)
{ /* Ieee/number.scm 1072 */
return 
BGl_exptbxz00zz__r4_numbers_6_5_fixnumz00(BgL_xz00_117, BgL_yz00_118);}  else 
{ /* Ieee/number.scm 1072 */
if(
BIGNUMP(BgL_xz00_117))
{ /* Ieee/number.scm 1075 */
obj_t BgL_y1z00_2290;
if(
REALP(BgL_yz00_118))
{ /* Ieee/number.scm 1076 */
BgL_y1z00_2290 = 
bgl_long_to_bignum(
(long)(
REAL_TO_DOUBLE(BgL_yz00_118))); }  else 
{ /* Ieee/number.scm 1076 */
if(
INTEGERP(BgL_yz00_118))
{ /* Ieee/number.scm 1077 */
BgL_y1z00_2290 = 
bgl_long_to_bignum(
(long)CINT(BgL_yz00_118)); }  else 
{ /* Ieee/number.scm 1077 */
if(
ELONGP(BgL_yz00_118))
{ /* Ieee/number.scm 1078 */
BgL_y1z00_2290 = 
bgl_long_to_bignum(
BELONG_TO_LONG(BgL_yz00_118)); }  else 
{ /* Ieee/number.scm 1078 */
if(
LLONGP(BgL_yz00_118))
{ /* Ieee/number.scm 1079 */
BgL_y1z00_2290 = 
bgl_llong_to_bignum(
BLLONG_TO_LLONG(BgL_yz00_118)); }  else 
{ /* Ieee/number.scm 1079 */
if(
BIGNUMP(BgL_yz00_118))
{ /* Ieee/number.scm 1080 */
BgL_y1z00_2290 = BgL_yz00_118; }  else 
{ /* Ieee/number.scm 1080 */
BgL_y1z00_2290 = 
BGl_errorz00zz__errorz00(BGl_string5339z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_118); } } } } } 
{ /* Ieee/number.scm 1082 */
obj_t BgL_auxz00_12464;
if(
BIGNUMP(BgL_y1z00_2290))
{ /* Ieee/number.scm 1082 */
BgL_auxz00_12464 = BgL_y1z00_2290
; }  else 
{ 
obj_t BgL_auxz00_12467;
BgL_auxz00_12467 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)39572)), BGl_string5339z00zz__r4_numbers_6_5z00, BGl_string5276z00zz__r4_numbers_6_5z00, BgL_y1z00_2290); 
FAILURE(BgL_auxz00_12467,BFALSE,BFALSE);} 
return 
BGl_exptbxz00zz__r4_numbers_6_5_fixnumz00(BgL_xz00_117, BgL_auxz00_12464);} }  else 
{ /* Ieee/number.scm 1084 */
obj_t BgL_x1z00_2297;obj_t BgL_y1z00_2298;
if(
REALP(BgL_xz00_117))
{ /* Ieee/number.scm 1085 */
BgL_x1z00_2297 = BgL_xz00_117; }  else 
{ /* Ieee/number.scm 1085 */
if(
INTEGERP(BgL_xz00_117))
{ /* Ieee/number.scm 1086 */
BgL_x1z00_2297 = 
DOUBLE_TO_REAL(
(double)(
(long)CINT(BgL_xz00_117))); }  else 
{ /* Ieee/number.scm 1086 */
if(
ELONGP(BgL_xz00_117))
{ /* Ieee/number.scm 1087 */
BgL_x1z00_2297 = 
DOUBLE_TO_REAL(
(double)(
BELONG_TO_LONG(BgL_xz00_117))); }  else 
{ /* Ieee/number.scm 1087 */
if(
LLONGP(BgL_xz00_117))
{ /* Ieee/number.scm 1088 */
BgL_x1z00_2297 = 
DOUBLE_TO_REAL(
(double)(
BLLONG_TO_LLONG(BgL_xz00_117))); }  else 
{ /* Ieee/number.scm 1088 */
if(
BIGNUMP(BgL_xz00_117))
{ /* Ieee/number.scm 1089 */
BgL_x1z00_2297 = 
DOUBLE_TO_REAL(
bgl_bignum_to_flonum(BgL_xz00_117)); }  else 
{ /* Ieee/number.scm 1089 */
BgL_x1z00_2297 = 
BGl_errorz00zz__errorz00(BGl_string5339z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_xz00_117); } } } } } 
if(
REALP(BgL_yz00_118))
{ /* Ieee/number.scm 1092 */
BgL_y1z00_2298 = BgL_yz00_118; }  else 
{ /* Ieee/number.scm 1092 */
if(
INTEGERP(BgL_yz00_118))
{ /* Ieee/number.scm 1093 */
BgL_y1z00_2298 = 
DOUBLE_TO_REAL(
(double)(
(long)CINT(BgL_yz00_118))); }  else 
{ /* Ieee/number.scm 1093 */
if(
ELONGP(BgL_yz00_118))
{ /* Ieee/number.scm 1094 */
BgL_y1z00_2298 = 
DOUBLE_TO_REAL(
(double)(
BELONG_TO_LONG(BgL_yz00_118))); }  else 
{ /* Ieee/number.scm 1094 */
if(
LLONGP(BgL_yz00_118))
{ /* Ieee/number.scm 1095 */
BgL_y1z00_2298 = 
DOUBLE_TO_REAL(
(double)(
BLLONG_TO_LLONG(BgL_yz00_118))); }  else 
{ /* Ieee/number.scm 1095 */
if(
BIGNUMP(BgL_yz00_118))
{ /* Ieee/number.scm 1096 */
BgL_y1z00_2298 = 
DOUBLE_TO_REAL(
bgl_bignum_to_flonum(BgL_yz00_118)); }  else 
{ /* Ieee/number.scm 1096 */
BgL_y1z00_2298 = 
BGl_errorz00zz__errorz00(BGl_string5339z00zz__r4_numbers_6_5z00, BGl_string5291z00zz__r4_numbers_6_5z00, BgL_yz00_118); } } } } } 
{ /* Ieee/number.scm 1098 */
double BgL_res4599z00_5863;
{ /* Ieee/number.scm 1098 */
double BgL_r1z00_5861;double BgL_r2z00_5862;
{ /* Ieee/number.scm 1098 */
obj_t BgL_tmpz00_12516;
if(
REALP(BgL_x1z00_2297))
{ /* Ieee/number.scm 1098 */
BgL_tmpz00_12516 = BgL_x1z00_2297
; }  else 
{ 
obj_t BgL_auxz00_12519;
BgL_auxz00_12519 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)40089)), BGl_string5339z00zz__r4_numbers_6_5z00, BGl_string5265z00zz__r4_numbers_6_5z00, BgL_x1z00_2297); 
FAILURE(BgL_auxz00_12519,BFALSE,BFALSE);} 
BgL_r1z00_5861 = 
REAL_TO_DOUBLE(BgL_tmpz00_12516); } 
{ /* Ieee/number.scm 1098 */
obj_t BgL_tmpz00_12524;
if(
REALP(BgL_y1z00_2298))
{ /* Ieee/number.scm 1098 */
BgL_tmpz00_12524 = BgL_y1z00_2298
; }  else 
{ 
obj_t BgL_auxz00_12527;
BgL_auxz00_12527 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)40092)), BGl_string5339z00zz__r4_numbers_6_5z00, BGl_string5265z00zz__r4_numbers_6_5z00, BgL_y1z00_2298); 
FAILURE(BgL_auxz00_12527,BFALSE,BFALSE);} 
BgL_r2z00_5862 = 
REAL_TO_DOUBLE(BgL_tmpz00_12524); } 
BgL_res4599z00_5863 = 
pow(BgL_r1z00_5861, BgL_r2z00_5862); } 
return 
DOUBLE_TO_REAL(BgL_res4599z00_5863);} } } } } } } 

}



/* &expt */
obj_t BGl_z62exptz62zz__r4_numbers_6_5z00(obj_t BgL_envz00_6588, obj_t BgL_xz00_6589, obj_t BgL_yz00_6590)
{
{ /* Ieee/number.scm 1066 */
return 
BGl_exptz00zz__r4_numbers_6_5z00(BgL_xz00_6589, BgL_yz00_6590);} 

}



/* exact->inexact */
BGL_EXPORTED_DEF obj_t bgl_exact_to_inexact(obj_t BgL_za7za7_119)
{
{ /* Ieee/number.scm 1103 */
if(
INTEGERP(BgL_za7za7_119))
{ /* Ieee/number.scm 1105 */
return 
DOUBLE_TO_REAL(
(double)(
(long)CINT(BgL_za7za7_119)));}  else 
{ /* Ieee/number.scm 1105 */
if(
REALP(BgL_za7za7_119))
{ /* Ieee/number.scm 1106 */
return BgL_za7za7_119;}  else 
{ /* Ieee/number.scm 1106 */
if(
ELONGP(BgL_za7za7_119))
{ /* Ieee/number.scm 1107 */
return 
DOUBLE_TO_REAL(
(double)(
BELONG_TO_LONG(BgL_za7za7_119)));}  else 
{ /* Ieee/number.scm 1107 */
if(
LLONGP(BgL_za7za7_119))
{ /* Ieee/number.scm 1108 */
return 
DOUBLE_TO_REAL(
(double)(
BLLONG_TO_LLONG(BgL_za7za7_119)));}  else 
{ /* Ieee/number.scm 1108 */
if(
BIGNUMP(BgL_za7za7_119))
{ /* Ieee/number.scm 1109 */
return 
DOUBLE_TO_REAL(
bgl_bignum_to_flonum(BgL_za7za7_119));}  else 
{ /* Ieee/number.scm 1109 */
return BgL_za7za7_119;} } } } } } 

}



/* &exact->inexact */
obj_t BGl_z62exactzd2ze3inexactz53zz__r4_numbers_6_5z00(obj_t BgL_envz00_6591, obj_t BgL_za7za7_6592)
{
{ /* Ieee/number.scm 1103 */
return 
bgl_exact_to_inexact(BgL_za7za7_6592);} 

}



/* inexact->exact */
BGL_EXPORTED_DEF obj_t bgl_inexact_to_exact(obj_t BgL_za7za7_120)
{
{ /* Ieee/number.scm 1121 */
if(
REALP(BgL_za7za7_120))
{ /* Ieee/number.scm 1123 */
bool_t BgL_test6441z00_12559;
{ /* Ieee/number.scm 1123 */
bool_t BgL_test6442z00_12560;
{ /* Ieee/number.scm 1123 */
double BgL_r2z00_5874;
BgL_r2z00_5874 = BGl_za2minintflza2z00zz__r4_numbers_6_5z00; 
BgL_test6442z00_12560 = 
(
REAL_TO_DOUBLE(BgL_za7za7_120)>=BgL_r2z00_5874); } 
if(BgL_test6442z00_12560)
{ /* Ieee/number.scm 1123 */
double BgL_r2z00_5877;
BgL_r2z00_5877 = BGl_za2maxintflza2z00zz__r4_numbers_6_5z00; 
BgL_test6441z00_12559 = 
(
REAL_TO_DOUBLE(BgL_za7za7_120)<=BgL_r2z00_5877); }  else 
{ /* Ieee/number.scm 1123 */
BgL_test6441z00_12559 = ((bool_t)0)
; } } 
if(BgL_test6441z00_12559)
{ /* Ieee/number.scm 1123 */
return 
BINT(
(long)(
REAL_TO_DOUBLE(BgL_za7za7_120)));}  else 
{ /* Ieee/number.scm 1123 */
return 
bgl_flonum_to_bignum(
REAL_TO_DOUBLE(BgL_za7za7_120));} }  else 
{ /* Ieee/number.scm 1122 */
return BgL_za7za7_120;} } 

}



/* &inexact->exact */
obj_t BGl_z62inexactzd2ze3exactz53zz__r4_numbers_6_5z00(obj_t BgL_envz00_6593, obj_t BgL_za7za7_6594)
{
{ /* Ieee/number.scm 1121 */
return 
bgl_inexact_to_exact(BgL_za7za7_6594);} 

}



/* _number->string */
obj_t BGl__numberzd2ze3stringz31zz__r4_numbers_6_5z00(obj_t BgL_env1080z00_125, obj_t BgL_opt1079z00_124)
{
{ /* Ieee/number.scm 1136 */
{ /* Ieee/number.scm 1136 */
obj_t BgL_xz00_2326;
BgL_xz00_2326 = 
VECTOR_REF(BgL_opt1079z00_124,((long)0)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1079z00_124)) { case ((long)1) : 

{ /* Ieee/number.scm 1136 */

return 
BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(BgL_xz00_2326, 
BINT(((long)10)));} break;case ((long)2) : 

{ /* Ieee/number.scm 1136 */
obj_t BgL_radixz00_2331;
BgL_radixz00_2331 = 
VECTOR_REF(BgL_opt1079z00_124,((long)1)); 
{ /* Ieee/number.scm 1136 */

return 
BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(BgL_xz00_2326, BgL_radixz00_2331);} } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol5340z00zz__r4_numbers_6_5z00, BGl_string5342z00zz__r4_numbers_6_5z00, 
BINT(
VECTOR_LENGTH(BgL_opt1079z00_124)));} } } } 

}



/* number->string */
BGL_EXPORTED_DEF obj_t BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(obj_t BgL_xz00_122, obj_t BgL_radixz00_123)
{
{ /* Ieee/number.scm 1136 */
if(
BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BgL_radixz00_123))
{ /* Ieee/number.scm 1138 */
if(
INTEGERP(BgL_xz00_122))
{ /* Ieee/number.scm 1139 */
long BgL_auxz00_12585;
{ /* Ieee/number.scm 1139 */
obj_t BgL_tmpz00_12587;
if(
INTEGERP(BgL_radixz00_123))
{ /* Ieee/number.scm 1139 */
BgL_tmpz00_12587 = BgL_radixz00_123
; }  else 
{ 
obj_t BgL_auxz00_12590;
BgL_auxz00_12590 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)41744)), BGl_string5341z00zz__r4_numbers_6_5z00, BGl_string5267z00zz__r4_numbers_6_5z00, BgL_radixz00_123); 
FAILURE(BgL_auxz00_12590,BFALSE,BFALSE);} 
BgL_auxz00_12585 = 
(long)CINT(BgL_tmpz00_12587); } 
return 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
(long)CINT(BgL_xz00_122), BgL_auxz00_12585);}  else 
{ /* Ieee/number.scm 1139 */
if(
REALP(BgL_xz00_122))
{ /* Ieee/number.scm 1140 */
return 
bgl_real_to_string(
REAL_TO_DOUBLE(BgL_xz00_122));}  else 
{ /* Ieee/number.scm 1140 */
if(
ELONGP(BgL_xz00_122))
{ /* Ieee/number.scm 1141 */
obj_t BgL_list2683z00_2337;
BgL_list2683z00_2337 = 
MAKE_YOUNG_PAIR(BgL_radixz00_123, BNIL); 
return 
BGl_elongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
BELONG_TO_LONG(BgL_xz00_122), BgL_list2683z00_2337);}  else 
{ /* Ieee/number.scm 1141 */
if(
LLONGP(BgL_xz00_122))
{ /* Ieee/number.scm 1142 */
obj_t BgL_list2685z00_2339;
BgL_list2685z00_2339 = 
MAKE_YOUNG_PAIR(BgL_radixz00_123, BNIL); 
return 
BGl_llongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
BLLONG_TO_LLONG(BgL_xz00_122), BgL_list2685z00_2339);}  else 
{ /* Ieee/number.scm 1142 */
if(
BIGNUMP(BgL_xz00_122))
{ /* Ieee/number.scm 1143 */
long BgL_auxz00_12612;
{ /* Ieee/number.scm 1143 */
obj_t BgL_tmpz00_12613;
if(
INTEGERP(BgL_radixz00_123))
{ /* Ieee/number.scm 1143 */
BgL_tmpz00_12613 = BgL_radixz00_123
; }  else 
{ 
obj_t BgL_auxz00_12616;
BgL_auxz00_12616 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)41912)), BGl_string5341z00zz__r4_numbers_6_5z00, BGl_string5267z00zz__r4_numbers_6_5z00, BgL_radixz00_123); 
FAILURE(BgL_auxz00_12616,BFALSE,BFALSE);} 
BgL_auxz00_12612 = 
(long)CINT(BgL_tmpz00_12613); } 
return 
BGl_bignumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_xz00_122, BgL_auxz00_12612);}  else 
{ /* Ieee/number.scm 1143 */
if(
BGL_INT8P(BgL_xz00_122))
{ /* Ieee/number.scm 1144 */
long BgL_arg2688z00_2342;
{ /* Ieee/number.scm 1144 */
long BgL_res4617z00_5889;
{ /* Ieee/number.scm 1144 */
int8_t BgL_xz00_5885;
BgL_xz00_5885 = 
BGL_BINT8_TO_INT8(BgL_xz00_122); 
{ /* Ieee/number.scm 1144 */
long BgL_arg3189z00_5886;
BgL_arg3189z00_5886 = 
(long)(BgL_xz00_5885); 
{ /* Ieee/number.scm 1144 */
long BgL_res4616z00_5888;
BgL_res4616z00_5888 = 
(long)(BgL_arg3189z00_5886); 
BgL_res4617z00_5889 = BgL_res4616z00_5888; } } } 
BgL_arg2688z00_2342 = BgL_res4617z00_5889; } 
{ /* Ieee/number.scm 1144 */
long BgL_auxz00_12627;
{ /* Ieee/number.scm 1144 */
obj_t BgL_tmpz00_12628;
if(
INTEGERP(BgL_radixz00_123))
{ /* Ieee/number.scm 1144 */
BgL_tmpz00_12628 = BgL_radixz00_123
; }  else 
{ 
obj_t BgL_auxz00_12631;
BgL_auxz00_12631 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)41971)), BGl_string5341z00zz__r4_numbers_6_5z00, BGl_string5267z00zz__r4_numbers_6_5z00, BgL_radixz00_123); 
FAILURE(BgL_auxz00_12631,BFALSE,BFALSE);} 
BgL_auxz00_12627 = 
(long)CINT(BgL_tmpz00_12628); } 
return 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_arg2688z00_2342, BgL_auxz00_12627);} }  else 
{ /* Ieee/number.scm 1144 */
if(
BGL_UINT8P(BgL_xz00_122))
{ /* Ieee/number.scm 1145 */
long BgL_arg2690z00_2344;
{ /* Ieee/number.scm 1145 */
long BgL_res4620z00_5895;
{ /* Ieee/number.scm 1145 */
uint8_t BgL_xz00_5891;
BgL_xz00_5891 = 
BGL_BUINT8_TO_UINT8(BgL_xz00_122); 
{ /* Ieee/number.scm 1145 */
long BgL_arg3188z00_5892;
BgL_arg3188z00_5892 = 
(long)(BgL_xz00_5891); 
{ /* Ieee/number.scm 1145 */
long BgL_res4619z00_5894;
BgL_res4619z00_5894 = 
(long)(BgL_arg3188z00_5892); 
BgL_res4620z00_5895 = BgL_res4619z00_5894; } } } 
BgL_arg2690z00_2344 = BgL_res4620z00_5895; } 
{ /* Ieee/number.scm 1145 */
long BgL_auxz00_12642;
{ /* Ieee/number.scm 1145 */
obj_t BgL_tmpz00_12643;
if(
INTEGERP(BgL_radixz00_123))
{ /* Ieee/number.scm 1145 */
BgL_tmpz00_12643 = BgL_radixz00_123
; }  else 
{ 
obj_t BgL_auxz00_12646;
BgL_auxz00_12646 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)42032)), BGl_string5341z00zz__r4_numbers_6_5z00, BGl_string5267z00zz__r4_numbers_6_5z00, BgL_radixz00_123); 
FAILURE(BgL_auxz00_12646,BFALSE,BFALSE);} 
BgL_auxz00_12642 = 
(long)CINT(BgL_tmpz00_12643); } 
return 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_arg2690z00_2344, BgL_auxz00_12642);} }  else 
{ /* Ieee/number.scm 1145 */
if(
BGL_INT16P(BgL_xz00_122))
{ /* Ieee/number.scm 1146 */
long BgL_arg2692z00_2346;
{ /* Ieee/number.scm 1146 */
long BgL_res4623z00_5901;
{ /* Ieee/number.scm 1146 */
int16_t BgL_xz00_5897;
BgL_xz00_5897 = 
BGL_BINT16_TO_INT16(BgL_xz00_122); 
{ /* Ieee/number.scm 1146 */
long BgL_arg3186z00_5898;
BgL_arg3186z00_5898 = 
(long)(BgL_xz00_5897); 
{ /* Ieee/number.scm 1146 */
long BgL_res4622z00_5900;
BgL_res4622z00_5900 = 
(long)(BgL_arg3186z00_5898); 
BgL_res4623z00_5901 = BgL_res4622z00_5900; } } } 
BgL_arg2692z00_2346 = BgL_res4623z00_5901; } 
{ /* Ieee/number.scm 1146 */
long BgL_auxz00_12657;
{ /* Ieee/number.scm 1146 */
obj_t BgL_tmpz00_12658;
if(
INTEGERP(BgL_radixz00_123))
{ /* Ieee/number.scm 1146 */
BgL_tmpz00_12658 = BgL_radixz00_123
; }  else 
{ 
obj_t BgL_auxz00_12661;
BgL_auxz00_12661 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)42093)), BGl_string5341z00zz__r4_numbers_6_5z00, BGl_string5267z00zz__r4_numbers_6_5z00, BgL_radixz00_123); 
FAILURE(BgL_auxz00_12661,BFALSE,BFALSE);} 
BgL_auxz00_12657 = 
(long)CINT(BgL_tmpz00_12658); } 
return 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_arg2692z00_2346, BgL_auxz00_12657);} }  else 
{ /* Ieee/number.scm 1146 */
if(
BGL_UINT16P(BgL_xz00_122))
{ /* Ieee/number.scm 1147 */
long BgL_arg2694z00_2348;
{ /* Ieee/number.scm 1147 */
long BgL_res4626z00_5907;
{ /* Ieee/number.scm 1147 */
uint16_t BgL_xz00_5903;
BgL_xz00_5903 = 
BGL_BUINT16_TO_UINT16(BgL_xz00_122); 
{ /* Ieee/number.scm 1147 */
long BgL_arg3185z00_5904;
BgL_arg3185z00_5904 = 
(long)(BgL_xz00_5903); 
{ /* Ieee/number.scm 1147 */
long BgL_res4625z00_5906;
BgL_res4625z00_5906 = 
(long)(BgL_arg3185z00_5904); 
BgL_res4626z00_5907 = BgL_res4625z00_5906; } } } 
BgL_arg2694z00_2348 = BgL_res4626z00_5907; } 
{ /* Ieee/number.scm 1147 */
long BgL_auxz00_12672;
{ /* Ieee/number.scm 1147 */
obj_t BgL_tmpz00_12673;
if(
INTEGERP(BgL_radixz00_123))
{ /* Ieee/number.scm 1147 */
BgL_tmpz00_12673 = BgL_radixz00_123
; }  else 
{ 
obj_t BgL_auxz00_12676;
BgL_auxz00_12676 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)42156)), BGl_string5341z00zz__r4_numbers_6_5z00, BGl_string5267z00zz__r4_numbers_6_5z00, BgL_radixz00_123); 
FAILURE(BgL_auxz00_12676,BFALSE,BFALSE);} 
BgL_auxz00_12672 = 
(long)CINT(BgL_tmpz00_12673); } 
return 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_arg2694z00_2348, BgL_auxz00_12672);} }  else 
{ /* Ieee/number.scm 1147 */
if(
BGL_INT32P(BgL_xz00_122))
{ /* Ieee/number.scm 1148 */
BGL_LONGLONG_T BgL_arg2696z00_2350;
{ /* Ieee/number.scm 1148 */
BGL_LONGLONG_T BgL_res4628z00_5910;
{ /* Ieee/number.scm 1148 */
int32_t BgL_nz00_5909;
BgL_nz00_5909 = 
BGL_BINT32_TO_INT32(BgL_xz00_122); 
BgL_res4628z00_5910 = 
(BGL_LONGLONG_T)(BgL_nz00_5909); } 
BgL_arg2696z00_2350 = BgL_res4628z00_5910; } 
{ /* Ieee/number.scm 1148 */
obj_t BgL_list2697z00_2351;
BgL_list2697z00_2351 = 
MAKE_YOUNG_PAIR(BgL_radixz00_123, BNIL); 
return 
BGl_llongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_arg2696z00_2350, BgL_list2697z00_2351);} }  else 
{ /* Ieee/number.scm 1148 */
if(
BGL_UINT32P(BgL_xz00_122))
{ /* Ieee/number.scm 1149 */
BGL_LONGLONG_T BgL_arg2699z00_2353;
{ /* Ieee/number.scm 1149 */
BGL_LONGLONG_T BgL_res4630z00_5913;
{ /* Ieee/number.scm 1149 */
uint32_t BgL_nz00_5912;
BgL_nz00_5912 = 
BGL_BUINT32_TO_UINT32(BgL_xz00_122); 
BgL_res4630z00_5913 = 
(BGL_LONGLONG_T)(BgL_nz00_5912); } 
BgL_arg2699z00_2353 = BgL_res4630z00_5913; } 
{ /* Ieee/number.scm 1149 */
obj_t BgL_list2700z00_2354;
BgL_list2700z00_2354 = 
MAKE_YOUNG_PAIR(BgL_radixz00_123, BNIL); 
return 
BGl_llongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_arg2699z00_2353, BgL_list2700z00_2354);} }  else 
{ /* Ieee/number.scm 1149 */
if(
BGL_INT64P(BgL_xz00_122))
{ /* Ieee/number.scm 1150 */
BGL_LONGLONG_T BgL_arg2702z00_2356;
{ /* Ieee/number.scm 1150 */
BGL_LONGLONG_T BgL_res4632z00_5916;
{ /* Ieee/number.scm 1150 */
int64_t BgL_nz00_5915;
BgL_nz00_5915 = 
BGL_BINT64_TO_INT64(BgL_xz00_122); 
BgL_res4632z00_5916 = 
(BGL_LONGLONG_T)(BgL_nz00_5915); } 
BgL_arg2702z00_2356 = BgL_res4632z00_5916; } 
{ /* Ieee/number.scm 1150 */
obj_t BgL_list2703z00_2357;
BgL_list2703z00_2357 = 
MAKE_YOUNG_PAIR(BgL_radixz00_123, BNIL); 
return 
BGl_llongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_arg2702z00_2356, BgL_list2703z00_2357);} }  else 
{ /* Ieee/number.scm 1150 */
if(
BGL_UINT64P(BgL_xz00_122))
{ /* Ieee/number.scm 1151 */
BGL_LONGLONG_T BgL_arg2705z00_2359;
{ /* Ieee/number.scm 1151 */
BGL_LONGLONG_T BgL_res4634z00_5919;
{ /* Ieee/number.scm 1151 */
uint64_t BgL_nz00_5918;
BgL_nz00_5918 = 
BGL_BINT64_TO_INT64(BgL_xz00_122); 
BgL_res4634z00_5919 = 
(BGL_LONGLONG_T)(BgL_nz00_5918); } 
BgL_arg2705z00_2359 = BgL_res4634z00_5919; } 
{ /* Ieee/number.scm 1151 */
obj_t BgL_list2706z00_2360;
BgL_list2706z00_2360 = 
MAKE_YOUNG_PAIR(BgL_radixz00_123, BNIL); 
return 
BGl_llongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_arg2705z00_2359, BgL_list2706z00_2360);} }  else 
{ /* Ieee/number.scm 1152 */
obj_t BgL_aux5241z00_7035;
BgL_aux5241z00_7035 = 
BGl_errorz00zz__errorz00(BGl_string5341z00zz__r4_numbers_6_5z00, BGl_string5343z00zz__r4_numbers_6_5z00, BgL_xz00_122); 
if(
STRINGP(BgL_aux5241z00_7035))
{ /* Ieee/number.scm 1152 */
return BgL_aux5241z00_7035;}  else 
{ 
obj_t BgL_auxz00_12709;
BgL_auxz00_12709 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)42412)), BGl_string5341z00zz__r4_numbers_6_5z00, BGl_string5344z00zz__r4_numbers_6_5z00, BgL_aux5241z00_7035); 
FAILURE(BgL_auxz00_12709,BFALSE,BFALSE);} } } } } } } } } } } } } } }  else 
{ /* Ieee/number.scm 1138 */
obj_t BgL_aux5243z00_7037;
BgL_aux5243z00_7037 = 
BGl_errorz00zz__errorz00(BGl_symbol5340z00zz__r4_numbers_6_5z00, BGl_string5345z00zz__r4_numbers_6_5z00, BgL_radixz00_123); 
if(
STRINGP(BgL_aux5243z00_7037))
{ /* Ieee/number.scm 1138 */
return BgL_aux5243z00_7037;}  else 
{ 
obj_t BgL_auxz00_12716;
BgL_auxz00_12716 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)41659)), BGl_string5341z00zz__r4_numbers_6_5z00, BGl_string5344z00zz__r4_numbers_6_5z00, BgL_aux5243z00_7037); 
FAILURE(BgL_auxz00_12716,BFALSE,BFALSE);} } } 

}



/* _string->number */
obj_t BGl__stringzd2ze3numberz31zz__r4_numbers_6_5z00(obj_t BgL_env1084z00_129, obj_t BgL_opt1083z00_128)
{
{ /* Ieee/number.scm 1157 */
{ /* Ieee/number.scm 1157 */
obj_t BgL_g1085z00_2361;
BgL_g1085z00_2361 = 
VECTOR_REF(BgL_opt1083z00_128,((long)0)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1083z00_128)) { case ((long)1) : 

{ /* Ieee/number.scm 1157 */

{ /* Ieee/number.scm 1157 */
obj_t BgL_auxz00_12721;
if(
STRINGP(BgL_g1085z00_2361))
{ /* Ieee/number.scm 1157 */
BgL_auxz00_12721 = BgL_g1085z00_2361
; }  else 
{ 
obj_t BgL_auxz00_12724;
BgL_auxz00_12724 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)42689)), BGl_string5348z00zz__r4_numbers_6_5z00, BGl_string5344z00zz__r4_numbers_6_5z00, BgL_g1085z00_2361); 
FAILURE(BgL_auxz00_12724,BFALSE,BFALSE);} 
return 
BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00(BgL_auxz00_12721, 
BINT(((long)10)));} } break;case ((long)2) : 

{ /* Ieee/number.scm 1157 */
obj_t BgL_radixz00_2366;
BgL_radixz00_2366 = 
VECTOR_REF(BgL_opt1083z00_128,((long)1)); 
{ /* Ieee/number.scm 1157 */

{ /* Ieee/number.scm 1157 */
obj_t BgL_auxz00_12731;
if(
STRINGP(BgL_g1085z00_2361))
{ /* Ieee/number.scm 1157 */
BgL_auxz00_12731 = BgL_g1085z00_2361
; }  else 
{ 
obj_t BgL_auxz00_12734;
BgL_auxz00_12734 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)42689)), BGl_string5348z00zz__r4_numbers_6_5z00, BGl_string5344z00zz__r4_numbers_6_5z00, BgL_g1085z00_2361); 
FAILURE(BgL_auxz00_12734,BFALSE,BFALSE);} 
return 
BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00(BgL_auxz00_12731, BgL_radixz00_2366);} } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol5346z00zz__r4_numbers_6_5z00, BGl_string5342z00zz__r4_numbers_6_5z00, 
BINT(
VECTOR_LENGTH(BgL_opt1083z00_128)));} } } } 

}



/* string->number */
BGL_EXPORTED_DEF obj_t BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00(obj_t BgL_xz00_126, obj_t BgL_radixz00_127)
{
{ /* Ieee/number.scm 1157 */
{ 
obj_t BgL_xz00_2459;obj_t BgL_xz00_2380;obj_t BgL_rz00_2381;
if(
BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BgL_radixz00_127))
{ /* Ieee/number.scm 1226 */
if(
(
STRING_LENGTH(BgL_xz00_126)==((long)0)))
{ /* Ieee/number.scm 1228 */
return BFALSE;}  else 
{ /* Ieee/number.scm 1230 */
bool_t BgL_test6469z00_12749;
BgL_xz00_2380 = BgL_xz00_126; 
BgL_rz00_2381 = BgL_radixz00_127; 
{ /* Ieee/number.scm 1160 */
long BgL_lenz00_2383;
BgL_lenz00_2383 = 
STRING_LENGTH(BgL_xz00_2380); 
{ 
long BgL_iz00_2386;
BgL_iz00_2386 = 
(BgL_lenz00_2383-((long)1)); 
BgL_zc3z04anonymousza32720ze3z87_2387:
if(
(((long)-1)==BgL_iz00_2386))
{ /* Ieee/number.scm 1162 */
BgL_test6469z00_12749 = ((bool_t)1)
; }  else 
{ /* Ieee/number.scm 1164 */
bool_t BgL_test6471z00_12753;
{ /* Ieee/number.scm 1164 */
bool_t BgL_test6472z00_12754;
{ /* Ieee/number.scm 1164 */
unsigned char BgL_tmpz00_12755;
{ /* Ieee/number.scm 1164 */
long BgL_l4803z00_6597;
BgL_l4803z00_6597 = 
STRING_LENGTH(BgL_xz00_2380); 
if(
BOUND_CHECK(BgL_iz00_2386, BgL_l4803z00_6597))
{ /* Ieee/number.scm 1164 */
BgL_tmpz00_12755 = 
STRING_REF(BgL_xz00_2380, BgL_iz00_2386)
; }  else 
{ 
obj_t BgL_auxz00_12760;
BgL_auxz00_12760 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)42893)), BGl_string5349z00zz__r4_numbers_6_5z00, BgL_xz00_2380, 
(int)(BgL_l4803z00_6597), 
(int)(BgL_iz00_2386)); 
FAILURE(BgL_auxz00_12760,BFALSE,BFALSE);} } 
BgL_test6472z00_12754 = 
(BgL_tmpz00_12755>=((unsigned char)'0')); } 
if(BgL_test6472z00_12754)
{ /* Ieee/number.scm 1165 */
bool_t BgL_test6474z00_12767;
{ /* Ieee/number.scm 1165 */
unsigned char BgL_tmpz00_12768;
{ /* Ieee/number.scm 1165 */
long BgL_l4807z00_6601;
BgL_l4807z00_6601 = 
STRING_LENGTH(BgL_xz00_2380); 
if(
BOUND_CHECK(BgL_iz00_2386, BgL_l4807z00_6601))
{ /* Ieee/number.scm 1165 */
BgL_tmpz00_12768 = 
STRING_REF(BgL_xz00_2380, BgL_iz00_2386)
; }  else 
{ 
obj_t BgL_auxz00_12773;
BgL_auxz00_12773 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)42927)), BGl_string5349z00zz__r4_numbers_6_5z00, BgL_xz00_2380, 
(int)(BgL_l4807z00_6601), 
(int)(BgL_iz00_2386)); 
FAILURE(BgL_auxz00_12773,BFALSE,BFALSE);} } 
BgL_test6474z00_12767 = 
(BgL_tmpz00_12768<=((unsigned char)'1')); } 
if(BgL_test6474z00_12767)
{ /* Ieee/number.scm 1166 */
long BgL_n1z00_5938;
{ /* Ieee/number.scm 1166 */
obj_t BgL_tmpz00_12780;
if(
INTEGERP(BgL_rz00_2381))
{ /* Ieee/number.scm 1166 */
BgL_tmpz00_12780 = BgL_rz00_2381
; }  else 
{ 
obj_t BgL_auxz00_12783;
BgL_auxz00_12783 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)42958)), BGl_string5350z00zz__r4_numbers_6_5z00, BGl_string5267z00zz__r4_numbers_6_5z00, BgL_rz00_2381); 
FAILURE(BgL_auxz00_12783,BFALSE,BFALSE);} 
BgL_n1z00_5938 = 
(long)CINT(BgL_tmpz00_12780); } 
BgL_test6471z00_12753 = 
(BgL_n1z00_5938>=((long)2)); }  else 
{ /* Ieee/number.scm 1165 */
BgL_test6471z00_12753 = ((bool_t)0)
; } }  else 
{ /* Ieee/number.scm 1164 */
BgL_test6471z00_12753 = ((bool_t)0)
; } } 
if(BgL_test6471z00_12753)
{ 
long BgL_iz00_12789;
BgL_iz00_12789 = 
(BgL_iz00_2386-((long)1)); 
BgL_iz00_2386 = BgL_iz00_12789; 
goto BgL_zc3z04anonymousza32720ze3z87_2387;}  else 
{ /* Ieee/number.scm 1168 */
bool_t BgL_test6477z00_12791;
{ /* Ieee/number.scm 1168 */
bool_t BgL_test6478z00_12792;
{ /* Ieee/number.scm 1168 */
unsigned char BgL_tmpz00_12793;
{ /* Ieee/number.scm 1168 */
long BgL_l4811z00_6605;
BgL_l4811z00_6605 = 
STRING_LENGTH(BgL_xz00_2380); 
if(
BOUND_CHECK(BgL_iz00_2386, BgL_l4811z00_6605))
{ /* Ieee/number.scm 1168 */
BgL_tmpz00_12793 = 
STRING_REF(BgL_xz00_2380, BgL_iz00_2386)
; }  else 
{ 
obj_t BgL_auxz00_12798;
BgL_auxz00_12798 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)43006)), BGl_string5349z00zz__r4_numbers_6_5z00, BgL_xz00_2380, 
(int)(BgL_l4811z00_6605), 
(int)(BgL_iz00_2386)); 
FAILURE(BgL_auxz00_12798,BFALSE,BFALSE);} } 
BgL_test6478z00_12792 = 
(BgL_tmpz00_12793>=((unsigned char)'2')); } 
if(BgL_test6478z00_12792)
{ /* Ieee/number.scm 1169 */
bool_t BgL_test6480z00_12805;
{ /* Ieee/number.scm 1169 */
unsigned char BgL_tmpz00_12806;
{ /* Ieee/number.scm 1169 */
long BgL_l4815z00_6609;
BgL_l4815z00_6609 = 
STRING_LENGTH(BgL_xz00_2380); 
if(
BOUND_CHECK(BgL_iz00_2386, BgL_l4815z00_6609))
{ /* Ieee/number.scm 1169 */
BgL_tmpz00_12806 = 
STRING_REF(BgL_xz00_2380, BgL_iz00_2386)
; }  else 
{ 
obj_t BgL_auxz00_12811;
BgL_auxz00_12811 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)43040)), BGl_string5349z00zz__r4_numbers_6_5z00, BgL_xz00_2380, 
(int)(BgL_l4815z00_6609), 
(int)(BgL_iz00_2386)); 
FAILURE(BgL_auxz00_12811,BFALSE,BFALSE);} } 
BgL_test6480z00_12805 = 
(BgL_tmpz00_12806<=((unsigned char)'7')); } 
if(BgL_test6480z00_12805)
{ /* Ieee/number.scm 1170 */
long BgL_n1z00_5954;
{ /* Ieee/number.scm 1170 */
obj_t BgL_tmpz00_12818;
if(
INTEGERP(BgL_rz00_2381))
{ /* Ieee/number.scm 1170 */
BgL_tmpz00_12818 = BgL_rz00_2381
; }  else 
{ 
obj_t BgL_auxz00_12821;
BgL_auxz00_12821 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)43071)), BGl_string5350z00zz__r4_numbers_6_5z00, BGl_string5267z00zz__r4_numbers_6_5z00, BgL_rz00_2381); 
FAILURE(BgL_auxz00_12821,BFALSE,BFALSE);} 
BgL_n1z00_5954 = 
(long)CINT(BgL_tmpz00_12818); } 
BgL_test6477z00_12791 = 
(BgL_n1z00_5954>=((long)8)); }  else 
{ /* Ieee/number.scm 1169 */
BgL_test6477z00_12791 = ((bool_t)0)
; } }  else 
{ /* Ieee/number.scm 1168 */
BgL_test6477z00_12791 = ((bool_t)0)
; } } 
if(BgL_test6477z00_12791)
{ 
long BgL_iz00_12827;
BgL_iz00_12827 = 
(BgL_iz00_2386-((long)1)); 
BgL_iz00_2386 = BgL_iz00_12827; 
goto BgL_zc3z04anonymousza32720ze3z87_2387;}  else 
{ /* Ieee/number.scm 1172 */
bool_t BgL_test6483z00_12829;
{ /* Ieee/number.scm 1172 */
bool_t BgL_test6484z00_12830;
{ /* Ieee/number.scm 1172 */
unsigned char BgL_tmpz00_12831;
{ /* Ieee/number.scm 1172 */
long BgL_l4819z00_6613;
BgL_l4819z00_6613 = 
STRING_LENGTH(BgL_xz00_2380); 
if(
BOUND_CHECK(BgL_iz00_2386, BgL_l4819z00_6613))
{ /* Ieee/number.scm 1172 */
BgL_tmpz00_12831 = 
STRING_REF(BgL_xz00_2380, BgL_iz00_2386)
; }  else 
{ 
obj_t BgL_auxz00_12836;
BgL_auxz00_12836 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)43119)), BGl_string5349z00zz__r4_numbers_6_5z00, BgL_xz00_2380, 
(int)(BgL_l4819z00_6613), 
(int)(BgL_iz00_2386)); 
FAILURE(BgL_auxz00_12836,BFALSE,BFALSE);} } 
BgL_test6484z00_12830 = 
(BgL_tmpz00_12831>=((unsigned char)'8')); } 
if(BgL_test6484z00_12830)
{ /* Ieee/number.scm 1173 */
bool_t BgL_test6486z00_12843;
{ /* Ieee/number.scm 1173 */
unsigned char BgL_tmpz00_12844;
{ /* Ieee/number.scm 1173 */
long BgL_l4823z00_6617;
BgL_l4823z00_6617 = 
STRING_LENGTH(BgL_xz00_2380); 
if(
BOUND_CHECK(BgL_iz00_2386, BgL_l4823z00_6617))
{ /* Ieee/number.scm 1173 */
BgL_tmpz00_12844 = 
STRING_REF(BgL_xz00_2380, BgL_iz00_2386)
; }  else 
{ 
obj_t BgL_auxz00_12849;
BgL_auxz00_12849 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)43153)), BGl_string5349z00zz__r4_numbers_6_5z00, BgL_xz00_2380, 
(int)(BgL_l4823z00_6617), 
(int)(BgL_iz00_2386)); 
FAILURE(BgL_auxz00_12849,BFALSE,BFALSE);} } 
BgL_test6486z00_12843 = 
(BgL_tmpz00_12844<=((unsigned char)'9')); } 
if(BgL_test6486z00_12843)
{ /* Ieee/number.scm 1174 */
long BgL_n1z00_5970;
{ /* Ieee/number.scm 1174 */
obj_t BgL_tmpz00_12856;
if(
INTEGERP(BgL_rz00_2381))
{ /* Ieee/number.scm 1174 */
BgL_tmpz00_12856 = BgL_rz00_2381
; }  else 
{ 
obj_t BgL_auxz00_12859;
BgL_auxz00_12859 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)43184)), BGl_string5350z00zz__r4_numbers_6_5z00, BGl_string5267z00zz__r4_numbers_6_5z00, BgL_rz00_2381); 
FAILURE(BgL_auxz00_12859,BFALSE,BFALSE);} 
BgL_n1z00_5970 = 
(long)CINT(BgL_tmpz00_12856); } 
BgL_test6483z00_12829 = 
(BgL_n1z00_5970>=((long)10)); }  else 
{ /* Ieee/number.scm 1173 */
BgL_test6483z00_12829 = ((bool_t)0)
; } }  else 
{ /* Ieee/number.scm 1172 */
BgL_test6483z00_12829 = ((bool_t)0)
; } } 
if(BgL_test6483z00_12829)
{ 
long BgL_iz00_12865;
BgL_iz00_12865 = 
(BgL_iz00_2386-((long)1)); 
BgL_iz00_2386 = BgL_iz00_12865; 
goto BgL_zc3z04anonymousza32720ze3z87_2387;}  else 
{ /* Ieee/number.scm 1176 */
bool_t BgL_test6489z00_12867;
{ /* Ieee/number.scm 1176 */
bool_t BgL_test6490z00_12868;
{ /* Ieee/number.scm 1176 */
unsigned char BgL_tmpz00_12869;
{ /* Ieee/number.scm 1176 */
long BgL_l4827z00_6621;
BgL_l4827z00_6621 = 
STRING_LENGTH(BgL_xz00_2380); 
if(
BOUND_CHECK(BgL_iz00_2386, BgL_l4827z00_6621))
{ /* Ieee/number.scm 1176 */
BgL_tmpz00_12869 = 
STRING_REF(BgL_xz00_2380, BgL_iz00_2386)
; }  else 
{ 
obj_t BgL_auxz00_12874;
BgL_auxz00_12874 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)43233)), BGl_string5349z00zz__r4_numbers_6_5z00, BgL_xz00_2380, 
(int)(BgL_l4827z00_6621), 
(int)(BgL_iz00_2386)); 
FAILURE(BgL_auxz00_12874,BFALSE,BFALSE);} } 
BgL_test6490z00_12868 = 
(BgL_tmpz00_12869>=((unsigned char)'a')); } 
if(BgL_test6490z00_12868)
{ /* Ieee/number.scm 1177 */
bool_t BgL_test6492z00_12881;
{ /* Ieee/number.scm 1177 */
unsigned char BgL_tmpz00_12882;
{ /* Ieee/number.scm 1177 */
long BgL_l4831z00_6625;
BgL_l4831z00_6625 = 
STRING_LENGTH(BgL_xz00_2380); 
if(
BOUND_CHECK(BgL_iz00_2386, BgL_l4831z00_6625))
{ /* Ieee/number.scm 1177 */
BgL_tmpz00_12882 = 
STRING_REF(BgL_xz00_2380, BgL_iz00_2386)
; }  else 
{ 
obj_t BgL_auxz00_12887;
BgL_auxz00_12887 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)43267)), BGl_string5349z00zz__r4_numbers_6_5z00, BgL_xz00_2380, 
(int)(BgL_l4831z00_6625), 
(int)(BgL_iz00_2386)); 
FAILURE(BgL_auxz00_12887,BFALSE,BFALSE);} } 
BgL_test6492z00_12881 = 
(BgL_tmpz00_12882<=((unsigned char)'f')); } 
if(BgL_test6492z00_12881)
{ /* Ieee/number.scm 1178 */
long BgL_n1z00_5986;
{ /* Ieee/number.scm 1178 */
obj_t BgL_tmpz00_12894;
if(
INTEGERP(BgL_rz00_2381))
{ /* Ieee/number.scm 1178 */
BgL_tmpz00_12894 = BgL_rz00_2381
; }  else 
{ 
obj_t BgL_auxz00_12897;
BgL_auxz00_12897 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)43297)), BGl_string5350z00zz__r4_numbers_6_5z00, BGl_string5267z00zz__r4_numbers_6_5z00, BgL_rz00_2381); 
FAILURE(BgL_auxz00_12897,BFALSE,BFALSE);} 
BgL_n1z00_5986 = 
(long)CINT(BgL_tmpz00_12894); } 
BgL_test6489z00_12867 = 
(BgL_n1z00_5986==((long)16)); }  else 
{ /* Ieee/number.scm 1177 */
BgL_test6489z00_12867 = ((bool_t)0)
; } }  else 
{ /* Ieee/number.scm 1176 */
BgL_test6489z00_12867 = ((bool_t)0)
; } } 
if(BgL_test6489z00_12867)
{ 
long BgL_iz00_12903;
BgL_iz00_12903 = 
(BgL_iz00_2386-((long)1)); 
BgL_iz00_2386 = BgL_iz00_12903; 
goto BgL_zc3z04anonymousza32720ze3z87_2387;}  else 
{ /* Ieee/number.scm 1180 */
bool_t BgL_test6495z00_12905;
{ /* Ieee/number.scm 1180 */
bool_t BgL_test6496z00_12906;
{ /* Ieee/number.scm 1180 */
unsigned char BgL_tmpz00_12907;
{ /* Ieee/number.scm 1180 */
long BgL_l4835z00_6629;
BgL_l4835z00_6629 = 
STRING_LENGTH(BgL_xz00_2380); 
if(
BOUND_CHECK(BgL_iz00_2386, BgL_l4835z00_6629))
{ /* Ieee/number.scm 1180 */
BgL_tmpz00_12907 = 
STRING_REF(BgL_xz00_2380, BgL_iz00_2386)
; }  else 
{ 
obj_t BgL_auxz00_12912;
BgL_auxz00_12912 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)43346)), BGl_string5349z00zz__r4_numbers_6_5z00, BgL_xz00_2380, 
(int)(BgL_l4835z00_6629), 
(int)(BgL_iz00_2386)); 
FAILURE(BgL_auxz00_12912,BFALSE,BFALSE);} } 
BgL_test6496z00_12906 = 
(BgL_tmpz00_12907>=((unsigned char)'A')); } 
if(BgL_test6496z00_12906)
{ /* Ieee/number.scm 1181 */
bool_t BgL_test6498z00_12919;
{ /* Ieee/number.scm 1181 */
unsigned char BgL_tmpz00_12920;
{ /* Ieee/number.scm 1181 */
long BgL_l4839z00_6633;
BgL_l4839z00_6633 = 
STRING_LENGTH(BgL_xz00_2380); 
if(
BOUND_CHECK(BgL_iz00_2386, BgL_l4839z00_6633))
{ /* Ieee/number.scm 1181 */
BgL_tmpz00_12920 = 
STRING_REF(BgL_xz00_2380, BgL_iz00_2386)
; }  else 
{ 
obj_t BgL_auxz00_12925;
BgL_auxz00_12925 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)43380)), BGl_string5349z00zz__r4_numbers_6_5z00, BgL_xz00_2380, 
(int)(BgL_l4839z00_6633), 
(int)(BgL_iz00_2386)); 
FAILURE(BgL_auxz00_12925,BFALSE,BFALSE);} } 
BgL_test6498z00_12919 = 
(BgL_tmpz00_12920<=((unsigned char)'F')); } 
if(BgL_test6498z00_12919)
{ /* Ieee/number.scm 1182 */
long BgL_n1z00_6002;
{ /* Ieee/number.scm 1182 */
obj_t BgL_tmpz00_12932;
if(
INTEGERP(BgL_rz00_2381))
{ /* Ieee/number.scm 1182 */
BgL_tmpz00_12932 = BgL_rz00_2381
; }  else 
{ 
obj_t BgL_auxz00_12935;
BgL_auxz00_12935 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)43410)), BGl_string5350z00zz__r4_numbers_6_5z00, BGl_string5267z00zz__r4_numbers_6_5z00, BgL_rz00_2381); 
FAILURE(BgL_auxz00_12935,BFALSE,BFALSE);} 
BgL_n1z00_6002 = 
(long)CINT(BgL_tmpz00_12932); } 
BgL_test6495z00_12905 = 
(BgL_n1z00_6002==((long)16)); }  else 
{ /* Ieee/number.scm 1181 */
BgL_test6495z00_12905 = ((bool_t)0)
; } }  else 
{ /* Ieee/number.scm 1180 */
BgL_test6495z00_12905 = ((bool_t)0)
; } } 
if(BgL_test6495z00_12905)
{ 
long BgL_iz00_12941;
BgL_iz00_12941 = 
(BgL_iz00_2386-((long)1)); 
BgL_iz00_2386 = BgL_iz00_12941; 
goto BgL_zc3z04anonymousza32720ze3z87_2387;}  else 
{ /* Ieee/number.scm 1184 */
bool_t BgL_test6501z00_12943;
{ /* Ieee/number.scm 1184 */
bool_t BgL_test6502z00_12944;
{ /* Ieee/number.scm 1184 */
unsigned char BgL_tmpz00_12945;
{ /* Ieee/number.scm 1184 */
long BgL_l4843z00_6637;
BgL_l4843z00_6637 = 
STRING_LENGTH(BgL_xz00_2380); 
if(
BOUND_CHECK(BgL_iz00_2386, BgL_l4843z00_6637))
{ /* Ieee/number.scm 1184 */
BgL_tmpz00_12945 = 
STRING_REF(BgL_xz00_2380, BgL_iz00_2386)
; }  else 
{ 
obj_t BgL_auxz00_12950;
BgL_auxz00_12950 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)43457)), BGl_string5349z00zz__r4_numbers_6_5z00, BgL_xz00_2380, 
(int)(BgL_l4843z00_6637), 
(int)(BgL_iz00_2386)); 
FAILURE(BgL_auxz00_12950,BFALSE,BFALSE);} } 
BgL_test6502z00_12944 = 
(BgL_tmpz00_12945==((unsigned char)'-')); } 
if(BgL_test6502z00_12944)
{ /* Ieee/number.scm 1184 */
BgL_test6501z00_12943 = ((bool_t)1)
; }  else 
{ /* Ieee/number.scm 1185 */
unsigned char BgL_tmpz00_12957;
{ /* Ieee/number.scm 1185 */
long BgL_l4847z00_6641;
BgL_l4847z00_6641 = 
STRING_LENGTH(BgL_xz00_2380); 
if(
BOUND_CHECK(BgL_iz00_2386, BgL_l4847z00_6641))
{ /* Ieee/number.scm 1185 */
BgL_tmpz00_12957 = 
STRING_REF(BgL_xz00_2380, BgL_iz00_2386)
; }  else 
{ 
obj_t BgL_auxz00_12962;
BgL_auxz00_12962 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)43496)), BGl_string5349z00zz__r4_numbers_6_5z00, BgL_xz00_2380, 
(int)(BgL_l4847z00_6641), 
(int)(BgL_iz00_2386)); 
FAILURE(BgL_auxz00_12962,BFALSE,BFALSE);} } 
BgL_test6501z00_12943 = 
(BgL_tmpz00_12957==((unsigned char)'+')); } } 
if(BgL_test6501z00_12943)
{ /* Ieee/number.scm 1184 */
if(
(BgL_iz00_2386==((long)0)))
{ /* Ieee/number.scm 1186 */
BgL_test6469z00_12749 = 
(BgL_lenz00_2383>((long)1))
; }  else 
{ /* Ieee/number.scm 1186 */
BgL_test6469z00_12749 = ((bool_t)0)
; } }  else 
{ /* Ieee/number.scm 1184 */
BgL_test6469z00_12749 = ((bool_t)0)
; } } } } } } } } } 
if(BgL_test6469z00_12749)
{ /* Ieee/number.scm 1231 */
long BgL_auxz00_12973;
{ /* Ieee/number.scm 1231 */
obj_t BgL_tmpz00_12974;
if(
INTEGERP(BgL_radixz00_127))
{ /* Ieee/number.scm 1231 */
BgL_tmpz00_12974 = BgL_radixz00_127
; }  else 
{ 
obj_t BgL_auxz00_12977;
BgL_auxz00_12977 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)44497)), BGl_string5347z00zz__r4_numbers_6_5z00, BGl_string5267z00zz__r4_numbers_6_5z00, BgL_radixz00_127); 
FAILURE(BgL_auxz00_12977,BFALSE,BFALSE);} 
BgL_auxz00_12973 = 
(long)CINT(BgL_tmpz00_12974); } 
return 
BGl_stringzd2ze3integerzd2objze3zz__r4_numbers_6_5_fixnumz00(BgL_xz00_126, BgL_auxz00_12973);}  else 
{ /* Ieee/number.scm 1232 */
bool_t BgL_test6507z00_12983;
{ /* Ieee/number.scm 1232 */
bool_t BgL_res4703z00_6103;
{ /* Ieee/number.scm 1232 */
long BgL_l1z00_6090;
BgL_l1z00_6090 = 
STRING_LENGTH(BgL_xz00_126); 
if(
(BgL_l1z00_6090==((long)6)))
{ /* Ieee/number.scm 1232 */
int BgL_arg2873z00_6093;
{ /* Ieee/number.scm 1232 */
char * BgL_auxz00_12989;char * BgL_tmpz00_12987;
BgL_auxz00_12989 = 
BSTRING_TO_STRING(BGl_string5351z00zz__r4_numbers_6_5z00); 
BgL_tmpz00_12987 = 
BSTRING_TO_STRING(BgL_xz00_126); 
BgL_arg2873z00_6093 = 
memcmp(BgL_tmpz00_12987, BgL_auxz00_12989, BgL_l1z00_6090); } 
BgL_res4703z00_6103 = 
(
(long)(BgL_arg2873z00_6093)==((long)0)); }  else 
{ /* Ieee/number.scm 1232 */
BgL_res4703z00_6103 = ((bool_t)0); } } 
BgL_test6507z00_12983 = BgL_res4703z00_6103; } 
if(BgL_test6507z00_12983)
{ /* Ieee/number.scm 1232 */
return BGL_REAL_CNST( BGl_real5352z00zz__r4_numbers_6_5z00);}  else 
{ /* Ieee/number.scm 1234 */
bool_t BgL_test6509z00_12994;
{ /* Ieee/number.scm 1234 */
bool_t BgL_res4708z00_6119;
{ /* Ieee/number.scm 1234 */
long BgL_l1z00_6106;
BgL_l1z00_6106 = 
STRING_LENGTH(BgL_xz00_126); 
if(
(BgL_l1z00_6106==((long)6)))
{ /* Ieee/number.scm 1234 */
int BgL_arg2873z00_6109;
{ /* Ieee/number.scm 1234 */
char * BgL_auxz00_13000;char * BgL_tmpz00_12998;
BgL_auxz00_13000 = 
BSTRING_TO_STRING(BGl_string5353z00zz__r4_numbers_6_5z00); 
BgL_tmpz00_12998 = 
BSTRING_TO_STRING(BgL_xz00_126); 
BgL_arg2873z00_6109 = 
memcmp(BgL_tmpz00_12998, BgL_auxz00_13000, BgL_l1z00_6106); } 
BgL_res4708z00_6119 = 
(
(long)(BgL_arg2873z00_6109)==((long)0)); }  else 
{ /* Ieee/number.scm 1234 */
BgL_res4708z00_6119 = ((bool_t)0); } } 
BgL_test6509z00_12994 = BgL_res4708z00_6119; } 
if(BgL_test6509z00_12994)
{ /* Ieee/number.scm 1234 */
return BGL_REAL_CNST( BGl_real5354z00zz__r4_numbers_6_5z00);}  else 
{ /* Ieee/number.scm 1236 */
bool_t BgL_test6511z00_13005;
{ /* Ieee/number.scm 1236 */
bool_t BgL_res4713z00_6135;
{ /* Ieee/number.scm 1236 */
long BgL_l1z00_6122;
BgL_l1z00_6122 = 
STRING_LENGTH(BgL_xz00_126); 
if(
(BgL_l1z00_6122==((long)6)))
{ /* Ieee/number.scm 1236 */
int BgL_arg2873z00_6125;
{ /* Ieee/number.scm 1236 */
char * BgL_auxz00_13011;char * BgL_tmpz00_13009;
BgL_auxz00_13011 = 
BSTRING_TO_STRING(BGl_string5355z00zz__r4_numbers_6_5z00); 
BgL_tmpz00_13009 = 
BSTRING_TO_STRING(BgL_xz00_126); 
BgL_arg2873z00_6125 = 
memcmp(BgL_tmpz00_13009, BgL_auxz00_13011, BgL_l1z00_6122); } 
BgL_res4713z00_6135 = 
(
(long)(BgL_arg2873z00_6125)==((long)0)); }  else 
{ /* Ieee/number.scm 1236 */
BgL_res4713z00_6135 = ((bool_t)0); } } 
BgL_test6511z00_13005 = BgL_res4713z00_6135; } 
if(BgL_test6511z00_13005)
{ /* Ieee/number.scm 1236 */
return BGL_REAL_CNST( BGl_real5356z00zz__r4_numbers_6_5z00);}  else 
{ /* Ieee/number.scm 1238 */
bool_t BgL_test6513z00_13016;
BgL_xz00_2459 = BgL_xz00_126; 
{ /* Ieee/number.scm 1190 */
long BgL_lenz00_2461;
BgL_lenz00_2461 = 
STRING_LENGTH(BgL_xz00_2459); 
{ 
long BgL_iz00_2463;bool_t BgL_ez00_2464;long BgL_pz00_2465;bool_t BgL_dz00_2466;
BgL_iz00_2463 = ((long)0); 
BgL_ez00_2464 = ((bool_t)0); 
BgL_pz00_2465 = ((long)0); 
BgL_dz00_2466 = ((bool_t)0); 
BgL_zc3z04anonymousza32802ze3z87_2467:
if(
(BgL_iz00_2463==BgL_lenz00_2461))
{ /* Ieee/number.scm 1195 */
BgL_test6513z00_13016 = BgL_dz00_2466
; }  else 
{ /* Ieee/number.scm 1197 */
bool_t BgL_test6515z00_13020;
{ /* Ieee/number.scm 1197 */
bool_t BgL_test6516z00_13021;
{ /* Ieee/number.scm 1197 */
unsigned char BgL_tmpz00_13022;
{ /* Ieee/number.scm 1197 */
long BgL_l4851z00_6645;
BgL_l4851z00_6645 = 
STRING_LENGTH(BgL_xz00_2459); 
if(
BOUND_CHECK(BgL_iz00_2463, BgL_l4851z00_6645))
{ /* Ieee/number.scm 1197 */
BgL_tmpz00_13022 = 
STRING_REF(BgL_xz00_2459, BgL_iz00_2463)
; }  else 
{ 
obj_t BgL_auxz00_13027;
BgL_auxz00_13027 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)43749)), BGl_string5349z00zz__r4_numbers_6_5z00, BgL_xz00_2459, 
(int)(BgL_l4851z00_6645), 
(int)(BgL_iz00_2463)); 
FAILURE(BgL_auxz00_13027,BFALSE,BFALSE);} } 
BgL_test6516z00_13021 = 
(BgL_tmpz00_13022>=((unsigned char)'0')); } 
if(BgL_test6516z00_13021)
{ /* Ieee/number.scm 1198 */
unsigned char BgL_tmpz00_13034;
{ /* Ieee/number.scm 1198 */
long BgL_l4855z00_6649;
BgL_l4855z00_6649 = 
STRING_LENGTH(BgL_xz00_2459); 
if(
BOUND_CHECK(BgL_iz00_2463, BgL_l4855z00_6649))
{ /* Ieee/number.scm 1198 */
BgL_tmpz00_13034 = 
STRING_REF(BgL_xz00_2459, BgL_iz00_2463)
; }  else 
{ 
obj_t BgL_auxz00_13039;
BgL_auxz00_13039 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)43783)), BGl_string5349z00zz__r4_numbers_6_5z00, BgL_xz00_2459, 
(int)(BgL_l4855z00_6649), 
(int)(BgL_iz00_2463)); 
FAILURE(BgL_auxz00_13039,BFALSE,BFALSE);} } 
BgL_test6515z00_13020 = 
(BgL_tmpz00_13034<=((unsigned char)'9')); }  else 
{ /* Ieee/number.scm 1197 */
BgL_test6515z00_13020 = ((bool_t)0)
; } } 
if(BgL_test6515z00_13020)
{ 
bool_t BgL_dz00_13049;long BgL_pz00_13048;long BgL_iz00_13046;
BgL_iz00_13046 = 
(BgL_iz00_2463+((long)1)); 
BgL_pz00_13048 = ((long)0); 
BgL_dz00_13049 = ((bool_t)1); 
BgL_dz00_2466 = BgL_dz00_13049; 
BgL_pz00_2465 = BgL_pz00_13048; 
BgL_iz00_2463 = BgL_iz00_13046; 
goto BgL_zc3z04anonymousza32802ze3z87_2467;}  else 
{ /* Ieee/number.scm 1203 */
bool_t BgL_test6519z00_13050;
{ /* Ieee/number.scm 1203 */
unsigned char BgL_tmpz00_13051;
{ /* Ieee/number.scm 1203 */
long BgL_l4859z00_6653;
BgL_l4859z00_6653 = 
STRING_LENGTH(BgL_xz00_2459); 
if(
BOUND_CHECK(BgL_iz00_2463, BgL_l4859z00_6653))
{ /* Ieee/number.scm 1203 */
BgL_tmpz00_13051 = 
STRING_REF(BgL_xz00_2459, BgL_iz00_2463)
; }  else 
{ 
obj_t BgL_auxz00_13056;
BgL_auxz00_13056 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)43861)), BGl_string5349z00zz__r4_numbers_6_5z00, BgL_xz00_2459, 
(int)(BgL_l4859z00_6653), 
(int)(BgL_iz00_2463)); 
FAILURE(BgL_auxz00_13056,BFALSE,BFALSE);} } 
BgL_test6519z00_13050 = 
(BgL_tmpz00_13051==((unsigned char)'.')); } 
if(BgL_test6519z00_13050)
{ 
long BgL_pz00_13065;long BgL_iz00_13063;
BgL_iz00_13063 = 
(BgL_iz00_2463+((long)1)); 
BgL_pz00_13065 = ((long)0); 
BgL_pz00_2465 = BgL_pz00_13065; 
BgL_iz00_2463 = BgL_iz00_13063; 
goto BgL_zc3z04anonymousza32802ze3z87_2467;}  else 
{ /* Ieee/number.scm 1208 */
bool_t BgL_test6521z00_13066;
{ /* Ieee/number.scm 1208 */
bool_t BgL_test6522z00_13067;
{ /* Ieee/number.scm 1208 */
unsigned char BgL_tmpz00_13068;
{ /* Ieee/number.scm 1208 */
long BgL_l4863z00_6657;
BgL_l4863z00_6657 = 
STRING_LENGTH(BgL_xz00_2459); 
if(
BOUND_CHECK(BgL_iz00_2463, BgL_l4863z00_6657))
{ /* Ieee/number.scm 1208 */
BgL_tmpz00_13068 = 
STRING_REF(BgL_xz00_2459, BgL_iz00_2463)
; }  else 
{ 
obj_t BgL_auxz00_13073;
BgL_auxz00_13073 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)43941)), BGl_string5349z00zz__r4_numbers_6_5z00, BgL_xz00_2459, 
(int)(BgL_l4863z00_6657), 
(int)(BgL_iz00_2463)); 
FAILURE(BgL_auxz00_13073,BFALSE,BFALSE);} } 
BgL_test6522z00_13067 = 
(BgL_tmpz00_13068==((unsigned char)'e')); } 
if(BgL_test6522z00_13067)
{ /* Ieee/number.scm 1208 */
BgL_test6521z00_13066 = ((bool_t)1)
; }  else 
{ /* Ieee/number.scm 1209 */
unsigned char BgL_tmpz00_13080;
{ /* Ieee/number.scm 1209 */
long BgL_l4867z00_6661;
BgL_l4867z00_6661 = 
STRING_LENGTH(BgL_xz00_2459); 
if(
BOUND_CHECK(BgL_iz00_2463, BgL_l4867z00_6661))
{ /* Ieee/number.scm 1209 */
BgL_tmpz00_13080 = 
STRING_REF(BgL_xz00_2459, BgL_iz00_2463)
; }  else 
{ 
obj_t BgL_auxz00_13085;
BgL_auxz00_13085 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)43980)), BGl_string5349z00zz__r4_numbers_6_5z00, BgL_xz00_2459, 
(int)(BgL_l4867z00_6661), 
(int)(BgL_iz00_2463)); 
FAILURE(BgL_auxz00_13085,BFALSE,BFALSE);} } 
BgL_test6521z00_13066 = 
(BgL_tmpz00_13080==((unsigned char)'E')); } } 
if(BgL_test6521z00_13066)
{ /* Ieee/number.scm 1210 */
bool_t BgL_test6525z00_13092;
if(BgL_ez00_2464)
{ /* Ieee/number.scm 1210 */
BgL_test6525z00_13092 = ((bool_t)1)
; }  else 
{ /* Ieee/number.scm 1210 */
if(BgL_dz00_2466)
{ /* Ieee/number.scm 1210 */
BgL_test6525z00_13092 = ((bool_t)0)
; }  else 
{ /* Ieee/number.scm 1210 */
BgL_test6525z00_13092 = ((bool_t)1)
; } } 
if(BgL_test6525z00_13092)
{ /* Ieee/number.scm 1210 */
BgL_test6513z00_13016 = ((bool_t)0)
; }  else 
{ 
long BgL_pz00_13098;bool_t BgL_ez00_13097;long BgL_iz00_13095;
BgL_iz00_13095 = 
(BgL_iz00_2463+((long)1)); 
BgL_ez00_13097 = ((bool_t)1); 
BgL_pz00_13098 = 
(BgL_iz00_2463+((long)1)); 
BgL_pz00_2465 = BgL_pz00_13098; 
BgL_ez00_2464 = BgL_ez00_13097; 
BgL_iz00_2463 = BgL_iz00_13095; 
goto BgL_zc3z04anonymousza32802ze3z87_2467;} }  else 
{ /* Ieee/number.scm 1216 */
bool_t BgL_test6528z00_13100;
{ /* Ieee/number.scm 1216 */
bool_t BgL_test6529z00_13101;
{ /* Ieee/number.scm 1216 */
unsigned char BgL_tmpz00_13102;
{ /* Ieee/number.scm 1216 */
long BgL_l4871z00_6665;
BgL_l4871z00_6665 = 
STRING_LENGTH(BgL_xz00_2459); 
if(
BOUND_CHECK(BgL_iz00_2463, BgL_l4871z00_6665))
{ /* Ieee/number.scm 1216 */
BgL_tmpz00_13102 = 
STRING_REF(BgL_xz00_2459, BgL_iz00_2463)
; }  else 
{ 
obj_t BgL_auxz00_13107;
BgL_auxz00_13107 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)44123)), BGl_string5349z00zz__r4_numbers_6_5z00, BgL_xz00_2459, 
(int)(BgL_l4871z00_6665), 
(int)(BgL_iz00_2463)); 
FAILURE(BgL_auxz00_13107,BFALSE,BFALSE);} } 
BgL_test6529z00_13101 = 
(BgL_tmpz00_13102==((unsigned char)'-')); } 
if(BgL_test6529z00_13101)
{ /* Ieee/number.scm 1216 */
BgL_test6528z00_13100 = ((bool_t)1)
; }  else 
{ /* Ieee/number.scm 1217 */
unsigned char BgL_tmpz00_13114;
{ /* Ieee/number.scm 1217 */
long BgL_l4875z00_6669;
BgL_l4875z00_6669 = 
STRING_LENGTH(BgL_xz00_2459); 
if(
BOUND_CHECK(BgL_iz00_2463, BgL_l4875z00_6669))
{ /* Ieee/number.scm 1217 */
BgL_tmpz00_13114 = 
STRING_REF(BgL_xz00_2459, BgL_iz00_2463)
; }  else 
{ 
obj_t BgL_auxz00_13119;
BgL_auxz00_13119 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)44162)), BGl_string5349z00zz__r4_numbers_6_5z00, BgL_xz00_2459, 
(int)(BgL_l4875z00_6669), 
(int)(BgL_iz00_2463)); 
FAILURE(BgL_auxz00_13119,BFALSE,BFALSE);} } 
BgL_test6528z00_13100 = 
(BgL_tmpz00_13114==((unsigned char)'+')); } } 
if(BgL_test6528z00_13100)
{ /* Ieee/number.scm 1218 */
bool_t BgL_test6532z00_13126;
{ /* Ieee/number.scm 1218 */
bool_t BgL__ortest_1061z00_2493;
BgL__ortest_1061z00_2493 = 
(BgL_iz00_2463==((long)0)); 
if(BgL__ortest_1061z00_2493)
{ /* Ieee/number.scm 1218 */
BgL_test6532z00_13126 = BgL__ortest_1061z00_2493
; }  else 
{ /* Ieee/number.scm 1218 */
BgL_test6532z00_13126 = 
(BgL_iz00_2463==BgL_pz00_2465)
; } } 
if(BgL_test6532z00_13126)
{ 
long BgL_pz00_13132;long BgL_iz00_13130;
BgL_iz00_13130 = 
(BgL_iz00_2463+((long)1)); 
BgL_pz00_13132 = ((long)0); 
BgL_pz00_2465 = BgL_pz00_13132; 
BgL_iz00_2463 = BgL_iz00_13130; 
goto BgL_zc3z04anonymousza32802ze3z87_2467;}  else 
{ /* Ieee/number.scm 1218 */
BgL_test6513z00_13016 = ((bool_t)0)
; } }  else 
{ /* Ieee/number.scm 1216 */
BgL_test6513z00_13016 = ((bool_t)0)
; } } } } } } } 
if(BgL_test6513z00_13016)
{ /* Ieee/number.scm 1239 */
bool_t BgL_test6534z00_13133;
{ /* Ieee/number.scm 1239 */
long BgL_n1z00_6136;
{ /* Ieee/number.scm 1239 */
obj_t BgL_tmpz00_13134;
if(
INTEGERP(BgL_radixz00_127))
{ /* Ieee/number.scm 1239 */
BgL_tmpz00_13134 = BgL_radixz00_127
; }  else 
{ 
obj_t BgL_auxz00_13137;
BgL_auxz00_13137 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string5263z00zz__r4_numbers_6_5z00, 
BINT(((long)44677)), BGl_string5347z00zz__r4_numbers_6_5z00, BGl_string5267z00zz__r4_numbers_6_5z00, BgL_radixz00_127); 
FAILURE(BgL_auxz00_13137,BFALSE,BFALSE);} 
BgL_n1z00_6136 = 
(long)CINT(BgL_tmpz00_13134); } 
BgL_test6534z00_13133 = 
(BgL_n1z00_6136==((long)10)); } 
if(BgL_test6534z00_13133)
{ /* Ieee/number.scm 1240 */
double BgL_res4730z00_6190;
{ /* Ieee/number.scm 1240 */
char * BgL_stringz00_6138;
BgL_stringz00_6138 = 
BSTRING_TO_STRING(BgL_xz00_126); 
{ /* Ieee/number.scm 1240 */
bool_t BgL_test6536z00_13144;
{ /* Ieee/number.scm 1240 */
bool_t BgL_res4719z00_6157;
{ /* Ieee/number.scm 1240 */
obj_t BgL_string1z00_6142;
BgL_string1z00_6142 = 
string_to_bstring(BgL_stringz00_6138); 
{ /* Ieee/number.scm 1240 */
long BgL_l1z00_6144;
BgL_l1z00_6144 = 
STRING_LENGTH(BgL_string1z00_6142); 
if(
(BgL_l1z00_6144==((long)6)))
{ /* Ieee/number.scm 1240 */
int BgL_arg2873z00_6147;
{ /* Ieee/number.scm 1240 */
char * BgL_auxz00_13151;char * BgL_tmpz00_13149;
BgL_auxz00_13151 = 
BSTRING_TO_STRING(BGl_string5351z00zz__r4_numbers_6_5z00); 
BgL_tmpz00_13149 = 
BSTRING_TO_STRING(BgL_string1z00_6142); 
BgL_arg2873z00_6147 = 
memcmp(BgL_tmpz00_13149, BgL_auxz00_13151, BgL_l1z00_6144); } 
BgL_res4719z00_6157 = 
(
(long)(BgL_arg2873z00_6147)==((long)0)); }  else 
{ /* Ieee/number.scm 1240 */
BgL_res4719z00_6157 = ((bool_t)0); } } } 
BgL_test6536z00_13144 = BgL_res4719z00_6157; } 
if(BgL_test6536z00_13144)
{ /* Ieee/number.scm 1240 */
BgL_res4730z00_6190 = BGL_NAN; }  else 
{ /* Ieee/number.scm 1240 */
bool_t BgL_test6538z00_13156;
{ /* Ieee/number.scm 1240 */
bool_t BgL_res4724z00_6173;
{ /* Ieee/number.scm 1240 */
obj_t BgL_string1z00_6158;
BgL_string1z00_6158 = 
string_to_bstring(BgL_stringz00_6138); 
{ /* Ieee/number.scm 1240 */
long BgL_l1z00_6160;
BgL_l1z00_6160 = 
STRING_LENGTH(BgL_string1z00_6158); 
if(
(BgL_l1z00_6160==((long)6)))
{ /* Ieee/number.scm 1240 */
int BgL_arg2873z00_6163;
{ /* Ieee/number.scm 1240 */
char * BgL_auxz00_13163;char * BgL_tmpz00_13161;
BgL_auxz00_13163 = 
BSTRING_TO_STRING(BGl_string5353z00zz__r4_numbers_6_5z00); 
BgL_tmpz00_13161 = 
BSTRING_TO_STRING(BgL_string1z00_6158); 
BgL_arg2873z00_6163 = 
memcmp(BgL_tmpz00_13161, BgL_auxz00_13163, BgL_l1z00_6160); } 
BgL_res4724z00_6173 = 
(
(long)(BgL_arg2873z00_6163)==((long)0)); }  else 
{ /* Ieee/number.scm 1240 */
BgL_res4724z00_6173 = ((bool_t)0); } } } 
BgL_test6538z00_13156 = BgL_res4724z00_6173; } 
if(BgL_test6538z00_13156)
{ /* Ieee/number.scm 1240 */
BgL_res4730z00_6190 = BGL_INFINITY; }  else 
{ /* Ieee/number.scm 1240 */
bool_t BgL_test6540z00_13168;
{ /* Ieee/number.scm 1240 */
bool_t BgL_res4729z00_6189;
{ /* Ieee/number.scm 1240 */
obj_t BgL_string1z00_6174;
BgL_string1z00_6174 = 
string_to_bstring(BgL_stringz00_6138); 
{ /* Ieee/number.scm 1240 */
long BgL_l1z00_6176;
BgL_l1z00_6176 = 
STRING_LENGTH(BgL_string1z00_6174); 
if(
(BgL_l1z00_6176==((long)6)))
{ /* Ieee/number.scm 1240 */
int BgL_arg2873z00_6179;
{ /* Ieee/number.scm 1240 */
char * BgL_auxz00_13175;char * BgL_tmpz00_13173;
BgL_auxz00_13175 = 
BSTRING_TO_STRING(BGl_string5355z00zz__r4_numbers_6_5z00); 
BgL_tmpz00_13173 = 
BSTRING_TO_STRING(BgL_string1z00_6174); 
BgL_arg2873z00_6179 = 
memcmp(BgL_tmpz00_13173, BgL_auxz00_13175, BgL_l1z00_6176); } 
BgL_res4729z00_6189 = 
(
(long)(BgL_arg2873z00_6179)==((long)0)); }  else 
{ /* Ieee/number.scm 1240 */
BgL_res4729z00_6189 = ((bool_t)0); } } } 
BgL_test6540z00_13168 = BgL_res4729z00_6189; } 
if(BgL_test6540z00_13168)
{ /* Ieee/number.scm 1240 */
BgL_res4730z00_6190 = (-BGL_INFINITY); }  else 
{ /* Ieee/number.scm 1240 */
BgL_res4730z00_6190 = 
STRTOD(BgL_stringz00_6138); } } } } } 
return 
DOUBLE_TO_REAL(BgL_res4730z00_6190);}  else 
{ /* Ieee/number.scm 1239 */
return 
BGl_errorz00zz__errorz00(BGl_string5347z00zz__r4_numbers_6_5z00, BGl_string5357z00zz__r4_numbers_6_5z00, BgL_radixz00_127);} }  else 
{ /* Ieee/number.scm 1238 */
return BFALSE;} } } } } } }  else 
{ /* Ieee/number.scm 1226 */
return 
BGl_errorz00zz__errorz00(BGl_symbol5340z00zz__r4_numbers_6_5z00, BGl_string5345z00zz__r4_numbers_6_5z00, BgL_radixz00_127);} } } 

}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__r4_numbers_6_5z00()
{
{ /* Ieee/number.scm 18 */
BGl_modulezd2initializa7ationz75zz__errorz00(((long)37115357), 
BSTRING_TO_STRING(BGl_string5358z00zz__r4_numbers_6_5z00)); 
return 
BGl_modulezd2initializa7ationz75zz__paramz00(((long)453938973), 
BSTRING_TO_STRING(BGl_string5358z00zz__r4_numbers_6_5z00));} 

}

#ifdef __cplusplus
}
#endif
