/*===========================================================================*/
/*   (Eval/expdbool.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Eval/expdbool.scm -indent -o objs/obj_u/Eval/expdbool.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern obj_t BGl_expandzd2prognzd2zz__prognz00(obj_t);
	extern obj_t BGl_putpropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t, obj_t);
	static obj_t BGl_symbol1750z00zz__expander_boolz00 = BUNSPEC;
	static obj_t BGl_symbol1752z00zz__expander_boolz00 = BUNSPEC;
	static obj_t BGl_symbol1754z00zz__expander_boolz00 = BUNSPEC;
	static obj_t BGl_symbol1756z00zz__expander_boolz00 = BUNSPEC;
	extern obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern int BGl_bigloozd2warningzd2zz__paramz00();
	extern obj_t BGl_expandzd2errorzd2zz__expandz00(obj_t, obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__expander_boolz00 = BUNSPEC;
	extern bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2condzd2zz__expander_boolz00(obj_t);
	extern obj_t BGl_warningz00zz__errorz00(obj_t);
	static obj_t BGl_genericzd2initzd2zz__expander_boolz00();
	static obj_t BGl_objectzd2initzd2zz__expander_boolz00();
	extern bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_methodzd2initzd2zz__expander_boolz00();
	static obj_t BGl_z62expandzd2condzb0zz__expander_boolz00(obj_t, obj_t);
	extern obj_t BGl_evepairifyzd2deepzd2zz__prognz00(obj_t, obj_t);
	static obj_t BGl_list1742z00zz__expander_boolz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__expander_boolz00(long, char *);
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
	static obj_t BGl_cnstzd2initzd2zz__expander_boolz00();
	extern long bgl_list_length(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__expander_boolz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__expander_boolz00();
	extern obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_symbol1743z00zz__expander_boolz00 = BUNSPEC;
	static obj_t BGl_symbol1747z00zz__expander_boolz00 = BUNSPEC;
	static obj_t BGl_symbol1748z00zz__expander_boolz00 = BUNSPEC;
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_expandzd2condzd2envz00zz__expander_boolz00,
		BgL_bgl_za762expandza7d2cond1760z00,
		BGl_z62expandzd2condzb0zz__expander_boolz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1744z00zz__expander_boolz00,
		BgL_bgl_string1744za700za7za7_1761za7, "else", 4);
	      DEFINE_STRING(BGl_string1745z00zz__expander_boolz00,
		BgL_bgl_string1745za700za7za7_1762za7, "cond", 4);
	      DEFINE_STRING(BGl_string1746z00zz__expander_boolz00,
		BgL_bgl_string1746za700za7za7_1763za7, "Illegal form", 12);
	      DEFINE_STRING(BGl_string1749z00zz__expander_boolz00,
		BgL_bgl_string1749za700za7za7_1764za7, "or", 2);
	      DEFINE_STRING(BGl_string1751z00zz__expander_boolz00,
		BgL_bgl_string1751za700za7za7_1765za7, "=>", 2);
	      DEFINE_STRING(BGl_string1753z00zz__expander_boolz00,
		BgL_bgl_string1753za700za7za7_1766za7, "non-user", 8);
	      DEFINE_STRING(BGl_string1755z00zz__expander_boolz00,
		BgL_bgl_string1755za700za7za7_1767za7, "let", 3);
	      DEFINE_STRING(BGl_string1757z00zz__expander_boolz00,
		BgL_bgl_string1757za700za7za7_1768za7, "if", 2);
	      DEFINE_STRING(BGl_string1758z00zz__expander_boolz00,
		BgL_bgl_string1758za700za7za7_1769za7, "ignored COND clauses -- ", 24);
	      DEFINE_STRING(BGl_string1759z00zz__expander_boolz00,
		BgL_bgl_string1759za700za7za7_1770za7, "__expander_bool", 15);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_symbol1750z00zz__expander_boolz00));
		     ADD_ROOT((void *) (&BGl_symbol1752z00zz__expander_boolz00));
		     ADD_ROOT((void *) (&BGl_symbol1754z00zz__expander_boolz00));
		     ADD_ROOT((void *) (&BGl_symbol1756z00zz__expander_boolz00));
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zz__expander_boolz00));
		     ADD_ROOT((void *) (&BGl_list1742z00zz__expander_boolz00));
		     ADD_ROOT((void *) (&BGl_symbol1743z00zz__expander_boolz00));
		     ADD_ROOT((void *) (&BGl_symbol1747z00zz__expander_boolz00));
		     ADD_ROOT((void *) (&BGl_symbol1748z00zz__expander_boolz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__expander_boolz00(long
		BgL_checksumz00_1930, char *BgL_fromz00_1931)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__expander_boolz00))
				{
					BGl_requirezd2initializa7ationz75zz__expander_boolz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__expander_boolz00();
					BGl_cnstzd2initzd2zz__expander_boolz00();
					BGl_importedzd2moduleszd2initz00zz__expander_boolz00();
					return BGl_methodzd2initzd2zz__expander_boolz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__expander_boolz00()
	{
		{	/* Eval/expdbool.scm 14 */
			BGl_symbol1743z00zz__expander_boolz00 =
				bstring_to_symbol(BGl_string1744z00zz__expander_boolz00);
			BGl_list1742z00zz__expander_boolz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1743z00zz__expander_boolz00, BNIL);
			BGl_symbol1747z00zz__expander_boolz00 =
				bstring_to_symbol(BGl_string1745z00zz__expander_boolz00);
			BGl_symbol1748z00zz__expander_boolz00 =
				bstring_to_symbol(BGl_string1749z00zz__expander_boolz00);
			BGl_symbol1750z00zz__expander_boolz00 =
				bstring_to_symbol(BGl_string1751z00zz__expander_boolz00);
			BGl_symbol1752z00zz__expander_boolz00 =
				bstring_to_symbol(BGl_string1753z00zz__expander_boolz00);
			BGl_symbol1754z00zz__expander_boolz00 =
				bstring_to_symbol(BGl_string1755z00zz__expander_boolz00);
			return (BGl_symbol1756z00zz__expander_boolz00 =
				bstring_to_symbol(BGl_string1757z00zz__expander_boolz00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__expander_boolz00()
	{
		{	/* Eval/expdbool.scm 14 */
			return bgl_gc_roots_register();
		}

	}



/* expand-cond */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2condzd2zz__expander_boolz00(obj_t
		BgL_expz00_7)
	{
		{	/* Eval/expdbool.scm 74 */
			{	/* Eval/expdbool.scm 75 */
				obj_t BgL_clausesz00_1067;

				BgL_clausesz00_1067 = CDR(((obj_t) BgL_expz00_7));
				{	/* Eval/expdbool.scm 75 */
					obj_t BgL_clause1z00_1068;

					if (PAIRP(BgL_clausesz00_1067))
						{	/* Eval/expdbool.scm 76 */
							BgL_clause1z00_1068 = CAR(BgL_clausesz00_1067);
						}
					else
						{	/* Eval/expdbool.scm 76 */
							BgL_clause1z00_1068 = BNIL;
						}
					{	/* Eval/expdbool.scm 76 */
						obj_t BgL_clause2zb2zb2_1069;

						if (PAIRP(BgL_clause1z00_1068))
							{	/* Eval/expdbool.scm 77 */
								BgL_clause2zb2zb2_1069 = CDR(((obj_t) BgL_clausesz00_1067));
							}
						else
							{	/* Eval/expdbool.scm 77 */
								BgL_clause2zb2zb2_1069 = BFALSE;
							}
						{	/* Eval/expdbool.scm 77 */

							if (NULLP(BgL_clause1z00_1068))
								{	/* Eval/expdbool.scm 79 */
									return BFALSE;
								}
							else
								{	/* Eval/expdbool.scm 81 */
									bool_t BgL_test1775z00_1959;

									if (PAIRP(BgL_clause1z00_1068))
										{	/* Eval/expdbool.scm 81 */
											BgL_test1775z00_1959 =
												BGl_equalzf3zf3zz__r4_equivalence_6_2z00
												(BgL_clause1z00_1068,
												BGl_list1742z00zz__expander_boolz00);
										}
									else
										{	/* Eval/expdbool.scm 81 */
											BgL_test1775z00_1959 = ((bool_t) 1);
										}
									if (BgL_test1775z00_1959)
										{	/* Eval/expdbool.scm 81 */
											return
												BGl_expandzd2errorzd2zz__expandz00
												(BGl_string1745z00zz__expander_boolz00,
												BGl_string1746z00zz__expander_boolz00, BgL_expz00_7);
										}
									else
										{	/* Eval/expdbool.scm 81 */
											if (NULLP(CDR(((obj_t) BgL_clause1z00_1068))))
												{	/* Eval/expdbool.scm 84 */
													obj_t BgL_resz00_1075;

													{	/* Eval/expdbool.scm 84 */
														obj_t BgL_arg1179z00_1083;

														{	/* Eval/expdbool.scm 84 */
															obj_t BgL_arg1186z00_1084;
															obj_t BgL_arg1190z00_1085;

															BgL_arg1186z00_1084 =
																CAR(((obj_t) BgL_clause1z00_1068));
															{	/* Eval/expdbool.scm 84 */
																obj_t BgL_arg1194z00_1086;

																{	/* Eval/expdbool.scm 84 */
																	obj_t BgL_arg1197z00_1087;

																	BgL_arg1197z00_1087 =
																		BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																		(BgL_clause2zb2zb2_1069, BNIL);
																	BgL_arg1194z00_1086 =
																		MAKE_YOUNG_PAIR
																		(BGl_symbol1747z00zz__expander_boolz00,
																		BgL_arg1197z00_1087);
																}
																BgL_arg1190z00_1085 =
																	MAKE_YOUNG_PAIR(BgL_arg1194z00_1086, BNIL);
															}
															BgL_arg1179z00_1083 =
																MAKE_YOUNG_PAIR(BgL_arg1186z00_1084,
																BgL_arg1190z00_1085);
														}
														BgL_resz00_1075 =
															MAKE_YOUNG_PAIR
															(BGl_symbol1748z00zz__expander_boolz00,
															BgL_arg1179z00_1083);
													}
													{	/* Eval/expdbool.scm 85 */
														bool_t BgL_test1778z00_1975;

														{	/* Eval/expdbool.scm 85 */
															obj_t BgL_arg1178z00_1082;

															BgL_arg1178z00_1082 =
																CAR(((obj_t) BgL_clause1z00_1068));
															{	/* Eval/expdbool.scm 85 */
																bool_t BgL_res1670z00_1608;

																BgL_res1670z00_1608 =
																	EPAIRP(BgL_arg1178z00_1082);
																BgL_test1778z00_1975 = BgL_res1670z00_1608;
															}
														}
														if (BgL_test1778z00_1975)
															{	/* Eval/expdbool.scm 86 */
																obj_t BgL_arg1174z00_1078;
																obj_t BgL_arg1175z00_1079;
																obj_t BgL_arg1176z00_1080;

																BgL_arg1174z00_1078 = CAR(BgL_resz00_1075);
																BgL_arg1175z00_1079 = CDR(BgL_resz00_1075);
																{	/* Eval/expdbool.scm 86 */
																	obj_t BgL_objz00_1612;

																	BgL_objz00_1612 =
																		CAR(((obj_t) BgL_clause1z00_1068));
																	BgL_arg1176z00_1080 = CER(BgL_objz00_1612);
																}
																{	/* Eval/expdbool.scm 86 */
																	obj_t BgL_res1671z00_1613;

																	BgL_res1671z00_1613 =
																		MAKE_YOUNG_EPAIR(BgL_arg1174z00_1078,
																		BgL_arg1175z00_1079, BgL_arg1176z00_1080);
																	return BgL_res1671z00_1613;
																}
															}
														else
															{	/* Eval/expdbool.scm 85 */
																return
																	BGl_evepairifyzd2deepzd2zz__prognz00
																	(BgL_resz00_1075, BgL_expz00_7);
															}
													}
												}
											else
												{	/* Eval/expdbool.scm 88 */
													bool_t BgL_test1779z00_1986;

													{	/* Eval/expdbool.scm 88 */
														bool_t BgL_test1780z00_1987;

														{	/* Eval/expdbool.scm 88 */
															obj_t BgL_tmpz00_1988;

															{	/* Eval/expdbool.scm 88 */
																obj_t BgL_pairz00_1617;

																BgL_pairz00_1617 =
																	CDR(((obj_t) BgL_clause1z00_1068));
																BgL_tmpz00_1988 = CAR(BgL_pairz00_1617);
															}
															BgL_test1780z00_1987 =
																(BgL_tmpz00_1988 ==
																BGl_symbol1750z00zz__expander_boolz00);
														}
														if (BgL_test1780z00_1987)
															{	/* Eval/expdbool.scm 88 */
																BgL_test1779z00_1986 =
																	(bgl_list_length(BgL_clause1z00_1068) ==
																	((long) 3));
															}
														else
															{	/* Eval/expdbool.scm 88 */
																BgL_test1779z00_1986 = ((bool_t) 0);
															}
													}
													if (BgL_test1779z00_1986)
														{	/* Eval/expdbool.scm 89 */
															obj_t BgL_auxz00_1093;

															{	/* Eval/expdbool.scm 55 */
																obj_t BgL_symbolz00_1620;

																{	/* Eval/expdbool.scm 55 */

																	{	/* Eval/expdbool.scm 55 */

																		BgL_symbolz00_1620 =
																			BGl_gensymz00zz__r4_symbols_6_4z00
																			(BFALSE);
																	}
																}
																BGl_putpropz12z12zz__r4_symbols_6_4z00
																	(BgL_symbolz00_1620,
																	BGl_symbol1752z00zz__expander_boolz00, BTRUE);
																BgL_auxz00_1093 = BgL_symbolz00_1620;
															}
															{	/* Eval/expdbool.scm 89 */
																obj_t BgL_testz00_1094;

																{	/* Eval/expdbool.scm 55 */
																	obj_t BgL_symbolz00_1622;

																	{	/* Eval/expdbool.scm 55 */

																		{	/* Eval/expdbool.scm 55 */

																			BgL_symbolz00_1622 =
																				BGl_gensymz00zz__r4_symbols_6_4z00
																				(BFALSE);
																		}
																	}
																	BGl_putpropz12z12zz__r4_symbols_6_4z00
																		(BgL_symbolz00_1622,
																		BGl_symbol1752z00zz__expander_boolz00,
																		BTRUE);
																	BgL_testz00_1094 = BgL_symbolz00_1622;
																}
																{	/* Eval/expdbool.scm 90 */
																	obj_t BgL_resz00_1095;

																	{	/* Eval/expdbool.scm 91 */
																		obj_t BgL_arg1232z00_1103;

																		{	/* Eval/expdbool.scm 91 */
																			obj_t BgL_arg1239z00_1104;
																			obj_t BgL_arg1242z00_1105;

																			{	/* Eval/expdbool.scm 91 */
																				obj_t BgL_arg1243z00_1106;

																				{	/* Eval/expdbool.scm 91 */
																					obj_t BgL_arg1245z00_1107;

																					{	/* Eval/expdbool.scm 91 */
																						obj_t BgL_arg1246z00_1108;

																						BgL_arg1246z00_1108 =
																							CAR(
																							((obj_t) BgL_clause1z00_1068));
																						BgL_arg1245z00_1107 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1246z00_1108, BNIL);
																					}
																					BgL_arg1243z00_1106 =
																						MAKE_YOUNG_PAIR(BgL_testz00_1094,
																						BgL_arg1245z00_1107);
																				}
																				BgL_arg1239z00_1104 =
																					MAKE_YOUNG_PAIR(BgL_arg1243z00_1106,
																					BNIL);
																			}
																			{	/* Eval/expdbool.scm 93 */
																				obj_t BgL_arg1247z00_1109;

																				{	/* Eval/expdbool.scm 93 */
																					obj_t BgL_arg1250z00_1110;

																					{	/* Eval/expdbool.scm 93 */
																						obj_t BgL_arg1252z00_1111;

																						{	/* Eval/expdbool.scm 93 */
																							obj_t BgL_arg1253z00_1112;
																							obj_t BgL_arg1254z00_1113;

																							{	/* Eval/expdbool.scm 93 */
																								obj_t BgL_arg1256z00_1114;

																								{	/* Eval/expdbool.scm 93 */
																									obj_t BgL_arg1258z00_1115;
																									obj_t BgL_arg1263z00_1116;

																									{	/* Eval/expdbool.scm 93 */
																										obj_t BgL_arg1268z00_1117;

																										{	/* Eval/expdbool.scm 93 */
																											obj_t BgL_arg1270z00_1118;

																											BgL_arg1270z00_1118 =
																												MAKE_YOUNG_PAIR
																												(BgL_testz00_1094,
																												BNIL);
																											BgL_arg1268z00_1117 =
																												MAKE_YOUNG_PAIR
																												(BgL_auxz00_1093,
																												BgL_arg1270z00_1118);
																										}
																										BgL_arg1258z00_1115 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1268z00_1117,
																											BNIL);
																									}
																									{	/* Eval/expdbool.scm 94 */
																										obj_t BgL_arg1271z00_1119;

																										{	/* Eval/expdbool.scm 94 */
																											obj_t BgL_arg1273z00_1120;
																											obj_t BgL_arg1274z00_1121;

																											{	/* Eval/expdbool.scm 94 */
																												obj_t BgL_pairz00_1630;

																												{	/* Eval/expdbool.scm 94 */
																													obj_t
																														BgL_pairz00_1629;
																													BgL_pairz00_1629 =
																														CDR(((obj_t)
																															BgL_clause1z00_1068));
																													BgL_pairz00_1630 =
																														CDR
																														(BgL_pairz00_1629);
																												}
																												BgL_arg1273z00_1120 =
																													CAR(BgL_pairz00_1630);
																											}
																											BgL_arg1274z00_1121 =
																												MAKE_YOUNG_PAIR
																												(BgL_auxz00_1093, BNIL);
																											BgL_arg1271z00_1119 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1273z00_1120,
																												BgL_arg1274z00_1121);
																										}
																										BgL_arg1263z00_1116 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1271z00_1119,
																											BNIL);
																									}
																									BgL_arg1256z00_1114 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1258z00_1115,
																										BgL_arg1263z00_1116);
																								}
																								BgL_arg1253z00_1112 =
																									MAKE_YOUNG_PAIR
																									(BGl_symbol1754z00zz__expander_boolz00,
																									BgL_arg1256z00_1114);
																							}
																							{	/* Eval/expdbool.scm 95 */
																								obj_t BgL_arg1275z00_1122;

																								{	/* Eval/expdbool.scm 95 */
																									obj_t BgL_arg1276z00_1123;

																									BgL_arg1276z00_1123 =
																										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																										(BgL_clause2zb2zb2_1069,
																										BNIL);
																									BgL_arg1275z00_1122 =
																										MAKE_YOUNG_PAIR
																										(BGl_symbol1747z00zz__expander_boolz00,
																										BgL_arg1276z00_1123);
																								}
																								BgL_arg1254z00_1113 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1275z00_1122, BNIL);
																							}
																							BgL_arg1252z00_1111 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1253z00_1112,
																								BgL_arg1254z00_1113);
																						}
																						BgL_arg1250z00_1110 =
																							MAKE_YOUNG_PAIR(BgL_testz00_1094,
																							BgL_arg1252z00_1111);
																					}
																					BgL_arg1247z00_1109 =
																						MAKE_YOUNG_PAIR
																						(BGl_symbol1756z00zz__expander_boolz00,
																						BgL_arg1250z00_1110);
																				}
																				BgL_arg1242z00_1105 =
																					MAKE_YOUNG_PAIR(BgL_arg1247z00_1109,
																					BNIL);
																			}
																			BgL_arg1232z00_1103 =
																				MAKE_YOUNG_PAIR(BgL_arg1239z00_1104,
																				BgL_arg1242z00_1105);
																		}
																		BgL_resz00_1095 =
																			MAKE_YOUNG_PAIR
																			(BGl_symbol1754z00zz__expander_boolz00,
																			BgL_arg1232z00_1103);
																	}
																	{	/* Eval/expdbool.scm 91 */

																		{	/* Eval/expdbool.scm 96 */
																			bool_t BgL_test1781z00_2025;

																			{	/* Eval/expdbool.scm 96 */
																				obj_t BgL_arg1229z00_1102;

																				BgL_arg1229z00_1102 =
																					CAR(((obj_t) BgL_clause1z00_1068));
																				{	/* Eval/expdbool.scm 96 */
																					bool_t BgL_res1673z00_1632;

																					BgL_res1673z00_1632 =
																						EPAIRP(BgL_arg1229z00_1102);
																					BgL_test1781z00_2025 =
																						BgL_res1673z00_1632;
																				}
																			}
																			if (BgL_test1781z00_2025)
																				{	/* Eval/expdbool.scm 97 */
																					obj_t BgL_arg1221z00_1098;
																					obj_t BgL_arg1223z00_1099;
																					obj_t BgL_arg1225z00_1100;

																					BgL_arg1221z00_1098 =
																						CAR(BgL_resz00_1095);
																					BgL_arg1223z00_1099 =
																						CDR(BgL_resz00_1095);
																					{	/* Eval/expdbool.scm 97 */
																						obj_t BgL_objz00_1636;

																						BgL_objz00_1636 =
																							CAR(
																							((obj_t) BgL_clause1z00_1068));
																						BgL_arg1225z00_1100 =
																							CER(BgL_objz00_1636);
																					}
																					{	/* Eval/expdbool.scm 97 */
																						obj_t BgL_res1674z00_1637;

																						BgL_res1674z00_1637 =
																							MAKE_YOUNG_EPAIR
																							(BgL_arg1221z00_1098,
																							BgL_arg1223z00_1099,
																							BgL_arg1225z00_1100);
																						return BgL_res1674z00_1637;
																					}
																				}
																			else
																				{	/* Eval/expdbool.scm 96 */
																					return
																						BGl_evepairifyzd2deepzd2zz__prognz00
																						(BgL_resz00_1095, BgL_expz00_7);
																				}
																		}
																	}
																}
															}
														}
													else
														{	/* Eval/expdbool.scm 88 */
															if (
																(CAR(
																		((obj_t) BgL_clause1z00_1068)) ==
																	BGl_symbol1743z00zz__expander_boolz00))
																{	/* Eval/expdbool.scm 99 */
																	{	/* Eval/expdbool.scm 100 */
																		bool_t BgL_test1783z00_2040;

																		if (PAIRP(BgL_clause2zb2zb2_1069))
																			{	/* Eval/expdbool.scm 100 */
																				int BgL_arg1286z00_1133;

																				BgL_arg1286z00_1133 =
																					BGl_bigloozd2warningzd2zz__paramz00();
																				BgL_test1783z00_2040 =
																					BGl_2ze3ze3zz__r4_numbers_6_5z00(BINT
																					(BgL_arg1286z00_1133),
																					BINT(((long) 0)));
																			}
																		else
																			{	/* Eval/expdbool.scm 100 */
																				BgL_test1783z00_2040 = ((bool_t) 0);
																			}
																		if (BgL_test1783z00_2040)
																			{	/* Eval/expdbool.scm 101 */
																				obj_t BgL_list1282z00_1129;

																				{	/* Eval/expdbool.scm 101 */
																					obj_t BgL_arg1284z00_1130;

																					{	/* Eval/expdbool.scm 101 */
																						obj_t BgL_arg1285z00_1131;

																						BgL_arg1285z00_1131 =
																							MAKE_YOUNG_PAIR
																							(BgL_clause2zb2zb2_1069, BNIL);
																						BgL_arg1284z00_1130 =
																							MAKE_YOUNG_PAIR
																							(BGl_string1758z00zz__expander_boolz00,
																							BgL_arg1285z00_1131);
																					}
																					BgL_list1282z00_1129 =
																						MAKE_YOUNG_PAIR
																						(BGl_string1745z00zz__expander_boolz00,
																						BgL_arg1284z00_1130);
																				}
																				BGl_warningz00zz__errorz00
																					(BgL_list1282z00_1129);
																			}
																		else
																			{	/* Eval/expdbool.scm 100 */
																				BFALSE;
																			}
																	}
																	{	/* Eval/expdbool.scm 102 */
																		obj_t BgL_arg1287z00_1134;

																		BgL_arg1287z00_1134 =
																			CDR(((obj_t) BgL_clause1z00_1068));
																		return
																			BGl_expandzd2prognzd2zz__prognz00
																			(BgL_arg1287z00_1134);
																	}
																}
															else
																{	/* Eval/expdbool.scm 104 */
																	obj_t BgL_ncondz00_1135;

																	{	/* Eval/expdbool.scm 104 */
																		obj_t BgL_ncz00_1168;

																		{	/* Eval/expdbool.scm 104 */
																			obj_t BgL_arg1334z00_1189;

																			BgL_arg1334z00_1189 =
																				BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																				(BgL_clause2zb2zb2_1069, BNIL);
																			BgL_ncz00_1168 =
																				MAKE_YOUNG_PAIR
																				(BGl_symbol1747z00zz__expander_boolz00,
																				BgL_arg1334z00_1189);
																		}
																		{	/* Eval/expdbool.scm 106 */
																			bool_t BgL_test1785z00_2056;

																			if (PAIRP(BgL_clause2zb2zb2_1069))
																				{	/* Eval/expdbool.scm 106 */
																					obj_t BgL_arg1333z00_1188;

																					BgL_arg1333z00_1188 =
																						CAR(BgL_clause2zb2zb2_1069);
																					{	/* Eval/expdbool.scm 106 */
																						bool_t BgL_res1677z00_1643;

																						BgL_res1677z00_1643 =
																							EPAIRP(BgL_arg1333z00_1188);
																						BgL_test1785z00_2056 =
																							BgL_res1677z00_1643;
																					}
																				}
																			else
																				{	/* Eval/expdbool.scm 106 */
																					BgL_test1785z00_2056 = ((bool_t) 0);
																				}
																			if (BgL_test1785z00_2056)
																				{	/* Eval/expdbool.scm 107 */
																					obj_t BgL_arg1315z00_1172;
																					obj_t BgL_arg1316z00_1173;
																					obj_t BgL_arg1317z00_1174;

																					BgL_arg1315z00_1172 =
																						CAR(BgL_ncz00_1168);
																					BgL_arg1316z00_1173 =
																						CDR(BgL_ncz00_1168);
																					BgL_arg1317z00_1174 =
																						CER(CAR(BgL_clause2zb2zb2_1069));
																					{	/* Eval/expdbool.scm 107 */
																						obj_t BgL_res1678z00_1648;

																						BgL_res1678z00_1648 =
																							MAKE_YOUNG_EPAIR
																							(BgL_arg1315z00_1172,
																							BgL_arg1316z00_1173,
																							BgL_arg1317z00_1174);
																						BgL_ncondz00_1135 =
																							BgL_res1678z00_1648;
																					}
																				}
																			else
																				{	/* Eval/expdbool.scm 108 */
																					bool_t BgL_test1787z00_2066;

																					{	/* Eval/expdbool.scm 108 */
																						obj_t BgL_arg1331z00_1186;

																						BgL_arg1331z00_1186 =
																							CAR(
																							((obj_t) BgL_clausesz00_1067));
																						{	/* Eval/expdbool.scm 108 */
																							bool_t BgL_res1679z00_1650;

																							BgL_res1679z00_1650 =
																								EPAIRP(BgL_arg1331z00_1186);
																							BgL_test1787z00_2066 =
																								BgL_res1679z00_1650;
																						}
																					}
																					if (BgL_test1787z00_2066)
																						{	/* Eval/expdbool.scm 109 */
																							obj_t BgL_arg1322z00_1178;
																							obj_t BgL_arg1324z00_1179;
																							obj_t BgL_arg1325z00_1180;

																							BgL_arg1322z00_1178 =
																								CAR(BgL_ncz00_1168);
																							BgL_arg1324z00_1179 =
																								CDR(BgL_ncz00_1168);
																							{	/* Eval/expdbool.scm 109 */
																								obj_t BgL_objz00_1654;

																								BgL_objz00_1654 =
																									CAR(
																									((obj_t)
																										BgL_clausesz00_1067));
																								BgL_arg1325z00_1180 =
																									CER(BgL_objz00_1654);
																							}
																							{	/* Eval/expdbool.scm 109 */
																								obj_t BgL_res1680z00_1655;

																								BgL_res1680z00_1655 =
																									MAKE_YOUNG_EPAIR
																									(BgL_arg1322z00_1178,
																									BgL_arg1324z00_1179,
																									BgL_arg1325z00_1180);
																								BgL_ncondz00_1135 =
																									BgL_res1680z00_1655;
																							}
																						}
																					else
																						{	/* Eval/expdbool.scm 110 */
																							bool_t BgL_test1788z00_2076;

																							{	/* Eval/expdbool.scm 110 */
																								bool_t BgL_res1681z00_1656;

																								BgL_res1681z00_1656 =
																									EPAIRP(BgL_clausesz00_1067);
																								BgL_test1788z00_2076 =
																									BgL_res1681z00_1656;
																							}
																							if (BgL_test1788z00_2076)
																								{	/* Eval/expdbool.scm 111 */
																									obj_t BgL_arg1328z00_1183;
																									obj_t BgL_arg1329z00_1184;
																									obj_t BgL_arg1330z00_1185;

																									BgL_arg1328z00_1183 =
																										CAR(BgL_ncz00_1168);
																									BgL_arg1329z00_1184 =
																										CDR(BgL_ncz00_1168);
																									BgL_arg1330z00_1185 =
																										CER(
																										((obj_t)
																											BgL_clausesz00_1067));
																									{	/* Eval/expdbool.scm 111 */
																										obj_t BgL_res1682z00_1660;

																										BgL_res1682z00_1660 =
																											MAKE_YOUNG_EPAIR
																											(BgL_arg1328z00_1183,
																											BgL_arg1329z00_1184,
																											BgL_arg1330z00_1185);
																										BgL_ncondz00_1135 =
																											BgL_res1682z00_1660;
																									}
																								}
																							else
																								{	/* Eval/expdbool.scm 110 */
																									BgL_ncondz00_1135 =
																										BgL_ncz00_1168;
																								}
																						}
																				}
																		}
																	}
																	{	/* Eval/expdbool.scm 104 */
																		obj_t BgL_locz00_1136;

																		{	/* Eval/expdbool.scm 114 */
																			bool_t BgL_test1789z00_2083;

																			{	/* Eval/expdbool.scm 114 */
																				bool_t BgL_res1683z00_1661;

																				BgL_res1683z00_1661 =
																					EPAIRP(BgL_expz00_7);
																				BgL_test1789z00_2083 =
																					BgL_res1683z00_1661;
																			}
																			if (BgL_test1789z00_2083)
																				{	/* Eval/expdbool.scm 114 */
																					BgL_locz00_1136 =
																						CER(((obj_t) BgL_expz00_7));
																				}
																			else
																				{	/* Eval/expdbool.scm 114 */
																					BgL_locz00_1136 = BFALSE;
																				}
																		}
																		{	/* Eval/expdbool.scm 114 */
																			obj_t BgL_loc1z00_1137;

																			{	/* Eval/expdbool.scm 115 */
																				bool_t BgL_test1790z00_2087;

																				{	/* Eval/expdbool.scm 115 */
																					bool_t BgL_res1684z00_1663;

																					BgL_res1684z00_1663 =
																						EPAIRP(BgL_clause1z00_1068);
																					BgL_test1790z00_2087 =
																						BgL_res1684z00_1663;
																				}
																				if (BgL_test1790z00_2087)
																					{	/* Eval/expdbool.scm 115 */
																						BgL_loc1z00_1137 =
																							CER(
																							((obj_t) BgL_clause1z00_1068));
																					}
																				else
																					{	/* Eval/expdbool.scm 115 */
																						BgL_loc1z00_1137 = BFALSE;
																					}
																			}
																			{	/* Eval/expdbool.scm 115 */
																				obj_t BgL_loc1zd2carzd2_1138;

																				{	/* Eval/expdbool.scm 116 */
																					bool_t BgL_test1791z00_2091;

																					{	/* Eval/expdbool.scm 116 */
																						obj_t BgL_arg1309z00_1165;

																						BgL_arg1309z00_1165 =
																							CAR(
																							((obj_t) BgL_clause1z00_1068));
																						{	/* Eval/expdbool.scm 116 */
																							bool_t BgL_res1685z00_1666;

																							BgL_res1685z00_1666 =
																								EPAIRP(BgL_arg1309z00_1165);
																							BgL_test1791z00_2091 =
																								BgL_res1685z00_1666;
																						}
																					}
																					if (BgL_test1791z00_2091)
																						{	/* Eval/expdbool.scm 116 */
																							obj_t BgL_objz00_1668;

																							BgL_objz00_1668 =
																								CAR(
																								((obj_t) BgL_clause1z00_1068));
																							BgL_loc1zd2carzd2_1138 =
																								CER(BgL_objz00_1668);
																						}
																					else
																						{	/* Eval/expdbool.scm 116 */
																							BgL_loc1zd2carzd2_1138 = BFALSE;
																						}
																				}
																				{	/* Eval/expdbool.scm 116 */
																					obj_t BgL_loc1zd2cdrzd2_1139;

																					{	/* Eval/expdbool.scm 117 */
																						bool_t BgL_test1792z00_2098;

																						{	/* Eval/expdbool.scm 117 */
																							obj_t BgL_arg1304z00_1161;

																							BgL_arg1304z00_1161 =
																								CDR(
																								((obj_t) BgL_clause1z00_1068));
																							{	/* Eval/expdbool.scm 117 */
																								bool_t BgL_res1686z00_1670;

																								BgL_res1686z00_1670 =
																									EPAIRP(BgL_arg1304z00_1161);
																								BgL_test1792z00_2098 =
																									BgL_res1686z00_1670;
																							}
																						}
																						if (BgL_test1792z00_2098)
																							{	/* Eval/expdbool.scm 117 */
																								obj_t BgL_objz00_1672;

																								BgL_objz00_1672 =
																									CDR(
																									((obj_t)
																										BgL_clause1z00_1068));
																								BgL_loc1zd2cdrzd2_1139 =
																									CER(BgL_objz00_1672);
																							}
																						else
																							{	/* Eval/expdbool.scm 117 */
																								BgL_loc1zd2cdrzd2_1139 = BFALSE;
																							}
																					}
																					{	/* Eval/expdbool.scm 117 */
																						obj_t BgL_locnz00_1140;

																						{	/* Eval/expdbool.scm 118 */
																							bool_t BgL_test1793z00_2105;

																							{	/* Eval/expdbool.scm 118 */
																								bool_t BgL_res1687z00_1673;

																								BgL_res1687z00_1673 =
																									EPAIRP
																									(BgL_clause2zb2zb2_1069);
																								BgL_test1793z00_2105 =
																									BgL_res1687z00_1673;
																							}
																							if (BgL_test1793z00_2105)
																								{	/* Eval/expdbool.scm 118 */
																									BgL_locnz00_1140 =
																										CER(
																										((obj_t)
																											BgL_clause2zb2zb2_1069));
																								}
																							else
																								{	/* Eval/expdbool.scm 118 */
																									BgL_locnz00_1140 = BFALSE;
																								}
																						}
																						{	/* Eval/expdbool.scm 118 */

																							{	/* Eval/expdbool.scm 120 */
																								obj_t BgL_arg1288z00_1141;
																								obj_t BgL_arg1289z00_1142;

																								{	/* Eval/expdbool.scm 120 */
																									obj_t BgL_arg1290z00_1143;
																									obj_t BgL_arg1291z00_1144;
																									obj_t BgL_arg1292z00_1145;

																									BgL_arg1290z00_1143 =
																										CAR(
																										((obj_t)
																											BgL_clause1z00_1068));
																									{	/* Eval/expdbool.scm 121 */
																										obj_t BgL_arg1295z00_1146;
																										obj_t BgL_arg1296z00_1147;
																										obj_t BgL_arg1297z00_1148;

																										{	/* Eval/expdbool.scm 121 */
																											obj_t BgL_arg1298z00_1149;

																											BgL_arg1298z00_1149 =
																												CDR(
																												((obj_t)
																													BgL_clause1z00_1068));
																											BgL_arg1295z00_1146 =
																												BGl_expandzd2prognzd2zz__prognz00
																												(BgL_arg1298z00_1149);
																										}
																										{	/* Eval/expdbool.scm 125 */
																											obj_t BgL_arg1299z00_1150;

																											if (CBOOL
																												(BgL_locnz00_1140))
																												{	/* Eval/expdbool.scm 125 */
																													BgL_arg1299z00_1150 =
																														BgL_locnz00_1140;
																												}
																											else
																												{	/* Eval/expdbool.scm 125 */
																													if (CBOOL
																														(BgL_loc1z00_1137))
																														{	/* Eval/expdbool.scm 125 */
																															BgL_arg1299z00_1150
																																=
																																BgL_loc1z00_1137;
																														}
																													else
																														{	/* Eval/expdbool.scm 125 */
																															BgL_arg1299z00_1150
																																=
																																BgL_locz00_1136;
																														}
																												}
																											if (CBOOL
																												(BgL_arg1299z00_1150))
																												{	/* Eval/expdbool.scm 68 */
																													obj_t
																														BgL_res1688z00_1677;
																													BgL_res1688z00_1677 =
																														MAKE_YOUNG_EPAIR
																														(BgL_ncondz00_1135,
																														BNIL,
																														BgL_arg1299z00_1150);
																													BgL_arg1296z00_1147 =
																														BgL_res1688z00_1677;
																												}
																											else
																												{	/* Eval/expdbool.scm 67 */
																													BgL_arg1296z00_1147 =
																														MAKE_YOUNG_PAIR
																														(BgL_ncondz00_1135,
																														BNIL);
																												}
																										}
																										if (CBOOL
																											(BgL_loc1zd2cdrzd2_1139))
																											{	/* Eval/expdbool.scm 126 */
																												BgL_arg1297z00_1148 =
																													BgL_loc1zd2cdrzd2_1139;
																											}
																										else
																											{	/* Eval/expdbool.scm 126 */
																												if (CBOOL
																													(BgL_loc1z00_1137))
																													{	/* Eval/expdbool.scm 126 */
																														BgL_arg1297z00_1148
																															=
																															BgL_loc1z00_1137;
																													}
																												else
																													{	/* Eval/expdbool.scm 126 */
																														BgL_arg1297z00_1148
																															= BgL_locz00_1136;
																													}
																											}
																										if (CBOOL
																											(BgL_arg1297z00_1148))
																											{	/* Eval/expdbool.scm 68 */
																												obj_t
																													BgL_res1689z00_1678;
																												BgL_res1689z00_1678 =
																													MAKE_YOUNG_EPAIR
																													(BgL_arg1295z00_1146,
																													BgL_arg1296z00_1147,
																													BgL_arg1297z00_1148);
																												BgL_arg1291z00_1144 =
																													BgL_res1689z00_1678;
																											}
																										else
																											{	/* Eval/expdbool.scm 67 */
																												BgL_arg1291z00_1144 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1295z00_1146,
																													BgL_arg1296z00_1147);
																											}
																									}
																									if (CBOOL
																										(BgL_loc1zd2carzd2_1138))
																										{	/* Eval/expdbool.scm 127 */
																											BgL_arg1292z00_1145 =
																												BgL_loc1zd2carzd2_1138;
																										}
																									else
																										{	/* Eval/expdbool.scm 127 */
																											BgL_arg1292z00_1145 =
																												BgL_locz00_1136;
																										}
																									if (CBOOL
																										(BgL_arg1292z00_1145))
																										{	/* Eval/expdbool.scm 68 */
																											obj_t BgL_res1690z00_1679;

																											BgL_res1690z00_1679 =
																												MAKE_YOUNG_EPAIR
																												(BgL_arg1290z00_1143,
																												BgL_arg1291z00_1144,
																												BgL_arg1292z00_1145);
																											BgL_arg1288z00_1141 =
																												BgL_res1690z00_1679;
																										}
																									else
																										{	/* Eval/expdbool.scm 67 */
																											BgL_arg1288z00_1141 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1290z00_1143,
																												BgL_arg1291z00_1144);
																										}
																								}
																								if (CBOOL(BgL_loc1z00_1137))
																									{	/* Eval/expdbool.scm 128 */
																										BgL_arg1289z00_1142 =
																											BgL_loc1z00_1137;
																									}
																								else
																									{	/* Eval/expdbool.scm 128 */
																										BgL_arg1289z00_1142 =
																											BgL_locz00_1136;
																									}
																								{	/* Eval/expdbool.scm 119 */
																									obj_t BgL_az00_1680;

																									BgL_az00_1680 =
																										BGl_symbol1756z00zz__expander_boolz00;
																									if (CBOOL
																										(BgL_arg1289z00_1142))
																										{	/* Eval/expdbool.scm 68 */
																											obj_t BgL_res1691z00_1681;

																											BgL_res1691z00_1681 =
																												MAKE_YOUNG_EPAIR
																												(BgL_az00_1680,
																												BgL_arg1288z00_1141,
																												BgL_arg1289z00_1142);
																											return
																												BgL_res1691z00_1681;
																										}
																									else
																										{	/* Eval/expdbool.scm 67 */
																											return
																												MAKE_YOUNG_PAIR
																												(BgL_az00_1680,
																												BgL_arg1288z00_1141);
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
										}
								}
						}
					}
				}
			}
		}

	}



/* &expand-cond */
	obj_t BGl_z62expandzd2condzb0zz__expander_boolz00(obj_t BgL_envz00_1928,
		obj_t BgL_expz00_1929)
	{
		{	/* Eval/expdbool.scm 74 */
			return BGl_expandzd2condzd2zz__expander_boolz00(BgL_expz00_1929);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__expander_boolz00()
	{
		{	/* Eval/expdbool.scm 14 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__expander_boolz00()
	{
		{	/* Eval/expdbool.scm 14 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__expander_boolz00()
	{
		{	/* Eval/expdbool.scm 14 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__expander_boolz00()
	{
		{	/* Eval/expdbool.scm 14 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string1759z00zz__expander_boolz00));
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 70989162),
				BSTRING_TO_STRING(BGl_string1759z00zz__expander_boolz00));
			BGl_modulezd2initializa7ationz75zz__tvectorz00(((long) 135277364),
				BSTRING_TO_STRING(BGl_string1759z00zz__expander_boolz00));
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 128218115),
				BSTRING_TO_STRING(BGl_string1759z00zz__expander_boolz00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 340267996),
				BSTRING_TO_STRING(BGl_string1759z00zz__expander_boolz00));
			BGl_modulezd2initializa7ationz75zz__bignumz00(((long) 6519875),
				BSTRING_TO_STRING(BGl_string1759z00zz__expander_boolz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string1759z00zz__expander_boolz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 193422032),
				BSTRING_TO_STRING(BGl_string1759z00zz__expander_boolz00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 224967910),
				BSTRING_TO_STRING(BGl_string1759z00zz__expander_boolz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 68572481),
				BSTRING_TO_STRING(BGl_string1759z00zz__expander_boolz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long)
					420334581), BSTRING_TO_STRING(BGl_string1759z00zz__expander_boolz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long)
					437057945), BSTRING_TO_STRING(BGl_string1759z00zz__expander_boolz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonum_dtoaz00(((long)
					268155874), BSTRING_TO_STRING(BGl_string1759z00zz__expander_boolz00));
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long)
					198621048), BSTRING_TO_STRING(BGl_string1759z00zz__expander_boolz00));
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long)
					473309694), BSTRING_TO_STRING(BGl_string1759z00zz__expander_boolz00));
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 459519474),
				BSTRING_TO_STRING(BGl_string1759z00zz__expander_boolz00));
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 460263341),
				BSTRING_TO_STRING(BGl_string1759z00zz__expander_boolz00));
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) -44274296),
				BSTRING_TO_STRING(BGl_string1759z00zz__expander_boolz00));
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long)
					9614573), BSTRING_TO_STRING(BGl_string1759z00zz__expander_boolz00));
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long)
					376927845), BSTRING_TO_STRING(BGl_string1759z00zz__expander_boolz00));
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 190906089),
				BSTRING_TO_STRING(BGl_string1759z00zz__expander_boolz00));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 331540733),
				BSTRING_TO_STRING(BGl_string1759z00zz__expander_boolz00));
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 86988972),
				BSTRING_TO_STRING(BGl_string1759z00zz__expander_boolz00));
			BGl_modulezd2initializa7ationz75zz__prognz00(((long) 177147628),
				BSTRING_TO_STRING(BGl_string1759z00zz__expander_boolz00));
			return BGl_modulezd2initializa7ationz75zz__expandz00(((long) 414007030),
				BSTRING_TO_STRING(BGl_string1759z00zz__expander_boolz00));
		}

	}

#ifdef __cplusplus
}
#endif
