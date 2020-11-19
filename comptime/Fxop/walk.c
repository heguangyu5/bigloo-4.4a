/*===========================================================================*/
/*   (Fxop/walk.scm)                                                         */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Fxop/walk.scm) */
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


	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	BGL_IMPORT obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_objectzd2initzd2zzfxop_walkz00();
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_z62initzd2fxopzd2cachez12z70zzfxop_walkz00(obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzfxop_walkz00();
	static obj_t BGl_findzd2fxopze70z35zzfxop_walkz00(obj_t);
	static bool_t BGl_longzd2ze3bintzf3ze70z25zzfxop_walkz00(BgL_appz00_bglt);
	extern obj_t BGl_enterzd2functionzd2zztools_errorz00(obj_t);
	static obj_t BGl_fxopzd2simplezd2intzd2letvarzf3ze70zc6zzfxop_walkz00(obj_t,
		BgL_nodez00_bglt);
	BGL_IMPORT long bgl_list_length(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzfxop_walkz00();
	static obj_t BGl_za2fxopsza2z00zzfxop_walkz00 = BUNSPEC;
	static BgL_nodez00_bglt BGl_z62fxopz12zd2letzd2var1350z70zzfxop_walkz00(obj_t,
		obj_t);
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static bool_t BGl_bintzd2ze3longzf3ze70z25zzfxop_walkz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_initzd2fxopzd2cachez12z12zzfxop_walkz00();
	static obj_t BGl_requirezd2initializa7ationz75zzfxop_walkz00 = BUNSPEC;
	static BgL_nodez00_bglt BGl_z62fxopz12z70zzfxop_walkz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzfxop_walkz00();
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzfxop_walkz00();
	extern obj_t BGl_leavezd2functionzd2zztools_errorz00();
	extern obj_t BGl_za2boolza2z00zztype_cachez00;
	extern obj_t BGl_za2longza2z00zztype_cachez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_za2longzd2ze3bintza2z31zzfxop_walkz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_fxopzd2doublezd2intzd2letvarzf3ze70zc6zzfxop_walkz00(obj_t,
		BgL_nodez00_bglt);
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	extern obj_t BGl_findzd2globalzd2zzast_envz00(obj_t, obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_fxopzd2funz12zc0zzfxop_walkz00(obj_t);
	BGL_IMPORT obj_t BGl_exitz00zz__errorz00(obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzfxop_walkz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_dumpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_lvtypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_privatez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_passz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	static obj_t BGl_z62clearzd2fxopzd2cachez12z70zzfxop_walkz00(obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzfxop_walkz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzfxop_walkz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzfxop_walkz00();
	static BgL_nodez00_bglt BGl_bintze70ze7zzfxop_walkz00(BgL_nodez00_bglt);
	extern BgL_nodez00_bglt BGl_walk0z12z12zzast_walkz00(BgL_nodez00_bglt, obj_t);
	static obj_t BGl_za2bintzd2ze3longza2z31zzfxop_walkz00 = BUNSPEC;
	static obj_t BGl_z62fxopz121347z70zzfxop_walkz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_fxopzd2walkz12zc0zzfxop_walkz00(obj_t);
	static obj_t BGl_fxopzd2boolzd2letvarzf3ze70z14zzfxop_walkz00(obj_t,
		BgL_nodez00_bglt);
	extern obj_t BGl_za2bintza2z00zztype_cachez00;
	static obj_t BGl_z62fxopzd2walkz12za2zzfxop_walkz00(obj_t, obj_t);
	static BgL_nodez00_bglt BGl_fxopz12z12zzfxop_walkz00(BgL_nodez00_bglt);
	static obj_t __cnst[7];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_initzd2fxopzd2cachez12zd2envzc0zzfxop_walkz00,
		BgL_bgl_za762initza7d2fxopza7d1976za7,
		BGl_z62initzd2fxopzd2cachez12z70zzfxop_walkz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fxopzd2walkz12zd2envz12zzfxop_walkz00,
		BgL_bgl_za762fxopza7d2walkza711977za7,
		BGl_z62fxopzd2walkz12za2zzfxop_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1967z00zzfxop_walkz00,
		BgL_bgl_za762fxopza7121347za771978za7, BGl_z62fxopz121347z70zzfxop_walkz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1969z00zzfxop_walkz00,
		BgL_bgl_za762fxopza712za7d2let1979za7,
		BGl_z62fxopz12zd2letzd2var1350z70zzfxop_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_GENERIC(BGl_fxopz12zd2envzc0zzfxop_walkz00,
		BgL_bgl_za762fxopza712za770za7za7f1980za7, BGl_z62fxopz12z70zzfxop_walkz00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1959z00zzfxop_walkz00,
		BgL_bgl_string1959za700za7za7f1981za7, "Fxop", 4);
	      DEFINE_STRING(BGl_string1960z00zzfxop_walkz00,
		BgL_bgl_string1960za700za7za7f1982za7, "   . ", 5);
	      DEFINE_STRING(BGl_string1961z00zzfxop_walkz00,
		BgL_bgl_string1961za700za7za7f1983za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string1962z00zzfxop_walkz00,
		BgL_bgl_string1962za700za7za7f1984za7, " error", 6);
	      DEFINE_STRING(BGl_string1963z00zzfxop_walkz00,
		BgL_bgl_string1963za700za7za7f1985za7, "s", 1);
	      DEFINE_STRING(BGl_string1964z00zzfxop_walkz00,
		BgL_bgl_string1964za700za7za7f1986za7, "", 0);
	      DEFINE_STRING(BGl_string1965z00zzfxop_walkz00,
		BgL_bgl_string1965za700za7za7f1987za7, " occured, ending ...", 20);
	      DEFINE_STRING(BGl_string1966z00zzfxop_walkz00,
		BgL_bgl_string1966za700za7za7f1988za7, "failure during postlude hook", 28);
	      DEFINE_STRING(BGl_string1968z00zzfxop_walkz00,
		BgL_bgl_string1968za700za7za7f1989za7, "fxop!1347", 9);
	      DEFINE_STRING(BGl_string1970z00zzfxop_walkz00,
		BgL_bgl_string1970za700za7za7f1990za7, "fxop!::node", 11);
	      DEFINE_STRING(BGl_string1971z00zzfxop_walkz00,
		BgL_bgl_string1971za700za7za7f1991za7, "fxop_walk", 9);
	      DEFINE_STRING(BGl_string1972z00zzfxop_walkz00,
		BgL_bgl_string1972za700za7za7f1992za7,
		"((c-+fx $addfx) (c--fx $subfx) (c-<fx $ltfx) (c-<=fx $lefx) ($c->fx $c-gtfx) ($c->=fx $c-gefx) ($c-=fx $c-egfx)) $long->bint $bint->long foreign (clear-fxop-cache!) pass-started (init-fxop-cache!) ",
		197);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_clearzd2fxopzd2cachez12zd2envzc0zzfxop_walkz00,
		BgL_bgl_za762clearza7d2fxopza71993za7,
		BGl_z62clearzd2fxopzd2cachez12z70zzfxop_walkz00, 0L, BUNSPEC, 0);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_za2fxopsza2z00zzfxop_walkz00));
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzfxop_walkz00));
		     ADD_ROOT((void *) (&BGl_za2longzd2ze3bintza2z31zzfxop_walkz00));
		     ADD_ROOT((void *) (&BGl_za2bintzd2ze3longza2z31zzfxop_walkz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzfxop_walkz00(long
		BgL_checksumz00_2365, char *BgL_fromz00_2366)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzfxop_walkz00))
				{
					BGl_requirezd2initializa7ationz75zzfxop_walkz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzfxop_walkz00();
					BGl_libraryzd2moduleszd2initz00zzfxop_walkz00();
					BGl_cnstzd2initzd2zzfxop_walkz00();
					BGl_importedzd2moduleszd2initz00zzfxop_walkz00();
					BGl_genericzd2initzd2zzfxop_walkz00();
					BGl_methodzd2initzd2zzfxop_walkz00();
					return BGl_toplevelzd2initzd2zzfxop_walkz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzfxop_walkz00()
	{
		{	/* Fxop/walk.scm 21 */
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"fxop_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"fxop_walk");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"fxop_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"fxop_walk");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "fxop_walk");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "fxop_walk");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"fxop_walk");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "fxop_walk");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"fxop_walk");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"fxop_walk");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "fxop_walk");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "fxop_walk");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzfxop_walkz00()
	{
		{	/* Fxop/walk.scm 21 */
			{	/* Fxop/walk.scm 21 */
				obj_t BgL_cportz00_2255;

				{	/* Fxop/walk.scm 21 */
					obj_t BgL_stringz00_2263;

					BgL_stringz00_2263 = BGl_string1972z00zzfxop_walkz00;
					{	/* Fxop/walk.scm 21 */
						obj_t BgL_startz00_2264;

						BgL_startz00_2264 = BINT(((long) 0));
						{	/* Fxop/walk.scm 21 */
							obj_t BgL_endz00_2265;

							BgL_endz00_2265 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2263)));
							{	/* Fxop/walk.scm 21 */

								BgL_cportz00_2255 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2263, BgL_startz00_2264, BgL_endz00_2265);
				}}}}
				{
					long BgL_iz00_2256;

					BgL_iz00_2256 = ((long) 6);
				BgL_loopz00_2257:
					if ((BgL_iz00_2256 == ((long) -1)))
						{	/* Fxop/walk.scm 21 */
							return BUNSPEC;
						}
					else
						{	/* Fxop/walk.scm 21 */
							{	/* Fxop/walk.scm 21 */
								obj_t BgL_arg1974z00_2259;

								{	/* Fxop/walk.scm 21 */

									{	/* Fxop/walk.scm 21 */
										obj_t BgL_locationz00_2261;

										BgL_locationz00_2261 = BBOOL(((bool_t) 0));
										{	/* Fxop/walk.scm 21 */

											BgL_arg1974z00_2259 =
												BGl_readz00zz__readerz00(BgL_cportz00_2255,
												BgL_locationz00_2261);
										}
									}
								}
								{	/* Fxop/walk.scm 21 */
									int BgL_tmpz00_2398;

									BgL_tmpz00_2398 = (int) (BgL_iz00_2256);
									CNST_TABLE_SET(BgL_tmpz00_2398, BgL_arg1974z00_2259);
							}}
							{	/* Fxop/walk.scm 21 */
								int BgL_auxz00_2262;

								BgL_auxz00_2262 = (int) ((BgL_iz00_2256 - ((long) 1)));
								{
									long BgL_iz00_2403;

									BgL_iz00_2403 = (long) (BgL_auxz00_2262);
									BgL_iz00_2256 = BgL_iz00_2403;
									goto BgL_loopz00_2257;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzfxop_walkz00()
	{
		{	/* Fxop/walk.scm 21 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzfxop_walkz00()
	{
		{	/* Fxop/walk.scm 21 */
			BGl_za2longzd2ze3bintza2z31zzfxop_walkz00 = BUNSPEC;
			BGl_za2bintzd2ze3longza2z31zzfxop_walkz00 = BUNSPEC;
			BGl_za2fxopsza2z00zzfxop_walkz00 = BNIL;
			return BUNSPEC;
		}

	}



/* fxop-walk! */
	BGL_EXPORTED_DEF obj_t BGl_fxopzd2walkz12zc0zzfxop_walkz00(obj_t
		BgL_globalsz00_17)
	{
		{	/* Fxop/walk.scm 45 */
			{	/* Fxop/walk.scm 46 */
				obj_t BgL_list1382z00_1442;

				{	/* Fxop/walk.scm 46 */
					obj_t BgL_arg1383z00_1443;

					{	/* Fxop/walk.scm 46 */
						obj_t BgL_arg1384z00_1444;

						BgL_arg1384z00_1444 =
							MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
						BgL_arg1383z00_1443 =
							MAKE_YOUNG_PAIR(BGl_string1959z00zzfxop_walkz00,
							BgL_arg1384z00_1444);
					}
					BgL_list1382z00_1442 =
						MAKE_YOUNG_PAIR(BGl_string1960z00zzfxop_walkz00,
						BgL_arg1383z00_1443);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list1382z00_1442);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 =
				BGl_string1959z00zzfxop_walkz00;
			{	/* Fxop/walk.scm 46 */
				obj_t BgL_g1118z00_1445;
				obj_t BgL_g1119z00_1446;

				{	/* Fxop/walk.scm 46 */
					obj_t BgL_list1419z00_1459;

					BgL_list1419z00_1459 =
						MAKE_YOUNG_PAIR(BGl_initzd2fxopzd2cachez12zd2envzc0zzfxop_walkz00,
						BNIL);
					BgL_g1118z00_1445 = BgL_list1419z00_1459;
				}
				BgL_g1119z00_1446 = CNST_TABLE_REF(((long) 0));
				{
					obj_t BgL_hooksz00_1448;
					obj_t BgL_hnamesz00_1449;

					BgL_hooksz00_1448 = BgL_g1118z00_1445;
					BgL_hnamesz00_1449 = BgL_g1119z00_1446;
				BgL_zc3z04anonymousza31385ze3z87_1450:
					if (NULLP(BgL_hooksz00_1448))
						{	/* Fxop/walk.scm 46 */
							CNST_TABLE_REF(((long) 1));
						}
					else
						{	/* Fxop/walk.scm 46 */
							bool_t BgL_test1997z00_2418;

							{	/* Fxop/walk.scm 46 */
								obj_t BgL_fun1418z00_1457;

								BgL_fun1418z00_1457 = CAR(((obj_t) BgL_hooksz00_1448));
								BgL_test1997z00_2418 =
									CBOOL(PROCEDURE_ENTRY(BgL_fun1418z00_1457)
									(BgL_fun1418z00_1457, BEOA));
							}
							if (BgL_test1997z00_2418)
								{	/* Fxop/walk.scm 46 */
									obj_t BgL_arg1394z00_1454;
									obj_t BgL_arg1396z00_1455;

									BgL_arg1394z00_1454 = CDR(((obj_t) BgL_hooksz00_1448));
									BgL_arg1396z00_1455 = CDR(((obj_t) BgL_hnamesz00_1449));
									{
										obj_t BgL_hnamesz00_2430;
										obj_t BgL_hooksz00_2429;

										BgL_hooksz00_2429 = BgL_arg1394z00_1454;
										BgL_hnamesz00_2430 = BgL_arg1396z00_1455;
										BgL_hnamesz00_1449 = BgL_hnamesz00_2430;
										BgL_hooksz00_1448 = BgL_hooksz00_2429;
										goto BgL_zc3z04anonymousza31385ze3z87_1450;
									}
								}
							else
								{	/* Fxop/walk.scm 46 */
									obj_t BgL_arg1417z00_1456;

									BgL_arg1417z00_1456 = CAR(((obj_t) BgL_hnamesz00_1449));
									BGl_internalzd2errorzd2zztools_errorz00
										(BGl_string1959z00zzfxop_walkz00,
										BGl_string1961z00zzfxop_walkz00, BgL_arg1417z00_1456);
								}
						}
				}
			}
			{
				obj_t BgL_l1339z00_1461;

				BgL_l1339z00_1461 = BgL_globalsz00_17;
			BgL_zc3z04anonymousza31420ze3z87_1462:
				if (PAIRP(BgL_l1339z00_1461))
					{	/* Fxop/walk.scm 47 */
						BGl_fxopzd2funz12zc0zzfxop_walkz00(CAR(BgL_l1339z00_1461));
						{
							obj_t BgL_l1339z00_2438;

							BgL_l1339z00_2438 = CDR(BgL_l1339z00_1461);
							BgL_l1339z00_1461 = BgL_l1339z00_2438;
							goto BgL_zc3z04anonymousza31420ze3z87_1462;
						}
					}
				else
					{	/* Fxop/walk.scm 47 */
						((bool_t) 1);
					}
			}
			if (
				((long) CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00) >
					((long) 0)))
				{	/* Fxop/walk.scm 48 */
					{	/* Fxop/walk.scm 48 */
						obj_t BgL_port1341z00_1469;

						{	/* Fxop/walk.scm 48 */
							obj_t BgL_res1918z00_2000;

							{	/* Fxop/walk.scm 48 */
								obj_t BgL_tmpz00_2443;

								BgL_tmpz00_2443 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res1918z00_2000 =
									BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_2443);
							}
							BgL_port1341z00_1469 = BgL_res1918z00_2000;
						}
						bgl_display_obj(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
							BgL_port1341z00_1469);
						bgl_display_string(BGl_string1962z00zzfxop_walkz00,
							BgL_port1341z00_1469);
						{	/* Fxop/walk.scm 48 */
							obj_t BgL_arg1448z00_1470;

							{	/* Fxop/walk.scm 48 */
								bool_t BgL_test2000z00_2448;

								if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
									(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
									{	/* Fxop/walk.scm 48 */
										if (INTEGERP
											(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
											{	/* Fxop/walk.scm 48 */
												BgL_test2000z00_2448 =
													(
													(long)
													CINT
													(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00)
													> ((long) 1));
											}
										else
											{	/* Fxop/walk.scm 48 */
												BgL_test2000z00_2448 =
													BGl_2ze3ze3zz__r4_numbers_6_5z00
													(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
													BINT(((long) 1)));
									}}
								else
									{	/* Fxop/walk.scm 48 */
										BgL_test2000z00_2448 = ((bool_t) 0);
									}
								if (BgL_test2000z00_2448)
									{	/* Fxop/walk.scm 48 */
										BgL_arg1448z00_1470 = BGl_string1963z00zzfxop_walkz00;
									}
								else
									{	/* Fxop/walk.scm 48 */
										BgL_arg1448z00_1470 = BGl_string1964z00zzfxop_walkz00;
									}
							}
							bgl_display_obj(BgL_arg1448z00_1470, BgL_port1341z00_1469);
						}
						bgl_display_string(BGl_string1965z00zzfxop_walkz00,
							BgL_port1341z00_1469);
						bgl_display_char(((unsigned char) 10), BgL_port1341z00_1469);
					}
					{	/* Fxop/walk.scm 48 */
						obj_t BgL_list1452z00_1476;

						BgL_list1452z00_1476 = MAKE_YOUNG_PAIR(BINT(((long) -1)), BNIL);
						return BGl_exitz00zz__errorz00(BgL_list1452z00_1476);
					}
				}
			else
				{	/* Fxop/walk.scm 48 */
					obj_t BgL_g1120z00_1477;
					obj_t BgL_g1121z00_1478;

					{	/* Fxop/walk.scm 48 */
						obj_t BgL_list1466z00_1491;

						BgL_list1466z00_1491 =
							MAKE_YOUNG_PAIR
							(BGl_clearzd2fxopzd2cachez12zd2envzc0zzfxop_walkz00, BNIL);
						BgL_g1120z00_1477 = BgL_list1466z00_1491;
					}
					BgL_g1121z00_1478 = CNST_TABLE_REF(((long) 2));
					{
						obj_t BgL_hooksz00_1480;
						obj_t BgL_hnamesz00_1481;

						BgL_hooksz00_1480 = BgL_g1120z00_1477;
						BgL_hnamesz00_1481 = BgL_g1121z00_1478;
					BgL_zc3z04anonymousza31453ze3z87_1482:
						if (NULLP(BgL_hooksz00_1480))
							{	/* Fxop/walk.scm 48 */
								return BgL_globalsz00_17;
							}
						else
							{	/* Fxop/walk.scm 48 */
								bool_t BgL_test2004z00_2467;

								{	/* Fxop/walk.scm 48 */
									obj_t BgL_fun1465z00_1489;

									BgL_fun1465z00_1489 = CAR(((obj_t) BgL_hooksz00_1480));
									BgL_test2004z00_2467 =
										CBOOL(PROCEDURE_ENTRY(BgL_fun1465z00_1489)
										(BgL_fun1465z00_1489, BEOA));
								}
								if (BgL_test2004z00_2467)
									{	/* Fxop/walk.scm 48 */
										obj_t BgL_arg1461z00_1486;
										obj_t BgL_arg1462z00_1487;

										BgL_arg1461z00_1486 = CDR(((obj_t) BgL_hooksz00_1480));
										BgL_arg1462z00_1487 = CDR(((obj_t) BgL_hnamesz00_1481));
										{
											obj_t BgL_hnamesz00_2479;
											obj_t BgL_hooksz00_2478;

											BgL_hooksz00_2478 = BgL_arg1461z00_1486;
											BgL_hnamesz00_2479 = BgL_arg1462z00_1487;
											BgL_hnamesz00_1481 = BgL_hnamesz00_2479;
											BgL_hooksz00_1480 = BgL_hooksz00_2478;
											goto BgL_zc3z04anonymousza31453ze3z87_1482;
										}
									}
								else
									{	/* Fxop/walk.scm 48 */
										obj_t BgL_arg1464z00_1488;

										BgL_arg1464z00_1488 = CAR(((obj_t) BgL_hnamesz00_1481));
										return
											BGl_internalzd2errorzd2zztools_errorz00
											(BGl_za2currentzd2passza2zd2zzengine_passz00,
											BGl_string1966z00zzfxop_walkz00, BgL_arg1464z00_1488);
									}
							}
					}
				}
		}

	}



/* &fxop-walk! */
	obj_t BGl_z62fxopzd2walkz12za2zzfxop_walkz00(obj_t BgL_envz00_2242,
		obj_t BgL_globalsz00_2243)
	{
		{	/* Fxop/walk.scm 45 */
			return BGl_fxopzd2walkz12zc0zzfxop_walkz00(BgL_globalsz00_2243);
		}

	}



/* init-fxop-cache! */
	BGL_EXPORTED_DEF obj_t BGl_initzd2fxopzd2cachez12z12zzfxop_walkz00()
	{
		{	/* Fxop/walk.scm 60 */
			if (PAIRP(BGl_za2fxopsza2z00zzfxop_walkz00))
				{	/* Fxop/walk.scm 61 */
					BFALSE;
				}
			else
				{	/* Fxop/walk.scm 61 */
					{	/* Fxop/walk.scm 62 */
						obj_t BgL_list1468z00_1493;

						BgL_list1468z00_1493 =
							MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)), BNIL);
						BGl_za2bintzd2ze3longza2z31zzfxop_walkz00 =
							BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 4)),
							BgL_list1468z00_1493);
					}
					{	/* Fxop/walk.scm 63 */
						obj_t BgL_list1469z00_1494;

						BgL_list1469z00_1494 =
							MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)), BNIL);
						BGl_za2longzd2ze3bintza2z31zzfxop_walkz00 =
							BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 5)),
							BgL_list1469z00_1494);
					}
					{	/* Fxop/walk.scm 65 */
						obj_t BgL_l1342z00_1495;

						BgL_l1342z00_1495 = CNST_TABLE_REF(((long) 6));
						{	/* Fxop/walk.scm 65 */
							obj_t BgL_head1344z00_1497;

							{	/* Fxop/walk.scm 65 */
								obj_t BgL_res1925z00_2019;

								BgL_res1925z00_2019 = MAKE_YOUNG_PAIR(BNIL, BNIL);
								BgL_head1344z00_1497 = BgL_res1925z00_2019;
							}
							{
								obj_t BgL_l1342z00_1499;
								obj_t BgL_tail1345z00_1500;

								BgL_l1342z00_1499 = BgL_l1342z00_1495;
								BgL_tail1345z00_1500 = BgL_head1344z00_1497;
							BgL_zc3z04anonymousza31471ze3z87_1501:
								if (NULLP(BgL_l1342z00_1499))
									{	/* Fxop/walk.scm 65 */
										BGl_za2fxopsza2z00zzfxop_walkz00 =
											CDR(BgL_head1344z00_1497);
									}
								else
									{	/* Fxop/walk.scm 65 */
										obj_t BgL_newtail1346z00_1503;

										{	/* Fxop/walk.scm 65 */
											obj_t BgL_arg1476z00_1505;

											{	/* Fxop/walk.scm 65 */
												obj_t BgL_utz00_1506;

												BgL_utz00_1506 = CAR(((obj_t) BgL_l1342z00_1499));
												{	/* Fxop/walk.scm 66 */
													obj_t BgL_arg1477z00_1507;
													obj_t BgL_arg1489z00_1508;

													{	/* Fxop/walk.scm 66 */
														obj_t BgL_arg1493z00_1509;

														BgL_arg1493z00_1509 = CAR(((obj_t) BgL_utz00_1506));
														{	/* Fxop/walk.scm 66 */
															obj_t BgL_list1494z00_1510;

															BgL_list1494z00_1510 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)),
																BNIL);
															BgL_arg1477z00_1507 =
																BGl_findzd2globalzd2zzast_envz00
																(BgL_arg1493z00_1509, BgL_list1494z00_1510);
													}}
													{	/* Fxop/walk.scm 67 */
														obj_t BgL_arg1495z00_1511;

														{	/* Fxop/walk.scm 67 */
															obj_t BgL_pairz00_2027;

															BgL_pairz00_2027 = CDR(((obj_t) BgL_utz00_1506));
															BgL_arg1495z00_1511 = CAR(BgL_pairz00_2027);
														}
														{	/* Fxop/walk.scm 67 */
															obj_t BgL_list1496z00_1512;

															BgL_list1496z00_1512 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)),
																BNIL);
															BgL_arg1489z00_1508 =
																BGl_findzd2globalzd2zzast_envz00
																(BgL_arg1495z00_1511, BgL_list1496z00_1512);
													}}
													BgL_arg1476z00_1505 =
														MAKE_YOUNG_PAIR(BgL_arg1477z00_1507,
														BgL_arg1489z00_1508);
											}}
											{	/* Fxop/walk.scm 65 */
												obj_t BgL_res1927z00_2028;

												BgL_res1927z00_2028 =
													MAKE_YOUNG_PAIR(BgL_arg1476z00_1505, BNIL);
												BgL_newtail1346z00_1503 = BgL_res1927z00_2028;
										}}
										SET_CDR(BgL_tail1345z00_1500, BgL_newtail1346z00_1503);
										{	/* Fxop/walk.scm 65 */
											obj_t BgL_arg1474z00_1504;

											BgL_arg1474z00_1504 = CDR(((obj_t) BgL_l1342z00_1499));
											{
												obj_t BgL_tail1345z00_2518;
												obj_t BgL_l1342z00_2517;

												BgL_l1342z00_2517 = BgL_arg1474z00_1504;
												BgL_tail1345z00_2518 = BgL_newtail1346z00_1503;
												BgL_tail1345z00_1500 = BgL_tail1345z00_2518;
												BgL_l1342z00_1499 = BgL_l1342z00_2517;
												goto BgL_zc3z04anonymousza31471ze3z87_1501;
											}
										}
									}
							}
						}
					}
				}
			return BUNSPEC;
		}

	}



