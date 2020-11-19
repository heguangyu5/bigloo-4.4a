/*===========================================================================*/
/*   (Ast/apply.scm)                                                         */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/apply.scm) */
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

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;

	typedef struct BgL_nodezf2effectzf2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
	}                       *BgL_nodezf2effectzf2_bglt;

	typedef struct BgL_varz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_variablez00_bgl *BgL_variablez00;
	}             *BgL_varz00_bglt;

	typedef struct BgL_appz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		struct BgL_varz00_bgl *BgL_funz00;
		obj_t BgL_argsz00;
		obj_t BgL_stackablez00;
	}             *BgL_appz00_bglt;

	typedef struct BgL_appzd2lyzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_funz00;
		struct BgL_nodez00_bgl *BgL_argz00;
	}                  *BgL_appzd2lyzd2_bglt;

	typedef struct BgL_letzd2varzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_bindingsz00;
		struct BgL_nodez00_bgl *BgL_bodyz00;
		bool_t BgL_removablezf3zf3;
	}                   *BgL_letzd2varzd2_bglt;


	extern obj_t BGl_za2unsafezd2arityza2zd2zzengine_paramz00;
	static obj_t BGl_z62makezd2funzd2framezd2sfun1269zb0zzast_applyz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	extern obj_t BGl_findzd2locationzf2locz20zztools_locationz00(obj_t, obj_t);
	extern BgL_nodez00_bglt BGl_applicationzd2ze3nodez31zzast_appz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_sfunz00zzast_varz00;
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_applycationzd2ze3nodez31zzast_applyz00(obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static BgL_letzd2varzd2_bglt
		BGl_vazd2knownzd2appzd2lyzd2ze3nodeze3zzast_applyz00(obj_t, obj_t,
		BgL_nodez00_bglt, BgL_nodez00_bglt, obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzast_applyz00();
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzast_applyz00();
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	extern BgL_typez00_bglt
		BGl_strictzd2nodezd2typez00zzast_nodez00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl_z62makezd2funzd2framezd2cfun1271zb0zzast_applyz00(obj_t,
		obj_t);
	extern obj_t BGl_cfunz00zzast_varz00;
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern BgL_nodez00_bglt BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzast_applyz00();
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_letzd2varzd2_bglt
		BGl_fxzd2knownzd2appzd2lyzd2ze3nodeze3zzast_applyz00(obj_t, obj_t,
		BgL_nodez00_bglt, BgL_nodez00_bglt, obj_t, obj_t);
	static BgL_nodezf2effectzf2_bglt
		BGl_loopze70ze7zzast_applyz00(BgL_nodez00_bglt, obj_t, obj_t,
		BgL_localz00_bglt, BgL_typez00_bglt, obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt BGl_loopze71ze7zzast_applyz00(obj_t, BgL_nodez00_bglt,
		obj_t, obj_t, BgL_localz00_bglt, BgL_typez00_bglt, obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzast_applyz00 = BUNSPEC;
	extern obj_t BGl_funz00zzast_varz00;
	static obj_t BGl_makezd2funzd2framez00zzast_applyz00(BgL_funz00_bglt);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzast_applyz00();
	static obj_t BGl_genericzd2initzd2zzast_applyz00();
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62makezd2funzd2frame1266z62zzast_applyz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62knownzd2appzd2lyzd2ze3nodez53zzast_applyz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	extern bool_t BGl_globalzd2optionalzf3z21zzast_varz00(obj_t);
	static BgL_nodez00_bglt BGl_z62applycationzd2ze3nodez53zzast_applyz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern bool_t BGl_globalzd2keyzf3z21zzast_varz00(obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzast_applyz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_appz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_cnstzd2initzd2zzast_applyz00();
	extern BgL_localz00_bglt BGl_makezd2localzd2svarz00zzast_localz00(obj_t,
		BgL_typez00_bglt);
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_applyz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzast_applyz00();
	extern BgL_nodez00_bglt BGl_sexpzd2ze3nodez31zzast_sexpz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_knownzd2appzd2lyzd2ze3nodez31zzast_applyz00(obj_t, obj_t,
		BgL_nodez00_bglt, BgL_nodez00_bglt, obj_t);
	extern obj_t BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00(obj_t);
	static obj_t BGl_z62makezd2funzd2framez62zzast_applyz00(obj_t, obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t __cnst[14];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1907z00zzast_applyz00,
		BgL_bgl_za762makeza7d2funza7d21918za7,
		BGl_z62makezd2funzd2frame1266z62zzast_applyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1910z00zzast_applyz00,
		BgL_bgl_za762makeza7d2funza7d21919za7,
		BGl_z62makezd2funzd2framezd2sfun1269zb0zzast_applyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1912z00zzast_applyz00,
		BgL_bgl_za762makeza7d2funza7d21920za7,
		BGl_z62makezd2funzd2framezd2cfun1271zb0zzast_applyz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_knownzd2appzd2lyzd2ze3nodezd2envze3zzast_applyz00,
		BgL_bgl_za762knownza7d2appza7d1921za7,
		BGl_z62knownzd2appzd2lyzd2ze3nodez53zzast_applyz00, 0L, BUNSPEC, 5);
	      DEFINE_STRING(BGl_string1904z00zzast_applyz00,
		BgL_bgl_string1904za700za7za7a1922za7, "Illegal `apply' form", 20);
	      DEFINE_STRING(BGl_string1905z00zzast_applyz00,
		BgL_bgl_string1905za700za7za7a1923za7, "Too many arguments provided", 27);
	      DEFINE_STRING(BGl_string1906z00zzast_applyz00,
		BgL_bgl_string1906za700za7za7a1924za7, "apply", 5);
	      DEFINE_STRING(BGl_string1908z00zzast_applyz00,
		BgL_bgl_string1908za700za7za7a1925za7, "make-fun-frame1266", 18);
	      DEFINE_STRING(BGl_string1909z00zzast_applyz00,
		BgL_bgl_string1909za700za7za7a1926za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string1911z00zzast_applyz00,
		BgL_bgl_string1911za700za7za7a1927za7, "make-fun-frame", 14);
	      DEFINE_STRING(BGl_string1913z00zzast_applyz00,
		BgL_bgl_string1913za700za7za7a1928za7, "ast_apply", 9);
	      DEFINE_STRING(BGl_string1914z00zzast_applyz00,
		BgL_bgl_string1914za700za7za7a1929za7,
		"aux make-fun-frame1266 begin set! car if failure quote null? cdr write runner value apply ",
		90);
	      DEFINE_STATIC_BGL_GENERIC(BGl_makezd2funzd2framezd2envzd2zzast_applyz00,
		BgL_bgl_za762makeza7d2funza7d21930za7,
		BGl_z62makezd2funzd2framez62zzast_applyz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_applycationzd2ze3nodezd2envze3zzast_applyz00,
		BgL_bgl_za762applycationza7d1931z00,
		BGl_z62applycationzd2ze3nodez53zzast_applyz00, 0L, BUNSPEC, 4);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzast_applyz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzast_applyz00(long
		BgL_checksumz00_2096, char *BgL_fromz00_2097)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_applyz00))
				{
					BGl_requirezd2initializa7ationz75zzast_applyz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzast_applyz00();
					BGl_libraryzd2moduleszd2initz00zzast_applyz00();
					BGl_cnstzd2initzd2zzast_applyz00();
					BGl_importedzd2moduleszd2initz00zzast_applyz00();
					BGl_genericzd2initzd2zzast_applyz00();
					BGl_methodzd2initzd2zzast_applyz00();
					return BGl_toplevelzd2initzd2zzast_applyz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_applyz00()
	{
		{	/* Ast/apply.scm 14 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"ast_apply");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "ast_apply");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "ast_apply");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"ast_apply");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "ast_apply");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"ast_apply");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"ast_apply");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"ast_apply");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "ast_apply");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"ast_apply");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_applyz00()
	{
		{	/* Ast/apply.scm 14 */
			{	/* Ast/apply.scm 14 */
				obj_t BgL_cportz00_2059;

				{	/* Ast/apply.scm 14 */
					obj_t BgL_stringz00_2067;

					BgL_stringz00_2067 = BGl_string1914z00zzast_applyz00;
					{	/* Ast/apply.scm 14 */
						obj_t BgL_startz00_2068;

						BgL_startz00_2068 = BINT(((long) 0));
						{	/* Ast/apply.scm 14 */
							obj_t BgL_endz00_2069;

							BgL_endz00_2069 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2067)));
							{	/* Ast/apply.scm 14 */

								BgL_cportz00_2059 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2067, BgL_startz00_2068, BgL_endz00_2069);
				}}}}
				{
					long BgL_iz00_2060;

					BgL_iz00_2060 = ((long) 13);
				BgL_loopz00_2061:
					if ((BgL_iz00_2060 == ((long) -1)))
						{	/* Ast/apply.scm 14 */
							return BUNSPEC;
						}
					else
						{	/* Ast/apply.scm 14 */
							{	/* Ast/apply.scm 14 */
								obj_t BgL_arg1916z00_2063;

								{	/* Ast/apply.scm 14 */

									{	/* Ast/apply.scm 14 */
										obj_t BgL_locationz00_2065;

										BgL_locationz00_2065 = BBOOL(((bool_t) 0));
										{	/* Ast/apply.scm 14 */

											BgL_arg1916z00_2063 =
												BGl_readz00zz__readerz00(BgL_cportz00_2059,
												BgL_locationz00_2065);
										}
									}
								}
								{	/* Ast/apply.scm 14 */
									int BgL_tmpz00_2127;

									BgL_tmpz00_2127 = (int) (BgL_iz00_2060);
									CNST_TABLE_SET(BgL_tmpz00_2127, BgL_arg1916z00_2063);
							}}
							{	/* Ast/apply.scm 14 */
								int BgL_auxz00_2066;

								BgL_auxz00_2066 = (int) ((BgL_iz00_2060 - ((long) 1)));
								{
									long BgL_iz00_2132;

									BgL_iz00_2132 = (long) (BgL_auxz00_2066);
									BgL_iz00_2060 = BgL_iz00_2132;
									goto BgL_loopz00_2061;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzast_applyz00()
	{
		{	/* Ast/apply.scm 14 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzast_applyz00()
	{
		{	/* Ast/apply.scm 14 */
			return BUNSPEC;
		}

	}



/* applycation->node */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_applycationzd2ze3nodez31zzast_applyz00(obj_t BgL_expz00_3,
		obj_t BgL_stackz00_4, obj_t BgL_locz00_5, obj_t BgL_sitez00_6)
	{
		{	/* Ast/apply.scm 31 */
			{
				obj_t BgL_procz00_1354;
				obj_t BgL_argz00_1355;

				if (PAIRP(BgL_expz00_3))
					{	/* Ast/apply.scm 32 */
						obj_t BgL_cdrzd2109zd2_1360;

						BgL_cdrzd2109zd2_1360 = CDR(BgL_expz00_3);
						if ((CAR(BgL_expz00_3) == CNST_TABLE_REF(((long) 0))))
							{	/* Ast/apply.scm 32 */
								if (PAIRP(BgL_cdrzd2109zd2_1360))
									{	/* Ast/apply.scm 32 */
										obj_t BgL_cdrzd2113zd2_1364;

										BgL_cdrzd2113zd2_1364 = CDR(BgL_cdrzd2109zd2_1360);
										if (PAIRP(BgL_cdrzd2113zd2_1364))
											{	/* Ast/apply.scm 32 */
												if (NULLP(CDR(BgL_cdrzd2113zd2_1364)))
													{	/* Ast/apply.scm 32 */
														BgL_procz00_1354 = CAR(BgL_cdrzd2109zd2_1360);
														BgL_argz00_1355 = CAR(BgL_cdrzd2113zd2_1364);
														{	/* Ast/apply.scm 34 */
															obj_t BgL_locz00_1372;

															BgL_locz00_1372 =
																BGl_findzd2locationzf2locz20zztools_locationz00
																(BgL_expz00_3, BgL_locz00_5);
															{	/* Ast/apply.scm 34 */
																BgL_nodez00_bglt BgL_procz00_1373;

																{	/* Ast/apply.scm 37 */
																	obj_t BgL_arg1311z00_1406;

																	BgL_arg1311z00_1406 =
																		BGl_findzd2locationzf2locz20zztools_locationz00
																		(BgL_procz00_1354, BgL_locz00_1372);
																	BgL_procz00_1373 =
																		BGl_sexpzd2ze3nodez31zzast_sexpz00
																		(BgL_procz00_1354, BgL_stackz00_4,
																		BgL_arg1311z00_1406,
																		CNST_TABLE_REF(((long) 0)));
																}
																{	/* Ast/apply.scm 35 */
																	BgL_nodez00_bglt BgL_argz00_1374;

																	{	/* Ast/apply.scm 41 */
																		obj_t BgL_arg1310z00_1405;

																		BgL_arg1310z00_1405 =
																			BGl_findzd2locationzf2locz20zztools_locationz00
																			(BgL_argz00_1355, BgL_locz00_1372);
																		BgL_argz00_1374 =
																			BGl_sexpzd2ze3nodez31zzast_sexpz00
																			(BgL_argz00_1355, BgL_stackz00_4,
																			BgL_arg1310z00_1405,
																			CNST_TABLE_REF(((long) 1)));
																	}
																	{	/* Ast/apply.scm 39 */

																		{	/* Ast/apply.scm 43 */
																			bool_t BgL_test1939z00_2157;

																			{	/* Ast/apply.scm 43 */
																				bool_t BgL_test1940z00_2158;

																				{	/* Ast/apply.scm 43 */
																					bool_t BgL_res1841z00_1810;

																					BgL_res1841z00_1810 =
																						BGl_isazf3zf3zz__objectz00(
																						((obj_t) BgL_procz00_1373),
																						BGl_varz00zzast_nodez00);
																					BgL_test1940z00_2158 =
																						BgL_res1841z00_1810;
																				}
																				if (BgL_test1940z00_2158)
																					{	/* Ast/apply.scm 44 */
																						bool_t BgL_test1941z00_2161;

																						{	/* Ast/apply.scm 44 */
																							BgL_valuez00_bglt
																								BgL_arg1308z00_1403;
																							BgL_arg1308z00_1403 =
																								(((BgL_variablez00_bglt)
																									COBJECT((((BgL_varz00_bglt)
																												COBJECT((
																														(BgL_varz00_bglt)
																														BgL_procz00_1373)))->
																											BgL_variablez00)))->
																								BgL_valuez00);
																							{	/* Ast/apply.scm 44 */
																								bool_t BgL_res1842z00_1813;

																								BgL_res1842z00_1813 =
																									BGl_isazf3zf3zz__objectz00(
																									((obj_t) BgL_arg1308z00_1403),
																									BGl_funz00zzast_varz00);
																								BgL_test1941z00_2161 =
																									BgL_res1842z00_1813;
																							}
																						}
																						if (BgL_test1941z00_2161)
																							{	/* Ast/apply.scm 45 */
																								bool_t BgL__ortest_1100z00_1396;

																								{	/* Ast/apply.scm 45 */
																									bool_t BgL_test1942z00_2167;

																									{	/* Ast/apply.scm 45 */
																										BgL_variablez00_bglt
																											BgL_arg1307z00_1402;
																										BgL_arg1307z00_1402 =
																											(((BgL_varz00_bglt)
																												COBJECT((
																														(BgL_varz00_bglt)
																														BgL_procz00_1373)))->
																											BgL_variablez00);
																										{	/* Ast/apply.scm 45 */
																											bool_t
																												BgL_res1843z00_1815;
																											BgL_res1843z00_1815 =
																												BGl_isazf3zf3zz__objectz00
																												(((obj_t)
																													BgL_arg1307z00_1402),
																												BGl_globalz00zzast_varz00);
																											BgL_test1942z00_2167 =
																												BgL_res1843z00_1815;
																										}
																									}
																									if (BgL_test1942z00_2167)
																										{	/* Ast/apply.scm 45 */
																											BgL__ortest_1100z00_1396 =
																												((bool_t) 0);
																										}
																									else
																										{	/* Ast/apply.scm 45 */
																											BgL__ortest_1100z00_1396 =
																												((bool_t) 1);
																										}
																								}
																								if (BgL__ortest_1100z00_1396)
																									{	/* Ast/apply.scm 45 */
																										BgL_test1939z00_2157 =
																											BgL__ortest_1100z00_1396;
																									}
																								else
																									{	/* Ast/apply.scm 46 */
																										bool_t BgL_test1944z00_2173;

																										{	/* Ast/apply.scm 46 */
																											BgL_variablez00_bglt
																												BgL_arg1306z00_1400;
																											BgL_arg1306z00_1400 =
																												(((BgL_varz00_bglt)
																													COBJECT((
																															(BgL_varz00_bglt)
																															BgL_procz00_1373)))->
																												BgL_variablez00);
																											BgL_test1944z00_2173 =
																												BGl_globalzd2optionalzf3z21zzast_varz00
																												(((obj_t)
																													BgL_arg1306z00_1400));
																										}
																										if (BgL_test1944z00_2173)
																											{	/* Ast/apply.scm 46 */
																												BgL_test1939z00_2157 =
																													((bool_t) 0);
																											}
																										else
																											{	/* Ast/apply.scm 47 */
																												bool_t
																													BgL_test1945z00_2178;
																												{	/* Ast/apply.scm 47 */
																													BgL_variablez00_bglt
																														BgL_arg1304z00_1399;
																													BgL_arg1304z00_1399 =
																														(((BgL_varz00_bglt)
																															COBJECT((
																																	(BgL_varz00_bglt)
																																	BgL_procz00_1373)))->
																														BgL_variablez00);
																													BgL_test1945z00_2178 =
																														BGl_globalzd2keyzf3z21zzast_varz00
																														(((obj_t)
																															BgL_arg1304z00_1399));
																												}
																												if (BgL_test1945z00_2178)
																													{	/* Ast/apply.scm 47 */
																														BgL_test1939z00_2157
																															= ((bool_t) 0);
																													}
																												else
																													{	/* Ast/apply.scm 47 */
																														BgL_test1939z00_2157
																															= ((bool_t) 1);
																													}
																											}
																									}
																							}
																						else
																							{	/* Ast/apply.scm 44 */
																								BgL_test1939z00_2157 =
																									((bool_t) 0);
																							}
																					}
																				else
																					{	/* Ast/apply.scm 43 */
																						BgL_test1939z00_2157 = ((bool_t) 0);
																					}
																			}
																			if (BgL_test1939z00_2157)
																				{	/* Ast/apply.scm 43 */
																					return
																						BGl_knownzd2appzd2lyzd2ze3nodez31zzast_applyz00
																						(BgL_stackz00_4, BgL_locz00_1372,
																						BgL_procz00_1373, BgL_argz00_1374,
																						BgL_sitez00_6);
																				}
																			else
																				{	/* Ast/apply.scm 49 */
																					BgL_appzd2lyzd2_bglt
																						BgL_new1103z00_1391;
																					{	/* Ast/apply.scm 50 */
																						BgL_appzd2lyzd2_bglt
																							BgL_new1102z00_1392;
																						BgL_new1102z00_1392 =
																							((BgL_appzd2lyzd2_bglt)
																							BOBJECT(GC_MALLOC(sizeof(struct
																										BgL_appzd2lyzd2_bgl))));
																						{	/* Ast/apply.scm 50 */
																							long BgL_arg1303z00_1393;

																							{	/* Ast/apply.scm 50 */
																								long BgL_res1844z00_1819;

																								BgL_res1844z00_1819 =
																									BGL_CLASS_INDEX
																									(BGl_appzd2lyzd2zzast_nodez00);
																								BgL_arg1303z00_1393 =
																									BgL_res1844z00_1819;
																							}
																							BGL_OBJECT_CLASS_NUM_SET(
																								((BgL_objectz00_bglt)
																									BgL_new1102z00_1392),
																								BgL_arg1303z00_1393);
																						}
																						{	/* Ast/apply.scm 50 */
																							BgL_objectz00_bglt
																								BgL_tmpz00_2188;
																							BgL_tmpz00_2188 =
																								((BgL_objectz00_bglt)
																								BgL_new1102z00_1392);
																							BGL_OBJECT_WIDENING_SET
																								(BgL_tmpz00_2188, BFALSE);
																						}
																						((BgL_objectz00_bglt)
																							BgL_new1102z00_1392);
																						BgL_new1103z00_1391 =
																							BgL_new1102z00_1392;
																					}
																					((((BgL_nodez00_bglt) COBJECT(
																									((BgL_nodez00_bglt)
																										BgL_new1103z00_1391)))->
																							BgL_locz00) =
																						((obj_t) BgL_locz00_1372), BUNSPEC);
																					((((BgL_nodez00_bglt)
																								COBJECT(((BgL_nodez00_bglt)
																										BgL_new1103z00_1391)))->
																							BgL_typez00) =
																						((BgL_typez00_bglt) (
																								(BgL_typez00_bglt)
																								BGl_za2_za2z00zztype_cachez00)),
																						BUNSPEC);
																					((((BgL_appzd2lyzd2_bglt)
																								COBJECT(BgL_new1103z00_1391))->
																							BgL_funz00) =
																						((BgL_nodez00_bglt)
																							BgL_procz00_1373), BUNSPEC);
																					((((BgL_appzd2lyzd2_bglt)
																								COBJECT(BgL_new1103z00_1391))->
																							BgL_argz00) =
																						((BgL_nodez00_bglt)
																							BgL_argz00_1374), BUNSPEC);
																					return ((BgL_nodez00_bglt)
																						BgL_new1103z00_1391);
																				}
																		}
																	}
																}
															}
														}
													}
												else
													{	/* Ast/apply.scm 32 */
													BgL_tagzd2102zd2_1357:
														return
															BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00
															(BGl_string1904z00zzast_applyz00, BgL_expz00_3,
															BGl_findzd2locationzf2locz20zztools_locationz00
															(BgL_expz00_3, BgL_locz00_5));
													}
											}
										else
											{	/* Ast/apply.scm 32 */
												goto BgL_tagzd2102zd2_1357;
											}
									}
								else
									{	/* Ast/apply.scm 32 */
										goto BgL_tagzd2102zd2_1357;
									}
							}
						else
							{	/* Ast/apply.scm 32 */
								goto BgL_tagzd2102zd2_1357;
							}
					}
				else
					{	/* Ast/apply.scm 32 */
						goto BgL_tagzd2102zd2_1357;
					}
			}
		}

	}



/* &applycation->node */
	BgL_nodez00_bglt BGl_z62applycationzd2ze3nodez53zzast_applyz00(obj_t
		BgL_envz00_2022, obj_t BgL_expz00_2023, obj_t BgL_stackz00_2024,
		obj_t BgL_locz00_2025, obj_t BgL_sitez00_2026)
	{
		{	/* Ast/apply.scm 31 */
			return
				BGl_applycationzd2ze3nodez31zzast_applyz00(BgL_expz00_2023,
				BgL_stackz00_2024, BgL_locz00_2025, BgL_sitez00_2026);
		}

	}



/* known-app-ly->node */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_knownzd2appzd2lyzd2ze3nodez31zzast_applyz00(obj_t BgL_stackz00_10,
		obj_t BgL_locz00_11, BgL_nodez00_bglt BgL_procz00_12,
		BgL_nodez00_bglt BgL_argz00_13, obj_t BgL_sitez00_14)
	{
		{	/* Ast/apply.scm 107 */
			{	/* Ast/apply.scm 108 */
				BgL_valuez00_bglt BgL_funz00_1408;

				BgL_funz00_1408 =
					(((BgL_variablez00_bglt) COBJECT(
							(((BgL_varz00_bglt) COBJECT(
										((BgL_varz00_bglt) BgL_procz00_12)))->BgL_variablez00)))->
					BgL_valuez00);
				{	/* Ast/apply.scm 108 */
					long BgL_arityz00_1409;

					BgL_arityz00_1409 =
						(((BgL_funz00_bglt) COBJECT(
								((BgL_funz00_bglt) BgL_funz00_1408)))->BgL_arityz00);
					{	/* Ast/apply.scm 109 */
						obj_t BgL_framez00_1410;

						BgL_framez00_1410 =
							BGl_makezd2funzd2framez00zzast_applyz00(
							((BgL_funz00_bglt) BgL_funz00_1408));
						{	/* Ast/apply.scm 110 */

							if ((BgL_arityz00_1409 > ((long) 0)))
								{	/* Ast/apply.scm 115 */
									return
										((BgL_nodez00_bglt)
										BGl_fxzd2knownzd2appzd2lyzd2ze3nodeze3zzast_applyz00
										(BgL_stackz00_10, BgL_locz00_11, BgL_procz00_12,
											BgL_argz00_13, BgL_framez00_1410, BgL_sitez00_14));
								}
							else
								{	/* Ast/apply.scm 115 */
									if ((BgL_arityz00_1409 == ((long) 0)))
										{	/* Ast/apply.scm 126 */
											obj_t BgL_arg1316z00_1840;

											{	/* Ast/apply.scm 126 */
												obj_t BgL_list1317z00_1841;

												BgL_list1317z00_1841 =
													MAKE_YOUNG_PAIR(((obj_t) BgL_procz00_12), BNIL);
												BgL_arg1316z00_1840 = BgL_list1317z00_1841;
											}
											return
												BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_arg1316z00_1840,
												BgL_stackz00_10, BgL_locz00_11, BgL_sitez00_14);
										}
									else
										{	/* Ast/apply.scm 117 */
											return
												((BgL_nodez00_bglt)
												BGl_vazd2knownzd2appzd2lyzd2ze3nodeze3zzast_applyz00
												(BgL_stackz00_10, BgL_locz00_11, BgL_procz00_12,
													BgL_argz00_13, BgL_framez00_1410, BgL_sitez00_14));
										}
								}
						}
					}
				}
			}
		}

	}



/* &known-app-ly->node */
	BgL_nodez00_bglt BGl_z62knownzd2appzd2lyzd2ze3nodez53zzast_applyz00(obj_t
		BgL_envz00_2027, obj_t BgL_stackz00_2028, obj_t BgL_locz00_2029,
		obj_t BgL_procz00_2030, obj_t BgL_argz00_2031, obj_t BgL_sitez00_2032)
	{
		{	/* Ast/apply.scm 107 */
			return
				BGl_knownzd2appzd2lyzd2ze3nodez31zzast_applyz00(BgL_stackz00_2028,
				BgL_locz00_2029, ((BgL_nodez00_bglt) BgL_procz00_2030),
				((BgL_nodez00_bglt) BgL_argz00_2031), BgL_sitez00_2032);
		}

	}



/* fx-known-app-ly->node */
	BgL_letzd2varzd2_bglt
		BGl_fxzd2knownzd2appzd2lyzd2ze3nodeze3zzast_applyz00(obj_t BgL_stackz00_21,
		obj_t BgL_locz00_22, BgL_nodez00_bglt BgL_procz00_23,
		BgL_nodez00_bglt BgL_argz00_24, obj_t BgL_framez00_25, obj_t BgL_sitez00_26)
	{
		{	/* Ast/apply.scm 147 */
			{	/* Ast/apply.scm 148 */
				BgL_localz00_bglt BgL_runnerz00_1416;
				BgL_typez00_bglt BgL_typez00_1417;

				{	/* Ast/apply.scm 148 */
					obj_t BgL_arg1497z00_1508;

					BgL_arg1497z00_1508 =
						BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
						(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 2))));
					BgL_runnerz00_1416 =
						BGl_makezd2localzd2svarz00zzast_localz00(BgL_arg1497z00_1508,
						((BgL_typez00_bglt) BGl_za2_za2z00zztype_cachez00));
				}
				BgL_typez00_1417 =
					(((BgL_nodez00_bglt) COBJECT(BgL_procz00_23))->BgL_typez00);
				{	/* Ast/apply.scm 151 */
					obj_t BgL_vz00_1848;

					BgL_vz00_1848 = CNST_TABLE_REF(((long) 3));
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_runnerz00_1416)))->
							BgL_accessz00) = ((obj_t) BgL_vz00_1848), BUNSPEC);
				}
				{	/* Ast/apply.scm 152 */
					BgL_letzd2varzd2_bglt BgL_new1109z00_1418;

					{	/* Ast/apply.scm 153 */
						BgL_letzd2varzd2_bglt BgL_new1108z00_1506;

						BgL_new1108z00_1506 =
							((BgL_letzd2varzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_letzd2varzd2_bgl))));
						{	/* Ast/apply.scm 153 */
							long BgL_arg1495z00_1507;

							{	/* Ast/apply.scm 153 */
								long BgL_res1853z00_1850;

								BgL_res1853z00_1850 =
									BGL_CLASS_INDEX(BGl_letzd2varzd2zzast_nodez00);
								BgL_arg1495z00_1507 = BgL_res1853z00_1850;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1108z00_1506),
								BgL_arg1495z00_1507);
						}
						{	/* Ast/apply.scm 153 */
							BgL_objectz00_bglt BgL_tmpz00_2239;

							BgL_tmpz00_2239 = ((BgL_objectz00_bglt) BgL_new1108z00_1506);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2239, BFALSE);
						}
						((BgL_objectz00_bglt) BgL_new1108z00_1506);
						BgL_new1109z00_1418 = BgL_new1108z00_1506;
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt) BgL_new1109z00_1418)))->BgL_locz00) =
						((obj_t) BgL_locz00_22), BUNSPEC);
					((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
										BgL_new1109z00_1418)))->BgL_typez00) =
						((BgL_typez00_bglt)
							BGl_strictzd2nodezd2typez00zzast_nodez00(((BgL_typez00_bglt)
									BGl_za2_za2z00zztype_cachez00), BgL_typez00_1417)), BUNSPEC);
					((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
										BgL_new1109z00_1418)))->BgL_sidezd2effectzd2) =
						((obj_t) BUNSPEC), BUNSPEC);
					((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
										BgL_new1109z00_1418)))->BgL_keyz00) =
						((obj_t) BINT(((long) -1))), BUNSPEC);
					{
						obj_t BgL_auxz00_2254;

						{	/* Ast/apply.scm 155 */
							obj_t BgL_arg1319z00_1419;

							BgL_arg1319z00_1419 =
								MAKE_YOUNG_PAIR(
								((obj_t) BgL_runnerz00_1416), ((obj_t) BgL_argz00_24));
							{	/* Ast/apply.scm 155 */
								obj_t BgL_list1320z00_1420;

								BgL_list1320z00_1420 =
									MAKE_YOUNG_PAIR(BgL_arg1319z00_1419, BNIL);
								BgL_auxz00_2254 = BgL_list1320z00_1420;
						}}
						((((BgL_letzd2varzd2_bglt) COBJECT(BgL_new1109z00_1418))->
								BgL_bindingsz00) = ((obj_t) BgL_auxz00_2254), BUNSPEC);
					}
					((((BgL_letzd2varzd2_bglt) COBJECT(BgL_new1109z00_1418))->
							BgL_bodyz00) =
						((BgL_nodez00_bglt) BGl_loopze71ze7zzast_applyz00(BgL_sitez00_26,
								BgL_procz00_23, BgL_framez00_25, BgL_stackz00_21,
								BgL_runnerz00_1416, BgL_typez00_1417, BgL_locz00_22,
								BgL_framez00_25)), BUNSPEC);
					((((BgL_letzd2varzd2_bglt) COBJECT(BgL_new1109z00_1418))->
							BgL_removablezf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
					return BgL_new1109z00_1418;
				}
			}
		}

	}



