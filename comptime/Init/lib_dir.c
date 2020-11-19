/*===========================================================================*/
/*   (Init/lib_dir.scm)                                                      */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Init/lib_dir.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_IMPORT obj_t BGl_defaultzd2environmentzd2zz__evalz00();
	static obj_t BGl_readzd2config_schzd2zzinit_libzd2dirzd2(obj_t);
	static obj_t BGl_safezd2readzd2zzinit_libzd2dirzd2(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_warningz00zz__errorz00(obj_t);
	BGL_IMPORT obj_t
		BGl_bigloozd2configurationzd2addzd2entryz12zc0zz__configurez00(obj_t,
		obj_t);
	static obj_t
		BGl_z62processzd2libzd2dirzd2parameterzb0zzinit_libzd2dirzd2(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzinit_libzd2dirzd2();
	static obj_t BGl_z62zc3z04anonymousza31037ze3ze5zzinit_libzd2dirzd2(obj_t);
	static obj_t BGl_methodzd2initzd2zzinit_libzd2dirzd2();
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2bigloozd2versionza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT bool_t fexists(char *);
	static obj_t BGl_processzd2libzd2versionz00zzinit_libzd2dirzd2(obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzinit_libzd2dirzd2();
	BGL_IMPORT obj_t BGl_filezd2namezd2canonicaliza7ez12zb5zz__osz00(obj_t);
	BGL_IMPORT obj_t BGl_exitdzd2popzd2protectz12z12zz__bexitz00(obj_t);
	extern obj_t BGl_reinitializa7ezd2bigloozd2variablesz12zb5zzengine_paramz00();
	BGL_IMPORT obj_t BGl_deletez12z12zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_za2bigloozd2specificzd2versionza2z00zzengine_paramz00;
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzinit_libzd2dirzd2 = BUNSPEC;
	BGL_IMPORT obj_t BGl_evalz00zz__evalz00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzinit_libzd2dirzd2();
	BGL_IMPORT obj_t BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(obj_t, obj_t);
	static obj_t BGl_processzd2libzd2configz00zzinit_libzd2dirzd2(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_bigloozd2libraryzd2pathzd2setz12zc0zz__paramz00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_processzd2libzd2dirzd2parameterzd2zzinit_libzd2dirzd2(obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t bgl_close_input_port(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzinit_libzd2dirzd2(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_evalz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__evalz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__configurez00(long,
		char *);
	extern obj_t BGl_za2libzd2dirza2zd2zzengine_paramz00;
	static obj_t BGl_cnstzd2initzd2zzinit_libzd2dirzd2();
	static obj_t BGl_libraryzd2moduleszd2initz00zzinit_libzd2dirzd2();
	static obj_t BGl_importedzd2moduleszd2initz00zzinit_libzd2dirzd2();
	BGL_IMPORT obj_t BGl_makezd2filezd2pathz00zz__osz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_bigloozd2configzd2zz__configurez00(obj_t);
	BGL_IMPORT bool_t bgl_directoryp(char *);
	BGL_IMPORT obj_t BGl_bigloozd2libraryzd2pathz00zz__paramz00();
	static obj_t __cnst[4];


	   
		 
		DEFINE_STRING(BGl_string1070z00zzinit_libzd2dirzd2,
		BgL_bgl_string1070za700za7za7i1080za7, "bigloo_config.sch", 17);
	      DEFINE_STRING(BGl_string1071z00zzinit_libzd2dirzd2,
		BgL_bgl_string1071za700za7za7i1081za7, "config does not exist", 21);
	      DEFINE_STRING(BGl_string1072z00zzinit_libzd2dirzd2,
		BgL_bgl_string1072za700za7za7i1082za7, "init_lib-dir", 12);
	      DEFINE_STRING(BGl_string1073z00zzinit_libzd2dirzd2,
		BgL_bgl_string1073za700za7za7i1083za7,
		"library-directory lib-dir pair string ", 38);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_processzd2libzd2dirzd2parameterzd2envz00zzinit_libzd2dirzd2,
		BgL_bgl_za762processza7d2lib1084z00,
		BGl_z62processzd2libzd2dirzd2parameterzb0zzinit_libzd2dirzd2, 0L, BUNSPEC,
		1);
	BGL_IMPORT obj_t BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00;
	   
		 
		DEFINE_STRING(BGl_string1063z00zzinit_libzd2dirzd2,
		BgL_bgl_string1063za700za7za7i1085za7, "Internal Error", 14);
	      DEFINE_STRING(BGl_string1064z00zzinit_libzd2dirzd2,
		BgL_bgl_string1064za700za7za7i1086za7, "lib-dir", 7);
	      DEFINE_STRING(BGl_string1065z00zzinit_libzd2dirzd2,
		BgL_bgl_string1065za700za7za7i1087za7, "Bad bigloo_config.sch file", 26);
	      DEFINE_STRING(BGl_string1066z00zzinit_libzd2dirzd2,
		BgL_bgl_string1066za700za7za7i1088za7,
		"Cross compilation for different Bigloos is risky.", 49);
	      DEFINE_STRING(BGl_string1067z00zzinit_libzd2dirzd2,
		BgL_bgl_string1067za700za7za7i1089za7, "]", 1);
	      DEFINE_STRING(BGl_string1068z00zzinit_libzd2dirzd2,
		BgL_bgl_string1068za700za7za7i1090za7, "      [reading config ", 22);
	      DEFINE_STRING(BGl_string1069z00zzinit_libzd2dirzd2,
		BgL_bgl_string1069za700za7za7i1091za7, "Not a directory", 15);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzinit_libzd2dirzd2));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzinit_libzd2dirzd2(long
		BgL_checksumz00_145, char *BgL_fromz00_146)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzinit_libzd2dirzd2))
				{
					BGl_requirezd2initializa7ationz75zzinit_libzd2dirzd2 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzinit_libzd2dirzd2();
					BGl_libraryzd2moduleszd2initz00zzinit_libzd2dirzd2();
					BGl_cnstzd2initzd2zzinit_libzd2dirzd2();
					BGl_importedzd2moduleszd2initz00zzinit_libzd2dirzd2();
					return BGl_methodzd2initzd2zzinit_libzd2dirzd2();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzinit_libzd2dirzd2()
	{
		{	/* Init/lib_dir.scm 15 */
			BGl_modulezd2initializa7ationz75zz__evalz00(((long) 0), "init_lib-dir");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "init_lib-dir");
			BGl_modulezd2initializa7ationz75zz__configurez00(((long) 0),
				"init_lib-dir");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"init_lib-dir");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "init_lib-dir");
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 0), "init_lib-dir");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"init_lib-dir");
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 0), "init_lib-dir");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "init_lib-dir");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"init_lib-dir");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"init_lib-dir");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"init_lib-dir");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzinit_libzd2dirzd2()
	{
		{	/* Init/lib_dir.scm 15 */
			{	/* Init/lib_dir.scm 15 */
				obj_t BgL_cportz00_132;

				{	/* Init/lib_dir.scm 15 */
					obj_t BgL_stringz00_140;

					BgL_stringz00_140 = BGl_string1073z00zzinit_libzd2dirzd2;
					{	/* Init/lib_dir.scm 15 */
						obj_t BgL_startz00_141;

						BgL_startz00_141 = BINT(((long) 0));
						{	/* Init/lib_dir.scm 15 */
							obj_t BgL_endz00_142;

							BgL_endz00_142 = BINT(STRING_LENGTH(((obj_t) BgL_stringz00_140)));
							{	/* Init/lib_dir.scm 15 */

								BgL_cportz00_132 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_140, BgL_startz00_141, BgL_endz00_142);
				}}}}
				{
					long BgL_iz00_133;

					BgL_iz00_133 = ((long) 3);
				BgL_loopz00_134:
					if ((BgL_iz00_133 == ((long) -1)))
						{	/* Init/lib_dir.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Init/lib_dir.scm 15 */
							{	/* Init/lib_dir.scm 15 */
								obj_t BgL_arg1078z00_136;

								{	/* Init/lib_dir.scm 15 */

									{	/* Init/lib_dir.scm 15 */
										obj_t BgL_locationz00_138;

										BgL_locationz00_138 = BBOOL(((bool_t) 0));
										{	/* Init/lib_dir.scm 15 */

											BgL_arg1078z00_136 =
												BGl_readz00zz__readerz00(BgL_cportz00_132,
												BgL_locationz00_138);
										}
									}
								}
								{	/* Init/lib_dir.scm 15 */
									int BgL_tmpz00_176;

									BgL_tmpz00_176 = (int) (BgL_iz00_133);
									CNST_TABLE_SET(BgL_tmpz00_176, BgL_arg1078z00_136);
							}}
							{	/* Init/lib_dir.scm 15 */
								int BgL_auxz00_139;

								BgL_auxz00_139 = (int) ((BgL_iz00_133 - ((long) 1)));
								{
									long BgL_iz00_181;

									BgL_iz00_181 = (long) (BgL_auxz00_139);
									BgL_iz00_133 = BgL_iz00_181;
									goto BgL_loopz00_134;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzinit_libzd2dirzd2()
	{
		{	/* Init/lib_dir.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* safe-read */
	obj_t BGl_safezd2readzd2zzinit_libzd2dirzd2(obj_t BgL_pz00_3,
		obj_t BgL_typez00_4, obj_t BgL_fz00_5)
	{
		{	/* Init/lib_dir.scm 24 */
			{
				obj_t BgL_objz00_25;

				{	/* Init/lib_dir.scm 32 */
					obj_t BgL_tmpz00_21;

					{	/* Init/lib_dir.scm 32 */

						{	/* Init/lib_dir.scm 32 */

							BgL_tmpz00_21 =
								BGl_readz00zz__readerz00(((obj_t) BgL_pz00_3), BFALSE);
						}
					}
					{	/* Init/lib_dir.scm 33 */
						bool_t BgL_test1094z00_186;

						{	/* Init/lib_dir.scm 33 */
							obj_t BgL_tmpz00_187;

							BgL_objz00_25 = BgL_tmpz00_21;
							if ((BgL_typez00_4 == CNST_TABLE_REF(((long) 0))))
								{	/* Init/lib_dir.scm 27 */
									BgL_tmpz00_187 = BBOOL(STRINGP(BgL_objz00_25));
								}
							else
								{	/* Init/lib_dir.scm 27 */
									if ((BgL_typez00_4 == CNST_TABLE_REF(((long) 1))))
										{	/* Init/lib_dir.scm 27 */
											BgL_tmpz00_187 = BBOOL(PAIRP(BgL_objz00_25));
										}
									else
										{	/* Init/lib_dir.scm 27 */
											BgL_tmpz00_187 =
												BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 2)),
												BGl_string1063z00zzinit_libzd2dirzd2, BgL_typez00_4);
								}}
							BgL_test1094z00_186 = CBOOL(BgL_tmpz00_187);
						}
						if (BgL_test1094z00_186)
							{	/* Init/lib_dir.scm 33 */
								BFALSE;
							}
						else
							{	/* Init/lib_dir.scm 33 */
								BGl_errorz00zz__errorz00(BGl_string1064z00zzinit_libzd2dirzd2,
									BGl_string1065z00zzinit_libzd2dirzd2, BgL_fz00_5);
							}
					}
					return BgL_tmpz00_21;
				}
			}
		}

	}



/* process-lib-version */
	obj_t BGl_processzd2libzd2versionz00zzinit_libzd2dirzd2(obj_t BgL_pz00_6,
		obj_t BgL_fz00_7)
	{
		{	/* Init/lib_dir.scm 40 */
			{	/* Init/lib_dir.scm 41 */
				obj_t BgL_libzd2versionzd2_31;

				BgL_libzd2versionzd2_31 =
					BGl_safezd2readzd2zzinit_libzd2dirzd2(BgL_pz00_6,
					CNST_TABLE_REF(((long) 0)), BgL_fz00_7);
				{	/* Init/lib_dir.scm 41 */
					obj_t BgL_libzd2specificzd2versionz00_32;

					BgL_libzd2specificzd2versionz00_32 =
						BGl_safezd2readzd2zzinit_libzd2dirzd2(BgL_pz00_6,
						CNST_TABLE_REF(((long) 0)), BgL_fz00_7);
					{	/* Init/lib_dir.scm 42 */

						{	/* Init/lib_dir.scm 43 */
							bool_t BgL_test1097z00_206;

							{	/* Init/lib_dir.scm 43 */
								bool_t BgL_test1098z00_207;

								{	/* Init/lib_dir.scm 43 */
									bool_t BgL_res1052z00_96;

									{	/* Init/lib_dir.scm 43 */
										obj_t BgL_string1z00_81;

										BgL_string1z00_81 =
											BGl_za2bigloozd2versionza2zd2zzengine_paramz00;
										{	/* Init/lib_dir.scm 43 */
											long BgL_l1z00_83;

											BgL_l1z00_83 = STRING_LENGTH(BgL_string1z00_81);
											if (
												(BgL_l1z00_83 ==
													STRING_LENGTH(((obj_t) BgL_libzd2versionzd2_31))))
												{	/* Init/lib_dir.scm 43 */
													int BgL_arg1267z00_86;

													{	/* Init/lib_dir.scm 43 */
														char *BgL_auxz00_215;
														char *BgL_tmpz00_213;

														BgL_auxz00_215 =
															BSTRING_TO_STRING(
															((obj_t) BgL_libzd2versionzd2_31));
														BgL_tmpz00_213 =
															BSTRING_TO_STRING(BgL_string1z00_81);
														BgL_arg1267z00_86 =
															memcmp(BgL_tmpz00_213, BgL_auxz00_215,
															BgL_l1z00_83);
													}
													BgL_res1052z00_96 =
														((long) (BgL_arg1267z00_86) == ((long) 0));
												}
											else
												{	/* Init/lib_dir.scm 43 */
													BgL_res1052z00_96 = ((bool_t) 0);
												}
										}
									}
									BgL_test1098z00_207 = BgL_res1052z00_96;
								}
								if (BgL_test1098z00_207)
									{	/* Init/lib_dir.scm 44 */
										bool_t BgL_res1057z00_112;

										{	/* Init/lib_dir.scm 44 */
											obj_t BgL_string1z00_97;

											BgL_string1z00_97 =
												BGl_za2bigloozd2specificzd2versionza2z00zzengine_paramz00;
											{	/* Init/lib_dir.scm 44 */
												long BgL_l1z00_99;

												BgL_l1z00_99 = STRING_LENGTH(BgL_string1z00_97);
												if (
													(BgL_l1z00_99 ==
														STRING_LENGTH(
															((obj_t) BgL_libzd2specificzd2versionz00_32))))
													{	/* Init/lib_dir.scm 44 */
														int BgL_arg1267z00_102;

														{	/* Init/lib_dir.scm 44 */
															char *BgL_auxz00_228;
															char *BgL_tmpz00_226;

															BgL_auxz00_228 =
																BSTRING_TO_STRING(
																((obj_t) BgL_libzd2specificzd2versionz00_32));
															BgL_tmpz00_226 =
																BSTRING_TO_STRING(BgL_string1z00_97);
															BgL_arg1267z00_102 =
																memcmp(BgL_tmpz00_226, BgL_auxz00_228,
																BgL_l1z00_99);
														}
														BgL_res1057z00_112 =
															((long) (BgL_arg1267z00_102) == ((long) 0));
													}
												else
													{	/* Init/lib_dir.scm 44 */
														BgL_res1057z00_112 = ((bool_t) 0);
													}
											}
										}
										BgL_test1097z00_206 = BgL_res1057z00_112;
									}
								else
									{	/* Init/lib_dir.scm 43 */
										BgL_test1097z00_206 = ((bool_t) 0);
									}
							}
							if (BgL_test1097z00_206)
								{	/* Init/lib_dir.scm 43 */
									return BFALSE;
								}
							else
								{	/* Init/lib_dir.scm 47 */
									obj_t BgL_list1026z00_35;

									BgL_list1026z00_35 =
										MAKE_YOUNG_PAIR(BGl_string1066z00zzinit_libzd2dirzd2, BNIL);
									return BGl_warningz00zz__errorz00(BgL_list1026z00_35);
								}
						}
					}
				}
			}
		}

	}



/* process-lib-config */
	obj_t BGl_processzd2libzd2configz00zzinit_libzd2dirzd2(obj_t BgL_pz00_8,
		obj_t BgL_fz00_9)
	{
		{	/* Init/lib_dir.scm 52 */
			{	/* Init/lib_dir.scm 54 */
				obj_t BgL_readzd2configzd2_37;

				BgL_readzd2configzd2_37 =
					BGl_safezd2readzd2zzinit_libzd2dirzd2(BgL_pz00_8,
					CNST_TABLE_REF(((long) 1)), BgL_fz00_9);
				{	/* Init/lib_dir.scm 54 */
					obj_t BgL_libzd2configzd2_38;

					{	/* Init/lib_dir.scm 55 */
						obj_t BgL_envz00_49;

						BgL_envz00_49 = BGl_defaultzd2environmentzd2zz__evalz00();
						{	/* Init/lib_dir.scm 55 */

							BgL_libzd2configzd2_38 =
								BGl_evalz00zz__evalz00(BgL_readzd2configzd2_37, BgL_envz00_49);
					}}
					{	/* Init/lib_dir.scm 55 */

						{
							obj_t BgL_l1015z00_40;

							BgL_l1015z00_40 = BgL_libzd2configzd2_38;
						BgL_zc3z04anonymousza31027ze3z87_41:
							if (PAIRP(BgL_l1015z00_40))
								{	/* Init/lib_dir.scm 57 */
									{	/* Init/lib_dir.scm 58 */
										obj_t BgL_cz00_43;

										BgL_cz00_43 = CAR(BgL_l1015z00_40);
										{	/* Init/lib_dir.scm 58 */
											obj_t BgL_arg1029z00_44;
											obj_t BgL_arg1030z00_45;

											BgL_arg1029z00_44 = CAR(((obj_t) BgL_cz00_43));
											BgL_arg1030z00_45 = CDR(((obj_t) BgL_cz00_43));
											BGl_bigloozd2configurationzd2addzd2entryz12zc0zz__configurez00
												(BgL_arg1029z00_44, BgL_arg1030z00_45);
										}
									}
									{
										obj_t BgL_l1015z00_248;

										BgL_l1015z00_248 = CDR(BgL_l1015z00_40);
										BgL_l1015z00_40 = BgL_l1015z00_248;
										goto BgL_zc3z04anonymousza31027ze3z87_41;
									}
								}
							else
								{	/* Init/lib_dir.scm 57 */
									((bool_t) 1);
								}
						}
						return
							BGl_reinitializa7ezd2bigloozd2variablesz12zb5zzengine_paramz00();
					}
				}
			}
		}

	}



/* read-config_sch */
	obj_t BGl_readzd2config_schzd2zzinit_libzd2dirzd2(obj_t BgL_fz00_10)
	{
		{	/* Init/lib_dir.scm 65 */
			{	/* Init/lib_dir.scm 66 */
				obj_t BgL_list1032z00_50;

				{	/* Init/lib_dir.scm 66 */
					obj_t BgL_arg1033z00_51;

					{	/* Init/lib_dir.scm 66 */
						obj_t BgL_arg1035z00_52;

						{	/* Init/lib_dir.scm 66 */
							obj_t BgL_arg1036z00_53;

							BgL_arg1036z00_53 =
								MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
							BgL_arg1035z00_52 =
								MAKE_YOUNG_PAIR(BGl_string1067z00zzinit_libzd2dirzd2,
								BgL_arg1036z00_53);
						}
						BgL_arg1033z00_51 = MAKE_YOUNG_PAIR(BgL_fz00_10, BgL_arg1035z00_52);
					}
					BgL_list1032z00_50 =
						MAKE_YOUNG_PAIR(BGl_string1068z00zzinit_libzd2dirzd2,
						BgL_arg1033z00_51);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 2)), BgL_list1032z00_50);
			}
			{	/* Init/lib_dir.scm 67 */
				obj_t BgL_portz00_54;

				{	/* Init/lib_dir.scm 67 */

					BgL_portz00_54 =
						BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(BgL_fz00_10, BTRUE,
						BINT(((long) 5000000)));
				}
				{	/* Init/lib_dir.scm 68 */
					obj_t BgL_exitd1012z00_55;

					BgL_exitd1012z00_55 = BGL_EXITD_TOP_AS_OBJ();
					{	/* Init/lib_dir.scm 74 */
						obj_t BgL_zc3z04anonymousza31037ze3z87_124;

						BgL_zc3z04anonymousza31037ze3z87_124 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza31037ze3ze5zzinit_libzd2dirzd2,
							(int) (((long) 0)), (int) (((long) 1)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31037ze3z87_124,
							(int) (((long) 0)), BgL_portz00_54);
						BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(BgL_exitd1012z00_55,
							BgL_zc3z04anonymousza31037ze3z87_124);
						{	/* Init/lib_dir.scm 70 */
							obj_t BgL_tmp1014z00_57;

							BGl_processzd2libzd2versionz00zzinit_libzd2dirzd2(BgL_portz00_54,
								BgL_fz00_10);
							BgL_tmp1014z00_57 =
								BGl_processzd2libzd2configz00zzinit_libzd2dirzd2(BgL_portz00_54,
								BgL_fz00_10);
							BGl_exitdzd2popzd2protectz12z12zz__bexitz00(BgL_exitd1012z00_55);
							bgl_close_input_port(((obj_t) BgL_portz00_54));
							return BgL_tmp1014z00_57;
						}
					}
				}
			}
		}

	}



/* &<@anonymous:1037> */
	obj_t BGl_z62zc3z04anonymousza31037ze3ze5zzinit_libzd2dirzd2(obj_t
		BgL_envz00_125)
	{
		{	/* Init/lib_dir.scm 68 */
			{	/* Init/lib_dir.scm 74 */
				obj_t BgL_portz00_126;

				BgL_portz00_126 = PROCEDURE_REF(BgL_envz00_125, (int) (((long) 0)));
				return bgl_close_input_port(((obj_t) BgL_portz00_126));
			}
		}

	}



/* process-lib-dir-parameter */
	BGL_EXPORTED_DEF obj_t
		BGl_processzd2libzd2dirzd2parameterzd2zzinit_libzd2dirzd2(obj_t
		BgL_paramz00_11)
	{
		{	/* Init/lib_dir.scm 79 */
			{	/* Init/lib_dir.scm 80 */
				obj_t BgL_dirz00_63;
				obj_t BgL_opathz00_64;

				BgL_dirz00_63 =
					BGl_filezd2namezd2canonicaliza7ez12zb5zz__osz00(BgL_paramz00_11);
				BgL_opathz00_64 =
					BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 3)));
				if (bgl_directoryp(BSTRING_TO_STRING(BgL_dirz00_63)))
					{	/* Init/lib_dir.scm 82 */
						BFALSE;
					}
				else
					{	/* Init/lib_dir.scm 82 */
						BGl_errorz00zz__errorz00(BGl_string1064z00zzinit_libzd2dirzd2,
							BGl_string1069z00zzinit_libzd2dirzd2, BgL_dirz00_63);
					}
				BGl_bigloozd2configurationzd2addzd2entryz12zc0zz__configurez00
					(CNST_TABLE_REF(((long) 3)), BgL_dirz00_63);
				{	/* Init/lib_dir.scm 85 */
					obj_t BgL_config_schz00_66;

					BgL_config_schz00_66 =
						BGl_makezd2filezd2pathz00zz__osz00(BgL_dirz00_63,
						BGl_string1070z00zzinit_libzd2dirzd2, BNIL);
					if (fexists(BSTRING_TO_STRING(BgL_config_schz00_66)))
						{	/* Init/lib_dir.scm 86 */
							BGl_readzd2config_schzd2zzinit_libzd2dirzd2(BgL_config_schz00_66);
						}
					else
						{	/* Init/lib_dir.scm 86 */
							BGl_errorz00zz__errorz00(BGl_string1064z00zzinit_libzd2dirzd2,
								BGl_string1071z00zzinit_libzd2dirzd2, BgL_config_schz00_66);
						}
					BGl_za2libzd2dirza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_dirz00_63,
						BGl_za2libzd2dirza2zd2zzengine_paramz00);
					{	/* Init/lib_dir.scm 91 */
						obj_t BgL_arg1040z00_68;

						{	/* Init/lib_dir.scm 91 */
							obj_t BgL_arg1041z00_69;

							{	/* Init/lib_dir.scm 91 */
								obj_t BgL_arg1042z00_70;

								BgL_arg1042z00_70 =
									BGl_bigloozd2libraryzd2pathz00zz__paramz00();
								{	/* Init/lib_dir.scm 91 */

									BgL_arg1041z00_69 =
										BGl_deletez12z12zz__r4_pairs_and_lists_6_3z00
										(BgL_opathz00_64, BgL_arg1042z00_70,
										BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00);
								}
							}
							BgL_arg1040z00_68 =
								MAKE_YOUNG_PAIR(BgL_dirz00_63, BgL_arg1041z00_69);
						}
						return
							BGl_bigloozd2libraryzd2pathzd2setz12zc0zz__paramz00
							(BgL_arg1040z00_68);
					}
				}
			}
		}

	}



/* &process-lib-dir-parameter */
	obj_t BGl_z62processzd2libzd2dirzd2parameterzb0zzinit_libzd2dirzd2(obj_t
		BgL_envz00_127, obj_t BgL_paramz00_128)
	{
		{	/* Init/lib_dir.scm 79 */
			return
				BGl_processzd2libzd2dirzd2parameterzd2zzinit_libzd2dirzd2
				(BgL_paramz00_128);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzinit_libzd2dirzd2()
	{
		{	/* Init/lib_dir.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzinit_libzd2dirzd2()
	{
		{	/* Init/lib_dir.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzinit_libzd2dirzd2()
	{
		{	/* Init/lib_dir.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzinit_libzd2dirzd2()
	{
		{	/* Init/lib_dir.scm 15 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1072z00zzinit_libzd2dirzd2));
			BGl_modulezd2initializa7ationz75zzmodule_evalz00(((long) 428236983),
				BSTRING_TO_STRING(BGl_string1072z00zzinit_libzd2dirzd2));
			return
				BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1072z00zzinit_libzd2dirzd2));
		}

	}

#ifdef __cplusplus
}
#endif
