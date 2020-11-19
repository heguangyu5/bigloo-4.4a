/*===========================================================================*/
/*   (Eval/evutils.scm)                                                      */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Eval/evutils.scm -indent -o objs/obj_u/Eval/evutils.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern bool_t BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__evutilsz00 = BUNSPEC;
	static obj_t BGl_z62bindingszd2ze3listz53zz__evutilsz00(obj_t, obj_t);
	static obj_t BGl_symbol1691z00zz__evutilsz00 = BUNSPEC;
	static obj_t BGl_symbol1694z00zz__evutilsz00 = BUNSPEC;
	static obj_t BGl_symbol1697z00zz__evutilsz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zz__evutilsz00();
	static obj_t BGl_objectzd2initzd2zz__evutilsz00();
	BGL_EXPORTED_DECL obj_t BGl_bindingszd2ze3listz31zz__evutilsz00(obj_t);
	extern obj_t BGl_errorzf2sourcezf2zz__errorz00(obj_t, obj_t, obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_parsezd2formalzd2identz00zz__evutilsz00(obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zz__evutilsz00();
	extern obj_t BGl_errorzf2sourcezd2locationz20zz__errorz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__evutilsz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__macroz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evenvz00(long, char *);
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
	extern obj_t BGl_modulezd2initializa7ationz75zz__dssslz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bignumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__tvectorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__typez00(long, char *);
	static obj_t BGl_cnstzd2initzd2zz__evutilsz00();
	static obj_t BGl_gczd2rootszd2initz00zz__evutilsz00();
	BGL_EXPORTED_DECL obj_t BGl_argszd2ze3listz31zz__evutilsz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__evutilsz00();
	static obj_t BGl_z62argszd2ze3listz53zz__evutilsz00(obj_t, obj_t);
	extern obj_t c_substring(obj_t, long, long);
	extern obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_z62parsezd2formalzd2identz62zz__evutilsz00(obj_t, obj_t,
		obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_argszd2ze3listzd2envze3zz__evutilsz00,
		BgL_bgl_za762argsza7d2za7e3lis1701za7,
		BGl_z62argszd2ze3listz53zz__evutilsz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1700z00zz__evutilsz00,
		BgL_bgl_string1700za700za7za7_1702za7, "__evutils", 9);
	      DEFINE_STRING(BGl_string1688z00zz__evutilsz00,
		BgL_bgl_string1688za700za7za7_1703za7, "parse-formal-ident", 18);
	      DEFINE_STRING(BGl_string1689z00zz__evutilsz00,
		BgL_bgl_string1689za700za7za7_1704za7, "Illegal empty identifier type", 29);
	      DEFINE_STRING(BGl_string1690z00zz__evutilsz00,
		BgL_bgl_string1690za700za7za7_1705za7, "", 0);
	      DEFINE_STRING(BGl_string1692z00zz__evutilsz00,
		BgL_bgl_string1692za700za7za7_1706za7, "dsssl", 5);
	      DEFINE_STRING(BGl_string1693z00zz__evutilsz00,
		BgL_bgl_string1693za700za7za7_1707za7, "Illegal identifier type", 23);
	      DEFINE_STRING(BGl_string1695z00zz__evutilsz00,
		BgL_bgl_string1695za700za7za7_1708za7, "args->list", 10);
	      DEFINE_STRING(BGl_string1696z00zz__evutilsz00,
		BgL_bgl_string1696za700za7za7_1709za7, "Illegal args list", 17);
	      DEFINE_STRING(BGl_string1698z00zz__evutilsz00,
		BgL_bgl_string1698za700za7za7_1710za7, "bindings->list", 14);
	      DEFINE_STRING(BGl_string1699z00zz__evutilsz00,
		BgL_bgl_string1699za700za7za7_1711za7, "Illegal bindings list", 21);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_parsezd2formalzd2identzd2envzd2zz__evutilsz00,
		BgL_bgl_za762parseza7d2forma1712z00,
		BGl_z62parsezd2formalzd2identz62zz__evutilsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_bindingszd2ze3listzd2envze3zz__evutilsz00,
		BgL_bgl_za762bindingsza7d2za7e1713za7,
		BGl_z62bindingszd2ze3listz53zz__evutilsz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__evutilsz00));
		     ADD_ROOT((void *) (&BGl_symbol1691z00zz__evutilsz00));
		     ADD_ROOT((void *) (&BGl_symbol1694z00zz__evutilsz00));
		     ADD_ROOT((void *) (&BGl_symbol1697z00zz__evutilsz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__evutilsz00(long
		BgL_checksumz00_1848, char *BgL_fromz00_1849)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__evutilsz00))
				{
					BGl_requirezd2initializa7ationz75zz__evutilsz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__evutilsz00();
					BGl_cnstzd2initzd2zz__evutilsz00();
					BGl_importedzd2moduleszd2initz00zz__evutilsz00();
					return BGl_methodzd2initzd2zz__evutilsz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__evutilsz00()
	{
		{	/* Eval/evutils.scm 15 */
			BGl_symbol1691z00zz__evutilsz00 =
				bstring_to_symbol(BGl_string1692z00zz__evutilsz00);
			BGl_symbol1694z00zz__evutilsz00 =
				bstring_to_symbol(BGl_string1695z00zz__evutilsz00);
			return (BGl_symbol1697z00zz__evutilsz00 =
				bstring_to_symbol(BGl_string1698z00zz__evutilsz00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__evutilsz00()
	{
		{	/* Eval/evutils.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* parse-formal-ident */
	BGL_EXPORTED_DEF obj_t BGl_parsezd2formalzd2identz00zz__evutilsz00(obj_t
		BgL_identz00_3, obj_t BgL_locz00_4)
	{
		{	/* Eval/evutils.scm 57 */
			{
				obj_t BgL_identz00_1081;

				if (BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(BgL_identz00_3))
					{	/* Eval/evutils.scm 84 */
						return
							MAKE_YOUNG_PAIR(BGl_gensymz00zz__r4_symbols_6_4z00
							(BGl_symbol1691z00zz__evutilsz00), BNIL);
					}
				else
					{	/* Eval/evutils.scm 86 */
						bool_t BgL_test1716z00_1865;

						if (PAIRP(BgL_identz00_3))
							{	/* Eval/evutils.scm 86 */
								obj_t BgL_tmpz00_1868;

								BgL_tmpz00_1868 = CAR(BgL_identz00_3);
								BgL_test1716z00_1865 = SYMBOLP(BgL_tmpz00_1868);
							}
						else
							{	/* Eval/evutils.scm 86 */
								BgL_test1716z00_1865 = ((bool_t) 0);
							}
						if (BgL_test1716z00_1865)
							{	/* Eval/evutils.scm 86 */
								return MAKE_YOUNG_PAIR(BgL_identz00_3, BNIL);
							}
						else
							{	/* Eval/evutils.scm 86 */
								if (SYMBOLP(BgL_identz00_3))
									{	/* Eval/evutils.scm 88 */
										BgL_identz00_1081 = BgL_identz00_3;
										{	/* Eval/evutils.scm 60 */
											obj_t BgL_strz00_1083;

											{	/* Eval/evutils.scm 60 */
												obj_t BgL_res1607z00_1535;

												BgL_res1607z00_1535 =
													SYMBOL_TO_STRING(BgL_identz00_1081);
												BgL_strz00_1083 = BgL_res1607z00_1535;
											}
											{	/* Eval/evutils.scm 60 */
												long BgL_lenz00_1084;

												BgL_lenz00_1084 = STRING_LENGTH(BgL_strz00_1083);
												{	/* Eval/evutils.scm 61 */

													{
														long BgL_iz00_1086;

														BgL_iz00_1086 = ((long) 0);
													BgL_zc3z04anonymousza31177ze3z87_1087:
														if ((BgL_iz00_1086 == BgL_lenz00_1084))
															{	/* Eval/evutils.scm 64 */
																return MAKE_YOUNG_PAIR(BgL_identz00_1081, BNIL);
															}
														else
															{	/* Eval/evutils.scm 66 */
																bool_t BgL_test1721z00_1879;

																if (
																	(STRING_REF(BgL_strz00_1083,
																			BgL_iz00_1086) == ((unsigned char) ':')))
																	{	/* Eval/evutils.scm 66 */
																		if (
																			(BgL_iz00_1086 <
																				(BgL_lenz00_1084 - ((long) 1))))
																			{	/* Eval/evutils.scm 67 */
																				BgL_test1721z00_1879 =
																					(STRING_REF(BgL_strz00_1083,
																						(BgL_iz00_1086 + ((long) 1))) ==
																					((unsigned char) ':'));
																			}
																		else
																			{	/* Eval/evutils.scm 67 */
																				BgL_test1721z00_1879 = ((bool_t) 0);
																			}
																	}
																else
																	{	/* Eval/evutils.scm 66 */
																		BgL_test1721z00_1879 = ((bool_t) 0);
																	}
																if (BgL_test1721z00_1879)
																	{	/* Eval/evutils.scm 66 */
																		if (
																			(BgL_iz00_1086 ==
																				(BgL_lenz00_1084 - ((long) 2))))
																			{	/* Eval/evutils.scm 70 */
																				return
																					BGl_errorzf2sourcezd2locationz20zz__errorz00
																					(BGl_string1688z00zz__evutilsz00,
																					BGl_string1689z00zz__evutilsz00,
																					BgL_identz00_1081, BgL_locz00_4);
																			}
																		else
																			{	/* Eval/evutils.scm 70 */
																				if ((BgL_iz00_1086 == ((long) 0)))
																					{	/* Eval/evutils.scm 75 */
																						return
																							MAKE_YOUNG_PAIR(bstring_to_symbol
																							(BGl_string1690z00zz__evutilsz00),
																							BgL_identz00_1081);
																					}
																				else
																					{	/* Eval/evutils.scm 75 */
																						return
																							MAKE_YOUNG_PAIR(bstring_to_symbol
																							(c_substring(BgL_strz00_1083,
																									((long) 0), BgL_iz00_1086)),
																							bstring_to_symbol(c_substring
																								(BgL_strz00_1083,
																									(BgL_iz00_1086 + ((long) 2)),
																									BgL_lenz00_1084)));
																	}}}
																else
																	{
																		long BgL_iz00_1903;

																		BgL_iz00_1903 =
																			(BgL_iz00_1086 + ((long) 1));
																		BgL_iz00_1086 = BgL_iz00_1903;
																		goto BgL_zc3z04anonymousza31177ze3z87_1087;
																	}
															}
													}
												}
											}
										}
									}
								else
									{	/* Eval/evutils.scm 88 */
										return
											BGl_errorzf2sourcezd2locationz20zz__errorz00
											(BGl_string1688z00zz__evutilsz00,
											BGl_string1693z00zz__evutilsz00, BgL_identz00_3,
											BgL_locz00_4);
									}
							}
					}
			}
		}

	}



/* &parse-formal-ident */
	obj_t BGl_z62parsezd2formalzd2identz62zz__evutilsz00(obj_t BgL_envz00_1841,
		obj_t BgL_identz00_1842, obj_t BgL_locz00_1843)
	{
		{	/* Eval/evutils.scm 57 */
			return
				BGl_parsezd2formalzd2identz00zz__evutilsz00(BgL_identz00_1842,
				BgL_locz00_1843);
		}

	}



/* args->list */
	BGL_EXPORTED_DEF obj_t BGl_argszd2ze3listz31zz__evutilsz00(obj_t
		BgL_argsz00_5)
	{
		{	/* Eval/evutils.scm 99 */
			if (NULLP(BgL_argsz00_5))
				{	/* Eval/evutils.scm 101 */
					return BNIL;
				}
			else
				{	/* Eval/evutils.scm 101 */
					if (SYMBOLP(BgL_argsz00_5))
						{	/* Eval/evutils.scm 104 */
							obj_t BgL_list1248z00_1119;

							BgL_list1248z00_1119 = MAKE_YOUNG_PAIR(BgL_argsz00_5, BNIL);
							return BgL_list1248z00_1119;
						}
					else
						{	/* Eval/evutils.scm 103 */
							if (PAIRP(BgL_argsz00_5))
								{	/* Eval/evutils.scm 105 */
									return
										MAKE_YOUNG_PAIR(CAR(BgL_argsz00_5),
										BGl_argszd2ze3listz31zz__evutilsz00(CDR(BgL_argsz00_5)));
								}
							else
								{	/* Eval/evutils.scm 105 */
									return
										BGl_errorzf2sourcezf2zz__errorz00
										(BGl_symbol1694z00zz__evutilsz00,
										BGl_string1696z00zz__evutilsz00, BgL_argsz00_5,
										BgL_argsz00_5);
								}
						}
				}
		}

	}



/* &args->list */
	obj_t BGl_z62argszd2ze3listz53zz__evutilsz00(obj_t BgL_envz00_1844,
		obj_t BgL_argsz00_1845)
	{
		{	/* Eval/evutils.scm 99 */
			return BGl_argszd2ze3listz31zz__evutilsz00(BgL_argsz00_1845);
		}

	}



/* bindings->list */
	BGL_EXPORTED_DEF obj_t BGl_bindingszd2ze3listz31zz__evutilsz00(obj_t
		BgL_bindingsz00_6)
	{
		{	/* Eval/evutils.scm 113 */
			if (NULLP(BgL_bindingsz00_6))
				{	/* Eval/evutils.scm 115 */
					return BNIL;
				}
			else
				{	/* Eval/evutils.scm 115 */
					if (PAIRP(BgL_bindingsz00_6))
						{	/* Eval/evutils.scm 119 */
							bool_t BgL_test1732z00_1924;

							{	/* Eval/evutils.scm 119 */
								obj_t BgL_tmpz00_1925;

								BgL_tmpz00_1925 = CAR(BgL_bindingsz00_6);
								BgL_test1732z00_1924 = SYMBOLP(BgL_tmpz00_1925);
							}
							if (BgL_test1732z00_1924)
								{	/* Eval/evutils.scm 119 */
									return
										MAKE_YOUNG_PAIR(BgL_bindingsz00_6,
										BGl_bindingszd2ze3listz31zz__evutilsz00(CDR
											(BgL_bindingsz00_6)));
								}
							else
								{	/* Eval/evutils.scm 121 */
									bool_t BgL_test1733z00_1931;

									{	/* Eval/evutils.scm 121 */
										obj_t BgL_tmpz00_1932;

										BgL_tmpz00_1932 = CAR(BgL_bindingsz00_6);
										BgL_test1733z00_1931 = PAIRP(BgL_tmpz00_1932);
									}
									if (BgL_test1733z00_1931)
										{	/* Eval/evutils.scm 121 */
											return
												MAKE_YOUNG_PAIR(CAR(BgL_bindingsz00_6),
												BGl_bindingszd2ze3listz31zz__evutilsz00(CDR
													(BgL_bindingsz00_6)));
										}
									else
										{	/* Eval/evutils.scm 121 */
											return
												BGl_errorzf2sourcezf2zz__errorz00
												(BGl_symbol1697z00zz__evutilsz00,
												BGl_string1699z00zz__evutilsz00, BgL_bindingsz00_6,
												BgL_bindingsz00_6);
										}
								}
						}
					else
						{	/* Eval/evutils.scm 117 */
							return
								BGl_errorzf2sourcezf2zz__errorz00
								(BGl_symbol1697z00zz__evutilsz00,
								BGl_string1699z00zz__evutilsz00, BgL_bindingsz00_6,
								BgL_bindingsz00_6);
						}
				}
		}

	}



/* &bindings->list */
	obj_t BGl_z62bindingszd2ze3listz53zz__evutilsz00(obj_t BgL_envz00_1846,
		obj_t BgL_bindingsz00_1847)
	{
		{	/* Eval/evutils.scm 113 */
			return BGl_bindingszd2ze3listz31zz__evutilsz00(BgL_bindingsz00_1847);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__evutilsz00()
	{
		{	/* Eval/evutils.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__evutilsz00()
	{
		{	/* Eval/evutils.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__evutilsz00()
	{
		{	/* Eval/evutils.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__evutilsz00()
	{
		{	/* Eval/evutils.scm 15 */
			BGl_modulezd2initializa7ationz75zz__typez00(((long) 121046386),
				BSTRING_TO_STRING(BGl_string1700z00zz__evutilsz00));
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string1700z00zz__evutilsz00));
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 70989162),
				BSTRING_TO_STRING(BGl_string1700z00zz__evutilsz00));
			BGl_modulezd2initializa7ationz75zz__tvectorz00(((long) 135277364),
				BSTRING_TO_STRING(BGl_string1700z00zz__evutilsz00));
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 128218115),
				BSTRING_TO_STRING(BGl_string1700z00zz__evutilsz00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 340267996),
				BSTRING_TO_STRING(BGl_string1700z00zz__evutilsz00));
			BGl_modulezd2initializa7ationz75zz__bignumz00(((long) 6519875),
				BSTRING_TO_STRING(BGl_string1700z00zz__evutilsz00));
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 251315035),
				BSTRING_TO_STRING(BGl_string1700z00zz__evutilsz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string1700z00zz__evutilsz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 193422032),
				BSTRING_TO_STRING(BGl_string1700z00zz__evutilsz00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 224967910),
				BSTRING_TO_STRING(BGl_string1700z00zz__evutilsz00));
			BGl_modulezd2initializa7ationz75zz__dssslz00(((long) 443936798),
				BSTRING_TO_STRING(BGl_string1700z00zz__evutilsz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 68572481),
				BSTRING_TO_STRING(BGl_string1700z00zz__evutilsz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long)
					420334581), BSTRING_TO_STRING(BGl_string1700z00zz__evutilsz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long)
					437057945), BSTRING_TO_STRING(BGl_string1700z00zz__evutilsz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonum_dtoaz00(((long)
					268155874), BSTRING_TO_STRING(BGl_string1700z00zz__evutilsz00));
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long)
					198621048), BSTRING_TO_STRING(BGl_string1700z00zz__evutilsz00));
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long)
					473309694), BSTRING_TO_STRING(BGl_string1700z00zz__evutilsz00));
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 459519474),
				BSTRING_TO_STRING(BGl_string1700z00zz__evutilsz00));
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 460263341),
				BSTRING_TO_STRING(BGl_string1700z00zz__evutilsz00));
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) -44274296),
				BSTRING_TO_STRING(BGl_string1700z00zz__evutilsz00));
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long)
					9614573), BSTRING_TO_STRING(BGl_string1700z00zz__evutilsz00));
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long)
					376927845), BSTRING_TO_STRING(BGl_string1700z00zz__evutilsz00));
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 190906089),
				BSTRING_TO_STRING(BGl_string1700z00zz__evutilsz00));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 331540733),
				BSTRING_TO_STRING(BGl_string1700z00zz__evutilsz00));
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 86988972),
				BSTRING_TO_STRING(BGl_string1700z00zz__evutilsz00));
			BGl_modulezd2initializa7ationz75zz__evenvz00(((long) 528345319),
				BSTRING_TO_STRING(BGl_string1700z00zz__evutilsz00));
			BGl_modulezd2initializa7ationz75zz__macroz00(((long) 261395457),
				BSTRING_TO_STRING(BGl_string1700z00zz__evutilsz00));
			return BGl_modulezd2initializa7ationz75zz__bitz00(((long) 439352636),
				BSTRING_TO_STRING(BGl_string1700z00zz__evutilsz00));
		}

	}

#ifdef __cplusplus
}
#endif
