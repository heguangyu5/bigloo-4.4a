/*===========================================================================*/
/*   (Eval/expdcase.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Eval/expdcase.scm -indent -o objs/obj_u/Eval/expdcase.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern obj_t BGl_expandzd2prognzd2zz__prognz00(obj_t);
	static obj_t BGl_symbol1680z00zz__expander_casez00 = BUNSPEC;
	static obj_t BGl_symbol1682z00zz__expander_casez00 = BUNSPEC;
	static obj_t BGl_symbol1685z00zz__expander_casez00 = BUNSPEC;
	static obj_t BGl_symbol1687z00zz__expander_casez00 = BUNSPEC;
	static obj_t BGl_symbol1689z00zz__expander_casez00 = BUNSPEC;
	extern obj_t BGl_expandzd2errorzd2zz__expandz00(obj_t, obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__expander_casez00 = BUNSPEC;
	static obj_t BGl_symbol1691z00zz__expander_casez00 = BUNSPEC;
	static obj_t BGl_symbol1693z00zz__expander_casez00 = BUNSPEC;
	static obj_t BGl_genericzd2casezd2zz__expander_casez00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zz__expander_casez00();
	static obj_t BGl_objectzd2initzd2zz__expander_casez00();
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_methodzd2initzd2zz__expander_casez00();
	BGL_EXPORTED_DECL obj_t BGl_expandzd2evalzd2casez00zz__expander_casez00(obj_t,
		obj_t);
	extern obj_t BGl_evepairifyz00zz__prognz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__expander_casez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__expandz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__prognz00(long, char *);
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
	static obj_t BGl_z62expandzd2evalzd2casez62zz__expander_casez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_cnstzd2initzd2zz__expander_casez00();
	static obj_t BGl_gczd2rootszd2initz00zz__expander_casez00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__expander_casez00();
	static obj_t BGl_loopze70ze7zz__expander_casez00(obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2evalzd2casezd2envzd2zz__expander_casez00,
		BgL_bgl_za762expandza7d2eval1696z00,
		BGl_z62expandzd2evalzd2casez62zz__expander_casez00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1678z00zz__expander_casez00,
		BgL_bgl_string1678za700za7za7_1697za7, "case", 4);
	      DEFINE_STRING(BGl_string1679z00zz__expander_casez00,
		BgL_bgl_string1679za700za7za7_1698za7, "Illegal form", 12);
	      DEFINE_STRING(BGl_string1681z00zz__expander_casez00,
		BgL_bgl_string1681za700za7za7_1699za7, "case-value", 10);
	      DEFINE_STRING(BGl_string1683z00zz__expander_casez00,
		BgL_bgl_string1683za700za7za7_1700za7, "let", 3);
	      DEFINE_STRING(BGl_string1684z00zz__expander_casez00,
		BgL_bgl_string1684za700za7za7_1701za7, "Illegal `case' form", 19);
	      DEFINE_STRING(BGl_string1686z00zz__expander_casez00,
		BgL_bgl_string1686za700za7za7_1702za7, "quote", 5);
	      DEFINE_STRING(BGl_string1688z00zz__expander_casez00,
		BgL_bgl_string1688za700za7za7_1703za7, "eqv?", 4);
	      DEFINE_STRING(BGl_string1690z00zz__expander_casez00,
		BgL_bgl_string1690za700za7za7_1704za7, "if", 2);
	      DEFINE_STRING(BGl_string1692z00zz__expander_casez00,
		BgL_bgl_string1692za700za7za7_1705za7, "memv", 4);
	      DEFINE_STRING(BGl_string1694z00zz__expander_casez00,
		BgL_bgl_string1694za700za7za7_1706za7, "else", 4);
	      DEFINE_STRING(BGl_string1695z00zz__expander_casez00,
		BgL_bgl_string1695za700za7za7_1707za7, "__expander_case", 15);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_symbol1680z00zz__expander_casez00));
		     ADD_ROOT((void *) (&BGl_symbol1682z00zz__expander_casez00));
		     ADD_ROOT((void *) (&BGl_symbol1685z00zz__expander_casez00));
		     ADD_ROOT((void *) (&BGl_symbol1687z00zz__expander_casez00));
		     ADD_ROOT((void *) (&BGl_symbol1689z00zz__expander_casez00));
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zz__expander_casez00));
		     ADD_ROOT((void *) (&BGl_symbol1691z00zz__expander_casez00));
		     ADD_ROOT((void *) (&BGl_symbol1693z00zz__expander_casez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__expander_casez00(long
		BgL_checksumz00_1832, char *BgL_fromz00_1833)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__expander_casez00))
				{
					BGl_requirezd2initializa7ationz75zz__expander_casez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__expander_casez00();
					BGl_cnstzd2initzd2zz__expander_casez00();
					BGl_importedzd2moduleszd2initz00zz__expander_casez00();
					return BGl_methodzd2initzd2zz__expander_casez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__expander_casez00()
	{
		{	/* Eval/expdcase.scm 14 */
			BGl_symbol1680z00zz__expander_casez00 =
				bstring_to_symbol(BGl_string1681z00zz__expander_casez00);
			BGl_symbol1682z00zz__expander_casez00 =
				bstring_to_symbol(BGl_string1683z00zz__expander_casez00);
			BGl_symbol1685z00zz__expander_casez00 =
				bstring_to_symbol(BGl_string1686z00zz__expander_casez00);
			BGl_symbol1687z00zz__expander_casez00 =
				bstring_to_symbol(BGl_string1688z00zz__expander_casez00);
			BGl_symbol1689z00zz__expander_casez00 =
				bstring_to_symbol(BGl_string1690z00zz__expander_casez00);
			BGl_symbol1691z00zz__expander_casez00 =
				bstring_to_symbol(BGl_string1692z00zz__expander_casez00);
			return (BGl_symbol1693z00zz__expander_casez00 =
				bstring_to_symbol(BGl_string1694z00zz__expander_casez00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__expander_casez00()
	{
		{	/* Eval/expdcase.scm 14 */
			return bgl_gc_roots_register();
		}

	}



/* expand-eval-case */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2evalzd2casez00zz__expander_casez00(obj_t
		BgL_xz00_3, obj_t BgL_ez00_4)
	{
		{	/* Eval/expdcase.scm 54 */
			if (PAIRP(BgL_xz00_3))
				{	/* Eval/expdcase.scm 55 */
					obj_t BgL_cdrzd2109zd2_1072;

					BgL_cdrzd2109zd2_1072 = CDR(BgL_xz00_3);
					if (PAIRP(BgL_cdrzd2109zd2_1072))
						{	/* Eval/expdcase.scm 55 */
							return
								BGl_genericzd2casezd2zz__expander_casez00(BgL_xz00_3,
								CAR(BgL_cdrzd2109zd2_1072),
								CDR(BgL_cdrzd2109zd2_1072), BgL_ez00_4);
						}
					else
						{	/* Eval/expdcase.scm 55 */
							return
								BGl_expandzd2errorzd2zz__expandz00
								(BGl_string1678z00zz__expander_casez00,
								BGl_string1679z00zz__expander_casez00, BgL_xz00_3);
						}
				}
			else
				{	/* Eval/expdcase.scm 55 */
					return
						BGl_expandzd2errorzd2zz__expandz00
						(BGl_string1678z00zz__expander_casez00,
						BGl_string1679z00zz__expander_casez00, BgL_xz00_3);
				}
		}

	}



/* &expand-eval-case */
	obj_t BGl_z62expandzd2evalzd2casez62zz__expander_casez00(obj_t
		BgL_envz00_1828, obj_t BgL_xz00_1829, obj_t BgL_ez00_1830)
	{
		{	/* Eval/expdcase.scm 54 */
			return
				BGl_expandzd2evalzd2casez00zz__expander_casez00(BgL_xz00_1829,
				BgL_ez00_1830);
		}

	}



/* generic-case */
	obj_t BGl_genericzd2casezd2zz__expander_casez00(obj_t BgL_xz00_5,
		obj_t BgL_valuez00_6, obj_t BgL_clausesz00_7, obj_t BgL_ez00_8)
	{
		{	/* Eval/expdcase.scm 65 */
			{	/* Eval/expdcase.scm 66 */
				obj_t BgL_arg1172z00_1076;

				{	/* Eval/expdcase.scm 66 */
					obj_t BgL_arg1174z00_1077;

					{	/* Eval/expdcase.scm 66 */
						obj_t BgL_arg1175z00_1078;
						obj_t BgL_arg1176z00_1079;

						{	/* Eval/expdcase.scm 66 */
							obj_t BgL_arg1177z00_1080;

							{	/* Eval/expdcase.scm 66 */
								obj_t BgL_arg1178z00_1081;

								BgL_arg1178z00_1081 = MAKE_YOUNG_PAIR(BgL_valuez00_6, BNIL);
								BgL_arg1177z00_1080 =
									MAKE_YOUNG_PAIR(BGl_symbol1680z00zz__expander_casez00,
									BgL_arg1178z00_1081);
							}
							BgL_arg1175z00_1078 = MAKE_YOUNG_PAIR(BgL_arg1177z00_1080, BNIL);
						}
						BgL_arg1176z00_1079 =
							MAKE_YOUNG_PAIR(BGl_loopze70ze7zz__expander_casez00(BgL_xz00_5,
								BgL_clausesz00_7), BNIL);
						BgL_arg1174z00_1077 =
							MAKE_YOUNG_PAIR(BgL_arg1175z00_1078, BgL_arg1176z00_1079);
					}
					BgL_arg1172z00_1076 =
						MAKE_YOUNG_PAIR(BGl_symbol1682z00zz__expander_casez00,
						BgL_arg1174z00_1077);
				}
				return
					PROCEDURE_ENTRY(BgL_ez00_8) (BgL_ez00_8, BgL_arg1172z00_1076,
					BgL_ez00_8, BEOA);
			}
		}

	}



/* loop~0 */
	obj_t BGl_loopze70ze7zz__expander_casez00(obj_t BgL_xz00_1831,
		obj_t BgL_clausesz00_1084)
	{
		{	/* Eval/expdcase.scm 67 */
			if (NULLP(BgL_clausesz00_1084))
				{	/* Eval/expdcase.scm 68 */
					return BUNSPEC;
				}
			else
				{
					obj_t BgL_bodyz00_1088;
					obj_t BgL_datumsz00_1090;
					obj_t BgL_bodyz00_1091;
					obj_t BgL_datumsz00_1093;
					obj_t BgL_bodyz00_1094;

					{	/* Eval/expdcase.scm 70 */
						obj_t BgL_ezd2121zd2_1097;

						BgL_ezd2121zd2_1097 = CAR(((obj_t) BgL_clausesz00_1084));
						if (NULLP(BgL_ezd2121zd2_1097))
							{	/* Eval/expdcase.scm 70 */
								return BUNSPEC;
							}
						else
							{	/* Eval/expdcase.scm 70 */
								if (PAIRP(BgL_ezd2121zd2_1097))
									{	/* Eval/expdcase.scm 70 */
										if (
											(CAR(BgL_ezd2121zd2_1097) ==
												BGl_symbol1693z00zz__expander_casez00))
											{	/* Eval/expdcase.scm 70 */
												BgL_bodyz00_1088 = CDR(BgL_ezd2121zd2_1097);
												{	/* Eval/expdcase.scm 74 */
													bool_t BgL_test1715z00_1883;

													if (NULLP(CDR(((obj_t) BgL_clausesz00_1084))))
														{	/* Eval/expdcase.scm 74 */
															BgL_test1715z00_1883 = NULLP(BgL_bodyz00_1088);
														}
													else
														{	/* Eval/expdcase.scm 74 */
															BgL_test1715z00_1883 = ((bool_t) 1);
														}
													if (BgL_test1715z00_1883)
														{	/* Eval/expdcase.scm 74 */
															return
																BGl_expandzd2errorzd2zz__expandz00
																(BGl_string1678z00zz__expander_casez00,
																BGl_string1684z00zz__expander_casez00,
																BgL_xz00_1831);
														}
													else
														{	/* Eval/expdcase.scm 74 */
															return
																BGl_expandzd2prognzd2zz__prognz00
																(BgL_bodyz00_1088);
														}
												}
											}
										else
											{	/* Eval/expdcase.scm 70 */
												obj_t BgL_carzd2134zd2_1103;

												BgL_carzd2134zd2_1103 = CAR(BgL_ezd2121zd2_1097);
												if (PAIRP(BgL_carzd2134zd2_1103))
													{	/* Eval/expdcase.scm 70 */
														bool_t BgL_test1719z00_1895;

														{	/* Eval/expdcase.scm 70 */
															obj_t BgL_tmpz00_1896;

															BgL_tmpz00_1896 = CDR(BgL_carzd2134zd2_1103);
															BgL_test1719z00_1895 = PAIRP(BgL_tmpz00_1896);
														}
														if (BgL_test1719z00_1895)
															{	/* Eval/expdcase.scm 70 */
																BgL_datumsz00_1090 = BgL_carzd2134zd2_1103;
																BgL_bodyz00_1091 = CDR(BgL_ezd2121zd2_1097);
																if (NULLP(BgL_bodyz00_1091))
																	{	/* Eval/expdcase.scm 78 */
																		return
																			BGl_expandzd2errorzd2zz__expandz00
																			(BGl_string1678z00zz__expander_casez00,
																			BGl_string1684z00zz__expander_casez00,
																			BgL_xz00_1831);
																	}
																else
																	{	/* Eval/expdcase.scm 81 */
																		obj_t BgL_arg1247z00_1130;
																		obj_t BgL_arg1250z00_1131;

																		{	/* Eval/expdcase.scm 81 */
																			obj_t BgL_arg1252z00_1132;

																			{	/* Eval/expdcase.scm 81 */
																				obj_t BgL_arg1253z00_1133;
																				obj_t BgL_arg1254z00_1134;

																				{	/* Eval/expdcase.scm 81 */
																					obj_t BgL_arg1256z00_1135;

																					{	/* Eval/expdcase.scm 81 */
																						obj_t BgL_arg1258z00_1136;

																						{	/* Eval/expdcase.scm 81 */
																							obj_t BgL_arg1263z00_1137;

																							{	/* Eval/expdcase.scm 81 */
																								obj_t BgL_arg1268z00_1138;

																								BgL_arg1268z00_1138 =
																									MAKE_YOUNG_PAIR
																									(BgL_datumsz00_1090, BNIL);
																								BgL_arg1263z00_1137 =
																									MAKE_YOUNG_PAIR
																									(BGl_symbol1685z00zz__expander_casez00,
																									BgL_arg1268z00_1138);
																							}
																							BgL_arg1258z00_1136 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1263z00_1137, BNIL);
																						}
																						BgL_arg1256z00_1135 =
																							MAKE_YOUNG_PAIR
																							(BGl_symbol1680z00zz__expander_casez00,
																							BgL_arg1258z00_1136);
																					}
																					BgL_arg1253z00_1133 =
																						MAKE_YOUNG_PAIR
																						(BGl_symbol1691z00zz__expander_casez00,
																						BgL_arg1256z00_1135);
																				}
																				{	/* Eval/expdcase.scm 82 */
																					obj_t BgL_arg1270z00_1139;
																					obj_t BgL_arg1271z00_1140;

																					BgL_arg1270z00_1139 =
																						BGl_expandzd2prognzd2zz__prognz00
																						(BgL_bodyz00_1091);
																					{	/* Eval/expdcase.scm 83 */
																						obj_t BgL_arg1273z00_1141;

																						{	/* Eval/expdcase.scm 83 */
																							obj_t BgL_arg1274z00_1142;

																							BgL_arg1274z00_1142 =
																								CDR(
																								((obj_t) BgL_clausesz00_1084));
																							BgL_arg1273z00_1141 =
																								BGl_loopze70ze7zz__expander_casez00
																								(BgL_xz00_1831,
																								BgL_arg1274z00_1142);
																						}
																						BgL_arg1271z00_1140 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1273z00_1141, BNIL);
																					}
																					BgL_arg1254z00_1134 =
																						MAKE_YOUNG_PAIR(BgL_arg1270z00_1139,
																						BgL_arg1271z00_1140);
																				}
																				BgL_arg1252z00_1132 =
																					MAKE_YOUNG_PAIR(BgL_arg1253z00_1133,
																					BgL_arg1254z00_1134);
																			}
																			BgL_arg1247z00_1130 =
																				MAKE_YOUNG_PAIR
																				(BGl_symbol1689z00zz__expander_casez00,
																				BgL_arg1252z00_1132);
																		}
																		BgL_arg1250z00_1131 =
																			CAR(((obj_t) BgL_clausesz00_1084));
																		return
																			BGl_evepairifyz00zz__prognz00
																			(BgL_arg1247z00_1130,
																			BgL_arg1250z00_1131);
																	}
															}
														else
															{	/* Eval/expdcase.scm 70 */
																if (NULLP(CDR(((obj_t) BgL_carzd2134zd2_1103))))
																	{	/* Eval/expdcase.scm 70 */
																		obj_t BgL_arg1208z00_1111;
																		obj_t BgL_arg1211z00_1112;

																		BgL_arg1208z00_1111 =
																			CAR(((obj_t) BgL_carzd2134zd2_1103));
																		BgL_arg1211z00_1112 =
																			CDR(BgL_ezd2121zd2_1097);
																		BgL_datumsz00_1093 = BgL_arg1208z00_1111;
																		BgL_bodyz00_1094 = BgL_arg1211z00_1112;
																		if (NULLP(BgL_bodyz00_1094))
																			{	/* Eval/expdcase.scm 86 */
																				return
																					BGl_expandzd2errorzd2zz__expandz00
																					(BGl_string1678z00zz__expander_casez00,
																					BGl_string1684z00zz__expander_casez00,
																					BgL_xz00_1831);
																			}
																		else
																			{	/* Eval/expdcase.scm 89 */
																				obj_t BgL_arg1276z00_1144;
																				obj_t BgL_arg1277z00_1145;

																				{	/* Eval/expdcase.scm 89 */
																					obj_t BgL_arg1280z00_1146;

																					{	/* Eval/expdcase.scm 89 */
																						obj_t BgL_arg1281z00_1147;
																						obj_t BgL_arg1282z00_1148;

																						{	/* Eval/expdcase.scm 89 */
																							obj_t BgL_arg1284z00_1149;

																							{	/* Eval/expdcase.scm 89 */
																								obj_t BgL_arg1285z00_1150;

																								{	/* Eval/expdcase.scm 89 */
																									obj_t BgL_arg1286z00_1151;

																									{	/* Eval/expdcase.scm 89 */
																										obj_t BgL_arg1287z00_1152;

																										BgL_arg1287z00_1152 =
																											MAKE_YOUNG_PAIR
																											(BgL_datumsz00_1093,
																											BNIL);
																										BgL_arg1286z00_1151 =
																											MAKE_YOUNG_PAIR
																											(BGl_symbol1685z00zz__expander_casez00,
																											BgL_arg1287z00_1152);
																									}
																									BgL_arg1285z00_1150 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1286z00_1151, BNIL);
																								}
																								BgL_arg1284z00_1149 =
																									MAKE_YOUNG_PAIR
																									(BGl_symbol1680z00zz__expander_casez00,
																									BgL_arg1285z00_1150);
																							}
																							BgL_arg1281z00_1147 =
																								MAKE_YOUNG_PAIR
																								(BGl_symbol1687z00zz__expander_casez00,
																								BgL_arg1284z00_1149);
																						}
																						{	/* Eval/expdcase.scm 90 */
																							obj_t BgL_arg1288z00_1153;
																							obj_t BgL_arg1289z00_1154;

																							BgL_arg1288z00_1153 =
																								BGl_expandzd2prognzd2zz__prognz00
																								(BgL_bodyz00_1094);
																							{	/* Eval/expdcase.scm 91 */
																								obj_t BgL_arg1290z00_1155;

																								{	/* Eval/expdcase.scm 91 */
																									obj_t BgL_arg1291z00_1156;

																									BgL_arg1291z00_1156 =
																										CDR(
																										((obj_t)
																											BgL_clausesz00_1084));
																									BgL_arg1290z00_1155 =
																										BGl_loopze70ze7zz__expander_casez00
																										(BgL_xz00_1831,
																										BgL_arg1291z00_1156);
																								}
																								BgL_arg1289z00_1154 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1290z00_1155, BNIL);
																							}
																							BgL_arg1282z00_1148 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1288z00_1153,
																								BgL_arg1289z00_1154);
																						}
																						BgL_arg1280z00_1146 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1281z00_1147,
																							BgL_arg1282z00_1148);
																					}
																					BgL_arg1276z00_1144 =
																						MAKE_YOUNG_PAIR
																						(BGl_symbol1689z00zz__expander_casez00,
																						BgL_arg1280z00_1146);
																				}
																				BgL_arg1277z00_1145 =
																					CAR(((obj_t) BgL_clausesz00_1084));
																				return
																					BGl_evepairifyz00zz__prognz00
																					(BgL_arg1276z00_1144,
																					BgL_arg1277z00_1145);
																			}
																	}
																else
																	{	/* Eval/expdcase.scm 70 */
																		return
																			BGl_expandzd2errorzd2zz__expandz00
																			(BGl_string1678z00zz__expander_casez00,
																			BGl_string1684z00zz__expander_casez00,
																			BgL_xz00_1831);
																	}
															}
													}
												else
													{	/* Eval/expdcase.scm 70 */
														return
															BGl_expandzd2errorzd2zz__expandz00
															(BGl_string1678z00zz__expander_casez00,
															BGl_string1684z00zz__expander_casez00,
															BgL_xz00_1831);
													}
											}
									}
								else
									{	/* Eval/expdcase.scm 70 */
										return
											BGl_expandzd2errorzd2zz__expandz00
											(BGl_string1678z00zz__expander_casez00,
											BGl_string1684z00zz__expander_casez00, BgL_xz00_1831);
									}
							}
					}
				}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__expander_casez00()
	{
		{	/* Eval/expdcase.scm 14 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__expander_casez00()
	{
		{	/* Eval/expdcase.scm 14 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__expander_casez00()
	{
		{	/* Eval/expdcase.scm 14 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__expander_casez00()
	{
		{	/* Eval/expdcase.scm 14 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string1695z00zz__expander_casez00));
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 70989162),
				BSTRING_TO_STRING(BGl_string1695z00zz__expander_casez00));
			BGl_modulezd2initializa7ationz75zz__tvectorz00(((long) 135277364),
				BSTRING_TO_STRING(BGl_string1695z00zz__expander_casez00));
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 128218115),
				BSTRING_TO_STRING(BGl_string1695z00zz__expander_casez00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 340267996),
				BSTRING_TO_STRING(BGl_string1695z00zz__expander_casez00));
			BGl_modulezd2initializa7ationz75zz__bignumz00(((long) 6519875),
				BSTRING_TO_STRING(BGl_string1695z00zz__expander_casez00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string1695z00zz__expander_casez00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 193422032),
				BSTRING_TO_STRING(BGl_string1695z00zz__expander_casez00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 224967910),
				BSTRING_TO_STRING(BGl_string1695z00zz__expander_casez00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 68572481),
				BSTRING_TO_STRING(BGl_string1695z00zz__expander_casez00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long)
					420334581), BSTRING_TO_STRING(BGl_string1695z00zz__expander_casez00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long)
					437057945), BSTRING_TO_STRING(BGl_string1695z00zz__expander_casez00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonum_dtoaz00(((long)
					268155874), BSTRING_TO_STRING(BGl_string1695z00zz__expander_casez00));
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long)
					198621048), BSTRING_TO_STRING(BGl_string1695z00zz__expander_casez00));
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long)
					473309694), BSTRING_TO_STRING(BGl_string1695z00zz__expander_casez00));
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 459519474),
				BSTRING_TO_STRING(BGl_string1695z00zz__expander_casez00));
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 460263341),
				BSTRING_TO_STRING(BGl_string1695z00zz__expander_casez00));
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) -44274296),
				BSTRING_TO_STRING(BGl_string1695z00zz__expander_casez00));
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long)
					9614573), BSTRING_TO_STRING(BGl_string1695z00zz__expander_casez00));
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long)
					376927845), BSTRING_TO_STRING(BGl_string1695z00zz__expander_casez00));
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 190906089),
				BSTRING_TO_STRING(BGl_string1695z00zz__expander_casez00));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 331540733),
				BSTRING_TO_STRING(BGl_string1695z00zz__expander_casez00));
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 86988972),
				BSTRING_TO_STRING(BGl_string1695z00zz__expander_casez00));
			BGl_modulezd2initializa7ationz75zz__prognz00(((long) 177147628),
				BSTRING_TO_STRING(BGl_string1695z00zz__expander_casez00));
			return BGl_modulezd2initializa7ationz75zz__expandz00(((long) 414007030),
				BSTRING_TO_STRING(BGl_string1695z00zz__expander_casez00));
		}

	}

#ifdef __cplusplus
}
#endif
