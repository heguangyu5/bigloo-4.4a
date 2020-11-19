/*===========================================================================*/
/*   (Ieee/flonum.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Ieee/flonum.scm -indent -o objs/obj_u/Ieee/flonum.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern obj_t bgl_double_to_ieee_string(double);
	BGL_EXPORTED_DECL bool_t BGl_ze3zd3flz30zz__r4_numbers_6_5_flonumz00(double,
		double);
	static obj_t BGl_z62negflz62zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	static obj_t BGl_z62stringzd2ze3realz53zz__r4_numbers_6_5_flonumz00(obj_t,
		obj_t);
	static obj_t BGl_z62remainderflz62zz__r4_numbers_6_5_flonumz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_realzd2ze3ieeezd2stringze3zz__r4_numbers_6_5_flonumz00(obj_t);
	static obj_t BGl_z62za2flzc0zz__r4_numbers_6_5_flonumz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL float
		BGl_ieeezd2stringzd2ze3floatze3zz__r4_numbers_6_5_flonumz00(obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_infiniteflzf3zf3zz__r4_numbers_6_5_flonumz00(double);
	BGL_EXPORTED_DECL bool_t BGl_ze3flze3zz__r4_numbers_6_5_flonumz00(double,
		double);
	extern obj_t the_failure(obj_t, obj_t, obj_t);
	static obj_t BGl_z62oddflzf3z91zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	extern float bgl_ieee_string_to_float(obj_t);
	BGL_EXPORTED_DECL double BGl_ceilingflz00zz__r4_numbers_6_5_flonumz00(double);
	BGL_EXPORTED_DECL double BGl_exptflz00zz__r4_numbers_6_5_flonumz00(double,
		double);
	static obj_t BGl_z62atanzd22flzd2urz62zz__r4_numbers_6_5_flonumz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL double BGl_randomflz00zz__r4_numbers_6_5_flonumz00();
	BGL_EXPORTED_DECL double
		BGl_atanzd21flzd2zz__r4_numbers_6_5_flonumz00(double);
	BGL_EXPORTED_DECL double BGl_sqrtflz00zz__r4_numbers_6_5_flonumz00(double);
	static obj_t BGl_requirezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00 =
		BUNSPEC;
	static obj_t BGl_z62asinflz62zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL double
		BGl_stringzd2ze3realz31zz__r4_numbers_6_5_flonumz00(char *);
	BGL_EXPORTED_DECL double BGl_logflz00zz__r4_numbers_6_5_flonumz00(double);
	BGL_EXPORTED_DECL double BGl_minflz00zz__r4_numbers_6_5_flonumz00(double,
		obj_t);
	static obj_t
		BGl_z62doublezd2ze3ieeezd2stringz81zz__r4_numbers_6_5_flonumz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL double BGl_minzd22flzd2zz__r4_numbers_6_5_flonumz00(double,
		double);
	BGL_EXPORTED_DECL double BGl_maxzd22flzd2zz__r4_numbers_6_5_flonumz00(double,
		double);
	static obj_t BGl_z62minzd22flzb0zz__r4_numbers_6_5_flonumz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62maxflz62zz__r4_numbers_6_5_flonumz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL double BGl_zf2flzf2zz__r4_numbers_6_5_flonumz00(double,
		double);
	static obj_t BGl_z62maxzd22flzb0zz__r4_numbers_6_5_flonumz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_evenflzf3zf3zz__r4_numbers_6_5_flonumz00(double);
	static obj_t BGl_z62zb2flzd0zz__r4_numbers_6_5_flonumz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62evenflzf3z91zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(long, char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonum_dtoaz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_EXPORTED_DECL BGL_LONGLONG_T
		BGl_doublezd2ze3llongzd2bitsze3zz__r4_numbers_6_5_flonumz00(double);
	static obj_t
		BGl_z62ieeezd2stringzd2ze3floatz81zz__r4_numbers_6_5_flonumz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_za7eroflzf3z54zz__r4_numbers_6_5_flonumz00(double);
	BGL_EXPORTED_DECL int
		BGl_floatzd2ze3intzd2bitsze3zz__r4_numbers_6_5_flonumz00(float);
	BGL_EXPORTED_DECL double BGl_atanflz00zz__r4_numbers_6_5_flonumz00(double,
		obj_t);
	BGL_EXPORTED_DECL double BGl_atanzd22flzd2zz__r4_numbers_6_5_flonumz00(double,
		double);
	BGL_EXPORTED_DECL double BGl_acosflz00zz__r4_numbers_6_5_flonumz00(double);
	static obj_t BGl_z62za7eroflzf3z36zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	static obj_t
		BGl_z62floatzd2ze3intzd2bitsz81zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	static obj_t
		BGl_z62ieeezd2stringzd2ze3realz81zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL double BGl_expflz00zz__r4_numbers_6_5_flonumz00(double);
	BGL_EXPORTED_DECL bool_t BGl_nanflzf3zf3zz__r4_numbers_6_5_flonumz00(double);
	BGL_EXPORTED_DECL double
		BGl_ieeezd2stringzd2ze3doubleze3zz__r4_numbers_6_5_flonumz00(obj_t);
	static obj_t BGl_z62finiteflzf3z91zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_realzf3zf3zz__r4_numbers_6_5_flonumz00(obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_positiveflzf3zf3zz__r4_numbers_6_5_flonumz00(double);
	static obj_t BGl_z62zc3flza1zz__r4_numbers_6_5_flonumz00(obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62doublezd2ze3llongzd2bitsz81zz__r4_numbers_6_5_flonumz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL double BGl_floorflz00zz__r4_numbers_6_5_flonumz00(double);
	BGL_EXPORTED_DECL double BGl_roundflz00zz__r4_numbers_6_5_flonumz00(double);
	static obj_t BGl_z62floorflz62zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL double
		BGl_truncateflz00zz__r4_numbers_6_5_flonumz00(double);
	static obj_t BGl_z62roundflz62zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	static obj_t BGl_z62negativeflzf3z91zz__r4_numbers_6_5_flonumz00(obj_t,
		obj_t);
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
	BGL_EXPORTED_DECL obj_t
		BGl_ieeezd2stringzd2ze3realze3zz__r4_numbers_6_5_flonumz00(obj_t);
	static obj_t BGl_z62randomflz62zz__r4_numbers_6_5_flonumz00(obj_t);
	static obj_t BGl_z62atanzd21flzb0zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL double BGl_asinflz00zz__r4_numbers_6_5_flonumz00(double);
	static obj_t BGl_z62truncateflz62zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	static obj_t BGl_z62expflz62zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL double
		BGl_remainderflz00zz__r4_numbers_6_5_flonumz00(double, double);
	static obj_t BGl_z62zc3zd3flz72zz__r4_numbers_6_5_flonumz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_finiteflzf3zf3zz__r4_numbers_6_5_flonumz00(double);
	BGL_EXPORTED_DECL double BGl_za2flza2zz__r4_numbers_6_5_flonumz00(double,
		double);
	static obj_t BGl_z62sqrtflzd2urzb0zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	static obj_t BGl_z62realzf3z91zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL double
		BGl_atanzd22flzd2urz00zz__r4_numbers_6_5_flonumz00(double, double);
	static obj_t BGl_z62infiniteflzf3z91zz__r4_numbers_6_5_flonumz00(obj_t,
		obj_t);
	static obj_t BGl_z62ze3flz81zz__r4_numbers_6_5_flonumz00(obj_t, obj_t, obj_t);
	extern double bgl_ieee_string_to_double(obj_t);
	static obj_t BGl_z62atanzd22flzb0zz__r4_numbers_6_5_flonumz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_integerflzf3zf3zz__r4_numbers_6_5_flonumz00(double);
	BGL_EXPORTED_DECL bool_t BGl_zc3zd3flz10zz__r4_numbers_6_5_flonumz00(double,
		double);
	BGL_EXPORTED_DECL obj_t
		BGl_doublezd2ze3ieeezd2stringze3zz__r4_numbers_6_5_flonumz00(double);
	BGL_EXPORTED_DECL double BGl_zb2flzb2zz__r4_numbers_6_5_flonumz00(double,
		double);
	static obj_t BGl_z62tanflz62zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL double BGl_sinflz00zz__r4_numbers_6_5_flonumz00(double);
	static obj_t BGl_z62cosflz62zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	static obj_t BGl_z62zf2flz90zz__r4_numbers_6_5_flonumz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_signbitflz00zz__r4_numbers_6_5_flonumz00(double);
	BGL_EXPORTED_DECL double
		BGl_llongzd2bitszd2ze3doubleze3zz__r4_numbers_6_5_flonumz00(BGL_LONGLONG_T);
	static obj_t BGl_z62absflz62zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	static obj_t BGl_z62exptflz62zz__r4_numbers_6_5_flonumz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62sqrtflz62zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	static obj_t BGl_z62integerflzf3z91zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL double BGl_negflz00zz__r4_numbers_6_5_flonumz00(double);
	BGL_EXPORTED_DECL double
		BGl_sqrtflzd2urzd2zz__r4_numbers_6_5_flonumz00(double);
	BGL_EXPORTED_DECL float
		BGl_intzd2bitszd2ze3floatze3zz__r4_numbers_6_5_flonumz00(int);
	static obj_t
		BGl_z62ieeezd2stringzd2ze3doublez81zz__r4_numbers_6_5_flonumz00(obj_t,
		obj_t);
	static obj_t
		BGl_z62intzd2bitszd2ze3floatz81zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	static obj_t
		BGl_z62realzd2ze3ieeezd2stringz81zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_floatzd2ze3ieeezd2stringze3zz__r4_numbers_6_5_flonumz00(float);
	BGL_EXPORTED_DECL bool_t BGl_zc3flzc3zz__r4_numbers_6_5_flonumz00(double,
		double);
	extern obj_t bgl_float_to_ieee_string(float);
	static obj_t BGl_z62positiveflzf3z91zz__r4_numbers_6_5_flonumz00(obj_t,
		obj_t);
	static obj_t
		BGl_z62llongzd2bitszd2ze3doublez81zz__r4_numbers_6_5_flonumz00(obj_t,
		obj_t);
	static obj_t BGl_z62ceilingflz62zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	static obj_t BGl_z62atanflz62zz__r4_numbers_6_5_flonumz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62acosflz62zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_negativeflzf3zf3zz__r4_numbers_6_5_flonumz00(double);
	BGL_EXPORTED_DECL bool_t BGl_flonumzf3zf3zz__r4_numbers_6_5_flonumz00(obj_t);
	static obj_t BGl_z62ze3zd3flz52zz__r4_numbers_6_5_flonumz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62nanflzf3z91zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL double BGl_maxflz00zz__r4_numbers_6_5_flonumz00(double,
		obj_t);
	static obj_t BGl_z62flonumzf3z91zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL double BGl_zd2flzd2zz__r4_numbers_6_5_flonumz00(double,
		double);
	static obj_t BGl_z62sinflz62zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_zd3flzd3zz__r4_numbers_6_5_flonumz00(double,
		double);
	static obj_t
		BGl_z62floatzd2ze3ieeezd2stringz81zz__r4_numbers_6_5_flonumz00(obj_t,
		obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_realzf3zd2envz21zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762realza7f3za791za7za7_1694za7,
		BGl_z62realzf3z91zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_floatzd2ze3ieeezd2stringzd2envz31zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762floatza7d2za7e3ie1695za7,
		BGl_z62floatzd2ze3ieeezd2stringz81zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_ze3flzd2envz31zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762za7e3flza781za7za7__r1696za7,
		BGl_z62ze3flz81zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_atanzd21flzd2envz00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762atanza7d21flza7b01697za7,
		BGl_z62atanzd21flzb0zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_sqrtflzd2envzd2zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762sqrtflza762za7za7__1698z00,
		BGl_z62sqrtflz62zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_doublezd2ze3ieeezd2stringzd2envz31zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762doubleza7d2za7e3i1699za7,
		BGl_z62doublezd2ze3ieeezd2stringz81zz__r4_numbers_6_5_flonumz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_logflzd2envzd2zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762logflza762za7za7__r1700z00,
		BGl_z62logflz62zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cosflzd2envzd2zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762cosflza762za7za7__r1701z00,
		BGl_z62cosflz62zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_signbitflzd2envzd2zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762signbitflza762za71702za7,
		BGl_z62signbitflz62zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ieeezd2stringzd2ze3realzd2envz31zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762ieeeza7d2string1703z00,
		BGl_z62ieeezd2stringzd2ze3realz81zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_acosflzd2envzd2zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762acosflza762za7za7__1704z00,
		BGl_z62acosflz62zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ze3zd3flzd2envze2zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762za7e3za7d3flza752za7za71705z00,
		BGl_z62ze3zd3flz52zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ieeezd2stringzd2ze3floatzd2envz31zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762ieeeza7d2string1706z00,
		BGl_z62ieeezd2stringzd2ze3floatz81zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_positiveflzf3zd2envz21zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762positiveflza7f31707z00,
		BGl_z62positiveflzf3z91zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_zc3flzd2envz11zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762za7c3flza7a1za7za7__r1708za7,
		BGl_z62zc3flza1zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ceilingflzd2envzd2zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762ceilingflza762za71709za7,
		BGl_z62ceilingflz62zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_floorflzd2envzd2zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762floorflza762za7za7_1710z00,
		BGl_z62floorflz62zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_truncateflzd2envzd2zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762truncateflza7621711z00,
		BGl_z62truncateflz62zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_integerflzf3zd2envz21zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762integerflza7f3za71712za7,
		BGl_z62integerflzf3z91zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_zc3zd3flzd2envzc2zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762za7c3za7d3flza772za7za71713z00,
		BGl_z62zc3zd3flz72zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_minzd22flzd2envz00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762minza7d22flza7b0za71714z00,
		BGl_z62minzd22flzb0zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_zf2flzd2envz20zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762za7f2flza790za7za7__r1715za7,
		BGl_z62zf2flz90zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_absflzd2envzd2zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762absflza762za7za7__r1716z00,
		BGl_z62absflz62zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_oddflzf3zd2envz21zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762oddflza7f3za791za7za71717za7,
		BGl_z62oddflzf3z91zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_doublezd2ze3llongzd2bitszd2envz31zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762doubleza7d2za7e3l1718za7,
		BGl_z62doublezd2ze3llongzd2bitsz81zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_za7eroflzf3zd2envz86zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762za7a7eroflza7f3za731719z00,
		BGl_z62za7eroflzf3z36zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_atanzd22flzd2envz00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762atanza7d22flza7b01720za7,
		BGl_z62atanzd22flzb0zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1626za700za7za7_1721za7, "/tmp/4.4a/runtime/Ieee/flonum.scm",
		33);
	      DEFINE_STRING(BGl_string1627z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1627za700za7za7_1722za7, "&=fl", 4);
	      DEFINE_STRING(BGl_string1628z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1628za700za7za7_1723za7, "real", 4);
	      DEFINE_STRING(BGl_string1629z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1629za700za7za7_1724za7, "&<fl", 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_finiteflzf3zd2envz21zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762finiteflza7f3za791725za7,
		BGl_z62finiteflzf3z91zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_intzd2bitszd2ze3floatzd2envz31zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762intza7d2bitsza7d21726za7,
		BGl_z62intzd2bitszd2ze3floatz81zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_za2flzd2envz70zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762za7a2flza7c0za7za7__r1727za7,
		BGl_z62za2flzc0zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1630z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1630za700za7za7_1728za7, "&>fl", 4);
	      DEFINE_STRING(BGl_string1631z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1631za700za7za7_1729za7, "&<=fl", 5);
	      DEFINE_STRING(BGl_string1632z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1632za700za7za7_1730za7, "&>=fl", 5);
	      DEFINE_STRING(BGl_string1633z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1633za700za7za7_1731za7, "&zerofl?", 8);
	      DEFINE_STRING(BGl_string1634z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1634za700za7za7_1732za7, "&positivefl?", 12);
	      DEFINE_STRING(BGl_string1635z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1635za700za7za7_1733za7, "&negativefl?", 12);
	      DEFINE_STRING(BGl_string1636z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1636za700za7za7_1734za7, "&+fl", 4);
	      DEFINE_STRING(BGl_string1637z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1637za700za7za7_1735za7, "&-fl", 4);
	      DEFINE_STRING(BGl_string1638z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1638za700za7za7_1736za7, "&*fl", 4);
	      DEFINE_STRING(BGl_string1639z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1639za700za7za7_1737za7, "&/fl", 4);
	      DEFINE_STRING(BGl_string1640z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1640za700za7za7_1738za7, "&negfl", 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2ze3realzd2envze3zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762stringza7d2za7e3r1739za7,
		BGl_z62stringzd2ze3realz53zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1641z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1641za700za7za7_1740za7, "&maxfl", 6);
	      DEFINE_STRING(BGl_string1642z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1642za700za7za7_1741za7, "&max-2fl", 8);
	      DEFINE_STRING(BGl_string1643z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1643za700za7za7_1742za7, "&min-2fl", 8);
	      DEFINE_STRING(BGl_string1644z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1644za700za7za7_1743za7, "&minfl", 6);
	      DEFINE_STRING(BGl_string1645z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1645za700za7za7_1744za7, "&absfl", 6);
	      DEFINE_STRING(BGl_string1646z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1646za700za7za7_1745za7, "&floorfl", 8);
	      DEFINE_STRING(BGl_string1647z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1647za700za7za7_1746za7, "&ceilingfl", 10);
	      DEFINE_STRING(BGl_string1648z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1648za700za7za7_1747za7, "&truncatefl", 11);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_tanflzd2envzd2zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762tanflza762za7za7__r1748z00,
		BGl_z62tanflz62zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1649z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1649za700za7za7_1749za7, "&roundfl", 8);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_minflzd2envzd2zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762minflza762za7za7__r1750z00, va_generic_entry,
		BGl_z62minflz62zz__r4_numbers_6_5_flonumz00, BUNSPEC, -2);
	      DEFINE_REAL(BGl_real1662z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_real1662za700za7za7__r1751za7, 0.0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_sinflzd2envzd2zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762sinflza762za7za7__r1752z00,
		BGl_z62sinflz62zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_zd2flzd2envz00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762za7d2flza7b0za7za7__r1753za7,
		BGl_z62zd2flzb0zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_zd3flzd2envz01zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762za7d3flza7b1za7za7__r1754za7,
		BGl_z62zd3flzb1zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1650z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1650za700za7za7_1755za7, "&remainderfl", 12);
	      DEFINE_STRING(BGl_string1651z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1651za700za7za7_1756za7, "&expfl", 6);
	      DEFINE_STRING(BGl_string1652z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1652za700za7za7_1757za7, "&logfl", 6);
	      DEFINE_STRING(BGl_string1653z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1653za700za7za7_1758za7, "&sinfl", 6);
	      DEFINE_STRING(BGl_string1654z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1654za700za7za7_1759za7, "&cosfl", 6);
	      DEFINE_STRING(BGl_string1655z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1655za700za7za7_1760za7, "&tanfl", 6);
	      DEFINE_STRING(BGl_string1656z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1656za700za7za7_1761za7, "&asinfl", 7);
	      DEFINE_STRING(BGl_string1657z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1657za700za7za7_1762za7, "&acosfl", 7);
	      DEFINE_STRING(BGl_string1658z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1658za700za7za7_1763za7, "&atanfl", 7);
	      DEFINE_STRING(BGl_string1659z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1659za700za7za7_1764za7, "&atan-1fl", 9);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_atanflzd2envzd2zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762atanflza762za7za7__1765z00, va_generic_entry,
		BGl_z62atanflz62zz__r4_numbers_6_5_flonumz00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_asinflzd2envzd2zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762asinflza762za7za7__1766z00,
		BGl_z62asinflz62zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_negflzd2envzd2zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762negflza762za7za7__r1767z00,
		BGl_z62negflz62zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1660z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1660za700za7za7_1768za7, "atanfl", 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_nanflzf3zd2envz21zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762nanflza7f3za791za7za71769za7,
		BGl_z62nanflzf3z91zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_remainderflzd2envzd2zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762remainderflza761770z00,
		BGl_z62remainderflz62zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1661z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1661za700za7za7_1771za7, "Domain error", 12);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ieeezd2stringzd2ze3doublezd2envz31zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762ieeeza7d2string1772z00,
		BGl_z62ieeezd2stringzd2ze3doublez81zz__r4_numbers_6_5_flonumz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1663z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1663za700za7za7_1773za7, "&atan-2fl", 9);
	      DEFINE_STRING(BGl_string1664z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1664za700za7za7_1774za7, "&atan-2fl-ur", 12);
	      DEFINE_STRING(BGl_string1665z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1665za700za7za7_1775za7, "sqrtfl", 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sqrtflzd2urzd2envz00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762sqrtflza7d2urza7b1776za7,
		BGl_z62sqrtflzd2urzb0zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1666z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1666za700za7za7_1777za7, "&sqrtfl", 7);
	      DEFINE_STRING(BGl_string1667z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1667za700za7za7_1778za7, "&sqrtfl-ur", 10);
	      DEFINE_STRING(BGl_string1668z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1668za700za7za7_1779za7, "&exptfl", 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_realzd2ze3ieeezd2stringzd2envz31zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762realza7d2za7e3iee1780za7,
		BGl_z62realzd2ze3ieeezd2stringz81zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC,
		1);
	      DEFINE_STRING(BGl_string1669z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1669za700za7za7_1781za7, "&signbitfl", 10);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_infiniteflzf3zd2envz21zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762infiniteflza7f31782z00,
		BGl_z62infiniteflzf3z91zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_atanzd22flzd2urzd2envzd2zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762atanza7d22flza7d21783za7,
		BGl_z62atanzd22flzd2urz62zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1670z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1670za700za7za7_1784za7, "&integerfl?", 11);
	      DEFINE_STRING(BGl_string1671z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1671za700za7za7_1785za7, "&evenfl?", 8);
	      DEFINE_STRING(BGl_string1672z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1672za700za7za7_1786za7, "&oddfl?", 7);
	      DEFINE_STRING(BGl_string1673z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1673za700za7za7_1787za7, "&finitefl?", 10);
	      DEFINE_STRING(BGl_string1674z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1674za700za7za7_1788za7, "&infinitefl?", 12);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_exptflzd2envzd2zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762exptflza762za7za7__1789z00,
		BGl_z62exptflz62zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1675z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1675za700za7za7_1790za7, "&nanfl?", 7);
	      DEFINE_STRING(BGl_string1676z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1676za700za7za7_1791za7, "+nan.0", 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_randomflzd2envzd2zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762randomflza762za7za71792z00,
		BGl_z62randomflz62zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1677z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1677za700za7za7_1793za7, "+inf.0", 6);
	      DEFINE_STRING(BGl_string1678z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1678za700za7za7_1794za7, "-inf.0", 6);
	      DEFINE_STRING(BGl_string1679z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1679za700za7za7_1795za7, "&string->real", 13);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_roundflzd2envzd2zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762roundflza762za7za7_1796z00,
		BGl_z62roundflz62zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_negativeflzf3zd2envz21zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762negativeflza7f31797z00,
		BGl_z62negativeflzf3z91zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1680z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1680za700za7za7_1798za7, "bstring", 7);
	      DEFINE_STRING(BGl_string1681z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1681za700za7za7_1799za7, "&ieee-string->real", 18);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_flonumzf3zd2envz21zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762flonumza7f3za791za71800z00,
		BGl_z62flonumzf3z91zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1682z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1682za700za7za7_1801za7, "&real->ieee-string", 18);
	      DEFINE_STRING(BGl_string1683z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1683za700za7za7_1802za7, "&ieee-string->double", 20);
	      DEFINE_STRING(BGl_string1684z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1684za700za7za7_1803za7, "&double->ieee-string", 20);
	      DEFINE_STRING(BGl_string1685z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1685za700za7za7_1804za7, "&ieee-string->float", 19);
	      DEFINE_STRING(BGl_string1686z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1686za700za7za7_1805za7, "&float->ieee-string", 19);
	      DEFINE_STRING(BGl_string1687z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1687za700za7za7_1806za7, "&double->llong-bits", 19);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_maxflzd2envzd2zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762maxflza762za7za7__r1807z00, va_generic_entry,
		BGl_z62maxflz62zz__r4_numbers_6_5_flonumz00, BUNSPEC, -2);
	      DEFINE_STRING(BGl_string1688z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1688za700za7za7_1808za7, "&llong-bits->double", 19);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_maxzd22flzd2envz00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762maxza7d22flza7b0za71809z00,
		BGl_z62maxzd22flzb0zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1689z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1689za700za7za7_1810za7, "bllong", 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_zb2flzd2envz60zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762za7b2flza7d0za7za7__r1811za7,
		BGl_z62zb2flzd0zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_evenflzf3zd2envz21zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762evenflza7f3za791za71812z00,
		BGl_z62evenflzf3z91zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_llongzd2bitszd2ze3doublezd2envz31zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762llongza7d2bitsza71813za7,
		BGl_z62llongzd2bitszd2ze3doublez81zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC,
		1);
	      DEFINE_STRING(BGl_string1690z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1690za700za7za7_1814za7, "&float->int-bits", 16);
	      DEFINE_STRING(BGl_string1691z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1691za700za7za7_1815za7, "&int-bits->float", 16);
	      DEFINE_STRING(BGl_string1692z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1692za700za7za7_1816za7, "bint", 4);
	      DEFINE_STRING(BGl_string1693z00zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_string1693za700za7za7_1817za7, "__r4_numbers_6_5_flonum", 23);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_floatzd2ze3intzd2bitszd2envz31zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762floatza7d2za7e3in1818za7,
		BGl_z62floatzd2ze3intzd2bitsz81zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_expflzd2envzd2zz__r4_numbers_6_5_flonumz00,
		BgL_bgl_za762expflza762za7za7__r1819z00,
		BGl_z62expflz62zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(long
		BgL_checksumz00_1632, char *BgL_fromz00_1633)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00))
				{
					BGl_requirezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__r4_numbers_6_5_flonumz00();
					return BGl_importedzd2moduleszd2initz00zz__r4_numbers_6_5_flonumz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__r4_numbers_6_5_flonumz00()
	{
		{	/* Ieee/flonum.scm 14 */
			return bgl_gc_roots_register();
		}

	}



