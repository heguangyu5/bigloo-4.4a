/*===========================================================================*/
/*   (Ieee/flonum.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -c Ieee/flonum.scm -indent -o objs/obj_s/Ieee/flonum.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
extern obj_t bgl_double_to_ieee_string(double);
BGL_EXPORTED_DECL bool_t BGl_ze3zd3flz30zz__r4_numbers_6_5_flonumz00(double, double);
static obj_t BGl_z62negflz62zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
static obj_t BGl_z62stringzd2ze3realz53zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
static obj_t BGl_z62remainderflz62zz__r4_numbers_6_5_flonumz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_realzd2ze3ieeezd2stringze3zz__r4_numbers_6_5_flonumz00(obj_t);
static obj_t BGl_z62za2flzc0zz__r4_numbers_6_5_flonumz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL float BGl_ieeezd2stringzd2ze3floatze3zz__r4_numbers_6_5_flonumz00(obj_t);
BGL_EXPORTED_DECL bool_t BGl_infiniteflzf3zf3zz__r4_numbers_6_5_flonumz00(double);
BGL_EXPORTED_DECL bool_t BGl_ze3flze3zz__r4_numbers_6_5_flonumz00(double, double);
extern obj_t the_failure(obj_t, obj_t, obj_t);
static obj_t BGl_z62oddflzf3z91zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
extern float bgl_ieee_string_to_float(obj_t);
BGL_EXPORTED_DECL double BGl_ceilingflz00zz__r4_numbers_6_5_flonumz00(double);
BGL_EXPORTED_DECL double BGl_exptflz00zz__r4_numbers_6_5_flonumz00(double, double);
static obj_t BGl_z62atanzd22flzd2urz62zz__r4_numbers_6_5_flonumz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL double BGl_randomflz00zz__r4_numbers_6_5_flonumz00();
BGL_EXPORTED_DECL double BGl_atanzd21flzd2zz__r4_numbers_6_5_flonumz00(double);
BGL_EXPORTED_DECL double BGl_sqrtflz00zz__r4_numbers_6_5_flonumz00(double);
static obj_t BGl_requirezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00 = BUNSPEC;
static obj_t BGl_z62asinflz62zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
BGL_EXPORTED_DECL double BGl_stringzd2ze3realz31zz__r4_numbers_6_5_flonumz00(char *);
BGL_EXPORTED_DECL double BGl_logflz00zz__r4_numbers_6_5_flonumz00(double);
BGL_EXPORTED_DECL double BGl_minflz00zz__r4_numbers_6_5_flonumz00(double, obj_t);
static obj_t BGl_z62doublezd2ze3ieeezd2stringz81zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
BGL_EXPORTED_DECL double BGl_minzd22flzd2zz__r4_numbers_6_5_flonumz00(double, double);
BGL_EXPORTED_DECL double BGl_maxzd22flzd2zz__r4_numbers_6_5_flonumz00(double, double);
static obj_t BGl_z62minzd22flzb0zz__r4_numbers_6_5_flonumz00(obj_t, obj_t, obj_t);
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62maxflz62zz__r4_numbers_6_5_flonumz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL double BGl_zf2flzf2zz__r4_numbers_6_5_flonumz00(double, double);
static obj_t BGl_z62maxzd22flzb0zz__r4_numbers_6_5_flonumz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_evenflzf3zf3zz__r4_numbers_6_5_flonumz00(double);
static obj_t BGl_z62zb2flzd0zz__r4_numbers_6_5_flonumz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62evenflzf3z91zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonum_dtoaz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
BGL_EXPORTED_DECL BGL_LONGLONG_T BGl_doublezd2ze3llongzd2bitsze3zz__r4_numbers_6_5_flonumz00(double);
static obj_t BGl_z62ieeezd2stringzd2ze3floatz81zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_za7eroflzf3z54zz__r4_numbers_6_5_flonumz00(double);
BGL_EXPORTED_DECL int BGl_floatzd2ze3intzd2bitsze3zz__r4_numbers_6_5_flonumz00(float);
BGL_EXPORTED_DECL double BGl_atanflz00zz__r4_numbers_6_5_flonumz00(double, obj_t);
BGL_EXPORTED_DECL double BGl_atanzd22flzd2zz__r4_numbers_6_5_flonumz00(double, double);
BGL_EXPORTED_DECL double BGl_acosflz00zz__r4_numbers_6_5_flonumz00(double);
static obj_t BGl_z62za7eroflzf3z36zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
static obj_t BGl_z62floatzd2ze3intzd2bitsz81zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
static obj_t BGl_z62ieeezd2stringzd2ze3realz81zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
BGL_EXPORTED_DECL double BGl_expflz00zz__r4_numbers_6_5_flonumz00(double);
BGL_EXPORTED_DECL bool_t BGl_nanflzf3zf3zz__r4_numbers_6_5_flonumz00(double);
BGL_EXPORTED_DECL double BGl_ieeezd2stringzd2ze3doubleze3zz__r4_numbers_6_5_flonumz00(obj_t);
static obj_t BGl_z62finiteflzf3z91zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_realzf3zf3zz__r4_numbers_6_5_flonumz00(obj_t);
BGL_EXPORTED_DECL bool_t BGl_positiveflzf3zf3zz__r4_numbers_6_5_flonumz00(double);
static obj_t BGl_z62zc3flza1zz__r4_numbers_6_5_flonumz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62doublezd2ze3llongzd2bitsz81zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
BGL_EXPORTED_DECL double BGl_floorflz00zz__r4_numbers_6_5_flonumz00(double);
BGL_EXPORTED_DECL double BGl_roundflz00zz__r4_numbers_6_5_flonumz00(double);
static obj_t BGl_z62floorflz62zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
BGL_EXPORTED_DECL double BGl_truncateflz00zz__r4_numbers_6_5_flonumz00(double);
static obj_t BGl_z62roundflz62zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
static obj_t BGl_z62negativeflzf3z91zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
BGL_EXPORTED_DECL double BGl_tanflz00zz__r4_numbers_6_5_flonumz00(double);
static obj_t BGl_gczd2rootszd2initz00zz__r4_numbers_6_5_flonumz00();
BGL_EXPORTED_DECL double BGl_cosflz00zz__r4_numbers_6_5_flonumz00(double);
static obj_t BGl_z62logflz62zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
static obj_t BGl_importedzd2moduleszd2initz00zz__r4_numbers_6_5_flonumz00();
static obj_t BGl_z62minflz62zz__r4_numbers_6_5_flonumz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62zd2flzb0zz__r4_numbers_6_5_flonumz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL double BGl_absflz00zz__r4_numbers_6_5_flonumz00(double);
BGL_EXPORTED_DECL bool_t BGl_oddflzf3zf3zz__r4_numbers_6_5_flonumz00(double);
static obj_t BGl_z62signbitflz62zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
static obj_t BGl_z62zd3flzb1zz__r4_numbers_6_5_flonumz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_ieeezd2stringzd2ze3realze3zz__r4_numbers_6_5_flonumz00(obj_t);
static obj_t BGl_z62randomflz62zz__r4_numbers_6_5_flonumz00(obj_t);
static obj_t BGl_z62atanzd21flzb0zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
BGL_EXPORTED_DECL double BGl_asinflz00zz__r4_numbers_6_5_flonumz00(double);
static obj_t BGl_z62truncateflz62zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
static obj_t BGl_z62expflz62zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
BGL_EXPORTED_DECL double BGl_remainderflz00zz__r4_numbers_6_5_flonumz00(double, double);
static obj_t BGl_z62zc3zd3flz72zz__r4_numbers_6_5_flonumz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_finiteflzf3zf3zz__r4_numbers_6_5_flonumz00(double);
BGL_EXPORTED_DECL double BGl_za2flza2zz__r4_numbers_6_5_flonumz00(double, double);
static obj_t BGl_z62sqrtflzd2urzb0zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
static obj_t BGl_z62realzf3z91zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
BGL_EXPORTED_DECL double BGl_atanzd22flzd2urz00zz__r4_numbers_6_5_flonumz00(double, double);
static obj_t BGl_z62infiniteflzf3z91zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
static obj_t BGl_z62ze3flz81zz__r4_numbers_6_5_flonumz00(obj_t, obj_t, obj_t);
extern double bgl_ieee_string_to_double(obj_t);
static obj_t BGl_z62atanzd22flzb0zz__r4_numbers_6_5_flonumz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_integerflzf3zf3zz__r4_numbers_6_5_flonumz00(double);
BGL_EXPORTED_DECL bool_t BGl_zc3zd3flz10zz__r4_numbers_6_5_flonumz00(double, double);
BGL_EXPORTED_DECL obj_t BGl_doublezd2ze3ieeezd2stringze3zz__r4_numbers_6_5_flonumz00(double);
BGL_EXPORTED_DECL double BGl_zb2flzb2zz__r4_numbers_6_5_flonumz00(double, double);
static obj_t BGl_z62tanflz62zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
BGL_EXPORTED_DECL double BGl_sinflz00zz__r4_numbers_6_5_flonumz00(double);
static obj_t BGl_z62cosflz62zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
static obj_t BGl_z62zf2flz90zz__r4_numbers_6_5_flonumz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_signbitflz00zz__r4_numbers_6_5_flonumz00(double);
BGL_EXPORTED_DECL double BGl_llongzd2bitszd2ze3doubleze3zz__r4_numbers_6_5_flonumz00(BGL_LONGLONG_T);
static obj_t BGl_z62absflz62zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
static obj_t BGl_z62exptflz62zz__r4_numbers_6_5_flonumz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62sqrtflz62zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
static obj_t BGl_z62integerflzf3z91zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
BGL_EXPORTED_DECL double BGl_negflz00zz__r4_numbers_6_5_flonumz00(double);
BGL_EXPORTED_DECL double BGl_sqrtflzd2urzd2zz__r4_numbers_6_5_flonumz00(double);
BGL_EXPORTED_DECL float BGl_intzd2bitszd2ze3floatze3zz__r4_numbers_6_5_flonumz00(int);
static obj_t BGl_z62ieeezd2stringzd2ze3doublez81zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
static obj_t BGl_z62intzd2bitszd2ze3floatz81zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
static obj_t BGl_z62realzd2ze3ieeezd2stringz81zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_floatzd2ze3ieeezd2stringze3zz__r4_numbers_6_5_flonumz00(float);
BGL_EXPORTED_DECL bool_t BGl_zc3flzc3zz__r4_numbers_6_5_flonumz00(double, double);
extern obj_t bgl_float_to_ieee_string(float);
static obj_t BGl_z62positiveflzf3z91zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
static obj_t BGl_z62llongzd2bitszd2ze3doublez81zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
static obj_t BGl_z62ceilingflz62zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
static obj_t BGl_z62atanflz62zz__r4_numbers_6_5_flonumz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62acosflz62zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_negativeflzf3zf3zz__r4_numbers_6_5_flonumz00(double);
BGL_EXPORTED_DECL bool_t BGl_flonumzf3zf3zz__r4_numbers_6_5_flonumz00(obj_t);
static obj_t BGl_z62ze3zd3flz52zz__r4_numbers_6_5_flonumz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62nanflzf3z91zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
BGL_EXPORTED_DECL double BGl_maxflz00zz__r4_numbers_6_5_flonumz00(double, obj_t);
static obj_t BGl_z62flonumzf3z91zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
BGL_EXPORTED_DECL double BGl_zd2flzd2zz__r4_numbers_6_5_flonumz00(double, double);
static obj_t BGl_z62sinflz62zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_zd3flzd3zz__r4_numbers_6_5_flonumz00(double, double);
static obj_t BGl_z62floatzd2ze3ieeezd2stringz81zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_realzf3zd2envz21zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762realza7f3za791za7za7_1717za7, BGl_z62realzf3z91zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_floatzd2ze3ieeezd2stringzd2envz31zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762floatza7d2za7e3ie1718za7, BGl_z62floatzd2ze3ieeezd2stringz81zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ze3flzd2envz31zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762za7e3flza781za7za7__r1719za7, BGl_z62ze3flz81zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_atanzd21flzd2envz00zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762atanza7d21flza7b01720za7, BGl_z62atanzd21flzb0zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_sqrtflzd2envzd2zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762sqrtflza762za7za7__1721z00, BGl_z62sqrtflz62zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_doublezd2ze3ieeezd2stringzd2envz31zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762doubleza7d2za7e3i1722za7, BGl_z62doublezd2ze3ieeezd2stringz81zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_logflzd2envzd2zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762logflza762za7za7__r1723z00, BGl_z62logflz62zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_cosflzd2envzd2zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762cosflza762za7za7__r1724z00, BGl_z62cosflz62zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_signbitflzd2envzd2zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762signbitflza762za71725za7, BGl_z62signbitflz62zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ieeezd2stringzd2ze3realzd2envz31zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762ieeeza7d2string1726z00, BGl_z62ieeezd2stringzd2ze3realz81zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_acosflzd2envzd2zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762acosflza762za7za7__1727z00, BGl_z62acosflz62zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ze3zd3flzd2envze2zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762za7e3za7d3flza752za7za71728z00, BGl_z62ze3zd3flz52zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ieeezd2stringzd2ze3floatzd2envz31zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762ieeeza7d2string1729z00, BGl_z62ieeezd2stringzd2ze3floatz81zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_positiveflzf3zd2envz21zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762positiveflza7f31730z00, BGl_z62positiveflzf3z91zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_zc3flzd2envz11zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762za7c3flza7a1za7za7__r1731za7, BGl_z62zc3flza1zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ceilingflzd2envzd2zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762ceilingflza762za71732za7, BGl_z62ceilingflz62zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_floorflzd2envzd2zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762floorflza762za7za7_1733z00, BGl_z62floorflz62zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_truncateflzd2envzd2zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762truncateflza7621734z00, BGl_z62truncateflz62zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_integerflzf3zd2envz21zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762integerflza7f3za71735za7, BGl_z62integerflzf3z91zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_zc3zd3flzd2envzc2zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762za7c3za7d3flza772za7za71736z00, BGl_z62zc3zd3flz72zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_minzd22flzd2envz00zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762minza7d22flza7b0za71737z00, BGl_z62minzd22flzb0zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_zf2flzd2envz20zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762za7f2flza790za7za7__r1738za7, BGl_z62zf2flz90zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_absflzd2envzd2zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762absflza762za7za7__r1739z00, BGl_z62absflz62zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_oddflzf3zd2envz21zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762oddflza7f3za791za7za71740za7, BGl_z62oddflzf3z91zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_doublezd2ze3llongzd2bitszd2envz31zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762doubleza7d2za7e3l1741za7, BGl_z62doublezd2ze3llongzd2bitsz81zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_za7eroflzf3zd2envz86zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762za7a7eroflza7f3za731742z00, BGl_z62za7eroflzf3z36zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_atanzd22flzd2envz00zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762atanza7d22flza7b01743za7, BGl_z62atanzd22flzb0zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string1700z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1700za700za7za7_1744za7, "+inf.0", 6 );
DEFINE_STRING( BGl_string1701z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1701za700za7za7_1745za7, "-inf.0", 6 );
DEFINE_STRING( BGl_string1702z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1702za700za7za7_1746za7, "&string->real", 13 );
DEFINE_STRING( BGl_string1703z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1703za700za7za7_1747za7, "bstring", 7 );
DEFINE_STRING( BGl_string1704z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1704za700za7za7_1748za7, "&ieee-string->real", 18 );
DEFINE_STRING( BGl_string1705z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1705za700za7za7_1749za7, "&real->ieee-string", 18 );
DEFINE_STRING( BGl_string1706z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1706za700za7za7_1750za7, "&ieee-string->double", 20 );
DEFINE_STRING( BGl_string1707z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1707za700za7za7_1751za7, "&double->ieee-string", 20 );
DEFINE_STRING( BGl_string1708z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1708za700za7za7_1752za7, "&ieee-string->float", 19 );
DEFINE_STRING( BGl_string1709z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1709za700za7za7_1753za7, "&float->ieee-string", 19 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_finiteflzf3zd2envz21zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762finiteflza7f3za791754za7, BGl_z62finiteflzf3z91zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_intzd2bitszd2ze3floatzd2envz31zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762intza7d2bitsza7d21755za7, BGl_z62intzd2bitszd2ze3floatz81zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_za2flzd2envz70zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762za7a2flza7c0za7za7__r1756za7, BGl_z62za2flzc0zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string1710z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1710za700za7za7_1757za7, "&double->llong-bits", 19 );
DEFINE_STRING( BGl_string1711z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1711za700za7za7_1758za7, "&llong-bits->double", 19 );
DEFINE_STRING( BGl_string1712z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1712za700za7za7_1759za7, "bllong", 6 );
DEFINE_STRING( BGl_string1713z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1713za700za7za7_1760za7, "&float->int-bits", 16 );
DEFINE_STRING( BGl_string1714z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1714za700za7za7_1761za7, "&int-bits->float", 16 );
DEFINE_STRING( BGl_string1715z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1715za700za7za7_1762za7, "bint", 4 );
DEFINE_STRING( BGl_string1716z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1716za700za7za7_1763za7, "__r4_numbers_6_5_flonum", 23 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2ze3realzd2envze3zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762stringza7d2za7e3r1764za7, BGl_z62stringzd2ze3realz53zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string1647z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1647za700za7za7_1765za7, "/tmp/4.4a/runtime/Ieee/flonum.scm", 33 );
DEFINE_STRING( BGl_string1648z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1648za700za7za7_1766za7, "&=fl", 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_tanflzd2envzd2zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762tanflza762za7za7__r1767z00, BGl_z62tanflz62zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1649za700za7za7_1768za7, "real", 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_minflzd2envzd2zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762minflza762za7za7__r1769z00, va_generic_entry, BGl_z62minflz62zz__r4_numbers_6_5_flonumz00, BUNSPEC, -2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_sinflzd2envzd2zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762sinflza762za7za7__r1770z00, BGl_z62sinflz62zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_zd2flzd2envz00zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762za7d2flza7b0za7za7__r1771za7, BGl_z62zd2flzb0zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_zd3flzd2envz01zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762za7d3flza7b1za7za7__r1772za7, BGl_z62zd3flzb1zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string1650z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1650za700za7za7_1773za7, "&<fl", 4 );
DEFINE_STRING( BGl_string1651z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1651za700za7za7_1774za7, "&>fl", 4 );
DEFINE_STRING( BGl_string1652z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1652za700za7za7_1775za7, "&<=fl", 5 );
DEFINE_STRING( BGl_string1653z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1653za700za7za7_1776za7, "&>=fl", 5 );
DEFINE_STRING( BGl_string1654z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1654za700za7za7_1777za7, "&zerofl?", 8 );
DEFINE_STRING( BGl_string1655z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1655za700za7za7_1778za7, "&positivefl?", 12 );
DEFINE_STRING( BGl_string1656z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1656za700za7za7_1779za7, "&negativefl?", 12 );
DEFINE_STRING( BGl_string1657z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1657za700za7za7_1780za7, "&+fl", 4 );
DEFINE_STRING( BGl_string1658z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1658za700za7za7_1781za7, "&-fl", 4 );
DEFINE_STRING( BGl_string1659z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1659za700za7za7_1782za7, "&*fl", 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_atanflzd2envzd2zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762atanflza762za7za7__1783z00, va_generic_entry, BGl_z62atanflz62zz__r4_numbers_6_5_flonumz00, BUNSPEC, -2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_asinflzd2envzd2zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762asinflza762za7za7__1784z00, BGl_z62asinflz62zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_negflzd2envzd2zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762negflza762za7za7__r1785z00, BGl_z62negflz62zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string1660z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1660za700za7za7_1786za7, "&/fl", 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_nanflzf3zd2envz21zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762nanflza7f3za791za7za71787za7, BGl_z62nanflzf3z91zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_remainderflzd2envzd2zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762remainderflza761788z00, BGl_z62remainderflz62zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string1661z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1661za700za7za7_1789za7, "&negfl", 6 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ieeezd2stringzd2ze3doublezd2envz31zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762ieeeza7d2string1790z00, BGl_z62ieeezd2stringzd2ze3doublez81zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string1662z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1662za700za7za7_1791za7, "loop", 4 );
DEFINE_STRING( BGl_string1663z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1663za700za7za7_1792za7, "pair", 4 );
DEFINE_STRING( BGl_string1664z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1664za700za7za7_1793za7, "&maxfl", 6 );
DEFINE_STRING( BGl_string1665z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1665za700za7za7_1794za7, "&max-2fl", 8 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_sqrtflzd2urzd2envz00zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762sqrtflza7d2urza7b1795za7, BGl_z62sqrtflzd2urzb0zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string1666z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1666za700za7za7_1796za7, "&min-2fl", 8 );
DEFINE_STRING( BGl_string1667z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1667za700za7za7_1797za7, "&minfl", 6 );
DEFINE_STRING( BGl_string1668z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1668za700za7za7_1798za7, "&absfl", 6 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_realzd2ze3ieeezd2stringzd2envz31zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762realza7d2za7e3iee1799za7, BGl_z62realzd2ze3ieeezd2stringz81zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string1669z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1669za700za7za7_1800za7, "&floorfl", 8 );
DEFINE_REAL( BGl_real1683z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_real1683za700za7za7__r1801za7, 0.0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_infiniteflzf3zd2envz21zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762infiniteflza7f31802z00, BGl_z62infiniteflzf3z91zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_atanzd22flzd2urzd2envzd2zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762atanza7d22flza7d21803za7, BGl_z62atanzd22flzd2urz62zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string1670z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1670za700za7za7_1804za7, "&ceilingfl", 10 );
DEFINE_STRING( BGl_string1671z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1671za700za7za7_1805za7, "&truncatefl", 11 );
DEFINE_STRING( BGl_string1672z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1672za700za7za7_1806za7, "&roundfl", 8 );
DEFINE_STRING( BGl_string1673z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1673za700za7za7_1807za7, "&remainderfl", 12 );
DEFINE_STRING( BGl_string1674z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1674za700za7za7_1808za7, "&expfl", 6 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_exptflzd2envzd2zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762exptflza762za7za7__1809z00, BGl_z62exptflz62zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string1675z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1675za700za7za7_1810za7, "&logfl", 6 );
DEFINE_STRING( BGl_string1676z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1676za700za7za7_1811za7, "&sinfl", 6 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_randomflzd2envzd2zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762randomflza762za7za71812z00, BGl_z62randomflz62zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string1677z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1677za700za7za7_1813za7, "&cosfl", 6 );
DEFINE_STRING( BGl_string1678z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1678za700za7za7_1814za7, "&tanfl", 6 );
DEFINE_STRING( BGl_string1679z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1679za700za7za7_1815za7, "&asinfl", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_roundflzd2envzd2zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762roundflza762za7za7_1816z00, BGl_z62roundflz62zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_negativeflzf3zd2envz21zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762negativeflza7f31817z00, BGl_z62negativeflzf3z91zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string1680z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1680za700za7za7_1818za7, "&acosfl", 7 );
DEFINE_STRING( BGl_string1681z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1681za700za7za7_1819za7, "atanfl", 6 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_flonumzf3zd2envz21zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762flonumza7f3za791za71820z00, BGl_z62flonumzf3z91zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string1682z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1682za700za7za7_1821za7, "Domain error", 12 );
DEFINE_STRING( BGl_string1684z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1684za700za7za7_1822za7, "&atanfl", 7 );
DEFINE_STRING( BGl_string1685z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1685za700za7za7_1823za7, "&atan-1fl", 9 );
DEFINE_STRING( BGl_string1686z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1686za700za7za7_1824za7, "&atan-2fl", 9 );
DEFINE_STRING( BGl_string1687z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1687za700za7za7_1825za7, "&atan-2fl-ur", 12 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_maxflzd2envzd2zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762maxflza762za7za7__r1826z00, va_generic_entry, BGl_z62maxflz62zz__r4_numbers_6_5_flonumz00, BUNSPEC, -2 );
DEFINE_STRING( BGl_string1688z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1688za700za7za7_1827za7, "sqrtfl", 6 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_maxzd22flzd2envz00zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762maxza7d22flza7b0za71828z00, BGl_z62maxzd22flzb0zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string1689z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1689za700za7za7_1829za7, "&sqrtfl", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_zb2flzd2envz60zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762za7b2flza7d0za7za7__r1830za7, BGl_z62zb2flzd0zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_evenflzf3zd2envz21zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762evenflza7f3za791za71831z00, BGl_z62evenflzf3z91zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_llongzd2bitszd2ze3doublezd2envz31zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762llongza7d2bitsza71832za7, BGl_z62llongzd2bitszd2ze3doublez81zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string1690z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1690za700za7za7_1833za7, "&sqrtfl-ur", 10 );
DEFINE_STRING( BGl_string1691z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1691za700za7za7_1834za7, "&exptfl", 7 );
DEFINE_STRING( BGl_string1692z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1692za700za7za7_1835za7, "&signbitfl", 10 );
DEFINE_STRING( BGl_string1693z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1693za700za7za7_1836za7, "&integerfl?", 11 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_floatzd2ze3intzd2bitszd2envz31zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762floatza7d2za7e3in1837za7, BGl_z62floatzd2ze3intzd2bitsz81zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string1694z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1694za700za7za7_1838za7, "&evenfl?", 8 );
DEFINE_STRING( BGl_string1695z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1695za700za7za7_1839za7, "&oddfl?", 7 );
DEFINE_STRING( BGl_string1696z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1696za700za7za7_1840za7, "&finitefl?", 10 );
DEFINE_STRING( BGl_string1697z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1697za700za7za7_1841za7, "&infinitefl?", 12 );
DEFINE_STRING( BGl_string1698z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1698za700za7za7_1842za7, "&nanfl?", 7 );
DEFINE_STRING( BGl_string1699z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1699za700za7za7_1843za7, "+nan.0", 6 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_expflzd2envzd2zz__r4_numbers_6_5_flonumz00, BgL_bgl_za762expflza762za7za7__r1844z00, BGl_z62expflz62zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );

/* GC roots registration */
static obj_t bgl_gc_roots_register() {
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
void *roots_min = (void*)ULONG_MAX, *roots_max = 0;
ADD_ROOT( (void *)(&BGl_requirezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00) );
#undef ADD_ROOT
if( roots_max > 0 ) GC_add_roots( roots_min, ((void **)roots_max) + 1 );
#endif
return BUNSPEC;
}



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(long BgL_checksumz00_1653, char * BgL_fromz00_1654)
{
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00))
{ 
BGl_requirezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00 = 
BBOOL(((bool_t)0)); 
BGl_gczd2rootszd2initz00zz__r4_numbers_6_5_flonumz00(); 
return 
BGl_importedzd2moduleszd2initz00zz__r4_numbers_6_5_flonumz00();}  else 
{ 
return BUNSPEC;} } 

}



