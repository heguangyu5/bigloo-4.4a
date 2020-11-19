/*===========================================================================*/
/*   (Inline/walk.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Inline/walk.scm) */
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


	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	static obj_t BGl_objectzd2initzd2zzinline_walkz00();
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_inlinezd2setupz12zc0zzinline_walkz00(obj_t);
	static obj_t BGl_methodzd2initzd2zzinline_walkz00();
	BGL_EXPORTED_DECL obj_t BGl_inlinezd2walkz12zc0zzinline_walkz00(obj_t, obj_t);
	extern obj_t BGl_enterzd2functionzd2zztools_errorz00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzinline_walkz00();
	static obj_t BGl_z62showzd2statz12za2zzinline_walkz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2inlinedzd2callsza2zd2zzinline_walkz00 = BUNSPEC;
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	static obj_t BGl_z62inlinezd2walkz12za2zzinline_walkz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62inlinezd2setupz12za2zzinline_walkz00(obj_t, obj_t);
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	extern obj_t BGl_za2optimza2z00zzengine_paramz00;
	static obj_t BGl_requirezd2initializa7ationz75zzinline_walkz00 = BUNSPEC;
	extern obj_t BGl_inlinezd2sfunz12zc0zzinline_inlinez00(BgL_variablez00_bglt,
		long, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzinline_walkz00();
	BGL_EXPORTED_DEF obj_t BGl_za2nonzd2inlinedzd2callsza2z00zzinline_walkz00 =
		BUNSPEC;
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzinline_walkz00();
	extern obj_t BGl_leavezd2functionzd2zztools_errorz00();
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	BGL_EXPORTED_DEF obj_t BGl_za2kfactorza2z00zzinline_walkz00 = BUNSPEC;
	extern obj_t BGl_za2inliningzd2kfactorza2zd2zzengine_paramz00;
	extern obj_t BGl_removezd2varzd2zzast_removez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_exitz00zz__errorz00(obj_t);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzinline_walkz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinline_inlinez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_occurz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_removez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
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
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_occurzd2varzd2zzast_occurz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzinline_walkz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzinline_walkz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzinline_walkz00();
	BGL_EXPORTED_DEF obj_t BGl_za2inlinezd2modeza2zd2zzinline_walkz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_2maxz00zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_z62resetzd2statz12za2zzinline_walkz00(obj_t);
	static obj_t __cnst[9];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_resetzd2statz12zd2envz12zzinline_walkz00,
		BgL_bgl_za762resetza7d2statza71495za7,
		BGl_z62resetzd2statz12za2zzinline_walkz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1476z00zzinline_walkz00,
		BgL_bgl_string1476za700za7za7i1496za7, "Inlining", 8);
	      DEFINE_STRING(BGl_string1477z00zzinline_walkz00,
		BgL_bgl_string1477za700za7za7i1497za7, "   . ", 5);
	      DEFINE_STRING(BGl_string1478z00zzinline_walkz00,
		BgL_bgl_string1478za700za7za7i1498za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string1479z00zzinline_walkz00,
		BgL_bgl_string1479za700za7za7i1499za7, " error", 6);
	      DEFINE_STRING(BGl_string1480z00zzinline_walkz00,
		BgL_bgl_string1480za700za7za7i1500za7, "s", 1);
	      DEFINE_STRING(BGl_string1481z00zzinline_walkz00,
		BgL_bgl_string1481za700za7za7i1501za7, "", 0);
	      DEFINE_STRING(BGl_string1482z00zzinline_walkz00,
		BgL_bgl_string1482za700za7za7i1502za7, " occured, ending ...", 20);
	      DEFINE_STRING(BGl_string1483z00zzinline_walkz00,
		BgL_bgl_string1483za700za7za7i1503za7, "failure during postlude hook", 28);
	      DEFINE_STRING(BGl_string1484z00zzinline_walkz00,
		BgL_bgl_string1484za700za7za7i1504za7, "\n", 1);
	      DEFINE_STRING(BGl_string1485z00zzinline_walkz00,
		BgL_bgl_string1485za700za7za7i1505za7, "      inlined calls: ", 21);
	      DEFINE_STRING(BGl_string1486z00zzinline_walkz00,
		BgL_bgl_string1486za700za7za7i1506za7, "      non inlined calls: ", 25);
	      DEFINE_STRING(BGl_string1487z00zzinline_walkz00,
		BgL_bgl_string1487za700za7za7i1507za7, "inline-setup!", 13);
	      DEFINE_STRING(BGl_string1488z00zzinline_walkz00,
		BgL_bgl_string1488za700za7za7i1508za7, "Illegal mode", 12);
	      DEFINE_STRING(BGl_string1489z00zzinline_walkz00,
		BgL_bgl_string1489za700za7za7i1509za7, "inline_walk", 11);
	      DEFINE_STRING(BGl_string1490z00zzinline_walkz00,
		BgL_bgl_string1490za700za7za7i1510za7,
		"predicate reducer (show-stat!) inline sifun (all reducer) pass-started (reset-stat!) all ",
		89);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_inlinezd2walkz12zd2envz12zzinline_walkz00,
		BgL_bgl_za762inlineza7d2walk1511z00,
		BGl_z62inlinezd2walkz12za2zzinline_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_showzd2statz12zd2envz12zzinline_walkz00,
		BgL_bgl_za762showza7d2statza711512za7,
		BGl_z62showzd2statz12za2zzinline_walkz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_inlinezd2setupz12zd2envz12zzinline_walkz00,
		BgL_bgl_za762inlineza7d2setu1513z00,
		BGl_z62inlinezd2setupz12za2zzinline_walkz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_za2inlinedzd2callsza2zd2zzinline_walkz00));
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzinline_walkz00));
		   
			 ADD_ROOT((void *) (&BGl_za2nonzd2inlinedzd2callsza2z00zzinline_walkz00));
		     ADD_ROOT((void *) (&BGl_za2kfactorza2z00zzinline_walkz00));
		     ADD_ROOT((void *) (&BGl_za2inlinezd2modeza2zd2zzinline_walkz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzinline_walkz00(long
		BgL_checksumz00_1654, char *BgL_fromz00_1655)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzinline_walkz00))
				{
					BGl_requirezd2initializa7ationz75zzinline_walkz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzinline_walkz00();
					BGl_libraryzd2moduleszd2initz00zzinline_walkz00();
					BGl_cnstzd2initzd2zzinline_walkz00();
					BGl_importedzd2moduleszd2initz00zzinline_walkz00();
					return BGl_toplevelzd2initzd2zzinline_walkz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzinline_walkz00()
	{
		{	/* Inline/walk.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"inline_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"inline_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"inline_walk");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"inline_walk");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "inline_walk");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"inline_walk");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "inline_walk");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"inline_walk");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"inline_walk");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzinline_walkz00()
	{
		{	/* Inline/walk.scm 15 */
			{	/* Inline/walk.scm 15 */
				obj_t BgL_cportz00_1635;

				{	/* Inline/walk.scm 15 */
					obj_t BgL_stringz00_1643;

					BgL_stringz00_1643 = BGl_string1490z00zzinline_walkz00;
					{	/* Inline/walk.scm 15 */
						obj_t BgL_startz00_1644;

						BgL_startz00_1644 = BINT(((long) 0));
						{	/* Inline/walk.scm 15 */
							obj_t BgL_endz00_1645;

							BgL_endz00_1645 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_1643)));
							{	/* Inline/walk.scm 15 */

								BgL_cportz00_1635 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_1643, BgL_startz00_1644, BgL_endz00_1645);
				}}}}
				{
					long BgL_iz00_1636;

					BgL_iz00_1636 = ((long) 8);
				BgL_loopz00_1637:
					if ((BgL_iz00_1636 == ((long) -1)))
						{	/* Inline/walk.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Inline/walk.scm 15 */
							{	/* Inline/walk.scm 15 */
								obj_t BgL_arg1493z00_1639;

								{	/* Inline/walk.scm 15 */

									{	/* Inline/walk.scm 15 */
										obj_t BgL_locationz00_1641;

										BgL_locationz00_1641 = BBOOL(((bool_t) 0));
										{	/* Inline/walk.scm 15 */

											BgL_arg1493z00_1639 =
												BGl_readz00zz__readerz00(BgL_cportz00_1635,
												BgL_locationz00_1641);
										}
									}
								}
								{	/* Inline/walk.scm 15 */
									int BgL_tmpz00_1682;

									BgL_tmpz00_1682 = (int) (BgL_iz00_1636);
									CNST_TABLE_SET(BgL_tmpz00_1682, BgL_arg1493z00_1639);
							}}
							{	/* Inline/walk.scm 15 */
								int BgL_auxz00_1642;

								BgL_auxz00_1642 = (int) ((BgL_iz00_1636 - ((long) 1)));
								{
									long BgL_iz00_1687;

									BgL_iz00_1687 = (long) (BgL_auxz00_1642);
									BgL_iz00_1636 = BgL_iz00_1687;
									goto BgL_loopz00_1637;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzinline_walkz00()
	{
		{	/* Inline/walk.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzinline_walkz00()
	{
		{	/* Inline/walk.scm 15 */
			BGl_za2inlinezd2modeza2zd2zzinline_walkz00 = CNST_TABLE_REF(((long) 0));
			BGl_za2inlinedzd2callsza2zd2zzinline_walkz00 = BINT(((long) 0));
			BGl_za2nonzd2inlinedzd2callsza2z00zzinline_walkz00 = BINT(((long) 0));
			return (BGl_za2kfactorza2z00zzinline_walkz00 = BINT(((long) 1)), BUNSPEC);
		}

	}



/* inline-walk! */
	BGL_EXPORTED_DEF obj_t BGl_inlinezd2walkz12zc0zzinline_walkz00(obj_t
		BgL_globalsz00_3, obj_t BgL_whatz00_4)
	{
		{	/* Inline/walk.scm 41 */
			{	/* Inline/walk.scm 43 */
				obj_t BgL_list1243z00_1336;

				{	/* Inline/walk.scm 43 */
					obj_t BgL_arg1245z00_1337;

					{	/* Inline/walk.scm 43 */
						obj_t BgL_arg1246z00_1338;

						BgL_arg1246z00_1338 =
							MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
						BgL_arg1245z00_1337 =
							MAKE_YOUNG_PAIR(BGl_string1476z00zzinline_walkz00,
							BgL_arg1246z00_1338);
					}
					BgL_list1243z00_1336 =
						MAKE_YOUNG_PAIR(BGl_string1477z00zzinline_walkz00,
						BgL_arg1245z00_1337);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list1243z00_1336);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 =
				BGl_string1476z00zzinline_walkz00;
			{	/* Inline/walk.scm 43 */
				obj_t BgL_g1109z00_1339;
				obj_t BgL_g1110z00_1340;

				{	/* Inline/walk.scm 43 */
					obj_t BgL_list1256z00_1353;

					BgL_list1256z00_1353 =
						MAKE_YOUNG_PAIR(BGl_resetzd2statz12zd2envz12zzinline_walkz00, BNIL);
					BgL_g1109z00_1339 = BgL_list1256z00_1353;
				}
				BgL_g1110z00_1340 = CNST_TABLE_REF(((long) 1));
				{
					obj_t BgL_hooksz00_1342;
					obj_t BgL_hnamesz00_1343;

					BgL_hooksz00_1342 = BgL_g1109z00_1339;
					BgL_hnamesz00_1343 = BgL_g1110z00_1340;
				BgL_zc3z04anonymousza31247ze3z87_1344:
					if (NULLP(BgL_hooksz00_1342))
						{	/* Inline/walk.scm 43 */
							CNST_TABLE_REF(((long) 2));
						}
					else
						{	/* Inline/walk.scm 43 */
							bool_t BgL_test1517z00_1706;

							{	/* Inline/walk.scm 43 */
								obj_t BgL_fun1255z00_1351;

								BgL_fun1255z00_1351 = CAR(((obj_t) BgL_hooksz00_1342));
								BgL_test1517z00_1706 =
									CBOOL(PROCEDURE_ENTRY(BgL_fun1255z00_1351)
									(BgL_fun1255z00_1351, BEOA));
							}
							if (BgL_test1517z00_1706)
								{	/* Inline/walk.scm 43 */
									obj_t BgL_arg1252z00_1348;
									obj_t BgL_arg1253z00_1349;

									BgL_arg1252z00_1348 = CDR(((obj_t) BgL_hooksz00_1342));
									BgL_arg1253z00_1349 = CDR(((obj_t) BgL_hnamesz00_1343));
									{
										obj_t BgL_hnamesz00_1718;
										obj_t BgL_hooksz00_1717;

										BgL_hooksz00_1717 = BgL_arg1252z00_1348;
										BgL_hnamesz00_1718 = BgL_arg1253z00_1349;
										BgL_hnamesz00_1343 = BgL_hnamesz00_1718;
										BgL_hooksz00_1342 = BgL_hooksz00_1717;
										goto BgL_zc3z04anonymousza31247ze3z87_1344;
									}
								}
							else
								{	/* Inline/walk.scm 43 */
									obj_t BgL_arg1254z00_1350;

									BgL_arg1254z00_1350 = CAR(((obj_t) BgL_hnamesz00_1343));
									BGl_internalzd2errorzd2zztools_errorz00
										(BGl_string1476z00zzinline_walkz00,
										BGl_string1478z00zzinline_walkz00, BgL_arg1254z00_1350);
								}
						}
				}
			}
			BGl_inlinezd2setupz12zc0zzinline_walkz00(BgL_whatz00_4);
			if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_whatz00_4,
						CNST_TABLE_REF(((long) 3)))))
				{	/* Inline/walk.scm 49 */
					BGl_occurzd2varzd2zzast_occurz00(BgL_globalsz00_3);
				}
			else
				{	/* Inline/walk.scm 49 */
					BFALSE;
				}
			{
				obj_t BgL_l1232z00_1356;

				BgL_l1232z00_1356 = BgL_globalsz00_3;
			BgL_zc3z04anonymousza31258ze3z87_1357:
				if (PAIRP(BgL_l1232z00_1356))
					{	/* Inline/walk.scm 52 */
						{	/* Inline/walk.scm 53 */
							obj_t BgL_gz00_1359;

							BgL_gz00_1359 = CAR(BgL_l1232z00_1356);
							{	/* Inline/walk.scm 53 */
								obj_t BgL_kfactorz00_1360;

								if (
									((((BgL_sfunz00_bglt) COBJECT(
													((BgL_sfunz00_bglt)
														(((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt)
																		((BgL_globalz00_bglt) BgL_gz00_1359))))->
															BgL_valuez00))))->BgL_classz00) ==
										CNST_TABLE_REF(((long) 4))))
									{	/* Inline/walk.scm 53 */
										BgL_kfactorz00_1360 = BINT(((long) 1));
									}
								else
									{	/* Inline/walk.scm 53 */
										BgL_kfactorz00_1360 = BGl_za2kfactorza2z00zzinline_walkz00;
									}
								{	/* Inline/walk.scm 56 */
									obj_t BgL_arg1263z00_1361;

									BgL_arg1263z00_1361 =
										(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt)
													((BgL_globalz00_bglt) BgL_gz00_1359))))->BgL_idz00);
									BGl_enterzd2functionzd2zztools_errorz00(BgL_arg1263z00_1361);
								}
								BGl_inlinezd2sfunz12zc0zzinline_inlinez00(
									((BgL_variablez00_bglt) BgL_gz00_1359),
									(long) CINT(BgL_kfactorz00_1360), BNIL);
								BGl_leavezd2functionzd2zztools_errorz00();
						}}
						{
							obj_t BgL_l1232z00_1748;

							BgL_l1232z00_1748 = CDR(BgL_l1232z00_1356);
							BgL_l1232z00_1356 = BgL_l1232z00_1748;
							goto BgL_zc3z04anonymousza31258ze3z87_1357;
						}
					}
				else
					{	/* Inline/walk.scm 52 */
						((bool_t) 1);
					}
			}
			{
				obj_t BgL_globalsz00_1371;
				obj_t BgL_newzd2globalszd2_1372;

				BgL_globalsz00_1371 = BgL_globalsz00_3;
				BgL_newzd2globalszd2_1372 = BNIL;
			BgL_zc3z04anonymousza31276ze3z87_1373:
				if (NULLP(BgL_globalsz00_1371))
					{	/* Inline/walk.scm 65 */
						obj_t BgL_valuez00_1375;

						{	/* Inline/walk.scm 66 */
							obj_t BgL_arg1295z00_1400;

							BgL_arg1295z00_1400 = bgl_reverse_bang(BgL_newzd2globalszd2_1372);
							BgL_valuez00_1375 =
								BGl_removezd2varzd2zzast_removez00(CNST_TABLE_REF(((long) 5)),
								BgL_arg1295z00_1400);
						}
						if (
							((long) CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00)
								> ((long) 0)))
							{	/* Inline/walk.scm 65 */
								{	/* Inline/walk.scm 65 */
									obj_t BgL_port1234z00_1377;

									{	/* Inline/walk.scm 65 */
										obj_t BgL_res1468z00_1601;

										{	/* Inline/walk.scm 65 */
											obj_t BgL_tmpz00_1758;

											BgL_tmpz00_1758 = BGL_CURRENT_DYNAMIC_ENV();
											BgL_res1468z00_1601 =
												BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_1758);
										}
										BgL_port1234z00_1377 = BgL_res1468z00_1601;
									}
									bgl_display_obj
										(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
										BgL_port1234z00_1377);
									bgl_display_string(BGl_string1479z00zzinline_walkz00,
										BgL_port1234z00_1377);
									{	/* Inline/walk.scm 65 */
										obj_t BgL_arg1280z00_1378;

										{	/* Inline/walk.scm 65 */
											bool_t BgL_test1523z00_1763;

											if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
												(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
												{	/* Inline/walk.scm 65 */
													if (INTEGERP
														(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
														{	/* Inline/walk.scm 65 */
															BgL_test1523z00_1763 =
																(
																(long)
																CINT
																(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00)
																> ((long) 1));
														}
													else
														{	/* Inline/walk.scm 65 */
															BgL_test1523z00_1763 =
																BGl_2ze3ze3zz__r4_numbers_6_5z00
																(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
																BINT(((long) 1)));
												}}
											else
												{	/* Inline/walk.scm 65 */
													BgL_test1523z00_1763 = ((bool_t) 0);
												}
											if (BgL_test1523z00_1763)
												{	/* Inline/walk.scm 65 */
													BgL_arg1280z00_1378 =
														BGl_string1480z00zzinline_walkz00;
												}
											else
												{	/* Inline/walk.scm 65 */
													BgL_arg1280z00_1378 =
														BGl_string1481z00zzinline_walkz00;
												}
										}
										bgl_display_obj(BgL_arg1280z00_1378, BgL_port1234z00_1377);
									}
									bgl_display_string(BGl_string1482z00zzinline_walkz00,
										BgL_port1234z00_1377);
									bgl_display_char(((unsigned char) 10), BgL_port1234z00_1377);
								}
								{	/* Inline/walk.scm 65 */
									obj_t BgL_list1284z00_1384;

									BgL_list1284z00_1384 =
										MAKE_YOUNG_PAIR(BINT(((long) -1)), BNIL);
									return BGl_exitz00zz__errorz00(BgL_list1284z00_1384);
								}
							}
						else
							{	/* Inline/walk.scm 65 */
								obj_t BgL_g1112z00_1385;
								obj_t BgL_g1116z00_1386;

								{	/* Inline/walk.scm 65 */
									obj_t BgL_list1293z00_1399;

									BgL_list1293z00_1399 =
										MAKE_YOUNG_PAIR(BGl_showzd2statz12zd2envz12zzinline_walkz00,
										BNIL);
									BgL_g1112z00_1385 = BgL_list1293z00_1399;
								}
								BgL_g1116z00_1386 = CNST_TABLE_REF(((long) 6));
								{
									obj_t BgL_hooksz00_1388;
									obj_t BgL_hnamesz00_1389;

									BgL_hooksz00_1388 = BgL_g1112z00_1385;
									BgL_hnamesz00_1389 = BgL_g1116z00_1386;
								BgL_zc3z04anonymousza31285ze3z87_1390:
									if (NULLP(BgL_hooksz00_1388))
										{	/* Inline/walk.scm 65 */
											return BgL_valuez00_1375;
										}
									else
										{	/* Inline/walk.scm 65 */
											bool_t BgL_test1528z00_1782;

											{	/* Inline/walk.scm 65 */
												obj_t BgL_fun1292z00_1397;

												BgL_fun1292z00_1397 = CAR(((obj_t) BgL_hooksz00_1388));
												BgL_test1528z00_1782 =
													CBOOL(PROCEDURE_ENTRY(BgL_fun1292z00_1397)
													(BgL_fun1292z00_1397, BEOA));
											}
											if (BgL_test1528z00_1782)
												{	/* Inline/walk.scm 65 */
													obj_t BgL_arg1289z00_1394;
													obj_t BgL_arg1290z00_1395;

													BgL_arg1289z00_1394 =
														CDR(((obj_t) BgL_hooksz00_1388));
													BgL_arg1290z00_1395 =
														CDR(((obj_t) BgL_hnamesz00_1389));
													{
														obj_t BgL_hnamesz00_1794;
														obj_t BgL_hooksz00_1793;

														BgL_hooksz00_1793 = BgL_arg1289z00_1394;
														BgL_hnamesz00_1794 = BgL_arg1290z00_1395;
														BgL_hnamesz00_1389 = BgL_hnamesz00_1794;
														BgL_hooksz00_1388 = BgL_hooksz00_1793;
														goto BgL_zc3z04anonymousza31285ze3z87_1390;
													}
												}
											else
												{	/* Inline/walk.scm 65 */
													obj_t BgL_arg1291z00_1396;

													BgL_arg1291z00_1396 =
														CAR(((obj_t) BgL_hnamesz00_1389));
													return
														BGl_internalzd2errorzd2zztools_errorz00
														(BGl_za2currentzd2passza2zd2zzengine_passz00,
														BGl_string1483z00zzinline_walkz00,
														BgL_arg1291z00_1396);
												}
										}
								}
							}
					}
				else
					{	/* Inline/walk.scm 67 */
						bool_t BgL_test1529z00_1798;

						{	/* Inline/walk.scm 67 */
							obj_t BgL_arg1304z00_1408;

							BgL_arg1304z00_1408 =
								(((BgL_globalz00_bglt) COBJECT(
										((BgL_globalz00_bglt)
											CAR(((obj_t) BgL_globalsz00_1371)))))->BgL_modulez00);
							BgL_test1529z00_1798 =
								(BgL_arg1304z00_1408 == BGl_za2moduleza2z00zzmodule_modulez00);
						}
						if (BgL_test1529z00_1798)
							{	/* Inline/walk.scm 68 */
								obj_t BgL_arg1299z00_1404;
								obj_t BgL_arg1300z00_1405;

								BgL_arg1299z00_1404 = CDR(((obj_t) BgL_globalsz00_1371));
								{	/* Inline/walk.scm 68 */
									obj_t BgL_arg1301z00_1406;

									BgL_arg1301z00_1406 = CAR(((obj_t) BgL_globalsz00_1371));
									BgL_arg1300z00_1405 =
										MAKE_YOUNG_PAIR(BgL_arg1301z00_1406,
										BgL_newzd2globalszd2_1372);
								}
								{
									obj_t BgL_newzd2globalszd2_1810;
									obj_t BgL_globalsz00_1809;

									BgL_globalsz00_1809 = BgL_arg1299z00_1404;
									BgL_newzd2globalszd2_1810 = BgL_arg1300z00_1405;
									BgL_newzd2globalszd2_1372 = BgL_newzd2globalszd2_1810;
									BgL_globalsz00_1371 = BgL_globalsz00_1809;
									goto BgL_zc3z04anonymousza31276ze3z87_1373;
								}
							}
						else
							{	/* Inline/walk.scm 70 */
								obj_t BgL_arg1303z00_1407;

								BgL_arg1303z00_1407 = CDR(((obj_t) BgL_globalsz00_1371));
								{
									obj_t BgL_globalsz00_1813;

									BgL_globalsz00_1813 = BgL_arg1303z00_1407;
									BgL_globalsz00_1371 = BgL_globalsz00_1813;
									goto BgL_zc3z04anonymousza31276ze3z87_1373;
								}
							}
					}
			}
		}

	}



