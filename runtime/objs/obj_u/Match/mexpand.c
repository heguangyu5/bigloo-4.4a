/*===========================================================================*/
/*   (Match/mexpand.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Match/mexpand.scm -indent -o objs/obj_u/Match/mexpand.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_symbol1750z00zz__match_expandz00 = BUNSPEC;
	static obj_t BGl_symbol1753z00zz__match_expandz00 = BUNSPEC;
	static obj_t BGl_symbol1755z00zz__match_expandz00 = BUNSPEC;
	extern obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2matchzd2casez00zz__match_expandz00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__match_expandz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31202ze3ze5zz__match_expandz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__match_expandz00();
	extern obj_t BGl_jimzd2gensymzd2zz__match_s2cfunz00;
	extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zz__match_expandz00();
	static obj_t BGl_objectzd2initzd2zz__match_expandz00();
	extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62expandzd2matchzd2lambdaz62zz__match_expandz00(obj_t,
		obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_methodzd2initzd2zz__match_expandz00();
	static obj_t BGl_z62expandzd2matchzd2casez62zz__match_expandz00(obj_t, obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2matchzd2lambdaz00zz__match_expandz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31272ze3ze5zz__match_expandz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_list1736z00zz__match_expandz00 = BUNSPEC;
	static obj_t BGl_list1739z00zz__match_expandz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__match_expandz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__match_s2cfunz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__match_normaliza7eza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__match_descriptionsz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__match_compilerz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_list1752z00zz__match_expandz00 = BUNSPEC;
	static obj_t BGl_cnstzd2initzd2zz__match_expandz00();
	static obj_t BGl_za2thezd2emptyzd2envza2z00zz__match_expandz00 = BUNSPEC;
	static obj_t BGl_gczd2rootszd2initz00zz__match_expandz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__match_expandz00();
	extern obj_t BGl_patternzd2variableszd2zz__match_descriptionsz00(obj_t);
	extern obj_t BGl_pcompilez00zz__match_compilerz00(obj_t);
	static obj_t BGl_fetchzd2prototypeszd2zz__match_expandz00(obj_t);
	static obj_t BGl_symbol1737z00zz__match_expandz00 = BUNSPEC;
	static obj_t BGl_symbol1740z00zz__match_expandz00 = BUNSPEC;
	extern obj_t BGl_normaliza7ezd2patternz75zz__match_normaliza7eza7(obj_t);
	static obj_t BGl_symbol1743z00zz__match_expandz00 = BUNSPEC;
	static obj_t BGl_symbol1745z00zz__match_expandz00 = BUNSPEC;
	static obj_t BGl_symbol1747z00zz__match_expandz00 = BUNSPEC;
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string1738z00zz__match_expandz00,
		BgL_bgl_string1738za700za7za7_1758za7, "not", 3);
	      DEFINE_STRING(BGl_string1741z00zz__match_expandz00,
		BgL_bgl_string1741za700za7za7_1759za7, "any", 3);
	      DEFINE_STRING(BGl_string1742z00zz__match_expandz00,
		BgL_bgl_string1742za700za7za7_1760za7, "TAG-", 4);
	      DEFINE_STRING(BGl_string1744z00zz__match_expandz00,
		BgL_bgl_string1744za700za7za7_1761za7, "else", 4);
	      DEFINE_STRING(BGl_string1746z00zz__match_expandz00,
		BgL_bgl_string1746za700za7za7_1762za7, "tagged-or", 9);
	      DEFINE_STRING(BGl_string1748z00zz__match_expandz00,
		BgL_bgl_string1748za700za7za7_1763za7, "match-case", 10);
	      DEFINE_STRING(BGl_string1749z00zz__match_expandz00,
		BgL_bgl_string1749za700za7za7_1764za7, "Illegal expression", 18);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2matchzd2casezd2envzd2zz__match_expandz00,
		BgL_bgl_za762expandza7d2matc1765z00,
		BGl_z62expandzd2matchzd2casez62zz__match_expandz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1751z00zz__match_expandz00,
		BgL_bgl_string1751za700za7za7_1766za7, "labels", 6);
	      DEFINE_STRING(BGl_string1754z00zz__match_expandz00,
		BgL_bgl_string1754za700za7za7_1767za7, "t-or", 4);
	      DEFINE_STRING(BGl_string1756z00zz__match_expandz00,
		BgL_bgl_string1756za700za7za7_1768za7, "match-lambda", 12);
	      DEFINE_STRING(BGl_string1757z00zz__match_expandz00,
		BgL_bgl_string1757za700za7za7_1769za7, "__match_expand", 14);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2matchzd2lambdazd2envzd2zz__match_expandz00,
		BgL_bgl_za762expandza7d2matc1770z00,
		BGl_z62expandzd2matchzd2lambdaz62zz__match_expandz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_symbol1750z00zz__match_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol1753z00zz__match_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol1755z00zz__match_expandz00));
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zz__match_expandz00));
		     ADD_ROOT((void *) (&BGl_list1736z00zz__match_expandz00));
		     ADD_ROOT((void *) (&BGl_list1739z00zz__match_expandz00));
		     ADD_ROOT((void *) (&BGl_list1752z00zz__match_expandz00));
		   
			 ADD_ROOT((void *) (&BGl_za2thezd2emptyzd2envza2z00zz__match_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol1737z00zz__match_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol1740z00zz__match_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol1743z00zz__match_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol1745z00zz__match_expandz00));
		     ADD_ROOT((void *) (&BGl_symbol1747z00zz__match_expandz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__match_expandz00(long
		BgL_checksumz00_2138, char *BgL_fromz00_2139)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__match_expandz00))
				{
					BGl_requirezd2initializa7ationz75zz__match_expandz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__match_expandz00();
					BGl_cnstzd2initzd2zz__match_expandz00();
					BGl_importedzd2moduleszd2initz00zz__match_expandz00();
					return BGl_toplevelzd2initzd2zz__match_expandz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__match_expandz00()
	{
		{	/* Match/mexpand.scm 26 */
			BGl_symbol1737z00zz__match_expandz00 =
				bstring_to_symbol(BGl_string1738z00zz__match_expandz00);
			BGl_symbol1740z00zz__match_expandz00 =
				bstring_to_symbol(BGl_string1741z00zz__match_expandz00);
			BGl_list1739z00zz__match_expandz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1740z00zz__match_expandz00, BNIL);
			BGl_list1736z00zz__match_expandz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1737z00zz__match_expandz00,
				MAKE_YOUNG_PAIR(BGl_list1739z00zz__match_expandz00, BNIL));
			BGl_symbol1743z00zz__match_expandz00 =
				bstring_to_symbol(BGl_string1744z00zz__match_expandz00);
			BGl_symbol1745z00zz__match_expandz00 =
				bstring_to_symbol(BGl_string1746z00zz__match_expandz00);
			BGl_symbol1747z00zz__match_expandz00 =
				bstring_to_symbol(BGl_string1748z00zz__match_expandz00);
			BGl_symbol1750z00zz__match_expandz00 =
				bstring_to_symbol(BGl_string1751z00zz__match_expandz00);
			BGl_symbol1753z00zz__match_expandz00 =
				bstring_to_symbol(BGl_string1754z00zz__match_expandz00);
			BGl_list1752z00zz__match_expandz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1753z00zz__match_expandz00,
				MAKE_YOUNG_PAIR(BGl_symbol1745z00zz__match_expandz00, BNIL));
			return (BGl_symbol1755z00zz__match_expandz00 =
				bstring_to_symbol(BGl_string1756z00zz__match_expandz00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__match_expandz00()
	{
		{	/* Match/mexpand.scm 26 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__match_expandz00()
	{
		{	/* Match/mexpand.scm 26 */
			return (BGl_za2thezd2emptyzd2envza2z00zz__match_expandz00 =
				BNIL, BUNSPEC);
		}

	}



/* expand-match-lambda */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2matchzd2lambdaz00zz__match_expandz00(obj_t
		BgL_expz00_3)
	{
		{	/* Match/mexpand.scm 74 */
			{
				obj_t BgL_clausesz00_1161;
				obj_t BgL_kz00_1162;

				{	/* Match/mexpand.scm 98 */
					obj_t BgL_arg1197z00_1164;

					BgL_arg1197z00_1164 = CDR(((obj_t) BgL_expz00_3));
					{	/* Match/mexpand.scm 100 */
						obj_t BgL_zc3z04anonymousza31202ze3z87_2088;

						{
							int BgL_tmpz00_2163;

							BgL_tmpz00_2163 = (int) (((long) 1));
							BgL_zc3z04anonymousza31202ze3z87_2088 =
								MAKE_L_PROCEDURE
								(BGl_z62zc3z04anonymousza31202ze3ze5zz__match_expandz00,
								BgL_tmpz00_2163);
						}
						PROCEDURE_L_SET(BgL_zc3z04anonymousza31202ze3z87_2088,
							(int) (((long) 0)), BgL_expz00_3);
						BgL_clausesz00_1161 = BgL_arg1197z00_1164;
						BgL_kz00_1162 = BgL_zc3z04anonymousza31202ze3z87_2088;
					BgL_clauseszd2ze3patternz31_1163:
						if (NULLP(BgL_clausesz00_1161))
							{	/* Match/mexpand.scm 78 */
								return
									PROCEDURE_L_ENTRY(BgL_kz00_1162) (BgL_kz00_1162,
									BGl_list1736z00zz__match_expandz00, BNIL);
							}
						else
							{	/* Match/mexpand.scm 80 */
								bool_t BgL_test1773z00_2175;

								{	/* Match/mexpand.scm 80 */
									obj_t BgL_tmpz00_2176;

									BgL_tmpz00_2176 = CAR(((obj_t) BgL_clausesz00_1161));
									BgL_test1773z00_2175 = PAIRP(BgL_tmpz00_2176);
								}
								if (BgL_test1773z00_2175)
									{	/* Match/mexpand.scm 83 */
										obj_t BgL_patternz00_1199;
										obj_t BgL_actionsz00_1200;
										obj_t BgL_restz00_1201;

										{	/* Match/mexpand.scm 83 */
											obj_t BgL_pairz00_1698;

											BgL_pairz00_1698 = CAR(((obj_t) BgL_clausesz00_1161));
											BgL_patternz00_1199 = CAR(BgL_pairz00_1698);
										}
										{	/* Match/mexpand.scm 84 */
											obj_t BgL_pairz00_1702;

											BgL_pairz00_1702 = CAR(((obj_t) BgL_clausesz00_1161));
											BgL_actionsz00_1200 = CDR(BgL_pairz00_1702);
										}
										BgL_restz00_1201 = CDR(((obj_t) BgL_clausesz00_1161));
										{	/* Match/mexpand.scm 86 */
											obj_t BgL_tagz00_1202;

											BgL_tagz00_1202 =
												PROCEDURE_ENTRY(BGl_jimzd2gensymzd2zz__match_s2cfunz00)
												(BGl_jimzd2gensymzd2zz__match_s2cfunz00,
												BGl_string1742z00zz__match_expandz00, BEOA);
											if ((BgL_patternz00_1199 ==
													BGl_symbol1743z00zz__match_expandz00))
												{	/* Match/mexpand.scm 88 */
													obj_t BgL_arg1250z00_1204;
													obj_t BgL_arg1252z00_1205;

													{	/* Match/mexpand.scm 88 */
														obj_t BgL_arg1253z00_1206;

														{	/* Match/mexpand.scm 88 */
															obj_t BgL_arg1254z00_1207;
															obj_t BgL_arg1256z00_1208;

															BgL_arg1254z00_1207 =
																MAKE_YOUNG_PAIR
																(BGl_symbol1740z00zz__match_expandz00, BNIL);
															{	/* Match/mexpand.scm 88 */
																obj_t BgL_arg1258z00_1209;

																{	/* Match/mexpand.scm 88 */
																	obj_t BgL_arg1263z00_1210;

																	{	/* Match/mexpand.scm 88 */
																		obj_t BgL_arg1268z00_1211;

																		{	/* Match/mexpand.scm 88 */
																			obj_t BgL_arg1270z00_1212;

																			BgL_arg1270z00_1212 =
																				MAKE_YOUNG_PAIR
																				(BGl_symbol1740z00zz__match_expandz00,
																				BNIL);
																			BgL_arg1268z00_1211 =
																				MAKE_YOUNG_PAIR(BgL_arg1270z00_1212,
																				BNIL);
																		}
																		BgL_arg1263z00_1210 =
																			MAKE_YOUNG_PAIR
																			(BGl_symbol1737z00zz__match_expandz00,
																			BgL_arg1268z00_1211);
																	}
																	BgL_arg1258z00_1209 =
																		MAKE_YOUNG_PAIR(BgL_arg1263z00_1210, BNIL);
																}
																BgL_arg1256z00_1208 =
																	MAKE_YOUNG_PAIR(BgL_tagz00_1202,
																	BgL_arg1258z00_1209);
															}
															BgL_arg1253z00_1206 =
																MAKE_YOUNG_PAIR(BgL_arg1254z00_1207,
																BgL_arg1256z00_1208);
														}
														BgL_arg1250z00_1204 =
															MAKE_YOUNG_PAIR
															(BGl_symbol1745z00zz__match_expandz00,
															BgL_arg1253z00_1206);
													}
													{	/* Match/mexpand.scm 131 */
														obj_t BgL_arg1306z00_1704;

														BgL_arg1306z00_1704 =
															MAKE_YOUNG_PAIR(BgL_tagz00_1202,
															BgL_actionsz00_1200);
														BgL_arg1252z00_1205 =
															MAKE_YOUNG_PAIR(BgL_arg1306z00_1704, BNIL);
													}
													return
														PROCEDURE_L_ENTRY(BgL_kz00_1162) (BgL_kz00_1162,
														BgL_arg1250z00_1204, BgL_arg1252z00_1205);
												}
											else
												{	/* Match/mexpand.scm 93 */
													obj_t BgL_zc3z04anonymousza31272ze3z87_2089;

													{
														int BgL_tmpz00_2209;

														BgL_tmpz00_2209 = (int) (((long) 4));
														BgL_zc3z04anonymousza31272ze3z87_2089 =
															MAKE_L_PROCEDURE
															(BGl_z62zc3z04anonymousza31272ze3ze5zz__match_expandz00,
															BgL_tmpz00_2209);
													}
													PROCEDURE_L_SET(BgL_zc3z04anonymousza31272ze3z87_2089,
														(int) (((long) 0)), BgL_patternz00_1199);
													PROCEDURE_L_SET(BgL_zc3z04anonymousza31272ze3z87_2089,
														(int) (((long) 1)), BgL_tagz00_1202);
													PROCEDURE_L_SET(BgL_zc3z04anonymousza31272ze3z87_2089,
														(int) (((long) 2)), BgL_actionsz00_1200);
													PROCEDURE_L_SET(BgL_zc3z04anonymousza31272ze3z87_2089,
														(int) (((long) 3)), BgL_kz00_1162);
													{
														obj_t BgL_kz00_2221;
														obj_t BgL_clausesz00_2220;

														BgL_clausesz00_2220 = BgL_restz00_1201;
														BgL_kz00_2221 =
															BgL_zc3z04anonymousza31272ze3z87_2089;
														BgL_kz00_1162 = BgL_kz00_2221;
														BgL_clausesz00_1161 = BgL_clausesz00_2220;
														goto BgL_clauseszd2ze3patternz31_1163;
													}
												}
										}
									}
								else
									{	/* Match/mexpand.scm 80 */
										return
											BGl_errorz00zz__errorz00
											(BGl_symbol1747z00zz__match_expandz00,
											BGl_string1749z00zz__match_expandz00, BgL_expz00_3);
									}
							}
					}
				}
			}
		}

	}



/* &expand-match-lambda */
	obj_t BGl_z62expandzd2matchzd2lambdaz62zz__match_expandz00(obj_t
		BgL_envz00_2090, obj_t BgL_expz00_2091)
	{
		{	/* Match/mexpand.scm 74 */
			return BGl_expandzd2matchzd2lambdaz00zz__match_expandz00(BgL_expz00_2091);
		}

	}



/* &<@anonymous:1202> */
	obj_t BGl_z62zc3z04anonymousza31202ze3ze5zz__match_expandz00(obj_t
		BgL_envz00_2092, obj_t BgL_patz00_2094, obj_t BgL_envz00_2095)
	{
		{	/* Match/mexpand.scm 99 */
			{	/* Match/mexpand.scm 100 */
				obj_t BgL_expz00_2093;

				BgL_expz00_2093 = PROCEDURE_L_REF(BgL_envz00_2092, (int) (((long) 0)));
				{	/* Match/mexpand.scm 100 */
					obj_t BgL_compiledzd2patzd2_2107;
					obj_t BgL_prototypesz00_2108;

					BgL_compiledzd2patzd2_2107 =
						BGl_pcompilez00zz__match_compilerz00(BgL_patz00_2094);
					BgL_prototypesz00_2108 =
						BGl_fetchzd2prototypeszd2zz__match_expandz00(BgL_patz00_2094);
					{	/* Match/mexpand.scm 105 */
						obj_t BgL_arg1208z00_2109;

						{	/* Match/mexpand.scm 105 */
							obj_t BgL_arg1211z00_2110;
							obj_t BgL_arg1216z00_2111;

							{	/* Match/mexpand.scm 105 */
								obj_t BgL_arg1221z00_2112;

								if (NULLP(BgL_prototypesz00_2108))
									{	/* Match/mexpand.scm 105 */
										BgL_arg1221z00_2112 = BNIL;
									}
								else
									{	/* Match/mexpand.scm 105 */
										obj_t BgL_head1086z00_2113;

										{	/* Match/mexpand.scm 105 */
											obj_t BgL_res1668z00_2114;

											BgL_res1668z00_2114 = MAKE_YOUNG_PAIR(BNIL, BNIL);
											BgL_head1086z00_2113 = BgL_res1668z00_2114;
										}
										{
											obj_t BgL_l1084z00_2116;
											obj_t BgL_tail1087z00_2117;

											BgL_l1084z00_2116 = BgL_prototypesz00_2108;
											BgL_tail1087z00_2117 = BgL_head1086z00_2113;
										BgL_zc3z04anonymousza31223ze3z87_2115:
											if (NULLP(BgL_l1084z00_2116))
												{	/* Match/mexpand.scm 105 */
													BgL_arg1221z00_2112 = CDR(BgL_head1086z00_2113);
												}
											else
												{	/* Match/mexpand.scm 105 */
													obj_t BgL_newtail1088z00_2118;

													{	/* Match/mexpand.scm 105 */
														obj_t BgL_arg1227z00_2119;

														{	/* Match/mexpand.scm 105 */
															obj_t BgL_prototypez00_2120;

															BgL_prototypez00_2120 =
																CAR(((obj_t) BgL_l1084z00_2116));
															{	/* Match/mexpand.scm 107 */
																obj_t BgL_bodyz00_2121;

																{	/* Match/mexpand.scm 107 */
																	obj_t BgL_pairz00_2122;

																	BgL_pairz00_2122 =
																		BGl_assqz00zz__r4_pairs_and_lists_6_3z00(CAR
																		(((obj_t) BgL_prototypez00_2120)),
																		BgL_envz00_2095);
																	BgL_bodyz00_2121 = CDR(BgL_pairz00_2122);
																}
																if (NULLP(BgL_bodyz00_2121))
																	{	/* Match/mexpand.scm 108 */
																		BgL_arg1227z00_2119 =
																			BGl_errorz00zz__errorz00
																			(BGl_symbol1747z00zz__match_expandz00,
																			BGl_string1749z00zz__match_expandz00,
																			BgL_expz00_2093);
																	}
																else
																	{	/* Match/mexpand.scm 110 */
																		obj_t BgL_arg1229z00_2123;
																		obj_t BgL_arg1232z00_2124;

																		BgL_arg1229z00_2123 =
																			CAR(((obj_t) BgL_prototypez00_2120));
																		{	/* Match/mexpand.scm 111 */
																			obj_t BgL_arg1239z00_2125;

																			{	/* Match/mexpand.scm 111 */
																				obj_t BgL_pairz00_2126;

																				BgL_pairz00_2126 =
																					CDR(((obj_t) BgL_prototypez00_2120));
																				BgL_arg1239z00_2125 =
																					CAR(BgL_pairz00_2126);
																			}
																			BgL_arg1232z00_2124 =
																				MAKE_YOUNG_PAIR(BgL_arg1239z00_2125,
																				BgL_bodyz00_2121);
																		}
																		BgL_arg1227z00_2119 =
																			MAKE_YOUNG_PAIR(BgL_arg1229z00_2123,
																			BgL_arg1232z00_2124);
																	}
															}
														}
														{	/* Match/mexpand.scm 105 */
															obj_t BgL_res1671z00_2127;

															BgL_res1671z00_2127 =
																MAKE_YOUNG_PAIR(BgL_arg1227z00_2119, BNIL);
															BgL_newtail1088z00_2118 = BgL_res1671z00_2127;
														}
													}
													SET_CDR(BgL_tail1087z00_2117,
														BgL_newtail1088z00_2118);
													{	/* Match/mexpand.scm 105 */
														obj_t BgL_arg1225z00_2128;

														BgL_arg1225z00_2128 =
															CDR(((obj_t) BgL_l1084z00_2116));
														{
															obj_t BgL_tail1087z00_2255;
															obj_t BgL_l1084z00_2254;

															BgL_l1084z00_2254 = BgL_arg1225z00_2128;
															BgL_tail1087z00_2255 = BgL_newtail1088z00_2118;
															BgL_tail1087z00_2117 = BgL_tail1087z00_2255;
															BgL_l1084z00_2116 = BgL_l1084z00_2254;
															goto BgL_zc3z04anonymousza31223ze3z87_2115;
														}
													}
												}
										}
									}
								BgL_arg1211z00_2110 =
									BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg1221z00_2112, BNIL);
							}
							BgL_arg1216z00_2111 =
								MAKE_YOUNG_PAIR(BgL_compiledzd2patzd2_2107, BNIL);
							BgL_arg1208z00_2109 =
								MAKE_YOUNG_PAIR(BgL_arg1211z00_2110, BgL_arg1216z00_2111);
						}
						return
							MAKE_YOUNG_PAIR(BGl_symbol1750z00zz__match_expandz00,
							BgL_arg1208z00_2109);
					}
				}
			}
		}

	}



/* &<@anonymous:1272> */
	obj_t BGl_z62zc3z04anonymousza31272ze3ze5zz__match_expandz00(obj_t
		BgL_envz00_2096, obj_t BgL_patz00_2101, obj_t BgL_envz00_2102)
	{
		{	/* Match/mexpand.scm 92 */
			{	/* Match/mexpand.scm 93 */
				obj_t BgL_patternz00_2097;
				obj_t BgL_tagz00_2098;
				obj_t BgL_actionsz00_2099;
				obj_t BgL_kz00_2100;

				BgL_patternz00_2097 =
					PROCEDURE_L_REF(BgL_envz00_2096, (int) (((long) 0)));
				BgL_tagz00_2098 = PROCEDURE_L_REF(BgL_envz00_2096, (int) (((long) 1)));
				BgL_actionsz00_2099 =
					PROCEDURE_L_REF(BgL_envz00_2096, (int) (((long) 2)));
				BgL_kz00_2100 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_2096, (int) (((long) 3))));
				{	/* Match/mexpand.scm 93 */
					obj_t BgL_arg1273z00_2131;
					obj_t BgL_arg1274z00_2132;

					{	/* Match/mexpand.scm 93 */
						obj_t BgL_arg1275z00_2133;

						{	/* Match/mexpand.scm 93 */
							obj_t BgL_arg1276z00_2134;
							obj_t BgL_arg1277z00_2135;

							BgL_arg1276z00_2134 =
								BGl_normaliza7ezd2patternz75zz__match_normaliza7eza7
								(BgL_patternz00_2097);
							{	/* Match/mexpand.scm 93 */
								obj_t BgL_arg1280z00_2136;

								BgL_arg1280z00_2136 = MAKE_YOUNG_PAIR(BgL_patz00_2101, BNIL);
								BgL_arg1277z00_2135 =
									MAKE_YOUNG_PAIR(BgL_tagz00_2098, BgL_arg1280z00_2136);
							}
							BgL_arg1275z00_2133 =
								MAKE_YOUNG_PAIR(BgL_arg1276z00_2134, BgL_arg1277z00_2135);
						}
						BgL_arg1273z00_2131 =
							MAKE_YOUNG_PAIR(BGl_symbol1745z00zz__match_expandz00,
							BgL_arg1275z00_2133);
					}
					{	/* Match/mexpand.scm 131 */
						obj_t BgL_arg1306z00_2137;

						BgL_arg1306z00_2137 =
							MAKE_YOUNG_PAIR(BgL_tagz00_2098, BgL_actionsz00_2099);
						BgL_arg1274z00_2132 =
							MAKE_YOUNG_PAIR(BgL_arg1306z00_2137, BgL_envz00_2102);
					}
					return
						PROCEDURE_L_ENTRY(BgL_kz00_2100) (BgL_kz00_2100,
						BgL_arg1273z00_2131, BgL_arg1274z00_2132);
				}
			}
		}

	}



