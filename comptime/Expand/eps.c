/*===========================================================================*/
/*   (Expand/eps.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Expand/eps.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_EXPORTED_DECL obj_t BGl_compilezd2expandzd2zzexpand_epsz00(obj_t);
	static obj_t BGl_z62initialzd2expanderzb0zzexpand_epsz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_raisez00zz__errorz00(obj_t);
	static obj_t BGl_compilezd2expanderzd2zzexpand_epsz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62withzd2lexicalzb0zzexpand_epsz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_getzd2Ozd2macrozd2toplevelzd2zzexpand_expanderz00();
	BGL_IMPORT bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_z62lexicalzd2stackzb0zzexpand_epsz00(obj_t);
	extern obj_t BGl_findzd2Gzd2expanderz00zzexpand_expanderz00(obj_t);
	extern obj_t BGl_fastzd2idzd2ofzd2idzd2zzast_identz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31212ze3ze5zzexpand_epsz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	BGL_IMPORT obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzexpand_epsz00();
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_comptimezd2expandzd2zzexpand_epsz00(obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_appendzd221011zd2zzexpand_epsz00(obj_t, obj_t);
	extern obj_t BGl_za2optimzd2Ozd2macrozf3za2zf3zzengine_paramz00;
	static obj_t BGl_methodzd2initzd2zzexpand_epsz00();
	static obj_t BGl_z62condzd2expandzd2onlyzd2expanderzb0zzexpand_epsz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_findzd2Ozd2expanderz00zzexpand_expanderz00(obj_t);
	static obj_t BGl_z62e2z62zzexpand_epsz00(obj_t, obj_t, obj_t);
	static obj_t BGl_zc3z04exitza31209ze3ze70z60zzexpand_epsz00(obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2compilerzd2debugza2zd2zzengine_paramz00;
	static obj_t BGl_z62zc3z04anonymousza31361ze3ze5zzexpand_epsz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31346ze3ze5zzexpand_epsz00(obj_t, obj_t);
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	BGL_IMPORT obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31275ze3ze5zzexpand_epsz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_numberzf3zf3zz__r4_numbers_6_5z00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31292ze3ze5zzexpand_epsz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31365ze3ze5zzexpand_epsz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31276ze3ze5zzexpand_epsz00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzexpand_epsz00();
	static obj_t BGl_z62zc3z04anonymousza31294ze3ze5zzexpand_epsz00(obj_t);
	static obj_t BGl_z62applicationzd2expanderzb0zzexpand_epsz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	static obj_t BGl_z62compilezd2expandzb0zzexpand_epsz00(obj_t, obj_t);
	static obj_t BGl_initialzd2expanderzd2zzexpand_epsz00(obj_t, obj_t);
	static obj_t BGl_expandza2ze70z45zzexpand_epsz00(obj_t, obj_t);
	static obj_t BGl_loopze70ze7zzexpand_epsz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31494ze3ze5zzexpand_epsz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_putpropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t, obj_t);
	static obj_t BGl_protozd2ze3frameze70zd6zzexpand_epsz00(obj_t);
	static obj_t BGl_expandze70ze7zzexpand_epsz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzexpand_epsz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_comptimezd2expandzf2errorz20zzexpand_epsz00(obj_t);
	static obj_t BGl_z62addzd2macrozd2aliasz12z70zzexpand_epsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_toplevelzd2initzd2zzexpand_epsz00();
	BGL_IMPORT obj_t BGl_getzd2compilerzd2expanderz00zz__macroz00(obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzexpand_epsz00();
	extern bool_t BGl_privatezd2sexpzf3z21zzast_privatez00(obj_t);
	static obj_t BGl_z62comptimezd2expandzf2errorz42zzexpand_epsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_addzd2macrozd2definitionz12z12zzexpand_epsz00(obj_t);
	static obj_t BGl_z62comptimezd2expandzb0zzexpand_epsz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	static obj_t BGl_z62handlerz62zzexpand_epsz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2unitszd2zzexpand_epsz00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31315ze3ze5zzexpand_epsz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62addzd2macrozd2definitionz12z70zzexpand_epsz00(obj_t,
		obj_t);
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	static obj_t BGl_z62zc3z04anonymousza31317ze3ze5zzexpand_epsz00(obj_t);
	static obj_t BGl_za2lexicalzd2stackza2zd2zzexpand_epsz00 = BUNSPEC;
	static obj_t BGl_zc3z04exitza31289ze3ze70z60zzexpand_epsz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_lexicalzd2stackzd2zzexpand_epsz00();
	static obj_t BGl_z62zc3z04anonymousza31353ze3ze5zzexpand_epsz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_comptimezd2expandzd2condzd2expandzd2onlyz00zzexpand_epsz00(obj_t);
	BGL_IMPORT obj_t BGl_exitz00zz__errorz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzexpand_epsz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_argsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_expanderz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_privatez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_prognz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_passz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__macroz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	BGL_IMPORT obj_t BGl_z62errorz62zz__objectz00;
	BGL_EXPORTED_DECL obj_t BGl_withzd2lexicalzd2zzexpand_epsz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31283ze3ze5zzexpand_epsz00(obj_t, obj_t);
	extern obj_t BGl_userzd2errorzd2notifyz00zztools_errorz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31284ze3ze5zzexpand_epsz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzexpand_epsz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzexpand_epsz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzexpand_epsz00();
	static obj_t BGl_z62identifierzd2expanderzb0zzexpand_epsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62expandzd2unitszb0zzexpand_epsz00(obj_t, obj_t);
	static obj_t
		BGl_z62comptimezd2expandzd2condzd2expandzd2onlyz62zzexpand_epsz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_getpropz00zz__r4_symbols_6_4z00(obj_t, obj_t);
	extern obj_t BGl_argsza2zd2ze3argszd2listz41zztools_argsz00(obj_t);
	static obj_t BGl_za2macroza2z00zzexpand_epsz00 = BUNSPEC;
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_addzd2macrozd2aliasz12z12zzexpand_epsz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_withzd2exceptionzd2handlerz00zz__errorz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_2ze3zd3z30zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_zc3z04exitza31311ze3ze70z60zzexpand_epsz00(obj_t);
	static obj_t __cnst[33];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_addzd2macrozd2definitionz12zd2envzc0zzexpand_epsz00,
		BgL_bgl_za762addza7d2macroza7d2085za7,
		BGl_z62addzd2macrozd2definitionz12z70zzexpand_epsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2065z00zzexpand_epsz00,
		BgL_bgl_za762za7c3za704anonymo2086za7,
		BGl_z62zc3z04anonymousza31283ze3ze5zzexpand_epsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2066z00zzexpand_epsz00,
		BgL_bgl_za762za7c3za704anonymo2087za7,
		BGl_z62zc3z04anonymousza31275ze3ze5zzexpand_epsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2074z00zzexpand_epsz00,
		BgL_bgl_za762condza7d2expand2088z00,
		BGl_z62condzd2expandzd2onlyzd2expanderzb0zzexpand_epsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2076z00zzexpand_epsz00,
		BgL_bgl_za762za7c3za704anonymo2089za7,
		BGl_z62zc3z04anonymousza31494ze3ze5zzexpand_epsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_expandzd2unitszd2envz00zzexpand_epsz00,
		BgL_bgl_za762expandza7d2unit2090z00,
		BGl_z62expandzd2unitszb0zzexpand_epsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_comptimezd2expandzf2errorzd2envzf2zzexpand_epsz00,
		BgL_bgl_za762comptimeza7d2ex2091z00,
		BGl_z62comptimezd2expandzf2errorz42zzexpand_epsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_comptimezd2expandzd2envz00zzexpand_epsz00,
		BgL_bgl_za762comptimeza7d2ex2092z00,
		BGl_z62comptimezd2expandzb0zzexpand_epsz00, 0L, BUNSPEC, 1);
	static obj_t BGl_compilezd2expanderzd2envz00zzexpand_epsz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_applicationzd2expanderzd2envz00zzexpand_epsz00,
		BgL_bgl_za762applicationza7d2093z00,
		BGl_z62applicationzd2expanderzb0zzexpand_epsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_addzd2macrozd2aliasz12zd2envzc0zzexpand_epsz00,
		BgL_bgl_za762addza7d2macroza7d2094za7,
		BGl_z62addzd2macrozd2aliasz12z70zzexpand_epsz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2062z00zzexpand_epsz00,
		BgL_bgl_string2062za700za7za7e2095za7, "Expand", 6);
	      DEFINE_STRING(BGl_string2063z00zzexpand_epsz00,
		BgL_bgl_string2063za700za7za7e2096za7, "   . ", 5);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_lexicalzd2stackzd2envz00zzexpand_epsz00,
		BgL_bgl_za762lexicalza7d2sta2097z00,
		BGl_z62lexicalzd2stackzb0zzexpand_epsz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2064z00zzexpand_epsz00,
		BgL_bgl_string2064za700za7za7e2098za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string2067z00zzexpand_epsz00,
		BgL_bgl_string2067za700za7za7e2099za7, " error", 6);
	      DEFINE_STRING(BGl_string2068z00zzexpand_epsz00,
		BgL_bgl_string2068za700za7za7e2100za7, "s", 1);
	      DEFINE_STRING(BGl_string2069z00zzexpand_epsz00,
		BgL_bgl_string2069za700za7za7e2101za7, "", 0);
	extern obj_t BGl_checkzd2tozd2bezd2macroszd2envz00zzexpand_expanderz00;
	   
		 
		DEFINE_STRING(BGl_string2070z00zzexpand_epsz00,
		BgL_bgl_string2070za700za7za7e2102za7, " occured, ending ...", 20);
	      DEFINE_STRING(BGl_string2071z00zzexpand_epsz00,
		BgL_bgl_string2071za700za7za7e2103za7, "failure during postlude hook", 28);
	      DEFINE_STRING(BGl_string2072z00zzexpand_epsz00,
		BgL_bgl_string2072za700za7za7e2104za7, "module", 6);
	      DEFINE_STRING(BGl_string2073z00zzexpand_epsz00,
		BgL_bgl_string2073za700za7za7e2105za7, "Illegal module clause", 21);
	      DEFINE_STRING(BGl_string2075z00zzexpand_epsz00,
		BgL_bgl_string2075za700za7za7e2106za7, "Illegal form", 12);
	      DEFINE_STRING(BGl_string2077z00zzexpand_epsz00,
		BgL_bgl_string2077za700za7za7e2107za7, "labels", 6);
	      DEFINE_STRING(BGl_string2078z00zzexpand_epsz00,
		BgL_bgl_string2078za700za7za7e2108za7, "let", 3);
	      DEFINE_STRING(BGl_string2079z00zzexpand_epsz00,
		BgL_bgl_string2079za700za7za7e2109za7, "Illegal application form", 24);
	      DEFINE_STRING(BGl_string2080z00zzexpand_epsz00,
		BgL_bgl_string2080za700za7za7e2110za7, "expand_eps", 10);
	      DEFINE_STRING(BGl_string2081z00zzexpand_epsz00,
		BgL_bgl_string2081za700za7za7e2111za7,
		"apply case free-pragma/effect free-pragma pragma/effect pragma labels letrec* letrec let* let define-method define-generic define-inline define jump-exit set-exit failure set! if quote @ lambda begin cond-expand (quote ()) (check-to-be-macros) define-expander define-macro nothing pass-started expand macro-alias-key ",
		317);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_comptimezd2expandzd2condzd2expandzd2onlyzd2envzd2zzexpand_epsz00,
		BgL_bgl_za762comptimeza7d2ex2112z00,
		BGl_z62comptimezd2expandzd2condzd2expandzd2onlyz62zzexpand_epsz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_initialzd2expanderzd2envz00zzexpand_epsz00,
		BgL_bgl_za762initialza7d2exp2113z00,
		BGl_z62initialzd2expanderzb0zzexpand_epsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_compilezd2expandzd2envz00zzexpand_epsz00,
		BgL_bgl_za762compileza7d2exp2114z00,
		BGl_z62compilezd2expandzb0zzexpand_epsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_identifierzd2expanderzd2envz00zzexpand_epsz00,
		BgL_bgl_za762identifierza7d22115z00,
		BGl_z62identifierzd2expanderzb0zzexpand_epsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_withzd2lexicalzd2envz00zzexpand_epsz00,
		BgL_bgl_za762withza7d2lexica2116z00,
		BGl_z62withzd2lexicalzb0zzexpand_epsz00, 0L, BUNSPEC, 4);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzexpand_epsz00));
		     ADD_ROOT((void *) (&BGl_za2lexicalzd2stackza2zd2zzexpand_epsz00));
		     ADD_ROOT((void *) (&BGl_za2macroza2z00zzexpand_epsz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzexpand_epsz00(long
		BgL_checksumz00_1329, char *BgL_fromz00_1330)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzexpand_epsz00))
				{
					BGl_requirezd2initializa7ationz75zzexpand_epsz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzexpand_epsz00();
					BGl_libraryzd2moduleszd2initz00zzexpand_epsz00();
					BGl_cnstzd2initzd2zzexpand_epsz00();
					BGl_importedzd2moduleszd2initz00zzexpand_epsz00();
					return BGl_toplevelzd2initzd2zzexpand_epsz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzexpand_epsz00()
	{
		{	/* Expand/eps.scm 17 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "expand_eps");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"expand_eps");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"expand_eps");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"expand_eps");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"expand_eps");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"expand_eps");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "expand_eps");
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 0), "expand_eps");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"expand_eps");
			BGl_modulezd2initializa7ationz75zz__macroz00(((long) 0), "expand_eps");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "expand_eps");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"expand_eps");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"expand_eps");
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long) 0),
				"expand_eps");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0),
				"expand_eps");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "expand_eps");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzexpand_epsz00()
	{
		{	/* Expand/eps.scm 17 */
			{	/* Expand/eps.scm 17 */
				obj_t BgL_cportz00_1286;

				{	/* Expand/eps.scm 17 */
					obj_t BgL_stringz00_1294;

					BgL_stringz00_1294 = BGl_string2081z00zzexpand_epsz00;
					{	/* Expand/eps.scm 17 */
						obj_t BgL_startz00_1295;

						BgL_startz00_1295 = BINT(((long) 0));
						{	/* Expand/eps.scm 17 */
							obj_t BgL_endz00_1296;

							BgL_endz00_1296 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_1294)));
							{	/* Expand/eps.scm 17 */

								BgL_cportz00_1286 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_1294, BgL_startz00_1295, BgL_endz00_1296);
				}}}}
				{
					long BgL_iz00_1287;

					BgL_iz00_1287 = ((long) 32);
				BgL_loopz00_1288:
					if ((BgL_iz00_1287 == ((long) -1)))
						{	/* Expand/eps.scm 17 */
							return BUNSPEC;
						}
					else
						{	/* Expand/eps.scm 17 */
							{	/* Expand/eps.scm 17 */
								obj_t BgL_arg2083z00_1290;

								{	/* Expand/eps.scm 17 */

									{	/* Expand/eps.scm 17 */
										obj_t BgL_locationz00_1292;

										BgL_locationz00_1292 = BBOOL(((bool_t) 0));
										{	/* Expand/eps.scm 17 */

											BgL_arg2083z00_1290 =
												BGl_readz00zz__readerz00(BgL_cportz00_1286,
												BgL_locationz00_1292);
										}
									}
								}
								{	/* Expand/eps.scm 17 */
									int BgL_tmpz00_1364;

									BgL_tmpz00_1364 = (int) (BgL_iz00_1287);
									CNST_TABLE_SET(BgL_tmpz00_1364, BgL_arg2083z00_1290);
							}}
							{	/* Expand/eps.scm 17 */
								int BgL_auxz00_1293;

								BgL_auxz00_1293 = (int) ((BgL_iz00_1287 - ((long) 1)));
								{
									long BgL_iz00_1369;

									BgL_iz00_1369 = (long) (BgL_auxz00_1293);
									BgL_iz00_1287 = BgL_iz00_1369;
									goto BgL_loopz00_1288;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzexpand_epsz00()
	{
		{	/* Expand/eps.scm 17 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzexpand_epsz00()
	{
		{	/* Expand/eps.scm 17 */
			BGl_za2macroza2z00zzexpand_epsz00 = BNIL;
			return (BGl_za2lexicalzd2stackza2zd2zzexpand_epsz00 = BNIL, BUNSPEC);
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzexpand_epsz00(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_115;

				BgL_headz00_115 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_116;
					obj_t BgL_tailz00_117;

					BgL_prevz00_116 = BgL_headz00_115;
					BgL_tailz00_117 = BgL_l1z00_1;
				BgL_loopz00_118:
					if (PAIRP(BgL_tailz00_117))
						{
							obj_t BgL_newzd2prevzd2_120;

							BgL_newzd2prevzd2_120 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_117), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_116, BgL_newzd2prevzd2_120);
							{
								obj_t BgL_tailz00_1379;
								obj_t BgL_prevz00_1378;

								BgL_prevz00_1378 = BgL_newzd2prevzd2_120;
								BgL_tailz00_1379 = CDR(BgL_tailz00_117);
								BgL_tailz00_117 = BgL_tailz00_1379;
								BgL_prevz00_116 = BgL_prevz00_1378;
								goto BgL_loopz00_118;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_115);
				}
			}
		}

	}



/* add-macro-definition! */
	BGL_EXPORTED_DEF obj_t BGl_addzd2macrozd2definitionz12z12zzexpand_epsz00(obj_t
		BgL_formz00_35)
	{
		{	/* Expand/eps.scm 51 */
			return (BGl_za2macroza2z00zzexpand_epsz00 =
				MAKE_YOUNG_PAIR(BgL_formz00_35, BGl_za2macroza2z00zzexpand_epsz00),
				BUNSPEC);
		}

	}



/* &add-macro-definition! */
	obj_t BGl_z62addzd2macrozd2definitionz12z70zzexpand_epsz00(obj_t
		BgL_envz00_1183, obj_t BgL_formz00_1184)
	{
		{	/* Expand/eps.scm 51 */
			return
				BGl_addzd2macrozd2definitionz12z12zzexpand_epsz00(BgL_formz00_1184);
		}

	}



/* add-macro-alias! */
	BGL_EXPORTED_DEF obj_t BGl_addzd2macrozd2aliasz12z12zzexpand_epsz00(obj_t
		BgL_sym1z00_36, obj_t BgL_sym2z00_37)
	{
		{	/* Expand/eps.scm 57 */
			return
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_sym1z00_36,
				CNST_TABLE_REF(((long) 0)), BgL_sym2z00_37);
		}

	}



/* &add-macro-alias! */
	obj_t BGl_z62addzd2macrozd2aliasz12z70zzexpand_epsz00(obj_t BgL_envz00_1185,
		obj_t BgL_sym1z00_1186, obj_t BgL_sym2z00_1187)
	{
		{	/* Expand/eps.scm 57 */
			return
				BGl_addzd2macrozd2aliasz12z12zzexpand_epsz00(BgL_sym1z00_1186,
				BgL_sym2z00_1187);
		}

	}



/* lexical-stack */
	BGL_EXPORTED_DEF obj_t BGl_lexicalzd2stackzd2zzexpand_epsz00()
	{
		{	/* Expand/eps.scm 73 */
			return BGl_za2lexicalzd2stackza2zd2zzexpand_epsz00;
		}

	}



/* &lexical-stack */
	obj_t BGl_z62lexicalzd2stackzb0zzexpand_epsz00(obj_t BgL_envz00_1188)
	{
		{	/* Expand/eps.scm 73 */
			return BGl_lexicalzd2stackzd2zzexpand_epsz00();
		}

	}



/* with-lexical */
	BGL_EXPORTED_DEF obj_t BGl_withzd2lexicalzd2zzexpand_epsz00(obj_t
		BgL_newz00_38, obj_t BgL_markz00_39, obj_t BgL_locz00_40,
		obj_t BgL_thunkz00_41)
	{
		{	/* Expand/eps.scm 79 */
			{	/* Expand/eps.scm 80 */
				obj_t BgL_newzd2idzd2_148;
				obj_t BgL_oldzd2lexicalzd2stackz00_149;

				if (NULLP(BgL_newz00_38))
					{	/* Expand/eps.scm 80 */
						BgL_newzd2idzd2_148 = BNIL;
					}
				else
					{	/* Expand/eps.scm 80 */
						obj_t BgL_head1090z00_178;

						{	/* Expand/eps.scm 80 */
							obj_t BgL_res1975z00_871;

							BgL_res1975z00_871 = MAKE_YOUNG_PAIR(BNIL, BNIL);
							BgL_head1090z00_178 = BgL_res1975z00_871;
						}
						{
							obj_t BgL_l1088z00_180;
							obj_t BgL_tail1091z00_181;

							BgL_l1088z00_180 = BgL_newz00_38;
							BgL_tail1091z00_181 = BgL_head1090z00_178;
						BgL_zc3z04anonymousza31216ze3z87_182:
							if (NULLP(BgL_l1088z00_180))
								{	/* Expand/eps.scm 80 */
									BgL_newzd2idzd2_148 = CDR(BgL_head1090z00_178);
								}
							else
								{	/* Expand/eps.scm 80 */
									obj_t BgL_newtail1092z00_184;

									{	/* Expand/eps.scm 80 */
										obj_t BgL_arg1223z00_186;

										{	/* Expand/eps.scm 80 */
											obj_t BgL_az00_187;

											BgL_az00_187 = CAR(((obj_t) BgL_l1088z00_180));
											BgL_arg1223z00_186 =
												BGl_fastzd2idzd2ofzd2idzd2zzast_identz00(BgL_az00_187,
												BgL_locz00_40);
										}
										{	/* Expand/eps.scm 80 */
											obj_t BgL_res1977z00_875;

											BgL_res1977z00_875 =
												MAKE_YOUNG_PAIR(BgL_arg1223z00_186, BNIL);
											BgL_newtail1092z00_184 = BgL_res1977z00_875;
										}
									}
									SET_CDR(BgL_tail1091z00_181, BgL_newtail1092z00_184);
									{	/* Expand/eps.scm 80 */
										obj_t BgL_arg1221z00_185;

										BgL_arg1221z00_185 = CDR(((obj_t) BgL_l1088z00_180));
										{
											obj_t BgL_tail1091z00_1402;
											obj_t BgL_l1088z00_1401;

											BgL_l1088z00_1401 = BgL_arg1221z00_185;
											BgL_tail1091z00_1402 = BgL_newtail1092z00_184;
											BgL_tail1091z00_181 = BgL_tail1091z00_1402;
											BgL_l1088z00_180 = BgL_l1088z00_1401;
											goto BgL_zc3z04anonymousza31216ze3z87_182;
										}
									}
								}
						}
					}
				BgL_oldzd2lexicalzd2stackz00_149 =
					BGl_za2lexicalzd2stackza2zd2zzexpand_epsz00;
				{	/* Expand/eps.scm 83 */
					obj_t BgL_arg1194z00_150;

					if (NULLP(BgL_newzd2idzd2_148))
						{	/* Expand/eps.scm 83 */
							BgL_arg1194z00_150 = BNIL;
						}
					else
						{	/* Expand/eps.scm 83 */
							obj_t BgL_head1095z00_153;

							{	/* Expand/eps.scm 83 */
								obj_t BgL_res1979z00_879;

								BgL_res1979z00_879 = MAKE_YOUNG_PAIR(BNIL, BNIL);
								BgL_head1095z00_153 = BgL_res1979z00_879;
							}
							{
								obj_t BgL_l1093z00_155;
								obj_t BgL_tail1096z00_156;

								BgL_l1093z00_155 = BgL_newzd2idzd2_148;
								BgL_tail1096z00_156 = BgL_head1095z00_153;
							BgL_zc3z04anonymousza31196ze3z87_157:
								if (NULLP(BgL_l1093z00_155))
									{	/* Expand/eps.scm 83 */
										BgL_arg1194z00_150 = CDR(BgL_head1095z00_153);
									}
								else
									{	/* Expand/eps.scm 83 */
										obj_t BgL_newtail1097z00_159;

										{	/* Expand/eps.scm 83 */
											obj_t BgL_arg1208z00_161;

											{	/* Expand/eps.scm 83 */
												obj_t BgL_oz00_162;

												BgL_oz00_162 = CAR(((obj_t) BgL_l1093z00_155));
												BgL_arg1208z00_161 =
													MAKE_YOUNG_PAIR(BgL_oz00_162, BgL_markz00_39);
											}
											{	/* Expand/eps.scm 83 */
												obj_t BgL_res1981z00_883;

												BgL_res1981z00_883 =
													MAKE_YOUNG_PAIR(BgL_arg1208z00_161, BNIL);
												BgL_newtail1097z00_159 = BgL_res1981z00_883;
											}
										}
										SET_CDR(BgL_tail1096z00_156, BgL_newtail1097z00_159);
										{	/* Expand/eps.scm 83 */
											obj_t BgL_arg1201z00_160;

											BgL_arg1201z00_160 = CDR(((obj_t) BgL_l1093z00_155));
											{
												obj_t BgL_tail1096z00_1417;
												obj_t BgL_l1093z00_1416;

												BgL_l1093z00_1416 = BgL_arg1201z00_160;
												BgL_tail1096z00_1417 = BgL_newtail1097z00_159;
												BgL_tail1096z00_156 = BgL_tail1096z00_1417;
												BgL_l1093z00_155 = BgL_l1093z00_1416;
												goto BgL_zc3z04anonymousza31196ze3z87_157;
											}
										}
									}
							}
						}
					BGl_za2lexicalzd2stackza2zd2zzexpand_epsz00 =
						BGl_appendzd221011zd2zzexpand_epsz00(BgL_arg1194z00_150,
						BGl_za2lexicalzd2stackza2zd2zzexpand_epsz00);
				}
				{	/* Expand/eps.scm 84 */
					obj_t BgL_resz00_164;

					BgL_resz00_164 =
						BGl_zc3z04exitza31209ze3ze70z60zzexpand_epsz00(BgL_thunkz00_41);
					BGl_za2lexicalzd2stackza2zd2zzexpand_epsz00 =
						BgL_oldzd2lexicalzd2stackz00_149;
					return BgL_resz00_164;
				}
			}
		}

	}



/* <@exit:1209>~0 */
	obj_t BGl_zc3z04exitza31209ze3ze70z60zzexpand_epsz00(obj_t BgL_thunkz00_1281)
	{
		{	/* Expand/eps.scm 84 */
			jmp_buf_t jmpbuf;
			void *BgL_an_exit1055z00_166;

			if (SET_EXIT(BgL_an_exit1055z00_166))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
#if( SIGSETJMP_SAVESIGS == 0 )
					bgl_restore_signal_handlers();
#endif

					BgL_an_exit1055z00_166 = (void *) jmpbuf;
					{	/* Expand/eps.scm 84 */

						PUSH_EXIT(BgL_an_exit1055z00_166, ((long) 1));
						{	/* Expand/eps.scm 84 */
							obj_t BgL_an_exitd1056z00_167;

							BgL_an_exitd1056z00_167 = ((obj_t) (&exitd));
							{	/* Expand/eps.scm 84 */
								obj_t BgL_res1058z00_170;

								{	/* Expand/eps.scm 87 */
									obj_t BgL_zc3z04anonymousza31212ze3z87_1189;

									BgL_zc3z04anonymousza31212ze3z87_1189 =
										MAKE_FX_PROCEDURE
										(BGl_z62zc3z04anonymousza31212ze3ze5zzexpand_epsz00,
										(int) (((long) 1)), (int) (((long) 1)));
									PROCEDURE_SET(BgL_zc3z04anonymousza31212ze3z87_1189,
										(int) (((long) 0)), BgL_an_exitd1056z00_167);
									BgL_res1058z00_170 =
										BGl_withzd2exceptionzd2handlerz00zz__errorz00
										(BgL_zc3z04anonymousza31212ze3z87_1189, BgL_thunkz00_1281);
								}
								POP_EXIT();
								return BgL_res1058z00_170;
							}
						}
					}
				}
		}

	}



