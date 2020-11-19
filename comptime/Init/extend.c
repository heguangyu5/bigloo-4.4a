/*===========================================================================*/
/*   (Init/extend.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Init/extend.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_IMPORT obj_t BGl_defaultzd2environmentzd2zz__evalz00();
	BGL_EXPORTED_DECL obj_t BGl_loadzd2extendzd2zzinit_extendz00(obj_t);
	static obj_t BGl_objectzd2initzd2zzinit_extendz00();
	static obj_t BGl_z62loadzd2extendzb0zzinit_extendz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzinit_extendz00();
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzinit_extendz00();
	static obj_t BGl_za2extendzd2tableza2zd2zzinit_extendz00 = BUNSPEC;
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	BGL_IMPORT obj_t BGl_findzd2filezf2pathz20zz__osz00(obj_t, obj_t);
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzinit_extendz00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zzinit_extendz00();
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzinit_extendz00();
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzinit_extendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_passz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__evalz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_loadqz00zz__evalz00(obj_t, obj_t);
	extern obj_t BGl_za2libzd2dirza2zd2zzengine_paramz00;
	static obj_t BGl_cnstzd2initzd2zzinit_extendz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzinit_extendz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzinit_extendz00();
	BGL_IMPORT obj_t BGl_memberz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t __cnst[1];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_loadzd2extendzd2envz00zzinit_extendz00,
		BgL_bgl_za762loadza7d2extend1065z00,
		BGl_z62loadzd2extendzb0zzinit_extendz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1055z00zzinit_extendz00,
		BgL_bgl_string1055za700za7za7i1066za7, "   . ", 5);
	      DEFINE_STRING(BGl_string1056z00zzinit_extendz00,
		BgL_bgl_string1056za700za7za7i1067za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string1057z00zzinit_extendz00,
		BgL_bgl_string1057za700za7za7i1068za7, ".init", 5);
	      DEFINE_STRING(BGl_string1058z00zzinit_extendz00,
		BgL_bgl_string1058za700za7za7i1069za7, "parse-args", 10);
	      DEFINE_STRING(BGl_string1059z00zzinit_extendz00,
		BgL_bgl_string1059za700za7za7i1070za7, "Can't find extend file", 22);
	      DEFINE_STRING(BGl_string1060z00zzinit_extendz00,
		BgL_bgl_string1060za700za7za7i1071za7, "init_extend", 11);
	      DEFINE_STRING(BGl_string1061z00zzinit_extendz00,
		BgL_bgl_string1061za700za7za7i1072za7, "pass-started ", 13);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_za2extendzd2tableza2zd2zzinit_extendz00));
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzinit_extendz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzinit_extendz00(long
		BgL_checksumz00_83, char *BgL_fromz00_84)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzinit_extendz00))
				{
					BGl_requirezd2initializa7ationz75zzinit_extendz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzinit_extendz00();
					BGl_libraryzd2moduleszd2initz00zzinit_extendz00();
					BGl_cnstzd2initzd2zzinit_extendz00();
					BGl_importedzd2moduleszd2initz00zzinit_extendz00();
					return BGl_toplevelzd2initzd2zzinit_extendz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzinit_extendz00()
	{
		{	/* Init/extend.scm 16 */
			BGl_modulezd2initializa7ationz75zz__evalz00(((long) 0), "init_extend");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "init_extend");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "init_extend");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "init_extend");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"init_extend");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"init_extend");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"init_extend");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzinit_extendz00()
	{
		{	/* Init/extend.scm 16 */
			{	/* Init/extend.scm 16 */
				obj_t BgL_cportz00_70;

				{	/* Init/extend.scm 16 */
					obj_t BgL_stringz00_78;

					BgL_stringz00_78 = BGl_string1061z00zzinit_extendz00;
					{	/* Init/extend.scm 16 */
						obj_t BgL_startz00_79;

						BgL_startz00_79 = BINT(((long) 0));
						{	/* Init/extend.scm 16 */
							obj_t BgL_endz00_80;

							BgL_endz00_80 = BINT(STRING_LENGTH(((obj_t) BgL_stringz00_78)));
							{	/* Init/extend.scm 16 */

								BgL_cportz00_70 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_78, BgL_startz00_79, BgL_endz00_80);
				}}}}
				{
					long BgL_iz00_71;

					BgL_iz00_71 = ((long) 0);
				BgL_loopz00_72:
					if ((BgL_iz00_71 == ((long) -1)))
						{	/* Init/extend.scm 16 */
							return BUNSPEC;
						}
					else
						{	/* Init/extend.scm 16 */
							{	/* Init/extend.scm 16 */
								obj_t BgL_arg1063z00_74;

								{	/* Init/extend.scm 16 */

									{	/* Init/extend.scm 16 */
										obj_t BgL_locationz00_76;

										BgL_locationz00_76 = BBOOL(((bool_t) 0));
										{	/* Init/extend.scm 16 */

											BgL_arg1063z00_74 =
												BGl_readz00zz__readerz00(BgL_cportz00_70,
												BgL_locationz00_76);
										}
									}
								}
								{	/* Init/extend.scm 16 */
									int BgL_tmpz00_109;

									BgL_tmpz00_109 = (int) (BgL_iz00_71);
									CNST_TABLE_SET(BgL_tmpz00_109, BgL_arg1063z00_74);
							}}
							{	/* Init/extend.scm 16 */
								int BgL_auxz00_77;

								BgL_auxz00_77 = (int) ((BgL_iz00_71 - ((long) 1)));
								{
									long BgL_iz00_114;

									BgL_iz00_114 = (long) (BgL_auxz00_77);
									BgL_iz00_71 = BgL_iz00_114;
									goto BgL_loopz00_72;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzinit_extendz00()
	{
		{	/* Init/extend.scm 16 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzinit_extendz00()
	{
		{	/* Init/extend.scm 16 */
			return (BGl_za2extendzd2tableza2zd2zzinit_extendz00 = BNIL, BUNSPEC);
		}

	}



/* load-extend */
	BGL_EXPORTED_DEF obj_t BGl_loadzd2extendzd2zzinit_extendz00(obj_t
		BgL_extendzd2namezd2_3)
	{
		{	/* Init/extend.scm 25 */
			if (CBOOL(BGl_memberz00zz__r4_pairs_and_lists_6_3z00
					(BgL_extendzd2namezd2_3,
						BGl_za2extendzd2tableza2zd2zzinit_extendz00)))
				{	/* Init/extend.scm 26 */
					return BFALSE;
				}
			else
				{	/* Init/extend.scm 26 */
					BGl_za2extendzd2tableza2zd2zzinit_extendz00 =
						MAKE_YOUNG_PAIR(BgL_extendzd2namezd2_3,
						BGl_za2extendzd2tableza2zd2zzinit_extendz00);
					{	/* Init/extend.scm 28 */
						obj_t BgL_fnamez00_13;

						BgL_fnamez00_13 =
							BGl_findzd2filezf2pathz20zz__osz00(BgL_extendzd2namezd2_3,
							BGl_za2libzd2dirza2zd2zzengine_paramz00);
						if (CBOOL(BgL_fnamez00_13))
							{	/* Init/extend.scm 29 */
								{	/* Init/extend.scm 31 */
									obj_t BgL_list1024z00_14;

									{	/* Init/extend.scm 31 */
										obj_t BgL_arg1025z00_15;

										{	/* Init/extend.scm 31 */
											obj_t BgL_arg1026z00_16;

											BgL_arg1026z00_16 =
												MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
											BgL_arg1025z00_15 =
												MAKE_YOUNG_PAIR(BgL_fnamez00_13, BgL_arg1026z00_16);
										}
										BgL_list1024z00_14 =
											MAKE_YOUNG_PAIR(BGl_string1055z00zzinit_extendz00,
											BgL_arg1025z00_15);
									}
									BGl_verbosez00zztools_speekz00(BINT(((long) 1)),
										BgL_list1024z00_14);
								}
								BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 =
									BINT(((long) 0));
								BGl_za2currentzd2passza2zd2zzengine_passz00 = BgL_fnamez00_13;
								{	/* Init/extend.scm 31 */
									obj_t BgL_g1016z00_17;

									BgL_g1016z00_17 = BNIL;
									{
										obj_t BgL_hooksz00_20;
										obj_t BgL_hnamesz00_21;

										BgL_hooksz00_20 = BgL_g1016z00_17;
										BgL_hnamesz00_21 = BNIL;
									BgL_zc3z04anonymousza31027ze3z87_22:
										if (NULLP(BgL_hooksz00_20))
											{	/* Init/extend.scm 31 */
												CNST_TABLE_REF(((long) 0));
											}
										else
											{	/* Init/extend.scm 31 */
												bool_t BgL_test1078z00_134;

												{	/* Init/extend.scm 31 */
													obj_t BgL_fun1035z00_29;

													BgL_fun1035z00_29 = CAR(((obj_t) BgL_hooksz00_20));
													BgL_test1078z00_134 =
														CBOOL(PROCEDURE_ENTRY(BgL_fun1035z00_29)
														(BgL_fun1035z00_29, BEOA));
												}
												if (BgL_test1078z00_134)
													{	/* Init/extend.scm 31 */
														obj_t BgL_arg1031z00_26;
														obj_t BgL_arg1032z00_27;

														BgL_arg1031z00_26 = CDR(((obj_t) BgL_hooksz00_20));
														BgL_arg1032z00_27 = CDR(((obj_t) BgL_hnamesz00_21));
														{
															obj_t BgL_hnamesz00_146;
															obj_t BgL_hooksz00_145;

															BgL_hooksz00_145 = BgL_arg1031z00_26;
															BgL_hnamesz00_146 = BgL_arg1032z00_27;
															BgL_hnamesz00_21 = BgL_hnamesz00_146;
															BgL_hooksz00_20 = BgL_hooksz00_145;
															goto BgL_zc3z04anonymousza31027ze3z87_22;
														}
													}
												else
													{	/* Init/extend.scm 31 */
														obj_t BgL_arg1033z00_28;

														BgL_arg1033z00_28 = CAR(((obj_t) BgL_hnamesz00_21));
														BGl_internalzd2errorzd2zztools_errorz00
															(BgL_fnamez00_13,
															BGl_string1056z00zzinit_extendz00,
															BgL_arg1033z00_28);
													}
											}
									}
								}
								{	/* Init/extend.scm 32 */
									obj_t BgL_envz00_33;

									BgL_envz00_33 = BGl_defaultzd2environmentzd2zz__evalz00();
									{	/* Init/extend.scm 32 */

										return
											BGl_loadqz00zz__evalz00(BgL_fnamez00_13, BgL_envz00_33);
									}
								}
							}
						else
							{	/* Init/extend.scm 33 */
								obj_t BgL_fnamez00_34;

								{	/* Init/extend.scm 33 */
									obj_t BgL_arg1050z00_55;

									BgL_arg1050z00_55 =
										string_append(BgL_extendzd2namezd2_3,
										BGl_string1057z00zzinit_extendz00);
									BgL_fnamez00_34 =
										BGl_findzd2filezf2pathz20zz__osz00(BgL_arg1050z00_55,
										BGl_za2libzd2dirza2zd2zzengine_paramz00);
								}
								if (CBOOL(BgL_fnamez00_34))
									{	/* Init/extend.scm 35 */
										{	/* Init/extend.scm 37 */
											obj_t BgL_list1037z00_35;

											{	/* Init/extend.scm 37 */
												obj_t BgL_arg1038z00_36;

												{	/* Init/extend.scm 37 */
													obj_t BgL_arg1039z00_37;

													BgL_arg1039z00_37 =
														MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
													BgL_arg1038z00_36 =
														MAKE_YOUNG_PAIR(BgL_fnamez00_34, BgL_arg1039z00_37);
												}
												BgL_list1037z00_35 =
													MAKE_YOUNG_PAIR(BGl_string1055z00zzinit_extendz00,
													BgL_arg1038z00_36);
											}
											BGl_verbosez00zztools_speekz00(BINT(((long) 1)),
												BgL_list1037z00_35);
										}
										BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 =
											BINT(((long) 0));
										BGl_za2currentzd2passza2zd2zzengine_passz00 =
											BgL_fnamez00_34;
										{	/* Init/extend.scm 37 */
											obj_t BgL_g1018z00_38;

											BgL_g1018z00_38 = BNIL;
											{
												obj_t BgL_hooksz00_41;
												obj_t BgL_hnamesz00_42;

												BgL_hooksz00_41 = BgL_g1018z00_38;
												BgL_hnamesz00_42 = BNIL;
											BgL_zc3z04anonymousza31040ze3z87_43:
												if (NULLP(BgL_hooksz00_41))
													{	/* Init/extend.scm 37 */
														CNST_TABLE_REF(((long) 0));
													}
												else
													{	/* Init/extend.scm 37 */
														bool_t BgL_test1081z00_166;

														{	/* Init/extend.scm 37 */
															obj_t BgL_fun1048z00_50;

															BgL_fun1048z00_50 =
																CAR(((obj_t) BgL_hooksz00_41));
															BgL_test1081z00_166 =
																CBOOL(PROCEDURE_ENTRY(BgL_fun1048z00_50)
																(BgL_fun1048z00_50, BEOA));
														}
														if (BgL_test1081z00_166)
															{	/* Init/extend.scm 37 */
																obj_t BgL_arg1044z00_47;
																obj_t BgL_arg1045z00_48;

																BgL_arg1044z00_47 =
																	CDR(((obj_t) BgL_hooksz00_41));
																BgL_arg1045z00_48 =
																	CDR(((obj_t) BgL_hnamesz00_42));
																{
																	obj_t BgL_hnamesz00_178;
																	obj_t BgL_hooksz00_177;

																	BgL_hooksz00_177 = BgL_arg1044z00_47;
																	BgL_hnamesz00_178 = BgL_arg1045z00_48;
																	BgL_hnamesz00_42 = BgL_hnamesz00_178;
																	BgL_hooksz00_41 = BgL_hooksz00_177;
																	goto BgL_zc3z04anonymousza31040ze3z87_43;
																}
															}
														else
															{	/* Init/extend.scm 37 */
																obj_t BgL_arg1047z00_49;

																BgL_arg1047z00_49 =
																	CAR(((obj_t) BgL_hnamesz00_42));
																BGl_internalzd2errorzd2zztools_errorz00
																	(BgL_fnamez00_34,
																	BGl_string1056z00zzinit_extendz00,
																	BgL_arg1047z00_49);
															}
													}
											}
										}
										{	/* Init/extend.scm 38 */
											obj_t BgL_envz00_54;

											BgL_envz00_54 = BGl_defaultzd2environmentzd2zz__evalz00();
											{	/* Init/extend.scm 38 */

												return
													BGl_loadqz00zz__evalz00(BgL_fnamez00_34,
													BgL_envz00_54);
											}
										}
									}
								else
									{	/* Init/extend.scm 35 */
										return
											BGl_errorz00zz__errorz00
											(BGl_string1058z00zzinit_extendz00,
											BGl_string1059z00zzinit_extendz00,
											BgL_extendzd2namezd2_3);
									}
							}
					}
				}
		}

	}



/* &load-extend */
	obj_t BGl_z62loadzd2extendzb0zzinit_extendz00(obj_t BgL_envz00_68,
		obj_t BgL_extendzd2namezd2_69)
	{
		{	/* Init/extend.scm 25 */
			return BGl_loadzd2extendzd2zzinit_extendz00(BgL_extendzd2namezd2_69);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzinit_extendz00()
	{
		{	/* Init/extend.scm 16 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzinit_extendz00()
	{
		{	/* Init/extend.scm 16 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzinit_extendz00()
	{
		{	/* Init/extend.scm 16 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzinit_extendz00()
	{
		{	/* Init/extend.scm 16 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1060z00zzinit_extendz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1060z00zzinit_extendz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 373082201),
				BSTRING_TO_STRING(BGl_string1060z00zzinit_extendz00));
			return
				BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1060z00zzinit_extendz00));
		}

	}

#ifdef __cplusplus
}
#endif