/* real? */
	BGL_EXPORTED_DEF bool_t BGl_realzf3zf3zz__r4_numbers_6_5_flonumz00(obj_t
		BgL_objz00_3)
	{
		{	/* Ieee/flonum.scm 308 */
			if (INTEGERP(BgL_objz00_3))
				{	/* Ieee/flonum.scm 309 */
					return ((bool_t) 1);
				}
			else
				{	/* Ieee/flonum.scm 309 */
					return REALP(BgL_objz00_3);
				}
		}

	}



/* &real? */
	obj_t BGl_z62realzf3z91zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1321,
		obj_t BgL_objz00_1322)
	{
		{	/* Ieee/flonum.scm 308 */
			return BBOOL(BGl_realzf3zf3zz__r4_numbers_6_5_flonumz00(BgL_objz00_1322));
		}

	}



/* flonum? */
	BGL_EXPORTED_DEF bool_t BGl_flonumzf3zf3zz__r4_numbers_6_5_flonumz00(obj_t
		BgL_objz00_4)
	{
		{	/* Ieee/flonum.scm 316 */
			return REALP(BgL_objz00_4);
		}

	}



/* &flonum? */
	obj_t BGl_z62flonumzf3z91zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1323,
		obj_t BgL_objz00_1324)
	{
		{	/* Ieee/flonum.scm 316 */
			return
				BBOOL(BGl_flonumzf3zf3zz__r4_numbers_6_5_flonumz00(BgL_objz00_1324));
		}

	}



/* =fl */
	BGL_EXPORTED_DEF bool_t BGl_zd3flzd3zz__r4_numbers_6_5_flonumz00(double
		BgL_r1z00_5, double BgL_r2z00_6)
	{
		{	/* Ieee/flonum.scm 322 */
			return (BgL_r1z00_5 == BgL_r2z00_6);
		}

	}



/* &=fl */
	obj_t BGl_z62zd3flzb1zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1325,
		obj_t BgL_r1z00_1326, obj_t BgL_r2z00_1327)
	{
		{	/* Ieee/flonum.scm 322 */
			{	/* Ieee/flonum.scm 323 */
				bool_t BgL_tmpz00_1649;

				{	/* Ieee/flonum.scm 323 */
					double BgL_auxz00_1659;
					double BgL_auxz00_1650;

					{	/* Ieee/flonum.scm 323 */
						obj_t BgL_tmpz00_1660;

						if (REALP(BgL_r2z00_1327))
							{	/* Ieee/flonum.scm 323 */
								BgL_tmpz00_1660 = BgL_r2z00_1327;
							}
						else
							{
								obj_t BgL_auxz00_1663;

								BgL_auxz00_1663 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 14944)),
									BGl_string1627z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00,
									BgL_r2z00_1327);
								FAILURE(BgL_auxz00_1663, BFALSE, BFALSE);
							}
						BgL_auxz00_1659 = REAL_TO_DOUBLE(BgL_tmpz00_1660);
					}
					{	/* Ieee/flonum.scm 323 */
						obj_t BgL_tmpz00_1651;

						if (REALP(BgL_r1z00_1326))
							{	/* Ieee/flonum.scm 323 */
								BgL_tmpz00_1651 = BgL_r1z00_1326;
							}
						else
							{
								obj_t BgL_auxz00_1654;

								BgL_auxz00_1654 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 14944)),
									BGl_string1627z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00,
									BgL_r1z00_1326);
								FAILURE(BgL_auxz00_1654, BFALSE, BFALSE);
							}
						BgL_auxz00_1650 = REAL_TO_DOUBLE(BgL_tmpz00_1651);
					}
					BgL_tmpz00_1649 =
						BGl_zd3flzd3zz__r4_numbers_6_5_flonumz00(BgL_auxz00_1650,
						BgL_auxz00_1659);
				}
				return BBOOL(BgL_tmpz00_1649);
			}
		}

	}



/* <fl */
	BGL_EXPORTED_DEF bool_t BGl_zc3flzc3zz__r4_numbers_6_5_flonumz00(double
		BgL_r1z00_7, double BgL_r2z00_8)
	{
		{	/* Ieee/flonum.scm 328 */
			return (BgL_r1z00_7 < BgL_r2z00_8);
		}

	}



/* &<fl */
	obj_t BGl_z62zc3flza1zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1328,
		obj_t BgL_r1z00_1329, obj_t BgL_r2z00_1330)
	{
		{	/* Ieee/flonum.scm 328 */
			{	/* Ieee/flonum.scm 329 */
				bool_t BgL_tmpz00_1671;

				{	/* Ieee/flonum.scm 329 */
					double BgL_auxz00_1681;
					double BgL_auxz00_1672;

					{	/* Ieee/flonum.scm 329 */
						obj_t BgL_tmpz00_1682;

						if (REALP(BgL_r2z00_1330))
							{	/* Ieee/flonum.scm 329 */
								BgL_tmpz00_1682 = BgL_r2z00_1330;
							}
						else
							{
								obj_t BgL_auxz00_1685;

								BgL_auxz00_1685 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 15212)),
									BGl_string1629z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00,
									BgL_r2z00_1330);
								FAILURE(BgL_auxz00_1685, BFALSE, BFALSE);
							}
						BgL_auxz00_1681 = REAL_TO_DOUBLE(BgL_tmpz00_1682);
					}
					{	/* Ieee/flonum.scm 329 */
						obj_t BgL_tmpz00_1673;

						if (REALP(BgL_r1z00_1329))
							{	/* Ieee/flonum.scm 329 */
								BgL_tmpz00_1673 = BgL_r1z00_1329;
							}
						else
							{
								obj_t BgL_auxz00_1676;

								BgL_auxz00_1676 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 15212)),
									BGl_string1629z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00,
									BgL_r1z00_1329);
								FAILURE(BgL_auxz00_1676, BFALSE, BFALSE);
							}
						BgL_auxz00_1672 = REAL_TO_DOUBLE(BgL_tmpz00_1673);
					}
					BgL_tmpz00_1671 =
						BGl_zc3flzc3zz__r4_numbers_6_5_flonumz00(BgL_auxz00_1672,
						BgL_auxz00_1681);
				}
				return BBOOL(BgL_tmpz00_1671);
			}
		}

	}



/* >fl */
	BGL_EXPORTED_DEF bool_t BGl_ze3flze3zz__r4_numbers_6_5_flonumz00(double
		BgL_r1z00_9, double BgL_r2z00_10)
	{
		{	/* Ieee/flonum.scm 334 */
			return (BgL_r1z00_9 > BgL_r2z00_10);
		}

	}



/* &>fl */
	obj_t BGl_z62ze3flz81zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1331,
		obj_t BgL_r1z00_1332, obj_t BgL_r2z00_1333)
	{
		{	/* Ieee/flonum.scm 334 */
			{	/* Ieee/flonum.scm 335 */
				bool_t BgL_tmpz00_1693;

				{	/* Ieee/flonum.scm 335 */
					double BgL_auxz00_1703;
					double BgL_auxz00_1694;

					{	/* Ieee/flonum.scm 335 */
						obj_t BgL_tmpz00_1704;

						if (REALP(BgL_r2z00_1333))
							{	/* Ieee/flonum.scm 335 */
								BgL_tmpz00_1704 = BgL_r2z00_1333;
							}
						else
							{
								obj_t BgL_auxz00_1707;

								BgL_auxz00_1707 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 15480)),
									BGl_string1630z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00,
									BgL_r2z00_1333);
								FAILURE(BgL_auxz00_1707, BFALSE, BFALSE);
							}
						BgL_auxz00_1703 = REAL_TO_DOUBLE(BgL_tmpz00_1704);
					}
					{	/* Ieee/flonum.scm 335 */
						obj_t BgL_tmpz00_1695;

						if (REALP(BgL_r1z00_1332))
							{	/* Ieee/flonum.scm 335 */
								BgL_tmpz00_1695 = BgL_r1z00_1332;
							}
						else
							{
								obj_t BgL_auxz00_1698;

								BgL_auxz00_1698 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 15480)),
									BGl_string1630z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00,
									BgL_r1z00_1332);
								FAILURE(BgL_auxz00_1698, BFALSE, BFALSE);
							}
						BgL_auxz00_1694 = REAL_TO_DOUBLE(BgL_tmpz00_1695);
					}
					BgL_tmpz00_1693 =
						BGl_ze3flze3zz__r4_numbers_6_5_flonumz00(BgL_auxz00_1694,
						BgL_auxz00_1703);
				}
				return BBOOL(BgL_tmpz00_1693);
			}
		}

	}



/* <=fl */
	BGL_EXPORTED_DEF bool_t BGl_zc3zd3flz10zz__r4_numbers_6_5_flonumz00(double
		BgL_r1z00_11, double BgL_r2z00_12)
	{
		{	/* Ieee/flonum.scm 340 */
			return (BgL_r1z00_11 <= BgL_r2z00_12);
		}

	}