/* &with-lexical */
	obj_t BGl_z62withzd2lexicalzb0zzexpand_epsz00(obj_t BgL_envz00_1190,
		obj_t BgL_newz00_1191, obj_t BgL_markz00_1192, obj_t BgL_locz00_1193,
		obj_t BgL_thunkz00_1194)
	{
		{	/* Expand/eps.scm 79 */
			return
				BGl_withzd2lexicalzd2zzexpand_epsz00(BgL_newz00_1191, BgL_markz00_1192,
				BgL_locz00_1193, BgL_thunkz00_1194);
		}

	}



/* &<@anonymous:1212> */
	obj_t BGl_z62zc3z04anonymousza31212ze3ze5zzexpand_epsz00(obj_t
		BgL_envz00_1195, obj_t BgL_ez00_1197)
	{
		{	/* Expand/eps.scm 86 */
			{	/* Expand/eps.scm 87 */
				obj_t BgL_an_exitd1056z00_1196;

				BgL_an_exitd1056z00_1196 =
					PROCEDURE_REF(BgL_envz00_1195, (int) (((long) 0)));
				if (BGl_isazf3zf3zz__objectz00(BgL_ez00_1197,
						BGl_z62errorz62zz__objectz00))
					{	/* Expand/eps.scm 87 */
						BGl_userzd2errorzd2notifyz00zztools_errorz00(BgL_ez00_1197,
							CNST_TABLE_REF(((long) 1)));
						return
							BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_an_exitd1056z00_1196,
							BUNSPEC);
					}
				else
					{	/* Expand/eps.scm 87 */
						return BGl_raisez00zz__errorz00(BgL_ez00_1197);
					}
			}
		}

	}



