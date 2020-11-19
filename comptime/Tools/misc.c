/*===========================================================================*/
/*   (Tools/misc.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Tools/misc.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_z62epairifyza2zc0zztools_miscz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_epairifyza2za2zztools_miscz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_uncygdrivez00zztools_miscz00(obj_t);
	BGL_IMPORT obj_t BGl_getenvz00zz__osz00(obj_t);
	BGL_IMPORT obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zztools_miscz00();
	BGL_IMPORT bool_t BGl_2zc3zc3zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_z62uncygdrivez62zztools_miscz00(obj_t, obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	static obj_t
		BGl_unixzd2buildzd2pathzd2fromzd2shellzd2variablezd2zztools_miscz00(obj_t);
	static obj_t BGl_z62stringzd2splitzd2charz62zztools_miscz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zztools_miscz00();
	BGL_IMPORT obj_t rgc_buffer_substring(obj_t, long, long);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_ignoreze70ze7zztools_miscz00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zztools_miscz00();
	BGL_EXPORTED_DECL obj_t BGl_epairifyzd2reczd2zztools_miscz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_stringza2zd2ze3stringz93zztools_miscz00(obj_t);
	BGL_IMPORT obj_t c_substring(obj_t, long, long);
	static obj_t BGl_normaliza7ezd2mingwzd2pathze70z40zztools_miscz00(obj_t);
	BGL_IMPORT bool_t BGl_za7erozf3z54zz__r4_numbers_6_5z00(obj_t);
	static obj_t BGl_z62epairifyz62zztools_miscz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_exitdzd2popzd2protectz12z12zz__bexitz00(obj_t);
	static obj_t BGl_loopze70ze7zztools_miscz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_stringzd2splitzd2charz00zztools_miscz00(obj_t,
		obj_t);
	static obj_t
		BGl_mingwzd2buildzd2pathzd2fromzd2shellzd2variablezd2zztools_miscz00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zztools_miscz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_epairifyz00zztools_miscz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_reverse(obj_t);
	static obj_t BGl_genericzd2initzd2zztools_miscz00();
	BGL_IMPORT obj_t BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(obj_t, obj_t);
	static obj_t BGl_z62epairifyzd2reczb0zztools_miscz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_z62replacez12z70zztools_miscz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t bgl_close_input_port(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_epairifyzd2propagatezd2locz00zztools_miscz00(obj_t, obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	static obj_t BGl_z62epairifyzd2propagatezb0zztools_miscz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT bool_t bigloo_strncmp(obj_t, obj_t, long);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_replacez12z12zztools_miscz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__rgcz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t
		BGl_z62buildzd2pathzd2fromzd2shellzd2variablez62zztools_miscz00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31463ze3ze5zztools_miscz00(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zztools_miscz00();
	static obj_t BGl_z62epairifyzd2propagatezd2locz62zztools_miscz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62stringza2zd2ze3stringzf1zztools_miscz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_buildzd2pathzd2fromzd2shellzd2variablez00zztools_miscz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_epairifyzd2propagatezd2zztools_miscz00(obj_t,
		obj_t);
	BGL_IMPORT bool_t rgc_fill_buffer(obj_t);
	BGL_IMPORT bool_t BGl_2ze3zd3z30zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringza2zd2ze3stringzd2envz41zztools_miscz00,
		BgL_bgl_za762stringza7a2za7d2za71668z00,
		BGl_z62stringza2zd2ze3stringzf1zztools_miscz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_replacez12zd2envzc0zztools_miscz00,
		BgL_bgl_za762replaceza712za7701669za7, BGl_z62replacez12z70zztools_miscz00,
		0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1659z00zztools_miscz00,
		BgL_bgl_string1659za700za7za7t1670za7, " ", 1);
	      DEFINE_STRING(BGl_string1660z00zztools_miscz00,
		BgL_bgl_string1660za700za7za7t1671za7, "", 0);
	      DEFINE_STRING(BGl_string1661z00zztools_miscz00,
		BgL_bgl_string1661za700za7za7t1672za7, "mingw", 5);
	      DEFINE_STRING(BGl_string1662z00zztools_miscz00,
		BgL_bgl_string1662za700za7za7t1673za7, ":/", 2);
	      DEFINE_STRING(BGl_string1663z00zztools_miscz00,
		BgL_bgl_string1663za700za7za7t1674za7, "regular-grammar", 15);
	      DEFINE_STRING(BGl_string1664z00zztools_miscz00,
		BgL_bgl_string1664za700za7za7t1675za7, "Illegal match", 13);
	      DEFINE_STRING(BGl_string1665z00zztools_miscz00,
		BgL_bgl_string1665za700za7za7t1676za7, "/cygdrive/", 10);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_epairifyzd2propagatezd2loczd2envzd2zztools_miscz00,
		BgL_bgl_za762epairifyza7d2pr1677z00,
		BGl_z62epairifyzd2propagatezd2locz62zztools_miscz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_uncygdrivezd2envzd2zztools_miscz00,
		BgL_bgl_za762uncygdriveza7621678z00, BGl_z62uncygdrivez62zztools_miscz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_buildzd2pathzd2fromzd2shellzd2variablezd2envzd2zztools_miscz00,
		BgL_bgl_za762buildza7d2pathza71679za7,
		BGl_z62buildzd2pathzd2fromzd2shellzd2variablez62zztools_miscz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_epairifyzd2envzd2zztools_miscz00,
		BgL_bgl_za762epairifyza762za7za71680z00, BGl_z62epairifyz62zztools_miscz00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2splitzd2charzd2envzd2zztools_miscz00,
		BgL_bgl_za762stringza7d2spli1681z00,
		BGl_z62stringzd2splitzd2charz62zztools_miscz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_epairifyza2zd2envz70zztools_miscz00,
		BgL_bgl_za762epairifyza7a2za7c1682za7, va_generic_entry,
		BGl_z62epairifyza2zc0zztools_miscz00, BUNSPEC, -2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_epairifyzd2reczd2envz00zztools_miscz00,
		BgL_bgl_za762epairifyza7d2re1683z00,
		BGl_z62epairifyzd2reczb0zztools_miscz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_epairifyzd2propagatezd2envz00zztools_miscz00,
		BgL_bgl_za762epairifyza7d2pr1684z00,
		BGl_z62epairifyzd2propagatezb0zztools_miscz00, 0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zztools_miscz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long
		BgL_checksumz00_750, char *BgL_fromz00_751)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zztools_miscz00))
				{
					BGl_requirezd2initializa7ationz75zztools_miscz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zztools_miscz00();
					BGl_libraryzd2moduleszd2initz00zztools_miscz00();
					return BGl_methodzd2initzd2zztools_miscz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zztools_miscz00()
	{
		{	/* Tools/misc.scm 15 */
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "tools_misc");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"tools_misc");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "tools_misc");
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 0), "tools_misc");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"tools_misc");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"tools_misc");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"tools_misc");
			BGl_modulezd2initializa7ationz75zz__rgcz00(((long) 0), "tools_misc");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"tools_misc");
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long) 0),
				"tools_misc");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "tools_misc");
			return BUNSPEC;
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zztools_miscz00()
	{
		{	/* Tools/misc.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* string*->string */
	BGL_EXPORTED_DEF obj_t BGl_stringza2zd2ze3stringz93zztools_miscz00(obj_t
		BgL_lz00_3)
	{
		{	/* Tools/misc.scm 30 */
			{	/* Tools/misc.scm 31 */
				obj_t BgL_g1012z00_30;

				BgL_g1012z00_30 = bgl_reverse(BgL_lz00_3);
				{
					obj_t BgL_lz00_32;
					obj_t BgL_rz00_33;

					BgL_lz00_32 = BgL_g1012z00_30;
					BgL_rz00_33 = BGl_string1660z00zztools_miscz00;
				BgL_zc3z04anonymousza31037ze3z87_34:
					if (NULLP(BgL_lz00_32))
						{	/* Tools/misc.scm 33 */
							return BgL_rz00_33;
						}
					else
						{	/* Tools/misc.scm 35 */
							obj_t BgL_arg1039z00_36;
							obj_t BgL_arg1040z00_37;

							BgL_arg1039z00_36 = CDR(((obj_t) BgL_lz00_32));
							{	/* Tools/misc.scm 36 */
								obj_t BgL_arg1041z00_38;

								BgL_arg1041z00_38 = CAR(((obj_t) BgL_lz00_32));
								BgL_arg1040z00_37 =
									string_append_3(BgL_arg1041z00_38,
									BGl_string1659z00zztools_miscz00, BgL_rz00_33);
							}
							{
								obj_t BgL_rz00_779;
								obj_t BgL_lz00_778;

								BgL_lz00_778 = BgL_arg1039z00_36;
								BgL_rz00_779 = BgL_arg1040z00_37;
								BgL_rz00_33 = BgL_rz00_779;
								BgL_lz00_32 = BgL_lz00_778;
								goto BgL_zc3z04anonymousza31037ze3z87_34;
							}
						}
				}
			}
		}

	}



/* &string*->string */
	obj_t BGl_z62stringza2zd2ze3stringzf1zztools_miscz00(obj_t BgL_envz00_714,
		obj_t BgL_lz00_715)
	{
		{	/* Tools/misc.scm 30 */
			return BGl_stringza2zd2ze3stringz93zztools_miscz00(BgL_lz00_715);
		}

	}



/* replace! */
	BGL_EXPORTED_DEF obj_t BGl_replacez12z12zztools_miscz00(obj_t BgL_p1z00_4,
		obj_t BgL_p2z00_5)
	{
		{	/* Tools/misc.scm 41 */
			{	/* Tools/misc.scm 42 */
				bool_t BgL_test1687z00_781;

				if (PAIRP(BgL_p1z00_4))
					{	/* Tools/misc.scm 42 */
						if (PAIRP(BgL_p2z00_5))
							{	/* Tools/misc.scm 42 */
								bool_t BgL_test1690z00_786;

								{	/* Tools/misc.scm 42 */
									bool_t BgL_res1557z00_469;

									BgL_res1557z00_469 = EPAIRP(BgL_p2z00_5);
									BgL_test1690z00_786 = BgL_res1557z00_469;
								}
								if (BgL_test1690z00_786)
									{	/* Tools/misc.scm 42 */
										BgL_test1687z00_781 = ((bool_t) 0);
									}
								else
									{	/* Tools/misc.scm 42 */
										BgL_test1687z00_781 = ((bool_t) 1);
									}
							}
						else
							{	/* Tools/misc.scm 42 */
								BgL_test1687z00_781 = ((bool_t) 0);
							}
					}
				else
					{	/* Tools/misc.scm 42 */
						BgL_test1687z00_781 = ((bool_t) 0);
					}
				if (BgL_test1687z00_781)
					{	/* Tools/misc.scm 42 */
						{	/* Tools/misc.scm 44 */
							obj_t BgL_tmpz00_788;

							BgL_tmpz00_788 = CAR(BgL_p2z00_5);
							SET_CAR(BgL_p1z00_4, BgL_tmpz00_788);
						}
						{	/* Tools/misc.scm 45 */
							obj_t BgL_tmpz00_791;

							BgL_tmpz00_791 = CDR(BgL_p2z00_5);
							SET_CDR(BgL_p1z00_4, BgL_tmpz00_791);
						}
						return BgL_p1z00_4;
					}
				else
					{	/* Tools/misc.scm 42 */
						return BgL_p2z00_5;
					}
			}
		}

	}



/* &replace! */
	obj_t BGl_z62replacez12z70zztools_miscz00(obj_t BgL_envz00_716,
		obj_t BgL_p1z00_717, obj_t BgL_p2z00_718)
	{
		{	/* Tools/misc.scm 41 */
			return BGl_replacez12z12zztools_miscz00(BgL_p1z00_717, BgL_p2z00_718);
		}

	}



/* string-split-char */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2splitzd2charz00zztools_miscz00(obj_t
		BgL_strz00_6, obj_t BgL_separatorz00_7)
	{
		{	/* Tools/misc.scm 52 */
		BGl_stringzd2splitzd2charz00zztools_miscz00:
			{	/* Tools/misc.scm 53 */
				long BgL_strzd2lengthzd2_49;

				BgL_strzd2lengthzd2_49 = STRING_LENGTH(BgL_strz00_6);
				if ((BgL_strzd2lengthzd2_49 == ((long) 0)))
					{	/* Tools/misc.scm 54 */
						return BNIL;
					}
				else
					{
						obj_t BgL_iz00_52;

						BgL_iz00_52 = BINT(((long) 0));
					BgL_zc3z04anonymousza31050ze3z87_53:
						if (BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_iz00_52,
								BINT(BgL_strzd2lengthzd2_49)))
							{	/* Tools/misc.scm 58 */
								obj_t BgL_list1052z00_55;

								BgL_list1052z00_55 = MAKE_YOUNG_PAIR(BgL_strz00_6, BNIL);
								return BgL_list1052z00_55;
							}
						else
							{	/* Tools/misc.scm 57 */
								if (
									(STRING_REF(BgL_strz00_6,
											(long) CINT(BgL_iz00_52)) == CCHAR(BgL_separatorz00_7)))
									{	/* Tools/misc.scm 59 */
										if (BGl_za7erozf3z54zz__r4_numbers_6_5z00(BgL_iz00_52))
											{
												obj_t BgL_strz00_809;

												BgL_strz00_809 =
													c_substring(BgL_strz00_6, ((long) 1),
													BgL_strzd2lengthzd2_49);
												BgL_strz00_6 = BgL_strz00_809;
												goto BGl_stringzd2splitzd2charz00zztools_miscz00;
											}
										else
											{	/* Tools/misc.scm 63 */
												obj_t BgL_arg1057z00_60;
												obj_t BgL_arg1058z00_61;

												BgL_arg1057z00_60 =
													c_substring(BgL_strz00_6, ((long) 0),
													(long) CINT(BgL_iz00_52));
												{	/* Tools/misc.scm 65 */
													obj_t BgL_arg1059z00_62;

													{	/* Tools/misc.scm 65 */
														obj_t BgL_arg1060z00_63;

														if (INTEGERP(BgL_iz00_52))
															{	/* Tools/misc.scm 65 */
																long BgL_tmpz00_815;

																BgL_tmpz00_815 = (long) CINT(BgL_iz00_52);
																BgL_arg1060z00_63 =
																	BGL_SAFE_PLUS_FX(BgL_tmpz00_815, ((long) 1));
															}
														else
															{	/* Tools/misc.scm 65 */
																BgL_arg1060z00_63 =
																	BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_52,
																	BINT(((long) 1)));
															}
														BgL_arg1059z00_62 =
															c_substring(BgL_strz00_6,
															(long) CINT(BgL_arg1060z00_63),
															BgL_strzd2lengthzd2_49);
													}
													BgL_arg1058z00_61 =
														BGl_stringzd2splitzd2charz00zztools_miscz00
														(BgL_arg1059z00_62, BgL_separatorz00_7);
												}
												return
													MAKE_YOUNG_PAIR(BgL_arg1057z00_60, BgL_arg1058z00_61);
											}
									}
								else
									{	/* Tools/misc.scm 68 */
										obj_t BgL_arg1062z00_65;

										if (INTEGERP(BgL_iz00_52))
											{	/* Tools/misc.scm 68 */
												long BgL_tmpz00_826;

												BgL_tmpz00_826 = (long) CINT(BgL_iz00_52);
												BgL_arg1062z00_65 =
													BGL_SAFE_PLUS_FX(BgL_tmpz00_826, ((long) 1));
											}
										else
											{	/* Tools/misc.scm 68 */
												BgL_arg1062z00_65 =
													BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_52,
													BINT(((long) 1)));
											}
										{
											obj_t BgL_iz00_831;

											BgL_iz00_831 = BgL_arg1062z00_65;
											BgL_iz00_52 = BgL_iz00_831;
											goto BgL_zc3z04anonymousza31050ze3z87_53;
										}
									}
							}
					}
			}
		}

	}