/* loop~1 */
	BgL_nodez00_bglt BGl_loopze71ze7zzast_applyz00(obj_t BgL_sitez00_2058,
		BgL_nodez00_bglt BgL_procz00_2057, obj_t BgL_framez00_2056,
		obj_t BgL_stackz00_2055, BgL_localz00_bglt BgL_runnerz00_2054,
		BgL_typez00_bglt BgL_typez00_2053, obj_t BgL_locz00_2052,
		obj_t BgL_localsz00_1422)
	{
		{	/* Ast/apply.scm 156 */
			if (NULLP(BgL_localsz00_1422))
				{	/* Ast/apply.scm 158 */
					BgL_nodez00_bglt BgL_appz00_1425;

					{	/* Ast/apply.scm 160 */
						obj_t BgL_arg1351z00_1447;

						{	/* Ast/apply.scm 160 */
							obj_t BgL_arg1352z00_1448;

							{	/* Ast/apply.scm 160 */
								obj_t BgL_arg1357z00_1449;

								if (NULLP(BgL_framez00_2056))
									{	/* Ast/apply.scm 160 */
										BgL_arg1357z00_1449 = BNIL;
									}
								else
									{	/* Ast/apply.scm 160 */
										obj_t BgL_head1258z00_1452;

										{	/* Ast/apply.scm 160 */
											obj_t BgL_res1857z00_1857;

											BgL_res1857z00_1857 = MAKE_YOUNG_PAIR(BNIL, BNIL);
											BgL_head1258z00_1452 = BgL_res1857z00_1857;
										}
										{
											obj_t BgL_l1256z00_1454;
											obj_t BgL_tail1259z00_1455;

											BgL_l1256z00_1454 = BgL_framez00_2056;
											BgL_tail1259z00_1455 = BgL_head1258z00_1452;
										BgL_zc3z04anonymousza31360ze3z87_1456:
											if (NULLP(BgL_l1256z00_1454))
												{	/* Ast/apply.scm 160 */
													BgL_arg1357z00_1449 = CDR(BgL_head1258z00_1452);
												}
											else
												{	/* Ast/apply.scm 160 */
													obj_t BgL_newtail1260z00_1458;

													{	/* Ast/apply.scm 160 */
														BgL_varz00_bglt BgL_arg1364z00_1460;

														{	/* Ast/apply.scm 160 */
															obj_t BgL_localz00_1461;

															BgL_localz00_1461 =
																CAR(((obj_t) BgL_l1256z00_1454));
															{	/* Ast/apply.scm 161 */
																BgL_varz00_bglt BgL_new1111z00_1462;

																{	/* Ast/apply.scm 164 */
																	BgL_varz00_bglt BgL_new1110z00_1464;

																	BgL_new1110z00_1464 =
																		((BgL_varz00_bglt)
																		BOBJECT(GC_MALLOC(sizeof(struct
																					BgL_varz00_bgl))));
																	{	/* Ast/apply.scm 164 */
																		long BgL_arg1370z00_1465;

																		{	/* Ast/apply.scm 164 */
																			long BgL_res1859z00_1862;

																			BgL_res1859z00_1862 =
																				BGL_CLASS_INDEX
																				(BGl_varz00zzast_nodez00);
																			BgL_arg1370z00_1465 = BgL_res1859z00_1862;
																		}
																		BGL_OBJECT_CLASS_NUM_SET(
																			((BgL_objectz00_bglt)
																				BgL_new1110z00_1464),
																			BgL_arg1370z00_1465);
																	}
																	BgL_new1111z00_1462 = BgL_new1110z00_1464;
																}
																((((BgL_nodez00_bglt) COBJECT(
																				((BgL_nodez00_bglt)
																					BgL_new1111z00_1462)))->BgL_locz00) =
																	((obj_t) BgL_locz00_2052), BUNSPEC);
																{
																	BgL_typez00_bglt BgL_auxz00_2279;

																	{	/* Ast/apply.scm 163 */
																		BgL_typez00_bglt BgL_arg1367z00_1463;

																		BgL_arg1367z00_1463 =
																			(((BgL_variablez00_bglt) COBJECT(
																					((BgL_variablez00_bglt)
																						((BgL_localz00_bglt)
																							BgL_localz00_1461))))->
																			BgL_typez00);
																		BgL_auxz00_2279 =
																			BGl_strictzd2nodezd2typez00zzast_nodez00((
																				(BgL_typez00_bglt)
																				BGl_za2_za2z00zztype_cachez00),
																			BgL_arg1367z00_1463);
																	}
																	((((BgL_nodez00_bglt) COBJECT(
																					((BgL_nodez00_bglt)
																						BgL_new1111z00_1462)))->
																			BgL_typez00) =
																		((BgL_typez00_bglt) BgL_auxz00_2279),
																		BUNSPEC);
																}
																((((BgL_varz00_bglt)
																			COBJECT(BgL_new1111z00_1462))->
																		BgL_variablez00) =
																	((BgL_variablez00_bglt) (
																			(BgL_variablez00_bglt)
																			BgL_localz00_1461)), BUNSPEC);
																BgL_arg1364z00_1460 = BgL_new1111z00_1462;
														}}
														{	/* Ast/apply.scm 160 */
															obj_t BgL_res1860z00_1866;

															BgL_res1860z00_1866 =
																MAKE_YOUNG_PAIR(
																((obj_t) BgL_arg1364z00_1460), BNIL);
															BgL_newtail1260z00_1458 = BgL_res1860z00_1866;
													}}
													SET_CDR(BgL_tail1259z00_1455,
														BgL_newtail1260z00_1458);
													{	/* Ast/apply.scm 160 */
														obj_t BgL_arg1363z00_1459;

														BgL_arg1363z00_1459 =
															CDR(((obj_t) BgL_l1256z00_1454));
														{
															obj_t BgL_tail1259z00_2295;
															obj_t BgL_l1256z00_2294;

															BgL_l1256z00_2294 = BgL_arg1363z00_1459;
															BgL_tail1259z00_2295 = BgL_newtail1260z00_1458;
															BgL_tail1259z00_1455 = BgL_tail1259z00_2295;
															BgL_l1256z00_1454 = BgL_l1256z00_2294;
															goto BgL_zc3z04anonymousza31360ze3z87_1456;
														}
													}
												}
										}
									}
								BgL_arg1352z00_1448 =
									BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg1357z00_1449, BNIL);
							}
							BgL_arg1351z00_1447 =
								MAKE_YOUNG_PAIR(
								((obj_t) BgL_procz00_2057), BgL_arg1352z00_1448);
						}
						BgL_appz00_1425 =
							BGl_applicationzd2ze3nodez31zzast_appz00(BgL_arg1351z00_1447,
							BgL_stackz00_2055, BgL_locz00_2052, CNST_TABLE_REF(((long) 1)));
					}
					if (CBOOL(BGl_za2unsafezd2arityza2zd2zzengine_paramz00))
						{	/* Ast/apply.scm 169 */
							return BgL_appz00_1425;
						}
					else
						{	/* Ast/apply.scm 173 */
							obj_t BgL_arg1324z00_1426;

							{	/* Ast/apply.scm 173 */
								obj_t BgL_arg1325z00_1427;

								{	/* Ast/apply.scm 173 */
									obj_t BgL_arg1326z00_1428;
									obj_t BgL_arg1327z00_1429;

									{	/* Ast/apply.scm 173 */
										obj_t BgL_arg1328z00_1430;

										{	/* Ast/apply.scm 173 */
											obj_t BgL_arg1329z00_1431;

											{	/* Ast/apply.scm 173 */
												obj_t BgL_arg1330z00_1432;

												{	/* Ast/apply.scm 173 */
													BgL_varz00_bglt BgL_arg1331z00_1433;

													{	/* Ast/apply.scm 173 */
														BgL_varz00_bglt BgL_new1113z00_1434;

														{	/* Ast/apply.scm 176 */
															BgL_varz00_bglt BgL_new1112z00_1436;

															BgL_new1112z00_1436 =
																((BgL_varz00_bglt)
																BOBJECT(GC_MALLOC(sizeof(struct
																			BgL_varz00_bgl))));
															{	/* Ast/apply.scm 176 */
																long BgL_arg1335z00_1437;

																{	/* Ast/apply.scm 176 */
																	long BgL_res1861z00_1870;

																	BgL_res1861z00_1870 =
																		BGL_CLASS_INDEX(BGl_varz00zzast_nodez00);
																	BgL_arg1335z00_1437 = BgL_res1861z00_1870;
																}
																BGL_OBJECT_CLASS_NUM_SET(
																	((BgL_objectz00_bglt) BgL_new1112z00_1436),
																	BgL_arg1335z00_1437);
															}
															BgL_new1113z00_1434 = BgL_new1112z00_1436;
														}
														((((BgL_nodez00_bglt) COBJECT(
																		((BgL_nodez00_bglt) BgL_new1113z00_1434)))->
																BgL_locz00) =
															((obj_t) BgL_locz00_2052), BUNSPEC);
														{
															BgL_typez00_bglt BgL_auxz00_2309;

															{	/* Ast/apply.scm 175 */
																BgL_typez00_bglt BgL_arg1334z00_1435;

																BgL_arg1334z00_1435 =
																	(((BgL_variablez00_bglt) COBJECT(
																			((BgL_variablez00_bglt)
																				BgL_runnerz00_2054)))->BgL_typez00);
																BgL_auxz00_2309 =
																	BGl_strictzd2nodezd2typez00zzast_nodez00((
																		(BgL_typez00_bglt)
																		BGl_za2_za2z00zztype_cachez00),
																	BgL_arg1334z00_1435);
															}
															((((BgL_nodez00_bglt) COBJECT(
																			((BgL_nodez00_bglt)
																				BgL_new1113z00_1434)))->BgL_typez00) =
																((BgL_typez00_bglt) BgL_auxz00_2309), BUNSPEC);
														}
														((((BgL_varz00_bglt) COBJECT(BgL_new1113z00_1434))->
																BgL_variablez00) =
															((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
																	BgL_runnerz00_2054)), BUNSPEC);
														BgL_arg1331z00_1433 = BgL_new1113z00_1434;
													}
													BgL_arg1330z00_1432 =
														MAKE_YOUNG_PAIR(
														((obj_t) BgL_arg1331z00_1433), BNIL);
												}
												BgL_arg1329z00_1431 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 4)),
													BgL_arg1330z00_1432);
											}
											BgL_arg1328z00_1430 =
												MAKE_YOUNG_PAIR(BgL_arg1329z00_1431, BNIL);
										}
										BgL_arg1326z00_1428 =
											MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 5)),
											BgL_arg1328z00_1430);
									}
									{	/* Ast/apply.scm 180 */
										obj_t BgL_arg1337z00_1438;

										{	/* Ast/apply.scm 180 */
											obj_t BgL_arg1338z00_1439;

											{	/* Ast/apply.scm 180 */
												obj_t BgL_arg1339z00_1440;

												{	/* Ast/apply.scm 180 */
													obj_t BgL_arg1340z00_1441;

													{	/* Ast/apply.scm 180 */
														obj_t BgL_arg1344z00_1442;

														{	/* Ast/apply.scm 180 */
															obj_t BgL_arg1345z00_1443;

															{	/* Ast/apply.scm 180 */
																obj_t BgL_arg1346z00_1444;

																{	/* Ast/apply.scm 180 */
																	obj_t BgL_arg1347z00_1445;

																	{	/* Ast/apply.scm 180 */
																		BgL_variablez00_bglt BgL_arg1348z00_1446;

																		BgL_arg1348z00_1446 =
																			(((BgL_varz00_bglt) COBJECT(
																					((BgL_varz00_bglt)
																						BgL_procz00_2057)))->
																			BgL_variablez00);
																		BgL_arg1347z00_1445 =
																			BGl_shapez00zztools_shapez00(((obj_t)
																				BgL_arg1348z00_1446));
																	}
																	BgL_arg1346z00_1444 =
																		MAKE_YOUNG_PAIR(BgL_arg1347z00_1445, BNIL);
																}
																BgL_arg1345z00_1443 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 6)),
																	BgL_arg1346z00_1444);
															}
															BgL_arg1344z00_1442 =
																MAKE_YOUNG_PAIR(BgL_arg1345z00_1443, BNIL);
														}
														BgL_arg1340z00_1441 =
															MAKE_YOUNG_PAIR(BGl_string1905z00zzast_applyz00,
															BgL_arg1344z00_1442);
													}
													BgL_arg1339z00_1440 =
														MAKE_YOUNG_PAIR(BGl_string1906z00zzast_applyz00,
														BgL_arg1340z00_1441);
												}
												BgL_arg1338z00_1439 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 7)),
													BgL_arg1339z00_1440);
											}
											BgL_arg1337z00_1438 =
												MAKE_YOUNG_PAIR(BgL_arg1338z00_1439, BNIL);
										}
										BgL_arg1327z00_1429 =
											MAKE_YOUNG_PAIR(
											((obj_t) BgL_appz00_1425), BgL_arg1337z00_1438);
									}
									BgL_arg1325z00_1427 =
										MAKE_YOUNG_PAIR(BgL_arg1326z00_1428, BgL_arg1327z00_1429);
								}
								BgL_arg1324z00_1426 =
									MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 8)),
									BgL_arg1325z00_1427);
							}
							return
								BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_arg1324z00_1426,
								BgL_stackz00_2055, BgL_locz00_2052, BgL_sitez00_2058);
						}
				}
			else
				{	/* Ast/apply.scm 184 */
					BgL_letzd2varzd2_bglt BgL_new1116z00_1467;

					{	/* Ast/apply.scm 185 */
						BgL_letzd2varzd2_bglt BgL_new1114z00_1503;

						BgL_new1114z00_1503 =
							((BgL_letzd2varzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_letzd2varzd2_bgl))));
						{	/* Ast/apply.scm 185 */
							long BgL_arg1493z00_1504;

							{	/* Ast/apply.scm 185 */
								long BgL_res1862z00_1876;

								BgL_res1862z00_1876 =
									BGL_CLASS_INDEX(BGl_letzd2varzd2zzast_nodez00);
								BgL_arg1493z00_1504 = BgL_res1862z00_1876;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1114z00_1503),
								BgL_arg1493z00_1504);
						}
						{	/* Ast/apply.scm 185 */
							BgL_objectz00_bglt BgL_tmpz00_2348;

							BgL_tmpz00_2348 = ((BgL_objectz00_bglt) BgL_new1114z00_1503);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2348, BFALSE);
						}
						((BgL_objectz00_bglt) BgL_new1114z00_1503);
						BgL_new1116z00_1467 = BgL_new1114z00_1503;
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt) BgL_new1116z00_1467)))->BgL_locz00) =
						((obj_t) BgL_locz00_2052), BUNSPEC);
					((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
										BgL_new1116z00_1467)))->BgL_typez00) =
						((BgL_typez00_bglt)
							BGl_strictzd2nodezd2typez00zzast_nodez00(((BgL_typez00_bglt)
									BGl_za2_za2z00zztype_cachez00), BgL_typez00_2053)), BUNSPEC);
					((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
										BgL_new1116z00_1467)))->BgL_sidezd2effectzd2) =
						((obj_t) BUNSPEC), BUNSPEC);
					((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
										BgL_new1116z00_1467)))->BgL_keyz00) =
						((obj_t) BINT(((long) -1))), BUNSPEC);
					{
						obj_t BgL_auxz00_2363;

						{	/* Ast/apply.scm 188 */
							obj_t BgL_arg1371z00_1468;

							{	/* Ast/apply.scm 188 */
								obj_t BgL_arg1381z00_1470;
								BgL_nodez00_bglt BgL_arg1382z00_1471;

								BgL_arg1381z00_1470 = CAR(((obj_t) BgL_localsz00_1422));
								{	/* Ast/apply.scm 191 */
									obj_t BgL_arg1383z00_1472;

									{	/* Ast/apply.scm 191 */
										obj_t BgL_arg1384z00_1473;

										{	/* Ast/apply.scm 191 */
											BgL_varz00_bglt BgL_arg1385z00_1474;

											{	/* Ast/apply.scm 191 */
												BgL_varz00_bglt BgL_new1118z00_1475;

												{	/* Ast/apply.scm 194 */
													BgL_varz00_bglt BgL_new1117z00_1477;

													BgL_new1117z00_1477 =
														((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
																	BgL_varz00_bgl))));
													{	/* Ast/apply.scm 194 */
														long BgL_arg1387z00_1478;

														{	/* Ast/apply.scm 194 */
															long BgL_res1863z00_1882;

															{	/* Ast/apply.scm 194 */
																obj_t BgL_classz00_1881;

																BgL_classz00_1881 = BGl_varz00zzast_nodez00;
																BgL_res1863z00_1882 =
																	BGL_CLASS_INDEX(BgL_classz00_1881);
															}
															BgL_arg1387z00_1478 = BgL_res1863z00_1882;
														}
														BGL_OBJECT_CLASS_NUM_SET(
															((BgL_objectz00_bglt) BgL_new1117z00_1477),
															BgL_arg1387z00_1478);
													}
													BgL_new1118z00_1475 = BgL_new1117z00_1477;
												}
												((((BgL_nodez00_bglt) COBJECT(
																((BgL_nodez00_bglt) BgL_new1118z00_1475)))->
														BgL_locz00) = ((obj_t) BgL_locz00_2052), BUNSPEC);
												{
													BgL_typez00_bglt BgL_auxz00_2372;

													{	/* Ast/apply.scm 193 */
														BgL_typez00_bglt BgL_arg1386z00_1476;

														BgL_arg1386z00_1476 =
															(((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt)
																		BgL_runnerz00_2054)))->BgL_typez00);
														BgL_auxz00_2372 =
															BGl_strictzd2nodezd2typez00zzast_nodez00((
																(BgL_typez00_bglt)
																BGl_za2_za2z00zztype_cachez00),
															BgL_arg1386z00_1476);
													}
													((((BgL_nodez00_bglt) COBJECT(
																	((BgL_nodez00_bglt) BgL_new1118z00_1475)))->
															BgL_typez00) =
														((BgL_typez00_bglt) BgL_auxz00_2372), BUNSPEC);
												}
												((((BgL_varz00_bglt) COBJECT(BgL_new1118z00_1475))->
														BgL_variablez00) =
													((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
															BgL_runnerz00_2054)), BUNSPEC);
												BgL_arg1385z00_1474 = BgL_new1118z00_1475;
											}
											BgL_arg1384z00_1473 =
												MAKE_YOUNG_PAIR(((obj_t) BgL_arg1385z00_1474), BNIL);
										}
										BgL_arg1383z00_1472 =
											MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 9)),
											BgL_arg1384z00_1473);
									}
									BgL_arg1382z00_1471 =
										BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_arg1383z00_1472,
										BgL_stackz00_2055, BgL_locz00_2052,
										CNST_TABLE_REF(((long) 1)));
								}
								BgL_arg1371z00_1468 =
									MAKE_YOUNG_PAIR(BgL_arg1381z00_1470,
									((obj_t) BgL_arg1382z00_1471));
							}
							{	/* Ast/apply.scm 187 */
								obj_t BgL_list1372z00_1469;

								BgL_list1372z00_1469 =
									MAKE_YOUNG_PAIR(BgL_arg1371z00_1468, BNIL);
								BgL_auxz00_2363 = BgL_list1372z00_1469;
						}}
						((((BgL_letzd2varzd2_bglt) COBJECT(BgL_new1116z00_1467))->
								BgL_bindingsz00) = ((obj_t) BgL_auxz00_2363), BUNSPEC);
					}
					{
						BgL_nodez00_bglt BgL_auxz00_2391;

						if (NULLP(CDR(((obj_t) BgL_localsz00_1422))))
							{	/* Ast/apply.scm 199 */
								obj_t BgL_arg1394z00_1481;

								BgL_arg1394z00_1481 = CDR(((obj_t) BgL_localsz00_1422));
								BgL_auxz00_2391 =
									BGl_loopze71ze7zzast_applyz00(BgL_sitez00_2058,
									BgL_procz00_2057, BgL_framez00_2056, BgL_stackz00_2055,
									BgL_runnerz00_2054, BgL_typez00_2053, BgL_locz00_2052,
									BgL_arg1394z00_1481);
							}
						else
							{	/* Ast/apply.scm 202 */
								obj_t BgL_arg1396z00_1482;

								{	/* Ast/apply.scm 202 */
									obj_t BgL_arg1417z00_1483;

									{	/* Ast/apply.scm 202 */
										obj_t BgL_arg1418z00_1484;
										obj_t BgL_arg1421z00_1485;

										{	/* Ast/apply.scm 202 */
											obj_t BgL_arg1422z00_1486;

											{	/* Ast/apply.scm 202 */
												BgL_varz00_bglt BgL_arg1441z00_1487;
												obj_t BgL_arg1442z00_1488;

												{	/* Ast/apply.scm 202 */
													BgL_varz00_bglt BgL_new1120z00_1489;

													{	/* Ast/apply.scm 205 */
														BgL_varz00_bglt BgL_new1119z00_1491;

														BgL_new1119z00_1491 =
															((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
																		BgL_varz00_bgl))));
														{	/* Ast/apply.scm 205 */
															long BgL_arg1449z00_1492;

															{	/* Ast/apply.scm 205 */
																long BgL_res1866z00_1891;

																{	/* Ast/apply.scm 205 */
																	obj_t BgL_classz00_1890;

																	BgL_classz00_1890 = BGl_varz00zzast_nodez00;
																	BgL_res1866z00_1891 =
																		BGL_CLASS_INDEX(BgL_classz00_1890);
																}
																BgL_arg1449z00_1492 = BgL_res1866z00_1891;
															}
															BGL_OBJECT_CLASS_NUM_SET(
																((BgL_objectz00_bglt) BgL_new1119z00_1491),
																BgL_arg1449z00_1492);
														}
														BgL_new1120z00_1489 = BgL_new1119z00_1491;
													}
													((((BgL_nodez00_bglt) COBJECT(
																	((BgL_nodez00_bglt) BgL_new1120z00_1489)))->
															BgL_locz00) = ((obj_t) BgL_locz00_2052), BUNSPEC);
													{
														BgL_typez00_bglt BgL_auxz00_2405;

														{	/* Ast/apply.scm 204 */
															BgL_typez00_bglt BgL_arg1448z00_1490;

															BgL_arg1448z00_1490 =
																(((BgL_variablez00_bglt) COBJECT(
																		((BgL_variablez00_bglt)
																			BgL_runnerz00_2054)))->BgL_typez00);
															BgL_auxz00_2405 =
																BGl_strictzd2nodezd2typez00zzast_nodez00((
																	(BgL_typez00_bglt)
																	BGl_za2_za2z00zztype_cachez00),
																BgL_arg1448z00_1490);
														}
														((((BgL_nodez00_bglt) COBJECT(
																		((BgL_nodez00_bglt) BgL_new1120z00_1489)))->
																BgL_typez00) =
															((BgL_typez00_bglt) BgL_auxz00_2405), BUNSPEC);
													}
													((((BgL_varz00_bglt) COBJECT(BgL_new1120z00_1489))->
															BgL_variablez00) =
														((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
																BgL_runnerz00_2054)), BUNSPEC);
													BgL_arg1441z00_1487 = BgL_new1120z00_1489;
												}
												{	/* Ast/apply.scm 207 */
													obj_t BgL_arg1461z00_1493;

													{	/* Ast/apply.scm 207 */
														obj_t BgL_arg1462z00_1494;

														{	/* Ast/apply.scm 207 */
															BgL_varz00_bglt BgL_arg1464z00_1495;

															{	/* Ast/apply.scm 207 */
																BgL_varz00_bglt BgL_new1122z00_1496;

																{	/* Ast/apply.scm 210 */
																	BgL_varz00_bglt BgL_new1121z00_1498;

																	BgL_new1121z00_1498 =
																		((BgL_varz00_bglt)
																		BOBJECT(GC_MALLOC(sizeof(struct
																					BgL_varz00_bgl))));
																	{	/* Ast/apply.scm 210 */
																		long BgL_arg1474z00_1499;

																		{	/* Ast/apply.scm 210 */
																			long BgL_res1867z00_1896;

																			{	/* Ast/apply.scm 210 */
																				obj_t BgL_classz00_1895;

																				BgL_classz00_1895 =
																					BGl_varz00zzast_nodez00;
																				BgL_res1867z00_1896 =
																					BGL_CLASS_INDEX(BgL_classz00_1895);
																			}
																			BgL_arg1474z00_1499 = BgL_res1867z00_1896;
																		}
																		BGL_OBJECT_CLASS_NUM_SET(
																			((BgL_objectz00_bglt)
																				BgL_new1121z00_1498),
																			BgL_arg1474z00_1499);
																	}
																	BgL_new1122z00_1496 = BgL_new1121z00_1498;
																}
																((((BgL_nodez00_bglt) COBJECT(
																				((BgL_nodez00_bglt)
																					BgL_new1122z00_1496)))->BgL_locz00) =
																	((obj_t) BgL_locz00_2052), BUNSPEC);
																{
																	BgL_typez00_bglt BgL_auxz00_2420;

																	{	/* Ast/apply.scm 209 */
																		BgL_typez00_bglt BgL_arg1465z00_1497;

																		BgL_arg1465z00_1497 =
																			(((BgL_variablez00_bglt) COBJECT(
																					((BgL_variablez00_bglt)
																						BgL_runnerz00_2054)))->BgL_typez00);
																		BgL_auxz00_2420 =
																			BGl_strictzd2nodezd2typez00zzast_nodez00((
																				(BgL_typez00_bglt)
																				BGl_za2_za2z00zztype_cachez00),
																			BgL_arg1465z00_1497);
																	}
																	((((BgL_nodez00_bglt) COBJECT(
																					((BgL_nodez00_bglt)
																						BgL_new1122z00_1496)))->
																			BgL_typez00) =
																		((BgL_typez00_bglt) BgL_auxz00_2420),
																		BUNSPEC);
																}
																((((BgL_varz00_bglt)
																			COBJECT(BgL_new1122z00_1496))->
																		BgL_variablez00) =
																	((BgL_variablez00_bglt) (
																			(BgL_variablez00_bglt)
																			BgL_runnerz00_2054)), BUNSPEC);
																BgL_arg1464z00_1495 = BgL_new1122z00_1496;
															}
															BgL_arg1462z00_1494 =
																MAKE_YOUNG_PAIR(
																((obj_t) BgL_arg1464z00_1495), BNIL);
														}
														BgL_arg1461z00_1493 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 4)),
															BgL_arg1462z00_1494);
													}
													BgL_arg1442z00_1488 =
														MAKE_YOUNG_PAIR(BgL_arg1461z00_1493, BNIL);
												}
												BgL_arg1422z00_1486 =
													MAKE_YOUNG_PAIR(
													((obj_t) BgL_arg1441z00_1487), BgL_arg1442z00_1488);
											}
											BgL_arg1418z00_1484 =
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 10)),
												BgL_arg1422z00_1486);
										}
										{	/* Ast/apply.scm 211 */
											BgL_nodez00_bglt BgL_arg1476z00_1500;

											{	/* Ast/apply.scm 211 */
												obj_t BgL_arg1477z00_1501;

												BgL_arg1477z00_1501 = CDR(((obj_t) BgL_localsz00_1422));
												BgL_arg1476z00_1500 =
													BGl_loopze71ze7zzast_applyz00(BgL_sitez00_2058,
													BgL_procz00_2057, BgL_framez00_2056,
													BgL_stackz00_2055, BgL_runnerz00_2054,
													BgL_typez00_2053, BgL_locz00_2052,
													BgL_arg1477z00_1501);
											}
											BgL_arg1421z00_1485 =
												MAKE_YOUNG_PAIR(((obj_t) BgL_arg1476z00_1500), BNIL);
										}
										BgL_arg1417z00_1483 =
											MAKE_YOUNG_PAIR(BgL_arg1418z00_1484, BgL_arg1421z00_1485);
									}
									BgL_arg1396z00_1482 =
										MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 11)),
										BgL_arg1417z00_1483);
								}
								BgL_auxz00_2391 =
									BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_arg1396z00_1482,
									BgL_stackz00_2055, BgL_locz00_2052,
									CNST_TABLE_REF(((long) 1)));
							}
						((((BgL_letzd2varzd2_bglt) COBJECT(BgL_new1116z00_1467))->
								BgL_bodyz00) = ((BgL_nodez00_bglt) BgL_auxz00_2391), BUNSPEC);
					}
					((((BgL_letzd2varzd2_bglt) COBJECT(BgL_new1116z00_1467))->
							BgL_removablezf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
					return ((BgL_nodez00_bglt) BgL_new1116z00_1467);
				}
		}

	}