/* &init-fxop-cache! */
	obj_t BGl_z62initzd2fxopzd2cachez12z70zzfxop_walkz00(obj_t BgL_envz00_2244)
	{
		{	/* Fxop/walk.scm 60 */
			return BGl_initzd2fxopzd2cachez12z12zzfxop_walkz00();
		}

	}



/* &clear-fxop-cache! */
	obj_t BGl_z62clearzd2fxopzd2cachez12z70zzfxop_walkz00(obj_t BgL_envz00_2245)
	{
		{	/* Fxop/walk.scm 80 */
			BGl_za2longzd2ze3bintza2z31zzfxop_walkz00 = BFALSE;
			BGl_za2bintzd2ze3longza2z31zzfxop_walkz00 = BFALSE;
			return (BGl_za2fxopsza2z00zzfxop_walkz00 = BNIL, BUNSPEC);
		}

	}



/* fxop-fun! */
	obj_t BGl_fxopzd2funz12zc0zzfxop_walkz00(obj_t BgL_varz00_18)
	{
		{	/* Fxop/walk.scm 88 */
			{	/* Fxop/walk.scm 89 */
				obj_t BgL_arg1497z00_1514;

				BgL_arg1497z00_1514 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_varz00_18)))->BgL_idz00);
				BGl_enterzd2functionzd2zztools_errorz00(BgL_arg1497z00_1514);
			}
			{	/* Fxop/walk.scm 90 */
				BgL_valuez00_bglt BgL_funz00_1515;

				BgL_funz00_1515 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_varz00_18)))->BgL_valuez00);
				{	/* Fxop/walk.scm 91 */
					BgL_nodez00_bglt BgL_arg1518z00_1516;

					{	/* Fxop/walk.scm 91 */
						obj_t BgL_arg1521z00_1517;

						BgL_arg1521z00_1517 =
							(((BgL_sfunz00_bglt) COBJECT(
									((BgL_sfunz00_bglt) BgL_funz00_1515)))->BgL_bodyz00);
						BgL_arg1518z00_1516 =
							BGl_fxopz12z12zzfxop_walkz00(
							((BgL_nodez00_bglt) BgL_arg1521z00_1517));
					}
					((((BgL_sfunz00_bglt) COBJECT(
									((BgL_sfunz00_bglt) BgL_funz00_1515)))->BgL_bodyz00) =
						((obj_t) ((obj_t) BgL_arg1518z00_1516)), BUNSPEC);
				}
				BGl_leavezd2functionzd2zztools_errorz00();
				return BgL_varz00_18;
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzfxop_walkz00()
	{
		{	/* Fxop/walk.scm 21 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzfxop_walkz00()
	{
		{	/* Fxop/walk.scm 21 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_fxopz12zd2envzc0zzfxop_walkz00, BGl_proc1967z00zzfxop_walkz00,
				BGl_nodez00zzast_nodez00, BGl_string1968z00zzfxop_walkz00);
		}

	}



/* &fxop!1347 */
	obj_t BGl_z62fxopz121347z70zzfxop_walkz00(obj_t BgL_envz00_2249,
		obj_t BgL_nodez00_2250)
	{
		{	/* Fxop/walk.scm 98 */
			return
				((obj_t)
				BGl_walk0z12z12zzast_walkz00(
					((BgL_nodez00_bglt) BgL_nodez00_2250),
					BGl_fxopz12zd2envzc0zzfxop_walkz00));
		}

	}



/* fxop! */
	BgL_nodez00_bglt BGl_fxopz12z12zzfxop_walkz00(BgL_nodez00_bglt BgL_nodez00_19)
	{
		{	/* Fxop/walk.scm 98 */
			{	/* Fxop/walk.scm 98 */
				obj_t BgL_method1348z00_1533;

				{	/* Fxop/walk.scm 98 */
					obj_t BgL_res1938z00_2072;

					{	/* Fxop/walk.scm 98 */
						long BgL_objzd2classzd2numz00_2037;

						{	/* Fxop/walk.scm 98 */
							long BgL_res1928z00_2040;

							BgL_res1928z00_2040 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_19));
							BgL_objzd2classzd2numz00_2037 = BgL_res1928z00_2040;
						}
						{	/* Fxop/walk.scm 98 */
							obj_t BgL_arg1813z00_2038;

							BgL_arg1813z00_2038 =
								PROCEDURE_REF(BGl_fxopz12zd2envzc0zzfxop_walkz00,
								(int) (((long) 1)));
							{	/* Fxop/walk.scm 98 */
								int BgL_offsetz00_2042;

								BgL_offsetz00_2042 = (int) (BgL_objzd2classzd2numz00_2037);
								{	/* Fxop/walk.scm 98 */
									long BgL_offsetz00_2043;

									BgL_offsetz00_2043 =
										((long) (BgL_offsetz00_2042) - OBJECT_TYPE);
									{	/* Fxop/walk.scm 98 */
										long BgL_modz00_2044;

										BgL_modz00_2044 =
											(BgL_offsetz00_2043 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Fxop/walk.scm 98 */
											long BgL_restz00_2046;

											BgL_restz00_2046 =
												(BgL_offsetz00_2043 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Fxop/walk.scm 98 */

												{	/* Fxop/walk.scm 98 */
													obj_t BgL_bucketz00_2048;

													BgL_bucketz00_2048 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2038), BgL_modz00_2044);
													BgL_res1938z00_2072 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2048), BgL_restz00_2046);
					}}}}}}}}
					BgL_method1348z00_1533 = BgL_res1938z00_2072;
				}
				return
					((BgL_nodez00_bglt)
					PROCEDURE_ENTRY(BgL_method1348z00_1533) (BgL_method1348z00_1533,
						((obj_t) BgL_nodez00_19), BEOA));
			}
		}

	}