/* &string-split-char */
	obj_t BGl_z62stringzd2splitzd2charz62zztools_miscz00(obj_t BgL_envz00_719,
		obj_t BgL_strz00_720, obj_t BgL_separatorz00_721)
	{
		{	/* Tools/misc.scm 52 */
			return
				BGl_stringzd2splitzd2charz00zztools_miscz00(BgL_strz00_720,
				BgL_separatorz00_721);
		}

	}



/* epairify */
	BGL_EXPORTED_DEF obj_t BGl_epairifyz00zztools_miscz00(obj_t BgL_pairz00_8,
		obj_t BgL_epairz00_9)
	{
		{	/* Tools/misc.scm 78 */
			{	/* Tools/misc.scm 79 */
				bool_t BgL_test1697z00_834;

				{	/* Tools/misc.scm 79 */
					bool_t BgL_res1567z00_495;

					BgL_res1567z00_495 = EPAIRP(BgL_epairz00_9);
					BgL_test1697z00_834 = BgL_res1567z00_495;
				}
				if (BgL_test1697z00_834)
					{	/* Tools/misc.scm 80 */
						obj_t BgL_arg1073z00_70;
						obj_t BgL_arg1074z00_71;
						obj_t BgL_arg1078z00_72;

						BgL_arg1073z00_70 = CAR(BgL_pairz00_8);
						BgL_arg1074z00_71 = CDR(BgL_pairz00_8);
						BgL_arg1078z00_72 = CER(((obj_t) BgL_epairz00_9));
						{	/* Tools/misc.scm 80 */
							obj_t BgL_res1568z00_499;

							BgL_res1568z00_499 =
								MAKE_YOUNG_EPAIR(BgL_arg1073z00_70, BgL_arg1074z00_71,
								BgL_arg1078z00_72);
							return BgL_res1568z00_499;
						}
					}
				else
					{	/* Tools/misc.scm 79 */
						return BgL_pairz00_8;
					}
			}
		}

	}



