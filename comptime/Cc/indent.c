/*===========================================================================*/
/*   (Cc/indent.scm)                                                         */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cc/indent.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_EXPORTED_DECL obj_t BGl_indentz00zzcc_indentz00(obj_t);
	BGL_IMPORT obj_t BGl_warningz00zz__errorz00(obj_t);
	static obj_t BGl_objectzd2initzd2zzcc_indentz00();
	static obj_t BGl_methodzd2initzd2zzcc_indentz00();
	BGL_IMPORT bool_t fexists(char *);
	static obj_t BGl_gczd2rootszd2initz00zzcc_indentz00();
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcc_indentz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_systemz00zz__osz00(obj_t);
	static obj_t BGl_genericzd2initzd2zzcc_indentz00();
	BGL_IMPORT obj_t BGl_basenamez00zz__osz00(obj_t);
	static obj_t BGl_z62indentz62zzcc_indentz00(obj_t, obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcc_indentz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzcc_indentz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzcc_indentz00();
	extern obj_t BGl_za2indentza2z00zzengine_paramz00;
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_indentzd2envzd2zzcc_indentz00,
		BgL_bgl_za762indentza762za7za7cc1069z00, BGl_z62indentz62zzcc_indentz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1057z00zzcc_indentz00,
		BgL_bgl_string1057za700za7za7c1070za7, ")", 1);
	      DEFINE_STRING(BGl_string1058z00zzcc_indentz00,
		BgL_bgl_string1058za700za7za7c1071za7, "   . indent (", 13);
	      DEFINE_STRING(BGl_string1059z00zzcc_indentz00,
		BgL_bgl_string1059za700za7za7c1072za7, ".cc ", 4);
	      DEFINE_STRING(BGl_string1060z00zzcc_indentz00,
		BgL_bgl_string1060za700za7za7c1073za7, ".c > ", 5);
	      DEFINE_STRING(BGl_string1061z00zzcc_indentz00,
		BgL_bgl_string1061za700za7za7c1074za7, " ", 1);
	      DEFINE_STRING(BGl_string1062z00zzcc_indentz00,
		BgL_bgl_string1062za700za7za7c1075za7, "      [", 7);
	      DEFINE_STRING(BGl_string1063z00zzcc_indentz00,
		BgL_bgl_string1063za700za7za7c1076za7, "Non nul value returned -- ", 26);
	      DEFINE_STRING(BGl_string1064z00zzcc_indentz00,
		BgL_bgl_string1064za700za7za7c1077za7, ".cc", 3);
	      DEFINE_STRING(BGl_string1065z00zzcc_indentz00,
		BgL_bgl_string1065za700za7za7c1078za7, ".c", 2);
	      DEFINE_STRING(BGl_string1066z00zzcc_indentz00,
		BgL_bgl_string1066za700za7za7c1079za7, "        mv ", 11);
	      DEFINE_STRING(BGl_string1067z00zzcc_indentz00,
		BgL_bgl_string1067za700za7za7c1080za7, "cc_indent", 9);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzcc_indentz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcc_indentz00(long
		BgL_checksumz00_72, char *BgL_fromz00_73)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcc_indentz00))
				{
					BGl_requirezd2initializa7ationz75zzcc_indentz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzcc_indentz00();
					BGl_libraryzd2moduleszd2initz00zzcc_indentz00();
					BGl_importedzd2moduleszd2initz00zzcc_indentz00();
					return BGl_methodzd2initzd2zzcc_indentz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcc_indentz00()
	{
		{	/* Cc/indent.scm 15 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "cc_indent");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "cc_indent");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"cc_indent");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"cc_indent");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"cc_indent");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"cc_indent");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cc_indent");
			return BUNSPEC;
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzcc_indentz00()
	{
		{	/* Cc/indent.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* indent */
	BGL_EXPORTED_DEF obj_t BGl_indentz00zzcc_indentz00(obj_t BgL_namez00_3)
	{
		{	/* Cc/indent.scm 23 */
			{	/* Cc/indent.scm 24 */
				bool_t BgL_test1082z00_89;

				if (STRINGP(BgL_namez00_3))
					{	/* Cc/indent.scm 24 */
						if (STRINGP(BGl_za2indentza2z00zzengine_paramz00))
							{	/* Cc/indent.scm 25 */
								BgL_test1082z00_89 =
									(STRING_LENGTH(BGl_za2indentza2z00zzengine_paramz00) >
									((long) 0));
							}
						else
							{	/* Cc/indent.scm 25 */
								BgL_test1082z00_89 = ((bool_t) 0);
							}
					}
				else
					{	/* Cc/indent.scm 24 */
						BgL_test1082z00_89 = ((bool_t) 0);
					}
				if (BgL_test1082z00_89)
					{	/* Cc/indent.scm 24 */
						{	/* Cc/indent.scm 28 */
							obj_t BgL_arg1019z00_16;

							BgL_arg1019z00_16 =
								BGl_basenamez00zz__osz00(BGl_za2indentza2z00zzengine_paramz00);
							{	/* Cc/indent.scm 28 */
								obj_t BgL_list1020z00_17;

								{	/* Cc/indent.scm 28 */
									obj_t BgL_arg1021z00_18;

									{	/* Cc/indent.scm 28 */
										obj_t BgL_arg1022z00_19;

										{	/* Cc/indent.scm 28 */
											obj_t BgL_arg1023z00_20;

											BgL_arg1023z00_20 =
												MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
											BgL_arg1022z00_19 =
												MAKE_YOUNG_PAIR(BGl_string1057z00zzcc_indentz00,
												BgL_arg1023z00_20);
										}
										BgL_arg1021z00_18 =
											MAKE_YOUNG_PAIR(BgL_arg1019z00_16, BgL_arg1022z00_19);
									}
									BgL_list1020z00_17 =
										MAKE_YOUNG_PAIR(BGl_string1058z00zzcc_indentz00,
										BgL_arg1021z00_18);
								}
								BGl_verbosez00zztools_speekz00(BINT(((long) 1)),
									BgL_list1020z00_17);
						}}
						{	/* Cc/indent.scm 29 */
							obj_t BgL_cmdz00_21;

							{	/* Cc/indent.scm 29 */
								obj_t BgL_list1041z00_42;

								{	/* Cc/indent.scm 29 */
									obj_t BgL_arg1042z00_43;

									{	/* Cc/indent.scm 29 */
										obj_t BgL_arg1043z00_44;

										{	/* Cc/indent.scm 29 */
											obj_t BgL_arg1044z00_45;

											{	/* Cc/indent.scm 29 */
												obj_t BgL_arg1045z00_46;

												{	/* Cc/indent.scm 29 */
													obj_t BgL_arg1047z00_47;

													BgL_arg1047z00_47 =
														MAKE_YOUNG_PAIR(BGl_string1059z00zzcc_indentz00,
														BNIL);
													BgL_arg1045z00_46 =
														MAKE_YOUNG_PAIR(BgL_namez00_3, BgL_arg1047z00_47);
												}
												BgL_arg1044z00_45 =
													MAKE_YOUNG_PAIR(BGl_string1060z00zzcc_indentz00,
													BgL_arg1045z00_46);
											}
											BgL_arg1043z00_44 =
												MAKE_YOUNG_PAIR(BgL_namez00_3, BgL_arg1044z00_45);
										}
										BgL_arg1042z00_43 =
											MAKE_YOUNG_PAIR(BGl_string1061z00zzcc_indentz00,
											BgL_arg1043z00_44);
									}
									BgL_list1041z00_42 =
										MAKE_YOUNG_PAIR(BGl_za2indentza2z00zzengine_paramz00,
										BgL_arg1042z00_43);
								}
								BgL_cmdz00_21 =
									BGl_stringzd2appendzd2zz__r4_strings_6_7z00
									(BgL_list1041z00_42);
							}
							{	/* Cc/indent.scm 32 */
								obj_t BgL_list1024z00_22;

								{	/* Cc/indent.scm 32 */
									obj_t BgL_arg1025z00_23;

									{	/* Cc/indent.scm 32 */
										obj_t BgL_arg1026z00_24;

										{	/* Cc/indent.scm 32 */
											obj_t BgL_arg1027z00_25;

											BgL_arg1027z00_25 =
												MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
											BgL_arg1026z00_24 =
												MAKE_YOUNG_PAIR(BCHAR(((unsigned char) ']')),
												BgL_arg1027z00_25);
										}
										BgL_arg1025z00_23 =
											MAKE_YOUNG_PAIR(BgL_cmdz00_21, BgL_arg1026z00_24);
									}
									BgL_list1024z00_22 =
										MAKE_YOUNG_PAIR(BGl_string1062z00zzcc_indentz00,
										BgL_arg1025z00_23);
								}
								BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
									BgL_list1024z00_22);
							}
							{	/* Cc/indent.scm 33 */
								obj_t BgL_resz00_26;

								{	/* Cc/indent.scm 33 */
									obj_t BgL_list1032z00_31;

									BgL_list1032z00_31 = MAKE_YOUNG_PAIR(BgL_cmdz00_21, BNIL);
									BgL_resz00_26 = BGl_systemz00zz__osz00(BgL_list1032z00_31);
								}
								if (((long) CINT(BgL_resz00_26) == ((long) 0)))
									{	/* Cc/indent.scm 34 */
										BFALSE;
									}
								else
									{	/* Cc/indent.scm 35 */
										obj_t BgL_list1029z00_28;

										{	/* Cc/indent.scm 35 */
											obj_t BgL_arg1030z00_29;

											{	/* Cc/indent.scm 35 */
												obj_t BgL_arg1031z00_30;

												BgL_arg1031z00_30 =
													MAKE_YOUNG_PAIR(BgL_resz00_26, BNIL);
												BgL_arg1030z00_29 =
													MAKE_YOUNG_PAIR(BGl_string1063z00zzcc_indentz00,
													BgL_arg1031z00_30);
											}
											BgL_list1029z00_28 =
												MAKE_YOUNG_PAIR(BGl_za2indentza2z00zzengine_paramz00,
												BgL_arg1030z00_29);
										}
										BGl_warningz00zz__errorz00(BgL_list1029z00_28);
									}
							}
							{	/* Cc/indent.scm 36 */
								bool_t BgL_test1086z00_128;

								{	/* Cc/indent.scm 36 */
									obj_t BgL_arg1040z00_41;

									BgL_arg1040z00_41 =
										string_append(BgL_namez00_3,
										BGl_string1064z00zzcc_indentz00);
									BgL_test1086z00_128 =
										fexists(BSTRING_TO_STRING(BgL_arg1040z00_41));
								}
								if (BgL_test1086z00_128)
									{	/* Cc/indent.scm 37 */
										obj_t BgL_snamez00_34;
										obj_t BgL_dnamez00_35;

										BgL_snamez00_34 =
											string_append(BgL_namez00_3,
											BGl_string1064z00zzcc_indentz00);
										BgL_dnamez00_35 =
											string_append(BgL_namez00_3,
											BGl_string1065z00zzcc_indentz00);
										{	/* Cc/indent.scm 39 */
											obj_t BgL_list1035z00_36;

											{	/* Cc/indent.scm 39 */
												obj_t BgL_arg1036z00_37;

												{	/* Cc/indent.scm 39 */
													obj_t BgL_arg1037z00_38;

													{	/* Cc/indent.scm 39 */
														obj_t BgL_arg1038z00_39;

														{	/* Cc/indent.scm 39 */
															obj_t BgL_arg1039z00_40;

															BgL_arg1039z00_40 =
																MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)),
																BNIL);
															BgL_arg1038z00_39 =
																MAKE_YOUNG_PAIR(BgL_dnamez00_35,
																BgL_arg1039z00_40);
														}
														BgL_arg1037z00_38 =
															MAKE_YOUNG_PAIR(BGl_string1061z00zzcc_indentz00,
															BgL_arg1038z00_39);
													}
													BgL_arg1036z00_37 =
														MAKE_YOUNG_PAIR(BgL_snamez00_34, BgL_arg1037z00_38);
												}
												BgL_list1035z00_36 =
													MAKE_YOUNG_PAIR(BGl_string1066z00zzcc_indentz00,
													BgL_arg1036z00_37);
											}
											BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
												BgL_list1035z00_36);
										}
										{	/* Cc/indent.scm 40 */
											bool_t BgL_res1056z00_67;

											{	/* Cc/indent.scm 40 */
												char *BgL_string1z00_62;
												char *BgL_string2z00_63;

												BgL_string1z00_62 = BSTRING_TO_STRING(BgL_snamez00_34);
												BgL_string2z00_63 = BSTRING_TO_STRING(BgL_dnamez00_35);
												{	/* Cc/indent.scm 40 */
													int BgL_arg1236z00_65;

													BgL_arg1236z00_65 =
														rename(BgL_string1z00_62, BgL_string2z00_63);
													BgL_res1056z00_67 =
														((long) (BgL_arg1236z00_65) == ((long) 0));
											}}
											return BBOOL(BgL_res1056z00_67);
										}
									}
								else
									{	/* Cc/indent.scm 36 */
										return BFALSE;
									}
							}
						}
					}
				else
					{	/* Cc/indent.scm 24 */
						return BFALSE;
					}
			}
		}

	}



/* &indent */
	obj_t BGl_z62indentz62zzcc_indentz00(obj_t BgL_envz00_68,
		obj_t BgL_namez00_69)
	{
		{	/* Cc/indent.scm 23 */
			return BGl_indentz00zzcc_indentz00(BgL_namez00_69);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzcc_indentz00()
	{
		{	/* Cc/indent.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcc_indentz00()
	{
		{	/* Cc/indent.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcc_indentz00()
	{
		{	/* Cc/indent.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcc_indentz00()
	{
		{	/* Cc/indent.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1067z00zzcc_indentz00));
			return
				BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1067z00zzcc_indentz00));
		}

	}

#ifdef __cplusplus
}
#endif