/* &fxop! */
	BgL_nodez00_bglt BGl_z62fxopz12z70zzfxop_walkz00(obj_t BgL_envz00_2247,
		obj_t BgL_nodez00_2248)
	{
		{	/* Fxop/walk.scm 98 */
			return
				BGl_fxopz12z12zzfxop_walkz00(((BgL_nodez00_bglt) BgL_nodez00_2248));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzfxop_walkz00()
	{
		{	/* Fxop/walk.scm 21 */
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_fxopz12zd2envzc0zzfxop_walkz00, BGl_letzd2varzd2zzast_nodez00,
				BGl_proc1969z00zzfxop_walkz00, BGl_string1970z00zzfxop_walkz00);
		}

	}



/* &fxop!-let-var1350 */
	BgL_nodez00_bglt BGl_z62fxopz12zd2letzd2var1350z70zzfxop_walkz00(obj_t
		BgL_envz00_2252, obj_t BgL_nodez00_2253)
	{
		{	/* Fxop/walk.scm 104 */
			{
				obj_t BgL_opz00_2337;
				BgL_letzd2varzd2_bglt BgL_nodez00_2338;
				obj_t BgL_opz00_2295;
				BgL_letzd2varzd2_bglt BgL_nodez00_2296;
				obj_t BgL_opz00_2273;
				BgL_letzd2varzd2_bglt BgL_nodez00_2274;

				{	/* Fxop/walk.scm 220 */
					obj_t BgL_g1164z00_2359;

					{	/* Fxop/walk.scm 220 */
						bool_t BgL_test2007z00_2571;

						{	/* Fxop/walk.scm 220 */
							BgL_typez00_bglt BgL_arg1573z00_2360;

							BgL_arg1573z00_2360 =
								(((BgL_nodez00_bglt) COBJECT(
										((BgL_nodez00_bglt)
											((BgL_letzd2varzd2_bglt) BgL_nodez00_2253))))->
								BgL_typez00);
							BgL_test2007z00_2571 =
								(((obj_t) BgL_arg1573z00_2360) ==
								BGl_za2bintza2z00zztype_cachez00);
						}
						if (BgL_test2007z00_2571)
							{	/* Fxop/walk.scm 220 */
								BgL_g1164z00_2359 =
									BGl_fxopzd2doublezd2intzd2letvarzf3ze70zc6zzfxop_walkz00(
									(((BgL_letzd2varzd2_bglt) COBJECT(
												((BgL_letzd2varzd2_bglt) BgL_nodez00_2253)))->
										BgL_bindingsz00),
									(((BgL_letzd2varzd2_bglt) COBJECT(((BgL_letzd2varzd2_bglt)
													BgL_nodez00_2253)))->BgL_bodyz00));
							}
						else
							{	/* Fxop/walk.scm 220 */
								BgL_g1164z00_2359 = BFALSE;
							}
					}
					if (CBOOL(BgL_g1164z00_2359))
						{
							BgL_appz00_bglt BgL_auxz00_2584;

							BgL_opz00_2273 = BgL_g1164z00_2359;
							BgL_nodez00_2274 = ((BgL_letzd2varzd2_bglt) BgL_nodez00_2253);
							{	/* Fxop/walk.scm 177 */
								BgL_appz00_bglt BgL_new1146z00_2275;

								{	/* Fxop/walk.scm 177 */
									BgL_appz00_bglt BgL_new1145z00_2276;

									BgL_new1145z00_2276 =
										((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
													BgL_appz00_bgl))));
									{	/* Fxop/walk.scm 177 */
										long BgL_arg1719z00_2277;

										{	/* Fxop/walk.scm 177 */
											long BgL_res1946z00_2278;

											BgL_res1946z00_2278 =
												BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
											BgL_arg1719z00_2277 = BgL_res1946z00_2278;
										}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt) BgL_new1145z00_2276),
											BgL_arg1719z00_2277);
									}
									{	/* Fxop/walk.scm 177 */
										BgL_objectz00_bglt BgL_tmpz00_2589;

										BgL_tmpz00_2589 =
											((BgL_objectz00_bglt) BgL_new1145z00_2276);
										BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2589, BFALSE);
									}
									((BgL_objectz00_bglt) BgL_new1145z00_2276);
									BgL_new1146z00_2275 = BgL_new1145z00_2276;
								}
								((((BgL_nodez00_bglt) COBJECT(
												((BgL_nodez00_bglt) BgL_new1146z00_2275)))->
										BgL_locz00) = ((obj_t) BFALSE), BUNSPEC);
								((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
													BgL_new1146z00_2275)))->BgL_typez00) =
									((BgL_typez00_bglt) ((BgL_typez00_bglt)
											BGl_za2bintza2z00zztype_cachez00)), BUNSPEC);
								((((BgL_nodezf2effectzf2_bglt)
											COBJECT(((BgL_nodezf2effectzf2_bglt)
													BgL_new1146z00_2275)))->BgL_sidezd2effectzd2) =
									((obj_t) BUNSPEC), BUNSPEC);
								((((BgL_nodezf2effectzf2_bglt)
											COBJECT(((BgL_nodezf2effectzf2_bglt)
													BgL_new1146z00_2275)))->BgL_keyz00) =
									((obj_t) BINT(((long) -1))), BUNSPEC);
								{
									BgL_varz00_bglt BgL_auxz00_2603;

									{	/* Fxop/walk.scm 179 */
										BgL_varz00_bglt BgL_new1148z00_2279;

										{	/* Fxop/walk.scm 179 */
											BgL_varz00_bglt BgL_new1147z00_2280;

											BgL_new1147z00_2280 =
												((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
															BgL_varz00_bgl))));
											{	/* Fxop/walk.scm 179 */
												long BgL_arg1692z00_2281;

												{	/* Fxop/walk.scm 179 */
													long BgL_res1947z00_2282;

													{	/* Fxop/walk.scm 179 */
														obj_t BgL_classz00_2283;

														BgL_classz00_2283 = BGl_varz00zzast_nodez00;
														BgL_res1947z00_2282 =
															BGL_CLASS_INDEX(BgL_classz00_2283);
													}
													BgL_arg1692z00_2281 = BgL_res1947z00_2282;
												}
												BGL_OBJECT_CLASS_NUM_SET(
													((BgL_objectz00_bglt) BgL_new1147z00_2280),
													BgL_arg1692z00_2281);
											}
											BgL_new1148z00_2279 = BgL_new1147z00_2280;
										}
										((((BgL_nodez00_bglt) COBJECT(
														((BgL_nodez00_bglt) BgL_new1148z00_2279)))->
												BgL_locz00) = ((obj_t) BFALSE), BUNSPEC);
										((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
															BgL_new1148z00_2279)))->BgL_typez00) =
											((BgL_typez00_bglt) ((BgL_typez00_bglt)
													BGl_za2bintza2z00zztype_cachez00)), BUNSPEC);
										((((BgL_varz00_bglt) COBJECT(BgL_new1148z00_2279))->
												BgL_variablez00) =
											((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
													BgL_opz00_2273)), BUNSPEC);
										BgL_auxz00_2603 = BgL_new1148z00_2279;
									}
									((((BgL_appz00_bglt) COBJECT(BgL_new1146z00_2275))->
											BgL_funz00) =
										((BgL_varz00_bglt) BgL_auxz00_2603), BUNSPEC);
								}
								{
									obj_t BgL_auxz00_2616;

									{	/* Fxop/walk.scm 183 */
										BgL_nodez00_bglt BgL_arg1695z00_2284;
										BgL_nodez00_bglt BgL_arg1696z00_2285;

										{	/* Fxop/walk.scm 183 */
											obj_t BgL_arg1707z00_2286;

											{	/* Fxop/walk.scm 183 */
												obj_t BgL_pairz00_2287;

												BgL_pairz00_2287 =
													(((BgL_letzd2varzd2_bglt) COBJECT(BgL_nodez00_2274))->
													BgL_bindingsz00);
												{	/* Fxop/walk.scm 183 */
													obj_t BgL_pairz00_2288;

													BgL_pairz00_2288 = CAR(BgL_pairz00_2287);
													BgL_arg1707z00_2286 = CDR(BgL_pairz00_2288);
											}}
											BgL_arg1695z00_2284 =
												BGl_bintze70ze7zzfxop_walkz00(
												((BgL_nodez00_bglt) BgL_arg1707z00_2286));
										}
										{	/* Fxop/walk.scm 184 */
											obj_t BgL_arg1711z00_2289;

											{	/* Fxop/walk.scm 184 */
												obj_t BgL_pairz00_2290;

												BgL_pairz00_2290 =
													(((BgL_letzd2varzd2_bglt) COBJECT(BgL_nodez00_2274))->
													BgL_bindingsz00);
												{	/* Fxop/walk.scm 184 */
													obj_t BgL_pairz00_2291;

													{	/* Fxop/walk.scm 184 */
														obj_t BgL_pairz00_2292;

														BgL_pairz00_2292 = CDR(BgL_pairz00_2290);
														BgL_pairz00_2291 = CAR(BgL_pairz00_2292);
													}
													BgL_arg1711z00_2289 = CDR(BgL_pairz00_2291);
											}}
											BgL_arg1696z00_2285 =
												BGl_bintze70ze7zzfxop_walkz00(
												((BgL_nodez00_bglt) BgL_arg1711z00_2289));
										}
										{	/* Fxop/walk.scm 182 */
											obj_t BgL_list1697z00_2293;

											{	/* Fxop/walk.scm 182 */
												obj_t BgL_arg1704z00_2294;

												BgL_arg1704z00_2294 =
													MAKE_YOUNG_PAIR(((obj_t) BgL_arg1696z00_2285), BNIL);
												BgL_list1697z00_2293 =
													MAKE_YOUNG_PAIR(
													((obj_t) BgL_arg1695z00_2284), BgL_arg1704z00_2294);
											}
											BgL_auxz00_2616 = BgL_list1697z00_2293;
									}}
									((((BgL_appz00_bglt) COBJECT(BgL_new1146z00_2275))->
											BgL_argsz00) = ((obj_t) BgL_auxz00_2616), BUNSPEC);
								}
								((((BgL_appz00_bglt) COBJECT(BgL_new1146z00_2275))->
										BgL_stackablez00) = ((obj_t) BFALSE), BUNSPEC);
								BgL_auxz00_2584 = BgL_new1146z00_2275;
							}
							return ((BgL_nodez00_bglt) BgL_auxz00_2584);
						}
					else
						{	/* Fxop/walk.scm 224 */
							obj_t BgL_g1167z00_2361;

							{	/* Fxop/walk.scm 224 */
								bool_t BgL_test2009z00_2636;

								{	/* Fxop/walk.scm 224 */
									BgL_typez00_bglt BgL_arg1561z00_2362;

									BgL_arg1561z00_2362 =
										(((BgL_nodez00_bglt) COBJECT(
												((BgL_nodez00_bglt)
													((BgL_letzd2varzd2_bglt) BgL_nodez00_2253))))->
										BgL_typez00);
									BgL_test2009z00_2636 =
										(((obj_t) BgL_arg1561z00_2362) ==
										BGl_za2bintza2z00zztype_cachez00);
								}
								if (BgL_test2009z00_2636)
									{	/* Fxop/walk.scm 224 */
										BgL_g1167z00_2361 =
											BGl_fxopzd2simplezd2intzd2letvarzf3ze70zc6zzfxop_walkz00(
											(((BgL_letzd2varzd2_bglt) COBJECT(
														((BgL_letzd2varzd2_bglt) BgL_nodez00_2253)))->
												BgL_bindingsz00),
											(((BgL_letzd2varzd2_bglt) COBJECT(((BgL_letzd2varzd2_bglt)
															BgL_nodez00_2253)))->BgL_bodyz00));
									}
								else
									{	/* Fxop/walk.scm 224 */
										BgL_g1167z00_2361 = BFALSE;
									}
							}
							if (CBOOL(BgL_g1167z00_2361))
								{
									BgL_appz00_bglt BgL_auxz00_2649;

									BgL_opz00_2295 = BgL_g1167z00_2361;
									BgL_nodez00_2296 = ((BgL_letzd2varzd2_bglt) BgL_nodez00_2253);
									{	/* Fxop/walk.scm 188 */
										obj_t BgL_callz00_2297;

										{	/* Fxop/walk.scm 188 */
											obj_t BgL_pairz00_2298;

											BgL_pairz00_2298 =
												(((BgL_appz00_bglt) COBJECT(
														((BgL_appz00_bglt)
															(((BgL_letzd2varzd2_bglt)
																	COBJECT(BgL_nodez00_2296))->BgL_bodyz00))))->
												BgL_argsz00);
											BgL_callz00_2297 = CAR(BgL_pairz00_2298);
										}
										{	/* Fxop/walk.scm 190 */
											BgL_appz00_bglt BgL_new1152z00_2299;

											{	/* Fxop/walk.scm 190 */
												BgL_appz00_bglt BgL_new1151z00_2300;

												BgL_new1151z00_2300 =
													((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
																BgL_appz00_bgl))));
												{	/* Fxop/walk.scm 190 */
													long BgL_arg1830z00_2301;

													{	/* Fxop/walk.scm 190 */
														long BgL_res1949z00_2302;

														BgL_res1949z00_2302 =
															BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
														BgL_arg1830z00_2301 = BgL_res1949z00_2302;
													}
													BGL_OBJECT_CLASS_NUM_SET(
														((BgL_objectz00_bglt) BgL_new1151z00_2300),
														BgL_arg1830z00_2301);
												}
												{	/* Fxop/walk.scm 190 */
													BgL_objectz00_bglt BgL_tmpz00_2658;

													BgL_tmpz00_2658 =
														((BgL_objectz00_bglt) BgL_new1151z00_2300);
													BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2658, BFALSE);
												}
												((BgL_objectz00_bglt) BgL_new1151z00_2300);
												BgL_new1152z00_2299 = BgL_new1151z00_2300;
											}
											((((BgL_nodez00_bglt) COBJECT(
															((BgL_nodez00_bglt) BgL_new1152z00_2299)))->
													BgL_locz00) = ((obj_t) BFALSE), BUNSPEC);
											((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																BgL_new1152z00_2299)))->BgL_typez00) =
												((BgL_typez00_bglt) ((BgL_typez00_bglt)
														BGl_za2bintza2z00zztype_cachez00)), BUNSPEC);
											((((BgL_nodezf2effectzf2_bglt)
														COBJECT(((BgL_nodezf2effectzf2_bglt)
																BgL_new1152z00_2299)))->BgL_sidezd2effectzd2) =
												((obj_t) BUNSPEC), BUNSPEC);
											((((BgL_nodezf2effectzf2_bglt)
														COBJECT(((BgL_nodezf2effectzf2_bglt)
																BgL_new1152z00_2299)))->BgL_keyz00) =
												((obj_t) BINT(((long) -1))), BUNSPEC);
											{
												BgL_varz00_bglt BgL_auxz00_2672;

												{	/* Fxop/walk.scm 192 */
													BgL_varz00_bglt BgL_new1154z00_2303;

													{	/* Fxop/walk.scm 192 */
														BgL_varz00_bglt BgL_new1153z00_2304;

														BgL_new1153z00_2304 =
															((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
																		BgL_varz00_bgl))));
														{	/* Fxop/walk.scm 192 */
															long BgL_arg1725z00_2305;

															{	/* Fxop/walk.scm 192 */
																long BgL_res1951z00_2306;

																{	/* Fxop/walk.scm 192 */
																	obj_t BgL_classz00_2307;

																	BgL_classz00_2307 = BGl_varz00zzast_nodez00;
																	BgL_res1951z00_2306 =
																		BGL_CLASS_INDEX(BgL_classz00_2307);
																}
																BgL_arg1725z00_2305 = BgL_res1951z00_2306;
															}
															BGL_OBJECT_CLASS_NUM_SET(
																((BgL_objectz00_bglt) BgL_new1153z00_2304),
																BgL_arg1725z00_2305);
														}
														BgL_new1154z00_2303 = BgL_new1153z00_2304;
													}
													((((BgL_nodez00_bglt) COBJECT(
																	((BgL_nodez00_bglt) BgL_new1154z00_2303)))->
															BgL_locz00) = ((obj_t) BFALSE), BUNSPEC);
													((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																		BgL_new1154z00_2303)))->BgL_typez00) =
														((BgL_typez00_bglt) ((BgL_typez00_bglt)
																BGl_za2bintza2z00zztype_cachez00)), BUNSPEC);
													((((BgL_varz00_bglt) COBJECT(BgL_new1154z00_2303))->
															BgL_variablez00) =
														((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
																BgL_opz00_2295)), BUNSPEC);
													BgL_auxz00_2672 = BgL_new1154z00_2303;
												}
												((((BgL_appz00_bglt) COBJECT(BgL_new1152z00_2299))->
														BgL_funz00) =
													((BgL_varz00_bglt) BgL_auxz00_2672), BUNSPEC);
											}
											{
												obj_t BgL_auxz00_2685;

												{	/* Fxop/walk.scm 196 */
													BgL_nodez00_bglt BgL_arg1726z00_2308;
													BgL_nodez00_bglt BgL_arg1727z00_2309;

													{	/* Fxop/walk.scm 196 */
														bool_t BgL_test2011z00_2686;

														{	/* Fxop/walk.scm 196 */
															bool_t BgL_test2012z00_2687;

															{	/* Fxop/walk.scm 196 */
																obj_t BgL_arg1768z00_2310;

																{	/* Fxop/walk.scm 196 */
																	obj_t BgL_pairz00_2311;

																	BgL_pairz00_2311 =
																		(((BgL_appz00_bglt) COBJECT(
																				((BgL_appz00_bglt) BgL_callz00_2297)))->
																		BgL_argsz00);
																	BgL_arg1768z00_2310 = CAR(BgL_pairz00_2311);
																}
																{	/* Fxop/walk.scm 196 */
																	bool_t BgL_res1953z00_2312;

																	BgL_res1953z00_2312 =
																		BGl_isazf3zf3zz__objectz00
																		(BgL_arg1768z00_2310,
																		BGl_varz00zzast_nodez00);
																	BgL_test2012z00_2687 = BgL_res1953z00_2312;
															}}
															if (BgL_test2012z00_2687)
																{	/* Fxop/walk.scm 197 */
																	obj_t BgL_auxz00_2701;
																	obj_t BgL_tmpz00_2692;

																	{	/* Fxop/walk.scm 198 */
																		obj_t BgL_pairz00_2314;

																		BgL_pairz00_2314 =
																			(((BgL_letzd2varzd2_bglt)
																				COBJECT(BgL_nodez00_2296))->
																			BgL_bindingsz00);
																		{	/* Fxop/walk.scm 198 */
																			obj_t BgL_pairz00_2315;

																			BgL_pairz00_2315 = CAR(BgL_pairz00_2314);
																			BgL_auxz00_2701 = CAR(BgL_pairz00_2315);
																		}
																	}
																	{
																		BgL_variablez00_bglt BgL_auxz00_2693;

																		{
																			BgL_varz00_bglt BgL_auxz00_2694;

																			{	/* Fxop/walk.scm 197 */
																				obj_t BgL_pairz00_2313;

																				BgL_pairz00_2313 =
																					(((BgL_appz00_bglt) COBJECT(
																							((BgL_appz00_bglt)
																								BgL_callz00_2297)))->
																					BgL_argsz00);
																				BgL_auxz00_2694 =
																					((BgL_varz00_bglt)
																					CAR(BgL_pairz00_2313));
																			}
																			BgL_auxz00_2693 =
																				(((BgL_varz00_bglt)
																					COBJECT(BgL_auxz00_2694))->
																				BgL_variablez00);
																		}
																		BgL_tmpz00_2692 = ((obj_t) BgL_auxz00_2693);
																	}
																	BgL_test2011z00_2686 =
																		(BgL_tmpz00_2692 == BgL_auxz00_2701);
																}
															else
																{	/* Fxop/walk.scm 196 */
																	BgL_test2011z00_2686 = ((bool_t) 0);
																}
														}
														if (BgL_test2011z00_2686)
															{	/* Fxop/walk.scm 199 */
																obj_t BgL_arg1746z00_2316;

																{	/* Fxop/walk.scm 199 */
																	obj_t BgL_pairz00_2317;

																	BgL_pairz00_2317 =
																		(((BgL_letzd2varzd2_bglt)
																			COBJECT(BgL_nodez00_2296))->
																		BgL_bindingsz00);
																	{	/* Fxop/walk.scm 199 */
																		obj_t BgL_pairz00_2318;

																		BgL_pairz00_2318 = CAR(BgL_pairz00_2317);
																		BgL_arg1746z00_2316 = CDR(BgL_pairz00_2318);
																	}
																}
																BgL_arg1726z00_2308 =
																	BGl_bintze70ze7zzfxop_walkz00(
																	((BgL_nodez00_bglt) BgL_arg1746z00_2316));
															}
														else
															{	/* Fxop/walk.scm 200 */
																obj_t BgL_arg1754z00_2319;

																{	/* Fxop/walk.scm 200 */
																	obj_t BgL_pairz00_2320;

																	BgL_pairz00_2320 =
																		(((BgL_appz00_bglt) COBJECT(
																				((BgL_appz00_bglt) BgL_callz00_2297)))->
																		BgL_argsz00);
																	BgL_arg1754z00_2319 = CAR(BgL_pairz00_2320);
																}
																BgL_arg1726z00_2308 =
																	BGl_bintze70ze7zzfxop_walkz00(
																	((BgL_nodez00_bglt) BgL_arg1754z00_2319));
															}
													}
													{	/* Fxop/walk.scm 201 */
														bool_t BgL_test2013z00_2716;

														{	/* Fxop/walk.scm 201 */
															bool_t BgL_test2014z00_2717;

															{	/* Fxop/walk.scm 201 */
																obj_t BgL_arg1828z00_2321;

																{	/* Fxop/walk.scm 201 */
																	obj_t BgL_pairz00_2322;

																	BgL_pairz00_2322 =
																		(((BgL_appz00_bglt) COBJECT(
																				((BgL_appz00_bglt) BgL_callz00_2297)))->
																		BgL_argsz00);
																	{	/* Fxop/walk.scm 201 */
																		obj_t BgL_pairz00_2323;

																		BgL_pairz00_2323 = CDR(BgL_pairz00_2322);
																		BgL_arg1828z00_2321 = CAR(BgL_pairz00_2323);
																	}
																}
																{	/* Fxop/walk.scm 201 */
																	bool_t BgL_res1954z00_2324;

																	BgL_res1954z00_2324 =
																		BGl_isazf3zf3zz__objectz00
																		(BgL_arg1828z00_2321,
																		BGl_varz00zzast_nodez00);
																	BgL_test2014z00_2717 = BgL_res1954z00_2324;
																}
															}
															if (BgL_test2014z00_2717)
																{	/* Fxop/walk.scm 202 */
																	obj_t BgL_auxz00_2734;
																	obj_t BgL_tmpz00_2723;

																	{	/* Fxop/walk.scm 203 */
																		obj_t BgL_pairz00_2327;

																		BgL_pairz00_2327 =
																			(((BgL_letzd2varzd2_bglt)
																				COBJECT(BgL_nodez00_2296))->
																			BgL_bindingsz00);
																		{	/* Fxop/walk.scm 203 */
																			obj_t BgL_pairz00_2328;

																			BgL_pairz00_2328 = CAR(BgL_pairz00_2327);
																			BgL_auxz00_2734 = CAR(BgL_pairz00_2328);
																		}
																	}
																	{
																		BgL_variablez00_bglt BgL_auxz00_2724;

																		{
																			BgL_varz00_bglt BgL_auxz00_2725;

																			{
																				obj_t BgL_auxz00_2726;

																				{	/* Fxop/walk.scm 202 */
																					obj_t BgL_pairz00_2325;

																					BgL_pairz00_2325 =
																						(((BgL_appz00_bglt) COBJECT(
																								((BgL_appz00_bglt)
																									BgL_callz00_2297)))->
																						BgL_argsz00);
																					{	/* Fxop/walk.scm 202 */
																						obj_t BgL_pairz00_2326;

																						BgL_pairz00_2326 =
																							CDR(BgL_pairz00_2325);
																						BgL_auxz00_2726 =
																							CAR(BgL_pairz00_2326);
																					}
																				}
																				BgL_auxz00_2725 =
																					((BgL_varz00_bglt) BgL_auxz00_2726);
																			}
																			BgL_auxz00_2724 =
																				(((BgL_varz00_bglt)
																					COBJECT(BgL_auxz00_2725))->
																				BgL_variablez00);
																		}
																		BgL_tmpz00_2723 = ((obj_t) BgL_auxz00_2724);
																	}
																	BgL_test2013z00_2716 =
																		(BgL_tmpz00_2723 == BgL_auxz00_2734);
																}
															else
																{	/* Fxop/walk.scm 201 */
																	BgL_test2013z00_2716 = ((bool_t) 0);
																}
														}
														if (BgL_test2013z00_2716)
															{	/* Fxop/walk.scm 204 */
																obj_t BgL_arg1811z00_2329;

																{	/* Fxop/walk.scm 204 */
																	obj_t BgL_pairz00_2330;

																	BgL_pairz00_2330 =
																		(((BgL_letzd2varzd2_bglt)
																			COBJECT(BgL_nodez00_2296))->
																		BgL_bindingsz00);
																	{	/* Fxop/walk.scm 204 */
																		obj_t BgL_pairz00_2331;

																		BgL_pairz00_2331 = CAR(BgL_pairz00_2330);
																		BgL_arg1811z00_2329 = CDR(BgL_pairz00_2331);
																	}
																}
																BgL_arg1727z00_2309 =
																	BGl_bintze70ze7zzfxop_walkz00(
																	((BgL_nodez00_bglt) BgL_arg1811z00_2329));
															}
														else
															{	/* Fxop/walk.scm 205 */
																obj_t BgL_arg1821z00_2332;

																{	/* Fxop/walk.scm 205 */
																	obj_t BgL_pairz00_2333;

																	BgL_pairz00_2333 =
																		(((BgL_appz00_bglt) COBJECT(
																				((BgL_appz00_bglt) BgL_callz00_2297)))->
																		BgL_argsz00);
																	{	/* Fxop/walk.scm 205 */
																		obj_t BgL_pairz00_2334;

																		BgL_pairz00_2334 = CDR(BgL_pairz00_2333);
																		BgL_arg1821z00_2332 = CAR(BgL_pairz00_2334);
																	}
																}
																BgL_arg1727z00_2309 =
																	BGl_bintze70ze7zzfxop_walkz00(
																	((BgL_nodez00_bglt) BgL_arg1821z00_2332));
															}
													}
													{	/* Fxop/walk.scm 195 */
														obj_t BgL_list1728z00_2335;

														{	/* Fxop/walk.scm 195 */
															obj_t BgL_arg1729z00_2336;

															BgL_arg1729z00_2336 =
																MAKE_YOUNG_PAIR(
																((obj_t) BgL_arg1727z00_2309), BNIL);
															BgL_list1728z00_2335 =
																MAKE_YOUNG_PAIR(
																((obj_t) BgL_arg1726z00_2308),
																BgL_arg1729z00_2336);
														}
														BgL_auxz00_2685 = BgL_list1728z00_2335;
													}
												}
												((((BgL_appz00_bglt) COBJECT(BgL_new1152z00_2299))->
														BgL_argsz00) = ((obj_t) BgL_auxz00_2685), BUNSPEC);
											}
											((((BgL_appz00_bglt) COBJECT(BgL_new1152z00_2299))->
													BgL_stackablez00) = ((obj_t) BFALSE), BUNSPEC);
											BgL_auxz00_2649 = BgL_new1152z00_2299;
										}
									}
									return ((BgL_nodez00_bglt) BgL_auxz00_2649);
								}
							else
								{	/* Fxop/walk.scm 228 */
									obj_t BgL_g1170z00_2363;

									{	/* Fxop/walk.scm 228 */
										bool_t BgL_test2015z00_2758;

										{	/* Fxop/walk.scm 228 */
											BgL_typez00_bglt BgL_arg1540z00_2364;

											BgL_arg1540z00_2364 =
												(((BgL_nodez00_bglt) COBJECT(
														((BgL_nodez00_bglt)
															((BgL_letzd2varzd2_bglt) BgL_nodez00_2253))))->
												BgL_typez00);
											BgL_test2015z00_2758 =
												(((obj_t) BgL_arg1540z00_2364) ==
												BGl_za2boolza2z00zztype_cachez00);
										}
										if (BgL_test2015z00_2758)
											{	/* Fxop/walk.scm 228 */
												BgL_g1170z00_2363 =
													BGl_fxopzd2boolzd2letvarzf3ze70z14zzfxop_walkz00(
													(((BgL_letzd2varzd2_bglt) COBJECT(
																((BgL_letzd2varzd2_bglt) BgL_nodez00_2253)))->
														BgL_bindingsz00),
													(((BgL_letzd2varzd2_bglt)
															COBJECT(((BgL_letzd2varzd2_bglt)
																	BgL_nodez00_2253)))->BgL_bodyz00));
											}
										else
											{	/* Fxop/walk.scm 228 */
												BgL_g1170z00_2363 = BFALSE;
											}
									}
									if (CBOOL(BgL_g1170z00_2363))
										{
											BgL_appz00_bglt BgL_auxz00_2771;

											BgL_opz00_2337 = BgL_g1170z00_2363;
											BgL_nodez00_2338 =
												((BgL_letzd2varzd2_bglt) BgL_nodez00_2253);
											{	/* Fxop/walk.scm 209 */
												BgL_appz00_bglt BgL_new1157z00_2339;

												{	/* Fxop/walk.scm 209 */
													BgL_appz00_bglt BgL_new1156z00_2340;

													BgL_new1156z00_2340 =
														((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
																	BgL_appz00_bgl))));
													{	/* Fxop/walk.scm 209 */
														long BgL_arg1847z00_2341;

														{	/* Fxop/walk.scm 209 */
															long BgL_res1956z00_2342;

															BgL_res1956z00_2342 =
																BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
															BgL_arg1847z00_2341 = BgL_res1956z00_2342;
														}
														BGL_OBJECT_CLASS_NUM_SET(
															((BgL_objectz00_bglt) BgL_new1156z00_2340),
															BgL_arg1847z00_2341);
													}
													{	/* Fxop/walk.scm 209 */
														BgL_objectz00_bglt BgL_tmpz00_2776;

														BgL_tmpz00_2776 =
															((BgL_objectz00_bglt) BgL_new1156z00_2340);
														BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2776, BFALSE);
													}
													((BgL_objectz00_bglt) BgL_new1156z00_2340);
													BgL_new1157z00_2339 = BgL_new1156z00_2340;
												}
												((((BgL_nodez00_bglt) COBJECT(
																((BgL_nodez00_bglt) BgL_new1157z00_2339)))->
														BgL_locz00) = ((obj_t) BFALSE), BUNSPEC);
												((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																	BgL_new1157z00_2339)))->BgL_typez00) =
													((BgL_typez00_bglt) ((BgL_typez00_bglt)
															BGl_za2boolza2z00zztype_cachez00)), BUNSPEC);
												((((BgL_nodezf2effectzf2_bglt)
															COBJECT(((BgL_nodezf2effectzf2_bglt)
																	BgL_new1157z00_2339)))->
														BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
												((((BgL_nodezf2effectzf2_bglt)
															COBJECT(((BgL_nodezf2effectzf2_bglt)
																	BgL_new1157z00_2339)))->BgL_keyz00) =
													((obj_t) BINT(((long) -1))), BUNSPEC);
												{
													BgL_varz00_bglt BgL_auxz00_2790;

													{	/* Fxop/walk.scm 211 */
														BgL_varz00_bglt BgL_new1159z00_2343;

														{	/* Fxop/walk.scm 211 */
															BgL_varz00_bglt BgL_new1158z00_2344;

															BgL_new1158z00_2344 =
																((BgL_varz00_bglt)
																BOBJECT(GC_MALLOC(sizeof(struct
																			BgL_varz00_bgl))));
															{	/* Fxop/walk.scm 211 */
																long BgL_arg1835z00_2345;

																{	/* Fxop/walk.scm 211 */
																	long BgL_res1957z00_2346;

																	{	/* Fxop/walk.scm 211 */
																		obj_t BgL_classz00_2347;

																		BgL_classz00_2347 = BGl_varz00zzast_nodez00;
																		BgL_res1957z00_2346 =
																			BGL_CLASS_INDEX(BgL_classz00_2347);
																	}
																	BgL_arg1835z00_2345 = BgL_res1957z00_2346;
																}
																BGL_OBJECT_CLASS_NUM_SET(
																	((BgL_objectz00_bglt) BgL_new1158z00_2344),
																	BgL_arg1835z00_2345);
															}
															BgL_new1159z00_2343 = BgL_new1158z00_2344;
														}
														((((BgL_nodez00_bglt) COBJECT(
																		((BgL_nodez00_bglt) BgL_new1159z00_2343)))->
																BgL_locz00) = ((obj_t) BFALSE), BUNSPEC);
														((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																			BgL_new1159z00_2343)))->BgL_typez00) =
															((BgL_typez00_bglt) (((BgL_variablez00_bglt)
																		COBJECT(((BgL_variablez00_bglt)
																				BgL_opz00_2337)))->BgL_typez00)),
															BUNSPEC);
														((((BgL_varz00_bglt) COBJECT(BgL_new1159z00_2343))->
																BgL_variablez00) =
															((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
																	BgL_opz00_2337)), BUNSPEC);
														BgL_auxz00_2790 = BgL_new1159z00_2343;
													}
													((((BgL_appz00_bglt) COBJECT(BgL_new1157z00_2339))->
															BgL_funz00) =
														((BgL_varz00_bglt) BgL_auxz00_2790), BUNSPEC);
												}
												{
													obj_t BgL_auxz00_2804;

													{	/* Fxop/walk.scm 215 */
														BgL_nodez00_bglt BgL_arg1836z00_2348;
														BgL_nodez00_bglt BgL_arg1838z00_2349;

														{	/* Fxop/walk.scm 215 */
															obj_t BgL_arg1841z00_2350;

															{	/* Fxop/walk.scm 215 */
																obj_t BgL_pairz00_2351;

																BgL_pairz00_2351 =
																	(((BgL_letzd2varzd2_bglt)
																		COBJECT(BgL_nodez00_2338))->
																	BgL_bindingsz00);
																{	/* Fxop/walk.scm 215 */
																	obj_t BgL_pairz00_2352;

																	BgL_pairz00_2352 = CAR(BgL_pairz00_2351);
																	BgL_arg1841z00_2350 = CDR(BgL_pairz00_2352);
															}}
															BgL_arg1836z00_2348 =
																BGl_bintze70ze7zzfxop_walkz00(
																((BgL_nodez00_bglt) BgL_arg1841z00_2350));
														}
														{	/* Fxop/walk.scm 216 */
															obj_t BgL_arg1845z00_2353;

															{	/* Fxop/walk.scm 216 */
																obj_t BgL_pairz00_2354;

																BgL_pairz00_2354 =
																	(((BgL_letzd2varzd2_bglt)
																		COBJECT(BgL_nodez00_2338))->
																	BgL_bindingsz00);
																{	/* Fxop/walk.scm 216 */
																	obj_t BgL_pairz00_2355;

																	{	/* Fxop/walk.scm 216 */
																		obj_t BgL_pairz00_2356;

																		BgL_pairz00_2356 = CDR(BgL_pairz00_2354);
																		BgL_pairz00_2355 = CAR(BgL_pairz00_2356);
																	}
																	BgL_arg1845z00_2353 = CDR(BgL_pairz00_2355);
															}}
															BgL_arg1838z00_2349 =
																BGl_bintze70ze7zzfxop_walkz00(
																((BgL_nodez00_bglt) BgL_arg1845z00_2353));
														}
														{	/* Fxop/walk.scm 214 */
															obj_t BgL_list1839z00_2357;

															{	/* Fxop/walk.scm 214 */
																obj_t BgL_arg1840z00_2358;

																BgL_arg1840z00_2358 =
																	MAKE_YOUNG_PAIR(
																	((obj_t) BgL_arg1838z00_2349), BNIL);
																BgL_list1839z00_2357 =
																	MAKE_YOUNG_PAIR(
																	((obj_t) BgL_arg1836z00_2348),
																	BgL_arg1840z00_2358);
															}
															BgL_auxz00_2804 = BgL_list1839z00_2357;
													}}
													((((BgL_appz00_bglt) COBJECT(BgL_new1157z00_2339))->
															BgL_argsz00) =
														((obj_t) BgL_auxz00_2804), BUNSPEC);
												}
												((((BgL_appz00_bglt) COBJECT(BgL_new1157z00_2339))->
														BgL_stackablez00) = ((obj_t) BFALSE), BUNSPEC);
												BgL_auxz00_2771 = BgL_new1157z00_2339;
											}
											return ((BgL_nodez00_bglt) BgL_auxz00_2771);
										}
									else
										{	/* Fxop/walk.scm 228 */
											return
												BGl_walk0z12z12zzast_walkz00(
												((BgL_nodez00_bglt)
													((BgL_letzd2varzd2_bglt) BgL_nodez00_2253)),
												BGl_fxopz12zd2envzc0zzfxop_walkz00);
										}
								}
						}
				}
			}
		}

	}



