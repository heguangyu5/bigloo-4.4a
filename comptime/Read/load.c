/*===========================================================================*/
/*   (Read/load.scm)                                                         */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Read/load.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_IMPORT obj_t BGl_defaultzd2environmentzd2zz__evalz00();
	static obj_t BGl_objectzd2initzd2zzread_loadz00();
	static obj_t BGl_methodzd2initzd2zzread_loadz00();
	BGL_IMPORT obj_t BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzread_loadz00();
	BGL_IMPORT obj_t BGl_za2loadzd2pathza2zd2zz__evalz00;
	BGL_IMPORT obj_t BGl_findzd2filezf2pathz20zz__osz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_exitdzd2popzd2protectz12z12zz__bexitz00(obj_t);
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzread_loadz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzread_loadz00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readerzd2resetz12zc0zz__readerz00();
	static obj_t BGl_z62zc3z04anonymousza31117ze3ze5zzread_loadz00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t bgl_close_input_port(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_loadzd2modulezd2zzread_loadz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzread_loadz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__evalz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t BGl_loadqz00zz__evalz00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzread_loadz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzread_loadz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzread_loadz00();
	static obj_t BGl_z62loadzd2modulezb0zzread_loadz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t __cnst[1];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_loadzd2modulezd2envz00zzread_loadz00,
		BgL_bgl_za762loadza7d2module1147z00, BGl_z62loadzd2modulezb0zzread_loadz00,
		0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1130z00zzread_loadz00,
		BgL_bgl_string1130za700za7za7r1148za7, "]", 1);
	      DEFINE_STRING(BGl_string1131z00zzread_loadz00,
		BgL_bgl_string1131za700za7za7r1149za7, "      [reading loaded module ", 29);
	      DEFINE_STRING(BGl_string1132z00zzread_loadz00,
		BgL_bgl_string1132za700za7za7r1150za7, " vs ", 4);
	      DEFINE_STRING(BGl_string1133z00zzread_loadz00,
		BgL_bgl_string1133za700za7za7r1151za7, "conflict in module's name: ", 27);
	      DEFINE_STRING(BGl_string1134z00zzread_loadz00,
		BgL_bgl_string1134za700za7za7r1152za7, "load-module", 11);
	      DEFINE_STRING(BGl_string1135z00zzread_loadz00,
		BgL_bgl_string1135za700za7za7r1153za7, "Illegal module declaration", 26);
	      DEFINE_STRING(BGl_string1136z00zzread_loadz00,
		BgL_bgl_string1136za700za7za7r1154za7, "Can't open such file", 20);
	      DEFINE_STRING(BGl_string1137z00zzread_loadz00,
		BgL_bgl_string1137za700za7za7r1155za7, "Can't find file", 15);
	      DEFINE_STRING(BGl_string1138z00zzread_loadz00,
		BgL_bgl_string1138za700za7za7r1156za7, "read_load", 9);
	      DEFINE_STRING(BGl_string1139z00zzread_loadz00,
		BgL_bgl_string1139za700za7za7r1157za7, "module ", 7);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzread_loadz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzread_loadz00(long
		BgL_checksumz00_166, char *BgL_fromz00_167)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzread_loadz00))
				{
					BGl_requirezd2initializa7ationz75zzread_loadz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzread_loadz00();
					BGl_libraryzd2moduleszd2initz00zzread_loadz00();
					BGl_cnstzd2initzd2zzread_loadz00();
					BGl_importedzd2moduleszd2initz00zzread_loadz00();
					return BGl_methodzd2initzd2zzread_loadz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzread_loadz00()
	{
		{	/* Read/load.scm 15 */
			BGl_modulezd2initializa7ationz75zz__evalz00(((long) 0), "read_load");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"read_load");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "read_load");
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 0), "read_load");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"read_load");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "read_load");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"read_load");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"read_load");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzread_loadz00()
	{
		{	/* Read/load.scm 15 */
			{	/* Read/load.scm 15 */
				obj_t BgL_cportz00_153;

				{	/* Read/load.scm 15 */
					obj_t BgL_stringz00_161;

					BgL_stringz00_161 = BGl_string1139z00zzread_loadz00;
					{	/* Read/load.scm 15 */
						obj_t BgL_startz00_162;

						BgL_startz00_162 = BINT(((long) 0));
						{	/* Read/load.scm 15 */
							obj_t BgL_endz00_163;

							BgL_endz00_163 = BINT(STRING_LENGTH(((obj_t) BgL_stringz00_161)));
							{	/* Read/load.scm 15 */

								BgL_cportz00_153 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_161, BgL_startz00_162, BgL_endz00_163);
				}}}}
				{
					long BgL_iz00_154;

					BgL_iz00_154 = ((long) 0);
				BgL_loopz00_155:
					if ((BgL_iz00_154 == ((long) -1)))
						{	/* Read/load.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Read/load.scm 15 */
							{	/* Read/load.scm 15 */
								obj_t BgL_arg1145z00_157;

								{	/* Read/load.scm 15 */

									{	/* Read/load.scm 15 */
										obj_t BgL_locationz00_159;

										BgL_locationz00_159 = BBOOL(((bool_t) 0));
										{	/* Read/load.scm 15 */

											BgL_arg1145z00_157 =
												BGl_readz00zz__readerz00(BgL_cportz00_153,
												BgL_locationz00_159);
										}
									}
								}
								{	/* Read/load.scm 15 */
									int BgL_tmpz00_193;

									BgL_tmpz00_193 = (int) (BgL_iz00_154);
									CNST_TABLE_SET(BgL_tmpz00_193, BgL_arg1145z00_157);
							}}
							{	/* Read/load.scm 15 */
								int BgL_auxz00_160;

								BgL_auxz00_160 = (int) ((BgL_iz00_154 - ((long) 1)));
								{
									long BgL_iz00_198;

									BgL_iz00_198 = (long) (BgL_auxz00_160);
									BgL_iz00_154 = BgL_iz00_198;
									goto BgL_loopz00_155;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzread_loadz00()
	{
		{	/* Read/load.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* load-module */
	BGL_EXPORTED_DEF obj_t BGl_loadzd2modulezd2zzread_loadz00(obj_t
		BgL_modulez00_3, obj_t BgL_fnamesz00_4)
	{
		{	/* Read/load.scm 26 */
			{	/* Read/load.scm 27 */
				obj_t BgL_list1061z00_72;

				{	/* Read/load.scm 27 */
					obj_t BgL_arg1062z00_73;

					{	/* Read/load.scm 27 */
						obj_t BgL_arg1063z00_74;

						{	/* Read/load.scm 27 */
							obj_t BgL_arg1064z00_75;

							BgL_arg1064z00_75 =
								MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
							BgL_arg1063z00_74 =
								MAKE_YOUNG_PAIR(BGl_string1130z00zzread_loadz00,
								BgL_arg1064z00_75);
						}
						BgL_arg1062z00_73 =
							MAKE_YOUNG_PAIR(BgL_modulez00_3, BgL_arg1063z00_74);
					}
					BgL_list1061z00_72 =
						MAKE_YOUNG_PAIR(BGl_string1131z00zzread_loadz00, BgL_arg1062z00_73);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list1061z00_72);
			}
			{	/* Read/load.scm 28 */
				obj_t BgL_filez00_76;

				BgL_filez00_76 = CAR(BgL_fnamesz00_4);
				{	/* Read/load.scm 28 */
					obj_t BgL_fnamez00_77;

					BgL_fnamez00_77 =
						BGl_findzd2filezf2pathz20zz__osz00(BgL_filez00_76,
						BGl_za2loadzd2pathza2zd2zz__evalz00);
					{	/* Read/load.scm 29 */

						if (STRINGP(BgL_fnamez00_77))
							{	/* Read/load.scm 32 */
								obj_t BgL_portz00_79;

								{	/* Read/load.scm 32 */

									BgL_portz00_79 =
										BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
										(BgL_fnamez00_77, BTRUE, BINT(((long) 5000000)));
								}
								BGl_readerzd2resetz12zc0zz__readerz00();
								if (INPUT_PORTP(BgL_portz00_79))
									{	/* Read/load.scm 36 */
										obj_t BgL_exitd1051z00_81;

										BgL_exitd1051z00_81 = BGL_EXITD_TOP_AS_OBJ();
										{	/* Read/load.scm 52 */
											obj_t BgL_zc3z04anonymousza31117ze3z87_147;

											BgL_zc3z04anonymousza31117ze3z87_147 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31117ze3ze5zzread_loadz00,
												(int) (((long) 0)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31117ze3z87_147,
												(int) (((long) 0)), BgL_portz00_79);
											BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
												(BgL_exitd1051z00_81,
												BgL_zc3z04anonymousza31117ze3z87_147);
											{	/* Read/load.scm 36 */
												obj_t BgL_tmp1053z00_83;

												{	/* Read/load.scm 36 */
													obj_t BgL_declz00_84;

													{	/* Read/load.scm 36 */

														{	/* Read/load.scm 36 */

															BgL_declz00_84 =
																BGl_readz00zz__readerz00(BgL_portz00_79,
																BFALSE);
													}}
													{	/* Read/load.scm 37 */
														bool_t BgL_test1162z00_225;

														if (PAIRP(BgL_declz00_84))
															{	/* Read/load.scm 37 */
																BgL_test1162z00_225 =
																	(CAR(BgL_declz00_84) ==
																	CNST_TABLE_REF(((long) 0)));
															}
														else
															{	/* Read/load.scm 37 */
																BgL_test1162z00_225 = ((bool_t) 0);
															}
														if (BgL_test1162z00_225)
															{	/* Read/load.scm 37 */
																if (
																	(CAR(CDR(BgL_declz00_84)) == BgL_modulez00_3))
																	{	/* Read/load.scm 44 */
																		BgL_tmp1053z00_83 = BFALSE;
																	}
																else
																	{	/* Read/load.scm 49 */
																		obj_t BgL_arg1095z00_90;

																		{	/* Read/load.scm 49 */
																			obj_t BgL_arg1099z00_92;
																			obj_t BgL_arg1100z00_93;

																			{	/* Read/load.scm 49 */
																				obj_t BgL_res1127z00_135;

																				{	/* Read/load.scm 49 */
																					obj_t BgL_arg1466z00_134;

																					BgL_arg1466z00_134 =
																						SYMBOL_TO_STRING(BgL_modulez00_3);
																					BgL_res1127z00_135 =
																						BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																						(BgL_arg1466z00_134);
																				}
																				BgL_arg1099z00_92 = BgL_res1127z00_135;
																			}
																			{	/* Read/load.scm 50 */
																				obj_t BgL_arg1113z00_98;

																				BgL_arg1113z00_98 =
																					CAR(CDR(BgL_declz00_84));
																				{	/* Read/load.scm 50 */
																					obj_t BgL_res1128z00_142;

																					{	/* Read/load.scm 50 */
																						obj_t BgL_arg1466z00_141;

																						BgL_arg1466z00_141 =
																							SYMBOL_TO_STRING(
																							((obj_t) BgL_arg1113z00_98));
																						BgL_res1128z00_142 =
																							BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																							(BgL_arg1466z00_141);
																					}
																					BgL_arg1100z00_93 =
																						BgL_res1128z00_142;
																				}
																			}
																			{	/* Read/load.scm 47 */
																				obj_t BgL_list1101z00_94;

																				{	/* Read/load.scm 47 */
																					obj_t BgL_arg1103z00_95;

																					{	/* Read/load.scm 47 */
																						obj_t BgL_arg1109z00_96;

																						{	/* Read/load.scm 47 */
																							obj_t BgL_arg1110z00_97;

																							BgL_arg1110z00_97 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1100z00_93, BNIL);
																							BgL_arg1109z00_96 =
																								MAKE_YOUNG_PAIR
																								(BGl_string1132z00zzread_loadz00,
																								BgL_arg1110z00_97);
																						}
																						BgL_arg1103z00_95 =
																							MAKE_YOUNG_PAIR(BgL_arg1099z00_92,
																							BgL_arg1109z00_96);
																					}
																					BgL_list1101z00_94 =
																						MAKE_YOUNG_PAIR
																						(BGl_string1133z00zzread_loadz00,
																						BgL_arg1103z00_95);
																				}
																				BgL_arg1095z00_90 =
																					BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																					(BgL_list1101z00_94);
																			}
																		}
																		BgL_tmp1053z00_83 =
																			BGl_userzd2errorzd2zztools_errorz00
																			(BGl_string1134z00zzread_loadz00,
																			BgL_arg1095z00_90, BgL_declz00_84, BNIL);
																	}
															}
														else
															{	/* Read/load.scm 37 */
																BgL_tmp1053z00_83 =
																	BGl_userzd2errorzd2zztools_errorz00
																	(BGl_string1134z00zzread_loadz00,
																	BGl_string1135z00zzread_loadz00,
																	BgL_declz00_84, BNIL);
															}
													}
												}
												BGl_exitdzd2popzd2protectz12z12zz__bexitz00
													(BgL_exitd1051z00_81);
												bgl_close_input_port(BgL_portz00_79);
												BgL_tmp1053z00_83;
											}
										}
									}
								else
									{	/* Read/load.scm 34 */
										BGl_userzd2errorzd2zztools_errorz00
											(BGl_string1134z00zzread_loadz00,
											BGl_string1136z00zzread_loadz00, BgL_filez00_76, BNIL);
									}
							}
						else
							{	/* Read/load.scm 30 */
								BGl_userzd2errorzd2zztools_errorz00
									(BGl_string1134z00zzread_loadz00,
									BGl_string1137z00zzread_loadz00, BgL_filez00_76, BNIL);
							}
					}
				}
			}
			{
				obj_t BgL_l1056z00_113;

				{	/* Read/load.scm 53 */
					bool_t BgL_tmpz00_253;

					BgL_l1056z00_113 = BgL_fnamesz00_4;
				BgL_zc3z04anonymousza31120ze3z87_114:
					if (PAIRP(BgL_l1056z00_113))
						{	/* Read/load.scm 53 */
							{	/* Read/load.scm 53 */
								obj_t BgL_arg1122z00_116;

								BgL_arg1122z00_116 = CAR(BgL_l1056z00_113);
								{	/* Read/load.scm 53 */
									obj_t BgL_envz00_118;

									BgL_envz00_118 = BGl_defaultzd2environmentzd2zz__evalz00();
									{	/* Read/load.scm 53 */

										BGl_loadqz00zz__evalz00(BgL_arg1122z00_116, BgL_envz00_118);
									}
								}
							}
							{
								obj_t BgL_l1056z00_259;

								BgL_l1056z00_259 = CDR(BgL_l1056z00_113);
								BgL_l1056z00_113 = BgL_l1056z00_259;
								goto BgL_zc3z04anonymousza31120ze3z87_114;
							}
						}
					else
						{	/* Read/load.scm 53 */
							BgL_tmpz00_253 = ((bool_t) 1);
						}
					return BBOOL(BgL_tmpz00_253);
				}
			}
		}

	}



/* &load-module */
	obj_t BGl_z62loadzd2modulezb0zzread_loadz00(obj_t BgL_envz00_148,
		obj_t BgL_modulez00_149, obj_t BgL_fnamesz00_150)
	{
		{	/* Read/load.scm 26 */
			return
				BGl_loadzd2modulezd2zzread_loadz00(BgL_modulez00_149,
				BgL_fnamesz00_150);
		}

	}



/* &<@anonymous:1117> */
	obj_t BGl_z62zc3z04anonymousza31117ze3ze5zzread_loadz00(obj_t BgL_envz00_151)
	{
		{	/* Read/load.scm 36 */
			{	/* Read/load.scm 52 */
				obj_t BgL_portz00_152;

				BgL_portz00_152 = PROCEDURE_REF(BgL_envz00_151, (int) (((long) 0)));
				return bgl_close_input_port(((obj_t) BgL_portz00_152));
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzread_loadz00()
	{
		{	/* Read/load.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzread_loadz00()
	{
		{	/* Read/load.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzread_loadz00()
	{
		{	/* Read/load.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzread_loadz00()
	{
		{	/* Read/load.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1138z00zzread_loadz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1138z00zzread_loadz00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1138z00zzread_loadz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1138z00zzread_loadz00));
			return
				BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string1138z00zzread_loadz00));
		}

	}

#ifdef __cplusplus
}
#endif