/* &inline-walk! */
	obj_t BGl_z62inlinezd2walkz12za2zzinline_walkz00(obj_t BgL_envz00_1628,
		obj_t BgL_globalsz00_1629, obj_t BgL_whatz00_1630)
	{
		{	/* Inline/walk.scm 41 */
			return
				BGl_inlinezd2walkz12zc0zzinline_walkz00(BgL_globalsz00_1629,
				BgL_whatz00_1630);
		}

	}



/* &reset-stat! */
	obj_t BGl_z62resetzd2statz12za2zzinline_walkz00(obj_t BgL_envz00_1631)
	{
		{	/* Inline/walk.scm 81 */
			BGl_za2inlinedzd2callsza2zd2zzinline_walkz00 = BINT(((long) 0));
			return (BGl_za2nonzd2inlinedzd2callsza2z00zzinline_walkz00 =
				BINT(((long) 0)), BUNSPEC);
		}

	}



/* &show-stat! */
	obj_t BGl_z62showzd2statz12za2zzinline_walkz00(obj_t BgL_envz00_1632)
	{
		{	/* Inline/walk.scm 88 */
			{	/* Inline/walk.scm 89 */
				bool_t BgL_tmpz00_1817;

				{	/* Inline/walk.scm 89 */
					obj_t BgL_list1307z00_1648;

					{	/* Inline/walk.scm 89 */
						obj_t BgL_arg1308z00_1649;

						{	/* Inline/walk.scm 89 */
							obj_t BgL_arg1309z00_1650;

							BgL_arg1309z00_1650 =
								MAKE_YOUNG_PAIR(BGl_string1484z00zzinline_walkz00, BNIL);
							BgL_arg1308z00_1649 =
								MAKE_YOUNG_PAIR(BGl_za2inlinedzd2callsza2zd2zzinline_walkz00,
								BgL_arg1309z00_1650);
						}
						BgL_list1307z00_1648 =
							MAKE_YOUNG_PAIR(BGl_string1485z00zzinline_walkz00,
							BgL_arg1308z00_1649);
					}
					BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
						BgL_list1307z00_1648);
				}
				{	/* Inline/walk.scm 90 */
					obj_t BgL_list1310z00_1651;

					{	/* Inline/walk.scm 90 */
						obj_t BgL_arg1311z00_1652;

						{	/* Inline/walk.scm 90 */
							obj_t BgL_arg1312z00_1653;

							BgL_arg1312z00_1653 =
								MAKE_YOUNG_PAIR(BGl_string1484z00zzinline_walkz00, BNIL);
							BgL_arg1311z00_1652 =
								MAKE_YOUNG_PAIR
								(BGl_za2nonzd2inlinedzd2callsza2z00zzinline_walkz00,
								BgL_arg1312z00_1653);
						}
						BgL_list1310z00_1651 =
							MAKE_YOUNG_PAIR(BGl_string1486z00zzinline_walkz00,
							BgL_arg1311z00_1652);
					}
					BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
						BgL_list1310z00_1651);
				}
				BgL_tmpz00_1817 = ((bool_t) 1);
				return BBOOL(BgL_tmpz00_1817);
			}
		}

	}