/* find-fxop~0 */
	obj_t BGl_findzd2fxopze70z35zzfxop_walkz00(obj_t BgL_exprz00_1587)
	{
		{	/* Fxop/walk.scm 120 */
			if (BGl_isazf3zf3zz__objectz00(BgL_exprz00_1587, BGl_appz00zzast_nodez00))
				{	/* Fxop/walk.scm 118 */
					BgL_variablez00_bglt BgL_vz00_1590;

					BgL_vz00_1590 =
						(((BgL_varz00_bglt) COBJECT(
								(((BgL_appz00_bglt) COBJECT(
											((BgL_appz00_bglt) BgL_exprz00_1587)))->BgL_funz00)))->
						BgL_variablez00);
					{	/* Fxop/walk.scm 119 */
						obj_t BgL_cz00_1591;

						BgL_cz00_1591 =
							BGl_assqz00zz__r4_pairs_and_lists_6_3z00(
							((obj_t) BgL_vz00_1590), BGl_za2fxopsza2z00zzfxop_walkz00);
						if (CBOOL(BgL_cz00_1591))
							{	/* Fxop/walk.scm 120 */
								return CDR(((obj_t) BgL_cz00_1591));
							}
						else
							{	/* Fxop/walk.scm 120 */
								return BFALSE;
							}
					}
				}
			else
				{	/* Fxop/walk.scm 117 */
					return BFALSE;
				}
		}

	}