/* expand-units */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2unitszd2zzexpand_epsz00(obj_t
		BgL_unitsz00_42)
	{
		{	/* Expand/eps.scm 101 */
			{	/* Expand/eps.scm 102 */
				obj_t BgL_list1224z00_190;

				{	/* Expand/eps.scm 102 */
					obj_t BgL_arg1225z00_191;

					{	/* Expand/eps.scm 102 */
						obj_t BgL_arg1227z00_192;

						BgL_arg1227z00_192 =
							MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
						BgL_arg1225z00_191 =
							MAKE_YOUNG_PAIR(BGl_string2062z00zzexpand_epsz00,
							BgL_arg1227z00_192);
					}
					BgL_list1224z00_190 =
						MAKE_YOUNG_PAIR(BGl_string2063z00zzexpand_epsz00,
						BgL_arg1225z00_191);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list1224z00_190);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 =
				BGl_string2062z00zzexpand_epsz00;
			{	/* Expand/eps.scm 102 */
				obj_t BgL_g1059z00_193;

				BgL_g1059z00_193 = BNIL;
				{
					obj_t BgL_hooksz00_196;
					obj_t BgL_hnamesz00_197;

					BgL_hooksz00_196 = BgL_g1059z00_193;
					BgL_hnamesz00_197 = BNIL;
				BgL_zc3z04anonymousza31228ze3z87_198:
					if (NULLP(BgL_hooksz00_196))
						{	/* Expand/eps.scm 102 */
							CNST_TABLE_REF(((long) 2));
						}
					else
						{	/* Expand/eps.scm 102 */
							bool_t BgL_test2126z00_1449;

							{	/* Expand/eps.scm 102 */
								obj_t BgL_fun1243z00_205;

								BgL_fun1243z00_205 = CAR(((obj_t) BgL_hooksz00_196));
								BgL_test2126z00_1449 =
									CBOOL(PROCEDURE_ENTRY(BgL_fun1243z00_205) (BgL_fun1243z00_205,
										BEOA));
							}
							if (BgL_test2126z00_1449)
								{	/* Expand/eps.scm 102 */
									obj_t BgL_arg1232z00_202;
									obj_t BgL_arg1239z00_203;

									BgL_arg1232z00_202 = CDR(((obj_t) BgL_hooksz00_196));
									BgL_arg1239z00_203 = CDR(((obj_t) BgL_hnamesz00_197));
									{
										obj_t BgL_hnamesz00_1461;
										obj_t BgL_hooksz00_1460;

										BgL_hooksz00_1460 = BgL_arg1232z00_202;
										BgL_hnamesz00_1461 = BgL_arg1239z00_203;
										BgL_hnamesz00_197 = BgL_hnamesz00_1461;
										BgL_hooksz00_196 = BgL_hooksz00_1460;
										goto BgL_zc3z04anonymousza31228ze3z87_198;
									}
								}
							else
								{	/* Expand/eps.scm 102 */
									obj_t BgL_arg1242z00_204;

									BgL_arg1242z00_204 = CAR(((obj_t) BgL_hnamesz00_197));
									BGl_internalzd2errorzd2zztools_errorz00
										(BGl_string2062z00zzexpand_epsz00,
										BGl_string2064z00zzexpand_epsz00, BgL_arg1242z00_204);
								}
						}
				}
			}
			{	/* Expand/eps.scm 104 */
				obj_t BgL_g1100z00_208;

				BgL_g1100z00_208 = bgl_reverse_bang(BGl_za2macroza2z00zzexpand_epsz00);
				{
					obj_t BgL_l1098z00_210;

					BgL_l1098z00_210 = BgL_g1100z00_208;
				BgL_zc3z04anonymousza31245ze3z87_211:
					if (PAIRP(BgL_l1098z00_210))
						{	/* Expand/eps.scm 106 */
							{	/* Expand/eps.scm 105 */
								obj_t BgL_xz00_213;

								BgL_xz00_213 = CAR(BgL_l1098z00_210);
								{	/* Expand/eps.scm 229 */
									obj_t BgL_xz00_1299;
									obj_t BgL_sz00_1301;

									BgL_xz00_1299 =
										BGl_initialzd2expanderzd2zzexpand_epsz00(BgL_xz00_213,
										BGl_initialzd2expanderzd2envz00zzexpand_epsz00);
									BgL_sz00_1301 = BNIL;
									BGl_expandze70ze7zzexpand_epsz00(BgL_xz00_1299,
										BgL_sz00_1301);
								}
							}
							{
								obj_t BgL_l1098z00_1471;

								BgL_l1098z00_1471 = CDR(BgL_l1098z00_210);
								BgL_l1098z00_210 = BgL_l1098z00_1471;
								goto BgL_zc3z04anonymousza31245ze3z87_211;
							}
						}
					else
						{	/* Expand/eps.scm 106 */
							((bool_t) 1);
						}
				}
			}
			{
				obj_t BgL_l1101z00_218;

				BgL_l1101z00_218 = BgL_unitsz00_42;
			BgL_zc3z04anonymousza31251ze3z87_219:
				if (PAIRP(BgL_l1101z00_218))
					{	/* Expand/eps.scm 115 */
						{	/* Expand/eps.scm 116 */
							obj_t BgL_unitz00_221;

							BgL_unitz00_221 = CAR(BgL_l1101z00_218);
							{	/* Expand/eps.scm 116 */
								bool_t BgL_test2129z00_1476;

								{	/* Expand/eps.scm 116 */
									obj_t BgL_tmpz00_1477;

									BgL_tmpz00_1477 =
										STRUCT_REF(((obj_t) BgL_unitz00_221), (int) (((long) 2)));
									BgL_test2129z00_1476 = PROCEDUREP(BgL_tmpz00_1477);
								}
								if (BgL_test2129z00_1476)
									{	/* Expand/eps.scm 116 */
										CNST_TABLE_REF(((long) 3));
									}
								else
									{	/* Expand/eps.scm 120 */
										obj_t BgL_g1061z00_224;

										BgL_g1061z00_224 =
											STRUCT_REF(((obj_t) BgL_unitz00_221), (int) (((long) 2)));
										{
											obj_t BgL_srcz00_227;
											obj_t BgL_resz00_228;

											BgL_srcz00_227 = BgL_g1061z00_224;
											BgL_resz00_228 = BNIL;
										BgL_zc3z04anonymousza31255ze3z87_229:
											if (NULLP(BgL_srcz00_227))
												{	/* Expand/eps.scm 123 */
													obj_t BgL_arg1258z00_231;

													BgL_arg1258z00_231 = bgl_reverse_bang(BgL_resz00_228);
													{	/* Expand/eps.scm 123 */
														obj_t BgL_xz00_1284;

														{	/* Expand/eps.scm 123 */
															int BgL_auxz00_1491;
															obj_t BgL_tmpz00_1489;

															BgL_auxz00_1491 = (int) (((long) 2));
															BgL_tmpz00_1489 = ((obj_t) BgL_unitz00_221);
															BgL_xz00_1284 =
																STRUCT_SET(BgL_tmpz00_1489, BgL_auxz00_1491,
																BgL_arg1258z00_231);
														} BUNSPEC;
												}}
											else
												{

													{	/* Expand/eps.scm 124 */
														obj_t BgL_ezd2396zd2_235;

														BgL_ezd2396zd2_235 = CAR(((obj_t) BgL_srcz00_227));
														if (PAIRP(BgL_ezd2396zd2_235))
															{	/* Expand/eps.scm 124 */
																if (
																	(CAR(BgL_ezd2396zd2_235) ==
																		CNST_TABLE_REF(((long) 4))))
																	{	/* Expand/eps.scm 124 */
																		{	/* Expand/eps.scm 128 */
																			obj_t
																				BgL_zc3z04anonymousza31276ze3z87_1212;
																			BgL_zc3z04anonymousza31276ze3z87_1212 =
																				MAKE_FX_PROCEDURE
																				(BGl_z62zc3z04anonymousza31276ze3ze5zzexpand_epsz00,
																				(int) (((long) 0)), (int) (((long) 1)));
																			PROCEDURE_SET
																				(BgL_zc3z04anonymousza31276ze3z87_1212,
																				(int) (((long) 0)), BgL_srcz00_227);
																			BGl_withzd2exceptionzd2handlerz00zz__errorz00
																				(BGl_proc2066z00zzexpand_epsz00,
																				BgL_zc3z04anonymousza31276ze3z87_1212);
																		}
																		{	/* Expand/eps.scm 132 */
																			obj_t BgL_arg1280z00_251;

																			BgL_arg1280z00_251 =
																				CDR(((obj_t) BgL_srcz00_227));
																			{
																				obj_t BgL_srcz00_1510;

																				BgL_srcz00_1510 = BgL_arg1280z00_251;
																				BgL_srcz00_227 = BgL_srcz00_1510;
																				goto
																					BgL_zc3z04anonymousza31255ze3z87_229;
																			}
																		}
																	}
																else
																	{	/* Expand/eps.scm 124 */
																		if (
																			(CAR(BgL_ezd2396zd2_235) ==
																				CNST_TABLE_REF(((long) 5))))
																			{	/* Expand/eps.scm 124 */
																				{	/* Expand/eps.scm 136 */
																					obj_t
																						BgL_zc3z04anonymousza31284ze3z87_1210;
																					BgL_zc3z04anonymousza31284ze3z87_1210
																						=
																						MAKE_FX_PROCEDURE
																						(BGl_z62zc3z04anonymousza31284ze3ze5zzexpand_epsz00,
																						(int) (((long) 0)),
																						(int) (((long) 1)));
																					PROCEDURE_SET
																						(BgL_zc3z04anonymousza31284ze3z87_1210,
																						(int) (((long) 0)), BgL_srcz00_227);
																					BGl_withzd2exceptionzd2handlerz00zz__errorz00
																						(BGl_proc2065z00zzexpand_epsz00,
																						BgL_zc3z04anonymousza31284ze3z87_1210);
																				}
																				{	/* Expand/eps.scm 140 */
																					obj_t BgL_arg1286z00_260;

																					BgL_arg1286z00_260 =
																						CDR(((obj_t) BgL_srcz00_227));
																					{
																						obj_t BgL_srcz00_1523;

																						BgL_srcz00_1523 =
																							BgL_arg1286z00_260;
																						BgL_srcz00_227 = BgL_srcz00_1523;
																						goto
																							BgL_zc3z04anonymousza31255ze3z87_229;
																					}
																				}
																			}
																		else
																			{	/* Expand/eps.scm 124 */
																			BgL_tagzd2395zd2_234:
																				{	/* Expand/eps.scm 142 */
																					obj_t BgL_obodyz00_261;

																					BgL_obodyz00_261 =
																						CAR(((obj_t) BgL_srcz00_227));
																					{	/* Expand/eps.scm 142 */
																						obj_t BgL_nbodyz00_262;

																						BgL_nbodyz00_262 =
																							BGl_zc3z04exitza31289ze3ze70z60zzexpand_epsz00
																							(BgL_obodyz00_261);
																						{	/* Expand/eps.scm 143 */

																							{	/* Expand/eps.scm 151 */
																								obj_t BgL_arg1287z00_263;
																								obj_t BgL_arg1288z00_264;

																								BgL_arg1287z00_263 =
																									CDR(((obj_t) BgL_srcz00_227));
																								BgL_arg1288z00_264 =
																									MAKE_YOUNG_PAIR
																									(BgL_nbodyz00_262,
																									BgL_resz00_228);
																								{
																									obj_t BgL_resz00_1531;
																									obj_t BgL_srcz00_1530;

																									BgL_srcz00_1530 =
																										BgL_arg1287z00_263;
																									BgL_resz00_1531 =
																										BgL_arg1288z00_264;
																									BgL_resz00_228 =
																										BgL_resz00_1531;
																									BgL_srcz00_227 =
																										BgL_srcz00_1530;
																									goto
																										BgL_zc3z04anonymousza31255ze3z87_229;
																								}
																							}
																						}
																					}
																				}
																			}
																	}
															}
														else
															{	/* Expand/eps.scm 124 */
																goto BgL_tagzd2395zd2_234;
															}
													}
												}
										}
									}
							}
						}
						{
							obj_t BgL_l1101z00_1532;

							BgL_l1101z00_1532 = CDR(BgL_l1101z00_218);
							BgL_l1101z00_218 = BgL_l1101z00_1532;
							goto BgL_zc3z04anonymousza31251ze3z87_219;
						}
					}
				else
					{	/* Expand/eps.scm 115 */
						((bool_t) 1);
					}
			}
			{	/* Expand/eps.scm 154 */
				bool_t BgL_test2134z00_1534;

				if (CBOOL(BGl_za2optimzd2Ozd2macrozf3za2zf3zzengine_paramz00))
					{	/* Expand/eps.scm 154 */
						BgL_test2134z00_1534 = ((bool_t) 1);
					}
				else
					{	/* Expand/eps.scm 154 */
						if (BGl_numberzf3zf3zz__r4_numbers_6_5z00
							(BGl_za2compilerzd2debugza2zd2zzengine_paramz00))
							{	/* Expand/eps.scm 155 */
								if (INTEGERP(BGl_za2compilerzd2debugza2zd2zzengine_paramz00))
									{	/* Expand/eps.scm 155 */
										BgL_test2134z00_1534 =
											(
											(long)
											CINT(BGl_za2compilerzd2debugza2zd2zzengine_paramz00) >=
											((long) 1));
									}
								else
									{	/* Expand/eps.scm 155 */
										BgL_test2134z00_1534 =
											BGl_2ze3zd3z30zz__r4_numbers_6_5z00
											(BGl_za2compilerzd2debugza2zd2zzengine_paramz00,
											BINT(((long) 1)));
							}}
						else
							{	/* Expand/eps.scm 155 */
								BgL_test2134z00_1534 = ((bool_t) 0);
							}
					}
				if (BgL_test2134z00_1534)
					{
						obj_t BgL_l1103z00_287;

						BgL_l1103z00_287 = BgL_unitsz00_42;
					BgL_zc3z04anonymousza31299ze3z87_288:
						if (PAIRP(BgL_l1103z00_287))
							{	/* Expand/eps.scm 156 */
								{	/* Expand/eps.scm 157 */
									obj_t BgL_unitz00_290;

									BgL_unitz00_290 = CAR(BgL_l1103z00_287);
									{	/* Expand/eps.scm 157 */
										bool_t BgL_test2139z00_1548;

										{	/* Expand/eps.scm 157 */
											obj_t BgL_tmpz00_1549;

											BgL_tmpz00_1549 =
												STRUCT_REF(
												((obj_t) BgL_unitz00_290), (int) (((long) 2)));
											BgL_test2139z00_1548 = PROCEDUREP(BgL_tmpz00_1549);
										}
										if (BgL_test2139z00_1548)
											{	/* Expand/eps.scm 157 */
												CNST_TABLE_REF(((long) 3));
											}
										else
											{	/* Expand/eps.scm 161 */
												obj_t BgL_g1068z00_293;

												BgL_g1068z00_293 =
													STRUCT_REF(
													((obj_t) BgL_unitz00_290), (int) (((long) 2)));
												{
													obj_t BgL_srcz00_296;
													obj_t BgL_resz00_297;

													BgL_srcz00_296 = BgL_g1068z00_293;
													BgL_resz00_297 = BNIL;
												BgL_zc3z04anonymousza31303ze3z87_298:
													if (NULLP(BgL_srcz00_296))
														{	/* Expand/eps.scm 165 */
															obj_t BgL_arg1306z00_300;

															BgL_arg1306z00_300 =
																BGl_appendzd221011zd2zzexpand_epsz00
																(BGl_getzd2Ozd2macrozd2toplevelzd2zzexpand_expanderz00
																(), bgl_reverse_bang(BgL_resz00_297));
															{	/* Expand/eps.scm 164 */
																obj_t BgL_xz00_1285;

																{	/* Expand/eps.scm 164 */
																	int BgL_auxz00_1565;
																	obj_t BgL_tmpz00_1563;

																	BgL_auxz00_1565 = (int) (((long) 2));
																	BgL_tmpz00_1563 = ((obj_t) BgL_unitz00_290);
																	BgL_xz00_1285 =
																		STRUCT_SET(BgL_tmpz00_1563, BgL_auxz00_1565,
																		BgL_arg1306z00_300);
																} BUNSPEC;
														}}
													else
														{	/* Expand/eps.scm 166 */
															obj_t BgL_obodyz00_303;

															BgL_obodyz00_303 = CAR(((obj_t) BgL_srcz00_296));
															{	/* Expand/eps.scm 166 */
																obj_t BgL_nbodyz00_304;

																BgL_nbodyz00_304 =
																	BGl_zc3z04exitza31311ze3ze70z60zzexpand_epsz00
																	(BgL_obodyz00_303);
																{	/* Expand/eps.scm 167 */

																	{	/* Expand/eps.scm 175 */
																		obj_t BgL_arg1309z00_305;
																		obj_t BgL_arg1310z00_306;

																		BgL_arg1309z00_305 =
																			CDR(((obj_t) BgL_srcz00_296));
																		BgL_arg1310z00_306 =
																			MAKE_YOUNG_PAIR(BgL_nbodyz00_304,
																			BgL_resz00_297);
																		{
																			obj_t BgL_resz00_1575;
																			obj_t BgL_srcz00_1574;

																			BgL_srcz00_1574 = BgL_arg1309z00_305;
																			BgL_resz00_1575 = BgL_arg1310z00_306;
																			BgL_resz00_297 = BgL_resz00_1575;
																			BgL_srcz00_296 = BgL_srcz00_1574;
																			goto BgL_zc3z04anonymousza31303ze3z87_298;
																		}
																	}
																}
															}
														}
												}
											}
									}
								}
								{
									obj_t BgL_l1103z00_1576;

									BgL_l1103z00_1576 = CDR(BgL_l1103z00_287);
									BgL_l1103z00_287 = BgL_l1103z00_1576;
									goto BgL_zc3z04anonymousza31299ze3z87_288;
								}
							}
						else
							{	/* Expand/eps.scm 156 */
								((bool_t) 1);
							}
					}
				else
					{	/* Expand/eps.scm 154 */
						((bool_t) 0);
					}
			}
			if (
				((long) CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00) >
					((long) 0)))
				{	/* Expand/eps.scm 178 */
					{	/* Expand/eps.scm 178 */
						obj_t BgL_port1105z00_329;

						{	/* Expand/eps.scm 178 */
							obj_t BgL_res1995z00_932;

							{	/* Expand/eps.scm 178 */
								obj_t BgL_tmpz00_1581;

								BgL_tmpz00_1581 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res1995z00_932 =
									BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_1581);
							}
							BgL_port1105z00_329 = BgL_res1995z00_932;
						}
						bgl_display_obj(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
							BgL_port1105z00_329);
						bgl_display_string(BGl_string2067z00zzexpand_epsz00,
							BgL_port1105z00_329);
						{	/* Expand/eps.scm 178 */
							obj_t BgL_arg1324z00_330;

							{	/* Expand/eps.scm 178 */
								bool_t BgL_test2142z00_1586;

								if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
									(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
									{	/* Expand/eps.scm 178 */
										if (INTEGERP
											(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
											{	/* Expand/eps.scm 178 */
												BgL_test2142z00_1586 =
													(
													(long)
													CINT
													(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00)
													> ((long) 1));
											}
										else
											{	/* Expand/eps.scm 178 */
												BgL_test2142z00_1586 =
													BGl_2ze3ze3zz__r4_numbers_6_5z00
													(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
													BINT(((long) 1)));
									}}
								else
									{	/* Expand/eps.scm 178 */
										BgL_test2142z00_1586 = ((bool_t) 0);
									}
								if (BgL_test2142z00_1586)
									{	/* Expand/eps.scm 178 */
										BgL_arg1324z00_330 = BGl_string2068z00zzexpand_epsz00;
									}
								else
									{	/* Expand/eps.scm 178 */
										BgL_arg1324z00_330 = BGl_string2069z00zzexpand_epsz00;
									}
							}
							bgl_display_obj(BgL_arg1324z00_330, BgL_port1105z00_329);
						}
						bgl_display_string(BGl_string2070z00zzexpand_epsz00,
							BgL_port1105z00_329);
						bgl_display_char(((unsigned char) 10), BgL_port1105z00_329);
					}
					{	/* Expand/eps.scm 178 */
						obj_t BgL_list1328z00_336;

						BgL_list1328z00_336 = MAKE_YOUNG_PAIR(BINT(((long) -1)), BNIL);
						return BGl_exitz00zz__errorz00(BgL_list1328z00_336);
					}
				}
			else
				{	/* Expand/eps.scm 178 */
					obj_t BgL_g1074z00_337;
					obj_t BgL_g1076z00_338;

					{	/* Expand/eps.scm 178 */
						obj_t BgL_list1339z00_351;

						BgL_list1339z00_351 =
							MAKE_YOUNG_PAIR
							(BGl_checkzd2tozd2bezd2macroszd2envz00zzexpand_expanderz00, BNIL);
						BgL_g1074z00_337 = BgL_list1339z00_351;
					}
					BgL_g1076z00_338 = CNST_TABLE_REF(((long) 6));
					{
						obj_t BgL_hooksz00_340;
						obj_t BgL_hnamesz00_341;

						BgL_hooksz00_340 = BgL_g1074z00_337;
						BgL_hnamesz00_341 = BgL_g1076z00_338;
					BgL_zc3z04anonymousza31329ze3z87_342:
						if (NULLP(BgL_hooksz00_340))
							{	/* Expand/eps.scm 178 */
								return BgL_unitsz00_42;
							}
						else
							{	/* Expand/eps.scm 178 */
								bool_t BgL_test2146z00_1605;

								{	/* Expand/eps.scm 178 */
									obj_t BgL_fun1338z00_349;

									BgL_fun1338z00_349 = CAR(((obj_t) BgL_hooksz00_340));
									BgL_test2146z00_1605 =
										CBOOL(PROCEDURE_ENTRY(BgL_fun1338z00_349)
										(BgL_fun1338z00_349, BEOA));
								}
								if (BgL_test2146z00_1605)
									{	/* Expand/eps.scm 178 */
										obj_t BgL_arg1334z00_346;
										obj_t BgL_arg1335z00_347;

										BgL_arg1334z00_346 = CDR(((obj_t) BgL_hooksz00_340));
										BgL_arg1335z00_347 = CDR(((obj_t) BgL_hnamesz00_341));
										{
											obj_t BgL_hnamesz00_1617;
											obj_t BgL_hooksz00_1616;

											BgL_hooksz00_1616 = BgL_arg1334z00_346;
											BgL_hnamesz00_1617 = BgL_arg1335z00_347;
											BgL_hnamesz00_341 = BgL_hnamesz00_1617;
											BgL_hooksz00_340 = BgL_hooksz00_1616;
											goto BgL_zc3z04anonymousza31329ze3z87_342;
										}
									}
								else
									{	/* Expand/eps.scm 178 */
										obj_t BgL_arg1337z00_348;

										BgL_arg1337z00_348 = CAR(((obj_t) BgL_hnamesz00_341));
										return
											BGl_internalzd2errorzd2zztools_errorz00
											(BGl_za2currentzd2passza2zd2zzengine_passz00,
											BGl_string2071z00zzexpand_epsz00, BgL_arg1337z00_348);
									}
							}
					}
				}
		}

	}



/* <@exit:1289>~0 */
	obj_t BGl_zc3z04exitza31289ze3ze70z60zzexpand_epsz00(obj_t BgL_obodyz00_1279)
	{
		{	/* Expand/eps.scm 143 */
			jmp_buf_t jmpbuf;
			void *BgL_an_exit1063z00_266;

			if (SET_EXIT(BgL_an_exit1063z00_266))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
#if( SIGSETJMP_SAVESIGS == 0 )
					bgl_restore_signal_handlers();
#endif

					BgL_an_exit1063z00_266 = (void *) jmpbuf;
					{	/* Expand/eps.scm 143 */

						PUSH_EXIT(BgL_an_exit1063z00_266, ((long) 1));
						{	/* Expand/eps.scm 143 */
							obj_t BgL_an_exitd1064z00_267;

							BgL_an_exitd1064z00_267 = ((obj_t) (&exitd));
							{	/* Expand/eps.scm 146 */
								obj_t BgL_res1066z00_270;

								{	/* Expand/eps.scm 146 */
									obj_t BgL_zc3z04anonymousza31294ze3z87_1205;
									obj_t BgL_zc3z04anonymousza31292ze3z87_1209;

									BgL_zc3z04anonymousza31294ze3z87_1205 =
										MAKE_FX_PROCEDURE
										(BGl_z62zc3z04anonymousza31294ze3ze5zzexpand_epsz00,
										(int) (((long) 0)), (int) (((long) 1)));
									BgL_zc3z04anonymousza31292ze3z87_1209 =
										MAKE_FX_PROCEDURE
										(BGl_z62zc3z04anonymousza31292ze3ze5zzexpand_epsz00,
										(int) (((long) 1)), (int) (((long) 1)));
									PROCEDURE_SET(BgL_zc3z04anonymousza31294ze3z87_1205,
										(int) (((long) 0)), BgL_obodyz00_1279);
									PROCEDURE_SET(BgL_zc3z04anonymousza31292ze3z87_1209,
										(int) (((long) 0)), BgL_an_exitd1064z00_267);
									BgL_res1066z00_270 =
										BGl_withzd2exceptionzd2handlerz00zz__errorz00
										(BgL_zc3z04anonymousza31292ze3z87_1209,
										BgL_zc3z04anonymousza31294ze3z87_1205);
								}
								POP_EXIT();
								return BgL_res1066z00_270;
							}
						}
					}
				}
		}

	}



/* <@exit:1311>~0 */
	obj_t BGl_zc3z04exitza31311ze3ze70z60zzexpand_epsz00(obj_t BgL_obodyz00_1280)
	{
		{	/* Expand/eps.scm 167 */
			jmp_buf_t jmpbuf;
			void *BgL_an_exit1070z00_308;

			if (SET_EXIT(BgL_an_exit1070z00_308))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
#if( SIGSETJMP_SAVESIGS == 0 )
					bgl_restore_signal_handlers();
#endif

					BgL_an_exit1070z00_308 = (void *) jmpbuf;
					{	/* Expand/eps.scm 167 */

						PUSH_EXIT(BgL_an_exit1070z00_308, ((long) 1));
						{	/* Expand/eps.scm 167 */
							obj_t BgL_an_exitd1071z00_309;

							BgL_an_exitd1071z00_309 = ((obj_t) (&exitd));
							{	/* Expand/eps.scm 170 */
								obj_t BgL_res1073z00_312;

								{	/* Expand/eps.scm 170 */
									obj_t BgL_zc3z04anonymousza31317ze3z87_1199;
									obj_t BgL_zc3z04anonymousza31315ze3z87_1204;

									BgL_zc3z04anonymousza31317ze3z87_1199 =
										MAKE_FX_PROCEDURE
										(BGl_z62zc3z04anonymousza31317ze3ze5zzexpand_epsz00,
										(int) (((long) 0)), (int) (((long) 1)));
									BgL_zc3z04anonymousza31315ze3z87_1204 =
										MAKE_FX_PROCEDURE
										(BGl_z62zc3z04anonymousza31315ze3ze5zzexpand_epsz00,
										(int) (((long) 1)), (int) (((long) 1)));
									PROCEDURE_SET(BgL_zc3z04anonymousza31317ze3z87_1199,
										(int) (((long) 0)), BgL_obodyz00_1280);
									PROCEDURE_SET(BgL_zc3z04anonymousza31315ze3z87_1204,
										(int) (((long) 0)), BgL_an_exitd1071z00_309);
									BgL_res1073z00_312 =
										BGl_withzd2exceptionzd2handlerz00zz__errorz00
										(BgL_zc3z04anonymousza31315ze3z87_1204,
										BgL_zc3z04anonymousza31317ze3z87_1199);
								}
								POP_EXIT();
								return BgL_res1073z00_312;
							}
						}
					}
				}
		}

	}



/* &expand-units */
	obj_t BGl_z62expandzd2unitszb0zzexpand_epsz00(obj_t BgL_envz00_1214,
		obj_t BgL_unitsz00_1215)
	{
		{	/* Expand/eps.scm 101 */
			return BGl_expandzd2unitszd2zzexpand_epsz00(BgL_unitsz00_1215);
		}

	}



/* &handler */
	obj_t BGl_z62handlerz62zzexpand_epsz00(obj_t BgL_ez00_352)
	{
		{	/* Expand/eps.scm 113 */
			if (BGl_isazf3zf3zz__objectz00(BgL_ez00_352,
					BGl_z62errorz62zz__objectz00))
				{	/* Expand/eps.scm 111 */
					return
						BGl_userzd2errorzd2notifyz00zztools_errorz00(BgL_ez00_352,
						CNST_TABLE_REF(((long) 1)));
				}
			else
				{	/* Expand/eps.scm 111 */
					return BGl_raisez00zz__errorz00(BgL_ez00_352);
				}
		}

	}



/* &<@anonymous:1317> */
	obj_t BGl_z62zc3z04anonymousza31317ze3ze5zzexpand_epsz00(obj_t
		BgL_envz00_1216)
	{
		{	/* Expand/eps.scm 173 */
			return
				BGl_compilezd2expanderzd2zzexpand_epsz00(PROCEDURE_REF(BgL_envz00_1216,
					(int) (((long) 0))), BGl_compilezd2expanderzd2envz00zzexpand_epsz00,
				BNIL);
		}

	}



/* &<@anonymous:1315> */
	obj_t BGl_z62zc3z04anonymousza31315ze3ze5zzexpand_epsz00(obj_t
		BgL_envz00_1218, obj_t BgL_ez00_1220)
	{
		{	/* Expand/eps.scm 169 */
			{	/* Expand/eps.scm 170 */
				obj_t BgL_an_exitd1071z00_1219;

				BgL_an_exitd1071z00_1219 =
					PROCEDURE_REF(BgL_envz00_1218, (int) (((long) 0)));
				BGl_z62handlerz62zzexpand_epsz00(BgL_ez00_1220);
				if (BGl_isazf3zf3zz__objectz00(BgL_ez00_1220,
						BGl_z62errorz62zz__objectz00))
					{	/* Expand/eps.scm 172 */
						obj_t BgL_val1072z00_1304;

						BgL_val1072z00_1304 = CNST_TABLE_REF(((long) 7));
						return
							BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_an_exitd1071z00_1219,
							BgL_val1072z00_1304);
					}
				else
					{	/* Expand/eps.scm 171 */
						return BFALSE;
					}
			}
		}

	}



/* &<@anonymous:1294> */
	obj_t BGl_z62zc3z04anonymousza31294ze3ze5zzexpand_epsz00(obj_t
		BgL_envz00_1221)
	{
		{	/* Expand/eps.scm 149 */
			return
				BGl_initialzd2expanderzd2zzexpand_epsz00(PROCEDURE_REF(BgL_envz00_1221,
					(int) (((long) 0))), BGl_initialzd2expanderzd2envz00zzexpand_epsz00);
		}

	}



/* &<@anonymous:1292> */
	obj_t BGl_z62zc3z04anonymousza31292ze3ze5zzexpand_epsz00(obj_t
		BgL_envz00_1223, obj_t BgL_ez00_1225)
	{
		{	/* Expand/eps.scm 145 */
			{	/* Expand/eps.scm 146 */
				obj_t BgL_an_exitd1064z00_1224;

				BgL_an_exitd1064z00_1224 =
					PROCEDURE_REF(BgL_envz00_1223, (int) (((long) 0)));
				BGl_z62handlerz62zzexpand_epsz00(BgL_ez00_1225);
				if (BGl_isazf3zf3zz__objectz00(BgL_ez00_1225,
						BGl_z62errorz62zz__objectz00))
					{	/* Expand/eps.scm 148 */
						obj_t BgL_val1065z00_1305;

						BgL_val1065z00_1305 = CNST_TABLE_REF(((long) 7));
						return
							BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_an_exitd1064z00_1224,
							BgL_val1065z00_1305);
					}
				else
					{	/* Expand/eps.scm 147 */
						return BFALSE;
					}
			}
		}

	}



/* &<@anonymous:1284> */
	obj_t BGl_z62zc3z04anonymousza31284ze3ze5zzexpand_epsz00(obj_t
		BgL_envz00_1226)
	{
		{	/* Expand/eps.scm 138 */
			{	/* Expand/eps.scm 139 */
				obj_t BgL_srcz00_1227;

				BgL_srcz00_1227 = PROCEDURE_REF(BgL_envz00_1226, (int) (((long) 0)));
				{	/* Expand/eps.scm 139 */
					obj_t BgL_arg1285z00_1306;

					BgL_arg1285z00_1306 = CAR(((obj_t) BgL_srcz00_1227));
					return
						BGl_initialzd2expanderzd2zzexpand_epsz00(BgL_arg1285z00_1306,
						BGl_initialzd2expanderzd2envz00zzexpand_epsz00);
				}
			}
		}

	}



/* &<@anonymous:1283> */
	obj_t BGl_z62zc3z04anonymousza31283ze3ze5zzexpand_epsz00(obj_t
		BgL_envz00_1228, obj_t BgL_ez00_1229)
	{
		{	/* Expand/eps.scm 135 */
			BGl_z62handlerz62zzexpand_epsz00(BgL_ez00_1229);
			return CNST_TABLE_REF(((long) 7));
		}

	}