/* inline-setup! */
	BGL_EXPORTED_DEF obj_t BGl_inlinezd2setupz12zc0zzinline_walkz00(obj_t
		BgL_whatz00_5)
	{
		{	/* Inline/walk.scm 96 */
			if ((BgL_whatz00_5 == CNST_TABLE_REF(((long) 0))))
				{	/* Inline/walk.scm 98 */
					BGl_za2inlinezd2modeza2zd2zzinline_walkz00 =
						CNST_TABLE_REF(((long) 0));
					{	/* Inline/walk.scm 101 */
						obj_t BgL_yz00_1420;

						BgL_yz00_1420 =
							PROCEDURE_ENTRY(BGl_za2inliningzd2kfactorza2zd2zzengine_paramz00)
							(BGl_za2inliningzd2kfactorza2zd2zzengine_paramz00,
							BGl_za2optimza2z00zzengine_paramz00, BEOA);
						return (BGl_za2kfactorza2z00zzinline_walkz00 =
							BGl_2maxz00zz__r4_numbers_6_5z00(BINT(((long) 1)), BgL_yz00_1420),
							BUNSPEC);
				}}
			else
				{	/* Inline/walk.scm 98 */
					if ((BgL_whatz00_5 == CNST_TABLE_REF(((long) 7))))
						{	/* Inline/walk.scm 98 */
							BGl_za2inlinezd2modeza2zd2zzinline_walkz00 =
								CNST_TABLE_REF(((long) 7));
							return (BGl_za2kfactorza2z00zzinline_walkz00 =
								BINT(((long) 1)), BUNSPEC);
						}
					else
						{	/* Inline/walk.scm 98 */
							if ((BgL_whatz00_5 == CNST_TABLE_REF(((long) 8))))
								{	/* Inline/walk.scm 98 */
									BGl_za2inlinezd2modeza2zd2zzinline_walkz00 =
										CNST_TABLE_REF(((long) 8));
									return (BGl_za2kfactorza2z00zzinline_walkz00 =
										BINT(((long) 1)), BUNSPEC);
								}
							else
								{	/* Inline/walk.scm 98 */
									return
										BGl_internalzd2errorzd2zztools_errorz00
										(BGl_string1487z00zzinline_walkz00,
										BGl_string1488z00zzinline_walkz00, BgL_whatz00_5);
								}
						}
				}
		}

	}



