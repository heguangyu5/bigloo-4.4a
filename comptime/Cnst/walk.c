/*===========================================================================*/
/*   (Cnst/walk.scm)                                                         */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cnst/walk.scm) */
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


	extern obj_t BGl_za2unsafezd2arityza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cnstzd2walkz12zc0zzcnst_walkz00(obj_t);
	static obj_t BGl_za2oldzd2unsafezd2versionza2z00zzcnst_walkz00 = BUNSPEC;
	static obj_t BGl_z62cnstzd2walkz12za2zzcnst_walkz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	static obj_t BGl_objectzd2initzd2zzcnst_walkz00();
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_za2initzd2modeza2zd2zzengine_paramz00;
	static obj_t BGl_za2oldzd2unsafezd2structza2z00zzcnst_walkz00 = BUNSPEC;
	static obj_t BGl_appendzd221011zd2zzcnst_walkz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzcnst_walkz00();
	static obj_t BGl_za2oldzd2unsafezd2arityza2z00zzcnst_walkz00 = BUNSPEC;
	extern obj_t BGl_enterzd2functionzd2zztools_errorz00(obj_t);
	extern obj_t BGl_za2unsafezd2typeza2zd2zzengine_paramz00;
	static obj_t BGl_gczd2rootszd2initz00zzcnst_walkz00();
	static obj_t BGl_za2oldzd2unsafezd2typeza2z00zzcnst_walkz00 = BUNSPEC;
	extern obj_t BGl_initializa7ezd2astz75zzcnst_initializa7eza7();
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	extern obj_t BGl_za2unsafezd2versionza2zd2zzengine_paramz00;
	extern BgL_nodez00_bglt BGl_cnstz12z12zzcnst_nodez00(BgL_nodez00_bglt);
	static obj_t BGl_requirezd2initializa7ationz75zzcnst_walkz00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zzcnst_walkz00();
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzcnst_walkz00();
	extern obj_t BGl_leavezd2functionzd2zztools_errorz00();
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	extern obj_t BGl_removezd2varzd2zzast_removez00(obj_t, obj_t);
	extern obj_t BGl_za2unsafezd2structza2zd2zzengine_paramz00;
	extern obj_t BGl_za2unsafezd2rangeza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_exitz00zz__errorz00(obj_t);
	static obj_t BGl_z62safez12z70zzcnst_walkz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcnst_walkz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcnst_initializa7eza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcnst_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcnst_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcnst_allocz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_removez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_passz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_z62unsafez12z70zzcnst_walkz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzcnst_walkz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzcnst_walkz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzcnst_walkz00();
	static obj_t BGl_za2oldzd2unsafezd2rangeza2z00zzcnst_walkz00 = BUNSPEC;
	static obj_t __cnst[4];


	   
		 
		DEFINE_STRING(BGl_string1400z00zzcnst_walkz00,
		BgL_bgl_string1400za700za7za7c1419za7, " occured, ending ...", 20);
	      DEFINE_STRING(BGl_string1401z00zzcnst_walkz00,
		BgL_bgl_string1401za700za7za7c1420za7, "failure during postlude hook", 28);
	      DEFINE_STRING(BGl_string1402z00zzcnst_walkz00,
		BgL_bgl_string1402za700za7za7c1421za7, "cnst_walk", 9);
	      DEFINE_STRING(BGl_string1403z00zzcnst_walkz00,
		BgL_bgl_string1403za700za7za7c1422za7,
		"(stop-cnst-alloc! safe!) cnst pass-started (start-cnst-cache! start-cnst-alloc! unsafe!) ",
		89);
	extern obj_t BGl_stopzd2cnstzd2allocz12zd2envzc0zzcnst_allocz00;
	extern obj_t BGl_startzd2cnstzd2cachez12zd2envzc0zzcnst_cachez00;
	   
		 
		DEFINE_STRING(BGl_string1393z00zzcnst_walkz00,
		BgL_bgl_string1393za700za7za7c1423za7, "Cnst", 4);
	      DEFINE_STRING(BGl_string1394z00zzcnst_walkz00,
		BgL_bgl_string1394za700za7za7c1424za7, "   . ", 5);
	      DEFINE_STRING(BGl_string1395z00zzcnst_walkz00,
		BgL_bgl_string1395za700za7za7c1425za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string1396z00zzcnst_walkz00,
		BgL_bgl_string1396za700za7za7c1426za7, "      [", 7);
	      DEFINE_STRING(BGl_string1397z00zzcnst_walkz00,
		BgL_bgl_string1397za700za7za7c1427za7, " error", 6);
	      DEFINE_STRING(BGl_string1398z00zzcnst_walkz00,
		BgL_bgl_string1398za700za7za7c1428za7, "s", 1);
	      DEFINE_STRING(BGl_string1399z00zzcnst_walkz00,
		BgL_bgl_string1399za700za7za7c1429za7, "", 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_safez12zd2envzc0zzcnst_walkz00,
		BgL_bgl_za762safeza712za770za7za7c1430za7, BGl_z62safez12z70zzcnst_walkz00,
		0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_unsafez12zd2envzc0zzcnst_walkz00,
		BgL_bgl_za762unsafeza712za770za71431z00, BGl_z62unsafez12z70zzcnst_walkz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cnstzd2walkz12zd2envz12zzcnst_walkz00,
		BgL_bgl_za762cnstza7d2walkza711432za7,
		BGl_z62cnstzd2walkz12za2zzcnst_walkz00, 0L, BUNSPEC, 1);
	extern obj_t BGl_startzd2cnstzd2allocz12zd2envzc0zzcnst_allocz00;

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void *) (&BGl_za2oldzd2unsafezd2versionza2z00zzcnst_walkz00));
		     ADD_ROOT((void *) (&BGl_za2oldzd2unsafezd2structza2z00zzcnst_walkz00));
		     ADD_ROOT((void *) (&BGl_za2oldzd2unsafezd2arityza2z00zzcnst_walkz00));
		     ADD_ROOT((void *) (&BGl_za2oldzd2unsafezd2typeza2z00zzcnst_walkz00));
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzcnst_walkz00));
		     ADD_ROOT((void *) (&BGl_za2oldzd2unsafezd2rangeza2z00zzcnst_walkz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcnst_walkz00(long
		BgL_checksumz00_1604, char *BgL_fromz00_1605)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcnst_walkz00))
				{
					BGl_requirezd2initializa7ationz75zzcnst_walkz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzcnst_walkz00();
					BGl_libraryzd2moduleszd2initz00zzcnst_walkz00();
					BGl_cnstzd2initzd2zzcnst_walkz00();
					BGl_importedzd2moduleszd2initz00zzcnst_walkz00();
					return BGl_toplevelzd2initzd2zzcnst_walkz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcnst_walkz00()
	{
		{	/* Cnst/walk.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"cnst_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"cnst_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"cnst_walk");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cnst_walk");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"cnst_walk");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "cnst_walk");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"cnst_walk");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"cnst_walk");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcnst_walkz00()
	{
		{	/* Cnst/walk.scm 15 */
			{	/* Cnst/walk.scm 15 */
				obj_t BgL_cportz00_1591;

				{	/* Cnst/walk.scm 15 */
					obj_t BgL_stringz00_1599;

					BgL_stringz00_1599 = BGl_string1403z00zzcnst_walkz00;
					{	/* Cnst/walk.scm 15 */
						obj_t BgL_startz00_1600;

						BgL_startz00_1600 = BINT(((long) 0));
						{	/* Cnst/walk.scm 15 */
							obj_t BgL_endz00_1601;

							BgL_endz00_1601 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_1599)));
							{	/* Cnst/walk.scm 15 */

								BgL_cportz00_1591 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_1599, BgL_startz00_1600, BgL_endz00_1601);
				}}}}
				{
					long BgL_iz00_1592;

					BgL_iz00_1592 = ((long) 3);
				BgL_loopz00_1593:
					if ((BgL_iz00_1592 == ((long) -1)))
						{	/* Cnst/walk.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Cnst/walk.scm 15 */
							{	/* Cnst/walk.scm 15 */
								obj_t BgL_arg1417z00_1595;

								{	/* Cnst/walk.scm 15 */

									{	/* Cnst/walk.scm 15 */
										obj_t BgL_locationz00_1597;

										BgL_locationz00_1597 = BBOOL(((bool_t) 0));
										{	/* Cnst/walk.scm 15 */

											BgL_arg1417z00_1595 =
												BGl_readz00zz__readerz00(BgL_cportz00_1591,
												BgL_locationz00_1597);
										}
									}
								}
								{	/* Cnst/walk.scm 15 */
									int BgL_tmpz00_1631;

									BgL_tmpz00_1631 = (int) (BgL_iz00_1592);
									CNST_TABLE_SET(BgL_tmpz00_1631, BgL_arg1417z00_1595);
							}}
							{	/* Cnst/walk.scm 15 */
								int BgL_auxz00_1598;

								BgL_auxz00_1598 = (int) ((BgL_iz00_1592 - ((long) 1)));
								{
									long BgL_iz00_1636;

									BgL_iz00_1636 = (long) (BgL_auxz00_1598);
									BgL_iz00_1592 = BgL_iz00_1636;
									goto BgL_loopz00_1593;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzcnst_walkz00()
	{
		{	/* Cnst/walk.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcnst_walkz00()
	{
		{	/* Cnst/walk.scm 15 */
			BGl_za2oldzd2unsafezd2typeza2z00zzcnst_walkz00 = BFALSE;
			BGl_za2oldzd2unsafezd2arityza2z00zzcnst_walkz00 = BFALSE;
			BGl_za2oldzd2unsafezd2rangeza2z00zzcnst_walkz00 = BFALSE;
			BGl_za2oldzd2unsafezd2structza2z00zzcnst_walkz00 = BFALSE;
			return (BGl_za2oldzd2unsafezd2versionza2z00zzcnst_walkz00 =
				BFALSE, BUNSPEC);
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzcnst_walkz00(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_1317;

				BgL_headz00_1317 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_1318;
					obj_t BgL_tailz00_1319;

					BgL_prevz00_1318 = BgL_headz00_1317;
					BgL_tailz00_1319 = BgL_l1z00_1;
				BgL_loopz00_1320:
					if (PAIRP(BgL_tailz00_1319))
						{
							obj_t BgL_newzd2prevzd2_1322;

							BgL_newzd2prevzd2_1322 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_1319), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_1318, BgL_newzd2prevzd2_1322);
							{
								obj_t BgL_tailz00_1646;
								obj_t BgL_prevz00_1645;

								BgL_prevz00_1645 = BgL_newzd2prevzd2_1322;
								BgL_tailz00_1646 = CDR(BgL_tailz00_1319);
								BgL_tailz00_1319 = BgL_tailz00_1646;
								BgL_prevz00_1318 = BgL_prevz00_1645;
								goto BgL_loopz00_1320;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_1317);
				}
			}
		}

	}



/* cnst-walk! */
	BGL_EXPORTED_DEF obj_t BGl_cnstzd2walkz12zc0zzcnst_walkz00(obj_t
		BgL_globalsz00_3)
	{
		{	/* Cnst/walk.scm 34 */
			{	/* Cnst/walk.scm 35 */
				obj_t BgL_list1240z00_1325;

				{	/* Cnst/walk.scm 35 */
					obj_t BgL_arg1242z00_1326;

					{	/* Cnst/walk.scm 35 */
						obj_t BgL_arg1243z00_1327;

						BgL_arg1243z00_1327 =
							MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
						BgL_arg1242z00_1326 =
							MAKE_YOUNG_PAIR(BGl_string1393z00zzcnst_walkz00,
							BgL_arg1243z00_1327);
					}
					BgL_list1240z00_1325 =
						MAKE_YOUNG_PAIR(BGl_string1394z00zzcnst_walkz00,
						BgL_arg1242z00_1326);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list1240z00_1325);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 =
				BGl_string1393z00zzcnst_walkz00;
			{	/* Cnst/walk.scm 35 */
				obj_t BgL_g1108z00_1328;
				obj_t BgL_g1109z00_1329;

				{	/* Cnst/walk.scm 35 */
					obj_t BgL_list1255z00_1342;

					{	/* Cnst/walk.scm 35 */
						obj_t BgL_arg1256z00_1343;

						{	/* Cnst/walk.scm 35 */
							obj_t BgL_arg1258z00_1344;

							BgL_arg1258z00_1344 =
								MAKE_YOUNG_PAIR(BGl_unsafez12zd2envzc0zzcnst_walkz00, BNIL);
							BgL_arg1256z00_1343 =
								MAKE_YOUNG_PAIR
								(BGl_startzd2cnstzd2allocz12zd2envzc0zzcnst_allocz00,
								BgL_arg1258z00_1344);
						}
						BgL_list1255z00_1342 =
							MAKE_YOUNG_PAIR
							(BGl_startzd2cnstzd2cachez12zd2envzc0zzcnst_cachez00,
							BgL_arg1256z00_1343);
					}
					BgL_g1108z00_1328 = BgL_list1255z00_1342;
				}
				BgL_g1109z00_1329 = CNST_TABLE_REF(((long) 0));
				{
					obj_t BgL_hooksz00_1331;
					obj_t BgL_hnamesz00_1332;

					BgL_hooksz00_1331 = BgL_g1108z00_1328;
					BgL_hnamesz00_1332 = BgL_g1109z00_1329;
				BgL_zc3z04anonymousza31244ze3z87_1333:
					if (NULLP(BgL_hooksz00_1331))
						{	/* Cnst/walk.scm 35 */
							CNST_TABLE_REF(((long) 1));
						}
					else
						{	/* Cnst/walk.scm 35 */
							bool_t BgL_test1437z00_1663;

							{	/* Cnst/walk.scm 35 */
								obj_t BgL_fun1254z00_1340;

								BgL_fun1254z00_1340 = CAR(((obj_t) BgL_hooksz00_1331));
								BgL_test1437z00_1663 =
									CBOOL(PROCEDURE_ENTRY(BgL_fun1254z00_1340)
									(BgL_fun1254z00_1340, BEOA));
							}
							if (BgL_test1437z00_1663)
								{	/* Cnst/walk.scm 35 */
									obj_t BgL_arg1250z00_1337;
									obj_t BgL_arg1252z00_1338;

									BgL_arg1250z00_1337 = CDR(((obj_t) BgL_hooksz00_1331));
									BgL_arg1252z00_1338 = CDR(((obj_t) BgL_hnamesz00_1332));
									{
										obj_t BgL_hnamesz00_1675;
										obj_t BgL_hooksz00_1674;

										BgL_hooksz00_1674 = BgL_arg1250z00_1337;
										BgL_hnamesz00_1675 = BgL_arg1252z00_1338;
										BgL_hnamesz00_1332 = BgL_hnamesz00_1675;
										BgL_hooksz00_1331 = BgL_hooksz00_1674;
										goto BgL_zc3z04anonymousza31244ze3z87_1333;
									}
								}
							else
								{	/* Cnst/walk.scm 35 */
									obj_t BgL_arg1253z00_1339;

									BgL_arg1253z00_1339 = CAR(((obj_t) BgL_hnamesz00_1332));
									BGl_internalzd2errorzd2zztools_errorz00
										(BGl_string1393z00zzcnst_walkz00,
										BGl_string1395z00zzcnst_walkz00, BgL_arg1253z00_1339);
								}
						}
				}
			}
			{	/* Cnst/walk.scm 36 */
				obj_t BgL_list1259z00_1345;

				{	/* Cnst/walk.scm 36 */
					obj_t BgL_arg1263z00_1346;

					{	/* Cnst/walk.scm 36 */
						obj_t BgL_arg1268z00_1347;

						{	/* Cnst/walk.scm 36 */
							obj_t BgL_arg1270z00_1348;

							BgL_arg1270z00_1348 =
								MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
							BgL_arg1268z00_1347 =
								MAKE_YOUNG_PAIR(BCHAR(((unsigned char) ']')),
								BgL_arg1270z00_1348);
						}
						BgL_arg1263z00_1346 =
							MAKE_YOUNG_PAIR(BGl_za2initzd2modeza2zd2zzengine_paramz00,
							BgL_arg1268z00_1347);
					}
					BgL_list1259z00_1345 =
						MAKE_YOUNG_PAIR(BGl_string1396z00zzcnst_walkz00,
						BgL_arg1263z00_1346);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 2)), BgL_list1259z00_1345);
			}
			{
				obj_t BgL_l1226z00_1350;

				BgL_l1226z00_1350 = BgL_globalsz00_3;
			BgL_zc3z04anonymousza31271ze3z87_1351:
				if (PAIRP(BgL_l1226z00_1350))
					{	/* Cnst/walk.scm 37 */
						{	/* Cnst/walk.scm 38 */
							obj_t BgL_globalz00_1353;

							BgL_globalz00_1353 = CAR(BgL_l1226z00_1350);
							{	/* Cnst/walk.scm 39 */
								obj_t BgL_arg1273z00_1354;

								BgL_arg1273z00_1354 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt)
												((BgL_globalz00_bglt) BgL_globalz00_1353))))->
									BgL_idz00);
								BGl_enterzd2functionzd2zztools_errorz00(BgL_arg1273z00_1354);
							}
							{	/* Cnst/walk.scm 40 */
								BgL_valuez00_bglt BgL_funz00_1355;

								BgL_funz00_1355 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt)
												((BgL_globalz00_bglt) BgL_globalz00_1353))))->
									BgL_valuez00);
								{	/* Cnst/walk.scm 40 */
									BgL_nodez00_bglt BgL_newzd2bodyzd2_1356;

									{	/* Cnst/walk.scm 41 */
										obj_t BgL_arg1274z00_1357;

										BgL_arg1274z00_1357 =
											(((BgL_sfunz00_bglt) COBJECT(
													((BgL_sfunz00_bglt) BgL_funz00_1355)))->BgL_bodyz00);
										BgL_newzd2bodyzd2_1356 =
											BGl_cnstz12z12zzcnst_nodez00(
											((BgL_nodez00_bglt) BgL_arg1274z00_1357));
									}
									{	/* Cnst/walk.scm 41 */

										((((BgL_sfunz00_bglt) COBJECT(
														((BgL_sfunz00_bglt) BgL_funz00_1355)))->
												BgL_bodyz00) =
											((obj_t) ((obj_t) BgL_newzd2bodyzd2_1356)), BUNSPEC);
									}
								}
							}
							BGl_leavezd2functionzd2zztools_errorz00();
						}
						{
							obj_t BgL_l1226z00_1705;

							BgL_l1226z00_1705 = CDR(BgL_l1226z00_1350);
							BgL_l1226z00_1350 = BgL_l1226z00_1705;
							goto BgL_zc3z04anonymousza31271ze3z87_1351;
						}
					}
				else
					{	/* Cnst/walk.scm 37 */
						((bool_t) 1);
					}
			}
			{	/* Cnst/walk.scm 45 */
				obj_t BgL_valuez00_1360;

				{	/* Cnst/walk.scm 45 */
					obj_t BgL_arg1292z00_1386;

					BgL_arg1292z00_1386 =
						BGl_appendzd221011zd2zzcnst_walkz00
						(BGl_initializa7ezd2astz75zzcnst_initializa7eza7(),
						BgL_globalsz00_3);
					BgL_valuez00_1360 =
						BGl_removezd2varzd2zzast_removez00(CNST_TABLE_REF(((long) 2)),
						BgL_arg1292z00_1386);
				}
				if (
					((long) CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00) >
						((long) 0)))
					{	/* Cnst/walk.scm 45 */
						{	/* Cnst/walk.scm 45 */
							obj_t BgL_port1228z00_1362;

							{	/* Cnst/walk.scm 45 */
								obj_t BgL_res1388z00_1568;

								{	/* Cnst/walk.scm 45 */
									obj_t BgL_tmpz00_1714;

									BgL_tmpz00_1714 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res1388z00_1568 =
										BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_1714);
								}
								BgL_port1228z00_1362 = BgL_res1388z00_1568;
							}
							bgl_display_obj
								(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
								BgL_port1228z00_1362);
							bgl_display_string(BGl_string1397z00zzcnst_walkz00,
								BgL_port1228z00_1362);
							{	/* Cnst/walk.scm 45 */
								obj_t BgL_arg1277z00_1363;

								{	/* Cnst/walk.scm 45 */
									bool_t BgL_test1440z00_1719;

									if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
										(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
										{	/* Cnst/walk.scm 45 */
											if (INTEGERP
												(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
												{	/* Cnst/walk.scm 45 */
													BgL_test1440z00_1719 =
														(
														(long)
														CINT
														(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00)
														> ((long) 1));
												}
											else
												{	/* Cnst/walk.scm 45 */
													BgL_test1440z00_1719 =
														BGl_2ze3ze3zz__r4_numbers_6_5z00
														(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
														BINT(((long) 1)));
										}}
									else
										{	/* Cnst/walk.scm 45 */
											BgL_test1440z00_1719 = ((bool_t) 0);
										}
									if (BgL_test1440z00_1719)
										{	/* Cnst/walk.scm 45 */
											BgL_arg1277z00_1363 = BGl_string1398z00zzcnst_walkz00;
										}
									else
										{	/* Cnst/walk.scm 45 */
											BgL_arg1277z00_1363 = BGl_string1399z00zzcnst_walkz00;
										}
								}
								bgl_display_obj(BgL_arg1277z00_1363, BgL_port1228z00_1362);
							}
							bgl_display_string(BGl_string1400z00zzcnst_walkz00,
								BgL_port1228z00_1362);
							bgl_display_char(((unsigned char) 10), BgL_port1228z00_1362);
						}
						{	/* Cnst/walk.scm 45 */
							obj_t BgL_list1281z00_1369;

							BgL_list1281z00_1369 = MAKE_YOUNG_PAIR(BINT(((long) -1)), BNIL);
							return BGl_exitz00zz__errorz00(BgL_list1281z00_1369);
						}
					}
				else
					{	/* Cnst/walk.scm 45 */
						obj_t BgL_g1110z00_1370;
						obj_t BgL_g1111z00_1371;

						{	/* Cnst/walk.scm 45 */
							obj_t BgL_list1290z00_1384;

							{	/* Cnst/walk.scm 45 */
								obj_t BgL_arg1291z00_1385;

								BgL_arg1291z00_1385 =
									MAKE_YOUNG_PAIR(BGl_safez12zd2envzc0zzcnst_walkz00, BNIL);
								BgL_list1290z00_1384 =
									MAKE_YOUNG_PAIR
									(BGl_stopzd2cnstzd2allocz12zd2envzc0zzcnst_allocz00,
									BgL_arg1291z00_1385);
							}
							BgL_g1110z00_1370 = BgL_list1290z00_1384;
						}
						BgL_g1111z00_1371 = CNST_TABLE_REF(((long) 3));
						{
							obj_t BgL_hooksz00_1373;
							obj_t BgL_hnamesz00_1374;

							BgL_hooksz00_1373 = BgL_g1110z00_1370;
							BgL_hnamesz00_1374 = BgL_g1111z00_1371;
						BgL_zc3z04anonymousza31282ze3z87_1375:
							if (NULLP(BgL_hooksz00_1373))
								{	/* Cnst/walk.scm 45 */
									return BgL_valuez00_1360;
								}
							else
								{	/* Cnst/walk.scm 45 */
									bool_t BgL_test1444z00_1739;

									{	/* Cnst/walk.scm 45 */
										obj_t BgL_fun1289z00_1382;

										BgL_fun1289z00_1382 = CAR(((obj_t) BgL_hooksz00_1373));
										BgL_test1444z00_1739 =
											CBOOL(PROCEDURE_ENTRY(BgL_fun1289z00_1382)
											(BgL_fun1289z00_1382, BEOA));
									}
									if (BgL_test1444z00_1739)
										{	/* Cnst/walk.scm 45 */
											obj_t BgL_arg1286z00_1379;
											obj_t BgL_arg1287z00_1380;

											BgL_arg1286z00_1379 = CDR(((obj_t) BgL_hooksz00_1373));
											BgL_arg1287z00_1380 = CDR(((obj_t) BgL_hnamesz00_1374));
											{
												obj_t BgL_hnamesz00_1751;
												obj_t BgL_hooksz00_1750;

												BgL_hooksz00_1750 = BgL_arg1286z00_1379;
												BgL_hnamesz00_1751 = BgL_arg1287z00_1380;
												BgL_hnamesz00_1374 = BgL_hnamesz00_1751;
												BgL_hooksz00_1373 = BgL_hooksz00_1750;
												goto BgL_zc3z04anonymousza31282ze3z87_1375;
											}
										}
									else
										{	/* Cnst/walk.scm 45 */
											obj_t BgL_arg1288z00_1381;

											BgL_arg1288z00_1381 = CAR(((obj_t) BgL_hnamesz00_1374));
											return
												BGl_internalzd2errorzd2zztools_errorz00
												(BGl_za2currentzd2passza2zd2zzengine_passz00,
												BGl_string1401z00zzcnst_walkz00, BgL_arg1288z00_1381);
										}
								}
						}
					}
			}
		}

	}



