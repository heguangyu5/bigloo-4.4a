/*===========================================================================*/
/*   (Bdb/walk.scm)                                                          */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Bdb/walk.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_z62bdbzd2walkz12za2zzbdb_walkz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	static obj_t BGl_objectzd2initzd2zzbdb_walkz00();
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_bdbzd2walkz12zc0zzbdb_walkz00(obj_t);
	static obj_t BGl_appendzd221011zd2zzbdb_walkz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzbdb_walkz00();
	static obj_t BGl_gczd2rootszd2initz00zzbdb_walkz00();
	extern obj_t BGl_initializa7ezd2astz75zzbdb_initializa7eza7();
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzbdb_walkz00 = BUNSPEC;
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzbdb_walkz00();
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	BGL_IMPORT obj_t BGl_exitz00zz__errorz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzbdb_walkz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbdb_initializa7eza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_removez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
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
	static obj_t BGl_cnstzd2initzd2zzbdb_walkz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzbdb_walkz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzbdb_walkz00();
	static obj_t __cnst[1];


	   
		 
		DEFINE_STRING(BGl_string1348z00zzbdb_walkz00,
		BgL_bgl_string1348za700za7za7b1362za7, "Bdb", 3);
	      DEFINE_STRING(BGl_string1349z00zzbdb_walkz00,
		BgL_bgl_string1349za700za7za7b1363za7, "   . ", 5);
	      DEFINE_STRING(BGl_string1350z00zzbdb_walkz00,
		BgL_bgl_string1350za700za7za7b1364za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string1351z00zzbdb_walkz00,
		BgL_bgl_string1351za700za7za7b1365za7, " error", 6);
	      DEFINE_STRING(BGl_string1352z00zzbdb_walkz00,
		BgL_bgl_string1352za700za7za7b1366za7, "s", 1);
	      DEFINE_STRING(BGl_string1353z00zzbdb_walkz00,
		BgL_bgl_string1353za700za7za7b1367za7, "", 0);
	      DEFINE_STRING(BGl_string1354z00zzbdb_walkz00,
		BgL_bgl_string1354za700za7za7b1368za7, " occured, ending ...", 20);
	      DEFINE_STRING(BGl_string1355z00zzbdb_walkz00,
		BgL_bgl_string1355za700za7za7b1369za7, "failure during postlude hook", 28);
	      DEFINE_STRING(BGl_string1356z00zzbdb_walkz00,
		BgL_bgl_string1356za700za7za7b1370za7, "bdb_walk", 8);
	      DEFINE_STRING(BGl_string1357z00zzbdb_walkz00,
		BgL_bgl_string1357za700za7za7b1371za7, "pass-started ", 13);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bdbzd2walkz12zd2envz12zzbdb_walkz00,
		BgL_bgl_za762bdbza7d2walkza7121372za7, BGl_z62bdbzd2walkz12za2zzbdb_walkz00,
		0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzbdb_walkz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzbdb_walkz00(long
		BgL_checksumz00_1573, char *BgL_fromz00_1574)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzbdb_walkz00))
				{
					BGl_requirezd2initializa7ationz75zzbdb_walkz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzbdb_walkz00();
					BGl_libraryzd2moduleszd2initz00zzbdb_walkz00();
					BGl_cnstzd2initzd2zzbdb_walkz00();
					BGl_importedzd2moduleszd2initz00zzbdb_walkz00();
					return BGl_methodzd2initzd2zzbdb_walkz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzbdb_walkz00()
	{
		{	/* Bdb/walk.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"bdb_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"bdb_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"bdb_walk");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "bdb_walk");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"bdb_walk");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "bdb_walk");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"bdb_walk");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"bdb_walk");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzbdb_walkz00()
	{
		{	/* Bdb/walk.scm 15 */
			{	/* Bdb/walk.scm 15 */
				obj_t BgL_cportz00_1560;

				{	/* Bdb/walk.scm 15 */
					obj_t BgL_stringz00_1568;

					BgL_stringz00_1568 = BGl_string1357z00zzbdb_walkz00;
					{	/* Bdb/walk.scm 15 */
						obj_t BgL_startz00_1569;

						BgL_startz00_1569 = BINT(((long) 0));
						{	/* Bdb/walk.scm 15 */
							obj_t BgL_endz00_1570;

							BgL_endz00_1570 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_1568)));
							{	/* Bdb/walk.scm 15 */

								BgL_cportz00_1560 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_1568, BgL_startz00_1569, BgL_endz00_1570);
				}}}}
				{
					long BgL_iz00_1561;

					BgL_iz00_1561 = ((long) 0);
				BgL_loopz00_1562:
					if ((BgL_iz00_1561 == ((long) -1)))
						{	/* Bdb/walk.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Bdb/walk.scm 15 */
							{	/* Bdb/walk.scm 15 */
								obj_t BgL_arg1360z00_1564;

								{	/* Bdb/walk.scm 15 */

									{	/* Bdb/walk.scm 15 */
										obj_t BgL_locationz00_1566;

										BgL_locationz00_1566 = BBOOL(((bool_t) 0));
										{	/* Bdb/walk.scm 15 */

											BgL_arg1360z00_1564 =
												BGl_readz00zz__readerz00(BgL_cportz00_1560,
												BgL_locationz00_1566);
										}
									}
								}
								{	/* Bdb/walk.scm 15 */
									int BgL_tmpz00_1600;

									BgL_tmpz00_1600 = (int) (BgL_iz00_1561);
									CNST_TABLE_SET(BgL_tmpz00_1600, BgL_arg1360z00_1564);
							}}
							{	/* Bdb/walk.scm 15 */
								int BgL_auxz00_1567;

								BgL_auxz00_1567 = (int) ((BgL_iz00_1561 - ((long) 1)));
								{
									long BgL_iz00_1605;

									BgL_iz00_1605 = (long) (BgL_auxz00_1567);
									BgL_iz00_1561 = BgL_iz00_1605;
									goto BgL_loopz00_1562;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzbdb_walkz00()
	{
		{	/* Bdb/walk.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzbdb_walkz00(obj_t BgL_l1z00_1, obj_t BgL_l2z00_2)
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
								obj_t BgL_tailz00_1615;
								obj_t BgL_prevz00_1614;

								BgL_prevz00_1614 = BgL_newzd2prevzd2_1322;
								BgL_tailz00_1615 = CDR(BgL_tailz00_1319);
								BgL_tailz00_1319 = BgL_tailz00_1615;
								BgL_prevz00_1318 = BgL_prevz00_1614;
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



/* bdb-walk! */
	BGL_EXPORTED_DEF obj_t BGl_bdbzd2walkz12zc0zzbdb_walkz00(obj_t
		BgL_globalsz00_3)
	{
		{	/* Bdb/walk.scm 30 */
			{	/* Bdb/walk.scm 31 */
				obj_t BgL_list1228z00_1325;

				{	/* Bdb/walk.scm 31 */
					obj_t BgL_arg1229z00_1326;

					{	/* Bdb/walk.scm 31 */
						obj_t BgL_arg1232z00_1327;

						BgL_arg1232z00_1327 =
							MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
						BgL_arg1229z00_1326 =
							MAKE_YOUNG_PAIR(BGl_string1348z00zzbdb_walkz00,
							BgL_arg1232z00_1327);
					}
					BgL_list1228z00_1325 =
						MAKE_YOUNG_PAIR(BGl_string1349z00zzbdb_walkz00,
						BgL_arg1229z00_1326);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list1228z00_1325);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 =
				BGl_string1348z00zzbdb_walkz00;
			{	/* Bdb/walk.scm 31 */
				obj_t BgL_g1104z00_1328;

				BgL_g1104z00_1328 = BNIL;
				{
					obj_t BgL_hooksz00_1331;
					obj_t BgL_hnamesz00_1332;

					BgL_hooksz00_1331 = BgL_g1104z00_1328;
					BgL_hnamesz00_1332 = BNIL;
				BgL_zc3z04anonymousza31233ze3z87_1333:
					if (NULLP(BgL_hooksz00_1331))
						{	/* Bdb/walk.scm 31 */
							CNST_TABLE_REF(((long) 0));
						}
					else
						{	/* Bdb/walk.scm 31 */
							bool_t BgL_test1377z00_1628;

							{	/* Bdb/walk.scm 31 */
								obj_t BgL_fun1244z00_1340;

								BgL_fun1244z00_1340 = CAR(((obj_t) BgL_hooksz00_1331));
								BgL_test1377z00_1628 =
									CBOOL(PROCEDURE_ENTRY(BgL_fun1244z00_1340)
									(BgL_fun1244z00_1340, BEOA));
							}
							if (BgL_test1377z00_1628)
								{	/* Bdb/walk.scm 31 */
									obj_t BgL_arg1239z00_1337;
									obj_t BgL_arg1242z00_1338;

									BgL_arg1239z00_1337 = CDR(((obj_t) BgL_hooksz00_1331));
									BgL_arg1242z00_1338 = CDR(((obj_t) BgL_hnamesz00_1332));
									{
										obj_t BgL_hnamesz00_1640;
										obj_t BgL_hooksz00_1639;

										BgL_hooksz00_1639 = BgL_arg1239z00_1337;
										BgL_hnamesz00_1640 = BgL_arg1242z00_1338;
										BgL_hnamesz00_1332 = BgL_hnamesz00_1640;
										BgL_hooksz00_1331 = BgL_hooksz00_1639;
										goto BgL_zc3z04anonymousza31233ze3z87_1333;
									}
								}
							else
								{	/* Bdb/walk.scm 31 */
									obj_t BgL_arg1243z00_1339;

									BgL_arg1243z00_1339 = CAR(((obj_t) BgL_hnamesz00_1332));
									BGl_internalzd2errorzd2zztools_errorz00
										(BGl_string1348z00zzbdb_walkz00,
										BGl_string1350z00zzbdb_walkz00, BgL_arg1243z00_1339);
								}
						}
				}
			}
			{	/* Bdb/walk.scm 32 */
				obj_t BgL_valuez00_1343;

				BgL_valuez00_1343 =
					BGl_appendzd221011zd2zzbdb_walkz00
					(BGl_initializa7ezd2astz75zzbdb_initializa7eza7(), BgL_globalsz00_3);
				if (((long) CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00) >
						((long) 0)))
					{	/* Bdb/walk.scm 32 */
						{	/* Bdb/walk.scm 32 */
							obj_t BgL_port1222z00_1345;

							{	/* Bdb/walk.scm 32 */
								obj_t BgL_res1343z00_1542;

								{	/* Bdb/walk.scm 32 */
									obj_t BgL_tmpz00_1649;

									BgL_tmpz00_1649 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res1343z00_1542 =
										BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_1649);
								}
								BgL_port1222z00_1345 = BgL_res1343z00_1542;
							}
							bgl_display_obj
								(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
								BgL_port1222z00_1345);
							bgl_display_string(BGl_string1351z00zzbdb_walkz00,
								BgL_port1222z00_1345);
							{	/* Bdb/walk.scm 32 */
								obj_t BgL_arg1247z00_1346;

								{	/* Bdb/walk.scm 32 */
									bool_t BgL_test1379z00_1654;

									if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
										(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
										{	/* Bdb/walk.scm 32 */
											if (INTEGERP
												(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
												{	/* Bdb/walk.scm 32 */
													BgL_test1379z00_1654 =
														(
														(long)
														CINT
														(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00)
														> ((long) 1));
												}
											else
												{	/* Bdb/walk.scm 32 */
													BgL_test1379z00_1654 =
														BGl_2ze3ze3zz__r4_numbers_6_5z00
														(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
														BINT(((long) 1)));
										}}
									else
										{	/* Bdb/walk.scm 32 */
											BgL_test1379z00_1654 = ((bool_t) 0);
										}
									if (BgL_test1379z00_1654)
										{	/* Bdb/walk.scm 32 */
											BgL_arg1247z00_1346 = BGl_string1352z00zzbdb_walkz00;
										}
									else
										{	/* Bdb/walk.scm 32 */
											BgL_arg1247z00_1346 = BGl_string1353z00zzbdb_walkz00;
										}
								}
								bgl_display_obj(BgL_arg1247z00_1346, BgL_port1222z00_1345);
							}
							bgl_display_string(BGl_string1354z00zzbdb_walkz00,
								BgL_port1222z00_1345);
							bgl_display_char(((unsigned char) 10), BgL_port1222z00_1345);
						}
						{	/* Bdb/walk.scm 32 */
							obj_t BgL_list1251z00_1352;

							BgL_list1251z00_1352 = MAKE_YOUNG_PAIR(BINT(((long) -1)), BNIL);
							return BGl_exitz00zz__errorz00(BgL_list1251z00_1352);
						}
					}
				else
					{	/* Bdb/walk.scm 32 */
						obj_t BgL_g1106z00_1353;

						BgL_g1106z00_1353 = BNIL;
						{
							obj_t BgL_hooksz00_1356;
							obj_t BgL_hnamesz00_1357;

							BgL_hooksz00_1356 = BgL_g1106z00_1353;
							BgL_hnamesz00_1357 = BNIL;
						BgL_zc3z04anonymousza31252ze3z87_1358:
							if (NULLP(BgL_hooksz00_1356))
								{	/* Bdb/walk.scm 32 */
									return BgL_valuez00_1343;
								}
							else
								{	/* Bdb/walk.scm 32 */
									bool_t BgL_test1391z00_1671;

									{	/* Bdb/walk.scm 32 */
										obj_t BgL_fun1264z00_1365;

										BgL_fun1264z00_1365 = CAR(((obj_t) BgL_hooksz00_1356));
										BgL_test1391z00_1671 =
											CBOOL(PROCEDURE_ENTRY(BgL_fun1264z00_1365)
											(BgL_fun1264z00_1365, BEOA));
									}
									if (BgL_test1391z00_1671)
										{	/* Bdb/walk.scm 32 */
											obj_t BgL_arg1256z00_1362;
											obj_t BgL_arg1258z00_1363;

											BgL_arg1256z00_1362 = CDR(((obj_t) BgL_hooksz00_1356));
											BgL_arg1258z00_1363 = CDR(((obj_t) BgL_hnamesz00_1357));
											{
												obj_t BgL_hnamesz00_1683;
												obj_t BgL_hooksz00_1682;

												BgL_hooksz00_1682 = BgL_arg1256z00_1362;
												BgL_hnamesz00_1683 = BgL_arg1258z00_1363;
												BgL_hnamesz00_1357 = BgL_hnamesz00_1683;
												BgL_hooksz00_1356 = BgL_hooksz00_1682;
												goto BgL_zc3z04anonymousza31252ze3z87_1358;
											}
										}
									else
										{	/* Bdb/walk.scm 32 */
											obj_t BgL_arg1263z00_1364;

											BgL_arg1263z00_1364 = CAR(((obj_t) BgL_hnamesz00_1357));
											return
												BGl_internalzd2errorzd2zztools_errorz00
												(BGl_za2currentzd2passza2zd2zzengine_passz00,
												BGl_string1355z00zzbdb_walkz00, BgL_arg1263z00_1364);
										}
								}
						}
					}
			}
		}

	}



/* &bdb-walk! */
	obj_t BGl_z62bdbzd2walkz12za2zzbdb_walkz00(obj_t BgL_envz00_1558,
		obj_t BgL_globalsz00_1559)
	{
		{	/* Bdb/walk.scm 30 */
			return BGl_bdbzd2walkz12zc0zzbdb_walkz00(BgL_globalsz00_1559);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzbdb_walkz00()
	{
		{	/* Bdb/walk.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzbdb_walkz00()
	{
		{	/* Bdb/walk.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzbdb_walkz00()
	{
		{	/* Bdb/walk.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzbdb_walkz00()
	{
		{	/* Bdb/walk.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1356z00zzbdb_walkz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1356z00zzbdb_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 373082201),
				BSTRING_TO_STRING(BGl_string1356z00zzbdb_walkz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1356z00zzbdb_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1356z00zzbdb_walkz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1356z00zzbdb_walkz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1356z00zzbdb_walkz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1356z00zzbdb_walkz00));
			BGl_modulezd2initializa7ationz75zzast_removez00(((long) 383247839),
				BSTRING_TO_STRING(BGl_string1356z00zzbdb_walkz00));
			return
				BGl_modulezd2initializa7ationz75zzbdb_initializa7eza7(((long)
					527197359), BSTRING_TO_STRING(BGl_string1356z00zzbdb_walkz00));
		}

	}

#ifdef __cplusplus
}
#endif