/* gc-roots-init */
obj_t BGl_gczd2rootszd2initz00zz__r4_numbers_6_5_flonumz00()
{
{ /* Ieee/flonum.scm 14 */
return 
bgl_gc_roots_register();} 

}



/* real? */
BGL_EXPORTED_DEF bool_t BGl_realzf3zf3zz__r4_numbers_6_5_flonumz00(obj_t BgL_objz00_3)
{
{ /* Ieee/flonum.scm 308 */
if(
INTEGERP(BgL_objz00_3))
{ /* Ieee/flonum.scm 309 */
return ((bool_t)1);}  else 
{ /* Ieee/flonum.scm 309 */
return 
REALP(BgL_objz00_3);} } 

}



/* &real? */
obj_t BGl_z62realzf3z91zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1326, obj_t BgL_objz00_1327)
{
{ /* Ieee/flonum.scm 308 */
return 
BBOOL(
BGl_realzf3zf3zz__r4_numbers_6_5_flonumz00(BgL_objz00_1327));} 

}



/* flonum? */
BGL_EXPORTED_DEF bool_t BGl_flonumzf3zf3zz__r4_numbers_6_5_flonumz00(obj_t BgL_objz00_4)
{
{ /* Ieee/flonum.scm 316 */
return 
REALP(BgL_objz00_4);} 

}



/* &flonum? */
obj_t BGl_z62flonumzf3z91zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1328, obj_t BgL_objz00_1329)
{
{ /* Ieee/flonum.scm 316 */
return 
BBOOL(
BGl_flonumzf3zf3zz__r4_numbers_6_5_flonumz00(BgL_objz00_1329));} 

}



/* =fl */
BGL_EXPORTED_DEF bool_t BGl_zd3flzd3zz__r4_numbers_6_5_flonumz00(double BgL_r1z00_5, double BgL_r2z00_6)
{
{ /* Ieee/flonum.scm 322 */
return 
(BgL_r1z00_5==BgL_r2z00_6);} 

}



/* &=fl */
obj_t BGl_z62zd3flzb1zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1330, obj_t BgL_r1z00_1331, obj_t BgL_r2z00_1332)
{
{ /* Ieee/flonum.scm 322 */
{ /* Ieee/flonum.scm 323 */
bool_t BgL_tmpz00_1670;
{ /* Ieee/flonum.scm 323 */
double BgL_auxz00_1680;double BgL_auxz00_1671;
{ /* Ieee/flonum.scm 323 */
obj_t BgL_tmpz00_1681;
if(
REALP(BgL_r2z00_1332))
{ /* Ieee/flonum.scm 323 */
BgL_tmpz00_1681 = BgL_r2z00_1332
; }  else 
{ 
obj_t BgL_auxz00_1684;
BgL_auxz00_1684 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)14944)), BGl_string1648z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_r2z00_1332); 
FAILURE(BgL_auxz00_1684,BFALSE,BFALSE);} 
BgL_auxz00_1680 = 
REAL_TO_DOUBLE(BgL_tmpz00_1681); } 
{ /* Ieee/flonum.scm 323 */
obj_t BgL_tmpz00_1672;
if(
REALP(BgL_r1z00_1331))
{ /* Ieee/flonum.scm 323 */
BgL_tmpz00_1672 = BgL_r1z00_1331
; }  else 
{ 
obj_t BgL_auxz00_1675;
BgL_auxz00_1675 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)14944)), BGl_string1648z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_r1z00_1331); 
FAILURE(BgL_auxz00_1675,BFALSE,BFALSE);} 
BgL_auxz00_1671 = 
REAL_TO_DOUBLE(BgL_tmpz00_1672); } 
BgL_tmpz00_1670 = 
BGl_zd3flzd3zz__r4_numbers_6_5_flonumz00(BgL_auxz00_1671, BgL_auxz00_1680); } 
return 
BBOOL(BgL_tmpz00_1670);} } 

}



/* <fl */
BGL_EXPORTED_DEF bool_t BGl_zc3flzc3zz__r4_numbers_6_5_flonumz00(double BgL_r1z00_7, double BgL_r2z00_8)
{
{ /* Ieee/flonum.scm 328 */
return 
(BgL_r1z00_7<BgL_r2z00_8);} 

}



/* &<fl */
obj_t BGl_z62zc3flza1zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1333, obj_t BgL_r1z00_1334, obj_t BgL_r2z00_1335)
{
{ /* Ieee/flonum.scm 328 */
{ /* Ieee/flonum.scm 329 */
bool_t BgL_tmpz00_1692;
{ /* Ieee/flonum.scm 329 */
double BgL_auxz00_1702;double BgL_auxz00_1693;
{ /* Ieee/flonum.scm 329 */
obj_t BgL_tmpz00_1703;
if(
REALP(BgL_r2z00_1335))
{ /* Ieee/flonum.scm 329 */
BgL_tmpz00_1703 = BgL_r2z00_1335
; }  else 
{ 
obj_t BgL_auxz00_1706;
BgL_auxz00_1706 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)15212)), BGl_string1650z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_r2z00_1335); 
FAILURE(BgL_auxz00_1706,BFALSE,BFALSE);} 
BgL_auxz00_1702 = 
REAL_TO_DOUBLE(BgL_tmpz00_1703); } 
{ /* Ieee/flonum.scm 329 */
obj_t BgL_tmpz00_1694;
if(
REALP(BgL_r1z00_1334))
{ /* Ieee/flonum.scm 329 */
BgL_tmpz00_1694 = BgL_r1z00_1334
; }  else 
{ 
obj_t BgL_auxz00_1697;
BgL_auxz00_1697 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)15212)), BGl_string1650z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_r1z00_1334); 
FAILURE(BgL_auxz00_1697,BFALSE,BFALSE);} 
BgL_auxz00_1693 = 
REAL_TO_DOUBLE(BgL_tmpz00_1694); } 
BgL_tmpz00_1692 = 
BGl_zc3flzc3zz__r4_numbers_6_5_flonumz00(BgL_auxz00_1693, BgL_auxz00_1702); } 
return 
BBOOL(BgL_tmpz00_1692);} } 

}



/* >fl */
BGL_EXPORTED_DEF bool_t BGl_ze3flze3zz__r4_numbers_6_5_flonumz00(double BgL_r1z00_9, double BgL_r2z00_10)
{
{ /* Ieee/flonum.scm 334 */
return 
(BgL_r1z00_9>BgL_r2z00_10);} 

}



/* &>fl */
obj_t BGl_z62ze3flz81zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1336, obj_t BgL_r1z00_1337, obj_t BgL_r2z00_1338)
{
{ /* Ieee/flonum.scm 334 */
{ /* Ieee/flonum.scm 335 */
bool_t BgL_tmpz00_1714;
{ /* Ieee/flonum.scm 335 */
double BgL_auxz00_1724;double BgL_auxz00_1715;
{ /* Ieee/flonum.scm 335 */
obj_t BgL_tmpz00_1725;
if(
REALP(BgL_r2z00_1338))
{ /* Ieee/flonum.scm 335 */
BgL_tmpz00_1725 = BgL_r2z00_1338
; }  else 
{ 
obj_t BgL_auxz00_1728;
BgL_auxz00_1728 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)15480)), BGl_string1651z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_r2z00_1338); 
FAILURE(BgL_auxz00_1728,BFALSE,BFALSE);} 
BgL_auxz00_1724 = 
REAL_TO_DOUBLE(BgL_tmpz00_1725); } 
{ /* Ieee/flonum.scm 335 */
obj_t BgL_tmpz00_1716;
if(
REALP(BgL_r1z00_1337))
{ /* Ieee/flonum.scm 335 */
BgL_tmpz00_1716 = BgL_r1z00_1337
; }  else 
{ 
obj_t BgL_auxz00_1719;
BgL_auxz00_1719 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)15480)), BGl_string1651z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_r1z00_1337); 
FAILURE(BgL_auxz00_1719,BFALSE,BFALSE);} 
BgL_auxz00_1715 = 
REAL_TO_DOUBLE(BgL_tmpz00_1716); } 
BgL_tmpz00_1714 = 
BGl_ze3flze3zz__r4_numbers_6_5_flonumz00(BgL_auxz00_1715, BgL_auxz00_1724); } 
return 
BBOOL(BgL_tmpz00_1714);} } 

}