/* fetch-prototypes */
	obj_t BGl_fetchzd2prototypeszd2zz__match_expandz00(obj_t BgL_patz00_4)
	{
		{	/* Match/mexpand.scm 115 */
			if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CAR(
							((obj_t) BgL_patz00_4)), BGl_list1752z00zz__match_expandz00)))
				{	/* Match/mexpand.scm 117 */
					obj_t BgL_arg1284z00_1227;
					obj_t BgL_arg1285z00_1228;

					{	/* Match/mexpand.scm 117 */
						obj_t BgL_arg1286z00_1229;
						obj_t BgL_arg1287z00_1230;

						{	/* Match/mexpand.scm 117 */
							obj_t BgL_pairz00_1735;

							{	/* Match/mexpand.scm 117 */
								obj_t BgL_pairz00_1734;

								BgL_pairz00_1734 = CDR(((obj_t) BgL_patz00_4));
								BgL_pairz00_1735 = CDR(BgL_pairz00_1734);
							}
							BgL_arg1286z00_1229 = CAR(BgL_pairz00_1735);
						}
						{	/* Match/mexpand.scm 117 */
							obj_t BgL_arg1288z00_1231;

							{	/* Match/mexpand.scm 117 */
								obj_t BgL_arg1289z00_1232;

								{	/* Match/mexpand.scm 117 */
									obj_t BgL_pairz00_1739;

									BgL_pairz00_1739 = CDR(((obj_t) BgL_patz00_4));
									BgL_arg1289z00_1232 = CAR(BgL_pairz00_1739);
								}
								BgL_arg1288z00_1231 =
									BGl_patternzd2variableszd2zz__match_descriptionsz00
									(BgL_arg1289z00_1232);
							}
							BgL_arg1287z00_1230 = MAKE_YOUNG_PAIR(BgL_arg1288z00_1231, BNIL);
						}
						BgL_arg1284z00_1227 =
							MAKE_YOUNG_PAIR(BgL_arg1286z00_1229, BgL_arg1287z00_1230);
					}
					{	/* Match/mexpand.scm 118 */
						obj_t BgL_arg1290z00_1233;

						{	/* Match/mexpand.scm 118 */
							obj_t BgL_pairz00_1747;

							{	/* Match/mexpand.scm 118 */
								obj_t BgL_pairz00_1746;

								{	/* Match/mexpand.scm 118 */
									obj_t BgL_pairz00_1745;

									BgL_pairz00_1745 = CDR(((obj_t) BgL_patz00_4));
									BgL_pairz00_1746 = CDR(BgL_pairz00_1745);
								}
								BgL_pairz00_1747 = CDR(BgL_pairz00_1746);
							}
							BgL_arg1290z00_1233 = CAR(BgL_pairz00_1747);
						}
						BgL_arg1285z00_1228 =
							BGl_fetchzd2prototypeszd2zz__match_expandz00(BgL_arg1290z00_1233);
					}
					return MAKE_YOUNG_PAIR(BgL_arg1284z00_1227, BgL_arg1285z00_1228);
				}
			else
				{	/* Match/mexpand.scm 116 */
					return BNIL;
				}
		}

	}



