/*===========================================================================*/
/*   (Ast/var.scm)                                                           */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/var.scm) */
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

	typedef struct BgL_cfunz00_bgl
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
		obj_t BgL_argszd2typezd2;
		bool_t BgL_macrozf3zf3;
		bool_t BgL_infixzf3zf3;
		obj_t BgL_methodz00;
	}              *BgL_cfunz00_bglt;

	typedef struct BgL_svarz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}              *BgL_svarz00_bglt;

	typedef struct BgL_scnstz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_nodez00;
		obj_t BgL_classz00;
		obj_t BgL_locz00;
	}               *BgL_scnstz00_bglt;

	typedef struct BgL_cvarz00_bgl
	{
		header_t header;
		obj_t widening;
		bool_t BgL_macrozf3zf3;
	}              *BgL_cvarz00_bglt;

	typedef struct BgL_sexitz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_handlerz00;
		bool_t BgL_detachedzf3zf3;
	}               *BgL_sexitz00_bglt;

	typedef struct BgL_feffectz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_readz00;
		obj_t BgL_writez00;
	}                 *BgL_feffectz00_bglt;


	static obj_t BGl_z62lambda1920z62zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1921z62zzast_varz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62globalzd2setzd2readzd2onlyz12za2zzast_varz00(obj_t,
		obj_t);
	static obj_t BGl_z62lambda1762z62zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1763z62zzast_varz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1927z62zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_sexitzd2handlerzd2zzast_varz00(BgL_sexitz00_bglt);
	static obj_t BGl_z62lambda1928z62zzast_varz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL long
		BGl_variablezd2occurrencewzd2zzast_varz00(BgL_variablez00_bglt);
	static obj_t BGl_z62variablezd2typezd2setz12z70zzast_varz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzd2modulezd2setz12z12zzast_varz00(BgL_globalz00_bglt, obj_t);
	static obj_t BGl_z62lambda1934z62zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_localzd2namezd2zzast_varz00(BgL_localz00_bglt);
	static obj_t BGl_z62lambda1935z62zzast_varz00(obj_t, obj_t, obj_t);
	static BgL_variablez00_bglt BGl_z62makezd2variablezb0zzast_varz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31862ze3ze5zzast_varz00(obj_t, obj_t);
	static BgL_cvarz00_bglt BGl_z62makezd2cvarzb0zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1779z62zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62localzd2removablezb0zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_svarzd2loczd2setz12z12zzast_varz00(BgL_svarz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_sfunzd2loczd2zzast_varz00(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_funzd2argszd2noescapez00zzast_varz00(BgL_funz00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_globalzd2srczd2zzast_varz00(BgL_globalz00_bglt);
	BGL_IMPORT obj_t BGl_classzd2nilzd2initz12z12zz__objectz00(obj_t);
	static BgL_svarz00_bglt BGl_z62svarzd2nilzb0zzast_varz00(obj_t);
	static obj_t BGl_z62lambda1941z62zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1780z62zzast_varz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1942z62zzast_varz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62sfunzd2stackablezd2setz12z70zzast_varz00(obj_t, obj_t,
		obj_t);
	static BgL_funz00_bglt BGl_z62funzd2nilzb0zzast_varz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31936ze3ze5zzast_varz00(obj_t);
	static BgL_cfunz00_bglt BGl_z62lambda1949z62zzast_varz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_sfunzd2classzd2zzast_varz00(BgL_sfunz00_bglt);
	static obj_t BGl_z62zc3z04anonymousza31596ze3ze5zzast_varz00(obj_t);
	static BgL_sexitz00_bglt BGl_z62sexitzd2nilzb0zzast_varz00(obj_t);
	static obj_t BGl_z62localzd2occurrencewzb0zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_localzd2occurrencezd2setz12z12zzast_varz00(BgL_localz00_bglt, long);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzd2evalzf3zd2setz12ze1zzast_varz00(BgL_globalz00_bglt, bool_t);
	static obj_t BGl_z62globalzd2removablezd2setz12z70zzast_varz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_variablezd2accesszd2zzast_varz00(BgL_variablez00_bglt);
	static obj_t BGl_z62cfunzd2argszd2noescapezd2setz12za2zzast_varz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_sfunzd2optionalzf3z21zzast_varz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_variablezd2namezd2setz12z12zzast_varz00(BgL_variablez00_bglt, obj_t);
	static BgL_cfunz00_bglt BGl_z62lambda1952z62zzast_varz00(obj_t);
	static obj_t BGl_z62lambda1958z62zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1797z62zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1959z62zzast_varz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62localzd2namezb0zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_localzd2keyzd2zzast_varz00(BgL_localz00_bglt);
	static obj_t BGl_z62lambda1798z62zzast_varz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzd2failsafezd2setz12z12zzast_varz00(BgL_sfunz00_bglt, obj_t);
	static obj_t BGl_z62svarzd2loczb0zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62globalzd2srczb0zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_sfunz00zzast_varz00 = BUNSPEC;
	static obj_t BGl_z62lambda1963z62zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1964z62zzast_varz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31954ze3ze5zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62globalzd2libraryzb0zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31687ze3ze5zzast_varz00(obj_t);
	static obj_t BGl_z62lambda1969z62zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62sfunzd2classzb0zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_sfunzd2optionalszd2zzast_varz00(BgL_sfunz00_bglt);
	static obj_t BGl_z62variablezf3z91zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62sexitzf3z91zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62sexitzd2detachedzf3zd2setz12z83zzast_varz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_cvarz00_bglt BGl_makezd2cvarzd2zzast_varz00(bool_t);
	static obj_t BGl_z62lambda1970z62zzast_varz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31971ze3ze5zzast_varz00(obj_t);
	static obj_t BGl_z62lambda1976z62zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1977z62zzast_varz00(obj_t, obj_t, obj_t);
	static BgL_cfunz00_bglt BGl_z62cfunzd2nilzb0zzast_varz00(obj_t);
	static obj_t BGl_z62sfunzd2dssslzd2keywordsz62zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cfunzd2thezd2closurez00zzast_varz00(BgL_cfunz00_bglt);
	BGL_EXPORTED_DECL BgL_localz00_bglt BGl_makezd2localzd2zzast_varz00(obj_t,
		obj_t, BgL_typez00_bglt, BgL_valuez00_bglt, obj_t, obj_t, obj_t, long, long,
		bool_t, long);
	BGL_EXPORTED_DECL BgL_sexitz00_bglt BGl_sexitzd2nilzd2zzast_varz00();
	static BgL_svarz00_bglt BGl_z62lambda1984z62zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62sfunzd2effectzb0zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62variablezd2removablezd2setz12z70zzast_varz00(obj_t, obj_t,
		obj_t);
	static BgL_svarz00_bglt BGl_z62lambda1986z62zzast_varz00(obj_t);
	static obj_t BGl_z62globalzd2pragmazb0zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_cfunzf3zf3zzast_varz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_sexitz00zzast_varz00 = BUNSPEC;
	static obj_t BGl_z62localzd2occurrencezd2setz12z70zzast_varz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62globalzd2evalzf3z43zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sexitzd2detachedzf3zd2setz12ze1zzast_varz00(BgL_sexitz00_bglt, bool_t);
	static obj_t BGl_z62globalzf3z91zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzd2evaluablezf3zd2setz12ze1zzast_varz00(BgL_globalz00_bglt,
		bool_t);
	BGL_EXPORTED_DECL BgL_scnstz00_bglt BGl_makezd2scnstzd2zzast_varz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_sfunzf3zf3zzast_varz00(obj_t);
	static obj_t BGl_objectzd2initzd2zzast_varz00();
	static obj_t BGl_z62globalzd2accesszb0zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_localzd2typezd2zzast_varz00(BgL_localz00_bglt);
	static obj_t BGl_z62lambda1993z62zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1994z62zzast_varz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62sfunzd2dssslzd2keywordszd2setz12za2zzast_varz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31320ze3ze5zzast_varz00(obj_t, obj_t);
	static BgL_localz00_bglt BGl_z62makezd2localzb0zzast_varz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_globalzd2namezd2zzast_varz00(BgL_globalz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_funzd2argszd2noescapezd2setz12zc0zzast_varz00(BgL_funz00_bglt, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_variablezf3zf3zzast_varz00(obj_t);
	static obj_t BGl_z62cfunzd2sidezd2effectz62zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_scnstzf3zf3zzast_varz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_funzd2predicatezd2ofzd2setz12zc0zzast_varz00(BgL_funz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sexitzd2handlerzd2setz12z12zzast_varz00(BgL_sexitz00_bglt, obj_t);
	static obj_t BGl_z62scnstzd2loczd2setz12z70zzast_varz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_sfunzd2strengthzd2zzast_varz00(BgL_sfunz00_bglt);
	static BgL_scnstz00_bglt BGl_z62makezd2scnstzb0zzast_varz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62localzd2typezb0zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62sfunzd2loczd2setz12z70zzast_varz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62cfunzd2stackzd2allocatorz62zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzd2stackablezd2setz12z12zzast_varz00(BgL_sfunz00_bglt, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62sfunzd2propertyzd2setz12z70zzast_varz00(obj_t, obj_t,
		obj_t);
	static BgL_feffectz00_bglt BGl_z62makezd2feffectzb0zzast_varz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_valuez00_bglt BGl_makezd2valuezd2zzast_varz00();
	static obj_t BGl_z62variablezd2accesszd2setz12z70zzast_varz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_localzd2valuezd2setz12z12zzast_varz00(BgL_localz00_bglt,
		BgL_valuez00_bglt);
	static obj_t BGl_z62sfunzd2keyzf3z43zzast_varz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzast_varz00();
	static obj_t BGl_z62zc3z04anonymousza31888ze3ze5zzast_varz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31799ze3ze5zzast_varz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzd2fastzd2alphazd2setz12zc0zzast_varz00(BgL_globalz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cfunzd2stackzd2allocatorz00zzast_varz00(BgL_cfunz00_bglt);
	BGL_EXPORTED_DECL BgL_svarz00_bglt BGl_svarzd2nilzd2zzast_varz00();
	static obj_t BGl_z62feffectzd2writezd2setz12z70zzast_varz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62scnstzd2classzd2setz12z70zzast_varz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62funzd2optionalzd2arityz62zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62variablezd2occurrencewzd2setz12z70zzast_varz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31978ze3ze5zzast_varz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cfunzd2effectzd2setz12z12zzast_varz00(BgL_cfunz00_bglt, obj_t);
	BGL_EXPORTED_DECL long
		BGl_localzd2occurrencezd2zzast_varz00(BgL_localz00_bglt);
	static obj_t BGl_z62globalzd2removablezb0zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_variablezd2accesszd2setz12z12zzast_varz00(BgL_variablez00_bglt, obj_t);
	static obj_t BGl_z62sfunzd2keyszb0zzast_varz00(obj_t, obj_t);
	static BgL_valuez00_bglt BGl_z62makezd2valuezb0zzast_varz00(obj_t);
	static obj_t BGl_z62funzd2predicatezd2ofzd2setz12za2zzast_varz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzd2topzf3zd2setz12ze1zzast_varz00(BgL_sfunz00_bglt, bool_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzd2argszd2noescapez00zzast_varz00(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_funzd2sidezd2effectz00zzast_varz00(BgL_funz00_bglt);
	static BgL_variablez00_bglt BGl_z62variablezd2nilzb0zzast_varz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzd2dssslzd2keywordsz00zzast_varz00(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL long BGl_cfunzd2arityzd2zzast_varz00(BgL_cfunz00_bglt);
	static obj_t BGl_z62zc3z04anonymousza31995ze3ze5zzast_varz00(obj_t);
	BGL_EXPORTED_DECL BgL_feffectz00_bglt BGl_feffectzd2nilzd2zzast_varz00();
	BGL_EXPORTED_DECL obj_t BGl_svarzd2loczd2zzast_varz00(BgL_svarz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_funzd2topzf3zd2setz12ze1zzast_varz00(BgL_funz00_bglt, bool_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cfunzd2stackzd2allocatorzd2setz12zc0zzast_varz00(BgL_cfunz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_cfunzd2macrozf3z21zzast_varz00(BgL_cfunz00_bglt);
	static obj_t BGl_z62zc3z04anonymousza32071ze3ze5zzast_varz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzd2stackzd2allocatorzd2setz12zc0zzast_varz00(BgL_sfunz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_variablezd2namezd2zzast_varz00(BgL_variablez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_variablezd2typezd2setz12z12zzast_varz00(BgL_variablez00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl_z62zc3z04anonymousza32039ze3ze5zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_globalzd2typezd2zzast_varz00(BgL_globalz00_bglt);
	BGL_EXPORTED_DECL BgL_globalz00_bglt BGl_globalzd2nilzd2zzast_varz00();
	static obj_t BGl_z62variablezd2fastzd2alphazd2setz12za2zzast_varz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62sfunzd2classzd2setz12z70zzast_varz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_sfunzd2keyzf3z21zzast_varz00(obj_t);
	static obj_t BGl_z62localzd2accesszd2setz12z70zzast_varz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza32056ze3ze5zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62cfunzd2predicatezd2ofz62zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_cfunz00_bglt BGl_cfunzd2nilzd2zzast_varz00();
	BGL_EXPORTED_DECL bool_t
		BGl_globalzd2argszd2safezf3zf3zzast_varz00(BgL_globalz00_bglt);
	static obj_t BGl_z62localzd2namezd2setz12z70zzast_varz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62cfunzd2arityzb0zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62sfunzd2predicatezd2ofz62zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cfunzd2predicatezd2ofzd2setz12zc0zzast_varz00(BgL_cfunz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_globalzd2initzd2zzast_varz00(BgL_globalz00_bglt);
	BGL_EXPORTED_DEF obj_t BGl_svarz00zzast_varz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_localzd2userzf3zd2setz12ze1zzast_varz00(BgL_localz00_bglt, bool_t);
	static obj_t BGl_z62sfunzd2bodyzb0zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_sfunzd2keyszd2zzast_varz00(BgL_sfunz00_bglt);
	static obj_t BGl_z62globalzd2namezb0zzast_varz00(obj_t, obj_t);
	static BgL_globalz00_bglt BGl_z62globalzd2nilzb0zzast_varz00(obj_t);
	static obj_t BGl_z62funzf3z91zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_globalzd2aliaszd2zzast_varz00(BgL_globalz00_bglt);
	static obj_t BGl_z62globalzd2srczd2setz12z70zzast_varz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62funzd2thezd2closurez62zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62cfunzd2topzf3z43zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32090ze3ze5zzast_varz00(obj_t);
	static obj_t BGl_z62funzd2predicatezd2ofz62zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62globalzd2evaluablezf3zd2setz12z83zzast_varz00(obj_t,
		obj_t, obj_t);
	static BgL_cvarz00_bglt BGl_z62cvarzd2nilzb0zzast_varz00(obj_t);
	static obj_t BGl_z62sfunzd2topzf3z43zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62localzf3z91zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_feffectzd2writezd2zzast_varz00(BgL_feffectz00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_funzd2failsafezd2zzast_varz00(BgL_funz00_bglt);
	BGL_EXPORTED_DECL BgL_funz00_bglt BGl_funzd2nilzd2zzast_varz00();
	BGL_EXPORTED_DECL obj_t
		BGl_cfunzd2argszd2typez00zzast_varz00(BgL_cfunz00_bglt);
	static obj_t BGl_z62variablezd2valuezd2setz12z70zzast_varz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62globalzd2libraryzd2setz12z70zzast_varz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62cfunzd2failsafezb0zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_cvarzf3zf3zzast_varz00(obj_t);
	static obj_t BGl_z62funzd2argszd2noescapezd2setz12za2zzast_varz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62sfunzd2failsafezb0zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzd2sidezd2effectz00zzast_varz00(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_svarzf3zf3zzast_varz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzd2argszd2noescapezd2setz12zc0zzast_varz00(BgL_sfunz00_bglt, obj_t);
	static obj_t BGl_z62cfunzd2infixzf3zd2setz12z83zzast_varz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_cfunz00zzast_varz00 = BUNSPEC;
	static obj_t BGl_z62funzd2stackzd2allocatorzd2setz12za2zzast_varz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62variablezd2occurrencezb0zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_sfunzd2bodyzd2zzast_varz00(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_variablezd2typezd2zzast_varz00(BgL_variablez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_localzd2fastzd2alphaz00zzast_varz00(BgL_localz00_bglt);
	static obj_t BGl_z62sexitzd2handlerzb0zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_cfunzd2topzf3z21zzast_varz00(BgL_cfunz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzd2jvmzd2typezd2namezd2setz12z12zzast_varz00(BgL_globalz00_bglt,
		obj_t);
	static obj_t BGl_z62lambda1418z62zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1419z62zzast_varz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_sfunzd2topzf3z21zzast_varz00(BgL_sfunz00_bglt);
	static obj_t BGl_z62zc3z04anonymousza31349ze3ze5zzast_varz00(obj_t);
	static BgL_feffectz00_bglt BGl_z62feffectzd2nilzb0zzast_varz00(obj_t);
	static obj_t BGl_z62svarzd2loczd2setz12z70zzast_varz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62globalzd2fastzd2alphazd2setz12za2zzast_varz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62globalzd2optionalzf3z43zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62globalzd2aliaszd2setz12z70zzast_varz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62cfunzd2macrozf3z43zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62sfunzd2argszb0zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL long
		BGl_localzd2occurrencewzd2zzast_varz00(BgL_localz00_bglt);
	static BgL_typez00_bglt BGl_z62globalzd2typezb0zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_globalzf3zf3zzast_varz00(obj_t);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62cfunzd2topzf3zd2setz12z83zzast_varz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzast_varz00();
	static obj_t BGl_z62zc3z04anonymousza31901ze3ze5zzast_varz00(obj_t);
	BGL_EXPORTED_DECL BgL_sexitz00_bglt BGl_makezd2sexitzd2zzast_varz00(obj_t,
		bool_t);
	static obj_t BGl_z62variablezd2userzf3zd2setz12z83zzast_varz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62cfunzd2methodzd2setz12z70zzast_varz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_funzd2effectzd2zzast_varz00(BgL_funz00_bglt);
	static obj_t BGl_z62funzd2effectzd2setz12z70zzast_varz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzd2propertyzd2setz12z12zzast_varz00(BgL_sfunz00_bglt, obj_t);
	static obj_t BGl_z62lambda1443z62zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1444z62zzast_varz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1606z62zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzd2bodyzd2setz12z12zzast_varz00(BgL_sfunz00_bglt, obj_t);
	static obj_t BGl_z62lambda1607z62zzast_varz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62globalzd2initzb0zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32097ze3ze5zzast_varz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_variablezd2occurrencezd2setz12z12zzast_varz00(BgL_variablez00_bglt,
		long);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzd2argszd2setz12z12zzast_varz00(BgL_sfunz00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_valuez00_bglt
		BGl_variablezd2valuezd2zzast_varz00(BgL_variablez00_bglt);
	BGL_EXPORTED_DECL bool_t
		BGl_variablezd2userzf3z21zzast_varz00(BgL_variablez00_bglt);
	static obj_t BGl_z62zc3z04anonymousza31814ze3ze5zzast_varz00(obj_t);
	static BgL_sexitz00_bglt BGl_z62makezd2sexitzb0zzast_varz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62funzd2effectzb0zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_cvarzd2macrozf3z21zzast_varz00(BgL_cvarz00_bglt);
	static obj_t BGl_z62globalzd2occurrencewzb0zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_feffectzd2writezd2setz12z12zzast_varz00(BgL_feffectz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_variablezd2valuezd2setz12z12zzast_varz00(BgL_variablez00_bglt,
		BgL_valuez00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_sfunzd2argszd2zzast_varz00(BgL_sfunz00_bglt);
	static obj_t BGl_z62lambda1463z62zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1625z62zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzd2libraryzd2setz12z12zzast_varz00(BgL_globalz00_bglt, obj_t);
	static obj_t BGl_z62lambda1464z62zzast_varz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1626z62zzast_varz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_sfunzd2stackablezd2zzast_varz00(BgL_sfunz00_bglt);
	static obj_t BGl_z62cfunzd2predicatezd2ofzd2setz12za2zzast_varz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62globalzd2jvmzd2typezd2namezb0zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL int
		BGl_funzd2optionalzd2arityz00zzast_varz00(BgL_funz00_bglt);
	static obj_t BGl_z62zc3z04anonymousza31726ze3ze5zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_globalz00_bglt BGl_makezd2globalzd2zzast_varz00(obj_t,
		obj_t, BgL_typez00_bglt, BgL_valuez00_bglt, obj_t, obj_t, obj_t, long, long,
		bool_t, obj_t, obj_t, bool_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62localzd2typezd2setz12z70zzast_varz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62feffectzd2readzd2setz12z70zzast_varz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62globalzd2namezd2setz12z70zzast_varz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_sexitzf3zf3zzast_varz00(obj_t);
	BGL_EXPORTED_DECL BgL_cvarz00_bglt BGl_cvarzd2nilzd2zzast_varz00();
	static obj_t BGl_z62zc3z04anonymousza31492ze3ze5zzast_varz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31387ze3ze5zzast_varz00(obj_t);
	static obj_t BGl_z62variablezd2fastzd2alphaz62zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_variablez00zzast_varz00 = BUNSPEC;
	BGL_EXPORTED_DECL long
		BGl_variablezd2occurrencezd2zzast_varz00(BgL_variablez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzd2modulezd2zzast_varz00(BgL_globalz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzd2jvmzd2typezd2namezd2zzast_varz00(BgL_globalz00_bglt);
	static obj_t BGl_z62lambda1640z62zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1641z62zzast_varz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31922ze3ze5zzast_varz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31833ze3ze5zzast_varz00(obj_t);
	static obj_t BGl_z62globalzd2evaluablezf3z43zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62sfunzd2thezd2closurez62zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzd2argszd2namez00zzast_varz00(BgL_sfunz00_bglt);
	static obj_t BGl_z62lambda1812z62zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1813z62zzast_varz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1490z62zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1491z62zzast_varz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62sfunzd2optionalzf3z43zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31745ze3ze5zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62sfunzd2strengthzb0zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cfunzd2effectzd2zzast_varz00(BgL_cfunz00_bglt);
	BGL_EXPORTED_DECL long BGl_sfunzd2arityzd2zzast_varz00(BgL_sfunz00_bglt);
	static obj_t BGl_z62lambda1824z62zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1663z62zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1825z62zzast_varz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1664z62zzast_varz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31851ze3ze5zzast_varz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cfunzd2methodzd2zzast_varz00(BgL_cfunz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzd2importzd2zzast_varz00(BgL_globalz00_bglt);
	static obj_t BGl_z62zc3z04anonymousza31908ze3ze5zzast_varz00(obj_t);
	BGL_EXPORTED_DECL BgL_valuez00_bglt
		BGl_globalzd2valuezd2zzast_varz00(BgL_globalz00_bglt);
	BGL_EXPORTED_DECL bool_t
		BGl_globalzd2userzf3z21zzast_varz00(BgL_globalz00_bglt);
	static obj_t BGl_z62globalzd2importzd2setz12z70zzast_varz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62sfunzd2optionalszb0zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_sexitzd2detachedzf3z21zzast_varz00(BgL_sexitz00_bglt);
	static obj_t BGl_z62globalzd2aliaszb0zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_variablezd2userzf3zd2setz12ze1zzast_varz00(BgL_variablez00_bglt,
		bool_t);
	static obj_t BGl_z62lambda1831z62zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1832z62zzast_varz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31585ze3ze5zzast_varz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_localzd2occurrencewzd2setz12z12zzast_varz00(BgL_localz00_bglt, long);
	BGL_EXPORTED_DEF obj_t BGl_cvarz00zzast_varz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_localzd2accesszd2zzast_varz00(BgL_localz00_bglt);
	static obj_t BGl_z62lambda1841z62zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62globalzd2readzd2onlyzf3z91zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1842z62zzast_varz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62sfunzd2arityzb0zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62funzd2failsafezb0zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1685z62zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1686z62zzast_varz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31764ze3ze5zzast_varz00(obj_t);
	static obj_t BGl_z62lambda1849z62zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzd2predicatezd2ofzd2setz12zc0zzast_varz00(BgL_sfunz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_sfunzd2propertyzd2zzast_varz00(BgL_sfunz00_bglt);
	static obj_t BGl_z62lambda1850z62zzast_varz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62globalzd2initzd2setz12z70zzast_varz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_localzd2removablezd2zzast_varz00(BgL_localz00_bglt);
	static obj_t BGl_z62zc3z04anonymousza31781ze3ze5zzast_varz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31943ze3ze5zzast_varz00(obj_t);
	static BgL_sfunz00_bglt BGl_z62lambda1858z62zzast_varz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1697z62zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1698z62zzast_varz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62funzd2topzf3zd2setz12z83zzast_varz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62cvarzd2macrozf3z43zzast_varz00(obj_t, obj_t);
	static BgL_sfunz00_bglt BGl_z62lambda1860z62zzast_varz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31871ze3ze5zzast_varz00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzast_varz00 = BUNSPEC;
	static obj_t BGl_z62variablezd2namezb0zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cfunzd2sidezd2effectz00zzast_varz00(BgL_cfunz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_localzd2fastzd2alphazd2setz12zc0zzast_varz00(BgL_localz00_bglt, obj_t);
	static obj_t BGl_z62lambda1869z62zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_funz00zzast_varz00 = BUNSPEC;
	static obj_t BGl_z62globalzd2valuezd2setz12z70zzast_varz00(obj_t, obj_t,
		obj_t);
	static BgL_globalz00_bglt BGl_z62makezd2globalzb0zzast_varz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62funzd2stackzd2allocatorz62zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_localzd2accesszd2setz12z12zzast_varz00(BgL_localz00_bglt, obj_t);
	static obj_t BGl_z62variablezd2accesszb0zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cfunzd2predicatezd2ofz00zzast_varz00(BgL_cfunz00_bglt);
	static obj_t BGl_z62lambda1870z62zzast_varz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1875z62zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62sfunzd2effectzd2setz12z70zzast_varz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_variablezd2fastzd2alphaz00zzast_varz00(BgL_variablez00_bglt);
	static obj_t BGl_z62lambda1876z62zzast_varz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62sfunzd2argszd2noescapezd2setz12za2zzast_varz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62globalzd2pragmazd2setz12z70zzast_varz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31929ze3ze5zzast_varz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzd2predicatezd2ofz00zzast_varz00(BgL_sfunz00_bglt);
	static obj_t BGl_z62zc3z04anonymousza32005ze3ze5zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62globalzd2occurrencezb0zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1880z62zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62funzd2failsafezd2setz12z70zzast_varz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62lambda1881z62zzast_varz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1886z62zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1887z62zzast_varz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62sfunzd2strengthzd2setz12z70zzast_varz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62funzd2thezd2closurezd2setz12za2zzast_varz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62lambda1893z62zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62cfunzd2failsafezd2setz12z70zzast_varz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62lambda1894z62zzast_varz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62funzd2sidezd2effectzd2setz12za2zzast_varz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62lambda1899z62zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62globalzd2typezd2setz12z70zzast_varz00(obj_t, obj_t,
		obj_t);
	static BgL_sfunz00_bglt BGl_z62makezd2sfunzb0zzast_varz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62cfunzd2effectzb0zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_scnstzd2classzd2setz12z12zzast_varz00(BgL_scnstz00_bglt, obj_t);
	static obj_t BGl_z62feffectzd2writezb0zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62feffectzf3z91zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62globalzd2accesszd2setz12z70zzast_varz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zzast_varz00();
	BGL_EXPORTED_DECL obj_t
		BGl_globalzd2removablezd2zzast_varz00(BgL_globalz00_bglt);
	static obj_t BGl_z62cfunzd2methodzb0zzast_varz00(obj_t, obj_t);
	static obj_t
		BGl_z62sfunzd2thezd2closurezd2globalzd2setz12z70zzast_varz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62funzd2arityzb0zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62localzd2fastzd2alphazd2setz12za2zzast_varz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_funzd2thezd2closurezd2setz12zc0zzast_varz00(BgL_funz00_bglt, obj_t);
	static obj_t BGl_z62localzd2idzb0zzast_varz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t,
		bool_t, bool_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_funzd2sidezd2effectzd2setz12zc0zzast_varz00(BgL_funz00_bglt, obj_t);
	static obj_t BGl_z62variablezd2removablezb0zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62sfunzd2topzf3zd2setz12z83zzast_varz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_variablezd2idzd2zzast_varz00(BgL_variablez00_bglt);
	static obj_t BGl_z62globalzd2userzf3zd2setz12z83zzast_varz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_localzf3zf3zzast_varz00(obj_t);
	BGL_EXPORTED_DECL long
		BGl_globalzd2occurrencewzd2zzast_varz00(BgL_globalz00_bglt);
	static obj_t BGl_z62globalzd2idzb0zzast_varz00(obj_t, obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	static BgL_typez00_bglt BGl_z62variablezd2typezb0zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62valuezf3z91zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31699ze3ze5zzast_varz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza32026ze3ze5zzast_varz00(obj_t);
	static BgL_localz00_bglt BGl_z62localzd2nilzb0zzast_varz00(obj_t);
	static obj_t BGl_z62localzd2occurrencewzd2setz12z70zzast_varz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_sfunz00_bglt BGl_makezd2sfunzd2zzast_varz00(long, obj_t,
		obj_t, obj_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzd2aliaszd2setz12z12zzast_varz00(BgL_globalz00_bglt, obj_t);
	static obj_t BGl_z62cfunzd2stackzd2allocatorzd2setz12za2zzast_varz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzd2libraryzd2zzast_varz00(BgL_globalz00_bglt);
	static obj_t BGl_z62sfunzd2stackzd2allocatorzd2setz12za2zzast_varz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_funzd2arityzd2zzast_varz00(BgL_funz00_bglt);
	static BgL_scnstz00_bglt BGl_z62scnstzd2nilzb0zzast_varz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_funzd2stackzd2allocatorz00zzast_varz00(BgL_funz00_bglt);
	static obj_t BGl_z62sfunzd2predicatezd2ofzd2setz12za2zzast_varz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cfunzd2thezd2closurezd2setz12zc0zzast_varz00(BgL_cfunz00_bglt, obj_t);
	static obj_t BGl_z62cfunzf3z91zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62funzd2topzf3z43zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_funzd2predicatezd2ofz00zzast_varz00(BgL_funz00_bglt);
	static obj_t BGl_z62zc3z04anonymousza31420ze3ze5zzast_varz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzd2thezd2closurezd2setz12zc0zzast_varz00(BgL_sfunz00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62sfunzf3z91zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cfunzd2sidezd2effectzd2setz12zc0zzast_varz00(BgL_cfunz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_globalzd2idzd2zzast_varz00(BgL_globalz00_bglt);
	static obj_t BGl_z62globalzd2fastzd2alphaz62zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzd2sidezd2effectzd2setz12zc0zzast_varz00(BgL_sfunz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzd2occurrencezd2setz12z12zzast_varz00(BgL_globalz00_bglt, long);
	static obj_t BGl_z62cfunzd2thezd2closurez62zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31332ze3ze5zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzd2importzd2setz12z12zzast_varz00(BgL_globalz00_bglt, obj_t);
	static obj_t BGl_z62scnstzd2loczb0zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62cfunzd2argszd2typez62zzast_varz00(obj_t, obj_t);
	static BgL_valuez00_bglt BGl_z62globalzd2valuezb0zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62globalzd2userzf3z43zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_variablez00_bglt
		BGl_makezd2variablezd2zzast_varz00(obj_t, obj_t, BgL_typez00_bglt,
		BgL_valuez00_bglt, obj_t, obj_t, obj_t, long, long, bool_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cfunzd2infixzf3zd2setz12ze1zzast_varz00(BgL_cfunz00_bglt, bool_t);
	BGL_EXPORTED_DECL BgL_localz00_bglt BGl_localzd2nilzd2zzast_varz00();
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzd2thezd2closurezd2globalzd2zzast_varz00(BgL_sfunz00_bglt);
	static obj_t BGl_z62funzd2sidezd2effectz62zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62funzd2argszd2noescapez62zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62localzd2accesszb0zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_cfunzd2infixzf3z21zzast_varz00(BgL_cfunz00_bglt);
	BGL_EXPORTED_DECL BgL_scnstz00_bglt BGl_scnstzd2nilzd2zzast_varz00();
	BGL_EXPORTED_DECL obj_t
		BGl_feffectzd2readzd2setz12z12zzast_varz00(BgL_feffectz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzd2classzd2setz12z12zzast_varz00(BgL_sfunz00_bglt, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31988ze3ze5zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzd2occurrencewzd2setz12z12zzast_varz00(BgL_globalz00_bglt, long);
	static BgL_scnstz00_bglt BGl_z62lambda2001z62zzast_varz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62variablezd2occurrencezd2setz12z70zzast_varz00(obj_t,
		obj_t, obj_t);
	static BgL_scnstz00_bglt BGl_z62lambda2003z62zzast_varz00(obj_t);
	static obj_t BGl_z62globalzd2evalzf3zd2setz12z83zzast_varz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_scnstzd2classzd2zzast_varz00(BgL_scnstz00_bglt);
	static obj_t BGl_z62cfunzd2thezd2closurezd2setz12za2zzast_varz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62cfunzd2argszd2noescapez62zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_scnstzd2loczd2setz12z12zzast_varz00(BgL_scnstz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_localzd2namezd2setz12z12zzast_varz00(BgL_localz00_bglt, obj_t);
	static obj_t BGl_z62sfunzd2thezd2closurezd2setz12za2zzast_varz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62cfunzd2sidezd2effectzd2setz12za2zzast_varz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62variablezd2idzb0zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_globalzd2optionalzf3z21zzast_varz00(obj_t);
	static obj_t BGl_z62lambda2011z62zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2012z62zzast_varz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62globalzd2modulezb0zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_feffectzf3zf3zzast_varz00(obj_t);
	static obj_t BGl_z62lambda2017z62zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2018z62zzast_varz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62sfunzd2sidezd2effectzd2setz12za2zzast_varz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_scnstzd2loczd2zzast_varz00(BgL_scnstz00_bglt);
	BGL_EXPORTED_DECL bool_t
		BGl_globalzd2evaluablezf3z21zzast_varz00(BgL_globalz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_variablezd2occurrencewzd2setz12z12zzast_varz00(BgL_variablez00_bglt,
		long);
	BGL_EXPORTED_DECL obj_t BGl_localzd2idzd2zzast_varz00(BgL_localz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzd2srczd2setz12z12zzast_varz00(BgL_globalz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_funzd2thezd2closurez00zzast_varz00(BgL_funz00_bglt);
	static obj_t BGl_z62lambda2024z62zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2025z62zzast_varz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_valuez00_bglt
		BGl_localzd2valuezd2zzast_varz00(BgL_localz00_bglt);
	BGL_EXPORTED_DECL bool_t
		BGl_localzd2userzf3z21zzast_varz00(BgL_localz00_bglt);
	static obj_t BGl_z62globalzd2jvmzd2typezd2namezd2setz12z70zzast_varz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzd2pragmazd2setz12z12zzast_varz00(BgL_globalz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cfunzd2methodzd2setz12z12zzast_varz00(BgL_cfunz00_bglt, obj_t);
	static obj_t BGl_z62localzd2valuezd2setz12z70zzast_varz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_feffectzd2readzd2zzast_varz00(BgL_feffectz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzd2dssslzd2keywordszd2setz12zc0zzast_varz00(BgL_sfunz00_bglt,
		obj_t);
	static BgL_svarz00_bglt BGl_z62makezd2svarzb0zzast_varz00(obj_t, obj_t);
	static BgL_cvarz00_bglt BGl_z62lambda2035z62zzast_varz00(obj_t, obj_t);
	static BgL_cvarz00_bglt BGl_z62lambda2037z62zzast_varz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza32083ze3ze5zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzd2pragmazd2zzast_varz00(BgL_globalz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzd2strengthzd2setz12z12zzast_varz00(BgL_sfunz00_bglt, obj_t);
	static obj_t BGl_z62sfunzd2bodyzd2setz12z70zzast_varz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_funzf3zf3zzast_varz00(obj_t);
	static obj_t BGl_z62globalzd2importzb0zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_globalzd2keyzf3z21zzast_varz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cfunzd2argszd2noescapezd2setz12zc0zzast_varz00(BgL_cfunz00_bglt, obj_t);
	static obj_t BGl_z62scnstzf3z91zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62cfunzd2effectzd2setz12z70zzast_varz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62globalzd2modulezd2setz12z70zzast_varz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62localzd2occurrencezb0zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2044z62zzast_varz00(obj_t, obj_t);
	static BgL_valuez00_bglt BGl_z62lambda1316z62zzast_varz00(obj_t);
	static obj_t BGl_z62lambda2045z62zzast_varz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzd2accesszd2zzast_varz00(BgL_globalz00_bglt);
	static BgL_valuez00_bglt BGl_z62lambda1318z62zzast_varz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cfunzd2failsafezd2setz12z12zzast_varz00(BgL_cfunz00_bglt, obj_t);
	static BgL_funz00_bglt BGl_z62makezd2funzb0zzast_varz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62sfunzd2argszd2setz12z70zzast_varz00(obj_t, obj_t, obj_t);
	static BgL_valuez00_bglt BGl_z62variablezd2valuezb0zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62variablezd2userzf3z43zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_EXPORTED_DECL bool_t
		BGl_globalzd2readzd2onlyzf3zf3zzast_varz00(BgL_globalz00_bglt);
	static BgL_sexitz00_bglt BGl_z62lambda2051z62zzast_varz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzd2accesszd2setz12z12zzast_varz00(BgL_globalz00_bglt, obj_t);
	static BgL_sexitz00_bglt BGl_z62lambda2054z62zzast_varz00(obj_t);
	static BgL_variablez00_bglt BGl_z62lambda1328z62zzast_varz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31445ze3ze5zzast_varz00(obj_t);
	static obj_t BGl_z62sfunzd2stackablezb0zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzd2namezd2setz12z12zzast_varz00(BgL_globalz00_bglt, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_funzd2topzf3z21zzast_varz00(BgL_funz00_bglt);
	static BgL_variablez00_bglt BGl_z62lambda1330z62zzast_varz00(obj_t);
	static obj_t BGl_z62lambda2061z62zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2062z62zzast_varz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1338z62zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1339z62zzast_varz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62sfunzd2propertyzb0zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_variablezd2removablezd2zzast_varz00(BgL_variablez00_bglt);
	static obj_t BGl_z62lambda2069z62zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31608ze3ze5zzast_varz00(obj_t);
	static BgL_cfunz00_bglt BGl_z62makezd2cfunzb0zzast_varz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62variablezd2namezd2setz12z70zzast_varz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_scnstzd2nodezd2zzast_varz00(BgL_scnstz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzd2loczd2setz12z12zzast_varz00(BgL_sfunz00_bglt, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_localz00zzast_varz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_svarz00_bglt BGl_makezd2svarzd2zzast_varz00(obj_t);
	static obj_t BGl_z62sfunzd2failsafezd2setz12z70zzast_varz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_feffectz00zzast_varz00 = BUNSPEC;
	static obj_t BGl_z62lambda2070z62zzast_varz00(obj_t, obj_t, obj_t);
	static BgL_sfunz00_bglt BGl_z62sfunzd2nilzb0zzast_varz00(obj_t);
	static BgL_valuez00_bglt BGl_z62valuezd2nilzb0zzast_varz00(obj_t);
	static obj_t BGl_z62globalzd2occurrencezd2setz12z70zzast_varz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62lambda1347z62zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_variablezd2removablezd2setz12z12zzast_varz00(BgL_variablez00_bglt,
		obj_t);
	static obj_t BGl_cnstzd2initzd2zzast_varz00();
	static obj_t BGl_z62lambda1348z62zzast_varz00(obj_t, obj_t, obj_t);
	static BgL_feffectz00_bglt BGl_z62lambda2079z62zzast_varz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzd2thezd2closurez00zzast_varz00(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzd2valuezd2setz12z12zzast_varz00(BgL_globalz00_bglt,
		BgL_valuez00_bglt);
	static obj_t BGl_z62localzd2userzf3zd2setz12z83zzast_varz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62cfunzd2infixzf3z43zzast_varz00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_varz00();
	BGL_EXPORTED_DEF obj_t BGl_scnstz00zzast_varz00 = BUNSPEC;
	static obj_t BGl_z62cvarzf3z91zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62sfunzd2argszd2namez62zzast_varz00(obj_t, obj_t);
	static BgL_feffectz00_bglt BGl_z62lambda2081z62zzast_varz00(obj_t);
	static obj_t BGl_z62scnstzd2classzb0zzast_varz00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzast_varz00();
	static BgL_typez00_bglt BGl_z62lambda1358z62zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1359z62zzast_varz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda2088z62zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31375ze3ze5zzast_varz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31537ze3ze5zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2089z62zzast_varz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62svarzf3z91zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_funzd2effectzd2setz12z12zzast_varz00(BgL_funz00_bglt, obj_t);
	static obj_t BGl_z62scnstzd2nodezb0zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62sfunzd2loczb0zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL long
		BGl_globalzd2occurrencezd2zzast_varz00(BgL_globalz00_bglt);
	static BgL_globalz00_bglt BGl_z62lambda1522z62zzast_varz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_funzd2failsafezd2setz12z12zzast_varz00(BgL_funz00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_objectz00zz__objectz00;
	static BgL_valuez00_bglt BGl_z62lambda1364z62zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1365z62zzast_varz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda2095z62zzast_varz00(obj_t, obj_t);
	static BgL_globalz00_bglt BGl_z62lambda1529z62zzast_varz00(obj_t);
	static obj_t BGl_z62lambda2096z62zzast_varz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31465ze3ze5zzast_varz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31627ze3ze5zzast_varz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_variablezd2fastzd2alphazd2setz12zc0zzast_varz00(BgL_variablez00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzd2thezd2closurezd2globalzd2setz12z12zzast_varz00(BgL_sfunz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_globalzd2evalzf3z21zzast_varz00(BgL_globalz00_bglt);
	static obj_t BGl_z62sfunzd2sidezd2effectz62zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1373z62zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_cfunz00_bglt BGl_makezd2cfunzd2zzast_varz00(long, obj_t,
		obj_t, obj_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, bool_t, bool_t,
		obj_t);
	static obj_t BGl_z62lambda1374z62zzast_varz00(obj_t, obj_t, obj_t);
	static BgL_valuez00_bglt BGl_z62localzd2valuezb0zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62localzd2userzf3z43zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62localzd2removablezd2setz12z70zzast_varz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_valuez00_bglt BGl_valuezd2nilzd2zzast_varz00();
	BGL_EXPORTED_DEF obj_t BGl_valuez00zzast_varz00 = BUNSPEC;
	static obj_t BGl_z62lambda1385z62zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_localzd2typezd2setz12z12zzast_varz00(BgL_localz00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl_z62lambda1386z62zzast_varz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62sfunzd2stackzd2allocatorz62zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62localzd2fastzd2alphaz62zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62globalzd2keyzf3z43zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzd2initzd2setz12z12zzast_varz00(BgL_globalz00_bglt, obj_t);
	static BgL_localz00_bglt BGl_z62lambda1713z62zzast_varz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1554z62zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1555z62zzast_varz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_localzd2removablezd2setz12z12zzast_varz00(BgL_localz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzd2userzf3zd2setz12ze1zzast_varz00(BgL_globalz00_bglt, bool_t);
	static obj_t BGl_z62sexitzd2handlerzd2setz12z70zzast_varz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62globalzd2argszd2safezf3z91zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzd2setzd2readzd2onlyz12zc0zzast_varz00(BgL_globalz00_bglt);
	static BgL_localz00_bglt BGl_z62lambda1720z62zzast_varz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzd2stackzd2allocatorz00zzast_varz00(BgL_sfunz00_bglt);
	static obj_t BGl_z62lambda1565z62zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1566z62zzast_varz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_feffectz00_bglt BGl_makezd2feffectzd2zzast_varz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cfunzd2topzf3zd2setz12ze1zzast_varz00(BgL_cfunz00_bglt, bool_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cfunzd2argszd2noescapez00zzast_varz00(BgL_cfunz00_bglt);
	BGL_EXPORTED_DECL BgL_funz00_bglt BGl_makezd2funzd2zzast_varz00(long, obj_t,
		obj_t, obj_t, bool_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1730z62zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1731z62zzast_varz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzd2effectzd2setz12z12zzast_varz00(BgL_sfunz00_bglt, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31915ze3ze5zzast_varz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31826ze3ze5zzast_varz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_funzd2stackzd2allocatorzd2setz12zc0zzast_varz00(BgL_funz00_bglt, obj_t);
	static obj_t BGl_z62sfunzd2thezd2closurezd2globalzb0zzast_varz00(obj_t,
		obj_t);
	static obj_t BGl_z62lambda1900z62zzast_varz00(obj_t, obj_t, obj_t);
	static BgL_funz00_bglt BGl_z62lambda1741z62zzast_varz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_funz00_bglt BGl_z62lambda1743z62zzast_varz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cfunzd2failsafezd2zzast_varz00(BgL_cfunz00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_sfunzd2effectzd2zzast_varz00(BgL_sfunz00_bglt);
	static obj_t BGl_z62lambda1906z62zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_valuezf3zf3zzast_varz00(obj_t);
	static obj_t BGl_z62lambda1583z62zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1907z62zzast_varz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1584z62zzast_varz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31843ze3ze5zzast_varz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzd2removablezd2setz12z12zzast_varz00(BgL_globalz00_bglt, obj_t);
	static obj_t BGl_z62variablezd2occurrencewzb0zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_sfunzd2failsafezd2zzast_varz00(BgL_sfunz00_bglt);
	static obj_t BGl_z62globalzd2occurrencewzd2setz12z70zzast_varz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_globalz00zzast_varz00 = BUNSPEC;
	static obj_t BGl_z62lambda1913z62zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1914z62zzast_varz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62sexitzd2detachedzf3z43zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_variablez00_bglt BGl_variablezd2nilzd2zzast_varz00();
	static obj_t BGl_z62lambda1755z62zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1594z62zzast_varz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1756z62zzast_varz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1595z62zzast_varz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62sfunzd2argszd2noescapez62zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzd2typezd2setz12z12zzast_varz00(BgL_globalz00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl_z62feffectzd2readzb0zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzd2fastzd2alphaz00zzast_varz00(BgL_globalz00_bglt);
	static obj_t BGl_z62localzd2keyzb0zzast_varz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_sfunz00_bglt BGl_sfunzd2nilzd2zzast_varz00();
	static obj_t __cnst[74];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2cvarzd2envz00zzast_varz00,
		BgL_bgl_za762makeza7d2cvarza7b2336za7, BGl_z62makezd2cvarzb0zzast_varz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_sfunzd2topzf3zd2setz12zd2envz33zzast_varz00,
		BgL_bgl_za762sfunza7d2topza7f32337za7,
		BGl_z62sfunzd2topzf3zd2setz12z83zzast_varz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_funzd2sidezd2effectzd2envzd2zzast_varz00,
		BgL_bgl_za762funza7d2sideza7d22338za7,
		BGl_z62funzd2sidezd2effectz62zzast_varz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_feffectzd2readzd2envz00zzast_varz00,
		BgL_bgl_za762feffectza7d2rea2339z00, BGl_z62feffectzd2readzb0zzast_varz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_funzd2optionalzd2arityzd2envzd2zzast_varz00,
		BgL_bgl_za762funza7d2optiona2340z00,
		BGl_z62funzd2optionalzd2arityz62zzast_varz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2200z00zzast_varz00,
		BgL_bgl_za762lambda1686za7622341z00, BGl_z62lambda1686z62zzast_varz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2201z00zzast_varz00,
		BgL_bgl_za762lambda1685za7622342z00, BGl_z62lambda1685z62zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2202z00zzast_varz00,
		BgL_bgl_za762za7c3za704anonymo2343za7,
		BGl_z62zc3z04anonymousza31699ze3ze5zzast_varz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2203z00zzast_varz00,
		BgL_bgl_za762lambda1698za7622344z00, BGl_z62lambda1698z62zzast_varz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2204z00zzast_varz00,
		BgL_bgl_za762lambda1697za7622345z00, BGl_z62lambda1697z62zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2205z00zzast_varz00,
		BgL_bgl_za762za7c3za704anonymo2346za7,
		BGl_z62zc3z04anonymousza31537ze3ze5zzast_varz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2206z00zzast_varz00,
		BgL_bgl_za762lambda1529za7622347z00, BGl_z62lambda1529z62zzast_varz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2207z00zzast_varz00,
		BgL_bgl_za762lambda1522za7622348z00, BGl_z62lambda1522z62zzast_varz00, 0L,
		BUNSPEC, 20);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2208z00zzast_varz00,
		BgL_bgl_za762lambda1731za7622349z00, BGl_z62lambda1731z62zzast_varz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2209z00zzast_varz00,
		BgL_bgl_za762lambda1730za7622350z00, BGl_z62lambda1730z62zzast_varz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cfunzd2thezd2closurezd2setz12zd2envz12zzast_varz00,
		BgL_bgl_za762cfunza7d2theza7d22351za7,
		BGl_z62cfunzd2thezd2closurezd2setz12za2zzast_varz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzd2thezd2closurezd2setz12zd2envz12zzast_varz00,
		BgL_bgl_za762sfunza7d2theza7d22352za7,
		BGl_z62sfunzd2thezd2closurezd2setz12za2zzast_varz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_funzd2sidezd2effectzd2setz12zd2envz12zzast_varz00,
		BgL_bgl_za762funza7d2sideza7d22353za7,
		BGl_z62funzd2sidezd2effectzd2setz12za2zzast_varz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2210z00zzast_varz00,
		BgL_bgl_za762za7c3za704anonymo2354za7,
		BGl_z62zc3z04anonymousza31726ze3ze5zzast_varz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2211z00zzast_varz00,
		BgL_bgl_za762lambda1720za7622355z00, BGl_z62lambda1720z62zzast_varz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2212z00zzast_varz00,
		BgL_bgl_za762lambda1713za7622356z00, BGl_z62lambda1713z62zzast_varz00, 0L,
		BUNSPEC, 11);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2213z00zzast_varz00,
		BgL_bgl_za762lambda1756za7622357z00, BGl_z62lambda1756z62zzast_varz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2214z00zzast_varz00,
		BgL_bgl_za762lambda1755za7622358z00, BGl_z62lambda1755z62zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2215z00zzast_varz00,
		BgL_bgl_za762za7c3za704anonymo2359za7,
		BGl_z62zc3z04anonymousza31764ze3ze5zzast_varz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2216z00zzast_varz00,
		BgL_bgl_za762lambda1763za7622360z00, BGl_z62lambda1763z62zzast_varz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_funzd2effectzd2envz00zzast_varz00,
		BgL_bgl_za762funza7d2effectza72361za7, BGl_z62funzd2effectzb0zzast_varz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2217z00zzast_varz00,
		BgL_bgl_za762lambda1762za7622362z00, BGl_z62lambda1762z62zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2218z00zzast_varz00,
		BgL_bgl_za762za7c3za704anonymo2363za7,
		BGl_z62zc3z04anonymousza31781ze3ze5zzast_varz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2219z00zzast_varz00,
		BgL_bgl_za762lambda1780za7622364z00, BGl_z62lambda1780z62zzast_varz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_funzd2failsafezd2setz12zd2envzc0zzast_varz00,
		BgL_bgl_za762funza7d2failsaf2365z00,
		BGl_z62funzd2failsafezd2setz12z70zzast_varz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_variablezd2occurrencewzd2setz12zd2envzc0zzast_varz00,
		BgL_bgl_za762variableza7d2oc2366z00,
		BGl_z62variablezd2occurrencewzd2setz12z70zzast_varz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2220z00zzast_varz00,
		BgL_bgl_za762lambda1779za7622367z00, BGl_z62lambda1779z62zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2221z00zzast_varz00,
		BgL_bgl_za762za7c3za704anonymo2368za7,
		BGl_z62zc3z04anonymousza31799ze3ze5zzast_varz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2222z00zzast_varz00,
		BgL_bgl_za762lambda1798za7622369z00, BGl_z62lambda1798z62zzast_varz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2223z00zzast_varz00,
		BgL_bgl_za762lambda1797za7622370z00, BGl_z62lambda1797z62zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2224z00zzast_varz00,
		BgL_bgl_za762za7c3za704anonymo2371za7,
		BGl_z62zc3z04anonymousza31814ze3ze5zzast_varz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2225z00zzast_varz00,
		BgL_bgl_za762lambda1813za7622372z00, BGl_z62lambda1813z62zzast_varz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2226z00zzast_varz00,
		BgL_bgl_za762lambda1812za7622373z00, BGl_z62lambda1812z62zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sfunzd2keyszd2envz00zzast_varz00,
		BgL_bgl_za762sfunza7d2keysza7b2374za7, BGl_z62sfunzd2keyszb0zzast_varz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2227z00zzast_varz00,
		BgL_bgl_za762za7c3za704anonymo2375za7,
		BGl_z62zc3z04anonymousza31826ze3ze5zzast_varz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2228z00zzast_varz00,
		BgL_bgl_za762lambda1825za7622376z00, BGl_z62lambda1825z62zzast_varz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2229z00zzast_varz00,
		BgL_bgl_za762lambda1824za7622377z00, BGl_z62lambda1824z62zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_localzd2namezd2envz00zzast_varz00,
		BgL_bgl_za762localza7d2nameza72378za7, BGl_z62localzd2namezb0zzast_varz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2230z00zzast_varz00,
		BgL_bgl_za762za7c3za704anonymo2379za7,
		BGl_z62zc3z04anonymousza31833ze3ze5zzast_varz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2231z00zzast_varz00,
		BgL_bgl_za762lambda1832za7622380z00, BGl_z62lambda1832z62zzast_varz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2232z00zzast_varz00,
		BgL_bgl_za762lambda1831za7622381z00, BGl_z62lambda1831z62zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2233z00zzast_varz00,
		BgL_bgl_za762za7c3za704anonymo2382za7,
		BGl_z62zc3z04anonymousza31843ze3ze5zzast_varz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2234z00zzast_varz00,
		BgL_bgl_za762lambda1842za7622383z00, BGl_z62lambda1842z62zzast_varz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2235z00zzast_varz00,
		BgL_bgl_za762lambda1841za7622384z00, BGl_z62lambda1841z62zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2236z00zzast_varz00,
		BgL_bgl_za762za7c3za704anonymo2385za7,
		BGl_z62zc3z04anonymousza31851ze3ze5zzast_varz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2237z00zzast_varz00,
		BgL_bgl_za762lambda1850za7622386z00, BGl_z62lambda1850z62zzast_varz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2238z00zzast_varz00,
		BgL_bgl_za762lambda1849za7622387z00, BGl_z62lambda1849z62zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2239z00zzast_varz00,
		BgL_bgl_za762za7c3za704anonymo2388za7,
		BGl_z62zc3z04anonymousza31745ze3ze5zzast_varz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2329z00zzast_varz00,
		BgL_bgl_string2329za700za7za7a2389za7, "", 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sfunzd2arityzd2envz00zzast_varz00,
		BgL_bgl_za762sfunza7d2arityza72390za7, BGl_z62sfunzd2arityzb0zzast_varz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sfunzd2stackablezd2envz00zzast_varz00,
		BgL_bgl_za762sfunza7d2stacka2391z00, BGl_z62sfunzd2stackablezb0zzast_varz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cfunzd2argszd2typezd2envzd2zzast_varz00,
		BgL_bgl_za762cfunza7d2argsza7d2392za7,
		BGl_z62cfunzd2argszd2typez62zzast_varz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_funzd2arityzd2envz00zzast_varz00,
		BgL_bgl_za762funza7d2arityza7b2393za7, BGl_z62funzd2arityzb0zzast_varz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2240z00zzast_varz00,
		BgL_bgl_za762lambda1743za7622394z00, BGl_z62lambda1743z62zzast_varz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2241z00zzast_varz00,
		BgL_bgl_za762lambda1741za7622395z00, BGl_z62lambda1741z62zzast_varz00, 0L,
		BUNSPEC, 9);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2242z00zzast_varz00,
		BgL_bgl_za762za7c3za704anonymo2396za7,
		BGl_z62zc3z04anonymousza31871ze3ze5zzast_varz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2243z00zzast_varz00,
		BgL_bgl_za762lambda1870za7622397z00, BGl_z62lambda1870z62zzast_varz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2244z00zzast_varz00,
		BgL_bgl_za762lambda1869za7622398z00, BGl_z62lambda1869z62zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2330z00zzast_varz00,
		BgL_bgl_string2330za700za7za7a2399za7, "ast_var", 7);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2245z00zzast_varz00,
		BgL_bgl_za762lambda1876za7622400z00, BGl_z62lambda1876z62zzast_varz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2331z00zzast_varz00,
		BgL_bgl_string2331za700za7za7a2401za7,
		"now \077\077? _ feffect write read sexit detached? handler cvar scnst node svar cfun pair-nil method infix? macro? args-type sfun stackable strength the-closure-global keys optionals loc dsssl-keywords class body args-name args property fun args-noescape failsafe effect the-closure top? stack-allocator predicate-of side-effect arity local key global alias init bstring jvm-type-name src pragma library eval? evaluable? import module variable bool user? occurrencew long occurrence removable fast-alpha access type obj name symbol id ast_var value args-safe read-only ",
		563);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2246z00zzast_varz00,
		BgL_bgl_za762lambda1875za7622402z00, BGl_z62lambda1875z62zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2247z00zzast_varz00,
		BgL_bgl_za762lambda1881za7622403z00, BGl_z62lambda1881z62zzast_varz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2248z00zzast_varz00,
		BgL_bgl_za762lambda1880za7622404z00, BGl_z62lambda1880z62zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2249z00zzast_varz00,
		BgL_bgl_za762za7c3za704anonymo2405za7,
		BGl_z62zc3z04anonymousza31888ze3ze5zzast_varz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_scnstzd2classzd2envz00zzast_varz00,
		BgL_bgl_za762scnstza7d2class2406z00, BGl_z62scnstzd2classzb0zzast_varz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzd2evaluablezf3zd2setz12zd2envz33zzast_varz00,
		BgL_bgl_za762globalza7d2eval2407z00,
		BGl_z62globalzd2evaluablezf3zd2setz12z83zzast_varz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzd2argszd2safezf3zd2envz21zzast_varz00,
		BgL_bgl_za762globalza7d2args2408z00,
		BGl_z62globalzd2argszd2safezf3z91zzast_varz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzd2occurrencewzd2setz12zd2envzc0zzast_varz00,
		BgL_bgl_za762localza7d2occur2409z00,
		BGl_z62localzd2occurrencewzd2setz12z70zzast_varz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_globalzd2typezd2setz12zd2envzc0zzast_varz00,
		BgL_bgl_za762globalza7d2type2410z00,
		BGl_z62globalzd2typezd2setz12z70zzast_varz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2250z00zzast_varz00,
		BgL_bgl_za762lambda1887za7622411z00, BGl_z62lambda1887z62zzast_varz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_variablezd2idzd2envz00zzast_varz00,
		BgL_bgl_za762variableza7d2id2412z00, BGl_z62variablezd2idzb0zzast_varz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2251z00zzast_varz00,
		BgL_bgl_za762lambda1886za7622413z00, BGl_z62lambda1886z62zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2252z00zzast_varz00,
		BgL_bgl_za762lambda1894za7622414z00, BGl_z62lambda1894z62zzast_varz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2253z00zzast_varz00,
		BgL_bgl_za762lambda1893za7622415z00, BGl_z62lambda1893z62zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2254z00zzast_varz00,
		BgL_bgl_za762za7c3za704anonymo2416za7,
		BGl_z62zc3z04anonymousza31901ze3ze5zzast_varz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2255z00zzast_varz00,
		BgL_bgl_za762lambda1900za7622417z00, BGl_z62lambda1900z62zzast_varz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2256z00zzast_varz00,
		BgL_bgl_za762lambda1899za7622418z00, BGl_z62lambda1899z62zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2257z00zzast_varz00,
		BgL_bgl_za762za7c3za704anonymo2419za7,
		BGl_z62zc3z04anonymousza31908ze3ze5zzast_varz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2258z00zzast_varz00,
		BgL_bgl_za762lambda1907za7622420z00, BGl_z62lambda1907z62zzast_varz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2259z00zzast_varz00,
		BgL_bgl_za762lambda1906za7622421z00, BGl_z62lambda1906z62zzast_varz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cfunzd2predicatezd2ofzd2setz12zd2envz12zzast_varz00,
		BgL_bgl_za762cfunza7d2predic2422z00,
		BGl_z62cfunzd2predicatezd2ofzd2setz12za2zzast_varz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_globalzd2evaluablezf3zd2envzf3zzast_varz00,
		BgL_bgl_za762globalza7d2eval2423z00,
		BGl_z62globalzd2evaluablezf3z43zzast_varz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_variablezd2typezd2envz00zzast_varz00,
		BgL_bgl_za762variableza7d2ty2424z00, BGl_z62variablezd2typezb0zzast_varz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzd2thezd2closurezd2globalzd2setz12zd2envzc0zzast_varz00,
		BgL_bgl_za762sfunza7d2theza7d22425za7,
		BGl_z62sfunzd2thezd2closurezd2globalzd2setz12z70zzast_varz00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2260z00zzast_varz00,
		BgL_bgl_za762za7c3za704anonymo2426za7,
		BGl_z62zc3z04anonymousza31915ze3ze5zzast_varz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2261z00zzast_varz00,
		BgL_bgl_za762lambda1914za7622427z00, BGl_z62lambda1914z62zzast_varz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2262z00zzast_varz00,
		BgL_bgl_za762lambda1913za7622428z00, BGl_z62lambda1913z62zzast_varz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_funzd2argszd2noescapezd2setz12zd2envz12zzast_varz00,
		BgL_bgl_za762funza7d2argsza7d22429za7,
		BGl_z62funzd2argszd2noescapezd2setz12za2zzast_varz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2263z00zzast_varz00,
		BgL_bgl_za762za7c3za704anonymo2430za7,
		BGl_z62zc3z04anonymousza31922ze3ze5zzast_varz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2264z00zzast_varz00,
		BgL_bgl_za762lambda1921za7622431z00, BGl_z62lambda1921z62zzast_varz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2265z00zzast_varz00,
		BgL_bgl_za762lambda1920za7622432z00, BGl_z62lambda1920z62zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2266z00zzast_varz00,
		BgL_bgl_za762za7c3za704anonymo2433za7,
		BGl_z62zc3z04anonymousza31929ze3ze5zzast_varz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2267z00zzast_varz00,
		BgL_bgl_za762lambda1928za7622434z00, BGl_z62lambda1928z62zzast_varz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2268z00zzast_varz00,
		BgL_bgl_za762lambda1927za7622435z00, BGl_z62lambda1927z62zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2269z00zzast_varz00,
		BgL_bgl_za762za7c3za704anonymo2436za7,
		BGl_z62zc3z04anonymousza31936ze3ze5zzast_varz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sfunzd2strengthzd2envz00zzast_varz00,
		BgL_bgl_za762sfunza7d2streng2437z00, BGl_z62sfunzd2strengthzb0zzast_varz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzd2dssslzd2keywordszd2envzd2zzast_varz00,
		BgL_bgl_za762sfunza7d2dssslza72438za7,
		BGl_z62sfunzd2dssslzd2keywordsz62zzast_varz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2270z00zzast_varz00,
		BgL_bgl_za762lambda1935za7622439z00, BGl_z62lambda1935z62zzast_varz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2271z00zzast_varz00,
		BgL_bgl_za762lambda1934za7622440z00, BGl_z62lambda1934z62zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2272z00zzast_varz00,
		BgL_bgl_za762za7c3za704anonymo2441za7,
		BGl_z62zc3z04anonymousza31943ze3ze5zzast_varz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_svarzd2loczd2envz00zzast_varz00,
		BgL_bgl_za762svarza7d2locza7b02442za7, BGl_z62svarzd2loczb0zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2273z00zzast_varz00,
		BgL_bgl_za762lambda1942za7622443z00, BGl_z62lambda1942z62zzast_varz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cfunzd2stackzd2allocatorzd2setz12zd2envz12zzast_varz00,
		BgL_bgl_za762cfunza7d2stackza72444za7,
		BGl_z62cfunzd2stackzd2allocatorzd2setz12za2zzast_varz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2274z00zzast_varz00,
		BgL_bgl_za762lambda1941za7622445z00, BGl_z62lambda1941z62zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2275z00zzast_varz00,
		BgL_bgl_za762za7c3za704anonymo2446za7,
		BGl_z62zc3z04anonymousza31862ze3ze5zzast_varz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2276z00zzast_varz00,
		BgL_bgl_za762lambda1860za7622447z00, BGl_z62lambda1860z62zzast_varz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2277z00zzast_varz00,
		BgL_bgl_za762lambda1858za7622448z00, BGl_z62lambda1858z62zzast_varz00, 0L,
		BUNSPEC, 21);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2278z00zzast_varz00,
		BgL_bgl_za762lambda1959za7622449z00, BGl_z62lambda1959z62zzast_varz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2279z00zzast_varz00,
		BgL_bgl_za762lambda1958za7622450z00, BGl_z62lambda1958z62zzast_varz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzd2stackzd2allocatorzd2setz12zd2envz12zzast_varz00,
		BgL_bgl_za762sfunza7d2stackza72451za7,
		BGl_z62sfunzd2stackzd2allocatorzd2setz12za2zzast_varz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2280z00zzast_varz00,
		BgL_bgl_za762lambda1964za7622452z00, BGl_z62lambda1964z62zzast_varz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2281z00zzast_varz00,
		BgL_bgl_za762lambda1963za7622453z00, BGl_z62lambda1963z62zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2282z00zzast_varz00,
		BgL_bgl_za762za7c3za704anonymo2454za7,
		BGl_z62zc3z04anonymousza31971ze3ze5zzast_varz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2283z00zzast_varz00,
		BgL_bgl_za762lambda1970za7622455z00, BGl_z62lambda1970z62zzast_varz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2284z00zzast_varz00,
		BgL_bgl_za762lambda1969za7622456z00, BGl_z62lambda1969z62zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2valuezd2envz00zzast_varz00,
		BgL_bgl_za762makeza7d2valueza72457za7, BGl_z62makezd2valuezb0zzast_varz00,
		0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2285z00zzast_varz00,
		BgL_bgl_za762za7c3za704anonymo2458za7,
		BGl_z62zc3z04anonymousza31978ze3ze5zzast_varz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2286z00zzast_varz00,
		BgL_bgl_za762lambda1977za7622459z00, BGl_z62lambda1977z62zzast_varz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2287z00zzast_varz00,
		BgL_bgl_za762lambda1976za7622460z00, BGl_z62lambda1976z62zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2288z00zzast_varz00,
		BgL_bgl_za762za7c3za704anonymo2461za7,
		BGl_z62zc3z04anonymousza31954ze3ze5zzast_varz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2289z00zzast_varz00,
		BgL_bgl_za762lambda1952za7622462z00, BGl_z62lambda1952z62zzast_varz00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_globalzd2initzd2setz12zd2envzc0zzast_varz00,
		BgL_bgl_za762globalza7d2init2463z00,
		BGl_z62globalzd2initzd2setz12z70zzast_varz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cfunzd2failsafezd2setz12zd2envzc0zzast_varz00,
		BgL_bgl_za762cfunza7d2failsa2464z00,
		BGl_z62cfunzd2failsafezd2setz12z70zzast_varz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_funzd2effectzd2setz12zd2envzc0zzast_varz00,
		BgL_bgl_za762funza7d2effectza72465za7,
		BGl_z62funzd2effectzd2setz12z70zzast_varz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2290z00zzast_varz00,
		BgL_bgl_za762lambda1949za7622466z00, BGl_z62lambda1949z62zzast_varz00, 0L,
		BUNSPEC, 13);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2291z00zzast_varz00,
		BgL_bgl_za762za7c3za704anonymo2467za7,
		BGl_z62zc3z04anonymousza31995ze3ze5zzast_varz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2292z00zzast_varz00,
		BgL_bgl_za762lambda1994za7622468z00, BGl_z62lambda1994z62zzast_varz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_globalzd2modulezd2envz00zzast_varz00,
		BgL_bgl_za762globalza7d2modu2469z00, BGl_z62globalzd2modulezb0zzast_varz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2293z00zzast_varz00,
		BgL_bgl_za762lambda1993za7622470z00, BGl_z62lambda1993z62zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2294z00zzast_varz00,
		BgL_bgl_za762za7c3za704anonymo2471za7,
		BGl_z62zc3z04anonymousza31988ze3ze5zzast_varz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2295z00zzast_varz00,
		BgL_bgl_za762lambda1986za7622472z00, BGl_z62lambda1986z62zzast_varz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2296z00zzast_varz00,
		BgL_bgl_za762lambda1984za7622473z00, BGl_z62lambda1984z62zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2297z00zzast_varz00,
		BgL_bgl_za762lambda2012za7622474z00, BGl_z62lambda2012z62zzast_varz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2298z00zzast_varz00,
		BgL_bgl_za762lambda2011za7622475z00, BGl_z62lambda2011z62zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2299z00zzast_varz00,
		BgL_bgl_za762lambda2018za7622476z00, BGl_z62lambda2018z62zzast_varz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sfunzd2argszd2namezd2envzd2zzast_varz00,
		BgL_bgl_za762sfunza7d2argsza7d2477za7,
		BGl_z62sfunzd2argszd2namez62zzast_varz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cfunzd2infixzf3zd2setz12zd2envz33zzast_varz00,
		BgL_bgl_za762cfunza7d2infixza72478za7,
		BGl_z62cfunzd2infixzf3zd2setz12z83zzast_varz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_scnstzd2nodezd2envz00zzast_varz00,
		BgL_bgl_za762scnstza7d2nodeza72479za7, BGl_z62scnstzd2nodezb0zzast_varz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_valuezd2nilzd2envz00zzast_varz00,
		BgL_bgl_za762valueza7d2nilza7b2480za7, BGl_z62valuezd2nilzb0zzast_varz00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_feffectzd2writezd2setz12zd2envzc0zzast_varz00,
		BgL_bgl_za762feffectza7d2wri2481z00,
		BGl_z62feffectzd2writezd2setz12z70zzast_varz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_valuezf3zd2envz21zzast_varz00,
		BgL_bgl_za762valueza7f3za791za7za72482za7, BGl_z62valuezf3z91zzast_varz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzd2fastzd2alphazd2setz12zd2envz12zzast_varz00,
		BgL_bgl_za762localza7d2fastza72483za7,
		BGl_z62localzd2fastzd2alphazd2setz12za2zzast_varz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzd2occurrencezd2setz12zd2envzc0zzast_varz00,
		BgL_bgl_za762localza7d2occur2484z00,
		BGl_z62localzd2occurrencezd2setz12z70zzast_varz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_scnstzd2loczd2setz12zd2envzc0zzast_varz00,
		BgL_bgl_za762scnstza7d2locza7d2485za7,
		BGl_z62scnstzd2loczd2setz12z70zzast_varz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_localzd2typezd2envz00zzast_varz00,
		BgL_bgl_za762localza7d2typeza72486za7, BGl_z62localzd2typezb0zzast_varz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzd2fastzd2alphazd2setz12zd2envz12zzast_varz00,
		BgL_bgl_za762globalza7d2fast2487z00,
		BGl_z62globalzd2fastzd2alphazd2setz12za2zzast_varz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sfunzd2nilzd2envz00zzast_varz00,
		BgL_bgl_za762sfunza7d2nilza7b02488za7, BGl_z62sfunzd2nilzb0zzast_varz00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzd2occurrencezd2setz12zd2envzc0zzast_varz00,
		BgL_bgl_za762globalza7d2occu2489z00,
		BGl_z62globalzd2occurrencezd2setz12z70zzast_varz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sfunzd2bodyzd2envz00zzast_varz00,
		BgL_bgl_za762sfunza7d2bodyza7b2490za7, BGl_z62sfunzd2bodyzb0zzast_varz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzd2stackzd2allocatorzd2envzd2zzast_varz00,
		BgL_bgl_za762sfunza7d2stackza72491za7,
		BGl_z62sfunzd2stackzd2allocatorz62zzast_varz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_variablezd2fastzd2alphazd2setz12zd2envz12zzast_varz00,
		BgL_bgl_za762variableza7d2fa2492z00,
		BGl_z62variablezd2fastzd2alphazd2setz12za2zzast_varz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_variablezd2occurrencezd2setz12zd2envzc0zzast_varz00,
		BgL_bgl_za762variableza7d2oc2493z00,
		BGl_z62variablezd2occurrencezd2setz12z70zzast_varz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_globalzd2srczd2setz12zd2envzc0zzast_varz00,
		BgL_bgl_za762globalza7d2srcza72494za7,
		BGl_z62globalzd2srczd2setz12z70zzast_varz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_scnstzf3zd2envz21zzast_varz00,
		BgL_bgl_za762scnstza7f3za791za7za72495za7, BGl_z62scnstzf3z91zzast_varz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_globalzd2aliaszd2envz00zzast_varz00,
		BgL_bgl_za762globalza7d2alia2496z00, BGl_z62globalzd2aliaszb0zzast_varz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2variablezd2envz00zzast_varz00,
		BgL_bgl_za762makeza7d2variab2497z00, BGl_z62makezd2variablezb0zzast_varz00,
		0L, BUNSPEC, 10);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzd2pragmazd2setz12zd2envzc0zzast_varz00,
		BgL_bgl_za762globalza7d2prag2498z00,
		BGl_z62globalzd2pragmazd2setz12z70zzast_varz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzd2aliaszd2setz12zd2envzc0zzast_varz00,
		BgL_bgl_za762globalza7d2alia2499z00,
		BGl_z62globalzd2aliaszd2setz12z70zzast_varz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sfunzd2argszd2envz00zzast_varz00,
		BgL_bgl_za762sfunza7d2argsza7b2500za7, BGl_z62sfunzd2argszb0zzast_varz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cfunzf3zd2envz21zzast_varz00,
		BgL_bgl_za762cfunza7f3za791za7za7a2501za7, BGl_z62cfunzf3z91zzast_varz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzd2accesszd2setz12zd2envzc0zzast_varz00,
		BgL_bgl_za762localza7d2acces2502z00,
		BGl_z62localzd2accesszd2setz12z70zzast_varz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_sfunzd2sidezd2effectzd2envzd2zzast_varz00,
		BgL_bgl_za762sfunza7d2sideza7d2503za7,
		BGl_z62sfunzd2sidezd2effectz62zzast_varz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_globalzd2accesszd2envz00zzast_varz00,
		BgL_bgl_za762globalza7d2acce2504z00, BGl_z62globalzd2accesszb0zzast_varz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sfunzf3zd2envz21zzast_varz00,
		BgL_bgl_za762sfunza7f3za791za7za7a2505za7, BGl_z62sfunzf3z91zzast_varz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cfunzd2sidezd2effectzd2setz12zd2envz12zzast_varz00,
		BgL_bgl_za762cfunza7d2sideza7d2506za7,
		BGl_z62cfunzd2sidezd2effectzd2setz12za2zzast_varz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_variablezd2fastzd2alphazd2envzd2zzast_varz00,
		BgL_bgl_za762variableza7d2fa2507z00,
		BGl_z62variablezd2fastzd2alphaz62zzast_varz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzd2sidezd2effectzd2setz12zd2envz12zzast_varz00,
		BgL_bgl_za762sfunza7d2sideza7d2508za7,
		BGl_z62sfunzd2sidezd2effectzd2setz12za2zzast_varz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2feffectzd2envz00zzast_varz00,
		BgL_bgl_za762makeza7d2feffec2509z00, BGl_z62makezd2feffectzb0zzast_varz00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_funzd2thezd2closurezd2envzd2zzast_varz00,
		BgL_bgl_za762funza7d2theza7d2c2510za7,
		BGl_z62funzd2thezd2closurez62zzast_varz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_variablezd2removablezd2envz00zzast_varz00,
		BgL_bgl_za762variableza7d2re2511z00,
		BGl_z62variablezd2removablezb0zzast_varz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_localzd2removablezd2envz00zzast_varz00,
		BgL_bgl_za762localza7d2remov2512z00,
		BGl_z62localzd2removablezb0zzast_varz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzd2dssslzd2keywordszd2setz12zd2envz12zzast_varz00,
		BgL_bgl_za762sfunza7d2dssslza72513za7,
		BGl_z62sfunzd2dssslzd2keywordszd2setz12za2zzast_varz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzd2thezd2closurezd2globalzd2envz00zzast_varz00,
		BgL_bgl_za762sfunza7d2theza7d22514za7,
		BGl_z62sfunzd2thezd2closurezd2globalzb0zzast_varz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cfunzd2effectzd2envz00zzast_varz00,
		BgL_bgl_za762cfunza7d2effect2515z00, BGl_z62cfunzd2effectzb0zzast_varz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cfunzd2macrozf3zd2envzf3zzast_varz00,
		BgL_bgl_za762cfunza7d2macroza72516za7,
		BGl_z62cfunzd2macrozf3z43zzast_varz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_funzd2nilzd2envz00zzast_varz00,
		BgL_bgl_za762funza7d2nilza7b0za72517z00, BGl_z62funzd2nilzb0zzast_varz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_globalzd2libraryzd2envz00zzast_varz00,
		BgL_bgl_za762globalza7d2libr2518z00, BGl_z62globalzd2libraryzb0zzast_varz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_localzd2occurrencewzd2envz00zzast_varz00,
		BgL_bgl_za762localza7d2occur2519z00,
		BGl_z62localzd2occurrencewzb0zzast_varz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2sexitzd2envz00zzast_varz00,
		BgL_bgl_za762makeza7d2sexitza72520za7, BGl_z62makezd2sexitzb0zzast_varz00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzd2removablezd2setz12zd2envzc0zzast_varz00,
		BgL_bgl_za762localza7d2remov2521z00,
		BGl_z62localzd2removablezd2setz12z70zzast_varz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_feffectzf3zd2envz21zzast_varz00,
		BgL_bgl_za762feffectza7f3za7912522za7, BGl_z62feffectzf3z91zzast_varz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzd2propertyzd2setz12zd2envzc0zzast_varz00,
		BgL_bgl_za762sfunza7d2proper2523z00,
		BGl_z62sfunzd2propertyzd2setz12z70zzast_varz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzd2importzd2setz12zd2envzc0zzast_varz00,
		BgL_bgl_za762globalza7d2impo2524z00,
		BGl_z62globalzd2importzd2setz12z70zzast_varz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_localzd2fastzd2alphazd2envzd2zzast_varz00,
		BgL_bgl_za762localza7d2fastza72525za7,
		BGl_z62localzd2fastzd2alphaz62zzast_varz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzd2predicatezd2ofzd2setz12zd2envz12zzast_varz00,
		BgL_bgl_za762sfunza7d2predic2526z00,
		BGl_z62sfunzd2predicatezd2ofzd2setz12za2zzast_varz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzd2modulezd2setz12zd2envzc0zzast_varz00,
		BgL_bgl_za762globalza7d2modu2527z00,
		BGl_z62globalzd2modulezd2setz12z70zzast_varz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_sfunzd2loczd2setz12zd2envzc0zzast_varz00,
		BgL_bgl_za762sfunza7d2locza7d22528za7,
		BGl_z62sfunzd2loczd2setz12z70zzast_varz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_funzd2argszd2noescapezd2envzd2zzast_varz00,
		BgL_bgl_za762funza7d2argsza7d22529za7,
		BGl_z62funzd2argszd2noescapez62zzast_varz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzd2strengthzd2setz12zd2envzc0zzast_varz00,
		BgL_bgl_za762sfunza7d2streng2530z00,
		BGl_z62sfunzd2strengthzd2setz12z70zzast_varz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sexitzd2nilzd2envz00zzast_varz00,
		BgL_bgl_za762sexitza7d2nilza7b2531za7, BGl_z62sexitzd2nilzb0zzast_varz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sfunzd2optionalzf3zd2envzf3zzast_varz00,
		BgL_bgl_za762sfunza7d2option2532z00,
		BGl_z62sfunzd2optionalzf3z43zzast_varz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_variablezd2namezd2setz12zd2envzc0zzast_varz00,
		BgL_bgl_za762variableza7d2na2533z00,
		BGl_z62variablezd2namezd2setz12z70zzast_varz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_localzd2namezd2setz12zd2envzc0zzast_varz00,
		BgL_bgl_za762localza7d2nameza72534za7,
		BGl_z62localzd2namezd2setz12z70zzast_varz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzd2failsafezd2setz12zd2envzc0zzast_varz00,
		BgL_bgl_za762sfunza7d2failsa2535z00,
		BGl_z62sfunzd2failsafezd2setz12z70zzast_varz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_globalzd2fastzd2alphazd2envzd2zzast_varz00,
		BgL_bgl_za762globalza7d2fast2536z00,
		BGl_z62globalzd2fastzd2alphaz62zzast_varz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_globalzd2optionalzf3zd2envzf3zzast_varz00,
		BgL_bgl_za762globalza7d2opti2537z00,
		BGl_z62globalzd2optionalzf3z43zzast_varz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_svarzd2nilzd2envz00zzast_varz00,
		BgL_bgl_za762svarza7d2nilza7b02538za7, BGl_z62svarzd2nilzb0zzast_varz00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzd2jvmzd2typezd2namezd2envz00zzast_varz00,
		BgL_bgl_za762globalza7d2jvmza72539za7,
		BGl_z62globalzd2jvmzd2typezd2namezb0zzast_varz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_sfunzd2effectzd2setz12zd2envzc0zzast_varz00,
		BgL_bgl_za762sfunza7d2effect2540z00,
		BGl_z62sfunzd2effectzd2setz12z70zzast_varz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_feffectzd2writezd2envz00zzast_varz00,
		BgL_bgl_za762feffectza7d2wri2541z00, BGl_z62feffectzd2writezb0zzast_varz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzd2stackablezd2setz12zd2envzc0zzast_varz00,
		BgL_bgl_za762sfunza7d2stacka2542z00,
		BGl_z62sfunzd2stackablezd2setz12z70zzast_varz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sfunzd2classzd2envz00zzast_varz00,
		BgL_bgl_za762sfunza7d2classza72543za7, BGl_z62sfunzd2classzb0zzast_varz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cvarzf3zd2envz21zzast_varz00,
		BgL_bgl_za762cvarza7f3za791za7za7a2544za7, BGl_z62cvarzf3z91zzast_varz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzd2evalzf3zd2setz12zd2envz33zzast_varz00,
		BgL_bgl_za762globalza7d2eval2545z00,
		BGl_z62globalzd2evalzf3zd2setz12z83zzast_varz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_svarzf3zd2envz21zzast_varz00,
		BgL_bgl_za762svarza7f3za791za7za7a2546za7, BGl_z62svarzf3z91zzast_varz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzd2argszd2noescapezd2setz12zd2envz12zzast_varz00,
		BgL_bgl_za762sfunza7d2argsza7d2547za7,
		BGl_z62sfunzd2argszd2noescapezd2setz12za2zzast_varz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cfunzd2nilzd2envz00zzast_varz00,
		BgL_bgl_za762cfunza7d2nilza7b02548za7, BGl_z62cfunzd2nilzb0zzast_varz00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cfunzd2stackzd2allocatorzd2envzd2zzast_varz00,
		BgL_bgl_za762cfunza7d2stackza72549za7,
		BGl_z62cfunzd2stackzd2allocatorz62zzast_varz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cfunzd2argszd2noescapezd2envzd2zzast_varz00,
		BgL_bgl_za762cfunza7d2argsza7d2550za7,
		BGl_z62cfunzd2argszd2noescapez62zzast_varz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cfunzd2topzf3zd2envzf3zzast_varz00,
		BgL_bgl_za762cfunza7d2topza7f32551za7, BGl_z62cfunzd2topzf3z43zzast_varz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cfunzd2methodzd2setz12zd2envzc0zzast_varz00,
		BgL_bgl_za762cfunza7d2method2552z00,
		BGl_z62cfunzd2methodzd2setz12z70zzast_varz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sfunzd2topzf3zd2envzf3zzast_varz00,
		BgL_bgl_za762sfunza7d2topza7f32553za7, BGl_z62sfunzd2topzf3z43zzast_varz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cvarzd2macrozf3zd2envzf3zzast_varz00,
		BgL_bgl_za762cvarza7d2macroza72554za7,
		BGl_z62cvarzd2macrozf3z43zzast_varz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_variablezd2valuezd2setz12zd2envzc0zzast_varz00,
		BgL_bgl_za762variableza7d2va2555z00,
		BGl_z62variablezd2valuezd2setz12z70zzast_varz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_globalzd2importzd2envz00zzast_varz00,
		BgL_bgl_za762globalza7d2impo2556z00, BGl_z62globalzd2importzb0zzast_varz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cfunzd2sidezd2effectzd2envzd2zzast_varz00,
		BgL_bgl_za762cfunza7d2sideza7d2557za7,
		BGl_z62cfunzd2sidezd2effectz62zzast_varz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2300z00zzast_varz00,
		BgL_bgl_za762lambda2017za7622558z00, BGl_z62lambda2017z62zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2301z00zzast_varz00,
		BgL_bgl_za762za7c3za704anonymo2559za7,
		BGl_z62zc3z04anonymousza32026ze3ze5zzast_varz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2302z00zzast_varz00,
		BgL_bgl_za762lambda2025za7622560z00, BGl_z62lambda2025z62zzast_varz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2303z00zzast_varz00,
		BgL_bgl_za762lambda2024za7622561z00, BGl_z62lambda2024z62zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_globalzd2namezd2envz00zzast_varz00,
		BgL_bgl_za762globalza7d2name2562z00, BGl_z62globalzd2namezb0zzast_varz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2304z00zzast_varz00,
		BgL_bgl_za762za7c3za704anonymo2563za7,
		BGl_z62zc3z04anonymousza32005ze3ze5zzast_varz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2305z00zzast_varz00,
		BgL_bgl_za762lambda2003za7622564z00, BGl_z62lambda2003z62zzast_varz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2306z00zzast_varz00,
		BgL_bgl_za762lambda2001za7622565z00, BGl_z62lambda2001z62zzast_varz00, 0L,
		BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_localzd2idzd2envz00zzast_varz00,
		BgL_bgl_za762localza7d2idza7b02566za7, BGl_z62localzd2idzb0zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2307z00zzast_varz00,
		BgL_bgl_za762lambda2045za7622567z00, BGl_z62lambda2045z62zzast_varz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2308z00zzast_varz00,
		BgL_bgl_za762lambda2044za7622568z00, BGl_z62lambda2044z62zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2146z00zzast_varz00,
		BgL_bgl_za762za7c3za704anonymo2569za7,
		BGl_z62zc3z04anonymousza31320ze3ze5zzast_varz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2309z00zzast_varz00,
		BgL_bgl_za762za7c3za704anonymo2570za7,
		BGl_z62zc3z04anonymousza32039ze3ze5zzast_varz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2147z00zzast_varz00,
		BgL_bgl_za762lambda1318za7622571z00, BGl_z62lambda1318z62zzast_varz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2148z00zzast_varz00,
		BgL_bgl_za762lambda1316za7622572z00, BGl_z62lambda1316z62zzast_varz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2149z00zzast_varz00,
		BgL_bgl_za762lambda1339za7622573z00, BGl_z62lambda1339z62zzast_varz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_localzd2valuezd2envz00zzast_varz00,
		BgL_bgl_za762localza7d2value2574z00, BGl_z62localzd2valuezb0zzast_varz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2310z00zzast_varz00,
		BgL_bgl_za762lambda2037za7622575z00, BGl_z62lambda2037z62zzast_varz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2311z00zzast_varz00,
		BgL_bgl_za762lambda2035za7622576z00, BGl_z62lambda2035z62zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2312z00zzast_varz00,
		BgL_bgl_za762lambda2062za7622577z00, BGl_z62lambda2062z62zzast_varz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2150z00zzast_varz00,
		BgL_bgl_za762lambda1338za7622578z00, BGl_z62lambda1338z62zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2313z00zzast_varz00,
		BgL_bgl_za762lambda2061za7622579z00, BGl_z62lambda2061z62zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2151z00zzast_varz00,
		BgL_bgl_za762za7c3za704anonymo2580za7,
		BGl_z62zc3z04anonymousza31349ze3ze5zzast_varz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2314z00zzast_varz00,
		BgL_bgl_za762za7c3za704anonymo2581za7,
		BGl_z62zc3z04anonymousza32071ze3ze5zzast_varz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2152z00zzast_varz00,
		BgL_bgl_za762lambda1348za7622582z00, BGl_z62lambda1348z62zzast_varz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2315z00zzast_varz00,
		BgL_bgl_za762lambda2070za7622583z00, BGl_z62lambda2070z62zzast_varz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2153z00zzast_varz00,
		BgL_bgl_za762lambda1347za7622584z00, BGl_z62lambda1347z62zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2316z00zzast_varz00,
		BgL_bgl_za762lambda2069za7622585z00, BGl_z62lambda2069z62zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2154z00zzast_varz00,
		BgL_bgl_za762lambda1359za7622586z00, BGl_z62lambda1359z62zzast_varz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_svarzd2loczd2setz12zd2envzc0zzast_varz00,
		BgL_bgl_za762svarza7d2locza7d22587za7,
		BGl_z62svarzd2loczd2setz12z70zzast_varz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2317z00zzast_varz00,
		BgL_bgl_za762za7c3za704anonymo2588za7,
		BGl_z62zc3z04anonymousza32056ze3ze5zzast_varz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2155z00zzast_varz00,
		BgL_bgl_za762lambda1358za7622589z00, BGl_z62lambda1358z62zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2318z00zzast_varz00,
		BgL_bgl_za762lambda2054za7622590z00, BGl_z62lambda2054z62zzast_varz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2156z00zzast_varz00,
		BgL_bgl_za762lambda1365za7622591z00, BGl_z62lambda1365z62zzast_varz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2sfunzd2envz00zzast_varz00,
		BgL_bgl_za762makeza7d2sfunza7b2592za7, BGl_z62makezd2sfunzb0zzast_varz00,
		0L, BUNSPEC, 21);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2319z00zzast_varz00,
		BgL_bgl_za762lambda2051za7622593z00, BGl_z62lambda2051z62zzast_varz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2157z00zzast_varz00,
		BgL_bgl_za762lambda1364za7622594z00, BGl_z62lambda1364z62zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2158z00zzast_varz00,
		BgL_bgl_za762za7c3za704anonymo2595za7,
		BGl_z62zc3z04anonymousza31375ze3ze5zzast_varz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2159z00zzast_varz00,
		BgL_bgl_za762lambda1374za7622596z00, BGl_z62lambda1374z62zzast_varz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_scnstzd2classzd2setz12zd2envzc0zzast_varz00,
		BgL_bgl_za762scnstza7d2class2597z00,
		BGl_z62scnstzd2classzd2setz12z70zzast_varz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cfunzd2infixzf3zd2envzf3zzast_varz00,
		BgL_bgl_za762cfunza7d2infixza72598za7,
		BGl_z62cfunzd2infixzf3z43zzast_varz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_sfunzd2thezd2closurezd2envzd2zzast_varz00,
		BgL_bgl_za762sfunza7d2theza7d22599za7,
		BGl_z62sfunzd2thezd2closurez62zzast_varz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cfunzd2methodzd2envz00zzast_varz00,
		BgL_bgl_za762cfunza7d2method2600z00, BGl_z62cfunzd2methodzb0zzast_varz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_feffectzd2readzd2setz12zd2envzc0zzast_varz00,
		BgL_bgl_za762feffectza7d2rea2601z00,
		BGl_z62feffectzd2readzd2setz12z70zzast_varz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2320z00zzast_varz00,
		BgL_bgl_za762za7c3za704anonymo2602za7,
		BGl_z62zc3z04anonymousza32090ze3ze5zzast_varz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2321z00zzast_varz00,
		BgL_bgl_za762lambda2089za7622603z00, BGl_z62lambda2089z62zzast_varz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2322z00zzast_varz00,
		BgL_bgl_za762lambda2088za7622604z00, BGl_z62lambda2088z62zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2160z00zzast_varz00,
		BgL_bgl_za762lambda1373za7622605z00, BGl_z62lambda1373z62zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2323z00zzast_varz00,
		BgL_bgl_za762za7c3za704anonymo2606za7,
		BGl_z62zc3z04anonymousza32097ze3ze5zzast_varz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2161z00zzast_varz00,
		BgL_bgl_za762za7c3za704anonymo2607za7,
		BGl_z62zc3z04anonymousza31387ze3ze5zzast_varz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2324z00zzast_varz00,
		BgL_bgl_za762lambda2096za7622608z00, BGl_z62lambda2096z62zzast_varz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2162z00zzast_varz00,
		BgL_bgl_za762lambda1386za7622609z00, BGl_z62lambda1386z62zzast_varz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2325z00zzast_varz00,
		BgL_bgl_za762lambda2095za7622610z00, BGl_z62lambda2095z62zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2163z00zzast_varz00,
		BgL_bgl_za762lambda1385za7622611z00, BGl_z62lambda1385z62zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2326z00zzast_varz00,
		BgL_bgl_za762za7c3za704anonymo2612za7,
		BGl_z62zc3z04anonymousza32083ze3ze5zzast_varz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2164z00zzast_varz00,
		BgL_bgl_za762za7c3za704anonymo2613za7,
		BGl_z62zc3z04anonymousza31420ze3ze5zzast_varz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2327z00zzast_varz00,
		BgL_bgl_za762lambda2081za7622614z00, BGl_z62lambda2081z62zzast_varz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2165z00zzast_varz00,
		BgL_bgl_za762lambda1419za7622615z00, BGl_z62lambda1419z62zzast_varz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2328z00zzast_varz00,
		BgL_bgl_za762lambda2079za7622616z00, BGl_z62lambda2079z62zzast_varz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2166z00zzast_varz00,
		BgL_bgl_za762lambda1418za7622617z00, BGl_z62lambda1418z62zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2167z00zzast_varz00,
		BgL_bgl_za762za7c3za704anonymo2618za7,
		BGl_z62zc3z04anonymousza31445ze3ze5zzast_varz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2168z00zzast_varz00,
		BgL_bgl_za762lambda1444za7622619z00, BGl_z62lambda1444z62zzast_varz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2169z00zzast_varz00,
		BgL_bgl_za762lambda1443za7622620z00, BGl_z62lambda1443z62zzast_varz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_localzd2valuezd2setz12zd2envzc0zzast_varz00,
		BgL_bgl_za762localza7d2value2621z00,
		BGl_z62localzd2valuezd2setz12z70zzast_varz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_localzd2keyzd2envz00zzast_varz00,
		BgL_bgl_za762localza7d2keyza7b2622za7, BGl_z62localzd2keyzb0zzast_varz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2170z00zzast_varz00,
		BgL_bgl_za762za7c3za704anonymo2623za7,
		BGl_z62zc3z04anonymousza31465ze3ze5zzast_varz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2171z00zzast_varz00,
		BgL_bgl_za762lambda1464za7622624z00, BGl_z62lambda1464z62zzast_varz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2172z00zzast_varz00,
		BgL_bgl_za762lambda1463za7622625z00, BGl_z62lambda1463z62zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2173z00zzast_varz00,
		BgL_bgl_za762za7c3za704anonymo2626za7,
		BGl_z62zc3z04anonymousza31492ze3ze5zzast_varz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2174z00zzast_varz00,
		BgL_bgl_za762lambda1491za7622627z00, BGl_z62lambda1491z62zzast_varz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2175z00zzast_varz00,
		BgL_bgl_za762lambda1490za7622628z00, BGl_z62lambda1490z62zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2176z00zzast_varz00,
		BgL_bgl_za762za7c3za704anonymo2629za7,
		BGl_z62zc3z04anonymousza31332ze3ze5zzast_varz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2177z00zzast_varz00,
		BgL_bgl_za762lambda1330za7622630z00, BGl_z62lambda1330z62zzast_varz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2178z00zzast_varz00,
		BgL_bgl_za762lambda1328za7622631z00, BGl_z62lambda1328z62zzast_varz00, 0L,
		BUNSPEC, 10);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2179z00zzast_varz00,
		BgL_bgl_za762lambda1555za7622632z00, BGl_z62lambda1555z62zzast_varz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_localzd2accesszd2envz00zzast_varz00,
		BgL_bgl_za762localza7d2acces2633z00, BGl_z62localzd2accesszb0zzast_varz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzd2setzd2readzd2onlyz12zd2envz12zzast_varz00,
		BgL_bgl_za762globalza7d2setza72634za7,
		BGl_z62globalzd2setzd2readzd2onlyz12za2zzast_varz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_scnstzd2loczd2envz00zzast_varz00,
		BgL_bgl_za762scnstza7d2locza7b2635za7, BGl_z62scnstzd2loczb0zzast_varz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2180z00zzast_varz00,
		BgL_bgl_za762lambda1554za7622636z00, BGl_z62lambda1554z62zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2181z00zzast_varz00,
		BgL_bgl_za762lambda1566za7622637z00, BGl_z62lambda1566z62zzast_varz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2182z00zzast_varz00,
		BgL_bgl_za762lambda1565za7622638z00, BGl_z62lambda1565z62zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2183z00zzast_varz00,
		BgL_bgl_za762za7c3za704anonymo2639za7,
		BGl_z62zc3z04anonymousza31585ze3ze5zzast_varz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2184z00zzast_varz00,
		BgL_bgl_za762lambda1584za7622640z00, BGl_z62lambda1584z62zzast_varz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2185z00zzast_varz00,
		BgL_bgl_za762lambda1583za7622641z00, BGl_z62lambda1583z62zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2186z00zzast_varz00,
		BgL_bgl_za762za7c3za704anonymo2642za7,
		BGl_z62zc3z04anonymousza31596ze3ze5zzast_varz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_variablezd2accesszd2setz12zd2envzc0zzast_varz00,
		BgL_bgl_za762variableza7d2ac2643z00,
		BGl_z62variablezd2accesszd2setz12z70zzast_varz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2187z00zzast_varz00,
		BgL_bgl_za762lambda1595za7622644z00, BGl_z62lambda1595z62zzast_varz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2188z00zzast_varz00,
		BgL_bgl_za762lambda1594za7622645z00, BGl_z62lambda1594z62zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2189z00zzast_varz00,
		BgL_bgl_za762za7c3za704anonymo2646za7,
		BGl_z62zc3z04anonymousza31608ze3ze5zzast_varz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_localzd2userzf3zd2envzf3zzast_varz00,
		BgL_bgl_za762localza7d2userza72647za7,
		BGl_z62localzd2userzf3z43zzast_varz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2190z00zzast_varz00,
		BgL_bgl_za762lambda1607za7622648z00, BGl_z62lambda1607z62zzast_varz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2191z00zzast_varz00,
		BgL_bgl_za762lambda1606za7622649z00, BGl_z62lambda1606z62zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2192z00zzast_varz00,
		BgL_bgl_za762za7c3za704anonymo2650za7,
		BGl_z62zc3z04anonymousza31627ze3ze5zzast_varz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2193z00zzast_varz00,
		BgL_bgl_za762lambda1626za7622651z00, BGl_z62lambda1626z62zzast_varz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2194z00zzast_varz00,
		BgL_bgl_za762lambda1625za7622652z00, BGl_z62lambda1625z62zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2195z00zzast_varz00,
		BgL_bgl_za762lambda1641za7622653z00, BGl_z62lambda1641z62zzast_varz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2196z00zzast_varz00,
		BgL_bgl_za762lambda1640za7622654z00, BGl_z62lambda1640z62zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2197z00zzast_varz00,
		BgL_bgl_za762lambda1664za7622655z00, BGl_z62lambda1664z62zzast_varz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2198z00zzast_varz00,
		BgL_bgl_za762lambda1663za7622656z00, BGl_z62lambda1663z62zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2199z00zzast_varz00,
		BgL_bgl_za762za7c3za704anonymo2657za7,
		BGl_z62zc3z04anonymousza31687ze3ze5zzast_varz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_variablezd2typezd2setz12zd2envzc0zzast_varz00,
		BgL_bgl_za762variableza7d2ty2658z00,
		BGl_z62variablezd2typezd2setz12z70zzast_varz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_localzd2typezd2setz12zd2envzc0zzast_varz00,
		BgL_bgl_za762localza7d2typeza72659za7,
		BGl_z62localzd2typezd2setz12z70zzast_varz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_globalzd2pragmazd2envz00zzast_varz00,
		BgL_bgl_za762globalza7d2prag2660z00, BGl_z62globalzd2pragmazb0zzast_varz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzd2valuezd2setz12zd2envzc0zzast_varz00,
		BgL_bgl_za762globalza7d2valu2661z00,
		BGl_z62globalzd2valuezd2setz12z70zzast_varz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_globalzd2valuezd2envz00zzast_varz00,
		BgL_bgl_za762globalza7d2valu2662z00, BGl_z62globalzd2valuezb0zzast_varz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2globalzd2envz00zzast_varz00,
		BgL_bgl_za762makeza7d2global2663z00, BGl_z62makezd2globalzb0zzast_varz00,
		0L, BUNSPEC, 20);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_globalzd2keyzf3zd2envzf3zzast_varz00,
		BgL_bgl_za762globalza7d2keyza72664za7,
		BGl_z62globalzd2keyzf3z43zzast_varz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sexitzf3zd2envz21zzast_varz00,
		BgL_bgl_za762sexitza7f3za791za7za72665za7, BGl_z62sexitzf3z91zzast_varz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_sexitzd2detachedzf3zd2envzf3zzast_varz00,
		BgL_bgl_za762sexitza7d2detac2666z00,
		BGl_z62sexitzd2detachedzf3z43zzast_varz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_variablezd2userzf3zd2setz12zd2envz33zzast_varz00,
		BgL_bgl_za762variableza7d2us2667z00,
		BGl_z62variablezd2userzf3zd2setz12z83zzast_varz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cvarzd2nilzd2envz00zzast_varz00,
		BgL_bgl_za762cvarza7d2nilza7b02668za7, BGl_z62cvarzd2nilzb0zzast_varz00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_variablezd2occurrencezd2envz00zzast_varz00,
		BgL_bgl_za762variableza7d2oc2669z00,
		BGl_z62variablezd2occurrencezb0zzast_varz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_variablezd2occurrencewzd2envz00zzast_varz00,
		BgL_bgl_za762variableza7d2oc2670z00,
		BGl_z62variablezd2occurrencewzb0zzast_varz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cfunzd2effectzd2setz12zd2envzc0zzast_varz00,
		BgL_bgl_za762cfunza7d2effect2671z00,
		BGl_z62cfunzd2effectzd2setz12z70zzast_varz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sfunzd2optionalszd2envz00zzast_varz00,
		BgL_bgl_za762sfunza7d2option2672z00, BGl_z62sfunzd2optionalszb0zzast_varz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_globalzd2evalzf3zd2envzf3zzast_varz00,
		BgL_bgl_za762globalza7d2eval2673z00, BGl_z62globalzd2evalzf3z43zzast_varz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2funzd2envz00zzast_varz00,
		BgL_bgl_za762makeza7d2funza7b02674za7, BGl_z62makezd2funzb0zzast_varz00, 0L,
		BUNSPEC, 9);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_funzd2stackzd2allocatorzd2setz12zd2envz12zzast_varz00,
		BgL_bgl_za762funza7d2stackza7d2675za7,
		BGl_z62funzd2stackzd2allocatorzd2setz12za2zzast_varz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzd2libraryzd2setz12zd2envzc0zzast_varz00,
		BgL_bgl_za762globalza7d2libr2676z00,
		BGl_z62globalzd2libraryzd2setz12z70zzast_varz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cfunzd2failsafezd2envz00zzast_varz00,
		BgL_bgl_za762cfunza7d2failsa2677z00, BGl_z62cfunzd2failsafezb0zzast_varz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_globalzd2userzf3zd2envzf3zzast_varz00,
		BgL_bgl_za762globalza7d2user2678z00, BGl_z62globalzd2userzf3z43zzast_varz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_globalzd2typezd2envz00zzast_varz00,
		BgL_bgl_za762globalza7d2type2679z00, BGl_z62globalzd2typezb0zzast_varz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzd2occurrencewzd2setz12zd2envzc0zzast_varz00,
		BgL_bgl_za762globalza7d2occu2680z00,
		BGl_z62globalzd2occurrencewzd2setz12z70zzast_varz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sfunzd2failsafezd2envz00zzast_varz00,
		BgL_bgl_za762sfunza7d2failsa2681z00, BGl_z62sfunzd2failsafezb0zzast_varz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_funzd2predicatezd2ofzd2envzd2zzast_varz00,
		BgL_bgl_za762funza7d2predica2682z00,
		BGl_z62funzd2predicatezd2ofz62zzast_varz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_localzf3zd2envz21zzast_varz00,
		BgL_bgl_za762localza7f3za791za7za72683za7, BGl_z62localzf3z91zzast_varz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzd2userzf3zd2setz12zd2envz33zzast_varz00,
		BgL_bgl_za762localza7d2userza72684za7,
		BGl_z62localzd2userzf3zd2setz12z83zzast_varz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_localzd2occurrencezd2envz00zzast_varz00,
		BgL_bgl_za762localza7d2occur2685z00,
		BGl_z62localzd2occurrencezb0zzast_varz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cfunzd2topzf3zd2setz12zd2envz33zzast_varz00,
		BgL_bgl_za762cfunza7d2topza7f32686za7,
		BGl_z62cfunzd2topzf3zd2setz12z83zzast_varz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_sfunzd2argszd2noescapezd2envzd2zzast_varz00,
		BgL_bgl_za762sfunza7d2argsza7d2687za7,
		BGl_z62sfunzd2argszd2noescapez62zzast_varz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sexitzd2handlerzd2setz12zd2envzc0zzast_varz00,
		BgL_bgl_za762sexitza7d2handl2688z00,
		BGl_z62sexitzd2handlerzd2setz12z70zzast_varz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2svarzd2envz00zzast_varz00,
		BgL_bgl_za762makeza7d2svarza7b2689za7, BGl_z62makezd2svarzb0zzast_varz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_sfunzd2classzd2setz12zd2envzc0zzast_varz00,
		BgL_bgl_za762sfunza7d2classza72690za7,
		BGl_z62sfunzd2classzd2setz12z70zzast_varz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzd2removablezd2setz12zd2envzc0zzast_varz00,
		BgL_bgl_za762globalza7d2remo2691z00,
		BGl_z62globalzd2removablezd2setz12z70zzast_varz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_globalzd2removablezd2envz00zzast_varz00,
		BgL_bgl_za762globalza7d2remo2692z00,
		BGl_z62globalzd2removablezb0zzast_varz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_globalzd2nilzd2envz00zzast_varz00,
		BgL_bgl_za762globalza7d2nilza72693za7, BGl_z62globalzd2nilzb0zzast_varz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_funzf3zd2envz21zzast_varz00,
		BgL_bgl_za762funza7f3za791za7za7as2694za7, BGl_z62funzf3z91zzast_varz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_funzd2stackzd2allocatorzd2envzd2zzast_varz00,
		BgL_bgl_za762funza7d2stackza7d2695za7,
		BGl_z62funzd2stackzd2allocatorz62zzast_varz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_funzd2thezd2closurezd2setz12zd2envz12zzast_varz00,
		BgL_bgl_za762funza7d2theza7d2c2696za7,
		BGl_z62funzd2thezd2closurezd2setz12za2zzast_varz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sfunzd2keyzf3zd2envzf3zzast_varz00,
		BgL_bgl_za762sfunza7d2keyza7f32697za7, BGl_z62sfunzd2keyzf3z43zzast_varz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cfunzd2predicatezd2ofzd2envzd2zzast_varz00,
		BgL_bgl_za762cfunza7d2predic2698z00,
		BGl_z62cfunzd2predicatezd2ofz62zzast_varz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzd2userzf3zd2setz12zd2envz33zzast_varz00,
		BgL_bgl_za762globalza7d2user2699z00,
		BGl_z62globalzd2userzf3zd2setz12z83zzast_varz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_sfunzd2predicatezd2ofzd2envzd2zzast_varz00,
		BgL_bgl_za762sfunza7d2predic2700z00,
		BGl_z62sfunzd2predicatezd2ofz62zzast_varz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_globalzd2occurrencezd2envz00zzast_varz00,
		BgL_bgl_za762globalza7d2occu2701z00,
		BGl_z62globalzd2occurrencezb0zzast_varz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzd2readzd2onlyzf3zd2envz21zzast_varz00,
		BgL_bgl_za762globalza7d2read2702z00,
		BGl_z62globalzd2readzd2onlyzf3z91zzast_varz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_funzd2topzf3zd2envzf3zzast_varz00,
		BgL_bgl_za762funza7d2topza7f3za72703z00, BGl_z62funzd2topzf3z43zzast_varz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_funzd2predicatezd2ofzd2setz12zd2envz12zzast_varz00,
		BgL_bgl_za762funza7d2predica2704z00,
		BGl_z62funzd2predicatezd2ofzd2setz12za2zzast_varz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2cfunzd2envz00zzast_varz00,
		BgL_bgl_za762makeza7d2cfunza7b2705za7, BGl_z62makezd2cfunzb0zzast_varz00,
		0L, BUNSPEC, 13);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cfunzd2arityzd2envz00zzast_varz00,
		BgL_bgl_za762cfunza7d2arityza72706za7, BGl_z62cfunzd2arityzb0zzast_varz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_funzd2topzf3zd2setz12zd2envz33zzast_varz00,
		BgL_bgl_za762funza7d2topza7f3za72707z00,
		BGl_z62funzd2topzf3zd2setz12z83zzast_varz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cfunzd2thezd2closurezd2envzd2zzast_varz00,
		BgL_bgl_za762cfunza7d2theza7d22708za7,
		BGl_z62cfunzd2thezd2closurez62zzast_varz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_funzd2failsafezd2envz00zzast_varz00,
		BgL_bgl_za762funza7d2failsaf2709z00, BGl_z62funzd2failsafezb0zzast_varz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sfunzd2effectzd2envz00zzast_varz00,
		BgL_bgl_za762sfunza7d2effect2710z00, BGl_z62sfunzd2effectzb0zzast_varz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_variablezd2accesszd2envz00zzast_varz00,
		BgL_bgl_za762variableza7d2ac2711z00,
		BGl_z62variablezd2accesszb0zzast_varz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_globalzf3zd2envz21zzast_varz00,
		BgL_bgl_za762globalza7f3za791za72712z00, BGl_z62globalzf3z91zzast_varz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_variablezd2nilzd2envz00zzast_varz00,
		BgL_bgl_za762variableza7d2ni2713z00, BGl_z62variablezd2nilzb0zzast_varz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_globalzd2idzd2envz00zzast_varz00,
		BgL_bgl_za762globalza7d2idza7b2714za7, BGl_z62globalzd2idzb0zzast_varz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_globalzd2initzd2envz00zzast_varz00,
		BgL_bgl_za762globalza7d2init2715z00, BGl_z62globalzd2initzb0zzast_varz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_globalzd2namezd2setz12zd2envzc0zzast_varz00,
		BgL_bgl_za762globalza7d2name2716z00,
		BGl_z62globalzd2namezd2setz12z70zzast_varz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sfunzd2propertyzd2envz00zzast_varz00,
		BgL_bgl_za762sfunza7d2proper2717z00, BGl_z62sfunzd2propertyzb0zzast_varz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_sfunzd2argszd2setz12zd2envzc0zzast_varz00,
		BgL_bgl_za762sfunza7d2argsza7d2718za7,
		BGl_z62sfunzd2argszd2setz12z70zzast_varz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_variablezd2valuezd2envz00zzast_varz00,
		BgL_bgl_za762variableza7d2va2719z00, BGl_z62variablezd2valuezb0zzast_varz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_localzd2nilzd2envz00zzast_varz00,
		BgL_bgl_za762localza7d2nilza7b2720za7, BGl_z62localzd2nilzb0zzast_varz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_feffectzd2nilzd2envz00zzast_varz00,
		BgL_bgl_za762feffectza7d2nil2721z00, BGl_z62feffectzd2nilzb0zzast_varz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_globalzd2srczd2envz00zzast_varz00,
		BgL_bgl_za762globalza7d2srcza72722za7, BGl_z62globalzd2srczb0zzast_varz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_scnstzd2nilzd2envz00zzast_varz00,
		BgL_bgl_za762scnstza7d2nilza7b2723za7, BGl_z62scnstzd2nilzb0zzast_varz00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sexitzd2detachedzf3zd2setz12zd2envz33zzast_varz00,
		BgL_bgl_za762sexitza7d2detac2724z00,
		BGl_z62sexitzd2detachedzf3zd2setz12z83zzast_varz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzd2accesszd2setz12zd2envzc0zzast_varz00,
		BgL_bgl_za762globalza7d2acce2725z00,
		BGl_z62globalzd2accesszd2setz12z70zzast_varz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_sfunzd2bodyzd2setz12zd2envzc0zzast_varz00,
		BgL_bgl_za762sfunza7d2bodyza7d2726za7,
		BGl_z62sfunzd2bodyzd2setz12z70zzast_varz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_variablezf3zd2envz21zzast_varz00,
		BgL_bgl_za762variableza7f3za792727za7, BGl_z62variablezf3z91zzast_varz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzd2jvmzd2typezd2namezd2setz12zd2envzc0zzast_varz00,
		BgL_bgl_za762globalza7d2jvmza72728za7,
		BGl_z62globalzd2jvmzd2typezd2namezd2setz12z70zzast_varz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_variablezd2userzf3zd2envzf3zzast_varz00,
		BgL_bgl_za762variableza7d2us2729z00,
		BGl_z62variablezd2userzf3z43zzast_varz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sfunzd2loczd2envz00zzast_varz00,
		BgL_bgl_za762sfunza7d2locza7b02730za7, BGl_z62sfunzd2loczb0zzast_varz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2localzd2envz00zzast_varz00,
		BgL_bgl_za762makeza7d2localza72731za7, BGl_z62makezd2localzb0zzast_varz00,
		0L, BUNSPEC, 11);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_variablezd2namezd2envz00zzast_varz00,
		BgL_bgl_za762variableza7d2na2732z00, BGl_z62variablezd2namezb0zzast_varz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_variablezd2removablezd2setz12zd2envzc0zzast_varz00,
		BgL_bgl_za762variableza7d2re2733z00,
		BGl_z62variablezd2removablezd2setz12z70zzast_varz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cfunzd2argszd2noescapezd2setz12zd2envz12zzast_varz00,
		BgL_bgl_za762cfunza7d2argsza7d2734za7,
		BGl_z62cfunzd2argszd2noescapezd2setz12za2zzast_varz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2scnstzd2envz00zzast_varz00,
		BgL_bgl_za762makeza7d2scnstza72735za7, BGl_z62makezd2scnstzb0zzast_varz00,
		0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_globalzd2occurrencewzd2envz00zzast_varz00,
		BgL_bgl_za762globalza7d2occu2736z00,
		BGl_z62globalzd2occurrencewzb0zzast_varz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sexitzd2handlerzd2envz00zzast_varz00,
		BgL_bgl_za762sexitza7d2handl2737z00, BGl_z62sexitzd2handlerzb0zzast_varz00,
		0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_sfunz00zzast_varz00));
		     ADD_ROOT((void *) (&BGl_sexitz00zzast_varz00));
		     ADD_ROOT((void *) (&BGl_svarz00zzast_varz00));
		     ADD_ROOT((void *) (&BGl_cfunz00zzast_varz00));
		     ADD_ROOT((void *) (&BGl_variablez00zzast_varz00));
		     ADD_ROOT((void *) (&BGl_cvarz00zzast_varz00));
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzast_varz00));
		     ADD_ROOT((void *) (&BGl_funz00zzast_varz00));
		     ADD_ROOT((void *) (&BGl_localz00zzast_varz00));
		     ADD_ROOT((void *) (&BGl_feffectz00zzast_varz00));
		     ADD_ROOT((void *) (&BGl_scnstz00zzast_varz00));
		     ADD_ROOT((void *) (&BGl_valuez00zzast_varz00));
		     ADD_ROOT((void *) (&BGl_globalz00zzast_varz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long
		BgL_checksumz00_3392, char *BgL_fromz00_3393)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_varz00))
				{
					BGl_requirezd2initializa7ationz75zzast_varz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzast_varz00();
					BGl_libraryzd2moduleszd2initz00zzast_varz00();
					BGl_cnstzd2initzd2zzast_varz00();
					BGl_importedzd2moduleszd2initz00zzast_varz00();
					BGl_objectzd2initzd2zzast_varz00();
					return BGl_methodzd2initzd2zzast_varz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_varz00()
	{
		{	/* Ast/var.scm 14 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "ast_var");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"ast_var");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "ast_var");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"ast_var");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"ast_var");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"ast_var");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"ast_var");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_varz00()
	{
		{	/* Ast/var.scm 14 */
			{	/* Ast/var.scm 14 */
				obj_t BgL_cportz00_3059;

				{	/* Ast/var.scm 14 */
					obj_t BgL_stringz00_3067;

					BgL_stringz00_3067 = BGl_string2331z00zzast_varz00;
					{	/* Ast/var.scm 14 */
						obj_t BgL_startz00_3068;

						BgL_startz00_3068 = BINT(((long) 0));
						{	/* Ast/var.scm 14 */
							obj_t BgL_endz00_3069;

							BgL_endz00_3069 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_3067)));
							{	/* Ast/var.scm 14 */

								BgL_cportz00_3059 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_3067, BgL_startz00_3068, BgL_endz00_3069);
				}}}}
				{
					long BgL_iz00_3060;

					BgL_iz00_3060 = ((long) 73);
				BgL_loopz00_3061:
					if ((BgL_iz00_3060 == ((long) -1)))
						{	/* Ast/var.scm 14 */
							return BUNSPEC;
						}
					else
						{	/* Ast/var.scm 14 */
							{	/* Ast/var.scm 14 */
								obj_t BgL_arg2334z00_3063;

								{	/* Ast/var.scm 14 */

									{	/* Ast/var.scm 14 */
										obj_t BgL_locationz00_3065;

										BgL_locationz00_3065 = BBOOL(((bool_t) 0));
										{	/* Ast/var.scm 14 */

											BgL_arg2334z00_3063 =
												BGl_readz00zz__readerz00(BgL_cportz00_3059,
												BgL_locationz00_3065);
										}
									}
								}
								{	/* Ast/var.scm 14 */
									int BgL_tmpz00_3419;

									BgL_tmpz00_3419 = (int) (BgL_iz00_3060);
									CNST_TABLE_SET(BgL_tmpz00_3419, BgL_arg2334z00_3063);
							}}
							{	/* Ast/var.scm 14 */
								int BgL_auxz00_3066;

								BgL_auxz00_3066 = (int) ((BgL_iz00_3060 - ((long) 1)));
								{
									long BgL_iz00_3424;

									BgL_iz00_3424 = (long) (BgL_auxz00_3066);
									BgL_iz00_3060 = BgL_iz00_3424;
									goto BgL_loopz00_3061;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzast_varz00()
	{
		{	/* Ast/var.scm 14 */
			return bgl_gc_roots_register();
		}

	}



/* make-value */
	BGL_EXPORTED_DEF BgL_valuez00_bglt BGl_makezd2valuezd2zzast_varz00()
	{
		{	/* Ast/var.sch 270 */
			{	/* Ast/var.sch 270 */
				BgL_valuez00_bglt BgL_new1178z00_3072;

				{	/* Ast/var.sch 270 */
					BgL_valuez00_bglt BgL_new1177z00_3073;

					BgL_new1177z00_3073 =
						((BgL_valuez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_valuez00_bgl))));
					{	/* Ast/var.sch 270 */
						long BgL_arg1271z00_3074;

						{	/* Ast/var.sch 270 */
							long BgL_res2099z00_3075;

							BgL_res2099z00_3075 = BGL_CLASS_INDEX(BGl_valuez00zzast_varz00);
							BgL_arg1271z00_3074 = BgL_res2099z00_3075;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1177z00_3073), BgL_arg1271z00_3074);
					}
					BgL_new1178z00_3072 = BgL_new1177z00_3073;
				}
				return BgL_new1178z00_3072;
			}
		}

	}



/* &make-value */
	BgL_valuez00_bglt BGl_z62makezd2valuezb0zzast_varz00(obj_t BgL_envz00_1843)
	{
		{	/* Ast/var.sch 270 */
			return BGl_makezd2valuezd2zzast_varz00();
		}

	}



/* value? */
	BGL_EXPORTED_DEF bool_t BGl_valuezf3zf3zzast_varz00(obj_t BgL_objz00_3)
	{
		{	/* Ast/var.sch 271 */
			return BGl_isazf3zf3zz__objectz00(BgL_objz00_3, BGl_valuez00zzast_varz00);
		}

	}



/* &value? */
	obj_t BGl_z62valuezf3z91zzast_varz00(obj_t BgL_envz00_1844,
		obj_t BgL_objz00_1845)
	{
		{	/* Ast/var.sch 271 */
			return BBOOL(BGl_valuezf3zf3zzast_varz00(BgL_objz00_1845));
		}

	}



/* value-nil */
	BGL_EXPORTED_DEF BgL_valuez00_bglt BGl_valuezd2nilzd2zzast_varz00()
	{
		{	/* Ast/var.sch 272 */
			{	/* Ast/var.sch 272 */
				obj_t BgL_classz00_1520;

				BgL_classz00_1520 = BGl_valuez00zzast_varz00;
				{	/* Ast/var.sch 272 */
					obj_t BgL__ortest_1106z00_1521;

					BgL__ortest_1106z00_1521 = BGL_CLASS_NIL(BgL_classz00_1520);
					if (CBOOL(BgL__ortest_1106z00_1521))
						{	/* Ast/var.sch 272 */
							return ((BgL_valuez00_bglt) BgL__ortest_1106z00_1521);
						}
					else
						{	/* Ast/var.sch 272 */
							return
								((BgL_valuez00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_1520));
						}
				}
			}
		}

	}



/* &value-nil */
	BgL_valuez00_bglt BGl_z62valuezd2nilzb0zzast_varz00(obj_t BgL_envz00_1846)
	{
		{	/* Ast/var.sch 272 */
			return BGl_valuezd2nilzd2zzast_varz00();
		}

	}



/* make-variable */
	BGL_EXPORTED_DEF BgL_variablez00_bglt BGl_makezd2variablezd2zzast_varz00(obj_t
		BgL_id1273z00_4, obj_t BgL_name1274z00_5,
		BgL_typez00_bglt BgL_type1275z00_6, BgL_valuez00_bglt BgL_value1276z00_7,
		obj_t BgL_access1277z00_8, obj_t BgL_fastzd2alpha1278zd2_9,
		obj_t BgL_removable1279z00_10, long BgL_occurrence1280z00_11,
		long BgL_occurrencew1281z00_12, bool_t BgL_userzf31282zf3_13)
	{
		{	/* Ast/var.sch 275 */
			{	/* Ast/var.sch 275 */
				BgL_variablez00_bglt BgL_new1181z00_3076;

				{	/* Ast/var.sch 275 */
					BgL_variablez00_bglt BgL_new1180z00_3077;

					BgL_new1180z00_3077 =
						((BgL_variablez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_variablez00_bgl))));
					{	/* Ast/var.sch 275 */
						long BgL_arg1273z00_3078;

						{	/* Ast/var.sch 275 */
							long BgL_res2100z00_3079;

							BgL_res2100z00_3079 =
								BGL_CLASS_INDEX(BGl_variablez00zzast_varz00);
							BgL_arg1273z00_3078 = BgL_res2100z00_3079;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1180z00_3077), BgL_arg1273z00_3078);
					}
					BgL_new1181z00_3076 = BgL_new1180z00_3077;
				}
				((((BgL_variablez00_bglt) COBJECT(BgL_new1181z00_3076))->BgL_idz00) =
					((obj_t) BgL_id1273z00_4), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(BgL_new1181z00_3076))->BgL_namez00) =
					((obj_t) BgL_name1274z00_5), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(BgL_new1181z00_3076))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1275z00_6), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(BgL_new1181z00_3076))->BgL_valuez00) =
					((BgL_valuez00_bglt) BgL_value1276z00_7), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(BgL_new1181z00_3076))->
						BgL_accessz00) = ((obj_t) BgL_access1277z00_8), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(BgL_new1181z00_3076))->
						BgL_fastzd2alphazd2) =
					((obj_t) BgL_fastzd2alpha1278zd2_9), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(BgL_new1181z00_3076))->
						BgL_removablez00) = ((obj_t) BgL_removable1279z00_10), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(BgL_new1181z00_3076))->
						BgL_occurrencez00) = ((long) BgL_occurrence1280z00_11), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(BgL_new1181z00_3076))->
						BgL_occurrencewz00) = ((long) BgL_occurrencew1281z00_12), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(BgL_new1181z00_3076))->
						BgL_userzf3zf3) = ((bool_t) BgL_userzf31282zf3_13), BUNSPEC);
				return BgL_new1181z00_3076;
			}
		}

	}



/* &make-variable */
	BgL_variablez00_bglt BGl_z62makezd2variablezb0zzast_varz00(obj_t
		BgL_envz00_1847, obj_t BgL_id1273z00_1848, obj_t BgL_name1274z00_1849,
		obj_t BgL_type1275z00_1850, obj_t BgL_value1276z00_1851,
		obj_t BgL_access1277z00_1852, obj_t BgL_fastzd2alpha1278zd2_1853,
		obj_t BgL_removable1279z00_1854, obj_t BgL_occurrence1280z00_1855,
		obj_t BgL_occurrencew1281z00_1856, obj_t BgL_userzf31282zf3_1857)
	{
		{	/* Ast/var.sch 275 */
			return
				BGl_makezd2variablezd2zzast_varz00(BgL_id1273z00_1848,
				BgL_name1274z00_1849, ((BgL_typez00_bglt) BgL_type1275z00_1850),
				((BgL_valuez00_bglt) BgL_value1276z00_1851), BgL_access1277z00_1852,
				BgL_fastzd2alpha1278zd2_1853, BgL_removable1279z00_1854,
				(long) CINT(BgL_occurrence1280z00_1855),
				(long) CINT(BgL_occurrencew1281z00_1856),
				CBOOL(BgL_userzf31282zf3_1857));
		}

	}



/* variable? */
	BGL_EXPORTED_DEF bool_t BGl_variablezf3zf3zzast_varz00(obj_t BgL_objz00_14)
	{
		{	/* Ast/var.sch 276 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_14, BGl_variablez00zzast_varz00);
		}

	}



/* &variable? */
	obj_t BGl_z62variablezf3z91zzast_varz00(obj_t BgL_envz00_1858,
		obj_t BgL_objz00_1859)
	{
		{	/* Ast/var.sch 276 */
			return BBOOL(BGl_variablezf3zf3zzast_varz00(BgL_objz00_1859));
		}

	}



/* variable-nil */
	BGL_EXPORTED_DEF BgL_variablez00_bglt BGl_variablezd2nilzd2zzast_varz00()
	{
		{	/* Ast/var.sch 277 */
			{	/* Ast/var.sch 277 */
				obj_t BgL_classz00_1529;

				BgL_classz00_1529 = BGl_variablez00zzast_varz00;
				{	/* Ast/var.sch 277 */
					obj_t BgL__ortest_1106z00_1530;

					BgL__ortest_1106z00_1530 = BGL_CLASS_NIL(BgL_classz00_1529);
					if (CBOOL(BgL__ortest_1106z00_1530))
						{	/* Ast/var.sch 277 */
							return ((BgL_variablez00_bglt) BgL__ortest_1106z00_1530);
						}
					else
						{	/* Ast/var.sch 277 */
							return
								((BgL_variablez00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_1529));
						}
				}
			}
		}

	}



/* &variable-nil */
	BgL_variablez00_bglt BGl_z62variablezd2nilzb0zzast_varz00(obj_t
		BgL_envz00_1860)
	{
		{	/* Ast/var.sch 277 */
			return BGl_variablezd2nilzd2zzast_varz00();
		}

	}



/* variable-user? */
	BGL_EXPORTED_DEF bool_t
		BGl_variablezd2userzf3z21zzast_varz00(BgL_variablez00_bglt BgL_oz00_15)
	{
		{	/* Ast/var.sch 278 */
			return (((BgL_variablez00_bglt) COBJECT(BgL_oz00_15))->BgL_userzf3zf3);
		}

	}



/* &variable-user? */
	obj_t BGl_z62variablezd2userzf3z43zzast_varz00(obj_t BgL_envz00_1861,
		obj_t BgL_oz00_1862)
	{
		{	/* Ast/var.sch 278 */
			return
				BBOOL(BGl_variablezd2userzf3z21zzast_varz00(
					((BgL_variablez00_bglt) BgL_oz00_1862)));
		}

	}



/* variable-user?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_variablezd2userzf3zd2setz12ze1zzast_varz00(BgL_variablez00_bglt
		BgL_oz00_16, bool_t BgL_vz00_17)
	{
		{	/* Ast/var.sch 279 */
			return
				((((BgL_variablez00_bglt) COBJECT(BgL_oz00_16))->BgL_userzf3zf3) =
				((bool_t) BgL_vz00_17), BUNSPEC);
		}

	}



/* &variable-user?-set! */
	obj_t BGl_z62variablezd2userzf3zd2setz12z83zzast_varz00(obj_t BgL_envz00_1863,
		obj_t BgL_oz00_1864, obj_t BgL_vz00_1865)
	{
		{	/* Ast/var.sch 279 */
			return
				BGl_variablezd2userzf3zd2setz12ze1zzast_varz00(
				((BgL_variablez00_bglt) BgL_oz00_1864), CBOOL(BgL_vz00_1865));
		}

	}



/* variable-occurrencew */
	BGL_EXPORTED_DEF long
		BGl_variablezd2occurrencewzd2zzast_varz00(BgL_variablez00_bglt BgL_oz00_18)
	{
		{	/* Ast/var.sch 280 */
			return
				(((BgL_variablez00_bglt) COBJECT(BgL_oz00_18))->BgL_occurrencewz00);
		}

	}



/* &variable-occurrencew */
	obj_t BGl_z62variablezd2occurrencewzb0zzast_varz00(obj_t BgL_envz00_1866,
		obj_t BgL_oz00_1867)
	{
		{	/* Ast/var.sch 280 */
			return
				BINT(BGl_variablezd2occurrencewzd2zzast_varz00(
					((BgL_variablez00_bglt) BgL_oz00_1867)));
		}

	}



/* variable-occurrencew-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_variablezd2occurrencewzd2setz12z12zzast_varz00(BgL_variablez00_bglt
		BgL_oz00_19, long BgL_vz00_20)
	{
		{	/* Ast/var.sch 281 */
			return
				((((BgL_variablez00_bglt) COBJECT(BgL_oz00_19))->BgL_occurrencewz00) =
				((long) BgL_vz00_20), BUNSPEC);
		}

	}



/* &variable-occurrencew-set! */
	obj_t BGl_z62variablezd2occurrencewzd2setz12z70zzast_varz00(obj_t
		BgL_envz00_1868, obj_t BgL_oz00_1869, obj_t BgL_vz00_1870)
	{
		{	/* Ast/var.sch 281 */
			return
				BGl_variablezd2occurrencewzd2setz12z12zzast_varz00(
				((BgL_variablez00_bglt) BgL_oz00_1869), (long) CINT(BgL_vz00_1870));
		}

	}



/* variable-occurrence */
	BGL_EXPORTED_DEF long
		BGl_variablezd2occurrencezd2zzast_varz00(BgL_variablez00_bglt BgL_oz00_21)
	{
		{	/* Ast/var.sch 282 */
			return (((BgL_variablez00_bglt) COBJECT(BgL_oz00_21))->BgL_occurrencez00);
		}

	}



/* &variable-occurrence */
	obj_t BGl_z62variablezd2occurrencezb0zzast_varz00(obj_t BgL_envz00_1871,
		obj_t BgL_oz00_1872)
	{
		{	/* Ast/var.sch 282 */
			return
				BINT(BGl_variablezd2occurrencezd2zzast_varz00(
					((BgL_variablez00_bglt) BgL_oz00_1872)));
		}

	}



/* variable-occurrence-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_variablezd2occurrencezd2setz12z12zzast_varz00(BgL_variablez00_bglt
		BgL_oz00_22, long BgL_vz00_23)
	{
		{	/* Ast/var.sch 283 */
			return
				((((BgL_variablez00_bglt) COBJECT(BgL_oz00_22))->BgL_occurrencez00) =
				((long) BgL_vz00_23), BUNSPEC);
		}

	}



/* &variable-occurrence-set! */
	obj_t BGl_z62variablezd2occurrencezd2setz12z70zzast_varz00(obj_t
		BgL_envz00_1873, obj_t BgL_oz00_1874, obj_t BgL_vz00_1875)
	{
		{	/* Ast/var.sch 283 */
			return
				BGl_variablezd2occurrencezd2setz12z12zzast_varz00(
				((BgL_variablez00_bglt) BgL_oz00_1874), (long) CINT(BgL_vz00_1875));
		}

	}



/* variable-removable */
	BGL_EXPORTED_DEF obj_t
		BGl_variablezd2removablezd2zzast_varz00(BgL_variablez00_bglt BgL_oz00_24)
	{
		{	/* Ast/var.sch 284 */
			return (((BgL_variablez00_bglt) COBJECT(BgL_oz00_24))->BgL_removablez00);
		}

	}



/* &variable-removable */
	obj_t BGl_z62variablezd2removablezb0zzast_varz00(obj_t BgL_envz00_1876,
		obj_t BgL_oz00_1877)
	{
		{	/* Ast/var.sch 284 */
			return
				BGl_variablezd2removablezd2zzast_varz00(
				((BgL_variablez00_bglt) BgL_oz00_1877));
		}

	}



/* variable-removable-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_variablezd2removablezd2setz12z12zzast_varz00(BgL_variablez00_bglt
		BgL_oz00_25, obj_t BgL_vz00_26)
	{
		{	/* Ast/var.sch 285 */
			return
				((((BgL_variablez00_bglt) COBJECT(BgL_oz00_25))->BgL_removablez00) =
				((obj_t) BgL_vz00_26), BUNSPEC);
		}

	}



/* &variable-removable-set! */
	obj_t BGl_z62variablezd2removablezd2setz12z70zzast_varz00(obj_t
		BgL_envz00_1878, obj_t BgL_oz00_1879, obj_t BgL_vz00_1880)
	{
		{	/* Ast/var.sch 285 */
			return
				BGl_variablezd2removablezd2setz12z12zzast_varz00(
				((BgL_variablez00_bglt) BgL_oz00_1879), BgL_vz00_1880);
		}

	}



/* variable-fast-alpha */
	BGL_EXPORTED_DEF obj_t
		BGl_variablezd2fastzd2alphaz00zzast_varz00(BgL_variablez00_bglt BgL_oz00_27)
	{
		{	/* Ast/var.sch 286 */
			return
				(((BgL_variablez00_bglt) COBJECT(BgL_oz00_27))->BgL_fastzd2alphazd2);
		}

	}



/* &variable-fast-alpha */
	obj_t BGl_z62variablezd2fastzd2alphaz62zzast_varz00(obj_t BgL_envz00_1881,
		obj_t BgL_oz00_1882)
	{
		{	/* Ast/var.sch 286 */
			return
				BGl_variablezd2fastzd2alphaz00zzast_varz00(
				((BgL_variablez00_bglt) BgL_oz00_1882));
		}

	}



/* variable-fast-alpha-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_variablezd2fastzd2alphazd2setz12zc0zzast_varz00(BgL_variablez00_bglt
		BgL_oz00_28, obj_t BgL_vz00_29)
	{
		{	/* Ast/var.sch 287 */
			return
				((((BgL_variablez00_bglt) COBJECT(BgL_oz00_28))->BgL_fastzd2alphazd2) =
				((obj_t) BgL_vz00_29), BUNSPEC);
		}

	}



/* &variable-fast-alpha-set! */
	obj_t BGl_z62variablezd2fastzd2alphazd2setz12za2zzast_varz00(obj_t
		BgL_envz00_1883, obj_t BgL_oz00_1884, obj_t BgL_vz00_1885)
	{
		{	/* Ast/var.sch 287 */
			return
				BGl_variablezd2fastzd2alphazd2setz12zc0zzast_varz00(
				((BgL_variablez00_bglt) BgL_oz00_1884), BgL_vz00_1885);
		}

	}



/* variable-access */
	BGL_EXPORTED_DEF obj_t
		BGl_variablezd2accesszd2zzast_varz00(BgL_variablez00_bglt BgL_oz00_30)
	{
		{	/* Ast/var.sch 288 */
			return (((BgL_variablez00_bglt) COBJECT(BgL_oz00_30))->BgL_accessz00);
		}

	}



/* &variable-access */
	obj_t BGl_z62variablezd2accesszb0zzast_varz00(obj_t BgL_envz00_1886,
		obj_t BgL_oz00_1887)
	{
		{	/* Ast/var.sch 288 */
			return
				BGl_variablezd2accesszd2zzast_varz00(
				((BgL_variablez00_bglt) BgL_oz00_1887));
		}

	}



/* variable-access-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_variablezd2accesszd2setz12z12zzast_varz00(BgL_variablez00_bglt
		BgL_oz00_31, obj_t BgL_vz00_32)
	{
		{	/* Ast/var.sch 289 */
			return
				((((BgL_variablez00_bglt) COBJECT(BgL_oz00_31))->BgL_accessz00) =
				((obj_t) BgL_vz00_32), BUNSPEC);
		}

	}



/* &variable-access-set! */
	obj_t BGl_z62variablezd2accesszd2setz12z70zzast_varz00(obj_t BgL_envz00_1888,
		obj_t BgL_oz00_1889, obj_t BgL_vz00_1890)
	{
		{	/* Ast/var.sch 289 */
			return
				BGl_variablezd2accesszd2setz12z12zzast_varz00(
				((BgL_variablez00_bglt) BgL_oz00_1889), BgL_vz00_1890);
		}

	}



/* variable-value */
	BGL_EXPORTED_DEF BgL_valuez00_bglt
		BGl_variablezd2valuezd2zzast_varz00(BgL_variablez00_bglt BgL_oz00_33)
	{
		{	/* Ast/var.sch 290 */
			return (((BgL_variablez00_bglt) COBJECT(BgL_oz00_33))->BgL_valuez00);
		}

	}



/* &variable-value */
	BgL_valuez00_bglt BGl_z62variablezd2valuezb0zzast_varz00(obj_t
		BgL_envz00_1891, obj_t BgL_oz00_1892)
	{
		{	/* Ast/var.sch 290 */
			return
				BGl_variablezd2valuezd2zzast_varz00(
				((BgL_variablez00_bglt) BgL_oz00_1892));
		}

	}



/* variable-value-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_variablezd2valuezd2setz12z12zzast_varz00(BgL_variablez00_bglt
		BgL_oz00_34, BgL_valuez00_bglt BgL_vz00_35)
	{
		{	/* Ast/var.sch 291 */
			return
				((((BgL_variablez00_bglt) COBJECT(BgL_oz00_34))->BgL_valuez00) =
				((BgL_valuez00_bglt) BgL_vz00_35), BUNSPEC);
		}

	}



/* &variable-value-set! */
	obj_t BGl_z62variablezd2valuezd2setz12z70zzast_varz00(obj_t BgL_envz00_1893,
		obj_t BgL_oz00_1894, obj_t BgL_vz00_1895)
	{
		{	/* Ast/var.sch 291 */
			return
				BGl_variablezd2valuezd2setz12z12zzast_varz00(
				((BgL_variablez00_bglt) BgL_oz00_1894),
				((BgL_valuez00_bglt) BgL_vz00_1895));
		}

	}



/* variable-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_variablezd2typezd2zzast_varz00(BgL_variablez00_bglt BgL_oz00_36)
	{
		{	/* Ast/var.sch 292 */
			return (((BgL_variablez00_bglt) COBJECT(BgL_oz00_36))->BgL_typez00);
		}

	}



/* &variable-type */
	BgL_typez00_bglt BGl_z62variablezd2typezb0zzast_varz00(obj_t BgL_envz00_1896,
		obj_t BgL_oz00_1897)
	{
		{	/* Ast/var.sch 292 */
			return
				BGl_variablezd2typezd2zzast_varz00(
				((BgL_variablez00_bglt) BgL_oz00_1897));
		}

	}



/* variable-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_variablezd2typezd2setz12z12zzast_varz00(BgL_variablez00_bglt
		BgL_oz00_37, BgL_typez00_bglt BgL_vz00_38)
	{
		{	/* Ast/var.sch 293 */
			return
				((((BgL_variablez00_bglt) COBJECT(BgL_oz00_37))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_38), BUNSPEC);
		}

	}



/* &variable-type-set! */
	obj_t BGl_z62variablezd2typezd2setz12z70zzast_varz00(obj_t BgL_envz00_1898,
		obj_t BgL_oz00_1899, obj_t BgL_vz00_1900)
	{
		{	/* Ast/var.sch 293 */
			return
				BGl_variablezd2typezd2setz12z12zzast_varz00(
				((BgL_variablez00_bglt) BgL_oz00_1899),
				((BgL_typez00_bglt) BgL_vz00_1900));
		}

	}



/* variable-name */
	BGL_EXPORTED_DEF obj_t BGl_variablezd2namezd2zzast_varz00(BgL_variablez00_bglt
		BgL_oz00_39)
	{
		{	/* Ast/var.sch 294 */
			return (((BgL_variablez00_bglt) COBJECT(BgL_oz00_39))->BgL_namez00);
		}

	}



/* &variable-name */
	obj_t BGl_z62variablezd2namezb0zzast_varz00(obj_t BgL_envz00_1901,
		obj_t BgL_oz00_1902)
	{
		{	/* Ast/var.sch 294 */
			return
				BGl_variablezd2namezd2zzast_varz00(
				((BgL_variablez00_bglt) BgL_oz00_1902));
		}

	}



/* variable-name-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_variablezd2namezd2setz12z12zzast_varz00(BgL_variablez00_bglt
		BgL_oz00_40, obj_t BgL_vz00_41)
	{
		{	/* Ast/var.sch 295 */
			return
				((((BgL_variablez00_bglt) COBJECT(BgL_oz00_40))->BgL_namez00) =
				((obj_t) BgL_vz00_41), BUNSPEC);
		}

	}



/* &variable-name-set! */
	obj_t BGl_z62variablezd2namezd2setz12z70zzast_varz00(obj_t BgL_envz00_1903,
		obj_t BgL_oz00_1904, obj_t BgL_vz00_1905)
	{
		{	/* Ast/var.sch 295 */
			return
				BGl_variablezd2namezd2setz12z12zzast_varz00(
				((BgL_variablez00_bglt) BgL_oz00_1904), BgL_vz00_1905);
		}

	}



/* variable-id */
	BGL_EXPORTED_DEF obj_t BGl_variablezd2idzd2zzast_varz00(BgL_variablez00_bglt
		BgL_oz00_42)
	{
		{	/* Ast/var.sch 296 */
			return (((BgL_variablez00_bglt) COBJECT(BgL_oz00_42))->BgL_idz00);
		}

	}



/* &variable-id */
	obj_t BGl_z62variablezd2idzb0zzast_varz00(obj_t BgL_envz00_1906,
		obj_t BgL_oz00_1907)
	{
		{	/* Ast/var.sch 296 */
			return
				BGl_variablezd2idzd2zzast_varz00(
				((BgL_variablez00_bglt) BgL_oz00_1907));
		}

	}



/* make-global */
	BGL_EXPORTED_DEF BgL_globalz00_bglt BGl_makezd2globalzd2zzast_varz00(obj_t
		BgL_id1252z00_45, obj_t BgL_name1253z00_46,
		BgL_typez00_bglt BgL_type1254z00_47, BgL_valuez00_bglt BgL_value1255z00_48,
		obj_t BgL_access1256z00_49, obj_t BgL_fastzd2alpha1257zd2_50,
		obj_t BgL_removable1258z00_51, long BgL_occurrence1259z00_52,
		long BgL_occurrencew1260z00_53, bool_t BgL_userzf31261zf3_54,
		obj_t BgL_module1262z00_55, obj_t BgL_import1263z00_56,
		bool_t BgL_evaluablezf31264zf3_57, bool_t BgL_evalzf31265zf3_58,
		obj_t BgL_library1266z00_59, obj_t BgL_pragma1267z00_60,
		obj_t BgL_src1268z00_61, obj_t BgL_jvmzd2typezd2name1269z00_62,
		obj_t BgL_init1270z00_63, obj_t BgL_alias1271z00_64)
	{
		{	/* Ast/var.sch 300 */
			{	/* Ast/var.sch 300 */
				BgL_globalz00_bglt BgL_new1184z00_3080;

				{	/* Ast/var.sch 300 */
					BgL_globalz00_bglt BgL_new1183z00_3081;

					BgL_new1183z00_3081 =
						((BgL_globalz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_globalz00_bgl))));
					{	/* Ast/var.sch 300 */
						long BgL_arg1274z00_3082;

						{	/* Ast/var.sch 300 */
							long BgL_res2101z00_3083;

							BgL_res2101z00_3083 = BGL_CLASS_INDEX(BGl_globalz00zzast_varz00);
							BgL_arg1274z00_3082 = BgL_res2101z00_3083;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1183z00_3081), BgL_arg1274z00_3082);
					}
					{	/* Ast/var.sch 300 */
						BgL_objectz00_bglt BgL_tmpz00_3541;

						BgL_tmpz00_3541 = ((BgL_objectz00_bglt) BgL_new1183z00_3081);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3541, BFALSE);
					}
					((BgL_objectz00_bglt) BgL_new1183z00_3081);
					BgL_new1184z00_3080 = BgL_new1183z00_3081;
				}
				((((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt) BgL_new1184z00_3080)))->BgL_idz00) =
					((obj_t) BgL_id1252z00_45), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1184z00_3080)))->BgL_namez00) =
					((obj_t) BgL_name1253z00_46), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1184z00_3080)))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1254z00_47), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1184z00_3080)))->BgL_valuez00) =
					((BgL_valuez00_bglt) BgL_value1255z00_48), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1184z00_3080)))->BgL_accessz00) =
					((obj_t) BgL_access1256z00_49), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1184z00_3080)))->BgL_fastzd2alphazd2) =
					((obj_t) BgL_fastzd2alpha1257zd2_50), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1184z00_3080)))->BgL_removablez00) =
					((obj_t) BgL_removable1258z00_51), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1184z00_3080)))->BgL_occurrencez00) =
					((long) BgL_occurrence1259z00_52), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1184z00_3080)))->BgL_occurrencewz00) =
					((long) BgL_occurrencew1260z00_53), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1184z00_3080)))->BgL_userzf3zf3) =
					((bool_t) BgL_userzf31261zf3_54), BUNSPEC);
				((((BgL_globalz00_bglt) COBJECT(BgL_new1184z00_3080))->BgL_modulez00) =
					((obj_t) BgL_module1262z00_55), BUNSPEC);
				((((BgL_globalz00_bglt) COBJECT(BgL_new1184z00_3080))->BgL_importz00) =
					((obj_t) BgL_import1263z00_56), BUNSPEC);
				((((BgL_globalz00_bglt) COBJECT(BgL_new1184z00_3080))->
						BgL_evaluablezf3zf3) =
					((bool_t) BgL_evaluablezf31264zf3_57), BUNSPEC);
				((((BgL_globalz00_bglt) COBJECT(BgL_new1184z00_3080))->BgL_evalzf3zf3) =
					((bool_t) BgL_evalzf31265zf3_58), BUNSPEC);
				((((BgL_globalz00_bglt) COBJECT(BgL_new1184z00_3080))->BgL_libraryz00) =
					((obj_t) BgL_library1266z00_59), BUNSPEC);
				((((BgL_globalz00_bglt) COBJECT(BgL_new1184z00_3080))->BgL_pragmaz00) =
					((obj_t) BgL_pragma1267z00_60), BUNSPEC);
				((((BgL_globalz00_bglt) COBJECT(BgL_new1184z00_3080))->BgL_srcz00) =
					((obj_t) BgL_src1268z00_61), BUNSPEC);
				((((BgL_globalz00_bglt) COBJECT(BgL_new1184z00_3080))->
						BgL_jvmzd2typezd2namez00) =
					((obj_t) BgL_jvmzd2typezd2name1269z00_62), BUNSPEC);
				((((BgL_globalz00_bglt) COBJECT(BgL_new1184z00_3080))->BgL_initz00) =
					((obj_t) BgL_init1270z00_63), BUNSPEC);
				((((BgL_globalz00_bglt) COBJECT(BgL_new1184z00_3080))->BgL_aliasz00) =
					((obj_t) BgL_alias1271z00_64), BUNSPEC);
				return BgL_new1184z00_3080;
			}
		}

	}



/* &make-global */
	BgL_globalz00_bglt BGl_z62makezd2globalzb0zzast_varz00(obj_t BgL_envz00_1908,
		obj_t BgL_id1252z00_1909, obj_t BgL_name1253z00_1910,
		obj_t BgL_type1254z00_1911, obj_t BgL_value1255z00_1912,
		obj_t BgL_access1256z00_1913, obj_t BgL_fastzd2alpha1257zd2_1914,
		obj_t BgL_removable1258z00_1915, obj_t BgL_occurrence1259z00_1916,
		obj_t BgL_occurrencew1260z00_1917, obj_t BgL_userzf31261zf3_1918,
		obj_t BgL_module1262z00_1919, obj_t BgL_import1263z00_1920,
		obj_t BgL_evaluablezf31264zf3_1921, obj_t BgL_evalzf31265zf3_1922,
		obj_t BgL_library1266z00_1923, obj_t BgL_pragma1267z00_1924,
		obj_t BgL_src1268z00_1925, obj_t BgL_jvmzd2typezd2name1269z00_1926,
		obj_t BgL_init1270z00_1927, obj_t BgL_alias1271z00_1928)
	{
		{	/* Ast/var.sch 300 */
			return
				BGl_makezd2globalzd2zzast_varz00(BgL_id1252z00_1909,
				BgL_name1253z00_1910, ((BgL_typez00_bglt) BgL_type1254z00_1911),
				((BgL_valuez00_bglt) BgL_value1255z00_1912), BgL_access1256z00_1913,
				BgL_fastzd2alpha1257zd2_1914, BgL_removable1258z00_1915,
				(long) CINT(BgL_occurrence1259z00_1916),
				(long) CINT(BgL_occurrencew1260z00_1917),
				CBOOL(BgL_userzf31261zf3_1918), BgL_module1262z00_1919,
				BgL_import1263z00_1920, CBOOL(BgL_evaluablezf31264zf3_1921),
				CBOOL(BgL_evalzf31265zf3_1922), BgL_library1266z00_1923,
				BgL_pragma1267z00_1924, BgL_src1268z00_1925,
				BgL_jvmzd2typezd2name1269z00_1926, BgL_init1270z00_1927,
				BgL_alias1271z00_1928);
		}

	}



/* global? */
	BGL_EXPORTED_DEF bool_t BGl_globalzf3zf3zzast_varz00(obj_t BgL_objz00_65)
	{
		{	/* Ast/var.sch 301 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_65, BGl_globalz00zzast_varz00);
		}

	}



/* &global? */
	obj_t BGl_z62globalzf3z91zzast_varz00(obj_t BgL_envz00_1929,
		obj_t BgL_objz00_1930)
	{
		{	/* Ast/var.sch 301 */
			return BBOOL(BGl_globalzf3zf3zzast_varz00(BgL_objz00_1930));
		}

	}



/* global-nil */
	BGL_EXPORTED_DEF BgL_globalz00_bglt BGl_globalzd2nilzd2zzast_varz00()
	{
		{	/* Ast/var.sch 302 */
			{	/* Ast/var.sch 302 */
				obj_t BgL_classz00_1539;

				BgL_classz00_1539 = BGl_globalz00zzast_varz00;
				{	/* Ast/var.sch 302 */
					obj_t BgL__ortest_1106z00_1540;

					BgL__ortest_1106z00_1540 = BGL_CLASS_NIL(BgL_classz00_1539);
					if (CBOOL(BgL__ortest_1106z00_1540))
						{	/* Ast/var.sch 302 */
							return ((BgL_globalz00_bglt) BgL__ortest_1106z00_1540);
						}
					else
						{	/* Ast/var.sch 302 */
							return
								((BgL_globalz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_1539));
						}
				}
			}
		}

	}



/* &global-nil */
	BgL_globalz00_bglt BGl_z62globalzd2nilzb0zzast_varz00(obj_t BgL_envz00_1931)
	{
		{	/* Ast/var.sch 302 */
			return BGl_globalzd2nilzd2zzast_varz00();
		}

	}



/* global-alias */
	BGL_EXPORTED_DEF obj_t BGl_globalzd2aliaszd2zzast_varz00(BgL_globalz00_bglt
		BgL_oz00_66)
	{
		{	/* Ast/var.sch 303 */
			return (((BgL_globalz00_bglt) COBJECT(BgL_oz00_66))->BgL_aliasz00);
		}

	}



/* &global-alias */
	obj_t BGl_z62globalzd2aliaszb0zzast_varz00(obj_t BgL_envz00_1932,
		obj_t BgL_oz00_1933)
	{
		{	/* Ast/var.sch 303 */
			return
				BGl_globalzd2aliaszd2zzast_varz00(((BgL_globalz00_bglt) BgL_oz00_1933));
		}

	}



/* global-alias-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzd2aliaszd2setz12z12zzast_varz00(BgL_globalz00_bglt BgL_oz00_67,
		obj_t BgL_vz00_68)
	{
		{	/* Ast/var.sch 304 */
			return
				((((BgL_globalz00_bglt) COBJECT(BgL_oz00_67))->BgL_aliasz00) =
				((obj_t) BgL_vz00_68), BUNSPEC);
		}

	}



/* &global-alias-set! */
	obj_t BGl_z62globalzd2aliaszd2setz12z70zzast_varz00(obj_t BgL_envz00_1934,
		obj_t BgL_oz00_1935, obj_t BgL_vz00_1936)
	{
		{	/* Ast/var.sch 304 */
			return
				BGl_globalzd2aliaszd2setz12z12zzast_varz00(
				((BgL_globalz00_bglt) BgL_oz00_1935), BgL_vz00_1936);
		}

	}



/* global-init */
	BGL_EXPORTED_DEF obj_t BGl_globalzd2initzd2zzast_varz00(BgL_globalz00_bglt
		BgL_oz00_69)
	{
		{	/* Ast/var.sch 305 */
			return (((BgL_globalz00_bglt) COBJECT(BgL_oz00_69))->BgL_initz00);
		}

	}



/* &global-init */
	obj_t BGl_z62globalzd2initzb0zzast_varz00(obj_t BgL_envz00_1937,
		obj_t BgL_oz00_1938)
	{
		{	/* Ast/var.sch 305 */
			return
				BGl_globalzd2initzd2zzast_varz00(((BgL_globalz00_bglt) BgL_oz00_1938));
		}

	}



/* global-init-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzd2initzd2setz12z12zzast_varz00(BgL_globalz00_bglt BgL_oz00_70,
		obj_t BgL_vz00_71)
	{
		{	/* Ast/var.sch 306 */
			return
				((((BgL_globalz00_bglt) COBJECT(BgL_oz00_70))->BgL_initz00) =
				((obj_t) BgL_vz00_71), BUNSPEC);
		}

	}



/* &global-init-set! */
	obj_t BGl_z62globalzd2initzd2setz12z70zzast_varz00(obj_t BgL_envz00_1939,
		obj_t BgL_oz00_1940, obj_t BgL_vz00_1941)
	{
		{	/* Ast/var.sch 306 */
			return
				BGl_globalzd2initzd2setz12z12zzast_varz00(
				((BgL_globalz00_bglt) BgL_oz00_1940), BgL_vz00_1941);
		}

	}



/* global-jvm-type-name */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzd2jvmzd2typezd2namezd2zzast_varz00(BgL_globalz00_bglt
		BgL_oz00_72)
	{
		{	/* Ast/var.sch 307 */
			return
				(((BgL_globalz00_bglt) COBJECT(BgL_oz00_72))->BgL_jvmzd2typezd2namez00);
		}

	}



/* &global-jvm-type-name */
	obj_t BGl_z62globalzd2jvmzd2typezd2namezb0zzast_varz00(obj_t BgL_envz00_1942,
		obj_t BgL_oz00_1943)
	{
		{	/* Ast/var.sch 307 */
			return
				BGl_globalzd2jvmzd2typezd2namezd2zzast_varz00(
				((BgL_globalz00_bglt) BgL_oz00_1943));
		}

	}



/* global-jvm-type-name-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzd2jvmzd2typezd2namezd2setz12z12zzast_varz00(BgL_globalz00_bglt
		BgL_oz00_73, obj_t BgL_vz00_74)
	{
		{	/* Ast/var.sch 308 */
			return
				((((BgL_globalz00_bglt) COBJECT(BgL_oz00_73))->
					BgL_jvmzd2typezd2namez00) = ((obj_t) BgL_vz00_74), BUNSPEC);
		}

	}



/* &global-jvm-type-name-set! */
	obj_t BGl_z62globalzd2jvmzd2typezd2namezd2setz12z70zzast_varz00(obj_t
		BgL_envz00_1944, obj_t BgL_oz00_1945, obj_t BgL_vz00_1946)
	{
		{	/* Ast/var.sch 308 */
			return
				BGl_globalzd2jvmzd2typezd2namezd2setz12z12zzast_varz00(
				((BgL_globalz00_bglt) BgL_oz00_1945), BgL_vz00_1946);
		}

	}



/* global-src */
	BGL_EXPORTED_DEF obj_t BGl_globalzd2srczd2zzast_varz00(BgL_globalz00_bglt
		BgL_oz00_75)
	{
		{	/* Ast/var.sch 309 */
			return (((BgL_globalz00_bglt) COBJECT(BgL_oz00_75))->BgL_srcz00);
		}

	}



/* &global-src */
	obj_t BGl_z62globalzd2srczb0zzast_varz00(obj_t BgL_envz00_1947,
		obj_t BgL_oz00_1948)
	{
		{	/* Ast/var.sch 309 */
			return
				BGl_globalzd2srczd2zzast_varz00(((BgL_globalz00_bglt) BgL_oz00_1948));
		}

	}



/* global-src-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzd2srczd2setz12z12zzast_varz00(BgL_globalz00_bglt BgL_oz00_76,
		obj_t BgL_vz00_77)
	{
		{	/* Ast/var.sch 310 */
			return
				((((BgL_globalz00_bglt) COBJECT(BgL_oz00_76))->BgL_srcz00) =
				((obj_t) BgL_vz00_77), BUNSPEC);
		}

	}



/* &global-src-set! */
	obj_t BGl_z62globalzd2srczd2setz12z70zzast_varz00(obj_t BgL_envz00_1949,
		obj_t BgL_oz00_1950, obj_t BgL_vz00_1951)
	{
		{	/* Ast/var.sch 310 */
			return
				BGl_globalzd2srczd2setz12z12zzast_varz00(
				((BgL_globalz00_bglt) BgL_oz00_1950), BgL_vz00_1951);
		}

	}



/* global-pragma */
	BGL_EXPORTED_DEF obj_t BGl_globalzd2pragmazd2zzast_varz00(BgL_globalz00_bglt
		BgL_oz00_78)
	{
		{	/* Ast/var.sch 311 */
			return (((BgL_globalz00_bglt) COBJECT(BgL_oz00_78))->BgL_pragmaz00);
		}

	}



/* &global-pragma */
	obj_t BGl_z62globalzd2pragmazb0zzast_varz00(obj_t BgL_envz00_1952,
		obj_t BgL_oz00_1953)
	{
		{	/* Ast/var.sch 311 */
			return
				BGl_globalzd2pragmazd2zzast_varz00(
				((BgL_globalz00_bglt) BgL_oz00_1953));
		}

	}



/* global-pragma-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzd2pragmazd2setz12z12zzast_varz00(BgL_globalz00_bglt BgL_oz00_79,
		obj_t BgL_vz00_80)
	{
		{	/* Ast/var.sch 312 */
			return
				((((BgL_globalz00_bglt) COBJECT(BgL_oz00_79))->BgL_pragmaz00) =
				((obj_t) BgL_vz00_80), BUNSPEC);
		}

	}



/* &global-pragma-set! */
	obj_t BGl_z62globalzd2pragmazd2setz12z70zzast_varz00(obj_t BgL_envz00_1954,
		obj_t BgL_oz00_1955, obj_t BgL_vz00_1956)
	{
		{	/* Ast/var.sch 312 */
			return
				BGl_globalzd2pragmazd2setz12z12zzast_varz00(
				((BgL_globalz00_bglt) BgL_oz00_1955), BgL_vz00_1956);
		}

	}



/* global-library */
	BGL_EXPORTED_DEF obj_t BGl_globalzd2libraryzd2zzast_varz00(BgL_globalz00_bglt
		BgL_oz00_81)
	{
		{	/* Ast/var.sch 313 */
			return (((BgL_globalz00_bglt) COBJECT(BgL_oz00_81))->BgL_libraryz00);
		}

	}



/* &global-library */
	obj_t BGl_z62globalzd2libraryzb0zzast_varz00(obj_t BgL_envz00_1957,
		obj_t BgL_oz00_1958)
	{
		{	/* Ast/var.sch 313 */
			return
				BGl_globalzd2libraryzd2zzast_varz00(
				((BgL_globalz00_bglt) BgL_oz00_1958));
		}

	}



/* global-library-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzd2libraryzd2setz12z12zzast_varz00(BgL_globalz00_bglt BgL_oz00_82,
		obj_t BgL_vz00_83)
	{
		{	/* Ast/var.sch 314 */
			return
				((((BgL_globalz00_bglt) COBJECT(BgL_oz00_82))->BgL_libraryz00) =
				((obj_t) BgL_vz00_83), BUNSPEC);
		}

	}



/* &global-library-set! */
	obj_t BGl_z62globalzd2libraryzd2setz12z70zzast_varz00(obj_t BgL_envz00_1959,
		obj_t BgL_oz00_1960, obj_t BgL_vz00_1961)
	{
		{	/* Ast/var.sch 314 */
			return
				BGl_globalzd2libraryzd2setz12z12zzast_varz00(
				((BgL_globalz00_bglt) BgL_oz00_1960), BgL_vz00_1961);
		}

	}



/* global-eval? */
	BGL_EXPORTED_DEF bool_t BGl_globalzd2evalzf3z21zzast_varz00(BgL_globalz00_bglt
		BgL_oz00_84)
	{
		{	/* Ast/var.sch 315 */
			return (((BgL_globalz00_bglt) COBJECT(BgL_oz00_84))->BgL_evalzf3zf3);
		}

	}



/* &global-eval? */
	obj_t BGl_z62globalzd2evalzf3z43zzast_varz00(obj_t BgL_envz00_1962,
		obj_t BgL_oz00_1963)
	{
		{	/* Ast/var.sch 315 */
			return
				BBOOL(BGl_globalzd2evalzf3z21zzast_varz00(
					((BgL_globalz00_bglt) BgL_oz00_1963)));
		}

	}



/* global-eval?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzd2evalzf3zd2setz12ze1zzast_varz00(BgL_globalz00_bglt BgL_oz00_85,
		bool_t BgL_vz00_86)
	{
		{	/* Ast/var.sch 316 */
			return
				((((BgL_globalz00_bglt) COBJECT(BgL_oz00_85))->BgL_evalzf3zf3) =
				((bool_t) BgL_vz00_86), BUNSPEC);
		}

	}



/* &global-eval?-set! */
	obj_t BGl_z62globalzd2evalzf3zd2setz12z83zzast_varz00(obj_t BgL_envz00_1964,
		obj_t BgL_oz00_1965, obj_t BgL_vz00_1966)
	{
		{	/* Ast/var.sch 316 */
			return
				BGl_globalzd2evalzf3zd2setz12ze1zzast_varz00(
				((BgL_globalz00_bglt) BgL_oz00_1965), CBOOL(BgL_vz00_1966));
		}

	}



/* global-evaluable? */
	BGL_EXPORTED_DEF bool_t
		BGl_globalzd2evaluablezf3z21zzast_varz00(BgL_globalz00_bglt BgL_oz00_87)
	{
		{	/* Ast/var.sch 317 */
			return (((BgL_globalz00_bglt) COBJECT(BgL_oz00_87))->BgL_evaluablezf3zf3);
		}

	}



/* &global-evaluable? */
	obj_t BGl_z62globalzd2evaluablezf3z43zzast_varz00(obj_t BgL_envz00_1967,
		obj_t BgL_oz00_1968)
	{
		{	/* Ast/var.sch 317 */
			return
				BBOOL(BGl_globalzd2evaluablezf3z21zzast_varz00(
					((BgL_globalz00_bglt) BgL_oz00_1968)));
		}

	}



/* global-evaluable?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzd2evaluablezf3zd2setz12ze1zzast_varz00(BgL_globalz00_bglt
		BgL_oz00_88, bool_t BgL_vz00_89)
	{
		{	/* Ast/var.sch 318 */
			return
				((((BgL_globalz00_bglt) COBJECT(BgL_oz00_88))->BgL_evaluablezf3zf3) =
				((bool_t) BgL_vz00_89), BUNSPEC);
		}

	}



/* &global-evaluable?-set! */
	obj_t BGl_z62globalzd2evaluablezf3zd2setz12z83zzast_varz00(obj_t
		BgL_envz00_1969, obj_t BgL_oz00_1970, obj_t BgL_vz00_1971)
	{
		{	/* Ast/var.sch 318 */
			return
				BGl_globalzd2evaluablezf3zd2setz12ze1zzast_varz00(
				((BgL_globalz00_bglt) BgL_oz00_1970), CBOOL(BgL_vz00_1971));
		}

	}



/* global-import */
	BGL_EXPORTED_DEF obj_t BGl_globalzd2importzd2zzast_varz00(BgL_globalz00_bglt
		BgL_oz00_90)
	{
		{	/* Ast/var.sch 319 */
			return (((BgL_globalz00_bglt) COBJECT(BgL_oz00_90))->BgL_importz00);
		}

	}



/* &global-import */
	obj_t BGl_z62globalzd2importzb0zzast_varz00(obj_t BgL_envz00_1972,
		obj_t BgL_oz00_1973)
	{
		{	/* Ast/var.sch 319 */
			return
				BGl_globalzd2importzd2zzast_varz00(
				((BgL_globalz00_bglt) BgL_oz00_1973));
		}

	}



/* global-import-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzd2importzd2setz12z12zzast_varz00(BgL_globalz00_bglt BgL_oz00_91,
		obj_t BgL_vz00_92)
	{
		{	/* Ast/var.sch 320 */
			return
				((((BgL_globalz00_bglt) COBJECT(BgL_oz00_91))->BgL_importz00) =
				((obj_t) BgL_vz00_92), BUNSPEC);
		}

	}



/* &global-import-set! */
	obj_t BGl_z62globalzd2importzd2setz12z70zzast_varz00(obj_t BgL_envz00_1974,
		obj_t BgL_oz00_1975, obj_t BgL_vz00_1976)
	{
		{	/* Ast/var.sch 320 */
			return
				BGl_globalzd2importzd2setz12z12zzast_varz00(
				((BgL_globalz00_bglt) BgL_oz00_1975), BgL_vz00_1976);
		}

	}



/* global-module */
	BGL_EXPORTED_DEF obj_t BGl_globalzd2modulezd2zzast_varz00(BgL_globalz00_bglt
		BgL_oz00_93)
	{
		{	/* Ast/var.sch 321 */
			return (((BgL_globalz00_bglt) COBJECT(BgL_oz00_93))->BgL_modulez00);
		}

	}



/* &global-module */
	obj_t BGl_z62globalzd2modulezb0zzast_varz00(obj_t BgL_envz00_1977,
		obj_t BgL_oz00_1978)
	{
		{	/* Ast/var.sch 321 */
			return
				BGl_globalzd2modulezd2zzast_varz00(
				((BgL_globalz00_bglt) BgL_oz00_1978));
		}

	}



/* global-module-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzd2modulezd2setz12z12zzast_varz00(BgL_globalz00_bglt BgL_oz00_94,
		obj_t BgL_vz00_95)
	{
		{	/* Ast/var.sch 322 */
			return
				((((BgL_globalz00_bglt) COBJECT(BgL_oz00_94))->BgL_modulez00) =
				((obj_t) BgL_vz00_95), BUNSPEC);
		}

	}



/* &global-module-set! */
	obj_t BGl_z62globalzd2modulezd2setz12z70zzast_varz00(obj_t BgL_envz00_1979,
		obj_t BgL_oz00_1980, obj_t BgL_vz00_1981)
	{
		{	/* Ast/var.sch 322 */
			return
				BGl_globalzd2modulezd2setz12z12zzast_varz00(
				((BgL_globalz00_bglt) BgL_oz00_1980), BgL_vz00_1981);
		}

	}



/* global-user? */
	BGL_EXPORTED_DEF bool_t BGl_globalzd2userzf3z21zzast_varz00(BgL_globalz00_bglt
		BgL_oz00_96)
	{
		{	/* Ast/var.sch 323 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_96)))->BgL_userzf3zf3);
		}

	}



/* &global-user? */
	obj_t BGl_z62globalzd2userzf3z43zzast_varz00(obj_t BgL_envz00_1982,
		obj_t BgL_oz00_1983)
	{
		{	/* Ast/var.sch 323 */
			return
				BBOOL(BGl_globalzd2userzf3z21zzast_varz00(
					((BgL_globalz00_bglt) BgL_oz00_1983)));
		}

	}



/* global-user?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzd2userzf3zd2setz12ze1zzast_varz00(BgL_globalz00_bglt BgL_oz00_97,
		bool_t BgL_vz00_98)
	{
		{	/* Ast/var.sch 324 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_97)))->BgL_userzf3zf3) =
				((bool_t) BgL_vz00_98), BUNSPEC);
		}

	}



/* &global-user?-set! */
	obj_t BGl_z62globalzd2userzf3zd2setz12z83zzast_varz00(obj_t BgL_envz00_1984,
		obj_t BgL_oz00_1985, obj_t BgL_vz00_1986)
	{
		{	/* Ast/var.sch 324 */
			return
				BGl_globalzd2userzf3zd2setz12ze1zzast_varz00(
				((BgL_globalz00_bglt) BgL_oz00_1985), CBOOL(BgL_vz00_1986));
		}

	}



/* global-occurrencew */
	BGL_EXPORTED_DEF long
		BGl_globalzd2occurrencewzd2zzast_varz00(BgL_globalz00_bglt BgL_oz00_99)
	{
		{	/* Ast/var.sch 325 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_99)))->BgL_occurrencewz00);
		}

	}



/* &global-occurrencew */
	obj_t BGl_z62globalzd2occurrencewzb0zzast_varz00(obj_t BgL_envz00_1987,
		obj_t BgL_oz00_1988)
	{
		{	/* Ast/var.sch 325 */
			return
				BINT(BGl_globalzd2occurrencewzd2zzast_varz00(
					((BgL_globalz00_bglt) BgL_oz00_1988)));
		}

	}



/* global-occurrencew-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzd2occurrencewzd2setz12z12zzast_varz00(BgL_globalz00_bglt
		BgL_oz00_100, long BgL_vz00_101)
	{
		{	/* Ast/var.sch 326 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_100)))->BgL_occurrencewz00) =
				((long) BgL_vz00_101), BUNSPEC);
		}

	}



/* &global-occurrencew-set! */
	obj_t BGl_z62globalzd2occurrencewzd2setz12z70zzast_varz00(obj_t
		BgL_envz00_1989, obj_t BgL_oz00_1990, obj_t BgL_vz00_1991)
	{
		{	/* Ast/var.sch 326 */
			return
				BGl_globalzd2occurrencewzd2setz12z12zzast_varz00(
				((BgL_globalz00_bglt) BgL_oz00_1990), (long) CINT(BgL_vz00_1991));
		}

	}



/* global-occurrence */
	BGL_EXPORTED_DEF long
		BGl_globalzd2occurrencezd2zzast_varz00(BgL_globalz00_bglt BgL_oz00_102)
	{
		{	/* Ast/var.sch 327 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_102)))->BgL_occurrencez00);
		}

	}



/* &global-occurrence */
	obj_t BGl_z62globalzd2occurrencezb0zzast_varz00(obj_t BgL_envz00_1992,
		obj_t BgL_oz00_1993)
	{
		{	/* Ast/var.sch 327 */
			return
				BINT(BGl_globalzd2occurrencezd2zzast_varz00(
					((BgL_globalz00_bglt) BgL_oz00_1993)));
		}

	}



/* global-occurrence-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzd2occurrencezd2setz12z12zzast_varz00(BgL_globalz00_bglt
		BgL_oz00_103, long BgL_vz00_104)
	{
		{	/* Ast/var.sch 328 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_103)))->BgL_occurrencez00) =
				((long) BgL_vz00_104), BUNSPEC);
		}

	}



/* &global-occurrence-set! */
	obj_t BGl_z62globalzd2occurrencezd2setz12z70zzast_varz00(obj_t
		BgL_envz00_1994, obj_t BgL_oz00_1995, obj_t BgL_vz00_1996)
	{
		{	/* Ast/var.sch 328 */
			return
				BGl_globalzd2occurrencezd2setz12z12zzast_varz00(
				((BgL_globalz00_bglt) BgL_oz00_1995), (long) CINT(BgL_vz00_1996));
		}

	}



/* global-removable */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzd2removablezd2zzast_varz00(BgL_globalz00_bglt BgL_oz00_105)
	{
		{	/* Ast/var.sch 329 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_105)))->BgL_removablez00);
		}

	}



/* &global-removable */
	obj_t BGl_z62globalzd2removablezb0zzast_varz00(obj_t BgL_envz00_1997,
		obj_t BgL_oz00_1998)
	{
		{	/* Ast/var.sch 329 */
			return
				BGl_globalzd2removablezd2zzast_varz00(
				((BgL_globalz00_bglt) BgL_oz00_1998));
		}

	}



/* global-removable-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzd2removablezd2setz12z12zzast_varz00(BgL_globalz00_bglt
		BgL_oz00_106, obj_t BgL_vz00_107)
	{
		{	/* Ast/var.sch 330 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_106)))->BgL_removablez00) =
				((obj_t) BgL_vz00_107), BUNSPEC);
		}

	}



/* &global-removable-set! */
	obj_t BGl_z62globalzd2removablezd2setz12z70zzast_varz00(obj_t BgL_envz00_1999,
		obj_t BgL_oz00_2000, obj_t BgL_vz00_2001)
	{
		{	/* Ast/var.sch 330 */
			return
				BGl_globalzd2removablezd2setz12z12zzast_varz00(
				((BgL_globalz00_bglt) BgL_oz00_2000), BgL_vz00_2001);
		}

	}



/* global-fast-alpha */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzd2fastzd2alphaz00zzast_varz00(BgL_globalz00_bglt BgL_oz00_108)
	{
		{	/* Ast/var.sch 331 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_108)))->BgL_fastzd2alphazd2);
		}

	}



/* &global-fast-alpha */
	obj_t BGl_z62globalzd2fastzd2alphaz62zzast_varz00(obj_t BgL_envz00_2002,
		obj_t BgL_oz00_2003)
	{
		{	/* Ast/var.sch 331 */
			return
				BGl_globalzd2fastzd2alphaz00zzast_varz00(
				((BgL_globalz00_bglt) BgL_oz00_2003));
		}

	}



/* global-fast-alpha-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzd2fastzd2alphazd2setz12zc0zzast_varz00(BgL_globalz00_bglt
		BgL_oz00_109, obj_t BgL_vz00_110)
	{
		{	/* Ast/var.sch 332 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_109)))->BgL_fastzd2alphazd2) =
				((obj_t) BgL_vz00_110), BUNSPEC);
		}

	}



/* &global-fast-alpha-set! */
	obj_t BGl_z62globalzd2fastzd2alphazd2setz12za2zzast_varz00(obj_t
		BgL_envz00_2004, obj_t BgL_oz00_2005, obj_t BgL_vz00_2006)
	{
		{	/* Ast/var.sch 332 */
			return
				BGl_globalzd2fastzd2alphazd2setz12zc0zzast_varz00(
				((BgL_globalz00_bglt) BgL_oz00_2005), BgL_vz00_2006);
		}

	}



/* global-access */
	BGL_EXPORTED_DEF obj_t BGl_globalzd2accesszd2zzast_varz00(BgL_globalz00_bglt
		BgL_oz00_111)
	{
		{	/* Ast/var.sch 333 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_111)))->BgL_accessz00);
		}

	}



/* &global-access */
	obj_t BGl_z62globalzd2accesszb0zzast_varz00(obj_t BgL_envz00_2007,
		obj_t BgL_oz00_2008)
	{
		{	/* Ast/var.sch 333 */
			return
				BGl_globalzd2accesszd2zzast_varz00(
				((BgL_globalz00_bglt) BgL_oz00_2008));
		}

	}



/* global-access-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzd2accesszd2setz12z12zzast_varz00(BgL_globalz00_bglt BgL_oz00_112,
		obj_t BgL_vz00_113)
	{
		{	/* Ast/var.sch 334 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_112)))->BgL_accessz00) =
				((obj_t) BgL_vz00_113), BUNSPEC);
		}

	}



/* &global-access-set! */
	obj_t BGl_z62globalzd2accesszd2setz12z70zzast_varz00(obj_t BgL_envz00_2009,
		obj_t BgL_oz00_2010, obj_t BgL_vz00_2011)
	{
		{	/* Ast/var.sch 334 */
			return
				BGl_globalzd2accesszd2setz12z12zzast_varz00(
				((BgL_globalz00_bglt) BgL_oz00_2010), BgL_vz00_2011);
		}

	}



/* global-value */
	BGL_EXPORTED_DEF BgL_valuez00_bglt
		BGl_globalzd2valuezd2zzast_varz00(BgL_globalz00_bglt BgL_oz00_114)
	{
		{	/* Ast/var.sch 335 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_114)))->BgL_valuez00);
		}

	}



/* &global-value */
	BgL_valuez00_bglt BGl_z62globalzd2valuezb0zzast_varz00(obj_t BgL_envz00_2012,
		obj_t BgL_oz00_2013)
	{
		{	/* Ast/var.sch 335 */
			return
				BGl_globalzd2valuezd2zzast_varz00(((BgL_globalz00_bglt) BgL_oz00_2013));
		}

	}



/* global-value-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzd2valuezd2setz12z12zzast_varz00(BgL_globalz00_bglt BgL_oz00_115,
		BgL_valuez00_bglt BgL_vz00_116)
	{
		{	/* Ast/var.sch 336 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_115)))->BgL_valuez00) =
				((BgL_valuez00_bglt) BgL_vz00_116), BUNSPEC);
		}

	}



/* &global-value-set! */
	obj_t BGl_z62globalzd2valuezd2setz12z70zzast_varz00(obj_t BgL_envz00_2014,
		obj_t BgL_oz00_2015, obj_t BgL_vz00_2016)
	{
		{	/* Ast/var.sch 336 */
			return
				BGl_globalzd2valuezd2setz12z12zzast_varz00(
				((BgL_globalz00_bglt) BgL_oz00_2015),
				((BgL_valuez00_bglt) BgL_vz00_2016));
		}

	}



/* global-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_globalzd2typezd2zzast_varz00(BgL_globalz00_bglt BgL_oz00_117)
	{
		{	/* Ast/var.sch 337 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_117)))->BgL_typez00);
		}

	}



/* &global-type */
	BgL_typez00_bglt BGl_z62globalzd2typezb0zzast_varz00(obj_t BgL_envz00_2017,
		obj_t BgL_oz00_2018)
	{
		{	/* Ast/var.sch 337 */
			return
				BGl_globalzd2typezd2zzast_varz00(((BgL_globalz00_bglt) BgL_oz00_2018));
		}

	}



/* global-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzd2typezd2setz12z12zzast_varz00(BgL_globalz00_bglt BgL_oz00_118,
		BgL_typez00_bglt BgL_vz00_119)
	{
		{	/* Ast/var.sch 338 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_118)))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_119), BUNSPEC);
		}

	}



/* &global-type-set! */
	obj_t BGl_z62globalzd2typezd2setz12z70zzast_varz00(obj_t BgL_envz00_2019,
		obj_t BgL_oz00_2020, obj_t BgL_vz00_2021)
	{
		{	/* Ast/var.sch 338 */
			return
				BGl_globalzd2typezd2setz12z12zzast_varz00(
				((BgL_globalz00_bglt) BgL_oz00_2020),
				((BgL_typez00_bglt) BgL_vz00_2021));
		}

	}



/* global-name */
	BGL_EXPORTED_DEF obj_t BGl_globalzd2namezd2zzast_varz00(BgL_globalz00_bglt
		BgL_oz00_120)
	{
		{	/* Ast/var.sch 339 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_120)))->BgL_namez00);
		}

	}



/* &global-name */
	obj_t BGl_z62globalzd2namezb0zzast_varz00(obj_t BgL_envz00_2022,
		obj_t BgL_oz00_2023)
	{
		{	/* Ast/var.sch 339 */
			return
				BGl_globalzd2namezd2zzast_varz00(((BgL_globalz00_bglt) BgL_oz00_2023));
		}

	}



/* global-name-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzd2namezd2setz12z12zzast_varz00(BgL_globalz00_bglt BgL_oz00_121,
		obj_t BgL_vz00_122)
	{
		{	/* Ast/var.sch 340 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_121)))->BgL_namez00) =
				((obj_t) BgL_vz00_122), BUNSPEC);
		}

	}



/* &global-name-set! */
	obj_t BGl_z62globalzd2namezd2setz12z70zzast_varz00(obj_t BgL_envz00_2024,
		obj_t BgL_oz00_2025, obj_t BgL_vz00_2026)
	{
		{	/* Ast/var.sch 340 */
			return
				BGl_globalzd2namezd2setz12z12zzast_varz00(
				((BgL_globalz00_bglt) BgL_oz00_2025), BgL_vz00_2026);
		}

	}



/* global-id */
	BGL_EXPORTED_DEF obj_t BGl_globalzd2idzd2zzast_varz00(BgL_globalz00_bglt
		BgL_oz00_123)
	{
		{	/* Ast/var.sch 341 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_123)))->BgL_idz00);
		}

	}



/* &global-id */
	obj_t BGl_z62globalzd2idzb0zzast_varz00(obj_t BgL_envz00_2027,
		obj_t BgL_oz00_2028)
	{
		{	/* Ast/var.sch 341 */
			return
				BGl_globalzd2idzd2zzast_varz00(((BgL_globalz00_bglt) BgL_oz00_2028));
		}

	}



/* make-local */
	BGL_EXPORTED_DEF BgL_localz00_bglt BGl_makezd2localzd2zzast_varz00(obj_t
		BgL_id1240z00_126, obj_t BgL_name1241z00_127,
		BgL_typez00_bglt BgL_type1242z00_128,
		BgL_valuez00_bglt BgL_value1243z00_129, obj_t BgL_access1244z00_130,
		obj_t BgL_fastzd2alpha1245zd2_131, obj_t BgL_removable1246z00_132,
		long BgL_occurrence1247z00_133, long BgL_occurrencew1248z00_134,
		bool_t BgL_userzf31249zf3_135, long BgL_key1250z00_136)
	{
		{	/* Ast/var.sch 345 */
			{	/* Ast/var.sch 345 */
				BgL_localz00_bglt BgL_new1186z00_3084;

				{	/* Ast/var.sch 345 */
					BgL_localz00_bglt BgL_new1185z00_3085;

					BgL_new1185z00_3085 =
						((BgL_localz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_localz00_bgl))));
					{	/* Ast/var.sch 345 */
						long BgL_arg1275z00_3086;

						{	/* Ast/var.sch 345 */
							long BgL_res2102z00_3087;

							BgL_res2102z00_3087 = BGL_CLASS_INDEX(BGl_localz00zzast_varz00);
							BgL_arg1275z00_3086 = BgL_res2102z00_3087;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1185z00_3085), BgL_arg1275z00_3086);
					}
					{	/* Ast/var.sch 345 */
						BgL_objectz00_bglt BgL_tmpz00_3745;

						BgL_tmpz00_3745 = ((BgL_objectz00_bglt) BgL_new1185z00_3085);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3745, BFALSE);
					}
					((BgL_objectz00_bglt) BgL_new1185z00_3085);
					BgL_new1186z00_3084 = BgL_new1185z00_3085;
				}
				((((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt) BgL_new1186z00_3084)))->BgL_idz00) =
					((obj_t) BgL_id1240z00_126), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1186z00_3084)))->BgL_namez00) =
					((obj_t) BgL_name1241z00_127), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1186z00_3084)))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1242z00_128), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1186z00_3084)))->BgL_valuez00) =
					((BgL_valuez00_bglt) BgL_value1243z00_129), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1186z00_3084)))->BgL_accessz00) =
					((obj_t) BgL_access1244z00_130), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1186z00_3084)))->BgL_fastzd2alphazd2) =
					((obj_t) BgL_fastzd2alpha1245zd2_131), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1186z00_3084)))->BgL_removablez00) =
					((obj_t) BgL_removable1246z00_132), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1186z00_3084)))->BgL_occurrencez00) =
					((long) BgL_occurrence1247z00_133), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1186z00_3084)))->BgL_occurrencewz00) =
					((long) BgL_occurrencew1248z00_134), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1186z00_3084)))->BgL_userzf3zf3) =
					((bool_t) BgL_userzf31249zf3_135), BUNSPEC);
				((((BgL_localz00_bglt) COBJECT(BgL_new1186z00_3084))->BgL_keyz00) =
					((long) BgL_key1250z00_136), BUNSPEC);
				return BgL_new1186z00_3084;
			}
		}

	}



/* &make-local */
	BgL_localz00_bglt BGl_z62makezd2localzb0zzast_varz00(obj_t BgL_envz00_2029,
		obj_t BgL_id1240z00_2030, obj_t BgL_name1241z00_2031,
		obj_t BgL_type1242z00_2032, obj_t BgL_value1243z00_2033,
		obj_t BgL_access1244z00_2034, obj_t BgL_fastzd2alpha1245zd2_2035,
		obj_t BgL_removable1246z00_2036, obj_t BgL_occurrence1247z00_2037,
		obj_t BgL_occurrencew1248z00_2038, obj_t BgL_userzf31249zf3_2039,
		obj_t BgL_key1250z00_2040)
	{
		{	/* Ast/var.sch 345 */
			return
				BGl_makezd2localzd2zzast_varz00(BgL_id1240z00_2030,
				BgL_name1241z00_2031, ((BgL_typez00_bglt) BgL_type1242z00_2032),
				((BgL_valuez00_bglt) BgL_value1243z00_2033), BgL_access1244z00_2034,
				BgL_fastzd2alpha1245zd2_2035, BgL_removable1246z00_2036,
				(long) CINT(BgL_occurrence1247z00_2037),
				(long) CINT(BgL_occurrencew1248z00_2038),
				CBOOL(BgL_userzf31249zf3_2039), (long) CINT(BgL_key1250z00_2040));
		}

	}



/* local? */
	BGL_EXPORTED_DEF bool_t BGl_localzf3zf3zzast_varz00(obj_t BgL_objz00_137)
	{
		{	/* Ast/var.sch 346 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_137, BGl_localz00zzast_varz00);
		}

	}



/* &local? */
	obj_t BGl_z62localzf3z91zzast_varz00(obj_t BgL_envz00_2041,
		obj_t BgL_objz00_2042)
	{
		{	/* Ast/var.sch 346 */
			return BBOOL(BGl_localzf3zf3zzast_varz00(BgL_objz00_2042));
		}

	}



/* local-nil */
	BGL_EXPORTED_DEF BgL_localz00_bglt BGl_localzd2nilzd2zzast_varz00()
	{
		{	/* Ast/var.sch 347 */
			{	/* Ast/var.sch 347 */
				obj_t BgL_classz00_1549;

				BgL_classz00_1549 = BGl_localz00zzast_varz00;
				{	/* Ast/var.sch 347 */
					obj_t BgL__ortest_1106z00_1550;

					BgL__ortest_1106z00_1550 = BGL_CLASS_NIL(BgL_classz00_1549);
					if (CBOOL(BgL__ortest_1106z00_1550))
						{	/* Ast/var.sch 347 */
							return ((BgL_localz00_bglt) BgL__ortest_1106z00_1550);
						}
					else
						{	/* Ast/var.sch 347 */
							return
								((BgL_localz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_1549));
						}
				}
			}
		}

	}



/* &local-nil */
	BgL_localz00_bglt BGl_z62localzd2nilzb0zzast_varz00(obj_t BgL_envz00_2043)
	{
		{	/* Ast/var.sch 347 */
			return BGl_localzd2nilzd2zzast_varz00();
		}

	}



/* local-key */
	BGL_EXPORTED_DEF long BGl_localzd2keyzd2zzast_varz00(BgL_localz00_bglt
		BgL_oz00_138)
	{
		{	/* Ast/var.sch 348 */
			return (((BgL_localz00_bglt) COBJECT(BgL_oz00_138))->BgL_keyz00);
		}

	}



/* &local-key */
	obj_t BGl_z62localzd2keyzb0zzast_varz00(obj_t BgL_envz00_2044,
		obj_t BgL_oz00_2045)
	{
		{	/* Ast/var.sch 348 */
			return
				BINT(BGl_localzd2keyzd2zzast_varz00(
					((BgL_localz00_bglt) BgL_oz00_2045)));
		}

	}



/* local-user? */
	BGL_EXPORTED_DEF bool_t BGl_localzd2userzf3z21zzast_varz00(BgL_localz00_bglt
		BgL_oz00_141)
	{
		{	/* Ast/var.sch 350 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_141)))->BgL_userzf3zf3);
		}

	}



/* &local-user? */
	obj_t BGl_z62localzd2userzf3z43zzast_varz00(obj_t BgL_envz00_2046,
		obj_t BgL_oz00_2047)
	{
		{	/* Ast/var.sch 350 */
			return
				BBOOL(BGl_localzd2userzf3z21zzast_varz00(
					((BgL_localz00_bglt) BgL_oz00_2047)));
		}

	}



/* local-user?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_localzd2userzf3zd2setz12ze1zzast_varz00(BgL_localz00_bglt BgL_oz00_142,
		bool_t BgL_vz00_143)
	{
		{	/* Ast/var.sch 351 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_142)))->BgL_userzf3zf3) =
				((bool_t) BgL_vz00_143), BUNSPEC);
		}

	}



/* &local-user?-set! */
	obj_t BGl_z62localzd2userzf3zd2setz12z83zzast_varz00(obj_t BgL_envz00_2048,
		obj_t BgL_oz00_2049, obj_t BgL_vz00_2050)
	{
		{	/* Ast/var.sch 351 */
			return
				BGl_localzd2userzf3zd2setz12ze1zzast_varz00(
				((BgL_localz00_bglt) BgL_oz00_2049), CBOOL(BgL_vz00_2050));
		}

	}



/* local-occurrencew */
	BGL_EXPORTED_DEF long BGl_localzd2occurrencewzd2zzast_varz00(BgL_localz00_bglt
		BgL_oz00_144)
	{
		{	/* Ast/var.sch 352 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_144)))->BgL_occurrencewz00);
		}

	}



/* &local-occurrencew */
	obj_t BGl_z62localzd2occurrencewzb0zzast_varz00(obj_t BgL_envz00_2051,
		obj_t BgL_oz00_2052)
	{
		{	/* Ast/var.sch 352 */
			return
				BINT(BGl_localzd2occurrencewzd2zzast_varz00(
					((BgL_localz00_bglt) BgL_oz00_2052)));
		}

	}



/* local-occurrencew-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_localzd2occurrencewzd2setz12z12zzast_varz00(BgL_localz00_bglt
		BgL_oz00_145, long BgL_vz00_146)
	{
		{	/* Ast/var.sch 353 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_145)))->BgL_occurrencewz00) =
				((long) BgL_vz00_146), BUNSPEC);
		}

	}



/* &local-occurrencew-set! */
	obj_t BGl_z62localzd2occurrencewzd2setz12z70zzast_varz00(obj_t
		BgL_envz00_2053, obj_t BgL_oz00_2054, obj_t BgL_vz00_2055)
	{
		{	/* Ast/var.sch 353 */
			return
				BGl_localzd2occurrencewzd2setz12z12zzast_varz00(
				((BgL_localz00_bglt) BgL_oz00_2054), (long) CINT(BgL_vz00_2055));
		}

	}



/* local-occurrence */
	BGL_EXPORTED_DEF long BGl_localzd2occurrencezd2zzast_varz00(BgL_localz00_bglt
		BgL_oz00_147)
	{
		{	/* Ast/var.sch 354 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_147)))->BgL_occurrencez00);
		}

	}



/* &local-occurrence */
	obj_t BGl_z62localzd2occurrencezb0zzast_varz00(obj_t BgL_envz00_2056,
		obj_t BgL_oz00_2057)
	{
		{	/* Ast/var.sch 354 */
			return
				BINT(BGl_localzd2occurrencezd2zzast_varz00(
					((BgL_localz00_bglt) BgL_oz00_2057)));
		}

	}



/* local-occurrence-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_localzd2occurrencezd2setz12z12zzast_varz00(BgL_localz00_bglt
		BgL_oz00_148, long BgL_vz00_149)
	{
		{	/* Ast/var.sch 355 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_148)))->BgL_occurrencez00) =
				((long) BgL_vz00_149), BUNSPEC);
		}

	}



/* &local-occurrence-set! */
	obj_t BGl_z62localzd2occurrencezd2setz12z70zzast_varz00(obj_t BgL_envz00_2058,
		obj_t BgL_oz00_2059, obj_t BgL_vz00_2060)
	{
		{	/* Ast/var.sch 355 */
			return
				BGl_localzd2occurrencezd2setz12z12zzast_varz00(
				((BgL_localz00_bglt) BgL_oz00_2059), (long) CINT(BgL_vz00_2060));
		}

	}



/* local-removable */
	BGL_EXPORTED_DEF obj_t BGl_localzd2removablezd2zzast_varz00(BgL_localz00_bglt
		BgL_oz00_150)
	{
		{	/* Ast/var.sch 356 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_150)))->BgL_removablez00);
		}

	}



/* &local-removable */
	obj_t BGl_z62localzd2removablezb0zzast_varz00(obj_t BgL_envz00_2061,
		obj_t BgL_oz00_2062)
	{
		{	/* Ast/var.sch 356 */
			return
				BGl_localzd2removablezd2zzast_varz00(
				((BgL_localz00_bglt) BgL_oz00_2062));
		}

	}



/* local-removable-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_localzd2removablezd2setz12z12zzast_varz00(BgL_localz00_bglt
		BgL_oz00_151, obj_t BgL_vz00_152)
	{
		{	/* Ast/var.sch 357 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_151)))->BgL_removablez00) =
				((obj_t) BgL_vz00_152), BUNSPEC);
		}

	}



/* &local-removable-set! */
	obj_t BGl_z62localzd2removablezd2setz12z70zzast_varz00(obj_t BgL_envz00_2063,
		obj_t BgL_oz00_2064, obj_t BgL_vz00_2065)
	{
		{	/* Ast/var.sch 357 */
			return
				BGl_localzd2removablezd2setz12z12zzast_varz00(
				((BgL_localz00_bglt) BgL_oz00_2064), BgL_vz00_2065);
		}

	}



/* local-fast-alpha */
	BGL_EXPORTED_DEF obj_t
		BGl_localzd2fastzd2alphaz00zzast_varz00(BgL_localz00_bglt BgL_oz00_153)
	{
		{	/* Ast/var.sch 358 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_153)))->BgL_fastzd2alphazd2);
		}

	}



/* &local-fast-alpha */
	obj_t BGl_z62localzd2fastzd2alphaz62zzast_varz00(obj_t BgL_envz00_2066,
		obj_t BgL_oz00_2067)
	{
		{	/* Ast/var.sch 358 */
			return
				BGl_localzd2fastzd2alphaz00zzast_varz00(
				((BgL_localz00_bglt) BgL_oz00_2067));
		}

	}



/* local-fast-alpha-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_localzd2fastzd2alphazd2setz12zc0zzast_varz00(BgL_localz00_bglt
		BgL_oz00_154, obj_t BgL_vz00_155)
	{
		{	/* Ast/var.sch 359 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_154)))->BgL_fastzd2alphazd2) =
				((obj_t) BgL_vz00_155), BUNSPEC);
		}

	}



/* &local-fast-alpha-set! */
	obj_t BGl_z62localzd2fastzd2alphazd2setz12za2zzast_varz00(obj_t
		BgL_envz00_2068, obj_t BgL_oz00_2069, obj_t BgL_vz00_2070)
	{
		{	/* Ast/var.sch 359 */
			return
				BGl_localzd2fastzd2alphazd2setz12zc0zzast_varz00(
				((BgL_localz00_bglt) BgL_oz00_2069), BgL_vz00_2070);
		}

	}



/* local-access */
	BGL_EXPORTED_DEF obj_t BGl_localzd2accesszd2zzast_varz00(BgL_localz00_bglt
		BgL_oz00_156)
	{
		{	/* Ast/var.sch 360 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_156)))->BgL_accessz00);
		}

	}



/* &local-access */
	obj_t BGl_z62localzd2accesszb0zzast_varz00(obj_t BgL_envz00_2071,
		obj_t BgL_oz00_2072)
	{
		{	/* Ast/var.sch 360 */
			return
				BGl_localzd2accesszd2zzast_varz00(((BgL_localz00_bglt) BgL_oz00_2072));
		}

	}



/* local-access-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_localzd2accesszd2setz12z12zzast_varz00(BgL_localz00_bglt BgL_oz00_157,
		obj_t BgL_vz00_158)
	{
		{	/* Ast/var.sch 361 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_157)))->BgL_accessz00) =
				((obj_t) BgL_vz00_158), BUNSPEC);
		}

	}



/* &local-access-set! */
	obj_t BGl_z62localzd2accesszd2setz12z70zzast_varz00(obj_t BgL_envz00_2073,
		obj_t BgL_oz00_2074, obj_t BgL_vz00_2075)
	{
		{	/* Ast/var.sch 361 */
			return
				BGl_localzd2accesszd2setz12z12zzast_varz00(
				((BgL_localz00_bglt) BgL_oz00_2074), BgL_vz00_2075);
		}

	}



/* local-value */
	BGL_EXPORTED_DEF BgL_valuez00_bglt
		BGl_localzd2valuezd2zzast_varz00(BgL_localz00_bglt BgL_oz00_159)
	{
		{	/* Ast/var.sch 362 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_159)))->BgL_valuez00);
		}

	}



/* &local-value */
	BgL_valuez00_bglt BGl_z62localzd2valuezb0zzast_varz00(obj_t BgL_envz00_2076,
		obj_t BgL_oz00_2077)
	{
		{	/* Ast/var.sch 362 */
			return
				BGl_localzd2valuezd2zzast_varz00(((BgL_localz00_bglt) BgL_oz00_2077));
		}

	}



/* local-value-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_localzd2valuezd2setz12z12zzast_varz00(BgL_localz00_bglt BgL_oz00_160,
		BgL_valuez00_bglt BgL_vz00_161)
	{
		{	/* Ast/var.sch 363 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_160)))->BgL_valuez00) =
				((BgL_valuez00_bglt) BgL_vz00_161), BUNSPEC);
		}

	}



/* &local-value-set! */
	obj_t BGl_z62localzd2valuezd2setz12z70zzast_varz00(obj_t BgL_envz00_2078,
		obj_t BgL_oz00_2079, obj_t BgL_vz00_2080)
	{
		{	/* Ast/var.sch 363 */
			return
				BGl_localzd2valuezd2setz12z12zzast_varz00(
				((BgL_localz00_bglt) BgL_oz00_2079),
				((BgL_valuez00_bglt) BgL_vz00_2080));
		}

	}



/* local-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_localzd2typezd2zzast_varz00(BgL_localz00_bglt BgL_oz00_162)
	{
		{	/* Ast/var.sch 364 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_162)))->BgL_typez00);
		}

	}



/* &local-type */
	BgL_typez00_bglt BGl_z62localzd2typezb0zzast_varz00(obj_t BgL_envz00_2081,
		obj_t BgL_oz00_2082)
	{
		{	/* Ast/var.sch 364 */
			return
				BGl_localzd2typezd2zzast_varz00(((BgL_localz00_bglt) BgL_oz00_2082));
		}

	}



/* local-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_localzd2typezd2setz12z12zzast_varz00(BgL_localz00_bglt BgL_oz00_163,
		BgL_typez00_bglt BgL_vz00_164)
	{
		{	/* Ast/var.sch 365 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_163)))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_164), BUNSPEC);
		}

	}



/* &local-type-set! */
	obj_t BGl_z62localzd2typezd2setz12z70zzast_varz00(obj_t BgL_envz00_2083,
		obj_t BgL_oz00_2084, obj_t BgL_vz00_2085)
	{
		{	/* Ast/var.sch 365 */
			return
				BGl_localzd2typezd2setz12z12zzast_varz00(
				((BgL_localz00_bglt) BgL_oz00_2084),
				((BgL_typez00_bglt) BgL_vz00_2085));
		}

	}



/* local-name */
	BGL_EXPORTED_DEF obj_t BGl_localzd2namezd2zzast_varz00(BgL_localz00_bglt
		BgL_oz00_165)
	{
		{	/* Ast/var.sch 366 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_165)))->BgL_namez00);
		}

	}



/* &local-name */
	obj_t BGl_z62localzd2namezb0zzast_varz00(obj_t BgL_envz00_2086,
		obj_t BgL_oz00_2087)
	{
		{	/* Ast/var.sch 366 */
			return
				BGl_localzd2namezd2zzast_varz00(((BgL_localz00_bglt) BgL_oz00_2087));
		}

	}



/* local-name-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_localzd2namezd2setz12z12zzast_varz00(BgL_localz00_bglt BgL_oz00_166,
		obj_t BgL_vz00_167)
	{
		{	/* Ast/var.sch 367 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_166)))->BgL_namez00) =
				((obj_t) BgL_vz00_167), BUNSPEC);
		}

	}



/* &local-name-set! */
	obj_t BGl_z62localzd2namezd2setz12z70zzast_varz00(obj_t BgL_envz00_2088,
		obj_t BgL_oz00_2089, obj_t BgL_vz00_2090)
	{
		{	/* Ast/var.sch 367 */
			return
				BGl_localzd2namezd2setz12z12zzast_varz00(
				((BgL_localz00_bglt) BgL_oz00_2089), BgL_vz00_2090);
		}

	}



/* local-id */
	BGL_EXPORTED_DEF obj_t BGl_localzd2idzd2zzast_varz00(BgL_localz00_bglt
		BgL_oz00_168)
	{
		{	/* Ast/var.sch 368 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_168)))->BgL_idz00);
		}

	}



/* &local-id */
	obj_t BGl_z62localzd2idzb0zzast_varz00(obj_t BgL_envz00_2091,
		obj_t BgL_oz00_2092)
	{
		{	/* Ast/var.sch 368 */
			return BGl_localzd2idzd2zzast_varz00(((BgL_localz00_bglt) BgL_oz00_2092));
		}

	}



/* make-fun */
	BGL_EXPORTED_DEF BgL_funz00_bglt BGl_makezd2funzd2zzast_varz00(long
		BgL_arity1230z00_171, obj_t BgL_sidezd2effect1231zd2_172,
		obj_t BgL_predicatezd2of1232zd2_173, obj_t BgL_stackzd2allocator1233zd2_174,
		bool_t BgL_topzf31234zf3_175, obj_t BgL_thezd2closure1235zd2_176,
		obj_t BgL_effect1236z00_177, obj_t BgL_failsafe1237z00_178,
		obj_t BgL_argszd2noescape1238zd2_179)
	{
		{	/* Ast/var.sch 372 */
			{	/* Ast/var.sch 372 */
				BgL_funz00_bglt BgL_new1188z00_3088;

				{	/* Ast/var.sch 372 */
					BgL_funz00_bglt BgL_new1187z00_3089;

					BgL_new1187z00_3089 =
						((BgL_funz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_funz00_bgl))));
					{	/* Ast/var.sch 372 */
						long BgL_arg1276z00_3090;

						{	/* Ast/var.sch 372 */
							long BgL_res2103z00_3091;

							BgL_res2103z00_3091 = BGL_CLASS_INDEX(BGl_funz00zzast_varz00);
							BgL_arg1276z00_3090 = BgL_res2103z00_3091;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1187z00_3089), BgL_arg1276z00_3090);
					}
					BgL_new1188z00_3088 = BgL_new1187z00_3089;
				}
				((((BgL_funz00_bglt) COBJECT(BgL_new1188z00_3088))->BgL_arityz00) =
					((long) BgL_arity1230z00_171), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(BgL_new1188z00_3088))->
						BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1231zd2_172), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(BgL_new1188z00_3088))->
						BgL_predicatezd2ofzd2) =
					((obj_t) BgL_predicatezd2of1232zd2_173), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(BgL_new1188z00_3088))->
						BgL_stackzd2allocatorzd2) =
					((obj_t) BgL_stackzd2allocator1233zd2_174), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(BgL_new1188z00_3088))->BgL_topzf3zf3) =
					((bool_t) BgL_topzf31234zf3_175), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(BgL_new1188z00_3088))->
						BgL_thezd2closurezd2) =
					((obj_t) BgL_thezd2closure1235zd2_176), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(BgL_new1188z00_3088))->BgL_effectz00) =
					((obj_t) BgL_effect1236z00_177), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(BgL_new1188z00_3088))->BgL_failsafez00) =
					((obj_t) BgL_failsafe1237z00_178), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(BgL_new1188z00_3088))->
						BgL_argszd2noescapezd2) =
					((obj_t) BgL_argszd2noescape1238zd2_179), BUNSPEC);
				return BgL_new1188z00_3088;
			}
		}

	}



/* &make-fun */
	BgL_funz00_bglt BGl_z62makezd2funzb0zzast_varz00(obj_t BgL_envz00_2093,
		obj_t BgL_arity1230z00_2094, obj_t BgL_sidezd2effect1231zd2_2095,
		obj_t BgL_predicatezd2of1232zd2_2096,
		obj_t BgL_stackzd2allocator1233zd2_2097, obj_t BgL_topzf31234zf3_2098,
		obj_t BgL_thezd2closure1235zd2_2099, obj_t BgL_effect1236z00_2100,
		obj_t BgL_failsafe1237z00_2101, obj_t BgL_argszd2noescape1238zd2_2102)
	{
		{	/* Ast/var.sch 372 */
			return
				BGl_makezd2funzd2zzast_varz00(
				(long) CINT(BgL_arity1230z00_2094), BgL_sidezd2effect1231zd2_2095,
				BgL_predicatezd2of1232zd2_2096, BgL_stackzd2allocator1233zd2_2097,
				CBOOL(BgL_topzf31234zf3_2098), BgL_thezd2closure1235zd2_2099,
				BgL_effect1236z00_2100, BgL_failsafe1237z00_2101,
				BgL_argszd2noescape1238zd2_2102);
		}

	}



/* fun? */
	BGL_EXPORTED_DEF bool_t BGl_funzf3zf3zzast_varz00(obj_t BgL_objz00_180)
	{
		{	/* Ast/var.sch 373 */
			return BGl_isazf3zf3zz__objectz00(BgL_objz00_180, BGl_funz00zzast_varz00);
		}

	}



/* &fun? */
	obj_t BGl_z62funzf3z91zzast_varz00(obj_t BgL_envz00_2103,
		obj_t BgL_objz00_2104)
	{
		{	/* Ast/var.sch 373 */
			return BBOOL(BGl_funzf3zf3zzast_varz00(BgL_objz00_2104));
		}

	}



/* fun-nil */
	BGL_EXPORTED_DEF BgL_funz00_bglt BGl_funzd2nilzd2zzast_varz00()
	{
		{	/* Ast/var.sch 374 */
			{	/* Ast/var.sch 374 */
				obj_t BgL_classz00_1558;

				BgL_classz00_1558 = BGl_funz00zzast_varz00;
				{	/* Ast/var.sch 374 */
					obj_t BgL__ortest_1106z00_1559;

					BgL__ortest_1106z00_1559 = BGL_CLASS_NIL(BgL_classz00_1558);
					if (CBOOL(BgL__ortest_1106z00_1559))
						{	/* Ast/var.sch 374 */
							return ((BgL_funz00_bglt) BgL__ortest_1106z00_1559);
						}
					else
						{	/* Ast/var.sch 374 */
							return
								((BgL_funz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_1558));
						}
				}
			}
		}

	}



/* &fun-nil */
	BgL_funz00_bglt BGl_z62funzd2nilzb0zzast_varz00(obj_t BgL_envz00_2105)
	{
		{	/* Ast/var.sch 374 */
			return BGl_funzd2nilzd2zzast_varz00();
		}

	}



/* fun-args-noescape */
	BGL_EXPORTED_DEF obj_t
		BGl_funzd2argszd2noescapez00zzast_varz00(BgL_funz00_bglt BgL_oz00_181)
	{
		{	/* Ast/var.sch 375 */
			return
				(((BgL_funz00_bglt) COBJECT(BgL_oz00_181))->BgL_argszd2noescapezd2);
		}

	}



/* &fun-args-noescape */
	obj_t BGl_z62funzd2argszd2noescapez62zzast_varz00(obj_t BgL_envz00_2106,
		obj_t BgL_oz00_2107)
	{
		{	/* Ast/var.sch 375 */
			return
				BGl_funzd2argszd2noescapez00zzast_varz00(
				((BgL_funz00_bglt) BgL_oz00_2107));
		}

	}



/* fun-args-noescape-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_funzd2argszd2noescapezd2setz12zc0zzast_varz00(BgL_funz00_bglt
		BgL_oz00_182, obj_t BgL_vz00_183)
	{
		{	/* Ast/var.sch 376 */
			return
				((((BgL_funz00_bglt) COBJECT(BgL_oz00_182))->BgL_argszd2noescapezd2) =
				((obj_t) BgL_vz00_183), BUNSPEC);
		}

	}



/* &fun-args-noescape-set! */
	obj_t BGl_z62funzd2argszd2noescapezd2setz12za2zzast_varz00(obj_t
		BgL_envz00_2108, obj_t BgL_oz00_2109, obj_t BgL_vz00_2110)
	{
		{	/* Ast/var.sch 376 */
			return
				BGl_funzd2argszd2noescapezd2setz12zc0zzast_varz00(
				((BgL_funz00_bglt) BgL_oz00_2109), BgL_vz00_2110);
		}

	}



/* fun-failsafe */
	BGL_EXPORTED_DEF obj_t BGl_funzd2failsafezd2zzast_varz00(BgL_funz00_bglt
		BgL_oz00_184)
	{
		{	/* Ast/var.sch 377 */
			return (((BgL_funz00_bglt) COBJECT(BgL_oz00_184))->BgL_failsafez00);
		}

	}



/* &fun-failsafe */
	obj_t BGl_z62funzd2failsafezb0zzast_varz00(obj_t BgL_envz00_2111,
		obj_t BgL_oz00_2112)
	{
		{	/* Ast/var.sch 377 */
			return
				BGl_funzd2failsafezd2zzast_varz00(((BgL_funz00_bglt) BgL_oz00_2112));
		}

	}



/* fun-failsafe-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_funzd2failsafezd2setz12z12zzast_varz00(BgL_funz00_bglt BgL_oz00_185,
		obj_t BgL_vz00_186)
	{
		{	/* Ast/var.sch 378 */
			return
				((((BgL_funz00_bglt) COBJECT(BgL_oz00_185))->BgL_failsafez00) =
				((obj_t) BgL_vz00_186), BUNSPEC);
		}

	}



/* &fun-failsafe-set! */
	obj_t BGl_z62funzd2failsafezd2setz12z70zzast_varz00(obj_t BgL_envz00_2113,
		obj_t BgL_oz00_2114, obj_t BgL_vz00_2115)
	{
		{	/* Ast/var.sch 378 */
			return
				BGl_funzd2failsafezd2setz12z12zzast_varz00(
				((BgL_funz00_bglt) BgL_oz00_2114), BgL_vz00_2115);
		}

	}



/* fun-effect */
	BGL_EXPORTED_DEF obj_t BGl_funzd2effectzd2zzast_varz00(BgL_funz00_bglt
		BgL_oz00_187)
	{
		{	/* Ast/var.sch 379 */
			return (((BgL_funz00_bglt) COBJECT(BgL_oz00_187))->BgL_effectz00);
		}

	}



/* &fun-effect */
	obj_t BGl_z62funzd2effectzb0zzast_varz00(obj_t BgL_envz00_2116,
		obj_t BgL_oz00_2117)
	{
		{	/* Ast/var.sch 379 */
			return BGl_funzd2effectzd2zzast_varz00(((BgL_funz00_bglt) BgL_oz00_2117));
		}

	}



/* fun-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_funzd2effectzd2setz12z12zzast_varz00(BgL_funz00_bglt BgL_oz00_188,
		obj_t BgL_vz00_189)
	{
		{	/* Ast/var.sch 380 */
			return
				((((BgL_funz00_bglt) COBJECT(BgL_oz00_188))->BgL_effectz00) =
				((obj_t) BgL_vz00_189), BUNSPEC);
		}

	}



/* &fun-effect-set! */
	obj_t BGl_z62funzd2effectzd2setz12z70zzast_varz00(obj_t BgL_envz00_2118,
		obj_t BgL_oz00_2119, obj_t BgL_vz00_2120)
	{
		{	/* Ast/var.sch 380 */
			return
				BGl_funzd2effectzd2setz12z12zzast_varz00(
				((BgL_funz00_bglt) BgL_oz00_2119), BgL_vz00_2120);
		}

	}



/* fun-the-closure */
	BGL_EXPORTED_DEF obj_t BGl_funzd2thezd2closurez00zzast_varz00(BgL_funz00_bglt
		BgL_oz00_190)
	{
		{	/* Ast/var.sch 381 */
			return (((BgL_funz00_bglt) COBJECT(BgL_oz00_190))->BgL_thezd2closurezd2);
		}

	}



/* &fun-the-closure */
	obj_t BGl_z62funzd2thezd2closurez62zzast_varz00(obj_t BgL_envz00_2121,
		obj_t BgL_oz00_2122)
	{
		{	/* Ast/var.sch 381 */
			return
				BGl_funzd2thezd2closurez00zzast_varz00(
				((BgL_funz00_bglt) BgL_oz00_2122));
		}

	}



/* fun-the-closure-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_funzd2thezd2closurezd2setz12zc0zzast_varz00(BgL_funz00_bglt
		BgL_oz00_191, obj_t BgL_vz00_192)
	{
		{	/* Ast/var.sch 382 */
			return
				((((BgL_funz00_bglt) COBJECT(BgL_oz00_191))->BgL_thezd2closurezd2) =
				((obj_t) BgL_vz00_192), BUNSPEC);
		}

	}



/* &fun-the-closure-set! */
	obj_t BGl_z62funzd2thezd2closurezd2setz12za2zzast_varz00(obj_t
		BgL_envz00_2123, obj_t BgL_oz00_2124, obj_t BgL_vz00_2125)
	{
		{	/* Ast/var.sch 382 */
			return
				BGl_funzd2thezd2closurezd2setz12zc0zzast_varz00(
				((BgL_funz00_bglt) BgL_oz00_2124), BgL_vz00_2125);
		}

	}



/* fun-top? */
	BGL_EXPORTED_DEF bool_t BGl_funzd2topzf3z21zzast_varz00(BgL_funz00_bglt
		BgL_oz00_193)
	{
		{	/* Ast/var.sch 383 */
			return (((BgL_funz00_bglt) COBJECT(BgL_oz00_193))->BgL_topzf3zf3);
		}

	}



/* &fun-top? */
	obj_t BGl_z62funzd2topzf3z43zzast_varz00(obj_t BgL_envz00_2126,
		obj_t BgL_oz00_2127)
	{
		{	/* Ast/var.sch 383 */
			return
				BBOOL(BGl_funzd2topzf3z21zzast_varz00(
					((BgL_funz00_bglt) BgL_oz00_2127)));
		}

	}



/* fun-top?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_funzd2topzf3zd2setz12ze1zzast_varz00(BgL_funz00_bglt BgL_oz00_194,
		bool_t BgL_vz00_195)
	{
		{	/* Ast/var.sch 384 */
			return
				((((BgL_funz00_bglt) COBJECT(BgL_oz00_194))->BgL_topzf3zf3) =
				((bool_t) BgL_vz00_195), BUNSPEC);
		}

	}



/* &fun-top?-set! */
	obj_t BGl_z62funzd2topzf3zd2setz12z83zzast_varz00(obj_t BgL_envz00_2128,
		obj_t BgL_oz00_2129, obj_t BgL_vz00_2130)
	{
		{	/* Ast/var.sch 384 */
			return
				BGl_funzd2topzf3zd2setz12ze1zzast_varz00(
				((BgL_funz00_bglt) BgL_oz00_2129), CBOOL(BgL_vz00_2130));
		}

	}



/* fun-stack-allocator */
	BGL_EXPORTED_DEF obj_t
		BGl_funzd2stackzd2allocatorz00zzast_varz00(BgL_funz00_bglt BgL_oz00_196)
	{
		{	/* Ast/var.sch 385 */
			return
				(((BgL_funz00_bglt) COBJECT(BgL_oz00_196))->BgL_stackzd2allocatorzd2);
		}

	}



/* &fun-stack-allocator */
	obj_t BGl_z62funzd2stackzd2allocatorz62zzast_varz00(obj_t BgL_envz00_2131,
		obj_t BgL_oz00_2132)
	{
		{	/* Ast/var.sch 385 */
			return
				BGl_funzd2stackzd2allocatorz00zzast_varz00(
				((BgL_funz00_bglt) BgL_oz00_2132));
		}

	}



/* fun-stack-allocator-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_funzd2stackzd2allocatorzd2setz12zc0zzast_varz00(BgL_funz00_bglt
		BgL_oz00_197, obj_t BgL_vz00_198)
	{
		{	/* Ast/var.sch 386 */
			return
				((((BgL_funz00_bglt) COBJECT(BgL_oz00_197))->BgL_stackzd2allocatorzd2) =
				((obj_t) BgL_vz00_198), BUNSPEC);
		}

	}



/* &fun-stack-allocator-set! */
	obj_t BGl_z62funzd2stackzd2allocatorzd2setz12za2zzast_varz00(obj_t
		BgL_envz00_2133, obj_t BgL_oz00_2134, obj_t BgL_vz00_2135)
	{
		{	/* Ast/var.sch 386 */
			return
				BGl_funzd2stackzd2allocatorzd2setz12zc0zzast_varz00(
				((BgL_funz00_bglt) BgL_oz00_2134), BgL_vz00_2135);
		}

	}



/* fun-predicate-of */
	BGL_EXPORTED_DEF obj_t BGl_funzd2predicatezd2ofz00zzast_varz00(BgL_funz00_bglt
		BgL_oz00_199)
	{
		{	/* Ast/var.sch 387 */
			return (((BgL_funz00_bglt) COBJECT(BgL_oz00_199))->BgL_predicatezd2ofzd2);
		}

	}



/* &fun-predicate-of */
	obj_t BGl_z62funzd2predicatezd2ofz62zzast_varz00(obj_t BgL_envz00_2136,
		obj_t BgL_oz00_2137)
	{
		{	/* Ast/var.sch 387 */
			return
				BGl_funzd2predicatezd2ofz00zzast_varz00(
				((BgL_funz00_bglt) BgL_oz00_2137));
		}

	}



/* fun-predicate-of-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_funzd2predicatezd2ofzd2setz12zc0zzast_varz00(BgL_funz00_bglt
		BgL_oz00_200, obj_t BgL_vz00_201)
	{
		{	/* Ast/var.sch 388 */
			return
				((((BgL_funz00_bglt) COBJECT(BgL_oz00_200))->BgL_predicatezd2ofzd2) =
				((obj_t) BgL_vz00_201), BUNSPEC);
		}

	}



/* &fun-predicate-of-set! */
	obj_t BGl_z62funzd2predicatezd2ofzd2setz12za2zzast_varz00(obj_t
		BgL_envz00_2138, obj_t BgL_oz00_2139, obj_t BgL_vz00_2140)
	{
		{	/* Ast/var.sch 388 */
			return
				BGl_funzd2predicatezd2ofzd2setz12zc0zzast_varz00(
				((BgL_funz00_bglt) BgL_oz00_2139), BgL_vz00_2140);
		}

	}



/* fun-side-effect */
	BGL_EXPORTED_DEF obj_t BGl_funzd2sidezd2effectz00zzast_varz00(BgL_funz00_bglt
		BgL_oz00_202)
	{
		{	/* Ast/var.sch 389 */
			return (((BgL_funz00_bglt) COBJECT(BgL_oz00_202))->BgL_sidezd2effectzd2);
		}

	}



/* &fun-side-effect */
	obj_t BGl_z62funzd2sidezd2effectz62zzast_varz00(obj_t BgL_envz00_2141,
		obj_t BgL_oz00_2142)
	{
		{	/* Ast/var.sch 389 */
			return
				BGl_funzd2sidezd2effectz00zzast_varz00(
				((BgL_funz00_bglt) BgL_oz00_2142));
		}

	}



/* fun-side-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_funzd2sidezd2effectzd2setz12zc0zzast_varz00(BgL_funz00_bglt
		BgL_oz00_203, obj_t BgL_vz00_204)
	{
		{	/* Ast/var.sch 390 */
			return
				((((BgL_funz00_bglt) COBJECT(BgL_oz00_203))->BgL_sidezd2effectzd2) =
				((obj_t) BgL_vz00_204), BUNSPEC);
		}

	}



/* &fun-side-effect-set! */
	obj_t BGl_z62funzd2sidezd2effectzd2setz12za2zzast_varz00(obj_t
		BgL_envz00_2143, obj_t BgL_oz00_2144, obj_t BgL_vz00_2145)
	{
		{	/* Ast/var.sch 390 */
			return
				BGl_funzd2sidezd2effectzd2setz12zc0zzast_varz00(
				((BgL_funz00_bglt) BgL_oz00_2144), BgL_vz00_2145);
		}

	}



/* fun-arity */
	BGL_EXPORTED_DEF long BGl_funzd2arityzd2zzast_varz00(BgL_funz00_bglt
		BgL_oz00_205)
	{
		{	/* Ast/var.sch 391 */
			return (((BgL_funz00_bglt) COBJECT(BgL_oz00_205))->BgL_arityz00);
		}

	}



/* &fun-arity */
	obj_t BGl_z62funzd2arityzb0zzast_varz00(obj_t BgL_envz00_2146,
		obj_t BgL_oz00_2147)
	{
		{	/* Ast/var.sch 391 */
			return
				BINT(BGl_funzd2arityzd2zzast_varz00(((BgL_funz00_bglt) BgL_oz00_2147)));
		}

	}



/* make-sfun */
	BGL_EXPORTED_DEF BgL_sfunz00_bglt BGl_makezd2sfunzd2zzast_varz00(long
		BgL_arity1208z00_208, obj_t BgL_sidezd2effect1209zd2_209,
		obj_t BgL_predicatezd2of1210zd2_210, obj_t BgL_stackzd2allocator1211zd2_211,
		bool_t BgL_topzf31212zf3_212, obj_t BgL_thezd2closure1213zd2_213,
		obj_t BgL_effect1214z00_214, obj_t BgL_failsafe1215z00_215,
		obj_t BgL_argszd2noescape1216zd2_216, obj_t BgL_property1217z00_217,
		obj_t BgL_args1218z00_218, obj_t BgL_argszd2name1219zd2_219,
		obj_t BgL_body1220z00_220, obj_t BgL_class1221z00_221,
		obj_t BgL_dssslzd2keywords1222zd2_222, obj_t BgL_loc1223z00_223,
		obj_t BgL_optionals1224z00_224, obj_t BgL_keys1225z00_225,
		obj_t BgL_thezd2closurezd2global1226z00_226, obj_t BgL_strength1227z00_227,
		obj_t BgL_stackable1228z00_228)
	{
		{	/* Ast/var.sch 395 */
			{	/* Ast/var.sch 395 */
				BgL_sfunz00_bglt BgL_new1190z00_3092;

				{	/* Ast/var.sch 395 */
					BgL_sfunz00_bglt BgL_new1189z00_3093;

					BgL_new1189z00_3093 =
						((BgL_sfunz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_sfunz00_bgl))));
					{	/* Ast/var.sch 395 */
						long BgL_arg1277z00_3094;

						{	/* Ast/var.sch 395 */
							long BgL_res2104z00_3095;

							BgL_res2104z00_3095 = BGL_CLASS_INDEX(BGl_sfunz00zzast_varz00);
							BgL_arg1277z00_3094 = BgL_res2104z00_3095;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1189z00_3093), BgL_arg1277z00_3094);
					}
					{	/* Ast/var.sch 395 */
						BgL_objectz00_bglt BgL_tmpz00_3959;

						BgL_tmpz00_3959 = ((BgL_objectz00_bglt) BgL_new1189z00_3093);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3959, BFALSE);
					}
					((BgL_objectz00_bglt) BgL_new1189z00_3093);
					BgL_new1190z00_3092 = BgL_new1189z00_3093;
				}
				((((BgL_funz00_bglt) COBJECT(
								((BgL_funz00_bglt) BgL_new1190z00_3092)))->BgL_arityz00) =
					((long) BgL_arity1208z00_208), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_new1190z00_3092)))->
						BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1209zd2_209), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_new1190z00_3092)))->
						BgL_predicatezd2ofzd2) =
					((obj_t) BgL_predicatezd2of1210zd2_210), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_new1190z00_3092)))->
						BgL_stackzd2allocatorzd2) =
					((obj_t) BgL_stackzd2allocator1211zd2_211), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_new1190z00_3092)))->
						BgL_topzf3zf3) = ((bool_t) BgL_topzf31212zf3_212), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_new1190z00_3092)))->
						BgL_thezd2closurezd2) =
					((obj_t) BgL_thezd2closure1213zd2_213), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_new1190z00_3092)))->
						BgL_effectz00) = ((obj_t) BgL_effect1214z00_214), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_new1190z00_3092)))->
						BgL_failsafez00) = ((obj_t) BgL_failsafe1215z00_215), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_new1190z00_3092)))->
						BgL_argszd2noescapezd2) =
					((obj_t) BgL_argszd2noescape1216zd2_216), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(BgL_new1190z00_3092))->BgL_propertyz00) =
					((obj_t) BgL_property1217z00_217), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(BgL_new1190z00_3092))->BgL_argsz00) =
					((obj_t) BgL_args1218z00_218), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(BgL_new1190z00_3092))->
						BgL_argszd2namezd2) =
					((obj_t) BgL_argszd2name1219zd2_219), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(BgL_new1190z00_3092))->BgL_bodyz00) =
					((obj_t) BgL_body1220z00_220), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(BgL_new1190z00_3092))->BgL_classz00) =
					((obj_t) BgL_class1221z00_221), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(BgL_new1190z00_3092))->
						BgL_dssslzd2keywordszd2) =
					((obj_t) BgL_dssslzd2keywords1222zd2_222), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(BgL_new1190z00_3092))->BgL_locz00) =
					((obj_t) BgL_loc1223z00_223), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(BgL_new1190z00_3092))->BgL_optionalsz00) =
					((obj_t) BgL_optionals1224z00_224), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(BgL_new1190z00_3092))->BgL_keysz00) =
					((obj_t) BgL_keys1225z00_225), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(BgL_new1190z00_3092))->
						BgL_thezd2closurezd2globalz00) =
					((obj_t) BgL_thezd2closurezd2global1226z00_226), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(BgL_new1190z00_3092))->BgL_strengthz00) =
					((obj_t) BgL_strength1227z00_227), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(BgL_new1190z00_3092))->BgL_stackablez00) =
					((obj_t) BgL_stackable1228z00_228), BUNSPEC);
				return BgL_new1190z00_3092;
			}
		}

	}



/* &make-sfun */
	BgL_sfunz00_bglt BGl_z62makezd2sfunzb0zzast_varz00(obj_t BgL_envz00_2148,
		obj_t BgL_arity1208z00_2149, obj_t BgL_sidezd2effect1209zd2_2150,
		obj_t BgL_predicatezd2of1210zd2_2151,
		obj_t BgL_stackzd2allocator1211zd2_2152, obj_t BgL_topzf31212zf3_2153,
		obj_t BgL_thezd2closure1213zd2_2154, obj_t BgL_effect1214z00_2155,
		obj_t BgL_failsafe1215z00_2156, obj_t BgL_argszd2noescape1216zd2_2157,
		obj_t BgL_property1217z00_2158, obj_t BgL_args1218z00_2159,
		obj_t BgL_argszd2name1219zd2_2160, obj_t BgL_body1220z00_2161,
		obj_t BgL_class1221z00_2162, obj_t BgL_dssslzd2keywords1222zd2_2163,
		obj_t BgL_loc1223z00_2164, obj_t BgL_optionals1224z00_2165,
		obj_t BgL_keys1225z00_2166, obj_t BgL_thezd2closurezd2global1226z00_2167,
		obj_t BgL_strength1227z00_2168, obj_t BgL_stackable1228z00_2169)
	{
		{	/* Ast/var.sch 395 */
			return
				BGl_makezd2sfunzd2zzast_varz00(
				(long) CINT(BgL_arity1208z00_2149), BgL_sidezd2effect1209zd2_2150,
				BgL_predicatezd2of1210zd2_2151, BgL_stackzd2allocator1211zd2_2152,
				CBOOL(BgL_topzf31212zf3_2153), BgL_thezd2closure1213zd2_2154,
				BgL_effect1214z00_2155, BgL_failsafe1215z00_2156,
				BgL_argszd2noescape1216zd2_2157, BgL_property1217z00_2158,
				BgL_args1218z00_2159, BgL_argszd2name1219zd2_2160, BgL_body1220z00_2161,
				BgL_class1221z00_2162, BgL_dssslzd2keywords1222zd2_2163,
				BgL_loc1223z00_2164, BgL_optionals1224z00_2165, BgL_keys1225z00_2166,
				BgL_thezd2closurezd2global1226z00_2167, BgL_strength1227z00_2168,
				BgL_stackable1228z00_2169);
		}

	}



/* sfun? */
	BGL_EXPORTED_DEF bool_t BGl_sfunzf3zf3zzast_varz00(obj_t BgL_objz00_229)
	{
		{	/* Ast/var.sch 396 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_229, BGl_sfunz00zzast_varz00);
		}

	}



/* &sfun? */
	obj_t BGl_z62sfunzf3z91zzast_varz00(obj_t BgL_envz00_2170,
		obj_t BgL_objz00_2171)
	{
		{	/* Ast/var.sch 396 */
			return BBOOL(BGl_sfunzf3zf3zzast_varz00(BgL_objz00_2171));
		}

	}



/* sfun-nil */
	BGL_EXPORTED_DEF BgL_sfunz00_bglt BGl_sfunzd2nilzd2zzast_varz00()
	{
		{	/* Ast/var.sch 397 */
			{	/* Ast/var.sch 397 */
				obj_t BgL_classz00_1568;

				BgL_classz00_1568 = BGl_sfunz00zzast_varz00;
				{	/* Ast/var.sch 397 */
					obj_t BgL__ortest_1106z00_1569;

					BgL__ortest_1106z00_1569 = BGL_CLASS_NIL(BgL_classz00_1568);
					if (CBOOL(BgL__ortest_1106z00_1569))
						{	/* Ast/var.sch 397 */
							return ((BgL_sfunz00_bglt) BgL__ortest_1106z00_1569);
						}
					else
						{	/* Ast/var.sch 397 */
							return
								((BgL_sfunz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_1568));
						}
				}
			}
		}

	}



/* &sfun-nil */
	BgL_sfunz00_bglt BGl_z62sfunzd2nilzb0zzast_varz00(obj_t BgL_envz00_2172)
	{
		{	/* Ast/var.sch 397 */
			return BGl_sfunzd2nilzd2zzast_varz00();
		}

	}



/* sfun-stackable */
	BGL_EXPORTED_DEF obj_t BGl_sfunzd2stackablezd2zzast_varz00(BgL_sfunz00_bglt
		BgL_oz00_230)
	{
		{	/* Ast/var.sch 398 */
			return (((BgL_sfunz00_bglt) COBJECT(BgL_oz00_230))->BgL_stackablez00);
		}

	}



/* &sfun-stackable */
	obj_t BGl_z62sfunzd2stackablezb0zzast_varz00(obj_t BgL_envz00_2173,
		obj_t BgL_oz00_2174)
	{
		{	/* Ast/var.sch 398 */
			return
				BGl_sfunzd2stackablezd2zzast_varz00(((BgL_sfunz00_bglt) BgL_oz00_2174));
		}

	}



/* sfun-stackable-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzd2stackablezd2setz12z12zzast_varz00(BgL_sfunz00_bglt BgL_oz00_231,
		obj_t BgL_vz00_232)
	{
		{	/* Ast/var.sch 399 */
			return
				((((BgL_sfunz00_bglt) COBJECT(BgL_oz00_231))->BgL_stackablez00) =
				((obj_t) BgL_vz00_232), BUNSPEC);
		}

	}



/* &sfun-stackable-set! */
	obj_t BGl_z62sfunzd2stackablezd2setz12z70zzast_varz00(obj_t BgL_envz00_2175,
		obj_t BgL_oz00_2176, obj_t BgL_vz00_2177)
	{
		{	/* Ast/var.sch 399 */
			return
				BGl_sfunzd2stackablezd2setz12z12zzast_varz00(
				((BgL_sfunz00_bglt) BgL_oz00_2176), BgL_vz00_2177);
		}

	}



/* sfun-strength */
	BGL_EXPORTED_DEF obj_t BGl_sfunzd2strengthzd2zzast_varz00(BgL_sfunz00_bglt
		BgL_oz00_233)
	{
		{	/* Ast/var.sch 400 */
			return (((BgL_sfunz00_bglt) COBJECT(BgL_oz00_233))->BgL_strengthz00);
		}

	}



/* &sfun-strength */
	obj_t BGl_z62sfunzd2strengthzb0zzast_varz00(obj_t BgL_envz00_2178,
		obj_t BgL_oz00_2179)
	{
		{	/* Ast/var.sch 400 */
			return
				BGl_sfunzd2strengthzd2zzast_varz00(((BgL_sfunz00_bglt) BgL_oz00_2179));
		}

	}



/* sfun-strength-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzd2strengthzd2setz12z12zzast_varz00(BgL_sfunz00_bglt BgL_oz00_234,
		obj_t BgL_vz00_235)
	{
		{	/* Ast/var.sch 401 */
			return
				((((BgL_sfunz00_bglt) COBJECT(BgL_oz00_234))->BgL_strengthz00) =
				((obj_t) BgL_vz00_235), BUNSPEC);
		}

	}



/* &sfun-strength-set! */
	obj_t BGl_z62sfunzd2strengthzd2setz12z70zzast_varz00(obj_t BgL_envz00_2180,
		obj_t BgL_oz00_2181, obj_t BgL_vz00_2182)
	{
		{	/* Ast/var.sch 401 */
			return
				BGl_sfunzd2strengthzd2setz12z12zzast_varz00(
				((BgL_sfunz00_bglt) BgL_oz00_2181), BgL_vz00_2182);
		}

	}



/* sfun-the-closure-global */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzd2thezd2closurezd2globalzd2zzast_varz00(BgL_sfunz00_bglt
		BgL_oz00_236)
	{
		{	/* Ast/var.sch 402 */
			return
				(((BgL_sfunz00_bglt) COBJECT(BgL_oz00_236))->
				BgL_thezd2closurezd2globalz00);
		}

	}



/* &sfun-the-closure-global */
	obj_t BGl_z62sfunzd2thezd2closurezd2globalzb0zzast_varz00(obj_t
		BgL_envz00_2183, obj_t BgL_oz00_2184)
	{
		{	/* Ast/var.sch 402 */
			return
				BGl_sfunzd2thezd2closurezd2globalzd2zzast_varz00(
				((BgL_sfunz00_bglt) BgL_oz00_2184));
		}

	}



/* sfun-the-closure-global-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzd2thezd2closurezd2globalzd2setz12z12zzast_varz00(BgL_sfunz00_bglt
		BgL_oz00_237, obj_t BgL_vz00_238)
	{
		{	/* Ast/var.sch 403 */
			return
				((((BgL_sfunz00_bglt) COBJECT(BgL_oz00_237))->
					BgL_thezd2closurezd2globalz00) = ((obj_t) BgL_vz00_238), BUNSPEC);
		}

	}



/* &sfun-the-closure-global-set! */
	obj_t BGl_z62sfunzd2thezd2closurezd2globalzd2setz12z70zzast_varz00(obj_t
		BgL_envz00_2185, obj_t BgL_oz00_2186, obj_t BgL_vz00_2187)
	{
		{	/* Ast/var.sch 403 */
			return
				BGl_sfunzd2thezd2closurezd2globalzd2setz12z12zzast_varz00(
				((BgL_sfunz00_bglt) BgL_oz00_2186), BgL_vz00_2187);
		}

	}



/* sfun-keys */
	BGL_EXPORTED_DEF obj_t BGl_sfunzd2keyszd2zzast_varz00(BgL_sfunz00_bglt
		BgL_oz00_239)
	{
		{	/* Ast/var.sch 404 */
			return (((BgL_sfunz00_bglt) COBJECT(BgL_oz00_239))->BgL_keysz00);
		}

	}



/* &sfun-keys */
	obj_t BGl_z62sfunzd2keyszb0zzast_varz00(obj_t BgL_envz00_2188,
		obj_t BgL_oz00_2189)
	{
		{	/* Ast/var.sch 404 */
			return BGl_sfunzd2keyszd2zzast_varz00(((BgL_sfunz00_bglt) BgL_oz00_2189));
		}

	}



/* sfun-optionals */
	BGL_EXPORTED_DEF obj_t BGl_sfunzd2optionalszd2zzast_varz00(BgL_sfunz00_bglt
		BgL_oz00_242)
	{
		{	/* Ast/var.sch 406 */
			return (((BgL_sfunz00_bglt) COBJECT(BgL_oz00_242))->BgL_optionalsz00);
		}

	}



/* &sfun-optionals */
	obj_t BGl_z62sfunzd2optionalszb0zzast_varz00(obj_t BgL_envz00_2190,
		obj_t BgL_oz00_2191)
	{
		{	/* Ast/var.sch 406 */
			return
				BGl_sfunzd2optionalszd2zzast_varz00(((BgL_sfunz00_bglt) BgL_oz00_2191));
		}

	}



/* sfun-loc */
	BGL_EXPORTED_DEF obj_t BGl_sfunzd2loczd2zzast_varz00(BgL_sfunz00_bglt
		BgL_oz00_245)
	{
		{	/* Ast/var.sch 408 */
			return (((BgL_sfunz00_bglt) COBJECT(BgL_oz00_245))->BgL_locz00);
		}

	}



/* &sfun-loc */
	obj_t BGl_z62sfunzd2loczb0zzast_varz00(obj_t BgL_envz00_2192,
		obj_t BgL_oz00_2193)
	{
		{	/* Ast/var.sch 408 */
			return BGl_sfunzd2loczd2zzast_varz00(((BgL_sfunz00_bglt) BgL_oz00_2193));
		}

	}



/* sfun-loc-set! */
	BGL_EXPORTED_DEF obj_t BGl_sfunzd2loczd2setz12z12zzast_varz00(BgL_sfunz00_bglt
		BgL_oz00_246, obj_t BgL_vz00_247)
	{
		{	/* Ast/var.sch 409 */
			return
				((((BgL_sfunz00_bglt) COBJECT(BgL_oz00_246))->BgL_locz00) =
				((obj_t) BgL_vz00_247), BUNSPEC);
		}

	}



/* &sfun-loc-set! */
	obj_t BGl_z62sfunzd2loczd2setz12z70zzast_varz00(obj_t BgL_envz00_2194,
		obj_t BgL_oz00_2195, obj_t BgL_vz00_2196)
	{
		{	/* Ast/var.sch 409 */
			return
				BGl_sfunzd2loczd2setz12z12zzast_varz00(
				((BgL_sfunz00_bglt) BgL_oz00_2195), BgL_vz00_2196);
		}

	}



/* sfun-dsssl-keywords */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzd2dssslzd2keywordsz00zzast_varz00(BgL_sfunz00_bglt BgL_oz00_248)
	{
		{	/* Ast/var.sch 410 */
			return
				(((BgL_sfunz00_bglt) COBJECT(BgL_oz00_248))->BgL_dssslzd2keywordszd2);
		}

	}



/* &sfun-dsssl-keywords */
	obj_t BGl_z62sfunzd2dssslzd2keywordsz62zzast_varz00(obj_t BgL_envz00_2197,
		obj_t BgL_oz00_2198)
	{
		{	/* Ast/var.sch 410 */
			return
				BGl_sfunzd2dssslzd2keywordsz00zzast_varz00(
				((BgL_sfunz00_bglt) BgL_oz00_2198));
		}

	}



/* sfun-dsssl-keywords-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzd2dssslzd2keywordszd2setz12zc0zzast_varz00(BgL_sfunz00_bglt
		BgL_oz00_249, obj_t BgL_vz00_250)
	{
		{	/* Ast/var.sch 411 */
			return
				((((BgL_sfunz00_bglt) COBJECT(BgL_oz00_249))->BgL_dssslzd2keywordszd2) =
				((obj_t) BgL_vz00_250), BUNSPEC);
		}

	}



/* &sfun-dsssl-keywords-set! */
	obj_t BGl_z62sfunzd2dssslzd2keywordszd2setz12za2zzast_varz00(obj_t
		BgL_envz00_2199, obj_t BgL_oz00_2200, obj_t BgL_vz00_2201)
	{
		{	/* Ast/var.sch 411 */
			return
				BGl_sfunzd2dssslzd2keywordszd2setz12zc0zzast_varz00(
				((BgL_sfunz00_bglt) BgL_oz00_2200), BgL_vz00_2201);
		}

	}



/* sfun-class */
	BGL_EXPORTED_DEF obj_t BGl_sfunzd2classzd2zzast_varz00(BgL_sfunz00_bglt
		BgL_oz00_251)
	{
		{	/* Ast/var.sch 412 */
			return (((BgL_sfunz00_bglt) COBJECT(BgL_oz00_251))->BgL_classz00);
		}

	}



/* &sfun-class */
	obj_t BGl_z62sfunzd2classzb0zzast_varz00(obj_t BgL_envz00_2202,
		obj_t BgL_oz00_2203)
	{
		{	/* Ast/var.sch 412 */
			return
				BGl_sfunzd2classzd2zzast_varz00(((BgL_sfunz00_bglt) BgL_oz00_2203));
		}

	}



/* sfun-class-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzd2classzd2setz12z12zzast_varz00(BgL_sfunz00_bglt BgL_oz00_252,
		obj_t BgL_vz00_253)
	{
		{	/* Ast/var.sch 413 */
			return
				((((BgL_sfunz00_bglt) COBJECT(BgL_oz00_252))->BgL_classz00) =
				((obj_t) BgL_vz00_253), BUNSPEC);
		}

	}



/* &sfun-class-set! */
	obj_t BGl_z62sfunzd2classzd2setz12z70zzast_varz00(obj_t BgL_envz00_2204,
		obj_t BgL_oz00_2205, obj_t BgL_vz00_2206)
	{
		{	/* Ast/var.sch 413 */
			return
				BGl_sfunzd2classzd2setz12z12zzast_varz00(
				((BgL_sfunz00_bglt) BgL_oz00_2205), BgL_vz00_2206);
		}

	}



/* sfun-body */
	BGL_EXPORTED_DEF obj_t BGl_sfunzd2bodyzd2zzast_varz00(BgL_sfunz00_bglt
		BgL_oz00_254)
	{
		{	/* Ast/var.sch 414 */
			return (((BgL_sfunz00_bglt) COBJECT(BgL_oz00_254))->BgL_bodyz00);
		}

	}



/* &sfun-body */
	obj_t BGl_z62sfunzd2bodyzb0zzast_varz00(obj_t BgL_envz00_2207,
		obj_t BgL_oz00_2208)
	{
		{	/* Ast/var.sch 414 */
			return BGl_sfunzd2bodyzd2zzast_varz00(((BgL_sfunz00_bglt) BgL_oz00_2208));
		}

	}



/* sfun-body-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzd2bodyzd2setz12z12zzast_varz00(BgL_sfunz00_bglt BgL_oz00_255,
		obj_t BgL_vz00_256)
	{
		{	/* Ast/var.sch 415 */
			return
				((((BgL_sfunz00_bglt) COBJECT(BgL_oz00_255))->BgL_bodyz00) =
				((obj_t) BgL_vz00_256), BUNSPEC);
		}

	}



/* &sfun-body-set! */
	obj_t BGl_z62sfunzd2bodyzd2setz12z70zzast_varz00(obj_t BgL_envz00_2209,
		obj_t BgL_oz00_2210, obj_t BgL_vz00_2211)
	{
		{	/* Ast/var.sch 415 */
			return
				BGl_sfunzd2bodyzd2setz12z12zzast_varz00(
				((BgL_sfunz00_bglt) BgL_oz00_2210), BgL_vz00_2211);
		}

	}



/* sfun-args-name */
	BGL_EXPORTED_DEF obj_t BGl_sfunzd2argszd2namez00zzast_varz00(BgL_sfunz00_bglt
		BgL_oz00_257)
	{
		{	/* Ast/var.sch 416 */
			return (((BgL_sfunz00_bglt) COBJECT(BgL_oz00_257))->BgL_argszd2namezd2);
		}

	}



/* &sfun-args-name */
	obj_t BGl_z62sfunzd2argszd2namez62zzast_varz00(obj_t BgL_envz00_2212,
		obj_t BgL_oz00_2213)
	{
		{	/* Ast/var.sch 416 */
			return
				BGl_sfunzd2argszd2namez00zzast_varz00(
				((BgL_sfunz00_bglt) BgL_oz00_2213));
		}

	}



/* sfun-args */
	BGL_EXPORTED_DEF obj_t BGl_sfunzd2argszd2zzast_varz00(BgL_sfunz00_bglt
		BgL_oz00_260)
	{
		{	/* Ast/var.sch 418 */
			return (((BgL_sfunz00_bglt) COBJECT(BgL_oz00_260))->BgL_argsz00);
		}

	}



/* &sfun-args */
	obj_t BGl_z62sfunzd2argszb0zzast_varz00(obj_t BgL_envz00_2214,
		obj_t BgL_oz00_2215)
	{
		{	/* Ast/var.sch 418 */
			return BGl_sfunzd2argszd2zzast_varz00(((BgL_sfunz00_bglt) BgL_oz00_2215));
		}

	}



/* sfun-args-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzd2argszd2setz12z12zzast_varz00(BgL_sfunz00_bglt BgL_oz00_261,
		obj_t BgL_vz00_262)
	{
		{	/* Ast/var.sch 419 */
			return
				((((BgL_sfunz00_bglt) COBJECT(BgL_oz00_261))->BgL_argsz00) =
				((obj_t) BgL_vz00_262), BUNSPEC);
		}

	}



/* &sfun-args-set! */
	obj_t BGl_z62sfunzd2argszd2setz12z70zzast_varz00(obj_t BgL_envz00_2216,
		obj_t BgL_oz00_2217, obj_t BgL_vz00_2218)
	{
		{	/* Ast/var.sch 419 */
			return
				BGl_sfunzd2argszd2setz12z12zzast_varz00(
				((BgL_sfunz00_bglt) BgL_oz00_2217), BgL_vz00_2218);
		}

	}



/* sfun-property */
	BGL_EXPORTED_DEF obj_t BGl_sfunzd2propertyzd2zzast_varz00(BgL_sfunz00_bglt
		BgL_oz00_263)
	{
		{	/* Ast/var.sch 420 */
			return (((BgL_sfunz00_bglt) COBJECT(BgL_oz00_263))->BgL_propertyz00);
		}

	}



/* &sfun-property */
	obj_t BGl_z62sfunzd2propertyzb0zzast_varz00(obj_t BgL_envz00_2219,
		obj_t BgL_oz00_2220)
	{
		{	/* Ast/var.sch 420 */
			return
				BGl_sfunzd2propertyzd2zzast_varz00(((BgL_sfunz00_bglt) BgL_oz00_2220));
		}

	}



/* sfun-property-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzd2propertyzd2setz12z12zzast_varz00(BgL_sfunz00_bglt BgL_oz00_264,
		obj_t BgL_vz00_265)
	{
		{	/* Ast/var.sch 421 */
			return
				((((BgL_sfunz00_bglt) COBJECT(BgL_oz00_264))->BgL_propertyz00) =
				((obj_t) BgL_vz00_265), BUNSPEC);
		}

	}



/* &sfun-property-set! */
	obj_t BGl_z62sfunzd2propertyzd2setz12z70zzast_varz00(obj_t BgL_envz00_2221,
		obj_t BgL_oz00_2222, obj_t BgL_vz00_2223)
	{
		{	/* Ast/var.sch 421 */
			return
				BGl_sfunzd2propertyzd2setz12z12zzast_varz00(
				((BgL_sfunz00_bglt) BgL_oz00_2222), BgL_vz00_2223);
		}

	}



/* sfun-args-noescape */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzd2argszd2noescapez00zzast_varz00(BgL_sfunz00_bglt BgL_oz00_266)
	{
		{	/* Ast/var.sch 422 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_266)))->BgL_argszd2noescapezd2);
		}

	}



/* &sfun-args-noescape */
	obj_t BGl_z62sfunzd2argszd2noescapez62zzast_varz00(obj_t BgL_envz00_2224,
		obj_t BgL_oz00_2225)
	{
		{	/* Ast/var.sch 422 */
			return
				BGl_sfunzd2argszd2noescapez00zzast_varz00(
				((BgL_sfunz00_bglt) BgL_oz00_2225));
		}

	}



/* sfun-args-noescape-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzd2argszd2noescapezd2setz12zc0zzast_varz00(BgL_sfunz00_bglt
		BgL_oz00_267, obj_t BgL_vz00_268)
	{
		{	/* Ast/var.sch 423 */
			return
				((((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt) BgL_oz00_267)))->BgL_argszd2noescapezd2) =
				((obj_t) BgL_vz00_268), BUNSPEC);
		}

	}



/* &sfun-args-noescape-set! */
	obj_t BGl_z62sfunzd2argszd2noescapezd2setz12za2zzast_varz00(obj_t
		BgL_envz00_2226, obj_t BgL_oz00_2227, obj_t BgL_vz00_2228)
	{
		{	/* Ast/var.sch 423 */
			return
				BGl_sfunzd2argszd2noescapezd2setz12zc0zzast_varz00(
				((BgL_sfunz00_bglt) BgL_oz00_2227), BgL_vz00_2228);
		}

	}



/* sfun-failsafe */
	BGL_EXPORTED_DEF obj_t BGl_sfunzd2failsafezd2zzast_varz00(BgL_sfunz00_bglt
		BgL_oz00_269)
	{
		{	/* Ast/var.sch 424 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_269)))->BgL_failsafez00);
		}

	}



/* &sfun-failsafe */
	obj_t BGl_z62sfunzd2failsafezb0zzast_varz00(obj_t BgL_envz00_2229,
		obj_t BgL_oz00_2230)
	{
		{	/* Ast/var.sch 424 */
			return
				BGl_sfunzd2failsafezd2zzast_varz00(((BgL_sfunz00_bglt) BgL_oz00_2230));
		}

	}



/* sfun-failsafe-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzd2failsafezd2setz12z12zzast_varz00(BgL_sfunz00_bglt BgL_oz00_270,
		obj_t BgL_vz00_271)
	{
		{	/* Ast/var.sch 425 */
			return
				((((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt) BgL_oz00_270)))->BgL_failsafez00) =
				((obj_t) BgL_vz00_271), BUNSPEC);
		}

	}



/* &sfun-failsafe-set! */
	obj_t BGl_z62sfunzd2failsafezd2setz12z70zzast_varz00(obj_t BgL_envz00_2231,
		obj_t BgL_oz00_2232, obj_t BgL_vz00_2233)
	{
		{	/* Ast/var.sch 425 */
			return
				BGl_sfunzd2failsafezd2setz12z12zzast_varz00(
				((BgL_sfunz00_bglt) BgL_oz00_2232), BgL_vz00_2233);
		}

	}



/* sfun-effect */
	BGL_EXPORTED_DEF obj_t BGl_sfunzd2effectzd2zzast_varz00(BgL_sfunz00_bglt
		BgL_oz00_272)
	{
		{	/* Ast/var.sch 426 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_272)))->BgL_effectz00);
		}

	}



/* &sfun-effect */
	obj_t BGl_z62sfunzd2effectzb0zzast_varz00(obj_t BgL_envz00_2234,
		obj_t BgL_oz00_2235)
	{
		{	/* Ast/var.sch 426 */
			return
				BGl_sfunzd2effectzd2zzast_varz00(((BgL_sfunz00_bglt) BgL_oz00_2235));
		}

	}



/* sfun-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzd2effectzd2setz12z12zzast_varz00(BgL_sfunz00_bglt BgL_oz00_273,
		obj_t BgL_vz00_274)
	{
		{	/* Ast/var.sch 427 */
			return
				((((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt) BgL_oz00_273)))->BgL_effectz00) =
				((obj_t) BgL_vz00_274), BUNSPEC);
		}

	}



/* &sfun-effect-set! */
	obj_t BGl_z62sfunzd2effectzd2setz12z70zzast_varz00(obj_t BgL_envz00_2236,
		obj_t BgL_oz00_2237, obj_t BgL_vz00_2238)
	{
		{	/* Ast/var.sch 427 */
			return
				BGl_sfunzd2effectzd2setz12z12zzast_varz00(
				((BgL_sfunz00_bglt) BgL_oz00_2237), BgL_vz00_2238);
		}

	}



/* sfun-the-closure */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzd2thezd2closurez00zzast_varz00(BgL_sfunz00_bglt BgL_oz00_275)
	{
		{	/* Ast/var.sch 428 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_275)))->BgL_thezd2closurezd2);
		}

	}



/* &sfun-the-closure */
	obj_t BGl_z62sfunzd2thezd2closurez62zzast_varz00(obj_t BgL_envz00_2239,
		obj_t BgL_oz00_2240)
	{
		{	/* Ast/var.sch 428 */
			return
				BGl_sfunzd2thezd2closurez00zzast_varz00(
				((BgL_sfunz00_bglt) BgL_oz00_2240));
		}

	}



/* sfun-the-closure-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzd2thezd2closurezd2setz12zc0zzast_varz00(BgL_sfunz00_bglt
		BgL_oz00_276, obj_t BgL_vz00_277)
	{
		{	/* Ast/var.sch 429 */
			return
				((((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt) BgL_oz00_276)))->BgL_thezd2closurezd2) =
				((obj_t) BgL_vz00_277), BUNSPEC);
		}

	}



/* &sfun-the-closure-set! */
	obj_t BGl_z62sfunzd2thezd2closurezd2setz12za2zzast_varz00(obj_t
		BgL_envz00_2241, obj_t BgL_oz00_2242, obj_t BgL_vz00_2243)
	{
		{	/* Ast/var.sch 429 */
			return
				BGl_sfunzd2thezd2closurezd2setz12zc0zzast_varz00(
				((BgL_sfunz00_bglt) BgL_oz00_2242), BgL_vz00_2243);
		}

	}



/* sfun-top? */
	BGL_EXPORTED_DEF bool_t BGl_sfunzd2topzf3z21zzast_varz00(BgL_sfunz00_bglt
		BgL_oz00_278)
	{
		{	/* Ast/var.sch 430 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_278)))->BgL_topzf3zf3);
		}

	}



/* &sfun-top? */
	obj_t BGl_z62sfunzd2topzf3z43zzast_varz00(obj_t BgL_envz00_2244,
		obj_t BgL_oz00_2245)
	{
		{	/* Ast/var.sch 430 */
			return
				BBOOL(BGl_sfunzd2topzf3z21zzast_varz00(
					((BgL_sfunz00_bglt) BgL_oz00_2245)));
		}

	}



/* sfun-top?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzd2topzf3zd2setz12ze1zzast_varz00(BgL_sfunz00_bglt BgL_oz00_279,
		bool_t BgL_vz00_280)
	{
		{	/* Ast/var.sch 431 */
			return
				((((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt) BgL_oz00_279)))->BgL_topzf3zf3) =
				((bool_t) BgL_vz00_280), BUNSPEC);
		}

	}



/* &sfun-top?-set! */
	obj_t BGl_z62sfunzd2topzf3zd2setz12z83zzast_varz00(obj_t BgL_envz00_2246,
		obj_t BgL_oz00_2247, obj_t BgL_vz00_2248)
	{
		{	/* Ast/var.sch 431 */
			return
				BGl_sfunzd2topzf3zd2setz12ze1zzast_varz00(
				((BgL_sfunz00_bglt) BgL_oz00_2247), CBOOL(BgL_vz00_2248));
		}

	}



/* sfun-stack-allocator */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzd2stackzd2allocatorz00zzast_varz00(BgL_sfunz00_bglt BgL_oz00_281)
	{
		{	/* Ast/var.sch 432 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_281)))->BgL_stackzd2allocatorzd2);
		}

	}



/* &sfun-stack-allocator */
	obj_t BGl_z62sfunzd2stackzd2allocatorz62zzast_varz00(obj_t BgL_envz00_2249,
		obj_t BgL_oz00_2250)
	{
		{	/* Ast/var.sch 432 */
			return
				BGl_sfunzd2stackzd2allocatorz00zzast_varz00(
				((BgL_sfunz00_bglt) BgL_oz00_2250));
		}

	}



/* sfun-stack-allocator-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzd2stackzd2allocatorzd2setz12zc0zzast_varz00(BgL_sfunz00_bglt
		BgL_oz00_282, obj_t BgL_vz00_283)
	{
		{	/* Ast/var.sch 433 */
			return
				((((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt) BgL_oz00_282)))->BgL_stackzd2allocatorzd2) =
				((obj_t) BgL_vz00_283), BUNSPEC);
		}

	}



/* &sfun-stack-allocator-set! */
	obj_t BGl_z62sfunzd2stackzd2allocatorzd2setz12za2zzast_varz00(obj_t
		BgL_envz00_2251, obj_t BgL_oz00_2252, obj_t BgL_vz00_2253)
	{
		{	/* Ast/var.sch 433 */
			return
				BGl_sfunzd2stackzd2allocatorzd2setz12zc0zzast_varz00(
				((BgL_sfunz00_bglt) BgL_oz00_2252), BgL_vz00_2253);
		}

	}



/* sfun-predicate-of */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzd2predicatezd2ofz00zzast_varz00(BgL_sfunz00_bglt BgL_oz00_284)
	{
		{	/* Ast/var.sch 434 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_284)))->BgL_predicatezd2ofzd2);
		}

	}



/* &sfun-predicate-of */
	obj_t BGl_z62sfunzd2predicatezd2ofz62zzast_varz00(obj_t BgL_envz00_2254,
		obj_t BgL_oz00_2255)
	{
		{	/* Ast/var.sch 434 */
			return
				BGl_sfunzd2predicatezd2ofz00zzast_varz00(
				((BgL_sfunz00_bglt) BgL_oz00_2255));
		}

	}



/* sfun-predicate-of-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzd2predicatezd2ofzd2setz12zc0zzast_varz00(BgL_sfunz00_bglt
		BgL_oz00_285, obj_t BgL_vz00_286)
	{
		{	/* Ast/var.sch 435 */
			return
				((((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt) BgL_oz00_285)))->BgL_predicatezd2ofzd2) =
				((obj_t) BgL_vz00_286), BUNSPEC);
		}

	}



/* &sfun-predicate-of-set! */
	obj_t BGl_z62sfunzd2predicatezd2ofzd2setz12za2zzast_varz00(obj_t
		BgL_envz00_2256, obj_t BgL_oz00_2257, obj_t BgL_vz00_2258)
	{
		{	/* Ast/var.sch 435 */
			return
				BGl_sfunzd2predicatezd2ofzd2setz12zc0zzast_varz00(
				((BgL_sfunz00_bglt) BgL_oz00_2257), BgL_vz00_2258);
		}

	}



/* sfun-side-effect */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzd2sidezd2effectz00zzast_varz00(BgL_sfunz00_bglt BgL_oz00_287)
	{
		{	/* Ast/var.sch 436 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_287)))->BgL_sidezd2effectzd2);
		}

	}



/* &sfun-side-effect */
	obj_t BGl_z62sfunzd2sidezd2effectz62zzast_varz00(obj_t BgL_envz00_2259,
		obj_t BgL_oz00_2260)
	{
		{	/* Ast/var.sch 436 */
			return
				BGl_sfunzd2sidezd2effectz00zzast_varz00(
				((BgL_sfunz00_bglt) BgL_oz00_2260));
		}

	}



/* sfun-side-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzd2sidezd2effectzd2setz12zc0zzast_varz00(BgL_sfunz00_bglt
		BgL_oz00_288, obj_t BgL_vz00_289)
	{
		{	/* Ast/var.sch 437 */
			return
				((((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt) BgL_oz00_288)))->BgL_sidezd2effectzd2) =
				((obj_t) BgL_vz00_289), BUNSPEC);
		}

	}



/* &sfun-side-effect-set! */
	obj_t BGl_z62sfunzd2sidezd2effectzd2setz12za2zzast_varz00(obj_t
		BgL_envz00_2261, obj_t BgL_oz00_2262, obj_t BgL_vz00_2263)
	{
		{	/* Ast/var.sch 437 */
			return
				BGl_sfunzd2sidezd2effectzd2setz12zc0zzast_varz00(
				((BgL_sfunz00_bglt) BgL_oz00_2262), BgL_vz00_2263);
		}

	}



/* sfun-arity */
	BGL_EXPORTED_DEF long BGl_sfunzd2arityzd2zzast_varz00(BgL_sfunz00_bglt
		BgL_oz00_290)
	{
		{	/* Ast/var.sch 438 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_290)))->BgL_arityz00);
		}

	}



/* &sfun-arity */
	obj_t BGl_z62sfunzd2arityzb0zzast_varz00(obj_t BgL_envz00_2264,
		obj_t BgL_oz00_2265)
	{
		{	/* Ast/var.sch 438 */
			return
				BINT(BGl_sfunzd2arityzd2zzast_varz00(
					((BgL_sfunz00_bglt) BgL_oz00_2265)));
		}

	}



/* make-cfun */
	BGL_EXPORTED_DEF BgL_cfunz00_bglt BGl_makezd2cfunzd2zzast_varz00(long
		BgL_arity1194z00_293, obj_t BgL_sidezd2effect1195zd2_294,
		obj_t BgL_predicatezd2of1196zd2_295, obj_t BgL_stackzd2allocator1197zd2_296,
		bool_t BgL_topzf31198zf3_297, obj_t BgL_thezd2closure1199zd2_298,
		obj_t BgL_effect1200z00_299, obj_t BgL_failsafe1201z00_300,
		obj_t BgL_argszd2noescape1202zd2_301, obj_t BgL_argszd2type1203zd2_302,
		bool_t BgL_macrozf31204zf3_303, bool_t BgL_infixzf31205zf3_304,
		obj_t BgL_method1206z00_305)
	{
		{	/* Ast/var.sch 442 */
			{	/* Ast/var.sch 442 */
				BgL_cfunz00_bglt BgL_new1192z00_3096;

				{	/* Ast/var.sch 442 */
					BgL_cfunz00_bglt BgL_new1191z00_3097;

					BgL_new1191z00_3097 =
						((BgL_cfunz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_cfunz00_bgl))));
					{	/* Ast/var.sch 442 */
						long BgL_arg1280z00_3098;

						{	/* Ast/var.sch 442 */
							long BgL_res2105z00_3099;

							BgL_res2105z00_3099 = BGL_CLASS_INDEX(BGl_cfunz00zzast_varz00);
							BgL_arg1280z00_3098 = BgL_res2105z00_3099;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1191z00_3097), BgL_arg1280z00_3098);
					}
					{	/* Ast/var.sch 442 */
						BgL_objectz00_bglt BgL_tmpz00_4144;

						BgL_tmpz00_4144 = ((BgL_objectz00_bglt) BgL_new1191z00_3097);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4144, BFALSE);
					}
					((BgL_objectz00_bglt) BgL_new1191z00_3097);
					BgL_new1192z00_3096 = BgL_new1191z00_3097;
				}
				((((BgL_funz00_bglt) COBJECT(
								((BgL_funz00_bglt) BgL_new1192z00_3096)))->BgL_arityz00) =
					((long) BgL_arity1194z00_293), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_new1192z00_3096)))->
						BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1195zd2_294), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_new1192z00_3096)))->
						BgL_predicatezd2ofzd2) =
					((obj_t) BgL_predicatezd2of1196zd2_295), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_new1192z00_3096)))->
						BgL_stackzd2allocatorzd2) =
					((obj_t) BgL_stackzd2allocator1197zd2_296), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_new1192z00_3096)))->
						BgL_topzf3zf3) = ((bool_t) BgL_topzf31198zf3_297), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_new1192z00_3096)))->
						BgL_thezd2closurezd2) =
					((obj_t) BgL_thezd2closure1199zd2_298), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_new1192z00_3096)))->
						BgL_effectz00) = ((obj_t) BgL_effect1200z00_299), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_new1192z00_3096)))->
						BgL_failsafez00) = ((obj_t) BgL_failsafe1201z00_300), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_new1192z00_3096)))->
						BgL_argszd2noescapezd2) =
					((obj_t) BgL_argszd2noescape1202zd2_301), BUNSPEC);
				((((BgL_cfunz00_bglt) COBJECT(BgL_new1192z00_3096))->
						BgL_argszd2typezd2) =
					((obj_t) BgL_argszd2type1203zd2_302), BUNSPEC);
				((((BgL_cfunz00_bglt) COBJECT(BgL_new1192z00_3096))->BgL_macrozf3zf3) =
					((bool_t) BgL_macrozf31204zf3_303), BUNSPEC);
				((((BgL_cfunz00_bglt) COBJECT(BgL_new1192z00_3096))->BgL_infixzf3zf3) =
					((bool_t) BgL_infixzf31205zf3_304), BUNSPEC);
				((((BgL_cfunz00_bglt) COBJECT(BgL_new1192z00_3096))->BgL_methodz00) =
					((obj_t) BgL_method1206z00_305), BUNSPEC);
				return BgL_new1192z00_3096;
			}
		}

	}



/* &make-cfun */
	BgL_cfunz00_bglt BGl_z62makezd2cfunzb0zzast_varz00(obj_t BgL_envz00_2266,
		obj_t BgL_arity1194z00_2267, obj_t BgL_sidezd2effect1195zd2_2268,
		obj_t BgL_predicatezd2of1196zd2_2269,
		obj_t BgL_stackzd2allocator1197zd2_2270, obj_t BgL_topzf31198zf3_2271,
		obj_t BgL_thezd2closure1199zd2_2272, obj_t BgL_effect1200z00_2273,
		obj_t BgL_failsafe1201z00_2274, obj_t BgL_argszd2noescape1202zd2_2275,
		obj_t BgL_argszd2type1203zd2_2276, obj_t BgL_macrozf31204zf3_2277,
		obj_t BgL_infixzf31205zf3_2278, obj_t BgL_method1206z00_2279)
	{
		{	/* Ast/var.sch 442 */
			return
				BGl_makezd2cfunzd2zzast_varz00(
				(long) CINT(BgL_arity1194z00_2267), BgL_sidezd2effect1195zd2_2268,
				BgL_predicatezd2of1196zd2_2269, BgL_stackzd2allocator1197zd2_2270,
				CBOOL(BgL_topzf31198zf3_2271), BgL_thezd2closure1199zd2_2272,
				BgL_effect1200z00_2273, BgL_failsafe1201z00_2274,
				BgL_argszd2noescape1202zd2_2275, BgL_argszd2type1203zd2_2276,
				CBOOL(BgL_macrozf31204zf3_2277), CBOOL(BgL_infixzf31205zf3_2278),
				BgL_method1206z00_2279);
		}

	}



/* cfun? */
	BGL_EXPORTED_DEF bool_t BGl_cfunzf3zf3zzast_varz00(obj_t BgL_objz00_306)
	{
		{	/* Ast/var.sch 443 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_306, BGl_cfunz00zzast_varz00);
		}

	}



/* &cfun? */
	obj_t BGl_z62cfunzf3z91zzast_varz00(obj_t BgL_envz00_2280,
		obj_t BgL_objz00_2281)
	{
		{	/* Ast/var.sch 443 */
			return BBOOL(BGl_cfunzf3zf3zzast_varz00(BgL_objz00_2281));
		}

	}



/* cfun-nil */
	BGL_EXPORTED_DEF BgL_cfunz00_bglt BGl_cfunzd2nilzd2zzast_varz00()
	{
		{	/* Ast/var.sch 444 */
			{	/* Ast/var.sch 444 */
				obj_t BgL_classz00_1578;

				BgL_classz00_1578 = BGl_cfunz00zzast_varz00;
				{	/* Ast/var.sch 444 */
					obj_t BgL__ortest_1106z00_1579;

					BgL__ortest_1106z00_1579 = BGL_CLASS_NIL(BgL_classz00_1578);
					if (CBOOL(BgL__ortest_1106z00_1579))
						{	/* Ast/var.sch 444 */
							return ((BgL_cfunz00_bglt) BgL__ortest_1106z00_1579);
						}
					else
						{	/* Ast/var.sch 444 */
							return
								((BgL_cfunz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_1578));
						}
				}
			}
		}

	}



/* &cfun-nil */
	BgL_cfunz00_bglt BGl_z62cfunzd2nilzb0zzast_varz00(obj_t BgL_envz00_2282)
	{
		{	/* Ast/var.sch 444 */
			return BGl_cfunzd2nilzd2zzast_varz00();
		}

	}



/* cfun-method */
	BGL_EXPORTED_DEF obj_t BGl_cfunzd2methodzd2zzast_varz00(BgL_cfunz00_bglt
		BgL_oz00_307)
	{
		{	/* Ast/var.sch 445 */
			return (((BgL_cfunz00_bglt) COBJECT(BgL_oz00_307))->BgL_methodz00);
		}

	}



/* &cfun-method */
	obj_t BGl_z62cfunzd2methodzb0zzast_varz00(obj_t BgL_envz00_2283,
		obj_t BgL_oz00_2284)
	{
		{	/* Ast/var.sch 445 */
			return
				BGl_cfunzd2methodzd2zzast_varz00(((BgL_cfunz00_bglt) BgL_oz00_2284));
		}

	}



/* cfun-method-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cfunzd2methodzd2setz12z12zzast_varz00(BgL_cfunz00_bglt BgL_oz00_308,
		obj_t BgL_vz00_309)
	{
		{	/* Ast/var.sch 446 */
			return
				((((BgL_cfunz00_bglt) COBJECT(BgL_oz00_308))->BgL_methodz00) =
				((obj_t) BgL_vz00_309), BUNSPEC);
		}

	}



/* &cfun-method-set! */
	obj_t BGl_z62cfunzd2methodzd2setz12z70zzast_varz00(obj_t BgL_envz00_2285,
		obj_t BgL_oz00_2286, obj_t BgL_vz00_2287)
	{
		{	/* Ast/var.sch 446 */
			return
				BGl_cfunzd2methodzd2setz12z12zzast_varz00(
				((BgL_cfunz00_bglt) BgL_oz00_2286), BgL_vz00_2287);
		}

	}



/* cfun-infix? */
	BGL_EXPORTED_DEF bool_t BGl_cfunzd2infixzf3z21zzast_varz00(BgL_cfunz00_bglt
		BgL_oz00_310)
	{
		{	/* Ast/var.sch 447 */
			return (((BgL_cfunz00_bglt) COBJECT(BgL_oz00_310))->BgL_infixzf3zf3);
		}

	}



/* &cfun-infix? */
	obj_t BGl_z62cfunzd2infixzf3z43zzast_varz00(obj_t BgL_envz00_2288,
		obj_t BgL_oz00_2289)
	{
		{	/* Ast/var.sch 447 */
			return
				BBOOL(BGl_cfunzd2infixzf3z21zzast_varz00(
					((BgL_cfunz00_bglt) BgL_oz00_2289)));
		}

	}



/* cfun-infix?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cfunzd2infixzf3zd2setz12ze1zzast_varz00(BgL_cfunz00_bglt BgL_oz00_311,
		bool_t BgL_vz00_312)
	{
		{	/* Ast/var.sch 448 */
			return
				((((BgL_cfunz00_bglt) COBJECT(BgL_oz00_311))->BgL_infixzf3zf3) =
				((bool_t) BgL_vz00_312), BUNSPEC);
		}

	}



/* &cfun-infix?-set! */
	obj_t BGl_z62cfunzd2infixzf3zd2setz12z83zzast_varz00(obj_t BgL_envz00_2290,
		obj_t BgL_oz00_2291, obj_t BgL_vz00_2292)
	{
		{	/* Ast/var.sch 448 */
			return
				BGl_cfunzd2infixzf3zd2setz12ze1zzast_varz00(
				((BgL_cfunz00_bglt) BgL_oz00_2291), CBOOL(BgL_vz00_2292));
		}

	}



/* cfun-macro? */
	BGL_EXPORTED_DEF bool_t BGl_cfunzd2macrozf3z21zzast_varz00(BgL_cfunz00_bglt
		BgL_oz00_313)
	{
		{	/* Ast/var.sch 449 */
			return (((BgL_cfunz00_bglt) COBJECT(BgL_oz00_313))->BgL_macrozf3zf3);
		}

	}



/* &cfun-macro? */
	obj_t BGl_z62cfunzd2macrozf3z43zzast_varz00(obj_t BgL_envz00_2293,
		obj_t BgL_oz00_2294)
	{
		{	/* Ast/var.sch 449 */
			return
				BBOOL(BGl_cfunzd2macrozf3z21zzast_varz00(
					((BgL_cfunz00_bglt) BgL_oz00_2294)));
		}

	}



/* cfun-args-type */
	BGL_EXPORTED_DEF obj_t BGl_cfunzd2argszd2typez00zzast_varz00(BgL_cfunz00_bglt
		BgL_oz00_316)
	{
		{	/* Ast/var.sch 451 */
			return (((BgL_cfunz00_bglt) COBJECT(BgL_oz00_316))->BgL_argszd2typezd2);
		}

	}



/* &cfun-args-type */
	obj_t BGl_z62cfunzd2argszd2typez62zzast_varz00(obj_t BgL_envz00_2295,
		obj_t BgL_oz00_2296)
	{
		{	/* Ast/var.sch 451 */
			return
				BGl_cfunzd2argszd2typez00zzast_varz00(
				((BgL_cfunz00_bglt) BgL_oz00_2296));
		}

	}



/* cfun-args-noescape */
	BGL_EXPORTED_DEF obj_t
		BGl_cfunzd2argszd2noescapez00zzast_varz00(BgL_cfunz00_bglt BgL_oz00_319)
	{
		{	/* Ast/var.sch 453 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_319)))->BgL_argszd2noescapezd2);
		}

	}



/* &cfun-args-noescape */
	obj_t BGl_z62cfunzd2argszd2noescapez62zzast_varz00(obj_t BgL_envz00_2297,
		obj_t BgL_oz00_2298)
	{
		{	/* Ast/var.sch 453 */
			return
				BGl_cfunzd2argszd2noescapez00zzast_varz00(
				((BgL_cfunz00_bglt) BgL_oz00_2298));
		}

	}



/* cfun-args-noescape-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cfunzd2argszd2noescapezd2setz12zc0zzast_varz00(BgL_cfunz00_bglt
		BgL_oz00_320, obj_t BgL_vz00_321)
	{
		{	/* Ast/var.sch 454 */
			return
				((((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt) BgL_oz00_320)))->BgL_argszd2noescapezd2) =
				((obj_t) BgL_vz00_321), BUNSPEC);
		}

	}



/* &cfun-args-noescape-set! */
	obj_t BGl_z62cfunzd2argszd2noescapezd2setz12za2zzast_varz00(obj_t
		BgL_envz00_2299, obj_t BgL_oz00_2300, obj_t BgL_vz00_2301)
	{
		{	/* Ast/var.sch 454 */
			return
				BGl_cfunzd2argszd2noescapezd2setz12zc0zzast_varz00(
				((BgL_cfunz00_bglt) BgL_oz00_2300), BgL_vz00_2301);
		}

	}



/* cfun-failsafe */
	BGL_EXPORTED_DEF obj_t BGl_cfunzd2failsafezd2zzast_varz00(BgL_cfunz00_bglt
		BgL_oz00_322)
	{
		{	/* Ast/var.sch 455 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_322)))->BgL_failsafez00);
		}

	}



/* &cfun-failsafe */
	obj_t BGl_z62cfunzd2failsafezb0zzast_varz00(obj_t BgL_envz00_2302,
		obj_t BgL_oz00_2303)
	{
		{	/* Ast/var.sch 455 */
			return
				BGl_cfunzd2failsafezd2zzast_varz00(((BgL_cfunz00_bglt) BgL_oz00_2303));
		}

	}



/* cfun-failsafe-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cfunzd2failsafezd2setz12z12zzast_varz00(BgL_cfunz00_bglt BgL_oz00_323,
		obj_t BgL_vz00_324)
	{
		{	/* Ast/var.sch 456 */
			return
				((((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt) BgL_oz00_323)))->BgL_failsafez00) =
				((obj_t) BgL_vz00_324), BUNSPEC);
		}

	}



/* &cfun-failsafe-set! */
	obj_t BGl_z62cfunzd2failsafezd2setz12z70zzast_varz00(obj_t BgL_envz00_2304,
		obj_t BgL_oz00_2305, obj_t BgL_vz00_2306)
	{
		{	/* Ast/var.sch 456 */
			return
				BGl_cfunzd2failsafezd2setz12z12zzast_varz00(
				((BgL_cfunz00_bglt) BgL_oz00_2305), BgL_vz00_2306);
		}

	}



/* cfun-effect */
	BGL_EXPORTED_DEF obj_t BGl_cfunzd2effectzd2zzast_varz00(BgL_cfunz00_bglt
		BgL_oz00_325)
	{
		{	/* Ast/var.sch 457 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_325)))->BgL_effectz00);
		}

	}



/* &cfun-effect */
	obj_t BGl_z62cfunzd2effectzb0zzast_varz00(obj_t BgL_envz00_2307,
		obj_t BgL_oz00_2308)
	{
		{	/* Ast/var.sch 457 */
			return
				BGl_cfunzd2effectzd2zzast_varz00(((BgL_cfunz00_bglt) BgL_oz00_2308));
		}

	}



/* cfun-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cfunzd2effectzd2setz12z12zzast_varz00(BgL_cfunz00_bglt BgL_oz00_326,
		obj_t BgL_vz00_327)
	{
		{	/* Ast/var.sch 458 */
			return
				((((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt) BgL_oz00_326)))->BgL_effectz00) =
				((obj_t) BgL_vz00_327), BUNSPEC);
		}

	}



/* &cfun-effect-set! */
	obj_t BGl_z62cfunzd2effectzd2setz12z70zzast_varz00(obj_t BgL_envz00_2309,
		obj_t BgL_oz00_2310, obj_t BgL_vz00_2311)
	{
		{	/* Ast/var.sch 458 */
			return
				BGl_cfunzd2effectzd2setz12z12zzast_varz00(
				((BgL_cfunz00_bglt) BgL_oz00_2310), BgL_vz00_2311);
		}

	}



/* cfun-the-closure */
	BGL_EXPORTED_DEF obj_t
		BGl_cfunzd2thezd2closurez00zzast_varz00(BgL_cfunz00_bglt BgL_oz00_328)
	{
		{	/* Ast/var.sch 459 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_328)))->BgL_thezd2closurezd2);
		}

	}



/* &cfun-the-closure */
	obj_t BGl_z62cfunzd2thezd2closurez62zzast_varz00(obj_t BgL_envz00_2312,
		obj_t BgL_oz00_2313)
	{
		{	/* Ast/var.sch 459 */
			return
				BGl_cfunzd2thezd2closurez00zzast_varz00(
				((BgL_cfunz00_bglt) BgL_oz00_2313));
		}

	}



/* cfun-the-closure-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cfunzd2thezd2closurezd2setz12zc0zzast_varz00(BgL_cfunz00_bglt
		BgL_oz00_329, obj_t BgL_vz00_330)
	{
		{	/* Ast/var.sch 460 */
			return
				((((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt) BgL_oz00_329)))->BgL_thezd2closurezd2) =
				((obj_t) BgL_vz00_330), BUNSPEC);
		}

	}



/* &cfun-the-closure-set! */
	obj_t BGl_z62cfunzd2thezd2closurezd2setz12za2zzast_varz00(obj_t
		BgL_envz00_2314, obj_t BgL_oz00_2315, obj_t BgL_vz00_2316)
	{
		{	/* Ast/var.sch 460 */
			return
				BGl_cfunzd2thezd2closurezd2setz12zc0zzast_varz00(
				((BgL_cfunz00_bglt) BgL_oz00_2315), BgL_vz00_2316);
		}

	}



/* cfun-top? */
	BGL_EXPORTED_DEF bool_t BGl_cfunzd2topzf3z21zzast_varz00(BgL_cfunz00_bglt
		BgL_oz00_331)
	{
		{	/* Ast/var.sch 461 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_331)))->BgL_topzf3zf3);
		}

	}



/* &cfun-top? */
	obj_t BGl_z62cfunzd2topzf3z43zzast_varz00(obj_t BgL_envz00_2317,
		obj_t BgL_oz00_2318)
	{
		{	/* Ast/var.sch 461 */
			return
				BBOOL(BGl_cfunzd2topzf3z21zzast_varz00(
					((BgL_cfunz00_bglt) BgL_oz00_2318)));
		}

	}



/* cfun-top?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cfunzd2topzf3zd2setz12ze1zzast_varz00(BgL_cfunz00_bglt BgL_oz00_332,
		bool_t BgL_vz00_333)
	{
		{	/* Ast/var.sch 462 */
			return
				((((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt) BgL_oz00_332)))->BgL_topzf3zf3) =
				((bool_t) BgL_vz00_333), BUNSPEC);
		}

	}



/* &cfun-top?-set! */
	obj_t BGl_z62cfunzd2topzf3zd2setz12z83zzast_varz00(obj_t BgL_envz00_2319,
		obj_t BgL_oz00_2320, obj_t BgL_vz00_2321)
	{
		{	/* Ast/var.sch 462 */
			return
				BGl_cfunzd2topzf3zd2setz12ze1zzast_varz00(
				((BgL_cfunz00_bglt) BgL_oz00_2320), CBOOL(BgL_vz00_2321));
		}

	}



/* cfun-stack-allocator */
	BGL_EXPORTED_DEF obj_t
		BGl_cfunzd2stackzd2allocatorz00zzast_varz00(BgL_cfunz00_bglt BgL_oz00_334)
	{
		{	/* Ast/var.sch 463 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_334)))->BgL_stackzd2allocatorzd2);
		}

	}



/* &cfun-stack-allocator */
	obj_t BGl_z62cfunzd2stackzd2allocatorz62zzast_varz00(obj_t BgL_envz00_2322,
		obj_t BgL_oz00_2323)
	{
		{	/* Ast/var.sch 463 */
			return
				BGl_cfunzd2stackzd2allocatorz00zzast_varz00(
				((BgL_cfunz00_bglt) BgL_oz00_2323));
		}

	}



/* cfun-stack-allocator-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cfunzd2stackzd2allocatorzd2setz12zc0zzast_varz00(BgL_cfunz00_bglt
		BgL_oz00_335, obj_t BgL_vz00_336)
	{
		{	/* Ast/var.sch 464 */
			return
				((((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt) BgL_oz00_335)))->BgL_stackzd2allocatorzd2) =
				((obj_t) BgL_vz00_336), BUNSPEC);
		}

	}



/* &cfun-stack-allocator-set! */
	obj_t BGl_z62cfunzd2stackzd2allocatorzd2setz12za2zzast_varz00(obj_t
		BgL_envz00_2324, obj_t BgL_oz00_2325, obj_t BgL_vz00_2326)
	{
		{	/* Ast/var.sch 464 */
			return
				BGl_cfunzd2stackzd2allocatorzd2setz12zc0zzast_varz00(
				((BgL_cfunz00_bglt) BgL_oz00_2325), BgL_vz00_2326);
		}

	}



/* cfun-predicate-of */
	BGL_EXPORTED_DEF obj_t
		BGl_cfunzd2predicatezd2ofz00zzast_varz00(BgL_cfunz00_bglt BgL_oz00_337)
	{
		{	/* Ast/var.sch 465 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_337)))->BgL_predicatezd2ofzd2);
		}

	}



/* &cfun-predicate-of */
	obj_t BGl_z62cfunzd2predicatezd2ofz62zzast_varz00(obj_t BgL_envz00_2327,
		obj_t BgL_oz00_2328)
	{
		{	/* Ast/var.sch 465 */
			return
				BGl_cfunzd2predicatezd2ofz00zzast_varz00(
				((BgL_cfunz00_bglt) BgL_oz00_2328));
		}

	}



/* cfun-predicate-of-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cfunzd2predicatezd2ofzd2setz12zc0zzast_varz00(BgL_cfunz00_bglt
		BgL_oz00_338, obj_t BgL_vz00_339)
	{
		{	/* Ast/var.sch 466 */
			return
				((((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt) BgL_oz00_338)))->BgL_predicatezd2ofzd2) =
				((obj_t) BgL_vz00_339), BUNSPEC);
		}

	}



/* &cfun-predicate-of-set! */
	obj_t BGl_z62cfunzd2predicatezd2ofzd2setz12za2zzast_varz00(obj_t
		BgL_envz00_2329, obj_t BgL_oz00_2330, obj_t BgL_vz00_2331)
	{
		{	/* Ast/var.sch 466 */
			return
				BGl_cfunzd2predicatezd2ofzd2setz12zc0zzast_varz00(
				((BgL_cfunz00_bglt) BgL_oz00_2330), BgL_vz00_2331);
		}

	}



/* cfun-side-effect */
	BGL_EXPORTED_DEF obj_t
		BGl_cfunzd2sidezd2effectz00zzast_varz00(BgL_cfunz00_bglt BgL_oz00_340)
	{
		{	/* Ast/var.sch 467 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_340)))->BgL_sidezd2effectzd2);
		}

	}



/* &cfun-side-effect */
	obj_t BGl_z62cfunzd2sidezd2effectz62zzast_varz00(obj_t BgL_envz00_2332,
		obj_t BgL_oz00_2333)
	{
		{	/* Ast/var.sch 467 */
			return
				BGl_cfunzd2sidezd2effectz00zzast_varz00(
				((BgL_cfunz00_bglt) BgL_oz00_2333));
		}

	}



/* cfun-side-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cfunzd2sidezd2effectzd2setz12zc0zzast_varz00(BgL_cfunz00_bglt
		BgL_oz00_341, obj_t BgL_vz00_342)
	{
		{	/* Ast/var.sch 468 */
			return
				((((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt) BgL_oz00_341)))->BgL_sidezd2effectzd2) =
				((obj_t) BgL_vz00_342), BUNSPEC);
		}

	}



/* &cfun-side-effect-set! */
	obj_t BGl_z62cfunzd2sidezd2effectzd2setz12za2zzast_varz00(obj_t
		BgL_envz00_2334, obj_t BgL_oz00_2335, obj_t BgL_vz00_2336)
	{
		{	/* Ast/var.sch 468 */
			return
				BGl_cfunzd2sidezd2effectzd2setz12zc0zzast_varz00(
				((BgL_cfunz00_bglt) BgL_oz00_2335), BgL_vz00_2336);
		}

	}



/* cfun-arity */
	BGL_EXPORTED_DEF long BGl_cfunzd2arityzd2zzast_varz00(BgL_cfunz00_bglt
		BgL_oz00_343)
	{
		{	/* Ast/var.sch 469 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_343)))->BgL_arityz00);
		}

	}



/* &cfun-arity */
	obj_t BGl_z62cfunzd2arityzb0zzast_varz00(obj_t BgL_envz00_2337,
		obj_t BgL_oz00_2338)
	{
		{	/* Ast/var.sch 469 */
			return
				BINT(BGl_cfunzd2arityzd2zzast_varz00(
					((BgL_cfunz00_bglt) BgL_oz00_2338)));
		}

	}



/* make-svar */
	BGL_EXPORTED_DEF BgL_svarz00_bglt BGl_makezd2svarzd2zzast_varz00(obj_t
		BgL_loc1192z00_346)
	{
		{	/* Ast/var.sch 473 */
			{	/* Ast/var.sch 473 */
				BgL_svarz00_bglt BgL_new1194z00_3100;

				{	/* Ast/var.sch 473 */
					BgL_svarz00_bglt BgL_new1193z00_3101;

					BgL_new1193z00_3101 =
						((BgL_svarz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_svarz00_bgl))));
					{	/* Ast/var.sch 473 */
						long BgL_arg1281z00_3102;

						{	/* Ast/var.sch 473 */
							long BgL_res2106z00_3103;

							BgL_res2106z00_3103 = BGL_CLASS_INDEX(BGl_svarz00zzast_varz00);
							BgL_arg1281z00_3102 = BgL_res2106z00_3103;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1193z00_3101), BgL_arg1281z00_3102);
					}
					{	/* Ast/var.sch 473 */
						BgL_objectz00_bglt BgL_tmpz00_4281;

						BgL_tmpz00_4281 = ((BgL_objectz00_bglt) BgL_new1193z00_3101);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4281, BFALSE);
					}
					((BgL_objectz00_bglt) BgL_new1193z00_3101);
					BgL_new1194z00_3100 = BgL_new1193z00_3101;
				}
				((((BgL_svarz00_bglt) COBJECT(BgL_new1194z00_3100))->BgL_locz00) =
					((obj_t) BgL_loc1192z00_346), BUNSPEC);
				return BgL_new1194z00_3100;
			}
		}

	}



/* &make-svar */
	BgL_svarz00_bglt BGl_z62makezd2svarzb0zzast_varz00(obj_t BgL_envz00_2339,
		obj_t BgL_loc1192z00_2340)
	{
		{	/* Ast/var.sch 473 */
			return BGl_makezd2svarzd2zzast_varz00(BgL_loc1192z00_2340);
		}

	}



/* svar? */
	BGL_EXPORTED_DEF bool_t BGl_svarzf3zf3zzast_varz00(obj_t BgL_objz00_347)
	{
		{	/* Ast/var.sch 474 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_347, BGl_svarz00zzast_varz00);
		}

	}



/* &svar? */
	obj_t BGl_z62svarzf3z91zzast_varz00(obj_t BgL_envz00_2341,
		obj_t BgL_objz00_2342)
	{
		{	/* Ast/var.sch 474 */
			return BBOOL(BGl_svarzf3zf3zzast_varz00(BgL_objz00_2342));
		}

	}



/* svar-nil */
	BGL_EXPORTED_DEF BgL_svarz00_bglt BGl_svarzd2nilzd2zzast_varz00()
	{
		{	/* Ast/var.sch 475 */
			{	/* Ast/var.sch 475 */
				obj_t BgL_classz00_1588;

				BgL_classz00_1588 = BGl_svarz00zzast_varz00;
				{	/* Ast/var.sch 475 */
					obj_t BgL__ortest_1106z00_1589;

					BgL__ortest_1106z00_1589 = BGL_CLASS_NIL(BgL_classz00_1588);
					if (CBOOL(BgL__ortest_1106z00_1589))
						{	/* Ast/var.sch 475 */
							return ((BgL_svarz00_bglt) BgL__ortest_1106z00_1589);
						}
					else
						{	/* Ast/var.sch 475 */
							return
								((BgL_svarz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_1588));
						}
				}
			}
		}

	}



/* &svar-nil */
	BgL_svarz00_bglt BGl_z62svarzd2nilzb0zzast_varz00(obj_t BgL_envz00_2343)
	{
		{	/* Ast/var.sch 475 */
			return BGl_svarzd2nilzd2zzast_varz00();
		}

	}



/* svar-loc */
	BGL_EXPORTED_DEF obj_t BGl_svarzd2loczd2zzast_varz00(BgL_svarz00_bglt
		BgL_oz00_348)
	{
		{	/* Ast/var.sch 476 */
			return (((BgL_svarz00_bglt) COBJECT(BgL_oz00_348))->BgL_locz00);
		}

	}



/* &svar-loc */
	obj_t BGl_z62svarzd2loczb0zzast_varz00(obj_t BgL_envz00_2344,
		obj_t BgL_oz00_2345)
	{
		{	/* Ast/var.sch 476 */
			return BGl_svarzd2loczd2zzast_varz00(((BgL_svarz00_bglt) BgL_oz00_2345));
		}

	}



/* svar-loc-set! */
	BGL_EXPORTED_DEF obj_t BGl_svarzd2loczd2setz12z12zzast_varz00(BgL_svarz00_bglt
		BgL_oz00_349, obj_t BgL_vz00_350)
	{
		{	/* Ast/var.sch 477 */
			return
				((((BgL_svarz00_bglt) COBJECT(BgL_oz00_349))->BgL_locz00) =
				((obj_t) BgL_vz00_350), BUNSPEC);
		}

	}



/* &svar-loc-set! */
	obj_t BGl_z62svarzd2loczd2setz12z70zzast_varz00(obj_t BgL_envz00_2346,
		obj_t BgL_oz00_2347, obj_t BgL_vz00_2348)
	{
		{	/* Ast/var.sch 477 */
			return
				BGl_svarzd2loczd2setz12z12zzast_varz00(
				((BgL_svarz00_bglt) BgL_oz00_2347), BgL_vz00_2348);
		}

	}



/* make-scnst */
	BGL_EXPORTED_DEF BgL_scnstz00_bglt BGl_makezd2scnstzd2zzast_varz00(obj_t
		BgL_node1187z00_351, obj_t BgL_class1188z00_352, obj_t BgL_loc1190z00_353)
	{
		{	/* Ast/var.sch 480 */
			{	/* Ast/var.sch 480 */
				BgL_scnstz00_bglt BgL_new1196z00_3104;

				{	/* Ast/var.sch 480 */
					BgL_scnstz00_bglt BgL_new1195z00_3105;

					BgL_new1195z00_3105 =
						((BgL_scnstz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_scnstz00_bgl))));
					{	/* Ast/var.sch 480 */
						long BgL_arg1282z00_3106;

						{	/* Ast/var.sch 480 */
							long BgL_res2107z00_3107;

							BgL_res2107z00_3107 = BGL_CLASS_INDEX(BGl_scnstz00zzast_varz00);
							BgL_arg1282z00_3106 = BgL_res2107z00_3107;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1195z00_3105), BgL_arg1282z00_3106);
					}
					{	/* Ast/var.sch 480 */
						BgL_objectz00_bglt BgL_tmpz00_4307;

						BgL_tmpz00_4307 = ((BgL_objectz00_bglt) BgL_new1195z00_3105);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4307, BFALSE);
					}
					((BgL_objectz00_bglt) BgL_new1195z00_3105);
					BgL_new1196z00_3104 = BgL_new1195z00_3105;
				}
				((((BgL_scnstz00_bglt) COBJECT(BgL_new1196z00_3104))->BgL_nodez00) =
					((obj_t) BgL_node1187z00_351), BUNSPEC);
				((((BgL_scnstz00_bglt) COBJECT(BgL_new1196z00_3104))->BgL_classz00) =
					((obj_t) BgL_class1188z00_352), BUNSPEC);
				((((BgL_scnstz00_bglt) COBJECT(BgL_new1196z00_3104))->BgL_locz00) =
					((obj_t) BgL_loc1190z00_353), BUNSPEC);
				return BgL_new1196z00_3104;
			}
		}

	}



/* &make-scnst */
	BgL_scnstz00_bglt BGl_z62makezd2scnstzb0zzast_varz00(obj_t BgL_envz00_2349,
		obj_t BgL_node1187z00_2350, obj_t BgL_class1188z00_2351,
		obj_t BgL_loc1190z00_2352)
	{
		{	/* Ast/var.sch 480 */
			return
				BGl_makezd2scnstzd2zzast_varz00(BgL_node1187z00_2350,
				BgL_class1188z00_2351, BgL_loc1190z00_2352);
		}

	}



/* scnst? */
	BGL_EXPORTED_DEF bool_t BGl_scnstzf3zf3zzast_varz00(obj_t BgL_objz00_354)
	{
		{	/* Ast/var.sch 481 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_354, BGl_scnstz00zzast_varz00);
		}

	}



/* &scnst? */
	obj_t BGl_z62scnstzf3z91zzast_varz00(obj_t BgL_envz00_2353,
		obj_t BgL_objz00_2354)
	{
		{	/* Ast/var.sch 481 */
			return BBOOL(BGl_scnstzf3zf3zzast_varz00(BgL_objz00_2354));
		}

	}



/* scnst-nil */
	BGL_EXPORTED_DEF BgL_scnstz00_bglt BGl_scnstzd2nilzd2zzast_varz00()
	{
		{	/* Ast/var.sch 482 */
			{	/* Ast/var.sch 482 */
				obj_t BgL_classz00_1598;

				BgL_classz00_1598 = BGl_scnstz00zzast_varz00;
				{	/* Ast/var.sch 482 */
					obj_t BgL__ortest_1106z00_1599;

					BgL__ortest_1106z00_1599 = BGL_CLASS_NIL(BgL_classz00_1598);
					if (CBOOL(BgL__ortest_1106z00_1599))
						{	/* Ast/var.sch 482 */
							return ((BgL_scnstz00_bglt) BgL__ortest_1106z00_1599);
						}
					else
						{	/* Ast/var.sch 482 */
							return
								((BgL_scnstz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_1598));
						}
				}
			}
		}

	}



/* &scnst-nil */
	BgL_scnstz00_bglt BGl_z62scnstzd2nilzb0zzast_varz00(obj_t BgL_envz00_2355)
	{
		{	/* Ast/var.sch 482 */
			return BGl_scnstzd2nilzd2zzast_varz00();
		}

	}



/* scnst-loc */
	BGL_EXPORTED_DEF obj_t BGl_scnstzd2loczd2zzast_varz00(BgL_scnstz00_bglt
		BgL_oz00_355)
	{
		{	/* Ast/var.sch 483 */
			return (((BgL_scnstz00_bglt) COBJECT(BgL_oz00_355))->BgL_locz00);
		}

	}



/* &scnst-loc */
	obj_t BGl_z62scnstzd2loczb0zzast_varz00(obj_t BgL_envz00_2356,
		obj_t BgL_oz00_2357)
	{
		{	/* Ast/var.sch 483 */
			return
				BGl_scnstzd2loczd2zzast_varz00(((BgL_scnstz00_bglt) BgL_oz00_2357));
		}

	}



/* scnst-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_scnstzd2loczd2setz12z12zzast_varz00(BgL_scnstz00_bglt BgL_oz00_356,
		obj_t BgL_vz00_357)
	{
		{	/* Ast/var.sch 484 */
			return
				((((BgL_scnstz00_bglt) COBJECT(BgL_oz00_356))->BgL_locz00) =
				((obj_t) BgL_vz00_357), BUNSPEC);
		}

	}



/* &scnst-loc-set! */
	obj_t BGl_z62scnstzd2loczd2setz12z70zzast_varz00(obj_t BgL_envz00_2358,
		obj_t BgL_oz00_2359, obj_t BgL_vz00_2360)
	{
		{	/* Ast/var.sch 484 */
			return
				BGl_scnstzd2loczd2setz12z12zzast_varz00(
				((BgL_scnstz00_bglt) BgL_oz00_2359), BgL_vz00_2360);
		}

	}



/* scnst-class */
	BGL_EXPORTED_DEF obj_t BGl_scnstzd2classzd2zzast_varz00(BgL_scnstz00_bglt
		BgL_oz00_358)
	{
		{	/* Ast/var.sch 485 */
			return (((BgL_scnstz00_bglt) COBJECT(BgL_oz00_358))->BgL_classz00);
		}

	}



/* &scnst-class */
	obj_t BGl_z62scnstzd2classzb0zzast_varz00(obj_t BgL_envz00_2361,
		obj_t BgL_oz00_2362)
	{
		{	/* Ast/var.sch 485 */
			return
				BGl_scnstzd2classzd2zzast_varz00(((BgL_scnstz00_bglt) BgL_oz00_2362));
		}

	}



/* scnst-class-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_scnstzd2classzd2setz12z12zzast_varz00(BgL_scnstz00_bglt BgL_oz00_359,
		obj_t BgL_vz00_360)
	{
		{	/* Ast/var.sch 486 */
			return
				((((BgL_scnstz00_bglt) COBJECT(BgL_oz00_359))->BgL_classz00) =
				((obj_t) BgL_vz00_360), BUNSPEC);
		}

	}



/* &scnst-class-set! */
	obj_t BGl_z62scnstzd2classzd2setz12z70zzast_varz00(obj_t BgL_envz00_2363,
		obj_t BgL_oz00_2364, obj_t BgL_vz00_2365)
	{
		{	/* Ast/var.sch 486 */
			return
				BGl_scnstzd2classzd2setz12z12zzast_varz00(
				((BgL_scnstz00_bglt) BgL_oz00_2364), BgL_vz00_2365);
		}

	}



/* scnst-node */
	BGL_EXPORTED_DEF obj_t BGl_scnstzd2nodezd2zzast_varz00(BgL_scnstz00_bglt
		BgL_oz00_361)
	{
		{	/* Ast/var.sch 487 */
			return (((BgL_scnstz00_bglt) COBJECT(BgL_oz00_361))->BgL_nodez00);
		}

	}



/* &scnst-node */
	obj_t BGl_z62scnstzd2nodezb0zzast_varz00(obj_t BgL_envz00_2366,
		obj_t BgL_oz00_2367)
	{
		{	/* Ast/var.sch 487 */
			return
				BGl_scnstzd2nodezd2zzast_varz00(((BgL_scnstz00_bglt) BgL_oz00_2367));
		}

	}



/* make-cvar */
	BGL_EXPORTED_DEF BgL_cvarz00_bglt BGl_makezd2cvarzd2zzast_varz00(bool_t
		BgL_macrozf31185zf3_364)
	{
		{	/* Ast/var.sch 491 */
			{	/* Ast/var.sch 491 */
				BgL_cvarz00_bglt BgL_new1198z00_3108;

				{	/* Ast/var.sch 491 */
					BgL_cvarz00_bglt BgL_new1197z00_3109;

					BgL_new1197z00_3109 =
						((BgL_cvarz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_cvarz00_bgl))));
					{	/* Ast/var.sch 491 */
						long BgL_arg1284z00_3110;

						{	/* Ast/var.sch 491 */
							long BgL_res2108z00_3111;

							BgL_res2108z00_3111 = BGL_CLASS_INDEX(BGl_cvarz00zzast_varz00);
							BgL_arg1284z00_3110 = BgL_res2108z00_3111;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1197z00_3109), BgL_arg1284z00_3110);
					}
					{	/* Ast/var.sch 491 */
						BgL_objectz00_bglt BgL_tmpz00_4344;

						BgL_tmpz00_4344 = ((BgL_objectz00_bglt) BgL_new1197z00_3109);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4344, BFALSE);
					}
					((BgL_objectz00_bglt) BgL_new1197z00_3109);
					BgL_new1198z00_3108 = BgL_new1197z00_3109;
				}
				((((BgL_cvarz00_bglt) COBJECT(BgL_new1198z00_3108))->BgL_macrozf3zf3) =
					((bool_t) BgL_macrozf31185zf3_364), BUNSPEC);
				return BgL_new1198z00_3108;
			}
		}

	}



/* &make-cvar */
	BgL_cvarz00_bglt BGl_z62makezd2cvarzb0zzast_varz00(obj_t BgL_envz00_2368,
		obj_t BgL_macrozf31185zf3_2369)
	{
		{	/* Ast/var.sch 491 */
			return BGl_makezd2cvarzd2zzast_varz00(CBOOL(BgL_macrozf31185zf3_2369));
		}

	}



/* cvar? */
	BGL_EXPORTED_DEF bool_t BGl_cvarzf3zf3zzast_varz00(obj_t BgL_objz00_365)
	{
		{	/* Ast/var.sch 492 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_365, BGl_cvarz00zzast_varz00);
		}

	}



/* &cvar? */
	obj_t BGl_z62cvarzf3z91zzast_varz00(obj_t BgL_envz00_2370,
		obj_t BgL_objz00_2371)
	{
		{	/* Ast/var.sch 492 */
			return BBOOL(BGl_cvarzf3zf3zzast_varz00(BgL_objz00_2371));
		}

	}



/* cvar-nil */
	BGL_EXPORTED_DEF BgL_cvarz00_bglt BGl_cvarzd2nilzd2zzast_varz00()
	{
		{	/* Ast/var.sch 493 */
			{	/* Ast/var.sch 493 */
				obj_t BgL_classz00_1608;

				BgL_classz00_1608 = BGl_cvarz00zzast_varz00;
				{	/* Ast/var.sch 493 */
					obj_t BgL__ortest_1106z00_1609;

					BgL__ortest_1106z00_1609 = BGL_CLASS_NIL(BgL_classz00_1608);
					if (CBOOL(BgL__ortest_1106z00_1609))
						{	/* Ast/var.sch 493 */
							return ((BgL_cvarz00_bglt) BgL__ortest_1106z00_1609);
						}
					else
						{	/* Ast/var.sch 493 */
							return
								((BgL_cvarz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_1608));
						}
				}
			}
		}

	}



/* &cvar-nil */
	BgL_cvarz00_bglt BGl_z62cvarzd2nilzb0zzast_varz00(obj_t BgL_envz00_2372)
	{
		{	/* Ast/var.sch 493 */
			return BGl_cvarzd2nilzd2zzast_varz00();
		}

	}



/* cvar-macro? */
	BGL_EXPORTED_DEF bool_t BGl_cvarzd2macrozf3z21zzast_varz00(BgL_cvarz00_bglt
		BgL_oz00_366)
	{
		{	/* Ast/var.sch 494 */
			return (((BgL_cvarz00_bglt) COBJECT(BgL_oz00_366))->BgL_macrozf3zf3);
		}

	}



/* &cvar-macro? */
	obj_t BGl_z62cvarzd2macrozf3z43zzast_varz00(obj_t BgL_envz00_2373,
		obj_t BgL_oz00_2374)
	{
		{	/* Ast/var.sch 494 */
			return
				BBOOL(BGl_cvarzd2macrozf3z21zzast_varz00(
					((BgL_cvarz00_bglt) BgL_oz00_2374)));
		}

	}



/* make-sexit */
	BGL_EXPORTED_DEF BgL_sexitz00_bglt BGl_makezd2sexitzd2zzast_varz00(obj_t
		BgL_handler1181z00_369, bool_t BgL_detachedzf31182zf3_370)
	{
		{	/* Ast/var.sch 498 */
			{	/* Ast/var.sch 498 */
				BgL_sexitz00_bglt BgL_new1200z00_3112;

				{	/* Ast/var.sch 498 */
					BgL_sexitz00_bglt BgL_new1199z00_3113;

					BgL_new1199z00_3113 =
						((BgL_sexitz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_sexitz00_bgl))));
					{	/* Ast/var.sch 498 */
						long BgL_arg1285z00_3114;

						{	/* Ast/var.sch 498 */
							long BgL_res2109z00_3115;

							BgL_res2109z00_3115 = BGL_CLASS_INDEX(BGl_sexitz00zzast_varz00);
							BgL_arg1285z00_3114 = BgL_res2109z00_3115;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1199z00_3113), BgL_arg1285z00_3114);
					}
					{	/* Ast/var.sch 498 */
						BgL_objectz00_bglt BgL_tmpz00_4369;

						BgL_tmpz00_4369 = ((BgL_objectz00_bglt) BgL_new1199z00_3113);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4369, BFALSE);
					}
					((BgL_objectz00_bglt) BgL_new1199z00_3113);
					BgL_new1200z00_3112 = BgL_new1199z00_3113;
				}
				((((BgL_sexitz00_bglt) COBJECT(BgL_new1200z00_3112))->BgL_handlerz00) =
					((obj_t) BgL_handler1181z00_369), BUNSPEC);
				((((BgL_sexitz00_bglt) COBJECT(BgL_new1200z00_3112))->
						BgL_detachedzf3zf3) =
					((bool_t) BgL_detachedzf31182zf3_370), BUNSPEC);
				return BgL_new1200z00_3112;
			}
		}

	}



/* &make-sexit */
	BgL_sexitz00_bglt BGl_z62makezd2sexitzb0zzast_varz00(obj_t BgL_envz00_2375,
		obj_t BgL_handler1181z00_2376, obj_t BgL_detachedzf31182zf3_2377)
	{
		{	/* Ast/var.sch 498 */
			return
				BGl_makezd2sexitzd2zzast_varz00(BgL_handler1181z00_2376,
				CBOOL(BgL_detachedzf31182zf3_2377));
		}

	}



/* sexit? */
	BGL_EXPORTED_DEF bool_t BGl_sexitzf3zf3zzast_varz00(obj_t BgL_objz00_371)
	{
		{	/* Ast/var.sch 499 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_371, BGl_sexitz00zzast_varz00);
		}

	}



/* &sexit? */
	obj_t BGl_z62sexitzf3z91zzast_varz00(obj_t BgL_envz00_2378,
		obj_t BgL_objz00_2379)
	{
		{	/* Ast/var.sch 499 */
			return BBOOL(BGl_sexitzf3zf3zzast_varz00(BgL_objz00_2379));
		}

	}



/* sexit-nil */
	BGL_EXPORTED_DEF BgL_sexitz00_bglt BGl_sexitzd2nilzd2zzast_varz00()
	{
		{	/* Ast/var.sch 500 */
			{	/* Ast/var.sch 500 */
				obj_t BgL_classz00_1618;

				BgL_classz00_1618 = BGl_sexitz00zzast_varz00;
				{	/* Ast/var.sch 500 */
					obj_t BgL__ortest_1106z00_1619;

					BgL__ortest_1106z00_1619 = BGL_CLASS_NIL(BgL_classz00_1618);
					if (CBOOL(BgL__ortest_1106z00_1619))
						{	/* Ast/var.sch 500 */
							return ((BgL_sexitz00_bglt) BgL__ortest_1106z00_1619);
						}
					else
						{	/* Ast/var.sch 500 */
							return
								((BgL_sexitz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_1618));
						}
				}
			}
		}

	}



/* &sexit-nil */
	BgL_sexitz00_bglt BGl_z62sexitzd2nilzb0zzast_varz00(obj_t BgL_envz00_2380)
	{
		{	/* Ast/var.sch 500 */
			return BGl_sexitzd2nilzd2zzast_varz00();
		}

	}



/* sexit-detached? */
	BGL_EXPORTED_DEF bool_t
		BGl_sexitzd2detachedzf3z21zzast_varz00(BgL_sexitz00_bglt BgL_oz00_372)
	{
		{	/* Ast/var.sch 501 */
			return (((BgL_sexitz00_bglt) COBJECT(BgL_oz00_372))->BgL_detachedzf3zf3);
		}

	}



/* &sexit-detached? */
	obj_t BGl_z62sexitzd2detachedzf3z43zzast_varz00(obj_t BgL_envz00_2381,
		obj_t BgL_oz00_2382)
	{
		{	/* Ast/var.sch 501 */
			return
				BBOOL(BGl_sexitzd2detachedzf3z21zzast_varz00(
					((BgL_sexitz00_bglt) BgL_oz00_2382)));
		}

	}



/* sexit-detached?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sexitzd2detachedzf3zd2setz12ze1zzast_varz00(BgL_sexitz00_bglt
		BgL_oz00_373, bool_t BgL_vz00_374)
	{
		{	/* Ast/var.sch 502 */
			return
				((((BgL_sexitz00_bglt) COBJECT(BgL_oz00_373))->BgL_detachedzf3zf3) =
				((bool_t) BgL_vz00_374), BUNSPEC);
		}

	}



/* &sexit-detached?-set! */
	obj_t BGl_z62sexitzd2detachedzf3zd2setz12z83zzast_varz00(obj_t
		BgL_envz00_2383, obj_t BgL_oz00_2384, obj_t BgL_vz00_2385)
	{
		{	/* Ast/var.sch 502 */
			return
				BGl_sexitzd2detachedzf3zd2setz12ze1zzast_varz00(
				((BgL_sexitz00_bglt) BgL_oz00_2384), CBOOL(BgL_vz00_2385));
		}

	}



/* sexit-handler */
	BGL_EXPORTED_DEF obj_t BGl_sexitzd2handlerzd2zzast_varz00(BgL_sexitz00_bglt
		BgL_oz00_375)
	{
		{	/* Ast/var.sch 503 */
			return (((BgL_sexitz00_bglt) COBJECT(BgL_oz00_375))->BgL_handlerz00);
		}

	}



/* &sexit-handler */
	obj_t BGl_z62sexitzd2handlerzb0zzast_varz00(obj_t BgL_envz00_2386,
		obj_t BgL_oz00_2387)
	{
		{	/* Ast/var.sch 503 */
			return
				BGl_sexitzd2handlerzd2zzast_varz00(((BgL_sexitz00_bglt) BgL_oz00_2387));
		}

	}



/* sexit-handler-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sexitzd2handlerzd2setz12z12zzast_varz00(BgL_sexitz00_bglt BgL_oz00_376,
		obj_t BgL_vz00_377)
	{
		{	/* Ast/var.sch 504 */
			return
				((((BgL_sexitz00_bglt) COBJECT(BgL_oz00_376))->BgL_handlerz00) =
				((obj_t) BgL_vz00_377), BUNSPEC);
		}

	}



/* &sexit-handler-set! */
	obj_t BGl_z62sexitzd2handlerzd2setz12z70zzast_varz00(obj_t BgL_envz00_2388,
		obj_t BgL_oz00_2389, obj_t BgL_vz00_2390)
	{
		{	/* Ast/var.sch 504 */
			return
				BGl_sexitzd2handlerzd2setz12z12zzast_varz00(
				((BgL_sexitz00_bglt) BgL_oz00_2389), BgL_vz00_2390);
		}

	}



/* make-feffect */
	BGL_EXPORTED_DEF BgL_feffectz00_bglt BGl_makezd2feffectzd2zzast_varz00(obj_t
		BgL_read1178z00_378, obj_t BgL_write1179z00_379)
	{
		{	/* Ast/var.sch 507 */
			{	/* Ast/var.sch 507 */
				BgL_feffectz00_bglt BgL_new1202z00_3116;

				{	/* Ast/var.sch 507 */
					BgL_feffectz00_bglt BgL_new1201z00_3117;

					BgL_new1201z00_3117 =
						((BgL_feffectz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_feffectz00_bgl))));
					{	/* Ast/var.sch 507 */
						long BgL_arg1286z00_3118;

						{	/* Ast/var.sch 507 */
							long BgL_res2110z00_3119;

							BgL_res2110z00_3119 = BGL_CLASS_INDEX(BGl_feffectz00zzast_varz00);
							BgL_arg1286z00_3118 = BgL_res2110z00_3119;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1201z00_3117), BgL_arg1286z00_3118);
					}
					BgL_new1202z00_3116 = BgL_new1201z00_3117;
				}
				((((BgL_feffectz00_bglt) COBJECT(BgL_new1202z00_3116))->BgL_readz00) =
					((obj_t) BgL_read1178z00_378), BUNSPEC);
				((((BgL_feffectz00_bglt) COBJECT(BgL_new1202z00_3116))->BgL_writez00) =
					((obj_t) BgL_write1179z00_379), BUNSPEC);
				return BgL_new1202z00_3116;
			}
		}

	}



/* &make-feffect */
	BgL_feffectz00_bglt BGl_z62makezd2feffectzb0zzast_varz00(obj_t
		BgL_envz00_2391, obj_t BgL_read1178z00_2392, obj_t BgL_write1179z00_2393)
	{
		{	/* Ast/var.sch 507 */
			return
				BGl_makezd2feffectzd2zzast_varz00(BgL_read1178z00_2392,
				BgL_write1179z00_2393);
		}

	}



/* feffect? */
	BGL_EXPORTED_DEF bool_t BGl_feffectzf3zf3zzast_varz00(obj_t BgL_objz00_380)
	{
		{	/* Ast/var.sch 508 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_380, BGl_feffectz00zzast_varz00);
		}

	}



/* &feffect? */
	obj_t BGl_z62feffectzf3z91zzast_varz00(obj_t BgL_envz00_2394,
		obj_t BgL_objz00_2395)
	{
		{	/* Ast/var.sch 508 */
			return BBOOL(BGl_feffectzf3zf3zzast_varz00(BgL_objz00_2395));
		}

	}



/* feffect-nil */
	BGL_EXPORTED_DEF BgL_feffectz00_bglt BGl_feffectzd2nilzd2zzast_varz00()
	{
		{	/* Ast/var.sch 509 */
			{	/* Ast/var.sch 509 */
				obj_t BgL_classz00_1627;

				BgL_classz00_1627 = BGl_feffectz00zzast_varz00;
				{	/* Ast/var.sch 509 */
					obj_t BgL__ortest_1106z00_1628;

					BgL__ortest_1106z00_1628 = BGL_CLASS_NIL(BgL_classz00_1627);
					if (CBOOL(BgL__ortest_1106z00_1628))
						{	/* Ast/var.sch 509 */
							return ((BgL_feffectz00_bglt) BgL__ortest_1106z00_1628);
						}
					else
						{	/* Ast/var.sch 509 */
							return
								((BgL_feffectz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_1627));
						}
				}
			}
		}

	}



/* &feffect-nil */
	BgL_feffectz00_bglt BGl_z62feffectzd2nilzb0zzast_varz00(obj_t BgL_envz00_2396)
	{
		{	/* Ast/var.sch 509 */
			return BGl_feffectzd2nilzd2zzast_varz00();
		}

	}



/* feffect-write */
	BGL_EXPORTED_DEF obj_t BGl_feffectzd2writezd2zzast_varz00(BgL_feffectz00_bglt
		BgL_oz00_381)
	{
		{	/* Ast/var.sch 510 */
			return (((BgL_feffectz00_bglt) COBJECT(BgL_oz00_381))->BgL_writez00);
		}

	}



/* &feffect-write */
	obj_t BGl_z62feffectzd2writezb0zzast_varz00(obj_t BgL_envz00_2397,
		obj_t BgL_oz00_2398)
	{
		{	/* Ast/var.sch 510 */
			return
				BGl_feffectzd2writezd2zzast_varz00(
				((BgL_feffectz00_bglt) BgL_oz00_2398));
		}

	}



/* feffect-write-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_feffectzd2writezd2setz12z12zzast_varz00(BgL_feffectz00_bglt
		BgL_oz00_382, obj_t BgL_vz00_383)
	{
		{	/* Ast/var.sch 511 */
			return
				((((BgL_feffectz00_bglt) COBJECT(BgL_oz00_382))->BgL_writez00) =
				((obj_t) BgL_vz00_383), BUNSPEC);
		}

	}



/* &feffect-write-set! */
	obj_t BGl_z62feffectzd2writezd2setz12z70zzast_varz00(obj_t BgL_envz00_2399,
		obj_t BgL_oz00_2400, obj_t BgL_vz00_2401)
	{
		{	/* Ast/var.sch 511 */
			return
				BGl_feffectzd2writezd2setz12z12zzast_varz00(
				((BgL_feffectz00_bglt) BgL_oz00_2400), BgL_vz00_2401);
		}

	}



/* feffect-read */
	BGL_EXPORTED_DEF obj_t BGl_feffectzd2readzd2zzast_varz00(BgL_feffectz00_bglt
		BgL_oz00_384)
	{
		{	/* Ast/var.sch 512 */
			return (((BgL_feffectz00_bglt) COBJECT(BgL_oz00_384))->BgL_readz00);
		}

	}



/* &feffect-read */
	obj_t BGl_z62feffectzd2readzb0zzast_varz00(obj_t BgL_envz00_2402,
		obj_t BgL_oz00_2403)
	{
		{	/* Ast/var.sch 512 */
			return
				BGl_feffectzd2readzd2zzast_varz00(
				((BgL_feffectz00_bglt) BgL_oz00_2403));
		}

	}



/* feffect-read-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_feffectzd2readzd2setz12z12zzast_varz00(BgL_feffectz00_bglt BgL_oz00_385,
		obj_t BgL_vz00_386)
	{
		{	/* Ast/var.sch 513 */
			return
				((((BgL_feffectz00_bglt) COBJECT(BgL_oz00_385))->BgL_readz00) =
				((obj_t) BgL_vz00_386), BUNSPEC);
		}

	}



/* &feffect-read-set! */
	obj_t BGl_z62feffectzd2readzd2setz12z70zzast_varz00(obj_t BgL_envz00_2404,
		obj_t BgL_oz00_2405, obj_t BgL_vz00_2406)
	{
		{	/* Ast/var.sch 513 */
			return
				BGl_feffectzd2readzd2setz12z12zzast_varz00(
				((BgL_feffectz00_bglt) BgL_oz00_2405), BgL_vz00_2406);
		}

	}



/* global-read-only? */
	BGL_EXPORTED_DEF bool_t
		BGl_globalzd2readzd2onlyzf3zf3zzast_varz00(BgL_globalz00_bglt
		BgL_globalz00_387)
	{
		{	/* Ast/var.scm 185 */
			{	/* Ast/var.scm 187 */
				obj_t BgL_tmpz00_4430;

				BgL_tmpz00_4430 =
					BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CNST_TABLE_REF(((long) 0)),
					(((BgL_globalz00_bglt) COBJECT(BgL_globalz00_387))->BgL_pragmaz00));
				return PAIRP(BgL_tmpz00_4430);
			}
		}

	}



/* &global-read-only? */
	obj_t BGl_z62globalzd2readzd2onlyzf3z91zzast_varz00(obj_t BgL_envz00_2407,
		obj_t BgL_globalz00_2408)
	{
		{	/* Ast/var.scm 185 */
			return
				BBOOL(BGl_globalzd2readzd2onlyzf3zf3zzast_varz00(
					((BgL_globalz00_bglt) BgL_globalz00_2408)));
		}

	}



/* global-set-read-only! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzd2setzd2readzd2onlyz12zc0zzast_varz00(BgL_globalz00_bglt
		BgL_globalz00_388)
	{
		{	/* Ast/var.scm 192 */
			{
				obj_t BgL_auxz00_4438;

				{	/* Ast/var.scm 194 */
					obj_t BgL_arg1289z00_502;

					BgL_arg1289z00_502 =
						(((BgL_globalz00_bglt) COBJECT(BgL_globalz00_388))->BgL_pragmaz00);
					BgL_auxz00_4438 =
						MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)), BgL_arg1289z00_502);
				}
				return
					((((BgL_globalz00_bglt) COBJECT(BgL_globalz00_388))->BgL_pragmaz00) =
					((obj_t) BgL_auxz00_4438), BUNSPEC);
			}
		}

	}



/* &global-set-read-only! */
	obj_t BGl_z62globalzd2setzd2readzd2onlyz12za2zzast_varz00(obj_t
		BgL_envz00_2409, obj_t BgL_globalz00_2410)
	{
		{	/* Ast/var.scm 192 */
			return
				BGl_globalzd2setzd2readzd2onlyz12zc0zzast_varz00(
				((BgL_globalz00_bglt) BgL_globalz00_2410));
		}

	}



/* global-args-safe? */
	BGL_EXPORTED_DEF bool_t
		BGl_globalzd2argszd2safezf3zf3zzast_varz00(BgL_globalz00_bglt
		BgL_globalz00_389)
	{
		{	/* Ast/var.scm 199 */
			{	/* Ast/var.scm 201 */
				bool_t BgL__ortest_1206z00_504;

				{	/* Ast/var.scm 201 */
					bool_t BgL_test2752z00_4445;

					{	/* Ast/var.scm 201 */
						BgL_valuez00_bglt BgL_arg1298z00_512;

						BgL_arg1298z00_512 =
							(((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_globalz00_389)))->BgL_valuez00);
						{	/* Ast/var.scm 201 */
							bool_t BgL_res2112z00_1630;

							BgL_res2112z00_1630 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_arg1298z00_512), BGl_cfunz00zzast_varz00);
							BgL_test2752z00_4445 = BgL_res2112z00_1630;
						}
					}
					if (BgL_test2752z00_4445)
						{	/* Ast/var.scm 201 */
							BgL__ortest_1206z00_504 = ((bool_t) 0);
						}
					else
						{	/* Ast/var.scm 201 */
							BgL__ortest_1206z00_504 = ((bool_t) 1);
						}
				}
				if (BgL__ortest_1206z00_504)
					{	/* Ast/var.scm 201 */
						return BgL__ortest_1206z00_504;
					}
				else
					{	/* Ast/var.scm 202 */
						bool_t BgL__ortest_1207z00_505;

						if (
							(((BgL_cfunz00_bglt) COBJECT(
										((BgL_cfunz00_bglt)
											(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt) BgL_globalz00_389)))->
												BgL_valuez00))))->BgL_macrozf3zf3))
							{	/* Ast/var.scm 202 */
								BgL__ortest_1207z00_505 = ((bool_t) 0);
							}
						else
							{	/* Ast/var.scm 202 */
								BgL__ortest_1207z00_505 = ((bool_t) 1);
							}
						if (BgL__ortest_1207z00_505)
							{	/* Ast/var.scm 202 */
								return BgL__ortest_1207z00_505;
							}
						else
							{	/* Ast/var.scm 202 */
								return
									CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CNST_TABLE_REF(
											((long) 1)),
										(((BgL_globalz00_bglt) COBJECT(BgL_globalz00_389))->
											BgL_pragmaz00)));
		}}}}

	}



/* &global-args-safe? */
	obj_t BGl_z62globalzd2argszd2safezf3z91zzast_varz00(obj_t BgL_envz00_2411,
		obj_t BgL_globalz00_2412)
	{
		{	/* Ast/var.scm 199 */
			return
				BBOOL(BGl_globalzd2argszd2safezf3zf3zzast_varz00(
					((BgL_globalz00_bglt) BgL_globalz00_2412)));
		}

	}



/* fun-optional-arity */
	BGL_EXPORTED_DEF int BGl_funzd2optionalzd2arityz00zzast_varz00(BgL_funz00_bglt
		BgL_funz00_390)
	{
		{	/* Ast/var.scm 208 */
			{	/* Ast/var.scm 210 */
				bool_t BgL_test2756z00_4464;

				{	/* Ast/var.scm 210 */
					bool_t BgL_res2113z00_1632;

					BgL_res2113z00_1632 =
						BGl_isazf3zf3zz__objectz00(
						((obj_t) BgL_funz00_390), BGl_sfunz00zzast_varz00);
					BgL_test2756z00_4464 = BgL_res2113z00_1632;
				}
				if (BgL_test2756z00_4464)
					{	/* Ast/var.scm 212 */
						bool_t BgL_test2757z00_4467;

						{	/* Ast/var.scm 212 */
							obj_t BgL_tmpz00_4468;

							BgL_tmpz00_4468 =
								(((BgL_sfunz00_bglt) COBJECT(
										((BgL_sfunz00_bglt) BgL_funz00_390)))->BgL_optionalsz00);
							BgL_test2757z00_4467 = PAIRP(BgL_tmpz00_4468);
						}
						if (BgL_test2757z00_4467)
							{	/* Ast/var.scm 212 */
								return
									(int) (
									((((BgL_funz00_bglt) COBJECT(BgL_funz00_390))->BgL_arityz00) +
										((long) 1)));
							}
						else
							{	/* Ast/var.scm 212 */
								return
									(int) (
									(((BgL_funz00_bglt) COBJECT(BgL_funz00_390))->BgL_arityz00));
					}}
				else
					{	/* Ast/var.scm 210 */
						return
							(int) (
							(((BgL_funz00_bglt) COBJECT(BgL_funz00_390))->BgL_arityz00));
		}}}

	}



/* &fun-optional-arity */
	obj_t BGl_z62funzd2optionalzd2arityz62zzast_varz00(obj_t BgL_envz00_2413,
		obj_t BgL_funz00_2414)
	{
		{	/* Ast/var.scm 208 */
			return
				BINT(BGl_funzd2optionalzd2arityz00zzast_varz00(
					((BgL_funz00_bglt) BgL_funz00_2414)));
		}

	}



/* global-optional? */
	BGL_EXPORTED_DEF bool_t BGl_globalzd2optionalzf3z21zzast_varz00(obj_t
		BgL_gz00_391)
	{
		{	/* Ast/var.scm 220 */
			if (BGl_isazf3zf3zz__objectz00(BgL_gz00_391, BGl_globalz00zzast_varz00))
				{	/* Ast/var.scm 221 */
					return
						BGl_sfunzd2optionalzf3z21zzast_varz00(
						((obj_t)
							(((BgL_variablez00_bglt) COBJECT(
										((BgL_variablez00_bglt)
											((BgL_globalz00_bglt) BgL_gz00_391))))->BgL_valuez00)));
				}
			else
				{	/* Ast/var.scm 221 */
					return ((bool_t) 0);
				}
		}

	}



/* &global-optional? */
	obj_t BGl_z62globalzd2optionalzf3z43zzast_varz00(obj_t BgL_envz00_2415,
		obj_t BgL_gz00_2416)
	{
		{	/* Ast/var.scm 220 */
			return BBOOL(BGl_globalzd2optionalzf3z21zzast_varz00(BgL_gz00_2416));
		}

	}



/* sfun-optional? */
	BGL_EXPORTED_DEF bool_t BGl_sfunzd2optionalzf3z21zzast_varz00(obj_t
		BgL_funz00_392)
	{
		{	/* Ast/var.scm 228 */
			if (BGl_isazf3zf3zz__objectz00(BgL_funz00_392, BGl_sfunz00zzast_varz00))
				{	/* Ast/var.scm 229 */
					obj_t BgL_tmpz00_4493;

					BgL_tmpz00_4493 =
						(((BgL_sfunz00_bglt) COBJECT(
								((BgL_sfunz00_bglt) BgL_funz00_392)))->BgL_optionalsz00);
					return PAIRP(BgL_tmpz00_4493);
				}
			else
				{	/* Ast/var.scm 229 */
					return ((bool_t) 0);
				}
		}

	}



/* &sfun-optional? */
	obj_t BGl_z62sfunzd2optionalzf3z43zzast_varz00(obj_t BgL_envz00_2417,
		obj_t BgL_funz00_2418)
	{
		{	/* Ast/var.scm 228 */
			return BBOOL(BGl_sfunzd2optionalzf3z21zzast_varz00(BgL_funz00_2418));
		}

	}



/* global-key? */
	BGL_EXPORTED_DEF bool_t BGl_globalzd2keyzf3z21zzast_varz00(obj_t BgL_gz00_393)
	{
		{	/* Ast/var.scm 234 */
			if (BGl_isazf3zf3zz__objectz00(BgL_gz00_393, BGl_globalz00zzast_varz00))
				{	/* Ast/var.scm 235 */
					return
						BGl_sfunzd2keyzf3z21zzast_varz00(
						((obj_t)
							(((BgL_variablez00_bglt) COBJECT(
										((BgL_variablez00_bglt)
											((BgL_globalz00_bglt) BgL_gz00_393))))->BgL_valuez00)));
				}
			else
				{	/* Ast/var.scm 235 */
					return ((bool_t) 0);
				}
		}

	}



/* &global-key? */
	obj_t BGl_z62globalzd2keyzf3z43zzast_varz00(obj_t BgL_envz00_2419,
		obj_t BgL_gz00_2420)
	{
		{	/* Ast/var.scm 234 */
			return BBOOL(BGl_globalzd2keyzf3z21zzast_varz00(BgL_gz00_2420));
		}

	}



/* sfun-key? */
	BGL_EXPORTED_DEF bool_t BGl_sfunzd2keyzf3z21zzast_varz00(obj_t BgL_funz00_394)
	{
		{	/* Ast/var.scm 242 */
			if (BGl_isazf3zf3zz__objectz00(BgL_funz00_394, BGl_sfunz00zzast_varz00))
				{	/* Ast/var.scm 243 */
					obj_t BgL_tmpz00_4510;

					BgL_tmpz00_4510 =
						(((BgL_sfunz00_bglt) COBJECT(
								((BgL_sfunz00_bglt) BgL_funz00_394)))->BgL_keysz00);
					return PAIRP(BgL_tmpz00_4510);
				}
			else
				{	/* Ast/var.scm 243 */
					return ((bool_t) 0);
				}
		}

	}



/* &sfun-key? */
	obj_t BGl_z62sfunzd2keyzf3z43zzast_varz00(obj_t BgL_envz00_2421,
		obj_t BgL_funz00_2422)
	{
		{	/* Ast/var.scm 242 */
			return BBOOL(BGl_sfunzd2keyzf3z21zzast_varz00(BgL_funz00_2422));
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzast_varz00()
	{
		{	/* Ast/var.scm 14 */
			{	/* Ast/var.scm 21 */
				obj_t BgL_arg1314z00_531;
				obj_t BgL_arg1315z00_532;

				{	/* Ast/var.scm 21 */
					obj_t BgL_v1240z00_542;

					BgL_v1240z00_542 = create_vector(((long) 0));
					BgL_arg1314z00_531 = BgL_v1240z00_542;
				}
				{	/* Ast/var.scm 21 */
					obj_t BgL_v1241z00_543;

					BgL_v1241z00_543 = create_vector(((long) 0));
					BgL_arg1315z00_532 = BgL_v1241z00_543;
				}
				BGl_valuez00zzast_varz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 2)),
					CNST_TABLE_REF(((long) 3)), BGl_objectz00zz__objectz00, ((long) 3840),
					BGl_proc2148z00zzast_varz00, BGl_proc2147z00zzast_varz00, BFALSE,
					BGl_proc2146z00zzast_varz00, BFALSE, BgL_arg1314z00_531,
					BgL_arg1315z00_532);
			}
			{	/* Ast/var.scm 23 */
				obj_t BgL_arg1326z00_550;
				obj_t BgL_arg1327z00_551;

				{	/* Ast/var.scm 23 */
					obj_t BgL_v1242z00_571;

					BgL_v1242z00_571 = create_vector(((long) 10));
					{	/* Ast/var.scm 23 */
						obj_t BgL_arg1334z00_572;

						BgL_arg1334z00_572 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									4)), BGl_proc2150z00zzast_varz00, BGl_proc2149z00zzast_varz00,
							((bool_t) 1), ((bool_t) 0), BFALSE, BFALSE,
							CNST_TABLE_REF(((long) 5)));
						VECTOR_SET(BgL_v1242z00_571, ((long) 0), BgL_arg1334z00_572);
					}
					{	/* Ast/var.scm 23 */
						obj_t BgL_arg1340z00_582;

						BgL_arg1340z00_582 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									6)), BGl_proc2153z00zzast_varz00, BGl_proc2152z00zzast_varz00,
							((bool_t) 0), ((bool_t) 0), BFALSE, BGl_proc2151z00zzast_varz00,
							CNST_TABLE_REF(((long) 7)));
						VECTOR_SET(BgL_v1242z00_571, ((long) 1), BgL_arg1340z00_582);
					}
					{	/* Ast/var.scm 23 */
						obj_t BgL_arg1351z00_595;

						BgL_arg1351z00_595 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									8)), BGl_proc2155z00zzast_varz00, BGl_proc2154z00zzast_varz00,
							((bool_t) 0), ((bool_t) 0), BFALSE, BFALSE,
							BGl_typez00zztype_typez00);
						VECTOR_SET(BgL_v1242z00_571, ((long) 2), BgL_arg1351z00_595);
					}
					{	/* Ast/var.scm 23 */
						obj_t BgL_arg1360z00_605;

						BgL_arg1360z00_605 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									2)), BGl_proc2157z00zzast_varz00, BGl_proc2156z00zzast_varz00,
							((bool_t) 0), ((bool_t) 0), BFALSE, BFALSE,
							BGl_valuez00zzast_varz00);
						VECTOR_SET(BgL_v1242z00_571, ((long) 3), BgL_arg1360z00_605);
					}
					{	/* Ast/var.scm 23 */
						obj_t BgL_arg1367z00_615;

						BgL_arg1367z00_615 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									9)), BGl_proc2160z00zzast_varz00, BGl_proc2159z00zzast_varz00,
							((bool_t) 0), ((bool_t) 0), BFALSE, BGl_proc2158z00zzast_varz00,
							CNST_TABLE_REF(((long) 7)));
						VECTOR_SET(BgL_v1242z00_571, ((long) 4), BgL_arg1367z00_615);
					}
					{	/* Ast/var.scm 23 */
						obj_t BgL_arg1381z00_628;

						BgL_arg1381z00_628 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									10)), BGl_proc2163z00zzast_varz00,
							BGl_proc2162z00zzast_varz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc2161z00zzast_varz00, CNST_TABLE_REF(((long) 7)));
						VECTOR_SET(BgL_v1242z00_571, ((long) 5), BgL_arg1381z00_628);
					}
					{	/* Ast/var.scm 23 */
						obj_t BgL_arg1388z00_641;

						BgL_arg1388z00_641 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									11)), BGl_proc2166z00zzast_varz00,
							BGl_proc2165z00zzast_varz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc2164z00zzast_varz00, CNST_TABLE_REF(((long) 7)));
						VECTOR_SET(BgL_v1242z00_571, ((long) 6), BgL_arg1388z00_641);
					}
					{	/* Ast/var.scm 23 */
						obj_t BgL_arg1421z00_654;

						BgL_arg1421z00_654 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									12)), BGl_proc2169z00zzast_varz00,
							BGl_proc2168z00zzast_varz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc2167z00zzast_varz00, CNST_TABLE_REF(((long) 13)));
						VECTOR_SET(BgL_v1242z00_571, ((long) 7), BgL_arg1421z00_654);
					}
					{	/* Ast/var.scm 23 */
						obj_t BgL_arg1448z00_667;

						BgL_arg1448z00_667 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									14)), BGl_proc2172z00zzast_varz00,
							BGl_proc2171z00zzast_varz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc2170z00zzast_varz00, CNST_TABLE_REF(((long) 13)));
						VECTOR_SET(BgL_v1242z00_571, ((long) 8), BgL_arg1448z00_667);
					}
					{	/* Ast/var.scm 23 */
						obj_t BgL_arg1474z00_680;

						BgL_arg1474z00_680 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									15)), BGl_proc2175z00zzast_varz00,
							BGl_proc2174z00zzast_varz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc2173z00zzast_varz00, CNST_TABLE_REF(((long) 16)));
						VECTOR_SET(BgL_v1242z00_571, ((long) 9), BgL_arg1474z00_680);
					}
					BgL_arg1326z00_550 = BgL_v1242z00_571;
				}
				{	/* Ast/var.scm 23 */
					obj_t BgL_v1243z00_693;

					BgL_v1243z00_693 = create_vector(((long) 0));
					BgL_arg1327z00_551 = BgL_v1243z00_693;
				}
				BGl_variablez00zzast_varz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 17)),
					CNST_TABLE_REF(((long) 3)), BGl_objectz00zz__objectz00,
					((long) 41331), BGl_proc2178z00zzast_varz00,
					BGl_proc2177z00zzast_varz00, BFALSE, BGl_proc2176z00zzast_varz00,
					BFALSE, BgL_arg1326z00_550, BgL_arg1327z00_551);
			}
			{	/* Ast/var.scm 46 */
				obj_t BgL_arg1518z00_700;
				obj_t BgL_arg1521z00_701;

				{	/* Ast/var.scm 46 */
					obj_t BgL_v1244z00_731;

					BgL_v1244z00_731 = create_vector(((long) 10));
					{	/* Ast/var.scm 46 */
						obj_t BgL_arg1540z00_732;

						BgL_arg1540z00_732 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									18)), BGl_proc2180z00zzast_varz00,
							BGl_proc2179z00zzast_varz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, CNST_TABLE_REF(((long) 5)));
						VECTOR_SET(BgL_v1244z00_731, ((long) 0), BgL_arg1540z00_732);
					}
					{	/* Ast/var.scm 46 */
						obj_t BgL_arg1558z00_742;

						BgL_arg1558z00_742 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									19)), BGl_proc2182z00zzast_varz00,
							BGl_proc2181z00zzast_varz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, CNST_TABLE_REF(((long) 7)));
						VECTOR_SET(BgL_v1244z00_731, ((long) 1), BgL_arg1558z00_742);
					}
					{	/* Ast/var.scm 46 */
						obj_t BgL_arg1573z00_752;

						BgL_arg1573z00_752 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									20)), BGl_proc2185z00zzast_varz00,
							BGl_proc2184z00zzast_varz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc2183z00zzast_varz00, CNST_TABLE_REF(((long) 16)));
						VECTOR_SET(BgL_v1244z00_731, ((long) 2), BgL_arg1573z00_752);
					}
					{	/* Ast/var.scm 46 */
						obj_t BgL_arg1588z00_765;

						BgL_arg1588z00_765 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									21)), BGl_proc2188z00zzast_varz00,
							BGl_proc2187z00zzast_varz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc2186z00zzast_varz00, CNST_TABLE_REF(((long) 16)));
						VECTOR_SET(BgL_v1244z00_731, ((long) 3), BgL_arg1588z00_765);
					}
					{	/* Ast/var.scm 46 */
						obj_t BgL_arg1597z00_778;

						BgL_arg1597z00_778 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									22)), BGl_proc2191z00zzast_varz00,
							BGl_proc2190z00zzast_varz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc2189z00zzast_varz00, CNST_TABLE_REF(((long) 7)));
						VECTOR_SET(BgL_v1244z00_731, ((long) 4), BgL_arg1597z00_778);
					}
					{	/* Ast/var.scm 46 */
						obj_t BgL_arg1611z00_791;

						BgL_arg1611z00_791 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									23)), BGl_proc2194z00zzast_varz00,
							BGl_proc2193z00zzast_varz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc2192z00zzast_varz00, CNST_TABLE_REF(((long) 7)));
						VECTOR_SET(BgL_v1244z00_731, ((long) 5), BgL_arg1611z00_791);
					}
					{	/* Ast/var.scm 46 */
						obj_t BgL_arg1631z00_804;

						BgL_arg1631z00_804 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									24)), BGl_proc2196z00zzast_varz00,
							BGl_proc2195z00zzast_varz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, CNST_TABLE_REF(((long) 7)));
						VECTOR_SET(BgL_v1244z00_731, ((long) 6), BgL_arg1631z00_804);
					}
					{	/* Ast/var.scm 46 */
						obj_t BgL_arg1644z00_814;

						BgL_arg1644z00_814 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									25)), BGl_proc2198z00zzast_varz00,
							BGl_proc2197z00zzast_varz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, CNST_TABLE_REF(((long) 26)));
						VECTOR_SET(BgL_v1244z00_731, ((long) 7), BgL_arg1644z00_814);
					}
					{	/* Ast/var.scm 46 */
						obj_t BgL_arg1667z00_824;

						BgL_arg1667z00_824 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									27)), BGl_proc2201z00zzast_varz00,
							BGl_proc2200z00zzast_varz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc2199z00zzast_varz00, CNST_TABLE_REF(((long) 7)));
						VECTOR_SET(BgL_v1244z00_731, ((long) 8), BgL_arg1667z00_824);
					}
					{	/* Ast/var.scm 46 */
						obj_t BgL_arg1688z00_837;

						BgL_arg1688z00_837 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									28)), BGl_proc2204z00zzast_varz00,
							BGl_proc2203z00zzast_varz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc2202z00zzast_varz00, CNST_TABLE_REF(((long) 7)));
						VECTOR_SET(BgL_v1244z00_731, ((long) 9), BgL_arg1688z00_837);
					}
					BgL_arg1518z00_700 = BgL_v1244z00_731;
				}
				{	/* Ast/var.scm 46 */
					obj_t BgL_v1245z00_850;

					BgL_v1245z00_850 = create_vector(((long) 0));
					BgL_arg1521z00_701 = BgL_v1245z00_850;
				}
				BGl_globalz00zzast_varz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 29)),
					CNST_TABLE_REF(((long) 3)), BGl_variablez00zzast_varz00,
					((long) 49719), BGl_proc2207z00zzast_varz00,
					BGl_proc2206z00zzast_varz00, BFALSE, BGl_proc2205z00zzast_varz00,
					BFALSE, BgL_arg1518z00_700, BgL_arg1521z00_701);
			}
			{	/* Ast/var.scm 75 */
				obj_t BgL_arg1711z00_857;
				obj_t BgL_arg1712z00_858;

				{	/* Ast/var.scm 75 */
					obj_t BgL_v1246z00_879;

					BgL_v1246z00_879 = create_vector(((long) 1));
					{	/* Ast/var.scm 75 */
						obj_t BgL_arg1727z00_880;

						BgL_arg1727z00_880 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									30)), BGl_proc2209z00zzast_varz00,
							BGl_proc2208z00zzast_varz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, CNST_TABLE_REF(((long) 13)));
						VECTOR_SET(BgL_v1246z00_879, ((long) 0), BgL_arg1727z00_880);
					}
					BgL_arg1711z00_857 = BgL_v1246z00_879;
				}
				{	/* Ast/var.scm 75 */
					obj_t BgL_v1247z00_890;

					BgL_v1247z00_890 = create_vector(((long) 0));
					BgL_arg1712z00_858 = BgL_v1247z00_890;
				}
				BGl_localz00zzast_varz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 31)),
					CNST_TABLE_REF(((long) 3)), BGl_variablez00zzast_varz00,
					((long) 54053), BGl_proc2212z00zzast_varz00,
					BGl_proc2211z00zzast_varz00, BFALSE, BGl_proc2210z00zzast_varz00,
					BFALSE, BgL_arg1711z00_857, BgL_arg1712z00_858);
			}
			{	/* Ast/var.scm 79 */
				obj_t BgL_arg1739z00_897;
				obj_t BgL_arg1740z00_898;

				{	/* Ast/var.scm 79 */
					obj_t BgL_v1248z00_917;

					BgL_v1248z00_917 = create_vector(((long) 9));
					{	/* Ast/var.scm 79 */
						obj_t BgL_arg1746z00_918;

						BgL_arg1746z00_918 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									32)), BGl_proc2214z00zzast_varz00,
							BGl_proc2213z00zzast_varz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, CNST_TABLE_REF(((long) 13)));
						VECTOR_SET(BgL_v1248z00_917, ((long) 0), BgL_arg1746z00_918);
					}
					{	/* Ast/var.scm 79 */
						obj_t BgL_arg1757z00_928;

						BgL_arg1757z00_928 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									33)), BGl_proc2217z00zzast_varz00,
							BGl_proc2216z00zzast_varz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc2215z00zzast_varz00, CNST_TABLE_REF(((long) 7)));
						VECTOR_SET(BgL_v1248z00_917, ((long) 1), BgL_arg1757z00_928);
					}
					{	/* Ast/var.scm 79 */
						obj_t BgL_arg1768z00_941;

						BgL_arg1768z00_941 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									34)), BGl_proc2220z00zzast_varz00,
							BGl_proc2219z00zzast_varz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc2218z00zzast_varz00, CNST_TABLE_REF(((long) 7)));
						VECTOR_SET(BgL_v1248z00_917, ((long) 2), BgL_arg1768z00_941);
					}
					{	/* Ast/var.scm 79 */
						obj_t BgL_arg1782z00_954;

						BgL_arg1782z00_954 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									35)), BGl_proc2223z00zzast_varz00,
							BGl_proc2222z00zzast_varz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc2221z00zzast_varz00, CNST_TABLE_REF(((long) 7)));
						VECTOR_SET(BgL_v1248z00_917, ((long) 3), BgL_arg1782z00_954);
					}
					{	/* Ast/var.scm 79 */
						obj_t BgL_arg1801z00_967;

						BgL_arg1801z00_967 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									36)), BGl_proc2226z00zzast_varz00,
							BGl_proc2225z00zzast_varz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc2224z00zzast_varz00, CNST_TABLE_REF(((long) 16)));
						VECTOR_SET(BgL_v1248z00_917, ((long) 4), BgL_arg1801z00_967);
					}
					{	/* Ast/var.scm 79 */
						obj_t BgL_arg1820z00_980;

						BgL_arg1820z00_980 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									37)), BGl_proc2229z00zzast_varz00,
							BGl_proc2228z00zzast_varz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc2227z00zzast_varz00, CNST_TABLE_REF(((long) 7)));
						VECTOR_SET(BgL_v1248z00_917, ((long) 5), BgL_arg1820z00_980);
					}
					{	/* Ast/var.scm 79 */
						obj_t BgL_arg1827z00_993;

						BgL_arg1827z00_993 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									38)), BGl_proc2232z00zzast_varz00,
							BGl_proc2231z00zzast_varz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc2230z00zzast_varz00, CNST_TABLE_REF(((long) 7)));
						VECTOR_SET(BgL_v1248z00_917, ((long) 6), BgL_arg1827z00_993);
					}
					{	/* Ast/var.scm 79 */
						obj_t BgL_arg1835z00_1006;

						BgL_arg1835z00_1006 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									39)), BGl_proc2235z00zzast_varz00,
							BGl_proc2234z00zzast_varz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc2233z00zzast_varz00, CNST_TABLE_REF(((long) 7)));
						VECTOR_SET(BgL_v1248z00_917, ((long) 7), BgL_arg1835z00_1006);
					}
					{	/* Ast/var.scm 79 */
						obj_t BgL_arg1845z00_1019;

						BgL_arg1845z00_1019 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									40)), BGl_proc2238z00zzast_varz00,
							BGl_proc2237z00zzast_varz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc2236z00zzast_varz00, CNST_TABLE_REF(((long) 7)));
						VECTOR_SET(BgL_v1248z00_917, ((long) 8), BgL_arg1845z00_1019);
					}
					BgL_arg1739z00_897 = BgL_v1248z00_917;
				}
				{	/* Ast/var.scm 79 */
					obj_t BgL_v1249z00_1032;

					BgL_v1249z00_1032 = create_vector(((long) 0));
					BgL_arg1740z00_898 = BgL_v1249z00_1032;
				}
				BGl_funz00zzast_varz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 41)),
					CNST_TABLE_REF(((long) 3)), BGl_valuez00zzast_varz00, ((long) 59266),
					BGl_proc2241z00zzast_varz00, BGl_proc2240z00zzast_varz00, BFALSE,
					BGl_proc2239z00zzast_varz00, BFALSE, BgL_arg1739z00_897,
					BgL_arg1740z00_898);
			}
			{	/* Ast/var.scm 107 */
				obj_t BgL_arg1856z00_1039;
				obj_t BgL_arg1857z00_1040;

				{	/* Ast/var.scm 107 */
					obj_t BgL_v1250z00_1071;

					BgL_v1250z00_1071 = create_vector(((long) 12));
					{	/* Ast/var.scm 107 */
						obj_t BgL_arg1863z00_1072;

						BgL_arg1863z00_1072 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									42)), BGl_proc2244z00zzast_varz00,
							BGl_proc2243z00zzast_varz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc2242z00zzast_varz00, CNST_TABLE_REF(((long) 7)));
						VECTOR_SET(BgL_v1250z00_1071, ((long) 0), BgL_arg1863z00_1072);
					}
					{	/* Ast/var.scm 107 */
						obj_t BgL_arg1872z00_1085;

						BgL_arg1872z00_1085 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									43)), BGl_proc2246z00zzast_varz00,
							BGl_proc2245z00zzast_varz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, CNST_TABLE_REF(((long) 7)));
						VECTOR_SET(BgL_v1250z00_1071, ((long) 1), BgL_arg1872z00_1085);
					}
					{	/* Ast/var.scm 107 */
						obj_t BgL_arg1877z00_1095;

						BgL_arg1877z00_1095 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									44)), BGl_proc2248z00zzast_varz00,
							BGl_proc2247z00zzast_varz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, CNST_TABLE_REF(((long) 7)));
						VECTOR_SET(BgL_v1250z00_1071, ((long) 2), BgL_arg1877z00_1095);
					}
					{	/* Ast/var.scm 107 */
						obj_t BgL_arg1882z00_1105;

						BgL_arg1882z00_1105 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									45)), BGl_proc2251z00zzast_varz00,
							BGl_proc2250z00zzast_varz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc2249z00zzast_varz00, CNST_TABLE_REF(((long) 7)));
						VECTOR_SET(BgL_v1250z00_1071, ((long) 3), BgL_arg1882z00_1105);
					}
					{	/* Ast/var.scm 107 */
						obj_t BgL_arg1889z00_1118;

						BgL_arg1889z00_1118 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									46)), BGl_proc2253z00zzast_varz00,
							BGl_proc2252z00zzast_varz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, CNST_TABLE_REF(((long) 7)));
						VECTOR_SET(BgL_v1250z00_1071, ((long) 4), BgL_arg1889z00_1118);
					}
					{	/* Ast/var.scm 107 */
						obj_t BgL_arg1895z00_1128;

						BgL_arg1895z00_1128 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									47)), BGl_proc2256z00zzast_varz00,
							BGl_proc2255z00zzast_varz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc2254z00zzast_varz00, CNST_TABLE_REF(((long) 7)));
						VECTOR_SET(BgL_v1250z00_1071, ((long) 5), BgL_arg1895z00_1128);
					}
					{	/* Ast/var.scm 107 */
						obj_t BgL_arg1902z00_1141;

						BgL_arg1902z00_1141 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									48)), BGl_proc2259z00zzast_varz00,
							BGl_proc2258z00zzast_varz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc2257z00zzast_varz00, CNST_TABLE_REF(((long) 7)));
						VECTOR_SET(BgL_v1250z00_1071, ((long) 6), BgL_arg1902z00_1141);
					}
					{	/* Ast/var.scm 107 */
						obj_t BgL_arg1909z00_1154;

						BgL_arg1909z00_1154 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									49)), BGl_proc2262z00zzast_varz00,
							BGl_proc2261z00zzast_varz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BGl_proc2260z00zzast_varz00, CNST_TABLE_REF(((long) 7)));
						VECTOR_SET(BgL_v1250z00_1071, ((long) 7), BgL_arg1909z00_1154);
					}
					{	/* Ast/var.scm 107 */
						obj_t BgL_arg1916z00_1167;

						BgL_arg1916z00_1167 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									50)), BGl_proc2265z00zzast_varz00,
							BGl_proc2264z00zzast_varz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BGl_proc2263z00zzast_varz00, CNST_TABLE_REF(((long) 7)));
						VECTOR_SET(BgL_v1250z00_1071, ((long) 8), BgL_arg1916z00_1167);
					}
					{	/* Ast/var.scm 107 */
						obj_t BgL_arg1923z00_1180;

						BgL_arg1923z00_1180 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									51)), BGl_proc2268z00zzast_varz00,
							BGl_proc2267z00zzast_varz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc2266z00zzast_varz00, CNST_TABLE_REF(((long) 7)));
						VECTOR_SET(BgL_v1250z00_1071, ((long) 9), BgL_arg1923z00_1180);
					}
					{	/* Ast/var.scm 107 */
						obj_t BgL_arg1930z00_1193;

						BgL_arg1930z00_1193 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									52)), BGl_proc2271z00zzast_varz00,
							BGl_proc2270z00zzast_varz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc2269z00zzast_varz00, CNST_TABLE_REF(((long) 5)));
						VECTOR_SET(BgL_v1250z00_1071, ((long) 10), BgL_arg1930z00_1193);
					}
					{	/* Ast/var.scm 107 */
						obj_t BgL_arg1937z00_1206;

						BgL_arg1937z00_1206 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									53)), BGl_proc2274z00zzast_varz00,
							BGl_proc2273z00zzast_varz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc2272z00zzast_varz00, CNST_TABLE_REF(((long) 7)));
						VECTOR_SET(BgL_v1250z00_1071, ((long) 11), BgL_arg1937z00_1206);
					}
					BgL_arg1856z00_1039 = BgL_v1250z00_1071;
				}
				{	/* Ast/var.scm 107 */
					obj_t BgL_v1251z00_1219;

					BgL_v1251z00_1219 = create_vector(((long) 0));
					BgL_arg1857z00_1040 = BgL_v1251z00_1219;
				}
				BGl_sfunz00zzast_varz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 54)),
					CNST_TABLE_REF(((long) 3)), BGl_funz00zzast_varz00, ((long) 63683),
					BGl_proc2277z00zzast_varz00, BGl_proc2276z00zzast_varz00, BFALSE,
					BGl_proc2275z00zzast_varz00, BFALSE, BgL_arg1856z00_1039,
					BgL_arg1857z00_1040);
			}
			{	/* Ast/var.scm 137 */
				obj_t BgL_arg1947z00_1226;
				obj_t BgL_arg1948z00_1227;

				{	/* Ast/var.scm 137 */
					obj_t BgL_v1252z00_1250;

					BgL_v1252z00_1250 = create_vector(((long) 4));
					{	/* Ast/var.scm 137 */
						obj_t BgL_arg1955z00_1251;

						BgL_arg1955z00_1251 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									55)), BGl_proc2279z00zzast_varz00,
							BGl_proc2278z00zzast_varz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, CNST_TABLE_REF(((long) 7)));
						VECTOR_SET(BgL_v1252z00_1250, ((long) 0), BgL_arg1955z00_1251);
					}
					{	/* Ast/var.scm 137 */
						obj_t BgL_arg1960z00_1261;

						BgL_arg1960z00_1261 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									56)), BGl_proc2281z00zzast_varz00,
							BGl_proc2280z00zzast_varz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, CNST_TABLE_REF(((long) 16)));
						VECTOR_SET(BgL_v1252z00_1250, ((long) 1), BgL_arg1960z00_1261);
					}
					{	/* Ast/var.scm 137 */
						obj_t BgL_arg1965z00_1271;

						BgL_arg1965z00_1271 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									57)), BGl_proc2284z00zzast_varz00,
							BGl_proc2283z00zzast_varz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc2282z00zzast_varz00, CNST_TABLE_REF(((long) 16)));
						VECTOR_SET(BgL_v1252z00_1250, ((long) 2), BgL_arg1965z00_1271);
					}
					{	/* Ast/var.scm 137 */
						obj_t BgL_arg1972z00_1284;

						BgL_arg1972z00_1284 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									58)), BGl_proc2287z00zzast_varz00,
							BGl_proc2286z00zzast_varz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc2285z00zzast_varz00, CNST_TABLE_REF(((long) 59)));
						VECTOR_SET(BgL_v1252z00_1250, ((long) 3), BgL_arg1972z00_1284);
					}
					BgL_arg1947z00_1226 = BgL_v1252z00_1250;
				}
				{	/* Ast/var.scm 137 */
					obj_t BgL_v1253z00_1297;

					BgL_v1253z00_1297 = create_vector(((long) 0));
					BgL_arg1948z00_1227 = BgL_v1253z00_1297;
				}
				BGl_cfunz00zzast_varz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 60)),
					CNST_TABLE_REF(((long) 3)), BGl_funz00zzast_varz00, ((long) 20427),
					BGl_proc2290z00zzast_varz00, BGl_proc2289z00zzast_varz00, BFALSE,
					BGl_proc2288z00zzast_varz00, BFALSE, BgL_arg1947z00_1226,
					BgL_arg1948z00_1227);
			}
			{	/* Ast/var.scm 147 */
				obj_t BgL_arg1982z00_1304;
				obj_t BgL_arg1983z00_1305;

				{	/* Ast/var.scm 147 */
					obj_t BgL_v1254z00_1316;

					BgL_v1254z00_1316 = create_vector(((long) 1));
					{	/* Ast/var.scm 147 */
						obj_t BgL_arg1989z00_1317;

						BgL_arg1989z00_1317 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									48)), BGl_proc2293z00zzast_varz00,
							BGl_proc2292z00zzast_varz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc2291z00zzast_varz00, CNST_TABLE_REF(((long) 7)));
						VECTOR_SET(BgL_v1254z00_1316, ((long) 0), BgL_arg1989z00_1317);
					}
					BgL_arg1982z00_1304 = BgL_v1254z00_1316;
				}
				{	/* Ast/var.scm 147 */
					obj_t BgL_v1255z00_1330;

					BgL_v1255z00_1330 = create_vector(((long) 0));
					BgL_arg1983z00_1305 = BgL_v1255z00_1330;
				}
				BGl_svarz00zzast_varz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 61)),
					CNST_TABLE_REF(((long) 3)), BGl_valuez00zzast_varz00, ((long) 12461),
					BGl_proc2296z00zzast_varz00, BGl_proc2295z00zzast_varz00, BFALSE,
					BGl_proc2294z00zzast_varz00, BFALSE, BgL_arg1982z00_1304,
					BgL_arg1983z00_1305);
			}
			{	/* Ast/var.scm 151 */
				obj_t BgL_arg1999z00_1337;
				obj_t BgL_arg2000z00_1338;

				{	/* Ast/var.scm 151 */
					obj_t BgL_v1256z00_1351;

					BgL_v1256z00_1351 = create_vector(((long) 3));
					{	/* Ast/var.scm 151 */
						obj_t BgL_arg2007z00_1352;

						BgL_arg2007z00_1352 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									62)), BGl_proc2298z00zzast_varz00,
							BGl_proc2297z00zzast_varz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, CNST_TABLE_REF(((long) 7)));
						VECTOR_SET(BgL_v1256z00_1351, ((long) 0), BgL_arg2007z00_1352);
					}
					{	/* Ast/var.scm 151 */
						obj_t BgL_arg2013z00_1362;

						BgL_arg2013z00_1362 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									46)), BGl_proc2300z00zzast_varz00,
							BGl_proc2299z00zzast_varz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, CNST_TABLE_REF(((long) 7)));
						VECTOR_SET(BgL_v1256z00_1351, ((long) 1), BgL_arg2013z00_1362);
					}
					{	/* Ast/var.scm 151 */
						obj_t BgL_arg2020z00_1372;

						BgL_arg2020z00_1372 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									48)), BGl_proc2303z00zzast_varz00,
							BGl_proc2302z00zzast_varz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc2301z00zzast_varz00, CNST_TABLE_REF(((long) 7)));
						VECTOR_SET(BgL_v1256z00_1351, ((long) 2), BgL_arg2020z00_1372);
					}
					BgL_arg1999z00_1337 = BgL_v1256z00_1351;
				}
				{	/* Ast/var.scm 151 */
					obj_t BgL_v1257z00_1385;

					BgL_v1257z00_1385 = create_vector(((long) 0));
					BgL_arg2000z00_1338 = BgL_v1257z00_1385;
				}
				BGl_scnstz00zzast_varz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 63)),
					CNST_TABLE_REF(((long) 3)), BGl_valuez00zzast_varz00, ((long) 22038),
					BGl_proc2306z00zzast_varz00, BGl_proc2305z00zzast_varz00, BFALSE,
					BGl_proc2304z00zzast_varz00, BFALSE, BgL_arg1999z00_1337,
					BgL_arg2000z00_1338);
			}
			{	/* Ast/var.scm 159 */
				obj_t BgL_arg2033z00_1392;
				obj_t BgL_arg2034z00_1393;

				{	/* Ast/var.scm 159 */
					obj_t BgL_v1258z00_1404;

					BgL_v1258z00_1404 = create_vector(((long) 1));
					{	/* Ast/var.scm 159 */
						obj_t BgL_arg2040z00_1405;

						BgL_arg2040z00_1405 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									56)), BGl_proc2308z00zzast_varz00,
							BGl_proc2307z00zzast_varz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, CNST_TABLE_REF(((long) 16)));
						VECTOR_SET(BgL_v1258z00_1404, ((long) 0), BgL_arg2040z00_1405);
					}
					BgL_arg2033z00_1392 = BgL_v1258z00_1404;
				}
				{	/* Ast/var.scm 159 */
					obj_t BgL_v1259z00_1415;

					BgL_v1259z00_1415 = create_vector(((long) 0));
					BgL_arg2034z00_1393 = BgL_v1259z00_1415;
				}
				BGl_cvarz00zzast_varz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 64)),
					CNST_TABLE_REF(((long) 3)), BGl_valuez00zzast_varz00, ((long) 53294),
					BGl_proc2311z00zzast_varz00, BGl_proc2310z00zzast_varz00, BFALSE,
					BGl_proc2309z00zzast_varz00, BFALSE, BgL_arg2033z00_1392,
					BgL_arg2034z00_1393);
			}
			{	/* Ast/var.scm 163 */
				obj_t BgL_arg2049z00_1422;
				obj_t BgL_arg2050z00_1423;

				{	/* Ast/var.scm 163 */
					obj_t BgL_v1260z00_1435;

					BgL_v1260z00_1435 = create_vector(((long) 2));
					{	/* Ast/var.scm 163 */
						obj_t BgL_arg2057z00_1436;

						BgL_arg2057z00_1436 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									65)), BGl_proc2313z00zzast_varz00,
							BGl_proc2312z00zzast_varz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, CNST_TABLE_REF(((long) 7)));
						VECTOR_SET(BgL_v1260z00_1435, ((long) 0), BgL_arg2057z00_1436);
					}
					{	/* Ast/var.scm 163 */
						obj_t BgL_arg2063z00_1446;

						BgL_arg2063z00_1446 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									66)), BGl_proc2316z00zzast_varz00,
							BGl_proc2315z00zzast_varz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc2314z00zzast_varz00, CNST_TABLE_REF(((long) 16)));
						VECTOR_SET(BgL_v1260z00_1435, ((long) 1), BgL_arg2063z00_1446);
					}
					BgL_arg2049z00_1422 = BgL_v1260z00_1435;
				}
				{	/* Ast/var.scm 163 */
					obj_t BgL_v1261z00_1459;

					BgL_v1261z00_1459 = create_vector(((long) 0));
					BgL_arg2050z00_1423 = BgL_v1261z00_1459;
				}
				BGl_sexitz00zzast_varz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 67)),
					CNST_TABLE_REF(((long) 3)), BGl_valuez00zzast_varz00, ((long) 19953),
					BGl_proc2319z00zzast_varz00, BGl_proc2318z00zzast_varz00, BFALSE,
					BGl_proc2317z00zzast_varz00, BFALSE, BgL_arg2049z00_1422,
					BgL_arg2050z00_1423);
			}
			{	/* Ast/var.scm 169 */
				obj_t BgL_arg2077z00_1466;
				obj_t BgL_arg2078z00_1467;

				{	/* Ast/var.scm 169 */
					obj_t BgL_v1262z00_1479;

					BgL_v1262z00_1479 = create_vector(((long) 2));
					{	/* Ast/var.scm 169 */
						obj_t BgL_arg2084z00_1480;

						BgL_arg2084z00_1480 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									68)), BGl_proc2322z00zzast_varz00,
							BGl_proc2321z00zzast_varz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc2320z00zzast_varz00, CNST_TABLE_REF(((long) 7)));
						VECTOR_SET(BgL_v1262z00_1479, ((long) 0), BgL_arg2084z00_1480);
					}
					{	/* Ast/var.scm 169 */
						obj_t BgL_arg2091z00_1493;

						BgL_arg2091z00_1493 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									69)), BGl_proc2325z00zzast_varz00,
							BGl_proc2324z00zzast_varz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc2323z00zzast_varz00, CNST_TABLE_REF(((long) 7)));
						VECTOR_SET(BgL_v1262z00_1479, ((long) 1), BgL_arg2091z00_1493);
					}
					BgL_arg2077z00_1466 = BgL_v1262z00_1479;
				}
				{	/* Ast/var.scm 169 */
					obj_t BgL_v1263z00_1506;

					BgL_v1263z00_1506 = create_vector(((long) 0));
					BgL_arg2078z00_1467 = BgL_v1263z00_1506;
				}
				return (BGl_feffectz00zzast_varz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 70)),
						CNST_TABLE_REF(((long) 3)), BGl_objectz00zz__objectz00,
						((long) 59032), BGl_proc2328z00zzast_varz00,
						BGl_proc2327z00zzast_varz00, BFALSE, BGl_proc2326z00zzast_varz00,
						BFALSE, BgL_arg2077z00_1466, BgL_arg2078z00_1467), BUNSPEC);
		}}

	}



/* &<@anonymous:2083> */
	obj_t BGl_z62zc3z04anonymousza32083ze3ze5zzast_varz00(obj_t BgL_envz00_2606,
		obj_t BgL_new1176z00_2607)
	{
		{	/* Ast/var.scm 169 */
			{
				BgL_feffectz00_bglt BgL_auxz00_4794;

				((((BgL_feffectz00_bglt) COBJECT(
								((BgL_feffectz00_bglt) BgL_new1176z00_2607)))->BgL_readz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_feffectz00_bglt) COBJECT(((BgL_feffectz00_bglt)
									BgL_new1176z00_2607)))->BgL_writez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_4794 = ((BgL_feffectz00_bglt) BgL_new1176z00_2607);
				return ((obj_t) BgL_auxz00_4794);
			}
		}

	}



/* &lambda2081 */
	BgL_feffectz00_bglt BGl_z62lambda2081z62zzast_varz00(obj_t BgL_envz00_2608)
	{
		{	/* Ast/var.scm 169 */
			{	/* Ast/var.scm 169 */
				BgL_feffectz00_bglt BgL_new1175z00_3121;

				BgL_new1175z00_3121 =
					((BgL_feffectz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_feffectz00_bgl))));
				{	/* Ast/var.scm 169 */
					long BgL_arg2082z00_3122;

					{	/* Ast/var.scm 169 */
						long BgL_res2145z00_3123;

						BgL_res2145z00_3123 = BGL_CLASS_INDEX(BGl_feffectz00zzast_varz00);
						BgL_arg2082z00_3122 = BgL_res2145z00_3123;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1175z00_3121), BgL_arg2082z00_3122);
				}
				return BgL_new1175z00_3121;
			}
		}

	}



/* &lambda2079 */
	BgL_feffectz00_bglt BGl_z62lambda2079z62zzast_varz00(obj_t BgL_envz00_2609,
		obj_t BgL_read1173z00_2610, obj_t BgL_write1174z00_2611)
	{
		{	/* Ast/var.scm 169 */
			{	/* Ast/var.scm 169 */
				BgL_feffectz00_bglt BgL_new1237z00_3124;

				{	/* Ast/var.scm 169 */
					BgL_feffectz00_bglt BgL_new1236z00_3125;

					BgL_new1236z00_3125 =
						((BgL_feffectz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_feffectz00_bgl))));
					{	/* Ast/var.scm 169 */
						long BgL_arg2080z00_3126;

						{	/* Ast/var.scm 169 */
							long BgL_res2144z00_3127;

							BgL_res2144z00_3127 = BGL_CLASS_INDEX(BGl_feffectz00zzast_varz00);
							BgL_arg2080z00_3126 = BgL_res2144z00_3127;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1236z00_3125), BgL_arg2080z00_3126);
					}
					BgL_new1237z00_3124 = BgL_new1236z00_3125;
				}
				((((BgL_feffectz00_bglt) COBJECT(BgL_new1237z00_3124))->BgL_readz00) =
					((obj_t) BgL_read1173z00_2610), BUNSPEC);
				((((BgL_feffectz00_bglt) COBJECT(BgL_new1237z00_3124))->BgL_writez00) =
					((obj_t) BgL_write1174z00_2611), BUNSPEC);
				return BgL_new1237z00_3124;
			}
		}

	}



/* &<@anonymous:2097> */
	obj_t BGl_z62zc3z04anonymousza32097ze3ze5zzast_varz00(obj_t BgL_envz00_2612)
	{
		{	/* Ast/var.scm 169 */
			return BNIL;
		}

	}



/* &lambda2096 */
	obj_t BGl_z62lambda2096z62zzast_varz00(obj_t BgL_envz00_2613,
		obj_t BgL_oz00_2614, obj_t BgL_vz00_2615)
	{
		{	/* Ast/var.scm 169 */
			return
				((((BgL_feffectz00_bglt) COBJECT(
							((BgL_feffectz00_bglt) BgL_oz00_2614)))->BgL_writez00) =
				((obj_t) BgL_vz00_2615), BUNSPEC);
		}

	}



/* &lambda2095 */
	obj_t BGl_z62lambda2095z62zzast_varz00(obj_t BgL_envz00_2616,
		obj_t BgL_oz00_2617)
	{
		{	/* Ast/var.scm 169 */
			return
				(((BgL_feffectz00_bglt) COBJECT(
						((BgL_feffectz00_bglt) BgL_oz00_2617)))->BgL_writez00);
		}

	}



/* &<@anonymous:2090> */
	obj_t BGl_z62zc3z04anonymousza32090ze3ze5zzast_varz00(obj_t BgL_envz00_2618)
	{
		{	/* Ast/var.scm 169 */
			return BNIL;
		}

	}



/* &lambda2089 */
	obj_t BGl_z62lambda2089z62zzast_varz00(obj_t BgL_envz00_2619,
		obj_t BgL_oz00_2620, obj_t BgL_vz00_2621)
	{
		{	/* Ast/var.scm 169 */
			return
				((((BgL_feffectz00_bglt) COBJECT(
							((BgL_feffectz00_bglt) BgL_oz00_2620)))->BgL_readz00) =
				((obj_t) BgL_vz00_2621), BUNSPEC);
		}

	}



/* &lambda2088 */
	obj_t BGl_z62lambda2088z62zzast_varz00(obj_t BgL_envz00_2622,
		obj_t BgL_oz00_2623)
	{
		{	/* Ast/var.scm 169 */
			return
				(((BgL_feffectz00_bglt) COBJECT(
						((BgL_feffectz00_bglt) BgL_oz00_2623)))->BgL_readz00);
		}

	}



/* &<@anonymous:2056> */
	obj_t BGl_z62zc3z04anonymousza32056ze3ze5zzast_varz00(obj_t BgL_envz00_2624,
		obj_t BgL_new1171z00_2625)
	{
		{	/* Ast/var.scm 163 */
			{
				BgL_sexitz00_bglt BgL_auxz00_4819;

				((((BgL_sexitz00_bglt) COBJECT(
								((BgL_sexitz00_bglt) BgL_new1171z00_2625)))->BgL_handlerz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sexitz00_bglt) COBJECT(((BgL_sexitz00_bglt)
									BgL_new1171z00_2625)))->BgL_detachedzf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				BgL_auxz00_4819 = ((BgL_sexitz00_bglt) BgL_new1171z00_2625);
				return ((obj_t) BgL_auxz00_4819);
			}
		}

	}



/* &lambda2054 */
	BgL_sexitz00_bglt BGl_z62lambda2054z62zzast_varz00(obj_t BgL_envz00_2626)
	{
		{	/* Ast/var.scm 163 */
			{	/* Ast/var.scm 163 */
				BgL_sexitz00_bglt BgL_new1170z00_3133;

				BgL_new1170z00_3133 =
					((BgL_sexitz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_sexitz00_bgl))));
				{	/* Ast/var.scm 163 */
					long BgL_arg2055z00_3134;

					{	/* Ast/var.scm 163 */
						long BgL_res2143z00_3135;

						BgL_res2143z00_3135 = BGL_CLASS_INDEX(BGl_sexitz00zzast_varz00);
						BgL_arg2055z00_3134 = BgL_res2143z00_3135;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1170z00_3133), BgL_arg2055z00_3134);
				}
				{	/* Ast/var.scm 163 */
					BgL_objectz00_bglt BgL_tmpz00_4830;

					BgL_tmpz00_4830 = ((BgL_objectz00_bglt) BgL_new1170z00_3133);
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4830, BFALSE);
				}
				((BgL_objectz00_bglt) BgL_new1170z00_3133);
				return BgL_new1170z00_3133;
			}
		}

	}



/* &lambda2051 */
	BgL_sexitz00_bglt BGl_z62lambda2051z62zzast_varz00(obj_t BgL_envz00_2627,
		obj_t BgL_handler1168z00_2628, obj_t BgL_detachedzf31169zf3_2629)
	{
		{	/* Ast/var.scm 163 */
			{	/* Ast/var.scm 163 */
				bool_t BgL_detachedzf31169zf3_3136;

				BgL_detachedzf31169zf3_3136 = CBOOL(BgL_detachedzf31169zf3_2629);
				{	/* Ast/var.scm 163 */
					BgL_sexitz00_bglt BgL_new1235z00_3137;

					{	/* Ast/var.scm 163 */
						BgL_sexitz00_bglt BgL_new1234z00_3138;

						BgL_new1234z00_3138 =
							((BgL_sexitz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_sexitz00_bgl))));
						{	/* Ast/var.scm 163 */
							long BgL_arg2053z00_3139;

							{	/* Ast/var.scm 163 */
								long BgL_res2142z00_3140;

								BgL_res2142z00_3140 = BGL_CLASS_INDEX(BGl_sexitz00zzast_varz00);
								BgL_arg2053z00_3139 = BgL_res2142z00_3140;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1234z00_3138),
								BgL_arg2053z00_3139);
						}
						{	/* Ast/var.scm 163 */
							BgL_objectz00_bglt BgL_tmpz00_4839;

							BgL_tmpz00_4839 = ((BgL_objectz00_bglt) BgL_new1234z00_3138);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4839, BFALSE);
						}
						((BgL_objectz00_bglt) BgL_new1234z00_3138);
						BgL_new1235z00_3137 = BgL_new1234z00_3138;
					}
					((((BgL_sexitz00_bglt) COBJECT(BgL_new1235z00_3137))->
							BgL_handlerz00) = ((obj_t) BgL_handler1168z00_2628), BUNSPEC);
					((((BgL_sexitz00_bglt) COBJECT(BgL_new1235z00_3137))->
							BgL_detachedzf3zf3) =
						((bool_t) BgL_detachedzf31169zf3_3136), BUNSPEC);
					return BgL_new1235z00_3137;
				}
			}
		}

	}



/* &<@anonymous:2071> */
	obj_t BGl_z62zc3z04anonymousza32071ze3ze5zzast_varz00(obj_t BgL_envz00_2630)
	{
		{	/* Ast/var.scm 163 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda2070 */
	obj_t BGl_z62lambda2070z62zzast_varz00(obj_t BgL_envz00_2631,
		obj_t BgL_oz00_2632, obj_t BgL_vz00_2633)
	{
		{	/* Ast/var.scm 163 */
			{	/* Ast/var.scm 163 */
				bool_t BgL_vz00_3142;

				BgL_vz00_3142 = CBOOL(BgL_vz00_2633);
				return
					((((BgL_sexitz00_bglt) COBJECT(
								((BgL_sexitz00_bglt) BgL_oz00_2632)))->BgL_detachedzf3zf3) =
					((bool_t) BgL_vz00_3142), BUNSPEC);
			}
		}

	}



/* &lambda2069 */
	obj_t BGl_z62lambda2069z62zzast_varz00(obj_t BgL_envz00_2634,
		obj_t BgL_oz00_2635)
	{
		{	/* Ast/var.scm 163 */
			return
				BBOOL(
				(((BgL_sexitz00_bglt) COBJECT(
							((BgL_sexitz00_bglt) BgL_oz00_2635)))->BgL_detachedzf3zf3));
		}

	}



/* &lambda2062 */
	obj_t BGl_z62lambda2062z62zzast_varz00(obj_t BgL_envz00_2636,
		obj_t BgL_oz00_2637, obj_t BgL_vz00_2638)
	{
		{	/* Ast/var.scm 163 */
			return
				((((BgL_sexitz00_bglt) COBJECT(
							((BgL_sexitz00_bglt) BgL_oz00_2637)))->BgL_handlerz00) =
				((obj_t) BgL_vz00_2638), BUNSPEC);
		}

	}



/* &lambda2061 */
	obj_t BGl_z62lambda2061z62zzast_varz00(obj_t BgL_envz00_2639,
		obj_t BgL_oz00_2640)
	{
		{	/* Ast/var.scm 163 */
			return
				(((BgL_sexitz00_bglt) COBJECT(
						((BgL_sexitz00_bglt) BgL_oz00_2640)))->BgL_handlerz00);
		}

	}



/* &<@anonymous:2039> */
	obj_t BGl_z62zc3z04anonymousza32039ze3ze5zzast_varz00(obj_t BgL_envz00_2641,
		obj_t BgL_new1166z00_2642)
	{
		{	/* Ast/var.scm 159 */
			{
				BgL_cvarz00_bglt BgL_auxz00_4856;

				((((BgL_cvarz00_bglt) COBJECT(
								((BgL_cvarz00_bglt) BgL_new1166z00_2642)))->BgL_macrozf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				BgL_auxz00_4856 = ((BgL_cvarz00_bglt) BgL_new1166z00_2642);
				return ((obj_t) BgL_auxz00_4856);
			}
		}

	}



/* &lambda2037 */
	BgL_cvarz00_bglt BGl_z62lambda2037z62zzast_varz00(obj_t BgL_envz00_2643)
	{
		{	/* Ast/var.scm 159 */
			{	/* Ast/var.scm 159 */
				BgL_cvarz00_bglt BgL_new1165z00_3147;

				BgL_new1165z00_3147 =
					((BgL_cvarz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_cvarz00_bgl))));
				{	/* Ast/var.scm 159 */
					long BgL_arg2038z00_3148;

					{	/* Ast/var.scm 159 */
						long BgL_res2141z00_3149;

						BgL_res2141z00_3149 = BGL_CLASS_INDEX(BGl_cvarz00zzast_varz00);
						BgL_arg2038z00_3148 = BgL_res2141z00_3149;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1165z00_3147), BgL_arg2038z00_3148);
				}
				{	/* Ast/var.scm 159 */
					BgL_objectz00_bglt BgL_tmpz00_4865;

					BgL_tmpz00_4865 = ((BgL_objectz00_bglt) BgL_new1165z00_3147);
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4865, BFALSE);
				}
				((BgL_objectz00_bglt) BgL_new1165z00_3147);
				return BgL_new1165z00_3147;
			}
		}

	}



/* &lambda2035 */
	BgL_cvarz00_bglt BGl_z62lambda2035z62zzast_varz00(obj_t BgL_envz00_2644,
		obj_t BgL_macrozf31164zf3_2645)
	{
		{	/* Ast/var.scm 159 */
			{	/* Ast/var.scm 159 */
				bool_t BgL_macrozf31164zf3_3150;

				BgL_macrozf31164zf3_3150 = CBOOL(BgL_macrozf31164zf3_2645);
				{	/* Ast/var.scm 159 */
					BgL_cvarz00_bglt BgL_new1233z00_3151;

					{	/* Ast/var.scm 159 */
						BgL_cvarz00_bglt BgL_new1232z00_3152;

						BgL_new1232z00_3152 =
							((BgL_cvarz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_cvarz00_bgl))));
						{	/* Ast/var.scm 159 */
							long BgL_arg2036z00_3153;

							{	/* Ast/var.scm 159 */
								long BgL_res2140z00_3154;

								BgL_res2140z00_3154 = BGL_CLASS_INDEX(BGl_cvarz00zzast_varz00);
								BgL_arg2036z00_3153 = BgL_res2140z00_3154;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1232z00_3152),
								BgL_arg2036z00_3153);
						}
						{	/* Ast/var.scm 159 */
							BgL_objectz00_bglt BgL_tmpz00_4874;

							BgL_tmpz00_4874 = ((BgL_objectz00_bglt) BgL_new1232z00_3152);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4874, BFALSE);
						}
						((BgL_objectz00_bglt) BgL_new1232z00_3152);
						BgL_new1233z00_3151 = BgL_new1232z00_3152;
					}
					((((BgL_cvarz00_bglt) COBJECT(BgL_new1233z00_3151))->
							BgL_macrozf3zf3) = ((bool_t) BgL_macrozf31164zf3_3150), BUNSPEC);
					return BgL_new1233z00_3151;
				}
			}
		}

	}



/* &lambda2045 */
	obj_t BGl_z62lambda2045z62zzast_varz00(obj_t BgL_envz00_2646,
		obj_t BgL_oz00_2647, obj_t BgL_vz00_2648)
	{
		{	/* Ast/var.scm 159 */
			{	/* Ast/var.scm 159 */
				bool_t BgL_vz00_3156;

				BgL_vz00_3156 = CBOOL(BgL_vz00_2648);
				return
					((((BgL_cvarz00_bglt) COBJECT(
								((BgL_cvarz00_bglt) BgL_oz00_2647)))->BgL_macrozf3zf3) =
					((bool_t) BgL_vz00_3156), BUNSPEC);
			}
		}

	}



/* &lambda2044 */
	obj_t BGl_z62lambda2044z62zzast_varz00(obj_t BgL_envz00_2649,
		obj_t BgL_oz00_2650)
	{
		{	/* Ast/var.scm 159 */
			return
				BBOOL(
				(((BgL_cvarz00_bglt) COBJECT(
							((BgL_cvarz00_bglt) BgL_oz00_2650)))->BgL_macrozf3zf3));
		}

	}



/* &<@anonymous:2005> */
	obj_t BGl_z62zc3z04anonymousza32005ze3ze5zzast_varz00(obj_t BgL_envz00_2651,
		obj_t BgL_new1162z00_2652)
	{
		{	/* Ast/var.scm 151 */
			{
				BgL_scnstz00_bglt BgL_auxz00_4885;

				((((BgL_scnstz00_bglt) COBJECT(
								((BgL_scnstz00_bglt) BgL_new1162z00_2652)))->BgL_nodez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_scnstz00_bglt) COBJECT(((BgL_scnstz00_bglt)
									BgL_new1162z00_2652)))->BgL_classz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_scnstz00_bglt) COBJECT(((BgL_scnstz00_bglt)
									BgL_new1162z00_2652)))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_4885 = ((BgL_scnstz00_bglt) BgL_new1162z00_2652);
				return ((obj_t) BgL_auxz00_4885);
			}
		}

	}



/* &lambda2003 */
	BgL_scnstz00_bglt BGl_z62lambda2003z62zzast_varz00(obj_t BgL_envz00_2653)
	{
		{	/* Ast/var.scm 151 */
			{	/* Ast/var.scm 151 */
				BgL_scnstz00_bglt BgL_new1161z00_3159;

				BgL_new1161z00_3159 =
					((BgL_scnstz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_scnstz00_bgl))));
				{	/* Ast/var.scm 151 */
					long BgL_arg2004z00_3160;

					{	/* Ast/var.scm 151 */
						long BgL_res2139z00_3161;

						BgL_res2139z00_3161 = BGL_CLASS_INDEX(BGl_scnstz00zzast_varz00);
						BgL_arg2004z00_3160 = BgL_res2139z00_3161;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1161z00_3159), BgL_arg2004z00_3160);
				}
				{	/* Ast/var.scm 151 */
					BgL_objectz00_bglt BgL_tmpz00_4898;

					BgL_tmpz00_4898 = ((BgL_objectz00_bglt) BgL_new1161z00_3159);
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4898, BFALSE);
				}
				((BgL_objectz00_bglt) BgL_new1161z00_3159);
				return BgL_new1161z00_3159;
			}
		}

	}



/* &lambda2001 */
	BgL_scnstz00_bglt BGl_z62lambda2001z62zzast_varz00(obj_t BgL_envz00_2654,
		obj_t BgL_node1158z00_2655, obj_t BgL_class1159z00_2656,
		obj_t BgL_loc1160z00_2657)
	{
		{	/* Ast/var.scm 151 */
			{	/* Ast/var.scm 151 */
				BgL_scnstz00_bglt BgL_new1231z00_3162;

				{	/* Ast/var.scm 151 */
					BgL_scnstz00_bglt BgL_new1230z00_3163;

					BgL_new1230z00_3163 =
						((BgL_scnstz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_scnstz00_bgl))));
					{	/* Ast/var.scm 151 */
						long BgL_arg2002z00_3164;

						{	/* Ast/var.scm 151 */
							long BgL_res2138z00_3165;

							BgL_res2138z00_3165 = BGL_CLASS_INDEX(BGl_scnstz00zzast_varz00);
							BgL_arg2002z00_3164 = BgL_res2138z00_3165;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1230z00_3163), BgL_arg2002z00_3164);
					}
					{	/* Ast/var.scm 151 */
						BgL_objectz00_bglt BgL_tmpz00_4906;

						BgL_tmpz00_4906 = ((BgL_objectz00_bglt) BgL_new1230z00_3163);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4906, BFALSE);
					}
					((BgL_objectz00_bglt) BgL_new1230z00_3163);
					BgL_new1231z00_3162 = BgL_new1230z00_3163;
				}
				((((BgL_scnstz00_bglt) COBJECT(BgL_new1231z00_3162))->BgL_nodez00) =
					((obj_t) BgL_node1158z00_2655), BUNSPEC);
				((((BgL_scnstz00_bglt) COBJECT(BgL_new1231z00_3162))->BgL_classz00) =
					((obj_t) BgL_class1159z00_2656), BUNSPEC);
				((((BgL_scnstz00_bglt) COBJECT(BgL_new1231z00_3162))->BgL_locz00) =
					((obj_t) BgL_loc1160z00_2657), BUNSPEC);
				return BgL_new1231z00_3162;
			}
		}

	}



/* &<@anonymous:2026> */
	obj_t BGl_z62zc3z04anonymousza32026ze3ze5zzast_varz00(obj_t BgL_envz00_2658)
	{
		{	/* Ast/var.scm 151 */
			return BUNSPEC;
		}

	}



/* &lambda2025 */
	obj_t BGl_z62lambda2025z62zzast_varz00(obj_t BgL_envz00_2659,
		obj_t BgL_oz00_2660, obj_t BgL_vz00_2661)
	{
		{	/* Ast/var.scm 151 */
			return
				((((BgL_scnstz00_bglt) COBJECT(
							((BgL_scnstz00_bglt) BgL_oz00_2660)))->BgL_locz00) =
				((obj_t) BgL_vz00_2661), BUNSPEC);
		}

	}



/* &lambda2024 */
	obj_t BGl_z62lambda2024z62zzast_varz00(obj_t BgL_envz00_2662,
		obj_t BgL_oz00_2663)
	{
		{	/* Ast/var.scm 151 */
			return
				(((BgL_scnstz00_bglt) COBJECT(
						((BgL_scnstz00_bglt) BgL_oz00_2663)))->BgL_locz00);
		}

	}



/* &lambda2018 */
	obj_t BGl_z62lambda2018z62zzast_varz00(obj_t BgL_envz00_2664,
		obj_t BgL_oz00_2665, obj_t BgL_vz00_2666)
	{
		{	/* Ast/var.scm 151 */
			return
				((((BgL_scnstz00_bglt) COBJECT(
							((BgL_scnstz00_bglt) BgL_oz00_2665)))->BgL_classz00) =
				((obj_t) BgL_vz00_2666), BUNSPEC);
		}

	}



/* &lambda2017 */
	obj_t BGl_z62lambda2017z62zzast_varz00(obj_t BgL_envz00_2667,
		obj_t BgL_oz00_2668)
	{
		{	/* Ast/var.scm 151 */
			return
				(((BgL_scnstz00_bglt) COBJECT(
						((BgL_scnstz00_bglt) BgL_oz00_2668)))->BgL_classz00);
		}

	}



/* &lambda2012 */
	obj_t BGl_z62lambda2012z62zzast_varz00(obj_t BgL_envz00_2669,
		obj_t BgL_oz00_2670, obj_t BgL_vz00_2671)
	{
		{	/* Ast/var.scm 151 */
			return
				((((BgL_scnstz00_bglt) COBJECT(
							((BgL_scnstz00_bglt) BgL_oz00_2670)))->BgL_nodez00) =
				((obj_t) BgL_vz00_2671), BUNSPEC);
		}

	}



/* &lambda2011 */
	obj_t BGl_z62lambda2011z62zzast_varz00(obj_t BgL_envz00_2672,
		obj_t BgL_oz00_2673)
	{
		{	/* Ast/var.scm 151 */
			return
				(((BgL_scnstz00_bglt) COBJECT(
						((BgL_scnstz00_bglt) BgL_oz00_2673)))->BgL_nodez00);
		}

	}



/* &<@anonymous:1988> */
	obj_t BGl_z62zc3z04anonymousza31988ze3ze5zzast_varz00(obj_t BgL_envz00_2674,
		obj_t BgL_new1156z00_2675)
	{
		{	/* Ast/var.scm 147 */
			{
				BgL_svarz00_bglt BgL_auxz00_4925;

				((((BgL_svarz00_bglt) COBJECT(
								((BgL_svarz00_bglt) BgL_new1156z00_2675)))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_4925 = ((BgL_svarz00_bglt) BgL_new1156z00_2675);
				return ((obj_t) BgL_auxz00_4925);
			}
		}

	}



/* &lambda1986 */
	BgL_svarz00_bglt BGl_z62lambda1986z62zzast_varz00(obj_t BgL_envz00_2676)
	{
		{	/* Ast/var.scm 147 */
			{	/* Ast/var.scm 147 */
				BgL_svarz00_bglt BgL_new1154z00_3173;

				BgL_new1154z00_3173 =
					((BgL_svarz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_svarz00_bgl))));
				{	/* Ast/var.scm 147 */
					long BgL_arg1987z00_3174;

					{	/* Ast/var.scm 147 */
						long BgL_res2137z00_3175;

						BgL_res2137z00_3175 = BGL_CLASS_INDEX(BGl_svarz00zzast_varz00);
						BgL_arg1987z00_3174 = BgL_res2137z00_3175;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1154z00_3173), BgL_arg1987z00_3174);
				}
				{	/* Ast/var.scm 147 */
					BgL_objectz00_bglt BgL_tmpz00_4934;

					BgL_tmpz00_4934 = ((BgL_objectz00_bglt) BgL_new1154z00_3173);
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4934, BFALSE);
				}
				((BgL_objectz00_bglt) BgL_new1154z00_3173);
				return BgL_new1154z00_3173;
			}
		}

	}



/* &lambda1984 */
	BgL_svarz00_bglt BGl_z62lambda1984z62zzast_varz00(obj_t BgL_envz00_2677,
		obj_t BgL_loc1153z00_2678)
	{
		{	/* Ast/var.scm 147 */
			{	/* Ast/var.scm 147 */
				BgL_svarz00_bglt BgL_new1229z00_3176;

				{	/* Ast/var.scm 147 */
					BgL_svarz00_bglt BgL_new1228z00_3177;

					BgL_new1228z00_3177 =
						((BgL_svarz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_svarz00_bgl))));
					{	/* Ast/var.scm 147 */
						long BgL_arg1985z00_3178;

						{	/* Ast/var.scm 147 */
							long BgL_res2136z00_3179;

							BgL_res2136z00_3179 = BGL_CLASS_INDEX(BGl_svarz00zzast_varz00);
							BgL_arg1985z00_3178 = BgL_res2136z00_3179;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1228z00_3177), BgL_arg1985z00_3178);
					}
					{	/* Ast/var.scm 147 */
						BgL_objectz00_bglt BgL_tmpz00_4942;

						BgL_tmpz00_4942 = ((BgL_objectz00_bglt) BgL_new1228z00_3177);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4942, BFALSE);
					}
					((BgL_objectz00_bglt) BgL_new1228z00_3177);
					BgL_new1229z00_3176 = BgL_new1228z00_3177;
				}
				((((BgL_svarz00_bglt) COBJECT(BgL_new1229z00_3176))->BgL_locz00) =
					((obj_t) BgL_loc1153z00_2678), BUNSPEC);
				return BgL_new1229z00_3176;
			}
		}

	}



/* &<@anonymous:1995> */
	obj_t BGl_z62zc3z04anonymousza31995ze3ze5zzast_varz00(obj_t BgL_envz00_2679)
	{
		{	/* Ast/var.scm 147 */
			return BUNSPEC;
		}

	}



/* &lambda1994 */
	obj_t BGl_z62lambda1994z62zzast_varz00(obj_t BgL_envz00_2680,
		obj_t BgL_oz00_2681, obj_t BgL_vz00_2682)
	{
		{	/* Ast/var.scm 147 */
			return
				((((BgL_svarz00_bglt) COBJECT(
							((BgL_svarz00_bglt) BgL_oz00_2681)))->BgL_locz00) =
				((obj_t) BgL_vz00_2682), BUNSPEC);
		}

	}



/* &lambda1993 */
	obj_t BGl_z62lambda1993z62zzast_varz00(obj_t BgL_envz00_2683,
		obj_t BgL_oz00_2684)
	{
		{	/* Ast/var.scm 147 */
			return
				(((BgL_svarz00_bglt) COBJECT(
						((BgL_svarz00_bglt) BgL_oz00_2684)))->BgL_locz00);
		}

	}



/* &<@anonymous:1954> */
	obj_t BGl_z62zc3z04anonymousza31954ze3ze5zzast_varz00(obj_t BgL_envz00_2685,
		obj_t BgL_new1151z00_2686)
	{
		{	/* Ast/var.scm 137 */
			{
				BgL_cfunz00_bglt BgL_auxz00_4951;

				((((BgL_funz00_bglt) COBJECT(
								((BgL_funz00_bglt)
									((BgL_cfunz00_bglt) BgL_new1151z00_2686))))->BgL_arityz00) =
					((long) ((long) 0)), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) ((BgL_cfunz00_bglt)
										BgL_new1151z00_2686))))->BgL_sidezd2effectzd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) ((BgL_cfunz00_bglt)
										BgL_new1151z00_2686))))->BgL_predicatezd2ofzd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) ((BgL_cfunz00_bglt)
										BgL_new1151z00_2686))))->BgL_stackzd2allocatorzd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) ((BgL_cfunz00_bglt)
										BgL_new1151z00_2686))))->BgL_topzf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) ((BgL_cfunz00_bglt)
										BgL_new1151z00_2686))))->BgL_thezd2closurezd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) ((BgL_cfunz00_bglt)
										BgL_new1151z00_2686))))->BgL_effectz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) ((BgL_cfunz00_bglt)
										BgL_new1151z00_2686))))->BgL_failsafez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) ((BgL_cfunz00_bglt)
										BgL_new1151z00_2686))))->BgL_argszd2noescapezd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_cfunz00_bglt) COBJECT(((BgL_cfunz00_bglt)
									BgL_new1151z00_2686)))->BgL_argszd2typezd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_cfunz00_bglt) COBJECT(((BgL_cfunz00_bglt)
									BgL_new1151z00_2686)))->BgL_macrozf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_cfunz00_bglt) COBJECT(((BgL_cfunz00_bglt)
									BgL_new1151z00_2686)))->BgL_infixzf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_cfunz00_bglt) COBJECT(((BgL_cfunz00_bglt)
									BgL_new1151z00_2686)))->BgL_methodz00) =
					((obj_t) BNIL), BUNSPEC);
				BgL_auxz00_4951 = ((BgL_cfunz00_bglt) BgL_new1151z00_2686);
				return ((obj_t) BgL_auxz00_4951);
			}
		}

	}



/* &lambda1952 */
	BgL_cfunz00_bglt BGl_z62lambda1952z62zzast_varz00(obj_t BgL_envz00_2687)
	{
		{	/* Ast/var.scm 137 */
			{	/* Ast/var.scm 137 */
				BgL_cfunz00_bglt BgL_new1150z00_3183;

				BgL_new1150z00_3183 =
					((BgL_cfunz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_cfunz00_bgl))));
				{	/* Ast/var.scm 137 */
					long BgL_arg1953z00_3184;

					{	/* Ast/var.scm 137 */
						long BgL_res2135z00_3185;

						BgL_res2135z00_3185 = BGL_CLASS_INDEX(BGl_cfunz00zzast_varz00);
						BgL_arg1953z00_3184 = BgL_res2135z00_3185;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1150z00_3183), BgL_arg1953z00_3184);
				}
				{	/* Ast/var.scm 137 */
					BgL_objectz00_bglt BgL_tmpz00_4993;

					BgL_tmpz00_4993 = ((BgL_objectz00_bglt) BgL_new1150z00_3183);
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4993, BFALSE);
				}
				((BgL_objectz00_bglt) BgL_new1150z00_3183);
				return BgL_new1150z00_3183;
			}
		}

	}



/* &lambda1949 */
	BgL_cfunz00_bglt BGl_z62lambda1949z62zzast_varz00(obj_t BgL_envz00_2688,
		obj_t BgL_arity1137z00_2689, obj_t BgL_sidezd2effect1138zd2_2690,
		obj_t BgL_predicatezd2of1139zd2_2691,
		obj_t BgL_stackzd2allocator1140zd2_2692, obj_t BgL_topzf31141zf3_2693,
		obj_t BgL_thezd2closure1142zd2_2694, obj_t BgL_effect1143z00_2695,
		obj_t BgL_failsafe1144z00_2696, obj_t BgL_argszd2noescape1145zd2_2697,
		obj_t BgL_argszd2type1146zd2_2698, obj_t BgL_macrozf31147zf3_2699,
		obj_t BgL_infixzf31148zf3_2700, obj_t BgL_method1149z00_2701)
	{
		{	/* Ast/var.scm 137 */
			{	/* Ast/var.scm 137 */
				long BgL_arity1137z00_3186;
				bool_t BgL_topzf31141zf3_3187;
				bool_t BgL_macrozf31147zf3_3188;
				bool_t BgL_infixzf31148zf3_3189;

				BgL_arity1137z00_3186 = (long) CINT(BgL_arity1137z00_2689);
				BgL_topzf31141zf3_3187 = CBOOL(BgL_topzf31141zf3_2693);
				BgL_macrozf31147zf3_3188 = CBOOL(BgL_macrozf31147zf3_2699);
				BgL_infixzf31148zf3_3189 = CBOOL(BgL_infixzf31148zf3_2700);
				{	/* Ast/var.scm 137 */
					BgL_cfunz00_bglt BgL_new1227z00_3191;

					{	/* Ast/var.scm 137 */
						BgL_cfunz00_bglt BgL_new1226z00_3192;

						BgL_new1226z00_3192 =
							((BgL_cfunz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_cfunz00_bgl))));
						{	/* Ast/var.scm 137 */
							long BgL_arg1951z00_3193;

							{	/* Ast/var.scm 137 */
								long BgL_res2134z00_3194;

								BgL_res2134z00_3194 = BGL_CLASS_INDEX(BGl_cfunz00zzast_varz00);
								BgL_arg1951z00_3193 = BgL_res2134z00_3194;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1226z00_3192),
								BgL_arg1951z00_3193);
						}
						{	/* Ast/var.scm 137 */
							BgL_objectz00_bglt BgL_tmpz00_5005;

							BgL_tmpz00_5005 = ((BgL_objectz00_bglt) BgL_new1226z00_3192);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5005, BFALSE);
						}
						((BgL_objectz00_bglt) BgL_new1226z00_3192);
						BgL_new1227z00_3191 = BgL_new1226z00_3192;
					}
					((((BgL_funz00_bglt) COBJECT(
									((BgL_funz00_bglt) BgL_new1227z00_3191)))->BgL_arityz00) =
						((long) BgL_arity1137z00_3186), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
										BgL_new1227z00_3191)))->BgL_sidezd2effectzd2) =
						((obj_t) BgL_sidezd2effect1138zd2_2690), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
										BgL_new1227z00_3191)))->BgL_predicatezd2ofzd2) =
						((obj_t) BgL_predicatezd2of1139zd2_2691), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
										BgL_new1227z00_3191)))->BgL_stackzd2allocatorzd2) =
						((obj_t) BgL_stackzd2allocator1140zd2_2692), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
										BgL_new1227z00_3191)))->BgL_topzf3zf3) =
						((bool_t) BgL_topzf31141zf3_3187), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
										BgL_new1227z00_3191)))->BgL_thezd2closurezd2) =
						((obj_t) BgL_thezd2closure1142zd2_2694), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
										BgL_new1227z00_3191)))->BgL_effectz00) =
						((obj_t) BgL_effect1143z00_2695), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
										BgL_new1227z00_3191)))->BgL_failsafez00) =
						((obj_t) BgL_failsafe1144z00_2696), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
										BgL_new1227z00_3191)))->BgL_argszd2noescapezd2) =
						((obj_t) BgL_argszd2noescape1145zd2_2697), BUNSPEC);
					((((BgL_cfunz00_bglt) COBJECT(BgL_new1227z00_3191))->
							BgL_argszd2typezd2) =
						((obj_t) BgL_argszd2type1146zd2_2698), BUNSPEC);
					((((BgL_cfunz00_bglt) COBJECT(BgL_new1227z00_3191))->
							BgL_macrozf3zf3) = ((bool_t) BgL_macrozf31147zf3_3188), BUNSPEC);
					((((BgL_cfunz00_bglt) COBJECT(BgL_new1227z00_3191))->
							BgL_infixzf3zf3) = ((bool_t) BgL_infixzf31148zf3_3189), BUNSPEC);
					((((BgL_cfunz00_bglt) COBJECT(BgL_new1227z00_3191))->BgL_methodz00) =
						((obj_t) ((obj_t) BgL_method1149z00_2701)), BUNSPEC);
					return BgL_new1227z00_3191;
				}
			}
		}

	}



/* &<@anonymous:1978> */
	obj_t BGl_z62zc3z04anonymousza31978ze3ze5zzast_varz00(obj_t BgL_envz00_2702)
	{
		{	/* Ast/var.scm 137 */
			return BNIL;
		}

	}



/* &lambda1977 */
	obj_t BGl_z62lambda1977z62zzast_varz00(obj_t BgL_envz00_2703,
		obj_t BgL_oz00_2704, obj_t BgL_vz00_2705)
	{
		{	/* Ast/var.scm 137 */
			return
				((((BgL_cfunz00_bglt) COBJECT(
							((BgL_cfunz00_bglt) BgL_oz00_2704)))->BgL_methodz00) = ((obj_t)
					((obj_t) BgL_vz00_2705)), BUNSPEC);
		}

	}



/* &lambda1976 */
	obj_t BGl_z62lambda1976z62zzast_varz00(obj_t BgL_envz00_2706,
		obj_t BgL_oz00_2707)
	{
		{	/* Ast/var.scm 137 */
			return
				(((BgL_cfunz00_bglt) COBJECT(
						((BgL_cfunz00_bglt) BgL_oz00_2707)))->BgL_methodz00);
		}

	}



/* &<@anonymous:1971> */
	obj_t BGl_z62zc3z04anonymousza31971ze3ze5zzast_varz00(obj_t BgL_envz00_2708)
	{
		{	/* Ast/var.scm 137 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1970 */
	obj_t BGl_z62lambda1970z62zzast_varz00(obj_t BgL_envz00_2709,
		obj_t BgL_oz00_2710, obj_t BgL_vz00_2711)
	{
		{	/* Ast/var.scm 137 */
			{	/* Ast/var.scm 137 */
				bool_t BgL_vz00_3199;

				BgL_vz00_3199 = CBOOL(BgL_vz00_2711);
				return
					((((BgL_cfunz00_bglt) COBJECT(
								((BgL_cfunz00_bglt) BgL_oz00_2710)))->BgL_infixzf3zf3) =
					((bool_t) BgL_vz00_3199), BUNSPEC);
			}
		}

	}



/* &lambda1969 */
	obj_t BGl_z62lambda1969z62zzast_varz00(obj_t BgL_envz00_2712,
		obj_t BgL_oz00_2713)
	{
		{	/* Ast/var.scm 137 */
			return
				BBOOL(
				(((BgL_cfunz00_bglt) COBJECT(
							((BgL_cfunz00_bglt) BgL_oz00_2713)))->BgL_infixzf3zf3));
		}

	}



/* &lambda1964 */
	obj_t BGl_z62lambda1964z62zzast_varz00(obj_t BgL_envz00_2714,
		obj_t BgL_oz00_2715, obj_t BgL_vz00_2716)
	{
		{	/* Ast/var.scm 137 */
			{	/* Ast/var.scm 137 */
				bool_t BgL_vz00_3202;

				BgL_vz00_3202 = CBOOL(BgL_vz00_2716);
				return
					((((BgL_cfunz00_bglt) COBJECT(
								((BgL_cfunz00_bglt) BgL_oz00_2715)))->BgL_macrozf3zf3) =
					((bool_t) BgL_vz00_3202), BUNSPEC);
			}
		}

	}



/* &lambda1963 */
	obj_t BGl_z62lambda1963z62zzast_varz00(obj_t BgL_envz00_2717,
		obj_t BgL_oz00_2718)
	{
		{	/* Ast/var.scm 137 */
			return
				BBOOL(
				(((BgL_cfunz00_bglt) COBJECT(
							((BgL_cfunz00_bglt) BgL_oz00_2718)))->BgL_macrozf3zf3));
		}

	}



/* &lambda1959 */
	obj_t BGl_z62lambda1959z62zzast_varz00(obj_t BgL_envz00_2719,
		obj_t BgL_oz00_2720, obj_t BgL_vz00_2721)
	{
		{	/* Ast/var.scm 137 */
			return
				((((BgL_cfunz00_bglt) COBJECT(
							((BgL_cfunz00_bglt) BgL_oz00_2720)))->BgL_argszd2typezd2) =
				((obj_t) BgL_vz00_2721), BUNSPEC);
		}

	}



/* &lambda1958 */
	obj_t BGl_z62lambda1958z62zzast_varz00(obj_t BgL_envz00_2722,
		obj_t BgL_oz00_2723)
	{
		{	/* Ast/var.scm 137 */
			return
				(((BgL_cfunz00_bglt) COBJECT(
						((BgL_cfunz00_bglt) BgL_oz00_2723)))->BgL_argszd2typezd2);
		}

	}



/* &<@anonymous:1862> */
	obj_t BGl_z62zc3z04anonymousza31862ze3ze5zzast_varz00(obj_t BgL_envz00_2724,
		obj_t BgL_new1135z00_2725)
	{
		{	/* Ast/var.scm 107 */
			{
				BgL_sfunz00_bglt BgL_auxz00_5054;

				((((BgL_funz00_bglt) COBJECT(
								((BgL_funz00_bglt)
									((BgL_sfunz00_bglt) BgL_new1135z00_2725))))->BgL_arityz00) =
					((long) ((long) 0)), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1135z00_2725))))->BgL_sidezd2effectzd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1135z00_2725))))->BgL_predicatezd2ofzd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1135z00_2725))))->BgL_stackzd2allocatorzd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1135z00_2725))))->BgL_topzf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1135z00_2725))))->BgL_thezd2closurezd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1135z00_2725))))->BgL_effectz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1135z00_2725))))->BgL_failsafez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1135z00_2725))))->BgL_argszd2noescapezd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1135z00_2725)))->BgL_propertyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1135z00_2725)))->BgL_argsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1135z00_2725)))->BgL_argszd2namezd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1135z00_2725)))->BgL_bodyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1135z00_2725)))->BgL_classz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1135z00_2725)))->BgL_dssslzd2keywordszd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1135z00_2725)))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1135z00_2725)))->BgL_optionalsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1135z00_2725)))->BgL_keysz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1135z00_2725)))->BgL_thezd2closurezd2globalz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1135z00_2725)))->BgL_strengthz00) =
					((obj_t) CNST_TABLE_REF(((long) 71))), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1135z00_2725)))->BgL_stackablez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_5054 = ((BgL_sfunz00_bglt) BgL_new1135z00_2725);
				return ((obj_t) BgL_auxz00_5054);
			}
		}

	}



/* &lambda1860 */
	BgL_sfunz00_bglt BGl_z62lambda1860z62zzast_varz00(obj_t BgL_envz00_2726)
	{
		{	/* Ast/var.scm 107 */
			{	/* Ast/var.scm 107 */
				BgL_sfunz00_bglt BgL_new1134z00_3207;

				BgL_new1134z00_3207 =
					((BgL_sfunz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_sfunz00_bgl))));
				{	/* Ast/var.scm 107 */
					long BgL_arg1861z00_3208;

					{	/* Ast/var.scm 107 */
						long BgL_res2133z00_3209;

						BgL_res2133z00_3209 = BGL_CLASS_INDEX(BGl_sfunz00zzast_varz00);
						BgL_arg1861z00_3208 = BgL_res2133z00_3209;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1134z00_3207), BgL_arg1861z00_3208);
				}
				{	/* Ast/var.scm 107 */
					BgL_objectz00_bglt BgL_tmpz00_5113;

					BgL_tmpz00_5113 = ((BgL_objectz00_bglt) BgL_new1134z00_3207);
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5113, BFALSE);
				}
				((BgL_objectz00_bglt) BgL_new1134z00_3207);
				return BgL_new1134z00_3207;
			}
		}

	}



/* &lambda1858 */
	BgL_sfunz00_bglt BGl_z62lambda1858z62zzast_varz00(obj_t BgL_envz00_2727,
		obj_t BgL_arity1113z00_2728, obj_t BgL_sidezd2effect1114zd2_2729,
		obj_t BgL_predicatezd2of1115zd2_2730,
		obj_t BgL_stackzd2allocator1116zd2_2731, obj_t BgL_topzf31117zf3_2732,
		obj_t BgL_thezd2closure1118zd2_2733, obj_t BgL_effect1119z00_2734,
		obj_t BgL_failsafe1120z00_2735, obj_t BgL_argszd2noescape1121zd2_2736,
		obj_t BgL_property1122z00_2737, obj_t BgL_args1123z00_2738,
		obj_t BgL_argszd2name1124zd2_2739, obj_t BgL_body1125z00_2740,
		obj_t BgL_class1126z00_2741, obj_t BgL_dssslzd2keywords1127zd2_2742,
		obj_t BgL_loc1128z00_2743, obj_t BgL_optionals1129z00_2744,
		obj_t BgL_keys1130z00_2745, obj_t BgL_thezd2closurezd2global1131z00_2746,
		obj_t BgL_strength1132z00_2747, obj_t BgL_stackable1133z00_2748)
	{
		{	/* Ast/var.scm 107 */
			{	/* Ast/var.scm 107 */
				long BgL_arity1113z00_3210;
				bool_t BgL_topzf31117zf3_3211;

				BgL_arity1113z00_3210 = (long) CINT(BgL_arity1113z00_2728);
				BgL_topzf31117zf3_3211 = CBOOL(BgL_topzf31117zf3_2732);
				{	/* Ast/var.scm 107 */
					BgL_sfunz00_bglt BgL_new1225z00_3213;

					{	/* Ast/var.scm 107 */
						BgL_sfunz00_bglt BgL_new1224z00_3214;

						BgL_new1224z00_3214 =
							((BgL_sfunz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_sfunz00_bgl))));
						{	/* Ast/var.scm 107 */
							long BgL_arg1859z00_3215;

							{	/* Ast/var.scm 107 */
								long BgL_res2132z00_3216;

								BgL_res2132z00_3216 = BGL_CLASS_INDEX(BGl_sfunz00zzast_varz00);
								BgL_arg1859z00_3215 = BgL_res2132z00_3216;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1224z00_3214),
								BgL_arg1859z00_3215);
						}
						{	/* Ast/var.scm 107 */
							BgL_objectz00_bglt BgL_tmpz00_5123;

							BgL_tmpz00_5123 = ((BgL_objectz00_bglt) BgL_new1224z00_3214);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5123, BFALSE);
						}
						((BgL_objectz00_bglt) BgL_new1224z00_3214);
						BgL_new1225z00_3213 = BgL_new1224z00_3214;
					}
					((((BgL_funz00_bglt) COBJECT(
									((BgL_funz00_bglt) BgL_new1225z00_3213)))->BgL_arityz00) =
						((long) BgL_arity1113z00_3210), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
										BgL_new1225z00_3213)))->BgL_sidezd2effectzd2) =
						((obj_t) BgL_sidezd2effect1114zd2_2729), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
										BgL_new1225z00_3213)))->BgL_predicatezd2ofzd2) =
						((obj_t) BgL_predicatezd2of1115zd2_2730), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
										BgL_new1225z00_3213)))->BgL_stackzd2allocatorzd2) =
						((obj_t) BgL_stackzd2allocator1116zd2_2731), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
										BgL_new1225z00_3213)))->BgL_topzf3zf3) =
						((bool_t) BgL_topzf31117zf3_3211), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
										BgL_new1225z00_3213)))->BgL_thezd2closurezd2) =
						((obj_t) BgL_thezd2closure1118zd2_2733), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
										BgL_new1225z00_3213)))->BgL_effectz00) =
						((obj_t) BgL_effect1119z00_2734), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
										BgL_new1225z00_3213)))->BgL_failsafez00) =
						((obj_t) BgL_failsafe1120z00_2735), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
										BgL_new1225z00_3213)))->BgL_argszd2noescapezd2) =
						((obj_t) BgL_argszd2noescape1121zd2_2736), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(BgL_new1225z00_3213))->
							BgL_propertyz00) = ((obj_t) BgL_property1122z00_2737), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(BgL_new1225z00_3213))->BgL_argsz00) =
						((obj_t) BgL_args1123z00_2738), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(BgL_new1225z00_3213))->
							BgL_argszd2namezd2) =
						((obj_t) BgL_argszd2name1124zd2_2739), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(BgL_new1225z00_3213))->BgL_bodyz00) =
						((obj_t) BgL_body1125z00_2740), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(BgL_new1225z00_3213))->BgL_classz00) =
						((obj_t) BgL_class1126z00_2741), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(BgL_new1225z00_3213))->
							BgL_dssslzd2keywordszd2) =
						((obj_t) BgL_dssslzd2keywords1127zd2_2742), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(BgL_new1225z00_3213))->BgL_locz00) =
						((obj_t) BgL_loc1128z00_2743), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(BgL_new1225z00_3213))->
							BgL_optionalsz00) = ((obj_t) BgL_optionals1129z00_2744), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(BgL_new1225z00_3213))->BgL_keysz00) =
						((obj_t) BgL_keys1130z00_2745), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(BgL_new1225z00_3213))->
							BgL_thezd2closurezd2globalz00) =
						((obj_t) BgL_thezd2closurezd2global1131z00_2746), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(BgL_new1225z00_3213))->
							BgL_strengthz00) =
						((obj_t) ((obj_t) BgL_strength1132z00_2747)), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(BgL_new1225z00_3213))->
							BgL_stackablez00) = ((obj_t) BgL_stackable1133z00_2748), BUNSPEC);
					return BgL_new1225z00_3213;
				}
			}
		}

	}



/* &<@anonymous:1943> */
	obj_t BGl_z62zc3z04anonymousza31943ze3ze5zzast_varz00(obj_t BgL_envz00_2749)
	{
		{	/* Ast/var.scm 107 */
			return BUNSPEC;
		}

	}



/* &lambda1942 */
	obj_t BGl_z62lambda1942z62zzast_varz00(obj_t BgL_envz00_2750,
		obj_t BgL_oz00_2751, obj_t BgL_vz00_2752)
	{
		{	/* Ast/var.scm 107 */
			return
				((((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt) BgL_oz00_2751)))->BgL_stackablez00) =
				((obj_t) BgL_vz00_2752), BUNSPEC);
		}

	}



/* &lambda1941 */
	obj_t BGl_z62lambda1941z62zzast_varz00(obj_t BgL_envz00_2753,
		obj_t BgL_oz00_2754)
	{
		{	/* Ast/var.scm 107 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_2754)))->BgL_stackablez00);
		}

	}



/* &<@anonymous:1936> */
	obj_t BGl_z62zc3z04anonymousza31936ze3ze5zzast_varz00(obj_t BgL_envz00_2755)
	{
		{	/* Ast/var.scm 107 */
			return CNST_TABLE_REF(((long) 72));
		}

	}



/* &lambda1935 */
	obj_t BGl_z62lambda1935z62zzast_varz00(obj_t BgL_envz00_2756,
		obj_t BgL_oz00_2757, obj_t BgL_vz00_2758)
	{
		{	/* Ast/var.scm 107 */
			return
				((((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt) BgL_oz00_2757)))->BgL_strengthz00) = ((obj_t)
					((obj_t) BgL_vz00_2758)), BUNSPEC);
		}

	}



/* &lambda1934 */
	obj_t BGl_z62lambda1934z62zzast_varz00(obj_t BgL_envz00_2759,
		obj_t BgL_oz00_2760)
	{
		{	/* Ast/var.scm 107 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_2760)))->BgL_strengthz00);
		}

	}



/* &<@anonymous:1929> */
	obj_t BGl_z62zc3z04anonymousza31929ze3ze5zzast_varz00(obj_t BgL_envz00_2761)
	{
		{	/* Ast/var.scm 107 */
			return BUNSPEC;
		}

	}



/* &lambda1928 */
	obj_t BGl_z62lambda1928z62zzast_varz00(obj_t BgL_envz00_2762,
		obj_t BgL_oz00_2763, obj_t BgL_vz00_2764)
	{
		{	/* Ast/var.scm 107 */
			return
				((((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt) BgL_oz00_2763)))->
					BgL_thezd2closurezd2globalz00) = ((obj_t) BgL_vz00_2764), BUNSPEC);
		}

	}



/* &lambda1927 */
	obj_t BGl_z62lambda1927z62zzast_varz00(obj_t BgL_envz00_2765,
		obj_t BgL_oz00_2766)
	{
		{	/* Ast/var.scm 107 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_2766)))->
				BgL_thezd2closurezd2globalz00);
		}

	}



/* &<@anonymous:1922> */
	obj_t BGl_z62zc3z04anonymousza31922ze3ze5zzast_varz00(obj_t BgL_envz00_2767)
	{
		{	/* Ast/var.scm 107 */
			return BNIL;
		}

	}



/* &lambda1921 */
	obj_t BGl_z62lambda1921z62zzast_varz00(obj_t BgL_envz00_2768,
		obj_t BgL_oz00_2769, obj_t BgL_vz00_2770)
	{
		{	/* Ast/var.scm 107 */
			return
				((((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt) BgL_oz00_2769)))->BgL_keysz00) =
				((obj_t) BgL_vz00_2770), BUNSPEC);
		}

	}



/* &lambda1920 */
	obj_t BGl_z62lambda1920z62zzast_varz00(obj_t BgL_envz00_2771,
		obj_t BgL_oz00_2772)
	{
		{	/* Ast/var.scm 107 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_2772)))->BgL_keysz00);
		}

	}



/* &<@anonymous:1915> */
	obj_t BGl_z62zc3z04anonymousza31915ze3ze5zzast_varz00(obj_t BgL_envz00_2773)
	{
		{	/* Ast/var.scm 107 */
			return BNIL;
		}

	}



/* &lambda1914 */
	obj_t BGl_z62lambda1914z62zzast_varz00(obj_t BgL_envz00_2774,
		obj_t BgL_oz00_2775, obj_t BgL_vz00_2776)
	{
		{	/* Ast/var.scm 107 */
			return
				((((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt) BgL_oz00_2775)))->BgL_optionalsz00) =
				((obj_t) BgL_vz00_2776), BUNSPEC);
		}

	}



/* &lambda1913 */
	obj_t BGl_z62lambda1913z62zzast_varz00(obj_t BgL_envz00_2777,
		obj_t BgL_oz00_2778)
	{
		{	/* Ast/var.scm 107 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_2778)))->BgL_optionalsz00);
		}

	}



/* &<@anonymous:1908> */
	obj_t BGl_z62zc3z04anonymousza31908ze3ze5zzast_varz00(obj_t BgL_envz00_2779)
	{
		{	/* Ast/var.scm 107 */
			return BUNSPEC;
		}

	}



/* &lambda1907 */
	obj_t BGl_z62lambda1907z62zzast_varz00(obj_t BgL_envz00_2780,
		obj_t BgL_oz00_2781, obj_t BgL_vz00_2782)
	{
		{	/* Ast/var.scm 107 */
			return
				((((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt) BgL_oz00_2781)))->BgL_locz00) =
				((obj_t) BgL_vz00_2782), BUNSPEC);
		}

	}



/* &lambda1906 */
	obj_t BGl_z62lambda1906z62zzast_varz00(obj_t BgL_envz00_2783,
		obj_t BgL_oz00_2784)
	{
		{	/* Ast/var.scm 107 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_2784)))->BgL_locz00);
		}

	}



/* &<@anonymous:1901> */
	obj_t BGl_z62zc3z04anonymousza31901ze3ze5zzast_varz00(obj_t BgL_envz00_2785)
	{
		{	/* Ast/var.scm 107 */
			return BNIL;
		}

	}



/* &lambda1900 */
	obj_t BGl_z62lambda1900z62zzast_varz00(obj_t BgL_envz00_2786,
		obj_t BgL_oz00_2787, obj_t BgL_vz00_2788)
	{
		{	/* Ast/var.scm 107 */
			return
				((((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt) BgL_oz00_2787)))->BgL_dssslzd2keywordszd2) =
				((obj_t) BgL_vz00_2788), BUNSPEC);
		}

	}



/* &lambda1899 */
	obj_t BGl_z62lambda1899z62zzast_varz00(obj_t BgL_envz00_2789,
		obj_t BgL_oz00_2790)
	{
		{	/* Ast/var.scm 107 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_2790)))->BgL_dssslzd2keywordszd2);
		}

	}



/* &lambda1894 */
	obj_t BGl_z62lambda1894z62zzast_varz00(obj_t BgL_envz00_2791,
		obj_t BgL_oz00_2792, obj_t BgL_vz00_2793)
	{
		{	/* Ast/var.scm 107 */
			return
				((((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt) BgL_oz00_2792)))->BgL_classz00) =
				((obj_t) BgL_vz00_2793), BUNSPEC);
		}

	}



/* &lambda1893 */
	obj_t BGl_z62lambda1893z62zzast_varz00(obj_t BgL_envz00_2794,
		obj_t BgL_oz00_2795)
	{
		{	/* Ast/var.scm 107 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_2795)))->BgL_classz00);
		}

	}



/* &<@anonymous:1888> */
	obj_t BGl_z62zc3z04anonymousza31888ze3ze5zzast_varz00(obj_t BgL_envz00_2796)
	{
		{	/* Ast/var.scm 107 */
			return BUNSPEC;
		}

	}



/* &lambda1887 */
	obj_t BGl_z62lambda1887z62zzast_varz00(obj_t BgL_envz00_2797,
		obj_t BgL_oz00_2798, obj_t BgL_vz00_2799)
	{
		{	/* Ast/var.scm 107 */
			return
				((((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt) BgL_oz00_2798)))->BgL_bodyz00) =
				((obj_t) BgL_vz00_2799), BUNSPEC);
		}

	}



/* &lambda1886 */
	obj_t BGl_z62lambda1886z62zzast_varz00(obj_t BgL_envz00_2800,
		obj_t BgL_oz00_2801)
	{
		{	/* Ast/var.scm 107 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_2801)))->BgL_bodyz00);
		}

	}



/* &lambda1881 */
	obj_t BGl_z62lambda1881z62zzast_varz00(obj_t BgL_envz00_2802,
		obj_t BgL_oz00_2803, obj_t BgL_vz00_2804)
	{
		{	/* Ast/var.scm 107 */
			return
				((((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt) BgL_oz00_2803)))->BgL_argszd2namezd2) =
				((obj_t) BgL_vz00_2804), BUNSPEC);
		}

	}



/* &lambda1880 */
	obj_t BGl_z62lambda1880z62zzast_varz00(obj_t BgL_envz00_2805,
		obj_t BgL_oz00_2806)
	{
		{	/* Ast/var.scm 107 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_2806)))->BgL_argszd2namezd2);
		}

	}



/* &lambda1876 */
	obj_t BGl_z62lambda1876z62zzast_varz00(obj_t BgL_envz00_2807,
		obj_t BgL_oz00_2808, obj_t BgL_vz00_2809)
	{
		{	/* Ast/var.scm 107 */
			return
				((((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt) BgL_oz00_2808)))->BgL_argsz00) =
				((obj_t) BgL_vz00_2809), BUNSPEC);
		}

	}



/* &lambda1875 */
	obj_t BGl_z62lambda1875z62zzast_varz00(obj_t BgL_envz00_2810,
		obj_t BgL_oz00_2811)
	{
		{	/* Ast/var.scm 107 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_2811)))->BgL_argsz00);
		}

	}



/* &<@anonymous:1871> */
	obj_t BGl_z62zc3z04anonymousza31871ze3ze5zzast_varz00(obj_t BgL_envz00_2812)
	{
		{	/* Ast/var.scm 107 */
			return BNIL;
		}

	}



/* &lambda1870 */
	obj_t BGl_z62lambda1870z62zzast_varz00(obj_t BgL_envz00_2813,
		obj_t BgL_oz00_2814, obj_t BgL_vz00_2815)
	{
		{	/* Ast/var.scm 107 */
			return
				((((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt) BgL_oz00_2814)))->BgL_propertyz00) =
				((obj_t) BgL_vz00_2815), BUNSPEC);
		}

	}



/* &lambda1869 */
	obj_t BGl_z62lambda1869z62zzast_varz00(obj_t BgL_envz00_2816,
		obj_t BgL_oz00_2817)
	{
		{	/* Ast/var.scm 107 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_2817)))->BgL_propertyz00);
		}

	}



/* &<@anonymous:1745> */
	obj_t BGl_z62zc3z04anonymousza31745ze3ze5zzast_varz00(obj_t BgL_envz00_2818,
		obj_t BgL_new1111z00_2819)
	{
		{	/* Ast/var.scm 79 */
			{
				BgL_funz00_bglt BgL_auxz00_5208;

				((((BgL_funz00_bglt) COBJECT(
								((BgL_funz00_bglt) BgL_new1111z00_2819)))->BgL_arityz00) =
					((long) ((long) 0)), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_new1111z00_2819)))->
						BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_new1111z00_2819)))->
						BgL_predicatezd2ofzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_new1111z00_2819)))->
						BgL_stackzd2allocatorzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_new1111z00_2819)))->
						BgL_topzf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_new1111z00_2819)))->
						BgL_thezd2closurezd2) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_new1111z00_2819)))->
						BgL_effectz00) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_new1111z00_2819)))->
						BgL_failsafez00) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_new1111z00_2819)))->
						BgL_argszd2noescapezd2) = ((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_5208 = ((BgL_funz00_bglt) BgL_new1111z00_2819);
				return ((obj_t) BgL_auxz00_5208);
			}
		}

	}



/* &lambda1743 */
	BgL_funz00_bglt BGl_z62lambda1743z62zzast_varz00(obj_t BgL_envz00_2820)
	{
		{	/* Ast/var.scm 79 */
			{	/* Ast/var.scm 79 */
				BgL_funz00_bglt BgL_new1110z00_3243;

				BgL_new1110z00_3243 =
					((BgL_funz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct BgL_funz00_bgl))));
				{	/* Ast/var.scm 79 */
					long BgL_arg1744z00_3244;

					{	/* Ast/var.scm 79 */
						long BgL_res2131z00_3245;

						BgL_res2131z00_3245 = BGL_CLASS_INDEX(BGl_funz00zzast_varz00);
						BgL_arg1744z00_3244 = BgL_res2131z00_3245;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1110z00_3243), BgL_arg1744z00_3244);
				}
				return BgL_new1110z00_3243;
			}
		}

	}



/* &lambda1741 */
	BgL_funz00_bglt BGl_z62lambda1741z62zzast_varz00(obj_t BgL_envz00_2821,
		obj_t BgL_arity1101z00_2822, obj_t BgL_sidezd2effect1102zd2_2823,
		obj_t BgL_predicatezd2of1103zd2_2824,
		obj_t BgL_stackzd2allocator1104zd2_2825, obj_t BgL_topzf31105zf3_2826,
		obj_t BgL_thezd2closure1106zd2_2827, obj_t BgL_effect1107z00_2828,
		obj_t BgL_failsafe1108z00_2829, obj_t BgL_argszd2noescape1109zd2_2830)
	{
		{	/* Ast/var.scm 79 */
			{	/* Ast/var.scm 79 */
				long BgL_arity1101z00_3246;
				bool_t BgL_topzf31105zf3_3247;

				BgL_arity1101z00_3246 = (long) CINT(BgL_arity1101z00_2822);
				BgL_topzf31105zf3_3247 = CBOOL(BgL_topzf31105zf3_2826);
				{	/* Ast/var.scm 79 */
					BgL_funz00_bglt BgL_new1223z00_3248;

					{	/* Ast/var.scm 79 */
						BgL_funz00_bglt BgL_new1222z00_3249;

						BgL_new1222z00_3249 =
							((BgL_funz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_funz00_bgl))));
						{	/* Ast/var.scm 79 */
							long BgL_arg1742z00_3250;

							{	/* Ast/var.scm 79 */
								long BgL_res2130z00_3251;

								BgL_res2130z00_3251 = BGL_CLASS_INDEX(BGl_funz00zzast_varz00);
								BgL_arg1742z00_3250 = BgL_res2130z00_3251;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1222z00_3249),
								BgL_arg1742z00_3250);
						}
						BgL_new1223z00_3248 = BgL_new1222z00_3249;
					}
					((((BgL_funz00_bglt) COBJECT(BgL_new1223z00_3248))->BgL_arityz00) =
						((long) BgL_arity1101z00_3246), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(BgL_new1223z00_3248))->
							BgL_sidezd2effectzd2) =
						((obj_t) BgL_sidezd2effect1102zd2_2823), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(BgL_new1223z00_3248))->
							BgL_predicatezd2ofzd2) =
						((obj_t) BgL_predicatezd2of1103zd2_2824), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(BgL_new1223z00_3248))->
							BgL_stackzd2allocatorzd2) =
						((obj_t) BgL_stackzd2allocator1104zd2_2825), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(BgL_new1223z00_3248))->BgL_topzf3zf3) =
						((bool_t) BgL_topzf31105zf3_3247), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(BgL_new1223z00_3248))->
							BgL_thezd2closurezd2) =
						((obj_t) BgL_thezd2closure1106zd2_2827), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(BgL_new1223z00_3248))->BgL_effectz00) =
						((obj_t) BgL_effect1107z00_2828), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(BgL_new1223z00_3248))->BgL_failsafez00) =
						((obj_t) BgL_failsafe1108z00_2829), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(BgL_new1223z00_3248))->
							BgL_argszd2noescapezd2) =
						((obj_t) BgL_argszd2noescape1109zd2_2830), BUNSPEC);
					return BgL_new1223z00_3248;
				}
			}
		}

	}



/* &<@anonymous:1851> */
	obj_t BGl_z62zc3z04anonymousza31851ze3ze5zzast_varz00(obj_t BgL_envz00_2831)
	{
		{	/* Ast/var.scm 79 */
			return BUNSPEC;
		}

	}



/* &lambda1850 */
	obj_t BGl_z62lambda1850z62zzast_varz00(obj_t BgL_envz00_2832,
		obj_t BgL_oz00_2833, obj_t BgL_vz00_2834)
	{
		{	/* Ast/var.scm 79 */
			return
				((((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt) BgL_oz00_2833)))->BgL_argszd2noescapezd2) =
				((obj_t) BgL_vz00_2834), BUNSPEC);
		}

	}



/* &lambda1849 */
	obj_t BGl_z62lambda1849z62zzast_varz00(obj_t BgL_envz00_2835,
		obj_t BgL_oz00_2836)
	{
		{	/* Ast/var.scm 79 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_2836)))->BgL_argszd2noescapezd2);
		}

	}



/* &<@anonymous:1843> */
	obj_t BGl_z62zc3z04anonymousza31843ze3ze5zzast_varz00(obj_t BgL_envz00_2837)
	{
		{	/* Ast/var.scm 79 */
			return BUNSPEC;
		}

	}



/* &lambda1842 */
	obj_t BGl_z62lambda1842z62zzast_varz00(obj_t BgL_envz00_2838,
		obj_t BgL_oz00_2839, obj_t BgL_vz00_2840)
	{
		{	/* Ast/var.scm 79 */
			return
				((((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt) BgL_oz00_2839)))->BgL_failsafez00) =
				((obj_t) BgL_vz00_2840), BUNSPEC);
		}

	}



/* &lambda1841 */
	obj_t BGl_z62lambda1841z62zzast_varz00(obj_t BgL_envz00_2841,
		obj_t BgL_oz00_2842)
	{
		{	/* Ast/var.scm 79 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_2842)))->BgL_failsafez00);
		}

	}



/* &<@anonymous:1833> */
	obj_t BGl_z62zc3z04anonymousza31833ze3ze5zzast_varz00(obj_t BgL_envz00_2843)
	{
		{	/* Ast/var.scm 79 */
			return BUNSPEC;
		}

	}



/* &lambda1832 */
	obj_t BGl_z62lambda1832z62zzast_varz00(obj_t BgL_envz00_2844,
		obj_t BgL_oz00_2845, obj_t BgL_vz00_2846)
	{
		{	/* Ast/var.scm 79 */
			return
				((((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt) BgL_oz00_2845)))->BgL_effectz00) =
				((obj_t) BgL_vz00_2846), BUNSPEC);
		}

	}



/* &lambda1831 */
	obj_t BGl_z62lambda1831z62zzast_varz00(obj_t BgL_envz00_2847,
		obj_t BgL_oz00_2848)
	{
		{	/* Ast/var.scm 79 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_2848)))->BgL_effectz00);
		}

	}



/* &<@anonymous:1826> */
	obj_t BGl_z62zc3z04anonymousza31826ze3ze5zzast_varz00(obj_t BgL_envz00_2849)
	{
		{	/* Ast/var.scm 79 */
			return BUNSPEC;
		}

	}



/* &lambda1825 */
	obj_t BGl_z62lambda1825z62zzast_varz00(obj_t BgL_envz00_2850,
		obj_t BgL_oz00_2851, obj_t BgL_vz00_2852)
	{
		{	/* Ast/var.scm 79 */
			return
				((((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt) BgL_oz00_2851)))->BgL_thezd2closurezd2) =
				((obj_t) BgL_vz00_2852), BUNSPEC);
		}

	}



/* &lambda1824 */
	obj_t BGl_z62lambda1824z62zzast_varz00(obj_t BgL_envz00_2853,
		obj_t BgL_oz00_2854)
	{
		{	/* Ast/var.scm 79 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_2854)))->BgL_thezd2closurezd2);
		}

	}



/* &<@anonymous:1814> */
	obj_t BGl_z62zc3z04anonymousza31814ze3ze5zzast_varz00(obj_t BgL_envz00_2855)
	{
		{	/* Ast/var.scm 79 */
			return BBOOL(((bool_t) 1));
		}

	}



/* &lambda1813 */
	obj_t BGl_z62lambda1813z62zzast_varz00(obj_t BgL_envz00_2856,
		obj_t BgL_oz00_2857, obj_t BgL_vz00_2858)
	{
		{	/* Ast/var.scm 79 */
			{	/* Ast/var.scm 79 */
				bool_t BgL_vz00_3261;

				BgL_vz00_3261 = CBOOL(BgL_vz00_2858);
				return
					((((BgL_funz00_bglt) COBJECT(
								((BgL_funz00_bglt) BgL_oz00_2857)))->BgL_topzf3zf3) =
					((bool_t) BgL_vz00_3261), BUNSPEC);
			}
		}

	}



/* &lambda1812 */
	obj_t BGl_z62lambda1812z62zzast_varz00(obj_t BgL_envz00_2859,
		obj_t BgL_oz00_2860)
	{
		{	/* Ast/var.scm 79 */
			return
				BBOOL(
				(((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt) BgL_oz00_2860)))->BgL_topzf3zf3));
		}

	}



/* &<@anonymous:1799> */
	obj_t BGl_z62zc3z04anonymousza31799ze3ze5zzast_varz00(obj_t BgL_envz00_2861)
	{
		{	/* Ast/var.scm 79 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1798 */
	obj_t BGl_z62lambda1798z62zzast_varz00(obj_t BgL_envz00_2862,
		obj_t BgL_oz00_2863, obj_t BgL_vz00_2864)
	{
		{	/* Ast/var.scm 79 */
			return
				((((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt) BgL_oz00_2863)))->BgL_stackzd2allocatorzd2) =
				((obj_t) BgL_vz00_2864), BUNSPEC);
		}

	}



/* &lambda1797 */
	obj_t BGl_z62lambda1797z62zzast_varz00(obj_t BgL_envz00_2865,
		obj_t BgL_oz00_2866)
	{
		{	/* Ast/var.scm 79 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_2866)))->BgL_stackzd2allocatorzd2);
		}

	}



/* &<@anonymous:1781> */
	obj_t BGl_z62zc3z04anonymousza31781ze3ze5zzast_varz00(obj_t BgL_envz00_2867)
	{
		{	/* Ast/var.scm 79 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1780 */
	obj_t BGl_z62lambda1780z62zzast_varz00(obj_t BgL_envz00_2868,
		obj_t BgL_oz00_2869, obj_t BgL_vz00_2870)
	{
		{	/* Ast/var.scm 79 */
			return
				((((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt) BgL_oz00_2869)))->BgL_predicatezd2ofzd2) =
				((obj_t) BgL_vz00_2870), BUNSPEC);
		}

	}



/* &lambda1779 */
	obj_t BGl_z62lambda1779z62zzast_varz00(obj_t BgL_envz00_2871,
		obj_t BgL_oz00_2872)
	{
		{	/* Ast/var.scm 79 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_2872)))->BgL_predicatezd2ofzd2);
		}

	}



/* &<@anonymous:1764> */
	obj_t BGl_z62zc3z04anonymousza31764ze3ze5zzast_varz00(obj_t BgL_envz00_2873)
	{
		{	/* Ast/var.scm 79 */
			return BUNSPEC;
		}

	}



/* &lambda1763 */
	obj_t BGl_z62lambda1763z62zzast_varz00(obj_t BgL_envz00_2874,
		obj_t BgL_oz00_2875, obj_t BgL_vz00_2876)
	{
		{	/* Ast/var.scm 79 */
			return
				((((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt) BgL_oz00_2875)))->BgL_sidezd2effectzd2) =
				((obj_t) BgL_vz00_2876), BUNSPEC);
		}

	}



/* &lambda1762 */
	obj_t BGl_z62lambda1762z62zzast_varz00(obj_t BgL_envz00_2877,
		obj_t BgL_oz00_2878)
	{
		{	/* Ast/var.scm 79 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_2878)))->BgL_sidezd2effectzd2);
		}

	}



/* &lambda1756 */
	obj_t BGl_z62lambda1756z62zzast_varz00(obj_t BgL_envz00_2879,
		obj_t BgL_oz00_2880, obj_t BgL_vz00_2881)
	{
		{	/* Ast/var.scm 79 */
			{	/* Ast/var.scm 79 */
				long BgL_vz00_3270;

				BgL_vz00_3270 = (long) CINT(BgL_vz00_2881);
				return
					((((BgL_funz00_bglt) COBJECT(
								((BgL_funz00_bglt) BgL_oz00_2880)))->BgL_arityz00) =
					((long) BgL_vz00_3270), BUNSPEC);
		}}

	}



/* &lambda1755 */
	obj_t BGl_z62lambda1755z62zzast_varz00(obj_t BgL_envz00_2882,
		obj_t BgL_oz00_2883)
	{
		{	/* Ast/var.scm 79 */
			return
				BINT(
				(((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt) BgL_oz00_2883)))->BgL_arityz00));
		}

	}



/* &<@anonymous:1726> */
	obj_t BGl_z62zc3z04anonymousza31726ze3ze5zzast_varz00(obj_t BgL_envz00_2884,
		obj_t BgL_new1099z00_2885)
	{
		{	/* Ast/var.scm 75 */
			{
				BgL_localz00_bglt BgL_auxz00_5291;

				((((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_localz00_bglt) BgL_new1099z00_2885))))->BgL_idz00) =
					((obj_t) CNST_TABLE_REF(((long) 71))), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1099z00_2885))))->BgL_namez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_5299;

					{	/* Ast/var.scm 75 */
						obj_t BgL_classz00_3273;

						BgL_classz00_3273 = BGl_typez00zztype_typez00;
						{	/* Ast/var.scm 75 */
							obj_t BgL__ortest_1106z00_3274;

							BgL__ortest_1106z00_3274 = BGL_CLASS_NIL(BgL_classz00_3273);
							if (CBOOL(BgL__ortest_1106z00_3274))
								{	/* Ast/var.scm 75 */
									BgL_auxz00_5299 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_3274);
								}
							else
								{	/* Ast/var.scm 75 */
									BgL_auxz00_5299 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_3273));
								}
						}
					}
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt)
										((BgL_localz00_bglt) BgL_new1099z00_2885))))->BgL_typez00) =
						((BgL_typez00_bglt) BgL_auxz00_5299), BUNSPEC);
				}
				{
					BgL_valuez00_bglt BgL_auxz00_5309;

					{	/* Ast/var.scm 75 */
						obj_t BgL_classz00_3275;

						BgL_classz00_3275 = BGl_valuez00zzast_varz00;
						{	/* Ast/var.scm 75 */
							obj_t BgL__ortest_1106z00_3276;

							BgL__ortest_1106z00_3276 = BGL_CLASS_NIL(BgL_classz00_3275);
							if (CBOOL(BgL__ortest_1106z00_3276))
								{	/* Ast/var.scm 75 */
									BgL_auxz00_5309 =
										((BgL_valuez00_bglt) BgL__ortest_1106z00_3276);
								}
							else
								{	/* Ast/var.scm 75 */
									BgL_auxz00_5309 =
										((BgL_valuez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_3275));
								}
						}
					}
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt)
										((BgL_localz00_bglt) BgL_new1099z00_2885))))->
							BgL_valuez00) = ((BgL_valuez00_bglt) BgL_auxz00_5309), BUNSPEC);
				}
				((((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_localz00_bglt) BgL_new1099z00_2885))))->BgL_accessz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1099z00_2885))))->BgL_fastzd2alphazd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1099z00_2885))))->BgL_removablez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1099z00_2885))))->BgL_occurrencez00) =
					((long) ((long) 0)), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1099z00_2885))))->BgL_occurrencewz00) =
					((long) ((long) 0)), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1099z00_2885))))->BgL_userzf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_localz00_bglt) COBJECT(((BgL_localz00_bglt)
									BgL_new1099z00_2885)))->BgL_keyz00) =
					((long) ((long) 0)), BUNSPEC);
				BgL_auxz00_5291 = ((BgL_localz00_bglt) BgL_new1099z00_2885);
				return ((obj_t) BgL_auxz00_5291);
			}
		}

	}



/* &lambda1720 */
	BgL_localz00_bglt BGl_z62lambda1720z62zzast_varz00(obj_t BgL_envz00_2886)
	{
		{	/* Ast/var.scm 75 */
			{	/* Ast/var.scm 75 */
				BgL_localz00_bglt BgL_new1098z00_3277;

				BgL_new1098z00_3277 =
					((BgL_localz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_localz00_bgl))));
				{	/* Ast/var.scm 75 */
					long BgL_arg1725z00_3278;

					{	/* Ast/var.scm 75 */
						long BgL_res2129z00_3279;

						BgL_res2129z00_3279 = BGL_CLASS_INDEX(BGl_localz00zzast_varz00);
						BgL_arg1725z00_3278 = BgL_res2129z00_3279;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1098z00_3277), BgL_arg1725z00_3278);
				}
				{	/* Ast/var.scm 75 */
					BgL_objectz00_bglt BgL_tmpz00_5345;

					BgL_tmpz00_5345 = ((BgL_objectz00_bglt) BgL_new1098z00_3277);
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5345, BFALSE);
				}
				((BgL_objectz00_bglt) BgL_new1098z00_3277);
				return BgL_new1098z00_3277;
			}
		}

	}



/* &lambda1713 */
	BgL_localz00_bglt BGl_z62lambda1713z62zzast_varz00(obj_t BgL_envz00_2887,
		obj_t BgL_id1087z00_2888, obj_t BgL_name1088z00_2889,
		obj_t BgL_type1089z00_2890, obj_t BgL_value1090z00_2891,
		obj_t BgL_access1091z00_2892, obj_t BgL_fastzd2alpha1092zd2_2893,
		obj_t BgL_removable1093z00_2894, obj_t BgL_occurrence1094z00_2895,
		obj_t BgL_occurrencew1095z00_2896, obj_t BgL_userzf31096zf3_2897,
		obj_t BgL_key1097z00_2898)
	{
		{	/* Ast/var.scm 75 */
			{	/* Ast/var.scm 75 */
				long BgL_occurrence1094z00_3283;
				long BgL_occurrencew1095z00_3284;
				bool_t BgL_userzf31096zf3_3285;
				long BgL_key1097z00_3286;

				BgL_occurrence1094z00_3283 = (long) CINT(BgL_occurrence1094z00_2895);
				BgL_occurrencew1095z00_3284 = (long) CINT(BgL_occurrencew1095z00_2896);
				BgL_userzf31096zf3_3285 = CBOOL(BgL_userzf31096zf3_2897);
				BgL_key1097z00_3286 = (long) CINT(BgL_key1097z00_2898);
				{	/* Ast/var.scm 75 */
					BgL_localz00_bglt BgL_new1221z00_3287;

					{	/* Ast/var.scm 75 */
						BgL_localz00_bglt BgL_new1220z00_3288;

						BgL_new1220z00_3288 =
							((BgL_localz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_localz00_bgl))));
						{	/* Ast/var.scm 75 */
							long BgL_arg1719z00_3289;

							{	/* Ast/var.scm 75 */
								long BgL_res2128z00_3290;

								BgL_res2128z00_3290 = BGL_CLASS_INDEX(BGl_localz00zzast_varz00);
								BgL_arg1719z00_3289 = BgL_res2128z00_3290;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1220z00_3288),
								BgL_arg1719z00_3289);
						}
						{	/* Ast/var.scm 75 */
							BgL_objectz00_bglt BgL_tmpz00_5357;

							BgL_tmpz00_5357 = ((BgL_objectz00_bglt) BgL_new1220z00_3288);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5357, BFALSE);
						}
						((BgL_objectz00_bglt) BgL_new1220z00_3288);
						BgL_new1221z00_3287 = BgL_new1220z00_3288;
					}
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_new1221z00_3287)))->BgL_idz00) =
						((obj_t) ((obj_t) BgL_id1087z00_2888)), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1221z00_3287)))->BgL_namez00) =
						((obj_t) BgL_name1088z00_2889), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1221z00_3287)))->BgL_typez00) =
						((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1089z00_2890)),
						BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1221z00_3287)))->BgL_valuez00) =
						((BgL_valuez00_bglt) ((BgL_valuez00_bglt) BgL_value1090z00_2891)),
						BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1221z00_3287)))->BgL_accessz00) =
						((obj_t) BgL_access1091z00_2892), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1221z00_3287)))->BgL_fastzd2alphazd2) =
						((obj_t) BgL_fastzd2alpha1092zd2_2893), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1221z00_3287)))->BgL_removablez00) =
						((obj_t) BgL_removable1093z00_2894), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1221z00_3287)))->BgL_occurrencez00) =
						((long) BgL_occurrence1094z00_3283), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1221z00_3287)))->BgL_occurrencewz00) =
						((long) BgL_occurrencew1095z00_3284), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1221z00_3287)))->BgL_userzf3zf3) =
						((bool_t) BgL_userzf31096zf3_3285), BUNSPEC);
					((((BgL_localz00_bglt) COBJECT(BgL_new1221z00_3287))->BgL_keyz00) =
						((long) BgL_key1097z00_3286), BUNSPEC);
					return BgL_new1221z00_3287;
				}
			}
		}

	}



/* &lambda1731 */
	obj_t BGl_z62lambda1731z62zzast_varz00(obj_t BgL_envz00_2899,
		obj_t BgL_oz00_2900, obj_t BgL_vz00_2901)
	{
		{	/* Ast/var.scm 75 */
			{	/* Ast/var.scm 75 */
				long BgL_vz00_3292;

				BgL_vz00_3292 = (long) CINT(BgL_vz00_2901);
				return
					((((BgL_localz00_bglt) COBJECT(
								((BgL_localz00_bglt) BgL_oz00_2900)))->BgL_keyz00) =
					((long) BgL_vz00_3292), BUNSPEC);
		}}

	}



/* &lambda1730 */
	obj_t BGl_z62lambda1730z62zzast_varz00(obj_t BgL_envz00_2902,
		obj_t BgL_oz00_2903)
	{
		{	/* Ast/var.scm 75 */
			return
				BINT(
				(((BgL_localz00_bglt) COBJECT(
							((BgL_localz00_bglt) BgL_oz00_2903)))->BgL_keyz00));
		}

	}



/* &<@anonymous:1537> */
	obj_t BGl_z62zc3z04anonymousza31537ze3ze5zzast_varz00(obj_t BgL_envz00_2904,
		obj_t BgL_new1085z00_2905)
	{
		{	/* Ast/var.scm 46 */
			{
				BgL_globalz00_bglt BgL_auxz00_5391;

				((((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_globalz00_bglt) BgL_new1085z00_2905))))->BgL_idz00) =
					((obj_t) CNST_TABLE_REF(((long) 71))), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_globalz00_bglt)
										BgL_new1085z00_2905))))->BgL_namez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_5399;

					{	/* Ast/var.scm 46 */
						obj_t BgL_classz00_3295;

						BgL_classz00_3295 = BGl_typez00zztype_typez00;
						{	/* Ast/var.scm 46 */
							obj_t BgL__ortest_1106z00_3296;

							BgL__ortest_1106z00_3296 = BGL_CLASS_NIL(BgL_classz00_3295);
							if (CBOOL(BgL__ortest_1106z00_3296))
								{	/* Ast/var.scm 46 */
									BgL_auxz00_5399 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_3296);
								}
							else
								{	/* Ast/var.scm 46 */
									BgL_auxz00_5399 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_3295));
								}
						}
					}
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt)
										((BgL_globalz00_bglt) BgL_new1085z00_2905))))->
							BgL_typez00) = ((BgL_typez00_bglt) BgL_auxz00_5399), BUNSPEC);
				}
				{
					BgL_valuez00_bglt BgL_auxz00_5409;

					{	/* Ast/var.scm 46 */
						obj_t BgL_classz00_3297;

						BgL_classz00_3297 = BGl_valuez00zzast_varz00;
						{	/* Ast/var.scm 46 */
							obj_t BgL__ortest_1106z00_3298;

							BgL__ortest_1106z00_3298 = BGL_CLASS_NIL(BgL_classz00_3297);
							if (CBOOL(BgL__ortest_1106z00_3298))
								{	/* Ast/var.scm 46 */
									BgL_auxz00_5409 =
										((BgL_valuez00_bglt) BgL__ortest_1106z00_3298);
								}
							else
								{	/* Ast/var.scm 46 */
									BgL_auxz00_5409 =
										((BgL_valuez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_3297));
								}
						}
					}
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt)
										((BgL_globalz00_bglt) BgL_new1085z00_2905))))->
							BgL_valuez00) = ((BgL_valuez00_bglt) BgL_auxz00_5409), BUNSPEC);
				}
				((((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_globalz00_bglt) BgL_new1085z00_2905))))->
						BgL_accessz00) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_globalz00_bglt)
										BgL_new1085z00_2905))))->BgL_fastzd2alphazd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_globalz00_bglt)
										BgL_new1085z00_2905))))->BgL_removablez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_globalz00_bglt)
										BgL_new1085z00_2905))))->BgL_occurrencez00) =
					((long) ((long) 0)), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_globalz00_bglt)
										BgL_new1085z00_2905))))->BgL_occurrencewz00) =
					((long) ((long) 0)), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_globalz00_bglt)
										BgL_new1085z00_2905))))->BgL_userzf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
									BgL_new1085z00_2905)))->BgL_modulez00) =
					((obj_t) CNST_TABLE_REF(((long) 71))), BUNSPEC);
				((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
									BgL_new1085z00_2905)))->BgL_importz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
									BgL_new1085z00_2905)))->BgL_evaluablezf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
									BgL_new1085z00_2905)))->BgL_evalzf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
									BgL_new1085z00_2905)))->BgL_libraryz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
									BgL_new1085z00_2905)))->BgL_pragmaz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
									BgL_new1085z00_2905)))->BgL_srcz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
									BgL_new1085z00_2905)))->BgL_jvmzd2typezd2namez00) =
					((obj_t) BGl_string2329z00zzast_varz00), BUNSPEC);
				((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
									BgL_new1085z00_2905)))->BgL_initz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
									BgL_new1085z00_2905)))->BgL_aliasz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_5391 = ((BgL_globalz00_bglt) BgL_new1085z00_2905);
				return ((obj_t) BgL_auxz00_5391);
			}
		}

	}



/* &lambda1529 */
	BgL_globalz00_bglt BGl_z62lambda1529z62zzast_varz00(obj_t BgL_envz00_2906)
	{
		{	/* Ast/var.scm 46 */
			{	/* Ast/var.scm 46 */
				BgL_globalz00_bglt BgL_new1084z00_3299;

				BgL_new1084z00_3299 =
					((BgL_globalz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_globalz00_bgl))));
				{	/* Ast/var.scm 46 */
					long BgL_arg1536z00_3300;

					{	/* Ast/var.scm 46 */
						long BgL_res2127z00_3301;

						BgL_res2127z00_3301 = BGL_CLASS_INDEX(BGl_globalz00zzast_varz00);
						BgL_arg1536z00_3300 = BgL_res2127z00_3301;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1084z00_3299), BgL_arg1536z00_3300);
				}
				{	/* Ast/var.scm 46 */
					BgL_objectz00_bglt BgL_tmpz00_5464;

					BgL_tmpz00_5464 = ((BgL_objectz00_bglt) BgL_new1084z00_3299);
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5464, BFALSE);
				}
				((BgL_objectz00_bglt) BgL_new1084z00_3299);
				return BgL_new1084z00_3299;
			}
		}

	}



/* &lambda1522 */
	BgL_globalz00_bglt BGl_z62lambda1522z62zzast_varz00(obj_t BgL_envz00_2907,
		obj_t BgL_id1064z00_2908, obj_t BgL_name1065z00_2909,
		obj_t BgL_type1066z00_2910, obj_t BgL_value1067z00_2911,
		obj_t BgL_access1068z00_2912, obj_t BgL_fastzd2alpha1069zd2_2913,
		obj_t BgL_removable1070z00_2914, obj_t BgL_occurrence1071z00_2915,
		obj_t BgL_occurrencew1072z00_2916, obj_t BgL_userzf31073zf3_2917,
		obj_t BgL_module1074z00_2918, obj_t BgL_import1075z00_2919,
		obj_t BgL_evaluablezf31076zf3_2920, obj_t BgL_evalzf31077zf3_2921,
		obj_t BgL_library1078z00_2922, obj_t BgL_pragma1079z00_2923,
		obj_t BgL_src1080z00_2924, obj_t BgL_jvmzd2typezd2name1081z00_2925,
		obj_t BgL_init1082z00_2926, obj_t BgL_alias1083z00_2927)
	{
		{	/* Ast/var.scm 46 */
			{	/* Ast/var.scm 46 */
				long BgL_occurrence1071z00_3305;
				long BgL_occurrencew1072z00_3306;
				bool_t BgL_userzf31073zf3_3307;
				bool_t BgL_evaluablezf31076zf3_3309;
				bool_t BgL_evalzf31077zf3_3310;

				BgL_occurrence1071z00_3305 = (long) CINT(BgL_occurrence1071z00_2915);
				BgL_occurrencew1072z00_3306 = (long) CINT(BgL_occurrencew1072z00_2916);
				BgL_userzf31073zf3_3307 = CBOOL(BgL_userzf31073zf3_2917);
				BgL_evaluablezf31076zf3_3309 = CBOOL(BgL_evaluablezf31076zf3_2920);
				BgL_evalzf31077zf3_3310 = CBOOL(BgL_evalzf31077zf3_2921);
				{	/* Ast/var.scm 46 */
					BgL_globalz00_bglt BgL_new1219z00_3312;

					{	/* Ast/var.scm 46 */
						BgL_globalz00_bglt BgL_new1218z00_3313;

						BgL_new1218z00_3313 =
							((BgL_globalz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_globalz00_bgl))));
						{	/* Ast/var.scm 46 */
							long BgL_arg1528z00_3314;

							{	/* Ast/var.scm 46 */
								long BgL_res2126z00_3315;

								BgL_res2126z00_3315 =
									BGL_CLASS_INDEX(BGl_globalz00zzast_varz00);
								BgL_arg1528z00_3314 = BgL_res2126z00_3315;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1218z00_3313),
								BgL_arg1528z00_3314);
						}
						{	/* Ast/var.scm 46 */
							BgL_objectz00_bglt BgL_tmpz00_5477;

							BgL_tmpz00_5477 = ((BgL_objectz00_bglt) BgL_new1218z00_3313);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5477, BFALSE);
						}
						((BgL_objectz00_bglt) BgL_new1218z00_3313);
						BgL_new1219z00_3312 = BgL_new1218z00_3313;
					}
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_new1219z00_3312)))->BgL_idz00) =
						((obj_t) ((obj_t) BgL_id1064z00_2908)), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1219z00_3312)))->BgL_namez00) =
						((obj_t) BgL_name1065z00_2909), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1219z00_3312)))->BgL_typez00) =
						((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1066z00_2910)),
						BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1219z00_3312)))->BgL_valuez00) =
						((BgL_valuez00_bglt) ((BgL_valuez00_bglt) BgL_value1067z00_2911)),
						BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1219z00_3312)))->BgL_accessz00) =
						((obj_t) BgL_access1068z00_2912), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1219z00_3312)))->BgL_fastzd2alphazd2) =
						((obj_t) BgL_fastzd2alpha1069zd2_2913), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1219z00_3312)))->BgL_removablez00) =
						((obj_t) BgL_removable1070z00_2914), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1219z00_3312)))->BgL_occurrencez00) =
						((long) BgL_occurrence1071z00_3305), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1219z00_3312)))->BgL_occurrencewz00) =
						((long) BgL_occurrencew1072z00_3306), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1219z00_3312)))->BgL_userzf3zf3) =
						((bool_t) BgL_userzf31073zf3_3307), BUNSPEC);
					((((BgL_globalz00_bglt) COBJECT(BgL_new1219z00_3312))->
							BgL_modulez00) =
						((obj_t) ((obj_t) BgL_module1074z00_2918)), BUNSPEC);
					((((BgL_globalz00_bglt) COBJECT(BgL_new1219z00_3312))->
							BgL_importz00) = ((obj_t) BgL_import1075z00_2919), BUNSPEC);
					((((BgL_globalz00_bglt) COBJECT(BgL_new1219z00_3312))->
							BgL_evaluablezf3zf3) =
						((bool_t) BgL_evaluablezf31076zf3_3309), BUNSPEC);
					((((BgL_globalz00_bglt) COBJECT(BgL_new1219z00_3312))->
							BgL_evalzf3zf3) = ((bool_t) BgL_evalzf31077zf3_3310), BUNSPEC);
					((((BgL_globalz00_bglt) COBJECT(BgL_new1219z00_3312))->
							BgL_libraryz00) = ((obj_t) BgL_library1078z00_2922), BUNSPEC);
					((((BgL_globalz00_bglt) COBJECT(BgL_new1219z00_3312))->
							BgL_pragmaz00) = ((obj_t) BgL_pragma1079z00_2923), BUNSPEC);
					((((BgL_globalz00_bglt) COBJECT(BgL_new1219z00_3312))->BgL_srcz00) =
						((obj_t) BgL_src1080z00_2924), BUNSPEC);
					((((BgL_globalz00_bglt) COBJECT(BgL_new1219z00_3312))->
							BgL_jvmzd2typezd2namez00) =
						((obj_t) ((obj_t) BgL_jvmzd2typezd2name1081z00_2925)), BUNSPEC);
					((((BgL_globalz00_bglt) COBJECT(BgL_new1219z00_3312))->BgL_initz00) =
						((obj_t) BgL_init1082z00_2926), BUNSPEC);
					((((BgL_globalz00_bglt) COBJECT(BgL_new1219z00_3312))->BgL_aliasz00) =
						((obj_t) BgL_alias1083z00_2927), BUNSPEC);
					return BgL_new1219z00_3312;
				}
			}
		}

	}



/* &<@anonymous:1699> */
	obj_t BGl_z62zc3z04anonymousza31699ze3ze5zzast_varz00(obj_t BgL_envz00_2928)
	{
		{	/* Ast/var.scm 46 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1698 */
	obj_t BGl_z62lambda1698z62zzast_varz00(obj_t BgL_envz00_2929,
		obj_t BgL_oz00_2930, obj_t BgL_vz00_2931)
	{
		{	/* Ast/var.scm 46 */
			return
				((((BgL_globalz00_bglt) COBJECT(
							((BgL_globalz00_bglt) BgL_oz00_2930)))->BgL_aliasz00) =
				((obj_t) BgL_vz00_2931), BUNSPEC);
		}

	}



/* &lambda1697 */
	obj_t BGl_z62lambda1697z62zzast_varz00(obj_t BgL_envz00_2932,
		obj_t BgL_oz00_2933)
	{
		{	/* Ast/var.scm 46 */
			return
				(((BgL_globalz00_bglt) COBJECT(
						((BgL_globalz00_bglt) BgL_oz00_2933)))->BgL_aliasz00);
		}

	}



/* &<@anonymous:1687> */
	obj_t BGl_z62zc3z04anonymousza31687ze3ze5zzast_varz00(obj_t BgL_envz00_2934)
	{
		{	/* Ast/var.scm 46 */
			return BUNSPEC;
		}

	}



/* &lambda1686 */
	obj_t BGl_z62lambda1686z62zzast_varz00(obj_t BgL_envz00_2935,
		obj_t BgL_oz00_2936, obj_t BgL_vz00_2937)
	{
		{	/* Ast/var.scm 46 */
			return
				((((BgL_globalz00_bglt) COBJECT(
							((BgL_globalz00_bglt) BgL_oz00_2936)))->BgL_initz00) =
				((obj_t) BgL_vz00_2937), BUNSPEC);
		}

	}



/* &lambda1685 */
	obj_t BGl_z62lambda1685z62zzast_varz00(obj_t BgL_envz00_2938,
		obj_t BgL_oz00_2939)
	{
		{	/* Ast/var.scm 46 */
			return
				(((BgL_globalz00_bglt) COBJECT(
						((BgL_globalz00_bglt) BgL_oz00_2939)))->BgL_initz00);
		}

	}



/* &lambda1664 */
	obj_t BGl_z62lambda1664z62zzast_varz00(obj_t BgL_envz00_2940,
		obj_t BgL_oz00_2941, obj_t BgL_vz00_2942)
	{
		{	/* Ast/var.scm 46 */
			return
				((((BgL_globalz00_bglt) COBJECT(
							((BgL_globalz00_bglt) BgL_oz00_2941)))->
					BgL_jvmzd2typezd2namez00) =
				((obj_t) ((obj_t) BgL_vz00_2942)), BUNSPEC);
		}

	}



/* &lambda1663 */
	obj_t BGl_z62lambda1663z62zzast_varz00(obj_t BgL_envz00_2943,
		obj_t BgL_oz00_2944)
	{
		{	/* Ast/var.scm 46 */
			return
				(((BgL_globalz00_bglt) COBJECT(
						((BgL_globalz00_bglt) BgL_oz00_2944)))->BgL_jvmzd2typezd2namez00);
		}

	}



/* &lambda1641 */
	obj_t BGl_z62lambda1641z62zzast_varz00(obj_t BgL_envz00_2945,
		obj_t BgL_oz00_2946, obj_t BgL_vz00_2947)
	{
		{	/* Ast/var.scm 46 */
			return
				((((BgL_globalz00_bglt) COBJECT(
							((BgL_globalz00_bglt) BgL_oz00_2946)))->BgL_srcz00) =
				((obj_t) BgL_vz00_2947), BUNSPEC);
		}

	}



/* &lambda1640 */
	obj_t BGl_z62lambda1640z62zzast_varz00(obj_t BgL_envz00_2948,
		obj_t BgL_oz00_2949)
	{
		{	/* Ast/var.scm 46 */
			return
				(((BgL_globalz00_bglt) COBJECT(
						((BgL_globalz00_bglt) BgL_oz00_2949)))->BgL_srcz00);
		}

	}



/* &<@anonymous:1627> */
	obj_t BGl_z62zc3z04anonymousza31627ze3ze5zzast_varz00(obj_t BgL_envz00_2950)
	{
		{	/* Ast/var.scm 46 */
			return BNIL;
		}

	}



/* &lambda1626 */
	obj_t BGl_z62lambda1626z62zzast_varz00(obj_t BgL_envz00_2951,
		obj_t BgL_oz00_2952, obj_t BgL_vz00_2953)
	{
		{	/* Ast/var.scm 46 */
			return
				((((BgL_globalz00_bglt) COBJECT(
							((BgL_globalz00_bglt) BgL_oz00_2952)))->BgL_pragmaz00) =
				((obj_t) BgL_vz00_2953), BUNSPEC);
		}

	}



/* &lambda1625 */
	obj_t BGl_z62lambda1625z62zzast_varz00(obj_t BgL_envz00_2954,
		obj_t BgL_oz00_2955)
	{
		{	/* Ast/var.scm 46 */
			return
				(((BgL_globalz00_bglt) COBJECT(
						((BgL_globalz00_bglt) BgL_oz00_2955)))->BgL_pragmaz00);
		}

	}



/* &<@anonymous:1608> */
	obj_t BGl_z62zc3z04anonymousza31608ze3ze5zzast_varz00(obj_t BgL_envz00_2956)
	{
		{	/* Ast/var.scm 46 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1607 */
	obj_t BGl_z62lambda1607z62zzast_varz00(obj_t BgL_envz00_2957,
		obj_t BgL_oz00_2958, obj_t BgL_vz00_2959)
	{
		{	/* Ast/var.scm 46 */
			return
				((((BgL_globalz00_bglt) COBJECT(
							((BgL_globalz00_bglt) BgL_oz00_2958)))->BgL_libraryz00) =
				((obj_t) BgL_vz00_2959), BUNSPEC);
		}

	}



/* &lambda1606 */
	obj_t BGl_z62lambda1606z62zzast_varz00(obj_t BgL_envz00_2960,
		obj_t BgL_oz00_2961)
	{
		{	/* Ast/var.scm 46 */
			return
				(((BgL_globalz00_bglt) COBJECT(
						((BgL_globalz00_bglt) BgL_oz00_2961)))->BgL_libraryz00);
		}

	}



/* &<@anonymous:1596> */
	obj_t BGl_z62zc3z04anonymousza31596ze3ze5zzast_varz00(obj_t BgL_envz00_2962)
	{
		{	/* Ast/var.scm 46 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1595 */
	obj_t BGl_z62lambda1595z62zzast_varz00(obj_t BgL_envz00_2963,
		obj_t BgL_oz00_2964, obj_t BgL_vz00_2965)
	{
		{	/* Ast/var.scm 46 */
			{	/* Ast/var.scm 46 */
				bool_t BgL_vz00_3330;

				BgL_vz00_3330 = CBOOL(BgL_vz00_2965);
				return
					((((BgL_globalz00_bglt) COBJECT(
								((BgL_globalz00_bglt) BgL_oz00_2964)))->BgL_evalzf3zf3) =
					((bool_t) BgL_vz00_3330), BUNSPEC);
			}
		}

	}



/* &lambda1594 */
	obj_t BGl_z62lambda1594z62zzast_varz00(obj_t BgL_envz00_2966,
		obj_t BgL_oz00_2967)
	{
		{	/* Ast/var.scm 46 */
			return
				BBOOL(
				(((BgL_globalz00_bglt) COBJECT(
							((BgL_globalz00_bglt) BgL_oz00_2967)))->BgL_evalzf3zf3));
		}

	}



/* &<@anonymous:1585> */
	obj_t BGl_z62zc3z04anonymousza31585ze3ze5zzast_varz00(obj_t BgL_envz00_2968)
	{
		{	/* Ast/var.scm 46 */
			return BBOOL(((bool_t) 1));
		}

	}



/* &lambda1584 */
	obj_t BGl_z62lambda1584z62zzast_varz00(obj_t BgL_envz00_2969,
		obj_t BgL_oz00_2970, obj_t BgL_vz00_2971)
	{
		{	/* Ast/var.scm 46 */
			{	/* Ast/var.scm 46 */
				bool_t BgL_vz00_3333;

				BgL_vz00_3333 = CBOOL(BgL_vz00_2971);
				return
					((((BgL_globalz00_bglt) COBJECT(
								((BgL_globalz00_bglt) BgL_oz00_2970)))->BgL_evaluablezf3zf3) =
					((bool_t) BgL_vz00_3333), BUNSPEC);
			}
		}

	}



/* &lambda1583 */
	obj_t BGl_z62lambda1583z62zzast_varz00(obj_t BgL_envz00_2972,
		obj_t BgL_oz00_2973)
	{
		{	/* Ast/var.scm 46 */
			return
				BBOOL(
				(((BgL_globalz00_bglt) COBJECT(
							((BgL_globalz00_bglt) BgL_oz00_2973)))->BgL_evaluablezf3zf3));
		}

	}



/* &lambda1566 */
	obj_t BGl_z62lambda1566z62zzast_varz00(obj_t BgL_envz00_2974,
		obj_t BgL_oz00_2975, obj_t BgL_vz00_2976)
	{
		{	/* Ast/var.scm 46 */
			return
				((((BgL_globalz00_bglt) COBJECT(
							((BgL_globalz00_bglt) BgL_oz00_2975)))->BgL_importz00) =
				((obj_t) BgL_vz00_2976), BUNSPEC);
		}

	}



/* &lambda1565 */
	obj_t BGl_z62lambda1565z62zzast_varz00(obj_t BgL_envz00_2977,
		obj_t BgL_oz00_2978)
	{
		{	/* Ast/var.scm 46 */
			return
				(((BgL_globalz00_bglt) COBJECT(
						((BgL_globalz00_bglt) BgL_oz00_2978)))->BgL_importz00);
		}

	}



/* &lambda1555 */
	obj_t BGl_z62lambda1555z62zzast_varz00(obj_t BgL_envz00_2979,
		obj_t BgL_oz00_2980, obj_t BgL_vz00_2981)
	{
		{	/* Ast/var.scm 46 */
			return
				((((BgL_globalz00_bglt) COBJECT(
							((BgL_globalz00_bglt) BgL_oz00_2980)))->BgL_modulez00) = ((obj_t)
					((obj_t) BgL_vz00_2981)), BUNSPEC);
		}

	}



/* &lambda1554 */
	obj_t BGl_z62lambda1554z62zzast_varz00(obj_t BgL_envz00_2982,
		obj_t BgL_oz00_2983)
	{
		{	/* Ast/var.scm 46 */
			return
				(((BgL_globalz00_bglt) COBJECT(
						((BgL_globalz00_bglt) BgL_oz00_2983)))->BgL_modulez00);
		}

	}



/* &<@anonymous:1332> */
	obj_t BGl_z62zc3z04anonymousza31332ze3ze5zzast_varz00(obj_t BgL_envz00_2984,
		obj_t BgL_new1062z00_2985)
	{
		{	/* Ast/var.scm 23 */
			{
				BgL_variablez00_bglt BgL_auxz00_5566;

				((((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt) BgL_new1062z00_2985)))->BgL_idz00) =
					((obj_t) CNST_TABLE_REF(((long) 71))), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1062z00_2985)))->BgL_namez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_5572;

					{	/* Ast/var.scm 23 */
						obj_t BgL_classz00_3341;

						BgL_classz00_3341 = BGl_typez00zztype_typez00;
						{	/* Ast/var.scm 23 */
							obj_t BgL__ortest_1106z00_3342;

							BgL__ortest_1106z00_3342 = BGL_CLASS_NIL(BgL_classz00_3341);
							if (CBOOL(BgL__ortest_1106z00_3342))
								{	/* Ast/var.scm 23 */
									BgL_auxz00_5572 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_3342);
								}
							else
								{	/* Ast/var.scm 23 */
									BgL_auxz00_5572 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_3341));
								}
						}
					}
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_new1062z00_2985)))->BgL_typez00) =
						((BgL_typez00_bglt) BgL_auxz00_5572), BUNSPEC);
				}
				{
					BgL_valuez00_bglt BgL_auxz00_5581;

					{	/* Ast/var.scm 23 */
						obj_t BgL_classz00_3343;

						BgL_classz00_3343 = BGl_valuez00zzast_varz00;
						{	/* Ast/var.scm 23 */
							obj_t BgL__ortest_1106z00_3344;

							BgL__ortest_1106z00_3344 = BGL_CLASS_NIL(BgL_classz00_3343);
							if (CBOOL(BgL__ortest_1106z00_3344))
								{	/* Ast/var.scm 23 */
									BgL_auxz00_5581 =
										((BgL_valuez00_bglt) BgL__ortest_1106z00_3344);
								}
							else
								{	/* Ast/var.scm 23 */
									BgL_auxz00_5581 =
										((BgL_valuez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_3343));
								}
						}
					}
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_new1062z00_2985)))->
							BgL_valuez00) = ((BgL_valuez00_bglt) BgL_auxz00_5581), BUNSPEC);
				}
				((((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt) BgL_new1062z00_2985)))->BgL_accessz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1062z00_2985)))->BgL_fastzd2alphazd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1062z00_2985)))->BgL_removablez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1062z00_2985)))->BgL_occurrencez00) =
					((long) ((long) 0)), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1062z00_2985)))->BgL_occurrencewz00) =
					((long) ((long) 0)), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1062z00_2985)))->BgL_userzf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				BgL_auxz00_5566 = ((BgL_variablez00_bglt) BgL_new1062z00_2985);
				return ((obj_t) BgL_auxz00_5566);
			}
		}

	}



/* &lambda1330 */
	BgL_variablez00_bglt BGl_z62lambda1330z62zzast_varz00(obj_t BgL_envz00_2986)
	{
		{	/* Ast/var.scm 23 */
			{	/* Ast/var.scm 23 */
				BgL_variablez00_bglt BgL_new1061z00_3345;

				BgL_new1061z00_3345 =
					((BgL_variablez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_variablez00_bgl))));
				{	/* Ast/var.scm 23 */
					long BgL_arg1331z00_3346;

					{	/* Ast/var.scm 23 */
						long BgL_res2125z00_3347;

						BgL_res2125z00_3347 = BGL_CLASS_INDEX(BGl_variablez00zzast_varz00);
						BgL_arg1331z00_3346 = BgL_res2125z00_3347;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1061z00_3345), BgL_arg1331z00_3346);
				}
				return BgL_new1061z00_3345;
			}
		}

	}



/* &lambda1328 */
	BgL_variablez00_bglt BGl_z62lambda1328z62zzast_varz00(obj_t BgL_envz00_2987,
		obj_t BgL_id1051z00_2988, obj_t BgL_name1052z00_2989,
		obj_t BgL_type1053z00_2990, obj_t BgL_value1054z00_2991,
		obj_t BgL_access1055z00_2992, obj_t BgL_fastzd2alpha1056zd2_2993,
		obj_t BgL_removable1057z00_2994, obj_t BgL_occurrence1058z00_2995,
		obj_t BgL_occurrencew1059z00_2996, obj_t BgL_userzf31060zf3_2997)
	{
		{	/* Ast/var.scm 23 */
			{	/* Ast/var.scm 23 */
				long BgL_occurrence1058z00_3351;
				long BgL_occurrencew1059z00_3352;
				bool_t BgL_userzf31060zf3_3353;

				BgL_occurrence1058z00_3351 = (long) CINT(BgL_occurrence1058z00_2995);
				BgL_occurrencew1059z00_3352 = (long) CINT(BgL_occurrencew1059z00_2996);
				BgL_userzf31060zf3_3353 = CBOOL(BgL_userzf31060zf3_2997);
				{	/* Ast/var.scm 23 */
					BgL_variablez00_bglt BgL_new1217z00_3354;

					{	/* Ast/var.scm 23 */
						BgL_variablez00_bglt BgL_new1216z00_3355;

						BgL_new1216z00_3355 =
							((BgL_variablez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_variablez00_bgl))));
						{	/* Ast/var.scm 23 */
							long BgL_arg1329z00_3356;

							{	/* Ast/var.scm 23 */
								long BgL_res2124z00_3357;

								BgL_res2124z00_3357 =
									BGL_CLASS_INDEX(BGl_variablez00zzast_varz00);
								BgL_arg1329z00_3356 = BgL_res2124z00_3357;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1216z00_3355),
								BgL_arg1329z00_3356);
						}
						BgL_new1217z00_3354 = BgL_new1216z00_3355;
					}
					((((BgL_variablez00_bglt) COBJECT(BgL_new1217z00_3354))->BgL_idz00) =
						((obj_t) ((obj_t) BgL_id1051z00_2988)), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(BgL_new1217z00_3354))->
							BgL_namez00) = ((obj_t) BgL_name1052z00_2989), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(BgL_new1217z00_3354))->
							BgL_typez00) =
						((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1053z00_2990)),
						BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(BgL_new1217z00_3354))->
							BgL_valuez00) =
						((BgL_valuez00_bglt) ((BgL_valuez00_bglt) BgL_value1054z00_2991)),
						BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(BgL_new1217z00_3354))->
							BgL_accessz00) = ((obj_t) BgL_access1055z00_2992), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(BgL_new1217z00_3354))->
							BgL_fastzd2alphazd2) =
						((obj_t) BgL_fastzd2alpha1056zd2_2993), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(BgL_new1217z00_3354))->
							BgL_removablez00) = ((obj_t) BgL_removable1057z00_2994), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(BgL_new1217z00_3354))->
							BgL_occurrencez00) =
						((long) BgL_occurrence1058z00_3351), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(BgL_new1217z00_3354))->
							BgL_occurrencewz00) =
						((long) BgL_occurrencew1059z00_3352), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(BgL_new1217z00_3354))->
							BgL_userzf3zf3) = ((bool_t) BgL_userzf31060zf3_3353), BUNSPEC);
					return BgL_new1217z00_3354;
				}
			}
		}

	}



/* &<@anonymous:1492> */
	obj_t BGl_z62zc3z04anonymousza31492ze3ze5zzast_varz00(obj_t BgL_envz00_2998)
	{
		{	/* Ast/var.scm 23 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1491 */
	obj_t BGl_z62lambda1491z62zzast_varz00(obj_t BgL_envz00_2999,
		obj_t BgL_oz00_3000, obj_t BgL_vz00_3001)
	{
		{	/* Ast/var.scm 23 */
			{	/* Ast/var.scm 23 */
				bool_t BgL_vz00_3359;

				BgL_vz00_3359 = CBOOL(BgL_vz00_3001);
				return
					((((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt) BgL_oz00_3000)))->BgL_userzf3zf3) =
					((bool_t) BgL_vz00_3359), BUNSPEC);
			}
		}

	}



/* &lambda1490 */
	obj_t BGl_z62lambda1490z62zzast_varz00(obj_t BgL_envz00_3002,
		obj_t BgL_oz00_3003)
	{
		{	/* Ast/var.scm 23 */
			return
				BBOOL(
				(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_3003)))->BgL_userzf3zf3));
		}

	}



/* &<@anonymous:1465> */
	obj_t BGl_z62zc3z04anonymousza31465ze3ze5zzast_varz00(obj_t BgL_envz00_3004)
	{
		{	/* Ast/var.scm 23 */
			return BINT(((long) 0));
		}

	}



/* &lambda1464 */
	obj_t BGl_z62lambda1464z62zzast_varz00(obj_t BgL_envz00_3005,
		obj_t BgL_oz00_3006, obj_t BgL_vz00_3007)
	{
		{	/* Ast/var.scm 23 */
			{	/* Ast/var.scm 23 */
				long BgL_vz00_3362;

				BgL_vz00_3362 = (long) CINT(BgL_vz00_3007);
				return
					((((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt) BgL_oz00_3006)))->BgL_occurrencewz00) =
					((long) BgL_vz00_3362), BUNSPEC);
		}}

	}



/* &lambda1463 */
	obj_t BGl_z62lambda1463z62zzast_varz00(obj_t BgL_envz00_3008,
		obj_t BgL_oz00_3009)
	{
		{	/* Ast/var.scm 23 */
			return
				BINT(
				(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_3009)))->BgL_occurrencewz00));
		}

	}



/* &<@anonymous:1445> */
	obj_t BGl_z62zc3z04anonymousza31445ze3ze5zzast_varz00(obj_t BgL_envz00_3010)
	{
		{	/* Ast/var.scm 23 */
			return BINT(((long) 0));
		}

	}



/* &lambda1444 */
	obj_t BGl_z62lambda1444z62zzast_varz00(obj_t BgL_envz00_3011,
		obj_t BgL_oz00_3012, obj_t BgL_vz00_3013)
	{
		{	/* Ast/var.scm 23 */
			{	/* Ast/var.scm 23 */
				long BgL_vz00_3365;

				BgL_vz00_3365 = (long) CINT(BgL_vz00_3013);
				return
					((((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt) BgL_oz00_3012)))->BgL_occurrencez00) =
					((long) BgL_vz00_3365), BUNSPEC);
		}}

	}



/* &lambda1443 */
	obj_t BGl_z62lambda1443z62zzast_varz00(obj_t BgL_envz00_3014,
		obj_t BgL_oz00_3015)
	{
		{	/* Ast/var.scm 23 */
			return
				BINT(
				(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_3015)))->BgL_occurrencez00));
		}

	}



/* &<@anonymous:1420> */
	obj_t BGl_z62zc3z04anonymousza31420ze3ze5zzast_varz00(obj_t BgL_envz00_3016)
	{
		{	/* Ast/var.scm 23 */
			return CNST_TABLE_REF(((long) 73));
		}

	}



/* &lambda1419 */
	obj_t BGl_z62lambda1419z62zzast_varz00(obj_t BgL_envz00_3017,
		obj_t BgL_oz00_3018, obj_t BgL_vz00_3019)
	{
		{	/* Ast/var.scm 23 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_3018)))->BgL_removablez00) =
				((obj_t) BgL_vz00_3019), BUNSPEC);
		}

	}



/* &lambda1418 */
	obj_t BGl_z62lambda1418z62zzast_varz00(obj_t BgL_envz00_3020,
		obj_t BgL_oz00_3021)
	{
		{	/* Ast/var.scm 23 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_3021)))->BgL_removablez00);
		}

	}



/* &<@anonymous:1387> */
	obj_t BGl_z62zc3z04anonymousza31387ze3ze5zzast_varz00(obj_t BgL_envz00_3022)
	{
		{	/* Ast/var.scm 23 */
			return BUNSPEC;
		}

	}



/* &lambda1386 */
	obj_t BGl_z62lambda1386z62zzast_varz00(obj_t BgL_envz00_3023,
		obj_t BgL_oz00_3024, obj_t BgL_vz00_3025)
	{
		{	/* Ast/var.scm 23 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_3024)))->BgL_fastzd2alphazd2) =
				((obj_t) BgL_vz00_3025), BUNSPEC);
		}

	}



/* &lambda1385 */
	obj_t BGl_z62lambda1385z62zzast_varz00(obj_t BgL_envz00_3026,
		obj_t BgL_oz00_3027)
	{
		{	/* Ast/var.scm 23 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_3027)))->BgL_fastzd2alphazd2);
		}

	}



/* &<@anonymous:1375> */
	obj_t BGl_z62zc3z04anonymousza31375ze3ze5zzast_varz00(obj_t BgL_envz00_3028)
	{
		{	/* Ast/var.scm 23 */
			return CNST_TABLE_REF(((long) 68));
		}

	}



/* &lambda1374 */
	obj_t BGl_z62lambda1374z62zzast_varz00(obj_t BgL_envz00_3029,
		obj_t BgL_oz00_3030, obj_t BgL_vz00_3031)
	{
		{	/* Ast/var.scm 23 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_3030)))->BgL_accessz00) =
				((obj_t) BgL_vz00_3031), BUNSPEC);
		}

	}



/* &lambda1373 */
	obj_t BGl_z62lambda1373z62zzast_varz00(obj_t BgL_envz00_3032,
		obj_t BgL_oz00_3033)
	{
		{	/* Ast/var.scm 23 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_3033)))->BgL_accessz00);
		}

	}



/* &lambda1365 */
	obj_t BGl_z62lambda1365z62zzast_varz00(obj_t BgL_envz00_3034,
		obj_t BgL_oz00_3035, obj_t BgL_vz00_3036)
	{
		{	/* Ast/var.scm 23 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_3035)))->BgL_valuez00) =
				((BgL_valuez00_bglt) ((BgL_valuez00_bglt) BgL_vz00_3036)), BUNSPEC);
		}

	}



/* &lambda1364 */
	BgL_valuez00_bglt BGl_z62lambda1364z62zzast_varz00(obj_t BgL_envz00_3037,
		obj_t BgL_oz00_3038)
	{
		{	/* Ast/var.scm 23 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_3038)))->BgL_valuez00);
		}

	}



/* &lambda1359 */
	obj_t BGl_z62lambda1359z62zzast_varz00(obj_t BgL_envz00_3039,
		obj_t BgL_oz00_3040, obj_t BgL_vz00_3041)
	{
		{	/* Ast/var.scm 23 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_3040)))->BgL_typez00) =
				((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_vz00_3041)), BUNSPEC);
		}

	}



/* &lambda1358 */
	BgL_typez00_bglt BGl_z62lambda1358z62zzast_varz00(obj_t BgL_envz00_3042,
		obj_t BgL_oz00_3043)
	{
		{	/* Ast/var.scm 23 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_3043)))->BgL_typez00);
		}

	}



/* &<@anonymous:1349> */
	obj_t BGl_z62zc3z04anonymousza31349ze3ze5zzast_varz00(obj_t BgL_envz00_3044)
	{
		{	/* Ast/var.scm 23 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1348 */
	obj_t BGl_z62lambda1348z62zzast_varz00(obj_t BgL_envz00_3045,
		obj_t BgL_oz00_3046, obj_t BgL_vz00_3047)
	{
		{	/* Ast/var.scm 23 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_3046)))->BgL_namez00) =
				((obj_t) BgL_vz00_3047), BUNSPEC);
		}

	}



/* &lambda1347 */
	obj_t BGl_z62lambda1347z62zzast_varz00(obj_t BgL_envz00_3048,
		obj_t BgL_oz00_3049)
	{
		{	/* Ast/var.scm 23 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_3049)))->BgL_namez00);
		}

	}



/* &lambda1339 */
	obj_t BGl_z62lambda1339z62zzast_varz00(obj_t BgL_envz00_3050,
		obj_t BgL_oz00_3051, obj_t BgL_vz00_3052)
	{
		{	/* Ast/var.scm 23 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_3051)))->BgL_idz00) = ((obj_t)
					((obj_t) BgL_vz00_3052)), BUNSPEC);
		}

	}



/* &lambda1338 */
	obj_t BGl_z62lambda1338z62zzast_varz00(obj_t BgL_envz00_3053,
		obj_t BgL_oz00_3054)
	{
		{	/* Ast/var.scm 23 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_3054)))->BgL_idz00);
		}

	}



/* &<@anonymous:1320> */
	obj_t BGl_z62zc3z04anonymousza31320ze3ze5zzast_varz00(obj_t BgL_envz00_3055,
		obj_t BgL_new1049z00_3056)
	{
		{	/* Ast/var.scm 21 */
			return ((obj_t) ((BgL_valuez00_bglt) BgL_new1049z00_3056));
		}

	}



/* &lambda1318 */
	BgL_valuez00_bglt BGl_z62lambda1318z62zzast_varz00(obj_t BgL_envz00_3057)
	{
		{	/* Ast/var.scm 21 */
			{	/* Ast/var.scm 21 */
				BgL_valuez00_bglt BgL_new1048z00_3385;

				BgL_new1048z00_3385 =
					((BgL_valuez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_valuez00_bgl))));
				{	/* Ast/var.scm 21 */
					long BgL_arg1319z00_3386;

					{	/* Ast/var.scm 21 */
						long BgL_res2123z00_3387;

						BgL_res2123z00_3387 = BGL_CLASS_INDEX(BGl_valuez00zzast_varz00);
						BgL_arg1319z00_3386 = BgL_res2123z00_3387;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1048z00_3385), BgL_arg1319z00_3386);
				}
				return BgL_new1048z00_3385;
			}
		}

	}



/* &lambda1316 */
	BgL_valuez00_bglt BGl_z62lambda1316z62zzast_varz00(obj_t BgL_envz00_3058)
	{
		{	/* Ast/var.scm 21 */
			{	/* Ast/var.scm 21 */
				BgL_valuez00_bglt BgL_new1215z00_3388;

				{	/* Ast/var.scm 21 */
					BgL_valuez00_bglt BgL_new1214z00_3389;

					BgL_new1214z00_3389 =
						((BgL_valuez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_valuez00_bgl))));
					{	/* Ast/var.scm 21 */
						long BgL_arg1317z00_3390;

						{	/* Ast/var.scm 21 */
							long BgL_res2122z00_3391;

							BgL_res2122z00_3391 = BGL_CLASS_INDEX(BGl_valuez00zzast_varz00);
							BgL_arg1317z00_3390 = BgL_res2122z00_3391;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1214z00_3389), BgL_arg1317z00_3390);
					}
					BgL_new1215z00_3388 = BgL_new1214z00_3389;
				}
				return BgL_new1215z00_3388;
			}
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_varz00()
	{
		{	/* Ast/var.scm 14 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_varz00()
	{
		{	/* Ast/var.scm 14 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_varz00()
	{
		{	/* Ast/var.scm 14 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string2330z00zzast_varz00));
			return
				BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2330z00zzast_varz00));
		}

	}

#ifdef __cplusplus
}
#endif