/* &inline-setup! */
	obj_t BGl_z62inlinezd2setupz12za2zzinline_walkz00(obj_t BgL_envz00_1633,
		obj_t BgL_whatz00_1634)
	{
		{	/* Inline/walk.scm 96 */
			return BGl_inlinezd2setupz12zc0zzinline_walkz00(BgL_whatz00_1634);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzinline_walkz00()
	{
		{	/* Inline/walk.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzinline_walkz00()
	{
		{	/* Inline/walk.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzinline_walkz00()
	{
		{	/* Inline/walk.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzinline_walkz00()
	{
		{	/* Inline/walk.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1489z00zzinline_walkz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1489z00zzinline_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 373082201),
				BSTRING_TO_STRING(BGl_string1489z00zzinline_walkz00));
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1489z00zzinline_walkz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1489z00zzinline_walkz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1489z00zzinline_walkz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1489z00zzinline_walkz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1489z00zzinline_walkz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string1489z00zzinline_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1489z00zzinline_walkz00));
			BGl_modulezd2initializa7ationz75zzast_removez00(((long) 383247839),
				BSTRING_TO_STRING(BGl_string1489z00zzinline_walkz00));
			BGl_modulezd2initializa7ationz75zzast_occurz00(((long) 535161241),
				BSTRING_TO_STRING(BGl_string1489z00zzinline_walkz00));
			return
				BGl_modulezd2initializa7ationz75zzinline_inlinez00(((long) 20504998),
				BSTRING_TO_STRING(BGl_string1489z00zzinline_walkz00));
		}

	}

#ifdef __cplusplus
}
#endif