/* &<@anonymous:1276> */
	obj_t BGl_z62zc3z04anonymousza31276ze3ze5zzexpand_epsz00(obj_t
		BgL_envz00_1230)
	{
		{	/* Expand/eps.scm 130 */
			{	/* Expand/eps.scm 131 */
				obj_t BgL_srcz00_1231;

				BgL_srcz00_1231 = PROCEDURE_REF(BgL_envz00_1230, (int) (((long) 0)));
				{	/* Expand/eps.scm 131 */
					obj_t BgL_arg1277z00_1307;

					BgL_arg1277z00_1307 = CAR(((obj_t) BgL_srcz00_1231));
					return
						BGl_initialzd2expanderzd2zzexpand_epsz00(BgL_arg1277z00_1307,
						BGl_initialzd2expanderzd2envz00zzexpand_epsz00);
				}
			}
		}

	}



/* &<@anonymous:1275> */
	obj_t BGl_z62zc3z04anonymousza31275ze3ze5zzexpand_epsz00(obj_t
		BgL_envz00_1232, obj_t BgL_ez00_1233)
	{
		{	/* Expand/eps.scm 127 */
			BGl_z62handlerz62zzexpand_epsz00(BgL_ez00_1233);
			return CNST_TABLE_REF(((long) 7));
		}

	}



/* comptime-expand */
	BGL_EXPORTED_DEF obj_t BGl_comptimezd2expandzd2zzexpand_epsz00(obj_t
		BgL_xz00_43)
	{
		{	/* Expand/eps.scm 183 */
			return
				BGl_initialzd2expanderzd2zzexpand_epsz00(BgL_xz00_43,
				BGl_initialzd2expanderzd2envz00zzexpand_epsz00);
		}

	}



/* &comptime-expand */
	obj_t BGl_z62comptimezd2expandzb0zzexpand_epsz00(obj_t BgL_envz00_1235,
		obj_t BgL_xz00_1236)
	{
		{	/* Expand/eps.scm 183 */
			return BGl_comptimezd2expandzd2zzexpand_epsz00(BgL_xz00_1236);
		}

	}



/* comptime-expand/error */
	BGL_EXPORTED_DEF obj_t BGl_comptimezd2expandzf2errorz20zzexpand_epsz00(obj_t
		BgL_xz00_44)
	{
		{	/* Expand/eps.scm 189 */
			{	/* Expand/eps.scm 193 */
				obj_t BgL_zc3z04anonymousza31353ze3z87_1237;
				obj_t BgL_zc3z04anonymousza31346ze3z87_1238;

				BgL_zc3z04anonymousza31353ze3z87_1237 =
					MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31353ze3ze5zzexpand_epsz00,
					(int) (((long) 0)), (int) (((long) 1)));
				BgL_zc3z04anonymousza31346ze3z87_1238 =
					MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31346ze3ze5zzexpand_epsz00,
					(int) (((long) 1)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_zc3z04anonymousza31353ze3z87_1237,
					(int) (((long) 0)), BgL_xz00_44);
				PROCEDURE_SET(BgL_zc3z04anonymousza31346ze3z87_1238,
					(int) (((long) 0)), BgL_xz00_44);
				return
					BGl_withzd2exceptionzd2handlerz00zz__errorz00
					(BgL_zc3z04anonymousza31346ze3z87_1238,
					BgL_zc3z04anonymousza31353ze3z87_1237);
			}
		}

	}



/* &comptime-expand/error */
	obj_t BGl_z62comptimezd2expandzf2errorz42zzexpand_epsz00(obj_t
		BgL_envz00_1239, obj_t BgL_xz00_1240)
	{
		{	/* Expand/eps.scm 189 */
			return BGl_comptimezd2expandzf2errorz20zzexpand_epsz00(BgL_xz00_1240);
		}

	}



/* &<@anonymous:1353> */
	obj_t BGl_z62zc3z04anonymousza31353ze3ze5zzexpand_epsz00(obj_t
		BgL_envz00_1241)
	{
		{	/* Expand/eps.scm 197 */
			return
				BGl_initialzd2expanderzd2zzexpand_epsz00(PROCEDURE_REF(BgL_envz00_1241,
					(int) (((long) 0))), BGl_initialzd2expanderzd2envz00zzexpand_epsz00);
		}

	}



/* &<@anonymous:1346> */
	obj_t BGl_z62zc3z04anonymousza31346ze3ze5zzexpand_epsz00(obj_t
		BgL_envz00_1243, obj_t BgL_ez00_1245)
	{
		{	/* Expand/eps.scm 192 */
			{	/* Expand/eps.scm 193 */
				obj_t BgL_xz00_1244;

				BgL_xz00_1244 = PROCEDURE_REF(BgL_envz00_1243, (int) (((long) 0)));
				if (BGl_isazf3zf3zz__objectz00(BgL_ez00_1245,
						BGl_z62errorz62zz__objectz00))
					{	/* Expand/eps.scm 193 */
						BGl_userzd2errorzd2notifyz00zztools_errorz00(BgL_ez00_1245,
							CNST_TABLE_REF(((long) 1)));
					}
				else
					{	/* Expand/eps.scm 193 */
						BFALSE;
					}
				{	/* Expand/eps.scm 195 */
					obj_t BgL_list1351z00_1308;

					BgL_list1351z00_1308 = MAKE_YOUNG_PAIR(BFALSE, BNIL);
					BGl_userzd2errorzd2zztools_errorz00(BGl_string2072z00zzexpand_epsz00,
						BGl_string2073z00zzexpand_epsz00, BgL_xz00_1244,
						BgL_list1351z00_1308);
				}
				{	/* Expand/eps.scm 196 */
					obj_t BgL_list1352z00_1309;

					BgL_list1352z00_1309 = MAKE_YOUNG_PAIR(BINT(((long) 1)), BNIL);
					return BGl_exitz00zz__errorz00(BgL_list1352z00_1309);
				}
			}
		}

	}



/* comptime-expand-cond-expand-only */
	BGL_EXPORTED_DEF obj_t
		BGl_comptimezd2expandzd2condzd2expandzd2onlyz00zzexpand_epsz00(obj_t
		BgL_xz00_45)
	{
		{	/* Expand/eps.scm 203 */
			{	/* Expand/eps.scm 218 */
				obj_t BgL_zc3z04anonymousza31365ze3z87_1247;
				obj_t BgL_zc3z04anonymousza31361ze3z87_1248;

				BgL_zc3z04anonymousza31365ze3z87_1247 =
					MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31365ze3ze5zzexpand_epsz00,
					(int) (((long) 0)), (int) (((long) 2)));
				BgL_zc3z04anonymousza31361ze3z87_1248 =
					MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31361ze3ze5zzexpand_epsz00,
					(int) (((long) 1)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_zc3z04anonymousza31365ze3z87_1247,
					(int) (((long) 0)), BgL_xz00_45);
				PROCEDURE_SET(BgL_zc3z04anonymousza31365ze3z87_1247,
					(int) (((long) 1)), BGl_proc2074z00zzexpand_epsz00);
				PROCEDURE_SET(BgL_zc3z04anonymousza31361ze3z87_1248,
					(int) (((long) 0)), BgL_xz00_45);
				return
					BGl_withzd2exceptionzd2handlerz00zz__errorz00
					(BgL_zc3z04anonymousza31361ze3z87_1248,
					BgL_zc3z04anonymousza31365ze3z87_1247);
			}
		}

	}



/* &comptime-expand-cond-expand-only */
	obj_t BGl_z62comptimezd2expandzd2condzd2expandzd2onlyz62zzexpand_epsz00(obj_t
		BgL_envz00_1249, obj_t BgL_xz00_1250)
	{
		{	/* Expand/eps.scm 203 */
			return
				BGl_comptimezd2expandzd2condzd2expandzd2onlyz00zzexpand_epsz00
				(BgL_xz00_1250);
		}

	}



/* &<@anonymous:1365> */
	obj_t BGl_z62zc3z04anonymousza31365ze3ze5zzexpand_epsz00(obj_t
		BgL_envz00_1251)
	{
		{	/* Expand/eps.scm 222 */
			{	/* Expand/eps.scm 223 */
				obj_t BgL_xz00_1252;
				obj_t BgL_condzd2expandzd2onlyzd2expanderzd2_1253;

				BgL_xz00_1252 = PROCEDURE_REF(BgL_envz00_1251, (int) (((long) 0)));
				BgL_condzd2expandzd2onlyzd2expanderzd2_1253 =
					((obj_t) PROCEDURE_REF(BgL_envz00_1251, (int) (((long) 1))));
				return
					BGl_initialzd2expanderzd2zzexpand_epsz00(BgL_xz00_1252,
					BgL_condzd2expandzd2onlyzd2expanderzd2_1253);
			}
		}

	}



/* &<@anonymous:1361> */
	obj_t BGl_z62zc3z04anonymousza31361ze3ze5zzexpand_epsz00(obj_t
		BgL_envz00_1254, obj_t BgL_ez00_1256)
	{
		{	/* Expand/eps.scm 217 */
			{	/* Expand/eps.scm 218 */
				obj_t BgL_xz00_1255;

				BgL_xz00_1255 = PROCEDURE_REF(BgL_envz00_1254, (int) (((long) 0)));
				if (BGl_isazf3zf3zz__objectz00(BgL_ez00_1256,
						BGl_z62errorz62zz__objectz00))
					{	/* Expand/eps.scm 218 */
						BGl_userzd2errorzd2notifyz00zztools_errorz00(BgL_ez00_1256,
							CNST_TABLE_REF(((long) 1)));
					}
				else
					{	/* Expand/eps.scm 218 */
						BFALSE;
					}
				{	/* Expand/eps.scm 220 */
					obj_t BgL_list1363z00_1310;

					BgL_list1363z00_1310 = MAKE_YOUNG_PAIR(BFALSE, BNIL);
					BGl_userzd2errorzd2zztools_errorz00(BGl_string2072z00zzexpand_epsz00,
						BGl_string2073z00zzexpand_epsz00, BgL_xz00_1255,
						BgL_list1363z00_1310);
				}
				{	/* Expand/eps.scm 221 */
					obj_t BgL_list1364z00_1311;

					BgL_list1364z00_1311 = MAKE_YOUNG_PAIR(BINT(((long) 1)), BNIL);
					return BGl_exitz00zz__errorz00(BgL_list1364z00_1311);
				}
			}
		}

	}



/* &cond-expand-only-expander */
	obj_t BGl_z62condzd2expandzd2onlyzd2expanderzb0zzexpand_epsz00(obj_t
		BgL_envz00_1257, obj_t BgL_xz00_1258, obj_t BgL_ez00_1259)
	{
		{	/* Expand/eps.scm 213 */
			{
				obj_t BgL_restz00_1313;

				if (PAIRP(BgL_xz00_1258))
					{	/* Expand/eps.scm 213 */
						if ((CAR(BgL_xz00_1258) == CNST_TABLE_REF(((long) 8))))
							{	/* Expand/eps.scm 213 */
								return
									BGl_initialzd2expanderzd2zzexpand_epsz00(BgL_xz00_1258,
									BgL_ez00_1259);
							}
						else
							{	/* Expand/eps.scm 213 */
								if ((CAR(BgL_xz00_1258) == CNST_TABLE_REF(((long) 9))))
									{	/* Expand/eps.scm 213 */
										BgL_restz00_1313 = CDR(BgL_xz00_1258);
										{	/* Expand/eps.scm 210 */
											obj_t BgL_arg1418z00_1314;

											{
												obj_t BgL_l1107z00_1316;

												BgL_l1107z00_1316 = BgL_restz00_1313;
											BgL_zc3z04anonymousza31419ze3z87_1315:
												if (NULLP(BgL_l1107z00_1316))
													{	/* Expand/eps.scm 210 */
														BgL_arg1418z00_1314 = BgL_restz00_1313;
													}
												else
													{	/* Expand/eps.scm 210 */
														{	/* Expand/eps.scm 210 */
															obj_t BgL_arg1421z00_1317;

															{	/* Expand/eps.scm 210 */
																obj_t BgL_xz00_1318;

																BgL_xz00_1318 =
																	CAR(((obj_t) BgL_l1107z00_1316));
																BgL_arg1421z00_1317 =
																	PROCEDURE_ENTRY(BgL_ez00_1259) (BgL_ez00_1259,
																	BgL_xz00_1318, BgL_ez00_1259, BEOA);
															}
															{	/* Expand/eps.scm 210 */
																obj_t BgL_tmpz00_1770;

																BgL_tmpz00_1770 = ((obj_t) BgL_l1107z00_1316);
																SET_CAR(BgL_tmpz00_1770, BgL_arg1421z00_1317);
															}
														}
														{	/* Expand/eps.scm 210 */
															obj_t BgL_arg1422z00_1319;

															BgL_arg1422z00_1319 =
																CDR(((obj_t) BgL_l1107z00_1316));
															{
																obj_t BgL_l1107z00_1775;

																BgL_l1107z00_1775 = BgL_arg1422z00_1319;
																BgL_l1107z00_1316 = BgL_l1107z00_1775;
																goto BgL_zc3z04anonymousza31419ze3z87_1315;
															}
														}
													}
											}
											{	/* Expand/eps.scm 210 */
												obj_t BgL_tmpz00_1776;

												BgL_tmpz00_1776 = ((obj_t) BgL_xz00_1258);
												SET_CDR(BgL_tmpz00_1776, BgL_arg1418z00_1314);
											}
										}
										return BgL_xz00_1258;
									}
								else
									{	/* Expand/eps.scm 213 */
										return BgL_xz00_1258;
									}
							}
					}
				else
					{	/* Expand/eps.scm 213 */
						return BgL_xz00_1258;
					}
			}
		}

	}



/* compile-expand */
	BGL_EXPORTED_DEF obj_t BGl_compilezd2expandzd2zzexpand_epsz00(obj_t
		BgL_xz00_46)
	{
		{	/* Expand/eps.scm 228 */
			{	/* Expand/eps.scm 229 */
				obj_t BgL_sz00_1321;

				BgL_sz00_1321 = BNIL;
				return BGl_expandze70ze7zzexpand_epsz00(BgL_xz00_46, BgL_sz00_1321);
			}
		}

	}



/* &compile-expand */
	obj_t BGl_z62compilezd2expandzb0zzexpand_epsz00(obj_t BgL_envz00_1260,
		obj_t BgL_xz00_1261)
	{
		{	/* Expand/eps.scm 228 */
			return BGl_compilezd2expandzd2zzexpand_epsz00(BgL_xz00_1261);
		}

	}



/* initial-expander */
	obj_t BGl_initialzd2expanderzd2zzexpand_epsz00(obj_t BgL_xz00_47,
		obj_t BgL_ez00_48)
	{
		{	/* Expand/eps.scm 234 */
			{	/* Expand/eps.scm 236 */
				obj_t BgL_e1z00_404;

				if (SYMBOLP(BgL_xz00_47))
					{	/* Expand/eps.scm 237 */
						BgL_e1z00_404 = BGl_identifierzd2expanderzd2envz00zzexpand_epsz00;
					}
				else
					{	/* Expand/eps.scm 237 */
						if (NULLP(BgL_xz00_47))
							{	/* Expand/eps.scm 239 */
								BgL_e1z00_404 =
									BGl_errorz00zz__errorz00(BFALSE,
									BGl_string2075z00zzexpand_epsz00, BNIL);
							}
						else
							{	/* Expand/eps.scm 239 */
								if (PAIRP(BgL_xz00_47))
									{	/* Expand/eps.scm 243 */
										bool_t BgL_test2159z00_1789;

										{	/* Expand/eps.scm 243 */
											obj_t BgL_tmpz00_1790;

											BgL_tmpz00_1790 = CAR(BgL_xz00_47);
											BgL_test2159z00_1789 = SYMBOLP(BgL_tmpz00_1790);
										}
										if (BgL_test2159z00_1789)
											{	/* Expand/eps.scm 244 */
												obj_t BgL_idz00_419;

												BgL_idz00_419 =
													BGl_fastzd2idzd2ofzd2idzd2zzast_identz00(CAR
													(BgL_xz00_47),
													BGl_findzd2locationzd2zztools_locationz00
													(BgL_xz00_47));
												{	/* Expand/eps.scm 246 */
													bool_t BgL_test2160z00_1796;

													{	/* Expand/eps.scm 246 */
														obj_t BgL_tmpz00_1797;

														BgL_tmpz00_1797 =
															BGl_assqz00zz__r4_pairs_and_lists_6_3z00
															(BgL_idz00_419,
															BGl_za2lexicalzd2stackza2zd2zzexpand_epsz00);
														BgL_test2160z00_1796 = PAIRP(BgL_tmpz00_1797);
													}
													if (BgL_test2160z00_1796)
														{	/* Expand/eps.scm 246 */
															BgL_e1z00_404 =
																BGl_applicationzd2expanderzd2envz00zzexpand_epsz00;
														}
													else
														{	/* Expand/eps.scm 248 */
															obj_t BgL_g1077z00_423;

															BgL_g1077z00_423 =
																BGl_getzd2compilerzd2expanderz00zz__macroz00
																(BgL_idz00_419);
															if (CBOOL(BgL_g1077z00_423))
																{	/* Expand/eps.scm 248 */
																	BgL_e1z00_404 = BgL_g1077z00_423;
																}
															else
																{	/* Expand/eps.scm 248 */
																	BgL_e1z00_404 =
																		BGl_applicationzd2expanderzd2envz00zzexpand_epsz00;
																}
														}
												}
											}
										else
											{	/* Expand/eps.scm 243 */
												BgL_e1z00_404 =
													BGl_applicationzd2expanderzd2envz00zzexpand_epsz00;
											}
									}
								else
									{	/* Expand/eps.scm 241 */
										BgL_e1z00_404 = BGl_proc2076z00zzexpand_epsz00;
									}
							}
					}
				{	/* Expand/eps.scm 255 */
					obj_t BgL_newz00_405;

					BgL_newz00_405 =
						PROCEDURE_ENTRY(BgL_e1z00_404) (BgL_e1z00_404, BgL_xz00_47,
						BgL_ez00_48, BEOA);
					{	/* Expand/eps.scm 256 */
						bool_t BgL_test2162z00_1808;

						if (PAIRP(BgL_newz00_405))
							{	/* Expand/eps.scm 256 */
								bool_t BgL_test2164z00_1811;

								{	/* Expand/eps.scm 256 */
									bool_t BgL_res2008z00_965;

									BgL_res2008z00_965 = EPAIRP(BgL_newz00_405);
									BgL_test2164z00_1811 = BgL_res2008z00_965;
								}
								if (BgL_test2164z00_1811)
									{	/* Expand/eps.scm 256 */
										BgL_test2162z00_1808 = ((bool_t) 0);
									}
								else
									{	/* Expand/eps.scm 256 */
										bool_t BgL_res2009z00_966;

										BgL_res2009z00_966 = EPAIRP(BgL_xz00_47);
										BgL_test2162z00_1808 = BgL_res2009z00_966;
									}
							}
						else
							{	/* Expand/eps.scm 256 */
								BgL_test2162z00_1808 = ((bool_t) 0);
							}
						if (BgL_test2162z00_1808)
							{	/* Expand/eps.scm 257 */
								obj_t BgL_arg1441z00_409;
								obj_t BgL_arg1442z00_410;
								obj_t BgL_arg1448z00_411;

								BgL_arg1441z00_409 = CAR(BgL_newz00_405);
								BgL_arg1442z00_410 = CDR(BgL_newz00_405);
								BgL_arg1448z00_411 = CER(((obj_t) BgL_xz00_47));
								{	/* Expand/eps.scm 257 */
									obj_t BgL_res2010z00_970;

									BgL_res2010z00_970 =
										MAKE_YOUNG_EPAIR(BgL_arg1441z00_409, BgL_arg1442z00_410,
										BgL_arg1448z00_411);
									return BgL_res2010z00_970;
								}
							}
						else
							{	/* Expand/eps.scm 256 */
								return BgL_newz00_405;
							}
					}
				}
			}
		}

	}



/* &initial-expander */
	obj_t BGl_z62initialzd2expanderzb0zzexpand_epsz00(obj_t BgL_envz00_1206,
		obj_t BgL_xz00_1207, obj_t BgL_ez00_1208)
	{
		{	/* Expand/eps.scm 234 */
			return
				BGl_initialzd2expanderzd2zzexpand_epsz00(BgL_xz00_1207, BgL_ez00_1208);
		}

	}



/* &<@anonymous:1494> */
	obj_t BGl_z62zc3z04anonymousza31494ze3ze5zzexpand_epsz00(obj_t
		BgL_envz00_1263, obj_t BgL_xz00_1264, obj_t BgL_ez00_1265)
	{
		{	/* Expand/eps.scm 242 */
			return BgL_xz00_1264;
		}

	}



