/*===========================================================================*/
/*   (Read/include.scm)                                                      */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Read/include.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_IMPORT obj_t BGl_assocz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzread_includez00();
	static obj_t BGl_methodzd2initzd2zzread_includez00();
	static obj_t BGl_z62zc3z04anonymousza31058ze3ze5zzread_includez00(obj_t);
	static obj_t BGl_z62readzd2directiveszb0zzread_includez00(obj_t, obj_t);
	extern obj_t BGl_za2includezd2multipleza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzread_includez00();
	BGL_IMPORT obj_t BGl_za2loadzd2pathza2zd2zz__evalz00;
	BGL_IMPORT obj_t BGl_findzd2filezf2pathz20zz__osz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_exitdzd2popzd2protectz12z12zz__bexitz00(obj_t);
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_readzd2includezd2zzread_includez00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzread_includez00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zzread_includez00();
	static obj_t BGl_z62zc3z04anonymousza31043ze3ze5zzread_includez00(obj_t);
	static obj_t BGl_genericzd2initzd2zzread_includez00();
	BGL_IMPORT obj_t BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readerzd2resetz12zc0zz__readerz00();
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	static obj_t BGl_za2includezd2readza2zd2zzread_includez00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_readzd2directiveszd2zzread_includez00(obj_t);
	BGL_IMPORT obj_t bgl_close_input_port(obj_t);
	static obj_t BGl_z62readzd2includezb0zzread_includez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzread_includez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinit_mainz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_enginez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__evalz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	static obj_t BGl_cnstzd2initzd2zzread_includez00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzread_includez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzread_includez00();
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t __cnst[2];


	   
		 
		DEFINE_STRING(BGl_string1070z00zzread_includez00,
		BgL_bgl_string1070za700za7za7r1080za7, "      [reading include file ", 28);
	      DEFINE_STRING(BGl_string1071z00zzread_includez00,
		BgL_bgl_string1071za700za7za7r1081za7, "read-include", 12);
	      DEFINE_STRING(BGl_string1072z00zzread_includez00,
		BgL_bgl_string1072za700za7za7r1082za7, "Can't open such file", 20);
	      DEFINE_STRING(BGl_string1073z00zzread_includez00,
		BgL_bgl_string1073za700za7za7r1083za7, "Can't find include file", 23);
	      DEFINE_STRING(BGl_string1074z00zzread_includez00,
		BgL_bgl_string1074za700za7za7r1084za7,
		"      [reading directives include file ", 39);
	      DEFINE_STRING(BGl_string1075z00zzread_includez00,
		BgL_bgl_string1075za700za7za7r1085za7, "read_include", 12);
	      DEFINE_STRING(BGl_string1076z00zzread_includez00,
		BgL_bgl_string1076za700za7za7r1086za7, "read-directives directives ", 27);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_readzd2includezd2envz00zzread_includez00,
		BgL_bgl_za762readza7d2includ1087z00,
		BGl_z62readzd2includezb0zzread_includez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_readzd2directiveszd2envz00zzread_includez00,
		BgL_bgl_za762readza7d2direct1088z00,
		BGl_z62readzd2directiveszb0zzread_includez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1069z00zzread_includez00,
		BgL_bgl_string1069za700za7za7r1089za7, "]", 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzread_includez00));
		     ADD_ROOT((void *) (&BGl_za2includezd2readza2zd2zzread_includez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzread_includez00(long
		BgL_checksumz00_125, char *BgL_fromz00_126)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzread_includez00))
				{
					BGl_requirezd2initializa7ationz75zzread_includez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzread_includez00();
					BGl_libraryzd2moduleszd2initz00zzread_includez00();
					BGl_cnstzd2initzd2zzread_includez00();
					BGl_importedzd2moduleszd2initz00zzread_includez00();
					return BGl_toplevelzd2initzd2zzread_includez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzread_includez00()
	{
		{	/* Read/include.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"read_include");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"read_include");
			BGl_modulezd2initializa7ationz75zz__evalz00(((long) 0), "read_include");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "read_include");
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 0), "read_include");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "read_include");
			BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(((long) 0),
				"read_include");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"read_include");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzread_includez00()
	{
		{	/* Read/include.scm 15 */
			{	/* Read/include.scm 15 */
				obj_t BgL_cportz00_112;

				{	/* Read/include.scm 15 */
					obj_t BgL_stringz00_120;

					BgL_stringz00_120 = BGl_string1076z00zzread_includez00;
					{	/* Read/include.scm 15 */
						obj_t BgL_startz00_121;

						BgL_startz00_121 = BINT(((long) 0));
						{	/* Read/include.scm 15 */
							obj_t BgL_endz00_122;

							BgL_endz00_122 = BINT(STRING_LENGTH(((obj_t) BgL_stringz00_120)));
							{	/* Read/include.scm 15 */

								BgL_cportz00_112 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_120, BgL_startz00_121, BgL_endz00_122);
				}}}}
				{
					long BgL_iz00_113;

					BgL_iz00_113 = ((long) 1);
				BgL_loopz00_114:
					if ((BgL_iz00_113 == ((long) -1)))
						{	/* Read/include.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Read/include.scm 15 */
							{	/* Read/include.scm 15 */
								obj_t BgL_arg1078z00_116;

								{	/* Read/include.scm 15 */

									{	/* Read/include.scm 15 */
										obj_t BgL_locationz00_118;

										BgL_locationz00_118 = BBOOL(((bool_t) 0));
										{	/* Read/include.scm 15 */

											BgL_arg1078z00_116 =
												BGl_readz00zz__readerz00(BgL_cportz00_112,
												BgL_locationz00_118);
										}
									}
								}
								{	/* Read/include.scm 15 */
									int BgL_tmpz00_152;

									BgL_tmpz00_152 = (int) (BgL_iz00_113);
									CNST_TABLE_SET(BgL_tmpz00_152, BgL_arg1078z00_116);
							}}
							{	/* Read/include.scm 15 */
								int BgL_auxz00_119;

								BgL_auxz00_119 = (int) ((BgL_iz00_113 - ((long) 1)));
								{
									long BgL_iz00_157;

									BgL_iz00_157 = (long) (BgL_auxz00_119);
									BgL_iz00_113 = BgL_iz00_157;
									goto BgL_loopz00_114;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzread_includez00()
	{
		{	/* Read/include.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzread_includez00()
	{
		{	/* Read/include.scm 15 */
			return (BGl_za2includezd2readza2zd2zzread_includez00 = BNIL, BUNSPEC);
		}

	}



/* read-include */
	BGL_EXPORTED_DEF obj_t BGl_readzd2includezd2zzread_includez00(obj_t
		BgL_filez00_3)
	{
		{	/* Read/include.scm 27 */
			{	/* Read/include.scm 28 */
				obj_t BgL_cellz00_16;

				BgL_cellz00_16 =
					BGl_assocz00zz__r4_pairs_and_lists_6_3z00(BgL_filez00_3,
					BGl_za2includezd2readza2zd2zzread_includez00);
				if (PAIRP(BgL_cellz00_16))
					{	/* Read/include.scm 29 */
						if (CBOOL(BGl_za2includezd2multipleza2zd2zzengine_paramz00))
							{	/* Read/include.scm 61 */
								return CDR(BgL_cellz00_16);
							}
						else
							{	/* Read/include.scm 61 */
								return MAKE_YOUNG_PAIR(BNIL, BNIL);
							}
					}
				else
					{	/* Read/include.scm 31 */
						obj_t BgL_fnamez00_18;

						BgL_fnamez00_18 =
							BGl_findzd2filezf2pathz20zz__osz00(BgL_filez00_3,
							BGl_za2loadzd2pathza2zd2zz__evalz00);
						{	/* Read/include.scm 32 */
							obj_t BgL_arg1026z00_19;

							if (CBOOL(BgL_fnamez00_18))
								{	/* Read/include.scm 32 */
									BgL_arg1026z00_19 = BgL_fnamez00_18;
								}
							else
								{	/* Read/include.scm 32 */
									BgL_arg1026z00_19 = BgL_filez00_3;
								}
							{	/* Read/include.scm 32 */
								obj_t BgL_list1027z00_20;

								{	/* Read/include.scm 32 */
									obj_t BgL_arg1028z00_21;

									{	/* Read/include.scm 32 */
										obj_t BgL_arg1029z00_22;

										{	/* Read/include.scm 32 */
											obj_t BgL_arg1030z00_23;

											BgL_arg1030z00_23 =
												MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
											BgL_arg1029z00_22 =
												MAKE_YOUNG_PAIR(BGl_string1069z00zzread_includez00,
												BgL_arg1030z00_23);
										}
										BgL_arg1028z00_21 =
											MAKE_YOUNG_PAIR(BgL_arg1026z00_19, BgL_arg1029z00_22);
									}
									BgL_list1027z00_20 =
										MAKE_YOUNG_PAIR(BGl_string1070z00zzread_includez00,
										BgL_arg1028z00_21);
								}
								BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
									BgL_list1027z00_20);
						}}
						BGl_readerzd2resetz12zc0zz__readerz00();
						if (STRINGP(BgL_fnamez00_18))
							{	/* Read/include.scm 37 */
								obj_t BgL_portz00_26;

								{	/* Read/include.scm 37 */

									BgL_portz00_26 =
										BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
										(BgL_fnamez00_18, BTRUE, BINT(((long) 5000000)));
								}
								if (INPUT_PORTP(BgL_portz00_26))
									{	/* Read/include.scm 42 */
										obj_t BgL_exitd1013z00_28;

										BgL_exitd1013z00_28 = BGL_EXITD_TOP_AS_OBJ();
										{	/* Read/include.scm 60 */
											obj_t BgL_zc3z04anonymousza31043ze3z87_102;

											BgL_zc3z04anonymousza31043ze3z87_102 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31043ze3ze5zzread_includez00,
												(int) (((long) 0)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31043ze3z87_102,
												(int) (((long) 0)), BgL_portz00_26);
											BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
												(BgL_exitd1013z00_28,
												BgL_zc3z04anonymousza31043ze3z87_102);
											{	/* Read/include.scm 43 */
												obj_t BgL_tmp1015z00_30;

												{	/* Read/include.scm 43 */
													obj_t BgL_firstz00_31;

													BgL_firstz00_31 =
														BGl_readz00zz__readerz00(BgL_portz00_26, BTRUE);
													{	/* Read/include.scm 43 */
														obj_t BgL_direcz00_32;

														{	/* Read/include.scm 44 */
															bool_t BgL_test1097z00_192;

															if (PAIRP(BgL_firstz00_31))
																{	/* Read/include.scm 44 */
																	BgL_test1097z00_192 =
																		(CAR(BgL_firstz00_31) ==
																		CNST_TABLE_REF(((long) 0)));
																}
															else
																{	/* Read/include.scm 44 */
																	BgL_test1097z00_192 = ((bool_t) 0);
																}
															if (BgL_test1097z00_192)
																{	/* Read/include.scm 44 */
																	BgL_direcz00_32 = BgL_firstz00_31;
																}
															else
																{	/* Read/include.scm 44 */
																	BgL_direcz00_32 = BNIL;
																}
														}
														{	/* Read/include.scm 44 */

															{	/* Read/include.scm 49 */
																obj_t BgL_g1016z00_33;

																if (NULLP(BgL_direcz00_32))
																	{	/* Read/include.scm 49 */
																		BgL_g1016z00_33 = BgL_firstz00_31;
																	}
																else
																	{	/* Read/include.scm 49 */
																		BgL_g1016z00_33 =
																			BGl_readz00zz__readerz00(BgL_portz00_26,
																			BTRUE);
																	}
																{
																	obj_t BgL_auxz00_36;
																	obj_t BgL_sexpz00_37;

																	BgL_auxz00_36 = BgL_g1016z00_33;
																	BgL_sexpz00_37 = BNIL;
																BgL_zc3z04anonymousza31033ze3z87_38:
																	{	/* Read/include.scm 53 */
																		bool_t BgL_test1100z00_201;

																		{	/* Read/include.scm 53 */
																			bool_t BgL_res1066z00_92;

																			BgL_res1066z00_92 =
																				EOF_OBJECTP(BgL_auxz00_36);
																			BgL_test1100z00_201 = BgL_res1066z00_92;
																		}
																		if (BgL_test1100z00_201)
																			{	/* Read/include.scm 54 */
																				obj_t BgL_rz00_40;

																				BgL_rz00_40 =
																					MAKE_YOUNG_PAIR(BgL_direcz00_32,
																					bgl_reverse_bang(BgL_sexpz00_37));
																				{	/* Read/include.scm 95 */
																					obj_t BgL_arg1061z00_93;

																					BgL_arg1061z00_93 =
																						MAKE_YOUNG_PAIR(BgL_filez00_3,
																						BgL_rz00_40);
																					BGl_za2includezd2readza2zd2zzread_includez00
																						=
																						MAKE_YOUNG_PAIR(BgL_arg1061z00_93,
																						BGl_za2includezd2readza2zd2zzread_includez00);
																				}
																				BgL_tmp1015z00_30 = BgL_rz00_40;
																			}
																		else
																			{	/* Read/include.scm 58 */
																				obj_t BgL_arg1036z00_42;
																				obj_t BgL_arg1037z00_43;

																				BgL_arg1036z00_42 =
																					BGl_readz00zz__readerz00
																					(BgL_portz00_26, BTRUE);
																				BgL_arg1037z00_43 =
																					MAKE_YOUNG_PAIR(BgL_auxz00_36,
																					BgL_sexpz00_37);
																				{
																					obj_t BgL_sexpz00_210;
																					obj_t BgL_auxz00_209;

																					BgL_auxz00_209 = BgL_arg1036z00_42;
																					BgL_sexpz00_210 = BgL_arg1037z00_43;
																					BgL_sexpz00_37 = BgL_sexpz00_210;
																					BgL_auxz00_36 = BgL_auxz00_209;
																					goto
																						BgL_zc3z04anonymousza31033ze3z87_38;
																				}
																			}
																	}
																}
															}
														}
													}
												}
												BGl_exitdzd2popzd2protectz12z12zz__bexitz00
													(BgL_exitd1013z00_28);
												bgl_close_input_port(BgL_portz00_26);
												return BgL_tmp1015z00_30;
											}
										}
									}
								else
									{	/* Read/include.scm 38 */
										return
											BGl_userzd2errorzd2zztools_errorz00
											(BGl_string1071z00zzread_includez00,
											BGl_string1072z00zzread_includez00, BgL_filez00_3, BNIL);
									}
							}
						else
							{	/* Read/include.scm 35 */
								return
									BGl_userzd2errorzd2zztools_errorz00
									(BGl_string1071z00zzread_includez00,
									BGl_string1073z00zzread_includez00, BgL_filez00_3, BNIL);
							}
					}
			}
		}

	}



/* &read-include */
	obj_t BGl_z62readzd2includezb0zzread_includez00(obj_t BgL_envz00_103,
		obj_t BgL_filez00_104)
	{
		{	/* Read/include.scm 27 */
			return BGl_readzd2includezd2zzread_includez00(BgL_filez00_104);
		}

	}



/* &<@anonymous:1043> */
	obj_t BGl_z62zc3z04anonymousza31043ze3ze5zzread_includez00(obj_t
		BgL_envz00_105)
	{
		{	/* Read/include.scm 42 */
			{	/* Read/include.scm 60 */
				obj_t BgL_portz00_106;

				BgL_portz00_106 = PROCEDURE_REF(BgL_envz00_105, (int) (((long) 0)));
				return bgl_close_input_port(((obj_t) BgL_portz00_106));
			}
		}

	}



/* read-directives */
	BGL_EXPORTED_DEF obj_t BGl_readzd2directiveszd2zzread_includez00(obj_t
		BgL_filez00_4)
	{
		{	/* Read/include.scm 68 */
			{	/* Read/include.scm 69 */
				obj_t BgL_fnamez00_58;

				BgL_fnamez00_58 =
					BGl_findzd2filezf2pathz20zz__osz00(BgL_filez00_4,
					BGl_za2loadzd2pathza2zd2zz__evalz00);
				{	/* Read/include.scm 70 */
					obj_t BgL_arg1047z00_59;

					if (CBOOL(BgL_fnamez00_58))
						{	/* Read/include.scm 70 */
							BgL_arg1047z00_59 = BgL_fnamez00_58;
						}
					else
						{	/* Read/include.scm 70 */
							BgL_arg1047z00_59 = BgL_filez00_4;
						}
					{	/* Read/include.scm 70 */
						obj_t BgL_list1048z00_60;

						{	/* Read/include.scm 70 */
							obj_t BgL_arg1049z00_61;

							{	/* Read/include.scm 70 */
								obj_t BgL_arg1050z00_62;

								{	/* Read/include.scm 70 */
									obj_t BgL_arg1051z00_63;

									BgL_arg1051z00_63 =
										MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
									BgL_arg1050z00_62 =
										MAKE_YOUNG_PAIR(BGl_string1069z00zzread_includez00,
										BgL_arg1051z00_63);
								}
								BgL_arg1049z00_61 =
									MAKE_YOUNG_PAIR(BgL_arg1047z00_59, BgL_arg1050z00_62);
							}
							BgL_list1048z00_60 =
								MAKE_YOUNG_PAIR(BGl_string1074z00zzread_includez00,
								BgL_arg1049z00_61);
						}
						BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
							BgL_list1048z00_60);
				}}
				BGl_readerzd2resetz12zc0zz__readerz00();
				if (STRINGP(BgL_fnamez00_58))
					{	/* Read/include.scm 75 */
						obj_t BgL_portz00_66;

						{	/* Read/include.scm 75 */

							BgL_portz00_66 =
								BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
								(BgL_fnamez00_58, BTRUE, BINT(((long) 5000000)));
						}
						if (INPUT_PORTP(BgL_portz00_66))
							{	/* Read/include.scm 78 */
								obj_t BgL_exitd1019z00_68;

								BgL_exitd1019z00_68 = BGL_EXITD_TOP_AS_OBJ();
								{	/* Read/include.scm 83 */
									obj_t BgL_zc3z04anonymousza31058ze3z87_107;

									BgL_zc3z04anonymousza31058ze3z87_107 =
										MAKE_FX_PROCEDURE
										(BGl_z62zc3z04anonymousza31058ze3ze5zzread_includez00,
										(int) (((long) 0)), (int) (((long) 1)));
									PROCEDURE_SET(BgL_zc3z04anonymousza31058ze3z87_107,
										(int) (((long) 0)), BgL_portz00_66);
									BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
										(BgL_exitd1019z00_68, BgL_zc3z04anonymousza31058ze3z87_107);
									{	/* Read/include.scm 79 */
										obj_t BgL_tmp1021z00_70;

										{	/* Read/include.scm 79 */
											obj_t BgL_firstz00_71;

											BgL_firstz00_71 =
												BGl_readz00zz__readerz00(BgL_portz00_66, BTRUE);
											{	/* Read/include.scm 80 */
												bool_t BgL_test1104z00_245;

												if (PAIRP(BgL_firstz00_71))
													{	/* Read/include.scm 80 */
														BgL_test1104z00_245 =
															(CAR(BgL_firstz00_71) ==
															CNST_TABLE_REF(((long) 0)));
													}
												else
													{	/* Read/include.scm 80 */
														BgL_test1104z00_245 = ((bool_t) 0);
													}
												if (BgL_test1104z00_245)
													{	/* Read/include.scm 80 */
														BgL_tmp1021z00_70 = CDR(BgL_firstz00_71);
													}
												else
													{	/* Read/include.scm 80 */
														BgL_tmp1021z00_70 = BNIL;
													}
											}
										}
										BGl_exitdzd2popzd2protectz12z12zz__bexitz00
											(BgL_exitd1019z00_68);
										bgl_close_input_port(BgL_portz00_66);
										return BgL_tmp1021z00_70;
									}
								}
							}
						else
							{	/* Read/include.scm 76 */
								return
									BGl_userzd2errorzd2zztools_errorz00(CNST_TABLE_REF(((long)
											1)), BGl_string1072z00zzread_includez00, BgL_filez00_4,
									BNIL);
					}}
				else
					{	/* Read/include.scm 73 */
						return
							BGl_userzd2errorzd2zztools_errorz00(CNST_TABLE_REF(((long) 1)),
							BGl_string1073z00zzread_includez00, BgL_filez00_4, BNIL);
		}}}

	}



/* &read-directives */
	obj_t BGl_z62readzd2directiveszb0zzread_includez00(obj_t BgL_envz00_108,
		obj_t BgL_filez00_109)
	{
		{	/* Read/include.scm 68 */
			return BGl_readzd2directiveszd2zzread_includez00(BgL_filez00_109);
		}

	}



/* &<@anonymous:1058> */
	obj_t BGl_z62zc3z04anonymousza31058ze3ze5zzread_includez00(obj_t
		BgL_envz00_110)
	{
		{	/* Read/include.scm 78 */
			{	/* Read/include.scm 83 */
				obj_t BgL_portz00_111;

				BgL_portz00_111 = PROCEDURE_REF(BgL_envz00_110, (int) (((long) 0)));
				return bgl_close_input_port(((obj_t) BgL_portz00_111));
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzread_includez00()
	{
		{	/* Read/include.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzread_includez00()
	{
		{	/* Read/include.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzread_includez00()
	{
		{	/* Read/include.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzread_includez00()
	{
		{	/* Read/include.scm 15 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1075z00zzread_includez00));
			BGl_modulezd2initializa7ationz75zzengine_enginez00(((long) 373986149),
				BSTRING_TO_STRING(BGl_string1075z00zzread_includez00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1075z00zzread_includez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1075z00zzread_includez00));
			return
				BGl_modulezd2initializa7ationz75zzinit_mainz00(((long) 288050961),
				BSTRING_TO_STRING(BGl_string1075z00zzread_includez00));
		}

	}

#ifdef __cplusplus
}
#endif
