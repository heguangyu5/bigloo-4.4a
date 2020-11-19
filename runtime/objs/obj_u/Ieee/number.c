/*===========================================================================*/
/*   (Ieee/number.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Ieee/number.scm -indent -o objs/obj_u/Ieee/number.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_EXPORTED_DECL obj_t bgl_inexact_to_exact(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_negativezf3zf3zz__r4_numbers_6_5z00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_complexzf3zf3zz__r4_numbers_6_5z00(obj_t);
	static obj_t BGl_z62logz62zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL double BGl_sinz00zz__r4_numbers_6_5z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_2minz00zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_z62flonumzd2ze3elongz53zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL double BGl_acosz00zz__r4_numbers_6_5z00(obj_t);
	static obj_t BGl_z62llongzd2ze3flonumz53zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_flonumzd2ze3bignumz31zz__r4_numbers_6_5z00(double);
	static obj_t BGl_z62uint64zd2ze3flonumz53zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_zc3zd3z10zz__r4_numbers_6_5z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL int64_t
		BGl_flonumzd2ze3int64z31zz__r4_numbers_6_5z00(double);
	BGL_EXPORTED_DECL bool_t BGl_rationalzf3zf3zz__r4_numbers_6_5z00(obj_t);
	extern obj_t BGl_elongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long,
		obj_t);
	static obj_t BGl_z62int64zd2ze3flonumz53zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern long BGl_exptfxz00zz__r4_numbers_6_5_fixnumz00(long, long);
	static obj_t BGl_requirezd2initializa7ationz75zz__r4_numbers_6_5z00 = BUNSPEC;
	static obj_t BGl_z62tanz62zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_bignumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(obj_t,
		long);
	BGL_EXPORTED_DECL bool_t BGl_inexactzf3zf3zz__r4_numbers_6_5z00(obj_t);
	BGL_EXPORTED_DECL double
		BGl_int32zd2ze3flonumz31zz__r4_numbers_6_5z00(int32_t);
	extern obj_t bgl_bignum_neg(obj_t);
	static obj_t BGl_z62flonumzd2ze3int32z53zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_z62positivezf3z91zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62fixnumzd2ze3flonumz53zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_z62flonumzd2ze3fixnumz53zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_truncatez00zz__r4_numbers_6_5z00(obj_t);
	static obj_t BGl_z62atanz62zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_EXPORTED_DECL double BGl_expz00zz__r4_numbers_6_5z00(obj_t);
	static obj_t BGl_z62bignumzd2ze3flonumz53zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_z62roundz62zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_ze3zd3z30zz__r4_numbers_6_5z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3zd3z72zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_minz00zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t bgl_bignum_div(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_numberzf3zf3zz__r4_numbers_6_5z00(obj_t);
	static obj_t BGl_z62maxz62zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
	static obj_t BGl_z622zc3zd3z72zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62numberzf3z91zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__r4_numbers_6_5z00();
	BGL_EXPORTED_DECL obj_t BGl_absz00zz__r4_numbers_6_5z00(obj_t);
	extern obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long,
		long);
	BGL_EXPORTED_DECL obj_t BGl_ceilingz00zz__r4_numbers_6_5z00(obj_t);
	BGL_EXPORTED_DECL double BGl_atanz00zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_z62ceilingz62zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t
		BGl_stringzd2ze3integerzd2objze3zz__r4_numbers_6_5_fixnumz00(obj_t, long);
	static obj_t BGl_z62sqrtz62zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	static double BGl_za2minintflza2z00zz__r4_numbers_6_5z00;
	extern double BGl_roundflz00zz__r4_numbers_6_5_flonumz00(double);
	static obj_t BGl_cnstzd2initzd2zz__r4_numbers_6_5z00();
	static obj_t BGl_z62ze3zd3z52zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62flonumzd2ze3int64z53zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_z62complexzf3z91zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL double BGl_cosz00zz__r4_numbers_6_5z00(obj_t);
	extern obj_t
		BGl_llongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T, obj_t);
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
	BGL_EXPORTED_DECL double
		BGl_uint64zd2ze3flonumz31zz__r4_numbers_6_5z00(uint64_t);
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
	BGL_EXPORTED_DECL BGL_LONGLONG_T
		BGl_flonumzd2ze3llongz31zz__r4_numbers_6_5z00(double);
	static obj_t BGl_z622zb2zd0zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
	static obj_t BGl_z622zd2zb0zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
	static obj_t BGl_z622zf2z90zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL double
		BGl_bignumzd2ze3flonumz31zz__r4_numbers_6_5z00(obj_t);
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
	BGL_EXPORTED_DECL obj_t BGl_maxz00zz__r4_numbers_6_5z00(obj_t, obj_t);
	static bool_t BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(obj_t);
	static obj_t BGl_z62minz62zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_2zc3zd3z10zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL double
		BGl_uint32zd2ze3flonumz31zz__r4_numbers_6_5z00(uint32_t);
	BGL_EXPORTED_DECL uint32_t
		BGl_flonumzd2ze3uint32z31zz__r4_numbers_6_5z00(double);
	BGL_EXPORTED_DECL long BGl_flonumzd2ze3elongz31zz__r4_numbers_6_5z00(double);
	static obj_t BGl_z62absz62zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_z62elongzd2ze3flonumz53zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL double
		BGl_llongzd2ze3flonumz31zz__r4_numbers_6_5z00(BGL_LONGLONG_T);
	extern obj_t bgl_uint64_to_bignum(uint64_t);
	static obj_t BGl_z62flonumzd2ze3llongz53zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t bgl_bignum_sub(obj_t, obj_t);
	static obj_t BGl_symbol4877z00zz__r4_numbers_6_5z00 = BUNSPEC;
	extern obj_t bgl_bignum_abs(obj_t);
	BGL_EXPORTED_DECL double
		BGl_int64zd2ze3flonumz31zz__r4_numbers_6_5z00(int64_t);
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
	BGL_EXPORTED_DECL int32_t
		BGl_flonumzd2ze3int32z31zz__r4_numbers_6_5z00(double);
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
	BGL_EXPORTED_DECL uint64_t
		BGl_flonumzd2ze3uint64z31zz__r4_numbers_6_5z00(double);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_ceilingzd2envzd2zz__r4_numbers_6_5z00,
		BgL_bgl_za762ceilingza762za7za7_4890z00,
		BGl_z62ceilingz62zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bignumzd2ze3flonumzd2envze3zz__r4_numbers_6_5z00,
		BgL_bgl_za762bignumza7d2za7e3f4891za7,
		BGl_z62bignumzd2ze3flonumz53zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_int64zd2ze3flonumzd2envze3zz__r4_numbers_6_5z00,
		BgL_bgl_za762int64za7d2za7e3fl4892za7,
		BGl_z62int64zd2ze3flonumz53zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_zd2zd2envz00zz__r4_numbers_6_5z00,
		BgL_bgl_za762za7d2za7b0za7za7__r4_4893za7, va_generic_entry,
		BGl_z62zd2zb0zz__r4_numbers_6_5z00, BUNSPEC, -2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_2ze3zd3zd2envze2zz__r4_numbers_6_5z00,
		BgL_bgl_za7622za7e3za7d3za752za7za7_4894z00,
		BGl_z622ze3zd3z52zz__r4_numbers_6_5z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_int32zd2ze3flonumzd2envze3zz__r4_numbers_6_5z00,
		BgL_bgl_za762int32za7d2za7e3fl4895za7,
		BGl_z62int32zd2ze3flonumz53zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_zd3zd2envz01zz__r4_numbers_6_5z00,
		BgL_bgl_za762za7d3za7b1za7za7__r4_4896za7, va_generic_entry,
		BGl_z62zd3zb1zz__r4_numbers_6_5z00, BUNSPEC, -3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_2zd2zd2envz00zz__r4_numbers_6_5z00,
		BgL_bgl_za7622za7d2za7b0za7za7__r44897za7,
		BGl_z622zd2zb0zz__r4_numbers_6_5z00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_floorzd2envzd2zz__r4_numbers_6_5z00,
		BgL_bgl_za762floorza762za7za7__r4898z00,
		BGl_z62floorz62zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_2zd3zd2envz01zz__r4_numbers_6_5z00,
		BgL_bgl_za7622za7d3za7b1za7za7__r44899za7,
		BGl_z622zd3zb1zz__r4_numbers_6_5z00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_minzd2envzd2zz__r4_numbers_6_5z00,
		BgL_bgl_za762minza762za7za7__r4_4900z00, va_generic_entry,
		BGl_z62minz62zz__r4_numbers_6_5z00, BUNSPEC, -2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_maxzd2envzd2zz__r4_numbers_6_5z00,
		BgL_bgl_za762maxza762za7za7__r4_4901z00, va_generic_entry,
		BGl_z62maxz62zz__r4_numbers_6_5z00, BUNSPEC, -2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_numberzf3zd2envz21zz__r4_numbers_6_5z00,
		BgL_bgl_za762numberza7f3za791za74902z00,
		BGl_z62numberzf3z91zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string4817z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4817za700za7za7_4903za7, "/tmp/4.4a/runtime/Ieee/number.scm",
		33);
	      DEFINE_STRING(BGl_string4818z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4818za700za7za7_4904za7, "&flonum->fixnum", 15);
	      DEFINE_STRING(BGl_string4819z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4819za700za7za7_4905za7, "real", 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fixnumzd2ze3flonumzd2envze3zz__r4_numbers_6_5z00,
		BgL_bgl_za762fixnumza7d2za7e3f4906za7,
		BGl_z62fixnumzd2ze3flonumz53zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_flonumzd2ze3fixnumzd2envze3zz__r4_numbers_6_5z00,
		BgL_bgl_za762flonumza7d2za7e3f4907za7,
		BGl_z62flonumzd2ze3fixnumz53zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_atanzd2envzd2zz__r4_numbers_6_5z00,
		BgL_bgl_za762atanza762za7za7__r44908z00, va_generic_entry,
		BGl_z62atanz62zz__r4_numbers_6_5z00, BUNSPEC, -2);
	      DEFINE_STRING(BGl_string4820z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4820za700za7za7_4909za7, "&fixnum->flonum", 15);
	      DEFINE_STRING(BGl_string4821z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4821za700za7za7_4910za7, "bint", 4);
	      DEFINE_STRING(BGl_string4822z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4822za700za7za7_4911za7, "&flonum->elong", 14);
	      DEFINE_STRING(BGl_string4823z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4823za700za7za7_4912za7, "&elong->flonum", 14);
	      DEFINE_STRING(BGl_string4824z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4824za700za7za7_4913za7, "belong", 6);
	      DEFINE_STRING(BGl_string4825z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4825za700za7za7_4914za7, "&flonum->llong", 14);
	      DEFINE_STRING(BGl_string4826z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4826za700za7za7_4915za7, "&llong->flonum", 14);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_zc3zd3zd2envzc2zz__r4_numbers_6_5z00,
		BgL_bgl_za762za7c3za7d3za772za7za7__4916z00, va_generic_entry,
		BGl_z62zc3zd3z72zz__r4_numbers_6_5z00, BUNSPEC, -3);
	      DEFINE_STRING(BGl_string4827z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4827za700za7za7_4917za7, "bllong", 6);
	      DEFINE_STRING(BGl_string4828z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4828za700za7za7_4918za7, "&flonum->bignum", 15);
	      DEFINE_STRING(BGl_string4829z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4829za700za7za7_4919za7, "&bignum->flonum", 15);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_flonumzd2ze3int64zd2envze3zz__r4_numbers_6_5z00,
		BgL_bgl_za762flonumza7d2za7e3i4920za7,
		BGl_z62flonumzd2ze3int64z53zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rationalzf3zd2envz21zz__r4_numbers_6_5z00,
		BgL_bgl_za762rationalza7f3za794921za7,
		BGl_z62rationalzf3z91zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_tanzd2envzd2zz__r4_numbers_6_5z00,
		BgL_bgl_za762tanza762za7za7__r4_4922z00, BGl_z62tanz62zz__r4_numbers_6_5z00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_za2zd2envz70zz__r4_numbers_6_5z00,
		BgL_bgl_za762za7a2za7c0za7za7__r4_4923za7, va_generic_entry,
		BGl_z62za2zc0zz__r4_numbers_6_5z00, BUNSPEC, -1);
	      DEFINE_STRING(BGl_string4830z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4830za700za7za7_4924za7, "bignum", 6);
	      DEFINE_STRING(BGl_string4831z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4831za700za7za7_4925za7, "&flonum->int32", 14);
	      DEFINE_STRING(BGl_string4832z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4832za700za7za7_4926za7, "&int32->flonum", 14);
	      DEFINE_STRING(BGl_string4833z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4833za700za7za7_4927za7, "bint32", 6);
	      DEFINE_STRING(BGl_string4834z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4834za700za7za7_4928za7, "&flonum->uint32", 15);
	      DEFINE_STRING(BGl_string4835z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4835za700za7za7_4929za7, "&uint32->flonum", 15);
	      DEFINE_STRING(BGl_string4836z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4836za700za7za7_4930za7, "buint32", 7);
	      DEFINE_STRING(BGl_string4837z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4837za700za7za7_4931za7, "&flonum->int64", 14);
	      DEFINE_STRING(BGl_string4838z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4838za700za7za7_4932za7, "&int64->flonum", 14);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_2za2zd2envz70zz__r4_numbers_6_5z00,
		BgL_bgl_za7622za7a2za7c0za7za7__r44933za7,
		BGl_z622za2zc0zz__r4_numbers_6_5z00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string4839z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4839za700za7za7_4934za7, "bint64", 6);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ze3zd2envz31zz__r4_numbers_6_5z00,
		BgL_bgl_za762za7e3za781za7za7__r4_4935za7, va_generic_entry,
		BGl_z62ze3z81zz__r4_numbers_6_5z00, BUNSPEC, -3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_za7erozf3zd2envz86zz__r4_numbers_6_5z00,
		BgL_bgl_za762za7a7eroza7f3za736za74936za7,
		BGl_z62za7erozf3z36zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_asinzd2envzd2zz__r4_numbers_6_5z00,
		BgL_bgl_za762asinza762za7za7__r44937z00,
		BGl_z62asinz62zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_expzd2envzd2zz__r4_numbers_6_5z00,
		BgL_bgl_za762expza762za7za7__r4_4938z00, BGl_z62expz62zz__r4_numbers_6_5z00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_2ze3zd2envz31zz__r4_numbers_6_5z00,
		BgL_bgl_za7622za7e3za781za7za7__r44939za7,
		BGl_z622ze3z81zz__r4_numbers_6_5z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_flonumzd2ze3uint64zd2envze3zz__r4_numbers_6_5z00,
		BgL_bgl_za762flonumza7d2za7e3u4940za7,
		BGl_z62flonumzd2ze3uint64z53zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string4840z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4840za700za7za7_4941za7, "&flonum->uint64", 15);
	      DEFINE_STRING(BGl_string4841z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4841za700za7za7_4942za7, "&uint64->flonum", 15);
	      DEFINE_STRING(BGl_string4842z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4842za700za7za7_4943za7, "buint64", 7);
	      DEFINE_STRING(BGl_string4843z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4843za700za7za7_4944za7, "=", 1);
	      DEFINE_STRING(BGl_string4844z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4844za700za7za7_4945za7, "not a number", 12);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_negativezf3zd2envz21zz__r4_numbers_6_5z00,
		BgL_bgl_za762negativeza7f3za794946za7,
		BGl_z62negativezf3z91zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string4845z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4845za700za7za7_4947za7, "not a number5", 13);
	      DEFINE_STRING(BGl_string4846z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4846za700za7za7_4948za7, "<", 1);
	      DEFINE_STRING(BGl_string4847z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4847za700za7za7_4949za7, ">", 1);
	      DEFINE_STRING(BGl_string4848z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4848za700za7za7_4950za7, "<=", 2);
	      DEFINE_STRING(BGl_string4849z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4849za700za7za7_4951za7, ">=", 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sinzd2envzd2zz__r4_numbers_6_5z00,
		BgL_bgl_za762sinza762za7za7__r4_4952z00, BGl_z62sinz62zz__r4_numbers_6_5z00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_2zc3zd3zd2envzc2zz__r4_numbers_6_5z00,
		BgL_bgl_za7622za7c3za7d3za772za7za7_4953z00,
		BGl_z622zc3zd3z72zz__r4_numbers_6_5z00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string4850z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4850za700za7za7_4954za7, "zero", 4);
	      DEFINE_STRING(BGl_string4851z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4851za700za7za7_4955za7, "positive", 8);
	      DEFINE_STRING(BGl_string4852z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4852za700za7za7_4956za7, "negative", 8);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_2minzd2envzd2zz__r4_numbers_6_5z00,
		BgL_bgl_za7622minza762za7za7__r44957z00,
		BGl_z622minz62zz__r4_numbers_6_5z00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string4853z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4853za700za7za7_4958za7, "2max", 4);
	      DEFINE_STRING(BGl_string4854z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4854za700za7za7_4959za7, "2min", 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_2maxzd2envzd2zz__r4_numbers_6_5z00,
		BgL_bgl_za7622maxza762za7za7__r44960z00,
		BGl_z622maxz62zz__r4_numbers_6_5z00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string4855z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4855za700za7za7_4961za7, "+", 1);
	      DEFINE_STRING(BGl_string4856z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4856za700za7za7_4962za7, "*", 1);
	      DEFINE_STRING(BGl_string4857z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4857za700za7za7_4963za7, "-", 1);
	      DEFINE_STRING(BGl_string4858z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4858za700za7za7_4964za7, "/", 1);
	      DEFINE_STRING(BGl_string4859z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4859za700za7za7_4965za7, "abs", 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_flonumzd2ze3llongzd2envze3zz__r4_numbers_6_5z00,
		BgL_bgl_za762flonumza7d2za7e3l4966za7,
		BGl_z62flonumzd2ze3llongz53zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	      DEFINE_REAL(BGl_real4873z00zz__r4_numbers_6_5z00,
		BgL_bgl_real4873za700za7za7__r4967za7, 1.0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_acoszd2envzd2zz__r4_numbers_6_5z00,
		BgL_bgl_za762acosza762za7za7__r44968z00,
		BGl_z62acosz62zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_flonumzd2ze3bignumzd2envze3zz__r4_numbers_6_5z00,
		BgL_bgl_za762flonumza7d2za7e3b4969za7,
		BGl_z62flonumzd2ze3bignumz53zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string4860z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4860za700za7za7_4970za7, "floor", 5);
	      DEFINE_STRING(BGl_string4861z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4861za700za7za7_4971za7, "ceiling", 7);
	      DEFINE_STRING(BGl_string4862z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4862za700za7za7_4972za7, "truncate", 8);
	      DEFINE_STRING(BGl_string4863z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4863za700za7za7_4973za7, "round", 5);
	      DEFINE_STRING(BGl_string4864z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4864za700za7za7_4974za7, "exp", 3);
	      DEFINE_STRING(BGl_string4865z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4865za700za7za7_4975za7, "log", 3);
	      DEFINE_STRING(BGl_string4866z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4866za700za7za7_4976za7, "sin", 3);
	      DEFINE_STRING(BGl_string4867z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4867za700za7za7_4977za7, "cos", 3);
	      DEFINE_STRING(BGl_string4868z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4868za700za7za7_4978za7, "tan", 3);
	      DEFINE_STRING(BGl_string4869z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4869za700za7za7_4979za7, "asin", 4);
#define BGl_real4882z00zz__r4_numbers_6_5z00 bigloo_nan
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_coszd2envzd2zz__r4_numbers_6_5z00,
		BgL_bgl_za762cosza762za7za7__r4_4980z00, BGl_z62cosz62zz__r4_numbers_6_5z00,
		0L, BUNSPEC, 1);
#define BGl_real4884z00zz__r4_numbers_6_5z00 bigloo_infinity
#define BGl_real4886z00zz__r4_numbers_6_5z00 bigloo_minfinity
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_zb2zd2envz60zz__r4_numbers_6_5z00,
		BgL_bgl_za762za7b2za7d0za7za7__r4_4981za7, va_generic_entry,
		BGl_z62zb2zd0zz__r4_numbers_6_5z00, BUNSPEC, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_zf2zd2envz20zz__r4_numbers_6_5z00,
		BgL_bgl_za762za7f2za790za7za7__r4_4982za7, va_generic_entry,
		BGl_z62zf2z90zz__r4_numbers_6_5z00, BUNSPEC, -2);
	      DEFINE_STRING(BGl_string4870z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4870za700za7za7_4983za7, "acos", 4);
	      DEFINE_STRING(BGl_string4871z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4871za700za7za7_4984za7, "atan", 4);
	      DEFINE_STRING(BGl_string4872z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4872za700za7za7_4985za7, "sqrt", 4);
	      DEFINE_STRING(BGl_string4874z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4874za700za7za7_4986za7, "expt", 4);
	      DEFINE_STRING(BGl_string4875z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4875za700za7za7_4987za7, "number->string", 14);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_2zb2zd2envz60zz__r4_numbers_6_5z00,
		BgL_bgl_za7622za7b2za7d0za7za7__r44988za7,
		BGl_z622zb2zd0zz__r4_numbers_6_5z00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string4876z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4876za700za7za7_4989za7, "Argument not a number", 21);
	      DEFINE_STRING(BGl_string4878z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4878za700za7za7_4990za7, "Illegal radix", 13);
	      DEFINE_STRING(BGl_string4879z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4879za700za7za7_4991za7, "_string->number", 15);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_2zf2zd2envz20zz__r4_numbers_6_5z00,
		BgL_bgl_za7622za7f2za790za7za7__r44992za7,
		BGl_z622zf2z90zz__r4_numbers_6_5z00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_truncatezd2envzd2zz__r4_numbers_6_5z00,
		BgL_bgl_za762truncateza762za7za74993z00,
		BGl_z62truncatez62zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string4880z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4880za700za7za7_4994za7, "bstring", 7);
	      DEFINE_STRING(BGl_string4881z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4881za700za7za7_4995za7, "+nan.0", 6);
	      DEFINE_STRING(BGl_string4883z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4883za700za7za7_4996za7, "+inf.0", 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_complexzf3zd2envz21zz__r4_numbers_6_5z00,
		BgL_bgl_za762complexza7f3za7914997za7,
		BGl_z62complexzf3z91zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string4885z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4885za700za7za7_4998za7, "-inf.0", 6);
	      DEFINE_STRING(BGl_string4887z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4887za700za7za7_4999za7, "string->number", 14);
	      DEFINE_STRING(BGl_string4888z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4888za700za7za7_5000za7,
		"Only radix `10' is legal for floating point number", 50);
	      DEFINE_STRING(BGl_string4889z00zz__r4_numbers_6_5z00,
		BgL_bgl_string4889za700za7za7_5001za7, "__r4_numbers_6_5", 16);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2ze3numberzd2envze3zz__r4_numbers_6_5z00,
		BgL_bgl__stringza7d2za7e3num5002z00, opt_generic_entry,
		BGl__stringzd2ze3numberz31zz__r4_numbers_6_5z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_numberzd2ze3stringzd2envze3zz__r4_numbers_6_5z00,
		BgL_bgl__numberza7d2za7e3str5003z00, opt_generic_entry,
		BGl__numberzd2ze3stringz31zz__r4_numbers_6_5z00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_abszd2envzd2zz__r4_numbers_6_5z00,
		BgL_bgl_za762absza762za7za7__r4_5004z00, BGl_z62absz62zz__r4_numbers_6_5z00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_elongzd2ze3flonumzd2envze3zz__r4_numbers_6_5z00,
		BgL_bgl_za762elongza7d2za7e3fl5005za7,
		BGl_z62elongzd2ze3flonumz53zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_exptzd2envzd2zz__r4_numbers_6_5z00,
		BgL_bgl_za762exptza762za7za7__r45006z00,
		BGl_z62exptz62zz__r4_numbers_6_5z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_llongzd2ze3flonumzd2envze3zz__r4_numbers_6_5z00,
		BgL_bgl_za762llongza7d2za7e3fl5007za7,
		BGl_z62llongzd2ze3flonumz53zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_inexactzf3zd2envz21zz__r4_numbers_6_5z00,
		BgL_bgl_za762inexactza7f3za7915008za7,
		BGl_z62inexactzf3z91zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_flonumzd2ze3int32zd2envze3zz__r4_numbers_6_5z00,
		BgL_bgl_za762flonumza7d2za7e3i5009za7,
		BGl_z62flonumzd2ze3int32z53zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_exactzd2ze3inexactzd2envze3zz__r4_numbers_6_5z00,
		BgL_bgl_za762exactza7d2za7e3in5010za7,
		BGl_z62exactzd2ze3inexactz53zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_exactzf3zd2envz21zz__r4_numbers_6_5z00,
		BgL_bgl_za762exactza7f3za791za7za75011za7,
		BGl_z62exactzf3z91zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_positivezf3zd2envz21zz__r4_numbers_6_5z00,
		BgL_bgl_za762positiveza7f3za795012za7,
		BGl_z62positivezf3z91zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_zc3zd2envz11zz__r4_numbers_6_5z00,
		BgL_bgl_za762za7c3za7a1za7za7__r4_5013za7, va_generic_entry,
		BGl_z62zc3za1zz__r4_numbers_6_5z00, BUNSPEC, -3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_roundzd2envzd2zz__r4_numbers_6_5z00,
		BgL_bgl_za762roundza762za7za7__r5014z00,
		BGl_z62roundz62zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sqrtzd2envzd2zz__r4_numbers_6_5z00,
		BgL_bgl_za762sqrtza762za7za7__r45015z00,
		BGl_z62sqrtz62zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_2zc3zd2envz11zz__r4_numbers_6_5z00,
		BgL_bgl_za7622za7c3za7a1za7za7__r45016za7,
		BGl_z622zc3za1zz__r4_numbers_6_5z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_uint64zd2ze3flonumzd2envze3zz__r4_numbers_6_5z00,
		BgL_bgl_za762uint64za7d2za7e3f5017za7,
		BGl_z62uint64zd2ze3flonumz53zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inexactzd2ze3exactzd2envze3zz__r4_numbers_6_5z00,
		BgL_bgl_za762inexactza7d2za7e35018za7,
		BGl_z62inexactzd2ze3exactz53zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ze3zd3zd2envze2zz__r4_numbers_6_5z00,
		BgL_bgl_za762za7e3za7d3za752za7za7__5019z00, va_generic_entry,
		BGl_z62ze3zd3z52zz__r4_numbers_6_5z00, BUNSPEC, -3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_logzd2envzd2zz__r4_numbers_6_5z00,
		BgL_bgl_za762logza762za7za7__r4_5020z00, BGl_z62logz62zz__r4_numbers_6_5z00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_uint32zd2ze3flonumzd2envze3zz__r4_numbers_6_5z00,
		BgL_bgl_za762uint32za7d2za7e3f5021za7,
		BGl_z62uint32zd2ze3flonumz53zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_flonumzd2ze3uint32zd2envze3zz__r4_numbers_6_5z00,
		BgL_bgl_za762flonumza7d2za7e3u5022za7,
		BGl_z62flonumzd2ze3uint32z53zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_flonumzd2ze3elongzd2envze3zz__r4_numbers_6_5z00,
		BgL_bgl_za762flonumza7d2za7e3e5023za7,
		BGl_z62flonumzd2ze3elongz53zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zz__r4_numbers_6_5z00));
		     ADD_ROOT((void *) (&BGl_symbol4877z00zz__r4_numbers_6_5z00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long
		BgL_checksumz00_6679, char *BgL_fromz00_6680)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__r4_numbers_6_5z00))
				{
					BGl_requirezd2initializa7ationz75zz__r4_numbers_6_5z00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__r4_numbers_6_5z00();
					BGl_cnstzd2initzd2zz__r4_numbers_6_5z00();
					BGl_importedzd2moduleszd2initz00zz__r4_numbers_6_5z00();
					return BGl_toplevelzd2initzd2zz__r4_numbers_6_5z00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__r4_numbers_6_5z00()
	{
		{	/* Ieee/number.scm 18 */
			return (BGl_symbol4877z00zz__r4_numbers_6_5z00 =
				bstring_to_symbol(BGl_string4875z00zz__r4_numbers_6_5z00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__r4_numbers_6_5z00()
	{
		{	/* Ieee/number.scm 18 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__r4_numbers_6_5z00()
	{
		{	/* Ieee/number.scm 18 */
			BGl_za2maxintflza2z00zz__r4_numbers_6_5z00 = (double) (BGL_LONG_MAX);
			return (BGl_za2minintflza2z00zz__r4_numbers_6_5z00 =
				(double) (BGL_LONG_MIN), BUNSPEC);
		}

	}



/* number? */
	BGL_EXPORTED_DEF bool_t BGl_numberzf3zf3zz__r4_numbers_6_5z00(obj_t
		BgL_objz00_3)
	{
		{	/* Ieee/number.scm 231 */
			{	/* Ieee/number.scm 232 */
				bool_t BgL__ortest_1012z00_847;

				BgL__ortest_1012z00_847 = INTEGERP(BgL_objz00_3);
				if (BgL__ortest_1012z00_847)
					{	/* Ieee/number.scm 232 */
						return BgL__ortest_1012z00_847;
					}
				else
					{	/* Ieee/number.scm 233 */
						bool_t BgL__ortest_1013z00_848;

						BgL__ortest_1013z00_848 = REALP(BgL_objz00_3);
						if (BgL__ortest_1013z00_848)
							{	/* Ieee/number.scm 233 */
								return BgL__ortest_1013z00_848;
							}
						else
							{	/* Ieee/number.scm 234 */
								bool_t BgL__ortest_1014z00_849;

								BgL__ortest_1014z00_849 = ELONGP(BgL_objz00_3);
								if (BgL__ortest_1014z00_849)
									{	/* Ieee/number.scm 234 */
										return BgL__ortest_1014z00_849;
									}
								else
									{	/* Ieee/number.scm 235 */
										bool_t BgL__ortest_1015z00_850;

										BgL__ortest_1015z00_850 = LLONGP(BgL_objz00_3);
										if (BgL__ortest_1015z00_850)
											{	/* Ieee/number.scm 235 */
												return BgL__ortest_1015z00_850;
											}
										else
											{	/* Ieee/number.scm 236 */
												bool_t BgL__ortest_1016z00_851;

												BgL__ortest_1016z00_851 = BGL_INT8P(BgL_objz00_3);
												if (BgL__ortest_1016z00_851)
													{	/* Ieee/number.scm 236 */
														return BgL__ortest_1016z00_851;
													}
												else
													{	/* Ieee/number.scm 237 */
														bool_t BgL__ortest_1017z00_852;

														BgL__ortest_1017z00_852 = BGL_UINT8P(BgL_objz00_3);
														if (BgL__ortest_1017z00_852)
															{	/* Ieee/number.scm 237 */
																return BgL__ortest_1017z00_852;
															}
														else
															{	/* Ieee/number.scm 238 */
																bool_t BgL__ortest_1018z00_853;

																BgL__ortest_1018z00_853 =
																	BGL_INT16P(BgL_objz00_3);
																if (BgL__ortest_1018z00_853)
																	{	/* Ieee/number.scm 238 */
																		return BgL__ortest_1018z00_853;
																	}
																else
																	{	/* Ieee/number.scm 239 */
																		bool_t BgL__ortest_1019z00_854;

																		BgL__ortest_1019z00_854 =
																			BGL_UINT16P(BgL_objz00_3);
																		if (BgL__ortest_1019z00_854)
																			{	/* Ieee/number.scm 239 */
																				return BgL__ortest_1019z00_854;
																			}
																		else
																			{	/* Ieee/number.scm 240 */
																				bool_t BgL__ortest_1020z00_855;

																				BgL__ortest_1020z00_855 =
																					BGL_INT32P(BgL_objz00_3);
																				if (BgL__ortest_1020z00_855)
																					{	/* Ieee/number.scm 240 */
																						return BgL__ortest_1020z00_855;
																					}
																				else
																					{	/* Ieee/number.scm 241 */
																						bool_t BgL__ortest_1021z00_856;

																						BgL__ortest_1021z00_856 =
																							BGL_UINT32P(BgL_objz00_3);
																						if (BgL__ortest_1021z00_856)
																							{	/* Ieee/number.scm 241 */
																								return BgL__ortest_1021z00_856;
																							}
																						else
																							{	/* Ieee/number.scm 242 */
																								bool_t BgL__ortest_1022z00_857;

																								BgL__ortest_1022z00_857 =
																									BGL_INT64P(BgL_objz00_3);
																								if (BgL__ortest_1022z00_857)
																									{	/* Ieee/number.scm 242 */
																										return
																											BgL__ortest_1022z00_857;
																									}
																								else
																									{	/* Ieee/number.scm 243 */
																										bool_t
																											BgL__ortest_1023z00_858;
																										BgL__ortest_1023z00_858 =
																											BGL_UINT64P(BgL_objz00_3);
																										if (BgL__ortest_1023z00_858)
																											{	/* Ieee/number.scm 243 */
																												return
																													BgL__ortest_1023z00_858;
																											}
																										else
																											{	/* Ieee/number.scm 243 */
																												return
																													BIGNUMP(BgL_objz00_3);
																											}
																									}
																							}
																					}
																			}
																	}
															}
													}
											}
									}
							}
					}
			}
		}

	}



/* &number? */
	obj_t BGl_z62numberzf3z91zz__r4_numbers_6_5z00(obj_t BgL_envz00_6479,
		obj_t BgL_objz00_6480)
	{
		{	/* Ieee/number.scm 231 */
			return BBOOL(BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_objz00_6480));
		}

	}



/* exact? */
	BGL_EXPORTED_DEF bool_t BGl_exactzf3zf3zz__r4_numbers_6_5z00(obj_t
		BgL_za7za7_4)
	{
		{	/* Ieee/number.scm 249 */
			{	/* Ieee/number.scm 250 */
				bool_t BgL__ortest_1024z00_6668;

				BgL__ortest_1024z00_6668 = INTEGERP(BgL_za7za7_4);
				if (BgL__ortest_1024z00_6668)
					{	/* Ieee/number.scm 250 */
						return BgL__ortest_1024z00_6668;
					}
				else
					{	/* Ieee/number.scm 251 */
						bool_t BgL__ortest_1025z00_6669;

						BgL__ortest_1025z00_6669 = ELONGP(BgL_za7za7_4);
						if (BgL__ortest_1025z00_6669)
							{	/* Ieee/number.scm 251 */
								return BgL__ortest_1025z00_6669;
							}
						else
							{	/* Ieee/number.scm 252 */
								bool_t BgL__ortest_1026z00_6670;

								BgL__ortest_1026z00_6670 = LLONGP(BgL_za7za7_4);
								if (BgL__ortest_1026z00_6670)
									{	/* Ieee/number.scm 252 */
										return BgL__ortest_1026z00_6670;
									}
								else
									{	/* Ieee/number.scm 253 */
										bool_t BgL__ortest_1027z00_6671;

										BgL__ortest_1027z00_6671 = BGL_INT8P(BgL_za7za7_4);
										if (BgL__ortest_1027z00_6671)
											{	/* Ieee/number.scm 253 */
												return BgL__ortest_1027z00_6671;
											}
										else
											{	/* Ieee/number.scm 254 */
												bool_t BgL__ortest_1028z00_6672;

												BgL__ortest_1028z00_6672 = BGL_UINT8P(BgL_za7za7_4);
												if (BgL__ortest_1028z00_6672)
													{	/* Ieee/number.scm 254 */
														return BgL__ortest_1028z00_6672;
													}
												else
													{	/* Ieee/number.scm 255 */
														bool_t BgL__ortest_1029z00_6673;

														BgL__ortest_1029z00_6673 = BGL_INT16P(BgL_za7za7_4);
														if (BgL__ortest_1029z00_6673)
															{	/* Ieee/number.scm 255 */
																return BgL__ortest_1029z00_6673;
															}
														else
															{	/* Ieee/number.scm 256 */
																bool_t BgL__ortest_1030z00_6674;

																BgL__ortest_1030z00_6674 =
																	BGL_UINT16P(BgL_za7za7_4);
																if (BgL__ortest_1030z00_6674)
																	{	/* Ieee/number.scm 256 */
																		return BgL__ortest_1030z00_6674;
																	}
																else
																	{	/* Ieee/number.scm 257 */
																		bool_t BgL__ortest_1031z00_6675;

																		BgL__ortest_1031z00_6675 =
																			BGL_INT32P(BgL_za7za7_4);
																		if (BgL__ortest_1031z00_6675)
																			{	/* Ieee/number.scm 257 */
																				return BgL__ortest_1031z00_6675;
																			}
																		else
																			{	/* Ieee/number.scm 258 */
																				bool_t BgL__ortest_1032z00_6676;

																				BgL__ortest_1032z00_6676 =
																					BGL_UINT32P(BgL_za7za7_4);
																				if (BgL__ortest_1032z00_6676)
																					{	/* Ieee/number.scm 258 */
																						return BgL__ortest_1032z00_6676;
																					}
																				else
																					{	/* Ieee/number.scm 259 */
																						bool_t BgL__ortest_1033z00_6677;

																						BgL__ortest_1033z00_6677 =
																							BGL_INT64P(BgL_za7za7_4);
																						if (BgL__ortest_1033z00_6677)
																							{	/* Ieee/number.scm 259 */
																								return BgL__ortest_1033z00_6677;
																							}
																						else
																							{	/* Ieee/number.scm 260 */
																								bool_t BgL__ortest_1034z00_6678;

																								BgL__ortest_1034z00_6678 =
																									BGL_UINT64P(BgL_za7za7_4);
																								if (BgL__ortest_1034z00_6678)
																									{	/* Ieee/number.scm 260 */
																										return
																											BgL__ortest_1034z00_6678;
																									}
																								else
																									{	/* Ieee/number.scm 260 */
																										return
																											BIGNUMP(BgL_za7za7_4);
																									}
																							}
																					}
																			}
																	}
															}
													}
											}
									}
							}
					}
			}
		}

	}



/* &exact? */
	obj_t BGl_z62exactzf3z91zz__r4_numbers_6_5z00(obj_t BgL_envz00_6481,
		obj_t BgL_za7za7_6482)
	{
		{	/* Ieee/number.scm 249 */
			return BBOOL(BGl_exactzf3zf3zz__r4_numbers_6_5z00(BgL_za7za7_6482));
		}

	}



/* inexact? */
	BGL_EXPORTED_DEF bool_t BGl_inexactzf3zf3zz__r4_numbers_6_5z00(obj_t
		BgL_za7za7_5)
	{
		{	/* Ieee/number.scm 266 */
			return REALP(BgL_za7za7_5);
		}

	}



/* &inexact? */
	obj_t BGl_z62inexactzf3z91zz__r4_numbers_6_5z00(obj_t BgL_envz00_6483,
		obj_t BgL_za7za7_6484)
	{
		{	/* Ieee/number.scm 266 */
			return BBOOL(BGl_inexactzf3zf3zz__r4_numbers_6_5z00(BgL_za7za7_6484));
		}

	}



/* complex? */
	BGL_EXPORTED_DEF bool_t BGl_complexzf3zf3zz__r4_numbers_6_5z00(obj_t
		BgL_xz00_6)
	{
		{	/* Ieee/number.scm 272 */
			return BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_xz00_6);
		}

	}



/* &complex? */
	obj_t BGl_z62complexzf3z91zz__r4_numbers_6_5z00(obj_t BgL_envz00_6485,
		obj_t BgL_xz00_6486)
	{
		{	/* Ieee/number.scm 272 */
			return BBOOL(BGl_complexzf3zf3zz__r4_numbers_6_5z00(BgL_xz00_6486));
		}

	}



/* rational? */
	BGL_EXPORTED_DEF bool_t BGl_rationalzf3zf3zz__r4_numbers_6_5z00(obj_t
		BgL_xz00_7)
	{
		{	/* Ieee/number.scm 278 */
			if (INTEGERP(BgL_xz00_7))
				{	/* Ieee/number.scm 279 */
					return ((bool_t) 1);
				}
			else
				{	/* Ieee/number.scm 279 */
					return REALP(BgL_xz00_7);
				}
		}

	}



/* &rational? */
	obj_t BGl_z62rationalzf3z91zz__r4_numbers_6_5z00(obj_t BgL_envz00_6487,
		obj_t BgL_xz00_6488)
	{
		{	/* Ieee/number.scm 278 */
			return BBOOL(BGl_rationalzf3zf3zz__r4_numbers_6_5z00(BgL_xz00_6488));
		}

	}



/* flonum->fixnum */
	BGL_EXPORTED_DEF long BGl_flonumzd2ze3fixnumz31zz__r4_numbers_6_5z00(double
		BgL_xz00_8)
	{
		{	/* Ieee/number.scm 284 */
			return (long) (BgL_xz00_8);
		}

	}



/* &flonum->fixnum */
	obj_t BGl_z62flonumzd2ze3fixnumz53zz__r4_numbers_6_5z00(obj_t BgL_envz00_6489,
		obj_t BgL_xz00_6490)
	{
		{	/* Ieee/number.scm 284 */
			{	/* Ieee/number.scm 284 */
				long BgL_tmpz00_6756;

				{	/* Ieee/number.scm 284 */
					double BgL_auxz00_6757;

					{	/* Ieee/number.scm 284 */
						obj_t BgL_tmpz00_6758;

						if (REALP(BgL_xz00_6490))
							{	/* Ieee/number.scm 284 */
								BgL_tmpz00_6758 = BgL_xz00_6490;
							}
						else
							{
								obj_t BgL_auxz00_6761;

								BgL_auxz00_6761 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string4817z00zz__r4_numbers_6_5z00, BINT(((long) 10964)),
									BGl_string4818z00zz__r4_numbers_6_5z00,
									BGl_string4819z00zz__r4_numbers_6_5z00, BgL_xz00_6490);
								FAILURE(BgL_auxz00_6761, BFALSE, BFALSE);
							}
						BgL_auxz00_6757 = REAL_TO_DOUBLE(BgL_tmpz00_6758);
					}
					BgL_tmpz00_6756 =
						BGl_flonumzd2ze3fixnumz31zz__r4_numbers_6_5z00(BgL_auxz00_6757);
				}
				return BINT(BgL_tmpz00_6756);
			}
		}

	}



/* fixnum->flonum */
	BGL_EXPORTED_DEF double BGl_fixnumzd2ze3flonumz31zz__r4_numbers_6_5z00(long
		BgL_xz00_9)
	{
		{	/* Ieee/number.scm 285 */
			return (double) (BgL_xz00_9);
		}

	}



/* &fixnum->flonum */
	obj_t BGl_z62fixnumzd2ze3flonumz53zz__r4_numbers_6_5z00(obj_t BgL_envz00_6491,
		obj_t BgL_xz00_6492)
	{
		{	/* Ieee/number.scm 285 */
			{	/* Ieee/number.scm 285 */
				double BgL_tmpz00_6769;

				{	/* Ieee/number.scm 285 */
					long BgL_auxz00_6770;

					{	/* Ieee/number.scm 285 */
						obj_t BgL_tmpz00_6771;

						if (INTEGERP(BgL_xz00_6492))
							{	/* Ieee/number.scm 285 */
								BgL_tmpz00_6771 = BgL_xz00_6492;
							}
						else
							{
								obj_t BgL_auxz00_6774;

								BgL_auxz00_6774 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string4817z00zz__r4_numbers_6_5z00, BINT(((long) 11019)),
									BGl_string4820z00zz__r4_numbers_6_5z00,
									BGl_string4821z00zz__r4_numbers_6_5z00, BgL_xz00_6492);
								FAILURE(BgL_auxz00_6774, BFALSE, BFALSE);
							}
						BgL_auxz00_6770 = (long) CINT(BgL_tmpz00_6771);
					}
					BgL_tmpz00_6769 =
						BGl_fixnumzd2ze3flonumz31zz__r4_numbers_6_5z00(BgL_auxz00_6770);
				}
				return DOUBLE_TO_REAL(BgL_tmpz00_6769);
			}
		}

	}



/* flonum->elong */
	BGL_EXPORTED_DEF long BGl_flonumzd2ze3elongz31zz__r4_numbers_6_5z00(double
		BgL_xz00_10)
	{
		{	/* Ieee/number.scm 290 */
			{	/* Ieee/number.scm 290 */
				long BgL_tmpz00_6781;

				BgL_tmpz00_6781 = (long) (BgL_xz00_10);
				return (long) (BgL_tmpz00_6781);
		}}

	}



/* &flonum->elong */
	obj_t BGl_z62flonumzd2ze3elongz53zz__r4_numbers_6_5z00(obj_t BgL_envz00_6493,
		obj_t BgL_xz00_6494)
	{
		{	/* Ieee/number.scm 290 */
			{	/* Ieee/number.scm 290 */
				long BgL_tmpz00_6784;

				{	/* Ieee/number.scm 290 */
					double BgL_auxz00_6785;

					{	/* Ieee/number.scm 290 */
						obj_t BgL_tmpz00_6786;

						if (REALP(BgL_xz00_6494))
							{	/* Ieee/number.scm 290 */
								BgL_tmpz00_6786 = BgL_xz00_6494;
							}
						else
							{
								obj_t BgL_auxz00_6789;

								BgL_auxz00_6789 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string4817z00zz__r4_numbers_6_5z00, BINT(((long) 11305)),
									BGl_string4822z00zz__r4_numbers_6_5z00,
									BGl_string4819z00zz__r4_numbers_6_5z00, BgL_xz00_6494);
								FAILURE(BgL_auxz00_6789, BFALSE, BFALSE);
							}
						BgL_auxz00_6785 = REAL_TO_DOUBLE(BgL_tmpz00_6786);
					}
					BgL_tmpz00_6784 =
						BGl_flonumzd2ze3elongz31zz__r4_numbers_6_5z00(BgL_auxz00_6785);
				}
				return make_belong(BgL_tmpz00_6784);
			}
		}

	}



/* elong->flonum */
	BGL_EXPORTED_DEF double BGl_elongzd2ze3flonumz31zz__r4_numbers_6_5z00(long
		BgL_xz00_11)
	{
		{	/* Ieee/number.scm 291 */
			return (double) (BgL_xz00_11);
		}

	}



/* &elong->flonum */
	obj_t BGl_z62elongzd2ze3flonumz53zz__r4_numbers_6_5z00(obj_t BgL_envz00_6495,
		obj_t BgL_xz00_6496)
	{
		{	/* Ieee/number.scm 291 */
			{	/* Ieee/number.scm 291 */
				double BgL_tmpz00_6797;

				{	/* Ieee/number.scm 291 */
					long BgL_auxz00_6798;

					{	/* Ieee/number.scm 291 */
						obj_t BgL_tmpz00_6799;

						if (ELONGP(BgL_xz00_6496))
							{	/* Ieee/number.scm 291 */
								BgL_tmpz00_6799 = BgL_xz00_6496;
							}
						else
							{
								obj_t BgL_auxz00_6802;

								BgL_auxz00_6802 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string4817z00zz__r4_numbers_6_5z00, BINT(((long) 11358)),
									BGl_string4823z00zz__r4_numbers_6_5z00,
									BGl_string4824z00zz__r4_numbers_6_5z00, BgL_xz00_6496);
								FAILURE(BgL_auxz00_6802, BFALSE, BFALSE);
							}
						BgL_auxz00_6798 = BELONG_TO_LONG(BgL_tmpz00_6799);
					}
					BgL_tmpz00_6797 =
						BGl_elongzd2ze3flonumz31zz__r4_numbers_6_5z00(BgL_auxz00_6798);
				}
				return DOUBLE_TO_REAL(BgL_tmpz00_6797);
			}
		}

	}



/* flonum->llong */
	BGL_EXPORTED_DEF BGL_LONGLONG_T
		BGl_flonumzd2ze3llongz31zz__r4_numbers_6_5z00(double BgL_xz00_12)
	{
		{	/* Ieee/number.scm 296 */
			return (BGL_LONGLONG_T) (BgL_xz00_12);
		}

	}



/* &flonum->llong */
	obj_t BGl_z62flonumzd2ze3llongz53zz__r4_numbers_6_5z00(obj_t BgL_envz00_6497,
		obj_t BgL_xz00_6498)
	{
		{	/* Ieee/number.scm 296 */
			{	/* Ieee/number.scm 296 */
				BGL_LONGLONG_T BgL_tmpz00_6810;

				{	/* Ieee/number.scm 296 */
					double BgL_auxz00_6811;

					{	/* Ieee/number.scm 296 */
						obj_t BgL_tmpz00_6812;

						if (REALP(BgL_xz00_6498))
							{	/* Ieee/number.scm 296 */
								BgL_tmpz00_6812 = BgL_xz00_6498;
							}
						else
							{
								obj_t BgL_auxz00_6815;

								BgL_auxz00_6815 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string4817z00zz__r4_numbers_6_5z00, BINT(((long) 11643)),
									BGl_string4825z00zz__r4_numbers_6_5z00,
									BGl_string4819z00zz__r4_numbers_6_5z00, BgL_xz00_6498);
								FAILURE(BgL_auxz00_6815, BFALSE, BFALSE);
							}
						BgL_auxz00_6811 = REAL_TO_DOUBLE(BgL_tmpz00_6812);
					}
					BgL_tmpz00_6810 =
						BGl_flonumzd2ze3llongz31zz__r4_numbers_6_5z00(BgL_auxz00_6811);
				}
				return make_bllong(BgL_tmpz00_6810);
			}
		}

	}



/* llong->flonum */
	BGL_EXPORTED_DEF double
		BGl_llongzd2ze3flonumz31zz__r4_numbers_6_5z00(BGL_LONGLONG_T BgL_xz00_13)
	{
		{	/* Ieee/number.scm 297 */
			return (double) (BgL_xz00_13);
		}

	}



/* &llong->flonum */
	obj_t BGl_z62llongzd2ze3flonumz53zz__r4_numbers_6_5z00(obj_t BgL_envz00_6499,
		obj_t BgL_xz00_6500)
	{
		{	/* Ieee/number.scm 297 */
			{	/* Ieee/number.scm 297 */
				double BgL_tmpz00_6823;

				{	/* Ieee/number.scm 297 */
					BGL_LONGLONG_T BgL_auxz00_6824;

					{	/* Ieee/number.scm 297 */
						obj_t BgL_tmpz00_6825;

						if (LLONGP(BgL_xz00_6500))
							{	/* Ieee/number.scm 297 */
								BgL_tmpz00_6825 = BgL_xz00_6500;
							}
						else
							{
								obj_t BgL_auxz00_6828;

								BgL_auxz00_6828 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string4817z00zz__r4_numbers_6_5z00, BINT(((long) 11696)),
									BGl_string4826z00zz__r4_numbers_6_5z00,
									BGl_string4827z00zz__r4_numbers_6_5z00, BgL_xz00_6500);
								FAILURE(BgL_auxz00_6828, BFALSE, BFALSE);
							}
						BgL_auxz00_6824 = BLLONG_TO_LLONG(BgL_tmpz00_6825);
					}
					BgL_tmpz00_6823 =
						BGl_llongzd2ze3flonumz31zz__r4_numbers_6_5z00(BgL_auxz00_6824);
				}
				return DOUBLE_TO_REAL(BgL_tmpz00_6823);
			}
		}

	}



/* flonum->bignum */
	BGL_EXPORTED_DEF obj_t BGl_flonumzd2ze3bignumz31zz__r4_numbers_6_5z00(double
		BgL_xz00_14)
	{
		{	/* Ieee/number.scm 302 */
			return bgl_flonum_to_bignum(BgL_xz00_14);
		}

	}



/* &flonum->bignum */
	obj_t BGl_z62flonumzd2ze3bignumz53zz__r4_numbers_6_5z00(obj_t BgL_envz00_6501,
		obj_t BgL_xz00_6502)
	{
		{	/* Ieee/number.scm 302 */
			{	/* Ieee/number.scm 302 */
				double BgL_auxz00_6836;

				{	/* Ieee/number.scm 302 */
					obj_t BgL_tmpz00_6837;

					if (REALP(BgL_xz00_6502))
						{	/* Ieee/number.scm 302 */
							BgL_tmpz00_6837 = BgL_xz00_6502;
						}
					else
						{
							obj_t BgL_auxz00_6840;

							BgL_auxz00_6840 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string4817z00zz__r4_numbers_6_5z00, BINT(((long) 11982)),
								BGl_string4828z00zz__r4_numbers_6_5z00,
								BGl_string4819z00zz__r4_numbers_6_5z00, BgL_xz00_6502);
							FAILURE(BgL_auxz00_6840, BFALSE, BFALSE);
						}
					BgL_auxz00_6836 = REAL_TO_DOUBLE(BgL_tmpz00_6837);
				}
				return BGl_flonumzd2ze3bignumz31zz__r4_numbers_6_5z00(BgL_auxz00_6836);
			}
		}

	}



/* bignum->flonum */
	BGL_EXPORTED_DEF double BGl_bignumzd2ze3flonumz31zz__r4_numbers_6_5z00(obj_t
		BgL_xz00_15)
	{
		{	/* Ieee/number.scm 303 */
			return bgl_bignum_to_flonum(BgL_xz00_15);
		}

	}



/* &bignum->flonum */
	obj_t BGl_z62bignumzd2ze3flonumz53zz__r4_numbers_6_5z00(obj_t BgL_envz00_6503,
		obj_t BgL_xz00_6504)
	{
		{	/* Ieee/number.scm 303 */
			{	/* Ieee/number.scm 303 */
				double BgL_tmpz00_6847;

				{	/* Ieee/number.scm 303 */
					obj_t BgL_auxz00_6848;

					if (BIGNUMP(BgL_xz00_6504))
						{	/* Ieee/number.scm 303 */
							BgL_auxz00_6848 = BgL_xz00_6504;
						}
					else
						{
							obj_t BgL_auxz00_6851;

							BgL_auxz00_6851 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string4817z00zz__r4_numbers_6_5z00, BINT(((long) 12037)),
								BGl_string4829z00zz__r4_numbers_6_5z00,
								BGl_string4830z00zz__r4_numbers_6_5z00, BgL_xz00_6504);
							FAILURE(BgL_auxz00_6851, BFALSE, BFALSE);
						}
					BgL_tmpz00_6847 =
						BGl_bignumzd2ze3flonumz31zz__r4_numbers_6_5z00(BgL_auxz00_6848);
				}
				return DOUBLE_TO_REAL(BgL_tmpz00_6847);
			}
		}

	}



/* flonum->int32 */
	BGL_EXPORTED_DEF int32_t BGl_flonumzd2ze3int32z31zz__r4_numbers_6_5z00(double
		BgL_xz00_16)
	{
		{	/* Ieee/number.scm 308 */
			return (int32_t) (BgL_xz00_16);
		}

	}



/* &flonum->int32 */
	obj_t BGl_z62flonumzd2ze3int32z53zz__r4_numbers_6_5z00(obj_t BgL_envz00_6505,
		obj_t BgL_xz00_6506)
	{
		{	/* Ieee/number.scm 308 */
			{	/* Ieee/number.scm 308 */
				int32_t BgL_tmpz00_6858;

				{	/* Ieee/number.scm 308 */
					double BgL_auxz00_6859;

					{	/* Ieee/number.scm 308 */
						obj_t BgL_tmpz00_6860;

						if (REALP(BgL_xz00_6506))
							{	/* Ieee/number.scm 308 */
								BgL_tmpz00_6860 = BgL_xz00_6506;
							}
						else
							{
								obj_t BgL_auxz00_6863;

								BgL_auxz00_6863 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string4817z00zz__r4_numbers_6_5z00, BINT(((long) 12314)),
									BGl_string4831z00zz__r4_numbers_6_5z00,
									BGl_string4819z00zz__r4_numbers_6_5z00, BgL_xz00_6506);
								FAILURE(BgL_auxz00_6863, BFALSE, BFALSE);
							}
						BgL_auxz00_6859 = REAL_TO_DOUBLE(BgL_tmpz00_6860);
					}
					BgL_tmpz00_6858 =
						BGl_flonumzd2ze3int32z31zz__r4_numbers_6_5z00(BgL_auxz00_6859);
				}
				return BGL_INT32_TO_BINT32(BgL_tmpz00_6858);
			}
		}

	}



/* int32->flonum */
	BGL_EXPORTED_DEF double BGl_int32zd2ze3flonumz31zz__r4_numbers_6_5z00(int32_t
		BgL_xz00_17)
	{
		{	/* Ieee/number.scm 309 */
			return (double) (BgL_xz00_17);
		}

	}



/* &int32->flonum */
	obj_t BGl_z62int32zd2ze3flonumz53zz__r4_numbers_6_5z00(obj_t BgL_envz00_6507,
		obj_t BgL_xz00_6508)
	{
		{	/* Ieee/number.scm 309 */
			{	/* Ieee/number.scm 309 */
				double BgL_tmpz00_6871;

				{	/* Ieee/number.scm 309 */
					int32_t BgL_auxz00_6872;

					{	/* Ieee/number.scm 309 */
						obj_t BgL_tmpz00_6873;

						if (BGL_INT32P(BgL_xz00_6508))
							{	/* Ieee/number.scm 309 */
								BgL_tmpz00_6873 = BgL_xz00_6508;
							}
						else
							{
								obj_t BgL_auxz00_6876;

								BgL_auxz00_6876 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string4817z00zz__r4_numbers_6_5z00, BINT(((long) 12367)),
									BGl_string4832z00zz__r4_numbers_6_5z00,
									BGl_string4833z00zz__r4_numbers_6_5z00, BgL_xz00_6508);
								FAILURE(BgL_auxz00_6876, BFALSE, BFALSE);
							}
						BgL_auxz00_6872 = BGL_BINT32_TO_INT32(BgL_tmpz00_6873);
					}
					BgL_tmpz00_6871 =
						BGl_int32zd2ze3flonumz31zz__r4_numbers_6_5z00(BgL_auxz00_6872);
				}
				return DOUBLE_TO_REAL(BgL_tmpz00_6871);
			}
		}

	}



/* flonum->uint32 */
	BGL_EXPORTED_DEF uint32_t
		BGl_flonumzd2ze3uint32z31zz__r4_numbers_6_5z00(double BgL_xz00_18)
	{
		{	/* Ieee/number.scm 311 */
			{	/* Ieee/number.scm 311 */
				int32_t BgL_tmpz00_6883;

				BgL_tmpz00_6883 = (uint32_t) (BgL_xz00_18);
				return (uint32_t) (BgL_tmpz00_6883);
			}
		}

	}



/* &flonum->uint32 */
	obj_t BGl_z62flonumzd2ze3uint32z53zz__r4_numbers_6_5z00(obj_t BgL_envz00_6509,
		obj_t BgL_xz00_6510)
	{
		{	/* Ieee/number.scm 311 */
			{	/* Ieee/number.scm 311 */
				uint32_t BgL_tmpz00_6886;

				{	/* Ieee/number.scm 311 */
					double BgL_auxz00_6887;

					{	/* Ieee/number.scm 311 */
						obj_t BgL_tmpz00_6888;

						if (REALP(BgL_xz00_6510))
							{	/* Ieee/number.scm 311 */
								BgL_tmpz00_6888 = BgL_xz00_6510;
							}
						else
							{
								obj_t BgL_auxz00_6891;

								BgL_auxz00_6891 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string4817z00zz__r4_numbers_6_5z00, BINT(((long) 12422)),
									BGl_string4834z00zz__r4_numbers_6_5z00,
									BGl_string4819z00zz__r4_numbers_6_5z00, BgL_xz00_6510);
								FAILURE(BgL_auxz00_6891, BFALSE, BFALSE);
							}
						BgL_auxz00_6887 = REAL_TO_DOUBLE(BgL_tmpz00_6888);
					}
					BgL_tmpz00_6886 =
						BGl_flonumzd2ze3uint32z31zz__r4_numbers_6_5z00(BgL_auxz00_6887);
				}
				return BGL_UINT32_TO_BUINT32(BgL_tmpz00_6886);
			}
		}

	}



/* uint32->flonum */
	BGL_EXPORTED_DEF double
		BGl_uint32zd2ze3flonumz31zz__r4_numbers_6_5z00(uint32_t BgL_xz00_19)
	{
		{	/* Ieee/number.scm 312 */
			return (double) (BgL_xz00_19);
		}

	}



/* &uint32->flonum */
	obj_t BGl_z62uint32zd2ze3flonumz53zz__r4_numbers_6_5z00(obj_t BgL_envz00_6511,
		obj_t BgL_xz00_6512)
	{
		{	/* Ieee/number.scm 312 */
			{	/* Ieee/number.scm 312 */
				double BgL_tmpz00_6899;

				{	/* Ieee/number.scm 312 */
					uint32_t BgL_auxz00_6900;

					{	/* Ieee/number.scm 312 */
						obj_t BgL_tmpz00_6901;

						if (BGL_UINT32P(BgL_xz00_6512))
							{	/* Ieee/number.scm 312 */
								BgL_tmpz00_6901 = BgL_xz00_6512;
							}
						else
							{
								obj_t BgL_auxz00_6904;

								BgL_auxz00_6904 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string4817z00zz__r4_numbers_6_5z00, BINT(((long) 12477)),
									BGl_string4835z00zz__r4_numbers_6_5z00,
									BGl_string4836z00zz__r4_numbers_6_5z00, BgL_xz00_6512);
								FAILURE(BgL_auxz00_6904, BFALSE, BFALSE);
							}
						BgL_auxz00_6900 = BGL_BUINT32_TO_UINT32(BgL_tmpz00_6901);
					}
					BgL_tmpz00_6899 =
						BGl_uint32zd2ze3flonumz31zz__r4_numbers_6_5z00(BgL_auxz00_6900);
				}
				return DOUBLE_TO_REAL(BgL_tmpz00_6899);
			}
		}

	}



/* flonum->int64 */
	BGL_EXPORTED_DEF int64_t BGl_flonumzd2ze3int64z31zz__r4_numbers_6_5z00(double
		BgL_xz00_20)
	{
		{	/* Ieee/number.scm 317 */
			return (int64_t) (BgL_xz00_20);
		}

	}



/* &flonum->int64 */
	obj_t BGl_z62flonumzd2ze3int64z53zz__r4_numbers_6_5z00(obj_t BgL_envz00_6513,
		obj_t BgL_xz00_6514)
	{
		{	/* Ieee/number.scm 317 */
			{	/* Ieee/number.scm 317 */
				int64_t BgL_tmpz00_6912;

				{	/* Ieee/number.scm 317 */
					double BgL_auxz00_6913;

					{	/* Ieee/number.scm 317 */
						obj_t BgL_tmpz00_6914;

						if (REALP(BgL_xz00_6514))
							{	/* Ieee/number.scm 317 */
								BgL_tmpz00_6914 = BgL_xz00_6514;
							}
						else
							{
								obj_t BgL_auxz00_6917;

								BgL_auxz00_6917 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string4817z00zz__r4_numbers_6_5z00, BINT(((long) 12754)),
									BGl_string4837z00zz__r4_numbers_6_5z00,
									BGl_string4819z00zz__r4_numbers_6_5z00, BgL_xz00_6514);
								FAILURE(BgL_auxz00_6917, BFALSE, BFALSE);
							}
						BgL_auxz00_6913 = REAL_TO_DOUBLE(BgL_tmpz00_6914);
					}
					BgL_tmpz00_6912 =
						BGl_flonumzd2ze3int64z31zz__r4_numbers_6_5z00(BgL_auxz00_6913);
				}
				return BGL_INT64_TO_BINT64(BgL_tmpz00_6912);
			}
		}

	}



/* int64->flonum */
	BGL_EXPORTED_DEF double BGl_int64zd2ze3flonumz31zz__r4_numbers_6_5z00(int64_t
		BgL_xz00_21)
	{
		{	/* Ieee/number.scm 318 */
			return (double) (BgL_xz00_21);
		}

	}



/* &int64->flonum */
	obj_t BGl_z62int64zd2ze3flonumz53zz__r4_numbers_6_5z00(obj_t BgL_envz00_6515,
		obj_t BgL_xz00_6516)
	{
		{	/* Ieee/number.scm 318 */
			{	/* Ieee/number.scm 318 */
				double BgL_tmpz00_6925;

				{	/* Ieee/number.scm 318 */
					int64_t BgL_auxz00_6926;

					{	/* Ieee/number.scm 318 */
						obj_t BgL_tmpz00_6927;

						if (BGL_INT64P(BgL_xz00_6516))
							{	/* Ieee/number.scm 318 */
								BgL_tmpz00_6927 = BgL_xz00_6516;
							}
						else
							{
								obj_t BgL_auxz00_6930;

								BgL_auxz00_6930 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string4817z00zz__r4_numbers_6_5z00, BINT(((long) 12807)),
									BGl_string4838z00zz__r4_numbers_6_5z00,
									BGl_string4839z00zz__r4_numbers_6_5z00, BgL_xz00_6516);
								FAILURE(BgL_auxz00_6930, BFALSE, BFALSE);
							}
						BgL_auxz00_6926 = BGL_BINT64_TO_INT64(BgL_tmpz00_6927);
					}
					BgL_tmpz00_6925 =
						BGl_int64zd2ze3flonumz31zz__r4_numbers_6_5z00(BgL_auxz00_6926);
				}
				return DOUBLE_TO_REAL(BgL_tmpz00_6925);
			}
		}

	}



/* flonum->uint64 */
	BGL_EXPORTED_DEF uint64_t
		BGl_flonumzd2ze3uint64z31zz__r4_numbers_6_5z00(double BgL_xz00_22)
	{
		{	/* Ieee/number.scm 320 */
			return (uint64_t) (BgL_xz00_22);
		}

	}



/* &flonum->uint64 */
	obj_t BGl_z62flonumzd2ze3uint64z53zz__r4_numbers_6_5z00(obj_t BgL_envz00_6517,
		obj_t BgL_xz00_6518)
	{
		{	/* Ieee/number.scm 320 */
			{	/* Ieee/number.scm 320 */
				uint64_t BgL_tmpz00_6938;

				{	/* Ieee/number.scm 320 */
					double BgL_auxz00_6939;

					{	/* Ieee/number.scm 320 */
						obj_t BgL_tmpz00_6940;

						if (REALP(BgL_xz00_6518))
							{	/* Ieee/number.scm 320 */
								BgL_tmpz00_6940 = BgL_xz00_6518;
							}
						else
							{
								obj_t BgL_auxz00_6943;

								BgL_auxz00_6943 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string4817z00zz__r4_numbers_6_5z00, BINT(((long) 12862)),
									BGl_string4840z00zz__r4_numbers_6_5z00,
									BGl_string4819z00zz__r4_numbers_6_5z00, BgL_xz00_6518);
								FAILURE(BgL_auxz00_6943, BFALSE, BFALSE);
							}
						BgL_auxz00_6939 = REAL_TO_DOUBLE(BgL_tmpz00_6940);
					}
					BgL_tmpz00_6938 =
						BGl_flonumzd2ze3uint64z31zz__r4_numbers_6_5z00(BgL_auxz00_6939);
				}
				return BGL_UINT64_TO_BUINT64(BgL_tmpz00_6938);
			}
		}

	}



/* uint64->flonum */
	BGL_EXPORTED_DEF double
		BGl_uint64zd2ze3flonumz31zz__r4_numbers_6_5z00(uint64_t BgL_xz00_23)
	{
		{	/* Ieee/number.scm 321 */
			return (double) (BgL_xz00_23);
		}

	}



/* &uint64->flonum */
	obj_t BGl_z62uint64zd2ze3flonumz53zz__r4_numbers_6_5z00(obj_t BgL_envz00_6519,
		obj_t BgL_xz00_6520)
	{
		{	/* Ieee/number.scm 321 */
			{	/* Ieee/number.scm 321 */
				double BgL_tmpz00_6951;

				{	/* Ieee/number.scm 321 */
					uint64_t BgL_auxz00_6952;

					{	/* Ieee/number.scm 321 */
						obj_t BgL_tmpz00_6953;

						if (BGL_UINT64P(BgL_xz00_6520))
							{	/* Ieee/number.scm 321 */
								BgL_tmpz00_6953 = BgL_xz00_6520;
							}
						else
							{
								obj_t BgL_auxz00_6956;

								BgL_auxz00_6956 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string4817z00zz__r4_numbers_6_5z00, BINT(((long) 12917)),
									BGl_string4841z00zz__r4_numbers_6_5z00,
									BGl_string4842z00zz__r4_numbers_6_5z00, BgL_xz00_6520);
								FAILURE(BgL_auxz00_6956, BFALSE, BFALSE);
							}
						BgL_auxz00_6952 = BGL_BINT64_TO_INT64(BgL_tmpz00_6953);
					}
					BgL_tmpz00_6951 =
						BGl_uint64zd2ze3flonumz31zz__r4_numbers_6_5z00(BgL_auxz00_6952);
				}
				return DOUBLE_TO_REAL(BgL_tmpz00_6951);
			}
		}

	}



/* $subelong->elong */
	obj_t BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00(obj_t BgL_xz00_24)
	{
		{	/* Ieee/number.scm 326 */
			if (ELONGP(BgL_xz00_24))
				{	/* Ieee/number.scm 330 */
					return BgL_xz00_24;
				}
			else
				{	/* Ieee/number.scm 330 */
					if (BGL_INT8P(BgL_xz00_24))
						{	/* Ieee/number.scm 331 */
							long BgL_arg1117z00_872;

							{	/* Ieee/number.scm 331 */
								long BgL_res3212z00_2808;

								{	/* Ieee/number.scm 331 */
									int8_t BgL_xz00_2804;

									BgL_xz00_2804 = BGL_BINT8_TO_INT8(BgL_xz00_24);
									{	/* Ieee/number.scm 331 */
										long BgL_arg3179z00_2805;

										BgL_arg3179z00_2805 = (long) (BgL_xz00_2804);
										{	/* Ieee/number.scm 331 */
											long BgL_res3211z00_2807;

											BgL_res3211z00_2807 = (long) (BgL_arg3179z00_2805);
											BgL_res3212z00_2808 = BgL_res3211z00_2807;
								}}}
								BgL_arg1117z00_872 = BgL_res3212z00_2808;
							}
							{	/* Ieee/number.scm 331 */
								long BgL_res3213z00_2810;

								BgL_res3213z00_2810 = (long) (BgL_arg1117z00_872);
								return make_belong(BgL_res3213z00_2810);
							}
						}
					else
						{	/* Ieee/number.scm 331 */
							if (BGL_UINT8P(BgL_xz00_24))
								{	/* Ieee/number.scm 332 */
									long BgL_arg1121z00_874;

									{	/* Ieee/number.scm 332 */
										long BgL_res3216z00_2816;

										{	/* Ieee/number.scm 332 */
											uint8_t BgL_xz00_2812;

											BgL_xz00_2812 = BGL_BUINT8_TO_UINT8(BgL_xz00_24);
											{	/* Ieee/number.scm 332 */
												long BgL_arg3178z00_2813;

												BgL_arg3178z00_2813 = (long) (BgL_xz00_2812);
												{	/* Ieee/number.scm 332 */
													long BgL_res3215z00_2815;

													BgL_res3215z00_2815 = (long) (BgL_arg3178z00_2813);
													BgL_res3216z00_2816 = BgL_res3215z00_2815;
										}}}
										BgL_arg1121z00_874 = BgL_res3216z00_2816;
									}
									{	/* Ieee/number.scm 332 */
										long BgL_res3217z00_2818;

										BgL_res3217z00_2818 = (long) (BgL_arg1121z00_874);
										return make_belong(BgL_res3217z00_2818);
									}
								}
							else
								{	/* Ieee/number.scm 332 */
									if (BGL_INT16P(BgL_xz00_24))
										{	/* Ieee/number.scm 333 */
											long BgL_arg1123z00_876;

											{	/* Ieee/number.scm 333 */
												long BgL_res3220z00_2824;

												{	/* Ieee/number.scm 333 */
													int16_t BgL_xz00_2820;

													BgL_xz00_2820 = BGL_BINT16_TO_INT16(BgL_xz00_24);
													{	/* Ieee/number.scm 333 */
														long BgL_arg3177z00_2821;

														BgL_arg3177z00_2821 = (long) (BgL_xz00_2820);
														{	/* Ieee/number.scm 333 */
															long BgL_res3219z00_2823;

															BgL_res3219z00_2823 =
																(long) (BgL_arg3177z00_2821);
															BgL_res3220z00_2824 = BgL_res3219z00_2823;
												}}}
												BgL_arg1123z00_876 = BgL_res3220z00_2824;
											}
											{	/* Ieee/number.scm 333 */
												long BgL_res3221z00_2826;

												BgL_res3221z00_2826 = (long) (BgL_arg1123z00_876);
												return make_belong(BgL_res3221z00_2826);
											}
										}
									else
										{	/* Ieee/number.scm 333 */
											if (BGL_UINT16P(BgL_xz00_24))
												{	/* Ieee/number.scm 334 */
													long BgL_arg1125z00_878;

													{	/* Ieee/number.scm 334 */
														long BgL_res3224z00_2832;

														{	/* Ieee/number.scm 334 */
															uint16_t BgL_xz00_2828;

															BgL_xz00_2828 =
																BGL_BUINT16_TO_UINT16(BgL_xz00_24);
															{	/* Ieee/number.scm 334 */
																long BgL_arg3175z00_2829;

																BgL_arg3175z00_2829 = (long) (BgL_xz00_2828);
																{	/* Ieee/number.scm 334 */
																	long BgL_res3223z00_2831;

																	BgL_res3223z00_2831 =
																		(long) (BgL_arg3175z00_2829);
																	BgL_res3224z00_2832 = BgL_res3223z00_2831;
														}}}
														BgL_arg1125z00_878 = BgL_res3224z00_2832;
													}
													{	/* Ieee/number.scm 334 */
														long BgL_res3225z00_2834;

														BgL_res3225z00_2834 = (long) (BgL_arg1125z00_878);
														return make_belong(BgL_res3225z00_2834);
													}
												}
											else
												{	/* Ieee/number.scm 334 */
													if (BGL_INT32P(BgL_xz00_24))
														{	/* Ieee/number.scm 335 */
															long BgL_arg1127z00_880;

															{	/* Ieee/number.scm 335 */
																long BgL_res3228z00_2840;

																{	/* Ieee/number.scm 335 */
																	int32_t BgL_xz00_2836;

																	BgL_xz00_2836 =
																		BGL_BINT32_TO_INT32(BgL_xz00_24);
																	{	/* Ieee/number.scm 335 */
																		long BgL_arg3174z00_2837;

																		BgL_arg3174z00_2837 =
																			(long) (BgL_xz00_2836);
																		{	/* Ieee/number.scm 335 */
																			long BgL_res3227z00_2839;

																			BgL_res3227z00_2839 =
																				(long) (BgL_arg3174z00_2837);
																			BgL_res3228z00_2840 = BgL_res3227z00_2839;
																}}}
																BgL_arg1127z00_880 = BgL_res3228z00_2840;
															}
															{	/* Ieee/number.scm 335 */
																long BgL_res3229z00_2842;

																BgL_res3229z00_2842 =
																	(long) (BgL_arg1127z00_880);
																return make_belong(BgL_res3229z00_2842);
															}
														}
													else
														{	/* Ieee/number.scm 335 */
															if (BGL_UINT32P(BgL_xz00_24))
																{	/* Ieee/number.scm 336 */
																	long BgL_arg1129z00_882;

																	{	/* Ieee/number.scm 336 */
																		long BgL_res3231z00_2845;

																		{	/* Ieee/number.scm 336 */
																			uint32_t BgL_xz00_2844;

																			BgL_xz00_2844 =
																				BGL_BUINT32_TO_UINT32(BgL_xz00_24);
																			BgL_res3231z00_2845 =
																				(long) (BgL_xz00_2844);
																		}
																		BgL_arg1129z00_882 = BgL_res3231z00_2845;
																	}
																	{	/* Ieee/number.scm 336 */
																		long BgL_res3232z00_2847;

																		BgL_res3232z00_2847 =
																			(long) (BgL_arg1129z00_882);
																		return make_belong(BgL_res3232z00_2847);
																	}
																}
															else
																{	/* Ieee/number.scm 336 */
																	if (BGL_INT64P(BgL_xz00_24))
																		{	/* Ieee/number.scm 337 */
																			long BgL_arg1133z00_884;

																			{	/* Ieee/number.scm 337 */
																				long BgL_res3235z00_2853;

																				{	/* Ieee/number.scm 337 */
																					int64_t BgL_xz00_2849;

																					BgL_xz00_2849 =
																						BGL_BINT64_TO_INT64(BgL_xz00_24);
																					{	/* Ieee/number.scm 337 */
																						long BgL_arg3172z00_2850;

																						BgL_arg3172z00_2850 =
																							(long) (BgL_xz00_2849);
																						{	/* Ieee/number.scm 337 */
																							long BgL_res3234z00_2852;

																							BgL_res3234z00_2852 =
																								(long) (BgL_arg3172z00_2850);
																							BgL_res3235z00_2853 =
																								BgL_res3234z00_2852;
																				}}}
																				BgL_arg1133z00_884 =
																					BgL_res3235z00_2853;
																			}
																			{	/* Ieee/number.scm 337 */
																				long BgL_res3236z00_2855;

																				BgL_res3236z00_2855 =
																					(long) (BgL_arg1133z00_884);
																				return make_belong(BgL_res3236z00_2855);
																			}
																		}
																	else
																		{	/* Ieee/number.scm 337 */
																			return BFALSE;
																		}
																}
														}
												}
										}
								}
						}
				}
		}

	}



/* $subelong? */
	bool_t BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(obj_t BgL_xz00_26)
	{
		{	/* Ieee/number.scm 357 */
			{	/* Ieee/number.scm 360 */
				bool_t BgL__ortest_1035z00_885;

				BgL__ortest_1035z00_885 = ELONGP(BgL_xz00_26);
				if (BgL__ortest_1035z00_885)
					{	/* Ieee/number.scm 360 */
						return BgL__ortest_1035z00_885;
					}
				else
					{	/* Ieee/number.scm 360 */
						bool_t BgL__ortest_1036z00_886;

						BgL__ortest_1036z00_886 = BGL_INT8P(BgL_xz00_26);
						if (BgL__ortest_1036z00_886)
							{	/* Ieee/number.scm 360 */
								return BgL__ortest_1036z00_886;
							}
						else
							{	/* Ieee/number.scm 360 */
								bool_t BgL__ortest_1037z00_887;

								BgL__ortest_1037z00_887 = BGL_UINT8P(BgL_xz00_26);
								if (BgL__ortest_1037z00_887)
									{	/* Ieee/number.scm 360 */
										return BgL__ortest_1037z00_887;
									}
								else
									{	/* Ieee/number.scm 360 */
										bool_t BgL__ortest_1038z00_888;

										BgL__ortest_1038z00_888 = BGL_INT16P(BgL_xz00_26);
										if (BgL__ortest_1038z00_888)
											{	/* Ieee/number.scm 360 */
												return BgL__ortest_1038z00_888;
											}
										else
											{	/* Ieee/number.scm 360 */
												bool_t BgL__ortest_1039z00_889;

												BgL__ortest_1039z00_889 = BGL_UINT16P(BgL_xz00_26);
												if (BgL__ortest_1039z00_889)
													{	/* Ieee/number.scm 360 */
														return BgL__ortest_1039z00_889;
													}
												else
													{	/* Ieee/number.scm 360 */
														bool_t BgL__ortest_1040z00_890;

														BgL__ortest_1040z00_890 = BGL_INT32P(BgL_xz00_26);
														if (BgL__ortest_1040z00_890)
															{	/* Ieee/number.scm 360 */
																return BgL__ortest_1040z00_890;
															}
														else
															{	/* Ieee/number.scm 361 */
																bool_t BgL__ortest_1041z00_891;

																BgL__ortest_1041z00_891 =
																	BGL_UINT32P(BgL_xz00_26);
																if (BgL__ortest_1041z00_891)
																	{	/* Ieee/number.scm 361 */
																		return BgL__ortest_1041z00_891;
																	}
																else
																	{	/* Ieee/number.scm 361 */
																		return BGL_INT64P(BgL_xz00_26);
																	}
															}
													}
											}
									}
							}
					}
			}
		}

	}



/* 2= */
	BGL_EXPORTED_DEF bool_t BGl_2zd3zd3zz__r4_numbers_6_5z00(obj_t BgL_xz00_28,
		obj_t BgL_yz00_29)
	{
		{	/* Ieee/number.scm 492 */
			if (INTEGERP(BgL_xz00_28))
				{	/* Ieee/number.scm 493 */
					if (INTEGERP(BgL_yz00_29))
						{	/* Ieee/number.scm 493 */
							return ((long) CINT(BgL_xz00_28) == (long) CINT(BgL_yz00_29));
						}
					else
						{	/* Ieee/number.scm 493 */
							if (REALP(BgL_yz00_29))
								{	/* Ieee/number.scm 493 */
									return
										(
										(double) (
											(long) CINT(BgL_xz00_28)) == REAL_TO_DOUBLE(BgL_yz00_29));
								}
							else
								{	/* Ieee/number.scm 493 */
									if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_29))
										{	/* Ieee/number.scm 493 */
											long BgL_arg1145z00_897;
											obj_t BgL_arg1146z00_898;

											{	/* Ieee/number.scm 493 */
												long BgL_res3251z00_2875;

												{	/* Ieee/number.scm 493 */
													long BgL_tmpz00_7043;

													BgL_tmpz00_7043 = (long) CINT(BgL_xz00_28);
													BgL_res3251z00_2875 = (long) (BgL_tmpz00_7043);
												}
												BgL_arg1145z00_897 = BgL_res3251z00_2875;
											}
											BgL_arg1146z00_898 =
												BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
												(BgL_yz00_29);
											{	/* Ieee/number.scm 493 */
												long BgL_n2z00_2877;

												BgL_n2z00_2877 = BELONG_TO_LONG(BgL_arg1146z00_898);
												return (BgL_arg1145z00_897 == BgL_n2z00_2877);
											}
										}
									else
										{	/* Ieee/number.scm 493 */
											if (LLONGP(BgL_yz00_29))
												{	/* Ieee/number.scm 493 */
													BGL_LONGLONG_T BgL_arg1155z00_900;

													{	/* Ieee/number.scm 493 */
														BGL_LONGLONG_T BgL_res3254z00_2881;

														{	/* Ieee/number.scm 493 */
															long BgL_tmpz00_7051;

															BgL_tmpz00_7051 = (long) CINT(BgL_xz00_28);
															BgL_res3254z00_2881 =
																LONG_TO_LLONG(BgL_tmpz00_7051);
														}
														BgL_arg1155z00_900 = BgL_res3254z00_2881;
													}
													return
														(BgL_arg1155z00_900 ==
														BLLONG_TO_LLONG(BgL_yz00_29));
												}
											else
												{	/* Ieee/number.scm 493 */
													if (BGL_UINT64P(BgL_yz00_29))
														{	/* Ieee/number.scm 493 */
															uint64_t BgL_arg1165z00_903;

															{	/* Ieee/number.scm 493 */
																BGL_LONGLONG_T BgL_arg1166z00_904;

																{	/* Ieee/number.scm 493 */
																	BGL_LONGLONG_T BgL_res3257z00_2887;

																	{	/* Ieee/number.scm 493 */
																		long BgL_tmpz00_7058;

																		BgL_tmpz00_7058 = (long) CINT(BgL_xz00_28);
																		BgL_res3257z00_2887 =
																			LONG_TO_LLONG(BgL_tmpz00_7058);
																	}
																	BgL_arg1166z00_904 = BgL_res3257z00_2887;
																}
																{	/* Ieee/number.scm 493 */
																	uint64_t BgL_res3258z00_2889;

																	BgL_res3258z00_2889 =
																		(uint64_t) (BgL_arg1166z00_904);
																	BgL_arg1165z00_903 = BgL_res3258z00_2889;
															}}
															{	/* Ieee/number.scm 493 */
																bool_t BgL_res3259z00_2892;

																{	/* Ieee/number.scm 493 */
																	uint64_t BgL_n2z00_2891;

																	BgL_n2z00_2891 =
																		BGL_BINT64_TO_INT64(BgL_yz00_29);
																	BgL_res3259z00_2892 =
																		(BgL_arg1165z00_903 == BgL_n2z00_2891);
																}
																return BgL_res3259z00_2892;
															}
														}
													else
														{	/* Ieee/number.scm 493 */
															if (BIGNUMP(BgL_yz00_29))
																{	/* Ieee/number.scm 493 */
																	return
																		(
																		(long) (bgl_bignum_cmp(bgl_long_to_bignum(
																					(long) CINT(BgL_xz00_28)),
																				BgL_yz00_29)) == ((long) 0));
																}
															else
																{	/* Ieee/number.scm 493 */
																	return
																		CBOOL(BGl_errorz00zz__errorz00
																		(BGl_string4843z00zz__r4_numbers_6_5z00,
																			BGl_string4844z00zz__r4_numbers_6_5z00,
																			BgL_yz00_29));
																}
														}
												}
										}
								}
						}
				}
			else
				{	/* Ieee/number.scm 493 */
					if (REALP(BgL_xz00_28))
						{	/* Ieee/number.scm 493 */
							if (REALP(BgL_yz00_29))
								{	/* Ieee/number.scm 493 */
									return
										(REAL_TO_DOUBLE(BgL_xz00_28) ==
										REAL_TO_DOUBLE(BgL_yz00_29));
								}
							else
								{	/* Ieee/number.scm 493 */
									if (INTEGERP(BgL_yz00_29))
										{	/* Ieee/number.scm 493 */
											return
												(REAL_TO_DOUBLE(BgL_xz00_28) ==
												(double) ((long) CINT(BgL_yz00_29)));
										}
									else
										{	/* Ieee/number.scm 493 */
											if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00
												(BgL_yz00_29))
												{	/* Ieee/number.scm 493 */
													double BgL_arg1176z00_912;

													{	/* Ieee/number.scm 493 */
														obj_t BgL_arg1177z00_913;

														BgL_arg1177z00_913 =
															BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
															(BgL_yz00_29);
														BgL_arg1176z00_912 =
															(double) (BELONG_TO_LONG(BgL_arg1177z00_913));
													}
													return
														(REAL_TO_DOUBLE(BgL_xz00_28) == BgL_arg1176z00_912);
												}
											else
												{	/* Ieee/number.scm 493 */
													if (LLONGP(BgL_yz00_29))
														{	/* Ieee/number.scm 493 */
															return
																(REAL_TO_DOUBLE(BgL_xz00_28) ==
																(double) (BLLONG_TO_LLONG(BgL_yz00_29)));
														}
													else
														{	/* Ieee/number.scm 493 */
															if (BGL_UINT64P(BgL_yz00_29))
																{	/* Ieee/number.scm 493 */
																	double BgL_arg1190z00_918;

																	{	/* Ieee/number.scm 493 */
																		double BgL_res3273z00_2920;

																		{	/* Ieee/number.scm 493 */
																			uint64_t BgL_xz00_2919;

																			BgL_xz00_2919 =
																				BGL_BINT64_TO_INT64(BgL_yz00_29);
																			BgL_res3273z00_2920 =
																				(double) (BgL_xz00_2919);
																		}
																		BgL_arg1190z00_918 = BgL_res3273z00_2920;
																	}
																	return
																		(REAL_TO_DOUBLE(BgL_xz00_28) ==
																		BgL_arg1190z00_918);
																}
															else
																{	/* Ieee/number.scm 493 */
																	if (BIGNUMP(BgL_yz00_29))
																		{	/* Ieee/number.scm 493 */
																			return
																				(REAL_TO_DOUBLE(BgL_xz00_28) ==
																				bgl_bignum_to_flonum(BgL_yz00_29));
																		}
																	else
																		{	/* Ieee/number.scm 493 */
																			return
																				CBOOL(BGl_errorz00zz__errorz00
																				(BGl_string4843z00zz__r4_numbers_6_5z00,
																					BGl_string4844z00zz__r4_numbers_6_5z00,
																					BgL_yz00_29));
																		}
																}
														}
												}
										}
								}
						}
					else
						{	/* Ieee/number.scm 493 */
							if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_xz00_28))
								{	/* Ieee/number.scm 493 */
									if (INTEGERP(BgL_yz00_29))
										{	/* Ieee/number.scm 493 */
											obj_t BgL_arg1197z00_923;
											long BgL_arg1201z00_924;

											BgL_arg1197z00_923 =
												BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
												(BgL_xz00_28);
											{	/* Ieee/number.scm 493 */
												long BgL_res3279z00_2932;

												{	/* Ieee/number.scm 493 */
													long BgL_tmpz00_7117;

													BgL_tmpz00_7117 = (long) CINT(BgL_yz00_29);
													BgL_res3279z00_2932 = (long) (BgL_tmpz00_7117);
												}
												BgL_arg1201z00_924 = BgL_res3279z00_2932;
											}
											{	/* Ieee/number.scm 493 */
												long BgL_n1z00_2933;

												BgL_n1z00_2933 = BELONG_TO_LONG(BgL_arg1197z00_923);
												return (BgL_n1z00_2933 == BgL_arg1201z00_924);
											}
										}
									else
										{	/* Ieee/number.scm 493 */
											if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00
												(BgL_yz00_29))
												{	/* Ieee/number.scm 493 */
													obj_t BgL_arg1208z00_926;
													obj_t BgL_arg1211z00_927;

													BgL_arg1208z00_926 =
														BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
														(BgL_xz00_28);
													BgL_arg1211z00_927 =
														BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
														(BgL_yz00_29);
													{	/* Ieee/number.scm 493 */
														long BgL_n1z00_2936;
														long BgL_n2z00_2937;

														BgL_n1z00_2936 = BELONG_TO_LONG(BgL_arg1208z00_926);
														BgL_n2z00_2937 = BELONG_TO_LONG(BgL_arg1211z00_927);
														return (BgL_n1z00_2936 == BgL_n2z00_2937);
													}
												}
											else
												{	/* Ieee/number.scm 493 */
													if (REALP(BgL_yz00_29))
														{	/* Ieee/number.scm 493 */
															double BgL_arg1216z00_929;

															{	/* Ieee/number.scm 493 */
																obj_t BgL_arg1221z00_930;

																BgL_arg1221z00_930 =
																	BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																	(BgL_xz00_28);
																BgL_arg1216z00_929 =
																	(double) (BELONG_TO_LONG(BgL_arg1221z00_930));
															}
															return
																(BgL_arg1216z00_929 ==
																REAL_TO_DOUBLE(BgL_yz00_29));
														}
													else
														{	/* Ieee/number.scm 493 */
															if (LLONGP(BgL_yz00_29))
																{	/* Ieee/number.scm 493 */
																	BGL_LONGLONG_T BgL_arg1223z00_932;

																	{	/* Ieee/number.scm 493 */
																		obj_t BgL_arg1227z00_934;

																		BgL_arg1227z00_934 =
																			BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																			(BgL_xz00_28);
																		BgL_arg1223z00_932 =
																			(BGL_LONGLONG_T) (BELONG_TO_LONG
																			(BgL_arg1227z00_934));
																	}
																	return
																		(BgL_arg1223z00_932 ==
																		BLLONG_TO_LLONG(BgL_yz00_29));
																}
															else
																{	/* Ieee/number.scm 493 */
																	if (BGL_UINT64P(BgL_yz00_29))
																		{	/* Ieee/number.scm 493 */
																			uint64_t BgL_arg1229z00_936;

																			{	/* Ieee/number.scm 493 */
																				BGL_LONGLONG_T BgL_arg1232z00_937;

																				{	/* Ieee/number.scm 493 */
																					obj_t BgL_arg1239z00_938;

																					BgL_arg1239z00_938 =
																						BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																						(BgL_xz00_28);
																					BgL_arg1232z00_937 =
																						(BGL_LONGLONG_T) (BELONG_TO_LONG
																						(BgL_arg1239z00_938));
																				}
																				{	/* Ieee/number.scm 493 */
																					uint64_t BgL_res3287z00_2949;

																					BgL_res3287z00_2949 =
																						(uint64_t) (BgL_arg1232z00_937);
																					BgL_arg1229z00_936 =
																						BgL_res3287z00_2949;
																				}
																			}
																			{	/* Ieee/number.scm 493 */
																				bool_t BgL_res3288z00_2952;

																				{	/* Ieee/number.scm 493 */
																					uint64_t BgL_n2z00_2951;

																					BgL_n2z00_2951 =
																						BGL_BINT64_TO_INT64(BgL_yz00_29);
																					BgL_res3288z00_2952 =
																						(BgL_arg1229z00_936 ==
																						BgL_n2z00_2951);
																				}
																				return BgL_res3288z00_2952;
																			}
																		}
																	else
																		{	/* Ieee/number.scm 493 */
																			if (BIGNUMP(BgL_yz00_29))
																				{	/* Ieee/number.scm 493 */
																					obj_t BgL_arg1242z00_940;

																					{	/* Ieee/number.scm 493 */
																						obj_t BgL_arg1243z00_941;

																						BgL_arg1243z00_941 =
																							BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																							(BgL_xz00_28);
																						{	/* Ieee/number.scm 493 */
																							long BgL_xz00_2954;

																							BgL_xz00_2954 =
																								BELONG_TO_LONG
																								(BgL_arg1243z00_941);
																							BgL_arg1242z00_940 =
																								bgl_long_to_bignum
																								(BgL_xz00_2954);
																					}}
																					return
																						(
																						(long) (bgl_bignum_cmp
																							(BgL_arg1242z00_940,
																								BgL_yz00_29)) == ((long) 0));
																				}
																			else
																				{	/* Ieee/number.scm 493 */
																					return
																						CBOOL(BGl_errorz00zz__errorz00
																						(BGl_string4843z00zz__r4_numbers_6_5z00,
																							BGl_string4844z00zz__r4_numbers_6_5z00,
																							BgL_yz00_29));
																				}
																		}
																}
														}
												}
										}
								}
							else
								{	/* Ieee/number.scm 493 */
									if (LLONGP(BgL_xz00_28))
										{	/* Ieee/number.scm 493 */
											if (INTEGERP(BgL_yz00_29))
												{	/* Ieee/number.scm 493 */
													BGL_LONGLONG_T BgL_arg1247z00_945;

													{	/* Ieee/number.scm 493 */
														BGL_LONGLONG_T BgL_res3295z00_2965;

														{	/* Ieee/number.scm 493 */
															long BgL_tmpz00_7165;

															BgL_tmpz00_7165 = (long) CINT(BgL_yz00_29);
															BgL_res3295z00_2965 =
																LONG_TO_LLONG(BgL_tmpz00_7165);
														}
														BgL_arg1247z00_945 = BgL_res3295z00_2965;
													}
													return
														(BLLONG_TO_LLONG(BgL_xz00_28) ==
														BgL_arg1247z00_945);
												}
											else
												{	/* Ieee/number.scm 493 */
													if (REALP(BgL_yz00_29))
														{	/* Ieee/number.scm 493 */
															return
																(
																(double) (BLLONG_TO_LLONG(BgL_xz00_28)) ==
																REAL_TO_DOUBLE(BgL_yz00_29));
														}
													else
														{	/* Ieee/number.scm 493 */
															if (LLONGP(BgL_yz00_29))
																{	/* Ieee/number.scm 493 */
																	return
																		(BLLONG_TO_LLONG(BgL_xz00_28) ==
																		BLLONG_TO_LLONG(BgL_yz00_29));
																}
															else
																{	/* Ieee/number.scm 493 */
																	if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00
																		(BgL_yz00_29))
																		{	/* Ieee/number.scm 493 */
																			BGL_LONGLONG_T BgL_arg1258z00_953;

																			{	/* Ieee/number.scm 493 */
																				obj_t BgL_arg1263z00_954;

																				BgL_arg1263z00_954 =
																					BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																					(BgL_yz00_29);
																				BgL_arg1258z00_953 =
																					(BGL_LONGLONG_T) (BELONG_TO_LONG
																					(BgL_arg1263z00_954));
																			}
																			return
																				(BLLONG_TO_LLONG(BgL_xz00_28) ==
																				BgL_arg1258z00_953);
																		}
																	else
																		{	/* Ieee/number.scm 493 */
																			if (BIGNUMP(BgL_yz00_29))
																				{	/* Ieee/number.scm 493 */
																					return
																						(
																						(long) (bgl_bignum_cmp
																							(bgl_llong_to_bignum
																								(BLLONG_TO_LLONG(BgL_xz00_28)),
																								BgL_yz00_29)) == ((long) 0));
																				}
																			else
																				{	/* Ieee/number.scm 493 */
																					if (BGL_UINT64P(BgL_yz00_29))
																						{	/* Ieee/number.scm 493 */
																							uint64_t BgL_arg1273z00_959;

																							{	/* Ieee/number.scm 493 */
																								uint64_t BgL_res3307z00_2991;

																								{	/* Ieee/number.scm 493 */
																									BGL_LONGLONG_T
																										BgL_tmpz00_7197;
																									BgL_tmpz00_7197 =
																										BLLONG_TO_LLONG
																										(BgL_xz00_28);
																									BgL_res3307z00_2991 =
																										(uint64_t)
																										(BgL_tmpz00_7197);
																								}
																								BgL_arg1273z00_959 =
																									BgL_res3307z00_2991;
																							}
																							{	/* Ieee/number.scm 493 */
																								bool_t BgL_res3308z00_2994;

																								{	/* Ieee/number.scm 493 */
																									uint64_t BgL_n2z00_2993;

																									BgL_n2z00_2993 =
																										BGL_BINT64_TO_INT64
																										(BgL_yz00_29);
																									BgL_res3308z00_2994 =
																										(BgL_arg1273z00_959 ==
																										BgL_n2z00_2993);
																								}
																								return BgL_res3308z00_2994;
																							}
																						}
																					else
																						{	/* Ieee/number.scm 493 */
																							return
																								CBOOL(BGl_errorz00zz__errorz00
																								(BGl_string4843z00zz__r4_numbers_6_5z00,
																									BGl_string4844z00zz__r4_numbers_6_5z00,
																									BgL_yz00_29));
																						}
																				}
																		}
																}
														}
												}
										}
									else
										{	/* Ieee/number.scm 493 */
											if (BGL_UINT64P(BgL_xz00_28))
												{	/* Ieee/number.scm 493 */
													if (INTEGERP(BgL_yz00_29))
														{	/* Ieee/number.scm 493 */
															uint64_t BgL_arg1276z00_962;

															{	/* Ieee/number.scm 493 */
																uint64_t BgL_res3311z00_2998;

																{	/* Ieee/number.scm 493 */
																	long BgL_tmpz00_7208;

																	BgL_tmpz00_7208 = (long) CINT(BgL_yz00_29);
																	BgL_res3311z00_2998 =
																		(uint64_t) (BgL_tmpz00_7208);
																}
																BgL_arg1276z00_962 = BgL_res3311z00_2998;
															}
															{	/* Ieee/number.scm 493 */
																bool_t BgL_res3312z00_3001;

																{	/* Ieee/number.scm 493 */
																	uint64_t BgL_n1z00_2999;

																	BgL_n1z00_2999 =
																		BGL_BINT64_TO_INT64(BgL_xz00_28);
																	BgL_res3312z00_3001 =
																		(BgL_n1z00_2999 == BgL_arg1276z00_962);
																}
																return BgL_res3312z00_3001;
															}
														}
													else
														{	/* Ieee/number.scm 493 */
															if (BGL_UINT64P(BgL_yz00_29))
																{	/* Ieee/number.scm 493 */
																	bool_t BgL_res3314z00_3005;

																	{	/* Ieee/number.scm 493 */
																		uint64_t BgL_n1z00_3003;
																		uint64_t BgL_n2z00_3004;

																		BgL_n1z00_3003 =
																			BGL_BINT64_TO_INT64(BgL_xz00_28);
																		BgL_n2z00_3004 =
																			BGL_BINT64_TO_INT64(BgL_yz00_29);
																		BgL_res3314z00_3005 =
																			(BgL_n1z00_3003 == BgL_n2z00_3004);
																	}
																	return BgL_res3314z00_3005;
																}
															else
																{	/* Ieee/number.scm 493 */
																	if (REALP(BgL_yz00_29))
																		{	/* Ieee/number.scm 493 */
																			double BgL_arg1280z00_965;

																			{	/* Ieee/number.scm 493 */
																				uint64_t BgL_tmpz00_7220;

																				BgL_tmpz00_7220 =
																					BGL_BINT64_TO_INT64(BgL_xz00_28);
																				BgL_arg1280z00_965 =
																					(double) (BgL_tmpz00_7220);
																			}
																			return
																				(BgL_arg1280z00_965 ==
																				REAL_TO_DOUBLE(BgL_yz00_29));
																		}
																	else
																		{	/* Ieee/number.scm 493 */
																			if (LLONGP(BgL_yz00_29))
																				{	/* Ieee/number.scm 493 */
																					uint64_t BgL_arg1282z00_967;

																					{	/* Ieee/number.scm 493 */
																						uint64_t BgL_res3318z00_3012;

																						{	/* Ieee/number.scm 493 */
																							BGL_LONGLONG_T BgL_tmpz00_7227;

																							BgL_tmpz00_7227 =
																								BLLONG_TO_LLONG(BgL_yz00_29);
																							BgL_res3318z00_3012 =
																								(uint64_t) (BgL_tmpz00_7227);
																						}
																						BgL_arg1282z00_967 =
																							BgL_res3318z00_3012;
																					}
																					{	/* Ieee/number.scm 493 */
																						bool_t BgL_res3319z00_3015;

																						{	/* Ieee/number.scm 493 */
																							uint64_t BgL_n1z00_3013;

																							BgL_n1z00_3013 =
																								BGL_BINT64_TO_INT64
																								(BgL_xz00_28);
																							BgL_res3319z00_3015 =
																								(BgL_n1z00_3013 ==
																								BgL_arg1282z00_967);
																						}
																						return BgL_res3319z00_3015;
																					}
																				}
																			else
																				{	/* Ieee/number.scm 493 */
																					if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_29))
																						{	/* Ieee/number.scm 493 */
																							uint64_t BgL_arg1286z00_970;

																							{	/* Ieee/number.scm 493 */
																								BGL_LONGLONG_T
																									BgL_arg1287z00_971;
																								{	/* Ieee/number.scm 493 */
																									obj_t BgL_arg1288z00_972;

																									BgL_arg1288z00_972 =
																										BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																										(BgL_yz00_29);
																									BgL_arg1287z00_971 =
																										(BGL_LONGLONG_T)
																										(BELONG_TO_LONG
																										(BgL_arg1288z00_972));
																								}
																								{	/* Ieee/number.scm 493 */
																									uint64_t BgL_res3320z00_3017;

																									BgL_res3320z00_3017 =
																										(uint64_t)
																										(BgL_arg1287z00_971);
																									BgL_arg1286z00_970 =
																										BgL_res3320z00_3017;
																								}
																							}
																							{	/* Ieee/number.scm 493 */
																								bool_t BgL_res3321z00_3020;

																								{	/* Ieee/number.scm 493 */
																									uint64_t BgL_n1z00_3018;

																									BgL_n1z00_3018 =
																										BGL_BINT64_TO_INT64
																										(BgL_xz00_28);
																									BgL_res3321z00_3020 =
																										(BgL_n1z00_3018 ==
																										BgL_arg1286z00_970);
																								}
																								return BgL_res3321z00_3020;
																							}
																						}
																					else
																						{	/* Ieee/number.scm 493 */
																							if (BIGNUMP(BgL_yz00_29))
																								{	/* Ieee/number.scm 493 */
																									long BgL_n1z00_3025;

																									BgL_n1z00_3025 =
																										(long) (bgl_bignum_cmp
																										(bgl_uint64_to_bignum
																											(BGL_BINT64_TO_INT64
																												(BgL_xz00_28)),
																											BgL_yz00_29));
																									return (BgL_n1z00_3025 ==
																										((long) 0));
																								}
																							else
																								{	/* Ieee/number.scm 493 */
																									return
																										CBOOL
																										(BGl_errorz00zz__errorz00
																										(BGl_string4843z00zz__r4_numbers_6_5z00,
																											BGl_string4845z00zz__r4_numbers_6_5z00,
																											BgL_yz00_29));
																								}
																						}
																				}
																		}
																}
														}
												}
											else
												{	/* Ieee/number.scm 493 */
													if (BIGNUMP(BgL_xz00_28))
														{	/* Ieee/number.scm 493 */
															if (BIGNUMP(BgL_yz00_29))
																{	/* Ieee/number.scm 493 */
																	return
																		(
																		(long) (bgl_bignum_cmp(BgL_xz00_28,
																				BgL_yz00_29)) == ((long) 0));
																}
															else
																{	/* Ieee/number.scm 493 */
																	if (INTEGERP(BgL_yz00_29))
																		{	/* Ieee/number.scm 493 */
																			return
																				(
																				(long) (bgl_bignum_cmp(BgL_xz00_28,
																						bgl_long_to_bignum(
																							(long) CINT(BgL_yz00_29)))) ==
																				((long) 0));
																		}
																	else
																		{	/* Ieee/number.scm 493 */
																			if (REALP(BgL_yz00_29))
																				{	/* Ieee/number.scm 493 */
																					return
																						(bgl_bignum_to_flonum(BgL_xz00_28)
																						== REAL_TO_DOUBLE(BgL_yz00_29));
																				}
																			else
																				{	/* Ieee/number.scm 493 */
																					if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_29))
																						{	/* Ieee/number.scm 493 */
																							obj_t BgL_arg1299z00_982;

																							{	/* Ieee/number.scm 493 */
																								obj_t BgL_arg1300z00_983;

																								BgL_arg1300z00_983 =
																									BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																									(BgL_yz00_29);
																								{	/* Ieee/number.scm 493 */
																									long BgL_xz00_3051;

																									BgL_xz00_3051 =
																										BELONG_TO_LONG
																										(BgL_arg1300z00_983);
																									BgL_arg1299z00_982 =
																										bgl_long_to_bignum
																										(BgL_xz00_3051);
																							}}
																							return
																								(
																								(long) (bgl_bignum_cmp
																									(BgL_xz00_28,
																										BgL_arg1299z00_982)) ==
																								((long) 0));
																						}
																					else
																						{	/* Ieee/number.scm 493 */
																							if (LLONGP(BgL_yz00_29))
																								{	/* Ieee/number.scm 493 */
																									return
																										(
																										(long) (bgl_bignum_cmp
																											(BgL_xz00_28,
																												bgl_llong_to_bignum
																												(BLLONG_TO_LLONG
																													(BgL_yz00_29)))) ==
																										((long) 0));
																								}
																							else
																								{	/* Ieee/number.scm 493 */
																									if (BGL_UINT64P(BgL_yz00_29))
																										{	/* Ieee/number.scm 493 */
																											long BgL_n1z00_3072;

																											BgL_n1z00_3072 =
																												(long) (bgl_bignum_cmp
																												(BgL_xz00_28,
																													bgl_uint64_to_bignum
																													(BGL_BINT64_TO_INT64
																														(BgL_yz00_29))));
																											return (BgL_n1z00_3072 ==
																												((long) 0));
																										}
																									else
																										{	/* Ieee/number.scm 493 */
																											return
																												CBOOL
																												(BGl_errorz00zz__errorz00
																												(BGl_string4843z00zz__r4_numbers_6_5z00,
																													BGl_string4844z00zz__r4_numbers_6_5z00,
																													BgL_yz00_29));
																										}
																								}
																						}
																				}
																		}
																}
														}
													else
														{	/* Ieee/number.scm 493 */
															return
																CBOOL(BGl_errorz00zz__errorz00
																(BGl_string4843z00zz__r4_numbers_6_5z00,
																	BGl_string4844z00zz__r4_numbers_6_5z00,
																	BgL_xz00_28));
														}
												}
										}
								}
						}
				}
		}

	}



/* &2= */
	obj_t BGl_z622zd3zb1zz__r4_numbers_6_5z00(obj_t BgL_envz00_6521,
		obj_t BgL_xz00_6522, obj_t BgL_yz00_6523)
	{
		{	/* Ieee/number.scm 492 */
			return
				BBOOL(BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_xz00_6522, BgL_yz00_6523));
		}

	}



/* = */
	BGL_EXPORTED_DEF bool_t BGl_zd3zd3zz__r4_numbers_6_5z00(obj_t BgL_xz00_30,
		obj_t BgL_yz00_31, obj_t BgL_za7za7_32)
	{
		{	/* Ieee/number.scm 498 */
			if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_xz00_30, BgL_yz00_31))
				{
					obj_t BgL_za7za7_3098;

					BgL_za7za7_3098 = BgL_za7za7_32;
				BgL_zd3zd2listz01_3097:
					if (NULLP(BgL_za7za7_3098))
						{	/* Ieee/number.scm 501 */
							return ((bool_t) 1);
						}
					else
						{	/* Ieee/number.scm 502 */
							bool_t BgL_test5124z00_7300;

							{	/* Ieee/number.scm 502 */
								obj_t BgL_arg1312z00_3101;

								BgL_arg1312z00_3101 = CAR(((obj_t) BgL_za7za7_3098));
								BgL_test5124z00_7300 =
									BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_yz00_31,
									BgL_arg1312z00_3101);
							}
							if (BgL_test5124z00_7300)
								{
									obj_t BgL_za7za7_7304;

									BgL_za7za7_7304 = CDR(((obj_t) BgL_za7za7_3098));
									BgL_za7za7_3098 = BgL_za7za7_7304;
									goto BgL_zd3zd2listz01_3097;
								}
							else
								{	/* Ieee/number.scm 502 */
									return ((bool_t) 0);
								}
						}
				}
			else
				{	/* Ieee/number.scm 504 */
					return ((bool_t) 0);
				}
		}

	}



/* &= */
	obj_t BGl_z62zd3zb1zz__r4_numbers_6_5z00(obj_t BgL_envz00_6524,
		obj_t BgL_xz00_6525, obj_t BgL_yz00_6526, obj_t BgL_za7za7_6527)
	{
		{	/* Ieee/number.scm 498 */
			return
				BBOOL(BGl_zd3zd3zz__r4_numbers_6_5z00(BgL_xz00_6525, BgL_yz00_6526,
					BgL_za7za7_6527));
		}

	}



/* 2< */
	BGL_EXPORTED_DEF bool_t BGl_2zc3zc3zz__r4_numbers_6_5z00(obj_t BgL_xz00_33,
		obj_t BgL_yz00_34)
	{
		{	/* Ieee/number.scm 509 */
			if (INTEGERP(BgL_xz00_33))
				{	/* Ieee/number.scm 510 */
					if (INTEGERP(BgL_yz00_34))
						{	/* Ieee/number.scm 510 */
							return ((long) CINT(BgL_xz00_33) < (long) CINT(BgL_yz00_34));
						}
					else
						{	/* Ieee/number.scm 510 */
							if (REALP(BgL_yz00_34))
								{	/* Ieee/number.scm 510 */
									return
										(
										(double) (
											(long) CINT(BgL_xz00_33)) < REAL_TO_DOUBLE(BgL_yz00_34));
								}
							else
								{	/* Ieee/number.scm 510 */
									if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_34))
										{	/* Ieee/number.scm 510 */
											long BgL_arg1318z00_1005;
											obj_t BgL_arg1319z00_1006;

											{	/* Ieee/number.scm 510 */
												long BgL_res3354z00_3116;

												{	/* Ieee/number.scm 510 */
													long BgL_tmpz00_7324;

													BgL_tmpz00_7324 = (long) CINT(BgL_xz00_33);
													BgL_res3354z00_3116 = (long) (BgL_tmpz00_7324);
												}
												BgL_arg1318z00_1005 = BgL_res3354z00_3116;
											}
											BgL_arg1319z00_1006 =
												BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
												(BgL_yz00_34);
											{	/* Ieee/number.scm 510 */
												long BgL_n2z00_3118;

												BgL_n2z00_3118 = BELONG_TO_LONG(BgL_arg1319z00_1006);
												return (BgL_arg1318z00_1005 < BgL_n2z00_3118);
											}
										}
									else
										{	/* Ieee/number.scm 510 */
											if (LLONGP(BgL_yz00_34))
												{	/* Ieee/number.scm 510 */
													BGL_LONGLONG_T BgL_arg1322z00_1008;

													{	/* Ieee/number.scm 510 */
														BGL_LONGLONG_T BgL_res3357z00_3122;

														{	/* Ieee/number.scm 510 */
															long BgL_tmpz00_7332;

															BgL_tmpz00_7332 = (long) CINT(BgL_xz00_33);
															BgL_res3357z00_3122 =
																LONG_TO_LLONG(BgL_tmpz00_7332);
														}
														BgL_arg1322z00_1008 = BgL_res3357z00_3122;
													}
													return
														(BgL_arg1322z00_1008 <
														BLLONG_TO_LLONG(BgL_yz00_34));
												}
											else
												{	/* Ieee/number.scm 510 */
													if (BGL_UINT64P(BgL_yz00_34))
														{	/* Ieee/number.scm 510 */
															uint64_t BgL_arg1326z00_1011;

															{	/* Ieee/number.scm 510 */
																BGL_LONGLONG_T BgL_arg1327z00_1012;

																{	/* Ieee/number.scm 510 */
																	BGL_LONGLONG_T BgL_res3360z00_3128;

																	{	/* Ieee/number.scm 510 */
																		long BgL_tmpz00_7339;

																		BgL_tmpz00_7339 = (long) CINT(BgL_xz00_33);
																		BgL_res3360z00_3128 =
																			LONG_TO_LLONG(BgL_tmpz00_7339);
																	}
																	BgL_arg1327z00_1012 = BgL_res3360z00_3128;
																}
																{	/* Ieee/number.scm 510 */
																	uint64_t BgL_res3361z00_3130;

																	BgL_res3361z00_3130 =
																		(uint64_t) (BgL_arg1327z00_1012);
																	BgL_arg1326z00_1011 = BgL_res3361z00_3130;
															}}
															{	/* Ieee/number.scm 510 */
																uint64_t BgL_n2z00_3132;

																BgL_n2z00_3132 =
																	BGL_BINT64_TO_INT64(BgL_yz00_34);
																return (BgL_arg1326z00_1011 < BgL_n2z00_3132);
															}
														}
													else
														{	/* Ieee/number.scm 510 */
															if (BIGNUMP(BgL_yz00_34))
																{	/* Ieee/number.scm 510 */
																	return
																		(
																		(long) (bgl_bignum_cmp(bgl_long_to_bignum(
																					(long) CINT(BgL_xz00_33)),
																				BgL_yz00_34)) < ((long) 0));
																}
															else
																{	/* Ieee/number.scm 510 */
																	return
																		CBOOL(BGl_errorz00zz__errorz00
																		(BGl_string4846z00zz__r4_numbers_6_5z00,
																			BGl_string4844z00zz__r4_numbers_6_5z00,
																			BgL_yz00_34));
																}
														}
												}
										}
								}
						}
				}
			else
				{	/* Ieee/number.scm 510 */
					if (REALP(BgL_xz00_33))
						{	/* Ieee/number.scm 510 */
							if (REALP(BgL_yz00_34))
								{	/* Ieee/number.scm 510 */
									return
										(REAL_TO_DOUBLE(BgL_xz00_33) < REAL_TO_DOUBLE(BgL_yz00_34));
								}
							else
								{	/* Ieee/number.scm 510 */
									if (INTEGERP(BgL_yz00_34))
										{	/* Ieee/number.scm 510 */
											return
												(REAL_TO_DOUBLE(BgL_xz00_33) <
												(double) ((long) CINT(BgL_yz00_34)));
										}
									else
										{	/* Ieee/number.scm 510 */
											if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00
												(BgL_yz00_34))
												{	/* Ieee/number.scm 510 */
													double BgL_arg1335z00_1020;

													{	/* Ieee/number.scm 510 */
														obj_t BgL_arg1337z00_1021;

														BgL_arg1337z00_1021 =
															BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
															(BgL_yz00_34);
														BgL_arg1335z00_1020 =
															(double) (BELONG_TO_LONG(BgL_arg1337z00_1021));
													}
													return
														(REAL_TO_DOUBLE(BgL_xz00_33) < BgL_arg1335z00_1020);
												}
											else
												{	/* Ieee/number.scm 510 */
													if (LLONGP(BgL_yz00_34))
														{	/* Ieee/number.scm 510 */
															return
																(REAL_TO_DOUBLE(BgL_xz00_33) <
																(double) (BLLONG_TO_LLONG(BgL_yz00_34)));
														}
													else
														{	/* Ieee/number.scm 510 */
															if (BGL_UINT64P(BgL_yz00_34))
																{	/* Ieee/number.scm 510 */
																	double BgL_arg1342z00_1026;

																	{	/* Ieee/number.scm 510 */
																		double BgL_res3376z00_3161;

																		{	/* Ieee/number.scm 510 */
																			uint64_t BgL_xz00_3160;

																			BgL_xz00_3160 =
																				BGL_BINT64_TO_INT64(BgL_yz00_34);
																			BgL_res3376z00_3161 =
																				(double) (BgL_xz00_3160);
																		}
																		BgL_arg1342z00_1026 = BgL_res3376z00_3161;
																	}
																	return
																		(REAL_TO_DOUBLE(BgL_xz00_33) <
																		BgL_arg1342z00_1026);
																}
															else
																{	/* Ieee/number.scm 510 */
																	if (BIGNUMP(BgL_yz00_34))
																		{	/* Ieee/number.scm 510 */
																			return
																				(REAL_TO_DOUBLE(BgL_xz00_33) <
																				bgl_bignum_to_flonum(BgL_yz00_34));
																		}
																	else
																		{	/* Ieee/number.scm 510 */
																			return
																				CBOOL(BGl_errorz00zz__errorz00
																				(BGl_string4846z00zz__r4_numbers_6_5z00,
																					BGl_string4844z00zz__r4_numbers_6_5z00,
																					BgL_yz00_34));
																		}
																}
														}
												}
										}
								}
						}
					else
						{	/* Ieee/number.scm 510 */
							if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_xz00_33))
								{	/* Ieee/number.scm 510 */
									if (INTEGERP(BgL_yz00_34))
										{	/* Ieee/number.scm 510 */
											obj_t BgL_arg1347z00_1031;
											long BgL_arg1348z00_1032;

											BgL_arg1347z00_1031 =
												BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
												(BgL_xz00_33);
											{	/* Ieee/number.scm 510 */
												long BgL_res3382z00_3173;

												{	/* Ieee/number.scm 510 */
													long BgL_tmpz00_7398;

													BgL_tmpz00_7398 = (long) CINT(BgL_yz00_34);
													BgL_res3382z00_3173 = (long) (BgL_tmpz00_7398);
												}
												BgL_arg1348z00_1032 = BgL_res3382z00_3173;
											}
											{	/* Ieee/number.scm 510 */
												long BgL_n1z00_3174;

												BgL_n1z00_3174 = BELONG_TO_LONG(BgL_arg1347z00_1031);
												return (BgL_n1z00_3174 < BgL_arg1348z00_1032);
											}
										}
									else
										{	/* Ieee/number.scm 510 */
											if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00
												(BgL_yz00_34))
												{	/* Ieee/number.scm 510 */
													obj_t BgL_arg1350z00_1034;
													obj_t BgL_arg1351z00_1035;

													BgL_arg1350z00_1034 =
														BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
														(BgL_xz00_33);
													BgL_arg1351z00_1035 =
														BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
														(BgL_yz00_34);
													{	/* Ieee/number.scm 510 */
														long BgL_n1z00_3177;
														long BgL_n2z00_3178;

														BgL_n1z00_3177 =
															BELONG_TO_LONG(BgL_arg1350z00_1034);
														BgL_n2z00_3178 =
															BELONG_TO_LONG(BgL_arg1351z00_1035);
														return (BgL_n1z00_3177 < BgL_n2z00_3178);
													}
												}
											else
												{	/* Ieee/number.scm 510 */
													if (REALP(BgL_yz00_34))
														{	/* Ieee/number.scm 510 */
															double BgL_arg1353z00_1037;

															{	/* Ieee/number.scm 510 */
																obj_t BgL_arg1354z00_1038;

																BgL_arg1354z00_1038 =
																	BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																	(BgL_xz00_33);
																BgL_arg1353z00_1037 =
																	(double) (BELONG_TO_LONG
																	(BgL_arg1354z00_1038));
															}
															return
																(BgL_arg1353z00_1037 <
																REAL_TO_DOUBLE(BgL_yz00_34));
														}
													else
														{	/* Ieee/number.scm 510 */
															if (LLONGP(BgL_yz00_34))
																{	/* Ieee/number.scm 510 */
																	BGL_LONGLONG_T BgL_arg1356z00_1040;

																	{	/* Ieee/number.scm 510 */
																		obj_t BgL_arg1359z00_1042;

																		BgL_arg1359z00_1042 =
																			BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																			(BgL_xz00_33);
																		BgL_arg1356z00_1040 =
																			(BGL_LONGLONG_T) (BELONG_TO_LONG
																			(BgL_arg1359z00_1042));
																	}
																	return
																		(BgL_arg1356z00_1040 <
																		BLLONG_TO_LLONG(BgL_yz00_34));
																}
															else
																{	/* Ieee/number.scm 510 */
																	if (BGL_UINT64P(BgL_yz00_34))
																		{	/* Ieee/number.scm 510 */
																			uint64_t BgL_arg1361z00_1044;

																			{	/* Ieee/number.scm 510 */
																				BGL_LONGLONG_T BgL_arg1362z00_1045;

																				{	/* Ieee/number.scm 510 */
																					obj_t BgL_arg1363z00_1046;

																					BgL_arg1363z00_1046 =
																						BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																						(BgL_xz00_33);
																					BgL_arg1362z00_1045 =
																						(BGL_LONGLONG_T) (BELONG_TO_LONG
																						(BgL_arg1363z00_1046));
																				}
																				{	/* Ieee/number.scm 510 */
																					uint64_t BgL_res3390z00_3190;

																					BgL_res3390z00_3190 =
																						(uint64_t) (BgL_arg1362z00_1045);
																					BgL_arg1361z00_1044 =
																						BgL_res3390z00_3190;
																				}
																			}
																			{	/* Ieee/number.scm 510 */
																				uint64_t BgL_n2z00_3192;

																				BgL_n2z00_3192 =
																					BGL_BINT64_TO_INT64(BgL_yz00_34);
																				return
																					(BgL_arg1361z00_1044 <
																					BgL_n2z00_3192);
																			}
																		}
																	else
																		{	/* Ieee/number.scm 510 */
																			if (BIGNUMP(BgL_yz00_34))
																				{	/* Ieee/number.scm 510 */
																					obj_t BgL_arg1365z00_1048;

																					{	/* Ieee/number.scm 510 */
																						obj_t BgL_arg1367z00_1049;

																						BgL_arg1367z00_1049 =
																							BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																							(BgL_xz00_33);
																						{	/* Ieee/number.scm 510 */
																							long BgL_xz00_3195;

																							BgL_xz00_3195 =
																								BELONG_TO_LONG
																								(BgL_arg1367z00_1049);
																							BgL_arg1365z00_1048 =
																								bgl_long_to_bignum
																								(BgL_xz00_3195);
																					}}
																					return
																						(
																						(long) (bgl_bignum_cmp
																							(BgL_arg1365z00_1048,
																								BgL_yz00_34)) < ((long) 0));
																				}
																			else
																				{	/* Ieee/number.scm 510 */
																					return
																						CBOOL(BGl_errorz00zz__errorz00
																						(BGl_string4846z00zz__r4_numbers_6_5z00,
																							BGl_string4844z00zz__r4_numbers_6_5z00,
																							BgL_yz00_34));
																				}
																		}
																}
														}
												}
										}
								}
							else
								{	/* Ieee/number.scm 510 */
									if (LLONGP(BgL_xz00_33))
										{	/* Ieee/number.scm 510 */
											if (INTEGERP(BgL_yz00_34))
												{	/* Ieee/number.scm 510 */
													BGL_LONGLONG_T BgL_arg1371z00_1053;

													{	/* Ieee/number.scm 510 */
														BGL_LONGLONG_T BgL_res3398z00_3206;

														{	/* Ieee/number.scm 510 */
															long BgL_tmpz00_7446;

															BgL_tmpz00_7446 = (long) CINT(BgL_yz00_34);
															BgL_res3398z00_3206 =
																LONG_TO_LLONG(BgL_tmpz00_7446);
														}
														BgL_arg1371z00_1053 = BgL_res3398z00_3206;
													}
													return
														(BLLONG_TO_LLONG(BgL_xz00_33) <
														BgL_arg1371z00_1053);
												}
											else
												{	/* Ieee/number.scm 510 */
													if (REALP(BgL_yz00_34))
														{	/* Ieee/number.scm 510 */
															return
																(
																(double) (BLLONG_TO_LLONG(BgL_xz00_33)) <
																REAL_TO_DOUBLE(BgL_yz00_34));
														}
													else
														{	/* Ieee/number.scm 510 */
															if (LLONGP(BgL_yz00_34))
																{	/* Ieee/number.scm 510 */
																	return
																		(BLLONG_TO_LLONG(BgL_xz00_33) <
																		BLLONG_TO_LLONG(BgL_yz00_34));
																}
															else
																{	/* Ieee/number.scm 510 */
																	if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00
																		(BgL_yz00_34))
																		{	/* Ieee/number.scm 510 */
																			BGL_LONGLONG_T BgL_arg1379z00_1061;

																			{	/* Ieee/number.scm 510 */
																				obj_t BgL_arg1380z00_1062;

																				BgL_arg1380z00_1062 =
																					BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																					(BgL_yz00_34);
																				BgL_arg1379z00_1061 =
																					(BGL_LONGLONG_T) (BELONG_TO_LONG
																					(BgL_arg1380z00_1062));
																			}
																			return
																				(BLLONG_TO_LLONG(BgL_xz00_33) <
																				BgL_arg1379z00_1061);
																		}
																	else
																		{	/* Ieee/number.scm 510 */
																			if (BIGNUMP(BgL_yz00_34))
																				{	/* Ieee/number.scm 510 */
																					return
																						(
																						(long) (bgl_bignum_cmp
																							(bgl_llong_to_bignum
																								(BLLONG_TO_LLONG(BgL_xz00_33)),
																								BgL_yz00_34)) < ((long) 0));
																				}
																			else
																				{	/* Ieee/number.scm 510 */
																					if (BGL_UINT64P(BgL_yz00_34))
																						{	/* Ieee/number.scm 510 */
																							uint64_t BgL_arg1385z00_1067;

																							{	/* Ieee/number.scm 510 */
																								uint64_t BgL_res3410z00_3232;

																								{	/* Ieee/number.scm 510 */
																									BGL_LONGLONG_T
																										BgL_tmpz00_7478;
																									BgL_tmpz00_7478 =
																										BLLONG_TO_LLONG
																										(BgL_xz00_33);
																									BgL_res3410z00_3232 =
																										(uint64_t)
																										(BgL_tmpz00_7478);
																								}
																								BgL_arg1385z00_1067 =
																									BgL_res3410z00_3232;
																							}
																							{	/* Ieee/number.scm 510 */
																								uint64_t BgL_n2z00_3234;

																								BgL_n2z00_3234 =
																									BGL_BINT64_TO_INT64
																									(BgL_yz00_34);
																								return (BgL_arg1385z00_1067 <
																									BgL_n2z00_3234);
																							}
																						}
																					else
																						{	/* Ieee/number.scm 510 */
																							return
																								CBOOL(BGl_errorz00zz__errorz00
																								(BGl_string4846z00zz__r4_numbers_6_5z00,
																									BGl_string4844z00zz__r4_numbers_6_5z00,
																									BgL_yz00_34));
																						}
																				}
																		}
																}
														}
												}
										}
									else
										{	/* Ieee/number.scm 510 */
											if (BGL_UINT64P(BgL_xz00_33))
												{	/* Ieee/number.scm 510 */
													if (INTEGERP(BgL_yz00_34))
														{	/* Ieee/number.scm 510 */
															uint64_t BgL_arg1388z00_1070;

															{	/* Ieee/number.scm 510 */
																uint64_t BgL_res3414z00_3239;

																{	/* Ieee/number.scm 510 */
																	long BgL_tmpz00_7489;

																	BgL_tmpz00_7489 = (long) CINT(BgL_yz00_34);
																	BgL_res3414z00_3239 =
																		(uint64_t) (BgL_tmpz00_7489);
																}
																BgL_arg1388z00_1070 = BgL_res3414z00_3239;
															}
															{	/* Ieee/number.scm 510 */
																uint64_t BgL_n1z00_3240;

																BgL_n1z00_3240 =
																	BGL_BINT64_TO_INT64(BgL_xz00_33);
																return (BgL_n1z00_3240 < BgL_arg1388z00_1070);
															}
														}
													else
														{	/* Ieee/number.scm 510 */
															if (BGL_UINT64P(BgL_yz00_34))
																{	/* Ieee/number.scm 510 */
																	uint64_t BgL_n1z00_3244;
																	uint64_t BgL_n2z00_3245;

																	BgL_n1z00_3244 =
																		BGL_BINT64_TO_INT64(BgL_xz00_33);
																	BgL_n2z00_3245 =
																		BGL_BINT64_TO_INT64(BgL_yz00_34);
																	return (BgL_n1z00_3244 < BgL_n2z00_3245);
																}
															else
																{	/* Ieee/number.scm 510 */
																	if (REALP(BgL_yz00_34))
																		{	/* Ieee/number.scm 510 */
																			double BgL_arg1391z00_1073;

																			{	/* Ieee/number.scm 510 */
																				uint64_t BgL_tmpz00_7501;

																				BgL_tmpz00_7501 =
																					BGL_BINT64_TO_INT64(BgL_xz00_33);
																				BgL_arg1391z00_1073 =
																					(double) (BgL_tmpz00_7501);
																			}
																			return
																				(BgL_arg1391z00_1073 <
																				REAL_TO_DOUBLE(BgL_yz00_34));
																		}
																	else
																		{	/* Ieee/number.scm 510 */
																			if (LLONGP(BgL_yz00_34))
																				{	/* Ieee/number.scm 510 */
																					uint64_t BgL_arg1393z00_1075;

																					{	/* Ieee/number.scm 510 */
																						uint64_t BgL_res3421z00_3253;

																						{	/* Ieee/number.scm 510 */
																							BGL_LONGLONG_T BgL_tmpz00_7508;

																							BgL_tmpz00_7508 =
																								BLLONG_TO_LLONG(BgL_yz00_34);
																							BgL_res3421z00_3253 =
																								(uint64_t) (BgL_tmpz00_7508);
																						}
																						BgL_arg1393z00_1075 =
																							BgL_res3421z00_3253;
																					}
																					{	/* Ieee/number.scm 510 */
																						uint64_t BgL_n1z00_3254;

																						BgL_n1z00_3254 =
																							BGL_BINT64_TO_INT64(BgL_xz00_33);
																						return
																							(BgL_n1z00_3254 <
																							BgL_arg1393z00_1075);
																					}
																				}
																			else
																				{	/* Ieee/number.scm 510 */
																					if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_34))
																						{	/* Ieee/number.scm 510 */
																							uint64_t BgL_arg1396z00_1078;

																							{	/* Ieee/number.scm 510 */
																								BGL_LONGLONG_T
																									BgL_arg1397z00_1079;
																								{	/* Ieee/number.scm 510 */
																									obj_t BgL_arg1398z00_1080;

																									BgL_arg1398z00_1080 =
																										BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																										(BgL_yz00_34);
																									BgL_arg1397z00_1079 =
																										(BGL_LONGLONG_T)
																										(BELONG_TO_LONG
																										(BgL_arg1398z00_1080));
																								}
																								{	/* Ieee/number.scm 510 */
																									uint64_t BgL_res3423z00_3258;

																									BgL_res3423z00_3258 =
																										(uint64_t)
																										(BgL_arg1397z00_1079);
																									BgL_arg1396z00_1078 =
																										BgL_res3423z00_3258;
																								}
																							}
																							{	/* Ieee/number.scm 510 */
																								uint64_t BgL_n1z00_3259;

																								BgL_n1z00_3259 =
																									BGL_BINT64_TO_INT64
																									(BgL_xz00_33);
																								return (BgL_n1z00_3259 <
																									BgL_arg1396z00_1078);
																							}
																						}
																					else
																						{	/* Ieee/number.scm 510 */
																							if (BIGNUMP(BgL_yz00_34))
																								{	/* Ieee/number.scm 510 */
																									long BgL_n1z00_3266;

																									BgL_n1z00_3266 =
																										(long) (bgl_bignum_cmp
																										(bgl_uint64_to_bignum
																											(BGL_BINT64_TO_INT64
																												(BgL_xz00_33)),
																											BgL_yz00_34));
																									return (BgL_n1z00_3266 <
																										((long) 0));
																								}
																							else
																								{	/* Ieee/number.scm 510 */
																									return
																										CBOOL
																										(BGl_errorz00zz__errorz00
																										(BGl_string4846z00zz__r4_numbers_6_5z00,
																											BGl_string4845z00zz__r4_numbers_6_5z00,
																											BgL_yz00_34));
																								}
																						}
																				}
																		}
																}
														}
												}
											else
												{	/* Ieee/number.scm 510 */
													if (BIGNUMP(BgL_xz00_33))
														{	/* Ieee/number.scm 510 */
															if (BIGNUMP(BgL_yz00_34))
																{	/* Ieee/number.scm 510 */
																	return
																		(
																		(long) (bgl_bignum_cmp(BgL_xz00_33,
																				BgL_yz00_34)) < ((long) 0));
																}
															else
																{	/* Ieee/number.scm 510 */
																	if (INTEGERP(BgL_yz00_34))
																		{	/* Ieee/number.scm 510 */
																			return
																				(
																				(long) (bgl_bignum_cmp(BgL_xz00_33,
																						bgl_long_to_bignum(
																							(long) CINT(BgL_yz00_34)))) <
																				((long) 0));
																		}
																	else
																		{	/* Ieee/number.scm 510 */
																			if (REALP(BgL_yz00_34))
																				{	/* Ieee/number.scm 510 */
																					return
																						(bgl_bignum_to_flonum(BgL_xz00_33) <
																						REAL_TO_DOUBLE(BgL_yz00_34));
																				}
																			else
																				{	/* Ieee/number.scm 510 */
																					if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_34))
																						{	/* Ieee/number.scm 510 */
																							obj_t BgL_arg1409z00_1090;

																							{	/* Ieee/number.scm 510 */
																								obj_t BgL_arg1410z00_1091;

																								BgL_arg1410z00_1091 =
																									BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																									(BgL_yz00_34);
																								{	/* Ieee/number.scm 510 */
																									long BgL_xz00_3292;

																									BgL_xz00_3292 =
																										BELONG_TO_LONG
																										(BgL_arg1410z00_1091);
																									BgL_arg1409z00_1090 =
																										bgl_long_to_bignum
																										(BgL_xz00_3292);
																							}}
																							return
																								(
																								(long) (bgl_bignum_cmp
																									(BgL_xz00_33,
																										BgL_arg1409z00_1090)) <
																								((long) 0));
																						}
																					else
																						{	/* Ieee/number.scm 510 */
																							if (LLONGP(BgL_yz00_34))
																								{	/* Ieee/number.scm 510 */
																									return
																										(
																										(long) (bgl_bignum_cmp
																											(BgL_xz00_33,
																												bgl_llong_to_bignum
																												(BLLONG_TO_LLONG
																													(BgL_yz00_34)))) <
																										((long) 0));
																								}
																							else
																								{	/* Ieee/number.scm 510 */
																									if (BGL_UINT64P(BgL_yz00_34))
																										{	/* Ieee/number.scm 510 */
																											long BgL_n1z00_3313;

																											BgL_n1z00_3313 =
																												(long) (bgl_bignum_cmp
																												(BgL_xz00_33,
																													bgl_uint64_to_bignum
																													(BGL_BINT64_TO_INT64
																														(BgL_yz00_34))));
																											return (BgL_n1z00_3313 <
																												((long) 0));
																										}
																									else
																										{	/* Ieee/number.scm 510 */
																											return
																												CBOOL
																												(BGl_errorz00zz__errorz00
																												(BGl_string4846z00zz__r4_numbers_6_5z00,
																													BGl_string4844z00zz__r4_numbers_6_5z00,
																													BgL_yz00_34));
																										}
																								}
																						}
																				}
																		}
																}
														}
													else
														{	/* Ieee/number.scm 510 */
															return
																CBOOL(BGl_errorz00zz__errorz00
																(BGl_string4846z00zz__r4_numbers_6_5z00,
																	BGl_string4844z00zz__r4_numbers_6_5z00,
																	BgL_xz00_33));
														}
												}
										}
								}
						}
				}
		}

	}



/* &2< */
	obj_t BGl_z622zc3za1zz__r4_numbers_6_5z00(obj_t BgL_envz00_6528,
		obj_t BgL_xz00_6529, obj_t BgL_yz00_6530)
	{
		{	/* Ieee/number.scm 509 */
			return
				BBOOL(BGl_2zc3zc3zz__r4_numbers_6_5z00(BgL_xz00_6529, BgL_yz00_6530));
		}

	}



/* < */
	BGL_EXPORTED_DEF bool_t BGl_zc3zc3zz__r4_numbers_6_5z00(obj_t BgL_xz00_35,
		obj_t BgL_yz00_36, obj_t BgL_za7za7_37)
	{
		{	/* Ieee/number.scm 515 */
			if (BGl_2zc3zc3zz__r4_numbers_6_5z00(BgL_xz00_35, BgL_yz00_36))
				{
					obj_t BgL_xz00_3335;
					obj_t BgL_za7za7_3336;

					BgL_xz00_3335 = BgL_yz00_36;
					BgL_za7za7_3336 = BgL_za7za7_37;
				BgL_zc3zd2listz11_3334:
					if (NULLP(BgL_za7za7_3336))
						{	/* Ieee/number.scm 518 */
							return ((bool_t) 1);
						}
					else
						{	/* Ieee/number.scm 519 */
							bool_t BgL_test5169z00_7581;

							{	/* Ieee/number.scm 519 */
								obj_t BgL_arg1422z00_3344;

								BgL_arg1422z00_3344 = CAR(((obj_t) BgL_za7za7_3336));
								BgL_test5169z00_7581 =
									BGl_2zc3zc3zz__r4_numbers_6_5z00(BgL_xz00_3335,
									BgL_arg1422z00_3344);
							}
							if (BgL_test5169z00_7581)
								{
									obj_t BgL_za7za7_7588;
									obj_t BgL_xz00_7585;

									BgL_xz00_7585 = CAR(((obj_t) BgL_za7za7_3336));
									BgL_za7za7_7588 = CDR(((obj_t) BgL_za7za7_3336));
									BgL_za7za7_3336 = BgL_za7za7_7588;
									BgL_xz00_3335 = BgL_xz00_7585;
									goto BgL_zc3zd2listz11_3334;
								}
							else
								{	/* Ieee/number.scm 519 */
									return ((bool_t) 0);
								}
						}
				}
			else
				{	/* Ieee/number.scm 521 */
					return ((bool_t) 0);
				}
		}

	}



/* &< */
	obj_t BGl_z62zc3za1zz__r4_numbers_6_5z00(obj_t BgL_envz00_6531,
		obj_t BgL_xz00_6532, obj_t BgL_yz00_6533, obj_t BgL_za7za7_6534)
	{
		{	/* Ieee/number.scm 515 */
			return
				BBOOL(BGl_zc3zc3zz__r4_numbers_6_5z00(BgL_xz00_6532, BgL_yz00_6533,
					BgL_za7za7_6534));
		}

	}



/* 2> */
	BGL_EXPORTED_DEF bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t BgL_xz00_38,
		obj_t BgL_yz00_39)
	{
		{	/* Ieee/number.scm 526 */
			if (INTEGERP(BgL_xz00_38))
				{	/* Ieee/number.scm 527 */
					if (INTEGERP(BgL_yz00_39))
						{	/* Ieee/number.scm 527 */
							return ((long) CINT(BgL_xz00_38) > (long) CINT(BgL_yz00_39));
						}
					else
						{	/* Ieee/number.scm 527 */
							if (REALP(BgL_yz00_39))
								{	/* Ieee/number.scm 527 */
									return
										(
										(double) (
											(long) CINT(BgL_xz00_38)) > REAL_TO_DOUBLE(BgL_yz00_39));
								}
							else
								{	/* Ieee/number.scm 527 */
									if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_39))
										{	/* Ieee/number.scm 527 */
											long BgL_arg1428z00_1114;
											obj_t BgL_arg1429z00_1115;

											{	/* Ieee/number.scm 527 */
												long BgL_res3457z00_3361;

												{	/* Ieee/number.scm 527 */
													long BgL_tmpz00_7608;

													BgL_tmpz00_7608 = (long) CINT(BgL_xz00_38);
													BgL_res3457z00_3361 = (long) (BgL_tmpz00_7608);
												}
												BgL_arg1428z00_1114 = BgL_res3457z00_3361;
											}
											BgL_arg1429z00_1115 =
												BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
												(BgL_yz00_39);
											{	/* Ieee/number.scm 527 */
												long BgL_n2z00_3363;

												BgL_n2z00_3363 = BELONG_TO_LONG(BgL_arg1429z00_1115);
												return (BgL_arg1428z00_1114 > BgL_n2z00_3363);
											}
										}
									else
										{	/* Ieee/number.scm 527 */
											if (LLONGP(BgL_yz00_39))
												{	/* Ieee/number.scm 527 */
													BGL_LONGLONG_T BgL_arg1431z00_1117;

													{	/* Ieee/number.scm 527 */
														BGL_LONGLONG_T BgL_res3460z00_3367;

														{	/* Ieee/number.scm 527 */
															long BgL_tmpz00_7616;

															BgL_tmpz00_7616 = (long) CINT(BgL_xz00_38);
															BgL_res3460z00_3367 =
																LONG_TO_LLONG(BgL_tmpz00_7616);
														}
														BgL_arg1431z00_1117 = BgL_res3460z00_3367;
													}
													return
														(BgL_arg1431z00_1117 >
														BLLONG_TO_LLONG(BgL_yz00_39));
												}
											else
												{	/* Ieee/number.scm 527 */
													if (BGL_UINT64P(BgL_yz00_39))
														{	/* Ieee/number.scm 527 */
															uint64_t BgL_arg1434z00_1120;

															{	/* Ieee/number.scm 527 */
																BGL_LONGLONG_T BgL_arg1435z00_1121;

																{	/* Ieee/number.scm 527 */
																	BGL_LONGLONG_T BgL_res3463z00_3373;

																	{	/* Ieee/number.scm 527 */
																		long BgL_tmpz00_7623;

																		BgL_tmpz00_7623 = (long) CINT(BgL_xz00_38);
																		BgL_res3463z00_3373 =
																			LONG_TO_LLONG(BgL_tmpz00_7623);
																	}
																	BgL_arg1435z00_1121 = BgL_res3463z00_3373;
																}
																{	/* Ieee/number.scm 527 */
																	uint64_t BgL_res3464z00_3375;

																	BgL_res3464z00_3375 =
																		(uint64_t) (BgL_arg1435z00_1121);
																	BgL_arg1434z00_1120 = BgL_res3464z00_3375;
															}}
															{	/* Ieee/number.scm 527 */
																uint64_t BgL_n2z00_3377;

																BgL_n2z00_3377 =
																	BGL_BINT64_TO_INT64(BgL_yz00_39);
																return (BgL_arg1434z00_1120 > BgL_n2z00_3377);
															}
														}
													else
														{	/* Ieee/number.scm 527 */
															if (BIGNUMP(BgL_yz00_39))
																{	/* Ieee/number.scm 527 */
																	return
																		(
																		(long) (bgl_bignum_cmp(bgl_long_to_bignum(
																					(long) CINT(BgL_xz00_38)),
																				BgL_yz00_39)) > ((long) 0));
																}
															else
																{	/* Ieee/number.scm 527 */
																	return
																		CBOOL(BGl_errorz00zz__errorz00
																		(BGl_string4847z00zz__r4_numbers_6_5z00,
																			BGl_string4844z00zz__r4_numbers_6_5z00,
																			BgL_yz00_39));
																}
														}
												}
										}
								}
						}
				}
			else
				{	/* Ieee/number.scm 527 */
					if (REALP(BgL_xz00_38))
						{	/* Ieee/number.scm 527 */
							if (REALP(BgL_yz00_39))
								{	/* Ieee/number.scm 527 */
									return
										(REAL_TO_DOUBLE(BgL_xz00_38) > REAL_TO_DOUBLE(BgL_yz00_39));
								}
							else
								{	/* Ieee/number.scm 527 */
									if (INTEGERP(BgL_yz00_39))
										{	/* Ieee/number.scm 527 */
											return
												(REAL_TO_DOUBLE(BgL_xz00_38) >
												(double) ((long) CINT(BgL_yz00_39)));
										}
									else
										{	/* Ieee/number.scm 527 */
											if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00
												(BgL_yz00_39))
												{	/* Ieee/number.scm 527 */
													double BgL_arg1443z00_1129;

													{	/* Ieee/number.scm 527 */
														obj_t BgL_arg1444z00_1130;

														BgL_arg1444z00_1130 =
															BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
															(BgL_yz00_39);
														BgL_arg1443z00_1129 =
															(double) (BELONG_TO_LONG(BgL_arg1444z00_1130));
													}
													return
														(REAL_TO_DOUBLE(BgL_xz00_38) > BgL_arg1443z00_1129);
												}
											else
												{	/* Ieee/number.scm 527 */
													if (LLONGP(BgL_yz00_39))
														{	/* Ieee/number.scm 527 */
															return
																(REAL_TO_DOUBLE(BgL_xz00_38) >
																(double) (BLLONG_TO_LLONG(BgL_yz00_39)));
														}
													else
														{	/* Ieee/number.scm 527 */
															if (BGL_UINT64P(BgL_yz00_39))
																{	/* Ieee/number.scm 527 */
																	double BgL_arg1451z00_1135;

																	{	/* Ieee/number.scm 527 */
																		double BgL_res3479z00_3406;

																		{	/* Ieee/number.scm 527 */
																			uint64_t BgL_xz00_3405;

																			BgL_xz00_3405 =
																				BGL_BINT64_TO_INT64(BgL_yz00_39);
																			BgL_res3479z00_3406 =
																				(double) (BgL_xz00_3405);
																		}
																		BgL_arg1451z00_1135 = BgL_res3479z00_3406;
																	}
																	return
																		(REAL_TO_DOUBLE(BgL_xz00_38) >
																		BgL_arg1451z00_1135);
																}
															else
																{	/* Ieee/number.scm 527 */
																	if (BIGNUMP(BgL_yz00_39))
																		{	/* Ieee/number.scm 527 */
																			return
																				(REAL_TO_DOUBLE(BgL_xz00_38) >
																				bgl_bignum_to_flonum(BgL_yz00_39));
																		}
																	else
																		{	/* Ieee/number.scm 527 */
																			return
																				CBOOL(BGl_errorz00zz__errorz00
																				(BGl_string4847z00zz__r4_numbers_6_5z00,
																					BGl_string4844z00zz__r4_numbers_6_5z00,
																					BgL_yz00_39));
																		}
																}
														}
												}
										}
								}
						}
					else
						{	/* Ieee/number.scm 527 */
							if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_xz00_38))
								{	/* Ieee/number.scm 527 */
									if (INTEGERP(BgL_yz00_39))
										{	/* Ieee/number.scm 527 */
											obj_t BgL_arg1456z00_1140;
											long BgL_arg1457z00_1141;

											BgL_arg1456z00_1140 =
												BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
												(BgL_xz00_38);
											{	/* Ieee/number.scm 527 */
												long BgL_res3485z00_3418;

												{	/* Ieee/number.scm 527 */
													long BgL_tmpz00_7682;

													BgL_tmpz00_7682 = (long) CINT(BgL_yz00_39);
													BgL_res3485z00_3418 = (long) (BgL_tmpz00_7682);
												}
												BgL_arg1457z00_1141 = BgL_res3485z00_3418;
											}
											{	/* Ieee/number.scm 527 */
												long BgL_n1z00_3419;

												BgL_n1z00_3419 = BELONG_TO_LONG(BgL_arg1456z00_1140);
												return (BgL_n1z00_3419 > BgL_arg1457z00_1141);
											}
										}
									else
										{	/* Ieee/number.scm 527 */
											if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00
												(BgL_yz00_39))
												{	/* Ieee/number.scm 527 */
													obj_t BgL_arg1459z00_1143;
													obj_t BgL_arg1460z00_1144;

													BgL_arg1459z00_1143 =
														BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
														(BgL_xz00_38);
													BgL_arg1460z00_1144 =
														BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
														(BgL_yz00_39);
													{	/* Ieee/number.scm 527 */
														long BgL_n1z00_3422;
														long BgL_n2z00_3423;

														BgL_n1z00_3422 =
															BELONG_TO_LONG(BgL_arg1459z00_1143);
														BgL_n2z00_3423 =
															BELONG_TO_LONG(BgL_arg1460z00_1144);
														return (BgL_n1z00_3422 > BgL_n2z00_3423);
													}
												}
											else
												{	/* Ieee/number.scm 527 */
													if (REALP(BgL_yz00_39))
														{	/* Ieee/number.scm 527 */
															double BgL_arg1462z00_1146;

															{	/* Ieee/number.scm 527 */
																obj_t BgL_arg1463z00_1147;

																BgL_arg1463z00_1147 =
																	BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																	(BgL_xz00_38);
																BgL_arg1462z00_1146 =
																	(double) (BELONG_TO_LONG
																	(BgL_arg1463z00_1147));
															}
															return
																(BgL_arg1462z00_1146 >
																REAL_TO_DOUBLE(BgL_yz00_39));
														}
													else
														{	/* Ieee/number.scm 527 */
															if (LLONGP(BgL_yz00_39))
																{	/* Ieee/number.scm 527 */
																	BGL_LONGLONG_T BgL_arg1465z00_1149;

																	{	/* Ieee/number.scm 527 */
																		obj_t BgL_arg1467z00_1151;

																		BgL_arg1467z00_1151 =
																			BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																			(BgL_xz00_38);
																		BgL_arg1465z00_1149 =
																			(BGL_LONGLONG_T) (BELONG_TO_LONG
																			(BgL_arg1467z00_1151));
																	}
																	return
																		(BgL_arg1465z00_1149 >
																		BLLONG_TO_LLONG(BgL_yz00_39));
																}
															else
																{	/* Ieee/number.scm 527 */
																	if (BGL_UINT64P(BgL_yz00_39))
																		{	/* Ieee/number.scm 527 */
																			uint64_t BgL_arg1469z00_1153;

																			{	/* Ieee/number.scm 527 */
																				BGL_LONGLONG_T BgL_arg1470z00_1154;

																				{	/* Ieee/number.scm 527 */
																					obj_t BgL_arg1471z00_1155;

																					BgL_arg1471z00_1155 =
																						BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																						(BgL_xz00_38);
																					BgL_arg1470z00_1154 =
																						(BGL_LONGLONG_T) (BELONG_TO_LONG
																						(BgL_arg1471z00_1155));
																				}
																				{	/* Ieee/number.scm 527 */
																					uint64_t BgL_res3493z00_3435;

																					BgL_res3493z00_3435 =
																						(uint64_t) (BgL_arg1470z00_1154);
																					BgL_arg1469z00_1153 =
																						BgL_res3493z00_3435;
																				}
																			}
																			{	/* Ieee/number.scm 527 */
																				uint64_t BgL_n2z00_3437;

																				BgL_n2z00_3437 =
																					BGL_BINT64_TO_INT64(BgL_yz00_39);
																				return
																					(BgL_arg1469z00_1153 >
																					BgL_n2z00_3437);
																			}
																		}
																	else
																		{	/* Ieee/number.scm 527 */
																			if (BIGNUMP(BgL_yz00_39))
																				{	/* Ieee/number.scm 527 */
																					obj_t BgL_arg1473z00_1157;

																					{	/* Ieee/number.scm 527 */
																						obj_t BgL_arg1474z00_1158;

																						BgL_arg1474z00_1158 =
																							BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																							(BgL_xz00_38);
																						{	/* Ieee/number.scm 527 */
																							long BgL_xz00_3440;

																							BgL_xz00_3440 =
																								BELONG_TO_LONG
																								(BgL_arg1474z00_1158);
																							BgL_arg1473z00_1157 =
																								bgl_long_to_bignum
																								(BgL_xz00_3440);
																					}}
																					return
																						(
																						(long) (bgl_bignum_cmp
																							(BgL_arg1473z00_1157,
																								BgL_yz00_39)) > ((long) 0));
																				}
																			else
																				{	/* Ieee/number.scm 527 */
																					return
																						CBOOL(BGl_errorz00zz__errorz00
																						(BGl_string4847z00zz__r4_numbers_6_5z00,
																							BGl_string4844z00zz__r4_numbers_6_5z00,
																							BgL_yz00_39));
																				}
																		}
																}
														}
												}
										}
								}
							else
								{	/* Ieee/number.scm 527 */
									if (LLONGP(BgL_xz00_38))
										{	/* Ieee/number.scm 527 */
											if (INTEGERP(BgL_yz00_39))
												{	/* Ieee/number.scm 527 */
													BGL_LONGLONG_T BgL_arg1478z00_1162;

													{	/* Ieee/number.scm 527 */
														BGL_LONGLONG_T BgL_res3501z00_3451;

														{	/* Ieee/number.scm 527 */
															long BgL_tmpz00_7730;

															BgL_tmpz00_7730 = (long) CINT(BgL_yz00_39);
															BgL_res3501z00_3451 =
																LONG_TO_LLONG(BgL_tmpz00_7730);
														}
														BgL_arg1478z00_1162 = BgL_res3501z00_3451;
													}
													return
														(BLLONG_TO_LLONG(BgL_xz00_38) >
														BgL_arg1478z00_1162);
												}
											else
												{	/* Ieee/number.scm 527 */
													if (REALP(BgL_yz00_39))
														{	/* Ieee/number.scm 527 */
															return
																(
																(double) (BLLONG_TO_LLONG(BgL_xz00_38)) >
																REAL_TO_DOUBLE(BgL_yz00_39));
														}
													else
														{	/* Ieee/number.scm 527 */
															if (LLONGP(BgL_yz00_39))
																{	/* Ieee/number.scm 527 */
																	return
																		(BLLONG_TO_LLONG(BgL_xz00_38) >
																		BLLONG_TO_LLONG(BgL_yz00_39));
																}
															else
																{	/* Ieee/number.scm 527 */
																	if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00
																		(BgL_yz00_39))
																		{	/* Ieee/number.scm 527 */
																			BGL_LONGLONG_T BgL_arg1487z00_1170;

																			{	/* Ieee/number.scm 527 */
																				obj_t BgL_arg1489z00_1171;

																				BgL_arg1489z00_1171 =
																					BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																					(BgL_yz00_39);
																				BgL_arg1487z00_1170 =
																					(BGL_LONGLONG_T) (BELONG_TO_LONG
																					(BgL_arg1489z00_1171));
																			}
																			return
																				(BLLONG_TO_LLONG(BgL_xz00_38) >
																				BgL_arg1487z00_1170);
																		}
																	else
																		{	/* Ieee/number.scm 527 */
																			if (BIGNUMP(BgL_yz00_39))
																				{	/* Ieee/number.scm 527 */
																					return
																						(
																						(long) (bgl_bignum_cmp
																							(bgl_llong_to_bignum
																								(BLLONG_TO_LLONG(BgL_xz00_38)),
																								BgL_yz00_39)) > ((long) 0));
																				}
																			else
																				{	/* Ieee/number.scm 527 */
																					if (BGL_UINT64P(BgL_yz00_39))
																						{	/* Ieee/number.scm 527 */
																							uint64_t BgL_arg1494z00_1176;

																							{	/* Ieee/number.scm 527 */
																								uint64_t BgL_res3513z00_3477;

																								{	/* Ieee/number.scm 527 */
																									BGL_LONGLONG_T
																										BgL_tmpz00_7762;
																									BgL_tmpz00_7762 =
																										BLLONG_TO_LLONG
																										(BgL_xz00_38);
																									BgL_res3513z00_3477 =
																										(uint64_t)
																										(BgL_tmpz00_7762);
																								}
																								BgL_arg1494z00_1176 =
																									BgL_res3513z00_3477;
																							}
																							{	/* Ieee/number.scm 527 */
																								uint64_t BgL_n2z00_3479;

																								BgL_n2z00_3479 =
																									BGL_BINT64_TO_INT64
																									(BgL_yz00_39);
																								return (BgL_arg1494z00_1176 >
																									BgL_n2z00_3479);
																							}
																						}
																					else
																						{	/* Ieee/number.scm 527 */
																							return
																								CBOOL(BGl_errorz00zz__errorz00
																								(BGl_string4847z00zz__r4_numbers_6_5z00,
																									BGl_string4844z00zz__r4_numbers_6_5z00,
																									BgL_yz00_39));
																						}
																				}
																		}
																}
														}
												}
										}
									else
										{	/* Ieee/number.scm 527 */
											if (BGL_UINT64P(BgL_xz00_38))
												{	/* Ieee/number.scm 527 */
													if (INTEGERP(BgL_yz00_39))
														{	/* Ieee/number.scm 527 */
															uint64_t BgL_arg1497z00_1179;

															{	/* Ieee/number.scm 527 */
																uint64_t BgL_res3517z00_3484;

																{	/* Ieee/number.scm 527 */
																	long BgL_tmpz00_7773;

																	BgL_tmpz00_7773 = (long) CINT(BgL_yz00_39);
																	BgL_res3517z00_3484 =
																		(uint64_t) (BgL_tmpz00_7773);
																}
																BgL_arg1497z00_1179 = BgL_res3517z00_3484;
															}
															{	/* Ieee/number.scm 527 */
																uint64_t BgL_n1z00_3485;

																BgL_n1z00_3485 =
																	BGL_BINT64_TO_INT64(BgL_xz00_38);
																return (BgL_n1z00_3485 > BgL_arg1497z00_1179);
															}
														}
													else
														{	/* Ieee/number.scm 527 */
															if (BGL_UINT64P(BgL_yz00_39))
																{	/* Ieee/number.scm 527 */
																	uint64_t BgL_n1z00_3489;
																	uint64_t BgL_n2z00_3490;

																	BgL_n1z00_3489 =
																		BGL_BINT64_TO_INT64(BgL_xz00_38);
																	BgL_n2z00_3490 =
																		BGL_BINT64_TO_INT64(BgL_yz00_39);
																	return (BgL_n1z00_3489 > BgL_n2z00_3490);
																}
															else
																{	/* Ieee/number.scm 527 */
																	if (REALP(BgL_yz00_39))
																		{	/* Ieee/number.scm 527 */
																			double BgL_arg1500z00_1182;

																			{	/* Ieee/number.scm 527 */
																				uint64_t BgL_tmpz00_7785;

																				BgL_tmpz00_7785 =
																					BGL_BINT64_TO_INT64(BgL_xz00_38);
																				BgL_arg1500z00_1182 =
																					(double) (BgL_tmpz00_7785);
																			}
																			return
																				(BgL_arg1500z00_1182 >
																				REAL_TO_DOUBLE(BgL_yz00_39));
																		}
																	else
																		{	/* Ieee/number.scm 527 */
																			if (LLONGP(BgL_yz00_39))
																				{	/* Ieee/number.scm 527 */
																					uint64_t BgL_arg1502z00_1184;

																					{	/* Ieee/number.scm 527 */
																						uint64_t BgL_res3524z00_3498;

																						{	/* Ieee/number.scm 527 */
																							BGL_LONGLONG_T BgL_tmpz00_7792;

																							BgL_tmpz00_7792 =
																								BLLONG_TO_LLONG(BgL_yz00_39);
																							BgL_res3524z00_3498 =
																								(uint64_t) (BgL_tmpz00_7792);
																						}
																						BgL_arg1502z00_1184 =
																							BgL_res3524z00_3498;
																					}
																					{	/* Ieee/number.scm 527 */
																						uint64_t BgL_n1z00_3499;

																						BgL_n1z00_3499 =
																							BGL_BINT64_TO_INT64(BgL_xz00_38);
																						return
																							(BgL_n1z00_3499 >
																							BgL_arg1502z00_1184);
																					}
																				}
																			else
																				{	/* Ieee/number.scm 527 */
																					if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_39))
																						{	/* Ieee/number.scm 527 */
																							uint64_t BgL_arg1507z00_1187;

																							{	/* Ieee/number.scm 527 */
																								BGL_LONGLONG_T
																									BgL_arg1508z00_1188;
																								{	/* Ieee/number.scm 527 */
																									obj_t BgL_arg1509z00_1189;

																									BgL_arg1509z00_1189 =
																										BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																										(BgL_yz00_39);
																									BgL_arg1508z00_1188 =
																										(BGL_LONGLONG_T)
																										(BELONG_TO_LONG
																										(BgL_arg1509z00_1189));
																								}
																								{	/* Ieee/number.scm 527 */
																									uint64_t BgL_res3526z00_3503;

																									BgL_res3526z00_3503 =
																										(uint64_t)
																										(BgL_arg1508z00_1188);
																									BgL_arg1507z00_1187 =
																										BgL_res3526z00_3503;
																								}
																							}
																							{	/* Ieee/number.scm 527 */
																								uint64_t BgL_n1z00_3504;

																								BgL_n1z00_3504 =
																									BGL_BINT64_TO_INT64
																									(BgL_xz00_38);
																								return (BgL_n1z00_3504 >
																									BgL_arg1507z00_1187);
																							}
																						}
																					else
																						{	/* Ieee/number.scm 527 */
																							if (BIGNUMP(BgL_yz00_39))
																								{	/* Ieee/number.scm 527 */
																									long BgL_n1z00_3511;

																									BgL_n1z00_3511 =
																										(long) (bgl_bignum_cmp
																										(bgl_uint64_to_bignum
																											(BGL_BINT64_TO_INT64
																												(BgL_xz00_38)),
																											BgL_yz00_39));
																									return (BgL_n1z00_3511 >
																										((long) 0));
																								}
																							else
																								{	/* Ieee/number.scm 527 */
																									return
																										CBOOL
																										(BGl_errorz00zz__errorz00
																										(BGl_string4847z00zz__r4_numbers_6_5z00,
																											BGl_string4845z00zz__r4_numbers_6_5z00,
																											BgL_yz00_39));
																								}
																						}
																				}
																		}
																}
														}
												}
											else
												{	/* Ieee/number.scm 527 */
													if (BIGNUMP(BgL_xz00_38))
														{	/* Ieee/number.scm 527 */
															if (BIGNUMP(BgL_yz00_39))
																{	/* Ieee/number.scm 527 */
																	return
																		(
																		(long) (bgl_bignum_cmp(BgL_xz00_38,
																				BgL_yz00_39)) > ((long) 0));
																}
															else
																{	/* Ieee/number.scm 527 */
																	if (INTEGERP(BgL_yz00_39))
																		{	/* Ieee/number.scm 527 */
																			return
																				(
																				(long) (bgl_bignum_cmp(BgL_xz00_38,
																						bgl_long_to_bignum(
																							(long) CINT(BgL_yz00_39)))) >
																				((long) 0));
																		}
																	else
																		{	/* Ieee/number.scm 527 */
																			if (REALP(BgL_yz00_39))
																				{	/* Ieee/number.scm 527 */
																					return
																						(bgl_bignum_to_flonum(BgL_xz00_38) >
																						REAL_TO_DOUBLE(BgL_yz00_39));
																				}
																			else
																				{	/* Ieee/number.scm 527 */
																					if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_39))
																						{	/* Ieee/number.scm 527 */
																							obj_t BgL_arg1520z00_1199;

																							{	/* Ieee/number.scm 527 */
																								obj_t BgL_arg1521z00_1200;

																								BgL_arg1521z00_1200 =
																									BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																									(BgL_yz00_39);
																								{	/* Ieee/number.scm 527 */
																									long BgL_xz00_3537;

																									BgL_xz00_3537 =
																										BELONG_TO_LONG
																										(BgL_arg1521z00_1200);
																									BgL_arg1520z00_1199 =
																										bgl_long_to_bignum
																										(BgL_xz00_3537);
																							}}
																							return
																								(
																								(long) (bgl_bignum_cmp
																									(BgL_xz00_38,
																										BgL_arg1520z00_1199)) >
																								((long) 0));
																						}
																					else
																						{	/* Ieee/number.scm 527 */
																							if (LLONGP(BgL_yz00_39))
																								{	/* Ieee/number.scm 527 */
																									return
																										(
																										(long) (bgl_bignum_cmp
																											(BgL_xz00_38,
																												bgl_llong_to_bignum
																												(BLLONG_TO_LLONG
																													(BgL_yz00_39)))) >
																										((long) 0));
																								}
																							else
																								{	/* Ieee/number.scm 527 */
																									if (BGL_UINT64P(BgL_yz00_39))
																										{	/* Ieee/number.scm 527 */
																											long BgL_n1z00_3558;

																											BgL_n1z00_3558 =
																												(long) (bgl_bignum_cmp
																												(BgL_xz00_38,
																													bgl_uint64_to_bignum
																													(BGL_BINT64_TO_INT64
																														(BgL_yz00_39))));
																											return (BgL_n1z00_3558 >
																												((long) 0));
																										}
																									else
																										{	/* Ieee/number.scm 527 */
																											return
																												CBOOL
																												(BGl_errorz00zz__errorz00
																												(BGl_string4847z00zz__r4_numbers_6_5z00,
																													BGl_string4844z00zz__r4_numbers_6_5z00,
																													BgL_yz00_39));
																										}
																								}
																						}
																				}
																		}
																}
														}
													else
														{	/* Ieee/number.scm 527 */
															return
																CBOOL(BGl_errorz00zz__errorz00
																(BGl_string4847z00zz__r4_numbers_6_5z00,
																	BGl_string4844z00zz__r4_numbers_6_5z00,
																	BgL_xz00_38));
														}
												}
										}
								}
						}
				}
		}

	}



/* &2> */
	obj_t BGl_z622ze3z81zz__r4_numbers_6_5z00(obj_t BgL_envz00_6535,
		obj_t BgL_xz00_6536, obj_t BgL_yz00_6537)
	{
		{	/* Ieee/number.scm 526 */
			return
				BBOOL(BGl_2ze3ze3zz__r4_numbers_6_5z00(BgL_xz00_6536, BgL_yz00_6537));
		}

	}



/* > */
	BGL_EXPORTED_DEF bool_t BGl_ze3ze3zz__r4_numbers_6_5z00(obj_t BgL_xz00_40,
		obj_t BgL_yz00_41, obj_t BgL_za7za7_42)
	{
		{	/* Ieee/number.scm 532 */
			if (BGl_2ze3ze3zz__r4_numbers_6_5z00(BgL_xz00_40, BgL_yz00_41))
				{
					obj_t BgL_xz00_3580;
					obj_t BgL_za7za7_3581;

					BgL_xz00_3580 = BgL_yz00_41;
					BgL_za7za7_3581 = BgL_za7za7_42;
				BgL_ze3zd2listz31_3579:
					if (NULLP(BgL_za7za7_3581))
						{	/* Ieee/number.scm 535 */
							return ((bool_t) 1);
						}
					else
						{	/* Ieee/number.scm 536 */
							bool_t BgL_test5214z00_7865;

							{	/* Ieee/number.scm 536 */
								obj_t BgL_arg1534z00_3589;

								BgL_arg1534z00_3589 = CAR(((obj_t) BgL_za7za7_3581));
								BgL_test5214z00_7865 =
									BGl_2ze3ze3zz__r4_numbers_6_5z00(BgL_xz00_3580,
									BgL_arg1534z00_3589);
							}
							if (BgL_test5214z00_7865)
								{
									obj_t BgL_za7za7_7872;
									obj_t BgL_xz00_7869;

									BgL_xz00_7869 = CAR(((obj_t) BgL_za7za7_3581));
									BgL_za7za7_7872 = CDR(((obj_t) BgL_za7za7_3581));
									BgL_za7za7_3581 = BgL_za7za7_7872;
									BgL_xz00_3580 = BgL_xz00_7869;
									goto BgL_ze3zd2listz31_3579;
								}
							else
								{	/* Ieee/number.scm 536 */
									return ((bool_t) 0);
								}
						}
				}
			else
				{	/* Ieee/number.scm 538 */
					return ((bool_t) 0);
				}
		}

	}



/* &> */
	obj_t BGl_z62ze3z81zz__r4_numbers_6_5z00(obj_t BgL_envz00_6538,
		obj_t BgL_xz00_6539, obj_t BgL_yz00_6540, obj_t BgL_za7za7_6541)
	{
		{	/* Ieee/number.scm 532 */
			return
				BBOOL(BGl_ze3ze3zz__r4_numbers_6_5z00(BgL_xz00_6539, BgL_yz00_6540,
					BgL_za7za7_6541));
		}

	}



/* 2<= */
	BGL_EXPORTED_DEF bool_t BGl_2zc3zd3z10zz__r4_numbers_6_5z00(obj_t BgL_xz00_43,
		obj_t BgL_yz00_44)
	{
		{	/* Ieee/number.scm 543 */
			if (INTEGERP(BgL_xz00_43))
				{	/* Ieee/number.scm 544 */
					if (INTEGERP(BgL_yz00_44))
						{	/* Ieee/number.scm 544 */
							return ((long) CINT(BgL_xz00_43) <= (long) CINT(BgL_yz00_44));
						}
					else
						{	/* Ieee/number.scm 544 */
							if (REALP(BgL_yz00_44))
								{	/* Ieee/number.scm 544 */
									return
										(
										(double) (
											(long) CINT(BgL_xz00_43)) <= REAL_TO_DOUBLE(BgL_yz00_44));
								}
							else
								{	/* Ieee/number.scm 544 */
									if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_44))
										{	/* Ieee/number.scm 544 */
											long BgL_arg1542z00_1223;
											obj_t BgL_arg1544z00_1224;

											{	/* Ieee/number.scm 544 */
												long BgL_res3560z00_3606;

												{	/* Ieee/number.scm 544 */
													long BgL_tmpz00_7892;

													BgL_tmpz00_7892 = (long) CINT(BgL_xz00_43);
													BgL_res3560z00_3606 = (long) (BgL_tmpz00_7892);
												}
												BgL_arg1542z00_1223 = BgL_res3560z00_3606;
											}
											BgL_arg1544z00_1224 =
												BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
												(BgL_yz00_44);
											{	/* Ieee/number.scm 544 */
												long BgL_n2z00_3608;

												BgL_n2z00_3608 = BELONG_TO_LONG(BgL_arg1544z00_1224);
												return (BgL_arg1542z00_1223 <= BgL_n2z00_3608);
											}
										}
									else
										{	/* Ieee/number.scm 544 */
											if (LLONGP(BgL_yz00_44))
												{	/* Ieee/number.scm 544 */
													BGL_LONGLONG_T BgL_arg1546z00_1226;

													{	/* Ieee/number.scm 544 */
														BGL_LONGLONG_T BgL_res3563z00_3612;

														{	/* Ieee/number.scm 544 */
															long BgL_tmpz00_7900;

															BgL_tmpz00_7900 = (long) CINT(BgL_xz00_43);
															BgL_res3563z00_3612 =
																LONG_TO_LLONG(BgL_tmpz00_7900);
														}
														BgL_arg1546z00_1226 = BgL_res3563z00_3612;
													}
													return
														(BgL_arg1546z00_1226 <=
														BLLONG_TO_LLONG(BgL_yz00_44));
												}
											else
												{	/* Ieee/number.scm 544 */
													if (BGL_UINT64P(BgL_yz00_44))
														{	/* Ieee/number.scm 544 */
															uint64_t BgL_arg1551z00_1229;

															{	/* Ieee/number.scm 544 */
																BGL_LONGLONG_T BgL_arg1552z00_1230;

																{	/* Ieee/number.scm 544 */
																	BGL_LONGLONG_T BgL_res3566z00_3618;

																	{	/* Ieee/number.scm 544 */
																		long BgL_tmpz00_7907;

																		BgL_tmpz00_7907 = (long) CINT(BgL_xz00_43);
																		BgL_res3566z00_3618 =
																			LONG_TO_LLONG(BgL_tmpz00_7907);
																	}
																	BgL_arg1552z00_1230 = BgL_res3566z00_3618;
																}
																{	/* Ieee/number.scm 544 */
																	uint64_t BgL_res3567z00_3620;

																	BgL_res3567z00_3620 =
																		(uint64_t) (BgL_arg1552z00_1230);
																	BgL_arg1551z00_1229 = BgL_res3567z00_3620;
															}}
															{	/* Ieee/number.scm 544 */
																uint64_t BgL_n2z00_3622;

																BgL_n2z00_3622 =
																	BGL_BINT64_TO_INT64(BgL_yz00_44);
																return (BgL_arg1551z00_1229 <= BgL_n2z00_3622);
															}
														}
													else
														{	/* Ieee/number.scm 544 */
															if (BIGNUMP(BgL_yz00_44))
																{	/* Ieee/number.scm 544 */
																	return
																		(
																		(long) (bgl_bignum_cmp(bgl_long_to_bignum(
																					(long) CINT(BgL_xz00_43)),
																				BgL_yz00_44)) <= ((long) 0));
																}
															else
																{	/* Ieee/number.scm 544 */
																	return
																		CBOOL(BGl_errorz00zz__errorz00
																		(BGl_string4848z00zz__r4_numbers_6_5z00,
																			BGl_string4844z00zz__r4_numbers_6_5z00,
																			BgL_yz00_44));
																}
														}
												}
										}
								}
						}
				}
			else
				{	/* Ieee/number.scm 544 */
					if (REALP(BgL_xz00_43))
						{	/* Ieee/number.scm 544 */
							if (REALP(BgL_yz00_44))
								{	/* Ieee/number.scm 544 */
									return
										(REAL_TO_DOUBLE(BgL_xz00_43) <=
										REAL_TO_DOUBLE(BgL_yz00_44));
								}
							else
								{	/* Ieee/number.scm 544 */
									if (INTEGERP(BgL_yz00_44))
										{	/* Ieee/number.scm 544 */
											return
												(REAL_TO_DOUBLE(BgL_xz00_43) <=
												(double) ((long) CINT(BgL_yz00_44)));
										}
									else
										{	/* Ieee/number.scm 544 */
											if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00
												(BgL_yz00_44))
												{	/* Ieee/number.scm 544 */
													double BgL_arg1560z00_1238;

													{	/* Ieee/number.scm 544 */
														obj_t BgL_arg1561z00_1239;

														BgL_arg1561z00_1239 =
															BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
															(BgL_yz00_44);
														BgL_arg1560z00_1238 =
															(double) (BELONG_TO_LONG(BgL_arg1561z00_1239));
													}
													return
														(REAL_TO_DOUBLE(BgL_xz00_43) <=
														BgL_arg1560z00_1238);
												}
											else
												{	/* Ieee/number.scm 544 */
													if (LLONGP(BgL_yz00_44))
														{	/* Ieee/number.scm 544 */
															return
																(REAL_TO_DOUBLE(BgL_xz00_43) <=
																(double) (BLLONG_TO_LLONG(BgL_yz00_44)));
														}
													else
														{	/* Ieee/number.scm 544 */
															if (BGL_UINT64P(BgL_yz00_44))
																{	/* Ieee/number.scm 544 */
																	double BgL_arg1566z00_1244;

																	{	/* Ieee/number.scm 544 */
																		double BgL_res3582z00_3651;

																		{	/* Ieee/number.scm 544 */
																			uint64_t BgL_xz00_3650;

																			BgL_xz00_3650 =
																				BGL_BINT64_TO_INT64(BgL_yz00_44);
																			BgL_res3582z00_3651 =
																				(double) (BgL_xz00_3650);
																		}
																		BgL_arg1566z00_1244 = BgL_res3582z00_3651;
																	}
																	return
																		(REAL_TO_DOUBLE(BgL_xz00_43) <=
																		BgL_arg1566z00_1244);
																}
															else
																{	/* Ieee/number.scm 544 */
																	if (BIGNUMP(BgL_yz00_44))
																		{	/* Ieee/number.scm 544 */
																			return
																				(REAL_TO_DOUBLE(BgL_xz00_43) <=
																				bgl_bignum_to_flonum(BgL_yz00_44));
																		}
																	else
																		{	/* Ieee/number.scm 544 */
																			return
																				CBOOL(BGl_errorz00zz__errorz00
																				(BGl_string4848z00zz__r4_numbers_6_5z00,
																					BGl_string4844z00zz__r4_numbers_6_5z00,
																					BgL_yz00_44));
																		}
																}
														}
												}
										}
								}
						}
					else
						{	/* Ieee/number.scm 544 */
							if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_xz00_43))
								{	/* Ieee/number.scm 544 */
									if (INTEGERP(BgL_yz00_44))
										{	/* Ieee/number.scm 544 */
											obj_t BgL_arg1573z00_1249;
											long BgL_arg1574z00_1250;

											BgL_arg1573z00_1249 =
												BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
												(BgL_xz00_43);
											{	/* Ieee/number.scm 544 */
												long BgL_res3588z00_3663;

												{	/* Ieee/number.scm 544 */
													long BgL_tmpz00_7966;

													BgL_tmpz00_7966 = (long) CINT(BgL_yz00_44);
													BgL_res3588z00_3663 = (long) (BgL_tmpz00_7966);
												}
												BgL_arg1574z00_1250 = BgL_res3588z00_3663;
											}
											{	/* Ieee/number.scm 544 */
												long BgL_n1z00_3664;

												BgL_n1z00_3664 = BELONG_TO_LONG(BgL_arg1573z00_1249);
												return (BgL_n1z00_3664 <= BgL_arg1574z00_1250);
											}
										}
									else
										{	/* Ieee/number.scm 544 */
											if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00
												(BgL_yz00_44))
												{	/* Ieee/number.scm 544 */
													obj_t BgL_arg1577z00_1252;
													obj_t BgL_arg1578z00_1253;

													BgL_arg1577z00_1252 =
														BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
														(BgL_xz00_43);
													BgL_arg1578z00_1253 =
														BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
														(BgL_yz00_44);
													{	/* Ieee/number.scm 544 */
														long BgL_n1z00_3667;
														long BgL_n2z00_3668;

														BgL_n1z00_3667 =
															BELONG_TO_LONG(BgL_arg1577z00_1252);
														BgL_n2z00_3668 =
															BELONG_TO_LONG(BgL_arg1578z00_1253);
														return (BgL_n1z00_3667 <= BgL_n2z00_3668);
													}
												}
											else
												{	/* Ieee/number.scm 544 */
													if (REALP(BgL_yz00_44))
														{	/* Ieee/number.scm 544 */
															double BgL_arg1580z00_1255;

															{	/* Ieee/number.scm 544 */
																obj_t BgL_arg1582z00_1256;

																BgL_arg1582z00_1256 =
																	BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																	(BgL_xz00_43);
																BgL_arg1580z00_1255 =
																	(double) (BELONG_TO_LONG
																	(BgL_arg1582z00_1256));
															}
															return
																(BgL_arg1580z00_1255 <=
																REAL_TO_DOUBLE(BgL_yz00_44));
														}
													else
														{	/* Ieee/number.scm 544 */
															if (LLONGP(BgL_yz00_44))
																{	/* Ieee/number.scm 544 */
																	BGL_LONGLONG_T BgL_arg1584z00_1258;

																	{	/* Ieee/number.scm 544 */
																		obj_t BgL_arg1588z00_1260;

																		BgL_arg1588z00_1260 =
																			BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																			(BgL_xz00_43);
																		BgL_arg1584z00_1258 =
																			(BGL_LONGLONG_T) (BELONG_TO_LONG
																			(BgL_arg1588z00_1260));
																	}
																	return
																		(BgL_arg1584z00_1258 <=
																		BLLONG_TO_LLONG(BgL_yz00_44));
																}
															else
																{	/* Ieee/number.scm 544 */
																	if (BGL_UINT64P(BgL_yz00_44))
																		{	/* Ieee/number.scm 544 */
																			uint64_t BgL_arg1592z00_1262;

																			{	/* Ieee/number.scm 544 */
																				BGL_LONGLONG_T BgL_arg1593z00_1263;

																				{	/* Ieee/number.scm 544 */
																					obj_t BgL_arg1596z00_1264;

																					BgL_arg1596z00_1264 =
																						BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																						(BgL_xz00_43);
																					BgL_arg1593z00_1263 =
																						(BGL_LONGLONG_T) (BELONG_TO_LONG
																						(BgL_arg1596z00_1264));
																				}
																				{	/* Ieee/number.scm 544 */
																					uint64_t BgL_res3596z00_3680;

																					BgL_res3596z00_3680 =
																						(uint64_t) (BgL_arg1593z00_1263);
																					BgL_arg1592z00_1262 =
																						BgL_res3596z00_3680;
																				}
																			}
																			{	/* Ieee/number.scm 544 */
																				uint64_t BgL_n2z00_3682;

																				BgL_n2z00_3682 =
																					BGL_BINT64_TO_INT64(BgL_yz00_44);
																				return
																					(BgL_arg1592z00_1262 <=
																					BgL_n2z00_3682);
																			}
																		}
																	else
																		{	/* Ieee/number.scm 544 */
																			if (BIGNUMP(BgL_yz00_44))
																				{	/* Ieee/number.scm 544 */
																					obj_t BgL_arg1598z00_1266;

																					{	/* Ieee/number.scm 544 */
																						obj_t BgL_arg1599z00_1267;

																						BgL_arg1599z00_1267 =
																							BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																							(BgL_xz00_43);
																						{	/* Ieee/number.scm 544 */
																							long BgL_xz00_3685;

																							BgL_xz00_3685 =
																								BELONG_TO_LONG
																								(BgL_arg1599z00_1267);
																							BgL_arg1598z00_1266 =
																								bgl_long_to_bignum
																								(BgL_xz00_3685);
																					}}
																					return
																						(
																						(long) (bgl_bignum_cmp
																							(BgL_arg1598z00_1266,
																								BgL_yz00_44)) <= ((long) 0));
																				}
																			else
																				{	/* Ieee/number.scm 544 */
																					return
																						CBOOL(BGl_errorz00zz__errorz00
																						(BGl_string4848z00zz__r4_numbers_6_5z00,
																							BGl_string4844z00zz__r4_numbers_6_5z00,
																							BgL_yz00_44));
																				}
																		}
																}
														}
												}
										}
								}
							else
								{	/* Ieee/number.scm 544 */
									if (LLONGP(BgL_xz00_43))
										{	/* Ieee/number.scm 544 */
											if (INTEGERP(BgL_yz00_44))
												{	/* Ieee/number.scm 544 */
													BGL_LONGLONG_T BgL_arg1603z00_1271;

													{	/* Ieee/number.scm 544 */
														BGL_LONGLONG_T BgL_res3604z00_3696;

														{	/* Ieee/number.scm 544 */
															long BgL_tmpz00_8014;

															BgL_tmpz00_8014 = (long) CINT(BgL_yz00_44);
															BgL_res3604z00_3696 =
																LONG_TO_LLONG(BgL_tmpz00_8014);
														}
														BgL_arg1603z00_1271 = BgL_res3604z00_3696;
													}
													return
														(BLLONG_TO_LLONG(BgL_xz00_43) <=
														BgL_arg1603z00_1271);
												}
											else
												{	/* Ieee/number.scm 544 */
													if (REALP(BgL_yz00_44))
														{	/* Ieee/number.scm 544 */
															return
																(
																(double) (BLLONG_TO_LLONG(BgL_xz00_43)) <=
																REAL_TO_DOUBLE(BgL_yz00_44));
														}
													else
														{	/* Ieee/number.scm 544 */
															if (LLONGP(BgL_yz00_44))
																{	/* Ieee/number.scm 544 */
																	return
																		(BLLONG_TO_LLONG(BgL_xz00_43) <=
																		BLLONG_TO_LLONG(BgL_yz00_44));
																}
															else
																{	/* Ieee/number.scm 544 */
																	if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00
																		(BgL_yz00_44))
																		{	/* Ieee/number.scm 544 */
																			BGL_LONGLONG_T BgL_arg1612z00_1279;

																			{	/* Ieee/number.scm 544 */
																				obj_t BgL_arg1613z00_1280;

																				BgL_arg1613z00_1280 =
																					BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																					(BgL_yz00_44);
																				BgL_arg1612z00_1279 =
																					(BGL_LONGLONG_T) (BELONG_TO_LONG
																					(BgL_arg1613z00_1280));
																			}
																			return
																				(BLLONG_TO_LLONG(BgL_xz00_43) <=
																				BgL_arg1612z00_1279);
																		}
																	else
																		{	/* Ieee/number.scm 544 */
																			if (BIGNUMP(BgL_yz00_44))
																				{	/* Ieee/number.scm 544 */
																					return
																						(
																						(long) (bgl_bignum_cmp
																							(bgl_llong_to_bignum
																								(BLLONG_TO_LLONG(BgL_xz00_43)),
																								BgL_yz00_44)) <= ((long) 0));
																				}
																			else
																				{	/* Ieee/number.scm 544 */
																					if (BGL_UINT64P(BgL_yz00_44))
																						{	/* Ieee/number.scm 544 */
																							uint64_t BgL_arg1618z00_1285;

																							{	/* Ieee/number.scm 544 */
																								uint64_t BgL_res3616z00_3722;

																								{	/* Ieee/number.scm 544 */
																									BGL_LONGLONG_T
																										BgL_tmpz00_8046;
																									BgL_tmpz00_8046 =
																										BLLONG_TO_LLONG
																										(BgL_xz00_43);
																									BgL_res3616z00_3722 =
																										(uint64_t)
																										(BgL_tmpz00_8046);
																								}
																								BgL_arg1618z00_1285 =
																									BgL_res3616z00_3722;
																							}
																							{	/* Ieee/number.scm 544 */
																								uint64_t BgL_n2z00_3724;

																								BgL_n2z00_3724 =
																									BGL_BINT64_TO_INT64
																									(BgL_yz00_44);
																								return (BgL_arg1618z00_1285 <=
																									BgL_n2z00_3724);
																							}
																						}
																					else
																						{	/* Ieee/number.scm 544 */
																							return
																								CBOOL(BGl_errorz00zz__errorz00
																								(BGl_string4848z00zz__r4_numbers_6_5z00,
																									BGl_string4844z00zz__r4_numbers_6_5z00,
																									BgL_yz00_44));
																						}
																				}
																		}
																}
														}
												}
										}
									else
										{	/* Ieee/number.scm 544 */
											if (BGL_UINT64P(BgL_xz00_43))
												{	/* Ieee/number.scm 544 */
													if (INTEGERP(BgL_yz00_44))
														{	/* Ieee/number.scm 544 */
															uint64_t BgL_arg1621z00_1288;

															{	/* Ieee/number.scm 544 */
																uint64_t BgL_res3620z00_3729;

																{	/* Ieee/number.scm 544 */
																	long BgL_tmpz00_8057;

																	BgL_tmpz00_8057 = (long) CINT(BgL_yz00_44);
																	BgL_res3620z00_3729 =
																		(uint64_t) (BgL_tmpz00_8057);
																}
																BgL_arg1621z00_1288 = BgL_res3620z00_3729;
															}
															{	/* Ieee/number.scm 544 */
																uint64_t BgL_n1z00_3730;

																BgL_n1z00_3730 =
																	BGL_BINT64_TO_INT64(BgL_xz00_43);
																return (BgL_n1z00_3730 <= BgL_arg1621z00_1288);
															}
														}
													else
														{	/* Ieee/number.scm 544 */
															if (BGL_UINT64P(BgL_yz00_44))
																{	/* Ieee/number.scm 544 */
																	uint64_t BgL_n1z00_3734;
																	uint64_t BgL_n2z00_3735;

																	BgL_n1z00_3734 =
																		BGL_BINT64_TO_INT64(BgL_xz00_43);
																	BgL_n2z00_3735 =
																		BGL_BINT64_TO_INT64(BgL_yz00_44);
																	return (BgL_n1z00_3734 <= BgL_n2z00_3735);
																}
															else
																{	/* Ieee/number.scm 544 */
																	if (REALP(BgL_yz00_44))
																		{	/* Ieee/number.scm 544 */
																			double BgL_arg1624z00_1291;

																			{	/* Ieee/number.scm 544 */
																				uint64_t BgL_tmpz00_8069;

																				BgL_tmpz00_8069 =
																					BGL_BINT64_TO_INT64(BgL_xz00_43);
																				BgL_arg1624z00_1291 =
																					(double) (BgL_tmpz00_8069);
																			}
																			return
																				(BgL_arg1624z00_1291 <=
																				REAL_TO_DOUBLE(BgL_yz00_44));
																		}
																	else
																		{	/* Ieee/number.scm 544 */
																			if (LLONGP(BgL_yz00_44))
																				{	/* Ieee/number.scm 544 */
																					uint64_t BgL_arg1626z00_1293;

																					{	/* Ieee/number.scm 544 */
																						uint64_t BgL_res3627z00_3743;

																						{	/* Ieee/number.scm 544 */
																							BGL_LONGLONG_T BgL_tmpz00_8076;

																							BgL_tmpz00_8076 =
																								BLLONG_TO_LLONG(BgL_yz00_44);
																							BgL_res3627z00_3743 =
																								(uint64_t) (BgL_tmpz00_8076);
																						}
																						BgL_arg1626z00_1293 =
																							BgL_res3627z00_3743;
																					}
																					{	/* Ieee/number.scm 544 */
																						uint64_t BgL_n1z00_3744;

																						BgL_n1z00_3744 =
																							BGL_BINT64_TO_INT64(BgL_xz00_43);
																						return
																							(BgL_n1z00_3744 <=
																							BgL_arg1626z00_1293);
																					}
																				}
																			else
																				{	/* Ieee/number.scm 544 */
																					if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_44))
																						{	/* Ieee/number.scm 544 */
																							uint64_t BgL_arg1629z00_1296;

																							{	/* Ieee/number.scm 544 */
																								BGL_LONGLONG_T
																									BgL_arg1630z00_1297;
																								{	/* Ieee/number.scm 544 */
																									obj_t BgL_arg1631z00_1298;

																									BgL_arg1631z00_1298 =
																										BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																										(BgL_yz00_44);
																									BgL_arg1630z00_1297 =
																										(BGL_LONGLONG_T)
																										(BELONG_TO_LONG
																										(BgL_arg1631z00_1298));
																								}
																								{	/* Ieee/number.scm 544 */
																									uint64_t BgL_res3629z00_3748;

																									BgL_res3629z00_3748 =
																										(uint64_t)
																										(BgL_arg1630z00_1297);
																									BgL_arg1629z00_1296 =
																										BgL_res3629z00_3748;
																								}
																							}
																							{	/* Ieee/number.scm 544 */
																								uint64_t BgL_n1z00_3749;

																								BgL_n1z00_3749 =
																									BGL_BINT64_TO_INT64
																									(BgL_xz00_43);
																								return (BgL_n1z00_3749 <=
																									BgL_arg1629z00_1296);
																							}
																						}
																					else
																						{	/* Ieee/number.scm 544 */
																							if (BIGNUMP(BgL_yz00_44))
																								{	/* Ieee/number.scm 544 */
																									long BgL_n1z00_3756;

																									BgL_n1z00_3756 =
																										(long) (bgl_bignum_cmp
																										(bgl_uint64_to_bignum
																											(BGL_BINT64_TO_INT64
																												(BgL_xz00_43)),
																											BgL_yz00_44));
																									return (BgL_n1z00_3756 <=
																										((long) 0));
																								}
																							else
																								{	/* Ieee/number.scm 544 */
																									return
																										CBOOL
																										(BGl_errorz00zz__errorz00
																										(BGl_string4848z00zz__r4_numbers_6_5z00,
																											BGl_string4845z00zz__r4_numbers_6_5z00,
																											BgL_yz00_44));
																								}
																						}
																				}
																		}
																}
														}
												}
											else
												{	/* Ieee/number.scm 544 */
													if (BIGNUMP(BgL_xz00_43))
														{	/* Ieee/number.scm 544 */
															if (BIGNUMP(BgL_yz00_44))
																{	/* Ieee/number.scm 544 */
																	return
																		(
																		(long) (bgl_bignum_cmp(BgL_xz00_43,
																				BgL_yz00_44)) <= ((long) 0));
																}
															else
																{	/* Ieee/number.scm 544 */
																	if (INTEGERP(BgL_yz00_44))
																		{	/* Ieee/number.scm 544 */
																			return
																				(
																				(long) (bgl_bignum_cmp(BgL_xz00_43,
																						bgl_long_to_bignum(
																							(long) CINT(BgL_yz00_44)))) <=
																				((long) 0));
																		}
																	else
																		{	/* Ieee/number.scm 544 */
																			if (REALP(BgL_yz00_44))
																				{	/* Ieee/number.scm 544 */
																					return
																						(bgl_bignum_to_flonum(BgL_xz00_43)
																						<= REAL_TO_DOUBLE(BgL_yz00_44));
																				}
																			else
																				{	/* Ieee/number.scm 544 */
																					if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_44))
																						{	/* Ieee/number.scm 544 */
																							obj_t BgL_arg1641z00_1308;

																							{	/* Ieee/number.scm 544 */
																								obj_t BgL_arg1642z00_1309;

																								BgL_arg1642z00_1309 =
																									BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																									(BgL_yz00_44);
																								{	/* Ieee/number.scm 544 */
																									long BgL_xz00_3782;

																									BgL_xz00_3782 =
																										BELONG_TO_LONG
																										(BgL_arg1642z00_1309);
																									BgL_arg1641z00_1308 =
																										bgl_long_to_bignum
																										(BgL_xz00_3782);
																							}}
																							return
																								(
																								(long) (bgl_bignum_cmp
																									(BgL_xz00_43,
																										BgL_arg1641z00_1308)) <=
																								((long) 0));
																						}
																					else
																						{	/* Ieee/number.scm 544 */
																							if (LLONGP(BgL_yz00_44))
																								{	/* Ieee/number.scm 544 */
																									return
																										(
																										(long) (bgl_bignum_cmp
																											(BgL_xz00_43,
																												bgl_llong_to_bignum
																												(BLLONG_TO_LLONG
																													(BgL_yz00_44)))) <=
																										((long) 0));
																								}
																							else
																								{	/* Ieee/number.scm 544 */
																									if (BGL_UINT64P(BgL_yz00_44))
																										{	/* Ieee/number.scm 544 */
																											long BgL_n1z00_3803;

																											BgL_n1z00_3803 =
																												(long) (bgl_bignum_cmp
																												(BgL_xz00_43,
																													bgl_uint64_to_bignum
																													(BGL_BINT64_TO_INT64
																														(BgL_yz00_44))));
																											return (BgL_n1z00_3803 <=
																												((long) 0));
																										}
																									else
																										{	/* Ieee/number.scm 544 */
																											return
																												CBOOL
																												(BGl_errorz00zz__errorz00
																												(BGl_string4848z00zz__r4_numbers_6_5z00,
																													BGl_string4844z00zz__r4_numbers_6_5z00,
																													BgL_yz00_44));
																										}
																								}
																						}
																				}
																		}
																}
														}
													else
														{	/* Ieee/number.scm 544 */
															return
																CBOOL(BGl_errorz00zz__errorz00
																(BGl_string4848z00zz__r4_numbers_6_5z00,
																	BGl_string4844z00zz__r4_numbers_6_5z00,
																	BgL_xz00_43));
														}
												}
										}
								}
						}
				}
		}

	}



/* &2<= */
	obj_t BGl_z622zc3zd3z72zz__r4_numbers_6_5z00(obj_t BgL_envz00_6542,
		obj_t BgL_xz00_6543, obj_t BgL_yz00_6544)
	{
		{	/* Ieee/number.scm 543 */
			return
				BBOOL(BGl_2zc3zd3z10zz__r4_numbers_6_5z00(BgL_xz00_6543,
					BgL_yz00_6544));
		}

	}



/* <= */
	BGL_EXPORTED_DEF bool_t BGl_zc3zd3z10zz__r4_numbers_6_5z00(obj_t BgL_xz00_45,
		obj_t BgL_yz00_46, obj_t BgL_za7za7_47)
	{
		{	/* Ieee/number.scm 549 */
			if (BGl_2zc3zd3z10zz__r4_numbers_6_5z00(BgL_xz00_45, BgL_yz00_46))
				{
					obj_t BgL_xz00_3825;
					obj_t BgL_za7za7_3826;

					BgL_xz00_3825 = BgL_yz00_46;
					BgL_za7za7_3826 = BgL_za7za7_47;
				BgL_zc3zd3zd2listzc2_3824:
					if (NULLP(BgL_za7za7_3826))
						{	/* Ieee/number.scm 552 */
							return ((bool_t) 1);
						}
					else
						{	/* Ieee/number.scm 553 */
							bool_t BgL_test5259z00_8149;

							{	/* Ieee/number.scm 553 */
								obj_t BgL_arg1657z00_3834;

								BgL_arg1657z00_3834 = CAR(((obj_t) BgL_za7za7_3826));
								BgL_test5259z00_8149 =
									BGl_2zc3zd3z10zz__r4_numbers_6_5z00(BgL_xz00_3825,
									BgL_arg1657z00_3834);
							}
							if (BgL_test5259z00_8149)
								{
									obj_t BgL_za7za7_8156;
									obj_t BgL_xz00_8153;

									BgL_xz00_8153 = CAR(((obj_t) BgL_za7za7_3826));
									BgL_za7za7_8156 = CDR(((obj_t) BgL_za7za7_3826));
									BgL_za7za7_3826 = BgL_za7za7_8156;
									BgL_xz00_3825 = BgL_xz00_8153;
									goto BgL_zc3zd3zd2listzc2_3824;
								}
							else
								{	/* Ieee/number.scm 553 */
									return ((bool_t) 0);
								}
						}
				}
			else
				{	/* Ieee/number.scm 555 */
					return ((bool_t) 0);
				}
		}

	}



/* &<= */
	obj_t BGl_z62zc3zd3z72zz__r4_numbers_6_5z00(obj_t BgL_envz00_6545,
		obj_t BgL_xz00_6546, obj_t BgL_yz00_6547, obj_t BgL_za7za7_6548)
	{
		{	/* Ieee/number.scm 549 */
			return
				BBOOL(BGl_zc3zd3z10zz__r4_numbers_6_5z00(BgL_xz00_6546, BgL_yz00_6547,
					BgL_za7za7_6548));
		}

	}



/* 2>= */
	BGL_EXPORTED_DEF bool_t BGl_2ze3zd3z30zz__r4_numbers_6_5z00(obj_t BgL_xz00_48,
		obj_t BgL_yz00_49)
	{
		{	/* Ieee/number.scm 560 */
			if (INTEGERP(BgL_xz00_48))
				{	/* Ieee/number.scm 561 */
					if (INTEGERP(BgL_yz00_49))
						{	/* Ieee/number.scm 561 */
							return ((long) CINT(BgL_xz00_48) >= (long) CINT(BgL_yz00_49));
						}
					else
						{	/* Ieee/number.scm 561 */
							if (REALP(BgL_yz00_49))
								{	/* Ieee/number.scm 561 */
									return
										(
										(double) (
											(long) CINT(BgL_xz00_48)) >= REAL_TO_DOUBLE(BgL_yz00_49));
								}
							else
								{	/* Ieee/number.scm 561 */
									if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_49))
										{	/* Ieee/number.scm 561 */
											long BgL_arg1663z00_1332;
											obj_t BgL_arg1664z00_1333;

											{	/* Ieee/number.scm 561 */
												long BgL_res3663z00_3851;

												{	/* Ieee/number.scm 561 */
													long BgL_tmpz00_8176;

													BgL_tmpz00_8176 = (long) CINT(BgL_xz00_48);
													BgL_res3663z00_3851 = (long) (BgL_tmpz00_8176);
												}
												BgL_arg1663z00_1332 = BgL_res3663z00_3851;
											}
											BgL_arg1664z00_1333 =
												BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
												(BgL_yz00_49);
											{	/* Ieee/number.scm 561 */
												long BgL_n2z00_3853;

												BgL_n2z00_3853 = BELONG_TO_LONG(BgL_arg1664z00_1333);
												return (BgL_arg1663z00_1332 >= BgL_n2z00_3853);
											}
										}
									else
										{	/* Ieee/number.scm 561 */
											if (LLONGP(BgL_yz00_49))
												{	/* Ieee/number.scm 561 */
													BGL_LONGLONG_T BgL_arg1667z00_1335;

													{	/* Ieee/number.scm 561 */
														BGL_LONGLONG_T BgL_res3666z00_3857;

														{	/* Ieee/number.scm 561 */
															long BgL_tmpz00_8184;

															BgL_tmpz00_8184 = (long) CINT(BgL_xz00_48);
															BgL_res3666z00_3857 =
																LONG_TO_LLONG(BgL_tmpz00_8184);
														}
														BgL_arg1667z00_1335 = BgL_res3666z00_3857;
													}
													return
														(BgL_arg1667z00_1335 >=
														BLLONG_TO_LLONG(BgL_yz00_49));
												}
											else
												{	/* Ieee/number.scm 561 */
													if (BGL_UINT64P(BgL_yz00_49))
														{	/* Ieee/number.scm 561 */
															uint64_t BgL_arg1672z00_1338;

															{	/* Ieee/number.scm 561 */
																BGL_LONGLONG_T BgL_arg1675z00_1339;

																{	/* Ieee/number.scm 561 */
																	BGL_LONGLONG_T BgL_res3669z00_3863;

																	{	/* Ieee/number.scm 561 */
																		long BgL_tmpz00_8191;

																		BgL_tmpz00_8191 = (long) CINT(BgL_xz00_48);
																		BgL_res3669z00_3863 =
																			LONG_TO_LLONG(BgL_tmpz00_8191);
																	}
																	BgL_arg1675z00_1339 = BgL_res3669z00_3863;
																}
																{	/* Ieee/number.scm 561 */
																	uint64_t BgL_res3670z00_3865;

																	BgL_res3670z00_3865 =
																		(uint64_t) (BgL_arg1675z00_1339);
																	BgL_arg1672z00_1338 = BgL_res3670z00_3865;
															}}
															{	/* Ieee/number.scm 561 */
																uint64_t BgL_n2z00_3867;

																BgL_n2z00_3867 =
																	BGL_BINT64_TO_INT64(BgL_yz00_49);
																return (BgL_arg1672z00_1338 >= BgL_n2z00_3867);
															}
														}
													else
														{	/* Ieee/number.scm 561 */
															if (BIGNUMP(BgL_yz00_49))
																{	/* Ieee/number.scm 561 */
																	return
																		(
																		(long) (bgl_bignum_cmp(bgl_long_to_bignum(
																					(long) CINT(BgL_xz00_48)),
																				BgL_yz00_49)) >= ((long) 0));
																}
															else
																{	/* Ieee/number.scm 561 */
																	return
																		CBOOL(BGl_errorz00zz__errorz00
																		(BGl_string4849z00zz__r4_numbers_6_5z00,
																			BGl_string4844z00zz__r4_numbers_6_5z00,
																			BgL_yz00_49));
																}
														}
												}
										}
								}
						}
				}
			else
				{	/* Ieee/number.scm 561 */
					if (REALP(BgL_xz00_48))
						{	/* Ieee/number.scm 561 */
							if (REALP(BgL_yz00_49))
								{	/* Ieee/number.scm 561 */
									return
										(REAL_TO_DOUBLE(BgL_xz00_48) >=
										REAL_TO_DOUBLE(BgL_yz00_49));
								}
							else
								{	/* Ieee/number.scm 561 */
									if (INTEGERP(BgL_yz00_49))
										{	/* Ieee/number.scm 561 */
											return
												(REAL_TO_DOUBLE(BgL_xz00_48) >=
												(double) ((long) CINT(BgL_yz00_49)));
										}
									else
										{	/* Ieee/number.scm 561 */
											if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00
												(BgL_yz00_49))
												{	/* Ieee/number.scm 561 */
													double BgL_arg1691z00_1347;

													{	/* Ieee/number.scm 561 */
														obj_t BgL_arg1692z00_1348;

														BgL_arg1692z00_1348 =
															BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
															(BgL_yz00_49);
														BgL_arg1691z00_1347 =
															(double) (BELONG_TO_LONG(BgL_arg1692z00_1348));
													}
													return
														(REAL_TO_DOUBLE(BgL_xz00_48) >=
														BgL_arg1691z00_1347);
												}
											else
												{	/* Ieee/number.scm 561 */
													if (LLONGP(BgL_yz00_49))
														{	/* Ieee/number.scm 561 */
															return
																(REAL_TO_DOUBLE(BgL_xz00_48) >=
																(double) (BLLONG_TO_LLONG(BgL_yz00_49)));
														}
													else
														{	/* Ieee/number.scm 561 */
															if (BGL_UINT64P(BgL_yz00_49))
																{	/* Ieee/number.scm 561 */
																	double BgL_arg1698z00_1353;

																	{	/* Ieee/number.scm 561 */
																		double BgL_res3685z00_3896;

																		{	/* Ieee/number.scm 561 */
																			uint64_t BgL_xz00_3895;

																			BgL_xz00_3895 =
																				BGL_BINT64_TO_INT64(BgL_yz00_49);
																			BgL_res3685z00_3896 =
																				(double) (BgL_xz00_3895);
																		}
																		BgL_arg1698z00_1353 = BgL_res3685z00_3896;
																	}
																	return
																		(REAL_TO_DOUBLE(BgL_xz00_48) >=
																		BgL_arg1698z00_1353);
																}
															else
																{	/* Ieee/number.scm 561 */
																	if (BIGNUMP(BgL_yz00_49))
																		{	/* Ieee/number.scm 561 */
																			return
																				(REAL_TO_DOUBLE(BgL_xz00_48) >=
																				bgl_bignum_to_flonum(BgL_yz00_49));
																		}
																	else
																		{	/* Ieee/number.scm 561 */
																			return
																				CBOOL(BGl_errorz00zz__errorz00
																				(BGl_string4849z00zz__r4_numbers_6_5z00,
																					BGl_string4844z00zz__r4_numbers_6_5z00,
																					BgL_yz00_49));
																		}
																}
														}
												}
										}
								}
						}
					else
						{	/* Ieee/number.scm 561 */
							if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_xz00_48))
								{	/* Ieee/number.scm 561 */
									if (INTEGERP(BgL_yz00_49))
										{	/* Ieee/number.scm 561 */
											obj_t BgL_arg1704z00_1358;
											long BgL_arg1707z00_1359;

											BgL_arg1704z00_1358 =
												BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
												(BgL_xz00_48);
											{	/* Ieee/number.scm 561 */
												long BgL_res3691z00_3908;

												{	/* Ieee/number.scm 561 */
													long BgL_tmpz00_8250;

													BgL_tmpz00_8250 = (long) CINT(BgL_yz00_49);
													BgL_res3691z00_3908 = (long) (BgL_tmpz00_8250);
												}
												BgL_arg1707z00_1359 = BgL_res3691z00_3908;
											}
											{	/* Ieee/number.scm 561 */
												long BgL_n1z00_3909;

												BgL_n1z00_3909 = BELONG_TO_LONG(BgL_arg1704z00_1358);
												return (BgL_n1z00_3909 >= BgL_arg1707z00_1359);
											}
										}
									else
										{	/* Ieee/number.scm 561 */
											if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00
												(BgL_yz00_49))
												{	/* Ieee/number.scm 561 */
													obj_t BgL_arg1709z00_1361;
													obj_t BgL_arg1710z00_1362;

													BgL_arg1709z00_1361 =
														BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
														(BgL_xz00_48);
													BgL_arg1710z00_1362 =
														BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
														(BgL_yz00_49);
													{	/* Ieee/number.scm 561 */
														long BgL_n1z00_3912;
														long BgL_n2z00_3913;

														BgL_n1z00_3912 =
															BELONG_TO_LONG(BgL_arg1709z00_1361);
														BgL_n2z00_3913 =
															BELONG_TO_LONG(BgL_arg1710z00_1362);
														return (BgL_n1z00_3912 >= BgL_n2z00_3913);
													}
												}
											else
												{	/* Ieee/number.scm 561 */
													if (REALP(BgL_yz00_49))
														{	/* Ieee/number.scm 561 */
															double BgL_arg1712z00_1364;

															{	/* Ieee/number.scm 561 */
																obj_t BgL_arg1713z00_1365;

																BgL_arg1713z00_1365 =
																	BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																	(BgL_xz00_48);
																BgL_arg1712z00_1364 =
																	(double) (BELONG_TO_LONG
																	(BgL_arg1713z00_1365));
															}
															return
																(BgL_arg1712z00_1364 >=
																REAL_TO_DOUBLE(BgL_yz00_49));
														}
													else
														{	/* Ieee/number.scm 561 */
															if (LLONGP(BgL_yz00_49))
																{	/* Ieee/number.scm 561 */
																	BGL_LONGLONG_T BgL_arg1716z00_1367;

																	{	/* Ieee/number.scm 561 */
																		obj_t BgL_arg1719z00_1369;

																		BgL_arg1719z00_1369 =
																			BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																			(BgL_xz00_48);
																		BgL_arg1716z00_1367 =
																			(BGL_LONGLONG_T) (BELONG_TO_LONG
																			(BgL_arg1719z00_1369));
																	}
																	return
																		(BgL_arg1716z00_1367 >=
																		BLLONG_TO_LLONG(BgL_yz00_49));
																}
															else
																{	/* Ieee/number.scm 561 */
																	if (BGL_UINT64P(BgL_yz00_49))
																		{	/* Ieee/number.scm 561 */
																			uint64_t BgL_arg1721z00_1371;

																			{	/* Ieee/number.scm 561 */
																				BGL_LONGLONG_T BgL_arg1722z00_1372;

																				{	/* Ieee/number.scm 561 */
																					obj_t BgL_arg1723z00_1373;

																					BgL_arg1723z00_1373 =
																						BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																						(BgL_xz00_48);
																					BgL_arg1722z00_1372 =
																						(BGL_LONGLONG_T) (BELONG_TO_LONG
																						(BgL_arg1723z00_1373));
																				}
																				{	/* Ieee/number.scm 561 */
																					uint64_t BgL_res3699z00_3925;

																					BgL_res3699z00_3925 =
																						(uint64_t) (BgL_arg1722z00_1372);
																					BgL_arg1721z00_1371 =
																						BgL_res3699z00_3925;
																				}
																			}
																			{	/* Ieee/number.scm 561 */
																				uint64_t BgL_n2z00_3927;

																				BgL_n2z00_3927 =
																					BGL_BINT64_TO_INT64(BgL_yz00_49);
																				return
																					(BgL_arg1721z00_1371 >=
																					BgL_n2z00_3927);
																			}
																		}
																	else
																		{	/* Ieee/number.scm 561 */
																			if (BIGNUMP(BgL_yz00_49))
																				{	/* Ieee/number.scm 561 */
																					obj_t BgL_arg1725z00_1375;

																					{	/* Ieee/number.scm 561 */
																						obj_t BgL_arg1726z00_1376;

																						BgL_arg1726z00_1376 =
																							BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																							(BgL_xz00_48);
																						{	/* Ieee/number.scm 561 */
																							long BgL_xz00_3930;

																							BgL_xz00_3930 =
																								BELONG_TO_LONG
																								(BgL_arg1726z00_1376);
																							BgL_arg1725z00_1375 =
																								bgl_long_to_bignum
																								(BgL_xz00_3930);
																					}}
																					return
																						(
																						(long) (bgl_bignum_cmp
																							(BgL_arg1725z00_1375,
																								BgL_yz00_49)) >= ((long) 0));
																				}
																			else
																				{	/* Ieee/number.scm 561 */
																					return
																						CBOOL(BGl_errorz00zz__errorz00
																						(BGl_string4849z00zz__r4_numbers_6_5z00,
																							BGl_string4844z00zz__r4_numbers_6_5z00,
																							BgL_yz00_49));
																				}
																		}
																}
														}
												}
										}
								}
							else
								{	/* Ieee/number.scm 561 */
									if (LLONGP(BgL_xz00_48))
										{	/* Ieee/number.scm 561 */
											if (INTEGERP(BgL_yz00_49))
												{	/* Ieee/number.scm 561 */
													BGL_LONGLONG_T BgL_arg1730z00_1380;

													{	/* Ieee/number.scm 561 */
														BGL_LONGLONG_T BgL_res3707z00_3941;

														{	/* Ieee/number.scm 561 */
															long BgL_tmpz00_8298;

															BgL_tmpz00_8298 = (long) CINT(BgL_yz00_49);
															BgL_res3707z00_3941 =
																LONG_TO_LLONG(BgL_tmpz00_8298);
														}
														BgL_arg1730z00_1380 = BgL_res3707z00_3941;
													}
													return
														(BLLONG_TO_LLONG(BgL_xz00_48) >=
														BgL_arg1730z00_1380);
												}
											else
												{	/* Ieee/number.scm 561 */
													if (REALP(BgL_yz00_49))
														{	/* Ieee/number.scm 561 */
															return
																(
																(double) (BLLONG_TO_LLONG(BgL_xz00_48)) >=
																REAL_TO_DOUBLE(BgL_yz00_49));
														}
													else
														{	/* Ieee/number.scm 561 */
															if (LLONGP(BgL_yz00_49))
																{	/* Ieee/number.scm 561 */
																	return
																		(BLLONG_TO_LLONG(BgL_xz00_48) >=
																		BLLONG_TO_LLONG(BgL_yz00_49));
																}
															else
																{	/* Ieee/number.scm 561 */
																	if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00
																		(BgL_yz00_49))
																		{	/* Ieee/number.scm 561 */
																			BGL_LONGLONG_T BgL_arg1739z00_1388;

																			{	/* Ieee/number.scm 561 */
																				obj_t BgL_arg1740z00_1389;

																				BgL_arg1740z00_1389 =
																					BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																					(BgL_yz00_49);
																				BgL_arg1739z00_1388 =
																					(BGL_LONGLONG_T) (BELONG_TO_LONG
																					(BgL_arg1740z00_1389));
																			}
																			return
																				(BLLONG_TO_LLONG(BgL_xz00_48) >=
																				BgL_arg1739z00_1388);
																		}
																	else
																		{	/* Ieee/number.scm 561 */
																			if (BIGNUMP(BgL_yz00_49))
																				{	/* Ieee/number.scm 561 */
																					return
																						(
																						(long) (bgl_bignum_cmp
																							(bgl_llong_to_bignum
																								(BLLONG_TO_LLONG(BgL_xz00_48)),
																								BgL_yz00_49)) >= ((long) 0));
																				}
																			else
																				{	/* Ieee/number.scm 561 */
																					if (BGL_UINT64P(BgL_yz00_49))
																						{	/* Ieee/number.scm 561 */
																							uint64_t BgL_arg1745z00_1394;

																							{	/* Ieee/number.scm 561 */
																								uint64_t BgL_res3719z00_3967;

																								{	/* Ieee/number.scm 561 */
																									BGL_LONGLONG_T
																										BgL_tmpz00_8330;
																									BgL_tmpz00_8330 =
																										BLLONG_TO_LLONG
																										(BgL_xz00_48);
																									BgL_res3719z00_3967 =
																										(uint64_t)
																										(BgL_tmpz00_8330);
																								}
																								BgL_arg1745z00_1394 =
																									BgL_res3719z00_3967;
																							}
																							{	/* Ieee/number.scm 561 */
																								uint64_t BgL_n2z00_3969;

																								BgL_n2z00_3969 =
																									BGL_BINT64_TO_INT64
																									(BgL_yz00_49);
																								return (BgL_arg1745z00_1394 >=
																									BgL_n2z00_3969);
																							}
																						}
																					else
																						{	/* Ieee/number.scm 561 */
																							return
																								CBOOL(BGl_errorz00zz__errorz00
																								(BGl_string4849z00zz__r4_numbers_6_5z00,
																									BGl_string4844z00zz__r4_numbers_6_5z00,
																									BgL_yz00_49));
																						}
																				}
																		}
																}
														}
												}
										}
									else
										{	/* Ieee/number.scm 561 */
											if (BGL_UINT64P(BgL_xz00_48))
												{	/* Ieee/number.scm 561 */
													if (INTEGERP(BgL_yz00_49))
														{	/* Ieee/number.scm 561 */
															uint64_t BgL_arg1748z00_1397;

															{	/* Ieee/number.scm 561 */
																uint64_t BgL_res3723z00_3974;

																{	/* Ieee/number.scm 561 */
																	long BgL_tmpz00_8341;

																	BgL_tmpz00_8341 = (long) CINT(BgL_yz00_49);
																	BgL_res3723z00_3974 =
																		(uint64_t) (BgL_tmpz00_8341);
																}
																BgL_arg1748z00_1397 = BgL_res3723z00_3974;
															}
															{	/* Ieee/number.scm 561 */
																uint64_t BgL_n1z00_3975;

																BgL_n1z00_3975 =
																	BGL_BINT64_TO_INT64(BgL_xz00_48);
																return (BgL_n1z00_3975 >= BgL_arg1748z00_1397);
															}
														}
													else
														{	/* Ieee/number.scm 561 */
															if (BGL_UINT64P(BgL_yz00_49))
																{	/* Ieee/number.scm 561 */
																	uint64_t BgL_n1z00_3979;
																	uint64_t BgL_n2z00_3980;

																	BgL_n1z00_3979 =
																		BGL_BINT64_TO_INT64(BgL_xz00_48);
																	BgL_n2z00_3980 =
																		BGL_BINT64_TO_INT64(BgL_yz00_49);
																	return (BgL_n1z00_3979 >= BgL_n2z00_3980);
																}
															else
																{	/* Ieee/number.scm 561 */
																	if (REALP(BgL_yz00_49))
																		{	/* Ieee/number.scm 561 */
																			double BgL_arg1751z00_1400;

																			{	/* Ieee/number.scm 561 */
																				uint64_t BgL_tmpz00_8353;

																				BgL_tmpz00_8353 =
																					BGL_BINT64_TO_INT64(BgL_xz00_48);
																				BgL_arg1751z00_1400 =
																					(double) (BgL_tmpz00_8353);
																			}
																			return
																				(BgL_arg1751z00_1400 >=
																				REAL_TO_DOUBLE(BgL_yz00_49));
																		}
																	else
																		{	/* Ieee/number.scm 561 */
																			if (LLONGP(BgL_yz00_49))
																				{	/* Ieee/number.scm 561 */
																					uint64_t BgL_arg1754z00_1402;

																					{	/* Ieee/number.scm 561 */
																						uint64_t BgL_res3730z00_3988;

																						{	/* Ieee/number.scm 561 */
																							BGL_LONGLONG_T BgL_tmpz00_8360;

																							BgL_tmpz00_8360 =
																								BLLONG_TO_LLONG(BgL_yz00_49);
																							BgL_res3730z00_3988 =
																								(uint64_t) (BgL_tmpz00_8360);
																						}
																						BgL_arg1754z00_1402 =
																							BgL_res3730z00_3988;
																					}
																					{	/* Ieee/number.scm 561 */
																						uint64_t BgL_n1z00_3989;

																						BgL_n1z00_3989 =
																							BGL_BINT64_TO_INT64(BgL_xz00_48);
																						return
																							(BgL_n1z00_3989 >=
																							BgL_arg1754z00_1402);
																					}
																				}
																			else
																				{	/* Ieee/number.scm 561 */
																					if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_49))
																						{	/* Ieee/number.scm 561 */
																							uint64_t BgL_arg1757z00_1405;

																							{	/* Ieee/number.scm 561 */
																								BGL_LONGLONG_T
																									BgL_arg1759z00_1406;
																								{	/* Ieee/number.scm 561 */
																									obj_t BgL_arg1760z00_1407;

																									BgL_arg1760z00_1407 =
																										BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																										(BgL_yz00_49);
																									BgL_arg1759z00_1406 =
																										(BGL_LONGLONG_T)
																										(BELONG_TO_LONG
																										(BgL_arg1760z00_1407));
																								}
																								{	/* Ieee/number.scm 561 */
																									uint64_t BgL_res3732z00_3993;

																									BgL_res3732z00_3993 =
																										(uint64_t)
																										(BgL_arg1759z00_1406);
																									BgL_arg1757z00_1405 =
																										BgL_res3732z00_3993;
																								}
																							}
																							{	/* Ieee/number.scm 561 */
																								uint64_t BgL_n1z00_3994;

																								BgL_n1z00_3994 =
																									BGL_BINT64_TO_INT64
																									(BgL_xz00_48);
																								return (BgL_n1z00_3994 >=
																									BgL_arg1757z00_1405);
																							}
																						}
																					else
																						{	/* Ieee/number.scm 561 */
																							if (BIGNUMP(BgL_yz00_49))
																								{	/* Ieee/number.scm 561 */
																									long BgL_n1z00_4001;

																									BgL_n1z00_4001 =
																										(long) (bgl_bignum_cmp
																										(bgl_uint64_to_bignum
																											(BGL_BINT64_TO_INT64
																												(BgL_xz00_48)),
																											BgL_yz00_49));
																									return (BgL_n1z00_4001 >=
																										((long) 0));
																								}
																							else
																								{	/* Ieee/number.scm 561 */
																									return
																										CBOOL
																										(BGl_errorz00zz__errorz00
																										(BGl_string4849z00zz__r4_numbers_6_5z00,
																											BGl_string4845z00zz__r4_numbers_6_5z00,
																											BgL_yz00_49));
																								}
																						}
																				}
																		}
																}
														}
												}
											else
												{	/* Ieee/number.scm 561 */
													if (BIGNUMP(BgL_xz00_48))
														{	/* Ieee/number.scm 561 */
															if (BIGNUMP(BgL_yz00_49))
																{	/* Ieee/number.scm 561 */
																	return
																		(
																		(long) (bgl_bignum_cmp(BgL_xz00_48,
																				BgL_yz00_49)) >= ((long) 0));
																}
															else
																{	/* Ieee/number.scm 561 */
																	if (INTEGERP(BgL_yz00_49))
																		{	/* Ieee/number.scm 561 */
																			return
																				(
																				(long) (bgl_bignum_cmp(BgL_xz00_48,
																						bgl_long_to_bignum(
																							(long) CINT(BgL_yz00_49)))) >=
																				((long) 0));
																		}
																	else
																		{	/* Ieee/number.scm 561 */
																			if (REALP(BgL_yz00_49))
																				{	/* Ieee/number.scm 561 */
																					return
																						(bgl_bignum_to_flonum(BgL_xz00_48)
																						>= REAL_TO_DOUBLE(BgL_yz00_49));
																				}
																			else
																				{	/* Ieee/number.scm 561 */
																					if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_49))
																						{	/* Ieee/number.scm 561 */
																							obj_t BgL_arg1770z00_1417;

																							{	/* Ieee/number.scm 561 */
																								obj_t BgL_arg1771z00_1418;

																								BgL_arg1771z00_1418 =
																									BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																									(BgL_yz00_49);
																								{	/* Ieee/number.scm 561 */
																									long BgL_xz00_4027;

																									BgL_xz00_4027 =
																										BELONG_TO_LONG
																										(BgL_arg1771z00_1418);
																									BgL_arg1770z00_1417 =
																										bgl_long_to_bignum
																										(BgL_xz00_4027);
																							}}
																							return
																								(
																								(long) (bgl_bignum_cmp
																									(BgL_xz00_48,
																										BgL_arg1770z00_1417)) >=
																								((long) 0));
																						}
																					else
																						{	/* Ieee/number.scm 561 */
																							if (LLONGP(BgL_yz00_49))
																								{	/* Ieee/number.scm 561 */
																									return
																										(
																										(long) (bgl_bignum_cmp
																											(BgL_xz00_48,
																												bgl_llong_to_bignum
																												(BLLONG_TO_LLONG
																													(BgL_yz00_49)))) >=
																										((long) 0));
																								}
																							else
																								{	/* Ieee/number.scm 561 */
																									if (BGL_UINT64P(BgL_yz00_49))
																										{	/* Ieee/number.scm 561 */
																											long BgL_n1z00_4048;

																											BgL_n1z00_4048 =
																												(long) (bgl_bignum_cmp
																												(BgL_xz00_48,
																													bgl_uint64_to_bignum
																													(BGL_BINT64_TO_INT64
																														(BgL_yz00_49))));
																											return (BgL_n1z00_4048 >=
																												((long) 0));
																										}
																									else
																										{	/* Ieee/number.scm 561 */
																											return
																												CBOOL
																												(BGl_errorz00zz__errorz00
																												(BGl_string4849z00zz__r4_numbers_6_5z00,
																													BGl_string4844z00zz__r4_numbers_6_5z00,
																													BgL_yz00_49));
																										}
																								}
																						}
																				}
																		}
																}
														}
													else
														{	/* Ieee/number.scm 561 */
															return
																CBOOL(BGl_errorz00zz__errorz00
																(BGl_string4849z00zz__r4_numbers_6_5z00,
																	BGl_string4844z00zz__r4_numbers_6_5z00,
																	BgL_xz00_48));
														}
												}
										}
								}
						}
				}
		}

	}



/* &2>= */
	obj_t BGl_z622ze3zd3z52zz__r4_numbers_6_5z00(obj_t BgL_envz00_6549,
		obj_t BgL_xz00_6550, obj_t BgL_yz00_6551)
	{
		{	/* Ieee/number.scm 560 */
			return
				BBOOL(BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_xz00_6550,
					BgL_yz00_6551));
		}

	}



/* >= */
	BGL_EXPORTED_DEF bool_t BGl_ze3zd3z30zz__r4_numbers_6_5z00(obj_t BgL_xz00_50,
		obj_t BgL_yz00_51, obj_t BgL_za7za7_52)
	{
		{	/* Ieee/number.scm 566 */
			if (BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_xz00_50, BgL_yz00_51))
				{
					obj_t BgL_xz00_4070;
					obj_t BgL_za7za7_4071;

					BgL_xz00_4070 = BgL_yz00_51;
					BgL_za7za7_4071 = BgL_za7za7_52;
				BgL_ze3zd3zd2listze2_4069:
					if (NULLP(BgL_za7za7_4071))
						{	/* Ieee/number.scm 569 */
							return ((bool_t) 1);
						}
					else
						{	/* Ieee/number.scm 570 */
							bool_t BgL_test5304z00_8433;

							{	/* Ieee/number.scm 570 */
								obj_t BgL_arg1783z00_4079;

								BgL_arg1783z00_4079 = CAR(((obj_t) BgL_za7za7_4071));
								BgL_test5304z00_8433 =
									BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_xz00_4070,
									BgL_arg1783z00_4079);
							}
							if (BgL_test5304z00_8433)
								{
									obj_t BgL_za7za7_8440;
									obj_t BgL_xz00_8437;

									BgL_xz00_8437 = CAR(((obj_t) BgL_za7za7_4071));
									BgL_za7za7_8440 = CDR(((obj_t) BgL_za7za7_4071));
									BgL_za7za7_4071 = BgL_za7za7_8440;
									BgL_xz00_4070 = BgL_xz00_8437;
									goto BgL_ze3zd3zd2listze2_4069;
								}
							else
								{	/* Ieee/number.scm 570 */
									return ((bool_t) 0);
								}
						}
				}
			else
				{	/* Ieee/number.scm 572 */
					return ((bool_t) 0);
				}
		}

	}



/* &>= */
	obj_t BGl_z62ze3zd3z52zz__r4_numbers_6_5z00(obj_t BgL_envz00_6552,
		obj_t BgL_xz00_6553, obj_t BgL_yz00_6554, obj_t BgL_za7za7_6555)
	{
		{	/* Ieee/number.scm 566 */
			return
				BBOOL(BGl_ze3zd3z30zz__r4_numbers_6_5z00(BgL_xz00_6553, BgL_yz00_6554,
					BgL_za7za7_6555));
		}

	}



/* zero? */
	BGL_EXPORTED_DEF bool_t BGl_za7erozf3z54zz__r4_numbers_6_5z00(obj_t
		BgL_xz00_53)
	{
		{	/* Ieee/number.scm 577 */
			if (INTEGERP(BgL_xz00_53))
				{	/* Ieee/number.scm 579 */
					return ((long) CINT(BgL_xz00_53) == ((long) 0));
				}
			else
				{	/* Ieee/number.scm 579 */
					if (REALP(BgL_xz00_53))
						{	/* Ieee/number.scm 580 */
							return (REAL_TO_DOUBLE(BgL_xz00_53) == ((double) 0.0));
						}
					else
						{	/* Ieee/number.scm 580 */
							if (ELONGP(BgL_xz00_53))
								{	/* Ieee/number.scm 581 */
									long BgL_n1z00_4098;

									BgL_n1z00_4098 = BELONG_TO_LONG(BgL_xz00_53);
									return (BgL_n1z00_4098 == ((long) 0));
								}
							else
								{	/* Ieee/number.scm 581 */
									if (LLONGP(BgL_xz00_53))
										{	/* Ieee/number.scm 582 */
											return
												(BLLONG_TO_LLONG(BgL_xz00_53) == ((BGL_LONGLONG_T) 0));
										}
									else
										{	/* Ieee/number.scm 582 */
											if (BIGNUMP(BgL_xz00_53))
												{	/* Ieee/number.scm 583 */
													return BXZERO(BgL_xz00_53);
												}
											else
												{	/* Ieee/number.scm 583 */
													return
														CBOOL(BGl_errorz00zz__errorz00
														(BGl_string4850z00zz__r4_numbers_6_5z00,
															BGl_string4844z00zz__r4_numbers_6_5z00,
															BgL_xz00_53));
												}
										}
								}
						}
				}
		}

	}



/* &zero? */
	obj_t BGl_z62za7erozf3z36zz__r4_numbers_6_5z00(obj_t BgL_envz00_6556,
		obj_t BgL_xz00_6557)
	{
		{	/* Ieee/number.scm 577 */
			return BBOOL(BGl_za7erozf3z54zz__r4_numbers_6_5z00(BgL_xz00_6557));
		}

	}



/* positive? */
	BGL_EXPORTED_DEF bool_t BGl_positivezf3zf3zz__r4_numbers_6_5z00(obj_t
		BgL_xz00_54)
	{
		{	/* Ieee/number.scm 589 */
			if (INTEGERP(BgL_xz00_54))
				{	/* Ieee/number.scm 591 */
					return ((long) CINT(BgL_xz00_54) > ((long) 0));
				}
			else
				{	/* Ieee/number.scm 591 */
					if (REALP(BgL_xz00_54))
						{	/* Ieee/number.scm 592 */
							return (REAL_TO_DOUBLE(BgL_xz00_54) > ((double) 0.0));
						}
					else
						{	/* Ieee/number.scm 592 */
							if (ELONGP(BgL_xz00_54))
								{	/* Ieee/number.scm 593 */
									long BgL_n1z00_4120;

									BgL_n1z00_4120 = BELONG_TO_LONG(BgL_xz00_54);
									return (BgL_n1z00_4120 > ((long) 0));
								}
							else
								{	/* Ieee/number.scm 593 */
									if (LLONGP(BgL_xz00_54))
										{	/* Ieee/number.scm 594 */
											return
												(BLLONG_TO_LLONG(BgL_xz00_54) > ((BGL_LONGLONG_T) 0));
										}
									else
										{	/* Ieee/number.scm 594 */
											if (BIGNUMP(BgL_xz00_54))
												{	/* Ieee/number.scm 595 */
													return BXPOSITIVE(BgL_xz00_54);
												}
											else
												{	/* Ieee/number.scm 595 */
													return
														CBOOL(BGl_errorz00zz__errorz00
														(BGl_string4851z00zz__r4_numbers_6_5z00,
															BGl_string4844z00zz__r4_numbers_6_5z00,
															BgL_xz00_54));
												}
										}
								}
						}
				}
		}

	}



/* &positive? */
	obj_t BGl_z62positivezf3z91zz__r4_numbers_6_5z00(obj_t BgL_envz00_6558,
		obj_t BgL_xz00_6559)
	{
		{	/* Ieee/number.scm 589 */
			return BBOOL(BGl_positivezf3zf3zz__r4_numbers_6_5z00(BgL_xz00_6559));
		}

	}



/* negative? */
	BGL_EXPORTED_DEF bool_t BGl_negativezf3zf3zz__r4_numbers_6_5z00(obj_t
		BgL_xz00_55)
	{
		{	/* Ieee/number.scm 601 */
			if (INTEGERP(BgL_xz00_55))
				{	/* Ieee/number.scm 603 */
					return ((long) CINT(BgL_xz00_55) < ((long) 0));
				}
			else
				{	/* Ieee/number.scm 603 */
					if (REALP(BgL_xz00_55))
						{	/* Ieee/number.scm 604 */
							return (REAL_TO_DOUBLE(BgL_xz00_55) < ((double) 0.0));
						}
					else
						{	/* Ieee/number.scm 604 */
							if (ELONGP(BgL_xz00_55))
								{	/* Ieee/number.scm 605 */
									long BgL_n1z00_4142;

									BgL_n1z00_4142 = BELONG_TO_LONG(BgL_xz00_55);
									return (BgL_n1z00_4142 < ((long) 0));
								}
							else
								{	/* Ieee/number.scm 605 */
									if (LLONGP(BgL_xz00_55))
										{	/* Ieee/number.scm 606 */
											return
												(BLLONG_TO_LLONG(BgL_xz00_55) < ((BGL_LONGLONG_T) 0));
										}
									else
										{	/* Ieee/number.scm 606 */
											if (BIGNUMP(BgL_xz00_55))
												{	/* Ieee/number.scm 607 */
													return BXNEGATIVE(BgL_xz00_55);
												}
											else
												{	/* Ieee/number.scm 607 */
													return
														CBOOL(BGl_errorz00zz__errorz00
														(BGl_string4852z00zz__r4_numbers_6_5z00,
															BGl_string4844z00zz__r4_numbers_6_5z00,
															BgL_xz00_55));
												}
										}
								}
						}
				}
		}

	}



/* &negative? */
	obj_t BGl_z62negativezf3z91zz__r4_numbers_6_5z00(obj_t BgL_envz00_6560,
		obj_t BgL_xz00_6561)
	{
		{	/* Ieee/number.scm 601 */
			return BBOOL(BGl_negativezf3zf3zz__r4_numbers_6_5z00(BgL_xz00_6561));
		}

	}



/* 2max */
	BGL_EXPORTED_DEF obj_t BGl_2maxz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_68,
		obj_t BgL_yz00_69)
	{
		{	/* Ieee/number.scm 629 */
			if (INTEGERP(BgL_xz00_68))
				{	/* Ieee/number.scm 630 */
					if (INTEGERP(BgL_yz00_69))
						{	/* Ieee/number.scm 630 */
							if (((long) CINT(BgL_xz00_68) > (long) CINT(BgL_yz00_69)))
								{	/* Ieee/number.scm 614 */
									return BgL_xz00_68;
								}
							else
								{	/* Ieee/number.scm 614 */
									return BgL_yz00_69;
								}
						}
					else
						{	/* Ieee/number.scm 630 */
							if (REALP(BgL_yz00_69))
								{	/* Ieee/number.scm 630 */
									double BgL_arg1808z00_1460;

									BgL_arg1808z00_1460 = (double) ((long) CINT(BgL_xz00_68));
									if ((BgL_arg1808z00_1460 > REAL_TO_DOUBLE(BgL_yz00_69)))
										{	/* Ieee/number.scm 616 */
											return DOUBLE_TO_REAL(BgL_arg1808z00_1460);
										}
									else
										{	/* Ieee/number.scm 616 */
											return BgL_yz00_69;
										}
								}
							else
								{	/* Ieee/number.scm 630 */
									if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_69))
										{	/* Ieee/number.scm 630 */
											long BgL_arg1810z00_1462;
											obj_t BgL_arg1811z00_1463;

											{	/* Ieee/number.scm 630 */
												long BgL_res3809z00_4191;

												{	/* Ieee/number.scm 630 */
													long BgL_tmpz00_8532;

													BgL_tmpz00_8532 = (long) CINT(BgL_xz00_68);
													BgL_res3809z00_4191 = (long) (BgL_tmpz00_8532);
												}
												BgL_arg1810z00_1462 = BgL_res3809z00_4191;
											}
											BgL_arg1811z00_1463 =
												BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
												(BgL_yz00_69);
											{	/* Ieee/number.scm 618 */
												bool_t BgL_test5326z00_8536;

												{	/* Ieee/number.scm 618 */
													long BgL_n2z00_4194;

													BgL_n2z00_4194 = BELONG_TO_LONG(BgL_arg1811z00_1463);
													BgL_test5326z00_8536 =
														(BgL_arg1810z00_1462 > BgL_n2z00_4194);
												}
												if (BgL_test5326z00_8536)
													{	/* Ieee/number.scm 618 */
														return make_belong(BgL_arg1810z00_1462);
													}
												else
													{	/* Ieee/number.scm 618 */
														return BgL_arg1811z00_1463;
													}
											}
										}
									else
										{	/* Ieee/number.scm 630 */
											if (LLONGP(BgL_yz00_69))
												{	/* Ieee/number.scm 630 */
													BGL_LONGLONG_T BgL_arg1813z00_1465;

													{	/* Ieee/number.scm 630 */
														BGL_LONGLONG_T BgL_res3812z00_4198;

														{	/* Ieee/number.scm 630 */
															long BgL_tmpz00_8542;

															BgL_tmpz00_8542 = (long) CINT(BgL_xz00_68);
															BgL_res3812z00_4198 =
																LONG_TO_LLONG(BgL_tmpz00_8542);
														}
														BgL_arg1813z00_1465 = BgL_res3812z00_4198;
													}
													if (
														(BgL_arg1813z00_1465 >
															BLLONG_TO_LLONG(BgL_yz00_69)))
														{	/* Ieee/number.scm 620 */
															return make_bllong(BgL_arg1813z00_1465);
														}
													else
														{	/* Ieee/number.scm 620 */
															return BgL_yz00_69;
														}
												}
											else
												{	/* Ieee/number.scm 630 */
													if (BGL_UINT64P(BgL_yz00_69))
														{	/* Ieee/number.scm 630 */
															uint64_t BgL_arg1816z00_1468;

															{	/* Ieee/number.scm 630 */
																BGL_LONGLONG_T BgL_arg1817z00_1469;

																{	/* Ieee/number.scm 630 */
																	BGL_LONGLONG_T BgL_res3815z00_4205;

																	{	/* Ieee/number.scm 630 */
																		long BgL_tmpz00_8551;

																		BgL_tmpz00_8551 = (long) CINT(BgL_xz00_68);
																		BgL_res3815z00_4205 =
																			LONG_TO_LLONG(BgL_tmpz00_8551);
																	}
																	BgL_arg1817z00_1469 = BgL_res3815z00_4205;
																}
																{	/* Ieee/number.scm 630 */
																	uint64_t BgL_res3816z00_4207;

																	BgL_res3816z00_4207 =
																		(uint64_t) (BgL_arg1817z00_1469);
																	BgL_arg1816z00_1468 = BgL_res3816z00_4207;
															}}
															{	/* Ieee/number.scm 624 */
																bool_t BgL_test5330z00_8555;

																{	/* Ieee/number.scm 624 */
																	uint64_t BgL_n2z00_4210;

																	BgL_n2z00_4210 =
																		BGL_BINT64_TO_INT64(BgL_yz00_69);
																	BgL_test5330z00_8555 =
																		(BgL_arg1816z00_1468 > BgL_n2z00_4210);
																}
																if (BgL_test5330z00_8555)
																	{	/* Ieee/number.scm 624 */
																		return
																			BGL_UINT64_TO_BUINT64
																			(BgL_arg1816z00_1468);
																	}
																else
																	{	/* Ieee/number.scm 624 */
																		return BgL_yz00_69;
																	}
															}
														}
													else
														{	/* Ieee/number.scm 630 */
															if (BIGNUMP(BgL_yz00_69))
																{	/* Ieee/number.scm 630 */
																	obj_t BgL_arg1819z00_1471;

																	BgL_arg1819z00_1471 =
																		bgl_long_to_bignum(
																		(long) CINT(BgL_xz00_68));
																	if (
																		((long) (bgl_bignum_cmp(BgL_arg1819z00_1471,
																					BgL_yz00_69)) > ((long) 0)))
																		{	/* Ieee/number.scm 622 */
																			return BgL_arg1819z00_1471;
																		}
																	else
																		{	/* Ieee/number.scm 622 */
																			return BgL_yz00_69;
																		}
																}
															else
																{	/* Ieee/number.scm 630 */
																	return
																		BGl_errorz00zz__errorz00
																		(BGl_string4853z00zz__r4_numbers_6_5z00,
																		BGl_string4844z00zz__r4_numbers_6_5z00,
																		BgL_yz00_69);
																}
														}
												}
										}
								}
						}
				}
			else
				{	/* Ieee/number.scm 630 */
					if (REALP(BgL_xz00_68))
						{	/* Ieee/number.scm 630 */
							if (REALP(BgL_yz00_69))
								{	/* Ieee/number.scm 630 */
									if (
										(REAL_TO_DOUBLE(BgL_xz00_68) > REAL_TO_DOUBLE(BgL_yz00_69)))
										{	/* Ieee/number.scm 616 */
											return BgL_xz00_68;
										}
									else
										{	/* Ieee/number.scm 616 */
											return BgL_yz00_69;
										}
								}
							else
								{	/* Ieee/number.scm 630 */
									if (INTEGERP(BgL_yz00_69))
										{	/* Ieee/number.scm 630 */
											double BgL_arg1823z00_1475;

											BgL_arg1823z00_1475 = (double) ((long) CINT(BgL_yz00_69));
											if ((REAL_TO_DOUBLE(BgL_xz00_68) > BgL_arg1823z00_1475))
												{	/* Ieee/number.scm 616 */
													return BgL_xz00_68;
												}
											else
												{	/* Ieee/number.scm 616 */
													return DOUBLE_TO_REAL(BgL_arg1823z00_1475);
												}
										}
									else
										{	/* Ieee/number.scm 630 */
											if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00
												(BgL_yz00_69))
												{	/* Ieee/number.scm 630 */
													double BgL_arg1825z00_1477;

													{	/* Ieee/number.scm 630 */
														obj_t BgL_arg1826z00_1478;

														BgL_arg1826z00_1478 =
															BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
															(BgL_yz00_69);
														BgL_arg1825z00_1477 =
															(double) (BELONG_TO_LONG(BgL_arg1826z00_1478));
													}
													if (
														(REAL_TO_DOUBLE(BgL_xz00_68) > BgL_arg1825z00_1477))
														{	/* Ieee/number.scm 616 */
															return BgL_xz00_68;
														}
													else
														{	/* Ieee/number.scm 616 */
															return DOUBLE_TO_REAL(BgL_arg1825z00_1477);
														}
												}
											else
												{	/* Ieee/number.scm 630 */
													if (LLONGP(BgL_yz00_69))
														{	/* Ieee/number.scm 630 */
															double BgL_arg1828z00_1480;

															BgL_arg1828z00_1480 =
																(double) (BLLONG_TO_LLONG(BgL_yz00_69));
															if (
																(REAL_TO_DOUBLE(BgL_xz00_68) >
																	BgL_arg1828z00_1480))
																{	/* Ieee/number.scm 616 */
																	return BgL_xz00_68;
																}
															else
																{	/* Ieee/number.scm 616 */
																	return DOUBLE_TO_REAL(BgL_arg1828z00_1480);
																}
														}
													else
														{	/* Ieee/number.scm 630 */
															if (BGL_UINT64P(BgL_yz00_69))
																{	/* Ieee/number.scm 630 */
																	double BgL_arg1831z00_1483;

																	{	/* Ieee/number.scm 630 */
																		double BgL_res3831z00_4244;

																		{	/* Ieee/number.scm 630 */
																			uint64_t BgL_xz00_4243;

																			BgL_xz00_4243 =
																				BGL_BINT64_TO_INT64(BgL_yz00_69);
																			BgL_res3831z00_4244 =
																				(double) (BgL_xz00_4243);
																		}
																		BgL_arg1831z00_1483 = BgL_res3831z00_4244;
																	}
																	if (
																		(REAL_TO_DOUBLE(BgL_xz00_68) >
																			BgL_arg1831z00_1483))
																		{	/* Ieee/number.scm 616 */
																			return BgL_xz00_68;
																		}
																	else
																		{	/* Ieee/number.scm 616 */
																			return
																				DOUBLE_TO_REAL(BgL_arg1831z00_1483);
																		}
																}
															else
																{	/* Ieee/number.scm 630 */
																	if (BIGNUMP(BgL_yz00_69))
																		{	/* Ieee/number.scm 630 */
																			double BgL_arg1833z00_1485;

																			BgL_arg1833z00_1485 =
																				bgl_bignum_to_flonum(BgL_yz00_69);
																			if (
																				(REAL_TO_DOUBLE(BgL_xz00_68) >
																					BgL_arg1833z00_1485))
																				{	/* Ieee/number.scm 616 */
																					return BgL_xz00_68;
																				}
																			else
																				{	/* Ieee/number.scm 616 */
																					return
																						DOUBLE_TO_REAL(BgL_arg1833z00_1485);
																				}
																		}
																	else
																		{	/* Ieee/number.scm 630 */
																			return
																				BGl_errorz00zz__errorz00
																				(BGl_string4853z00zz__r4_numbers_6_5z00,
																				BGl_string4844z00zz__r4_numbers_6_5z00,
																				BgL_yz00_69);
																		}
																}
														}
												}
										}
								}
						}
					else
						{	/* Ieee/number.scm 630 */
							if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_xz00_68))
								{	/* Ieee/number.scm 630 */
									if (INTEGERP(BgL_yz00_69))
										{	/* Ieee/number.scm 630 */
											obj_t BgL_arg1836z00_1488;
											long BgL_arg1838z00_1489;

											BgL_arg1836z00_1488 =
												BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
												(BgL_xz00_68);
											{	/* Ieee/number.scm 630 */
												long BgL_res3837z00_4258;

												{	/* Ieee/number.scm 630 */
													long BgL_tmpz00_8622;

													BgL_tmpz00_8622 = (long) CINT(BgL_yz00_69);
													BgL_res3837z00_4258 = (long) (BgL_tmpz00_8622);
												}
												BgL_arg1838z00_1489 = BgL_res3837z00_4258;
											}
											{	/* Ieee/number.scm 618 */
												bool_t BgL_test5348z00_8625;

												{	/* Ieee/number.scm 618 */
													long BgL_n1z00_4260;

													BgL_n1z00_4260 = BELONG_TO_LONG(BgL_arg1836z00_1488);
													BgL_test5348z00_8625 =
														(BgL_n1z00_4260 > BgL_arg1838z00_1489);
												}
												if (BgL_test5348z00_8625)
													{	/* Ieee/number.scm 618 */
														return BgL_arg1836z00_1488;
													}
												else
													{	/* Ieee/number.scm 618 */
														return make_belong(BgL_arg1838z00_1489);
													}
											}
										}
									else
										{	/* Ieee/number.scm 630 */
											if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00
												(BgL_yz00_69))
												{	/* Ieee/number.scm 630 */
													obj_t BgL_arg1840z00_1491;
													obj_t BgL_arg1841z00_1492;

													BgL_arg1840z00_1491 =
														BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
														(BgL_xz00_68);
													BgL_arg1841z00_1492 =
														BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
														(BgL_yz00_69);
													{	/* Ieee/number.scm 618 */
														bool_t BgL_test5350z00_8633;

														{	/* Ieee/number.scm 618 */
															long BgL_n1z00_4264;
															long BgL_n2z00_4265;

															BgL_n1z00_4264 =
																BELONG_TO_LONG(BgL_arg1840z00_1491);
															BgL_n2z00_4265 =
																BELONG_TO_LONG(BgL_arg1841z00_1492);
															BgL_test5350z00_8633 =
																(BgL_n1z00_4264 > BgL_n2z00_4265);
														}
														if (BgL_test5350z00_8633)
															{	/* Ieee/number.scm 618 */
																return BgL_arg1840z00_1491;
															}
														else
															{	/* Ieee/number.scm 618 */
																return BgL_arg1841z00_1492;
															}
													}
												}
											else
												{	/* Ieee/number.scm 630 */
													if (REALP(BgL_yz00_69))
														{	/* Ieee/number.scm 630 */
															double BgL_arg1845z00_1494;

															{	/* Ieee/number.scm 630 */
																obj_t BgL_arg1846z00_1495;

																BgL_arg1846z00_1495 =
																	BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																	(BgL_xz00_68);
																BgL_arg1845z00_1494 =
																	(double) (BELONG_TO_LONG
																	(BgL_arg1846z00_1495));
															}
															if (
																(BgL_arg1845z00_1494 >
																	REAL_TO_DOUBLE(BgL_yz00_69)))
																{	/* Ieee/number.scm 616 */
																	return DOUBLE_TO_REAL(BgL_arg1845z00_1494);
																}
															else
																{	/* Ieee/number.scm 616 */
																	return BgL_yz00_69;
																}
														}
													else
														{	/* Ieee/number.scm 630 */
															if (LLONGP(BgL_yz00_69))
																{	/* Ieee/number.scm 630 */
																	BGL_LONGLONG_T BgL_arg1848z00_1497;

																	{	/* Ieee/number.scm 630 */
																		obj_t BgL_arg1851z00_1499;

																		BgL_arg1851z00_1499 =
																			BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																			(BgL_xz00_68);
																		BgL_arg1848z00_1497 =
																			(BGL_LONGLONG_T) (BELONG_TO_LONG
																			(BgL_arg1851z00_1499));
																	}
																	if (
																		(BgL_arg1848z00_1497 >
																			BLLONG_TO_LLONG(BgL_yz00_69)))
																		{	/* Ieee/number.scm 620 */
																			return make_bllong(BgL_arg1848z00_1497);
																		}
																	else
																		{	/* Ieee/number.scm 620 */
																			return BgL_yz00_69;
																		}
																}
															else
																{	/* Ieee/number.scm 630 */
																	if (BGL_UINT64P(BgL_yz00_69))
																		{	/* Ieee/number.scm 630 */
																			uint64_t BgL_arg1853z00_1501;

																			{	/* Ieee/number.scm 630 */
																				BGL_LONGLONG_T BgL_arg1855z00_1502;

																				{	/* Ieee/number.scm 630 */
																					obj_t BgL_arg1856z00_1503;

																					BgL_arg1856z00_1503 =
																						BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																						(BgL_xz00_68);
																					BgL_arg1855z00_1502 =
																						(BGL_LONGLONG_T) (BELONG_TO_LONG
																						(BgL_arg1856z00_1503));
																				}
																				{	/* Ieee/number.scm 630 */
																					uint64_t BgL_res3845z00_4279;

																					BgL_res3845z00_4279 =
																						(uint64_t) (BgL_arg1855z00_1502);
																					BgL_arg1853z00_1501 =
																						BgL_res3845z00_4279;
																				}
																			}
																			{	/* Ieee/number.scm 624 */
																				bool_t BgL_test5356z00_8661;

																				{	/* Ieee/number.scm 624 */
																					uint64_t BgL_n2z00_4282;

																					BgL_n2z00_4282 =
																						BGL_BINT64_TO_INT64(BgL_yz00_69);
																					BgL_test5356z00_8661 =
																						(BgL_arg1853z00_1501 >
																						BgL_n2z00_4282);
																				}
																				if (BgL_test5356z00_8661)
																					{	/* Ieee/number.scm 624 */
																						return
																							BGL_UINT64_TO_BUINT64
																							(BgL_arg1853z00_1501);
																					}
																				else
																					{	/* Ieee/number.scm 624 */
																						return BgL_yz00_69;
																					}
																			}
																		}
																	else
																		{	/* Ieee/number.scm 630 */
																			if (BIGNUMP(BgL_yz00_69))
																				{	/* Ieee/number.scm 630 */
																					obj_t BgL_arg1858z00_1505;

																					{	/* Ieee/number.scm 630 */
																						obj_t BgL_arg1859z00_1506;

																						BgL_arg1859z00_1506 =
																							BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																							(BgL_xz00_68);
																						{	/* Ieee/number.scm 630 */
																							long BgL_xz00_4285;

																							BgL_xz00_4285 =
																								BELONG_TO_LONG
																								(BgL_arg1859z00_1506);
																							BgL_arg1858z00_1505 =
																								bgl_long_to_bignum
																								(BgL_xz00_4285);
																					}}
																					if (
																						((long) (bgl_bignum_cmp
																								(BgL_arg1858z00_1505,
																									BgL_yz00_69)) > ((long) 0)))
																						{	/* Ieee/number.scm 622 */
																							return BgL_arg1858z00_1505;
																						}
																					else
																						{	/* Ieee/number.scm 622 */
																							return BgL_yz00_69;
																						}
																				}
																			else
																				{	/* Ieee/number.scm 630 */
																					return
																						BGl_errorz00zz__errorz00
																						(BGl_string4853z00zz__r4_numbers_6_5z00,
																						BGl_string4844z00zz__r4_numbers_6_5z00,
																						BgL_yz00_69);
																				}
																		}
																}
														}
												}
										}
								}
							else
								{	/* Ieee/number.scm 630 */
									if (LLONGP(BgL_xz00_68))
										{	/* Ieee/number.scm 630 */
											if (INTEGERP(BgL_yz00_69))
												{	/* Ieee/number.scm 630 */
													BGL_LONGLONG_T BgL_arg1863z00_1510;

													{	/* Ieee/number.scm 630 */
														BGL_LONGLONG_T BgL_res3853z00_4297;

														{	/* Ieee/number.scm 630 */
															long BgL_tmpz00_8679;

															BgL_tmpz00_8679 = (long) CINT(BgL_yz00_69);
															BgL_res3853z00_4297 =
																LONG_TO_LLONG(BgL_tmpz00_8679);
														}
														BgL_arg1863z00_1510 = BgL_res3853z00_4297;
													}
													if (
														(BLLONG_TO_LLONG(BgL_xz00_68) >
															BgL_arg1863z00_1510))
														{	/* Ieee/number.scm 620 */
															return BgL_xz00_68;
														}
													else
														{	/* Ieee/number.scm 620 */
															return make_bllong(BgL_arg1863z00_1510);
														}
												}
											else
												{	/* Ieee/number.scm 630 */
													if (REALP(BgL_yz00_69))
														{	/* Ieee/number.scm 630 */
															double BgL_arg1865z00_1512;

															BgL_arg1865z00_1512 =
																(double) (BLLONG_TO_LLONG(BgL_xz00_68));
															if (
																(BgL_arg1865z00_1512 >
																	REAL_TO_DOUBLE(BgL_yz00_69)))
																{	/* Ieee/number.scm 616 */
																	return DOUBLE_TO_REAL(BgL_arg1865z00_1512);
																}
															else
																{	/* Ieee/number.scm 616 */
																	return BgL_yz00_69;
																}
														}
													else
														{	/* Ieee/number.scm 630 */
															if (LLONGP(BgL_yz00_69))
																{	/* Ieee/number.scm 630 */
																	if (
																		(BLLONG_TO_LLONG(BgL_xz00_68) >
																			BLLONG_TO_LLONG(BgL_yz00_69)))
																		{	/* Ieee/number.scm 620 */
																			return BgL_xz00_68;
																		}
																	else
																		{	/* Ieee/number.scm 620 */
																			return BgL_yz00_69;
																		}
																}
															else
																{	/* Ieee/number.scm 630 */
																	if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00
																		(BgL_yz00_69))
																		{	/* Ieee/number.scm 630 */
																			BGL_LONGLONG_T BgL_arg1873z00_1518;

																			{	/* Ieee/number.scm 630 */
																				obj_t BgL_arg1874z00_1519;

																				BgL_arg1874z00_1519 =
																					BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																					(BgL_yz00_69);
																				BgL_arg1873z00_1518 =
																					(BGL_LONGLONG_T) (BELONG_TO_LONG
																					(BgL_arg1874z00_1519));
																			}
																			if (
																				(BLLONG_TO_LLONG(BgL_xz00_68) >
																					BgL_arg1873z00_1518))
																				{	/* Ieee/number.scm 620 */
																					return BgL_xz00_68;
																				}
																			else
																				{	/* Ieee/number.scm 620 */
																					return
																						make_bllong(BgL_arg1873z00_1518);
																				}
																		}
																	else
																		{	/* Ieee/number.scm 630 */
																			if (BIGNUMP(BgL_yz00_69))
																				{	/* Ieee/number.scm 630 */
																					obj_t BgL_arg1876z00_1521;

																					BgL_arg1876z00_1521 =
																						bgl_llong_to_bignum(BLLONG_TO_LLONG
																						(BgL_xz00_68));
																					if (((long) (bgl_bignum_cmp
																								(BgL_arg1876z00_1521,
																									BgL_yz00_69)) > ((long) 0)))
																						{	/* Ieee/number.scm 622 */
																							return BgL_arg1876z00_1521;
																						}
																					else
																						{	/* Ieee/number.scm 622 */
																							return BgL_yz00_69;
																						}
																				}
																			else
																				{	/* Ieee/number.scm 630 */
																					if (BGL_UINT64P(BgL_yz00_69))
																						{	/* Ieee/number.scm 630 */
																							uint64_t BgL_arg1879z00_1524;

																							{	/* Ieee/number.scm 630 */
																								uint64_t BgL_res3865z00_4328;

																								{	/* Ieee/number.scm 630 */
																									BGL_LONGLONG_T
																										BgL_tmpz00_8719;
																									BgL_tmpz00_8719 =
																										BLLONG_TO_LLONG
																										(BgL_xz00_68);
																									BgL_res3865z00_4328 =
																										(uint64_t)
																										(BgL_tmpz00_8719);
																								}
																								BgL_arg1879z00_1524 =
																									BgL_res3865z00_4328;
																							}
																							{	/* Ieee/number.scm 624 */
																								bool_t BgL_test5371z00_8722;

																								{	/* Ieee/number.scm 624 */
																									uint64_t BgL_n2z00_4331;

																									BgL_n2z00_4331 =
																										BGL_BINT64_TO_INT64
																										(BgL_yz00_69);
																									BgL_test5371z00_8722 =
																										(BgL_arg1879z00_1524 >
																										BgL_n2z00_4331);
																								}
																								if (BgL_test5371z00_8722)
																									{	/* Ieee/number.scm 624 */
																										return
																											BGL_UINT64_TO_BUINT64
																											(BgL_arg1879z00_1524);
																									}
																								else
																									{	/* Ieee/number.scm 624 */
																										return BgL_yz00_69;
																									}
																							}
																						}
																					else
																						{	/* Ieee/number.scm 630 */
																							return
																								BGl_errorz00zz__errorz00
																								(BGl_string4853z00zz__r4_numbers_6_5z00,
																								BGl_string4844z00zz__r4_numbers_6_5z00,
																								BgL_yz00_69);
																						}
																				}
																		}
																}
														}
												}
										}
									else
										{	/* Ieee/number.scm 630 */
											if (BGL_UINT64P(BgL_xz00_68))
												{	/* Ieee/number.scm 630 */
													if (INTEGERP(BgL_yz00_69))
														{	/* Ieee/number.scm 630 */
															uint64_t BgL_arg1882z00_1527;

															{	/* Ieee/number.scm 630 */
																uint64_t BgL_res3869z00_4336;

																{	/* Ieee/number.scm 630 */
																	long BgL_tmpz00_8731;

																	BgL_tmpz00_8731 = (long) CINT(BgL_yz00_69);
																	BgL_res3869z00_4336 =
																		(uint64_t) (BgL_tmpz00_8731);
																}
																BgL_arg1882z00_1527 = BgL_res3869z00_4336;
															}
															{	/* Ieee/number.scm 624 */
																bool_t BgL_test5374z00_8734;

																{	/* Ieee/number.scm 624 */
																	uint64_t BgL_n1z00_4338;

																	BgL_n1z00_4338 =
																		BGL_BINT64_TO_INT64(BgL_xz00_68);
																	BgL_test5374z00_8734 =
																		(BgL_n1z00_4338 > BgL_arg1882z00_1527);
																}
																if (BgL_test5374z00_8734)
																	{	/* Ieee/number.scm 624 */
																		return BgL_xz00_68;
																	}
																else
																	{	/* Ieee/number.scm 624 */
																		return
																			BGL_UINT64_TO_BUINT64
																			(BgL_arg1882z00_1527);
																	}
															}
														}
													else
														{	/* Ieee/number.scm 630 */
															if (BGL_UINT64P(BgL_yz00_69))
																{	/* Ieee/number.scm 624 */
																	bool_t BgL_test5376z00_8740;

																	{	/* Ieee/number.scm 624 */
																		uint64_t BgL_n1z00_4343;
																		uint64_t BgL_n2z00_4344;

																		BgL_n1z00_4343 =
																			BGL_BINT64_TO_INT64(BgL_xz00_68);
																		BgL_n2z00_4344 =
																			BGL_BINT64_TO_INT64(BgL_yz00_69);
																		BgL_test5376z00_8740 =
																			(BgL_n1z00_4343 > BgL_n2z00_4344);
																	}
																	if (BgL_test5376z00_8740)
																		{	/* Ieee/number.scm 624 */
																			return BgL_xz00_68;
																		}
																	else
																		{	/* Ieee/number.scm 624 */
																			return BgL_yz00_69;
																		}
																}
															else
																{	/* Ieee/number.scm 630 */
																	if (REALP(BgL_yz00_69))
																		{	/* Ieee/number.scm 630 */
																			double BgL_arg1885z00_1530;

																			{	/* Ieee/number.scm 630 */
																				uint64_t BgL_tmpz00_8746;

																				BgL_tmpz00_8746 =
																					BGL_BINT64_TO_INT64(BgL_xz00_68);
																				BgL_arg1885z00_1530 =
																					(double) (BgL_tmpz00_8746);
																			}
																			if (
																				(BgL_arg1885z00_1530 >
																					REAL_TO_DOUBLE(BgL_yz00_69)))
																				{	/* Ieee/number.scm 616 */
																					return
																						DOUBLE_TO_REAL(BgL_arg1885z00_1530);
																				}
																			else
																				{	/* Ieee/number.scm 616 */
																					return BgL_yz00_69;
																				}
																		}
																	else
																		{	/* Ieee/number.scm 630 */
																			if (LLONGP(BgL_yz00_69))
																				{	/* Ieee/number.scm 630 */
																					uint64_t BgL_arg1887z00_1532;

																					{	/* Ieee/number.scm 630 */
																						uint64_t BgL_res3876z00_4353;

																						{	/* Ieee/number.scm 630 */
																							BGL_LONGLONG_T BgL_tmpz00_8755;

																							BgL_tmpz00_8755 =
																								BLLONG_TO_LLONG(BgL_yz00_69);
																							BgL_res3876z00_4353 =
																								(uint64_t) (BgL_tmpz00_8755);
																						}
																						BgL_arg1887z00_1532 =
																							BgL_res3876z00_4353;
																					}
																					{	/* Ieee/number.scm 624 */
																						bool_t BgL_test5380z00_8758;

																						{	/* Ieee/number.scm 624 */
																							uint64_t BgL_n1z00_4355;

																							BgL_n1z00_4355 =
																								BGL_BINT64_TO_INT64
																								(BgL_xz00_68);
																							BgL_test5380z00_8758 =
																								(BgL_n1z00_4355 >
																								BgL_arg1887z00_1532);
																						}
																						if (BgL_test5380z00_8758)
																							{	/* Ieee/number.scm 624 */
																								return BgL_xz00_68;
																							}
																						else
																							{	/* Ieee/number.scm 624 */
																								return
																									BGL_UINT64_TO_BUINT64
																									(BgL_arg1887z00_1532);
																							}
																					}
																				}
																			else
																				{	/* Ieee/number.scm 630 */
																					if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_69))
																						{	/* Ieee/number.scm 630 */
																							uint64_t BgL_arg1891z00_1535;

																							{	/* Ieee/number.scm 630 */
																								BGL_LONGLONG_T
																									BgL_arg1892z00_1536;
																								{	/* Ieee/number.scm 630 */
																									obj_t BgL_arg1893z00_1537;

																									BgL_arg1893z00_1537 =
																										BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																										(BgL_yz00_69);
																									BgL_arg1892z00_1536 =
																										(BGL_LONGLONG_T)
																										(BELONG_TO_LONG
																										(BgL_arg1893z00_1537));
																								}
																								{	/* Ieee/number.scm 630 */
																									uint64_t BgL_res3878z00_4359;

																									BgL_res3878z00_4359 =
																										(uint64_t)
																										(BgL_arg1892z00_1536);
																									BgL_arg1891z00_1535 =
																										BgL_res3878z00_4359;
																								}
																							}
																							{	/* Ieee/number.scm 624 */
																								bool_t BgL_test5382z00_8768;

																								{	/* Ieee/number.scm 624 */
																									uint64_t BgL_n1z00_4361;

																									BgL_n1z00_4361 =
																										BGL_BINT64_TO_INT64
																										(BgL_xz00_68);
																									BgL_test5382z00_8768 =
																										(BgL_n1z00_4361 >
																										BgL_arg1891z00_1535);
																								}
																								if (BgL_test5382z00_8768)
																									{	/* Ieee/number.scm 624 */
																										return BgL_xz00_68;
																									}
																								else
																									{	/* Ieee/number.scm 624 */
																										return
																											BGL_UINT64_TO_BUINT64
																											(BgL_arg1891z00_1535);
																									}
																							}
																						}
																					else
																						{	/* Ieee/number.scm 630 */
																							if (BIGNUMP(BgL_yz00_69))
																								{	/* Ieee/number.scm 630 */
																									obj_t BgL_arg1895z00_1539;

																									BgL_arg1895z00_1539 =
																										bgl_uint64_to_bignum
																										(BGL_BINT64_TO_INT64
																										(BgL_xz00_68));
																									if (((long) (bgl_bignum_cmp
																												(BgL_arg1895z00_1539,
																													BgL_yz00_69)) >
																											((long) 0)))
																										{	/* Ieee/number.scm 622 */
																											return
																												BgL_arg1895z00_1539;
																										}
																									else
																										{	/* Ieee/number.scm 622 */
																											return BgL_yz00_69;
																										}
																								}
																							else
																								{	/* Ieee/number.scm 630 */
																									return
																										BGl_errorz00zz__errorz00
																										(BGl_string4853z00zz__r4_numbers_6_5z00,
																										BGl_string4845z00zz__r4_numbers_6_5z00,
																										BgL_yz00_69);
																								}
																						}
																				}
																		}
																}
														}
												}
											else
												{	/* Ieee/number.scm 630 */
													if (BIGNUMP(BgL_xz00_68))
														{	/* Ieee/number.scm 630 */
															if (BIGNUMP(BgL_yz00_69))
																{	/* Ieee/number.scm 630 */
																	if (
																		((long) (bgl_bignum_cmp(BgL_xz00_68,
																					BgL_yz00_69)) > ((long) 0)))
																		{	/* Ieee/number.scm 622 */
																			return BgL_xz00_68;
																		}
																	else
																		{	/* Ieee/number.scm 622 */
																			return BgL_yz00_69;
																		}
																}
															else
																{	/* Ieee/number.scm 630 */
																	if (INTEGERP(BgL_yz00_69))
																		{	/* Ieee/number.scm 630 */
																			obj_t BgL_arg1901z00_1543;

																			BgL_arg1901z00_1543 =
																				bgl_long_to_bignum(
																				(long) CINT(BgL_yz00_69));
																			if (
																				((long) (bgl_bignum_cmp(BgL_xz00_68,
																							BgL_arg1901z00_1543)) >
																					((long) 0)))
																				{	/* Ieee/number.scm 622 */
																					return BgL_xz00_68;
																				}
																			else
																				{	/* Ieee/number.scm 622 */
																					return BgL_arg1901z00_1543;
																				}
																		}
																	else
																		{	/* Ieee/number.scm 630 */
																			if (REALP(BgL_yz00_69))
																				{	/* Ieee/number.scm 630 */
																					double BgL_arg1903z00_1545;

																					BgL_arg1903z00_1545 =
																						bgl_bignum_to_flonum(BgL_xz00_68);
																					if (
																						(BgL_arg1903z00_1545 >
																							REAL_TO_DOUBLE(BgL_yz00_69)))
																						{	/* Ieee/number.scm 616 */
																							return
																								DOUBLE_TO_REAL
																								(BgL_arg1903z00_1545);
																						}
																					else
																						{	/* Ieee/number.scm 616 */
																							return BgL_yz00_69;
																						}
																				}
																			else
																				{	/* Ieee/number.scm 630 */
																					if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_69))
																						{	/* Ieee/number.scm 630 */
																							obj_t BgL_arg1905z00_1547;

																							{	/* Ieee/number.scm 630 */
																								obj_t BgL_arg1906z00_1548;

																								BgL_arg1906z00_1548 =
																									BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																									(BgL_yz00_69);
																								{	/* Ieee/number.scm 630 */
																									long BgL_xz00_4398;

																									BgL_xz00_4398 =
																										BELONG_TO_LONG
																										(BgL_arg1906z00_1548);
																									BgL_arg1905z00_1547 =
																										bgl_long_to_bignum
																										(BgL_xz00_4398);
																							}}
																							if (
																								((long) (bgl_bignum_cmp
																										(BgL_xz00_68,
																											BgL_arg1905z00_1547)) >
																									((long) 0)))
																								{	/* Ieee/number.scm 622 */
																									return BgL_xz00_68;
																								}
																							else
																								{	/* Ieee/number.scm 622 */
																									return BgL_arg1905z00_1547;
																								}
																						}
																					else
																						{	/* Ieee/number.scm 630 */
																							if (LLONGP(BgL_yz00_69))
																								{	/* Ieee/number.scm 630 */
																									obj_t BgL_arg1908z00_1550;

																									BgL_arg1908z00_1550 =
																										bgl_llong_to_bignum
																										(BLLONG_TO_LLONG
																										(BgL_yz00_69));
																									if (((long) (bgl_bignum_cmp
																												(BgL_xz00_68,
																													BgL_arg1908z00_1550))
																											> ((long) 0)))
																										{	/* Ieee/number.scm 622 */
																											return BgL_xz00_68;
																										}
																									else
																										{	/* Ieee/number.scm 622 */
																											return
																												BgL_arg1908z00_1550;
																										}
																								}
																							else
																								{	/* Ieee/number.scm 630 */
																									if (BGL_UINT64P(BgL_yz00_69))
																										{	/* Ieee/number.scm 630 */
																											obj_t BgL_arg1911z00_1553;

																											BgL_arg1911z00_1553 =
																												bgl_uint64_to_bignum
																												(BGL_BINT64_TO_INT64
																												(BgL_yz00_69));
																											if (((long)
																													(bgl_bignum_cmp
																														(BgL_xz00_68,
																															BgL_arg1911z00_1553))
																													> ((long) 0)))
																												{	/* Ieee/number.scm 622 */
																													return BgL_xz00_68;
																												}
																											else
																												{	/* Ieee/number.scm 622 */
																													return
																														BgL_arg1911z00_1553;
																												}
																										}
																									else
																										{	/* Ieee/number.scm 630 */
																											return
																												BGl_errorz00zz__errorz00
																												(BGl_string4853z00zz__r4_numbers_6_5z00,
																												BGl_string4844z00zz__r4_numbers_6_5z00,
																												BgL_yz00_69);
																										}
																								}
																						}
																				}
																		}
																}
														}
													else
														{	/* Ieee/number.scm 630 */
															return
																BGl_errorz00zz__errorz00
																(BGl_string4853z00zz__r4_numbers_6_5z00,
																BGl_string4844z00zz__r4_numbers_6_5z00,
																BgL_xz00_68);
														}
												}
										}
								}
						}
				}
		}

	}



/* &2max */
	obj_t BGl_z622maxz62zz__r4_numbers_6_5z00(obj_t BgL_envz00_6562,
		obj_t BgL_xz00_6563, obj_t BgL_yz00_6564)
	{
		{	/* Ieee/number.scm 629 */
			return BGl_2maxz00zz__r4_numbers_6_5z00(BgL_xz00_6563, BgL_yz00_6564);
		}

	}



/* max */
	BGL_EXPORTED_DEF obj_t BGl_maxz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_70,
		obj_t BgL_yz00_71)
	{
		{	/* Ieee/number.scm 635 */
			{
				obj_t BgL_xz00_4447;
				obj_t BgL_yz00_4448;

				BgL_xz00_4447 = BgL_xz00_70;
				BgL_yz00_4448 = BgL_yz00_71;
			BgL_loopz00_4446:
				if (PAIRP(BgL_yz00_4448))
					{
						obj_t BgL_yz00_8837;
						obj_t BgL_xz00_8834;

						BgL_xz00_8834 =
							BGl_2maxz00zz__r4_numbers_6_5z00(BgL_xz00_4447,
							CAR(BgL_yz00_4448));
						BgL_yz00_8837 = CDR(BgL_yz00_4448);
						BgL_yz00_4448 = BgL_yz00_8837;
						BgL_xz00_4447 = BgL_xz00_8834;
						goto BgL_loopz00_4446;
					}
				else
					{	/* Ieee/number.scm 638 */
						return BgL_xz00_4447;
					}
			}
		}

	}



/* &max */
	obj_t BGl_z62maxz62zz__r4_numbers_6_5z00(obj_t BgL_envz00_6565,
		obj_t BgL_xz00_6566, obj_t BgL_yz00_6567)
	{
		{	/* Ieee/number.scm 635 */
			return BGl_maxz00zz__r4_numbers_6_5z00(BgL_xz00_6566, BgL_yz00_6567);
		}

	}



/* 2min */
	BGL_EXPORTED_DEF obj_t BGl_2minz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_84,
		obj_t BgL_yz00_85)
	{
		{	/* Ieee/number.scm 661 */
			if (INTEGERP(BgL_xz00_84))
				{	/* Ieee/number.scm 662 */
					if (INTEGERP(BgL_yz00_85))
						{	/* Ieee/number.scm 662 */
							if (((long) CINT(BgL_xz00_84) > (long) CINT(BgL_yz00_85)))
								{	/* Ieee/number.scm 646 */
									return BgL_yz00_85;
								}
							else
								{	/* Ieee/number.scm 646 */
									return BgL_xz00_84;
								}
						}
					else
						{	/* Ieee/number.scm 662 */
							if (REALP(BgL_yz00_85))
								{	/* Ieee/number.scm 662 */
									double BgL_arg1926z00_1572;

									BgL_arg1926z00_1572 = (double) ((long) CINT(BgL_xz00_84));
									if ((BgL_arg1926z00_1572 > REAL_TO_DOUBLE(BgL_yz00_85)))
										{	/* Ieee/number.scm 648 */
											return BgL_yz00_85;
										}
									else
										{	/* Ieee/number.scm 648 */
											return DOUBLE_TO_REAL(BgL_arg1926z00_1572);
										}
								}
							else
								{	/* Ieee/number.scm 662 */
									if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_85))
										{	/* Ieee/number.scm 662 */
											long BgL_arg1928z00_1574;
											obj_t BgL_arg1929z00_1575;

											{	/* Ieee/number.scm 662 */
												long BgL_res3919z00_4499;

												{	/* Ieee/number.scm 662 */
													long BgL_tmpz00_8858;

													BgL_tmpz00_8858 = (long) CINT(BgL_xz00_84);
													BgL_res3919z00_4499 = (long) (BgL_tmpz00_8858);
												}
												BgL_arg1928z00_1574 = BgL_res3919z00_4499;
											}
											BgL_arg1929z00_1575 =
												BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
												(BgL_yz00_85);
											{	/* Ieee/number.scm 650 */
												bool_t BgL_test5405z00_8862;

												{	/* Ieee/number.scm 650 */
													long BgL_n2z00_4502;

													BgL_n2z00_4502 = BELONG_TO_LONG(BgL_arg1929z00_1575);
													BgL_test5405z00_8862 =
														(BgL_arg1928z00_1574 > BgL_n2z00_4502);
												}
												if (BgL_test5405z00_8862)
													{	/* Ieee/number.scm 650 */
														return BgL_arg1929z00_1575;
													}
												else
													{	/* Ieee/number.scm 650 */
														return make_belong(BgL_arg1928z00_1574);
													}
											}
										}
									else
										{	/* Ieee/number.scm 662 */
											if (LLONGP(BgL_yz00_85))
												{	/* Ieee/number.scm 662 */
													BGL_LONGLONG_T BgL_arg1931z00_1577;

													{	/* Ieee/number.scm 662 */
														BGL_LONGLONG_T BgL_res3922z00_4506;

														{	/* Ieee/number.scm 662 */
															long BgL_tmpz00_8868;

															BgL_tmpz00_8868 = (long) CINT(BgL_xz00_84);
															BgL_res3922z00_4506 =
																LONG_TO_LLONG(BgL_tmpz00_8868);
														}
														BgL_arg1931z00_1577 = BgL_res3922z00_4506;
													}
													if (
														(BgL_arg1931z00_1577 >
															BLLONG_TO_LLONG(BgL_yz00_85)))
														{	/* Ieee/number.scm 652 */
															return BgL_yz00_85;
														}
													else
														{	/* Ieee/number.scm 652 */
															return make_bllong(BgL_arg1931z00_1577);
														}
												}
											else
												{	/* Ieee/number.scm 662 */
													if (BGL_UINT64P(BgL_yz00_85))
														{	/* Ieee/number.scm 662 */
															uint64_t BgL_arg1934z00_1580;

															{	/* Ieee/number.scm 662 */
																BGL_LONGLONG_T BgL_arg1935z00_1581;

																{	/* Ieee/number.scm 662 */
																	BGL_LONGLONG_T BgL_res3925z00_4513;

																	{	/* Ieee/number.scm 662 */
																		long BgL_tmpz00_8877;

																		BgL_tmpz00_8877 = (long) CINT(BgL_xz00_84);
																		BgL_res3925z00_4513 =
																			LONG_TO_LLONG(BgL_tmpz00_8877);
																	}
																	BgL_arg1935z00_1581 = BgL_res3925z00_4513;
																}
																{	/* Ieee/number.scm 662 */
																	uint64_t BgL_res3926z00_4515;

																	BgL_res3926z00_4515 =
																		(uint64_t) (BgL_arg1935z00_1581);
																	BgL_arg1934z00_1580 = BgL_res3926z00_4515;
															}}
															{	/* Ieee/number.scm 656 */
																bool_t BgL_test5409z00_8881;

																{	/* Ieee/number.scm 656 */
																	uint64_t BgL_n2z00_4518;

																	BgL_n2z00_4518 =
																		BGL_BINT64_TO_INT64(BgL_yz00_85);
																	BgL_test5409z00_8881 =
																		(BgL_arg1934z00_1580 > BgL_n2z00_4518);
																}
																if (BgL_test5409z00_8881)
																	{	/* Ieee/number.scm 656 */
																		return BgL_yz00_85;
																	}
																else
																	{	/* Ieee/number.scm 656 */
																		return
																			BGL_UINT64_TO_BUINT64
																			(BgL_arg1934z00_1580);
																	}
															}
														}
													else
														{	/* Ieee/number.scm 662 */
															if (BIGNUMP(BgL_yz00_85))
																{	/* Ieee/number.scm 662 */
																	obj_t BgL_arg1937z00_1583;

																	BgL_arg1937z00_1583 =
																		bgl_long_to_bignum(
																		(long) CINT(BgL_xz00_84));
																	if (
																		((long) (bgl_bignum_cmp(BgL_arg1937z00_1583,
																					BgL_yz00_85)) > ((long) 0)))
																		{	/* Ieee/number.scm 654 */
																			return BgL_yz00_85;
																		}
																	else
																		{	/* Ieee/number.scm 654 */
																			return BgL_arg1937z00_1583;
																		}
																}
															else
																{	/* Ieee/number.scm 662 */
																	return
																		BGl_errorz00zz__errorz00
																		(BGl_string4854z00zz__r4_numbers_6_5z00,
																		BGl_string4844z00zz__r4_numbers_6_5z00,
																		BgL_yz00_85);
																}
														}
												}
										}
								}
						}
				}
			else
				{	/* Ieee/number.scm 662 */
					if (REALP(BgL_xz00_84))
						{	/* Ieee/number.scm 662 */
							if (REALP(BgL_yz00_85))
								{	/* Ieee/number.scm 662 */
									if (
										(REAL_TO_DOUBLE(BgL_xz00_84) > REAL_TO_DOUBLE(BgL_yz00_85)))
										{	/* Ieee/number.scm 648 */
											return BgL_yz00_85;
										}
									else
										{	/* Ieee/number.scm 648 */
											return BgL_xz00_84;
										}
								}
							else
								{	/* Ieee/number.scm 662 */
									if (INTEGERP(BgL_yz00_85))
										{	/* Ieee/number.scm 662 */
											double BgL_arg1941z00_1587;

											BgL_arg1941z00_1587 = (double) ((long) CINT(BgL_yz00_85));
											if ((REAL_TO_DOUBLE(BgL_xz00_84) > BgL_arg1941z00_1587))
												{	/* Ieee/number.scm 648 */
													return DOUBLE_TO_REAL(BgL_arg1941z00_1587);
												}
											else
												{	/* Ieee/number.scm 648 */
													return BgL_xz00_84;
												}
										}
									else
										{	/* Ieee/number.scm 662 */
											if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00
												(BgL_yz00_85))
												{	/* Ieee/number.scm 662 */
													double BgL_arg1943z00_1589;

													{	/* Ieee/number.scm 662 */
														obj_t BgL_arg1944z00_1590;

														BgL_arg1944z00_1590 =
															BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
															(BgL_yz00_85);
														BgL_arg1943z00_1589 =
															(double) (BELONG_TO_LONG(BgL_arg1944z00_1590));
													}
													if (
														(REAL_TO_DOUBLE(BgL_xz00_84) > BgL_arg1943z00_1589))
														{	/* Ieee/number.scm 648 */
															return DOUBLE_TO_REAL(BgL_arg1943z00_1589);
														}
													else
														{	/* Ieee/number.scm 648 */
															return BgL_xz00_84;
														}
												}
											else
												{	/* Ieee/number.scm 662 */
													if (LLONGP(BgL_yz00_85))
														{	/* Ieee/number.scm 662 */
															double BgL_arg1946z00_1592;

															BgL_arg1946z00_1592 =
																(double) (BLLONG_TO_LLONG(BgL_yz00_85));
															if (
																(REAL_TO_DOUBLE(BgL_xz00_84) >
																	BgL_arg1946z00_1592))
																{	/* Ieee/number.scm 648 */
																	return DOUBLE_TO_REAL(BgL_arg1946z00_1592);
																}
															else
																{	/* Ieee/number.scm 648 */
																	return BgL_xz00_84;
																}
														}
													else
														{	/* Ieee/number.scm 662 */
															if (BGL_UINT64P(BgL_yz00_85))
																{	/* Ieee/number.scm 662 */
																	double BgL_arg1949z00_1595;

																	{	/* Ieee/number.scm 662 */
																		double BgL_res3941z00_4552;

																		{	/* Ieee/number.scm 662 */
																			uint64_t BgL_xz00_4551;

																			BgL_xz00_4551 =
																				BGL_BINT64_TO_INT64(BgL_yz00_85);
																			BgL_res3941z00_4552 =
																				(double) (BgL_xz00_4551);
																		}
																		BgL_arg1949z00_1595 = BgL_res3941z00_4552;
																	}
																	if (
																		(REAL_TO_DOUBLE(BgL_xz00_84) >
																			BgL_arg1949z00_1595))
																		{	/* Ieee/number.scm 648 */
																			return
																				DOUBLE_TO_REAL(BgL_arg1949z00_1595);
																		}
																	else
																		{	/* Ieee/number.scm 648 */
																			return BgL_xz00_84;
																		}
																}
															else
																{	/* Ieee/number.scm 662 */
																	if (BIGNUMP(BgL_yz00_85))
																		{	/* Ieee/number.scm 662 */
																			double BgL_arg1951z00_1597;

																			BgL_arg1951z00_1597 =
																				bgl_bignum_to_flonum(BgL_yz00_85);
																			if (
																				(REAL_TO_DOUBLE(BgL_xz00_84) >
																					BgL_arg1951z00_1597))
																				{	/* Ieee/number.scm 648 */
																					return
																						DOUBLE_TO_REAL(BgL_arg1951z00_1597);
																				}
																			else
																				{	/* Ieee/number.scm 648 */
																					return BgL_xz00_84;
																				}
																		}
																	else
																		{	/* Ieee/number.scm 662 */
																			return
																				BGl_errorz00zz__errorz00
																				(BGl_string4854z00zz__r4_numbers_6_5z00,
																				BGl_string4844z00zz__r4_numbers_6_5z00,
																				BgL_yz00_85);
																		}
																}
														}
												}
										}
								}
						}
					else
						{	/* Ieee/number.scm 662 */
							if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_xz00_84))
								{	/* Ieee/number.scm 662 */
									if (INTEGERP(BgL_yz00_85))
										{	/* Ieee/number.scm 662 */
											obj_t BgL_arg1954z00_1600;
											long BgL_arg1955z00_1601;

											BgL_arg1954z00_1600 =
												BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
												(BgL_xz00_84);
											{	/* Ieee/number.scm 662 */
												long BgL_res3947z00_4566;

												{	/* Ieee/number.scm 662 */
													long BgL_tmpz00_8948;

													BgL_tmpz00_8948 = (long) CINT(BgL_yz00_85);
													BgL_res3947z00_4566 = (long) (BgL_tmpz00_8948);
												}
												BgL_arg1955z00_1601 = BgL_res3947z00_4566;
											}
											{	/* Ieee/number.scm 650 */
												bool_t BgL_test5427z00_8951;

												{	/* Ieee/number.scm 650 */
													long BgL_n1z00_4568;

													BgL_n1z00_4568 = BELONG_TO_LONG(BgL_arg1954z00_1600);
													BgL_test5427z00_8951 =
														(BgL_n1z00_4568 > BgL_arg1955z00_1601);
												}
												if (BgL_test5427z00_8951)
													{	/* Ieee/number.scm 650 */
														return make_belong(BgL_arg1955z00_1601);
													}
												else
													{	/* Ieee/number.scm 650 */
														return BgL_arg1954z00_1600;
													}
											}
										}
									else
										{	/* Ieee/number.scm 662 */
											if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00
												(BgL_yz00_85))
												{	/* Ieee/number.scm 662 */
													obj_t BgL_arg1957z00_1603;
													obj_t BgL_arg1958z00_1604;

													BgL_arg1957z00_1603 =
														BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
														(BgL_xz00_84);
													BgL_arg1958z00_1604 =
														BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
														(BgL_yz00_85);
													{	/* Ieee/number.scm 650 */
														bool_t BgL_test5429z00_8959;

														{	/* Ieee/number.scm 650 */
															long BgL_n1z00_4572;
															long BgL_n2z00_4573;

															BgL_n1z00_4572 =
																BELONG_TO_LONG(BgL_arg1957z00_1603);
															BgL_n2z00_4573 =
																BELONG_TO_LONG(BgL_arg1958z00_1604);
															BgL_test5429z00_8959 =
																(BgL_n1z00_4572 > BgL_n2z00_4573);
														}
														if (BgL_test5429z00_8959)
															{	/* Ieee/number.scm 650 */
																return BgL_arg1958z00_1604;
															}
														else
															{	/* Ieee/number.scm 650 */
																return BgL_arg1957z00_1603;
															}
													}
												}
											else
												{	/* Ieee/number.scm 662 */
													if (REALP(BgL_yz00_85))
														{	/* Ieee/number.scm 662 */
															double BgL_arg1960z00_1606;

															{	/* Ieee/number.scm 662 */
																obj_t BgL_arg1961z00_1607;

																BgL_arg1961z00_1607 =
																	BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																	(BgL_xz00_84);
																BgL_arg1960z00_1606 =
																	(double) (BELONG_TO_LONG
																	(BgL_arg1961z00_1607));
															}
															if (
																(BgL_arg1960z00_1606 >
																	REAL_TO_DOUBLE(BgL_yz00_85)))
																{	/* Ieee/number.scm 648 */
																	return BgL_yz00_85;
																}
															else
																{	/* Ieee/number.scm 648 */
																	return DOUBLE_TO_REAL(BgL_arg1960z00_1606);
																}
														}
													else
														{	/* Ieee/number.scm 662 */
															if (LLONGP(BgL_yz00_85))
																{	/* Ieee/number.scm 662 */
																	BGL_LONGLONG_T BgL_arg1963z00_1609;

																	{	/* Ieee/number.scm 662 */
																		obj_t BgL_arg1965z00_1611;

																		BgL_arg1965z00_1611 =
																			BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																			(BgL_xz00_84);
																		BgL_arg1963z00_1609 =
																			(BGL_LONGLONG_T) (BELONG_TO_LONG
																			(BgL_arg1965z00_1611));
																	}
																	if (
																		(BgL_arg1963z00_1609 >
																			BLLONG_TO_LLONG(BgL_yz00_85)))
																		{	/* Ieee/number.scm 652 */
																			return BgL_yz00_85;
																		}
																	else
																		{	/* Ieee/number.scm 652 */
																			return make_bllong(BgL_arg1963z00_1609);
																		}
																}
															else
																{	/* Ieee/number.scm 662 */
																	if (BGL_UINT64P(BgL_yz00_85))
																		{	/* Ieee/number.scm 662 */
																			uint64_t BgL_arg1967z00_1613;

																			{	/* Ieee/number.scm 662 */
																				BGL_LONGLONG_T BgL_arg1968z00_1614;

																				{	/* Ieee/number.scm 662 */
																					obj_t BgL_arg1969z00_1615;

																					BgL_arg1969z00_1615 =
																						BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																						(BgL_xz00_84);
																					BgL_arg1968z00_1614 =
																						(BGL_LONGLONG_T) (BELONG_TO_LONG
																						(BgL_arg1969z00_1615));
																				}
																				{	/* Ieee/number.scm 662 */
																					uint64_t BgL_res3955z00_4587;

																					BgL_res3955z00_4587 =
																						(uint64_t) (BgL_arg1968z00_1614);
																					BgL_arg1967z00_1613 =
																						BgL_res3955z00_4587;
																				}
																			}
																			{	/* Ieee/number.scm 656 */
																				bool_t BgL_test5435z00_8987;

																				{	/* Ieee/number.scm 656 */
																					uint64_t BgL_n2z00_4590;

																					BgL_n2z00_4590 =
																						BGL_BINT64_TO_INT64(BgL_yz00_85);
																					BgL_test5435z00_8987 =
																						(BgL_arg1967z00_1613 >
																						BgL_n2z00_4590);
																				}
																				if (BgL_test5435z00_8987)
																					{	/* Ieee/number.scm 656 */
																						return BgL_yz00_85;
																					}
																				else
																					{	/* Ieee/number.scm 656 */
																						return
																							BGL_UINT64_TO_BUINT64
																							(BgL_arg1967z00_1613);
																					}
																			}
																		}
																	else
																		{	/* Ieee/number.scm 662 */
																			if (BIGNUMP(BgL_yz00_85))
																				{	/* Ieee/number.scm 662 */
																					obj_t BgL_arg1971z00_1617;

																					{	/* Ieee/number.scm 662 */
																						obj_t BgL_arg1972z00_1618;

																						BgL_arg1972z00_1618 =
																							BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																							(BgL_xz00_84);
																						{	/* Ieee/number.scm 662 */
																							long BgL_xz00_4593;

																							BgL_xz00_4593 =
																								BELONG_TO_LONG
																								(BgL_arg1972z00_1618);
																							BgL_arg1971z00_1617 =
																								bgl_long_to_bignum
																								(BgL_xz00_4593);
																					}}
																					if (
																						((long) (bgl_bignum_cmp
																								(BgL_arg1971z00_1617,
																									BgL_yz00_85)) > ((long) 0)))
																						{	/* Ieee/number.scm 654 */
																							return BgL_yz00_85;
																						}
																					else
																						{	/* Ieee/number.scm 654 */
																							return BgL_arg1971z00_1617;
																						}
																				}
																			else
																				{	/* Ieee/number.scm 662 */
																					return
																						BGl_errorz00zz__errorz00
																						(BGl_string4854z00zz__r4_numbers_6_5z00,
																						BGl_string4844z00zz__r4_numbers_6_5z00,
																						BgL_yz00_85);
																				}
																		}
																}
														}
												}
										}
								}
							else
								{	/* Ieee/number.scm 662 */
									if (LLONGP(BgL_xz00_84))
										{	/* Ieee/number.scm 662 */
											if (INTEGERP(BgL_yz00_85))
												{	/* Ieee/number.scm 662 */
													BGL_LONGLONG_T BgL_arg1976z00_1622;

													{	/* Ieee/number.scm 662 */
														BGL_LONGLONG_T BgL_res3963z00_4605;

														{	/* Ieee/number.scm 662 */
															long BgL_tmpz00_9005;

															BgL_tmpz00_9005 = (long) CINT(BgL_yz00_85);
															BgL_res3963z00_4605 =
																LONG_TO_LLONG(BgL_tmpz00_9005);
														}
														BgL_arg1976z00_1622 = BgL_res3963z00_4605;
													}
													if (
														(BLLONG_TO_LLONG(BgL_xz00_84) >
															BgL_arg1976z00_1622))
														{	/* Ieee/number.scm 652 */
															return make_bllong(BgL_arg1976z00_1622);
														}
													else
														{	/* Ieee/number.scm 652 */
															return BgL_xz00_84;
														}
												}
											else
												{	/* Ieee/number.scm 662 */
													if (REALP(BgL_yz00_85))
														{	/* Ieee/number.scm 662 */
															double BgL_arg1979z00_1624;

															BgL_arg1979z00_1624 =
																(double) (BLLONG_TO_LLONG(BgL_xz00_84));
															if (
																(BgL_arg1979z00_1624 >
																	REAL_TO_DOUBLE(BgL_yz00_85)))
																{	/* Ieee/number.scm 648 */
																	return BgL_yz00_85;
																}
															else
																{	/* Ieee/number.scm 648 */
																	return DOUBLE_TO_REAL(BgL_arg1979z00_1624);
																}
														}
													else
														{	/* Ieee/number.scm 662 */
															if (LLONGP(BgL_yz00_85))
																{	/* Ieee/number.scm 662 */
																	if (
																		(BLLONG_TO_LLONG(BgL_xz00_84) >
																			BLLONG_TO_LLONG(BgL_yz00_85)))
																		{	/* Ieee/number.scm 652 */
																			return BgL_yz00_85;
																		}
																	else
																		{	/* Ieee/number.scm 652 */
																			return BgL_xz00_84;
																		}
																}
															else
																{	/* Ieee/number.scm 662 */
																	if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00
																		(BgL_yz00_85))
																		{	/* Ieee/number.scm 662 */
																			BGL_LONGLONG_T BgL_arg1985z00_1630;

																			{	/* Ieee/number.scm 662 */
																				obj_t BgL_arg1986z00_1631;

																				BgL_arg1986z00_1631 =
																					BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																					(BgL_yz00_85);
																				BgL_arg1985z00_1630 =
																					(BGL_LONGLONG_T) (BELONG_TO_LONG
																					(BgL_arg1986z00_1631));
																			}
																			if (
																				(BLLONG_TO_LLONG(BgL_xz00_84) >
																					BgL_arg1985z00_1630))
																				{	/* Ieee/number.scm 652 */
																					return
																						make_bllong(BgL_arg1985z00_1630);
																				}
																			else
																				{	/* Ieee/number.scm 652 */
																					return BgL_xz00_84;
																				}
																		}
																	else
																		{	/* Ieee/number.scm 662 */
																			if (BIGNUMP(BgL_yz00_85))
																				{	/* Ieee/number.scm 662 */
																					obj_t BgL_arg1988z00_1633;

																					BgL_arg1988z00_1633 =
																						bgl_llong_to_bignum(BLLONG_TO_LLONG
																						(BgL_xz00_84));
																					if (((long) (bgl_bignum_cmp
																								(BgL_arg1988z00_1633,
																									BgL_yz00_85)) > ((long) 0)))
																						{	/* Ieee/number.scm 654 */
																							return BgL_yz00_85;
																						}
																					else
																						{	/* Ieee/number.scm 654 */
																							return BgL_arg1988z00_1633;
																						}
																				}
																			else
																				{	/* Ieee/number.scm 662 */
																					if (BGL_UINT64P(BgL_yz00_85))
																						{	/* Ieee/number.scm 662 */
																							uint64_t BgL_arg1991z00_1636;

																							{	/* Ieee/number.scm 662 */
																								uint64_t BgL_res3975z00_4636;

																								{	/* Ieee/number.scm 662 */
																									BGL_LONGLONG_T
																										BgL_tmpz00_9045;
																									BgL_tmpz00_9045 =
																										BLLONG_TO_LLONG
																										(BgL_xz00_84);
																									BgL_res3975z00_4636 =
																										(uint64_t)
																										(BgL_tmpz00_9045);
																								}
																								BgL_arg1991z00_1636 =
																									BgL_res3975z00_4636;
																							}
																							{	/* Ieee/number.scm 656 */
																								bool_t BgL_test5450z00_9048;

																								{	/* Ieee/number.scm 656 */
																									uint64_t BgL_n2z00_4639;

																									BgL_n2z00_4639 =
																										BGL_BINT64_TO_INT64
																										(BgL_yz00_85);
																									BgL_test5450z00_9048 =
																										(BgL_arg1991z00_1636 >
																										BgL_n2z00_4639);
																								}
																								if (BgL_test5450z00_9048)
																									{	/* Ieee/number.scm 656 */
																										return BgL_yz00_85;
																									}
																								else
																									{	/* Ieee/number.scm 656 */
																										return
																											BGL_UINT64_TO_BUINT64
																											(BgL_arg1991z00_1636);
																									}
																							}
																						}
																					else
																						{	/* Ieee/number.scm 662 */
																							return
																								BGl_errorz00zz__errorz00
																								(BGl_string4854z00zz__r4_numbers_6_5z00,
																								BGl_string4844z00zz__r4_numbers_6_5z00,
																								BgL_yz00_85);
																						}
																				}
																		}
																}
														}
												}
										}
									else
										{	/* Ieee/number.scm 662 */
											if (BGL_UINT64P(BgL_xz00_84))
												{	/* Ieee/number.scm 662 */
													if (INTEGERP(BgL_yz00_85))
														{	/* Ieee/number.scm 662 */
															uint64_t BgL_arg1995z00_1639;

															{	/* Ieee/number.scm 662 */
																uint64_t BgL_res3979z00_4644;

																{	/* Ieee/number.scm 662 */
																	long BgL_tmpz00_9057;

																	BgL_tmpz00_9057 = (long) CINT(BgL_yz00_85);
																	BgL_res3979z00_4644 =
																		(uint64_t) (BgL_tmpz00_9057);
																}
																BgL_arg1995z00_1639 = BgL_res3979z00_4644;
															}
															{	/* Ieee/number.scm 656 */
																bool_t BgL_test5453z00_9060;

																{	/* Ieee/number.scm 656 */
																	uint64_t BgL_n1z00_4646;

																	BgL_n1z00_4646 =
																		BGL_BINT64_TO_INT64(BgL_xz00_84);
																	BgL_test5453z00_9060 =
																		(BgL_n1z00_4646 > BgL_arg1995z00_1639);
																}
																if (BgL_test5453z00_9060)
																	{	/* Ieee/number.scm 656 */
																		return
																			BGL_UINT64_TO_BUINT64
																			(BgL_arg1995z00_1639);
																	}
																else
																	{	/* Ieee/number.scm 656 */
																		return BgL_xz00_84;
																	}
															}
														}
													else
														{	/* Ieee/number.scm 662 */
															if (BGL_UINT64P(BgL_yz00_85))
																{	/* Ieee/number.scm 656 */
																	bool_t BgL_test5455z00_9066;

																	{	/* Ieee/number.scm 656 */
																		uint64_t BgL_n1z00_4651;
																		uint64_t BgL_n2z00_4652;

																		BgL_n1z00_4651 =
																			BGL_BINT64_TO_INT64(BgL_xz00_84);
																		BgL_n2z00_4652 =
																			BGL_BINT64_TO_INT64(BgL_yz00_85);
																		BgL_test5455z00_9066 =
																			(BgL_n1z00_4651 > BgL_n2z00_4652);
																	}
																	if (BgL_test5455z00_9066)
																		{	/* Ieee/number.scm 656 */
																			return BgL_yz00_85;
																		}
																	else
																		{	/* Ieee/number.scm 656 */
																			return BgL_xz00_84;
																		}
																}
															else
																{	/* Ieee/number.scm 662 */
																	if (REALP(BgL_yz00_85))
																		{	/* Ieee/number.scm 662 */
																			double BgL_arg1998z00_1642;

																			{	/* Ieee/number.scm 662 */
																				uint64_t BgL_tmpz00_9072;

																				BgL_tmpz00_9072 =
																					BGL_BINT64_TO_INT64(BgL_xz00_84);
																				BgL_arg1998z00_1642 =
																					(double) (BgL_tmpz00_9072);
																			}
																			if (
																				(BgL_arg1998z00_1642 >
																					REAL_TO_DOUBLE(BgL_yz00_85)))
																				{	/* Ieee/number.scm 648 */
																					return BgL_yz00_85;
																				}
																			else
																				{	/* Ieee/number.scm 648 */
																					return
																						DOUBLE_TO_REAL(BgL_arg1998z00_1642);
																				}
																		}
																	else
																		{	/* Ieee/number.scm 662 */
																			if (LLONGP(BgL_yz00_85))
																				{	/* Ieee/number.scm 662 */
																					uint64_t BgL_arg2000z00_1644;

																					{	/* Ieee/number.scm 662 */
																						uint64_t BgL_res3986z00_4661;

																						{	/* Ieee/number.scm 662 */
																							BGL_LONGLONG_T BgL_tmpz00_9081;

																							BgL_tmpz00_9081 =
																								BLLONG_TO_LLONG(BgL_yz00_85);
																							BgL_res3986z00_4661 =
																								(uint64_t) (BgL_tmpz00_9081);
																						}
																						BgL_arg2000z00_1644 =
																							BgL_res3986z00_4661;
																					}
																					{	/* Ieee/number.scm 656 */
																						bool_t BgL_test5459z00_9084;

																						{	/* Ieee/number.scm 656 */
																							uint64_t BgL_n1z00_4663;

																							BgL_n1z00_4663 =
																								BGL_BINT64_TO_INT64
																								(BgL_xz00_84);
																							BgL_test5459z00_9084 =
																								(BgL_n1z00_4663 >
																								BgL_arg2000z00_1644);
																						}
																						if (BgL_test5459z00_9084)
																							{	/* Ieee/number.scm 656 */
																								return
																									BGL_UINT64_TO_BUINT64
																									(BgL_arg2000z00_1644);
																							}
																						else
																							{	/* Ieee/number.scm 656 */
																								return BgL_xz00_84;
																							}
																					}
																				}
																			else
																				{	/* Ieee/number.scm 662 */
																					if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_85))
																						{	/* Ieee/number.scm 662 */
																							uint64_t BgL_arg2003z00_1647;

																							{	/* Ieee/number.scm 662 */
																								BGL_LONGLONG_T
																									BgL_arg2004z00_1648;
																								{	/* Ieee/number.scm 662 */
																									obj_t BgL_arg2005z00_1649;

																									BgL_arg2005z00_1649 =
																										BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																										(BgL_yz00_85);
																									BgL_arg2004z00_1648 =
																										(BGL_LONGLONG_T)
																										(BELONG_TO_LONG
																										(BgL_arg2005z00_1649));
																								}
																								{	/* Ieee/number.scm 662 */
																									uint64_t BgL_res3988z00_4667;

																									BgL_res3988z00_4667 =
																										(uint64_t)
																										(BgL_arg2004z00_1648);
																									BgL_arg2003z00_1647 =
																										BgL_res3988z00_4667;
																								}
																							}
																							{	/* Ieee/number.scm 656 */
																								bool_t BgL_test5461z00_9094;

																								{	/* Ieee/number.scm 656 */
																									uint64_t BgL_n1z00_4669;

																									BgL_n1z00_4669 =
																										BGL_BINT64_TO_INT64
																										(BgL_xz00_84);
																									BgL_test5461z00_9094 =
																										(BgL_n1z00_4669 >
																										BgL_arg2003z00_1647);
																								}
																								if (BgL_test5461z00_9094)
																									{	/* Ieee/number.scm 656 */
																										return
																											BGL_UINT64_TO_BUINT64
																											(BgL_arg2003z00_1647);
																									}
																								else
																									{	/* Ieee/number.scm 656 */
																										return BgL_xz00_84;
																									}
																							}
																						}
																					else
																						{	/* Ieee/number.scm 662 */
																							if (BIGNUMP(BgL_yz00_85))
																								{	/* Ieee/number.scm 662 */
																									obj_t BgL_arg2007z00_1651;

																									BgL_arg2007z00_1651 =
																										bgl_uint64_to_bignum
																										(BGL_BINT64_TO_INT64
																										(BgL_xz00_84));
																									if (((long) (bgl_bignum_cmp
																												(BgL_arg2007z00_1651,
																													BgL_yz00_85)) >
																											((long) 0)))
																										{	/* Ieee/number.scm 654 */
																											return BgL_yz00_85;
																										}
																									else
																										{	/* Ieee/number.scm 654 */
																											return
																												BgL_arg2007z00_1651;
																										}
																								}
																							else
																								{	/* Ieee/number.scm 662 */
																									return
																										BGl_errorz00zz__errorz00
																										(BGl_string4854z00zz__r4_numbers_6_5z00,
																										BGl_string4845z00zz__r4_numbers_6_5z00,
																										BgL_yz00_85);
																								}
																						}
																				}
																		}
																}
														}
												}
											else
												{	/* Ieee/number.scm 662 */
													if (BIGNUMP(BgL_xz00_84))
														{	/* Ieee/number.scm 662 */
															if (BIGNUMP(BgL_yz00_85))
																{	/* Ieee/number.scm 662 */
																	if (
																		((long) (bgl_bignum_cmp(BgL_xz00_84,
																					BgL_yz00_85)) > ((long) 0)))
																		{	/* Ieee/number.scm 654 */
																			return BgL_yz00_85;
																		}
																	else
																		{	/* Ieee/number.scm 654 */
																			return BgL_xz00_84;
																		}
																}
															else
																{	/* Ieee/number.scm 662 */
																	if (INTEGERP(BgL_yz00_85))
																		{	/* Ieee/number.scm 662 */
																			obj_t BgL_arg2011z00_1655;

																			BgL_arg2011z00_1655 =
																				bgl_long_to_bignum(
																				(long) CINT(BgL_yz00_85));
																			if (
																				((long) (bgl_bignum_cmp(BgL_xz00_84,
																							BgL_arg2011z00_1655)) >
																					((long) 0)))
																				{	/* Ieee/number.scm 654 */
																					return BgL_arg2011z00_1655;
																				}
																			else
																				{	/* Ieee/number.scm 654 */
																					return BgL_xz00_84;
																				}
																		}
																	else
																		{	/* Ieee/number.scm 662 */
																			if (REALP(BgL_yz00_85))
																				{	/* Ieee/number.scm 662 */
																					double BgL_arg2013z00_1657;

																					BgL_arg2013z00_1657 =
																						bgl_bignum_to_flonum(BgL_xz00_84);
																					if (
																						(BgL_arg2013z00_1657 >
																							REAL_TO_DOUBLE(BgL_yz00_85)))
																						{	/* Ieee/number.scm 648 */
																							return BgL_yz00_85;
																						}
																					else
																						{	/* Ieee/number.scm 648 */
																							return
																								DOUBLE_TO_REAL
																								(BgL_arg2013z00_1657);
																						}
																				}
																			else
																				{	/* Ieee/number.scm 662 */
																					if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_85))
																						{	/* Ieee/number.scm 662 */
																							obj_t BgL_arg2016z00_1659;

																							{	/* Ieee/number.scm 662 */
																								obj_t BgL_arg2017z00_1660;

																								BgL_arg2017z00_1660 =
																									BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																									(BgL_yz00_85);
																								{	/* Ieee/number.scm 662 */
																									long BgL_xz00_4706;

																									BgL_xz00_4706 =
																										BELONG_TO_LONG
																										(BgL_arg2017z00_1660);
																									BgL_arg2016z00_1659 =
																										bgl_long_to_bignum
																										(BgL_xz00_4706);
																							}}
																							if (
																								((long) (bgl_bignum_cmp
																										(BgL_xz00_84,
																											BgL_arg2016z00_1659)) >
																									((long) 0)))
																								{	/* Ieee/number.scm 654 */
																									return BgL_arg2016z00_1659;
																								}
																							else
																								{	/* Ieee/number.scm 654 */
																									return BgL_xz00_84;
																								}
																						}
																					else
																						{	/* Ieee/number.scm 662 */
																							if (LLONGP(BgL_yz00_85))
																								{	/* Ieee/number.scm 662 */
																									obj_t BgL_arg2020z00_1662;

																									BgL_arg2020z00_1662 =
																										bgl_llong_to_bignum
																										(BLLONG_TO_LLONG
																										(BgL_yz00_85));
																									if (((long) (bgl_bignum_cmp
																												(BgL_xz00_84,
																													BgL_arg2020z00_1662))
																											> ((long) 0)))
																										{	/* Ieee/number.scm 654 */
																											return
																												BgL_arg2020z00_1662;
																										}
																									else
																										{	/* Ieee/number.scm 654 */
																											return BgL_xz00_84;
																										}
																								}
																							else
																								{	/* Ieee/number.scm 662 */
																									if (BGL_UINT64P(BgL_yz00_85))
																										{	/* Ieee/number.scm 662 */
																											obj_t BgL_arg2023z00_1665;

																											BgL_arg2023z00_1665 =
																												bgl_uint64_to_bignum
																												(BGL_BINT64_TO_INT64
																												(BgL_yz00_85));
																											if (((long)
																													(bgl_bignum_cmp
																														(BgL_xz00_84,
																															BgL_arg2023z00_1665))
																													> ((long) 0)))
																												{	/* Ieee/number.scm 654 */
																													return
																														BgL_arg2023z00_1665;
																												}
																											else
																												{	/* Ieee/number.scm 654 */
																													return BgL_xz00_84;
																												}
																										}
																									else
																										{	/* Ieee/number.scm 662 */
																											return
																												BGl_errorz00zz__errorz00
																												(BGl_string4854z00zz__r4_numbers_6_5z00,
																												BGl_string4844z00zz__r4_numbers_6_5z00,
																												BgL_yz00_85);
																										}
																								}
																						}
																				}
																		}
																}
														}
													else
														{	/* Ieee/number.scm 662 */
															return
																BGl_errorz00zz__errorz00
																(BGl_string4854z00zz__r4_numbers_6_5z00,
																BGl_string4844z00zz__r4_numbers_6_5z00,
																BgL_xz00_84);
														}
												}
										}
								}
						}
				}
		}

	}



/* &2min */
	obj_t BGl_z622minz62zz__r4_numbers_6_5z00(obj_t BgL_envz00_6568,
		obj_t BgL_xz00_6569, obj_t BgL_yz00_6570)
	{
		{	/* Ieee/number.scm 661 */
			return BGl_2minz00zz__r4_numbers_6_5z00(BgL_xz00_6569, BgL_yz00_6570);
		}

	}



/* min */
	BGL_EXPORTED_DEF obj_t BGl_minz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_86,
		obj_t BgL_yz00_87)
	{
		{	/* Ieee/number.scm 667 */
			{
				obj_t BgL_xz00_4755;
				obj_t BgL_yz00_4756;

				BgL_xz00_4755 = BgL_xz00_86;
				BgL_yz00_4756 = BgL_yz00_87;
			BgL_loopz00_4754:
				if (PAIRP(BgL_yz00_4756))
					{
						obj_t BgL_yz00_9163;
						obj_t BgL_xz00_9160;

						BgL_xz00_9160 =
							BGl_2minz00zz__r4_numbers_6_5z00(BgL_xz00_4755,
							CAR(BgL_yz00_4756));
						BgL_yz00_9163 = CDR(BgL_yz00_4756);
						BgL_yz00_4756 = BgL_yz00_9163;
						BgL_xz00_4755 = BgL_xz00_9160;
						goto BgL_loopz00_4754;
					}
				else
					{	/* Ieee/number.scm 670 */
						return BgL_xz00_4755;
					}
			}
		}

	}



/* &min */
	obj_t BGl_z62minz62zz__r4_numbers_6_5z00(obj_t BgL_envz00_6571,
		obj_t BgL_xz00_6572, obj_t BgL_yz00_6573)
	{
		{	/* Ieee/number.scm 667 */
			return BGl_minz00zz__r4_numbers_6_5z00(BgL_xz00_6572, BgL_yz00_6573);
		}

	}



/* 2+ */
	BGL_EXPORTED_DEF obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t BgL_xz00_88,
		obj_t BgL_yz00_89)
	{
		{	/* Ieee/number.scm 677 */
			if (INTEGERP(BgL_xz00_88))
				{	/* Ieee/number.scm 678 */
					if (INTEGERP(BgL_yz00_89))
						{	/* Ieee/number.scm 678 */
							long BgL_auxz00_9172;
							long BgL_tmpz00_9170;

							BgL_auxz00_9172 = (long) CINT(BgL_yz00_89);
							BgL_tmpz00_9170 = (long) CINT(BgL_xz00_88);
							return BGL_SAFE_PLUS_FX(BgL_tmpz00_9170, BgL_auxz00_9172);
						}
					else
						{	/* Ieee/number.scm 678 */
							if (REALP(BgL_yz00_89))
								{	/* Ieee/number.scm 678 */
									return
										DOUBLE_TO_REAL(
										((double) (
												(long) CINT(BgL_xz00_88)) +
											REAL_TO_DOUBLE(BgL_yz00_89)));
								}
							else
								{	/* Ieee/number.scm 678 */
									if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_89))
										{	/* Ieee/number.scm 678 */
											long BgL_arg2035z00_1680;
											obj_t BgL_arg2036z00_1681;

											{	/* Ieee/number.scm 678 */
												long BgL_res4021z00_4775;

												{	/* Ieee/number.scm 678 */
													long BgL_tmpz00_9184;

													BgL_tmpz00_9184 = (long) CINT(BgL_xz00_88);
													BgL_res4021z00_4775 = (long) (BgL_tmpz00_9184);
												}
												BgL_arg2035z00_1680 = BgL_res4021z00_4775;
											}
											BgL_arg2036z00_1681 =
												BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
												(BgL_yz00_89);
											{	/* Ieee/number.scm 678 */
												long BgL_tmpz00_9188;

												BgL_tmpz00_9188 = BELONG_TO_LONG(BgL_arg2036z00_1681);
												return
													BGL_SAFE_PLUS_ELONG(BgL_arg2035z00_1680,
													BgL_tmpz00_9188);
											}
										}
									else
										{	/* Ieee/number.scm 678 */
											if (LLONGP(BgL_yz00_89))
												{	/* Ieee/number.scm 678 */
													BGL_LONGLONG_T BgL_arg2038z00_1683;

													{	/* Ieee/number.scm 678 */
														BGL_LONGLONG_T BgL_res4023z00_4778;

														{	/* Ieee/number.scm 678 */
															long BgL_tmpz00_9193;

															BgL_tmpz00_9193 = (long) CINT(BgL_xz00_88);
															BgL_res4023z00_4778 =
																LONG_TO_LLONG(BgL_tmpz00_9193);
														}
														BgL_arg2038z00_1683 = BgL_res4023z00_4778;
													}
													{	/* Ieee/number.scm 678 */
														BGL_LONGLONG_T BgL_tmpz00_9196;

														BgL_tmpz00_9196 = BLLONG_TO_LLONG(BgL_yz00_89);
														return
															BGL_SAFE_PLUS_LLONG(BgL_arg2038z00_1683,
															BgL_tmpz00_9196);
													}
												}
											else
												{	/* Ieee/number.scm 678 */
													if (BGL_UINT64P(BgL_yz00_89))
														{	/* Ieee/number.scm 678 */
															uint64_t BgL_arg2041z00_1686;

															{	/* Ieee/number.scm 678 */
																BGL_LONGLONG_T BgL_arg2043z00_1687;

																{	/* Ieee/number.scm 678 */
																	BGL_LONGLONG_T BgL_res4025z00_4781;

																	{	/* Ieee/number.scm 678 */
																		long BgL_tmpz00_9201;

																		BgL_tmpz00_9201 = (long) CINT(BgL_xz00_88);
																		BgL_res4025z00_4781 =
																			LONG_TO_LLONG(BgL_tmpz00_9201);
																	}
																	BgL_arg2043z00_1687 = BgL_res4025z00_4781;
																}
																{	/* Ieee/number.scm 678 */
																	uint64_t BgL_res4026z00_4783;

																	BgL_res4026z00_4783 =
																		(uint64_t) (BgL_arg2043z00_1687);
																	BgL_arg2041z00_1686 = BgL_res4026z00_4783;
															}}
															{	/* Ieee/number.scm 678 */
																uint64_t BgL_za72za7_4785;

																BgL_za72za7_4785 =
																	BGL_BINT64_TO_INT64(BgL_yz00_89);
																{	/* Ieee/number.scm 678 */
																	uint64_t BgL_tmpz00_9206;

																	BgL_tmpz00_9206 =
																		(BgL_arg2041z00_1686 + BgL_za72za7_4785);
																	return BGL_UINT64_TO_BUINT64(BgL_tmpz00_9206);
																}
															}
														}
													else
														{	/* Ieee/number.scm 678 */
															if (BIGNUMP(BgL_yz00_89))
																{	/* Ieee/number.scm 678 */
																	obj_t BgL_tmpz00_9211;

																	BgL_tmpz00_9211 =
																		bgl_bignum_add(bgl_long_to_bignum(
																			(long) CINT(BgL_xz00_88)), BgL_yz00_89);
																	return BGL_SAFE_BX_TO_FX(BgL_tmpz00_9211);
																}
															else
																{	/* Ieee/number.scm 678 */
																	return
																		BGl_errorz00zz__errorz00
																		(BGl_string4855z00zz__r4_numbers_6_5z00,
																		BGl_string4844z00zz__r4_numbers_6_5z00,
																		BgL_yz00_89);
																}
														}
												}
										}
								}
						}
				}
			else
				{	/* Ieee/number.scm 678 */
					if (REALP(BgL_xz00_88))
						{	/* Ieee/number.scm 678 */
							if (REALP(BgL_yz00_89))
								{	/* Ieee/number.scm 678 */
									return
										DOUBLE_TO_REAL(
										(REAL_TO_DOUBLE(BgL_xz00_88) +
											REAL_TO_DOUBLE(BgL_yz00_89)));
								}
							else
								{	/* Ieee/number.scm 678 */
									if (INTEGERP(BgL_yz00_89))
										{	/* Ieee/number.scm 678 */
											return
												DOUBLE_TO_REAL(
												(REAL_TO_DOUBLE(BgL_xz00_88) +
													(double) ((long) CINT(BgL_yz00_89))));
										}
									else
										{	/* Ieee/number.scm 678 */
											if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00
												(BgL_yz00_89))
												{	/* Ieee/number.scm 678 */
													double BgL_arg2053z00_1696;

													{	/* Ieee/number.scm 678 */
														obj_t BgL_arg2055z00_1697;

														BgL_arg2055z00_1697 =
															BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
															(BgL_yz00_89);
														BgL_arg2053z00_1696 =
															(double) (BELONG_TO_LONG(BgL_arg2055z00_1697));
													}
													return
														DOUBLE_TO_REAL(
														(REAL_TO_DOUBLE(BgL_xz00_88) +
															BgL_arg2053z00_1696));
												}
											else
												{	/* Ieee/number.scm 678 */
													if (LLONGP(BgL_yz00_89))
														{	/* Ieee/number.scm 678 */
															return
																DOUBLE_TO_REAL(
																(REAL_TO_DOUBLE(BgL_xz00_88) +
																	(double) (BLLONG_TO_LLONG(BgL_yz00_89))));
														}
													else
														{	/* Ieee/number.scm 678 */
															if (BGL_UINT64P(BgL_yz00_89))
																{	/* Ieee/number.scm 678 */
																	double BgL_arg2061z00_1702;

																	{	/* Ieee/number.scm 678 */
																		double BgL_res4040z00_4811;

																		{	/* Ieee/number.scm 678 */
																			uint64_t BgL_xz00_4810;

																			BgL_xz00_4810 =
																				BGL_BINT64_TO_INT64(BgL_yz00_89);
																			BgL_res4040z00_4811 =
																				(double) (BgL_xz00_4810);
																		}
																		BgL_arg2061z00_1702 = BgL_res4040z00_4811;
																	}
																	return
																		DOUBLE_TO_REAL(
																		(REAL_TO_DOUBLE(BgL_xz00_88) +
																			BgL_arg2061z00_1702));
																}
															else
																{	/* Ieee/number.scm 678 */
																	if (BIGNUMP(BgL_yz00_89))
																		{	/* Ieee/number.scm 678 */
																			return
																				DOUBLE_TO_REAL(
																				(REAL_TO_DOUBLE(BgL_xz00_88) +
																					bgl_bignum_to_flonum(BgL_yz00_89)));
																		}
																	else
																		{	/* Ieee/number.scm 678 */
																			return
																				BGl_errorz00zz__errorz00
																				(BGl_string4855z00zz__r4_numbers_6_5z00,
																				BGl_string4844z00zz__r4_numbers_6_5z00,
																				BgL_yz00_89);
																		}
																}
														}
												}
										}
								}
						}
					else
						{	/* Ieee/number.scm 678 */
							if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_xz00_88))
								{	/* Ieee/number.scm 678 */
									if (INTEGERP(BgL_yz00_89))
										{	/* Ieee/number.scm 678 */
											obj_t BgL_arg2066z00_1707;
											long BgL_arg2068z00_1708;

											BgL_arg2066z00_1707 =
												BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
												(BgL_xz00_88);
											{	/* Ieee/number.scm 678 */
												long BgL_res4046z00_4823;

												{	/* Ieee/number.scm 678 */
													long BgL_tmpz00_9266;

													BgL_tmpz00_9266 = (long) CINT(BgL_yz00_89);
													BgL_res4046z00_4823 = (long) (BgL_tmpz00_9266);
												}
												BgL_arg2068z00_1708 = BgL_res4046z00_4823;
											}
											{	/* Ieee/number.scm 678 */
												long BgL_tmpz00_9269;

												BgL_tmpz00_9269 = BELONG_TO_LONG(BgL_arg2066z00_1707);
												return
													BGL_SAFE_PLUS_ELONG(BgL_tmpz00_9269,
													BgL_arg2068z00_1708);
											}
										}
									else
										{	/* Ieee/number.scm 678 */
											if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00
												(BgL_yz00_89))
												{	/* Ieee/number.scm 678 */
													obj_t BgL_arg2070z00_1710;
													obj_t BgL_arg2071z00_1711;

													BgL_arg2070z00_1710 =
														BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
														(BgL_xz00_88);
													BgL_arg2071z00_1711 =
														BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
														(BgL_yz00_89);
													{	/* Ieee/number.scm 678 */
														long BgL_auxz00_9278;
														long BgL_tmpz00_9276;

														BgL_auxz00_9278 =
															BELONG_TO_LONG(BgL_arg2071z00_1711);
														BgL_tmpz00_9276 =
															BELONG_TO_LONG(BgL_arg2070z00_1710);
														return
															BGL_SAFE_PLUS_ELONG(BgL_tmpz00_9276,
															BgL_auxz00_9278);
													}
												}
											else
												{	/* Ieee/number.scm 678 */
													if (REALP(BgL_yz00_89))
														{	/* Ieee/number.scm 678 */
															double BgL_arg2075z00_1713;

															{	/* Ieee/number.scm 678 */
																obj_t BgL_arg2076z00_1714;

																BgL_arg2076z00_1714 =
																	BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																	(BgL_xz00_88);
																BgL_arg2075z00_1713 =
																	(double) (BELONG_TO_LONG
																	(BgL_arg2076z00_1714));
															}
															return
																DOUBLE_TO_REAL(
																(BgL_arg2075z00_1713 +
																	REAL_TO_DOUBLE(BgL_yz00_89)));
														}
													else
														{	/* Ieee/number.scm 678 */
															if (LLONGP(BgL_yz00_89))
																{	/* Ieee/number.scm 678 */
																	BGL_LONGLONG_T BgL_arg2078z00_1716;

																	{	/* Ieee/number.scm 678 */
																		obj_t BgL_arg2080z00_1718;

																		BgL_arg2080z00_1718 =
																			BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																			(BgL_xz00_88);
																		BgL_arg2078z00_1716 =
																			(BGL_LONGLONG_T) (BELONG_TO_LONG
																			(BgL_arg2080z00_1718));
																	}
																	{	/* Ieee/number.scm 678 */
																		BGL_LONGLONG_T BgL_tmpz00_9294;

																		BgL_tmpz00_9294 =
																			BLLONG_TO_LLONG(BgL_yz00_89);
																		return
																			BGL_SAFE_PLUS_LLONG(BgL_arg2078z00_1716,
																			BgL_tmpz00_9294);
																	}
																}
															else
																{	/* Ieee/number.scm 678 */
																	if (BGL_UINT64P(BgL_yz00_89))
																		{	/* Ieee/number.scm 678 */
																			uint64_t BgL_arg2082z00_1720;

																			{	/* Ieee/number.scm 678 */
																				BGL_LONGLONG_T BgL_arg2083z00_1721;

																				{	/* Ieee/number.scm 678 */
																					obj_t BgL_arg2084z00_1722;

																					BgL_arg2084z00_1722 =
																						BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																						(BgL_xz00_88);
																					BgL_arg2083z00_1721 =
																						(BGL_LONGLONG_T) (BELONG_TO_LONG
																						(BgL_arg2084z00_1722));
																				}
																				{	/* Ieee/number.scm 678 */
																					uint64_t BgL_res4051z00_4831;

																					BgL_res4051z00_4831 =
																						(uint64_t) (BgL_arg2083z00_1721);
																					BgL_arg2082z00_1720 =
																						BgL_res4051z00_4831;
																				}
																			}
																			{	/* Ieee/number.scm 678 */
																				uint64_t BgL_za72za7_4833;

																				BgL_za72za7_4833 =
																					BGL_BINT64_TO_INT64(BgL_yz00_89);
																				{	/* Ieee/number.scm 678 */
																					uint64_t BgL_tmpz00_9304;

																					BgL_tmpz00_9304 =
																						(BgL_arg2082z00_1720 +
																						BgL_za72za7_4833);
																					return
																						BGL_UINT64_TO_BUINT64
																						(BgL_tmpz00_9304);
																				}
																			}
																		}
																	else
																		{	/* Ieee/number.scm 678 */
																			if (BIGNUMP(BgL_yz00_89))
																				{	/* Ieee/number.scm 678 */
																					obj_t BgL_arg2086z00_1724;

																					{	/* Ieee/number.scm 678 */
																						obj_t BgL_arg2087z00_1725;

																						BgL_arg2087z00_1725 =
																							BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																							(BgL_xz00_88);
																						{	/* Ieee/number.scm 678 */
																							long BgL_xz00_4836;

																							BgL_xz00_4836 =
																								BELONG_TO_LONG
																								(BgL_arg2087z00_1725);
																							BgL_arg2086z00_1724 =
																								bgl_long_to_bignum
																								(BgL_xz00_4836);
																					}}
																					return
																						bgl_bignum_add(BgL_arg2086z00_1724,
																						BgL_yz00_89);
																				}
																			else
																				{	/* Ieee/number.scm 678 */
																					return
																						BGl_errorz00zz__errorz00
																						(BGl_string4855z00zz__r4_numbers_6_5z00,
																						BGl_string4844z00zz__r4_numbers_6_5z00,
																						BgL_yz00_89);
																				}
																		}
																}
														}
												}
										}
								}
							else
								{	/* Ieee/number.scm 678 */
									if (LLONGP(BgL_xz00_88))
										{	/* Ieee/number.scm 678 */
											if (INTEGERP(BgL_yz00_89))
												{	/* Ieee/number.scm 678 */
													BGL_LONGLONG_T BgL_arg2091z00_1729;

													{	/* Ieee/number.scm 678 */
														BGL_LONGLONG_T BgL_res4058z00_4844;

														{	/* Ieee/number.scm 678 */
															long BgL_tmpz00_9318;

															BgL_tmpz00_9318 = (long) CINT(BgL_yz00_89);
															BgL_res4058z00_4844 =
																LONG_TO_LLONG(BgL_tmpz00_9318);
														}
														BgL_arg2091z00_1729 = BgL_res4058z00_4844;
													}
													{	/* Ieee/number.scm 678 */
														BGL_LONGLONG_T BgL_tmpz00_9321;

														BgL_tmpz00_9321 = BLLONG_TO_LLONG(BgL_xz00_88);
														return
															BGL_SAFE_PLUS_LLONG(BgL_tmpz00_9321,
															BgL_arg2091z00_1729);
													}
												}
											else
												{	/* Ieee/number.scm 678 */
													if (REALP(BgL_yz00_89))
														{	/* Ieee/number.scm 678 */
															return
																DOUBLE_TO_REAL(
																((double) (BLLONG_TO_LLONG(BgL_xz00_88)) +
																	REAL_TO_DOUBLE(BgL_yz00_89)));
														}
													else
														{	/* Ieee/number.scm 678 */
															if (LLONGP(BgL_yz00_89))
																{	/* Ieee/number.scm 678 */
																	BGL_LONGLONG_T BgL_auxz00_9335;
																	BGL_LONGLONG_T BgL_tmpz00_9333;

																	BgL_auxz00_9335 =
																		BLLONG_TO_LLONG(BgL_yz00_89);
																	BgL_tmpz00_9333 =
																		BLLONG_TO_LLONG(BgL_xz00_88);
																	return
																		BGL_SAFE_PLUS_LLONG(BgL_tmpz00_9333,
																		BgL_auxz00_9335);
																}
															else
																{	/* Ieee/number.scm 678 */
																	if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00
																		(BgL_yz00_89))
																		{	/* Ieee/number.scm 678 */
																			BGL_LONGLONG_T BgL_arg2100z00_1737;

																			{	/* Ieee/number.scm 678 */
																				obj_t BgL_arg2101z00_1738;

																				BgL_arg2101z00_1738 =
																					BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																					(BgL_yz00_89);
																				BgL_arg2100z00_1737 =
																					(BGL_LONGLONG_T) (BELONG_TO_LONG
																					(BgL_arg2101z00_1738));
																			}
																			{	/* Ieee/number.scm 678 */
																				BGL_LONGLONG_T BgL_tmpz00_9343;

																				BgL_tmpz00_9343 =
																					BLLONG_TO_LLONG(BgL_xz00_88);
																				return
																					BGL_SAFE_PLUS_LLONG(BgL_tmpz00_9343,
																					BgL_arg2100z00_1737);
																			}
																		}
																	else
																		{	/* Ieee/number.scm 678 */
																			if (BIGNUMP(BgL_yz00_89))
																				{	/* Ieee/number.scm 678 */
																					return
																						bgl_bignum_add(bgl_llong_to_bignum
																						(BLLONG_TO_LLONG(BgL_xz00_88)),
																						BgL_yz00_89);
																				}
																			else
																				{	/* Ieee/number.scm 678 */
																					if (BGL_UINT64P(BgL_yz00_89))
																						{	/* Ieee/number.scm 678 */
																							uint64_t BgL_arg2106z00_1743;

																							{	/* Ieee/number.scm 678 */
																								uint64_t BgL_res4066z00_4858;

																								{	/* Ieee/number.scm 678 */
																									BGL_LONGLONG_T
																										BgL_tmpz00_9353;
																									BgL_tmpz00_9353 =
																										BLLONG_TO_LLONG
																										(BgL_xz00_88);
																									BgL_res4066z00_4858 =
																										(uint64_t)
																										(BgL_tmpz00_9353);
																								}
																								BgL_arg2106z00_1743 =
																									BgL_res4066z00_4858;
																							}
																							{	/* Ieee/number.scm 678 */
																								uint64_t BgL_za72za7_4860;

																								BgL_za72za7_4860 =
																									BGL_BINT64_TO_INT64
																									(BgL_yz00_89);
																								{	/* Ieee/number.scm 678 */
																									uint64_t BgL_tmpz00_9357;

																									BgL_tmpz00_9357 =
																										(BgL_arg2106z00_1743 +
																										BgL_za72za7_4860);
																									return
																										BGL_UINT64_TO_BUINT64
																										(BgL_tmpz00_9357);
																								}
																							}
																						}
																					else
																						{	/* Ieee/number.scm 678 */
																							return
																								BGl_errorz00zz__errorz00
																								(BGl_string4855z00zz__r4_numbers_6_5z00,
																								BGl_string4844z00zz__r4_numbers_6_5z00,
																								BgL_yz00_89);
																						}
																				}
																		}
																}
														}
												}
										}
									else
										{	/* Ieee/number.scm 678 */
											if (BGL_UINT64P(BgL_xz00_88))
												{	/* Ieee/number.scm 678 */
													if (INTEGERP(BgL_yz00_89))
														{	/* Ieee/number.scm 678 */
															uint64_t BgL_arg2109z00_1746;

															{	/* Ieee/number.scm 678 */
																uint64_t BgL_res4070z00_4865;

																{	/* Ieee/number.scm 678 */
																	long BgL_tmpz00_9365;

																	BgL_tmpz00_9365 = (long) CINT(BgL_yz00_89);
																	BgL_res4070z00_4865 =
																		(uint64_t) (BgL_tmpz00_9365);
																}
																BgL_arg2109z00_1746 = BgL_res4070z00_4865;
															}
															{	/* Ieee/number.scm 678 */
																uint64_t BgL_za71za7_4866;

																BgL_za71za7_4866 =
																	BGL_BINT64_TO_INT64(BgL_xz00_88);
																{	/* Ieee/number.scm 678 */
																	uint64_t BgL_tmpz00_9369;

																	BgL_tmpz00_9369 =
																		(BgL_za71za7_4866 + BgL_arg2109z00_1746);
																	return BGL_UINT64_TO_BUINT64(BgL_tmpz00_9369);
																}
															}
														}
													else
														{	/* Ieee/number.scm 678 */
															if (BGL_UINT64P(BgL_yz00_89))
																{	/* Ieee/number.scm 678 */
																	uint64_t BgL_za71za7_4870;
																	uint64_t BgL_za72za7_4871;

																	BgL_za71za7_4870 =
																		BGL_BINT64_TO_INT64(BgL_xz00_88);
																	BgL_za72za7_4871 =
																		BGL_BINT64_TO_INT64(BgL_yz00_89);
																	{	/* Ieee/number.scm 678 */
																		uint64_t BgL_tmpz00_9376;

																		BgL_tmpz00_9376 =
																			(BgL_za71za7_4870 + BgL_za72za7_4871);
																		return
																			BGL_UINT64_TO_BUINT64(BgL_tmpz00_9376);
																	}
																}
															else
																{	/* Ieee/number.scm 678 */
																	if (REALP(BgL_yz00_89))
																		{	/* Ieee/number.scm 678 */
																			double BgL_arg2112z00_1749;

																			{	/* Ieee/number.scm 678 */
																				uint64_t BgL_tmpz00_9381;

																				BgL_tmpz00_9381 =
																					BGL_BINT64_TO_INT64(BgL_xz00_88);
																				BgL_arg2112z00_1749 =
																					(double) (BgL_tmpz00_9381);
																			}
																			return
																				DOUBLE_TO_REAL(
																				(BgL_arg2112z00_1749 +
																					REAL_TO_DOUBLE(BgL_yz00_89)));
																		}
																	else
																		{	/* Ieee/number.scm 678 */
																			if (LLONGP(BgL_yz00_89))
																				{	/* Ieee/number.scm 678 */
																					uint64_t BgL_arg2114z00_1751;

																					{	/* Ieee/number.scm 678 */
																						uint64_t BgL_res4077z00_4879;

																						{	/* Ieee/number.scm 678 */
																							BGL_LONGLONG_T BgL_tmpz00_9389;

																							BgL_tmpz00_9389 =
																								BLLONG_TO_LLONG(BgL_yz00_89);
																							BgL_res4077z00_4879 =
																								(uint64_t) (BgL_tmpz00_9389);
																						}
																						BgL_arg2114z00_1751 =
																							BgL_res4077z00_4879;
																					}
																					{	/* Ieee/number.scm 678 */
																						uint64_t BgL_za71za7_4880;

																						BgL_za71za7_4880 =
																							BGL_BINT64_TO_INT64(BgL_xz00_88);
																						{	/* Ieee/number.scm 678 */
																							uint64_t BgL_tmpz00_9393;

																							BgL_tmpz00_9393 =
																								(BgL_za71za7_4880 +
																								BgL_arg2114z00_1751);
																							return
																								BGL_UINT64_TO_BUINT64
																								(BgL_tmpz00_9393);
																						}
																					}
																				}
																			else
																				{	/* Ieee/number.scm 678 */
																					if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_89))
																						{	/* Ieee/number.scm 678 */
																							uint64_t BgL_arg2117z00_1754;

																							{	/* Ieee/number.scm 678 */
																								BGL_LONGLONG_T
																									BgL_arg2118z00_1755;
																								{	/* Ieee/number.scm 678 */
																									obj_t BgL_arg2119z00_1756;

																									BgL_arg2119z00_1756 =
																										BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																										(BgL_yz00_89);
																									BgL_arg2118z00_1755 =
																										(BGL_LONGLONG_T)
																										(BELONG_TO_LONG
																										(BgL_arg2119z00_1756));
																								}
																								{	/* Ieee/number.scm 678 */
																									uint64_t BgL_res4079z00_4884;

																									BgL_res4079z00_4884 =
																										(uint64_t)
																										(BgL_arg2118z00_1755);
																									BgL_arg2117z00_1754 =
																										BgL_res4079z00_4884;
																								}
																							}
																							{	/* Ieee/number.scm 678 */
																								uint64_t BgL_za71za7_4885;

																								BgL_za71za7_4885 =
																									BGL_BINT64_TO_INT64
																									(BgL_xz00_88);
																								{	/* Ieee/number.scm 678 */
																									uint64_t BgL_tmpz00_9403;

																									BgL_tmpz00_9403 =
																										(BgL_za71za7_4885 +
																										BgL_arg2117z00_1754);
																									return
																										BGL_UINT64_TO_BUINT64
																										(BgL_tmpz00_9403);
																								}
																							}
																						}
																					else
																						{	/* Ieee/number.scm 678 */
																							if (BIGNUMP(BgL_yz00_89))
																								{	/* Ieee/number.scm 678 */
																									return
																										bgl_bignum_add
																										(bgl_uint64_to_bignum
																										(BGL_BINT64_TO_INT64
																											(BgL_xz00_88)),
																										BgL_yz00_89);
																								}
																							else
																								{	/* Ieee/number.scm 678 */
																									return
																										BGl_errorz00zz__errorz00
																										(BGl_string4855z00zz__r4_numbers_6_5z00,
																										BGl_string4845z00zz__r4_numbers_6_5z00,
																										BgL_yz00_89);
																								}
																						}
																				}
																		}
																}
														}
												}
											else
												{	/* Ieee/number.scm 678 */
													if (BIGNUMP(BgL_xz00_88))
														{	/* Ieee/number.scm 678 */
															if (BIGNUMP(BgL_yz00_89))
																{	/* Ieee/number.scm 678 */
																	obj_t BgL_tmpz00_9416;

																	BgL_tmpz00_9416 =
																		bgl_bignum_add(BgL_xz00_88, BgL_yz00_89);
																	return BGL_SAFE_BX_TO_FX(BgL_tmpz00_9416);
																}
															else
																{	/* Ieee/number.scm 678 */
																	if (INTEGERP(BgL_yz00_89))
																		{	/* Ieee/number.scm 678 */
																			obj_t BgL_tmpz00_9421;

																			BgL_tmpz00_9421 =
																				bgl_bignum_add(BgL_xz00_88,
																				bgl_long_to_bignum(
																					(long) CINT(BgL_yz00_89)));
																			return BGL_SAFE_BX_TO_FX(BgL_tmpz00_9421);
																		}
																	else
																		{	/* Ieee/number.scm 678 */
																			if (REALP(BgL_yz00_89))
																				{	/* Ieee/number.scm 678 */
																					return
																						DOUBLE_TO_REAL(
																						(bgl_bignum_to_flonum(BgL_xz00_88) +
																							REAL_TO_DOUBLE(BgL_yz00_89)));
																				}
																			else
																				{	/* Ieee/number.scm 678 */
																					if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_89))
																						{	/* Ieee/number.scm 678 */
																							obj_t BgL_arg2132z00_1768;

																							{	/* Ieee/number.scm 678 */
																								obj_t BgL_arg2133z00_1769;

																								BgL_arg2133z00_1769 =
																									BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																									(BgL_yz00_89);
																								{	/* Ieee/number.scm 678 */
																									long BgL_xz00_4909;

																									BgL_xz00_4909 =
																										BELONG_TO_LONG
																										(BgL_arg2133z00_1769);
																									BgL_arg2132z00_1768 =
																										bgl_long_to_bignum
																										(BgL_xz00_4909);
																							}}
																							return
																								bgl_bignum_add(BgL_xz00_88,
																								BgL_arg2132z00_1768);
																						}
																					else
																						{	/* Ieee/number.scm 678 */
																							if (LLONGP(BgL_yz00_89))
																								{	/* Ieee/number.scm 678 */
																									return
																										bgl_bignum_add(BgL_xz00_88,
																										bgl_llong_to_bignum
																										(BLLONG_TO_LLONG
																											(BgL_yz00_89)));
																								}
																							else
																								{	/* Ieee/number.scm 678 */
																									if (BGL_UINT64P(BgL_yz00_89))
																										{	/* Ieee/number.scm 678 */
																											return
																												bgl_bignum_add
																												(BgL_xz00_88,
																												bgl_uint64_to_bignum
																												(BGL_BINT64_TO_INT64
																													(BgL_yz00_89)));
																										}
																									else
																										{	/* Ieee/number.scm 678 */
																											return
																												BGl_errorz00zz__errorz00
																												(BGl_string4855z00zz__r4_numbers_6_5z00,
																												BGl_string4844z00zz__r4_numbers_6_5z00,
																												BgL_yz00_89);
																										}
																								}
																						}
																				}
																		}
																}
														}
													else
														{	/* Ieee/number.scm 678 */
															return
																BGl_errorz00zz__errorz00
																(BGl_string4855z00zz__r4_numbers_6_5z00,
																BGl_string4844z00zz__r4_numbers_6_5z00,
																BgL_xz00_88);
														}
												}
										}
								}
						}
				}
		}

	}



/* &2+ */
	obj_t BGl_z622zb2zd0zz__r4_numbers_6_5z00(obj_t BgL_envz00_6574,
		obj_t BgL_xz00_6575, obj_t BgL_yz00_6576)
	{
		{	/* Ieee/number.scm 677 */
			return BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_xz00_6575, BgL_yz00_6576);
		}

	}



/* + */
	BGL_EXPORTED_DEF obj_t BGl_zb2zb2zz__r4_numbers_6_5z00(obj_t BgL_xz00_90)
	{
		{	/* Ieee/number.scm 683 */
			if (NULLP(BgL_xz00_90))
				{	/* Ieee/number.scm 686 */
					return BINT(((long) 0));
				}
			else
				{
					obj_t BgL_sumz00_4942;
					obj_t BgL_xz00_4943;

					BgL_sumz00_4942 = CAR(((obj_t) BgL_xz00_90));
					BgL_xz00_4943 = CDR(((obj_t) BgL_xz00_90));
				BgL_loopz00_4941:
					if (PAIRP(BgL_xz00_4943))
						{
							obj_t BgL_xz00_9459;
							obj_t BgL_sumz00_9456;

							BgL_sumz00_9456 =
								BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_sumz00_4942,
								CAR(BgL_xz00_4943));
							BgL_xz00_9459 = CDR(BgL_xz00_4943);
							BgL_xz00_4943 = BgL_xz00_9459;
							BgL_sumz00_4942 = BgL_sumz00_9456;
							goto BgL_loopz00_4941;
						}
					else
						{	/* Ieee/number.scm 690 */
							return BgL_sumz00_4942;
						}
				}
		}

	}



/* &+ */
	obj_t BGl_z62zb2zd0zz__r4_numbers_6_5z00(obj_t BgL_envz00_6577,
		obj_t BgL_xz00_6578)
	{
		{	/* Ieee/number.scm 683 */
			return BGl_zb2zb2zz__r4_numbers_6_5z00(BgL_xz00_6578);
		}

	}



/* 2* */
	BGL_EXPORTED_DEF obj_t BGl_2za2za2zz__r4_numbers_6_5z00(obj_t BgL_xz00_91,
		obj_t BgL_yz00_92)
	{
		{	/* Ieee/number.scm 697 */
			if (INTEGERP(BgL_xz00_91))
				{	/* Ieee/number.scm 698 */
					if (INTEGERP(BgL_yz00_92))
						{	/* Ieee/number.scm 698 */
							long BgL_auxz00_9472;
							long BgL_tmpz00_9470;

							BgL_auxz00_9472 = (long) CINT(BgL_yz00_92);
							BgL_tmpz00_9470 = (long) CINT(BgL_xz00_91);
							return BGL_SAFE_MUL_FX(BgL_tmpz00_9470, BgL_auxz00_9472);
						}
					else
						{	/* Ieee/number.scm 698 */
							if (REALP(BgL_yz00_92))
								{	/* Ieee/number.scm 698 */
									return
										DOUBLE_TO_REAL(
										((double) (
												(long) CINT(BgL_xz00_91)) *
											REAL_TO_DOUBLE(BgL_yz00_92)));
								}
							else
								{	/* Ieee/number.scm 698 */
									if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_92))
										{	/* Ieee/number.scm 698 */
											long BgL_arg2150z00_1792;
											obj_t BgL_arg2152z00_1793;

											{	/* Ieee/number.scm 698 */
												long BgL_res4107z00_4962;

												{	/* Ieee/number.scm 698 */
													long BgL_tmpz00_9484;

													BgL_tmpz00_9484 = (long) CINT(BgL_xz00_91);
													BgL_res4107z00_4962 = (long) (BgL_tmpz00_9484);
												}
												BgL_arg2150z00_1792 = BgL_res4107z00_4962;
											}
											BgL_arg2152z00_1793 =
												BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
												(BgL_yz00_92);
											{	/* Ieee/number.scm 698 */
												long BgL_tmpz00_9488;

												BgL_tmpz00_9488 = BELONG_TO_LONG(BgL_arg2152z00_1793);
												return
													BGL_SAFE_MUL_ELONG(BgL_arg2150z00_1792,
													BgL_tmpz00_9488);
											}
										}
									else
										{	/* Ieee/number.scm 698 */
											if (LLONGP(BgL_yz00_92))
												{	/* Ieee/number.scm 698 */
													BGL_LONGLONG_T BgL_arg2154z00_1795;

													{	/* Ieee/number.scm 698 */
														BGL_LONGLONG_T BgL_res4109z00_4965;

														{	/* Ieee/number.scm 698 */
															long BgL_tmpz00_9493;

															BgL_tmpz00_9493 = (long) CINT(BgL_xz00_91);
															BgL_res4109z00_4965 =
																LONG_TO_LLONG(BgL_tmpz00_9493);
														}
														BgL_arg2154z00_1795 = BgL_res4109z00_4965;
													}
													{	/* Ieee/number.scm 698 */
														BGL_LONGLONG_T BgL_tmpz00_9496;

														BgL_tmpz00_9496 = BLLONG_TO_LLONG(BgL_yz00_92);
														return
															BGL_SAFE_MUL_LLONG(BgL_arg2154z00_1795,
															BgL_tmpz00_9496);
													}
												}
											else
												{	/* Ieee/number.scm 698 */
													if (BGL_UINT64P(BgL_yz00_92))
														{	/* Ieee/number.scm 698 */
															uint64_t BgL_arg2157z00_1798;

															{	/* Ieee/number.scm 698 */
																BGL_LONGLONG_T BgL_arg2158z00_1799;

																{	/* Ieee/number.scm 698 */
																	BGL_LONGLONG_T BgL_res4111z00_4968;

																	{	/* Ieee/number.scm 698 */
																		long BgL_tmpz00_9501;

																		BgL_tmpz00_9501 = (long) CINT(BgL_xz00_91);
																		BgL_res4111z00_4968 =
																			LONG_TO_LLONG(BgL_tmpz00_9501);
																	}
																	BgL_arg2158z00_1799 = BgL_res4111z00_4968;
																}
																{	/* Ieee/number.scm 698 */
																	uint64_t BgL_res4112z00_4970;

																	BgL_res4112z00_4970 =
																		(uint64_t) (BgL_arg2158z00_1799);
																	BgL_arg2157z00_1798 = BgL_res4112z00_4970;
															}}
															{	/* Ieee/number.scm 698 */
																uint64_t BgL_za72za7_4972;

																BgL_za72za7_4972 =
																	BGL_BINT64_TO_INT64(BgL_yz00_92);
																{	/* Ieee/number.scm 698 */
																	uint64_t BgL_tmpz00_9506;

																	BgL_tmpz00_9506 =
																		(BgL_arg2157z00_1798 * BgL_za72za7_4972);
																	return BGL_UINT64_TO_BUINT64(BgL_tmpz00_9506);
																}
															}
														}
													else
														{	/* Ieee/number.scm 698 */
															if (BIGNUMP(BgL_yz00_92))
																{	/* Ieee/number.scm 698 */
																	obj_t BgL_tmpz00_9511;

																	BgL_tmpz00_9511 =
																		bgl_bignum_mul(bgl_long_to_bignum(
																			(long) CINT(BgL_xz00_91)), BgL_yz00_92);
																	return BGL_SAFE_BX_TO_FX(BgL_tmpz00_9511);
																}
															else
																{	/* Ieee/number.scm 698 */
																	return
																		BGl_errorz00zz__errorz00
																		(BGl_string4856z00zz__r4_numbers_6_5z00,
																		BGl_string4844z00zz__r4_numbers_6_5z00,
																		BgL_yz00_92);
																}
														}
												}
										}
								}
						}
				}
			else
				{	/* Ieee/number.scm 698 */
					if (REALP(BgL_xz00_91))
						{	/* Ieee/number.scm 698 */
							if (REALP(BgL_yz00_92))
								{	/* Ieee/number.scm 698 */
									return
										DOUBLE_TO_REAL(
										(REAL_TO_DOUBLE(BgL_xz00_91) *
											REAL_TO_DOUBLE(BgL_yz00_92)));
								}
							else
								{	/* Ieee/number.scm 698 */
									if (INTEGERP(BgL_yz00_92))
										{	/* Ieee/number.scm 698 */
											return
												DOUBLE_TO_REAL(
												(REAL_TO_DOUBLE(BgL_xz00_91) *
													(double) ((long) CINT(BgL_yz00_92))));
										}
									else
										{	/* Ieee/number.scm 698 */
											if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00
												(BgL_yz00_92))
												{	/* Ieee/number.scm 698 */
													double BgL_arg2167z00_1808;

													{	/* Ieee/number.scm 698 */
														obj_t BgL_arg2168z00_1809;

														BgL_arg2168z00_1809 =
															BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
															(BgL_yz00_92);
														BgL_arg2167z00_1808 =
															(double) (BELONG_TO_LONG(BgL_arg2168z00_1809));
													}
													return
														DOUBLE_TO_REAL(
														(REAL_TO_DOUBLE(BgL_xz00_91) *
															BgL_arg2167z00_1808));
												}
											else
												{	/* Ieee/number.scm 698 */
													if (LLONGP(BgL_yz00_92))
														{	/* Ieee/number.scm 698 */
															return
																DOUBLE_TO_REAL(
																(REAL_TO_DOUBLE(BgL_xz00_91) *
																	(double) (BLLONG_TO_LLONG(BgL_yz00_92))));
														}
													else
														{	/* Ieee/number.scm 698 */
															if (BGL_UINT64P(BgL_yz00_92))
																{	/* Ieee/number.scm 698 */
																	double BgL_arg2174z00_1814;

																	{	/* Ieee/number.scm 698 */
																		double BgL_res4126z00_4998;

																		{	/* Ieee/number.scm 698 */
																			uint64_t BgL_xz00_4997;

																			BgL_xz00_4997 =
																				BGL_BINT64_TO_INT64(BgL_yz00_92);
																			BgL_res4126z00_4998 =
																				(double) (BgL_xz00_4997);
																		}
																		BgL_arg2174z00_1814 = BgL_res4126z00_4998;
																	}
																	return
																		DOUBLE_TO_REAL(
																		(REAL_TO_DOUBLE(BgL_xz00_91) *
																			BgL_arg2174z00_1814));
																}
															else
																{	/* Ieee/number.scm 698 */
																	if (BIGNUMP(BgL_yz00_92))
																		{	/* Ieee/number.scm 698 */
																			return
																				DOUBLE_TO_REAL(
																				(REAL_TO_DOUBLE(BgL_xz00_91) *
																					bgl_bignum_to_flonum(BgL_yz00_92)));
																		}
																	else
																		{	/* Ieee/number.scm 698 */
																			return
																				BGl_errorz00zz__errorz00
																				(BGl_string4856z00zz__r4_numbers_6_5z00,
																				BGl_string4844z00zz__r4_numbers_6_5z00,
																				BgL_yz00_92);
																		}
																}
														}
												}
										}
								}
						}
					else
						{	/* Ieee/number.scm 698 */
							if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_xz00_91))
								{	/* Ieee/number.scm 698 */
									if (INTEGERP(BgL_yz00_92))
										{	/* Ieee/number.scm 698 */
											obj_t BgL_arg2179z00_1819;
											long BgL_arg2180z00_1820;

											BgL_arg2179z00_1819 =
												BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
												(BgL_xz00_91);
											{	/* Ieee/number.scm 698 */
												long BgL_res4132z00_5010;

												{	/* Ieee/number.scm 698 */
													long BgL_tmpz00_9566;

													BgL_tmpz00_9566 = (long) CINT(BgL_yz00_92);
													BgL_res4132z00_5010 = (long) (BgL_tmpz00_9566);
												}
												BgL_arg2180z00_1820 = BgL_res4132z00_5010;
											}
											{	/* Ieee/number.scm 698 */
												long BgL_tmpz00_9569;

												BgL_tmpz00_9569 = BELONG_TO_LONG(BgL_arg2179z00_1819);
												return
													BGL_SAFE_MUL_ELONG(BgL_tmpz00_9569,
													BgL_arg2180z00_1820);
											}
										}
									else
										{	/* Ieee/number.scm 698 */
											if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00
												(BgL_yz00_92))
												{	/* Ieee/number.scm 698 */
													obj_t BgL_arg2182z00_1822;
													obj_t BgL_arg2183z00_1823;

													BgL_arg2182z00_1822 =
														BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
														(BgL_xz00_91);
													BgL_arg2183z00_1823 =
														BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
														(BgL_yz00_92);
													{	/* Ieee/number.scm 698 */
														long BgL_auxz00_9578;
														long BgL_tmpz00_9576;

														BgL_auxz00_9578 =
															BELONG_TO_LONG(BgL_arg2183z00_1823);
														BgL_tmpz00_9576 =
															BELONG_TO_LONG(BgL_arg2182z00_1822);
														return
															BGL_SAFE_MUL_ELONG(BgL_tmpz00_9576,
															BgL_auxz00_9578);
													}
												}
											else
												{	/* Ieee/number.scm 698 */
													if (REALP(BgL_yz00_92))
														{	/* Ieee/number.scm 698 */
															double BgL_arg2185z00_1825;

															{	/* Ieee/number.scm 698 */
																obj_t BgL_arg2186z00_1826;

																BgL_arg2186z00_1826 =
																	BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																	(BgL_xz00_91);
																BgL_arg2185z00_1825 =
																	(double) (BELONG_TO_LONG
																	(BgL_arg2186z00_1826));
															}
															return
																DOUBLE_TO_REAL(
																(BgL_arg2185z00_1825 *
																	REAL_TO_DOUBLE(BgL_yz00_92)));
														}
													else
														{	/* Ieee/number.scm 698 */
															if (LLONGP(BgL_yz00_92))
																{	/* Ieee/number.scm 698 */
																	BGL_LONGLONG_T BgL_arg2188z00_1828;

																	{	/* Ieee/number.scm 698 */
																		obj_t BgL_arg2190z00_1830;

																		BgL_arg2190z00_1830 =
																			BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																			(BgL_xz00_91);
																		BgL_arg2188z00_1828 =
																			(BGL_LONGLONG_T) (BELONG_TO_LONG
																			(BgL_arg2190z00_1830));
																	}
																	{	/* Ieee/number.scm 698 */
																		BGL_LONGLONG_T BgL_tmpz00_9594;

																		BgL_tmpz00_9594 =
																			BLLONG_TO_LLONG(BgL_yz00_92);
																		return
																			BGL_SAFE_MUL_LLONG(BgL_arg2188z00_1828,
																			BgL_tmpz00_9594);
																	}
																}
															else
																{	/* Ieee/number.scm 698 */
																	if (BGL_UINT64P(BgL_yz00_92))
																		{	/* Ieee/number.scm 698 */
																			uint64_t BgL_arg2192z00_1832;

																			{	/* Ieee/number.scm 698 */
																				BGL_LONGLONG_T BgL_arg2193z00_1833;

																				{	/* Ieee/number.scm 698 */
																					obj_t BgL_arg2194z00_1834;

																					BgL_arg2194z00_1834 =
																						BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																						(BgL_xz00_91);
																					BgL_arg2193z00_1833 =
																						(BGL_LONGLONG_T) (BELONG_TO_LONG
																						(BgL_arg2194z00_1834));
																				}
																				{	/* Ieee/number.scm 698 */
																					uint64_t BgL_res4137z00_5018;

																					BgL_res4137z00_5018 =
																						(uint64_t) (BgL_arg2193z00_1833);
																					BgL_arg2192z00_1832 =
																						BgL_res4137z00_5018;
																				}
																			}
																			{	/* Ieee/number.scm 698 */
																				uint64_t BgL_za72za7_5020;

																				BgL_za72za7_5020 =
																					BGL_BINT64_TO_INT64(BgL_yz00_92);
																				{	/* Ieee/number.scm 698 */
																					uint64_t BgL_tmpz00_9604;

																					BgL_tmpz00_9604 =
																						(BgL_arg2192z00_1832 *
																						BgL_za72za7_5020);
																					return
																						BGL_UINT64_TO_BUINT64
																						(BgL_tmpz00_9604);
																				}
																			}
																		}
																	else
																		{	/* Ieee/number.scm 698 */
																			if (BIGNUMP(BgL_yz00_92))
																				{	/* Ieee/number.scm 698 */
																					obj_t BgL_arg2196z00_1836;

																					{	/* Ieee/number.scm 698 */
																						obj_t BgL_arg2197z00_1837;

																						BgL_arg2197z00_1837 =
																							BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																							(BgL_xz00_91);
																						{	/* Ieee/number.scm 698 */
																							long BgL_xz00_5023;

																							BgL_xz00_5023 =
																								BELONG_TO_LONG
																								(BgL_arg2197z00_1837);
																							BgL_arg2196z00_1836 =
																								bgl_long_to_bignum
																								(BgL_xz00_5023);
																					}}
																					return
																						bgl_bignum_mul(BgL_arg2196z00_1836,
																						BgL_yz00_92);
																				}
																			else
																				{	/* Ieee/number.scm 698 */
																					return
																						BGl_errorz00zz__errorz00
																						(BGl_string4856z00zz__r4_numbers_6_5z00,
																						BGl_string4844z00zz__r4_numbers_6_5z00,
																						BgL_yz00_92);
																				}
																		}
																}
														}
												}
										}
								}
							else
								{	/* Ieee/number.scm 698 */
									if (LLONGP(BgL_xz00_91))
										{	/* Ieee/number.scm 698 */
											if (INTEGERP(BgL_yz00_92))
												{	/* Ieee/number.scm 698 */
													BGL_LONGLONG_T BgL_arg2201z00_1841;

													{	/* Ieee/number.scm 698 */
														BGL_LONGLONG_T BgL_res4144z00_5031;

														{	/* Ieee/number.scm 698 */
															long BgL_tmpz00_9618;

															BgL_tmpz00_9618 = (long) CINT(BgL_yz00_92);
															BgL_res4144z00_5031 =
																LONG_TO_LLONG(BgL_tmpz00_9618);
														}
														BgL_arg2201z00_1841 = BgL_res4144z00_5031;
													}
													{	/* Ieee/number.scm 698 */
														BGL_LONGLONG_T BgL_tmpz00_9621;

														BgL_tmpz00_9621 = BLLONG_TO_LLONG(BgL_xz00_91);
														return
															BGL_SAFE_MUL_LLONG(BgL_tmpz00_9621,
															BgL_arg2201z00_1841);
													}
												}
											else
												{	/* Ieee/number.scm 698 */
													if (REALP(BgL_yz00_92))
														{	/* Ieee/number.scm 698 */
															return
																DOUBLE_TO_REAL(
																((double) (BLLONG_TO_LLONG(BgL_xz00_91)) *
																	REAL_TO_DOUBLE(BgL_yz00_92)));
														}
													else
														{	/* Ieee/number.scm 698 */
															if (LLONGP(BgL_yz00_92))
																{	/* Ieee/number.scm 698 */
																	BGL_LONGLONG_T BgL_auxz00_9635;
																	BGL_LONGLONG_T BgL_tmpz00_9633;

																	BgL_auxz00_9635 =
																		BLLONG_TO_LLONG(BgL_yz00_92);
																	BgL_tmpz00_9633 =
																		BLLONG_TO_LLONG(BgL_xz00_91);
																	return
																		BGL_SAFE_MUL_LLONG(BgL_tmpz00_9633,
																		BgL_auxz00_9635);
																}
															else
																{	/* Ieee/number.scm 698 */
																	if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00
																		(BgL_yz00_92))
																		{	/* Ieee/number.scm 698 */
																			BGL_LONGLONG_T BgL_arg2209z00_1849;

																			{	/* Ieee/number.scm 698 */
																				obj_t BgL_arg2210z00_1850;

																				BgL_arg2210z00_1850 =
																					BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																					(BgL_yz00_92);
																				BgL_arg2209z00_1849 =
																					(BGL_LONGLONG_T) (BELONG_TO_LONG
																					(BgL_arg2210z00_1850));
																			}
																			{	/* Ieee/number.scm 698 */
																				BGL_LONGLONG_T BgL_tmpz00_9643;

																				BgL_tmpz00_9643 =
																					BLLONG_TO_LLONG(BgL_xz00_91);
																				return
																					BGL_SAFE_MUL_LLONG(BgL_tmpz00_9643,
																					BgL_arg2209z00_1849);
																			}
																		}
																	else
																		{	/* Ieee/number.scm 698 */
																			if (BIGNUMP(BgL_yz00_92))
																				{	/* Ieee/number.scm 698 */
																					return
																						bgl_bignum_mul(bgl_llong_to_bignum
																						(BLLONG_TO_LLONG(BgL_xz00_91)),
																						BgL_yz00_92);
																				}
																			else
																				{	/* Ieee/number.scm 698 */
																					if (BGL_UINT64P(BgL_yz00_92))
																						{	/* Ieee/number.scm 698 */
																							uint64_t BgL_arg2215z00_1855;

																							{	/* Ieee/number.scm 698 */
																								uint64_t BgL_res4152z00_5045;

																								{	/* Ieee/number.scm 698 */
																									BGL_LONGLONG_T
																										BgL_tmpz00_9653;
																									BgL_tmpz00_9653 =
																										BLLONG_TO_LLONG
																										(BgL_xz00_91);
																									BgL_res4152z00_5045 =
																										(uint64_t)
																										(BgL_tmpz00_9653);
																								}
																								BgL_arg2215z00_1855 =
																									BgL_res4152z00_5045;
																							}
																							{	/* Ieee/number.scm 698 */
																								uint64_t BgL_za72za7_5047;

																								BgL_za72za7_5047 =
																									BGL_BINT64_TO_INT64
																									(BgL_yz00_92);
																								{	/* Ieee/number.scm 698 */
																									uint64_t BgL_tmpz00_9657;

																									BgL_tmpz00_9657 =
																										(BgL_arg2215z00_1855 *
																										BgL_za72za7_5047);
																									return
																										BGL_UINT64_TO_BUINT64
																										(BgL_tmpz00_9657);
																								}
																							}
																						}
																					else
																						{	/* Ieee/number.scm 698 */
																							return
																								BGl_errorz00zz__errorz00
																								(BGl_string4856z00zz__r4_numbers_6_5z00,
																								BGl_string4844z00zz__r4_numbers_6_5z00,
																								BgL_yz00_92);
																						}
																				}
																		}
																}
														}
												}
										}
									else
										{	/* Ieee/number.scm 698 */
											if (BGL_UINT64P(BgL_xz00_91))
												{	/* Ieee/number.scm 698 */
													if (INTEGERP(BgL_yz00_92))
														{	/* Ieee/number.scm 698 */
															uint64_t BgL_arg2218z00_1858;

															{	/* Ieee/number.scm 698 */
																uint64_t BgL_res4156z00_5052;

																{	/* Ieee/number.scm 698 */
																	long BgL_tmpz00_9665;

																	BgL_tmpz00_9665 = (long) CINT(BgL_yz00_92);
																	BgL_res4156z00_5052 =
																		(uint64_t) (BgL_tmpz00_9665);
																}
																BgL_arg2218z00_1858 = BgL_res4156z00_5052;
															}
															{	/* Ieee/number.scm 698 */
																uint64_t BgL_za71za7_5053;

																BgL_za71za7_5053 =
																	BGL_BINT64_TO_INT64(BgL_xz00_91);
																{	/* Ieee/number.scm 698 */
																	uint64_t BgL_tmpz00_9669;

																	BgL_tmpz00_9669 =
																		(BgL_za71za7_5053 * BgL_arg2218z00_1858);
																	return BGL_UINT64_TO_BUINT64(BgL_tmpz00_9669);
																}
															}
														}
													else
														{	/* Ieee/number.scm 698 */
															if (BGL_UINT64P(BgL_yz00_92))
																{	/* Ieee/number.scm 698 */
																	uint64_t BgL_za71za7_5057;
																	uint64_t BgL_za72za7_5058;

																	BgL_za71za7_5057 =
																		BGL_BINT64_TO_INT64(BgL_xz00_91);
																	BgL_za72za7_5058 =
																		BGL_BINT64_TO_INT64(BgL_yz00_92);
																	{	/* Ieee/number.scm 698 */
																		uint64_t BgL_tmpz00_9676;

																		BgL_tmpz00_9676 =
																			(BgL_za71za7_5057 * BgL_za72za7_5058);
																		return
																			BGL_UINT64_TO_BUINT64(BgL_tmpz00_9676);
																	}
																}
															else
																{	/* Ieee/number.scm 698 */
																	if (REALP(BgL_yz00_92))
																		{	/* Ieee/number.scm 698 */
																			double BgL_arg2221z00_1861;

																			{	/* Ieee/number.scm 698 */
																				uint64_t BgL_tmpz00_9681;

																				BgL_tmpz00_9681 =
																					BGL_BINT64_TO_INT64(BgL_xz00_91);
																				BgL_arg2221z00_1861 =
																					(double) (BgL_tmpz00_9681);
																			}
																			return
																				DOUBLE_TO_REAL(
																				(BgL_arg2221z00_1861 *
																					REAL_TO_DOUBLE(BgL_yz00_92)));
																		}
																	else
																		{	/* Ieee/number.scm 698 */
																			if (LLONGP(BgL_yz00_92))
																				{	/* Ieee/number.scm 698 */
																					uint64_t BgL_arg2223z00_1863;

																					{	/* Ieee/number.scm 698 */
																						uint64_t BgL_res4163z00_5066;

																						{	/* Ieee/number.scm 698 */
																							BGL_LONGLONG_T BgL_tmpz00_9689;

																							BgL_tmpz00_9689 =
																								BLLONG_TO_LLONG(BgL_yz00_92);
																							BgL_res4163z00_5066 =
																								(uint64_t) (BgL_tmpz00_9689);
																						}
																						BgL_arg2223z00_1863 =
																							BgL_res4163z00_5066;
																					}
																					{	/* Ieee/number.scm 698 */
																						uint64_t BgL_za71za7_5067;

																						BgL_za71za7_5067 =
																							BGL_BINT64_TO_INT64(BgL_xz00_91);
																						{	/* Ieee/number.scm 698 */
																							uint64_t BgL_tmpz00_9693;

																							BgL_tmpz00_9693 =
																								(BgL_za71za7_5067 *
																								BgL_arg2223z00_1863);
																							return
																								BGL_UINT64_TO_BUINT64
																								(BgL_tmpz00_9693);
																						}
																					}
																				}
																			else
																				{	/* Ieee/number.scm 698 */
																					if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_92))
																						{	/* Ieee/number.scm 698 */
																							uint64_t BgL_arg2226z00_1866;

																							{	/* Ieee/number.scm 698 */
																								BGL_LONGLONG_T
																									BgL_arg2227z00_1867;
																								{	/* Ieee/number.scm 698 */
																									obj_t BgL_arg2228z00_1868;

																									BgL_arg2228z00_1868 =
																										BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																										(BgL_yz00_92);
																									BgL_arg2227z00_1867 =
																										(BGL_LONGLONG_T)
																										(BELONG_TO_LONG
																										(BgL_arg2228z00_1868));
																								}
																								{	/* Ieee/number.scm 698 */
																									uint64_t BgL_res4165z00_5071;

																									BgL_res4165z00_5071 =
																										(uint64_t)
																										(BgL_arg2227z00_1867);
																									BgL_arg2226z00_1866 =
																										BgL_res4165z00_5071;
																								}
																							}
																							{	/* Ieee/number.scm 698 */
																								uint64_t BgL_za71za7_5072;

																								BgL_za71za7_5072 =
																									BGL_BINT64_TO_INT64
																									(BgL_xz00_91);
																								{	/* Ieee/number.scm 698 */
																									uint64_t BgL_tmpz00_9703;

																									BgL_tmpz00_9703 =
																										(BgL_za71za7_5072 *
																										BgL_arg2226z00_1866);
																									return
																										BGL_UINT64_TO_BUINT64
																										(BgL_tmpz00_9703);
																								}
																							}
																						}
																					else
																						{	/* Ieee/number.scm 698 */
																							if (BIGNUMP(BgL_yz00_92))
																								{	/* Ieee/number.scm 698 */
																									return
																										bgl_bignum_mul
																										(bgl_uint64_to_bignum
																										(BGL_BINT64_TO_INT64
																											(BgL_xz00_91)),
																										BgL_yz00_92);
																								}
																							else
																								{	/* Ieee/number.scm 698 */
																									return
																										BGl_errorz00zz__errorz00
																										(BGl_string4856z00zz__r4_numbers_6_5z00,
																										BGl_string4845z00zz__r4_numbers_6_5z00,
																										BgL_yz00_92);
																								}
																						}
																				}
																		}
																}
														}
												}
											else
												{	/* Ieee/number.scm 698 */
													if (BIGNUMP(BgL_xz00_91))
														{	/* Ieee/number.scm 698 */
															if (BIGNUMP(BgL_yz00_92))
																{	/* Ieee/number.scm 698 */
																	obj_t BgL_tmpz00_9716;

																	BgL_tmpz00_9716 =
																		bgl_bignum_mul(BgL_xz00_91, BgL_yz00_92);
																	return BGL_SAFE_BX_TO_FX(BgL_tmpz00_9716);
																}
															else
																{	/* Ieee/number.scm 698 */
																	if (INTEGERP(BgL_yz00_92))
																		{	/* Ieee/number.scm 698 */
																			obj_t BgL_tmpz00_9721;

																			BgL_tmpz00_9721 =
																				bgl_bignum_mul(BgL_xz00_91,
																				bgl_long_to_bignum(
																					(long) CINT(BgL_yz00_92)));
																			return BGL_SAFE_BX_TO_FX(BgL_tmpz00_9721);
																		}
																	else
																		{	/* Ieee/number.scm 698 */
																			if (REALP(BgL_yz00_92))
																				{	/* Ieee/number.scm 698 */
																					return
																						DOUBLE_TO_REAL(
																						(bgl_bignum_to_flonum(BgL_xz00_91) *
																							REAL_TO_DOUBLE(BgL_yz00_92)));
																				}
																			else
																				{	/* Ieee/number.scm 698 */
																					if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_92))
																						{	/* Ieee/number.scm 698 */
																							obj_t BgL_arg2240z00_1880;

																							{	/* Ieee/number.scm 698 */
																								obj_t BgL_arg2241z00_1881;

																								BgL_arg2241z00_1881 =
																									BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																									(BgL_yz00_92);
																								{	/* Ieee/number.scm 698 */
																									long BgL_xz00_5096;

																									BgL_xz00_5096 =
																										BELONG_TO_LONG
																										(BgL_arg2241z00_1881);
																									BgL_arg2240z00_1880 =
																										bgl_long_to_bignum
																										(BgL_xz00_5096);
																							}}
																							return
																								bgl_bignum_mul(BgL_xz00_91,
																								BgL_arg2240z00_1880);
																						}
																					else
																						{	/* Ieee/number.scm 698 */
																							if (LLONGP(BgL_yz00_92))
																								{	/* Ieee/number.scm 698 */
																									return
																										bgl_bignum_mul(BgL_xz00_91,
																										bgl_llong_to_bignum
																										(BLLONG_TO_LLONG
																											(BgL_yz00_92)));
																								}
																							else
																								{	/* Ieee/number.scm 698 */
																									if (BGL_UINT64P(BgL_yz00_92))
																										{	/* Ieee/number.scm 698 */
																											return
																												bgl_bignum_mul
																												(BgL_xz00_91,
																												bgl_uint64_to_bignum
																												(BGL_BINT64_TO_INT64
																													(BgL_yz00_92)));
																										}
																									else
																										{	/* Ieee/number.scm 698 */
																											return
																												BGl_errorz00zz__errorz00
																												(BGl_string4856z00zz__r4_numbers_6_5z00,
																												BGl_string4844z00zz__r4_numbers_6_5z00,
																												BgL_yz00_92);
																										}
																								}
																						}
																				}
																		}
																}
														}
													else
														{	/* Ieee/number.scm 698 */
															return
																BGl_errorz00zz__errorz00
																(BGl_string4856z00zz__r4_numbers_6_5z00,
																BGl_string4844z00zz__r4_numbers_6_5z00,
																BgL_xz00_91);
														}
												}
										}
								}
						}
				}
		}

	}



/* &2* */
	obj_t BGl_z622za2zc0zz__r4_numbers_6_5z00(obj_t BgL_envz00_6579,
		obj_t BgL_xz00_6580, obj_t BgL_yz00_6581)
	{
		{	/* Ieee/number.scm 697 */
			return BGl_2za2za2zz__r4_numbers_6_5z00(BgL_xz00_6580, BgL_yz00_6581);
		}

	}



/* * */
	BGL_EXPORTED_DEF obj_t BGl_za2za2zz__r4_numbers_6_5z00(obj_t BgL_xz00_93)
	{
		{	/* Ieee/number.scm 703 */
			{
				obj_t BgL_productz00_5126;
				obj_t BgL_xz00_5127;

				BgL_productz00_5126 = BINT(((long) 1));
				BgL_xz00_5127 = BgL_xz00_93;
			BgL_loopz00_5125:
				if (PAIRP(BgL_xz00_5127))
					{
						obj_t BgL_xz00_9756;
						obj_t BgL_productz00_9753;

						BgL_productz00_9753 =
							BGl_2za2za2zz__r4_numbers_6_5z00(BgL_productz00_5126,
							CAR(BgL_xz00_5127));
						BgL_xz00_9756 = CDR(BgL_xz00_5127);
						BgL_xz00_5127 = BgL_xz00_9756;
						BgL_productz00_5126 = BgL_productz00_9753;
						goto BgL_loopz00_5125;
					}
				else
					{	/* Ieee/number.scm 706 */
						return BgL_productz00_5126;
					}
			}
		}

	}



/* &* */
	obj_t BGl_z62za2zc0zz__r4_numbers_6_5z00(obj_t BgL_envz00_6582,
		obj_t BgL_xz00_6583)
	{
		{	/* Ieee/number.scm 703 */
			return BGl_za2za2zz__r4_numbers_6_5z00(BgL_xz00_6583);
		}

	}



/* 2- */
	BGL_EXPORTED_DEF obj_t BGl_2zd2zd2zz__r4_numbers_6_5z00(obj_t BgL_xz00_94,
		obj_t BgL_yz00_95)
	{
		{	/* Ieee/number.scm 713 */
			if (INTEGERP(BgL_xz00_94))
				{	/* Ieee/number.scm 714 */
					if (INTEGERP(BgL_yz00_95))
						{	/* Ieee/number.scm 714 */
							long BgL_auxz00_9766;
							long BgL_tmpz00_9764;

							BgL_auxz00_9766 = (long) CINT(BgL_yz00_95);
							BgL_tmpz00_9764 = (long) CINT(BgL_xz00_94);
							return BGL_SAFE_MINUS_FX(BgL_tmpz00_9764, BgL_auxz00_9766);
						}
					else
						{	/* Ieee/number.scm 714 */
							if (REALP(BgL_yz00_95))
								{	/* Ieee/number.scm 714 */
									return
										DOUBLE_TO_REAL(
										((double) (
												(long) CINT(BgL_xz00_94)) -
											REAL_TO_DOUBLE(BgL_yz00_95)));
								}
							else
								{	/* Ieee/number.scm 714 */
									if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_95))
										{	/* Ieee/number.scm 714 */
											long BgL_arg2258z00_1901;
											obj_t BgL_arg2259z00_1902;

											{	/* Ieee/number.scm 714 */
												long BgL_res4192z00_5146;

												{	/* Ieee/number.scm 714 */
													long BgL_tmpz00_9778;

													BgL_tmpz00_9778 = (long) CINT(BgL_xz00_94);
													BgL_res4192z00_5146 = (long) (BgL_tmpz00_9778);
												}
												BgL_arg2258z00_1901 = BgL_res4192z00_5146;
											}
											BgL_arg2259z00_1902 =
												BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
												(BgL_yz00_95);
											{	/* Ieee/number.scm 714 */
												long BgL_tmpz00_9782;

												BgL_tmpz00_9782 = BELONG_TO_LONG(BgL_arg2259z00_1902);
												return
													BGL_SAFE_MINUS_ELONG(BgL_arg2258z00_1901,
													BgL_tmpz00_9782);
											}
										}
									else
										{	/* Ieee/number.scm 714 */
											if (LLONGP(BgL_yz00_95))
												{	/* Ieee/number.scm 714 */
													BGL_LONGLONG_T BgL_arg2261z00_1904;

													{	/* Ieee/number.scm 714 */
														BGL_LONGLONG_T BgL_res4194z00_5149;

														{	/* Ieee/number.scm 714 */
															long BgL_tmpz00_9787;

															BgL_tmpz00_9787 = (long) CINT(BgL_xz00_94);
															BgL_res4194z00_5149 =
																LONG_TO_LLONG(BgL_tmpz00_9787);
														}
														BgL_arg2261z00_1904 = BgL_res4194z00_5149;
													}
													{	/* Ieee/number.scm 714 */
														BGL_LONGLONG_T BgL_tmpz00_9790;

														BgL_tmpz00_9790 = BLLONG_TO_LLONG(BgL_yz00_95);
														return
															BGL_SAFE_MINUS_LLONG(BgL_arg2261z00_1904,
															BgL_tmpz00_9790);
													}
												}
											else
												{	/* Ieee/number.scm 714 */
													if (BGL_UINT64P(BgL_yz00_95))
														{	/* Ieee/number.scm 714 */
															uint64_t BgL_arg2264z00_1907;

															{	/* Ieee/number.scm 714 */
																BGL_LONGLONG_T BgL_arg2265z00_1908;

																{	/* Ieee/number.scm 714 */
																	BGL_LONGLONG_T BgL_res4196z00_5152;

																	{	/* Ieee/number.scm 714 */
																		long BgL_tmpz00_9795;

																		BgL_tmpz00_9795 = (long) CINT(BgL_xz00_94);
																		BgL_res4196z00_5152 =
																			LONG_TO_LLONG(BgL_tmpz00_9795);
																	}
																	BgL_arg2265z00_1908 = BgL_res4196z00_5152;
																}
																{	/* Ieee/number.scm 714 */
																	uint64_t BgL_res4197z00_5154;

																	BgL_res4197z00_5154 =
																		(uint64_t) (BgL_arg2265z00_1908);
																	BgL_arg2264z00_1907 = BgL_res4197z00_5154;
															}}
															{	/* Ieee/number.scm 714 */
																uint64_t BgL_za72za7_5156;

																BgL_za72za7_5156 =
																	BGL_BINT64_TO_INT64(BgL_yz00_95);
																{	/* Ieee/number.scm 714 */
																	uint64_t BgL_tmpz00_9800;

																	BgL_tmpz00_9800 =
																		(BgL_arg2264z00_1907 - BgL_za72za7_5156);
																	return BGL_UINT64_TO_BUINT64(BgL_tmpz00_9800);
																}
															}
														}
													else
														{	/* Ieee/number.scm 714 */
															if (BIGNUMP(BgL_yz00_95))
																{	/* Ieee/number.scm 714 */
																	obj_t BgL_tmpz00_9805;

																	BgL_tmpz00_9805 =
																		bgl_bignum_sub(bgl_long_to_bignum(
																			(long) CINT(BgL_xz00_94)), BgL_yz00_95);
																	return BGL_SAFE_BX_TO_FX(BgL_tmpz00_9805);
																}
															else
																{	/* Ieee/number.scm 714 */
																	return
																		BGl_errorz00zz__errorz00
																		(BGl_string4857z00zz__r4_numbers_6_5z00,
																		BGl_string4844z00zz__r4_numbers_6_5z00,
																		BgL_yz00_95);
																}
														}
												}
										}
								}
						}
				}
			else
				{	/* Ieee/number.scm 714 */
					if (REALP(BgL_xz00_94))
						{	/* Ieee/number.scm 714 */
							if (REALP(BgL_yz00_95))
								{	/* Ieee/number.scm 714 */
									return
										DOUBLE_TO_REAL(
										(REAL_TO_DOUBLE(BgL_xz00_94) -
											REAL_TO_DOUBLE(BgL_yz00_95)));
								}
							else
								{	/* Ieee/number.scm 714 */
									if (INTEGERP(BgL_yz00_95))
										{	/* Ieee/number.scm 714 */
											return
												DOUBLE_TO_REAL(
												(REAL_TO_DOUBLE(BgL_xz00_94) -
													(double) ((long) CINT(BgL_yz00_95))));
										}
									else
										{	/* Ieee/number.scm 714 */
											if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00
												(BgL_yz00_95))
												{	/* Ieee/number.scm 714 */
													double BgL_arg2275z00_1917;

													{	/* Ieee/number.scm 714 */
														obj_t BgL_arg2276z00_1918;

														BgL_arg2276z00_1918 =
															BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
															(BgL_yz00_95);
														BgL_arg2275z00_1917 =
															(double) (BELONG_TO_LONG(BgL_arg2276z00_1918));
													}
													return
														DOUBLE_TO_REAL(
														(REAL_TO_DOUBLE(BgL_xz00_94) -
															BgL_arg2275z00_1917));
												}
											else
												{	/* Ieee/number.scm 714 */
													if (LLONGP(BgL_yz00_95))
														{	/* Ieee/number.scm 714 */
															return
																DOUBLE_TO_REAL(
																(REAL_TO_DOUBLE(BgL_xz00_94) -
																	(double) (BLLONG_TO_LLONG(BgL_yz00_95))));
														}
													else
														{	/* Ieee/number.scm 714 */
															if (BGL_UINT64P(BgL_yz00_95))
																{	/* Ieee/number.scm 714 */
																	double BgL_arg2282z00_1923;

																	{	/* Ieee/number.scm 714 */
																		double BgL_res4211z00_5182;

																		{	/* Ieee/number.scm 714 */
																			uint64_t BgL_xz00_5181;

																			BgL_xz00_5181 =
																				BGL_BINT64_TO_INT64(BgL_yz00_95);
																			BgL_res4211z00_5182 =
																				(double) (BgL_xz00_5181);
																		}
																		BgL_arg2282z00_1923 = BgL_res4211z00_5182;
																	}
																	return
																		DOUBLE_TO_REAL(
																		(REAL_TO_DOUBLE(BgL_xz00_94) -
																			BgL_arg2282z00_1923));
																}
															else
																{	/* Ieee/number.scm 714 */
																	if (BIGNUMP(BgL_yz00_95))
																		{	/* Ieee/number.scm 714 */
																			return
																				DOUBLE_TO_REAL(
																				(REAL_TO_DOUBLE(BgL_xz00_94) -
																					bgl_bignum_to_flonum(BgL_yz00_95)));
																		}
																	else
																		{	/* Ieee/number.scm 714 */
																			return
																				BGl_errorz00zz__errorz00
																				(BGl_string4857z00zz__r4_numbers_6_5z00,
																				BGl_string4844z00zz__r4_numbers_6_5z00,
																				BgL_yz00_95);
																		}
																}
														}
												}
										}
								}
						}
					else
						{	/* Ieee/number.scm 714 */
							if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_xz00_94))
								{	/* Ieee/number.scm 714 */
									if (INTEGERP(BgL_yz00_95))
										{	/* Ieee/number.scm 714 */
											obj_t BgL_arg2287z00_1928;
											long BgL_arg2288z00_1929;

											BgL_arg2287z00_1928 =
												BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
												(BgL_xz00_94);
											{	/* Ieee/number.scm 714 */
												long BgL_res4217z00_5194;

												{	/* Ieee/number.scm 714 */
													long BgL_tmpz00_9860;

													BgL_tmpz00_9860 = (long) CINT(BgL_yz00_95);
													BgL_res4217z00_5194 = (long) (BgL_tmpz00_9860);
												}
												BgL_arg2288z00_1929 = BgL_res4217z00_5194;
											}
											{	/* Ieee/number.scm 714 */
												long BgL_tmpz00_9863;

												BgL_tmpz00_9863 = BELONG_TO_LONG(BgL_arg2287z00_1928);
												return
													BGL_SAFE_MINUS_ELONG(BgL_tmpz00_9863,
													BgL_arg2288z00_1929);
											}
										}
									else
										{	/* Ieee/number.scm 714 */
											if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00
												(BgL_yz00_95))
												{	/* Ieee/number.scm 714 */
													obj_t BgL_arg2290z00_1931;
													obj_t BgL_arg2291z00_1932;

													BgL_arg2290z00_1931 =
														BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
														(BgL_xz00_94);
													BgL_arg2291z00_1932 =
														BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
														(BgL_yz00_95);
													{	/* Ieee/number.scm 714 */
														long BgL_auxz00_9872;
														long BgL_tmpz00_9870;

														BgL_auxz00_9872 =
															BELONG_TO_LONG(BgL_arg2291z00_1932);
														BgL_tmpz00_9870 =
															BELONG_TO_LONG(BgL_arg2290z00_1931);
														return
															BGL_SAFE_MINUS_ELONG(BgL_tmpz00_9870,
															BgL_auxz00_9872);
													}
												}
											else
												{	/* Ieee/number.scm 714 */
													if (REALP(BgL_yz00_95))
														{	/* Ieee/number.scm 714 */
															double BgL_arg2294z00_1934;

															{	/* Ieee/number.scm 714 */
																obj_t BgL_arg2295z00_1935;

																BgL_arg2295z00_1935 =
																	BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																	(BgL_xz00_94);
																BgL_arg2294z00_1934 =
																	(double) (BELONG_TO_LONG
																	(BgL_arg2295z00_1935));
															}
															return
																DOUBLE_TO_REAL(
																(BgL_arg2294z00_1934 -
																	REAL_TO_DOUBLE(BgL_yz00_95)));
														}
													else
														{	/* Ieee/number.scm 714 */
															if (LLONGP(BgL_yz00_95))
																{	/* Ieee/number.scm 714 */
																	BGL_LONGLONG_T BgL_arg2297z00_1937;

																	{	/* Ieee/number.scm 714 */
																		obj_t BgL_arg2299z00_1939;

																		BgL_arg2299z00_1939 =
																			BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																			(BgL_xz00_94);
																		BgL_arg2297z00_1937 =
																			(BGL_LONGLONG_T) (BELONG_TO_LONG
																			(BgL_arg2299z00_1939));
																	}
																	{	/* Ieee/number.scm 714 */
																		BGL_LONGLONG_T BgL_tmpz00_9888;

																		BgL_tmpz00_9888 =
																			BLLONG_TO_LLONG(BgL_yz00_95);
																		return
																			BGL_SAFE_MINUS_LLONG(BgL_arg2297z00_1937,
																			BgL_tmpz00_9888);
																	}
																}
															else
																{	/* Ieee/number.scm 714 */
																	if (BGL_UINT64P(BgL_yz00_95))
																		{	/* Ieee/number.scm 714 */
																			uint64_t BgL_arg2302z00_1941;

																			{	/* Ieee/number.scm 714 */
																				BGL_LONGLONG_T BgL_arg2303z00_1942;

																				{	/* Ieee/number.scm 714 */
																					obj_t BgL_arg2305z00_1943;

																					BgL_arg2305z00_1943 =
																						BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																						(BgL_xz00_94);
																					BgL_arg2303z00_1942 =
																						(BGL_LONGLONG_T) (BELONG_TO_LONG
																						(BgL_arg2305z00_1943));
																				}
																				{	/* Ieee/number.scm 714 */
																					uint64_t BgL_res4222z00_5202;

																					BgL_res4222z00_5202 =
																						(uint64_t) (BgL_arg2303z00_1942);
																					BgL_arg2302z00_1941 =
																						BgL_res4222z00_5202;
																				}
																			}
																			{	/* Ieee/number.scm 714 */
																				uint64_t BgL_za72za7_5204;

																				BgL_za72za7_5204 =
																					BGL_BINT64_TO_INT64(BgL_yz00_95);
																				{	/* Ieee/number.scm 714 */
																					uint64_t BgL_tmpz00_9898;

																					BgL_tmpz00_9898 =
																						(BgL_arg2302z00_1941 -
																						BgL_za72za7_5204);
																					return
																						BGL_UINT64_TO_BUINT64
																						(BgL_tmpz00_9898);
																				}
																			}
																		}
																	else
																		{	/* Ieee/number.scm 714 */
																			if (BIGNUMP(BgL_yz00_95))
																				{	/* Ieee/number.scm 714 */
																					obj_t BgL_arg2307z00_1945;

																					{	/* Ieee/number.scm 714 */
																						obj_t BgL_arg2308z00_1946;

																						BgL_arg2308z00_1946 =
																							BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																							(BgL_xz00_94);
																						{	/* Ieee/number.scm 714 */
																							long BgL_xz00_5207;

																							BgL_xz00_5207 =
																								BELONG_TO_LONG
																								(BgL_arg2308z00_1946);
																							BgL_arg2307z00_1945 =
																								bgl_long_to_bignum
																								(BgL_xz00_5207);
																					}}
																					return
																						bgl_bignum_sub(BgL_arg2307z00_1945,
																						BgL_yz00_95);
																				}
																			else
																				{	/* Ieee/number.scm 714 */
																					return
																						BGl_errorz00zz__errorz00
																						(BGl_string4857z00zz__r4_numbers_6_5z00,
																						BGl_string4844z00zz__r4_numbers_6_5z00,
																						BgL_yz00_95);
																				}
																		}
																}
														}
												}
										}
								}
							else
								{	/* Ieee/number.scm 714 */
									if (LLONGP(BgL_xz00_94))
										{	/* Ieee/number.scm 714 */
											if (INTEGERP(BgL_yz00_95))
												{	/* Ieee/number.scm 714 */
													BGL_LONGLONG_T BgL_arg2312z00_1950;

													{	/* Ieee/number.scm 714 */
														BGL_LONGLONG_T BgL_res4229z00_5215;

														{	/* Ieee/number.scm 714 */
															long BgL_tmpz00_9912;

															BgL_tmpz00_9912 = (long) CINT(BgL_yz00_95);
															BgL_res4229z00_5215 =
																LONG_TO_LLONG(BgL_tmpz00_9912);
														}
														BgL_arg2312z00_1950 = BgL_res4229z00_5215;
													}
													{	/* Ieee/number.scm 714 */
														BGL_LONGLONG_T BgL_tmpz00_9915;

														BgL_tmpz00_9915 = BLLONG_TO_LLONG(BgL_xz00_94);
														return
															BGL_SAFE_MINUS_LLONG(BgL_tmpz00_9915,
															BgL_arg2312z00_1950);
													}
												}
											else
												{	/* Ieee/number.scm 714 */
													if (REALP(BgL_yz00_95))
														{	/* Ieee/number.scm 714 */
															return
																DOUBLE_TO_REAL(
																((double) (BLLONG_TO_LLONG(BgL_xz00_94)) -
																	REAL_TO_DOUBLE(BgL_yz00_95)));
														}
													else
														{	/* Ieee/number.scm 714 */
															if (LLONGP(BgL_yz00_95))
																{	/* Ieee/number.scm 714 */
																	BGL_LONGLONG_T BgL_auxz00_9929;
																	BGL_LONGLONG_T BgL_tmpz00_9927;

																	BgL_auxz00_9929 =
																		BLLONG_TO_LLONG(BgL_yz00_95);
																	BgL_tmpz00_9927 =
																		BLLONG_TO_LLONG(BgL_xz00_94);
																	return
																		BGL_SAFE_MINUS_LLONG(BgL_tmpz00_9927,
																		BgL_auxz00_9929);
																}
															else
																{	/* Ieee/number.scm 714 */
																	if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00
																		(BgL_yz00_95))
																		{	/* Ieee/number.scm 714 */
																			BGL_LONGLONG_T BgL_arg2321z00_1958;

																			{	/* Ieee/number.scm 714 */
																				obj_t BgL_arg2322z00_1959;

																				BgL_arg2322z00_1959 =
																					BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																					(BgL_yz00_95);
																				BgL_arg2321z00_1958 =
																					(BGL_LONGLONG_T) (BELONG_TO_LONG
																					(BgL_arg2322z00_1959));
																			}
																			{	/* Ieee/number.scm 714 */
																				BGL_LONGLONG_T BgL_tmpz00_9937;

																				BgL_tmpz00_9937 =
																					BLLONG_TO_LLONG(BgL_xz00_94);
																				return
																					BGL_SAFE_MINUS_LLONG(BgL_tmpz00_9937,
																					BgL_arg2321z00_1958);
																			}
																		}
																	else
																		{	/* Ieee/number.scm 714 */
																			if (BIGNUMP(BgL_yz00_95))
																				{	/* Ieee/number.scm 714 */
																					return
																						bgl_bignum_sub(bgl_llong_to_bignum
																						(BLLONG_TO_LLONG(BgL_xz00_94)),
																						BgL_yz00_95);
																				}
																			else
																				{	/* Ieee/number.scm 714 */
																					if (BGL_UINT64P(BgL_yz00_95))
																						{	/* Ieee/number.scm 714 */
																							uint64_t BgL_arg2327z00_1964;

																							{	/* Ieee/number.scm 714 */
																								uint64_t BgL_res4237z00_5229;

																								{	/* Ieee/number.scm 714 */
																									BGL_LONGLONG_T
																										BgL_tmpz00_9947;
																									BgL_tmpz00_9947 =
																										BLLONG_TO_LLONG
																										(BgL_xz00_94);
																									BgL_res4237z00_5229 =
																										(uint64_t)
																										(BgL_tmpz00_9947);
																								}
																								BgL_arg2327z00_1964 =
																									BgL_res4237z00_5229;
																							}
																							{	/* Ieee/number.scm 714 */
																								uint64_t BgL_za72za7_5231;

																								BgL_za72za7_5231 =
																									BGL_BINT64_TO_INT64
																									(BgL_yz00_95);
																								{	/* Ieee/number.scm 714 */
																									uint64_t BgL_tmpz00_9951;

																									BgL_tmpz00_9951 =
																										(BgL_arg2327z00_1964 -
																										BgL_za72za7_5231);
																									return
																										BGL_UINT64_TO_BUINT64
																										(BgL_tmpz00_9951);
																								}
																							}
																						}
																					else
																						{	/* Ieee/number.scm 714 */
																							return
																								BGl_errorz00zz__errorz00
																								(BGl_string4857z00zz__r4_numbers_6_5z00,
																								BGl_string4844z00zz__r4_numbers_6_5z00,
																								BgL_yz00_95);
																						}
																				}
																		}
																}
														}
												}
										}
									else
										{	/* Ieee/number.scm 714 */
											if (BGL_UINT64P(BgL_xz00_94))
												{	/* Ieee/number.scm 714 */
													if (INTEGERP(BgL_yz00_95))
														{	/* Ieee/number.scm 714 */
															uint64_t BgL_arg2331z00_1967;

															{	/* Ieee/number.scm 714 */
																uint64_t BgL_res4241z00_5236;

																{	/* Ieee/number.scm 714 */
																	long BgL_tmpz00_9959;

																	BgL_tmpz00_9959 = (long) CINT(BgL_yz00_95);
																	BgL_res4241z00_5236 =
																		(uint64_t) (BgL_tmpz00_9959);
																}
																BgL_arg2331z00_1967 = BgL_res4241z00_5236;
															}
															{	/* Ieee/number.scm 714 */
																uint64_t BgL_za71za7_5237;

																BgL_za71za7_5237 =
																	BGL_BINT64_TO_INT64(BgL_xz00_94);
																{	/* Ieee/number.scm 714 */
																	uint64_t BgL_tmpz00_9963;

																	BgL_tmpz00_9963 =
																		(BgL_za71za7_5237 - BgL_arg2331z00_1967);
																	return BGL_UINT64_TO_BUINT64(BgL_tmpz00_9963);
																}
															}
														}
													else
														{	/* Ieee/number.scm 714 */
															if (BGL_UINT64P(BgL_yz00_95))
																{	/* Ieee/number.scm 714 */
																	uint64_t BgL_za71za7_5241;
																	uint64_t BgL_za72za7_5242;

																	BgL_za71za7_5241 =
																		BGL_BINT64_TO_INT64(BgL_xz00_94);
																	BgL_za72za7_5242 =
																		BGL_BINT64_TO_INT64(BgL_yz00_95);
																	{	/* Ieee/number.scm 714 */
																		uint64_t BgL_tmpz00_9970;

																		BgL_tmpz00_9970 =
																			(BgL_za71za7_5241 - BgL_za72za7_5242);
																		return
																			BGL_UINT64_TO_BUINT64(BgL_tmpz00_9970);
																	}
																}
															else
																{	/* Ieee/number.scm 714 */
																	if (REALP(BgL_yz00_95))
																		{	/* Ieee/number.scm 714 */
																			double BgL_arg2334z00_1970;

																			{	/* Ieee/number.scm 714 */
																				uint64_t BgL_tmpz00_9975;

																				BgL_tmpz00_9975 =
																					BGL_BINT64_TO_INT64(BgL_xz00_94);
																				BgL_arg2334z00_1970 =
																					(double) (BgL_tmpz00_9975);
																			}
																			return
																				DOUBLE_TO_REAL(
																				(BgL_arg2334z00_1970 -
																					REAL_TO_DOUBLE(BgL_yz00_95)));
																		}
																	else
																		{	/* Ieee/number.scm 714 */
																			if (LLONGP(BgL_yz00_95))
																				{	/* Ieee/number.scm 714 */
																					uint64_t BgL_arg2336z00_1972;

																					{	/* Ieee/number.scm 714 */
																						uint64_t BgL_res4248z00_5250;

																						{	/* Ieee/number.scm 714 */
																							BGL_LONGLONG_T BgL_tmpz00_9983;

																							BgL_tmpz00_9983 =
																								BLLONG_TO_LLONG(BgL_yz00_95);
																							BgL_res4248z00_5250 =
																								(uint64_t) (BgL_tmpz00_9983);
																						}
																						BgL_arg2336z00_1972 =
																							BgL_res4248z00_5250;
																					}
																					{	/* Ieee/number.scm 714 */
																						uint64_t BgL_za71za7_5251;

																						BgL_za71za7_5251 =
																							BGL_BINT64_TO_INT64(BgL_xz00_94);
																						{	/* Ieee/number.scm 714 */
																							uint64_t BgL_tmpz00_9987;

																							BgL_tmpz00_9987 =
																								(BgL_za71za7_5251 -
																								BgL_arg2336z00_1972);
																							return
																								BGL_UINT64_TO_BUINT64
																								(BgL_tmpz00_9987);
																						}
																					}
																				}
																			else
																				{	/* Ieee/number.scm 714 */
																					if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_95))
																						{	/* Ieee/number.scm 714 */
																							uint64_t BgL_arg2339z00_1975;

																							{	/* Ieee/number.scm 714 */
																								BGL_LONGLONG_T
																									BgL_arg2340z00_1976;
																								{	/* Ieee/number.scm 714 */
																									obj_t BgL_arg2341z00_1977;

																									BgL_arg2341z00_1977 =
																										BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																										(BgL_yz00_95);
																									BgL_arg2340z00_1976 =
																										(BGL_LONGLONG_T)
																										(BELONG_TO_LONG
																										(BgL_arg2341z00_1977));
																								}
																								{	/* Ieee/number.scm 714 */
																									uint64_t BgL_res4250z00_5255;

																									BgL_res4250z00_5255 =
																										(uint64_t)
																										(BgL_arg2340z00_1976);
																									BgL_arg2339z00_1975 =
																										BgL_res4250z00_5255;
																								}
																							}
																							{	/* Ieee/number.scm 714 */
																								uint64_t BgL_za71za7_5256;

																								BgL_za71za7_5256 =
																									BGL_BINT64_TO_INT64
																									(BgL_xz00_94);
																								{	/* Ieee/number.scm 714 */
																									uint64_t BgL_tmpz00_9997;

																									BgL_tmpz00_9997 =
																										(BgL_za71za7_5256 -
																										BgL_arg2339z00_1975);
																									return
																										BGL_UINT64_TO_BUINT64
																										(BgL_tmpz00_9997);
																								}
																							}
																						}
																					else
																						{	/* Ieee/number.scm 714 */
																							if (BIGNUMP(BgL_yz00_95))
																								{	/* Ieee/number.scm 714 */
																									return
																										bgl_bignum_sub
																										(bgl_uint64_to_bignum
																										(BGL_BINT64_TO_INT64
																											(BgL_xz00_94)),
																										BgL_yz00_95);
																								}
																							else
																								{	/* Ieee/number.scm 714 */
																									return
																										BGl_errorz00zz__errorz00
																										(BGl_string4857z00zz__r4_numbers_6_5z00,
																										BGl_string4845z00zz__r4_numbers_6_5z00,
																										BgL_yz00_95);
																								}
																						}
																				}
																		}
																}
														}
												}
											else
												{	/* Ieee/number.scm 714 */
													if (BIGNUMP(BgL_xz00_94))
														{	/* Ieee/number.scm 714 */
															if (BIGNUMP(BgL_yz00_95))
																{	/* Ieee/number.scm 714 */
																	obj_t BgL_tmpz00_10010;

																	BgL_tmpz00_10010 =
																		bgl_bignum_sub(BgL_xz00_94, BgL_yz00_95);
																	return BGL_SAFE_BX_TO_FX(BgL_tmpz00_10010);
																}
															else
																{	/* Ieee/number.scm 714 */
																	if (INTEGERP(BgL_yz00_95))
																		{	/* Ieee/number.scm 714 */
																			obj_t BgL_tmpz00_10015;

																			BgL_tmpz00_10015 =
																				bgl_bignum_sub(BgL_xz00_94,
																				bgl_long_to_bignum(
																					(long) CINT(BgL_yz00_95)));
																			return
																				BGL_SAFE_BX_TO_FX(BgL_tmpz00_10015);
																		}
																	else
																		{	/* Ieee/number.scm 714 */
																			if (REALP(BgL_yz00_95))
																				{	/* Ieee/number.scm 714 */
																					return
																						DOUBLE_TO_REAL(
																						(bgl_bignum_to_flonum(BgL_xz00_94) -
																							REAL_TO_DOUBLE(BgL_yz00_95)));
																				}
																			else
																				{	/* Ieee/number.scm 714 */
																					if (BGl_z42subelongzf3zb1zz__r4_numbers_6_5z00(BgL_yz00_95))
																						{	/* Ieee/number.scm 714 */
																							obj_t BgL_arg2354z00_1989;

																							{	/* Ieee/number.scm 714 */
																								obj_t BgL_arg2355z00_1990;

																								BgL_arg2355z00_1990 =
																									BGl_z42subelongzd2ze3elongz73zz__r4_numbers_6_5z00
																									(BgL_yz00_95);
																								{	/* Ieee/number.scm 714 */
																									long BgL_xz00_5280;

																									BgL_xz00_5280 =
																										BELONG_TO_LONG
																										(BgL_arg2355z00_1990);
																									BgL_arg2354z00_1989 =
																										bgl_long_to_bignum
																										(BgL_xz00_5280);
																							}}
																							return
																								bgl_bignum_sub(BgL_xz00_94,
																								BgL_arg2354z00_1989);
																						}
																					else
																						{	/* Ieee/number.scm 714 */
																							if (LLONGP(BgL_yz00_95))
																								{	/* Ieee/number.scm 714 */
																									return
																										bgl_bignum_sub(BgL_xz00_94,
																										bgl_llong_to_bignum
																										(BLLONG_TO_LLONG
																											(BgL_yz00_95)));
																								}
																							else
																								{	/* Ieee/number.scm 714 */
																									if (BGL_UINT64P(BgL_yz00_95))
																										{	/* Ieee/number.scm 714 */
																											return
																												bgl_bignum_sub
																												(BgL_xz00_94,
																												bgl_uint64_to_bignum
																												(BGL_BINT64_TO_INT64
																													(BgL_yz00_95)));
																										}
																									else
																										{	/* Ieee/number.scm 714 */
																											return
																												BGl_errorz00zz__errorz00
																												(BGl_string4857z00zz__r4_numbers_6_5z00,
																												BGl_string4844z00zz__r4_numbers_6_5z00,
																												BgL_yz00_95);
																										}
																								}
																						}
																				}
																		}
																}
														}
													else
														{	/* Ieee/number.scm 714 */
															return
																BGl_errorz00zz__errorz00
																(BGl_string4857z00zz__r4_numbers_6_5z00,
																BGl_string4844z00zz__r4_numbers_6_5z00,
																BgL_xz00_94);
														}
												}
										}
								}
						}
				}
		}

	}



/* &2- */
	obj_t BGl_z622zd2zb0zz__r4_numbers_6_5z00(obj_t BgL_envz00_6584,
		obj_t BgL_xz00_6585, obj_t BgL_yz00_6586)
	{
		{	/* Ieee/number.scm 713 */
			return BGl_2zd2zd2zz__r4_numbers_6_5z00(BgL_xz00_6585, BgL_yz00_6586);
		}

	}



/* - */
	BGL_EXPORTED_DEF obj_t BGl_zd2zd2zz__r4_numbers_6_5z00(obj_t BgL_xz00_96,
		obj_t BgL_yz00_97)
	{
		{	/* Ieee/number.scm 719 */
			if (PAIRP(BgL_yz00_97))
				{	/* Ieee/number.scm 721 */
					obj_t BgL_g1052z00_1997;
					obj_t BgL_g1053z00_1998;

					BgL_g1052z00_1997 =
						BGl_2zd2zd2zz__r4_numbers_6_5z00(BgL_xz00_96, CAR(BgL_yz00_97));
					BgL_g1053z00_1998 = CDR(BgL_yz00_97);
					{
						obj_t BgL_resultz00_5313;
						obj_t BgL_argsz00_5314;

						BgL_resultz00_5313 = BgL_g1052z00_1997;
						BgL_argsz00_5314 = BgL_g1053z00_1998;
					BgL_loopz00_5312:
						if (PAIRP(BgL_argsz00_5314))
							{
								obj_t BgL_argsz00_10055;
								obj_t BgL_resultz00_10052;

								BgL_resultz00_10052 =
									BGl_2zd2zd2zz__r4_numbers_6_5z00(BgL_resultz00_5313,
									CAR(BgL_argsz00_5314));
								BgL_argsz00_10055 = CDR(BgL_argsz00_5314);
								BgL_argsz00_5314 = BgL_argsz00_10055;
								BgL_resultz00_5313 = BgL_resultz00_10052;
								goto BgL_loopz00_5312;
							}
						else
							{	/* Ieee/number.scm 723 */
								return BgL_resultz00_5313;
							}
					}
				}
			else
				{	/* Ieee/number.scm 720 */
					return
						BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(((long) 0)), BgL_xz00_96);
		}}

	}



/* &- */
	obj_t BGl_z62zd2zb0zz__r4_numbers_6_5z00(obj_t BgL_envz00_6587,
		obj_t BgL_xz00_6588, obj_t BgL_yz00_6589)
	{
		{	/* Ieee/number.scm 719 */
			return BGl_zd2zd2zz__r4_numbers_6_5z00(BgL_xz00_6588, BgL_yz00_6589);
		}

	}



/* 2/ */
	BGL_EXPORTED_DEF obj_t BGl_2zf2zf2zz__r4_numbers_6_5z00(obj_t BgL_xz00_98,
		obj_t BgL_yz00_99)
	{
		{	/* Ieee/number.scm 731 */
			if (INTEGERP(BgL_xz00_98))
				{	/* Ieee/number.scm 733 */
					if (INTEGERP(BgL_yz00_99))
						{	/* Ieee/number.scm 736 */
							bool_t BgL_test5612z00_10064;

							{	/* Ieee/number.scm 736 */
								long BgL_arg2376z00_2015;

								{	/* Ieee/number.scm 736 */
									long BgL_res4281z00_5346;

									{	/* Ieee/number.scm 736 */
										long BgL_n1z00_5328;
										long BgL_n2z00_5329;

										BgL_n1z00_5328 = (long) CINT(BgL_xz00_98);
										BgL_n2z00_5329 = (long) CINT(BgL_yz00_99);
										{	/* Ieee/number.scm 736 */
											bool_t BgL_test5613z00_10067;

											{	/* Ieee/number.scm 736 */
												long BgL_arg3032z00_5331;

												BgL_arg3032z00_5331 =
													(((BgL_n1z00_5328) | (BgL_n2z00_5329)) & -2147483648);
												BgL_test5613z00_10067 =
													(BgL_arg3032z00_5331 == ((long) 0));
											}
											if (BgL_test5613z00_10067)
												{	/* Ieee/number.scm 736 */
													int32_t BgL_arg3028z00_5332;

													{	/* Ieee/number.scm 736 */
														int32_t BgL_arg3029z00_5333;
														int32_t BgL_arg3030z00_5334;

														{	/* Ieee/number.scm 736 */
															int32_t BgL_res4277z00_5338;

															BgL_res4277z00_5338 = (int32_t) (BgL_n1z00_5328);
															BgL_arg3029z00_5333 = BgL_res4277z00_5338;
														}
														{	/* Ieee/number.scm 736 */
															int32_t BgL_res4278z00_5340;

															BgL_res4278z00_5340 = (int32_t) (BgL_n2z00_5329);
															BgL_arg3030z00_5334 = BgL_res4278z00_5340;
														}
														BgL_arg3028z00_5332 =
															(BgL_arg3029z00_5333 % BgL_arg3030z00_5334);
													}
													{	/* Ieee/number.scm 736 */
														long BgL_res4280z00_5345;

														{	/* Ieee/number.scm 736 */
															long BgL_arg3174z00_5342;

															BgL_arg3174z00_5342 =
																(long) (BgL_arg3028z00_5332);
															{	/* Ieee/number.scm 736 */
																long BgL_res4279z00_5344;

																BgL_res4279z00_5344 =
																	(long) (BgL_arg3174z00_5342);
																BgL_res4280z00_5345 = BgL_res4279z00_5344;
														}}
														BgL_res4281z00_5346 = BgL_res4280z00_5345;
												}}
											else
												{	/* Ieee/number.scm 736 */
													BgL_res4281z00_5346 =
														(BgL_n1z00_5328 % BgL_n2z00_5329);
												}
										}
									}
									BgL_arg2376z00_2015 = BgL_res4281z00_5346;
								}
								BgL_test5612z00_10064 = (BgL_arg2376z00_2015 == ((long) 0));
							}
							if (BgL_test5612z00_10064)
								{	/* Ieee/number.scm 736 */
									return
										BINT(((long) CINT(BgL_xz00_98) / (long) CINT(BgL_yz00_99)));
								}
							else
								{	/* Ieee/number.scm 736 */
									return
										DOUBLE_TO_REAL(
										((double) (
												(long) CINT(BgL_xz00_98)) /
											(double) ((long) CINT(BgL_yz00_99))));
						}}
					else
						{	/* Ieee/number.scm 735 */
							if (REALP(BgL_yz00_99))
								{	/* Ieee/number.scm 739 */
									return
										DOUBLE_TO_REAL(
										((double) (
												(long) CINT(BgL_xz00_98)) /
											REAL_TO_DOUBLE(BgL_yz00_99)));
								}
							else
								{	/* Ieee/number.scm 739 */
									if (ELONGP(BgL_yz00_99))
										{	/* Ieee/number.scm 742 */
											long BgL_exz00_2019;

											{	/* Ieee/number.scm 742 */
												long BgL_res4288z00_5361;

												{	/* Ieee/number.scm 742 */
													long BgL_tmpz00_10096;

													BgL_tmpz00_10096 = (long) CINT(BgL_xz00_98);
													BgL_res4288z00_5361 = (long) (BgL_tmpz00_10096);
												}
												BgL_exz00_2019 = BgL_res4288z00_5361;
											}
											{	/* Ieee/number.scm 743 */
												bool_t BgL_test5616z00_10099;

												{	/* Ieee/number.scm 743 */
													long BgL_arg2385z00_2024;

													{	/* Ieee/number.scm 743 */
														long BgL_res4289z00_5364;

														{	/* Ieee/number.scm 743 */
															long BgL_n2z00_5363;

															BgL_n2z00_5363 = BELONG_TO_LONG(BgL_yz00_99);
															BgL_res4289z00_5364 =
																(BgL_exz00_2019 % BgL_n2z00_5363);
														}
														BgL_arg2385z00_2024 = BgL_res4289z00_5364;
													}
													BgL_test5616z00_10099 =
														(BgL_arg2385z00_2024 == ((long) 0));
												}
												if (BgL_test5616z00_10099)
													{	/* Ieee/number.scm 744 */
														long BgL_res4291z00_5370;

														{	/* Ieee/number.scm 744 */
															long BgL_za72za7_5369;

															BgL_za72za7_5369 = BELONG_TO_LONG(BgL_yz00_99);
															BgL_res4291z00_5370 =
																(BgL_exz00_2019 / BgL_za72za7_5369);
														}
														return make_belong(BgL_res4291z00_5370);
													}
												else
													{	/* Ieee/number.scm 743 */
														return
															DOUBLE_TO_REAL(
															((double) (
																	(long) CINT(BgL_xz00_98)) /
																(double) (BELONG_TO_LONG(BgL_yz00_99))));
										}}}
									else
										{	/* Ieee/number.scm 741 */
											if (LLONGP(BgL_yz00_99))
												{	/* Ieee/number.scm 747 */
													BGL_LONGLONG_T BgL_lxz00_2026;

													{	/* Ieee/number.scm 747 */
														BGL_LONGLONG_T BgL_res4294z00_5376;

														{	/* Ieee/number.scm 747 */
															long BgL_tmpz00_10114;

															BgL_tmpz00_10114 = (long) CINT(BgL_xz00_98);
															BgL_res4294z00_5376 =
																LONG_TO_LLONG(BgL_tmpz00_10114);
														}
														BgL_lxz00_2026 = BgL_res4294z00_5376;
													}
													{	/* Ieee/number.scm 748 */
														bool_t BgL_test5618z00_10117;

														{	/* Ieee/number.scm 748 */
															BGL_LONGLONG_T BgL_arg2392z00_2031;

															{	/* Ieee/number.scm 748 */
																BGL_LONGLONG_T BgL_res4295z00_5379;

																{	/* Ieee/number.scm 748 */
																	BGL_LONGLONG_T BgL_tmpz00_10118;

																	BgL_tmpz00_10118 =
																		BLLONG_TO_LLONG(BgL_yz00_99);
																	BgL_res4295z00_5379 =
																		(BgL_lxz00_2026 % BgL_tmpz00_10118);
																}
																BgL_arg2392z00_2031 = BgL_res4295z00_5379;
															}
															BgL_test5618z00_10117 =
																(BgL_arg2392z00_2031 == ((BGL_LONGLONG_T) 0));
														}
														if (BgL_test5618z00_10117)
															{	/* Ieee/number.scm 749 */
																BGL_LONGLONG_T BgL_res4297z00_5385;

																{	/* Ieee/number.scm 749 */
																	BGL_LONGLONG_T BgL_tmpz00_10122;

																	BgL_tmpz00_10122 =
																		BLLONG_TO_LLONG(BgL_yz00_99);
																	BgL_res4297z00_5385 =
																		(BgL_lxz00_2026 / BgL_tmpz00_10122);
																}
																return make_bllong(BgL_res4297z00_5385);
															}
														else
															{	/* Ieee/number.scm 748 */
																return
																	DOUBLE_TO_REAL(
																	((double) (
																			(long) CINT(BgL_xz00_98)) /
																		(double) (BLLONG_TO_LLONG(BgL_yz00_99))));
												}}}
											else
												{	/* Ieee/number.scm 746 */
													if (BIGNUMP(BgL_yz00_99))
														{	/* Ieee/number.scm 752 */
															obj_t BgL_qz00_2033;

															BgL_qz00_2033 =
																bgl_bignum_div(bgl_long_to_bignum(
																	(long) CINT(BgL_xz00_98)), BgL_yz00_99);
															{	/* Ieee/number.scm 753 */
																obj_t BgL_rz00_2034;

																{	/* Ieee/number.scm 754 */
																	int BgL_tmpz00_10137;

																	BgL_tmpz00_10137 = (int) (((long) 1));
																	BgL_rz00_2034 =
																		BGL_MVALUES_VAL(BgL_tmpz00_10137);
																}
																{	/* Ieee/number.scm 754 */
																	bool_t BgL_test5620z00_10140;

																	{	/* Ieee/number.scm 754 */
																		obj_t BgL_tmpz00_10141;

																		BgL_tmpz00_10141 = ((obj_t) BgL_rz00_2034);
																		BgL_test5620z00_10140 =
																			BXZERO(BgL_tmpz00_10141);
																	}
																	if (BgL_test5620z00_10140)
																		{	/* Ieee/number.scm 754 */
																			return BgL_qz00_2033;
																		}
																	else
																		{	/* Ieee/number.scm 754 */
																			return
																				DOUBLE_TO_REAL(
																				((double) (
																						(long) CINT(BgL_xz00_98)) /
																					bgl_bignum_to_flonum(BgL_yz00_99)));
														}}}}
													else
														{	/* Ieee/number.scm 751 */
															return
																BGl_errorz00zz__errorz00
																(BGl_string4858z00zz__r4_numbers_6_5z00,
																BGl_string4844z00zz__r4_numbers_6_5z00,
																BgL_yz00_99);
														}
												}
										}
								}
						}
				}
			else
				{	/* Ieee/number.scm 733 */
					if (REALP(BgL_xz00_98))
						{	/* Ieee/number.scm 759 */
							if (REALP(BgL_yz00_99))
								{	/* Ieee/number.scm 761 */
									return
										DOUBLE_TO_REAL(
										(REAL_TO_DOUBLE(BgL_xz00_98) /
											REAL_TO_DOUBLE(BgL_yz00_99)));
								}
							else
								{	/* Ieee/number.scm 761 */
									if (INTEGERP(BgL_yz00_99))
										{	/* Ieee/number.scm 763 */
											return
												DOUBLE_TO_REAL(
												(REAL_TO_DOUBLE(BgL_xz00_98) /
													(double) ((long) CINT(BgL_yz00_99))));
										}
									else
										{	/* Ieee/number.scm 763 */
											if (ELONGP(BgL_yz00_99))
												{	/* Ieee/number.scm 766 */
													double BgL_r1z00_5409;

													BgL_r1z00_5409 = REAL_TO_DOUBLE(BgL_xz00_98);
													return
														DOUBLE_TO_REAL(
														(BgL_r1z00_5409 /
															(double) (BELONG_TO_LONG(BgL_yz00_99))));
												}
											else
												{	/* Ieee/number.scm 765 */
													if (LLONGP(BgL_yz00_99))
														{	/* Ieee/number.scm 767 */
															return
																DOUBLE_TO_REAL(
																(REAL_TO_DOUBLE(BgL_xz00_98) /
																	(double) (BLLONG_TO_LLONG(BgL_yz00_99))));
														}
													else
														{	/* Ieee/number.scm 767 */
															if (BIGNUMP(BgL_yz00_99))
																{	/* Ieee/number.scm 769 */
																	return
																		DOUBLE_TO_REAL(
																		(REAL_TO_DOUBLE(BgL_xz00_98) /
																			bgl_bignum_to_flonum(BgL_yz00_99)));
																}
															else
																{	/* Ieee/number.scm 769 */
																	return
																		BGl_errorz00zz__errorz00
																		(BGl_string4858z00zz__r4_numbers_6_5z00,
																		BGl_string4844z00zz__r4_numbers_6_5z00,
																		BgL_yz00_99);
																}
														}
												}
										}
								}
						}
					else
						{	/* Ieee/number.scm 759 */
							if (ELONGP(BgL_xz00_98))
								{	/* Ieee/number.scm 773 */
									if (INTEGERP(BgL_yz00_99))
										{	/* Ieee/number.scm 776 */
											long BgL_eyz00_2051;

											{	/* Ieee/number.scm 776 */
												long BgL_res4318z00_5425;

												{	/* Ieee/number.scm 776 */
													long BgL_tmpz00_10190;

													BgL_tmpz00_10190 = (long) CINT(BgL_yz00_99);
													BgL_res4318z00_5425 = (long) (BgL_tmpz00_10190);
												}
												BgL_eyz00_2051 = BgL_res4318z00_5425;
											}
											{	/* Ieee/number.scm 777 */
												bool_t BgL_test5629z00_10193;

												{	/* Ieee/number.scm 777 */
													long BgL_arg2416z00_2056;

													{	/* Ieee/number.scm 777 */
														long BgL_res4319z00_5428;

														{	/* Ieee/number.scm 777 */
															long BgL_n1z00_5426;

															BgL_n1z00_5426 = BELONG_TO_LONG(BgL_xz00_98);
															BgL_res4319z00_5428 =
																(BgL_n1z00_5426 % BgL_eyz00_2051);
														}
														BgL_arg2416z00_2056 = BgL_res4319z00_5428;
													}
													BgL_test5629z00_10193 =
														(BgL_arg2416z00_2056 == ((long) 0));
												}
												if (BgL_test5629z00_10193)
													{	/* Ieee/number.scm 778 */
														long BgL_res4321z00_5434;

														{	/* Ieee/number.scm 778 */
															long BgL_za71za7_5432;

															BgL_za71za7_5432 = BELONG_TO_LONG(BgL_xz00_98);
															BgL_res4321z00_5434 =
																(BgL_za71za7_5432 / BgL_eyz00_2051);
														}
														return make_belong(BgL_res4321z00_5434);
													}
												else
													{	/* Ieee/number.scm 777 */
														return
															DOUBLE_TO_REAL(
															((double) (BELONG_TO_LONG(BgL_xz00_98)) /
																(double) ((long) CINT(BgL_yz00_99))));
										}}}
									else
										{	/* Ieee/number.scm 775 */
											if (REALP(BgL_yz00_99))
												{	/* Ieee/number.scm 781 */
													double BgL_r2z00_5440;

													BgL_r2z00_5440 = REAL_TO_DOUBLE(BgL_yz00_99);
													return
														DOUBLE_TO_REAL(
														((double) (BELONG_TO_LONG(BgL_xz00_98)) /
															BgL_r2z00_5440));
												}
											else
												{	/* Ieee/number.scm 780 */
													if (ELONGP(BgL_yz00_99))
														{	/* Ieee/number.scm 783 */
															bool_t BgL_test5632z00_10215;

															{	/* Ieee/number.scm 783 */
																long BgL_arg2425z00_2064;

																{	/* Ieee/number.scm 783 */
																	long BgL_res4326z00_5445;

																	{	/* Ieee/number.scm 783 */
																		long BgL_n1z00_5443;
																		long BgL_n2z00_5444;

																		BgL_n1z00_5443 =
																			BELONG_TO_LONG(BgL_xz00_98);
																		BgL_n2z00_5444 =
																			BELONG_TO_LONG(BgL_yz00_99);
																		BgL_res4326z00_5445 =
																			(BgL_n1z00_5443 % BgL_n2z00_5444);
																	}
																	BgL_arg2425z00_2064 = BgL_res4326z00_5445;
																}
																BgL_test5632z00_10215 =
																	(BgL_arg2425z00_2064 == ((long) 0));
															}
															if (BgL_test5632z00_10215)
																{	/* Ieee/number.scm 784 */
																	long BgL_res4328z00_5451;

																	{	/* Ieee/number.scm 784 */
																		long BgL_za71za7_5449;
																		long BgL_za72za7_5450;

																		BgL_za71za7_5449 =
																			BELONG_TO_LONG(BgL_xz00_98);
																		BgL_za72za7_5450 =
																			BELONG_TO_LONG(BgL_yz00_99);
																		BgL_res4328z00_5451 =
																			(BgL_za71za7_5449 / BgL_za72za7_5450);
																	}
																	return make_belong(BgL_res4328z00_5451);
																}
															else
																{	/* Ieee/number.scm 783 */
																	return
																		DOUBLE_TO_REAL(
																		((double) (BELONG_TO_LONG(BgL_xz00_98)) /
																			(double) (BELONG_TO_LONG(BgL_yz00_99))));
														}}
													else
														{	/* Ieee/number.scm 782 */
															if (LLONGP(BgL_yz00_99))
																{	/* Ieee/number.scm 787 */
																	double BgL_fxz00_2066;

																	BgL_fxz00_2066 =
																		(double) (BELONG_TO_LONG(BgL_xz00_98));
																	{	/* Ieee/number.scm 787 */
																		BGL_LONGLONG_T BgL_lxz00_2067;

																		BgL_lxz00_2067 =
																			(BGL_LONGLONG_T) (BgL_fxz00_2066);
																		{	/* Ieee/number.scm 788 */

																			{	/* Ieee/number.scm 789 */
																				bool_t BgL_test5634z00_10235;

																				{	/* Ieee/number.scm 789 */
																					BGL_LONGLONG_T BgL_arg2431z00_2071;

																					{	/* Ieee/number.scm 789 */
																						BGL_LONGLONG_T BgL_res4331z00_5458;

																						{	/* Ieee/number.scm 789 */
																							BGL_LONGLONG_T BgL_tmpz00_10236;

																							BgL_tmpz00_10236 =
																								BLLONG_TO_LLONG(BgL_yz00_99);
																							BgL_res4331z00_5458 =
																								(BgL_lxz00_2067 %
																								BgL_tmpz00_10236);
																						}
																						BgL_arg2431z00_2071 =
																							BgL_res4331z00_5458;
																					}
																					BgL_test5634z00_10235 =
																						(BgL_arg2431z00_2071 ==
																						((BGL_LONGLONG_T) 0));
																				}
																				if (BgL_test5634z00_10235)
																					{	/* Ieee/number.scm 790 */
																						BGL_LONGLONG_T BgL_res4333z00_5464;

																						{	/* Ieee/number.scm 790 */
																							BGL_LONGLONG_T BgL_tmpz00_10240;

																							BgL_tmpz00_10240 =
																								BLLONG_TO_LLONG(BgL_yz00_99);
																							BgL_res4333z00_5464 =
																								(BgL_lxz00_2067 /
																								BgL_tmpz00_10240);
																						}
																						return
																							make_bllong(BgL_res4333z00_5464);
																					}
																				else
																					{	/* Ieee/number.scm 789 */
																						return
																							DOUBLE_TO_REAL(
																							(BgL_fxz00_2066 /
																								(double) (BLLONG_TO_LLONG
																									(BgL_yz00_99))));
																}}}}}
															else
																{	/* Ieee/number.scm 786 */
																	if (BIGNUMP(BgL_yz00_99))
																		{	/* Ieee/number.scm 793 */
																			obj_t BgL_qz00_2073;

																			{	/* Ieee/number.scm 794 */
																				obj_t BgL_arg2438z00_2078;

																				{	/* Ieee/number.scm 794 */
																					long BgL_xz00_5469;

																					BgL_xz00_5469 =
																						BELONG_TO_LONG(BgL_xz00_98);
																					BgL_arg2438z00_2078 =
																						bgl_long_to_bignum(BgL_xz00_5469);
																				}
																				BgL_qz00_2073 =
																					bgl_bignum_div(BgL_arg2438z00_2078,
																					BgL_yz00_99);
																			}
																			{	/* Ieee/number.scm 794 */
																				obj_t BgL_rz00_2074;

																				{	/* Ieee/number.scm 795 */
																					int BgL_tmpz00_10253;

																					BgL_tmpz00_10253 = (int) (((long) 1));
																					BgL_rz00_2074 =
																						BGL_MVALUES_VAL(BgL_tmpz00_10253);
																				}
																				{	/* Ieee/number.scm 795 */
																					bool_t BgL_test5636z00_10256;

																					{	/* Ieee/number.scm 795 */
																						obj_t BgL_tmpz00_10257;

																						BgL_tmpz00_10257 =
																							((obj_t) BgL_rz00_2074);
																						BgL_test5636z00_10256 =
																							BXZERO(BgL_tmpz00_10257);
																					}
																					if (BgL_test5636z00_10256)
																						{	/* Ieee/number.scm 795 */
																							return BgL_qz00_2073;
																						}
																					else
																						{	/* Ieee/number.scm 795 */
																							return
																								DOUBLE_TO_REAL(
																								((double) (BELONG_TO_LONG
																										(BgL_xz00_98)) /
																									bgl_bignum_to_flonum
																									(BgL_yz00_99)));
																		}}}}
																	else
																		{	/* Ieee/number.scm 792 */
																			return
																				BGl_errorz00zz__errorz00
																				(BGl_string4858z00zz__r4_numbers_6_5z00,
																				BGl_string4844z00zz__r4_numbers_6_5z00,
																				BgL_yz00_99);
																		}
																}
														}
												}
										}
								}
							else
								{	/* Ieee/number.scm 773 */
									if (LLONGP(BgL_xz00_98))
										{	/* Ieee/number.scm 800 */
											if (INTEGERP(BgL_yz00_99))
												{	/* Ieee/number.scm 803 */
													BGL_LONGLONG_T BgL_lyz00_2081;

													{	/* Ieee/number.scm 803 */
														BGL_LONGLONG_T BgL_res4342z00_5481;

														{	/* Ieee/number.scm 803 */
															long BgL_tmpz00_10270;

															BgL_tmpz00_10270 = (long) CINT(BgL_yz00_99);
															BgL_res4342z00_5481 =
																LONG_TO_LLONG(BgL_tmpz00_10270);
														}
														BgL_lyz00_2081 = BgL_res4342z00_5481;
													}
													{	/* Ieee/number.scm 804 */
														bool_t BgL_test5639z00_10273;

														{	/* Ieee/number.scm 804 */
															BGL_LONGLONG_T BgL_arg2446z00_2086;

															{	/* Ieee/number.scm 804 */
																BGL_LONGLONG_T BgL_res4343z00_5484;

																{	/* Ieee/number.scm 804 */
																	BGL_LONGLONG_T BgL_tmpz00_10274;

																	BgL_tmpz00_10274 =
																		BLLONG_TO_LLONG(BgL_xz00_98);
																	BgL_res4343z00_5484 =
																		(BgL_tmpz00_10274 % BgL_lyz00_2081);
																}
																BgL_arg2446z00_2086 = BgL_res4343z00_5484;
															}
															BgL_test5639z00_10273 =
																(BgL_arg2446z00_2086 == ((BGL_LONGLONG_T) 0));
														}
														if (BgL_test5639z00_10273)
															{	/* Ieee/number.scm 805 */
																BGL_LONGLONG_T BgL_res4345z00_5490;

																{	/* Ieee/number.scm 805 */
																	BGL_LONGLONG_T BgL_tmpz00_10278;

																	BgL_tmpz00_10278 =
																		BLLONG_TO_LLONG(BgL_xz00_98);
																	BgL_res4345z00_5490 =
																		(BgL_tmpz00_10278 / BgL_lyz00_2081);
																}
																return make_bllong(BgL_res4345z00_5490);
															}
														else
															{	/* Ieee/number.scm 804 */
																return
																	DOUBLE_TO_REAL(
																	((double) (BLLONG_TO_LLONG(BgL_xz00_98)) /
																		(double) ((long) CINT(BgL_yz00_99))));
												}}}
											else
												{	/* Ieee/number.scm 802 */
													if (REALP(BgL_yz00_99))
														{	/* Ieee/number.scm 807 */
															return
																DOUBLE_TO_REAL(
																((double) (BLLONG_TO_LLONG(BgL_xz00_98)) /
																	REAL_TO_DOUBLE(BgL_yz00_99)));
														}
													else
														{	/* Ieee/number.scm 807 */
															if (ELONGP(BgL_yz00_99))
																{	/* Ieee/number.scm 810 */
																	double BgL_fyz00_2090;

																	BgL_fyz00_2090 =
																		(double) (BELONG_TO_LONG(BgL_yz00_99));
																	{	/* Ieee/number.scm 810 */
																		BGL_LONGLONG_T BgL_lyz00_2091;

																		BgL_lyz00_2091 =
																			(BGL_LONGLONG_T) (BgL_fyz00_2090);
																		{	/* Ieee/number.scm 811 */

																			{	/* Ieee/number.scm 812 */
																				bool_t BgL_test5642z00_10300;

																				{	/* Ieee/number.scm 812 */
																					BGL_LONGLONG_T BgL_arg2453z00_2095;

																					{	/* Ieee/number.scm 812 */
																						BGL_LONGLONG_T BgL_res4350z00_5501;

																						{	/* Ieee/number.scm 812 */
																							BGL_LONGLONG_T BgL_tmpz00_10301;

																							BgL_tmpz00_10301 =
																								BLLONG_TO_LLONG(BgL_xz00_98);
																							BgL_res4350z00_5501 =
																								(BgL_tmpz00_10301 %
																								BgL_lyz00_2091);
																						}
																						BgL_arg2453z00_2095 =
																							BgL_res4350z00_5501;
																					}
																					BgL_test5642z00_10300 =
																						(BgL_arg2453z00_2095 ==
																						((BGL_LONGLONG_T) 0));
																				}
																				if (BgL_test5642z00_10300)
																					{	/* Ieee/number.scm 813 */
																						BGL_LONGLONG_T BgL_res4352z00_5507;

																						{	/* Ieee/number.scm 813 */
																							BGL_LONGLONG_T BgL_tmpz00_10305;

																							BgL_tmpz00_10305 =
																								BLLONG_TO_LLONG(BgL_xz00_98);
																							BgL_res4352z00_5507 =
																								(BgL_tmpz00_10305 /
																								BgL_lyz00_2091);
																						}
																						return
																							make_bllong(BgL_res4352z00_5507);
																					}
																				else
																					{	/* Ieee/number.scm 812 */
																						return
																							DOUBLE_TO_REAL(
																							((double) (BLLONG_TO_LLONG
																									(BgL_xz00_98)) /
																								BgL_fyz00_2090));
																}}}}}
															else
																{	/* Ieee/number.scm 809 */
																	if (LLONGP(BgL_yz00_99))
																		{	/* Ieee/number.scm 816 */
																			bool_t BgL_test5644z00_10315;

																			{	/* Ieee/number.scm 816 */
																				BGL_LONGLONG_T BgL_arg2460z00_2101;

																				{	/* Ieee/number.scm 816 */
																					BGL_LONGLONG_T BgL_res4355z00_5514;

																					{	/* Ieee/number.scm 816 */
																						BGL_LONGLONG_T BgL_auxz00_10318;
																						BGL_LONGLONG_T BgL_tmpz00_10316;

																						BgL_auxz00_10318 =
																							BLLONG_TO_LLONG(BgL_yz00_99);
																						BgL_tmpz00_10316 =
																							BLLONG_TO_LLONG(BgL_xz00_98);
																						BgL_res4355z00_5514 =
																							(BgL_tmpz00_10316 %
																							BgL_auxz00_10318);
																					}
																					BgL_arg2460z00_2101 =
																						BgL_res4355z00_5514;
																				}
																				BgL_test5644z00_10315 =
																					(BgL_arg2460z00_2101 ==
																					((BGL_LONGLONG_T) 0));
																			}
																			if (BgL_test5644z00_10315)
																				{	/* Ieee/number.scm 817 */
																					BGL_LONGLONG_T BgL_res4357z00_5520;

																					{	/* Ieee/number.scm 817 */
																						BGL_LONGLONG_T BgL_auxz00_10324;
																						BGL_LONGLONG_T BgL_tmpz00_10322;

																						BgL_auxz00_10324 =
																							BLLONG_TO_LLONG(BgL_yz00_99);
																						BgL_tmpz00_10322 =
																							BLLONG_TO_LLONG(BgL_xz00_98);
																						BgL_res4357z00_5520 =
																							(BgL_tmpz00_10322 /
																							BgL_auxz00_10324);
																					}
																					return
																						make_bllong(BgL_res4357z00_5520);
																				}
																			else
																				{	/* Ieee/number.scm 816 */
																					return
																						DOUBLE_TO_REAL(
																						((double) (BLLONG_TO_LLONG
																								(BgL_xz00_98)) /
																							(double) (BLLONG_TO_LLONG
																								(BgL_yz00_99))));
																		}}
																	else
																		{	/* Ieee/number.scm 815 */
																			if (BIGNUMP(BgL_yz00_99))
																				{	/* Ieee/number.scm 820 */
																					obj_t BgL_qz00_2103;

																					BgL_qz00_2103 =
																						bgl_bignum_div(bgl_llong_to_bignum
																						(BLLONG_TO_LLONG(BgL_xz00_98)),
																						BgL_yz00_99);
																					{	/* Ieee/number.scm 821 */
																						obj_t BgL_rz00_2104;

																						{	/* Ieee/number.scm 822 */
																							int BgL_tmpz00_10339;

																							BgL_tmpz00_10339 =
																								(int) (((long) 1));
																							BgL_rz00_2104 =
																								BGL_MVALUES_VAL
																								(BgL_tmpz00_10339);
																						}
																						{	/* Ieee/number.scm 822 */
																							bool_t BgL_test5646z00_10342;

																							{	/* Ieee/number.scm 822 */
																								obj_t BgL_tmpz00_10343;

																								BgL_tmpz00_10343 =
																									((obj_t) BgL_rz00_2104);
																								BgL_test5646z00_10342 =
																									BXZERO(BgL_tmpz00_10343);
																							}
																							if (BgL_test5646z00_10342)
																								{	/* Ieee/number.scm 822 */
																									return BgL_qz00_2103;
																								}
																							else
																								{	/* Ieee/number.scm 822 */
																									return
																										DOUBLE_TO_REAL(
																										((double) (BLLONG_TO_LLONG
																												(BgL_xz00_98)) /
																											bgl_bignum_to_flonum
																											(BgL_yz00_99)));
																				}}}}
																			else
																				{	/* Ieee/number.scm 819 */
																					return
																						BGl_errorz00zz__errorz00
																						(BGl_string4858z00zz__r4_numbers_6_5z00,
																						BGl_string4844z00zz__r4_numbers_6_5z00,
																						BgL_yz00_99);
																				}
																		}
																}
														}
												}
										}
									else
										{	/* Ieee/number.scm 800 */
											if (BIGNUMP(BgL_xz00_98))
												{	/* Ieee/number.scm 827 */
													if (INTEGERP(BgL_yz00_99))
														{	/* Ieee/number.scm 830 */
															obj_t BgL_qz00_2111;

															BgL_qz00_2111 =
																bgl_bignum_div(BgL_xz00_98,
																bgl_long_to_bignum((long) CINT(BgL_yz00_99)));
															{	/* Ieee/number.scm 831 */
																obj_t BgL_rz00_2112;

																{	/* Ieee/number.scm 832 */
																	int BgL_tmpz00_10359;

																	BgL_tmpz00_10359 = (int) (((long) 1));
																	BgL_rz00_2112 =
																		BGL_MVALUES_VAL(BgL_tmpz00_10359);
																}
																{	/* Ieee/number.scm 832 */
																	bool_t BgL_test5649z00_10362;

																	{	/* Ieee/number.scm 832 */
																		obj_t BgL_tmpz00_10363;

																		BgL_tmpz00_10363 = ((obj_t) BgL_rz00_2112);
																		BgL_test5649z00_10362 =
																			BXZERO(BgL_tmpz00_10363);
																	}
																	if (BgL_test5649z00_10362)
																		{	/* Ieee/number.scm 832 */
																			return BgL_qz00_2111;
																		}
																	else
																		{	/* Ieee/number.scm 832 */
																			return
																				DOUBLE_TO_REAL(
																				(bgl_bignum_to_flonum(BgL_xz00_98) /
																					(double) ((long) CINT(BgL_yz00_99))));
														}}}}
													else
														{	/* Ieee/number.scm 829 */
															if (REALP(BgL_yz00_99))
																{	/* Ieee/number.scm 835 */
																	return
																		DOUBLE_TO_REAL(
																		(bgl_bignum_to_flonum(BgL_xz00_98) /
																			REAL_TO_DOUBLE(BgL_yz00_99)));
																}
															else
																{	/* Ieee/number.scm 835 */
																	if (ELONGP(BgL_yz00_99))
																		{	/* Ieee/number.scm 838 */
																			obj_t BgL_qz00_2120;

																			{	/* Ieee/number.scm 839 */
																				obj_t BgL_arg2482z00_2125;

																				{	/* Ieee/number.scm 839 */
																					long BgL_xz00_5552;

																					BgL_xz00_5552 =
																						BELONG_TO_LONG(BgL_yz00_99);
																					BgL_arg2482z00_2125 =
																						bgl_long_to_bignum(BgL_xz00_5552);
																				}
																				BgL_qz00_2120 =
																					bgl_bignum_div(BgL_xz00_98,
																					BgL_arg2482z00_2125);
																			}
																			{	/* Ieee/number.scm 839 */
																				obj_t BgL_rz00_2121;

																				{	/* Ieee/number.scm 840 */
																					int BgL_tmpz00_10382;

																					BgL_tmpz00_10382 = (int) (((long) 1));
																					BgL_rz00_2121 =
																						BGL_MVALUES_VAL(BgL_tmpz00_10382);
																				}
																				{	/* Ieee/number.scm 840 */
																					bool_t BgL_test5652z00_10385;

																					{	/* Ieee/number.scm 840 */
																						obj_t BgL_tmpz00_10386;

																						BgL_tmpz00_10386 =
																							((obj_t) BgL_rz00_2121);
																						BgL_test5652z00_10385 =
																							BXZERO(BgL_tmpz00_10386);
																					}
																					if (BgL_test5652z00_10385)
																						{	/* Ieee/number.scm 840 */
																							return BgL_qz00_2120;
																						}
																					else
																						{	/* Ieee/number.scm 840 */
																							return
																								DOUBLE_TO_REAL(
																								(bgl_bignum_to_flonum
																									(BgL_xz00_98) /
																									(double) (BELONG_TO_LONG
																										(BgL_yz00_99))));
																		}}}}
																	else
																		{	/* Ieee/number.scm 837 */
																			if (LLONGP(BgL_yz00_99))
																				{	/* Ieee/number.scm 844 */
																					obj_t BgL_qz00_2127;

																					BgL_qz00_2127 =
																						bgl_bignum_div(BgL_xz00_98,
																						bgl_llong_to_bignum(BLLONG_TO_LLONG
																							(BgL_yz00_99)));
																					{	/* Ieee/number.scm 845 */
																						obj_t BgL_rz00_2128;

																						{	/* Ieee/number.scm 846 */
																							int BgL_tmpz00_10399;

																							BgL_tmpz00_10399 =
																								(int) (((long) 1));
																							BgL_rz00_2128 =
																								BGL_MVALUES_VAL
																								(BgL_tmpz00_10399);
																						}
																						{	/* Ieee/number.scm 846 */
																							bool_t BgL_test5654z00_10402;

																							{	/* Ieee/number.scm 846 */
																								obj_t BgL_tmpz00_10403;

																								BgL_tmpz00_10403 =
																									((obj_t) BgL_rz00_2128);
																								BgL_test5654z00_10402 =
																									BXZERO(BgL_tmpz00_10403);
																							}
																							if (BgL_test5654z00_10402)
																								{	/* Ieee/number.scm 846 */
																									return BgL_qz00_2127;
																								}
																							else
																								{	/* Ieee/number.scm 846 */
																									return
																										DOUBLE_TO_REAL(
																										(bgl_bignum_to_flonum
																											(BgL_xz00_98) /
																											(double) (BLLONG_TO_LLONG
																												(BgL_yz00_99))));
																				}}}}
																			else
																				{	/* Ieee/number.scm 843 */
																					if (BIGNUMP(BgL_yz00_99))
																						{	/* Ieee/number.scm 850 */
																							obj_t BgL_qz00_2134;

																							BgL_qz00_2134 =
																								bgl_bignum_div(BgL_xz00_98,
																								BgL_yz00_99);
																							{	/* Ieee/number.scm 851 */
																								obj_t BgL_rz00_2135;

																								{	/* Ieee/number.scm 852 */
																									int BgL_tmpz00_10414;

																									BgL_tmpz00_10414 =
																										(int) (((long) 1));
																									BgL_rz00_2135 =
																										BGL_MVALUES_VAL
																										(BgL_tmpz00_10414);
																								}
																								{	/* Ieee/number.scm 852 */
																									bool_t BgL_test5656z00_10417;

																									{	/* Ieee/number.scm 852 */
																										obj_t BgL_tmpz00_10418;

																										BgL_tmpz00_10418 =
																											((obj_t) BgL_rz00_2135);
																										BgL_test5656z00_10417 =
																											BXZERO(BgL_tmpz00_10418);
																									}
																									if (BgL_test5656z00_10417)
																										{	/* Ieee/number.scm 852 */
																											return BgL_qz00_2134;
																										}
																									else
																										{	/* Ieee/number.scm 852 */
																											return
																												DOUBLE_TO_REAL(
																												(bgl_bignum_to_flonum
																													(BgL_xz00_98) /
																													bgl_bignum_to_flonum
																													(BgL_yz00_99)));
																										}
																								}
																							}
																						}
																					else
																						{	/* Ieee/number.scm 849 */
																							return
																								BGl_errorz00zz__errorz00
																								(BGl_string4858z00zz__r4_numbers_6_5z00,
																								BGl_string4844z00zz__r4_numbers_6_5z00,
																								BgL_yz00_99);
																						}
																				}
																		}
																}
														}
												}
											else
												{	/* Ieee/number.scm 827 */
													return
														BGl_errorz00zz__errorz00
														(BGl_string4858z00zz__r4_numbers_6_5z00,
														BGl_string4844z00zz__r4_numbers_6_5z00,
														BgL_xz00_98);
												}
										}
								}
						}
				}
		}

	}



/* &2/ */
	obj_t BGl_z622zf2z90zz__r4_numbers_6_5z00(obj_t BgL_envz00_6590,
		obj_t BgL_xz00_6591, obj_t BgL_yz00_6592)
	{
		{	/* Ieee/number.scm 731 */
			return BGl_2zf2zf2zz__r4_numbers_6_5z00(BgL_xz00_6591, BgL_yz00_6592);
		}

	}



/* / */
	BGL_EXPORTED_DEF obj_t BGl_zf2zf2zz__r4_numbers_6_5z00(obj_t BgL_xz00_100,
		obj_t BgL_yz00_101)
	{
		{	/* Ieee/number.scm 863 */
			if (PAIRP(BgL_yz00_101))
				{	/* Ieee/number.scm 865 */
					obj_t BgL_g1054z00_2140;
					obj_t BgL_g1055z00_2141;

					BgL_g1054z00_2140 =
						BGl_2zf2zf2zz__r4_numbers_6_5z00(BgL_xz00_100, CAR(BgL_yz00_101));
					BgL_g1055z00_2141 = CDR(BgL_yz00_101);
					{
						obj_t BgL_resultz00_5599;
						obj_t BgL_za7za7_5600;

						BgL_resultz00_5599 = BgL_g1054z00_2140;
						BgL_za7za7_5600 = BgL_g1055z00_2141;
					BgL_loopz00_5598:
						if (PAIRP(BgL_za7za7_5600))
							{
								obj_t BgL_za7za7_10438;
								obj_t BgL_resultz00_10435;

								BgL_resultz00_10435 =
									BGl_2zf2zf2zz__r4_numbers_6_5z00(BgL_resultz00_5599,
									CAR(BgL_za7za7_5600));
								BgL_za7za7_10438 = CDR(BgL_za7za7_5600);
								BgL_za7za7_5600 = BgL_za7za7_10438;
								BgL_resultz00_5599 = BgL_resultz00_10435;
								goto BgL_loopz00_5598;
							}
						else
							{	/* Ieee/number.scm 867 */
								return BgL_resultz00_5599;
							}
					}
				}
			else
				{	/* Ieee/number.scm 864 */
					return
						BGl_2zf2zf2zz__r4_numbers_6_5z00(BINT(((long) 1)), BgL_xz00_100);
		}}

	}



/* &/ */
	obj_t BGl_z62zf2z90zz__r4_numbers_6_5z00(obj_t BgL_envz00_6593,
		obj_t BgL_xz00_6594, obj_t BgL_yz00_6595)
	{
		{	/* Ieee/number.scm 863 */
			return BGl_zf2zf2zz__r4_numbers_6_5z00(BgL_xz00_6594, BgL_yz00_6595);
		}

	}



/* abs */
	BGL_EXPORTED_DEF obj_t BGl_absz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_102)
	{
		{	/* Ieee/number.scm 876 */
			if (INTEGERP(BgL_xz00_102))
				{	/* Ieee/number.scm 878 */
					if (((long) CINT(BgL_xz00_102) == BGL_LONG_MIN))
						{	/* Ieee/number.scm 879 */
							return
								bgl_bignum_neg(bgl_long_to_bignum((long) CINT(BgL_xz00_102)));
						}
					else
						{	/* Ieee/number.scm 881 */
							long BgL_nz00_5621;

							BgL_nz00_5621 = (long) CINT(BgL_xz00_102);
							if ((BgL_nz00_5621 < ((long) 0)))
								{	/* Ieee/number.scm 881 */
									return BINT(NEG(BgL_nz00_5621));
								}
							else
								{	/* Ieee/number.scm 881 */
									return BINT(BgL_nz00_5621);
								}
						}
				}
			else
				{	/* Ieee/number.scm 878 */
					if (REALP(BgL_xz00_102))
						{	/* Ieee/number.scm 882 */
							return DOUBLE_TO_REAL(fabs(REAL_TO_DOUBLE(BgL_xz00_102)));
						}
					else
						{	/* Ieee/number.scm 882 */
							if (ELONGP(BgL_xz00_102))
								{	/* Ieee/number.scm 885 */
									bool_t BgL_test5664z00_10464;

									{	/* Ieee/number.scm 885 */
										long BgL_n1z00_5633;

										BgL_n1z00_5633 = BELONG_TO_LONG(BgL_xz00_102);
										BgL_test5664z00_10464 = (BgL_n1z00_5633 == LONG_MIN);
									}
									if (BgL_test5664z00_10464)
										{	/* Ieee/number.scm 886 */
											obj_t BgL_tmpz00_10467;

											{	/* Ieee/number.scm 886 */
												long BgL_xz00_5636;

												BgL_xz00_5636 = BELONG_TO_LONG(BgL_xz00_102);
												BgL_tmpz00_10467 = bgl_long_to_bignum(BgL_xz00_5636);
											}
											return bgl_bignum_neg(BgL_tmpz00_10467);
										}
									else
										{	/* Ieee/number.scm 887 */
											long BgL_nz00_5640;

											BgL_nz00_5640 = BELONG_TO_LONG(BgL_xz00_102);
											if ((BgL_nz00_5640 < ((long) 0)))
												{	/* Ieee/number.scm 887 */
													long BgL_tmpz00_10474;

													BgL_tmpz00_10474 = NEG(BgL_nz00_5640);
													return make_belong(BgL_tmpz00_10474);
												}
											else
												{	/* Ieee/number.scm 887 */
													return make_belong(BgL_nz00_5640);
												}
										}
								}
							else
								{	/* Ieee/number.scm 884 */
									if (LLONGP(BgL_xz00_102))
										{	/* Ieee/number.scm 888 */
											if ((BLLONG_TO_LLONG(BgL_xz00_102) == BGL_LONGLONG_MIN))
												{	/* Ieee/number.scm 889 */
													return
														bgl_bignum_neg(bgl_llong_to_bignum(BLLONG_TO_LLONG
															(BgL_xz00_102)));
												}
											else
												{	/* Ieee/number.scm 891 */
													BGL_LONGLONG_T BgL_nz00_5657;

													BgL_nz00_5657 = BLLONG_TO_LLONG(BgL_xz00_102);
													if ((BgL_nz00_5657 < ((BGL_LONGLONG_T) 0)))
														{	/* Ieee/number.scm 891 */
															return make_bllong(NEG(BgL_nz00_5657));
														}
													else
														{	/* Ieee/number.scm 891 */
															return make_bllong(BgL_nz00_5657);
														}
												}
										}
									else
										{	/* Ieee/number.scm 888 */
											if (BIGNUMP(BgL_xz00_102))
												{	/* Ieee/number.scm 892 */
													return bgl_bignum_abs(BgL_xz00_102);
												}
											else
												{	/* Ieee/number.scm 892 */
													return
														BGl_errorz00zz__errorz00
														(BGl_string4859z00zz__r4_numbers_6_5z00,
														BGl_string4844z00zz__r4_numbers_6_5z00,
														BgL_xz00_102);
												}
										}
								}
						}
				}
		}

	}



/* &abs */
	obj_t BGl_z62absz62zz__r4_numbers_6_5z00(obj_t BgL_envz00_6596,
		obj_t BgL_xz00_6597)
	{
		{	/* Ieee/number.scm 876 */
			return BGl_absz00zz__r4_numbers_6_5z00(BgL_xz00_6597);
		}

	}



/* floor */
	BGL_EXPORTED_DEF obj_t BGl_floorz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_103)
	{
		{	/* Ieee/number.scm 900 */
			if (INTEGERP(BgL_xz00_103))
				{	/* Ieee/number.scm 902 */
					return BgL_xz00_103;
				}
			else
				{	/* Ieee/number.scm 902 */
					if (REALP(BgL_xz00_103))
						{	/* Ieee/number.scm 903 */
							double BgL_res4422z00_5671;

							{	/* Ieee/number.scm 903 */
								double BgL_rz00_5670;

								BgL_rz00_5670 = REAL_TO_DOUBLE(BgL_xz00_103);
								BgL_res4422z00_5671 = floor(BgL_rz00_5670);
							}
							return DOUBLE_TO_REAL(BgL_res4422z00_5671);
						}
					else
						{	/* Ieee/number.scm 903 */
							if (ELONGP(BgL_xz00_103))
								{	/* Ieee/number.scm 904 */
									return BgL_xz00_103;
								}
							else
								{	/* Ieee/number.scm 904 */
									if (LLONGP(BgL_xz00_103))
										{	/* Ieee/number.scm 905 */
											return BgL_xz00_103;
										}
									else
										{	/* Ieee/number.scm 905 */
											if (BIGNUMP(BgL_xz00_103))
												{	/* Ieee/number.scm 906 */
													return BgL_xz00_103;
												}
											else
												{	/* Ieee/number.scm 906 */
													return
														BGl_errorz00zz__errorz00
														(BGl_string4860z00zz__r4_numbers_6_5z00,
														BGl_string4844z00zz__r4_numbers_6_5z00,
														BgL_xz00_103);
												}
										}
								}
						}
				}
		}

	}



/* &floor */
	obj_t BGl_z62floorz62zz__r4_numbers_6_5z00(obj_t BgL_envz00_6598,
		obj_t BgL_xz00_6599)
	{
		{	/* Ieee/number.scm 900 */
			return BGl_floorz00zz__r4_numbers_6_5z00(BgL_xz00_6599);
		}

	}



/* ceiling */
	BGL_EXPORTED_DEF obj_t BGl_ceilingz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_104)
	{
		{	/* Ieee/number.scm 912 */
			if (INTEGERP(BgL_xz00_104))
				{	/* Ieee/number.scm 914 */
					return BgL_xz00_104;
				}
			else
				{	/* Ieee/number.scm 914 */
					if (REALP(BgL_xz00_104))
						{	/* Ieee/number.scm 915 */
							double BgL_res4428z00_5678;

							{	/* Ieee/number.scm 915 */
								double BgL_rz00_5677;

								BgL_rz00_5677 = REAL_TO_DOUBLE(BgL_xz00_104);
								BgL_res4428z00_5678 = ceil(BgL_rz00_5677);
							}
							return DOUBLE_TO_REAL(BgL_res4428z00_5678);
						}
					else
						{	/* Ieee/number.scm 915 */
							if (ELONGP(BgL_xz00_104))
								{	/* Ieee/number.scm 916 */
									return BgL_xz00_104;
								}
							else
								{	/* Ieee/number.scm 916 */
									if (LLONGP(BgL_xz00_104))
										{	/* Ieee/number.scm 917 */
											return BgL_xz00_104;
										}
									else
										{	/* Ieee/number.scm 917 */
											if (BIGNUMP(BgL_xz00_104))
												{	/* Ieee/number.scm 918 */
													return BgL_xz00_104;
												}
											else
												{	/* Ieee/number.scm 918 */
													return
														BGl_errorz00zz__errorz00
														(BGl_string4861z00zz__r4_numbers_6_5z00,
														BGl_string4844z00zz__r4_numbers_6_5z00,
														BgL_xz00_104);
												}
										}
								}
						}
				}
		}

	}



/* &ceiling */
	obj_t BGl_z62ceilingz62zz__r4_numbers_6_5z00(obj_t BgL_envz00_6600,
		obj_t BgL_xz00_6601)
	{
		{	/* Ieee/number.scm 912 */
			return BGl_ceilingz00zz__r4_numbers_6_5z00(BgL_xz00_6601);
		}

	}



/* truncate */
	BGL_EXPORTED_DEF obj_t BGl_truncatez00zz__r4_numbers_6_5z00(obj_t
		BgL_xz00_105)
	{
		{	/* Ieee/number.scm 924 */
			if (INTEGERP(BgL_xz00_105))
				{	/* Ieee/number.scm 926 */
					return BgL_xz00_105;
				}
			else
				{	/* Ieee/number.scm 926 */
					if (REALP(BgL_xz00_105))
						{	/* Ieee/number.scm 927 */
							double BgL_res4438z00_5695;

							{	/* Ieee/number.scm 927 */
								double BgL_rz00_5684;

								BgL_rz00_5684 = REAL_TO_DOUBLE(BgL_xz00_105);
								if ((BgL_rz00_5684 < ((double) 0.0)))
									{	/* Ieee/number.scm 927 */
										double BgL_res4436z00_5692;

										BgL_res4436z00_5692 = ceil(BgL_rz00_5684);
										BgL_res4438z00_5695 = BgL_res4436z00_5692;
									}
								else
									{	/* Ieee/number.scm 927 */
										double BgL_res4437z00_5694;

										BgL_res4437z00_5694 = floor(BgL_rz00_5684);
										BgL_res4438z00_5695 = BgL_res4437z00_5694;
							}}
							return DOUBLE_TO_REAL(BgL_res4438z00_5695);
						}
					else
						{	/* Ieee/number.scm 927 */
							if (ELONGP(BgL_xz00_105))
								{	/* Ieee/number.scm 928 */
									return BgL_xz00_105;
								}
							else
								{	/* Ieee/number.scm 928 */
									if (LLONGP(BgL_xz00_105))
										{	/* Ieee/number.scm 929 */
											return BgL_xz00_105;
										}
									else
										{	/* Ieee/number.scm 929 */
											return
												BGl_errorz00zz__errorz00
												(BGl_string4862z00zz__r4_numbers_6_5z00,
												BGl_string4844z00zz__r4_numbers_6_5z00, BgL_xz00_105);
										}
								}
						}
				}
		}

	}



/* &truncate */
	obj_t BGl_z62truncatez62zz__r4_numbers_6_5z00(obj_t BgL_envz00_6602,
		obj_t BgL_xz00_6603)
	{
		{	/* Ieee/number.scm 924 */
			return BGl_truncatez00zz__r4_numbers_6_5z00(BgL_xz00_6603);
		}

	}



/* round */
	BGL_EXPORTED_DEF obj_t BGl_roundz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_106)
	{
		{	/* Ieee/number.scm 935 */
			if (INTEGERP(BgL_xz00_106))
				{	/* Ieee/number.scm 937 */
					return BgL_xz00_106;
				}
			else
				{	/* Ieee/number.scm 937 */
					if (REALP(BgL_xz00_106))
						{	/* Ieee/number.scm 938 */
							return
								DOUBLE_TO_REAL(BGl_roundflz00zz__r4_numbers_6_5_flonumz00
								(REAL_TO_DOUBLE(BgL_xz00_106)));
						}
					else
						{	/* Ieee/number.scm 938 */
							if (ELONGP(BgL_xz00_106))
								{	/* Ieee/number.scm 939 */
									return BgL_xz00_106;
								}
							else
								{	/* Ieee/number.scm 939 */
									if (LLONGP(BgL_xz00_106))
										{	/* Ieee/number.scm 940 */
											return BgL_xz00_106;
										}
									else
										{	/* Ieee/number.scm 940 */
											if (BIGNUMP(BgL_xz00_106))
												{	/* Ieee/number.scm 941 */
													return BgL_xz00_106;
												}
											else
												{	/* Ieee/number.scm 941 */
													return
														BGl_errorz00zz__errorz00
														(BGl_string4863z00zz__r4_numbers_6_5z00,
														BGl_string4844z00zz__r4_numbers_6_5z00,
														BgL_xz00_106);
												}
										}
								}
						}
				}
		}

	}



/* &round */
	obj_t BGl_z62roundz62zz__r4_numbers_6_5z00(obj_t BgL_envz00_6604,
		obj_t BgL_xz00_6605)
	{
		{	/* Ieee/number.scm 935 */
			return BGl_roundz00zz__r4_numbers_6_5z00(BgL_xz00_6605);
		}

	}



/* exp */
	BGL_EXPORTED_DEF double BGl_expz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_107)
	{
		{	/* Ieee/number.scm 947 */
			if (REALP(BgL_xz00_107))
				{	/* Ieee/number.scm 949 */
					return exp(REAL_TO_DOUBLE(BgL_xz00_107));
				}
			else
				{	/* Ieee/number.scm 949 */
					if (INTEGERP(BgL_xz00_107))
						{	/* Ieee/number.scm 950 */
							return exp((double) ((long) CINT(BgL_xz00_107)));
						}
					else
						{	/* Ieee/number.scm 950 */
							if (ELONGP(BgL_xz00_107))
								{	/* Ieee/number.scm 951 */
									return exp((double) (BELONG_TO_LONG(BgL_xz00_107)));
								}
							else
								{	/* Ieee/number.scm 951 */
									if (LLONGP(BgL_xz00_107))
										{	/* Ieee/number.scm 952 */
											return exp((double) (BLLONG_TO_LLONG(BgL_xz00_107)));
										}
									else
										{	/* Ieee/number.scm 952 */
											if (BIGNUMP(BgL_xz00_107))
												{	/* Ieee/number.scm 953 */
													return exp(bgl_bignum_to_flonum(BgL_xz00_107));
												}
											else
												{	/* Ieee/number.scm 953 */
													return
														REAL_TO_DOUBLE(BGl_errorz00zz__errorz00
														(BGl_string4864z00zz__r4_numbers_6_5z00,
															BGl_string4844z00zz__r4_numbers_6_5z00,
															BgL_xz00_107));
												}
										}
								}
						}
				}
		}

	}



/* &exp */
	obj_t BGl_z62expz62zz__r4_numbers_6_5z00(obj_t BgL_envz00_6606,
		obj_t BgL_xz00_6607)
	{
		{	/* Ieee/number.scm 947 */
			return DOUBLE_TO_REAL(BGl_expz00zz__r4_numbers_6_5z00(BgL_xz00_6607));
		}

	}



/* log */
	BGL_EXPORTED_DEF double BGl_logz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_108)
	{
		{	/* Ieee/number.scm 959 */
			if (REALP(BgL_xz00_108))
				{	/* Ieee/number.scm 961 */
					return log(REAL_TO_DOUBLE(BgL_xz00_108));
				}
			else
				{	/* Ieee/number.scm 961 */
					if (INTEGERP(BgL_xz00_108))
						{	/* Ieee/number.scm 962 */
							return log((double) ((long) CINT(BgL_xz00_108)));
						}
					else
						{	/* Ieee/number.scm 962 */
							if (ELONGP(BgL_xz00_108))
								{	/* Ieee/number.scm 963 */
									return log((double) (BELONG_TO_LONG(BgL_xz00_108)));
								}
							else
								{	/* Ieee/number.scm 963 */
									if (LLONGP(BgL_xz00_108))
										{	/* Ieee/number.scm 964 */
											return log((double) (BLLONG_TO_LLONG(BgL_xz00_108)));
										}
									else
										{	/* Ieee/number.scm 964 */
											if (BIGNUMP(BgL_xz00_108))
												{	/* Ieee/number.scm 965 */
													return log(bgl_bignum_to_flonum(BgL_xz00_108));
												}
											else
												{	/* Ieee/number.scm 965 */
													return
														REAL_TO_DOUBLE(BGl_errorz00zz__errorz00
														(BGl_string4865z00zz__r4_numbers_6_5z00,
															BGl_string4844z00zz__r4_numbers_6_5z00,
															BgL_xz00_108));
												}
										}
								}
						}
				}
		}

	}



/* &log */
	obj_t BGl_z62logz62zz__r4_numbers_6_5z00(obj_t BgL_envz00_6608,
		obj_t BgL_xz00_6609)
	{
		{	/* Ieee/number.scm 959 */
			return DOUBLE_TO_REAL(BGl_logz00zz__r4_numbers_6_5z00(BgL_xz00_6609));
		}

	}



/* sin */
	BGL_EXPORTED_DEF double BGl_sinz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_109)
	{
		{	/* Ieee/number.scm 971 */
			if (REALP(BgL_xz00_109))
				{	/* Ieee/number.scm 973 */
					return sin(REAL_TO_DOUBLE(BgL_xz00_109));
				}
			else
				{	/* Ieee/number.scm 973 */
					if (INTEGERP(BgL_xz00_109))
						{	/* Ieee/number.scm 974 */
							return sin((double) ((long) CINT(BgL_xz00_109)));
						}
					else
						{	/* Ieee/number.scm 974 */
							if (ELONGP(BgL_xz00_109))
								{	/* Ieee/number.scm 975 */
									return sin((double) (BELONG_TO_LONG(BgL_xz00_109)));
								}
							else
								{	/* Ieee/number.scm 975 */
									if (LLONGP(BgL_xz00_109))
										{	/* Ieee/number.scm 976 */
											return sin((double) (BLLONG_TO_LLONG(BgL_xz00_109)));
										}
									else
										{	/* Ieee/number.scm 976 */
											if (BIGNUMP(BgL_xz00_109))
												{	/* Ieee/number.scm 977 */
													return sin(bgl_bignum_to_flonum(BgL_xz00_109));
												}
											else
												{	/* Ieee/number.scm 977 */
													return
														REAL_TO_DOUBLE(BGl_errorz00zz__errorz00
														(BGl_string4866z00zz__r4_numbers_6_5z00,
															BGl_string4844z00zz__r4_numbers_6_5z00,
															BgL_xz00_109));
												}
										}
								}
						}
				}
		}

	}



/* &sin */
	obj_t BGl_z62sinz62zz__r4_numbers_6_5z00(obj_t BgL_envz00_6610,
		obj_t BgL_xz00_6611)
	{
		{	/* Ieee/number.scm 971 */
			return DOUBLE_TO_REAL(BGl_sinz00zz__r4_numbers_6_5z00(BgL_xz00_6611));
		}

	}



/* cos */
	BGL_EXPORTED_DEF double BGl_cosz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_110)
	{
		{	/* Ieee/number.scm 983 */
			if (REALP(BgL_xz00_110))
				{	/* Ieee/number.scm 985 */
					return cos(REAL_TO_DOUBLE(BgL_xz00_110));
				}
			else
				{	/* Ieee/number.scm 985 */
					if (INTEGERP(BgL_xz00_110))
						{	/* Ieee/number.scm 986 */
							return cos((double) ((long) CINT(BgL_xz00_110)));
						}
					else
						{	/* Ieee/number.scm 986 */
							if (ELONGP(BgL_xz00_110))
								{	/* Ieee/number.scm 987 */
									return cos((double) (BELONG_TO_LONG(BgL_xz00_110)));
								}
							else
								{	/* Ieee/number.scm 987 */
									if (LLONGP(BgL_xz00_110))
										{	/* Ieee/number.scm 988 */
											return cos((double) (BLLONG_TO_LLONG(BgL_xz00_110)));
										}
									else
										{	/* Ieee/number.scm 988 */
											if (BIGNUMP(BgL_xz00_110))
												{	/* Ieee/number.scm 989 */
													return cos(bgl_bignum_to_flonum(BgL_xz00_110));
												}
											else
												{	/* Ieee/number.scm 989 */
													return
														REAL_TO_DOUBLE(BGl_errorz00zz__errorz00
														(BGl_string4867z00zz__r4_numbers_6_5z00,
															BGl_string4844z00zz__r4_numbers_6_5z00,
															BgL_xz00_110));
												}
										}
								}
						}
				}
		}

	}



/* &cos */
	obj_t BGl_z62cosz62zz__r4_numbers_6_5z00(obj_t BgL_envz00_6612,
		obj_t BgL_xz00_6613)
	{
		{	/* Ieee/number.scm 983 */
			return DOUBLE_TO_REAL(BGl_cosz00zz__r4_numbers_6_5z00(BgL_xz00_6613));
		}

	}



/* tan */
	BGL_EXPORTED_DEF double BGl_tanz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_111)
	{
		{	/* Ieee/number.scm 995 */
			if (REALP(BgL_xz00_111))
				{	/* Ieee/number.scm 997 */
					return tan(REAL_TO_DOUBLE(BgL_xz00_111));
				}
			else
				{	/* Ieee/number.scm 997 */
					if (INTEGERP(BgL_xz00_111))
						{	/* Ieee/number.scm 998 */
							return tan((double) ((long) CINT(BgL_xz00_111)));
						}
					else
						{	/* Ieee/number.scm 998 */
							if (ELONGP(BgL_xz00_111))
								{	/* Ieee/number.scm 999 */
									return tan((double) (BELONG_TO_LONG(BgL_xz00_111)));
								}
							else
								{	/* Ieee/number.scm 999 */
									if (LLONGP(BgL_xz00_111))
										{	/* Ieee/number.scm 1000 */
											return tan((double) (BLLONG_TO_LLONG(BgL_xz00_111)));
										}
									else
										{	/* Ieee/number.scm 1000 */
											if (BIGNUMP(BgL_xz00_111))
												{	/* Ieee/number.scm 1001 */
													return tan(bgl_bignum_to_flonum(BgL_xz00_111));
												}
											else
												{	/* Ieee/number.scm 1001 */
													return
														REAL_TO_DOUBLE(BGl_errorz00zz__errorz00
														(BGl_string4868z00zz__r4_numbers_6_5z00,
															BGl_string4844z00zz__r4_numbers_6_5z00,
															BgL_xz00_111));
												}
										}
								}
						}
				}
		}

	}



/* &tan */
	obj_t BGl_z62tanz62zz__r4_numbers_6_5z00(obj_t BgL_envz00_6614,
		obj_t BgL_xz00_6615)
	{
		{	/* Ieee/number.scm 995 */
			return DOUBLE_TO_REAL(BGl_tanz00zz__r4_numbers_6_5z00(BgL_xz00_6615));
		}

	}



/* asin */
	BGL_EXPORTED_DEF double BGl_asinz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_112)
	{
		{	/* Ieee/number.scm 1007 */
			if (REALP(BgL_xz00_112))
				{	/* Ieee/number.scm 1009 */
					return asin(REAL_TO_DOUBLE(BgL_xz00_112));
				}
			else
				{	/* Ieee/number.scm 1009 */
					if (INTEGERP(BgL_xz00_112))
						{	/* Ieee/number.scm 1010 */
							return asin((double) ((long) CINT(BgL_xz00_112)));
						}
					else
						{	/* Ieee/number.scm 1010 */
							if (ELONGP(BgL_xz00_112))
								{	/* Ieee/number.scm 1011 */
									return asin((double) (BELONG_TO_LONG(BgL_xz00_112)));
								}
							else
								{	/* Ieee/number.scm 1011 */
									if (LLONGP(BgL_xz00_112))
										{	/* Ieee/number.scm 1012 */
											return asin((double) (BLLONG_TO_LLONG(BgL_xz00_112)));
										}
									else
										{	/* Ieee/number.scm 1012 */
											if (BIGNUMP(BgL_xz00_112))
												{	/* Ieee/number.scm 1013 */
													return asin(bgl_bignum_to_flonum(BgL_xz00_112));
												}
											else
												{	/* Ieee/number.scm 1013 */
													return
														REAL_TO_DOUBLE(BGl_errorz00zz__errorz00
														(BGl_string4869z00zz__r4_numbers_6_5z00,
															BGl_string4844z00zz__r4_numbers_6_5z00,
															BgL_xz00_112));
												}
										}
								}
						}
				}
		}

	}



/* &asin */
	obj_t BGl_z62asinz62zz__r4_numbers_6_5z00(obj_t BgL_envz00_6616,
		obj_t BgL_xz00_6617)
	{
		{	/* Ieee/number.scm 1007 */
			return DOUBLE_TO_REAL(BGl_asinz00zz__r4_numbers_6_5z00(BgL_xz00_6617));
		}

	}



/* acos */
	BGL_EXPORTED_DEF double BGl_acosz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_113)
	{
		{	/* Ieee/number.scm 1019 */
			if (REALP(BgL_xz00_113))
				{	/* Ieee/number.scm 1021 */
					return acos(REAL_TO_DOUBLE(BgL_xz00_113));
				}
			else
				{	/* Ieee/number.scm 1021 */
					if (INTEGERP(BgL_xz00_113))
						{	/* Ieee/number.scm 1022 */
							return acos((double) ((long) CINT(BgL_xz00_113)));
						}
					else
						{	/* Ieee/number.scm 1022 */
							if (ELONGP(BgL_xz00_113))
								{	/* Ieee/number.scm 1023 */
									return acos((double) (BELONG_TO_LONG(BgL_xz00_113)));
								}
							else
								{	/* Ieee/number.scm 1023 */
									if (LLONGP(BgL_xz00_113))
										{	/* Ieee/number.scm 1024 */
											return acos((double) (BLLONG_TO_LLONG(BgL_xz00_113)));
										}
									else
										{	/* Ieee/number.scm 1024 */
											if (BIGNUMP(BgL_xz00_113))
												{	/* Ieee/number.scm 1025 */
													return acos(bgl_bignum_to_flonum(BgL_xz00_113));
												}
											else
												{	/* Ieee/number.scm 1025 */
													return
														REAL_TO_DOUBLE(BGl_errorz00zz__errorz00
														(BGl_string4870z00zz__r4_numbers_6_5z00,
															BGl_string4844z00zz__r4_numbers_6_5z00,
															BgL_xz00_113));
												}
										}
								}
						}
				}
		}

	}



/* &acos */
	obj_t BGl_z62acosz62zz__r4_numbers_6_5z00(obj_t BgL_envz00_6618,
		obj_t BgL_xz00_6619)
	{
		{	/* Ieee/number.scm 1019 */
			return DOUBLE_TO_REAL(BGl_acosz00zz__r4_numbers_6_5z00(BgL_xz00_6619));
		}

	}



/* atan */
	BGL_EXPORTED_DEF double BGl_atanz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_114,
		obj_t BgL_yz00_115)
	{
		{	/* Ieee/number.scm 1031 */
			{	/* Ieee/number.scm 1032 */
				obj_t BgL_yz00_2251;

				if (PAIRP(BgL_yz00_115))
					{	/* Ieee/number.scm 1033 */
						obj_t BgL_yz00_2267;

						BgL_yz00_2267 = CAR(BgL_yz00_115);
						if (INTEGERP(BgL_yz00_2267))
							{	/* Ieee/number.scm 1035 */
								BgL_yz00_2251 =
									DOUBLE_TO_REAL((double) ((long) CINT(BgL_yz00_2267)));
							}
						else
							{	/* Ieee/number.scm 1035 */
								if (REALP(BgL_yz00_2267))
									{	/* Ieee/number.scm 1036 */
										BgL_yz00_2251 = BgL_yz00_2267;
									}
								else
									{	/* Ieee/number.scm 1036 */
										BgL_yz00_2251 =
											BGl_errorz00zz__errorz00
											(BGl_string4871z00zz__r4_numbers_6_5z00,
											BGl_string4844z00zz__r4_numbers_6_5z00, BgL_yz00_2267);
									}
							}
					}
				else
					{	/* Ieee/number.scm 1032 */
						BgL_yz00_2251 = BFALSE;
					}
				if (REALP(BgL_xz00_114))
					{	/* Ieee/number.scm 1044 */
						if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_yz00_2251))
							{	/* Ieee/number.scm 1041 */
								double BgL_res4528z00_5834;

								{	/* Ieee/number.scm 1041 */
									double BgL_xz00_5832;
									double BgL_yz00_5833;

									BgL_xz00_5832 = REAL_TO_DOUBLE(BgL_xz00_114);
									BgL_yz00_5833 = REAL_TO_DOUBLE(BgL_yz00_2251);
									BgL_res4528z00_5834 = atan2(BgL_xz00_5832, BgL_yz00_5833);
								}
								return BgL_res4528z00_5834;
							}
						else
							{	/* Ieee/number.scm 1040 */
								return atan(REAL_TO_DOUBLE(BgL_xz00_114));
							}
					}
				else
					{	/* Ieee/number.scm 1044 */
						if (INTEGERP(BgL_xz00_114))
							{	/* Ieee/number.scm 1045 */
								double BgL_arg2620z00_2255;

								BgL_arg2620z00_2255 = (double) ((long) CINT(BgL_xz00_114));
								if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_yz00_2251))
									{	/* Ieee/number.scm 1041 */
										double BgL_res4531z00_5841;

										{	/* Ieee/number.scm 1041 */
											double BgL_yz00_5840;

											BgL_yz00_5840 = REAL_TO_DOUBLE(BgL_yz00_2251);
											BgL_res4531z00_5841 =
												atan2(BgL_arg2620z00_2255, BgL_yz00_5840);
										}
										return BgL_res4531z00_5841;
									}
								else
									{	/* Ieee/number.scm 1040 */
										return atan(BgL_arg2620z00_2255);
									}
							}
						else
							{	/* Ieee/number.scm 1045 */
								if (ELONGP(BgL_xz00_114))
									{	/* Ieee/number.scm 1046 */
										double BgL_arg2622z00_2257;

										BgL_arg2622z00_2257 =
											(double) (BELONG_TO_LONG(BgL_xz00_114));
										if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_yz00_2251))
											{	/* Ieee/number.scm 1041 */
												double BgL_res4534z00_5848;

												{	/* Ieee/number.scm 1041 */
													double BgL_yz00_5847;

													BgL_yz00_5847 = REAL_TO_DOUBLE(BgL_yz00_2251);
													BgL_res4534z00_5848 =
														atan2(BgL_arg2622z00_2257, BgL_yz00_5847);
												}
												return BgL_res4534z00_5848;
											}
										else
											{	/* Ieee/number.scm 1040 */
												return atan(BgL_arg2622z00_2257);
											}
									}
								else
									{	/* Ieee/number.scm 1046 */
										if (LLONGP(BgL_xz00_114))
											{	/* Ieee/number.scm 1047 */
												double BgL_arg2624z00_2259;

												BgL_arg2624z00_2259 =
													(double) (BLLONG_TO_LLONG(BgL_xz00_114));
												if (BGl_numberzf3zf3zz__r4_numbers_6_5z00
													(BgL_yz00_2251))
													{	/* Ieee/number.scm 1041 */
														double BgL_res4537z00_5855;

														{	/* Ieee/number.scm 1041 */
															double BgL_yz00_5854;

															BgL_yz00_5854 = REAL_TO_DOUBLE(BgL_yz00_2251);
															BgL_res4537z00_5855 =
																atan2(BgL_arg2624z00_2259, BgL_yz00_5854);
														}
														return BgL_res4537z00_5855;
													}
												else
													{	/* Ieee/number.scm 1040 */
														return atan(BgL_arg2624z00_2259);
													}
											}
										else
											{	/* Ieee/number.scm 1047 */
												if (BIGNUMP(BgL_xz00_114))
													{	/* Ieee/number.scm 1048 */
														double BgL_arg2626z00_2261;

														BgL_arg2626z00_2261 =
															bgl_bignum_to_flonum(BgL_xz00_114);
														if (BGl_numberzf3zf3zz__r4_numbers_6_5z00
															(BgL_yz00_2251))
															{	/* Ieee/number.scm 1041 */
																double BgL_res4541z00_5864;

																{	/* Ieee/number.scm 1041 */
																	double BgL_yz00_5863;

																	BgL_yz00_5863 = REAL_TO_DOUBLE(BgL_yz00_2251);
																	BgL_res4541z00_5864 =
																		atan2(BgL_arg2626z00_2261, BgL_yz00_5863);
																}
																return BgL_res4541z00_5864;
															}
														else
															{	/* Ieee/number.scm 1040 */
																return atan(BgL_arg2626z00_2261);
															}
													}
												else
													{	/* Ieee/number.scm 1048 */
														return
															REAL_TO_DOUBLE(BGl_errorz00zz__errorz00
															(BGl_string4871z00zz__r4_numbers_6_5z00,
																BGl_string4844z00zz__r4_numbers_6_5z00,
																BgL_xz00_114));
													}
											}
									}
							}
					}
			}
		}

	}



/* &atan */
	obj_t BGl_z62atanz62zz__r4_numbers_6_5z00(obj_t BgL_envz00_6620,
		obj_t BgL_xz00_6621, obj_t BgL_yz00_6622)
	{
		{	/* Ieee/number.scm 1031 */
			return
				DOUBLE_TO_REAL(BGl_atanz00zz__r4_numbers_6_5z00(BgL_xz00_6621,
					BgL_yz00_6622));
		}

	}



/* sqrt */
	BGL_EXPORTED_DEF double BGl_sqrtz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_116)
	{
		{	/* Ieee/number.scm 1054 */
			if (INTEGERP(BgL_xz00_116))
				{	/* Ieee/number.scm 1056 */
					return sqrt((double) ((long) CINT(BgL_xz00_116)));
				}
			else
				{	/* Ieee/number.scm 1056 */
					if (REALP(BgL_xz00_116))
						{	/* Ieee/number.scm 1057 */
							return sqrt(REAL_TO_DOUBLE(BgL_xz00_116));
						}
					else
						{	/* Ieee/number.scm 1057 */
							if (ELONGP(BgL_xz00_116))
								{	/* Ieee/number.scm 1058 */
									return sqrt((double) (BELONG_TO_LONG(BgL_xz00_116)));
								}
							else
								{	/* Ieee/number.scm 1058 */
									if (LLONGP(BgL_xz00_116))
										{	/* Ieee/number.scm 1059 */
											return sqrt((double) (BLLONG_TO_LLONG(BgL_xz00_116)));
										}
									else
										{	/* Ieee/number.scm 1059 */
											if (BIGNUMP(BgL_xz00_116))
												{	/* Ieee/number.scm 1060 */
													return sqrt(bgl_bignum_to_flonum(BgL_xz00_116));
												}
											else
												{	/* Ieee/number.scm 1060 */
													return
														REAL_TO_DOUBLE(BGl_errorz00zz__errorz00
														(BGl_string4872z00zz__r4_numbers_6_5z00,
															BGl_string4844z00zz__r4_numbers_6_5z00,
															BgL_xz00_116));
												}
										}
								}
						}
				}
		}

	}



/* &sqrt */
	obj_t BGl_z62sqrtz62zz__r4_numbers_6_5z00(obj_t BgL_envz00_6623,
		obj_t BgL_xz00_6624)
	{
		{	/* Ieee/number.scm 1054 */
			return DOUBLE_TO_REAL(BGl_sqrtz00zz__r4_numbers_6_5z00(BgL_xz00_6624));
		}

	}



/* expt */
	BGL_EXPORTED_DEF obj_t BGl_exptz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_117,
		obj_t BgL_yz00_118)
	{
		{	/* Ieee/number.scm 1066 */
			{	/* Ieee/number.scm 1068 */
				bool_t BgL_test5743z00_10833;

				if (REALP(BgL_xz00_117))
					{	/* Ieee/number.scm 1068 */
						if (REALP(BgL_yz00_118))
							{	/* Ieee/number.scm 1068 */
								if ((REAL_TO_DOUBLE(BgL_xz00_117) == ((double) 0.0)))
									{	/* Ieee/number.scm 1068 */
										BgL_test5743z00_10833 =
											(REAL_TO_DOUBLE(BgL_yz00_118) == ((double) 0.0));
									}
								else
									{	/* Ieee/number.scm 1068 */
										BgL_test5743z00_10833 = ((bool_t) 0);
									}
							}
						else
							{	/* Ieee/number.scm 1068 */
								BgL_test5743z00_10833 = ((bool_t) 0);
							}
					}
				else
					{	/* Ieee/number.scm 1068 */
						BgL_test5743z00_10833 = ((bool_t) 0);
					}
				if (BgL_test5743z00_10833)
					{	/* Ieee/number.scm 1068 */
						return BGL_REAL_CNST(BGl_real4873z00zz__r4_numbers_6_5z00);
					}
				else
					{	/* Ieee/number.scm 1070 */
						bool_t BgL_test5747z00_10843;

						if (INTEGERP(BgL_xz00_117))
							{	/* Ieee/number.scm 1070 */
								if (INTEGERP(BgL_yz00_118))
									{	/* Ieee/number.scm 1070 */
										BgL_test5747z00_10843 =
											((long) CINT(BgL_yz00_118) >= ((long) 0));
									}
								else
									{	/* Ieee/number.scm 1070 */
										BgL_test5747z00_10843 = ((bool_t) 0);
									}
							}
						else
							{	/* Ieee/number.scm 1070 */
								BgL_test5747z00_10843 = ((bool_t) 0);
							}
						if (BgL_test5747z00_10843)
							{	/* Ieee/number.scm 1070 */
								return
									BINT(BGl_exptfxz00zz__r4_numbers_6_5_fixnumz00(
										(long) CINT(BgL_xz00_117), (long) CINT(BgL_yz00_118)));
							}
						else
							{	/* Ieee/number.scm 1072 */
								bool_t BgL_test5750z00_10854;

								if (BIGNUMP(BgL_xz00_117))
									{	/* Ieee/number.scm 1072 */
										if (BIGNUMP(BgL_yz00_118))
											{	/* Ieee/number.scm 1072 */
												BgL_test5750z00_10854 = BXPOSITIVE(BgL_yz00_118);
											}
										else
											{	/* Ieee/number.scm 1072 */
												BgL_test5750z00_10854 = ((bool_t) 0);
											}
									}
								else
									{	/* Ieee/number.scm 1072 */
										BgL_test5750z00_10854 = ((bool_t) 0);
									}
								if (BgL_test5750z00_10854)
									{	/* Ieee/number.scm 1072 */
										return
											BGl_exptbxz00zz__r4_numbers_6_5_fixnumz00(BgL_xz00_117,
											BgL_yz00_118);
									}
								else
									{	/* Ieee/number.scm 1072 */
										if (BIGNUMP(BgL_xz00_117))
											{	/* Ieee/number.scm 1075 */
												obj_t BgL_y1z00_2290;

												if (REALP(BgL_yz00_118))
													{	/* Ieee/number.scm 1076 */
														BgL_y1z00_2290 =
															bgl_long_to_bignum(
															(long) (REAL_TO_DOUBLE(BgL_yz00_118)));
													}
												else
													{	/* Ieee/number.scm 1076 */
														if (INTEGERP(BgL_yz00_118))
															{	/* Ieee/number.scm 1077 */
																BgL_y1z00_2290 =
																	bgl_long_to_bignum((long) CINT(BgL_yz00_118));
															}
														else
															{	/* Ieee/number.scm 1077 */
																if (ELONGP(BgL_yz00_118))
																	{	/* Ieee/number.scm 1078 */
																		BgL_y1z00_2290 =
																			bgl_long_to_bignum(BELONG_TO_LONG
																			(BgL_yz00_118));
																	}
																else
																	{	/* Ieee/number.scm 1078 */
																		if (LLONGP(BgL_yz00_118))
																			{	/* Ieee/number.scm 1079 */
																				BgL_y1z00_2290 =
																					bgl_llong_to_bignum(BLLONG_TO_LLONG
																					(BgL_yz00_118));
																			}
																		else
																			{	/* Ieee/number.scm 1079 */
																				if (BIGNUMP(BgL_yz00_118))
																					{	/* Ieee/number.scm 1080 */
																						BgL_y1z00_2290 = BgL_yz00_118;
																					}
																				else
																					{	/* Ieee/number.scm 1080 */
																						BgL_y1z00_2290 =
																							BGl_errorz00zz__errorz00
																							(BGl_string4874z00zz__r4_numbers_6_5z00,
																							BGl_string4844z00zz__r4_numbers_6_5z00,
																							BgL_yz00_118);
																					}
																			}
																	}
															}
													}
												return
													BGl_exptbxz00zz__r4_numbers_6_5_fixnumz00
													(BgL_xz00_117, BgL_y1z00_2290);
											}
										else
											{	/* Ieee/number.scm 1084 */
												obj_t BgL_x1z00_2297;
												obj_t BgL_y1z00_2298;

												if (REALP(BgL_xz00_117))
													{	/* Ieee/number.scm 1085 */
														BgL_x1z00_2297 = BgL_xz00_117;
													}
												else
													{	/* Ieee/number.scm 1085 */
														if (INTEGERP(BgL_xz00_117))
															{	/* Ieee/number.scm 1086 */
																BgL_x1z00_2297 =
																	DOUBLE_TO_REAL(
																	(double) ((long) CINT(BgL_xz00_117)));
															}
														else
															{	/* Ieee/number.scm 1086 */
																if (ELONGP(BgL_xz00_117))
																	{	/* Ieee/number.scm 1087 */
																		BgL_x1z00_2297 =
																			DOUBLE_TO_REAL(
																			(double) (BELONG_TO_LONG(BgL_xz00_117)));
																	}
																else
																	{	/* Ieee/number.scm 1087 */
																		if (LLONGP(BgL_xz00_117))
																			{	/* Ieee/number.scm 1088 */
																				BgL_x1z00_2297 =
																					DOUBLE_TO_REAL(
																					(double) (BLLONG_TO_LLONG
																						(BgL_xz00_117)));
																			}
																		else
																			{	/* Ieee/number.scm 1088 */
																				if (BIGNUMP(BgL_xz00_117))
																					{	/* Ieee/number.scm 1089 */
																						BgL_x1z00_2297 =
																							DOUBLE_TO_REAL
																							(bgl_bignum_to_flonum
																							(BgL_xz00_117));
																					}
																				else
																					{	/* Ieee/number.scm 1089 */
																						BgL_x1z00_2297 =
																							BGl_errorz00zz__errorz00
																							(BGl_string4874z00zz__r4_numbers_6_5z00,
																							BGl_string4844z00zz__r4_numbers_6_5z00,
																							BgL_xz00_117);
																					}
																			}
																	}
															}
													}
												if (REALP(BgL_yz00_118))
													{	/* Ieee/number.scm 1092 */
														BgL_y1z00_2298 = BgL_yz00_118;
													}
												else
													{	/* Ieee/number.scm 1092 */
														if (INTEGERP(BgL_yz00_118))
															{	/* Ieee/number.scm 1093 */
																BgL_y1z00_2298 =
																	DOUBLE_TO_REAL(
																	(double) ((long) CINT(BgL_yz00_118)));
															}
														else
															{	/* Ieee/number.scm 1093 */
																if (ELONGP(BgL_yz00_118))
																	{	/* Ieee/number.scm 1094 */
																		BgL_y1z00_2298 =
																			DOUBLE_TO_REAL(
																			(double) (BELONG_TO_LONG(BgL_yz00_118)));
																	}
																else
																	{	/* Ieee/number.scm 1094 */
																		if (LLONGP(BgL_yz00_118))
																			{	/* Ieee/number.scm 1095 */
																				BgL_y1z00_2298 =
																					DOUBLE_TO_REAL(
																					(double) (BLLONG_TO_LLONG
																						(BgL_yz00_118)));
																			}
																		else
																			{	/* Ieee/number.scm 1095 */
																				if (BIGNUMP(BgL_yz00_118))
																					{	/* Ieee/number.scm 1096 */
																						BgL_y1z00_2298 =
																							DOUBLE_TO_REAL
																							(bgl_bignum_to_flonum
																							(BgL_yz00_118));
																					}
																				else
																					{	/* Ieee/number.scm 1096 */
																						BgL_y1z00_2298 =
																							BGl_errorz00zz__errorz00
																							(BGl_string4874z00zz__r4_numbers_6_5z00,
																							BGl_string4844z00zz__r4_numbers_6_5z00,
																							BgL_yz00_118);
																					}
																			}
																	}
															}
													}
												{	/* Ieee/number.scm 1098 */
													double BgL_res4582z00_5922;

													{	/* Ieee/number.scm 1098 */
														double BgL_r1z00_5920;
														double BgL_r2z00_5921;

														BgL_r1z00_5920 = REAL_TO_DOUBLE(BgL_x1z00_2297);
														BgL_r2z00_5921 = REAL_TO_DOUBLE(BgL_y1z00_2298);
														BgL_res4582z00_5922 =
															pow(BgL_r1z00_5920, BgL_r2z00_5921);
													}
													return DOUBLE_TO_REAL(BgL_res4582z00_5922);
												}
											}
									}
							}
					}
			}
		}

	}



/* &expt */
	obj_t BGl_z62exptz62zz__r4_numbers_6_5z00(obj_t BgL_envz00_6625,
		obj_t BgL_xz00_6626, obj_t BgL_yz00_6627)
	{
		{	/* Ieee/number.scm 1066 */
			return BGl_exptz00zz__r4_numbers_6_5z00(BgL_xz00_6626, BgL_yz00_6627);
		}

	}



/* exact->inexact */
	BGL_EXPORTED_DEF obj_t bgl_exact_to_inexact(obj_t BgL_za7za7_119)
	{
		{	/* Ieee/number.scm 1103 */
			if (INTEGERP(BgL_za7za7_119))
				{	/* Ieee/number.scm 1105 */
					return DOUBLE_TO_REAL((double) ((long) CINT(BgL_za7za7_119)));
				}
			else
				{	/* Ieee/number.scm 1105 */
					if (REALP(BgL_za7za7_119))
						{	/* Ieee/number.scm 1106 */
							return BgL_za7za7_119;
						}
					else
						{	/* Ieee/number.scm 1106 */
							if (ELONGP(BgL_za7za7_119))
								{	/* Ieee/number.scm 1107 */
									return
										DOUBLE_TO_REAL((double) (BELONG_TO_LONG(BgL_za7za7_119)));
								}
							else
								{	/* Ieee/number.scm 1107 */
									if (LLONGP(BgL_za7za7_119))
										{	/* Ieee/number.scm 1108 */
											return
												DOUBLE_TO_REAL(
												(double) (BLLONG_TO_LLONG(BgL_za7za7_119)));
										}
									else
										{	/* Ieee/number.scm 1108 */
											if (BIGNUMP(BgL_za7za7_119))
												{	/* Ieee/number.scm 1109 */
													return
														DOUBLE_TO_REAL(bgl_bignum_to_flonum
														(BgL_za7za7_119));
												}
											else
												{	/* Ieee/number.scm 1109 */
													return BgL_za7za7_119;
												}
										}
								}
						}
				}
		}

	}



/* &exact->inexact */
	obj_t BGl_z62exactzd2ze3inexactz53zz__r4_numbers_6_5z00(obj_t BgL_envz00_6628,
		obj_t BgL_za7za7_6629)
	{
		{	/* Ieee/number.scm 1103 */
			return bgl_exact_to_inexact(BgL_za7za7_6629);
		}

	}



/* inexact->exact */
	BGL_EXPORTED_DEF obj_t bgl_inexact_to_exact(obj_t BgL_za7za7_120)
	{
		{	/* Ieee/number.scm 1121 */
			if (REALP(BgL_za7za7_120))
				{	/* Ieee/number.scm 1123 */
					bool_t BgL_test5775z00_10957;

					{	/* Ieee/number.scm 1123 */
						bool_t BgL_test5776z00_10958;

						{	/* Ieee/number.scm 1123 */
							double BgL_r2z00_5933;

							BgL_r2z00_5933 = BGl_za2minintflza2z00zz__r4_numbers_6_5z00;
							BgL_test5776z00_10958 =
								(REAL_TO_DOUBLE(BgL_za7za7_120) >= BgL_r2z00_5933);
						}
						if (BgL_test5776z00_10958)
							{	/* Ieee/number.scm 1123 */
								double BgL_r2z00_5936;

								BgL_r2z00_5936 = BGl_za2maxintflza2z00zz__r4_numbers_6_5z00;
								BgL_test5775z00_10957 =
									(REAL_TO_DOUBLE(BgL_za7za7_120) <= BgL_r2z00_5936);
							}
						else
							{	/* Ieee/number.scm 1123 */
								BgL_test5775z00_10957 = ((bool_t) 0);
							}
					}
					if (BgL_test5775z00_10957)
						{	/* Ieee/number.scm 1123 */
							return BINT((long) (REAL_TO_DOUBLE(BgL_za7za7_120)));
						}
					else
						{	/* Ieee/number.scm 1123 */
							return bgl_flonum_to_bignum(REAL_TO_DOUBLE(BgL_za7za7_120));
						}
				}
			else
				{	/* Ieee/number.scm 1122 */
					return BgL_za7za7_120;
				}
		}

	}



/* &inexact->exact */
	obj_t BGl_z62inexactzd2ze3exactz53zz__r4_numbers_6_5z00(obj_t BgL_envz00_6630,
		obj_t BgL_za7za7_6631)
	{
		{	/* Ieee/number.scm 1121 */
			return bgl_inexact_to_exact(BgL_za7za7_6631);
		}

	}



/* _number->string */
	obj_t BGl__numberzd2ze3stringz31zz__r4_numbers_6_5z00(obj_t
		BgL_env1080z00_125, obj_t BgL_opt1079z00_124)
	{
		{	/* Ieee/number.scm 1136 */
			{	/* Ieee/number.scm 1136 */
				obj_t BgL_xz00_2326;

				BgL_xz00_2326 = VECTOR_REF(BgL_opt1079z00_124, ((long) 0));
				switch (VECTOR_LENGTH(BgL_opt1079z00_124))
					{
					case ((long) 1):

						{	/* Ieee/number.scm 1136 */

							return
								BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(BgL_xz00_2326,
								BINT(((long) 10)));
						} break;
					case ((long) 2):

						{	/* Ieee/number.scm 1136 */
							obj_t BgL_radixz00_2331;

							BgL_radixz00_2331 = VECTOR_REF(BgL_opt1079z00_124, ((long) 1));
							{	/* Ieee/number.scm 1136 */

								return
									BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(BgL_xz00_2326,
									BgL_radixz00_2331);
							}
						}
						break;
					default:
						return BUNSPEC;
					}
			}
		}

	}



/* number->string */
	BGL_EXPORTED_DEF obj_t BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(obj_t
		BgL_xz00_122, obj_t BgL_radixz00_123)
	{
		{	/* Ieee/number.scm 1136 */
			if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BgL_radixz00_123))
				{	/* Ieee/number.scm 1138 */
					if (INTEGERP(BgL_xz00_122))
						{	/* Ieee/number.scm 1139 */
							return
								BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
								(long) CINT(BgL_xz00_122), (long) CINT(BgL_radixz00_123));
						}
					else
						{	/* Ieee/number.scm 1139 */
							if (REALP(BgL_xz00_122))
								{	/* Ieee/number.scm 1140 */
									return bgl_real_to_string(REAL_TO_DOUBLE(BgL_xz00_122));
								}
							else
								{	/* Ieee/number.scm 1140 */
									if (ELONGP(BgL_xz00_122))
										{	/* Ieee/number.scm 1141 */
											obj_t BgL_list2682z00_2336;

											BgL_list2682z00_2336 =
												MAKE_YOUNG_PAIR(BgL_radixz00_123, BNIL);
											return
												BGl_elongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
												(BELONG_TO_LONG(BgL_xz00_122), BgL_list2682z00_2336);
										}
									else
										{	/* Ieee/number.scm 1141 */
											if (LLONGP(BgL_xz00_122))
												{	/* Ieee/number.scm 1142 */
													obj_t BgL_list2684z00_2338;

													BgL_list2684z00_2338 =
														MAKE_YOUNG_PAIR(BgL_radixz00_123, BNIL);
													return
														BGl_llongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
														(BLLONG_TO_LLONG(BgL_xz00_122),
														BgL_list2684z00_2338);
												}
											else
												{	/* Ieee/number.scm 1142 */
													if (BIGNUMP(BgL_xz00_122))
														{	/* Ieee/number.scm 1143 */
															return
																BGl_bignumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																(BgL_xz00_122, (long) CINT(BgL_radixz00_123));
														}
													else
														{	/* Ieee/number.scm 1143 */
															if (BGL_INT8P(BgL_xz00_122))
																{	/* Ieee/number.scm 1144 */
																	long BgL_arg2687z00_2341;

																	{	/* Ieee/number.scm 1144 */
																		long BgL_res4600z00_5948;

																		{	/* Ieee/number.scm 1144 */
																			int8_t BgL_xz00_5944;

																			BgL_xz00_5944 =
																				BGL_BINT8_TO_INT8(BgL_xz00_122);
																			{	/* Ieee/number.scm 1144 */
																				long BgL_arg3179z00_5945;

																				BgL_arg3179z00_5945 =
																					(long) (BgL_xz00_5944);
																				{	/* Ieee/number.scm 1144 */
																					long BgL_res4599z00_5947;

																					BgL_res4599z00_5947 =
																						(long) (BgL_arg3179z00_5945);
																					BgL_res4600z00_5948 =
																						BgL_res4599z00_5947;
																		}}}
																		BgL_arg2687z00_2341 = BgL_res4600z00_5948;
																	}
																	return
																		BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																		(BgL_arg2687z00_2341,
																		(long) CINT(BgL_radixz00_123));
																}
															else
																{	/* Ieee/number.scm 1144 */
																	if (BGL_UINT8P(BgL_xz00_122))
																		{	/* Ieee/number.scm 1145 */
																			long BgL_arg2689z00_2343;

																			{	/* Ieee/number.scm 1145 */
																				long BgL_res4603z00_5954;

																				{	/* Ieee/number.scm 1145 */
																					uint8_t BgL_xz00_5950;

																					BgL_xz00_5950 =
																						BGL_BUINT8_TO_UINT8(BgL_xz00_122);
																					{	/* Ieee/number.scm 1145 */
																						long BgL_arg3178z00_5951;

																						BgL_arg3178z00_5951 =
																							(long) (BgL_xz00_5950);
																						{	/* Ieee/number.scm 1145 */
																							long BgL_res4602z00_5953;

																							BgL_res4602z00_5953 =
																								(long) (BgL_arg3178z00_5951);
																							BgL_res4603z00_5954 =
																								BgL_res4602z00_5953;
																				}}}
																				BgL_arg2689z00_2343 =
																					BgL_res4603z00_5954;
																			}
																			return
																				BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																				(BgL_arg2689z00_2343,
																				(long) CINT(BgL_radixz00_123));
																		}
																	else
																		{	/* Ieee/number.scm 1145 */
																			if (BGL_INT16P(BgL_xz00_122))
																				{	/* Ieee/number.scm 1146 */
																					long BgL_arg2691z00_2345;

																					{	/* Ieee/number.scm 1146 */
																						long BgL_res4606z00_5960;

																						{	/* Ieee/number.scm 1146 */
																							int16_t BgL_xz00_5956;

																							BgL_xz00_5956 =
																								BGL_BINT16_TO_INT16
																								(BgL_xz00_122);
																							{	/* Ieee/number.scm 1146 */
																								long BgL_arg3177z00_5957;

																								BgL_arg3177z00_5957 =
																									(long) (BgL_xz00_5956);
																								{	/* Ieee/number.scm 1146 */
																									long BgL_res4605z00_5959;

																									BgL_res4605z00_5959 =
																										(long)
																										(BgL_arg3177z00_5957);
																									BgL_res4606z00_5960 =
																										BgL_res4605z00_5959;
																						}}}
																						BgL_arg2691z00_2345 =
																							BgL_res4606z00_5960;
																					}
																					return
																						BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																						(BgL_arg2691z00_2345,
																						(long) CINT(BgL_radixz00_123));
																				}
																			else
																				{	/* Ieee/number.scm 1146 */
																					if (BGL_UINT16P(BgL_xz00_122))
																						{	/* Ieee/number.scm 1147 */
																							long BgL_arg2693z00_2347;

																							{	/* Ieee/number.scm 1147 */
																								long BgL_res4609z00_5966;

																								{	/* Ieee/number.scm 1147 */
																									uint16_t BgL_xz00_5962;

																									BgL_xz00_5962 =
																										BGL_BUINT16_TO_UINT16
																										(BgL_xz00_122);
																									{	/* Ieee/number.scm 1147 */
																										long BgL_arg3175z00_5963;

																										BgL_arg3175z00_5963 =
																											(long) (BgL_xz00_5962);
																										{	/* Ieee/number.scm 1147 */
																											long BgL_res4608z00_5965;

																											BgL_res4608z00_5965 =
																												(long)
																												(BgL_arg3175z00_5963);
																											BgL_res4609z00_5966 =
																												BgL_res4608z00_5965;
																								}}}
																								BgL_arg2693z00_2347 =
																									BgL_res4609z00_5966;
																							}
																							return
																								BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																								(BgL_arg2693z00_2347,
																								(long) CINT(BgL_radixz00_123));
																						}
																					else
																						{	/* Ieee/number.scm 1147 */
																							if (BGL_INT32P(BgL_xz00_122))
																								{	/* Ieee/number.scm 1148 */
																									BGL_LONGLONG_T
																										BgL_arg2695z00_2349;
																									{	/* Ieee/number.scm 1148 */
																										BGL_LONGLONG_T
																											BgL_res4611z00_5969;
																										{	/* Ieee/number.scm 1148 */
																											int32_t BgL_nz00_5968;

																											BgL_nz00_5968 =
																												BGL_BINT32_TO_INT32
																												(BgL_xz00_122);
																											BgL_res4611z00_5969 =
																												(BGL_LONGLONG_T)
																												(BgL_nz00_5968);
																										}
																										BgL_arg2695z00_2349 =
																											BgL_res4611z00_5969;
																									}
																									{	/* Ieee/number.scm 1148 */
																										obj_t BgL_list2696z00_2350;

																										BgL_list2696z00_2350 =
																											MAKE_YOUNG_PAIR
																											(BgL_radixz00_123, BNIL);
																										return
																											BGl_llongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																											(BgL_arg2695z00_2349,
																											BgL_list2696z00_2350);
																									}
																								}
																							else
																								{	/* Ieee/number.scm 1148 */
																									if (BGL_UINT32P(BgL_xz00_122))
																										{	/* Ieee/number.scm 1149 */
																											BGL_LONGLONG_T
																												BgL_arg2698z00_2352;
																											{	/* Ieee/number.scm 1149 */
																												BGL_LONGLONG_T
																													BgL_res4613z00_5972;
																												{	/* Ieee/number.scm 1149 */
																													uint32_t
																														BgL_nz00_5971;
																													BgL_nz00_5971 =
																														BGL_BUINT32_TO_UINT32
																														(BgL_xz00_122);
																													BgL_res4613z00_5972 =
																														(BGL_LONGLONG_T)
																														(BgL_nz00_5971);
																												}
																												BgL_arg2698z00_2352 =
																													BgL_res4613z00_5972;
																											}
																											{	/* Ieee/number.scm 1149 */
																												obj_t
																													BgL_list2699z00_2353;
																												BgL_list2699z00_2353 =
																													MAKE_YOUNG_PAIR
																													(BgL_radixz00_123,
																													BNIL);
																												return
																													BGl_llongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																													(BgL_arg2698z00_2352,
																													BgL_list2699z00_2353);
																											}
																										}
																									else
																										{	/* Ieee/number.scm 1149 */
																											if (BGL_INT64P
																												(BgL_xz00_122))
																												{	/* Ieee/number.scm 1150 */
																													BGL_LONGLONG_T
																														BgL_arg2702z00_2355;
																													{	/* Ieee/number.scm 1150 */
																														BGL_LONGLONG_T
																															BgL_res4615z00_5975;
																														{	/* Ieee/number.scm 1150 */
																															int64_t
																																BgL_nz00_5974;
																															BgL_nz00_5974 =
																																BGL_BINT64_TO_INT64
																																(BgL_xz00_122);
																															BgL_res4615z00_5975
																																=
																																(BGL_LONGLONG_T)
																																(BgL_nz00_5974);
																														}
																														BgL_arg2702z00_2355
																															=
																															BgL_res4615z00_5975;
																													}
																													{	/* Ieee/number.scm 1150 */
																														obj_t
																															BgL_list2703z00_2356;
																														BgL_list2703z00_2356
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_radixz00_123,
																															BNIL);
																														return
																															BGl_llongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																															(BgL_arg2702z00_2355,
																															BgL_list2703z00_2356);
																													}
																												}
																											else
																												{	/* Ieee/number.scm 1150 */
																													if (BGL_UINT64P
																														(BgL_xz00_122))
																														{	/* Ieee/number.scm 1151 */
																															BGL_LONGLONG_T
																																BgL_arg2705z00_2358;
																															{	/* Ieee/number.scm 1151 */
																																BGL_LONGLONG_T
																																	BgL_res4617z00_5978;
																																{	/* Ieee/number.scm 1151 */
																																	uint64_t
																																		BgL_nz00_5977;
																																	BgL_nz00_5977
																																		=
																																		BGL_BINT64_TO_INT64
																																		(BgL_xz00_122);
																																	BgL_res4617z00_5978
																																		=
																																		(BGL_LONGLONG_T)
																																		(BgL_nz00_5977);
																																}
																																BgL_arg2705z00_2358
																																	=
																																	BgL_res4617z00_5978;
																															}
																															{	/* Ieee/number.scm 1151 */
																																obj_t
																																	BgL_list2706z00_2359;
																																BgL_list2706z00_2359
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_radixz00_123,
																																	BNIL);
																																return
																																	BGl_llongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																																	(BgL_arg2705z00_2358,
																																	BgL_list2706z00_2359);
																															}
																														}
																													else
																														{	/* Ieee/number.scm 1151 */
																															return
																																BGl_errorz00zz__errorz00
																																(BGl_string4875z00zz__r4_numbers_6_5z00,
																																BGl_string4876z00zz__r4_numbers_6_5z00,
																																BgL_xz00_122);
																														}
																												}
																										}
																								}
																						}
																				}
																		}
																}
														}
												}
										}
								}
						}
				}
			else
				{	/* Ieee/number.scm 1138 */
					return
						BGl_errorz00zz__errorz00(BGl_symbol4877z00zz__r4_numbers_6_5z00,
						BGl_string4878z00zz__r4_numbers_6_5z00, BgL_radixz00_123);
				}
		}

	}



/* _string->number */
	obj_t BGl__stringzd2ze3numberz31zz__r4_numbers_6_5z00(obj_t
		BgL_env1084z00_129, obj_t BgL_opt1083z00_128)
	{
		{	/* Ieee/number.scm 1157 */
			{	/* Ieee/number.scm 1157 */
				obj_t BgL_g1085z00_2360;

				BgL_g1085z00_2360 = VECTOR_REF(BgL_opt1083z00_128, ((long) 0));
				switch (VECTOR_LENGTH(BgL_opt1083z00_128))
					{
					case ((long) 1):

						{	/* Ieee/number.scm 1157 */

							{	/* Ieee/number.scm 1157 */
								obj_t BgL_auxz00_11056;

								if (STRINGP(BgL_g1085z00_2360))
									{	/* Ieee/number.scm 1157 */
										BgL_auxz00_11056 = BgL_g1085z00_2360;
									}
								else
									{
										obj_t BgL_auxz00_11059;

										BgL_auxz00_11059 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string4817z00zz__r4_numbers_6_5z00,
											BINT(((long) 42689)),
											BGl_string4879z00zz__r4_numbers_6_5z00,
											BGl_string4880z00zz__r4_numbers_6_5z00,
											BgL_g1085z00_2360);
										FAILURE(BgL_auxz00_11059, BFALSE, BFALSE);
									}
								return
									BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00
									(BgL_auxz00_11056, BINT(((long) 10)));
						}} break;
					case ((long) 2):

						{	/* Ieee/number.scm 1157 */
							obj_t BgL_radixz00_2365;

							BgL_radixz00_2365 = VECTOR_REF(BgL_opt1083z00_128, ((long) 1));
							{	/* Ieee/number.scm 1157 */

								{	/* Ieee/number.scm 1157 */
									obj_t BgL_auxz00_11066;

									if (STRINGP(BgL_g1085z00_2360))
										{	/* Ieee/number.scm 1157 */
											BgL_auxz00_11066 = BgL_g1085z00_2360;
										}
									else
										{
											obj_t BgL_auxz00_11069;

											BgL_auxz00_11069 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string4817z00zz__r4_numbers_6_5z00,
												BINT(((long) 42689)),
												BGl_string4879z00zz__r4_numbers_6_5z00,
												BGl_string4880z00zz__r4_numbers_6_5z00,
												BgL_g1085z00_2360);
											FAILURE(BgL_auxz00_11069, BFALSE, BFALSE);
										}
									return
										BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00
										(BgL_auxz00_11066, BgL_radixz00_2365);
								}
							}
						}
						break;
					default:
						return BUNSPEC;
					}
			}
		}

	}



/* string->number */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00(obj_t
		BgL_xz00_126, obj_t BgL_radixz00_127)
	{
		{	/* Ieee/number.scm 1157 */
			{
				obj_t BgL_xz00_2457;
				obj_t BgL_xz00_2378;
				obj_t BgL_rz00_2379;

				if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BgL_radixz00_127))
					{	/* Ieee/number.scm 1226 */
						if ((STRING_LENGTH(BgL_xz00_126) == ((long) 0)))
							{	/* Ieee/number.scm 1228 */
								return BFALSE;
							}
						else
							{	/* Ieee/number.scm 1230 */
								bool_t BgL_test5795z00_11081;

								BgL_xz00_2378 = BgL_xz00_126;
								BgL_rz00_2379 = BgL_radixz00_127;
								{	/* Ieee/number.scm 1160 */
									long BgL_lenz00_2381;

									BgL_lenz00_2381 = STRING_LENGTH(BgL_xz00_2378);
									{
										long BgL_iz00_2384;

										BgL_iz00_2384 = (BgL_lenz00_2381 - ((long) 1));
									BgL_zc3z04anonymousza32719ze3z87_2385:
										if ((((long) -1) == BgL_iz00_2384))
											{	/* Ieee/number.scm 1162 */
												BgL_test5795z00_11081 = ((bool_t) 1);
											}
										else
											{	/* Ieee/number.scm 1164 */
												bool_t BgL_test5797z00_11085;

												if (
													(STRING_REF(BgL_xz00_2378,
															BgL_iz00_2384) >= ((unsigned char) '0')))
													{	/* Ieee/number.scm 1164 */
														if (
															(STRING_REF(BgL_xz00_2378,
																	BgL_iz00_2384) <= ((unsigned char) '1')))
															{	/* Ieee/number.scm 1165 */
																BgL_test5797z00_11085 =
																	((long) CINT(BgL_rz00_2379) >= ((long) 2));
															}
														else
															{	/* Ieee/number.scm 1165 */
																BgL_test5797z00_11085 = ((bool_t) 0);
															}
													}
												else
													{	/* Ieee/number.scm 1164 */
														BgL_test5797z00_11085 = ((bool_t) 0);
													}
												if (BgL_test5797z00_11085)
													{
														long BgL_iz00_11094;

														BgL_iz00_11094 = (BgL_iz00_2384 - ((long) 1));
														BgL_iz00_2384 = BgL_iz00_11094;
														goto BgL_zc3z04anonymousza32719ze3z87_2385;
													}
												else
													{	/* Ieee/number.scm 1168 */
														bool_t BgL_test5800z00_11096;

														if (
															(STRING_REF(BgL_xz00_2378,
																	BgL_iz00_2384) >= ((unsigned char) '2')))
															{	/* Ieee/number.scm 1168 */
																if (
																	(STRING_REF(BgL_xz00_2378,
																			BgL_iz00_2384) <= ((unsigned char) '7')))
																	{	/* Ieee/number.scm 1169 */
																		BgL_test5800z00_11096 =
																			(
																			(long) CINT(BgL_rz00_2379) >= ((long) 8));
																	}
																else
																	{	/* Ieee/number.scm 1169 */
																		BgL_test5800z00_11096 = ((bool_t) 0);
																	}
															}
														else
															{	/* Ieee/number.scm 1168 */
																BgL_test5800z00_11096 = ((bool_t) 0);
															}
														if (BgL_test5800z00_11096)
															{
																long BgL_iz00_11105;

																BgL_iz00_11105 = (BgL_iz00_2384 - ((long) 1));
																BgL_iz00_2384 = BgL_iz00_11105;
																goto BgL_zc3z04anonymousza32719ze3z87_2385;
															}
														else
															{	/* Ieee/number.scm 1172 */
																bool_t BgL_test5803z00_11107;

																if (
																	(STRING_REF(BgL_xz00_2378,
																			BgL_iz00_2384) >= ((unsigned char) '8')))
																	{	/* Ieee/number.scm 1172 */
																		if (
																			(STRING_REF(BgL_xz00_2378,
																					BgL_iz00_2384) <=
																				((unsigned char) '9')))
																			{	/* Ieee/number.scm 1173 */
																				BgL_test5803z00_11107 =
																					(
																					(long) CINT(BgL_rz00_2379) >=
																					((long) 10));
																			}
																		else
																			{	/* Ieee/number.scm 1173 */
																				BgL_test5803z00_11107 = ((bool_t) 0);
																			}
																	}
																else
																	{	/* Ieee/number.scm 1172 */
																		BgL_test5803z00_11107 = ((bool_t) 0);
																	}
																if (BgL_test5803z00_11107)
																	{
																		long BgL_iz00_11116;

																		BgL_iz00_11116 =
																			(BgL_iz00_2384 - ((long) 1));
																		BgL_iz00_2384 = BgL_iz00_11116;
																		goto BgL_zc3z04anonymousza32719ze3z87_2385;
																	}
																else
																	{	/* Ieee/number.scm 1176 */
																		bool_t BgL_test5806z00_11118;

																		if (
																			(STRING_REF(BgL_xz00_2378,
																					BgL_iz00_2384) >=
																				((unsigned char) 'a')))
																			{	/* Ieee/number.scm 1176 */
																				if (
																					(STRING_REF(BgL_xz00_2378,
																							BgL_iz00_2384) <=
																						((unsigned char) 'f')))
																					{	/* Ieee/number.scm 1177 */
																						BgL_test5806z00_11118 =
																							(
																							(long) CINT(BgL_rz00_2379) ==
																							((long) 16));
																					}
																				else
																					{	/* Ieee/number.scm 1177 */
																						BgL_test5806z00_11118 =
																							((bool_t) 0);
																					}
																			}
																		else
																			{	/* Ieee/number.scm 1176 */
																				BgL_test5806z00_11118 = ((bool_t) 0);
																			}
																		if (BgL_test5806z00_11118)
																			{
																				long BgL_iz00_11127;

																				BgL_iz00_11127 =
																					(BgL_iz00_2384 - ((long) 1));
																				BgL_iz00_2384 = BgL_iz00_11127;
																				goto
																					BgL_zc3z04anonymousza32719ze3z87_2385;
																			}
																		else
																			{	/* Ieee/number.scm 1180 */
																				bool_t BgL_test5809z00_11129;

																				if (
																					(STRING_REF(BgL_xz00_2378,
																							BgL_iz00_2384) >=
																						((unsigned char) 'A')))
																					{	/* Ieee/number.scm 1180 */
																						if (
																							(STRING_REF(BgL_xz00_2378,
																									BgL_iz00_2384) <=
																								((unsigned char) 'F')))
																							{	/* Ieee/number.scm 1181 */
																								BgL_test5809z00_11129 =
																									(
																									(long) CINT(BgL_rz00_2379) ==
																									((long) 16));
																							}
																						else
																							{	/* Ieee/number.scm 1181 */
																								BgL_test5809z00_11129 =
																									((bool_t) 0);
																							}
																					}
																				else
																					{	/* Ieee/number.scm 1180 */
																						BgL_test5809z00_11129 =
																							((bool_t) 0);
																					}
																				if (BgL_test5809z00_11129)
																					{
																						long BgL_iz00_11138;

																						BgL_iz00_11138 =
																							(BgL_iz00_2384 - ((long) 1));
																						BgL_iz00_2384 = BgL_iz00_11138;
																						goto
																							BgL_zc3z04anonymousza32719ze3z87_2385;
																					}
																				else
																					{	/* Ieee/number.scm 1184 */
																						bool_t BgL_test5812z00_11140;

																						if (
																							(STRING_REF(BgL_xz00_2378,
																									BgL_iz00_2384) ==
																								((unsigned char) '-')))
																							{	/* Ieee/number.scm 1184 */
																								BgL_test5812z00_11140 =
																									((bool_t) 1);
																							}
																						else
																							{	/* Ieee/number.scm 1184 */
																								BgL_test5812z00_11140 =
																									(STRING_REF(BgL_xz00_2378,
																										BgL_iz00_2384) ==
																									((unsigned char) '+'));
																							}
																						if (BgL_test5812z00_11140)
																							{	/* Ieee/number.scm 1184 */
																								if (
																									(BgL_iz00_2384 == ((long) 0)))
																									{	/* Ieee/number.scm 1186 */
																										BgL_test5795z00_11081 =
																											(BgL_lenz00_2381 >
																											((long) 1));
																									}
																								else
																									{	/* Ieee/number.scm 1186 */
																										BgL_test5795z00_11081 =
																											((bool_t) 0);
																									}
																							}
																						else
																							{	/* Ieee/number.scm 1184 */
																								BgL_test5795z00_11081 =
																									((bool_t) 0);
																							}
																					}
																			}
																	}
															}
													}
											}
									}
								}
								if (BgL_test5795z00_11081)
									{	/* Ieee/number.scm 1230 */
										return
											BGl_stringzd2ze3integerzd2objze3zz__r4_numbers_6_5_fixnumz00
											(BgL_xz00_126, (long) CINT(BgL_radixz00_127));
									}
								else
									{	/* Ieee/number.scm 1232 */
										bool_t BgL_test5815z00_11152;

										{	/* Ieee/number.scm 1232 */
											bool_t BgL_res4686z00_6162;

											{	/* Ieee/number.scm 1232 */
												long BgL_l1z00_6149;

												BgL_l1z00_6149 = STRING_LENGTH(BgL_xz00_126);
												if ((BgL_l1z00_6149 == ((long) 6)))
													{	/* Ieee/number.scm 1232 */
														int BgL_arg2871z00_6152;

														{	/* Ieee/number.scm 1232 */
															char *BgL_auxz00_11158;
															char *BgL_tmpz00_11156;

															BgL_auxz00_11158 =
																BSTRING_TO_STRING
																(BGl_string4881z00zz__r4_numbers_6_5z00);
															BgL_tmpz00_11156 =
																BSTRING_TO_STRING(BgL_xz00_126);
															BgL_arg2871z00_6152 =
																memcmp(BgL_tmpz00_11156, BgL_auxz00_11158,
																BgL_l1z00_6149);
														}
														BgL_res4686z00_6162 =
															((long) (BgL_arg2871z00_6152) == ((long) 0));
													}
												else
													{	/* Ieee/number.scm 1232 */
														BgL_res4686z00_6162 = ((bool_t) 0);
													}
											}
											BgL_test5815z00_11152 = BgL_res4686z00_6162;
										}
										if (BgL_test5815z00_11152)
											{	/* Ieee/number.scm 1232 */
												return
													BGL_REAL_CNST(BGl_real4882z00zz__r4_numbers_6_5z00);
											}
										else
											{	/* Ieee/number.scm 1234 */
												bool_t BgL_test5817z00_11163;

												{	/* Ieee/number.scm 1234 */
													bool_t BgL_res4691z00_6178;

													{	/* Ieee/number.scm 1234 */
														long BgL_l1z00_6165;

														BgL_l1z00_6165 = STRING_LENGTH(BgL_xz00_126);
														if ((BgL_l1z00_6165 == ((long) 6)))
															{	/* Ieee/number.scm 1234 */
																int BgL_arg2871z00_6168;

																{	/* Ieee/number.scm 1234 */
																	char *BgL_auxz00_11169;
																	char *BgL_tmpz00_11167;

																	BgL_auxz00_11169 =
																		BSTRING_TO_STRING
																		(BGl_string4883z00zz__r4_numbers_6_5z00);
																	BgL_tmpz00_11167 =
																		BSTRING_TO_STRING(BgL_xz00_126);
																	BgL_arg2871z00_6168 =
																		memcmp(BgL_tmpz00_11167, BgL_auxz00_11169,
																		BgL_l1z00_6165);
																}
																BgL_res4691z00_6178 =
																	((long) (BgL_arg2871z00_6168) == ((long) 0));
															}
														else
															{	/* Ieee/number.scm 1234 */
																BgL_res4691z00_6178 = ((bool_t) 0);
															}
													}
													BgL_test5817z00_11163 = BgL_res4691z00_6178;
												}
												if (BgL_test5817z00_11163)
													{	/* Ieee/number.scm 1234 */
														return
															BGL_REAL_CNST
															(BGl_real4884z00zz__r4_numbers_6_5z00);
													}
												else
													{	/* Ieee/number.scm 1236 */
														bool_t BgL_test5819z00_11174;

														{	/* Ieee/number.scm 1236 */
															bool_t BgL_res4696z00_6194;

															{	/* Ieee/number.scm 1236 */
																long BgL_l1z00_6181;

																BgL_l1z00_6181 = STRING_LENGTH(BgL_xz00_126);
																if ((BgL_l1z00_6181 == ((long) 6)))
																	{	/* Ieee/number.scm 1236 */
																		int BgL_arg2871z00_6184;

																		{	/* Ieee/number.scm 1236 */
																			char *BgL_auxz00_11180;
																			char *BgL_tmpz00_11178;

																			BgL_auxz00_11180 =
																				BSTRING_TO_STRING
																				(BGl_string4885z00zz__r4_numbers_6_5z00);
																			BgL_tmpz00_11178 =
																				BSTRING_TO_STRING(BgL_xz00_126);
																			BgL_arg2871z00_6184 =
																				memcmp(BgL_tmpz00_11178,
																				BgL_auxz00_11180, BgL_l1z00_6181);
																		}
																		BgL_res4696z00_6194 =
																			(
																			(long) (BgL_arg2871z00_6184) ==
																			((long) 0));
																	}
																else
																	{	/* Ieee/number.scm 1236 */
																		BgL_res4696z00_6194 = ((bool_t) 0);
																	}
															}
															BgL_test5819z00_11174 = BgL_res4696z00_6194;
														}
														if (BgL_test5819z00_11174)
															{	/* Ieee/number.scm 1236 */
																return
																	BGL_REAL_CNST
																	(BGl_real4886z00zz__r4_numbers_6_5z00);
															}
														else
															{	/* Ieee/number.scm 1238 */
																bool_t BgL_test5821z00_11185;

																BgL_xz00_2457 = BgL_xz00_126;
																{	/* Ieee/number.scm 1190 */
																	long BgL_lenz00_2459;

																	BgL_lenz00_2459 =
																		STRING_LENGTH(BgL_xz00_2457);
																	{
																		long BgL_iz00_2461;
																		bool_t BgL_ez00_2462;
																		long BgL_pz00_2463;
																		bool_t BgL_dz00_2464;

																		BgL_iz00_2461 = ((long) 0);
																		BgL_ez00_2462 = ((bool_t) 0);
																		BgL_pz00_2463 = ((long) 0);
																		BgL_dz00_2464 = ((bool_t) 0);
																	BgL_zc3z04anonymousza32802ze3z87_2465:
																		if ((BgL_iz00_2461 == BgL_lenz00_2459))
																			{	/* Ieee/number.scm 1195 */
																				BgL_test5821z00_11185 = BgL_dz00_2464;
																			}
																		else
																			{	/* Ieee/number.scm 1197 */
																				bool_t BgL_test5823z00_11189;

																				if (
																					(STRING_REF(BgL_xz00_2457,
																							BgL_iz00_2461) >=
																						((unsigned char) '0')))
																					{	/* Ieee/number.scm 1197 */
																						BgL_test5823z00_11189 =
																							(STRING_REF(BgL_xz00_2457,
																								BgL_iz00_2461) <=
																							((unsigned char) '9'));
																					}
																				else
																					{	/* Ieee/number.scm 1197 */
																						BgL_test5823z00_11189 =
																							((bool_t) 0);
																					}
																				if (BgL_test5823z00_11189)
																					{
																						bool_t BgL_dz00_11198;
																						long BgL_pz00_11197;
																						long BgL_iz00_11195;

																						BgL_iz00_11195 =
																							(BgL_iz00_2461 + ((long) 1));
																						BgL_pz00_11197 = ((long) 0);
																						BgL_dz00_11198 = ((bool_t) 1);
																						BgL_dz00_2464 = BgL_dz00_11198;
																						BgL_pz00_2463 = BgL_pz00_11197;
																						BgL_iz00_2461 = BgL_iz00_11195;
																						goto
																							BgL_zc3z04anonymousza32802ze3z87_2465;
																					}
																				else
																					{	/* Ieee/number.scm 1197 */
																						if (
																							(STRING_REF(BgL_xz00_2457,
																									BgL_iz00_2461) ==
																								((unsigned char) '.')))
																							{
																								long BgL_pz00_11204;
																								long BgL_iz00_11202;

																								BgL_iz00_11202 =
																									(BgL_iz00_2461 + ((long) 1));
																								BgL_pz00_11204 = ((long) 0);
																								BgL_pz00_2463 = BgL_pz00_11204;
																								BgL_iz00_2461 = BgL_iz00_11202;
																								goto
																									BgL_zc3z04anonymousza32802ze3z87_2465;
																							}
																						else
																							{	/* Ieee/number.scm 1208 */
																								bool_t BgL_test5826z00_11205;

																								if (
																									(STRING_REF(BgL_xz00_2457,
																											BgL_iz00_2461) ==
																										((unsigned char) 'e')))
																									{	/* Ieee/number.scm 1208 */
																										BgL_test5826z00_11205 =
																											((bool_t) 1);
																									}
																								else
																									{	/* Ieee/number.scm 1208 */
																										BgL_test5826z00_11205 =
																											(STRING_REF(BgL_xz00_2457,
																												BgL_iz00_2461) ==
																											((unsigned char) 'E'));
																									}
																								if (BgL_test5826z00_11205)
																									{	/* Ieee/number.scm 1210 */
																										bool_t
																											BgL_test5828z00_11211;
																										if (BgL_ez00_2462)
																											{	/* Ieee/number.scm 1210 */
																												BgL_test5828z00_11211 =
																													((bool_t) 1);
																											}
																										else
																											{	/* Ieee/number.scm 1210 */
																												if (BgL_dz00_2464)
																													{	/* Ieee/number.scm 1210 */
																														BgL_test5828z00_11211
																															= ((bool_t) 0);
																													}
																												else
																													{	/* Ieee/number.scm 1210 */
																														BgL_test5828z00_11211
																															= ((bool_t) 1);
																													}
																											}
																										if (BgL_test5828z00_11211)
																											{	/* Ieee/number.scm 1210 */
																												BgL_test5821z00_11185 =
																													((bool_t) 0);
																											}
																										else
																											{
																												long BgL_pz00_11217;
																												bool_t BgL_ez00_11216;
																												long BgL_iz00_11214;

																												BgL_iz00_11214 =
																													(BgL_iz00_2461 +
																													((long) 1));
																												BgL_ez00_11216 =
																													((bool_t) 1);
																												BgL_pz00_11217 =
																													(BgL_iz00_2461 +
																													((long) 1));
																												BgL_pz00_2463 =
																													BgL_pz00_11217;
																												BgL_ez00_2462 =
																													BgL_ez00_11216;
																												BgL_iz00_2461 =
																													BgL_iz00_11214;
																												goto
																													BgL_zc3z04anonymousza32802ze3z87_2465;
																											}
																									}
																								else
																									{	/* Ieee/number.scm 1216 */
																										bool_t
																											BgL_test5831z00_11219;
																										if ((STRING_REF
																												(BgL_xz00_2457,
																													BgL_iz00_2461) ==
																												((unsigned char) '-')))
																											{	/* Ieee/number.scm 1216 */
																												BgL_test5831z00_11219 =
																													((bool_t) 1);
																											}
																										else
																											{	/* Ieee/number.scm 1216 */
																												BgL_test5831z00_11219 =
																													(STRING_REF
																													(BgL_xz00_2457,
																														BgL_iz00_2461) ==
																													((unsigned char)
																														'+'));
																											}
																										if (BgL_test5831z00_11219)
																											{	/* Ieee/number.scm 1218 */
																												bool_t
																													BgL_test5833z00_11225;
																												{	/* Ieee/number.scm 1218 */
																													bool_t
																														BgL__ortest_1061z00_2491;
																													BgL__ortest_1061z00_2491
																														=
																														(BgL_iz00_2461 ==
																														((long) 0));
																													if (BgL__ortest_1061z00_2491)
																														{	/* Ieee/number.scm 1218 */
																															BgL_test5833z00_11225
																																=
																																BgL__ortest_1061z00_2491;
																														}
																													else
																														{	/* Ieee/number.scm 1218 */
																															BgL_test5833z00_11225
																																=
																																(BgL_iz00_2461
																																==
																																BgL_pz00_2463);
																														}
																												}
																												if (BgL_test5833z00_11225)
																													{
																														long BgL_pz00_11231;
																														long BgL_iz00_11229;

																														BgL_iz00_11229 =
																															(BgL_iz00_2461 +
																															((long) 1));
																														BgL_pz00_11231 =
																															((long) 0);
																														BgL_pz00_2463 =
																															BgL_pz00_11231;
																														BgL_iz00_2461 =
																															BgL_iz00_11229;
																														goto
																															BgL_zc3z04anonymousza32802ze3z87_2465;
																													}
																												else
																													{	/* Ieee/number.scm 1218 */
																														BgL_test5821z00_11185
																															= ((bool_t) 0);
																													}
																											}
																										else
																											{	/* Ieee/number.scm 1216 */
																												BgL_test5821z00_11185 =
																													((bool_t) 0);
																											}
																									}
																							}
																					}
																			}
																	}
																}
																if (BgL_test5821z00_11185)
																	{	/* Ieee/number.scm 1238 */
																		if (
																			((long) CINT(BgL_radixz00_127) ==
																				((long) 10)))
																			{	/* Ieee/number.scm 1240 */
																				double BgL_res4713z00_6249;

																				{	/* Ieee/number.scm 1240 */
																					char *BgL_stringz00_6197;

																					BgL_stringz00_6197 =
																						BSTRING_TO_STRING(BgL_xz00_126);
																					{	/* Ieee/number.scm 1240 */
																						bool_t BgL_test5836z00_11236;

																						{	/* Ieee/number.scm 1240 */
																							bool_t BgL_res4702z00_6216;

																							{	/* Ieee/number.scm 1240 */
																								obj_t BgL_string1z00_6201;

																								BgL_string1z00_6201 =
																									string_to_bstring
																									(BgL_stringz00_6197);
																								{	/* Ieee/number.scm 1240 */
																									long BgL_l1z00_6203;

																									BgL_l1z00_6203 =
																										STRING_LENGTH
																										(BgL_string1z00_6201);
																									if ((BgL_l1z00_6203 ==
																											((long) 6)))
																										{	/* Ieee/number.scm 1240 */
																											int BgL_arg2871z00_6206;

																											{	/* Ieee/number.scm 1240 */
																												char *BgL_auxz00_11243;
																												char *BgL_tmpz00_11241;

																												BgL_auxz00_11243 =
																													BSTRING_TO_STRING
																													(BGl_string4881z00zz__r4_numbers_6_5z00);
																												BgL_tmpz00_11241 =
																													BSTRING_TO_STRING
																													(BgL_string1z00_6201);
																												BgL_arg2871z00_6206 =
																													memcmp
																													(BgL_tmpz00_11241,
																													BgL_auxz00_11243,
																													BgL_l1z00_6203);
																											}
																											BgL_res4702z00_6216 =
																												(
																												(long)
																												(BgL_arg2871z00_6206) ==
																												((long) 0));
																										}
																									else
																										{	/* Ieee/number.scm 1240 */
																											BgL_res4702z00_6216 =
																												((bool_t) 0);
																										}
																								}
																							}
																							BgL_test5836z00_11236 =
																								BgL_res4702z00_6216;
																						}
																						if (BgL_test5836z00_11236)
																							{	/* Ieee/number.scm 1240 */
																								BgL_res4713z00_6249 = BGL_NAN;
																							}
																						else
																							{	/* Ieee/number.scm 1240 */
																								bool_t BgL_test5838z00_11248;

																								{	/* Ieee/number.scm 1240 */
																									bool_t BgL_res4707z00_6232;

																									{	/* Ieee/number.scm 1240 */
																										obj_t BgL_string1z00_6217;

																										BgL_string1z00_6217 =
																											string_to_bstring
																											(BgL_stringz00_6197);
																										{	/* Ieee/number.scm 1240 */
																											long BgL_l1z00_6219;

																											BgL_l1z00_6219 =
																												STRING_LENGTH
																												(BgL_string1z00_6217);
																											if ((BgL_l1z00_6219 ==
																													((long) 6)))
																												{	/* Ieee/number.scm 1240 */
																													int
																														BgL_arg2871z00_6222;
																													{	/* Ieee/number.scm 1240 */
																														char
																															*BgL_auxz00_11255;
																														char
																															*BgL_tmpz00_11253;
																														BgL_auxz00_11255 =
																															BSTRING_TO_STRING
																															(BGl_string4883z00zz__r4_numbers_6_5z00);
																														BgL_tmpz00_11253 =
																															BSTRING_TO_STRING
																															(BgL_string1z00_6217);
																														BgL_arg2871z00_6222
																															=
																															memcmp
																															(BgL_tmpz00_11253,
																															BgL_auxz00_11255,
																															BgL_l1z00_6219);
																													}
																													BgL_res4707z00_6232 =
																														(
																														(long)
																														(BgL_arg2871z00_6222)
																														== ((long) 0));
																												}
																											else
																												{	/* Ieee/number.scm 1240 */
																													BgL_res4707z00_6232 =
																														((bool_t) 0);
																												}
																										}
																									}
																									BgL_test5838z00_11248 =
																										BgL_res4707z00_6232;
																								}
																								if (BgL_test5838z00_11248)
																									{	/* Ieee/number.scm 1240 */
																										BgL_res4713z00_6249 =
																											BGL_INFINITY;
																									}
																								else
																									{	/* Ieee/number.scm 1240 */
																										bool_t
																											BgL_test5840z00_11260;
																										{	/* Ieee/number.scm 1240 */
																											bool_t
																												BgL_res4712z00_6248;
																											{	/* Ieee/number.scm 1240 */
																												obj_t
																													BgL_string1z00_6233;
																												BgL_string1z00_6233 =
																													string_to_bstring
																													(BgL_stringz00_6197);
																												{	/* Ieee/number.scm 1240 */
																													long BgL_l1z00_6235;

																													BgL_l1z00_6235 =
																														STRING_LENGTH
																														(BgL_string1z00_6233);
																													if ((BgL_l1z00_6235 ==
																															((long) 6)))
																														{	/* Ieee/number.scm 1240 */
																															int
																																BgL_arg2871z00_6238;
																															{	/* Ieee/number.scm 1240 */
																																char
																																	*BgL_auxz00_11267;
																																char
																																	*BgL_tmpz00_11265;
																																BgL_auxz00_11267
																																	=
																																	BSTRING_TO_STRING
																																	(BGl_string4885z00zz__r4_numbers_6_5z00);
																																BgL_tmpz00_11265
																																	=
																																	BSTRING_TO_STRING
																																	(BgL_string1z00_6233);
																																BgL_arg2871z00_6238
																																	=
																																	memcmp
																																	(BgL_tmpz00_11265,
																																	BgL_auxz00_11267,
																																	BgL_l1z00_6235);
																															}
																															BgL_res4712z00_6248
																																=
																																((long)
																																(BgL_arg2871z00_6238)
																																== ((long) 0));
																														}
																													else
																														{	/* Ieee/number.scm 1240 */
																															BgL_res4712z00_6248
																																= ((bool_t) 0);
																														}
																												}
																											}
																											BgL_test5840z00_11260 =
																												BgL_res4712z00_6248;
																										}
																										if (BgL_test5840z00_11260)
																											{	/* Ieee/number.scm 1240 */
																												BgL_res4713z00_6249 =
																													(-BGL_INFINITY);
																											}
																										else
																											{	/* Ieee/number.scm 1240 */
																												BgL_res4713z00_6249 =
																													STRTOD
																													(BgL_stringz00_6197);
																											}
																									}
																							}
																					}
																				}
																				return
																					DOUBLE_TO_REAL(BgL_res4713z00_6249);
																			}
																		else
																			{	/* Ieee/number.scm 1239 */
																				return
																					BGl_errorz00zz__errorz00
																					(BGl_string4887z00zz__r4_numbers_6_5z00,
																					BGl_string4888z00zz__r4_numbers_6_5z00,
																					BgL_radixz00_127);
																			}
																	}
																else
																	{	/* Ieee/number.scm 1238 */
																		return BFALSE;
																	}
															}
													}
											}
									}
							}
					}
				else
					{	/* Ieee/number.scm 1226 */
						return
							BGl_errorz00zz__errorz00(BGl_symbol4877z00zz__r4_numbers_6_5z00,
							BGl_string4878z00zz__r4_numbers_6_5z00, BgL_radixz00_127);
					}
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__r4_numbers_6_5z00()
	{
		{	/* Ieee/number.scm 18 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string4889z00zz__r4_numbers_6_5z00));
			return
				BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string4889z00zz__r4_numbers_6_5z00));
		}

	}

#ifdef __cplusplus
}
#endif