/* &cnst-walk! */
	obj_t BGl_z62cnstzd2walkz12za2zzcnst_walkz00(obj_t BgL_envz00_1584,
		obj_t BgL_globalsz00_1585)
	{
		{	/* Cnst/walk.scm 34 */
			return BGl_cnstzd2walkz12zc0zzcnst_walkz00(BgL_globalsz00_1585);
		}

	}



/* &unsafe! */
	obj_t BGl_z62unsafez12z70zzcnst_walkz00(obj_t BgL_envz00_1586)
	{
		{	/* Cnst/walk.scm 52 */
			BGl_za2oldzd2unsafezd2typeza2z00zzcnst_walkz00 =
				BGl_za2unsafezd2typeza2zd2zzengine_paramz00;
			BGl_za2unsafezd2typeza2zd2zzengine_paramz00 = BTRUE;
			BGl_za2oldzd2unsafezd2arityza2z00zzcnst_walkz00 =
				BGl_za2unsafezd2arityza2zd2zzengine_paramz00;
			BGl_za2unsafezd2arityza2zd2zzengine_paramz00 = BTRUE;
			BGl_za2oldzd2unsafezd2rangeza2z00zzcnst_walkz00 =
				BGl_za2unsafezd2rangeza2zd2zzengine_paramz00;
			BGl_za2unsafezd2rangeza2zd2zzengine_paramz00 = BTRUE;
			BGl_za2oldzd2unsafezd2structza2z00zzcnst_walkz00 =
				BGl_za2unsafezd2structza2zd2zzengine_paramz00;
			BGl_za2unsafezd2structza2zd2zzengine_paramz00 = BTRUE;
			BGl_za2oldzd2unsafezd2versionza2z00zzcnst_walkz00 =
				BGl_za2unsafezd2versionza2zd2zzengine_paramz00;
			return (BGl_za2unsafezd2versionza2zd2zzengine_paramz00 = BTRUE, BUNSPEC);
		}

	}