/* compile-expander */
	obj_t BGl_compilezd2expanderzd2zzexpand_epsz00(obj_t BgL_xz00_49,
		obj_t BgL_ez00_50, obj_t BgL_sz00_51)
	{
		{	/* Expand/eps.scm 266 */
			return BGl_expandze70ze7zzexpand_epsz00(BgL_xz00_49, BgL_sz00_51);
		}

	}



/* proto->frame~0 */
	obj_t BGl_protozd2ze3frameze70zd6zzexpand_epsz00(obj_t BgL_pz00_441)
	{
		{	/* Expand/eps.scm 273 */
			{	/* Expand/eps.scm 273 */
				obj_t BgL_l01111z00_443;

				BgL_l01111z00_443 =
					BGl_argsza2zd2ze3argszd2listz41zztools_argsz00(BgL_pz00_441);
				{
					obj_t BgL_l1110z00_445;

					BgL_l1110z00_445 = BgL_l01111z00_443;
				BgL_zc3z04anonymousza31497ze3z87_446:
					if (NULLP(BgL_l1110z00_445))
						{	/* Expand/eps.scm 273 */
							return BgL_l01111z00_443;
						}
					else
						{	/* Expand/eps.scm 273 */
							{	/* Expand/eps.scm 273 */
								obj_t BgL_arg1518z00_448;

								{	/* Expand/eps.scm 273 */
									obj_t BgL_arg1521z00_449;

									BgL_arg1521z00_449 = CAR(((obj_t) BgL_l1110z00_445));
									BgL_arg1518z00_448 =
										BGl_fastzd2idzd2ofzd2idzd2zzast_identz00(BgL_arg1521z00_449,
										BFALSE);
								}
								{	/* Expand/eps.scm 273 */
									obj_t BgL_tmpz00_1827;

									BgL_tmpz00_1827 = ((obj_t) BgL_l1110z00_445);
									SET_CAR(BgL_tmpz00_1827, BgL_arg1518z00_448);
								}
							}
							{	/* Expand/eps.scm 273 */
								obj_t BgL_arg1528z00_450;

								BgL_arg1528z00_450 = CDR(((obj_t) BgL_l1110z00_445));
								{
									obj_t BgL_l1110z00_1832;

									BgL_l1110z00_1832 = BgL_arg1528z00_450;
									BgL_l1110z00_445 = BgL_l1110z00_1832;
									goto BgL_zc3z04anonymousza31497ze3z87_446;
								}
							}
						}
				}
			}
		}

	}