/* &epairify */
	obj_t BGl_z62epairifyz62zztools_miscz00(obj_t BgL_envz00_722,
		obj_t BgL_pairz00_723, obj_t BgL_epairz00_724)
	{
		{	/* Tools/misc.scm 78 */
			return BGl_epairifyz00zztools_miscz00(BgL_pairz00_723, BgL_epairz00_724);
		}

	}



/* epairify-rec */
	BGL_EXPORTED_DEF obj_t BGl_epairifyzd2reczd2zztools_miscz00(obj_t BgL_pz00_10,
		obj_t BgL_epz00_11)
	{
		{	/* Tools/misc.scm 88 */
			if (PAIRP(BgL_pz00_10))
				{	/* Tools/misc.scm 92 */
					bool_t BgL_test1699z00_844;

					{	/* Tools/misc.scm 92 */
						bool_t BgL_res1570z00_501;

						BgL_res1570z00_501 = EPAIRP(BgL_epz00_11);
						BgL_test1699z00_844 = BgL_res1570z00_501;
					}
					if (BgL_test1699z00_844)
						{	/* Tools/misc.scm 94 */
							bool_t BgL_test1700z00_846;

							{	/* Tools/misc.scm 94 */
								bool_t BgL_res1571z00_502;

								BgL_res1571z00_502 = EPAIRP(BgL_pz00_10);
								BgL_test1700z00_846 = BgL_res1571z00_502;
							}
							if (BgL_test1700z00_846)
								{	/* Tools/misc.scm 94 */
									return BgL_pz00_10;
								}
							else
								{	/* Tools/misc.scm 97 */
									obj_t BgL_arg1095z00_76;
									obj_t BgL_arg1099z00_77;
									obj_t BgL_arg1100z00_78;

									{	/* Tools/misc.scm 97 */
										obj_t BgL_arg1101z00_79;
										obj_t BgL_arg1103z00_80;

										BgL_arg1101z00_79 = CAR(BgL_pz00_10);
										BgL_arg1103z00_80 = CAR(((obj_t) BgL_epz00_11));
										BgL_arg1095z00_76 =
											BGl_epairifyzd2reczd2zztools_miscz00(BgL_arg1101z00_79,
											BgL_arg1103z00_80);
									}
									{	/* Tools/misc.scm 98 */
										obj_t BgL_arg1109z00_81;
										obj_t BgL_arg1110z00_82;

										BgL_arg1109z00_81 = CDR(BgL_pz00_10);
										BgL_arg1110z00_82 = CDR(((obj_t) BgL_epz00_11));
										BgL_arg1099z00_77 =
											BGl_epairifyzd2reczd2zztools_miscz00(BgL_arg1109z00_81,
											BgL_arg1110z00_82);
									}
									BgL_arg1100z00_78 = CER(((obj_t) BgL_epz00_11));
									{	/* Tools/misc.scm 97 */
										obj_t BgL_res1572z00_508;

										BgL_res1572z00_508 =
											MAKE_YOUNG_EPAIR(BgL_arg1095z00_76, BgL_arg1099z00_77,
											BgL_arg1100z00_78);
										return BgL_res1572z00_508;
									}
								}
						}
					else
						{	/* Tools/misc.scm 92 */
							return BgL_pz00_10;
						}
				}
			else
				{	/* Tools/misc.scm 90 */
					return BgL_pz00_10;
				}
		}

	}



/* &epairify-rec */
	obj_t BGl_z62epairifyzd2reczb0zztools_miscz00(obj_t BgL_envz00_725,
		obj_t BgL_pz00_726, obj_t BgL_epz00_727)
	{
		{	/* Tools/misc.scm 88 */
			return BGl_epairifyzd2reczd2zztools_miscz00(BgL_pz00_726, BgL_epz00_727);
		}

	}



/* epairify-propagate */
	BGL_EXPORTED_DEF obj_t BGl_epairifyzd2propagatezd2zztools_miscz00(obj_t
		BgL_pz00_12, obj_t BgL_epz00_13)
	{
		{	/* Tools/misc.scm 106 */
			{	/* Tools/misc.scm 107 */
				bool_t BgL_test1701z00_860;

				{	/* Tools/misc.scm 107 */
					bool_t BgL_res1573z00_511;

					BgL_res1573z00_511 = EPAIRP(BgL_epz00_13);
					BgL_test1701z00_860 = BgL_res1573z00_511;
				}
				if (BgL_test1701z00_860)
					{	/* Tools/misc.scm 109 */
						obj_t BgL_arg1113z00_510;

						BgL_arg1113z00_510 = CER(((obj_t) BgL_epz00_13));
						return
							BGl_loopze70ze7zztools_miscz00(BgL_arg1113z00_510, BgL_pz00_12);
					}
				else
					{	/* Tools/misc.scm 107 */
						return BgL_pz00_12;
					}
			}
		}

	}



/* &epairify-propagate */
	obj_t BGl_z62epairifyzd2propagatezb0zztools_miscz00(obj_t BgL_envz00_728,
		obj_t BgL_pz00_729, obj_t BgL_epz00_730)
	{
		{	/* Tools/misc.scm 106 */
			return
				BGl_epairifyzd2propagatezd2zztools_miscz00(BgL_pz00_729, BgL_epz00_730);
		}

	}



/* epairify-propagate-loc */
	BGL_EXPORTED_DEF obj_t BGl_epairifyzd2propagatezd2locz00zztools_miscz00(obj_t
		BgL_pz00_14, obj_t BgL_locz00_15)
	{
		{	/* Tools/misc.scm 116 */
			return BGl_loopze70ze7zztools_miscz00(BgL_locz00_15, BgL_pz00_14);
		}

	}



/* loop~0 */
	obj_t BGl_loopze70ze7zztools_miscz00(obj_t BgL_locz00_745, obj_t BgL_pz00_86)
	{
		{	/* Tools/misc.scm 117 */
			if (PAIRP(BgL_pz00_86))
				{	/* Tools/misc.scm 121 */
					bool_t BgL_test1703z00_869;

					{	/* Tools/misc.scm 121 */
						bool_t BgL_res1575z00_514;

						BgL_res1575z00_514 = EPAIRP(BgL_pz00_86);
						BgL_test1703z00_869 = BgL_res1575z00_514;
					}
					if (BgL_test1703z00_869)
						{	/* Tools/misc.scm 121 */
							return BgL_pz00_86;
						}
					else
						{	/* Tools/misc.scm 124 */
							obj_t BgL_arg1117z00_90;
							obj_t BgL_arg1118z00_91;

							BgL_arg1117z00_90 =
								BGl_loopze70ze7zztools_miscz00(BgL_locz00_745,
								CAR(BgL_pz00_86));
							BgL_arg1118z00_91 =
								BGl_loopze70ze7zztools_miscz00(BgL_locz00_745,
								CDR(BgL_pz00_86));
							{	/* Tools/misc.scm 124 */
								obj_t BgL_res1576z00_517;

								BgL_res1576z00_517 =
									MAKE_YOUNG_EPAIR(BgL_arg1117z00_90, BgL_arg1118z00_91,
									BgL_locz00_745);
								return BgL_res1576z00_517;
							}
						}
				}
			else
				{	/* Tools/misc.scm 119 */
					return BgL_pz00_86;
				}
		}

	}



