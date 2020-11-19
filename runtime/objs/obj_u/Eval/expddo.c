/*===========================================================================*/
/*   (Eval/expddo.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Eval/expddo.scm -indent -o objs/obj_u/Eval/expddo.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_symbol1670z00zz__expander_doz00 = BUNSPEC;
	static obj_t BGl_symbol1672z00zz__expander_doz00 = BUNSPEC;
	static obj_t BGl_symbol1674z00zz__expander_doz00 = BUNSPEC;
	static obj_t BGl_symbol1676z00zz__expander_doz00 = BUNSPEC;
	extern obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_expandzd2errorzd2zz__expandz00(obj_t, obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__expander_doz00 = BUNSPEC;
	static obj_t BGl_z62expandzd2dozb0zz__expander_doz00(obj_t, obj_t, obj_t);
	extern obj_t bgl_reverse(obj_t);
	static obj_t BGl_genericzd2initzd2zz__expander_doz00();
	static obj_t BGl_objectzd2initzd2zz__expander_doz00();
	BGL_EXPORTED_DECL obj_t BGl_expandzd2dozd2zz__expander_doz00(obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_methodzd2initzd2zz__expander_doz00();
	extern obj_t BGl_evepairifyzd2deepzd2zz__prognz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__expander_doz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__prognz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__expandz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonum_dtoaz00(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(long, char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bignumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__tvectorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_cnstzd2initzd2zz__expander_doz00();
	extern long bgl_list_length(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__expander_doz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__expander_doz00();
	extern obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_expandzd2dozd2envz00zz__expander_doz00,
		BgL_bgl_za762expandza7d2doza7b1679za7,
		BGl_z62expandzd2dozb0zz__expander_doz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1666z00zz__expander_doz00,
		BgL_bgl_string1666za700za7za7_1680za7, "do-loop--", 9);
	      DEFINE_STRING(BGl_string1667z00zz__expander_doz00,
		BgL_bgl_string1667za700za7za7_1681za7, "do", 2);
	      DEFINE_STRING(BGl_string1668z00zz__expander_doz00,
		BgL_bgl_string1668za700za7za7_1682za7, "Illegal form", 12);
	      DEFINE_STRING(BGl_string1669z00zz__expander_doz00,
		BgL_bgl_string1669za700za7za7_1683za7, "Illegal form:", 13);
	      DEFINE_STRING(BGl_string1671z00zz__expander_doz00,
		BgL_bgl_string1671za700za7za7_1684za7, "begin", 5);
	      DEFINE_STRING(BGl_string1673z00zz__expander_doz00,
		BgL_bgl_string1673za700za7za7_1685za7, "if", 2);
	      DEFINE_STRING(BGl_string1675z00zz__expander_doz00,
		BgL_bgl_string1675za700za7za7_1686za7, "lambda", 6);
	      DEFINE_STRING(BGl_string1677z00zz__expander_doz00,
		BgL_bgl_string1677za700za7za7_1687za7, "letrec", 6);
	      DEFINE_STRING(BGl_string1678z00zz__expander_doz00,
		BgL_bgl_string1678za700za7za7_1688za7, "__expander_do", 13);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_symbol1670z00zz__expander_doz00));
		     ADD_ROOT((void *) (&BGl_symbol1672z00zz__expander_doz00));
		     ADD_ROOT((void *) (&BGl_symbol1674z00zz__expander_doz00));
		     ADD_ROOT((void *) (&BGl_symbol1676z00zz__expander_doz00));
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zz__expander_doz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__expander_doz00(long
		BgL_checksumz00_1814, char *BgL_fromz00_1815)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__expander_doz00))
				{
					BGl_requirezd2initializa7ationz75zz__expander_doz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__expander_doz00();
					BGl_cnstzd2initzd2zz__expander_doz00();
					BGl_importedzd2moduleszd2initz00zz__expander_doz00();
					return BGl_methodzd2initzd2zz__expander_doz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__expander_doz00()
	{
		{	/* Eval/expddo.scm 14 */
			BGl_symbol1670z00zz__expander_doz00 =
				bstring_to_symbol(BGl_string1671z00zz__expander_doz00);
			BGl_symbol1672z00zz__expander_doz00 =
				bstring_to_symbol(BGl_string1673z00zz__expander_doz00);
			BGl_symbol1674z00zz__expander_doz00 =
				bstring_to_symbol(BGl_string1675z00zz__expander_doz00);
			return (BGl_symbol1676z00zz__expander_doz00 =
				bstring_to_symbol(BGl_string1677z00zz__expander_doz00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__expander_doz00()
	{
		{	/* Eval/expddo.scm 14 */
			return bgl_gc_roots_register();
		}

	}



/* expand-do */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2dozd2zz__expander_doz00(obj_t
		BgL_expz00_3, obj_t BgL_ez00_4)
	{
		{	/* Eval/expddo.scm 61 */
			{
				obj_t BgL_bindingsz00_1062;
				obj_t BgL_endz00_1063;
				obj_t BgL_commandz00_1064;

				if (PAIRP(BgL_expz00_3))
					{	/* Eval/expddo.scm 62 */
						obj_t BgL_cdrzd2111zd2_1069;

						BgL_cdrzd2111zd2_1069 = CDR(BgL_expz00_3);
						if (PAIRP(BgL_cdrzd2111zd2_1069))
							{	/* Eval/expddo.scm 62 */
								obj_t BgL_cdrzd2116zd2_1071;

								BgL_cdrzd2116zd2_1071 = CDR(BgL_cdrzd2111zd2_1069);
								if (PAIRP(BgL_cdrzd2116zd2_1071))
									{	/* Eval/expddo.scm 62 */
										BgL_bindingsz00_1062 = CAR(BgL_cdrzd2111zd2_1069);
										BgL_endz00_1063 = CAR(BgL_cdrzd2116zd2_1071);
										BgL_commandz00_1064 = CDR(BgL_cdrzd2116zd2_1071);
										{	/* Eval/expddo.scm 64 */
											obj_t BgL_varsz00_1077;

											BgL_varsz00_1077 = BNIL;
											{	/* Eval/expddo.scm 65 */
												obj_t BgL_initsz00_1078;

												BgL_initsz00_1078 = BNIL;
												{	/* Eval/expddo.scm 66 */
													obj_t BgL_stepsz00_1079;

													BgL_stepsz00_1079 = BNIL;
													{	/* Eval/expddo.scm 67 */
														obj_t BgL_loopz00_1080;

														BgL_loopz00_1080 =
															BGl_gensymz00zz__r4_symbols_6_4z00
															(BGl_string1666z00zz__expander_doz00);
														{	/* Eval/expddo.scm 68 */
															obj_t BgL_testz00_1081;

															if (PAIRP(BgL_endz00_1063))
																{	/* Eval/expddo.scm 69 */
																	BgL_testz00_1081 = CAR(BgL_endz00_1063);
																}
															else
																{	/* Eval/expddo.scm 69 */
																	BgL_testz00_1081 =
																		BGl_expandzd2errorzd2zz__expandz00
																		(BGl_string1667z00zz__expander_doz00,
																		BGl_string1668z00zz__expander_doz00,
																		BgL_expz00_3);
																}
															{	/* Eval/expddo.scm 69 */
																obj_t BgL_endingz00_1082;

																if (NULLP(CDR(((obj_t) BgL_endz00_1063))))
																	{	/* Eval/expddo.scm 73 */
																		obj_t BgL_list1275z00_1132;

																		BgL_list1275z00_1132 =
																			MAKE_YOUNG_PAIR(BFALSE, BNIL);
																		BgL_endingz00_1082 = BgL_list1275z00_1132;
																	}
																else
																	{	/* Eval/expddo.scm 72 */
																		BgL_endingz00_1082 =
																			CDR(((obj_t) BgL_endz00_1063));
																	}
																{	/* Eval/expddo.scm 75 */

																	{	/* Eval/expddo.scm 76 */
																		obj_t BgL_g1080z00_1084;

																		BgL_g1080z00_1084 =
																			bgl_reverse(BgL_bindingsz00_1062);
																		{
																			obj_t BgL_l1078z00_1086;

																			BgL_l1078z00_1086 = BgL_g1080z00_1084;
																		BgL_zc3z04anonymousza31175ze3z87_1087:
																			if (PAIRP(BgL_l1078z00_1086))
																				{	/* Eval/expddo.scm 89 */
																					{	/* Eval/expddo.scm 78 */
																						obj_t BgL_varzd2initzd2stepz00_1089;

																						BgL_varzd2initzd2stepz00_1089 =
																							CAR(BgL_l1078z00_1086);
																						{	/* Eval/expddo.scm 78 */
																							bool_t BgL_test1696z00_1852;

																							if (
																								(bgl_list_length
																									(BgL_varzd2initzd2stepz00_1089)
																									>= ((long) 2)))
																								{	/* Eval/expddo.scm 78 */
																									BgL_test1696z00_1852 =
																										(bgl_list_length
																										(BgL_varzd2initzd2stepz00_1089)
																										<= ((long) 3));
																								}
																							else
																								{	/* Eval/expddo.scm 78 */
																									BgL_test1696z00_1852 =
																										((bool_t) 0);
																								}
																							if (BgL_test1696z00_1852)
																								{	/* Eval/expddo.scm 80 */
																									obj_t BgL_varz00_1095;

																									BgL_varz00_1095 =
																										CAR(
																										((obj_t)
																											BgL_varzd2initzd2stepz00_1089));
																									{	/* Eval/expddo.scm 80 */
																										obj_t BgL_initz00_1096;

																										{	/* Eval/expddo.scm 81 */
																											obj_t BgL_pairz00_1547;

																											BgL_pairz00_1547 =
																												CDR(
																												((obj_t)
																													BgL_varzd2initzd2stepz00_1089));
																											BgL_initz00_1096 =
																												CAR(BgL_pairz00_1547);
																										}
																										{	/* Eval/expddo.scm 81 */
																											obj_t BgL_stepz00_1097;

																											{	/* Eval/expddo.scm 82 */
																												bool_t
																													BgL_test1698z00_1863;
																												{	/* Eval/expddo.scm 82 */
																													obj_t BgL_tmpz00_1864;

																													{	/* Eval/expddo.scm 82 */
																														obj_t
																															BgL_pairz00_1551;
																														BgL_pairz00_1551 =
																															CDR(((obj_t)
																																BgL_varzd2initzd2stepz00_1089));
																														BgL_tmpz00_1864 =
																															CDR
																															(BgL_pairz00_1551);
																													}
																													BgL_test1698z00_1863 =
																														NULLP
																														(BgL_tmpz00_1864);
																												}
																												if (BgL_test1698z00_1863)
																													{	/* Eval/expddo.scm 82 */
																														BgL_stepz00_1097 =
																															BgL_varz00_1095;
																													}
																												else
																													{	/* Eval/expddo.scm 83 */
																														obj_t
																															BgL_pairz00_1557;
																														{	/* Eval/expddo.scm 83 */
																															obj_t
																																BgL_pairz00_1556;
																															BgL_pairz00_1556 =
																																CDR(((obj_t)
																																	BgL_varzd2initzd2stepz00_1089));
																															BgL_pairz00_1557 =
																																CDR
																																(BgL_pairz00_1556);
																														}
																														BgL_stepz00_1097 =
																															CAR
																															(BgL_pairz00_1557);
																													}
																											}
																											{	/* Eval/expddo.scm 82 */

																												BgL_varsz00_1077 =
																													MAKE_YOUNG_PAIR
																													(BgL_varz00_1095,
																													BgL_varsz00_1077);
																												BgL_stepsz00_1079 =
																													MAKE_YOUNG_PAIR
																													(BgL_stepz00_1097,
																													BgL_stepsz00_1079);
																												BgL_initsz00_1078 =
																													MAKE_YOUNG_PAIR
																													(BgL_initz00_1096,
																													BgL_initsz00_1078);
																											}
																										}
																									}
																								}
																							else
																								{	/* Eval/expddo.scm 78 */
																									BGl_expandzd2errorzd2zz__expandz00
																										(BGl_string1667z00zz__expander_doz00,
																										BGl_string1669z00zz__expander_doz00,
																										BgL_varzd2initzd2stepz00_1089);
																								}
																						}
																					}
																					{
																						obj_t BgL_l1078z00_1877;

																						BgL_l1078z00_1877 =
																							CDR(BgL_l1078z00_1086);
																						BgL_l1078z00_1086 =
																							BgL_l1078z00_1877;
																						goto
																							BgL_zc3z04anonymousza31175ze3z87_1087;
																					}
																				}
																			else
																				{	/* Eval/expddo.scm 89 */
																					((bool_t) 1);
																				}
																		}
																	}
																	{	/* Eval/expddo.scm 93 */
																		obj_t BgL_arg1216z00_1107;

																		{	/* Eval/expddo.scm 93 */
																			obj_t BgL_arg1221z00_1108;

																			{	/* Eval/expddo.scm 93 */
																				obj_t BgL_arg1223z00_1109;

																				{	/* Eval/expddo.scm 93 */
																					obj_t BgL_arg1225z00_1110;
																					obj_t BgL_arg1227z00_1111;

																					{	/* Eval/expddo.scm 93 */
																						obj_t BgL_arg1229z00_1112;

																						{	/* Eval/expddo.scm 93 */
																							obj_t BgL_arg1232z00_1113;

																							{	/* Eval/expddo.scm 93 */
																								obj_t BgL_arg1239z00_1114;

																								{	/* Eval/expddo.scm 93 */
																									obj_t BgL_arg1242z00_1115;

																									{	/* Eval/expddo.scm 93 */
																										obj_t BgL_arg1243z00_1116;

																										{	/* Eval/expddo.scm 93 */
																											obj_t BgL_arg1245z00_1117;

																											{	/* Eval/expddo.scm 93 */
																												obj_t
																													BgL_arg1246z00_1118;
																												{	/* Eval/expddo.scm 93 */
																													obj_t
																														BgL_arg1247z00_1119;
																													{	/* Eval/expddo.scm 93 */
																														obj_t
																															BgL_arg1250z00_1120;
																														obj_t
																															BgL_arg1252z00_1121;
																														{	/* Eval/expddo.scm 93 */
																															obj_t
																																BgL_arg1253z00_1122;
																															BgL_arg1253z00_1122
																																=
																																BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																(BgL_endingz00_1082,
																																BNIL);
																															BgL_arg1250z00_1120
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_symbol1670z00zz__expander_doz00,
																																BgL_arg1253z00_1122);
																														}
																														{	/* Eval/expddo.scm 94 */
																															obj_t
																																BgL_arg1254z00_1123;
																															{	/* Eval/expddo.scm 94 */
																																obj_t
																																	BgL_arg1256z00_1124;
																																{	/* Eval/expddo.scm 94 */
																																	obj_t
																																		BgL_arg1258z00_1125;
																																	{	/* Eval/expddo.scm 94 */
																																		obj_t
																																			BgL_arg1263z00_1126;
																																		BgL_arg1263z00_1126
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_loopz00_1080,
																																			BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																			(BgL_stepsz00_1079,
																																				BNIL));
																																		BgL_arg1258z00_1125
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg1263z00_1126,
																																			BNIL);
																																	}
																																	BgL_arg1256z00_1124
																																		=
																																		BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																		(BgL_commandz00_1064,
																																		BgL_arg1258z00_1125);
																																}
																																BgL_arg1254z00_1123
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BGl_symbol1670z00zz__expander_doz00,
																																	BgL_arg1256z00_1124);
																															}
																															BgL_arg1252z00_1121
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_arg1254z00_1123,
																																BNIL);
																														}
																														BgL_arg1247z00_1119
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1250z00_1120,
																															BgL_arg1252z00_1121);
																													}
																													BgL_arg1246z00_1118 =
																														MAKE_YOUNG_PAIR
																														(BgL_testz00_1081,
																														BgL_arg1247z00_1119);
																												}
																												BgL_arg1245z00_1117 =
																													MAKE_YOUNG_PAIR
																													(BGl_symbol1672z00zz__expander_doz00,
																													BgL_arg1246z00_1118);
																											}
																											BgL_arg1243z00_1116 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1245z00_1117,
																												BNIL);
																										}
																										BgL_arg1242z00_1115 =
																											MAKE_YOUNG_PAIR
																											(BgL_varsz00_1077,
																											BgL_arg1243z00_1116);
																									}
																									BgL_arg1239z00_1114 =
																										MAKE_YOUNG_PAIR
																										(BGl_symbol1674z00zz__expander_doz00,
																										BgL_arg1242z00_1115);
																								}
																								BgL_arg1232z00_1113 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1239z00_1114, BNIL);
																							}
																							BgL_arg1229z00_1112 =
																								MAKE_YOUNG_PAIR
																								(BgL_loopz00_1080,
																								BgL_arg1232z00_1113);
																						}
																						BgL_arg1225z00_1110 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1229z00_1112, BNIL);
																					}
																					{	/* Eval/expddo.scm 95 */
																						obj_t BgL_arg1270z00_1128;

																						BgL_arg1270z00_1128 =
																							MAKE_YOUNG_PAIR(BgL_loopz00_1080,
																							BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																							(BgL_initsz00_1078, BNIL));
																						BgL_arg1227z00_1111 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1270z00_1128, BNIL);
																					}
																					BgL_arg1223z00_1109 =
																						MAKE_YOUNG_PAIR(BgL_arg1225z00_1110,
																						BgL_arg1227z00_1111);
																				}
																				BgL_arg1221z00_1108 =
																					MAKE_YOUNG_PAIR
																					(BGl_symbol1676z00zz__expander_doz00,
																					BgL_arg1223z00_1109);
																			}
																			BgL_arg1216z00_1107 =
																				BGl_evepairifyzd2deepzd2zz__prognz00
																				(BgL_arg1221z00_1108, BgL_expz00_3);
																		}
																		return
																			PROCEDURE_ENTRY(BgL_ez00_4) (BgL_ez00_4,
																			BgL_arg1216z00_1107, BgL_ez00_4, BEOA);
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								else
									{	/* Eval/expddo.scm 62 */
										return
											BGl_expandzd2errorzd2zz__expandz00
											(BGl_string1667z00zz__expander_doz00,
											BGl_string1668z00zz__expander_doz00, BgL_expz00_3);
									}
							}
						else
							{	/* Eval/expddo.scm 62 */
								return
									BGl_expandzd2errorzd2zz__expandz00
									(BGl_string1667z00zz__expander_doz00,
									BGl_string1668z00zz__expander_doz00, BgL_expz00_3);
							}
					}
				else
					{	/* Eval/expddo.scm 62 */
						return
							BGl_expandzd2errorzd2zz__expandz00
							(BGl_string1667z00zz__expander_doz00,
							BGl_string1668z00zz__expander_doz00, BgL_expz00_3);
					}
			}
		}

	}



/* &expand-do */
	obj_t BGl_z62expandzd2dozb0zz__expander_doz00(obj_t BgL_envz00_1811,
		obj_t BgL_expz00_1812, obj_t BgL_ez00_1813)
	{
		{	/* Eval/expddo.scm 61 */
			return
				BGl_expandzd2dozd2zz__expander_doz00(BgL_expz00_1812, BgL_ez00_1813);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__expander_doz00()
	{
		{	/* Eval/expddo.scm 14 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__expander_doz00()
	{
		{	/* Eval/expddo.scm 14 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__expander_doz00()
	{
		{	/* Eval/expddo.scm 14 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__expander_doz00()
	{
		{	/* Eval/expddo.scm 14 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string1678z00zz__expander_doz00));
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 70989162),
				BSTRING_TO_STRING(BGl_string1678z00zz__expander_doz00));
			BGl_modulezd2initializa7ationz75zz__tvectorz00(((long) 135277364),
				BSTRING_TO_STRING(BGl_string1678z00zz__expander_doz00));
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 128218115),
				BSTRING_TO_STRING(BGl_string1678z00zz__expander_doz00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 340267996),
				BSTRING_TO_STRING(BGl_string1678z00zz__expander_doz00));
			BGl_modulezd2initializa7ationz75zz__bignumz00(((long) 6519875),
				BSTRING_TO_STRING(BGl_string1678z00zz__expander_doz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string1678z00zz__expander_doz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 193422032),
				BSTRING_TO_STRING(BGl_string1678z00zz__expander_doz00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 224967910),
				BSTRING_TO_STRING(BGl_string1678z00zz__expander_doz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 68572481),
				BSTRING_TO_STRING(BGl_string1678z00zz__expander_doz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long)
					420334581), BSTRING_TO_STRING(BGl_string1678z00zz__expander_doz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long)
					437057945), BSTRING_TO_STRING(BGl_string1678z00zz__expander_doz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonum_dtoaz00(((long)
					268155874), BSTRING_TO_STRING(BGl_string1678z00zz__expander_doz00));
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long)
					198621048), BSTRING_TO_STRING(BGl_string1678z00zz__expander_doz00));
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long)
					473309694), BSTRING_TO_STRING(BGl_string1678z00zz__expander_doz00));
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 459519474),
				BSTRING_TO_STRING(BGl_string1678z00zz__expander_doz00));
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 460263341),
				BSTRING_TO_STRING(BGl_string1678z00zz__expander_doz00));
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) -44274296),
				BSTRING_TO_STRING(BGl_string1678z00zz__expander_doz00));
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long)
					9614573), BSTRING_TO_STRING(BGl_string1678z00zz__expander_doz00));
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long)
					376927845), BSTRING_TO_STRING(BGl_string1678z00zz__expander_doz00));
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 190906089),
				BSTRING_TO_STRING(BGl_string1678z00zz__expander_doz00));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 331540733),
				BSTRING_TO_STRING(BGl_string1678z00zz__expander_doz00));
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 86988972),
				BSTRING_TO_STRING(BGl_string1678z00zz__expander_doz00));
			BGl_modulezd2initializa7ationz75zz__expandz00(((long) 414007030),
				BSTRING_TO_STRING(BGl_string1678z00zz__expander_doz00));
			return BGl_modulezd2initializa7ationz75zz__prognz00(((long) 177147628),
				BSTRING_TO_STRING(BGl_string1678z00zz__expander_doz00));
		}

	}

#ifdef __cplusplus
}
#endif
