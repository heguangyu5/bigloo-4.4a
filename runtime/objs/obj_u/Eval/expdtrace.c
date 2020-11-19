/*===========================================================================*/
/*   (Eval/expdtrace.scm)                                                    */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Eval/expdtrace.scm -indent -o objs/obj_u/Eval/expdtrace.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_symbol1751z00zz__expander_tracez00 = BUNSPEC;
	static obj_t BGl_symbol1755z00zz__expander_tracez00 = BUNSPEC;
	extern obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2expandzd2withzd2tracezd2zz__expander_tracez00(obj_t);
	extern obj_t BGl_expandzd2errorzd2zz__expandz00(obj_t, obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__expander_tracez00 = BUNSPEC;
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern int BGl_bigloozd2profilezd2zz__paramz00();
	static obj_t BGl_genericzd2initzd2zz__expander_tracez00();
	static obj_t BGl_objectzd2initzd2zz__expander_tracez00();
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31226ze3ze5zz__expander_tracez00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62makezd2expandzd2withzd2tracezb0zz__expander_tracez00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__expander_tracez00();
	static obj_t BGl_z62zc3z04anonymousza31167ze3ze5zz__expander_tracez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__expander_tracez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__expandz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
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
	extern obj_t BGl_modulezd2initializa7ationz75zz__bignumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__tvectorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2expandzd2tracezd2itemzd2zz__expander_tracez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2expandzd2whenzd2tracezd2zz__expander_tracez00(obj_t);
	extern int bgl_debug();
	static obj_t BGl_cnstzd2initzd2zz__expander_tracez00();
	static obj_t BGl_gczd2rootszd2initz00zz__expander_tracez00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__expander_tracez00();
	static obj_t BGl_z62zc3z04anonymousza31297ze3ze5zz__expander_tracez00(obj_t,
		obj_t, obj_t);
	extern int BGl_bigloozd2compilerzd2debugz00zz__paramz00();
	extern obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t
		BGl_z62makezd2expandzd2tracezd2itemzb0zz__expander_tracez00(obj_t, obj_t);
	static obj_t
		BGl_z62makezd2expandzd2whenzd2tracezb0zz__expander_tracez00(obj_t, obj_t);
	static obj_t BGl_symbol1730z00zz__expander_tracez00 = BUNSPEC;
	static obj_t BGl_symbol1732z00zz__expander_tracez00 = BUNSPEC;
	static obj_t BGl_symbol1734z00zz__expander_tracez00 = BUNSPEC;
	static obj_t BGl_symbol1736z00zz__expander_tracez00 = BUNSPEC;
	static obj_t BGl_symbol1741z00zz__expander_tracez00 = BUNSPEC;
	static obj_t BGl_symbol1743z00zz__expander_tracez00 = BUNSPEC;
	static obj_t BGl_symbol1745z00zz__expander_tracez00 = BUNSPEC;
	static obj_t BGl_symbol1747z00zz__expander_tracez00 = BUNSPEC;
	static obj_t BGl_symbol1749z00zz__expander_tracez00 = BUNSPEC;
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2expandzd2withzd2tracezd2envz00zz__expander_tracez00,
		BgL_bgl_za762makeza7d2expand1758z00,
		BGl_z62makezd2expandzd2withzd2tracezb0zz__expander_tracez00, 0L, BUNSPEC,
		1);
	      DEFINE_STRING(BGl_string1727z00zz__expander_tracez00,
		BgL_bgl_string1727za700za7za7_1759za7,
		"/tmp/4.4a/runtime/Eval/expdtrace.scm", 36);
	      DEFINE_STRING(BGl_string1728z00zz__expander_tracez00,
		BgL_bgl_string1728za700za7za7_1760za7, "&make-expand-when-trace", 23);
	      DEFINE_STRING(BGl_string1729z00zz__expander_tracez00,
		BgL_bgl_string1729za700za7za7_1761za7, "symbol", 6);
	      DEFINE_STRING(BGl_string1731z00zz__expander_tracez00,
		BgL_bgl_string1731za700za7za7_1762za7, "compiler", 8);
	      DEFINE_STRING(BGl_string1733z00zz__expander_tracez00,
		BgL_bgl_string1733za700za7za7_1763za7, "trace-active?", 13);
	      DEFINE_STRING(BGl_string1735z00zz__expander_tracez00,
		BgL_bgl_string1735za700za7za7_1764za7, "begin", 5);
	      DEFINE_STRING(BGl_string1737z00zz__expander_tracez00,
		BgL_bgl_string1737za700za7za7_1765za7, "if", 2);
	      DEFINE_STRING(BGl_string1738z00zz__expander_tracez00,
		BgL_bgl_string1738za700za7za7_1766za7, "when-trace", 10);
	      DEFINE_STRING(BGl_string1739z00zz__expander_tracez00,
		BgL_bgl_string1739za700za7za7_1767za7, "Illegal form", 12);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2expandzd2whenzd2tracezd2envz00zz__expander_tracez00,
		BgL_bgl_za762makeza7d2expand1768z00,
		BGl_z62makezd2expandzd2whenzd2tracezb0zz__expander_tracez00, 0L, BUNSPEC,
		1);
	      DEFINE_STRING(BGl_string1740z00zz__expander_tracez00,
		BgL_bgl_string1740za700za7za7_1769za7, "&make-expand-with-trace", 23);
	      DEFINE_STRING(BGl_string1742z00zz__expander_tracez00,
		BgL_bgl_string1742za700za7za7_1770za7, "f", 1);
	      DEFINE_STRING(BGl_string1744z00zz__expander_tracez00,
		BgL_bgl_string1744za700za7za7_1771za7, "lambda", 6);
	      DEFINE_STRING(BGl_string1746z00zz__expander_tracez00,
		BgL_bgl_string1746za700za7za7_1772za7, "bigloo-debug", 12);
	      DEFINE_STRING(BGl_string1748z00zz__expander_tracez00,
		BgL_bgl_string1748za700za7za7_1773za7, ">fx", 3);
	      DEFINE_STRING(BGl_string1750z00zz__expander_tracez00,
		BgL_bgl_string1750za700za7za7_1774za7, "%with-trace", 11);
	      DEFINE_STRING(BGl_string1752z00zz__expander_tracez00,
		BgL_bgl_string1752za700za7za7_1775za7, "let", 3);
	      DEFINE_STRING(BGl_string1753z00zz__expander_tracez00,
		BgL_bgl_string1753za700za7za7_1776za7, "with-trace", 10);
	      DEFINE_STRING(BGl_string1754z00zz__expander_tracez00,
		BgL_bgl_string1754za700za7za7_1777za7, "&make-expand-trace-item", 23);
	      DEFINE_STRING(BGl_string1756z00zz__expander_tracez00,
		BgL_bgl_string1756za700za7za7_1778za7, "trace-item", 10);
	      DEFINE_STRING(BGl_string1757z00zz__expander_tracez00,
		BgL_bgl_string1757za700za7za7_1779za7, "__expander_trace", 16);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2expandzd2tracezd2itemzd2envz00zz__expander_tracez00,
		BgL_bgl_za762makeza7d2expand1780z00,
		BGl_z62makezd2expandzd2tracezd2itemzb0zz__expander_tracez00, 0L, BUNSPEC,
		1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_symbol1751z00zz__expander_tracez00));
		     ADD_ROOT((void *) (&BGl_symbol1755z00zz__expander_tracez00));
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zz__expander_tracez00));
		     ADD_ROOT((void *) (&BGl_symbol1730z00zz__expander_tracez00));
		     ADD_ROOT((void *) (&BGl_symbol1732z00zz__expander_tracez00));
		     ADD_ROOT((void *) (&BGl_symbol1734z00zz__expander_tracez00));
		     ADD_ROOT((void *) (&BGl_symbol1736z00zz__expander_tracez00));
		     ADD_ROOT((void *) (&BGl_symbol1741z00zz__expander_tracez00));
		     ADD_ROOT((void *) (&BGl_symbol1743z00zz__expander_tracez00));
		     ADD_ROOT((void *) (&BGl_symbol1745z00zz__expander_tracez00));
		     ADD_ROOT((void *) (&BGl_symbol1747z00zz__expander_tracez00));
		     ADD_ROOT((void *) (&BGl_symbol1749z00zz__expander_tracez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__expander_tracez00(long
		BgL_checksumz00_2001, char *BgL_fromz00_2002)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__expander_tracez00))
				{
					BGl_requirezd2initializa7ationz75zz__expander_tracez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__expander_tracez00();
					BGl_cnstzd2initzd2zz__expander_tracez00();
					BGl_importedzd2moduleszd2initz00zz__expander_tracez00();
					return BGl_methodzd2initzd2zz__expander_tracez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__expander_tracez00()
	{
		{	/* Eval/expdtrace.scm 14 */
			BGl_symbol1730z00zz__expander_tracez00 =
				bstring_to_symbol(BGl_string1731z00zz__expander_tracez00);
			BGl_symbol1732z00zz__expander_tracez00 =
				bstring_to_symbol(BGl_string1733z00zz__expander_tracez00);
			BGl_symbol1734z00zz__expander_tracez00 =
				bstring_to_symbol(BGl_string1735z00zz__expander_tracez00);
			BGl_symbol1736z00zz__expander_tracez00 =
				bstring_to_symbol(BGl_string1737z00zz__expander_tracez00);
			BGl_symbol1741z00zz__expander_tracez00 =
				bstring_to_symbol(BGl_string1742z00zz__expander_tracez00);
			BGl_symbol1743z00zz__expander_tracez00 =
				bstring_to_symbol(BGl_string1744z00zz__expander_tracez00);
			BGl_symbol1745z00zz__expander_tracez00 =
				bstring_to_symbol(BGl_string1746z00zz__expander_tracez00);
			BGl_symbol1747z00zz__expander_tracez00 =
				bstring_to_symbol(BGl_string1748z00zz__expander_tracez00);
			BGl_symbol1749z00zz__expander_tracez00 =
				bstring_to_symbol(BGl_string1750z00zz__expander_tracez00);
			BGl_symbol1751z00zz__expander_tracez00 =
				bstring_to_symbol(BGl_string1752z00zz__expander_tracez00);
			return (BGl_symbol1755z00zz__expander_tracez00 =
				bstring_to_symbol(BGl_string1756z00zz__expander_tracez00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__expander_tracez00()
	{
		{	/* Eval/expdtrace.scm 14 */
			return bgl_gc_roots_register();
		}

	}



/* make-expand-when-trace */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2expandzd2whenzd2tracezd2zz__expander_tracez00(obj_t
		BgL_modez00_3)
	{
		{	/* Eval/expdtrace.scm 56 */
			{	/* Eval/expdtrace.scm 57 */
				obj_t BgL_zc3z04anonymousza31167ze3z87_1899;

				BgL_zc3z04anonymousza31167ze3z87_1899 =
					MAKE_FX_PROCEDURE
					(BGl_z62zc3z04anonymousza31167ze3ze5zz__expander_tracez00,
					(int) (((long) 2)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_zc3z04anonymousza31167ze3z87_1899, (int) (((long) 0)),
					BgL_modez00_3);
				return BgL_zc3z04anonymousza31167ze3z87_1899;
			}
		}

	}



/* &make-expand-when-trace */
	obj_t BGl_z62makezd2expandzd2whenzd2tracezb0zz__expander_tracez00(obj_t
		BgL_envz00_1900, obj_t BgL_modez00_1901)
	{
		{	/* Eval/expdtrace.scm 56 */
			{	/* Eval/expdtrace.scm 57 */
				obj_t BgL_auxz00_2027;

				if (SYMBOLP(BgL_modez00_1901))
					{	/* Eval/expdtrace.scm 57 */
						BgL_auxz00_2027 = BgL_modez00_1901;
					}
				else
					{
						obj_t BgL_auxz00_2030;

						BgL_auxz00_2030 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1727z00zz__expander_tracez00, BINT(((long) 1944)),
							BGl_string1728z00zz__expander_tracez00,
							BGl_string1729z00zz__expander_tracez00, BgL_modez00_1901);
						FAILURE(BgL_auxz00_2030, BFALSE, BFALSE);
					}
				return
					BGl_makezd2expandzd2whenzd2tracezd2zz__expander_tracez00
					(BgL_auxz00_2027);
			}
		}

	}



/* &<@anonymous:1167> */
	obj_t BGl_z62zc3z04anonymousza31167ze3ze5zz__expander_tracez00(obj_t
		BgL_envz00_1902, obj_t BgL_xz00_1904, obj_t BgL_ez00_1905)
	{
		{	/* Eval/expdtrace.scm 57 */
			{	/* Eval/expdtrace.scm 57 */
				obj_t BgL_modez00_1903;

				BgL_modez00_1903 =
					((obj_t) PROCEDURE_REF(BgL_envz00_1902, (int) (((long) 0))));
				{
					obj_t BgL_levelz00_1927;
					obj_t BgL_expz00_1928;

					if (PAIRP(BgL_xz00_1904))
						{	/* Eval/expdtrace.scm 57 */
							obj_t BgL_cdrzd2109zd2_1940;

							BgL_cdrzd2109zd2_1940 = CDR(BgL_xz00_1904);
							if (PAIRP(BgL_cdrzd2109zd2_1940))
								{	/* Eval/expdtrace.scm 57 */
									BgL_levelz00_1927 = CAR(BgL_cdrzd2109zd2_1940);
									BgL_expz00_1928 = CDR(BgL_cdrzd2109zd2_1940);
									{	/* Eval/expdtrace.scm 60 */
										bool_t BgL_test1785z00_2043;

										{	/* Eval/expdtrace.scm 60 */
											bool_t BgL_test1786z00_2044;

											{	/* Eval/expdtrace.scm 60 */
												int BgL_arg1225z00_1929;

												BgL_arg1225z00_1929 =
													BGl_bigloozd2profilezd2zz__paramz00();
												BgL_test1786z00_2044 =
													((long) (BgL_arg1225z00_1929) == ((long) 0));
											}
											if (BgL_test1786z00_2044)
												{	/* Eval/expdtrace.scm 60 */
													if (
														(BgL_modez00_1903 ==
															BGl_symbol1730z00zz__expander_tracez00))
														{	/* Eval/expdtrace.scm 62 */
															int BgL_arg1221z00_1930;

															BgL_arg1221z00_1930 =
																BGl_bigloozd2compilerzd2debugz00zz__paramz00();
															BgL_test1785z00_2043 =
																((long) (BgL_arg1221z00_1930) > ((long) 0));
														}
													else
														{	/* Eval/expdtrace.scm 63 */
															int BgL_arg1223z00_1931;

															BgL_arg1223z00_1931 = bgl_debug();
															BgL_test1785z00_2043 =
																((long) (BgL_arg1223z00_1931) > ((long) 0));
												}}
											else
												{	/* Eval/expdtrace.scm 60 */
													BgL_test1785z00_2043 = ((bool_t) 0);
												}
										}
										if (BgL_test1785z00_2043)
											{	/* Eval/expdtrace.scm 65 */
												obj_t BgL_arg1186z00_1932;

												{	/* Eval/expdtrace.scm 65 */
													obj_t BgL_arg1190z00_1933;

													{	/* Eval/expdtrace.scm 65 */
														obj_t BgL_arg1194z00_1934;
														obj_t BgL_arg1197z00_1935;

														{	/* Eval/expdtrace.scm 65 */
															obj_t BgL_arg1201z00_1936;

															BgL_arg1201z00_1936 =
																MAKE_YOUNG_PAIR(BgL_levelz00_1927, BNIL);
															BgL_arg1194z00_1934 =
																MAKE_YOUNG_PAIR
																(BGl_symbol1732z00zz__expander_tracez00,
																BgL_arg1201z00_1936);
														}
														{	/* Eval/expdtrace.scm 66 */
															obj_t BgL_arg1208z00_1937;
															obj_t BgL_arg1211z00_1938;

															{	/* Eval/expdtrace.scm 66 */
																obj_t BgL_arg1216z00_1939;

																BgL_arg1216z00_1939 =
																	BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																	(BgL_expz00_1928, BNIL);
																BgL_arg1208z00_1937 =
																	MAKE_YOUNG_PAIR
																	(BGl_symbol1734z00zz__expander_tracez00,
																	BgL_arg1216z00_1939);
															}
															BgL_arg1211z00_1938 =
																MAKE_YOUNG_PAIR(BUNSPEC, BNIL);
															BgL_arg1197z00_1935 =
																MAKE_YOUNG_PAIR(BgL_arg1208z00_1937,
																BgL_arg1211z00_1938);
														}
														BgL_arg1190z00_1933 =
															MAKE_YOUNG_PAIR(BgL_arg1194z00_1934,
															BgL_arg1197z00_1935);
													}
													BgL_arg1186z00_1932 =
														MAKE_YOUNG_PAIR
														(BGl_symbol1736z00zz__expander_tracez00,
														BgL_arg1190z00_1933);
												}
												return
													PROCEDURE_ENTRY(BgL_ez00_1905) (BgL_ez00_1905,
													BgL_arg1186z00_1932, BgL_ez00_1905, BEOA);
											}
										else
											{	/* Eval/expdtrace.scm 60 */
												return BUNSPEC;
											}
									}
								}
							else
								{	/* Eval/expdtrace.scm 57 */
									return
										BGl_expandzd2errorzd2zz__expandz00
										(BGl_string1738z00zz__expander_tracez00,
										BGl_string1739z00zz__expander_tracez00, BgL_xz00_1904);
								}
						}
					else
						{	/* Eval/expdtrace.scm 57 */
							return
								BGl_expandzd2errorzd2zz__expandz00
								(BGl_string1738z00zz__expander_tracez00,
								BGl_string1739z00zz__expander_tracez00, BgL_xz00_1904);
						}
				}
			}
		}

	}



/* make-expand-with-trace */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2expandzd2withzd2tracezd2zz__expander_tracez00(obj_t
		BgL_modez00_4)
	{
		{	/* Eval/expdtrace.scm 76 */
			{	/* Eval/expdtrace.scm 77 */
				obj_t BgL_zc3z04anonymousza31226ze3z87_1906;

				BgL_zc3z04anonymousza31226ze3z87_1906 =
					MAKE_FX_PROCEDURE
					(BGl_z62zc3z04anonymousza31226ze3ze5zz__expander_tracez00,
					(int) (((long) 2)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_zc3z04anonymousza31226ze3z87_1906, (int) (((long) 0)),
					BgL_modez00_4);
				return BgL_zc3z04anonymousza31226ze3z87_1906;
			}
		}

	}



/* &make-expand-with-trace */
	obj_t BGl_z62makezd2expandzd2withzd2tracezb0zz__expander_tracez00(obj_t
		BgL_envz00_1907, obj_t BgL_modez00_1908)
	{
		{	/* Eval/expdtrace.scm 76 */
			{	/* Eval/expdtrace.scm 77 */
				obj_t BgL_auxz00_2078;

				if (SYMBOLP(BgL_modez00_1908))
					{	/* Eval/expdtrace.scm 77 */
						BgL_auxz00_2078 = BgL_modez00_1908;
					}
				else
					{
						obj_t BgL_auxz00_2081;

						BgL_auxz00_2081 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1727z00zz__expander_tracez00, BINT(((long) 2579)),
							BGl_string1740z00zz__expander_tracez00,
							BGl_string1729z00zz__expander_tracez00, BgL_modez00_1908);
						FAILURE(BgL_auxz00_2081, BFALSE, BFALSE);
					}
				return
					BGl_makezd2expandzd2withzd2tracezd2zz__expander_tracez00
					(BgL_auxz00_2078);
			}
		}

	}



/* &<@anonymous:1226> */
	obj_t BGl_z62zc3z04anonymousza31226ze3ze5zz__expander_tracez00(obj_t
		BgL_envz00_1909, obj_t BgL_xz00_1911, obj_t BgL_ez00_1912)
	{
		{	/* Eval/expdtrace.scm 77 */
			{	/* Eval/expdtrace.scm 77 */
				obj_t BgL_modez00_1910;

				BgL_modez00_1910 =
					((obj_t) PROCEDURE_REF(BgL_envz00_1909, (int) (((long) 0))));
				{
					obj_t BgL_levelz00_1942;
					obj_t BgL_lblz00_1943;
					obj_t BgL_argza2za2_1944;

					if (PAIRP(BgL_xz00_1911))
						{	/* Eval/expdtrace.scm 77 */
							obj_t BgL_cdrzd2126zd2_1975;

							BgL_cdrzd2126zd2_1975 = CDR(BgL_xz00_1911);
							if (PAIRP(BgL_cdrzd2126zd2_1975))
								{	/* Eval/expdtrace.scm 77 */
									obj_t BgL_cdrzd2131zd2_1976;

									BgL_cdrzd2131zd2_1976 = CDR(BgL_cdrzd2126zd2_1975);
									if (PAIRP(BgL_cdrzd2131zd2_1976))
										{	/* Eval/expdtrace.scm 77 */
											BgL_levelz00_1942 = CAR(BgL_cdrzd2126zd2_1975);
											BgL_lblz00_1943 = CAR(BgL_cdrzd2131zd2_1976);
											BgL_argza2za2_1944 = CDR(BgL_cdrzd2131zd2_1976);
											{	/* Eval/expdtrace.scm 80 */
												bool_t BgL_test1792z00_2097;

												{	/* Eval/expdtrace.scm 80 */
													bool_t BgL_test1793z00_2098;

													{	/* Eval/expdtrace.scm 80 */
														int BgL_arg1296z00_1945;

														BgL_arg1296z00_1945 =
															BGl_bigloozd2profilezd2zz__paramz00();
														BgL_test1793z00_2098 =
															((long) (BgL_arg1296z00_1945) == ((long) 0));
													}
													if (BgL_test1793z00_2098)
														{	/* Eval/expdtrace.scm 80 */
															if (
																(BgL_modez00_1910 ==
																	BGl_symbol1730z00zz__expander_tracez00))
																{	/* Eval/expdtrace.scm 82 */
																	int BgL_arg1292z00_1946;

																	BgL_arg1292z00_1946 =
																		BGl_bigloozd2compilerzd2debugz00zz__paramz00
																		();
																	BgL_test1792z00_2097 =
																		((long) (BgL_arg1292z00_1946) > ((long) 0));
																}
															else
																{	/* Eval/expdtrace.scm 83 */
																	int BgL_arg1295z00_1947;

																	BgL_arg1295z00_1947 = bgl_debug();
																	BgL_test1792z00_2097 =
																		((long) (BgL_arg1295z00_1947) > ((long) 0));
														}}
													else
														{	/* Eval/expdtrace.scm 80 */
															BgL_test1792z00_2097 = ((bool_t) 0);
														}
												}
												if (BgL_test1792z00_2097)
													{	/* Eval/expdtrace.scm 85 */
														obj_t BgL_fz00_1948;

														BgL_fz00_1948 =
															BGl_gensymz00zz__r4_symbols_6_4z00
															(BGl_symbol1741z00zz__expander_tracez00);
														{	/* Eval/expdtrace.scm 85 */
															obj_t BgL_nxz00_1949;

															{	/* Eval/expdtrace.scm 86 */
																obj_t BgL_arg1252z00_1950;

																{	/* Eval/expdtrace.scm 86 */
																	obj_t BgL_arg1253z00_1951;
																	obj_t BgL_arg1254z00_1952;

																	{	/* Eval/expdtrace.scm 86 */
																		obj_t BgL_arg1256z00_1953;

																		{	/* Eval/expdtrace.scm 86 */
																			obj_t BgL_arg1258z00_1954;

																			{	/* Eval/expdtrace.scm 86 */
																				obj_t BgL_arg1263z00_1955;

																				{	/* Eval/expdtrace.scm 86 */
																					obj_t BgL_arg1268z00_1956;

																					{	/* Eval/expdtrace.scm 86 */
																						obj_t BgL_arg1270z00_1957;

																						{	/* Eval/expdtrace.scm 86 */
																							obj_t BgL_arg1271z00_1958;

																							{	/* Eval/expdtrace.scm 86 */
																								obj_t BgL_arg1273z00_1959;

																								BgL_arg1273z00_1959 =
																									BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																									(BgL_argza2za2_1944, BNIL);
																								BgL_arg1271z00_1958 =
																									MAKE_YOUNG_PAIR
																									(BGl_symbol1734z00zz__expander_tracez00,
																									BgL_arg1273z00_1959);
																							}
																							BgL_arg1270z00_1957 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1271z00_1958, BNIL);
																						}
																						BgL_arg1268z00_1956 =
																							MAKE_YOUNG_PAIR(BNIL,
																							BgL_arg1270z00_1957);
																					}
																					BgL_arg1263z00_1955 =
																						MAKE_YOUNG_PAIR
																						(BGl_symbol1743z00zz__expander_tracez00,
																						BgL_arg1268z00_1956);
																				}
																				BgL_arg1258z00_1954 =
																					MAKE_YOUNG_PAIR(BgL_arg1263z00_1955,
																					BNIL);
																			}
																			BgL_arg1256z00_1953 =
																				MAKE_YOUNG_PAIR(BgL_fz00_1948,
																				BgL_arg1258z00_1954);
																		}
																		BgL_arg1253z00_1951 =
																			MAKE_YOUNG_PAIR(BgL_arg1256z00_1953,
																			BNIL);
																	}
																	{	/* Eval/expdtrace.scm 87 */
																		obj_t BgL_arg1274z00_1960;

																		{	/* Eval/expdtrace.scm 87 */
																			obj_t BgL_arg1275z00_1961;

																			{	/* Eval/expdtrace.scm 87 */
																				obj_t BgL_arg1276z00_1962;
																				obj_t BgL_arg1277z00_1963;

																				{	/* Eval/expdtrace.scm 87 */
																					obj_t BgL_arg1280z00_1964;

																					{	/* Eval/expdtrace.scm 87 */
																						obj_t BgL_arg1281z00_1965;
																						obj_t BgL_arg1282z00_1966;

																						BgL_arg1281z00_1965 =
																							MAKE_YOUNG_PAIR
																							(BGl_symbol1745z00zz__expander_tracez00,
																							BNIL);
																						BgL_arg1282z00_1966 =
																							MAKE_YOUNG_PAIR(BINT(((long) 0)),
																							BNIL);
																						BgL_arg1280z00_1964 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1281z00_1965,
																							BgL_arg1282z00_1966);
																					}
																					BgL_arg1276z00_1962 =
																						MAKE_YOUNG_PAIR
																						(BGl_symbol1747z00zz__expander_tracez00,
																						BgL_arg1280z00_1964);
																				}
																				{	/* Eval/expdtrace.scm 88 */
																					obj_t BgL_arg1284z00_1967;
																					obj_t BgL_arg1285z00_1968;

																					{	/* Eval/expdtrace.scm 88 */
																						obj_t BgL_arg1286z00_1969;

																						{	/* Eval/expdtrace.scm 88 */
																							obj_t BgL_arg1287z00_1970;

																							{	/* Eval/expdtrace.scm 88 */
																								obj_t BgL_arg1288z00_1971;

																								BgL_arg1288z00_1971 =
																									MAKE_YOUNG_PAIR(BgL_fz00_1948,
																									BNIL);
																								BgL_arg1287z00_1970 =
																									MAKE_YOUNG_PAIR
																									(BgL_lblz00_1943,
																									BgL_arg1288z00_1971);
																							}
																							BgL_arg1286z00_1969 =
																								MAKE_YOUNG_PAIR
																								(BgL_levelz00_1942,
																								BgL_arg1287z00_1970);
																						}
																						BgL_arg1284z00_1967 =
																							MAKE_YOUNG_PAIR
																							(BGl_symbol1749z00zz__expander_tracez00,
																							BgL_arg1286z00_1969);
																					}
																					{	/* Eval/expdtrace.scm 89 */
																						obj_t BgL_arg1289z00_1972;

																						BgL_arg1289z00_1972 =
																							MAKE_YOUNG_PAIR(BgL_fz00_1948,
																							BNIL);
																						BgL_arg1285z00_1968 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1289z00_1972, BNIL);
																					}
																					BgL_arg1277z00_1963 =
																						MAKE_YOUNG_PAIR(BgL_arg1284z00_1967,
																						BgL_arg1285z00_1968);
																				}
																				BgL_arg1275z00_1961 =
																					MAKE_YOUNG_PAIR(BgL_arg1276z00_1962,
																					BgL_arg1277z00_1963);
																			}
																			BgL_arg1274z00_1960 =
																				MAKE_YOUNG_PAIR
																				(BGl_symbol1736z00zz__expander_tracez00,
																				BgL_arg1275z00_1961);
																		}
																		BgL_arg1254z00_1952 =
																			MAKE_YOUNG_PAIR(BgL_arg1274z00_1960,
																			BNIL);
																	}
																	BgL_arg1252z00_1950 =
																		MAKE_YOUNG_PAIR(BgL_arg1253z00_1951,
																		BgL_arg1254z00_1952);
																}
																BgL_nxz00_1949 =
																	MAKE_YOUNG_PAIR
																	(BGl_symbol1751z00zz__expander_tracez00,
																	BgL_arg1252z00_1950);
															}
															{	/* Eval/expdtrace.scm 86 */

																return
																	PROCEDURE_ENTRY(BgL_ez00_1912) (BgL_ez00_1912,
																	BgL_nxz00_1949, BgL_ez00_1912, BEOA);
															}
														}
													}
												else
													{	/* Eval/expdtrace.scm 91 */
														obj_t BgL_arg1290z00_1973;

														{	/* Eval/expdtrace.scm 91 */
															obj_t BgL_arg1291z00_1974;

															BgL_arg1291z00_1974 =
																BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																(BgL_argza2za2_1944, BNIL);
															BgL_arg1290z00_1973 =
																MAKE_YOUNG_PAIR
																(BGl_symbol1734z00zz__expander_tracez00,
																BgL_arg1291z00_1974);
														}
														return
															PROCEDURE_ENTRY(BgL_ez00_1912) (BgL_ez00_1912,
															BgL_arg1290z00_1973, BgL_ez00_1912, BEOA);
													}
											}
										}
									else
										{	/* Eval/expdtrace.scm 77 */
											return
												BGl_expandzd2errorzd2zz__expandz00
												(BGl_string1753z00zz__expander_tracez00,
												BGl_string1739z00zz__expander_tracez00, BgL_xz00_1911);
										}
								}
							else
								{	/* Eval/expdtrace.scm 77 */
									return
										BGl_expandzd2errorzd2zz__expandz00
										(BGl_string1753z00zz__expander_tracez00,
										BGl_string1739z00zz__expander_tracez00, BgL_xz00_1911);
								}
						}
					else
						{	/* Eval/expdtrace.scm 77 */
							return
								BGl_expandzd2errorzd2zz__expandz00
								(BGl_string1753z00zz__expander_tracez00,
								BGl_string1739z00zz__expander_tracez00, BgL_xz00_1911);
						}
				}
			}
		}

	}



/* make-expand-trace-item */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2expandzd2tracezd2itemzd2zz__expander_tracez00(obj_t
		BgL_modez00_5)
	{
		{	/* Eval/expdtrace.scm 98 */
			{	/* Eval/expdtrace.scm 99 */
				obj_t BgL_zc3z04anonymousza31297ze3z87_1913;

				BgL_zc3z04anonymousza31297ze3z87_1913 =
					MAKE_FX_PROCEDURE
					(BGl_z62zc3z04anonymousza31297ze3ze5zz__expander_tracez00,
					(int) (((long) 2)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_zc3z04anonymousza31297ze3z87_1913, (int) (((long) 0)),
					BgL_modez00_5);
				return BgL_zc3z04anonymousza31297ze3z87_1913;
			}
		}

	}



/* &make-expand-trace-item */
	obj_t BGl_z62makezd2expandzd2tracezd2itemzb0zz__expander_tracez00(obj_t
		BgL_envz00_1914, obj_t BgL_modez00_1915)
	{
		{	/* Eval/expdtrace.scm 98 */
			{	/* Eval/expdtrace.scm 99 */
				obj_t BgL_auxz00_2159;

				if (SYMBOLP(BgL_modez00_1915))
					{	/* Eval/expdtrace.scm 99 */
						BgL_auxz00_2159 = BgL_modez00_1915;
					}
				else
					{
						obj_t BgL_auxz00_2162;

						BgL_auxz00_2162 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1727z00zz__expander_tracez00, BINT(((long) 3318)),
							BGl_string1754z00zz__expander_tracez00,
							BGl_string1729z00zz__expander_tracez00, BgL_modez00_1915);
						FAILURE(BgL_auxz00_2162, BFALSE, BFALSE);
					}
				return
					BGl_makezd2expandzd2tracezd2itemzd2zz__expander_tracez00
					(BgL_auxz00_2159);
			}
		}

	}



/* &<@anonymous:1297> */
	obj_t BGl_z62zc3z04anonymousza31297ze3ze5zz__expander_tracez00(obj_t
		BgL_envz00_1916, obj_t BgL_xz00_1918, obj_t BgL_ez00_1919)
	{
		{	/* Eval/expdtrace.scm 99 */
			{	/* Eval/expdtrace.scm 100 */
				obj_t BgL_modez00_1917;

				BgL_modez00_1917 =
					((obj_t) PROCEDURE_REF(BgL_envz00_1916, (int) (((long) 0))));
				{	/* Eval/expdtrace.scm 100 */
					bool_t BgL_test1796z00_2170;

					{	/* Eval/expdtrace.scm 100 */
						bool_t BgL_test1797z00_2171;

						{	/* Eval/expdtrace.scm 100 */
							int BgL_arg1326z00_1977;

							BgL_arg1326z00_1977 = BGl_bigloozd2profilezd2zz__paramz00();
							BgL_test1797z00_2171 =
								((long) (BgL_arg1326z00_1977) == ((long) 0));
						}
						if (BgL_test1797z00_2171)
							{	/* Eval/expdtrace.scm 100 */
								if (
									(BgL_modez00_1917 == BGl_symbol1730z00zz__expander_tracez00))
									{	/* Eval/expdtrace.scm 102 */
										int BgL_arg1324z00_1978;

										BgL_arg1324z00_1978 =
											BGl_bigloozd2compilerzd2debugz00zz__paramz00();
										BgL_test1796z00_2170 =
											((long) (BgL_arg1324z00_1978) > ((long) 0));
									}
								else
									{	/* Eval/expdtrace.scm 103 */
										int BgL_arg1325z00_1979;

										BgL_arg1325z00_1979 = bgl_debug();
										BgL_test1796z00_2170 =
											((long) (BgL_arg1325z00_1979) > ((long) 0));
							}}
						else
							{	/* Eval/expdtrace.scm 100 */
								BgL_test1796z00_2170 = ((bool_t) 0);
							}
					}
					if (BgL_test1796z00_2170)
						{	/* Eval/expdtrace.scm 105 */
							obj_t BgL_arg1306z00_1980;

							{	/* Eval/expdtrace.scm 105 */
								obj_t BgL_arg1307z00_1981;
								obj_t BgL_arg1308z00_1982;

								{	/* Eval/expdtrace.scm 105 */
									obj_t BgL_arg1309z00_1983;

									{	/* Eval/expdtrace.scm 105 */
										obj_t BgL_arg1310z00_1984;
										obj_t BgL_arg1311z00_1985;

										BgL_arg1310z00_1984 =
											MAKE_YOUNG_PAIR(BGl_symbol1745z00zz__expander_tracez00,
											BNIL);
										BgL_arg1311z00_1985 =
											MAKE_YOUNG_PAIR(BINT(((long) 0)), BNIL);
										BgL_arg1309z00_1983 =
											MAKE_YOUNG_PAIR(BgL_arg1310z00_1984, BgL_arg1311z00_1985);
									}
									BgL_arg1307z00_1981 =
										MAKE_YOUNG_PAIR(BGl_symbol1747z00zz__expander_tracez00,
										BgL_arg1309z00_1983);
								}
								{	/* Eval/expdtrace.scm 106 */
									obj_t BgL_arg1312z00_1986;
									obj_t BgL_arg1313z00_1987;

									{	/* Eval/expdtrace.scm 106 */
										obj_t BgL_arg1314z00_1988;

										{	/* Eval/expdtrace.scm 106 */
											obj_t BgL_arg1315z00_1989;

											{	/* Eval/expdtrace.scm 106 */
												obj_t BgL_l1078z00_1990;

												BgL_l1078z00_1990 = CDR(((obj_t) BgL_xz00_1918));
												if (NULLP(BgL_l1078z00_1990))
													{	/* Eval/expdtrace.scm 106 */
														BgL_arg1315z00_1989 = BNIL;
													}
												else
													{	/* Eval/expdtrace.scm 106 */
														obj_t BgL_head1080z00_1991;

														{	/* Eval/expdtrace.scm 106 */
															obj_t BgL_res1664z00_1992;

															BgL_res1664z00_1992 = MAKE_YOUNG_PAIR(BNIL, BNIL);
															BgL_head1080z00_1991 = BgL_res1664z00_1992;
														}
														{
															obj_t BgL_l1078z00_1994;
															obj_t BgL_tail1081z00_1995;

															BgL_l1078z00_1994 = BgL_l1078z00_1990;
															BgL_tail1081z00_1995 = BgL_head1080z00_1991;
														BgL_zc3z04anonymousza31317ze3z87_1993:
															if (NULLP(BgL_l1078z00_1994))
																{	/* Eval/expdtrace.scm 106 */
																	BgL_arg1315z00_1989 =
																		CDR(BgL_head1080z00_1991);
																}
															else
																{	/* Eval/expdtrace.scm 106 */
																	obj_t BgL_newtail1082z00_1996;

																	{	/* Eval/expdtrace.scm 106 */
																		obj_t BgL_arg1322z00_1997;

																		{	/* Eval/expdtrace.scm 106 */
																			obj_t BgL_xz00_1998;

																			BgL_xz00_1998 =
																				CAR(((obj_t) BgL_l1078z00_1994));
																			BgL_arg1322z00_1997 =
																				PROCEDURE_ENTRY(BgL_ez00_1919)
																				(BgL_ez00_1919, BgL_xz00_1998,
																				BgL_ez00_1919, BEOA);
																		}
																		{	/* Eval/expdtrace.scm 106 */
																			obj_t BgL_res1670z00_1999;

																			BgL_res1670z00_1999 =
																				MAKE_YOUNG_PAIR(BgL_arg1322z00_1997,
																				BNIL);
																			BgL_newtail1082z00_1996 =
																				BgL_res1670z00_1999;
																		}
																	}
																	SET_CDR(BgL_tail1081z00_1995,
																		BgL_newtail1082z00_1996);
																	{	/* Eval/expdtrace.scm 106 */
																		obj_t BgL_arg1319z00_2000;

																		BgL_arg1319z00_2000 =
																			CDR(((obj_t) BgL_l1078z00_1994));
																		{
																			obj_t BgL_tail1081z00_2208;
																			obj_t BgL_l1078z00_2207;

																			BgL_l1078z00_2207 = BgL_arg1319z00_2000;
																			BgL_tail1081z00_2208 =
																				BgL_newtail1082z00_1996;
																			BgL_tail1081z00_1995 =
																				BgL_tail1081z00_2208;
																			BgL_l1078z00_1994 = BgL_l1078z00_2207;
																			goto
																				BgL_zc3z04anonymousza31317ze3z87_1993;
																		}
																	}
																}
														}
													}
											}
											BgL_arg1314z00_1988 =
												BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg1315z00_1989, BNIL);
										}
										BgL_arg1312z00_1986 =
											MAKE_YOUNG_PAIR(BGl_symbol1755z00zz__expander_tracez00,
											BgL_arg1314z00_1988);
									}
									BgL_arg1313z00_1987 = MAKE_YOUNG_PAIR(BUNSPEC, BNIL);
									BgL_arg1308z00_1982 =
										MAKE_YOUNG_PAIR(BgL_arg1312z00_1986, BgL_arg1313z00_1987);
								}
								BgL_arg1306z00_1980 =
									MAKE_YOUNG_PAIR(BgL_arg1307z00_1981, BgL_arg1308z00_1982);
							}
							return
								MAKE_YOUNG_PAIR(BGl_symbol1736z00zz__expander_tracez00,
								BgL_arg1306z00_1980);
						}
					else
						{	/* Eval/expdtrace.scm 100 */
							return BUNSPEC;
						}
				}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__expander_tracez00()
	{
		{	/* Eval/expdtrace.scm 14 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__expander_tracez00()
	{
		{	/* Eval/expdtrace.scm 14 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__expander_tracez00()
	{
		{	/* Eval/expdtrace.scm 14 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__expander_tracez00()
	{
		{	/* Eval/expdtrace.scm 14 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string1757z00zz__expander_tracez00));
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 70989162),
				BSTRING_TO_STRING(BGl_string1757z00zz__expander_tracez00));
			BGl_modulezd2initializa7ationz75zz__tvectorz00(((long) 135277364),
				BSTRING_TO_STRING(BGl_string1757z00zz__expander_tracez00));
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 128218115),
				BSTRING_TO_STRING(BGl_string1757z00zz__expander_tracez00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 340267996),
				BSTRING_TO_STRING(BGl_string1757z00zz__expander_tracez00));
			BGl_modulezd2initializa7ationz75zz__bignumz00(((long) 6519875),
				BSTRING_TO_STRING(BGl_string1757z00zz__expander_tracez00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 193422032),
				BSTRING_TO_STRING(BGl_string1757z00zz__expander_tracez00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 224967910),
				BSTRING_TO_STRING(BGl_string1757z00zz__expander_tracez00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 68572481),
				BSTRING_TO_STRING(BGl_string1757z00zz__expander_tracez00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long)
					420334581),
				BSTRING_TO_STRING(BGl_string1757z00zz__expander_tracez00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long)
					437057945),
				BSTRING_TO_STRING(BGl_string1757z00zz__expander_tracez00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonum_dtoaz00(((long)
					268155874),
				BSTRING_TO_STRING(BGl_string1757z00zz__expander_tracez00));
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long)
					198621048),
				BSTRING_TO_STRING(BGl_string1757z00zz__expander_tracez00));
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long)
					473309694),
				BSTRING_TO_STRING(BGl_string1757z00zz__expander_tracez00));
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 459519474),
				BSTRING_TO_STRING(BGl_string1757z00zz__expander_tracez00));
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 460263341),
				BSTRING_TO_STRING(BGl_string1757z00zz__expander_tracez00));
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) -44274296),
				BSTRING_TO_STRING(BGl_string1757z00zz__expander_tracez00));
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long)
					9614573), BSTRING_TO_STRING(BGl_string1757z00zz__expander_tracez00));
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long)
					376927845),
				BSTRING_TO_STRING(BGl_string1757z00zz__expander_tracez00));
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 190906089),
				BSTRING_TO_STRING(BGl_string1757z00zz__expander_tracez00));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 331540733),
				BSTRING_TO_STRING(BGl_string1757z00zz__expander_tracez00));
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 86988972),
				BSTRING_TO_STRING(BGl_string1757z00zz__expander_tracez00));
			BGl_modulezd2initializa7ationz75zz__prognz00(((long) 177147628),
				BSTRING_TO_STRING(BGl_string1757z00zz__expander_tracez00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string1757z00zz__expander_tracez00));
			return BGl_modulezd2initializa7ationz75zz__expandz00(((long) 414007030),
				BSTRING_TO_STRING(BGl_string1757z00zz__expander_tracez00));
		}

	}

#ifdef __cplusplus
}
#endif