/* &epairify-propagate-loc */
	obj_t BGl_z62epairifyzd2propagatezd2locz62zztools_miscz00(obj_t
		BgL_envz00_731, obj_t BgL_pz00_732, obj_t BgL_locz00_733)
	{
		{	/* Tools/misc.scm 116 */
			return
				BGl_epairifyzd2propagatezd2locz00zztools_miscz00(BgL_pz00_732,
				BgL_locz00_733);
		}

	}



/* epairify* */
	BGL_EXPORTED_DEF obj_t BGl_epairifyza2za2zztools_miscz00(obj_t BgL_defz00_16,
		obj_t BgL_srcsz00_17)
	{
		{	/* Tools/misc.scm 129 */
			{
				obj_t BgL_srcsz00_96;

				BgL_srcsz00_96 = BgL_srcsz00_17;
			BgL_zc3z04anonymousza31123ze3z87_97:
				if (NULLP(BgL_srcsz00_96))
					{	/* Tools/misc.scm 132 */
						return BgL_defz00_16;
					}
				else
					{	/* Tools/misc.scm 134 */
						bool_t BgL_test1706z00_879;

						{	/* Tools/misc.scm 134 */
							obj_t BgL_arg1140z00_106;

							BgL_arg1140z00_106 = CAR(((obj_t) BgL_srcsz00_96));
							{	/* Tools/misc.scm 134 */
								bool_t BgL_res1578z00_520;

								BgL_res1578z00_520 = EPAIRP(BgL_arg1140z00_106);
								BgL_test1706z00_879 = BgL_res1578z00_520;
							}
						}
						if (BgL_test1706z00_879)
							{	/* Tools/misc.scm 135 */
								obj_t BgL_arg1127z00_101;
								obj_t BgL_arg1128z00_102;
								obj_t BgL_arg1129z00_103;

								BgL_arg1127z00_101 = CAR(((obj_t) BgL_defz00_16));
								BgL_arg1128z00_102 = CDR(((obj_t) BgL_defz00_16));
								{	/* Tools/misc.scm 135 */
									obj_t BgL_objz00_524;

									BgL_objz00_524 = CAR(((obj_t) BgL_srcsz00_96));
									BgL_arg1129z00_103 = CER(BgL_objz00_524);
								}
								{	/* Tools/misc.scm 135 */
									obj_t BgL_res1579z00_525;

									BgL_res1579z00_525 =
										MAKE_YOUNG_EPAIR(BgL_arg1127z00_101, BgL_arg1128z00_102,
										BgL_arg1129z00_103);
									return BgL_res1579z00_525;
								}
							}
						else
							{	/* Tools/misc.scm 137 */
								obj_t BgL_arg1134z00_105;

								BgL_arg1134z00_105 = CDR(((obj_t) BgL_srcsz00_96));
								{
									obj_t BgL_srcsz00_893;

									BgL_srcsz00_893 = BgL_arg1134z00_105;
									BgL_srcsz00_96 = BgL_srcsz00_893;
									goto BgL_zc3z04anonymousza31123ze3z87_97;
								}
							}
					}
			}
		}

	}



/* &epairify* */
	obj_t BGl_z62epairifyza2zc0zztools_miscz00(obj_t BgL_envz00_734,
		obj_t BgL_defz00_735, obj_t BgL_srcsz00_736)
	{
		{	/* Tools/misc.scm 129 */
			return BGl_epairifyza2za2zztools_miscz00(BgL_defz00_735, BgL_srcsz00_736);
		}

	}



/* build-path-from-shell-variable */
	BGL_EXPORTED_DEF obj_t
		BGl_buildzd2pathzd2fromzd2shellzd2variablez00zztools_miscz00(obj_t
		BgL_varz00_18)
	{
		{	/* Tools/misc.scm 142 */
			{	/* Tools/misc.scm 143 */
				bool_t BgL_test1707z00_895;

				{	/* Tools/misc.scm 143 */
					bool_t BgL_res1584z00_542;

					{	/* Tools/misc.scm 143 */
						obj_t BgL_string1z00_527;

						BgL_string1z00_527 = string_to_bstring(OS_CLASS);
						{	/* Tools/misc.scm 143 */
							long BgL_l1z00_529;

							BgL_l1z00_529 = STRING_LENGTH(BgL_string1z00_527);
							if ((BgL_l1z00_529 == ((long) 5)))
								{	/* Tools/misc.scm 143 */
									int BgL_arg1267z00_532;

									{	/* Tools/misc.scm 143 */
										char *BgL_auxz00_902;
										char *BgL_tmpz00_900;

										BgL_auxz00_902 =
											BSTRING_TO_STRING(BGl_string1661z00zztools_miscz00);
										BgL_tmpz00_900 = BSTRING_TO_STRING(BgL_string1z00_527);
										BgL_arg1267z00_532 =
											memcmp(BgL_tmpz00_900, BgL_auxz00_902, BgL_l1z00_529);
									}
									BgL_res1584z00_542 =
										((long) (BgL_arg1267z00_532) == ((long) 0));
								}
							else
								{	/* Tools/misc.scm 143 */
									BgL_res1584z00_542 = ((bool_t) 0);
								}
						}
					}
					BgL_test1707z00_895 = BgL_res1584z00_542;
				}
				if (BgL_test1707z00_895)
					{	/* Tools/misc.scm 143 */
						return
							BGl_mingwzd2buildzd2pathzd2fromzd2shellzd2variablezd2zztools_miscz00
							(BgL_varz00_18);
					}
				else
					{	/* Tools/misc.scm 143 */
						return
							BGl_unixzd2buildzd2pathzd2fromzd2shellzd2variablezd2zztools_miscz00
							(BgL_varz00_18);
					}
			}
		}

	}



/* &build-path-from-shell-variable */
	obj_t BGl_z62buildzd2pathzd2fromzd2shellzd2variablez62zztools_miscz00(obj_t
		BgL_envz00_737, obj_t BgL_varz00_738)
	{
		{	/* Tools/misc.scm 142 */
			return
				BGl_buildzd2pathzd2fromzd2shellzd2variablez00zztools_miscz00
				(BgL_varz00_738);
		}

	}