/* <=fl */
BGL_EXPORTED_DEF bool_t BGl_zc3zd3flz10zz__r4_numbers_6_5_flonumz00(double BgL_r1z00_11, double BgL_r2z00_12)
{
{ /* Ieee/flonum.scm 340 */
return 
(BgL_r1z00_11<=BgL_r2z00_12);} 

}



/* &<=fl */
obj_t BGl_z62zc3zd3flz72zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1339, obj_t BgL_r1z00_1340, obj_t BgL_r2z00_1341)
{
{ /* Ieee/flonum.scm 340 */
{ /* Ieee/flonum.scm 341 */
bool_t BgL_tmpz00_1736;
{ /* Ieee/flonum.scm 341 */
double BgL_auxz00_1746;double BgL_auxz00_1737;
{ /* Ieee/flonum.scm 341 */
obj_t BgL_tmpz00_1747;
if(
REALP(BgL_r2z00_1341))
{ /* Ieee/flonum.scm 341 */
BgL_tmpz00_1747 = BgL_r2z00_1341
; }  else 
{ 
obj_t BgL_auxz00_1750;
BgL_auxz00_1750 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)15749)), BGl_string1652z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_r2z00_1341); 
FAILURE(BgL_auxz00_1750,BFALSE,BFALSE);} 
BgL_auxz00_1746 = 
REAL_TO_DOUBLE(BgL_tmpz00_1747); } 
{ /* Ieee/flonum.scm 341 */
obj_t BgL_tmpz00_1738;
if(
REALP(BgL_r1z00_1340))
{ /* Ieee/flonum.scm 341 */
BgL_tmpz00_1738 = BgL_r1z00_1340
; }  else 
{ 
obj_t BgL_auxz00_1741;
BgL_auxz00_1741 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)15749)), BGl_string1652z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_r1z00_1340); 
FAILURE(BgL_auxz00_1741,BFALSE,BFALSE);} 
BgL_auxz00_1737 = 
REAL_TO_DOUBLE(BgL_tmpz00_1738); } 
BgL_tmpz00_1736 = 
BGl_zc3zd3flz10zz__r4_numbers_6_5_flonumz00(BgL_auxz00_1737, BgL_auxz00_1746); } 
return 
BBOOL(BgL_tmpz00_1736);} } 

}



/* >=fl */
BGL_EXPORTED_DEF bool_t BGl_ze3zd3flz30zz__r4_numbers_6_5_flonumz00(double BgL_r1z00_13, double BgL_r2z00_14)
{
{ /* Ieee/flonum.scm 346 */
return 
(BgL_r1z00_13>=BgL_r2z00_14);} 

}



/* &>=fl */
obj_t BGl_z62ze3zd3flz52zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1342, obj_t BgL_r1z00_1343, obj_t BgL_r2z00_1344)
{
{ /* Ieee/flonum.scm 346 */
{ /* Ieee/flonum.scm 347 */
bool_t BgL_tmpz00_1758;
{ /* Ieee/flonum.scm 347 */
double BgL_auxz00_1768;double BgL_auxz00_1759;
{ /* Ieee/flonum.scm 347 */
obj_t BgL_tmpz00_1769;
if(
REALP(BgL_r2z00_1344))
{ /* Ieee/flonum.scm 347 */
BgL_tmpz00_1769 = BgL_r2z00_1344
; }  else 
{ 
obj_t BgL_auxz00_1772;
BgL_auxz00_1772 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)16019)), BGl_string1653z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_r2z00_1344); 
FAILURE(BgL_auxz00_1772,BFALSE,BFALSE);} 
BgL_auxz00_1768 = 
REAL_TO_DOUBLE(BgL_tmpz00_1769); } 
{ /* Ieee/flonum.scm 347 */
obj_t BgL_tmpz00_1760;
if(
REALP(BgL_r1z00_1343))
{ /* Ieee/flonum.scm 347 */
BgL_tmpz00_1760 = BgL_r1z00_1343
; }  else 
{ 
obj_t BgL_auxz00_1763;
BgL_auxz00_1763 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)16019)), BGl_string1653z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_r1z00_1343); 
FAILURE(BgL_auxz00_1763,BFALSE,BFALSE);} 
BgL_auxz00_1759 = 
REAL_TO_DOUBLE(BgL_tmpz00_1760); } 
BgL_tmpz00_1758 = 
BGl_ze3zd3flz30zz__r4_numbers_6_5_flonumz00(BgL_auxz00_1759, BgL_auxz00_1768); } 
return 
BBOOL(BgL_tmpz00_1758);} } 

}



/* zerofl? */
BGL_EXPORTED_DEF bool_t BGl_za7eroflzf3z54zz__r4_numbers_6_5_flonumz00(double BgL_rz00_15)
{
{ /* Ieee/flonum.scm 352 */
return 
(BgL_rz00_15==((double)0.0));} 

}



/* &zerofl? */
obj_t BGl_z62za7eroflzf3z36zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1345, obj_t BgL_rz00_1346)
{
{ /* Ieee/flonum.scm 352 */
{ /* Ieee/flonum.scm 323 */
bool_t BgL_tmpz00_1780;
{ /* Ieee/flonum.scm 323 */
double BgL_auxz00_1781;
{ /* Ieee/flonum.scm 323 */
obj_t BgL_tmpz00_1782;
if(
REALP(BgL_rz00_1346))
{ /* Ieee/flonum.scm 323 */
BgL_tmpz00_1782 = BgL_rz00_1346
; }  else 
{ 
obj_t BgL_auxz00_1785;
BgL_auxz00_1785 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)14944)), BGl_string1654z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_1346); 
FAILURE(BgL_auxz00_1785,BFALSE,BFALSE);} 
BgL_auxz00_1781 = 
REAL_TO_DOUBLE(BgL_tmpz00_1782); } 
BgL_tmpz00_1780 = 
BGl_za7eroflzf3z54zz__r4_numbers_6_5_flonumz00(BgL_auxz00_1781); } 
return 
BBOOL(BgL_tmpz00_1780);} } 

}



/* positivefl? */
BGL_EXPORTED_DEF bool_t BGl_positiveflzf3zf3zz__r4_numbers_6_5_flonumz00(double BgL_rz00_16)
{
{ /* Ieee/flonum.scm 358 */
return 
(BgL_rz00_16>((double)0.0));} 

}



/* &positivefl? */
obj_t BGl_z62positiveflzf3z91zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1347, obj_t BgL_rz00_1348)
{
{ /* Ieee/flonum.scm 358 */
{ /* Ieee/flonum.scm 335 */
bool_t BgL_tmpz00_1793;
{ /* Ieee/flonum.scm 335 */
double BgL_auxz00_1794;
{ /* Ieee/flonum.scm 335 */
obj_t BgL_tmpz00_1795;
if(
REALP(BgL_rz00_1348))
{ /* Ieee/flonum.scm 335 */
BgL_tmpz00_1795 = BgL_rz00_1348
; }  else 
{ 
obj_t BgL_auxz00_1798;
BgL_auxz00_1798 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)15480)), BGl_string1655z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_1348); 
FAILURE(BgL_auxz00_1798,BFALSE,BFALSE);} 
BgL_auxz00_1794 = 
REAL_TO_DOUBLE(BgL_tmpz00_1795); } 
BgL_tmpz00_1793 = 
BGl_positiveflzf3zf3zz__r4_numbers_6_5_flonumz00(BgL_auxz00_1794); } 
return 
BBOOL(BgL_tmpz00_1793);} } 

}



/* negativefl? */
BGL_EXPORTED_DEF bool_t BGl_negativeflzf3zf3zz__r4_numbers_6_5_flonumz00(double BgL_rz00_17)
{
{ /* Ieee/flonum.scm 364 */
return 
(BgL_rz00_17<((double)0.0));} 

}



/* &negativefl? */
obj_t BGl_z62negativeflzf3z91zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1349, obj_t BgL_rz00_1350)
{
{ /* Ieee/flonum.scm 364 */
{ /* Ieee/flonum.scm 329 */
bool_t BgL_tmpz00_1806;
{ /* Ieee/flonum.scm 329 */
double BgL_auxz00_1807;
{ /* Ieee/flonum.scm 329 */
obj_t BgL_tmpz00_1808;
if(
REALP(BgL_rz00_1350))
{ /* Ieee/flonum.scm 329 */
BgL_tmpz00_1808 = BgL_rz00_1350
; }  else 
{ 
obj_t BgL_auxz00_1811;
BgL_auxz00_1811 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)15212)), BGl_string1656z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_1350); 
FAILURE(BgL_auxz00_1811,BFALSE,BFALSE);} 
BgL_auxz00_1807 = 
REAL_TO_DOUBLE(BgL_tmpz00_1808); } 
BgL_tmpz00_1806 = 
BGl_negativeflzf3zf3zz__r4_numbers_6_5_flonumz00(BgL_auxz00_1807); } 
return 
BBOOL(BgL_tmpz00_1806);} } 

}



/* +fl */
BGL_EXPORTED_DEF double BGl_zb2flzb2zz__r4_numbers_6_5_flonumz00(double BgL_r1z00_18, double BgL_r2z00_19)
{
{ /* Ieee/flonum.scm 370 */
return 
(BgL_r1z00_18+BgL_r2z00_19);} 

}



/* &+fl */
obj_t BGl_z62zb2flzd0zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1351, obj_t BgL_r1z00_1352, obj_t BgL_r2z00_1353)
{
{ /* Ieee/flonum.scm 370 */
{ /* Ieee/flonum.scm 371 */
double BgL_tmpz00_1819;
{ /* Ieee/flonum.scm 371 */
double BgL_auxz00_1829;double BgL_auxz00_1820;
{ /* Ieee/flonum.scm 371 */
obj_t BgL_tmpz00_1830;
if(
REALP(BgL_r2z00_1353))
{ /* Ieee/flonum.scm 371 */
BgL_tmpz00_1830 = BgL_r2z00_1353
; }  else 
{ 
obj_t BgL_auxz00_1833;
BgL_auxz00_1833 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)17094)), BGl_string1657z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_r2z00_1353); 
FAILURE(BgL_auxz00_1833,BFALSE,BFALSE);} 
BgL_auxz00_1829 = 
REAL_TO_DOUBLE(BgL_tmpz00_1830); } 
{ /* Ieee/flonum.scm 371 */
obj_t BgL_tmpz00_1821;
if(
REALP(BgL_r1z00_1352))
{ /* Ieee/flonum.scm 371 */
BgL_tmpz00_1821 = BgL_r1z00_1352
; }  else 
{ 
obj_t BgL_auxz00_1824;
BgL_auxz00_1824 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)17094)), BGl_string1657z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_r1z00_1352); 
FAILURE(BgL_auxz00_1824,BFALSE,BFALSE);} 
BgL_auxz00_1820 = 
REAL_TO_DOUBLE(BgL_tmpz00_1821); } 
BgL_tmpz00_1819 = 
BGl_zb2flzb2zz__r4_numbers_6_5_flonumz00(BgL_auxz00_1820, BgL_auxz00_1829); } 
return 
DOUBLE_TO_REAL(BgL_tmpz00_1819);} } 

}



/* -fl */
BGL_EXPORTED_DEF double BGl_zd2flzd2zz__r4_numbers_6_5_flonumz00(double BgL_r1z00_20, double BgL_r2z00_21)
{
{ /* Ieee/flonum.scm 372 */
return 
(BgL_r1z00_20-BgL_r2z00_21);} 

}



/* &-fl */
obj_t BGl_z62zd2flzb0zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1354, obj_t BgL_r1z00_1355, obj_t BgL_r2z00_1356)
{
{ /* Ieee/flonum.scm 372 */
{ /* Ieee/flonum.scm 373 */
double BgL_tmpz00_1841;
{ /* Ieee/flonum.scm 373 */
double BgL_auxz00_1851;double BgL_auxz00_1842;
{ /* Ieee/flonum.scm 373 */
obj_t BgL_tmpz00_1852;
if(
REALP(BgL_r2z00_1356))
{ /* Ieee/flonum.scm 373 */
BgL_tmpz00_1852 = BgL_r2z00_1356
; }  else 
{ 
obj_t BgL_auxz00_1855;
BgL_auxz00_1855 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)17139)), BGl_string1658z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_r2z00_1356); 
FAILURE(BgL_auxz00_1855,BFALSE,BFALSE);} 
BgL_auxz00_1851 = 
REAL_TO_DOUBLE(BgL_tmpz00_1852); } 
{ /* Ieee/flonum.scm 373 */
obj_t BgL_tmpz00_1843;
if(
REALP(BgL_r1z00_1355))
{ /* Ieee/flonum.scm 373 */
BgL_tmpz00_1843 = BgL_r1z00_1355
; }  else 
{ 
obj_t BgL_auxz00_1846;
BgL_auxz00_1846 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)17139)), BGl_string1658z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_r1z00_1355); 
FAILURE(BgL_auxz00_1846,BFALSE,BFALSE);} 
BgL_auxz00_1842 = 
REAL_TO_DOUBLE(BgL_tmpz00_1843); } 
BgL_tmpz00_1841 = 
BGl_zd2flzd2zz__r4_numbers_6_5_flonumz00(BgL_auxz00_1842, BgL_auxz00_1851); } 
return 
DOUBLE_TO_REAL(BgL_tmpz00_1841);} } 

}



/* *fl */
BGL_EXPORTED_DEF double BGl_za2flza2zz__r4_numbers_6_5_flonumz00(double BgL_r1z00_22, double BgL_r2z00_23)
{
{ /* Ieee/flonum.scm 374 */
return 
(BgL_r1z00_22*BgL_r2z00_23);} 

}



/* &*fl */
obj_t BGl_z62za2flzc0zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1357, obj_t BgL_r1z00_1358, obj_t BgL_r2z00_1359)
{
{ /* Ieee/flonum.scm 374 */
{ /* Ieee/flonum.scm 375 */
double BgL_tmpz00_1863;
{ /* Ieee/flonum.scm 375 */
double BgL_auxz00_1873;double BgL_auxz00_1864;
{ /* Ieee/flonum.scm 375 */
obj_t BgL_tmpz00_1874;
if(
REALP(BgL_r2z00_1359))
{ /* Ieee/flonum.scm 375 */
BgL_tmpz00_1874 = BgL_r2z00_1359
; }  else 
{ 
obj_t BgL_auxz00_1877;
BgL_auxz00_1877 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)17184)), BGl_string1659z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_r2z00_1359); 
FAILURE(BgL_auxz00_1877,BFALSE,BFALSE);} 
BgL_auxz00_1873 = 
REAL_TO_DOUBLE(BgL_tmpz00_1874); } 
{ /* Ieee/flonum.scm 375 */
obj_t BgL_tmpz00_1865;
if(
REALP(BgL_r1z00_1358))
{ /* Ieee/flonum.scm 375 */
BgL_tmpz00_1865 = BgL_r1z00_1358
; }  else 
{ 
obj_t BgL_auxz00_1868;
BgL_auxz00_1868 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)17184)), BGl_string1659z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_r1z00_1358); 
FAILURE(BgL_auxz00_1868,BFALSE,BFALSE);} 
BgL_auxz00_1864 = 
REAL_TO_DOUBLE(BgL_tmpz00_1865); } 
BgL_tmpz00_1863 = 
BGl_za2flza2zz__r4_numbers_6_5_flonumz00(BgL_auxz00_1864, BgL_auxz00_1873); } 
return 
DOUBLE_TO_REAL(BgL_tmpz00_1863);} } 

}



/* /fl */
BGL_EXPORTED_DEF double BGl_zf2flzf2zz__r4_numbers_6_5_flonumz00(double BgL_r1z00_24, double BgL_r2z00_25)
{
{ /* Ieee/flonum.scm 376 */
return 
(BgL_r1z00_24/BgL_r2z00_25);} 

}



/* &/fl */
obj_t BGl_z62zf2flz90zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1360, obj_t BgL_r1z00_1361, obj_t BgL_r2z00_1362)
{
{ /* Ieee/flonum.scm 376 */
{ /* Ieee/flonum.scm 377 */
double BgL_tmpz00_1885;
{ /* Ieee/flonum.scm 377 */
double BgL_auxz00_1895;double BgL_auxz00_1886;
{ /* Ieee/flonum.scm 377 */
obj_t BgL_tmpz00_1896;
if(
REALP(BgL_r2z00_1362))
{ /* Ieee/flonum.scm 377 */
BgL_tmpz00_1896 = BgL_r2z00_1362
; }  else 
{ 
obj_t BgL_auxz00_1899;
BgL_auxz00_1899 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)17229)), BGl_string1660z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_r2z00_1362); 
FAILURE(BgL_auxz00_1899,BFALSE,BFALSE);} 
BgL_auxz00_1895 = 
REAL_TO_DOUBLE(BgL_tmpz00_1896); } 
{ /* Ieee/flonum.scm 377 */
obj_t BgL_tmpz00_1887;
if(
REALP(BgL_r1z00_1361))
{ /* Ieee/flonum.scm 377 */
BgL_tmpz00_1887 = BgL_r1z00_1361
; }  else 
{ 
obj_t BgL_auxz00_1890;
BgL_auxz00_1890 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)17229)), BGl_string1660z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_r1z00_1361); 
FAILURE(BgL_auxz00_1890,BFALSE,BFALSE);} 
BgL_auxz00_1886 = 
REAL_TO_DOUBLE(BgL_tmpz00_1887); } 
BgL_tmpz00_1885 = 
BGl_zf2flzf2zz__r4_numbers_6_5_flonumz00(BgL_auxz00_1886, BgL_auxz00_1895); } 
return 
DOUBLE_TO_REAL(BgL_tmpz00_1885);} } 

}



