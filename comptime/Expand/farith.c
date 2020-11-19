/*===========================================================================*/
/*   (Expand/farith.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Expand/farith.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2fminzd2zzexpand_farithmetiquez00(obj_t,
		obj_t);
	static obj_t BGl_z62expandzd2fmaxzb0zzexpand_farithmetiquez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_objectzd2initzd2zzexpand_farithmetiquez00();
	BGL_EXPORTED_DECL obj_t BGl_expandzd2fatanzd2zzexpand_farithmetiquez00(obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zzexpand_farithmetiquez00();
	static obj_t BGl_z62expandzd2fminzb0zzexpand_farithmetiquez00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2zb2flz60zzexpand_farithmetiquez00(obj_t,
		obj_t);
	static obj_t BGl_z62expandzd2zb2flz02zzexpand_farithmetiquez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62expandzd2fatanzb0zzexpand_farithmetiquez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzexpand_farithmetiquez00();
	BGL_EXPORTED_DECL obj_t BGl_expandzd2zd2flz00zzexpand_farithmetiquez00(obj_t,
		obj_t);
	static obj_t BGl_z62expandzd2zd2flz62zzexpand_farithmetiquez00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2zf2flz20zzexpand_farithmetiquez00(obj_t,
		obj_t);
	static obj_t BGl_z62expandzd2zf2flz42zzexpand_farithmetiquez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzexpand_farithmetiquez00 =
		BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzexpand_farithmetiquez00();
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2za2flz70zzexpand_farithmetiquez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzexpand_farithmetiquez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_z62expandzd2za2flz12zzexpand_farithmetiquez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_cnstzd2initzd2zzexpand_farithmetiquez00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzexpand_farithmetiquez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzexpand_farithmetiquez00();
	BGL_EXPORTED_DECL obj_t BGl_expandzd2fmaxzd2zzexpand_farithmetiquez00(obj_t,
		obj_t);
	extern obj_t BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00(obj_t);
	static obj_t __cnst[13];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2fatanzd2envz00zzexpand_farithmetiquez00,
		BgL_bgl_za762expandza7d2fata1383z00,
		BGl_z62expandzd2fatanzb0zzexpand_farithmetiquez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2zb2flzd2envzb2zzexpand_farithmetiquez00,
		BgL_bgl_za762expandza7d2za7b2f1384za7,
		BGl_z62expandzd2zb2flz02zzexpand_farithmetiquez00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1362z00zzexpand_farithmetiquez00,
		BgL_bgl_string1362za700za7za7e1385za7, "Too many arguments provided", 27);
	      DEFINE_STRING(BGl_string1363z00zzexpand_farithmetiquez00,
		BgL_bgl_string1363za700za7za7e1386za7,
		"Incorrect number of arguments for `+fl'", 39);
	      DEFINE_STRING(BGl_string1364z00zzexpand_farithmetiquez00,
		BgL_bgl_string1364za700za7za7e1387za7,
		"Incorrect number of arguments for `-fl'", 39);
	      DEFINE_STRING(BGl_string1365z00zzexpand_farithmetiquez00,
		BgL_bgl_string1365za700za7za7e1388za7,
		"Incorrect number of arguments for `*fl'", 39);
	      DEFINE_STRING(BGl_string1366z00zzexpand_farithmetiquez00,
		BgL_bgl_string1366za700za7za7e1389za7,
		"Incorrect number of arguments for `/fl'", 39);
	      DEFINE_STRING(BGl_string1367z00zzexpand_farithmetiquez00,
		BgL_bgl_string1367za700za7za7e1390za7, "expand_farithmetique", 20);
	      DEFINE_STRING(BGl_string1368z00zzexpand_farithmetiquez00,
		BgL_bgl_string1368za700za7za7e1391za7,
		"/fl *fl -fl +fl atan-2fl atan-1fl minfl min min-2fl let maxfl max max-2fl ",
		74);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2zd2flzd2envzd2zzexpand_farithmetiquez00,
		BgL_bgl_za762expandza7d2za7d2f1392za7,
		BGl_z62expandzd2zd2flz62zzexpand_farithmetiquez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2zf2flzd2envzf2zzexpand_farithmetiquez00,
		BgL_bgl_za762expandza7d2za7f2f1393za7,
		BGl_z62expandzd2zf2flz42zzexpand_farithmetiquez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2za2flzd2envza2zzexpand_farithmetiquez00,
		BgL_bgl_za762expandza7d2za7a2f1394za7,
		BGl_z62expandzd2za2flz12zzexpand_farithmetiquez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2fminzd2envz00zzexpand_farithmetiquez00,
		BgL_bgl_za762expandza7d2fmin1395z00,
		BGl_z62expandzd2fminzb0zzexpand_farithmetiquez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2fmaxzd2envz00zzexpand_farithmetiquez00,
		BgL_bgl_za762expandza7d2fmax1396z00,
		BGl_z62expandzd2fmaxzb0zzexpand_farithmetiquez00, 0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzexpand_farithmetiquez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzexpand_farithmetiquez00(long
		BgL_checksumz00_455, char *BgL_fromz00_456)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzexpand_farithmetiquez00))
				{
					BGl_requirezd2initializa7ationz75zzexpand_farithmetiquez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzexpand_farithmetiquez00();
					BGl_libraryzd2moduleszd2initz00zzexpand_farithmetiquez00();
					BGl_cnstzd2initzd2zzexpand_farithmetiquez00();
					BGl_importedzd2moduleszd2initz00zzexpand_farithmetiquez00();
					return BGl_methodzd2initzd2zzexpand_farithmetiquez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzexpand_farithmetiquez00()
	{
		{	/* Expand/farith.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"expand_farithmetique");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"expand_farithmetique");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"expand_farithmetique");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"expand_farithmetique");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"expand_farithmetique");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"expand_farithmetique");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long) 0),
				"expand_farithmetique");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzexpand_farithmetiquez00()
	{
		{	/* Expand/farith.scm 15 */
			{	/* Expand/farith.scm 15 */
				obj_t BgL_cportz00_442;

				{	/* Expand/farith.scm 15 */
					obj_t BgL_stringz00_450;

					BgL_stringz00_450 = BGl_string1368z00zzexpand_farithmetiquez00;
					{	/* Expand/farith.scm 15 */
						obj_t BgL_startz00_451;

						BgL_startz00_451 = BINT(((long) 0));
						{	/* Expand/farith.scm 15 */
							obj_t BgL_endz00_452;

							BgL_endz00_452 = BINT(STRING_LENGTH(((obj_t) BgL_stringz00_450)));
							{	/* Expand/farith.scm 15 */

								BgL_cportz00_442 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_450, BgL_startz00_451, BgL_endz00_452);
				}}}}
				{
					long BgL_iz00_443;

					BgL_iz00_443 = ((long) 12);
				BgL_loopz00_444:
					if ((BgL_iz00_443 == ((long) -1)))
						{	/* Expand/farith.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Expand/farith.scm 15 */
							{	/* Expand/farith.scm 15 */
								obj_t BgL_arg1381z00_446;

								{	/* Expand/farith.scm 15 */

									{	/* Expand/farith.scm 15 */
										obj_t BgL_locationz00_448;

										BgL_locationz00_448 = BBOOL(((bool_t) 0));
										{	/* Expand/farith.scm 15 */

											BgL_arg1381z00_446 =
												BGl_readz00zz__readerz00(BgL_cportz00_442,
												BgL_locationz00_448);
										}
									}
								}
								{	/* Expand/farith.scm 15 */
									int BgL_tmpz00_481;

									BgL_tmpz00_481 = (int) (BgL_iz00_443);
									CNST_TABLE_SET(BgL_tmpz00_481, BgL_arg1381z00_446);
							}}
							{	/* Expand/farith.scm 15 */
								int BgL_auxz00_449;

								BgL_auxz00_449 = (int) ((BgL_iz00_443 - ((long) 1)));
								{
									long BgL_iz00_486;

									BgL_iz00_486 = (long) (BgL_auxz00_449);
									BgL_iz00_443 = BgL_iz00_486;
									goto BgL_loopz00_444;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzexpand_farithmetiquez00()
	{
		{	/* Expand/farith.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* expand-fmax */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2fmaxzd2zzexpand_farithmetiquez00(obj_t
		BgL_xz00_3, obj_t BgL_ez00_4)
	{
		{	/* Expand/farith.scm 29 */
			{
				obj_t BgL_xz00_87;
				obj_t BgL_yz00_88;
				obj_t BgL_za7za7_89;
				obj_t BgL_xz00_84;
				obj_t BgL_yz00_85;

				if (PAIRP(BgL_xz00_3))
					{	/* Expand/farith.scm 30 */
						obj_t BgL_cdrzd2110zd2_93;

						BgL_cdrzd2110zd2_93 = CDR(BgL_xz00_3);
						if (PAIRP(BgL_cdrzd2110zd2_93))
							{	/* Expand/farith.scm 30 */
								obj_t BgL_cdrzd2114zd2_95;

								BgL_cdrzd2114zd2_95 = CDR(BgL_cdrzd2110zd2_93);
								if (PAIRP(BgL_cdrzd2114zd2_95))
									{	/* Expand/farith.scm 30 */
										if (NULLP(CDR(BgL_cdrzd2114zd2_95)))
											{	/* Expand/farith.scm 30 */
												BgL_xz00_84 = CAR(BgL_cdrzd2110zd2_93);
												BgL_yz00_85 = CAR(BgL_cdrzd2114zd2_95);
												{	/* Expand/farith.scm 33 */
													bool_t BgL_test1403z00_500;

													{	/* Expand/farith.scm 33 */
														bool_t BgL_test1404z00_501;

														if (INTEGERP(BgL_xz00_84))
															{	/* Expand/farith.scm 33 */
																BgL_test1404z00_501 = ((bool_t) 1);
															}
														else
															{	/* Expand/farith.scm 33 */
																BgL_test1404z00_501 = REALP(BgL_xz00_84);
															}
														if (BgL_test1404z00_501)
															{	/* Expand/farith.scm 33 */
																if (INTEGERP(BgL_yz00_85))
																	{	/* Expand/farith.scm 33 */
																		BgL_test1403z00_500 = ((bool_t) 1);
																	}
																else
																	{	/* Expand/farith.scm 33 */
																		BgL_test1403z00_500 = REALP(BgL_yz00_85);
																	}
															}
														else
															{	/* Expand/farith.scm 33 */
																BgL_test1403z00_500 = ((bool_t) 0);
															}
													}
													if (BgL_test1403z00_500)
														{	/* Expand/farith.scm 33 */
															return
																DOUBLE_TO_REAL(BGL_FL_MAX2(REAL_TO_DOUBLE
																	(BgL_xz00_84), REAL_TO_DOUBLE(BgL_yz00_85)));
														}
													else
														{	/* Expand/farith.scm 36 */
															obj_t BgL_arg1065z00_109;

															{	/* Expand/farith.scm 36 */
																obj_t BgL_arg1073z00_110;

																{	/* Expand/farith.scm 36 */
																	obj_t BgL_arg1074z00_111;

																	BgL_arg1074z00_111 =
																		MAKE_YOUNG_PAIR(BgL_yz00_85, BNIL);
																	BgL_arg1073z00_110 =
																		MAKE_YOUNG_PAIR(BgL_xz00_84,
																		BgL_arg1074z00_111);
																}
																BgL_arg1065z00_109 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)),
																	BgL_arg1073z00_110);
															}
															return
																PROCEDURE_ENTRY(BgL_ez00_4) (BgL_ez00_4,
																BgL_arg1065z00_109, BgL_ez00_4, BEOA);
														}
												}
											}
										else
											{	/* Expand/farith.scm 30 */
												obj_t BgL_cdrzd2136zd2_102;

												BgL_cdrzd2136zd2_102 =
													CDR(((obj_t) BgL_cdrzd2110zd2_93));
												{	/* Expand/farith.scm 30 */
													obj_t BgL_arg1059z00_103;
													obj_t BgL_arg1060z00_104;
													obj_t BgL_arg1061z00_105;

													BgL_arg1059z00_103 =
														CAR(((obj_t) BgL_cdrzd2110zd2_93));
													BgL_arg1060z00_104 =
														CAR(((obj_t) BgL_cdrzd2136zd2_102));
													BgL_arg1061z00_105 =
														CDR(((obj_t) BgL_cdrzd2136zd2_102));
													BgL_xz00_87 = BgL_arg1059z00_103;
													BgL_yz00_88 = BgL_arg1060z00_104;
													BgL_za7za7_89 = BgL_arg1061z00_105;
													{	/* Expand/farith.scm 38 */
														obj_t BgL_maxz00_113;

														BgL_maxz00_113 =
															BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
															(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF
																(((long) 1))));
														{	/* Expand/farith.scm 39 */
															obj_t BgL_arg1078z00_114;

															{	/* Expand/farith.scm 39 */
																obj_t BgL_arg1095z00_115;

																{	/* Expand/farith.scm 39 */
																	obj_t BgL_arg1099z00_116;
																	obj_t BgL_arg1100z00_117;

																	{	/* Expand/farith.scm 39 */
																		obj_t BgL_arg1101z00_118;

																		{	/* Expand/farith.scm 39 */
																			obj_t BgL_arg1103z00_119;

																			{	/* Expand/farith.scm 39 */
																				obj_t BgL_arg1109z00_120;

																				{	/* Expand/farith.scm 39 */
																					obj_t BgL_arg1110z00_121;

																					{	/* Expand/farith.scm 39 */
																						obj_t BgL_arg1113z00_122;

																						BgL_arg1113z00_122 =
																							MAKE_YOUNG_PAIR(BgL_yz00_88,
																							BNIL);
																						BgL_arg1110z00_121 =
																							MAKE_YOUNG_PAIR(BgL_xz00_87,
																							BgL_arg1113z00_122);
																					}
																					BgL_arg1109z00_120 =
																						MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																								(long) 0)), BgL_arg1110z00_121);
																				}
																				BgL_arg1103z00_119 =
																					MAKE_YOUNG_PAIR(BgL_arg1109z00_120,
																					BNIL);
																			}
																			BgL_arg1101z00_118 =
																				MAKE_YOUNG_PAIR(BgL_maxz00_113,
																				BgL_arg1103z00_119);
																		}
																		BgL_arg1099z00_116 =
																			MAKE_YOUNG_PAIR(BgL_arg1101z00_118, BNIL);
																	}
																	{	/* Expand/farith.scm 40 */
																		obj_t BgL_arg1114z00_123;

																		{	/* Expand/farith.scm 40 */
																			obj_t BgL_arg1115z00_124;

																			BgL_arg1115z00_124 =
																				MAKE_YOUNG_PAIR(BgL_maxz00_113,
																				BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																				(BgL_za7za7_89, BNIL));
																			BgL_arg1114z00_123 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						2)), BgL_arg1115z00_124);
																		}
																		BgL_arg1100z00_117 =
																			MAKE_YOUNG_PAIR(BgL_arg1114z00_123, BNIL);
																	}
																	BgL_arg1095z00_115 =
																		MAKE_YOUNG_PAIR(BgL_arg1099z00_116,
																		BgL_arg1100z00_117);
																}
																BgL_arg1078z00_114 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)),
																	BgL_arg1095z00_115);
															}
															return
																PROCEDURE_ENTRY(BgL_ez00_4) (BgL_ez00_4,
																BgL_arg1078z00_114, BgL_ez00_4, BEOA);
														}
													}
												}
											}
									}
								else
									{	/* Expand/farith.scm 30 */
										return BFALSE;
									}
							}
						else
							{	/* Expand/farith.scm 30 */
								return BFALSE;
							}
					}
				else
					{	/* Expand/farith.scm 30 */
						return BFALSE;
					}
			}
		}

	}