/* mingw-build-path-from-shell-variable */
	obj_t
		BGl_mingwzd2buildzd2pathzd2fromzd2shellzd2variablezd2zztools_miscz00(obj_t
		BgL_varz00_19)
	{
		{	/* Tools/misc.scm 150 */
			{	/* Tools/misc.scm 163 */
				obj_t BgL_valz00_112;
				obj_t BgL_resz00_113;

				BgL_valz00_112 = BGl_getenvz00zz__osz00(BgL_varz00_19);
				BgL_resz00_113 = BNIL;
				if (STRINGP(BgL_valz00_112))
					{	/* Tools/misc.scm 167 */
						long BgL_nz00_115;
						obj_t BgL_kz00_116;

						BgL_nz00_115 = STRING_LENGTH(BgL_valz00_112);
						BgL_kz00_116 = BINT(((long) 0));
						{
							obj_t BgL_iz00_146;

							{
								obj_t BgL_iz00_119;

								BgL_iz00_119 = BINT(((long) 0));
							BgL_zc3z04anonymousza31157ze3z87_120:
								if (BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_iz00_119,
										BINT(BgL_nz00_115)))
									{	/* Tools/misc.scm 178 */
										obj_t BgL_l1025z00_122;

										{	/* Tools/misc.scm 179 */
											obj_t BgL_arg1172z00_138;

											{	/* Tools/misc.scm 179 */
												obj_t BgL_arg1174z00_139;

												{	/* Tools/misc.scm 179 */
													obj_t BgL_res1606z00_591;

													{	/* Tools/misc.scm 179 */
														long BgL_startz00_589;
														long BgL_endz00_590;

														BgL_startz00_589 = (long) CINT(BgL_kz00_116);
														BgL_endz00_590 = (long) CINT(BgL_iz00_119);
														BgL_res1606z00_591 =
															c_substring(
															((obj_t) BgL_valz00_112), BgL_startz00_589,
															BgL_endz00_590);
													}
													BgL_arg1174z00_139 = BgL_res1606z00_591;
												}
												BgL_arg1172z00_138 =
													MAKE_YOUNG_PAIR(BgL_arg1174z00_139, BgL_resz00_113);
											}
											BgL_l1025z00_122 = bgl_reverse(BgL_arg1172z00_138);
										}
										if (NULLP(BgL_l1025z00_122))
											{	/* Tools/misc.scm 178 */
												return BNIL;
											}
										else
											{	/* Tools/misc.scm 178 */
												obj_t BgL_head1027z00_124;

												{	/* Tools/misc.scm 178 */
													obj_t BgL_arg1169z00_136;

													BgL_arg1169z00_136 =
														BGl_normaliza7ezd2mingwzd2pathze70z40zztools_miscz00
														(CAR(BgL_l1025z00_122));
													{	/* Tools/misc.scm 178 */
														obj_t BgL_res1608z00_594;

														BgL_res1608z00_594 =
															MAKE_YOUNG_PAIR(BgL_arg1169z00_136, BNIL);
														BgL_head1027z00_124 = BgL_res1608z00_594;
													}
												}
												{	/* Tools/misc.scm 178 */
													obj_t BgL_g1030z00_125;

													BgL_g1030z00_125 = CDR(BgL_l1025z00_122);
													{
														obj_t BgL_l1025z00_127;
														obj_t BgL_tail1028z00_128;

														BgL_l1025z00_127 = BgL_g1030z00_125;
														BgL_tail1028z00_128 = BgL_head1027z00_124;
													BgL_zc3z04anonymousza31160ze3z87_129:
														if (NULLP(BgL_l1025z00_127))
															{	/* Tools/misc.scm 178 */
																return BgL_head1027z00_124;
															}
														else
															{	/* Tools/misc.scm 178 */
																obj_t BgL_newtail1029z00_131;

																{	/* Tools/misc.scm 178 */
																	obj_t BgL_arg1166z00_133;

																	{	/* Tools/misc.scm 178 */
																		obj_t BgL_arg1167z00_134;

																		BgL_arg1167z00_134 =
																			CAR(((obj_t) BgL_l1025z00_127));
																		BgL_arg1166z00_133 =
																			BGl_normaliza7ezd2mingwzd2pathze70z40zztools_miscz00
																			(BgL_arg1167z00_134);
																	}
																	{	/* Tools/misc.scm 178 */
																		obj_t BgL_res1610z00_598;

																		BgL_res1610z00_598 =
																			MAKE_YOUNG_PAIR(BgL_arg1166z00_133, BNIL);
																		BgL_newtail1029z00_131 = BgL_res1610z00_598;
																	}
																}
																SET_CDR(BgL_tail1028z00_128,
																	BgL_newtail1029z00_131);
																{	/* Tools/misc.scm 178 */
																	obj_t BgL_arg1165z00_132;

																	BgL_arg1165z00_132 =
																		CDR(((obj_t) BgL_l1025z00_127));
																	{
																		obj_t BgL_tail1028z00_940;
																		obj_t BgL_l1025z00_939;

																		BgL_l1025z00_939 = BgL_arg1165z00_132;
																		BgL_tail1028z00_940 =
																			BgL_newtail1029z00_131;
																		BgL_tail1028z00_128 = BgL_tail1028z00_940;
																		BgL_l1025z00_127 = BgL_l1025z00_939;
																		goto BgL_zc3z04anonymousza31160ze3z87_129;
																	}
																}
															}
													}
												}
											}
									}
								else
									{	/* Tools/misc.scm 177 */
										{	/* Tools/misc.scm 180 */
											bool_t BgL_test1714z00_941;

											BgL_iz00_146 = BgL_iz00_119;
											if (
												(STRING_REF(
														((obj_t) BgL_valz00_112),
														(long) CINT(BgL_iz00_146)) ==
													((unsigned char) ':')))
												{	/* Tools/misc.scm 171 */
													bool_t BgL_test1716z00_947;

													{	/* Tools/misc.scm 171 */
														obj_t BgL_arg1229z00_171;

														BgL_arg1229z00_171 =
															BGL_SAFE_MINUS_FX(BgL_nz00_115, ((long) 1));
														BgL_test1716z00_947 =
															BGl_2zc3zc3zz__r4_numbers_6_5z00(BgL_iz00_146,
															BgL_arg1229z00_171);
													}
													if (BgL_test1716z00_947)
														{	/* Tools/misc.scm 172 */
															bool_t BgL_test1718z00_950;

															{	/* Tools/misc.scm 173 */
																bool_t BgL_test1720z00_951;

																{	/* Tools/misc.scm 173 */
																	unsigned char BgL_arg1225z00_168;

																	{	/* Tools/misc.scm 173 */
																		obj_t BgL_arg1227z00_169;

																		if (INTEGERP(BgL_iz00_146))
																			{	/* Tools/misc.scm 173 */
																				long BgL_tmpz00_954;

																				BgL_tmpz00_954 =
																					(long) CINT(BgL_iz00_146);
																				BgL_arg1227z00_169 =
																					BGL_SAFE_PLUS_FX(BgL_tmpz00_954,
																					((long) 1));
																			}
																		else
																			{	/* Tools/misc.scm 173 */
																				BgL_arg1227z00_169 =
																					BGl_2zb2zb2zz__r4_numbers_6_5z00
																					(BgL_iz00_146, BINT(((long) 1)));
																			}
																		BgL_arg1225z00_168 =
																			STRING_REF(
																			((obj_t) BgL_valz00_112),
																			(long) CINT(BgL_arg1227z00_169));
																	}
																	BgL_test1720z00_951 =
																		(BgL_arg1225z00_168 ==
																		((unsigned char) '/'));
																}
																if (BgL_test1720z00_951)
																	{	/* Tools/misc.scm 173 */
																		BgL_test1718z00_950 = ((bool_t) 1);
																	}
																else
																	{	/* Tools/misc.scm 174 */
																		unsigned char BgL_arg1221z00_165;

																		{	/* Tools/misc.scm 174 */
																			obj_t BgL_arg1223z00_166;

																			if (INTEGERP(BgL_iz00_146))
																				{	/* Tools/misc.scm 174 */
																					long BgL_tmpz00_965;

																					BgL_tmpz00_965 =
																						(long) CINT(BgL_iz00_146);
																					BgL_arg1223z00_166 =
																						BGL_SAFE_PLUS_FX(BgL_tmpz00_965,
																						((long) 1));
																				}
																			else
																				{	/* Tools/misc.scm 174 */
																					BgL_arg1223z00_166 =
																						BGl_2zb2zb2zz__r4_numbers_6_5z00
																						(BgL_iz00_146, BINT(((long) 1)));
																				}
																			BgL_arg1221z00_165 =
																				STRING_REF(
																				((obj_t) BgL_valz00_112),
																				(long) CINT(BgL_arg1223z00_166));
																		}
																		BgL_test1718z00_950 =
																			(BgL_arg1221z00_165 ==
																			((unsigned char) '\\'));
															}}
															if (BgL_test1718z00_950)
																{	/* Tools/misc.scm 172 */
																	BgL_test1714z00_941 = ((bool_t) 0);
																}
															else
																{	/* Tools/misc.scm 172 */
																	BgL_test1714z00_941 = ((bool_t) 1);
																}
														}
													else
														{	/* Tools/misc.scm 171 */
															BgL_test1714z00_941 = ((bool_t) 0);
														}
												}
											else
												{	/* Tools/misc.scm 170 */
													BgL_test1714z00_941 = ((bool_t) 0);
												}
											if (BgL_test1714z00_941)
												{	/* Tools/misc.scm 180 */
													{	/* Tools/misc.scm 182 */
														obj_t BgL_arg1176z00_141;

														{	/* Tools/misc.scm 182 */
															obj_t BgL_res1611z00_604;

															{	/* Tools/misc.scm 182 */
																long BgL_startz00_602;
																long BgL_endz00_603;

																BgL_startz00_602 = (long) CINT(BgL_kz00_116);
																BgL_endz00_603 = (long) CINT(BgL_iz00_119);
																BgL_res1611z00_604 =
																	c_substring(
																	((obj_t) BgL_valz00_112), BgL_startz00_602,
																	BgL_endz00_603);
															}
															BgL_arg1176z00_141 = BgL_res1611z00_604;
														}
														BgL_resz00_113 =
															MAKE_YOUNG_PAIR(BgL_arg1176z00_141,
															BgL_resz00_113);
													}
													if (INTEGERP(BgL_iz00_119))
														{	/* Tools/misc.scm 183 */
															long BgL_tmpz00_981;

															BgL_tmpz00_981 = (long) CINT(BgL_iz00_119);
															BgL_kz00_116 =
																BGL_SAFE_PLUS_FX(BgL_tmpz00_981, ((long) 1));
														}
													else
														{	/* Tools/misc.scm 183 */
															BgL_kz00_116 =
																BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_119,
																BINT(((long) 1)));
												}}
											else
												{	/* Tools/misc.scm 180 */
													BFALSE;
												}
										}
										{	/* Tools/misc.scm 177 */
											obj_t BgL_arg1178z00_143;

											if (INTEGERP(BgL_iz00_119))
												{	/* Tools/misc.scm 177 */
													long BgL_tmpz00_988;

													BgL_tmpz00_988 = (long) CINT(BgL_iz00_119);
													BgL_arg1178z00_143 =
														BGL_SAFE_PLUS_FX(BgL_tmpz00_988, ((long) 1));
												}
											else
												{	/* Tools/misc.scm 177 */
													BgL_arg1178z00_143 =
														BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_119,
														BINT(((long) 1)));
												}
											{
												obj_t BgL_iz00_993;

												BgL_iz00_993 = BgL_arg1178z00_143;
												BgL_iz00_119 = BgL_iz00_993;
												goto BgL_zc3z04anonymousza31157ze3z87_120;
											}
										}
									}
							}
						}
					}
				else
					{	/* Tools/misc.scm 165 */
						return BNIL;
					}
			}
		}

	}