/* negfl */
BGL_EXPORTED_DEF double BGl_negflz00zz__r4_numbers_6_5_flonumz00(double BgL_r1z00_26)
{
{ /* Ieee/flonum.scm 382 */
return 
NEG(BgL_r1z00_26);} 

}



/* &negfl */
obj_t BGl_z62negflz62zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1363, obj_t BgL_r1z00_1364)
{
{ /* Ieee/flonum.scm 382 */
{ /* Ieee/flonum.scm 383 */
double BgL_tmpz00_1907;
{ /* Ieee/flonum.scm 383 */
double BgL_auxz00_1908;
{ /* Ieee/flonum.scm 383 */
obj_t BgL_tmpz00_1909;
if(
REALP(BgL_r1z00_1364))
{ /* Ieee/flonum.scm 383 */
BgL_tmpz00_1909 = BgL_r1z00_1364
; }  else 
{ 
obj_t BgL_auxz00_1912;
BgL_auxz00_1912 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)17496)), BGl_string1661z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_r1z00_1364); 
FAILURE(BgL_auxz00_1912,BFALSE,BFALSE);} 
BgL_auxz00_1908 = 
REAL_TO_DOUBLE(BgL_tmpz00_1909); } 
BgL_tmpz00_1907 = 
BGl_negflz00zz__r4_numbers_6_5_flonumz00(BgL_auxz00_1908); } 
return 
DOUBLE_TO_REAL(BgL_tmpz00_1907);} } 

}



/* maxfl */
BGL_EXPORTED_DEF double BGl_maxflz00zz__r4_numbers_6_5_flonumz00(double BgL_r1z00_27, obj_t BgL_rnz00_28)
{
{ /* Ieee/flonum.scm 388 */
{ 
double BgL_maxz00_1032;obj_t BgL_rnz00_1033;
BgL_maxz00_1032 = BgL_r1z00_27; 
BgL_rnz00_1033 = BgL_rnz00_28; 
BgL_loopz00_1031:
if(
NULLP(BgL_rnz00_1033))
{ /* Ieee/flonum.scm 391 */
return BgL_maxz00_1032;}  else 
{ 
obj_t BgL_rnz00_1938;double BgL_maxz00_1921;
{ /* Ieee/flonum.scm 393 */
double BgL_r1z00_1044;
{ /* Ieee/flonum.scm 393 */
obj_t BgL_pairz00_1043;
if(
PAIRP(BgL_rnz00_1033))
{ /* Ieee/flonum.scm 393 */
BgL_pairz00_1043 = BgL_rnz00_1033; }  else 
{ 
obj_t BgL_auxz00_1924;
BgL_auxz00_1924 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)17852)), BGl_string1662z00zz__r4_numbers_6_5_flonumz00, BGl_string1663z00zz__r4_numbers_6_5_flonumz00, BgL_rnz00_1033); 
FAILURE(BgL_auxz00_1924,BFALSE,BFALSE);} 
{ /* Ieee/flonum.scm 393 */
obj_t BgL_tmpz00_1928;
{ /* Ieee/flonum.scm 393 */
obj_t BgL_aux1537z00_1505;
BgL_aux1537z00_1505 = 
CAR(BgL_pairz00_1043); 
if(
REALP(BgL_aux1537z00_1505))
{ /* Ieee/flonum.scm 393 */
BgL_tmpz00_1928 = BgL_aux1537z00_1505
; }  else 
{ 
obj_t BgL_auxz00_1932;
BgL_auxz00_1932 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)17847)), BGl_string1662z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_aux1537z00_1505); 
FAILURE(BgL_auxz00_1932,BFALSE,BFALSE);} } 
BgL_r1z00_1044 = 
REAL_TO_DOUBLE(BgL_tmpz00_1928); } } 
BgL_maxz00_1921 = 
BGL_FL_MAX2(BgL_r1z00_1044, BgL_maxz00_1032); } 
{ /* Ieee/flonum.scm 393 */
obj_t BgL_pairz00_1047;
if(
PAIRP(BgL_rnz00_1033))
{ /* Ieee/flonum.scm 393 */
BgL_pairz00_1047 = BgL_rnz00_1033; }  else 
{ 
obj_t BgL_auxz00_1941;
BgL_auxz00_1941 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)17866)), BGl_string1662z00zz__r4_numbers_6_5_flonumz00, BGl_string1663z00zz__r4_numbers_6_5_flonumz00, BgL_rnz00_1033); 
FAILURE(BgL_auxz00_1941,BFALSE,BFALSE);} 
BgL_rnz00_1938 = 
CDR(BgL_pairz00_1047); } 
BgL_rnz00_1033 = BgL_rnz00_1938; 
BgL_maxz00_1032 = BgL_maxz00_1921; 
goto BgL_loopz00_1031;} } } 

}



/* &maxfl */
obj_t BGl_z62maxflz62zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1365, obj_t BgL_r1z00_1366, obj_t BgL_rnz00_1367)
{
{ /* Ieee/flonum.scm 388 */
{ /* Ieee/flonum.scm 389 */
double BgL_tmpz00_1946;
{ /* Ieee/flonum.scm 389 */
double BgL_auxz00_1947;
{ /* Ieee/flonum.scm 389 */
obj_t BgL_tmpz00_1948;
if(
REALP(BgL_r1z00_1366))
{ /* Ieee/flonum.scm 389 */
BgL_tmpz00_1948 = BgL_r1z00_1366
; }  else 
{ 
obj_t BgL_auxz00_1951;
BgL_auxz00_1951 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)17764)), BGl_string1664z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_r1z00_1366); 
FAILURE(BgL_auxz00_1951,BFALSE,BFALSE);} 
BgL_auxz00_1947 = 
REAL_TO_DOUBLE(BgL_tmpz00_1948); } 
BgL_tmpz00_1946 = 
BGl_maxflz00zz__r4_numbers_6_5_flonumz00(BgL_auxz00_1947, BgL_rnz00_1367); } 
return 
DOUBLE_TO_REAL(BgL_tmpz00_1946);} } 

}



/* max-2fl */
BGL_EXPORTED_DEF double BGl_maxzd22flzd2zz__r4_numbers_6_5_flonumz00(double BgL_r1z00_29, double BgL_r2z00_30)
{
{ /* Ieee/flonum.scm 398 */
return 
BGL_FL_MAX2(BgL_r1z00_29, BgL_r2z00_30);} 

}



/* &max-2fl */
obj_t BGl_z62maxzd22flzb0zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1368, obj_t BgL_r1z00_1369, obj_t BgL_r2z00_1370)
{
{ /* Ieee/flonum.scm 398 */
{ /* Ieee/flonum.scm 399 */
double BgL_tmpz00_1959;
{ /* Ieee/flonum.scm 399 */
double BgL_auxz00_1969;double BgL_auxz00_1960;
{ /* Ieee/flonum.scm 399 */
obj_t BgL_tmpz00_1970;
if(
REALP(BgL_r2z00_1370))
{ /* Ieee/flonum.scm 399 */
BgL_tmpz00_1970 = BgL_r2z00_1370
; }  else 
{ 
obj_t BgL_auxz00_1973;
BgL_auxz00_1973 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)18131)), BGl_string1665z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_r2z00_1370); 
FAILURE(BgL_auxz00_1973,BFALSE,BFALSE);} 
BgL_auxz00_1969 = 
REAL_TO_DOUBLE(BgL_tmpz00_1970); } 
{ /* Ieee/flonum.scm 399 */
obj_t BgL_tmpz00_1961;
if(
REALP(BgL_r1z00_1369))
{ /* Ieee/flonum.scm 399 */
BgL_tmpz00_1961 = BgL_r1z00_1369
; }  else 
{ 
obj_t BgL_auxz00_1964;
BgL_auxz00_1964 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)18131)), BGl_string1665z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_r1z00_1369); 
FAILURE(BgL_auxz00_1964,BFALSE,BFALSE);} 
BgL_auxz00_1960 = 
REAL_TO_DOUBLE(BgL_tmpz00_1961); } 
BgL_tmpz00_1959 = 
BGl_maxzd22flzd2zz__r4_numbers_6_5_flonumz00(BgL_auxz00_1960, BgL_auxz00_1969); } 
return 
DOUBLE_TO_REAL(BgL_tmpz00_1959);} } 

}



/* min-2fl */
BGL_EXPORTED_DEF double BGl_minzd22flzd2zz__r4_numbers_6_5_flonumz00(double BgL_r1z00_31, double BgL_r2z00_32)
{
{ /* Ieee/flonum.scm 404 */
return 
BGL_FL_MIN2(BgL_r1z00_31, BgL_r2z00_32);} 

}



/* &min-2fl */
obj_t BGl_z62minzd22flzb0zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1371, obj_t BgL_r1z00_1372, obj_t BgL_r2z00_1373)
{
{ /* Ieee/flonum.scm 404 */
{ /* Ieee/flonum.scm 405 */
double BgL_tmpz00_1981;
{ /* Ieee/flonum.scm 405 */
double BgL_auxz00_1991;double BgL_auxz00_1982;
{ /* Ieee/flonum.scm 405 */
obj_t BgL_tmpz00_1992;
if(
REALP(BgL_r2z00_1373))
{ /* Ieee/flonum.scm 405 */
BgL_tmpz00_1992 = BgL_r2z00_1373
; }  else 
{ 
obj_t BgL_auxz00_1995;
BgL_auxz00_1995 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)18405)), BGl_string1666z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_r2z00_1373); 
FAILURE(BgL_auxz00_1995,BFALSE,BFALSE);} 
BgL_auxz00_1991 = 
REAL_TO_DOUBLE(BgL_tmpz00_1992); } 
{ /* Ieee/flonum.scm 405 */
obj_t BgL_tmpz00_1983;
if(
REALP(BgL_r1z00_1372))
{ /* Ieee/flonum.scm 405 */
BgL_tmpz00_1983 = BgL_r1z00_1372
; }  else 
{ 
obj_t BgL_auxz00_1986;
BgL_auxz00_1986 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)18405)), BGl_string1666z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_r1z00_1372); 
FAILURE(BgL_auxz00_1986,BFALSE,BFALSE);} 
BgL_auxz00_1982 = 
REAL_TO_DOUBLE(BgL_tmpz00_1983); } 
BgL_tmpz00_1981 = 
BGl_minzd22flzd2zz__r4_numbers_6_5_flonumz00(BgL_auxz00_1982, BgL_auxz00_1991); } 
return 
DOUBLE_TO_REAL(BgL_tmpz00_1981);} } 

}



/* minfl */
BGL_EXPORTED_DEF double BGl_minflz00zz__r4_numbers_6_5_flonumz00(double BgL_r1z00_33, obj_t BgL_rnz00_34)
{
{ /* Ieee/flonum.scm 410 */
{ 
double BgL_minz00_1069;obj_t BgL_rnz00_1070;
BgL_minz00_1069 = BgL_r1z00_33; 
BgL_rnz00_1070 = BgL_rnz00_34; 
BgL_loopz00_1068:
if(
NULLP(BgL_rnz00_1070))
{ /* Ieee/flonum.scm 413 */
return BgL_minz00_1069;}  else 
{ 
obj_t BgL_rnz00_2021;double BgL_minz00_2004;
{ /* Ieee/flonum.scm 415 */
double BgL_r1z00_1081;
{ /* Ieee/flonum.scm 415 */
obj_t BgL_pairz00_1080;
if(
PAIRP(BgL_rnz00_1070))
{ /* Ieee/flonum.scm 415 */
BgL_pairz00_1080 = BgL_rnz00_1070; }  else 
{ 
obj_t BgL_auxz00_2007;
BgL_auxz00_2007 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)18763)), BGl_string1662z00zz__r4_numbers_6_5_flonumz00, BGl_string1663z00zz__r4_numbers_6_5_flonumz00, BgL_rnz00_1070); 
FAILURE(BgL_auxz00_2007,BFALSE,BFALSE);} 
{ /* Ieee/flonum.scm 415 */
obj_t BgL_tmpz00_2011;
{ /* Ieee/flonum.scm 415 */
obj_t BgL_aux1553z00_1521;
BgL_aux1553z00_1521 = 
CAR(BgL_pairz00_1080); 
if(
REALP(BgL_aux1553z00_1521))
{ /* Ieee/flonum.scm 415 */
BgL_tmpz00_2011 = BgL_aux1553z00_1521
; }  else 
{ 
obj_t BgL_auxz00_2015;
BgL_auxz00_2015 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)18758)), BGl_string1662z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_aux1553z00_1521); 
FAILURE(BgL_auxz00_2015,BFALSE,BFALSE);} } 
BgL_r1z00_1081 = 
REAL_TO_DOUBLE(BgL_tmpz00_2011); } } 
BgL_minz00_2004 = 
BGL_FL_MIN2(BgL_r1z00_1081, BgL_minz00_1069); } 
{ /* Ieee/flonum.scm 415 */
obj_t BgL_pairz00_1084;
if(
PAIRP(BgL_rnz00_1070))
{ /* Ieee/flonum.scm 415 */
BgL_pairz00_1084 = BgL_rnz00_1070; }  else 
{ 
obj_t BgL_auxz00_2024;
BgL_auxz00_2024 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)18777)), BGl_string1662z00zz__r4_numbers_6_5_flonumz00, BGl_string1663z00zz__r4_numbers_6_5_flonumz00, BgL_rnz00_1070); 
FAILURE(BgL_auxz00_2024,BFALSE,BFALSE);} 
BgL_rnz00_2021 = 
CDR(BgL_pairz00_1084); } 
BgL_rnz00_1070 = BgL_rnz00_2021; 
BgL_minz00_1069 = BgL_minz00_2004; 
goto BgL_loopz00_1068;} } } 

}



/* &minfl */
obj_t BGl_z62minflz62zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1374, obj_t BgL_r1z00_1375, obj_t BgL_rnz00_1376)
{
{ /* Ieee/flonum.scm 410 */
{ /* Ieee/flonum.scm 411 */
double BgL_tmpz00_2029;
{ /* Ieee/flonum.scm 411 */
double BgL_auxz00_2030;
{ /* Ieee/flonum.scm 411 */
obj_t BgL_tmpz00_2031;
if(
REALP(BgL_r1z00_1375))
{ /* Ieee/flonum.scm 411 */
BgL_tmpz00_2031 = BgL_r1z00_1375
; }  else 
{ 
obj_t BgL_auxz00_2034;
BgL_auxz00_2034 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)18675)), BGl_string1667z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_r1z00_1375); 
FAILURE(BgL_auxz00_2034,BFALSE,BFALSE);} 
BgL_auxz00_2030 = 
REAL_TO_DOUBLE(BgL_tmpz00_2031); } 
BgL_tmpz00_2029 = 
BGl_minflz00zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2030, BgL_rnz00_1376); } 
return 
DOUBLE_TO_REAL(BgL_tmpz00_2029);} } 

}



/* absfl */
BGL_EXPORTED_DEF double BGl_absflz00zz__r4_numbers_6_5_flonumz00(double BgL_rz00_35)
{
{ /* Ieee/flonum.scm 420 */
return 
fabs(BgL_rz00_35);} 

}



/* &absfl */
obj_t BGl_z62absflz62zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1377, obj_t BgL_rz00_1378)
{
{ /* Ieee/flonum.scm 420 */
{ /* Ieee/flonum.scm 421 */
double BgL_tmpz00_2042;
{ /* Ieee/flonum.scm 421 */
double BgL_auxz00_2043;
{ /* Ieee/flonum.scm 421 */
obj_t BgL_tmpz00_2044;
if(
REALP(BgL_rz00_1378))
{ /* Ieee/flonum.scm 421 */
BgL_tmpz00_2044 = BgL_rz00_1378
; }  else 
{ 
obj_t BgL_auxz00_2047;
BgL_auxz00_2047 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)19039)), BGl_string1668z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_1378); 
FAILURE(BgL_auxz00_2047,BFALSE,BFALSE);} 
BgL_auxz00_2043 = 
REAL_TO_DOUBLE(BgL_tmpz00_2044); } 
BgL_tmpz00_2042 = 
BGl_absflz00zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2043); } 
return 
DOUBLE_TO_REAL(BgL_tmpz00_2042);} } 

}



/* floorfl */
BGL_EXPORTED_DEF double BGl_floorflz00zz__r4_numbers_6_5_flonumz00(double BgL_rz00_36)
{
{ /* Ieee/flonum.scm 426 */
return 
floor(BgL_rz00_36);} 

}



/* &floorfl */
obj_t BGl_z62floorflz62zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1379, obj_t BgL_rz00_1380)
{
{ /* Ieee/flonum.scm 426 */
{ /* Ieee/flonum.scm 427 */
double BgL_tmpz00_2055;
{ /* Ieee/flonum.scm 427 */
double BgL_auxz00_2056;
{ /* Ieee/flonum.scm 427 */
obj_t BgL_tmpz00_2057;
if(
REALP(BgL_rz00_1380))
{ /* Ieee/flonum.scm 427 */
BgL_tmpz00_2057 = BgL_rz00_1380
; }  else 
{ 
obj_t BgL_auxz00_2060;
BgL_auxz00_2060 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)19305)), BGl_string1669z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_1380); 
FAILURE(BgL_auxz00_2060,BFALSE,BFALSE);} 
BgL_auxz00_2056 = 
REAL_TO_DOUBLE(BgL_tmpz00_2057); } 
BgL_tmpz00_2055 = 
BGl_floorflz00zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2056); } 
return 
DOUBLE_TO_REAL(BgL_tmpz00_2055);} } 

}