/* &expand-fmax */
	obj_t BGl_z62expandzd2fmaxzb0zzexpand_farithmetiquez00(obj_t BgL_envz00_421,
		obj_t BgL_xz00_422, obj_t BgL_ez00_423)
	{
		{	/* Expand/farith.scm 29 */
			return
				BGl_expandzd2fmaxzd2zzexpand_farithmetiquez00(BgL_xz00_422,
				BgL_ez00_423);
		}

	}



/* expand-fmin */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2fminzd2zzexpand_farithmetiquez00(obj_t
		BgL_xz00_5, obj_t BgL_ez00_6)
	{
		{	/* Expand/farith.scm 46 */
			{
				obj_t BgL_xz00_130;
				obj_t BgL_yz00_131;
				obj_t BgL_za7za7_132;
				obj_t BgL_xz00_127;
				obj_t BgL_yz00_128;

				if (PAIRP(BgL_xz00_5))
					{	/* Expand/farith.scm 47 */
						obj_t BgL_cdrzd2175zd2_136;

						BgL_cdrzd2175zd2_136 = CDR(BgL_xz00_5);
						if (PAIRP(BgL_cdrzd2175zd2_136))
							{	/* Expand/farith.scm 47 */
								obj_t BgL_cdrzd2179zd2_138;

								BgL_cdrzd2179zd2_138 = CDR(BgL_cdrzd2175zd2_136);
								if (PAIRP(BgL_cdrzd2179zd2_138))
									{	/* Expand/farith.scm 47 */
										if (NULLP(CDR(BgL_cdrzd2179zd2_138)))
											{	/* Expand/farith.scm 47 */
												BgL_xz00_127 = CAR(BgL_cdrzd2175zd2_136);
												BgL_yz00_128 = CAR(BgL_cdrzd2179zd2_138);
												{	/* Expand/farith.scm 50 */
													bool_t BgL_test1411z00_566;

													{	/* Expand/farith.scm 50 */
														bool_t BgL_test1412z00_567;

														if (INTEGERP(BgL_xz00_127))
															{	/* Expand/farith.scm 50 */
																BgL_test1412z00_567 = ((bool_t) 1);
															}
														else
															{	/* Expand/farith.scm 50 */
																BgL_test1412z00_567 = REALP(BgL_xz00_127);
															}
														if (BgL_test1412z00_567)
															{	/* Expand/farith.scm 50 */
																if (INTEGERP(BgL_yz00_128))
																	{	/* Expand/farith.scm 50 */
																		BgL_test1411z00_566 = ((bool_t) 1);
																	}
																else
																	{	/* Expand/farith.scm 50 */
																		BgL_test1411z00_566 = REALP(BgL_yz00_128);
																	}
															}
														else
															{	/* Expand/farith.scm 50 */
																BgL_test1411z00_566 = ((bool_t) 0);
															}
													}
													if (BgL_test1411z00_566)
														{	/* Expand/farith.scm 50 */
															return
																DOUBLE_TO_REAL(BGL_FL_MIN2(REAL_TO_DOUBLE
																	(BgL_xz00_127),
																	REAL_TO_DOUBLE(BgL_yz00_128)));
														}
													else
														{	/* Expand/farith.scm 53 */
															obj_t BgL_arg1133z00_152;

															{	/* Expand/farith.scm 53 */
																obj_t BgL_arg1134z00_153;

																{	/* Expand/farith.scm 53 */
																	obj_t BgL_arg1140z00_154;

																	BgL_arg1140z00_154 =
																		MAKE_YOUNG_PAIR(BgL_yz00_128, BNIL);
																	BgL_arg1134z00_153 =
																		MAKE_YOUNG_PAIR(BgL_xz00_127,
																		BgL_arg1140z00_154);
																}
																BgL_arg1133z00_152 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 4)),
																	BgL_arg1134z00_153);
															}
															return
																PROCEDURE_ENTRY(BgL_ez00_6) (BgL_ez00_6,
																BgL_arg1133z00_152, BgL_ez00_6, BEOA);
														}
												}
											}
										else
											{	/* Expand/farith.scm 47 */
												obj_t BgL_cdrzd2201zd2_145;

												BgL_cdrzd2201zd2_145 =
													CDR(((obj_t) BgL_cdrzd2175zd2_136));
												{	/* Expand/farith.scm 47 */
													obj_t BgL_arg1125z00_146;
													obj_t BgL_arg1126z00_147;
													obj_t BgL_arg1127z00_148;

													BgL_arg1125z00_146 =
														CAR(((obj_t) BgL_cdrzd2175zd2_136));
													BgL_arg1126z00_147 =
														CAR(((obj_t) BgL_cdrzd2201zd2_145));
													BgL_arg1127z00_148 =
														CDR(((obj_t) BgL_cdrzd2201zd2_145));
													BgL_xz00_130 = BgL_arg1125z00_146;
													BgL_yz00_131 = BgL_arg1126z00_147;
													BgL_za7za7_132 = BgL_arg1127z00_148;
													{	/* Expand/farith.scm 55 */
														obj_t BgL_minz00_156;

														BgL_minz00_156 =
															BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
															(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF
																(((long) 5))));
														{	/* Expand/farith.scm 56 */
															obj_t BgL_arg1145z00_157;

															{	/* Expand/farith.scm 56 */
																obj_t BgL_arg1146z00_158;

																{	/* Expand/farith.scm 56 */
																	obj_t BgL_arg1155z00_159;
																	obj_t BgL_arg1156z00_160;

																	{	/* Expand/farith.scm 56 */
																		obj_t BgL_arg1165z00_161;

																		{	/* Expand/farith.scm 56 */
																			obj_t BgL_arg1166z00_162;

																			{	/* Expand/farith.scm 56 */
																				obj_t BgL_arg1167z00_163;

																				{	/* Expand/farith.scm 56 */
																					obj_t BgL_arg1169z00_164;

																					{	/* Expand/farith.scm 56 */
																						obj_t BgL_arg1170z00_165;

																						BgL_arg1170z00_165 =
																							MAKE_YOUNG_PAIR(BgL_yz00_131,
																							BNIL);
																						BgL_arg1169z00_164 =
																							MAKE_YOUNG_PAIR(BgL_xz00_130,
																							BgL_arg1170z00_165);
																					}
																					BgL_arg1167z00_163 =
																						MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																								(long) 4)), BgL_arg1169z00_164);
																				}
																				BgL_arg1166z00_162 =
																					MAKE_YOUNG_PAIR(BgL_arg1167z00_163,
																					BNIL);
																			}
																			BgL_arg1165z00_161 =
																				MAKE_YOUNG_PAIR(BgL_minz00_156,
																				BgL_arg1166z00_162);
																		}
																		BgL_arg1155z00_159 =
																			MAKE_YOUNG_PAIR(BgL_arg1165z00_161, BNIL);
																	}
																	{	/* Expand/farith.scm 57 */
																		obj_t BgL_arg1172z00_166;

																		{	/* Expand/farith.scm 57 */
																			obj_t BgL_arg1174z00_167;

																			BgL_arg1174z00_167 =
																				MAKE_YOUNG_PAIR(BgL_minz00_156,
																				BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																				(BgL_za7za7_132, BNIL));
																			BgL_arg1172z00_166 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						6)), BgL_arg1174z00_167);
																		}
																		BgL_arg1156z00_160 =
																			MAKE_YOUNG_PAIR(BgL_arg1172z00_166, BNIL);
																	}
																	BgL_arg1146z00_158 =
																		MAKE_YOUNG_PAIR(BgL_arg1155z00_159,
																		BgL_arg1156z00_160);
																}
																BgL_arg1145z00_157 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)),
																	BgL_arg1146z00_158);
															}
															return
																PROCEDURE_ENTRY(BgL_ez00_6) (BgL_ez00_6,
																BgL_arg1145z00_157, BgL_ez00_6, BEOA);
														}
													}
												}
											}
									}
								else
									{	/* Expand/farith.scm 47 */
										return BFALSE;
									}
							}
						else
							{	/* Expand/farith.scm 47 */
								return BFALSE;
							}
					}
				else
					{	/* Expand/farith.scm 47 */
						return BFALSE;
					}
			}
		}

	}