/* &<=fl */
	obj_t BGl_z62zc3zd3flz72zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1334,
		obj_t BgL_r1z00_1335, obj_t BgL_r2z00_1336)
	{
		{	/* Ieee/flonum.scm 340 */
			{	/* Ieee/flonum.scm 341 */
				bool_t BgL_tmpz00_1715;

				{	/* Ieee/flonum.scm 341 */
					double BgL_auxz00_1725;
					double BgL_auxz00_1716;

					{	/* Ieee/flonum.scm 341 */
						obj_t BgL_tmpz00_1726;

						if (REALP(BgL_r2z00_1336))
							{	/* Ieee/flonum.scm 341 */
								BgL_tmpz00_1726 = BgL_r2z00_1336;
							}
						else
							{
								obj_t BgL_auxz00_1729;

								BgL_auxz00_1729 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 15749)),
									BGl_string1631z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00,
									BgL_r2z00_1336);
								FAILURE(BgL_auxz00_1729, BFALSE, BFALSE);
							}
						BgL_auxz00_1725 = REAL_TO_DOUBLE(BgL_tmpz00_1726);
					}
					{	/* Ieee/flonum.scm 341 */
						obj_t BgL_tmpz00_1717;

						if (REALP(BgL_r1z00_1335))
							{	/* Ieee/flonum.scm 341 */
								BgL_tmpz00_1717 = BgL_r1z00_1335;
							}
						else
							{
								obj_t BgL_auxz00_1720;

								BgL_auxz00_1720 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 15749)),
									BGl_string1631z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00,
									BgL_r1z00_1335);
								FAILURE(BgL_auxz00_1720, BFALSE, BFALSE);
							}
						BgL_auxz00_1716 = REAL_TO_DOUBLE(BgL_tmpz00_1717);
					}
					BgL_tmpz00_1715 =
						BGl_zc3zd3flz10zz__r4_numbers_6_5_flonumz00(BgL_auxz00_1716,
						BgL_auxz00_1725);
				}
				return BBOOL(BgL_tmpz00_1715);
			}
		}

	}



/* >=fl */
	BGL_EXPORTED_DEF bool_t BGl_ze3zd3flz30zz__r4_numbers_6_5_flonumz00(double
		BgL_r1z00_13, double BgL_r2z00_14)
	{
		{	/* Ieee/flonum.scm 346 */
			return (BgL_r1z00_13 >= BgL_r2z00_14);
		}

	}



/* &>=fl */
	obj_t BGl_z62ze3zd3flz52zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1337,
		obj_t BgL_r1z00_1338, obj_t BgL_r2z00_1339)
	{
		{	/* Ieee/flonum.scm 346 */
			{	/* Ieee/flonum.scm 347 */
				bool_t BgL_tmpz00_1737;

				{	/* Ieee/flonum.scm 347 */
					double BgL_auxz00_1747;
					double BgL_auxz00_1738;

					{	/* Ieee/flonum.scm 347 */
						obj_t BgL_tmpz00_1748;

						if (REALP(BgL_r2z00_1339))
							{	/* Ieee/flonum.scm 347 */
								BgL_tmpz00_1748 = BgL_r2z00_1339;
							}
						else
							{
								obj_t BgL_auxz00_1751;

								BgL_auxz00_1751 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 16019)),
									BGl_string1632z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00,
									BgL_r2z00_1339);
								FAILURE(BgL_auxz00_1751, BFALSE, BFALSE);
							}
						BgL_auxz00_1747 = REAL_TO_DOUBLE(BgL_tmpz00_1748);
					}
					{	/* Ieee/flonum.scm 347 */
						obj_t BgL_tmpz00_1739;

						if (REALP(BgL_r1z00_1338))
							{	/* Ieee/flonum.scm 347 */
								BgL_tmpz00_1739 = BgL_r1z00_1338;
							}
						else
							{
								obj_t BgL_auxz00_1742;

								BgL_auxz00_1742 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 16019)),
									BGl_string1632z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00,
									BgL_r1z00_1338);
								FAILURE(BgL_auxz00_1742, BFALSE, BFALSE);
							}
						BgL_auxz00_1738 = REAL_TO_DOUBLE(BgL_tmpz00_1739);
					}
					BgL_tmpz00_1737 =
						BGl_ze3zd3flz30zz__r4_numbers_6_5_flonumz00(BgL_auxz00_1738,
						BgL_auxz00_1747);
				}
				return BBOOL(BgL_tmpz00_1737);
			}
		}

	}



/* zerofl? */
	BGL_EXPORTED_DEF bool_t BGl_za7eroflzf3z54zz__r4_numbers_6_5_flonumz00(double
		BgL_rz00_15)
	{
		{	/* Ieee/flonum.scm 352 */
			return (BgL_rz00_15 == ((double) 0.0));
		}

	}



/* &zerofl? */
	obj_t BGl_z62za7eroflzf3z36zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1340,
		obj_t BgL_rz00_1341)
	{
		{	/* Ieee/flonum.scm 352 */
			{	/* Ieee/flonum.scm 323 */
				bool_t BgL_tmpz00_1759;

				{	/* Ieee/flonum.scm 323 */
					double BgL_auxz00_1760;

					{	/* Ieee/flonum.scm 323 */
						obj_t BgL_tmpz00_1761;

						if (REALP(BgL_rz00_1341))
							{	/* Ieee/flonum.scm 323 */
								BgL_tmpz00_1761 = BgL_rz00_1341;
							}
						else
							{
								obj_t BgL_auxz00_1764;

								BgL_auxz00_1764 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 14944)),
									BGl_string1633z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_1341);
								FAILURE(BgL_auxz00_1764, BFALSE, BFALSE);
							}
						BgL_auxz00_1760 = REAL_TO_DOUBLE(BgL_tmpz00_1761);
					}
					BgL_tmpz00_1759 =
						BGl_za7eroflzf3z54zz__r4_numbers_6_5_flonumz00(BgL_auxz00_1760);
				}
				return BBOOL(BgL_tmpz00_1759);
			}
		}

	}



/* positivefl? */
	BGL_EXPORTED_DEF bool_t
		BGl_positiveflzf3zf3zz__r4_numbers_6_5_flonumz00(double BgL_rz00_16)
	{
		{	/* Ieee/flonum.scm 358 */
			return (BgL_rz00_16 > ((double) 0.0));
		}

	}



/* &positivefl? */
	obj_t BGl_z62positiveflzf3z91zz__r4_numbers_6_5_flonumz00(obj_t
		BgL_envz00_1342, obj_t BgL_rz00_1343)
	{
		{	/* Ieee/flonum.scm 358 */
			{	/* Ieee/flonum.scm 335 */
				bool_t BgL_tmpz00_1772;

				{	/* Ieee/flonum.scm 335 */
					double BgL_auxz00_1773;

					{	/* Ieee/flonum.scm 335 */
						obj_t BgL_tmpz00_1774;

						if (REALP(BgL_rz00_1343))
							{	/* Ieee/flonum.scm 335 */
								BgL_tmpz00_1774 = BgL_rz00_1343;
							}
						else
							{
								obj_t BgL_auxz00_1777;

								BgL_auxz00_1777 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 15480)),
									BGl_string1634z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_1343);
								FAILURE(BgL_auxz00_1777, BFALSE, BFALSE);
							}
						BgL_auxz00_1773 = REAL_TO_DOUBLE(BgL_tmpz00_1774);
					}
					BgL_tmpz00_1772 =
						BGl_positiveflzf3zf3zz__r4_numbers_6_5_flonumz00(BgL_auxz00_1773);
				}
				return BBOOL(BgL_tmpz00_1772);
			}
		}

	}



/* negativefl? */
	BGL_EXPORTED_DEF bool_t
		BGl_negativeflzf3zf3zz__r4_numbers_6_5_flonumz00(double BgL_rz00_17)
	{
		{	/* Ieee/flonum.scm 364 */
			return (BgL_rz00_17 < ((double) 0.0));
		}

	}



/* &negativefl? */
	obj_t BGl_z62negativeflzf3z91zz__r4_numbers_6_5_flonumz00(obj_t
		BgL_envz00_1344, obj_t BgL_rz00_1345)
	{
		{	/* Ieee/flonum.scm 364 */
			{	/* Ieee/flonum.scm 329 */
				bool_t BgL_tmpz00_1785;

				{	/* Ieee/flonum.scm 329 */
					double BgL_auxz00_1786;

					{	/* Ieee/flonum.scm 329 */
						obj_t BgL_tmpz00_1787;

						if (REALP(BgL_rz00_1345))
							{	/* Ieee/flonum.scm 329 */
								BgL_tmpz00_1787 = BgL_rz00_1345;
							}
						else
							{
								obj_t BgL_auxz00_1790;

								BgL_auxz00_1790 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 15212)),
									BGl_string1635z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_1345);
								FAILURE(BgL_auxz00_1790, BFALSE, BFALSE);
							}
						BgL_auxz00_1786 = REAL_TO_DOUBLE(BgL_tmpz00_1787);
					}
					BgL_tmpz00_1785 =
						BGl_negativeflzf3zf3zz__r4_numbers_6_5_flonumz00(BgL_auxz00_1786);
				}
				return BBOOL(BgL_tmpz00_1785);
			}
		}

	}



/* +fl */
	BGL_EXPORTED_DEF double BGl_zb2flzb2zz__r4_numbers_6_5_flonumz00(double
		BgL_r1z00_18, double BgL_r2z00_19)
	{
		{	/* Ieee/flonum.scm 370 */
			return (BgL_r1z00_18 + BgL_r2z00_19);
		}

	}



/* &+fl */
	obj_t BGl_z62zb2flzd0zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1346,
		obj_t BgL_r1z00_1347, obj_t BgL_r2z00_1348)
	{
		{	/* Ieee/flonum.scm 370 */
			{	/* Ieee/flonum.scm 371 */
				double BgL_tmpz00_1798;

				{	/* Ieee/flonum.scm 371 */
					double BgL_auxz00_1808;
					double BgL_auxz00_1799;

					{	/* Ieee/flonum.scm 371 */
						obj_t BgL_tmpz00_1809;

						if (REALP(BgL_r2z00_1348))
							{	/* Ieee/flonum.scm 371 */
								BgL_tmpz00_1809 = BgL_r2z00_1348;
							}
						else
							{
								obj_t BgL_auxz00_1812;

								BgL_auxz00_1812 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 17094)),
									BGl_string1636z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00,
									BgL_r2z00_1348);
								FAILURE(BgL_auxz00_1812, BFALSE, BFALSE);
							}
						BgL_auxz00_1808 = REAL_TO_DOUBLE(BgL_tmpz00_1809);
					}
					{	/* Ieee/flonum.scm 371 */
						obj_t BgL_tmpz00_1800;

						if (REALP(BgL_r1z00_1347))
							{	/* Ieee/flonum.scm 371 */
								BgL_tmpz00_1800 = BgL_r1z00_1347;
							}
						else
							{
								obj_t BgL_auxz00_1803;

								BgL_auxz00_1803 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 17094)),
									BGl_string1636z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00,
									BgL_r1z00_1347);
								FAILURE(BgL_auxz00_1803, BFALSE, BFALSE);
							}
						BgL_auxz00_1799 = REAL_TO_DOUBLE(BgL_tmpz00_1800);
					}
					BgL_tmpz00_1798 =
						BGl_zb2flzb2zz__r4_numbers_6_5_flonumz00(BgL_auxz00_1799,
						BgL_auxz00_1808);
				}
				return DOUBLE_TO_REAL(BgL_tmpz00_1798);
			}
		}

	}



/* -fl */
	BGL_EXPORTED_DEF double BGl_zd2flzd2zz__r4_numbers_6_5_flonumz00(double
		BgL_r1z00_20, double BgL_r2z00_21)
	{
		{	/* Ieee/flonum.scm 372 */
			return (BgL_r1z00_20 - BgL_r2z00_21);
		}

	}



/* &-fl */
	obj_t BGl_z62zd2flzb0zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1349,
		obj_t BgL_r1z00_1350, obj_t BgL_r2z00_1351)
	{
		{	/* Ieee/flonum.scm 372 */
			{	/* Ieee/flonum.scm 373 */
				double BgL_tmpz00_1820;

				{	/* Ieee/flonum.scm 373 */
					double BgL_auxz00_1830;
					double BgL_auxz00_1821;

					{	/* Ieee/flonum.scm 373 */
						obj_t BgL_tmpz00_1831;

						if (REALP(BgL_r2z00_1351))
							{	/* Ieee/flonum.scm 373 */
								BgL_tmpz00_1831 = BgL_r2z00_1351;
							}
						else
							{
								obj_t BgL_auxz00_1834;

								BgL_auxz00_1834 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 17139)),
									BGl_string1637z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00,
									BgL_r2z00_1351);
								FAILURE(BgL_auxz00_1834, BFALSE, BFALSE);
							}
						BgL_auxz00_1830 = REAL_TO_DOUBLE(BgL_tmpz00_1831);
					}
					{	/* Ieee/flonum.scm 373 */
						obj_t BgL_tmpz00_1822;

						if (REALP(BgL_r1z00_1350))
							{	/* Ieee/flonum.scm 373 */
								BgL_tmpz00_1822 = BgL_r1z00_1350;
							}
						else
							{
								obj_t BgL_auxz00_1825;

								BgL_auxz00_1825 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 17139)),
									BGl_string1637z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00,
									BgL_r1z00_1350);
								FAILURE(BgL_auxz00_1825, BFALSE, BFALSE);
							}
						BgL_auxz00_1821 = REAL_TO_DOUBLE(BgL_tmpz00_1822);
					}
					BgL_tmpz00_1820 =
						BGl_zd2flzd2zz__r4_numbers_6_5_flonumz00(BgL_auxz00_1821,
						BgL_auxz00_1830);
				}
				return DOUBLE_TO_REAL(BgL_tmpz00_1820);
			}
		}

	}



/* *fl */
	BGL_EXPORTED_DEF double BGl_za2flza2zz__r4_numbers_6_5_flonumz00(double
		BgL_r1z00_22, double BgL_r2z00_23)
	{
		{	/* Ieee/flonum.scm 374 */
			return (BgL_r1z00_22 * BgL_r2z00_23);
		}

	}



/* &*fl */
	obj_t BGl_z62za2flzc0zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1352,
		obj_t BgL_r1z00_1353, obj_t BgL_r2z00_1354)
	{
		{	/* Ieee/flonum.scm 374 */
			{	/* Ieee/flonum.scm 375 */
				double BgL_tmpz00_1842;

				{	/* Ieee/flonum.scm 375 */
					double BgL_auxz00_1852;
					double BgL_auxz00_1843;

					{	/* Ieee/flonum.scm 375 */
						obj_t BgL_tmpz00_1853;

						if (REALP(BgL_r2z00_1354))
							{	/* Ieee/flonum.scm 375 */
								BgL_tmpz00_1853 = BgL_r2z00_1354;
							}
						else
							{
								obj_t BgL_auxz00_1856;

								BgL_auxz00_1856 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 17184)),
									BGl_string1638z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00,
									BgL_r2z00_1354);
								FAILURE(BgL_auxz00_1856, BFALSE, BFALSE);
							}
						BgL_auxz00_1852 = REAL_TO_DOUBLE(BgL_tmpz00_1853);
					}
					{	/* Ieee/flonum.scm 375 */
						obj_t BgL_tmpz00_1844;

						if (REALP(BgL_r1z00_1353))
							{	/* Ieee/flonum.scm 375 */
								BgL_tmpz00_1844 = BgL_r1z00_1353;
							}
						else
							{
								obj_t BgL_auxz00_1847;

								BgL_auxz00_1847 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 17184)),
									BGl_string1638z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00,
									BgL_r1z00_1353);
								FAILURE(BgL_auxz00_1847, BFALSE, BFALSE);
							}
						BgL_auxz00_1843 = REAL_TO_DOUBLE(BgL_tmpz00_1844);
					}
					BgL_tmpz00_1842 =
						BGl_za2flza2zz__r4_numbers_6_5_flonumz00(BgL_auxz00_1843,
						BgL_auxz00_1852);
				}
				return DOUBLE_TO_REAL(BgL_tmpz00_1842);
			}
		}

	}



/* /fl */
	BGL_EXPORTED_DEF double BGl_zf2flzf2zz__r4_numbers_6_5_flonumz00(double
		BgL_r1z00_24, double BgL_r2z00_25)
	{
		{	/* Ieee/flonum.scm 376 */
			return (BgL_r1z00_24 / BgL_r2z00_25);
		}

	}



/* &/fl */
	obj_t BGl_z62zf2flz90zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1355,
		obj_t BgL_r1z00_1356, obj_t BgL_r2z00_1357)
	{
		{	/* Ieee/flonum.scm 376 */
			{	/* Ieee/flonum.scm 377 */
				double BgL_tmpz00_1864;

				{	/* Ieee/flonum.scm 377 */
					double BgL_auxz00_1874;
					double BgL_auxz00_1865;

					{	/* Ieee/flonum.scm 377 */
						obj_t BgL_tmpz00_1875;

						if (REALP(BgL_r2z00_1357))
							{	/* Ieee/flonum.scm 377 */
								BgL_tmpz00_1875 = BgL_r2z00_1357;
							}
						else
							{
								obj_t BgL_auxz00_1878;

								BgL_auxz00_1878 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 17229)),
									BGl_string1639z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00,
									BgL_r2z00_1357);
								FAILURE(BgL_auxz00_1878, BFALSE, BFALSE);
							}
						BgL_auxz00_1874 = REAL_TO_DOUBLE(BgL_tmpz00_1875);
					}
					{	/* Ieee/flonum.scm 377 */
						obj_t BgL_tmpz00_1866;

						if (REALP(BgL_r1z00_1356))
							{	/* Ieee/flonum.scm 377 */
								BgL_tmpz00_1866 = BgL_r1z00_1356;
							}
						else
							{
								obj_t BgL_auxz00_1869;

								BgL_auxz00_1869 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 17229)),
									BGl_string1639z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00,
									BgL_r1z00_1356);
								FAILURE(BgL_auxz00_1869, BFALSE, BFALSE);
							}
						BgL_auxz00_1865 = REAL_TO_DOUBLE(BgL_tmpz00_1866);
					}
					BgL_tmpz00_1864 =
						BGl_zf2flzf2zz__r4_numbers_6_5_flonumz00(BgL_auxz00_1865,
						BgL_auxz00_1874);
				}
				return DOUBLE_TO_REAL(BgL_tmpz00_1864);
			}
		}

	}