/* bint~0 */
	BgL_nodez00_bglt BGl_bintze70ze7zzfxop_walkz00(BgL_nodez00_bglt
		BgL_exprz00_1641)
	{
		{	/* Fxop/walk.scm 173 */
			{	/* Fxop/walk.scm 163 */
				bool_t BgL_test2019z00_2838;

				{	/* Fxop/walk.scm 163 */
					BgL_typez00_bglt BgL_arg1687z00_1655;

					BgL_arg1687z00_1655 =
						(((BgL_nodez00_bglt) COBJECT(BgL_exprz00_1641))->BgL_typez00);
					BgL_test2019z00_2838 =
						(((obj_t) BgL_arg1687z00_1655) == BGl_za2bintza2z00zztype_cachez00);
				}
				if (BgL_test2019z00_2838)
					{	/* Fxop/walk.scm 163 */
						return BgL_exprz00_1641;
					}
				else
					{	/* Fxop/walk.scm 163 */
						if (BGl_bintzd2ze3longzf3ze70z25zzfxop_walkz00(
								((obj_t) BgL_exprz00_1641)))
							{	/* Fxop/walk.scm 166 */
								obj_t BgL_pairz00_2142;

								BgL_pairz00_2142 =
									(((BgL_appz00_bglt) COBJECT(
											((BgL_appz00_bglt) BgL_exprz00_1641)))->BgL_argsz00);
								return ((BgL_nodez00_bglt) CAR(BgL_pairz00_2142));
							}
						else
							{	/* Fxop/walk.scm 168 */
								BgL_appz00_bglt BgL_new1141z00_1648;

								{	/* Fxop/walk.scm 168 */
									BgL_appz00_bglt BgL_new1140z00_1653;

									BgL_new1140z00_1653 =
										((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
													BgL_appz00_bgl))));
									{	/* Fxop/walk.scm 168 */
										long BgL_arg1686z00_1654;

										{	/* Fxop/walk.scm 168 */
											long BgL_res1943z00_2144;

											BgL_res1943z00_2144 =
												BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
											BgL_arg1686z00_1654 = BgL_res1943z00_2144;
										}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt) BgL_new1140z00_1653),
											BgL_arg1686z00_1654);
									}
									{	/* Fxop/walk.scm 168 */
										BgL_objectz00_bglt BgL_tmpz00_2853;

										BgL_tmpz00_2853 =
											((BgL_objectz00_bglt) BgL_new1140z00_1653);
										BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2853, BFALSE);
									}
									((BgL_objectz00_bglt) BgL_new1140z00_1653);
									BgL_new1141z00_1648 = BgL_new1140z00_1653;
								}
								((((BgL_nodez00_bglt) COBJECT(
												((BgL_nodez00_bglt) BgL_new1141z00_1648)))->
										BgL_locz00) = ((obj_t) BFALSE), BUNSPEC);
								((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
													BgL_new1141z00_1648)))->BgL_typez00) =
									((BgL_typez00_bglt) ((BgL_typez00_bglt)
											BGl_za2bintza2z00zztype_cachez00)), BUNSPEC);
								((((BgL_nodezf2effectzf2_bglt)
											COBJECT(((BgL_nodezf2effectzf2_bglt)
													BgL_new1141z00_1648)))->BgL_sidezd2effectzd2) =
									((obj_t) BUNSPEC), BUNSPEC);
								((((BgL_nodezf2effectzf2_bglt)
											COBJECT(((BgL_nodezf2effectzf2_bglt)
													BgL_new1141z00_1648)))->BgL_keyz00) =
									((obj_t) BINT(((long) -1))), BUNSPEC);
								{
									BgL_varz00_bglt BgL_auxz00_2867;

									{	/* Fxop/walk.scm 170 */
										BgL_varz00_bglt BgL_new1143z00_1649;

										{	/* Fxop/walk.scm 170 */
											BgL_varz00_bglt BgL_new1142z00_1650;

											BgL_new1142z00_1650 =
												((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
															BgL_varz00_bgl))));
											{	/* Fxop/walk.scm 170 */
												long BgL_arg1684z00_1651;

												{	/* Fxop/walk.scm 170 */
													long BgL_res1944z00_2149;

													{	/* Fxop/walk.scm 170 */
														obj_t BgL_classz00_2148;

														BgL_classz00_2148 = BGl_varz00zzast_nodez00;
														BgL_res1944z00_2149 =
															BGL_CLASS_INDEX(BgL_classz00_2148);
													}
													BgL_arg1684z00_1651 = BgL_res1944z00_2149;
												}
												BGL_OBJECT_CLASS_NUM_SET(
													((BgL_objectz00_bglt) BgL_new1142z00_1650),
													BgL_arg1684z00_1651);
											}
											BgL_new1143z00_1649 = BgL_new1142z00_1650;
										}
										((((BgL_nodez00_bglt) COBJECT(
														((BgL_nodez00_bglt) BgL_new1143z00_1649)))->
												BgL_locz00) = ((obj_t) BFALSE), BUNSPEC);
										((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
															BgL_new1143z00_1649)))->BgL_typez00) =
											((BgL_typez00_bglt) ((BgL_typez00_bglt)
													BGl_za2bintza2z00zztype_cachez00)), BUNSPEC);
										((((BgL_varz00_bglt) COBJECT(BgL_new1143z00_1649))->
												BgL_variablez00) =
											((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
													BGl_za2longzd2ze3bintza2z31zzfxop_walkz00)), BUNSPEC);
										BgL_auxz00_2867 = BgL_new1143z00_1649;
									}
									((((BgL_appz00_bglt) COBJECT(BgL_new1141z00_1648))->
											BgL_funz00) =
										((BgL_varz00_bglt) BgL_auxz00_2867), BUNSPEC);
								}
								{
									obj_t BgL_auxz00_2880;

									{	/* Fxop/walk.scm 173 */
										obj_t BgL_list1685z00_1652;

										BgL_list1685z00_1652 =
											MAKE_YOUNG_PAIR(((obj_t) BgL_exprz00_1641), BNIL);
										BgL_auxz00_2880 = BgL_list1685z00_1652;
									}
									((((BgL_appz00_bglt) COBJECT(BgL_new1141z00_1648))->
											BgL_argsz00) = ((obj_t) BgL_auxz00_2880), BUNSPEC);
								}
								((((BgL_appz00_bglt) COBJECT(BgL_new1141z00_1648))->
										BgL_stackablez00) = ((obj_t) BFALSE), BUNSPEC);
								return ((BgL_nodez00_bglt) BgL_new1141z00_1648);
							}
					}
			}
		}

	}