/* &expand-fmin */
	obj_t BGl_z62expandzd2fminzb0zzexpand_farithmetiquez00(obj_t BgL_envz00_424,
		obj_t BgL_xz00_425, obj_t BgL_ez00_426)
	{
		{	/* Expand/farith.scm 46 */
			return
				BGl_expandzd2fminzd2zzexpand_farithmetiquez00(BgL_xz00_425,
				BgL_ez00_426);
		}

	}



/* expand-fatan */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2fatanzd2zzexpand_farithmetiquez00(obj_t
		BgL_xz00_7, obj_t BgL_ez00_8)
	{
		{	/* Expand/farith.scm 63 */
			{
				obj_t BgL_xz00_172;
				obj_t BgL_yz00_173;
				obj_t BgL_xz00_170;

				if (PAIRP(BgL_xz00_7))
					{	/* Expand/farith.scm 64 */
						obj_t BgL_cdrzd2239zd2_178;

						BgL_cdrzd2239zd2_178 = CDR(BgL_xz00_7);
						if (PAIRP(BgL_cdrzd2239zd2_178))
							{	/* Expand/farith.scm 64 */
								if (NULLP(CDR(BgL_cdrzd2239zd2_178)))
									{	/* Expand/farith.scm 64 */
										BgL_xz00_170 = CAR(BgL_cdrzd2239zd2_178);
										{	/* Expand/farith.scm 66 */
											bool_t BgL_test1420z00_629;

											if (INTEGERP(BgL_xz00_170))
												{	/* Expand/farith.scm 66 */
													BgL_test1420z00_629 = ((bool_t) 1);
												}
											else
												{	/* Expand/farith.scm 66 */
													BgL_test1420z00_629 = REALP(BgL_xz00_170);
												}
											if (BgL_test1420z00_629)
												{	/* Expand/farith.scm 66 */
													return
														DOUBLE_TO_REAL(atan(REAL_TO_DOUBLE(BgL_xz00_170)));
												}
											else
												{	/* Expand/farith.scm 68 */
													obj_t BgL_arg1211z00_193;

													{	/* Expand/farith.scm 68 */
														obj_t BgL_arg1216z00_194;

														BgL_arg1216z00_194 =
															MAKE_YOUNG_PAIR(BgL_xz00_170, BNIL);
														BgL_arg1211z00_193 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 7)),
															BgL_arg1216z00_194);
													}
													return
														PROCEDURE_ENTRY(BgL_ez00_8) (BgL_ez00_8,
														BgL_arg1211z00_193, BgL_ez00_8, BEOA);
												}
										}
									}
								else
									{	/* Expand/farith.scm 64 */
										obj_t BgL_cdrzd2255zd2_184;

										BgL_cdrzd2255zd2_184 = CDR(((obj_t) BgL_cdrzd2239zd2_178));
										if (PAIRP(BgL_cdrzd2255zd2_184))
											{	/* Expand/farith.scm 64 */
												if (NULLP(CDR(BgL_cdrzd2255zd2_184)))
													{	/* Expand/farith.scm 64 */
														obj_t BgL_arg1194z00_188;
														obj_t BgL_arg1197z00_189;

														BgL_arg1194z00_188 =
															CAR(((obj_t) BgL_cdrzd2239zd2_178));
														BgL_arg1197z00_189 = CAR(BgL_cdrzd2255zd2_184);
														BgL_xz00_172 = BgL_arg1194z00_188;
														BgL_yz00_173 = BgL_arg1197z00_189;
														{	/* Expand/farith.scm 70 */
															bool_t BgL_test1424z00_655;

															{	/* Expand/farith.scm 70 */
																bool_t BgL_test1425z00_656;

																if (INTEGERP(BgL_xz00_172))
																	{	/* Expand/farith.scm 70 */
																		BgL_test1425z00_656 = ((bool_t) 1);
																	}
																else
																	{	/* Expand/farith.scm 70 */
																		BgL_test1425z00_656 = REALP(BgL_xz00_172);
																	}
																if (BgL_test1425z00_656)
																	{	/* Expand/farith.scm 70 */
																		if (INTEGERP(BgL_yz00_173))
																			{	/* Expand/farith.scm 70 */
																				BgL_test1424z00_655 = ((bool_t) 1);
																			}
																		else
																			{	/* Expand/farith.scm 70 */
																				BgL_test1424z00_655 =
																					REALP(BgL_yz00_173);
																			}
																	}
																else
																	{	/* Expand/farith.scm 70 */
																		BgL_test1424z00_655 = ((bool_t) 0);
																	}
															}
															if (BgL_test1424z00_655)
																{	/* Expand/farith.scm 71 */
																	double BgL_res1327z00_348;

																	{	/* Expand/farith.scm 71 */
																		double BgL_xz00_346;
																		double BgL_yz00_347;

																		BgL_xz00_346 = REAL_TO_DOUBLE(BgL_xz00_172);
																		BgL_yz00_347 = REAL_TO_DOUBLE(BgL_yz00_173);
																		BgL_res1327z00_348 =
																			atan2(BgL_xz00_346, BgL_yz00_347);
																	}
																	return DOUBLE_TO_REAL(BgL_res1327z00_348);
																}
															else
																{	/* Expand/farith.scm 72 */
																	obj_t BgL_arg1221z00_197;

																	{	/* Expand/farith.scm 72 */
																		obj_t BgL_arg1223z00_198;

																		{	/* Expand/farith.scm 72 */
																			obj_t BgL_arg1225z00_199;

																			BgL_arg1225z00_199 =
																				MAKE_YOUNG_PAIR(BgL_yz00_173, BNIL);
																			BgL_arg1223z00_198 =
																				MAKE_YOUNG_PAIR(BgL_xz00_172,
																				BgL_arg1225z00_199);
																		}
																		BgL_arg1221z00_197 =
																			MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																					8)), BgL_arg1223z00_198);
																	}
																	return
																		PROCEDURE_ENTRY(BgL_ez00_8) (BgL_ez00_8,
																		BgL_arg1221z00_197, BgL_ez00_8, BEOA);
																}
														}
													}
												else
													{	/* Expand/farith.scm 64 */
													BgL_tagzd2233zd2_175:
														return
															BGl_errorz00zz__errorz00(BNIL,
															BGl_string1362z00zzexpand_farithmetiquez00,
															BgL_xz00_7);
													}
											}
										else
											{	/* Expand/farith.scm 64 */
												goto BgL_tagzd2233zd2_175;
											}
									}
							}
						else
							{	/* Expand/farith.scm 64 */
								goto BgL_tagzd2233zd2_175;
							}
					}
				else
					{	/* Expand/farith.scm 64 */
						goto BgL_tagzd2233zd2_175;
					}
			}
		}

	}