/* negfl */
	BGL_EXPORTED_DEF double BGl_negflz00zz__r4_numbers_6_5_flonumz00(double
		BgL_r1z00_26)
	{
		{	/* Ieee/flonum.scm 382 */
			return NEG(BgL_r1z00_26);
		}

	}



/* &negfl */
	obj_t BGl_z62negflz62zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1358,
		obj_t BgL_r1z00_1359)
	{
		{	/* Ieee/flonum.scm 382 */
			{	/* Ieee/flonum.scm 383 */
				double BgL_tmpz00_1886;

				{	/* Ieee/flonum.scm 383 */
					double BgL_auxz00_1887;

					{	/* Ieee/flonum.scm 383 */
						obj_t BgL_tmpz00_1888;

						if (REALP(BgL_r1z00_1359))
							{	/* Ieee/flonum.scm 383 */
								BgL_tmpz00_1888 = BgL_r1z00_1359;
							}
						else
							{
								obj_t BgL_auxz00_1891;

								BgL_auxz00_1891 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 17496)),
									BGl_string1640z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00,
									BgL_r1z00_1359);
								FAILURE(BgL_auxz00_1891, BFALSE, BFALSE);
							}
						BgL_auxz00_1887 = REAL_TO_DOUBLE(BgL_tmpz00_1888);
					}
					BgL_tmpz00_1886 =
						BGl_negflz00zz__r4_numbers_6_5_flonumz00(BgL_auxz00_1887);
				}
				return DOUBLE_TO_REAL(BgL_tmpz00_1886);
			}
		}

	}



/* maxfl */
	BGL_EXPORTED_DEF double BGl_maxflz00zz__r4_numbers_6_5_flonumz00(double
		BgL_r1z00_27, obj_t BgL_rnz00_28)
	{
		{	/* Ieee/flonum.scm 388 */
			{
				double BgL_maxz00_1035;
				obj_t BgL_rnz00_1036;

				BgL_maxz00_1035 = BgL_r1z00_27;
				BgL_rnz00_1036 = BgL_rnz00_28;
			BgL_loopz00_1034:
				if (NULLP(BgL_rnz00_1036))
					{	/* Ieee/flonum.scm 391 */
						return BgL_maxz00_1035;
					}
				else
					{
						obj_t BgL_rnz00_1905;
						double BgL_maxz00_1900;

						BgL_maxz00_1900 =
							BGL_FL_MAX2(REAL_TO_DOUBLE(CAR(
									((obj_t) BgL_rnz00_1036))), BgL_maxz00_1035);
						BgL_rnz00_1905 = CDR(((obj_t) BgL_rnz00_1036));
						BgL_rnz00_1036 = BgL_rnz00_1905;
						BgL_maxz00_1035 = BgL_maxz00_1900;
						goto BgL_loopz00_1034;
					}
			}
		}

	}



/* &maxfl */
	obj_t BGl_z62maxflz62zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1360,
		obj_t BgL_r1z00_1361, obj_t BgL_rnz00_1362)
	{
		{	/* Ieee/flonum.scm 388 */
			{	/* Ieee/flonum.scm 389 */
				double BgL_tmpz00_1908;

				{	/* Ieee/flonum.scm 389 */
					double BgL_auxz00_1909;

					{	/* Ieee/flonum.scm 389 */
						obj_t BgL_tmpz00_1910;

						if (REALP(BgL_r1z00_1361))
							{	/* Ieee/flonum.scm 389 */
								BgL_tmpz00_1910 = BgL_r1z00_1361;
							}
						else
							{
								obj_t BgL_auxz00_1913;

								BgL_auxz00_1913 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 17764)),
									BGl_string1641z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00,
									BgL_r1z00_1361);
								FAILURE(BgL_auxz00_1913, BFALSE, BFALSE);
							}
						BgL_auxz00_1909 = REAL_TO_DOUBLE(BgL_tmpz00_1910);
					}
					BgL_tmpz00_1908 =
						BGl_maxflz00zz__r4_numbers_6_5_flonumz00(BgL_auxz00_1909,
						BgL_rnz00_1362);
				}
				return DOUBLE_TO_REAL(BgL_tmpz00_1908);
			}
		}

	}



/* max-2fl */
	BGL_EXPORTED_DEF double BGl_maxzd22flzd2zz__r4_numbers_6_5_flonumz00(double
		BgL_r1z00_29, double BgL_r2z00_30)
	{
		{	/* Ieee/flonum.scm 398 */
			return BGL_FL_MAX2(BgL_r1z00_29, BgL_r2z00_30);
		}

	}



/* &max-2fl */
	obj_t BGl_z62maxzd22flzb0zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1363,
		obj_t BgL_r1z00_1364, obj_t BgL_r2z00_1365)
	{
		{	/* Ieee/flonum.scm 398 */
			{	/* Ieee/flonum.scm 399 */
				double BgL_tmpz00_1921;

				{	/* Ieee/flonum.scm 399 */
					double BgL_auxz00_1931;
					double BgL_auxz00_1922;

					{	/* Ieee/flonum.scm 399 */
						obj_t BgL_tmpz00_1932;

						if (REALP(BgL_r2z00_1365))
							{	/* Ieee/flonum.scm 399 */
								BgL_tmpz00_1932 = BgL_r2z00_1365;
							}
						else
							{
								obj_t BgL_auxz00_1935;

								BgL_auxz00_1935 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 18131)),
									BGl_string1642z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00,
									BgL_r2z00_1365);
								FAILURE(BgL_auxz00_1935, BFALSE, BFALSE);
							}
						BgL_auxz00_1931 = REAL_TO_DOUBLE(BgL_tmpz00_1932);
					}
					{	/* Ieee/flonum.scm 399 */
						obj_t BgL_tmpz00_1923;

						if (REALP(BgL_r1z00_1364))
							{	/* Ieee/flonum.scm 399 */
								BgL_tmpz00_1923 = BgL_r1z00_1364;
							}
						else
							{
								obj_t BgL_auxz00_1926;

								BgL_auxz00_1926 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 18131)),
									BGl_string1642z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00,
									BgL_r1z00_1364);
								FAILURE(BgL_auxz00_1926, BFALSE, BFALSE);
							}
						BgL_auxz00_1922 = REAL_TO_DOUBLE(BgL_tmpz00_1923);
					}
					BgL_tmpz00_1921 =
						BGl_maxzd22flzd2zz__r4_numbers_6_5_flonumz00(BgL_auxz00_1922,
						BgL_auxz00_1931);
				}
				return DOUBLE_TO_REAL(BgL_tmpz00_1921);
			}
		}

	}



/* min-2fl */
	BGL_EXPORTED_DEF double BGl_minzd22flzd2zz__r4_numbers_6_5_flonumz00(double
		BgL_r1z00_31, double BgL_r2z00_32)
	{
		{	/* Ieee/flonum.scm 404 */
			return BGL_FL_MIN2(BgL_r1z00_31, BgL_r2z00_32);
		}

	}



/* &min-2fl */
	obj_t BGl_z62minzd22flzb0zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1366,
		obj_t BgL_r1z00_1367, obj_t BgL_r2z00_1368)
	{
		{	/* Ieee/flonum.scm 404 */
			{	/* Ieee/flonum.scm 405 */
				double BgL_tmpz00_1943;

				{	/* Ieee/flonum.scm 405 */
					double BgL_auxz00_1953;
					double BgL_auxz00_1944;

					{	/* Ieee/flonum.scm 405 */
						obj_t BgL_tmpz00_1954;

						if (REALP(BgL_r2z00_1368))
							{	/* Ieee/flonum.scm 405 */
								BgL_tmpz00_1954 = BgL_r2z00_1368;
							}
						else
							{
								obj_t BgL_auxz00_1957;

								BgL_auxz00_1957 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 18405)),
									BGl_string1643z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00,
									BgL_r2z00_1368);
								FAILURE(BgL_auxz00_1957, BFALSE, BFALSE);
							}
						BgL_auxz00_1953 = REAL_TO_DOUBLE(BgL_tmpz00_1954);
					}
					{	/* Ieee/flonum.scm 405 */
						obj_t BgL_tmpz00_1945;

						if (REALP(BgL_r1z00_1367))
							{	/* Ieee/flonum.scm 405 */
								BgL_tmpz00_1945 = BgL_r1z00_1367;
							}
						else
							{
								obj_t BgL_auxz00_1948;

								BgL_auxz00_1948 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 18405)),
									BGl_string1643z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00,
									BgL_r1z00_1367);
								FAILURE(BgL_auxz00_1948, BFALSE, BFALSE);
							}
						BgL_auxz00_1944 = REAL_TO_DOUBLE(BgL_tmpz00_1945);
					}
					BgL_tmpz00_1943 =
						BGl_minzd22flzd2zz__r4_numbers_6_5_flonumz00(BgL_auxz00_1944,
						BgL_auxz00_1953);
				}
				return DOUBLE_TO_REAL(BgL_tmpz00_1943);
			}
		}

	}



/* minfl */
	BGL_EXPORTED_DEF double BGl_minflz00zz__r4_numbers_6_5_flonumz00(double
		BgL_r1z00_33, obj_t BgL_rnz00_34)
	{
		{	/* Ieee/flonum.scm 410 */
			{
				double BgL_minz00_1079;
				obj_t BgL_rnz00_1080;

				BgL_minz00_1079 = BgL_r1z00_33;
				BgL_rnz00_1080 = BgL_rnz00_34;
			BgL_loopz00_1078:
				if (NULLP(BgL_rnz00_1080))
					{	/* Ieee/flonum.scm 413 */
						return BgL_minz00_1079;
					}
				else
					{
						obj_t BgL_rnz00_1971;
						double BgL_minz00_1966;

						BgL_minz00_1966 =
							BGL_FL_MIN2(REAL_TO_DOUBLE(CAR(
									((obj_t) BgL_rnz00_1080))), BgL_minz00_1079);
						BgL_rnz00_1971 = CDR(((obj_t) BgL_rnz00_1080));
						BgL_rnz00_1080 = BgL_rnz00_1971;
						BgL_minz00_1079 = BgL_minz00_1966;
						goto BgL_loopz00_1078;
					}
			}
		}

	}



/* &minfl */
	obj_t BGl_z62minflz62zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1369,
		obj_t BgL_r1z00_1370, obj_t BgL_rnz00_1371)
	{
		{	/* Ieee/flonum.scm 410 */
			{	/* Ieee/flonum.scm 411 */
				double BgL_tmpz00_1974;

				{	/* Ieee/flonum.scm 411 */
					double BgL_auxz00_1975;

					{	/* Ieee/flonum.scm 411 */
						obj_t BgL_tmpz00_1976;

						if (REALP(BgL_r1z00_1370))
							{	/* Ieee/flonum.scm 411 */
								BgL_tmpz00_1976 = BgL_r1z00_1370;
							}
						else
							{
								obj_t BgL_auxz00_1979;

								BgL_auxz00_1979 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 18675)),
									BGl_string1644z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00,
									BgL_r1z00_1370);
								FAILURE(BgL_auxz00_1979, BFALSE, BFALSE);
							}
						BgL_auxz00_1975 = REAL_TO_DOUBLE(BgL_tmpz00_1976);
					}
					BgL_tmpz00_1974 =
						BGl_minflz00zz__r4_numbers_6_5_flonumz00(BgL_auxz00_1975,
						BgL_rnz00_1371);
				}
				return DOUBLE_TO_REAL(BgL_tmpz00_1974);
			}
		}

	}



/* absfl */
	BGL_EXPORTED_DEF double BGl_absflz00zz__r4_numbers_6_5_flonumz00(double
		BgL_rz00_35)
	{
		{	/* Ieee/flonum.scm 420 */
			return fabs(BgL_rz00_35);
		}

	}



/* &absfl */
	obj_t BGl_z62absflz62zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1372,
		obj_t BgL_rz00_1373)
	{
		{	/* Ieee/flonum.scm 420 */
			{	/* Ieee/flonum.scm 421 */
				double BgL_tmpz00_1987;

				{	/* Ieee/flonum.scm 421 */
					double BgL_auxz00_1988;

					{	/* Ieee/flonum.scm 421 */
						obj_t BgL_tmpz00_1989;

						if (REALP(BgL_rz00_1373))
							{	/* Ieee/flonum.scm 421 */
								BgL_tmpz00_1989 = BgL_rz00_1373;
							}
						else
							{
								obj_t BgL_auxz00_1992;

								BgL_auxz00_1992 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 19039)),
									BGl_string1645z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_1373);
								FAILURE(BgL_auxz00_1992, BFALSE, BFALSE);
							}
						BgL_auxz00_1988 = REAL_TO_DOUBLE(BgL_tmpz00_1989);
					}
					BgL_tmpz00_1987 =
						BGl_absflz00zz__r4_numbers_6_5_flonumz00(BgL_auxz00_1988);
				}
				return DOUBLE_TO_REAL(BgL_tmpz00_1987);
			}
		}

	}



/* floorfl */
	BGL_EXPORTED_DEF double BGl_floorflz00zz__r4_numbers_6_5_flonumz00(double
		BgL_rz00_36)
	{
		{	/* Ieee/flonum.scm 426 */
			return floor(BgL_rz00_36);
		}

	}



/* &floorfl */
	obj_t BGl_z62floorflz62zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1374,
		obj_t BgL_rz00_1375)
	{
		{	/* Ieee/flonum.scm 426 */
			{	/* Ieee/flonum.scm 427 */
				double BgL_tmpz00_2000;

				{	/* Ieee/flonum.scm 427 */
					double BgL_auxz00_2001;

					{	/* Ieee/flonum.scm 427 */
						obj_t BgL_tmpz00_2002;

						if (REALP(BgL_rz00_1375))
							{	/* Ieee/flonum.scm 427 */
								BgL_tmpz00_2002 = BgL_rz00_1375;
							}
						else
							{
								obj_t BgL_auxz00_2005;

								BgL_auxz00_2005 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 19305)),
									BGl_string1646z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_1375);
								FAILURE(BgL_auxz00_2005, BFALSE, BFALSE);
							}
						BgL_auxz00_2001 = REAL_TO_DOUBLE(BgL_tmpz00_2002);
					}
					BgL_tmpz00_2000 =
						BGl_floorflz00zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2001);
				}
				return DOUBLE_TO_REAL(BgL_tmpz00_2000);
			}
		}

	}



/* ceilingfl */
	BGL_EXPORTED_DEF double BGl_ceilingflz00zz__r4_numbers_6_5_flonumz00(double
		BgL_rz00_37)
	{
		{	/* Ieee/flonum.scm 432 */
			return ceil(BgL_rz00_37);
		}

	}



/* &ceilingfl */
	obj_t BGl_z62ceilingflz62zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1376,
		obj_t BgL_rz00_1377)
	{
		{	/* Ieee/flonum.scm 432 */
			{	/* Ieee/flonum.scm 433 */
				double BgL_tmpz00_2013;

				{	/* Ieee/flonum.scm 433 */
					double BgL_auxz00_2014;

					{	/* Ieee/flonum.scm 433 */
						obj_t BgL_tmpz00_2015;

						if (REALP(BgL_rz00_1377))
							{	/* Ieee/flonum.scm 433 */
								BgL_tmpz00_2015 = BgL_rz00_1377;
							}
						else
							{
								obj_t BgL_auxz00_2018;

								BgL_auxz00_2018 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 19573)),
									BGl_string1647z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_1377);
								FAILURE(BgL_auxz00_2018, BFALSE, BFALSE);
							}
						BgL_auxz00_2014 = REAL_TO_DOUBLE(BgL_tmpz00_2015);
					}
					BgL_tmpz00_2013 =
						BGl_ceilingflz00zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2014);
				}
				return DOUBLE_TO_REAL(BgL_tmpz00_2013);
			}
		}

	}



/* truncatefl */
	BGL_EXPORTED_DEF double BGl_truncateflz00zz__r4_numbers_6_5_flonumz00(double
		BgL_rz00_38)
	{
		{	/* Ieee/flonum.scm 438 */
			if ((BgL_rz00_38 < ((double) 0.0)))
				{	/* Ieee/flonum.scm 440 */
					double BgL_res1430z00_1594;

					BgL_res1430z00_1594 = ceil(BgL_rz00_38);
					return BgL_res1430z00_1594;
				}
			else
				{	/* Ieee/flonum.scm 441 */
					double BgL_res1431z00_1595;

					BgL_res1431z00_1595 = floor(BgL_rz00_38);
					return BgL_res1431z00_1595;
				}
		}

	}



/* &truncatefl */
	obj_t BGl_z62truncateflz62zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1378,
		obj_t BgL_rz00_1379)
	{
		{	/* Ieee/flonum.scm 438 */
			{	/* Ieee/flonum.scm 439 */
				double BgL_tmpz00_2029;

				{	/* Ieee/flonum.scm 439 */
					double BgL_auxz00_2030;

					{	/* Ieee/flonum.scm 439 */
						obj_t BgL_tmpz00_2031;

						if (REALP(BgL_rz00_1379))
							{	/* Ieee/flonum.scm 439 */
								BgL_tmpz00_2031 = BgL_rz00_1379;
							}
						else
							{
								obj_t BgL_auxz00_2034;

								BgL_auxz00_2034 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 19844)),
									BGl_string1648z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_1379);
								FAILURE(BgL_auxz00_2034, BFALSE, BFALSE);
							}
						BgL_auxz00_2030 = REAL_TO_DOUBLE(BgL_tmpz00_2031);
					}
					BgL_tmpz00_2029 =
						BGl_truncateflz00zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2030);
				}
				return DOUBLE_TO_REAL(BgL_tmpz00_2029);
			}
		}

	}