/* normalize-mingw-path~0 */
	obj_t BGl_normaliza7ezd2mingwzd2pathze70z40zztools_miscz00(obj_t
		BgL_pathz00_175)
	{
		{	/* Tools/misc.scm 162 */
			{	/* Tools/misc.scm 152 */
				long BgL_nz00_177;

				BgL_nz00_177 = STRING_LENGTH(((obj_t) BgL_pathz00_175));
				if ((BgL_nz00_177 < ((long) 3)))
					{	/* Tools/misc.scm 154 */
						return BgL_pathz00_175;
					}
				else
					{	/* Tools/misc.scm 154 */
						if (
							(STRING_REF(
									((obj_t) BgL_pathz00_175),
									((long) 0)) == ((unsigned char) '/')))
							{	/* Tools/misc.scm 156 */
								if (
									(STRING_REF(
											((obj_t) BgL_pathz00_175),
											((long) 2)) == ((unsigned char) '/')))
									{	/* Tools/misc.scm 158 */
										obj_t BgL_arg1245z00_185;
										obj_t BgL_arg1246z00_186;

										{	/* Tools/misc.scm 158 */
											unsigned char BgL_arg1247z00_187;

											BgL_arg1247z00_187 =
												STRING_REF(((obj_t) BgL_pathz00_175), ((long) 1));
											{	/* Tools/misc.scm 158 */
												obj_t BgL_list1248z00_188;

												BgL_list1248z00_188 =
													MAKE_YOUNG_PAIR(BCHAR(BgL_arg1247z00_187), BNIL);
												BgL_arg1245z00_185 =
													BGl_listzd2ze3stringz31zz__r4_strings_6_7z00
													(BgL_list1248z00_188);
										}}
										{	/* Tools/misc.scm 160 */
											obj_t BgL_res1594z00_563;

											BgL_res1594z00_563 =
												c_substring(
												((obj_t) BgL_pathz00_175), ((long) 3), BgL_nz00_177);
											BgL_arg1246z00_186 = BgL_res1594z00_563;
										}
										return
											string_append_3(BgL_arg1245z00_185,
											BGl_string1662z00zztools_miscz00, BgL_arg1246z00_186);
									}
								else
									{	/* Tools/misc.scm 157 */
										return BgL_pathz00_175;
									}
							}
						else
							{	/* Tools/misc.scm 156 */
								return BgL_pathz00_175;
							}
					}
			}
		}

	}



/* unix-build-path-from-shell-variable */
	obj_t
		BGl_unixzd2buildzd2pathzd2fromzd2shellzd2variablezd2zztools_miscz00(obj_t
		BgL_varz00_20)
	{
		{	/* Tools/misc.scm 188 */
			{	/* Tools/misc.scm 189 */
				obj_t BgL_valz00_193;

				BgL_valz00_193 = BGl_getenvz00zz__osz00(BgL_varz00_20);
				if (STRINGP(BgL_valz00_193))
					{	/* Tools/misc.scm 191 */
						obj_t BgL_port1014z00_195;

						{	/* Tools/misc.scm 191 */
							long BgL_endz00_442;

							BgL_endz00_442 = STRING_LENGTH(BgL_valz00_193);
							{	/* Tools/misc.scm 191 */

								BgL_port1014z00_195 =
									BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00
									(BgL_valz00_193, BINT(((long) 0)), BINT(BgL_endz00_442));
						}}
						{	/* Tools/misc.scm 191 */
							obj_t BgL_exitd1015z00_196;

							BgL_exitd1015z00_196 = BGL_EXITD_TOP_AS_OBJ();
							{	/* Tools/misc.scm 191 */
								obj_t BgL_zc3z04anonymousza31463ze3z87_739;

								BgL_zc3z04anonymousza31463ze3z87_739 =
									MAKE_FX_PROCEDURE
									(BGl_z62zc3z04anonymousza31463ze3ze5zztools_miscz00,
									(int) (((long) 0)), (int) (((long) 1)));
								PROCEDURE_SET(BgL_zc3z04anonymousza31463ze3z87_739,
									(int) (((long) 0)), BgL_port1014z00_195);
								BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
									(BgL_exitd1015z00_196, BgL_zc3z04anonymousza31463ze3z87_739);
								{	/* Tools/misc.scm 191 */
									obj_t BgL_tmp1017z00_198;

									BgL_tmp1017z00_198 =
										BGl_ignoreze70ze7zztools_miscz00(BgL_port1014z00_195);
									BGl_exitdzd2popzd2protectz12z12zz__bexitz00
										(BgL_exitd1015z00_196);
									bgl_close_input_port(BgL_port1014z00_195);
									return BgL_tmp1017z00_198;
								}
							}
						}
					}
				else
					{	/* Tools/misc.scm 190 */
						return BNIL;
					}
			}
		}

	}



