/*===========================================================================*/
/*   (Globalize/walk.scm)                                                    */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Globalize/walk.scm) */
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


	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	static obj_t BGl_objectzd2initzd2zzglobaliza7e_walkza7();
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_foreignzd2closureszd2zzglobaliza7e_globalzd2closurez75();
	static obj_t BGl_appendzd221011zd2zzglobaliza7e_walkza7(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzglobaliza7e_walkza7();
	extern obj_t
		BGl_escapezd2funz12zc0zzglobaliza7e_escapeza7(BgL_variablez00_bglt);
	extern obj_t
		BGl_globaliza7ez12zb5zzglobaliza7e_globaliza7ez00(BgL_globalz00_bglt);
	static obj_t BGl_gczd2rootszd2initz00zzglobaliza7e_walkza7();
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	static obj_t BGl_z62globaliza7ezd2walkz12z05zzglobaliza7e_walkza7(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzglobaliza7e_walkza7 = BUNSPEC;
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzglobaliza7e_walkza7();
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	extern obj_t BGl_removezd2varzd2zzast_removez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_exitz00zz__errorz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_walkza7(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_removez00(long, char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_globalzd2closurez75(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_globaliza7ez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_escapeza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
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
	static obj_t BGl_cnstzd2initzd2zzglobaliza7e_walkza7();
	static obj_t BGl_libraryzd2moduleszd2initz00zzglobaliza7e_walkza7();
	static obj_t BGl_importedzd2moduleszd2initz00zzglobaliza7e_walkza7();
	BGL_EXPORTED_DECL obj_t
		BGl_globaliza7ezd2walkz12z67zzglobaliza7e_walkza7(obj_t, obj_t);
	static obj_t __cnst[1];


	   
		 
		DEFINE_STRING(BGl_string1382z00zzglobaliza7e_walkza7,
		BgL_bgl_string1382za700za7za7g1396za7, "Closure (globalize)", 19);
	      DEFINE_STRING(BGl_string1383z00zzglobaliza7e_walkza7,
		BgL_bgl_string1383za700za7za7g1397za7, "   . ", 5);
	      DEFINE_STRING(BGl_string1384z00zzglobaliza7e_walkza7,
		BgL_bgl_string1384za700za7za7g1398za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string1385z00zzglobaliza7e_walkza7,
		BgL_bgl_string1385za700za7za7g1399za7, " error", 6);
	      DEFINE_STRING(BGl_string1386z00zzglobaliza7e_walkza7,
		BgL_bgl_string1386za700za7za7g1400za7, "s", 1);
	      DEFINE_STRING(BGl_string1387z00zzglobaliza7e_walkza7,
		BgL_bgl_string1387za700za7za7g1401za7, "", 0);
	      DEFINE_STRING(BGl_string1388z00zzglobaliza7e_walkza7,
		BgL_bgl_string1388za700za7za7g1402za7, " occured, ending ...", 20);
	      DEFINE_STRING(BGl_string1389z00zzglobaliza7e_walkza7,
		BgL_bgl_string1389za700za7za7g1403za7, "failure during postlude hook", 28);
	      DEFINE_STRING(BGl_string1390z00zzglobaliza7e_walkza7,
		BgL_bgl_string1390za700za7za7g1404za7, "globalize_walk", 14);
	      DEFINE_STRING(BGl_string1391z00zzglobaliza7e_walkza7,
		BgL_bgl_string1391za700za7za7g1405za7, "pass-started ", 13);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globaliza7ezd2walkz12zd2envzb5zzglobaliza7e_walkza7,
		BgL_bgl_za762globaliza7a7eza7d1406za7,
		BGl_z62globaliza7ezd2walkz12z05zzglobaliza7e_walkza7, 0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzglobaliza7e_walkza7));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_walkza7(long
		BgL_checksumz00_1600, char *BgL_fromz00_1601)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzglobaliza7e_walkza7))
				{
					BGl_requirezd2initializa7ationz75zzglobaliza7e_walkza7 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzglobaliza7e_walkza7();
					BGl_libraryzd2moduleszd2initz00zzglobaliza7e_walkza7();
					BGl_cnstzd2initzd2zzglobaliza7e_walkza7();
					BGl_importedzd2moduleszd2initz00zzglobaliza7e_walkza7();
					return BGl_methodzd2initzd2zzglobaliza7e_walkza7();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzglobaliza7e_walkza7()
	{
		{	/* Globalize/walk.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"globalize_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"globalize_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"globalize_walk");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"globalize_walk");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"globalize_walk");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"globalize_walk");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"globalize_walk");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"globalize_walk");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzglobaliza7e_walkza7()
	{
		{	/* Globalize/walk.scm 15 */
			{	/* Globalize/walk.scm 15 */
				obj_t BgL_cportz00_1587;

				{	/* Globalize/walk.scm 15 */
					obj_t BgL_stringz00_1595;

					BgL_stringz00_1595 = BGl_string1391z00zzglobaliza7e_walkza7;
					{	/* Globalize/walk.scm 15 */
						obj_t BgL_startz00_1596;

						BgL_startz00_1596 = BINT(((long) 0));
						{	/* Globalize/walk.scm 15 */
							obj_t BgL_endz00_1597;

							BgL_endz00_1597 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_1595)));
							{	/* Globalize/walk.scm 15 */

								BgL_cportz00_1587 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_1595, BgL_startz00_1596, BgL_endz00_1597);
				}}}}
				{
					long BgL_iz00_1588;

					BgL_iz00_1588 = ((long) 0);
				BgL_loopz00_1589:
					if ((BgL_iz00_1588 == ((long) -1)))
						{	/* Globalize/walk.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Globalize/walk.scm 15 */
							{	/* Globalize/walk.scm 15 */
								obj_t BgL_arg1394z00_1591;

								{	/* Globalize/walk.scm 15 */

									{	/* Globalize/walk.scm 15 */
										obj_t BgL_locationz00_1593;

										BgL_locationz00_1593 = BBOOL(((bool_t) 0));
										{	/* Globalize/walk.scm 15 */

											BgL_arg1394z00_1591 =
												BGl_readz00zz__readerz00(BgL_cportz00_1587,
												BgL_locationz00_1593);
										}
									}
								}
								{	/* Globalize/walk.scm 15 */
									int BgL_tmpz00_1627;

									BgL_tmpz00_1627 = (int) (BgL_iz00_1588);
									CNST_TABLE_SET(BgL_tmpz00_1627, BgL_arg1394z00_1591);
							}}
							{	/* Globalize/walk.scm 15 */
								int BgL_auxz00_1594;

								BgL_auxz00_1594 = (int) ((BgL_iz00_1588 - ((long) 1)));
								{
									long BgL_iz00_1632;

									BgL_iz00_1632 = (long) (BgL_auxz00_1594);
									BgL_iz00_1588 = BgL_iz00_1632;
									goto BgL_loopz00_1589;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzglobaliza7e_walkza7()
	{
		{	/* Globalize/walk.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzglobaliza7e_walkza7(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_1318;

				BgL_headz00_1318 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_1319;
					obj_t BgL_tailz00_1320;

					BgL_prevz00_1319 = BgL_headz00_1318;
					BgL_tailz00_1320 = BgL_l1z00_1;
				BgL_loopz00_1321:
					if (PAIRP(BgL_tailz00_1320))
						{
							obj_t BgL_newzd2prevzd2_1323;

							BgL_newzd2prevzd2_1323 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_1320), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_1319, BgL_newzd2prevzd2_1323);
							{
								obj_t BgL_tailz00_1642;
								obj_t BgL_prevz00_1641;

								BgL_prevz00_1641 = BgL_newzd2prevzd2_1323;
								BgL_tailz00_1642 = CDR(BgL_tailz00_1320);
								BgL_tailz00_1320 = BgL_tailz00_1642;
								BgL_prevz00_1319 = BgL_prevz00_1641;
								goto BgL_loopz00_1321;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_1318);
				}
			}
		}

	}



/* globalize-walk! */
	BGL_EXPORTED_DEF obj_t BGl_globaliza7ezd2walkz12z67zzglobaliza7e_walkza7(obj_t
		BgL_globalsz00_3, obj_t BgL_removez00_4)
	{
		{	/* Globalize/walk.scm 30 */
			{	/* Globalize/walk.scm 31 */
				obj_t BgL_list1240z00_1326;

				{	/* Globalize/walk.scm 31 */
					obj_t BgL_arg1242z00_1327;

					{	/* Globalize/walk.scm 31 */
						obj_t BgL_arg1243z00_1328;

						BgL_arg1243z00_1328 =
							MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
						BgL_arg1242z00_1327 =
							MAKE_YOUNG_PAIR(BGl_string1382z00zzglobaliza7e_walkza7,
							BgL_arg1243z00_1328);
					}
					BgL_list1240z00_1326 =
						MAKE_YOUNG_PAIR(BGl_string1383z00zzglobaliza7e_walkza7,
						BgL_arg1242z00_1327);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list1240z00_1326);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 =
				BGl_string1382z00zzglobaliza7e_walkza7;
			{	/* Globalize/walk.scm 31 */
				obj_t BgL_g1108z00_1329;

				BgL_g1108z00_1329 = BNIL;
				{
					obj_t BgL_hooksz00_1332;
					obj_t BgL_hnamesz00_1333;

					BgL_hooksz00_1332 = BgL_g1108z00_1329;
					BgL_hnamesz00_1333 = BNIL;
				BgL_zc3z04anonymousza31244ze3z87_1334:
					if (NULLP(BgL_hooksz00_1332))
						{	/* Globalize/walk.scm 31 */
							CNST_TABLE_REF(((long) 0));
						}
					else
						{	/* Globalize/walk.scm 31 */
							bool_t BgL_test1411z00_1655;

							{	/* Globalize/walk.scm 31 */
								obj_t BgL_fun1254z00_1341;

								BgL_fun1254z00_1341 = CAR(((obj_t) BgL_hooksz00_1332));
								BgL_test1411z00_1655 =
									CBOOL(PROCEDURE_ENTRY(BgL_fun1254z00_1341)
									(BgL_fun1254z00_1341, BEOA));
							}
							if (BgL_test1411z00_1655)
								{	/* Globalize/walk.scm 31 */
									obj_t BgL_arg1250z00_1338;
									obj_t BgL_arg1252z00_1339;

									BgL_arg1250z00_1338 = CDR(((obj_t) BgL_hooksz00_1332));
									BgL_arg1252z00_1339 = CDR(((obj_t) BgL_hnamesz00_1333));
									{
										obj_t BgL_hnamesz00_1667;
										obj_t BgL_hooksz00_1666;

										BgL_hooksz00_1666 = BgL_arg1250z00_1338;
										BgL_hnamesz00_1667 = BgL_arg1252z00_1339;
										BgL_hnamesz00_1333 = BgL_hnamesz00_1667;
										BgL_hooksz00_1332 = BgL_hooksz00_1666;
										goto BgL_zc3z04anonymousza31244ze3z87_1334;
									}
								}
							else
								{	/* Globalize/walk.scm 31 */
									obj_t BgL_arg1253z00_1340;

									BgL_arg1253z00_1340 = CAR(((obj_t) BgL_hnamesz00_1333));
									BGl_internalzd2errorzd2zztools_errorz00
										(BGl_string1382z00zzglobaliza7e_walkza7,
										BGl_string1384z00zzglobaliza7e_walkza7,
										BgL_arg1253z00_1340);
								}
						}
				}
			}
			{
				obj_t BgL_l1227z00_1345;

				BgL_l1227z00_1345 = BgL_globalsz00_3;
			BgL_zc3z04anonymousza31256ze3z87_1346:
				if (PAIRP(BgL_l1227z00_1345))
					{	/* Globalize/walk.scm 33 */
						{	/* Globalize/walk.scm 33 */
							obj_t BgL_arg1258z00_1348;

							BgL_arg1258z00_1348 = CAR(BgL_l1227z00_1345);
							BGl_escapezd2funz12zc0zzglobaliza7e_escapeza7(
								((BgL_variablez00_bglt) BgL_arg1258z00_1348));
						}
						{
							obj_t BgL_l1227z00_1676;

							BgL_l1227z00_1676 = CDR(BgL_l1227z00_1345);
							BgL_l1227z00_1345 = BgL_l1227z00_1676;
							goto BgL_zc3z04anonymousza31256ze3z87_1346;
						}
					}
				else
					{	/* Globalize/walk.scm 33 */
						((bool_t) 1);
					}
			}
			{
				obj_t BgL_globalsz00_1353;
				obj_t BgL_newzd2globalszd2_1354;

				BgL_globalsz00_1353 = BgL_globalsz00_3;
				BgL_newzd2globalszd2_1354 = BNIL;
			BgL_zc3z04anonymousza31264ze3z87_1355:
				if (NULLP(BgL_globalsz00_1353))
					{	/* Globalize/walk.scm 40 */
						obj_t BgL_valuez00_1357;

						BgL_valuez00_1357 =
							BGl_removezd2varzd2zzast_removez00(BgL_removez00_4,
							BGl_appendzd221011zd2zzglobaliza7e_walkza7
							(BgL_newzd2globalszd2_1354,
								BGl_foreignzd2closureszd2zzglobaliza7e_globalzd2closurez75()));
						if (((long)
								CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00) >
								((long) 0)))
							{	/* Globalize/walk.scm 40 */
								{	/* Globalize/walk.scm 40 */
									obj_t BgL_port1229z00_1359;

									{	/* Globalize/walk.scm 40 */
										obj_t BgL_res1377z00_1566;

										{	/* Globalize/walk.scm 40 */
											obj_t BgL_tmpz00_1686;

											BgL_tmpz00_1686 = BGL_CURRENT_DYNAMIC_ENV();
											BgL_res1377z00_1566 =
												BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_1686);
										}
										BgL_port1229z00_1359 = BgL_res1377z00_1566;
									}
									bgl_display_obj
										(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
										BgL_port1229z00_1359);
									bgl_display_string(BGl_string1385z00zzglobaliza7e_walkza7,
										BgL_port1229z00_1359);
									{	/* Globalize/walk.scm 40 */
										obj_t BgL_arg1268z00_1360;

										{	/* Globalize/walk.scm 40 */
											bool_t BgL_test1415z00_1691;

											if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
												(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
												{	/* Globalize/walk.scm 40 */
													if (INTEGERP
														(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
														{	/* Globalize/walk.scm 40 */
															BgL_test1415z00_1691 =
																(
																(long)
																CINT
																(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00)
																> ((long) 1));
														}
													else
														{	/* Globalize/walk.scm 40 */
															BgL_test1415z00_1691 =
																BGl_2ze3ze3zz__r4_numbers_6_5z00
																(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
																BINT(((long) 1)));
												}}
											else
												{	/* Globalize/walk.scm 40 */
													BgL_test1415z00_1691 = ((bool_t) 0);
												}
											if (BgL_test1415z00_1691)
												{	/* Globalize/walk.scm 40 */
													BgL_arg1268z00_1360 =
														BGl_string1386z00zzglobaliza7e_walkza7;
												}
											else
												{	/* Globalize/walk.scm 40 */
													BgL_arg1268z00_1360 =
														BGl_string1387z00zzglobaliza7e_walkza7;
												}
										}
										bgl_display_obj(BgL_arg1268z00_1360, BgL_port1229z00_1359);
									}
									bgl_display_string(BGl_string1388z00zzglobaliza7e_walkza7,
										BgL_port1229z00_1359);
									bgl_display_char(((unsigned char) 10), BgL_port1229z00_1359);
								}
								{	/* Globalize/walk.scm 40 */
									obj_t BgL_list1272z00_1366;

									BgL_list1272z00_1366 =
										MAKE_YOUNG_PAIR(BINT(((long) -1)), BNIL);
									return BGl_exitz00zz__errorz00(BgL_list1272z00_1366);
								}
							}
						else
							{	/* Globalize/walk.scm 40 */
								obj_t BgL_g1111z00_1367;

								BgL_g1111z00_1367 = BNIL;
								{
									obj_t BgL_hooksz00_1370;
									obj_t BgL_hnamesz00_1371;

									BgL_hooksz00_1370 = BgL_g1111z00_1367;
									BgL_hnamesz00_1371 = BNIL;
								BgL_zc3z04anonymousza31273ze3z87_1372:
									if (NULLP(BgL_hooksz00_1370))
										{	/* Globalize/walk.scm 40 */
											return BgL_valuez00_1357;
										}
									else
										{	/* Globalize/walk.scm 40 */
											bool_t BgL_test1421z00_1708;

											{	/* Globalize/walk.scm 40 */
												obj_t BgL_fun1282z00_1379;

												BgL_fun1282z00_1379 = CAR(((obj_t) BgL_hooksz00_1370));
												BgL_test1421z00_1708 =
													CBOOL(PROCEDURE_ENTRY(BgL_fun1282z00_1379)
													(BgL_fun1282z00_1379, BEOA));
											}
											if (BgL_test1421z00_1708)
												{	/* Globalize/walk.scm 40 */
													obj_t BgL_arg1277z00_1376;
													obj_t BgL_arg1280z00_1377;

													BgL_arg1277z00_1376 =
														CDR(((obj_t) BgL_hooksz00_1370));
													BgL_arg1280z00_1377 =
														CDR(((obj_t) BgL_hnamesz00_1371));
													{
														obj_t BgL_hnamesz00_1720;
														obj_t BgL_hooksz00_1719;

														BgL_hooksz00_1719 = BgL_arg1277z00_1376;
														BgL_hnamesz00_1720 = BgL_arg1280z00_1377;
														BgL_hnamesz00_1371 = BgL_hnamesz00_1720;
														BgL_hooksz00_1370 = BgL_hooksz00_1719;
														goto BgL_zc3z04anonymousza31273ze3z87_1372;
													}
												}
											else
												{	/* Globalize/walk.scm 40 */
													obj_t BgL_arg1281z00_1378;

													BgL_arg1281z00_1378 =
														CAR(((obj_t) BgL_hnamesz00_1371));
													return
														BGl_internalzd2errorzd2zztools_errorz00
														(BGl_za2currentzd2passza2zd2zzengine_passz00,
														BGl_string1389z00zzglobaliza7e_walkza7,
														BgL_arg1281z00_1378);
												}
										}
								}
							}
					}
				else
					{	/* Globalize/walk.scm 42 */
						obj_t BgL_arg1286z00_1384;
						obj_t BgL_arg1287z00_1385;

						BgL_arg1286z00_1384 = CDR(((obj_t) BgL_globalsz00_1353));
						{	/* Globalize/walk.scm 43 */
							obj_t BgL_arg1288z00_1386;

							{	/* Globalize/walk.scm 43 */
								obj_t BgL_arg1289z00_1387;

								BgL_arg1289z00_1387 = CAR(((obj_t) BgL_globalsz00_1353));
								BgL_arg1288z00_1386 =
									BGl_globaliza7ez12zb5zzglobaliza7e_globaliza7ez00(
									((BgL_globalz00_bglt) BgL_arg1289z00_1387));
							}
							BgL_arg1287z00_1385 =
								BGl_appendzd221011zd2zzglobaliza7e_walkza7(BgL_arg1288z00_1386,
								BgL_newzd2globalszd2_1354);
						}
						{
							obj_t BgL_newzd2globalszd2_1732;
							obj_t BgL_globalsz00_1731;

							BgL_globalsz00_1731 = BgL_arg1286z00_1384;
							BgL_newzd2globalszd2_1732 = BgL_arg1287z00_1385;
							BgL_newzd2globalszd2_1354 = BgL_newzd2globalszd2_1732;
							BgL_globalsz00_1353 = BgL_globalsz00_1731;
							goto BgL_zc3z04anonymousza31264ze3z87_1355;
						}
					}
			}
		}

	}



/* &globalize-walk! */
	obj_t BGl_z62globaliza7ezd2walkz12z05zzglobaliza7e_walkza7(obj_t
		BgL_envz00_1584, obj_t BgL_globalsz00_1585, obj_t BgL_removez00_1586)
	{
		{	/* Globalize/walk.scm 30 */
			return
				BGl_globaliza7ezd2walkz12z67zzglobaliza7e_walkza7(BgL_globalsz00_1585,
				BgL_removez00_1586);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzglobaliza7e_walkza7()
	{
		{	/* Globalize/walk.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzglobaliza7e_walkza7()
	{
		{	/* Globalize/walk.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzglobaliza7e_walkza7()
	{
		{	/* Globalize/walk.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzglobaliza7e_walkza7()
	{
		{	/* Globalize/walk.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1390z00zzglobaliza7e_walkza7));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1390z00zzglobaliza7e_walkza7));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 373082201),
				BSTRING_TO_STRING(BGl_string1390z00zzglobaliza7e_walkza7));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1390z00zzglobaliza7e_walkza7));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1390z00zzglobaliza7e_walkza7));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1390z00zzglobaliza7e_walkza7));
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1390z00zzglobaliza7e_walkza7));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1390z00zzglobaliza7e_walkza7));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_escapeza7(((long)
					460086886),
				BSTRING_TO_STRING(BGl_string1390z00zzglobaliza7e_walkza7));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_globaliza7ez00(((long)
					34590557), BSTRING_TO_STRING(BGl_string1390z00zzglobaliza7e_walkza7));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_globalzd2closurez75(((long)
					62222057), BSTRING_TO_STRING(BGl_string1390z00zzglobaliza7e_walkza7));
			return BGl_modulezd2initializa7ationz75zzast_removez00(((long) 383247839),
				BSTRING_TO_STRING(BGl_string1390z00zzglobaliza7e_walkza7));
		}

	}

#ifdef __cplusplus
}
#endif
