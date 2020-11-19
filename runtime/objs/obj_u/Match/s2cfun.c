/*===========================================================================*/
/*   (Match/s2cfun.scm)                                                      */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Match/s2cfun.scm -indent -o objs/obj_u/Match/s2cfun.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_z62atomzf3z91zz__match_s2cfunz00(obj_t, obj_t);
	extern obj_t BGl_putpropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62concatz62zz__match_s2cfunz00(obj_t, obj_t);
	extern obj_t BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__match_s2cfunz00 = BUNSPEC;
	static obj_t BGl_symbol1778z00zz__match_s2cfunz00 = BUNSPEC;
	static obj_t BGl_z62ormapz62zz__match_s2cfunz00(obj_t, obj_t, obj_t);
	static obj_t BGl_symbol1780z00zz__match_s2cfunz00 = BUNSPEC;
	static obj_t BGl_symbol1782z00zz__match_s2cfunz00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zz__match_s2cfunz00();
	BGL_EXPORTED_DEF obj_t BGl_jimzd2gensymzd2zz__match_s2cfunz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zz__match_s2cfunz00();
	extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31222ze3ze5zz__match_s2cfunz00(obj_t,
		obj_t);
	extern obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zz__match_s2cfunz00();
	extern bool_t BGl_2zd3zd3zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_z62andmapz62zz__match_s2cfunz00(obj_t, obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_methodzd2initzd2zz__match_s2cfunz00();
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__match_s2cfunz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	extern bool_t BGl_numberzf3zf3zz__r4_numbers_6_5z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_concatz00zz__match_s2cfunz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zz__match_s2cfunz00();
	extern long bgl_list_length(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__match_s2cfunz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__match_s2cfunz00();
	BGL_EXPORTED_DECL obj_t BGl_atomzf3zf3zz__match_s2cfunz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_andmapz00zz__match_s2cfunz00(obj_t, obj_t);
	extern obj_t BGl_memberz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_ormapz00zz__match_s2cfunz00(obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_andmapzd2envzd2zz__match_s2cfunz00,
		BgL_bgl_za762andmapza762za7za7__1786z00, va_generic_entry,
		BGl_z62andmapz62zz__match_s2cfunz00, BUNSPEC, -2);
	      DEFINE_STRING(BGl_string1779z00zz__match_s2cfunz00,
		BgL_bgl_string1779za700za7za7_1787za7, "G", 1);
	      DEFINE_STRING(BGl_string1781z00zz__match_s2cfunz00,
		BgL_bgl_string1781za700za7za7_1788za7, "non-user", 8);
	      DEFINE_STRING(BGl_string1783z00zz__match_s2cfunz00,
		BgL_bgl_string1783za700za7za7_1789za7, "concat", 6);
	      DEFINE_STRING(BGl_string1784z00zz__match_s2cfunz00,
		BgL_bgl_string1784za700za7za7_1790za7, "", 0);
	      DEFINE_STRING(BGl_string1785z00zz__match_s2cfunz00,
		BgL_bgl_string1785za700za7za7_1791za7, "__match_s2cfun", 14);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_concatzd2envzd2zz__match_s2cfunz00,
		BgL_bgl_za762concatza762za7za7__1792z00, va_generic_entry,
		BGl_z62concatz62zz__match_s2cfunz00, BUNSPEC, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ormapzd2envzd2zz__match_s2cfunz00,
		BgL_bgl_za762ormapza762za7za7__m1793z00, va_generic_entry,
		BGl_z62ormapz62zz__match_s2cfunz00, BUNSPEC, -2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_atomzf3zd2envz21zz__match_s2cfunz00,
		BgL_bgl_za762atomza7f3za791za7za7_1794za7,
		BGl_z62atomzf3z91zz__match_s2cfunz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zz__match_s2cfunz00));
		     ADD_ROOT((void *) (&BGl_symbol1778z00zz__match_s2cfunz00));
		     ADD_ROOT((void *) (&BGl_symbol1780z00zz__match_s2cfunz00));
		     ADD_ROOT((void *) (&BGl_symbol1782z00zz__match_s2cfunz00));
		     ADD_ROOT((void *) (&BGl_jimzd2gensymzd2zz__match_s2cfunz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__match_s2cfunz00(long
		BgL_checksumz00_2297, char *BgL_fromz00_2298)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__match_s2cfunz00))
				{
					BGl_requirezd2initializa7ationz75zz__match_s2cfunz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__match_s2cfunz00();
					BGl_cnstzd2initzd2zz__match_s2cfunz00();
					BGl_importedzd2moduleszd2initz00zz__match_s2cfunz00();
					return BGl_toplevelzd2initzd2zz__match_s2cfunz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__match_s2cfunz00()
	{
		{	/* Match/s2cfun.scm 11 */
			BGl_symbol1778z00zz__match_s2cfunz00 =
				bstring_to_symbol(BGl_string1779z00zz__match_s2cfunz00);
			BGl_symbol1780z00zz__match_s2cfunz00 =
				bstring_to_symbol(BGl_string1781z00zz__match_s2cfunz00);
			return (BGl_symbol1782z00zz__match_s2cfunz00 =
				bstring_to_symbol(BGl_string1783z00zz__match_s2cfunz00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__match_s2cfunz00()
	{
		{	/* Match/s2cfun.scm 11 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__match_s2cfunz00()
	{
		{	/* Match/s2cfun.scm 11 */
			{	/* Match/s2cfun.scm 66 */
				obj_t BgL_counterz00_2279;

				BgL_counterz00_2279 = MAKE_CELL(BINT(((long) 100)));
				{	/* Match/s2cfun.scm 67 */
					obj_t BgL_zc3z04anonymousza31222ze3z87_2274;

					BgL_zc3z04anonymousza31222ze3z87_2274 =
						MAKE_VA_PROCEDURE
						(BGl_z62zc3z04anonymousza31222ze3ze5zz__match_s2cfunz00,
						(int) (((long) -1)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3z04anonymousza31222ze3z87_2274,
						(int) (((long) 0)), ((obj_t) BgL_counterz00_2279));
					return (BGl_jimzd2gensymzd2zz__match_s2cfunz00 =
						BgL_zc3z04anonymousza31222ze3z87_2274, BUNSPEC);
				}
			}
		}

	}



/* &<@anonymous:1222> */
	obj_t BGl_z62zc3z04anonymousza31222ze3ze5zz__match_s2cfunz00(obj_t
		BgL_envz00_2275, obj_t BgL_argsz00_2277)
	{
		{	/* Match/s2cfun.scm 67 */
			{	/* Match/s2cfun.scm 68 */
				obj_t BgL_counterz00_2276;

				BgL_counterz00_2276 =
					PROCEDURE_REF(BgL_envz00_2275, (int) (((long) 0)));
				{	/* Match/s2cfun.scm 68 */
					obj_t BgL_auxz00_2291;

					{	/* Match/s2cfun.scm 68 */
						bool_t BgL_test1796z00_2319;

						{	/* Match/s2cfun.scm 68 */
							obj_t BgL_objz00_2292;

							BgL_objz00_2292 = CELL_REF(BgL_counterz00_2276);
							BgL_test1796z00_2319 = INTEGERP(BgL_objz00_2292);
						}
						if (BgL_test1796z00_2319)
							{	/* Match/s2cfun.scm 68 */
								BgL_auxz00_2291 =
									ADDFX(CELL_REF(BgL_counterz00_2276), BINT(((long) 1)));
							}
						else
							{	/* Match/s2cfun.scm 68 */
								BgL_auxz00_2291 =
									BGl_2zb2zb2zz__r4_numbers_6_5z00(CELL_REF
									(BgL_counterz00_2276), BINT(((long) 1)));
					}}
					CELL_SET(BgL_counterz00_2276, BgL_auxz00_2291);
				}
				{	/* Match/s2cfun.scm 69 */
					obj_t BgL_symbolz00_2293;

					{	/* Match/s2cfun.scm 69 */
						obj_t BgL_arg1225z00_2294;

						if (PAIRP(BgL_argsz00_2277))
							{	/* Match/s2cfun.scm 69 */
								BgL_arg1225z00_2294 = CAR(BgL_argsz00_2277);
							}
						else
							{	/* Match/s2cfun.scm 69 */
								BgL_arg1225z00_2294 = BGl_symbol1778z00zz__match_s2cfunz00;
							}
						{	/* Match/s2cfun.scm 69 */
							obj_t BgL_list1226z00_2295;

							{	/* Match/s2cfun.scm 69 */
								obj_t BgL_arg1227z00_2296;

								BgL_arg1227z00_2296 =
									MAKE_YOUNG_PAIR(CELL_REF(BgL_counterz00_2276), BNIL);
								BgL_list1226z00_2295 =
									MAKE_YOUNG_PAIR(BgL_arg1225z00_2294, BgL_arg1227z00_2296);
							}
							BgL_symbolz00_2293 =
								BGl_concatz00zz__match_s2cfunz00(BgL_list1226z00_2295);
						}
					}
					BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_symbolz00_2293,
						BGl_symbol1780z00zz__match_s2cfunz00, BTRUE);
					return BgL_symbolz00_2293;
				}
			}
		}

	}



/* atom? */
	BGL_EXPORTED_DEF obj_t BGl_atomzf3zf3zz__match_s2cfunz00(obj_t BgL_ez00_3)
	{
		{	/* Match/s2cfun.scm 52 */
			if (PAIRP(BgL_ez00_3))
				{	/* Match/s2cfun.scm 53 */
					return BFALSE;
				}
			else
				{	/* Match/s2cfun.scm 53 */
					return BTRUE;
				}
		}

	}



/* &atom? */
	obj_t BGl_z62atomzf3z91zz__match_s2cfunz00(obj_t BgL_envz00_2281,
		obj_t BgL_ez00_2282)
	{
		{	/* Match/s2cfun.scm 52 */
			return BGl_atomzf3zf3zz__match_s2cfunz00(BgL_ez00_2282);
		}

	}



/* concat */
	BGL_EXPORTED_DEF obj_t BGl_concatz00zz__match_s2cfunz00(obj_t BgL_argsz00_4)
	{
		{	/* Match/s2cfun.scm 55 */
			{	/* Match/s2cfun.scm 57 */
				obj_t BgL_arg1242z00_1147;

				{	/* Match/s2cfun.scm 57 */
					obj_t BgL_runner1251z00_1166;

					if (NULLP(BgL_argsz00_4))
						{	/* Match/s2cfun.scm 58 */
							BgL_runner1251z00_1166 = BNIL;
						}
					else
						{	/* Match/s2cfun.scm 58 */
							obj_t BgL_head1092z00_1150;

							{	/* Match/s2cfun.scm 58 */
								obj_t BgL_res1668z00_1736;

								BgL_res1668z00_1736 = MAKE_YOUNG_PAIR(BNIL, BNIL);
								BgL_head1092z00_1150 = BgL_res1668z00_1736;
							}
							{
								obj_t BgL_l1090z00_1152;
								obj_t BgL_tail1093z00_1153;

								BgL_l1090z00_1152 = BgL_argsz00_4;
								BgL_tail1093z00_1153 = BgL_head1092z00_1150;
							BgL_zc3z04anonymousza31244ze3z87_1154:
								if (NULLP(BgL_l1090z00_1152))
									{	/* Match/s2cfun.scm 58 */
										BgL_runner1251z00_1166 = CDR(BgL_head1092z00_1150);
									}
								else
									{	/* Match/s2cfun.scm 58 */
										obj_t BgL_newtail1094z00_1156;

										{	/* Match/s2cfun.scm 58 */
											obj_t BgL_arg1247z00_1158;

											{	/* Match/s2cfun.scm 58 */
												obj_t BgL_sz00_1159;

												BgL_sz00_1159 = CAR(((obj_t) BgL_l1090z00_1152));
												if (STRINGP(BgL_sz00_1159))
													{	/* Match/s2cfun.scm 59 */
														BgL_arg1247z00_1158 = BgL_sz00_1159;
													}
												else
													{	/* Match/s2cfun.scm 59 */
														if (SYMBOLP(BgL_sz00_1159))
															{	/* Match/s2cfun.scm 60 */
																obj_t BgL_res1672z00_1744;

																{	/* Match/s2cfun.scm 60 */
																	obj_t BgL_arg1477z00_1743;

																	BgL_arg1477z00_1743 =
																		SYMBOL_TO_STRING(BgL_sz00_1159);
																	BgL_res1672z00_1744 =
																		BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																		(BgL_arg1477z00_1743);
																}
																BgL_arg1247z00_1158 = BgL_res1672z00_1744;
															}
														else
															{	/* Match/s2cfun.scm 60 */
																if (BGl_numberzf3zf3zz__r4_numbers_6_5z00
																	(BgL_sz00_1159))
																	{	/* Ieee/number.scm 164 */

																		BgL_arg1247z00_1158 =
																			BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
																			(BgL_sz00_1159, BINT(((long) 10)));
																	}
																else
																	{	/* Match/s2cfun.scm 61 */
																		BgL_arg1247z00_1158 =
																			BGl_errorz00zz__errorz00
																			(BGl_symbol1782z00zz__match_s2cfunz00,
																			BGl_string1784z00zz__match_s2cfunz00,
																			BgL_argsz00_4);
																	}
															}
													}
											}
											{	/* Match/s2cfun.scm 58 */
												obj_t BgL_res1673z00_1745;

												BgL_res1673z00_1745 =
													MAKE_YOUNG_PAIR(BgL_arg1247z00_1158, BNIL);
												BgL_newtail1094z00_1156 = BgL_res1673z00_1745;
											}
										}
										SET_CDR(BgL_tail1093z00_1153, BgL_newtail1094z00_1156);
										{	/* Match/s2cfun.scm 58 */
											obj_t BgL_arg1246z00_1157;

											BgL_arg1246z00_1157 = CDR(((obj_t) BgL_l1090z00_1152));
											{
												obj_t BgL_tail1093z00_2359;
												obj_t BgL_l1090z00_2358;

												BgL_l1090z00_2358 = BgL_arg1246z00_1157;
												BgL_tail1093z00_2359 = BgL_newtail1094z00_1156;
												BgL_tail1093z00_1153 = BgL_tail1093z00_2359;
												BgL_l1090z00_1152 = BgL_l1090z00_2358;
												goto BgL_zc3z04anonymousza31244ze3z87_1154;
											}
										}
									}
							}
						}
					BgL_arg1242z00_1147 =
						BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_runner1251z00_1166);
				}
				return bstring_to_symbol(BgL_arg1242z00_1147);
			}
		}

	}



/* &concat */
	obj_t BGl_z62concatz62zz__match_s2cfunz00(obj_t BgL_envz00_2283,
		obj_t BgL_argsz00_2284)
	{
		{	/* Match/s2cfun.scm 55 */
			return BGl_concatz00zz__match_s2cfunz00(BgL_argsz00_2284);
		}

	}



/* andmap */
	BGL_EXPORTED_DEF obj_t BGl_andmapz00zz__match_s2cfunz00(obj_t BgL_pz00_5,
		obj_t BgL_argsz00_6)
	{
		{	/* Match/s2cfun.scm 74 */
			{
				obj_t BgL_argsz00_1168;
				obj_t BgL_valuez00_1169;

				BgL_argsz00_1168 = BgL_argsz00_6;
				BgL_valuez00_1169 = BTRUE;
			BgL_zc3z04anonymousza31252ze3z87_1170:
				{	/* Match/s2cfun.scm 77 */
					bool_t BgL_test1804z00_2363;

					{
						obj_t BgL_lsz00_1218;

						BgL_lsz00_1218 = BgL_argsz00_1168;
					BgL_zc3z04anonymousza31286ze3z87_1219:
						if (PAIRP(BgL_lsz00_1218))
							{	/* Match/s2cfun.scm 79 */
								bool_t BgL__ortest_1040z00_1221;

								{	/* Match/s2cfun.scm 79 */
									bool_t BgL_test1806z00_2366;

									{	/* Match/s2cfun.scm 79 */
										obj_t BgL_tmpz00_2367;

										BgL_tmpz00_2367 = CAR(BgL_lsz00_1218);
										BgL_test1806z00_2366 = PAIRP(BgL_tmpz00_2367);
									}
									if (BgL_test1806z00_2366)
										{	/* Match/s2cfun.scm 79 */
											BgL__ortest_1040z00_1221 = ((bool_t) 0);
										}
									else
										{	/* Match/s2cfun.scm 79 */
											BgL__ortest_1040z00_1221 = ((bool_t) 1);
										}
								}
								if (BgL__ortest_1040z00_1221)
									{	/* Match/s2cfun.scm 79 */
										BgL_test1804z00_2363 = BgL__ortest_1040z00_1221;
									}
								else
									{
										obj_t BgL_lsz00_2371;

										BgL_lsz00_2371 = CDR(BgL_lsz00_1218);
										BgL_lsz00_1218 = BgL_lsz00_2371;
										goto BgL_zc3z04anonymousza31286ze3z87_1219;
									}
							}
						else
							{	/* Match/s2cfun.scm 78 */
								BgL_test1804z00_2363 = ((bool_t) 0);
							}
					}
					if (BgL_test1804z00_2363)
						{	/* Match/s2cfun.scm 77 */
							return BgL_valuez00_1169;
						}
					else
						{	/* Match/s2cfun.scm 82 */
							obj_t BgL_valuez00_1182;

							{	/* Match/s2cfun.scm 82 */
								obj_t BgL_auxz00_2373;

								if (NULLP(BgL_argsz00_1168))
									{	/* Match/s2cfun.scm 82 */
										BgL_auxz00_2373 = BNIL;
									}
								else
									{	/* Match/s2cfun.scm 82 */
										obj_t BgL_head1097z00_1203;

										{	/* Match/s2cfun.scm 82 */
											obj_t BgL_arg1284z00_1215;

											{	/* Match/s2cfun.scm 82 */
												obj_t BgL_pairz00_1756;

												BgL_pairz00_1756 = CAR(((obj_t) BgL_argsz00_1168));
												BgL_arg1284z00_1215 = CAR(BgL_pairz00_1756);
											}
											{	/* Match/s2cfun.scm 82 */
												obj_t BgL_res1678z00_1757;

												BgL_res1678z00_1757 =
													MAKE_YOUNG_PAIR(BgL_arg1284z00_1215, BNIL);
												BgL_head1097z00_1203 = BgL_res1678z00_1757;
											}
										}
										{	/* Match/s2cfun.scm 82 */
											obj_t BgL_g1100z00_1204;

											BgL_g1100z00_1204 = CDR(((obj_t) BgL_argsz00_1168));
											{
												obj_t BgL_l1095z00_1782;
												obj_t BgL_tail1098z00_1783;

												BgL_l1095z00_1782 = BgL_g1100z00_1204;
												BgL_tail1098z00_1783 = BgL_head1097z00_1203;
											BgL_zc3z04anonymousza31276ze3z87_1781:
												if (NULLP(BgL_l1095z00_1782))
													{	/* Match/s2cfun.scm 82 */
														BgL_auxz00_2373 = BgL_head1097z00_1203;
													}
												else
													{	/* Match/s2cfun.scm 82 */
														obj_t BgL_newtail1099z00_1790;

														{	/* Match/s2cfun.scm 82 */
															obj_t BgL_arg1281z00_1791;

															{	/* Match/s2cfun.scm 82 */
																obj_t BgL_pairz00_1796;

																BgL_pairz00_1796 =
																	CAR(((obj_t) BgL_l1095z00_1782));
																BgL_arg1281z00_1791 = CAR(BgL_pairz00_1796);
															}
															{	/* Match/s2cfun.scm 82 */
																obj_t BgL_res1684z00_1797;

																BgL_res1684z00_1797 =
																	MAKE_YOUNG_PAIR(BgL_arg1281z00_1791, BNIL);
																BgL_newtail1099z00_1790 = BgL_res1684z00_1797;
															}
														}
														SET_CDR(BgL_tail1098z00_1783,
															BgL_newtail1099z00_1790);
														{	/* Match/s2cfun.scm 82 */
															obj_t BgL_arg1280z00_1793;

															BgL_arg1280z00_1793 =
																CDR(((obj_t) BgL_l1095z00_1782));
															{
																obj_t BgL_tail1098z00_2392;
																obj_t BgL_l1095z00_2391;

																BgL_l1095z00_2391 = BgL_arg1280z00_1793;
																BgL_tail1098z00_2392 = BgL_newtail1099z00_1790;
																BgL_tail1098z00_1783 = BgL_tail1098z00_2392;
																BgL_l1095z00_1782 = BgL_l1095z00_2391;
																goto BgL_zc3z04anonymousza31276ze3z87_1781;
															}
														}
													}
											}
										}
									}
								BgL_valuez00_1182 = apply(BgL_pz00_5, BgL_auxz00_2373);
							}
							if (CBOOL(BgL_valuez00_1182))
								{	/* Match/s2cfun.scm 83 */
									obj_t BgL_arg1263z00_1184;

									if (NULLP(BgL_argsz00_1168))
										{	/* Match/s2cfun.scm 83 */
											BgL_arg1263z00_1184 = BNIL;
										}
									else
										{	/* Match/s2cfun.scm 83 */
											obj_t BgL_head1103z00_1187;

											{	/* Match/s2cfun.scm 83 */
												obj_t BgL_arg1273z00_1199;

												{	/* Match/s2cfun.scm 83 */
													obj_t BgL_pairz00_1802;

													BgL_pairz00_1802 = CAR(((obj_t) BgL_argsz00_1168));
													BgL_arg1273z00_1199 = CDR(BgL_pairz00_1802);
												}
												{	/* Match/s2cfun.scm 83 */
													obj_t BgL_res1686z00_1803;

													BgL_res1686z00_1803 =
														MAKE_YOUNG_PAIR(BgL_arg1273z00_1199, BNIL);
													BgL_head1103z00_1187 = BgL_res1686z00_1803;
												}
											}
											{	/* Match/s2cfun.scm 83 */
												obj_t BgL_g1106z00_1188;

												BgL_g1106z00_1188 = CDR(((obj_t) BgL_argsz00_1168));
												{
													obj_t BgL_l1101z00_1828;
													obj_t BgL_tail1104z00_1829;

													BgL_l1101z00_1828 = BgL_g1106z00_1188;
													BgL_tail1104z00_1829 = BgL_head1103z00_1187;
												BgL_zc3z04anonymousza31265ze3z87_1827:
													if (NULLP(BgL_l1101z00_1828))
														{	/* Match/s2cfun.scm 83 */
															BgL_arg1263z00_1184 = BgL_head1103z00_1187;
														}
													else
														{	/* Match/s2cfun.scm 83 */
															obj_t BgL_newtail1105z00_1836;

															{	/* Match/s2cfun.scm 83 */
																obj_t BgL_arg1270z00_1837;

																{	/* Match/s2cfun.scm 83 */
																	obj_t BgL_pairz00_1842;

																	BgL_pairz00_1842 =
																		CAR(((obj_t) BgL_l1101z00_1828));
																	BgL_arg1270z00_1837 = CDR(BgL_pairz00_1842);
																}
																{	/* Match/s2cfun.scm 83 */
																	obj_t BgL_res1692z00_1843;

																	BgL_res1692z00_1843 =
																		MAKE_YOUNG_PAIR(BgL_arg1270z00_1837, BNIL);
																	BgL_newtail1105z00_1836 = BgL_res1692z00_1843;
																}
															}
															SET_CDR(BgL_tail1104z00_1829,
																BgL_newtail1105z00_1836);
															{	/* Match/s2cfun.scm 83 */
																obj_t BgL_arg1268z00_1839;

																BgL_arg1268z00_1839 =
																	CDR(((obj_t) BgL_l1101z00_1828));
																{
																	obj_t BgL_tail1104z00_2414;
																	obj_t BgL_l1101z00_2413;

																	BgL_l1101z00_2413 = BgL_arg1268z00_1839;
																	BgL_tail1104z00_2414 =
																		BgL_newtail1105z00_1836;
																	BgL_tail1104z00_1829 = BgL_tail1104z00_2414;
																	BgL_l1101z00_1828 = BgL_l1101z00_2413;
																	goto BgL_zc3z04anonymousza31265ze3z87_1827;
																}
															}
														}
												}
											}
										}
									{
										obj_t BgL_valuez00_2416;
										obj_t BgL_argsz00_2415;

										BgL_argsz00_2415 = BgL_arg1263z00_1184;
										BgL_valuez00_2416 = BgL_valuez00_1182;
										BgL_valuez00_1169 = BgL_valuez00_2416;
										BgL_argsz00_1168 = BgL_argsz00_2415;
										goto BgL_zc3z04anonymousza31252ze3z87_1170;
									}
								}
							else
								{	/* Match/s2cfun.scm 83 */
									return BFALSE;
								}
						}
				}
			}
		}

	}



/* &andmap */
	obj_t BGl_z62andmapz62zz__match_s2cfunz00(obj_t BgL_envz00_2285,
		obj_t BgL_pz00_2286, obj_t BgL_argsz00_2287)
	{
		{	/* Match/s2cfun.scm 74 */
			return BGl_andmapz00zz__match_s2cfunz00(BgL_pz00_2286, BgL_argsz00_2287);
		}

	}



/* ormap */
	BGL_EXPORTED_DEF obj_t BGl_ormapz00zz__match_s2cfunz00(obj_t BgL_pz00_7,
		obj_t BgL_argsz00_8)
	{
		{	/* Match/s2cfun.scm 86 */
			if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BINT(bgl_list_length(BgL_argsz00_8)),
					BINT(((long) 1))))
				{	/* Match/s2cfun.scm 89 */
					obj_t BgL_arg1291z00_1229;

					{	/* Match/s2cfun.scm 89 */
						obj_t BgL_l1107z00_1230;

						BgL_l1107z00_1230 = CAR(((obj_t) BgL_argsz00_8));
						if (NULLP(BgL_l1107z00_1230))
							{	/* Match/s2cfun.scm 89 */
								BgL_arg1291z00_1229 = BNIL;
							}
						else
							{	/* Match/s2cfun.scm 89 */
								obj_t BgL_head1109z00_1232;

								{	/* Match/s2cfun.scm 89 */
									obj_t BgL_arg1298z00_1244;

									{	/* Match/s2cfun.scm 89 */
										obj_t BgL_arg1299z00_1245;

										BgL_arg1299z00_1245 = CAR(((obj_t) BgL_l1107z00_1230));
										BgL_arg1298z00_1244 =
											PROCEDURE_ENTRY(BgL_pz00_7) (BgL_pz00_7,
											BgL_arg1299z00_1245, BEOA);
									}
									{	/* Match/s2cfun.scm 89 */
										obj_t BgL_res1694z00_1849;

										BgL_res1694z00_1849 =
											MAKE_YOUNG_PAIR(BgL_arg1298z00_1244, BNIL);
										BgL_head1109z00_1232 = BgL_res1694z00_1849;
									}
								}
								{	/* Match/s2cfun.scm 89 */
									obj_t BgL_g1112z00_1233;

									BgL_g1112z00_1233 = CDR(((obj_t) BgL_l1107z00_1230));
									{
										obj_t BgL_l1107z00_1872;
										obj_t BgL_tail1110z00_1873;

										BgL_l1107z00_1872 = BgL_g1112z00_1233;
										BgL_tail1110z00_1873 = BgL_head1109z00_1232;
									BgL_zc3z04anonymousza31293ze3z87_1871:
										if (NULLP(BgL_l1107z00_1872))
											{	/* Match/s2cfun.scm 89 */
												BgL_arg1291z00_1229 = BgL_head1109z00_1232;
											}
										else
											{	/* Match/s2cfun.scm 89 */
												obj_t BgL_newtail1111z00_1880;

												{	/* Match/s2cfun.scm 89 */
													obj_t BgL_arg1296z00_1881;

													{	/* Match/s2cfun.scm 89 */
														obj_t BgL_arg1297z00_1882;

														BgL_arg1297z00_1882 =
															CAR(((obj_t) BgL_l1107z00_1872));
														BgL_arg1296z00_1881 =
															PROCEDURE_ENTRY(BgL_pz00_7) (BgL_pz00_7,
															BgL_arg1297z00_1882, BEOA);
													}
													{	/* Match/s2cfun.scm 89 */
														obj_t BgL_res1700z00_1886;

														BgL_res1700z00_1886 =
															MAKE_YOUNG_PAIR(BgL_arg1296z00_1881, BNIL);
														BgL_newtail1111z00_1880 = BgL_res1700z00_1886;
													}
												}
												SET_CDR(BgL_tail1110z00_1873, BgL_newtail1111z00_1880);
												{	/* Match/s2cfun.scm 89 */
													obj_t BgL_arg1295z00_1883;

													BgL_arg1295z00_1883 =
														CDR(((obj_t) BgL_l1107z00_1872));
													{
														obj_t BgL_tail1110z00_2449;
														obj_t BgL_l1107z00_2448;

														BgL_l1107z00_2448 = BgL_arg1295z00_1883;
														BgL_tail1110z00_2449 = BgL_newtail1111z00_1880;
														BgL_tail1110z00_1873 = BgL_tail1110z00_2449;
														BgL_l1107z00_1872 = BgL_l1107z00_2448;
														goto BgL_zc3z04anonymousza31293ze3z87_1871;
													}
												}
											}
									}
								}
							}
					}
					return
						BGl_memberz00zz__r4_pairs_and_lists_6_3z00(BTRUE,
						BgL_arg1291z00_1229);
				}
			else
				{
					obj_t BgL_argsz00_1247;
					obj_t BgL_valuez00_1248;

					BgL_argsz00_1247 = BgL_argsz00_8;
					BgL_valuez00_1248 = BFALSE;
				BgL_zc3z04anonymousza31300ze3z87_1249:
					{	/* Match/s2cfun.scm 91 */
						bool_t BgL_test1816z00_2451;

						{
							obj_t BgL_lsz00_1297;

							BgL_lsz00_1297 = BgL_argsz00_1247;
						BgL_zc3z04anonymousza31328ze3z87_1298:
							if (PAIRP(BgL_lsz00_1297))
								{	/* Match/s2cfun.scm 93 */
									bool_t BgL__ortest_1043z00_1300;

									{	/* Match/s2cfun.scm 93 */
										bool_t BgL_test1818z00_2454;

										{	/* Match/s2cfun.scm 93 */
											obj_t BgL_tmpz00_2455;

											BgL_tmpz00_2455 = CAR(BgL_lsz00_1297);
											BgL_test1818z00_2454 = PAIRP(BgL_tmpz00_2455);
										}
										if (BgL_test1818z00_2454)
											{	/* Match/s2cfun.scm 93 */
												BgL__ortest_1043z00_1300 = ((bool_t) 0);
											}
										else
											{	/* Match/s2cfun.scm 93 */
												BgL__ortest_1043z00_1300 = ((bool_t) 1);
											}
									}
									if (BgL__ortest_1043z00_1300)
										{	/* Match/s2cfun.scm 93 */
											BgL_test1816z00_2451 = BgL__ortest_1043z00_1300;
										}
									else
										{
											obj_t BgL_lsz00_2459;

											BgL_lsz00_2459 = CDR(BgL_lsz00_1297);
											BgL_lsz00_1297 = BgL_lsz00_2459;
											goto BgL_zc3z04anonymousza31328ze3z87_1298;
										}
								}
							else
								{	/* Match/s2cfun.scm 92 */
									BgL_test1816z00_2451 = ((bool_t) 0);
								}
						}
						if (BgL_test1816z00_2451)
							{	/* Match/s2cfun.scm 91 */
								return BgL_valuez00_1248;
							}
						else
							{	/* Match/s2cfun.scm 96 */
								obj_t BgL_valuez00_1261;

								{	/* Match/s2cfun.scm 96 */
									obj_t BgL_auxz00_2461;

									if (NULLP(BgL_argsz00_1247))
										{	/* Match/s2cfun.scm 96 */
											BgL_auxz00_2461 = BNIL;
										}
									else
										{	/* Match/s2cfun.scm 96 */
											obj_t BgL_head1115z00_1282;

											{	/* Match/s2cfun.scm 96 */
												obj_t BgL_arg1326z00_1294;

												{	/* Match/s2cfun.scm 96 */
													obj_t BgL_pairz00_1895;

													BgL_pairz00_1895 = CAR(((obj_t) BgL_argsz00_1247));
													BgL_arg1326z00_1294 = CAR(BgL_pairz00_1895);
												}
												{	/* Match/s2cfun.scm 96 */
													obj_t BgL_res1704z00_1896;

													BgL_res1704z00_1896 =
														MAKE_YOUNG_PAIR(BgL_arg1326z00_1294, BNIL);
													BgL_head1115z00_1282 = BgL_res1704z00_1896;
												}
											}
											{	/* Match/s2cfun.scm 96 */
												obj_t BgL_g1118z00_1283;

												BgL_g1118z00_1283 = CDR(((obj_t) BgL_argsz00_1247));
												{
													obj_t BgL_l1113z00_1921;
													obj_t BgL_tail1116z00_1922;

													BgL_l1113z00_1921 = BgL_g1118z00_1283;
													BgL_tail1116z00_1922 = BgL_head1115z00_1282;
												BgL_zc3z04anonymousza31318ze3z87_1920:
													if (NULLP(BgL_l1113z00_1921))
														{	/* Match/s2cfun.scm 96 */
															BgL_auxz00_2461 = BgL_head1115z00_1282;
														}
													else
														{	/* Match/s2cfun.scm 96 */
															obj_t BgL_newtail1117z00_1929;

															{	/* Match/s2cfun.scm 96 */
																obj_t BgL_arg1324z00_1930;

																{	/* Match/s2cfun.scm 96 */
																	obj_t BgL_pairz00_1935;

																	BgL_pairz00_1935 =
																		CAR(((obj_t) BgL_l1113z00_1921));
																	BgL_arg1324z00_1930 = CAR(BgL_pairz00_1935);
																}
																{	/* Match/s2cfun.scm 96 */
																	obj_t BgL_res1710z00_1936;

																	BgL_res1710z00_1936 =
																		MAKE_YOUNG_PAIR(BgL_arg1324z00_1930, BNIL);
																	BgL_newtail1117z00_1929 = BgL_res1710z00_1936;
																}
															}
															SET_CDR(BgL_tail1116z00_1922,
																BgL_newtail1117z00_1929);
															{	/* Match/s2cfun.scm 96 */
																obj_t BgL_arg1322z00_1932;

																BgL_arg1322z00_1932 =
																	CDR(((obj_t) BgL_l1113z00_1921));
																{
																	obj_t BgL_tail1116z00_2480;
																	obj_t BgL_l1113z00_2479;

																	BgL_l1113z00_2479 = BgL_arg1322z00_1932;
																	BgL_tail1116z00_2480 =
																		BgL_newtail1117z00_1929;
																	BgL_tail1116z00_1922 = BgL_tail1116z00_2480;
																	BgL_l1113z00_1921 = BgL_l1113z00_2479;
																	goto BgL_zc3z04anonymousza31318ze3z87_1920;
																}
															}
														}
												}
											}
										}
									BgL_valuez00_1261 = apply(BgL_pz00_7, BgL_auxz00_2461);
								}
								if (CBOOL(BgL_valuez00_1261))
									{	/* Match/s2cfun.scm 97 */
										return BgL_valuez00_1261;
									}
								else
									{	/* Match/s2cfun.scm 97 */
										obj_t BgL_arg1308z00_1263;

										if (NULLP(BgL_argsz00_1247))
											{	/* Match/s2cfun.scm 97 */
												BgL_arg1308z00_1263 = BNIL;
											}
										else
											{	/* Match/s2cfun.scm 97 */
												obj_t BgL_head1121z00_1266;

												{	/* Match/s2cfun.scm 97 */
													obj_t BgL_arg1315z00_1278;

													{	/* Match/s2cfun.scm 97 */
														obj_t BgL_pairz00_1941;

														BgL_pairz00_1941 = CAR(((obj_t) BgL_argsz00_1247));
														BgL_arg1315z00_1278 = CDR(BgL_pairz00_1941);
													}
													{	/* Match/s2cfun.scm 97 */
														obj_t BgL_res1712z00_1942;

														BgL_res1712z00_1942 =
															MAKE_YOUNG_PAIR(BgL_arg1315z00_1278, BNIL);
														BgL_head1121z00_1266 = BgL_res1712z00_1942;
													}
												}
												{	/* Match/s2cfun.scm 97 */
													obj_t BgL_g1124z00_1267;

													BgL_g1124z00_1267 = CDR(((obj_t) BgL_argsz00_1247));
													{
														obj_t BgL_l1119z00_1967;
														obj_t BgL_tail1122z00_1968;

														BgL_l1119z00_1967 = BgL_g1124z00_1267;
														BgL_tail1122z00_1968 = BgL_head1121z00_1266;
													BgL_zc3z04anonymousza31310ze3z87_1966:
														if (NULLP(BgL_l1119z00_1967))
															{	/* Match/s2cfun.scm 97 */
																BgL_arg1308z00_1263 = BgL_head1121z00_1266;
															}
														else
															{	/* Match/s2cfun.scm 97 */
																obj_t BgL_newtail1123z00_1975;

																{	/* Match/s2cfun.scm 97 */
																	obj_t BgL_arg1313z00_1976;

																	{	/* Match/s2cfun.scm 97 */
																		obj_t BgL_pairz00_1981;

																		BgL_pairz00_1981 =
																			CAR(((obj_t) BgL_l1119z00_1967));
																		BgL_arg1313z00_1976 = CDR(BgL_pairz00_1981);
																	}
																	{	/* Match/s2cfun.scm 97 */
																		obj_t BgL_res1718z00_1982;

																		BgL_res1718z00_1982 =
																			MAKE_YOUNG_PAIR(BgL_arg1313z00_1976,
																			BNIL);
																		BgL_newtail1123z00_1975 =
																			BgL_res1718z00_1982;
																	}
																}
																SET_CDR(BgL_tail1122z00_1968,
																	BgL_newtail1123z00_1975);
																{	/* Match/s2cfun.scm 97 */
																	obj_t BgL_arg1312z00_1978;

																	BgL_arg1312z00_1978 =
																		CDR(((obj_t) BgL_l1119z00_1967));
																	{
																		obj_t BgL_tail1122z00_2502;
																		obj_t BgL_l1119z00_2501;

																		BgL_l1119z00_2501 = BgL_arg1312z00_1978;
																		BgL_tail1122z00_2502 =
																			BgL_newtail1123z00_1975;
																		BgL_tail1122z00_1968 = BgL_tail1122z00_2502;
																		BgL_l1119z00_1967 = BgL_l1119z00_2501;
																		goto BgL_zc3z04anonymousza31310ze3z87_1966;
																	}
																}
															}
													}
												}
											}
										{
											obj_t BgL_valuez00_2504;
											obj_t BgL_argsz00_2503;

											BgL_argsz00_2503 = BgL_arg1308z00_1263;
											BgL_valuez00_2504 = BgL_valuez00_1261;
											BgL_valuez00_1248 = BgL_valuez00_2504;
											BgL_argsz00_1247 = BgL_argsz00_2503;
											goto BgL_zc3z04anonymousza31300ze3z87_1249;
										}
									}
							}
					}
				}
		}

	}



/* &ormap */
	obj_t BGl_z62ormapz62zz__match_s2cfunz00(obj_t BgL_envz00_2288,
		obj_t BgL_pz00_2289, obj_t BgL_argsz00_2290)
	{
		{	/* Match/s2cfun.scm 86 */
			return BGl_ormapz00zz__match_s2cfunz00(BgL_pz00_2289, BgL_argsz00_2290);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__match_s2cfunz00()
	{
		{	/* Match/s2cfun.scm 11 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__match_s2cfunz00()
	{
		{	/* Match/s2cfun.scm 11 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__match_s2cfunz00()
	{
		{	/* Match/s2cfun.scm 11 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__match_s2cfunz00()
	{
		{	/* Match/s2cfun.scm 11 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string1785z00zz__match_s2cfunz00));
			return
				BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string1785z00zz__match_s2cfunz00));
		}

	}

#ifdef __cplusplus
}
#endif