/* roundfl */
	BGL_EXPORTED_DEF double BGl_roundflz00zz__r4_numbers_6_5_flonumz00(double
		BgL_rz00_39)
	{
		{	/* Ieee/flonum.scm 446 */
			return BGL_FL_ROUND(BgL_rz00_39);
		}

	}



/* &roundfl */
	obj_t BGl_z62roundflz62zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1380,
		obj_t BgL_rz00_1381)
	{
		{	/* Ieee/flonum.scm 446 */
			{	/* Ieee/flonum.scm 447 */
				double BgL_tmpz00_2042;

				{	/* Ieee/flonum.scm 447 */
					double BgL_auxz00_2043;

					{	/* Ieee/flonum.scm 447 */
						obj_t BgL_tmpz00_2044;

						if (REALP(BgL_rz00_1381))
							{	/* Ieee/flonum.scm 447 */
								BgL_tmpz00_2044 = BgL_rz00_1381;
							}
						else
							{
								obj_t BgL_auxz00_2047;

								BgL_auxz00_2047 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 20152)),
									BGl_string1649z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_1381);
								FAILURE(BgL_auxz00_2047, BFALSE, BFALSE);
							}
						BgL_auxz00_2043 = REAL_TO_DOUBLE(BgL_tmpz00_2044);
					}
					BgL_tmpz00_2042 =
						BGl_roundflz00zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2043);
				}
				return DOUBLE_TO_REAL(BgL_tmpz00_2042);
			}
		}

	}



/* remainderfl */
	BGL_EXPORTED_DEF double BGl_remainderflz00zz__r4_numbers_6_5_flonumz00(double
		BgL_n1z00_40, double BgL_n2z00_41)
	{
		{	/* Ieee/flonum.scm 452 */
			return fmod(BgL_n1z00_40, BgL_n2z00_41);
		}

	}



/* &remainderfl */
	obj_t BGl_z62remainderflz62zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1382,
		obj_t BgL_n1z00_1383, obj_t BgL_n2z00_1384)
	{
		{	/* Ieee/flonum.scm 452 */
			{	/* Ieee/flonum.scm 453 */
				double BgL_tmpz00_2055;

				{	/* Ieee/flonum.scm 453 */
					double BgL_auxz00_2065;
					double BgL_auxz00_2056;

					{	/* Ieee/flonum.scm 453 */
						obj_t BgL_tmpz00_2066;

						if (REALP(BgL_n2z00_1384))
							{	/* Ieee/flonum.scm 453 */
								BgL_tmpz00_2066 = BgL_n2z00_1384;
							}
						else
							{
								obj_t BgL_auxz00_2069;

								BgL_auxz00_2069 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 20428)),
									BGl_string1650z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00,
									BgL_n2z00_1384);
								FAILURE(BgL_auxz00_2069, BFALSE, BFALSE);
							}
						BgL_auxz00_2065 = REAL_TO_DOUBLE(BgL_tmpz00_2066);
					}
					{	/* Ieee/flonum.scm 453 */
						obj_t BgL_tmpz00_2057;

						if (REALP(BgL_n1z00_1383))
							{	/* Ieee/flonum.scm 453 */
								BgL_tmpz00_2057 = BgL_n1z00_1383;
							}
						else
							{
								obj_t BgL_auxz00_2060;

								BgL_auxz00_2060 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 20428)),
									BGl_string1650z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00,
									BgL_n1z00_1383);
								FAILURE(BgL_auxz00_2060, BFALSE, BFALSE);
							}
						BgL_auxz00_2056 = REAL_TO_DOUBLE(BgL_tmpz00_2057);
					}
					BgL_tmpz00_2055 =
						BGl_remainderflz00zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2056,
						BgL_auxz00_2065);
				}
				return DOUBLE_TO_REAL(BgL_tmpz00_2055);
			}
		}

	}



/* expfl */
	BGL_EXPORTED_DEF double BGl_expflz00zz__r4_numbers_6_5_flonumz00(double
		BgL_xz00_42)
	{
		{	/* Ieee/flonum.scm 458 */
			return exp(BgL_xz00_42);
		}

	}



/* &expfl */
	obj_t BGl_z62expflz62zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1385,
		obj_t BgL_xz00_1386)
	{
		{	/* Ieee/flonum.scm 458 */
			{	/* Ieee/flonum.scm 459 */
				double BgL_tmpz00_2077;

				{	/* Ieee/flonum.scm 459 */
					double BgL_auxz00_2078;

					{	/* Ieee/flonum.scm 459 */
						obj_t BgL_tmpz00_2079;

						if (REALP(BgL_xz00_1386))
							{	/* Ieee/flonum.scm 459 */
								BgL_tmpz00_2079 = BgL_xz00_1386;
							}
						else
							{
								obj_t BgL_auxz00_2082;

								BgL_auxz00_2082 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 20695)),
									BGl_string1651z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00, BgL_xz00_1386);
								FAILURE(BgL_auxz00_2082, BFALSE, BFALSE);
							}
						BgL_auxz00_2078 = REAL_TO_DOUBLE(BgL_tmpz00_2079);
					}
					BgL_tmpz00_2077 =
						BGl_expflz00zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2078);
				}
				return DOUBLE_TO_REAL(BgL_tmpz00_2077);
			}
		}

	}



/* logfl */
	BGL_EXPORTED_DEF double BGl_logflz00zz__r4_numbers_6_5_flonumz00(double
		BgL_xz00_43)
	{
		{	/* Ieee/flonum.scm 464 */
			return log(BgL_xz00_43);
		}

	}



/* &logfl */
	obj_t BGl_z62logflz62zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1387,
		obj_t BgL_xz00_1388)
	{
		{	/* Ieee/flonum.scm 464 */
			{	/* Ieee/flonum.scm 465 */
				double BgL_tmpz00_2090;

				{	/* Ieee/flonum.scm 465 */
					double BgL_auxz00_2091;

					{	/* Ieee/flonum.scm 465 */
						obj_t BgL_tmpz00_2092;

						if (REALP(BgL_xz00_1388))
							{	/* Ieee/flonum.scm 465 */
								BgL_tmpz00_2092 = BgL_xz00_1388;
							}
						else
							{
								obj_t BgL_auxz00_2095;

								BgL_auxz00_2095 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 20957)),
									BGl_string1652z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00, BgL_xz00_1388);
								FAILURE(BgL_auxz00_2095, BFALSE, BFALSE);
							}
						BgL_auxz00_2091 = REAL_TO_DOUBLE(BgL_tmpz00_2092);
					}
					BgL_tmpz00_2090 =
						BGl_logflz00zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2091);
				}
				return DOUBLE_TO_REAL(BgL_tmpz00_2090);
			}
		}

	}



/* sinfl */
	BGL_EXPORTED_DEF double BGl_sinflz00zz__r4_numbers_6_5_flonumz00(double
		BgL_xz00_44)
	{
		{	/* Ieee/flonum.scm 470 */
			return sin(BgL_xz00_44);
		}

	}



/* &sinfl */
	obj_t BGl_z62sinflz62zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1389,
		obj_t BgL_xz00_1390)
	{
		{	/* Ieee/flonum.scm 470 */
			{	/* Ieee/flonum.scm 471 */
				double BgL_tmpz00_2103;

				{	/* Ieee/flonum.scm 471 */
					double BgL_auxz00_2104;

					{	/* Ieee/flonum.scm 471 */
						obj_t BgL_tmpz00_2105;

						if (REALP(BgL_xz00_1390))
							{	/* Ieee/flonum.scm 471 */
								BgL_tmpz00_2105 = BgL_xz00_1390;
							}
						else
							{
								obj_t BgL_auxz00_2108;

								BgL_auxz00_2108 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 21220)),
									BGl_string1653z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00, BgL_xz00_1390);
								FAILURE(BgL_auxz00_2108, BFALSE, BFALSE);
							}
						BgL_auxz00_2104 = REAL_TO_DOUBLE(BgL_tmpz00_2105);
					}
					BgL_tmpz00_2103 =
						BGl_sinflz00zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2104);
				}
				return DOUBLE_TO_REAL(BgL_tmpz00_2103);
			}
		}

	}



/* cosfl */
	BGL_EXPORTED_DEF double BGl_cosflz00zz__r4_numbers_6_5_flonumz00(double
		BgL_xz00_45)
	{
		{	/* Ieee/flonum.scm 476 */
			return cos(BgL_xz00_45);
		}

	}



/* &cosfl */
	obj_t BGl_z62cosflz62zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1391,
		obj_t BgL_xz00_1392)
	{
		{	/* Ieee/flonum.scm 476 */
			{	/* Ieee/flonum.scm 477 */
				double BgL_tmpz00_2116;

				{	/* Ieee/flonum.scm 477 */
					double BgL_auxz00_2117;

					{	/* Ieee/flonum.scm 477 */
						obj_t BgL_tmpz00_2118;

						if (REALP(BgL_xz00_1392))
							{	/* Ieee/flonum.scm 477 */
								BgL_tmpz00_2118 = BgL_xz00_1392;
							}
						else
							{
								obj_t BgL_auxz00_2121;

								BgL_auxz00_2121 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 21482)),
									BGl_string1654z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00, BgL_xz00_1392);
								FAILURE(BgL_auxz00_2121, BFALSE, BFALSE);
							}
						BgL_auxz00_2117 = REAL_TO_DOUBLE(BgL_tmpz00_2118);
					}
					BgL_tmpz00_2116 =
						BGl_cosflz00zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2117);
				}
				return DOUBLE_TO_REAL(BgL_tmpz00_2116);
			}
		}

	}



/* tanfl */
	BGL_EXPORTED_DEF double BGl_tanflz00zz__r4_numbers_6_5_flonumz00(double
		BgL_xz00_46)
	{
		{	/* Ieee/flonum.scm 482 */
			return tan(BgL_xz00_46);
		}

	}



/* &tanfl */
	obj_t BGl_z62tanflz62zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1393,
		obj_t BgL_xz00_1394)
	{
		{	/* Ieee/flonum.scm 482 */
			{	/* Ieee/flonum.scm 483 */
				double BgL_tmpz00_2129;

				{	/* Ieee/flonum.scm 483 */
					double BgL_auxz00_2130;

					{	/* Ieee/flonum.scm 483 */
						obj_t BgL_tmpz00_2131;

						if (REALP(BgL_xz00_1394))
							{	/* Ieee/flonum.scm 483 */
								BgL_tmpz00_2131 = BgL_xz00_1394;
							}
						else
							{
								obj_t BgL_auxz00_2134;

								BgL_auxz00_2134 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 21744)),
									BGl_string1655z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00, BgL_xz00_1394);
								FAILURE(BgL_auxz00_2134, BFALSE, BFALSE);
							}
						BgL_auxz00_2130 = REAL_TO_DOUBLE(BgL_tmpz00_2131);
					}
					BgL_tmpz00_2129 =
						BGl_tanflz00zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2130);
				}
				return DOUBLE_TO_REAL(BgL_tmpz00_2129);
			}
		}

	}



/* asinfl */
	BGL_EXPORTED_DEF double BGl_asinflz00zz__r4_numbers_6_5_flonumz00(double
		BgL_xz00_47)
	{
		{	/* Ieee/flonum.scm 488 */
			return asin(BgL_xz00_47);
		}

	}



/* &asinfl */
	obj_t BGl_z62asinflz62zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1395,
		obj_t BgL_xz00_1396)
	{
		{	/* Ieee/flonum.scm 488 */
			{	/* Ieee/flonum.scm 489 */
				double BgL_tmpz00_2142;

				{	/* Ieee/flonum.scm 489 */
					double BgL_auxz00_2143;

					{	/* Ieee/flonum.scm 489 */
						obj_t BgL_tmpz00_2144;

						if (REALP(BgL_xz00_1396))
							{	/* Ieee/flonum.scm 489 */
								BgL_tmpz00_2144 = BgL_xz00_1396;
							}
						else
							{
								obj_t BgL_auxz00_2147;

								BgL_auxz00_2147 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 22007)),
									BGl_string1656z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00, BgL_xz00_1396);
								FAILURE(BgL_auxz00_2147, BFALSE, BFALSE);
							}
						BgL_auxz00_2143 = REAL_TO_DOUBLE(BgL_tmpz00_2144);
					}
					BgL_tmpz00_2142 =
						BGl_asinflz00zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2143);
				}
				return DOUBLE_TO_REAL(BgL_tmpz00_2142);
			}
		}

	}



/* acosfl */
	BGL_EXPORTED_DEF double BGl_acosflz00zz__r4_numbers_6_5_flonumz00(double
		BgL_xz00_48)
	{
		{	/* Ieee/flonum.scm 494 */
			return acos(BgL_xz00_48);
		}

	}



/* &acosfl */
	obj_t BGl_z62acosflz62zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1397,
		obj_t BgL_xz00_1398)
	{
		{	/* Ieee/flonum.scm 494 */
			{	/* Ieee/flonum.scm 495 */
				double BgL_tmpz00_2155;

				{	/* Ieee/flonum.scm 495 */
					double BgL_auxz00_2156;

					{	/* Ieee/flonum.scm 495 */
						obj_t BgL_tmpz00_2157;

						if (REALP(BgL_xz00_1398))
							{	/* Ieee/flonum.scm 495 */
								BgL_tmpz00_2157 = BgL_xz00_1398;
							}
						else
							{
								obj_t BgL_auxz00_2160;

								BgL_auxz00_2160 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 22271)),
									BGl_string1657z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00, BgL_xz00_1398);
								FAILURE(BgL_auxz00_2160, BFALSE, BFALSE);
							}
						BgL_auxz00_2156 = REAL_TO_DOUBLE(BgL_tmpz00_2157);
					}
					BgL_tmpz00_2155 =
						BGl_acosflz00zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2156);
				}
				return DOUBLE_TO_REAL(BgL_tmpz00_2155);
			}
		}

	}



/* atanfl */
	BGL_EXPORTED_DEF double BGl_atanflz00zz__r4_numbers_6_5_flonumz00(double
		BgL_xz00_49, obj_t BgL_yz00_50)
	{
		{	/* Ieee/flonum.scm 500 */
			if (NULLP(BgL_yz00_50))
				{	/* Ieee/flonum.scm 501 */
					return atan(BgL_xz00_49);
				}
			else
				{	/* Ieee/flonum.scm 503 */
					obj_t BgL_yz00_1106;

					BgL_yz00_1106 = CAR(((obj_t) BgL_yz00_50));
					{	/* Ieee/flonum.scm 504 */
						double BgL_res1433z00_1111;

						{	/* Ieee/flonum.scm 504 */
							double BgL_yz00_1110;

							BgL_yz00_1110 = REAL_TO_DOUBLE(BgL_yz00_1106);
							BgL_res1433z00_1111 = atan2(BgL_xz00_49, BgL_yz00_1110);
						}
						return BgL_res1433z00_1111;
					}
				}
		}

	}



/* &atanfl */
	obj_t BGl_z62atanflz62zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1399,
		obj_t BgL_xz00_1400, obj_t BgL_yz00_1401)
	{
		{	/* Ieee/flonum.scm 500 */
			{	/* Ieee/flonum.scm 501 */
				double BgL_tmpz00_2174;

				{	/* Ieee/flonum.scm 501 */
					double BgL_auxz00_2175;

					{	/* Ieee/flonum.scm 501 */
						obj_t BgL_tmpz00_2176;

						if (REALP(BgL_xz00_1400))
							{	/* Ieee/flonum.scm 501 */
								BgL_tmpz00_2176 = BgL_xz00_1400;
							}
						else
							{
								obj_t BgL_auxz00_2179;

								BgL_auxz00_2179 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 22532)),
									BGl_string1658z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00, BgL_xz00_1400);
								FAILURE(BgL_auxz00_2179, BFALSE, BFALSE);
							}
						BgL_auxz00_2175 = REAL_TO_DOUBLE(BgL_tmpz00_2176);
					}
					BgL_tmpz00_2174 =
						BGl_atanflz00zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2175,
						BgL_yz00_1401);
				}
				return DOUBLE_TO_REAL(BgL_tmpz00_2174);
			}
		}

	}



/* atan-1fl */
	BGL_EXPORTED_DEF double BGl_atanzd21flzd2zz__r4_numbers_6_5_flonumz00(double
		BgL_xz00_51)
	{
		{	/* Ieee/flonum.scm 509 */
			return atan(BgL_xz00_51);
		}

	}



/* &atan-1fl */
	obj_t BGl_z62atanzd21flzb0zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1402,
		obj_t BgL_xz00_1403)
	{
		{	/* Ieee/flonum.scm 509 */
			{	/* Ieee/flonum.scm 510 */
				double BgL_tmpz00_2187;

				{	/* Ieee/flonum.scm 510 */
					double BgL_auxz00_2188;

					{	/* Ieee/flonum.scm 510 */
						obj_t BgL_tmpz00_2189;

						if (REALP(BgL_xz00_1403))
							{	/* Ieee/flonum.scm 510 */
								BgL_tmpz00_2189 = BgL_xz00_1403;
							}
						else
							{
								obj_t BgL_auxz00_2192;

								BgL_auxz00_2192 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 22865)),
									BGl_string1659z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00, BgL_xz00_1403);
								FAILURE(BgL_auxz00_2192, BFALSE, BFALSE);
							}
						BgL_auxz00_2188 = REAL_TO_DOUBLE(BgL_tmpz00_2189);
					}
					BgL_tmpz00_2187 =
						BGl_atanzd21flzd2zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2188);
				}
				return DOUBLE_TO_REAL(BgL_tmpz00_2187);
			}
		}

	}



