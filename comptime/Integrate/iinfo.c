/*===========================================================================*/
/*   (Integrate/iinfo.scm)                                                   */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Integrate/iinfo.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* object type definitions */
	typedef struct BgL_funz00_bgl
	{
		header_t header;
		obj_t widening;
		long BgL_arityz00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_predicatezd2ofzd2;
		obj_t BgL_stackzd2allocatorzd2;
		bool_t BgL_topzf3zf3;
		obj_t BgL_thezd2closurezd2;
		obj_t BgL_effectz00;
		obj_t BgL_failsafez00;
		obj_t BgL_argszd2noescapezd2;
	}             *BgL_funz00_bglt;

	typedef struct BgL_sfunz00_bgl
	{
		header_t header;
		obj_t widening;
		long BgL_arityz00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_predicatezd2ofzd2;
		obj_t BgL_stackzd2allocatorzd2;
		bool_t BgL_topzf3zf3;
		obj_t BgL_thezd2closurezd2;
		obj_t BgL_effectz00;
		obj_t BgL_failsafez00;
		obj_t BgL_argszd2noescapezd2;
		obj_t BgL_propertyz00;
		obj_t BgL_argsz00;
		obj_t BgL_argszd2namezd2;
		obj_t BgL_bodyz00;
		obj_t BgL_classz00;
		obj_t BgL_dssslzd2keywordszd2;
		obj_t BgL_locz00;
		obj_t BgL_optionalsz00;
		obj_t BgL_keysz00;
		obj_t BgL_thezd2closurezd2globalz00;
		obj_t BgL_strengthz00;
		obj_t BgL_stackablez00;
	}              *BgL_sfunz00_bglt;

	typedef struct BgL_svarz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}              *BgL_svarz00_bglt;

	typedef struct BgL_sexitz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_handlerz00;
		bool_t BgL_detachedzf3zf3;
	}               *BgL_sexitz00_bglt;

	typedef struct BgL_svarzf2iinfozf2_bgl
	{
		obj_t BgL_fzd2markzd2;
		obj_t BgL_uzd2markzd2;
		bool_t BgL_kapturedzf3zf3;
		bool_t BgL_celledzf3zf3;
		obj_t BgL_xhdlz00;
	}                      *BgL_svarzf2iinfozf2_bglt;

	typedef struct BgL_sexitzf2iinfozf2_bgl
	{
		obj_t BgL_fzd2markzd2;
		obj_t BgL_uzd2markzd2;
		bool_t BgL_kapturedzf3zf3;
		bool_t BgL_celledzf3zf3;
	}                       *BgL_sexitzf2iinfozf2_bglt;

	typedef struct BgL_sfunzf2iinfozf2_bgl
	{
		obj_t BgL_ownerz00;
		obj_t BgL_freez00;
		obj_t BgL_boundz00;
		obj_t BgL_cfromz00;
		obj_t BgL_ctoz00;
		obj_t BgL_kz00;
		obj_t BgL_kza2za2;
		obj_t BgL_uz00;
		obj_t BgL_cnz00;
		obj_t BgL_ctz00;
		obj_t BgL_kontz00;
		bool_t BgL_gzf3zf3;
		bool_t BgL_forcegzf3zf3;
		obj_t BgL_lz00;
		obj_t BgL_ledz00;
		obj_t BgL_istampz00;
		obj_t BgL_globalz00;
		obj_t BgL_kapturedz00;
		obj_t BgL_tailzd2coercionzd2;
		bool_t BgL_xhdlzf3zf3;
	}                      *BgL_sfunzf2iinfozf2_bglt;


	static obj_t BGl_z62sfunzf2Iinfozd2propertyz42zzintegrate_infoz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2Kza2z82zzintegrate_infoz00(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_svarzf2Iinfozd2locz20zzintegrate_infoz00(BgL_svarz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_svarzf2Iinfozd2kapturedzf3zd2setz12z13zzintegrate_infoz00
		(BgL_svarz00_bglt, bool_t);
	static obj_t BGl_z62lambda1776z62zzintegrate_infoz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1777z62zzintegrate_infoz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62sfunzf2Iinfozd2ownerz42zzintegrate_infoz00(obj_t, obj_t);
	static obj_t
		BGl_z62sfunzf2Iinfozd2stackzd2allocatorz90zzintegrate_infoz00(obj_t, obj_t);
	static obj_t BGl_z62sexitzf2Iinfozd2handlerz42zzintegrate_infoz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_classzd2nilzd2initz12z12zz__objectz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2Kz20zzintegrate_infoz00(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2Lz20zzintegrate_infoz00(BgL_sfunz00_bglt);
	static obj_t BGl_z62lambda1785z62zzintegrate_infoz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1786z62zzintegrate_infoz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2Uz20zzintegrate_infoz00(BgL_sfunz00_bglt);
	static obj_t BGl_z62zc3z04anonymousza31864ze3ze5zzintegrate_infoz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31848ze3ze5zzintegrate_infoz00(obj_t);
	static obj_t
		BGl_z62sfunzf2Iinfozd2globalzd2setz12z82zzintegrate_infoz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62sfunzf2Iinfozd2Ledz42zzintegrate_infoz00(obj_t, obj_t);
	static obj_t BGl_z62sfunzf2Iinfozd2forceGzf3zb1zzintegrate_infoz00(obj_t,
		obj_t);
	extern obj_t BGl_sfunz00zzast_varz00;
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2ownerzd2setz12ze0zzintegrate_infoz00(BgL_sfunz00_bglt,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31687ze3ze5zzintegrate_infoz00(obj_t);
	static obj_t
		BGl_z62svarzf2Iinfozd2celledzf3zd2setz12z71zzintegrate_infoz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2Ledzd2setz12ze0zzintegrate_infoz00(BgL_sfunz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_svarzf2Iinfozd2fzd2markzf2zzintegrate_infoz00(BgL_svarz00_bglt);
	static obj_t
		BGl_z62sexitzf2Iinfozd2fzd2markzd2setz12z50zzintegrate_infoz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2boundz20zzintegrate_infoz00(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2kapturedzd2setz12ze0zzintegrate_infoz00(BgL_sfunz00_bglt,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31778ze3ze5zzintegrate_infoz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sexitzf2Iinfozd2handlerzd2setz12ze0zzintegrate_infoz00
		(BgL_sexitz00_bglt, obj_t);
	extern obj_t BGl_sexitz00zzast_varz00;
	static obj_t BGl_objectzd2initzd2zzintegrate_infoz00();
	static obj_t BGl_z62sfunzf2Iinfozd2keysz42zzintegrate_infoz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2ctoz20zzintegrate_infoz00(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2propertyz20zzintegrate_infoz00(BgL_sfunz00_bglt);
	static obj_t BGl_z62sfunzf2Iinfozd2ownerzd2setz12z82zzintegrate_infoz00(obj_t,
		obj_t, obj_t);
	static BgL_sexitz00_bglt
		BGl_z62makezd2sexitzf2Iinfoz42zzintegrate_infoz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62sfunzf2Iinfozd2propertyzd2setz12z82zzintegrate_infoz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2thezd2closurezf2zzintegrate_infoz00(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_sexitzf2Iinfozd2handlerz20zzintegrate_infoz00(BgL_sexitz00_bglt);
	static obj_t BGl_z62sfunzf2Iinfozd2effectz42zzintegrate_infoz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31500ze3ze5zzintegrate_infoz00(obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62sexitzf2Iinfozd2fzd2markz90zzintegrate_infoz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2Kzd2setz12ze0zzintegrate_infoz00(BgL_sfunz00_bglt,
		obj_t);
	static obj_t BGl_methodzd2initzd2zzintegrate_infoz00();
	static obj_t BGl_z62sfunzf2Iinfozd2bodyz42zzintegrate_infoz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2predicatezd2ofzd2setz12z32zzintegrate_infoz00
		(BgL_sfunz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sexitzf2Iinfozd2detachedzf3zd2setz12z13zzintegrate_infoz00
		(BgL_sexitz00_bglt, bool_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2dssslzd2keywordszf2zzintegrate_infoz00(BgL_sfunz00_bglt);
	static obj_t BGl_z62sfunzf2Iinfozd2topzf3zb1zzintegrate_infoz00(obj_t, obj_t);
	static obj_t BGl_z62sfunzf2Iinfozd2kontzd2setz12z82zzintegrate_infoz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2Gzf3zd2setz12z13zzintegrate_infoz00(BgL_sfunz00_bglt,
		bool_t);
	static BgL_sfunz00_bglt
		BGl_z62sfunzf2Iinfozd2nilz42zzintegrate_infoz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2strengthzd2setz12ze0zzintegrate_infoz00(BgL_sfunz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sexitzf2Iinfozd2celledzf3zd2setz12z13zzintegrate_infoz00
		(BgL_sexitz00_bglt, bool_t);
	static obj_t
		BGl_z62sfunzf2Iinfozd2thezd2closurezd2globalzd2setz12z82zzintegrate_infoz00
		(obj_t, obj_t, obj_t);
	static obj_t BGl_z62sfunzf2Iinfozd2optionalsz42zzintegrate_infoz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_sfunzf2Iinfozf3z01zzintegrate_infoz00(obj_t);
	static obj_t BGl_z62sfunzf2Iinfozd2Cnz42zzintegrate_infoz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2cfromzd2setz12ze0zzintegrate_infoz00(BgL_sfunz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2kontzd2setz12ze0zzintegrate_infoz00(BgL_sfunz00_bglt,
		obj_t);
	static obj_t BGl_z62sfunzf2Iinfozd2Ctz42zzintegrate_infoz00(obj_t, obj_t);
	static obj_t BGl_z62sfunzf2Iinfozd2locz42zzintegrate_infoz00(obj_t, obj_t);
	static BgL_sfunz00_bglt
		BGl_z62makezd2sfunzf2Iinfoz42zzintegrate_infoz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2optionalsz20zzintegrate_infoz00(BgL_sfunz00_bglt);
	static obj_t BGl_z62sfunzf2Iinfozd2cfromz42zzintegrate_infoz00(obj_t, obj_t);
	extern obj_t BGl_svarz00zzast_varz00;
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2Lzd2setz12ze0zzintegrate_infoz00(BgL_sfunz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2effectzd2setz12ze0zzintegrate_infoz00(BgL_sfunz00_bglt,
		obj_t);
	static obj_t BGl_z62sfunzf2Iinfozd2Kz42zzintegrate_infoz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_svarzf2Iinfozd2uzd2markzf2zzintegrate_infoz00(BgL_svarz00_bglt);
	static obj_t BGl_z62sfunzf2Iinfozd2Lz42zzintegrate_infoz00(obj_t, obj_t);
	static obj_t BGl_z62sfunzf2Iinfozd2Uz42zzintegrate_infoz00(obj_t, obj_t);
	static obj_t BGl_z62sfunzf2Iinfozd2kontz42zzintegrate_infoz00(obj_t, obj_t);
	static obj_t BGl_z62sfunzf2Iinfozd2Gzf3zb1zzintegrate_infoz00(obj_t, obj_t);
	static obj_t BGl_z62sfunzf2Iinfozd2argsz42zzintegrate_infoz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_sfunzf2Iinfozd2forceGzf3zd3zzintegrate_infoz00(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2istampz20zzintegrate_infoz00(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2globalz20zzintegrate_infoz00(BgL_sfunz00_bglt);
	static obj_t BGl_z62sfunzf2Iinfozd2cfromzd2setz12z82zzintegrate_infoz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62sfunzf2Iinfozd2Cnzd2setz12z82zzintegrate_infoz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62sfunzf2Iinfozd2thezd2closurez90zzintegrate_infoz00(obj_t,
		obj_t);
	static obj_t BGl_z62sfunzf2Iinfozd2Kza2ze0zzintegrate_infoz00(obj_t, obj_t);
	static obj_t BGl_z62sfunzf2Iinfozd2loczd2setz12z82zzintegrate_infoz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62lambda1418z62zzintegrate_infoz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1419z62zzintegrate_infoz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62sexitzf2Iinfozd2uzd2markz90zzintegrate_infoz00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31366ze3ze5zzintegrate_infoz00(obj_t);
	static obj_t BGl_z62sfunzf2Iinfozf3z63zzintegrate_infoz00(obj_t, obj_t);
	static obj_t
		BGl_z62sfunzf2Iinfozd2topzf3zd2setz12z71zzintegrate_infoz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzintegrate_infoz00();
	static obj_t
		BGl_z62sfunzf2Iinfozd2tailzd2coercionzd2setz12z50zzintegrate_infoz00(obj_t,
		obj_t, obj_t);
	static BgL_sfunz00_bglt BGl_z62lambda1600z62zzintegrate_infoz00(obj_t, obj_t);
	static BgL_sfunz00_bglt BGl_z62lambda1606z62zzintegrate_infoz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2topzf3zd2setz12z13zzintegrate_infoz00(BgL_sfunz00_bglt,
		bool_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sexitzf2Iinfozd2fzd2markzf2zzintegrate_infoz00(BgL_sexitz00_bglt);
	static BgL_sexitz00_bglt BGl_z62lambda1450z62zzintegrate_infoz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31830ze3ze5zzintegrate_infoz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31741ze3ze5zzintegrate_infoz00(obj_t);
	static BgL_svarz00_bglt
		BGl_z62svarzf2Iinfozd2nilz42zzintegrate_infoz00(obj_t);
	BGL_EXPORTED_DECL long
		BGl_sfunzf2Iinfozd2arityz20zzintegrate_infoz00(BgL_sfunz00_bglt);
	static BgL_sexitz00_bglt BGl_z62lambda1463z62zzintegrate_infoz00(obj_t,
		obj_t);
	static BgL_sexitz00_bglt BGl_z62lambda1466z62zzintegrate_infoz00(obj_t,
		obj_t);
	static obj_t BGl_z62lambda1628z62zzintegrate_infoz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1629z62zzintegrate_infoz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31564ze3ze5zzintegrate_infoz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_svarzf2Iinfozf3z01zzintegrate_infoz00(obj_t);
	static obj_t
		BGl_z62sfunzf2Iinfozd2effectzd2setz12z82zzintegrate_infoz00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62sfunzf2Iinfozd2thezd2closurezd2setz12z50zzintegrate_infoz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2predicatezd2ofzf2zzintegrate_infoz00(BgL_sfunz00_bglt);
	static obj_t BGl_z62svarzf2Iinfozd2locz42zzintegrate_infoz00(obj_t, obj_t);
	static BgL_svarz00_bglt
		BGl_z62makezd2svarzf2Iinfoz42zzintegrate_infoz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31581ze3ze5zzintegrate_infoz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31387ze3ze5zzintegrate_infoz00(obj_t);
	static obj_t
		BGl_z62sfunzf2Iinfozd2sidezd2effectzd2setz12z50zzintegrate_infoz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2ownerz20zzintegrate_infoz00(BgL_sfunz00_bglt);
	static obj_t BGl_z62lambda1802z62zzintegrate_infoz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1641z62zzintegrate_infoz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1803z62zzintegrate_infoz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1642z62zzintegrate_infoz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31760ze3ze5zzintegrate_infoz00(obj_t);
	static obj_t
		BGl_z62sfunzf2Iinfozd2kapturedzd2setz12z82zzintegrate_infoz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sexitzf2Iinfozd2kapturedzf3zd2setz12z13zzintegrate_infoz00
		(BgL_sexitz00_bglt, bool_t);
	static obj_t
		BGl_z62sexitzf2Iinfozd2handlerzd2setz12z82zzintegrate_infoz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2loczd2setz12ze0zzintegrate_infoz00(BgL_sfunz00_bglt,
		obj_t);
	static obj_t
		BGl_z62svarzf2Iinfozd2kapturedzf3zd2setz12z71zzintegrate_infoz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62lambda1498z62zzintegrate_infoz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1499z62zzintegrate_infoz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2effectz20zzintegrate_infoz00(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2classzd2setz12ze0zzintegrate_infoz00(BgL_sfunz00_bglt,
		obj_t);
	static obj_t BGl_z62lambda1821z62zzintegrate_infoz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2freez20zzintegrate_infoz00(BgL_sfunz00_bglt);
	static obj_t BGl_z62lambda1822z62zzintegrate_infoz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62sfunzf2Iinfozd2failsafez42zzintegrate_infoz00(obj_t,
		obj_t);
	static obj_t BGl_z62lambda1664z62zzintegrate_infoz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1665z62zzintegrate_infoz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1828z62zzintegrate_infoz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1829z62zzintegrate_infoz00(obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62sfunzf2Iinfozd2dssslzd2keywordszd2setz12z50zzintegrate_infoz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2failsafezd2setz12ze0zzintegrate_infoz00(BgL_sfunz00_bglt,
		obj_t);
	static obj_t BGl_z62lambda1836z62zzintegrate_infoz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1837z62zzintegrate_infoz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2stackzd2allocatorzf2zzintegrate_infoz00
		(BgL_sfunz00_bglt);
	static BgL_sexitz00_bglt
		BGl_z62sexitzf2Iinfozd2nilz42zzintegrate_infoz00(obj_t);
	static obj_t BGl_z62lambda1846z62zzintegrate_infoz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1685z62zzintegrate_infoz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1847z62zzintegrate_infoz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1686z62zzintegrate_infoz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31748ze3ze5zzintegrate_infoz00(obj_t);
	static obj_t BGl_z62svarzf2Iinfozd2loczd2setz12z82zzintegrate_infoz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62lambda1854z62zzintegrate_infoz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1855z62zzintegrate_infoz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1697z62zzintegrate_infoz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31838ze3ze5zzintegrate_infoz00(obj_t);
	static obj_t BGl_z62lambda1698z62zzintegrate_infoz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2Cnzd2setz12ze0zzintegrate_infoz00(BgL_sfunz00_bglt,
		obj_t);
	static obj_t BGl_z62sfunzf2Iinfozd2bodyzd2setz12z82zzintegrate_infoz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62sfunzf2Iinfozd2classzd2setz12z82zzintegrate_infoz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62lambda1862z62zzintegrate_infoz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1863z62zzintegrate_infoz00(obj_t, obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzintegrate_infoz00 = BUNSPEC;
	static obj_t BGl_z62sfunzf2Iinfozd2ctoz42zzintegrate_infoz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_sexitz00_bglt
		BGl_makezd2sexitzf2Iinfoz20zzintegrate_infoz00(obj_t, bool_t, obj_t, obj_t,
		bool_t, bool_t);
	static obj_t BGl_z62sfunzf2Iinfozd2argszd2setz12z82zzintegrate_infoz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62svarzf2Iinfozf3z63zzintegrate_infoz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1871z62zzintegrate_infoz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1872z62zzintegrate_infoz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31856ze3ze5zzintegrate_infoz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2bodyzd2setz12ze0zzintegrate_infoz00(BgL_sfunz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_svarzf2Iinfozd2uzd2markzd2setz12z32zzintegrate_infoz00(BgL_svarz00_bglt,
		obj_t);
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2tailzd2coercionzd2setz12z32zzintegrate_infoz00
		(BgL_sfunz00_bglt, obj_t);
	static obj_t
		BGl_z62sfunzf2Iinfozd2strengthzd2setz12z82zzintegrate_infoz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62sfunzf2Iinfozd2classz42zzintegrate_infoz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sexitzf2Iinfozd2uzd2markzf2zzintegrate_infoz00(BgL_sexitz00_bglt);
	static obj_t
		BGl_z62sexitzf2Iinfozd2celledzf3zd2setz12z71zzintegrate_infoz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31873ze3ze5zzintegrate_infoz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2argszd2setz12ze0zzintegrate_infoz00(BgL_sfunz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2tailzd2coercionzf2zzintegrate_infoz00(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2dssslzd2keywordszd2setz12z32zzintegrate_infoz00
		(BgL_sfunz00_bglt, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzintegrate_infoz00();
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2stackzd2allocatorzd2setz12z32zzintegrate_infoz00
		(BgL_sfunz00_bglt, obj_t);
	static obj_t
		BGl_z62sfunzf2Iinfozd2stackzd2allocatorzd2setz12z50zzintegrate_infoz00
		(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2failsafez20zzintegrate_infoz00(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2sidezd2effectzf2zzintegrate_infoz00(BgL_sfunz00_bglt);
	static obj_t BGl_z62sfunzf2Iinfozd2argszd2namez90zzintegrate_infoz00(obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zzintegrate_infoz00();
	BGL_IMPORT obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t,
		bool_t, bool_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_sfunzf2Iinfozf2zzintegrate_infoz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2keysz20zzintegrate_infoz00(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2argszd2namezf2zzintegrate_infoz00(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_sexitzf2Iinfozf3z01zzintegrate_infoz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31699ze3ze5zzintegrate_infoz00(obj_t);
	static obj_t BGl_z62sfunzf2Iinfozd2strengthz42zzintegrate_infoz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_svarzf2Iinfozd2loczd2setz12ze0zzintegrate_infoz00(BgL_svarz00_bglt,
		obj_t);
	static obj_t
		BGl_z62sfunzf2Iinfozd2dssslzd2keywordsz90zzintegrate_infoz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2Ledz20zzintegrate_infoz00(BgL_sfunz00_bglt);
	static obj_t BGl_z62sfunzf2Iinfozd2Uzd2setz12z82zzintegrate_infoz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2cfromz20zzintegrate_infoz00(BgL_sfunz00_bglt);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2istampzd2setz12ze0zzintegrate_infoz00(BgL_sfunz00_bglt,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31420ze3ze5zzintegrate_infoz00(obj_t);
	static obj_t BGl_z62sfunzf2Iinfozd2predicatezd2ofz90zzintegrate_infoz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2bodyz20zzintegrate_infoz00(BgL_sfunz00_bglt);
	static obj_t BGl_z62sfunzf2Iinfozd2boundz42zzintegrate_infoz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sexitzf2Iinfozd2uzd2markzd2setz12z32zzintegrate_infoz00
		(BgL_sexitz00_bglt, obj_t);
	static obj_t BGl_z62sfunzf2Iinfozd2kapturedz42zzintegrate_infoz00(obj_t,
		obj_t);
	static obj_t BGl_z62svarzf2Iinfozd2celledzf3zb1zzintegrate_infoz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_sfunzf2Iinfozd2topzf3zd3zzintegrate_infoz00(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2forceGzf3zd2setz12z13zzintegrate_infoz00
		(BgL_sfunz00_bglt, bool_t);
	BGL_EXPORTED_DECL obj_t
		BGl_svarzf2Iinfozd2fzd2markzd2setz12z32zzintegrate_infoz00(BgL_svarz00_bglt,
		obj_t);
	static obj_t
		BGl_z62svarzf2Iinfozd2uzd2markzd2setz12z50zzintegrate_infoz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62sfunzf2Iinfozd2Kza2zd2setz12z20zzintegrate_infoz00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62sexitzf2Iinfozd2detachedzf3zd2setz12z71zzintegrate_infoz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_sfunz00_bglt
		BGl_makezd2sfunzf2Iinfoz20zzintegrate_infoz00(long, obj_t, obj_t, obj_t,
		bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, bool_t, bool_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2boundzd2setz12ze0zzintegrate_infoz00(BgL_sfunz00_bglt,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_sexitzf2Iinfozf2zzintegrate_infoz00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t
		BGl_sexitzf2Iinfozd2detachedzf3zd3zzintegrate_infoz00(BgL_sexitz00_bglt);
	static obj_t BGl_z62sfunzf2Iinfozd2ctozd2setz12z82zzintegrate_infoz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62sfunzf2Iinfozd2sidezd2effectz90zzintegrate_infoz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2strengthz20zzintegrate_infoz00(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2kontz20zzintegrate_infoz00(BgL_sfunz00_bglt);
	static obj_t
		BGl_z62sfunzf2Iinfozd2thezd2closurezd2globalz42zzintegrate_infoz00(obj_t,
		obj_t);
	static obj_t BGl_z62svarzf2Iinfozd2fzd2markz90zzintegrate_infoz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2argsz20zzintegrate_infoz00(BgL_sfunz00_bglt);
	static obj_t BGl_z62sfunzf2Iinfozd2Ctzd2setz12z82zzintegrate_infoz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31605ze3ze5zzintegrate_infoz00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31354ze3ze5zzintegrate_infoz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31338ze3ze5zzintegrate_infoz00(obj_t,
		obj_t);
	static obj_t BGl_z62svarzf2Iinfozd2kapturedzf3zb1zzintegrate_infoz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2thezd2closurezd2setz12z32zzintegrate_infoz00
		(BgL_sfunz00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_sfunz00_bglt
		BGl_sfunzf2Iinfozd2nilz20zzintegrate_infoz00();
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2sidezd2effectzd2setz12z32zzintegrate_infoz00
		(BgL_sfunz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2propertyzd2setz12ze0zzintegrate_infoz00(BgL_sfunz00_bglt,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_svarzf2Iinfozf2zzintegrate_infoz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzintegrate_infoz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_z62sfunzf2Iinfozd2boundzd2setz12z82zzintegrate_infoz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2kapturedz20zzintegrate_infoz00(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL bool_t
		BGl_svarzf2Iinfozd2kapturedzf3zd3zzintegrate_infoz00(BgL_svarz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_svarzf2Iinfozd2celledzf3zd2setz12z13zzintegrate_infoz00
		(BgL_svarz00_bglt, bool_t);
	static obj_t BGl_z62sexitzf2Iinfozd2detachedzf3zb1zzintegrate_infoz00(obj_t,
		obj_t);
	static obj_t
		BGl_z62sfunzf2Iinfozd2istampzd2setz12z82zzintegrate_infoz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2locz20zzintegrate_infoz00(BgL_sfunz00_bglt);
	static BgL_svarz00_bglt BGl_z62lambda1332z62zzintegrate_infoz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_svarz00_bglt BGl_z62lambda1336z62zzintegrate_infoz00(obj_t, obj_t);
	static obj_t
		BGl_z62sfunzf2Iinfozd2failsafezd2setz12z82zzintegrate_infoz00(obj_t, obj_t,
		obj_t);
	static BgL_svarz00_bglt BGl_z62lambda1339z62zzintegrate_infoz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sexitzf2Iinfozd2fzd2markzd2setz12z32zzintegrate_infoz00
		(BgL_sexitz00_bglt, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31730ze3ze5zzintegrate_infoz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzintegrate_infoz00();
	static obj_t BGl_z62zc3z04anonymousza31714ze3ze5zzintegrate_infoz00(obj_t);
	static obj_t BGl_z62sexitzf2Iinfozf3z63zzintegrate_infoz00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzintegrate_infoz00();
	static obj_t BGl_z62lambda1352z62zzintegrate_infoz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1353z62zzintegrate_infoz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62sexitzf2Iinfozd2celledzf3zb1zzintegrate_infoz00(obj_t,
		obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzintegrate_infoz00();
	static obj_t BGl_z62zc3z04anonymousza31804ze3ze5zzintegrate_infoz00(obj_t);
	static obj_t
		BGl_z62svarzf2Iinfozd2fzd2markzd2setz12z50zzintegrate_infoz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31375ze3ze5zzintegrate_infoz00(obj_t);
	static obj_t BGl_z62sfunzf2Iinfozd2Kzd2setz12z82zzintegrate_infoz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62lambda1364z62zzintegrate_infoz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2ctozd2setz12ze0zzintegrate_infoz00(BgL_sfunz00_bglt,
		obj_t);
	static obj_t BGl_z62lambda1365z62zzintegrate_infoz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31643ze3ze5zzintegrate_infoz00(obj_t);
	static obj_t BGl_z62sfunzf2Iinfozd2freezd2setz12z82zzintegrate_infoz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31465ze3ze5zzintegrate_infoz00(obj_t,
		obj_t);
	static obj_t BGl_z62lambda1373z62zzintegrate_infoz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1374z62zzintegrate_infoz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1537z62zzintegrate_infoz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1538z62zzintegrate_infoz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31539ze3ze5zzintegrate_infoz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2globalzd2setz12ze0zzintegrate_infoz00(BgL_sfunz00_bglt,
		obj_t);
	static obj_t
		BGl_z62sfunzf2Iinfozd2predicatezd2ofzd2setz12z50zzintegrate_infoz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2freezd2setz12ze0zzintegrate_infoz00(BgL_sfunz00_bglt,
		obj_t);
	static obj_t BGl_z62lambda1385z62zzintegrate_infoz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31823ze3ze5zzintegrate_infoz00(obj_t);
	static obj_t BGl_z62lambda1386z62zzintegrate_infoz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_svarzf2Iinfozd2celledzf3zd3zzintegrate_infoz00(BgL_svarz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2Cnz20zzintegrate_infoz00(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2Ctz20zzintegrate_infoz00(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL bool_t
		BGl_sexitzf2Iinfozd2kapturedzf3zd3zzintegrate_infoz00(BgL_sexitz00_bglt);
	static obj_t
		BGl_z62sfunzf2Iinfozd2tailzd2coercionz90zzintegrate_infoz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_svarz00_bglt
		BGl_makezd2svarzf2Iinfoz20zzintegrate_infoz00(obj_t, obj_t, obj_t, bool_t,
		bool_t);
	static obj_t BGl_z62lambda1712z62zzintegrate_infoz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1713z62zzintegrate_infoz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2Kza2zd2setz12z42zzintegrate_infoz00(BgL_sfunz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2thezd2closurezd2globalzd2setz12ze0zzintegrate_infoz00
		(BgL_sfunz00_bglt, obj_t);
	static obj_t BGl_z62lambda1562z62zzintegrate_infoz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1563z62zzintegrate_infoz00(obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62sexitzf2Iinfozd2uzd2markzd2setz12z50zzintegrate_infoz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62lambda1728z62zzintegrate_infoz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1729z62zzintegrate_infoz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62sfunzf2Iinfozd2Lzd2setz12z82zzintegrate_infoz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62svarzf2Iinfozd2uzd2markz90zzintegrate_infoz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2thezd2closurezd2globalz20zzintegrate_infoz00
		(BgL_sfunz00_bglt);
	static obj_t BGl_z62sfunzf2Iinfozd2Ledzd2setz12z82zzintegrate_infoz00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62sfunzf2Iinfozd2forceGzf3zd2setz12z71zzintegrate_infoz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_sfunzf2Iinfozd2Gzf3zd3zzintegrate_infoz00(BgL_sfunz00_bglt);
	static obj_t BGl_z62lambda1739z62zzintegrate_infoz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1579z62zzintegrate_infoz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2Uzd2setz12ze0zzintegrate_infoz00(BgL_sfunz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2classz20zzintegrate_infoz00(BgL_sfunz00_bglt);
	static obj_t BGl_z62lambda1740z62zzintegrate_infoz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1580z62zzintegrate_infoz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1746z62zzintegrate_infoz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1747z62zzintegrate_infoz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62sfunzf2Iinfozd2freez42zzintegrate_infoz00(obj_t, obj_t);
	static obj_t BGl_z62sfunzf2Iinfozd2istampz42zzintegrate_infoz00(obj_t, obj_t);
	static obj_t BGl_z62sfunzf2Iinfozd2globalz42zzintegrate_infoz00(obj_t, obj_t);
	static obj_t
		BGl_z62sexitzf2Iinfozd2kapturedzf3zd2setz12z71zzintegrate_infoz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62sexitzf2Iinfozd2kapturedzf3zb1zzintegrate_infoz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_sexitzf2Iinfozd2celledzf3zd3zzintegrate_infoz00(BgL_sexitz00_bglt);
	BGL_EXPORTED_DECL BgL_svarz00_bglt
		BGl_svarzf2Iinfozd2nilz20zzintegrate_infoz00();
	static BgL_sfunz00_bglt BGl_z62lambda1594z62zzintegrate_infoz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62sfunzf2Iinfozd2Gzf3zd2setz12z71zzintegrate_infoz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62lambda1758z62zzintegrate_infoz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31666ze3ze5zzintegrate_infoz00(obj_t);
	static obj_t BGl_z62lambda1759z62zzintegrate_infoz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62sfunzf2Iinfozd2arityz42zzintegrate_infoz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Iinfozd2Ctzd2setz12ze0zzintegrate_infoz00(BgL_sfunz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL BgL_sexitz00_bglt
		BGl_sexitzf2Iinfozd2nilz20zzintegrate_infoz00();
	static obj_t __cnst[32];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2030z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1803za7622062z00,
		BGl_z62lambda1803z62zzintegrate_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2031z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1802za7622063z00,
		BGl_z62lambda1802z62zzintegrate_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2032z00zzintegrate_infoz00,
		BgL_bgl_za762za7c3za704anonymo2064za7,
		BGl_z62zc3z04anonymousza31823ze3ze5zzintegrate_infoz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2033z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1822za7622065z00,
		BGl_z62lambda1822z62zzintegrate_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2034z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1821za7622066z00,
		BGl_z62lambda1821z62zzintegrate_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2035z00zzintegrate_infoz00,
		BgL_bgl_za762za7c3za704anonymo2067za7,
		BGl_z62zc3z04anonymousza31830ze3ze5zzintegrate_infoz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2036z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1829za7622068z00,
		BGl_z62lambda1829z62zzintegrate_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2037z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1828za7622069z00,
		BGl_z62lambda1828z62zzintegrate_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2038z00zzintegrate_infoz00,
		BgL_bgl_za762za7c3za704anonymo2070za7,
		BGl_z62zc3z04anonymousza31838ze3ze5zzintegrate_infoz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2039z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1837za7622071z00,
		BGl_z62lambda1837z62zzintegrate_infoz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2kapturedzd2setz12zd2envz32zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72072za7,
		BGl_z62sfunzf2Iinfozd2kapturedzd2setz12z82zzintegrate_infoz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2Kzd2envzf2zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72073za7,
		BGl_z62sfunzf2Iinfozd2Kz42zzintegrate_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2040z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1836za7622074z00,
		BGl_z62lambda1836z62zzintegrate_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2041z00zzintegrate_infoz00,
		BgL_bgl_za762za7c3za704anonymo2075za7,
		BGl_z62zc3z04anonymousza31848ze3ze5zzintegrate_infoz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2042z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1847za7622076z00,
		BGl_z62lambda1847z62zzintegrate_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2043z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1846za7622077z00,
		BGl_z62lambda1846z62zzintegrate_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2044z00zzintegrate_infoz00,
		BgL_bgl_za762za7c3za704anonymo2078za7,
		BGl_z62zc3z04anonymousza31856ze3ze5zzintegrate_infoz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2045z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1855za7622079z00,
		BGl_z62lambda1855z62zzintegrate_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2046z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1854za7622080z00,
		BGl_z62lambda1854z62zzintegrate_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2047z00zzintegrate_infoz00,
		BgL_bgl_za762za7c3za704anonymo2081za7,
		BGl_z62zc3z04anonymousza31864ze3ze5zzintegrate_infoz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2048z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1863za7622082z00,
		BGl_z62lambda1863z62zzintegrate_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2049z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1862za7622083z00,
		BGl_z62lambda1862z62zzintegrate_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2propertyzd2setz12zd2envz32zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72084za7,
		BGl_z62sfunzf2Iinfozd2propertyzd2setz12z82zzintegrate_infoz00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2050z00zzintegrate_infoz00,
		BgL_bgl_za762za7c3za704anonymo2085za7,
		BGl_z62zc3z04anonymousza31873ze3ze5zzintegrate_infoz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2051z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1872za7622086z00,
		BGl_z62lambda1872z62zzintegrate_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2052z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1871za7622087z00,
		BGl_z62lambda1871z62zzintegrate_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2stackzd2allocatorzd2envz20zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72088za7,
		BGl_z62sfunzf2Iinfozd2stackzd2allocatorz90zzintegrate_infoz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2053z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1606za7622089z00,
		BGl_z62lambda1606z62zzintegrate_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2054z00zzintegrate_infoz00,
		BgL_bgl_za762za7c3za704anonymo2090za7,
		BGl_z62zc3z04anonymousza31605ze3ze5zzintegrate_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2tailzd2coercionzd2setz12zd2envze0zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72091za7,
		BGl_z62sfunzf2Iinfozd2tailzd2coercionzd2setz12z50zzintegrate_infoz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2055z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1600za7622092z00,
		BGl_z62lambda1600z62zzintegrate_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2056z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1594za7622093z00,
		BGl_z62lambda1594z62zzintegrate_infoz00, 0L, BUNSPEC, 41);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_svarzf2Iinfozd2kapturedzf3zd2envz01zzintegrate_infoz00,
		BgL_bgl_za762svarza7f2iinfoza72094za7,
		BGl_z62svarzf2Iinfozd2kapturedzf3zb1zzintegrate_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2strengthzd2setz12zd2envz32zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72095za7,
		BGl_z62sfunzf2Iinfozd2strengthzd2setz12z82zzintegrate_infoz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2Lzd2envzf2zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72096za7,
		BGl_z62sfunzf2Iinfozd2Lz42zzintegrate_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2failsafezd2setz12zd2envz32zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72097za7,
		BGl_z62sfunzf2Iinfozd2failsafezd2setz12z82zzintegrate_infoz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2svarzf2Iinfozd2envzf2zzintegrate_infoz00,
		BgL_bgl_za762makeza7d2svarza7f2098za7,
		BGl_z62makezd2svarzf2Iinfoz42zzintegrate_infoz00, 0L, BUNSPEC, 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2optionalszd2envzf2zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72099za7,
		BGl_z62sfunzf2Iinfozd2optionalsz42zzintegrate_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sexitzf2Iinfozf3zd2envzd3zzintegrate_infoz00,
		BgL_bgl_za762sexitza7f2iinfo2100z00,
		BGl_z62sexitzf2Iinfozf3z63zzintegrate_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2kapturedzd2envzf2zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72101za7,
		BGl_z62sfunzf2Iinfozd2kapturedz42zzintegrate_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2topzf3zd2envz01zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72102za7,
		BGl_z62sfunzf2Iinfozd2topzf3zb1zzintegrate_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2thezd2closurezd2envz20zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72103za7,
		BGl_z62sfunzf2Iinfozd2thezd2closurez90zzintegrate_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2Kza2zd2setz12zd2envz90zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72104za7,
		BGl_z62sfunzf2Iinfozd2Kza2zd2setz12z20zzintegrate_infoz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2boundzd2setz12zd2envz32zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72105za7,
		BGl_z62sfunzf2Iinfozd2boundzd2setz12z82zzintegrate_infoz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2ctozd2setz12zd2envz32zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72106za7,
		BGl_z62sfunzf2Iinfozd2ctozd2setz12z82zzintegrate_infoz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sexitzf2Iinfozd2detachedzf3zd2envz01zzintegrate_infoz00,
		BgL_bgl_za762sexitza7f2iinfo2107z00,
		BGl_z62sexitzf2Iinfozd2detachedzf3zb1zzintegrate_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_svarzf2Iinfozd2loczd2envzf2zzintegrate_infoz00,
		BgL_bgl_za762svarza7f2iinfoza72108za7,
		BGl_z62svarzf2Iinfozd2locz42zzintegrate_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2Uzd2setz12zd2envz32zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72109za7,
		BGl_z62sfunzf2Iinfozd2Uzd2setz12z82zzintegrate_infoz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sexitzf2Iinfozd2kapturedzf3zd2envz01zzintegrate_infoz00,
		BgL_bgl_za762sexitza7f2iinfo2110z00,
		BGl_z62sexitzf2Iinfozd2kapturedzf3zb1zzintegrate_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sexitzf2Iinfozd2detachedzf3zd2setz12zd2envzc1zzintegrate_infoz00,
		BgL_bgl_za762sexitza7f2iinfo2111z00,
		BGl_z62sexitzf2Iinfozd2detachedzf3zd2setz12z71zzintegrate_infoz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_svarzf2Iinfozd2celledzf3zd2setz12zd2envzc1zzintegrate_infoz00,
		BgL_bgl_za762svarza7f2iinfoza72112za7,
		BGl_z62svarzf2Iinfozd2celledzf3zd2setz12z71zzintegrate_infoz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2loczd2setz12zd2envz32zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72113za7,
		BGl_z62sfunzf2Iinfozd2loczd2setz12z82zzintegrate_infoz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_svarzf2Iinfozd2fzd2markzd2envz20zzintegrate_infoz00,
		BgL_bgl_za762svarza7f2iinfoza72114za7,
		BGl_z62svarzf2Iinfozd2fzd2markz90zzintegrate_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2arityzd2envzf2zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72115za7,
		BGl_z62sfunzf2Iinfozd2arityz42zzintegrate_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2Ledzd2envzf2zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72116za7,
		BGl_z62sfunzf2Iinfozd2Ledz42zzintegrate_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2Cnzd2envzf2zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72117za7,
		BGl_z62sfunzf2Iinfozd2Cnz42zzintegrate_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2nilzd2envzf2zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72118za7,
		BGl_z62sfunzf2Iinfozd2nilz42zzintegrate_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_svarzf2Iinfozd2uzd2markzd2setz12zd2envze0zzintegrate_infoz00,
		BgL_bgl_za762svarza7f2iinfoza72119za7,
		BGl_z62svarzf2Iinfozd2uzd2markzd2setz12z50zzintegrate_infoz00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1960z00zzintegrate_infoz00,
		BgL_bgl_za762za7c3za704anonymo2120za7,
		BGl_z62zc3z04anonymousza31354ze3ze5zzintegrate_infoz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1961z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1353za7622121z00,
		BGl_z62lambda1353z62zzintegrate_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1962z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1352za7622122z00,
		BGl_z62lambda1352z62zzintegrate_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1963z00zzintegrate_infoz00,
		BgL_bgl_za762za7c3za704anonymo2123za7,
		BGl_z62zc3z04anonymousza31366ze3ze5zzintegrate_infoz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1964z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1365za7622124z00,
		BGl_z62lambda1365z62zzintegrate_infoz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2predicatezd2ofzd2setz12zd2envze0zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72125za7,
		BGl_z62sfunzf2Iinfozd2predicatezd2ofzd2setz12z50zzintegrate_infoz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1965z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1364za7622126z00,
		BGl_z62lambda1364z62zzintegrate_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1966z00zzintegrate_infoz00,
		BgL_bgl_za762za7c3za704anonymo2127za7,
		BGl_z62zc3z04anonymousza31375ze3ze5zzintegrate_infoz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1967z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1374za7622128z00,
		BGl_z62lambda1374z62zzintegrate_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1968z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1373za7622129z00,
		BGl_z62lambda1373z62zzintegrate_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1969z00zzintegrate_infoz00,
		BgL_bgl_za762za7c3za704anonymo2130za7,
		BGl_z62zc3z04anonymousza31387ze3ze5zzintegrate_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2argszd2setz12zd2envz32zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72131za7,
		BGl_z62sfunzf2Iinfozd2argszd2setz12z82zzintegrate_infoz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2Ledzd2setz12zd2envz32zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72132za7,
		BGl_z62sfunzf2Iinfozd2Ledzd2setz12z82zzintegrate_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1970z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1386za7622133z00,
		BGl_z62lambda1386z62zzintegrate_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1971z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1385za7622134z00,
		BGl_z62lambda1385z62zzintegrate_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1972z00zzintegrate_infoz00,
		BgL_bgl_za762za7c3za704anonymo2135za7,
		BGl_z62zc3z04anonymousza31420ze3ze5zzintegrate_infoz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1973z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1419za7622136z00,
		BGl_z62lambda1419z62zzintegrate_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1974z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1418za7622137z00,
		BGl_z62lambda1418z62zzintegrate_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1975z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1339za7622138z00,
		BGl_z62lambda1339z62zzintegrate_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1976z00zzintegrate_infoz00,
		BgL_bgl_za762za7c3za704anonymo2139za7,
		BGl_z62zc3z04anonymousza31338ze3ze5zzintegrate_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1977z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1336za7622140z00,
		BGl_z62lambda1336z62zzintegrate_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1978z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1332za7622141z00,
		BGl_z62lambda1332z62zzintegrate_infoz00, 0L, BUNSPEC, 6);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1979z00zzintegrate_infoz00,
		BgL_bgl_za762za7c3za704anonymo2142za7,
		BGl_z62zc3z04anonymousza31500ze3ze5zzintegrate_infoz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1980z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1499za7622143z00,
		BGl_z62lambda1499z62zzintegrate_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1981z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1498za7622144z00,
		BGl_z62lambda1498z62zzintegrate_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1982z00zzintegrate_infoz00,
		BgL_bgl_za762za7c3za704anonymo2145za7,
		BGl_z62zc3z04anonymousza31539ze3ze5zzintegrate_infoz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1983z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1538za7622146z00,
		BGl_z62lambda1538z62zzintegrate_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1984z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1537za7622147z00,
		BGl_z62lambda1537z62zzintegrate_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1985z00zzintegrate_infoz00,
		BgL_bgl_za762za7c3za704anonymo2148za7,
		BGl_z62zc3z04anonymousza31564ze3ze5zzintegrate_infoz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1986z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1563za7622149z00,
		BGl_z62lambda1563z62zzintegrate_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1987z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1562za7622150z00,
		BGl_z62lambda1562z62zzintegrate_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1988z00zzintegrate_infoz00,
		BgL_bgl_za762za7c3za704anonymo2151za7,
		BGl_z62zc3z04anonymousza31581ze3ze5zzintegrate_infoz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1989z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1580za7622152z00,
		BGl_z62lambda1580z62zzintegrate_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1990z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1579za7622153z00,
		BGl_z62lambda1579z62zzintegrate_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1991z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1466za7622154z00,
		BGl_z62lambda1466z62zzintegrate_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1992z00zzintegrate_infoz00,
		BgL_bgl_za762za7c3za704anonymo2155za7,
		BGl_z62zc3z04anonymousza31465ze3ze5zzintegrate_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1993z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1463za7622156z00,
		BGl_z62lambda1463z62zzintegrate_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1994z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1450za7622157z00,
		BGl_z62lambda1450z62zzintegrate_infoz00, 0L, BUNSPEC, 6);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1995z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1629za7622158z00,
		BGl_z62lambda1629z62zzintegrate_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1996z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1628za7622159z00,
		BGl_z62lambda1628z62zzintegrate_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1997z00zzintegrate_infoz00,
		BgL_bgl_za762za7c3za704anonymo2160za7,
		BGl_z62zc3z04anonymousza31643ze3ze5zzintegrate_infoz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1998z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1642za7622161z00,
		BGl_z62lambda1642z62zzintegrate_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1999z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1641za7622162z00,
		BGl_z62lambda1641z62zzintegrate_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2bodyzd2setz12zd2envz32zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72163za7,
		BGl_z62sfunzf2Iinfozd2bodyzd2setz12z82zzintegrate_infoz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2Ctzd2setz12zd2envz32zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72164za7,
		BGl_z62sfunzf2Iinfozd2Ctzd2setz12z82zzintegrate_infoz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_svarzf2Iinfozd2uzd2markzd2envz20zzintegrate_infoz00,
		BgL_bgl_za762svarza7f2iinfoza72165za7,
		BGl_z62svarzf2Iinfozd2uzd2markz90zzintegrate_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sexitzf2Iinfozd2kapturedzf3zd2setz12zd2envzc1zzintegrate_infoz00,
		BgL_bgl_za762sexitza7f2iinfo2166z00,
		BGl_z62sexitzf2Iinfozd2kapturedzf3zd2setz12z71zzintegrate_infoz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2dssslzd2keywordszd2setz12zd2envze0zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72167za7,
		BGl_z62sfunzf2Iinfozd2dssslzd2keywordszd2setz12z50zzintegrate_infoz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2dssslzd2keywordszd2envz20zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72168za7,
		BGl_z62sfunzf2Iinfozd2dssslzd2keywordsz90zzintegrate_infoz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sexitzf2Iinfozd2handlerzd2envzf2zzintegrate_infoz00,
		BgL_bgl_za762sexitza7f2iinfo2169z00,
		BGl_z62sexitzf2Iinfozd2handlerz42zzintegrate_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2cfromzd2envzf2zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72170za7,
		BGl_z62sfunzf2Iinfozd2cfromz42zzintegrate_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2thezd2closurezd2setz12zd2envze0zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72171za7,
		BGl_z62sfunzf2Iinfozd2thezd2closurezd2setz12z50zzintegrate_infoz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2ownerzd2envzf2zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72172za7,
		BGl_z62sfunzf2Iinfozd2ownerz42zzintegrate_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2thezd2closurezd2globalzd2setz12zd2envz32zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72173za7,
		BGl_z62sfunzf2Iinfozd2thezd2closurezd2globalzd2setz12z82zzintegrate_infoz00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2topzf3zd2setz12zd2envzc1zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72174za7,
		BGl_z62sfunzf2Iinfozd2topzf3zd2setz12z71zzintegrate_infoz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2tailzd2coercionzd2envz20zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72175za7,
		BGl_z62sfunzf2Iinfozd2tailzd2coercionz90zzintegrate_infoz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_svarzf2Iinfozd2loczd2setz12zd2envz32zzintegrate_infoz00,
		BgL_bgl_za762svarza7f2iinfoza72176za7,
		BGl_z62svarzf2Iinfozd2loczd2setz12z82zzintegrate_infoz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2istampzd2setz12zd2envz32zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72177za7,
		BGl_z62sfunzf2Iinfozd2istampzd2setz12z82zzintegrate_infoz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2istampzd2envzf2zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72178za7,
		BGl_z62sfunzf2Iinfozd2istampz42zzintegrate_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_svarzf2Iinfozd2nilzd2envzf2zzintegrate_infoz00,
		BgL_bgl_za762svarza7f2iinfoza72179za7,
		BGl_z62svarzf2Iinfozd2nilz42zzintegrate_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sexitzf2Iinfozd2uzd2markzd2setz12zd2envze0zzintegrate_infoz00,
		BgL_bgl_za762sexitza7f2iinfo2180z00,
		BGl_z62sexitzf2Iinfozd2uzd2markzd2setz12z50zzintegrate_infoz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_svarzf2Iinfozd2fzd2markzd2setz12zd2envze0zzintegrate_infoz00,
		BgL_bgl_za762svarza7f2iinfoza72181za7,
		BGl_z62svarzf2Iinfozd2fzd2markzd2setz12z50zzintegrate_infoz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2Gzf3zd2setz12zd2envzc1zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72182za7,
		BGl_z62sfunzf2Iinfozd2Gzf3zd2setz12z71zzintegrate_infoz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2Cnzd2setz12zd2envz32zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72183za7,
		BGl_z62sfunzf2Iinfozd2Cnzd2setz12z82zzintegrate_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2057z00zzintegrate_infoz00,
		BgL_bgl_string2057za700za7za7i2184za7, "integrate_info", 14);
	      DEFINE_STRING(BGl_string2058z00zzintegrate_infoz00,
		BgL_bgl_string2058za700za7za7i2185za7,
		"_ sfun/Iinfo xhdl? tail-coercion kaptured global istamp Led L forceG? G? kont Ct Cn U K* K cto cfrom bound free owner sexit/Iinfo integrate_info svar/Iinfo xhdl celled? bool kaptured? u-mark obj f-mark ",
		202);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sexitzf2Iinfozd2nilzd2envzf2zzintegrate_infoz00,
		BgL_bgl_za762sexitza7f2iinfo2186z00,
		BGl_z62sexitzf2Iinfozd2nilz42zzintegrate_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2effectzd2envzf2zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72187za7,
		BGl_z62sfunzf2Iinfozd2effectz42zzintegrate_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2failsafezd2envzf2zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72188za7,
		BGl_z62sfunzf2Iinfozd2failsafez42zzintegrate_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2cfromzd2setz12zd2envz32zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72189za7,
		BGl_z62sfunzf2Iinfozd2cfromzd2setz12z82zzintegrate_infoz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2argszd2namezd2envz20zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72190za7,
		BGl_z62sfunzf2Iinfozd2argszd2namez90zzintegrate_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sexitzf2Iinfozd2fzd2markzd2envz20zzintegrate_infoz00,
		BgL_bgl_za762sexitza7f2iinfo2191z00,
		BGl_z62sexitzf2Iinfozd2fzd2markz90zzintegrate_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2Kza2zd2envz50zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72192za7,
		BGl_z62sfunzf2Iinfozd2Kza2ze0zzintegrate_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2Gzf3zd2envz01zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72193za7,
		BGl_z62sfunzf2Iinfozd2Gzf3zb1zzintegrate_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2classzd2envzf2zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72194za7,
		BGl_z62sfunzf2Iinfozd2classz42zzintegrate_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_sfunzf2Iinfozf3zd2envzd3zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72195za7,
		BGl_z62sfunzf2Iinfozf3z63zzintegrate_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2Uzd2envzf2zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72196za7,
		BGl_z62sfunzf2Iinfozd2Uz42zzintegrate_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2globalzd2envzf2zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72197za7,
		BGl_z62sfunzf2Iinfozd2globalz42zzintegrate_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2Ctzd2envzf2zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72198za7,
		BGl_z62sfunzf2Iinfozd2Ctz42zzintegrate_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2sidezd2effectzd2setz12zd2envze0zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72199za7,
		BGl_z62sfunzf2Iinfozd2sidezd2effectzd2setz12z50zzintegrate_infoz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2keyszd2envzf2zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72200za7,
		BGl_z62sfunzf2Iinfozd2keysz42zzintegrate_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2ownerzd2setz12zd2envz32zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72201za7,
		BGl_z62sfunzf2Iinfozd2ownerzd2setz12z82zzintegrate_infoz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sexitzf2Iinfozd2fzd2markzd2setz12zd2envze0zzintegrate_infoz00,
		BgL_bgl_za762sexitza7f2iinfo2202z00,
		BGl_z62sexitzf2Iinfozd2fzd2markzd2setz12z50zzintegrate_infoz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sexitzf2Iinfozd2celledzf3zd2setz12zd2envzc1zzintegrate_infoz00,
		BgL_bgl_za762sexitza7f2iinfo2203z00,
		BGl_z62sexitzf2Iinfozd2celledzf3zd2setz12z71zzintegrate_infoz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_svarzf2Iinfozd2celledzf3zd2envz01zzintegrate_infoz00,
		BgL_bgl_za762svarza7f2iinfoza72204za7,
		BGl_z62svarzf2Iinfozd2celledzf3zb1zzintegrate_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sexitzf2Iinfozd2uzd2markzd2envz20zzintegrate_infoz00,
		BgL_bgl_za762sexitza7f2iinfo2205z00,
		BGl_z62sexitzf2Iinfozd2uzd2markz90zzintegrate_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2propertyzd2envzf2zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72206za7,
		BGl_z62sfunzf2Iinfozd2propertyz42zzintegrate_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2stackzd2allocatorzd2setz12zd2envze0zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72207za7,
		BGl_z62sfunzf2Iinfozd2stackzd2allocatorzd2setz12z50zzintegrate_infoz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2classzd2setz12zd2envz32zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72208za7,
		BGl_z62sfunzf2Iinfozd2classzd2setz12z82zzintegrate_infoz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2sexitzf2Iinfozd2envzf2zzintegrate_infoz00,
		BgL_bgl_za762makeza7d2sexitza72209za7,
		BGl_z62makezd2sexitzf2Iinfoz42zzintegrate_infoz00, 0L, BUNSPEC, 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2Kzd2setz12zd2envz32zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72210za7,
		BGl_z62sfunzf2Iinfozd2Kzd2setz12z82zzintegrate_infoz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2ctozd2envzf2zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72211za7,
		BGl_z62sfunzf2Iinfozd2ctoz42zzintegrate_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2thezd2closurezd2globalzd2envzf2zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72212za7,
		BGl_z62sfunzf2Iinfozd2thezd2closurezd2globalz42zzintegrate_infoz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2kontzd2envzf2zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72213za7,
		BGl_z62sfunzf2Iinfozd2kontz42zzintegrate_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2sidezd2effectzd2envz20zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72214za7,
		BGl_z62sfunzf2Iinfozd2sidezd2effectz90zzintegrate_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_svarzf2Iinfozf3zd2envzd3zzintegrate_infoz00,
		BgL_bgl_za762svarza7f2iinfoza72215za7,
		BGl_z62svarzf2Iinfozf3z63zzintegrate_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sexitzf2Iinfozd2celledzf3zd2envz01zzintegrate_infoz00,
		BgL_bgl_za762sexitza7f2iinfo2216z00,
		BGl_z62sexitzf2Iinfozd2celledzf3zb1zzintegrate_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2bodyzd2envzf2zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72217za7,
		BGl_z62sfunzf2Iinfozd2bodyz42zzintegrate_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_svarzf2Iinfozd2kapturedzf3zd2setz12zd2envzc1zzintegrate_infoz00,
		BgL_bgl_za762svarza7f2iinfoza72218za7,
		BGl_z62svarzf2Iinfozd2kapturedzf3zd2setz12z71zzintegrate_infoz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2argszd2envzf2zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72219za7,
		BGl_z62sfunzf2Iinfozd2argsz42zzintegrate_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2globalzd2setz12zd2envz32zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72220za7,
		BGl_z62sfunzf2Iinfozd2globalzd2setz12z82zzintegrate_infoz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2forceGzf3zd2envz01zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72221za7,
		BGl_z62sfunzf2Iinfozd2forceGzf3zb1zzintegrate_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2boundzd2envzf2zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72222za7,
		BGl_z62sfunzf2Iinfozd2boundz42zzintegrate_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2freezd2envzf2zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72223za7,
		BGl_z62sfunzf2Iinfozd2freez42zzintegrate_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2predicatezd2ofzd2envz20zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72224za7,
		BGl_z62sfunzf2Iinfozd2predicatezd2ofz90zzintegrate_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2kontzd2setz12zd2envz32zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72225za7,
		BGl_z62sfunzf2Iinfozd2kontzd2setz12z82zzintegrate_infoz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2sfunzf2Iinfozd2envzf2zzintegrate_infoz00,
		BgL_bgl_za762makeza7d2sfunza7f2226za7,
		BGl_z62makezd2sfunzf2Iinfoz42zzintegrate_infoz00, 0L, BUNSPEC, 38);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2Lzd2setz12zd2envz32zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72227za7,
		BGl_z62sfunzf2Iinfozd2Lzd2setz12z82zzintegrate_infoz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2forceGzf3zd2setz12zd2envzc1zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72228za7,
		BGl_z62sfunzf2Iinfozd2forceGzf3zd2setz12z71zzintegrate_infoz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2freezd2setz12zd2envz32zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72229za7,
		BGl_z62sfunzf2Iinfozd2freezd2setz12z82zzintegrate_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2000z00zzintegrate_infoz00,
		BgL_bgl_za762za7c3za704anonymo2230za7,
		BGl_z62zc3z04anonymousza31666ze3ze5zzintegrate_infoz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2001z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1665za7622231z00,
		BGl_z62lambda1665z62zzintegrate_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2002z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1664za7622232z00,
		BGl_z62lambda1664z62zzintegrate_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2003z00zzintegrate_infoz00,
		BgL_bgl_za762za7c3za704anonymo2233za7,
		BGl_z62zc3z04anonymousza31687ze3ze5zzintegrate_infoz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2004z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1686za7622234z00,
		BGl_z62lambda1686z62zzintegrate_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2005z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1685za7622235z00,
		BGl_z62lambda1685z62zzintegrate_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2006z00zzintegrate_infoz00,
		BgL_bgl_za762za7c3za704anonymo2236za7,
		BGl_z62zc3z04anonymousza31699ze3ze5zzintegrate_infoz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2007z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1698za7622237z00,
		BGl_z62lambda1698z62zzintegrate_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2008z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1697za7622238z00,
		BGl_z62lambda1697z62zzintegrate_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2009z00zzintegrate_infoz00,
		BgL_bgl_za762za7c3za704anonymo2239za7,
		BGl_z62zc3z04anonymousza31714ze3ze5zzintegrate_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sexitzf2Iinfozd2handlerzd2setz12zd2envz32zzintegrate_infoz00,
		BgL_bgl_za762sexitza7f2iinfo2240z00,
		BGl_z62sexitzf2Iinfozd2handlerzd2setz12z82zzintegrate_infoz00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2010z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1713za7622241z00,
		BGl_z62lambda1713z62zzintegrate_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2011z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1712za7622242z00,
		BGl_z62lambda1712z62zzintegrate_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2012z00zzintegrate_infoz00,
		BgL_bgl_za762za7c3za704anonymo2243za7,
		BGl_z62zc3z04anonymousza31730ze3ze5zzintegrate_infoz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2013z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1729za7622244z00,
		BGl_z62lambda1729z62zzintegrate_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2014z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1728za7622245z00,
		BGl_z62lambda1728z62zzintegrate_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2015z00zzintegrate_infoz00,
		BgL_bgl_za762za7c3za704anonymo2246za7,
		BGl_z62zc3z04anonymousza31741ze3ze5zzintegrate_infoz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2016z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1740za7622247z00,
		BGl_z62lambda1740z62zzintegrate_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2017z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1739za7622248z00,
		BGl_z62lambda1739z62zzintegrate_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2018z00zzintegrate_infoz00,
		BgL_bgl_za762za7c3za704anonymo2249za7,
		BGl_z62zc3z04anonymousza31748ze3ze5zzintegrate_infoz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2019z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1747za7622250z00,
		BGl_z62lambda1747z62zzintegrate_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2020z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1746za7622251z00,
		BGl_z62lambda1746z62zzintegrate_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2021z00zzintegrate_infoz00,
		BgL_bgl_za762za7c3za704anonymo2252za7,
		BGl_z62zc3z04anonymousza31760ze3ze5zzintegrate_infoz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2022z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1759za7622253z00,
		BGl_z62lambda1759z62zzintegrate_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2023z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1758za7622254z00,
		BGl_z62lambda1758z62zzintegrate_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2024z00zzintegrate_infoz00,
		BgL_bgl_za762za7c3za704anonymo2255za7,
		BGl_z62zc3z04anonymousza31778ze3ze5zzintegrate_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2effectzd2setz12zd2envz32zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72256za7,
		BGl_z62sfunzf2Iinfozd2effectzd2setz12z82zzintegrate_infoz00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2025z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1777za7622257z00,
		BGl_z62lambda1777z62zzintegrate_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2026z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1776za7622258z00,
		BGl_z62lambda1776z62zzintegrate_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2027z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1786za7622259z00,
		BGl_z62lambda1786z62zzintegrate_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2028z00zzintegrate_infoz00,
		BgL_bgl_za762lambda1785za7622260z00,
		BGl_z62lambda1785z62zzintegrate_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2029z00zzintegrate_infoz00,
		BgL_bgl_za762za7c3za704anonymo2261za7,
		BGl_z62zc3z04anonymousza31804ze3ze5zzintegrate_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2strengthzd2envzf2zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72262za7,
		BGl_z62sfunzf2Iinfozd2strengthz42zzintegrate_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Iinfozd2loczd2envzf2zzintegrate_infoz00,
		BgL_bgl_za762sfunza7f2iinfoza72263za7,
		BGl_z62sfunzf2Iinfozd2locz42zzintegrate_infoz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzintegrate_infoz00));
		     ADD_ROOT((void *) (&BGl_sfunzf2Iinfozf2zzintegrate_infoz00));
		     ADD_ROOT((void *) (&BGl_sexitzf2Iinfozf2zzintegrate_infoz00));
		     ADD_ROOT((void *) (&BGl_svarzf2Iinfozf2zzintegrate_infoz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzintegrate_infoz00(long
		BgL_checksumz00_3411, char *BgL_fromz00_3412)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzintegrate_infoz00))
				{
					BGl_requirezd2initializa7ationz75zzintegrate_infoz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzintegrate_infoz00();
					BGl_libraryzd2moduleszd2initz00zzintegrate_infoz00();
					BGl_cnstzd2initzd2zzintegrate_infoz00();
					BGl_importedzd2moduleszd2initz00zzintegrate_infoz00();
					BGl_objectzd2initzd2zzintegrate_infoz00();
					return BGl_toplevelzd2initzd2zzintegrate_infoz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzintegrate_infoz00()
	{
		{	/* Integrate/iinfo.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"integrate_info");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"integrate_info");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"integrate_info");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"integrate_info");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"integrate_info");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"integrate_info");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzintegrate_infoz00()
	{
		{	/* Integrate/iinfo.scm 15 */
			{	/* Integrate/iinfo.scm 15 */
				obj_t BgL_cportz00_3235;

				{	/* Integrate/iinfo.scm 15 */
					obj_t BgL_stringz00_3243;

					BgL_stringz00_3243 = BGl_string2058z00zzintegrate_infoz00;
					{	/* Integrate/iinfo.scm 15 */
						obj_t BgL_startz00_3244;

						BgL_startz00_3244 = BINT(((long) 0));
						{	/* Integrate/iinfo.scm 15 */
							obj_t BgL_endz00_3245;

							BgL_endz00_3245 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_3243)));
							{	/* Integrate/iinfo.scm 15 */

								BgL_cportz00_3235 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_3243, BgL_startz00_3244, BgL_endz00_3245);
				}}}}
				{
					long BgL_iz00_3236;

					BgL_iz00_3236 = ((long) 31);
				BgL_loopz00_3237:
					if ((BgL_iz00_3236 == ((long) -1)))
						{	/* Integrate/iinfo.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Integrate/iinfo.scm 15 */
							{	/* Integrate/iinfo.scm 15 */
								obj_t BgL_arg2060z00_3239;

								{	/* Integrate/iinfo.scm 15 */

									{	/* Integrate/iinfo.scm 15 */
										obj_t BgL_locationz00_3241;

										BgL_locationz00_3241 = BBOOL(((bool_t) 0));
										{	/* Integrate/iinfo.scm 15 */

											BgL_arg2060z00_3239 =
												BGl_readz00zz__readerz00(BgL_cportz00_3235,
												BgL_locationz00_3241);
										}
									}
								}
								{	/* Integrate/iinfo.scm 15 */
									int BgL_tmpz00_3437;

									BgL_tmpz00_3437 = (int) (BgL_iz00_3236);
									CNST_TABLE_SET(BgL_tmpz00_3437, BgL_arg2060z00_3239);
							}}
							{	/* Integrate/iinfo.scm 15 */
								int BgL_auxz00_3242;

								BgL_auxz00_3242 = (int) ((BgL_iz00_3236 - ((long) 1)));
								{
									long BgL_iz00_3442;

									BgL_iz00_3442 = (long) (BgL_auxz00_3242);
									BgL_iz00_3236 = BgL_iz00_3442;
									goto BgL_loopz00_3237;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzintegrate_infoz00()
	{
		{	/* Integrate/iinfo.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzintegrate_infoz00()
	{
		{	/* Integrate/iinfo.scm 15 */
			return BUNSPEC;
		}

	}



/* make-svar/Iinfo */
	BGL_EXPORTED_DEF BgL_svarz00_bglt
		BGl_makezd2svarzf2Iinfoz20zzintegrate_infoz00(obj_t BgL_loc1210z00_3,
		obj_t BgL_fzd2mark1211zd2_4, obj_t BgL_uzd2mark1212zd2_5,
		bool_t BgL_kapturedzf31213zf3_6, bool_t BgL_celledzf31214zf3_7)
	{
		{	/* Integrate/iinfo.sch 129 */
			{	/* Integrate/iinfo.sch 129 */
				BgL_svarz00_bglt BgL_new1174z00_3248;

				{	/* Integrate/iinfo.sch 129 */
					BgL_svarz00_bglt BgL_tmp1172z00_3249;
					BgL_svarzf2iinfozf2_bglt BgL_wide1173z00_3250;

					{
						BgL_svarz00_bglt BgL_auxz00_3445;

						{	/* Integrate/iinfo.sch 129 */
							BgL_svarz00_bglt BgL_new1171z00_3251;

							BgL_new1171z00_3251 =
								((BgL_svarz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_svarz00_bgl))));
							{	/* Integrate/iinfo.sch 129 */
								long BgL_arg1317z00_3252;

								{	/* Integrate/iinfo.sch 129 */
									long BgL_res1934z00_3253;

									BgL_res1934z00_3253 =
										BGL_CLASS_INDEX(BGl_svarz00zzast_varz00);
									BgL_arg1317z00_3252 = BgL_res1934z00_3253;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1171z00_3251),
									BgL_arg1317z00_3252);
							}
							{	/* Integrate/iinfo.sch 129 */
								BgL_objectz00_bglt BgL_tmpz00_3450;

								BgL_tmpz00_3450 = ((BgL_objectz00_bglt) BgL_new1171z00_3251);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3450, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1171z00_3251);
							BgL_auxz00_3445 = BgL_new1171z00_3251;
						}
						BgL_tmp1172z00_3249 = ((BgL_svarz00_bglt) BgL_auxz00_3445);
					}
					BgL_wide1173z00_3250 =
						((BgL_svarzf2iinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_svarzf2iinfozf2_bgl))));
					{	/* Integrate/iinfo.sch 129 */
						obj_t BgL_auxz00_3458;
						BgL_objectz00_bglt BgL_tmpz00_3456;

						BgL_auxz00_3458 = ((obj_t) BgL_wide1173z00_3250);
						BgL_tmpz00_3456 = ((BgL_objectz00_bglt) BgL_tmp1172z00_3249);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3456, BgL_auxz00_3458);
					}
					((BgL_objectz00_bglt) BgL_tmp1172z00_3249);
					{	/* Integrate/iinfo.sch 129 */
						long BgL_arg1316z00_3254;

						{	/* Integrate/iinfo.sch 129 */
							long BgL_res1935z00_3255;

							BgL_res1935z00_3255 =
								BGL_CLASS_INDEX(BGl_svarzf2Iinfozf2zzintegrate_infoz00);
							BgL_arg1316z00_3254 = BgL_res1935z00_3255;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1172z00_3249), BgL_arg1316z00_3254);
					}
					BgL_new1174z00_3248 = ((BgL_svarz00_bglt) BgL_tmp1172z00_3249);
				}
				((((BgL_svarz00_bglt) COBJECT(
								((BgL_svarz00_bglt) BgL_new1174z00_3248)))->BgL_locz00) =
					((obj_t) BgL_loc1210z00_3), BUNSPEC);
				{
					BgL_svarzf2iinfozf2_bglt BgL_auxz00_3468;

					{
						obj_t BgL_auxz00_3469;

						{	/* Integrate/iinfo.sch 129 */
							BgL_objectz00_bglt BgL_tmpz00_3470;

							BgL_tmpz00_3470 = ((BgL_objectz00_bglt) BgL_new1174z00_3248);
							BgL_auxz00_3469 = BGL_OBJECT_WIDENING(BgL_tmpz00_3470);
						}
						BgL_auxz00_3468 = ((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_3469);
					}
					((((BgL_svarzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3468))->
							BgL_fzd2markzd2) = ((obj_t) BgL_fzd2mark1211zd2_4), BUNSPEC);
				}
				{
					BgL_svarzf2iinfozf2_bglt BgL_auxz00_3475;

					{
						obj_t BgL_auxz00_3476;

						{	/* Integrate/iinfo.sch 129 */
							BgL_objectz00_bglt BgL_tmpz00_3477;

							BgL_tmpz00_3477 = ((BgL_objectz00_bglt) BgL_new1174z00_3248);
							BgL_auxz00_3476 = BGL_OBJECT_WIDENING(BgL_tmpz00_3477);
						}
						BgL_auxz00_3475 = ((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_3476);
					}
					((((BgL_svarzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3475))->
							BgL_uzd2markzd2) = ((obj_t) BgL_uzd2mark1212zd2_5), BUNSPEC);
				}
				{
					BgL_svarzf2iinfozf2_bglt BgL_auxz00_3482;

					{
						obj_t BgL_auxz00_3483;

						{	/* Integrate/iinfo.sch 129 */
							BgL_objectz00_bglt BgL_tmpz00_3484;

							BgL_tmpz00_3484 = ((BgL_objectz00_bglt) BgL_new1174z00_3248);
							BgL_auxz00_3483 = BGL_OBJECT_WIDENING(BgL_tmpz00_3484);
						}
						BgL_auxz00_3482 = ((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_3483);
					}
					((((BgL_svarzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3482))->
							BgL_kapturedzf3zf3) =
						((bool_t) BgL_kapturedzf31213zf3_6), BUNSPEC);
				}
				{
					BgL_svarzf2iinfozf2_bglt BgL_auxz00_3489;

					{
						obj_t BgL_auxz00_3490;

						{	/* Integrate/iinfo.sch 129 */
							BgL_objectz00_bglt BgL_tmpz00_3491;

							BgL_tmpz00_3491 = ((BgL_objectz00_bglt) BgL_new1174z00_3248);
							BgL_auxz00_3490 = BGL_OBJECT_WIDENING(BgL_tmpz00_3491);
						}
						BgL_auxz00_3489 = ((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_3490);
					}
					((((BgL_svarzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3489))->
							BgL_celledzf3zf3) = ((bool_t) BgL_celledzf31214zf3_7), BUNSPEC);
				}
				{
					BgL_svarzf2iinfozf2_bglt BgL_auxz00_3496;

					{
						obj_t BgL_auxz00_3497;

						{	/* Integrate/iinfo.sch 129 */
							BgL_objectz00_bglt BgL_tmpz00_3498;

							BgL_tmpz00_3498 = ((BgL_objectz00_bglt) BgL_new1174z00_3248);
							BgL_auxz00_3497 = BGL_OBJECT_WIDENING(BgL_tmpz00_3498);
						}
						BgL_auxz00_3496 = ((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_3497);
					}
					((((BgL_svarzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3496))->
							BgL_xhdlz00) = ((obj_t) BFALSE), BUNSPEC);
				}
				return BgL_new1174z00_3248;
			}
		}

	}



/* &make-svar/Iinfo */
	BgL_svarz00_bglt BGl_z62makezd2svarzf2Iinfoz42zzintegrate_infoz00(obj_t
		BgL_envz00_2598, obj_t BgL_loc1210z00_2599, obj_t BgL_fzd2mark1211zd2_2600,
		obj_t BgL_uzd2mark1212zd2_2601, obj_t BgL_kapturedzf31213zf3_2602,
		obj_t BgL_celledzf31214zf3_2603)
	{
		{	/* Integrate/iinfo.sch 129 */
			return
				BGl_makezd2svarzf2Iinfoz20zzintegrate_infoz00(BgL_loc1210z00_2599,
				BgL_fzd2mark1211zd2_2600, BgL_uzd2mark1212zd2_2601,
				CBOOL(BgL_kapturedzf31213zf3_2602), CBOOL(BgL_celledzf31214zf3_2603));
		}

	}



/* svar/Iinfo? */
	BGL_EXPORTED_DEF bool_t BGl_svarzf2Iinfozf3z01zzintegrate_infoz00(obj_t
		BgL_objz00_8)
	{
		{	/* Integrate/iinfo.sch 130 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_8,
				BGl_svarzf2Iinfozf2zzintegrate_infoz00);
		}

	}



/* &svar/Iinfo? */
	obj_t BGl_z62svarzf2Iinfozf3z63zzintegrate_infoz00(obj_t BgL_envz00_2604,
		obj_t BgL_objz00_2605)
	{
		{	/* Integrate/iinfo.sch 130 */
			return BBOOL(BGl_svarzf2Iinfozf3z01zzintegrate_infoz00(BgL_objz00_2605));
		}

	}



/* svar/Iinfo-nil */
	BGL_EXPORTED_DEF BgL_svarz00_bglt
		BGl_svarzf2Iinfozd2nilz20zzintegrate_infoz00()
	{
		{	/* Integrate/iinfo.sch 131 */
			{	/* Integrate/iinfo.sch 131 */
				obj_t BgL_classz00_2241;

				BgL_classz00_2241 = BGl_svarzf2Iinfozf2zzintegrate_infoz00;
				{	/* Integrate/iinfo.sch 131 */
					obj_t BgL__ortest_1106z00_2242;

					BgL__ortest_1106z00_2242 = BGL_CLASS_NIL(BgL_classz00_2241);
					if (CBOOL(BgL__ortest_1106z00_2242))
						{	/* Integrate/iinfo.sch 131 */
							return ((BgL_svarz00_bglt) BgL__ortest_1106z00_2242);
						}
					else
						{	/* Integrate/iinfo.sch 131 */
							return
								((BgL_svarz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_2241));
						}
				}
			}
		}

	}



/* &svar/Iinfo-nil */
	BgL_svarz00_bglt BGl_z62svarzf2Iinfozd2nilz42zzintegrate_infoz00(obj_t
		BgL_envz00_2606)
	{
		{	/* Integrate/iinfo.sch 131 */
			return BGl_svarzf2Iinfozd2nilz20zzintegrate_infoz00();
		}

	}



/* svar/Iinfo-celled? */
	BGL_EXPORTED_DEF bool_t
		BGl_svarzf2Iinfozd2celledzf3zd3zzintegrate_infoz00(BgL_svarz00_bglt
		BgL_oz00_9)
	{
		{	/* Integrate/iinfo.sch 132 */
			{
				BgL_svarzf2iinfozf2_bglt BgL_auxz00_3516;

				{
					obj_t BgL_auxz00_3517;

					{	/* Integrate/iinfo.sch 132 */
						BgL_objectz00_bglt BgL_tmpz00_3518;

						BgL_tmpz00_3518 = ((BgL_objectz00_bglt) BgL_oz00_9);
						BgL_auxz00_3517 = BGL_OBJECT_WIDENING(BgL_tmpz00_3518);
					}
					BgL_auxz00_3516 = ((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_3517);
				}
				return
					(((BgL_svarzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3516))->
					BgL_celledzf3zf3);
			}
		}

	}



/* &svar/Iinfo-celled? */
	obj_t BGl_z62svarzf2Iinfozd2celledzf3zb1zzintegrate_infoz00(obj_t
		BgL_envz00_2607, obj_t BgL_oz00_2608)
	{
		{	/* Integrate/iinfo.sch 132 */
			return
				BBOOL(BGl_svarzf2Iinfozd2celledzf3zd3zzintegrate_infoz00(
					((BgL_svarz00_bglt) BgL_oz00_2608)));
		}

	}



/* svar/Iinfo-celled?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_svarzf2Iinfozd2celledzf3zd2setz12z13zzintegrate_infoz00(BgL_svarz00_bglt
		BgL_oz00_10, bool_t BgL_vz00_11)
	{
		{	/* Integrate/iinfo.sch 133 */
			{
				BgL_svarzf2iinfozf2_bglt BgL_auxz00_3526;

				{
					obj_t BgL_auxz00_3527;

					{	/* Integrate/iinfo.sch 133 */
						BgL_objectz00_bglt BgL_tmpz00_3528;

						BgL_tmpz00_3528 = ((BgL_objectz00_bglt) BgL_oz00_10);
						BgL_auxz00_3527 = BGL_OBJECT_WIDENING(BgL_tmpz00_3528);
					}
					BgL_auxz00_3526 = ((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_3527);
				}
				return
					((((BgL_svarzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3526))->
						BgL_celledzf3zf3) = ((bool_t) BgL_vz00_11), BUNSPEC);
			}
		}

	}



/* &svar/Iinfo-celled?-set! */
	obj_t BGl_z62svarzf2Iinfozd2celledzf3zd2setz12z71zzintegrate_infoz00(obj_t
		BgL_envz00_2609, obj_t BgL_oz00_2610, obj_t BgL_vz00_2611)
	{
		{	/* Integrate/iinfo.sch 133 */
			return
				BGl_svarzf2Iinfozd2celledzf3zd2setz12z13zzintegrate_infoz00(
				((BgL_svarz00_bglt) BgL_oz00_2610), CBOOL(BgL_vz00_2611));
		}

	}



/* svar/Iinfo-kaptured? */
	BGL_EXPORTED_DEF bool_t
		BGl_svarzf2Iinfozd2kapturedzf3zd3zzintegrate_infoz00(BgL_svarz00_bglt
		BgL_oz00_12)
	{
		{	/* Integrate/iinfo.sch 134 */
			{
				BgL_svarzf2iinfozf2_bglt BgL_auxz00_3536;

				{
					obj_t BgL_auxz00_3537;

					{	/* Integrate/iinfo.sch 134 */
						BgL_objectz00_bglt BgL_tmpz00_3538;

						BgL_tmpz00_3538 = ((BgL_objectz00_bglt) BgL_oz00_12);
						BgL_auxz00_3537 = BGL_OBJECT_WIDENING(BgL_tmpz00_3538);
					}
					BgL_auxz00_3536 = ((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_3537);
				}
				return
					(((BgL_svarzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3536))->
					BgL_kapturedzf3zf3);
			}
		}

	}



/* &svar/Iinfo-kaptured? */
	obj_t BGl_z62svarzf2Iinfozd2kapturedzf3zb1zzintegrate_infoz00(obj_t
		BgL_envz00_2612, obj_t BgL_oz00_2613)
	{
		{	/* Integrate/iinfo.sch 134 */
			return
				BBOOL(BGl_svarzf2Iinfozd2kapturedzf3zd3zzintegrate_infoz00(
					((BgL_svarz00_bglt) BgL_oz00_2613)));
		}

	}



/* svar/Iinfo-kaptured?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_svarzf2Iinfozd2kapturedzf3zd2setz12z13zzintegrate_infoz00
		(BgL_svarz00_bglt BgL_oz00_13, bool_t BgL_vz00_14)
	{
		{	/* Integrate/iinfo.sch 135 */
			{
				BgL_svarzf2iinfozf2_bglt BgL_auxz00_3546;

				{
					obj_t BgL_auxz00_3547;

					{	/* Integrate/iinfo.sch 135 */
						BgL_objectz00_bglt BgL_tmpz00_3548;

						BgL_tmpz00_3548 = ((BgL_objectz00_bglt) BgL_oz00_13);
						BgL_auxz00_3547 = BGL_OBJECT_WIDENING(BgL_tmpz00_3548);
					}
					BgL_auxz00_3546 = ((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_3547);
				}
				return
					((((BgL_svarzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3546))->
						BgL_kapturedzf3zf3) = ((bool_t) BgL_vz00_14), BUNSPEC);
			}
		}

	}



/* &svar/Iinfo-kaptured?-set! */
	obj_t BGl_z62svarzf2Iinfozd2kapturedzf3zd2setz12z71zzintegrate_infoz00(obj_t
		BgL_envz00_2614, obj_t BgL_oz00_2615, obj_t BgL_vz00_2616)
	{
		{	/* Integrate/iinfo.sch 135 */
			return
				BGl_svarzf2Iinfozd2kapturedzf3zd2setz12z13zzintegrate_infoz00(
				((BgL_svarz00_bglt) BgL_oz00_2615), CBOOL(BgL_vz00_2616));
		}

	}



/* svar/Iinfo-u-mark */
	BGL_EXPORTED_DEF obj_t
		BGl_svarzf2Iinfozd2uzd2markzf2zzintegrate_infoz00(BgL_svarz00_bglt
		BgL_oz00_15)
	{
		{	/* Integrate/iinfo.sch 136 */
			{
				BgL_svarzf2iinfozf2_bglt BgL_auxz00_3556;

				{
					obj_t BgL_auxz00_3557;

					{	/* Integrate/iinfo.sch 136 */
						BgL_objectz00_bglt BgL_tmpz00_3558;

						BgL_tmpz00_3558 = ((BgL_objectz00_bglt) BgL_oz00_15);
						BgL_auxz00_3557 = BGL_OBJECT_WIDENING(BgL_tmpz00_3558);
					}
					BgL_auxz00_3556 = ((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_3557);
				}
				return
					(((BgL_svarzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3556))->
					BgL_uzd2markzd2);
			}
		}

	}



/* &svar/Iinfo-u-mark */
	obj_t BGl_z62svarzf2Iinfozd2uzd2markz90zzintegrate_infoz00(obj_t
		BgL_envz00_2617, obj_t BgL_oz00_2618)
	{
		{	/* Integrate/iinfo.sch 136 */
			return
				BGl_svarzf2Iinfozd2uzd2markzf2zzintegrate_infoz00(
				((BgL_svarz00_bglt) BgL_oz00_2618));
		}

	}



/* svar/Iinfo-u-mark-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_svarzf2Iinfozd2uzd2markzd2setz12z32zzintegrate_infoz00(BgL_svarz00_bglt
		BgL_oz00_16, obj_t BgL_vz00_17)
	{
		{	/* Integrate/iinfo.sch 137 */
			{
				BgL_svarzf2iinfozf2_bglt BgL_auxz00_3565;

				{
					obj_t BgL_auxz00_3566;

					{	/* Integrate/iinfo.sch 137 */
						BgL_objectz00_bglt BgL_tmpz00_3567;

						BgL_tmpz00_3567 = ((BgL_objectz00_bglt) BgL_oz00_16);
						BgL_auxz00_3566 = BGL_OBJECT_WIDENING(BgL_tmpz00_3567);
					}
					BgL_auxz00_3565 = ((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_3566);
				}
				return
					((((BgL_svarzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3565))->
						BgL_uzd2markzd2) = ((obj_t) BgL_vz00_17), BUNSPEC);
			}
		}

	}



/* &svar/Iinfo-u-mark-set! */
	obj_t BGl_z62svarzf2Iinfozd2uzd2markzd2setz12z50zzintegrate_infoz00(obj_t
		BgL_envz00_2619, obj_t BgL_oz00_2620, obj_t BgL_vz00_2621)
	{
		{	/* Integrate/iinfo.sch 137 */
			return
				BGl_svarzf2Iinfozd2uzd2markzd2setz12z32zzintegrate_infoz00(
				((BgL_svarz00_bglt) BgL_oz00_2620), BgL_vz00_2621);
		}

	}



/* svar/Iinfo-f-mark */
	BGL_EXPORTED_DEF obj_t
		BGl_svarzf2Iinfozd2fzd2markzf2zzintegrate_infoz00(BgL_svarz00_bglt
		BgL_oz00_18)
	{
		{	/* Integrate/iinfo.sch 138 */
			{
				BgL_svarzf2iinfozf2_bglt BgL_auxz00_3574;

				{
					obj_t BgL_auxz00_3575;

					{	/* Integrate/iinfo.sch 138 */
						BgL_objectz00_bglt BgL_tmpz00_3576;

						BgL_tmpz00_3576 = ((BgL_objectz00_bglt) BgL_oz00_18);
						BgL_auxz00_3575 = BGL_OBJECT_WIDENING(BgL_tmpz00_3576);
					}
					BgL_auxz00_3574 = ((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_3575);
				}
				return
					(((BgL_svarzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3574))->
					BgL_fzd2markzd2);
			}
		}

	}



/* &svar/Iinfo-f-mark */
	obj_t BGl_z62svarzf2Iinfozd2fzd2markz90zzintegrate_infoz00(obj_t
		BgL_envz00_2622, obj_t BgL_oz00_2623)
	{
		{	/* Integrate/iinfo.sch 138 */
			return
				BGl_svarzf2Iinfozd2fzd2markzf2zzintegrate_infoz00(
				((BgL_svarz00_bglt) BgL_oz00_2623));
		}

	}



/* svar/Iinfo-f-mark-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_svarzf2Iinfozd2fzd2markzd2setz12z32zzintegrate_infoz00(BgL_svarz00_bglt
		BgL_oz00_19, obj_t BgL_vz00_20)
	{
		{	/* Integrate/iinfo.sch 139 */
			{
				BgL_svarzf2iinfozf2_bglt BgL_auxz00_3583;

				{
					obj_t BgL_auxz00_3584;

					{	/* Integrate/iinfo.sch 139 */
						BgL_objectz00_bglt BgL_tmpz00_3585;

						BgL_tmpz00_3585 = ((BgL_objectz00_bglt) BgL_oz00_19);
						BgL_auxz00_3584 = BGL_OBJECT_WIDENING(BgL_tmpz00_3585);
					}
					BgL_auxz00_3583 = ((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_3584);
				}
				return
					((((BgL_svarzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3583))->
						BgL_fzd2markzd2) = ((obj_t) BgL_vz00_20), BUNSPEC);
			}
		}

	}



/* &svar/Iinfo-f-mark-set! */
	obj_t BGl_z62svarzf2Iinfozd2fzd2markzd2setz12z50zzintegrate_infoz00(obj_t
		BgL_envz00_2624, obj_t BgL_oz00_2625, obj_t BgL_vz00_2626)
	{
		{	/* Integrate/iinfo.sch 139 */
			return
				BGl_svarzf2Iinfozd2fzd2markzd2setz12z32zzintegrate_infoz00(
				((BgL_svarz00_bglt) BgL_oz00_2625), BgL_vz00_2626);
		}

	}



/* svar/Iinfo-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_svarzf2Iinfozd2locz20zzintegrate_infoz00(BgL_svarz00_bglt BgL_oz00_21)
	{
		{	/* Integrate/iinfo.sch 140 */
			return
				(((BgL_svarz00_bglt) COBJECT(
						((BgL_svarz00_bglt) BgL_oz00_21)))->BgL_locz00);
		}

	}



/* &svar/Iinfo-loc */
	obj_t BGl_z62svarzf2Iinfozd2locz42zzintegrate_infoz00(obj_t BgL_envz00_2627,
		obj_t BgL_oz00_2628)
	{
		{	/* Integrate/iinfo.sch 140 */
			return
				BGl_svarzf2Iinfozd2locz20zzintegrate_infoz00(
				((BgL_svarz00_bglt) BgL_oz00_2628));
		}

	}



/* svar/Iinfo-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_svarzf2Iinfozd2loczd2setz12ze0zzintegrate_infoz00(BgL_svarz00_bglt
		BgL_oz00_22, obj_t BgL_vz00_23)
	{
		{	/* Integrate/iinfo.sch 141 */
			return
				((((BgL_svarz00_bglt) COBJECT(
							((BgL_svarz00_bglt) BgL_oz00_22)))->BgL_locz00) =
				((obj_t) BgL_vz00_23), BUNSPEC);
		}

	}



/* &svar/Iinfo-loc-set! */
	obj_t BGl_z62svarzf2Iinfozd2loczd2setz12z82zzintegrate_infoz00(obj_t
		BgL_envz00_2629, obj_t BgL_oz00_2630, obj_t BgL_vz00_2631)
	{
		{	/* Integrate/iinfo.sch 141 */
			return
				BGl_svarzf2Iinfozd2loczd2setz12ze0zzintegrate_infoz00(
				((BgL_svarz00_bglt) BgL_oz00_2630), BgL_vz00_2631);
		}

	}



/* make-sexit/Iinfo */
	BGL_EXPORTED_DEF BgL_sexitz00_bglt
		BGl_makezd2sexitzf2Iinfoz20zzintegrate_infoz00(obj_t BgL_handler1203z00_24,
		bool_t BgL_detachedzf31204zf3_25, obj_t BgL_fzd2mark1205zd2_26,
		obj_t BgL_uzd2mark1206zd2_27, bool_t BgL_kapturedzf31207zf3_28,
		bool_t BgL_celledzf31208zf3_29)
	{
		{	/* Integrate/iinfo.sch 144 */
			{	/* Integrate/iinfo.sch 144 */
				BgL_sexitz00_bglt BgL_new1178z00_3256;

				{	/* Integrate/iinfo.sch 144 */
					BgL_sexitz00_bglt BgL_tmp1176z00_3257;
					BgL_sexitzf2iinfozf2_bglt BgL_wide1177z00_3258;

					{
						BgL_sexitz00_bglt BgL_auxz00_3600;

						{	/* Integrate/iinfo.sch 144 */
							BgL_sexitz00_bglt BgL_new1175z00_3259;

							BgL_new1175z00_3259 =
								((BgL_sexitz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_sexitz00_bgl))));
							{	/* Integrate/iinfo.sch 144 */
								long BgL_arg1322z00_3260;

								{	/* Integrate/iinfo.sch 144 */
									long BgL_res1936z00_3261;

									BgL_res1936z00_3261 =
										BGL_CLASS_INDEX(BGl_sexitz00zzast_varz00);
									BgL_arg1322z00_3260 = BgL_res1936z00_3261;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1175z00_3259),
									BgL_arg1322z00_3260);
							}
							{	/* Integrate/iinfo.sch 144 */
								BgL_objectz00_bglt BgL_tmpz00_3605;

								BgL_tmpz00_3605 = ((BgL_objectz00_bglt) BgL_new1175z00_3259);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3605, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1175z00_3259);
							BgL_auxz00_3600 = BgL_new1175z00_3259;
						}
						BgL_tmp1176z00_3257 = ((BgL_sexitz00_bglt) BgL_auxz00_3600);
					}
					BgL_wide1177z00_3258 =
						((BgL_sexitzf2iinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_sexitzf2iinfozf2_bgl))));
					{	/* Integrate/iinfo.sch 144 */
						obj_t BgL_auxz00_3613;
						BgL_objectz00_bglt BgL_tmpz00_3611;

						BgL_auxz00_3613 = ((obj_t) BgL_wide1177z00_3258);
						BgL_tmpz00_3611 = ((BgL_objectz00_bglt) BgL_tmp1176z00_3257);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3611, BgL_auxz00_3613);
					}
					((BgL_objectz00_bglt) BgL_tmp1176z00_3257);
					{	/* Integrate/iinfo.sch 144 */
						long BgL_arg1319z00_3262;

						{	/* Integrate/iinfo.sch 144 */
							long BgL_res1937z00_3263;

							BgL_res1937z00_3263 =
								BGL_CLASS_INDEX(BGl_sexitzf2Iinfozf2zzintegrate_infoz00);
							BgL_arg1319z00_3262 = BgL_res1937z00_3263;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1176z00_3257), BgL_arg1319z00_3262);
					}
					BgL_new1178z00_3256 = ((BgL_sexitz00_bglt) BgL_tmp1176z00_3257);
				}
				((((BgL_sexitz00_bglt) COBJECT(
								((BgL_sexitz00_bglt) BgL_new1178z00_3256)))->BgL_handlerz00) =
					((obj_t) BgL_handler1203z00_24), BUNSPEC);
				((((BgL_sexitz00_bglt) COBJECT(((BgL_sexitz00_bglt)
									BgL_new1178z00_3256)))->BgL_detachedzf3zf3) =
					((bool_t) BgL_detachedzf31204zf3_25), BUNSPEC);
				{
					BgL_sexitzf2iinfozf2_bglt BgL_auxz00_3625;

					{
						obj_t BgL_auxz00_3626;

						{	/* Integrate/iinfo.sch 144 */
							BgL_objectz00_bglt BgL_tmpz00_3627;

							BgL_tmpz00_3627 = ((BgL_objectz00_bglt) BgL_new1178z00_3256);
							BgL_auxz00_3626 = BGL_OBJECT_WIDENING(BgL_tmpz00_3627);
						}
						BgL_auxz00_3625 = ((BgL_sexitzf2iinfozf2_bglt) BgL_auxz00_3626);
					}
					((((BgL_sexitzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3625))->
							BgL_fzd2markzd2) = ((obj_t) BgL_fzd2mark1205zd2_26), BUNSPEC);
				}
				{
					BgL_sexitzf2iinfozf2_bglt BgL_auxz00_3632;

					{
						obj_t BgL_auxz00_3633;

						{	/* Integrate/iinfo.sch 144 */
							BgL_objectz00_bglt BgL_tmpz00_3634;

							BgL_tmpz00_3634 = ((BgL_objectz00_bglt) BgL_new1178z00_3256);
							BgL_auxz00_3633 = BGL_OBJECT_WIDENING(BgL_tmpz00_3634);
						}
						BgL_auxz00_3632 = ((BgL_sexitzf2iinfozf2_bglt) BgL_auxz00_3633);
					}
					((((BgL_sexitzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3632))->
							BgL_uzd2markzd2) = ((obj_t) BgL_uzd2mark1206zd2_27), BUNSPEC);
				}
				{
					BgL_sexitzf2iinfozf2_bglt BgL_auxz00_3639;

					{
						obj_t BgL_auxz00_3640;

						{	/* Integrate/iinfo.sch 144 */
							BgL_objectz00_bglt BgL_tmpz00_3641;

							BgL_tmpz00_3641 = ((BgL_objectz00_bglt) BgL_new1178z00_3256);
							BgL_auxz00_3640 = BGL_OBJECT_WIDENING(BgL_tmpz00_3641);
						}
						BgL_auxz00_3639 = ((BgL_sexitzf2iinfozf2_bglt) BgL_auxz00_3640);
					}
					((((BgL_sexitzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3639))->
							BgL_kapturedzf3zf3) =
						((bool_t) BgL_kapturedzf31207zf3_28), BUNSPEC);
				}
				{
					BgL_sexitzf2iinfozf2_bglt BgL_auxz00_3646;

					{
						obj_t BgL_auxz00_3647;

						{	/* Integrate/iinfo.sch 144 */
							BgL_objectz00_bglt BgL_tmpz00_3648;

							BgL_tmpz00_3648 = ((BgL_objectz00_bglt) BgL_new1178z00_3256);
							BgL_auxz00_3647 = BGL_OBJECT_WIDENING(BgL_tmpz00_3648);
						}
						BgL_auxz00_3646 = ((BgL_sexitzf2iinfozf2_bglt) BgL_auxz00_3647);
					}
					((((BgL_sexitzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3646))->
							BgL_celledzf3zf3) = ((bool_t) BgL_celledzf31208zf3_29), BUNSPEC);
				}
				return BgL_new1178z00_3256;
			}
		}

	}



/* &make-sexit/Iinfo */
	BgL_sexitz00_bglt BGl_z62makezd2sexitzf2Iinfoz42zzintegrate_infoz00(obj_t
		BgL_envz00_2632, obj_t BgL_handler1203z00_2633,
		obj_t BgL_detachedzf31204zf3_2634, obj_t BgL_fzd2mark1205zd2_2635,
		obj_t BgL_uzd2mark1206zd2_2636, obj_t BgL_kapturedzf31207zf3_2637,
		obj_t BgL_celledzf31208zf3_2638)
	{
		{	/* Integrate/iinfo.sch 144 */
			return
				BGl_makezd2sexitzf2Iinfoz20zzintegrate_infoz00(BgL_handler1203z00_2633,
				CBOOL(BgL_detachedzf31204zf3_2634), BgL_fzd2mark1205zd2_2635,
				BgL_uzd2mark1206zd2_2636, CBOOL(BgL_kapturedzf31207zf3_2637),
				CBOOL(BgL_celledzf31208zf3_2638));
		}

	}



/* sexit/Iinfo? */
	BGL_EXPORTED_DEF bool_t BGl_sexitzf2Iinfozf3z01zzintegrate_infoz00(obj_t
		BgL_objz00_30)
	{
		{	/* Integrate/iinfo.sch 145 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_30,
				BGl_sexitzf2Iinfozf2zzintegrate_infoz00);
		}

	}



/* &sexit/Iinfo? */
	obj_t BGl_z62sexitzf2Iinfozf3z63zzintegrate_infoz00(obj_t BgL_envz00_2639,
		obj_t BgL_objz00_2640)
	{
		{	/* Integrate/iinfo.sch 145 */
			return BBOOL(BGl_sexitzf2Iinfozf3z01zzintegrate_infoz00(BgL_objz00_2640));
		}

	}



/* sexit/Iinfo-nil */
	BGL_EXPORTED_DEF BgL_sexitz00_bglt
		BGl_sexitzf2Iinfozd2nilz20zzintegrate_infoz00()
	{
		{	/* Integrate/iinfo.sch 146 */
			{	/* Integrate/iinfo.sch 146 */
				obj_t BgL_classz00_2271;

				BgL_classz00_2271 = BGl_sexitzf2Iinfozf2zzintegrate_infoz00;
				{	/* Integrate/iinfo.sch 146 */
					obj_t BgL__ortest_1106z00_2272;

					BgL__ortest_1106z00_2272 = BGL_CLASS_NIL(BgL_classz00_2271);
					if (CBOOL(BgL__ortest_1106z00_2272))
						{	/* Integrate/iinfo.sch 146 */
							return ((BgL_sexitz00_bglt) BgL__ortest_1106z00_2272);
						}
					else
						{	/* Integrate/iinfo.sch 146 */
							return
								((BgL_sexitz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_2271));
						}
				}
			}
		}

	}



/* &sexit/Iinfo-nil */
	BgL_sexitz00_bglt BGl_z62sexitzf2Iinfozd2nilz42zzintegrate_infoz00(obj_t
		BgL_envz00_2641)
	{
		{	/* Integrate/iinfo.sch 146 */
			return BGl_sexitzf2Iinfozd2nilz20zzintegrate_infoz00();
		}

	}



/* sexit/Iinfo-celled? */
	BGL_EXPORTED_DEF bool_t
		BGl_sexitzf2Iinfozd2celledzf3zd3zzintegrate_infoz00(BgL_sexitz00_bglt
		BgL_oz00_31)
	{
		{	/* Integrate/iinfo.sch 147 */
			{
				BgL_sexitzf2iinfozf2_bglt BgL_auxz00_3667;

				{
					obj_t BgL_auxz00_3668;

					{	/* Integrate/iinfo.sch 147 */
						BgL_objectz00_bglt BgL_tmpz00_3669;

						BgL_tmpz00_3669 = ((BgL_objectz00_bglt) BgL_oz00_31);
						BgL_auxz00_3668 = BGL_OBJECT_WIDENING(BgL_tmpz00_3669);
					}
					BgL_auxz00_3667 = ((BgL_sexitzf2iinfozf2_bglt) BgL_auxz00_3668);
				}
				return
					(((BgL_sexitzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3667))->
					BgL_celledzf3zf3);
			}
		}

	}



/* &sexit/Iinfo-celled? */
	obj_t BGl_z62sexitzf2Iinfozd2celledzf3zb1zzintegrate_infoz00(obj_t
		BgL_envz00_2642, obj_t BgL_oz00_2643)
	{
		{	/* Integrate/iinfo.sch 147 */
			return
				BBOOL(BGl_sexitzf2Iinfozd2celledzf3zd3zzintegrate_infoz00(
					((BgL_sexitz00_bglt) BgL_oz00_2643)));
		}

	}



/* sexit/Iinfo-celled?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sexitzf2Iinfozd2celledzf3zd2setz12z13zzintegrate_infoz00
		(BgL_sexitz00_bglt BgL_oz00_32, bool_t BgL_vz00_33)
	{
		{	/* Integrate/iinfo.sch 148 */
			{
				BgL_sexitzf2iinfozf2_bglt BgL_auxz00_3677;

				{
					obj_t BgL_auxz00_3678;

					{	/* Integrate/iinfo.sch 148 */
						BgL_objectz00_bglt BgL_tmpz00_3679;

						BgL_tmpz00_3679 = ((BgL_objectz00_bglt) BgL_oz00_32);
						BgL_auxz00_3678 = BGL_OBJECT_WIDENING(BgL_tmpz00_3679);
					}
					BgL_auxz00_3677 = ((BgL_sexitzf2iinfozf2_bglt) BgL_auxz00_3678);
				}
				return
					((((BgL_sexitzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3677))->
						BgL_celledzf3zf3) = ((bool_t) BgL_vz00_33), BUNSPEC);
			}
		}

	}



/* &sexit/Iinfo-celled?-set! */
	obj_t BGl_z62sexitzf2Iinfozd2celledzf3zd2setz12z71zzintegrate_infoz00(obj_t
		BgL_envz00_2644, obj_t BgL_oz00_2645, obj_t BgL_vz00_2646)
	{
		{	/* Integrate/iinfo.sch 148 */
			return
				BGl_sexitzf2Iinfozd2celledzf3zd2setz12z13zzintegrate_infoz00(
				((BgL_sexitz00_bglt) BgL_oz00_2645), CBOOL(BgL_vz00_2646));
		}

	}



/* sexit/Iinfo-kaptured? */
	BGL_EXPORTED_DEF bool_t
		BGl_sexitzf2Iinfozd2kapturedzf3zd3zzintegrate_infoz00(BgL_sexitz00_bglt
		BgL_oz00_34)
	{
		{	/* Integrate/iinfo.sch 149 */
			{
				BgL_sexitzf2iinfozf2_bglt BgL_auxz00_3687;

				{
					obj_t BgL_auxz00_3688;

					{	/* Integrate/iinfo.sch 149 */
						BgL_objectz00_bglt BgL_tmpz00_3689;

						BgL_tmpz00_3689 = ((BgL_objectz00_bglt) BgL_oz00_34);
						BgL_auxz00_3688 = BGL_OBJECT_WIDENING(BgL_tmpz00_3689);
					}
					BgL_auxz00_3687 = ((BgL_sexitzf2iinfozf2_bglt) BgL_auxz00_3688);
				}
				return
					(((BgL_sexitzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3687))->
					BgL_kapturedzf3zf3);
			}
		}

	}



/* &sexit/Iinfo-kaptured? */
	obj_t BGl_z62sexitzf2Iinfozd2kapturedzf3zb1zzintegrate_infoz00(obj_t
		BgL_envz00_2647, obj_t BgL_oz00_2648)
	{
		{	/* Integrate/iinfo.sch 149 */
			return
				BBOOL(BGl_sexitzf2Iinfozd2kapturedzf3zd3zzintegrate_infoz00(
					((BgL_sexitz00_bglt) BgL_oz00_2648)));
		}

	}



/* sexit/Iinfo-kaptured?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sexitzf2Iinfozd2kapturedzf3zd2setz12z13zzintegrate_infoz00
		(BgL_sexitz00_bglt BgL_oz00_35, bool_t BgL_vz00_36)
	{
		{	/* Integrate/iinfo.sch 150 */
			{
				BgL_sexitzf2iinfozf2_bglt BgL_auxz00_3697;

				{
					obj_t BgL_auxz00_3698;

					{	/* Integrate/iinfo.sch 150 */
						BgL_objectz00_bglt BgL_tmpz00_3699;

						BgL_tmpz00_3699 = ((BgL_objectz00_bglt) BgL_oz00_35);
						BgL_auxz00_3698 = BGL_OBJECT_WIDENING(BgL_tmpz00_3699);
					}
					BgL_auxz00_3697 = ((BgL_sexitzf2iinfozf2_bglt) BgL_auxz00_3698);
				}
				return
					((((BgL_sexitzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3697))->
						BgL_kapturedzf3zf3) = ((bool_t) BgL_vz00_36), BUNSPEC);
			}
		}

	}



/* &sexit/Iinfo-kaptured?-set! */
	obj_t BGl_z62sexitzf2Iinfozd2kapturedzf3zd2setz12z71zzintegrate_infoz00(obj_t
		BgL_envz00_2649, obj_t BgL_oz00_2650, obj_t BgL_vz00_2651)
	{
		{	/* Integrate/iinfo.sch 150 */
			return
				BGl_sexitzf2Iinfozd2kapturedzf3zd2setz12z13zzintegrate_infoz00(
				((BgL_sexitz00_bglt) BgL_oz00_2650), CBOOL(BgL_vz00_2651));
		}

	}



/* sexit/Iinfo-u-mark */
	BGL_EXPORTED_DEF obj_t
		BGl_sexitzf2Iinfozd2uzd2markzf2zzintegrate_infoz00(BgL_sexitz00_bglt
		BgL_oz00_37)
	{
		{	/* Integrate/iinfo.sch 151 */
			{
				BgL_sexitzf2iinfozf2_bglt BgL_auxz00_3707;

				{
					obj_t BgL_auxz00_3708;

					{	/* Integrate/iinfo.sch 151 */
						BgL_objectz00_bglt BgL_tmpz00_3709;

						BgL_tmpz00_3709 = ((BgL_objectz00_bglt) BgL_oz00_37);
						BgL_auxz00_3708 = BGL_OBJECT_WIDENING(BgL_tmpz00_3709);
					}
					BgL_auxz00_3707 = ((BgL_sexitzf2iinfozf2_bglt) BgL_auxz00_3708);
				}
				return
					(((BgL_sexitzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3707))->
					BgL_uzd2markzd2);
			}
		}

	}



/* &sexit/Iinfo-u-mark */
	obj_t BGl_z62sexitzf2Iinfozd2uzd2markz90zzintegrate_infoz00(obj_t
		BgL_envz00_2652, obj_t BgL_oz00_2653)
	{
		{	/* Integrate/iinfo.sch 151 */
			return
				BGl_sexitzf2Iinfozd2uzd2markzf2zzintegrate_infoz00(
				((BgL_sexitz00_bglt) BgL_oz00_2653));
		}

	}



/* sexit/Iinfo-u-mark-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sexitzf2Iinfozd2uzd2markzd2setz12z32zzintegrate_infoz00
		(BgL_sexitz00_bglt BgL_oz00_38, obj_t BgL_vz00_39)
	{
		{	/* Integrate/iinfo.sch 152 */
			{
				BgL_sexitzf2iinfozf2_bglt BgL_auxz00_3716;

				{
					obj_t BgL_auxz00_3717;

					{	/* Integrate/iinfo.sch 152 */
						BgL_objectz00_bglt BgL_tmpz00_3718;

						BgL_tmpz00_3718 = ((BgL_objectz00_bglt) BgL_oz00_38);
						BgL_auxz00_3717 = BGL_OBJECT_WIDENING(BgL_tmpz00_3718);
					}
					BgL_auxz00_3716 = ((BgL_sexitzf2iinfozf2_bglt) BgL_auxz00_3717);
				}
				return
					((((BgL_sexitzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3716))->
						BgL_uzd2markzd2) = ((obj_t) BgL_vz00_39), BUNSPEC);
			}
		}

	}



/* &sexit/Iinfo-u-mark-set! */
	obj_t BGl_z62sexitzf2Iinfozd2uzd2markzd2setz12z50zzintegrate_infoz00(obj_t
		BgL_envz00_2654, obj_t BgL_oz00_2655, obj_t BgL_vz00_2656)
	{
		{	/* Integrate/iinfo.sch 152 */
			return
				BGl_sexitzf2Iinfozd2uzd2markzd2setz12z32zzintegrate_infoz00(
				((BgL_sexitz00_bglt) BgL_oz00_2655), BgL_vz00_2656);
		}

	}



/* sexit/Iinfo-f-mark */
	BGL_EXPORTED_DEF obj_t
		BGl_sexitzf2Iinfozd2fzd2markzf2zzintegrate_infoz00(BgL_sexitz00_bglt
		BgL_oz00_40)
	{
		{	/* Integrate/iinfo.sch 153 */
			{
				BgL_sexitzf2iinfozf2_bglt BgL_auxz00_3725;

				{
					obj_t BgL_auxz00_3726;

					{	/* Integrate/iinfo.sch 153 */
						BgL_objectz00_bglt BgL_tmpz00_3727;

						BgL_tmpz00_3727 = ((BgL_objectz00_bglt) BgL_oz00_40);
						BgL_auxz00_3726 = BGL_OBJECT_WIDENING(BgL_tmpz00_3727);
					}
					BgL_auxz00_3725 = ((BgL_sexitzf2iinfozf2_bglt) BgL_auxz00_3726);
				}
				return
					(((BgL_sexitzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3725))->
					BgL_fzd2markzd2);
			}
		}

	}



/* &sexit/Iinfo-f-mark */
	obj_t BGl_z62sexitzf2Iinfozd2fzd2markz90zzintegrate_infoz00(obj_t
		BgL_envz00_2657, obj_t BgL_oz00_2658)
	{
		{	/* Integrate/iinfo.sch 153 */
			return
				BGl_sexitzf2Iinfozd2fzd2markzf2zzintegrate_infoz00(
				((BgL_sexitz00_bglt) BgL_oz00_2658));
		}

	}



/* sexit/Iinfo-f-mark-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sexitzf2Iinfozd2fzd2markzd2setz12z32zzintegrate_infoz00
		(BgL_sexitz00_bglt BgL_oz00_41, obj_t BgL_vz00_42)
	{
		{	/* Integrate/iinfo.sch 154 */
			{
				BgL_sexitzf2iinfozf2_bglt BgL_auxz00_3734;

				{
					obj_t BgL_auxz00_3735;

					{	/* Integrate/iinfo.sch 154 */
						BgL_objectz00_bglt BgL_tmpz00_3736;

						BgL_tmpz00_3736 = ((BgL_objectz00_bglt) BgL_oz00_41);
						BgL_auxz00_3735 = BGL_OBJECT_WIDENING(BgL_tmpz00_3736);
					}
					BgL_auxz00_3734 = ((BgL_sexitzf2iinfozf2_bglt) BgL_auxz00_3735);
				}
				return
					((((BgL_sexitzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3734))->
						BgL_fzd2markzd2) = ((obj_t) BgL_vz00_42), BUNSPEC);
			}
		}

	}



/* &sexit/Iinfo-f-mark-set! */
	obj_t BGl_z62sexitzf2Iinfozd2fzd2markzd2setz12z50zzintegrate_infoz00(obj_t
		BgL_envz00_2659, obj_t BgL_oz00_2660, obj_t BgL_vz00_2661)
	{
		{	/* Integrate/iinfo.sch 154 */
			return
				BGl_sexitzf2Iinfozd2fzd2markzd2setz12z32zzintegrate_infoz00(
				((BgL_sexitz00_bglt) BgL_oz00_2660), BgL_vz00_2661);
		}

	}



/* sexit/Iinfo-detached? */
	BGL_EXPORTED_DEF bool_t
		BGl_sexitzf2Iinfozd2detachedzf3zd3zzintegrate_infoz00(BgL_sexitz00_bglt
		BgL_oz00_43)
	{
		{	/* Integrate/iinfo.sch 155 */
			return
				(((BgL_sexitz00_bglt) COBJECT(
						((BgL_sexitz00_bglt) BgL_oz00_43)))->BgL_detachedzf3zf3);
		}

	}



/* &sexit/Iinfo-detached? */
	obj_t BGl_z62sexitzf2Iinfozd2detachedzf3zb1zzintegrate_infoz00(obj_t
		BgL_envz00_2662, obj_t BgL_oz00_2663)
	{
		{	/* Integrate/iinfo.sch 155 */
			return
				BBOOL(BGl_sexitzf2Iinfozd2detachedzf3zd3zzintegrate_infoz00(
					((BgL_sexitz00_bglt) BgL_oz00_2663)));
		}

	}



/* sexit/Iinfo-detached?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sexitzf2Iinfozd2detachedzf3zd2setz12z13zzintegrate_infoz00
		(BgL_sexitz00_bglt BgL_oz00_44, bool_t BgL_vz00_45)
	{
		{	/* Integrate/iinfo.sch 156 */
			return
				((((BgL_sexitz00_bglt) COBJECT(
							((BgL_sexitz00_bglt) BgL_oz00_44)))->BgL_detachedzf3zf3) =
				((bool_t) BgL_vz00_45), BUNSPEC);
		}

	}



/* &sexit/Iinfo-detached?-set! */
	obj_t BGl_z62sexitzf2Iinfozd2detachedzf3zd2setz12z71zzintegrate_infoz00(obj_t
		BgL_envz00_2664, obj_t BgL_oz00_2665, obj_t BgL_vz00_2666)
	{
		{	/* Integrate/iinfo.sch 156 */
			return
				BGl_sexitzf2Iinfozd2detachedzf3zd2setz12z13zzintegrate_infoz00(
				((BgL_sexitz00_bglt) BgL_oz00_2665), CBOOL(BgL_vz00_2666));
		}

	}



/* sexit/Iinfo-handler */
	BGL_EXPORTED_DEF obj_t
		BGl_sexitzf2Iinfozd2handlerz20zzintegrate_infoz00(BgL_sexitz00_bglt
		BgL_oz00_46)
	{
		{	/* Integrate/iinfo.sch 157 */
			return
				(((BgL_sexitz00_bglt) COBJECT(
						((BgL_sexitz00_bglt) BgL_oz00_46)))->BgL_handlerz00);
		}

	}



/* &sexit/Iinfo-handler */
	obj_t BGl_z62sexitzf2Iinfozd2handlerz42zzintegrate_infoz00(obj_t
		BgL_envz00_2667, obj_t BgL_oz00_2668)
	{
		{	/* Integrate/iinfo.sch 157 */
			return
				BGl_sexitzf2Iinfozd2handlerz20zzintegrate_infoz00(
				((BgL_sexitz00_bglt) BgL_oz00_2668));
		}

	}



/* sexit/Iinfo-handler-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sexitzf2Iinfozd2handlerzd2setz12ze0zzintegrate_infoz00(BgL_sexitz00_bglt
		BgL_oz00_47, obj_t BgL_vz00_48)
	{
		{	/* Integrate/iinfo.sch 158 */
			return
				((((BgL_sexitz00_bglt) COBJECT(
							((BgL_sexitz00_bglt) BgL_oz00_47)))->BgL_handlerz00) =
				((obj_t) BgL_vz00_48), BUNSPEC);
		}

	}



/* &sexit/Iinfo-handler-set! */
	obj_t BGl_z62sexitzf2Iinfozd2handlerzd2setz12z82zzintegrate_infoz00(obj_t
		BgL_envz00_2669, obj_t BgL_oz00_2670, obj_t BgL_vz00_2671)
	{
		{	/* Integrate/iinfo.sch 158 */
			return
				BGl_sexitzf2Iinfozd2handlerzd2setz12ze0zzintegrate_infoz00(
				((BgL_sexitz00_bglt) BgL_oz00_2670), BgL_vz00_2671);
		}

	}



/* make-sfun/Iinfo */
	BGL_EXPORTED_DEF BgL_sfunz00_bglt
		BGl_makezd2sfunzf2Iinfoz20zzintegrate_infoz00(long BgL_arity1164z00_49,
		obj_t BgL_sidezd2effect1165zd2_50, obj_t BgL_predicatezd2of1166zd2_51,
		obj_t BgL_stackzd2allocator1167zd2_52, bool_t BgL_topzf31168zf3_53,
		obj_t BgL_thezd2closure1169zd2_54, obj_t BgL_effect1170z00_55,
		obj_t BgL_failsafe1171z00_56, obj_t BgL_property1172z00_57,
		obj_t BgL_args1173z00_58, obj_t BgL_argszd2name1174zd2_59,
		obj_t BgL_body1175z00_60, obj_t BgL_class1176z00_61,
		obj_t BgL_dssslzd2keywords1177zd2_62, obj_t BgL_loc1178z00_63,
		obj_t BgL_optionals1179z00_64, obj_t BgL_keys1180z00_65,
		obj_t BgL_thezd2closurezd2global1181z00_66, obj_t BgL_strength1182z00_67,
		obj_t BgL_owner1183z00_68, obj_t BgL_free1184z00_69,
		obj_t BgL_bound1185z00_70, obj_t BgL_cfrom1186z00_71,
		obj_t BgL_cto1187z00_72, obj_t BgL_k1188z00_73, obj_t BgL_kza21189za2_74,
		obj_t BgL_u1190z00_75, obj_t BgL_cn1191z00_76, obj_t BgL_ct1192z00_77,
		obj_t BgL_kont1193z00_78, bool_t BgL_gzf31194zf3_79,
		bool_t BgL_forcegzf31195zf3_80, obj_t BgL_l1196z00_81,
		obj_t BgL_led1197z00_82, obj_t BgL_istamp1198z00_83,
		obj_t BgL_global1199z00_84, obj_t BgL_kaptured1200z00_85,
		obj_t BgL_tailzd2coercion1201zd2_86)
	{
		{	/* Integrate/iinfo.sch 161 */
			{	/* Integrate/iinfo.sch 161 */
				BgL_sfunz00_bglt BgL_new1183z00_3264;

				{	/* Integrate/iinfo.sch 161 */
					BgL_sfunz00_bglt BgL_tmp1181z00_3265;
					BgL_sfunzf2iinfozf2_bglt BgL_wide1182z00_3266;

					{
						BgL_sfunz00_bglt BgL_auxz00_3761;

						{	/* Integrate/iinfo.sch 161 */
							BgL_sfunz00_bglt BgL_new1180z00_3267;

							BgL_new1180z00_3267 =
								((BgL_sfunz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_sfunz00_bgl))));
							{	/* Integrate/iinfo.sch 161 */
								long BgL_arg1325z00_3268;

								{	/* Integrate/iinfo.sch 161 */
									long BgL_res1938z00_3269;

									BgL_res1938z00_3269 =
										BGL_CLASS_INDEX(BGl_sfunz00zzast_varz00);
									BgL_arg1325z00_3268 = BgL_res1938z00_3269;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1180z00_3267),
									BgL_arg1325z00_3268);
							}
							{	/* Integrate/iinfo.sch 161 */
								BgL_objectz00_bglt BgL_tmpz00_3766;

								BgL_tmpz00_3766 = ((BgL_objectz00_bglt) BgL_new1180z00_3267);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3766, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1180z00_3267);
							BgL_auxz00_3761 = BgL_new1180z00_3267;
						}
						BgL_tmp1181z00_3265 = ((BgL_sfunz00_bglt) BgL_auxz00_3761);
					}
					BgL_wide1182z00_3266 =
						((BgL_sfunzf2iinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_sfunzf2iinfozf2_bgl))));
					{	/* Integrate/iinfo.sch 161 */
						obj_t BgL_auxz00_3774;
						BgL_objectz00_bglt BgL_tmpz00_3772;

						BgL_auxz00_3774 = ((obj_t) BgL_wide1182z00_3266);
						BgL_tmpz00_3772 = ((BgL_objectz00_bglt) BgL_tmp1181z00_3265);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3772, BgL_auxz00_3774);
					}
					((BgL_objectz00_bglt) BgL_tmp1181z00_3265);
					{	/* Integrate/iinfo.sch 161 */
						long BgL_arg1324z00_3270;

						{	/* Integrate/iinfo.sch 161 */
							long BgL_res1939z00_3271;

							BgL_res1939z00_3271 =
								BGL_CLASS_INDEX(BGl_sfunzf2Iinfozf2zzintegrate_infoz00);
							BgL_arg1324z00_3270 = BgL_res1939z00_3271;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1181z00_3265), BgL_arg1324z00_3270);
					}
					BgL_new1183z00_3264 = ((BgL_sfunz00_bglt) BgL_tmp1181z00_3265);
				}
				((((BgL_funz00_bglt) COBJECT(
								((BgL_funz00_bglt) BgL_new1183z00_3264)))->BgL_arityz00) =
					((long) BgL_arity1164z00_49), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_new1183z00_3264)))->
						BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1165zd2_50), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_new1183z00_3264)))->
						BgL_predicatezd2ofzd2) =
					((obj_t) BgL_predicatezd2of1166zd2_51), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_new1183z00_3264)))->
						BgL_stackzd2allocatorzd2) =
					((obj_t) BgL_stackzd2allocator1167zd2_52), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_new1183z00_3264)))->
						BgL_topzf3zf3) = ((bool_t) BgL_topzf31168zf3_53), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_new1183z00_3264)))->
						BgL_thezd2closurezd2) =
					((obj_t) BgL_thezd2closure1169zd2_54), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_new1183z00_3264)))->
						BgL_effectz00) = ((obj_t) BgL_effect1170z00_55), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_new1183z00_3264)))->
						BgL_failsafez00) = ((obj_t) BgL_failsafe1171z00_56), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_new1183z00_3264)))->
						BgL_argszd2noescapezd2) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1183z00_3264)))->BgL_propertyz00) =
					((obj_t) BgL_property1172z00_57), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1183z00_3264)))->BgL_argsz00) =
					((obj_t) BgL_args1173z00_58), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1183z00_3264)))->BgL_argszd2namezd2) =
					((obj_t) BgL_argszd2name1174zd2_59), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1183z00_3264)))->BgL_bodyz00) =
					((obj_t) BgL_body1175z00_60), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1183z00_3264)))->BgL_classz00) =
					((obj_t) BgL_class1176z00_61), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1183z00_3264)))->BgL_dssslzd2keywordszd2) =
					((obj_t) BgL_dssslzd2keywords1177zd2_62), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1183z00_3264)))->BgL_locz00) =
					((obj_t) BgL_loc1178z00_63), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1183z00_3264)))->BgL_optionalsz00) =
					((obj_t) BgL_optionals1179z00_64), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1183z00_3264)))->BgL_keysz00) =
					((obj_t) BgL_keys1180z00_65), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1183z00_3264)))->BgL_thezd2closurezd2globalz00) =
					((obj_t) BgL_thezd2closurezd2global1181z00_66), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1183z00_3264)))->BgL_strengthz00) =
					((obj_t) BgL_strength1182z00_67), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1183z00_3264)))->BgL_stackablez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_3824;

					{
						obj_t BgL_auxz00_3825;

						{	/* Integrate/iinfo.sch 161 */
							BgL_objectz00_bglt BgL_tmpz00_3826;

							BgL_tmpz00_3826 = ((BgL_objectz00_bglt) BgL_new1183z00_3264);
							BgL_auxz00_3825 = BGL_OBJECT_WIDENING(BgL_tmpz00_3826);
						}
						BgL_auxz00_3824 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_3825);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3824))->
							BgL_ownerz00) = ((obj_t) BgL_owner1183z00_68), BUNSPEC);
				}
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_3831;

					{
						obj_t BgL_auxz00_3832;

						{	/* Integrate/iinfo.sch 161 */
							BgL_objectz00_bglt BgL_tmpz00_3833;

							BgL_tmpz00_3833 = ((BgL_objectz00_bglt) BgL_new1183z00_3264);
							BgL_auxz00_3832 = BGL_OBJECT_WIDENING(BgL_tmpz00_3833);
						}
						BgL_auxz00_3831 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_3832);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3831))->
							BgL_freez00) = ((obj_t) BgL_free1184z00_69), BUNSPEC);
				}
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_3838;

					{
						obj_t BgL_auxz00_3839;

						{	/* Integrate/iinfo.sch 161 */
							BgL_objectz00_bglt BgL_tmpz00_3840;

							BgL_tmpz00_3840 = ((BgL_objectz00_bglt) BgL_new1183z00_3264);
							BgL_auxz00_3839 = BGL_OBJECT_WIDENING(BgL_tmpz00_3840);
						}
						BgL_auxz00_3838 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_3839);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3838))->
							BgL_boundz00) = ((obj_t) BgL_bound1185z00_70), BUNSPEC);
				}
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_3845;

					{
						obj_t BgL_auxz00_3846;

						{	/* Integrate/iinfo.sch 161 */
							BgL_objectz00_bglt BgL_tmpz00_3847;

							BgL_tmpz00_3847 = ((BgL_objectz00_bglt) BgL_new1183z00_3264);
							BgL_auxz00_3846 = BGL_OBJECT_WIDENING(BgL_tmpz00_3847);
						}
						BgL_auxz00_3845 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_3846);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3845))->
							BgL_cfromz00) = ((obj_t) BgL_cfrom1186z00_71), BUNSPEC);
				}
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_3852;

					{
						obj_t BgL_auxz00_3853;

						{	/* Integrate/iinfo.sch 161 */
							BgL_objectz00_bglt BgL_tmpz00_3854;

							BgL_tmpz00_3854 = ((BgL_objectz00_bglt) BgL_new1183z00_3264);
							BgL_auxz00_3853 = BGL_OBJECT_WIDENING(BgL_tmpz00_3854);
						}
						BgL_auxz00_3852 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_3853);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3852))->BgL_ctoz00) =
						((obj_t) BgL_cto1187z00_72), BUNSPEC);
				}
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_3859;

					{
						obj_t BgL_auxz00_3860;

						{	/* Integrate/iinfo.sch 161 */
							BgL_objectz00_bglt BgL_tmpz00_3861;

							BgL_tmpz00_3861 = ((BgL_objectz00_bglt) BgL_new1183z00_3264);
							BgL_auxz00_3860 = BGL_OBJECT_WIDENING(BgL_tmpz00_3861);
						}
						BgL_auxz00_3859 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_3860);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3859))->BgL_kz00) =
						((obj_t) BgL_k1188z00_73), BUNSPEC);
				}
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_3866;

					{
						obj_t BgL_auxz00_3867;

						{	/* Integrate/iinfo.sch 161 */
							BgL_objectz00_bglt BgL_tmpz00_3868;

							BgL_tmpz00_3868 = ((BgL_objectz00_bglt) BgL_new1183z00_3264);
							BgL_auxz00_3867 = BGL_OBJECT_WIDENING(BgL_tmpz00_3868);
						}
						BgL_auxz00_3866 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_3867);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3866))->
							BgL_kza2za2) = ((obj_t) BgL_kza21189za2_74), BUNSPEC);
				}
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_3873;

					{
						obj_t BgL_auxz00_3874;

						{	/* Integrate/iinfo.sch 161 */
							BgL_objectz00_bglt BgL_tmpz00_3875;

							BgL_tmpz00_3875 = ((BgL_objectz00_bglt) BgL_new1183z00_3264);
							BgL_auxz00_3874 = BGL_OBJECT_WIDENING(BgL_tmpz00_3875);
						}
						BgL_auxz00_3873 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_3874);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3873))->BgL_uz00) =
						((obj_t) BgL_u1190z00_75), BUNSPEC);
				}
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_3880;

					{
						obj_t BgL_auxz00_3881;

						{	/* Integrate/iinfo.sch 161 */
							BgL_objectz00_bglt BgL_tmpz00_3882;

							BgL_tmpz00_3882 = ((BgL_objectz00_bglt) BgL_new1183z00_3264);
							BgL_auxz00_3881 = BGL_OBJECT_WIDENING(BgL_tmpz00_3882);
						}
						BgL_auxz00_3880 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_3881);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3880))->BgL_cnz00) =
						((obj_t) BgL_cn1191z00_76), BUNSPEC);
				}
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_3887;

					{
						obj_t BgL_auxz00_3888;

						{	/* Integrate/iinfo.sch 161 */
							BgL_objectz00_bglt BgL_tmpz00_3889;

							BgL_tmpz00_3889 = ((BgL_objectz00_bglt) BgL_new1183z00_3264);
							BgL_auxz00_3888 = BGL_OBJECT_WIDENING(BgL_tmpz00_3889);
						}
						BgL_auxz00_3887 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_3888);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3887))->BgL_ctz00) =
						((obj_t) BgL_ct1192z00_77), BUNSPEC);
				}
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_3894;

					{
						obj_t BgL_auxz00_3895;

						{	/* Integrate/iinfo.sch 161 */
							BgL_objectz00_bglt BgL_tmpz00_3896;

							BgL_tmpz00_3896 = ((BgL_objectz00_bglt) BgL_new1183z00_3264);
							BgL_auxz00_3895 = BGL_OBJECT_WIDENING(BgL_tmpz00_3896);
						}
						BgL_auxz00_3894 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_3895);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3894))->
							BgL_kontz00) = ((obj_t) BgL_kont1193z00_78), BUNSPEC);
				}
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_3901;

					{
						obj_t BgL_auxz00_3902;

						{	/* Integrate/iinfo.sch 161 */
							BgL_objectz00_bglt BgL_tmpz00_3903;

							BgL_tmpz00_3903 = ((BgL_objectz00_bglt) BgL_new1183z00_3264);
							BgL_auxz00_3902 = BGL_OBJECT_WIDENING(BgL_tmpz00_3903);
						}
						BgL_auxz00_3901 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_3902);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3901))->
							BgL_gzf3zf3) = ((bool_t) BgL_gzf31194zf3_79), BUNSPEC);
				}
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_3908;

					{
						obj_t BgL_auxz00_3909;

						{	/* Integrate/iinfo.sch 161 */
							BgL_objectz00_bglt BgL_tmpz00_3910;

							BgL_tmpz00_3910 = ((BgL_objectz00_bglt) BgL_new1183z00_3264);
							BgL_auxz00_3909 = BGL_OBJECT_WIDENING(BgL_tmpz00_3910);
						}
						BgL_auxz00_3908 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_3909);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3908))->
							BgL_forcegzf3zf3) = ((bool_t) BgL_forcegzf31195zf3_80), BUNSPEC);
				}
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_3915;

					{
						obj_t BgL_auxz00_3916;

						{	/* Integrate/iinfo.sch 161 */
							BgL_objectz00_bglt BgL_tmpz00_3917;

							BgL_tmpz00_3917 = ((BgL_objectz00_bglt) BgL_new1183z00_3264);
							BgL_auxz00_3916 = BGL_OBJECT_WIDENING(BgL_tmpz00_3917);
						}
						BgL_auxz00_3915 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_3916);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3915))->BgL_lz00) =
						((obj_t) BgL_l1196z00_81), BUNSPEC);
				}
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_3922;

					{
						obj_t BgL_auxz00_3923;

						{	/* Integrate/iinfo.sch 161 */
							BgL_objectz00_bglt BgL_tmpz00_3924;

							BgL_tmpz00_3924 = ((BgL_objectz00_bglt) BgL_new1183z00_3264);
							BgL_auxz00_3923 = BGL_OBJECT_WIDENING(BgL_tmpz00_3924);
						}
						BgL_auxz00_3922 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_3923);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3922))->BgL_ledz00) =
						((obj_t) BgL_led1197z00_82), BUNSPEC);
				}
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_3929;

					{
						obj_t BgL_auxz00_3930;

						{	/* Integrate/iinfo.sch 161 */
							BgL_objectz00_bglt BgL_tmpz00_3931;

							BgL_tmpz00_3931 = ((BgL_objectz00_bglt) BgL_new1183z00_3264);
							BgL_auxz00_3930 = BGL_OBJECT_WIDENING(BgL_tmpz00_3931);
						}
						BgL_auxz00_3929 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_3930);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3929))->
							BgL_istampz00) = ((obj_t) BgL_istamp1198z00_83), BUNSPEC);
				}
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_3936;

					{
						obj_t BgL_auxz00_3937;

						{	/* Integrate/iinfo.sch 161 */
							BgL_objectz00_bglt BgL_tmpz00_3938;

							BgL_tmpz00_3938 = ((BgL_objectz00_bglt) BgL_new1183z00_3264);
							BgL_auxz00_3937 = BGL_OBJECT_WIDENING(BgL_tmpz00_3938);
						}
						BgL_auxz00_3936 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_3937);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3936))->
							BgL_globalz00) = ((obj_t) BgL_global1199z00_84), BUNSPEC);
				}
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_3943;

					{
						obj_t BgL_auxz00_3944;

						{	/* Integrate/iinfo.sch 161 */
							BgL_objectz00_bglt BgL_tmpz00_3945;

							BgL_tmpz00_3945 = ((BgL_objectz00_bglt) BgL_new1183z00_3264);
							BgL_auxz00_3944 = BGL_OBJECT_WIDENING(BgL_tmpz00_3945);
						}
						BgL_auxz00_3943 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_3944);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3943))->
							BgL_kapturedz00) = ((obj_t) BgL_kaptured1200z00_85), BUNSPEC);
				}
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_3950;

					{
						obj_t BgL_auxz00_3951;

						{	/* Integrate/iinfo.sch 161 */
							BgL_objectz00_bglt BgL_tmpz00_3952;

							BgL_tmpz00_3952 = ((BgL_objectz00_bglt) BgL_new1183z00_3264);
							BgL_auxz00_3951 = BGL_OBJECT_WIDENING(BgL_tmpz00_3952);
						}
						BgL_auxz00_3950 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_3951);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3950))->
							BgL_tailzd2coercionzd2) =
						((obj_t) BgL_tailzd2coercion1201zd2_86), BUNSPEC);
				}
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_3957;

					{
						obj_t BgL_auxz00_3958;

						{	/* Integrate/iinfo.sch 161 */
							BgL_objectz00_bglt BgL_tmpz00_3959;

							BgL_tmpz00_3959 = ((BgL_objectz00_bglt) BgL_new1183z00_3264);
							BgL_auxz00_3958 = BGL_OBJECT_WIDENING(BgL_tmpz00_3959);
						}
						BgL_auxz00_3957 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_3958);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3957))->
							BgL_xhdlzf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
				}
				return BgL_new1183z00_3264;
			}
		}

	}



/* &make-sfun/Iinfo */
	BgL_sfunz00_bglt BGl_z62makezd2sfunzf2Iinfoz42zzintegrate_infoz00(obj_t
		BgL_envz00_2672, obj_t BgL_arity1164z00_2673,
		obj_t BgL_sidezd2effect1165zd2_2674, obj_t BgL_predicatezd2of1166zd2_2675,
		obj_t BgL_stackzd2allocator1167zd2_2676, obj_t BgL_topzf31168zf3_2677,
		obj_t BgL_thezd2closure1169zd2_2678, obj_t BgL_effect1170z00_2679,
		obj_t BgL_failsafe1171z00_2680, obj_t BgL_property1172z00_2681,
		obj_t BgL_args1173z00_2682, obj_t BgL_argszd2name1174zd2_2683,
		obj_t BgL_body1175z00_2684, obj_t BgL_class1176z00_2685,
		obj_t BgL_dssslzd2keywords1177zd2_2686, obj_t BgL_loc1178z00_2687,
		obj_t BgL_optionals1179z00_2688, obj_t BgL_keys1180z00_2689,
		obj_t BgL_thezd2closurezd2global1181z00_2690,
		obj_t BgL_strength1182z00_2691, obj_t BgL_owner1183z00_2692,
		obj_t BgL_free1184z00_2693, obj_t BgL_bound1185z00_2694,
		obj_t BgL_cfrom1186z00_2695, obj_t BgL_cto1187z00_2696,
		obj_t BgL_k1188z00_2697, obj_t BgL_kza21189za2_2698,
		obj_t BgL_u1190z00_2699, obj_t BgL_cn1191z00_2700, obj_t BgL_ct1192z00_2701,
		obj_t BgL_kont1193z00_2702, obj_t BgL_gzf31194zf3_2703,
		obj_t BgL_forcegzf31195zf3_2704, obj_t BgL_l1196z00_2705,
		obj_t BgL_led1197z00_2706, obj_t BgL_istamp1198z00_2707,
		obj_t BgL_global1199z00_2708, obj_t BgL_kaptured1200z00_2709,
		obj_t BgL_tailzd2coercion1201zd2_2710)
	{
		{	/* Integrate/iinfo.sch 161 */
			return
				BGl_makezd2sfunzf2Iinfoz20zzintegrate_infoz00(
				(long) CINT(BgL_arity1164z00_2673), BgL_sidezd2effect1165zd2_2674,
				BgL_predicatezd2of1166zd2_2675, BgL_stackzd2allocator1167zd2_2676,
				CBOOL(BgL_topzf31168zf3_2677), BgL_thezd2closure1169zd2_2678,
				BgL_effect1170z00_2679, BgL_failsafe1171z00_2680,
				BgL_property1172z00_2681, BgL_args1173z00_2682,
				BgL_argszd2name1174zd2_2683, BgL_body1175z00_2684,
				BgL_class1176z00_2685, BgL_dssslzd2keywords1177zd2_2686,
				BgL_loc1178z00_2687, BgL_optionals1179z00_2688, BgL_keys1180z00_2689,
				BgL_thezd2closurezd2global1181z00_2690, BgL_strength1182z00_2691,
				BgL_owner1183z00_2692, BgL_free1184z00_2693, BgL_bound1185z00_2694,
				BgL_cfrom1186z00_2695, BgL_cto1187z00_2696, BgL_k1188z00_2697,
				BgL_kza21189za2_2698, BgL_u1190z00_2699, BgL_cn1191z00_2700,
				BgL_ct1192z00_2701, BgL_kont1193z00_2702, CBOOL(BgL_gzf31194zf3_2703),
				CBOOL(BgL_forcegzf31195zf3_2704), BgL_l1196z00_2705,
				BgL_led1197z00_2706, BgL_istamp1198z00_2707, BgL_global1199z00_2708,
				BgL_kaptured1200z00_2709, BgL_tailzd2coercion1201zd2_2710);
		}

	}



/* sfun/Iinfo? */
	BGL_EXPORTED_DEF bool_t BGl_sfunzf2Iinfozf3z01zzintegrate_infoz00(obj_t
		BgL_objz00_87)
	{
		{	/* Integrate/iinfo.sch 162 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_87,
				BGl_sfunzf2Iinfozf2zzintegrate_infoz00);
		}

	}



/* &sfun/Iinfo? */
	obj_t BGl_z62sfunzf2Iinfozf3z63zzintegrate_infoz00(obj_t BgL_envz00_2711,
		obj_t BgL_objz00_2712)
	{
		{	/* Integrate/iinfo.sch 162 */
			return BBOOL(BGl_sfunzf2Iinfozf3z01zzintegrate_infoz00(BgL_objz00_2712));
		}

	}



/* sfun/Iinfo-nil */
	BGL_EXPORTED_DEF BgL_sfunz00_bglt
		BGl_sfunzf2Iinfozd2nilz20zzintegrate_infoz00()
	{
		{	/* Integrate/iinfo.sch 163 */
			{	/* Integrate/iinfo.sch 163 */
				obj_t BgL_classz00_2317;

				BgL_classz00_2317 = BGl_sfunzf2Iinfozf2zzintegrate_infoz00;
				{	/* Integrate/iinfo.sch 163 */
					obj_t BgL__ortest_1106z00_2318;

					BgL__ortest_1106z00_2318 = BGL_CLASS_NIL(BgL_classz00_2317);
					if (CBOOL(BgL__ortest_1106z00_2318))
						{	/* Integrate/iinfo.sch 163 */
							return ((BgL_sfunz00_bglt) BgL__ortest_1106z00_2318);
						}
					else
						{	/* Integrate/iinfo.sch 163 */
							return
								((BgL_sfunz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_2317));
						}
				}
			}
		}

	}



/* &sfun/Iinfo-nil */
	BgL_sfunz00_bglt BGl_z62sfunzf2Iinfozd2nilz42zzintegrate_infoz00(obj_t
		BgL_envz00_2713)
	{
		{	/* Integrate/iinfo.sch 163 */
			return BGl_sfunzf2Iinfozd2nilz20zzintegrate_infoz00();
		}

	}



/* sfun/Iinfo-tail-coercion */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2tailzd2coercionzf2zzintegrate_infoz00(BgL_sfunz00_bglt
		BgL_oz00_88)
	{
		{	/* Integrate/iinfo.sch 164 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_3979;

				{
					obj_t BgL_auxz00_3980;

					{	/* Integrate/iinfo.sch 164 */
						BgL_objectz00_bglt BgL_tmpz00_3981;

						BgL_tmpz00_3981 = ((BgL_objectz00_bglt) BgL_oz00_88);
						BgL_auxz00_3980 = BGL_OBJECT_WIDENING(BgL_tmpz00_3981);
					}
					BgL_auxz00_3979 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_3980);
				}
				return
					(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3979))->
					BgL_tailzd2coercionzd2);
			}
		}

	}



/* &sfun/Iinfo-tail-coercion */
	obj_t BGl_z62sfunzf2Iinfozd2tailzd2coercionz90zzintegrate_infoz00(obj_t
		BgL_envz00_2714, obj_t BgL_oz00_2715)
	{
		{	/* Integrate/iinfo.sch 164 */
			return
				BGl_sfunzf2Iinfozd2tailzd2coercionzf2zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2715));
		}

	}



/* sfun/Iinfo-tail-coercion-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2tailzd2coercionzd2setz12z32zzintegrate_infoz00
		(BgL_sfunz00_bglt BgL_oz00_89, obj_t BgL_vz00_90)
	{
		{	/* Integrate/iinfo.sch 165 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_3988;

				{
					obj_t BgL_auxz00_3989;

					{	/* Integrate/iinfo.sch 165 */
						BgL_objectz00_bglt BgL_tmpz00_3990;

						BgL_tmpz00_3990 = ((BgL_objectz00_bglt) BgL_oz00_89);
						BgL_auxz00_3989 = BGL_OBJECT_WIDENING(BgL_tmpz00_3990);
					}
					BgL_auxz00_3988 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_3989);
				}
				return
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3988))->
						BgL_tailzd2coercionzd2) = ((obj_t) BgL_vz00_90), BUNSPEC);
			}
		}

	}



/* &sfun/Iinfo-tail-coercion-set! */
	obj_t
		BGl_z62sfunzf2Iinfozd2tailzd2coercionzd2setz12z50zzintegrate_infoz00(obj_t
		BgL_envz00_2716, obj_t BgL_oz00_2717, obj_t BgL_vz00_2718)
	{
		{	/* Integrate/iinfo.sch 165 */
			return
				BGl_sfunzf2Iinfozd2tailzd2coercionzd2setz12z32zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2717), BgL_vz00_2718);
		}

	}



/* sfun/Iinfo-kaptured */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2kapturedz20zzintegrate_infoz00(BgL_sfunz00_bglt
		BgL_oz00_91)
	{
		{	/* Integrate/iinfo.sch 166 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_3997;

				{
					obj_t BgL_auxz00_3998;

					{	/* Integrate/iinfo.sch 166 */
						BgL_objectz00_bglt BgL_tmpz00_3999;

						BgL_tmpz00_3999 = ((BgL_objectz00_bglt) BgL_oz00_91);
						BgL_auxz00_3998 = BGL_OBJECT_WIDENING(BgL_tmpz00_3999);
					}
					BgL_auxz00_3997 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_3998);
				}
				return
					(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_3997))->
					BgL_kapturedz00);
			}
		}

	}



/* &sfun/Iinfo-kaptured */
	obj_t BGl_z62sfunzf2Iinfozd2kapturedz42zzintegrate_infoz00(obj_t
		BgL_envz00_2719, obj_t BgL_oz00_2720)
	{
		{	/* Integrate/iinfo.sch 166 */
			return
				BGl_sfunzf2Iinfozd2kapturedz20zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2720));
		}

	}



/* sfun/Iinfo-kaptured-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2kapturedzd2setz12ze0zzintegrate_infoz00(BgL_sfunz00_bglt
		BgL_oz00_92, obj_t BgL_vz00_93)
	{
		{	/* Integrate/iinfo.sch 167 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4006;

				{
					obj_t BgL_auxz00_4007;

					{	/* Integrate/iinfo.sch 167 */
						BgL_objectz00_bglt BgL_tmpz00_4008;

						BgL_tmpz00_4008 = ((BgL_objectz00_bglt) BgL_oz00_92);
						BgL_auxz00_4007 = BGL_OBJECT_WIDENING(BgL_tmpz00_4008);
					}
					BgL_auxz00_4006 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4007);
				}
				return
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4006))->
						BgL_kapturedz00) = ((obj_t) BgL_vz00_93), BUNSPEC);
			}
		}

	}



/* &sfun/Iinfo-kaptured-set! */
	obj_t BGl_z62sfunzf2Iinfozd2kapturedzd2setz12z82zzintegrate_infoz00(obj_t
		BgL_envz00_2721, obj_t BgL_oz00_2722, obj_t BgL_vz00_2723)
	{
		{	/* Integrate/iinfo.sch 167 */
			return
				BGl_sfunzf2Iinfozd2kapturedzd2setz12ze0zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2722), BgL_vz00_2723);
		}

	}



/* sfun/Iinfo-global */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2globalz20zzintegrate_infoz00(BgL_sfunz00_bglt
		BgL_oz00_94)
	{
		{	/* Integrate/iinfo.sch 168 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4015;

				{
					obj_t BgL_auxz00_4016;

					{	/* Integrate/iinfo.sch 168 */
						BgL_objectz00_bglt BgL_tmpz00_4017;

						BgL_tmpz00_4017 = ((BgL_objectz00_bglt) BgL_oz00_94);
						BgL_auxz00_4016 = BGL_OBJECT_WIDENING(BgL_tmpz00_4017);
					}
					BgL_auxz00_4015 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4016);
				}
				return
					(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4015))->
					BgL_globalz00);
			}
		}

	}



/* &sfun/Iinfo-global */
	obj_t BGl_z62sfunzf2Iinfozd2globalz42zzintegrate_infoz00(obj_t
		BgL_envz00_2724, obj_t BgL_oz00_2725)
	{
		{	/* Integrate/iinfo.sch 168 */
			return
				BGl_sfunzf2Iinfozd2globalz20zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2725));
		}

	}



/* sfun/Iinfo-global-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2globalzd2setz12ze0zzintegrate_infoz00(BgL_sfunz00_bglt
		BgL_oz00_95, obj_t BgL_vz00_96)
	{
		{	/* Integrate/iinfo.sch 169 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4024;

				{
					obj_t BgL_auxz00_4025;

					{	/* Integrate/iinfo.sch 169 */
						BgL_objectz00_bglt BgL_tmpz00_4026;

						BgL_tmpz00_4026 = ((BgL_objectz00_bglt) BgL_oz00_95);
						BgL_auxz00_4025 = BGL_OBJECT_WIDENING(BgL_tmpz00_4026);
					}
					BgL_auxz00_4024 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4025);
				}
				return
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4024))->
						BgL_globalz00) = ((obj_t) BgL_vz00_96), BUNSPEC);
			}
		}

	}



/* &sfun/Iinfo-global-set! */
	obj_t BGl_z62sfunzf2Iinfozd2globalzd2setz12z82zzintegrate_infoz00(obj_t
		BgL_envz00_2726, obj_t BgL_oz00_2727, obj_t BgL_vz00_2728)
	{
		{	/* Integrate/iinfo.sch 169 */
			return
				BGl_sfunzf2Iinfozd2globalzd2setz12ze0zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2727), BgL_vz00_2728);
		}

	}



/* sfun/Iinfo-istamp */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2istampz20zzintegrate_infoz00(BgL_sfunz00_bglt
		BgL_oz00_97)
	{
		{	/* Integrate/iinfo.sch 170 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4033;

				{
					obj_t BgL_auxz00_4034;

					{	/* Integrate/iinfo.sch 170 */
						BgL_objectz00_bglt BgL_tmpz00_4035;

						BgL_tmpz00_4035 = ((BgL_objectz00_bglt) BgL_oz00_97);
						BgL_auxz00_4034 = BGL_OBJECT_WIDENING(BgL_tmpz00_4035);
					}
					BgL_auxz00_4033 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4034);
				}
				return
					(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4033))->
					BgL_istampz00);
			}
		}

	}



/* &sfun/Iinfo-istamp */
	obj_t BGl_z62sfunzf2Iinfozd2istampz42zzintegrate_infoz00(obj_t
		BgL_envz00_2729, obj_t BgL_oz00_2730)
	{
		{	/* Integrate/iinfo.sch 170 */
			return
				BGl_sfunzf2Iinfozd2istampz20zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2730));
		}

	}



/* sfun/Iinfo-istamp-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2istampzd2setz12ze0zzintegrate_infoz00(BgL_sfunz00_bglt
		BgL_oz00_98, obj_t BgL_vz00_99)
	{
		{	/* Integrate/iinfo.sch 171 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4042;

				{
					obj_t BgL_auxz00_4043;

					{	/* Integrate/iinfo.sch 171 */
						BgL_objectz00_bglt BgL_tmpz00_4044;

						BgL_tmpz00_4044 = ((BgL_objectz00_bglt) BgL_oz00_98);
						BgL_auxz00_4043 = BGL_OBJECT_WIDENING(BgL_tmpz00_4044);
					}
					BgL_auxz00_4042 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4043);
				}
				return
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4042))->
						BgL_istampz00) = ((obj_t) BgL_vz00_99), BUNSPEC);
			}
		}

	}



/* &sfun/Iinfo-istamp-set! */
	obj_t BGl_z62sfunzf2Iinfozd2istampzd2setz12z82zzintegrate_infoz00(obj_t
		BgL_envz00_2731, obj_t BgL_oz00_2732, obj_t BgL_vz00_2733)
	{
		{	/* Integrate/iinfo.sch 171 */
			return
				BGl_sfunzf2Iinfozd2istampzd2setz12ze0zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2732), BgL_vz00_2733);
		}

	}



/* sfun/Iinfo-Led */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2Ledz20zzintegrate_infoz00(BgL_sfunz00_bglt BgL_oz00_100)
	{
		{	/* Integrate/iinfo.sch 172 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4051;

				{
					obj_t BgL_auxz00_4052;

					{	/* Integrate/iinfo.sch 172 */
						BgL_objectz00_bglt BgL_tmpz00_4053;

						BgL_tmpz00_4053 = ((BgL_objectz00_bglt) BgL_oz00_100);
						BgL_auxz00_4052 = BGL_OBJECT_WIDENING(BgL_tmpz00_4053);
					}
					BgL_auxz00_4051 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4052);
				}
				return
					(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4051))->BgL_ledz00);
			}
		}

	}



/* &sfun/Iinfo-Led */
	obj_t BGl_z62sfunzf2Iinfozd2Ledz42zzintegrate_infoz00(obj_t BgL_envz00_2734,
		obj_t BgL_oz00_2735)
	{
		{	/* Integrate/iinfo.sch 172 */
			return
				BGl_sfunzf2Iinfozd2Ledz20zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2735));
		}

	}



/* sfun/Iinfo-Led-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2Ledzd2setz12ze0zzintegrate_infoz00(BgL_sfunz00_bglt
		BgL_oz00_101, obj_t BgL_vz00_102)
	{
		{	/* Integrate/iinfo.sch 173 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4060;

				{
					obj_t BgL_auxz00_4061;

					{	/* Integrate/iinfo.sch 173 */
						BgL_objectz00_bglt BgL_tmpz00_4062;

						BgL_tmpz00_4062 = ((BgL_objectz00_bglt) BgL_oz00_101);
						BgL_auxz00_4061 = BGL_OBJECT_WIDENING(BgL_tmpz00_4062);
					}
					BgL_auxz00_4060 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4061);
				}
				return
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4060))->BgL_ledz00) =
					((obj_t) BgL_vz00_102), BUNSPEC);
			}
		}

	}



/* &sfun/Iinfo-Led-set! */
	obj_t BGl_z62sfunzf2Iinfozd2Ledzd2setz12z82zzintegrate_infoz00(obj_t
		BgL_envz00_2736, obj_t BgL_oz00_2737, obj_t BgL_vz00_2738)
	{
		{	/* Integrate/iinfo.sch 173 */
			return
				BGl_sfunzf2Iinfozd2Ledzd2setz12ze0zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2737), BgL_vz00_2738);
		}

	}



/* sfun/Iinfo-L */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2Lz20zzintegrate_infoz00(BgL_sfunz00_bglt BgL_oz00_103)
	{
		{	/* Integrate/iinfo.sch 174 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4069;

				{
					obj_t BgL_auxz00_4070;

					{	/* Integrate/iinfo.sch 174 */
						BgL_objectz00_bglt BgL_tmpz00_4071;

						BgL_tmpz00_4071 = ((BgL_objectz00_bglt) BgL_oz00_103);
						BgL_auxz00_4070 = BGL_OBJECT_WIDENING(BgL_tmpz00_4071);
					}
					BgL_auxz00_4069 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4070);
				}
				return
					(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4069))->BgL_lz00);
			}
		}

	}



/* &sfun/Iinfo-L */
	obj_t BGl_z62sfunzf2Iinfozd2Lz42zzintegrate_infoz00(obj_t BgL_envz00_2739,
		obj_t BgL_oz00_2740)
	{
		{	/* Integrate/iinfo.sch 174 */
			return
				BGl_sfunzf2Iinfozd2Lz20zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2740));
		}

	}



/* sfun/Iinfo-L-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2Lzd2setz12ze0zzintegrate_infoz00(BgL_sfunz00_bglt
		BgL_oz00_104, obj_t BgL_vz00_105)
	{
		{	/* Integrate/iinfo.sch 175 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4078;

				{
					obj_t BgL_auxz00_4079;

					{	/* Integrate/iinfo.sch 175 */
						BgL_objectz00_bglt BgL_tmpz00_4080;

						BgL_tmpz00_4080 = ((BgL_objectz00_bglt) BgL_oz00_104);
						BgL_auxz00_4079 = BGL_OBJECT_WIDENING(BgL_tmpz00_4080);
					}
					BgL_auxz00_4078 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4079);
				}
				return
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4078))->BgL_lz00) =
					((obj_t) BgL_vz00_105), BUNSPEC);
			}
		}

	}



/* &sfun/Iinfo-L-set! */
	obj_t BGl_z62sfunzf2Iinfozd2Lzd2setz12z82zzintegrate_infoz00(obj_t
		BgL_envz00_2741, obj_t BgL_oz00_2742, obj_t BgL_vz00_2743)
	{
		{	/* Integrate/iinfo.sch 175 */
			return
				BGl_sfunzf2Iinfozd2Lzd2setz12ze0zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2742), BgL_vz00_2743);
		}

	}



/* sfun/Iinfo-forceG? */
	BGL_EXPORTED_DEF bool_t
		BGl_sfunzf2Iinfozd2forceGzf3zd3zzintegrate_infoz00(BgL_sfunz00_bglt
		BgL_oz00_106)
	{
		{	/* Integrate/iinfo.sch 176 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4087;

				{
					obj_t BgL_auxz00_4088;

					{	/* Integrate/iinfo.sch 176 */
						BgL_objectz00_bglt BgL_tmpz00_4089;

						BgL_tmpz00_4089 = ((BgL_objectz00_bglt) BgL_oz00_106);
						BgL_auxz00_4088 = BGL_OBJECT_WIDENING(BgL_tmpz00_4089);
					}
					BgL_auxz00_4087 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4088);
				}
				return
					(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4087))->
					BgL_forcegzf3zf3);
			}
		}

	}



/* &sfun/Iinfo-forceG? */
	obj_t BGl_z62sfunzf2Iinfozd2forceGzf3zb1zzintegrate_infoz00(obj_t
		BgL_envz00_2744, obj_t BgL_oz00_2745)
	{
		{	/* Integrate/iinfo.sch 176 */
			return
				BBOOL(BGl_sfunzf2Iinfozd2forceGzf3zd3zzintegrate_infoz00(
					((BgL_sfunz00_bglt) BgL_oz00_2745)));
		}

	}



/* sfun/Iinfo-forceG?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2forceGzf3zd2setz12z13zzintegrate_infoz00(BgL_sfunz00_bglt
		BgL_oz00_107, bool_t BgL_vz00_108)
	{
		{	/* Integrate/iinfo.sch 177 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4097;

				{
					obj_t BgL_auxz00_4098;

					{	/* Integrate/iinfo.sch 177 */
						BgL_objectz00_bglt BgL_tmpz00_4099;

						BgL_tmpz00_4099 = ((BgL_objectz00_bglt) BgL_oz00_107);
						BgL_auxz00_4098 = BGL_OBJECT_WIDENING(BgL_tmpz00_4099);
					}
					BgL_auxz00_4097 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4098);
				}
				return
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4097))->
						BgL_forcegzf3zf3) = ((bool_t) BgL_vz00_108), BUNSPEC);
			}
		}

	}



/* &sfun/Iinfo-forceG?-set! */
	obj_t BGl_z62sfunzf2Iinfozd2forceGzf3zd2setz12z71zzintegrate_infoz00(obj_t
		BgL_envz00_2746, obj_t BgL_oz00_2747, obj_t BgL_vz00_2748)
	{
		{	/* Integrate/iinfo.sch 177 */
			return
				BGl_sfunzf2Iinfozd2forceGzf3zd2setz12z13zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2747), CBOOL(BgL_vz00_2748));
		}

	}



/* sfun/Iinfo-G? */
	BGL_EXPORTED_DEF bool_t
		BGl_sfunzf2Iinfozd2Gzf3zd3zzintegrate_infoz00(BgL_sfunz00_bglt BgL_oz00_109)
	{
		{	/* Integrate/iinfo.sch 178 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4107;

				{
					obj_t BgL_auxz00_4108;

					{	/* Integrate/iinfo.sch 178 */
						BgL_objectz00_bglt BgL_tmpz00_4109;

						BgL_tmpz00_4109 = ((BgL_objectz00_bglt) BgL_oz00_109);
						BgL_auxz00_4108 = BGL_OBJECT_WIDENING(BgL_tmpz00_4109);
					}
					BgL_auxz00_4107 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4108);
				}
				return
					(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4107))->BgL_gzf3zf3);
			}
		}

	}



/* &sfun/Iinfo-G? */
	obj_t BGl_z62sfunzf2Iinfozd2Gzf3zb1zzintegrate_infoz00(obj_t BgL_envz00_2749,
		obj_t BgL_oz00_2750)
	{
		{	/* Integrate/iinfo.sch 178 */
			return
				BBOOL(BGl_sfunzf2Iinfozd2Gzf3zd3zzintegrate_infoz00(
					((BgL_sfunz00_bglt) BgL_oz00_2750)));
		}

	}



/* sfun/Iinfo-G?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2Gzf3zd2setz12z13zzintegrate_infoz00(BgL_sfunz00_bglt
		BgL_oz00_110, bool_t BgL_vz00_111)
	{
		{	/* Integrate/iinfo.sch 179 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4117;

				{
					obj_t BgL_auxz00_4118;

					{	/* Integrate/iinfo.sch 179 */
						BgL_objectz00_bglt BgL_tmpz00_4119;

						BgL_tmpz00_4119 = ((BgL_objectz00_bglt) BgL_oz00_110);
						BgL_auxz00_4118 = BGL_OBJECT_WIDENING(BgL_tmpz00_4119);
					}
					BgL_auxz00_4117 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4118);
				}
				return
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4117))->
						BgL_gzf3zf3) = ((bool_t) BgL_vz00_111), BUNSPEC);
			}
		}

	}



/* &sfun/Iinfo-G?-set! */
	obj_t BGl_z62sfunzf2Iinfozd2Gzf3zd2setz12z71zzintegrate_infoz00(obj_t
		BgL_envz00_2751, obj_t BgL_oz00_2752, obj_t BgL_vz00_2753)
	{
		{	/* Integrate/iinfo.sch 179 */
			return
				BGl_sfunzf2Iinfozd2Gzf3zd2setz12z13zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2752), CBOOL(BgL_vz00_2753));
		}

	}



/* sfun/Iinfo-kont */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2kontz20zzintegrate_infoz00(BgL_sfunz00_bglt BgL_oz00_112)
	{
		{	/* Integrate/iinfo.sch 180 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4127;

				{
					obj_t BgL_auxz00_4128;

					{	/* Integrate/iinfo.sch 180 */
						BgL_objectz00_bglt BgL_tmpz00_4129;

						BgL_tmpz00_4129 = ((BgL_objectz00_bglt) BgL_oz00_112);
						BgL_auxz00_4128 = BGL_OBJECT_WIDENING(BgL_tmpz00_4129);
					}
					BgL_auxz00_4127 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4128);
				}
				return
					(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4127))->BgL_kontz00);
			}
		}

	}



/* &sfun/Iinfo-kont */
	obj_t BGl_z62sfunzf2Iinfozd2kontz42zzintegrate_infoz00(obj_t BgL_envz00_2754,
		obj_t BgL_oz00_2755)
	{
		{	/* Integrate/iinfo.sch 180 */
			return
				BGl_sfunzf2Iinfozd2kontz20zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2755));
		}

	}



/* sfun/Iinfo-kont-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2kontzd2setz12ze0zzintegrate_infoz00(BgL_sfunz00_bglt
		BgL_oz00_113, obj_t BgL_vz00_114)
	{
		{	/* Integrate/iinfo.sch 181 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4136;

				{
					obj_t BgL_auxz00_4137;

					{	/* Integrate/iinfo.sch 181 */
						BgL_objectz00_bglt BgL_tmpz00_4138;

						BgL_tmpz00_4138 = ((BgL_objectz00_bglt) BgL_oz00_113);
						BgL_auxz00_4137 = BGL_OBJECT_WIDENING(BgL_tmpz00_4138);
					}
					BgL_auxz00_4136 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4137);
				}
				return
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4136))->
						BgL_kontz00) = ((obj_t) BgL_vz00_114), BUNSPEC);
			}
		}

	}



/* &sfun/Iinfo-kont-set! */
	obj_t BGl_z62sfunzf2Iinfozd2kontzd2setz12z82zzintegrate_infoz00(obj_t
		BgL_envz00_2756, obj_t BgL_oz00_2757, obj_t BgL_vz00_2758)
	{
		{	/* Integrate/iinfo.sch 181 */
			return
				BGl_sfunzf2Iinfozd2kontzd2setz12ze0zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2757), BgL_vz00_2758);
		}

	}



/* sfun/Iinfo-Ct */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2Ctz20zzintegrate_infoz00(BgL_sfunz00_bglt BgL_oz00_115)
	{
		{	/* Integrate/iinfo.sch 182 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4145;

				{
					obj_t BgL_auxz00_4146;

					{	/* Integrate/iinfo.sch 182 */
						BgL_objectz00_bglt BgL_tmpz00_4147;

						BgL_tmpz00_4147 = ((BgL_objectz00_bglt) BgL_oz00_115);
						BgL_auxz00_4146 = BGL_OBJECT_WIDENING(BgL_tmpz00_4147);
					}
					BgL_auxz00_4145 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4146);
				}
				return
					(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4145))->BgL_ctz00);
			}
		}

	}



/* &sfun/Iinfo-Ct */
	obj_t BGl_z62sfunzf2Iinfozd2Ctz42zzintegrate_infoz00(obj_t BgL_envz00_2759,
		obj_t BgL_oz00_2760)
	{
		{	/* Integrate/iinfo.sch 182 */
			return
				BGl_sfunzf2Iinfozd2Ctz20zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2760));
		}

	}



/* sfun/Iinfo-Ct-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2Ctzd2setz12ze0zzintegrate_infoz00(BgL_sfunz00_bglt
		BgL_oz00_116, obj_t BgL_vz00_117)
	{
		{	/* Integrate/iinfo.sch 183 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4154;

				{
					obj_t BgL_auxz00_4155;

					{	/* Integrate/iinfo.sch 183 */
						BgL_objectz00_bglt BgL_tmpz00_4156;

						BgL_tmpz00_4156 = ((BgL_objectz00_bglt) BgL_oz00_116);
						BgL_auxz00_4155 = BGL_OBJECT_WIDENING(BgL_tmpz00_4156);
					}
					BgL_auxz00_4154 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4155);
				}
				return
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4154))->BgL_ctz00) =
					((obj_t) BgL_vz00_117), BUNSPEC);
			}
		}

	}



/* &sfun/Iinfo-Ct-set! */
	obj_t BGl_z62sfunzf2Iinfozd2Ctzd2setz12z82zzintegrate_infoz00(obj_t
		BgL_envz00_2761, obj_t BgL_oz00_2762, obj_t BgL_vz00_2763)
	{
		{	/* Integrate/iinfo.sch 183 */
			return
				BGl_sfunzf2Iinfozd2Ctzd2setz12ze0zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2762), BgL_vz00_2763);
		}

	}



/* sfun/Iinfo-Cn */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2Cnz20zzintegrate_infoz00(BgL_sfunz00_bglt BgL_oz00_118)
	{
		{	/* Integrate/iinfo.sch 184 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4163;

				{
					obj_t BgL_auxz00_4164;

					{	/* Integrate/iinfo.sch 184 */
						BgL_objectz00_bglt BgL_tmpz00_4165;

						BgL_tmpz00_4165 = ((BgL_objectz00_bglt) BgL_oz00_118);
						BgL_auxz00_4164 = BGL_OBJECT_WIDENING(BgL_tmpz00_4165);
					}
					BgL_auxz00_4163 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4164);
				}
				return
					(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4163))->BgL_cnz00);
			}
		}

	}



/* &sfun/Iinfo-Cn */
	obj_t BGl_z62sfunzf2Iinfozd2Cnz42zzintegrate_infoz00(obj_t BgL_envz00_2764,
		obj_t BgL_oz00_2765)
	{
		{	/* Integrate/iinfo.sch 184 */
			return
				BGl_sfunzf2Iinfozd2Cnz20zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2765));
		}

	}



/* sfun/Iinfo-Cn-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2Cnzd2setz12ze0zzintegrate_infoz00(BgL_sfunz00_bglt
		BgL_oz00_119, obj_t BgL_vz00_120)
	{
		{	/* Integrate/iinfo.sch 185 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4172;

				{
					obj_t BgL_auxz00_4173;

					{	/* Integrate/iinfo.sch 185 */
						BgL_objectz00_bglt BgL_tmpz00_4174;

						BgL_tmpz00_4174 = ((BgL_objectz00_bglt) BgL_oz00_119);
						BgL_auxz00_4173 = BGL_OBJECT_WIDENING(BgL_tmpz00_4174);
					}
					BgL_auxz00_4172 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4173);
				}
				return
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4172))->BgL_cnz00) =
					((obj_t) BgL_vz00_120), BUNSPEC);
			}
		}

	}



/* &sfun/Iinfo-Cn-set! */
	obj_t BGl_z62sfunzf2Iinfozd2Cnzd2setz12z82zzintegrate_infoz00(obj_t
		BgL_envz00_2766, obj_t BgL_oz00_2767, obj_t BgL_vz00_2768)
	{
		{	/* Integrate/iinfo.sch 185 */
			return
				BGl_sfunzf2Iinfozd2Cnzd2setz12ze0zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2767), BgL_vz00_2768);
		}

	}



/* sfun/Iinfo-U */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2Uz20zzintegrate_infoz00(BgL_sfunz00_bglt BgL_oz00_121)
	{
		{	/* Integrate/iinfo.sch 186 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4181;

				{
					obj_t BgL_auxz00_4182;

					{	/* Integrate/iinfo.sch 186 */
						BgL_objectz00_bglt BgL_tmpz00_4183;

						BgL_tmpz00_4183 = ((BgL_objectz00_bglt) BgL_oz00_121);
						BgL_auxz00_4182 = BGL_OBJECT_WIDENING(BgL_tmpz00_4183);
					}
					BgL_auxz00_4181 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4182);
				}
				return
					(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4181))->BgL_uz00);
			}
		}

	}



/* &sfun/Iinfo-U */
	obj_t BGl_z62sfunzf2Iinfozd2Uz42zzintegrate_infoz00(obj_t BgL_envz00_2769,
		obj_t BgL_oz00_2770)
	{
		{	/* Integrate/iinfo.sch 186 */
			return
				BGl_sfunzf2Iinfozd2Uz20zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2770));
		}

	}



/* sfun/Iinfo-U-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2Uzd2setz12ze0zzintegrate_infoz00(BgL_sfunz00_bglt
		BgL_oz00_122, obj_t BgL_vz00_123)
	{
		{	/* Integrate/iinfo.sch 187 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4190;

				{
					obj_t BgL_auxz00_4191;

					{	/* Integrate/iinfo.sch 187 */
						BgL_objectz00_bglt BgL_tmpz00_4192;

						BgL_tmpz00_4192 = ((BgL_objectz00_bglt) BgL_oz00_122);
						BgL_auxz00_4191 = BGL_OBJECT_WIDENING(BgL_tmpz00_4192);
					}
					BgL_auxz00_4190 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4191);
				}
				return
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4190))->BgL_uz00) =
					((obj_t) BgL_vz00_123), BUNSPEC);
			}
		}

	}



/* &sfun/Iinfo-U-set! */
	obj_t BGl_z62sfunzf2Iinfozd2Uzd2setz12z82zzintegrate_infoz00(obj_t
		BgL_envz00_2771, obj_t BgL_oz00_2772, obj_t BgL_vz00_2773)
	{
		{	/* Integrate/iinfo.sch 187 */
			return
				BGl_sfunzf2Iinfozd2Uzd2setz12ze0zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2772), BgL_vz00_2773);
		}

	}



/* sfun/Iinfo-K* */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2Kza2z82zzintegrate_infoz00(BgL_sfunz00_bglt BgL_oz00_124)
	{
		{	/* Integrate/iinfo.sch 188 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4199;

				{
					obj_t BgL_auxz00_4200;

					{	/* Integrate/iinfo.sch 188 */
						BgL_objectz00_bglt BgL_tmpz00_4201;

						BgL_tmpz00_4201 = ((BgL_objectz00_bglt) BgL_oz00_124);
						BgL_auxz00_4200 = BGL_OBJECT_WIDENING(BgL_tmpz00_4201);
					}
					BgL_auxz00_4199 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4200);
				}
				return
					(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4199))->BgL_kza2za2);
			}
		}

	}



/* &sfun/Iinfo-K* */
	obj_t BGl_z62sfunzf2Iinfozd2Kza2ze0zzintegrate_infoz00(obj_t BgL_envz00_2774,
		obj_t BgL_oz00_2775)
	{
		{	/* Integrate/iinfo.sch 188 */
			return
				BGl_sfunzf2Iinfozd2Kza2z82zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2775));
		}

	}



/* sfun/Iinfo-K*-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2Kza2zd2setz12z42zzintegrate_infoz00(BgL_sfunz00_bglt
		BgL_oz00_125, obj_t BgL_vz00_126)
	{
		{	/* Integrate/iinfo.sch 189 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4208;

				{
					obj_t BgL_auxz00_4209;

					{	/* Integrate/iinfo.sch 189 */
						BgL_objectz00_bglt BgL_tmpz00_4210;

						BgL_tmpz00_4210 = ((BgL_objectz00_bglt) BgL_oz00_125);
						BgL_auxz00_4209 = BGL_OBJECT_WIDENING(BgL_tmpz00_4210);
					}
					BgL_auxz00_4208 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4209);
				}
				return
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4208))->
						BgL_kza2za2) = ((obj_t) BgL_vz00_126), BUNSPEC);
			}
		}

	}



/* &sfun/Iinfo-K*-set! */
	obj_t BGl_z62sfunzf2Iinfozd2Kza2zd2setz12z20zzintegrate_infoz00(obj_t
		BgL_envz00_2776, obj_t BgL_oz00_2777, obj_t BgL_vz00_2778)
	{
		{	/* Integrate/iinfo.sch 189 */
			return
				BGl_sfunzf2Iinfozd2Kza2zd2setz12z42zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2777), BgL_vz00_2778);
		}

	}



/* sfun/Iinfo-K */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2Kz20zzintegrate_infoz00(BgL_sfunz00_bglt BgL_oz00_127)
	{
		{	/* Integrate/iinfo.sch 190 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4217;

				{
					obj_t BgL_auxz00_4218;

					{	/* Integrate/iinfo.sch 190 */
						BgL_objectz00_bglt BgL_tmpz00_4219;

						BgL_tmpz00_4219 = ((BgL_objectz00_bglt) BgL_oz00_127);
						BgL_auxz00_4218 = BGL_OBJECT_WIDENING(BgL_tmpz00_4219);
					}
					BgL_auxz00_4217 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4218);
				}
				return
					(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4217))->BgL_kz00);
			}
		}

	}



/* &sfun/Iinfo-K */
	obj_t BGl_z62sfunzf2Iinfozd2Kz42zzintegrate_infoz00(obj_t BgL_envz00_2779,
		obj_t BgL_oz00_2780)
	{
		{	/* Integrate/iinfo.sch 190 */
			return
				BGl_sfunzf2Iinfozd2Kz20zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2780));
		}

	}



/* sfun/Iinfo-K-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2Kzd2setz12ze0zzintegrate_infoz00(BgL_sfunz00_bglt
		BgL_oz00_128, obj_t BgL_vz00_129)
	{
		{	/* Integrate/iinfo.sch 191 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4226;

				{
					obj_t BgL_auxz00_4227;

					{	/* Integrate/iinfo.sch 191 */
						BgL_objectz00_bglt BgL_tmpz00_4228;

						BgL_tmpz00_4228 = ((BgL_objectz00_bglt) BgL_oz00_128);
						BgL_auxz00_4227 = BGL_OBJECT_WIDENING(BgL_tmpz00_4228);
					}
					BgL_auxz00_4226 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4227);
				}
				return
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4226))->BgL_kz00) =
					((obj_t) BgL_vz00_129), BUNSPEC);
			}
		}

	}



/* &sfun/Iinfo-K-set! */
	obj_t BGl_z62sfunzf2Iinfozd2Kzd2setz12z82zzintegrate_infoz00(obj_t
		BgL_envz00_2781, obj_t BgL_oz00_2782, obj_t BgL_vz00_2783)
	{
		{	/* Integrate/iinfo.sch 191 */
			return
				BGl_sfunzf2Iinfozd2Kzd2setz12ze0zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2782), BgL_vz00_2783);
		}

	}



/* sfun/Iinfo-cto */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2ctoz20zzintegrate_infoz00(BgL_sfunz00_bglt BgL_oz00_130)
	{
		{	/* Integrate/iinfo.sch 192 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4235;

				{
					obj_t BgL_auxz00_4236;

					{	/* Integrate/iinfo.sch 192 */
						BgL_objectz00_bglt BgL_tmpz00_4237;

						BgL_tmpz00_4237 = ((BgL_objectz00_bglt) BgL_oz00_130);
						BgL_auxz00_4236 = BGL_OBJECT_WIDENING(BgL_tmpz00_4237);
					}
					BgL_auxz00_4235 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4236);
				}
				return
					(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4235))->BgL_ctoz00);
			}
		}

	}



/* &sfun/Iinfo-cto */
	obj_t BGl_z62sfunzf2Iinfozd2ctoz42zzintegrate_infoz00(obj_t BgL_envz00_2784,
		obj_t BgL_oz00_2785)
	{
		{	/* Integrate/iinfo.sch 192 */
			return
				BGl_sfunzf2Iinfozd2ctoz20zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2785));
		}

	}



/* sfun/Iinfo-cto-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2ctozd2setz12ze0zzintegrate_infoz00(BgL_sfunz00_bglt
		BgL_oz00_131, obj_t BgL_vz00_132)
	{
		{	/* Integrate/iinfo.sch 193 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4244;

				{
					obj_t BgL_auxz00_4245;

					{	/* Integrate/iinfo.sch 193 */
						BgL_objectz00_bglt BgL_tmpz00_4246;

						BgL_tmpz00_4246 = ((BgL_objectz00_bglt) BgL_oz00_131);
						BgL_auxz00_4245 = BGL_OBJECT_WIDENING(BgL_tmpz00_4246);
					}
					BgL_auxz00_4244 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4245);
				}
				return
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4244))->BgL_ctoz00) =
					((obj_t) BgL_vz00_132), BUNSPEC);
			}
		}

	}



/* &sfun/Iinfo-cto-set! */
	obj_t BGl_z62sfunzf2Iinfozd2ctozd2setz12z82zzintegrate_infoz00(obj_t
		BgL_envz00_2786, obj_t BgL_oz00_2787, obj_t BgL_vz00_2788)
	{
		{	/* Integrate/iinfo.sch 193 */
			return
				BGl_sfunzf2Iinfozd2ctozd2setz12ze0zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2787), BgL_vz00_2788);
		}

	}



/* sfun/Iinfo-cfrom */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2cfromz20zzintegrate_infoz00(BgL_sfunz00_bglt
		BgL_oz00_133)
	{
		{	/* Integrate/iinfo.sch 194 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4253;

				{
					obj_t BgL_auxz00_4254;

					{	/* Integrate/iinfo.sch 194 */
						BgL_objectz00_bglt BgL_tmpz00_4255;

						BgL_tmpz00_4255 = ((BgL_objectz00_bglt) BgL_oz00_133);
						BgL_auxz00_4254 = BGL_OBJECT_WIDENING(BgL_tmpz00_4255);
					}
					BgL_auxz00_4253 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4254);
				}
				return
					(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4253))->BgL_cfromz00);
			}
		}

	}



/* &sfun/Iinfo-cfrom */
	obj_t BGl_z62sfunzf2Iinfozd2cfromz42zzintegrate_infoz00(obj_t BgL_envz00_2789,
		obj_t BgL_oz00_2790)
	{
		{	/* Integrate/iinfo.sch 194 */
			return
				BGl_sfunzf2Iinfozd2cfromz20zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2790));
		}

	}



/* sfun/Iinfo-cfrom-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2cfromzd2setz12ze0zzintegrate_infoz00(BgL_sfunz00_bglt
		BgL_oz00_134, obj_t BgL_vz00_135)
	{
		{	/* Integrate/iinfo.sch 195 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4262;

				{
					obj_t BgL_auxz00_4263;

					{	/* Integrate/iinfo.sch 195 */
						BgL_objectz00_bglt BgL_tmpz00_4264;

						BgL_tmpz00_4264 = ((BgL_objectz00_bglt) BgL_oz00_134);
						BgL_auxz00_4263 = BGL_OBJECT_WIDENING(BgL_tmpz00_4264);
					}
					BgL_auxz00_4262 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4263);
				}
				return
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4262))->
						BgL_cfromz00) = ((obj_t) BgL_vz00_135), BUNSPEC);
			}
		}

	}



/* &sfun/Iinfo-cfrom-set! */
	obj_t BGl_z62sfunzf2Iinfozd2cfromzd2setz12z82zzintegrate_infoz00(obj_t
		BgL_envz00_2791, obj_t BgL_oz00_2792, obj_t BgL_vz00_2793)
	{
		{	/* Integrate/iinfo.sch 195 */
			return
				BGl_sfunzf2Iinfozd2cfromzd2setz12ze0zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2792), BgL_vz00_2793);
		}

	}



/* sfun/Iinfo-bound */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2boundz20zzintegrate_infoz00(BgL_sfunz00_bglt
		BgL_oz00_136)
	{
		{	/* Integrate/iinfo.sch 196 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4271;

				{
					obj_t BgL_auxz00_4272;

					{	/* Integrate/iinfo.sch 196 */
						BgL_objectz00_bglt BgL_tmpz00_4273;

						BgL_tmpz00_4273 = ((BgL_objectz00_bglt) BgL_oz00_136);
						BgL_auxz00_4272 = BGL_OBJECT_WIDENING(BgL_tmpz00_4273);
					}
					BgL_auxz00_4271 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4272);
				}
				return
					(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4271))->BgL_boundz00);
			}
		}

	}



/* &sfun/Iinfo-bound */
	obj_t BGl_z62sfunzf2Iinfozd2boundz42zzintegrate_infoz00(obj_t BgL_envz00_2794,
		obj_t BgL_oz00_2795)
	{
		{	/* Integrate/iinfo.sch 196 */
			return
				BGl_sfunzf2Iinfozd2boundz20zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2795));
		}

	}



/* sfun/Iinfo-bound-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2boundzd2setz12ze0zzintegrate_infoz00(BgL_sfunz00_bglt
		BgL_oz00_137, obj_t BgL_vz00_138)
	{
		{	/* Integrate/iinfo.sch 197 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4280;

				{
					obj_t BgL_auxz00_4281;

					{	/* Integrate/iinfo.sch 197 */
						BgL_objectz00_bglt BgL_tmpz00_4282;

						BgL_tmpz00_4282 = ((BgL_objectz00_bglt) BgL_oz00_137);
						BgL_auxz00_4281 = BGL_OBJECT_WIDENING(BgL_tmpz00_4282);
					}
					BgL_auxz00_4280 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4281);
				}
				return
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4280))->
						BgL_boundz00) = ((obj_t) BgL_vz00_138), BUNSPEC);
			}
		}

	}



/* &sfun/Iinfo-bound-set! */
	obj_t BGl_z62sfunzf2Iinfozd2boundzd2setz12z82zzintegrate_infoz00(obj_t
		BgL_envz00_2796, obj_t BgL_oz00_2797, obj_t BgL_vz00_2798)
	{
		{	/* Integrate/iinfo.sch 197 */
			return
				BGl_sfunzf2Iinfozd2boundzd2setz12ze0zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2797), BgL_vz00_2798);
		}

	}



/* sfun/Iinfo-free */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2freez20zzintegrate_infoz00(BgL_sfunz00_bglt BgL_oz00_139)
	{
		{	/* Integrate/iinfo.sch 198 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4289;

				{
					obj_t BgL_auxz00_4290;

					{	/* Integrate/iinfo.sch 198 */
						BgL_objectz00_bglt BgL_tmpz00_4291;

						BgL_tmpz00_4291 = ((BgL_objectz00_bglt) BgL_oz00_139);
						BgL_auxz00_4290 = BGL_OBJECT_WIDENING(BgL_tmpz00_4291);
					}
					BgL_auxz00_4289 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4290);
				}
				return
					(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4289))->BgL_freez00);
			}
		}

	}



/* &sfun/Iinfo-free */
	obj_t BGl_z62sfunzf2Iinfozd2freez42zzintegrate_infoz00(obj_t BgL_envz00_2799,
		obj_t BgL_oz00_2800)
	{
		{	/* Integrate/iinfo.sch 198 */
			return
				BGl_sfunzf2Iinfozd2freez20zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2800));
		}

	}



/* sfun/Iinfo-free-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2freezd2setz12ze0zzintegrate_infoz00(BgL_sfunz00_bglt
		BgL_oz00_140, obj_t BgL_vz00_141)
	{
		{	/* Integrate/iinfo.sch 199 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4298;

				{
					obj_t BgL_auxz00_4299;

					{	/* Integrate/iinfo.sch 199 */
						BgL_objectz00_bglt BgL_tmpz00_4300;

						BgL_tmpz00_4300 = ((BgL_objectz00_bglt) BgL_oz00_140);
						BgL_auxz00_4299 = BGL_OBJECT_WIDENING(BgL_tmpz00_4300);
					}
					BgL_auxz00_4298 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4299);
				}
				return
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4298))->
						BgL_freez00) = ((obj_t) BgL_vz00_141), BUNSPEC);
			}
		}

	}



/* &sfun/Iinfo-free-set! */
	obj_t BGl_z62sfunzf2Iinfozd2freezd2setz12z82zzintegrate_infoz00(obj_t
		BgL_envz00_2801, obj_t BgL_oz00_2802, obj_t BgL_vz00_2803)
	{
		{	/* Integrate/iinfo.sch 199 */
			return
				BGl_sfunzf2Iinfozd2freezd2setz12ze0zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2802), BgL_vz00_2803);
		}

	}



/* sfun/Iinfo-owner */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2ownerz20zzintegrate_infoz00(BgL_sfunz00_bglt
		BgL_oz00_142)
	{
		{	/* Integrate/iinfo.sch 200 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4307;

				{
					obj_t BgL_auxz00_4308;

					{	/* Integrate/iinfo.sch 200 */
						BgL_objectz00_bglt BgL_tmpz00_4309;

						BgL_tmpz00_4309 = ((BgL_objectz00_bglt) BgL_oz00_142);
						BgL_auxz00_4308 = BGL_OBJECT_WIDENING(BgL_tmpz00_4309);
					}
					BgL_auxz00_4307 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4308);
				}
				return
					(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4307))->BgL_ownerz00);
			}
		}

	}



/* &sfun/Iinfo-owner */
	obj_t BGl_z62sfunzf2Iinfozd2ownerz42zzintegrate_infoz00(obj_t BgL_envz00_2804,
		obj_t BgL_oz00_2805)
	{
		{	/* Integrate/iinfo.sch 200 */
			return
				BGl_sfunzf2Iinfozd2ownerz20zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2805));
		}

	}



/* sfun/Iinfo-owner-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2ownerzd2setz12ze0zzintegrate_infoz00(BgL_sfunz00_bglt
		BgL_oz00_143, obj_t BgL_vz00_144)
	{
		{	/* Integrate/iinfo.sch 201 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4316;

				{
					obj_t BgL_auxz00_4317;

					{	/* Integrate/iinfo.sch 201 */
						BgL_objectz00_bglt BgL_tmpz00_4318;

						BgL_tmpz00_4318 = ((BgL_objectz00_bglt) BgL_oz00_143);
						BgL_auxz00_4317 = BGL_OBJECT_WIDENING(BgL_tmpz00_4318);
					}
					BgL_auxz00_4316 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4317);
				}
				return
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4316))->
						BgL_ownerz00) = ((obj_t) BgL_vz00_144), BUNSPEC);
			}
		}

	}



/* &sfun/Iinfo-owner-set! */
	obj_t BGl_z62sfunzf2Iinfozd2ownerzd2setz12z82zzintegrate_infoz00(obj_t
		BgL_envz00_2806, obj_t BgL_oz00_2807, obj_t BgL_vz00_2808)
	{
		{	/* Integrate/iinfo.sch 201 */
			return
				BGl_sfunzf2Iinfozd2ownerzd2setz12ze0zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2807), BgL_vz00_2808);
		}

	}



/* sfun/Iinfo-strength */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2strengthz20zzintegrate_infoz00(BgL_sfunz00_bglt
		BgL_oz00_145)
	{
		{	/* Integrate/iinfo.sch 202 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_145)))->BgL_strengthz00);
		}

	}



/* &sfun/Iinfo-strength */
	obj_t BGl_z62sfunzf2Iinfozd2strengthz42zzintegrate_infoz00(obj_t
		BgL_envz00_2809, obj_t BgL_oz00_2810)
	{
		{	/* Integrate/iinfo.sch 202 */
			return
				BGl_sfunzf2Iinfozd2strengthz20zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2810));
		}

	}



/* sfun/Iinfo-strength-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2strengthzd2setz12ze0zzintegrate_infoz00(BgL_sfunz00_bglt
		BgL_oz00_146, obj_t BgL_vz00_147)
	{
		{	/* Integrate/iinfo.sch 203 */
			return
				((((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt) BgL_oz00_146)))->BgL_strengthz00) =
				((obj_t) BgL_vz00_147), BUNSPEC);
		}

	}



/* &sfun/Iinfo-strength-set! */
	obj_t BGl_z62sfunzf2Iinfozd2strengthzd2setz12z82zzintegrate_infoz00(obj_t
		BgL_envz00_2811, obj_t BgL_oz00_2812, obj_t BgL_vz00_2813)
	{
		{	/* Integrate/iinfo.sch 203 */
			return
				BGl_sfunzf2Iinfozd2strengthzd2setz12ze0zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2812), BgL_vz00_2813);
		}

	}



/* sfun/Iinfo-the-closure-global */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2thezd2closurezd2globalz20zzintegrate_infoz00
		(BgL_sfunz00_bglt BgL_oz00_148)
	{
		{	/* Integrate/iinfo.sch 204 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_148)))->BgL_thezd2closurezd2globalz00);
		}

	}



/* &sfun/Iinfo-the-closure-global */
	obj_t BGl_z62sfunzf2Iinfozd2thezd2closurezd2globalz42zzintegrate_infoz00(obj_t
		BgL_envz00_2814, obj_t BgL_oz00_2815)
	{
		{	/* Integrate/iinfo.sch 204 */
			return
				BGl_sfunzf2Iinfozd2thezd2closurezd2globalz20zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2815));
		}

	}



/* sfun/Iinfo-the-closure-global-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2thezd2closurezd2globalzd2setz12ze0zzintegrate_infoz00
		(BgL_sfunz00_bglt BgL_oz00_149, obj_t BgL_vz00_150)
	{
		{	/* Integrate/iinfo.sch 205 */
			return
				((((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt) BgL_oz00_149)))->
					BgL_thezd2closurezd2globalz00) = ((obj_t) BgL_vz00_150), BUNSPEC);
		}

	}



/* &sfun/Iinfo-the-closure-global-set! */
	obj_t
		BGl_z62sfunzf2Iinfozd2thezd2closurezd2globalzd2setz12z82zzintegrate_infoz00
		(obj_t BgL_envz00_2816, obj_t BgL_oz00_2817, obj_t BgL_vz00_2818)
	{
		{	/* Integrate/iinfo.sch 205 */
			return
				BGl_sfunzf2Iinfozd2thezd2closurezd2globalzd2setz12ze0zzintegrate_infoz00
				(((BgL_sfunz00_bglt) BgL_oz00_2817), BgL_vz00_2818);
		}

	}



/* sfun/Iinfo-keys */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2keysz20zzintegrate_infoz00(BgL_sfunz00_bglt BgL_oz00_151)
	{
		{	/* Integrate/iinfo.sch 206 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_151)))->BgL_keysz00);
		}

	}



/* &sfun/Iinfo-keys */
	obj_t BGl_z62sfunzf2Iinfozd2keysz42zzintegrate_infoz00(obj_t BgL_envz00_2819,
		obj_t BgL_oz00_2820)
	{
		{	/* Integrate/iinfo.sch 206 */
			return
				BGl_sfunzf2Iinfozd2keysz20zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2820));
		}

	}



/* sfun/Iinfo-optionals */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2optionalsz20zzintegrate_infoz00(BgL_sfunz00_bglt
		BgL_oz00_154)
	{
		{	/* Integrate/iinfo.sch 208 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_154)))->BgL_optionalsz00);
		}

	}



/* &sfun/Iinfo-optionals */
	obj_t BGl_z62sfunzf2Iinfozd2optionalsz42zzintegrate_infoz00(obj_t
		BgL_envz00_2821, obj_t BgL_oz00_2822)
	{
		{	/* Integrate/iinfo.sch 208 */
			return
				BGl_sfunzf2Iinfozd2optionalsz20zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2822));
		}

	}



/* sfun/Iinfo-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2locz20zzintegrate_infoz00(BgL_sfunz00_bglt BgL_oz00_157)
	{
		{	/* Integrate/iinfo.sch 210 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_157)))->BgL_locz00);
		}

	}



/* &sfun/Iinfo-loc */
	obj_t BGl_z62sfunzf2Iinfozd2locz42zzintegrate_infoz00(obj_t BgL_envz00_2823,
		obj_t BgL_oz00_2824)
	{
		{	/* Integrate/iinfo.sch 210 */
			return
				BGl_sfunzf2Iinfozd2locz20zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2824));
		}

	}



/* sfun/Iinfo-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2loczd2setz12ze0zzintegrate_infoz00(BgL_sfunz00_bglt
		BgL_oz00_158, obj_t BgL_vz00_159)
	{
		{	/* Integrate/iinfo.sch 211 */
			return
				((((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt) BgL_oz00_158)))->BgL_locz00) =
				((obj_t) BgL_vz00_159), BUNSPEC);
		}

	}



/* &sfun/Iinfo-loc-set! */
	obj_t BGl_z62sfunzf2Iinfozd2loczd2setz12z82zzintegrate_infoz00(obj_t
		BgL_envz00_2825, obj_t BgL_oz00_2826, obj_t BgL_vz00_2827)
	{
		{	/* Integrate/iinfo.sch 211 */
			return
				BGl_sfunzf2Iinfozd2loczd2setz12ze0zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2826), BgL_vz00_2827);
		}

	}



/* sfun/Iinfo-dsssl-keywords */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2dssslzd2keywordszf2zzintegrate_infoz00(BgL_sfunz00_bglt
		BgL_oz00_160)
	{
		{	/* Integrate/iinfo.sch 212 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_160)))->BgL_dssslzd2keywordszd2);
		}

	}



/* &sfun/Iinfo-dsssl-keywords */
	obj_t BGl_z62sfunzf2Iinfozd2dssslzd2keywordsz90zzintegrate_infoz00(obj_t
		BgL_envz00_2828, obj_t BgL_oz00_2829)
	{
		{	/* Integrate/iinfo.sch 212 */
			return
				BGl_sfunzf2Iinfozd2dssslzd2keywordszf2zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2829));
		}

	}



/* sfun/Iinfo-dsssl-keywords-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2dssslzd2keywordszd2setz12z32zzintegrate_infoz00
		(BgL_sfunz00_bglt BgL_oz00_161, obj_t BgL_vz00_162)
	{
		{	/* Integrate/iinfo.sch 213 */
			return
				((((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt) BgL_oz00_161)))->BgL_dssslzd2keywordszd2) =
				((obj_t) BgL_vz00_162), BUNSPEC);
		}

	}



/* &sfun/Iinfo-dsssl-keywords-set! */
	obj_t
		BGl_z62sfunzf2Iinfozd2dssslzd2keywordszd2setz12z50zzintegrate_infoz00(obj_t
		BgL_envz00_2830, obj_t BgL_oz00_2831, obj_t BgL_vz00_2832)
	{
		{	/* Integrate/iinfo.sch 213 */
			return
				BGl_sfunzf2Iinfozd2dssslzd2keywordszd2setz12z32zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2831), BgL_vz00_2832);
		}

	}



/* sfun/Iinfo-class */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2classz20zzintegrate_infoz00(BgL_sfunz00_bglt
		BgL_oz00_163)
	{
		{	/* Integrate/iinfo.sch 214 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_163)))->BgL_classz00);
		}

	}



/* &sfun/Iinfo-class */
	obj_t BGl_z62sfunzf2Iinfozd2classz42zzintegrate_infoz00(obj_t BgL_envz00_2833,
		obj_t BgL_oz00_2834)
	{
		{	/* Integrate/iinfo.sch 214 */
			return
				BGl_sfunzf2Iinfozd2classz20zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2834));
		}

	}



/* sfun/Iinfo-class-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2classzd2setz12ze0zzintegrate_infoz00(BgL_sfunz00_bglt
		BgL_oz00_164, obj_t BgL_vz00_165)
	{
		{	/* Integrate/iinfo.sch 215 */
			return
				((((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt) BgL_oz00_164)))->BgL_classz00) =
				((obj_t) BgL_vz00_165), BUNSPEC);
		}

	}



/* &sfun/Iinfo-class-set! */
	obj_t BGl_z62sfunzf2Iinfozd2classzd2setz12z82zzintegrate_infoz00(obj_t
		BgL_envz00_2835, obj_t BgL_oz00_2836, obj_t BgL_vz00_2837)
	{
		{	/* Integrate/iinfo.sch 215 */
			return
				BGl_sfunzf2Iinfozd2classzd2setz12ze0zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2836), BgL_vz00_2837);
		}

	}



/* sfun/Iinfo-body */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2bodyz20zzintegrate_infoz00(BgL_sfunz00_bglt BgL_oz00_166)
	{
		{	/* Integrate/iinfo.sch 216 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_166)))->BgL_bodyz00);
		}

	}



/* &sfun/Iinfo-body */
	obj_t BGl_z62sfunzf2Iinfozd2bodyz42zzintegrate_infoz00(obj_t BgL_envz00_2838,
		obj_t BgL_oz00_2839)
	{
		{	/* Integrate/iinfo.sch 216 */
			return
				BGl_sfunzf2Iinfozd2bodyz20zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2839));
		}

	}



/* sfun/Iinfo-body-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2bodyzd2setz12ze0zzintegrate_infoz00(BgL_sfunz00_bglt
		BgL_oz00_167, obj_t BgL_vz00_168)
	{
		{	/* Integrate/iinfo.sch 217 */
			return
				((((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt) BgL_oz00_167)))->BgL_bodyz00) =
				((obj_t) BgL_vz00_168), BUNSPEC);
		}

	}



/* &sfun/Iinfo-body-set! */
	obj_t BGl_z62sfunzf2Iinfozd2bodyzd2setz12z82zzintegrate_infoz00(obj_t
		BgL_envz00_2840, obj_t BgL_oz00_2841, obj_t BgL_vz00_2842)
	{
		{	/* Integrate/iinfo.sch 217 */
			return
				BGl_sfunzf2Iinfozd2bodyzd2setz12ze0zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2841), BgL_vz00_2842);
		}

	}



/* sfun/Iinfo-args-name */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2argszd2namezf2zzintegrate_infoz00(BgL_sfunz00_bglt
		BgL_oz00_169)
	{
		{	/* Integrate/iinfo.sch 218 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_169)))->BgL_argszd2namezd2);
		}

	}



/* &sfun/Iinfo-args-name */
	obj_t BGl_z62sfunzf2Iinfozd2argszd2namez90zzintegrate_infoz00(obj_t
		BgL_envz00_2843, obj_t BgL_oz00_2844)
	{
		{	/* Integrate/iinfo.sch 218 */
			return
				BGl_sfunzf2Iinfozd2argszd2namezf2zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2844));
		}

	}



/* sfun/Iinfo-args */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2argsz20zzintegrate_infoz00(BgL_sfunz00_bglt BgL_oz00_172)
	{
		{	/* Integrate/iinfo.sch 220 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_172)))->BgL_argsz00);
		}

	}



/* &sfun/Iinfo-args */
	obj_t BGl_z62sfunzf2Iinfozd2argsz42zzintegrate_infoz00(obj_t BgL_envz00_2845,
		obj_t BgL_oz00_2846)
	{
		{	/* Integrate/iinfo.sch 220 */
			return
				BGl_sfunzf2Iinfozd2argsz20zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2846));
		}

	}



/* sfun/Iinfo-args-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2argszd2setz12ze0zzintegrate_infoz00(BgL_sfunz00_bglt
		BgL_oz00_173, obj_t BgL_vz00_174)
	{
		{	/* Integrate/iinfo.sch 221 */
			return
				((((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt) BgL_oz00_173)))->BgL_argsz00) =
				((obj_t) BgL_vz00_174), BUNSPEC);
		}

	}



/* &sfun/Iinfo-args-set! */
	obj_t BGl_z62sfunzf2Iinfozd2argszd2setz12z82zzintegrate_infoz00(obj_t
		BgL_envz00_2847, obj_t BgL_oz00_2848, obj_t BgL_vz00_2849)
	{
		{	/* Integrate/iinfo.sch 221 */
			return
				BGl_sfunzf2Iinfozd2argszd2setz12ze0zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2848), BgL_vz00_2849);
		}

	}



/* sfun/Iinfo-property */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2propertyz20zzintegrate_infoz00(BgL_sfunz00_bglt
		BgL_oz00_175)
	{
		{	/* Integrate/iinfo.sch 222 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_175)))->BgL_propertyz00);
		}

	}



/* &sfun/Iinfo-property */
	obj_t BGl_z62sfunzf2Iinfozd2propertyz42zzintegrate_infoz00(obj_t
		BgL_envz00_2850, obj_t BgL_oz00_2851)
	{
		{	/* Integrate/iinfo.sch 222 */
			return
				BGl_sfunzf2Iinfozd2propertyz20zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2851));
		}

	}



/* sfun/Iinfo-property-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2propertyzd2setz12ze0zzintegrate_infoz00(BgL_sfunz00_bglt
		BgL_oz00_176, obj_t BgL_vz00_177)
	{
		{	/* Integrate/iinfo.sch 223 */
			return
				((((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt) BgL_oz00_176)))->BgL_propertyz00) =
				((obj_t) BgL_vz00_177), BUNSPEC);
		}

	}



/* &sfun/Iinfo-property-set! */
	obj_t BGl_z62sfunzf2Iinfozd2propertyzd2setz12z82zzintegrate_infoz00(obj_t
		BgL_envz00_2852, obj_t BgL_oz00_2853, obj_t BgL_vz00_2854)
	{
		{	/* Integrate/iinfo.sch 223 */
			return
				BGl_sfunzf2Iinfozd2propertyzd2setz12ze0zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2853), BgL_vz00_2854);
		}

	}



/* sfun/Iinfo-failsafe */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2failsafez20zzintegrate_infoz00(BgL_sfunz00_bglt
		BgL_oz00_178)
	{
		{	/* Integrate/iinfo.sch 224 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_178)))->BgL_failsafez00);
		}

	}



/* &sfun/Iinfo-failsafe */
	obj_t BGl_z62sfunzf2Iinfozd2failsafez42zzintegrate_infoz00(obj_t
		BgL_envz00_2855, obj_t BgL_oz00_2856)
	{
		{	/* Integrate/iinfo.sch 224 */
			return
				BGl_sfunzf2Iinfozd2failsafez20zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2856));
		}

	}



/* sfun/Iinfo-failsafe-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2failsafezd2setz12ze0zzintegrate_infoz00(BgL_sfunz00_bglt
		BgL_oz00_179, obj_t BgL_vz00_180)
	{
		{	/* Integrate/iinfo.sch 225 */
			return
				((((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt) BgL_oz00_179)))->BgL_failsafez00) =
				((obj_t) BgL_vz00_180), BUNSPEC);
		}

	}



/* &sfun/Iinfo-failsafe-set! */
	obj_t BGl_z62sfunzf2Iinfozd2failsafezd2setz12z82zzintegrate_infoz00(obj_t
		BgL_envz00_2857, obj_t BgL_oz00_2858, obj_t BgL_vz00_2859)
	{
		{	/* Integrate/iinfo.sch 225 */
			return
				BGl_sfunzf2Iinfozd2failsafezd2setz12ze0zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2858), BgL_vz00_2859);
		}

	}



/* sfun/Iinfo-effect */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2effectz20zzintegrate_infoz00(BgL_sfunz00_bglt
		BgL_oz00_181)
	{
		{	/* Integrate/iinfo.sch 226 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_181)))->BgL_effectz00);
		}

	}



/* &sfun/Iinfo-effect */
	obj_t BGl_z62sfunzf2Iinfozd2effectz42zzintegrate_infoz00(obj_t
		BgL_envz00_2860, obj_t BgL_oz00_2861)
	{
		{	/* Integrate/iinfo.sch 226 */
			return
				BGl_sfunzf2Iinfozd2effectz20zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2861));
		}

	}



/* sfun/Iinfo-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2effectzd2setz12ze0zzintegrate_infoz00(BgL_sfunz00_bglt
		BgL_oz00_182, obj_t BgL_vz00_183)
	{
		{	/* Integrate/iinfo.sch 227 */
			return
				((((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt) BgL_oz00_182)))->BgL_effectz00) =
				((obj_t) BgL_vz00_183), BUNSPEC);
		}

	}



/* &sfun/Iinfo-effect-set! */
	obj_t BGl_z62sfunzf2Iinfozd2effectzd2setz12z82zzintegrate_infoz00(obj_t
		BgL_envz00_2862, obj_t BgL_oz00_2863, obj_t BgL_vz00_2864)
	{
		{	/* Integrate/iinfo.sch 227 */
			return
				BGl_sfunzf2Iinfozd2effectzd2setz12ze0zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2863), BgL_vz00_2864);
		}

	}



/* sfun/Iinfo-the-closure */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2thezd2closurezf2zzintegrate_infoz00(BgL_sfunz00_bglt
		BgL_oz00_184)
	{
		{	/* Integrate/iinfo.sch 228 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_184)))->BgL_thezd2closurezd2);
		}

	}



/* &sfun/Iinfo-the-closure */
	obj_t BGl_z62sfunzf2Iinfozd2thezd2closurez90zzintegrate_infoz00(obj_t
		BgL_envz00_2865, obj_t BgL_oz00_2866)
	{
		{	/* Integrate/iinfo.sch 228 */
			return
				BGl_sfunzf2Iinfozd2thezd2closurezf2zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2866));
		}

	}



/* sfun/Iinfo-the-closure-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2thezd2closurezd2setz12z32zzintegrate_infoz00
		(BgL_sfunz00_bglt BgL_oz00_185, obj_t BgL_vz00_186)
	{
		{	/* Integrate/iinfo.sch 229 */
			return
				((((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt) BgL_oz00_185)))->BgL_thezd2closurezd2) =
				((obj_t) BgL_vz00_186), BUNSPEC);
		}

	}



/* &sfun/Iinfo-the-closure-set! */
	obj_t BGl_z62sfunzf2Iinfozd2thezd2closurezd2setz12z50zzintegrate_infoz00(obj_t
		BgL_envz00_2867, obj_t BgL_oz00_2868, obj_t BgL_vz00_2869)
	{
		{	/* Integrate/iinfo.sch 229 */
			return
				BGl_sfunzf2Iinfozd2thezd2closurezd2setz12z32zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2868), BgL_vz00_2869);
		}

	}



/* sfun/Iinfo-top? */
	BGL_EXPORTED_DEF bool_t
		BGl_sfunzf2Iinfozd2topzf3zd3zzintegrate_infoz00(BgL_sfunz00_bglt
		BgL_oz00_187)
	{
		{	/* Integrate/iinfo.sch 230 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_187)))->BgL_topzf3zf3);
		}

	}



/* &sfun/Iinfo-top? */
	obj_t BGl_z62sfunzf2Iinfozd2topzf3zb1zzintegrate_infoz00(obj_t
		BgL_envz00_2870, obj_t BgL_oz00_2871)
	{
		{	/* Integrate/iinfo.sch 230 */
			return
				BBOOL(BGl_sfunzf2Iinfozd2topzf3zd3zzintegrate_infoz00(
					((BgL_sfunz00_bglt) BgL_oz00_2871)));
		}

	}



/* sfun/Iinfo-top?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2topzf3zd2setz12z13zzintegrate_infoz00(BgL_sfunz00_bglt
		BgL_oz00_188, bool_t BgL_vz00_189)
	{
		{	/* Integrate/iinfo.sch 231 */
			return
				((((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt) BgL_oz00_188)))->BgL_topzf3zf3) =
				((bool_t) BgL_vz00_189), BUNSPEC);
		}

	}



/* &sfun/Iinfo-top?-set! */
	obj_t BGl_z62sfunzf2Iinfozd2topzf3zd2setz12z71zzintegrate_infoz00(obj_t
		BgL_envz00_2872, obj_t BgL_oz00_2873, obj_t BgL_vz00_2874)
	{
		{	/* Integrate/iinfo.sch 231 */
			return
				BGl_sfunzf2Iinfozd2topzf3zd2setz12z13zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2873), CBOOL(BgL_vz00_2874));
		}

	}



/* sfun/Iinfo-stack-allocator */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2stackzd2allocatorzf2zzintegrate_infoz00(BgL_sfunz00_bglt
		BgL_oz00_190)
	{
		{	/* Integrate/iinfo.sch 232 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_190)))->BgL_stackzd2allocatorzd2);
		}

	}



/* &sfun/Iinfo-stack-allocator */
	obj_t BGl_z62sfunzf2Iinfozd2stackzd2allocatorz90zzintegrate_infoz00(obj_t
		BgL_envz00_2875, obj_t BgL_oz00_2876)
	{
		{	/* Integrate/iinfo.sch 232 */
			return
				BGl_sfunzf2Iinfozd2stackzd2allocatorzf2zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2876));
		}

	}



/* sfun/Iinfo-stack-allocator-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2stackzd2allocatorzd2setz12z32zzintegrate_infoz00
		(BgL_sfunz00_bglt BgL_oz00_191, obj_t BgL_vz00_192)
	{
		{	/* Integrate/iinfo.sch 233 */
			return
				((((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt) BgL_oz00_191)))->BgL_stackzd2allocatorzd2) =
				((obj_t) BgL_vz00_192), BUNSPEC);
		}

	}



/* &sfun/Iinfo-stack-allocator-set! */
	obj_t
		BGl_z62sfunzf2Iinfozd2stackzd2allocatorzd2setz12z50zzintegrate_infoz00(obj_t
		BgL_envz00_2877, obj_t BgL_oz00_2878, obj_t BgL_vz00_2879)
	{
		{	/* Integrate/iinfo.sch 233 */
			return
				BGl_sfunzf2Iinfozd2stackzd2allocatorzd2setz12z32zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2878), BgL_vz00_2879);
		}

	}



/* sfun/Iinfo-predicate-of */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2predicatezd2ofzf2zzintegrate_infoz00(BgL_sfunz00_bglt
		BgL_oz00_193)
	{
		{	/* Integrate/iinfo.sch 234 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_193)))->BgL_predicatezd2ofzd2);
		}

	}



/* &sfun/Iinfo-predicate-of */
	obj_t BGl_z62sfunzf2Iinfozd2predicatezd2ofz90zzintegrate_infoz00(obj_t
		BgL_envz00_2880, obj_t BgL_oz00_2881)
	{
		{	/* Integrate/iinfo.sch 234 */
			return
				BGl_sfunzf2Iinfozd2predicatezd2ofzf2zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2881));
		}

	}



/* sfun/Iinfo-predicate-of-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2predicatezd2ofzd2setz12z32zzintegrate_infoz00
		(BgL_sfunz00_bglt BgL_oz00_194, obj_t BgL_vz00_195)
	{
		{	/* Integrate/iinfo.sch 235 */
			return
				((((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt) BgL_oz00_194)))->BgL_predicatezd2ofzd2) =
				((obj_t) BgL_vz00_195), BUNSPEC);
		}

	}



/* &sfun/Iinfo-predicate-of-set! */
	obj_t
		BGl_z62sfunzf2Iinfozd2predicatezd2ofzd2setz12z50zzintegrate_infoz00(obj_t
		BgL_envz00_2882, obj_t BgL_oz00_2883, obj_t BgL_vz00_2884)
	{
		{	/* Integrate/iinfo.sch 235 */
			return
				BGl_sfunzf2Iinfozd2predicatezd2ofzd2setz12z32zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2883), BgL_vz00_2884);
		}

	}



/* sfun/Iinfo-side-effect */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2sidezd2effectzf2zzintegrate_infoz00(BgL_sfunz00_bglt
		BgL_oz00_196)
	{
		{	/* Integrate/iinfo.sch 236 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_196)))->BgL_sidezd2effectzd2);
		}

	}



/* &sfun/Iinfo-side-effect */
	obj_t BGl_z62sfunzf2Iinfozd2sidezd2effectz90zzintegrate_infoz00(obj_t
		BgL_envz00_2885, obj_t BgL_oz00_2886)
	{
		{	/* Integrate/iinfo.sch 236 */
			return
				BGl_sfunzf2Iinfozd2sidezd2effectzf2zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2886));
		}

	}



/* sfun/Iinfo-side-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Iinfozd2sidezd2effectzd2setz12z32zzintegrate_infoz00
		(BgL_sfunz00_bglt BgL_oz00_197, obj_t BgL_vz00_198)
	{
		{	/* Integrate/iinfo.sch 237 */
			return
				((((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt) BgL_oz00_197)))->BgL_sidezd2effectzd2) =
				((obj_t) BgL_vz00_198), BUNSPEC);
		}

	}



/* &sfun/Iinfo-side-effect-set! */
	obj_t BGl_z62sfunzf2Iinfozd2sidezd2effectzd2setz12z50zzintegrate_infoz00(obj_t
		BgL_envz00_2887, obj_t BgL_oz00_2888, obj_t BgL_vz00_2889)
	{
		{	/* Integrate/iinfo.sch 237 */
			return
				BGl_sfunzf2Iinfozd2sidezd2effectzd2setz12z32zzintegrate_infoz00(
				((BgL_sfunz00_bglt) BgL_oz00_2888), BgL_vz00_2889);
		}

	}



/* sfun/Iinfo-arity */
	BGL_EXPORTED_DEF long
		BGl_sfunzf2Iinfozd2arityz20zzintegrate_infoz00(BgL_sfunz00_bglt
		BgL_oz00_199)
	{
		{	/* Integrate/iinfo.sch 238 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_199)))->BgL_arityz00);
		}

	}



/* &sfun/Iinfo-arity */
	obj_t BGl_z62sfunzf2Iinfozd2arityz42zzintegrate_infoz00(obj_t BgL_envz00_2890,
		obj_t BgL_oz00_2891)
	{
		{	/* Integrate/iinfo.sch 238 */
			return
				BINT(BGl_sfunzf2Iinfozd2arityz20zzintegrate_infoz00(
					((BgL_sfunz00_bglt) BgL_oz00_2891)));
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzintegrate_infoz00()
	{
		{	/* Integrate/iinfo.scm 15 */
			{	/* Integrate/iinfo.scm 23 */
				obj_t BgL_arg1330z00_1545;
				obj_t BgL_arg1331z00_1546;

				{	/* Integrate/iinfo.scm 23 */
					obj_t BgL_v1306z00_1573;

					BgL_v1306z00_1573 = create_vector(((long) 5));
					{	/* Integrate/iinfo.scm 23 */
						obj_t BgL_arg1346z00_1574;

						BgL_arg1346z00_1574 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									0)), BGl_proc1962z00zzintegrate_infoz00,
							BGl_proc1961z00zzintegrate_infoz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1960z00zzintegrate_infoz00,
							CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1306z00_1573, ((long) 0), BgL_arg1346z00_1574);
					}
					{	/* Integrate/iinfo.scm 23 */
						obj_t BgL_arg1357z00_1587;

						BgL_arg1357z00_1587 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									2)), BGl_proc1965z00zzintegrate_infoz00,
							BGl_proc1964z00zzintegrate_infoz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1963z00zzintegrate_infoz00,
							CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1306z00_1573, ((long) 1), BgL_arg1357z00_1587);
					}
					{	/* Integrate/iinfo.scm 23 */
						obj_t BgL_arg1367z00_1600;

						BgL_arg1367z00_1600 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									3)), BGl_proc1968z00zzintegrate_infoz00,
							BGl_proc1967z00zzintegrate_infoz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1966z00zzintegrate_infoz00,
							CNST_TABLE_REF(((long) 4)));
						VECTOR_SET(BgL_v1306z00_1573, ((long) 2), BgL_arg1367z00_1600);
					}
					{	/* Integrate/iinfo.scm 23 */
						obj_t BgL_arg1381z00_1613;

						BgL_arg1381z00_1613 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									5)), BGl_proc1971z00zzintegrate_infoz00,
							BGl_proc1970z00zzintegrate_infoz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1969z00zzintegrate_infoz00,
							CNST_TABLE_REF(((long) 4)));
						VECTOR_SET(BgL_v1306z00_1573, ((long) 3), BgL_arg1381z00_1613);
					}
					{	/* Integrate/iinfo.scm 23 */
						obj_t BgL_arg1388z00_1626;

						BgL_arg1388z00_1626 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									6)), BGl_proc1974z00zzintegrate_infoz00,
							BGl_proc1973z00zzintegrate_infoz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1972z00zzintegrate_infoz00,
							CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1306z00_1573, ((long) 4), BgL_arg1388z00_1626);
					}
					BgL_arg1330z00_1545 = BgL_v1306z00_1573;
				}
				{	/* Integrate/iinfo.scm 23 */
					obj_t BgL_v1307z00_1639;

					BgL_v1307z00_1639 = create_vector(((long) 0));
					BgL_arg1331z00_1546 = BgL_v1307z00_1639;
				}
				BGl_svarzf2Iinfozf2zzintegrate_infoz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 7)),
					CNST_TABLE_REF(((long) 8)), BGl_svarz00zzast_varz00, ((long) 59360),
					BGl_proc1978z00zzintegrate_infoz00,
					BGl_proc1977z00zzintegrate_infoz00, BFALSE,
					BGl_proc1976z00zzintegrate_infoz00,
					BGl_proc1975z00zzintegrate_infoz00, BgL_arg1330z00_1545,
					BgL_arg1331z00_1546);
			}
			{	/* Integrate/iinfo.scm 35 */
				obj_t BgL_arg1448z00_1648;
				obj_t BgL_arg1449z00_1649;

				{	/* Integrate/iinfo.scm 35 */
					obj_t BgL_v1308z00_1676;

					BgL_v1308z00_1676 = create_vector(((long) 4));
					{	/* Integrate/iinfo.scm 35 */
						obj_t BgL_arg1489z00_1677;

						BgL_arg1489z00_1677 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									0)), BGl_proc1981z00zzintegrate_infoz00,
							BGl_proc1980z00zzintegrate_infoz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1979z00zzintegrate_infoz00,
							CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1308z00_1676, ((long) 0), BgL_arg1489z00_1677);
					}
					{	/* Integrate/iinfo.scm 35 */
						obj_t BgL_arg1518z00_1690;

						BgL_arg1518z00_1690 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									2)), BGl_proc1984z00zzintegrate_infoz00,
							BGl_proc1983z00zzintegrate_infoz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1982z00zzintegrate_infoz00,
							CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1308z00_1676, ((long) 1), BgL_arg1518z00_1690);
					}
					{	/* Integrate/iinfo.scm 35 */
						obj_t BgL_arg1540z00_1703;

						BgL_arg1540z00_1703 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									3)), BGl_proc1987z00zzintegrate_infoz00,
							BGl_proc1986z00zzintegrate_infoz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1985z00zzintegrate_infoz00,
							CNST_TABLE_REF(((long) 4)));
						VECTOR_SET(BgL_v1308z00_1676, ((long) 2), BgL_arg1540z00_1703);
					}
					{	/* Integrate/iinfo.scm 35 */
						obj_t BgL_arg1565z00_1716;

						BgL_arg1565z00_1716 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									5)), BGl_proc1990z00zzintegrate_infoz00,
							BGl_proc1989z00zzintegrate_infoz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1988z00zzintegrate_infoz00,
							CNST_TABLE_REF(((long) 4)));
						VECTOR_SET(BgL_v1308z00_1676, ((long) 3), BgL_arg1565z00_1716);
					}
					BgL_arg1448z00_1648 = BgL_v1308z00_1676;
				}
				{	/* Integrate/iinfo.scm 35 */
					obj_t BgL_v1309z00_1729;

					BgL_v1309z00_1729 = create_vector(((long) 0));
					BgL_arg1449z00_1649 = BgL_v1309z00_1729;
				}
				BGl_sexitzf2Iinfozf2zzintegrate_infoz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 9)),
					CNST_TABLE_REF(((long) 8)), BGl_sexitz00zzast_varz00, ((long) 16227),
					BGl_proc1994z00zzintegrate_infoz00,
					BGl_proc1993z00zzintegrate_infoz00, BFALSE,
					BGl_proc1992z00zzintegrate_infoz00,
					BGl_proc1991z00zzintegrate_infoz00, BgL_arg1448z00_1648,
					BgL_arg1449z00_1649);
			}
			{	/* Integrate/iinfo.scm 45 */
				obj_t BgL_arg1592z00_1738;
				obj_t BgL_arg1593z00_1739;

				{	/* Integrate/iinfo.scm 45 */
					obj_t BgL_v1310z00_1801;

					BgL_v1310z00_1801 = create_vector(((long) 20));
					{	/* Integrate/iinfo.scm 45 */
						obj_t BgL_arg1624z00_1802;

						BgL_arg1624z00_1802 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									10)), BGl_proc1996z00zzintegrate_infoz00,
							BGl_proc1995z00zzintegrate_infoz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1310z00_1801, ((long) 0), BgL_arg1624z00_1802);
					}
					{	/* Integrate/iinfo.scm 45 */
						obj_t BgL_arg1631z00_1812;

						BgL_arg1631z00_1812 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									11)), BGl_proc1999z00zzintegrate_infoz00,
							BGl_proc1998z00zzintegrate_infoz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1997z00zzintegrate_infoz00,
							CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1310z00_1801, ((long) 1), BgL_arg1631z00_1812);
					}
					{	/* Integrate/iinfo.scm 45 */
						obj_t BgL_arg1644z00_1825;

						BgL_arg1644z00_1825 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									12)), BGl_proc2002z00zzintegrate_infoz00,
							BGl_proc2001z00zzintegrate_infoz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2000z00zzintegrate_infoz00,
							CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1310z00_1801, ((long) 2), BgL_arg1644z00_1825);
					}
					{	/* Integrate/iinfo.scm 45 */
						obj_t BgL_arg1667z00_1838;

						BgL_arg1667z00_1838 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									13)), BGl_proc2005z00zzintegrate_infoz00,
							BGl_proc2004z00zzintegrate_infoz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2003z00zzintegrate_infoz00,
							CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1310z00_1801, ((long) 3), BgL_arg1667z00_1838);
					}
					{	/* Integrate/iinfo.scm 45 */
						obj_t BgL_arg1688z00_1851;

						BgL_arg1688z00_1851 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									14)), BGl_proc2008z00zzintegrate_infoz00,
							BGl_proc2007z00zzintegrate_infoz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2006z00zzintegrate_infoz00,
							CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1310z00_1801, ((long) 4), BgL_arg1688z00_1851);
					}
					{	/* Integrate/iinfo.scm 45 */
						obj_t BgL_arg1704z00_1864;

						BgL_arg1704z00_1864 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									15)), BGl_proc2011z00zzintegrate_infoz00,
							BGl_proc2010z00zzintegrate_infoz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2009z00zzintegrate_infoz00,
							CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1310z00_1801, ((long) 5), BgL_arg1704z00_1864);
					}
					{	/* Integrate/iinfo.scm 45 */
						obj_t BgL_arg1719z00_1877;

						BgL_arg1719z00_1877 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									16)), BGl_proc2014z00zzintegrate_infoz00,
							BGl_proc2013z00zzintegrate_infoz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2012z00zzintegrate_infoz00,
							CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1310z00_1801, ((long) 6), BgL_arg1719z00_1877);
					}
					{	/* Integrate/iinfo.scm 45 */
						obj_t BgL_arg1731z00_1890;

						BgL_arg1731z00_1890 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									17)), BGl_proc2017z00zzintegrate_infoz00,
							BGl_proc2016z00zzintegrate_infoz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2015z00zzintegrate_infoz00,
							CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1310z00_1801, ((long) 7), BgL_arg1731z00_1890);
					}
					{	/* Integrate/iinfo.scm 45 */
						obj_t BgL_arg1742z00_1903;

						BgL_arg1742z00_1903 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									18)), BGl_proc2020z00zzintegrate_infoz00,
							BGl_proc2019z00zzintegrate_infoz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2018z00zzintegrate_infoz00,
							CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1310z00_1801, ((long) 8), BgL_arg1742z00_1903);
					}
					{	/* Integrate/iinfo.scm 45 */
						obj_t BgL_arg1754z00_1916;

						BgL_arg1754z00_1916 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									19)), BGl_proc2023z00zzintegrate_infoz00,
							BGl_proc2022z00zzintegrate_infoz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2021z00zzintegrate_infoz00,
							CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1310z00_1801, ((long) 9), BgL_arg1754z00_1916);
					}
					{	/* Integrate/iinfo.scm 45 */
						obj_t BgL_arg1761z00_1929;

						BgL_arg1761z00_1929 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									20)), BGl_proc2026z00zzintegrate_infoz00,
							BGl_proc2025z00zzintegrate_infoz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2024z00zzintegrate_infoz00,
							CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1310z00_1801, ((long) 10), BgL_arg1761z00_1929);
					}
					{	/* Integrate/iinfo.scm 45 */
						obj_t BgL_arg1779z00_1942;

						BgL_arg1779z00_1942 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									21)), BGl_proc2028z00zzintegrate_infoz00,
							BGl_proc2027z00zzintegrate_infoz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 4)));
						VECTOR_SET(BgL_v1310z00_1801, ((long) 11), BgL_arg1779z00_1942);
					}
					{	/* Integrate/iinfo.scm 45 */
						obj_t BgL_arg1790z00_1952;

						BgL_arg1790z00_1952 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									22)), BGl_proc2031z00zzintegrate_infoz00,
							BGl_proc2030z00zzintegrate_infoz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2029z00zzintegrate_infoz00,
							CNST_TABLE_REF(((long) 4)));
						VECTOR_SET(BgL_v1310z00_1801, ((long) 12), BgL_arg1790z00_1952);
					}
					{	/* Integrate/iinfo.scm 45 */
						obj_t BgL_arg1808z00_1965;

						BgL_arg1808z00_1965 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									23)), BGl_proc2034z00zzintegrate_infoz00,
							BGl_proc2033z00zzintegrate_infoz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2032z00zzintegrate_infoz00,
							CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1310z00_1801, ((long) 13), BgL_arg1808z00_1965);
					}
					{	/* Integrate/iinfo.scm 45 */
						obj_t BgL_arg1824z00_1978;

						BgL_arg1824z00_1978 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									24)), BGl_proc2037z00zzintegrate_infoz00,
							BGl_proc2036z00zzintegrate_infoz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2035z00zzintegrate_infoz00,
							CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1310z00_1801, ((long) 14), BgL_arg1824z00_1978);
					}
					{	/* Integrate/iinfo.scm 45 */
						obj_t BgL_arg1831z00_1991;

						BgL_arg1831z00_1991 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									25)), BGl_proc2040z00zzintegrate_infoz00,
							BGl_proc2039z00zzintegrate_infoz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2038z00zzintegrate_infoz00,
							CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1310z00_1801, ((long) 15), BgL_arg1831z00_1991);
					}
					{	/* Integrate/iinfo.scm 45 */
						obj_t BgL_arg1840z00_2004;

						BgL_arg1840z00_2004 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									26)), BGl_proc2043z00zzintegrate_infoz00,
							BGl_proc2042z00zzintegrate_infoz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2041z00zzintegrate_infoz00,
							CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1310z00_1801, ((long) 16), BgL_arg1840z00_2004);
					}
					{	/* Integrate/iinfo.scm 45 */
						obj_t BgL_arg1850z00_2017;

						BgL_arg1850z00_2017 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									27)), BGl_proc2046z00zzintegrate_infoz00,
							BGl_proc2045z00zzintegrate_infoz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2044z00zzintegrate_infoz00,
							CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1310z00_1801, ((long) 17), BgL_arg1850z00_2017);
					}
					{	/* Integrate/iinfo.scm 45 */
						obj_t BgL_arg1857z00_2030;

						BgL_arg1857z00_2030 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									28)), BGl_proc2049z00zzintegrate_infoz00,
							BGl_proc2048z00zzintegrate_infoz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2047z00zzintegrate_infoz00,
							CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1310z00_1801, ((long) 18), BgL_arg1857z00_2030);
					}
					{	/* Integrate/iinfo.scm 45 */
						obj_t BgL_arg1865z00_2043;

						BgL_arg1865z00_2043 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									29)), BGl_proc2052z00zzintegrate_infoz00,
							BGl_proc2051z00zzintegrate_infoz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2050z00zzintegrate_infoz00,
							CNST_TABLE_REF(((long) 4)));
						VECTOR_SET(BgL_v1310z00_1801, ((long) 19), BgL_arg1865z00_2043);
					}
					BgL_arg1592z00_1738 = BgL_v1310z00_1801;
				}
				{	/* Integrate/iinfo.scm 45 */
					obj_t BgL_v1311z00_2056;

					BgL_v1311z00_2056 = create_vector(((long) 0));
					BgL_arg1593z00_1739 = BgL_v1311z00_2056;
				}
				return (BGl_sfunzf2Iinfozf2zzintegrate_infoz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 30)),
						CNST_TABLE_REF(((long) 8)), BGl_sfunz00zzast_varz00, ((long) 50236),
						BGl_proc2056z00zzintegrate_infoz00,
						BGl_proc2055z00zzintegrate_infoz00, BFALSE,
						BGl_proc2054z00zzintegrate_infoz00,
						BGl_proc2053z00zzintegrate_infoz00, BgL_arg1592z00_1738,
						BgL_arg1593z00_1739), BUNSPEC);
		}}

	}



/* &lambda1606 */
	BgL_sfunz00_bglt BGl_z62lambda1606z62zzintegrate_infoz00(obj_t
		BgL_envz00_2989, obj_t BgL_o1170z00_2990)
	{
		{	/* Integrate/iinfo.scm 45 */
			{	/* Integrate/iinfo.scm 45 */
				long BgL_arg1611z00_3273;

				{	/* Integrate/iinfo.scm 45 */
					obj_t BgL_arg1612z00_3274;

					{	/* Integrate/iinfo.scm 45 */
						obj_t BgL_arg1613z00_3275;

						{	/* Integrate/iinfo.scm 45 */
							long BgL_arg1816z00_3276;

							{	/* Integrate/iinfo.scm 45 */
								long BgL_arg1817z00_3277;

								{	/* Integrate/iinfo.scm 45 */
									long BgL_res1957z00_3278;

									BgL_res1957z00_3278 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_sfunz00_bglt) BgL_o1170z00_2990)));
									BgL_arg1817z00_3277 = BgL_res1957z00_3278;
								}
								BgL_arg1816z00_3276 = (BgL_arg1817z00_3277 - OBJECT_TYPE);
							}
							BgL_arg1613z00_3275 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_3276);
						}
						BgL_arg1612z00_3274 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1613z00_3275);
					}
					{	/* Integrate/iinfo.scm 45 */
						long BgL_res1959z00_3279;

						{	/* Integrate/iinfo.scm 45 */
							obj_t BgL_tmpz00_4601;

							BgL_tmpz00_4601 = ((obj_t) BgL_arg1612z00_3274);
							BgL_res1959z00_3279 = BGL_CLASS_INDEX(BgL_tmpz00_4601);
						}
						BgL_arg1611z00_3273 = BgL_res1959z00_3279;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_sfunz00_bglt) BgL_o1170z00_2990)), BgL_arg1611z00_3273);
			}
			{	/* Integrate/iinfo.scm 45 */
				BgL_objectz00_bglt BgL_tmpz00_4607;

				BgL_tmpz00_4607 =
					((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_o1170z00_2990));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4607, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_o1170z00_2990));
			return ((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_o1170z00_2990));
		}

	}



/* &<@anonymous:1605> */
	obj_t BGl_z62zc3z04anonymousza31605ze3ze5zzintegrate_infoz00(obj_t
		BgL_envz00_2991, obj_t BgL_new1169z00_2992)
	{
		{	/* Integrate/iinfo.scm 45 */
			{
				BgL_sfunz00_bglt BgL_auxz00_4615;

				((((BgL_funz00_bglt) COBJECT(
								((BgL_funz00_bglt)
									((BgL_sfunz00_bglt) BgL_new1169z00_2992))))->BgL_arityz00) =
					((long) ((long) 0)), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1169z00_2992))))->BgL_sidezd2effectzd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1169z00_2992))))->BgL_predicatezd2ofzd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1169z00_2992))))->BgL_stackzd2allocatorzd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1169z00_2992))))->BgL_topzf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1169z00_2992))))->BgL_thezd2closurezd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1169z00_2992))))->BgL_effectz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1169z00_2992))))->BgL_failsafez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1169z00_2992))))->BgL_argszd2noescapezd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1169z00_2992))))->BgL_propertyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1169z00_2992))))->BgL_argsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1169z00_2992))))->BgL_argszd2namezd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1169z00_2992))))->BgL_bodyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1169z00_2992))))->BgL_classz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1169z00_2992))))->BgL_dssslzd2keywordszd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1169z00_2992))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1169z00_2992))))->BgL_optionalsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1169z00_2992))))->BgL_keysz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1169z00_2992))))->BgL_thezd2closurezd2globalz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1169z00_2992))))->BgL_strengthz00) =
					((obj_t) CNST_TABLE_REF(((long) 31))), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1169z00_2992))))->BgL_stackablez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4680;

					{
						obj_t BgL_auxz00_4681;

						{	/* Integrate/iinfo.scm 45 */
							BgL_objectz00_bglt BgL_tmpz00_4682;

							BgL_tmpz00_4682 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_new1169z00_2992));
							BgL_auxz00_4681 = BGL_OBJECT_WIDENING(BgL_tmpz00_4682);
						}
						BgL_auxz00_4680 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4681);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4680))->
							BgL_ownerz00) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4688;

					{
						obj_t BgL_auxz00_4689;

						{	/* Integrate/iinfo.scm 45 */
							BgL_objectz00_bglt BgL_tmpz00_4690;

							BgL_tmpz00_4690 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_new1169z00_2992));
							BgL_auxz00_4689 = BGL_OBJECT_WIDENING(BgL_tmpz00_4690);
						}
						BgL_auxz00_4688 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4689);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4688))->
							BgL_freez00) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4696;

					{
						obj_t BgL_auxz00_4697;

						{	/* Integrate/iinfo.scm 45 */
							BgL_objectz00_bglt BgL_tmpz00_4698;

							BgL_tmpz00_4698 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_new1169z00_2992));
							BgL_auxz00_4697 = BGL_OBJECT_WIDENING(BgL_tmpz00_4698);
						}
						BgL_auxz00_4696 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4697);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4696))->
							BgL_boundz00) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4704;

					{
						obj_t BgL_auxz00_4705;

						{	/* Integrate/iinfo.scm 45 */
							BgL_objectz00_bglt BgL_tmpz00_4706;

							BgL_tmpz00_4706 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_new1169z00_2992));
							BgL_auxz00_4705 = BGL_OBJECT_WIDENING(BgL_tmpz00_4706);
						}
						BgL_auxz00_4704 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4705);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4704))->
							BgL_cfromz00) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4712;

					{
						obj_t BgL_auxz00_4713;

						{	/* Integrate/iinfo.scm 45 */
							BgL_objectz00_bglt BgL_tmpz00_4714;

							BgL_tmpz00_4714 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_new1169z00_2992));
							BgL_auxz00_4713 = BGL_OBJECT_WIDENING(BgL_tmpz00_4714);
						}
						BgL_auxz00_4712 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4713);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4712))->BgL_ctoz00) =
						((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4720;

					{
						obj_t BgL_auxz00_4721;

						{	/* Integrate/iinfo.scm 45 */
							BgL_objectz00_bglt BgL_tmpz00_4722;

							BgL_tmpz00_4722 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_new1169z00_2992));
							BgL_auxz00_4721 = BGL_OBJECT_WIDENING(BgL_tmpz00_4722);
						}
						BgL_auxz00_4720 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4721);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4720))->BgL_kz00) =
						((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4728;

					{
						obj_t BgL_auxz00_4729;

						{	/* Integrate/iinfo.scm 45 */
							BgL_objectz00_bglt BgL_tmpz00_4730;

							BgL_tmpz00_4730 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_new1169z00_2992));
							BgL_auxz00_4729 = BGL_OBJECT_WIDENING(BgL_tmpz00_4730);
						}
						BgL_auxz00_4728 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4729);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4728))->
							BgL_kza2za2) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4736;

					{
						obj_t BgL_auxz00_4737;

						{	/* Integrate/iinfo.scm 45 */
							BgL_objectz00_bglt BgL_tmpz00_4738;

							BgL_tmpz00_4738 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_new1169z00_2992));
							BgL_auxz00_4737 = BGL_OBJECT_WIDENING(BgL_tmpz00_4738);
						}
						BgL_auxz00_4736 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4737);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4736))->BgL_uz00) =
						((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4744;

					{
						obj_t BgL_auxz00_4745;

						{	/* Integrate/iinfo.scm 45 */
							BgL_objectz00_bglt BgL_tmpz00_4746;

							BgL_tmpz00_4746 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_new1169z00_2992));
							BgL_auxz00_4745 = BGL_OBJECT_WIDENING(BgL_tmpz00_4746);
						}
						BgL_auxz00_4744 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4745);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4744))->BgL_cnz00) =
						((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4752;

					{
						obj_t BgL_auxz00_4753;

						{	/* Integrate/iinfo.scm 45 */
							BgL_objectz00_bglt BgL_tmpz00_4754;

							BgL_tmpz00_4754 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_new1169z00_2992));
							BgL_auxz00_4753 = BGL_OBJECT_WIDENING(BgL_tmpz00_4754);
						}
						BgL_auxz00_4752 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4753);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4752))->BgL_ctz00) =
						((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4760;

					{
						obj_t BgL_auxz00_4761;

						{	/* Integrate/iinfo.scm 45 */
							BgL_objectz00_bglt BgL_tmpz00_4762;

							BgL_tmpz00_4762 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_new1169z00_2992));
							BgL_auxz00_4761 = BGL_OBJECT_WIDENING(BgL_tmpz00_4762);
						}
						BgL_auxz00_4760 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4761);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4760))->
							BgL_kontz00) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4768;

					{
						obj_t BgL_auxz00_4769;

						{	/* Integrate/iinfo.scm 45 */
							BgL_objectz00_bglt BgL_tmpz00_4770;

							BgL_tmpz00_4770 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_new1169z00_2992));
							BgL_auxz00_4769 = BGL_OBJECT_WIDENING(BgL_tmpz00_4770);
						}
						BgL_auxz00_4768 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4769);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4768))->
							BgL_gzf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
				}
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4776;

					{
						obj_t BgL_auxz00_4777;

						{	/* Integrate/iinfo.scm 45 */
							BgL_objectz00_bglt BgL_tmpz00_4778;

							BgL_tmpz00_4778 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_new1169z00_2992));
							BgL_auxz00_4777 = BGL_OBJECT_WIDENING(BgL_tmpz00_4778);
						}
						BgL_auxz00_4776 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4777);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4776))->
							BgL_forcegzf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
				}
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4784;

					{
						obj_t BgL_auxz00_4785;

						{	/* Integrate/iinfo.scm 45 */
							BgL_objectz00_bglt BgL_tmpz00_4786;

							BgL_tmpz00_4786 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_new1169z00_2992));
							BgL_auxz00_4785 = BGL_OBJECT_WIDENING(BgL_tmpz00_4786);
						}
						BgL_auxz00_4784 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4785);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4784))->BgL_lz00) =
						((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4792;

					{
						obj_t BgL_auxz00_4793;

						{	/* Integrate/iinfo.scm 45 */
							BgL_objectz00_bglt BgL_tmpz00_4794;

							BgL_tmpz00_4794 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_new1169z00_2992));
							BgL_auxz00_4793 = BGL_OBJECT_WIDENING(BgL_tmpz00_4794);
						}
						BgL_auxz00_4792 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4793);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4792))->BgL_ledz00) =
						((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4800;

					{
						obj_t BgL_auxz00_4801;

						{	/* Integrate/iinfo.scm 45 */
							BgL_objectz00_bglt BgL_tmpz00_4802;

							BgL_tmpz00_4802 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_new1169z00_2992));
							BgL_auxz00_4801 = BGL_OBJECT_WIDENING(BgL_tmpz00_4802);
						}
						BgL_auxz00_4800 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4801);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4800))->
							BgL_istampz00) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4808;

					{
						obj_t BgL_auxz00_4809;

						{	/* Integrate/iinfo.scm 45 */
							BgL_objectz00_bglt BgL_tmpz00_4810;

							BgL_tmpz00_4810 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_new1169z00_2992));
							BgL_auxz00_4809 = BGL_OBJECT_WIDENING(BgL_tmpz00_4810);
						}
						BgL_auxz00_4808 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4809);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4808))->
							BgL_globalz00) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4816;

					{
						obj_t BgL_auxz00_4817;

						{	/* Integrate/iinfo.scm 45 */
							BgL_objectz00_bglt BgL_tmpz00_4818;

							BgL_tmpz00_4818 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_new1169z00_2992));
							BgL_auxz00_4817 = BGL_OBJECT_WIDENING(BgL_tmpz00_4818);
						}
						BgL_auxz00_4816 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4817);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4816))->
							BgL_kapturedz00) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4824;

					{
						obj_t BgL_auxz00_4825;

						{	/* Integrate/iinfo.scm 45 */
							BgL_objectz00_bglt BgL_tmpz00_4826;

							BgL_tmpz00_4826 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_new1169z00_2992));
							BgL_auxz00_4825 = BGL_OBJECT_WIDENING(BgL_tmpz00_4826);
						}
						BgL_auxz00_4824 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4825);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4824))->
							BgL_tailzd2coercionzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4832;

					{
						obj_t BgL_auxz00_4833;

						{	/* Integrate/iinfo.scm 45 */
							BgL_objectz00_bglt BgL_tmpz00_4834;

							BgL_tmpz00_4834 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_new1169z00_2992));
							BgL_auxz00_4833 = BGL_OBJECT_WIDENING(BgL_tmpz00_4834);
						}
						BgL_auxz00_4832 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4833);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4832))->
							BgL_xhdlzf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
				}
				BgL_auxz00_4615 = ((BgL_sfunz00_bglt) BgL_new1169z00_2992);
				return ((obj_t) BgL_auxz00_4615);
			}
		}

	}



/* &lambda1600 */
	BgL_sfunz00_bglt BGl_z62lambda1600z62zzintegrate_infoz00(obj_t
		BgL_envz00_2993, obj_t BgL_o1166z00_2994)
	{
		{	/* Integrate/iinfo.scm 45 */
			{	/* Integrate/iinfo.scm 45 */
				BgL_sfunzf2iinfozf2_bglt BgL_wide1168z00_3282;

				BgL_wide1168z00_3282 =
					((BgL_sfunzf2iinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_sfunzf2iinfozf2_bgl))));
				{	/* Integrate/iinfo.scm 45 */
					obj_t BgL_auxz00_4847;
					BgL_objectz00_bglt BgL_tmpz00_4843;

					BgL_auxz00_4847 = ((obj_t) BgL_wide1168z00_3282);
					BgL_tmpz00_4843 =
						((BgL_objectz00_bglt)
						((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_o1166z00_2994)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4843, BgL_auxz00_4847);
				}
				((BgL_objectz00_bglt)
					((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_o1166z00_2994)));
				{	/* Integrate/iinfo.scm 45 */
					long BgL_arg1604z00_3283;

					{	/* Integrate/iinfo.scm 45 */
						long BgL_res1956z00_3284;

						BgL_res1956z00_3284 =
							BGL_CLASS_INDEX(BGl_sfunzf2Iinfozf2zzintegrate_infoz00);
						BgL_arg1604z00_3283 = BgL_res1956z00_3284;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_sfunz00_bglt)
								((BgL_sfunz00_bglt) BgL_o1166z00_2994))), BgL_arg1604z00_3283);
				}
				return
					((BgL_sfunz00_bglt)
					((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_o1166z00_2994)));
			}
		}

	}



/* &lambda1594 */
	BgL_sfunz00_bglt BGl_z62lambda1594z62zzintegrate_infoz00(obj_t
		BgL_envz00_2995, obj_t BgL_arity1125z00_2996,
		obj_t BgL_sidezd2effect1126zd2_2997, obj_t BgL_predicatezd2of1127zd2_2998,
		obj_t BgL_stackzd2allocator1128zd2_2999, obj_t BgL_topzf31129zf3_3000,
		obj_t BgL_thezd2closure1130zd2_3001, obj_t BgL_effect1131z00_3002,
		obj_t BgL_failsafe1132z00_3003, obj_t BgL_argszd2noescape1133zd2_3004,
		obj_t BgL_property1134z00_3005, obj_t BgL_args1135z00_3006,
		obj_t BgL_argszd2name1136zd2_3007, obj_t BgL_body1137z00_3008,
		obj_t BgL_class1138z00_3009, obj_t BgL_dssslzd2keywords1139zd2_3010,
		obj_t BgL_loc1140z00_3011, obj_t BgL_optionals1141z00_3012,
		obj_t BgL_keys1142z00_3013, obj_t BgL_thezd2closurezd2global1143z00_3014,
		obj_t BgL_strength1144z00_3015, obj_t BgL_stackable1145z00_3016,
		obj_t BgL_owner1146z00_3017, obj_t BgL_free1147z00_3018,
		obj_t BgL_bound1148z00_3019, obj_t BgL_cfrom1149z00_3020,
		obj_t BgL_cto1150z00_3021, obj_t BgL_k1151z00_3022,
		obj_t BgL_kza21152za2_3023, obj_t BgL_u1153z00_3024,
		obj_t BgL_cn1154z00_3025, obj_t BgL_ct1155z00_3026,
		obj_t BgL_kont1156z00_3027, obj_t BgL_gzf31157zf3_3028,
		obj_t BgL_forcegzf31158zf3_3029, obj_t BgL_l1159z00_3030,
		obj_t BgL_led1160z00_3031, obj_t BgL_istamp1161z00_3032,
		obj_t BgL_global1162z00_3033, obj_t BgL_kaptured1163z00_3034,
		obj_t BgL_tailzd2coercion1164zd2_3035, obj_t BgL_xhdlzf31165zf3_3036)
	{
		{	/* Integrate/iinfo.scm 45 */
			{	/* Integrate/iinfo.scm 45 */
				long BgL_arity1125z00_3285;
				bool_t BgL_topzf31129zf3_3286;
				bool_t BgL_gzf31157zf3_3288;
				bool_t BgL_forcegzf31158zf3_3289;
				bool_t BgL_xhdlzf31165zf3_3290;

				BgL_arity1125z00_3285 = (long) CINT(BgL_arity1125z00_2996);
				BgL_topzf31129zf3_3286 = CBOOL(BgL_topzf31129zf3_3000);
				BgL_gzf31157zf3_3288 = CBOOL(BgL_gzf31157zf3_3028);
				BgL_forcegzf31158zf3_3289 = CBOOL(BgL_forcegzf31158zf3_3029);
				BgL_xhdlzf31165zf3_3290 = CBOOL(BgL_xhdlzf31165zf3_3036);
				{	/* Integrate/iinfo.scm 45 */
					BgL_sfunz00_bglt BgL_new1197z00_3291;

					{	/* Integrate/iinfo.scm 45 */
						BgL_sfunz00_bglt BgL_tmp1195z00_3292;
						BgL_sfunzf2iinfozf2_bglt BgL_wide1196z00_3293;

						{
							BgL_sfunz00_bglt BgL_auxz00_4866;

							{	/* Integrate/iinfo.scm 45 */
								BgL_sfunz00_bglt BgL_new1194z00_3294;

								BgL_new1194z00_3294 =
									((BgL_sfunz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_sfunz00_bgl))));
								{	/* Integrate/iinfo.scm 45 */
									long BgL_arg1599z00_3295;

									{	/* Integrate/iinfo.scm 45 */
										long BgL_res1954z00_3296;

										BgL_res1954z00_3296 =
											BGL_CLASS_INDEX(BGl_sfunz00zzast_varz00);
										BgL_arg1599z00_3295 = BgL_res1954z00_3296;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1194z00_3294),
										BgL_arg1599z00_3295);
								}
								{	/* Integrate/iinfo.scm 45 */
									BgL_objectz00_bglt BgL_tmpz00_4871;

									BgL_tmpz00_4871 = ((BgL_objectz00_bglt) BgL_new1194z00_3294);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4871, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1194z00_3294);
								BgL_auxz00_4866 = BgL_new1194z00_3294;
							}
							BgL_tmp1195z00_3292 = ((BgL_sfunz00_bglt) BgL_auxz00_4866);
						}
						BgL_wide1196z00_3293 =
							((BgL_sfunzf2iinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_sfunzf2iinfozf2_bgl))));
						{	/* Integrate/iinfo.scm 45 */
							obj_t BgL_auxz00_4879;
							BgL_objectz00_bglt BgL_tmpz00_4877;

							BgL_auxz00_4879 = ((obj_t) BgL_wide1196z00_3293);
							BgL_tmpz00_4877 = ((BgL_objectz00_bglt) BgL_tmp1195z00_3292);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4877, BgL_auxz00_4879);
						}
						((BgL_objectz00_bglt) BgL_tmp1195z00_3292);
						{	/* Integrate/iinfo.scm 45 */
							long BgL_arg1597z00_3297;

							{	/* Integrate/iinfo.scm 45 */
								long BgL_res1955z00_3298;

								BgL_res1955z00_3298 =
									BGL_CLASS_INDEX(BGl_sfunzf2Iinfozf2zzintegrate_infoz00);
								BgL_arg1597z00_3297 = BgL_res1955z00_3298;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1195z00_3292),
								BgL_arg1597z00_3297);
						}
						BgL_new1197z00_3291 = ((BgL_sfunz00_bglt) BgL_tmp1195z00_3292);
					}
					((((BgL_funz00_bglt) COBJECT(
									((BgL_funz00_bglt) BgL_new1197z00_3291)))->BgL_arityz00) =
						((long) BgL_arity1125z00_3285), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
										BgL_new1197z00_3291)))->BgL_sidezd2effectzd2) =
						((obj_t) BgL_sidezd2effect1126zd2_2997), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
										BgL_new1197z00_3291)))->BgL_predicatezd2ofzd2) =
						((obj_t) BgL_predicatezd2of1127zd2_2998), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
										BgL_new1197z00_3291)))->BgL_stackzd2allocatorzd2) =
						((obj_t) BgL_stackzd2allocator1128zd2_2999), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
										BgL_new1197z00_3291)))->BgL_topzf3zf3) =
						((bool_t) BgL_topzf31129zf3_3286), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
										BgL_new1197z00_3291)))->BgL_thezd2closurezd2) =
						((obj_t) BgL_thezd2closure1130zd2_3001), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
										BgL_new1197z00_3291)))->BgL_effectz00) =
						((obj_t) BgL_effect1131z00_3002), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
										BgL_new1197z00_3291)))->BgL_failsafez00) =
						((obj_t) BgL_failsafe1132z00_3003), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
										BgL_new1197z00_3291)))->BgL_argszd2noescapezd2) =
						((obj_t) BgL_argszd2noescape1133zd2_3004), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1197z00_3291)))->BgL_propertyz00) =
						((obj_t) BgL_property1134z00_3005), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1197z00_3291)))->BgL_argsz00) =
						((obj_t) BgL_args1135z00_3006), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1197z00_3291)))->BgL_argszd2namezd2) =
						((obj_t) BgL_argszd2name1136zd2_3007), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1197z00_3291)))->BgL_bodyz00) =
						((obj_t) BgL_body1137z00_3008), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1197z00_3291)))->BgL_classz00) =
						((obj_t) BgL_class1138z00_3009), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1197z00_3291)))->BgL_dssslzd2keywordszd2) =
						((obj_t) BgL_dssslzd2keywords1139zd2_3010), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1197z00_3291)))->BgL_locz00) =
						((obj_t) BgL_loc1140z00_3011), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1197z00_3291)))->BgL_optionalsz00) =
						((obj_t) BgL_optionals1141z00_3012), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1197z00_3291)))->BgL_keysz00) =
						((obj_t) BgL_keys1142z00_3013), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1197z00_3291)))->BgL_thezd2closurezd2globalz00) =
						((obj_t) BgL_thezd2closurezd2global1143z00_3014), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1197z00_3291)))->BgL_strengthz00) =
						((obj_t) ((obj_t) BgL_strength1144z00_3015)), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1197z00_3291)))->BgL_stackablez00) =
						((obj_t) BgL_stackable1145z00_3016), BUNSPEC);
					{
						BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4930;

						{
							obj_t BgL_auxz00_4931;

							{	/* Integrate/iinfo.scm 45 */
								BgL_objectz00_bglt BgL_tmpz00_4932;

								BgL_tmpz00_4932 = ((BgL_objectz00_bglt) BgL_new1197z00_3291);
								BgL_auxz00_4931 = BGL_OBJECT_WIDENING(BgL_tmpz00_4932);
							}
							BgL_auxz00_4930 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4931);
						}
						((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4930))->
								BgL_ownerz00) = ((obj_t) BgL_owner1146z00_3017), BUNSPEC);
					}
					{
						BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4937;

						{
							obj_t BgL_auxz00_4938;

							{	/* Integrate/iinfo.scm 45 */
								BgL_objectz00_bglt BgL_tmpz00_4939;

								BgL_tmpz00_4939 = ((BgL_objectz00_bglt) BgL_new1197z00_3291);
								BgL_auxz00_4938 = BGL_OBJECT_WIDENING(BgL_tmpz00_4939);
							}
							BgL_auxz00_4937 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4938);
						}
						((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4937))->
								BgL_freez00) = ((obj_t) BgL_free1147z00_3018), BUNSPEC);
					}
					{
						BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4944;

						{
							obj_t BgL_auxz00_4945;

							{	/* Integrate/iinfo.scm 45 */
								BgL_objectz00_bglt BgL_tmpz00_4946;

								BgL_tmpz00_4946 = ((BgL_objectz00_bglt) BgL_new1197z00_3291);
								BgL_auxz00_4945 = BGL_OBJECT_WIDENING(BgL_tmpz00_4946);
							}
							BgL_auxz00_4944 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4945);
						}
						((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4944))->
								BgL_boundz00) = ((obj_t) BgL_bound1148z00_3019), BUNSPEC);
					}
					{
						BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4951;

						{
							obj_t BgL_auxz00_4952;

							{	/* Integrate/iinfo.scm 45 */
								BgL_objectz00_bglt BgL_tmpz00_4953;

								BgL_tmpz00_4953 = ((BgL_objectz00_bglt) BgL_new1197z00_3291);
								BgL_auxz00_4952 = BGL_OBJECT_WIDENING(BgL_tmpz00_4953);
							}
							BgL_auxz00_4951 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4952);
						}
						((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4951))->
								BgL_cfromz00) = ((obj_t) BgL_cfrom1149z00_3020), BUNSPEC);
					}
					{
						BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4958;

						{
							obj_t BgL_auxz00_4959;

							{	/* Integrate/iinfo.scm 45 */
								BgL_objectz00_bglt BgL_tmpz00_4960;

								BgL_tmpz00_4960 = ((BgL_objectz00_bglt) BgL_new1197z00_3291);
								BgL_auxz00_4959 = BGL_OBJECT_WIDENING(BgL_tmpz00_4960);
							}
							BgL_auxz00_4958 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4959);
						}
						((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4958))->
								BgL_ctoz00) = ((obj_t) BgL_cto1150z00_3021), BUNSPEC);
					}
					{
						BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4965;

						{
							obj_t BgL_auxz00_4966;

							{	/* Integrate/iinfo.scm 45 */
								BgL_objectz00_bglt BgL_tmpz00_4967;

								BgL_tmpz00_4967 = ((BgL_objectz00_bglt) BgL_new1197z00_3291);
								BgL_auxz00_4966 = BGL_OBJECT_WIDENING(BgL_tmpz00_4967);
							}
							BgL_auxz00_4965 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4966);
						}
						((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4965))->BgL_kz00) =
							((obj_t) BgL_k1151z00_3022), BUNSPEC);
					}
					{
						BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4972;

						{
							obj_t BgL_auxz00_4973;

							{	/* Integrate/iinfo.scm 45 */
								BgL_objectz00_bglt BgL_tmpz00_4974;

								BgL_tmpz00_4974 = ((BgL_objectz00_bglt) BgL_new1197z00_3291);
								BgL_auxz00_4973 = BGL_OBJECT_WIDENING(BgL_tmpz00_4974);
							}
							BgL_auxz00_4972 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4973);
						}
						((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4972))->
								BgL_kza2za2) = ((obj_t) BgL_kza21152za2_3023), BUNSPEC);
					}
					{
						BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4979;

						{
							obj_t BgL_auxz00_4980;

							{	/* Integrate/iinfo.scm 45 */
								BgL_objectz00_bglt BgL_tmpz00_4981;

								BgL_tmpz00_4981 = ((BgL_objectz00_bglt) BgL_new1197z00_3291);
								BgL_auxz00_4980 = BGL_OBJECT_WIDENING(BgL_tmpz00_4981);
							}
							BgL_auxz00_4979 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4980);
						}
						((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4979))->BgL_uz00) =
							((obj_t) BgL_u1153z00_3024), BUNSPEC);
					}
					{
						BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4986;

						{
							obj_t BgL_auxz00_4987;

							{	/* Integrate/iinfo.scm 45 */
								BgL_objectz00_bglt BgL_tmpz00_4988;

								BgL_tmpz00_4988 = ((BgL_objectz00_bglt) BgL_new1197z00_3291);
								BgL_auxz00_4987 = BGL_OBJECT_WIDENING(BgL_tmpz00_4988);
							}
							BgL_auxz00_4986 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4987);
						}
						((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4986))->
								BgL_cnz00) = ((obj_t) BgL_cn1154z00_3025), BUNSPEC);
					}
					{
						BgL_sfunzf2iinfozf2_bglt BgL_auxz00_4993;

						{
							obj_t BgL_auxz00_4994;

							{	/* Integrate/iinfo.scm 45 */
								BgL_objectz00_bglt BgL_tmpz00_4995;

								BgL_tmpz00_4995 = ((BgL_objectz00_bglt) BgL_new1197z00_3291);
								BgL_auxz00_4994 = BGL_OBJECT_WIDENING(BgL_tmpz00_4995);
							}
							BgL_auxz00_4993 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_4994);
						}
						((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_4993))->
								BgL_ctz00) = ((obj_t) BgL_ct1155z00_3026), BUNSPEC);
					}
					{
						BgL_sfunzf2iinfozf2_bglt BgL_auxz00_5000;

						{
							obj_t BgL_auxz00_5001;

							{	/* Integrate/iinfo.scm 45 */
								BgL_objectz00_bglt BgL_tmpz00_5002;

								BgL_tmpz00_5002 = ((BgL_objectz00_bglt) BgL_new1197z00_3291);
								BgL_auxz00_5001 = BGL_OBJECT_WIDENING(BgL_tmpz00_5002);
							}
							BgL_auxz00_5000 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_5001);
						}
						((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5000))->
								BgL_kontz00) = ((obj_t) BgL_kont1156z00_3027), BUNSPEC);
					}
					{
						BgL_sfunzf2iinfozf2_bglt BgL_auxz00_5007;

						{
							obj_t BgL_auxz00_5008;

							{	/* Integrate/iinfo.scm 45 */
								BgL_objectz00_bglt BgL_tmpz00_5009;

								BgL_tmpz00_5009 = ((BgL_objectz00_bglt) BgL_new1197z00_3291);
								BgL_auxz00_5008 = BGL_OBJECT_WIDENING(BgL_tmpz00_5009);
							}
							BgL_auxz00_5007 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_5008);
						}
						((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5007))->
								BgL_gzf3zf3) = ((bool_t) BgL_gzf31157zf3_3288), BUNSPEC);
					}
					{
						BgL_sfunzf2iinfozf2_bglt BgL_auxz00_5014;

						{
							obj_t BgL_auxz00_5015;

							{	/* Integrate/iinfo.scm 45 */
								BgL_objectz00_bglt BgL_tmpz00_5016;

								BgL_tmpz00_5016 = ((BgL_objectz00_bglt) BgL_new1197z00_3291);
								BgL_auxz00_5015 = BGL_OBJECT_WIDENING(BgL_tmpz00_5016);
							}
							BgL_auxz00_5014 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_5015);
						}
						((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5014))->
								BgL_forcegzf3zf3) =
							((bool_t) BgL_forcegzf31158zf3_3289), BUNSPEC);
					}
					{
						BgL_sfunzf2iinfozf2_bglt BgL_auxz00_5021;

						{
							obj_t BgL_auxz00_5022;

							{	/* Integrate/iinfo.scm 45 */
								BgL_objectz00_bglt BgL_tmpz00_5023;

								BgL_tmpz00_5023 = ((BgL_objectz00_bglt) BgL_new1197z00_3291);
								BgL_auxz00_5022 = BGL_OBJECT_WIDENING(BgL_tmpz00_5023);
							}
							BgL_auxz00_5021 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_5022);
						}
						((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5021))->BgL_lz00) =
							((obj_t) BgL_l1159z00_3030), BUNSPEC);
					}
					{
						BgL_sfunzf2iinfozf2_bglt BgL_auxz00_5028;

						{
							obj_t BgL_auxz00_5029;

							{	/* Integrate/iinfo.scm 45 */
								BgL_objectz00_bglt BgL_tmpz00_5030;

								BgL_tmpz00_5030 = ((BgL_objectz00_bglt) BgL_new1197z00_3291);
								BgL_auxz00_5029 = BGL_OBJECT_WIDENING(BgL_tmpz00_5030);
							}
							BgL_auxz00_5028 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_5029);
						}
						((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5028))->
								BgL_ledz00) = ((obj_t) BgL_led1160z00_3031), BUNSPEC);
					}
					{
						BgL_sfunzf2iinfozf2_bglt BgL_auxz00_5035;

						{
							obj_t BgL_auxz00_5036;

							{	/* Integrate/iinfo.scm 45 */
								BgL_objectz00_bglt BgL_tmpz00_5037;

								BgL_tmpz00_5037 = ((BgL_objectz00_bglt) BgL_new1197z00_3291);
								BgL_auxz00_5036 = BGL_OBJECT_WIDENING(BgL_tmpz00_5037);
							}
							BgL_auxz00_5035 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_5036);
						}
						((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5035))->
								BgL_istampz00) = ((obj_t) BgL_istamp1161z00_3032), BUNSPEC);
					}
					{
						BgL_sfunzf2iinfozf2_bglt BgL_auxz00_5042;

						{
							obj_t BgL_auxz00_5043;

							{	/* Integrate/iinfo.scm 45 */
								BgL_objectz00_bglt BgL_tmpz00_5044;

								BgL_tmpz00_5044 = ((BgL_objectz00_bglt) BgL_new1197z00_3291);
								BgL_auxz00_5043 = BGL_OBJECT_WIDENING(BgL_tmpz00_5044);
							}
							BgL_auxz00_5042 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_5043);
						}
						((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5042))->
								BgL_globalz00) = ((obj_t) BgL_global1162z00_3033), BUNSPEC);
					}
					{
						BgL_sfunzf2iinfozf2_bglt BgL_auxz00_5049;

						{
							obj_t BgL_auxz00_5050;

							{	/* Integrate/iinfo.scm 45 */
								BgL_objectz00_bglt BgL_tmpz00_5051;

								BgL_tmpz00_5051 = ((BgL_objectz00_bglt) BgL_new1197z00_3291);
								BgL_auxz00_5050 = BGL_OBJECT_WIDENING(BgL_tmpz00_5051);
							}
							BgL_auxz00_5049 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_5050);
						}
						((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5049))->
								BgL_kapturedz00) = ((obj_t) BgL_kaptured1163z00_3034), BUNSPEC);
					}
					{
						BgL_sfunzf2iinfozf2_bglt BgL_auxz00_5056;

						{
							obj_t BgL_auxz00_5057;

							{	/* Integrate/iinfo.scm 45 */
								BgL_objectz00_bglt BgL_tmpz00_5058;

								BgL_tmpz00_5058 = ((BgL_objectz00_bglt) BgL_new1197z00_3291);
								BgL_auxz00_5057 = BGL_OBJECT_WIDENING(BgL_tmpz00_5058);
							}
							BgL_auxz00_5056 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_5057);
						}
						((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5056))->
								BgL_tailzd2coercionzd2) =
							((obj_t) BgL_tailzd2coercion1164zd2_3035), BUNSPEC);
					}
					{
						BgL_sfunzf2iinfozf2_bglt BgL_auxz00_5063;

						{
							obj_t BgL_auxz00_5064;

							{	/* Integrate/iinfo.scm 45 */
								BgL_objectz00_bglt BgL_tmpz00_5065;

								BgL_tmpz00_5065 = ((BgL_objectz00_bglt) BgL_new1197z00_3291);
								BgL_auxz00_5064 = BGL_OBJECT_WIDENING(BgL_tmpz00_5065);
							}
							BgL_auxz00_5063 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_5064);
						}
						((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5063))->
								BgL_xhdlzf3zf3) = ((bool_t) BgL_xhdlzf31165zf3_3290), BUNSPEC);
					}
					return BgL_new1197z00_3291;
				}
			}
		}

	}



/* &<@anonymous:1873> */
	obj_t BGl_z62zc3z04anonymousza31873ze3ze5zzintegrate_infoz00(obj_t
		BgL_envz00_3037)
	{
		{	/* Integrate/iinfo.scm 45 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1872 */
	obj_t BGl_z62lambda1872z62zzintegrate_infoz00(obj_t BgL_envz00_3038,
		obj_t BgL_oz00_3039, obj_t BgL_vz00_3040)
	{
		{	/* Integrate/iinfo.scm 45 */
			{	/* Integrate/iinfo.scm 45 */
				bool_t BgL_vz00_3300;

				BgL_vz00_3300 = CBOOL(BgL_vz00_3040);
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_5072;

					{
						obj_t BgL_auxz00_5073;

						{	/* Integrate/iinfo.scm 45 */
							BgL_objectz00_bglt BgL_tmpz00_5074;

							BgL_tmpz00_5074 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3039));
							BgL_auxz00_5073 = BGL_OBJECT_WIDENING(BgL_tmpz00_5074);
						}
						BgL_auxz00_5072 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_5073);
					}
					return
						((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5072))->
							BgL_xhdlzf3zf3) = ((bool_t) BgL_vz00_3300), BUNSPEC);
				}
			}
		}

	}



/* &lambda1871 */
	obj_t BGl_z62lambda1871z62zzintegrate_infoz00(obj_t BgL_envz00_3041,
		obj_t BgL_oz00_3042)
	{
		{	/* Integrate/iinfo.scm 45 */
			{	/* Integrate/iinfo.scm 45 */
				bool_t BgL_tmpz00_5080;

				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_5081;

					{
						obj_t BgL_auxz00_5082;

						{	/* Integrate/iinfo.scm 45 */
							BgL_objectz00_bglt BgL_tmpz00_5083;

							BgL_tmpz00_5083 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3042));
							BgL_auxz00_5082 = BGL_OBJECT_WIDENING(BgL_tmpz00_5083);
						}
						BgL_auxz00_5081 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_5082);
					}
					BgL_tmpz00_5080 =
						(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5081))->
						BgL_xhdlzf3zf3);
				}
				return BBOOL(BgL_tmpz00_5080);
			}
		}

	}



/* &<@anonymous:1864> */
	obj_t BGl_z62zc3z04anonymousza31864ze3ze5zzintegrate_infoz00(obj_t
		BgL_envz00_3043)
	{
		{	/* Integrate/iinfo.scm 45 */
			return BUNSPEC;
		}

	}



/* &lambda1863 */
	obj_t BGl_z62lambda1863z62zzintegrate_infoz00(obj_t BgL_envz00_3044,
		obj_t BgL_oz00_3045, obj_t BgL_vz00_3046)
	{
		{	/* Integrate/iinfo.scm 45 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_5090;

				{
					obj_t BgL_auxz00_5091;

					{	/* Integrate/iinfo.scm 45 */
						BgL_objectz00_bglt BgL_tmpz00_5092;

						BgL_tmpz00_5092 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3045));
						BgL_auxz00_5091 = BGL_OBJECT_WIDENING(BgL_tmpz00_5092);
					}
					BgL_auxz00_5090 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_5091);
				}
				return
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5090))->
						BgL_tailzd2coercionzd2) = ((obj_t) BgL_vz00_3046), BUNSPEC);
			}
		}

	}



/* &lambda1862 */
	obj_t BGl_z62lambda1862z62zzintegrate_infoz00(obj_t BgL_envz00_3047,
		obj_t BgL_oz00_3048)
	{
		{	/* Integrate/iinfo.scm 45 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_5098;

				{
					obj_t BgL_auxz00_5099;

					{	/* Integrate/iinfo.scm 45 */
						BgL_objectz00_bglt BgL_tmpz00_5100;

						BgL_tmpz00_5100 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3048));
						BgL_auxz00_5099 = BGL_OBJECT_WIDENING(BgL_tmpz00_5100);
					}
					BgL_auxz00_5098 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_5099);
				}
				return
					(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5098))->
					BgL_tailzd2coercionzd2);
			}
		}

	}



/* &<@anonymous:1856> */
	obj_t BGl_z62zc3z04anonymousza31856ze3ze5zzintegrate_infoz00(obj_t
		BgL_envz00_3049)
	{
		{	/* Integrate/iinfo.scm 45 */
			return BUNSPEC;
		}

	}



/* &lambda1855 */
	obj_t BGl_z62lambda1855z62zzintegrate_infoz00(obj_t BgL_envz00_3050,
		obj_t BgL_oz00_3051, obj_t BgL_vz00_3052)
	{
		{	/* Integrate/iinfo.scm 45 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_5106;

				{
					obj_t BgL_auxz00_5107;

					{	/* Integrate/iinfo.scm 45 */
						BgL_objectz00_bglt BgL_tmpz00_5108;

						BgL_tmpz00_5108 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3051));
						BgL_auxz00_5107 = BGL_OBJECT_WIDENING(BgL_tmpz00_5108);
					}
					BgL_auxz00_5106 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_5107);
				}
				return
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5106))->
						BgL_kapturedz00) = ((obj_t) BgL_vz00_3052), BUNSPEC);
			}
		}

	}



/* &lambda1854 */
	obj_t BGl_z62lambda1854z62zzintegrate_infoz00(obj_t BgL_envz00_3053,
		obj_t BgL_oz00_3054)
	{
		{	/* Integrate/iinfo.scm 45 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_5114;

				{
					obj_t BgL_auxz00_5115;

					{	/* Integrate/iinfo.scm 45 */
						BgL_objectz00_bglt BgL_tmpz00_5116;

						BgL_tmpz00_5116 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3054));
						BgL_auxz00_5115 = BGL_OBJECT_WIDENING(BgL_tmpz00_5116);
					}
					BgL_auxz00_5114 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_5115);
				}
				return
					(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5114))->
					BgL_kapturedz00);
			}
		}

	}



/* &<@anonymous:1848> */
	obj_t BGl_z62zc3z04anonymousza31848ze3ze5zzintegrate_infoz00(obj_t
		BgL_envz00_3055)
	{
		{	/* Integrate/iinfo.scm 45 */
			return BUNSPEC;
		}

	}



/* &lambda1847 */
	obj_t BGl_z62lambda1847z62zzintegrate_infoz00(obj_t BgL_envz00_3056,
		obj_t BgL_oz00_3057, obj_t BgL_vz00_3058)
	{
		{	/* Integrate/iinfo.scm 45 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_5122;

				{
					obj_t BgL_auxz00_5123;

					{	/* Integrate/iinfo.scm 45 */
						BgL_objectz00_bglt BgL_tmpz00_5124;

						BgL_tmpz00_5124 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3057));
						BgL_auxz00_5123 = BGL_OBJECT_WIDENING(BgL_tmpz00_5124);
					}
					BgL_auxz00_5122 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_5123);
				}
				return
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5122))->
						BgL_globalz00) = ((obj_t) BgL_vz00_3058), BUNSPEC);
			}
		}

	}



/* &lambda1846 */
	obj_t BGl_z62lambda1846z62zzintegrate_infoz00(obj_t BgL_envz00_3059,
		obj_t BgL_oz00_3060)
	{
		{	/* Integrate/iinfo.scm 45 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_5130;

				{
					obj_t BgL_auxz00_5131;

					{	/* Integrate/iinfo.scm 45 */
						BgL_objectz00_bglt BgL_tmpz00_5132;

						BgL_tmpz00_5132 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3060));
						BgL_auxz00_5131 = BGL_OBJECT_WIDENING(BgL_tmpz00_5132);
					}
					BgL_auxz00_5130 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_5131);
				}
				return
					(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5130))->
					BgL_globalz00);
			}
		}

	}



/* &<@anonymous:1838> */
	obj_t BGl_z62zc3z04anonymousza31838ze3ze5zzintegrate_infoz00(obj_t
		BgL_envz00_3061)
	{
		{	/* Integrate/iinfo.scm 45 */
			return BUNSPEC;
		}

	}



/* &lambda1837 */
	obj_t BGl_z62lambda1837z62zzintegrate_infoz00(obj_t BgL_envz00_3062,
		obj_t BgL_oz00_3063, obj_t BgL_vz00_3064)
	{
		{	/* Integrate/iinfo.scm 45 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_5138;

				{
					obj_t BgL_auxz00_5139;

					{	/* Integrate/iinfo.scm 45 */
						BgL_objectz00_bglt BgL_tmpz00_5140;

						BgL_tmpz00_5140 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3063));
						BgL_auxz00_5139 = BGL_OBJECT_WIDENING(BgL_tmpz00_5140);
					}
					BgL_auxz00_5138 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_5139);
				}
				return
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5138))->
						BgL_istampz00) = ((obj_t) BgL_vz00_3064), BUNSPEC);
			}
		}

	}



/* &lambda1836 */
	obj_t BGl_z62lambda1836z62zzintegrate_infoz00(obj_t BgL_envz00_3065,
		obj_t BgL_oz00_3066)
	{
		{	/* Integrate/iinfo.scm 45 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_5146;

				{
					obj_t BgL_auxz00_5147;

					{	/* Integrate/iinfo.scm 45 */
						BgL_objectz00_bglt BgL_tmpz00_5148;

						BgL_tmpz00_5148 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3066));
						BgL_auxz00_5147 = BGL_OBJECT_WIDENING(BgL_tmpz00_5148);
					}
					BgL_auxz00_5146 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_5147);
				}
				return
					(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5146))->
					BgL_istampz00);
			}
		}

	}



/* &<@anonymous:1830> */
	obj_t BGl_z62zc3z04anonymousza31830ze3ze5zzintegrate_infoz00(obj_t
		BgL_envz00_3067)
	{
		{	/* Integrate/iinfo.scm 45 */
			return BNIL;
		}

	}



/* &lambda1829 */
	obj_t BGl_z62lambda1829z62zzintegrate_infoz00(obj_t BgL_envz00_3068,
		obj_t BgL_oz00_3069, obj_t BgL_vz00_3070)
	{
		{	/* Integrate/iinfo.scm 45 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_5154;

				{
					obj_t BgL_auxz00_5155;

					{	/* Integrate/iinfo.scm 45 */
						BgL_objectz00_bglt BgL_tmpz00_5156;

						BgL_tmpz00_5156 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3069));
						BgL_auxz00_5155 = BGL_OBJECT_WIDENING(BgL_tmpz00_5156);
					}
					BgL_auxz00_5154 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_5155);
				}
				return
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5154))->BgL_ledz00) =
					((obj_t) BgL_vz00_3070), BUNSPEC);
			}
		}

	}



/* &lambda1828 */
	obj_t BGl_z62lambda1828z62zzintegrate_infoz00(obj_t BgL_envz00_3071,
		obj_t BgL_oz00_3072)
	{
		{	/* Integrate/iinfo.scm 45 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_5162;

				{
					obj_t BgL_auxz00_5163;

					{	/* Integrate/iinfo.scm 45 */
						BgL_objectz00_bglt BgL_tmpz00_5164;

						BgL_tmpz00_5164 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3072));
						BgL_auxz00_5163 = BGL_OBJECT_WIDENING(BgL_tmpz00_5164);
					}
					BgL_auxz00_5162 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_5163);
				}
				return
					(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5162))->BgL_ledz00);
			}
		}

	}



/* &<@anonymous:1823> */
	obj_t BGl_z62zc3z04anonymousza31823ze3ze5zzintegrate_infoz00(obj_t
		BgL_envz00_3073)
	{
		{	/* Integrate/iinfo.scm 45 */
			return BUNSPEC;
		}

	}



/* &lambda1822 */
	obj_t BGl_z62lambda1822z62zzintegrate_infoz00(obj_t BgL_envz00_3074,
		obj_t BgL_oz00_3075, obj_t BgL_vz00_3076)
	{
		{	/* Integrate/iinfo.scm 45 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_5170;

				{
					obj_t BgL_auxz00_5171;

					{	/* Integrate/iinfo.scm 45 */
						BgL_objectz00_bglt BgL_tmpz00_5172;

						BgL_tmpz00_5172 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3075));
						BgL_auxz00_5171 = BGL_OBJECT_WIDENING(BgL_tmpz00_5172);
					}
					BgL_auxz00_5170 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_5171);
				}
				return
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5170))->BgL_lz00) =
					((obj_t) BgL_vz00_3076), BUNSPEC);
			}
		}

	}



/* &lambda1821 */
	obj_t BGl_z62lambda1821z62zzintegrate_infoz00(obj_t BgL_envz00_3077,
		obj_t BgL_oz00_3078)
	{
		{	/* Integrate/iinfo.scm 45 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_5178;

				{
					obj_t BgL_auxz00_5179;

					{	/* Integrate/iinfo.scm 45 */
						BgL_objectz00_bglt BgL_tmpz00_5180;

						BgL_tmpz00_5180 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3078));
						BgL_auxz00_5179 = BGL_OBJECT_WIDENING(BgL_tmpz00_5180);
					}
					BgL_auxz00_5178 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_5179);
				}
				return
					(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5178))->BgL_lz00);
			}
		}

	}



/* &<@anonymous:1804> */
	obj_t BGl_z62zc3z04anonymousza31804ze3ze5zzintegrate_infoz00(obj_t
		BgL_envz00_3079)
	{
		{	/* Integrate/iinfo.scm 45 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1803 */
	obj_t BGl_z62lambda1803z62zzintegrate_infoz00(obj_t BgL_envz00_3080,
		obj_t BgL_oz00_3081, obj_t BgL_vz00_3082)
	{
		{	/* Integrate/iinfo.scm 45 */
			{	/* Integrate/iinfo.scm 45 */
				bool_t BgL_vz00_3315;

				BgL_vz00_3315 = CBOOL(BgL_vz00_3082);
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_5188;

					{
						obj_t BgL_auxz00_5189;

						{	/* Integrate/iinfo.scm 45 */
							BgL_objectz00_bglt BgL_tmpz00_5190;

							BgL_tmpz00_5190 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3081));
							BgL_auxz00_5189 = BGL_OBJECT_WIDENING(BgL_tmpz00_5190);
						}
						BgL_auxz00_5188 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_5189);
					}
					return
						((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5188))->
							BgL_forcegzf3zf3) = ((bool_t) BgL_vz00_3315), BUNSPEC);
				}
			}
		}

	}



/* &lambda1802 */
	obj_t BGl_z62lambda1802z62zzintegrate_infoz00(obj_t BgL_envz00_3083,
		obj_t BgL_oz00_3084)
	{
		{	/* Integrate/iinfo.scm 45 */
			{	/* Integrate/iinfo.scm 45 */
				bool_t BgL_tmpz00_5196;

				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_5197;

					{
						obj_t BgL_auxz00_5198;

						{	/* Integrate/iinfo.scm 45 */
							BgL_objectz00_bglt BgL_tmpz00_5199;

							BgL_tmpz00_5199 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3084));
							BgL_auxz00_5198 = BGL_OBJECT_WIDENING(BgL_tmpz00_5199);
						}
						BgL_auxz00_5197 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_5198);
					}
					BgL_tmpz00_5196 =
						(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5197))->
						BgL_forcegzf3zf3);
				}
				return BBOOL(BgL_tmpz00_5196);
			}
		}

	}



/* &lambda1786 */
	obj_t BGl_z62lambda1786z62zzintegrate_infoz00(obj_t BgL_envz00_3085,
		obj_t BgL_oz00_3086, obj_t BgL_vz00_3087)
	{
		{	/* Integrate/iinfo.scm 45 */
			{	/* Integrate/iinfo.scm 45 */
				bool_t BgL_vz00_3318;

				BgL_vz00_3318 = CBOOL(BgL_vz00_3087);
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_5207;

					{
						obj_t BgL_auxz00_5208;

						{	/* Integrate/iinfo.scm 45 */
							BgL_objectz00_bglt BgL_tmpz00_5209;

							BgL_tmpz00_5209 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3086));
							BgL_auxz00_5208 = BGL_OBJECT_WIDENING(BgL_tmpz00_5209);
						}
						BgL_auxz00_5207 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_5208);
					}
					return
						((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5207))->
							BgL_gzf3zf3) = ((bool_t) BgL_vz00_3318), BUNSPEC);
				}
			}
		}

	}



/* &lambda1785 */
	obj_t BGl_z62lambda1785z62zzintegrate_infoz00(obj_t BgL_envz00_3088,
		obj_t BgL_oz00_3089)
	{
		{	/* Integrate/iinfo.scm 45 */
			{	/* Integrate/iinfo.scm 45 */
				bool_t BgL_tmpz00_5215;

				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_5216;

					{
						obj_t BgL_auxz00_5217;

						{	/* Integrate/iinfo.scm 45 */
							BgL_objectz00_bglt BgL_tmpz00_5218;

							BgL_tmpz00_5218 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3089));
							BgL_auxz00_5217 = BGL_OBJECT_WIDENING(BgL_tmpz00_5218);
						}
						BgL_auxz00_5216 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_5217);
					}
					BgL_tmpz00_5215 =
						(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5216))->
						BgL_gzf3zf3);
				}
				return BBOOL(BgL_tmpz00_5215);
			}
		}

	}



/* &<@anonymous:1778> */
	obj_t BGl_z62zc3z04anonymousza31778ze3ze5zzintegrate_infoz00(obj_t
		BgL_envz00_3090)
	{
		{	/* Integrate/iinfo.scm 45 */
			return BNIL;
		}

	}



/* &lambda1777 */
	obj_t BGl_z62lambda1777z62zzintegrate_infoz00(obj_t BgL_envz00_3091,
		obj_t BgL_oz00_3092, obj_t BgL_vz00_3093)
	{
		{	/* Integrate/iinfo.scm 45 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_5225;

				{
					obj_t BgL_auxz00_5226;

					{	/* Integrate/iinfo.scm 45 */
						BgL_objectz00_bglt BgL_tmpz00_5227;

						BgL_tmpz00_5227 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3092));
						BgL_auxz00_5226 = BGL_OBJECT_WIDENING(BgL_tmpz00_5227);
					}
					BgL_auxz00_5225 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_5226);
				}
				return
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5225))->
						BgL_kontz00) = ((obj_t) BgL_vz00_3093), BUNSPEC);
			}
		}

	}



/* &lambda1776 */
	obj_t BGl_z62lambda1776z62zzintegrate_infoz00(obj_t BgL_envz00_3094,
		obj_t BgL_oz00_3095)
	{
		{	/* Integrate/iinfo.scm 45 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_5233;

				{
					obj_t BgL_auxz00_5234;

					{	/* Integrate/iinfo.scm 45 */
						BgL_objectz00_bglt BgL_tmpz00_5235;

						BgL_tmpz00_5235 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3095));
						BgL_auxz00_5234 = BGL_OBJECT_WIDENING(BgL_tmpz00_5235);
					}
					BgL_auxz00_5233 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_5234);
				}
				return
					(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5233))->BgL_kontz00);
			}
		}

	}



/* &<@anonymous:1760> */
	obj_t BGl_z62zc3z04anonymousza31760ze3ze5zzintegrate_infoz00(obj_t
		BgL_envz00_3096)
	{
		{	/* Integrate/iinfo.scm 45 */
			return BNIL;
		}

	}



/* &lambda1759 */
	obj_t BGl_z62lambda1759z62zzintegrate_infoz00(obj_t BgL_envz00_3097,
		obj_t BgL_oz00_3098, obj_t BgL_vz00_3099)
	{
		{	/* Integrate/iinfo.scm 45 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_5241;

				{
					obj_t BgL_auxz00_5242;

					{	/* Integrate/iinfo.scm 45 */
						BgL_objectz00_bglt BgL_tmpz00_5243;

						BgL_tmpz00_5243 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3098));
						BgL_auxz00_5242 = BGL_OBJECT_WIDENING(BgL_tmpz00_5243);
					}
					BgL_auxz00_5241 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_5242);
				}
				return
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5241))->BgL_ctz00) =
					((obj_t) BgL_vz00_3099), BUNSPEC);
			}
		}

	}



/* &lambda1758 */
	obj_t BGl_z62lambda1758z62zzintegrate_infoz00(obj_t BgL_envz00_3100,
		obj_t BgL_oz00_3101)
	{
		{	/* Integrate/iinfo.scm 45 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_5249;

				{
					obj_t BgL_auxz00_5250;

					{	/* Integrate/iinfo.scm 45 */
						BgL_objectz00_bglt BgL_tmpz00_5251;

						BgL_tmpz00_5251 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3101));
						BgL_auxz00_5250 = BGL_OBJECT_WIDENING(BgL_tmpz00_5251);
					}
					BgL_auxz00_5249 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_5250);
				}
				return
					(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5249))->BgL_ctz00);
			}
		}

	}



/* &<@anonymous:1748> */
	obj_t BGl_z62zc3z04anonymousza31748ze3ze5zzintegrate_infoz00(obj_t
		BgL_envz00_3102)
	{
		{	/* Integrate/iinfo.scm 45 */
			return BNIL;
		}

	}



/* &lambda1747 */
	obj_t BGl_z62lambda1747z62zzintegrate_infoz00(obj_t BgL_envz00_3103,
		obj_t BgL_oz00_3104, obj_t BgL_vz00_3105)
	{
		{	/* Integrate/iinfo.scm 45 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_5257;

				{
					obj_t BgL_auxz00_5258;

					{	/* Integrate/iinfo.scm 45 */
						BgL_objectz00_bglt BgL_tmpz00_5259;

						BgL_tmpz00_5259 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3104));
						BgL_auxz00_5258 = BGL_OBJECT_WIDENING(BgL_tmpz00_5259);
					}
					BgL_auxz00_5257 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_5258);
				}
				return
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5257))->BgL_cnz00) =
					((obj_t) BgL_vz00_3105), BUNSPEC);
			}
		}

	}



/* &lambda1746 */
	obj_t BGl_z62lambda1746z62zzintegrate_infoz00(obj_t BgL_envz00_3106,
		obj_t BgL_oz00_3107)
	{
		{	/* Integrate/iinfo.scm 45 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_5265;

				{
					obj_t BgL_auxz00_5266;

					{	/* Integrate/iinfo.scm 45 */
						BgL_objectz00_bglt BgL_tmpz00_5267;

						BgL_tmpz00_5267 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3107));
						BgL_auxz00_5266 = BGL_OBJECT_WIDENING(BgL_tmpz00_5267);
					}
					BgL_auxz00_5265 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_5266);
				}
				return
					(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5265))->BgL_cnz00);
			}
		}

	}



/* &<@anonymous:1741> */
	obj_t BGl_z62zc3z04anonymousza31741ze3ze5zzintegrate_infoz00(obj_t
		BgL_envz00_3108)
	{
		{	/* Integrate/iinfo.scm 45 */
			return BUNSPEC;
		}

	}



/* &lambda1740 */
	obj_t BGl_z62lambda1740z62zzintegrate_infoz00(obj_t BgL_envz00_3109,
		obj_t BgL_oz00_3110, obj_t BgL_vz00_3111)
	{
		{	/* Integrate/iinfo.scm 45 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_5273;

				{
					obj_t BgL_auxz00_5274;

					{	/* Integrate/iinfo.scm 45 */
						BgL_objectz00_bglt BgL_tmpz00_5275;

						BgL_tmpz00_5275 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3110));
						BgL_auxz00_5274 = BGL_OBJECT_WIDENING(BgL_tmpz00_5275);
					}
					BgL_auxz00_5273 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_5274);
				}
				return
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5273))->BgL_uz00) =
					((obj_t) BgL_vz00_3111), BUNSPEC);
			}
		}

	}



/* &lambda1739 */
	obj_t BGl_z62lambda1739z62zzintegrate_infoz00(obj_t BgL_envz00_3112,
		obj_t BgL_oz00_3113)
	{
		{	/* Integrate/iinfo.scm 45 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_5281;

				{
					obj_t BgL_auxz00_5282;

					{	/* Integrate/iinfo.scm 45 */
						BgL_objectz00_bglt BgL_tmpz00_5283;

						BgL_tmpz00_5283 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3113));
						BgL_auxz00_5282 = BGL_OBJECT_WIDENING(BgL_tmpz00_5283);
					}
					BgL_auxz00_5281 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_5282);
				}
				return
					(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5281))->BgL_uz00);
			}
		}

	}



/* &<@anonymous:1730> */
	obj_t BGl_z62zc3z04anonymousza31730ze3ze5zzintegrate_infoz00(obj_t
		BgL_envz00_3114)
	{
		{	/* Integrate/iinfo.scm 45 */
			return BNIL;
		}

	}



/* &lambda1729 */
	obj_t BGl_z62lambda1729z62zzintegrate_infoz00(obj_t BgL_envz00_3115,
		obj_t BgL_oz00_3116, obj_t BgL_vz00_3117)
	{
		{	/* Integrate/iinfo.scm 45 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_5289;

				{
					obj_t BgL_auxz00_5290;

					{	/* Integrate/iinfo.scm 45 */
						BgL_objectz00_bglt BgL_tmpz00_5291;

						BgL_tmpz00_5291 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3116));
						BgL_auxz00_5290 = BGL_OBJECT_WIDENING(BgL_tmpz00_5291);
					}
					BgL_auxz00_5289 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_5290);
				}
				return
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5289))->
						BgL_kza2za2) = ((obj_t) BgL_vz00_3117), BUNSPEC);
			}
		}

	}



/* &lambda1728 */
	obj_t BGl_z62lambda1728z62zzintegrate_infoz00(obj_t BgL_envz00_3118,
		obj_t BgL_oz00_3119)
	{
		{	/* Integrate/iinfo.scm 45 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_5297;

				{
					obj_t BgL_auxz00_5298;

					{	/* Integrate/iinfo.scm 45 */
						BgL_objectz00_bglt BgL_tmpz00_5299;

						BgL_tmpz00_5299 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3119));
						BgL_auxz00_5298 = BGL_OBJECT_WIDENING(BgL_tmpz00_5299);
					}
					BgL_auxz00_5297 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_5298);
				}
				return
					(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5297))->BgL_kza2za2);
			}
		}

	}



/* &<@anonymous:1714> */
	obj_t BGl_z62zc3z04anonymousza31714ze3ze5zzintegrate_infoz00(obj_t
		BgL_envz00_3120)
	{
		{	/* Integrate/iinfo.scm 45 */
			return BNIL;
		}

	}



/* &lambda1713 */
	obj_t BGl_z62lambda1713z62zzintegrate_infoz00(obj_t BgL_envz00_3121,
		obj_t BgL_oz00_3122, obj_t BgL_vz00_3123)
	{
		{	/* Integrate/iinfo.scm 45 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_5305;

				{
					obj_t BgL_auxz00_5306;

					{	/* Integrate/iinfo.scm 45 */
						BgL_objectz00_bglt BgL_tmpz00_5307;

						BgL_tmpz00_5307 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3122));
						BgL_auxz00_5306 = BGL_OBJECT_WIDENING(BgL_tmpz00_5307);
					}
					BgL_auxz00_5305 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_5306);
				}
				return
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5305))->BgL_kz00) =
					((obj_t) BgL_vz00_3123), BUNSPEC);
			}
		}

	}



/* &lambda1712 */
	obj_t BGl_z62lambda1712z62zzintegrate_infoz00(obj_t BgL_envz00_3124,
		obj_t BgL_oz00_3125)
	{
		{	/* Integrate/iinfo.scm 45 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_5313;

				{
					obj_t BgL_auxz00_5314;

					{	/* Integrate/iinfo.scm 45 */
						BgL_objectz00_bglt BgL_tmpz00_5315;

						BgL_tmpz00_5315 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3125));
						BgL_auxz00_5314 = BGL_OBJECT_WIDENING(BgL_tmpz00_5315);
					}
					BgL_auxz00_5313 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_5314);
				}
				return
					(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5313))->BgL_kz00);
			}
		}

	}



/* &<@anonymous:1699> */
	obj_t BGl_z62zc3z04anonymousza31699ze3ze5zzintegrate_infoz00(obj_t
		BgL_envz00_3126)
	{
		{	/* Integrate/iinfo.scm 45 */
			return BUNSPEC;
		}

	}



/* &lambda1698 */
	obj_t BGl_z62lambda1698z62zzintegrate_infoz00(obj_t BgL_envz00_3127,
		obj_t BgL_oz00_3128, obj_t BgL_vz00_3129)
	{
		{	/* Integrate/iinfo.scm 45 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_5321;

				{
					obj_t BgL_auxz00_5322;

					{	/* Integrate/iinfo.scm 45 */
						BgL_objectz00_bglt BgL_tmpz00_5323;

						BgL_tmpz00_5323 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3128));
						BgL_auxz00_5322 = BGL_OBJECT_WIDENING(BgL_tmpz00_5323);
					}
					BgL_auxz00_5321 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_5322);
				}
				return
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5321))->BgL_ctoz00) =
					((obj_t) BgL_vz00_3129), BUNSPEC);
			}
		}

	}



/* &lambda1697 */
	obj_t BGl_z62lambda1697z62zzintegrate_infoz00(obj_t BgL_envz00_3130,
		obj_t BgL_oz00_3131)
	{
		{	/* Integrate/iinfo.scm 45 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_5329;

				{
					obj_t BgL_auxz00_5330;

					{	/* Integrate/iinfo.scm 45 */
						BgL_objectz00_bglt BgL_tmpz00_5331;

						BgL_tmpz00_5331 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3131));
						BgL_auxz00_5330 = BGL_OBJECT_WIDENING(BgL_tmpz00_5331);
					}
					BgL_auxz00_5329 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_5330);
				}
				return
					(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5329))->BgL_ctoz00);
			}
		}

	}



/* &<@anonymous:1687> */
	obj_t BGl_z62zc3z04anonymousza31687ze3ze5zzintegrate_infoz00(obj_t
		BgL_envz00_3132)
	{
		{	/* Integrate/iinfo.scm 45 */
			return BNIL;
		}

	}



/* &lambda1686 */
	obj_t BGl_z62lambda1686z62zzintegrate_infoz00(obj_t BgL_envz00_3133,
		obj_t BgL_oz00_3134, obj_t BgL_vz00_3135)
	{
		{	/* Integrate/iinfo.scm 45 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_5337;

				{
					obj_t BgL_auxz00_5338;

					{	/* Integrate/iinfo.scm 45 */
						BgL_objectz00_bglt BgL_tmpz00_5339;

						BgL_tmpz00_5339 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3134));
						BgL_auxz00_5338 = BGL_OBJECT_WIDENING(BgL_tmpz00_5339);
					}
					BgL_auxz00_5337 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_5338);
				}
				return
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5337))->
						BgL_cfromz00) = ((obj_t) BgL_vz00_3135), BUNSPEC);
			}
		}

	}



/* &lambda1685 */
	obj_t BGl_z62lambda1685z62zzintegrate_infoz00(obj_t BgL_envz00_3136,
		obj_t BgL_oz00_3137)
	{
		{	/* Integrate/iinfo.scm 45 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_5345;

				{
					obj_t BgL_auxz00_5346;

					{	/* Integrate/iinfo.scm 45 */
						BgL_objectz00_bglt BgL_tmpz00_5347;

						BgL_tmpz00_5347 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3137));
						BgL_auxz00_5346 = BGL_OBJECT_WIDENING(BgL_tmpz00_5347);
					}
					BgL_auxz00_5345 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_5346);
				}
				return
					(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5345))->BgL_cfromz00);
			}
		}

	}



/* &<@anonymous:1666> */
	obj_t BGl_z62zc3z04anonymousza31666ze3ze5zzintegrate_infoz00(obj_t
		BgL_envz00_3138)
	{
		{	/* Integrate/iinfo.scm 45 */
			return BNIL;
		}

	}



/* &lambda1665 */
	obj_t BGl_z62lambda1665z62zzintegrate_infoz00(obj_t BgL_envz00_3139,
		obj_t BgL_oz00_3140, obj_t BgL_vz00_3141)
	{
		{	/* Integrate/iinfo.scm 45 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_5353;

				{
					obj_t BgL_auxz00_5354;

					{	/* Integrate/iinfo.scm 45 */
						BgL_objectz00_bglt BgL_tmpz00_5355;

						BgL_tmpz00_5355 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3140));
						BgL_auxz00_5354 = BGL_OBJECT_WIDENING(BgL_tmpz00_5355);
					}
					BgL_auxz00_5353 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_5354);
				}
				return
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5353))->
						BgL_boundz00) = ((obj_t) BgL_vz00_3141), BUNSPEC);
			}
		}

	}



/* &lambda1664 */
	obj_t BGl_z62lambda1664z62zzintegrate_infoz00(obj_t BgL_envz00_3142,
		obj_t BgL_oz00_3143)
	{
		{	/* Integrate/iinfo.scm 45 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_5361;

				{
					obj_t BgL_auxz00_5362;

					{	/* Integrate/iinfo.scm 45 */
						BgL_objectz00_bglt BgL_tmpz00_5363;

						BgL_tmpz00_5363 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3143));
						BgL_auxz00_5362 = BGL_OBJECT_WIDENING(BgL_tmpz00_5363);
					}
					BgL_auxz00_5361 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_5362);
				}
				return
					(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5361))->BgL_boundz00);
			}
		}

	}



/* &<@anonymous:1643> */
	obj_t BGl_z62zc3z04anonymousza31643ze3ze5zzintegrate_infoz00(obj_t
		BgL_envz00_3144)
	{
		{	/* Integrate/iinfo.scm 45 */
			return BUNSPEC;
		}

	}



/* &lambda1642 */
	obj_t BGl_z62lambda1642z62zzintegrate_infoz00(obj_t BgL_envz00_3145,
		obj_t BgL_oz00_3146, obj_t BgL_vz00_3147)
	{
		{	/* Integrate/iinfo.scm 45 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_5369;

				{
					obj_t BgL_auxz00_5370;

					{	/* Integrate/iinfo.scm 45 */
						BgL_objectz00_bglt BgL_tmpz00_5371;

						BgL_tmpz00_5371 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3146));
						BgL_auxz00_5370 = BGL_OBJECT_WIDENING(BgL_tmpz00_5371);
					}
					BgL_auxz00_5369 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_5370);
				}
				return
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5369))->
						BgL_freez00) = ((obj_t) BgL_vz00_3147), BUNSPEC);
			}
		}

	}



/* &lambda1641 */
	obj_t BGl_z62lambda1641z62zzintegrate_infoz00(obj_t BgL_envz00_3148,
		obj_t BgL_oz00_3149)
	{
		{	/* Integrate/iinfo.scm 45 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_5377;

				{
					obj_t BgL_auxz00_5378;

					{	/* Integrate/iinfo.scm 45 */
						BgL_objectz00_bglt BgL_tmpz00_5379;

						BgL_tmpz00_5379 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3149));
						BgL_auxz00_5378 = BGL_OBJECT_WIDENING(BgL_tmpz00_5379);
					}
					BgL_auxz00_5377 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_5378);
				}
				return
					(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5377))->BgL_freez00);
			}
		}

	}



/* &lambda1629 */
	obj_t BGl_z62lambda1629z62zzintegrate_infoz00(obj_t BgL_envz00_3150,
		obj_t BgL_oz00_3151, obj_t BgL_vz00_3152)
	{
		{	/* Integrate/iinfo.scm 45 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_5385;

				{
					obj_t BgL_auxz00_5386;

					{	/* Integrate/iinfo.scm 45 */
						BgL_objectz00_bglt BgL_tmpz00_5387;

						BgL_tmpz00_5387 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3151));
						BgL_auxz00_5386 = BGL_OBJECT_WIDENING(BgL_tmpz00_5387);
					}
					BgL_auxz00_5385 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_5386);
				}
				return
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5385))->
						BgL_ownerz00) = ((obj_t) BgL_vz00_3152), BUNSPEC);
			}
		}

	}



/* &lambda1628 */
	obj_t BGl_z62lambda1628z62zzintegrate_infoz00(obj_t BgL_envz00_3153,
		obj_t BgL_oz00_3154)
	{
		{	/* Integrate/iinfo.scm 45 */
			{
				BgL_sfunzf2iinfozf2_bglt BgL_auxz00_5393;

				{
					obj_t BgL_auxz00_5394;

					{	/* Integrate/iinfo.scm 45 */
						BgL_objectz00_bglt BgL_tmpz00_5395;

						BgL_tmpz00_5395 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3154));
						BgL_auxz00_5394 = BGL_OBJECT_WIDENING(BgL_tmpz00_5395);
					}
					BgL_auxz00_5393 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_5394);
				}
				return
					(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5393))->BgL_ownerz00);
			}
		}

	}



/* &lambda1466 */
	BgL_sexitz00_bglt BGl_z62lambda1466z62zzintegrate_infoz00(obj_t
		BgL_envz00_3155, obj_t BgL_o1123z00_3156)
	{
		{	/* Integrate/iinfo.scm 35 */
			{	/* Integrate/iinfo.scm 35 */
				long BgL_arg1474z00_3343;

				{	/* Integrate/iinfo.scm 35 */
					obj_t BgL_arg1476z00_3344;

					{	/* Integrate/iinfo.scm 35 */
						obj_t BgL_arg1477z00_3345;

						{	/* Integrate/iinfo.scm 35 */
							long BgL_arg1816z00_3346;

							{	/* Integrate/iinfo.scm 35 */
								long BgL_arg1817z00_3347;

								{	/* Integrate/iinfo.scm 35 */
									long BgL_res1949z00_3348;

									BgL_res1949z00_3348 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_sexitz00_bglt) BgL_o1123z00_3156)));
									BgL_arg1817z00_3347 = BgL_res1949z00_3348;
								}
								BgL_arg1816z00_3346 = (BgL_arg1817z00_3347 - OBJECT_TYPE);
							}
							BgL_arg1477z00_3345 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_3346);
						}
						BgL_arg1476z00_3344 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1477z00_3345);
					}
					{	/* Integrate/iinfo.scm 35 */
						long BgL_res1953z00_3349;

						{	/* Integrate/iinfo.scm 35 */
							obj_t BgL_tmpz00_5407;

							BgL_tmpz00_5407 = ((obj_t) BgL_arg1476z00_3344);
							BgL_res1953z00_3349 = BGL_CLASS_INDEX(BgL_tmpz00_5407);
						}
						BgL_arg1474z00_3343 = BgL_res1953z00_3349;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_sexitz00_bglt) BgL_o1123z00_3156)), BgL_arg1474z00_3343);
			}
			{	/* Integrate/iinfo.scm 35 */
				BgL_objectz00_bglt BgL_tmpz00_5413;

				BgL_tmpz00_5413 =
					((BgL_objectz00_bglt) ((BgL_sexitz00_bglt) BgL_o1123z00_3156));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5413, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_sexitz00_bglt) BgL_o1123z00_3156));
			return ((BgL_sexitz00_bglt) ((BgL_sexitz00_bglt) BgL_o1123z00_3156));
		}

	}



/* &<@anonymous:1465> */
	obj_t BGl_z62zc3z04anonymousza31465ze3ze5zzintegrate_infoz00(obj_t
		BgL_envz00_3157, obj_t BgL_new1122z00_3158)
	{
		{	/* Integrate/iinfo.scm 35 */
			{
				BgL_sexitz00_bglt BgL_auxz00_5421;

				((((BgL_sexitz00_bglt) COBJECT(
								((BgL_sexitz00_bglt)
									((BgL_sexitz00_bglt) BgL_new1122z00_3158))))->
						BgL_handlerz00) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sexitz00_bglt) COBJECT(((BgL_sexitz00_bglt) ((BgL_sexitz00_bglt)
										BgL_new1122z00_3158))))->BgL_detachedzf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				{
					BgL_sexitzf2iinfozf2_bglt BgL_auxz00_5428;

					{
						obj_t BgL_auxz00_5429;

						{	/* Integrate/iinfo.scm 35 */
							BgL_objectz00_bglt BgL_tmpz00_5430;

							BgL_tmpz00_5430 =
								((BgL_objectz00_bglt)
								((BgL_sexitz00_bglt) BgL_new1122z00_3158));
							BgL_auxz00_5429 = BGL_OBJECT_WIDENING(BgL_tmpz00_5430);
						}
						BgL_auxz00_5428 = ((BgL_sexitzf2iinfozf2_bglt) BgL_auxz00_5429);
					}
					((((BgL_sexitzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5428))->
							BgL_fzd2markzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_sexitzf2iinfozf2_bglt BgL_auxz00_5436;

					{
						obj_t BgL_auxz00_5437;

						{	/* Integrate/iinfo.scm 35 */
							BgL_objectz00_bglt BgL_tmpz00_5438;

							BgL_tmpz00_5438 =
								((BgL_objectz00_bglt)
								((BgL_sexitz00_bglt) BgL_new1122z00_3158));
							BgL_auxz00_5437 = BGL_OBJECT_WIDENING(BgL_tmpz00_5438);
						}
						BgL_auxz00_5436 = ((BgL_sexitzf2iinfozf2_bglt) BgL_auxz00_5437);
					}
					((((BgL_sexitzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5436))->
							BgL_uzd2markzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_sexitzf2iinfozf2_bglt BgL_auxz00_5444;

					{
						obj_t BgL_auxz00_5445;

						{	/* Integrate/iinfo.scm 35 */
							BgL_objectz00_bglt BgL_tmpz00_5446;

							BgL_tmpz00_5446 =
								((BgL_objectz00_bglt)
								((BgL_sexitz00_bglt) BgL_new1122z00_3158));
							BgL_auxz00_5445 = BGL_OBJECT_WIDENING(BgL_tmpz00_5446);
						}
						BgL_auxz00_5444 = ((BgL_sexitzf2iinfozf2_bglt) BgL_auxz00_5445);
					}
					((((BgL_sexitzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5444))->
							BgL_kapturedzf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
				}
				{
					BgL_sexitzf2iinfozf2_bglt BgL_auxz00_5452;

					{
						obj_t BgL_auxz00_5453;

						{	/* Integrate/iinfo.scm 35 */
							BgL_objectz00_bglt BgL_tmpz00_5454;

							BgL_tmpz00_5454 =
								((BgL_objectz00_bglt)
								((BgL_sexitz00_bglt) BgL_new1122z00_3158));
							BgL_auxz00_5453 = BGL_OBJECT_WIDENING(BgL_tmpz00_5454);
						}
						BgL_auxz00_5452 = ((BgL_sexitzf2iinfozf2_bglt) BgL_auxz00_5453);
					}
					((((BgL_sexitzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5452))->
							BgL_celledzf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
				}
				BgL_auxz00_5421 = ((BgL_sexitz00_bglt) BgL_new1122z00_3158);
				return ((obj_t) BgL_auxz00_5421);
			}
		}

	}



/* &lambda1463 */
	BgL_sexitz00_bglt BGl_z62lambda1463z62zzintegrate_infoz00(obj_t
		BgL_envz00_3159, obj_t BgL_o1119z00_3160)
	{
		{	/* Integrate/iinfo.scm 35 */
			{	/* Integrate/iinfo.scm 35 */
				BgL_sexitzf2iinfozf2_bglt BgL_wide1121z00_3352;

				BgL_wide1121z00_3352 =
					((BgL_sexitzf2iinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_sexitzf2iinfozf2_bgl))));
				{	/* Integrate/iinfo.scm 35 */
					obj_t BgL_auxz00_5467;
					BgL_objectz00_bglt BgL_tmpz00_5463;

					BgL_auxz00_5467 = ((obj_t) BgL_wide1121z00_3352);
					BgL_tmpz00_5463 =
						((BgL_objectz00_bglt)
						((BgL_sexitz00_bglt) ((BgL_sexitz00_bglt) BgL_o1119z00_3160)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5463, BgL_auxz00_5467);
				}
				((BgL_objectz00_bglt)
					((BgL_sexitz00_bglt) ((BgL_sexitz00_bglt) BgL_o1119z00_3160)));
				{	/* Integrate/iinfo.scm 35 */
					long BgL_arg1464z00_3353;

					{	/* Integrate/iinfo.scm 35 */
						long BgL_res1948z00_3354;

						BgL_res1948z00_3354 =
							BGL_CLASS_INDEX(BGl_sexitzf2Iinfozf2zzintegrate_infoz00);
						BgL_arg1464z00_3353 = BgL_res1948z00_3354;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_sexitz00_bglt)
								((BgL_sexitz00_bglt) BgL_o1119z00_3160))), BgL_arg1464z00_3353);
				}
				return
					((BgL_sexitz00_bglt)
					((BgL_sexitz00_bglt) ((BgL_sexitz00_bglt) BgL_o1119z00_3160)));
			}
		}

	}



/* &lambda1450 */
	BgL_sexitz00_bglt BGl_z62lambda1450z62zzintegrate_infoz00(obj_t
		BgL_envz00_3161, obj_t BgL_handler1113z00_3162,
		obj_t BgL_detachedzf31114zf3_3163, obj_t BgL_fzd2mark1115zd2_3164,
		obj_t BgL_uzd2mark1116zd2_3165, obj_t BgL_kapturedzf31117zf3_3166,
		obj_t BgL_celledzf31118zf3_3167)
	{
		{	/* Integrate/iinfo.scm 35 */
			{	/* Integrate/iinfo.scm 35 */
				bool_t BgL_detachedzf31114zf3_3355;
				bool_t BgL_kapturedzf31117zf3_3356;
				bool_t BgL_celledzf31118zf3_3357;

				BgL_detachedzf31114zf3_3355 = CBOOL(BgL_detachedzf31114zf3_3163);
				BgL_kapturedzf31117zf3_3356 = CBOOL(BgL_kapturedzf31117zf3_3166);
				BgL_celledzf31118zf3_3357 = CBOOL(BgL_celledzf31118zf3_3167);
				{	/* Integrate/iinfo.scm 35 */
					BgL_sexitz00_bglt BgL_new1192z00_3358;

					{	/* Integrate/iinfo.scm 35 */
						BgL_sexitz00_bglt BgL_tmp1190z00_3359;
						BgL_sexitzf2iinfozf2_bglt BgL_wide1191z00_3360;

						{
							BgL_sexitz00_bglt BgL_auxz00_5484;

							{	/* Integrate/iinfo.scm 35 */
								BgL_sexitz00_bglt BgL_new1189z00_3361;

								BgL_new1189z00_3361 =
									((BgL_sexitz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_sexitz00_bgl))));
								{	/* Integrate/iinfo.scm 35 */
									long BgL_arg1462z00_3362;

									{	/* Integrate/iinfo.scm 35 */
										long BgL_res1946z00_3363;

										BgL_res1946z00_3363 =
											BGL_CLASS_INDEX(BGl_sexitz00zzast_varz00);
										BgL_arg1462z00_3362 = BgL_res1946z00_3363;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1189z00_3361),
										BgL_arg1462z00_3362);
								}
								{	/* Integrate/iinfo.scm 35 */
									BgL_objectz00_bglt BgL_tmpz00_5489;

									BgL_tmpz00_5489 = ((BgL_objectz00_bglt) BgL_new1189z00_3361);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5489, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1189z00_3361);
								BgL_auxz00_5484 = BgL_new1189z00_3361;
							}
							BgL_tmp1190z00_3359 = ((BgL_sexitz00_bglt) BgL_auxz00_5484);
						}
						BgL_wide1191z00_3360 =
							((BgL_sexitzf2iinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_sexitzf2iinfozf2_bgl))));
						{	/* Integrate/iinfo.scm 35 */
							obj_t BgL_auxz00_5497;
							BgL_objectz00_bglt BgL_tmpz00_5495;

							BgL_auxz00_5497 = ((obj_t) BgL_wide1191z00_3360);
							BgL_tmpz00_5495 = ((BgL_objectz00_bglt) BgL_tmp1190z00_3359);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5495, BgL_auxz00_5497);
						}
						((BgL_objectz00_bglt) BgL_tmp1190z00_3359);
						{	/* Integrate/iinfo.scm 35 */
							long BgL_arg1461z00_3364;

							{	/* Integrate/iinfo.scm 35 */
								long BgL_res1947z00_3365;

								BgL_res1947z00_3365 =
									BGL_CLASS_INDEX(BGl_sexitzf2Iinfozf2zzintegrate_infoz00);
								BgL_arg1461z00_3364 = BgL_res1947z00_3365;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1190z00_3359),
								BgL_arg1461z00_3364);
						}
						BgL_new1192z00_3358 = ((BgL_sexitz00_bglt) BgL_tmp1190z00_3359);
					}
					((((BgL_sexitz00_bglt) COBJECT(
									((BgL_sexitz00_bglt) BgL_new1192z00_3358)))->BgL_handlerz00) =
						((obj_t) BgL_handler1113z00_3162), BUNSPEC);
					((((BgL_sexitz00_bglt) COBJECT(((BgL_sexitz00_bglt)
										BgL_new1192z00_3358)))->BgL_detachedzf3zf3) =
						((bool_t) BgL_detachedzf31114zf3_3355), BUNSPEC);
					{
						BgL_sexitzf2iinfozf2_bglt BgL_auxz00_5509;

						{
							obj_t BgL_auxz00_5510;

							{	/* Integrate/iinfo.scm 35 */
								BgL_objectz00_bglt BgL_tmpz00_5511;

								BgL_tmpz00_5511 = ((BgL_objectz00_bglt) BgL_new1192z00_3358);
								BgL_auxz00_5510 = BGL_OBJECT_WIDENING(BgL_tmpz00_5511);
							}
							BgL_auxz00_5509 = ((BgL_sexitzf2iinfozf2_bglt) BgL_auxz00_5510);
						}
						((((BgL_sexitzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5509))->
								BgL_fzd2markzd2) = ((obj_t) BgL_fzd2mark1115zd2_3164), BUNSPEC);
					}
					{
						BgL_sexitzf2iinfozf2_bglt BgL_auxz00_5516;

						{
							obj_t BgL_auxz00_5517;

							{	/* Integrate/iinfo.scm 35 */
								BgL_objectz00_bglt BgL_tmpz00_5518;

								BgL_tmpz00_5518 = ((BgL_objectz00_bglt) BgL_new1192z00_3358);
								BgL_auxz00_5517 = BGL_OBJECT_WIDENING(BgL_tmpz00_5518);
							}
							BgL_auxz00_5516 = ((BgL_sexitzf2iinfozf2_bglt) BgL_auxz00_5517);
						}
						((((BgL_sexitzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5516))->
								BgL_uzd2markzd2) = ((obj_t) BgL_uzd2mark1116zd2_3165), BUNSPEC);
					}
					{
						BgL_sexitzf2iinfozf2_bglt BgL_auxz00_5523;

						{
							obj_t BgL_auxz00_5524;

							{	/* Integrate/iinfo.scm 35 */
								BgL_objectz00_bglt BgL_tmpz00_5525;

								BgL_tmpz00_5525 = ((BgL_objectz00_bglt) BgL_new1192z00_3358);
								BgL_auxz00_5524 = BGL_OBJECT_WIDENING(BgL_tmpz00_5525);
							}
							BgL_auxz00_5523 = ((BgL_sexitzf2iinfozf2_bglt) BgL_auxz00_5524);
						}
						((((BgL_sexitzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5523))->
								BgL_kapturedzf3zf3) =
							((bool_t) BgL_kapturedzf31117zf3_3356), BUNSPEC);
					}
					{
						BgL_sexitzf2iinfozf2_bglt BgL_auxz00_5530;

						{
							obj_t BgL_auxz00_5531;

							{	/* Integrate/iinfo.scm 35 */
								BgL_objectz00_bglt BgL_tmpz00_5532;

								BgL_tmpz00_5532 = ((BgL_objectz00_bglt) BgL_new1192z00_3358);
								BgL_auxz00_5531 = BGL_OBJECT_WIDENING(BgL_tmpz00_5532);
							}
							BgL_auxz00_5530 = ((BgL_sexitzf2iinfozf2_bglt) BgL_auxz00_5531);
						}
						((((BgL_sexitzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5530))->
								BgL_celledzf3zf3) =
							((bool_t) BgL_celledzf31118zf3_3357), BUNSPEC);
					}
					return BgL_new1192z00_3358;
				}
			}
		}

	}



/* &<@anonymous:1581> */
	obj_t BGl_z62zc3z04anonymousza31581ze3ze5zzintegrate_infoz00(obj_t
		BgL_envz00_3168)
	{
		{	/* Integrate/iinfo.scm 35 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1580 */
	obj_t BGl_z62lambda1580z62zzintegrate_infoz00(obj_t BgL_envz00_3169,
		obj_t BgL_oz00_3170, obj_t BgL_vz00_3171)
	{
		{	/* Integrate/iinfo.scm 35 */
			{	/* Integrate/iinfo.scm 35 */
				bool_t BgL_vz00_3367;

				BgL_vz00_3367 = CBOOL(BgL_vz00_3171);
				{
					BgL_sexitzf2iinfozf2_bglt BgL_auxz00_5539;

					{
						obj_t BgL_auxz00_5540;

						{	/* Integrate/iinfo.scm 35 */
							BgL_objectz00_bglt BgL_tmpz00_5541;

							BgL_tmpz00_5541 =
								((BgL_objectz00_bglt) ((BgL_sexitz00_bglt) BgL_oz00_3170));
							BgL_auxz00_5540 = BGL_OBJECT_WIDENING(BgL_tmpz00_5541);
						}
						BgL_auxz00_5539 = ((BgL_sexitzf2iinfozf2_bglt) BgL_auxz00_5540);
					}
					return
						((((BgL_sexitzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5539))->
							BgL_celledzf3zf3) = ((bool_t) BgL_vz00_3367), BUNSPEC);
				}
			}
		}

	}



/* &lambda1579 */
	obj_t BGl_z62lambda1579z62zzintegrate_infoz00(obj_t BgL_envz00_3172,
		obj_t BgL_oz00_3173)
	{
		{	/* Integrate/iinfo.scm 35 */
			{	/* Integrate/iinfo.scm 35 */
				bool_t BgL_tmpz00_5547;

				{
					BgL_sexitzf2iinfozf2_bglt BgL_auxz00_5548;

					{
						obj_t BgL_auxz00_5549;

						{	/* Integrate/iinfo.scm 35 */
							BgL_objectz00_bglt BgL_tmpz00_5550;

							BgL_tmpz00_5550 =
								((BgL_objectz00_bglt) ((BgL_sexitz00_bglt) BgL_oz00_3173));
							BgL_auxz00_5549 = BGL_OBJECT_WIDENING(BgL_tmpz00_5550);
						}
						BgL_auxz00_5548 = ((BgL_sexitzf2iinfozf2_bglt) BgL_auxz00_5549);
					}
					BgL_tmpz00_5547 =
						(((BgL_sexitzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5548))->
						BgL_celledzf3zf3);
				}
				return BBOOL(BgL_tmpz00_5547);
			}
		}

	}



/* &<@anonymous:1564> */
	obj_t BGl_z62zc3z04anonymousza31564ze3ze5zzintegrate_infoz00(obj_t
		BgL_envz00_3174)
	{
		{	/* Integrate/iinfo.scm 35 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1563 */
	obj_t BGl_z62lambda1563z62zzintegrate_infoz00(obj_t BgL_envz00_3175,
		obj_t BgL_oz00_3176, obj_t BgL_vz00_3177)
	{
		{	/* Integrate/iinfo.scm 35 */
			{	/* Integrate/iinfo.scm 35 */
				bool_t BgL_vz00_3370;

				BgL_vz00_3370 = CBOOL(BgL_vz00_3177);
				{
					BgL_sexitzf2iinfozf2_bglt BgL_auxz00_5559;

					{
						obj_t BgL_auxz00_5560;

						{	/* Integrate/iinfo.scm 35 */
							BgL_objectz00_bglt BgL_tmpz00_5561;

							BgL_tmpz00_5561 =
								((BgL_objectz00_bglt) ((BgL_sexitz00_bglt) BgL_oz00_3176));
							BgL_auxz00_5560 = BGL_OBJECT_WIDENING(BgL_tmpz00_5561);
						}
						BgL_auxz00_5559 = ((BgL_sexitzf2iinfozf2_bglt) BgL_auxz00_5560);
					}
					return
						((((BgL_sexitzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5559))->
							BgL_kapturedzf3zf3) = ((bool_t) BgL_vz00_3370), BUNSPEC);
				}
			}
		}

	}



/* &lambda1562 */
	obj_t BGl_z62lambda1562z62zzintegrate_infoz00(obj_t BgL_envz00_3178,
		obj_t BgL_oz00_3179)
	{
		{	/* Integrate/iinfo.scm 35 */
			{	/* Integrate/iinfo.scm 35 */
				bool_t BgL_tmpz00_5567;

				{
					BgL_sexitzf2iinfozf2_bglt BgL_auxz00_5568;

					{
						obj_t BgL_auxz00_5569;

						{	/* Integrate/iinfo.scm 35 */
							BgL_objectz00_bglt BgL_tmpz00_5570;

							BgL_tmpz00_5570 =
								((BgL_objectz00_bglt) ((BgL_sexitz00_bglt) BgL_oz00_3179));
							BgL_auxz00_5569 = BGL_OBJECT_WIDENING(BgL_tmpz00_5570);
						}
						BgL_auxz00_5568 = ((BgL_sexitzf2iinfozf2_bglt) BgL_auxz00_5569);
					}
					BgL_tmpz00_5567 =
						(((BgL_sexitzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5568))->
						BgL_kapturedzf3zf3);
				}
				return BBOOL(BgL_tmpz00_5567);
			}
		}

	}



/* &<@anonymous:1539> */
	obj_t BGl_z62zc3z04anonymousza31539ze3ze5zzintegrate_infoz00(obj_t
		BgL_envz00_3180)
	{
		{	/* Integrate/iinfo.scm 35 */
			return BUNSPEC;
		}

	}



/* &lambda1538 */
	obj_t BGl_z62lambda1538z62zzintegrate_infoz00(obj_t BgL_envz00_3181,
		obj_t BgL_oz00_3182, obj_t BgL_vz00_3183)
	{
		{	/* Integrate/iinfo.scm 35 */
			{
				BgL_sexitzf2iinfozf2_bglt BgL_auxz00_5577;

				{
					obj_t BgL_auxz00_5578;

					{	/* Integrate/iinfo.scm 35 */
						BgL_objectz00_bglt BgL_tmpz00_5579;

						BgL_tmpz00_5579 =
							((BgL_objectz00_bglt) ((BgL_sexitz00_bglt) BgL_oz00_3182));
						BgL_auxz00_5578 = BGL_OBJECT_WIDENING(BgL_tmpz00_5579);
					}
					BgL_auxz00_5577 = ((BgL_sexitzf2iinfozf2_bglt) BgL_auxz00_5578);
				}
				return
					((((BgL_sexitzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5577))->
						BgL_uzd2markzd2) = ((obj_t) BgL_vz00_3183), BUNSPEC);
			}
		}

	}



/* &lambda1537 */
	obj_t BGl_z62lambda1537z62zzintegrate_infoz00(obj_t BgL_envz00_3184,
		obj_t BgL_oz00_3185)
	{
		{	/* Integrate/iinfo.scm 35 */
			{
				BgL_sexitzf2iinfozf2_bglt BgL_auxz00_5585;

				{
					obj_t BgL_auxz00_5586;

					{	/* Integrate/iinfo.scm 35 */
						BgL_objectz00_bglt BgL_tmpz00_5587;

						BgL_tmpz00_5587 =
							((BgL_objectz00_bglt) ((BgL_sexitz00_bglt) BgL_oz00_3185));
						BgL_auxz00_5586 = BGL_OBJECT_WIDENING(BgL_tmpz00_5587);
					}
					BgL_auxz00_5585 = ((BgL_sexitzf2iinfozf2_bglt) BgL_auxz00_5586);
				}
				return
					(((BgL_sexitzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5585))->
					BgL_uzd2markzd2);
			}
		}

	}



/* &<@anonymous:1500> */
	obj_t BGl_z62zc3z04anonymousza31500ze3ze5zzintegrate_infoz00(obj_t
		BgL_envz00_3186)
	{
		{	/* Integrate/iinfo.scm 35 */
			return BUNSPEC;
		}

	}



/* &lambda1499 */
	obj_t BGl_z62lambda1499z62zzintegrate_infoz00(obj_t BgL_envz00_3187,
		obj_t BgL_oz00_3188, obj_t BgL_vz00_3189)
	{
		{	/* Integrate/iinfo.scm 35 */
			{
				BgL_sexitzf2iinfozf2_bglt BgL_auxz00_5593;

				{
					obj_t BgL_auxz00_5594;

					{	/* Integrate/iinfo.scm 35 */
						BgL_objectz00_bglt BgL_tmpz00_5595;

						BgL_tmpz00_5595 =
							((BgL_objectz00_bglt) ((BgL_sexitz00_bglt) BgL_oz00_3188));
						BgL_auxz00_5594 = BGL_OBJECT_WIDENING(BgL_tmpz00_5595);
					}
					BgL_auxz00_5593 = ((BgL_sexitzf2iinfozf2_bglt) BgL_auxz00_5594);
				}
				return
					((((BgL_sexitzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5593))->
						BgL_fzd2markzd2) = ((obj_t) BgL_vz00_3189), BUNSPEC);
			}
		}

	}



/* &lambda1498 */
	obj_t BGl_z62lambda1498z62zzintegrate_infoz00(obj_t BgL_envz00_3190,
		obj_t BgL_oz00_3191)
	{
		{	/* Integrate/iinfo.scm 35 */
			{
				BgL_sexitzf2iinfozf2_bglt BgL_auxz00_5601;

				{
					obj_t BgL_auxz00_5602;

					{	/* Integrate/iinfo.scm 35 */
						BgL_objectz00_bglt BgL_tmpz00_5603;

						BgL_tmpz00_5603 =
							((BgL_objectz00_bglt) ((BgL_sexitz00_bglt) BgL_oz00_3191));
						BgL_auxz00_5602 = BGL_OBJECT_WIDENING(BgL_tmpz00_5603);
					}
					BgL_auxz00_5601 = ((BgL_sexitzf2iinfozf2_bglt) BgL_auxz00_5602);
				}
				return
					(((BgL_sexitzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5601))->
					BgL_fzd2markzd2);
			}
		}

	}



/* &lambda1339 */
	BgL_svarz00_bglt BGl_z62lambda1339z62zzintegrate_infoz00(obj_t
		BgL_envz00_3192, obj_t BgL_o1111z00_3193)
	{
		{	/* Integrate/iinfo.scm 23 */
			{	/* Integrate/iinfo.scm 23 */
				long BgL_arg1340z00_3377;

				{	/* Integrate/iinfo.scm 23 */
					obj_t BgL_arg1344z00_3378;

					{	/* Integrate/iinfo.scm 23 */
						obj_t BgL_arg1345z00_3379;

						{	/* Integrate/iinfo.scm 23 */
							long BgL_arg1816z00_3380;

							{	/* Integrate/iinfo.scm 23 */
								long BgL_arg1817z00_3381;

								{	/* Integrate/iinfo.scm 23 */
									long BgL_res1943z00_3382;

									BgL_res1943z00_3382 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_svarz00_bglt) BgL_o1111z00_3193)));
									BgL_arg1817z00_3381 = BgL_res1943z00_3382;
								}
								BgL_arg1816z00_3380 = (BgL_arg1817z00_3381 - OBJECT_TYPE);
							}
							BgL_arg1345z00_3379 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_3380);
						}
						BgL_arg1344z00_3378 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1345z00_3379);
					}
					{	/* Integrate/iinfo.scm 23 */
						long BgL_res1945z00_3383;

						{	/* Integrate/iinfo.scm 23 */
							obj_t BgL_tmpz00_5615;

							BgL_tmpz00_5615 = ((obj_t) BgL_arg1344z00_3378);
							BgL_res1945z00_3383 = BGL_CLASS_INDEX(BgL_tmpz00_5615);
						}
						BgL_arg1340z00_3377 = BgL_res1945z00_3383;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_svarz00_bglt) BgL_o1111z00_3193)), BgL_arg1340z00_3377);
			}
			{	/* Integrate/iinfo.scm 23 */
				BgL_objectz00_bglt BgL_tmpz00_5621;

				BgL_tmpz00_5621 =
					((BgL_objectz00_bglt) ((BgL_svarz00_bglt) BgL_o1111z00_3193));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5621, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_svarz00_bglt) BgL_o1111z00_3193));
			return ((BgL_svarz00_bglt) ((BgL_svarz00_bglt) BgL_o1111z00_3193));
		}

	}



/* &<@anonymous:1338> */
	obj_t BGl_z62zc3z04anonymousza31338ze3ze5zzintegrate_infoz00(obj_t
		BgL_envz00_3194, obj_t BgL_new1110z00_3195)
	{
		{	/* Integrate/iinfo.scm 23 */
			{
				BgL_svarz00_bglt BgL_auxz00_5629;

				((((BgL_svarz00_bglt) COBJECT(
								((BgL_svarz00_bglt)
									((BgL_svarz00_bglt) BgL_new1110z00_3195))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_svarzf2iinfozf2_bglt BgL_auxz00_5633;

					{
						obj_t BgL_auxz00_5634;

						{	/* Integrate/iinfo.scm 23 */
							BgL_objectz00_bglt BgL_tmpz00_5635;

							BgL_tmpz00_5635 =
								((BgL_objectz00_bglt) ((BgL_svarz00_bglt) BgL_new1110z00_3195));
							BgL_auxz00_5634 = BGL_OBJECT_WIDENING(BgL_tmpz00_5635);
						}
						BgL_auxz00_5633 = ((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_5634);
					}
					((((BgL_svarzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5633))->
							BgL_fzd2markzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_svarzf2iinfozf2_bglt BgL_auxz00_5641;

					{
						obj_t BgL_auxz00_5642;

						{	/* Integrate/iinfo.scm 23 */
							BgL_objectz00_bglt BgL_tmpz00_5643;

							BgL_tmpz00_5643 =
								((BgL_objectz00_bglt) ((BgL_svarz00_bglt) BgL_new1110z00_3195));
							BgL_auxz00_5642 = BGL_OBJECT_WIDENING(BgL_tmpz00_5643);
						}
						BgL_auxz00_5641 = ((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_5642);
					}
					((((BgL_svarzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5641))->
							BgL_uzd2markzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_svarzf2iinfozf2_bglt BgL_auxz00_5649;

					{
						obj_t BgL_auxz00_5650;

						{	/* Integrate/iinfo.scm 23 */
							BgL_objectz00_bglt BgL_tmpz00_5651;

							BgL_tmpz00_5651 =
								((BgL_objectz00_bglt) ((BgL_svarz00_bglt) BgL_new1110z00_3195));
							BgL_auxz00_5650 = BGL_OBJECT_WIDENING(BgL_tmpz00_5651);
						}
						BgL_auxz00_5649 = ((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_5650);
					}
					((((BgL_svarzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5649))->
							BgL_kapturedzf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
				}
				{
					BgL_svarzf2iinfozf2_bglt BgL_auxz00_5657;

					{
						obj_t BgL_auxz00_5658;

						{	/* Integrate/iinfo.scm 23 */
							BgL_objectz00_bglt BgL_tmpz00_5659;

							BgL_tmpz00_5659 =
								((BgL_objectz00_bglt) ((BgL_svarz00_bglt) BgL_new1110z00_3195));
							BgL_auxz00_5658 = BGL_OBJECT_WIDENING(BgL_tmpz00_5659);
						}
						BgL_auxz00_5657 = ((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_5658);
					}
					((((BgL_svarzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5657))->
							BgL_celledzf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
				}
				{
					BgL_svarzf2iinfozf2_bglt BgL_auxz00_5665;

					{
						obj_t BgL_auxz00_5666;

						{	/* Integrate/iinfo.scm 23 */
							BgL_objectz00_bglt BgL_tmpz00_5667;

							BgL_tmpz00_5667 =
								((BgL_objectz00_bglt) ((BgL_svarz00_bglt) BgL_new1110z00_3195));
							BgL_auxz00_5666 = BGL_OBJECT_WIDENING(BgL_tmpz00_5667);
						}
						BgL_auxz00_5665 = ((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_5666);
					}
					((((BgL_svarzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5665))->
							BgL_xhdlz00) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				BgL_auxz00_5629 = ((BgL_svarz00_bglt) BgL_new1110z00_3195);
				return ((obj_t) BgL_auxz00_5629);
			}
		}

	}



/* &lambda1336 */
	BgL_svarz00_bglt BGl_z62lambda1336z62zzintegrate_infoz00(obj_t
		BgL_envz00_3196, obj_t BgL_o1107z00_3197)
	{
		{	/* Integrate/iinfo.scm 23 */
			{	/* Integrate/iinfo.scm 23 */
				BgL_svarzf2iinfozf2_bglt BgL_wide1109z00_3386;

				BgL_wide1109z00_3386 =
					((BgL_svarzf2iinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_svarzf2iinfozf2_bgl))));
				{	/* Integrate/iinfo.scm 23 */
					obj_t BgL_auxz00_5680;
					BgL_objectz00_bglt BgL_tmpz00_5676;

					BgL_auxz00_5680 = ((obj_t) BgL_wide1109z00_3386);
					BgL_tmpz00_5676 =
						((BgL_objectz00_bglt)
						((BgL_svarz00_bglt) ((BgL_svarz00_bglt) BgL_o1107z00_3197)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5676, BgL_auxz00_5680);
				}
				((BgL_objectz00_bglt)
					((BgL_svarz00_bglt) ((BgL_svarz00_bglt) BgL_o1107z00_3197)));
				{	/* Integrate/iinfo.scm 23 */
					long BgL_arg1337z00_3387;

					{	/* Integrate/iinfo.scm 23 */
						long BgL_res1942z00_3388;

						BgL_res1942z00_3388 =
							BGL_CLASS_INDEX(BGl_svarzf2Iinfozf2zzintegrate_infoz00);
						BgL_arg1337z00_3387 = BgL_res1942z00_3388;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_svarz00_bglt)
								((BgL_svarz00_bglt) BgL_o1107z00_3197))), BgL_arg1337z00_3387);
				}
				return
					((BgL_svarz00_bglt)
					((BgL_svarz00_bglt) ((BgL_svarz00_bglt) BgL_o1107z00_3197)));
			}
		}

	}



/* &lambda1332 */
	BgL_svarz00_bglt BGl_z62lambda1332z62zzintegrate_infoz00(obj_t
		BgL_envz00_3198, obj_t BgL_loc1101z00_3199, obj_t BgL_fzd2mark1102zd2_3200,
		obj_t BgL_uzd2mark1103zd2_3201, obj_t BgL_kapturedzf31104zf3_3202,
		obj_t BgL_celledzf31105zf3_3203, obj_t BgL_xhdl1106z00_3204)
	{
		{	/* Integrate/iinfo.scm 23 */
			{	/* Integrate/iinfo.scm 23 */
				bool_t BgL_kapturedzf31104zf3_3389;
				bool_t BgL_celledzf31105zf3_3390;

				BgL_kapturedzf31104zf3_3389 = CBOOL(BgL_kapturedzf31104zf3_3202);
				BgL_celledzf31105zf3_3390 = CBOOL(BgL_celledzf31105zf3_3203);
				{	/* Integrate/iinfo.scm 23 */
					BgL_svarz00_bglt BgL_new1187z00_3391;

					{	/* Integrate/iinfo.scm 23 */
						BgL_svarz00_bglt BgL_tmp1185z00_3392;
						BgL_svarzf2iinfozf2_bglt BgL_wide1186z00_3393;

						{
							BgL_svarz00_bglt BgL_auxz00_5696;

							{	/* Integrate/iinfo.scm 23 */
								BgL_svarz00_bglt BgL_new1184z00_3394;

								BgL_new1184z00_3394 =
									((BgL_svarz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_svarz00_bgl))));
								{	/* Integrate/iinfo.scm 23 */
									long BgL_arg1335z00_3395;

									{	/* Integrate/iinfo.scm 23 */
										long BgL_res1940z00_3396;

										BgL_res1940z00_3396 =
											BGL_CLASS_INDEX(BGl_svarz00zzast_varz00);
										BgL_arg1335z00_3395 = BgL_res1940z00_3396;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1184z00_3394),
										BgL_arg1335z00_3395);
								}
								{	/* Integrate/iinfo.scm 23 */
									BgL_objectz00_bglt BgL_tmpz00_5701;

									BgL_tmpz00_5701 = ((BgL_objectz00_bglt) BgL_new1184z00_3394);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5701, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1184z00_3394);
								BgL_auxz00_5696 = BgL_new1184z00_3394;
							}
							BgL_tmp1185z00_3392 = ((BgL_svarz00_bglt) BgL_auxz00_5696);
						}
						BgL_wide1186z00_3393 =
							((BgL_svarzf2iinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_svarzf2iinfozf2_bgl))));
						{	/* Integrate/iinfo.scm 23 */
							obj_t BgL_auxz00_5709;
							BgL_objectz00_bglt BgL_tmpz00_5707;

							BgL_auxz00_5709 = ((obj_t) BgL_wide1186z00_3393);
							BgL_tmpz00_5707 = ((BgL_objectz00_bglt) BgL_tmp1185z00_3392);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5707, BgL_auxz00_5709);
						}
						((BgL_objectz00_bglt) BgL_tmp1185z00_3392);
						{	/* Integrate/iinfo.scm 23 */
							long BgL_arg1334z00_3397;

							{	/* Integrate/iinfo.scm 23 */
								long BgL_res1941z00_3398;

								BgL_res1941z00_3398 =
									BGL_CLASS_INDEX(BGl_svarzf2Iinfozf2zzintegrate_infoz00);
								BgL_arg1334z00_3397 = BgL_res1941z00_3398;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1185z00_3392),
								BgL_arg1334z00_3397);
						}
						BgL_new1187z00_3391 = ((BgL_svarz00_bglt) BgL_tmp1185z00_3392);
					}
					((((BgL_svarz00_bglt) COBJECT(
									((BgL_svarz00_bglt) BgL_new1187z00_3391)))->BgL_locz00) =
						((obj_t) BgL_loc1101z00_3199), BUNSPEC);
					{
						BgL_svarzf2iinfozf2_bglt BgL_auxz00_5719;

						{
							obj_t BgL_auxz00_5720;

							{	/* Integrate/iinfo.scm 23 */
								BgL_objectz00_bglt BgL_tmpz00_5721;

								BgL_tmpz00_5721 = ((BgL_objectz00_bglt) BgL_new1187z00_3391);
								BgL_auxz00_5720 = BGL_OBJECT_WIDENING(BgL_tmpz00_5721);
							}
							BgL_auxz00_5719 = ((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_5720);
						}
						((((BgL_svarzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5719))->
								BgL_fzd2markzd2) = ((obj_t) BgL_fzd2mark1102zd2_3200), BUNSPEC);
					}
					{
						BgL_svarzf2iinfozf2_bglt BgL_auxz00_5726;

						{
							obj_t BgL_auxz00_5727;

							{	/* Integrate/iinfo.scm 23 */
								BgL_objectz00_bglt BgL_tmpz00_5728;

								BgL_tmpz00_5728 = ((BgL_objectz00_bglt) BgL_new1187z00_3391);
								BgL_auxz00_5727 = BGL_OBJECT_WIDENING(BgL_tmpz00_5728);
							}
							BgL_auxz00_5726 = ((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_5727);
						}
						((((BgL_svarzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5726))->
								BgL_uzd2markzd2) = ((obj_t) BgL_uzd2mark1103zd2_3201), BUNSPEC);
					}
					{
						BgL_svarzf2iinfozf2_bglt BgL_auxz00_5733;

						{
							obj_t BgL_auxz00_5734;

							{	/* Integrate/iinfo.scm 23 */
								BgL_objectz00_bglt BgL_tmpz00_5735;

								BgL_tmpz00_5735 = ((BgL_objectz00_bglt) BgL_new1187z00_3391);
								BgL_auxz00_5734 = BGL_OBJECT_WIDENING(BgL_tmpz00_5735);
							}
							BgL_auxz00_5733 = ((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_5734);
						}
						((((BgL_svarzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5733))->
								BgL_kapturedzf3zf3) =
							((bool_t) BgL_kapturedzf31104zf3_3389), BUNSPEC);
					}
					{
						BgL_svarzf2iinfozf2_bglt BgL_auxz00_5740;

						{
							obj_t BgL_auxz00_5741;

							{	/* Integrate/iinfo.scm 23 */
								BgL_objectz00_bglt BgL_tmpz00_5742;

								BgL_tmpz00_5742 = ((BgL_objectz00_bglt) BgL_new1187z00_3391);
								BgL_auxz00_5741 = BGL_OBJECT_WIDENING(BgL_tmpz00_5742);
							}
							BgL_auxz00_5740 = ((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_5741);
						}
						((((BgL_svarzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5740))->
								BgL_celledzf3zf3) =
							((bool_t) BgL_celledzf31105zf3_3390), BUNSPEC);
					}
					{
						BgL_svarzf2iinfozf2_bglt BgL_auxz00_5747;

						{
							obj_t BgL_auxz00_5748;

							{	/* Integrate/iinfo.scm 23 */
								BgL_objectz00_bglt BgL_tmpz00_5749;

								BgL_tmpz00_5749 = ((BgL_objectz00_bglt) BgL_new1187z00_3391);
								BgL_auxz00_5748 = BGL_OBJECT_WIDENING(BgL_tmpz00_5749);
							}
							BgL_auxz00_5747 = ((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_5748);
						}
						((((BgL_svarzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5747))->
								BgL_xhdlz00) = ((obj_t) BgL_xhdl1106z00_3204), BUNSPEC);
					}
					return BgL_new1187z00_3391;
				}
			}
		}

	}



/* &<@anonymous:1420> */
	obj_t BGl_z62zc3z04anonymousza31420ze3ze5zzintegrate_infoz00(obj_t
		BgL_envz00_3205)
	{
		{	/* Integrate/iinfo.scm 23 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1419 */
	obj_t BGl_z62lambda1419z62zzintegrate_infoz00(obj_t BgL_envz00_3206,
		obj_t BgL_oz00_3207, obj_t BgL_vz00_3208)
	{
		{	/* Integrate/iinfo.scm 23 */
			{
				BgL_svarzf2iinfozf2_bglt BgL_auxz00_5755;

				{
					obj_t BgL_auxz00_5756;

					{	/* Integrate/iinfo.scm 23 */
						BgL_objectz00_bglt BgL_tmpz00_5757;

						BgL_tmpz00_5757 =
							((BgL_objectz00_bglt) ((BgL_svarz00_bglt) BgL_oz00_3207));
						BgL_auxz00_5756 = BGL_OBJECT_WIDENING(BgL_tmpz00_5757);
					}
					BgL_auxz00_5755 = ((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_5756);
				}
				return
					((((BgL_svarzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5755))->
						BgL_xhdlz00) = ((obj_t) BgL_vz00_3208), BUNSPEC);
			}
		}

	}



/* &lambda1418 */
	obj_t BGl_z62lambda1418z62zzintegrate_infoz00(obj_t BgL_envz00_3209,
		obj_t BgL_oz00_3210)
	{
		{	/* Integrate/iinfo.scm 23 */
			{
				BgL_svarzf2iinfozf2_bglt BgL_auxz00_5763;

				{
					obj_t BgL_auxz00_5764;

					{	/* Integrate/iinfo.scm 23 */
						BgL_objectz00_bglt BgL_tmpz00_5765;

						BgL_tmpz00_5765 =
							((BgL_objectz00_bglt) ((BgL_svarz00_bglt) BgL_oz00_3210));
						BgL_auxz00_5764 = BGL_OBJECT_WIDENING(BgL_tmpz00_5765);
					}
					BgL_auxz00_5763 = ((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_5764);
				}
				return
					(((BgL_svarzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5763))->BgL_xhdlz00);
			}
		}

	}



/* &<@anonymous:1387> */
	obj_t BGl_z62zc3z04anonymousza31387ze3ze5zzintegrate_infoz00(obj_t
		BgL_envz00_3211)
	{
		{	/* Integrate/iinfo.scm 23 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1386 */
	obj_t BGl_z62lambda1386z62zzintegrate_infoz00(obj_t BgL_envz00_3212,
		obj_t BgL_oz00_3213, obj_t BgL_vz00_3214)
	{
		{	/* Integrate/iinfo.scm 23 */
			{	/* Integrate/iinfo.scm 23 */
				bool_t BgL_vz00_3402;

				BgL_vz00_3402 = CBOOL(BgL_vz00_3214);
				{
					BgL_svarzf2iinfozf2_bglt BgL_auxz00_5773;

					{
						obj_t BgL_auxz00_5774;

						{	/* Integrate/iinfo.scm 23 */
							BgL_objectz00_bglt BgL_tmpz00_5775;

							BgL_tmpz00_5775 =
								((BgL_objectz00_bglt) ((BgL_svarz00_bglt) BgL_oz00_3213));
							BgL_auxz00_5774 = BGL_OBJECT_WIDENING(BgL_tmpz00_5775);
						}
						BgL_auxz00_5773 = ((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_5774);
					}
					return
						((((BgL_svarzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5773))->
							BgL_celledzf3zf3) = ((bool_t) BgL_vz00_3402), BUNSPEC);
				}
			}
		}

	}



/* &lambda1385 */
	obj_t BGl_z62lambda1385z62zzintegrate_infoz00(obj_t BgL_envz00_3215,
		obj_t BgL_oz00_3216)
	{
		{	/* Integrate/iinfo.scm 23 */
			{	/* Integrate/iinfo.scm 23 */
				bool_t BgL_tmpz00_5781;

				{
					BgL_svarzf2iinfozf2_bglt BgL_auxz00_5782;

					{
						obj_t BgL_auxz00_5783;

						{	/* Integrate/iinfo.scm 23 */
							BgL_objectz00_bglt BgL_tmpz00_5784;

							BgL_tmpz00_5784 =
								((BgL_objectz00_bglt) ((BgL_svarz00_bglt) BgL_oz00_3216));
							BgL_auxz00_5783 = BGL_OBJECT_WIDENING(BgL_tmpz00_5784);
						}
						BgL_auxz00_5782 = ((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_5783);
					}
					BgL_tmpz00_5781 =
						(((BgL_svarzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5782))->
						BgL_celledzf3zf3);
				}
				return BBOOL(BgL_tmpz00_5781);
			}
		}

	}



/* &<@anonymous:1375> */
	obj_t BGl_z62zc3z04anonymousza31375ze3ze5zzintegrate_infoz00(obj_t
		BgL_envz00_3217)
	{
		{	/* Integrate/iinfo.scm 23 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1374 */
	obj_t BGl_z62lambda1374z62zzintegrate_infoz00(obj_t BgL_envz00_3218,
		obj_t BgL_oz00_3219, obj_t BgL_vz00_3220)
	{
		{	/* Integrate/iinfo.scm 23 */
			{	/* Integrate/iinfo.scm 23 */
				bool_t BgL_vz00_3405;

				BgL_vz00_3405 = CBOOL(BgL_vz00_3220);
				{
					BgL_svarzf2iinfozf2_bglt BgL_auxz00_5793;

					{
						obj_t BgL_auxz00_5794;

						{	/* Integrate/iinfo.scm 23 */
							BgL_objectz00_bglt BgL_tmpz00_5795;

							BgL_tmpz00_5795 =
								((BgL_objectz00_bglt) ((BgL_svarz00_bglt) BgL_oz00_3219));
							BgL_auxz00_5794 = BGL_OBJECT_WIDENING(BgL_tmpz00_5795);
						}
						BgL_auxz00_5793 = ((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_5794);
					}
					return
						((((BgL_svarzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5793))->
							BgL_kapturedzf3zf3) = ((bool_t) BgL_vz00_3405), BUNSPEC);
				}
			}
		}

	}



/* &lambda1373 */
	obj_t BGl_z62lambda1373z62zzintegrate_infoz00(obj_t BgL_envz00_3221,
		obj_t BgL_oz00_3222)
	{
		{	/* Integrate/iinfo.scm 23 */
			{	/* Integrate/iinfo.scm 23 */
				bool_t BgL_tmpz00_5801;

				{
					BgL_svarzf2iinfozf2_bglt BgL_auxz00_5802;

					{
						obj_t BgL_auxz00_5803;

						{	/* Integrate/iinfo.scm 23 */
							BgL_objectz00_bglt BgL_tmpz00_5804;

							BgL_tmpz00_5804 =
								((BgL_objectz00_bglt) ((BgL_svarz00_bglt) BgL_oz00_3222));
							BgL_auxz00_5803 = BGL_OBJECT_WIDENING(BgL_tmpz00_5804);
						}
						BgL_auxz00_5802 = ((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_5803);
					}
					BgL_tmpz00_5801 =
						(((BgL_svarzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5802))->
						BgL_kapturedzf3zf3);
				}
				return BBOOL(BgL_tmpz00_5801);
			}
		}

	}



/* &<@anonymous:1366> */
	obj_t BGl_z62zc3z04anonymousza31366ze3ze5zzintegrate_infoz00(obj_t
		BgL_envz00_3223)
	{
		{	/* Integrate/iinfo.scm 23 */
			return BUNSPEC;
		}

	}



/* &lambda1365 */
	obj_t BGl_z62lambda1365z62zzintegrate_infoz00(obj_t BgL_envz00_3224,
		obj_t BgL_oz00_3225, obj_t BgL_vz00_3226)
	{
		{	/* Integrate/iinfo.scm 23 */
			{
				BgL_svarzf2iinfozf2_bglt BgL_auxz00_5811;

				{
					obj_t BgL_auxz00_5812;

					{	/* Integrate/iinfo.scm 23 */
						BgL_objectz00_bglt BgL_tmpz00_5813;

						BgL_tmpz00_5813 =
							((BgL_objectz00_bglt) ((BgL_svarz00_bglt) BgL_oz00_3225));
						BgL_auxz00_5812 = BGL_OBJECT_WIDENING(BgL_tmpz00_5813);
					}
					BgL_auxz00_5811 = ((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_5812);
				}
				return
					((((BgL_svarzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5811))->
						BgL_uzd2markzd2) = ((obj_t) BgL_vz00_3226), BUNSPEC);
			}
		}

	}



/* &lambda1364 */
	obj_t BGl_z62lambda1364z62zzintegrate_infoz00(obj_t BgL_envz00_3227,
		obj_t BgL_oz00_3228)
	{
		{	/* Integrate/iinfo.scm 23 */
			{
				BgL_svarzf2iinfozf2_bglt BgL_auxz00_5819;

				{
					obj_t BgL_auxz00_5820;

					{	/* Integrate/iinfo.scm 23 */
						BgL_objectz00_bglt BgL_tmpz00_5821;

						BgL_tmpz00_5821 =
							((BgL_objectz00_bglt) ((BgL_svarz00_bglt) BgL_oz00_3228));
						BgL_auxz00_5820 = BGL_OBJECT_WIDENING(BgL_tmpz00_5821);
					}
					BgL_auxz00_5819 = ((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_5820);
				}
				return
					(((BgL_svarzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5819))->
					BgL_uzd2markzd2);
			}
		}

	}



/* &<@anonymous:1354> */
	obj_t BGl_z62zc3z04anonymousza31354ze3ze5zzintegrate_infoz00(obj_t
		BgL_envz00_3229)
	{
		{	/* Integrate/iinfo.scm 23 */
			return BUNSPEC;
		}

	}



/* &lambda1353 */
	obj_t BGl_z62lambda1353z62zzintegrate_infoz00(obj_t BgL_envz00_3230,
		obj_t BgL_oz00_3231, obj_t BgL_vz00_3232)
	{
		{	/* Integrate/iinfo.scm 23 */
			{
				BgL_svarzf2iinfozf2_bglt BgL_auxz00_5827;

				{
					obj_t BgL_auxz00_5828;

					{	/* Integrate/iinfo.scm 23 */
						BgL_objectz00_bglt BgL_tmpz00_5829;

						BgL_tmpz00_5829 =
							((BgL_objectz00_bglt) ((BgL_svarz00_bglt) BgL_oz00_3231));
						BgL_auxz00_5828 = BGL_OBJECT_WIDENING(BgL_tmpz00_5829);
					}
					BgL_auxz00_5827 = ((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_5828);
				}
				return
					((((BgL_svarzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5827))->
						BgL_fzd2markzd2) = ((obj_t) BgL_vz00_3232), BUNSPEC);
			}
		}

	}



/* &lambda1352 */
	obj_t BGl_z62lambda1352z62zzintegrate_infoz00(obj_t BgL_envz00_3233,
		obj_t BgL_oz00_3234)
	{
		{	/* Integrate/iinfo.scm 23 */
			{
				BgL_svarzf2iinfozf2_bglt BgL_auxz00_5835;

				{
					obj_t BgL_auxz00_5836;

					{	/* Integrate/iinfo.scm 23 */
						BgL_objectz00_bglt BgL_tmpz00_5837;

						BgL_tmpz00_5837 =
							((BgL_objectz00_bglt) ((BgL_svarz00_bglt) BgL_oz00_3234));
						BgL_auxz00_5836 = BGL_OBJECT_WIDENING(BgL_tmpz00_5837);
					}
					BgL_auxz00_5835 = ((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_5836);
				}
				return
					(((BgL_svarzf2iinfozf2_bglt) COBJECT(BgL_auxz00_5835))->
					BgL_fzd2markzd2);
			}
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzintegrate_infoz00()
	{
		{	/* Integrate/iinfo.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzintegrate_infoz00()
	{
		{	/* Integrate/iinfo.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzintegrate_infoz00()
	{
		{	/* Integrate/iinfo.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2057z00zzintegrate_infoz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2057z00zzintegrate_infoz00));
			return
				BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2057z00zzintegrate_infoz00));
		}

	}

#ifdef __cplusplus
}
#endif