/* ignore~0 */
	obj_t BGl_ignoreze70ze7zztools_miscz00(obj_t BgL_iportz00_744)
	{
		{	/* Tools/misc.scm 191 */
		BGl_ignoreze70ze7zztools_miscz00:
			{
				obj_t BgL_iportz00_232;
				long BgL_lastzd2matchzd2_233;
				long BgL_forwardz00_234;
				long BgL_bufposz00_235;
				obj_t BgL_iportz00_245;
				long BgL_lastzd2matchzd2_246;
				long BgL_forwardz00_247;
				long BgL_bufposz00_248;
				obj_t BgL_iportz00_264;
				long BgL_lastzd2matchzd2_265;
				long BgL_forwardz00_266;
				long BgL_bufposz00_267;

				{	/* Tools/misc.scm 191 */
					long BgL_res1645z00_683;

					BgL_res1645z00_683 = RGC_START_MATCH(BgL_iportz00_744);
					BgL_res1645z00_683;
				}
				{	/* Tools/misc.scm 191 */
					long BgL_matchz00_396;

					{	/* Tools/misc.scm 191 */
						long BgL_arg1461z00_405;
						long BgL_arg1462z00_406;

						{	/* Tools/misc.scm 191 */
							long BgL_res1646z00_685;

							BgL_res1646z00_685 = RGC_BUFFER_FORWARD(BgL_iportz00_744);
							BgL_arg1461z00_405 = BgL_res1646z00_685;
						}
						{	/* Tools/misc.scm 191 */
							long BgL_res1647z00_687;

							BgL_res1647z00_687 = RGC_BUFFER_BUFPOS(BgL_iportz00_744);
							BgL_arg1462z00_406 = BgL_res1647z00_687;
						}
						BgL_iportz00_232 = BgL_iportz00_744;
						BgL_lastzd2matchzd2_233 = ((long) 2);
						BgL_forwardz00_234 = BgL_arg1461z00_405;
						BgL_bufposz00_235 = BgL_arg1462z00_406;
					BgL_zc3z04anonymousza31254ze3z87_236:
						if ((BgL_forwardz00_234 == BgL_bufposz00_235))
							{	/* Tools/misc.scm 191 */
								if (rgc_fill_buffer(BgL_iportz00_232))
									{	/* Tools/misc.scm 191 */
										long BgL_arg1258z00_239;
										long BgL_arg1263z00_240;

										{	/* Tools/misc.scm 191 */
											long BgL_res1618z00_617;

											BgL_res1618z00_617 = RGC_BUFFER_FORWARD(BgL_iportz00_232);
											BgL_arg1258z00_239 = BgL_res1618z00_617;
										}
										{	/* Tools/misc.scm 191 */
											long BgL_res1619z00_619;

											BgL_res1619z00_619 = RGC_BUFFER_BUFPOS(BgL_iportz00_232);
											BgL_arg1263z00_240 = BgL_res1619z00_619;
										}
										{
											long BgL_bufposz00_1042;
											long BgL_forwardz00_1041;

											BgL_forwardz00_1041 = BgL_arg1258z00_239;
											BgL_bufposz00_1042 = BgL_arg1263z00_240;
											BgL_bufposz00_235 = BgL_bufposz00_1042;
											BgL_forwardz00_234 = BgL_forwardz00_1041;
											goto BgL_zc3z04anonymousza31254ze3z87_236;
										}
									}
								else
									{	/* Tools/misc.scm 191 */
										BgL_matchz00_396 = BgL_lastzd2matchzd2_233;
									}
							}
						else
							{	/* Tools/misc.scm 191 */
								int BgL_curz00_241;

								{	/* Tools/misc.scm 191 */
									int BgL_res1620z00_622;

									BgL_res1620z00_622 =
										RGC_BUFFER_GET_CHAR(BgL_iportz00_232, BgL_forwardz00_234);
									BgL_curz00_241 = BgL_res1620z00_622;
								}
								{	/* Tools/misc.scm 191 */

									if (((long) (BgL_curz00_241) == ((long) 58)))
										{	/* Tools/misc.scm 191 */
											long BgL_arg1268z00_243;

											BgL_arg1268z00_243 = (((long) 1) + BgL_forwardz00_234);
											{	/* Tools/misc.scm 191 */
												long BgL_newzd2matchzd2_627;

												{	/* Tools/misc.scm 191 */
													long BgL_res1623z00_630;

													BgL_res1623z00_630 =
														RGC_STOP_MATCH(BgL_iportz00_232,
														BgL_arg1268z00_243);
													BgL_res1623z00_630;
												}
												BgL_newzd2matchzd2_627 = ((long) 1);
												BgL_matchz00_396 = BgL_newzd2matchzd2_627;
										}}
									else
										{	/* Tools/misc.scm 191 */
											BgL_iportz00_264 = BgL_iportz00_232;
											BgL_lastzd2matchzd2_265 = BgL_lastzd2matchzd2_233;
											BgL_forwardz00_266 = (((long) 1) + BgL_forwardz00_234);
											BgL_bufposz00_267 = BgL_bufposz00_235;
										BgL_zc3z04anonymousza31279ze3z87_268:
											{	/* Tools/misc.scm 191 */
												long BgL_newzd2matchzd2_269;

												{	/* Tools/misc.scm 191 */
													long BgL_res1634z00_658;

													BgL_res1634z00_658 =
														RGC_STOP_MATCH(BgL_iportz00_264,
														BgL_forwardz00_266);
													BgL_res1634z00_658;
												}
												BgL_newzd2matchzd2_269 = ((long) 0);
												if ((BgL_forwardz00_266 == BgL_bufposz00_267))
													{	/* Tools/misc.scm 191 */
														if (rgc_fill_buffer(BgL_iportz00_264))
															{	/* Tools/misc.scm 191 */
																long BgL_arg1282z00_272;
																long BgL_arg1284z00_273;

																{	/* Tools/misc.scm 191 */
																	long BgL_res1637z00_665;

																	BgL_res1637z00_665 =
																		RGC_BUFFER_FORWARD(BgL_iportz00_264);
																	BgL_arg1282z00_272 = BgL_res1637z00_665;
																}
																{	/* Tools/misc.scm 191 */
																	long BgL_res1638z00_667;

																	BgL_res1638z00_667 =
																		RGC_BUFFER_BUFPOS(BgL_iportz00_264);
																	BgL_arg1284z00_273 = BgL_res1638z00_667;
																}
																{
																	long BgL_bufposz00_1057;
																	long BgL_forwardz00_1056;

																	BgL_forwardz00_1056 = BgL_arg1282z00_272;
																	BgL_bufposz00_1057 = BgL_arg1284z00_273;
																	BgL_bufposz00_267 = BgL_bufposz00_1057;
																	BgL_forwardz00_266 = BgL_forwardz00_1056;
																	goto BgL_zc3z04anonymousza31279ze3z87_268;
																}
															}
														else
															{	/* Tools/misc.scm 191 */
																BgL_matchz00_396 = BgL_newzd2matchzd2_269;
															}
													}
												else
													{	/* Tools/misc.scm 191 */
														int BgL_curz00_274;

														{	/* Tools/misc.scm 191 */
															int BgL_res1639z00_670;

															BgL_res1639z00_670 =
																RGC_BUFFER_GET_CHAR(BgL_iportz00_264,
																BgL_forwardz00_266);
															BgL_curz00_274 = BgL_res1639z00_670;
														}
														{	/* Tools/misc.scm 191 */

															if (((long) (BgL_curz00_274) == ((long) 58)))
																{	/* Tools/misc.scm 191 */
																	BgL_matchz00_396 = BgL_newzd2matchzd2_269;
																}
															else
																{	/* Tools/misc.scm 191 */
																	BgL_iportz00_245 = BgL_iportz00_264;
																	BgL_lastzd2matchzd2_246 =
																		BgL_newzd2matchzd2_269;
																	BgL_forwardz00_247 =
																		(((long) 1) + BgL_forwardz00_266);
																	BgL_bufposz00_248 = BgL_bufposz00_267;
																BgL_zc3z04anonymousza31271ze3z87_249:
																	{	/* Tools/misc.scm 191 */
																		long BgL_newzd2matchzd2_250;

																		{	/* Tools/misc.scm 191 */
																			long BgL_res1625z00_635;

																			BgL_res1625z00_635 =
																				RGC_STOP_MATCH(BgL_iportz00_245,
																				BgL_forwardz00_247);
																			BgL_res1625z00_635;
																		}
																		BgL_newzd2matchzd2_250 = ((long) 0);
																		if (
																			(BgL_forwardz00_247 == BgL_bufposz00_248))
																			{	/* Tools/misc.scm 191 */
																				if (rgc_fill_buffer(BgL_iportz00_245))
																					{	/* Tools/misc.scm 191 */
																						long BgL_arg1274z00_253;
																						long BgL_arg1275z00_254;

																						{	/* Tools/misc.scm 191 */
																							long BgL_res1628z00_642;

																							BgL_res1628z00_642 =
																								RGC_BUFFER_FORWARD
																								(BgL_iportz00_245);
																							BgL_arg1274z00_253 =
																								BgL_res1628z00_642;
																						}
																						{	/* Tools/misc.scm 191 */
																							long BgL_res1629z00_644;

																							BgL_res1629z00_644 =
																								RGC_BUFFER_BUFPOS
																								(BgL_iportz00_245);
																							BgL_arg1275z00_254 =
																								BgL_res1629z00_644;
																						}
																						{
																							long BgL_bufposz00_1070;
																							long BgL_forwardz00_1069;

																							BgL_forwardz00_1069 =
																								BgL_arg1274z00_253;
																							BgL_bufposz00_1070 =
																								BgL_arg1275z00_254;
																							BgL_bufposz00_248 =
																								BgL_bufposz00_1070;
																							BgL_forwardz00_247 =
																								BgL_forwardz00_1069;
																							goto
																								BgL_zc3z04anonymousza31271ze3z87_249;
																						}
																					}
																				else
																					{	/* Tools/misc.scm 191 */
																						BgL_matchz00_396 =
																							BgL_newzd2matchzd2_250;
																					}
																			}
																		else
																			{	/* Tools/misc.scm 191 */
																				int BgL_curz00_255;

																				{	/* Tools/misc.scm 191 */
																					int BgL_res1630z00_647;

																					BgL_res1630z00_647 =
																						RGC_BUFFER_GET_CHAR
																						(BgL_iportz00_245,
																						BgL_forwardz00_247);
																					BgL_curz00_255 = BgL_res1630z00_647;
																				}
																				{	/* Tools/misc.scm 191 */

																					if (
																						((long) (BgL_curz00_255) ==
																							((long) 58)))
																						{	/* Tools/misc.scm 191 */
																							BgL_matchz00_396 =
																								BgL_newzd2matchzd2_250;
																						}
																					else
																						{
																							long BgL_forwardz00_1076;
																							long BgL_lastzd2matchzd2_1075;

																							BgL_lastzd2matchzd2_1075 =
																								BgL_newzd2matchzd2_250;
																							BgL_forwardz00_1076 =
																								(((long) 1) +
																								BgL_forwardz00_247);
																							BgL_forwardz00_247 =
																								BgL_forwardz00_1076;
																							BgL_lastzd2matchzd2_246 =
																								BgL_lastzd2matchzd2_1075;
																							goto
																								BgL_zc3z04anonymousza31271ze3z87_249;
																						}
																				}
																			}
																	}
																}
														}
													}
											}
										}
								}
							}
					}
					RGC_SET_FILEPOS(BgL_iportz00_744);
					{

						{	/* Tools/misc.scm 191 */
							obj_t BgL_aux1032z00_401;

							BgL_aux1032z00_401 = BINT(BgL_matchz00_396);
							switch ((long) CINT(BgL_aux1032z00_401))
								{
								case ((long) 2):

									return BNIL;
									break;
								case ((long) 1):

									{

										goto BGl_ignoreze70ze7zztools_miscz00;
									}
									break;
								case ((long) 0):

									{	/* Tools/misc.scm 193 */
										obj_t BgL_strz00_403;

										{	/* Tools/misc.scm 191 */
											long BgL_arg1295z00_288;

											{	/* Tools/misc.scm 191 */
												long BgL_res1642z00_676;

												BgL_res1642z00_676 =
													RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_744);
												BgL_arg1295z00_288 = BgL_res1642z00_676;
											}
											BgL_strz00_403 =
												rgc_buffer_substring(BgL_iportz00_744, ((long) 0),
												BgL_arg1295z00_288);
										}
										{	/* Tools/misc.scm 193 */
											obj_t BgL_resz00_404;

											BgL_resz00_404 =
												BGl_ignoreze70ze7zztools_miscz00(BgL_iportz00_744);
											{	/* Tools/misc.scm 194 */

												return MAKE_YOUNG_PAIR(BgL_strz00_403, BgL_resz00_404);
											}
										}
									}
									break;
								default:
									return
										BGl_errorz00zz__errorz00(BGl_string1663z00zztools_miscz00,
										BGl_string1664z00zztools_miscz00, BINT(BgL_matchz00_396));
								}
						}
					}
				}
			}
		}

	}