/* atan-2fl */
	BGL_EXPORTED_DEF double BGl_atanzd22flzd2zz__r4_numbers_6_5_flonumz00(double
		BgL_xz00_52, double BgL_yz00_53)
	{
		{	/* Ieee/flonum.scm 515 */
			{	/* Ieee/flonum.scm 519 */
				bool_t BgL_test1870z00_2199;

				if ((BgL_xz00_52 == ((double) 0.0)))
					{	/* Ieee/flonum.scm 516 */
						BgL_test1870z00_2199 = (BgL_yz00_53 == ((double) 0.0));
					}
				else
					{	/* Ieee/flonum.scm 516 */
						BgL_test1870z00_2199 = ((bool_t) 0);
					}
				if (BgL_test1870z00_2199)
					{	/* Ieee/flonum.scm 520 */
						obj_t BgL_procz00_1596;
						obj_t BgL_msgz00_1597;
						obj_t BgL_objz00_1598;

						BgL_procz00_1596 =
							string_to_bstring(BSTRING_TO_STRING
							(BGl_string1660z00zz__r4_numbers_6_5_flonumz00));
						BgL_msgz00_1597 =
							string_to_bstring(BSTRING_TO_STRING
							(BGl_string1661z00zz__r4_numbers_6_5_flonumz00));
						BgL_objz00_1598 =
							BGL_REAL_CNST(BGl_real1662z00zz__r4_numbers_6_5_flonumz00);
						the_failure(BgL_procz00_1596, BgL_msgz00_1597, BgL_objz00_1598);
						return ((double) 0.0);
					}
				else
					{	/* Ieee/flonum.scm 519 */
						return atan2(BgL_xz00_52, BgL_yz00_53);
					}
			}
		}

	}



/* &atan-2fl */
	obj_t BGl_z62atanzd22flzb0zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1404,
		obj_t BgL_xz00_1405, obj_t BgL_yz00_1406)
	{
		{	/* Ieee/flonum.scm 515 */
			{	/* Ieee/flonum.scm 516 */
				double BgL_tmpz00_2209;

				{	/* Ieee/flonum.scm 516 */
					double BgL_auxz00_2219;
					double BgL_auxz00_2210;

					{	/* Ieee/flonum.scm 516 */
						obj_t BgL_tmpz00_2220;

						if (REALP(BgL_yz00_1406))
							{	/* Ieee/flonum.scm 516 */
								BgL_tmpz00_2220 = BgL_yz00_1406;
							}
						else
							{
								obj_t BgL_auxz00_2223;

								BgL_auxz00_2223 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 23133)),
									BGl_string1663z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00, BgL_yz00_1406);
								FAILURE(BgL_auxz00_2223, BFALSE, BFALSE);
							}
						BgL_auxz00_2219 = REAL_TO_DOUBLE(BgL_tmpz00_2220);
					}
					{	/* Ieee/flonum.scm 516 */
						obj_t BgL_tmpz00_2211;

						if (REALP(BgL_xz00_1405))
							{	/* Ieee/flonum.scm 516 */
								BgL_tmpz00_2211 = BgL_xz00_1405;
							}
						else
							{
								obj_t BgL_auxz00_2214;

								BgL_auxz00_2214 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 23133)),
									BGl_string1663z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00, BgL_xz00_1405);
								FAILURE(BgL_auxz00_2214, BFALSE, BFALSE);
							}
						BgL_auxz00_2210 = REAL_TO_DOUBLE(BgL_tmpz00_2211);
					}
					BgL_tmpz00_2209 =
						BGl_atanzd22flzd2zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2210,
						BgL_auxz00_2219);
				}
				return DOUBLE_TO_REAL(BgL_tmpz00_2209);
			}
		}

	}



/* atan-2fl-ur */
	BGL_EXPORTED_DEF double
		BGl_atanzd22flzd2urz00zz__r4_numbers_6_5_flonumz00(double BgL_xz00_54,
		double BgL_yz00_55)
	{
		{	/* Ieee/flonum.scm 533 */
			return atan2(BgL_xz00_54, BgL_yz00_55);
		}

	}



/* &atan-2fl-ur */
	obj_t BGl_z62atanzd22flzd2urz62zz__r4_numbers_6_5_flonumz00(obj_t
		BgL_envz00_1407, obj_t BgL_xz00_1408, obj_t BgL_yz00_1409)
	{
		{	/* Ieee/flonum.scm 533 */
			{	/* Ieee/flonum.scm 534 */
				double BgL_tmpz00_2231;

				{	/* Ieee/flonum.scm 534 */
					double BgL_auxz00_2241;
					double BgL_auxz00_2232;

					{	/* Ieee/flonum.scm 534 */
						obj_t BgL_tmpz00_2242;

						if (REALP(BgL_yz00_1409))
							{	/* Ieee/flonum.scm 534 */
								BgL_tmpz00_2242 = BgL_yz00_1409;
							}
						else
							{
								obj_t BgL_auxz00_2245;

								BgL_auxz00_2245 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 23772)),
									BGl_string1664z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00, BgL_yz00_1409);
								FAILURE(BgL_auxz00_2245, BFALSE, BFALSE);
							}
						BgL_auxz00_2241 = REAL_TO_DOUBLE(BgL_tmpz00_2242);
					}
					{	/* Ieee/flonum.scm 534 */
						obj_t BgL_tmpz00_2233;

						if (REALP(BgL_xz00_1408))
							{	/* Ieee/flonum.scm 534 */
								BgL_tmpz00_2233 = BgL_xz00_1408;
							}
						else
							{
								obj_t BgL_auxz00_2236;

								BgL_auxz00_2236 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 23772)),
									BGl_string1664z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00, BgL_xz00_1408);
								FAILURE(BgL_auxz00_2236, BFALSE, BFALSE);
							}
						BgL_auxz00_2232 = REAL_TO_DOUBLE(BgL_tmpz00_2233);
					}
					BgL_tmpz00_2231 =
						BGl_atanzd22flzd2urz00zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2232,
						BgL_auxz00_2241);
				}
				return DOUBLE_TO_REAL(BgL_tmpz00_2231);
			}
		}

	}



/* sqrtfl */
	BGL_EXPORTED_DEF double BGl_sqrtflz00zz__r4_numbers_6_5_flonumz00(double
		BgL_rz00_56)
	{
		{	/* Ieee/flonum.scm 539 */
			if ((BgL_rz00_56 < ((double) 0.0)))
				{	/* Ieee/flonum.scm 541 */
					obj_t BgL_procz00_1599;
					obj_t BgL_msgz00_1600;
					obj_t BgL_objz00_1601;

					BgL_procz00_1599 =
						string_to_bstring(BSTRING_TO_STRING
						(BGl_string1665z00zz__r4_numbers_6_5_flonumz00));
					BgL_msgz00_1600 =
						string_to_bstring(BSTRING_TO_STRING
						(BGl_string1661z00zz__r4_numbers_6_5_flonumz00));
					BgL_objz00_1601 = DOUBLE_TO_REAL(BgL_rz00_56);
					BGl_errorz00zz__errorz00(BgL_procz00_1599, BgL_msgz00_1600,
						BgL_objz00_1601);
					return ((double) 0.0);
				}
			else
				{	/* Ieee/flonum.scm 540 */
					return sqrt(BgL_rz00_56);
				}
		}

	}



/* &sqrtfl */
	obj_t BGl_z62sqrtflz62zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1410,
		obj_t BgL_rz00_1411)
	{
		{	/* Ieee/flonum.scm 539 */
			{	/* Ieee/flonum.scm 540 */
				double BgL_tmpz00_2261;

				{	/* Ieee/flonum.scm 540 */
					double BgL_auxz00_2262;

					{	/* Ieee/flonum.scm 540 */
						obj_t BgL_tmpz00_2263;

						if (REALP(BgL_rz00_1411))
							{	/* Ieee/flonum.scm 540 */
								BgL_tmpz00_2263 = BgL_rz00_1411;
							}
						else
							{
								obj_t BgL_auxz00_2266;

								BgL_auxz00_2266 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 24039)),
									BGl_string1666z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_1411);
								FAILURE(BgL_auxz00_2266, BFALSE, BFALSE);
							}
						BgL_auxz00_2262 = REAL_TO_DOUBLE(BgL_tmpz00_2263);
					}
					BgL_tmpz00_2261 =
						BGl_sqrtflz00zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2262);
				}
				return DOUBLE_TO_REAL(BgL_tmpz00_2261);
			}
		}

	}



/* sqrtfl-ur */
	BGL_EXPORTED_DEF double BGl_sqrtflzd2urzd2zz__r4_numbers_6_5_flonumz00(double
		BgL_rz00_57)
	{
		{	/* Ieee/flonum.scm 552 */
			return sqrt(BgL_rz00_57);
		}

	}



/* &sqrtfl-ur */
	obj_t BGl_z62sqrtflzd2urzb0zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1412,
		obj_t BgL_rz00_1413)
	{
		{	/* Ieee/flonum.scm 552 */
			{	/* Ieee/flonum.scm 553 */
				double BgL_tmpz00_2274;

				{	/* Ieee/flonum.scm 553 */
					double BgL_auxz00_2275;

					{	/* Ieee/flonum.scm 553 */
						obj_t BgL_tmpz00_2276;

						if (REALP(BgL_rz00_1413))
							{	/* Ieee/flonum.scm 553 */
								BgL_tmpz00_2276 = BgL_rz00_1413;
							}
						else
							{
								obj_t BgL_auxz00_2279;

								BgL_auxz00_2279 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 24519)),
									BGl_string1667z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_1413);
								FAILURE(BgL_auxz00_2279, BFALSE, BFALSE);
							}
						BgL_auxz00_2275 = REAL_TO_DOUBLE(BgL_tmpz00_2276);
					}
					BgL_tmpz00_2274 =
						BGl_sqrtflzd2urzd2zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2275);
				}
				return DOUBLE_TO_REAL(BgL_tmpz00_2274);
			}
		}

	}



/* exptfl */
	BGL_EXPORTED_DEF double BGl_exptflz00zz__r4_numbers_6_5_flonumz00(double
		BgL_r1z00_58, double BgL_r2z00_59)
	{
		{	/* Ieee/flonum.scm 558 */
			return pow(BgL_r1z00_58, BgL_r2z00_59);
		}

	}



/* &exptfl */
	obj_t BGl_z62exptflz62zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1414,
		obj_t BgL_r1z00_1415, obj_t BgL_r2z00_1416)
	{
		{	/* Ieee/flonum.scm 558 */
			{	/* Ieee/flonum.scm 559 */
				double BgL_tmpz00_2287;

				{	/* Ieee/flonum.scm 559 */
					double BgL_auxz00_2297;
					double BgL_auxz00_2288;

					{	/* Ieee/flonum.scm 559 */
						obj_t BgL_tmpz00_2298;

						if (REALP(BgL_r2z00_1416))
							{	/* Ieee/flonum.scm 559 */
								BgL_tmpz00_2298 = BgL_r2z00_1416;
							}
						else
							{
								obj_t BgL_auxz00_2301;

								BgL_auxz00_2301 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 24787)),
									BGl_string1668z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00,
									BgL_r2z00_1416);
								FAILURE(BgL_auxz00_2301, BFALSE, BFALSE);
							}
						BgL_auxz00_2297 = REAL_TO_DOUBLE(BgL_tmpz00_2298);
					}
					{	/* Ieee/flonum.scm 559 */
						obj_t BgL_tmpz00_2289;

						if (REALP(BgL_r1z00_1415))
							{	/* Ieee/flonum.scm 559 */
								BgL_tmpz00_2289 = BgL_r1z00_1415;
							}
						else
							{
								obj_t BgL_auxz00_2292;

								BgL_auxz00_2292 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 24787)),
									BGl_string1668z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00,
									BgL_r1z00_1415);
								FAILURE(BgL_auxz00_2292, BFALSE, BFALSE);
							}
						BgL_auxz00_2288 = REAL_TO_DOUBLE(BgL_tmpz00_2289);
					}
					BgL_tmpz00_2287 =
						BGl_exptflz00zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2288,
						BgL_auxz00_2297);
				}
				return DOUBLE_TO_REAL(BgL_tmpz00_2287);
			}
		}

	}



/* signbitfl */
	BGL_EXPORTED_DEF long BGl_signbitflz00zz__r4_numbers_6_5_flonumz00(double
		BgL_rz00_60)
	{
		{	/* Ieee/flonum.scm 564 */
			return BGL_SIGNBIT(BgL_rz00_60);
		}

	}



/* &signbitfl */
	obj_t BGl_z62signbitflz62zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1417,
		obj_t BgL_rz00_1418)
	{
		{	/* Ieee/flonum.scm 564 */
			{	/* Ieee/flonum.scm 565 */
				long BgL_tmpz00_2309;

				{	/* Ieee/flonum.scm 565 */
					double BgL_auxz00_2310;

					{	/* Ieee/flonum.scm 565 */
						obj_t BgL_tmpz00_2311;

						if (REALP(BgL_rz00_1418))
							{	/* Ieee/flonum.scm 565 */
								BgL_tmpz00_2311 = BgL_rz00_1418;
							}
						else
							{
								obj_t BgL_auxz00_2314;

								BgL_auxz00_2314 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 25057)),
									BGl_string1669z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_1418);
								FAILURE(BgL_auxz00_2314, BFALSE, BFALSE);
							}
						BgL_auxz00_2310 = REAL_TO_DOUBLE(BgL_tmpz00_2311);
					}
					BgL_tmpz00_2309 =
						BGl_signbitflz00zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2310);
				}
				return BINT(BgL_tmpz00_2309);
			}
		}

	}



/* integerfl? */
	BGL_EXPORTED_DEF bool_t BGl_integerflzf3zf3zz__r4_numbers_6_5_flonumz00(double
		BgL_rz00_61)
	{
		{	/* Ieee/flonum.scm 570 */
			{	/* Ieee/flonum.scm 573 */
				double BgL_intpartz00_1602;

				BgL_intpartz00_1602 = ((double) 0.0);
				if (BGL_IS_FINITE(BgL_rz00_61))
					{	/* Ieee/flonum.scm 575 */
						double BgL_arg1073z00_1603;

						{	/* Ieee/flonum.scm 575 */
							void *BgL_arg1074z00_1604;

							BgL_arg1074z00_1604 = &(BgL_intpartz00_1602);
							BgL_arg1073z00_1603 = modf(BgL_rz00_61, BgL_arg1074z00_1604);
						}
						return (BgL_arg1073z00_1603 == ((double) 0.0));
					}
				else
					{	/* Ieee/flonum.scm 574 */
						return ((bool_t) 0);
					}
			}
		}

	}



/* &integerfl? */
	obj_t BGl_z62integerflzf3z91zz__r4_numbers_6_5_flonumz00(obj_t
		BgL_envz00_1419, obj_t BgL_rz00_1420)
	{
		{	/* Ieee/flonum.scm 570 */
			{	/* Ieee/flonum.scm 573 */
				bool_t BgL_tmpz00_2327;

				{	/* Ieee/flonum.scm 573 */
					double BgL_auxz00_2328;

					{	/* Ieee/flonum.scm 573 */
						obj_t BgL_tmpz00_2329;

						if (REALP(BgL_rz00_1420))
							{	/* Ieee/flonum.scm 573 */
								BgL_tmpz00_2329 = BgL_rz00_1420;
							}
						else
							{
								obj_t BgL_auxz00_2332;

								BgL_auxz00_2332 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 25363)),
									BGl_string1670z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_1420);
								FAILURE(BgL_auxz00_2332, BFALSE, BFALSE);
							}
						BgL_auxz00_2328 = REAL_TO_DOUBLE(BgL_tmpz00_2329);
					}
					BgL_tmpz00_2327 =
						BGl_integerflzf3zf3zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2328);
				}
				return BBOOL(BgL_tmpz00_2327);
			}
		}

	}



/* evenfl? */
	BGL_EXPORTED_DEF bool_t BGl_evenflzf3zf3zz__r4_numbers_6_5_flonumz00(double
		BgL_rz00_62)
	{
		{	/* Ieee/flonum.scm 582 */
			{	/* Ieee/flonum.scm 583 */
				double BgL_arg1078z00_1605;

				BgL_arg1078z00_1605 = (BgL_rz00_62 / ((double) 2.0));
				{	/* Ieee/flonum.scm 583 */
					bool_t BgL_res1442z00_1606;

					{	/* Ieee/flonum.scm 573 */
						double BgL_intpartz00_1607;

						BgL_intpartz00_1607 = ((double) 0.0);
						if (BGL_IS_FINITE(BgL_arg1078z00_1605))
							{	/* Ieee/flonum.scm 575 */
								double BgL_arg1073z00_1608;

								{	/* Ieee/flonum.scm 575 */
									void *BgL_arg1074z00_1609;

									BgL_arg1074z00_1609 = &(BgL_intpartz00_1607);
									BgL_arg1073z00_1608 =
										modf(BgL_arg1078z00_1605, BgL_arg1074z00_1609);
								}
								BgL_res1442z00_1606 = (BgL_arg1073z00_1608 == ((double) 0.0));
							}
						else
							{	/* Ieee/flonum.scm 574 */
								BgL_res1442z00_1606 = ((bool_t) 0);
							}
					}
					return BgL_res1442z00_1606;
				}
			}
		}

	}