/* &expand-fatan */
	obj_t BGl_z62expandzd2fatanzb0zzexpand_farithmetiquez00(obj_t BgL_envz00_427,
		obj_t BgL_xz00_428, obj_t BgL_ez00_429)
	{
		{	/* Expand/farith.scm 63 */
			return
				BGl_expandzd2fatanzd2zzexpand_farithmetiquez00(BgL_xz00_428,
				BgL_ez00_429);
		}

	}



/* expand-+fl */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2zb2flz60zzexpand_farithmetiquez00(obj_t
		BgL_xz00_9, obj_t BgL_ez00_10)
	{
		{	/* Expand/farith.scm 79 */
			{
				obj_t BgL_xz00_201;
				obj_t BgL_yz00_202;

				if (PAIRP(BgL_xz00_9))
					{	/* Expand/farith.scm 80 */
						obj_t BgL_cdrzd2278zd2_207;

						BgL_cdrzd2278zd2_207 = CDR(BgL_xz00_9);
						if (PAIRP(BgL_cdrzd2278zd2_207))
							{	/* Expand/farith.scm 80 */
								obj_t BgL_cdrzd2282zd2_209;

								BgL_cdrzd2282zd2_209 = CDR(BgL_cdrzd2278zd2_207);
								if (PAIRP(BgL_cdrzd2282zd2_209))
									{	/* Expand/farith.scm 80 */
										if (NULLP(CDR(BgL_cdrzd2282zd2_209)))
											{	/* Expand/farith.scm 80 */
												BgL_xz00_201 = CAR(BgL_cdrzd2278zd2_207);
												BgL_yz00_202 = CAR(BgL_cdrzd2282zd2_209);
												{	/* Expand/farith.scm 83 */
													bool_t BgL_test1432z00_689;

													if (REALP(BgL_xz00_201))
														{	/* Expand/farith.scm 83 */
															BgL_test1432z00_689 = REALP(BgL_yz00_202);
														}
													else
														{	/* Expand/farith.scm 83 */
															BgL_test1432z00_689 = ((bool_t) 0);
														}
													if (BgL_test1432z00_689)
														{	/* Expand/farith.scm 83 */
															return
																DOUBLE_TO_REAL(
																(REAL_TO_DOUBLE(BgL_xz00_201) +
																	REAL_TO_DOUBLE(BgL_yz00_202)));
														}
													else
														{	/* Expand/farith.scm 86 */
															obj_t BgL_arg1245z00_218;

															{	/* Expand/farith.scm 86 */
																obj_t BgL_arg1246z00_219;
																obj_t BgL_arg1247z00_220;

																BgL_arg1246z00_219 =
																	PROCEDURE_ENTRY(BgL_ez00_10) (BgL_ez00_10,
																	BgL_xz00_201, BgL_ez00_10, BEOA);
																{	/* Expand/farith.scm 86 */
																	obj_t BgL_arg1250z00_221;

																	BgL_arg1250z00_221 =
																		PROCEDURE_ENTRY(BgL_ez00_10) (BgL_ez00_10,
																		BgL_yz00_202, BgL_ez00_10, BEOA);
																	BgL_arg1247z00_220 =
																		MAKE_YOUNG_PAIR(BgL_arg1250z00_221, BNIL);
																}
																BgL_arg1245z00_218 =
																	MAKE_YOUNG_PAIR(BgL_arg1246z00_219,
																	BgL_arg1247z00_220);
															}
															return
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 9)),
																BgL_arg1245z00_218);
											}}}
										else
											{	/* Expand/farith.scm 80 */
											BgL_tagzd2271zd2_204:
												return
													BGl_errorz00zz__errorz00(BFALSE,
													BGl_string1363z00zzexpand_farithmetiquez00,
													BgL_xz00_9);
											}
									}
								else
									{	/* Expand/farith.scm 80 */
										goto BgL_tagzd2271zd2_204;
									}
							}
						else
							{	/* Expand/farith.scm 80 */
								goto BgL_tagzd2271zd2_204;
							}
					}
				else
					{	/* Expand/farith.scm 80 */
						goto BgL_tagzd2271zd2_204;
					}
			}
		}

	}



