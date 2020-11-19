/*===========================================================================*/
/*   (Integrate/walk.scm)                                                    */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Integrate/walk.scm) */
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
	static obj_t BGl_objectzd2initzd2zzintegrate_walkz00();
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_appendzd221011zd2zzintegrate_walkz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzintegrate_walkz00();
	extern obj_t BGl_enterzd2functionzd2zztools_errorz00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzintegrate_walkz00();
	static obj_t BGl_z62integratezd2walkz12za2zzintegrate_walkz00(obj_t, obj_t);
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzintegrate_walkz00 = BUNSPEC;
	extern obj_t BGl_integratezd2definitionz12zc0zzintegrate_definitionz00(obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzintegrate_walkz00();
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	extern obj_t BGl_removezd2varzd2zzast_removez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_exitz00zz__errorz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzintegrate_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_definitionz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_removez00(long, char *);
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
	static obj_t BGl_cnstzd2initzd2zzintegrate_walkz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzintegrate_walkz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzintegrate_walkz00();
	BGL_EXPORTED_DECL obj_t BGl_integratezd2walkz12zc0zzintegrate_walkz00(obj_t);
	static obj_t __cnst[2];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_integratezd2walkz12zd2envz12zzintegrate_walkz00,
		BgL_bgl_za762integrateza7d2w1372z00,
		BGl_z62integratezd2walkz12za2zzintegrate_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1358z00zzintegrate_walkz00,
		BgL_bgl_string1358za700za7za7i1373za7, "Integration", 11);
	      DEFINE_STRING(BGl_string1359z00zzintegrate_walkz00,
		BgL_bgl_string1359za700za7za7i1374za7, "   . ", 5);
	      DEFINE_STRING(BGl_string1360z00zzintegrate_walkz00,
		BgL_bgl_string1360za700za7za7i1375za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string1361z00zzintegrate_walkz00,
		BgL_bgl_string1361za700za7za7i1376za7, " error", 6);
	      DEFINE_STRING(BGl_string1362z00zzintegrate_walkz00,
		BgL_bgl_string1362za700za7za7i1377za7, "s", 1);
	      DEFINE_STRING(BGl_string1363z00zzintegrate_walkz00,
		BgL_bgl_string1363za700za7za7i1378za7, "", 0);
	      DEFINE_STRING(BGl_string1364z00zzintegrate_walkz00,
		BgL_bgl_string1364za700za7za7i1379za7, " occured, ending ...", 20);
	      DEFINE_STRING(BGl_string1365z00zzintegrate_walkz00,
		BgL_bgl_string1365za700za7za7i1380za7, "failure during postlude hook", 28);
	      DEFINE_STRING(BGl_string1366z00zzintegrate_walkz00,
		BgL_bgl_string1366za700za7za7i1381za7, "integrate_walk", 14);
	      DEFINE_STRING(BGl_string1367z00zzintegrate_walkz00,
		BgL_bgl_string1367za700za7za7i1382za7, "(integrate cfa) pass-started ", 29);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzintegrate_walkz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzintegrate_walkz00(long
		BgL_checksumz00_1588, char *BgL_fromz00_1589)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzintegrate_walkz00))
				{
					BGl_requirezd2initializa7ationz75zzintegrate_walkz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzintegrate_walkz00();
					BGl_libraryzd2moduleszd2initz00zzintegrate_walkz00();
					BGl_cnstzd2initzd2zzintegrate_walkz00();
					BGl_importedzd2moduleszd2initz00zzintegrate_walkz00();
					return BGl_methodzd2initzd2zzintegrate_walkz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzintegrate_walkz00()
	{
		{	/* Integrate/walk.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"integrate_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"integrate_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"integrate_walk");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"integrate_walk");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"integrate_walk");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"integrate_walk");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"integrate_walk");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"integrate_walk");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzintegrate_walkz00()
	{
		{	/* Integrate/walk.scm 15 */
			{	/* Integrate/walk.scm 15 */
				obj_t BgL_cportz00_1575;

				{	/* Integrate/walk.scm 15 */
					obj_t BgL_stringz00_1583;

					BgL_stringz00_1583 = BGl_string1367z00zzintegrate_walkz00;
					{	/* Integrate/walk.scm 15 */
						obj_t BgL_startz00_1584;

						BgL_startz00_1584 = BINT(((long) 0));
						{	/* Integrate/walk.scm 15 */
							obj_t BgL_endz00_1585;

							BgL_endz00_1585 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_1583)));
							{	/* Integrate/walk.scm 15 */

								BgL_cportz00_1575 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_1583, BgL_startz00_1584, BgL_endz00_1585);
				}}}}
				{
					long BgL_iz00_1576;

					BgL_iz00_1576 = ((long) 1);
				BgL_loopz00_1577:
					if ((BgL_iz00_1576 == ((long) -1)))
						{	/* Integrate/walk.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Integrate/walk.scm 15 */
							{	/* Integrate/walk.scm 15 */
								obj_t BgL_arg1370z00_1579;

								{	/* Integrate/walk.scm 15 */

									{	/* Integrate/walk.scm 15 */
										obj_t BgL_locationz00_1581;

										BgL_locationz00_1581 = BBOOL(((bool_t) 0));
										{	/* Integrate/walk.scm 15 */

											BgL_arg1370z00_1579 =
												BGl_readz00zz__readerz00(BgL_cportz00_1575,
												BgL_locationz00_1581);
										}
									}
								}
								{	/* Integrate/walk.scm 15 */
									int BgL_tmpz00_1615;

									BgL_tmpz00_1615 = (int) (BgL_iz00_1576);
									CNST_TABLE_SET(BgL_tmpz00_1615, BgL_arg1370z00_1579);
							}}
							{	/* Integrate/walk.scm 15 */
								int BgL_auxz00_1582;

								BgL_auxz00_1582 = (int) ((BgL_iz00_1576 - ((long) 1)));
								{
									long BgL_iz00_1620;

									BgL_iz00_1620 = (long) (BgL_auxz00_1582);
									BgL_iz00_1576 = BgL_iz00_1620;
									goto BgL_loopz00_1577;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzintegrate_walkz00()
	{
		{	/* Integrate/walk.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzintegrate_walkz00(obj_t BgL_l1z00_1,
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
								obj_t BgL_tailz00_1630;
								obj_t BgL_prevz00_1629;

								BgL_prevz00_1629 = BgL_newzd2prevzd2_1322;
								BgL_tailz00_1630 = CDR(BgL_tailz00_1319);
								BgL_tailz00_1319 = BgL_tailz00_1630;
								BgL_prevz00_1318 = BgL_prevz00_1629;
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



/* integrate-walk! */
	BGL_EXPORTED_DEF obj_t BGl_integratezd2walkz12zc0zzintegrate_walkz00(obj_t
		BgL_globalsz00_3)
	{
		{	/* Integrate/walk.scm 29 */
			{	/* Integrate/walk.scm 30 */
				obj_t BgL_list1228z00_1325;

				{	/* Integrate/walk.scm 30 */
					obj_t BgL_arg1229z00_1326;

					{	/* Integrate/walk.scm 30 */
						obj_t BgL_arg1232z00_1327;

						BgL_arg1232z00_1327 =
							MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
						BgL_arg1229z00_1326 =
							MAKE_YOUNG_PAIR(BGl_string1358z00zzintegrate_walkz00,
							BgL_arg1232z00_1327);
					}
					BgL_list1228z00_1325 =
						MAKE_YOUNG_PAIR(BGl_string1359z00zzintegrate_walkz00,
						BgL_arg1229z00_1326);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list1228z00_1325);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 =
				BGl_string1358z00zzintegrate_walkz00;
			{	/* Integrate/walk.scm 30 */
				obj_t BgL_g1104z00_1328;

				BgL_g1104z00_1328 = BNIL;
				{
					obj_t BgL_hooksz00_1331;
					obj_t BgL_hnamesz00_1332;

					BgL_hooksz00_1331 = BgL_g1104z00_1328;
					BgL_hnamesz00_1332 = BNIL;
				BgL_zc3z04anonymousza31233ze3z87_1333:
					if (NULLP(BgL_hooksz00_1331))
						{	/* Integrate/walk.scm 30 */
							CNST_TABLE_REF(((long) 0));
						}
					else
						{	/* Integrate/walk.scm 30 */
							bool_t BgL_test1393z00_1643;

							{	/* Integrate/walk.scm 30 */
								obj_t BgL_fun1244z00_1340;

								BgL_fun1244z00_1340 = CAR(((obj_t) BgL_hooksz00_1331));
								BgL_test1393z00_1643 =
									CBOOL(PROCEDURE_ENTRY(BgL_fun1244z00_1340)
									(BgL_fun1244z00_1340, BEOA));
							}
							if (BgL_test1393z00_1643)
								{	/* Integrate/walk.scm 30 */
									obj_t BgL_arg1239z00_1337;
									obj_t BgL_arg1242z00_1338;

									BgL_arg1239z00_1337 = CDR(((obj_t) BgL_hooksz00_1331));
									BgL_arg1242z00_1338 = CDR(((obj_t) BgL_hnamesz00_1332));
									{
										obj_t BgL_hnamesz00_1655;
										obj_t BgL_hooksz00_1654;

										BgL_hooksz00_1654 = BgL_arg1239z00_1337;
										BgL_hnamesz00_1655 = BgL_arg1242z00_1338;
										BgL_hnamesz00_1332 = BgL_hnamesz00_1655;
										BgL_hooksz00_1331 = BgL_hooksz00_1654;
										goto BgL_zc3z04anonymousza31233ze3z87_1333;
									}
								}
							else
								{	/* Integrate/walk.scm 30 */
									obj_t BgL_arg1243z00_1339;

									BgL_arg1243z00_1339 = CAR(((obj_t) BgL_hnamesz00_1332));
									BGl_internalzd2errorzd2zztools_errorz00
										(BGl_string1358z00zzintegrate_walkz00,
										BGl_string1360z00zzintegrate_walkz00, BgL_arg1243z00_1339);
								}
						}
				}
			}
			{
				obj_t BgL_oldz00_1345;
				obj_t BgL_newz00_1346;

				BgL_oldz00_1345 = BgL_globalsz00_3;
				BgL_newz00_1346 = BNIL;
			BgL_zc3z04anonymousza31246ze3z87_1347:
				if (NULLP(BgL_oldz00_1345))
					{	/* Integrate/walk.scm 34 */
						obj_t BgL_valuez00_1349;

						BgL_valuez00_1349 =
							BGl_removezd2varzd2zzast_removez00(CNST_TABLE_REF(((long) 1)),
							BgL_newz00_1346);
						if (((long)
								CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00) >
								((long) 0)))
							{	/* Integrate/walk.scm 34 */
								{	/* Integrate/walk.scm 34 */
									obj_t BgL_port1223z00_1351;

									{	/* Integrate/walk.scm 34 */
										obj_t BgL_res1353z00_1554;

										{	/* Integrate/walk.scm 34 */
											obj_t BgL_tmpz00_1666;

											BgL_tmpz00_1666 = BGL_CURRENT_DYNAMIC_ENV();
											BgL_res1353z00_1554 =
												BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_1666);
										}
										BgL_port1223z00_1351 = BgL_res1353z00_1554;
									}
									bgl_display_obj
										(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
										BgL_port1223z00_1351);
									bgl_display_string(BGl_string1361z00zzintegrate_walkz00,
										BgL_port1223z00_1351);
									{	/* Integrate/walk.scm 34 */
										obj_t BgL_arg1250z00_1352;

										{	/* Integrate/walk.scm 34 */
											bool_t BgL_test1396z00_1671;

											if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
												(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
												{	/* Integrate/walk.scm 34 */
													if (INTEGERP
														(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
														{	/* Integrate/walk.scm 34 */
															BgL_test1396z00_1671 =
																(
																(long)
																CINT
																(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00)
																> ((long) 1));
														}
													else
														{	/* Integrate/walk.scm 34 */
															BgL_test1396z00_1671 =
																BGl_2ze3ze3zz__r4_numbers_6_5z00
																(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
																BINT(((long) 1)));
												}}
											else
												{	/* Integrate/walk.scm 34 */
													BgL_test1396z00_1671 = ((bool_t) 0);
												}
											if (BgL_test1396z00_1671)
												{	/* Integrate/walk.scm 34 */
													BgL_arg1250z00_1352 =
														BGl_string1362z00zzintegrate_walkz00;
												}
											else
												{	/* Integrate/walk.scm 34 */
													BgL_arg1250z00_1352 =
														BGl_string1363z00zzintegrate_walkz00;
												}
										}
										bgl_display_obj(BgL_arg1250z00_1352, BgL_port1223z00_1351);
									}
									bgl_display_string(BGl_string1364z00zzintegrate_walkz00,
										BgL_port1223z00_1351);
									bgl_display_char(((unsigned char) 10), BgL_port1223z00_1351);
								}
								{	/* Integrate/walk.scm 34 */
									obj_t BgL_list1254z00_1358;

									BgL_list1254z00_1358 =
										MAKE_YOUNG_PAIR(BINT(((long) -1)), BNIL);
									return BGl_exitz00zz__errorz00(BgL_list1254z00_1358);
								}
							}
						else
							{	/* Integrate/walk.scm 34 */
								obj_t BgL_g1107z00_1359;

								BgL_g1107z00_1359 = BNIL;
								{
									obj_t BgL_hooksz00_1362;
									obj_t BgL_hnamesz00_1363;

									BgL_hooksz00_1362 = BgL_g1107z00_1359;
									BgL_hnamesz00_1363 = BNIL;
								BgL_zc3z04anonymousza31255ze3z87_1364:
									if (NULLP(BgL_hooksz00_1362))
										{	/* Integrate/walk.scm 34 */
											return BgL_valuez00_1349;
										}
									else
										{	/* Integrate/walk.scm 34 */
											bool_t BgL_test1400z00_1688;

											{	/* Integrate/walk.scm 34 */
												obj_t BgL_fun1271z00_1371;

												BgL_fun1271z00_1371 = CAR(((obj_t) BgL_hooksz00_1362));
												BgL_test1400z00_1688 =
													CBOOL(PROCEDURE_ENTRY(BgL_fun1271z00_1371)
													(BgL_fun1271z00_1371, BEOA));
											}
											if (BgL_test1400z00_1688)
												{	/* Integrate/walk.scm 34 */
													obj_t BgL_arg1263z00_1368;
													obj_t BgL_arg1268z00_1369;

													BgL_arg1263z00_1368 =
														CDR(((obj_t) BgL_hooksz00_1362));
													BgL_arg1268z00_1369 =
														CDR(((obj_t) BgL_hnamesz00_1363));
													{
														obj_t BgL_hnamesz00_1700;
														obj_t BgL_hooksz00_1699;

														BgL_hooksz00_1699 = BgL_arg1263z00_1368;
														BgL_hnamesz00_1700 = BgL_arg1268z00_1369;
														BgL_hnamesz00_1363 = BgL_hnamesz00_1700;
														BgL_hooksz00_1362 = BgL_hooksz00_1699;
														goto BgL_zc3z04anonymousza31255ze3z87_1364;
													}
												}
											else
												{	/* Integrate/walk.scm 34 */
													obj_t BgL_arg1270z00_1370;

													BgL_arg1270z00_1370 =
														CAR(((obj_t) BgL_hnamesz00_1363));
													return
														BGl_internalzd2errorzd2zztools_errorz00
														(BGl_za2currentzd2passza2zd2zzengine_passz00,
														BGl_string1365z00zzintegrate_walkz00,
														BgL_arg1270z00_1370);
												}
										}
								}
							}
					}
				else
					{	/* Integrate/walk.scm 35 */
						obj_t BgL_globalz00_1374;

						BgL_globalz00_1374 = CAR(((obj_t) BgL_oldz00_1345));
						{	/* Integrate/walk.scm 36 */
							obj_t BgL_arg1273z00_1375;

							BgL_arg1273z00_1375 =
								(((BgL_variablez00_bglt) COBJECT(
										((BgL_variablez00_bglt)
											((BgL_globalz00_bglt) BgL_globalz00_1374))))->BgL_idz00);
							BGl_enterzd2functionzd2zztools_errorz00(BgL_arg1273z00_1375);
						}
						{	/* Integrate/walk.scm 37 */
							obj_t BgL_arg1274z00_1376;
							obj_t BgL_arg1275z00_1377;

							BgL_arg1274z00_1376 = CDR(((obj_t) BgL_oldz00_1345));
							BgL_arg1275z00_1377 =
								BGl_appendzd221011zd2zzintegrate_walkz00
								(BGl_integratezd2definitionz12zc0zzintegrate_definitionz00
								(BgL_globalz00_1374), BgL_newz00_1346);
							{
								obj_t BgL_newz00_1715;
								obj_t BgL_oldz00_1714;

								BgL_oldz00_1714 = BgL_arg1274z00_1376;
								BgL_newz00_1715 = BgL_arg1275z00_1377;
								BgL_newz00_1346 = BgL_newz00_1715;
								BgL_oldz00_1345 = BgL_oldz00_1714;
								goto BgL_zc3z04anonymousza31246ze3z87_1347;
							}
						}
					}
			}
		}

	}



/* &integrate-walk! */
	obj_t BGl_z62integratezd2walkz12za2zzintegrate_walkz00(obj_t BgL_envz00_1573,
		obj_t BgL_globalsz00_1574)
	{
		{	/* Integrate/walk.scm 29 */
			return BGl_integratezd2walkz12zc0zzintegrate_walkz00(BgL_globalsz00_1574);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzintegrate_walkz00()
	{
		{	/* Integrate/walk.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzintegrate_walkz00()
	{
		{	/* Integrate/walk.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzintegrate_walkz00()
	{
		{	/* Integrate/walk.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzintegrate_walkz00()
	{
		{	/* Integrate/walk.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1366z00zzintegrate_walkz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1366z00zzintegrate_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 373082201),
				BSTRING_TO_STRING(BGl_string1366z00zzintegrate_walkz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1366z00zzintegrate_walkz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1366z00zzintegrate_walkz00));
			BGl_modulezd2initializa7ationz75zzast_removez00(((long) 383247839),
				BSTRING_TO_STRING(BGl_string1366z00zzintegrate_walkz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1366z00zzintegrate_walkz00));
			return
				BGl_modulezd2initializa7ationz75zzintegrate_definitionz00(((long)
					67375695), BSTRING_TO_STRING(BGl_string1366z00zzintegrate_walkz00));
		}

	}

#ifdef __cplusplus
}
#endif