/* bint->long?~0 */
	bool_t BGl_bintzd2ze3longzf3ze70z25zzfxop_walkz00(obj_t BgL_exprz00_1577)
	{
		{	/* Fxop/walk.scm 109 */
			if (BGl_isazf3zf3zz__objectz00(BgL_exprz00_1577, BGl_appz00zzast_nodez00))
				{	/* Fxop/walk.scm 108 */
					BgL_variablez00_bglt BgL_vz00_1580;

					BgL_vz00_1580 =
						(((BgL_varz00_bglt) COBJECT(
								(((BgL_appz00_bglt) COBJECT(
											((BgL_appz00_bglt) BgL_exprz00_1577)))->BgL_funz00)))->
						BgL_variablez00);
					return (((obj_t) BgL_vz00_1580) ==
						BGl_za2bintzd2ze3longza2z31zzfxop_walkz00);
				}
			else
				{	/* Fxop/walk.scm 107 */
					return ((bool_t) 0);
				}
		}

	}



/* long->bint?~0 */
	bool_t BGl_longzd2ze3bintzf3ze70z25zzfxop_walkz00(BgL_appz00_bglt
		BgL_exprz00_1582)
	{
		{	/* Fxop/walk.scm 114 */
			{	/* Fxop/walk.scm 113 */
				BgL_variablez00_bglt BgL_vz00_1585;

				BgL_vz00_1585 =
					(((BgL_varz00_bglt) COBJECT(
							(((BgL_appz00_bglt) COBJECT(BgL_exprz00_1582))->BgL_funz00)))->
					BgL_variablez00);
				return (((obj_t) BgL_vz00_1585) ==
					BGl_za2longzd2ze3bintza2z31zzfxop_walkz00);
			}
		}

	}