/* &expand-+fl */
	obj_t BGl_z62expandzd2zb2flz02zzexpand_farithmetiquez00(obj_t BgL_envz00_430,
		obj_t BgL_xz00_431, obj_t BgL_ez00_432)
	{
		{	/* Expand/farith.scm 79 */
			return
				BGl_expandzd2zb2flz60zzexpand_farithmetiquez00(BgL_xz00_431,
				BgL_ez00_432);
		}

	}



/* expand--fl */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2zd2flz00zzexpand_farithmetiquez00(obj_t
		BgL_xz00_11, obj_t BgL_ez00_12)
	{
		{	/* Expand/farith.scm 93 */
			{
				obj_t BgL_xz00_223;
				obj_t BgL_yz00_224;

				if (PAIRP(BgL_xz00_11))
					{	/* Expand/farith.scm 94 */
						obj_t BgL_cdrzd2296zd2_229;

						BgL_cdrzd2296zd2_229 = CDR(BgL_xz00_11);
						if (PAIRP(BgL_cdrzd2296zd2_229))
							{	/* Expand/farith.scm 94 */
								obj_t BgL_cdrzd2300zd2_231;

								BgL_cdrzd2300zd2_231 = CDR(BgL_cdrzd2296zd2_229);
								if (PAIRP(BgL_cdrzd2300zd2_231))
									{	/* Expand/farith.scm 94 */
										if (NULLP(CDR(BgL_cdrzd2300zd2_231)))
											{	/* Expand/farith.scm 94 */
												BgL_xz00_223 = CAR(BgL_cdrzd2296zd2_229);
												BgL_yz00_224 = CAR(BgL_cdrzd2300zd2_231);
												{	/* Expand/farith.scm 97 */
													bool_t BgL_test1438z00_726;

													if (REALP(BgL_xz00_223))
														{	/* Expand/farith.scm 97 */
															BgL_test1438z00_726 = REALP(BgL_yz00_224);
														}
													else
														{	/* Expand/farith.scm 97 */
															BgL_test1438z00_726 = ((bool_t) 0);
														}
													if (BgL_test1438z00_726)
														{	/* Expand/farith.scm 97 */
															return
																DOUBLE_TO_REAL(
																(REAL_TO_DOUBLE(BgL_xz00_223) -
																	REAL_TO_DOUBLE(BgL_yz00_224)));
														}
													else
														{	/* Expand/farith.scm 100 */
															obj_t BgL_arg1268z00_240;

															{	/* Expand/farith.scm 100 */
																obj_t BgL_arg1270z00_241;
																obj_t BgL_arg1271z00_242;

																BgL_arg1270z00_241 =
																	PROCEDURE_ENTRY(BgL_ez00_12) (BgL_ez00_12,
																	BgL_xz00_223, BgL_ez00_12, BEOA);
																{	/* Expand/farith.scm 100 */
																	obj_t BgL_arg1273z00_243;

																	BgL_arg1273z00_243 =
																		PROCEDURE_ENTRY(BgL_ez00_12) (BgL_ez00_12,
																		BgL_yz00_224, BgL_ez00_12, BEOA);
																	BgL_arg1271z00_242 =
																		MAKE_YOUNG_PAIR(BgL_arg1273z00_243, BNIL);
																}
																BgL_arg1268z00_240 =
																	MAKE_YOUNG_PAIR(BgL_arg1270z00_241,
																	BgL_arg1271z00_242);
															}
															return
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 10)),
																BgL_arg1268z00_240);
											}}}
										else
											{	/* Expand/farith.scm 94 */
											BgL_tagzd2289zd2_226:
												return
													BGl_errorz00zz__errorz00(BFALSE,
													BGl_string1364z00zzexpand_farithmetiquez00,
													BgL_xz00_11);
											}
									}
								else
									{	/* Expand/farith.scm 94 */
										goto BgL_tagzd2289zd2_226;
									}
							}
						else
							{	/* Expand/farith.scm 94 */
								goto BgL_tagzd2289zd2_226;
							}
					}
				else
					{	/* Expand/farith.scm 94 */
						goto BgL_tagzd2289zd2_226;
					}
			}
		}

	}