/* &evenfl? */
	obj_t BGl_z62evenflzf3z91zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1421,
		obj_t BgL_rz00_1422)
	{
		{	/* Ieee/flonum.scm 582 */
			{	/* Ieee/flonum.scm 583 */
				bool_t BgL_tmpz00_2346;

				{	/* Ieee/flonum.scm 583 */
					double BgL_auxz00_2347;

					{	/* Ieee/flonum.scm 583 */
						obj_t BgL_tmpz00_2348;

						if (REALP(BgL_rz00_1422))
							{	/* Ieee/flonum.scm 583 */
								BgL_tmpz00_2348 = BgL_rz00_1422;
							}
						else
							{
								obj_t BgL_auxz00_2351;

								BgL_auxz00_2351 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 25813)),
									BGl_string1671z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_1422);
								FAILURE(BgL_auxz00_2351, BFALSE, BFALSE);
							}
						BgL_auxz00_2347 = REAL_TO_DOUBLE(BgL_tmpz00_2348);
					}
					BgL_tmpz00_2346 =
						BGl_evenflzf3zf3zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2347);
				}
				return BBOOL(BgL_tmpz00_2346);
			}
		}

	}



/* oddfl? */
	BGL_EXPORTED_DEF bool_t BGl_oddflzf3zf3zz__r4_numbers_6_5_flonumz00(double
		BgL_rz00_63)
	{
		{	/* Ieee/flonum.scm 588 */
			{	/* Ieee/flonum.scm 589 */
				bool_t BgL_test1886z00_2358;

				{	/* Ieee/flonum.scm 589 */
					bool_t BgL_res1445z00_1610;

					{	/* Ieee/flonum.scm 573 */
						double BgL_intpartz00_1611;

						BgL_intpartz00_1611 = ((double) 0.0);
						if (BGL_IS_FINITE(BgL_rz00_63))
							{	/* Ieee/flonum.scm 575 */
								double BgL_arg1073z00_1612;

								{	/* Ieee/flonum.scm 575 */
									void *BgL_arg1074z00_1613;

									BgL_arg1074z00_1613 = &(BgL_intpartz00_1611);
									BgL_arg1073z00_1612 = modf(BgL_rz00_63, BgL_arg1074z00_1613);
								}
								BgL_res1445z00_1610 = (BgL_arg1073z00_1612 == ((double) 0.0));
							}
						else
							{	/* Ieee/flonum.scm 574 */
								BgL_res1445z00_1610 = ((bool_t) 0);
							}
					}
					BgL_test1886z00_2358 = BgL_res1445z00_1610;
				}
				if (BgL_test1886z00_2358)
					{	/* Ieee/flonum.scm 590 */
						bool_t BgL_test1888z00_2365;

						{	/* Ieee/flonum.scm 590 */
							bool_t BgL_res1450z00_1614;

							{	/* Ieee/flonum.scm 583 */
								double BgL_arg1078z00_1615;

								BgL_arg1078z00_1615 = (BgL_rz00_63 / ((double) 2.0));
								{	/* Ieee/flonum.scm 583 */
									bool_t BgL_res1449z00_1616;

									{	/* Ieee/flonum.scm 573 */
										double BgL_intpartz00_1617;

										BgL_intpartz00_1617 = ((double) 0.0);
										if (BGL_IS_FINITE(BgL_arg1078z00_1615))
											{	/* Ieee/flonum.scm 575 */
												double BgL_arg1073z00_1618;

												{	/* Ieee/flonum.scm 575 */
													void *BgL_arg1074z00_1619;

													BgL_arg1074z00_1619 = &(BgL_intpartz00_1617);
													BgL_arg1073z00_1618 =
														modf(BgL_arg1078z00_1615, BgL_arg1074z00_1619);
												}
												BgL_res1449z00_1616 =
													(BgL_arg1073z00_1618 == ((double) 0.0));
											}
										else
											{	/* Ieee/flonum.scm 574 */
												BgL_res1449z00_1616 = ((bool_t) 0);
											}
									}
									BgL_res1450z00_1614 = BgL_res1449z00_1616;
								}
							}
							BgL_test1888z00_2365 = BgL_res1450z00_1614;
						}
						if (BgL_test1888z00_2365)
							{	/* Ieee/flonum.scm 590 */
								return ((bool_t) 0);
							}
						else
							{	/* Ieee/flonum.scm 590 */
								return ((bool_t) 1);
							}
					}
				else
					{	/* Ieee/flonum.scm 589 */
						return ((bool_t) 0);
					}
			}
		}

	}



/* &oddfl? */
	obj_t BGl_z62oddflzf3z91zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1423,
		obj_t BgL_rz00_1424)
	{
		{	/* Ieee/flonum.scm 588 */
			{	/* Ieee/flonum.scm 589 */
				bool_t BgL_tmpz00_2373;

				{	/* Ieee/flonum.scm 589 */
					double BgL_auxz00_2374;

					{	/* Ieee/flonum.scm 589 */
						obj_t BgL_tmpz00_2375;

						if (REALP(BgL_rz00_1424))
							{	/* Ieee/flonum.scm 589 */
								BgL_tmpz00_2375 = BgL_rz00_1424;
							}
						else
							{
								obj_t BgL_auxz00_2378;

								BgL_auxz00_2378 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 26084)),
									BGl_string1672z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_1424);
								FAILURE(BgL_auxz00_2378, BFALSE, BFALSE);
							}
						BgL_auxz00_2374 = REAL_TO_DOUBLE(BgL_tmpz00_2375);
					}
					BgL_tmpz00_2373 =
						BGl_oddflzf3zf3zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2374);
				}
				return BBOOL(BgL_tmpz00_2373);
			}
		}

	}



/* finitefl? */
	BGL_EXPORTED_DEF bool_t BGl_finiteflzf3zf3zz__r4_numbers_6_5_flonumz00(double
		BgL_rz00_64)
	{
		{	/* Ieee/flonum.scm 595 */
			return BGL_IS_FINITE(BgL_rz00_64);
		}

	}



/* &finitefl? */
	obj_t BGl_z62finiteflzf3z91zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1425,
		obj_t BgL_rz00_1426)
	{
		{	/* Ieee/flonum.scm 595 */
			{	/* Ieee/flonum.scm 596 */
				bool_t BgL_tmpz00_2386;

				{	/* Ieee/flonum.scm 596 */
					double BgL_auxz00_2387;

					{	/* Ieee/flonum.scm 596 */
						obj_t BgL_tmpz00_2388;

						if (REALP(BgL_rz00_1426))
							{	/* Ieee/flonum.scm 596 */
								BgL_tmpz00_2388 = BgL_rz00_1426;
							}
						else
							{
								obj_t BgL_auxz00_2391;

								BgL_auxz00_2391 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 26375)),
									BGl_string1673z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_1426);
								FAILURE(BgL_auxz00_2391, BFALSE, BFALSE);
							}
						BgL_auxz00_2387 = REAL_TO_DOUBLE(BgL_tmpz00_2388);
					}
					BgL_tmpz00_2386 =
						BGl_finiteflzf3zf3zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2387);
				}
				return BBOOL(BgL_tmpz00_2386);
			}
		}

	}



/* infinitefl? */
	BGL_EXPORTED_DEF bool_t
		BGl_infiniteflzf3zf3zz__r4_numbers_6_5_flonumz00(double BgL_rz00_65)
	{
		{	/* Ieee/flonum.scm 601 */
			return BGL_IS_INF(BgL_rz00_65);
		}

	}



/* &infinitefl? */
	obj_t BGl_z62infiniteflzf3z91zz__r4_numbers_6_5_flonumz00(obj_t
		BgL_envz00_1427, obj_t BgL_rz00_1428)
	{
		{	/* Ieee/flonum.scm 601 */
			{	/* Ieee/flonum.scm 602 */
				bool_t BgL_tmpz00_2399;

				{	/* Ieee/flonum.scm 602 */
					double BgL_auxz00_2400;

					{	/* Ieee/flonum.scm 602 */
						obj_t BgL_tmpz00_2401;

						if (REALP(BgL_rz00_1428))
							{	/* Ieee/flonum.scm 602 */
								BgL_tmpz00_2401 = BgL_rz00_1428;
							}
						else
							{
								obj_t BgL_auxz00_2404;

								BgL_auxz00_2404 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 26648)),
									BGl_string1674z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_1428);
								FAILURE(BgL_auxz00_2404, BFALSE, BFALSE);
							}
						BgL_auxz00_2400 = REAL_TO_DOUBLE(BgL_tmpz00_2401);
					}
					BgL_tmpz00_2399 =
						BGl_infiniteflzf3zf3zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2400);
				}
				return BBOOL(BgL_tmpz00_2399);
			}
		}

	}



/* nanfl? */
	BGL_EXPORTED_DEF bool_t BGl_nanflzf3zf3zz__r4_numbers_6_5_flonumz00(double
		BgL_rz00_66)
	{
		{	/* Ieee/flonum.scm 607 */
			return BGL_IS_NAN(BgL_rz00_66);
		}

	}



/* &nanfl? */
	obj_t BGl_z62nanflzf3z91zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1429,
		obj_t BgL_rz00_1430)
	{
		{	/* Ieee/flonum.scm 607 */
			{	/* Ieee/flonum.scm 608 */
				bool_t BgL_tmpz00_2412;

				{	/* Ieee/flonum.scm 608 */
					double BgL_auxz00_2413;

					{	/* Ieee/flonum.scm 608 */
						obj_t BgL_tmpz00_2414;

						if (REALP(BgL_rz00_1430))
							{	/* Ieee/flonum.scm 608 */
								BgL_tmpz00_2414 = BgL_rz00_1430;
							}
						else
							{
								obj_t BgL_auxz00_2417;

								BgL_auxz00_2417 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 26913)),
									BGl_string1675z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_1430);
								FAILURE(BgL_auxz00_2417, BFALSE, BFALSE);
							}
						BgL_auxz00_2413 = REAL_TO_DOUBLE(BgL_tmpz00_2414);
					}
					BgL_tmpz00_2412 =
						BGl_nanflzf3zf3zz__r4_numbers_6_5_flonumz00(BgL_auxz00_2413);
				}
				return BBOOL(BgL_tmpz00_2412);
			}
		}

	}



/* string->real */
	BGL_EXPORTED_DEF double
		BGl_stringzd2ze3realz31zz__r4_numbers_6_5_flonumz00(char *BgL_stringz00_67)
	{
		{	/* Ieee/flonum.scm 613 */
			{	/* Ieee/flonum.scm 615 */
				bool_t BgL_test1894z00_2424;

				{	/* Ieee/flonum.scm 615 */
					bool_t BgL_res1455z00_1620;

					{	/* Ieee/flonum.scm 615 */
						obj_t BgL_string1z00_1621;

						BgL_string1z00_1621 = string_to_bstring(BgL_stringz00_67);
						{	/* Ieee/flonum.scm 615 */
							long BgL_l1z00_1622;

							BgL_l1z00_1622 = STRING_LENGTH(BgL_string1z00_1621);
							if ((BgL_l1z00_1622 == ((long) 6)))
								{	/* Ieee/flonum.scm 615 */
									int BgL_arg1407z00_1623;

									{	/* Ieee/flonum.scm 615 */
										char *BgL_auxz00_2431;
										char *BgL_tmpz00_2429;

										BgL_auxz00_2431 =
											BSTRING_TO_STRING
											(BGl_string1676z00zz__r4_numbers_6_5_flonumz00);
										BgL_tmpz00_2429 = BSTRING_TO_STRING(BgL_string1z00_1621);
										BgL_arg1407z00_1623 =
											memcmp(BgL_tmpz00_2429, BgL_auxz00_2431, BgL_l1z00_1622);
									}
									BgL_res1455z00_1620 =
										((long) (BgL_arg1407z00_1623) == ((long) 0));
								}
							else
								{	/* Ieee/flonum.scm 615 */
									BgL_res1455z00_1620 = ((bool_t) 0);
								}
						}
					}
					BgL_test1894z00_2424 = BgL_res1455z00_1620;
				}
				if (BgL_test1894z00_2424)
					{	/* Ieee/flonum.scm 615 */
						return BGL_NAN;
					}
				else
					{	/* Ieee/flonum.scm 617 */
						bool_t BgL_test1896z00_2436;

						{	/* Ieee/flonum.scm 617 */
							bool_t BgL_res1460z00_1624;

							{	/* Ieee/flonum.scm 617 */
								obj_t BgL_string1z00_1625;

								BgL_string1z00_1625 = string_to_bstring(BgL_stringz00_67);
								{	/* Ieee/flonum.scm 617 */
									long BgL_l1z00_1626;

									BgL_l1z00_1626 = STRING_LENGTH(BgL_string1z00_1625);
									if ((BgL_l1z00_1626 == ((long) 6)))
										{	/* Ieee/flonum.scm 617 */
											int BgL_arg1407z00_1627;

											{	/* Ieee/flonum.scm 617 */
												char *BgL_auxz00_2443;
												char *BgL_tmpz00_2441;

												BgL_auxz00_2443 =
													BSTRING_TO_STRING
													(BGl_string1677z00zz__r4_numbers_6_5_flonumz00);
												BgL_tmpz00_2441 =
													BSTRING_TO_STRING(BgL_string1z00_1625);
												BgL_arg1407z00_1627 =
													memcmp(BgL_tmpz00_2441, BgL_auxz00_2443,
													BgL_l1z00_1626);
											}
											BgL_res1460z00_1624 =
												((long) (BgL_arg1407z00_1627) == ((long) 0));
										}
									else
										{	/* Ieee/flonum.scm 617 */
											BgL_res1460z00_1624 = ((bool_t) 0);
										}
								}
							}
							BgL_test1896z00_2436 = BgL_res1460z00_1624;
						}
						if (BgL_test1896z00_2436)
							{	/* Ieee/flonum.scm 617 */
								return BGL_INFINITY;
							}
						else
							{	/* Ieee/flonum.scm 619 */
								bool_t BgL_test1898z00_2448;

								{	/* Ieee/flonum.scm 619 */
									bool_t BgL_res1465z00_1628;

									{	/* Ieee/flonum.scm 619 */
										obj_t BgL_string1z00_1629;

										BgL_string1z00_1629 = string_to_bstring(BgL_stringz00_67);
										{	/* Ieee/flonum.scm 619 */
											long BgL_l1z00_1630;

											BgL_l1z00_1630 = STRING_LENGTH(BgL_string1z00_1629);
											if ((BgL_l1z00_1630 == ((long) 6)))
												{	/* Ieee/flonum.scm 619 */
													int BgL_arg1407z00_1631;

													{	/* Ieee/flonum.scm 619 */
														char *BgL_auxz00_2455;
														char *BgL_tmpz00_2453;

														BgL_auxz00_2455 =
															BSTRING_TO_STRING
															(BGl_string1678z00zz__r4_numbers_6_5_flonumz00);
														BgL_tmpz00_2453 =
															BSTRING_TO_STRING(BgL_string1z00_1629);
														BgL_arg1407z00_1631 =
															memcmp(BgL_tmpz00_2453, BgL_auxz00_2455,
															BgL_l1z00_1630);
													}
													BgL_res1465z00_1628 =
														((long) (BgL_arg1407z00_1631) == ((long) 0));
												}
											else
												{	/* Ieee/flonum.scm 619 */
													BgL_res1465z00_1628 = ((bool_t) 0);
												}
										}
									}
									BgL_test1898z00_2448 = BgL_res1465z00_1628;
								}
								if (BgL_test1898z00_2448)
									{	/* Ieee/flonum.scm 619 */
										return (-BGL_INFINITY);
									}
								else
									{	/* Ieee/flonum.scm 619 */
										return STRTOD(BgL_stringz00_67);
									}
							}
					}
			}
		}

	}



/* &string->real */
	obj_t BGl_z62stringzd2ze3realz53zz__r4_numbers_6_5_flonumz00(obj_t
		BgL_envz00_1431, obj_t BgL_stringz00_1432)
	{
		{	/* Ieee/flonum.scm 613 */
			{	/* Ieee/flonum.scm 615 */
				double BgL_tmpz00_2461;

				{	/* Ieee/flonum.scm 615 */
					char *BgL_auxz00_2462;

					{	/* Ieee/flonum.scm 615 */
						obj_t BgL_tmpz00_2463;

						if (STRINGP(BgL_stringz00_1432))
							{	/* Ieee/flonum.scm 615 */
								BgL_tmpz00_2463 = BgL_stringz00_1432;
							}
						else
							{
								obj_t BgL_auxz00_2466;

								BgL_auxz00_2466 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 27201)),
									BGl_string1679z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1680z00zz__r4_numbers_6_5_flonumz00,
									BgL_stringz00_1432);
								FAILURE(BgL_auxz00_2466, BFALSE, BFALSE);
							}
						BgL_auxz00_2462 = BSTRING_TO_STRING(BgL_tmpz00_2463);
					}
					BgL_tmpz00_2461 =
						BGl_stringzd2ze3realz31zz__r4_numbers_6_5_flonumz00
						(BgL_auxz00_2462);
				}
				return DOUBLE_TO_REAL(BgL_tmpz00_2461);
			}
		}

	}



/* ieee-string->real */
	BGL_EXPORTED_DEF obj_t
		BGl_ieeezd2stringzd2ze3realze3zz__r4_numbers_6_5_flonumz00(obj_t
		BgL_stringz00_68)
	{
		{	/* Ieee/flonum.scm 627 */
			return DOUBLE_TO_REAL(bgl_ieee_string_to_double(BgL_stringz00_68));
		}

	}