/* &safe! */
	obj_t BGl_z62safez12z70zzcnst_walkz00(obj_t BgL_envz00_1589)
	{
		{	/* Cnst/walk.scm 67 */
			BGl_za2unsafezd2typeza2zd2zzengine_paramz00 =
				BGl_za2oldzd2unsafezd2typeza2z00zzcnst_walkz00;
			BGl_za2unsafezd2arityza2zd2zzengine_paramz00 =
				BGl_za2oldzd2unsafezd2arityza2z00zzcnst_walkz00;
			BGl_za2unsafezd2rangeza2zd2zzengine_paramz00 =
				BGl_za2oldzd2unsafezd2rangeza2z00zzcnst_walkz00;
			BGl_za2unsafezd2structza2zd2zzengine_paramz00 =
				BGl_za2oldzd2unsafezd2structza2z00zzcnst_walkz00;
			return (BGl_za2unsafezd2versionza2zd2zzengine_paramz00 =
				BGl_za2oldzd2unsafezd2versionza2z00zzcnst_walkz00, BUNSPEC);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzcnst_walkz00()
	{
		{	/* Cnst/walk.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcnst_walkz00()
	{
		{	/* Cnst/walk.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcnst_walkz00()
	{
		{	/* Cnst/walk.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcnst_walkz00()
	{
		{	/* Cnst/walk.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1402z00zzcnst_walkz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1402z00zzcnst_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 373082201),
				BSTRING_TO_STRING(BGl_string1402z00zzcnst_walkz00));
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1402z00zzcnst_walkz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1402z00zzcnst_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1402z00zzcnst_walkz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1402z00zzcnst_walkz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1402z00zzcnst_walkz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1402z00zzcnst_walkz00));
			BGl_modulezd2initializa7ationz75zzast_removez00(((long) 383247839),
				BSTRING_TO_STRING(BGl_string1402z00zzcnst_walkz00));
			BGl_modulezd2initializa7ationz75zzcnst_allocz00(((long) 192700095),
				BSTRING_TO_STRING(BGl_string1402z00zzcnst_walkz00));
			BGl_modulezd2initializa7ationz75zzcnst_cachez00(((long) 398482),
				BSTRING_TO_STRING(BGl_string1402z00zzcnst_walkz00));
			BGl_modulezd2initializa7ationz75zzcnst_nodez00(((long) 89013019),
				BSTRING_TO_STRING(BGl_string1402z00zzcnst_walkz00));
			return
				BGl_modulezd2initializa7ationz75zzcnst_initializa7eza7(((long)
					259844958), BSTRING_TO_STRING(BGl_string1402z00zzcnst_walkz00));
		}

	}

#ifdef __cplusplus
}
#endif