/* va-known-app-ly->node */
	BgL_letzd2varzd2_bglt
		BGl_vazd2knownzd2appzd2lyzd2ze3nodeze3zzast_applyz00(obj_t BgL_stackz00_27,
		obj_t BgL_locz00_28, BgL_nodez00_bglt BgL_procz00_29,
		BgL_nodez00_bglt BgL_argz00_30, obj_t BgL_framez00_31, obj_t BgL_sitez00_32)
	{
		{	/* Ast/apply.scm 232 */
			{	/* Ast/apply.scm 233 */
				struct bgl_cell BgL_box1953_2051z00;
				obj_t BgL_framez00_2051;

				BgL_framez00_2051 =
					MAKE_CELL_STACK(BgL_framez00_31, BgL_box1953_2051z00);
				{	/* Ast/apply.scm 233 */
					BgL_localz00_bglt BgL_runnerz00_1510;
					BgL_typez00_bglt BgL_typez00_1511;

					{	/* Ast/apply.scm 233 */
						obj_t BgL_arg1652z00_1589;

						BgL_arg1652z00_1589 =
							BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
							(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 2))));
						BgL_runnerz00_1510 =
							BGl_makezd2localzd2svarz00zzast_localz00(BgL_arg1652z00_1589,
							((BgL_typez00_bglt) BGl_za2_za2z00zztype_cachez00));
					}
					{	/* Ast/apply.scm 234 */
						BgL_typez00_bglt BgL_arg1663z00_1591;

						BgL_arg1663z00_1591 =
							(((BgL_nodez00_bglt) COBJECT(BgL_procz00_29))->BgL_typez00);
						BgL_typez00_1511 =
							BGl_strictzd2nodezd2typez00zzast_nodez00(
							((BgL_typez00_bglt) BGl_za2_za2z00zztype_cachez00),
							BgL_arg1663z00_1591);
					}
					{	/* Ast/apply.scm 235 */
						bool_t BgL_test1954z00_2459;

						{	/* Ast/apply.scm 235 */
							obj_t BgL_objz00_1902;

							BgL_objz00_1902 = CELL_REF(BgL_framez00_2051);
							BgL_test1954z00_2459 = PAIRP(BgL_objz00_1902);
						}
						if (BgL_test1954z00_2459)
							{	/* Ast/apply.scm 236 */
								obj_t BgL_vz00_1905;

								BgL_vz00_1905 = CNST_TABLE_REF(((long) 3));
								((((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt) BgL_runnerz00_1510)))->
										BgL_accessz00) = ((obj_t) BgL_vz00_1905), BUNSPEC);
							}
						else
							{	/* Ast/apply.scm 235 */
								BFALSE;
							}
					}
					{	/* Ast/apply.scm 237 */
						BgL_letzd2varzd2_bglt BgL_new1125z00_1513;

						{	/* Ast/apply.scm 238 */
							BgL_letzd2varzd2_bglt BgL_new1123z00_1587;

							BgL_new1123z00_1587 =
								((BgL_letzd2varzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_letzd2varzd2_bgl))));
							{	/* Ast/apply.scm 238 */
								long BgL_arg1644z00_1588;

								{	/* Ast/apply.scm 238 */
									long BgL_res1869z00_1907;

									BgL_res1869z00_1907 =
										BGL_CLASS_INDEX(BGl_letzd2varzd2zzast_nodez00);
									BgL_arg1644z00_1588 = BgL_res1869z00_1907;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1123z00_1587),
									BgL_arg1644z00_1588);
							}
							{	/* Ast/apply.scm 238 */
								BgL_objectz00_bglt BgL_tmpz00_2468;

								BgL_tmpz00_2468 = ((BgL_objectz00_bglt) BgL_new1123z00_1587);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2468, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1123z00_1587);
							BgL_new1125z00_1513 = BgL_new1123z00_1587;
						}
						((((BgL_nodez00_bglt) COBJECT(
										((BgL_nodez00_bglt) BgL_new1125z00_1513)))->BgL_locz00) =
							((obj_t) BgL_locz00_28), BUNSPEC);
						((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
											BgL_new1125z00_1513)))->BgL_typez00) =
							((BgL_typez00_bglt)
								BGl_strictzd2nodezd2typez00zzast_nodez00(((BgL_typez00_bglt)
										BGl_za2_za2z00zztype_cachez00), BgL_typez00_1511)),
							BUNSPEC);
						((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
											BgL_new1125z00_1513)))->BgL_sidezd2effectzd2) =
							((obj_t) BUNSPEC), BUNSPEC);
						((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
											BgL_new1125z00_1513)))->BgL_keyz00) =
							((obj_t) BINT(((long) -1))), BUNSPEC);
						{
							obj_t BgL_auxz00_2483;

							{	/* Ast/apply.scm 240 */
								obj_t BgL_arg1521z00_1514;

								BgL_arg1521z00_1514 =
									MAKE_YOUNG_PAIR(
									((obj_t) BgL_runnerz00_1510), ((obj_t) BgL_argz00_30));
								{	/* Ast/apply.scm 240 */
									obj_t BgL_list1522z00_1515;

									BgL_list1522z00_1515 =
										MAKE_YOUNG_PAIR(BgL_arg1521z00_1514, BNIL);
									BgL_auxz00_2483 = BgL_list1522z00_1515;
							}}
							((((BgL_letzd2varzd2_bglt) COBJECT(BgL_new1125z00_1513))->
									BgL_bindingsz00) = ((obj_t) BgL_auxz00_2483), BUNSPEC);
						}
						((((BgL_letzd2varzd2_bglt) COBJECT(BgL_new1125z00_1513))->
								BgL_bodyz00) =
							((BgL_nodez00_bglt) ((BgL_nodez00_bglt)
									BGl_loopze70ze7zzast_applyz00(BgL_procz00_29,
										BgL_framez00_2051, BgL_stackz00_27, BgL_runnerz00_1510,
										BgL_typez00_1511, BgL_locz00_28,
										CELL_REF(BgL_framez00_2051), BNIL))), BUNSPEC);
						((((BgL_letzd2varzd2_bglt) COBJECT(BgL_new1125z00_1513))->
								BgL_removablezf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
						return BgL_new1125z00_1513;
					}
				}
			}
		}

	}