/* expand-match-case */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2matchzd2casez00zz__match_expandz00(obj_t
		BgL_expz00_7)
	{
		{	/* Match/mexpand.scm 126 */
			{	/* Match/mexpand.scm 127 */
				obj_t BgL_arg1298z00_1239;
				obj_t BgL_arg1299z00_1240;

				{	/* Match/mexpand.scm 127 */
					obj_t BgL_arg1302z00_1243;

					{	/* Match/mexpand.scm 127 */
						obj_t BgL_arg1303z00_1244;

						{	/* Match/mexpand.scm 127 */
							obj_t BgL_arg1304z00_1245;

							{	/* Match/mexpand.scm 127 */
								obj_t BgL_pairz00_1760;

								BgL_pairz00_1760 = CDR(((obj_t) BgL_expz00_7));
								BgL_arg1304z00_1245 = CDR(BgL_pairz00_1760);
							}
							BgL_arg1303z00_1244 =
								MAKE_YOUNG_PAIR(BGl_symbol1755z00zz__match_expandz00,
								BgL_arg1304z00_1245);
						}
						{	/* Match/mexpand.scm 122 */
							bool_t BgL_test1779z00_2307;

							{	/* Match/mexpand.scm 122 */
								bool_t BgL_res1674z00_1765;

								BgL_res1674z00_1765 = EPAIRP(BgL_expz00_7);
								BgL_test1779z00_2307 = BgL_res1674z00_1765;
							}
							if (BgL_test1779z00_2307)
								{	/* Match/mexpand.scm 123 */
									obj_t BgL_arg1295z00_1762;
									obj_t BgL_arg1296z00_1763;
									obj_t BgL_arg1297z00_1764;

									BgL_arg1295z00_1762 = CAR(BgL_arg1303z00_1244);
									BgL_arg1296z00_1763 = CDR(BgL_arg1303z00_1244);
									BgL_arg1297z00_1764 = CER(((obj_t) BgL_expz00_7));
									{	/* Match/mexpand.scm 123 */
										obj_t BgL_res1675z00_1769;

										BgL_res1675z00_1769 =
											MAKE_YOUNG_EPAIR(BgL_arg1295z00_1762, BgL_arg1296z00_1763,
											BgL_arg1297z00_1764);
										BgL_arg1302z00_1243 = BgL_res1675z00_1769;
									}
								}
							else
								{	/* Match/mexpand.scm 122 */
									BgL_arg1302z00_1243 = BgL_arg1303z00_1244;
								}
						}
					}
					BgL_arg1298z00_1239 =
						BGl_expandzd2matchzd2lambdaz00zz__match_expandz00
						(BgL_arg1302z00_1243);
				}
				{	/* Match/mexpand.scm 128 */
					obj_t BgL_pairz00_1773;

					BgL_pairz00_1773 = CDR(((obj_t) BgL_expz00_7));
					BgL_arg1299z00_1240 = CAR(BgL_pairz00_1773);
				}
				{	/* Match/mexpand.scm 127 */
					obj_t BgL_list1300z00_1241;

					{	/* Match/mexpand.scm 127 */
						obj_t BgL_arg1301z00_1242;

						BgL_arg1301z00_1242 = MAKE_YOUNG_PAIR(BgL_arg1299z00_1240, BNIL);
						BgL_list1300z00_1241 =
							MAKE_YOUNG_PAIR(BgL_arg1298z00_1239, BgL_arg1301z00_1242);
					}
					return BgL_list1300z00_1241;
				}
			}
		}

	}