/* ceilingfl */
BGL_EXPORTED_DEF double BGl_ceilingflz00zz__r4_numbers_6_5_flonumz00(double BgL_rz00_37)
{
{ /* Ieee/flonum.scm 432 */
return 
ceil(BgL_rz00_37);} 

}



/* &ceilingfl */
obj_t BGl_z62ceilingflz62zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1381, obj_t BgL_rz00_1382)
{
{ /* Ieee/flonum.scm 432 */
{ /* Ieee/flonum.scm 433 */
double BgL_tmpz00_2068;
{ /* Ieee/flonum.scm 433 */
double BgL_auxz00_2069;
{ /* Ieee/flonum.scm 433 */
obj_t BgL_tmpz00_2070;
if(
REALP(BgL_rz00_1382))
{ /* Ieee/flonum.scm 433 */
BgL_tmpz00_2070 = BgL_rz00_1382
; }  else 
{ 
obj_t BgL_auxz00_2073;
BgL_auxz00_2073 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)19573)), BGl_string1670z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_1382); 
FAILURE(BgL_auxz00_2073,BFALSE,BFALSE);} 
BgL_auxz00_2069 = 
REAL_TO_DOUBLE(BgL_tmpz00_2070); } 
BgL_tmpz00_2068 = 
BGl_ceilingflz00zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2069); } 
return 
DOUBLE_TO_REAL(BgL_tmpz00_2068);} } 

}



/* truncatefl */
BGL_EXPORTED_DEF double BGl_truncateflz00zz__r4_numbers_6_5_flonumz00(double BgL_rz00_38)
{
{ /* Ieee/flonum.scm 438 */
if(
(BgL_rz00_38<((double)0.0)))
{ /* Ieee/flonum.scm 440 */
double BgL_res1433z00_1615;
BgL_res1433z00_1615 = 
ceil(BgL_rz00_38); 
return BgL_res1433z00_1615;}  else 
{ /* Ieee/flonum.scm 441 */
double BgL_res1434z00_1616;
BgL_res1434z00_1616 = 
floor(BgL_rz00_38); 
return BgL_res1434z00_1616;} } 

}



/* &truncatefl */
obj_t BGl_z62truncateflz62zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1383, obj_t BgL_rz00_1384)
{
{ /* Ieee/flonum.scm 438 */
{ /* Ieee/flonum.scm 439 */
double BgL_tmpz00_2084;
{ /* Ieee/flonum.scm 439 */
double BgL_auxz00_2085;
{ /* Ieee/flonum.scm 439 */
obj_t BgL_tmpz00_2086;
if(
REALP(BgL_rz00_1384))
{ /* Ieee/flonum.scm 439 */
BgL_tmpz00_2086 = BgL_rz00_1384
; }  else 
{ 
obj_t BgL_auxz00_2089;
BgL_auxz00_2089 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)19844)), BGl_string1671z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_1384); 
FAILURE(BgL_auxz00_2089,BFALSE,BFALSE);} 
BgL_auxz00_2085 = 
REAL_TO_DOUBLE(BgL_tmpz00_2086); } 
BgL_tmpz00_2084 = 
BGl_truncateflz00zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2085); } 
return 
DOUBLE_TO_REAL(BgL_tmpz00_2084);} } 

}



/* roundfl */
BGL_EXPORTED_DEF double BGl_roundflz00zz__r4_numbers_6_5_flonumz00(double BgL_rz00_39)
{
{ /* Ieee/flonum.scm 446 */
return 
BGL_FL_ROUND(BgL_rz00_39);} 

}



/* &roundfl */
obj_t BGl_z62roundflz62zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1385, obj_t BgL_rz00_1386)
{
{ /* Ieee/flonum.scm 446 */
{ /* Ieee/flonum.scm 447 */
double BgL_tmpz00_2097;
{ /* Ieee/flonum.scm 447 */
double BgL_auxz00_2098;
{ /* Ieee/flonum.scm 447 */
obj_t BgL_tmpz00_2099;
if(
REALP(BgL_rz00_1386))
{ /* Ieee/flonum.scm 447 */
BgL_tmpz00_2099 = BgL_rz00_1386
; }  else 
{ 
obj_t BgL_auxz00_2102;
BgL_auxz00_2102 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)20152)), BGl_string1672z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_1386); 
FAILURE(BgL_auxz00_2102,BFALSE,BFALSE);} 
BgL_auxz00_2098 = 
REAL_TO_DOUBLE(BgL_tmpz00_2099); } 
BgL_tmpz00_2097 = 
BGl_roundflz00zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2098); } 
return 
DOUBLE_TO_REAL(BgL_tmpz00_2097);} } 

}



/* remainderfl */
BGL_EXPORTED_DEF double BGl_remainderflz00zz__r4_numbers_6_5_flonumz00(double BgL_n1z00_40, double BgL_n2z00_41)
{
{ /* Ieee/flonum.scm 452 */
return 
fmod(BgL_n1z00_40, BgL_n2z00_41);} 

}



/* &remainderfl */
obj_t BGl_z62remainderflz62zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1387, obj_t BgL_n1z00_1388, obj_t BgL_n2z00_1389)
{
{ /* Ieee/flonum.scm 452 */
{ /* Ieee/flonum.scm 453 */
double BgL_tmpz00_2110;
{ /* Ieee/flonum.scm 453 */
double BgL_auxz00_2120;double BgL_auxz00_2111;
{ /* Ieee/flonum.scm 453 */
obj_t BgL_tmpz00_2121;
if(
REALP(BgL_n2z00_1389))
{ /* Ieee/flonum.scm 453 */
BgL_tmpz00_2121 = BgL_n2z00_1389
; }  else 
{ 
obj_t BgL_auxz00_2124;
BgL_auxz00_2124 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)20428)), BGl_string1673z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_n2z00_1389); 
FAILURE(BgL_auxz00_2124,BFALSE,BFALSE);} 
BgL_auxz00_2120 = 
REAL_TO_DOUBLE(BgL_tmpz00_2121); } 
{ /* Ieee/flonum.scm 453 */
obj_t BgL_tmpz00_2112;
if(
REALP(BgL_n1z00_1388))
{ /* Ieee/flonum.scm 453 */
BgL_tmpz00_2112 = BgL_n1z00_1388
; }  else 
{ 
obj_t BgL_auxz00_2115;
BgL_auxz00_2115 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)20428)), BGl_string1673z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_n1z00_1388); 
FAILURE(BgL_auxz00_2115,BFALSE,BFALSE);} 
BgL_auxz00_2111 = 
REAL_TO_DOUBLE(BgL_tmpz00_2112); } 
BgL_tmpz00_2110 = 
BGl_remainderflz00zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2111, BgL_auxz00_2120); } 
return 
DOUBLE_TO_REAL(BgL_tmpz00_2110);} } 

}



/* expfl */
BGL_EXPORTED_DEF double BGl_expflz00zz__r4_numbers_6_5_flonumz00(double BgL_xz00_42)
{
{ /* Ieee/flonum.scm 458 */
return 
exp(BgL_xz00_42);} 

}



/* &expfl */
obj_t BGl_z62expflz62zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1390, obj_t BgL_xz00_1391)
{
{ /* Ieee/flonum.scm 458 */
{ /* Ieee/flonum.scm 459 */
double BgL_tmpz00_2132;
{ /* Ieee/flonum.scm 459 */
double BgL_auxz00_2133;
{ /* Ieee/flonum.scm 459 */
obj_t BgL_tmpz00_2134;
if(
REALP(BgL_xz00_1391))
{ /* Ieee/flonum.scm 459 */
BgL_tmpz00_2134 = BgL_xz00_1391
; }  else 
{ 
obj_t BgL_auxz00_2137;
BgL_auxz00_2137 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)20695)), BGl_string1674z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_xz00_1391); 
FAILURE(BgL_auxz00_2137,BFALSE,BFALSE);} 
BgL_auxz00_2133 = 
REAL_TO_DOUBLE(BgL_tmpz00_2134); } 
BgL_tmpz00_2132 = 
BGl_expflz00zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2133); } 
return 
DOUBLE_TO_REAL(BgL_tmpz00_2132);} } 

}



/* logfl */
BGL_EXPORTED_DEF double BGl_logflz00zz__r4_numbers_6_5_flonumz00(double BgL_xz00_43)
{
{ /* Ieee/flonum.scm 464 */
return 
log(BgL_xz00_43);} 

}



/* &logfl */
obj_t BGl_z62logflz62zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1392, obj_t BgL_xz00_1393)
{
{ /* Ieee/flonum.scm 464 */
{ /* Ieee/flonum.scm 465 */
double BgL_tmpz00_2145;
{ /* Ieee/flonum.scm 465 */
double BgL_auxz00_2146;
{ /* Ieee/flonum.scm 465 */
obj_t BgL_tmpz00_2147;
if(
REALP(BgL_xz00_1393))
{ /* Ieee/flonum.scm 465 */
BgL_tmpz00_2147 = BgL_xz00_1393
; }  else 
{ 
obj_t BgL_auxz00_2150;
BgL_auxz00_2150 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)20957)), BGl_string1675z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_xz00_1393); 
FAILURE(BgL_auxz00_2150,BFALSE,BFALSE);} 
BgL_auxz00_2146 = 
REAL_TO_DOUBLE(BgL_tmpz00_2147); } 
BgL_tmpz00_2145 = 
BGl_logflz00zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2146); } 
return 
DOUBLE_TO_REAL(BgL_tmpz00_2145);} } 

}



/* sinfl */
BGL_EXPORTED_DEF double BGl_sinflz00zz__r4_numbers_6_5_flonumz00(double BgL_xz00_44)
{
{ /* Ieee/flonum.scm 470 */
return 
sin(BgL_xz00_44);} 

}



/* &sinfl */
obj_t BGl_z62sinflz62zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1394, obj_t BgL_xz00_1395)
{
{ /* Ieee/flonum.scm 470 */
{ /* Ieee/flonum.scm 471 */
double BgL_tmpz00_2158;
{ /* Ieee/flonum.scm 471 */
double BgL_auxz00_2159;
{ /* Ieee/flonum.scm 471 */
obj_t BgL_tmpz00_2160;
if(
REALP(BgL_xz00_1395))
{ /* Ieee/flonum.scm 471 */
BgL_tmpz00_2160 = BgL_xz00_1395
; }  else 
{ 
obj_t BgL_auxz00_2163;
BgL_auxz00_2163 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)21220)), BGl_string1676z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_xz00_1395); 
FAILURE(BgL_auxz00_2163,BFALSE,BFALSE);} 
BgL_auxz00_2159 = 
REAL_TO_DOUBLE(BgL_tmpz00_2160); } 
BgL_tmpz00_2158 = 
BGl_sinflz00zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2159); } 
return 
DOUBLE_TO_REAL(BgL_tmpz00_2158);} } 

}



/* cosfl */
BGL_EXPORTED_DEF double BGl_cosflz00zz__r4_numbers_6_5_flonumz00(double BgL_xz00_45)
{
{ /* Ieee/flonum.scm 476 */
return 
cos(BgL_xz00_45);} 

}



/* &cosfl */
obj_t BGl_z62cosflz62zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1396, obj_t BgL_xz00_1397)
{
{ /* Ieee/flonum.scm 476 */
{ /* Ieee/flonum.scm 477 */
double BgL_tmpz00_2171;
{ /* Ieee/flonum.scm 477 */
double BgL_auxz00_2172;
{ /* Ieee/flonum.scm 477 */
obj_t BgL_tmpz00_2173;
if(
REALP(BgL_xz00_1397))
{ /* Ieee/flonum.scm 477 */
BgL_tmpz00_2173 = BgL_xz00_1397
; }  else 
{ 
obj_t BgL_auxz00_2176;
BgL_auxz00_2176 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)21482)), BGl_string1677z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_xz00_1397); 
FAILURE(BgL_auxz00_2176,BFALSE,BFALSE);} 
BgL_auxz00_2172 = 
REAL_TO_DOUBLE(BgL_tmpz00_2173); } 
BgL_tmpz00_2171 = 
BGl_cosflz00zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2172); } 
return 
DOUBLE_TO_REAL(BgL_tmpz00_2171);} } 

}



/* tanfl */
BGL_EXPORTED_DEF double BGl_tanflz00zz__r4_numbers_6_5_flonumz00(double BgL_xz00_46)
{
{ /* Ieee/flonum.scm 482 */
return 
tan(BgL_xz00_46);} 

}



/* &tanfl */
obj_t BGl_z62tanflz62zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1398, obj_t BgL_xz00_1399)
{
{ /* Ieee/flonum.scm 482 */
{ /* Ieee/flonum.scm 483 */
double BgL_tmpz00_2184;
{ /* Ieee/flonum.scm 483 */
double BgL_auxz00_2185;
{ /* Ieee/flonum.scm 483 */
obj_t BgL_tmpz00_2186;
if(
REALP(BgL_xz00_1399))
{ /* Ieee/flonum.scm 483 */
BgL_tmpz00_2186 = BgL_xz00_1399
; }  else 
{ 
obj_t BgL_auxz00_2189;
BgL_auxz00_2189 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)21744)), BGl_string1678z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_xz00_1399); 
FAILURE(BgL_auxz00_2189,BFALSE,BFALSE);} 
BgL_auxz00_2185 = 
REAL_TO_DOUBLE(BgL_tmpz00_2186); } 
BgL_tmpz00_2184 = 
BGl_tanflz00zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2185); } 
return 
DOUBLE_TO_REAL(BgL_tmpz00_2184);} } 

}



/* asinfl */
BGL_EXPORTED_DEF double BGl_asinflz00zz__r4_numbers_6_5_flonumz00(double BgL_xz00_47)
{
{ /* Ieee/flonum.scm 488 */
return 
asin(BgL_xz00_47);} 

}



/* &asinfl */
obj_t BGl_z62asinflz62zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1400, obj_t BgL_xz00_1401)
{
{ /* Ieee/flonum.scm 488 */
{ /* Ieee/flonum.scm 489 */
double BgL_tmpz00_2197;
{ /* Ieee/flonum.scm 489 */
double BgL_auxz00_2198;
{ /* Ieee/flonum.scm 489 */
obj_t BgL_tmpz00_2199;
if(
REALP(BgL_xz00_1401))
{ /* Ieee/flonum.scm 489 */
BgL_tmpz00_2199 = BgL_xz00_1401
; }  else 
{ 
obj_t BgL_auxz00_2202;
BgL_auxz00_2202 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)22007)), BGl_string1679z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_xz00_1401); 
FAILURE(BgL_auxz00_2202,BFALSE,BFALSE);} 
BgL_auxz00_2198 = 
REAL_TO_DOUBLE(BgL_tmpz00_2199); } 
BgL_tmpz00_2197 = 
BGl_asinflz00zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2198); } 
return 
DOUBLE_TO_REAL(BgL_tmpz00_2197);} } 

}



/* acosfl */
BGL_EXPORTED_DEF double BGl_acosflz00zz__r4_numbers_6_5_flonumz00(double BgL_xz00_48)
{
{ /* Ieee/flonum.scm 494 */
return 
acos(BgL_xz00_48);} 

}



/* &acosfl */
obj_t BGl_z62acosflz62zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1402, obj_t BgL_xz00_1403)
{
{ /* Ieee/flonum.scm 494 */
{ /* Ieee/flonum.scm 495 */
double BgL_tmpz00_2210;
{ /* Ieee/flonum.scm 495 */
double BgL_auxz00_2211;
{ /* Ieee/flonum.scm 495 */
obj_t BgL_tmpz00_2212;
if(
REALP(BgL_xz00_1403))
{ /* Ieee/flonum.scm 495 */
BgL_tmpz00_2212 = BgL_xz00_1403
; }  else 
{ 
obj_t BgL_auxz00_2215;
BgL_auxz00_2215 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)22271)), BGl_string1680z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_xz00_1403); 
FAILURE(BgL_auxz00_2215,BFALSE,BFALSE);} 
BgL_auxz00_2211 = 
REAL_TO_DOUBLE(BgL_tmpz00_2212); } 
BgL_tmpz00_2210 = 
BGl_acosflz00zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2211); } 
return 
DOUBLE_TO_REAL(BgL_tmpz00_2210);} } 

}