/* expand~0 */
	obj_t BGl_expandze70ze7zzexpand_epsz00(obj_t BgL_xz00_473, obj_t BgL_sz00_474)
	{
		{	/* Expand/eps.scm 386 */
			{
				obj_t BgL_xz00_464;
				obj_t BgL_sz00_465;

				{
					obj_t BgL_pz00_478;
					obj_t BgL_bodyz00_479;
					obj_t BgL_loopz00_481;
					obj_t BgL_bindingsz00_482;
					obj_t BgL_bodyz00_483;
					obj_t BgL_bindingsz00_485;
					obj_t BgL_bodyz00_486;
					obj_t BgL_bindingsz00_488;
					obj_t BgL_bodyz00_489;
					obj_t BgL_bodyz00_492;
					obj_t BgL_varz00_495;
					obj_t BgL_clausesz00_496;
					obj_t BgL_funz00_499;
					obj_t BgL_argz00_500;

					if (NULLP(BgL_xz00_473))
						{	/* Expand/eps.scm 386 */
							return BgL_xz00_473;
						}
					else
						{	/* Expand/eps.scm 386 */
							if (PAIRP(BgL_xz00_473))
								{	/* Expand/eps.scm 386 */
									if ((CAR(BgL_xz00_473) == CNST_TABLE_REF(((long) 11))))
										{	/* Expand/eps.scm 386 */
											return BgL_xz00_473;
										}
									else
										{	/* Expand/eps.scm 386 */
											if ((CAR(BgL_xz00_473) == CNST_TABLE_REF(((long) 12))))
												{	/* Expand/eps.scm 386 */
													return BgL_xz00_473;
												}
											else
												{	/* Expand/eps.scm 386 */
													if ((CAR(BgL_xz00_473) == CNST_TABLE_REF(((long) 9))))
														{	/* Expand/eps.scm 386 */
														BgL_tagzd2416zd2_477:
															{	/* Expand/eps.scm 288 */
																obj_t BgL_arg1852z00_677;

																{	/* Expand/eps.scm 288 */
																	obj_t BgL_arg1853z00_678;

																	BgL_arg1853z00_678 =
																		CDR(((obj_t) BgL_xz00_473));
																	BgL_arg1852z00_677 =
																		BGl_expandza2ze70z45zzexpand_epsz00
																		(BgL_arg1853z00_678, BgL_sz00_474);
																}
																{	/* Expand/eps.scm 288 */
																	obj_t BgL_tmpz00_1852;

																	BgL_tmpz00_1852 = ((obj_t) BgL_xz00_473);
																	SET_CDR(BgL_tmpz00_1852, BgL_arg1852z00_677);
															}}
															return BgL_xz00_473;
														}
													else
														{	/* Expand/eps.scm 386 */
															if (
																(CAR(BgL_xz00_473) ==
																	CNST_TABLE_REF(((long) 13))))
																{	/* Expand/eps.scm 386 */
																	goto BgL_tagzd2416zd2_477;
																}
															else
																{	/* Expand/eps.scm 386 */
																	if (
																		(CAR(BgL_xz00_473) ==
																			CNST_TABLE_REF(((long) 14))))
																		{	/* Expand/eps.scm 386 */
																			goto BgL_tagzd2416zd2_477;
																		}
																	else
																		{	/* Expand/eps.scm 386 */
																			obj_t BgL_carzd2474zd2_518;
																			obj_t BgL_cdrzd2475zd2_519;

																			BgL_carzd2474zd2_518 = CAR(BgL_xz00_473);
																			BgL_cdrzd2475zd2_519 = CDR(BgL_xz00_473);
																			{

																				if (
																					(BgL_carzd2474zd2_518 ==
																						CNST_TABLE_REF(((long) 18))))
																					{	/* Expand/eps.scm 386 */
																					BgL_kapzd2476zd2_520:
																						if (PAIRP(BgL_cdrzd2475zd2_519))
																							{	/* Expand/eps.scm 386 */
																								BgL_pz00_478 =
																									CAR(BgL_cdrzd2475zd2_519);
																								BgL_bodyz00_479 =
																									CDR(BgL_cdrzd2475zd2_519);
																								{	/* Expand/eps.scm 291 */
																									obj_t BgL_framez00_679;

																									BgL_framez00_679 =
																										BGl_protozd2ze3frameze70zd6zzexpand_epsz00
																										(BgL_pz00_478);
																									{	/* Expand/eps.scm 292 */
																										obj_t BgL_arg1855z00_680;
																										obj_t BgL_arg1856z00_681;

																										BgL_arg1855z00_680 =
																											CDR(
																											((obj_t) BgL_xz00_473));
																										BgL_arg1856z00_681 =
																											BGl_expandza2ze70z45zzexpand_epsz00
																											(BgL_bodyz00_479,
																											BGl_appendzd221011zd2zzexpand_epsz00
																											(BgL_framez00_679,
																												BgL_sz00_474));
																										{	/* Expand/eps.scm 292 */
																											obj_t BgL_tmpz00_1875;

																											BgL_tmpz00_1875 =
																												((obj_t)
																												BgL_arg1855z00_680);
																											SET_CDR(BgL_tmpz00_1875,
																												BgL_arg1856z00_681);
																										}
																									}
																									return BgL_xz00_473;
																								}
																							}
																						else
																							{	/* Expand/eps.scm 386 */
																								if (
																									(CAR(
																											((obj_t) BgL_xz00_473)) ==
																										CNST_TABLE_REF(((long)
																												10))))
																									{	/* Expand/eps.scm 386 */
																										BgL_xz00_464 = BgL_xz00_473;
																										BgL_sz00_465 = BgL_sz00_474;
																									BgL_zc3z04anonymousza31538ze3z87_466:
																										{	/* Expand/eps.scm 279 */
																											obj_t BgL_framez00_467;

																											{	/* Expand/eps.scm 279 */
																												obj_t
																													BgL_arg1561z00_472;
																												{	/* Expand/eps.scm 279 */
																													obj_t BgL_pairz00_982;

																													BgL_pairz00_982 =
																														CDR(
																														((obj_t)
																															BgL_xz00_464));
																													BgL_arg1561z00_472 =
																														CAR
																														(BgL_pairz00_982);
																												}
																												BgL_framez00_467 =
																													BGl_protozd2ze3frameze70zd6zzexpand_epsz00
																													(BgL_arg1561z00_472);
																											}
																											{	/* Expand/eps.scm 280 */
																												obj_t
																													BgL_arg1540z00_468;
																												obj_t
																													BgL_arg1552z00_469;
																												BgL_arg1540z00_468 =
																													CDR(((obj_t)
																														BgL_xz00_464));
																												{	/* Expand/eps.scm 280 */
																													obj_t
																														BgL_arg1553z00_470;
																													obj_t
																														BgL_arg1558z00_471;
																													{	/* Expand/eps.scm 280 */
																														obj_t
																															BgL_pairz00_987;
																														BgL_pairz00_987 =
																															CDR(((obj_t)
																																BgL_xz00_464));
																														BgL_arg1553z00_470 =
																															CDR
																															(BgL_pairz00_987);
																													}
																													BgL_arg1558z00_471 =
																														BGl_appendzd221011zd2zzexpand_epsz00
																														(BgL_framez00_467,
																														BgL_sz00_465);
																													BgL_arg1552z00_469 =
																														BGl_expandza2ze70z45zzexpand_epsz00
																														(BgL_arg1553z00_470,
																														BgL_arg1558z00_471);
																												}
																												{	/* Expand/eps.scm 280 */
																													obj_t BgL_tmpz00_1896;

																													BgL_tmpz00_1896 =
																														((obj_t)
																														BgL_arg1540z00_468);
																													SET_CDR
																														(BgL_tmpz00_1896,
																														BgL_arg1552z00_469);
																											}}
																											return BgL_xz00_464;
																										}
																									}
																								else
																									{	/* Expand/eps.scm 386 */
																										if (
																											(CAR(
																													((obj_t)
																														BgL_xz00_473)) ==
																												CNST_TABLE_REF(((long)
																														15))))
																											{	/* Expand/eps.scm 386 */
																											BgL_tagzd2423zd2_494:
																												{	/* Expand/eps.scm 349 */
																													obj_t
																														BgL_arg1925z00_788;
																													{	/* Expand/eps.scm 349 */
																														obj_t
																															BgL_arg1926z00_789;
																														BgL_arg1926z00_789 =
																															CDR(((obj_t)
																																BgL_xz00_473));
																														BgL_arg1925z00_788 =
																															BGl_expandza2ze70z45zzexpand_epsz00
																															(BgL_arg1926z00_789,
																															BgL_sz00_474);
																													}
																													{	/* Expand/eps.scm 349 */
																														obj_t
																															BgL_tmpz00_1907;
																														BgL_tmpz00_1907 =
																															((obj_t)
																															BgL_xz00_473);
																														SET_CDR
																															(BgL_tmpz00_1907,
																															BgL_arg1925z00_788);
																												}}
																												return BgL_xz00_473;
																											}
																										else
																											{	/* Expand/eps.scm 386 */
																												if (
																													(CAR(
																															((obj_t)
																																BgL_xz00_473))
																														==
																														CNST_TABLE_REF((
																																(long) 16))))
																													{	/* Expand/eps.scm 386 */
																													BgL_tagzd2425zd2_498:
																														{	/* Expand/eps.scm 359 */
																															obj_t
																																BgL_arg1935z00_802;
																															{	/* Expand/eps.scm 359 */
																																obj_t
																																	BgL_arg1936z00_803;
																																BgL_arg1936z00_803
																																	=
																																	CDR(((obj_t)
																																		BgL_xz00_473));
																																BgL_arg1935z00_802
																																	=
																																	BGl_expandza2ze70z45zzexpand_epsz00
																																	(BgL_arg1936z00_803,
																																	BgL_sz00_474);
																															}
																															{	/* Expand/eps.scm 359 */
																																obj_t
																																	BgL_tmpz00_1918;
																																BgL_tmpz00_1918
																																	=
																																	((obj_t)
																																	BgL_xz00_473);
																																SET_CDR
																																	(BgL_tmpz00_1918,
																																	BgL_arg1935z00_802);
																														}}
																														return BgL_xz00_473;
																													}
																												else
																													{	/* Expand/eps.scm 386 */
																														if (
																															(CAR(
																																	((obj_t)
																																		BgL_xz00_473))
																																==
																																CNST_TABLE_REF((
																																		(long)
																																		17))))
																															{	/* Expand/eps.scm 386 */
																																goto
																																	BgL_tagzd2425zd2_498;
																															}
																														else
																															{	/* Expand/eps.scm 386 */
																																if (BGl_equalzf3zf3zz__r4_equivalence_6_2z00(CAR(((obj_t) BgL_xz00_473)), BUNSPEC))
																																	{	/* Expand/eps.scm 386 */
																																		if (NULLP
																																			(CDR(((obj_t) BgL_xz00_473))))
																																			{	/* Expand/eps.scm 386 */
																																				return
																																					BgL_xz00_473;
																																			}
																																		else
																																			{	/* Expand/eps.scm 386 */
																																				if (BGl_privatezd2sexpzf3z21zzast_privatez00(BgL_xz00_473))
																																					{	/* Expand/eps.scm 386 */
																																						return
																																							BGl_expandza2ze70z45zzexpand_epsz00
																																							(BgL_xz00_473,
																																							BgL_sz00_474);
																																					}
																																				else
																																					{	/* Expand/eps.scm 386 */
																																					BgL_tagzd2429zd2_504:
																																						{	/* Expand/eps.scm 370 */
																																							bool_t
																																								BgL_test2182z00_1937;
																																							{	/* Expand/eps.scm 370 */
																																								bool_t
																																									BgL_test2183z00_1938;
																																								{	/* Expand/eps.scm 370 */
																																									obj_t
																																										BgL_tmpz00_1939;
																																									BgL_tmpz00_1939
																																										=
																																										CAR
																																										(
																																										((obj_t) BgL_xz00_473));
																																									BgL_test2183z00_1938
																																										=
																																										SYMBOLP
																																										(BgL_tmpz00_1939);
																																								}
																																								if (BgL_test2183z00_1938)
																																									{	/* Expand/eps.scm 370 */
																																										obj_t
																																											BgL_arg1955z00_833;
																																										{	/* Expand/eps.scm 370 */
																																											obj_t
																																												BgL_arg1956z00_834;
																																											BgL_arg1956z00_834
																																												=
																																												CAR
																																												(
																																												((obj_t) BgL_xz00_473));
																																											BgL_arg1955z00_833
																																												=
																																												BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																																												(BgL_arg1956z00_834,
																																												BFALSE);
																																										}
																																										BgL_test2182z00_1937
																																											=
																																											(BgL_arg1955z00_833
																																											==
																																											CNST_TABLE_REF
																																											(((long) 10)));
																																									}
																																								else
																																									{	/* Expand/eps.scm 370 */
																																										BgL_test2182z00_1937
																																											=
																																											(
																																											(bool_t)
																																											0);
																																									}
																																							}
																																							if (BgL_test2182z00_1937)
																																								{
																																									obj_t
																																										BgL_sz00_1949;
																																									obj_t
																																										BgL_xz00_1948;
																																									BgL_xz00_1948
																																										=
																																										BgL_xz00_473;
																																									BgL_sz00_1949
																																										=
																																										BgL_sz00_474;
																																									BgL_sz00_465
																																										=
																																										BgL_sz00_1949;
																																									BgL_xz00_464
																																										=
																																										BgL_xz00_1948;
																																									goto
																																										BgL_zc3z04anonymousza31538ze3z87_466;
																																								}
																																							else
																																								{	/* Expand/eps.scm 372 */
																																									obj_t
																																										BgL_nxz00_814;
																																									BgL_nxz00_814
																																										=
																																										BGl_expandza2ze70z45zzexpand_epsz00
																																										(BgL_xz00_473,
																																										BgL_sz00_474);
																																									{	/* Expand/eps.scm 373 */
																																										bool_t
																																											BgL_test2184z00_1951;
																																										{	/* Expand/eps.scm 373 */
																																											obj_t
																																												BgL_tmpz00_1952;
																																											BgL_tmpz00_1952
																																												=
																																												CAR
																																												(
																																												((obj_t) BgL_nxz00_814));
																																											BgL_test2184z00_1951
																																												=
																																												SYMBOLP
																																												(BgL_tmpz00_1952);
																																										}
																																										if (BgL_test2184z00_1951)
																																											{	/* Expand/eps.scm 374 */
																																												obj_t
																																													BgL_idz00_817;
																																												{	/* Expand/eps.scm 374 */
																																													obj_t
																																														BgL_arg1953z00_830;
																																													BgL_arg1953z00_830
																																														=
																																														CAR
																																														(
																																														((obj_t) BgL_nxz00_814));
																																													BgL_idz00_817
																																														=
																																														BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																																														(BgL_arg1953z00_830,
																																														BFALSE);
																																												}
																																												{	/* Expand/eps.scm 374 */

																																													{	/* Expand/eps.scm 375 */
																																														bool_t
																																															BgL_test2185z00_1959;
																																														{	/* Expand/eps.scm 375 */
																																															obj_t
																																																BgL_tmpz00_1960;
																																															BgL_tmpz00_1960
																																																=
																																																BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																																																(BgL_idz00_817,
																																																BgL_sz00_474);
																																															BgL_test2185z00_1959
																																																=
																																																PAIRP
																																																(BgL_tmpz00_1960);
																																														}
																																														if (BgL_test2185z00_1959)
																																															{	/* Expand/eps.scm 375 */
																																																return
																																																	BgL_nxz00_814;
																																															}
																																														else
																																															{	/* Expand/eps.scm 377 */
																																																obj_t
																																																	BgL_bz00_820;
																																																{	/* Expand/eps.scm 377 */
																																																	obj_t
																																																		BgL__ortest_1085z00_828;
																																																	BgL__ortest_1085z00_828
																																																		=
																																																		BGl_findzd2Ozd2expanderz00zzexpand_expanderz00
																																																		(BgL_idz00_817);
																																																	if (CBOOL(BgL__ortest_1085z00_828))
																																																		{	/* Expand/eps.scm 377 */
																																																			BgL_bz00_820
																																																				=
																																																				BgL__ortest_1085z00_828;
																																																		}
																																																	else
																																																		{	/* Expand/eps.scm 377 */
																																																			BgL_bz00_820
																																																				=
																																																				BGl_findzd2Gzd2expanderz00zzexpand_expanderz00
																																																				(BgL_idz00_817);
																																																		}
																																																}
																																																if (CBOOL(BgL_bz00_820))
																																																	{	/* Expand/eps.scm 380 */
																																																		obj_t
																																																			BgL_ez00_821;
																																																		BgL_ez00_821
																																																			=
																																																			STRUCT_REF
																																																			(
																																																			((obj_t) BgL_bz00_820), (int) (((long) 1)));
																																																		{	/* Expand/eps.scm 382 */
																																																			obj_t
																																																				BgL_e2z00_1272;
																																																			BgL_e2z00_1272
																																																				=
																																																				MAKE_FX_PROCEDURE
																																																				(BGl_z62e2z62zzexpand_epsz00,
																																																				(int)
																																																				(((long) 2)), (int) (((long) 1)));
																																																			PROCEDURE_SET
																																																				(BgL_e2z00_1272,
																																																				(int)
																																																				(((long) 0)), BgL_sz00_474);
																																																			{	/* Expand/eps.scm 381 */

																																																				return
																																																					PROCEDURE_ENTRY
																																																					(BgL_ez00_821)
																																																					(BgL_ez00_821,
																																																					BgL_xz00_473,
																																																					BgL_e2z00_1272,
																																																					BEOA);
																																																			}
																																																		}
																																																	}
																																																else
																																																	{	/* Expand/eps.scm 379 */
																																																		return
																																																			BgL_nxz00_814;
																																																	}
																																															}
																																													}
																																												}
																																											}
																																										else
																																											{	/* Expand/eps.scm 373 */
																																												return
																																													BgL_nxz00_814;
																																											}
																																									}
																																								}
																																						}
																																					}
																																			}
																																	}
																																else
																																	{	/* Expand/eps.scm 386 */
																																		if (BGl_privatezd2sexpzf3z21zzast_privatez00(BgL_xz00_473))
																																			{	/* Expand/eps.scm 386 */
																																				return
																																					BGl_expandza2ze70z45zzexpand_epsz00
																																					(BgL_xz00_473,
																																					BgL_sz00_474);
																																			}
																																		else
																																			{	/* Expand/eps.scm 386 */
																																				goto
																																					BgL_tagzd2429zd2_504;
																																			}
																																	}
																															}
																													}
																											}
																									}
																							}
																					}
																				else
																					{	/* Expand/eps.scm 386 */
																						if (
																							(BgL_carzd2474zd2_518 ==
																								CNST_TABLE_REF(((long) 19))))
																							{	/* Expand/eps.scm 386 */
																								goto BgL_kapzd2476zd2_520;
																							}
																						else
																							{	/* Expand/eps.scm 386 */
																								if (
																									(BgL_carzd2474zd2_518 ==
																										CNST_TABLE_REF(((long)
																												20))))
																									{	/* Expand/eps.scm 386 */
																										goto BgL_kapzd2476zd2_520;
																									}
																								else
																									{	/* Expand/eps.scm 386 */
																										if (
																											(BgL_carzd2474zd2_518 ==
																												CNST_TABLE_REF(((long)
																														21))))
																											{	/* Expand/eps.scm 386 */
																												goto
																													BgL_kapzd2476zd2_520;
																											}
																										else
																											{	/* Expand/eps.scm 386 */
																												if (
																													(CAR(BgL_xz00_473) ==
																														CNST_TABLE_REF((
																																(long) 22))))
																													{	/* Expand/eps.scm 386 */
																														if (PAIRP
																															(BgL_cdrzd2475zd2_519))
																															{	/* Expand/eps.scm 386 */
																																obj_t
																																	BgL_carzd2564zd2_529;
																																obj_t
																																	BgL_cdrzd2565zd2_530;
																																BgL_carzd2564zd2_529
																																	=
																																	CAR
																																	(BgL_cdrzd2475zd2_519);
																																BgL_cdrzd2565zd2_530
																																	=
																																	CDR
																																	(BgL_cdrzd2475zd2_519);
																																if (SYMBOLP
																																	(BgL_carzd2564zd2_529))
																																	{	/* Expand/eps.scm 386 */
																																		if (PAIRP
																																			(BgL_cdrzd2565zd2_530))
																																			{	/* Expand/eps.scm 386 */
																																				BgL_loopz00_481
																																					=
																																					BgL_carzd2564zd2_529;
																																				BgL_bindingsz00_482
																																					=
																																					CAR
																																					(BgL_cdrzd2565zd2_530);
																																				BgL_bodyz00_483
																																					=
																																					CDR
																																					(BgL_cdrzd2565zd2_530);
																																				{	/* Expand/eps.scm 295 */
																																					obj_t
																																						BgL_idz00_683;
																																					BgL_idz00_683
																																						=
																																						BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																																						(BgL_loopz00_481,
																																						BFALSE);
																																					{	/* Expand/eps.scm 295 */
																																						obj_t
																																							BgL_framez00_684;
																																						{	/* Expand/eps.scm 296 */
																																							obj_t
																																								BgL_arg1868z00_698;
																																							if (NULLP(BgL_bindingsz00_482))
																																								{	/* Expand/eps.scm 296 */
																																									BgL_arg1868z00_698
																																										=
																																										BNIL;
																																								}
																																							else
																																								{	/* Expand/eps.scm 296 */
																																									obj_t
																																										BgL_head1117z00_701;
																																									{	/* Expand/eps.scm 296 */
																																										obj_t
																																											BgL_res2014z00_994;
																																										BgL_res2014z00_994
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BNIL,
																																											BNIL);
																																										BgL_head1117z00_701
																																											=
																																											BgL_res2014z00_994;
																																									}
																																									{
																																										obj_t
																																											BgL_l1115z00_703;
																																										obj_t
																																											BgL_tail1118z00_704;
																																										BgL_l1115z00_703
																																											=
																																											BgL_bindingsz00_482;
																																										BgL_tail1118z00_704
																																											=
																																											BgL_head1117z00_701;
																																									BgL_zc3z04anonymousza31870ze3z87_705:
																																										if (NULLP(BgL_l1115z00_703))
																																											{	/* Expand/eps.scm 296 */
																																												BgL_arg1868z00_698
																																													=
																																													CDR
																																													(BgL_head1117z00_701);
																																											}
																																										else
																																											{	/* Expand/eps.scm 296 */
																																												obj_t
																																													BgL_newtail1119z00_707;
																																												{	/* Expand/eps.scm 296 */
																																													obj_t
																																														BgL_arg1873z00_709;
																																													{	/* Expand/eps.scm 296 */
																																														obj_t
																																															BgL_bz00_710;
																																														BgL_bz00_710
																																															=
																																															CAR
																																															(
																																															((obj_t) BgL_l1115z00_703));
																																														{	/* Expand/eps.scm 298 */
																																															bool_t
																																																BgL_test2198z00_2015;
																																															if (PAIRP(BgL_bz00_710))
																																																{	/* Expand/eps.scm 298 */
																																																	obj_t
																																																		BgL_tmpz00_2018;
																																																	BgL_tmpz00_2018
																																																		=
																																																		CAR
																																																		(BgL_bz00_710);
																																																	BgL_test2198z00_2015
																																																		=
																																																		SYMBOLP
																																																		(BgL_tmpz00_2018);
																																																}
																																															else
																																																{	/* Expand/eps.scm 298 */
																																																	BgL_test2198z00_2015
																																																		=
																																																		(
																																																		(bool_t)
																																																		0);
																																																}
																																															if (BgL_test2198z00_2015)
																																																{	/* Expand/eps.scm 298 */
																																																	BgL_arg1873z00_709
																																																		=
																																																		BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																																																		(CAR
																																																		(BgL_bz00_710),
																																																		BFALSE);
																																																}
																																															else
																																																{	/* Expand/eps.scm 298 */
																																																	if (SYMBOLP(BgL_bz00_710))
																																																		{	/* Expand/eps.scm 300 */
																																																			BgL_arg1873z00_709
																																																				=
																																																				BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																																																				(BgL_bz00_710,
																																																				BFALSE);
																																																		}
																																																	else
																																																		{	/* Expand/eps.scm 300 */
																																																			BgL_arg1873z00_709
																																																				=
																																																				BGl_errorz00zz__errorz00
																																																				(BGl_string2078z00zzexpand_epsz00,
																																																				BGl_string2075z00zzexpand_epsz00,
																																																				BgL_xz00_473);
																																																		}
																																																}
																																														}
																																													}
																																													{	/* Expand/eps.scm 296 */
																																														obj_t
																																															BgL_res2019z00_1003;
																																														BgL_res2019z00_1003
																																															=
																																															MAKE_YOUNG_PAIR
																																															(BgL_arg1873z00_709,
																																															BNIL);
																																														BgL_newtail1119z00_707
																																															=
																																															BgL_res2019z00_1003;
																																													}
																																												}
																																												SET_CDR
																																													(BgL_tail1118z00_704,
																																													BgL_newtail1119z00_707);
																																												{	/* Expand/eps.scm 296 */
																																													obj_t
																																														BgL_arg1872z00_708;
																																													BgL_arg1872z00_708
																																														=
																																														CDR
																																														(
																																														((obj_t) BgL_l1115z00_703));
																																													{
																																														obj_t
																																															BgL_tail1118z00_2032;
																																														obj_t
																																															BgL_l1115z00_2031;
																																														BgL_l1115z00_2031
																																															=
																																															BgL_arg1872z00_708;
																																														BgL_tail1118z00_2032
																																															=
																																															BgL_newtail1119z00_707;
																																														BgL_tail1118z00_704
																																															=
																																															BgL_tail1118z00_2032;
																																														BgL_l1115z00_703
																																															=
																																															BgL_l1115z00_2031;
																																														goto
																																															BgL_zc3z04anonymousza31870ze3z87_705;
																																													}
																																												}
																																											}
																																									}
																																								}
																																							BgL_framez00_684
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BgL_idz00_683,
																																								BgL_arg1868z00_698);
																																						}
																																						{	/* Expand/eps.scm 296 */
																																							obj_t
																																								BgL_nsz00_685;
																																							BgL_nsz00_685
																																								=
																																								BGl_appendzd221011zd2zzexpand_epsz00
																																								(BgL_framez00_684,
																																								BgL_sz00_474);
																																							{	/* Expand/eps.scm 305 */

																																								{
																																									obj_t
																																										BgL_l1120z00_687;
																																									BgL_l1120z00_687
																																										=
																																										BgL_bindingsz00_482;
																																								BgL_zc3z04anonymousza31858ze3z87_688:
																																									if (PAIRP(BgL_l1120z00_687))
																																										{	/* Expand/eps.scm 306 */
																																											{	/* Expand/eps.scm 307 */
																																												obj_t
																																													BgL_bz00_690;
																																												BgL_bz00_690
																																													=
																																													CAR
																																													(BgL_l1120z00_687);
																																												if (PAIRP(BgL_bz00_690))
																																													{	/* Expand/eps.scm 308 */
																																														obj_t
																																															BgL_tmpz00_2040;
																																														BgL_tmpz00_2040
																																															=
																																															BGl_expandza2ze70z45zzexpand_epsz00
																																															(CDR
																																															(BgL_bz00_690),
																																															BgL_nsz00_685);
																																														SET_CDR
																																															(BgL_bz00_690,
																																															BgL_tmpz00_2040);
																																													}
																																												else
																																													{	/* Expand/eps.scm 307 */
																																														BFALSE;
																																													}
																																											}
																																											{
																																												obj_t
																																													BgL_l1120z00_2044;
																																												BgL_l1120z00_2044
																																													=
																																													CDR
																																													(BgL_l1120z00_687);
																																												BgL_l1120z00_687
																																													=
																																													BgL_l1120z00_2044;
																																												goto
																																													BgL_zc3z04anonymousza31858ze3z87_688;
																																											}
																																										}
																																									else
																																										{	/* Expand/eps.scm 306 */
																																											((bool_t) 1);
																																										}
																																								}
																																								{	/* Expand/eps.scm 310 */
																																									obj_t
																																										BgL_arg1865z00_696;
																																									obj_t
																																										BgL_arg1866z00_697;
																																									{	/* Expand/eps.scm 310 */
																																										obj_t
																																											BgL_pairz00_1015;
																																										BgL_pairz00_1015
																																											=
																																											CDR
																																											(
																																											((obj_t) BgL_xz00_473));
																																										BgL_arg1865z00_696
																																											=
																																											CDR
																																											(BgL_pairz00_1015);
																																									}
																																									BgL_arg1866z00_697
																																										=
																																										BGl_expandza2ze70z45zzexpand_epsz00
																																										(BgL_bodyz00_483,
																																										BgL_nsz00_685);
																																									{	/* Expand/eps.scm 310 */
																																										obj_t
																																											BgL_tmpz00_2050;
																																										BgL_tmpz00_2050
																																											=
																																											(
																																											(obj_t)
																																											BgL_arg1865z00_696);
																																										SET_CDR
																																											(BgL_tmpz00_2050,
																																											BgL_arg1866z00_697);
																																									}
																																								}
																																								return
																																									BgL_xz00_473;
																																							}
																																						}
																																					}
																																				}
																																			}
																																		else
																																			{	/* Expand/eps.scm 386 */
																																				obj_t
																																					BgL_cdrzd2584zd2_535;
																																				BgL_cdrzd2584zd2_535
																																					=
																																					CDR
																																					(BgL_xz00_473);
																																				{	/* Expand/eps.scm 386 */
																																					obj_t
																																						BgL_arg1604z00_536;
																																					obj_t
																																						BgL_arg1605z00_537;
																																					BgL_arg1604z00_536
																																						=
																																						CAR(
																																						((obj_t) BgL_cdrzd2584zd2_535));
																																					BgL_arg1605z00_537
																																						=
																																						CDR(
																																						((obj_t) BgL_cdrzd2584zd2_535));
																																					BgL_bindingsz00_485
																																						=
																																						BgL_arg1604z00_536;
																																					BgL_bodyz00_486
																																						=
																																						BgL_arg1605z00_537;
																																				BgL_tagzd2419zd2_487:
																																					{	/* Expand/eps.scm 313 */
																																						obj_t
																																							BgL_framez00_719;
																																						if (NULLP(BgL_bindingsz00_485))
																																							{	/* Expand/eps.scm 313 */
																																								BgL_framez00_719
																																									=
																																									BNIL;
																																							}
																																						else
																																							{	/* Expand/eps.scm 313 */
																																								obj_t
																																									BgL_head1124z00_735;
																																								{	/* Expand/eps.scm 313 */
																																									obj_t
																																										BgL_res2023z00_1018;
																																									BgL_res2023z00_1018
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BNIL,
																																										BNIL);
																																									BgL_head1124z00_735
																																										=
																																										BgL_res2023z00_1018;
																																								}
																																								{
																																									obj_t
																																										BgL_l1122z00_737;
																																									obj_t
																																										BgL_tail1125z00_738;
																																									BgL_l1122z00_737
																																										=
																																										BgL_bindingsz00_485;
																																									BgL_tail1125z00_738
																																										=
																																										BgL_head1124z00_735;
																																								BgL_zc3z04anonymousza31891ze3z87_739:
																																									if (NULLP(BgL_l1122z00_737))
																																										{	/* Expand/eps.scm 313 */
																																											BgL_framez00_719
																																												=
																																												CDR
																																												(BgL_head1124z00_735);
																																										}
																																									else
																																										{	/* Expand/eps.scm 313 */
																																											obj_t
																																												BgL_newtail1126z00_741;
																																											{	/* Expand/eps.scm 313 */
																																												obj_t
																																													BgL_arg1895z00_743;
																																												{	/* Expand/eps.scm 313 */
																																													obj_t
																																														BgL_bz00_744;
																																													BgL_bz00_744
																																														=
																																														CAR
																																														(
																																														((obj_t) BgL_l1122z00_737));
																																													{	/* Expand/eps.scm 315 */
																																														bool_t
																																															BgL_test2205z00_2068;
																																														if (PAIRP(BgL_bz00_744))
																																															{	/* Expand/eps.scm 315 */
																																																obj_t
																																																	BgL_tmpz00_2071;
																																																BgL_tmpz00_2071
																																																	=
																																																	CAR
																																																	(BgL_bz00_744);
																																																BgL_test2205z00_2068
																																																	=
																																																	SYMBOLP
																																																	(BgL_tmpz00_2071);
																																															}
																																														else
																																															{	/* Expand/eps.scm 315 */
																																																BgL_test2205z00_2068
																																																	=
																																																	(
																																																	(bool_t)
																																																	0);
																																															}
																																														if (BgL_test2205z00_2068)
																																															{	/* Expand/eps.scm 315 */
																																																BgL_arg1895z00_743
																																																	=
																																																	BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																																																	(CAR
																																																	(BgL_bz00_744),
																																																	BFALSE);
																																															}
																																														else
																																															{	/* Expand/eps.scm 315 */
																																																if (SYMBOLP(BgL_bz00_744))
																																																	{	/* Expand/eps.scm 317 */
																																																		BgL_arg1895z00_743
																																																			=
																																																			BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																																																			(BgL_bz00_744,
																																																			BFALSE);
																																																	}
																																																else
																																																	{	/* Expand/eps.scm 320 */
																																																		obj_t
																																																			BgL_arg1903z00_750;
																																																		BgL_arg1903z00_750
																																																			=
																																																			CAR
																																																			(
																																																			((obj_t) BgL_xz00_473));
																																																		BgL_arg1895z00_743
																																																			=
																																																			BGl_errorz00zz__errorz00
																																																			(BgL_arg1903z00_750,
																																																			BGl_string2075z00zzexpand_epsz00,
																																																			BgL_xz00_473);
																																																	}
																																															}
																																													}
																																												}
																																												{	/* Expand/eps.scm 313 */
																																													obj_t
																																														BgL_res2028z00_1028;
																																													BgL_res2028z00_1028
																																														=
																																														MAKE_YOUNG_PAIR
																																														(BgL_arg1895z00_743,
																																														BNIL);
																																													BgL_newtail1126z00_741
																																														=
																																														BgL_res2028z00_1028;
																																												}
																																											}
																																											SET_CDR
																																												(BgL_tail1125z00_738,
																																												BgL_newtail1126z00_741);
																																											{	/* Expand/eps.scm 313 */
																																												obj_t
																																													BgL_arg1893z00_742;
																																												BgL_arg1893z00_742
																																													=
																																													CDR
																																													(
																																													((obj_t) BgL_l1122z00_737));
																																												{
																																													obj_t
																																														BgL_tail1125z00_2087;
																																													obj_t
																																														BgL_l1122z00_2086;
																																													BgL_l1122z00_2086
																																														=
																																														BgL_arg1893z00_742;
																																													BgL_tail1125z00_2087
																																														=
																																														BgL_newtail1126z00_741;
																																													BgL_tail1125z00_738
																																														=
																																														BgL_tail1125z00_2087;
																																													BgL_l1122z00_737
																																														=
																																														BgL_l1122z00_2086;
																																													goto
																																														BgL_zc3z04anonymousza31891ze3z87_739;
																																												}
																																											}
																																										}
																																								}
																																							}
																																						{	/* Expand/eps.scm 313 */
																																							obj_t
																																								BgL_nsz00_720;
																																							BgL_nsz00_720
																																								=
																																								BGl_appendzd221011zd2zzexpand_epsz00
																																								(BgL_framez00_719,
																																								BgL_sz00_474);
																																							{	/* Expand/eps.scm 322 */

																																								{
																																									obj_t
																																										BgL_l1127z00_722;
																																									BgL_l1127z00_722
																																										=
																																										BgL_bindingsz00_485;
																																								BgL_zc3z04anonymousza31882ze3z87_723:
																																									if (PAIRP(BgL_l1127z00_722))
																																										{	/* Expand/eps.scm 323 */
																																											{	/* Expand/eps.scm 324 */
																																												obj_t
																																													BgL_bz00_725;
																																												BgL_bz00_725
																																													=
																																													CAR
																																													(BgL_l1127z00_722);
																																												if (PAIRP(BgL_bz00_725))
																																													{	/* Expand/eps.scm 325 */
																																														obj_t
																																															BgL_tmpz00_2094;
																																														BgL_tmpz00_2094
																																															=
																																															BGl_expandza2ze70z45zzexpand_epsz00
																																															(CDR
																																															(BgL_bz00_725),
																																															BgL_nsz00_720);
																																														SET_CDR
																																															(BgL_bz00_725,
																																															BgL_tmpz00_2094);
																																													}
																																												else
																																													{	/* Expand/eps.scm 324 */
																																														BFALSE;
																																													}
																																											}
																																											{
																																												obj_t
																																													BgL_l1127z00_2098;
																																												BgL_l1127z00_2098
																																													=
																																													CDR
																																													(BgL_l1127z00_722);
																																												BgL_l1127z00_722
																																													=
																																													BgL_l1127z00_2098;
																																												goto
																																													BgL_zc3z04anonymousza31882ze3z87_723;
																																											}
																																										}
																																									else
																																										{	/* Expand/eps.scm 323 */
																																											((bool_t) 1);
																																										}
																																								}
																																								{	/* Expand/eps.scm 327 */
																																									obj_t
																																										BgL_arg1888z00_731;
																																									obj_t
																																										BgL_arg1889z00_732;
																																									BgL_arg1888z00_731
																																										=
																																										CDR
																																										(
																																										((obj_t) BgL_xz00_473));
																																									BgL_arg1889z00_732
																																										=
																																										BGl_expandza2ze70z45zzexpand_epsz00
																																										(BgL_bodyz00_486,
																																										BgL_nsz00_720);
																																									{	/* Expand/eps.scm 327 */
																																										obj_t
																																											BgL_tmpz00_2103;
																																										BgL_tmpz00_2103
																																											=
																																											(
																																											(obj_t)
																																											BgL_arg1888z00_731);
																																										SET_CDR
																																											(BgL_tmpz00_2103,
																																											BgL_arg1889z00_732);
																																									}
																																								}
																																								return
																																									BgL_xz00_473;
																																							}
																																						}
																																					}
																																				}
																																			}
																																	}
																																else
																																	{	/* Expand/eps.scm 386 */
																																		obj_t
																																			BgL_cdrzd2603zd2_538;
																																		BgL_cdrzd2603zd2_538
																																			=
																																			CDR
																																			(BgL_xz00_473);
																																		{	/* Expand/eps.scm 386 */
																																			obj_t
																																				BgL_arg1606z00_539;
																																			obj_t
																																				BgL_arg1611z00_540;
																																			BgL_arg1606z00_539
																																				=
																																				CAR((
																																					(obj_t)
																																					BgL_cdrzd2603zd2_538));
																																			BgL_arg1611z00_540
																																				=
																																				CDR((
																																					(obj_t)
																																					BgL_cdrzd2603zd2_538));
																																			{
																																				obj_t
																																					BgL_bodyz00_2112;
																																				obj_t
																																					BgL_bindingsz00_2111;
																																				BgL_bindingsz00_2111
																																					=
																																					BgL_arg1606z00_539;
																																				BgL_bodyz00_2112
																																					=
																																					BgL_arg1611z00_540;
																																				BgL_bodyz00_486
																																					=
																																					BgL_bodyz00_2112;
																																				BgL_bindingsz00_485
																																					=
																																					BgL_bindingsz00_2111;
																																				goto
																																					BgL_tagzd2419zd2_487;
																																			}
																																		}
																																	}
																															}
																														else
																															{	/* Expand/eps.scm 386 */
																																if (BGl_privatezd2sexpzf3z21zzast_privatez00(BgL_xz00_473))
																																	{	/* Expand/eps.scm 386 */
																																		return
																																			BGl_expandza2ze70z45zzexpand_epsz00
																																			(BgL_xz00_473,
																																			BgL_sz00_474);
																																	}
																																else
																																	{	/* Expand/eps.scm 386 */
																																		goto
																																			BgL_tagzd2429zd2_504;
																																	}
																															}
																													}
																												else
																													{	/* Expand/eps.scm 386 */
																														obj_t
																															BgL_carzd2664zd2_542;
																														obj_t
																															BgL_cdrzd2665zd2_543;
																														BgL_carzd2664zd2_542
																															=
																															CAR(BgL_xz00_473);
																														BgL_cdrzd2665zd2_543
																															=
																															CDR(BgL_xz00_473);
																														{

																															if (
																																(BgL_carzd2664zd2_542
																																	==
																																	CNST_TABLE_REF
																																	(((long)
																																			23))))
																																{	/* Expand/eps.scm 386 */
																																BgL_kapzd2666zd2_544:
																																	if (PAIRP
																																		(BgL_cdrzd2665zd2_543))
																																		{
																																			obj_t
																																				BgL_bodyz00_2125;
																																			obj_t
																																				BgL_bindingsz00_2123;
																																			BgL_bindingsz00_2123
																																				=
																																				CAR
																																				(BgL_cdrzd2665zd2_543);
																																			BgL_bodyz00_2125
																																				=
																																				CDR
																																				(BgL_cdrzd2665zd2_543);
																																			BgL_bodyz00_486
																																				=
																																				BgL_bodyz00_2125;
																																			BgL_bindingsz00_485
																																				=
																																				BgL_bindingsz00_2123;
																																			goto
																																				BgL_tagzd2419zd2_487;
																																		}
																																	else
																																		{	/* Expand/eps.scm 386 */
																																			if (
																																				(CAR(
																																						((obj_t) BgL_xz00_473)) == CNST_TABLE_REF(((long) 10))))
																																				{
																																					obj_t
																																						BgL_sz00_2133;
																																					obj_t
																																						BgL_xz00_2132;
																																					BgL_xz00_2132
																																						=
																																						BgL_xz00_473;
																																					BgL_sz00_2133
																																						=
																																						BgL_sz00_474;
																																					BgL_sz00_465
																																						=
																																						BgL_sz00_2133;
																																					BgL_xz00_464
																																						=
																																						BgL_xz00_2132;
																																					goto
																																						BgL_zc3z04anonymousza31538ze3z87_466;
																																				}
																																			else
																																				{	/* Expand/eps.scm 386 */
																																					if (
																																						(CAR
																																							(((obj_t) BgL_xz00_473)) == CNST_TABLE_REF(((long) 15))))
																																						{	/* Expand/eps.scm 386 */
																																							goto
																																								BgL_tagzd2423zd2_494;
																																						}
																																					else
																																						{	/* Expand/eps.scm 386 */
																																							if ((CAR(((obj_t) BgL_xz00_473)) == CNST_TABLE_REF(((long) 16))))
																																								{	/* Expand/eps.scm 386 */
																																									goto
																																										BgL_tagzd2425zd2_498;
																																								}
																																							else
																																								{	/* Expand/eps.scm 386 */
																																									if ((CAR(((obj_t) BgL_xz00_473)) == CNST_TABLE_REF(((long) 17))))
																																										{	/* Expand/eps.scm 386 */
																																											goto
																																												BgL_tagzd2425zd2_498;
																																										}
																																									else
																																										{	/* Expand/eps.scm 386 */
																																											if (BGl_equalzf3zf3zz__r4_equivalence_6_2z00(CAR(((obj_t) BgL_xz00_473)), BUNSPEC))
																																												{	/* Expand/eps.scm 386 */
																																													if (NULLP(CDR(((obj_t) BgL_xz00_473))))
																																														{	/* Expand/eps.scm 386 */
																																															return
																																																BgL_xz00_473;
																																														}
																																													else
																																														{	/* Expand/eps.scm 386 */
																																															if (BGl_privatezd2sexpzf3z21zzast_privatez00(BgL_xz00_473))
																																																{	/* Expand/eps.scm 386 */
																																																	return
																																																		BGl_expandza2ze70z45zzexpand_epsz00
																																																		(BgL_xz00_473,
																																																		BgL_sz00_474);
																																																}
																																															else
																																																{	/* Expand/eps.scm 386 */
																																																	goto
																																																		BgL_tagzd2429zd2_504;
																																																}
																																														}
																																												}
																																											else
																																												{	/* Expand/eps.scm 386 */
																																													if (BGl_privatezd2sexpzf3z21zzast_privatez00(BgL_xz00_473))
																																														{	/* Expand/eps.scm 386 */
																																															return
																																																BGl_expandza2ze70z45zzexpand_epsz00
																																																(BgL_xz00_473,
																																																BgL_sz00_474);
																																														}
																																													else
																																														{	/* Expand/eps.scm 386 */
																																															goto
																																																BgL_tagzd2429zd2_504;
																																														}
																																												}
																																										}
																																								}
																																						}
																																				}
																																		}
																																}
																															else
																																{	/* Expand/eps.scm 386 */
																																	if (
																																		(BgL_carzd2664zd2_542
																																			==
																																			CNST_TABLE_REF
																																			(((long)
																																					24))))
																																		{	/* Expand/eps.scm 386 */
																																			goto
																																				BgL_kapzd2666zd2_544;
																																		}
																																	else
																																		{	/* Expand/eps.scm 386 */
																																			if (
																																				(BgL_carzd2664zd2_542
																																					==
																																					CNST_TABLE_REF
																																					(((long) 25))))
																																				{	/* Expand/eps.scm 386 */
																																					goto
																																						BgL_kapzd2666zd2_544;
																																				}
																																			else
																																				{	/* Expand/eps.scm 386 */
																																					if (
																																						(CAR
																																							(BgL_xz00_473)
																																							==
																																							CNST_TABLE_REF
																																							(((long) 26))))
																																						{	/* Expand/eps.scm 386 */
																																							if (PAIRP(BgL_cdrzd2665zd2_543))
																																								{	/* Expand/eps.scm 386 */
																																									BgL_bindingsz00_488
																																										=
																																										CAR
																																										(BgL_cdrzd2665zd2_543);
																																									BgL_bodyz00_489
																																										=
																																										CDR
																																										(BgL_cdrzd2665zd2_543);
																																									{	/* Expand/eps.scm 330 */
																																										obj_t
																																											BgL_framez00_754;
																																										if (NULLP(BgL_bindingsz00_488))
																																											{	/* Expand/eps.scm 330 */
																																												BgL_framez00_754
																																													=
																																													BNIL;
																																											}
																																										else
																																											{	/* Expand/eps.scm 330 */
																																												obj_t
																																													BgL_head1131z00_773;
																																												{	/* Expand/eps.scm 330 */
																																													obj_t
																																														BgL_res2032z00_1040;
																																													BgL_res2032z00_1040
																																														=
																																														MAKE_YOUNG_PAIR
																																														(BNIL,
																																														BNIL);
																																													BgL_head1131z00_773
																																														=
																																														BgL_res2032z00_1040;
																																												}
																																												{
																																													obj_t
																																														BgL_l1129z00_775;
																																													obj_t
																																														BgL_tail1132z00_776;
																																													BgL_l1129z00_775
																																														=
																																														BgL_bindingsz00_488;
																																													BgL_tail1132z00_776
																																														=
																																														BgL_head1131z00_773;
																																												BgL_zc3z04anonymousza31916ze3z87_777:
																																													if (NULLP(BgL_l1129z00_775))
																																														{	/* Expand/eps.scm 330 */
																																															BgL_framez00_754
																																																=
																																																CDR
																																																(BgL_head1131z00_773);
																																														}
																																													else
																																														{	/* Expand/eps.scm 330 */
																																															obj_t
																																																BgL_newtail1133z00_779;
																																															{	/* Expand/eps.scm 330 */
																																																obj_t
																																																	BgL_arg1919z00_781;
																																																{	/* Expand/eps.scm 330 */
																																																	obj_t
																																																		BgL_bz00_782;
																																																	BgL_bz00_782
																																																		=
																																																		CAR
																																																		(
																																																		((obj_t) BgL_l1129z00_775));
																																																	if (PAIRP(BgL_bz00_782))
																																																		{	/* Expand/eps.scm 331 */
																																																			BgL_arg1919z00_781
																																																				=
																																																				BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																																																				(CAR
																																																				(BgL_bz00_782),
																																																				BFALSE);
																																																		}
																																																	else
																																																		{	/* Expand/eps.scm 331 */
																																																			BgL_arg1919z00_781
																																																				=
																																																				BGl_errorz00zz__errorz00
																																																				(BGl_string2077z00zzexpand_epsz00,
																																																				BGl_string2075z00zzexpand_epsz00,
																																																				BgL_xz00_473);
																																																		}
																																																}
																																																{	/* Expand/eps.scm 330 */
																																																	obj_t
																																																		BgL_res2035z00_1046;
																																																	BgL_res2035z00_1046
																																																		=
																																																		MAKE_YOUNG_PAIR
																																																		(BgL_arg1919z00_781,
																																																		BNIL);
																																																	BgL_newtail1133z00_779
																																																		=
																																																		BgL_res2035z00_1046;
																																																}
																																															}
																																															SET_CDR
																																																(BgL_tail1132z00_776,
																																																BgL_newtail1133z00_779);
																																															{	/* Expand/eps.scm 330 */
																																																obj_t
																																																	BgL_arg1918z00_780;
																																																BgL_arg1918z00_780
																																																	=
																																																	CDR
																																																	(
																																																	((obj_t) BgL_l1129z00_775));
																																																{
																																																	obj_t
																																																		BgL_tail1132z00_2193;
																																																	obj_t
																																																		BgL_l1129z00_2192;
																																																	BgL_l1129z00_2192
																																																		=
																																																		BgL_arg1918z00_780;
																																																	BgL_tail1132z00_2193
																																																		=
																																																		BgL_newtail1133z00_779;
																																																	BgL_tail1132z00_776
																																																		=
																																																		BgL_tail1132z00_2193;
																																																	BgL_l1129z00_775
																																																		=
																																																		BgL_l1129z00_2192;
																																																	goto
																																																		BgL_zc3z04anonymousza31916ze3z87_777;
																																																}
																																															}
																																														}
																																												}
																																											}
																																										{	/* Expand/eps.scm 330 */
																																											obj_t
																																												BgL_nsz00_755;
																																											BgL_nsz00_755
																																												=
																																												BGl_appendzd221011zd2zzexpand_epsz00
																																												(BgL_framez00_754,
																																												BgL_sz00_474);
																																											{	/* Expand/eps.scm 335 */

																																												{
																																													obj_t
																																														BgL_l1134z00_757;
																																													BgL_l1134z00_757
																																														=
																																														BgL_bindingsz00_488;
																																												BgL_zc3z04anonymousza31905ze3z87_758:
																																													if (PAIRP(BgL_l1134z00_757))
																																														{	/* Expand/eps.scm 336 */
																																															{	/* Expand/eps.scm 337 */
																																																obj_t
																																																	BgL_bz00_760;
																																																BgL_bz00_760
																																																	=
																																																	CAR
																																																	(BgL_l1134z00_757);
																																																{	/* Expand/eps.scm 337 */
																																																	obj_t
																																																		BgL_fz00_761;
																																																	{	/* Expand/eps.scm 337 */
																																																		obj_t
																																																			BgL_arg1911z00_766;
																																																		{	/* Expand/eps.scm 337 */
																																																			obj_t
																																																				BgL_pairz00_1054;
																																																			BgL_pairz00_1054
																																																				=
																																																				CDR
																																																				(
																																																				((obj_t) BgL_bz00_760));
																																																			BgL_arg1911z00_766
																																																				=
																																																				CAR
																																																				(BgL_pairz00_1054);
																																																		}
																																																		BgL_fz00_761
																																																			=
																																																			BGl_protozd2ze3frameze70zd6zzexpand_epsz00
																																																			(BgL_arg1911z00_766);
																																																	}
																																																	{	/* Expand/eps.scm 338 */
																																																		obj_t
																																																			BgL_arg1907z00_762;
																																																		obj_t
																																																			BgL_arg1908z00_763;
																																																		BgL_arg1907z00_762
																																																			=
																																																			CDR
																																																			(
																																																			((obj_t) BgL_bz00_760));
																																																		{	/* Expand/eps.scm 339 */
																																																			obj_t
																																																				BgL_arg1909z00_764;
																																																			obj_t
																																																				BgL_arg1910z00_765;
																																																			{	/* Expand/eps.scm 339 */
																																																				obj_t
																																																					BgL_pairz00_1059;
																																																				BgL_pairz00_1059
																																																					=
																																																					CDR
																																																					(
																																																					((obj_t) BgL_bz00_760));
																																																				BgL_arg1909z00_764
																																																					=
																																																					CDR
																																																					(BgL_pairz00_1059);
																																																			}
																																																			BgL_arg1910z00_765
																																																				=
																																																				BGl_appendzd221011zd2zzexpand_epsz00
																																																				(BgL_fz00_761,
																																																				BgL_nsz00_755);
																																																			BgL_arg1908z00_763
																																																				=
																																																				BGl_expandza2ze70z45zzexpand_epsz00
																																																				(BgL_arg1909z00_764,
																																																				BgL_arg1910z00_765);
																																																		}
																																																		{	/* Expand/eps.scm 338 */
																																																			obj_t
																																																				BgL_tmpz00_2209;
																																																			BgL_tmpz00_2209
																																																				=
																																																				(
																																																				(obj_t)
																																																				BgL_arg1907z00_762);
																																																			SET_CDR
																																																				(BgL_tmpz00_2209,
																																																				BgL_arg1908z00_763);
																																																		}
																																																	}
																																																}
																																															}
																																															{
																																																obj_t
																																																	BgL_l1134z00_2212;
																																																BgL_l1134z00_2212
																																																	=
																																																	CDR
																																																	(BgL_l1134z00_757);
																																																BgL_l1134z00_757
																																																	=
																																																	BgL_l1134z00_2212;
																																																goto
																																																	BgL_zc3z04anonymousza31905ze3z87_758;
																																															}
																																														}
																																													else
																																														{	/* Expand/eps.scm 336 */
																																															((bool_t) 1);
																																														}
																																												}
																																												{	/* Expand/eps.scm 341 */
																																													obj_t
																																														BgL_arg1913z00_769;
																																													obj_t
																																														BgL_arg1914z00_770;
																																													BgL_arg1913z00_769
																																														=
																																														CDR
																																														(
																																														((obj_t) BgL_xz00_473));
																																													BgL_arg1914z00_770
																																														=
																																														BGl_expandza2ze70z45zzexpand_epsz00
																																														(BgL_bodyz00_489,
																																														BgL_nsz00_755);
																																													{	/* Expand/eps.scm 341 */
																																														obj_t
																																															BgL_tmpz00_2217;
																																														BgL_tmpz00_2217
																																															=
																																															(
																																															(obj_t)
																																															BgL_arg1913z00_769);
																																														SET_CDR
																																															(BgL_tmpz00_2217,
																																															BgL_arg1914z00_770);
																																													}
																																												}
																																												return
																																													BgL_xz00_473;
																																											}
																																										}
																																									}
																																								}
																																							else
																																								{	/* Expand/eps.scm 386 */
																																									if (BGl_privatezd2sexpzf3z21zzast_privatez00(BgL_xz00_473))
																																										{	/* Expand/eps.scm 386 */
																																											return
																																												BGl_expandza2ze70z45zzexpand_epsz00
																																												(BgL_xz00_473,
																																												BgL_sz00_474);
																																										}
																																									else
																																										{	/* Expand/eps.scm 386 */
																																											goto
																																												BgL_tagzd2429zd2_504;
																																										}
																																								}
																																						}
																																					else
																																						{	/* Expand/eps.scm 386 */
																																							if ((CAR(BgL_xz00_473) == CNST_TABLE_REF(((long) 10))))
																																								{
																																									obj_t
																																										BgL_sz00_2230;
																																									obj_t
																																										BgL_xz00_2229;
																																									BgL_xz00_2229
																																										=
																																										BgL_xz00_473;
																																									BgL_sz00_2230
																																										=
																																										BgL_sz00_474;
																																									BgL_sz00_465
																																										=
																																										BgL_sz00_2230;
																																									BgL_xz00_464
																																										=
																																										BgL_xz00_2229;
																																									goto
																																										BgL_zc3z04anonymousza31538ze3z87_466;
																																								}
																																							else
																																								{	/* Expand/eps.scm 386 */
																																									obj_t
																																										BgL_carzd2778zd2_557;
																																									obj_t
																																										BgL_cdrzd2779zd2_558;
																																									BgL_carzd2778zd2_557
																																										=
																																										CAR
																																										(BgL_xz00_473);
																																									BgL_cdrzd2779zd2_558
																																										=
																																										CDR
																																										(BgL_xz00_473);
																																									{

																																										if ((BgL_carzd2778zd2_557 == CNST_TABLE_REF(((long) 27))))
																																											{	/* Expand/eps.scm 386 */
																																											BgL_kapzd2780zd2_559:
																																												if (PAIRP(BgL_cdrzd2779zd2_558))
																																													{	/* Expand/eps.scm 386 */
																																														BgL_bodyz00_492
																																															=
																																															CDR
																																															(BgL_cdrzd2779zd2_558);
																																														{	/* Expand/eps.scm 346 */
																																															obj_t
																																																BgL_arg1923z00_786;
																																															obj_t
																																																BgL_arg1924z00_787;
																																															BgL_arg1923z00_786
																																																=
																																																CDR
																																																(
																																																((obj_t) BgL_xz00_473));
																																															BgL_arg1924z00_787
																																																=
																																																BGl_expandza2ze70z45zzexpand_epsz00
																																																(BgL_bodyz00_492,
																																																BgL_sz00_474);
																																															{	/* Expand/eps.scm 346 */
																																																obj_t
																																																	BgL_tmpz00_2241;
																																																BgL_tmpz00_2241
																																																	=
																																																	(
																																																	(obj_t)
																																																	BgL_arg1923z00_786);
																																																SET_CDR
																																																	(BgL_tmpz00_2241,
																																																	BgL_arg1924z00_787);
																																															}
																																														}
																																														return
																																															BgL_xz00_473;
																																													}
																																												else
																																													{	/* Expand/eps.scm 386 */
																																														if ((CAR(((obj_t) BgL_xz00_473)) == CNST_TABLE_REF(((long) 15))))
																																															{	/* Expand/eps.scm 386 */
																																																goto
																																																	BgL_tagzd2423zd2_494;
																																															}
																																														else
																																															{	/* Expand/eps.scm 386 */
																																																if ((CAR(((obj_t) BgL_xz00_473)) == CNST_TABLE_REF(((long) 16))))
																																																	{	/* Expand/eps.scm 386 */
																																																		goto
																																																			BgL_tagzd2425zd2_498;
																																																	}
																																																else
																																																	{	/* Expand/eps.scm 386 */
																																																		if ((CAR(((obj_t) BgL_xz00_473)) == CNST_TABLE_REF(((long) 17))))
																																																			{	/* Expand/eps.scm 386 */
																																																				goto
																																																					BgL_tagzd2425zd2_498;
																																																			}
																																																		else
																																																			{	/* Expand/eps.scm 386 */
																																																				if (BGl_equalzf3zf3zz__r4_equivalence_6_2z00(CAR(((obj_t) BgL_xz00_473)), BUNSPEC))
																																																					{	/* Expand/eps.scm 386 */
																																																						if (NULLP(CDR(((obj_t) BgL_xz00_473))))
																																																							{	/* Expand/eps.scm 386 */
																																																								return
																																																									BgL_xz00_473;
																																																							}
																																																						else
																																																							{	/* Expand/eps.scm 386 */
																																																								if (BGl_privatezd2sexpzf3z21zzast_privatez00(BgL_xz00_473))
																																																									{	/* Expand/eps.scm 386 */
																																																										return
																																																											BGl_expandza2ze70z45zzexpand_epsz00
																																																											(BgL_xz00_473,
																																																											BgL_sz00_474);
																																																									}
																																																								else
																																																									{	/* Expand/eps.scm 386 */
																																																										goto
																																																											BgL_tagzd2429zd2_504;
																																																									}
																																																							}
																																																					}
																																																				else
																																																					{	/* Expand/eps.scm 386 */
																																																						if (BGl_privatezd2sexpzf3z21zzast_privatez00(BgL_xz00_473))
																																																							{	/* Expand/eps.scm 386 */
																																																								return
																																																									BGl_expandza2ze70z45zzexpand_epsz00
																																																									(BgL_xz00_473,
																																																									BgL_sz00_474);
																																																							}
																																																						else
																																																							{	/* Expand/eps.scm 386 */
																																																								goto
																																																									BgL_tagzd2429zd2_504;
																																																							}
																																																					}
																																																			}
																																																	}
																																															}
																																													}
																																											}
																																										else
																																											{	/* Expand/eps.scm 386 */
																																												if ((BgL_carzd2778zd2_557 == CNST_TABLE_REF(((long) 28))))
																																													{	/* Expand/eps.scm 386 */
																																														goto
																																															BgL_kapzd2780zd2_559;
																																													}
																																												else
																																													{	/* Expand/eps.scm 386 */
																																														if ((BgL_carzd2778zd2_557 == CNST_TABLE_REF(((long) 29))))
																																															{	/* Expand/eps.scm 386 */
																																																goto
																																																	BgL_kapzd2780zd2_559;
																																															}
																																														else
																																															{	/* Expand/eps.scm 386 */
																																																if ((BgL_carzd2778zd2_557 == CNST_TABLE_REF(((long) 30))))
																																																	{	/* Expand/eps.scm 386 */
																																																		goto
																																																			BgL_kapzd2780zd2_559;
																																																	}
																																																else
																																																	{	/* Expand/eps.scm 386 */
																																																		if ((BgL_carzd2778zd2_557 == CNST_TABLE_REF(((long) 15))))
																																																			{	/* Expand/eps.scm 386 */
																																																				goto
																																																					BgL_tagzd2423zd2_494;
																																																			}
																																																		else
																																																			{	/* Expand/eps.scm 386 */
																																																				obj_t
																																																					BgL_cdrzd2825zd2_566;
																																																				BgL_cdrzd2825zd2_566
																																																					=
																																																					CDR
																																																					(BgL_xz00_473);
																																																				if ((CAR(BgL_xz00_473) == CNST_TABLE_REF(((long) 31))))
																																																					{	/* Expand/eps.scm 386 */
																																																						if (PAIRP(BgL_cdrzd2825zd2_566))
																																																							{	/* Expand/eps.scm 386 */
																																																								BgL_varz00_495
																																																									=
																																																									CAR
																																																									(BgL_cdrzd2825zd2_566);
																																																								BgL_clausesz00_496
																																																									=
																																																									CDR
																																																									(BgL_cdrzd2825zd2_566);
																																																								{	/* Expand/eps.scm 352 */
																																																									obj_t
																																																										BgL_arg1927z00_790;
																																																									obj_t
																																																										BgL_arg1928z00_791;
																																																									BgL_arg1927z00_790
																																																										=
																																																										CDR
																																																										(
																																																										((obj_t) BgL_xz00_473));
																																																									BgL_arg1928z00_791
																																																										=
																																																										BGl_expandze70ze7zzexpand_epsz00
																																																										(BgL_varz00_495,
																																																										BgL_sz00_474);
																																																									{	/* Expand/eps.scm 352 */
																																																										obj_t
																																																											BgL_tmpz00_2296;
																																																										BgL_tmpz00_2296
																																																											=
																																																											(
																																																											(obj_t)
																																																											BgL_arg1927z00_790);
																																																										SET_CAR
																																																											(BgL_tmpz00_2296,
																																																											BgL_arg1928z00_791);
																																																									}
																																																								}
																																																								{
																																																									obj_t
																																																										BgL_l1136z00_793;
																																																									BgL_l1136z00_793
																																																										=
																																																										BgL_clausesz00_496;
																																																								BgL_zc3z04anonymousza31929ze3z87_794:
																																																									if (PAIRP(BgL_l1136z00_793))
																																																										{	/* Expand/eps.scm 353 */
																																																											{	/* Expand/eps.scm 354 */
																																																												obj_t
																																																													BgL_clausez00_796;
																																																												BgL_clausez00_796
																																																													=
																																																													CAR
																																																													(BgL_l1136z00_793);
																																																												if (PAIRP(BgL_clausez00_796))
																																																													{	/* Expand/eps.scm 355 */
																																																														obj_t
																																																															BgL_tmpz00_2304;
																																																														BgL_tmpz00_2304
																																																															=
																																																															BGl_expandza2ze70z45zzexpand_epsz00
																																																															(CDR
																																																															(BgL_clausez00_796),
																																																															BgL_sz00_474);
																																																														SET_CDR
																																																															(BgL_clausez00_796,
																																																															BgL_tmpz00_2304);
																																																													}
																																																												else
																																																													{	/* Expand/eps.scm 354 */
																																																														BFALSE;
																																																													}
																																																											}
																																																											{
																																																												obj_t
																																																													BgL_l1136z00_2308;
																																																												BgL_l1136z00_2308
																																																													=
																																																													CDR
																																																													(BgL_l1136z00_793);
																																																												BgL_l1136z00_793
																																																													=
																																																													BgL_l1136z00_2308;
																																																												goto
																																																													BgL_zc3z04anonymousza31929ze3z87_794;
																																																											}
																																																										}
																																																									else
																																																										{	/* Expand/eps.scm 353 */
																																																											((bool_t) 1);
																																																										}
																																																								}
																																																								return
																																																									BgL_xz00_473;
																																																							}
																																																						else
																																																							{	/* Expand/eps.scm 386 */
																																																								if (BGl_privatezd2sexpzf3z21zzast_privatez00(BgL_xz00_473))
																																																									{	/* Expand/eps.scm 386 */
																																																										return
																																																											BGl_expandza2ze70z45zzexpand_epsz00
																																																											(BgL_xz00_473,
																																																											BgL_sz00_474);
																																																									}
																																																								else
																																																									{	/* Expand/eps.scm 386 */
																																																										goto
																																																											BgL_tagzd2429zd2_504;
																																																									}
																																																							}
																																																					}
																																																				else
																																																					{	/* Expand/eps.scm 386 */
																																																						if ((CAR(BgL_xz00_473) == CNST_TABLE_REF(((long) 16))))
																																																							{	/* Expand/eps.scm 386 */
																																																								goto
																																																									BgL_tagzd2425zd2_498;
																																																							}
																																																						else
																																																							{	/* Expand/eps.scm 386 */
																																																								if ((CAR(BgL_xz00_473) == CNST_TABLE_REF(((long) 17))))
																																																									{	/* Expand/eps.scm 386 */
																																																										goto
																																																											BgL_tagzd2425zd2_498;
																																																									}
																																																								else
																																																									{	/* Expand/eps.scm 386 */
																																																										if ((CAR(BgL_xz00_473) == CNST_TABLE_REF(((long) 32))))
																																																											{	/* Expand/eps.scm 386 */
																																																												if (PAIRP(BgL_cdrzd2825zd2_566))
																																																													{	/* Expand/eps.scm 386 */
																																																														obj_t
																																																															BgL_cdrzd2855zd2_581;
																																																														BgL_cdrzd2855zd2_581
																																																															=
																																																															CDR
																																																															(BgL_cdrzd2825zd2_566);
																																																														if (PAIRP(BgL_cdrzd2855zd2_581))
																																																															{	/* Expand/eps.scm 386 */
																																																																if (NULLP(CDR(BgL_cdrzd2855zd2_581)))
																																																																	{	/* Expand/eps.scm 386 */
																																																																		BgL_funz00_499
																																																																			=
																																																																			CAR
																																																																			(BgL_cdrzd2825zd2_566);
																																																																		BgL_argz00_500
																																																																			=
																																																																			CAR
																																																																			(BgL_cdrzd2855zd2_581);
																																																																		{	/* Expand/eps.scm 362 */
																																																																			obj_t
																																																																				BgL_arg1937z00_804;
																																																																			obj_t
																																																																				BgL_arg1938z00_805;
																																																																			BgL_arg1937z00_804
																																																																				=
																																																																				CDR
																																																																				(
																																																																				((obj_t) BgL_xz00_473));
																																																																			BgL_arg1938z00_805
																																																																				=
																																																																				BGl_expandze70ze7zzexpand_epsz00
																																																																				(BgL_funz00_499,
																																																																				BgL_sz00_474);
																																																																			{	/* Expand/eps.scm 362 */
																																																																				obj_t
																																																																					BgL_tmpz00_2338;
																																																																				BgL_tmpz00_2338
																																																																					=
																																																																					(
																																																																					(obj_t)
																																																																					BgL_arg1937z00_804);
																																																																				SET_CAR
																																																																					(BgL_tmpz00_2338,
																																																																					BgL_arg1938z00_805);
																																																																			}
																																																																		}
																																																																		{	/* Expand/eps.scm 363 */
																																																																			obj_t
																																																																				BgL_arg1939z00_806;
																																																																			obj_t
																																																																				BgL_arg1940z00_807;
																																																																			{	/* Expand/eps.scm 363 */
																																																																				obj_t
																																																																					BgL_pairz00_1083;
																																																																				BgL_pairz00_1083
																																																																					=
																																																																					CDR
																																																																					(
																																																																					((obj_t) BgL_xz00_473));
																																																																				BgL_arg1939z00_806
																																																																					=
																																																																					CDR
																																																																					(BgL_pairz00_1083);
																																																																			}
																																																																			BgL_arg1940z00_807
																																																																				=
																																																																				BGl_expandze70ze7zzexpand_epsz00
																																																																				(BgL_argz00_500,
																																																																				BgL_sz00_474);
																																																																			{	/* Expand/eps.scm 363 */
																																																																				obj_t
																																																																					BgL_tmpz00_2345;
																																																																				BgL_tmpz00_2345
																																																																					=
																																																																					(
																																																																					(obj_t)
																																																																					BgL_arg1939z00_806);
																																																																				SET_CAR
																																																																					(BgL_tmpz00_2345,
																																																																					BgL_arg1940z00_807);
																																																																			}
																																																																		}
																																																																		return
																																																																			BgL_xz00_473;
																																																																	}
																																																																else
																																																																	{	/* Expand/eps.scm 386 */
																																																																		if (BGl_privatezd2sexpzf3z21zzast_privatez00(BgL_xz00_473))
																																																																			{	/* Expand/eps.scm 386 */
																																																																				return
																																																																					BGl_expandza2ze70z45zzexpand_epsz00
																																																																					(BgL_xz00_473,
																																																																					BgL_sz00_474);
																																																																			}
																																																																		else
																																																																			{	/* Expand/eps.scm 386 */
																																																																				goto
																																																																					BgL_tagzd2429zd2_504;
																																																																			}
																																																																	}
																																																															}
																																																														else
																																																															{	/* Expand/eps.scm 386 */
																																																																if (BGl_privatezd2sexpzf3z21zzast_privatez00(BgL_xz00_473))
																																																																	{	/* Expand/eps.scm 386 */
																																																																		return
																																																																			BGl_expandza2ze70z45zzexpand_epsz00
																																																																			(BgL_xz00_473,
																																																																			BgL_sz00_474);
																																																																	}
																																																																else
																																																																	{	/* Expand/eps.scm 386 */
																																																																		goto
																																																																			BgL_tagzd2429zd2_504;
																																																																	}
																																																															}
																																																													}
																																																												else
																																																													{	/* Expand/eps.scm 386 */
																																																														if (BGl_privatezd2sexpzf3z21zzast_privatez00(BgL_xz00_473))
																																																															{	/* Expand/eps.scm 386 */
																																																																return
																																																																	BGl_expandza2ze70z45zzexpand_epsz00
																																																																	(BgL_xz00_473,
																																																																	BgL_sz00_474);
																																																															}
																																																														else
																																																															{	/* Expand/eps.scm 386 */
																																																																goto
																																																																	BgL_tagzd2429zd2_504;
																																																															}
																																																													}
																																																											}
																																																										else
																																																											{	/* Expand/eps.scm 386 */
																																																												if (BGl_equalzf3zf3zz__r4_equivalence_6_2z00(CAR(BgL_xz00_473), BUNSPEC))
																																																													{	/* Expand/eps.scm 386 */
																																																														if (NULLP(CDR(BgL_xz00_473)))
																																																															{	/* Expand/eps.scm 386 */
																																																																return
																																																																	BgL_xz00_473;
																																																															}
																																																														else
																																																															{	/* Expand/eps.scm 386 */
																																																																if (BGl_privatezd2sexpzf3z21zzast_privatez00(BgL_xz00_473))
																																																																	{	/* Expand/eps.scm 386 */
																																																																		return
																																																																			BGl_expandza2ze70z45zzexpand_epsz00
																																																																			(BgL_xz00_473,
																																																																			BgL_sz00_474);
																																																																	}
																																																																else
																																																																	{	/* Expand/eps.scm 386 */
																																																																		goto
																																																																			BgL_tagzd2429zd2_504;
																																																																	}
																																																															}
																																																													}
																																																												else
																																																													{	/* Expand/eps.scm 386 */
																																																														if (BGl_privatezd2sexpzf3z21zzast_privatez00(BgL_xz00_473))
																																																															{	/* Expand/eps.scm 386 */
																																																																return
																																																																	BGl_expandza2ze70z45zzexpand_epsz00
																																																																	(BgL_xz00_473,
																																																																	BgL_sz00_474);
																																																															}
																																																														else
																																																															{	/* Expand/eps.scm 386 */
																																																																goto
																																																																	BgL_tagzd2429zd2_504;
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
							else
								{	/* Expand/eps.scm 386 */
									return BgL_xz00_473;
								}
						}
				}
			}
		}

	}



/* expand*~0 */
	obj_t BGl_expandza2ze70z45zzexpand_epsz00(obj_t BgL_xz00_452,
		obj_t BgL_sz00_453)
	{
		{	/* Expand/eps.scm 276 */
			{
				obj_t BgL_l1113z00_457;

				BgL_l1113z00_457 = BgL_xz00_452;
			BgL_zc3z04anonymousza31530ze3z87_458:
				if (NULLP(BgL_l1113z00_457))
					{	/* Expand/eps.scm 276 */
						return BgL_xz00_452;
					}
				else
					{	/* Expand/eps.scm 276 */
						{	/* Expand/eps.scm 276 */
							obj_t BgL_arg1536z00_460;

							{	/* Expand/eps.scm 276 */
								obj_t BgL_xz00_461;

								BgL_xz00_461 = CAR(((obj_t) BgL_l1113z00_457));
								BgL_arg1536z00_460 =
									BGl_expandze70ze7zzexpand_epsz00(BgL_xz00_461, BgL_sz00_453);
							}
							{	/* Expand/eps.scm 276 */
								obj_t BgL_tmpz00_2376;

								BgL_tmpz00_2376 = ((obj_t) BgL_l1113z00_457);
								SET_CAR(BgL_tmpz00_2376, BgL_arg1536z00_460);
							}
						}
						{	/* Expand/eps.scm 276 */
							obj_t BgL_arg1537z00_462;

							BgL_arg1537z00_462 = CDR(((obj_t) BgL_l1113z00_457));
							{
								obj_t BgL_l1113z00_2381;

								BgL_l1113z00_2381 = BgL_arg1537z00_462;
								BgL_l1113z00_457 = BgL_l1113z00_2381;
								goto BgL_zc3z04anonymousza31530ze3z87_458;
							}
						}
					}
			}
		}

	}



/* &e2 */
	obj_t BGl_z62e2z62zzexpand_epsz00(obj_t BgL_envz00_1273, obj_t BgL_xz00_1275,
		obj_t BgL_ez00_1276)
	{
		{	/* Expand/eps.scm 381 */
			{	/* Expand/eps.scm 382 */
				obj_t BgL_sz00_1274;

				BgL_sz00_1274 = PROCEDURE_REF(BgL_envz00_1273, (int) (((long) 0)));
				{	/* Expand/eps.scm 383 */
					obj_t BgL_xz00_1325;

					BgL_xz00_1325 =
						BGl_initialzd2expanderzd2zzexpand_epsz00(BgL_xz00_1275,
						BGl_initialzd2expanderzd2envz00zzexpand_epsz00);
					return BGl_expandze70ze7zzexpand_epsz00(BgL_xz00_1325,
						((obj_t) BgL_sz00_1274));
				}
			}
		}

	}



/* &identifier-expander */
	obj_t BGl_z62identifierzd2expanderzb0zzexpand_epsz00(obj_t BgL_envz00_1266,
		obj_t BgL_idz00_1267, obj_t BgL_ez00_1268)
	{
		{	/* Expand/eps.scm 392 */
			{	/* Expand/eps.scm 393 */
				bool_t BgL_test2263z00_2387;

				{	/* Expand/eps.scm 393 */
					obj_t BgL_tmpz00_2388;

					BgL_tmpz00_2388 =
						BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_idz00_1267,
						BGl_za2lexicalzd2stackza2zd2zzexpand_epsz00);
					BgL_test2263z00_2387 = PAIRP(BgL_tmpz00_2388);
				}
				if (BgL_test2263z00_2387)
					{	/* Expand/eps.scm 393 */
						return BgL_idz00_1267;
					}
				else
					{	/* Expand/eps.scm 395 */
						obj_t BgL_az00_1328;

						BgL_az00_1328 =
							BGl_getpropz00zz__r4_symbols_6_4z00(BgL_idz00_1267,
							CNST_TABLE_REF(((long) 0)));
						if (CBOOL(BgL_az00_1328))
							{	/* Expand/eps.scm 396 */
								return
									PROCEDURE_ENTRY(BgL_ez00_1268) (BgL_ez00_1268, BgL_az00_1328,
									BgL_ez00_1268, BEOA);
							}
						else
							{	/* Expand/eps.scm 396 */
								return BgL_idz00_1267;
							}
					}
			}
		}

	}



/* loop~0 */
	obj_t BGl_loopze70ze7zzexpand_epsz00(obj_t BgL_ez00_1278, obj_t BgL_xz00_1277,
		obj_t BgL_xza2za2_848)
	{
		{	/* Expand/eps.scm 404 */
			if (PAIRP(BgL_xza2za2_848))
				{	/* Expand/eps.scm 406 */
					{	/* Expand/eps.scm 407 */
						obj_t BgL_arg1965z00_851;

						{	/* Expand/eps.scm 407 */
							obj_t BgL_arg1966z00_852;

							BgL_arg1966z00_852 = CAR(BgL_xza2za2_848);
							BgL_arg1965z00_851 =
								PROCEDURE_ENTRY(BgL_ez00_1278) (BgL_ez00_1278,
								BgL_arg1966z00_852, BgL_ez00_1278, BEOA);
						}
						SET_CAR(BgL_xza2za2_848, BgL_arg1965z00_851);
					}
					{	/* Expand/eps.scm 408 */
						obj_t BgL_tmpz00_2409;

						BgL_tmpz00_2409 =
							BGl_loopze70ze7zzexpand_epsz00(BgL_ez00_1278, BgL_xz00_1277,
							CDR(BgL_xza2za2_848));
						SET_CDR(BgL_xza2za2_848, BgL_tmpz00_2409);
					}
					return BgL_xza2za2_848;
				}
			else
				{	/* Expand/eps.scm 406 */
					if (NULLP(BgL_xza2za2_848))
						{	/* Expand/eps.scm 410 */
							return BNIL;
						}
					else
						{	/* Expand/eps.scm 410 */
							return
								BGl_errorz00zz__errorz00(BFALSE,
								BGl_string2079z00zzexpand_epsz00, BgL_xz00_1277);
						}
				}
		}

	}



/* &application-expander */
	obj_t BGl_z62applicationzd2expanderzb0zzexpand_epsz00(obj_t BgL_envz00_1269,
		obj_t BgL_xz00_1270, obj_t BgL_ez00_1271)
	{
		{	/* Expand/eps.scm 403 */
			return
				BGl_loopze70ze7zzexpand_epsz00(BgL_ez00_1271, BgL_xz00_1270,
				BgL_xz00_1270);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzexpand_epsz00()
	{
		{	/* Expand/eps.scm 17 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzexpand_epsz00()
	{
		{	/* Expand/eps.scm 17 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzexpand_epsz00()
	{
		{	/* Expand/eps.scm 17 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzexpand_epsz00()
	{
		{	/* Expand/eps.scm 17 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string2080z00zzexpand_epsz00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string2080z00zzexpand_epsz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string2080z00zzexpand_epsz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 373082201),
				BSTRING_TO_STRING(BGl_string2080z00zzexpand_epsz00));
			BGl_modulezd2initializa7ationz75zztools_prognz00(((long) 302006061),
				BSTRING_TO_STRING(BGl_string2080z00zzexpand_epsz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 9470340),
				BSTRING_TO_STRING(BGl_string2080z00zzexpand_epsz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2080z00zzexpand_epsz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string2080z00zzexpand_epsz00));
			BGl_modulezd2initializa7ationz75zzast_privatez00(((long) 135263818),
				BSTRING_TO_STRING(BGl_string2080z00zzexpand_epsz00));
			BGl_modulezd2initializa7ationz75zzexpand_expanderz00(((long) 393359),
				BSTRING_TO_STRING(BGl_string2080z00zzexpand_epsz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 462333171),
				BSTRING_TO_STRING(BGl_string2080z00zzexpand_epsz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string2080z00zzexpand_epsz00));
			return
				BGl_modulezd2initializa7ationz75zztools_argsz00(((long) 47101498),
				BSTRING_TO_STRING(BGl_string2080z00zzexpand_epsz00));
		}

	}

#ifdef __cplusplus
}
#endif