/* fxop-double-int-letvar?~0 */
	obj_t BGl_fxopzd2doublezd2intzd2letvarzf3ze70zc6zzfxop_walkz00(obj_t
		BgL_bindingsz00_1593, BgL_nodez00_bglt BgL_bodyz00_1594)
	{
		{	/* Fxop/walk.scm 136 */
			if ((bgl_list_length(BgL_bindingsz00_1593) == ((long) 2)))
				{	/* Fxop/walk.scm 128 */
					bool_t BgL_test2023z00_2900;

					{	/* Fxop/walk.scm 128 */
						bool_t BgL__ortest_1126z00_1602;

						{	/* Fxop/walk.scm 128 */
							bool_t BgL__ortest_1127z00_1610;

							{	/* Fxop/walk.scm 128 */
								obj_t BgL_arg1631z00_1616;

								{	/* Fxop/walk.scm 128 */
									obj_t BgL_pairz00_2085;

									BgL_pairz00_2085 = CAR(((obj_t) BgL_bindingsz00_1593));
									BgL_arg1631z00_1616 = CDR(BgL_pairz00_2085);
								}
								BgL__ortest_1127z00_1610 =
									BGl_bintzd2ze3longzf3ze70z25zzfxop_walkz00
									(BgL_arg1631z00_1616);
							}
							if (BgL__ortest_1127z00_1610)
								{	/* Fxop/walk.scm 128 */
									BgL__ortest_1126z00_1602 = BgL__ortest_1127z00_1610;
								}
							else
								{	/* Fxop/walk.scm 129 */
									bool_t BgL__ortest_1128z00_1611;

									{	/* Fxop/walk.scm 129 */
										BgL_typez00_bglt BgL_arg1626z00_1614;

										{
											BgL_variablez00_bglt BgL_auxz00_2906;

											{	/* Fxop/walk.scm 129 */
												obj_t BgL_pairz00_2089;

												BgL_pairz00_2089 = CAR(((obj_t) BgL_bindingsz00_1593));
												BgL_auxz00_2906 =
													((BgL_variablez00_bglt) CAR(BgL_pairz00_2089));
											}
											BgL_arg1626z00_1614 =
												(((BgL_variablez00_bglt) COBJECT(BgL_auxz00_2906))->
												BgL_typez00);
										}
										BgL__ortest_1128z00_1611 =
											(
											((obj_t) BgL_arg1626z00_1614) ==
											BGl_za2bintza2z00zztype_cachez00);
									}
									if (BgL__ortest_1128z00_1611)
										{	/* Fxop/walk.scm 129 */
											BgL__ortest_1126z00_1602 = BgL__ortest_1128z00_1611;
										}
									else
										{	/* Fxop/walk.scm 130 */
											BgL_typez00_bglt BgL_arg1613z00_1612;

											{
												BgL_variablez00_bglt BgL_auxz00_2915;

												{	/* Fxop/walk.scm 130 */
													obj_t BgL_pairz00_2094;

													BgL_pairz00_2094 =
														CAR(((obj_t) BgL_bindingsz00_1593));
													BgL_auxz00_2915 =
														((BgL_variablez00_bglt) CAR(BgL_pairz00_2094));
												}
												BgL_arg1613z00_1612 =
													(((BgL_variablez00_bglt) COBJECT(BgL_auxz00_2915))->
													BgL_typez00);
											}
											BgL__ortest_1126z00_1602 =
												(
												((obj_t) BgL_arg1613z00_1612) ==
												BGl_za2longza2z00zztype_cachez00);
										}
								}
						}
						if (BgL__ortest_1126z00_1602)
							{	/* Fxop/walk.scm 128 */
								BgL_test2023z00_2900 = BgL__ortest_1126z00_1602;
							}
						else
							{	/* Fxop/walk.scm 131 */
								bool_t BgL__ortest_1129z00_1603;

								{	/* Fxop/walk.scm 131 */
									obj_t BgL_arg1612z00_1609;

									{	/* Fxop/walk.scm 131 */
										obj_t BgL_pairz00_2101;

										{	/* Fxop/walk.scm 131 */
											obj_t BgL_pairz00_2100;

											BgL_pairz00_2100 = CDR(((obj_t) BgL_bindingsz00_1593));
											BgL_pairz00_2101 = CAR(BgL_pairz00_2100);
										}
										BgL_arg1612z00_1609 = CDR(BgL_pairz00_2101);
									}
									BgL__ortest_1129z00_1603 =
										BGl_bintzd2ze3longzf3ze70z25zzfxop_walkz00
										(BgL_arg1612z00_1609);
								}
								if (BgL__ortest_1129z00_1603)
									{	/* Fxop/walk.scm 131 */
										BgL_test2023z00_2900 = BgL__ortest_1129z00_1603;
									}
								else
									{	/* Fxop/walk.scm 132 */
										bool_t BgL__ortest_1130z00_1604;

										{	/* Fxop/walk.scm 132 */
											BgL_typez00_bglt BgL_arg1606z00_1607;

											{
												BgL_variablez00_bglt BgL_auxz00_2930;

												{	/* Fxop/walk.scm 132 */
													obj_t BgL_pairz00_2107;

													{	/* Fxop/walk.scm 132 */
														obj_t BgL_pairz00_2106;

														BgL_pairz00_2106 =
															CDR(((obj_t) BgL_bindingsz00_1593));
														BgL_pairz00_2107 = CAR(BgL_pairz00_2106);
													}
													BgL_auxz00_2930 =
														((BgL_variablez00_bglt) CAR(BgL_pairz00_2107));
												}
												BgL_arg1606z00_1607 =
													(((BgL_variablez00_bglt) COBJECT(BgL_auxz00_2930))->
													BgL_typez00);
											}
											BgL__ortest_1130z00_1604 =
												(
												((obj_t) BgL_arg1606z00_1607) ==
												BGl_za2bintza2z00zztype_cachez00);
										}
										if (BgL__ortest_1130z00_1604)
											{	/* Fxop/walk.scm 132 */
												BgL_test2023z00_2900 = BgL__ortest_1130z00_1604;
											}
										else
											{	/* Fxop/walk.scm 133 */
												BgL_typez00_bglt BgL_arg1604z00_1605;

												{
													BgL_variablez00_bglt BgL_auxz00_2940;

													{	/* Fxop/walk.scm 133 */
														obj_t BgL_pairz00_2114;

														{	/* Fxop/walk.scm 133 */
															obj_t BgL_pairz00_2113;

															BgL_pairz00_2113 =
																CDR(((obj_t) BgL_bindingsz00_1593));
															BgL_pairz00_2114 = CAR(BgL_pairz00_2113);
														}
														BgL_auxz00_2940 =
															((BgL_variablez00_bglt) CAR(BgL_pairz00_2114));
													}
													BgL_arg1604z00_1605 =
														(((BgL_variablez00_bglt) COBJECT(BgL_auxz00_2940))->
														BgL_typez00);
												}
												BgL_test2023z00_2900 =
													(
													((obj_t) BgL_arg1604z00_1605) ==
													BGl_za2longza2z00zztype_cachez00);
											}
									}
							}
					}
					if (BgL_test2023z00_2900)
						{	/* Fxop/walk.scm 128 */
							if (BGl_isazf3zf3zz__objectz00(
									((obj_t) BgL_bodyz00_1594), BGl_appz00zzast_nodez00))
								{	/* Fxop/walk.scm 134 */
									if (BGl_longzd2ze3bintzf3ze70z25zzfxop_walkz00(
											((BgL_appz00_bglt) BgL_bodyz00_1594)))
										{	/* Fxop/walk.scm 136 */
											obj_t BgL_arg1597z00_1600;

											{	/* Fxop/walk.scm 136 */
												obj_t BgL_pairz00_2117;

												BgL_pairz00_2117 =
													(((BgL_appz00_bglt) COBJECT(
															((BgL_appz00_bglt) BgL_bodyz00_1594)))->
													BgL_argsz00);
												BgL_arg1597z00_1600 = CAR(BgL_pairz00_2117);
											}
											return
												BGl_findzd2fxopze70z35zzfxop_walkz00
												(BgL_arg1597z00_1600);
										}
									else
										{	/* Fxop/walk.scm 135 */
											return BFALSE;
										}
								}
							else
								{	/* Fxop/walk.scm 134 */
									return BFALSE;
								}
						}
					else
						{	/* Fxop/walk.scm 128 */
							return BFALSE;
						}
				}
			else
				{	/* Fxop/walk.scm 127 */
					return BFALSE;
				}
		}

	}