/* atanfl */
BGL_EXPORTED_DEF double BGl_atanflz00zz__r4_numbers_6_5_flonumz00(double BgL_xz00_49, obj_t BgL_yz00_50)
{
{ /* Ieee/flonum.scm 500 */
if(
NULLP(BgL_yz00_50))
{ /* Ieee/flonum.scm 501 */
return 
atan(BgL_xz00_49);}  else 
{ /* Ieee/flonum.scm 503 */
obj_t BgL_yz00_1096;
{ /* Ieee/flonum.scm 503 */
obj_t BgL_pairz00_1098;
if(
PAIRP(BgL_yz00_50))
{ /* Ieee/flonum.scm 503 */
BgL_pairz00_1098 = BgL_yz00_50; }  else 
{ 
obj_t BgL_auxz00_2227;
BgL_auxz00_2227 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)22585)), BGl_string1681z00zz__r4_numbers_6_5_flonumz00, BGl_string1663z00zz__r4_numbers_6_5_flonumz00, BgL_yz00_50); 
FAILURE(BgL_auxz00_2227,BFALSE,BFALSE);} 
BgL_yz00_1096 = 
CAR(BgL_pairz00_1098); } 
{ /* Ieee/flonum.scm 504 */
double BgL_res1438z00_1112;
{ /* Ieee/flonum.scm 504 */
double BgL_yz00_1100;
{ /* Ieee/flonum.scm 504 */
obj_t BgL_tmpz00_2232;
if(
REALP(BgL_yz00_1096))
{ /* Ieee/flonum.scm 504 */
BgL_tmpz00_2232 = BgL_yz00_1096
; }  else 
{ 
obj_t BgL_auxz00_2235;
BgL_auxz00_2235 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)22593)), BGl_string1681z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_yz00_1096); 
FAILURE(BgL_auxz00_2235,BFALSE,BFALSE);} 
BgL_yz00_1100 = 
REAL_TO_DOUBLE(BgL_tmpz00_2232); } 
{ /* Ieee/flonum.scm 519 */
bool_t BgL_test1901z00_2240;
if(
(BgL_xz00_49==((double)0.0)))
{ /* Ieee/flonum.scm 516 */
BgL_test1901z00_2240 = 
(BgL_yz00_1100==((double)0.0))
; }  else 
{ /* Ieee/flonum.scm 516 */
BgL_test1901z00_2240 = ((bool_t)0)
; } 
if(BgL_test1901z00_2240)
{ /* Ieee/flonum.scm 520 */
obj_t BgL_procz00_1103;obj_t BgL_msgz00_1104;obj_t BgL_objz00_1105;
BgL_procz00_1103 = 
string_to_bstring(
BSTRING_TO_STRING(BGl_string1681z00zz__r4_numbers_6_5_flonumz00)); 
BgL_msgz00_1104 = 
string_to_bstring(
BSTRING_TO_STRING(BGl_string1682z00zz__r4_numbers_6_5_flonumz00)); 
BgL_objz00_1105 = BGL_REAL_CNST( BGl_real1683z00zz__r4_numbers_6_5_flonumz00); 
the_failure(BgL_procz00_1103, BgL_msgz00_1104, BgL_objz00_1105); 
BgL_res1438z00_1112 = ((double)0.0); }  else 
{ /* Ieee/flonum.scm 519 */
BgL_res1438z00_1112 = 
atan2(BgL_xz00_49, BgL_yz00_1100); } } } 
return BgL_res1438z00_1112;} } } 

}



/* &atanfl */
obj_t BGl_z62atanflz62zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1404, obj_t BgL_xz00_1405, obj_t BgL_yz00_1406)
{
{ /* Ieee/flonum.scm 500 */
{ /* Ieee/flonum.scm 501 */
double BgL_tmpz00_2250;
{ /* Ieee/flonum.scm 501 */
double BgL_auxz00_2251;
{ /* Ieee/flonum.scm 501 */
obj_t BgL_tmpz00_2252;
if(
REALP(BgL_xz00_1405))
{ /* Ieee/flonum.scm 501 */
BgL_tmpz00_2252 = BgL_xz00_1405
; }  else 
{ 
obj_t BgL_auxz00_2255;
BgL_auxz00_2255 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)22532)), BGl_string1684z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_xz00_1405); 
FAILURE(BgL_auxz00_2255,BFALSE,BFALSE);} 
BgL_auxz00_2251 = 
REAL_TO_DOUBLE(BgL_tmpz00_2252); } 
BgL_tmpz00_2250 = 
BGl_atanflz00zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2251, BgL_yz00_1406); } 
return 
DOUBLE_TO_REAL(BgL_tmpz00_2250);} } 

}



/* atan-1fl */
BGL_EXPORTED_DEF double BGl_atanzd21flzd2zz__r4_numbers_6_5_flonumz00(double BgL_xz00_51)
{
{ /* Ieee/flonum.scm 509 */
return 
atan(BgL_xz00_51);} 

}



/* &atan-1fl */
obj_t BGl_z62atanzd21flzb0zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1407, obj_t BgL_xz00_1408)
{
{ /* Ieee/flonum.scm 509 */
{ /* Ieee/flonum.scm 510 */
double BgL_tmpz00_2263;
{ /* Ieee/flonum.scm 510 */
double BgL_auxz00_2264;
{ /* Ieee/flonum.scm 510 */
obj_t BgL_tmpz00_2265;
if(
REALP(BgL_xz00_1408))
{ /* Ieee/flonum.scm 510 */
BgL_tmpz00_2265 = BgL_xz00_1408
; }  else 
{ 
obj_t BgL_auxz00_2268;
BgL_auxz00_2268 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)22865)), BGl_string1685z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_xz00_1408); 
FAILURE(BgL_auxz00_2268,BFALSE,BFALSE);} 
BgL_auxz00_2264 = 
REAL_TO_DOUBLE(BgL_tmpz00_2265); } 
BgL_tmpz00_2263 = 
BGl_atanzd21flzd2zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2264); } 
return 
DOUBLE_TO_REAL(BgL_tmpz00_2263);} } 

}



/* atan-2fl */
BGL_EXPORTED_DEF double BGl_atanzd22flzd2zz__r4_numbers_6_5_flonumz00(double BgL_xz00_52, double BgL_yz00_53)
{
{ /* Ieee/flonum.scm 515 */
{ /* Ieee/flonum.scm 519 */
bool_t BgL_test1905z00_2275;
if(
(BgL_xz00_52==((double)0.0)))
{ /* Ieee/flonum.scm 516 */
BgL_test1905z00_2275 = 
(BgL_yz00_53==((double)0.0))
; }  else 
{ /* Ieee/flonum.scm 516 */
BgL_test1905z00_2275 = ((bool_t)0)
; } 
if(BgL_test1905z00_2275)
{ /* Ieee/flonum.scm 520 */
obj_t BgL_procz00_1617;obj_t BgL_msgz00_1618;obj_t BgL_objz00_1619;
BgL_procz00_1617 = 
string_to_bstring(
BSTRING_TO_STRING(BGl_string1681z00zz__r4_numbers_6_5_flonumz00)); 
BgL_msgz00_1618 = 
string_to_bstring(
BSTRING_TO_STRING(BGl_string1682z00zz__r4_numbers_6_5_flonumz00)); 
BgL_objz00_1619 = BGL_REAL_CNST( BGl_real1683z00zz__r4_numbers_6_5_flonumz00); 
the_failure(BgL_procz00_1617, BgL_msgz00_1618, BgL_objz00_1619); 
return ((double)0.0);}  else 
{ /* Ieee/flonum.scm 519 */
return 
atan2(BgL_xz00_52, BgL_yz00_53);} } } 

}



/* &atan-2fl */
obj_t BGl_z62atanzd22flzb0zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1409, obj_t BgL_xz00_1410, obj_t BgL_yz00_1411)
{
{ /* Ieee/flonum.scm 515 */
{ /* Ieee/flonum.scm 516 */
double BgL_tmpz00_2285;
{ /* Ieee/flonum.scm 516 */
double BgL_auxz00_2295;double BgL_auxz00_2286;
{ /* Ieee/flonum.scm 516 */
obj_t BgL_tmpz00_2296;
if(
REALP(BgL_yz00_1411))
{ /* Ieee/flonum.scm 516 */
BgL_tmpz00_2296 = BgL_yz00_1411
; }  else 
{ 
obj_t BgL_auxz00_2299;
BgL_auxz00_2299 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)23133)), BGl_string1686z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_yz00_1411); 
FAILURE(BgL_auxz00_2299,BFALSE,BFALSE);} 
BgL_auxz00_2295 = 
REAL_TO_DOUBLE(BgL_tmpz00_2296); } 
{ /* Ieee/flonum.scm 516 */
obj_t BgL_tmpz00_2287;
if(
REALP(BgL_xz00_1410))
{ /* Ieee/flonum.scm 516 */
BgL_tmpz00_2287 = BgL_xz00_1410
; }  else 
{ 
obj_t BgL_auxz00_2290;
BgL_auxz00_2290 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)23133)), BGl_string1686z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_xz00_1410); 
FAILURE(BgL_auxz00_2290,BFALSE,BFALSE);} 
BgL_auxz00_2286 = 
REAL_TO_DOUBLE(BgL_tmpz00_2287); } 
BgL_tmpz00_2285 = 
BGl_atanzd22flzd2zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2286, BgL_auxz00_2295); } 
return 
DOUBLE_TO_REAL(BgL_tmpz00_2285);} } 

}



/* atan-2fl-ur */
BGL_EXPORTED_DEF double BGl_atanzd22flzd2urz00zz__r4_numbers_6_5_flonumz00(double BgL_xz00_54, double BgL_yz00_55)
{
{ /* Ieee/flonum.scm 533 */
return 
atan2(BgL_xz00_54, BgL_yz00_55);} 

}



/* &atan-2fl-ur */
obj_t BGl_z62atanzd22flzd2urz62zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1412, obj_t BgL_xz00_1413, obj_t BgL_yz00_1414)
{
{ /* Ieee/flonum.scm 533 */
{ /* Ieee/flonum.scm 534 */
double BgL_tmpz00_2307;
{ /* Ieee/flonum.scm 534 */
double BgL_auxz00_2317;double BgL_auxz00_2308;
{ /* Ieee/flonum.scm 534 */
obj_t BgL_tmpz00_2318;
if(
REALP(BgL_yz00_1414))
{ /* Ieee/flonum.scm 534 */
BgL_tmpz00_2318 = BgL_yz00_1414
; }  else 
{ 
obj_t BgL_auxz00_2321;
BgL_auxz00_2321 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)23772)), BGl_string1687z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_yz00_1414); 
FAILURE(BgL_auxz00_2321,BFALSE,BFALSE);} 
BgL_auxz00_2317 = 
REAL_TO_DOUBLE(BgL_tmpz00_2318); } 
{ /* Ieee/flonum.scm 534 */
obj_t BgL_tmpz00_2309;
if(
REALP(BgL_xz00_1413))
{ /* Ieee/flonum.scm 534 */
BgL_tmpz00_2309 = BgL_xz00_1413
; }  else 
{ 
obj_t BgL_auxz00_2312;
BgL_auxz00_2312 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)23772)), BGl_string1687z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_xz00_1413); 
FAILURE(BgL_auxz00_2312,BFALSE,BFALSE);} 
BgL_auxz00_2308 = 
REAL_TO_DOUBLE(BgL_tmpz00_2309); } 
BgL_tmpz00_2307 = 
BGl_atanzd22flzd2urz00zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2308, BgL_auxz00_2317); } 
return 
DOUBLE_TO_REAL(BgL_tmpz00_2307);} } 

}



/* sqrtfl */
BGL_EXPORTED_DEF double BGl_sqrtflz00zz__r4_numbers_6_5_flonumz00(double BgL_rz00_56)
{
{ /* Ieee/flonum.scm 539 */
if(
(BgL_rz00_56<((double)0.0)))
{ /* Ieee/flonum.scm 541 */
obj_t BgL_procz00_1620;obj_t BgL_msgz00_1621;obj_t BgL_objz00_1622;
BgL_procz00_1620 = 
string_to_bstring(
BSTRING_TO_STRING(BGl_string1688z00zz__r4_numbers_6_5_flonumz00)); 
BgL_msgz00_1621 = 
string_to_bstring(
BSTRING_TO_STRING(BGl_string1682z00zz__r4_numbers_6_5_flonumz00)); 
BgL_objz00_1622 = 
DOUBLE_TO_REAL(BgL_rz00_56); 
BGl_errorz00zz__errorz00(BgL_procz00_1620, BgL_msgz00_1621, BgL_objz00_1622); 
return ((double)0.0);}  else 
{ /* Ieee/flonum.scm 540 */
return 
sqrt(BgL_rz00_56);} } 

}



/* &sqrtfl */
obj_t BGl_z62sqrtflz62zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1415, obj_t BgL_rz00_1416)
{
{ /* Ieee/flonum.scm 539 */
{ /* Ieee/flonum.scm 540 */
double BgL_tmpz00_2337;
{ /* Ieee/flonum.scm 540 */
double BgL_auxz00_2338;
{ /* Ieee/flonum.scm 540 */
obj_t BgL_tmpz00_2339;
if(
REALP(BgL_rz00_1416))
{ /* Ieee/flonum.scm 540 */
BgL_tmpz00_2339 = BgL_rz00_1416
; }  else 
{ 
obj_t BgL_auxz00_2342;
BgL_auxz00_2342 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)24039)), BGl_string1689z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_1416); 
FAILURE(BgL_auxz00_2342,BFALSE,BFALSE);} 
BgL_auxz00_2338 = 
REAL_TO_DOUBLE(BgL_tmpz00_2339); } 
BgL_tmpz00_2337 = 
BGl_sqrtflz00zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2338); } 
return 
DOUBLE_TO_REAL(BgL_tmpz00_2337);} } 

}



/* sqrtfl-ur */
BGL_EXPORTED_DEF double BGl_sqrtflzd2urzd2zz__r4_numbers_6_5_flonumz00(double BgL_rz00_57)
{
{ /* Ieee/flonum.scm 552 */
return 
sqrt(BgL_rz00_57);} 

}



/* &sqrtfl-ur */
obj_t BGl_z62sqrtflzd2urzb0zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1417, obj_t BgL_rz00_1418)
{
{ /* Ieee/flonum.scm 552 */
{ /* Ieee/flonum.scm 553 */
double BgL_tmpz00_2350;
{ /* Ieee/flonum.scm 553 */
double BgL_auxz00_2351;
{ /* Ieee/flonum.scm 553 */
obj_t BgL_tmpz00_2352;
if(
REALP(BgL_rz00_1418))
{ /* Ieee/flonum.scm 553 */
BgL_tmpz00_2352 = BgL_rz00_1418
; }  else 
{ 
obj_t BgL_auxz00_2355;
BgL_auxz00_2355 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)24519)), BGl_string1690z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_1418); 
FAILURE(BgL_auxz00_2355,BFALSE,BFALSE);} 
BgL_auxz00_2351 = 
REAL_TO_DOUBLE(BgL_tmpz00_2352); } 
BgL_tmpz00_2350 = 
BGl_sqrtflzd2urzd2zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2351); } 
return 
DOUBLE_TO_REAL(BgL_tmpz00_2350);} } 

}



/* exptfl */
BGL_EXPORTED_DEF double BGl_exptflz00zz__r4_numbers_6_5_flonumz00(double BgL_r1z00_58, double BgL_r2z00_59)
{
{ /* Ieee/flonum.scm 558 */
return 
pow(BgL_r1z00_58, BgL_r2z00_59);} 

}



/* &exptfl */
obj_t BGl_z62exptflz62zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1419, obj_t BgL_r1z00_1420, obj_t BgL_r2z00_1421)
{
{ /* Ieee/flonum.scm 558 */
{ /* Ieee/flonum.scm 559 */
double BgL_tmpz00_2363;
{ /* Ieee/flonum.scm 559 */
double BgL_auxz00_2373;double BgL_auxz00_2364;
{ /* Ieee/flonum.scm 559 */
obj_t BgL_tmpz00_2374;
if(
REALP(BgL_r2z00_1421))
{ /* Ieee/flonum.scm 559 */
BgL_tmpz00_2374 = BgL_r2z00_1421
; }  else 
{ 
obj_t BgL_auxz00_2377;
BgL_auxz00_2377 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)24787)), BGl_string1691z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_r2z00_1421); 
FAILURE(BgL_auxz00_2377,BFALSE,BFALSE);} 
BgL_auxz00_2373 = 
REAL_TO_DOUBLE(BgL_tmpz00_2374); } 
{ /* Ieee/flonum.scm 559 */
obj_t BgL_tmpz00_2365;
if(
REALP(BgL_r1z00_1420))
{ /* Ieee/flonum.scm 559 */
BgL_tmpz00_2365 = BgL_r1z00_1420
; }  else 
{ 
obj_t BgL_auxz00_2368;
BgL_auxz00_2368 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)24787)), BGl_string1691z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_r1z00_1420); 
FAILURE(BgL_auxz00_2368,BFALSE,BFALSE);} 
BgL_auxz00_2364 = 
REAL_TO_DOUBLE(BgL_tmpz00_2365); } 
BgL_tmpz00_2363 = 
BGl_exptflz00zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2364, BgL_auxz00_2373); } 
return 
DOUBLE_TO_REAL(BgL_tmpz00_2363);} } 

}



/* signbitfl */
BGL_EXPORTED_DEF long BGl_signbitflz00zz__r4_numbers_6_5_flonumz00(double BgL_rz00_60)
{
{ /* Ieee/flonum.scm 564 */
return 
BGL_SIGNBIT(BgL_rz00_60);} 

}



/* &signbitfl */
obj_t BGl_z62signbitflz62zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1422, obj_t BgL_rz00_1423)
{
{ /* Ieee/flonum.scm 564 */
{ /* Ieee/flonum.scm 565 */
long BgL_tmpz00_2385;
{ /* Ieee/flonum.scm 565 */
double BgL_auxz00_2386;
{ /* Ieee/flonum.scm 565 */
obj_t BgL_tmpz00_2387;
if(
REALP(BgL_rz00_1423))
{ /* Ieee/flonum.scm 565 */
BgL_tmpz00_2387 = BgL_rz00_1423
; }  else 
{ 
obj_t BgL_auxz00_2390;
BgL_auxz00_2390 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)25057)), BGl_string1692z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_1423); 
FAILURE(BgL_auxz00_2390,BFALSE,BFALSE);} 
BgL_auxz00_2386 = 
REAL_TO_DOUBLE(BgL_tmpz00_2387); } 
BgL_tmpz00_2385 = 
BGl_signbitflz00zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2386); } 
return 
BINT(BgL_tmpz00_2385);} } 

}