/* &<@anonymous:1463> */
	obj_t BGl_z62zc3z04anonymousza31463ze3ze5zztools_miscz00(obj_t BgL_envz00_740)
	{
		{	/* Tools/misc.scm 191 */
			{	/* Tools/misc.scm 191 */
				obj_t BgL_port1014z00_741;

				BgL_port1014z00_741 =
					((obj_t) PROCEDURE_REF(BgL_envz00_740, (int) (((long) 0))));
				return bgl_close_input_port(BgL_port1014z00_741);
			}
		}

	}



/* uncygdrive */
	BGL_EXPORTED_DEF obj_t BGl_uncygdrivez00zztools_miscz00(obj_t BgL_strz00_21)
	{
		{	/* Tools/misc.scm 208 */
			if (bigloo_strncmp(BGl_string1665z00zztools_miscz00, BgL_strz00_21,
					((long) 10)))
				{	/* Tools/misc.scm 210 */
					bool_t BgL_test1745z00_1096;

					if ((STRING_LENGTH(BgL_strz00_21) > ((long) 12)))
						{	/* Tools/misc.scm 211 */
							bool_t BgL_test1748z00_1100;

							{	/* Tools/misc.scm 211 */
								unsigned char BgL_arg1552z00_462;

								BgL_arg1552z00_462 = STRING_REF(BgL_strz00_21, ((long) 10));
								{	/* Tools/misc.scm 211 */
									bool_t BgL_res1652z00_700;

									BgL_res1652z00_700 = isalpha(BgL_arg1552z00_462);
									BgL_test1748z00_1100 = BgL_res1652z00_700;
							}}
							if (BgL_test1748z00_1100)
								{	/* Tools/misc.scm 211 */
									BgL_test1745z00_1096 =
										(STRING_REF(BgL_strz00_21,
											((long) 11)) == ((unsigned char) '/'));
								}
							else
								{	/* Tools/misc.scm 211 */
									BgL_test1745z00_1096 = ((bool_t) 0);
								}
						}
					else
						{	/* Tools/misc.scm 210 */
							BgL_test1745z00_1096 = ((bool_t) 0);
						}
					if (BgL_test1745z00_1096)
						{	/* Tools/misc.scm 213 */
							obj_t BgL_arg1497z00_452;
							obj_t BgL_arg1518z00_453;

							{	/* Tools/misc.scm 213 */
								unsigned char BgL_arg1521z00_454;

								BgL_arg1521z00_454 = STRING_REF(BgL_strz00_21, ((long) 10));
								{	/* Tools/misc.scm 213 */
									obj_t BgL_list1522z00_455;

									{	/* Tools/misc.scm 213 */
										obj_t BgL_arg1528z00_456;

										{	/* Tools/misc.scm 213 */
											obj_t BgL_arg1536z00_457;

											BgL_arg1536z00_457 =
												MAKE_YOUNG_PAIR(BCHAR(((unsigned char) '/')), BNIL);
											BgL_arg1528z00_456 =
												MAKE_YOUNG_PAIR(BCHAR(((unsigned char) ':')),
												BgL_arg1536z00_457);
										}
										BgL_list1522z00_455 =
											MAKE_YOUNG_PAIR(BCHAR(BgL_arg1521z00_454),
											BgL_arg1528z00_456);
									}
									BgL_arg1497z00_452 =
										BGl_listzd2ze3stringz31zz__r4_strings_6_7z00
										(BgL_list1522z00_455);
							}}
							BgL_arg1518z00_453 =
								c_substring(BgL_strz00_21, ((long) 12),
								STRING_LENGTH(BgL_strz00_21));
							return string_append(BgL_arg1497z00_452, BgL_arg1518z00_453);
						}
					else
						{	/* Tools/misc.scm 210 */
							return BgL_strz00_21;
						}
				}
			else
				{	/* Tools/misc.scm 209 */
					return BgL_strz00_21;
				}
		}

	}



/* &uncygdrive */
	obj_t BGl_z62uncygdrivez62zztools_miscz00(obj_t BgL_envz00_742,
		obj_t BgL_strz00_743)
	{
		{	/* Tools/misc.scm 208 */
			return BGl_uncygdrivez00zztools_miscz00(BgL_strz00_743);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zztools_miscz00()
	{
		{	/* Tools/misc.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zztools_miscz00()
	{
		{	/* Tools/misc.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zztools_miscz00()
	{
		{	/* Tools/misc.scm 15 */
			return BUNSPEC;
		}

	}

#ifdef __cplusplus
}
#endif