/* loop~0 */
	BgL_nodezf2effectzf2_bglt BGl_loopze70ze7zzast_applyz00(BgL_nodez00_bglt
		BgL_procz00_2049, obj_t BgL_framez00_2048, obj_t BgL_stackz00_2047,
		BgL_localz00_bglt BgL_runnerz00_2046, BgL_typez00_bglt BgL_typez00_2045,
		obj_t BgL_locz00_2044, obj_t BgL_localsz00_1518, obj_t BgL_oldz00_1519)
	{
		{	/* Ast/apply.scm 241 */
			if (NULLP(BgL_localsz00_1518))
				{	/* Ast/apply.scm 243 */
					if (NULLP(BgL_oldz00_1519))
						{	/* Ast/apply.scm 246 */
							obj_t BgL_auxz00_2050;

							{	/* Ast/apply.scm 246 */
								obj_t BgL_list1527z00_1523;

								BgL_list1527z00_1523 =
									MAKE_YOUNG_PAIR(((obj_t) BgL_runnerz00_2046), BNIL);
								BgL_auxz00_2050 = BgL_list1527z00_1523;
							}
							CELL_SET(BgL_framez00_2048, BgL_auxz00_2050);
						}
					else
						{	/* Ast/apply.scm 247 */
							obj_t BgL_arg1528z00_1524;

							BgL_arg1528z00_1524 =
								MAKE_YOUNG_PAIR(((obj_t) BgL_runnerz00_2046), BNIL);
							{	/* Ast/apply.scm 247 */
								obj_t BgL_tmpz00_2501;

								BgL_tmpz00_2501 = ((obj_t) BgL_oldz00_1519);
								SET_CDR(BgL_tmpz00_2501, BgL_arg1528z00_1524);
							}
						}
					{	/* Ast/apply.scm 248 */
						BgL_appz00_bglt BgL_new1130z00_1525;

						{	/* Ast/apply.scm 249 */
							BgL_appz00_bglt BgL_new1128z00_1550;

							BgL_new1128z00_1550 =
								((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							{	/* Ast/apply.scm 249 */
								long BgL_arg1565z00_1551;

								{	/* Ast/apply.scm 249 */
									long BgL_res1874z00_1917;

									BgL_res1874z00_1917 =
										BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
									BgL_arg1565z00_1551 = BgL_res1874z00_1917;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1128z00_1550),
									BgL_arg1565z00_1551);
							}
							{	/* Ast/apply.scm 249 */
								BgL_objectz00_bglt BgL_tmpz00_2508;

								BgL_tmpz00_2508 = ((BgL_objectz00_bglt) BgL_new1128z00_1550);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2508, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1128z00_1550);
							BgL_new1130z00_1525 = BgL_new1128z00_1550;
						}
						((((BgL_nodez00_bglt) COBJECT(
										((BgL_nodez00_bglt) BgL_new1130z00_1525)))->BgL_locz00) =
							((obj_t) BgL_locz00_2044), BUNSPEC);
						{
							BgL_typez00_bglt BgL_auxz00_2514;

							{	/* Ast/apply.scm 250 */
								BgL_typez00_bglt BgL_arg1536z00_1526;

								BgL_arg1536z00_1526 =
									(((BgL_variablez00_bglt) COBJECT(
											(((BgL_varz00_bglt) COBJECT(
														((BgL_varz00_bglt) BgL_procz00_2049)))->
												BgL_variablez00)))->BgL_typez00);
								BgL_auxz00_2514 =
									BGl_strictzd2nodezd2typez00zzast_nodez00(((BgL_typez00_bglt)
										BGl_za2_za2z00zztype_cachez00), BgL_arg1536z00_1526);
							}
							((((BgL_nodez00_bglt) COBJECT(
											((BgL_nodez00_bglt) BgL_new1130z00_1525)))->BgL_typez00) =
								((BgL_typez00_bglt) BgL_auxz00_2514), BUNSPEC);
						}
						((((BgL_nodezf2effectzf2_bglt) COBJECT(
										((BgL_nodezf2effectzf2_bglt) BgL_new1130z00_1525)))->
								BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
						((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
											BgL_new1130z00_1525)))->BgL_keyz00) =
							((obj_t) BINT(((long) -1))), BUNSPEC);
						{
							BgL_varz00_bglt BgL_auxz00_2527;

							{	/* Ast/apply.scm 251 */
								BgL_varz00_bglt BgL_new1131z00_1529;

								{	/* Ast/apply.scm 251 */
									BgL_varz00_bglt BgL_new1135z00_1531;

									BgL_new1135z00_1531 =
										((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
													BgL_varz00_bgl))));
									{	/* Ast/apply.scm 251 */
										long BgL_arg1540z00_1532;

										{	/* Ast/apply.scm 251 */
											long BgL_res1875z00_1924;

											{	/* Ast/apply.scm 251 */
												obj_t BgL_classz00_1923;

												BgL_classz00_1923 = BGl_varz00zzast_nodez00;
												BgL_res1875z00_1924 =
													BGL_CLASS_INDEX(BgL_classz00_1923);
											}
											BgL_arg1540z00_1532 = BgL_res1875z00_1924;
										}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt) BgL_new1135z00_1531),
											BgL_arg1540z00_1532);
									}
									BgL_new1131z00_1529 = BgL_new1135z00_1531;
								}
								((((BgL_nodez00_bglt) COBJECT(
												((BgL_nodez00_bglt) BgL_new1131z00_1529)))->
										BgL_locz00) =
									((obj_t) (((BgL_nodez00_bglt) COBJECT(BgL_procz00_2049))->
											BgL_locz00)), BUNSPEC);
								((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
													BgL_new1131z00_1529)))->BgL_typez00) =
									((BgL_typez00_bglt) (((BgL_nodez00_bglt)
												COBJECT(BgL_procz00_2049))->BgL_typez00)), BUNSPEC);
								((((BgL_varz00_bglt) COBJECT(BgL_new1131z00_1529))->
										BgL_variablez00) =
									((BgL_variablez00_bglt) (((BgL_varz00_bglt)
												COBJECT(((BgL_varz00_bglt) BgL_procz00_2049)))->
											BgL_variablez00)), BUNSPEC);
								BgL_auxz00_2527 = BgL_new1131z00_1529;
							}
							((((BgL_appz00_bglt) COBJECT(BgL_new1130z00_1525))->BgL_funz00) =
								((BgL_varz00_bglt) BgL_auxz00_2527), BUNSPEC);
						}
						{
							obj_t BgL_auxz00_2542;

							{	/* Ast/apply.scm 252 */
								obj_t BgL_l1261z00_1533;

								BgL_l1261z00_1533 = CELL_REF(BgL_framez00_2048);
								if (NULLP(BgL_l1261z00_1533))
									{	/* Ast/apply.scm 252 */
										BgL_auxz00_2542 = BNIL;
									}
								else
									{	/* Ast/apply.scm 252 */
										obj_t BgL_head1263z00_1535;

										{	/* Ast/apply.scm 252 */
											obj_t BgL_res1877z00_1928;

											BgL_res1877z00_1928 = MAKE_YOUNG_PAIR(BNIL, BNIL);
											BgL_head1263z00_1535 = BgL_res1877z00_1928;
										}
										{
											obj_t BgL_l1261z00_1537;
											obj_t BgL_tail1264z00_1538;

											BgL_l1261z00_1537 = BgL_l1261z00_1533;
											BgL_tail1264z00_1538 = BgL_head1263z00_1535;
										BgL_zc3z04anonymousza31542ze3z87_1539:
											if (NULLP(BgL_l1261z00_1537))
												{	/* Ast/apply.scm 252 */
													BgL_auxz00_2542 = CDR(BgL_head1263z00_1535);
												}
											else
												{	/* Ast/apply.scm 252 */
													obj_t BgL_newtail1265z00_1541;

													{	/* Ast/apply.scm 252 */
														BgL_varz00_bglt BgL_arg1558z00_1543;

														{	/* Ast/apply.scm 252 */
															obj_t BgL_localz00_1544;

															BgL_localz00_1544 =
																CAR(((obj_t) BgL_l1261z00_1537));
															{	/* Ast/apply.scm 253 */
																BgL_varz00_bglt BgL_new1137z00_1545;

																{	/* Ast/apply.scm 256 */
																	BgL_varz00_bglt BgL_new1136z00_1547;

																	BgL_new1136z00_1547 =
																		((BgL_varz00_bglt)
																		BOBJECT(GC_MALLOC(sizeof(struct
																					BgL_varz00_bgl))));
																	{	/* Ast/apply.scm 256 */
																		long BgL_arg1564z00_1548;

																		{	/* Ast/apply.scm 256 */
																			long BgL_res1879z00_1933;

																			{	/* Ast/apply.scm 256 */
																				obj_t BgL_classz00_1932;

																				BgL_classz00_1932 =
																					BGl_varz00zzast_nodez00;
																				BgL_res1879z00_1933 =
																					BGL_CLASS_INDEX(BgL_classz00_1932);
																			}
																			BgL_arg1564z00_1548 = BgL_res1879z00_1933;
																		}
																		BGL_OBJECT_CLASS_NUM_SET(
																			((BgL_objectz00_bglt)
																				BgL_new1136z00_1547),
																			BgL_arg1564z00_1548);
																	}
																	BgL_new1137z00_1545 = BgL_new1136z00_1547;
																}
																((((BgL_nodez00_bglt) COBJECT(
																				((BgL_nodez00_bglt)
																					BgL_new1137z00_1545)))->BgL_locz00) =
																	((obj_t) BgL_locz00_2044), BUNSPEC);
																{
																	BgL_typez00_bglt BgL_auxz00_2557;

																	{	/* Ast/apply.scm 255 */
																		BgL_typez00_bglt BgL_arg1561z00_1546;

																		BgL_arg1561z00_1546 =
																			(((BgL_variablez00_bglt) COBJECT(
																					((BgL_variablez00_bglt)
																						((BgL_localz00_bglt)
																							BgL_localz00_1544))))->
																			BgL_typez00);
																		BgL_auxz00_2557 =
																			BGl_strictzd2nodezd2typez00zzast_nodez00((
																				(BgL_typez00_bglt)
																				BGl_za2_za2z00zztype_cachez00),
																			BgL_arg1561z00_1546);
																	}
																	((((BgL_nodez00_bglt) COBJECT(
																					((BgL_nodez00_bglt)
																						BgL_new1137z00_1545)))->
																			BgL_typez00) =
																		((BgL_typez00_bglt) BgL_auxz00_2557),
																		BUNSPEC);
																}
																((((BgL_varz00_bglt)
																			COBJECT(BgL_new1137z00_1545))->
																		BgL_variablez00) =
																	((BgL_variablez00_bglt) (
																			(BgL_variablez00_bglt)
																			BgL_localz00_1544)), BUNSPEC);
																BgL_arg1558z00_1543 = BgL_new1137z00_1545;
														}}
														{	/* Ast/apply.scm 252 */
															obj_t BgL_res1880z00_1937;

															BgL_res1880z00_1937 =
																MAKE_YOUNG_PAIR(
																((obj_t) BgL_arg1558z00_1543), BNIL);
															BgL_newtail1265z00_1541 = BgL_res1880z00_1937;
													}}
													SET_CDR(BgL_tail1264z00_1538,
														BgL_newtail1265z00_1541);
													{	/* Ast/apply.scm 252 */
														obj_t BgL_arg1552z00_1542;

														BgL_arg1552z00_1542 =
															CDR(((obj_t) BgL_l1261z00_1537));
														{
															obj_t BgL_tail1264z00_2573;
															obj_t BgL_l1261z00_2572;

															BgL_l1261z00_2572 = BgL_arg1552z00_1542;
															BgL_tail1264z00_2573 = BgL_newtail1265z00_1541;
															BgL_tail1264z00_1538 = BgL_tail1264z00_2573;
															BgL_l1261z00_1537 = BgL_l1261z00_2572;
															goto BgL_zc3z04anonymousza31542ze3z87_1539;
														}
													}
												}
										}
									}
							}
							((((BgL_appz00_bglt) COBJECT(BgL_new1130z00_1525))->BgL_argsz00) =
								((obj_t) BgL_auxz00_2542), BUNSPEC);
						}
						((((BgL_appz00_bglt) COBJECT(BgL_new1130z00_1525))->
								BgL_stackablez00) = ((obj_t) BFALSE), BUNSPEC);
						return ((BgL_nodezf2effectzf2_bglt) BgL_new1130z00_1525);
					}
				}
			else
				{	/* Ast/apply.scm 258 */
					BgL_letzd2varzd2_bglt BgL_new1139z00_1552;

					{	/* Ast/apply.scm 259 */
						BgL_letzd2varzd2_bglt BgL_new1138z00_1584;

						BgL_new1138z00_1584 =
							((BgL_letzd2varzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_letzd2varzd2_bgl))));
						{	/* Ast/apply.scm 259 */
							long BgL_arg1641z00_1585;

							{	/* Ast/apply.scm 259 */
								long BgL_res1881z00_1941;

								BgL_res1881z00_1941 =
									BGL_CLASS_INDEX(BGl_letzd2varzd2zzast_nodez00);
								BgL_arg1641z00_1585 = BgL_res1881z00_1941;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1138z00_1584),
								BgL_arg1641z00_1585);
						}
						{	/* Ast/apply.scm 259 */
							BgL_objectz00_bglt BgL_tmpz00_2581;

							BgL_tmpz00_2581 = ((BgL_objectz00_bglt) BgL_new1138z00_1584);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2581, BFALSE);
						}
						((BgL_objectz00_bglt) BgL_new1138z00_1584);
						BgL_new1139z00_1552 = BgL_new1138z00_1584;
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt) BgL_new1139z00_1552)))->BgL_locz00) =
						((obj_t) BgL_locz00_2044), BUNSPEC);
					((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
										BgL_new1139z00_1552)))->BgL_typez00) =
						((BgL_typez00_bglt)
							BGl_strictzd2nodezd2typez00zzast_nodez00(((BgL_typez00_bglt)
									BGl_za2_za2z00zztype_cachez00), BgL_typez00_2045)), BUNSPEC);
					((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
										BgL_new1139z00_1552)))->BgL_sidezd2effectzd2) =
						((obj_t) BUNSPEC), BUNSPEC);
					((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
										BgL_new1139z00_1552)))->BgL_keyz00) =
						((obj_t) BINT(((long) -1))), BUNSPEC);
					{
						obj_t BgL_auxz00_2596;

						{	/* Ast/apply.scm 262 */
							obj_t BgL_arg1573z00_1553;

							{	/* Ast/apply.scm 262 */
								obj_t BgL_arg1575z00_1555;
								BgL_nodez00_bglt BgL_arg1578z00_1556;

								BgL_arg1575z00_1555 = CAR(((obj_t) BgL_localsz00_1518));
								{	/* Ast/apply.scm 265 */
									obj_t BgL_arg1582z00_1557;

									{	/* Ast/apply.scm 265 */
										obj_t BgL_arg1584z00_1558;

										{	/* Ast/apply.scm 265 */
											BgL_varz00_bglt BgL_arg1588z00_1559;

											{	/* Ast/apply.scm 265 */
												BgL_varz00_bglt BgL_new1141z00_1560;

												{	/* Ast/apply.scm 268 */
													BgL_varz00_bglt BgL_new1140z00_1562;

													BgL_new1140z00_1562 =
														((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
																	BgL_varz00_bgl))));
													{	/* Ast/apply.scm 268 */
														long BgL_arg1592z00_1563;

														{	/* Ast/apply.scm 268 */
															long BgL_res1882z00_1947;

															{	/* Ast/apply.scm 268 */
																obj_t BgL_classz00_1946;

																BgL_classz00_1946 = BGl_varz00zzast_nodez00;
																BgL_res1882z00_1947 =
																	BGL_CLASS_INDEX(BgL_classz00_1946);
															}
															BgL_arg1592z00_1563 = BgL_res1882z00_1947;
														}
														BGL_OBJECT_CLASS_NUM_SET(
															((BgL_objectz00_bglt) BgL_new1140z00_1562),
															BgL_arg1592z00_1563);
													}
													BgL_new1141z00_1560 = BgL_new1140z00_1562;
												}
												((((BgL_nodez00_bglt) COBJECT(
																((BgL_nodez00_bglt) BgL_new1141z00_1560)))->
														BgL_locz00) = ((obj_t) BgL_locz00_2044), BUNSPEC);
												{
													BgL_typez00_bglt BgL_auxz00_2605;

													{	/* Ast/apply.scm 267 */
														BgL_typez00_bglt BgL_arg1589z00_1561;

														BgL_arg1589z00_1561 =
															(((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt)
																		BgL_runnerz00_2046)))->BgL_typez00);
														BgL_auxz00_2605 =
															BGl_strictzd2nodezd2typez00zzast_nodez00((
																(BgL_typez00_bglt)
																BGl_za2_za2z00zztype_cachez00),
															BgL_arg1589z00_1561);
													}
													((((BgL_nodez00_bglt) COBJECT(
																	((BgL_nodez00_bglt) BgL_new1141z00_1560)))->
															BgL_typez00) =
														((BgL_typez00_bglt) BgL_auxz00_2605), BUNSPEC);
												}
												((((BgL_varz00_bglt) COBJECT(BgL_new1141z00_1560))->
														BgL_variablez00) =
													((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
															BgL_runnerz00_2046)), BUNSPEC);
												BgL_arg1588z00_1559 = BgL_new1141z00_1560;
											}
											BgL_arg1584z00_1558 =
												MAKE_YOUNG_PAIR(((obj_t) BgL_arg1588z00_1559), BNIL);
										}
										BgL_arg1582z00_1557 =
											MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 9)),
											BgL_arg1584z00_1558);
									}
									BgL_arg1578z00_1556 =
										BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_arg1582z00_1557,
										BgL_stackz00_2047, BgL_locz00_2044,
										CNST_TABLE_REF(((long) 1)));
								}
								BgL_arg1573z00_1553 =
									MAKE_YOUNG_PAIR(BgL_arg1575z00_1555,
									((obj_t) BgL_arg1578z00_1556));
							}
							{	/* Ast/apply.scm 261 */
								obj_t BgL_list1574z00_1554;

								BgL_list1574z00_1554 =
									MAKE_YOUNG_PAIR(BgL_arg1573z00_1553, BNIL);
								BgL_auxz00_2596 = BgL_list1574z00_1554;
						}}
						((((BgL_letzd2varzd2_bglt) COBJECT(BgL_new1139z00_1552))->
								BgL_bindingsz00) = ((obj_t) BgL_auxz00_2596), BUNSPEC);
					}
					{
						BgL_nodez00_bglt BgL_auxz00_2624;

						{	/* Ast/apply.scm 274 */
							obj_t BgL_arg1593z00_1564;

							{	/* Ast/apply.scm 274 */
								obj_t BgL_arg1597z00_1565;

								{	/* Ast/apply.scm 274 */
									obj_t BgL_arg1599z00_1566;
									obj_t BgL_arg1604z00_1567;

									{	/* Ast/apply.scm 274 */
										obj_t BgL_arg1605z00_1568;

										{	/* Ast/apply.scm 274 */
											BgL_varz00_bglt BgL_arg1606z00_1569;
											obj_t BgL_arg1611z00_1570;

											{	/* Ast/apply.scm 274 */
												BgL_varz00_bglt BgL_new1143z00_1571;

												{	/* Ast/apply.scm 277 */
													BgL_varz00_bglt BgL_new1142z00_1573;

													BgL_new1142z00_1573 =
														((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
																	BgL_varz00_bgl))));
													{	/* Ast/apply.scm 277 */
														long BgL_arg1613z00_1574;

														{	/* Ast/apply.scm 277 */
															long BgL_res1884z00_1953;

															{	/* Ast/apply.scm 277 */
																obj_t BgL_classz00_1952;

																BgL_classz00_1952 = BGl_varz00zzast_nodez00;
																BgL_res1884z00_1953 =
																	BGL_CLASS_INDEX(BgL_classz00_1952);
															}
															BgL_arg1613z00_1574 = BgL_res1884z00_1953;
														}
														BGL_OBJECT_CLASS_NUM_SET(
															((BgL_objectz00_bglt) BgL_new1142z00_1573),
															BgL_arg1613z00_1574);
													}
													BgL_new1143z00_1571 = BgL_new1142z00_1573;
												}
												((((BgL_nodez00_bglt) COBJECT(
																((BgL_nodez00_bglt) BgL_new1143z00_1571)))->
														BgL_locz00) = ((obj_t) BgL_locz00_2044), BUNSPEC);
												{
													BgL_typez00_bglt BgL_auxz00_2631;

													{	/* Ast/apply.scm 276 */
														BgL_typez00_bglt BgL_arg1612z00_1572;

														BgL_arg1612z00_1572 =
															(((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt)
																		BgL_runnerz00_2046)))->BgL_typez00);
														BgL_auxz00_2631 =
															BGl_strictzd2nodezd2typez00zzast_nodez00((
																(BgL_typez00_bglt)
																BGl_za2_za2z00zztype_cachez00),
															BgL_arg1612z00_1572);
													}
													((((BgL_nodez00_bglt) COBJECT(
																	((BgL_nodez00_bglt) BgL_new1143z00_1571)))->
															BgL_typez00) =
														((BgL_typez00_bglt) BgL_auxz00_2631), BUNSPEC);
												}
												((((BgL_varz00_bglt) COBJECT(BgL_new1143z00_1571))->
														BgL_variablez00) =
													((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
															BgL_runnerz00_2046)), BUNSPEC);
												BgL_arg1606z00_1569 = BgL_new1143z00_1571;
											}
											{	/* Ast/apply.scm 278 */
												obj_t BgL_arg1624z00_1575;

												{	/* Ast/apply.scm 278 */
													obj_t BgL_arg1626z00_1576;

													{	/* Ast/apply.scm 278 */
														BgL_varz00_bglt BgL_arg1627z00_1577;

														{	/* Ast/apply.scm 278 */
															BgL_varz00_bglt BgL_new1145z00_1578;

															{	/* Ast/apply.scm 281 */
																BgL_varz00_bglt BgL_new1144z00_1580;

																BgL_new1144z00_1580 =
																	((BgL_varz00_bglt)
																	BOBJECT(GC_MALLOC(sizeof(struct
																				BgL_varz00_bgl))));
																{	/* Ast/apply.scm 281 */
																	long BgL_arg1634z00_1581;

																	{	/* Ast/apply.scm 281 */
																		long BgL_res1885z00_1958;

																		{	/* Ast/apply.scm 281 */
																			obj_t BgL_classz00_1957;

																			BgL_classz00_1957 =
																				BGl_varz00zzast_nodez00;
																			BgL_res1885z00_1958 =
																				BGL_CLASS_INDEX(BgL_classz00_1957);
																		}
																		BgL_arg1634z00_1581 = BgL_res1885z00_1958;
																	}
																	BGL_OBJECT_CLASS_NUM_SET(
																		((BgL_objectz00_bglt) BgL_new1144z00_1580),
																		BgL_arg1634z00_1581);
																}
																BgL_new1145z00_1578 = BgL_new1144z00_1580;
															}
															((((BgL_nodez00_bglt) COBJECT(
																			((BgL_nodez00_bglt)
																				BgL_new1145z00_1578)))->BgL_locz00) =
																((obj_t) BgL_locz00_2044), BUNSPEC);
															{
																BgL_typez00_bglt BgL_auxz00_2646;

																{	/* Ast/apply.scm 280 */
																	BgL_typez00_bglt BgL_arg1631z00_1579;

																	BgL_arg1631z00_1579 =
																		(((BgL_variablez00_bglt) COBJECT(
																				((BgL_variablez00_bglt)
																					BgL_runnerz00_2046)))->BgL_typez00);
																	BgL_auxz00_2646 =
																		BGl_strictzd2nodezd2typez00zzast_nodez00((
																			(BgL_typez00_bglt)
																			BGl_za2_za2z00zztype_cachez00),
																		BgL_arg1631z00_1579);
																}
																((((BgL_nodez00_bglt) COBJECT(
																				((BgL_nodez00_bglt)
																					BgL_new1145z00_1578)))->BgL_typez00) =
																	((BgL_typez00_bglt) BgL_auxz00_2646),
																	BUNSPEC);
															}
															((((BgL_varz00_bglt)
																		COBJECT(BgL_new1145z00_1578))->
																	BgL_variablez00) =
																((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
																		BgL_runnerz00_2046)), BUNSPEC);
															BgL_arg1627z00_1577 = BgL_new1145z00_1578;
														}
														BgL_arg1626z00_1576 =
															MAKE_YOUNG_PAIR(
															((obj_t) BgL_arg1627z00_1577), BNIL);
													}
													BgL_arg1624z00_1575 =
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 4)),
														BgL_arg1626z00_1576);
												}
												BgL_arg1611z00_1570 =
													MAKE_YOUNG_PAIR(BgL_arg1624z00_1575, BNIL);
											}
											BgL_arg1605z00_1568 =
												MAKE_YOUNG_PAIR(
												((obj_t) BgL_arg1606z00_1569), BgL_arg1611z00_1570);
										}
										BgL_arg1599z00_1566 =
											MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 10)),
											BgL_arg1605z00_1568);
									}
									{	/* Ast/apply.scm 282 */
										BgL_nodezf2effectzf2_bglt BgL_arg1639z00_1582;

										{	/* Ast/apply.scm 282 */
											obj_t BgL_arg1640z00_1583;

											BgL_arg1640z00_1583 = CDR(((obj_t) BgL_localsz00_1518));
											BgL_arg1639z00_1582 =
												BGl_loopze70ze7zzast_applyz00(BgL_procz00_2049,
												BgL_framez00_2048, BgL_stackz00_2047,
												BgL_runnerz00_2046, BgL_typez00_2045, BgL_locz00_2044,
												BgL_arg1640z00_1583, BgL_localsz00_1518);
										}
										BgL_arg1604z00_1567 =
											MAKE_YOUNG_PAIR(((obj_t) BgL_arg1639z00_1582), BNIL);
									}
									BgL_arg1597z00_1565 =
										MAKE_YOUNG_PAIR(BgL_arg1599z00_1566, BgL_arg1604z00_1567);
								}
								BgL_arg1593z00_1564 =
									MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 11)),
									BgL_arg1597z00_1565);
							}
							BgL_auxz00_2624 =
								BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_arg1593z00_1564,
								BgL_stackz00_2047, BgL_locz00_2044, CNST_TABLE_REF(((long) 1)));
						}
						((((BgL_letzd2varzd2_bglt) COBJECT(BgL_new1139z00_1552))->
								BgL_bodyz00) = ((BgL_nodez00_bglt) BgL_auxz00_2624), BUNSPEC);
					}
					((((BgL_letzd2varzd2_bglt) COBJECT(BgL_new1139z00_1552))->
							BgL_removablezf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
					return ((BgL_nodezf2effectzf2_bglt) BgL_new1139z00_1552);
				}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzast_applyz00()
	{
		{	/* Ast/apply.scm 14 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_applyz00()
	{
		{	/* Ast/apply.scm 14 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_makezd2funzd2framezd2envzd2zzast_applyz00,
				BGl_proc1907z00zzast_applyz00, BGl_funz00zzast_varz00,
				BGl_string1908z00zzast_applyz00);
		}

	}



/* &make-fun-frame1266 */
	obj_t BGl_z62makezd2funzd2frame1266z62zzast_applyz00(obj_t BgL_envz00_2034,
		obj_t BgL_funz00_2035)
	{
		{	/* Ast/apply.scm 61 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 12)),
				BGl_string1909z00zzast_applyz00,
				((obj_t) ((BgL_funz00_bglt) BgL_funz00_2035)));
		}

	}



/* make-fun-frame */
	obj_t BGl_makezd2funzd2framez00zzast_applyz00(BgL_funz00_bglt BgL_funz00_7)
	{
		{	/* Ast/apply.scm 61 */
			{	/* Ast/apply.scm 61 */
				obj_t BgL_method1267z00_1596;

				{	/* Ast/apply.scm 61 */
					obj_t BgL_res1896z00_1999;

					{	/* Ast/apply.scm 61 */
						long BgL_objzd2classzd2numz00_1964;

						{	/* Ast/apply.scm 61 */
							long BgL_res1886z00_1967;

							BgL_res1886z00_1967 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_funz00_7));
							BgL_objzd2classzd2numz00_1964 = BgL_res1886z00_1967;
						}
						{	/* Ast/apply.scm 61 */
							obj_t BgL_arg1813z00_1965;

							BgL_arg1813z00_1965 =
								PROCEDURE_REF(BGl_makezd2funzd2framezd2envzd2zzast_applyz00,
								(int) (((long) 1)));
							{	/* Ast/apply.scm 61 */
								int BgL_offsetz00_1969;

								BgL_offsetz00_1969 = (int) (BgL_objzd2classzd2numz00_1964);
								{	/* Ast/apply.scm 61 */
									long BgL_offsetz00_1970;

									BgL_offsetz00_1970 =
										((long) (BgL_offsetz00_1969) - OBJECT_TYPE);
									{	/* Ast/apply.scm 61 */
										long BgL_modz00_1971;

										BgL_modz00_1971 =
											(BgL_offsetz00_1970 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Ast/apply.scm 61 */
											long BgL_restz00_1973;

											BgL_restz00_1973 =
												(BgL_offsetz00_1970 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Ast/apply.scm 61 */

												{	/* Ast/apply.scm 61 */
													obj_t BgL_bucketz00_1975;

													BgL_bucketz00_1975 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_1965), BgL_modz00_1971);
													BgL_res1896z00_1999 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_1975), BgL_restz00_1973);
					}}}}}}}}
					BgL_method1267z00_1596 = BgL_res1896z00_1999;
				}
				return
					PROCEDURE_ENTRY(BgL_method1267z00_1596) (BgL_method1267z00_1596,
					((obj_t) BgL_funz00_7), BEOA);
			}
		}

	}