/* integerfl? */
BGL_EXPORTED_DEF bool_t BGl_integerflzf3zf3zz__r4_numbers_6_5_flonumz00(double BgL_rz00_61)
{
{ /* Ieee/flonum.scm 570 */
{ /* Ieee/flonum.scm 573 */
double BgL_intpartz00_1623;
BgL_intpartz00_1623 = ((double)0.0); 
if(
BGL_IS_FINITE(BgL_rz00_61))
{ /* Ieee/flonum.scm 575 */
double BgL_arg1073z00_1624;
{ /* Ieee/flonum.scm 575 */
void * BgL_arg1074z00_1625;
BgL_arg1074z00_1625 = 
&(
BgL_intpartz00_1623); 
BgL_arg1073z00_1624 = 
modf(BgL_rz00_61, BgL_arg1074z00_1625); } 
return 
(BgL_arg1073z00_1624==((double)0.0));}  else 
{ /* Ieee/flonum.scm 574 */
return ((bool_t)0);} } } 

}



/* &integerfl? */
obj_t BGl_z62integerflzf3z91zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1424, obj_t BgL_rz00_1425)
{
{ /* Ieee/flonum.scm 570 */
{ /* Ieee/flonum.scm 573 */
bool_t BgL_tmpz00_2403;
{ /* Ieee/flonum.scm 573 */
double BgL_auxz00_2404;
{ /* Ieee/flonum.scm 573 */
obj_t BgL_tmpz00_2405;
if(
REALP(BgL_rz00_1425))
{ /* Ieee/flonum.scm 573 */
BgL_tmpz00_2405 = BgL_rz00_1425
; }  else 
{ 
obj_t BgL_auxz00_2408;
BgL_auxz00_2408 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)25363)), BGl_string1693z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_1425); 
FAILURE(BgL_auxz00_2408,BFALSE,BFALSE);} 
BgL_auxz00_2404 = 
REAL_TO_DOUBLE(BgL_tmpz00_2405); } 
BgL_tmpz00_2403 = 
BGl_integerflzf3zf3zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2404); } 
return 
BBOOL(BgL_tmpz00_2403);} } 

}



/* evenfl? */
BGL_EXPORTED_DEF bool_t BGl_evenflzf3zf3zz__r4_numbers_6_5_flonumz00(double BgL_rz00_62)
{
{ /* Ieee/flonum.scm 582 */
{ /* Ieee/flonum.scm 583 */
double BgL_arg1078z00_1626;
BgL_arg1078z00_1626 = 
(BgL_rz00_62/((double)2.0)); 
{ /* Ieee/flonum.scm 583 */
bool_t BgL_res1447z00_1627;
{ /* Ieee/flonum.scm 573 */
double BgL_intpartz00_1628;
BgL_intpartz00_1628 = ((double)0.0); 
if(
BGL_IS_FINITE(BgL_arg1078z00_1626))
{ /* Ieee/flonum.scm 575 */
double BgL_arg1073z00_1629;
{ /* Ieee/flonum.scm 575 */
void * BgL_arg1074z00_1630;
BgL_arg1074z00_1630 = 
&(
BgL_intpartz00_1628); 
BgL_arg1073z00_1629 = 
modf(BgL_arg1078z00_1626, BgL_arg1074z00_1630); } 
BgL_res1447z00_1627 = 
(BgL_arg1073z00_1629==((double)0.0)); }  else 
{ /* Ieee/flonum.scm 574 */
BgL_res1447z00_1627 = ((bool_t)0); } } 
return BgL_res1447z00_1627;} } } 

}



/* &evenfl? */
obj_t BGl_z62evenflzf3z91zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1426, obj_t BgL_rz00_1427)
{
{ /* Ieee/flonum.scm 582 */
{ /* Ieee/flonum.scm 583 */
bool_t BgL_tmpz00_2422;
{ /* Ieee/flonum.scm 583 */
double BgL_auxz00_2423;
{ /* Ieee/flonum.scm 583 */
obj_t BgL_tmpz00_2424;
if(
REALP(BgL_rz00_1427))
{ /* Ieee/flonum.scm 583 */
BgL_tmpz00_2424 = BgL_rz00_1427
; }  else 
{ 
obj_t BgL_auxz00_2427;
BgL_auxz00_2427 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)25813)), BGl_string1694z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_1427); 
FAILURE(BgL_auxz00_2427,BFALSE,BFALSE);} 
BgL_auxz00_2423 = 
REAL_TO_DOUBLE(BgL_tmpz00_2424); } 
BgL_tmpz00_2422 = 
BGl_evenflzf3zf3zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2423); } 
return 
BBOOL(BgL_tmpz00_2422);} } 

}



/* oddfl? */
BGL_EXPORTED_DEF bool_t BGl_oddflzf3zf3zz__r4_numbers_6_5_flonumz00(double BgL_rz00_63)
{
{ /* Ieee/flonum.scm 588 */
{ /* Ieee/flonum.scm 589 */
bool_t BgL_test1921z00_2434;
{ /* Ieee/flonum.scm 589 */
bool_t BgL_res1450z00_1631;
{ /* Ieee/flonum.scm 573 */
double BgL_intpartz00_1632;
BgL_intpartz00_1632 = ((double)0.0); 
if(
BGL_IS_FINITE(BgL_rz00_63))
{ /* Ieee/flonum.scm 575 */
double BgL_arg1073z00_1633;
{ /* Ieee/flonum.scm 575 */
void * BgL_arg1074z00_1634;
BgL_arg1074z00_1634 = 
&(
BgL_intpartz00_1632); 
BgL_arg1073z00_1633 = 
modf(BgL_rz00_63, BgL_arg1074z00_1634); } 
BgL_res1450z00_1631 = 
(BgL_arg1073z00_1633==((double)0.0)); }  else 
{ /* Ieee/flonum.scm 574 */
BgL_res1450z00_1631 = ((bool_t)0); } } 
BgL_test1921z00_2434 = BgL_res1450z00_1631; } 
if(BgL_test1921z00_2434)
{ /* Ieee/flonum.scm 590 */
bool_t BgL_test1923z00_2441;
{ /* Ieee/flonum.scm 590 */
bool_t BgL_res1455z00_1635;
{ /* Ieee/flonum.scm 583 */
double BgL_arg1078z00_1636;
BgL_arg1078z00_1636 = 
(BgL_rz00_63/((double)2.0)); 
{ /* Ieee/flonum.scm 583 */
bool_t BgL_res1454z00_1637;
{ /* Ieee/flonum.scm 573 */
double BgL_intpartz00_1638;
BgL_intpartz00_1638 = ((double)0.0); 
if(
BGL_IS_FINITE(BgL_arg1078z00_1636))
{ /* Ieee/flonum.scm 575 */
double BgL_arg1073z00_1639;
{ /* Ieee/flonum.scm 575 */
void * BgL_arg1074z00_1640;
BgL_arg1074z00_1640 = 
&(
BgL_intpartz00_1638); 
BgL_arg1073z00_1639 = 
modf(BgL_arg1078z00_1636, BgL_arg1074z00_1640); } 
BgL_res1454z00_1637 = 
(BgL_arg1073z00_1639==((double)0.0)); }  else 
{ /* Ieee/flonum.scm 574 */
BgL_res1454z00_1637 = ((bool_t)0); } } 
BgL_res1455z00_1635 = BgL_res1454z00_1637; } } 
BgL_test1923z00_2441 = BgL_res1455z00_1635; } 
if(BgL_test1923z00_2441)
{ /* Ieee/flonum.scm 590 */
return ((bool_t)0);}  else 
{ /* Ieee/flonum.scm 590 */
return ((bool_t)1);} }  else 
{ /* Ieee/flonum.scm 589 */
return ((bool_t)0);} } } 

}



/* &oddfl? */
obj_t BGl_z62oddflzf3z91zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1428, obj_t BgL_rz00_1429)
{
{ /* Ieee/flonum.scm 588 */
{ /* Ieee/flonum.scm 589 */
bool_t BgL_tmpz00_2449;
{ /* Ieee/flonum.scm 589 */
double BgL_auxz00_2450;
{ /* Ieee/flonum.scm 589 */
obj_t BgL_tmpz00_2451;
if(
REALP(BgL_rz00_1429))
{ /* Ieee/flonum.scm 589 */
BgL_tmpz00_2451 = BgL_rz00_1429
; }  else 
{ 
obj_t BgL_auxz00_2454;
BgL_auxz00_2454 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)26084)), BGl_string1695z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_1429); 
FAILURE(BgL_auxz00_2454,BFALSE,BFALSE);} 
BgL_auxz00_2450 = 
REAL_TO_DOUBLE(BgL_tmpz00_2451); } 
BgL_tmpz00_2449 = 
BGl_oddflzf3zf3zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2450); } 
return 
BBOOL(BgL_tmpz00_2449);} } 

}



/* finitefl? */
BGL_EXPORTED_DEF bool_t BGl_finiteflzf3zf3zz__r4_numbers_6_5_flonumz00(double BgL_rz00_64)
{
{ /* Ieee/flonum.scm 595 */
return 
BGL_IS_FINITE(BgL_rz00_64);} 

}



/* &finitefl? */
obj_t BGl_z62finiteflzf3z91zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1430, obj_t BgL_rz00_1431)
{
{ /* Ieee/flonum.scm 595 */
{ /* Ieee/flonum.scm 596 */
bool_t BgL_tmpz00_2462;
{ /* Ieee/flonum.scm 596 */
double BgL_auxz00_2463;
{ /* Ieee/flonum.scm 596 */
obj_t BgL_tmpz00_2464;
if(
REALP(BgL_rz00_1431))
{ /* Ieee/flonum.scm 596 */
BgL_tmpz00_2464 = BgL_rz00_1431
; }  else 
{ 
obj_t BgL_auxz00_2467;
BgL_auxz00_2467 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)26375)), BGl_string1696z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_1431); 
FAILURE(BgL_auxz00_2467,BFALSE,BFALSE);} 
BgL_auxz00_2463 = 
REAL_TO_DOUBLE(BgL_tmpz00_2464); } 
BgL_tmpz00_2462 = 
BGl_finiteflzf3zf3zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2463); } 
return 
BBOOL(BgL_tmpz00_2462);} } 

}



/* infinitefl? */
BGL_EXPORTED_DEF bool_t BGl_infiniteflzf3zf3zz__r4_numbers_6_5_flonumz00(double BgL_rz00_65)
{
{ /* Ieee/flonum.scm 601 */
return 
BGL_IS_INF(BgL_rz00_65);} 

}



/* &infinitefl? */
obj_t BGl_z62infiniteflzf3z91zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1432, obj_t BgL_rz00_1433)
{
{ /* Ieee/flonum.scm 601 */
{ /* Ieee/flonum.scm 602 */
bool_t BgL_tmpz00_2475;
{ /* Ieee/flonum.scm 602 */
double BgL_auxz00_2476;
{ /* Ieee/flonum.scm 602 */
obj_t BgL_tmpz00_2477;
if(
REALP(BgL_rz00_1433))
{ /* Ieee/flonum.scm 602 */
BgL_tmpz00_2477 = BgL_rz00_1433
; }  else 
{ 
obj_t BgL_auxz00_2480;
BgL_auxz00_2480 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)26648)), BGl_string1697z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_1433); 
FAILURE(BgL_auxz00_2480,BFALSE,BFALSE);} 
BgL_auxz00_2476 = 
REAL_TO_DOUBLE(BgL_tmpz00_2477); } 
BgL_tmpz00_2475 = 
BGl_infiniteflzf3zf3zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2476); } 
return 
BBOOL(BgL_tmpz00_2475);} } 

}



/* nanfl? */
BGL_EXPORTED_DEF bool_t BGl_nanflzf3zf3zz__r4_numbers_6_5_flonumz00(double BgL_rz00_66)
{
{ /* Ieee/flonum.scm 607 */
return 
BGL_IS_NAN(BgL_rz00_66);} 

}



/* &nanfl? */
obj_t BGl_z62nanflzf3z91zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1434, obj_t BgL_rz00_1435)
{
{ /* Ieee/flonum.scm 607 */
{ /* Ieee/flonum.scm 608 */
bool_t BgL_tmpz00_2488;
{ /* Ieee/flonum.scm 608 */
double BgL_auxz00_2489;
{ /* Ieee/flonum.scm 608 */
obj_t BgL_tmpz00_2490;
if(
REALP(BgL_rz00_1435))
{ /* Ieee/flonum.scm 608 */
BgL_tmpz00_2490 = BgL_rz00_1435
; }  else 
{ 
obj_t BgL_auxz00_2493;
BgL_auxz00_2493 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)26913)), BGl_string1698z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_1435); 
FAILURE(BgL_auxz00_2493,BFALSE,BFALSE);} 
BgL_auxz00_2489 = 
REAL_TO_DOUBLE(BgL_tmpz00_2490); } 
BgL_tmpz00_2488 = 
BGl_nanflzf3zf3zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2489); } 
return 
BBOOL(BgL_tmpz00_2488);} } 

}



/* string->real */
BGL_EXPORTED_DEF double BGl_stringzd2ze3realz31zz__r4_numbers_6_5_flonumz00(char * BgL_stringz00_67)
{
{ /* Ieee/flonum.scm 613 */
{ /* Ieee/flonum.scm 615 */
bool_t BgL_test1929z00_2500;
{ /* Ieee/flonum.scm 615 */
bool_t BgL_res1460z00_1641;
{ /* Ieee/flonum.scm 615 */
obj_t BgL_string1z00_1642;
BgL_string1z00_1642 = 
string_to_bstring(BgL_stringz00_67); 
{ /* Ieee/flonum.scm 615 */
long BgL_l1z00_1643;
BgL_l1z00_1643 = 
STRING_LENGTH(BgL_string1z00_1642); 
if(
(BgL_l1z00_1643==((long)6)))
{ /* Ieee/flonum.scm 615 */
int BgL_arg1409z00_1644;
{ /* Ieee/flonum.scm 615 */
char * BgL_auxz00_2507;char * BgL_tmpz00_2505;
BgL_auxz00_2507 = 
BSTRING_TO_STRING(BGl_string1699z00zz__r4_numbers_6_5_flonumz00); 
BgL_tmpz00_2505 = 
BSTRING_TO_STRING(BgL_string1z00_1642); 
BgL_arg1409z00_1644 = 
memcmp(BgL_tmpz00_2505, BgL_auxz00_2507, BgL_l1z00_1643); } 
BgL_res1460z00_1641 = 
(
(long)(BgL_arg1409z00_1644)==((long)0)); }  else 
{ /* Ieee/flonum.scm 615 */
BgL_res1460z00_1641 = ((bool_t)0); } } } 
BgL_test1929z00_2500 = BgL_res1460z00_1641; } 
if(BgL_test1929z00_2500)
{ /* Ieee/flonum.scm 615 */
return BGL_NAN;}  else 
{ /* Ieee/flonum.scm 617 */
bool_t BgL_test1931z00_2512;
{ /* Ieee/flonum.scm 617 */
bool_t BgL_res1465z00_1645;
{ /* Ieee/flonum.scm 617 */
obj_t BgL_string1z00_1646;
BgL_string1z00_1646 = 
string_to_bstring(BgL_stringz00_67); 
{ /* Ieee/flonum.scm 617 */
long BgL_l1z00_1647;
BgL_l1z00_1647 = 
STRING_LENGTH(BgL_string1z00_1646); 
if(
(BgL_l1z00_1647==((long)6)))
{ /* Ieee/flonum.scm 617 */
int BgL_arg1409z00_1648;
{ /* Ieee/flonum.scm 617 */
char * BgL_auxz00_2519;char * BgL_tmpz00_2517;
BgL_auxz00_2519 = 
BSTRING_TO_STRING(BGl_string1700z00zz__r4_numbers_6_5_flonumz00); 
BgL_tmpz00_2517 = 
BSTRING_TO_STRING(BgL_string1z00_1646); 
BgL_arg1409z00_1648 = 
memcmp(BgL_tmpz00_2517, BgL_auxz00_2519, BgL_l1z00_1647); } 
BgL_res1465z00_1645 = 
(
(long)(BgL_arg1409z00_1648)==((long)0)); }  else 
{ /* Ieee/flonum.scm 617 */
BgL_res1465z00_1645 = ((bool_t)0); } } } 
BgL_test1931z00_2512 = BgL_res1465z00_1645; } 
if(BgL_test1931z00_2512)
{ /* Ieee/flonum.scm 617 */
return BGL_INFINITY;}  else 
{ /* Ieee/flonum.scm 619 */
bool_t BgL_test1933z00_2524;
{ /* Ieee/flonum.scm 619 */
bool_t BgL_res1470z00_1649;
{ /* Ieee/flonum.scm 619 */
obj_t BgL_string1z00_1650;
BgL_string1z00_1650 = 
string_to_bstring(BgL_stringz00_67); 
{ /* Ieee/flonum.scm 619 */
long BgL_l1z00_1651;
BgL_l1z00_1651 = 
STRING_LENGTH(BgL_string1z00_1650); 
if(
(BgL_l1z00_1651==((long)6)))
{ /* Ieee/flonum.scm 619 */
int BgL_arg1409z00_1652;
{ /* Ieee/flonum.scm 619 */
char * BgL_auxz00_2531;char * BgL_tmpz00_2529;
BgL_auxz00_2531 = 
BSTRING_TO_STRING(BGl_string1701z00zz__r4_numbers_6_5_flonumz00); 
BgL_tmpz00_2529 = 
BSTRING_TO_STRING(BgL_string1z00_1650); 
BgL_arg1409z00_1652 = 
memcmp(BgL_tmpz00_2529, BgL_auxz00_2531, BgL_l1z00_1651); } 
BgL_res1470z00_1649 = 
(
(long)(BgL_arg1409z00_1652)==((long)0)); }  else 
{ /* Ieee/flonum.scm 619 */
BgL_res1470z00_1649 = ((bool_t)0); } } } 
BgL_test1933z00_2524 = BgL_res1470z00_1649; } 
if(BgL_test1933z00_2524)
{ /* Ieee/flonum.scm 619 */
return (-BGL_INFINITY);}  else 
{ /* Ieee/flonum.scm 619 */
return 
STRTOD(BgL_stringz00_67);} } } } } 

}