/* &expand-match-case */
	obj_t BGl_z62expandzd2matchzd2casez62zz__match_expandz00(obj_t
		BgL_envz00_2103, obj_t BgL_expz00_2104)
	{
		{	/* Match/mexpand.scm 126 */
			return BGl_expandzd2matchzd2casez00zz__match_expandz00(BgL_expz00_2104);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__match_expandz00()
	{
		{	/* Match/mexpand.scm 26 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__match_expandz00()
	{
		{	/* Match/mexpand.scm 26 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__match_expandz00()
	{
		{	/* Match/mexpand.scm 26 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__match_expandz00()
	{
		{	/* Match/mexpand.scm 26 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string1757z00zz__match_expandz00));
			BGl_modulezd2initializa7ationz75zz__match_compilerz00(((long) 108809636),
				BSTRING_TO_STRING(BGl_string1757z00zz__match_expandz00));
			BGl_modulezd2initializa7ationz75zz__match_descriptionsz00(((long)
					232414647), BSTRING_TO_STRING(BGl_string1757z00zz__match_expandz00));
			BGl_modulezd2initializa7ationz75zz__match_normaliza7eza7(((long)
					515155831), BSTRING_TO_STRING(BGl_string1757z00zz__match_expandz00));
			BGl_modulezd2initializa7ationz75zz__match_s2cfunz00(((long) 509060642),
				BSTRING_TO_STRING(BGl_string1757z00zz__match_expandz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string1757z00zz__match_expandz00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 340267996),
				BSTRING_TO_STRING(BGl_string1757z00zz__match_expandz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 193422032),
				BSTRING_TO_STRING(BGl_string1757z00zz__match_expandz00));
			return BGl_modulezd2initializa7ationz75zz__threadz00(((long) 224967910),
				BSTRING_TO_STRING(BGl_string1757z00zz__match_expandz00));
		}

	}

#ifdef __cplusplus
}
#endif