/* &make-fun-frame */
	obj_t BGl_z62makezd2funzd2framez62zzast_applyz00(obj_t BgL_envz00_2036,
		obj_t BgL_funz00_2037)
	{
		{	/* Ast/apply.scm 61 */
			return
				BGl_makezd2funzd2framez00zzast_applyz00(
				((BgL_funz00_bglt) BgL_funz00_2037));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_applyz00()
	{
		{	/* Ast/apply.scm 14 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_makezd2funzd2framezd2envzd2zzast_applyz00, BGl_sfunz00zzast_varz00,
				BGl_proc1910z00zzast_applyz00, BGl_string1911z00zzast_applyz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_makezd2funzd2framezd2envzd2zzast_applyz00, BGl_cfunz00zzast_varz00,
				BGl_proc1912z00zzast_applyz00, BGl_string1911z00zzast_applyz00);
		}

	}



/* &make-fun-frame-cfun1271 */
	obj_t BGl_z62makezd2funzd2framezd2cfun1271zb0zzast_applyz00(obj_t
		BgL_envz00_2040, obj_t BgL_funz00_2041)
	{
		{	/* Ast/apply.scm 86 */
			{	/* Ast/apply.scm 87 */
				long BgL_arityz00_2074;

				BgL_arityz00_2074 =
					(((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt)
								((BgL_cfunz00_bglt) BgL_funz00_2041))))->BgL_arityz00);
				{	/* Ast/apply.scm 88 */
					obj_t BgL_g1106z00_2075;

					BgL_g1106z00_2075 =
						(((BgL_cfunz00_bglt) COBJECT(
								((BgL_cfunz00_bglt) BgL_funz00_2041)))->BgL_argszd2typezd2);
					{
						obj_t BgL_typesz00_2077;
						obj_t BgL_localsz00_2078;

						BgL_typesz00_2077 = BgL_g1106z00_2075;
						BgL_localsz00_2078 = BNIL;
					BgL_loopz00_2076:
						if (NULLP(BgL_typesz00_2077))
							{	/* Ast/apply.scm 91 */
								return bgl_reverse_bang(BgL_localsz00_2078);
							}
						else
							{	/* Ast/apply.scm 93 */
								bool_t BgL_test1960z00_2724;

								if (NULLP(CDR(((obj_t) BgL_typesz00_2077))))
									{	/* Ast/apply.scm 93 */
										BgL_test1960z00_2724 = (BgL_arityz00_2074 < ((long) 0));
									}
								else
									{	/* Ast/apply.scm 93 */
										BgL_test1960z00_2724 = ((bool_t) 0);
									}
								if (BgL_test1960z00_2724)
									{	/* Ast/apply.scm 93 */
										return bgl_reverse_bang(BgL_localsz00_2078);
									}
								else
									{	/* Ast/apply.scm 96 */
										obj_t BgL_arg1711z00_2079;
										obj_t BgL_arg1712z00_2080;

										BgL_arg1711z00_2079 = CDR(((obj_t) BgL_typesz00_2077));
										{	/* Ast/apply.scm 97 */
											BgL_localz00_bglt BgL_arg1719z00_2081;

											{	/* Ast/apply.scm 97 */
												obj_t BgL_arg1725z00_2082;
												obj_t BgL_arg1726z00_2083;

												BgL_arg1725z00_2082 =
													BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
													(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF((
																(long) 13))));
												BgL_arg1726z00_2083 = CAR(((obj_t) BgL_typesz00_2077));
												BgL_arg1719z00_2081 =
													BGl_makezd2localzd2svarz00zzast_localz00
													(BgL_arg1725z00_2082,
													((BgL_typez00_bglt) BgL_arg1726z00_2083));
											}
											BgL_arg1712z00_2080 =
												MAKE_YOUNG_PAIR(
												((obj_t) BgL_arg1719z00_2081), BgL_localsz00_2078);
										}
										{
											obj_t BgL_localsz00_2743;
											obj_t BgL_typesz00_2742;

											BgL_typesz00_2742 = BgL_arg1711z00_2079;
											BgL_localsz00_2743 = BgL_arg1712z00_2080;
											BgL_localsz00_2078 = BgL_localsz00_2743;
											BgL_typesz00_2077 = BgL_typesz00_2742;
											goto BgL_loopz00_2076;
										}
									}
							}
					}
				}
			}
		}

	}



/* &make-fun-frame-sfun1269 */
	obj_t BGl_z62makezd2funzd2framezd2sfun1269zb0zzast_applyz00(obj_t
		BgL_envz00_2042, obj_t BgL_funz00_2043)
	{
		{	/* Ast/apply.scm 66 */
			{	/* Ast/apply.scm 67 */
				long BgL_arityz00_2085;

				BgL_arityz00_2085 =
					(((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt)
								((BgL_sfunz00_bglt) BgL_funz00_2043))))->BgL_arityz00);
				{	/* Ast/apply.scm 68 */
					obj_t BgL_g1104z00_2086;

					BgL_g1104z00_2086 =
						(((BgL_sfunz00_bglt) COBJECT(
								((BgL_sfunz00_bglt) BgL_funz00_2043)))->BgL_argsz00);
					{
						obj_t BgL_formalsz00_2088;
						obj_t BgL_localsz00_2089;

						BgL_formalsz00_2088 = BgL_g1104z00_2086;
						BgL_localsz00_2089 = BNIL;
					BgL_loopz00_2087:
						if (NULLP(BgL_formalsz00_2088))
							{	/* Ast/apply.scm 71 */
								return bgl_reverse_bang(BgL_localsz00_2089);
							}
						else
							{	/* Ast/apply.scm 73 */
								bool_t BgL_test1963z00_2752;

								if (NULLP(CDR(((obj_t) BgL_formalsz00_2088))))
									{	/* Ast/apply.scm 73 */
										BgL_test1963z00_2752 = (BgL_arityz00_2085 < ((long) 0));
									}
								else
									{	/* Ast/apply.scm 73 */
										BgL_test1963z00_2752 = ((bool_t) 0);
									}
								if (BgL_test1963z00_2752)
									{	/* Ast/apply.scm 73 */
										return bgl_reverse_bang(BgL_localsz00_2089);
									}
								else
									{	/* Ast/apply.scm 76 */
										obj_t BgL_arg1672z00_2090;
										obj_t BgL_arg1684z00_2091;

										BgL_arg1672z00_2090 = CDR(((obj_t) BgL_formalsz00_2088));
										{	/* Ast/apply.scm 77 */
											BgL_localz00_bglt BgL_arg1685z00_2092;

											{	/* Ast/apply.scm 77 */
												obj_t BgL_arg1686z00_2093;
												obj_t BgL_arg1687z00_2094;

												BgL_arg1686z00_2093 =
													BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
													(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF((
																(long) 13))));
												{	/* Ast/apply.scm 78 */
													bool_t BgL_test1965z00_2764;

													{	/* Ast/apply.scm 78 */
														obj_t BgL_arg1696z00_2095;

														BgL_arg1696z00_2095 =
															CAR(((obj_t) BgL_formalsz00_2088));
														BgL_test1965z00_2764 =
															BGl_isazf3zf3zz__objectz00(BgL_arg1696z00_2095,
															BGl_typez00zztype_typez00);
													}
													if (BgL_test1965z00_2764)
														{	/* Ast/apply.scm 78 */
															BgL_arg1687z00_2094 =
																CAR(((obj_t) BgL_formalsz00_2088));
														}
													else
														{	/* Ast/apply.scm 78 */
															BgL_arg1687z00_2094 =
																((obj_t)
																(((BgL_variablez00_bglt) COBJECT(
																			((BgL_variablez00_bglt)
																				((BgL_localz00_bglt)
																					CAR(
																						((obj_t) BgL_formalsz00_2088))))))->
																	BgL_typez00));
														}
												}
												BgL_arg1685z00_2092 =
													BGl_makezd2localzd2svarz00zzast_localz00
													(BgL_arg1686z00_2093,
													((BgL_typez00_bglt) BgL_arg1687z00_2094));
											}
											BgL_arg1684z00_2091 =
												MAKE_YOUNG_PAIR(
												((obj_t) BgL_arg1685z00_2092), BgL_localsz00_2089);
										}
										{
											obj_t BgL_localsz00_2781;
											obj_t BgL_formalsz00_2780;

											BgL_formalsz00_2780 = BgL_arg1672z00_2090;
											BgL_localsz00_2781 = BgL_arg1684z00_2091;
											BgL_localsz00_2089 = BgL_localsz00_2781;
											BgL_formalsz00_2088 = BgL_formalsz00_2780;
											goto BgL_loopz00_2087;
										}
									}
							}
					}
				}
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_applyz00()
	{
		{	/* Ast/apply.scm 14 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1913z00zzast_applyz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1913z00zzast_applyz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1913z00zzast_applyz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1913z00zzast_applyz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1913z00zzast_applyz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 462333171),
				BSTRING_TO_STRING(BGl_string1913z00zzast_applyz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1913z00zzast_applyz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1913z00zzast_applyz00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 163121588),
				BSTRING_TO_STRING(BGl_string1913z00zzast_applyz00));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 315247917),
				BSTRING_TO_STRING(BGl_string1913z00zzast_applyz00));
			BGl_modulezd2initializa7ationz75zzast_appz00(((long) 449859289),
				BSTRING_TO_STRING(BGl_string1913z00zzast_applyz00));
			return
				BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string1913z00zzast_applyz00));
		}

	}

#ifdef __cplusplus
}
#endif