/* &string->real */
obj_t BGl_z62stringzd2ze3realz53zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1436, obj_t BgL_stringz00_1437)
{
{ /* Ieee/flonum.scm 613 */
{ /* Ieee/flonum.scm 615 */
double BgL_tmpz00_2537;
{ /* Ieee/flonum.scm 615 */
char * BgL_auxz00_2538;
{ /* Ieee/flonum.scm 615 */
obj_t BgL_tmpz00_2539;
if(
STRINGP(BgL_stringz00_1437))
{ /* Ieee/flonum.scm 615 */
BgL_tmpz00_2539 = BgL_stringz00_1437
; }  else 
{ 
obj_t BgL_auxz00_2542;
BgL_auxz00_2542 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)27201)), BGl_string1702z00zz__r4_numbers_6_5_flonumz00, BGl_string1703z00zz__r4_numbers_6_5_flonumz00, BgL_stringz00_1437); 
FAILURE(BgL_auxz00_2542,BFALSE,BFALSE);} 
BgL_auxz00_2538 = 
BSTRING_TO_STRING(BgL_tmpz00_2539); } 
BgL_tmpz00_2537 = 
BGl_stringzd2ze3realz31zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2538); } 
return 
DOUBLE_TO_REAL(BgL_tmpz00_2537);} } 

}



/* ieee-string->real */
BGL_EXPORTED_DEF obj_t BGl_ieeezd2stringzd2ze3realze3zz__r4_numbers_6_5_flonumz00(obj_t BgL_stringz00_68)
{
{ /* Ieee/flonum.scm 627 */
return 
DOUBLE_TO_REAL(
bgl_ieee_string_to_double(BgL_stringz00_68));} 

}



/* &ieee-string->real */
obj_t BGl_z62ieeezd2stringzd2ze3realz81zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1438, obj_t BgL_stringz00_1439)
{
{ /* Ieee/flonum.scm 627 */
{ /* Ieee/flonum.scm 628 */
obj_t BgL_auxz00_2551;
if(
STRINGP(BgL_stringz00_1439))
{ /* Ieee/flonum.scm 628 */
BgL_auxz00_2551 = BgL_stringz00_1439
; }  else 
{ 
obj_t BgL_auxz00_2554;
BgL_auxz00_2554 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)27649)), BGl_string1704z00zz__r4_numbers_6_5_flonumz00, BGl_string1703z00zz__r4_numbers_6_5_flonumz00, BgL_stringz00_1439); 
FAILURE(BgL_auxz00_2554,BFALSE,BFALSE);} 
return 
BGl_ieeezd2stringzd2ze3realze3zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2551);} } 

}



/* real->ieee-string */
BGL_EXPORTED_DEF obj_t BGl_realzd2ze3ieeezd2stringze3zz__r4_numbers_6_5_flonumz00(obj_t BgL_realz00_69)
{
{ /* Ieee/flonum.scm 633 */
return 
bgl_double_to_ieee_string(
REAL_TO_DOUBLE(BgL_realz00_69));} 

}



/* &real->ieee-string */
obj_t BGl_z62realzd2ze3ieeezd2stringz81zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1440, obj_t BgL_realz00_1441)
{
{ /* Ieee/flonum.scm 633 */
{ /* Ieee/flonum.scm 634 */
obj_t BgL_auxz00_2561;
if(
REALP(BgL_realz00_1441))
{ /* Ieee/flonum.scm 634 */
BgL_auxz00_2561 = BgL_realz00_1441
; }  else 
{ 
obj_t BgL_auxz00_2564;
BgL_auxz00_2564 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)27946)), BGl_string1705z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_realz00_1441); 
FAILURE(BgL_auxz00_2564,BFALSE,BFALSE);} 
return 
BGl_realzd2ze3ieeezd2stringze3zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2561);} } 

}



/* ieee-string->double */
BGL_EXPORTED_DEF double BGl_ieeezd2stringzd2ze3doubleze3zz__r4_numbers_6_5_flonumz00(obj_t BgL_stringz00_70)
{
{ /* Ieee/flonum.scm 639 */
return 
bgl_ieee_string_to_double(BgL_stringz00_70);} 

}



/* &ieee-string->double */
obj_t BGl_z62ieeezd2stringzd2ze3doublez81zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1442, obj_t BgL_stringz00_1443)
{
{ /* Ieee/flonum.scm 639 */
{ /* Ieee/flonum.scm 640 */
double BgL_tmpz00_2570;
{ /* Ieee/flonum.scm 640 */
obj_t BgL_auxz00_2571;
if(
STRINGP(BgL_stringz00_1443))
{ /* Ieee/flonum.scm 640 */
BgL_auxz00_2571 = BgL_stringz00_1443
; }  else 
{ 
obj_t BgL_auxz00_2574;
BgL_auxz00_2574 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)28245)), BGl_string1706z00zz__r4_numbers_6_5_flonumz00, BGl_string1703z00zz__r4_numbers_6_5_flonumz00, BgL_stringz00_1443); 
FAILURE(BgL_auxz00_2574,BFALSE,BFALSE);} 
BgL_tmpz00_2570 = 
BGl_ieeezd2stringzd2ze3doubleze3zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2571); } 
return 
DOUBLE_TO_REAL(BgL_tmpz00_2570);} } 

}



/* double->ieee-string */
BGL_EXPORTED_DEF obj_t BGl_doublezd2ze3ieeezd2stringze3zz__r4_numbers_6_5_flonumz00(double BgL_doublez00_71)
{
{ /* Ieee/flonum.scm 645 */
return 
bgl_double_to_ieee_string(BgL_doublez00_71);} 

}



/* &double->ieee-string */
obj_t BGl_z62doublezd2ze3ieeezd2stringz81zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1444, obj_t BgL_doublez00_1445)
{
{ /* Ieee/flonum.scm 645 */
{ /* Ieee/flonum.scm 646 */
double BgL_auxz00_2581;
{ /* Ieee/flonum.scm 646 */
obj_t BgL_tmpz00_2582;
if(
REALP(BgL_doublez00_1445))
{ /* Ieee/flonum.scm 646 */
BgL_tmpz00_2582 = BgL_doublez00_1445
; }  else 
{ 
obj_t BgL_auxz00_2585;
BgL_auxz00_2585 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)28546)), BGl_string1707z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_doublez00_1445); 
FAILURE(BgL_auxz00_2585,BFALSE,BFALSE);} 
BgL_auxz00_2581 = 
REAL_TO_DOUBLE(BgL_tmpz00_2582); } 
return 
BGl_doublezd2ze3ieeezd2stringze3zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2581);} } 

}



/* ieee-string->float */
BGL_EXPORTED_DEF float BGl_ieeezd2stringzd2ze3floatze3zz__r4_numbers_6_5_flonumz00(obj_t BgL_stringz00_72)
{
{ /* Ieee/flonum.scm 651 */
return 
bgl_ieee_string_to_float(BgL_stringz00_72);} 

}



/* &ieee-string->float */
obj_t BGl_z62ieeezd2stringzd2ze3floatz81zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1446, obj_t BgL_stringz00_1447)
{
{ /* Ieee/flonum.scm 651 */
{ /* Ieee/flonum.scm 652 */
float BgL_tmpz00_2592;
{ /* Ieee/flonum.scm 652 */
obj_t BgL_auxz00_2593;
if(
STRINGP(BgL_stringz00_1447))
{ /* Ieee/flonum.scm 652 */
BgL_auxz00_2593 = BgL_stringz00_1447
; }  else 
{ 
obj_t BgL_auxz00_2596;
BgL_auxz00_2596 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)28846)), BGl_string1708z00zz__r4_numbers_6_5_flonumz00, BGl_string1703z00zz__r4_numbers_6_5_flonumz00, BgL_stringz00_1447); 
FAILURE(BgL_auxz00_2596,BFALSE,BFALSE);} 
BgL_tmpz00_2592 = 
BGl_ieeezd2stringzd2ze3floatze3zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2593); } 
return 
FLOAT_TO_REAL(BgL_tmpz00_2592);} } 

}



/* float->ieee-string */
BGL_EXPORTED_DEF obj_t BGl_floatzd2ze3ieeezd2stringze3zz__r4_numbers_6_5_flonumz00(float BgL_floatz00_73)
{
{ /* Ieee/flonum.scm 657 */
return 
bgl_float_to_ieee_string(BgL_floatz00_73);} 

}



/* &float->ieee-string */
obj_t BGl_z62floatzd2ze3ieeezd2stringz81zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1448, obj_t BgL_floatz00_1449)
{
{ /* Ieee/flonum.scm 657 */
{ /* Ieee/flonum.scm 658 */
float BgL_auxz00_2603;
{ /* Ieee/flonum.scm 658 */
obj_t BgL_tmpz00_2604;
if(
REALP(BgL_floatz00_1449))
{ /* Ieee/flonum.scm 658 */
BgL_tmpz00_2604 = BgL_floatz00_1449
; }  else 
{ 
obj_t BgL_auxz00_2607;
BgL_auxz00_2607 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)29144)), BGl_string1709z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_floatz00_1449); 
FAILURE(BgL_auxz00_2607,BFALSE,BFALSE);} 
BgL_auxz00_2603 = 
REAL_TO_FLOAT(BgL_tmpz00_2604); } 
return 
BGl_floatzd2ze3ieeezd2stringze3zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2603);} } 

}



/* double->llong-bits */
BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_doublezd2ze3llongzd2bitsze3zz__r4_numbers_6_5_flonumz00(double BgL_nz00_74)
{
{ /* Ieee/flonum.scm 663 */
return 
DOUBLE_TO_LLONG_BITS(BgL_nz00_74);} 

}



/* &double->llong-bits */
obj_t BGl_z62doublezd2ze3llongzd2bitsz81zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1450, obj_t BgL_nz00_1451)
{
{ /* Ieee/flonum.scm 663 */
{ /* Ieee/flonum.scm 664 */
BGL_LONGLONG_T BgL_tmpz00_2614;
{ /* Ieee/flonum.scm 664 */
double BgL_auxz00_2615;
{ /* Ieee/flonum.scm 664 */
obj_t BgL_tmpz00_2616;
if(
REALP(BgL_nz00_1451))
{ /* Ieee/flonum.scm 664 */
BgL_tmpz00_2616 = BgL_nz00_1451
; }  else 
{ 
obj_t BgL_auxz00_2619;
BgL_auxz00_2619 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)29452)), BGl_string1710z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_nz00_1451); 
FAILURE(BgL_auxz00_2619,BFALSE,BFALSE);} 
BgL_auxz00_2615 = 
REAL_TO_DOUBLE(BgL_tmpz00_2616); } 
BgL_tmpz00_2614 = 
BGl_doublezd2ze3llongzd2bitsze3zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2615); } 
return 
make_bllong(BgL_tmpz00_2614);} } 

}



/* llong-bits->double */
BGL_EXPORTED_DEF double BGl_llongzd2bitszd2ze3doubleze3zz__r4_numbers_6_5_flonumz00(BGL_LONGLONG_T BgL_nz00_75)
{
{ /* Ieee/flonum.scm 669 */
return 
LLONG_BITS_TO_DOUBLE(BgL_nz00_75);} 

}



/* &llong-bits->double */
obj_t BGl_z62llongzd2bitszd2ze3doublez81zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1452, obj_t BgL_nz00_1453)
{
{ /* Ieee/flonum.scm 669 */
{ /* Ieee/flonum.scm 670 */
double BgL_tmpz00_2627;
{ /* Ieee/flonum.scm 670 */
BGL_LONGLONG_T BgL_auxz00_2628;
{ /* Ieee/flonum.scm 670 */
obj_t BgL_tmpz00_2629;
if(
LLONGP(BgL_nz00_1453))
{ /* Ieee/flonum.scm 670 */
BgL_tmpz00_2629 = BgL_nz00_1453
; }  else 
{ 
obj_t BgL_auxz00_2632;
BgL_auxz00_2632 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)29756)), BGl_string1711z00zz__r4_numbers_6_5_flonumz00, BGl_string1712z00zz__r4_numbers_6_5_flonumz00, BgL_nz00_1453); 
FAILURE(BgL_auxz00_2632,BFALSE,BFALSE);} 
BgL_auxz00_2628 = 
BLLONG_TO_LLONG(BgL_tmpz00_2629); } 
BgL_tmpz00_2627 = 
BGl_llongzd2bitszd2ze3doubleze3zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2628); } 
return 
DOUBLE_TO_REAL(BgL_tmpz00_2627);} } 

}



/* float->int-bits */
BGL_EXPORTED_DEF int BGl_floatzd2ze3intzd2bitsze3zz__r4_numbers_6_5_flonumz00(float BgL_nz00_76)
{
{ /* Ieee/flonum.scm 675 */
return 
FLOAT_TO_INT_BITS(BgL_nz00_76);} 

}



/* &float->int-bits */
obj_t BGl_z62floatzd2ze3intzd2bitsz81zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1454, obj_t BgL_nz00_1455)
{
{ /* Ieee/flonum.scm 675 */
{ /* Ieee/flonum.scm 676 */
int BgL_tmpz00_2640;
{ /* Ieee/flonum.scm 676 */
float BgL_auxz00_2641;
{ /* Ieee/flonum.scm 676 */
obj_t BgL_tmpz00_2642;
if(
REALP(BgL_nz00_1455))
{ /* Ieee/flonum.scm 676 */
BgL_tmpz00_2642 = BgL_nz00_1455
; }  else 
{ 
obj_t BgL_auxz00_2645;
BgL_auxz00_2645 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)30054)), BGl_string1713z00zz__r4_numbers_6_5_flonumz00, BGl_string1649z00zz__r4_numbers_6_5_flonumz00, BgL_nz00_1455); 
FAILURE(BgL_auxz00_2645,BFALSE,BFALSE);} 
BgL_auxz00_2641 = 
REAL_TO_FLOAT(BgL_tmpz00_2642); } 
BgL_tmpz00_2640 = 
BGl_floatzd2ze3intzd2bitsze3zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2641); } 
return 
BINT(BgL_tmpz00_2640);} } 

}



/* int-bits->float */
BGL_EXPORTED_DEF float BGl_intzd2bitszd2ze3floatze3zz__r4_numbers_6_5_flonumz00(int BgL_nz00_77)
{
{ /* Ieee/flonum.scm 681 */
return 
INT_BITS_TO_FLOAT(BgL_nz00_77);} 

}



/* &int-bits->float */
obj_t BGl_z62intzd2bitszd2ze3floatz81zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1456, obj_t BgL_nz00_1457)
{
{ /* Ieee/flonum.scm 681 */
{ /* Ieee/flonum.scm 682 */
float BgL_tmpz00_2653;
{ /* Ieee/flonum.scm 682 */
int BgL_auxz00_2654;
{ /* Ieee/flonum.scm 682 */
obj_t BgL_tmpz00_2655;
if(
INTEGERP(BgL_nz00_1457))
{ /* Ieee/flonum.scm 682 */
BgL_tmpz00_2655 = BgL_nz00_1457
; }  else 
{ 
obj_t BgL_auxz00_2658;
BgL_auxz00_2658 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1647z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)30349)), BGl_string1714z00zz__r4_numbers_6_5_flonumz00, BGl_string1715z00zz__r4_numbers_6_5_flonumz00, BgL_nz00_1457); 
FAILURE(BgL_auxz00_2658,BFALSE,BFALSE);} 
BgL_auxz00_2654 = 
CINT(BgL_tmpz00_2655); } 
BgL_tmpz00_2653 = 
BGl_intzd2bitszd2ze3floatze3zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2654); } 
return 
FLOAT_TO_REAL(BgL_tmpz00_2653);} } 

}



/* randomfl */
BGL_EXPORTED_DEF double BGl_randomflz00zz__r4_numbers_6_5_flonumz00()
{
{ /* Ieee/flonum.scm 687 */
return 
RANDOMFL();} 

}



/* &randomfl */
obj_t BGl_z62randomflz62zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1458)
{
{ /* Ieee/flonum.scm 687 */
return 
DOUBLE_TO_REAL(
BGl_randomflz00zz__r4_numbers_6_5_flonumz00());} 

}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__r4_numbers_6_5_flonumz00()
{
{ /* Ieee/flonum.scm 14 */
BGl_modulezd2initializa7ationz75zz__errorz00(((long)37115357), 
BSTRING_TO_STRING(BGl_string1716z00zz__r4_numbers_6_5_flonumz00)); 
BGl_modulezd2initializa7ationz75zz__paramz00(((long)453938973), 
BSTRING_TO_STRING(BGl_string1716z00zz__r4_numbers_6_5_flonumz00)); 
BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long)473309694), 
BSTRING_TO_STRING(BGl_string1716z00zz__r4_numbers_6_5_flonumz00)); 
return 
BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonum_dtoaz00(((long)268155874), 
BSTRING_TO_STRING(BGl_string1716z00zz__r4_numbers_6_5_flonumz00));} 

}

#ifdef __cplusplus
}
#endif