/* fxop-simple-int-letvar?~0 */
	obj_t BGl_fxopzd2simplezd2intzd2letvarzf3ze70zc6zzfxop_walkz00(obj_t
		BgL_bindingsz00_1618, BgL_nodez00_bglt BgL_bodyz00_1619)
	{
		{	/* Fxop/walk.scm 147 */
			if ((bgl_list_length(BgL_bindingsz00_1618) == ((long) 1)))
				{	/* Fxop/walk.scm 144 */
					bool_t BgL_test2032z00_2962;

					{	/* Fxop/walk.scm 144 */
						obj_t BgL_arg1641z00_1627;

						{	/* Fxop/walk.scm 144 */
							obj_t BgL_pairz00_2123;

							BgL_pairz00_2123 = CAR(((obj_t) BgL_bindingsz00_1618));
							BgL_arg1641z00_1627 = CDR(BgL_pairz00_2123);
						}
						BgL_test2032z00_2962 =
							BGl_bintzd2ze3longzf3ze70z25zzfxop_walkz00(BgL_arg1641z00_1627);
					}
					if (BgL_test2032z00_2962)
						{	/* Fxop/walk.scm 144 */
							if (BGl_isazf3zf3zz__objectz00(
									((obj_t) BgL_bodyz00_1619), BGl_appz00zzast_nodez00))
								{	/* Fxop/walk.scm 145 */
									if (BGl_longzd2ze3bintzf3ze70z25zzfxop_walkz00(
											((BgL_appz00_bglt) BgL_bodyz00_1619)))
										{	/* Fxop/walk.scm 147 */
											obj_t BgL_arg1639z00_1625;

											{	/* Fxop/walk.scm 147 */
												obj_t BgL_pairz00_2125;

												BgL_pairz00_2125 =
													(((BgL_appz00_bglt) COBJECT(
															((BgL_appz00_bglt) BgL_bodyz00_1619)))->
													BgL_argsz00);
												BgL_arg1639z00_1625 = CAR(BgL_pairz00_2125);
											}
											return
												BGl_findzd2fxopze70z35zzfxop_walkz00
												(BgL_arg1639z00_1625);
										}
									else
										{	/* Fxop/walk.scm 146 */
											return BFALSE;
										}
								}
							else
								{	/* Fxop/walk.scm 145 */
									return BFALSE;
								}
						}
					else
						{	/* Fxop/walk.scm 144 */
							return BFALSE;
						}
				}
			else
				{	/* Fxop/walk.scm 143 */
					return BFALSE;
				}
		}

	}



/* fxop-bool-letvar?~0 */
	obj_t BGl_fxopzd2boolzd2letvarzf3ze70z14zzfxop_walkz00(obj_t
		BgL_bindingsz00_1629, BgL_nodez00_bglt BgL_bodyz00_1630)
	{
		{	/* Fxop/walk.scm 158 */
			{	/* Fxop/walk.scm 154 */
				bool_t BgL_test2035z00_2977;

				{	/* Fxop/walk.scm 154 */
					bool_t BgL_res1941z00_2126;

					BgL_res1941z00_2126 =
						BGl_isazf3zf3zz__objectz00(
						((obj_t) BgL_bodyz00_1630), BGl_appz00zzast_nodez00);
					BgL_test2035z00_2977 = BgL_res1941z00_2126;
				}
				if (BgL_test2035z00_2977)
					{	/* Fxop/walk.scm 154 */
						if ((bgl_list_length(BgL_bindingsz00_1629) == ((long) 2)))
							{	/* Fxop/walk.scm 156 */
								bool_t BgL_test2037z00_2983;

								{	/* Fxop/walk.scm 156 */
									bool_t BgL_test2038z00_2984;

									{	/* Fxop/walk.scm 156 */
										obj_t BgL_arg1664z00_1639;

										{	/* Fxop/walk.scm 156 */
											obj_t BgL_pairz00_2132;

											BgL_pairz00_2132 = CAR(((obj_t) BgL_bindingsz00_1629));
											BgL_arg1664z00_1639 = CDR(BgL_pairz00_2132);
										}
										BgL_test2038z00_2984 =
											BGl_bintzd2ze3longzf3ze70z25zzfxop_walkz00
											(BgL_arg1664z00_1639);
									}
									if (BgL_test2038z00_2984)
										{	/* Fxop/walk.scm 157 */
											obj_t BgL_arg1663z00_1638;

											{	/* Fxop/walk.scm 157 */
												obj_t BgL_pairz00_2138;

												{	/* Fxop/walk.scm 157 */
													obj_t BgL_pairz00_2137;

													BgL_pairz00_2137 =
														CDR(((obj_t) BgL_bindingsz00_1629));
													BgL_pairz00_2138 = CAR(BgL_pairz00_2137);
												}
												BgL_arg1663z00_1638 = CDR(BgL_pairz00_2138);
											}
											BgL_test2037z00_2983 =
												BGl_bintzd2ze3longzf3ze70z25zzfxop_walkz00
												(BgL_arg1663z00_1638);
										}
									else
										{	/* Fxop/walk.scm 156 */
											BgL_test2037z00_2983 = ((bool_t) 0);
										}
								}
								if (BgL_test2037z00_2983)
									{	/* Fxop/walk.scm 158 */
										obj_t BgL_arg1652z00_1635;

										{	/* Fxop/walk.scm 158 */
											obj_t BgL_pairz00_2140;

											BgL_pairz00_2140 =
												(((BgL_appz00_bglt) COBJECT(
														((BgL_appz00_bglt) BgL_bodyz00_1630)))->
												BgL_argsz00);
											BgL_arg1652z00_1635 = CAR(BgL_pairz00_2140);
										}
										return
											BGl_findzd2fxopze70z35zzfxop_walkz00(BgL_arg1652z00_1635);
									}
								else
									{	/* Fxop/walk.scm 156 */
										return BFALSE;
									}
							}
						else
							{	/* Fxop/walk.scm 155 */
								return BFALSE;
							}
					}
				else
					{	/* Fxop/walk.scm 154 */
						return BFALSE;
					}
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzfxop_walkz00()
	{
		{	/* Fxop/walk.scm 21 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1971z00zzfxop_walkz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1971z00zzfxop_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 373082201),
				BSTRING_TO_STRING(BGl_string1971z00zzfxop_walkz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1971z00zzfxop_walkz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1971z00zzfxop_walkz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1971z00zzfxop_walkz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1971z00zzfxop_walkz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 462333171),
				BSTRING_TO_STRING(BGl_string1971z00zzfxop_walkz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1971z00zzfxop_walkz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string1971z00zzfxop_walkz00));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 315247917),
				BSTRING_TO_STRING(BGl_string1971z00zzfxop_walkz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string1971z00zzfxop_walkz00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 163121588),
				BSTRING_TO_STRING(BGl_string1971z00zzfxop_walkz00));
			BGl_modulezd2initializa7ationz75zzast_privatez00(((long) 135263818),
				BSTRING_TO_STRING(BGl_string1971z00zzfxop_walkz00));
			BGl_modulezd2initializa7ationz75zzast_lvtypez00(((long) 189769760),
				BSTRING_TO_STRING(BGl_string1971z00zzfxop_walkz00));
			BGl_modulezd2initializa7ationz75zzast_dumpz00(((long) 271707736),
				BSTRING_TO_STRING(BGl_string1971z00zzfxop_walkz00));
			BGl_modulezd2initializa7ationz75zzast_walkz00(((long) 343174175),
				BSTRING_TO_STRING(BGl_string1971z00zzfxop_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1971z00zzfxop_walkz00));
			return
				BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string1971z00zzfxop_walkz00));
		}

	}

#ifdef __cplusplus
}
#endif
