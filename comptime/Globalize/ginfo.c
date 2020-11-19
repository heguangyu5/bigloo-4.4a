/*===========================================================================*/
/*   (Globalize/ginfo.scm)                                                   */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Globalize/ginfo.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* object type definitions */
	typedef struct BgL_typez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_namez00;
		obj_t BgL_siza7eza7;
		obj_t BgL_classz00;
		obj_t BgL_coercezd2tozd2;
		obj_t BgL_parentsz00;
		bool_t BgL_initzf3zf3;
		bool_t BgL_magiczf3zf3;
		obj_t BgL_z42z42;
		obj_t BgL_aliasz00;
		obj_t BgL_pointedzd2tozd2byz00;
		obj_t BgL_tvectorz00;
		obj_t BgL_locationz00;
		obj_t BgL_importzd2locationzd2;
		int BgL_occurrencez00;
	}              *BgL_typez00_bglt;

	typedef struct BgL_valuez00_bgl
	{
		header_t header;
		obj_t widening;
	}               *BgL_valuez00_bglt;

	typedef struct BgL_variablez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_namez00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_valuez00_bgl *BgL_valuez00;
		obj_t BgL_accessz00;
		obj_t BgL_fastzd2alphazd2;
		obj_t BgL_removablez00;
		long BgL_occurrencez00;
		long BgL_occurrencewz00;
		bool_t BgL_userzf3zf3;
	}                  *BgL_variablez00_bglt;

	typedef struct BgL_globalz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_namez00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_valuez00_bgl *BgL_valuez00;
		obj_t BgL_accessz00;
		obj_t BgL_fastzd2alphazd2;
		obj_t BgL_removablez00;
		long BgL_occurrencez00;
		long BgL_occurrencewz00;
		bool_t BgL_userzf3zf3;
		obj_t BgL_modulez00;
		obj_t BgL_importz00;
		bool_t BgL_evaluablezf3zf3;
		bool_t BgL_evalzf3zf3;
		obj_t BgL_libraryz00;
		obj_t BgL_pragmaz00;
		obj_t BgL_srcz00;
		obj_t BgL_jvmzd2typezd2namez00;
		obj_t BgL_initz00;
		obj_t BgL_aliasz00;
	}                *BgL_globalz00_bglt;

	typedef struct BgL_localz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_namez00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_valuez00_bgl *BgL_valuez00;
		obj_t BgL_accessz00;
		obj_t BgL_fastzd2alphazd2;
		obj_t BgL_removablez00;
		long BgL_occurrencez00;
		long BgL_occurrencewz00;
		bool_t BgL_userzf3zf3;
		long BgL_keyz00;
	}               *BgL_localz00_bglt;

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

	typedef struct BgL_sfunzf2ginfozf2_bgl
	{
		bool_t BgL_gzf3zf3;
		obj_t BgL_cfromz00;
		obj_t BgL_cfromza2za2;
		obj_t BgL_ctoz00;
		obj_t BgL_ctoza2za2;
		obj_t BgL_efunctionsz00;
		obj_t BgL_integratorz00;
		obj_t BgL_imarkz00;
		obj_t BgL_ownerz00;
		obj_t BgL_integratedz00;
		obj_t BgL_pluggedzd2inzd2;
		long BgL_markz00;
		obj_t BgL_freezd2markzd2;
		obj_t BgL_thezd2globalzd2;
		obj_t BgL_kapturedz00;
		obj_t BgL_newzd2bodyzd2;
		long BgL_bmarkz00;
		long BgL_umarkz00;
		obj_t BgL_freez00;
		obj_t BgL_boundz00;
	}                      *BgL_sfunzf2ginfozf2_bglt;

	typedef struct BgL_svarzf2ginfozf2_bgl
	{
		bool_t BgL_kapturedzf3zf3;
		long BgL_freezd2markzd2;
		long BgL_markz00;
		bool_t BgL_celledzf3zf3;
		bool_t BgL_stackablez00;
	}                      *BgL_svarzf2ginfozf2_bglt;

	typedef struct BgL_sexitzf2ginfozf2_bgl
	{
		bool_t BgL_gzf3zf3;
		bool_t BgL_kapturedzf3zf3;
		long BgL_freezd2markzd2;
		long BgL_markz00;
	}                       *BgL_sexitzf2ginfozf2_bglt;

	typedef struct BgL_localzf2ginfozf2_bgl
	{
		bool_t BgL_escapezf3zf3;
		bool_t BgL_globaliza7edzf3z54;
	}                       *BgL_localzf2ginfozf2_bglt;

	typedef struct BgL_globalzf2ginfozf2_bgl
	{
		bool_t BgL_escapezf3zf3;
		obj_t BgL_globalzd2closurezd2;
	}                        *BgL_globalzf2ginfozf2_bglt;


	static obj_t BGl_z62lambda1921z62zzglobaliza7e_ginfoza7(obj_t, obj_t);
	static obj_t BGl_z62lambda1922z62zzglobaliza7e_ginfoza7(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31861ze3ze5zzglobaliza7e_ginfoza7(obj_t);
	static obj_t BGl_z62lambda1928z62zzglobaliza7e_ginfoza7(obj_t, obj_t);
	static obj_t BGl_z62lambda1929z62zzglobaliza7e_ginfoza7(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_localzf2Ginfozd2namez20zzglobaliza7e_ginfoza7(BgL_localz00_bglt);
	static obj_t BGl_z62lambda1935z62zzglobaliza7e_ginfoza7(obj_t, obj_t);
	static obj_t BGl_z62lambda1936z62zzglobaliza7e_ginfoza7(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2Ginfozd2namezd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_globalz00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_classzd2nilzd2initz12z12zz__objectz00(obj_t);
	static obj_t
		BGl_z62globalzf2Ginfozd2evalzf3zd2setz12z71zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62sfunzf2Ginfozd2freezd2markz90zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	static BgL_localz00_bglt BGl_z62lambda1944z62zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static BgL_localz00_bglt BGl_z62lambda1947z62zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2Ginfozd2pragmazd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_globalz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2Ginfozd2srcz20zzglobaliza7e_ginfoza7(BgL_globalz00_bglt);
	static obj_t
		BGl_z62sfunzf2Ginfozd2thezd2closurezd2globalz42zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	static BgL_localz00_bglt BGl_z62lambda1950z62zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	static obj_t BGl_z62lambda1958z62zzglobaliza7e_ginfoza7(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31937ze3ze5zzglobaliza7e_ginfoza7(obj_t);
	static obj_t BGl_z62lambda1959z62zzglobaliza7e_ginfoza7(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL long
		BGl_localzf2Ginfozd2occurrencewz20zzglobaliza7e_ginfoza7(BgL_localz00_bglt);
	static obj_t
		BGl_z62sfunzf2Ginfozd2classzd2setz12z82zzglobaliza7e_ginfoza7(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2freezd2markzf2zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt);
	extern obj_t BGl_sfunz00zzast_varz00;
	static obj_t BGl_z62sfunzf2Ginfozd2failsafez42zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	static obj_t BGl_z62lambda1965z62zzglobaliza7e_ginfoza7(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_sfunzf2Ginfozf3z01zzglobaliza7e_ginfoza7(obj_t);
	static obj_t BGl_z62lambda1966z62zzglobaliza7e_ginfoza7(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2argszd2noescapezf2zzglobaliza7e_ginfoza7
		(BgL_sfunz00_bglt);
	static obj_t BGl_z62zc3z04anonymousza31687ze3ze5zzglobaliza7e_ginfoza7(obj_t);
	BGL_EXPORTED_DECL long
		BGl_sfunzf2Ginfozd2arityz20zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2Ginfozd2accesszd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_globalz00_bglt, obj_t);
	static BgL_globalz00_bglt BGl_z62lambda1974z62zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31793ze3ze5zzglobaliza7e_ginfoza7(obj_t);
	static BgL_globalz00_bglt BGl_z62lambda1977z62zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2Ginfozd2importz20zzglobaliza7e_ginfoza7(BgL_globalz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_sexitzf2Ginfozd2Gzf3zd2setz12z13zzglobaliza7e_ginfoza7
		(BgL_sexitz00_bglt, bool_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2sidezd2effectzf2zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt);
	static BgL_globalz00_bglt BGl_z62lambda1981z62zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	static obj_t BGl_z62globalzf2Ginfozf3z63zzglobaliza7e_ginfoza7(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_localzf2Ginfozd2typez20zzglobaliza7e_ginfoza7(BgL_localz00_bglt);
	static obj_t BGl_z62lambda1989z62zzglobaliza7e_ginfoza7(obj_t, obj_t);
	extern obj_t BGl_sexitz00zzast_varz00;
	static BgL_sfunz00_bglt
		BGl_z62makezd2sfunzf2Ginfoz42zzglobaliza7e_ginfoza7(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzglobaliza7e_ginfoza7();
	static obj_t BGl_z62lambda1990z62zzglobaliza7e_ginfoza7(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1997z62zzglobaliza7e_ginfoza7(obj_t, obj_t);
	static obj_t BGl_z62lambda1998z62zzglobaliza7e_ginfoza7(obj_t, obj_t, obj_t);
	static obj_t BGl_z62sfunzf2Ginfozd2stackablez42zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	static obj_t BGl_z62globalzf2Ginfozd2aliasz42zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31869ze3ze5zzglobaliza7e_ginfoza7(obj_t);
	static obj_t
		BGl_z62sfunzf2Ginfozd2predicatezd2ofz90zzglobaliza7e_ginfoza7(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2sidezd2effectzd2setz12z32zzglobaliza7e_ginfoza7
		(BgL_sfunz00_bglt, obj_t);
	static BgL_svarz00_bglt
		BGl_z62svarzf2Ginfozd2nilz42zzglobaliza7e_ginfoza7(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2stackablez20zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt);
	static obj_t BGl_z62sfunzf2Ginfozd2imarkz42zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_sexitzf2Ginfozd2Gzf3zd3zzglobaliza7e_ginfoza7(BgL_sexitz00_bglt);
	BGL_EXPORTED_DEF obj_t BGl_localzf2Ginfozf2zzglobaliza7e_ginfoza7 = BUNSPEC;
	static obj_t BGl_methodzd2initzd2zzglobaliza7e_ginfoza7();
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2failsafez20zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2Ginfozd2typezd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_globalz00_bglt, BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2newzd2bodyzd2setz12z32zzglobaliza7e_ginfoza7
		(BgL_sfunz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2Ginfozd2libraryzd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_globalz00_bglt, obj_t);
	static obj_t BGl_z62svarzf2Ginfozd2freezd2markz90zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	static obj_t
		BGl_z62globalzf2Ginfozd2evaluablezf3zd2setz12z71zzglobaliza7e_ginfoza7
		(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2thezd2closurezd2globalz20zzglobaliza7e_ginfoza7
		(BgL_sfunz00_bglt);
	static obj_t BGl_z62localzf2Ginfozd2removablez42zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	static obj_t BGl_z62sfunzf2Ginfozd2strengthz42zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2propertyzd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_sfunz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_localzf2Ginfozd2globaliza7edzf3zd2setz12zb4zzglobaliza7e_ginfoza7
		(BgL_localz00_bglt, bool_t);
	static BgL_sexitz00_bglt
		BGl_z62sexitzf2Ginfozd2nilz42zzglobaliza7e_ginfoza7(obj_t);
	static obj_t BGl_z62sfunzf2Ginfozd2classz42zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	BGL_EXPORTED_DECL long
		BGl_svarzf2Ginfozd2freezd2markzf2zzglobaliza7e_ginfoza7(BgL_svarz00_bglt);
	static obj_t BGl_z62sexitzf2Ginfozd2markz42zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	extern obj_t BGl_svarz00zzast_varz00;
	static obj_t
		BGl_z62sfunzf2Ginfozd2efunctionszd2setz12z82zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_svarzf2Ginfozf3z01zzglobaliza7e_ginfoza7(obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_localzf2Ginfozd2globaliza7edzf3z74zzglobaliza7e_ginfoza7
		(BgL_localz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_svarzf2Ginfozd2celledzf3zd2setz12z13zzglobaliza7e_ginfoza7
		(BgL_svarz00_bglt, bool_t);
	static obj_t BGl_z62sfunzf2Ginfozd2ctoz42zzglobaliza7e_ginfoza7(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_valuez00_bglt
		BGl_localzf2Ginfozd2valuez20zzglobaliza7e_ginfoza7(BgL_localz00_bglt);
	static obj_t
		BGl_z62globalzf2Ginfozd2initzd2setz12z82zzglobaliza7e_ginfoza7(obj_t, obj_t,
		obj_t);
	static BgL_svarz00_bglt
		BGl_z62makezd2svarzf2Ginfoz42zzglobaliza7e_ginfoza7(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62globalzf2Ginfozd2jvmzd2typezd2namez42zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	static obj_t BGl_z62svarzf2Ginfozd2stackablez42zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	static obj_t
		BGl_z62globalzf2Ginfozd2importzd2setz12z82zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62localzf2Ginfozd2occurrencewz42zzglobaliza7e_ginfoza7(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2Ginfozd2jvmzd2typezd2namezd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_globalz00_bglt, obj_t);
	static obj_t
		BGl_z62sfunzf2Ginfozd2cfromza2zd2setz12z20zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_svarzf2Ginfozd2stackablez20zzglobaliza7e_ginfoza7(BgL_svarz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2cfromz20zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2keysz20zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt);
	static obj_t BGl_z62globalzf2Ginfozd2userzf3zb1zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	static obj_t
		BGl_z62sfunzf2Ginfozd2boundzd2setz12z82zzglobaliza7e_ginfoza7(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62sfunzf2Ginfozd2ctozd2setz12z82zzglobaliza7e_ginfoza7(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62svarzf2Ginfozd2kapturedzf3zb1zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_localzf2Ginfozd2valuezd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_localz00_bglt, BgL_valuez00_bglt);
	BGL_EXPORTED_DECL long
		BGl_sexitzf2Ginfozd2freezd2markzf2zzglobaliza7e_ginfoza7(BgL_sexitz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2strengthz20zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL long
		BGl_localzf2Ginfozd2occurrencez20zzglobaliza7e_ginfoza7(BgL_localz00_bglt);
	static obj_t BGl_z62sfunzf2Ginfozd2boundz42zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_svarzf2Ginfozd2kapturedzf3zd3zzglobaliza7e_ginfoza7(BgL_svarz00_bglt);
	static obj_t BGl_z62lambda1606z62zzglobaliza7e_ginfoza7(obj_t, obj_t);
	static obj_t BGl_z62lambda1607z62zzglobaliza7e_ginfoza7(obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62sexitzf2Ginfozd2detachedzf3zb1zzglobaliza7e_ginfoza7(obj_t, obj_t);
	static obj_t
		BGl_z62globalzf2Ginfozd2escapezf3zd2setz12z71zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62sfunzf2Ginfozd2integratedzd2setz12z82zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62globalzf2Ginfozd2pragmazd2setz12z82zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62sexitzf2Ginfozd2kapturedzf3zd2setz12z71zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62lambda1625z62zzglobaliza7e_ginfoza7(obj_t, obj_t);
	static obj_t BGl_z62lambda1626z62zzglobaliza7e_ginfoza7(obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62sfunzf2Ginfozd2argszd2noescapez90zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	static obj_t
		BGl_z62sfunzf2Ginfozd2pluggedzd2inz90zzglobaliza7e_ginfoza7(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31905ze3ze5zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_localzf2Ginfozd2userzf3zd2setz12z13zzglobaliza7e_ginfoza7
		(BgL_localz00_bglt, bool_t);
	static obj_t
		BGl_z62globalzf2Ginfozd2accesszd2setz12z82zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2Ginfozd2srczd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_globalz00_bglt, obj_t);
	static obj_t BGl_z62lambda1641z62zzglobaliza7e_ginfoza7(obj_t, obj_t);
	static obj_t BGl_z62lambda1642z62zzglobaliza7e_ginfoza7(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31760ze3ze5zzglobaliza7e_ginfoza7(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31833ze3ze5zzglobaliza7e_ginfoza7(obj_t);
	static obj_t
		BGl_z62localzf2Ginfozd2namezd2setz12z82zzglobaliza7e_ginfoza7(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2ctozd2setz12ze0zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt,
		obj_t);
	static obj_t BGl_z62lambda1664z62zzglobaliza7e_ginfoza7(obj_t, obj_t);
	static obj_t BGl_z62lambda1665z62zzglobaliza7e_ginfoza7(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_sexitzf2Ginfozd2kapturedzf3zd3zzglobaliza7e_ginfoza7(BgL_sexitz00_bglt);
	BGL_EXPORTED_DECL bool_t
		BGl_globalzf2Ginfozd2evaluablezf3zd3zzglobaliza7e_ginfoza7
		(BgL_globalz00_bglt);
	BGL_EXPORTED_DEF obj_t BGl_sfunzf2Ginfozf2zzglobaliza7e_ginfoza7 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31585ze3ze5zzglobaliza7e_ginfoza7(obj_t);
	static obj_t BGl_z62globalzf2Ginfozd2initz42zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_localzf2Ginfozd2fastzd2alphazf2zzglobaliza7e_ginfoza7
		(BgL_localz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2predicatezd2ofzd2setz12z32zzglobaliza7e_ginfoza7
		(BgL_sfunz00_bglt, obj_t);
	static obj_t
		BGl_z62localzf2Ginfozd2occurrencezd2setz12z82zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62sfunzf2Ginfozd2umarkzd2setz12z82zzglobaliza7e_ginfoza7(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62lambda1685z62zzglobaliza7e_ginfoza7(obj_t, obj_t);
	static obj_t BGl_z62lambda1686z62zzglobaliza7e_ginfoza7(obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62localzf2Ginfozd2globaliza7edzf3z16zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	static obj_t BGl_z62lambda1697z62zzglobaliza7e_ginfoza7(obj_t, obj_t);
	static obj_t BGl_z62lambda1698z62zzglobaliza7e_ginfoza7(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2kapturedzd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_sfunz00_bglt, obj_t);
	static obj_t
		BGl_z62sexitzf2Ginfozd2markzd2setz12z82zzglobaliza7e_ginfoza7(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_svarzf2Ginfozd2celledzf3zd3zzglobaliza7e_ginfoza7(BgL_svarz00_bglt);
	static obj_t
		BGl_z62svarzf2Ginfozd2celledzf3zd2setz12z71zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_localzf2Ginfozd2accessz20zzglobaliza7e_ginfoza7(BgL_localz00_bglt);
	static obj_t
		BGl_z62sfunzf2Ginfozd2newzd2bodyzd2setz12z50zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2imarkz20zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL BgL_valuez00_bglt
		BGl_globalzf2Ginfozd2valuez20zzglobaliza7e_ginfoza7(BgL_globalz00_bglt);
	static obj_t BGl_z62sfunzf2Ginfozd2newzd2bodyz90zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2locz20zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2Ginfozd2fastzd2alphazd2setz12z32zzglobaliza7e_ginfoza7
		(BgL_globalz00_bglt, obj_t);
	static obj_t BGl_z62sexitzf2Ginfozd2Gzf3zb1zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	static obj_t
		BGl_z62localzf2Ginfozd2occurrencewzd2setz12z82zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62sfunzf2Ginfozd2propertyzd2setz12z82zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62sfunzf2Ginfozd2ctoza2zd2setz12z20zzglobaliza7e_ginfoza7(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2ownerzd2setz12ze0zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31980ze3ze5zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_sfunz00_bglt
		BGl_makezd2sfunzf2Ginfoz20zzglobaliza7e_ginfoza7(long, obj_t, obj_t, obj_t,
		bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, bool_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t,
		obj_t, obj_t, long, long, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2ctoza2zd2setz12z42zzglobaliza7e_ginfoza7
		(BgL_sfunz00_bglt, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31876ze3ze5zzglobaliza7e_ginfoza7(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31949ze3ze5zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	static obj_t
		BGl_z62localzf2Ginfozd2typezd2setz12z82zzglobaliza7e_ginfoza7(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31699ze3ze5zzglobaliza7e_ginfoza7(obj_t);
	static obj_t
		BGl_z62sfunzf2Ginfozd2argszd2noescapezd2setz12z50zzglobaliza7e_ginfoza7
		(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2thezd2closurezf2zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2classz20zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt);
	static obj_t BGl_z62sexitzf2Ginfozd2handlerz42zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	BGL_EXPORTED_DECL long
		BGl_sexitzf2Ginfozd2markz20zzglobaliza7e_ginfoza7(BgL_sexitz00_bglt);
	static obj_t
		BGl_z62globalzf2Ginfozd2globalzd2closurezd2setz12z50zzglobaliza7e_ginfoza7
		(obj_t, obj_t, obj_t);
	static BgL_localz00_bglt
		BGl_z62localzf2Ginfozd2nilz42zzglobaliza7e_ginfoza7(obj_t);
	static obj_t BGl_z62globalzf2Ginfozd2idz42zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2Ginfozd2namez20zzglobaliza7e_ginfoza7(BgL_globalz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_localzf2Ginfozd2idz20zzglobaliza7e_ginfoza7(BgL_localz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2Ginfozd2globalzd2closurezf2zzglobaliza7e_ginfoza7
		(BgL_globalz00_bglt);
	static obj_t BGl_z62sexitzf2Ginfozf3z63zzglobaliza7e_ginfoza7(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2newzd2bodyzf2zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt);
	static obj_t BGl_z62sfunzf2Ginfozd2freez42zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	static obj_t BGl_z62sfunzf2Ginfozd2markz42zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	static obj_t BGl_z62localzf2Ginfozf3z63zzglobaliza7e_ginfoza7(obj_t, obj_t);
	static obj_t BGl_z62sfunzf2Ginfozd2ownerz42zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	static obj_t BGl_z62sfunzf2Ginfozd2bmarkz42zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2efunctionszd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_sfunz00_bglt, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_sfunzf2Ginfozd2Gzf3zd3zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL BgL_sexitz00_bglt
		BGl_sexitzf2Ginfozd2nilz20zzglobaliza7e_ginfoza7();
	static obj_t BGl_z62sfunzf2Ginfozd2integratedz42zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	static obj_t
		BGl_z62globalzf2Ginfozd2evaluablezf3zb1zzglobaliza7e_ginfoza7(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2efunctionsz20zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2bmarkzd2setz12ze0zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt,
		long);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2effectzd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_sfunz00_bglt, obj_t);
	static obj_t
		BGl_z62localzf2Ginfozd2removablezd2setz12z82zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_svarzf2Ginfozd2locz20zzglobaliza7e_ginfoza7(BgL_svarz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2Ginfozd2jvmzd2typezd2namez20zzglobaliza7e_ginfoza7
		(BgL_globalz00_bglt);
	static obj_t
		BGl_z62sfunzf2Ginfozd2thezd2globalz90zzglobaliza7e_ginfoza7(obj_t, obj_t);
	static obj_t
		BGl_z62sfunzf2Ginfozd2sidezd2effectzd2setz12z50zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sexitzf2Ginfozd2handlerz20zzglobaliza7e_ginfoza7(BgL_sexitz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2boundz20zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_globalzf2Ginfozd2typez20zzglobaliza7e_ginfoza7(BgL_globalz00_bglt);
	static obj_t
		BGl_z62sfunzf2Ginfozd2thezd2globalzd2setz12z50zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_svarz00_bglt
		BGl_makezd2svarzf2Ginfoz20zzglobaliza7e_ginfoza7(obj_t, bool_t, long, long,
		bool_t, bool_t);
	static obj_t
		BGl_z62sfunzf2Ginfozd2stackzd2allocatorzd2setz12z50zzglobaliza7e_ginfoza7
		(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_ginfoza7(long, char *);
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
	static obj_t
		BGl_z62sfunzf2Ginfozd2imarkzd2setz12z82zzglobaliza7e_ginfoza7(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2argszd2noescapezd2setz12z32zzglobaliza7e_ginfoza7
		(BgL_sfunz00_bglt, obj_t);
	static obj_t
		BGl_z62sfunzf2Ginfozd2cfromzd2setz12z82zzglobaliza7e_ginfoza7(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2Gzf3zd2setz12z13zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt,
		bool_t);
	BGL_EXPORTED_DECL BgL_globalz00_bglt
		BGl_makezd2globalzf2Ginfoz20zzglobaliza7e_ginfoza7(obj_t, obj_t,
		BgL_typez00_bglt, BgL_valuez00_bglt, obj_t, obj_t, obj_t, long, long,
		bool_t, obj_t, obj_t, bool_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, bool_t, obj_t);
	extern obj_t BGl_localz00zzast_varz00;
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2Ginfozd2removablezd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_globalz00_bglt, obj_t);
	static BgL_globalz00_bglt
		BGl_z62globalzf2Ginfozd2nilz42zzglobaliza7e_ginfoza7(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31730ze3ze5zzglobaliza7e_ginfoza7(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2integratedzd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_sfunz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sexitzf2Ginfozd2kapturedzf3zd2setz12z13zzglobaliza7e_ginfoza7
		(BgL_sexitz00_bglt, bool_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzglobaliza7e_ginfoza7();
	static obj_t
		BGl_z62svarzf2Ginfozd2kapturedzf3zd2setz12z71zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62sexitzf2Ginfozd2freezd2markzd2setz12z50zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62sfunzf2Ginfozd2kapturedzd2setz12z82zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31627ze3ze5zzglobaliza7e_ginfoza7(obj_t);
	static obj_t BGl_z62svarzf2Ginfozd2markz42zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	BGL_EXPORTED_DECL long
		BGl_globalzf2Ginfozd2occurrencewz20zzglobaliza7e_ginfoza7
		(BgL_globalz00_bglt);
	static obj_t BGl_z62zc3z04anonymousza31555ze3ze5zzglobaliza7e_ginfoza7(obj_t);
	static obj_t BGl_z62sfunzf2Ginfozd2bodyz42zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	extern obj_t BGl_valuez00zzast_varz00;
	static obj_t BGl_z62sfunzf2Ginfozd2umarkz42zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	static obj_t BGl_z62sfunzf2Ginfozd2integratorz42zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	static obj_t BGl_z62sfunzf2Ginfozd2topzf3zb1zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2failsafezd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_sfunz00_bglt, obj_t);
	static obj_t
		BGl_z62sfunzf2Ginfozd2loczd2setz12z82zzglobaliza7e_ginfoza7(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62lambda1712z62zzglobaliza7e_ginfoza7(obj_t, obj_t);
	static obj_t BGl_z62lambda1713z62zzglobaliza7e_ginfoza7(obj_t, obj_t, obj_t);
	static obj_t BGl_z62globalzf2Ginfozd2modulez42zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2Ginfozd2escapezf3zd2setz12z13zzglobaliza7e_ginfoza7
		(BgL_globalz00_bglt, bool_t);
	static obj_t BGl_z62lambda1728z62zzglobaliza7e_ginfoza7(obj_t, obj_t);
	static obj_t BGl_z62lambda1729z62zzglobaliza7e_ginfoza7(obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62sfunzf2Ginfozd2pluggedzd2inzd2setz12z50zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62lambda1739z62zzglobaliza7e_ginfoza7(obj_t, obj_t);
	static obj_t
		BGl_z62localzf2Ginfozd2globaliza7edzf3zd2setz12zd6zzglobaliza7e_ginfoza7
		(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_globalzf2Ginfozd2evalzf3zd3zzglobaliza7e_ginfoza7(BgL_globalz00_bglt);
	static obj_t BGl_z62globalzf2Ginfozd2removablez42zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2cfromza2z82zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt);
	static obj_t BGl_z62lambda1740z62zzglobaliza7e_ginfoza7(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1746z62zzglobaliza7e_ginfoza7(obj_t, obj_t);
	static obj_t BGl_z62lambda1747z62zzglobaliza7e_ginfoza7(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31916ze3ze5zzglobaliza7e_ginfoza7(obj_t);
	static BgL_valuez00_bglt
		BGl_z62localzf2Ginfozd2valuez42zzglobaliza7e_ginfoza7(obj_t, obj_t);
	static obj_t BGl_z62sfunzf2Ginfozd2locz42zzglobaliza7e_ginfoza7(obj_t, obj_t);
	static obj_t BGl_z62lambda1758z62zzglobaliza7e_ginfoza7(obj_t, obj_t);
	static obj_t BGl_z62lambda1759z62zzglobaliza7e_ginfoza7(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31666ze3ze5zzglobaliza7e_ginfoza7(obj_t);
	static obj_t BGl_z62sfunzf2Ginfozd2argsz42zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	static obj_t
		BGl_z62sfunzf2Ginfozd2stackablezd2setz12z82zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2classzd2setz12ze0zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt,
		obj_t);
	static BgL_sexitz00_bglt
		BGl_z62makezd2sexitzf2Ginfoz42zzglobaliza7e_ginfoza7(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62localzf2Ginfozd2keyz42zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	static obj_t BGl_z62lambda1776z62zzglobaliza7e_ginfoza7(obj_t, obj_t);
	static obj_t BGl_z62lambda1777z62zzglobaliza7e_ginfoza7(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31596ze3ze5zzglobaliza7e_ginfoza7(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2loczd2setz12ze0zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2Ginfozd2modulez20zzglobaliza7e_ginfoza7(BgL_globalz00_bglt);
	static obj_t
		BGl_z62sfunzf2Ginfozd2dssslzd2keywordsz90zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	static obj_t BGl_z62lambda1791z62zzglobaliza7e_ginfoza7(obj_t, obj_t);
	static obj_t BGl_z62sfunzf2Ginfozd2Gzf3zb1zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	static obj_t BGl_z62lambda1792z62zzglobaliza7e_ginfoza7(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2thezd2closurezd2globalzd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_sfunz00_bglt, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31849ze3ze5zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2Ginfozd2occurrencezd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_globalz00_bglt, long);
	static obj_t
		BGl_z62sfunzf2Ginfozd2bodyzd2setz12z82zzglobaliza7e_ginfoza7(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62localzf2Ginfozd2idz42zzglobaliza7e_ginfoza7(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31778ze3ze5zzglobaliza7e_ginfoza7(obj_t);
	static obj_t
		BGl_z62sfunzf2Ginfozd2argszd2setz12z82zzglobaliza7e_ginfoza7(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62svarzf2Ginfozd2loczd2setz12z82zzglobaliza7e_ginfoza7(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2ownerz20zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2bodyzd2setz12ze0zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL long
		BGl_sfunzf2Ginfozd2bmarkz20zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2effectz20zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt);
	static obj_t BGl_z62zc3z04anonymousza31884ze3ze5zzglobaliza7e_ginfoza7(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2Ginfozd2initzd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_globalz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2argszd2setz12ze0zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt,
		obj_t);
	static obj_t
		BGl_z62sexitzf2Ginfozd2detachedzf3zd2setz12z71zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2thezd2closurezd2setz12z32zzglobaliza7e_ginfoza7
		(BgL_sfunz00_bglt, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31991ze3ze5zzglobaliza7e_ginfoza7(obj_t);
	static obj_t
		BGl_z62sfunzf2Ginfozd2markzd2setz12z82zzglobaliza7e_ginfoza7(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62sfunzf2Ginfozd2freezd2markzd2setz12z50zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62sfunzf2Ginfozd2argszd2namez90zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_localz00_bglt
		BGl_localzf2Ginfozd2nilz20zzglobaliza7e_ginfoza7();
	BGL_EXPORTED_DECL obj_t
		BGl_localzf2Ginfozd2removablez20zzglobaliza7e_ginfoza7(BgL_localz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2cfromza2zd2setz12z42zzglobaliza7e_ginfoza7
		(BgL_sfunz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2Ginfozd2idz20zzglobaliza7e_ginfoza7(BgL_globalz00_bglt);
	static obj_t BGl_z62svarzf2Ginfozd2locz42zzglobaliza7e_ginfoza7(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2markzd2setz12ze0zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt,
		long);
	static obj_t
		BGl_z62svarzf2Ginfozd2stackablezd2setz12z82zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62globalzf2Ginfozd2namezd2setz12z82zzglobaliza7e_ginfoza7(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2argszd2namezf2zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2freez20zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL long
		BGl_sfunzf2Ginfozd2markz20zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt);
	static obj_t BGl_z62sfunzf2Ginfozf3z63zzglobaliza7e_ginfoza7(obj_t, obj_t);
	static obj_t
		BGl_z62sfunzf2Ginfozd2predicatezd2ofzd2setz12z50zzglobaliza7e_ginfoza7
		(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_localzf2Ginfozd2removablezd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_localz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_svarzf2Ginfozd2loczd2setz12ze0zzglobaliza7e_ginfoza7(BgL_svarz00_bglt,
		obj_t);
	static obj_t
		BGl_z62globalzf2Ginfozd2occurrencewz42zzglobaliza7e_ginfoza7(obj_t, obj_t);
	static obj_t BGl_z62sfunzf2Ginfozd2ctoza2ze0zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_globalz00_bglt
		BGl_globalzf2Ginfozd2nilz20zzglobaliza7e_ginfoza7();
	BGL_EXPORTED_DECL obj_t
		BGl_localzf2Ginfozd2accesszd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_localz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2thezd2globalzd2setz12z32zzglobaliza7e_ginfoza7
		(BgL_sfunz00_bglt, obj_t);
	static obj_t
		BGl_z62sfunzf2Ginfozd2sidezd2effectz90zzglobaliza7e_ginfoza7(obj_t, obj_t);
	static obj_t
		BGl_z62sfunzf2Ginfozd2failsafezd2setz12z82zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31999ze3ze5zzglobaliza7e_ginfoza7(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2boundzd2setz12ze0zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt,
		obj_t);
	static obj_t BGl_z62globalzf2Ginfozd2pragmaz42zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2Ginfozd2modulezd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_globalz00_bglt, obj_t);
	static obj_t BGl_z62sfunzf2Ginfozd2kapturedz42zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_localzf2Ginfozd2userzf3zd3zzglobaliza7e_ginfoza7(BgL_localz00_bglt);
	static obj_t BGl_z62globalzf2Ginfozd2accessz42zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	static obj_t
		BGl_z62globalzf2Ginfozd2fastzd2alphazd2setz12z50zzglobaliza7e_ginfoza7
		(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL long
		BGl_sfunzf2Ginfozd2umarkz20zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt);
	static obj_t
		BGl_z62globalzf2Ginfozd2globalzd2closurez90zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_sexitzf2Ginfozd2detachedzf3zd3zzglobaliza7e_ginfoza7(BgL_sexitz00_bglt);
	static obj_t
		BGl_z62globalzf2Ginfozd2jvmzd2typezd2namezd2setz12z82zzglobaliza7e_ginfoza7
		(obj_t, obj_t, obj_t);
	static obj_t BGl_z62svarzf2Ginfozd2celledzf3zb1zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	static obj_t BGl_z62localzf2Ginfozd2accessz42zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sexitzf2Ginfozd2freezd2markzd2setz12z32zzglobaliza7e_ginfoza7
		(BgL_sexitz00_bglt, long);
	static obj_t
		BGl_z62svarzf2Ginfozd2markzd2setz12z82zzglobaliza7e_ginfoza7(obj_t, obj_t,
		obj_t);
	static BgL_valuez00_bglt
		BGl_z62globalzf2Ginfozd2valuez42zzglobaliza7e_ginfoza7(obj_t, obj_t);
	static obj_t
		BGl_z62sfunzf2Ginfozd2thezd2closurezd2globalzd2setz12z82zzglobaliza7e_ginfoza7
		(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2Ginfozd2aliasz20zzglobaliza7e_ginfoza7(BgL_globalz00_bglt);
	static obj_t
		BGl_z62svarzf2Ginfozd2freezd2markzd2setz12z50zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31811ze3ze5zzglobaliza7e_ginfoza7(obj_t);
	static obj_t BGl_z62localzf2Ginfozd2escapezf3zb1zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2pluggedzd2inzf2zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt);
	static obj_t
		BGl_z62globalzf2Ginfozd2typezd2setz12z82zzglobaliza7e_ginfoza7(obj_t, obj_t,
		obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzglobaliza7e_ginfoza7();
	BGL_EXPORTED_DECL obj_t
		BGl_svarzf2Ginfozd2markzd2setz12ze0zzglobaliza7e_ginfoza7(BgL_svarz00_bglt,
		long);
	BGL_EXPORTED_DECL obj_t
		BGl_localzf2Ginfozd2fastzd2alphazd2setz12z32zzglobaliza7e_ginfoza7
		(BgL_localz00_bglt, obj_t);
	static obj_t BGl_z62globalzf2Ginfozd2namez42zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	BGL_EXPORTED_DECL long
		BGl_svarzf2Ginfozd2markz20zzglobaliza7e_ginfoza7(BgL_svarz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_localzf2Ginfozd2namezd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_localz00_bglt, obj_t);
	static obj_t BGl_z62svarzf2Ginfozf3z63zzglobaliza7e_ginfoza7(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2Ginfozd2aliaszd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_globalz00_bglt, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31741ze3ze5zzglobaliza7e_ginfoza7(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2bodyz20zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2Ginfozd2pragmaz20zzglobaliza7e_ginfoza7(BgL_globalz00_bglt);
	static obj_t
		BGl_z62sfunzf2Ginfozd2stackzd2allocatorz90zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2kapturedz20zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2Ginfozd2accessz20zzglobaliza7e_ginfoza7(BgL_globalz00_bglt);
	BGL_EXPORTED_DECL BgL_sexitz00_bglt
		BGl_makezd2sexitzf2Ginfoz20zzglobaliza7e_ginfoza7(obj_t, bool_t, bool_t,
		bool_t, long, long);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2pluggedzd2inzd2setz12z32zzglobaliza7e_ginfoza7
		(BgL_sfunz00_bglt, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_sfunzf2Ginfozd2topzf3zd3zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt);
	static obj_t
		BGl_z62sexitzf2Ginfozd2freezd2markz90zzglobaliza7e_ginfoza7(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_svarzf2Ginfozd2kapturedzf3zd2setz12z13zzglobaliza7e_ginfoza7
		(BgL_svarz00_bglt, bool_t);
	static obj_t
		BGl_z62sfunzf2Ginfozd2integratorzd2setz12z82zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2umarkzd2setz12ze0zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt,
		long);
	static obj_t
		BGl_z62sfunzf2Ginfozd2freezd2setz12z82zzglobaliza7e_ginfoza7(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62lambda1809z62zzglobaliza7e_ginfoza7(obj_t, obj_t);
	static obj_t BGl_z62lambda1810z62zzglobaliza7e_ginfoza7(obj_t, obj_t, obj_t);
	static BgL_sfunz00_bglt BGl_z62lambda1490z62zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31923ze3ze5zzglobaliza7e_ginfoza7(obj_t);
	static BgL_sfunz00_bglt BGl_z62lambda1496z62zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	static BgL_sfunz00_bglt BGl_z62lambda1499z62zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sexitzf2Ginfozd2markzd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_sexitz00_bglt, long);
	static obj_t
		BGl_z62globalzf2Ginfozd2removablezd2setz12z82zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_sexitzf2Ginfozf3z01zzglobaliza7e_ginfoza7(obj_t);
	static BgL_typez00_bglt
		BGl_z62globalzf2Ginfozd2typez42zzglobaliza7e_ginfoza7(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2freezd2setz12ze0zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_localzf2Ginfozd2escapezf3zd3zzglobaliza7e_ginfoza7(BgL_localz00_bglt);
	static obj_t
		BGl_z62globalzf2Ginfozd2occurrencewzd2setz12z82zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62lambda1824z62zzglobaliza7e_ginfoza7(obj_t, obj_t);
	static obj_t BGl_z62lambda1825z62zzglobaliza7e_ginfoza7(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31568ze3ze5zzglobaliza7e_ginfoza7(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_localzf2Ginfozf3z01zzglobaliza7e_ginfoza7(obj_t);
	static obj_t BGl_z62lambda1831z62zzglobaliza7e_ginfoza7(obj_t, obj_t);
	static obj_t BGl_z62lambda1832z62zzglobaliza7e_ginfoza7(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2argsz20zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt);
	static obj_t
		BGl_z62globalzf2Ginfozd2srczd2setz12z82zzglobaliza7e_ginfoza7(obj_t, obj_t,
		obj_t);
	static BgL_svarz00_bglt BGl_z62lambda1843z62zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62localzf2Ginfozd2accesszd2setz12z82zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2Ginfozd2evaluablezf3zd2setz12z13zzglobaliza7e_ginfoza7
		(BgL_globalz00_bglt, bool_t);
	static BgL_svarz00_bglt BGl_z62lambda1847z62zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31748ze3ze5zzglobaliza7e_ginfoza7(obj_t);
	static obj_t
		BGl_z62localzf2Ginfozd2valuezd2setz12z82zzglobaliza7e_ginfoza7(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL long
		BGl_localzf2Ginfozd2keyz20zzglobaliza7e_ginfoza7(BgL_localz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_localzf2Ginfozd2escapezf3zd2setz12z13zzglobaliza7e_ginfoza7
		(BgL_localz00_bglt, bool_t);
	static BgL_svarz00_bglt BGl_z62lambda1850z62zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	static obj_t BGl_z62lambda1859z62zzglobaliza7e_ginfoza7(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31498ze3ze5zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	static BgL_globalz00_bglt
		BGl_z62makezd2globalzf2Ginfoz42zzglobaliza7e_ginfoza7(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62localzf2Ginfozd2occurrencez42zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	static obj_t BGl_z62lambda1860z62zzglobaliza7e_ginfoza7(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31960ze3ze5zzglobaliza7e_ginfoza7(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzglobaliza7e_ginfoza7 =
		BUNSPEC;
	static obj_t BGl_z62lambda1867z62zzglobaliza7e_ginfoza7(obj_t, obj_t);
	static obj_t BGl_z62lambda1868z62zzglobaliza7e_ginfoza7(obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62sexitzf2Ginfozd2kapturedzf3zb1zzglobaliza7e_ginfoza7(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_sfunz00_bglt
		BGl_sfunzf2Ginfozd2nilz20zzglobaliza7e_ginfoza7();
	static obj_t BGl_z62lambda1874z62zzglobaliza7e_ginfoza7(obj_t, obj_t);
	static obj_t BGl_z62lambda1875z62zzglobaliza7e_ginfoza7(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2stackablezd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_sfunz00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	BGL_EXPORTED_DECL obj_t
		BGl_localzf2Ginfozd2typezd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_localz00_bglt, BgL_typez00_bglt);
	static BgL_localz00_bglt
		BGl_z62makezd2localzf2Ginfoz42zzglobaliza7e_ginfoza7(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_globalzf2Ginfozd2userzf3zd3zzglobaliza7e_ginfoza7(BgL_globalz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2Ginfozd2globalzd2closurezd2setz12z32zzglobaliza7e_ginfoza7
		(BgL_globalz00_bglt, obj_t);
	static obj_t BGl_z62lambda1882z62zzglobaliza7e_ginfoza7(obj_t, obj_t);
	static obj_t BGl_z62lambda1883z62zzglobaliza7e_ginfoza7(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sexitzf2Ginfozd2handlerzd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_sexitz00_bglt, obj_t);
	static obj_t BGl_z62lambda1889z62zzglobaliza7e_ginfoza7(obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzglobaliza7e_ginfoza7();
	static obj_t BGl_z62lambda1890z62zzglobaliza7e_ginfoza7(obj_t, obj_t, obj_t);
	static BgL_sexitz00_bglt BGl_z62lambda1899z62zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2Ginfozd2valuezd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_globalz00_bglt, BgL_valuez00_bglt);
	static obj_t
		BGl_z62localzf2Ginfozd2userzf3zd2setz12z71zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sexitzf2Ginfozd2detachedzf3zd2setz12z13zzglobaliza7e_ginfoza7
		(BgL_sexitz00_bglt, bool_t);
	static obj_t BGl_z62zc3z04anonymousza31891ze3ze5zzglobaliza7e_ginfoza7(obj_t);
	static obj_t BGl_genericzd2initzd2zzglobaliza7e_ginfoza7();
	static obj_t BGl_z62sfunzf2Ginfozd2propertyz42zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2dssslzd2keywordszf2zzglobaliza7e_ginfoza7
		(BgL_sfunz00_bglt);
	static obj_t BGl_z62localzf2Ginfozd2namez42zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	BGL_EXPORTED_DECL long
		BGl_globalzf2Ginfozd2occurrencez20zzglobaliza7e_ginfoza7
		(BgL_globalz00_bglt);
	BGL_IMPORT obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t,
		bool_t, bool_t, obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62sfunzf2Ginfozd2Gzf3zd2setz12z71zzglobaliza7e_ginfoza7(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_sexitzf2Ginfozf2zzglobaliza7e_ginfoza7 = BUNSPEC;
	static obj_t
		BGl_z62globalzf2Ginfozd2modulezd2setz12z82zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	static obj_t BGl_z62globalzf2Ginfozd2srcz42zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	static obj_t
		BGl_z62globalzf2Ginfozd2aliaszd2setz12z82zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2strengthzd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_sfunz00_bglt, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31967ze3ze5zzglobaliza7e_ginfoza7(obj_t);
	static obj_t
		BGl_z62globalzf2Ginfozd2libraryzd2setz12z82zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2Ginfozd2occurrencewzd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_globalz00_bglt, long);
	static obj_t
		BGl_z62localzf2Ginfozd2fastzd2alphaz90zzglobaliza7e_ginfoza7(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_z62sfunzf2Ginfozd2cfromza2ze0zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	static obj_t
		BGl_z62sfunzf2Ginfozd2ownerzd2setz12z82zzglobaliza7e_ginfoza7(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2Ginfozd2userzf3zd2setz12z13zzglobaliza7e_ginfoza7
		(BgL_globalz00_bglt, bool_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2integratedz20zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt);
	static obj_t BGl_z62sfunzf2Ginfozd2arityz42zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	static BgL_typez00_bglt
		BGl_z62localzf2Ginfozd2typez42zzglobaliza7e_ginfoza7(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2thezd2globalzf2zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2freezd2markzd2setz12z32zzglobaliza7e_ginfoza7
		(BgL_sfunz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2propertyz20zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2Ginfozd2fastzd2alphazf2zzglobaliza7e_ginfoza7
		(BgL_globalz00_bglt);
	static obj_t
		BGl_z62sfunzf2Ginfozd2dssslzd2keywordszd2setz12z50zzglobaliza7e_ginfoza7
		(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_svarz00_bglt
		BGl_svarzf2Ginfozd2nilz20zzglobaliza7e_ginfoza7();
	BGL_EXPORTED_DECL obj_t
		BGl_svarzf2Ginfozd2stackablezd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_svarz00_bglt, bool_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2ctoza2z82zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2imarkzd2setz12ze0zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt,
		obj_t);
	static obj_t BGl_z62globalzf2Ginfozd2evalzf3zb1zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2cfromzd2setz12ze0zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt,
		obj_t);
	static obj_t
		BGl_z62sfunzf2Ginfozd2thezd2closurezd2setz12z50zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62globalzf2Ginfozd2libraryz42zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2Ginfozd2evalzf3zd2setz12z13zzglobaliza7e_ginfoza7
		(BgL_globalz00_bglt, bool_t);
	BGL_EXPORTED_DECL bool_t
		BGl_globalzf2Ginfozf3z01zzglobaliza7e_ginfoza7(obj_t);
	static obj_t BGl_z62sfunzf2Ginfozd2optionalsz42zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2Ginfozd2initz20zzglobaliza7e_ginfoza7(BgL_globalz00_bglt);
	static obj_t
		BGl_z62globalzf2Ginfozd2occurrencezd2setz12z82zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2stackzd2allocatorzd2setz12z32zzglobaliza7e_ginfoza7
		(BgL_sfunz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2Ginfozd2libraryz20zzglobaliza7e_ginfoza7(BgL_globalz00_bglt);
	static obj_t BGl_z62sfunzf2Ginfozd2effectz42zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2Ginfozd2removablez20zzglobaliza7e_ginfoza7(BgL_globalz00_bglt);
	static obj_t
		BGl_z62sfunzf2Ginfozd2thezd2closurez90zzglobaliza7e_ginfoza7(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2optionalsz20zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt);
	static obj_t BGl_z62sfunzf2Ginfozd2efunctionsz42zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	static obj_t
		BGl_z62sfunzf2Ginfozd2bmarkzd2setz12z82zzglobaliza7e_ginfoza7(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2dssslzd2keywordszd2setz12z32zzglobaliza7e_ginfoza7
		(BgL_sfunz00_bglt, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31608ze3ze5zzglobaliza7e_ginfoza7(obj_t);
	static obj_t
		BGl_z62globalzf2Ginfozd2valuezd2setz12z82zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62sfunzf2Ginfozd2keysz42zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2integratorz20zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt);
	static obj_t BGl_cnstzd2initzd2zzglobaliza7e_ginfoza7();
	static obj_t BGl_z62zc3z04anonymousza31714ze3ze5zzglobaliza7e_ginfoza7(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzglobaliza7e_ginfoza7();
	BGL_EXPORTED_DECL obj_t
		BGl_localzf2Ginfozd2occurrencewzd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_localz00_bglt, long);
	static obj_t
		BGl_z62localzf2Ginfozd2escapezf3zd2setz12z71zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62globalzf2Ginfozd2occurrencez42zzglobaliza7e_ginfoza7(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2stackzd2allocatorzf2zzglobaliza7e_ginfoza7
		(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_localzf2Ginfozd2occurrencezd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_localz00_bglt, long);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2ctoz20zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt);
	BGL_EXPORTED_DEF obj_t BGl_globalzf2Ginfozf2zzglobaliza7e_ginfoza7 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31643ze3ze5zzglobaliza7e_ginfoza7(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2predicatezd2ofzf2zzglobaliza7e_ginfoza7
		(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2integratorzd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_sfunz00_bglt, obj_t);
	static obj_t BGl_z62globalzf2Ginfozd2escapezf3zb1zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_svarzf2Ginfozd2freezd2markzd2setz12z32zzglobaliza7e_ginfoza7
		(BgL_svarz00_bglt, long);
	static obj_t
		BGl_z62sfunzf2Ginfozd2effectzd2setz12z82zzglobaliza7e_ginfoza7(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62sfunzf2Ginfozd2topzf3zd2setz12z71zzglobaliza7e_ginfoza7(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62sexitzf2Ginfozd2handlerzd2setz12z82zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62globalzf2Ginfozd2userzf3zd2setz12z71zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62lambda1553z62zzglobaliza7e_ginfoza7(obj_t, obj_t);
	static obj_t BGl_z62lambda1554z62zzglobaliza7e_ginfoza7(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_globalzf2Ginfozd2escapezf3zd3zzglobaliza7e_ginfoza7(BgL_globalz00_bglt);
	static obj_t BGl_z62sfunzf2Ginfozd2cfromz42zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31930ze3ze5zzglobaliza7e_ginfoza7(obj_t);
	static obj_t BGl_z62lambda1566z62zzglobaliza7e_ginfoza7(obj_t, obj_t);
	static obj_t BGl_z62lambda1567z62zzglobaliza7e_ginfoza7(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Ginfozd2topzf3zd2setz12z13zzglobaliza7e_ginfoza7
		(BgL_sfunz00_bglt, bool_t);
	BGL_IMPORT obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	static BgL_sfunz00_bglt
		BGl_z62sfunzf2Ginfozd2nilz42zzglobaliza7e_ginfoza7(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31826ze3ze5zzglobaliza7e_ginfoza7(obj_t);
	BGL_EXPORTED_DECL BgL_localz00_bglt
		BGl_makezd2localzf2Ginfoz20zzglobaliza7e_ginfoza7(obj_t, obj_t,
		BgL_typez00_bglt, BgL_valuez00_bglt, obj_t, obj_t, obj_t, long, long,
		bool_t, long, bool_t, bool_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzf2Ginfozd2importzd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_globalz00_bglt, obj_t);
	static obj_t BGl_z62globalzf2Ginfozd2importz42zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	static obj_t
		BGl_z62sexitzf2Ginfozd2Gzf3zd2setz12z71zzglobaliza7e_ginfoza7(obj_t, obj_t,
		obj_t);
	static BgL_sexitz00_bglt BGl_z62lambda1903z62zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	static BgL_sexitz00_bglt BGl_z62lambda1906z62zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	static obj_t BGl_z62lambda1583z62zzglobaliza7e_ginfoza7(obj_t, obj_t);
	static obj_t BGl_z62lambda1584z62zzglobaliza7e_ginfoza7(obj_t, obj_t, obj_t);
	static obj_t BGl_z62localzf2Ginfozd2userzf3zb1zzglobaliza7e_ginfoza7(obj_t,
		obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t
		BGl_z62globalzf2Ginfozd2fastzd2alphaz90zzglobaliza7e_ginfoza7(obj_t, obj_t);
	static obj_t BGl_z62lambda1914z62zzglobaliza7e_ginfoza7(obj_t, obj_t);
	static obj_t BGl_z62lambda1915z62zzglobaliza7e_ginfoza7(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1594z62zzglobaliza7e_ginfoza7(obj_t, obj_t);
	static obj_t BGl_z62lambda1595z62zzglobaliza7e_ginfoza7(obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62sfunzf2Ginfozd2strengthzd2setz12z82zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62localzf2Ginfozd2fastzd2alphazd2setz12z50zzglobaliza7e_ginfoza7(obj_t,
		obj_t, obj_t);
	static obj_t __cnst[36];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2cfromza2zd2setz12zd2envz90zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72232za7,
		BGl_z62sfunzf2Ginfozd2cfromza2zd2setz12z20zzglobaliza7e_ginfoza7, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2Ginfozd2userzf3zd2setz12zd2envzc1zzglobaliza7e_ginfoza7,
		BgL_bgl_za762localza7f2ginfo2233z00,
		BGl_z62localzf2Ginfozd2userzf3zd2setz12z71zzglobaliza7e_ginfoza7, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_svarzf2Ginfozd2freezd2markzd2envz20zzglobaliza7e_ginfoza7,
		BgL_bgl_za762svarza7f2ginfoza72234za7,
		BGl_z62svarzf2Ginfozd2freezd2markz90zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2Ginfozd2occurrencezd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762localza7f2ginfo2235z00,
		BGl_z62localzf2Ginfozd2occurrencez42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2argszd2namezd2envz20zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72236za7,
		BGl_z62sfunzf2Ginfozd2argszd2namez90zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2Ginfozd2escapezf3zd2setz12zd2envzc1zzglobaliza7e_ginfoza7,
		BgL_bgl_za762globalza7f2ginf2237z00,
		BGl_z62globalzf2Ginfozd2escapezf3zd2setz12z71zzglobaliza7e_ginfoza7, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2ownerzd2setz12zd2envz32zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72238za7,
		BGl_z62sfunzf2Ginfozd2ownerzd2setz12z82zzglobaliza7e_ginfoza7, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2integratedzd2setz12zd2envz32zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72239za7,
		BGl_z62sfunzf2Ginfozd2integratedzd2setz12z82zzglobaliza7e_ginfoza7, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2Ginfozd2removablezd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762localza7f2ginfo2240z00,
		BGl_z62localzf2Ginfozd2removablez42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2Ginfozd2accesszd2setz12zd2envz32zzglobaliza7e_ginfoza7,
		BgL_bgl_za762localza7f2ginfo2241z00,
		BGl_z62localzf2Ginfozd2accesszd2setz12z82zzglobaliza7e_ginfoza7, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2Ginfozd2globaliza7edzf3zd2envza6zzglobaliza7e_ginfoza7,
		BgL_bgl_za762localza7f2ginfo2242z00,
		BGl_z62localzf2Ginfozd2globaliza7edzf3z16zzglobaliza7e_ginfoza7, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2Ginfozd2aliaszd2setz12zd2envz32zzglobaliza7e_ginfoza7,
		BgL_bgl_za762globalza7f2ginf2243z00,
		BGl_z62globalzf2Ginfozd2aliaszd2setz12z82zzglobaliza7e_ginfoza7, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_svarzf2Ginfozd2kapturedzf3zd2setz12zd2envzc1zzglobaliza7e_ginfoza7,
		BgL_bgl_za762svarza7f2ginfoza72244za7,
		BGl_z62svarzf2Ginfozd2kapturedzf3zd2setz12z71zzglobaliza7e_ginfoza7, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_svarzf2Ginfozd2stackablezd2setz12zd2envz32zzglobaliza7e_ginfoza7,
		BgL_bgl_za762svarza7f2ginfoza72245za7,
		BGl_z62svarzf2Ginfozd2stackablezd2setz12z82zzglobaliza7e_ginfoza7, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sexitzf2Ginfozd2nilzd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sexitza7f2ginfo2246z00,
		BGl_z62sexitzf2Ginfozd2nilz42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2classzd2setz12zd2envz32zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72247za7,
		BGl_z62sfunzf2Ginfozd2classzd2setz12z82zzglobaliza7e_ginfoza7, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2Ginfozd2fastzd2alphazd2setz12zd2envze0zzglobaliza7e_ginfoza7,
		BgL_bgl_za762localza7f2ginfo2248z00,
		BGl_z62localzf2Ginfozd2fastzd2alphazd2setz12z50zzglobaliza7e_ginfoza7, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2Ginfozd2occurrencewzd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762localza7f2ginfo2249z00,
		BGl_z62localzf2Ginfozd2occurrencewz42zzglobaliza7e_ginfoza7, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2newzd2bodyzd2envz20zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72250za7,
		BGl_z62sfunzf2Ginfozd2newzd2bodyz90zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2Ginfozd2namezd2setz12zd2envz32zzglobaliza7e_ginfoza7,
		BgL_bgl_za762localza7f2ginfo2251z00,
		BGl_z62localzf2Ginfozd2namezd2setz12z82zzglobaliza7e_ginfoza7, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2classzd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72252za7,
		BGl_z62sfunzf2Ginfozd2classz42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2cfromza2zd2envz50zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72253za7,
		BGl_z62sfunzf2Ginfozd2cfromza2ze0zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sexitzf2Ginfozd2freezd2markzd2envz20zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sexitza7f2ginfo2254z00,
		BGl_z62sexitzf2Ginfozd2freezd2markz90zzglobaliza7e_ginfoza7, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2Ginfozd2namezd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762globalza7f2ginf2255z00,
		BGl_z62globalzf2Ginfozd2namez42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2predicatezd2ofzd2envz20zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72256za7,
		BGl_z62sfunzf2Ginfozd2predicatezd2ofz90zzglobaliza7e_ginfoza7, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2Ginfozd2escapezf3zd2setz12zd2envzc1zzglobaliza7e_ginfoza7,
		BgL_bgl_za762localza7f2ginfo2257z00,
		BGl_z62localzf2Ginfozd2escapezf3zd2setz12z71zzglobaliza7e_ginfoza7, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2keyszd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72258za7,
		BGl_z62sfunzf2Ginfozd2keysz42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2pluggedzd2inzd2envz20zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72259za7,
		BGl_z62sfunzf2Ginfozd2pluggedzd2inz90zzglobaliza7e_ginfoza7, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2stackzd2allocatorzd2envz20zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72260za7,
		BGl_z62sfunzf2Ginfozd2stackzd2allocatorz90zzglobaliza7e_ginfoza7, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sexitzf2Ginfozd2Gzf3zd2setz12zd2envzc1zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sexitza7f2ginfo2261z00,
		BGl_z62sexitzf2Ginfozd2Gzf3zd2setz12z71zzglobaliza7e_ginfoza7, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2kapturedzd2setz12zd2envz32zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72262za7,
		BGl_z62sfunzf2Ginfozd2kapturedzd2setz12z82zzglobaliza7e_ginfoza7, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2Ginfozd2typezd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762localza7f2ginfo2263z00,
		BGl_z62localzf2Ginfozd2typez42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2Ginfozd2globalzd2closurezd2setz12zd2envze0zzglobaliza7e_ginfoza7,
		BgL_bgl_za762globalza7f2ginf2264z00,
		BGl_z62globalzf2Ginfozd2globalzd2closurezd2setz12z50zzglobaliza7e_ginfoza7,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2bmarkzd2setz12zd2envz32zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72265za7,
		BGl_z62sfunzf2Ginfozd2bmarkzd2setz12z82zzglobaliza7e_ginfoza7, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2effectzd2setz12zd2envz32zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72266za7,
		BGl_z62sfunzf2Ginfozd2effectzd2setz12z82zzglobaliza7e_ginfoza7, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2efunctionszd2setz12zd2envz32zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72267za7,
		BGl_z62sfunzf2Ginfozd2efunctionszd2setz12z82zzglobaliza7e_ginfoza7, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2thezd2closurezd2globalzd2setz12zd2envz32zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72268za7,
		BGl_z62sfunzf2Ginfozd2thezd2closurezd2globalzd2setz12z82zzglobaliza7e_ginfoza7,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2ctozd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72269za7,
		BGl_z62sfunzf2Ginfozd2ctoz42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2Ginfozd2typezd2setz12zd2envz32zzglobaliza7e_ginfoza7,
		BgL_bgl_za762globalza7f2ginf2270z00,
		BGl_z62globalzf2Ginfozd2typezd2setz12z82zzglobaliza7e_ginfoza7, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2bodyzd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72271za7,
		BGl_z62sfunzf2Ginfozd2bodyz42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2boundzd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72272za7,
		BGl_z62sfunzf2Ginfozd2boundz42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2Ginfozd2aliaszd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762globalza7f2ginf2273z00,
		BGl_z62globalzf2Ginfozd2aliasz42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2Ginfozd2nilzd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762localza7f2ginfo2274z00,
		BGl_z62localzf2Ginfozd2nilz42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2strengthzd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72275za7,
		BGl_z62sfunzf2Ginfozd2strengthz42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2predicatezd2ofzd2setz12zd2envze0zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72276za7,
		BGl_z62sfunzf2Ginfozd2predicatezd2ofzd2setz12z50zzglobaliza7e_ginfoza7, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2Ginfozd2initzd2setz12zd2envz32zzglobaliza7e_ginfoza7,
		BgL_bgl_za762globalza7f2ginf2277z00,
		BGl_z62globalzf2Ginfozd2initzd2setz12z82zzglobaliza7e_ginfoza7, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2107z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762za7c3za704anonymo2278za7,
		BGl_z62zc3z04anonymousza31555ze3ze5zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2108z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1554za7622279z00,
		BGl_z62lambda1554z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2109z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1553za7622280z00,
		BGl_z62lambda1553z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2dssslzd2keywordszd2setz12zd2envze0zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72281za7,
		BGl_z62sfunzf2Ginfozd2dssslzd2keywordszd2setz12z50zzglobaliza7e_ginfoza7,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2110z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762za7c3za704anonymo2282za7,
		BGl_z62zc3z04anonymousza31568ze3ze5zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2111z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1567za7622283z00,
		BGl_z62lambda1567z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2112z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1566za7622284z00,
		BGl_z62lambda1566z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2113z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762za7c3za704anonymo2285za7,
		BGl_z62zc3z04anonymousza31585ze3ze5zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2114z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1584za7622286z00,
		BGl_z62lambda1584z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2115z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1583za7622287z00,
		BGl_z62lambda1583z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2thezd2closurezd2envz20zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72288za7,
		BGl_z62sfunzf2Ginfozd2thezd2closurez90zzglobaliza7e_ginfoza7, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2116z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762za7c3za704anonymo2289za7,
		BGl_z62zc3z04anonymousza31596ze3ze5zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2117z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1595za7622290z00,
		BGl_z62lambda1595z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2118z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1594za7622291z00,
		BGl_z62lambda1594z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2Ginfozd2valuezd2setz12zd2envz32zzglobaliza7e_ginfoza7,
		BgL_bgl_za762globalza7f2ginf2292z00,
		BGl_z62globalzf2Ginfozd2valuezd2setz12z82zzglobaliza7e_ginfoza7, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2119z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762za7c3za704anonymo2293za7,
		BGl_z62zc3z04anonymousza31608ze3ze5zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2120z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1607za7622294z00,
		BGl_z62lambda1607z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2121z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1606za7622295z00,
		BGl_z62lambda1606z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2122z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762za7c3za704anonymo2296za7,
		BGl_z62zc3z04anonymousza31627ze3ze5zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2123z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1626za7622297z00,
		BGl_z62lambda1626z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2124z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1625za7622298z00,
		BGl_z62lambda1625z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2125z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762za7c3za704anonymo2299za7,
		BGl_z62zc3z04anonymousza31643ze3ze5zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2126z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1642za7622300z00,
		BGl_z62lambda1642z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2127z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1641za7622301z00,
		BGl_z62lambda1641z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2128z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762za7c3za704anonymo2302za7,
		BGl_z62zc3z04anonymousza31666ze3ze5zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2129z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1665za7622303z00,
		BGl_z62lambda1665z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2130z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1664za7622304z00,
		BGl_z62lambda1664z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2131z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762za7c3za704anonymo2305za7,
		BGl_z62zc3z04anonymousza31687ze3ze5zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2132z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1686za7622306z00,
		BGl_z62lambda1686z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2133z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1685za7622307z00,
		BGl_z62lambda1685z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2134z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762za7c3za704anonymo2308za7,
		BGl_z62zc3z04anonymousza31699ze3ze5zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2135z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1698za7622309z00,
		BGl_z62lambda1698z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2136z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1697za7622310z00,
		BGl_z62lambda1697z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2137z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762za7c3za704anonymo2311za7,
		BGl_z62zc3z04anonymousza31714ze3ze5zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2138z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1713za7622312z00,
		BGl_z62lambda1713z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2139z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1712za7622313z00,
		BGl_z62lambda1712z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2226z00zzglobaliza7e_ginfoza7,
		BgL_bgl_string2226za700za7za7g2314za7, "", 0);
	      DEFINE_STRING(BGl_string2227z00zzglobaliza7e_ginfoza7,
		BgL_bgl_string2227za700za7za7g2315za7, "globalize_ginfo", 15);
	      DEFINE_STRING(BGl_string2228z00zzglobaliza7e_ginfoza7,
		BgL_bgl_string2228za700za7za7g2316za7,
		"_ global/Ginfo global-closure local/Ginfo globalized? escape? sexit/Ginfo svar/Ginfo stackable celled? kaptured? globalize_ginfo sfun/Ginfo bound free umark bmark new-body kaptured the-global free-mark long mark plugged-in integrated owner imark integrator efunctions cto* cto cfrom* obj cfrom bool G? ",
		302);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2optionalszd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72317za7,
		BGl_z62sfunzf2Ginfozd2optionalsz42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2140z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762za7c3za704anonymo2318za7,
		BGl_z62zc3z04anonymousza31730ze3ze5zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2141z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1729za7622319z00,
		BGl_z62lambda1729z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2142z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1728za7622320z00,
		BGl_z62lambda1728z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2143z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762za7c3za704anonymo2321za7,
		BGl_z62zc3z04anonymousza31741ze3ze5zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2144z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1740za7622322z00,
		BGl_z62lambda1740z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2145z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1739za7622323z00,
		BGl_z62lambda1739z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2146z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762za7c3za704anonymo2324za7,
		BGl_z62zc3z04anonymousza31748ze3ze5zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2147z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1747za7622325z00,
		BGl_z62lambda1747z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2148z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1746za7622326z00,
		BGl_z62lambda1746z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2149z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762za7c3za704anonymo2327za7,
		BGl_z62zc3z04anonymousza31760ze3ze5zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2150z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1759za7622328z00,
		BGl_z62lambda1759z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2151z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1758za7622329z00,
		BGl_z62lambda1758z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2152z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762za7c3za704anonymo2330za7,
		BGl_z62zc3z04anonymousza31778ze3ze5zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2153z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1777za7622331z00,
		BGl_z62lambda1777z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2154z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1776za7622332z00,
		BGl_z62lambda1776z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2155z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762za7c3za704anonymo2333za7,
		BGl_z62zc3z04anonymousza31793ze3ze5zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2156z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1792za7622334z00,
		BGl_z62lambda1792z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2157z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1791za7622335z00,
		BGl_z62lambda1791z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2158z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762za7c3za704anonymo2336za7,
		BGl_z62zc3z04anonymousza31811ze3ze5zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2boundzd2setz12zd2envz32zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72337za7,
		BGl_z62sfunzf2Ginfozd2boundzd2setz12z82zzglobaliza7e_ginfoza7, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2159z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1810za7622338z00,
		BGl_z62lambda1810z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sexitzf2Ginfozd2markzd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sexitza7f2ginfo2339z00,
		BGl_z62sexitzf2Ginfozd2markz42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2Ginfozd2escapezf3zd2envz01zzglobaliza7e_ginfoza7,
		BgL_bgl_za762localza7f2ginfo2340z00,
		BGl_z62localzf2Ginfozd2escapezf3zb1zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_svarzf2Ginfozd2celledzf3zd2setz12zd2envzc1zzglobaliza7e_ginfoza7,
		BgL_bgl_za762svarza7f2ginfoza72341za7,
		BGl_z62svarzf2Ginfozd2celledzf3zd2setz12z71zzglobaliza7e_ginfoza7, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2160z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1809za7622342z00,
		BGl_z62lambda1809z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2161z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762za7c3za704anonymo2343za7,
		BGl_z62zc3z04anonymousza31826ze3ze5zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2162z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1825za7622344z00,
		BGl_z62lambda1825z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2163z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1824za7622345z00,
		BGl_z62lambda1824z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2164z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762za7c3za704anonymo2346za7,
		BGl_z62zc3z04anonymousza31833ze3ze5zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2165z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1832za7622347z00,
		BGl_z62lambda1832z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2166z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1831za7622348z00,
		BGl_z62lambda1831z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2167z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1499za7622349z00,
		BGl_z62lambda1499z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2168z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762za7c3za704anonymo2350za7,
		BGl_z62zc3z04anonymousza31498ze3ze5zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2169z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1496za7622351z00,
		BGl_z62lambda1496z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2Ginfozd2libraryzd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762globalza7f2ginf2352z00,
		BGl_z62globalzf2Ginfozd2libraryz42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2170z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1490za7622353z00,
		BGl_z62lambda1490z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 41);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2171z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762za7c3za704anonymo2354za7,
		BGl_z62zc3z04anonymousza31861ze3ze5zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2172z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1860za7622355z00,
		BGl_z62lambda1860z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2173z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1859za7622356z00,
		BGl_z62lambda1859z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2174z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762za7c3za704anonymo2357za7,
		BGl_z62zc3z04anonymousza31869ze3ze5zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2175z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1868za7622358z00,
		BGl_z62lambda1868z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2176z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1867za7622359z00,
		BGl_z62lambda1867z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2177z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762za7c3za704anonymo2360za7,
		BGl_z62zc3z04anonymousza31876ze3ze5zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2178z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1875za7622361z00,
		BGl_z62lambda1875z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2179z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1874za7622362z00,
		BGl_z62lambda1874z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2Ginfozd2idzd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762localza7f2ginfo2363z00,
		BGl_z62localzf2Ginfozd2idz42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2Ginfozd2evaluablezf3zd2setz12zd2envzc1zzglobaliza7e_ginfoza7,
		BgL_bgl_za762globalza7f2ginf2364z00,
		BGl_z62globalzf2Ginfozd2evaluablezf3zd2setz12z71zzglobaliza7e_ginfoza7, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2thezd2closurezd2setz12zd2envze0zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72365za7,
		BGl_z62sfunzf2Ginfozd2thezd2closurezd2setz12z50zzglobaliza7e_ginfoza7, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2180z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762za7c3za704anonymo2366za7,
		BGl_z62zc3z04anonymousza31884ze3ze5zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2181z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1883za7622367z00,
		BGl_z62lambda1883z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2182z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1882za7622368z00,
		BGl_z62lambda1882z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2183z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762za7c3za704anonymo2369za7,
		BGl_z62zc3z04anonymousza31891ze3ze5zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2184z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1890za7622370z00,
		BGl_z62lambda1890z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2185z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1889za7622371z00,
		BGl_z62lambda1889z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2186z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1850za7622372z00,
		BGl_z62lambda1850z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2187z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762za7c3za704anonymo2373za7,
		BGl_z62zc3z04anonymousza31849ze3ze5zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2188z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1847za7622374z00,
		BGl_z62lambda1847z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2189z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1843za7622375z00,
		BGl_z62lambda1843z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2loczd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72376za7,
		BGl_z62sfunzf2Ginfozd2locz42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2integratorzd2setz12zd2envz32zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72377za7,
		BGl_z62sfunzf2Ginfozd2integratorzd2setz12z82zzglobaliza7e_ginfoza7, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2Ginfozd2libraryzd2setz12zd2envz32zzglobaliza7e_ginfoza7,
		BgL_bgl_za762globalza7f2ginf2378z00,
		BGl_z62globalzf2Ginfozd2libraryzd2setz12z82zzglobaliza7e_ginfoza7, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2190z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762za7c3za704anonymo2379za7,
		BGl_z62zc3z04anonymousza31916ze3ze5zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2191z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1915za7622380z00,
		BGl_z62lambda1915z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2192z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1914za7622381z00,
		BGl_z62lambda1914z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2193z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762za7c3za704anonymo2382za7,
		BGl_z62zc3z04anonymousza31923ze3ze5zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2194z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1922za7622383z00,
		BGl_z62lambda1922z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2195z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1921za7622384z00,
		BGl_z62lambda1921z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2196z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762za7c3za704anonymo2385za7,
		BGl_z62zc3z04anonymousza31930ze3ze5zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2197z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1929za7622386z00,
		BGl_z62lambda1929z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2198z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1928za7622387z00,
		BGl_z62lambda1928z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2199z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762za7c3za704anonymo2388za7,
		BGl_z62zc3z04anonymousza31937ze3ze5zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2ctozd2setz12zd2envz32zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72389za7,
		BGl_z62sfunzf2Ginfozd2ctozd2setz12z82zzglobaliza7e_ginfoza7, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2dssslzd2keywordszd2envz20zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72390za7,
		BGl_z62sfunzf2Ginfozd2dssslzd2keywordsz90zzglobaliza7e_ginfoza7, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2sfunzf2Ginfozd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762makeza7d2sfunza7f2391za7,
		BGl_z62makezd2sfunzf2Ginfoz42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 41);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2markzd2setz12zd2envz32zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72392za7,
		BGl_z62sfunzf2Ginfozd2markzd2setz12z82zzglobaliza7e_ginfoza7, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2topzf3zd2envz01zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72393za7,
		BGl_z62sfunzf2Ginfozd2topzf3zb1zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2loczd2setz12zd2envz32zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72394za7,
		BGl_z62sfunzf2Ginfozd2loczd2setz12z82zzglobaliza7e_ginfoza7, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2Ginfozf3zd2envzd3zzglobaliza7e_ginfoza7,
		BgL_bgl_za762localza7f2ginfo2395z00,
		BGl_z62localzf2Ginfozf3z63zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2argszd2setz12zd2envz32zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72396za7,
		BGl_z62sfunzf2Ginfozd2argszd2setz12z82zzglobaliza7e_ginfoza7, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2argszd2noescapezd2envz20zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72397za7,
		BGl_z62sfunzf2Ginfozd2argszd2noescapez90zzglobaliza7e_ginfoza7, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2Ginfozd2occurrencezd2setz12zd2envz32zzglobaliza7e_ginfoza7,
		BgL_bgl_za762globalza7f2ginf2398z00,
		BGl_z62globalzf2Ginfozd2occurrencezd2setz12z82zzglobaliza7e_ginfoza7, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2Ginfozd2importzd2setz12zd2envz32zzglobaliza7e_ginfoza7,
		BgL_bgl_za762globalza7f2ginf2399z00,
		BGl_z62globalzf2Ginfozd2importzd2setz12z82zzglobaliza7e_ginfoza7, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sexitzf2Ginfozd2Gzf3zd2envz01zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sexitza7f2ginfo2400z00,
		BGl_z62sexitzf2Ginfozd2Gzf3zb1zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2imarkzd2setz12zd2envz32zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72401za7,
		BGl_z62sfunzf2Ginfozd2imarkzd2setz12z82zzglobaliza7e_ginfoza7, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2efunctionszd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72402za7,
		BGl_z62sfunzf2Ginfozd2efunctionsz42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_svarzf2Ginfozd2loczd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762svarza7f2ginfoza72403za7,
		BGl_z62svarzf2Ginfozd2locz42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2thezd2globalzd2envz20zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72404za7,
		BGl_z62sfunzf2Ginfozd2thezd2globalz90zzglobaliza7e_ginfoza7, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sexitzf2Ginfozd2freezd2markzd2setz12zd2envze0zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sexitza7f2ginfo2405z00,
		BGl_z62sexitzf2Ginfozd2freezd2markzd2setz12z50zzglobaliza7e_ginfoza7, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sexitzf2Ginfozf3zd2envzd3zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sexitza7f2ginfo2406z00,
		BGl_z62sexitzf2Ginfozf3z63zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2svarzf2Ginfozd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762makeza7d2svarza7f2407za7,
		BGl_z62makezd2svarzf2Ginfoz42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_svarzf2Ginfozd2markzd2setz12zd2envz32zzglobaliza7e_ginfoza7,
		BgL_bgl_za762svarza7f2ginfoza72408za7,
		BGl_z62svarzf2Ginfozd2markzd2setz12z82zzglobaliza7e_ginfoza7, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2topzf3zd2setz12zd2envzc1zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72409za7,
		BGl_z62sfunzf2Ginfozd2topzf3zd2setz12z71zzglobaliza7e_ginfoza7, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2sidezd2effectzd2setz12zd2envze0zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72410za7,
		BGl_z62sfunzf2Ginfozd2sidezd2effectzd2setz12z50zzglobaliza7e_ginfoza7, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sexitzf2Ginfozd2handlerzd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sexitza7f2ginfo2411z00,
		BGl_z62sexitzf2Ginfozd2handlerz42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2Ginfozd2evalzf3zd2envz01zzglobaliza7e_ginfoza7,
		BgL_bgl_za762globalza7f2ginf2412z00,
		BGl_z62globalzf2Ginfozd2evalzf3zb1zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2Ginfozd2valuezd2setz12zd2envz32zzglobaliza7e_ginfoza7,
		BgL_bgl_za762localza7f2ginfo2413z00,
		BGl_z62localzf2Ginfozd2valuezd2setz12z82zzglobaliza7e_ginfoza7, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_svarzf2Ginfozd2loczd2setz12zd2envz32zzglobaliza7e_ginfoza7,
		BgL_bgl_za762svarza7f2ginfoza72414za7,
		BGl_z62svarzf2Ginfozd2loczd2setz12z82zzglobaliza7e_ginfoza7, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2nilzd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72415za7,
		BGl_z62sfunzf2Ginfozd2nilz42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2ctoza2zd2envz50zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72416za7,
		BGl_z62sfunzf2Ginfozd2ctoza2ze0zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2Ginfozd2nilzd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762globalza7f2ginf2417z00,
		BGl_z62globalzf2Ginfozd2nilz42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2stackablezd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72418za7,
		BGl_z62sfunzf2Ginfozd2stackablez42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2cfromzd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72419za7,
		BGl_z62sfunzf2Ginfozd2cfromz42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2integratorzd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72420za7,
		BGl_z62sfunzf2Ginfozd2integratorz42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2ownerzd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72421za7,
		BGl_z62sfunzf2Ginfozd2ownerz42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2Gzf3zd2setz12zd2envzc1zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72422za7,
		BGl_z62sfunzf2Ginfozd2Gzf3zd2setz12z71zzglobaliza7e_ginfoza7, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sexitzf2Ginfozd2markzd2setz12zd2envz32zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sexitza7f2ginfo2423z00,
		BGl_z62sexitzf2Ginfozd2markzd2setz12z82zzglobaliza7e_ginfoza7, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2Ginfozd2accesszd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762globalza7f2ginf2424z00,
		BGl_z62globalzf2Ginfozd2accessz42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2200z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1936za7622425z00,
		BGl_z62lambda1936z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2201z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1935za7622426z00,
		BGl_z62lambda1935z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2202z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1906za7622427z00,
		BGl_z62lambda1906z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2203z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762za7c3za704anonymo2428za7,
		BGl_z62zc3z04anonymousza31905ze3ze5zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2204z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1903za7622429z00,
		BGl_z62lambda1903z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2205z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1899za7622430z00,
		BGl_z62lambda1899z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 6);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2206z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762za7c3za704anonymo2431za7,
		BGl_z62zc3z04anonymousza31960ze3ze5zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2207z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1959za7622432z00,
		BGl_z62lambda1959z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2208z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1958za7622433z00,
		BGl_z62lambda1958z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2209z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762za7c3za704anonymo2434za7,
		BGl_z62zc3z04anonymousza31967ze3ze5zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2Ginfozd2srczd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762globalza7f2ginf2435z00,
		BGl_z62globalzf2Ginfozd2srcz42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2210z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1966za7622436z00,
		BGl_z62lambda1966z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2211z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1965za7622437z00,
		BGl_z62lambda1965z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2212z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1950za7622438z00,
		BGl_z62lambda1950z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2213z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762za7c3za704anonymo2439za7,
		BGl_z62zc3z04anonymousza31949ze3ze5zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2214z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1947za7622440z00,
		BGl_z62lambda1947z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2215z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1944za7622441z00,
		BGl_z62lambda1944z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 13);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2216z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762za7c3za704anonymo2442za7,
		BGl_z62zc3z04anonymousza31991ze3ze5zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2217z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1990za7622443z00,
		BGl_z62lambda1990z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2218z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1989za7622444z00,
		BGl_z62lambda1989z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2219z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762za7c3za704anonymo2445za7,
		BGl_z62zc3z04anonymousza31999ze3ze5zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2Ginfozd2srczd2setz12zd2envz32zzglobaliza7e_ginfoza7,
		BgL_bgl_za762globalza7f2ginf2446z00,
		BGl_z62globalzf2Ginfozd2srczd2setz12z82zzglobaliza7e_ginfoza7, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2failsafezd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72447za7,
		BGl_z62sfunzf2Ginfozd2failsafez42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2Ginfozd2jvmzd2typezd2namezd2setz12zd2envz32zzglobaliza7e_ginfoza7,
		BgL_bgl_za762globalza7f2ginf2448z00,
		BGl_z62globalzf2Ginfozd2jvmzd2typezd2namezd2setz12z82zzglobaliza7e_ginfoza7,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2markzd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72449za7,
		BGl_z62sfunzf2Ginfozd2markz42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2220z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1998za7622450z00,
		BGl_z62lambda1998z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2221z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1997za7622451z00,
		BGl_z62lambda1997z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2222z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1981za7622452z00,
		BGl_z62lambda1981z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2223z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762za7c3za704anonymo2453za7,
		BGl_z62zc3z04anonymousza31980ze3ze5zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2224z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1977za7622454z00,
		BGl_z62lambda1977z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2225z00zzglobaliza7e_ginfoza7,
		BgL_bgl_za762lambda1974za7622455z00,
		BGl_z62lambda1974z62zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 22);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_svarzf2Ginfozd2nilzd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762svarza7f2ginfoza72456za7,
		BGl_z62svarzf2Ginfozd2nilz42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2bmarkzd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72457za7,
		BGl_z62sfunzf2Ginfozd2bmarkz42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2effectzd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72458za7,
		BGl_z62sfunzf2Ginfozd2effectz42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2Ginfozd2removablezd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762globalza7f2ginf2459z00,
		BGl_z62globalzf2Ginfozd2removablez42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2argszd2noescapezd2setz12zd2envze0zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72460za7,
		BGl_z62sfunzf2Ginfozd2argszd2noescapezd2setz12z50zzglobaliza7e_ginfoza7, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_svarzf2Ginfozd2stackablezd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762svarza7f2ginfoza72461za7,
		BGl_z62svarzf2Ginfozd2stackablez42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2freezd2markzd2setz12zd2envze0zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72462za7,
		BGl_z62sfunzf2Ginfozd2freezd2markzd2setz12z50zzglobaliza7e_ginfoza7, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2Ginfozd2occurrencezd2setz12zd2envz32zzglobaliza7e_ginfoza7,
		BgL_bgl_za762localza7f2ginfo2463z00,
		BGl_z62localzf2Ginfozd2occurrencezd2setz12z82zzglobaliza7e_ginfoza7, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2Ginfozd2namezd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762localza7f2ginfo2464z00,
		BGl_z62localzf2Ginfozd2namez42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2Ginfozd2keyzd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762localza7f2ginfo2465z00,
		BGl_z62localzf2Ginfozd2keyz42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2globalzf2Ginfozd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762makeza7d2global2466z00,
		BGl_z62makezd2globalzf2Ginfoz42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 22);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2Ginfozd2namezd2setz12zd2envz32zzglobaliza7e_ginfoza7,
		BgL_bgl_za762globalza7f2ginf2467z00,
		BGl_z62globalzf2Ginfozd2namezd2setz12z82zzglobaliza7e_ginfoza7, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2sidezd2effectzd2envz20zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72468za7,
		BGl_z62sfunzf2Ginfozd2sidezd2effectz90zzglobaliza7e_ginfoza7, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2propertyzd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72469za7,
		BGl_z62sfunzf2Ginfozd2propertyz42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_svarzf2Ginfozd2celledzf3zd2envz01zzglobaliza7e_ginfoza7,
		BgL_bgl_za762svarza7f2ginfoza72470za7,
		BGl_z62svarzf2Ginfozd2celledzf3zb1zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2Ginfozd2valuezd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762localza7f2ginfo2471z00,
		BGl_z62localzf2Ginfozd2valuez42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2umarkzd2setz12zd2envz32zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72472za7,
		BGl_z62sfunzf2Ginfozd2umarkzd2setz12z82zzglobaliza7e_ginfoza7, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_svarzf2Ginfozd2markzd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762svarza7f2ginfoza72473za7,
		BGl_z62svarzf2Ginfozd2markz42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2Ginfozd2importzd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762globalza7f2ginf2474z00,
		BGl_z62globalzf2Ginfozd2importz42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2Ginfozd2userzf3zd2envz01zzglobaliza7e_ginfoza7,
		BgL_bgl_za762localza7f2ginfo2475z00,
		BGl_z62localzf2Ginfozd2userzf3zb1zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2Ginfozd2fastzd2alphazd2envz20zzglobaliza7e_ginfoza7,
		BgL_bgl_za762globalza7f2ginf2476z00,
		BGl_z62globalzf2Ginfozd2fastzd2alphaz90zzglobaliza7e_ginfoza7, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2Gzf3zd2envz01zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72477za7,
		BGl_z62sfunzf2Ginfozd2Gzf3zb1zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2integratedzd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72478za7,
		BGl_z62sfunzf2Ginfozd2integratedz42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sexitzf2Ginfozd2handlerzd2setz12zd2envz32zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sexitza7f2ginfo2479z00,
		BGl_z62sexitzf2Ginfozd2handlerzd2setz12z82zzglobaliza7e_ginfoza7, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2newzd2bodyzd2setz12zd2envze0zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72480za7,
		BGl_z62sfunzf2Ginfozd2newzd2bodyzd2setz12z50zzglobaliza7e_ginfoza7, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2Ginfozd2accesszd2setz12zd2envz32zzglobaliza7e_ginfoza7,
		BgL_bgl_za762globalza7f2ginf2481z00,
		BGl_z62globalzf2Ginfozd2accesszd2setz12z82zzglobaliza7e_ginfoza7, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_svarzf2Ginfozd2freezd2markzd2setz12zd2envze0zzglobaliza7e_ginfoza7,
		BgL_bgl_za762svarza7f2ginfoza72482za7,
		BGl_z62svarzf2Ginfozd2freezd2markzd2setz12z50zzglobaliza7e_ginfoza7, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2Ginfozd2evalzf3zd2setz12zd2envzc1zzglobaliza7e_ginfoza7,
		BgL_bgl_za762globalza7f2ginf2483z00,
		BGl_z62globalzf2Ginfozd2evalzf3zd2setz12z71zzglobaliza7e_ginfoza7, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2propertyzd2setz12zd2envz32zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72484za7,
		BGl_z62sfunzf2Ginfozd2propertyzd2setz12z82zzglobaliza7e_ginfoza7, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozf3zd2envzd3zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72485za7,
		BGl_z62sfunzf2Ginfozf3z63zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2Ginfozd2occurrencewzd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762globalza7f2ginf2486z00,
		BGl_z62globalzf2Ginfozd2occurrencewz42zzglobaliza7e_ginfoza7, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2Ginfozd2pragmazd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762globalza7f2ginf2487z00,
		BGl_z62globalzf2Ginfozd2pragmaz42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2strengthzd2setz12zd2envz32zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72488za7,
		BGl_z62sfunzf2Ginfozd2strengthzd2setz12z82zzglobaliza7e_ginfoza7, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2Ginfozd2typezd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762globalza7f2ginf2489z00,
		BGl_z62globalzf2Ginfozd2typez42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2freezd2setz12zd2envz32zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72490za7,
		BGl_z62sfunzf2Ginfozd2freezd2setz12z82zzglobaliza7e_ginfoza7, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2Ginfozf3zd2envzd3zzglobaliza7e_ginfoza7,
		BgL_bgl_za762globalza7f2ginf2491z00,
		BGl_z62globalzf2Ginfozf3z63zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2failsafezd2setz12zd2envz32zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72492za7,
		BGl_z62sfunzf2Ginfozd2failsafezd2setz12z82zzglobaliza7e_ginfoza7, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2Ginfozd2escapezf3zd2envz01zzglobaliza7e_ginfoza7,
		BgL_bgl_za762globalza7f2ginf2493z00,
		BGl_z62globalzf2Ginfozd2escapezf3zb1zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2ctoza2zd2setz12zd2envz90zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72494za7,
		BGl_z62sfunzf2Ginfozd2ctoza2zd2setz12z20zzglobaliza7e_ginfoza7, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2Ginfozd2typezd2setz12zd2envz32zzglobaliza7e_ginfoza7,
		BgL_bgl_za762localza7f2ginfo2495z00,
		BGl_z62localzf2Ginfozd2typezd2setz12z82zzglobaliza7e_ginfoza7, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2Ginfozd2idzd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762globalza7f2ginf2496z00,
		BGl_z62globalzf2Ginfozd2idz42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2argszd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72497za7,
		BGl_z62sfunzf2Ginfozd2argsz42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2umarkzd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72498za7,
		BGl_z62sfunzf2Ginfozd2umarkz42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2freezd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72499za7,
		BGl_z62sfunzf2Ginfozd2freez42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_svarzf2Ginfozd2kapturedzf3zd2envz01zzglobaliza7e_ginfoza7,
		BgL_bgl_za762svarza7f2ginfoza72500za7,
		BGl_z62svarzf2Ginfozd2kapturedzf3zb1zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sexitzf2Ginfozd2detachedzf3zd2setz12zd2envzc1zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sexitza7f2ginfo2501z00,
		BGl_z62sexitzf2Ginfozd2detachedzf3zd2setz12z71zzglobaliza7e_ginfoza7, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2sexitzf2Ginfozd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762makeza7d2sexitza72502za7,
		BGl_z62makezd2sexitzf2Ginfoz42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2Ginfozd2initzd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762globalza7f2ginf2503z00,
		BGl_z62globalzf2Ginfozd2initz42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_svarzf2Ginfozf3zd2envzd3zzglobaliza7e_ginfoza7,
		BgL_bgl_za762svarza7f2ginfoza72504za7,
		BGl_z62svarzf2Ginfozf3z63zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2kapturedzd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72505za7,
		BGl_z62sfunzf2Ginfozd2kapturedz42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2Ginfozd2occurrencewzd2setz12zd2envz32zzglobaliza7e_ginfoza7,
		BgL_bgl_za762localza7f2ginfo2506z00,
		BGl_z62localzf2Ginfozd2occurrencewzd2setz12z82zzglobaliza7e_ginfoza7, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sexitzf2Ginfozd2detachedzf3zd2envz01zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sexitza7f2ginfo2507z00,
		BGl_z62sexitzf2Ginfozd2detachedzf3zb1zzglobaliza7e_ginfoza7, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2Ginfozd2pragmazd2setz12zd2envz32zzglobaliza7e_ginfoza7,
		BgL_bgl_za762globalza7f2ginf2508z00,
		BGl_z62globalzf2Ginfozd2pragmazd2setz12z82zzglobaliza7e_ginfoza7, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sexitzf2Ginfozd2kapturedzf3zd2setz12zd2envzc1zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sexitza7f2ginfo2509z00,
		BGl_z62sexitzf2Ginfozd2kapturedzf3zd2setz12z71zzglobaliza7e_ginfoza7, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2Ginfozd2userzf3zd2setz12zd2envzc1zzglobaliza7e_ginfoza7,
		BgL_bgl_za762globalza7f2ginf2510z00,
		BGl_z62globalzf2Ginfozd2userzf3zd2setz12z71zzglobaliza7e_ginfoza7, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sexitzf2Ginfozd2kapturedzf3zd2envz01zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sexitza7f2ginfo2511z00,
		BGl_z62sexitzf2Ginfozd2kapturedzf3zb1zzglobaliza7e_ginfoza7, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2Ginfozd2occurrencezd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762globalza7f2ginf2512z00,
		BGl_z62globalzf2Ginfozd2occurrencez42zzglobaliza7e_ginfoza7, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2Ginfozd2fastzd2alphazd2envz20zzglobaliza7e_ginfoza7,
		BgL_bgl_za762localza7f2ginfo2513z00,
		BGl_z62localzf2Ginfozd2fastzd2alphaz90zzglobaliza7e_ginfoza7, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2Ginfozd2globaliza7edzf3zd2setz12zd2envz66zzglobaliza7e_ginfoza7,
		BgL_bgl_za762localza7f2ginfo2514z00,
		BGl_z62localzf2Ginfozd2globaliza7edzf3zd2setz12zd6zzglobaliza7e_ginfoza7,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2Ginfozd2fastzd2alphazd2setz12zd2envze0zzglobaliza7e_ginfoza7,
		BgL_bgl_za762globalza7f2ginf2515z00,
		BGl_z62globalzf2Ginfozd2fastzd2alphazd2setz12z50zzglobaliza7e_ginfoza7, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2Ginfozd2removablezd2setz12zd2envz32zzglobaliza7e_ginfoza7,
		BgL_bgl_za762globalza7f2ginf2516z00,
		BGl_z62globalzf2Ginfozd2removablezd2setz12z82zzglobaliza7e_ginfoza7, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2Ginfozd2occurrencewzd2setz12zd2envz32zzglobaliza7e_ginfoza7,
		BgL_bgl_za762globalza7f2ginf2517z00,
		BGl_z62globalzf2Ginfozd2occurrencewzd2setz12z82zzglobaliza7e_ginfoza7, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2Ginfozd2modulezd2setz12zd2envz32zzglobaliza7e_ginfoza7,
		BgL_bgl_za762globalza7f2ginf2518z00,
		BGl_z62globalzf2Ginfozd2modulezd2setz12z82zzglobaliza7e_ginfoza7, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2Ginfozd2removablezd2setz12zd2envz32zzglobaliza7e_ginfoza7,
		BgL_bgl_za762localza7f2ginfo2519z00,
		BGl_z62localzf2Ginfozd2removablezd2setz12z82zzglobaliza7e_ginfoza7, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2Ginfozd2accesszd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762localza7f2ginfo2520z00,
		BGl_z62localzf2Ginfozd2accessz42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2bodyzd2setz12zd2envz32zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72521za7,
		BGl_z62sfunzf2Ginfozd2bodyzd2setz12z82zzglobaliza7e_ginfoza7, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2arityzd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72522za7,
		BGl_z62sfunzf2Ginfozd2arityz42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2stackzd2allocatorzd2setz12zd2envze0zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72523za7,
		BGl_z62sfunzf2Ginfozd2stackzd2allocatorzd2setz12z50zzglobaliza7e_ginfoza7,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2Ginfozd2valuezd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762globalza7f2ginf2524z00,
		BGl_z62globalzf2Ginfozd2valuez42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2Ginfozd2globalzd2closurezd2envz20zzglobaliza7e_ginfoza7,
		BgL_bgl_za762globalza7f2ginf2525z00,
		BGl_z62globalzf2Ginfozd2globalzd2closurez90zzglobaliza7e_ginfoza7, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2freezd2markzd2envz20zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72526za7,
		BGl_z62sfunzf2Ginfozd2freezd2markz90zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2Ginfozd2jvmzd2typezd2namezd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762globalza7f2ginf2527z00,
		BGl_z62globalzf2Ginfozd2jvmzd2typezd2namez42zzglobaliza7e_ginfoza7, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2Ginfozd2modulezd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762globalza7f2ginf2528z00,
		BGl_z62globalzf2Ginfozd2modulez42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2Ginfozd2userzf3zd2envz01zzglobaliza7e_ginfoza7,
		BgL_bgl_za762globalza7f2ginf2529z00,
		BGl_z62globalzf2Ginfozd2userzf3zb1zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2localzf2Ginfozd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762makeza7d2localza72530za7,
		BGl_z62makezd2localzf2Ginfoz42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 13);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2pluggedzd2inzd2setz12zd2envze0zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72531za7,
		BGl_z62sfunzf2Ginfozd2pluggedzd2inzd2setz12z50zzglobaliza7e_ginfoza7, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2thezd2closurezd2globalzd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72532za7,
		BGl_z62sfunzf2Ginfozd2thezd2closurezd2globalz42zzglobaliza7e_ginfoza7, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2Ginfozd2evaluablezf3zd2envz01zzglobaliza7e_ginfoza7,
		BgL_bgl_za762globalza7f2ginf2533z00,
		BGl_z62globalzf2Ginfozd2evaluablezf3zb1zzglobaliza7e_ginfoza7, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2stackablezd2setz12zd2envz32zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72534za7,
		BGl_z62sfunzf2Ginfozd2stackablezd2setz12z82zzglobaliza7e_ginfoza7, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2imarkzd2envzf2zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72535za7,
		BGl_z62sfunzf2Ginfozd2imarkz42zzglobaliza7e_ginfoza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2thezd2globalzd2setz12zd2envze0zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72536za7,
		BGl_z62sfunzf2Ginfozd2thezd2globalzd2setz12z50zzglobaliza7e_ginfoza7, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Ginfozd2cfromzd2setz12zd2envz32zzglobaliza7e_ginfoza7,
		BgL_bgl_za762sfunza7f2ginfoza72537za7,
		BGl_z62sfunzf2Ginfozd2cfromzd2setz12z82zzglobaliza7e_ginfoza7, 0L, BUNSPEC,
		2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_localzf2Ginfozf2zzglobaliza7e_ginfoza7));
		     ADD_ROOT((void *) (&BGl_sfunzf2Ginfozf2zzglobaliza7e_ginfoza7));
		     ADD_ROOT((void *) (&BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7));
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzglobaliza7e_ginfoza7));
		     ADD_ROOT((void *) (&BGl_sexitzf2Ginfozf2zzglobaliza7e_ginfoza7));
		     ADD_ROOT((void *) (&BGl_globalzf2Ginfozf2zzglobaliza7e_ginfoza7));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_ginfoza7(long
		BgL_checksumz00_4323, char *BgL_fromz00_4324)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzglobaliza7e_ginfoza7))
				{
					BGl_requirezd2initializa7ationz75zzglobaliza7e_ginfoza7 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzglobaliza7e_ginfoza7();
					BGl_libraryzd2moduleszd2initz00zzglobaliza7e_ginfoza7();
					BGl_cnstzd2initzd2zzglobaliza7e_ginfoza7();
					BGl_importedzd2moduleszd2initz00zzglobaliza7e_ginfoza7();
					BGl_objectzd2initzd2zzglobaliza7e_ginfoza7();
					return BGl_toplevelzd2initzd2zzglobaliza7e_ginfoza7();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzglobaliza7e_ginfoza7()
	{
		{	/* Globalize/ginfo.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"globalize_ginfo");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"globalize_ginfo");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"globalize_ginfo");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"globalize_ginfo");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"globalize_ginfo");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"globalize_ginfo");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzglobaliza7e_ginfoza7()
	{
		{	/* Globalize/ginfo.scm 15 */
			{	/* Globalize/ginfo.scm 15 */
				obj_t BgL_cportz00_4038;

				{	/* Globalize/ginfo.scm 15 */
					obj_t BgL_stringz00_4046;

					BgL_stringz00_4046 = BGl_string2228z00zzglobaliza7e_ginfoza7;
					{	/* Globalize/ginfo.scm 15 */
						obj_t BgL_startz00_4047;

						BgL_startz00_4047 = BINT(((long) 0));
						{	/* Globalize/ginfo.scm 15 */
							obj_t BgL_endz00_4048;

							BgL_endz00_4048 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_4046)));
							{	/* Globalize/ginfo.scm 15 */

								BgL_cportz00_4038 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_4046, BgL_startz00_4047, BgL_endz00_4048);
				}}}}
				{
					long BgL_iz00_4039;

					BgL_iz00_4039 = ((long) 35);
				BgL_loopz00_4040:
					if ((BgL_iz00_4039 == ((long) -1)))
						{	/* Globalize/ginfo.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Globalize/ginfo.scm 15 */
							{	/* Globalize/ginfo.scm 15 */
								obj_t BgL_arg2230z00_4042;

								{	/* Globalize/ginfo.scm 15 */

									{	/* Globalize/ginfo.scm 15 */
										obj_t BgL_locationz00_4044;

										BgL_locationz00_4044 = BBOOL(((bool_t) 0));
										{	/* Globalize/ginfo.scm 15 */

											BgL_arg2230z00_4042 =
												BGl_readz00zz__readerz00(BgL_cportz00_4038,
												BgL_locationz00_4044);
										}
									}
								}
								{	/* Globalize/ginfo.scm 15 */
									int BgL_tmpz00_4349;

									BgL_tmpz00_4349 = (int) (BgL_iz00_4039);
									CNST_TABLE_SET(BgL_tmpz00_4349, BgL_arg2230z00_4042);
							}}
							{	/* Globalize/ginfo.scm 15 */
								int BgL_auxz00_4045;

								BgL_auxz00_4045 = (int) ((BgL_iz00_4039 - ((long) 1)));
								{
									long BgL_iz00_4354;

									BgL_iz00_4354 = (long) (BgL_auxz00_4045);
									BgL_iz00_4039 = BgL_iz00_4354;
									goto BgL_loopz00_4040;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzglobaliza7e_ginfoza7()
	{
		{	/* Globalize/ginfo.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzglobaliza7e_ginfoza7()
	{
		{	/* Globalize/ginfo.scm 15 */
			return BUNSPEC;
		}

	}



/* make-sfun/Ginfo */
	BGL_EXPORTED_DEF BgL_sfunz00_bglt
		BGl_makezd2sfunzf2Ginfoz20zzglobaliza7e_ginfoza7(long BgL_arity1271z00_3,
		obj_t BgL_sidezd2effect1272zd2_4, obj_t BgL_predicatezd2of1273zd2_5,
		obj_t BgL_stackzd2allocator1274zd2_6, bool_t BgL_topzf31275zf3_7,
		obj_t BgL_thezd2closure1276zd2_8, obj_t BgL_effect1277z00_9,
		obj_t BgL_failsafe1278z00_10, obj_t BgL_argszd2noescape1279zd2_11,
		obj_t BgL_property1280z00_12, obj_t BgL_args1281z00_13,
		obj_t BgL_argszd2name1282zd2_14, obj_t BgL_body1283z00_15,
		obj_t BgL_class1284z00_16, obj_t BgL_dssslzd2keywords1285zd2_17,
		obj_t BgL_loc1286z00_18, obj_t BgL_optionals1287z00_19,
		obj_t BgL_keys1288z00_20, obj_t BgL_thezd2closurezd2global1289z00_21,
		obj_t BgL_strength1290z00_22, obj_t BgL_stackable1291z00_23,
		bool_t BgL_gzf31292zf3_24, obj_t BgL_cfrom1293z00_25,
		obj_t BgL_cfromza21294za2_26, obj_t BgL_cto1295z00_27,
		obj_t BgL_ctoza21296za2_28, obj_t BgL_efunctions1297z00_29,
		obj_t BgL_integrator1298z00_30, obj_t BgL_imark1299z00_31,
		obj_t BgL_owner1300z00_32, obj_t BgL_integrated1301z00_33,
		obj_t BgL_pluggedzd2in1302zd2_34, long BgL_mark1303z00_35,
		obj_t BgL_freezd2mark1304zd2_36, obj_t BgL_thezd2global1305zd2_37,
		obj_t BgL_kaptured1306z00_38, obj_t BgL_newzd2body1307zd2_39,
		long BgL_bmark1308z00_40, long BgL_umark1309z00_41,
		obj_t BgL_free1310z00_42, obj_t BgL_bound1311z00_43)
	{
		{	/* Globalize/ginfo.sch 218 */
			{	/* Globalize/ginfo.sch 218 */
				BgL_sfunz00_bglt BgL_new1221z00_4051;

				{	/* Globalize/ginfo.sch 218 */
					BgL_sfunz00_bglt BgL_tmp1219z00_4052;
					BgL_sfunzf2ginfozf2_bglt BgL_wide1220z00_4053;

					{
						BgL_sfunz00_bglt BgL_auxz00_4357;

						{	/* Globalize/ginfo.sch 218 */
							BgL_sfunz00_bglt BgL_new1218z00_4054;

							BgL_new1218z00_4054 =
								((BgL_sfunz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_sfunz00_bgl))));
							{	/* Globalize/ginfo.sch 218 */
								long BgL_arg1418z00_4055;

								{	/* Globalize/ginfo.sch 218 */
									long BgL_res2067z00_4056;

									BgL_res2067z00_4056 =
										BGL_CLASS_INDEX(BGl_sfunz00zzast_varz00);
									BgL_arg1418z00_4055 = BgL_res2067z00_4056;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1218z00_4054),
									BgL_arg1418z00_4055);
							}
							{	/* Globalize/ginfo.sch 218 */
								BgL_objectz00_bglt BgL_tmpz00_4362;

								BgL_tmpz00_4362 = ((BgL_objectz00_bglt) BgL_new1218z00_4054);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4362, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1218z00_4054);
							BgL_auxz00_4357 = BgL_new1218z00_4054;
						}
						BgL_tmp1219z00_4052 = ((BgL_sfunz00_bglt) BgL_auxz00_4357);
					}
					BgL_wide1220z00_4053 =
						((BgL_sfunzf2ginfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_sfunzf2ginfozf2_bgl))));
					{	/* Globalize/ginfo.sch 218 */
						obj_t BgL_auxz00_4370;
						BgL_objectz00_bglt BgL_tmpz00_4368;

						BgL_auxz00_4370 = ((obj_t) BgL_wide1220z00_4053);
						BgL_tmpz00_4368 = ((BgL_objectz00_bglt) BgL_tmp1219z00_4052);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4368, BgL_auxz00_4370);
					}
					((BgL_objectz00_bglt) BgL_tmp1219z00_4052);
					{	/* Globalize/ginfo.sch 218 */
						long BgL_arg1417z00_4057;

						{	/* Globalize/ginfo.sch 218 */
							long BgL_res2068z00_4058;

							BgL_res2068z00_4058 =
								BGL_CLASS_INDEX(BGl_sfunzf2Ginfozf2zzglobaliza7e_ginfoza7);
							BgL_arg1417z00_4057 = BgL_res2068z00_4058;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1219z00_4052), BgL_arg1417z00_4057);
					}
					BgL_new1221z00_4051 = ((BgL_sfunz00_bglt) BgL_tmp1219z00_4052);
				}
				((((BgL_funz00_bglt) COBJECT(
								((BgL_funz00_bglt) BgL_new1221z00_4051)))->BgL_arityz00) =
					((long) BgL_arity1271z00_3), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_new1221z00_4051)))->
						BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1272zd2_4), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_new1221z00_4051)))->
						BgL_predicatezd2ofzd2) =
					((obj_t) BgL_predicatezd2of1273zd2_5), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_new1221z00_4051)))->
						BgL_stackzd2allocatorzd2) =
					((obj_t) BgL_stackzd2allocator1274zd2_6), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_new1221z00_4051)))->
						BgL_topzf3zf3) = ((bool_t) BgL_topzf31275zf3_7), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_new1221z00_4051)))->
						BgL_thezd2closurezd2) =
					((obj_t) BgL_thezd2closure1276zd2_8), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_new1221z00_4051)))->
						BgL_effectz00) = ((obj_t) BgL_effect1277z00_9), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_new1221z00_4051)))->
						BgL_failsafez00) = ((obj_t) BgL_failsafe1278z00_10), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_new1221z00_4051)))->
						BgL_argszd2noescapezd2) =
					((obj_t) BgL_argszd2noescape1279zd2_11), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1221z00_4051)))->BgL_propertyz00) =
					((obj_t) BgL_property1280z00_12), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1221z00_4051)))->BgL_argsz00) =
					((obj_t) BgL_args1281z00_13), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1221z00_4051)))->BgL_argszd2namezd2) =
					((obj_t) BgL_argszd2name1282zd2_14), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1221z00_4051)))->BgL_bodyz00) =
					((obj_t) BgL_body1283z00_15), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1221z00_4051)))->BgL_classz00) =
					((obj_t) BgL_class1284z00_16), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1221z00_4051)))->BgL_dssslzd2keywordszd2) =
					((obj_t) BgL_dssslzd2keywords1285zd2_17), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1221z00_4051)))->BgL_locz00) =
					((obj_t) BgL_loc1286z00_18), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1221z00_4051)))->BgL_optionalsz00) =
					((obj_t) BgL_optionals1287z00_19), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1221z00_4051)))->BgL_keysz00) =
					((obj_t) BgL_keys1288z00_20), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1221z00_4051)))->BgL_thezd2closurezd2globalz00) =
					((obj_t) BgL_thezd2closurezd2global1289z00_21), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1221z00_4051)))->BgL_strengthz00) =
					((obj_t) BgL_strength1290z00_22), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1221z00_4051)))->BgL_stackablez00) =
					((obj_t) BgL_stackable1291z00_23), BUNSPEC);
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4420;

					{
						obj_t BgL_auxz00_4421;

						{	/* Globalize/ginfo.sch 218 */
							BgL_objectz00_bglt BgL_tmpz00_4422;

							BgL_tmpz00_4422 = ((BgL_objectz00_bglt) BgL_new1221z00_4051);
							BgL_auxz00_4421 = BGL_OBJECT_WIDENING(BgL_tmpz00_4422);
						}
						BgL_auxz00_4420 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4421);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4420))->
							BgL_gzf3zf3) = ((bool_t) BgL_gzf31292zf3_24), BUNSPEC);
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4427;

					{
						obj_t BgL_auxz00_4428;

						{	/* Globalize/ginfo.sch 218 */
							BgL_objectz00_bglt BgL_tmpz00_4429;

							BgL_tmpz00_4429 = ((BgL_objectz00_bglt) BgL_new1221z00_4051);
							BgL_auxz00_4428 = BGL_OBJECT_WIDENING(BgL_tmpz00_4429);
						}
						BgL_auxz00_4427 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4428);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4427))->
							BgL_cfromz00) = ((obj_t) BgL_cfrom1293z00_25), BUNSPEC);
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4434;

					{
						obj_t BgL_auxz00_4435;

						{	/* Globalize/ginfo.sch 218 */
							BgL_objectz00_bglt BgL_tmpz00_4436;

							BgL_tmpz00_4436 = ((BgL_objectz00_bglt) BgL_new1221z00_4051);
							BgL_auxz00_4435 = BGL_OBJECT_WIDENING(BgL_tmpz00_4436);
						}
						BgL_auxz00_4434 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4435);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4434))->
							BgL_cfromza2za2) = ((obj_t) BgL_cfromza21294za2_26), BUNSPEC);
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4441;

					{
						obj_t BgL_auxz00_4442;

						{	/* Globalize/ginfo.sch 218 */
							BgL_objectz00_bglt BgL_tmpz00_4443;

							BgL_tmpz00_4443 = ((BgL_objectz00_bglt) BgL_new1221z00_4051);
							BgL_auxz00_4442 = BGL_OBJECT_WIDENING(BgL_tmpz00_4443);
						}
						BgL_auxz00_4441 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4442);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4441))->BgL_ctoz00) =
						((obj_t) BgL_cto1295z00_27), BUNSPEC);
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4448;

					{
						obj_t BgL_auxz00_4449;

						{	/* Globalize/ginfo.sch 218 */
							BgL_objectz00_bglt BgL_tmpz00_4450;

							BgL_tmpz00_4450 = ((BgL_objectz00_bglt) BgL_new1221z00_4051);
							BgL_auxz00_4449 = BGL_OBJECT_WIDENING(BgL_tmpz00_4450);
						}
						BgL_auxz00_4448 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4449);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4448))->
							BgL_ctoza2za2) = ((obj_t) BgL_ctoza21296za2_28), BUNSPEC);
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4455;

					{
						obj_t BgL_auxz00_4456;

						{	/* Globalize/ginfo.sch 218 */
							BgL_objectz00_bglt BgL_tmpz00_4457;

							BgL_tmpz00_4457 = ((BgL_objectz00_bglt) BgL_new1221z00_4051);
							BgL_auxz00_4456 = BGL_OBJECT_WIDENING(BgL_tmpz00_4457);
						}
						BgL_auxz00_4455 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4456);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4455))->
							BgL_efunctionsz00) = ((obj_t) BgL_efunctions1297z00_29), BUNSPEC);
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4462;

					{
						obj_t BgL_auxz00_4463;

						{	/* Globalize/ginfo.sch 218 */
							BgL_objectz00_bglt BgL_tmpz00_4464;

							BgL_tmpz00_4464 = ((BgL_objectz00_bglt) BgL_new1221z00_4051);
							BgL_auxz00_4463 = BGL_OBJECT_WIDENING(BgL_tmpz00_4464);
						}
						BgL_auxz00_4462 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4463);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4462))->
							BgL_integratorz00) = ((obj_t) BgL_integrator1298z00_30), BUNSPEC);
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4469;

					{
						obj_t BgL_auxz00_4470;

						{	/* Globalize/ginfo.sch 218 */
							BgL_objectz00_bglt BgL_tmpz00_4471;

							BgL_tmpz00_4471 = ((BgL_objectz00_bglt) BgL_new1221z00_4051);
							BgL_auxz00_4470 = BGL_OBJECT_WIDENING(BgL_tmpz00_4471);
						}
						BgL_auxz00_4469 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4470);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4469))->
							BgL_imarkz00) = ((obj_t) BgL_imark1299z00_31), BUNSPEC);
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4476;

					{
						obj_t BgL_auxz00_4477;

						{	/* Globalize/ginfo.sch 218 */
							BgL_objectz00_bglt BgL_tmpz00_4478;

							BgL_tmpz00_4478 = ((BgL_objectz00_bglt) BgL_new1221z00_4051);
							BgL_auxz00_4477 = BGL_OBJECT_WIDENING(BgL_tmpz00_4478);
						}
						BgL_auxz00_4476 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4477);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4476))->
							BgL_ownerz00) = ((obj_t) BgL_owner1300z00_32), BUNSPEC);
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4483;

					{
						obj_t BgL_auxz00_4484;

						{	/* Globalize/ginfo.sch 218 */
							BgL_objectz00_bglt BgL_tmpz00_4485;

							BgL_tmpz00_4485 = ((BgL_objectz00_bglt) BgL_new1221z00_4051);
							BgL_auxz00_4484 = BGL_OBJECT_WIDENING(BgL_tmpz00_4485);
						}
						BgL_auxz00_4483 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4484);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4483))->
							BgL_integratedz00) = ((obj_t) BgL_integrated1301z00_33), BUNSPEC);
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4490;

					{
						obj_t BgL_auxz00_4491;

						{	/* Globalize/ginfo.sch 218 */
							BgL_objectz00_bglt BgL_tmpz00_4492;

							BgL_tmpz00_4492 = ((BgL_objectz00_bglt) BgL_new1221z00_4051);
							BgL_auxz00_4491 = BGL_OBJECT_WIDENING(BgL_tmpz00_4492);
						}
						BgL_auxz00_4490 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4491);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4490))->
							BgL_pluggedzd2inzd2) =
						((obj_t) BgL_pluggedzd2in1302zd2_34), BUNSPEC);
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4497;

					{
						obj_t BgL_auxz00_4498;

						{	/* Globalize/ginfo.sch 218 */
							BgL_objectz00_bglt BgL_tmpz00_4499;

							BgL_tmpz00_4499 = ((BgL_objectz00_bglt) BgL_new1221z00_4051);
							BgL_auxz00_4498 = BGL_OBJECT_WIDENING(BgL_tmpz00_4499);
						}
						BgL_auxz00_4497 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4498);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4497))->
							BgL_markz00) = ((long) BgL_mark1303z00_35), BUNSPEC);
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4504;

					{
						obj_t BgL_auxz00_4505;

						{	/* Globalize/ginfo.sch 218 */
							BgL_objectz00_bglt BgL_tmpz00_4506;

							BgL_tmpz00_4506 = ((BgL_objectz00_bglt) BgL_new1221z00_4051);
							BgL_auxz00_4505 = BGL_OBJECT_WIDENING(BgL_tmpz00_4506);
						}
						BgL_auxz00_4504 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4505);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4504))->
							BgL_freezd2markzd2) =
						((obj_t) BgL_freezd2mark1304zd2_36), BUNSPEC);
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4511;

					{
						obj_t BgL_auxz00_4512;

						{	/* Globalize/ginfo.sch 218 */
							BgL_objectz00_bglt BgL_tmpz00_4513;

							BgL_tmpz00_4513 = ((BgL_objectz00_bglt) BgL_new1221z00_4051);
							BgL_auxz00_4512 = BGL_OBJECT_WIDENING(BgL_tmpz00_4513);
						}
						BgL_auxz00_4511 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4512);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4511))->
							BgL_thezd2globalzd2) =
						((obj_t) BgL_thezd2global1305zd2_37), BUNSPEC);
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4518;

					{
						obj_t BgL_auxz00_4519;

						{	/* Globalize/ginfo.sch 218 */
							BgL_objectz00_bglt BgL_tmpz00_4520;

							BgL_tmpz00_4520 = ((BgL_objectz00_bglt) BgL_new1221z00_4051);
							BgL_auxz00_4519 = BGL_OBJECT_WIDENING(BgL_tmpz00_4520);
						}
						BgL_auxz00_4518 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4519);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4518))->
							BgL_kapturedz00) = ((obj_t) BgL_kaptured1306z00_38), BUNSPEC);
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4525;

					{
						obj_t BgL_auxz00_4526;

						{	/* Globalize/ginfo.sch 218 */
							BgL_objectz00_bglt BgL_tmpz00_4527;

							BgL_tmpz00_4527 = ((BgL_objectz00_bglt) BgL_new1221z00_4051);
							BgL_auxz00_4526 = BGL_OBJECT_WIDENING(BgL_tmpz00_4527);
						}
						BgL_auxz00_4525 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4526);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4525))->
							BgL_newzd2bodyzd2) = ((obj_t) BgL_newzd2body1307zd2_39), BUNSPEC);
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4532;

					{
						obj_t BgL_auxz00_4533;

						{	/* Globalize/ginfo.sch 218 */
							BgL_objectz00_bglt BgL_tmpz00_4534;

							BgL_tmpz00_4534 = ((BgL_objectz00_bglt) BgL_new1221z00_4051);
							BgL_auxz00_4533 = BGL_OBJECT_WIDENING(BgL_tmpz00_4534);
						}
						BgL_auxz00_4532 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4533);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4532))->
							BgL_bmarkz00) = ((long) BgL_bmark1308z00_40), BUNSPEC);
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4539;

					{
						obj_t BgL_auxz00_4540;

						{	/* Globalize/ginfo.sch 218 */
							BgL_objectz00_bglt BgL_tmpz00_4541;

							BgL_tmpz00_4541 = ((BgL_objectz00_bglt) BgL_new1221z00_4051);
							BgL_auxz00_4540 = BGL_OBJECT_WIDENING(BgL_tmpz00_4541);
						}
						BgL_auxz00_4539 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4540);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4539))->
							BgL_umarkz00) = ((long) BgL_umark1309z00_41), BUNSPEC);
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4546;

					{
						obj_t BgL_auxz00_4547;

						{	/* Globalize/ginfo.sch 218 */
							BgL_objectz00_bglt BgL_tmpz00_4548;

							BgL_tmpz00_4548 = ((BgL_objectz00_bglt) BgL_new1221z00_4051);
							BgL_auxz00_4547 = BGL_OBJECT_WIDENING(BgL_tmpz00_4548);
						}
						BgL_auxz00_4546 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4547);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4546))->
							BgL_freez00) = ((obj_t) BgL_free1310z00_42), BUNSPEC);
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4553;

					{
						obj_t BgL_auxz00_4554;

						{	/* Globalize/ginfo.sch 218 */
							BgL_objectz00_bglt BgL_tmpz00_4555;

							BgL_tmpz00_4555 = ((BgL_objectz00_bglt) BgL_new1221z00_4051);
							BgL_auxz00_4554 = BGL_OBJECT_WIDENING(BgL_tmpz00_4555);
						}
						BgL_auxz00_4553 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4554);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4553))->
							BgL_boundz00) = ((obj_t) BgL_bound1311z00_43), BUNSPEC);
				}
				return BgL_new1221z00_4051;
			}
		}

	}



/* &make-sfun/Ginfo */
	BgL_sfunz00_bglt BGl_z62makezd2sfunzf2Ginfoz42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3071, obj_t BgL_arity1271z00_3072,
		obj_t BgL_sidezd2effect1272zd2_3073, obj_t BgL_predicatezd2of1273zd2_3074,
		obj_t BgL_stackzd2allocator1274zd2_3075, obj_t BgL_topzf31275zf3_3076,
		obj_t BgL_thezd2closure1276zd2_3077, obj_t BgL_effect1277z00_3078,
		obj_t BgL_failsafe1278z00_3079, obj_t BgL_argszd2noescape1279zd2_3080,
		obj_t BgL_property1280z00_3081, obj_t BgL_args1281z00_3082,
		obj_t BgL_argszd2name1282zd2_3083, obj_t BgL_body1283z00_3084,
		obj_t BgL_class1284z00_3085, obj_t BgL_dssslzd2keywords1285zd2_3086,
		obj_t BgL_loc1286z00_3087, obj_t BgL_optionals1287z00_3088,
		obj_t BgL_keys1288z00_3089, obj_t BgL_thezd2closurezd2global1289z00_3090,
		obj_t BgL_strength1290z00_3091, obj_t BgL_stackable1291z00_3092,
		obj_t BgL_gzf31292zf3_3093, obj_t BgL_cfrom1293z00_3094,
		obj_t BgL_cfromza21294za2_3095, obj_t BgL_cto1295z00_3096,
		obj_t BgL_ctoza21296za2_3097, obj_t BgL_efunctions1297z00_3098,
		obj_t BgL_integrator1298z00_3099, obj_t BgL_imark1299z00_3100,
		obj_t BgL_owner1300z00_3101, obj_t BgL_integrated1301z00_3102,
		obj_t BgL_pluggedzd2in1302zd2_3103, obj_t BgL_mark1303z00_3104,
		obj_t BgL_freezd2mark1304zd2_3105, obj_t BgL_thezd2global1305zd2_3106,
		obj_t BgL_kaptured1306z00_3107, obj_t BgL_newzd2body1307zd2_3108,
		obj_t BgL_bmark1308z00_3109, obj_t BgL_umark1309z00_3110,
		obj_t BgL_free1310z00_3111, obj_t BgL_bound1311z00_3112)
	{
		{	/* Globalize/ginfo.sch 218 */
			return
				BGl_makezd2sfunzf2Ginfoz20zzglobaliza7e_ginfoza7(
				(long) CINT(BgL_arity1271z00_3072), BgL_sidezd2effect1272zd2_3073,
				BgL_predicatezd2of1273zd2_3074, BgL_stackzd2allocator1274zd2_3075,
				CBOOL(BgL_topzf31275zf3_3076), BgL_thezd2closure1276zd2_3077,
				BgL_effect1277z00_3078, BgL_failsafe1278z00_3079,
				BgL_argszd2noescape1279zd2_3080, BgL_property1280z00_3081,
				BgL_args1281z00_3082, BgL_argszd2name1282zd2_3083, BgL_body1283z00_3084,
				BgL_class1284z00_3085, BgL_dssslzd2keywords1285zd2_3086,
				BgL_loc1286z00_3087, BgL_optionals1287z00_3088, BgL_keys1288z00_3089,
				BgL_thezd2closurezd2global1289z00_3090, BgL_strength1290z00_3091,
				BgL_stackable1291z00_3092, CBOOL(BgL_gzf31292zf3_3093),
				BgL_cfrom1293z00_3094, BgL_cfromza21294za2_3095, BgL_cto1295z00_3096,
				BgL_ctoza21296za2_3097, BgL_efunctions1297z00_3098,
				BgL_integrator1298z00_3099, BgL_imark1299z00_3100,
				BgL_owner1300z00_3101, BgL_integrated1301z00_3102,
				BgL_pluggedzd2in1302zd2_3103, (long) CINT(BgL_mark1303z00_3104),
				BgL_freezd2mark1304zd2_3105, BgL_thezd2global1305zd2_3106,
				BgL_kaptured1306z00_3107, BgL_newzd2body1307zd2_3108,
				(long) CINT(BgL_bmark1308z00_3109), (long) CINT(BgL_umark1309z00_3110),
				BgL_free1310z00_3111, BgL_bound1311z00_3112);
		}

	}



/* sfun/Ginfo? */
	BGL_EXPORTED_DEF bool_t BGl_sfunzf2Ginfozf3z01zzglobaliza7e_ginfoza7(obj_t
		BgL_objz00_44)
	{
		{	/* Globalize/ginfo.sch 219 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_44,
				BGl_sfunzf2Ginfozf2zzglobaliza7e_ginfoza7);
		}

	}



/* &sfun/Ginfo? */
	obj_t BGl_z62sfunzf2Ginfozf3z63zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3113,
		obj_t BgL_objz00_3114)
	{
		{	/* Globalize/ginfo.sch 219 */
			return
				BBOOL(BGl_sfunzf2Ginfozf3z01zzglobaliza7e_ginfoza7(BgL_objz00_3114));
		}

	}



/* sfun/Ginfo-nil */
	BGL_EXPORTED_DEF BgL_sfunz00_bglt
		BGl_sfunzf2Ginfozd2nilz20zzglobaliza7e_ginfoza7()
	{
		{	/* Globalize/ginfo.sch 220 */
			{	/* Globalize/ginfo.sch 220 */
				obj_t BgL_classz00_2583;

				BgL_classz00_2583 = BGl_sfunzf2Ginfozf2zzglobaliza7e_ginfoza7;
				{	/* Globalize/ginfo.sch 220 */
					obj_t BgL__ortest_1106z00_2584;

					BgL__ortest_1106z00_2584 = BGL_CLASS_NIL(BgL_classz00_2583);
					if (CBOOL(BgL__ortest_1106z00_2584))
						{	/* Globalize/ginfo.sch 220 */
							return ((BgL_sfunz00_bglt) BgL__ortest_1106z00_2584);
						}
					else
						{	/* Globalize/ginfo.sch 220 */
							return
								((BgL_sfunz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_2583));
						}
				}
			}
		}

	}



/* &sfun/Ginfo-nil */
	BgL_sfunz00_bglt BGl_z62sfunzf2Ginfozd2nilz42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3115)
	{
		{	/* Globalize/ginfo.sch 220 */
			return BGl_sfunzf2Ginfozd2nilz20zzglobaliza7e_ginfoza7();
		}

	}



/* sfun/Ginfo-bound */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2boundz20zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt
		BgL_oz00_45)
	{
		{	/* Globalize/ginfo.sch 221 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4577;

				{
					obj_t BgL_auxz00_4578;

					{	/* Globalize/ginfo.sch 221 */
						BgL_objectz00_bglt BgL_tmpz00_4579;

						BgL_tmpz00_4579 = ((BgL_objectz00_bglt) BgL_oz00_45);
						BgL_auxz00_4578 = BGL_OBJECT_WIDENING(BgL_tmpz00_4579);
					}
					BgL_auxz00_4577 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4578);
				}
				return
					(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4577))->BgL_boundz00);
			}
		}

	}



/* &sfun/Ginfo-bound */
	obj_t BGl_z62sfunzf2Ginfozd2boundz42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3116, obj_t BgL_oz00_3117)
	{
		{	/* Globalize/ginfo.sch 221 */
			return
				BGl_sfunzf2Ginfozd2boundz20zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3117));
		}

	}



/* sfun/Ginfo-bound-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2boundzd2setz12ze0zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt
		BgL_oz00_46, obj_t BgL_vz00_47)
	{
		{	/* Globalize/ginfo.sch 222 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4586;

				{
					obj_t BgL_auxz00_4587;

					{	/* Globalize/ginfo.sch 222 */
						BgL_objectz00_bglt BgL_tmpz00_4588;

						BgL_tmpz00_4588 = ((BgL_objectz00_bglt) BgL_oz00_46);
						BgL_auxz00_4587 = BGL_OBJECT_WIDENING(BgL_tmpz00_4588);
					}
					BgL_auxz00_4586 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4587);
				}
				return
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4586))->
						BgL_boundz00) = ((obj_t) BgL_vz00_47), BUNSPEC);
			}
		}

	}



/* &sfun/Ginfo-bound-set! */
	obj_t BGl_z62sfunzf2Ginfozd2boundzd2setz12z82zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3118, obj_t BgL_oz00_3119, obj_t BgL_vz00_3120)
	{
		{	/* Globalize/ginfo.sch 222 */
			return
				BGl_sfunzf2Ginfozd2boundzd2setz12ze0zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3119), BgL_vz00_3120);
		}

	}



/* sfun/Ginfo-free */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2freez20zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt
		BgL_oz00_48)
	{
		{	/* Globalize/ginfo.sch 223 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4595;

				{
					obj_t BgL_auxz00_4596;

					{	/* Globalize/ginfo.sch 223 */
						BgL_objectz00_bglt BgL_tmpz00_4597;

						BgL_tmpz00_4597 = ((BgL_objectz00_bglt) BgL_oz00_48);
						BgL_auxz00_4596 = BGL_OBJECT_WIDENING(BgL_tmpz00_4597);
					}
					BgL_auxz00_4595 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4596);
				}
				return
					(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4595))->BgL_freez00);
			}
		}

	}



/* &sfun/Ginfo-free */
	obj_t BGl_z62sfunzf2Ginfozd2freez42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3121, obj_t BgL_oz00_3122)
	{
		{	/* Globalize/ginfo.sch 223 */
			return
				BGl_sfunzf2Ginfozd2freez20zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3122));
		}

	}



/* sfun/Ginfo-free-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2freezd2setz12ze0zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt
		BgL_oz00_49, obj_t BgL_vz00_50)
	{
		{	/* Globalize/ginfo.sch 224 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4604;

				{
					obj_t BgL_auxz00_4605;

					{	/* Globalize/ginfo.sch 224 */
						BgL_objectz00_bglt BgL_tmpz00_4606;

						BgL_tmpz00_4606 = ((BgL_objectz00_bglt) BgL_oz00_49);
						BgL_auxz00_4605 = BGL_OBJECT_WIDENING(BgL_tmpz00_4606);
					}
					BgL_auxz00_4604 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4605);
				}
				return
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4604))->
						BgL_freez00) = ((obj_t) BgL_vz00_50), BUNSPEC);
			}
		}

	}



/* &sfun/Ginfo-free-set! */
	obj_t BGl_z62sfunzf2Ginfozd2freezd2setz12z82zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3123, obj_t BgL_oz00_3124, obj_t BgL_vz00_3125)
	{
		{	/* Globalize/ginfo.sch 224 */
			return
				BGl_sfunzf2Ginfozd2freezd2setz12ze0zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3124), BgL_vz00_3125);
		}

	}



/* sfun/Ginfo-umark */
	BGL_EXPORTED_DEF long
		BGl_sfunzf2Ginfozd2umarkz20zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt
		BgL_oz00_51)
	{
		{	/* Globalize/ginfo.sch 225 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4613;

				{
					obj_t BgL_auxz00_4614;

					{	/* Globalize/ginfo.sch 225 */
						BgL_objectz00_bglt BgL_tmpz00_4615;

						BgL_tmpz00_4615 = ((BgL_objectz00_bglt) BgL_oz00_51);
						BgL_auxz00_4614 = BGL_OBJECT_WIDENING(BgL_tmpz00_4615);
					}
					BgL_auxz00_4613 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4614);
				}
				return
					(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4613))->BgL_umarkz00);
			}
		}

	}



/* &sfun/Ginfo-umark */
	obj_t BGl_z62sfunzf2Ginfozd2umarkz42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3126, obj_t BgL_oz00_3127)
	{
		{	/* Globalize/ginfo.sch 225 */
			return
				BINT(BGl_sfunzf2Ginfozd2umarkz20zzglobaliza7e_ginfoza7(
					((BgL_sfunz00_bglt) BgL_oz00_3127)));
		}

	}



/* sfun/Ginfo-umark-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2umarkzd2setz12ze0zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt
		BgL_oz00_52, long BgL_vz00_53)
	{
		{	/* Globalize/ginfo.sch 226 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4623;

				{
					obj_t BgL_auxz00_4624;

					{	/* Globalize/ginfo.sch 226 */
						BgL_objectz00_bglt BgL_tmpz00_4625;

						BgL_tmpz00_4625 = ((BgL_objectz00_bglt) BgL_oz00_52);
						BgL_auxz00_4624 = BGL_OBJECT_WIDENING(BgL_tmpz00_4625);
					}
					BgL_auxz00_4623 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4624);
				}
				return
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4623))->
						BgL_umarkz00) = ((long) BgL_vz00_53), BUNSPEC);
		}}

	}



/* &sfun/Ginfo-umark-set! */
	obj_t BGl_z62sfunzf2Ginfozd2umarkzd2setz12z82zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3128, obj_t BgL_oz00_3129, obj_t BgL_vz00_3130)
	{
		{	/* Globalize/ginfo.sch 226 */
			return
				BGl_sfunzf2Ginfozd2umarkzd2setz12ze0zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3129), (long) CINT(BgL_vz00_3130));
		}

	}



/* sfun/Ginfo-bmark */
	BGL_EXPORTED_DEF long
		BGl_sfunzf2Ginfozd2bmarkz20zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt
		BgL_oz00_54)
	{
		{	/* Globalize/ginfo.sch 227 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4633;

				{
					obj_t BgL_auxz00_4634;

					{	/* Globalize/ginfo.sch 227 */
						BgL_objectz00_bglt BgL_tmpz00_4635;

						BgL_tmpz00_4635 = ((BgL_objectz00_bglt) BgL_oz00_54);
						BgL_auxz00_4634 = BGL_OBJECT_WIDENING(BgL_tmpz00_4635);
					}
					BgL_auxz00_4633 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4634);
				}
				return
					(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4633))->BgL_bmarkz00);
			}
		}

	}



/* &sfun/Ginfo-bmark */
	obj_t BGl_z62sfunzf2Ginfozd2bmarkz42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3131, obj_t BgL_oz00_3132)
	{
		{	/* Globalize/ginfo.sch 227 */
			return
				BINT(BGl_sfunzf2Ginfozd2bmarkz20zzglobaliza7e_ginfoza7(
					((BgL_sfunz00_bglt) BgL_oz00_3132)));
		}

	}



/* sfun/Ginfo-bmark-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2bmarkzd2setz12ze0zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt
		BgL_oz00_55, long BgL_vz00_56)
	{
		{	/* Globalize/ginfo.sch 228 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4643;

				{
					obj_t BgL_auxz00_4644;

					{	/* Globalize/ginfo.sch 228 */
						BgL_objectz00_bglt BgL_tmpz00_4645;

						BgL_tmpz00_4645 = ((BgL_objectz00_bglt) BgL_oz00_55);
						BgL_auxz00_4644 = BGL_OBJECT_WIDENING(BgL_tmpz00_4645);
					}
					BgL_auxz00_4643 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4644);
				}
				return
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4643))->
						BgL_bmarkz00) = ((long) BgL_vz00_56), BUNSPEC);
		}}

	}



/* &sfun/Ginfo-bmark-set! */
	obj_t BGl_z62sfunzf2Ginfozd2bmarkzd2setz12z82zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3133, obj_t BgL_oz00_3134, obj_t BgL_vz00_3135)
	{
		{	/* Globalize/ginfo.sch 228 */
			return
				BGl_sfunzf2Ginfozd2bmarkzd2setz12ze0zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3134), (long) CINT(BgL_vz00_3135));
		}

	}



/* sfun/Ginfo-new-body */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2newzd2bodyzf2zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt
		BgL_oz00_57)
	{
		{	/* Globalize/ginfo.sch 229 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4653;

				{
					obj_t BgL_auxz00_4654;

					{	/* Globalize/ginfo.sch 229 */
						BgL_objectz00_bglt BgL_tmpz00_4655;

						BgL_tmpz00_4655 = ((BgL_objectz00_bglt) BgL_oz00_57);
						BgL_auxz00_4654 = BGL_OBJECT_WIDENING(BgL_tmpz00_4655);
					}
					BgL_auxz00_4653 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4654);
				}
				return
					(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4653))->
					BgL_newzd2bodyzd2);
			}
		}

	}



/* &sfun/Ginfo-new-body */
	obj_t BGl_z62sfunzf2Ginfozd2newzd2bodyz90zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3136, obj_t BgL_oz00_3137)
	{
		{	/* Globalize/ginfo.sch 229 */
			return
				BGl_sfunzf2Ginfozd2newzd2bodyzf2zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3137));
		}

	}



/* sfun/Ginfo-new-body-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2newzd2bodyzd2setz12z32zzglobaliza7e_ginfoza7
		(BgL_sfunz00_bglt BgL_oz00_58, obj_t BgL_vz00_59)
	{
		{	/* Globalize/ginfo.sch 230 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4662;

				{
					obj_t BgL_auxz00_4663;

					{	/* Globalize/ginfo.sch 230 */
						BgL_objectz00_bglt BgL_tmpz00_4664;

						BgL_tmpz00_4664 = ((BgL_objectz00_bglt) BgL_oz00_58);
						BgL_auxz00_4663 = BGL_OBJECT_WIDENING(BgL_tmpz00_4664);
					}
					BgL_auxz00_4662 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4663);
				}
				return
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4662))->
						BgL_newzd2bodyzd2) = ((obj_t) BgL_vz00_59), BUNSPEC);
			}
		}

	}



/* &sfun/Ginfo-new-body-set! */
	obj_t BGl_z62sfunzf2Ginfozd2newzd2bodyzd2setz12z50zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3138, obj_t BgL_oz00_3139, obj_t BgL_vz00_3140)
	{
		{	/* Globalize/ginfo.sch 230 */
			return
				BGl_sfunzf2Ginfozd2newzd2bodyzd2setz12z32zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3139), BgL_vz00_3140);
		}

	}



/* sfun/Ginfo-kaptured */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2kapturedz20zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt
		BgL_oz00_60)
	{
		{	/* Globalize/ginfo.sch 231 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4671;

				{
					obj_t BgL_auxz00_4672;

					{	/* Globalize/ginfo.sch 231 */
						BgL_objectz00_bglt BgL_tmpz00_4673;

						BgL_tmpz00_4673 = ((BgL_objectz00_bglt) BgL_oz00_60);
						BgL_auxz00_4672 = BGL_OBJECT_WIDENING(BgL_tmpz00_4673);
					}
					BgL_auxz00_4671 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4672);
				}
				return
					(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4671))->
					BgL_kapturedz00);
			}
		}

	}



/* &sfun/Ginfo-kaptured */
	obj_t BGl_z62sfunzf2Ginfozd2kapturedz42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3141, obj_t BgL_oz00_3142)
	{
		{	/* Globalize/ginfo.sch 231 */
			return
				BGl_sfunzf2Ginfozd2kapturedz20zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3142));
		}

	}



/* sfun/Ginfo-kaptured-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2kapturedzd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_sfunz00_bglt BgL_oz00_61, obj_t BgL_vz00_62)
	{
		{	/* Globalize/ginfo.sch 232 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4680;

				{
					obj_t BgL_auxz00_4681;

					{	/* Globalize/ginfo.sch 232 */
						BgL_objectz00_bglt BgL_tmpz00_4682;

						BgL_tmpz00_4682 = ((BgL_objectz00_bglt) BgL_oz00_61);
						BgL_auxz00_4681 = BGL_OBJECT_WIDENING(BgL_tmpz00_4682);
					}
					BgL_auxz00_4680 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4681);
				}
				return
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4680))->
						BgL_kapturedz00) = ((obj_t) BgL_vz00_62), BUNSPEC);
			}
		}

	}



/* &sfun/Ginfo-kaptured-set! */
	obj_t BGl_z62sfunzf2Ginfozd2kapturedzd2setz12z82zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3143, obj_t BgL_oz00_3144, obj_t BgL_vz00_3145)
	{
		{	/* Globalize/ginfo.sch 232 */
			return
				BGl_sfunzf2Ginfozd2kapturedzd2setz12ze0zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3144), BgL_vz00_3145);
		}

	}



/* sfun/Ginfo-the-global */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2thezd2globalzf2zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt
		BgL_oz00_63)
	{
		{	/* Globalize/ginfo.sch 233 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4689;

				{
					obj_t BgL_auxz00_4690;

					{	/* Globalize/ginfo.sch 233 */
						BgL_objectz00_bglt BgL_tmpz00_4691;

						BgL_tmpz00_4691 = ((BgL_objectz00_bglt) BgL_oz00_63);
						BgL_auxz00_4690 = BGL_OBJECT_WIDENING(BgL_tmpz00_4691);
					}
					BgL_auxz00_4689 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4690);
				}
				return
					(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4689))->
					BgL_thezd2globalzd2);
			}
		}

	}



/* &sfun/Ginfo-the-global */
	obj_t BGl_z62sfunzf2Ginfozd2thezd2globalz90zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3146, obj_t BgL_oz00_3147)
	{
		{	/* Globalize/ginfo.sch 233 */
			return
				BGl_sfunzf2Ginfozd2thezd2globalzf2zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3147));
		}

	}



/* sfun/Ginfo-the-global-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2thezd2globalzd2setz12z32zzglobaliza7e_ginfoza7
		(BgL_sfunz00_bglt BgL_oz00_64, obj_t BgL_vz00_65)
	{
		{	/* Globalize/ginfo.sch 234 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4698;

				{
					obj_t BgL_auxz00_4699;

					{	/* Globalize/ginfo.sch 234 */
						BgL_objectz00_bglt BgL_tmpz00_4700;

						BgL_tmpz00_4700 = ((BgL_objectz00_bglt) BgL_oz00_64);
						BgL_auxz00_4699 = BGL_OBJECT_WIDENING(BgL_tmpz00_4700);
					}
					BgL_auxz00_4698 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4699);
				}
				return
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4698))->
						BgL_thezd2globalzd2) = ((obj_t) BgL_vz00_65), BUNSPEC);
			}
		}

	}



/* &sfun/Ginfo-the-global-set! */
	obj_t
		BGl_z62sfunzf2Ginfozd2thezd2globalzd2setz12z50zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3148, obj_t BgL_oz00_3149, obj_t BgL_vz00_3150)
	{
		{	/* Globalize/ginfo.sch 234 */
			return
				BGl_sfunzf2Ginfozd2thezd2globalzd2setz12z32zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3149), BgL_vz00_3150);
		}

	}



/* sfun/Ginfo-free-mark */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2freezd2markzf2zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt
		BgL_oz00_66)
	{
		{	/* Globalize/ginfo.sch 235 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4707;

				{
					obj_t BgL_auxz00_4708;

					{	/* Globalize/ginfo.sch 235 */
						BgL_objectz00_bglt BgL_tmpz00_4709;

						BgL_tmpz00_4709 = ((BgL_objectz00_bglt) BgL_oz00_66);
						BgL_auxz00_4708 = BGL_OBJECT_WIDENING(BgL_tmpz00_4709);
					}
					BgL_auxz00_4707 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4708);
				}
				return
					(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4707))->
					BgL_freezd2markzd2);
			}
		}

	}



/* &sfun/Ginfo-free-mark */
	obj_t BGl_z62sfunzf2Ginfozd2freezd2markz90zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3151, obj_t BgL_oz00_3152)
	{
		{	/* Globalize/ginfo.sch 235 */
			return
				BGl_sfunzf2Ginfozd2freezd2markzf2zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3152));
		}

	}



/* sfun/Ginfo-free-mark-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2freezd2markzd2setz12z32zzglobaliza7e_ginfoza7
		(BgL_sfunz00_bglt BgL_oz00_67, obj_t BgL_vz00_68)
	{
		{	/* Globalize/ginfo.sch 236 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4716;

				{
					obj_t BgL_auxz00_4717;

					{	/* Globalize/ginfo.sch 236 */
						BgL_objectz00_bglt BgL_tmpz00_4718;

						BgL_tmpz00_4718 = ((BgL_objectz00_bglt) BgL_oz00_67);
						BgL_auxz00_4717 = BGL_OBJECT_WIDENING(BgL_tmpz00_4718);
					}
					BgL_auxz00_4716 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4717);
				}
				return
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4716))->
						BgL_freezd2markzd2) = ((obj_t) BgL_vz00_68), BUNSPEC);
			}
		}

	}



/* &sfun/Ginfo-free-mark-set! */
	obj_t
		BGl_z62sfunzf2Ginfozd2freezd2markzd2setz12z50zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3153, obj_t BgL_oz00_3154, obj_t BgL_vz00_3155)
	{
		{	/* Globalize/ginfo.sch 236 */
			return
				BGl_sfunzf2Ginfozd2freezd2markzd2setz12z32zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3154), BgL_vz00_3155);
		}

	}



/* sfun/Ginfo-mark */
	BGL_EXPORTED_DEF long
		BGl_sfunzf2Ginfozd2markz20zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt
		BgL_oz00_69)
	{
		{	/* Globalize/ginfo.sch 237 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4725;

				{
					obj_t BgL_auxz00_4726;

					{	/* Globalize/ginfo.sch 237 */
						BgL_objectz00_bglt BgL_tmpz00_4727;

						BgL_tmpz00_4727 = ((BgL_objectz00_bglt) BgL_oz00_69);
						BgL_auxz00_4726 = BGL_OBJECT_WIDENING(BgL_tmpz00_4727);
					}
					BgL_auxz00_4725 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4726);
				}
				return
					(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4725))->BgL_markz00);
			}
		}

	}



/* &sfun/Ginfo-mark */
	obj_t BGl_z62sfunzf2Ginfozd2markz42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3156, obj_t BgL_oz00_3157)
	{
		{	/* Globalize/ginfo.sch 237 */
			return
				BINT(BGl_sfunzf2Ginfozd2markz20zzglobaliza7e_ginfoza7(
					((BgL_sfunz00_bglt) BgL_oz00_3157)));
		}

	}



/* sfun/Ginfo-mark-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2markzd2setz12ze0zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt
		BgL_oz00_70, long BgL_vz00_71)
	{
		{	/* Globalize/ginfo.sch 238 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4735;

				{
					obj_t BgL_auxz00_4736;

					{	/* Globalize/ginfo.sch 238 */
						BgL_objectz00_bglt BgL_tmpz00_4737;

						BgL_tmpz00_4737 = ((BgL_objectz00_bglt) BgL_oz00_70);
						BgL_auxz00_4736 = BGL_OBJECT_WIDENING(BgL_tmpz00_4737);
					}
					BgL_auxz00_4735 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4736);
				}
				return
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4735))->
						BgL_markz00) = ((long) BgL_vz00_71), BUNSPEC);
		}}

	}



/* &sfun/Ginfo-mark-set! */
	obj_t BGl_z62sfunzf2Ginfozd2markzd2setz12z82zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3158, obj_t BgL_oz00_3159, obj_t BgL_vz00_3160)
	{
		{	/* Globalize/ginfo.sch 238 */
			return
				BGl_sfunzf2Ginfozd2markzd2setz12ze0zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3159), (long) CINT(BgL_vz00_3160));
		}

	}



/* sfun/Ginfo-plugged-in */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2pluggedzd2inzf2zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt
		BgL_oz00_72)
	{
		{	/* Globalize/ginfo.sch 239 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4745;

				{
					obj_t BgL_auxz00_4746;

					{	/* Globalize/ginfo.sch 239 */
						BgL_objectz00_bglt BgL_tmpz00_4747;

						BgL_tmpz00_4747 = ((BgL_objectz00_bglt) BgL_oz00_72);
						BgL_auxz00_4746 = BGL_OBJECT_WIDENING(BgL_tmpz00_4747);
					}
					BgL_auxz00_4745 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4746);
				}
				return
					(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4745))->
					BgL_pluggedzd2inzd2);
			}
		}

	}



/* &sfun/Ginfo-plugged-in */
	obj_t BGl_z62sfunzf2Ginfozd2pluggedzd2inz90zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3161, obj_t BgL_oz00_3162)
	{
		{	/* Globalize/ginfo.sch 239 */
			return
				BGl_sfunzf2Ginfozd2pluggedzd2inzf2zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3162));
		}

	}



/* sfun/Ginfo-plugged-in-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2pluggedzd2inzd2setz12z32zzglobaliza7e_ginfoza7
		(BgL_sfunz00_bglt BgL_oz00_73, obj_t BgL_vz00_74)
	{
		{	/* Globalize/ginfo.sch 240 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4754;

				{
					obj_t BgL_auxz00_4755;

					{	/* Globalize/ginfo.sch 240 */
						BgL_objectz00_bglt BgL_tmpz00_4756;

						BgL_tmpz00_4756 = ((BgL_objectz00_bglt) BgL_oz00_73);
						BgL_auxz00_4755 = BGL_OBJECT_WIDENING(BgL_tmpz00_4756);
					}
					BgL_auxz00_4754 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4755);
				}
				return
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4754))->
						BgL_pluggedzd2inzd2) = ((obj_t) BgL_vz00_74), BUNSPEC);
			}
		}

	}



/* &sfun/Ginfo-plugged-in-set! */
	obj_t
		BGl_z62sfunzf2Ginfozd2pluggedzd2inzd2setz12z50zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3163, obj_t BgL_oz00_3164, obj_t BgL_vz00_3165)
	{
		{	/* Globalize/ginfo.sch 240 */
			return
				BGl_sfunzf2Ginfozd2pluggedzd2inzd2setz12z32zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3164), BgL_vz00_3165);
		}

	}



/* sfun/Ginfo-integrated */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2integratedz20zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt
		BgL_oz00_75)
	{
		{	/* Globalize/ginfo.sch 241 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4763;

				{
					obj_t BgL_auxz00_4764;

					{	/* Globalize/ginfo.sch 241 */
						BgL_objectz00_bglt BgL_tmpz00_4765;

						BgL_tmpz00_4765 = ((BgL_objectz00_bglt) BgL_oz00_75);
						BgL_auxz00_4764 = BGL_OBJECT_WIDENING(BgL_tmpz00_4765);
					}
					BgL_auxz00_4763 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4764);
				}
				return
					(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4763))->
					BgL_integratedz00);
			}
		}

	}



/* &sfun/Ginfo-integrated */
	obj_t BGl_z62sfunzf2Ginfozd2integratedz42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3166, obj_t BgL_oz00_3167)
	{
		{	/* Globalize/ginfo.sch 241 */
			return
				BGl_sfunzf2Ginfozd2integratedz20zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3167));
		}

	}



/* sfun/Ginfo-integrated-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2integratedzd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_sfunz00_bglt BgL_oz00_76, obj_t BgL_vz00_77)
	{
		{	/* Globalize/ginfo.sch 242 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4772;

				{
					obj_t BgL_auxz00_4773;

					{	/* Globalize/ginfo.sch 242 */
						BgL_objectz00_bglt BgL_tmpz00_4774;

						BgL_tmpz00_4774 = ((BgL_objectz00_bglt) BgL_oz00_76);
						BgL_auxz00_4773 = BGL_OBJECT_WIDENING(BgL_tmpz00_4774);
					}
					BgL_auxz00_4772 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4773);
				}
				return
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4772))->
						BgL_integratedz00) = ((obj_t) BgL_vz00_77), BUNSPEC);
			}
		}

	}



/* &sfun/Ginfo-integrated-set! */
	obj_t BGl_z62sfunzf2Ginfozd2integratedzd2setz12z82zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3168, obj_t BgL_oz00_3169, obj_t BgL_vz00_3170)
	{
		{	/* Globalize/ginfo.sch 242 */
			return
				BGl_sfunzf2Ginfozd2integratedzd2setz12ze0zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3169), BgL_vz00_3170);
		}

	}



/* sfun/Ginfo-owner */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2ownerz20zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt
		BgL_oz00_78)
	{
		{	/* Globalize/ginfo.sch 243 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4781;

				{
					obj_t BgL_auxz00_4782;

					{	/* Globalize/ginfo.sch 243 */
						BgL_objectz00_bglt BgL_tmpz00_4783;

						BgL_tmpz00_4783 = ((BgL_objectz00_bglt) BgL_oz00_78);
						BgL_auxz00_4782 = BGL_OBJECT_WIDENING(BgL_tmpz00_4783);
					}
					BgL_auxz00_4781 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4782);
				}
				return
					(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4781))->BgL_ownerz00);
			}
		}

	}



/* &sfun/Ginfo-owner */
	obj_t BGl_z62sfunzf2Ginfozd2ownerz42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3171, obj_t BgL_oz00_3172)
	{
		{	/* Globalize/ginfo.sch 243 */
			return
				BGl_sfunzf2Ginfozd2ownerz20zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3172));
		}

	}



/* sfun/Ginfo-owner-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2ownerzd2setz12ze0zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt
		BgL_oz00_79, obj_t BgL_vz00_80)
	{
		{	/* Globalize/ginfo.sch 244 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4790;

				{
					obj_t BgL_auxz00_4791;

					{	/* Globalize/ginfo.sch 244 */
						BgL_objectz00_bglt BgL_tmpz00_4792;

						BgL_tmpz00_4792 = ((BgL_objectz00_bglt) BgL_oz00_79);
						BgL_auxz00_4791 = BGL_OBJECT_WIDENING(BgL_tmpz00_4792);
					}
					BgL_auxz00_4790 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4791);
				}
				return
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4790))->
						BgL_ownerz00) = ((obj_t) BgL_vz00_80), BUNSPEC);
			}
		}

	}



/* &sfun/Ginfo-owner-set! */
	obj_t BGl_z62sfunzf2Ginfozd2ownerzd2setz12z82zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3173, obj_t BgL_oz00_3174, obj_t BgL_vz00_3175)
	{
		{	/* Globalize/ginfo.sch 244 */
			return
				BGl_sfunzf2Ginfozd2ownerzd2setz12ze0zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3174), BgL_vz00_3175);
		}

	}



/* sfun/Ginfo-imark */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2imarkz20zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt
		BgL_oz00_81)
	{
		{	/* Globalize/ginfo.sch 245 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4799;

				{
					obj_t BgL_auxz00_4800;

					{	/* Globalize/ginfo.sch 245 */
						BgL_objectz00_bglt BgL_tmpz00_4801;

						BgL_tmpz00_4801 = ((BgL_objectz00_bglt) BgL_oz00_81);
						BgL_auxz00_4800 = BGL_OBJECT_WIDENING(BgL_tmpz00_4801);
					}
					BgL_auxz00_4799 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4800);
				}
				return
					(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4799))->BgL_imarkz00);
			}
		}

	}



/* &sfun/Ginfo-imark */
	obj_t BGl_z62sfunzf2Ginfozd2imarkz42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3176, obj_t BgL_oz00_3177)
	{
		{	/* Globalize/ginfo.sch 245 */
			return
				BGl_sfunzf2Ginfozd2imarkz20zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3177));
		}

	}



/* sfun/Ginfo-imark-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2imarkzd2setz12ze0zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt
		BgL_oz00_82, obj_t BgL_vz00_83)
	{
		{	/* Globalize/ginfo.sch 246 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4808;

				{
					obj_t BgL_auxz00_4809;

					{	/* Globalize/ginfo.sch 246 */
						BgL_objectz00_bglt BgL_tmpz00_4810;

						BgL_tmpz00_4810 = ((BgL_objectz00_bglt) BgL_oz00_82);
						BgL_auxz00_4809 = BGL_OBJECT_WIDENING(BgL_tmpz00_4810);
					}
					BgL_auxz00_4808 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4809);
				}
				return
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4808))->
						BgL_imarkz00) = ((obj_t) BgL_vz00_83), BUNSPEC);
			}
		}

	}



/* &sfun/Ginfo-imark-set! */
	obj_t BGl_z62sfunzf2Ginfozd2imarkzd2setz12z82zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3178, obj_t BgL_oz00_3179, obj_t BgL_vz00_3180)
	{
		{	/* Globalize/ginfo.sch 246 */
			return
				BGl_sfunzf2Ginfozd2imarkzd2setz12ze0zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3179), BgL_vz00_3180);
		}

	}



/* sfun/Ginfo-integrator */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2integratorz20zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt
		BgL_oz00_84)
	{
		{	/* Globalize/ginfo.sch 247 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4817;

				{
					obj_t BgL_auxz00_4818;

					{	/* Globalize/ginfo.sch 247 */
						BgL_objectz00_bglt BgL_tmpz00_4819;

						BgL_tmpz00_4819 = ((BgL_objectz00_bglt) BgL_oz00_84);
						BgL_auxz00_4818 = BGL_OBJECT_WIDENING(BgL_tmpz00_4819);
					}
					BgL_auxz00_4817 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4818);
				}
				return
					(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4817))->
					BgL_integratorz00);
			}
		}

	}



/* &sfun/Ginfo-integrator */
	obj_t BGl_z62sfunzf2Ginfozd2integratorz42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3181, obj_t BgL_oz00_3182)
	{
		{	/* Globalize/ginfo.sch 247 */
			return
				BGl_sfunzf2Ginfozd2integratorz20zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3182));
		}

	}



/* sfun/Ginfo-integrator-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2integratorzd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_sfunz00_bglt BgL_oz00_85, obj_t BgL_vz00_86)
	{
		{	/* Globalize/ginfo.sch 248 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4826;

				{
					obj_t BgL_auxz00_4827;

					{	/* Globalize/ginfo.sch 248 */
						BgL_objectz00_bglt BgL_tmpz00_4828;

						BgL_tmpz00_4828 = ((BgL_objectz00_bglt) BgL_oz00_85);
						BgL_auxz00_4827 = BGL_OBJECT_WIDENING(BgL_tmpz00_4828);
					}
					BgL_auxz00_4826 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4827);
				}
				return
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4826))->
						BgL_integratorz00) = ((obj_t) BgL_vz00_86), BUNSPEC);
			}
		}

	}



/* &sfun/Ginfo-integrator-set! */
	obj_t BGl_z62sfunzf2Ginfozd2integratorzd2setz12z82zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3183, obj_t BgL_oz00_3184, obj_t BgL_vz00_3185)
	{
		{	/* Globalize/ginfo.sch 248 */
			return
				BGl_sfunzf2Ginfozd2integratorzd2setz12ze0zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3184), BgL_vz00_3185);
		}

	}



/* sfun/Ginfo-efunctions */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2efunctionsz20zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt
		BgL_oz00_87)
	{
		{	/* Globalize/ginfo.sch 249 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4835;

				{
					obj_t BgL_auxz00_4836;

					{	/* Globalize/ginfo.sch 249 */
						BgL_objectz00_bglt BgL_tmpz00_4837;

						BgL_tmpz00_4837 = ((BgL_objectz00_bglt) BgL_oz00_87);
						BgL_auxz00_4836 = BGL_OBJECT_WIDENING(BgL_tmpz00_4837);
					}
					BgL_auxz00_4835 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4836);
				}
				return
					(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4835))->
					BgL_efunctionsz00);
			}
		}

	}



/* &sfun/Ginfo-efunctions */
	obj_t BGl_z62sfunzf2Ginfozd2efunctionsz42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3186, obj_t BgL_oz00_3187)
	{
		{	/* Globalize/ginfo.sch 249 */
			return
				BGl_sfunzf2Ginfozd2efunctionsz20zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3187));
		}

	}



/* sfun/Ginfo-efunctions-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2efunctionszd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_sfunz00_bglt BgL_oz00_88, obj_t BgL_vz00_89)
	{
		{	/* Globalize/ginfo.sch 250 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4844;

				{
					obj_t BgL_auxz00_4845;

					{	/* Globalize/ginfo.sch 250 */
						BgL_objectz00_bglt BgL_tmpz00_4846;

						BgL_tmpz00_4846 = ((BgL_objectz00_bglt) BgL_oz00_88);
						BgL_auxz00_4845 = BGL_OBJECT_WIDENING(BgL_tmpz00_4846);
					}
					BgL_auxz00_4844 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4845);
				}
				return
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4844))->
						BgL_efunctionsz00) = ((obj_t) BgL_vz00_89), BUNSPEC);
			}
		}

	}



/* &sfun/Ginfo-efunctions-set! */
	obj_t BGl_z62sfunzf2Ginfozd2efunctionszd2setz12z82zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3188, obj_t BgL_oz00_3189, obj_t BgL_vz00_3190)
	{
		{	/* Globalize/ginfo.sch 250 */
			return
				BGl_sfunzf2Ginfozd2efunctionszd2setz12ze0zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3189), BgL_vz00_3190);
		}

	}



/* sfun/Ginfo-cto* */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2ctoza2z82zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt
		BgL_oz00_90)
	{
		{	/* Globalize/ginfo.sch 251 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4853;

				{
					obj_t BgL_auxz00_4854;

					{	/* Globalize/ginfo.sch 251 */
						BgL_objectz00_bglt BgL_tmpz00_4855;

						BgL_tmpz00_4855 = ((BgL_objectz00_bglt) BgL_oz00_90);
						BgL_auxz00_4854 = BGL_OBJECT_WIDENING(BgL_tmpz00_4855);
					}
					BgL_auxz00_4853 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4854);
				}
				return
					(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4853))->
					BgL_ctoza2za2);
			}
		}

	}



/* &sfun/Ginfo-cto* */
	obj_t BGl_z62sfunzf2Ginfozd2ctoza2ze0zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3191, obj_t BgL_oz00_3192)
	{
		{	/* Globalize/ginfo.sch 251 */
			return
				BGl_sfunzf2Ginfozd2ctoza2z82zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3192));
		}

	}



/* sfun/Ginfo-cto*-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2ctoza2zd2setz12z42zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt
		BgL_oz00_91, obj_t BgL_vz00_92)
	{
		{	/* Globalize/ginfo.sch 252 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4862;

				{
					obj_t BgL_auxz00_4863;

					{	/* Globalize/ginfo.sch 252 */
						BgL_objectz00_bglt BgL_tmpz00_4864;

						BgL_tmpz00_4864 = ((BgL_objectz00_bglt) BgL_oz00_91);
						BgL_auxz00_4863 = BGL_OBJECT_WIDENING(BgL_tmpz00_4864);
					}
					BgL_auxz00_4862 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4863);
				}
				return
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4862))->
						BgL_ctoza2za2) = ((obj_t) BgL_vz00_92), BUNSPEC);
			}
		}

	}



/* &sfun/Ginfo-cto*-set! */
	obj_t BGl_z62sfunzf2Ginfozd2ctoza2zd2setz12z20zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3193, obj_t BgL_oz00_3194, obj_t BgL_vz00_3195)
	{
		{	/* Globalize/ginfo.sch 252 */
			return
				BGl_sfunzf2Ginfozd2ctoza2zd2setz12z42zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3194), BgL_vz00_3195);
		}

	}



/* sfun/Ginfo-cto */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2ctoz20zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt
		BgL_oz00_93)
	{
		{	/* Globalize/ginfo.sch 253 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4871;

				{
					obj_t BgL_auxz00_4872;

					{	/* Globalize/ginfo.sch 253 */
						BgL_objectz00_bglt BgL_tmpz00_4873;

						BgL_tmpz00_4873 = ((BgL_objectz00_bglt) BgL_oz00_93);
						BgL_auxz00_4872 = BGL_OBJECT_WIDENING(BgL_tmpz00_4873);
					}
					BgL_auxz00_4871 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4872);
				}
				return
					(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4871))->BgL_ctoz00);
			}
		}

	}



/* &sfun/Ginfo-cto */
	obj_t BGl_z62sfunzf2Ginfozd2ctoz42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3196, obj_t BgL_oz00_3197)
	{
		{	/* Globalize/ginfo.sch 253 */
			return
				BGl_sfunzf2Ginfozd2ctoz20zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3197));
		}

	}



/* sfun/Ginfo-cto-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2ctozd2setz12ze0zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt
		BgL_oz00_94, obj_t BgL_vz00_95)
	{
		{	/* Globalize/ginfo.sch 254 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4880;

				{
					obj_t BgL_auxz00_4881;

					{	/* Globalize/ginfo.sch 254 */
						BgL_objectz00_bglt BgL_tmpz00_4882;

						BgL_tmpz00_4882 = ((BgL_objectz00_bglt) BgL_oz00_94);
						BgL_auxz00_4881 = BGL_OBJECT_WIDENING(BgL_tmpz00_4882);
					}
					BgL_auxz00_4880 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4881);
				}
				return
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4880))->BgL_ctoz00) =
					((obj_t) BgL_vz00_95), BUNSPEC);
			}
		}

	}



/* &sfun/Ginfo-cto-set! */
	obj_t BGl_z62sfunzf2Ginfozd2ctozd2setz12z82zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3198, obj_t BgL_oz00_3199, obj_t BgL_vz00_3200)
	{
		{	/* Globalize/ginfo.sch 254 */
			return
				BGl_sfunzf2Ginfozd2ctozd2setz12ze0zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3199), BgL_vz00_3200);
		}

	}



/* sfun/Ginfo-cfrom* */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2cfromza2z82zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt
		BgL_oz00_96)
	{
		{	/* Globalize/ginfo.sch 255 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4889;

				{
					obj_t BgL_auxz00_4890;

					{	/* Globalize/ginfo.sch 255 */
						BgL_objectz00_bglt BgL_tmpz00_4891;

						BgL_tmpz00_4891 = ((BgL_objectz00_bglt) BgL_oz00_96);
						BgL_auxz00_4890 = BGL_OBJECT_WIDENING(BgL_tmpz00_4891);
					}
					BgL_auxz00_4889 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4890);
				}
				return
					(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4889))->
					BgL_cfromza2za2);
			}
		}

	}



/* &sfun/Ginfo-cfrom* */
	obj_t BGl_z62sfunzf2Ginfozd2cfromza2ze0zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3201, obj_t BgL_oz00_3202)
	{
		{	/* Globalize/ginfo.sch 255 */
			return
				BGl_sfunzf2Ginfozd2cfromza2z82zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3202));
		}

	}



/* sfun/Ginfo-cfrom*-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2cfromza2zd2setz12z42zzglobaliza7e_ginfoza7
		(BgL_sfunz00_bglt BgL_oz00_97, obj_t BgL_vz00_98)
	{
		{	/* Globalize/ginfo.sch 256 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4898;

				{
					obj_t BgL_auxz00_4899;

					{	/* Globalize/ginfo.sch 256 */
						BgL_objectz00_bglt BgL_tmpz00_4900;

						BgL_tmpz00_4900 = ((BgL_objectz00_bglt) BgL_oz00_97);
						BgL_auxz00_4899 = BGL_OBJECT_WIDENING(BgL_tmpz00_4900);
					}
					BgL_auxz00_4898 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4899);
				}
				return
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4898))->
						BgL_cfromza2za2) = ((obj_t) BgL_vz00_98), BUNSPEC);
			}
		}

	}



/* &sfun/Ginfo-cfrom*-set! */
	obj_t BGl_z62sfunzf2Ginfozd2cfromza2zd2setz12z20zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3203, obj_t BgL_oz00_3204, obj_t BgL_vz00_3205)
	{
		{	/* Globalize/ginfo.sch 256 */
			return
				BGl_sfunzf2Ginfozd2cfromza2zd2setz12z42zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3204), BgL_vz00_3205);
		}

	}



/* sfun/Ginfo-cfrom */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2cfromz20zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt
		BgL_oz00_99)
	{
		{	/* Globalize/ginfo.sch 257 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4907;

				{
					obj_t BgL_auxz00_4908;

					{	/* Globalize/ginfo.sch 257 */
						BgL_objectz00_bglt BgL_tmpz00_4909;

						BgL_tmpz00_4909 = ((BgL_objectz00_bglt) BgL_oz00_99);
						BgL_auxz00_4908 = BGL_OBJECT_WIDENING(BgL_tmpz00_4909);
					}
					BgL_auxz00_4907 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4908);
				}
				return
					(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4907))->BgL_cfromz00);
			}
		}

	}



/* &sfun/Ginfo-cfrom */
	obj_t BGl_z62sfunzf2Ginfozd2cfromz42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3206, obj_t BgL_oz00_3207)
	{
		{	/* Globalize/ginfo.sch 257 */
			return
				BGl_sfunzf2Ginfozd2cfromz20zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3207));
		}

	}



/* sfun/Ginfo-cfrom-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2cfromzd2setz12ze0zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt
		BgL_oz00_100, obj_t BgL_vz00_101)
	{
		{	/* Globalize/ginfo.sch 258 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4916;

				{
					obj_t BgL_auxz00_4917;

					{	/* Globalize/ginfo.sch 258 */
						BgL_objectz00_bglt BgL_tmpz00_4918;

						BgL_tmpz00_4918 = ((BgL_objectz00_bglt) BgL_oz00_100);
						BgL_auxz00_4917 = BGL_OBJECT_WIDENING(BgL_tmpz00_4918);
					}
					BgL_auxz00_4916 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4917);
				}
				return
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4916))->
						BgL_cfromz00) = ((obj_t) BgL_vz00_101), BUNSPEC);
			}
		}

	}



/* &sfun/Ginfo-cfrom-set! */
	obj_t BGl_z62sfunzf2Ginfozd2cfromzd2setz12z82zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3208, obj_t BgL_oz00_3209, obj_t BgL_vz00_3210)
	{
		{	/* Globalize/ginfo.sch 258 */
			return
				BGl_sfunzf2Ginfozd2cfromzd2setz12ze0zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3209), BgL_vz00_3210);
		}

	}



/* sfun/Ginfo-G? */
	BGL_EXPORTED_DEF bool_t
		BGl_sfunzf2Ginfozd2Gzf3zd3zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt
		BgL_oz00_102)
	{
		{	/* Globalize/ginfo.sch 259 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4925;

				{
					obj_t BgL_auxz00_4926;

					{	/* Globalize/ginfo.sch 259 */
						BgL_objectz00_bglt BgL_tmpz00_4927;

						BgL_tmpz00_4927 = ((BgL_objectz00_bglt) BgL_oz00_102);
						BgL_auxz00_4926 = BGL_OBJECT_WIDENING(BgL_tmpz00_4927);
					}
					BgL_auxz00_4925 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4926);
				}
				return
					(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4925))->BgL_gzf3zf3);
			}
		}

	}



/* &sfun/Ginfo-G? */
	obj_t BGl_z62sfunzf2Ginfozd2Gzf3zb1zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3211, obj_t BgL_oz00_3212)
	{
		{	/* Globalize/ginfo.sch 259 */
			return
				BBOOL(BGl_sfunzf2Ginfozd2Gzf3zd3zzglobaliza7e_ginfoza7(
					((BgL_sfunz00_bglt) BgL_oz00_3212)));
		}

	}



/* sfun/Ginfo-G?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2Gzf3zd2setz12z13zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt
		BgL_oz00_103, bool_t BgL_vz00_104)
	{
		{	/* Globalize/ginfo.sch 260 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4935;

				{
					obj_t BgL_auxz00_4936;

					{	/* Globalize/ginfo.sch 260 */
						BgL_objectz00_bglt BgL_tmpz00_4937;

						BgL_tmpz00_4937 = ((BgL_objectz00_bglt) BgL_oz00_103);
						BgL_auxz00_4936 = BGL_OBJECT_WIDENING(BgL_tmpz00_4937);
					}
					BgL_auxz00_4935 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4936);
				}
				return
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4935))->
						BgL_gzf3zf3) = ((bool_t) BgL_vz00_104), BUNSPEC);
			}
		}

	}



/* &sfun/Ginfo-G?-set! */
	obj_t BGl_z62sfunzf2Ginfozd2Gzf3zd2setz12z71zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3213, obj_t BgL_oz00_3214, obj_t BgL_vz00_3215)
	{
		{	/* Globalize/ginfo.sch 260 */
			return
				BGl_sfunzf2Ginfozd2Gzf3zd2setz12z13zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3214), CBOOL(BgL_vz00_3215));
		}

	}



/* sfun/Ginfo-stackable */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2stackablez20zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt
		BgL_oz00_105)
	{
		{	/* Globalize/ginfo.sch 261 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_105)))->BgL_stackablez00);
		}

	}



/* &sfun/Ginfo-stackable */
	obj_t BGl_z62sfunzf2Ginfozd2stackablez42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3216, obj_t BgL_oz00_3217)
	{
		{	/* Globalize/ginfo.sch 261 */
			return
				BGl_sfunzf2Ginfozd2stackablez20zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3217));
		}

	}



/* sfun/Ginfo-stackable-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2stackablezd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_sfunz00_bglt BgL_oz00_106, obj_t BgL_vz00_107)
	{
		{	/* Globalize/ginfo.sch 262 */
			return
				((((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt) BgL_oz00_106)))->BgL_stackablez00) =
				((obj_t) BgL_vz00_107), BUNSPEC);
		}

	}



/* &sfun/Ginfo-stackable-set! */
	obj_t BGl_z62sfunzf2Ginfozd2stackablezd2setz12z82zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3218, obj_t BgL_oz00_3219, obj_t BgL_vz00_3220)
	{
		{	/* Globalize/ginfo.sch 262 */
			return
				BGl_sfunzf2Ginfozd2stackablezd2setz12ze0zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3219), BgL_vz00_3220);
		}

	}



/* sfun/Ginfo-strength */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2strengthz20zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt
		BgL_oz00_108)
	{
		{	/* Globalize/ginfo.sch 263 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_108)))->BgL_strengthz00);
		}

	}



/* &sfun/Ginfo-strength */
	obj_t BGl_z62sfunzf2Ginfozd2strengthz42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3221, obj_t BgL_oz00_3222)
	{
		{	/* Globalize/ginfo.sch 263 */
			return
				BGl_sfunzf2Ginfozd2strengthz20zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3222));
		}

	}



/* sfun/Ginfo-strength-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2strengthzd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_sfunz00_bglt BgL_oz00_109, obj_t BgL_vz00_110)
	{
		{	/* Globalize/ginfo.sch 264 */
			return
				((((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt) BgL_oz00_109)))->BgL_strengthz00) =
				((obj_t) BgL_vz00_110), BUNSPEC);
		}

	}



/* &sfun/Ginfo-strength-set! */
	obj_t BGl_z62sfunzf2Ginfozd2strengthzd2setz12z82zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3223, obj_t BgL_oz00_3224, obj_t BgL_vz00_3225)
	{
		{	/* Globalize/ginfo.sch 264 */
			return
				BGl_sfunzf2Ginfozd2strengthzd2setz12ze0zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3224), BgL_vz00_3225);
		}

	}



/* sfun/Ginfo-the-closure-global */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2thezd2closurezd2globalz20zzglobaliza7e_ginfoza7
		(BgL_sfunz00_bglt BgL_oz00_111)
	{
		{	/* Globalize/ginfo.sch 265 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_111)))->BgL_thezd2closurezd2globalz00);
		}

	}



/* &sfun/Ginfo-the-closure-global */
	obj_t
		BGl_z62sfunzf2Ginfozd2thezd2closurezd2globalz42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3226, obj_t BgL_oz00_3227)
	{
		{	/* Globalize/ginfo.sch 265 */
			return
				BGl_sfunzf2Ginfozd2thezd2closurezd2globalz20zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3227));
		}

	}



/* sfun/Ginfo-the-closure-global-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2thezd2closurezd2globalzd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_sfunz00_bglt BgL_oz00_112, obj_t BgL_vz00_113)
	{
		{	/* Globalize/ginfo.sch 266 */
			return
				((((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt) BgL_oz00_112)))->
					BgL_thezd2closurezd2globalz00) = ((obj_t) BgL_vz00_113), BUNSPEC);
		}

	}



/* &sfun/Ginfo-the-closure-global-set! */
	obj_t
		BGl_z62sfunzf2Ginfozd2thezd2closurezd2globalzd2setz12z82zzglobaliza7e_ginfoza7
		(obj_t BgL_envz00_3228, obj_t BgL_oz00_3229, obj_t BgL_vz00_3230)
	{
		{	/* Globalize/ginfo.sch 266 */
			return
				BGl_sfunzf2Ginfozd2thezd2closurezd2globalzd2setz12ze0zzglobaliza7e_ginfoza7
				(((BgL_sfunz00_bglt) BgL_oz00_3229), BgL_vz00_3230);
		}

	}



/* sfun/Ginfo-keys */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2keysz20zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt
		BgL_oz00_114)
	{
		{	/* Globalize/ginfo.sch 267 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_114)))->BgL_keysz00);
		}

	}



/* &sfun/Ginfo-keys */
	obj_t BGl_z62sfunzf2Ginfozd2keysz42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3231, obj_t BgL_oz00_3232)
	{
		{	/* Globalize/ginfo.sch 267 */
			return
				BGl_sfunzf2Ginfozd2keysz20zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3232));
		}

	}



/* sfun/Ginfo-optionals */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2optionalsz20zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt
		BgL_oz00_117)
	{
		{	/* Globalize/ginfo.sch 269 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_117)))->BgL_optionalsz00);
		}

	}



/* &sfun/Ginfo-optionals */
	obj_t BGl_z62sfunzf2Ginfozd2optionalsz42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3233, obj_t BgL_oz00_3234)
	{
		{	/* Globalize/ginfo.sch 269 */
			return
				BGl_sfunzf2Ginfozd2optionalsz20zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3234));
		}

	}



/* sfun/Ginfo-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2locz20zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt
		BgL_oz00_120)
	{
		{	/* Globalize/ginfo.sch 271 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_120)))->BgL_locz00);
		}

	}



/* &sfun/Ginfo-loc */
	obj_t BGl_z62sfunzf2Ginfozd2locz42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3235, obj_t BgL_oz00_3236)
	{
		{	/* Globalize/ginfo.sch 271 */
			return
				BGl_sfunzf2Ginfozd2locz20zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3236));
		}

	}



/* sfun/Ginfo-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2loczd2setz12ze0zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt
		BgL_oz00_121, obj_t BgL_vz00_122)
	{
		{	/* Globalize/ginfo.sch 272 */
			return
				((((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt) BgL_oz00_121)))->BgL_locz00) =
				((obj_t) BgL_vz00_122), BUNSPEC);
		}

	}



/* &sfun/Ginfo-loc-set! */
	obj_t BGl_z62sfunzf2Ginfozd2loczd2setz12z82zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3237, obj_t BgL_oz00_3238, obj_t BgL_vz00_3239)
	{
		{	/* Globalize/ginfo.sch 272 */
			return
				BGl_sfunzf2Ginfozd2loczd2setz12ze0zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3238), BgL_vz00_3239);
		}

	}



/* sfun/Ginfo-dsssl-keywords */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2dssslzd2keywordszf2zzglobaliza7e_ginfoza7
		(BgL_sfunz00_bglt BgL_oz00_123)
	{
		{	/* Globalize/ginfo.sch 273 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_123)))->BgL_dssslzd2keywordszd2);
		}

	}



/* &sfun/Ginfo-dsssl-keywords */
	obj_t BGl_z62sfunzf2Ginfozd2dssslzd2keywordsz90zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3240, obj_t BgL_oz00_3241)
	{
		{	/* Globalize/ginfo.sch 273 */
			return
				BGl_sfunzf2Ginfozd2dssslzd2keywordszf2zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3241));
		}

	}



/* sfun/Ginfo-dsssl-keywords-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2dssslzd2keywordszd2setz12z32zzglobaliza7e_ginfoza7
		(BgL_sfunz00_bglt BgL_oz00_124, obj_t BgL_vz00_125)
	{
		{	/* Globalize/ginfo.sch 274 */
			return
				((((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt) BgL_oz00_124)))->BgL_dssslzd2keywordszd2) =
				((obj_t) BgL_vz00_125), BUNSPEC);
		}

	}



/* &sfun/Ginfo-dsssl-keywords-set! */
	obj_t
		BGl_z62sfunzf2Ginfozd2dssslzd2keywordszd2setz12z50zzglobaliza7e_ginfoza7
		(obj_t BgL_envz00_3242, obj_t BgL_oz00_3243, obj_t BgL_vz00_3244)
	{
		{	/* Globalize/ginfo.sch 274 */
			return
				BGl_sfunzf2Ginfozd2dssslzd2keywordszd2setz12z32zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3243), BgL_vz00_3244);
		}

	}



/* sfun/Ginfo-class */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2classz20zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt
		BgL_oz00_126)
	{
		{	/* Globalize/ginfo.sch 275 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_126)))->BgL_classz00);
		}

	}



/* &sfun/Ginfo-class */
	obj_t BGl_z62sfunzf2Ginfozd2classz42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3245, obj_t BgL_oz00_3246)
	{
		{	/* Globalize/ginfo.sch 275 */
			return
				BGl_sfunzf2Ginfozd2classz20zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3246));
		}

	}



/* sfun/Ginfo-class-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2classzd2setz12ze0zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt
		BgL_oz00_127, obj_t BgL_vz00_128)
	{
		{	/* Globalize/ginfo.sch 276 */
			return
				((((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt) BgL_oz00_127)))->BgL_classz00) =
				((obj_t) BgL_vz00_128), BUNSPEC);
		}

	}



/* &sfun/Ginfo-class-set! */
	obj_t BGl_z62sfunzf2Ginfozd2classzd2setz12z82zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3247, obj_t BgL_oz00_3248, obj_t BgL_vz00_3249)
	{
		{	/* Globalize/ginfo.sch 276 */
			return
				BGl_sfunzf2Ginfozd2classzd2setz12ze0zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3248), BgL_vz00_3249);
		}

	}



/* sfun/Ginfo-body */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2bodyz20zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt
		BgL_oz00_129)
	{
		{	/* Globalize/ginfo.sch 277 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_129)))->BgL_bodyz00);
		}

	}



/* &sfun/Ginfo-body */
	obj_t BGl_z62sfunzf2Ginfozd2bodyz42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3250, obj_t BgL_oz00_3251)
	{
		{	/* Globalize/ginfo.sch 277 */
			return
				BGl_sfunzf2Ginfozd2bodyz20zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3251));
		}

	}



/* sfun/Ginfo-body-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2bodyzd2setz12ze0zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt
		BgL_oz00_130, obj_t BgL_vz00_131)
	{
		{	/* Globalize/ginfo.sch 278 */
			return
				((((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt) BgL_oz00_130)))->BgL_bodyz00) =
				((obj_t) BgL_vz00_131), BUNSPEC);
		}

	}



/* &sfun/Ginfo-body-set! */
	obj_t BGl_z62sfunzf2Ginfozd2bodyzd2setz12z82zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3252, obj_t BgL_oz00_3253, obj_t BgL_vz00_3254)
	{
		{	/* Globalize/ginfo.sch 278 */
			return
				BGl_sfunzf2Ginfozd2bodyzd2setz12ze0zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3253), BgL_vz00_3254);
		}

	}



/* sfun/Ginfo-args-name */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2argszd2namezf2zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt
		BgL_oz00_132)
	{
		{	/* Globalize/ginfo.sch 279 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_132)))->BgL_argszd2namezd2);
		}

	}



/* &sfun/Ginfo-args-name */
	obj_t BGl_z62sfunzf2Ginfozd2argszd2namez90zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3255, obj_t BgL_oz00_3256)
	{
		{	/* Globalize/ginfo.sch 279 */
			return
				BGl_sfunzf2Ginfozd2argszd2namezf2zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3256));
		}

	}



/* sfun/Ginfo-args */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2argsz20zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt
		BgL_oz00_135)
	{
		{	/* Globalize/ginfo.sch 281 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_135)))->BgL_argsz00);
		}

	}



/* &sfun/Ginfo-args */
	obj_t BGl_z62sfunzf2Ginfozd2argsz42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3257, obj_t BgL_oz00_3258)
	{
		{	/* Globalize/ginfo.sch 281 */
			return
				BGl_sfunzf2Ginfozd2argsz20zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3258));
		}

	}



/* sfun/Ginfo-args-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2argszd2setz12ze0zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt
		BgL_oz00_136, obj_t BgL_vz00_137)
	{
		{	/* Globalize/ginfo.sch 282 */
			return
				((((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt) BgL_oz00_136)))->BgL_argsz00) =
				((obj_t) BgL_vz00_137), BUNSPEC);
		}

	}



/* &sfun/Ginfo-args-set! */
	obj_t BGl_z62sfunzf2Ginfozd2argszd2setz12z82zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3259, obj_t BgL_oz00_3260, obj_t BgL_vz00_3261)
	{
		{	/* Globalize/ginfo.sch 282 */
			return
				BGl_sfunzf2Ginfozd2argszd2setz12ze0zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3260), BgL_vz00_3261);
		}

	}



/* sfun/Ginfo-property */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2propertyz20zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt
		BgL_oz00_138)
	{
		{	/* Globalize/ginfo.sch 283 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_138)))->BgL_propertyz00);
		}

	}



/* &sfun/Ginfo-property */
	obj_t BGl_z62sfunzf2Ginfozd2propertyz42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3262, obj_t BgL_oz00_3263)
	{
		{	/* Globalize/ginfo.sch 283 */
			return
				BGl_sfunzf2Ginfozd2propertyz20zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3263));
		}

	}



/* sfun/Ginfo-property-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2propertyzd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_sfunz00_bglt BgL_oz00_139, obj_t BgL_vz00_140)
	{
		{	/* Globalize/ginfo.sch 284 */
			return
				((((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt) BgL_oz00_139)))->BgL_propertyz00) =
				((obj_t) BgL_vz00_140), BUNSPEC);
		}

	}



/* &sfun/Ginfo-property-set! */
	obj_t BGl_z62sfunzf2Ginfozd2propertyzd2setz12z82zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3264, obj_t BgL_oz00_3265, obj_t BgL_vz00_3266)
	{
		{	/* Globalize/ginfo.sch 284 */
			return
				BGl_sfunzf2Ginfozd2propertyzd2setz12ze0zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3265), BgL_vz00_3266);
		}

	}



/* sfun/Ginfo-args-noescape */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2argszd2noescapezf2zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt
		BgL_oz00_141)
	{
		{	/* Globalize/ginfo.sch 285 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_141)))->BgL_argszd2noescapezd2);
		}

	}



/* &sfun/Ginfo-args-noescape */
	obj_t BGl_z62sfunzf2Ginfozd2argszd2noescapez90zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3267, obj_t BgL_oz00_3268)
	{
		{	/* Globalize/ginfo.sch 285 */
			return
				BGl_sfunzf2Ginfozd2argszd2noescapezf2zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3268));
		}

	}



/* sfun/Ginfo-args-noescape-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2argszd2noescapezd2setz12z32zzglobaliza7e_ginfoza7
		(BgL_sfunz00_bglt BgL_oz00_142, obj_t BgL_vz00_143)
	{
		{	/* Globalize/ginfo.sch 286 */
			return
				((((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt) BgL_oz00_142)))->BgL_argszd2noescapezd2) =
				((obj_t) BgL_vz00_143), BUNSPEC);
		}

	}



/* &sfun/Ginfo-args-noescape-set! */
	obj_t
		BGl_z62sfunzf2Ginfozd2argszd2noescapezd2setz12z50zzglobaliza7e_ginfoza7
		(obj_t BgL_envz00_3269, obj_t BgL_oz00_3270, obj_t BgL_vz00_3271)
	{
		{	/* Globalize/ginfo.sch 286 */
			return
				BGl_sfunzf2Ginfozd2argszd2noescapezd2setz12z32zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3270), BgL_vz00_3271);
		}

	}



/* sfun/Ginfo-failsafe */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2failsafez20zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt
		BgL_oz00_144)
	{
		{	/* Globalize/ginfo.sch 287 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_144)))->BgL_failsafez00);
		}

	}



/* &sfun/Ginfo-failsafe */
	obj_t BGl_z62sfunzf2Ginfozd2failsafez42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3272, obj_t BgL_oz00_3273)
	{
		{	/* Globalize/ginfo.sch 287 */
			return
				BGl_sfunzf2Ginfozd2failsafez20zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3273));
		}

	}



/* sfun/Ginfo-failsafe-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2failsafezd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_sfunz00_bglt BgL_oz00_145, obj_t BgL_vz00_146)
	{
		{	/* Globalize/ginfo.sch 288 */
			return
				((((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt) BgL_oz00_145)))->BgL_failsafez00) =
				((obj_t) BgL_vz00_146), BUNSPEC);
		}

	}



/* &sfun/Ginfo-failsafe-set! */
	obj_t BGl_z62sfunzf2Ginfozd2failsafezd2setz12z82zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3274, obj_t BgL_oz00_3275, obj_t BgL_vz00_3276)
	{
		{	/* Globalize/ginfo.sch 288 */
			return
				BGl_sfunzf2Ginfozd2failsafezd2setz12ze0zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3275), BgL_vz00_3276);
		}

	}



/* sfun/Ginfo-effect */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2effectz20zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt
		BgL_oz00_147)
	{
		{	/* Globalize/ginfo.sch 289 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_147)))->BgL_effectz00);
		}

	}



/* &sfun/Ginfo-effect */
	obj_t BGl_z62sfunzf2Ginfozd2effectz42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3277, obj_t BgL_oz00_3278)
	{
		{	/* Globalize/ginfo.sch 289 */
			return
				BGl_sfunzf2Ginfozd2effectz20zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3278));
		}

	}



/* sfun/Ginfo-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2effectzd2setz12ze0zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt
		BgL_oz00_148, obj_t BgL_vz00_149)
	{
		{	/* Globalize/ginfo.sch 290 */
			return
				((((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt) BgL_oz00_148)))->BgL_effectz00) =
				((obj_t) BgL_vz00_149), BUNSPEC);
		}

	}



/* &sfun/Ginfo-effect-set! */
	obj_t BGl_z62sfunzf2Ginfozd2effectzd2setz12z82zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3279, obj_t BgL_oz00_3280, obj_t BgL_vz00_3281)
	{
		{	/* Globalize/ginfo.sch 290 */
			return
				BGl_sfunzf2Ginfozd2effectzd2setz12ze0zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3280), BgL_vz00_3281);
		}

	}



/* sfun/Ginfo-the-closure */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2thezd2closurezf2zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt
		BgL_oz00_150)
	{
		{	/* Globalize/ginfo.sch 291 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_150)))->BgL_thezd2closurezd2);
		}

	}



/* &sfun/Ginfo-the-closure */
	obj_t BGl_z62sfunzf2Ginfozd2thezd2closurez90zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3282, obj_t BgL_oz00_3283)
	{
		{	/* Globalize/ginfo.sch 291 */
			return
				BGl_sfunzf2Ginfozd2thezd2closurezf2zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3283));
		}

	}



/* sfun/Ginfo-the-closure-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2thezd2closurezd2setz12z32zzglobaliza7e_ginfoza7
		(BgL_sfunz00_bglt BgL_oz00_151, obj_t BgL_vz00_152)
	{
		{	/* Globalize/ginfo.sch 292 */
			return
				((((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt) BgL_oz00_151)))->BgL_thezd2closurezd2) =
				((obj_t) BgL_vz00_152), BUNSPEC);
		}

	}



/* &sfun/Ginfo-the-closure-set! */
	obj_t
		BGl_z62sfunzf2Ginfozd2thezd2closurezd2setz12z50zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3284, obj_t BgL_oz00_3285, obj_t BgL_vz00_3286)
	{
		{	/* Globalize/ginfo.sch 292 */
			return
				BGl_sfunzf2Ginfozd2thezd2closurezd2setz12z32zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3285), BgL_vz00_3286);
		}

	}



/* sfun/Ginfo-top? */
	BGL_EXPORTED_DEF bool_t
		BGl_sfunzf2Ginfozd2topzf3zd3zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt
		BgL_oz00_153)
	{
		{	/* Globalize/ginfo.sch 293 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_153)))->BgL_topzf3zf3);
		}

	}



/* &sfun/Ginfo-top? */
	obj_t BGl_z62sfunzf2Ginfozd2topzf3zb1zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3287, obj_t BgL_oz00_3288)
	{
		{	/* Globalize/ginfo.sch 293 */
			return
				BBOOL(BGl_sfunzf2Ginfozd2topzf3zd3zzglobaliza7e_ginfoza7(
					((BgL_sfunz00_bglt) BgL_oz00_3288)));
		}

	}



/* sfun/Ginfo-top?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2topzf3zd2setz12z13zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt
		BgL_oz00_154, bool_t BgL_vz00_155)
	{
		{	/* Globalize/ginfo.sch 294 */
			return
				((((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt) BgL_oz00_154)))->BgL_topzf3zf3) =
				((bool_t) BgL_vz00_155), BUNSPEC);
		}

	}



/* &sfun/Ginfo-top?-set! */
	obj_t BGl_z62sfunzf2Ginfozd2topzf3zd2setz12z71zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3289, obj_t BgL_oz00_3290, obj_t BgL_vz00_3291)
	{
		{	/* Globalize/ginfo.sch 294 */
			return
				BGl_sfunzf2Ginfozd2topzf3zd2setz12z13zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3290), CBOOL(BgL_vz00_3291));
		}

	}



/* sfun/Ginfo-stack-allocator */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2stackzd2allocatorzf2zzglobaliza7e_ginfoza7
		(BgL_sfunz00_bglt BgL_oz00_156)
	{
		{	/* Globalize/ginfo.sch 295 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_156)))->BgL_stackzd2allocatorzd2);
		}

	}



/* &sfun/Ginfo-stack-allocator */
	obj_t BGl_z62sfunzf2Ginfozd2stackzd2allocatorz90zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3292, obj_t BgL_oz00_3293)
	{
		{	/* Globalize/ginfo.sch 295 */
			return
				BGl_sfunzf2Ginfozd2stackzd2allocatorzf2zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3293));
		}

	}



/* sfun/Ginfo-stack-allocator-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2stackzd2allocatorzd2setz12z32zzglobaliza7e_ginfoza7
		(BgL_sfunz00_bglt BgL_oz00_157, obj_t BgL_vz00_158)
	{
		{	/* Globalize/ginfo.sch 296 */
			return
				((((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt) BgL_oz00_157)))->BgL_stackzd2allocatorzd2) =
				((obj_t) BgL_vz00_158), BUNSPEC);
		}

	}



/* &sfun/Ginfo-stack-allocator-set! */
	obj_t
		BGl_z62sfunzf2Ginfozd2stackzd2allocatorzd2setz12z50zzglobaliza7e_ginfoza7
		(obj_t BgL_envz00_3294, obj_t BgL_oz00_3295, obj_t BgL_vz00_3296)
	{
		{	/* Globalize/ginfo.sch 296 */
			return
				BGl_sfunzf2Ginfozd2stackzd2allocatorzd2setz12z32zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3295), BgL_vz00_3296);
		}

	}



/* sfun/Ginfo-predicate-of */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2predicatezd2ofzf2zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt
		BgL_oz00_159)
	{
		{	/* Globalize/ginfo.sch 297 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_159)))->BgL_predicatezd2ofzd2);
		}

	}



/* &sfun/Ginfo-predicate-of */
	obj_t BGl_z62sfunzf2Ginfozd2predicatezd2ofz90zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3297, obj_t BgL_oz00_3298)
	{
		{	/* Globalize/ginfo.sch 297 */
			return
				BGl_sfunzf2Ginfozd2predicatezd2ofzf2zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3298));
		}

	}



/* sfun/Ginfo-predicate-of-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2predicatezd2ofzd2setz12z32zzglobaliza7e_ginfoza7
		(BgL_sfunz00_bglt BgL_oz00_160, obj_t BgL_vz00_161)
	{
		{	/* Globalize/ginfo.sch 298 */
			return
				((((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt) BgL_oz00_160)))->BgL_predicatezd2ofzd2) =
				((obj_t) BgL_vz00_161), BUNSPEC);
		}

	}



/* &sfun/Ginfo-predicate-of-set! */
	obj_t
		BGl_z62sfunzf2Ginfozd2predicatezd2ofzd2setz12z50zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3299, obj_t BgL_oz00_3300, obj_t BgL_vz00_3301)
	{
		{	/* Globalize/ginfo.sch 298 */
			return
				BGl_sfunzf2Ginfozd2predicatezd2ofzd2setz12z32zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3300), BgL_vz00_3301);
		}

	}



/* sfun/Ginfo-side-effect */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2sidezd2effectzf2zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt
		BgL_oz00_162)
	{
		{	/* Globalize/ginfo.sch 299 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_162)))->BgL_sidezd2effectzd2);
		}

	}



/* &sfun/Ginfo-side-effect */
	obj_t BGl_z62sfunzf2Ginfozd2sidezd2effectz90zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3302, obj_t BgL_oz00_3303)
	{
		{	/* Globalize/ginfo.sch 299 */
			return
				BGl_sfunzf2Ginfozd2sidezd2effectzf2zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3303));
		}

	}



/* sfun/Ginfo-side-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Ginfozd2sidezd2effectzd2setz12z32zzglobaliza7e_ginfoza7
		(BgL_sfunz00_bglt BgL_oz00_163, obj_t BgL_vz00_164)
	{
		{	/* Globalize/ginfo.sch 300 */
			return
				((((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt) BgL_oz00_163)))->BgL_sidezd2effectzd2) =
				((obj_t) BgL_vz00_164), BUNSPEC);
		}

	}



/* &sfun/Ginfo-side-effect-set! */
	obj_t
		BGl_z62sfunzf2Ginfozd2sidezd2effectzd2setz12z50zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3304, obj_t BgL_oz00_3305, obj_t BgL_vz00_3306)
	{
		{	/* Globalize/ginfo.sch 300 */
			return
				BGl_sfunzf2Ginfozd2sidezd2effectzd2setz12z32zzglobaliza7e_ginfoza7(
				((BgL_sfunz00_bglt) BgL_oz00_3305), BgL_vz00_3306);
		}

	}



/* sfun/Ginfo-arity */
	BGL_EXPORTED_DEF long
		BGl_sfunzf2Ginfozd2arityz20zzglobaliza7e_ginfoza7(BgL_sfunz00_bglt
		BgL_oz00_165)
	{
		{	/* Globalize/ginfo.sch 301 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_165)))->BgL_arityz00);
		}

	}



/* &sfun/Ginfo-arity */
	obj_t BGl_z62sfunzf2Ginfozd2arityz42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3307, obj_t BgL_oz00_3308)
	{
		{	/* Globalize/ginfo.sch 301 */
			return
				BINT(BGl_sfunzf2Ginfozd2arityz20zzglobaliza7e_ginfoza7(
					((BgL_sfunz00_bglt) BgL_oz00_3308)));
		}

	}



/* make-svar/Ginfo */
	BGL_EXPORTED_DEF BgL_svarz00_bglt
		BGl_makezd2svarzf2Ginfoz20zzglobaliza7e_ginfoza7(obj_t BgL_loc1264z00_168,
		bool_t BgL_kapturedzf31265zf3_169, long BgL_freezd2mark1266zd2_170,
		long BgL_mark1267z00_171, bool_t BgL_celledzf31268zf3_172,
		bool_t BgL_stackable1269z00_173)
	{
		{	/* Globalize/ginfo.sch 305 */
			{	/* Globalize/ginfo.sch 305 */
				BgL_svarz00_bglt BgL_new1225z00_4059;

				{	/* Globalize/ginfo.sch 305 */
					BgL_svarz00_bglt BgL_tmp1223z00_4060;
					BgL_svarzf2ginfozf2_bglt BgL_wide1224z00_4061;

					{
						BgL_svarz00_bglt BgL_auxz00_5100;

						{	/* Globalize/ginfo.sch 305 */
							BgL_svarz00_bglt BgL_new1222z00_4062;

							BgL_new1222z00_4062 =
								((BgL_svarz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_svarz00_bgl))));
							{	/* Globalize/ginfo.sch 305 */
								long BgL_arg1422z00_4063;

								{	/* Globalize/ginfo.sch 305 */
									long BgL_res2069z00_4064;

									BgL_res2069z00_4064 =
										BGL_CLASS_INDEX(BGl_svarz00zzast_varz00);
									BgL_arg1422z00_4063 = BgL_res2069z00_4064;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1222z00_4062),
									BgL_arg1422z00_4063);
							}
							{	/* Globalize/ginfo.sch 305 */
								BgL_objectz00_bglt BgL_tmpz00_5105;

								BgL_tmpz00_5105 = ((BgL_objectz00_bglt) BgL_new1222z00_4062);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5105, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1222z00_4062);
							BgL_auxz00_5100 = BgL_new1222z00_4062;
						}
						BgL_tmp1223z00_4060 = ((BgL_svarz00_bglt) BgL_auxz00_5100);
					}
					BgL_wide1224z00_4061 =
						((BgL_svarzf2ginfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_svarzf2ginfozf2_bgl))));
					{	/* Globalize/ginfo.sch 305 */
						obj_t BgL_auxz00_5113;
						BgL_objectz00_bglt BgL_tmpz00_5111;

						BgL_auxz00_5113 = ((obj_t) BgL_wide1224z00_4061);
						BgL_tmpz00_5111 = ((BgL_objectz00_bglt) BgL_tmp1223z00_4060);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5111, BgL_auxz00_5113);
					}
					((BgL_objectz00_bglt) BgL_tmp1223z00_4060);
					{	/* Globalize/ginfo.sch 305 */
						long BgL_arg1421z00_4065;

						{	/* Globalize/ginfo.sch 305 */
							long BgL_res2070z00_4066;

							BgL_res2070z00_4066 =
								BGL_CLASS_INDEX(BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7);
							BgL_arg1421z00_4065 = BgL_res2070z00_4066;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1223z00_4060), BgL_arg1421z00_4065);
					}
					BgL_new1225z00_4059 = ((BgL_svarz00_bglt) BgL_tmp1223z00_4060);
				}
				((((BgL_svarz00_bglt) COBJECT(
								((BgL_svarz00_bglt) BgL_new1225z00_4059)))->BgL_locz00) =
					((obj_t) BgL_loc1264z00_168), BUNSPEC);
				{
					BgL_svarzf2ginfozf2_bglt BgL_auxz00_5123;

					{
						obj_t BgL_auxz00_5124;

						{	/* Globalize/ginfo.sch 305 */
							BgL_objectz00_bglt BgL_tmpz00_5125;

							BgL_tmpz00_5125 = ((BgL_objectz00_bglt) BgL_new1225z00_4059);
							BgL_auxz00_5124 = BGL_OBJECT_WIDENING(BgL_tmpz00_5125);
						}
						BgL_auxz00_5123 = ((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_5124);
					}
					((((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_5123))->
							BgL_kapturedzf3zf3) =
						((bool_t) BgL_kapturedzf31265zf3_169), BUNSPEC);
				}
				{
					BgL_svarzf2ginfozf2_bglt BgL_auxz00_5130;

					{
						obj_t BgL_auxz00_5131;

						{	/* Globalize/ginfo.sch 305 */
							BgL_objectz00_bglt BgL_tmpz00_5132;

							BgL_tmpz00_5132 = ((BgL_objectz00_bglt) BgL_new1225z00_4059);
							BgL_auxz00_5131 = BGL_OBJECT_WIDENING(BgL_tmpz00_5132);
						}
						BgL_auxz00_5130 = ((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_5131);
					}
					((((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_5130))->
							BgL_freezd2markzd2) =
						((long) BgL_freezd2mark1266zd2_170), BUNSPEC);
				}
				{
					BgL_svarzf2ginfozf2_bglt BgL_auxz00_5137;

					{
						obj_t BgL_auxz00_5138;

						{	/* Globalize/ginfo.sch 305 */
							BgL_objectz00_bglt BgL_tmpz00_5139;

							BgL_tmpz00_5139 = ((BgL_objectz00_bglt) BgL_new1225z00_4059);
							BgL_auxz00_5138 = BGL_OBJECT_WIDENING(BgL_tmpz00_5139);
						}
						BgL_auxz00_5137 = ((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_5138);
					}
					((((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_5137))->
							BgL_markz00) = ((long) BgL_mark1267z00_171), BUNSPEC);
				}
				{
					BgL_svarzf2ginfozf2_bglt BgL_auxz00_5144;

					{
						obj_t BgL_auxz00_5145;

						{	/* Globalize/ginfo.sch 305 */
							BgL_objectz00_bglt BgL_tmpz00_5146;

							BgL_tmpz00_5146 = ((BgL_objectz00_bglt) BgL_new1225z00_4059);
							BgL_auxz00_5145 = BGL_OBJECT_WIDENING(BgL_tmpz00_5146);
						}
						BgL_auxz00_5144 = ((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_5145);
					}
					((((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_5144))->
							BgL_celledzf3zf3) = ((bool_t) BgL_celledzf31268zf3_172), BUNSPEC);
				}
				{
					BgL_svarzf2ginfozf2_bglt BgL_auxz00_5151;

					{
						obj_t BgL_auxz00_5152;

						{	/* Globalize/ginfo.sch 305 */
							BgL_objectz00_bglt BgL_tmpz00_5153;

							BgL_tmpz00_5153 = ((BgL_objectz00_bglt) BgL_new1225z00_4059);
							BgL_auxz00_5152 = BGL_OBJECT_WIDENING(BgL_tmpz00_5153);
						}
						BgL_auxz00_5151 = ((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_5152);
					}
					((((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_5151))->
							BgL_stackablez00) = ((bool_t) BgL_stackable1269z00_173), BUNSPEC);
				}
				return BgL_new1225z00_4059;
			}
		}

	}



/* &make-svar/Ginfo */
	BgL_svarz00_bglt BGl_z62makezd2svarzf2Ginfoz42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3309, obj_t BgL_loc1264z00_3310,
		obj_t BgL_kapturedzf31265zf3_3311, obj_t BgL_freezd2mark1266zd2_3312,
		obj_t BgL_mark1267z00_3313, obj_t BgL_celledzf31268zf3_3314,
		obj_t BgL_stackable1269z00_3315)
	{
		{	/* Globalize/ginfo.sch 305 */
			return
				BGl_makezd2svarzf2Ginfoz20zzglobaliza7e_ginfoza7(BgL_loc1264z00_3310,
				CBOOL(BgL_kapturedzf31265zf3_3311),
				(long) CINT(BgL_freezd2mark1266zd2_3312),
				(long) CINT(BgL_mark1267z00_3313),
				CBOOL(BgL_celledzf31268zf3_3314), CBOOL(BgL_stackable1269z00_3315));
		}

	}



/* svar/Ginfo? */
	BGL_EXPORTED_DEF bool_t BGl_svarzf2Ginfozf3z01zzglobaliza7e_ginfoza7(obj_t
		BgL_objz00_174)
	{
		{	/* Globalize/ginfo.sch 306 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_174,
				BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7);
		}

	}



/* &svar/Ginfo? */
	obj_t BGl_z62svarzf2Ginfozf3z63zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3316,
		obj_t BgL_objz00_3317)
	{
		{	/* Globalize/ginfo.sch 306 */
			return
				BBOOL(BGl_svarzf2Ginfozf3z01zzglobaliza7e_ginfoza7(BgL_objz00_3317));
		}

	}



/* svar/Ginfo-nil */
	BGL_EXPORTED_DEF BgL_svarz00_bglt
		BGl_svarzf2Ginfozd2nilz20zzglobaliza7e_ginfoza7()
	{
		{	/* Globalize/ginfo.sch 307 */
			{	/* Globalize/ginfo.sch 307 */
				obj_t BgL_classz00_2646;

				BgL_classz00_2646 = BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7;
				{	/* Globalize/ginfo.sch 307 */
					obj_t BgL__ortest_1106z00_2647;

					BgL__ortest_1106z00_2647 = BGL_CLASS_NIL(BgL_classz00_2646);
					if (CBOOL(BgL__ortest_1106z00_2647))
						{	/* Globalize/ginfo.sch 307 */
							return ((BgL_svarz00_bglt) BgL__ortest_1106z00_2647);
						}
					else
						{	/* Globalize/ginfo.sch 307 */
							return
								((BgL_svarz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_2646));
						}
				}
			}
		}

	}



/* &svar/Ginfo-nil */
	BgL_svarz00_bglt BGl_z62svarzf2Ginfozd2nilz42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3318)
	{
		{	/* Globalize/ginfo.sch 307 */
			return BGl_svarzf2Ginfozd2nilz20zzglobaliza7e_ginfoza7();
		}

	}



/* svar/Ginfo-stackable */
	BGL_EXPORTED_DEF bool_t
		BGl_svarzf2Ginfozd2stackablez20zzglobaliza7e_ginfoza7(BgL_svarz00_bglt
		BgL_oz00_175)
	{
		{	/* Globalize/ginfo.sch 308 */
			{
				BgL_svarzf2ginfozf2_bglt BgL_auxz00_5174;

				{
					obj_t BgL_auxz00_5175;

					{	/* Globalize/ginfo.sch 308 */
						BgL_objectz00_bglt BgL_tmpz00_5176;

						BgL_tmpz00_5176 = ((BgL_objectz00_bglt) BgL_oz00_175);
						BgL_auxz00_5175 = BGL_OBJECT_WIDENING(BgL_tmpz00_5176);
					}
					BgL_auxz00_5174 = ((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_5175);
				}
				return
					(((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_5174))->
					BgL_stackablez00);
			}
		}

	}



/* &svar/Ginfo-stackable */
	obj_t BGl_z62svarzf2Ginfozd2stackablez42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3319, obj_t BgL_oz00_3320)
	{
		{	/* Globalize/ginfo.sch 308 */
			return
				BBOOL(BGl_svarzf2Ginfozd2stackablez20zzglobaliza7e_ginfoza7(
					((BgL_svarz00_bglt) BgL_oz00_3320)));
		}

	}



/* svar/Ginfo-stackable-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_svarzf2Ginfozd2stackablezd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_svarz00_bglt BgL_oz00_176, bool_t BgL_vz00_177)
	{
		{	/* Globalize/ginfo.sch 309 */
			{
				BgL_svarzf2ginfozf2_bglt BgL_auxz00_5184;

				{
					obj_t BgL_auxz00_5185;

					{	/* Globalize/ginfo.sch 309 */
						BgL_objectz00_bglt BgL_tmpz00_5186;

						BgL_tmpz00_5186 = ((BgL_objectz00_bglt) BgL_oz00_176);
						BgL_auxz00_5185 = BGL_OBJECT_WIDENING(BgL_tmpz00_5186);
					}
					BgL_auxz00_5184 = ((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_5185);
				}
				return
					((((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_5184))->
						BgL_stackablez00) = ((bool_t) BgL_vz00_177), BUNSPEC);
			}
		}

	}



/* &svar/Ginfo-stackable-set! */
	obj_t BGl_z62svarzf2Ginfozd2stackablezd2setz12z82zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3321, obj_t BgL_oz00_3322, obj_t BgL_vz00_3323)
	{
		{	/* Globalize/ginfo.sch 309 */
			return
				BGl_svarzf2Ginfozd2stackablezd2setz12ze0zzglobaliza7e_ginfoza7(
				((BgL_svarz00_bglt) BgL_oz00_3322), CBOOL(BgL_vz00_3323));
		}

	}



/* svar/Ginfo-celled? */
	BGL_EXPORTED_DEF bool_t
		BGl_svarzf2Ginfozd2celledzf3zd3zzglobaliza7e_ginfoza7(BgL_svarz00_bglt
		BgL_oz00_178)
	{
		{	/* Globalize/ginfo.sch 310 */
			{
				BgL_svarzf2ginfozf2_bglt BgL_auxz00_5194;

				{
					obj_t BgL_auxz00_5195;

					{	/* Globalize/ginfo.sch 310 */
						BgL_objectz00_bglt BgL_tmpz00_5196;

						BgL_tmpz00_5196 = ((BgL_objectz00_bglt) BgL_oz00_178);
						BgL_auxz00_5195 = BGL_OBJECT_WIDENING(BgL_tmpz00_5196);
					}
					BgL_auxz00_5194 = ((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_5195);
				}
				return
					(((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_5194))->
					BgL_celledzf3zf3);
			}
		}

	}



/* &svar/Ginfo-celled? */
	obj_t BGl_z62svarzf2Ginfozd2celledzf3zb1zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3324, obj_t BgL_oz00_3325)
	{
		{	/* Globalize/ginfo.sch 310 */
			return
				BBOOL(BGl_svarzf2Ginfozd2celledzf3zd3zzglobaliza7e_ginfoza7(
					((BgL_svarz00_bglt) BgL_oz00_3325)));
		}

	}



/* svar/Ginfo-celled?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_svarzf2Ginfozd2celledzf3zd2setz12z13zzglobaliza7e_ginfoza7
		(BgL_svarz00_bglt BgL_oz00_179, bool_t BgL_vz00_180)
	{
		{	/* Globalize/ginfo.sch 311 */
			{
				BgL_svarzf2ginfozf2_bglt BgL_auxz00_5204;

				{
					obj_t BgL_auxz00_5205;

					{	/* Globalize/ginfo.sch 311 */
						BgL_objectz00_bglt BgL_tmpz00_5206;

						BgL_tmpz00_5206 = ((BgL_objectz00_bglt) BgL_oz00_179);
						BgL_auxz00_5205 = BGL_OBJECT_WIDENING(BgL_tmpz00_5206);
					}
					BgL_auxz00_5204 = ((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_5205);
				}
				return
					((((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_5204))->
						BgL_celledzf3zf3) = ((bool_t) BgL_vz00_180), BUNSPEC);
			}
		}

	}



/* &svar/Ginfo-celled?-set! */
	obj_t BGl_z62svarzf2Ginfozd2celledzf3zd2setz12z71zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3326, obj_t BgL_oz00_3327, obj_t BgL_vz00_3328)
	{
		{	/* Globalize/ginfo.sch 311 */
			return
				BGl_svarzf2Ginfozd2celledzf3zd2setz12z13zzglobaliza7e_ginfoza7(
				((BgL_svarz00_bglt) BgL_oz00_3327), CBOOL(BgL_vz00_3328));
		}

	}



/* svar/Ginfo-mark */
	BGL_EXPORTED_DEF long
		BGl_svarzf2Ginfozd2markz20zzglobaliza7e_ginfoza7(BgL_svarz00_bglt
		BgL_oz00_181)
	{
		{	/* Globalize/ginfo.sch 312 */
			{
				BgL_svarzf2ginfozf2_bglt BgL_auxz00_5214;

				{
					obj_t BgL_auxz00_5215;

					{	/* Globalize/ginfo.sch 312 */
						BgL_objectz00_bglt BgL_tmpz00_5216;

						BgL_tmpz00_5216 = ((BgL_objectz00_bglt) BgL_oz00_181);
						BgL_auxz00_5215 = BGL_OBJECT_WIDENING(BgL_tmpz00_5216);
					}
					BgL_auxz00_5214 = ((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_5215);
				}
				return
					(((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_5214))->BgL_markz00);
			}
		}

	}



/* &svar/Ginfo-mark */
	obj_t BGl_z62svarzf2Ginfozd2markz42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3329, obj_t BgL_oz00_3330)
	{
		{	/* Globalize/ginfo.sch 312 */
			return
				BINT(BGl_svarzf2Ginfozd2markz20zzglobaliza7e_ginfoza7(
					((BgL_svarz00_bglt) BgL_oz00_3330)));
		}

	}



/* svar/Ginfo-mark-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_svarzf2Ginfozd2markzd2setz12ze0zzglobaliza7e_ginfoza7(BgL_svarz00_bglt
		BgL_oz00_182, long BgL_vz00_183)
	{
		{	/* Globalize/ginfo.sch 313 */
			{
				BgL_svarzf2ginfozf2_bglt BgL_auxz00_5224;

				{
					obj_t BgL_auxz00_5225;

					{	/* Globalize/ginfo.sch 313 */
						BgL_objectz00_bglt BgL_tmpz00_5226;

						BgL_tmpz00_5226 = ((BgL_objectz00_bglt) BgL_oz00_182);
						BgL_auxz00_5225 = BGL_OBJECT_WIDENING(BgL_tmpz00_5226);
					}
					BgL_auxz00_5224 = ((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_5225);
				}
				return
					((((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_5224))->
						BgL_markz00) = ((long) BgL_vz00_183), BUNSPEC);
		}}

	}



/* &svar/Ginfo-mark-set! */
	obj_t BGl_z62svarzf2Ginfozd2markzd2setz12z82zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3331, obj_t BgL_oz00_3332, obj_t BgL_vz00_3333)
	{
		{	/* Globalize/ginfo.sch 313 */
			return
				BGl_svarzf2Ginfozd2markzd2setz12ze0zzglobaliza7e_ginfoza7(
				((BgL_svarz00_bglt) BgL_oz00_3332), (long) CINT(BgL_vz00_3333));
		}

	}



/* svar/Ginfo-free-mark */
	BGL_EXPORTED_DEF long
		BGl_svarzf2Ginfozd2freezd2markzf2zzglobaliza7e_ginfoza7(BgL_svarz00_bglt
		BgL_oz00_184)
	{
		{	/* Globalize/ginfo.sch 314 */
			{
				BgL_svarzf2ginfozf2_bglt BgL_auxz00_5234;

				{
					obj_t BgL_auxz00_5235;

					{	/* Globalize/ginfo.sch 314 */
						BgL_objectz00_bglt BgL_tmpz00_5236;

						BgL_tmpz00_5236 = ((BgL_objectz00_bglt) BgL_oz00_184);
						BgL_auxz00_5235 = BGL_OBJECT_WIDENING(BgL_tmpz00_5236);
					}
					BgL_auxz00_5234 = ((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_5235);
				}
				return
					(((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_5234))->
					BgL_freezd2markzd2);
			}
		}

	}



/* &svar/Ginfo-free-mark */
	obj_t BGl_z62svarzf2Ginfozd2freezd2markz90zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3334, obj_t BgL_oz00_3335)
	{
		{	/* Globalize/ginfo.sch 314 */
			return
				BINT(BGl_svarzf2Ginfozd2freezd2markzf2zzglobaliza7e_ginfoza7(
					((BgL_svarz00_bglt) BgL_oz00_3335)));
		}

	}



/* svar/Ginfo-free-mark-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_svarzf2Ginfozd2freezd2markzd2setz12z32zzglobaliza7e_ginfoza7
		(BgL_svarz00_bglt BgL_oz00_185, long BgL_vz00_186)
	{
		{	/* Globalize/ginfo.sch 315 */
			{
				BgL_svarzf2ginfozf2_bglt BgL_auxz00_5244;

				{
					obj_t BgL_auxz00_5245;

					{	/* Globalize/ginfo.sch 315 */
						BgL_objectz00_bglt BgL_tmpz00_5246;

						BgL_tmpz00_5246 = ((BgL_objectz00_bglt) BgL_oz00_185);
						BgL_auxz00_5245 = BGL_OBJECT_WIDENING(BgL_tmpz00_5246);
					}
					BgL_auxz00_5244 = ((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_5245);
				}
				return
					((((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_5244))->
						BgL_freezd2markzd2) = ((long) BgL_vz00_186), BUNSPEC);
		}}

	}



/* &svar/Ginfo-free-mark-set! */
	obj_t
		BGl_z62svarzf2Ginfozd2freezd2markzd2setz12z50zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3336, obj_t BgL_oz00_3337, obj_t BgL_vz00_3338)
	{
		{	/* Globalize/ginfo.sch 315 */
			return
				BGl_svarzf2Ginfozd2freezd2markzd2setz12z32zzglobaliza7e_ginfoza7(
				((BgL_svarz00_bglt) BgL_oz00_3337), (long) CINT(BgL_vz00_3338));
		}

	}



/* svar/Ginfo-kaptured? */
	BGL_EXPORTED_DEF bool_t
		BGl_svarzf2Ginfozd2kapturedzf3zd3zzglobaliza7e_ginfoza7(BgL_svarz00_bglt
		BgL_oz00_187)
	{
		{	/* Globalize/ginfo.sch 316 */
			{
				BgL_svarzf2ginfozf2_bglt BgL_auxz00_5254;

				{
					obj_t BgL_auxz00_5255;

					{	/* Globalize/ginfo.sch 316 */
						BgL_objectz00_bglt BgL_tmpz00_5256;

						BgL_tmpz00_5256 = ((BgL_objectz00_bglt) BgL_oz00_187);
						BgL_auxz00_5255 = BGL_OBJECT_WIDENING(BgL_tmpz00_5256);
					}
					BgL_auxz00_5254 = ((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_5255);
				}
				return
					(((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_5254))->
					BgL_kapturedzf3zf3);
			}
		}

	}



/* &svar/Ginfo-kaptured? */
	obj_t BGl_z62svarzf2Ginfozd2kapturedzf3zb1zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3339, obj_t BgL_oz00_3340)
	{
		{	/* Globalize/ginfo.sch 316 */
			return
				BBOOL(BGl_svarzf2Ginfozd2kapturedzf3zd3zzglobaliza7e_ginfoza7(
					((BgL_svarz00_bglt) BgL_oz00_3340)));
		}

	}



/* svar/Ginfo-kaptured?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_svarzf2Ginfozd2kapturedzf3zd2setz12z13zzglobaliza7e_ginfoza7
		(BgL_svarz00_bglt BgL_oz00_188, bool_t BgL_vz00_189)
	{
		{	/* Globalize/ginfo.sch 317 */
			{
				BgL_svarzf2ginfozf2_bglt BgL_auxz00_5264;

				{
					obj_t BgL_auxz00_5265;

					{	/* Globalize/ginfo.sch 317 */
						BgL_objectz00_bglt BgL_tmpz00_5266;

						BgL_tmpz00_5266 = ((BgL_objectz00_bglt) BgL_oz00_188);
						BgL_auxz00_5265 = BGL_OBJECT_WIDENING(BgL_tmpz00_5266);
					}
					BgL_auxz00_5264 = ((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_5265);
				}
				return
					((((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_5264))->
						BgL_kapturedzf3zf3) = ((bool_t) BgL_vz00_189), BUNSPEC);
			}
		}

	}



/* &svar/Ginfo-kaptured?-set! */
	obj_t
		BGl_z62svarzf2Ginfozd2kapturedzf3zd2setz12z71zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3341, obj_t BgL_oz00_3342, obj_t BgL_vz00_3343)
	{
		{	/* Globalize/ginfo.sch 317 */
			return
				BGl_svarzf2Ginfozd2kapturedzf3zd2setz12z13zzglobaliza7e_ginfoza7(
				((BgL_svarz00_bglt) BgL_oz00_3342), CBOOL(BgL_vz00_3343));
		}

	}



/* svar/Ginfo-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_svarzf2Ginfozd2locz20zzglobaliza7e_ginfoza7(BgL_svarz00_bglt
		BgL_oz00_190)
	{
		{	/* Globalize/ginfo.sch 318 */
			return
				(((BgL_svarz00_bglt) COBJECT(
						((BgL_svarz00_bglt) BgL_oz00_190)))->BgL_locz00);
		}

	}



/* &svar/Ginfo-loc */
	obj_t BGl_z62svarzf2Ginfozd2locz42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3344, obj_t BgL_oz00_3345)
	{
		{	/* Globalize/ginfo.sch 318 */
			return
				BGl_svarzf2Ginfozd2locz20zzglobaliza7e_ginfoza7(
				((BgL_svarz00_bglt) BgL_oz00_3345));
		}

	}



/* svar/Ginfo-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_svarzf2Ginfozd2loczd2setz12ze0zzglobaliza7e_ginfoza7(BgL_svarz00_bglt
		BgL_oz00_191, obj_t BgL_vz00_192)
	{
		{	/* Globalize/ginfo.sch 319 */
			return
				((((BgL_svarz00_bglt) COBJECT(
							((BgL_svarz00_bglt) BgL_oz00_191)))->BgL_locz00) =
				((obj_t) BgL_vz00_192), BUNSPEC);
		}

	}



/* &svar/Ginfo-loc-set! */
	obj_t BGl_z62svarzf2Ginfozd2loczd2setz12z82zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3346, obj_t BgL_oz00_3347, obj_t BgL_vz00_3348)
	{
		{	/* Globalize/ginfo.sch 319 */
			return
				BGl_svarzf2Ginfozd2loczd2setz12ze0zzglobaliza7e_ginfoza7(
				((BgL_svarz00_bglt) BgL_oz00_3347), BgL_vz00_3348);
		}

	}



/* make-sexit/Ginfo */
	BGL_EXPORTED_DEF BgL_sexitz00_bglt
		BGl_makezd2sexitzf2Ginfoz20zzglobaliza7e_ginfoza7(obj_t
		BgL_handler1257z00_193, bool_t BgL_detachedzf31258zf3_194,
		bool_t BgL_gzf31259zf3_195, bool_t BgL_kapturedzf31260zf3_196,
		long BgL_freezd2mark1261zd2_197, long BgL_mark1262z00_198)
	{
		{	/* Globalize/ginfo.sch 322 */
			{	/* Globalize/ginfo.sch 322 */
				BgL_sexitz00_bglt BgL_new1229z00_4067;

				{	/* Globalize/ginfo.sch 322 */
					BgL_sexitz00_bglt BgL_tmp1227z00_4068;
					BgL_sexitzf2ginfozf2_bglt BgL_wide1228z00_4069;

					{
						BgL_sexitz00_bglt BgL_auxz00_5282;

						{	/* Globalize/ginfo.sch 322 */
							BgL_sexitz00_bglt BgL_new1226z00_4070;

							BgL_new1226z00_4070 =
								((BgL_sexitz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_sexitz00_bgl))));
							{	/* Globalize/ginfo.sch 322 */
								long BgL_arg1442z00_4071;

								{	/* Globalize/ginfo.sch 322 */
									long BgL_res2071z00_4072;

									BgL_res2071z00_4072 =
										BGL_CLASS_INDEX(BGl_sexitz00zzast_varz00);
									BgL_arg1442z00_4071 = BgL_res2071z00_4072;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1226z00_4070),
									BgL_arg1442z00_4071);
							}
							{	/* Globalize/ginfo.sch 322 */
								BgL_objectz00_bglt BgL_tmpz00_5287;

								BgL_tmpz00_5287 = ((BgL_objectz00_bglt) BgL_new1226z00_4070);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5287, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1226z00_4070);
							BgL_auxz00_5282 = BgL_new1226z00_4070;
						}
						BgL_tmp1227z00_4068 = ((BgL_sexitz00_bglt) BgL_auxz00_5282);
					}
					BgL_wide1228z00_4069 =
						((BgL_sexitzf2ginfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_sexitzf2ginfozf2_bgl))));
					{	/* Globalize/ginfo.sch 322 */
						obj_t BgL_auxz00_5295;
						BgL_objectz00_bglt BgL_tmpz00_5293;

						BgL_auxz00_5295 = ((obj_t) BgL_wide1228z00_4069);
						BgL_tmpz00_5293 = ((BgL_objectz00_bglt) BgL_tmp1227z00_4068);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5293, BgL_auxz00_5295);
					}
					((BgL_objectz00_bglt) BgL_tmp1227z00_4068);
					{	/* Globalize/ginfo.sch 322 */
						long BgL_arg1441z00_4073;

						{	/* Globalize/ginfo.sch 322 */
							long BgL_res2072z00_4074;

							BgL_res2072z00_4074 =
								BGL_CLASS_INDEX(BGl_sexitzf2Ginfozf2zzglobaliza7e_ginfoza7);
							BgL_arg1441z00_4073 = BgL_res2072z00_4074;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1227z00_4068), BgL_arg1441z00_4073);
					}
					BgL_new1229z00_4067 = ((BgL_sexitz00_bglt) BgL_tmp1227z00_4068);
				}
				((((BgL_sexitz00_bglt) COBJECT(
								((BgL_sexitz00_bglt) BgL_new1229z00_4067)))->BgL_handlerz00) =
					((obj_t) BgL_handler1257z00_193), BUNSPEC);
				((((BgL_sexitz00_bglt) COBJECT(((BgL_sexitz00_bglt)
									BgL_new1229z00_4067)))->BgL_detachedzf3zf3) =
					((bool_t) BgL_detachedzf31258zf3_194), BUNSPEC);
				{
					BgL_sexitzf2ginfozf2_bglt BgL_auxz00_5307;

					{
						obj_t BgL_auxz00_5308;

						{	/* Globalize/ginfo.sch 322 */
							BgL_objectz00_bglt BgL_tmpz00_5309;

							BgL_tmpz00_5309 = ((BgL_objectz00_bglt) BgL_new1229z00_4067);
							BgL_auxz00_5308 = BGL_OBJECT_WIDENING(BgL_tmpz00_5309);
						}
						BgL_auxz00_5307 = ((BgL_sexitzf2ginfozf2_bglt) BgL_auxz00_5308);
					}
					((((BgL_sexitzf2ginfozf2_bglt) COBJECT(BgL_auxz00_5307))->
							BgL_gzf3zf3) = ((bool_t) BgL_gzf31259zf3_195), BUNSPEC);
				}
				{
					BgL_sexitzf2ginfozf2_bglt BgL_auxz00_5314;

					{
						obj_t BgL_auxz00_5315;

						{	/* Globalize/ginfo.sch 322 */
							BgL_objectz00_bglt BgL_tmpz00_5316;

							BgL_tmpz00_5316 = ((BgL_objectz00_bglt) BgL_new1229z00_4067);
							BgL_auxz00_5315 = BGL_OBJECT_WIDENING(BgL_tmpz00_5316);
						}
						BgL_auxz00_5314 = ((BgL_sexitzf2ginfozf2_bglt) BgL_auxz00_5315);
					}
					((((BgL_sexitzf2ginfozf2_bglt) COBJECT(BgL_auxz00_5314))->
							BgL_kapturedzf3zf3) =
						((bool_t) BgL_kapturedzf31260zf3_196), BUNSPEC);
				}
				{
					BgL_sexitzf2ginfozf2_bglt BgL_auxz00_5321;

					{
						obj_t BgL_auxz00_5322;

						{	/* Globalize/ginfo.sch 322 */
							BgL_objectz00_bglt BgL_tmpz00_5323;

							BgL_tmpz00_5323 = ((BgL_objectz00_bglt) BgL_new1229z00_4067);
							BgL_auxz00_5322 = BGL_OBJECT_WIDENING(BgL_tmpz00_5323);
						}
						BgL_auxz00_5321 = ((BgL_sexitzf2ginfozf2_bglt) BgL_auxz00_5322);
					}
					((((BgL_sexitzf2ginfozf2_bglt) COBJECT(BgL_auxz00_5321))->
							BgL_freezd2markzd2) =
						((long) BgL_freezd2mark1261zd2_197), BUNSPEC);
				}
				{
					BgL_sexitzf2ginfozf2_bglt BgL_auxz00_5328;

					{
						obj_t BgL_auxz00_5329;

						{	/* Globalize/ginfo.sch 322 */
							BgL_objectz00_bglt BgL_tmpz00_5330;

							BgL_tmpz00_5330 = ((BgL_objectz00_bglt) BgL_new1229z00_4067);
							BgL_auxz00_5329 = BGL_OBJECT_WIDENING(BgL_tmpz00_5330);
						}
						BgL_auxz00_5328 = ((BgL_sexitzf2ginfozf2_bglt) BgL_auxz00_5329);
					}
					((((BgL_sexitzf2ginfozf2_bglt) COBJECT(BgL_auxz00_5328))->
							BgL_markz00) = ((long) BgL_mark1262z00_198), BUNSPEC);
				}
				return BgL_new1229z00_4067;
			}
		}

	}



/* &make-sexit/Ginfo */
	BgL_sexitz00_bglt BGl_z62makezd2sexitzf2Ginfoz42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3349, obj_t BgL_handler1257z00_3350,
		obj_t BgL_detachedzf31258zf3_3351, obj_t BgL_gzf31259zf3_3352,
		obj_t BgL_kapturedzf31260zf3_3353, obj_t BgL_freezd2mark1261zd2_3354,
		obj_t BgL_mark1262z00_3355)
	{
		{	/* Globalize/ginfo.sch 322 */
			return
				BGl_makezd2sexitzf2Ginfoz20zzglobaliza7e_ginfoza7
				(BgL_handler1257z00_3350, CBOOL(BgL_detachedzf31258zf3_3351),
				CBOOL(BgL_gzf31259zf3_3352), CBOOL(BgL_kapturedzf31260zf3_3353),
				(long) CINT(BgL_freezd2mark1261zd2_3354),
				(long) CINT(BgL_mark1262z00_3355));
		}

	}



/* sexit/Ginfo? */
	BGL_EXPORTED_DEF bool_t BGl_sexitzf2Ginfozf3z01zzglobaliza7e_ginfoza7(obj_t
		BgL_objz00_199)
	{
		{	/* Globalize/ginfo.sch 323 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_199,
				BGl_sexitzf2Ginfozf2zzglobaliza7e_ginfoza7);
		}

	}



/* &sexit/Ginfo? */
	obj_t BGl_z62sexitzf2Ginfozf3z63zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3356,
		obj_t BgL_objz00_3357)
	{
		{	/* Globalize/ginfo.sch 323 */
			return
				BBOOL(BGl_sexitzf2Ginfozf3z01zzglobaliza7e_ginfoza7(BgL_objz00_3357));
		}

	}



/* sexit/Ginfo-nil */
	BGL_EXPORTED_DEF BgL_sexitz00_bglt
		BGl_sexitzf2Ginfozd2nilz20zzglobaliza7e_ginfoza7()
	{
		{	/* Globalize/ginfo.sch 324 */
			{	/* Globalize/ginfo.sch 324 */
				obj_t BgL_classz00_2678;

				BgL_classz00_2678 = BGl_sexitzf2Ginfozf2zzglobaliza7e_ginfoza7;
				{	/* Globalize/ginfo.sch 324 */
					obj_t BgL__ortest_1106z00_2679;

					BgL__ortest_1106z00_2679 = BGL_CLASS_NIL(BgL_classz00_2678);
					if (CBOOL(BgL__ortest_1106z00_2679))
						{	/* Globalize/ginfo.sch 324 */
							return ((BgL_sexitz00_bglt) BgL__ortest_1106z00_2679);
						}
					else
						{	/* Globalize/ginfo.sch 324 */
							return
								((BgL_sexitz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_2678));
						}
				}
			}
		}

	}



/* &sexit/Ginfo-nil */
	BgL_sexitz00_bglt BGl_z62sexitzf2Ginfozd2nilz42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3358)
	{
		{	/* Globalize/ginfo.sch 324 */
			return BGl_sexitzf2Ginfozd2nilz20zzglobaliza7e_ginfoza7();
		}

	}



/* sexit/Ginfo-mark */
	BGL_EXPORTED_DEF long
		BGl_sexitzf2Ginfozd2markz20zzglobaliza7e_ginfoza7(BgL_sexitz00_bglt
		BgL_oz00_200)
	{
		{	/* Globalize/ginfo.sch 325 */
			{
				BgL_sexitzf2ginfozf2_bglt BgL_auxz00_5351;

				{
					obj_t BgL_auxz00_5352;

					{	/* Globalize/ginfo.sch 325 */
						BgL_objectz00_bglt BgL_tmpz00_5353;

						BgL_tmpz00_5353 = ((BgL_objectz00_bglt) BgL_oz00_200);
						BgL_auxz00_5352 = BGL_OBJECT_WIDENING(BgL_tmpz00_5353);
					}
					BgL_auxz00_5351 = ((BgL_sexitzf2ginfozf2_bglt) BgL_auxz00_5352);
				}
				return
					(((BgL_sexitzf2ginfozf2_bglt) COBJECT(BgL_auxz00_5351))->BgL_markz00);
			}
		}

	}



/* &sexit/Ginfo-mark */
	obj_t BGl_z62sexitzf2Ginfozd2markz42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3359, obj_t BgL_oz00_3360)
	{
		{	/* Globalize/ginfo.sch 325 */
			return
				BINT(BGl_sexitzf2Ginfozd2markz20zzglobaliza7e_ginfoza7(
					((BgL_sexitz00_bglt) BgL_oz00_3360)));
		}

	}



/* sexit/Ginfo-mark-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sexitzf2Ginfozd2markzd2setz12ze0zzglobaliza7e_ginfoza7(BgL_sexitz00_bglt
		BgL_oz00_201, long BgL_vz00_202)
	{
		{	/* Globalize/ginfo.sch 326 */
			{
				BgL_sexitzf2ginfozf2_bglt BgL_auxz00_5361;

				{
					obj_t BgL_auxz00_5362;

					{	/* Globalize/ginfo.sch 326 */
						BgL_objectz00_bglt BgL_tmpz00_5363;

						BgL_tmpz00_5363 = ((BgL_objectz00_bglt) BgL_oz00_201);
						BgL_auxz00_5362 = BGL_OBJECT_WIDENING(BgL_tmpz00_5363);
					}
					BgL_auxz00_5361 = ((BgL_sexitzf2ginfozf2_bglt) BgL_auxz00_5362);
				}
				return
					((((BgL_sexitzf2ginfozf2_bglt) COBJECT(BgL_auxz00_5361))->
						BgL_markz00) = ((long) BgL_vz00_202), BUNSPEC);
		}}

	}



/* &sexit/Ginfo-mark-set! */
	obj_t BGl_z62sexitzf2Ginfozd2markzd2setz12z82zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3361, obj_t BgL_oz00_3362, obj_t BgL_vz00_3363)
	{
		{	/* Globalize/ginfo.sch 326 */
			return
				BGl_sexitzf2Ginfozd2markzd2setz12ze0zzglobaliza7e_ginfoza7(
				((BgL_sexitz00_bglt) BgL_oz00_3362), (long) CINT(BgL_vz00_3363));
		}

	}



/* sexit/Ginfo-free-mark */
	BGL_EXPORTED_DEF long
		BGl_sexitzf2Ginfozd2freezd2markzf2zzglobaliza7e_ginfoza7(BgL_sexitz00_bglt
		BgL_oz00_203)
	{
		{	/* Globalize/ginfo.sch 327 */
			{
				BgL_sexitzf2ginfozf2_bglt BgL_auxz00_5371;

				{
					obj_t BgL_auxz00_5372;

					{	/* Globalize/ginfo.sch 327 */
						BgL_objectz00_bglt BgL_tmpz00_5373;

						BgL_tmpz00_5373 = ((BgL_objectz00_bglt) BgL_oz00_203);
						BgL_auxz00_5372 = BGL_OBJECT_WIDENING(BgL_tmpz00_5373);
					}
					BgL_auxz00_5371 = ((BgL_sexitzf2ginfozf2_bglt) BgL_auxz00_5372);
				}
				return
					(((BgL_sexitzf2ginfozf2_bglt) COBJECT(BgL_auxz00_5371))->
					BgL_freezd2markzd2);
			}
		}

	}



/* &sexit/Ginfo-free-mark */
	obj_t BGl_z62sexitzf2Ginfozd2freezd2markz90zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3364, obj_t BgL_oz00_3365)
	{
		{	/* Globalize/ginfo.sch 327 */
			return
				BINT(BGl_sexitzf2Ginfozd2freezd2markzf2zzglobaliza7e_ginfoza7(
					((BgL_sexitz00_bglt) BgL_oz00_3365)));
		}

	}



/* sexit/Ginfo-free-mark-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sexitzf2Ginfozd2freezd2markzd2setz12z32zzglobaliza7e_ginfoza7
		(BgL_sexitz00_bglt BgL_oz00_204, long BgL_vz00_205)
	{
		{	/* Globalize/ginfo.sch 328 */
			{
				BgL_sexitzf2ginfozf2_bglt BgL_auxz00_5381;

				{
					obj_t BgL_auxz00_5382;

					{	/* Globalize/ginfo.sch 328 */
						BgL_objectz00_bglt BgL_tmpz00_5383;

						BgL_tmpz00_5383 = ((BgL_objectz00_bglt) BgL_oz00_204);
						BgL_auxz00_5382 = BGL_OBJECT_WIDENING(BgL_tmpz00_5383);
					}
					BgL_auxz00_5381 = ((BgL_sexitzf2ginfozf2_bglt) BgL_auxz00_5382);
				}
				return
					((((BgL_sexitzf2ginfozf2_bglt) COBJECT(BgL_auxz00_5381))->
						BgL_freezd2markzd2) = ((long) BgL_vz00_205), BUNSPEC);
		}}

	}



/* &sexit/Ginfo-free-mark-set! */
	obj_t
		BGl_z62sexitzf2Ginfozd2freezd2markzd2setz12z50zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3366, obj_t BgL_oz00_3367, obj_t BgL_vz00_3368)
	{
		{	/* Globalize/ginfo.sch 328 */
			return
				BGl_sexitzf2Ginfozd2freezd2markzd2setz12z32zzglobaliza7e_ginfoza7(
				((BgL_sexitz00_bglt) BgL_oz00_3367), (long) CINT(BgL_vz00_3368));
		}

	}



/* sexit/Ginfo-kaptured? */
	BGL_EXPORTED_DEF bool_t
		BGl_sexitzf2Ginfozd2kapturedzf3zd3zzglobaliza7e_ginfoza7(BgL_sexitz00_bglt
		BgL_oz00_206)
	{
		{	/* Globalize/ginfo.sch 329 */
			{
				BgL_sexitzf2ginfozf2_bglt BgL_auxz00_5391;

				{
					obj_t BgL_auxz00_5392;

					{	/* Globalize/ginfo.sch 329 */
						BgL_objectz00_bglt BgL_tmpz00_5393;

						BgL_tmpz00_5393 = ((BgL_objectz00_bglt) BgL_oz00_206);
						BgL_auxz00_5392 = BGL_OBJECT_WIDENING(BgL_tmpz00_5393);
					}
					BgL_auxz00_5391 = ((BgL_sexitzf2ginfozf2_bglt) BgL_auxz00_5392);
				}
				return
					(((BgL_sexitzf2ginfozf2_bglt) COBJECT(BgL_auxz00_5391))->
					BgL_kapturedzf3zf3);
			}
		}

	}



/* &sexit/Ginfo-kaptured? */
	obj_t BGl_z62sexitzf2Ginfozd2kapturedzf3zb1zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3369, obj_t BgL_oz00_3370)
	{
		{	/* Globalize/ginfo.sch 329 */
			return
				BBOOL(BGl_sexitzf2Ginfozd2kapturedzf3zd3zzglobaliza7e_ginfoza7(
					((BgL_sexitz00_bglt) BgL_oz00_3370)));
		}

	}



/* sexit/Ginfo-kaptured?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sexitzf2Ginfozd2kapturedzf3zd2setz12z13zzglobaliza7e_ginfoza7
		(BgL_sexitz00_bglt BgL_oz00_207, bool_t BgL_vz00_208)
	{
		{	/* Globalize/ginfo.sch 330 */
			{
				BgL_sexitzf2ginfozf2_bglt BgL_auxz00_5401;

				{
					obj_t BgL_auxz00_5402;

					{	/* Globalize/ginfo.sch 330 */
						BgL_objectz00_bglt BgL_tmpz00_5403;

						BgL_tmpz00_5403 = ((BgL_objectz00_bglt) BgL_oz00_207);
						BgL_auxz00_5402 = BGL_OBJECT_WIDENING(BgL_tmpz00_5403);
					}
					BgL_auxz00_5401 = ((BgL_sexitzf2ginfozf2_bglt) BgL_auxz00_5402);
				}
				return
					((((BgL_sexitzf2ginfozf2_bglt) COBJECT(BgL_auxz00_5401))->
						BgL_kapturedzf3zf3) = ((bool_t) BgL_vz00_208), BUNSPEC);
			}
		}

	}



/* &sexit/Ginfo-kaptured?-set! */
	obj_t
		BGl_z62sexitzf2Ginfozd2kapturedzf3zd2setz12z71zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3371, obj_t BgL_oz00_3372, obj_t BgL_vz00_3373)
	{
		{	/* Globalize/ginfo.sch 330 */
			return
				BGl_sexitzf2Ginfozd2kapturedzf3zd2setz12z13zzglobaliza7e_ginfoza7(
				((BgL_sexitz00_bglt) BgL_oz00_3372), CBOOL(BgL_vz00_3373));
		}

	}



/* sexit/Ginfo-G? */
	BGL_EXPORTED_DEF bool_t
		BGl_sexitzf2Ginfozd2Gzf3zd3zzglobaliza7e_ginfoza7(BgL_sexitz00_bglt
		BgL_oz00_209)
	{
		{	/* Globalize/ginfo.sch 331 */
			{
				BgL_sexitzf2ginfozf2_bglt BgL_auxz00_5411;

				{
					obj_t BgL_auxz00_5412;

					{	/* Globalize/ginfo.sch 331 */
						BgL_objectz00_bglt BgL_tmpz00_5413;

						BgL_tmpz00_5413 = ((BgL_objectz00_bglt) BgL_oz00_209);
						BgL_auxz00_5412 = BGL_OBJECT_WIDENING(BgL_tmpz00_5413);
					}
					BgL_auxz00_5411 = ((BgL_sexitzf2ginfozf2_bglt) BgL_auxz00_5412);
				}
				return
					(((BgL_sexitzf2ginfozf2_bglt) COBJECT(BgL_auxz00_5411))->BgL_gzf3zf3);
			}
		}

	}



/* &sexit/Ginfo-G? */
	obj_t BGl_z62sexitzf2Ginfozd2Gzf3zb1zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3374, obj_t BgL_oz00_3375)
	{
		{	/* Globalize/ginfo.sch 331 */
			return
				BBOOL(BGl_sexitzf2Ginfozd2Gzf3zd3zzglobaliza7e_ginfoza7(
					((BgL_sexitz00_bglt) BgL_oz00_3375)));
		}

	}



/* sexit/Ginfo-G?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sexitzf2Ginfozd2Gzf3zd2setz12z13zzglobaliza7e_ginfoza7(BgL_sexitz00_bglt
		BgL_oz00_210, bool_t BgL_vz00_211)
	{
		{	/* Globalize/ginfo.sch 332 */
			{
				BgL_sexitzf2ginfozf2_bglt BgL_auxz00_5421;

				{
					obj_t BgL_auxz00_5422;

					{	/* Globalize/ginfo.sch 332 */
						BgL_objectz00_bglt BgL_tmpz00_5423;

						BgL_tmpz00_5423 = ((BgL_objectz00_bglt) BgL_oz00_210);
						BgL_auxz00_5422 = BGL_OBJECT_WIDENING(BgL_tmpz00_5423);
					}
					BgL_auxz00_5421 = ((BgL_sexitzf2ginfozf2_bglt) BgL_auxz00_5422);
				}
				return
					((((BgL_sexitzf2ginfozf2_bglt) COBJECT(BgL_auxz00_5421))->
						BgL_gzf3zf3) = ((bool_t) BgL_vz00_211), BUNSPEC);
			}
		}

	}



/* &sexit/Ginfo-G?-set! */
	obj_t BGl_z62sexitzf2Ginfozd2Gzf3zd2setz12z71zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3376, obj_t BgL_oz00_3377, obj_t BgL_vz00_3378)
	{
		{	/* Globalize/ginfo.sch 332 */
			return
				BGl_sexitzf2Ginfozd2Gzf3zd2setz12z13zzglobaliza7e_ginfoza7(
				((BgL_sexitz00_bglt) BgL_oz00_3377), CBOOL(BgL_vz00_3378));
		}

	}



/* sexit/Ginfo-detached? */
	BGL_EXPORTED_DEF bool_t
		BGl_sexitzf2Ginfozd2detachedzf3zd3zzglobaliza7e_ginfoza7(BgL_sexitz00_bglt
		BgL_oz00_212)
	{
		{	/* Globalize/ginfo.sch 333 */
			return
				(((BgL_sexitz00_bglt) COBJECT(
						((BgL_sexitz00_bglt) BgL_oz00_212)))->BgL_detachedzf3zf3);
		}

	}



/* &sexit/Ginfo-detached? */
	obj_t BGl_z62sexitzf2Ginfozd2detachedzf3zb1zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3379, obj_t BgL_oz00_3380)
	{
		{	/* Globalize/ginfo.sch 333 */
			return
				BBOOL(BGl_sexitzf2Ginfozd2detachedzf3zd3zzglobaliza7e_ginfoza7(
					((BgL_sexitz00_bglt) BgL_oz00_3380)));
		}

	}



/* sexit/Ginfo-detached?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sexitzf2Ginfozd2detachedzf3zd2setz12z13zzglobaliza7e_ginfoza7
		(BgL_sexitz00_bglt BgL_oz00_213, bool_t BgL_vz00_214)
	{
		{	/* Globalize/ginfo.sch 334 */
			return
				((((BgL_sexitz00_bglt) COBJECT(
							((BgL_sexitz00_bglt) BgL_oz00_213)))->BgL_detachedzf3zf3) =
				((bool_t) BgL_vz00_214), BUNSPEC);
		}

	}



/* &sexit/Ginfo-detached?-set! */
	obj_t
		BGl_z62sexitzf2Ginfozd2detachedzf3zd2setz12z71zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3381, obj_t BgL_oz00_3382, obj_t BgL_vz00_3383)
	{
		{	/* Globalize/ginfo.sch 334 */
			return
				BGl_sexitzf2Ginfozd2detachedzf3zd2setz12z13zzglobaliza7e_ginfoza7(
				((BgL_sexitz00_bglt) BgL_oz00_3382), CBOOL(BgL_vz00_3383));
		}

	}



/* sexit/Ginfo-handler */
	BGL_EXPORTED_DEF obj_t
		BGl_sexitzf2Ginfozd2handlerz20zzglobaliza7e_ginfoza7(BgL_sexitz00_bglt
		BgL_oz00_215)
	{
		{	/* Globalize/ginfo.sch 335 */
			return
				(((BgL_sexitz00_bglt) COBJECT(
						((BgL_sexitz00_bglt) BgL_oz00_215)))->BgL_handlerz00);
		}

	}



/* &sexit/Ginfo-handler */
	obj_t BGl_z62sexitzf2Ginfozd2handlerz42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3384, obj_t BgL_oz00_3385)
	{
		{	/* Globalize/ginfo.sch 335 */
			return
				BGl_sexitzf2Ginfozd2handlerz20zzglobaliza7e_ginfoza7(
				((BgL_sexitz00_bglt) BgL_oz00_3385));
		}

	}



/* sexit/Ginfo-handler-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sexitzf2Ginfozd2handlerzd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_sexitz00_bglt BgL_oz00_216, obj_t BgL_vz00_217)
	{
		{	/* Globalize/ginfo.sch 336 */
			return
				((((BgL_sexitz00_bglt) COBJECT(
							((BgL_sexitz00_bglt) BgL_oz00_216)))->BgL_handlerz00) =
				((obj_t) BgL_vz00_217), BUNSPEC);
		}

	}



/* &sexit/Ginfo-handler-set! */
	obj_t BGl_z62sexitzf2Ginfozd2handlerzd2setz12z82zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3386, obj_t BgL_oz00_3387, obj_t BgL_vz00_3388)
	{
		{	/* Globalize/ginfo.sch 336 */
			return
				BGl_sexitzf2Ginfozd2handlerzd2setz12ze0zzglobaliza7e_ginfoza7(
				((BgL_sexitz00_bglt) BgL_oz00_3387), BgL_vz00_3388);
		}

	}



/* make-local/Ginfo */
	BGL_EXPORTED_DEF BgL_localz00_bglt
		BGl_makezd2localzf2Ginfoz20zzglobaliza7e_ginfoza7(obj_t BgL_id1243z00_218,
		obj_t BgL_name1244z00_219, BgL_typez00_bglt BgL_type1245z00_220,
		BgL_valuez00_bglt BgL_value1246z00_221, obj_t BgL_access1247z00_222,
		obj_t BgL_fastzd2alpha1248zd2_223, obj_t BgL_removable1249z00_224,
		long BgL_occurrence1250z00_225, long BgL_occurrencew1251z00_226,
		bool_t BgL_userzf31252zf3_227, long BgL_key1253z00_228,
		bool_t BgL_escapezf31254zf3_229, bool_t BgL_globaliza7edzf31255z54_230)
	{
		{	/* Globalize/ginfo.sch 339 */
			{	/* Globalize/ginfo.sch 339 */
				BgL_localz00_bglt BgL_new1233z00_4075;

				{	/* Globalize/ginfo.sch 339 */
					BgL_localz00_bglt BgL_tmp1231z00_4076;
					BgL_localzf2ginfozf2_bglt BgL_wide1232z00_4077;

					{
						BgL_localz00_bglt BgL_auxz00_5449;

						{	/* Globalize/ginfo.sch 339 */
							BgL_localz00_bglt BgL_new1230z00_4078;

							BgL_new1230z00_4078 =
								((BgL_localz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_localz00_bgl))));
							{	/* Globalize/ginfo.sch 339 */
								long BgL_arg1449z00_4079;

								{	/* Globalize/ginfo.sch 339 */
									long BgL_res2073z00_4080;

									BgL_res2073z00_4080 =
										BGL_CLASS_INDEX(BGl_localz00zzast_varz00);
									BgL_arg1449z00_4079 = BgL_res2073z00_4080;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1230z00_4078),
									BgL_arg1449z00_4079);
							}
							{	/* Globalize/ginfo.sch 339 */
								BgL_objectz00_bglt BgL_tmpz00_5454;

								BgL_tmpz00_5454 = ((BgL_objectz00_bglt) BgL_new1230z00_4078);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5454, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1230z00_4078);
							BgL_auxz00_5449 = BgL_new1230z00_4078;
						}
						BgL_tmp1231z00_4076 = ((BgL_localz00_bglt) BgL_auxz00_5449);
					}
					BgL_wide1232z00_4077 =
						((BgL_localzf2ginfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_localzf2ginfozf2_bgl))));
					{	/* Globalize/ginfo.sch 339 */
						obj_t BgL_auxz00_5462;
						BgL_objectz00_bglt BgL_tmpz00_5460;

						BgL_auxz00_5462 = ((obj_t) BgL_wide1232z00_4077);
						BgL_tmpz00_5460 = ((BgL_objectz00_bglt) BgL_tmp1231z00_4076);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5460, BgL_auxz00_5462);
					}
					((BgL_objectz00_bglt) BgL_tmp1231z00_4076);
					{	/* Globalize/ginfo.sch 339 */
						long BgL_arg1448z00_4081;

						{	/* Globalize/ginfo.sch 339 */
							long BgL_res2074z00_4082;

							BgL_res2074z00_4082 =
								BGL_CLASS_INDEX(BGl_localzf2Ginfozf2zzglobaliza7e_ginfoza7);
							BgL_arg1448z00_4081 = BgL_res2074z00_4082;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1231z00_4076), BgL_arg1448z00_4081);
					}
					BgL_new1233z00_4075 = ((BgL_localz00_bglt) BgL_tmp1231z00_4076);
				}
				((((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt) BgL_new1233z00_4075)))->BgL_idz00) =
					((obj_t) BgL_id1243z00_218), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1233z00_4075)))->BgL_namez00) =
					((obj_t) BgL_name1244z00_219), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1233z00_4075)))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1245z00_220), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1233z00_4075)))->BgL_valuez00) =
					((BgL_valuez00_bglt) BgL_value1246z00_221), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1233z00_4075)))->BgL_accessz00) =
					((obj_t) BgL_access1247z00_222), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1233z00_4075)))->BgL_fastzd2alphazd2) =
					((obj_t) BgL_fastzd2alpha1248zd2_223), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1233z00_4075)))->BgL_removablez00) =
					((obj_t) BgL_removable1249z00_224), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1233z00_4075)))->BgL_occurrencez00) =
					((long) BgL_occurrence1250z00_225), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1233z00_4075)))->BgL_occurrencewz00) =
					((long) BgL_occurrencew1251z00_226), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1233z00_4075)))->BgL_userzf3zf3) =
					((bool_t) BgL_userzf31252zf3_227), BUNSPEC);
				((((BgL_localz00_bglt) COBJECT(((BgL_localz00_bglt)
									BgL_new1233z00_4075)))->BgL_keyz00) =
					((long) BgL_key1253z00_228), BUNSPEC);
				{
					BgL_localzf2ginfozf2_bglt BgL_auxz00_5492;

					{
						obj_t BgL_auxz00_5493;

						{	/* Globalize/ginfo.sch 339 */
							BgL_objectz00_bglt BgL_tmpz00_5494;

							BgL_tmpz00_5494 = ((BgL_objectz00_bglt) BgL_new1233z00_4075);
							BgL_auxz00_5493 = BGL_OBJECT_WIDENING(BgL_tmpz00_5494);
						}
						BgL_auxz00_5492 = ((BgL_localzf2ginfozf2_bglt) BgL_auxz00_5493);
					}
					((((BgL_localzf2ginfozf2_bglt) COBJECT(BgL_auxz00_5492))->
							BgL_escapezf3zf3) = ((bool_t) BgL_escapezf31254zf3_229), BUNSPEC);
				}
				{
					BgL_localzf2ginfozf2_bglt BgL_auxz00_5499;

					{
						obj_t BgL_auxz00_5500;

						{	/* Globalize/ginfo.sch 339 */
							BgL_objectz00_bglt BgL_tmpz00_5501;

							BgL_tmpz00_5501 = ((BgL_objectz00_bglt) BgL_new1233z00_4075);
							BgL_auxz00_5500 = BGL_OBJECT_WIDENING(BgL_tmpz00_5501);
						}
						BgL_auxz00_5499 = ((BgL_localzf2ginfozf2_bglt) BgL_auxz00_5500);
					}
					((((BgL_localzf2ginfozf2_bglt) COBJECT(BgL_auxz00_5499))->
							BgL_globaliza7edzf3z54) =
						((bool_t) BgL_globaliza7edzf31255z54_230), BUNSPEC);
				}
				return BgL_new1233z00_4075;
			}
		}

	}



/* &make-local/Ginfo */
	BgL_localz00_bglt BGl_z62makezd2localzf2Ginfoz42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3389, obj_t BgL_id1243z00_3390, obj_t BgL_name1244z00_3391,
		obj_t BgL_type1245z00_3392, obj_t BgL_value1246z00_3393,
		obj_t BgL_access1247z00_3394, obj_t BgL_fastzd2alpha1248zd2_3395,
		obj_t BgL_removable1249z00_3396, obj_t BgL_occurrence1250z00_3397,
		obj_t BgL_occurrencew1251z00_3398, obj_t BgL_userzf31252zf3_3399,
		obj_t BgL_key1253z00_3400, obj_t BgL_escapezf31254zf3_3401,
		obj_t BgL_globaliza7edzf31255z54_3402)
	{
		{	/* Globalize/ginfo.sch 339 */
			return
				BGl_makezd2localzf2Ginfoz20zzglobaliza7e_ginfoza7(BgL_id1243z00_3390,
				BgL_name1244z00_3391, ((BgL_typez00_bglt) BgL_type1245z00_3392),
				((BgL_valuez00_bglt) BgL_value1246z00_3393), BgL_access1247z00_3394,
				BgL_fastzd2alpha1248zd2_3395, BgL_removable1249z00_3396,
				(long) CINT(BgL_occurrence1250z00_3397),
				(long) CINT(BgL_occurrencew1251z00_3398),
				CBOOL(BgL_userzf31252zf3_3399), (long) CINT(BgL_key1253z00_3400),
				CBOOL(BgL_escapezf31254zf3_3401),
				CBOOL(BgL_globaliza7edzf31255z54_3402));
		}

	}



/* local/Ginfo? */
	BGL_EXPORTED_DEF bool_t BGl_localzf2Ginfozf3z01zzglobaliza7e_ginfoza7(obj_t
		BgL_objz00_231)
	{
		{	/* Globalize/ginfo.sch 340 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_231,
				BGl_localzf2Ginfozf2zzglobaliza7e_ginfoza7);
		}

	}



/* &local/Ginfo? */
	obj_t BGl_z62localzf2Ginfozf3z63zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3403,
		obj_t BgL_objz00_3404)
	{
		{	/* Globalize/ginfo.sch 340 */
			return
				BBOOL(BGl_localzf2Ginfozf3z01zzglobaliza7e_ginfoza7(BgL_objz00_3404));
		}

	}



/* local/Ginfo-nil */
	BGL_EXPORTED_DEF BgL_localz00_bglt
		BGl_localzf2Ginfozd2nilz20zzglobaliza7e_ginfoza7()
	{
		{	/* Globalize/ginfo.sch 341 */
			{	/* Globalize/ginfo.sch 341 */
				obj_t BgL_classz00_2706;

				BgL_classz00_2706 = BGl_localzf2Ginfozf2zzglobaliza7e_ginfoza7;
				{	/* Globalize/ginfo.sch 341 */
					obj_t BgL__ortest_1106z00_2707;

					BgL__ortest_1106z00_2707 = BGL_CLASS_NIL(BgL_classz00_2706);
					if (CBOOL(BgL__ortest_1106z00_2707))
						{	/* Globalize/ginfo.sch 341 */
							return ((BgL_localz00_bglt) BgL__ortest_1106z00_2707);
						}
					else
						{	/* Globalize/ginfo.sch 341 */
							return
								((BgL_localz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_2706));
						}
				}
			}
		}

	}



/* &local/Ginfo-nil */
	BgL_localz00_bglt BGl_z62localzf2Ginfozd2nilz42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3405)
	{
		{	/* Globalize/ginfo.sch 341 */
			return BGl_localzf2Ginfozd2nilz20zzglobaliza7e_ginfoza7();
		}

	}



/* local/Ginfo-globalized? */
	BGL_EXPORTED_DEF bool_t
		BGl_localzf2Ginfozd2globaliza7edzf3z74zzglobaliza7e_ginfoza7
		(BgL_localz00_bglt BgL_oz00_232)
	{
		{	/* Globalize/ginfo.sch 342 */
			{
				BgL_localzf2ginfozf2_bglt BgL_auxz00_5525;

				{
					obj_t BgL_auxz00_5526;

					{	/* Globalize/ginfo.sch 342 */
						BgL_objectz00_bglt BgL_tmpz00_5527;

						BgL_tmpz00_5527 = ((BgL_objectz00_bglt) BgL_oz00_232);
						BgL_auxz00_5526 = BGL_OBJECT_WIDENING(BgL_tmpz00_5527);
					}
					BgL_auxz00_5525 = ((BgL_localzf2ginfozf2_bglt) BgL_auxz00_5526);
				}
				return
					(((BgL_localzf2ginfozf2_bglt) COBJECT(BgL_auxz00_5525))->
					BgL_globaliza7edzf3z54);
			}
		}

	}



/* &local/Ginfo-globalized? */
	obj_t BGl_z62localzf2Ginfozd2globaliza7edzf3z16zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3406, obj_t BgL_oz00_3407)
	{
		{	/* Globalize/ginfo.sch 342 */
			return
				BBOOL(BGl_localzf2Ginfozd2globaliza7edzf3z74zzglobaliza7e_ginfoza7(
					((BgL_localz00_bglt) BgL_oz00_3407)));
		}

	}



/* local/Ginfo-globalized?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_localzf2Ginfozd2globaliza7edzf3zd2setz12zb4zzglobaliza7e_ginfoza7
		(BgL_localz00_bglt BgL_oz00_233, bool_t BgL_vz00_234)
	{
		{	/* Globalize/ginfo.sch 343 */
			{
				BgL_localzf2ginfozf2_bglt BgL_auxz00_5535;

				{
					obj_t BgL_auxz00_5536;

					{	/* Globalize/ginfo.sch 343 */
						BgL_objectz00_bglt BgL_tmpz00_5537;

						BgL_tmpz00_5537 = ((BgL_objectz00_bglt) BgL_oz00_233);
						BgL_auxz00_5536 = BGL_OBJECT_WIDENING(BgL_tmpz00_5537);
					}
					BgL_auxz00_5535 = ((BgL_localzf2ginfozf2_bglt) BgL_auxz00_5536);
				}
				return
					((((BgL_localzf2ginfozf2_bglt) COBJECT(BgL_auxz00_5535))->
						BgL_globaliza7edzf3z54) = ((bool_t) BgL_vz00_234), BUNSPEC);
			}
		}

	}



/* &local/Ginfo-globalized?-set! */
	obj_t
		BGl_z62localzf2Ginfozd2globaliza7edzf3zd2setz12zd6zzglobaliza7e_ginfoza7
		(obj_t BgL_envz00_3408, obj_t BgL_oz00_3409, obj_t BgL_vz00_3410)
	{
		{	/* Globalize/ginfo.sch 343 */
			return
				BGl_localzf2Ginfozd2globaliza7edzf3zd2setz12zb4zzglobaliza7e_ginfoza7(
				((BgL_localz00_bglt) BgL_oz00_3409), CBOOL(BgL_vz00_3410));
		}

	}



/* local/Ginfo-escape? */
	BGL_EXPORTED_DEF bool_t
		BGl_localzf2Ginfozd2escapezf3zd3zzglobaliza7e_ginfoza7(BgL_localz00_bglt
		BgL_oz00_235)
	{
		{	/* Globalize/ginfo.sch 344 */
			{
				BgL_localzf2ginfozf2_bglt BgL_auxz00_5545;

				{
					obj_t BgL_auxz00_5546;

					{	/* Globalize/ginfo.sch 344 */
						BgL_objectz00_bglt BgL_tmpz00_5547;

						BgL_tmpz00_5547 = ((BgL_objectz00_bglt) BgL_oz00_235);
						BgL_auxz00_5546 = BGL_OBJECT_WIDENING(BgL_tmpz00_5547);
					}
					BgL_auxz00_5545 = ((BgL_localzf2ginfozf2_bglt) BgL_auxz00_5546);
				}
				return
					(((BgL_localzf2ginfozf2_bglt) COBJECT(BgL_auxz00_5545))->
					BgL_escapezf3zf3);
			}
		}

	}



/* &local/Ginfo-escape? */
	obj_t BGl_z62localzf2Ginfozd2escapezf3zb1zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3411, obj_t BgL_oz00_3412)
	{
		{	/* Globalize/ginfo.sch 344 */
			return
				BBOOL(BGl_localzf2Ginfozd2escapezf3zd3zzglobaliza7e_ginfoza7(
					((BgL_localz00_bglt) BgL_oz00_3412)));
		}

	}



/* local/Ginfo-escape?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_localzf2Ginfozd2escapezf3zd2setz12z13zzglobaliza7e_ginfoza7
		(BgL_localz00_bglt BgL_oz00_236, bool_t BgL_vz00_237)
	{
		{	/* Globalize/ginfo.sch 345 */
			{
				BgL_localzf2ginfozf2_bglt BgL_auxz00_5555;

				{
					obj_t BgL_auxz00_5556;

					{	/* Globalize/ginfo.sch 345 */
						BgL_objectz00_bglt BgL_tmpz00_5557;

						BgL_tmpz00_5557 = ((BgL_objectz00_bglt) BgL_oz00_236);
						BgL_auxz00_5556 = BGL_OBJECT_WIDENING(BgL_tmpz00_5557);
					}
					BgL_auxz00_5555 = ((BgL_localzf2ginfozf2_bglt) BgL_auxz00_5556);
				}
				return
					((((BgL_localzf2ginfozf2_bglt) COBJECT(BgL_auxz00_5555))->
						BgL_escapezf3zf3) = ((bool_t) BgL_vz00_237), BUNSPEC);
			}
		}

	}



/* &local/Ginfo-escape?-set! */
	obj_t BGl_z62localzf2Ginfozd2escapezf3zd2setz12z71zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3413, obj_t BgL_oz00_3414, obj_t BgL_vz00_3415)
	{
		{	/* Globalize/ginfo.sch 345 */
			return
				BGl_localzf2Ginfozd2escapezf3zd2setz12z13zzglobaliza7e_ginfoza7(
				((BgL_localz00_bglt) BgL_oz00_3414), CBOOL(BgL_vz00_3415));
		}

	}



/* local/Ginfo-key */
	BGL_EXPORTED_DEF long
		BGl_localzf2Ginfozd2keyz20zzglobaliza7e_ginfoza7(BgL_localz00_bglt
		BgL_oz00_238)
	{
		{	/* Globalize/ginfo.sch 346 */
			return
				(((BgL_localz00_bglt) COBJECT(
						((BgL_localz00_bglt) BgL_oz00_238)))->BgL_keyz00);
		}

	}



/* &local/Ginfo-key */
	obj_t BGl_z62localzf2Ginfozd2keyz42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3416, obj_t BgL_oz00_3417)
	{
		{	/* Globalize/ginfo.sch 346 */
			return
				BINT(BGl_localzf2Ginfozd2keyz20zzglobaliza7e_ginfoza7(
					((BgL_localz00_bglt) BgL_oz00_3417)));
		}

	}



/* local/Ginfo-user? */
	BGL_EXPORTED_DEF bool_t
		BGl_localzf2Ginfozd2userzf3zd3zzglobaliza7e_ginfoza7(BgL_localz00_bglt
		BgL_oz00_241)
	{
		{	/* Globalize/ginfo.sch 348 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_241)))->BgL_userzf3zf3);
		}

	}



/* &local/Ginfo-user? */
	obj_t BGl_z62localzf2Ginfozd2userzf3zb1zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3418, obj_t BgL_oz00_3419)
	{
		{	/* Globalize/ginfo.sch 348 */
			return
				BBOOL(BGl_localzf2Ginfozd2userzf3zd3zzglobaliza7e_ginfoza7(
					((BgL_localz00_bglt) BgL_oz00_3419)));
		}

	}



/* local/Ginfo-user?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_localzf2Ginfozd2userzf3zd2setz12z13zzglobaliza7e_ginfoza7
		(BgL_localz00_bglt BgL_oz00_242, bool_t BgL_vz00_243)
	{
		{	/* Globalize/ginfo.sch 349 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_242)))->BgL_userzf3zf3) =
				((bool_t) BgL_vz00_243), BUNSPEC);
		}

	}



/* &local/Ginfo-user?-set! */
	obj_t BGl_z62localzf2Ginfozd2userzf3zd2setz12z71zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3420, obj_t BgL_oz00_3421, obj_t BgL_vz00_3422)
	{
		{	/* Globalize/ginfo.sch 349 */
			return
				BGl_localzf2Ginfozd2userzf3zd2setz12z13zzglobaliza7e_ginfoza7(
				((BgL_localz00_bglt) BgL_oz00_3421), CBOOL(BgL_vz00_3422));
		}

	}



/* local/Ginfo-occurrencew */
	BGL_EXPORTED_DEF long
		BGl_localzf2Ginfozd2occurrencewz20zzglobaliza7e_ginfoza7(BgL_localz00_bglt
		BgL_oz00_244)
	{
		{	/* Globalize/ginfo.sch 350 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_244)))->BgL_occurrencewz00);
		}

	}



/* &local/Ginfo-occurrencew */
	obj_t BGl_z62localzf2Ginfozd2occurrencewz42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3423, obj_t BgL_oz00_3424)
	{
		{	/* Globalize/ginfo.sch 350 */
			return
				BINT(BGl_localzf2Ginfozd2occurrencewz20zzglobaliza7e_ginfoza7(
					((BgL_localz00_bglt) BgL_oz00_3424)));
		}

	}



/* local/Ginfo-occurrencew-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_localzf2Ginfozd2occurrencewzd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_localz00_bglt BgL_oz00_245, long BgL_vz00_246)
	{
		{	/* Globalize/ginfo.sch 351 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_245)))->BgL_occurrencewz00) =
				((long) BgL_vz00_246), BUNSPEC);
		}

	}



/* &local/Ginfo-occurrencew-set! */
	obj_t
		BGl_z62localzf2Ginfozd2occurrencewzd2setz12z82zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3425, obj_t BgL_oz00_3426, obj_t BgL_vz00_3427)
	{
		{	/* Globalize/ginfo.sch 351 */
			return
				BGl_localzf2Ginfozd2occurrencewzd2setz12ze0zzglobaliza7e_ginfoza7(
				((BgL_localz00_bglt) BgL_oz00_3426), (long) CINT(BgL_vz00_3427));
		}

	}



/* local/Ginfo-occurrence */
	BGL_EXPORTED_DEF long
		BGl_localzf2Ginfozd2occurrencez20zzglobaliza7e_ginfoza7(BgL_localz00_bglt
		BgL_oz00_247)
	{
		{	/* Globalize/ginfo.sch 352 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_247)))->BgL_occurrencez00);
		}

	}



/* &local/Ginfo-occurrence */
	obj_t BGl_z62localzf2Ginfozd2occurrencez42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3428, obj_t BgL_oz00_3429)
	{
		{	/* Globalize/ginfo.sch 352 */
			return
				BINT(BGl_localzf2Ginfozd2occurrencez20zzglobaliza7e_ginfoza7(
					((BgL_localz00_bglt) BgL_oz00_3429)));
		}

	}



/* local/Ginfo-occurrence-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_localzf2Ginfozd2occurrencezd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_localz00_bglt BgL_oz00_248, long BgL_vz00_249)
	{
		{	/* Globalize/ginfo.sch 353 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_248)))->BgL_occurrencez00) =
				((long) BgL_vz00_249), BUNSPEC);
		}

	}



/* &local/Ginfo-occurrence-set! */
	obj_t
		BGl_z62localzf2Ginfozd2occurrencezd2setz12z82zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3430, obj_t BgL_oz00_3431, obj_t BgL_vz00_3432)
	{
		{	/* Globalize/ginfo.sch 353 */
			return
				BGl_localzf2Ginfozd2occurrencezd2setz12ze0zzglobaliza7e_ginfoza7(
				((BgL_localz00_bglt) BgL_oz00_3431), (long) CINT(BgL_vz00_3432));
		}

	}



/* local/Ginfo-removable */
	BGL_EXPORTED_DEF obj_t
		BGl_localzf2Ginfozd2removablez20zzglobaliza7e_ginfoza7(BgL_localz00_bglt
		BgL_oz00_250)
	{
		{	/* Globalize/ginfo.sch 354 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_250)))->BgL_removablez00);
		}

	}



/* &local/Ginfo-removable */
	obj_t BGl_z62localzf2Ginfozd2removablez42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3433, obj_t BgL_oz00_3434)
	{
		{	/* Globalize/ginfo.sch 354 */
			return
				BGl_localzf2Ginfozd2removablez20zzglobaliza7e_ginfoza7(
				((BgL_localz00_bglt) BgL_oz00_3434));
		}

	}



/* local/Ginfo-removable-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_localzf2Ginfozd2removablezd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_localz00_bglt BgL_oz00_251, obj_t BgL_vz00_252)
	{
		{	/* Globalize/ginfo.sch 355 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_251)))->BgL_removablez00) =
				((obj_t) BgL_vz00_252), BUNSPEC);
		}

	}



/* &local/Ginfo-removable-set! */
	obj_t BGl_z62localzf2Ginfozd2removablezd2setz12z82zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3435, obj_t BgL_oz00_3436, obj_t BgL_vz00_3437)
	{
		{	/* Globalize/ginfo.sch 355 */
			return
				BGl_localzf2Ginfozd2removablezd2setz12ze0zzglobaliza7e_ginfoza7(
				((BgL_localz00_bglt) BgL_oz00_3436), BgL_vz00_3437);
		}

	}



/* local/Ginfo-fast-alpha */
	BGL_EXPORTED_DEF obj_t
		BGl_localzf2Ginfozd2fastzd2alphazf2zzglobaliza7e_ginfoza7(BgL_localz00_bglt
		BgL_oz00_253)
	{
		{	/* Globalize/ginfo.sch 356 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_253)))->BgL_fastzd2alphazd2);
		}

	}



/* &local/Ginfo-fast-alpha */
	obj_t BGl_z62localzf2Ginfozd2fastzd2alphaz90zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3438, obj_t BgL_oz00_3439)
	{
		{	/* Globalize/ginfo.sch 356 */
			return
				BGl_localzf2Ginfozd2fastzd2alphazf2zzglobaliza7e_ginfoza7(
				((BgL_localz00_bglt) BgL_oz00_3439));
		}

	}



/* local/Ginfo-fast-alpha-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_localzf2Ginfozd2fastzd2alphazd2setz12z32zzglobaliza7e_ginfoza7
		(BgL_localz00_bglt BgL_oz00_254, obj_t BgL_vz00_255)
	{
		{	/* Globalize/ginfo.sch 357 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_254)))->BgL_fastzd2alphazd2) =
				((obj_t) BgL_vz00_255), BUNSPEC);
		}

	}



/* &local/Ginfo-fast-alpha-set! */
	obj_t
		BGl_z62localzf2Ginfozd2fastzd2alphazd2setz12z50zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3440, obj_t BgL_oz00_3441, obj_t BgL_vz00_3442)
	{
		{	/* Globalize/ginfo.sch 357 */
			return
				BGl_localzf2Ginfozd2fastzd2alphazd2setz12z32zzglobaliza7e_ginfoza7(
				((BgL_localz00_bglt) BgL_oz00_3441), BgL_vz00_3442);
		}

	}



/* local/Ginfo-access */
	BGL_EXPORTED_DEF obj_t
		BGl_localzf2Ginfozd2accessz20zzglobaliza7e_ginfoza7(BgL_localz00_bglt
		BgL_oz00_256)
	{
		{	/* Globalize/ginfo.sch 358 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_256)))->BgL_accessz00);
		}

	}



/* &local/Ginfo-access */
	obj_t BGl_z62localzf2Ginfozd2accessz42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3443, obj_t BgL_oz00_3444)
	{
		{	/* Globalize/ginfo.sch 358 */
			return
				BGl_localzf2Ginfozd2accessz20zzglobaliza7e_ginfoza7(
				((BgL_localz00_bglt) BgL_oz00_3444));
		}

	}



/* local/Ginfo-access-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_localzf2Ginfozd2accesszd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_localz00_bglt BgL_oz00_257, obj_t BgL_vz00_258)
	{
		{	/* Globalize/ginfo.sch 359 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_257)))->BgL_accessz00) =
				((obj_t) BgL_vz00_258), BUNSPEC);
		}

	}



/* &local/Ginfo-access-set! */
	obj_t BGl_z62localzf2Ginfozd2accesszd2setz12z82zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3445, obj_t BgL_oz00_3446, obj_t BgL_vz00_3447)
	{
		{	/* Globalize/ginfo.sch 359 */
			return
				BGl_localzf2Ginfozd2accesszd2setz12ze0zzglobaliza7e_ginfoza7(
				((BgL_localz00_bglt) BgL_oz00_3446), BgL_vz00_3447);
		}

	}



/* local/Ginfo-value */
	BGL_EXPORTED_DEF BgL_valuez00_bglt
		BGl_localzf2Ginfozd2valuez20zzglobaliza7e_ginfoza7(BgL_localz00_bglt
		BgL_oz00_259)
	{
		{	/* Globalize/ginfo.sch 360 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_259)))->BgL_valuez00);
		}

	}



/* &local/Ginfo-value */
	BgL_valuez00_bglt BGl_z62localzf2Ginfozd2valuez42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3448, obj_t BgL_oz00_3449)
	{
		{	/* Globalize/ginfo.sch 360 */
			return
				BGl_localzf2Ginfozd2valuez20zzglobaliza7e_ginfoza7(
				((BgL_localz00_bglt) BgL_oz00_3449));
		}

	}



/* local/Ginfo-value-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_localzf2Ginfozd2valuezd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_localz00_bglt BgL_oz00_260, BgL_valuez00_bglt BgL_vz00_261)
	{
		{	/* Globalize/ginfo.sch 361 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_260)))->BgL_valuez00) =
				((BgL_valuez00_bglt) BgL_vz00_261), BUNSPEC);
		}

	}



/* &local/Ginfo-value-set! */
	obj_t BGl_z62localzf2Ginfozd2valuezd2setz12z82zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3450, obj_t BgL_oz00_3451, obj_t BgL_vz00_3452)
	{
		{	/* Globalize/ginfo.sch 361 */
			return
				BGl_localzf2Ginfozd2valuezd2setz12ze0zzglobaliza7e_ginfoza7(
				((BgL_localz00_bglt) BgL_oz00_3451),
				((BgL_valuez00_bglt) BgL_vz00_3452));
		}

	}



/* local/Ginfo-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_localzf2Ginfozd2typez20zzglobaliza7e_ginfoza7(BgL_localz00_bglt
		BgL_oz00_262)
	{
		{	/* Globalize/ginfo.sch 362 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_262)))->BgL_typez00);
		}

	}



/* &local/Ginfo-type */
	BgL_typez00_bglt BGl_z62localzf2Ginfozd2typez42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3453, obj_t BgL_oz00_3454)
	{
		{	/* Globalize/ginfo.sch 362 */
			return
				BGl_localzf2Ginfozd2typez20zzglobaliza7e_ginfoza7(
				((BgL_localz00_bglt) BgL_oz00_3454));
		}

	}



/* local/Ginfo-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_localzf2Ginfozd2typezd2setz12ze0zzglobaliza7e_ginfoza7(BgL_localz00_bglt
		BgL_oz00_263, BgL_typez00_bglt BgL_vz00_264)
	{
		{	/* Globalize/ginfo.sch 363 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_263)))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_264), BUNSPEC);
		}

	}



/* &local/Ginfo-type-set! */
	obj_t BGl_z62localzf2Ginfozd2typezd2setz12z82zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3455, obj_t BgL_oz00_3456, obj_t BgL_vz00_3457)
	{
		{	/* Globalize/ginfo.sch 363 */
			return
				BGl_localzf2Ginfozd2typezd2setz12ze0zzglobaliza7e_ginfoza7(
				((BgL_localz00_bglt) BgL_oz00_3456),
				((BgL_typez00_bglt) BgL_vz00_3457));
		}

	}



/* local/Ginfo-name */
	BGL_EXPORTED_DEF obj_t
		BGl_localzf2Ginfozd2namez20zzglobaliza7e_ginfoza7(BgL_localz00_bglt
		BgL_oz00_265)
	{
		{	/* Globalize/ginfo.sch 364 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_265)))->BgL_namez00);
		}

	}



/* &local/Ginfo-name */
	obj_t BGl_z62localzf2Ginfozd2namez42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3458, obj_t BgL_oz00_3459)
	{
		{	/* Globalize/ginfo.sch 364 */
			return
				BGl_localzf2Ginfozd2namez20zzglobaliza7e_ginfoza7(
				((BgL_localz00_bglt) BgL_oz00_3459));
		}

	}



/* local/Ginfo-name-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_localzf2Ginfozd2namezd2setz12ze0zzglobaliza7e_ginfoza7(BgL_localz00_bglt
		BgL_oz00_266, obj_t BgL_vz00_267)
	{
		{	/* Globalize/ginfo.sch 365 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_266)))->BgL_namez00) =
				((obj_t) BgL_vz00_267), BUNSPEC);
		}

	}



/* &local/Ginfo-name-set! */
	obj_t BGl_z62localzf2Ginfozd2namezd2setz12z82zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3460, obj_t BgL_oz00_3461, obj_t BgL_vz00_3462)
	{
		{	/* Globalize/ginfo.sch 365 */
			return
				BGl_localzf2Ginfozd2namezd2setz12ze0zzglobaliza7e_ginfoza7(
				((BgL_localz00_bglt) BgL_oz00_3461), BgL_vz00_3462);
		}

	}



/* local/Ginfo-id */
	BGL_EXPORTED_DEF obj_t
		BGl_localzf2Ginfozd2idz20zzglobaliza7e_ginfoza7(BgL_localz00_bglt
		BgL_oz00_268)
	{
		{	/* Globalize/ginfo.sch 366 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_268)))->BgL_idz00);
		}

	}



/* &local/Ginfo-id */
	obj_t BGl_z62localzf2Ginfozd2idz42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3463, obj_t BgL_oz00_3464)
	{
		{	/* Globalize/ginfo.sch 366 */
			return
				BGl_localzf2Ginfozd2idz20zzglobaliza7e_ginfoza7(
				((BgL_localz00_bglt) BgL_oz00_3464));
		}

	}



/* make-global/Ginfo */
	BGL_EXPORTED_DEF BgL_globalz00_bglt
		BGl_makezd2globalzf2Ginfoz20zzglobaliza7e_ginfoza7(obj_t BgL_id1220z00_271,
		obj_t BgL_name1221z00_272, BgL_typez00_bglt BgL_type1222z00_273,
		BgL_valuez00_bglt BgL_value1223z00_274, obj_t BgL_access1224z00_275,
		obj_t BgL_fastzd2alpha1225zd2_276, obj_t BgL_removable1226z00_277,
		long BgL_occurrence1227z00_278, long BgL_occurrencew1228z00_279,
		bool_t BgL_userzf31229zf3_280, obj_t BgL_module1230z00_281,
		obj_t BgL_import1231z00_282, bool_t BgL_evaluablezf31232zf3_283,
		bool_t BgL_evalzf31233zf3_284, obj_t BgL_library1234z00_285,
		obj_t BgL_pragma1235z00_286, obj_t BgL_src1236z00_287,
		obj_t BgL_jvmzd2typezd2name1237z00_288, obj_t BgL_init1238z00_289,
		obj_t BgL_alias1239z00_290, bool_t BgL_escapezf31240zf3_291,
		obj_t BgL_globalzd2closure1241zd2_292)
	{
		{	/* Globalize/ginfo.sch 370 */
			{	/* Globalize/ginfo.sch 370 */
				BgL_globalz00_bglt BgL_new1237z00_4083;

				{	/* Globalize/ginfo.sch 370 */
					BgL_globalz00_bglt BgL_tmp1235z00_4084;
					BgL_globalzf2ginfozf2_bglt BgL_wide1236z00_4085;

					{
						BgL_globalz00_bglt BgL_auxz00_5654;

						{	/* Globalize/ginfo.sch 370 */
							BgL_globalz00_bglt BgL_new1234z00_4086;

							BgL_new1234z00_4086 =
								((BgL_globalz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_globalz00_bgl))));
							{	/* Globalize/ginfo.sch 370 */
								long BgL_arg1462z00_4087;

								{	/* Globalize/ginfo.sch 370 */
									long BgL_res2075z00_4088;

									BgL_res2075z00_4088 =
										BGL_CLASS_INDEX(BGl_globalz00zzast_varz00);
									BgL_arg1462z00_4087 = BgL_res2075z00_4088;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1234z00_4086),
									BgL_arg1462z00_4087);
							}
							{	/* Globalize/ginfo.sch 370 */
								BgL_objectz00_bglt BgL_tmpz00_5659;

								BgL_tmpz00_5659 = ((BgL_objectz00_bglt) BgL_new1234z00_4086);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5659, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1234z00_4086);
							BgL_auxz00_5654 = BgL_new1234z00_4086;
						}
						BgL_tmp1235z00_4084 = ((BgL_globalz00_bglt) BgL_auxz00_5654);
					}
					BgL_wide1236z00_4085 =
						((BgL_globalzf2ginfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_globalzf2ginfozf2_bgl))));
					{	/* Globalize/ginfo.sch 370 */
						obj_t BgL_auxz00_5667;
						BgL_objectz00_bglt BgL_tmpz00_5665;

						BgL_auxz00_5667 = ((obj_t) BgL_wide1236z00_4085);
						BgL_tmpz00_5665 = ((BgL_objectz00_bglt) BgL_tmp1235z00_4084);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5665, BgL_auxz00_5667);
					}
					((BgL_objectz00_bglt) BgL_tmp1235z00_4084);
					{	/* Globalize/ginfo.sch 370 */
						long BgL_arg1461z00_4089;

						{	/* Globalize/ginfo.sch 370 */
							long BgL_res2076z00_4090;

							BgL_res2076z00_4090 =
								BGL_CLASS_INDEX(BGl_globalzf2Ginfozf2zzglobaliza7e_ginfoza7);
							BgL_arg1461z00_4089 = BgL_res2076z00_4090;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1235z00_4084), BgL_arg1461z00_4089);
					}
					BgL_new1237z00_4083 = ((BgL_globalz00_bglt) BgL_tmp1235z00_4084);
				}
				((((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt) BgL_new1237z00_4083)))->BgL_idz00) =
					((obj_t) BgL_id1220z00_271), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1237z00_4083)))->BgL_namez00) =
					((obj_t) BgL_name1221z00_272), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1237z00_4083)))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1222z00_273), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1237z00_4083)))->BgL_valuez00) =
					((BgL_valuez00_bglt) BgL_value1223z00_274), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1237z00_4083)))->BgL_accessz00) =
					((obj_t) BgL_access1224z00_275), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1237z00_4083)))->BgL_fastzd2alphazd2) =
					((obj_t) BgL_fastzd2alpha1225zd2_276), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1237z00_4083)))->BgL_removablez00) =
					((obj_t) BgL_removable1226z00_277), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1237z00_4083)))->BgL_occurrencez00) =
					((long) BgL_occurrence1227z00_278), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1237z00_4083)))->BgL_occurrencewz00) =
					((long) BgL_occurrencew1228z00_279), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1237z00_4083)))->BgL_userzf3zf3) =
					((bool_t) BgL_userzf31229zf3_280), BUNSPEC);
				((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
									BgL_new1237z00_4083)))->BgL_modulez00) =
					((obj_t) BgL_module1230z00_281), BUNSPEC);
				((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
									BgL_new1237z00_4083)))->BgL_importz00) =
					((obj_t) BgL_import1231z00_282), BUNSPEC);
				((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
									BgL_new1237z00_4083)))->BgL_evaluablezf3zf3) =
					((bool_t) BgL_evaluablezf31232zf3_283), BUNSPEC);
				((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
									BgL_new1237z00_4083)))->BgL_evalzf3zf3) =
					((bool_t) BgL_evalzf31233zf3_284), BUNSPEC);
				((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
									BgL_new1237z00_4083)))->BgL_libraryz00) =
					((obj_t) BgL_library1234z00_285), BUNSPEC);
				((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
									BgL_new1237z00_4083)))->BgL_pragmaz00) =
					((obj_t) BgL_pragma1235z00_286), BUNSPEC);
				((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
									BgL_new1237z00_4083)))->BgL_srcz00) =
					((obj_t) BgL_src1236z00_287), BUNSPEC);
				((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
									BgL_new1237z00_4083)))->BgL_jvmzd2typezd2namez00) =
					((obj_t) BgL_jvmzd2typezd2name1237z00_288), BUNSPEC);
				((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
									BgL_new1237z00_4083)))->BgL_initz00) =
					((obj_t) BgL_init1238z00_289), BUNSPEC);
				((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
									BgL_new1237z00_4083)))->BgL_aliasz00) =
					((obj_t) BgL_alias1239z00_290), BUNSPEC);
				{
					BgL_globalzf2ginfozf2_bglt BgL_auxz00_5715;

					{
						obj_t BgL_auxz00_5716;

						{	/* Globalize/ginfo.sch 370 */
							BgL_objectz00_bglt BgL_tmpz00_5717;

							BgL_tmpz00_5717 = ((BgL_objectz00_bglt) BgL_new1237z00_4083);
							BgL_auxz00_5716 = BGL_OBJECT_WIDENING(BgL_tmpz00_5717);
						}
						BgL_auxz00_5715 = ((BgL_globalzf2ginfozf2_bglt) BgL_auxz00_5716);
					}
					((((BgL_globalzf2ginfozf2_bglt) COBJECT(BgL_auxz00_5715))->
							BgL_escapezf3zf3) = ((bool_t) BgL_escapezf31240zf3_291), BUNSPEC);
				}
				{
					BgL_globalzf2ginfozf2_bglt BgL_auxz00_5722;

					{
						obj_t BgL_auxz00_5723;

						{	/* Globalize/ginfo.sch 370 */
							BgL_objectz00_bglt BgL_tmpz00_5724;

							BgL_tmpz00_5724 = ((BgL_objectz00_bglt) BgL_new1237z00_4083);
							BgL_auxz00_5723 = BGL_OBJECT_WIDENING(BgL_tmpz00_5724);
						}
						BgL_auxz00_5722 = ((BgL_globalzf2ginfozf2_bglt) BgL_auxz00_5723);
					}
					((((BgL_globalzf2ginfozf2_bglt) COBJECT(BgL_auxz00_5722))->
							BgL_globalzd2closurezd2) =
						((obj_t) BgL_globalzd2closure1241zd2_292), BUNSPEC);
				}
				return BgL_new1237z00_4083;
			}
		}

	}



/* &make-global/Ginfo */
	BgL_globalz00_bglt BGl_z62makezd2globalzf2Ginfoz42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3465, obj_t BgL_id1220z00_3466, obj_t BgL_name1221z00_3467,
		obj_t BgL_type1222z00_3468, obj_t BgL_value1223z00_3469,
		obj_t BgL_access1224z00_3470, obj_t BgL_fastzd2alpha1225zd2_3471,
		obj_t BgL_removable1226z00_3472, obj_t BgL_occurrence1227z00_3473,
		obj_t BgL_occurrencew1228z00_3474, obj_t BgL_userzf31229zf3_3475,
		obj_t BgL_module1230z00_3476, obj_t BgL_import1231z00_3477,
		obj_t BgL_evaluablezf31232zf3_3478, obj_t BgL_evalzf31233zf3_3479,
		obj_t BgL_library1234z00_3480, obj_t BgL_pragma1235z00_3481,
		obj_t BgL_src1236z00_3482, obj_t BgL_jvmzd2typezd2name1237z00_3483,
		obj_t BgL_init1238z00_3484, obj_t BgL_alias1239z00_3485,
		obj_t BgL_escapezf31240zf3_3486, obj_t BgL_globalzd2closure1241zd2_3487)
	{
		{	/* Globalize/ginfo.sch 370 */
			return
				BGl_makezd2globalzf2Ginfoz20zzglobaliza7e_ginfoza7(BgL_id1220z00_3466,
				BgL_name1221z00_3467, ((BgL_typez00_bglt) BgL_type1222z00_3468),
				((BgL_valuez00_bglt) BgL_value1223z00_3469), BgL_access1224z00_3470,
				BgL_fastzd2alpha1225zd2_3471, BgL_removable1226z00_3472,
				(long) CINT(BgL_occurrence1227z00_3473),
				(long) CINT(BgL_occurrencew1228z00_3474),
				CBOOL(BgL_userzf31229zf3_3475), BgL_module1230z00_3476,
				BgL_import1231z00_3477, CBOOL(BgL_evaluablezf31232zf3_3478),
				CBOOL(BgL_evalzf31233zf3_3479), BgL_library1234z00_3480,
				BgL_pragma1235z00_3481, BgL_src1236z00_3482,
				BgL_jvmzd2typezd2name1237z00_3483, BgL_init1238z00_3484,
				BgL_alias1239z00_3485, CBOOL(BgL_escapezf31240zf3_3486),
				BgL_globalzd2closure1241zd2_3487);
		}

	}



/* global/Ginfo? */
	BGL_EXPORTED_DEF bool_t BGl_globalzf2Ginfozf3z01zzglobaliza7e_ginfoza7(obj_t
		BgL_objz00_293)
	{
		{	/* Globalize/ginfo.sch 371 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_293,
				BGl_globalzf2Ginfozf2zzglobaliza7e_ginfoza7);
		}

	}



/* &global/Ginfo? */
	obj_t BGl_z62globalzf2Ginfozf3z63zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3488,
		obj_t BgL_objz00_3489)
	{
		{	/* Globalize/ginfo.sch 371 */
			return
				BBOOL(BGl_globalzf2Ginfozf3z01zzglobaliza7e_ginfoza7(BgL_objz00_3489));
		}

	}



/* global/Ginfo-nil */
	BGL_EXPORTED_DEF BgL_globalz00_bglt
		BGl_globalzf2Ginfozd2nilz20zzglobaliza7e_ginfoza7()
	{
		{	/* Globalize/ginfo.sch 372 */
			{	/* Globalize/ginfo.sch 372 */
				obj_t BgL_classz00_2730;

				BgL_classz00_2730 = BGl_globalzf2Ginfozf2zzglobaliza7e_ginfoza7;
				{	/* Globalize/ginfo.sch 372 */
					obj_t BgL__ortest_1106z00_2731;

					BgL__ortest_1106z00_2731 = BGL_CLASS_NIL(BgL_classz00_2730);
					if (CBOOL(BgL__ortest_1106z00_2731))
						{	/* Globalize/ginfo.sch 372 */
							return ((BgL_globalz00_bglt) BgL__ortest_1106z00_2731);
						}
					else
						{	/* Globalize/ginfo.sch 372 */
							return
								((BgL_globalz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_2730));
						}
				}
			}
		}

	}



/* &global/Ginfo-nil */
	BgL_globalz00_bglt BGl_z62globalzf2Ginfozd2nilz42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3490)
	{
		{	/* Globalize/ginfo.sch 372 */
			return BGl_globalzf2Ginfozd2nilz20zzglobaliza7e_ginfoza7();
		}

	}



/* global/Ginfo-global-closure */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2Ginfozd2globalzd2closurezf2zzglobaliza7e_ginfoza7
		(BgL_globalz00_bglt BgL_oz00_294)
	{
		{	/* Globalize/ginfo.sch 373 */
			{
				BgL_globalzf2ginfozf2_bglt BgL_auxz00_5748;

				{
					obj_t BgL_auxz00_5749;

					{	/* Globalize/ginfo.sch 373 */
						BgL_objectz00_bglt BgL_tmpz00_5750;

						BgL_tmpz00_5750 = ((BgL_objectz00_bglt) BgL_oz00_294);
						BgL_auxz00_5749 = BGL_OBJECT_WIDENING(BgL_tmpz00_5750);
					}
					BgL_auxz00_5748 = ((BgL_globalzf2ginfozf2_bglt) BgL_auxz00_5749);
				}
				return
					(((BgL_globalzf2ginfozf2_bglt) COBJECT(BgL_auxz00_5748))->
					BgL_globalzd2closurezd2);
			}
		}

	}



/* &global/Ginfo-global-closure */
	obj_t BGl_z62globalzf2Ginfozd2globalzd2closurez90zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3491, obj_t BgL_oz00_3492)
	{
		{	/* Globalize/ginfo.sch 373 */
			return
				BGl_globalzf2Ginfozd2globalzd2closurezf2zzglobaliza7e_ginfoza7(
				((BgL_globalz00_bglt) BgL_oz00_3492));
		}

	}



/* global/Ginfo-global-closure-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2Ginfozd2globalzd2closurezd2setz12z32zzglobaliza7e_ginfoza7
		(BgL_globalz00_bglt BgL_oz00_295, obj_t BgL_vz00_296)
	{
		{	/* Globalize/ginfo.sch 374 */
			{
				BgL_globalzf2ginfozf2_bglt BgL_auxz00_5757;

				{
					obj_t BgL_auxz00_5758;

					{	/* Globalize/ginfo.sch 374 */
						BgL_objectz00_bglt BgL_tmpz00_5759;

						BgL_tmpz00_5759 = ((BgL_objectz00_bglt) BgL_oz00_295);
						BgL_auxz00_5758 = BGL_OBJECT_WIDENING(BgL_tmpz00_5759);
					}
					BgL_auxz00_5757 = ((BgL_globalzf2ginfozf2_bglt) BgL_auxz00_5758);
				}
				return
					((((BgL_globalzf2ginfozf2_bglt) COBJECT(BgL_auxz00_5757))->
						BgL_globalzd2closurezd2) = ((obj_t) BgL_vz00_296), BUNSPEC);
			}
		}

	}



/* &global/Ginfo-global-closure-set! */
	obj_t
		BGl_z62globalzf2Ginfozd2globalzd2closurezd2setz12z50zzglobaliza7e_ginfoza7
		(obj_t BgL_envz00_3493, obj_t BgL_oz00_3494, obj_t BgL_vz00_3495)
	{
		{	/* Globalize/ginfo.sch 374 */
			return
				BGl_globalzf2Ginfozd2globalzd2closurezd2setz12z32zzglobaliza7e_ginfoza7(
				((BgL_globalz00_bglt) BgL_oz00_3494), BgL_vz00_3495);
		}

	}



/* global/Ginfo-escape? */
	BGL_EXPORTED_DEF bool_t
		BGl_globalzf2Ginfozd2escapezf3zd3zzglobaliza7e_ginfoza7(BgL_globalz00_bglt
		BgL_oz00_297)
	{
		{	/* Globalize/ginfo.sch 375 */
			{
				BgL_globalzf2ginfozf2_bglt BgL_auxz00_5766;

				{
					obj_t BgL_auxz00_5767;

					{	/* Globalize/ginfo.sch 375 */
						BgL_objectz00_bglt BgL_tmpz00_5768;

						BgL_tmpz00_5768 = ((BgL_objectz00_bglt) BgL_oz00_297);
						BgL_auxz00_5767 = BGL_OBJECT_WIDENING(BgL_tmpz00_5768);
					}
					BgL_auxz00_5766 = ((BgL_globalzf2ginfozf2_bglt) BgL_auxz00_5767);
				}
				return
					(((BgL_globalzf2ginfozf2_bglt) COBJECT(BgL_auxz00_5766))->
					BgL_escapezf3zf3);
			}
		}

	}



/* &global/Ginfo-escape? */
	obj_t BGl_z62globalzf2Ginfozd2escapezf3zb1zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3496, obj_t BgL_oz00_3497)
	{
		{	/* Globalize/ginfo.sch 375 */
			return
				BBOOL(BGl_globalzf2Ginfozd2escapezf3zd3zzglobaliza7e_ginfoza7(
					((BgL_globalz00_bglt) BgL_oz00_3497)));
		}

	}



/* global/Ginfo-escape?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2Ginfozd2escapezf3zd2setz12z13zzglobaliza7e_ginfoza7
		(BgL_globalz00_bglt BgL_oz00_298, bool_t BgL_vz00_299)
	{
		{	/* Globalize/ginfo.sch 376 */
			{
				BgL_globalzf2ginfozf2_bglt BgL_auxz00_5776;

				{
					obj_t BgL_auxz00_5777;

					{	/* Globalize/ginfo.sch 376 */
						BgL_objectz00_bglt BgL_tmpz00_5778;

						BgL_tmpz00_5778 = ((BgL_objectz00_bglt) BgL_oz00_298);
						BgL_auxz00_5777 = BGL_OBJECT_WIDENING(BgL_tmpz00_5778);
					}
					BgL_auxz00_5776 = ((BgL_globalzf2ginfozf2_bglt) BgL_auxz00_5777);
				}
				return
					((((BgL_globalzf2ginfozf2_bglt) COBJECT(BgL_auxz00_5776))->
						BgL_escapezf3zf3) = ((bool_t) BgL_vz00_299), BUNSPEC);
			}
		}

	}



/* &global/Ginfo-escape?-set! */
	obj_t
		BGl_z62globalzf2Ginfozd2escapezf3zd2setz12z71zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3498, obj_t BgL_oz00_3499, obj_t BgL_vz00_3500)
	{
		{	/* Globalize/ginfo.sch 376 */
			return
				BGl_globalzf2Ginfozd2escapezf3zd2setz12z13zzglobaliza7e_ginfoza7(
				((BgL_globalz00_bglt) BgL_oz00_3499), CBOOL(BgL_vz00_3500));
		}

	}



/* global/Ginfo-alias */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2Ginfozd2aliasz20zzglobaliza7e_ginfoza7(BgL_globalz00_bglt
		BgL_oz00_300)
	{
		{	/* Globalize/ginfo.sch 377 */
			return
				(((BgL_globalz00_bglt) COBJECT(
						((BgL_globalz00_bglt) BgL_oz00_300)))->BgL_aliasz00);
		}

	}



/* &global/Ginfo-alias */
	obj_t BGl_z62globalzf2Ginfozd2aliasz42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3501, obj_t BgL_oz00_3502)
	{
		{	/* Globalize/ginfo.sch 377 */
			return
				BGl_globalzf2Ginfozd2aliasz20zzglobaliza7e_ginfoza7(
				((BgL_globalz00_bglt) BgL_oz00_3502));
		}

	}



/* global/Ginfo-alias-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2Ginfozd2aliaszd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_globalz00_bglt BgL_oz00_301, obj_t BgL_vz00_302)
	{
		{	/* Globalize/ginfo.sch 378 */
			return
				((((BgL_globalz00_bglt) COBJECT(
							((BgL_globalz00_bglt) BgL_oz00_301)))->BgL_aliasz00) =
				((obj_t) BgL_vz00_302), BUNSPEC);
		}

	}



/* &global/Ginfo-alias-set! */
	obj_t BGl_z62globalzf2Ginfozd2aliaszd2setz12z82zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3503, obj_t BgL_oz00_3504, obj_t BgL_vz00_3505)
	{
		{	/* Globalize/ginfo.sch 378 */
			return
				BGl_globalzf2Ginfozd2aliaszd2setz12ze0zzglobaliza7e_ginfoza7(
				((BgL_globalz00_bglt) BgL_oz00_3504), BgL_vz00_3505);
		}

	}



/* global/Ginfo-init */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2Ginfozd2initz20zzglobaliza7e_ginfoza7(BgL_globalz00_bglt
		BgL_oz00_303)
	{
		{	/* Globalize/ginfo.sch 379 */
			return
				(((BgL_globalz00_bglt) COBJECT(
						((BgL_globalz00_bglt) BgL_oz00_303)))->BgL_initz00);
		}

	}



/* &global/Ginfo-init */
	obj_t BGl_z62globalzf2Ginfozd2initz42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3506, obj_t BgL_oz00_3507)
	{
		{	/* Globalize/ginfo.sch 379 */
			return
				BGl_globalzf2Ginfozd2initz20zzglobaliza7e_ginfoza7(
				((BgL_globalz00_bglt) BgL_oz00_3507));
		}

	}



/* global/Ginfo-init-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2Ginfozd2initzd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_globalz00_bglt BgL_oz00_304, obj_t BgL_vz00_305)
	{
		{	/* Globalize/ginfo.sch 380 */
			return
				((((BgL_globalz00_bglt) COBJECT(
							((BgL_globalz00_bglt) BgL_oz00_304)))->BgL_initz00) =
				((obj_t) BgL_vz00_305), BUNSPEC);
		}

	}



/* &global/Ginfo-init-set! */
	obj_t BGl_z62globalzf2Ginfozd2initzd2setz12z82zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3508, obj_t BgL_oz00_3509, obj_t BgL_vz00_3510)
	{
		{	/* Globalize/ginfo.sch 380 */
			return
				BGl_globalzf2Ginfozd2initzd2setz12ze0zzglobaliza7e_ginfoza7(
				((BgL_globalz00_bglt) BgL_oz00_3509), BgL_vz00_3510);
		}

	}



/* global/Ginfo-jvm-type-name */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2Ginfozd2jvmzd2typezd2namez20zzglobaliza7e_ginfoza7
		(BgL_globalz00_bglt BgL_oz00_306)
	{
		{	/* Globalize/ginfo.sch 381 */
			return
				(((BgL_globalz00_bglt) COBJECT(
						((BgL_globalz00_bglt) BgL_oz00_306)))->BgL_jvmzd2typezd2namez00);
		}

	}



/* &global/Ginfo-jvm-type-name */
	obj_t BGl_z62globalzf2Ginfozd2jvmzd2typezd2namez42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3511, obj_t BgL_oz00_3512)
	{
		{	/* Globalize/ginfo.sch 381 */
			return
				BGl_globalzf2Ginfozd2jvmzd2typezd2namez20zzglobaliza7e_ginfoza7(
				((BgL_globalz00_bglt) BgL_oz00_3512));
		}

	}



/* global/Ginfo-jvm-type-name-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2Ginfozd2jvmzd2typezd2namezd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_globalz00_bglt BgL_oz00_307, obj_t BgL_vz00_308)
	{
		{	/* Globalize/ginfo.sch 382 */
			return
				((((BgL_globalz00_bglt) COBJECT(
							((BgL_globalz00_bglt) BgL_oz00_307)))->BgL_jvmzd2typezd2namez00) =
				((obj_t) BgL_vz00_308), BUNSPEC);
		}

	}



/* &global/Ginfo-jvm-type-name-set! */
	obj_t
		BGl_z62globalzf2Ginfozd2jvmzd2typezd2namezd2setz12z82zzglobaliza7e_ginfoza7
		(obj_t BgL_envz00_3513, obj_t BgL_oz00_3514, obj_t BgL_vz00_3515)
	{
		{	/* Globalize/ginfo.sch 382 */
			return
				BGl_globalzf2Ginfozd2jvmzd2typezd2namezd2setz12ze0zzglobaliza7e_ginfoza7
				(((BgL_globalz00_bglt) BgL_oz00_3514), BgL_vz00_3515);
		}

	}



/* global/Ginfo-src */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2Ginfozd2srcz20zzglobaliza7e_ginfoza7(BgL_globalz00_bglt
		BgL_oz00_309)
	{
		{	/* Globalize/ginfo.sch 383 */
			return
				(((BgL_globalz00_bglt) COBJECT(
						((BgL_globalz00_bglt) BgL_oz00_309)))->BgL_srcz00);
		}

	}



/* &global/Ginfo-src */
	obj_t BGl_z62globalzf2Ginfozd2srcz42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3516, obj_t BgL_oz00_3517)
	{
		{	/* Globalize/ginfo.sch 383 */
			return
				BGl_globalzf2Ginfozd2srcz20zzglobaliza7e_ginfoza7(
				((BgL_globalz00_bglt) BgL_oz00_3517));
		}

	}



/* global/Ginfo-src-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2Ginfozd2srczd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_globalz00_bglt BgL_oz00_310, obj_t BgL_vz00_311)
	{
		{	/* Globalize/ginfo.sch 384 */
			return
				((((BgL_globalz00_bglt) COBJECT(
							((BgL_globalz00_bglt) BgL_oz00_310)))->BgL_srcz00) =
				((obj_t) BgL_vz00_311), BUNSPEC);
		}

	}



/* &global/Ginfo-src-set! */
	obj_t BGl_z62globalzf2Ginfozd2srczd2setz12z82zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3518, obj_t BgL_oz00_3519, obj_t BgL_vz00_3520)
	{
		{	/* Globalize/ginfo.sch 384 */
			return
				BGl_globalzf2Ginfozd2srczd2setz12ze0zzglobaliza7e_ginfoza7(
				((BgL_globalz00_bglt) BgL_oz00_3519), BgL_vz00_3520);
		}

	}



/* global/Ginfo-pragma */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2Ginfozd2pragmaz20zzglobaliza7e_ginfoza7(BgL_globalz00_bglt
		BgL_oz00_312)
	{
		{	/* Globalize/ginfo.sch 385 */
			return
				(((BgL_globalz00_bglt) COBJECT(
						((BgL_globalz00_bglt) BgL_oz00_312)))->BgL_pragmaz00);
		}

	}



/* &global/Ginfo-pragma */
	obj_t BGl_z62globalzf2Ginfozd2pragmaz42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3521, obj_t BgL_oz00_3522)
	{
		{	/* Globalize/ginfo.sch 385 */
			return
				BGl_globalzf2Ginfozd2pragmaz20zzglobaliza7e_ginfoza7(
				((BgL_globalz00_bglt) BgL_oz00_3522));
		}

	}



/* global/Ginfo-pragma-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2Ginfozd2pragmazd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_globalz00_bglt BgL_oz00_313, obj_t BgL_vz00_314)
	{
		{	/* Globalize/ginfo.sch 386 */
			return
				((((BgL_globalz00_bglt) COBJECT(
							((BgL_globalz00_bglt) BgL_oz00_313)))->BgL_pragmaz00) =
				((obj_t) BgL_vz00_314), BUNSPEC);
		}

	}



/* &global/Ginfo-pragma-set! */
	obj_t BGl_z62globalzf2Ginfozd2pragmazd2setz12z82zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3523, obj_t BgL_oz00_3524, obj_t BgL_vz00_3525)
	{
		{	/* Globalize/ginfo.sch 386 */
			return
				BGl_globalzf2Ginfozd2pragmazd2setz12ze0zzglobaliza7e_ginfoza7(
				((BgL_globalz00_bglt) BgL_oz00_3524), BgL_vz00_3525);
		}

	}



/* global/Ginfo-library */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2Ginfozd2libraryz20zzglobaliza7e_ginfoza7(BgL_globalz00_bglt
		BgL_oz00_315)
	{
		{	/* Globalize/ginfo.sch 387 */
			return
				(((BgL_globalz00_bglt) COBJECT(
						((BgL_globalz00_bglt) BgL_oz00_315)))->BgL_libraryz00);
		}

	}



/* &global/Ginfo-library */
	obj_t BGl_z62globalzf2Ginfozd2libraryz42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3526, obj_t BgL_oz00_3527)
	{
		{	/* Globalize/ginfo.sch 387 */
			return
				BGl_globalzf2Ginfozd2libraryz20zzglobaliza7e_ginfoza7(
				((BgL_globalz00_bglt) BgL_oz00_3527));
		}

	}



/* global/Ginfo-library-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2Ginfozd2libraryzd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_globalz00_bglt BgL_oz00_316, obj_t BgL_vz00_317)
	{
		{	/* Globalize/ginfo.sch 388 */
			return
				((((BgL_globalz00_bglt) COBJECT(
							((BgL_globalz00_bglt) BgL_oz00_316)))->BgL_libraryz00) =
				((obj_t) BgL_vz00_317), BUNSPEC);
		}

	}



/* &global/Ginfo-library-set! */
	obj_t BGl_z62globalzf2Ginfozd2libraryzd2setz12z82zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3528, obj_t BgL_oz00_3529, obj_t BgL_vz00_3530)
	{
		{	/* Globalize/ginfo.sch 388 */
			return
				BGl_globalzf2Ginfozd2libraryzd2setz12ze0zzglobaliza7e_ginfoza7(
				((BgL_globalz00_bglt) BgL_oz00_3529), BgL_vz00_3530);
		}

	}



/* global/Ginfo-eval? */
	BGL_EXPORTED_DEF bool_t
		BGl_globalzf2Ginfozd2evalzf3zd3zzglobaliza7e_ginfoza7(BgL_globalz00_bglt
		BgL_oz00_318)
	{
		{	/* Globalize/ginfo.sch 389 */
			return
				(((BgL_globalz00_bglt) COBJECT(
						((BgL_globalz00_bglt) BgL_oz00_318)))->BgL_evalzf3zf3);
		}

	}



/* &global/Ginfo-eval? */
	obj_t BGl_z62globalzf2Ginfozd2evalzf3zb1zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3531, obj_t BgL_oz00_3532)
	{
		{	/* Globalize/ginfo.sch 389 */
			return
				BBOOL(BGl_globalzf2Ginfozd2evalzf3zd3zzglobaliza7e_ginfoza7(
					((BgL_globalz00_bglt) BgL_oz00_3532)));
		}

	}



/* global/Ginfo-eval?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2Ginfozd2evalzf3zd2setz12z13zzglobaliza7e_ginfoza7
		(BgL_globalz00_bglt BgL_oz00_319, bool_t BgL_vz00_320)
	{
		{	/* Globalize/ginfo.sch 390 */
			return
				((((BgL_globalz00_bglt) COBJECT(
							((BgL_globalz00_bglt) BgL_oz00_319)))->BgL_evalzf3zf3) =
				((bool_t) BgL_vz00_320), BUNSPEC);
		}

	}



/* &global/Ginfo-eval?-set! */
	obj_t BGl_z62globalzf2Ginfozd2evalzf3zd2setz12z71zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3533, obj_t BgL_oz00_3534, obj_t BgL_vz00_3535)
	{
		{	/* Globalize/ginfo.sch 390 */
			return
				BGl_globalzf2Ginfozd2evalzf3zd2setz12z13zzglobaliza7e_ginfoza7(
				((BgL_globalz00_bglt) BgL_oz00_3534), CBOOL(BgL_vz00_3535));
		}

	}



/* global/Ginfo-evaluable? */
	BGL_EXPORTED_DEF bool_t
		BGl_globalzf2Ginfozd2evaluablezf3zd3zzglobaliza7e_ginfoza7
		(BgL_globalz00_bglt BgL_oz00_321)
	{
		{	/* Globalize/ginfo.sch 391 */
			return
				(((BgL_globalz00_bglt) COBJECT(
						((BgL_globalz00_bglt) BgL_oz00_321)))->BgL_evaluablezf3zf3);
		}

	}



/* &global/Ginfo-evaluable? */
	obj_t BGl_z62globalzf2Ginfozd2evaluablezf3zb1zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3536, obj_t BgL_oz00_3537)
	{
		{	/* Globalize/ginfo.sch 391 */
			return
				BBOOL(BGl_globalzf2Ginfozd2evaluablezf3zd3zzglobaliza7e_ginfoza7(
					((BgL_globalz00_bglt) BgL_oz00_3537)));
		}

	}



/* global/Ginfo-evaluable?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2Ginfozd2evaluablezf3zd2setz12z13zzglobaliza7e_ginfoza7
		(BgL_globalz00_bglt BgL_oz00_322, bool_t BgL_vz00_323)
	{
		{	/* Globalize/ginfo.sch 392 */
			return
				((((BgL_globalz00_bglt) COBJECT(
							((BgL_globalz00_bglt) BgL_oz00_322)))->BgL_evaluablezf3zf3) =
				((bool_t) BgL_vz00_323), BUNSPEC);
		}

	}



/* &global/Ginfo-evaluable?-set! */
	obj_t
		BGl_z62globalzf2Ginfozd2evaluablezf3zd2setz12z71zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3538, obj_t BgL_oz00_3539, obj_t BgL_vz00_3540)
	{
		{	/* Globalize/ginfo.sch 392 */
			return
				BGl_globalzf2Ginfozd2evaluablezf3zd2setz12z13zzglobaliza7e_ginfoza7(
				((BgL_globalz00_bglt) BgL_oz00_3539), CBOOL(BgL_vz00_3540));
		}

	}



/* global/Ginfo-import */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2Ginfozd2importz20zzglobaliza7e_ginfoza7(BgL_globalz00_bglt
		BgL_oz00_324)
	{
		{	/* Globalize/ginfo.sch 393 */
			return
				(((BgL_globalz00_bglt) COBJECT(
						((BgL_globalz00_bglt) BgL_oz00_324)))->BgL_importz00);
		}

	}



/* &global/Ginfo-import */
	obj_t BGl_z62globalzf2Ginfozd2importz42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3541, obj_t BgL_oz00_3542)
	{
		{	/* Globalize/ginfo.sch 393 */
			return
				BGl_globalzf2Ginfozd2importz20zzglobaliza7e_ginfoza7(
				((BgL_globalz00_bglt) BgL_oz00_3542));
		}

	}



/* global/Ginfo-import-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2Ginfozd2importzd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_globalz00_bglt BgL_oz00_325, obj_t BgL_vz00_326)
	{
		{	/* Globalize/ginfo.sch 394 */
			return
				((((BgL_globalz00_bglt) COBJECT(
							((BgL_globalz00_bglt) BgL_oz00_325)))->BgL_importz00) =
				((obj_t) BgL_vz00_326), BUNSPEC);
		}

	}



/* &global/Ginfo-import-set! */
	obj_t BGl_z62globalzf2Ginfozd2importzd2setz12z82zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3543, obj_t BgL_oz00_3544, obj_t BgL_vz00_3545)
	{
		{	/* Globalize/ginfo.sch 394 */
			return
				BGl_globalzf2Ginfozd2importzd2setz12ze0zzglobaliza7e_ginfoza7(
				((BgL_globalz00_bglt) BgL_oz00_3544), BgL_vz00_3545);
		}

	}



/* global/Ginfo-module */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2Ginfozd2modulez20zzglobaliza7e_ginfoza7(BgL_globalz00_bglt
		BgL_oz00_327)
	{
		{	/* Globalize/ginfo.sch 395 */
			return
				(((BgL_globalz00_bglt) COBJECT(
						((BgL_globalz00_bglt) BgL_oz00_327)))->BgL_modulez00);
		}

	}



/* &global/Ginfo-module */
	obj_t BGl_z62globalzf2Ginfozd2modulez42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3546, obj_t BgL_oz00_3547)
	{
		{	/* Globalize/ginfo.sch 395 */
			return
				BGl_globalzf2Ginfozd2modulez20zzglobaliza7e_ginfoza7(
				((BgL_globalz00_bglt) BgL_oz00_3547));
		}

	}



/* global/Ginfo-module-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2Ginfozd2modulezd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_globalz00_bglt BgL_oz00_328, obj_t BgL_vz00_329)
	{
		{	/* Globalize/ginfo.sch 396 */
			return
				((((BgL_globalz00_bglt) COBJECT(
							((BgL_globalz00_bglt) BgL_oz00_328)))->BgL_modulez00) =
				((obj_t) BgL_vz00_329), BUNSPEC);
		}

	}



/* &global/Ginfo-module-set! */
	obj_t BGl_z62globalzf2Ginfozd2modulezd2setz12z82zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3548, obj_t BgL_oz00_3549, obj_t BgL_vz00_3550)
	{
		{	/* Globalize/ginfo.sch 396 */
			return
				BGl_globalzf2Ginfozd2modulezd2setz12ze0zzglobaliza7e_ginfoza7(
				((BgL_globalz00_bglt) BgL_oz00_3549), BgL_vz00_3550);
		}

	}



/* global/Ginfo-user? */
	BGL_EXPORTED_DEF bool_t
		BGl_globalzf2Ginfozd2userzf3zd3zzglobaliza7e_ginfoza7(BgL_globalz00_bglt
		BgL_oz00_330)
	{
		{	/* Globalize/ginfo.sch 397 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_330)))->BgL_userzf3zf3);
		}

	}



/* &global/Ginfo-user? */
	obj_t BGl_z62globalzf2Ginfozd2userzf3zb1zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3551, obj_t BgL_oz00_3552)
	{
		{	/* Globalize/ginfo.sch 397 */
			return
				BBOOL(BGl_globalzf2Ginfozd2userzf3zd3zzglobaliza7e_ginfoza7(
					((BgL_globalz00_bglt) BgL_oz00_3552)));
		}

	}



/* global/Ginfo-user?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2Ginfozd2userzf3zd2setz12z13zzglobaliza7e_ginfoza7
		(BgL_globalz00_bglt BgL_oz00_331, bool_t BgL_vz00_332)
	{
		{	/* Globalize/ginfo.sch 398 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_331)))->BgL_userzf3zf3) =
				((bool_t) BgL_vz00_332), BUNSPEC);
		}

	}



/* &global/Ginfo-user?-set! */
	obj_t BGl_z62globalzf2Ginfozd2userzf3zd2setz12z71zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3553, obj_t BgL_oz00_3554, obj_t BgL_vz00_3555)
	{
		{	/* Globalize/ginfo.sch 398 */
			return
				BGl_globalzf2Ginfozd2userzf3zd2setz12z13zzglobaliza7e_ginfoza7(
				((BgL_globalz00_bglt) BgL_oz00_3554), CBOOL(BgL_vz00_3555));
		}

	}



/* global/Ginfo-occurrencew */
	BGL_EXPORTED_DEF long
		BGl_globalzf2Ginfozd2occurrencewz20zzglobaliza7e_ginfoza7(BgL_globalz00_bglt
		BgL_oz00_333)
	{
		{	/* Globalize/ginfo.sch 399 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_333)))->BgL_occurrencewz00);
		}

	}



/* &global/Ginfo-occurrencew */
	obj_t BGl_z62globalzf2Ginfozd2occurrencewz42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3556, obj_t BgL_oz00_3557)
	{
		{	/* Globalize/ginfo.sch 399 */
			return
				BINT(BGl_globalzf2Ginfozd2occurrencewz20zzglobaliza7e_ginfoza7(
					((BgL_globalz00_bglt) BgL_oz00_3557)));
		}

	}



/* global/Ginfo-occurrencew-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2Ginfozd2occurrencewzd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_globalz00_bglt BgL_oz00_334, long BgL_vz00_335)
	{
		{	/* Globalize/ginfo.sch 400 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_334)))->BgL_occurrencewz00) =
				((long) BgL_vz00_335), BUNSPEC);
		}

	}



/* &global/Ginfo-occurrencew-set! */
	obj_t
		BGl_z62globalzf2Ginfozd2occurrencewzd2setz12z82zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3558, obj_t BgL_oz00_3559, obj_t BgL_vz00_3560)
	{
		{	/* Globalize/ginfo.sch 400 */
			return
				BGl_globalzf2Ginfozd2occurrencewzd2setz12ze0zzglobaliza7e_ginfoza7(
				((BgL_globalz00_bglt) BgL_oz00_3559), (long) CINT(BgL_vz00_3560));
		}

	}



/* global/Ginfo-occurrence */
	BGL_EXPORTED_DEF long
		BGl_globalzf2Ginfozd2occurrencez20zzglobaliza7e_ginfoza7(BgL_globalz00_bglt
		BgL_oz00_336)
	{
		{	/* Globalize/ginfo.sch 401 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_336)))->BgL_occurrencez00);
		}

	}



/* &global/Ginfo-occurrence */
	obj_t BGl_z62globalzf2Ginfozd2occurrencez42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3561, obj_t BgL_oz00_3562)
	{
		{	/* Globalize/ginfo.sch 401 */
			return
				BINT(BGl_globalzf2Ginfozd2occurrencez20zzglobaliza7e_ginfoza7(
					((BgL_globalz00_bglt) BgL_oz00_3562)));
		}

	}



/* global/Ginfo-occurrence-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2Ginfozd2occurrencezd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_globalz00_bglt BgL_oz00_337, long BgL_vz00_338)
	{
		{	/* Globalize/ginfo.sch 402 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_337)))->BgL_occurrencez00) =
				((long) BgL_vz00_338), BUNSPEC);
		}

	}



/* &global/Ginfo-occurrence-set! */
	obj_t
		BGl_z62globalzf2Ginfozd2occurrencezd2setz12z82zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3563, obj_t BgL_oz00_3564, obj_t BgL_vz00_3565)
	{
		{	/* Globalize/ginfo.sch 402 */
			return
				BGl_globalzf2Ginfozd2occurrencezd2setz12ze0zzglobaliza7e_ginfoza7(
				((BgL_globalz00_bglt) BgL_oz00_3564), (long) CINT(BgL_vz00_3565));
		}

	}



/* global/Ginfo-removable */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2Ginfozd2removablez20zzglobaliza7e_ginfoza7(BgL_globalz00_bglt
		BgL_oz00_339)
	{
		{	/* Globalize/ginfo.sch 403 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_339)))->BgL_removablez00);
		}

	}



/* &global/Ginfo-removable */
	obj_t BGl_z62globalzf2Ginfozd2removablez42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3566, obj_t BgL_oz00_3567)
	{
		{	/* Globalize/ginfo.sch 403 */
			return
				BGl_globalzf2Ginfozd2removablez20zzglobaliza7e_ginfoza7(
				((BgL_globalz00_bglt) BgL_oz00_3567));
		}

	}



/* global/Ginfo-removable-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2Ginfozd2removablezd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_globalz00_bglt BgL_oz00_340, obj_t BgL_vz00_341)
	{
		{	/* Globalize/ginfo.sch 404 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_340)))->BgL_removablez00) =
				((obj_t) BgL_vz00_341), BUNSPEC);
		}

	}



/* &global/Ginfo-removable-set! */
	obj_t
		BGl_z62globalzf2Ginfozd2removablezd2setz12z82zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3568, obj_t BgL_oz00_3569, obj_t BgL_vz00_3570)
	{
		{	/* Globalize/ginfo.sch 404 */
			return
				BGl_globalzf2Ginfozd2removablezd2setz12ze0zzglobaliza7e_ginfoza7(
				((BgL_globalz00_bglt) BgL_oz00_3569), BgL_vz00_3570);
		}

	}



/* global/Ginfo-fast-alpha */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2Ginfozd2fastzd2alphazf2zzglobaliza7e_ginfoza7
		(BgL_globalz00_bglt BgL_oz00_342)
	{
		{	/* Globalize/ginfo.sch 405 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_342)))->BgL_fastzd2alphazd2);
		}

	}



/* &global/Ginfo-fast-alpha */
	obj_t BGl_z62globalzf2Ginfozd2fastzd2alphaz90zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3571, obj_t BgL_oz00_3572)
	{
		{	/* Globalize/ginfo.sch 405 */
			return
				BGl_globalzf2Ginfozd2fastzd2alphazf2zzglobaliza7e_ginfoza7(
				((BgL_globalz00_bglt) BgL_oz00_3572));
		}

	}



/* global/Ginfo-fast-alpha-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2Ginfozd2fastzd2alphazd2setz12z32zzglobaliza7e_ginfoza7
		(BgL_globalz00_bglt BgL_oz00_343, obj_t BgL_vz00_344)
	{
		{	/* Globalize/ginfo.sch 406 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_343)))->BgL_fastzd2alphazd2) =
				((obj_t) BgL_vz00_344), BUNSPEC);
		}

	}



/* &global/Ginfo-fast-alpha-set! */
	obj_t
		BGl_z62globalzf2Ginfozd2fastzd2alphazd2setz12z50zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3573, obj_t BgL_oz00_3574, obj_t BgL_vz00_3575)
	{
		{	/* Globalize/ginfo.sch 406 */
			return
				BGl_globalzf2Ginfozd2fastzd2alphazd2setz12z32zzglobaliza7e_ginfoza7(
				((BgL_globalz00_bglt) BgL_oz00_3574), BgL_vz00_3575);
		}

	}



/* global/Ginfo-access */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2Ginfozd2accessz20zzglobaliza7e_ginfoza7(BgL_globalz00_bglt
		BgL_oz00_345)
	{
		{	/* Globalize/ginfo.sch 407 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_345)))->BgL_accessz00);
		}

	}



/* &global/Ginfo-access */
	obj_t BGl_z62globalzf2Ginfozd2accessz42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3576, obj_t BgL_oz00_3577)
	{
		{	/* Globalize/ginfo.sch 407 */
			return
				BGl_globalzf2Ginfozd2accessz20zzglobaliza7e_ginfoza7(
				((BgL_globalz00_bglt) BgL_oz00_3577));
		}

	}



/* global/Ginfo-access-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2Ginfozd2accesszd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_globalz00_bglt BgL_oz00_346, obj_t BgL_vz00_347)
	{
		{	/* Globalize/ginfo.sch 408 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_346)))->BgL_accessz00) =
				((obj_t) BgL_vz00_347), BUNSPEC);
		}

	}



/* &global/Ginfo-access-set! */
	obj_t BGl_z62globalzf2Ginfozd2accesszd2setz12z82zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3578, obj_t BgL_oz00_3579, obj_t BgL_vz00_3580)
	{
		{	/* Globalize/ginfo.sch 408 */
			return
				BGl_globalzf2Ginfozd2accesszd2setz12ze0zzglobaliza7e_ginfoza7(
				((BgL_globalz00_bglt) BgL_oz00_3579), BgL_vz00_3580);
		}

	}



/* global/Ginfo-value */
	BGL_EXPORTED_DEF BgL_valuez00_bglt
		BGl_globalzf2Ginfozd2valuez20zzglobaliza7e_ginfoza7(BgL_globalz00_bglt
		BgL_oz00_348)
	{
		{	/* Globalize/ginfo.sch 409 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_348)))->BgL_valuez00);
		}

	}



/* &global/Ginfo-value */
	BgL_valuez00_bglt BGl_z62globalzf2Ginfozd2valuez42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3581, obj_t BgL_oz00_3582)
	{
		{	/* Globalize/ginfo.sch 409 */
			return
				BGl_globalzf2Ginfozd2valuez20zzglobaliza7e_ginfoza7(
				((BgL_globalz00_bglt) BgL_oz00_3582));
		}

	}



/* global/Ginfo-value-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2Ginfozd2valuezd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_globalz00_bglt BgL_oz00_349, BgL_valuez00_bglt BgL_vz00_350)
	{
		{	/* Globalize/ginfo.sch 410 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_349)))->BgL_valuez00) =
				((BgL_valuez00_bglt) BgL_vz00_350), BUNSPEC);
		}

	}



/* &global/Ginfo-value-set! */
	obj_t BGl_z62globalzf2Ginfozd2valuezd2setz12z82zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3583, obj_t BgL_oz00_3584, obj_t BgL_vz00_3585)
	{
		{	/* Globalize/ginfo.sch 410 */
			return
				BGl_globalzf2Ginfozd2valuezd2setz12ze0zzglobaliza7e_ginfoza7(
				((BgL_globalz00_bglt) BgL_oz00_3584),
				((BgL_valuez00_bglt) BgL_vz00_3585));
		}

	}



/* global/Ginfo-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_globalzf2Ginfozd2typez20zzglobaliza7e_ginfoza7(BgL_globalz00_bglt
		BgL_oz00_351)
	{
		{	/* Globalize/ginfo.sch 411 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_351)))->BgL_typez00);
		}

	}



/* &global/Ginfo-type */
	BgL_typez00_bglt BGl_z62globalzf2Ginfozd2typez42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3586, obj_t BgL_oz00_3587)
	{
		{	/* Globalize/ginfo.sch 411 */
			return
				BGl_globalzf2Ginfozd2typez20zzglobaliza7e_ginfoza7(
				((BgL_globalz00_bglt) BgL_oz00_3587));
		}

	}



/* global/Ginfo-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2Ginfozd2typezd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_globalz00_bglt BgL_oz00_352, BgL_typez00_bglt BgL_vz00_353)
	{
		{	/* Globalize/ginfo.sch 412 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_352)))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_353), BUNSPEC);
		}

	}



/* &global/Ginfo-type-set! */
	obj_t BGl_z62globalzf2Ginfozd2typezd2setz12z82zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3588, obj_t BgL_oz00_3589, obj_t BgL_vz00_3590)
	{
		{	/* Globalize/ginfo.sch 412 */
			return
				BGl_globalzf2Ginfozd2typezd2setz12ze0zzglobaliza7e_ginfoza7(
				((BgL_globalz00_bglt) BgL_oz00_3589),
				((BgL_typez00_bglt) BgL_vz00_3590));
		}

	}



/* global/Ginfo-name */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2Ginfozd2namez20zzglobaliza7e_ginfoza7(BgL_globalz00_bglt
		BgL_oz00_354)
	{
		{	/* Globalize/ginfo.sch 413 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_354)))->BgL_namez00);
		}

	}



/* &global/Ginfo-name */
	obj_t BGl_z62globalzf2Ginfozd2namez42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3591, obj_t BgL_oz00_3592)
	{
		{	/* Globalize/ginfo.sch 413 */
			return
				BGl_globalzf2Ginfozd2namez20zzglobaliza7e_ginfoza7(
				((BgL_globalz00_bglt) BgL_oz00_3592));
		}

	}



/* global/Ginfo-name-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2Ginfozd2namezd2setz12ze0zzglobaliza7e_ginfoza7
		(BgL_globalz00_bglt BgL_oz00_355, obj_t BgL_vz00_356)
	{
		{	/* Globalize/ginfo.sch 414 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_355)))->BgL_namez00) =
				((obj_t) BgL_vz00_356), BUNSPEC);
		}

	}



/* &global/Ginfo-name-set! */
	obj_t BGl_z62globalzf2Ginfozd2namezd2setz12z82zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3593, obj_t BgL_oz00_3594, obj_t BgL_vz00_3595)
	{
		{	/* Globalize/ginfo.sch 414 */
			return
				BGl_globalzf2Ginfozd2namezd2setz12ze0zzglobaliza7e_ginfoza7(
				((BgL_globalz00_bglt) BgL_oz00_3594), BgL_vz00_3595);
		}

	}



/* global/Ginfo-id */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzf2Ginfozd2idz20zzglobaliza7e_ginfoza7(BgL_globalz00_bglt
		BgL_oz00_357)
	{
		{	/* Globalize/ginfo.sch 415 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_357)))->BgL_idz00);
		}

	}



/* &global/Ginfo-id */
	obj_t BGl_z62globalzf2Ginfozd2idz42zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3596, obj_t BgL_oz00_3597)
	{
		{	/* Globalize/ginfo.sch 415 */
			return
				BGl_globalzf2Ginfozd2idz20zzglobaliza7e_ginfoza7(
				((BgL_globalz00_bglt) BgL_oz00_3597));
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzglobaliza7e_ginfoza7()
	{
		{	/* Globalize/ginfo.scm 15 */
			{	/* Globalize/ginfo.scm 20 */
				obj_t BgL_arg1477z00_1715;
				obj_t BgL_arg1489z00_1716;

				{	/* Globalize/ginfo.scm 20 */
					obj_t BgL_v1371z00_1778;

					BgL_v1371z00_1778 = create_vector(((long) 20));
					{	/* Globalize/ginfo.scm 20 */
						obj_t BgL_arg1536z00_1779;

						BgL_arg1536z00_1779 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									0)), BGl_proc2109z00zzglobaliza7e_ginfoza7,
							BGl_proc2108z00zzglobaliza7e_ginfoza7, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2107z00zzglobaliza7e_ginfoza7,
							CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1371z00_1778, ((long) 0), BgL_arg1536z00_1779);
					}
					{	/* Globalize/ginfo.scm 20 */
						obj_t BgL_arg1558z00_1792;

						BgL_arg1558z00_1792 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									2)), BGl_proc2112z00zzglobaliza7e_ginfoza7,
							BGl_proc2111z00zzglobaliza7e_ginfoza7, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2110z00zzglobaliza7e_ginfoza7,
							CNST_TABLE_REF(((long) 3)));
						VECTOR_SET(BgL_v1371z00_1778, ((long) 1), BgL_arg1558z00_1792);
					}
					{	/* Globalize/ginfo.scm 20 */
						obj_t BgL_arg1573z00_1805;

						BgL_arg1573z00_1805 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									4)), BGl_proc2115z00zzglobaliza7e_ginfoza7,
							BGl_proc2114z00zzglobaliza7e_ginfoza7, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2113z00zzglobaliza7e_ginfoza7,
							CNST_TABLE_REF(((long) 3)));
						VECTOR_SET(BgL_v1371z00_1778, ((long) 2), BgL_arg1573z00_1805);
					}
					{	/* Globalize/ginfo.scm 20 */
						obj_t BgL_arg1588z00_1818;

						BgL_arg1588z00_1818 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									5)), BGl_proc2118z00zzglobaliza7e_ginfoza7,
							BGl_proc2117z00zzglobaliza7e_ginfoza7, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2116z00zzglobaliza7e_ginfoza7,
							CNST_TABLE_REF(((long) 3)));
						VECTOR_SET(BgL_v1371z00_1778, ((long) 3), BgL_arg1588z00_1818);
					}
					{	/* Globalize/ginfo.scm 20 */
						obj_t BgL_arg1597z00_1831;

						BgL_arg1597z00_1831 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									6)), BGl_proc2121z00zzglobaliza7e_ginfoza7,
							BGl_proc2120z00zzglobaliza7e_ginfoza7, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2119z00zzglobaliza7e_ginfoza7,
							CNST_TABLE_REF(((long) 3)));
						VECTOR_SET(BgL_v1371z00_1778, ((long) 4), BgL_arg1597z00_1831);
					}
					{	/* Globalize/ginfo.scm 20 */
						obj_t BgL_arg1611z00_1844;

						BgL_arg1611z00_1844 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									7)), BGl_proc2124z00zzglobaliza7e_ginfoza7,
							BGl_proc2123z00zzglobaliza7e_ginfoza7, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2122z00zzglobaliza7e_ginfoza7,
							CNST_TABLE_REF(((long) 3)));
						VECTOR_SET(BgL_v1371z00_1778, ((long) 5), BgL_arg1611z00_1844);
					}
					{	/* Globalize/ginfo.scm 20 */
						obj_t BgL_arg1631z00_1857;

						BgL_arg1631z00_1857 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									8)), BGl_proc2127z00zzglobaliza7e_ginfoza7,
							BGl_proc2126z00zzglobaliza7e_ginfoza7, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2125z00zzglobaliza7e_ginfoza7,
							CNST_TABLE_REF(((long) 3)));
						VECTOR_SET(BgL_v1371z00_1778, ((long) 6), BgL_arg1631z00_1857);
					}
					{	/* Globalize/ginfo.scm 20 */
						obj_t BgL_arg1644z00_1870;

						BgL_arg1644z00_1870 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									9)), BGl_proc2130z00zzglobaliza7e_ginfoza7,
							BGl_proc2129z00zzglobaliza7e_ginfoza7, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2128z00zzglobaliza7e_ginfoza7,
							CNST_TABLE_REF(((long) 3)));
						VECTOR_SET(BgL_v1371z00_1778, ((long) 7), BgL_arg1644z00_1870);
					}
					{	/* Globalize/ginfo.scm 20 */
						obj_t BgL_arg1667z00_1883;

						BgL_arg1667z00_1883 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									10)), BGl_proc2133z00zzglobaliza7e_ginfoza7,
							BGl_proc2132z00zzglobaliza7e_ginfoza7, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2131z00zzglobaliza7e_ginfoza7,
							CNST_TABLE_REF(((long) 3)));
						VECTOR_SET(BgL_v1371z00_1778, ((long) 8), BgL_arg1667z00_1883);
					}
					{	/* Globalize/ginfo.scm 20 */
						obj_t BgL_arg1688z00_1896;

						BgL_arg1688z00_1896 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									11)), BGl_proc2136z00zzglobaliza7e_ginfoza7,
							BGl_proc2135z00zzglobaliza7e_ginfoza7, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2134z00zzglobaliza7e_ginfoza7,
							CNST_TABLE_REF(((long) 3)));
						VECTOR_SET(BgL_v1371z00_1778, ((long) 9), BgL_arg1688z00_1896);
					}
					{	/* Globalize/ginfo.scm 20 */
						obj_t BgL_arg1704z00_1909;

						BgL_arg1704z00_1909 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									12)), BGl_proc2139z00zzglobaliza7e_ginfoza7,
							BGl_proc2138z00zzglobaliza7e_ginfoza7, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2137z00zzglobaliza7e_ginfoza7,
							CNST_TABLE_REF(((long) 3)));
						VECTOR_SET(BgL_v1371z00_1778, ((long) 10), BgL_arg1704z00_1909);
					}
					{	/* Globalize/ginfo.scm 20 */
						obj_t BgL_arg1719z00_1922;

						BgL_arg1719z00_1922 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									13)), BGl_proc2142z00zzglobaliza7e_ginfoza7,
							BGl_proc2141z00zzglobaliza7e_ginfoza7, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2140z00zzglobaliza7e_ginfoza7,
							CNST_TABLE_REF(((long) 14)));
						VECTOR_SET(BgL_v1371z00_1778, ((long) 11), BgL_arg1719z00_1922);
					}
					{	/* Globalize/ginfo.scm 20 */
						obj_t BgL_arg1731z00_1935;

						BgL_arg1731z00_1935 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									15)), BGl_proc2145z00zzglobaliza7e_ginfoza7,
							BGl_proc2144z00zzglobaliza7e_ginfoza7, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2143z00zzglobaliza7e_ginfoza7,
							CNST_TABLE_REF(((long) 3)));
						VECTOR_SET(BgL_v1371z00_1778, ((long) 12), BgL_arg1731z00_1935);
					}
					{	/* Globalize/ginfo.scm 20 */
						obj_t BgL_arg1742z00_1948;

						BgL_arg1742z00_1948 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									16)), BGl_proc2148z00zzglobaliza7e_ginfoza7,
							BGl_proc2147z00zzglobaliza7e_ginfoza7, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2146z00zzglobaliza7e_ginfoza7,
							CNST_TABLE_REF(((long) 3)));
						VECTOR_SET(BgL_v1371z00_1778, ((long) 13), BgL_arg1742z00_1948);
					}
					{	/* Globalize/ginfo.scm 20 */
						obj_t BgL_arg1754z00_1961;

						BgL_arg1754z00_1961 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									17)), BGl_proc2151z00zzglobaliza7e_ginfoza7,
							BGl_proc2150z00zzglobaliza7e_ginfoza7, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2149z00zzglobaliza7e_ginfoza7,
							CNST_TABLE_REF(((long) 3)));
						VECTOR_SET(BgL_v1371z00_1778, ((long) 14), BgL_arg1754z00_1961);
					}
					{	/* Globalize/ginfo.scm 20 */
						obj_t BgL_arg1761z00_1974;

						BgL_arg1761z00_1974 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									18)), BGl_proc2154z00zzglobaliza7e_ginfoza7,
							BGl_proc2153z00zzglobaliza7e_ginfoza7, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2152z00zzglobaliza7e_ginfoza7,
							CNST_TABLE_REF(((long) 3)));
						VECTOR_SET(BgL_v1371z00_1778, ((long) 15), BgL_arg1761z00_1974);
					}
					{	/* Globalize/ginfo.scm 20 */
						obj_t BgL_arg1779z00_1987;

						BgL_arg1779z00_1987 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									19)), BGl_proc2157z00zzglobaliza7e_ginfoza7,
							BGl_proc2156z00zzglobaliza7e_ginfoza7, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2155z00zzglobaliza7e_ginfoza7,
							CNST_TABLE_REF(((long) 14)));
						VECTOR_SET(BgL_v1371z00_1778, ((long) 16), BgL_arg1779z00_1987);
					}
					{	/* Globalize/ginfo.scm 20 */
						obj_t BgL_arg1796z00_2000;

						BgL_arg1796z00_2000 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									20)), BGl_proc2160z00zzglobaliza7e_ginfoza7,
							BGl_proc2159z00zzglobaliza7e_ginfoza7, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2158z00zzglobaliza7e_ginfoza7,
							CNST_TABLE_REF(((long) 14)));
						VECTOR_SET(BgL_v1371z00_1778, ((long) 17), BgL_arg1796z00_2000);
					}
					{	/* Globalize/ginfo.scm 20 */
						obj_t BgL_arg1820z00_2013;

						BgL_arg1820z00_2013 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									21)), BGl_proc2163z00zzglobaliza7e_ginfoza7,
							BGl_proc2162z00zzglobaliza7e_ginfoza7, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2161z00zzglobaliza7e_ginfoza7,
							CNST_TABLE_REF(((long) 3)));
						VECTOR_SET(BgL_v1371z00_1778, ((long) 18), BgL_arg1820z00_2013);
					}
					{	/* Globalize/ginfo.scm 20 */
						obj_t BgL_arg1827z00_2026;

						BgL_arg1827z00_2026 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									22)), BGl_proc2166z00zzglobaliza7e_ginfoza7,
							BGl_proc2165z00zzglobaliza7e_ginfoza7, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2164z00zzglobaliza7e_ginfoza7,
							CNST_TABLE_REF(((long) 3)));
						VECTOR_SET(BgL_v1371z00_1778, ((long) 19), BgL_arg1827z00_2026);
					}
					BgL_arg1477z00_1715 = BgL_v1371z00_1778;
				}
				{	/* Globalize/ginfo.scm 20 */
					obj_t BgL_v1372z00_2039;

					BgL_v1372z00_2039 = create_vector(((long) 0));
					BgL_arg1489z00_1716 = BgL_v1372z00_2039;
				}
				BGl_sfunzf2Ginfozf2zzglobaliza7e_ginfoza7 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 23)),
					CNST_TABLE_REF(((long) 24)), BGl_sfunz00zzast_varz00, ((long) 7531),
					BGl_proc2170z00zzglobaliza7e_ginfoza7,
					BGl_proc2169z00zzglobaliza7e_ginfoza7, BFALSE,
					BGl_proc2168z00zzglobaliza7e_ginfoza7,
					BGl_proc2167z00zzglobaliza7e_ginfoza7, BgL_arg1477z00_1715,
					BgL_arg1489z00_1716);
			}
			{	/* Globalize/ginfo.scm 62 */
				obj_t BgL_arg1841z00_2048;
				obj_t BgL_arg1842z00_2049;

				{	/* Globalize/ginfo.scm 62 */
					obj_t BgL_v1373z00_2076;

					BgL_v1373z00_2076 = create_vector(((long) 5));
					{	/* Globalize/ginfo.scm 62 */
						obj_t BgL_arg1855z00_2077;

						BgL_arg1855z00_2077 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									25)), BGl_proc2173z00zzglobaliza7e_ginfoza7,
							BGl_proc2172z00zzglobaliza7e_ginfoza7, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2171z00zzglobaliza7e_ginfoza7,
							CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1373z00_2076, ((long) 0), BgL_arg1855z00_2077);
					}
					{	/* Globalize/ginfo.scm 62 */
						obj_t BgL_arg1862z00_2090;

						BgL_arg1862z00_2090 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									15)), BGl_proc2176z00zzglobaliza7e_ginfoza7,
							BGl_proc2175z00zzglobaliza7e_ginfoza7, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2174z00zzglobaliza7e_ginfoza7,
							CNST_TABLE_REF(((long) 14)));
						VECTOR_SET(BgL_v1373z00_2076, ((long) 1), BgL_arg1862z00_2090);
					}
					{	/* Globalize/ginfo.scm 62 */
						obj_t BgL_arg1870z00_2103;

						BgL_arg1870z00_2103 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									13)), BGl_proc2179z00zzglobaliza7e_ginfoza7,
							BGl_proc2178z00zzglobaliza7e_ginfoza7, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2177z00zzglobaliza7e_ginfoza7,
							CNST_TABLE_REF(((long) 14)));
						VECTOR_SET(BgL_v1373z00_2076, ((long) 2), BgL_arg1870z00_2103);
					}
					{	/* Globalize/ginfo.scm 62 */
						obj_t BgL_arg1877z00_2116;

						BgL_arg1877z00_2116 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									26)), BGl_proc2182z00zzglobaliza7e_ginfoza7,
							BGl_proc2181z00zzglobaliza7e_ginfoza7, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2180z00zzglobaliza7e_ginfoza7,
							CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1373z00_2076, ((long) 3), BgL_arg1877z00_2116);
					}
					{	/* Globalize/ginfo.scm 62 */
						obj_t BgL_arg1885z00_2129;

						BgL_arg1885z00_2129 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									27)), BGl_proc2185z00zzglobaliza7e_ginfoza7,
							BGl_proc2184z00zzglobaliza7e_ginfoza7, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2183z00zzglobaliza7e_ginfoza7,
							CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1373z00_2076, ((long) 4), BgL_arg1885z00_2129);
					}
					BgL_arg1841z00_2048 = BgL_v1373z00_2076;
				}
				{	/* Globalize/ginfo.scm 62 */
					obj_t BgL_v1374z00_2142;

					BgL_v1374z00_2142 = create_vector(((long) 0));
					BgL_arg1842z00_2049 = BgL_v1374z00_2142;
				}
				BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 28)),
					CNST_TABLE_REF(((long) 24)), BGl_svarz00zzast_varz00, ((long) 23005),
					BGl_proc2189z00zzglobaliza7e_ginfoza7,
					BGl_proc2188z00zzglobaliza7e_ginfoza7, BFALSE,
					BGl_proc2187z00zzglobaliza7e_ginfoza7,
					BGl_proc2186z00zzglobaliza7e_ginfoza7, BgL_arg1841z00_2048,
					BgL_arg1842z00_2049);
			}
			{	/* Globalize/ginfo.scm 74 */
				obj_t BgL_arg1897z00_2151;
				obj_t BgL_arg1898z00_2152;

				{	/* Globalize/ginfo.scm 74 */
					obj_t BgL_v1375z00_2179;

					BgL_v1375z00_2179 = create_vector(((long) 4));
					{	/* Globalize/ginfo.scm 74 */
						obj_t BgL_arg1910z00_2180;

						BgL_arg1910z00_2180 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									0)), BGl_proc2192z00zzglobaliza7e_ginfoza7,
							BGl_proc2191z00zzglobaliza7e_ginfoza7, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2190z00zzglobaliza7e_ginfoza7,
							CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1375z00_2179, ((long) 0), BgL_arg1910z00_2180);
					}
					{	/* Globalize/ginfo.scm 74 */
						obj_t BgL_arg1917z00_2193;

						BgL_arg1917z00_2193 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									25)), BGl_proc2195z00zzglobaliza7e_ginfoza7,
							BGl_proc2194z00zzglobaliza7e_ginfoza7, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2193z00zzglobaliza7e_ginfoza7,
							CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1375z00_2179, ((long) 1), BgL_arg1917z00_2193);
					}
					{	/* Globalize/ginfo.scm 74 */
						obj_t BgL_arg1924z00_2206;

						BgL_arg1924z00_2206 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									15)), BGl_proc2198z00zzglobaliza7e_ginfoza7,
							BGl_proc2197z00zzglobaliza7e_ginfoza7, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2196z00zzglobaliza7e_ginfoza7,
							CNST_TABLE_REF(((long) 14)));
						VECTOR_SET(BgL_v1375z00_2179, ((long) 2), BgL_arg1924z00_2206);
					}
					{	/* Globalize/ginfo.scm 74 */
						obj_t BgL_arg1931z00_2219;

						BgL_arg1931z00_2219 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									13)), BGl_proc2201z00zzglobaliza7e_ginfoza7,
							BGl_proc2200z00zzglobaliza7e_ginfoza7, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2199z00zzglobaliza7e_ginfoza7,
							CNST_TABLE_REF(((long) 14)));
						VECTOR_SET(BgL_v1375z00_2179, ((long) 3), BgL_arg1931z00_2219);
					}
					BgL_arg1897z00_2151 = BgL_v1375z00_2179;
				}
				{	/* Globalize/ginfo.scm 74 */
					obj_t BgL_v1376z00_2232;

					BgL_v1376z00_2232 = create_vector(((long) 0));
					BgL_arg1898z00_2152 = BgL_v1376z00_2232;
				}
				BGl_sexitzf2Ginfozf2zzglobaliza7e_ginfoza7 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 29)),
					CNST_TABLE_REF(((long) 24)), BGl_sexitz00zzast_varz00, ((long) 59569),
					BGl_proc2205z00zzglobaliza7e_ginfoza7,
					BGl_proc2204z00zzglobaliza7e_ginfoza7, BFALSE,
					BGl_proc2203z00zzglobaliza7e_ginfoza7,
					BGl_proc2202z00zzglobaliza7e_ginfoza7, BgL_arg1897z00_2151,
					BgL_arg1898z00_2152);
			}
			{	/* Globalize/ginfo.scm 84 */
				obj_t BgL_arg1942z00_2241;
				obj_t BgL_arg1943z00_2242;

				{	/* Globalize/ginfo.scm 84 */
					obj_t BgL_v1377z00_2276;

					BgL_v1377z00_2276 = create_vector(((long) 2));
					{	/* Globalize/ginfo.scm 84 */
						obj_t BgL_arg1954z00_2277;

						BgL_arg1954z00_2277 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									30)), BGl_proc2208z00zzglobaliza7e_ginfoza7,
							BGl_proc2207z00zzglobaliza7e_ginfoza7, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2206z00zzglobaliza7e_ginfoza7,
							CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1377z00_2276, ((long) 0), BgL_arg1954z00_2277);
					}
					{	/* Globalize/ginfo.scm 84 */
						obj_t BgL_arg1961z00_2290;

						BgL_arg1961z00_2290 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									31)), BGl_proc2211z00zzglobaliza7e_ginfoza7,
							BGl_proc2210z00zzglobaliza7e_ginfoza7, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2209z00zzglobaliza7e_ginfoza7,
							CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1377z00_2276, ((long) 1), BgL_arg1961z00_2290);
					}
					BgL_arg1942z00_2241 = BgL_v1377z00_2276;
				}
				{	/* Globalize/ginfo.scm 84 */
					obj_t BgL_v1378z00_2303;

					BgL_v1378z00_2303 = create_vector(((long) 0));
					BgL_arg1943z00_2242 = BgL_v1378z00_2303;
				}
				BGl_localzf2Ginfozf2zzglobaliza7e_ginfoza7 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 32)),
					CNST_TABLE_REF(((long) 24)), BGl_localz00zzast_varz00, ((long) 65153),
					BGl_proc2215z00zzglobaliza7e_ginfoza7,
					BGl_proc2214z00zzglobaliza7e_ginfoza7, BFALSE,
					BGl_proc2213z00zzglobaliza7e_ginfoza7,
					BGl_proc2212z00zzglobaliza7e_ginfoza7, BgL_arg1942z00_2241,
					BgL_arg1943z00_2242);
			}
			{	/* Globalize/ginfo.scm 90 */
				obj_t BgL_arg1972z00_2312;
				obj_t BgL_arg1973z00_2313;

				{	/* Globalize/ginfo.scm 90 */
					obj_t BgL_v1379z00_2356;

					BgL_v1379z00_2356 = create_vector(((long) 2));
					{	/* Globalize/ginfo.scm 90 */
						obj_t BgL_arg1985z00_2357;

						BgL_arg1985z00_2357 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									30)), BGl_proc2218z00zzglobaliza7e_ginfoza7,
							BGl_proc2217z00zzglobaliza7e_ginfoza7, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2216z00zzglobaliza7e_ginfoza7,
							CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1379z00_2356, ((long) 0), BgL_arg1985z00_2357);
					}
					{	/* Globalize/ginfo.scm 90 */
						obj_t BgL_arg1992z00_2370;

						BgL_arg1992z00_2370 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									33)), BGl_proc2221z00zzglobaliza7e_ginfoza7,
							BGl_proc2220z00zzglobaliza7e_ginfoza7, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2219z00zzglobaliza7e_ginfoza7,
							CNST_TABLE_REF(((long) 3)));
						VECTOR_SET(BgL_v1379z00_2356, ((long) 1), BgL_arg1992z00_2370);
					}
					BgL_arg1972z00_2312 = BgL_v1379z00_2356;
				}
				{	/* Globalize/ginfo.scm 90 */
					obj_t BgL_v1380z00_2383;

					BgL_v1380z00_2383 = create_vector(((long) 0));
					BgL_arg1973z00_2313 = BgL_v1380z00_2383;
				}
				return (BGl_globalzf2Ginfozf2zzglobaliza7e_ginfoza7 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 34)),
						CNST_TABLE_REF(((long) 24)), BGl_globalz00zzast_varz00,
						((long) 29675), BGl_proc2225z00zzglobaliza7e_ginfoza7,
						BGl_proc2224z00zzglobaliza7e_ginfoza7, BFALSE,
						BGl_proc2223z00zzglobaliza7e_ginfoza7,
						BGl_proc2222z00zzglobaliza7e_ginfoza7, BgL_arg1972z00_2312,
						BgL_arg1973z00_2313), BUNSPEC);
		}}

	}



/* &lambda1981 */
	BgL_globalz00_bglt BGl_z62lambda1981z62zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3717, obj_t BgL_o1217z00_3718)
	{
		{	/* Globalize/ginfo.scm 90 */
			{	/* Globalize/ginfo.scm 90 */
				long BgL_arg1982z00_4092;

				{	/* Globalize/ginfo.scm 90 */
					obj_t BgL_arg1983z00_4093;

					{	/* Globalize/ginfo.scm 90 */
						obj_t BgL_arg1984z00_4094;

						{	/* Globalize/ginfo.scm 90 */
							long BgL_arg1816z00_4095;

							{	/* Globalize/ginfo.scm 90 */
								long BgL_arg1817z00_4096;

								{	/* Globalize/ginfo.scm 90 */
									long BgL_res2104z00_4097;

									BgL_res2104z00_4097 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_globalz00_bglt) BgL_o1217z00_3718)));
									BgL_arg1817z00_4096 = BgL_res2104z00_4097;
								}
								BgL_arg1816z00_4095 = (BgL_arg1817z00_4096 - OBJECT_TYPE);
							}
							BgL_arg1984z00_4094 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_4095);
						}
						BgL_arg1983z00_4093 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1984z00_4094);
					}
					{	/* Globalize/ginfo.scm 90 */
						long BgL_res2106z00_4098;

						{	/* Globalize/ginfo.scm 90 */
							obj_t BgL_tmpz00_6117;

							BgL_tmpz00_6117 = ((obj_t) BgL_arg1983z00_4093);
							BgL_res2106z00_4098 = BGL_CLASS_INDEX(BgL_tmpz00_6117);
						}
						BgL_arg1982z00_4092 = BgL_res2106z00_4098;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_globalz00_bglt) BgL_o1217z00_3718)), BgL_arg1982z00_4092);
			}
			{	/* Globalize/ginfo.scm 90 */
				BgL_objectz00_bglt BgL_tmpz00_6123;

				BgL_tmpz00_6123 =
					((BgL_objectz00_bglt) ((BgL_globalz00_bglt) BgL_o1217z00_3718));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6123, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_globalz00_bglt) BgL_o1217z00_3718));
			return ((BgL_globalz00_bglt) ((BgL_globalz00_bglt) BgL_o1217z00_3718));
		}

	}



/* &<@anonymous:1980> */
	obj_t BGl_z62zc3z04anonymousza31980ze3ze5zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3719, obj_t BgL_new1216z00_3720)
	{
		{	/* Globalize/ginfo.scm 90 */
			{
				BgL_globalz00_bglt BgL_auxz00_6131;

				((((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_globalz00_bglt) BgL_new1216z00_3720))))->BgL_idz00) =
					((obj_t) CNST_TABLE_REF(((long) 35))), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_globalz00_bglt)
										BgL_new1216z00_3720))))->BgL_namez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_6139;

					{	/* Globalize/ginfo.scm 90 */
						obj_t BgL_classz00_4100;

						BgL_classz00_4100 = BGl_typez00zztype_typez00;
						{	/* Globalize/ginfo.scm 90 */
							obj_t BgL__ortest_1106z00_4101;

							BgL__ortest_1106z00_4101 = BGL_CLASS_NIL(BgL_classz00_4100);
							if (CBOOL(BgL__ortest_1106z00_4101))
								{	/* Globalize/ginfo.scm 90 */
									BgL_auxz00_6139 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_4101);
								}
							else
								{	/* Globalize/ginfo.scm 90 */
									BgL_auxz00_6139 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_4100));
								}
						}
					}
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt)
										((BgL_globalz00_bglt) BgL_new1216z00_3720))))->
							BgL_typez00) = ((BgL_typez00_bglt) BgL_auxz00_6139), BUNSPEC);
				}
				{
					BgL_valuez00_bglt BgL_auxz00_6149;

					{	/* Globalize/ginfo.scm 90 */
						obj_t BgL_classz00_4102;

						BgL_classz00_4102 = BGl_valuez00zzast_varz00;
						{	/* Globalize/ginfo.scm 90 */
							obj_t BgL__ortest_1106z00_4103;

							BgL__ortest_1106z00_4103 = BGL_CLASS_NIL(BgL_classz00_4102);
							if (CBOOL(BgL__ortest_1106z00_4103))
								{	/* Globalize/ginfo.scm 90 */
									BgL_auxz00_6149 =
										((BgL_valuez00_bglt) BgL__ortest_1106z00_4103);
								}
							else
								{	/* Globalize/ginfo.scm 90 */
									BgL_auxz00_6149 =
										((BgL_valuez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_4102));
								}
						}
					}
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt)
										((BgL_globalz00_bglt) BgL_new1216z00_3720))))->
							BgL_valuez00) = ((BgL_valuez00_bglt) BgL_auxz00_6149), BUNSPEC);
				}
				((((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_globalz00_bglt) BgL_new1216z00_3720))))->
						BgL_accessz00) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_globalz00_bglt)
										BgL_new1216z00_3720))))->BgL_fastzd2alphazd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_globalz00_bglt)
										BgL_new1216z00_3720))))->BgL_removablez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_globalz00_bglt)
										BgL_new1216z00_3720))))->BgL_occurrencez00) =
					((long) ((long) 0)), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_globalz00_bglt)
										BgL_new1216z00_3720))))->BgL_occurrencewz00) =
					((long) ((long) 0)), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_globalz00_bglt)
										BgL_new1216z00_3720))))->BgL_userzf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_globalz00_bglt)
							COBJECT(((BgL_globalz00_bglt) ((BgL_globalz00_bglt)
										BgL_new1216z00_3720))))->BgL_modulez00) =
					((obj_t) CNST_TABLE_REF(((long) 35))), BUNSPEC);
				((((BgL_globalz00_bglt)
							COBJECT(((BgL_globalz00_bglt) ((BgL_globalz00_bglt)
										BgL_new1216z00_3720))))->BgL_importz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_globalz00_bglt)
							COBJECT(((BgL_globalz00_bglt) ((BgL_globalz00_bglt)
										BgL_new1216z00_3720))))->BgL_evaluablezf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_globalz00_bglt)
							COBJECT(((BgL_globalz00_bglt) ((BgL_globalz00_bglt)
										BgL_new1216z00_3720))))->BgL_evalzf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_globalz00_bglt)
							COBJECT(((BgL_globalz00_bglt) ((BgL_globalz00_bglt)
										BgL_new1216z00_3720))))->BgL_libraryz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_globalz00_bglt)
							COBJECT(((BgL_globalz00_bglt) ((BgL_globalz00_bglt)
										BgL_new1216z00_3720))))->BgL_pragmaz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_globalz00_bglt)
							COBJECT(((BgL_globalz00_bglt) ((BgL_globalz00_bglt)
										BgL_new1216z00_3720))))->BgL_srcz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_globalz00_bglt)
							COBJECT(((BgL_globalz00_bglt) ((BgL_globalz00_bglt)
										BgL_new1216z00_3720))))->BgL_jvmzd2typezd2namez00) =
					((obj_t) BGl_string2226z00zzglobaliza7e_ginfoza7), BUNSPEC);
				((((BgL_globalz00_bglt)
							COBJECT(((BgL_globalz00_bglt) ((BgL_globalz00_bglt)
										BgL_new1216z00_3720))))->BgL_initz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_globalz00_bglt)
							COBJECT(((BgL_globalz00_bglt) ((BgL_globalz00_bglt)
										BgL_new1216z00_3720))))->BgL_aliasz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_globalzf2ginfozf2_bglt BgL_auxz00_6208;

					{
						obj_t BgL_auxz00_6209;

						{	/* Globalize/ginfo.scm 90 */
							BgL_objectz00_bglt BgL_tmpz00_6210;

							BgL_tmpz00_6210 =
								((BgL_objectz00_bglt)
								((BgL_globalz00_bglt) BgL_new1216z00_3720));
							BgL_auxz00_6209 = BGL_OBJECT_WIDENING(BgL_tmpz00_6210);
						}
						BgL_auxz00_6208 = ((BgL_globalzf2ginfozf2_bglt) BgL_auxz00_6209);
					}
					((((BgL_globalzf2ginfozf2_bglt) COBJECT(BgL_auxz00_6208))->
							BgL_escapezf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
				}
				{
					BgL_globalzf2ginfozf2_bglt BgL_auxz00_6216;

					{
						obj_t BgL_auxz00_6217;

						{	/* Globalize/ginfo.scm 90 */
							BgL_objectz00_bglt BgL_tmpz00_6218;

							BgL_tmpz00_6218 =
								((BgL_objectz00_bglt)
								((BgL_globalz00_bglt) BgL_new1216z00_3720));
							BgL_auxz00_6217 = BGL_OBJECT_WIDENING(BgL_tmpz00_6218);
						}
						BgL_auxz00_6216 = ((BgL_globalzf2ginfozf2_bglt) BgL_auxz00_6217);
					}
					((((BgL_globalzf2ginfozf2_bglt) COBJECT(BgL_auxz00_6216))->
							BgL_globalzd2closurezd2) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				BgL_auxz00_6131 = ((BgL_globalz00_bglt) BgL_new1216z00_3720);
				return ((obj_t) BgL_auxz00_6131);
			}
		}

	}



/* &lambda1977 */
	BgL_globalz00_bglt BGl_z62lambda1977z62zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3721, obj_t BgL_o1213z00_3722)
	{
		{	/* Globalize/ginfo.scm 90 */
			{	/* Globalize/ginfo.scm 90 */
				BgL_globalzf2ginfozf2_bglt BgL_wide1215z00_4105;

				BgL_wide1215z00_4105 =
					((BgL_globalzf2ginfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_globalzf2ginfozf2_bgl))));
				{	/* Globalize/ginfo.scm 90 */
					obj_t BgL_auxz00_6231;
					BgL_objectz00_bglt BgL_tmpz00_6227;

					BgL_auxz00_6231 = ((obj_t) BgL_wide1215z00_4105);
					BgL_tmpz00_6227 =
						((BgL_objectz00_bglt)
						((BgL_globalz00_bglt) ((BgL_globalz00_bglt) BgL_o1213z00_3722)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6227, BgL_auxz00_6231);
				}
				((BgL_objectz00_bglt)
					((BgL_globalz00_bglt) ((BgL_globalz00_bglt) BgL_o1213z00_3722)));
				{	/* Globalize/ginfo.scm 90 */
					long BgL_arg1979z00_4106;

					{	/* Globalize/ginfo.scm 90 */
						long BgL_res2103z00_4107;

						BgL_res2103z00_4107 =
							BGL_CLASS_INDEX(BGl_globalzf2Ginfozf2zzglobaliza7e_ginfoza7);
						BgL_arg1979z00_4106 = BgL_res2103z00_4107;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_globalz00_bglt)
								((BgL_globalz00_bglt) BgL_o1213z00_3722))),
						BgL_arg1979z00_4106);
				}
				return
					((BgL_globalz00_bglt)
					((BgL_globalz00_bglt) ((BgL_globalz00_bglt) BgL_o1213z00_3722)));
			}
		}

	}



/* &lambda1974 */
	BgL_globalz00_bglt BGl_z62lambda1974z62zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3723, obj_t BgL_id1191z00_3724, obj_t BgL_name1192z00_3725,
		obj_t BgL_type1193z00_3726, obj_t BgL_value1194z00_3727,
		obj_t BgL_access1195z00_3728, obj_t BgL_fastzd2alpha1196zd2_3729,
		obj_t BgL_removable1197z00_3730, obj_t BgL_occurrence1198z00_3731,
		obj_t BgL_occurrencew1199z00_3732, obj_t BgL_userzf31200zf3_3733,
		obj_t BgL_module1201z00_3734, obj_t BgL_import1202z00_3735,
		obj_t BgL_evaluablezf31203zf3_3736, obj_t BgL_evalzf31204zf3_3737,
		obj_t BgL_library1205z00_3738, obj_t BgL_pragma1206z00_3739,
		obj_t BgL_src1207z00_3740, obj_t BgL_jvmzd2typezd2name1208z00_3741,
		obj_t BgL_init1209z00_3742, obj_t BgL_alias1210z00_3743,
		obj_t BgL_escapezf31211zf3_3744, obj_t BgL_globalzd2closure1212zd2_3745)
	{
		{	/* Globalize/ginfo.scm 90 */
			{	/* Globalize/ginfo.scm 90 */
				long BgL_occurrence1198z00_4111;
				long BgL_occurrencew1199z00_4112;
				bool_t BgL_userzf31200zf3_4113;
				bool_t BgL_evaluablezf31203zf3_4115;
				bool_t BgL_evalzf31204zf3_4116;
				bool_t BgL_escapezf31211zf3_4118;

				BgL_occurrence1198z00_4111 = (long) CINT(BgL_occurrence1198z00_3731);
				BgL_occurrencew1199z00_4112 = (long) CINT(BgL_occurrencew1199z00_3732);
				BgL_userzf31200zf3_4113 = CBOOL(BgL_userzf31200zf3_3733);
				BgL_evaluablezf31203zf3_4115 = CBOOL(BgL_evaluablezf31203zf3_3736);
				BgL_evalzf31204zf3_4116 = CBOOL(BgL_evalzf31204zf3_3737);
				BgL_escapezf31211zf3_4118 = CBOOL(BgL_escapezf31211zf3_3744);
				{	/* Globalize/ginfo.scm 90 */
					BgL_globalz00_bglt BgL_new1261z00_4119;

					{	/* Globalize/ginfo.scm 90 */
						BgL_globalz00_bglt BgL_tmp1259z00_4120;
						BgL_globalzf2ginfozf2_bglt BgL_wide1260z00_4121;

						{
							BgL_globalz00_bglt BgL_auxz00_6251;

							{	/* Globalize/ginfo.scm 90 */
								BgL_globalz00_bglt BgL_new1258z00_4122;

								BgL_new1258z00_4122 =
									((BgL_globalz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_globalz00_bgl))));
								{	/* Globalize/ginfo.scm 90 */
									long BgL_arg1976z00_4123;

									{	/* Globalize/ginfo.scm 90 */
										long BgL_res2101z00_4124;

										BgL_res2101z00_4124 =
											BGL_CLASS_INDEX(BGl_globalz00zzast_varz00);
										BgL_arg1976z00_4123 = BgL_res2101z00_4124;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1258z00_4122),
										BgL_arg1976z00_4123);
								}
								{	/* Globalize/ginfo.scm 90 */
									BgL_objectz00_bglt BgL_tmpz00_6256;

									BgL_tmpz00_6256 = ((BgL_objectz00_bglt) BgL_new1258z00_4122);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6256, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1258z00_4122);
								BgL_auxz00_6251 = BgL_new1258z00_4122;
							}
							BgL_tmp1259z00_4120 = ((BgL_globalz00_bglt) BgL_auxz00_6251);
						}
						BgL_wide1260z00_4121 =
							((BgL_globalzf2ginfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_globalzf2ginfozf2_bgl))));
						{	/* Globalize/ginfo.scm 90 */
							obj_t BgL_auxz00_6264;
							BgL_objectz00_bglt BgL_tmpz00_6262;

							BgL_auxz00_6264 = ((obj_t) BgL_wide1260z00_4121);
							BgL_tmpz00_6262 = ((BgL_objectz00_bglt) BgL_tmp1259z00_4120);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6262, BgL_auxz00_6264);
						}
						((BgL_objectz00_bglt) BgL_tmp1259z00_4120);
						{	/* Globalize/ginfo.scm 90 */
							long BgL_arg1975z00_4125;

							{	/* Globalize/ginfo.scm 90 */
								long BgL_res2102z00_4126;

								BgL_res2102z00_4126 =
									BGL_CLASS_INDEX(BGl_globalzf2Ginfozf2zzglobaliza7e_ginfoza7);
								BgL_arg1975z00_4125 = BgL_res2102z00_4126;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1259z00_4120),
								BgL_arg1975z00_4125);
						}
						BgL_new1261z00_4119 = ((BgL_globalz00_bglt) BgL_tmp1259z00_4120);
					}
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_new1261z00_4119)))->BgL_idz00) =
						((obj_t) ((obj_t) BgL_id1191z00_3724)), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1261z00_4119)))->BgL_namez00) =
						((obj_t) BgL_name1192z00_3725), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1261z00_4119)))->BgL_typez00) =
						((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1193z00_3726)),
						BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1261z00_4119)))->BgL_valuez00) =
						((BgL_valuez00_bglt) ((BgL_valuez00_bglt) BgL_value1194z00_3727)),
						BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1261z00_4119)))->BgL_accessz00) =
						((obj_t) BgL_access1195z00_3728), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1261z00_4119)))->BgL_fastzd2alphazd2) =
						((obj_t) BgL_fastzd2alpha1196zd2_3729), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1261z00_4119)))->BgL_removablez00) =
						((obj_t) BgL_removable1197z00_3730), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1261z00_4119)))->BgL_occurrencez00) =
						((long) BgL_occurrence1198z00_4111), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1261z00_4119)))->BgL_occurrencewz00) =
						((long) BgL_occurrencew1199z00_4112), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1261z00_4119)))->BgL_userzf3zf3) =
						((bool_t) BgL_userzf31200zf3_4113), BUNSPEC);
					((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
										BgL_new1261z00_4119)))->BgL_modulez00) =
						((obj_t) ((obj_t) BgL_module1201z00_3734)), BUNSPEC);
					((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
										BgL_new1261z00_4119)))->BgL_importz00) =
						((obj_t) BgL_import1202z00_3735), BUNSPEC);
					((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
										BgL_new1261z00_4119)))->BgL_evaluablezf3zf3) =
						((bool_t) BgL_evaluablezf31203zf3_4115), BUNSPEC);
					((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
										BgL_new1261z00_4119)))->BgL_evalzf3zf3) =
						((bool_t) BgL_evalzf31204zf3_4116), BUNSPEC);
					((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
										BgL_new1261z00_4119)))->BgL_libraryz00) =
						((obj_t) BgL_library1205z00_3738), BUNSPEC);
					((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
										BgL_new1261z00_4119)))->BgL_pragmaz00) =
						((obj_t) BgL_pragma1206z00_3739), BUNSPEC);
					((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
										BgL_new1261z00_4119)))->BgL_srcz00) =
						((obj_t) BgL_src1207z00_3740), BUNSPEC);
					((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
										BgL_new1261z00_4119)))->BgL_jvmzd2typezd2namez00) =
						((obj_t) ((obj_t) BgL_jvmzd2typezd2name1208z00_3741)), BUNSPEC);
					((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
										BgL_new1261z00_4119)))->BgL_initz00) =
						((obj_t) BgL_init1209z00_3742), BUNSPEC);
					((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
										BgL_new1261z00_4119)))->BgL_aliasz00) =
						((obj_t) BgL_alias1210z00_3743), BUNSPEC);
					{
						BgL_globalzf2ginfozf2_bglt BgL_auxz00_6317;

						{
							obj_t BgL_auxz00_6318;

							{	/* Globalize/ginfo.scm 90 */
								BgL_objectz00_bglt BgL_tmpz00_6319;

								BgL_tmpz00_6319 = ((BgL_objectz00_bglt) BgL_new1261z00_4119);
								BgL_auxz00_6318 = BGL_OBJECT_WIDENING(BgL_tmpz00_6319);
							}
							BgL_auxz00_6317 = ((BgL_globalzf2ginfozf2_bglt) BgL_auxz00_6318);
						}
						((((BgL_globalzf2ginfozf2_bglt) COBJECT(BgL_auxz00_6317))->
								BgL_escapezf3zf3) =
							((bool_t) BgL_escapezf31211zf3_4118), BUNSPEC);
					}
					{
						BgL_globalzf2ginfozf2_bglt BgL_auxz00_6324;

						{
							obj_t BgL_auxz00_6325;

							{	/* Globalize/ginfo.scm 90 */
								BgL_objectz00_bglt BgL_tmpz00_6326;

								BgL_tmpz00_6326 = ((BgL_objectz00_bglt) BgL_new1261z00_4119);
								BgL_auxz00_6325 = BGL_OBJECT_WIDENING(BgL_tmpz00_6326);
							}
							BgL_auxz00_6324 = ((BgL_globalzf2ginfozf2_bglt) BgL_auxz00_6325);
						}
						((((BgL_globalzf2ginfozf2_bglt) COBJECT(BgL_auxz00_6324))->
								BgL_globalzd2closurezd2) =
							((obj_t) BgL_globalzd2closure1212zd2_3745), BUNSPEC);
					}
					return BgL_new1261z00_4119;
				}
			}
		}

	}



/* &<@anonymous:1999> */
	obj_t BGl_z62zc3z04anonymousza31999ze3ze5zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3746)
	{
		{	/* Globalize/ginfo.scm 90 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1998 */
	obj_t BGl_z62lambda1998z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3747,
		obj_t BgL_oz00_3748, obj_t BgL_vz00_3749)
	{
		{	/* Globalize/ginfo.scm 90 */
			{
				BgL_globalzf2ginfozf2_bglt BgL_auxz00_6332;

				{
					obj_t BgL_auxz00_6333;

					{	/* Globalize/ginfo.scm 90 */
						BgL_objectz00_bglt BgL_tmpz00_6334;

						BgL_tmpz00_6334 =
							((BgL_objectz00_bglt) ((BgL_globalz00_bglt) BgL_oz00_3748));
						BgL_auxz00_6333 = BGL_OBJECT_WIDENING(BgL_tmpz00_6334);
					}
					BgL_auxz00_6332 = ((BgL_globalzf2ginfozf2_bglt) BgL_auxz00_6333);
				}
				return
					((((BgL_globalzf2ginfozf2_bglt) COBJECT(BgL_auxz00_6332))->
						BgL_globalzd2closurezd2) = ((obj_t) BgL_vz00_3749), BUNSPEC);
			}
		}

	}



/* &lambda1997 */
	obj_t BGl_z62lambda1997z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3750,
		obj_t BgL_oz00_3751)
	{
		{	/* Globalize/ginfo.scm 90 */
			{
				BgL_globalzf2ginfozf2_bglt BgL_auxz00_6340;

				{
					obj_t BgL_auxz00_6341;

					{	/* Globalize/ginfo.scm 90 */
						BgL_objectz00_bglt BgL_tmpz00_6342;

						BgL_tmpz00_6342 =
							((BgL_objectz00_bglt) ((BgL_globalz00_bglt) BgL_oz00_3751));
						BgL_auxz00_6341 = BGL_OBJECT_WIDENING(BgL_tmpz00_6342);
					}
					BgL_auxz00_6340 = ((BgL_globalzf2ginfozf2_bglt) BgL_auxz00_6341);
				}
				return
					(((BgL_globalzf2ginfozf2_bglt) COBJECT(BgL_auxz00_6340))->
					BgL_globalzd2closurezd2);
			}
		}

	}



/* &<@anonymous:1991> */
	obj_t BGl_z62zc3z04anonymousza31991ze3ze5zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3752)
	{
		{	/* Globalize/ginfo.scm 90 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1990 */
	obj_t BGl_z62lambda1990z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3753,
		obj_t BgL_oz00_3754, obj_t BgL_vz00_3755)
	{
		{	/* Globalize/ginfo.scm 90 */
			{	/* Globalize/ginfo.scm 90 */
				bool_t BgL_vz00_4130;

				BgL_vz00_4130 = CBOOL(BgL_vz00_3755);
				{
					BgL_globalzf2ginfozf2_bglt BgL_auxz00_6350;

					{
						obj_t BgL_auxz00_6351;

						{	/* Globalize/ginfo.scm 90 */
							BgL_objectz00_bglt BgL_tmpz00_6352;

							BgL_tmpz00_6352 =
								((BgL_objectz00_bglt) ((BgL_globalz00_bglt) BgL_oz00_3754));
							BgL_auxz00_6351 = BGL_OBJECT_WIDENING(BgL_tmpz00_6352);
						}
						BgL_auxz00_6350 = ((BgL_globalzf2ginfozf2_bglt) BgL_auxz00_6351);
					}
					return
						((((BgL_globalzf2ginfozf2_bglt) COBJECT(BgL_auxz00_6350))->
							BgL_escapezf3zf3) = ((bool_t) BgL_vz00_4130), BUNSPEC);
				}
			}
		}

	}



/* &lambda1989 */
	obj_t BGl_z62lambda1989z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3756,
		obj_t BgL_oz00_3757)
	{
		{	/* Globalize/ginfo.scm 90 */
			{	/* Globalize/ginfo.scm 90 */
				bool_t BgL_tmpz00_6358;

				{
					BgL_globalzf2ginfozf2_bglt BgL_auxz00_6359;

					{
						obj_t BgL_auxz00_6360;

						{	/* Globalize/ginfo.scm 90 */
							BgL_objectz00_bglt BgL_tmpz00_6361;

							BgL_tmpz00_6361 =
								((BgL_objectz00_bglt) ((BgL_globalz00_bglt) BgL_oz00_3757));
							BgL_auxz00_6360 = BGL_OBJECT_WIDENING(BgL_tmpz00_6361);
						}
						BgL_auxz00_6359 = ((BgL_globalzf2ginfozf2_bglt) BgL_auxz00_6360);
					}
					BgL_tmpz00_6358 =
						(((BgL_globalzf2ginfozf2_bglt) COBJECT(BgL_auxz00_6359))->
						BgL_escapezf3zf3);
				}
				return BBOOL(BgL_tmpz00_6358);
			}
		}

	}



/* &lambda1950 */
	BgL_localz00_bglt BGl_z62lambda1950z62zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3758, obj_t BgL_o1189z00_3759)
	{
		{	/* Globalize/ginfo.scm 84 */
			{	/* Globalize/ginfo.scm 84 */
				long BgL_arg1951z00_4133;

				{	/* Globalize/ginfo.scm 84 */
					obj_t BgL_arg1952z00_4134;

					{	/* Globalize/ginfo.scm 84 */
						obj_t BgL_arg1953z00_4135;

						{	/* Globalize/ginfo.scm 84 */
							long BgL_arg1816z00_4136;

							{	/* Globalize/ginfo.scm 84 */
								long BgL_arg1817z00_4137;

								{	/* Globalize/ginfo.scm 84 */
									long BgL_res2098z00_4138;

									BgL_res2098z00_4138 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_localz00_bglt) BgL_o1189z00_3759)));
									BgL_arg1817z00_4137 = BgL_res2098z00_4138;
								}
								BgL_arg1816z00_4136 = (BgL_arg1817z00_4137 - OBJECT_TYPE);
							}
							BgL_arg1953z00_4135 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_4136);
						}
						BgL_arg1952z00_4134 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1953z00_4135);
					}
					{	/* Globalize/ginfo.scm 84 */
						long BgL_res2100z00_4139;

						{	/* Globalize/ginfo.scm 84 */
							obj_t BgL_tmpz00_6374;

							BgL_tmpz00_6374 = ((obj_t) BgL_arg1952z00_4134);
							BgL_res2100z00_4139 = BGL_CLASS_INDEX(BgL_tmpz00_6374);
						}
						BgL_arg1951z00_4133 = BgL_res2100z00_4139;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_localz00_bglt) BgL_o1189z00_3759)), BgL_arg1951z00_4133);
			}
			{	/* Globalize/ginfo.scm 84 */
				BgL_objectz00_bglt BgL_tmpz00_6380;

				BgL_tmpz00_6380 =
					((BgL_objectz00_bglt) ((BgL_localz00_bglt) BgL_o1189z00_3759));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6380, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_localz00_bglt) BgL_o1189z00_3759));
			return ((BgL_localz00_bglt) ((BgL_localz00_bglt) BgL_o1189z00_3759));
		}

	}



/* &<@anonymous:1949> */
	obj_t BGl_z62zc3z04anonymousza31949ze3ze5zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3760, obj_t BgL_new1188z00_3761)
	{
		{	/* Globalize/ginfo.scm 84 */
			{
				BgL_localz00_bglt BgL_auxz00_6388;

				((((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_localz00_bglt) BgL_new1188z00_3761))))->BgL_idz00) =
					((obj_t) CNST_TABLE_REF(((long) 35))), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1188z00_3761))))->BgL_namez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_6396;

					{	/* Globalize/ginfo.scm 84 */
						obj_t BgL_classz00_4141;

						BgL_classz00_4141 = BGl_typez00zztype_typez00;
						{	/* Globalize/ginfo.scm 84 */
							obj_t BgL__ortest_1106z00_4142;

							BgL__ortest_1106z00_4142 = BGL_CLASS_NIL(BgL_classz00_4141);
							if (CBOOL(BgL__ortest_1106z00_4142))
								{	/* Globalize/ginfo.scm 84 */
									BgL_auxz00_6396 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_4142);
								}
							else
								{	/* Globalize/ginfo.scm 84 */
									BgL_auxz00_6396 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_4141));
								}
						}
					}
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt)
										((BgL_localz00_bglt) BgL_new1188z00_3761))))->BgL_typez00) =
						((BgL_typez00_bglt) BgL_auxz00_6396), BUNSPEC);
				}
				{
					BgL_valuez00_bglt BgL_auxz00_6406;

					{	/* Globalize/ginfo.scm 84 */
						obj_t BgL_classz00_4143;

						BgL_classz00_4143 = BGl_valuez00zzast_varz00;
						{	/* Globalize/ginfo.scm 84 */
							obj_t BgL__ortest_1106z00_4144;

							BgL__ortest_1106z00_4144 = BGL_CLASS_NIL(BgL_classz00_4143);
							if (CBOOL(BgL__ortest_1106z00_4144))
								{	/* Globalize/ginfo.scm 84 */
									BgL_auxz00_6406 =
										((BgL_valuez00_bglt) BgL__ortest_1106z00_4144);
								}
							else
								{	/* Globalize/ginfo.scm 84 */
									BgL_auxz00_6406 =
										((BgL_valuez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_4143));
								}
						}
					}
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt)
										((BgL_localz00_bglt) BgL_new1188z00_3761))))->
							BgL_valuez00) = ((BgL_valuez00_bglt) BgL_auxz00_6406), BUNSPEC);
				}
				((((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_localz00_bglt) BgL_new1188z00_3761))))->BgL_accessz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1188z00_3761))))->BgL_fastzd2alphazd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1188z00_3761))))->BgL_removablez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1188z00_3761))))->BgL_occurrencez00) =
					((long) ((long) 0)), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1188z00_3761))))->BgL_occurrencewz00) =
					((long) ((long) 0)), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1188z00_3761))))->BgL_userzf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_localz00_bglt) COBJECT(((BgL_localz00_bglt) ((BgL_localz00_bglt)
										BgL_new1188z00_3761))))->BgL_keyz00) =
					((long) ((long) 0)), BUNSPEC);
				{
					BgL_localzf2ginfozf2_bglt BgL_auxz00_6437;

					{
						obj_t BgL_auxz00_6438;

						{	/* Globalize/ginfo.scm 84 */
							BgL_objectz00_bglt BgL_tmpz00_6439;

							BgL_tmpz00_6439 =
								((BgL_objectz00_bglt)
								((BgL_localz00_bglt) BgL_new1188z00_3761));
							BgL_auxz00_6438 = BGL_OBJECT_WIDENING(BgL_tmpz00_6439);
						}
						BgL_auxz00_6437 = ((BgL_localzf2ginfozf2_bglt) BgL_auxz00_6438);
					}
					((((BgL_localzf2ginfozf2_bglt) COBJECT(BgL_auxz00_6437))->
							BgL_escapezf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
				}
				{
					BgL_localzf2ginfozf2_bglt BgL_auxz00_6445;

					{
						obj_t BgL_auxz00_6446;

						{	/* Globalize/ginfo.scm 84 */
							BgL_objectz00_bglt BgL_tmpz00_6447;

							BgL_tmpz00_6447 =
								((BgL_objectz00_bglt)
								((BgL_localz00_bglt) BgL_new1188z00_3761));
							BgL_auxz00_6446 = BGL_OBJECT_WIDENING(BgL_tmpz00_6447);
						}
						BgL_auxz00_6445 = ((BgL_localzf2ginfozf2_bglt) BgL_auxz00_6446);
					}
					((((BgL_localzf2ginfozf2_bglt) COBJECT(BgL_auxz00_6445))->
							BgL_globaliza7edzf3z54) = ((bool_t) ((bool_t) 0)), BUNSPEC);
				}
				BgL_auxz00_6388 = ((BgL_localz00_bglt) BgL_new1188z00_3761);
				return ((obj_t) BgL_auxz00_6388);
			}
		}

	}



/* &lambda1947 */
	BgL_localz00_bglt BGl_z62lambda1947z62zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3762, obj_t BgL_o1185z00_3763)
	{
		{	/* Globalize/ginfo.scm 84 */
			{	/* Globalize/ginfo.scm 84 */
				BgL_localzf2ginfozf2_bglt BgL_wide1187z00_4146;

				BgL_wide1187z00_4146 =
					((BgL_localzf2ginfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_localzf2ginfozf2_bgl))));
				{	/* Globalize/ginfo.scm 84 */
					obj_t BgL_auxz00_6460;
					BgL_objectz00_bglt BgL_tmpz00_6456;

					BgL_auxz00_6460 = ((obj_t) BgL_wide1187z00_4146);
					BgL_tmpz00_6456 =
						((BgL_objectz00_bglt)
						((BgL_localz00_bglt) ((BgL_localz00_bglt) BgL_o1185z00_3763)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6456, BgL_auxz00_6460);
				}
				((BgL_objectz00_bglt)
					((BgL_localz00_bglt) ((BgL_localz00_bglt) BgL_o1185z00_3763)));
				{	/* Globalize/ginfo.scm 84 */
					long BgL_arg1948z00_4147;

					{	/* Globalize/ginfo.scm 84 */
						long BgL_res2097z00_4148;

						BgL_res2097z00_4148 =
							BGL_CLASS_INDEX(BGl_localzf2Ginfozf2zzglobaliza7e_ginfoza7);
						BgL_arg1948z00_4147 = BgL_res2097z00_4148;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_localz00_bglt)
								((BgL_localz00_bglt) BgL_o1185z00_3763))), BgL_arg1948z00_4147);
				}
				return
					((BgL_localz00_bglt)
					((BgL_localz00_bglt) ((BgL_localz00_bglt) BgL_o1185z00_3763)));
			}
		}

	}



/* &lambda1944 */
	BgL_localz00_bglt BGl_z62lambda1944z62zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3764, obj_t BgL_id1172z00_3765, obj_t BgL_name1173z00_3766,
		obj_t BgL_type1174z00_3767, obj_t BgL_value1175z00_3768,
		obj_t BgL_access1176z00_3769, obj_t BgL_fastzd2alpha1177zd2_3770,
		obj_t BgL_removable1178z00_3771, obj_t BgL_occurrence1179z00_3772,
		obj_t BgL_occurrencew1180z00_3773, obj_t BgL_userzf31181zf3_3774,
		obj_t BgL_key1182z00_3775, obj_t BgL_escapezf31183zf3_3776,
		obj_t BgL_globaliza7edzf31184z54_3777)
	{
		{	/* Globalize/ginfo.scm 84 */
			{	/* Globalize/ginfo.scm 84 */
				long BgL_occurrence1179z00_4152;
				long BgL_occurrencew1180z00_4153;
				bool_t BgL_userzf31181zf3_4154;
				long BgL_key1182z00_4155;
				bool_t BgL_escapezf31183zf3_4156;
				bool_t BgL_globaliza7edzf31184z54_4157;

				BgL_occurrence1179z00_4152 = (long) CINT(BgL_occurrence1179z00_3772);
				BgL_occurrencew1180z00_4153 = (long) CINT(BgL_occurrencew1180z00_3773);
				BgL_userzf31181zf3_4154 = CBOOL(BgL_userzf31181zf3_3774);
				BgL_key1182z00_4155 = (long) CINT(BgL_key1182z00_3775);
				BgL_escapezf31183zf3_4156 = CBOOL(BgL_escapezf31183zf3_3776);
				BgL_globaliza7edzf31184z54_4157 =
					CBOOL(BgL_globaliza7edzf31184z54_3777);
				{	/* Globalize/ginfo.scm 84 */
					BgL_localz00_bglt BgL_new1256z00_4158;

					{	/* Globalize/ginfo.scm 84 */
						BgL_localz00_bglt BgL_tmp1254z00_4159;
						BgL_localzf2ginfozf2_bglt BgL_wide1255z00_4160;

						{
							BgL_localz00_bglt BgL_auxz00_6480;

							{	/* Globalize/ginfo.scm 84 */
								BgL_localz00_bglt BgL_new1253z00_4161;

								BgL_new1253z00_4161 =
									((BgL_localz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_localz00_bgl))));
								{	/* Globalize/ginfo.scm 84 */
									long BgL_arg1946z00_4162;

									{	/* Globalize/ginfo.scm 84 */
										long BgL_res2095z00_4163;

										BgL_res2095z00_4163 =
											BGL_CLASS_INDEX(BGl_localz00zzast_varz00);
										BgL_arg1946z00_4162 = BgL_res2095z00_4163;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1253z00_4161),
										BgL_arg1946z00_4162);
								}
								{	/* Globalize/ginfo.scm 84 */
									BgL_objectz00_bglt BgL_tmpz00_6485;

									BgL_tmpz00_6485 = ((BgL_objectz00_bglt) BgL_new1253z00_4161);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6485, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1253z00_4161);
								BgL_auxz00_6480 = BgL_new1253z00_4161;
							}
							BgL_tmp1254z00_4159 = ((BgL_localz00_bglt) BgL_auxz00_6480);
						}
						BgL_wide1255z00_4160 =
							((BgL_localzf2ginfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_localzf2ginfozf2_bgl))));
						{	/* Globalize/ginfo.scm 84 */
							obj_t BgL_auxz00_6493;
							BgL_objectz00_bglt BgL_tmpz00_6491;

							BgL_auxz00_6493 = ((obj_t) BgL_wide1255z00_4160);
							BgL_tmpz00_6491 = ((BgL_objectz00_bglt) BgL_tmp1254z00_4159);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6491, BgL_auxz00_6493);
						}
						((BgL_objectz00_bglt) BgL_tmp1254z00_4159);
						{	/* Globalize/ginfo.scm 84 */
							long BgL_arg1945z00_4164;

							{	/* Globalize/ginfo.scm 84 */
								long BgL_res2096z00_4165;

								BgL_res2096z00_4165 =
									BGL_CLASS_INDEX(BGl_localzf2Ginfozf2zzglobaliza7e_ginfoza7);
								BgL_arg1945z00_4164 = BgL_res2096z00_4165;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1254z00_4159),
								BgL_arg1945z00_4164);
						}
						BgL_new1256z00_4158 = ((BgL_localz00_bglt) BgL_tmp1254z00_4159);
					}
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_new1256z00_4158)))->BgL_idz00) =
						((obj_t) ((obj_t) BgL_id1172z00_3765)), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1256z00_4158)))->BgL_namez00) =
						((obj_t) BgL_name1173z00_3766), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1256z00_4158)))->BgL_typez00) =
						((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1174z00_3767)),
						BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1256z00_4158)))->BgL_valuez00) =
						((BgL_valuez00_bglt) ((BgL_valuez00_bglt) BgL_value1175z00_3768)),
						BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1256z00_4158)))->BgL_accessz00) =
						((obj_t) BgL_access1176z00_3769), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1256z00_4158)))->BgL_fastzd2alphazd2) =
						((obj_t) BgL_fastzd2alpha1177zd2_3770), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1256z00_4158)))->BgL_removablez00) =
						((obj_t) BgL_removable1178z00_3771), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1256z00_4158)))->BgL_occurrencez00) =
						((long) BgL_occurrence1179z00_4152), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1256z00_4158)))->BgL_occurrencewz00) =
						((long) BgL_occurrencew1180z00_4153), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1256z00_4158)))->BgL_userzf3zf3) =
						((bool_t) BgL_userzf31181zf3_4154), BUNSPEC);
					((((BgL_localz00_bglt) COBJECT(((BgL_localz00_bglt)
										BgL_new1256z00_4158)))->BgL_keyz00) =
						((long) BgL_key1182z00_4155), BUNSPEC);
					{
						BgL_localzf2ginfozf2_bglt BgL_auxz00_6526;

						{
							obj_t BgL_auxz00_6527;

							{	/* Globalize/ginfo.scm 84 */
								BgL_objectz00_bglt BgL_tmpz00_6528;

								BgL_tmpz00_6528 = ((BgL_objectz00_bglt) BgL_new1256z00_4158);
								BgL_auxz00_6527 = BGL_OBJECT_WIDENING(BgL_tmpz00_6528);
							}
							BgL_auxz00_6526 = ((BgL_localzf2ginfozf2_bglt) BgL_auxz00_6527);
						}
						((((BgL_localzf2ginfozf2_bglt) COBJECT(BgL_auxz00_6526))->
								BgL_escapezf3zf3) =
							((bool_t) BgL_escapezf31183zf3_4156), BUNSPEC);
					}
					{
						BgL_localzf2ginfozf2_bglt BgL_auxz00_6533;

						{
							obj_t BgL_auxz00_6534;

							{	/* Globalize/ginfo.scm 84 */
								BgL_objectz00_bglt BgL_tmpz00_6535;

								BgL_tmpz00_6535 = ((BgL_objectz00_bglt) BgL_new1256z00_4158);
								BgL_auxz00_6534 = BGL_OBJECT_WIDENING(BgL_tmpz00_6535);
							}
							BgL_auxz00_6533 = ((BgL_localzf2ginfozf2_bglt) BgL_auxz00_6534);
						}
						((((BgL_localzf2ginfozf2_bglt) COBJECT(BgL_auxz00_6533))->
								BgL_globaliza7edzf3z54) =
							((bool_t) BgL_globaliza7edzf31184z54_4157), BUNSPEC);
					}
					return BgL_new1256z00_4158;
				}
			}
		}

	}



/* &<@anonymous:1967> */
	obj_t BGl_z62zc3z04anonymousza31967ze3ze5zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3778)
	{
		{	/* Globalize/ginfo.scm 84 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1966 */
	obj_t BGl_z62lambda1966z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3779,
		obj_t BgL_oz00_3780, obj_t BgL_vz00_3781)
	{
		{	/* Globalize/ginfo.scm 84 */
			{	/* Globalize/ginfo.scm 84 */
				bool_t BgL_vz00_4167;

				BgL_vz00_4167 = CBOOL(BgL_vz00_3781);
				{
					BgL_localzf2ginfozf2_bglt BgL_auxz00_6542;

					{
						obj_t BgL_auxz00_6543;

						{	/* Globalize/ginfo.scm 84 */
							BgL_objectz00_bglt BgL_tmpz00_6544;

							BgL_tmpz00_6544 =
								((BgL_objectz00_bglt) ((BgL_localz00_bglt) BgL_oz00_3780));
							BgL_auxz00_6543 = BGL_OBJECT_WIDENING(BgL_tmpz00_6544);
						}
						BgL_auxz00_6542 = ((BgL_localzf2ginfozf2_bglt) BgL_auxz00_6543);
					}
					return
						((((BgL_localzf2ginfozf2_bglt) COBJECT(BgL_auxz00_6542))->
							BgL_globaliza7edzf3z54) = ((bool_t) BgL_vz00_4167), BUNSPEC);
				}
			}
		}

	}



/* &lambda1965 */
	obj_t BGl_z62lambda1965z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3782,
		obj_t BgL_oz00_3783)
	{
		{	/* Globalize/ginfo.scm 84 */
			{	/* Globalize/ginfo.scm 84 */
				bool_t BgL_tmpz00_6550;

				{
					BgL_localzf2ginfozf2_bglt BgL_auxz00_6551;

					{
						obj_t BgL_auxz00_6552;

						{	/* Globalize/ginfo.scm 84 */
							BgL_objectz00_bglt BgL_tmpz00_6553;

							BgL_tmpz00_6553 =
								((BgL_objectz00_bglt) ((BgL_localz00_bglt) BgL_oz00_3783));
							BgL_auxz00_6552 = BGL_OBJECT_WIDENING(BgL_tmpz00_6553);
						}
						BgL_auxz00_6551 = ((BgL_localzf2ginfozf2_bglt) BgL_auxz00_6552);
					}
					BgL_tmpz00_6550 =
						(((BgL_localzf2ginfozf2_bglt) COBJECT(BgL_auxz00_6551))->
						BgL_globaliza7edzf3z54);
				}
				return BBOOL(BgL_tmpz00_6550);
			}
		}

	}



/* &<@anonymous:1960> */
	obj_t BGl_z62zc3z04anonymousza31960ze3ze5zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3784)
	{
		{	/* Globalize/ginfo.scm 84 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1959 */
	obj_t BGl_z62lambda1959z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3785,
		obj_t BgL_oz00_3786, obj_t BgL_vz00_3787)
	{
		{	/* Globalize/ginfo.scm 84 */
			{	/* Globalize/ginfo.scm 84 */
				bool_t BgL_vz00_4170;

				BgL_vz00_4170 = CBOOL(BgL_vz00_3787);
				{
					BgL_localzf2ginfozf2_bglt BgL_auxz00_6562;

					{
						obj_t BgL_auxz00_6563;

						{	/* Globalize/ginfo.scm 84 */
							BgL_objectz00_bglt BgL_tmpz00_6564;

							BgL_tmpz00_6564 =
								((BgL_objectz00_bglt) ((BgL_localz00_bglt) BgL_oz00_3786));
							BgL_auxz00_6563 = BGL_OBJECT_WIDENING(BgL_tmpz00_6564);
						}
						BgL_auxz00_6562 = ((BgL_localzf2ginfozf2_bglt) BgL_auxz00_6563);
					}
					return
						((((BgL_localzf2ginfozf2_bglt) COBJECT(BgL_auxz00_6562))->
							BgL_escapezf3zf3) = ((bool_t) BgL_vz00_4170), BUNSPEC);
				}
			}
		}

	}



/* &lambda1958 */
	obj_t BGl_z62lambda1958z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3788,
		obj_t BgL_oz00_3789)
	{
		{	/* Globalize/ginfo.scm 84 */
			{	/* Globalize/ginfo.scm 84 */
				bool_t BgL_tmpz00_6570;

				{
					BgL_localzf2ginfozf2_bglt BgL_auxz00_6571;

					{
						obj_t BgL_auxz00_6572;

						{	/* Globalize/ginfo.scm 84 */
							BgL_objectz00_bglt BgL_tmpz00_6573;

							BgL_tmpz00_6573 =
								((BgL_objectz00_bglt) ((BgL_localz00_bglt) BgL_oz00_3789));
							BgL_auxz00_6572 = BGL_OBJECT_WIDENING(BgL_tmpz00_6573);
						}
						BgL_auxz00_6571 = ((BgL_localzf2ginfozf2_bglt) BgL_auxz00_6572);
					}
					BgL_tmpz00_6570 =
						(((BgL_localzf2ginfozf2_bglt) COBJECT(BgL_auxz00_6571))->
						BgL_escapezf3zf3);
				}
				return BBOOL(BgL_tmpz00_6570);
			}
		}

	}



/* &lambda1906 */
	BgL_sexitz00_bglt BGl_z62lambda1906z62zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3790, obj_t BgL_o1170z00_3791)
	{
		{	/* Globalize/ginfo.scm 74 */
			{	/* Globalize/ginfo.scm 74 */
				long BgL_arg1907z00_4173;

				{	/* Globalize/ginfo.scm 74 */
					obj_t BgL_arg1908z00_4174;

					{	/* Globalize/ginfo.scm 74 */
						obj_t BgL_arg1909z00_4175;

						{	/* Globalize/ginfo.scm 74 */
							long BgL_arg1816z00_4176;

							{	/* Globalize/ginfo.scm 74 */
								long BgL_arg1817z00_4177;

								{	/* Globalize/ginfo.scm 74 */
									long BgL_res2092z00_4178;

									BgL_res2092z00_4178 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_sexitz00_bglt) BgL_o1170z00_3791)));
									BgL_arg1817z00_4177 = BgL_res2092z00_4178;
								}
								BgL_arg1816z00_4176 = (BgL_arg1817z00_4177 - OBJECT_TYPE);
							}
							BgL_arg1909z00_4175 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_4176);
						}
						BgL_arg1908z00_4174 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1909z00_4175);
					}
					{	/* Globalize/ginfo.scm 74 */
						long BgL_res2094z00_4179;

						{	/* Globalize/ginfo.scm 74 */
							obj_t BgL_tmpz00_6586;

							BgL_tmpz00_6586 = ((obj_t) BgL_arg1908z00_4174);
							BgL_res2094z00_4179 = BGL_CLASS_INDEX(BgL_tmpz00_6586);
						}
						BgL_arg1907z00_4173 = BgL_res2094z00_4179;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_sexitz00_bglt) BgL_o1170z00_3791)), BgL_arg1907z00_4173);
			}
			{	/* Globalize/ginfo.scm 74 */
				BgL_objectz00_bglt BgL_tmpz00_6592;

				BgL_tmpz00_6592 =
					((BgL_objectz00_bglt) ((BgL_sexitz00_bglt) BgL_o1170z00_3791));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6592, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_sexitz00_bglt) BgL_o1170z00_3791));
			return ((BgL_sexitz00_bglt) ((BgL_sexitz00_bglt) BgL_o1170z00_3791));
		}

	}



/* &<@anonymous:1905> */
	obj_t BGl_z62zc3z04anonymousza31905ze3ze5zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3792, obj_t BgL_new1169z00_3793)
	{
		{	/* Globalize/ginfo.scm 74 */
			{
				BgL_sexitz00_bglt BgL_auxz00_6600;

				((((BgL_sexitz00_bglt) COBJECT(
								((BgL_sexitz00_bglt)
									((BgL_sexitz00_bglt) BgL_new1169z00_3793))))->
						BgL_handlerz00) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sexitz00_bglt) COBJECT(((BgL_sexitz00_bglt) ((BgL_sexitz00_bglt)
										BgL_new1169z00_3793))))->BgL_detachedzf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				{
					BgL_sexitzf2ginfozf2_bglt BgL_auxz00_6607;

					{
						obj_t BgL_auxz00_6608;

						{	/* Globalize/ginfo.scm 74 */
							BgL_objectz00_bglt BgL_tmpz00_6609;

							BgL_tmpz00_6609 =
								((BgL_objectz00_bglt)
								((BgL_sexitz00_bglt) BgL_new1169z00_3793));
							BgL_auxz00_6608 = BGL_OBJECT_WIDENING(BgL_tmpz00_6609);
						}
						BgL_auxz00_6607 = ((BgL_sexitzf2ginfozf2_bglt) BgL_auxz00_6608);
					}
					((((BgL_sexitzf2ginfozf2_bglt) COBJECT(BgL_auxz00_6607))->
							BgL_gzf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
				}
				{
					BgL_sexitzf2ginfozf2_bglt BgL_auxz00_6615;

					{
						obj_t BgL_auxz00_6616;

						{	/* Globalize/ginfo.scm 74 */
							BgL_objectz00_bglt BgL_tmpz00_6617;

							BgL_tmpz00_6617 =
								((BgL_objectz00_bglt)
								((BgL_sexitz00_bglt) BgL_new1169z00_3793));
							BgL_auxz00_6616 = BGL_OBJECT_WIDENING(BgL_tmpz00_6617);
						}
						BgL_auxz00_6615 = ((BgL_sexitzf2ginfozf2_bglt) BgL_auxz00_6616);
					}
					((((BgL_sexitzf2ginfozf2_bglt) COBJECT(BgL_auxz00_6615))->
							BgL_kapturedzf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
				}
				{
					BgL_sexitzf2ginfozf2_bglt BgL_auxz00_6623;

					{
						obj_t BgL_auxz00_6624;

						{	/* Globalize/ginfo.scm 74 */
							BgL_objectz00_bglt BgL_tmpz00_6625;

							BgL_tmpz00_6625 =
								((BgL_objectz00_bglt)
								((BgL_sexitz00_bglt) BgL_new1169z00_3793));
							BgL_auxz00_6624 = BGL_OBJECT_WIDENING(BgL_tmpz00_6625);
						}
						BgL_auxz00_6623 = ((BgL_sexitzf2ginfozf2_bglt) BgL_auxz00_6624);
					}
					((((BgL_sexitzf2ginfozf2_bglt) COBJECT(BgL_auxz00_6623))->
							BgL_freezd2markzd2) = ((long) ((long) 0)), BUNSPEC);
				}
				{
					BgL_sexitzf2ginfozf2_bglt BgL_auxz00_6631;

					{
						obj_t BgL_auxz00_6632;

						{	/* Globalize/ginfo.scm 74 */
							BgL_objectz00_bglt BgL_tmpz00_6633;

							BgL_tmpz00_6633 =
								((BgL_objectz00_bglt)
								((BgL_sexitz00_bglt) BgL_new1169z00_3793));
							BgL_auxz00_6632 = BGL_OBJECT_WIDENING(BgL_tmpz00_6633);
						}
						BgL_auxz00_6631 = ((BgL_sexitzf2ginfozf2_bglt) BgL_auxz00_6632);
					}
					((((BgL_sexitzf2ginfozf2_bglt) COBJECT(BgL_auxz00_6631))->
							BgL_markz00) = ((long) ((long) 0)), BUNSPEC);
				}
				BgL_auxz00_6600 = ((BgL_sexitz00_bglt) BgL_new1169z00_3793);
				return ((obj_t) BgL_auxz00_6600);
			}
		}

	}



/* &lambda1903 */
	BgL_sexitz00_bglt BGl_z62lambda1903z62zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3794, obj_t BgL_o1166z00_3795)
	{
		{	/* Globalize/ginfo.scm 74 */
			{	/* Globalize/ginfo.scm 74 */
				BgL_sexitzf2ginfozf2_bglt BgL_wide1168z00_4182;

				BgL_wide1168z00_4182 =
					((BgL_sexitzf2ginfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_sexitzf2ginfozf2_bgl))));
				{	/* Globalize/ginfo.scm 74 */
					obj_t BgL_auxz00_6646;
					BgL_objectz00_bglt BgL_tmpz00_6642;

					BgL_auxz00_6646 = ((obj_t) BgL_wide1168z00_4182);
					BgL_tmpz00_6642 =
						((BgL_objectz00_bglt)
						((BgL_sexitz00_bglt) ((BgL_sexitz00_bglt) BgL_o1166z00_3795)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6642, BgL_auxz00_6646);
				}
				((BgL_objectz00_bglt)
					((BgL_sexitz00_bglt) ((BgL_sexitz00_bglt) BgL_o1166z00_3795)));
				{	/* Globalize/ginfo.scm 74 */
					long BgL_arg1904z00_4183;

					{	/* Globalize/ginfo.scm 74 */
						long BgL_res2091z00_4184;

						BgL_res2091z00_4184 =
							BGL_CLASS_INDEX(BGl_sexitzf2Ginfozf2zzglobaliza7e_ginfoza7);
						BgL_arg1904z00_4183 = BgL_res2091z00_4184;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_sexitz00_bglt)
								((BgL_sexitz00_bglt) BgL_o1166z00_3795))), BgL_arg1904z00_4183);
				}
				return
					((BgL_sexitz00_bglt)
					((BgL_sexitz00_bglt) ((BgL_sexitz00_bglt) BgL_o1166z00_3795)));
			}
		}

	}



/* &lambda1899 */
	BgL_sexitz00_bglt BGl_z62lambda1899z62zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3796, obj_t BgL_handler1160z00_3797,
		obj_t BgL_detachedzf31161zf3_3798, obj_t BgL_gzf31162zf3_3799,
		obj_t BgL_kapturedzf31163zf3_3800, obj_t BgL_freezd2mark1164zd2_3801,
		obj_t BgL_mark1165z00_3802)
	{
		{	/* Globalize/ginfo.scm 74 */
			{	/* Globalize/ginfo.scm 74 */
				bool_t BgL_detachedzf31161zf3_4185;
				bool_t BgL_gzf31162zf3_4186;
				bool_t BgL_kapturedzf31163zf3_4187;
				long BgL_freezd2mark1164zd2_4188;
				long BgL_mark1165z00_4189;

				BgL_detachedzf31161zf3_4185 = CBOOL(BgL_detachedzf31161zf3_3798);
				BgL_gzf31162zf3_4186 = CBOOL(BgL_gzf31162zf3_3799);
				BgL_kapturedzf31163zf3_4187 = CBOOL(BgL_kapturedzf31163zf3_3800);
				BgL_freezd2mark1164zd2_4188 = (long) CINT(BgL_freezd2mark1164zd2_3801);
				BgL_mark1165z00_4189 = (long) CINT(BgL_mark1165z00_3802);
				{	/* Globalize/ginfo.scm 74 */
					BgL_sexitz00_bglt BgL_new1251z00_4190;

					{	/* Globalize/ginfo.scm 74 */
						BgL_sexitz00_bglt BgL_tmp1249z00_4191;
						BgL_sexitzf2ginfozf2_bglt BgL_wide1250z00_4192;

						{
							BgL_sexitz00_bglt BgL_auxz00_6665;

							{	/* Globalize/ginfo.scm 74 */
								BgL_sexitz00_bglt BgL_new1248z00_4193;

								BgL_new1248z00_4193 =
									((BgL_sexitz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_sexitz00_bgl))));
								{	/* Globalize/ginfo.scm 74 */
									long BgL_arg1902z00_4194;

									{	/* Globalize/ginfo.scm 74 */
										long BgL_res2089z00_4195;

										BgL_res2089z00_4195 =
											BGL_CLASS_INDEX(BGl_sexitz00zzast_varz00);
										BgL_arg1902z00_4194 = BgL_res2089z00_4195;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1248z00_4193),
										BgL_arg1902z00_4194);
								}
								{	/* Globalize/ginfo.scm 74 */
									BgL_objectz00_bglt BgL_tmpz00_6670;

									BgL_tmpz00_6670 = ((BgL_objectz00_bglt) BgL_new1248z00_4193);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6670, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1248z00_4193);
								BgL_auxz00_6665 = BgL_new1248z00_4193;
							}
							BgL_tmp1249z00_4191 = ((BgL_sexitz00_bglt) BgL_auxz00_6665);
						}
						BgL_wide1250z00_4192 =
							((BgL_sexitzf2ginfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_sexitzf2ginfozf2_bgl))));
						{	/* Globalize/ginfo.scm 74 */
							obj_t BgL_auxz00_6678;
							BgL_objectz00_bglt BgL_tmpz00_6676;

							BgL_auxz00_6678 = ((obj_t) BgL_wide1250z00_4192);
							BgL_tmpz00_6676 = ((BgL_objectz00_bglt) BgL_tmp1249z00_4191);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6676, BgL_auxz00_6678);
						}
						((BgL_objectz00_bglt) BgL_tmp1249z00_4191);
						{	/* Globalize/ginfo.scm 74 */
							long BgL_arg1901z00_4196;

							{	/* Globalize/ginfo.scm 74 */
								long BgL_res2090z00_4197;

								BgL_res2090z00_4197 =
									BGL_CLASS_INDEX(BGl_sexitzf2Ginfozf2zzglobaliza7e_ginfoza7);
								BgL_arg1901z00_4196 = BgL_res2090z00_4197;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1249z00_4191),
								BgL_arg1901z00_4196);
						}
						BgL_new1251z00_4190 = ((BgL_sexitz00_bglt) BgL_tmp1249z00_4191);
					}
					((((BgL_sexitz00_bglt) COBJECT(
									((BgL_sexitz00_bglt) BgL_new1251z00_4190)))->BgL_handlerz00) =
						((obj_t) BgL_handler1160z00_3797), BUNSPEC);
					((((BgL_sexitz00_bglt) COBJECT(((BgL_sexitz00_bglt)
										BgL_new1251z00_4190)))->BgL_detachedzf3zf3) =
						((bool_t) BgL_detachedzf31161zf3_4185), BUNSPEC);
					{
						BgL_sexitzf2ginfozf2_bglt BgL_auxz00_6690;

						{
							obj_t BgL_auxz00_6691;

							{	/* Globalize/ginfo.scm 74 */
								BgL_objectz00_bglt BgL_tmpz00_6692;

								BgL_tmpz00_6692 = ((BgL_objectz00_bglt) BgL_new1251z00_4190);
								BgL_auxz00_6691 = BGL_OBJECT_WIDENING(BgL_tmpz00_6692);
							}
							BgL_auxz00_6690 = ((BgL_sexitzf2ginfozf2_bglt) BgL_auxz00_6691);
						}
						((((BgL_sexitzf2ginfozf2_bglt) COBJECT(BgL_auxz00_6690))->
								BgL_gzf3zf3) = ((bool_t) BgL_gzf31162zf3_4186), BUNSPEC);
					}
					{
						BgL_sexitzf2ginfozf2_bglt BgL_auxz00_6697;

						{
							obj_t BgL_auxz00_6698;

							{	/* Globalize/ginfo.scm 74 */
								BgL_objectz00_bglt BgL_tmpz00_6699;

								BgL_tmpz00_6699 = ((BgL_objectz00_bglt) BgL_new1251z00_4190);
								BgL_auxz00_6698 = BGL_OBJECT_WIDENING(BgL_tmpz00_6699);
							}
							BgL_auxz00_6697 = ((BgL_sexitzf2ginfozf2_bglt) BgL_auxz00_6698);
						}
						((((BgL_sexitzf2ginfozf2_bglt) COBJECT(BgL_auxz00_6697))->
								BgL_kapturedzf3zf3) =
							((bool_t) BgL_kapturedzf31163zf3_4187), BUNSPEC);
					}
					{
						BgL_sexitzf2ginfozf2_bglt BgL_auxz00_6704;

						{
							obj_t BgL_auxz00_6705;

							{	/* Globalize/ginfo.scm 74 */
								BgL_objectz00_bglt BgL_tmpz00_6706;

								BgL_tmpz00_6706 = ((BgL_objectz00_bglt) BgL_new1251z00_4190);
								BgL_auxz00_6705 = BGL_OBJECT_WIDENING(BgL_tmpz00_6706);
							}
							BgL_auxz00_6704 = ((BgL_sexitzf2ginfozf2_bglt) BgL_auxz00_6705);
						}
						((((BgL_sexitzf2ginfozf2_bglt) COBJECT(BgL_auxz00_6704))->
								BgL_freezd2markzd2) =
							((long) BgL_freezd2mark1164zd2_4188), BUNSPEC);
					}
					{
						BgL_sexitzf2ginfozf2_bglt BgL_auxz00_6711;

						{
							obj_t BgL_auxz00_6712;

							{	/* Globalize/ginfo.scm 74 */
								BgL_objectz00_bglt BgL_tmpz00_6713;

								BgL_tmpz00_6713 = ((BgL_objectz00_bglt) BgL_new1251z00_4190);
								BgL_auxz00_6712 = BGL_OBJECT_WIDENING(BgL_tmpz00_6713);
							}
							BgL_auxz00_6711 = ((BgL_sexitzf2ginfozf2_bglt) BgL_auxz00_6712);
						}
						((((BgL_sexitzf2ginfozf2_bglt) COBJECT(BgL_auxz00_6711))->
								BgL_markz00) = ((long) BgL_mark1165z00_4189), BUNSPEC);
					}
					return BgL_new1251z00_4190;
				}
			}
		}

	}



/* &<@anonymous:1937> */
	obj_t BGl_z62zc3z04anonymousza31937ze3ze5zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3803)
	{
		{	/* Globalize/ginfo.scm 74 */
			return BINT(((long) -10));
		}

	}



/* &lambda1936 */
	obj_t BGl_z62lambda1936z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3804,
		obj_t BgL_oz00_3805, obj_t BgL_vz00_3806)
	{
		{	/* Globalize/ginfo.scm 74 */
			{	/* Globalize/ginfo.scm 74 */
				long BgL_vz00_4199;

				BgL_vz00_4199 = (long) CINT(BgL_vz00_3806);
				{
					BgL_sexitzf2ginfozf2_bglt BgL_auxz00_6720;

					{
						obj_t BgL_auxz00_6721;

						{	/* Globalize/ginfo.scm 74 */
							BgL_objectz00_bglt BgL_tmpz00_6722;

							BgL_tmpz00_6722 =
								((BgL_objectz00_bglt) ((BgL_sexitz00_bglt) BgL_oz00_3805));
							BgL_auxz00_6721 = BGL_OBJECT_WIDENING(BgL_tmpz00_6722);
						}
						BgL_auxz00_6720 = ((BgL_sexitzf2ginfozf2_bglt) BgL_auxz00_6721);
					}
					return
						((((BgL_sexitzf2ginfozf2_bglt) COBJECT(BgL_auxz00_6720))->
							BgL_markz00) = ((long) BgL_vz00_4199), BUNSPEC);
		}}}

	}



/* &lambda1935 */
	obj_t BGl_z62lambda1935z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3807,
		obj_t BgL_oz00_3808)
	{
		{	/* Globalize/ginfo.scm 74 */
			{	/* Globalize/ginfo.scm 74 */
				long BgL_tmpz00_6728;

				{
					BgL_sexitzf2ginfozf2_bglt BgL_auxz00_6729;

					{
						obj_t BgL_auxz00_6730;

						{	/* Globalize/ginfo.scm 74 */
							BgL_objectz00_bglt BgL_tmpz00_6731;

							BgL_tmpz00_6731 =
								((BgL_objectz00_bglt) ((BgL_sexitz00_bglt) BgL_oz00_3808));
							BgL_auxz00_6730 = BGL_OBJECT_WIDENING(BgL_tmpz00_6731);
						}
						BgL_auxz00_6729 = ((BgL_sexitzf2ginfozf2_bglt) BgL_auxz00_6730);
					}
					BgL_tmpz00_6728 =
						(((BgL_sexitzf2ginfozf2_bglt) COBJECT(BgL_auxz00_6729))->
						BgL_markz00);
				}
				return BINT(BgL_tmpz00_6728);
			}
		}

	}



/* &<@anonymous:1930> */
	obj_t BGl_z62zc3z04anonymousza31930ze3ze5zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3809)
	{
		{	/* Globalize/ginfo.scm 74 */
			return BINT(((long) -10));
		}

	}



/* &lambda1929 */
	obj_t BGl_z62lambda1929z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3810,
		obj_t BgL_oz00_3811, obj_t BgL_vz00_3812)
	{
		{	/* Globalize/ginfo.scm 74 */
			{	/* Globalize/ginfo.scm 74 */
				long BgL_vz00_4202;

				BgL_vz00_4202 = (long) CINT(BgL_vz00_3812);
				{
					BgL_sexitzf2ginfozf2_bglt BgL_auxz00_6740;

					{
						obj_t BgL_auxz00_6741;

						{	/* Globalize/ginfo.scm 74 */
							BgL_objectz00_bglt BgL_tmpz00_6742;

							BgL_tmpz00_6742 =
								((BgL_objectz00_bglt) ((BgL_sexitz00_bglt) BgL_oz00_3811));
							BgL_auxz00_6741 = BGL_OBJECT_WIDENING(BgL_tmpz00_6742);
						}
						BgL_auxz00_6740 = ((BgL_sexitzf2ginfozf2_bglt) BgL_auxz00_6741);
					}
					return
						((((BgL_sexitzf2ginfozf2_bglt) COBJECT(BgL_auxz00_6740))->
							BgL_freezd2markzd2) = ((long) BgL_vz00_4202), BUNSPEC);
		}}}

	}



/* &lambda1928 */
	obj_t BGl_z62lambda1928z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3813,
		obj_t BgL_oz00_3814)
	{
		{	/* Globalize/ginfo.scm 74 */
			{	/* Globalize/ginfo.scm 74 */
				long BgL_tmpz00_6748;

				{
					BgL_sexitzf2ginfozf2_bglt BgL_auxz00_6749;

					{
						obj_t BgL_auxz00_6750;

						{	/* Globalize/ginfo.scm 74 */
							BgL_objectz00_bglt BgL_tmpz00_6751;

							BgL_tmpz00_6751 =
								((BgL_objectz00_bglt) ((BgL_sexitz00_bglt) BgL_oz00_3814));
							BgL_auxz00_6750 = BGL_OBJECT_WIDENING(BgL_tmpz00_6751);
						}
						BgL_auxz00_6749 = ((BgL_sexitzf2ginfozf2_bglt) BgL_auxz00_6750);
					}
					BgL_tmpz00_6748 =
						(((BgL_sexitzf2ginfozf2_bglt) COBJECT(BgL_auxz00_6749))->
						BgL_freezd2markzd2);
				}
				return BINT(BgL_tmpz00_6748);
			}
		}

	}



/* &<@anonymous:1923> */
	obj_t BGl_z62zc3z04anonymousza31923ze3ze5zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3815)
	{
		{	/* Globalize/ginfo.scm 74 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1922 */
	obj_t BGl_z62lambda1922z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3816,
		obj_t BgL_oz00_3817, obj_t BgL_vz00_3818)
	{
		{	/* Globalize/ginfo.scm 74 */
			{	/* Globalize/ginfo.scm 74 */
				bool_t BgL_vz00_4205;

				BgL_vz00_4205 = CBOOL(BgL_vz00_3818);
				{
					BgL_sexitzf2ginfozf2_bglt BgL_auxz00_6760;

					{
						obj_t BgL_auxz00_6761;

						{	/* Globalize/ginfo.scm 74 */
							BgL_objectz00_bglt BgL_tmpz00_6762;

							BgL_tmpz00_6762 =
								((BgL_objectz00_bglt) ((BgL_sexitz00_bglt) BgL_oz00_3817));
							BgL_auxz00_6761 = BGL_OBJECT_WIDENING(BgL_tmpz00_6762);
						}
						BgL_auxz00_6760 = ((BgL_sexitzf2ginfozf2_bglt) BgL_auxz00_6761);
					}
					return
						((((BgL_sexitzf2ginfozf2_bglt) COBJECT(BgL_auxz00_6760))->
							BgL_kapturedzf3zf3) = ((bool_t) BgL_vz00_4205), BUNSPEC);
				}
			}
		}

	}



/* &lambda1921 */
	obj_t BGl_z62lambda1921z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3819,
		obj_t BgL_oz00_3820)
	{
		{	/* Globalize/ginfo.scm 74 */
			{	/* Globalize/ginfo.scm 74 */
				bool_t BgL_tmpz00_6768;

				{
					BgL_sexitzf2ginfozf2_bglt BgL_auxz00_6769;

					{
						obj_t BgL_auxz00_6770;

						{	/* Globalize/ginfo.scm 74 */
							BgL_objectz00_bglt BgL_tmpz00_6771;

							BgL_tmpz00_6771 =
								((BgL_objectz00_bglt) ((BgL_sexitz00_bglt) BgL_oz00_3820));
							BgL_auxz00_6770 = BGL_OBJECT_WIDENING(BgL_tmpz00_6771);
						}
						BgL_auxz00_6769 = ((BgL_sexitzf2ginfozf2_bglt) BgL_auxz00_6770);
					}
					BgL_tmpz00_6768 =
						(((BgL_sexitzf2ginfozf2_bglt) COBJECT(BgL_auxz00_6769))->
						BgL_kapturedzf3zf3);
				}
				return BBOOL(BgL_tmpz00_6768);
			}
		}

	}



/* &<@anonymous:1916> */
	obj_t BGl_z62zc3z04anonymousza31916ze3ze5zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3821)
	{
		{	/* Globalize/ginfo.scm 74 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1915 */
	obj_t BGl_z62lambda1915z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3822,
		obj_t BgL_oz00_3823, obj_t BgL_vz00_3824)
	{
		{	/* Globalize/ginfo.scm 74 */
			{	/* Globalize/ginfo.scm 74 */
				bool_t BgL_vz00_4208;

				BgL_vz00_4208 = CBOOL(BgL_vz00_3824);
				{
					BgL_sexitzf2ginfozf2_bglt BgL_auxz00_6780;

					{
						obj_t BgL_auxz00_6781;

						{	/* Globalize/ginfo.scm 74 */
							BgL_objectz00_bglt BgL_tmpz00_6782;

							BgL_tmpz00_6782 =
								((BgL_objectz00_bglt) ((BgL_sexitz00_bglt) BgL_oz00_3823));
							BgL_auxz00_6781 = BGL_OBJECT_WIDENING(BgL_tmpz00_6782);
						}
						BgL_auxz00_6780 = ((BgL_sexitzf2ginfozf2_bglt) BgL_auxz00_6781);
					}
					return
						((((BgL_sexitzf2ginfozf2_bglt) COBJECT(BgL_auxz00_6780))->
							BgL_gzf3zf3) = ((bool_t) BgL_vz00_4208), BUNSPEC);
				}
			}
		}

	}



/* &lambda1914 */
	obj_t BGl_z62lambda1914z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3825,
		obj_t BgL_oz00_3826)
	{
		{	/* Globalize/ginfo.scm 74 */
			{	/* Globalize/ginfo.scm 74 */
				bool_t BgL_tmpz00_6788;

				{
					BgL_sexitzf2ginfozf2_bglt BgL_auxz00_6789;

					{
						obj_t BgL_auxz00_6790;

						{	/* Globalize/ginfo.scm 74 */
							BgL_objectz00_bglt BgL_tmpz00_6791;

							BgL_tmpz00_6791 =
								((BgL_objectz00_bglt) ((BgL_sexitz00_bglt) BgL_oz00_3826));
							BgL_auxz00_6790 = BGL_OBJECT_WIDENING(BgL_tmpz00_6791);
						}
						BgL_auxz00_6789 = ((BgL_sexitzf2ginfozf2_bglt) BgL_auxz00_6790);
					}
					BgL_tmpz00_6788 =
						(((BgL_sexitzf2ginfozf2_bglt) COBJECT(BgL_auxz00_6789))->
						BgL_gzf3zf3);
				}
				return BBOOL(BgL_tmpz00_6788);
			}
		}

	}



/* &lambda1850 */
	BgL_svarz00_bglt BGl_z62lambda1850z62zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3827, obj_t BgL_o1158z00_3828)
	{
		{	/* Globalize/ginfo.scm 62 */
			{	/* Globalize/ginfo.scm 62 */
				long BgL_arg1851z00_4211;

				{	/* Globalize/ginfo.scm 62 */
					obj_t BgL_arg1852z00_4212;

					{	/* Globalize/ginfo.scm 62 */
						obj_t BgL_arg1853z00_4213;

						{	/* Globalize/ginfo.scm 62 */
							long BgL_arg1816z00_4214;

							{	/* Globalize/ginfo.scm 62 */
								long BgL_arg1817z00_4215;

								{	/* Globalize/ginfo.scm 62 */
									long BgL_res2086z00_4216;

									BgL_res2086z00_4216 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_svarz00_bglt) BgL_o1158z00_3828)));
									BgL_arg1817z00_4215 = BgL_res2086z00_4216;
								}
								BgL_arg1816z00_4214 = (BgL_arg1817z00_4215 - OBJECT_TYPE);
							}
							BgL_arg1853z00_4213 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_4214);
						}
						BgL_arg1852z00_4212 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1853z00_4213);
					}
					{	/* Globalize/ginfo.scm 62 */
						long BgL_res2088z00_4217;

						{	/* Globalize/ginfo.scm 62 */
							obj_t BgL_tmpz00_6804;

							BgL_tmpz00_6804 = ((obj_t) BgL_arg1852z00_4212);
							BgL_res2088z00_4217 = BGL_CLASS_INDEX(BgL_tmpz00_6804);
						}
						BgL_arg1851z00_4211 = BgL_res2088z00_4217;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_svarz00_bglt) BgL_o1158z00_3828)), BgL_arg1851z00_4211);
			}
			{	/* Globalize/ginfo.scm 62 */
				BgL_objectz00_bglt BgL_tmpz00_6810;

				BgL_tmpz00_6810 =
					((BgL_objectz00_bglt) ((BgL_svarz00_bglt) BgL_o1158z00_3828));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6810, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_svarz00_bglt) BgL_o1158z00_3828));
			return ((BgL_svarz00_bglt) ((BgL_svarz00_bglt) BgL_o1158z00_3828));
		}

	}



/* &<@anonymous:1849> */
	obj_t BGl_z62zc3z04anonymousza31849ze3ze5zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3829, obj_t BgL_new1157z00_3830)
	{
		{	/* Globalize/ginfo.scm 62 */
			{
				BgL_svarz00_bglt BgL_auxz00_6818;

				((((BgL_svarz00_bglt) COBJECT(
								((BgL_svarz00_bglt)
									((BgL_svarz00_bglt) BgL_new1157z00_3830))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_svarzf2ginfozf2_bglt BgL_auxz00_6822;

					{
						obj_t BgL_auxz00_6823;

						{	/* Globalize/ginfo.scm 62 */
							BgL_objectz00_bglt BgL_tmpz00_6824;

							BgL_tmpz00_6824 =
								((BgL_objectz00_bglt) ((BgL_svarz00_bglt) BgL_new1157z00_3830));
							BgL_auxz00_6823 = BGL_OBJECT_WIDENING(BgL_tmpz00_6824);
						}
						BgL_auxz00_6822 = ((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_6823);
					}
					((((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_6822))->
							BgL_kapturedzf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
				}
				{
					BgL_svarzf2ginfozf2_bglt BgL_auxz00_6830;

					{
						obj_t BgL_auxz00_6831;

						{	/* Globalize/ginfo.scm 62 */
							BgL_objectz00_bglt BgL_tmpz00_6832;

							BgL_tmpz00_6832 =
								((BgL_objectz00_bglt) ((BgL_svarz00_bglt) BgL_new1157z00_3830));
							BgL_auxz00_6831 = BGL_OBJECT_WIDENING(BgL_tmpz00_6832);
						}
						BgL_auxz00_6830 = ((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_6831);
					}
					((((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_6830))->
							BgL_freezd2markzd2) = ((long) ((long) 0)), BUNSPEC);
				}
				{
					BgL_svarzf2ginfozf2_bglt BgL_auxz00_6838;

					{
						obj_t BgL_auxz00_6839;

						{	/* Globalize/ginfo.scm 62 */
							BgL_objectz00_bglt BgL_tmpz00_6840;

							BgL_tmpz00_6840 =
								((BgL_objectz00_bglt) ((BgL_svarz00_bglt) BgL_new1157z00_3830));
							BgL_auxz00_6839 = BGL_OBJECT_WIDENING(BgL_tmpz00_6840);
						}
						BgL_auxz00_6838 = ((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_6839);
					}
					((((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_6838))->
							BgL_markz00) = ((long) ((long) 0)), BUNSPEC);
				}
				{
					BgL_svarzf2ginfozf2_bglt BgL_auxz00_6846;

					{
						obj_t BgL_auxz00_6847;

						{	/* Globalize/ginfo.scm 62 */
							BgL_objectz00_bglt BgL_tmpz00_6848;

							BgL_tmpz00_6848 =
								((BgL_objectz00_bglt) ((BgL_svarz00_bglt) BgL_new1157z00_3830));
							BgL_auxz00_6847 = BGL_OBJECT_WIDENING(BgL_tmpz00_6848);
						}
						BgL_auxz00_6846 = ((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_6847);
					}
					((((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_6846))->
							BgL_celledzf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
				}
				{
					BgL_svarzf2ginfozf2_bglt BgL_auxz00_6854;

					{
						obj_t BgL_auxz00_6855;

						{	/* Globalize/ginfo.scm 62 */
							BgL_objectz00_bglt BgL_tmpz00_6856;

							BgL_tmpz00_6856 =
								((BgL_objectz00_bglt) ((BgL_svarz00_bglt) BgL_new1157z00_3830));
							BgL_auxz00_6855 = BGL_OBJECT_WIDENING(BgL_tmpz00_6856);
						}
						BgL_auxz00_6854 = ((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_6855);
					}
					((((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_6854))->
							BgL_stackablez00) = ((bool_t) ((bool_t) 0)), BUNSPEC);
				}
				BgL_auxz00_6818 = ((BgL_svarz00_bglt) BgL_new1157z00_3830);
				return ((obj_t) BgL_auxz00_6818);
			}
		}

	}



/* &lambda1847 */
	BgL_svarz00_bglt BGl_z62lambda1847z62zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3831, obj_t BgL_o1154z00_3832)
	{
		{	/* Globalize/ginfo.scm 62 */
			{	/* Globalize/ginfo.scm 62 */
				BgL_svarzf2ginfozf2_bglt BgL_wide1156z00_4220;

				BgL_wide1156z00_4220 =
					((BgL_svarzf2ginfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_svarzf2ginfozf2_bgl))));
				{	/* Globalize/ginfo.scm 62 */
					obj_t BgL_auxz00_6869;
					BgL_objectz00_bglt BgL_tmpz00_6865;

					BgL_auxz00_6869 = ((obj_t) BgL_wide1156z00_4220);
					BgL_tmpz00_6865 =
						((BgL_objectz00_bglt)
						((BgL_svarz00_bglt) ((BgL_svarz00_bglt) BgL_o1154z00_3832)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6865, BgL_auxz00_6869);
				}
				((BgL_objectz00_bglt)
					((BgL_svarz00_bglt) ((BgL_svarz00_bglt) BgL_o1154z00_3832)));
				{	/* Globalize/ginfo.scm 62 */
					long BgL_arg1848z00_4221;

					{	/* Globalize/ginfo.scm 62 */
						long BgL_res2085z00_4222;

						BgL_res2085z00_4222 =
							BGL_CLASS_INDEX(BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7);
						BgL_arg1848z00_4221 = BgL_res2085z00_4222;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_svarz00_bglt)
								((BgL_svarz00_bglt) BgL_o1154z00_3832))), BgL_arg1848z00_4221);
				}
				return
					((BgL_svarz00_bglt)
					((BgL_svarz00_bglt) ((BgL_svarz00_bglt) BgL_o1154z00_3832)));
			}
		}

	}



/* &lambda1843 */
	BgL_svarz00_bglt BGl_z62lambda1843z62zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3833, obj_t BgL_loc1148z00_3834,
		obj_t BgL_kapturedzf31149zf3_3835, obj_t BgL_freezd2mark1150zd2_3836,
		obj_t BgL_mark1151z00_3837, obj_t BgL_celledzf31152zf3_3838,
		obj_t BgL_stackable1153z00_3839)
	{
		{	/* Globalize/ginfo.scm 62 */
			{	/* Globalize/ginfo.scm 62 */
				bool_t BgL_kapturedzf31149zf3_4223;
				long BgL_freezd2mark1150zd2_4224;
				long BgL_mark1151z00_4225;
				bool_t BgL_celledzf31152zf3_4226;
				bool_t BgL_stackable1153z00_4227;

				BgL_kapturedzf31149zf3_4223 = CBOOL(BgL_kapturedzf31149zf3_3835);
				BgL_freezd2mark1150zd2_4224 = (long) CINT(BgL_freezd2mark1150zd2_3836);
				BgL_mark1151z00_4225 = (long) CINT(BgL_mark1151z00_3837);
				BgL_celledzf31152zf3_4226 = CBOOL(BgL_celledzf31152zf3_3838);
				BgL_stackable1153z00_4227 = CBOOL(BgL_stackable1153z00_3839);
				{	/* Globalize/ginfo.scm 62 */
					BgL_svarz00_bglt BgL_new1246z00_4228;

					{	/* Globalize/ginfo.scm 62 */
						BgL_svarz00_bglt BgL_tmp1244z00_4229;
						BgL_svarzf2ginfozf2_bglt BgL_wide1245z00_4230;

						{
							BgL_svarz00_bglt BgL_auxz00_6888;

							{	/* Globalize/ginfo.scm 62 */
								BgL_svarz00_bglt BgL_new1243z00_4231;

								BgL_new1243z00_4231 =
									((BgL_svarz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_svarz00_bgl))));
								{	/* Globalize/ginfo.scm 62 */
									long BgL_arg1846z00_4232;

									{	/* Globalize/ginfo.scm 62 */
										long BgL_res2083z00_4233;

										BgL_res2083z00_4233 =
											BGL_CLASS_INDEX(BGl_svarz00zzast_varz00);
										BgL_arg1846z00_4232 = BgL_res2083z00_4233;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1243z00_4231),
										BgL_arg1846z00_4232);
								}
								{	/* Globalize/ginfo.scm 62 */
									BgL_objectz00_bglt BgL_tmpz00_6893;

									BgL_tmpz00_6893 = ((BgL_objectz00_bglt) BgL_new1243z00_4231);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6893, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1243z00_4231);
								BgL_auxz00_6888 = BgL_new1243z00_4231;
							}
							BgL_tmp1244z00_4229 = ((BgL_svarz00_bglt) BgL_auxz00_6888);
						}
						BgL_wide1245z00_4230 =
							((BgL_svarzf2ginfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_svarzf2ginfozf2_bgl))));
						{	/* Globalize/ginfo.scm 62 */
							obj_t BgL_auxz00_6901;
							BgL_objectz00_bglt BgL_tmpz00_6899;

							BgL_auxz00_6901 = ((obj_t) BgL_wide1245z00_4230);
							BgL_tmpz00_6899 = ((BgL_objectz00_bglt) BgL_tmp1244z00_4229);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6899, BgL_auxz00_6901);
						}
						((BgL_objectz00_bglt) BgL_tmp1244z00_4229);
						{	/* Globalize/ginfo.scm 62 */
							long BgL_arg1845z00_4234;

							{	/* Globalize/ginfo.scm 62 */
								long BgL_res2084z00_4235;

								BgL_res2084z00_4235 =
									BGL_CLASS_INDEX(BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7);
								BgL_arg1845z00_4234 = BgL_res2084z00_4235;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1244z00_4229),
								BgL_arg1845z00_4234);
						}
						BgL_new1246z00_4228 = ((BgL_svarz00_bglt) BgL_tmp1244z00_4229);
					}
					((((BgL_svarz00_bglt) COBJECT(
									((BgL_svarz00_bglt) BgL_new1246z00_4228)))->BgL_locz00) =
						((obj_t) BgL_loc1148z00_3834), BUNSPEC);
					{
						BgL_svarzf2ginfozf2_bglt BgL_auxz00_6911;

						{
							obj_t BgL_auxz00_6912;

							{	/* Globalize/ginfo.scm 62 */
								BgL_objectz00_bglt BgL_tmpz00_6913;

								BgL_tmpz00_6913 = ((BgL_objectz00_bglt) BgL_new1246z00_4228);
								BgL_auxz00_6912 = BGL_OBJECT_WIDENING(BgL_tmpz00_6913);
							}
							BgL_auxz00_6911 = ((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_6912);
						}
						((((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_6911))->
								BgL_kapturedzf3zf3) =
							((bool_t) BgL_kapturedzf31149zf3_4223), BUNSPEC);
					}
					{
						BgL_svarzf2ginfozf2_bglt BgL_auxz00_6918;

						{
							obj_t BgL_auxz00_6919;

							{	/* Globalize/ginfo.scm 62 */
								BgL_objectz00_bglt BgL_tmpz00_6920;

								BgL_tmpz00_6920 = ((BgL_objectz00_bglt) BgL_new1246z00_4228);
								BgL_auxz00_6919 = BGL_OBJECT_WIDENING(BgL_tmpz00_6920);
							}
							BgL_auxz00_6918 = ((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_6919);
						}
						((((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_6918))->
								BgL_freezd2markzd2) =
							((long) BgL_freezd2mark1150zd2_4224), BUNSPEC);
					}
					{
						BgL_svarzf2ginfozf2_bglt BgL_auxz00_6925;

						{
							obj_t BgL_auxz00_6926;

							{	/* Globalize/ginfo.scm 62 */
								BgL_objectz00_bglt BgL_tmpz00_6927;

								BgL_tmpz00_6927 = ((BgL_objectz00_bglt) BgL_new1246z00_4228);
								BgL_auxz00_6926 = BGL_OBJECT_WIDENING(BgL_tmpz00_6927);
							}
							BgL_auxz00_6925 = ((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_6926);
						}
						((((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_6925))->
								BgL_markz00) = ((long) BgL_mark1151z00_4225), BUNSPEC);
					}
					{
						BgL_svarzf2ginfozf2_bglt BgL_auxz00_6932;

						{
							obj_t BgL_auxz00_6933;

							{	/* Globalize/ginfo.scm 62 */
								BgL_objectz00_bglt BgL_tmpz00_6934;

								BgL_tmpz00_6934 = ((BgL_objectz00_bglt) BgL_new1246z00_4228);
								BgL_auxz00_6933 = BGL_OBJECT_WIDENING(BgL_tmpz00_6934);
							}
							BgL_auxz00_6932 = ((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_6933);
						}
						((((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_6932))->
								BgL_celledzf3zf3) =
							((bool_t) BgL_celledzf31152zf3_4226), BUNSPEC);
					}
					{
						BgL_svarzf2ginfozf2_bglt BgL_auxz00_6939;

						{
							obj_t BgL_auxz00_6940;

							{	/* Globalize/ginfo.scm 62 */
								BgL_objectz00_bglt BgL_tmpz00_6941;

								BgL_tmpz00_6941 = ((BgL_objectz00_bglt) BgL_new1246z00_4228);
								BgL_auxz00_6940 = BGL_OBJECT_WIDENING(BgL_tmpz00_6941);
							}
							BgL_auxz00_6939 = ((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_6940);
						}
						((((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_6939))->
								BgL_stackablez00) =
							((bool_t) BgL_stackable1153z00_4227), BUNSPEC);
					}
					return BgL_new1246z00_4228;
				}
			}
		}

	}



/* &<@anonymous:1891> */
	obj_t BGl_z62zc3z04anonymousza31891ze3ze5zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3840)
	{
		{	/* Globalize/ginfo.scm 62 */
			return BBOOL(((bool_t) 1));
		}

	}



/* &lambda1890 */
	obj_t BGl_z62lambda1890z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3841,
		obj_t BgL_oz00_3842, obj_t BgL_vz00_3843)
	{
		{	/* Globalize/ginfo.scm 62 */
			{	/* Globalize/ginfo.scm 62 */
				bool_t BgL_vz00_4237;

				BgL_vz00_4237 = CBOOL(BgL_vz00_3843);
				{
					BgL_svarzf2ginfozf2_bglt BgL_auxz00_6948;

					{
						obj_t BgL_auxz00_6949;

						{	/* Globalize/ginfo.scm 62 */
							BgL_objectz00_bglt BgL_tmpz00_6950;

							BgL_tmpz00_6950 =
								((BgL_objectz00_bglt) ((BgL_svarz00_bglt) BgL_oz00_3842));
							BgL_auxz00_6949 = BGL_OBJECT_WIDENING(BgL_tmpz00_6950);
						}
						BgL_auxz00_6948 = ((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_6949);
					}
					return
						((((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_6948))->
							BgL_stackablez00) = ((bool_t) BgL_vz00_4237), BUNSPEC);
				}
			}
		}

	}



/* &lambda1889 */
	obj_t BGl_z62lambda1889z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3844,
		obj_t BgL_oz00_3845)
	{
		{	/* Globalize/ginfo.scm 62 */
			{	/* Globalize/ginfo.scm 62 */
				bool_t BgL_tmpz00_6956;

				{
					BgL_svarzf2ginfozf2_bglt BgL_auxz00_6957;

					{
						obj_t BgL_auxz00_6958;

						{	/* Globalize/ginfo.scm 62 */
							BgL_objectz00_bglt BgL_tmpz00_6959;

							BgL_tmpz00_6959 =
								((BgL_objectz00_bglt) ((BgL_svarz00_bglt) BgL_oz00_3845));
							BgL_auxz00_6958 = BGL_OBJECT_WIDENING(BgL_tmpz00_6959);
						}
						BgL_auxz00_6957 = ((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_6958);
					}
					BgL_tmpz00_6956 =
						(((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_6957))->
						BgL_stackablez00);
				}
				return BBOOL(BgL_tmpz00_6956);
			}
		}

	}



/* &<@anonymous:1884> */
	obj_t BGl_z62zc3z04anonymousza31884ze3ze5zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3846)
	{
		{	/* Globalize/ginfo.scm 62 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1883 */
	obj_t BGl_z62lambda1883z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3847,
		obj_t BgL_oz00_3848, obj_t BgL_vz00_3849)
	{
		{	/* Globalize/ginfo.scm 62 */
			{	/* Globalize/ginfo.scm 62 */
				bool_t BgL_vz00_4240;

				BgL_vz00_4240 = CBOOL(BgL_vz00_3849);
				{
					BgL_svarzf2ginfozf2_bglt BgL_auxz00_6968;

					{
						obj_t BgL_auxz00_6969;

						{	/* Globalize/ginfo.scm 62 */
							BgL_objectz00_bglt BgL_tmpz00_6970;

							BgL_tmpz00_6970 =
								((BgL_objectz00_bglt) ((BgL_svarz00_bglt) BgL_oz00_3848));
							BgL_auxz00_6969 = BGL_OBJECT_WIDENING(BgL_tmpz00_6970);
						}
						BgL_auxz00_6968 = ((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_6969);
					}
					return
						((((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_6968))->
							BgL_celledzf3zf3) = ((bool_t) BgL_vz00_4240), BUNSPEC);
				}
			}
		}

	}



/* &lambda1882 */
	obj_t BGl_z62lambda1882z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3850,
		obj_t BgL_oz00_3851)
	{
		{	/* Globalize/ginfo.scm 62 */
			{	/* Globalize/ginfo.scm 62 */
				bool_t BgL_tmpz00_6976;

				{
					BgL_svarzf2ginfozf2_bglt BgL_auxz00_6977;

					{
						obj_t BgL_auxz00_6978;

						{	/* Globalize/ginfo.scm 62 */
							BgL_objectz00_bglt BgL_tmpz00_6979;

							BgL_tmpz00_6979 =
								((BgL_objectz00_bglt) ((BgL_svarz00_bglt) BgL_oz00_3851));
							BgL_auxz00_6978 = BGL_OBJECT_WIDENING(BgL_tmpz00_6979);
						}
						BgL_auxz00_6977 = ((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_6978);
					}
					BgL_tmpz00_6976 =
						(((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_6977))->
						BgL_celledzf3zf3);
				}
				return BBOOL(BgL_tmpz00_6976);
			}
		}

	}



/* &<@anonymous:1876> */
	obj_t BGl_z62zc3z04anonymousza31876ze3ze5zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3852)
	{
		{	/* Globalize/ginfo.scm 62 */
			return BINT(((long) -10));
		}

	}



/* &lambda1875 */
	obj_t BGl_z62lambda1875z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3853,
		obj_t BgL_oz00_3854, obj_t BgL_vz00_3855)
	{
		{	/* Globalize/ginfo.scm 62 */
			{	/* Globalize/ginfo.scm 62 */
				long BgL_vz00_4243;

				BgL_vz00_4243 = (long) CINT(BgL_vz00_3855);
				{
					BgL_svarzf2ginfozf2_bglt BgL_auxz00_6988;

					{
						obj_t BgL_auxz00_6989;

						{	/* Globalize/ginfo.scm 62 */
							BgL_objectz00_bglt BgL_tmpz00_6990;

							BgL_tmpz00_6990 =
								((BgL_objectz00_bglt) ((BgL_svarz00_bglt) BgL_oz00_3854));
							BgL_auxz00_6989 = BGL_OBJECT_WIDENING(BgL_tmpz00_6990);
						}
						BgL_auxz00_6988 = ((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_6989);
					}
					return
						((((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_6988))->
							BgL_markz00) = ((long) BgL_vz00_4243), BUNSPEC);
		}}}

	}



/* &lambda1874 */
	obj_t BGl_z62lambda1874z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3856,
		obj_t BgL_oz00_3857)
	{
		{	/* Globalize/ginfo.scm 62 */
			{	/* Globalize/ginfo.scm 62 */
				long BgL_tmpz00_6996;

				{
					BgL_svarzf2ginfozf2_bglt BgL_auxz00_6997;

					{
						obj_t BgL_auxz00_6998;

						{	/* Globalize/ginfo.scm 62 */
							BgL_objectz00_bglt BgL_tmpz00_6999;

							BgL_tmpz00_6999 =
								((BgL_objectz00_bglt) ((BgL_svarz00_bglt) BgL_oz00_3857));
							BgL_auxz00_6998 = BGL_OBJECT_WIDENING(BgL_tmpz00_6999);
						}
						BgL_auxz00_6997 = ((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_6998);
					}
					BgL_tmpz00_6996 =
						(((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_6997))->
						BgL_markz00);
				}
				return BINT(BgL_tmpz00_6996);
			}
		}

	}



/* &<@anonymous:1869> */
	obj_t BGl_z62zc3z04anonymousza31869ze3ze5zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3858)
	{
		{	/* Globalize/ginfo.scm 62 */
			return BINT(((long) -10));
		}

	}



/* &lambda1868 */
	obj_t BGl_z62lambda1868z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3859,
		obj_t BgL_oz00_3860, obj_t BgL_vz00_3861)
	{
		{	/* Globalize/ginfo.scm 62 */
			{	/* Globalize/ginfo.scm 62 */
				long BgL_vz00_4246;

				BgL_vz00_4246 = (long) CINT(BgL_vz00_3861);
				{
					BgL_svarzf2ginfozf2_bglt BgL_auxz00_7008;

					{
						obj_t BgL_auxz00_7009;

						{	/* Globalize/ginfo.scm 62 */
							BgL_objectz00_bglt BgL_tmpz00_7010;

							BgL_tmpz00_7010 =
								((BgL_objectz00_bglt) ((BgL_svarz00_bglt) BgL_oz00_3860));
							BgL_auxz00_7009 = BGL_OBJECT_WIDENING(BgL_tmpz00_7010);
						}
						BgL_auxz00_7008 = ((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_7009);
					}
					return
						((((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7008))->
							BgL_freezd2markzd2) = ((long) BgL_vz00_4246), BUNSPEC);
		}}}

	}



/* &lambda1867 */
	obj_t BGl_z62lambda1867z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3862,
		obj_t BgL_oz00_3863)
	{
		{	/* Globalize/ginfo.scm 62 */
			{	/* Globalize/ginfo.scm 62 */
				long BgL_tmpz00_7016;

				{
					BgL_svarzf2ginfozf2_bglt BgL_auxz00_7017;

					{
						obj_t BgL_auxz00_7018;

						{	/* Globalize/ginfo.scm 62 */
							BgL_objectz00_bglt BgL_tmpz00_7019;

							BgL_tmpz00_7019 =
								((BgL_objectz00_bglt) ((BgL_svarz00_bglt) BgL_oz00_3863));
							BgL_auxz00_7018 = BGL_OBJECT_WIDENING(BgL_tmpz00_7019);
						}
						BgL_auxz00_7017 = ((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_7018);
					}
					BgL_tmpz00_7016 =
						(((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7017))->
						BgL_freezd2markzd2);
				}
				return BINT(BgL_tmpz00_7016);
			}
		}

	}



/* &<@anonymous:1861> */
	obj_t BGl_z62zc3z04anonymousza31861ze3ze5zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3864)
	{
		{	/* Globalize/ginfo.scm 62 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1860 */
	obj_t BGl_z62lambda1860z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3865,
		obj_t BgL_oz00_3866, obj_t BgL_vz00_3867)
	{
		{	/* Globalize/ginfo.scm 62 */
			{	/* Globalize/ginfo.scm 62 */
				bool_t BgL_vz00_4249;

				BgL_vz00_4249 = CBOOL(BgL_vz00_3867);
				{
					BgL_svarzf2ginfozf2_bglt BgL_auxz00_7028;

					{
						obj_t BgL_auxz00_7029;

						{	/* Globalize/ginfo.scm 62 */
							BgL_objectz00_bglt BgL_tmpz00_7030;

							BgL_tmpz00_7030 =
								((BgL_objectz00_bglt) ((BgL_svarz00_bglt) BgL_oz00_3866));
							BgL_auxz00_7029 = BGL_OBJECT_WIDENING(BgL_tmpz00_7030);
						}
						BgL_auxz00_7028 = ((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_7029);
					}
					return
						((((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7028))->
							BgL_kapturedzf3zf3) = ((bool_t) BgL_vz00_4249), BUNSPEC);
				}
			}
		}

	}



/* &lambda1859 */
	obj_t BGl_z62lambda1859z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3868,
		obj_t BgL_oz00_3869)
	{
		{	/* Globalize/ginfo.scm 62 */
			{	/* Globalize/ginfo.scm 62 */
				bool_t BgL_tmpz00_7036;

				{
					BgL_svarzf2ginfozf2_bglt BgL_auxz00_7037;

					{
						obj_t BgL_auxz00_7038;

						{	/* Globalize/ginfo.scm 62 */
							BgL_objectz00_bglt BgL_tmpz00_7039;

							BgL_tmpz00_7039 =
								((BgL_objectz00_bglt) ((BgL_svarz00_bglt) BgL_oz00_3869));
							BgL_auxz00_7038 = BGL_OBJECT_WIDENING(BgL_tmpz00_7039);
						}
						BgL_auxz00_7037 = ((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_7038);
					}
					BgL_tmpz00_7036 =
						(((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7037))->
						BgL_kapturedzf3zf3);
				}
				return BBOOL(BgL_tmpz00_7036);
			}
		}

	}



/* &lambda1499 */
	BgL_sfunz00_bglt BGl_z62lambda1499z62zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3870, obj_t BgL_o1146z00_3871)
	{
		{	/* Globalize/ginfo.scm 20 */
			{	/* Globalize/ginfo.scm 20 */
				long BgL_arg1518z00_4252;

				{	/* Globalize/ginfo.scm 20 */
					obj_t BgL_arg1521z00_4253;

					{	/* Globalize/ginfo.scm 20 */
						obj_t BgL_arg1528z00_4254;

						{	/* Globalize/ginfo.scm 20 */
							long BgL_arg1816z00_4255;

							{	/* Globalize/ginfo.scm 20 */
								long BgL_arg1817z00_4256;

								{	/* Globalize/ginfo.scm 20 */
									long BgL_res2080z00_4257;

									BgL_res2080z00_4257 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_sfunz00_bglt) BgL_o1146z00_3871)));
									BgL_arg1817z00_4256 = BgL_res2080z00_4257;
								}
								BgL_arg1816z00_4255 = (BgL_arg1817z00_4256 - OBJECT_TYPE);
							}
							BgL_arg1528z00_4254 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_4255);
						}
						BgL_arg1521z00_4253 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1528z00_4254);
					}
					{	/* Globalize/ginfo.scm 20 */
						long BgL_res2082z00_4258;

						{	/* Globalize/ginfo.scm 20 */
							obj_t BgL_tmpz00_7052;

							BgL_tmpz00_7052 = ((obj_t) BgL_arg1521z00_4253);
							BgL_res2082z00_4258 = BGL_CLASS_INDEX(BgL_tmpz00_7052);
						}
						BgL_arg1518z00_4252 = BgL_res2082z00_4258;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_sfunz00_bglt) BgL_o1146z00_3871)), BgL_arg1518z00_4252);
			}
			{	/* Globalize/ginfo.scm 20 */
				BgL_objectz00_bglt BgL_tmpz00_7058;

				BgL_tmpz00_7058 =
					((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_o1146z00_3871));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7058, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_o1146z00_3871));
			return ((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_o1146z00_3871));
		}

	}



/* &<@anonymous:1498> */
	obj_t BGl_z62zc3z04anonymousza31498ze3ze5zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3872, obj_t BgL_new1145z00_3873)
	{
		{	/* Globalize/ginfo.scm 20 */
			{
				BgL_sfunz00_bglt BgL_auxz00_7066;

				((((BgL_funz00_bglt) COBJECT(
								((BgL_funz00_bglt)
									((BgL_sfunz00_bglt) BgL_new1145z00_3873))))->BgL_arityz00) =
					((long) ((long) 0)), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1145z00_3873))))->BgL_sidezd2effectzd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1145z00_3873))))->BgL_predicatezd2ofzd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1145z00_3873))))->BgL_stackzd2allocatorzd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1145z00_3873))))->BgL_topzf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1145z00_3873))))->BgL_thezd2closurezd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1145z00_3873))))->BgL_effectz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1145z00_3873))))->BgL_failsafez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1145z00_3873))))->BgL_argszd2noescapezd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1145z00_3873))))->BgL_propertyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1145z00_3873))))->BgL_argsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1145z00_3873))))->BgL_argszd2namezd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1145z00_3873))))->BgL_bodyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1145z00_3873))))->BgL_classz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1145z00_3873))))->BgL_dssslzd2keywordszd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1145z00_3873))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1145z00_3873))))->BgL_optionalsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1145z00_3873))))->BgL_keysz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1145z00_3873))))->BgL_thezd2closurezd2globalz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1145z00_3873))))->BgL_strengthz00) =
					((obj_t) CNST_TABLE_REF(((long) 35))), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1145z00_3873))))->BgL_stackablez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7131;

					{
						obj_t BgL_auxz00_7132;

						{	/* Globalize/ginfo.scm 20 */
							BgL_objectz00_bglt BgL_tmpz00_7133;

							BgL_tmpz00_7133 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_new1145z00_3873));
							BgL_auxz00_7132 = BGL_OBJECT_WIDENING(BgL_tmpz00_7133);
						}
						BgL_auxz00_7131 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7132);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7131))->
							BgL_gzf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7139;

					{
						obj_t BgL_auxz00_7140;

						{	/* Globalize/ginfo.scm 20 */
							BgL_objectz00_bglt BgL_tmpz00_7141;

							BgL_tmpz00_7141 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_new1145z00_3873));
							BgL_auxz00_7140 = BGL_OBJECT_WIDENING(BgL_tmpz00_7141);
						}
						BgL_auxz00_7139 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7140);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7139))->
							BgL_cfromz00) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7147;

					{
						obj_t BgL_auxz00_7148;

						{	/* Globalize/ginfo.scm 20 */
							BgL_objectz00_bglt BgL_tmpz00_7149;

							BgL_tmpz00_7149 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_new1145z00_3873));
							BgL_auxz00_7148 = BGL_OBJECT_WIDENING(BgL_tmpz00_7149);
						}
						BgL_auxz00_7147 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7148);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7147))->
							BgL_cfromza2za2) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7155;

					{
						obj_t BgL_auxz00_7156;

						{	/* Globalize/ginfo.scm 20 */
							BgL_objectz00_bglt BgL_tmpz00_7157;

							BgL_tmpz00_7157 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_new1145z00_3873));
							BgL_auxz00_7156 = BGL_OBJECT_WIDENING(BgL_tmpz00_7157);
						}
						BgL_auxz00_7155 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7156);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7155))->BgL_ctoz00) =
						((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7163;

					{
						obj_t BgL_auxz00_7164;

						{	/* Globalize/ginfo.scm 20 */
							BgL_objectz00_bglt BgL_tmpz00_7165;

							BgL_tmpz00_7165 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_new1145z00_3873));
							BgL_auxz00_7164 = BGL_OBJECT_WIDENING(BgL_tmpz00_7165);
						}
						BgL_auxz00_7163 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7164);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7163))->
							BgL_ctoza2za2) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7171;

					{
						obj_t BgL_auxz00_7172;

						{	/* Globalize/ginfo.scm 20 */
							BgL_objectz00_bglt BgL_tmpz00_7173;

							BgL_tmpz00_7173 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_new1145z00_3873));
							BgL_auxz00_7172 = BGL_OBJECT_WIDENING(BgL_tmpz00_7173);
						}
						BgL_auxz00_7171 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7172);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7171))->
							BgL_efunctionsz00) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7179;

					{
						obj_t BgL_auxz00_7180;

						{	/* Globalize/ginfo.scm 20 */
							BgL_objectz00_bglt BgL_tmpz00_7181;

							BgL_tmpz00_7181 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_new1145z00_3873));
							BgL_auxz00_7180 = BGL_OBJECT_WIDENING(BgL_tmpz00_7181);
						}
						BgL_auxz00_7179 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7180);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7179))->
							BgL_integratorz00) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7187;

					{
						obj_t BgL_auxz00_7188;

						{	/* Globalize/ginfo.scm 20 */
							BgL_objectz00_bglt BgL_tmpz00_7189;

							BgL_tmpz00_7189 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_new1145z00_3873));
							BgL_auxz00_7188 = BGL_OBJECT_WIDENING(BgL_tmpz00_7189);
						}
						BgL_auxz00_7187 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7188);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7187))->
							BgL_imarkz00) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7195;

					{
						obj_t BgL_auxz00_7196;

						{	/* Globalize/ginfo.scm 20 */
							BgL_objectz00_bglt BgL_tmpz00_7197;

							BgL_tmpz00_7197 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_new1145z00_3873));
							BgL_auxz00_7196 = BGL_OBJECT_WIDENING(BgL_tmpz00_7197);
						}
						BgL_auxz00_7195 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7196);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7195))->
							BgL_ownerz00) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7203;

					{
						obj_t BgL_auxz00_7204;

						{	/* Globalize/ginfo.scm 20 */
							BgL_objectz00_bglt BgL_tmpz00_7205;

							BgL_tmpz00_7205 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_new1145z00_3873));
							BgL_auxz00_7204 = BGL_OBJECT_WIDENING(BgL_tmpz00_7205);
						}
						BgL_auxz00_7203 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7204);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7203))->
							BgL_integratedz00) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7211;

					{
						obj_t BgL_auxz00_7212;

						{	/* Globalize/ginfo.scm 20 */
							BgL_objectz00_bglt BgL_tmpz00_7213;

							BgL_tmpz00_7213 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_new1145z00_3873));
							BgL_auxz00_7212 = BGL_OBJECT_WIDENING(BgL_tmpz00_7213);
						}
						BgL_auxz00_7211 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7212);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7211))->
							BgL_pluggedzd2inzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7219;

					{
						obj_t BgL_auxz00_7220;

						{	/* Globalize/ginfo.scm 20 */
							BgL_objectz00_bglt BgL_tmpz00_7221;

							BgL_tmpz00_7221 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_new1145z00_3873));
							BgL_auxz00_7220 = BGL_OBJECT_WIDENING(BgL_tmpz00_7221);
						}
						BgL_auxz00_7219 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7220);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7219))->
							BgL_markz00) = ((long) ((long) 0)), BUNSPEC);
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7227;

					{
						obj_t BgL_auxz00_7228;

						{	/* Globalize/ginfo.scm 20 */
							BgL_objectz00_bglt BgL_tmpz00_7229;

							BgL_tmpz00_7229 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_new1145z00_3873));
							BgL_auxz00_7228 = BGL_OBJECT_WIDENING(BgL_tmpz00_7229);
						}
						BgL_auxz00_7227 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7228);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7227))->
							BgL_freezd2markzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7235;

					{
						obj_t BgL_auxz00_7236;

						{	/* Globalize/ginfo.scm 20 */
							BgL_objectz00_bglt BgL_tmpz00_7237;

							BgL_tmpz00_7237 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_new1145z00_3873));
							BgL_auxz00_7236 = BGL_OBJECT_WIDENING(BgL_tmpz00_7237);
						}
						BgL_auxz00_7235 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7236);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7235))->
							BgL_thezd2globalzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7243;

					{
						obj_t BgL_auxz00_7244;

						{	/* Globalize/ginfo.scm 20 */
							BgL_objectz00_bglt BgL_tmpz00_7245;

							BgL_tmpz00_7245 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_new1145z00_3873));
							BgL_auxz00_7244 = BGL_OBJECT_WIDENING(BgL_tmpz00_7245);
						}
						BgL_auxz00_7243 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7244);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7243))->
							BgL_kapturedz00) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7251;

					{
						obj_t BgL_auxz00_7252;

						{	/* Globalize/ginfo.scm 20 */
							BgL_objectz00_bglt BgL_tmpz00_7253;

							BgL_tmpz00_7253 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_new1145z00_3873));
							BgL_auxz00_7252 = BGL_OBJECT_WIDENING(BgL_tmpz00_7253);
						}
						BgL_auxz00_7251 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7252);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7251))->
							BgL_newzd2bodyzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7259;

					{
						obj_t BgL_auxz00_7260;

						{	/* Globalize/ginfo.scm 20 */
							BgL_objectz00_bglt BgL_tmpz00_7261;

							BgL_tmpz00_7261 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_new1145z00_3873));
							BgL_auxz00_7260 = BGL_OBJECT_WIDENING(BgL_tmpz00_7261);
						}
						BgL_auxz00_7259 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7260);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7259))->
							BgL_bmarkz00) = ((long) ((long) 0)), BUNSPEC);
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7267;

					{
						obj_t BgL_auxz00_7268;

						{	/* Globalize/ginfo.scm 20 */
							BgL_objectz00_bglt BgL_tmpz00_7269;

							BgL_tmpz00_7269 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_new1145z00_3873));
							BgL_auxz00_7268 = BGL_OBJECT_WIDENING(BgL_tmpz00_7269);
						}
						BgL_auxz00_7267 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7268);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7267))->
							BgL_umarkz00) = ((long) ((long) 0)), BUNSPEC);
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7275;

					{
						obj_t BgL_auxz00_7276;

						{	/* Globalize/ginfo.scm 20 */
							BgL_objectz00_bglt BgL_tmpz00_7277;

							BgL_tmpz00_7277 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_new1145z00_3873));
							BgL_auxz00_7276 = BGL_OBJECT_WIDENING(BgL_tmpz00_7277);
						}
						BgL_auxz00_7275 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7276);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7275))->
							BgL_freez00) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7283;

					{
						obj_t BgL_auxz00_7284;

						{	/* Globalize/ginfo.scm 20 */
							BgL_objectz00_bglt BgL_tmpz00_7285;

							BgL_tmpz00_7285 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_new1145z00_3873));
							BgL_auxz00_7284 = BGL_OBJECT_WIDENING(BgL_tmpz00_7285);
						}
						BgL_auxz00_7283 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7284);
					}
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7283))->
							BgL_boundz00) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				BgL_auxz00_7066 = ((BgL_sfunz00_bglt) BgL_new1145z00_3873);
				return ((obj_t) BgL_auxz00_7066);
			}
		}

	}



/* &lambda1496 */
	BgL_sfunz00_bglt BGl_z62lambda1496z62zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3874, obj_t BgL_o1142z00_3875)
	{
		{	/* Globalize/ginfo.scm 20 */
			{	/* Globalize/ginfo.scm 20 */
				BgL_sfunzf2ginfozf2_bglt BgL_wide1144z00_4261;

				BgL_wide1144z00_4261 =
					((BgL_sfunzf2ginfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_sfunzf2ginfozf2_bgl))));
				{	/* Globalize/ginfo.scm 20 */
					obj_t BgL_auxz00_7298;
					BgL_objectz00_bglt BgL_tmpz00_7294;

					BgL_auxz00_7298 = ((obj_t) BgL_wide1144z00_4261);
					BgL_tmpz00_7294 =
						((BgL_objectz00_bglt)
						((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_o1142z00_3875)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7294, BgL_auxz00_7298);
				}
				((BgL_objectz00_bglt)
					((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_o1142z00_3875)));
				{	/* Globalize/ginfo.scm 20 */
					long BgL_arg1497z00_4262;

					{	/* Globalize/ginfo.scm 20 */
						long BgL_res2079z00_4263;

						BgL_res2079z00_4263 =
							BGL_CLASS_INDEX(BGl_sfunzf2Ginfozf2zzglobaliza7e_ginfoza7);
						BgL_arg1497z00_4262 = BgL_res2079z00_4263;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_sfunz00_bglt)
								((BgL_sfunz00_bglt) BgL_o1142z00_3875))), BgL_arg1497z00_4262);
				}
				return
					((BgL_sfunz00_bglt)
					((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_o1142z00_3875)));
			}
		}

	}



/* &lambda1490 */
	BgL_sfunz00_bglt BGl_z62lambda1490z62zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3876, obj_t BgL_arity1101z00_3877,
		obj_t BgL_sidezd2effect1102zd2_3878, obj_t BgL_predicatezd2of1103zd2_3879,
		obj_t BgL_stackzd2allocator1104zd2_3880, obj_t BgL_topzf31105zf3_3881,
		obj_t BgL_thezd2closure1106zd2_3882, obj_t BgL_effect1107z00_3883,
		obj_t BgL_failsafe1108z00_3884, obj_t BgL_argszd2noescape1109zd2_3885,
		obj_t BgL_property1110z00_3886, obj_t BgL_args1111z00_3887,
		obj_t BgL_argszd2name1112zd2_3888, obj_t BgL_body1113z00_3889,
		obj_t BgL_class1114z00_3890, obj_t BgL_dssslzd2keywords1115zd2_3891,
		obj_t BgL_loc1116z00_3892, obj_t BgL_optionals1117z00_3893,
		obj_t BgL_keys1118z00_3894, obj_t BgL_thezd2closurezd2global1119z00_3895,
		obj_t BgL_strength1120z00_3896, obj_t BgL_stackable1121z00_3897,
		obj_t BgL_gzf31122zf3_3898, obj_t BgL_cfrom1123z00_3899,
		obj_t BgL_cfromza21124za2_3900, obj_t BgL_cto1125z00_3901,
		obj_t BgL_ctoza21126za2_3902, obj_t BgL_efunctions1127z00_3903,
		obj_t BgL_integrator1128z00_3904, obj_t BgL_imark1129z00_3905,
		obj_t BgL_owner1130z00_3906, obj_t BgL_integrated1131z00_3907,
		obj_t BgL_pluggedzd2in1132zd2_3908, obj_t BgL_mark1133z00_3909,
		obj_t BgL_freezd2mark1134zd2_3910, obj_t BgL_thezd2global1135zd2_3911,
		obj_t BgL_kaptured1136z00_3912, obj_t BgL_newzd2body1137zd2_3913,
		obj_t BgL_bmark1138z00_3914, obj_t BgL_umark1139z00_3915,
		obj_t BgL_free1140z00_3916, obj_t BgL_bound1141z00_3917)
	{
		{	/* Globalize/ginfo.scm 20 */
			{	/* Globalize/ginfo.scm 20 */
				long BgL_arity1101z00_4264;
				bool_t BgL_topzf31105zf3_4265;
				bool_t BgL_gzf31122zf3_4267;
				long BgL_mark1133z00_4268;
				long BgL_bmark1138z00_4269;
				long BgL_umark1139z00_4270;

				BgL_arity1101z00_4264 = (long) CINT(BgL_arity1101z00_3877);
				BgL_topzf31105zf3_4265 = CBOOL(BgL_topzf31105zf3_3881);
				BgL_gzf31122zf3_4267 = CBOOL(BgL_gzf31122zf3_3898);
				BgL_mark1133z00_4268 = (long) CINT(BgL_mark1133z00_3909);
				BgL_bmark1138z00_4269 = (long) CINT(BgL_bmark1138z00_3914);
				BgL_umark1139z00_4270 = (long) CINT(BgL_umark1139z00_3915);
				{	/* Globalize/ginfo.scm 20 */
					BgL_sfunz00_bglt BgL_new1241z00_4271;

					{	/* Globalize/ginfo.scm 20 */
						BgL_sfunz00_bglt BgL_tmp1239z00_4272;
						BgL_sfunzf2ginfozf2_bglt BgL_wide1240z00_4273;

						{
							BgL_sfunz00_bglt BgL_auxz00_7318;

							{	/* Globalize/ginfo.scm 20 */
								BgL_sfunz00_bglt BgL_new1238z00_4274;

								BgL_new1238z00_4274 =
									((BgL_sfunz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_sfunz00_bgl))));
								{	/* Globalize/ginfo.scm 20 */
									long BgL_arg1495z00_4275;

									{	/* Globalize/ginfo.scm 20 */
										long BgL_res2077z00_4276;

										BgL_res2077z00_4276 =
											BGL_CLASS_INDEX(BGl_sfunz00zzast_varz00);
										BgL_arg1495z00_4275 = BgL_res2077z00_4276;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1238z00_4274),
										BgL_arg1495z00_4275);
								}
								{	/* Globalize/ginfo.scm 20 */
									BgL_objectz00_bglt BgL_tmpz00_7323;

									BgL_tmpz00_7323 = ((BgL_objectz00_bglt) BgL_new1238z00_4274);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7323, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1238z00_4274);
								BgL_auxz00_7318 = BgL_new1238z00_4274;
							}
							BgL_tmp1239z00_4272 = ((BgL_sfunz00_bglt) BgL_auxz00_7318);
						}
						BgL_wide1240z00_4273 =
							((BgL_sfunzf2ginfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_sfunzf2ginfozf2_bgl))));
						{	/* Globalize/ginfo.scm 20 */
							obj_t BgL_auxz00_7331;
							BgL_objectz00_bglt BgL_tmpz00_7329;

							BgL_auxz00_7331 = ((obj_t) BgL_wide1240z00_4273);
							BgL_tmpz00_7329 = ((BgL_objectz00_bglt) BgL_tmp1239z00_4272);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7329, BgL_auxz00_7331);
						}
						((BgL_objectz00_bglt) BgL_tmp1239z00_4272);
						{	/* Globalize/ginfo.scm 20 */
							long BgL_arg1493z00_4277;

							{	/* Globalize/ginfo.scm 20 */
								long BgL_res2078z00_4278;

								BgL_res2078z00_4278 =
									BGL_CLASS_INDEX(BGl_sfunzf2Ginfozf2zzglobaliza7e_ginfoza7);
								BgL_arg1493z00_4277 = BgL_res2078z00_4278;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1239z00_4272),
								BgL_arg1493z00_4277);
						}
						BgL_new1241z00_4271 = ((BgL_sfunz00_bglt) BgL_tmp1239z00_4272);
					}
					((((BgL_funz00_bglt) COBJECT(
									((BgL_funz00_bglt) BgL_new1241z00_4271)))->BgL_arityz00) =
						((long) BgL_arity1101z00_4264), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
										BgL_new1241z00_4271)))->BgL_sidezd2effectzd2) =
						((obj_t) BgL_sidezd2effect1102zd2_3878), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
										BgL_new1241z00_4271)))->BgL_predicatezd2ofzd2) =
						((obj_t) BgL_predicatezd2of1103zd2_3879), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
										BgL_new1241z00_4271)))->BgL_stackzd2allocatorzd2) =
						((obj_t) BgL_stackzd2allocator1104zd2_3880), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
										BgL_new1241z00_4271)))->BgL_topzf3zf3) =
						((bool_t) BgL_topzf31105zf3_4265), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
										BgL_new1241z00_4271)))->BgL_thezd2closurezd2) =
						((obj_t) BgL_thezd2closure1106zd2_3882), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
										BgL_new1241z00_4271)))->BgL_effectz00) =
						((obj_t) BgL_effect1107z00_3883), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
										BgL_new1241z00_4271)))->BgL_failsafez00) =
						((obj_t) BgL_failsafe1108z00_3884), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
										BgL_new1241z00_4271)))->BgL_argszd2noescapezd2) =
						((obj_t) BgL_argszd2noescape1109zd2_3885), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1241z00_4271)))->BgL_propertyz00) =
						((obj_t) BgL_property1110z00_3886), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1241z00_4271)))->BgL_argsz00) =
						((obj_t) BgL_args1111z00_3887), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1241z00_4271)))->BgL_argszd2namezd2) =
						((obj_t) BgL_argszd2name1112zd2_3888), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1241z00_4271)))->BgL_bodyz00) =
						((obj_t) BgL_body1113z00_3889), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1241z00_4271)))->BgL_classz00) =
						((obj_t) BgL_class1114z00_3890), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1241z00_4271)))->BgL_dssslzd2keywordszd2) =
						((obj_t) BgL_dssslzd2keywords1115zd2_3891), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1241z00_4271)))->BgL_locz00) =
						((obj_t) BgL_loc1116z00_3892), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1241z00_4271)))->BgL_optionalsz00) =
						((obj_t) BgL_optionals1117z00_3893), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1241z00_4271)))->BgL_keysz00) =
						((obj_t) BgL_keys1118z00_3894), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1241z00_4271)))->BgL_thezd2closurezd2globalz00) =
						((obj_t) BgL_thezd2closurezd2global1119z00_3895), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1241z00_4271)))->BgL_strengthz00) =
						((obj_t) ((obj_t) BgL_strength1120z00_3896)), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1241z00_4271)))->BgL_stackablez00) =
						((obj_t) BgL_stackable1121z00_3897), BUNSPEC);
					{
						BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7382;

						{
							obj_t BgL_auxz00_7383;

							{	/* Globalize/ginfo.scm 20 */
								BgL_objectz00_bglt BgL_tmpz00_7384;

								BgL_tmpz00_7384 = ((BgL_objectz00_bglt) BgL_new1241z00_4271);
								BgL_auxz00_7383 = BGL_OBJECT_WIDENING(BgL_tmpz00_7384);
							}
							BgL_auxz00_7382 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7383);
						}
						((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7382))->
								BgL_gzf3zf3) = ((bool_t) BgL_gzf31122zf3_4267), BUNSPEC);
					}
					{
						BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7389;

						{
							obj_t BgL_auxz00_7390;

							{	/* Globalize/ginfo.scm 20 */
								BgL_objectz00_bglt BgL_tmpz00_7391;

								BgL_tmpz00_7391 = ((BgL_objectz00_bglt) BgL_new1241z00_4271);
								BgL_auxz00_7390 = BGL_OBJECT_WIDENING(BgL_tmpz00_7391);
							}
							BgL_auxz00_7389 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7390);
						}
						((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7389))->
								BgL_cfromz00) = ((obj_t) BgL_cfrom1123z00_3899), BUNSPEC);
					}
					{
						BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7396;

						{
							obj_t BgL_auxz00_7397;

							{	/* Globalize/ginfo.scm 20 */
								BgL_objectz00_bglt BgL_tmpz00_7398;

								BgL_tmpz00_7398 = ((BgL_objectz00_bglt) BgL_new1241z00_4271);
								BgL_auxz00_7397 = BGL_OBJECT_WIDENING(BgL_tmpz00_7398);
							}
							BgL_auxz00_7396 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7397);
						}
						((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7396))->
								BgL_cfromza2za2) = ((obj_t) BgL_cfromza21124za2_3900), BUNSPEC);
					}
					{
						BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7403;

						{
							obj_t BgL_auxz00_7404;

							{	/* Globalize/ginfo.scm 20 */
								BgL_objectz00_bglt BgL_tmpz00_7405;

								BgL_tmpz00_7405 = ((BgL_objectz00_bglt) BgL_new1241z00_4271);
								BgL_auxz00_7404 = BGL_OBJECT_WIDENING(BgL_tmpz00_7405);
							}
							BgL_auxz00_7403 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7404);
						}
						((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7403))->
								BgL_ctoz00) = ((obj_t) BgL_cto1125z00_3901), BUNSPEC);
					}
					{
						BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7410;

						{
							obj_t BgL_auxz00_7411;

							{	/* Globalize/ginfo.scm 20 */
								BgL_objectz00_bglt BgL_tmpz00_7412;

								BgL_tmpz00_7412 = ((BgL_objectz00_bglt) BgL_new1241z00_4271);
								BgL_auxz00_7411 = BGL_OBJECT_WIDENING(BgL_tmpz00_7412);
							}
							BgL_auxz00_7410 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7411);
						}
						((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7410))->
								BgL_ctoza2za2) = ((obj_t) BgL_ctoza21126za2_3902), BUNSPEC);
					}
					{
						BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7417;

						{
							obj_t BgL_auxz00_7418;

							{	/* Globalize/ginfo.scm 20 */
								BgL_objectz00_bglt BgL_tmpz00_7419;

								BgL_tmpz00_7419 = ((BgL_objectz00_bglt) BgL_new1241z00_4271);
								BgL_auxz00_7418 = BGL_OBJECT_WIDENING(BgL_tmpz00_7419);
							}
							BgL_auxz00_7417 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7418);
						}
						((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7417))->
								BgL_efunctionsz00) =
							((obj_t) BgL_efunctions1127z00_3903), BUNSPEC);
					}
					{
						BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7424;

						{
							obj_t BgL_auxz00_7425;

							{	/* Globalize/ginfo.scm 20 */
								BgL_objectz00_bglt BgL_tmpz00_7426;

								BgL_tmpz00_7426 = ((BgL_objectz00_bglt) BgL_new1241z00_4271);
								BgL_auxz00_7425 = BGL_OBJECT_WIDENING(BgL_tmpz00_7426);
							}
							BgL_auxz00_7424 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7425);
						}
						((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7424))->
								BgL_integratorz00) =
							((obj_t) BgL_integrator1128z00_3904), BUNSPEC);
					}
					{
						BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7431;

						{
							obj_t BgL_auxz00_7432;

							{	/* Globalize/ginfo.scm 20 */
								BgL_objectz00_bglt BgL_tmpz00_7433;

								BgL_tmpz00_7433 = ((BgL_objectz00_bglt) BgL_new1241z00_4271);
								BgL_auxz00_7432 = BGL_OBJECT_WIDENING(BgL_tmpz00_7433);
							}
							BgL_auxz00_7431 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7432);
						}
						((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7431))->
								BgL_imarkz00) = ((obj_t) BgL_imark1129z00_3905), BUNSPEC);
					}
					{
						BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7438;

						{
							obj_t BgL_auxz00_7439;

							{	/* Globalize/ginfo.scm 20 */
								BgL_objectz00_bglt BgL_tmpz00_7440;

								BgL_tmpz00_7440 = ((BgL_objectz00_bglt) BgL_new1241z00_4271);
								BgL_auxz00_7439 = BGL_OBJECT_WIDENING(BgL_tmpz00_7440);
							}
							BgL_auxz00_7438 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7439);
						}
						((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7438))->
								BgL_ownerz00) = ((obj_t) BgL_owner1130z00_3906), BUNSPEC);
					}
					{
						BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7445;

						{
							obj_t BgL_auxz00_7446;

							{	/* Globalize/ginfo.scm 20 */
								BgL_objectz00_bglt BgL_tmpz00_7447;

								BgL_tmpz00_7447 = ((BgL_objectz00_bglt) BgL_new1241z00_4271);
								BgL_auxz00_7446 = BGL_OBJECT_WIDENING(BgL_tmpz00_7447);
							}
							BgL_auxz00_7445 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7446);
						}
						((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7445))->
								BgL_integratedz00) =
							((obj_t) BgL_integrated1131z00_3907), BUNSPEC);
					}
					{
						BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7452;

						{
							obj_t BgL_auxz00_7453;

							{	/* Globalize/ginfo.scm 20 */
								BgL_objectz00_bglt BgL_tmpz00_7454;

								BgL_tmpz00_7454 = ((BgL_objectz00_bglt) BgL_new1241z00_4271);
								BgL_auxz00_7453 = BGL_OBJECT_WIDENING(BgL_tmpz00_7454);
							}
							BgL_auxz00_7452 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7453);
						}
						((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7452))->
								BgL_pluggedzd2inzd2) =
							((obj_t) BgL_pluggedzd2in1132zd2_3908), BUNSPEC);
					}
					{
						BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7459;

						{
							obj_t BgL_auxz00_7460;

							{	/* Globalize/ginfo.scm 20 */
								BgL_objectz00_bglt BgL_tmpz00_7461;

								BgL_tmpz00_7461 = ((BgL_objectz00_bglt) BgL_new1241z00_4271);
								BgL_auxz00_7460 = BGL_OBJECT_WIDENING(BgL_tmpz00_7461);
							}
							BgL_auxz00_7459 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7460);
						}
						((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7459))->
								BgL_markz00) = ((long) BgL_mark1133z00_4268), BUNSPEC);
					}
					{
						BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7466;

						{
							obj_t BgL_auxz00_7467;

							{	/* Globalize/ginfo.scm 20 */
								BgL_objectz00_bglt BgL_tmpz00_7468;

								BgL_tmpz00_7468 = ((BgL_objectz00_bglt) BgL_new1241z00_4271);
								BgL_auxz00_7467 = BGL_OBJECT_WIDENING(BgL_tmpz00_7468);
							}
							BgL_auxz00_7466 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7467);
						}
						((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7466))->
								BgL_freezd2markzd2) =
							((obj_t) BgL_freezd2mark1134zd2_3910), BUNSPEC);
					}
					{
						BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7473;

						{
							obj_t BgL_auxz00_7474;

							{	/* Globalize/ginfo.scm 20 */
								BgL_objectz00_bglt BgL_tmpz00_7475;

								BgL_tmpz00_7475 = ((BgL_objectz00_bglt) BgL_new1241z00_4271);
								BgL_auxz00_7474 = BGL_OBJECT_WIDENING(BgL_tmpz00_7475);
							}
							BgL_auxz00_7473 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7474);
						}
						((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7473))->
								BgL_thezd2globalzd2) =
							((obj_t) BgL_thezd2global1135zd2_3911), BUNSPEC);
					}
					{
						BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7480;

						{
							obj_t BgL_auxz00_7481;

							{	/* Globalize/ginfo.scm 20 */
								BgL_objectz00_bglt BgL_tmpz00_7482;

								BgL_tmpz00_7482 = ((BgL_objectz00_bglt) BgL_new1241z00_4271);
								BgL_auxz00_7481 = BGL_OBJECT_WIDENING(BgL_tmpz00_7482);
							}
							BgL_auxz00_7480 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7481);
						}
						((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7480))->
								BgL_kapturedz00) = ((obj_t) BgL_kaptured1136z00_3912), BUNSPEC);
					}
					{
						BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7487;

						{
							obj_t BgL_auxz00_7488;

							{	/* Globalize/ginfo.scm 20 */
								BgL_objectz00_bglt BgL_tmpz00_7489;

								BgL_tmpz00_7489 = ((BgL_objectz00_bglt) BgL_new1241z00_4271);
								BgL_auxz00_7488 = BGL_OBJECT_WIDENING(BgL_tmpz00_7489);
							}
							BgL_auxz00_7487 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7488);
						}
						((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7487))->
								BgL_newzd2bodyzd2) =
							((obj_t) BgL_newzd2body1137zd2_3913), BUNSPEC);
					}
					{
						BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7494;

						{
							obj_t BgL_auxz00_7495;

							{	/* Globalize/ginfo.scm 20 */
								BgL_objectz00_bglt BgL_tmpz00_7496;

								BgL_tmpz00_7496 = ((BgL_objectz00_bglt) BgL_new1241z00_4271);
								BgL_auxz00_7495 = BGL_OBJECT_WIDENING(BgL_tmpz00_7496);
							}
							BgL_auxz00_7494 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7495);
						}
						((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7494))->
								BgL_bmarkz00) = ((long) BgL_bmark1138z00_4269), BUNSPEC);
					}
					{
						BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7501;

						{
							obj_t BgL_auxz00_7502;

							{	/* Globalize/ginfo.scm 20 */
								BgL_objectz00_bglt BgL_tmpz00_7503;

								BgL_tmpz00_7503 = ((BgL_objectz00_bglt) BgL_new1241z00_4271);
								BgL_auxz00_7502 = BGL_OBJECT_WIDENING(BgL_tmpz00_7503);
							}
							BgL_auxz00_7501 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7502);
						}
						((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7501))->
								BgL_umarkz00) = ((long) BgL_umark1139z00_4270), BUNSPEC);
					}
					{
						BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7508;

						{
							obj_t BgL_auxz00_7509;

							{	/* Globalize/ginfo.scm 20 */
								BgL_objectz00_bglt BgL_tmpz00_7510;

								BgL_tmpz00_7510 = ((BgL_objectz00_bglt) BgL_new1241z00_4271);
								BgL_auxz00_7509 = BGL_OBJECT_WIDENING(BgL_tmpz00_7510);
							}
							BgL_auxz00_7508 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7509);
						}
						((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7508))->
								BgL_freez00) = ((obj_t) BgL_free1140z00_3916), BUNSPEC);
					}
					{
						BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7515;

						{
							obj_t BgL_auxz00_7516;

							{	/* Globalize/ginfo.scm 20 */
								BgL_objectz00_bglt BgL_tmpz00_7517;

								BgL_tmpz00_7517 = ((BgL_objectz00_bglt) BgL_new1241z00_4271);
								BgL_auxz00_7516 = BGL_OBJECT_WIDENING(BgL_tmpz00_7517);
							}
							BgL_auxz00_7515 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7516);
						}
						((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7515))->
								BgL_boundz00) = ((obj_t) BgL_bound1141z00_3917), BUNSPEC);
					}
					return BgL_new1241z00_4271;
				}
			}
		}

	}



/* &<@anonymous:1833> */
	obj_t BGl_z62zc3z04anonymousza31833ze3ze5zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3918)
	{
		{	/* Globalize/ginfo.scm 20 */
			return BNIL;
		}

	}



/* &lambda1832 */
	obj_t BGl_z62lambda1832z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3919,
		obj_t BgL_oz00_3920, obj_t BgL_vz00_3921)
	{
		{	/* Globalize/ginfo.scm 20 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7522;

				{
					obj_t BgL_auxz00_7523;

					{	/* Globalize/ginfo.scm 20 */
						BgL_objectz00_bglt BgL_tmpz00_7524;

						BgL_tmpz00_7524 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3920));
						BgL_auxz00_7523 = BGL_OBJECT_WIDENING(BgL_tmpz00_7524);
					}
					BgL_auxz00_7522 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7523);
				}
				return
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7522))->
						BgL_boundz00) = ((obj_t) BgL_vz00_3921), BUNSPEC);
			}
		}

	}



/* &lambda1831 */
	obj_t BGl_z62lambda1831z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3922,
		obj_t BgL_oz00_3923)
	{
		{	/* Globalize/ginfo.scm 20 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7530;

				{
					obj_t BgL_auxz00_7531;

					{	/* Globalize/ginfo.scm 20 */
						BgL_objectz00_bglt BgL_tmpz00_7532;

						BgL_tmpz00_7532 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3923));
						BgL_auxz00_7531 = BGL_OBJECT_WIDENING(BgL_tmpz00_7532);
					}
					BgL_auxz00_7530 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7531);
				}
				return
					(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7530))->BgL_boundz00);
			}
		}

	}



/* &<@anonymous:1826> */
	obj_t BGl_z62zc3z04anonymousza31826ze3ze5zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3924)
	{
		{	/* Globalize/ginfo.scm 20 */
			return BUNSPEC;
		}

	}



/* &lambda1825 */
	obj_t BGl_z62lambda1825z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3925,
		obj_t BgL_oz00_3926, obj_t BgL_vz00_3927)
	{
		{	/* Globalize/ginfo.scm 20 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7538;

				{
					obj_t BgL_auxz00_7539;

					{	/* Globalize/ginfo.scm 20 */
						BgL_objectz00_bglt BgL_tmpz00_7540;

						BgL_tmpz00_7540 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3926));
						BgL_auxz00_7539 = BGL_OBJECT_WIDENING(BgL_tmpz00_7540);
					}
					BgL_auxz00_7538 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7539);
				}
				return
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7538))->
						BgL_freez00) = ((obj_t) BgL_vz00_3927), BUNSPEC);
			}
		}

	}



/* &lambda1824 */
	obj_t BGl_z62lambda1824z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3928,
		obj_t BgL_oz00_3929)
	{
		{	/* Globalize/ginfo.scm 20 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7546;

				{
					obj_t BgL_auxz00_7547;

					{	/* Globalize/ginfo.scm 20 */
						BgL_objectz00_bglt BgL_tmpz00_7548;

						BgL_tmpz00_7548 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3929));
						BgL_auxz00_7547 = BGL_OBJECT_WIDENING(BgL_tmpz00_7548);
					}
					BgL_auxz00_7546 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7547);
				}
				return
					(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7546))->BgL_freez00);
			}
		}

	}



/* &<@anonymous:1811> */
	obj_t BGl_z62zc3z04anonymousza31811ze3ze5zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3930)
	{
		{	/* Globalize/ginfo.scm 20 */
			return BINT(((long) -10));
		}

	}



/* &lambda1810 */
	obj_t BGl_z62lambda1810z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3931,
		obj_t BgL_oz00_3932, obj_t BgL_vz00_3933)
	{
		{	/* Globalize/ginfo.scm 20 */
			{	/* Globalize/ginfo.scm 20 */
				long BgL_vz00_4284;

				BgL_vz00_4284 = (long) CINT(BgL_vz00_3933);
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7556;

					{
						obj_t BgL_auxz00_7557;

						{	/* Globalize/ginfo.scm 20 */
							BgL_objectz00_bglt BgL_tmpz00_7558;

							BgL_tmpz00_7558 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3932));
							BgL_auxz00_7557 = BGL_OBJECT_WIDENING(BgL_tmpz00_7558);
						}
						BgL_auxz00_7556 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7557);
					}
					return
						((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7556))->
							BgL_umarkz00) = ((long) BgL_vz00_4284), BUNSPEC);
		}}}

	}



/* &lambda1809 */
	obj_t BGl_z62lambda1809z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3934,
		obj_t BgL_oz00_3935)
	{
		{	/* Globalize/ginfo.scm 20 */
			{	/* Globalize/ginfo.scm 20 */
				long BgL_tmpz00_7564;

				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7565;

					{
						obj_t BgL_auxz00_7566;

						{	/* Globalize/ginfo.scm 20 */
							BgL_objectz00_bglt BgL_tmpz00_7567;

							BgL_tmpz00_7567 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3935));
							BgL_auxz00_7566 = BGL_OBJECT_WIDENING(BgL_tmpz00_7567);
						}
						BgL_auxz00_7565 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7566);
					}
					BgL_tmpz00_7564 =
						(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7565))->
						BgL_umarkz00);
				}
				return BINT(BgL_tmpz00_7564);
			}
		}

	}



/* &<@anonymous:1793> */
	obj_t BGl_z62zc3z04anonymousza31793ze3ze5zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3936)
	{
		{	/* Globalize/ginfo.scm 20 */
			return BINT(((long) -10));
		}

	}



/* &lambda1792 */
	obj_t BGl_z62lambda1792z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3937,
		obj_t BgL_oz00_3938, obj_t BgL_vz00_3939)
	{
		{	/* Globalize/ginfo.scm 20 */
			{	/* Globalize/ginfo.scm 20 */
				long BgL_vz00_4287;

				BgL_vz00_4287 = (long) CINT(BgL_vz00_3939);
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7576;

					{
						obj_t BgL_auxz00_7577;

						{	/* Globalize/ginfo.scm 20 */
							BgL_objectz00_bglt BgL_tmpz00_7578;

							BgL_tmpz00_7578 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3938));
							BgL_auxz00_7577 = BGL_OBJECT_WIDENING(BgL_tmpz00_7578);
						}
						BgL_auxz00_7576 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7577);
					}
					return
						((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7576))->
							BgL_bmarkz00) = ((long) BgL_vz00_4287), BUNSPEC);
		}}}

	}



/* &lambda1791 */
	obj_t BGl_z62lambda1791z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3940,
		obj_t BgL_oz00_3941)
	{
		{	/* Globalize/ginfo.scm 20 */
			{	/* Globalize/ginfo.scm 20 */
				long BgL_tmpz00_7584;

				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7585;

					{
						obj_t BgL_auxz00_7586;

						{	/* Globalize/ginfo.scm 20 */
							BgL_objectz00_bglt BgL_tmpz00_7587;

							BgL_tmpz00_7587 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3941));
							BgL_auxz00_7586 = BGL_OBJECT_WIDENING(BgL_tmpz00_7587);
						}
						BgL_auxz00_7585 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7586);
					}
					BgL_tmpz00_7584 =
						(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7585))->
						BgL_bmarkz00);
				}
				return BINT(BgL_tmpz00_7584);
			}
		}

	}



/* &<@anonymous:1778> */
	obj_t BGl_z62zc3z04anonymousza31778ze3ze5zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3942)
	{
		{	/* Globalize/ginfo.scm 20 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1777 */
	obj_t BGl_z62lambda1777z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3943,
		obj_t BgL_oz00_3944, obj_t BgL_vz00_3945)
	{
		{	/* Globalize/ginfo.scm 20 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7595;

				{
					obj_t BgL_auxz00_7596;

					{	/* Globalize/ginfo.scm 20 */
						BgL_objectz00_bglt BgL_tmpz00_7597;

						BgL_tmpz00_7597 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3944));
						BgL_auxz00_7596 = BGL_OBJECT_WIDENING(BgL_tmpz00_7597);
					}
					BgL_auxz00_7595 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7596);
				}
				return
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7595))->
						BgL_newzd2bodyzd2) = ((obj_t) BgL_vz00_3945), BUNSPEC);
			}
		}

	}



/* &lambda1776 */
	obj_t BGl_z62lambda1776z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3946,
		obj_t BgL_oz00_3947)
	{
		{	/* Globalize/ginfo.scm 20 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7603;

				{
					obj_t BgL_auxz00_7604;

					{	/* Globalize/ginfo.scm 20 */
						BgL_objectz00_bglt BgL_tmpz00_7605;

						BgL_tmpz00_7605 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3947));
						BgL_auxz00_7604 = BGL_OBJECT_WIDENING(BgL_tmpz00_7605);
					}
					BgL_auxz00_7603 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7604);
				}
				return
					(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7603))->
					BgL_newzd2bodyzd2);
			}
		}

	}



/* &<@anonymous:1760> */
	obj_t BGl_z62zc3z04anonymousza31760ze3ze5zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3948)
	{
		{	/* Globalize/ginfo.scm 20 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1759 */
	obj_t BGl_z62lambda1759z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3949,
		obj_t BgL_oz00_3950, obj_t BgL_vz00_3951)
	{
		{	/* Globalize/ginfo.scm 20 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7612;

				{
					obj_t BgL_auxz00_7613;

					{	/* Globalize/ginfo.scm 20 */
						BgL_objectz00_bglt BgL_tmpz00_7614;

						BgL_tmpz00_7614 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3950));
						BgL_auxz00_7613 = BGL_OBJECT_WIDENING(BgL_tmpz00_7614);
					}
					BgL_auxz00_7612 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7613);
				}
				return
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7612))->
						BgL_kapturedz00) = ((obj_t) BgL_vz00_3951), BUNSPEC);
			}
		}

	}



/* &lambda1758 */
	obj_t BGl_z62lambda1758z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3952,
		obj_t BgL_oz00_3953)
	{
		{	/* Globalize/ginfo.scm 20 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7620;

				{
					obj_t BgL_auxz00_7621;

					{	/* Globalize/ginfo.scm 20 */
						BgL_objectz00_bglt BgL_tmpz00_7622;

						BgL_tmpz00_7622 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3953));
						BgL_auxz00_7621 = BGL_OBJECT_WIDENING(BgL_tmpz00_7622);
					}
					BgL_auxz00_7620 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7621);
				}
				return
					(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7620))->
					BgL_kapturedz00);
			}
		}

	}



/* &<@anonymous:1748> */
	obj_t BGl_z62zc3z04anonymousza31748ze3ze5zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3954)
	{
		{	/* Globalize/ginfo.scm 20 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1747 */
	obj_t BGl_z62lambda1747z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3955,
		obj_t BgL_oz00_3956, obj_t BgL_vz00_3957)
	{
		{	/* Globalize/ginfo.scm 20 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7629;

				{
					obj_t BgL_auxz00_7630;

					{	/* Globalize/ginfo.scm 20 */
						BgL_objectz00_bglt BgL_tmpz00_7631;

						BgL_tmpz00_7631 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3956));
						BgL_auxz00_7630 = BGL_OBJECT_WIDENING(BgL_tmpz00_7631);
					}
					BgL_auxz00_7629 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7630);
				}
				return
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7629))->
						BgL_thezd2globalzd2) = ((obj_t) BgL_vz00_3957), BUNSPEC);
			}
		}

	}



/* &lambda1746 */
	obj_t BGl_z62lambda1746z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3958,
		obj_t BgL_oz00_3959)
	{
		{	/* Globalize/ginfo.scm 20 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7637;

				{
					obj_t BgL_auxz00_7638;

					{	/* Globalize/ginfo.scm 20 */
						BgL_objectz00_bglt BgL_tmpz00_7639;

						BgL_tmpz00_7639 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3959));
						BgL_auxz00_7638 = BGL_OBJECT_WIDENING(BgL_tmpz00_7639);
					}
					BgL_auxz00_7637 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7638);
				}
				return
					(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7637))->
					BgL_thezd2globalzd2);
			}
		}

	}



/* &<@anonymous:1741> */
	obj_t BGl_z62zc3z04anonymousza31741ze3ze5zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3960)
	{
		{	/* Globalize/ginfo.scm 20 */
			return BNIL;
		}

	}



/* &lambda1740 */
	obj_t BGl_z62lambda1740z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3961,
		obj_t BgL_oz00_3962, obj_t BgL_vz00_3963)
	{
		{	/* Globalize/ginfo.scm 20 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7645;

				{
					obj_t BgL_auxz00_7646;

					{	/* Globalize/ginfo.scm 20 */
						BgL_objectz00_bglt BgL_tmpz00_7647;

						BgL_tmpz00_7647 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3962));
						BgL_auxz00_7646 = BGL_OBJECT_WIDENING(BgL_tmpz00_7647);
					}
					BgL_auxz00_7645 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7646);
				}
				return
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7645))->
						BgL_freezd2markzd2) = ((obj_t) BgL_vz00_3963), BUNSPEC);
			}
		}

	}



/* &lambda1739 */
	obj_t BGl_z62lambda1739z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3964,
		obj_t BgL_oz00_3965)
	{
		{	/* Globalize/ginfo.scm 20 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7653;

				{
					obj_t BgL_auxz00_7654;

					{	/* Globalize/ginfo.scm 20 */
						BgL_objectz00_bglt BgL_tmpz00_7655;

						BgL_tmpz00_7655 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3965));
						BgL_auxz00_7654 = BGL_OBJECT_WIDENING(BgL_tmpz00_7655);
					}
					BgL_auxz00_7653 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7654);
				}
				return
					(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7653))->
					BgL_freezd2markzd2);
			}
		}

	}



/* &<@anonymous:1730> */
	obj_t BGl_z62zc3z04anonymousza31730ze3ze5zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3966)
	{
		{	/* Globalize/ginfo.scm 20 */
			return BINT(((long) -10));
		}

	}



/* &lambda1729 */
	obj_t BGl_z62lambda1729z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3967,
		obj_t BgL_oz00_3968, obj_t BgL_vz00_3969)
	{
		{	/* Globalize/ginfo.scm 20 */
			{	/* Globalize/ginfo.scm 20 */
				long BgL_vz00_4298;

				BgL_vz00_4298 = (long) CINT(BgL_vz00_3969);
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7663;

					{
						obj_t BgL_auxz00_7664;

						{	/* Globalize/ginfo.scm 20 */
							BgL_objectz00_bglt BgL_tmpz00_7665;

							BgL_tmpz00_7665 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3968));
							BgL_auxz00_7664 = BGL_OBJECT_WIDENING(BgL_tmpz00_7665);
						}
						BgL_auxz00_7663 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7664);
					}
					return
						((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7663))->
							BgL_markz00) = ((long) BgL_vz00_4298), BUNSPEC);
		}}}

	}



/* &lambda1728 */
	obj_t BGl_z62lambda1728z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3970,
		obj_t BgL_oz00_3971)
	{
		{	/* Globalize/ginfo.scm 20 */
			{	/* Globalize/ginfo.scm 20 */
				long BgL_tmpz00_7671;

				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7672;

					{
						obj_t BgL_auxz00_7673;

						{	/* Globalize/ginfo.scm 20 */
							BgL_objectz00_bglt BgL_tmpz00_7674;

							BgL_tmpz00_7674 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3971));
							BgL_auxz00_7673 = BGL_OBJECT_WIDENING(BgL_tmpz00_7674);
						}
						BgL_auxz00_7672 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7673);
					}
					BgL_tmpz00_7671 =
						(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7672))->
						BgL_markz00);
				}
				return BINT(BgL_tmpz00_7671);
			}
		}

	}



/* &<@anonymous:1714> */
	obj_t BGl_z62zc3z04anonymousza31714ze3ze5zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3972)
	{
		{	/* Globalize/ginfo.scm 20 */
			return BNIL;
		}

	}



/* &lambda1713 */
	obj_t BGl_z62lambda1713z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3973,
		obj_t BgL_oz00_3974, obj_t BgL_vz00_3975)
	{
		{	/* Globalize/ginfo.scm 20 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7681;

				{
					obj_t BgL_auxz00_7682;

					{	/* Globalize/ginfo.scm 20 */
						BgL_objectz00_bglt BgL_tmpz00_7683;

						BgL_tmpz00_7683 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3974));
						BgL_auxz00_7682 = BGL_OBJECT_WIDENING(BgL_tmpz00_7683);
					}
					BgL_auxz00_7681 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7682);
				}
				return
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7681))->
						BgL_pluggedzd2inzd2) = ((obj_t) BgL_vz00_3975), BUNSPEC);
			}
		}

	}



/* &lambda1712 */
	obj_t BGl_z62lambda1712z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3976,
		obj_t BgL_oz00_3977)
	{
		{	/* Globalize/ginfo.scm 20 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7689;

				{
					obj_t BgL_auxz00_7690;

					{	/* Globalize/ginfo.scm 20 */
						BgL_objectz00_bglt BgL_tmpz00_7691;

						BgL_tmpz00_7691 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3977));
						BgL_auxz00_7690 = BGL_OBJECT_WIDENING(BgL_tmpz00_7691);
					}
					BgL_auxz00_7689 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7690);
				}
				return
					(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7689))->
					BgL_pluggedzd2inzd2);
			}
		}

	}



/* &<@anonymous:1699> */
	obj_t BGl_z62zc3z04anonymousza31699ze3ze5zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3978)
	{
		{	/* Globalize/ginfo.scm 20 */
			return BNIL;
		}

	}



/* &lambda1698 */
	obj_t BGl_z62lambda1698z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3979,
		obj_t BgL_oz00_3980, obj_t BgL_vz00_3981)
	{
		{	/* Globalize/ginfo.scm 20 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7697;

				{
					obj_t BgL_auxz00_7698;

					{	/* Globalize/ginfo.scm 20 */
						BgL_objectz00_bglt BgL_tmpz00_7699;

						BgL_tmpz00_7699 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3980));
						BgL_auxz00_7698 = BGL_OBJECT_WIDENING(BgL_tmpz00_7699);
					}
					BgL_auxz00_7697 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7698);
				}
				return
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7697))->
						BgL_integratedz00) = ((obj_t) BgL_vz00_3981), BUNSPEC);
			}
		}

	}



/* &lambda1697 */
	obj_t BGl_z62lambda1697z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3982,
		obj_t BgL_oz00_3983)
	{
		{	/* Globalize/ginfo.scm 20 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7705;

				{
					obj_t BgL_auxz00_7706;

					{	/* Globalize/ginfo.scm 20 */
						BgL_objectz00_bglt BgL_tmpz00_7707;

						BgL_tmpz00_7707 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3983));
						BgL_auxz00_7706 = BGL_OBJECT_WIDENING(BgL_tmpz00_7707);
					}
					BgL_auxz00_7705 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7706);
				}
				return
					(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7705))->
					BgL_integratedz00);
			}
		}

	}



/* &<@anonymous:1687> */
	obj_t BGl_z62zc3z04anonymousza31687ze3ze5zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3984)
	{
		{	/* Globalize/ginfo.scm 20 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1686 */
	obj_t BGl_z62lambda1686z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3985,
		obj_t BgL_oz00_3986, obj_t BgL_vz00_3987)
	{
		{	/* Globalize/ginfo.scm 20 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7714;

				{
					obj_t BgL_auxz00_7715;

					{	/* Globalize/ginfo.scm 20 */
						BgL_objectz00_bglt BgL_tmpz00_7716;

						BgL_tmpz00_7716 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3986));
						BgL_auxz00_7715 = BGL_OBJECT_WIDENING(BgL_tmpz00_7716);
					}
					BgL_auxz00_7714 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7715);
				}
				return
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7714))->
						BgL_ownerz00) = ((obj_t) BgL_vz00_3987), BUNSPEC);
			}
		}

	}



/* &lambda1685 */
	obj_t BGl_z62lambda1685z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3988,
		obj_t BgL_oz00_3989)
	{
		{	/* Globalize/ginfo.scm 20 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7722;

				{
					obj_t BgL_auxz00_7723;

					{	/* Globalize/ginfo.scm 20 */
						BgL_objectz00_bglt BgL_tmpz00_7724;

						BgL_tmpz00_7724 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3989));
						BgL_auxz00_7723 = BGL_OBJECT_WIDENING(BgL_tmpz00_7724);
					}
					BgL_auxz00_7722 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7723);
				}
				return
					(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7722))->BgL_ownerz00);
			}
		}

	}



/* &<@anonymous:1666> */
	obj_t BGl_z62zc3z04anonymousza31666ze3ze5zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3990)
	{
		{	/* Globalize/ginfo.scm 20 */
			return BNIL;
		}

	}



/* &lambda1665 */
	obj_t BGl_z62lambda1665z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3991,
		obj_t BgL_oz00_3992, obj_t BgL_vz00_3993)
	{
		{	/* Globalize/ginfo.scm 20 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7730;

				{
					obj_t BgL_auxz00_7731;

					{	/* Globalize/ginfo.scm 20 */
						BgL_objectz00_bglt BgL_tmpz00_7732;

						BgL_tmpz00_7732 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3992));
						BgL_auxz00_7731 = BGL_OBJECT_WIDENING(BgL_tmpz00_7732);
					}
					BgL_auxz00_7730 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7731);
				}
				return
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7730))->
						BgL_imarkz00) = ((obj_t) BgL_vz00_3993), BUNSPEC);
			}
		}

	}



/* &lambda1664 */
	obj_t BGl_z62lambda1664z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3994,
		obj_t BgL_oz00_3995)
	{
		{	/* Globalize/ginfo.scm 20 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7738;

				{
					obj_t BgL_auxz00_7739;

					{	/* Globalize/ginfo.scm 20 */
						BgL_objectz00_bglt BgL_tmpz00_7740;

						BgL_tmpz00_7740 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3995));
						BgL_auxz00_7739 = BGL_OBJECT_WIDENING(BgL_tmpz00_7740);
					}
					BgL_auxz00_7738 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7739);
				}
				return
					(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7738))->BgL_imarkz00);
			}
		}

	}



/* &<@anonymous:1643> */
	obj_t BGl_z62zc3z04anonymousza31643ze3ze5zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_3996)
	{
		{	/* Globalize/ginfo.scm 20 */
			return BUNSPEC;
		}

	}



/* &lambda1642 */
	obj_t BGl_z62lambda1642z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_3997,
		obj_t BgL_oz00_3998, obj_t BgL_vz00_3999)
	{
		{	/* Globalize/ginfo.scm 20 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7746;

				{
					obj_t BgL_auxz00_7747;

					{	/* Globalize/ginfo.scm 20 */
						BgL_objectz00_bglt BgL_tmpz00_7748;

						BgL_tmpz00_7748 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_3998));
						BgL_auxz00_7747 = BGL_OBJECT_WIDENING(BgL_tmpz00_7748);
					}
					BgL_auxz00_7746 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7747);
				}
				return
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7746))->
						BgL_integratorz00) = ((obj_t) BgL_vz00_3999), BUNSPEC);
			}
		}

	}



/* &lambda1641 */
	obj_t BGl_z62lambda1641z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_4000,
		obj_t BgL_oz00_4001)
	{
		{	/* Globalize/ginfo.scm 20 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7754;

				{
					obj_t BgL_auxz00_7755;

					{	/* Globalize/ginfo.scm 20 */
						BgL_objectz00_bglt BgL_tmpz00_7756;

						BgL_tmpz00_7756 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_4001));
						BgL_auxz00_7755 = BGL_OBJECT_WIDENING(BgL_tmpz00_7756);
					}
					BgL_auxz00_7754 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7755);
				}
				return
					(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7754))->
					BgL_integratorz00);
			}
		}

	}



/* &<@anonymous:1627> */
	obj_t BGl_z62zc3z04anonymousza31627ze3ze5zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_4002)
	{
		{	/* Globalize/ginfo.scm 20 */
			return BNIL;
		}

	}



/* &lambda1626 */
	obj_t BGl_z62lambda1626z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_4003,
		obj_t BgL_oz00_4004, obj_t BgL_vz00_4005)
	{
		{	/* Globalize/ginfo.scm 20 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7762;

				{
					obj_t BgL_auxz00_7763;

					{	/* Globalize/ginfo.scm 20 */
						BgL_objectz00_bglt BgL_tmpz00_7764;

						BgL_tmpz00_7764 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_4004));
						BgL_auxz00_7763 = BGL_OBJECT_WIDENING(BgL_tmpz00_7764);
					}
					BgL_auxz00_7762 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7763);
				}
				return
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7762))->
						BgL_efunctionsz00) = ((obj_t) BgL_vz00_4005), BUNSPEC);
			}
		}

	}



/* &lambda1625 */
	obj_t BGl_z62lambda1625z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_4006,
		obj_t BgL_oz00_4007)
	{
		{	/* Globalize/ginfo.scm 20 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7770;

				{
					obj_t BgL_auxz00_7771;

					{	/* Globalize/ginfo.scm 20 */
						BgL_objectz00_bglt BgL_tmpz00_7772;

						BgL_tmpz00_7772 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_4007));
						BgL_auxz00_7771 = BGL_OBJECT_WIDENING(BgL_tmpz00_7772);
					}
					BgL_auxz00_7770 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7771);
				}
				return
					(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7770))->
					BgL_efunctionsz00);
			}
		}

	}



/* &<@anonymous:1608> */
	obj_t BGl_z62zc3z04anonymousza31608ze3ze5zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_4008)
	{
		{	/* Globalize/ginfo.scm 20 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1607 */
	obj_t BGl_z62lambda1607z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_4009,
		obj_t BgL_oz00_4010, obj_t BgL_vz00_4011)
	{
		{	/* Globalize/ginfo.scm 20 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7779;

				{
					obj_t BgL_auxz00_7780;

					{	/* Globalize/ginfo.scm 20 */
						BgL_objectz00_bglt BgL_tmpz00_7781;

						BgL_tmpz00_7781 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_4010));
						BgL_auxz00_7780 = BGL_OBJECT_WIDENING(BgL_tmpz00_7781);
					}
					BgL_auxz00_7779 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7780);
				}
				return
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7779))->
						BgL_ctoza2za2) = ((obj_t) BgL_vz00_4011), BUNSPEC);
			}
		}

	}



/* &lambda1606 */
	obj_t BGl_z62lambda1606z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_4012,
		obj_t BgL_oz00_4013)
	{
		{	/* Globalize/ginfo.scm 20 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7787;

				{
					obj_t BgL_auxz00_7788;

					{	/* Globalize/ginfo.scm 20 */
						BgL_objectz00_bglt BgL_tmpz00_7789;

						BgL_tmpz00_7789 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_4013));
						BgL_auxz00_7788 = BGL_OBJECT_WIDENING(BgL_tmpz00_7789);
					}
					BgL_auxz00_7787 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7788);
				}
				return
					(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7787))->
					BgL_ctoza2za2);
			}
		}

	}



/* &<@anonymous:1596> */
	obj_t BGl_z62zc3z04anonymousza31596ze3ze5zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_4014)
	{
		{	/* Globalize/ginfo.scm 20 */
			return BNIL;
		}

	}



/* &lambda1595 */
	obj_t BGl_z62lambda1595z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_4015,
		obj_t BgL_oz00_4016, obj_t BgL_vz00_4017)
	{
		{	/* Globalize/ginfo.scm 20 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7795;

				{
					obj_t BgL_auxz00_7796;

					{	/* Globalize/ginfo.scm 20 */
						BgL_objectz00_bglt BgL_tmpz00_7797;

						BgL_tmpz00_7797 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_4016));
						BgL_auxz00_7796 = BGL_OBJECT_WIDENING(BgL_tmpz00_7797);
					}
					BgL_auxz00_7795 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7796);
				}
				return
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7795))->BgL_ctoz00) =
					((obj_t) BgL_vz00_4017), BUNSPEC);
			}
		}

	}



/* &lambda1594 */
	obj_t BGl_z62lambda1594z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_4018,
		obj_t BgL_oz00_4019)
	{
		{	/* Globalize/ginfo.scm 20 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7803;

				{
					obj_t BgL_auxz00_7804;

					{	/* Globalize/ginfo.scm 20 */
						BgL_objectz00_bglt BgL_tmpz00_7805;

						BgL_tmpz00_7805 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_4019));
						BgL_auxz00_7804 = BGL_OBJECT_WIDENING(BgL_tmpz00_7805);
					}
					BgL_auxz00_7803 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7804);
				}
				return
					(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7803))->BgL_ctoz00);
			}
		}

	}



/* &<@anonymous:1585> */
	obj_t BGl_z62zc3z04anonymousza31585ze3ze5zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_4020)
	{
		{	/* Globalize/ginfo.scm 20 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1584 */
	obj_t BGl_z62lambda1584z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_4021,
		obj_t BgL_oz00_4022, obj_t BgL_vz00_4023)
	{
		{	/* Globalize/ginfo.scm 20 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7812;

				{
					obj_t BgL_auxz00_7813;

					{	/* Globalize/ginfo.scm 20 */
						BgL_objectz00_bglt BgL_tmpz00_7814;

						BgL_tmpz00_7814 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_4022));
						BgL_auxz00_7813 = BGL_OBJECT_WIDENING(BgL_tmpz00_7814);
					}
					BgL_auxz00_7812 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7813);
				}
				return
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7812))->
						BgL_cfromza2za2) = ((obj_t) BgL_vz00_4023), BUNSPEC);
			}
		}

	}



/* &lambda1583 */
	obj_t BGl_z62lambda1583z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_4024,
		obj_t BgL_oz00_4025)
	{
		{	/* Globalize/ginfo.scm 20 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7820;

				{
					obj_t BgL_auxz00_7821;

					{	/* Globalize/ginfo.scm 20 */
						BgL_objectz00_bglt BgL_tmpz00_7822;

						BgL_tmpz00_7822 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_4025));
						BgL_auxz00_7821 = BGL_OBJECT_WIDENING(BgL_tmpz00_7822);
					}
					BgL_auxz00_7820 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7821);
				}
				return
					(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7820))->
					BgL_cfromza2za2);
			}
		}

	}



/* &<@anonymous:1568> */
	obj_t BGl_z62zc3z04anonymousza31568ze3ze5zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_4026)
	{
		{	/* Globalize/ginfo.scm 20 */
			return BNIL;
		}

	}



/* &lambda1567 */
	obj_t BGl_z62lambda1567z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_4027,
		obj_t BgL_oz00_4028, obj_t BgL_vz00_4029)
	{
		{	/* Globalize/ginfo.scm 20 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7828;

				{
					obj_t BgL_auxz00_7829;

					{	/* Globalize/ginfo.scm 20 */
						BgL_objectz00_bglt BgL_tmpz00_7830;

						BgL_tmpz00_7830 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_4028));
						BgL_auxz00_7829 = BGL_OBJECT_WIDENING(BgL_tmpz00_7830);
					}
					BgL_auxz00_7828 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7829);
				}
				return
					((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7828))->
						BgL_cfromz00) = ((obj_t) BgL_vz00_4029), BUNSPEC);
			}
		}

	}



/* &lambda1566 */
	obj_t BGl_z62lambda1566z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_4030,
		obj_t BgL_oz00_4031)
	{
		{	/* Globalize/ginfo.scm 20 */
			{
				BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7836;

				{
					obj_t BgL_auxz00_7837;

					{	/* Globalize/ginfo.scm 20 */
						BgL_objectz00_bglt BgL_tmpz00_7838;

						BgL_tmpz00_7838 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_4031));
						BgL_auxz00_7837 = BGL_OBJECT_WIDENING(BgL_tmpz00_7838);
					}
					BgL_auxz00_7836 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7837);
				}
				return
					(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7836))->BgL_cfromz00);
			}
		}

	}



/* &<@anonymous:1555> */
	obj_t BGl_z62zc3z04anonymousza31555ze3ze5zzglobaliza7e_ginfoza7(obj_t
		BgL_envz00_4032)
	{
		{	/* Globalize/ginfo.scm 20 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1554 */
	obj_t BGl_z62lambda1554z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_4033,
		obj_t BgL_oz00_4034, obj_t BgL_vz00_4035)
	{
		{	/* Globalize/ginfo.scm 20 */
			{	/* Globalize/ginfo.scm 20 */
				bool_t BgL_vz00_4321;

				BgL_vz00_4321 = CBOOL(BgL_vz00_4035);
				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7846;

					{
						obj_t BgL_auxz00_7847;

						{	/* Globalize/ginfo.scm 20 */
							BgL_objectz00_bglt BgL_tmpz00_7848;

							BgL_tmpz00_7848 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_4034));
							BgL_auxz00_7847 = BGL_OBJECT_WIDENING(BgL_tmpz00_7848);
						}
						BgL_auxz00_7846 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7847);
					}
					return
						((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7846))->
							BgL_gzf3zf3) = ((bool_t) BgL_vz00_4321), BUNSPEC);
				}
			}
		}

	}



/* &lambda1553 */
	obj_t BGl_z62lambda1553z62zzglobaliza7e_ginfoza7(obj_t BgL_envz00_4036,
		obj_t BgL_oz00_4037)
	{
		{	/* Globalize/ginfo.scm 20 */
			{	/* Globalize/ginfo.scm 20 */
				bool_t BgL_tmpz00_7854;

				{
					BgL_sfunzf2ginfozf2_bglt BgL_auxz00_7855;

					{
						obj_t BgL_auxz00_7856;

						{	/* Globalize/ginfo.scm 20 */
							BgL_objectz00_bglt BgL_tmpz00_7857;

							BgL_tmpz00_7857 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_4037));
							BgL_auxz00_7856 = BGL_OBJECT_WIDENING(BgL_tmpz00_7857);
						}
						BgL_auxz00_7855 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_7856);
					}
					BgL_tmpz00_7854 =
						(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_7855))->
						BgL_gzf3zf3);
				}
				return BBOOL(BgL_tmpz00_7854);
			}
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzglobaliza7e_ginfoza7()
	{
		{	/* Globalize/ginfo.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzglobaliza7e_ginfoza7()
	{
		{	/* Globalize/ginfo.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzglobaliza7e_ginfoza7()
	{
		{	/* Globalize/ginfo.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2227z00zzglobaliza7e_ginfoza7));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2227z00zzglobaliza7e_ginfoza7));
			return
				BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2227z00zzglobaliza7e_ginfoza7));
		}

	}

#ifdef __cplusplus
}
#endif
