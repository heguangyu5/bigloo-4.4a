/*===========================================================================*/
/*   (User/user.scm)                                                         */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent User/user.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	extern obj_t BGl_getzd2toplevelzd2unitz00zzmodule_includez00();
	BGL_IMPORT bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	static obj_t BGl_objectzd2initzd2zzuser_userz00();
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_za2userzd2passzd2nameza2z00zz__evalz00;
	static obj_t BGl_methodzd2initzd2zzuser_userz00();
	static obj_t BGl_gczd2rootszd2initz00zzuser_userz00();
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	static obj_t BGl_z62userzd2walkzb0zzuser_userz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_userzd2walkzd2zzuser_userz00(obj_t);
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzuser_userz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_za2userzd2passza2zd2zz__evalz00;
	static obj_t BGl_toplevelzd2initzd2zzuser_userz00();
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzuser_userz00();
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	BGL_IMPORT obj_t BGl_exitz00zz__errorz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzuser_userz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_includez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_passz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__evalz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	static obj_t BGl_cnstzd2initzd2zzuser_userz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzuser_userz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzuser_userz00();
	static obj_t __cnst[4];


	   
		 
		DEFINE_STRING(BGl_string1092z00zzuser_userz00,
		BgL_bgl_string1092za700za7za7u1105za7, "   . ", 5);
	      DEFINE_STRING(BGl_string1093z00zzuser_userz00,
		BgL_bgl_string1093za700za7za7u1106za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string1094z00zzuser_userz00,
		BgL_bgl_string1094za700za7za7u1107za7, " error", 6);
	      DEFINE_STRING(BGl_string1095z00zzuser_userz00,
		BgL_bgl_string1095za700za7za7u1108za7, "s", 1);
	      DEFINE_STRING(BGl_string1096z00zzuser_userz00,
		BgL_bgl_string1096za700za7za7u1109za7, "", 0);
	      DEFINE_STRING(BGl_string1097z00zzuser_userz00,
		BgL_bgl_string1097za700za7za7u1110za7, " occured, ending ...", 20);
	      DEFINE_STRING(BGl_string1098z00zzuser_userz00,
		BgL_bgl_string1098za700za7za7u1111za7, "failure during postlude hook", 28);
	      DEFINE_STRING(BGl_string1099z00zzuser_userz00,
		BgL_bgl_string1099za700za7za7u1112za7, "user_user", 9);
	      DEFINE_STRING(BGl_string1100z00zzuser_userz00,
		BgL_bgl_string1100za700za7za7u1113za7, "done dummy nothing pass-started ",
		32);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_userzd2walkzd2envz00zzuser_userz00,
		BgL_bgl_za762userza7d2walkza7b1114za7, BGl_z62userzd2walkzb0zzuser_userz00,
		0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzuser_userz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzuser_userz00(long
		BgL_checksumz00_148, char *BgL_fromz00_149)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzuser_userz00))
				{
					BGl_requirezd2initializa7ationz75zzuser_userz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzuser_userz00();
					BGl_libraryzd2moduleszd2initz00zzuser_userz00();
					BGl_cnstzd2initzd2zzuser_userz00();
					BGl_importedzd2moduleszd2initz00zzuser_userz00();
					return BGl_toplevelzd2initzd2zzuser_userz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzuser_userz00()
	{
		{	/* User/user.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"user_user");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"user_user");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"user_user");
			BGl_modulezd2initializa7ationz75zz__evalz00(((long) 0), "user_user");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "user_user");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"user_user");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "user_user");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"user_user");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"user_user");
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long) 0),
				"user_user");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0), "user_user");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "user_user");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzuser_userz00()
	{
		{	/* User/user.scm 15 */
			{	/* User/user.scm 15 */
				obj_t BgL_cportz00_135;

				{	/* User/user.scm 15 */
					obj_t BgL_stringz00_143;

					BgL_stringz00_143 = BGl_string1100z00zzuser_userz00;
					{	/* User/user.scm 15 */
						obj_t BgL_startz00_144;

						BgL_startz00_144 = BINT(((long) 0));
						{	/* User/user.scm 15 */
							obj_t BgL_endz00_145;

							BgL_endz00_145 = BINT(STRING_LENGTH(((obj_t) BgL_stringz00_143)));
							{	/* User/user.scm 15 */

								BgL_cportz00_135 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_143, BgL_startz00_144, BgL_endz00_145);
				}}}}
				{
					long BgL_iz00_136;

					BgL_iz00_136 = ((long) 3);
				BgL_loopz00_137:
					if ((BgL_iz00_136 == ((long) -1)))
						{	/* User/user.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* User/user.scm 15 */
							{	/* User/user.scm 15 */
								obj_t BgL_arg1103z00_139;

								{	/* User/user.scm 15 */

									{	/* User/user.scm 15 */
										obj_t BgL_locationz00_141;

										BgL_locationz00_141 = BBOOL(((bool_t) 0));
										{	/* User/user.scm 15 */

											BgL_arg1103z00_139 =
												BGl_readz00zz__readerz00(BgL_cportz00_135,
												BgL_locationz00_141);
										}
									}
								}
								{	/* User/user.scm 15 */
									int BgL_tmpz00_179;

									BgL_tmpz00_179 = (int) (BgL_iz00_136);
									CNST_TABLE_SET(BgL_tmpz00_179, BgL_arg1103z00_139);
							}}
							{	/* User/user.scm 15 */
								int BgL_auxz00_142;

								BgL_auxz00_142 = (int) ((BgL_iz00_136 - ((long) 1)));
								{
									long BgL_iz00_184;

									BgL_iz00_184 = (long) (BgL_auxz00_142);
									BgL_iz00_136 = BgL_iz00_184;
									goto BgL_loopz00_137;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzuser_userz00()
	{
		{	/* User/user.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzuser_userz00()
	{
		{	/* User/user.scm 15 */
			return BUNSPEC;
		}

	}



/* user-walk */
	BGL_EXPORTED_DEF obj_t BGl_userzd2walkzd2zzuser_userz00(obj_t BgL_unitsz00_25)
	{
		{	/* User/user.scm 27 */
			if (PROCEDUREP(BGl_za2userzd2passza2zd2zz__evalz00))
				{	/* User/user.scm 29 */
					obj_t BgL_unitz00_49;

					BgL_unitz00_49 = BGl_getzd2toplevelzd2unitz00zzmodule_includez00();
					{	/* User/user.scm 30 */
						obj_t BgL_list1039z00_50;

						{	/* User/user.scm 30 */
							obj_t BgL_arg1040z00_51;

							{	/* User/user.scm 30 */
								obj_t BgL_arg1041z00_52;

								BgL_arg1041z00_52 =
									MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
								BgL_arg1040z00_51 =
									MAKE_YOUNG_PAIR(BGl_za2userzd2passzd2nameza2z00zz__evalz00,
									BgL_arg1041z00_52);
							}
							BgL_list1039z00_50 =
								MAKE_YOUNG_PAIR(BGl_string1092z00zzuser_userz00,
								BgL_arg1040z00_51);
						}
						BGl_verbosez00zztools_speekz00(BINT(((long) 1)),
							BgL_list1039z00_50);
					}
					BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 =
						BINT(((long) 0));
					BGl_za2currentzd2passza2zd2zzengine_passz00 =
						BGl_za2userzd2passzd2nameza2z00zz__evalz00;
					{	/* User/user.scm 30 */
						obj_t BgL_g1016z00_53;

						BgL_g1016z00_53 = BNIL;
						{
							obj_t BgL_hooksz00_56;
							obj_t BgL_hnamesz00_57;

							BgL_hooksz00_56 = BgL_g1016z00_53;
							BgL_hnamesz00_57 = BNIL;
						BgL_zc3z04anonymousza31042ze3z87_58:
							if (NULLP(BgL_hooksz00_56))
								{	/* User/user.scm 30 */
									CNST_TABLE_REF(((long) 0));
								}
							else
								{	/* User/user.scm 30 */
									bool_t BgL_test1119z00_200;

									{	/* User/user.scm 30 */
										obj_t BgL_fun1050z00_65;

										BgL_fun1050z00_65 = CAR(((obj_t) BgL_hooksz00_56));
										BgL_test1119z00_200 =
											CBOOL(PROCEDURE_ENTRY(BgL_fun1050z00_65)
											(BgL_fun1050z00_65, BEOA));
									}
									if (BgL_test1119z00_200)
										{	/* User/user.scm 30 */
											obj_t BgL_arg1047z00_62;
											obj_t BgL_arg1048z00_63;

											BgL_arg1047z00_62 = CDR(((obj_t) BgL_hooksz00_56));
											BgL_arg1048z00_63 = CDR(((obj_t) BgL_hnamesz00_57));
											{
												obj_t BgL_hnamesz00_212;
												obj_t BgL_hooksz00_211;

												BgL_hooksz00_211 = BgL_arg1047z00_62;
												BgL_hnamesz00_212 = BgL_arg1048z00_63;
												BgL_hnamesz00_57 = BgL_hnamesz00_212;
												BgL_hooksz00_56 = BgL_hooksz00_211;
												goto BgL_zc3z04anonymousza31042ze3z87_58;
											}
										}
									else
										{	/* User/user.scm 30 */
											obj_t BgL_arg1049z00_64;

											BgL_arg1049z00_64 = CAR(((obj_t) BgL_hnamesz00_57));
											BGl_internalzd2errorzd2zztools_errorz00
												(BGl_za2userzd2passzd2nameza2z00zz__evalz00,
												BGl_string1093z00zzuser_userz00, BgL_arg1049z00_64);
										}
								}
						}
					}
					{	/* User/user.scm 31 */
						bool_t BgL_test1120z00_216;

						{	/* User/user.scm 31 */
							obj_t BgL_tmpz00_217;

							BgL_tmpz00_217 =
								STRUCT_REF(((obj_t) BgL_unitz00_49), (int) (((long) 2)));
							BgL_test1120z00_216 = PROCEDUREP(BgL_tmpz00_217);
						}
						if (BgL_test1120z00_216)
							{	/* User/user.scm 31 */
								CNST_TABLE_REF(((long) 1));
							}
						else
							{	/* User/user.scm 35 */
								obj_t BgL_arg1054z00_70;

								{	/* User/user.scm 35 */
									obj_t BgL_arg1055z00_71;

									BgL_arg1055z00_71 =
										STRUCT_REF(((obj_t) BgL_unitz00_49), (int) (((long) 2)));
									BgL_arg1054z00_70 =
										PROCEDURE_ENTRY(BGl_za2userzd2passza2zd2zz__evalz00)
										(BGl_za2userzd2passza2zd2zz__evalz00, BgL_arg1055z00_71,
										BEOA);
								}
								{	/* User/user.scm 35 */
									int BgL_auxz00_232;
									obj_t BgL_tmpz00_230;

									BgL_auxz00_232 = (int) (((long) 2));
									BgL_tmpz00_230 = ((obj_t) BgL_unitz00_49);
									STRUCT_SET(BgL_tmpz00_230, BgL_auxz00_232, BgL_arg1054z00_70);
					}}}
					{	/* User/user.scm 36 */
						obj_t BgL_valuez00_73;

						BgL_valuez00_73 = CNST_TABLE_REF(((long) 2));
						if (
							((long) CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00)
								> ((long) 0)))
							{	/* User/user.scm 36 */
								{	/* User/user.scm 36 */
									obj_t BgL_port1020z00_75;

									{	/* User/user.scm 36 */
										obj_t BgL_res1087z00_116;

										{	/* User/user.scm 36 */
											obj_t BgL_tmpz00_239;

											BgL_tmpz00_239 = BGL_CURRENT_DYNAMIC_ENV();
											BgL_res1087z00_116 =
												BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_239);
										}
										BgL_port1020z00_75 = BgL_res1087z00_116;
									}
									bgl_display_obj
										(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
										BgL_port1020z00_75);
									bgl_display_string(BGl_string1094z00zzuser_userz00,
										BgL_port1020z00_75);
									{	/* User/user.scm 36 */
										obj_t BgL_arg1058z00_76;

										{	/* User/user.scm 36 */
											bool_t BgL_test1122z00_244;

											if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
												(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
												{	/* User/user.scm 36 */
													if (INTEGERP
														(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
														{	/* User/user.scm 36 */
															BgL_test1122z00_244 =
																(
																(long)
																CINT
																(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00)
																> ((long) 1));
														}
													else
														{	/* User/user.scm 36 */
															BgL_test1122z00_244 =
																BGl_2ze3ze3zz__r4_numbers_6_5z00
																(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
																BINT(((long) 1)));
												}}
											else
												{	/* User/user.scm 36 */
													BgL_test1122z00_244 = ((bool_t) 0);
												}
											if (BgL_test1122z00_244)
												{	/* User/user.scm 36 */
													BgL_arg1058z00_76 = BGl_string1095z00zzuser_userz00;
												}
											else
												{	/* User/user.scm 36 */
													BgL_arg1058z00_76 = BGl_string1096z00zzuser_userz00;
												}
										}
										bgl_display_obj(BgL_arg1058z00_76, BgL_port1020z00_75);
									}
									bgl_display_string(BGl_string1097z00zzuser_userz00,
										BgL_port1020z00_75);
									bgl_display_char(((unsigned char) 10), BgL_port1020z00_75);
								}
								{	/* User/user.scm 36 */
									obj_t BgL_list1062z00_82;

									BgL_list1062z00_82 = MAKE_YOUNG_PAIR(BINT(((long) -1)), BNIL);
									return BGl_exitz00zz__errorz00(BgL_list1062z00_82);
								}
							}
						else
							{	/* User/user.scm 36 */
								obj_t BgL_g1018z00_83;

								BgL_g1018z00_83 = BNIL;
								{
									obj_t BgL_hooksz00_86;
									obj_t BgL_hnamesz00_87;

									BgL_hooksz00_86 = BgL_g1018z00_83;
									BgL_hnamesz00_87 = BNIL;
								BgL_zc3z04anonymousza31063ze3z87_88:
									if (NULLP(BgL_hooksz00_86))
										{	/* User/user.scm 36 */
											return BgL_valuez00_73;
										}
									else
										{	/* User/user.scm 36 */
											bool_t BgL_test1126z00_261;

											{	/* User/user.scm 36 */
												obj_t BgL_fun1079z00_95;

												BgL_fun1079z00_95 = CAR(((obj_t) BgL_hooksz00_86));
												BgL_test1126z00_261 =
													CBOOL(PROCEDURE_ENTRY(BgL_fun1079z00_95)
													(BgL_fun1079z00_95, BEOA));
											}
											if (BgL_test1126z00_261)
												{	/* User/user.scm 36 */
													obj_t BgL_arg1073z00_92;
													obj_t BgL_arg1074z00_93;

													BgL_arg1073z00_92 = CDR(((obj_t) BgL_hooksz00_86));
													BgL_arg1074z00_93 = CDR(((obj_t) BgL_hnamesz00_87));
													{
														obj_t BgL_hnamesz00_273;
														obj_t BgL_hooksz00_272;

														BgL_hooksz00_272 = BgL_arg1073z00_92;
														BgL_hnamesz00_273 = BgL_arg1074z00_93;
														BgL_hnamesz00_87 = BgL_hnamesz00_273;
														BgL_hooksz00_86 = BgL_hooksz00_272;
														goto BgL_zc3z04anonymousza31063ze3z87_88;
													}
												}
											else
												{	/* User/user.scm 36 */
													obj_t BgL_arg1078z00_94;

													BgL_arg1078z00_94 = CAR(((obj_t) BgL_hnamesz00_87));
													return
														BGl_internalzd2errorzd2zztools_errorz00
														(BGl_za2currentzd2passza2zd2zzengine_passz00,
														BGl_string1098z00zzuser_userz00, BgL_arg1078z00_94);
												}
										}
								}
							}
					}
				}
			else
				{	/* User/user.scm 28 */
					return CNST_TABLE_REF(((long) 3));
		}}

	}



/* &user-walk */
	obj_t BGl_z62userzd2walkzb0zzuser_userz00(obj_t BgL_envz00_132,
		obj_t BgL_unitsz00_133)
	{
		{	/* User/user.scm 27 */
			return BGl_userzd2walkzd2zzuser_userz00(BgL_unitsz00_133);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzuser_userz00()
	{
		{	/* User/user.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzuser_userz00()
	{
		{	/* User/user.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzuser_userz00()
	{
		{	/* User/user.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzuser_userz00()
	{
		{	/* User/user.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1099z00zzuser_userz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1099z00zzuser_userz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 373082201),
				BSTRING_TO_STRING(BGl_string1099z00zzuser_userz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1099z00zzuser_userz00));
			return
				BGl_modulezd2initializa7ationz75zzmodule_includez00(((long) 184800297),
				BSTRING_TO_STRING(BGl_string1099z00zzuser_userz00));
		}

	}

#ifdef __cplusplus
}
#endif