/* &ieee-string->real */
	obj_t BGl_z62ieeezd2stringzd2ze3realz81zz__r4_numbers_6_5_flonumz00(obj_t
		BgL_envz00_1433, obj_t BgL_stringz00_1434)
	{
		{	/* Ieee/flonum.scm 627 */
			{	/* Ieee/flonum.scm 628 */
				obj_t BgL_auxz00_2475;

				if (STRINGP(BgL_stringz00_1434))
					{	/* Ieee/flonum.scm 628 */
						BgL_auxz00_2475 = BgL_stringz00_1434;
					}
				else
					{
						obj_t BgL_auxz00_2478;

						BgL_auxz00_2478 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
							BINT(((long) 27649)),
							BGl_string1681z00zz__r4_numbers_6_5_flonumz00,
							BGl_string1680z00zz__r4_numbers_6_5_flonumz00,
							BgL_stringz00_1434);
						FAILURE(BgL_auxz00_2478, BFALSE, BFALSE);
					}
				return
					BGl_ieeezd2stringzd2ze3realze3zz__r4_numbers_6_5_flonumz00
					(BgL_auxz00_2475);
			}
		}

	}



/* real->ieee-string */
	BGL_EXPORTED_DEF obj_t
		BGl_realzd2ze3ieeezd2stringze3zz__r4_numbers_6_5_flonumz00(obj_t
		BgL_realz00_69)
	{
		{	/* Ieee/flonum.scm 633 */
			return bgl_double_to_ieee_string(REAL_TO_DOUBLE(BgL_realz00_69));
		}

	}



/* &real->ieee-string */
	obj_t BGl_z62realzd2ze3ieeezd2stringz81zz__r4_numbers_6_5_flonumz00(obj_t
		BgL_envz00_1435, obj_t BgL_realz00_1436)
	{
		{	/* Ieee/flonum.scm 633 */
			{	/* Ieee/flonum.scm 634 */
				obj_t BgL_auxz00_2485;

				if (REALP(BgL_realz00_1436))
					{	/* Ieee/flonum.scm 634 */
						BgL_auxz00_2485 = BgL_realz00_1436;
					}
				else
					{
						obj_t BgL_auxz00_2488;

						BgL_auxz00_2488 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
							BINT(((long) 27946)),
							BGl_string1682z00zz__r4_numbers_6_5_flonumz00,
							BGl_string1628z00zz__r4_numbers_6_5_flonumz00, BgL_realz00_1436);
						FAILURE(BgL_auxz00_2488, BFALSE, BFALSE);
					}
				return
					BGl_realzd2ze3ieeezd2stringze3zz__r4_numbers_6_5_flonumz00
					(BgL_auxz00_2485);
			}
		}

	}



/* ieee-string->double */
	BGL_EXPORTED_DEF double
		BGl_ieeezd2stringzd2ze3doubleze3zz__r4_numbers_6_5_flonumz00(obj_t
		BgL_stringz00_70)
	{
		{	/* Ieee/flonum.scm 639 */
			return bgl_ieee_string_to_double(BgL_stringz00_70);
		}

	}



/* &ieee-string->double */
	obj_t BGl_z62ieeezd2stringzd2ze3doublez81zz__r4_numbers_6_5_flonumz00(obj_t
		BgL_envz00_1437, obj_t BgL_stringz00_1438)
	{
		{	/* Ieee/flonum.scm 639 */
			{	/* Ieee/flonum.scm 640 */
				double BgL_tmpz00_2494;

				{	/* Ieee/flonum.scm 640 */
					obj_t BgL_auxz00_2495;

					if (STRINGP(BgL_stringz00_1438))
						{	/* Ieee/flonum.scm 640 */
							BgL_auxz00_2495 = BgL_stringz00_1438;
						}
					else
						{
							obj_t BgL_auxz00_2498;

							BgL_auxz00_2498 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
								BINT(((long) 28245)),
								BGl_string1683z00zz__r4_numbers_6_5_flonumz00,
								BGl_string1680z00zz__r4_numbers_6_5_flonumz00,
								BgL_stringz00_1438);
							FAILURE(BgL_auxz00_2498, BFALSE, BFALSE);
						}
					BgL_tmpz00_2494 =
						BGl_ieeezd2stringzd2ze3doubleze3zz__r4_numbers_6_5_flonumz00
						(BgL_auxz00_2495);
				}
				return DOUBLE_TO_REAL(BgL_tmpz00_2494);
			}
		}

	}



/* double->ieee-string */
	BGL_EXPORTED_DEF obj_t
		BGl_doublezd2ze3ieeezd2stringze3zz__r4_numbers_6_5_flonumz00(double
		BgL_doublez00_71)
	{
		{	/* Ieee/flonum.scm 645 */
			return bgl_double_to_ieee_string(BgL_doublez00_71);
		}

	}



/* &double->ieee-string */
	obj_t BGl_z62doublezd2ze3ieeezd2stringz81zz__r4_numbers_6_5_flonumz00(obj_t
		BgL_envz00_1439, obj_t BgL_doublez00_1440)
	{
		{	/* Ieee/flonum.scm 645 */
			{	/* Ieee/flonum.scm 646 */
				double BgL_auxz00_2505;

				{	/* Ieee/flonum.scm 646 */
					obj_t BgL_tmpz00_2506;

					if (REALP(BgL_doublez00_1440))
						{	/* Ieee/flonum.scm 646 */
							BgL_tmpz00_2506 = BgL_doublez00_1440;
						}
					else
						{
							obj_t BgL_auxz00_2509;

							BgL_auxz00_2509 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
								BINT(((long) 28546)),
								BGl_string1684z00zz__r4_numbers_6_5_flonumz00,
								BGl_string1628z00zz__r4_numbers_6_5_flonumz00,
								BgL_doublez00_1440);
							FAILURE(BgL_auxz00_2509, BFALSE, BFALSE);
						}
					BgL_auxz00_2505 = REAL_TO_DOUBLE(BgL_tmpz00_2506);
				}
				return
					BGl_doublezd2ze3ieeezd2stringze3zz__r4_numbers_6_5_flonumz00
					(BgL_auxz00_2505);
			}
		}

	}



/* ieee-string->float */
	BGL_EXPORTED_DEF float
		BGl_ieeezd2stringzd2ze3floatze3zz__r4_numbers_6_5_flonumz00(obj_t
		BgL_stringz00_72)
	{
		{	/* Ieee/flonum.scm 651 */
			return bgl_ieee_string_to_float(BgL_stringz00_72);
		}

	}



/* &ieee-string->float */
	obj_t BGl_z62ieeezd2stringzd2ze3floatz81zz__r4_numbers_6_5_flonumz00(obj_t
		BgL_envz00_1441, obj_t BgL_stringz00_1442)
	{
		{	/* Ieee/flonum.scm 651 */
			{	/* Ieee/flonum.scm 652 */
				float BgL_tmpz00_2516;

				{	/* Ieee/flonum.scm 652 */
					obj_t BgL_auxz00_2517;

					if (STRINGP(BgL_stringz00_1442))
						{	/* Ieee/flonum.scm 652 */
							BgL_auxz00_2517 = BgL_stringz00_1442;
						}
					else
						{
							obj_t BgL_auxz00_2520;

							BgL_auxz00_2520 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
								BINT(((long) 28846)),
								BGl_string1685z00zz__r4_numbers_6_5_flonumz00,
								BGl_string1680z00zz__r4_numbers_6_5_flonumz00,
								BgL_stringz00_1442);
							FAILURE(BgL_auxz00_2520, BFALSE, BFALSE);
						}
					BgL_tmpz00_2516 =
						BGl_ieeezd2stringzd2ze3floatze3zz__r4_numbers_6_5_flonumz00
						(BgL_auxz00_2517);
				}
				return FLOAT_TO_REAL(BgL_tmpz00_2516);
			}
		}

	}



/* float->ieee-string */
	BGL_EXPORTED_DEF obj_t
		BGl_floatzd2ze3ieeezd2stringze3zz__r4_numbers_6_5_flonumz00(float
		BgL_floatz00_73)
	{
		{	/* Ieee/flonum.scm 657 */
			return bgl_float_to_ieee_string(BgL_floatz00_73);
		}

	}



/* &float->ieee-string */
	obj_t BGl_z62floatzd2ze3ieeezd2stringz81zz__r4_numbers_6_5_flonumz00(obj_t
		BgL_envz00_1443, obj_t BgL_floatz00_1444)
	{
		{	/* Ieee/flonum.scm 657 */
			{	/* Ieee/flonum.scm 658 */
				float BgL_auxz00_2527;

				{	/* Ieee/flonum.scm 658 */
					obj_t BgL_tmpz00_2528;

					if (REALP(BgL_floatz00_1444))
						{	/* Ieee/flonum.scm 658 */
							BgL_tmpz00_2528 = BgL_floatz00_1444;
						}
					else
						{
							obj_t BgL_auxz00_2531;

							BgL_auxz00_2531 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
								BINT(((long) 29144)),
								BGl_string1686z00zz__r4_numbers_6_5_flonumz00,
								BGl_string1628z00zz__r4_numbers_6_5_flonumz00,
								BgL_floatz00_1444);
							FAILURE(BgL_auxz00_2531, BFALSE, BFALSE);
						}
					BgL_auxz00_2527 = REAL_TO_FLOAT(BgL_tmpz00_2528);
				}
				return
					BGl_floatzd2ze3ieeezd2stringze3zz__r4_numbers_6_5_flonumz00
					(BgL_auxz00_2527);
			}
		}

	}



/* double->llong-bits */
	BGL_EXPORTED_DEF BGL_LONGLONG_T
		BGl_doublezd2ze3llongzd2bitsze3zz__r4_numbers_6_5_flonumz00(double
		BgL_nz00_74)
	{
		{	/* Ieee/flonum.scm 663 */
			return DOUBLE_TO_LLONG_BITS(BgL_nz00_74);
		}

	}



/* &double->llong-bits */
	obj_t BGl_z62doublezd2ze3llongzd2bitsz81zz__r4_numbers_6_5_flonumz00(obj_t
		BgL_envz00_1445, obj_t BgL_nz00_1446)
	{
		{	/* Ieee/flonum.scm 663 */
			{	/* Ieee/flonum.scm 664 */
				BGL_LONGLONG_T BgL_tmpz00_2538;

				{	/* Ieee/flonum.scm 664 */
					double BgL_auxz00_2539;

					{	/* Ieee/flonum.scm 664 */
						obj_t BgL_tmpz00_2540;

						if (REALP(BgL_nz00_1446))
							{	/* Ieee/flonum.scm 664 */
								BgL_tmpz00_2540 = BgL_nz00_1446;
							}
						else
							{
								obj_t BgL_auxz00_2543;

								BgL_auxz00_2543 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 29452)),
									BGl_string1687z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00, BgL_nz00_1446);
								FAILURE(BgL_auxz00_2543, BFALSE, BFALSE);
							}
						BgL_auxz00_2539 = REAL_TO_DOUBLE(BgL_tmpz00_2540);
					}
					BgL_tmpz00_2538 =
						BGl_doublezd2ze3llongzd2bitsze3zz__r4_numbers_6_5_flonumz00
						(BgL_auxz00_2539);
				}
				return make_bllong(BgL_tmpz00_2538);
			}
		}

	}



/* llong-bits->double */
	BGL_EXPORTED_DEF double
		BGl_llongzd2bitszd2ze3doubleze3zz__r4_numbers_6_5_flonumz00(BGL_LONGLONG_T
		BgL_nz00_75)
	{
		{	/* Ieee/flonum.scm 669 */
			return LLONG_BITS_TO_DOUBLE(BgL_nz00_75);
		}

	}



/* &llong-bits->double */
	obj_t BGl_z62llongzd2bitszd2ze3doublez81zz__r4_numbers_6_5_flonumz00(obj_t
		BgL_envz00_1447, obj_t BgL_nz00_1448)
	{
		{	/* Ieee/flonum.scm 669 */
			{	/* Ieee/flonum.scm 670 */
				double BgL_tmpz00_2551;

				{	/* Ieee/flonum.scm 670 */
					BGL_LONGLONG_T BgL_auxz00_2552;

					{	/* Ieee/flonum.scm 670 */
						obj_t BgL_tmpz00_2553;

						if (LLONGP(BgL_nz00_1448))
							{	/* Ieee/flonum.scm 670 */
								BgL_tmpz00_2553 = BgL_nz00_1448;
							}
						else
							{
								obj_t BgL_auxz00_2556;

								BgL_auxz00_2556 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 29756)),
									BGl_string1688z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1689z00zz__r4_numbers_6_5_flonumz00, BgL_nz00_1448);
								FAILURE(BgL_auxz00_2556, BFALSE, BFALSE);
							}
						BgL_auxz00_2552 = BLLONG_TO_LLONG(BgL_tmpz00_2553);
					}
					BgL_tmpz00_2551 =
						BGl_llongzd2bitszd2ze3doubleze3zz__r4_numbers_6_5_flonumz00
						(BgL_auxz00_2552);
				}
				return DOUBLE_TO_REAL(BgL_tmpz00_2551);
			}
		}

	}



/* float->int-bits */
	BGL_EXPORTED_DEF int
		BGl_floatzd2ze3intzd2bitsze3zz__r4_numbers_6_5_flonumz00(float BgL_nz00_76)
	{
		{	/* Ieee/flonum.scm 675 */
			return FLOAT_TO_INT_BITS(BgL_nz00_76);
		}

	}



/* &float->int-bits */
	obj_t BGl_z62floatzd2ze3intzd2bitsz81zz__r4_numbers_6_5_flonumz00(obj_t
		BgL_envz00_1449, obj_t BgL_nz00_1450)
	{
		{	/* Ieee/flonum.scm 675 */
			{	/* Ieee/flonum.scm 676 */
				int BgL_tmpz00_2564;

				{	/* Ieee/flonum.scm 676 */
					float BgL_auxz00_2565;

					{	/* Ieee/flonum.scm 676 */
						obj_t BgL_tmpz00_2566;

						if (REALP(BgL_nz00_1450))
							{	/* Ieee/flonum.scm 676 */
								BgL_tmpz00_2566 = BgL_nz00_1450;
							}
						else
							{
								obj_t BgL_auxz00_2569;

								BgL_auxz00_2569 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 30054)),
									BGl_string1690z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1628z00zz__r4_numbers_6_5_flonumz00, BgL_nz00_1450);
								FAILURE(BgL_auxz00_2569, BFALSE, BFALSE);
							}
						BgL_auxz00_2565 = REAL_TO_FLOAT(BgL_tmpz00_2566);
					}
					BgL_tmpz00_2564 =
						BGl_floatzd2ze3intzd2bitsze3zz__r4_numbers_6_5_flonumz00
						(BgL_auxz00_2565);
				}
				return BINT(BgL_tmpz00_2564);
			}
		}

	}



/* int-bits->float */
	BGL_EXPORTED_DEF float
		BGl_intzd2bitszd2ze3floatze3zz__r4_numbers_6_5_flonumz00(int BgL_nz00_77)
	{
		{	/* Ieee/flonum.scm 681 */
			return INT_BITS_TO_FLOAT(BgL_nz00_77);
		}

	}



/* &int-bits->float */
	obj_t BGl_z62intzd2bitszd2ze3floatz81zz__r4_numbers_6_5_flonumz00(obj_t
		BgL_envz00_1451, obj_t BgL_nz00_1452)
	{
		{	/* Ieee/flonum.scm 681 */
			{	/* Ieee/flonum.scm 682 */
				float BgL_tmpz00_2577;

				{	/* Ieee/flonum.scm 682 */
					int BgL_auxz00_2578;

					{	/* Ieee/flonum.scm 682 */
						obj_t BgL_tmpz00_2579;

						if (INTEGERP(BgL_nz00_1452))
							{	/* Ieee/flonum.scm 682 */
								BgL_tmpz00_2579 = BgL_nz00_1452;
							}
						else
							{
								obj_t BgL_auxz00_2582;

								BgL_auxz00_2582 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1626z00zz__r4_numbers_6_5_flonumz00,
									BINT(((long) 30349)),
									BGl_string1691z00zz__r4_numbers_6_5_flonumz00,
									BGl_string1692z00zz__r4_numbers_6_5_flonumz00, BgL_nz00_1452);
								FAILURE(BgL_auxz00_2582, BFALSE, BFALSE);
							}
						BgL_auxz00_2578 = CINT(BgL_tmpz00_2579);
					}
					BgL_tmpz00_2577 =
						BGl_intzd2bitszd2ze3floatze3zz__r4_numbers_6_5_flonumz00
						(BgL_auxz00_2578);
				}
				return FLOAT_TO_REAL(BgL_tmpz00_2577);
			}
		}

	}



/* randomfl */
	BGL_EXPORTED_DEF double BGl_randomflz00zz__r4_numbers_6_5_flonumz00()
	{
		{	/* Ieee/flonum.scm 687 */
			return RANDOMFL();
		}

	}



/* &randomfl */
	obj_t BGl_z62randomflz62zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1453)
	{
		{	/* Ieee/flonum.scm 687 */
			return DOUBLE_TO_REAL(BGl_randomflz00zz__r4_numbers_6_5_flonumz00());
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__r4_numbers_6_5_flonumz00()
	{
		{	/* Ieee/flonum.scm 14 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string1693z00zz__r4_numbers_6_5_flonumz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string1693z00zz__r4_numbers_6_5_flonumz00));
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long)
					473309694),
				BSTRING_TO_STRING(BGl_string1693z00zz__r4_numbers_6_5_flonumz00));
			return
				BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonum_dtoaz00((
					(long) 268155874),
				BSTRING_TO_STRING(BGl_string1693z00zz__r4_numbers_6_5_flonumz00));
		}

	}

#ifdef __cplusplus
}
#endif