/* &expand--fl */
	obj_t BGl_z62expandzd2zd2flz62zzexpand_farithmetiquez00(obj_t BgL_envz00_433,
		obj_t BgL_xz00_434, obj_t BgL_ez00_435)
	{
		{	/* Expand/farith.scm 93 */
			return
				BGl_expandzd2zd2flz00zzexpand_farithmetiquez00(BgL_xz00_434,
				BgL_ez00_435);
		}

	}



/* expand-*fl */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2za2flz70zzexpand_farithmetiquez00(obj_t
		BgL_xz00_13, obj_t BgL_ez00_14)
	{
		{	/* Expand/farith.scm 107 */
			{
				obj_t BgL_xz00_245;
				obj_t BgL_yz00_246;

				if (PAIRP(BgL_xz00_13))
					{	/* Expand/farith.scm 108 */
						obj_t BgL_cdrzd2314zd2_251;

						BgL_cdrzd2314zd2_251 = CDR(BgL_xz00_13);
						if (PAIRP(BgL_cdrzd2314zd2_251))
							{	/* Expand/farith.scm 108 */
								obj_t BgL_cdrzd2318zd2_253;

								BgL_cdrzd2318zd2_253 = CDR(BgL_cdrzd2314zd2_251);
								if (PAIRP(BgL_cdrzd2318zd2_253))
									{	/* Expand/farith.scm 108 */
										if (NULLP(CDR(BgL_cdrzd2318zd2_253)))
											{	/* Expand/farith.scm 108 */
												BgL_xz00_245 = CAR(BgL_cdrzd2314zd2_251);
												BgL_yz00_246 = CAR(BgL_cdrzd2318zd2_253);
												{	/* Expand/farith.scm 111 */
													bool_t BgL_test1444z00_763;

													if (REALP(BgL_xz00_245))
														{	/* Expand/farith.scm 111 */
															BgL_test1444z00_763 = REALP(BgL_yz00_246);
														}
													else
														{	/* Expand/farith.scm 111 */
															BgL_test1444z00_763 = ((bool_t) 0);
														}
													if (BgL_test1444z00_763)
														{	/* Expand/farith.scm 111 */
															return
																DOUBLE_TO_REAL(
																(REAL_TO_DOUBLE(BgL_xz00_245) *
																	REAL_TO_DOUBLE(BgL_yz00_246)));
														}
													else
														{	/* Expand/farith.scm 114 */
															obj_t BgL_arg1285z00_262;

															{	/* Expand/farith.scm 114 */
																obj_t BgL_arg1286z00_263;
																obj_t BgL_arg1287z00_264;

																BgL_arg1286z00_263 =
																	PROCEDURE_ENTRY(BgL_ez00_14) (BgL_ez00_14,
																	BgL_xz00_245, BgL_ez00_14, BEOA);
																{	/* Expand/farith.scm 114 */
																	obj_t BgL_arg1288z00_265;

																	BgL_arg1288z00_265 =
																		PROCEDURE_ENTRY(BgL_ez00_14) (BgL_ez00_14,
																		BgL_yz00_246, BgL_ez00_14, BEOA);
																	BgL_arg1287z00_264 =
																		MAKE_YOUNG_PAIR(BgL_arg1288z00_265, BNIL);
																}
																BgL_arg1285z00_262 =
																	MAKE_YOUNG_PAIR(BgL_arg1286z00_263,
																	BgL_arg1287z00_264);
															}
															return
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 11)),
																BgL_arg1285z00_262);
											}}}
										else
											{	/* Expand/farith.scm 108 */
											BgL_tagzd2307zd2_248:
												return
													BGl_errorz00zz__errorz00(BFALSE,
													BGl_string1365z00zzexpand_farithmetiquez00,
													BgL_xz00_13);
											}
									}
								else
									{	/* Expand/farith.scm 108 */
										goto BgL_tagzd2307zd2_248;
									}
							}
						else
							{	/* Expand/farith.scm 108 */
								goto BgL_tagzd2307zd2_248;
							}
					}
				else
					{	/* Expand/farith.scm 108 */
						goto BgL_tagzd2307zd2_248;
					}
			}
		}

	}



