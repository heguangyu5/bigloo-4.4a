/*===========================================================================*/
/*   (Reduce/walk.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Reduce/walk.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern obj_t
		BGl_reducezd2flowzd2typezd2checkz12zc0zzreduce_flowzd2typeczd2(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_reducezd2walkz12zc0zzreduce_walkz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	static obj_t BGl_objectzd2initzd2zzreduce_walkz00();
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_reducezd2conditionalz12zc0zzreduce_condz00(obj_t);
	static obj_t BGl_methodzd2initzd2zzreduce_walkz00();
	static obj_t BGl_z62reducezd2walkz12za2zzreduce_walkz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzreduce_walkz00();
	extern obj_t BGl_za2optimzd2dataflowzf3za2z21zzengine_paramz00;
	extern obj_t BGl_reducezd21occz12zc0zzreduce_1occz00(obj_t);
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	extern obj_t BGl_za2optimzd2reducezd2betazf3za2zf3zzengine_paramz00;
	extern obj_t BGl_za2optimza2z00zzengine_paramz00;
	static obj_t BGl_requirezd2initializa7ationz75zzreduce_walkz00 = BUNSPEC;
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzreduce_walkz00();
	extern obj_t BGl_reducezd2csez12zc0zzreduce_csez00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	extern obj_t BGl_removezd2varzd2zzast_removez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_exitz00zz__errorz00(obj_t);
	extern obj_t BGl_reducezd2copyz12zc0zzreduce_copyz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzreduce_walkz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_removez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzreduce_betaz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzreduce_1occz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzreduce_flowzd2typeczd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzreduce_typecz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzreduce_condz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzreduce_csez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzreduce_copyz00(long, char *);
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
	static obj_t BGl_cnstzd2initzd2zzreduce_walkz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzreduce_walkz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzreduce_walkz00();
	extern obj_t BGl_reducezd2typezd2checkz12z12zzreduce_typecz00(obj_t);
	extern obj_t BGl_reducezd2betaz12zc0zzreduce_betaz00(obj_t);
	static obj_t __cnst[2];


	   
		 
		DEFINE_STRING(BGl_string1388z00zzreduce_walkz00,
		BgL_bgl_string1388za700za7za7r1419za7, "   . ", 5);
	      DEFINE_STRING(BGl_string1389z00zzreduce_walkz00,
		BgL_bgl_string1389za700za7za7r1420za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string1390z00zzreduce_walkz00,
		BgL_bgl_string1390za700za7za7r1421za7, " error", 6);
	      DEFINE_STRING(BGl_string1391z00zzreduce_walkz00,
		BgL_bgl_string1391za700za7za7r1422za7, "s", 1);
	      DEFINE_STRING(BGl_string1392z00zzreduce_walkz00,
		BgL_bgl_string1392za700za7za7r1423za7, "", 0);
	      DEFINE_STRING(BGl_string1393z00zzreduce_walkz00,
		BgL_bgl_string1393za700za7za7r1424za7, " occured, ending ...", 20);
	      DEFINE_STRING(BGl_string1394z00zzreduce_walkz00,
		BgL_bgl_string1394za700za7za7r1425za7, "failure during postlude hook", 28);
	      DEFINE_STRING(BGl_string1395z00zzreduce_walkz00,
		BgL_bgl_string1395za700za7za7r1426za7, "reduce_walk", 11);
	      DEFINE_STRING(BGl_string1396z00zzreduce_walkz00,
		BgL_bgl_string1396za700za7za7r1427za7, "reduce pass-started ", 20);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_reducezd2walkz12zd2envz12zzreduce_walkz00,
		BgL_bgl_za762reduceza7d2walk1428z00, va_generic_entry,
		BGl_z62reducezd2walkz12za2zzreduce_walkz00, BUNSPEC, -3);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzreduce_walkz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzreduce_walkz00(long
		BgL_checksumz00_1623, char *BgL_fromz00_1624)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzreduce_walkz00))
				{
					BGl_requirezd2initializa7ationz75zzreduce_walkz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzreduce_walkz00();
					BGl_libraryzd2moduleszd2initz00zzreduce_walkz00();
					BGl_cnstzd2initzd2zzreduce_walkz00();
					BGl_importedzd2moduleszd2initz00zzreduce_walkz00();
					return BGl_methodzd2initzd2zzreduce_walkz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzreduce_walkz00()
	{
		{	/* Reduce/walk.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"reduce_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"reduce_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"reduce_walk");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "reduce_walk");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"reduce_walk");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "reduce_walk");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"reduce_walk");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"reduce_walk");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzreduce_walkz00()
	{
		{	/* Reduce/walk.scm 15 */
			{	/* Reduce/walk.scm 15 */
				obj_t BgL_cportz00_1610;

				{	/* Reduce/walk.scm 15 */
					obj_t BgL_stringz00_1618;

					BgL_stringz00_1618 = BGl_string1396z00zzreduce_walkz00;
					{	/* Reduce/walk.scm 15 */
						obj_t BgL_startz00_1619;

						BgL_startz00_1619 = BINT(((long) 0));
						{	/* Reduce/walk.scm 15 */
							obj_t BgL_endz00_1620;

							BgL_endz00_1620 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_1618)));
							{	/* Reduce/walk.scm 15 */

								BgL_cportz00_1610 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_1618, BgL_startz00_1619, BgL_endz00_1620);
				}}}}
				{
					long BgL_iz00_1611;

					BgL_iz00_1611 = ((long) 1);
				BgL_loopz00_1612:
					if ((BgL_iz00_1611 == ((long) -1)))
						{	/* Reduce/walk.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Reduce/walk.scm 15 */
							{	/* Reduce/walk.scm 15 */
								obj_t BgL_arg1417z00_1614;

								{	/* Reduce/walk.scm 15 */

									{	/* Reduce/walk.scm 15 */
										obj_t BgL_locationz00_1616;

										BgL_locationz00_1616 = BBOOL(((bool_t) 0));
										{	/* Reduce/walk.scm 15 */

											BgL_arg1417z00_1614 =
												BGl_readz00zz__readerz00(BgL_cportz00_1610,
												BgL_locationz00_1616);
										}
									}
								}
								{	/* Reduce/walk.scm 15 */
									int BgL_tmpz00_1650;

									BgL_tmpz00_1650 = (int) (BgL_iz00_1611);
									CNST_TABLE_SET(BgL_tmpz00_1650, BgL_arg1417z00_1614);
							}}
							{	/* Reduce/walk.scm 15 */
								int BgL_auxz00_1617;

								BgL_auxz00_1617 = (int) ((BgL_iz00_1611 - ((long) 1)));
								{
									long BgL_iz00_1655;

									BgL_iz00_1655 = (long) (BgL_auxz00_1617);
									BgL_iz00_1611 = BgL_iz00_1655;
									goto BgL_loopz00_1612;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzreduce_walkz00()
	{
		{	/* Reduce/walk.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* reduce-walk! */
	BGL_EXPORTED_DEF obj_t BGl_reducezd2walkz12zc0zzreduce_walkz00(obj_t
		BgL_globalsz00_3, obj_t BgL_msgz00_4, obj_t BgL_typezd2unsafezd2_5)
	{
		{	/* Reduce/walk.scm 36 */
			{	/* Reduce/walk.scm 37 */
				obj_t BgL_list1230z00_1327;

				{	/* Reduce/walk.scm 37 */
					obj_t BgL_arg1232z00_1328;

					{	/* Reduce/walk.scm 37 */
						obj_t BgL_arg1239z00_1329;

						BgL_arg1239z00_1329 =
							MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
						BgL_arg1232z00_1328 =
							MAKE_YOUNG_PAIR(BgL_msgz00_4, BgL_arg1239z00_1329);
					}
					BgL_list1230z00_1327 =
						MAKE_YOUNG_PAIR(BGl_string1388z00zzreduce_walkz00,
						BgL_arg1232z00_1328);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list1230z00_1327);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 = BgL_msgz00_4;
			{	/* Reduce/walk.scm 37 */
				obj_t BgL_g1104z00_1330;

				BgL_g1104z00_1330 = BNIL;
				{
					obj_t BgL_hooksz00_1333;
					obj_t BgL_hnamesz00_1334;

					BgL_hooksz00_1333 = BgL_g1104z00_1330;
					BgL_hnamesz00_1334 = BNIL;
				BgL_zc3z04anonymousza31240ze3z87_1335:
					if (NULLP(BgL_hooksz00_1333))
						{	/* Reduce/walk.scm 37 */
							CNST_TABLE_REF(((long) 0));
						}
					else
						{	/* Reduce/walk.scm 37 */
							bool_t BgL_test1432z00_1668;

							{	/* Reduce/walk.scm 37 */
								obj_t BgL_fun1249z00_1342;

								BgL_fun1249z00_1342 = CAR(((obj_t) BgL_hooksz00_1333));
								BgL_test1432z00_1668 =
									CBOOL(PROCEDURE_ENTRY(BgL_fun1249z00_1342)
									(BgL_fun1249z00_1342, BEOA));
							}
							if (BgL_test1432z00_1668)
								{	/* Reduce/walk.scm 37 */
									obj_t BgL_arg1245z00_1339;
									obj_t BgL_arg1246z00_1340;

									BgL_arg1245z00_1339 = CDR(((obj_t) BgL_hooksz00_1333));
									BgL_arg1246z00_1340 = CDR(((obj_t) BgL_hnamesz00_1334));
									{
										obj_t BgL_hnamesz00_1680;
										obj_t BgL_hooksz00_1679;

										BgL_hooksz00_1679 = BgL_arg1245z00_1339;
										BgL_hnamesz00_1680 = BgL_arg1246z00_1340;
										BgL_hnamesz00_1334 = BgL_hnamesz00_1680;
										BgL_hooksz00_1333 = BgL_hooksz00_1679;
										goto BgL_zc3z04anonymousza31240ze3z87_1335;
									}
								}
							else
								{	/* Reduce/walk.scm 37 */
									obj_t BgL_arg1247z00_1341;

									BgL_arg1247z00_1341 = CAR(((obj_t) BgL_hnamesz00_1334));
									BGl_internalzd2errorzd2zztools_errorz00(BgL_msgz00_4,
										BGl_string1389z00zzreduce_walkz00, BgL_arg1247z00_1341);
								}
						}
				}
			}
			{	/* Reduce/walk.scm 39 */
				bool_t BgL_test1433z00_1684;

				if (PAIRP(BgL_typezd2unsafezd2_5))
					{	/* Reduce/walk.scm 39 */
						BgL_test1433z00_1684 = CBOOL(CAR(BgL_typezd2unsafezd2_5));
					}
				else
					{	/* Reduce/walk.scm 39 */
						BgL_test1433z00_1684 = ((bool_t) 0);
					}
				if (BgL_test1433z00_1684)
					{	/* Reduce/walk.scm 39 */
						BGl_reducezd21occz12zc0zzreduce_1occz00(BgL_globalsz00_3);
						BGl_reducezd2typezd2checkz12z12zzreduce_typecz00(BgL_globalsz00_3);
						BGl_reducezd2conditionalz12zc0zzreduce_condz00(BgL_globalsz00_3);
						{	/* Reduce/walk.scm 43 */
							obj_t BgL_valuez00_1347;

							BgL_valuez00_1347 =
								BGl_removezd2varzd2zzast_removez00(CNST_TABLE_REF(((long) 1)),
								BgL_globalsz00_3);
							if (((long)
									CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00) >
									((long) 0)))
								{	/* Reduce/walk.scm 43 */
									{	/* Reduce/walk.scm 43 */
										obj_t BgL_port1224z00_1349;

										{	/* Reduce/walk.scm 43 */
											obj_t BgL_res1376z00_1569;

											{	/* Reduce/walk.scm 43 */
												obj_t BgL_tmpz00_1697;

												BgL_tmpz00_1697 = BGL_CURRENT_DYNAMIC_ENV();
												BgL_res1376z00_1569 =
													BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_1697);
											}
											BgL_port1224z00_1349 = BgL_res1376z00_1569;
										}
										bgl_display_obj
											(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
											BgL_port1224z00_1349);
										bgl_display_string(BGl_string1390z00zzreduce_walkz00,
											BgL_port1224z00_1349);
										{	/* Reduce/walk.scm 43 */
											obj_t BgL_arg1254z00_1350;

											{	/* Reduce/walk.scm 43 */
												bool_t BgL_test1436z00_1702;

												if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
													(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
													{	/* Reduce/walk.scm 43 */
														if (INTEGERP
															(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
															{	/* Reduce/walk.scm 43 */
																BgL_test1436z00_1702 =
																	(
																	(long)
																	CINT
																	(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00)
																	> ((long) 1));
															}
														else
															{	/* Reduce/walk.scm 43 */
																BgL_test1436z00_1702 =
																	BGl_2ze3ze3zz__r4_numbers_6_5z00
																	(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
																	BINT(((long) 1)));
													}}
												else
													{	/* Reduce/walk.scm 43 */
														BgL_test1436z00_1702 = ((bool_t) 0);
													}
												if (BgL_test1436z00_1702)
													{	/* Reduce/walk.scm 43 */
														BgL_arg1254z00_1350 =
															BGl_string1391z00zzreduce_walkz00;
													}
												else
													{	/* Reduce/walk.scm 43 */
														BgL_arg1254z00_1350 =
															BGl_string1392z00zzreduce_walkz00;
													}
											}
											bgl_display_obj(BgL_arg1254z00_1350,
												BgL_port1224z00_1349);
										}
										bgl_display_string(BGl_string1393z00zzreduce_walkz00,
											BgL_port1224z00_1349);
										bgl_display_char(((unsigned char) 10),
											BgL_port1224z00_1349);
									}
									{	/* Reduce/walk.scm 43 */
										obj_t BgL_list1259z00_1356;

										BgL_list1259z00_1356 =
											MAKE_YOUNG_PAIR(BINT(((long) -1)), BNIL);
										return BGl_exitz00zz__errorz00(BgL_list1259z00_1356);
									}
								}
							else
								{	/* Reduce/walk.scm 43 */
									obj_t BgL_g1106z00_1357;

									BgL_g1106z00_1357 = BNIL;
									{
										obj_t BgL_hooksz00_1360;
										obj_t BgL_hnamesz00_1361;

										BgL_hooksz00_1360 = BgL_g1106z00_1357;
										BgL_hnamesz00_1361 = BNIL;
									BgL_zc3z04anonymousza31260ze3z87_1362:
										if (NULLP(BgL_hooksz00_1360))
											{	/* Reduce/walk.scm 43 */
												return BgL_valuez00_1347;
											}
										else
											{	/* Reduce/walk.scm 43 */
												bool_t BgL_test1440z00_1719;

												{	/* Reduce/walk.scm 43 */
													obj_t BgL_fun1272z00_1369;

													BgL_fun1272z00_1369 =
														CAR(((obj_t) BgL_hooksz00_1360));
													BgL_test1440z00_1719 =
														CBOOL(PROCEDURE_ENTRY(BgL_fun1272z00_1369)
														(BgL_fun1272z00_1369, BEOA));
												}
												if (BgL_test1440z00_1719)
													{	/* Reduce/walk.scm 43 */
														obj_t BgL_arg1268z00_1366;
														obj_t BgL_arg1270z00_1367;

														BgL_arg1268z00_1366 =
															CDR(((obj_t) BgL_hooksz00_1360));
														BgL_arg1270z00_1367 =
															CDR(((obj_t) BgL_hnamesz00_1361));
														{
															obj_t BgL_hnamesz00_1731;
															obj_t BgL_hooksz00_1730;

															BgL_hooksz00_1730 = BgL_arg1268z00_1366;
															BgL_hnamesz00_1731 = BgL_arg1270z00_1367;
															BgL_hnamesz00_1361 = BgL_hnamesz00_1731;
															BgL_hooksz00_1360 = BgL_hooksz00_1730;
															goto BgL_zc3z04anonymousza31260ze3z87_1362;
														}
													}
												else
													{	/* Reduce/walk.scm 43 */
														obj_t BgL_arg1271z00_1368;

														BgL_arg1271z00_1368 =
															CAR(((obj_t) BgL_hnamesz00_1361));
														return
															BGl_internalzd2errorzd2zztools_errorz00
															(BGl_za2currentzd2passza2zd2zzengine_passz00,
															BGl_string1394z00zzreduce_walkz00,
															BgL_arg1271z00_1368);
													}
											}
									}
								}
						}
					}
				else
					{	/* Reduce/walk.scm 39 */
						if (CBOOL(BGl_za2optimzd2dataflowzf3za2z21zzengine_paramz00))
							{	/* Reduce/walk.scm 44 */
								BGl_reducezd2copyz12zc0zzreduce_copyz00(BgL_globalsz00_3);
								if (
									((long) CINT(BGl_za2optimza2z00zzengine_paramz00) >=
										((long) 2)))
									{	/* Reduce/walk.scm 46 */
										BGl_reducezd2csez12zc0zzreduce_csez00(BgL_globalsz00_3);
									}
								else
									{	/* Reduce/walk.scm 46 */
										BFALSE;
									}
								BGl_reducezd2typezd2checkz12z12zzreduce_typecz00
									(BgL_globalsz00_3);
								BGl_reducezd2copyz12zc0zzreduce_copyz00(BgL_globalsz00_3);
								BGl_reducezd2conditionalz12zc0zzreduce_condz00
									(BgL_globalsz00_3);
								BGl_reducezd21occz12zc0zzreduce_1occz00(BgL_globalsz00_3);
								if (CBOOL
									(BGl_za2optimzd2reducezd2betazf3za2zf3zzengine_paramz00))
									{	/* Reduce/walk.scm 51 */
										BGl_reducezd2betaz12zc0zzreduce_betaz00(BgL_globalsz00_3);
									}
								else
									{	/* Reduce/walk.scm 51 */
										BFALSE;
									}
								BGl_reducezd2flowzd2typezd2checkz12zc0zzreduce_flowzd2typeczd2
									(BgL_globalsz00_3);
								{	/* Reduce/walk.scm 53 */
									obj_t BgL_valuez00_1373;

									BgL_valuez00_1373 =
										BGl_removezd2varzd2zzast_removez00(CNST_TABLE_REF(((long)
												1)), BgL_globalsz00_3);
									if (((long)
											CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00)
											> ((long) 0)))
										{	/* Reduce/walk.scm 53 */
											{	/* Reduce/walk.scm 53 */
												obj_t BgL_port1225z00_1375;

												{	/* Reduce/walk.scm 53 */
													obj_t BgL_res1383z00_1590;

													{	/* Reduce/walk.scm 53 */
														obj_t BgL_tmpz00_1755;

														BgL_tmpz00_1755 = BGL_CURRENT_DYNAMIC_ENV();
														BgL_res1383z00_1590 =
															BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_1755);
													}
													BgL_port1225z00_1375 = BgL_res1383z00_1590;
												}
												bgl_display_obj
													(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
													BgL_port1225z00_1375);
												bgl_display_string(BGl_string1390z00zzreduce_walkz00,
													BgL_port1225z00_1375);
												{	/* Reduce/walk.scm 53 */
													obj_t BgL_arg1276z00_1376;

													{	/* Reduce/walk.scm 53 */
														bool_t BgL_test1445z00_1760;

														if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
															(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
															{	/* Reduce/walk.scm 53 */
																if (INTEGERP
																	(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
																	{	/* Reduce/walk.scm 53 */
																		BgL_test1445z00_1760 =
																			(
																			(long)
																			CINT
																			(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00)
																			> ((long) 1));
																	}
																else
																	{	/* Reduce/walk.scm 53 */
																		BgL_test1445z00_1760 =
																			BGl_2ze3ze3zz__r4_numbers_6_5z00
																			(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
																			BINT(((long) 1)));
															}}
														else
															{	/* Reduce/walk.scm 53 */
																BgL_test1445z00_1760 = ((bool_t) 0);
															}
														if (BgL_test1445z00_1760)
															{	/* Reduce/walk.scm 53 */
																BgL_arg1276z00_1376 =
																	BGl_string1391z00zzreduce_walkz00;
															}
														else
															{	/* Reduce/walk.scm 53 */
																BgL_arg1276z00_1376 =
																	BGl_string1392z00zzreduce_walkz00;
															}
													}
													bgl_display_obj(BgL_arg1276z00_1376,
														BgL_port1225z00_1375);
												}
												bgl_display_string(BGl_string1393z00zzreduce_walkz00,
													BgL_port1225z00_1375);
												bgl_display_char(((unsigned char) 10),
													BgL_port1225z00_1375);
											}
											{	/* Reduce/walk.scm 53 */
												obj_t BgL_list1280z00_1382;

												BgL_list1280z00_1382 =
													MAKE_YOUNG_PAIR(BINT(((long) -1)), BNIL);
												return BGl_exitz00zz__errorz00(BgL_list1280z00_1382);
											}
										}
									else
										{	/* Reduce/walk.scm 53 */
											obj_t BgL_g1108z00_1383;

											BgL_g1108z00_1383 = BNIL;
											{
												obj_t BgL_hooksz00_1386;
												obj_t BgL_hnamesz00_1387;

												BgL_hooksz00_1386 = BgL_g1108z00_1383;
												BgL_hnamesz00_1387 = BNIL;
											BgL_zc3z04anonymousza31281ze3z87_1388:
												if (NULLP(BgL_hooksz00_1386))
													{	/* Reduce/walk.scm 53 */
														return BgL_valuez00_1373;
													}
												else
													{	/* Reduce/walk.scm 53 */
														bool_t BgL_test1449z00_1777;

														{	/* Reduce/walk.scm 53 */
															obj_t BgL_fun1289z00_1395;

															BgL_fun1289z00_1395 =
																CAR(((obj_t) BgL_hooksz00_1386));
															BgL_test1449z00_1777 =
																CBOOL(PROCEDURE_ENTRY(BgL_fun1289z00_1395)
																(BgL_fun1289z00_1395, BEOA));
														}
														if (BgL_test1449z00_1777)
															{	/* Reduce/walk.scm 53 */
																obj_t BgL_arg1286z00_1392;
																obj_t BgL_arg1287z00_1393;

																BgL_arg1286z00_1392 =
																	CDR(((obj_t) BgL_hooksz00_1386));
																BgL_arg1287z00_1393 =
																	CDR(((obj_t) BgL_hnamesz00_1387));
																{
																	obj_t BgL_hnamesz00_1789;
																	obj_t BgL_hooksz00_1788;

																	BgL_hooksz00_1788 = BgL_arg1286z00_1392;
																	BgL_hnamesz00_1789 = BgL_arg1287z00_1393;
																	BgL_hnamesz00_1387 = BgL_hnamesz00_1789;
																	BgL_hooksz00_1386 = BgL_hooksz00_1788;
																	goto BgL_zc3z04anonymousza31281ze3z87_1388;
																}
															}
														else
															{	/* Reduce/walk.scm 53 */
																obj_t BgL_arg1288z00_1394;

																BgL_arg1288z00_1394 =
																	CAR(((obj_t) BgL_hnamesz00_1387));
																return
																	BGl_internalzd2errorzd2zztools_errorz00
																	(BGl_za2currentzd2passza2zd2zzengine_passz00,
																	BGl_string1394z00zzreduce_walkz00,
																	BgL_arg1288z00_1394);
															}
													}
											}
										}
								}
							}
						else
							{	/* Reduce/walk.scm 44 */
								return
									BGl_removezd2varzd2zzast_removez00(CNST_TABLE_REF(((long) 1)),
									BgL_globalsz00_3);
		}}}}

	}



/* &reduce-walk! */
	obj_t BGl_z62reducezd2walkz12za2zzreduce_walkz00(obj_t BgL_envz00_1606,
		obj_t BgL_globalsz00_1607, obj_t BgL_msgz00_1608,
		obj_t BgL_typezd2unsafezd2_1609)
	{
		{	/* Reduce/walk.scm 36 */
			return
				BGl_reducezd2walkz12zc0zzreduce_walkz00(BgL_globalsz00_1607,
				BgL_msgz00_1608, BgL_typezd2unsafezd2_1609);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzreduce_walkz00()
	{
		{	/* Reduce/walk.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzreduce_walkz00()
	{
		{	/* Reduce/walk.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzreduce_walkz00()
	{
		{	/* Reduce/walk.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzreduce_walkz00()
	{
		{	/* Reduce/walk.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1395z00zzreduce_walkz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1395z00zzreduce_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 373082201),
				BSTRING_TO_STRING(BGl_string1395z00zzreduce_walkz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1395z00zzreduce_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1395z00zzreduce_walkz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1395z00zzreduce_walkz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1395z00zzreduce_walkz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1395z00zzreduce_walkz00));
			BGl_modulezd2initializa7ationz75zzreduce_copyz00(((long) 215645695),
				BSTRING_TO_STRING(BGl_string1395z00zzreduce_walkz00));
			BGl_modulezd2initializa7ationz75zzreduce_csez00(((long) 347839299),
				BSTRING_TO_STRING(BGl_string1395z00zzreduce_walkz00));
			BGl_modulezd2initializa7ationz75zzreduce_condz00(((long) 39795286),
				BSTRING_TO_STRING(BGl_string1395z00zzreduce_walkz00));
			BGl_modulezd2initializa7ationz75zzreduce_typecz00(((long) 433031841),
				BSTRING_TO_STRING(BGl_string1395z00zzreduce_walkz00));
			BGl_modulezd2initializa7ationz75zzreduce_flowzd2typeczd2(((long)
					67029553), BSTRING_TO_STRING(BGl_string1395z00zzreduce_walkz00));
			BGl_modulezd2initializa7ationz75zzreduce_1occz00(((long) 256644171),
				BSTRING_TO_STRING(BGl_string1395z00zzreduce_walkz00));
			BGl_modulezd2initializa7ationz75zzreduce_betaz00(((long) 214256927),
				BSTRING_TO_STRING(BGl_string1395z00zzreduce_walkz00));
			return BGl_modulezd2initializa7ationz75zzast_removez00(((long) 383247839),
				BSTRING_TO_STRING(BGl_string1395z00zzreduce_walkz00));
		}

	}

#ifdef __cplusplus
}
#endif