/* &expand-*fl */
	obj_t BGl_z62expandzd2za2flz12zzexpand_farithmetiquez00(obj_t BgL_envz00_436,
		obj_t BgL_xz00_437, obj_t BgL_ez00_438)
	{
		{	/* Expand/farith.scm 107 */
			return
				BGl_expandzd2za2flz70zzexpand_farithmetiquez00(BgL_xz00_437,
				BgL_ez00_438);
		}

	}



/* expand-/fl */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2zf2flz20zzexpand_farithmetiquez00(obj_t
		BgL_xz00_15, obj_t BgL_ez00_16)
	{
		{	/* Expand/farith.scm 121 */
			{
				obj_t BgL_xz00_267;
				obj_t BgL_yz00_268;

				if (PAIRP(BgL_xz00_15))
					{	/* Expand/farith.scm 122 */
						obj_t BgL_cdrzd2332zd2_273;

						BgL_cdrzd2332zd2_273 = CDR(BgL_xz00_15);
						if (PAIRP(BgL_cdrzd2332zd2_273))
							{	/* Expand/farith.scm 122 */
								obj_t BgL_cdrzd2336zd2_275;

								BgL_cdrzd2336zd2_275 = CDR(BgL_cdrzd2332zd2_273);
								if (PAIRP(BgL_cdrzd2336zd2_275))
									{	/* Expand/farith.scm 122 */
										if (NULLP(CDR(BgL_cdrzd2336zd2_275)))
											{	/* Expand/farith.scm 122 */
												BgL_xz00_267 = CAR(BgL_cdrzd2332zd2_273);
												BgL_yz00_268 = CAR(BgL_cdrzd2336zd2_275);
												{	/* Expand/farith.scm 125 */
													bool_t BgL_test1450z00_800;

													if (REALP(BgL_xz00_267))
														{	/* Expand/farith.scm 125 */
															if (REALP(BgL_yz00_268))
																{	/* Expand/farith.scm 125 */
																	if (
																		(REAL_TO_DOUBLE(BgL_yz00_268) ==
																			((double) 0.0)))
																		{	/* Expand/farith.scm 125 */
																			BgL_test1450z00_800 = ((bool_t) 0);
																		}
																	else
																		{	/* Expand/farith.scm 125 */
																			BgL_test1450z00_800 = ((bool_t) 1);
																		}
																}
															else
																{	/* Expand/farith.scm 125 */
																	BgL_test1450z00_800 = ((bool_t) 0);
																}
														}
													else
														{	/* Expand/farith.scm 125 */
															BgL_test1450z00_800 = ((bool_t) 0);
														}
													if (BgL_test1450z00_800)
														{	/* Expand/farith.scm 125 */
															return
																DOUBLE_TO_REAL(
																(REAL_TO_DOUBLE(BgL_xz00_267) /
																	REAL_TO_DOUBLE(BgL_yz00_268)));
														}
													else
														{	/* Expand/farith.scm 128 */
															obj_t BgL_arg1303z00_286;

															{	/* Expand/farith.scm 128 */
																obj_t BgL_arg1304z00_287;
																obj_t BgL_arg1306z00_288;

																BgL_arg1304z00_287 =
																	PROCEDURE_ENTRY(BgL_ez00_16) (BgL_ez00_16,
																	BgL_xz00_267, BgL_ez00_16, BEOA);
																{	/* Expand/farith.scm 128 */
																	obj_t BgL_arg1307z00_289;

																	BgL_arg1307z00_289 =
																		PROCEDURE_ENTRY(BgL_ez00_16) (BgL_ez00_16,
																		BgL_yz00_268, BgL_ez00_16, BEOA);
																	BgL_arg1306z00_288 =
																		MAKE_YOUNG_PAIR(BgL_arg1307z00_289, BNIL);
																}
																BgL_arg1303z00_286 =
																	MAKE_YOUNG_PAIR(BgL_arg1304z00_287,
																	BgL_arg1306z00_288);
															}
															return
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 12)),
																BgL_arg1303z00_286);
											}}}
										else
											{	/* Expand/farith.scm 122 */
											BgL_tagzd2325zd2_270:
												return
													BGl_errorz00zz__errorz00(BFALSE,
													BGl_string1366z00zzexpand_farithmetiquez00,
													BgL_xz00_15);
											}
									}
								else
									{	/* Expand/farith.scm 122 */
										goto BgL_tagzd2325zd2_270;
									}
							}
						else
							{	/* Expand/farith.scm 122 */
								goto BgL_tagzd2325zd2_270;
							}
					}
				else
					{	/* Expand/farith.scm 122 */
						goto BgL_tagzd2325zd2_270;
					}
			}
		}

	}



/* &expand-/fl */
	obj_t BGl_z62expandzd2zf2flz42zzexpand_farithmetiquez00(obj_t BgL_envz00_439,
		obj_t BgL_xz00_440, obj_t BgL_ez00_441)
	{
		{	/* Expand/farith.scm 121 */
			return
				BGl_expandzd2zf2flz20zzexpand_farithmetiquez00(BgL_xz00_440,
				BgL_ez00_441);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzexpand_farithmetiquez00()
	{
		{	/* Expand/farith.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzexpand_farithmetiquez00()
	{
		{	/* Expand/farith.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzexpand_farithmetiquez00()
	{
		{	/* Expand/farith.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzexpand_farithmetiquez00()
	{
		{	/* Expand/farith.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1367z00zzexpand_farithmetiquez00));
			return
				BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string1367z00zzexpand_farithmetiquez00));
		}

	}

#ifdef __cplusplus
}
#endif
