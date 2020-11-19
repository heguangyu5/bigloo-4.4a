/*===========================================================================*/
/*   (Rgc/rgcposix.scm)                                                      */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Rgc/rgcposix.scm -indent -o objs/obj_u/Rgc/rgcposix.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_symbol1922z00zz__rgc_posixz00 = BUNSPEC;
	static obj_t BGl_symbol1924z00zz__rgc_posixz00 = BUNSPEC;
	static obj_t BGl_symbol1926z00zz__rgc_posixz00 = BUNSPEC;
	static obj_t BGl_symbol1928z00zz__rgc_posixz00 = BUNSPEC;
	static obj_t BGl_requirezd2initializa7ationz75zz__rgc_posixz00 = BUNSPEC;
	static obj_t BGl_symbol1930z00zz__rgc_posixz00 = BUNSPEC;
	static obj_t BGl_symbol1933z00zz__rgc_posixz00 = BUNSPEC;
	static obj_t BGl_symbol1935z00zz__rgc_posixz00 = BUNSPEC;
	static obj_t BGl_symbol1939z00zz__rgc_posixz00 = BUNSPEC;
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol1941z00zz__rgc_posixz00 = BUNSPEC;
	static obj_t BGl_symbol1947z00zz__rgc_posixz00 = BUNSPEC;
	static obj_t BGl_symbol1949z00zz__rgc_posixz00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zz__rgc_posixz00();
	extern obj_t bgl_reverse(obj_t);
	static obj_t BGl_genericzd2initzd2zz__rgc_posixz00();
	extern obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zz__rgc_posixz00();
	static obj_t BGl_makezd2rgczd2repeatz00zz__rgc_posixz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_methodzd2initzd2zz__rgc_posixz00();
	BGL_EXPORTED_DECL obj_t BGl_posixzd2ze3rgcz31zz__rgc_posixz00(obj_t);
	static obj_t BGl_z62posixzd2ze3rgcz53zz__rgc_posixz00(obj_t, obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_za2errzd2stringza2zd2zz__rgc_posixz00 = BUNSPEC;
	extern obj_t BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_makezd2rgczd2sequencez00zz__rgc_posixz00(obj_t);
	static obj_t BGl_parsezd2posixzd2expz00zz__rgc_posixz00(obj_t, long);
	static obj_t BGl_parsezd2posixzd2branchz00zz__rgc_posixz00(obj_t, long);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__rgc_posixz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_cnstzd2initzd2zz__rgc_posixz00();
	static obj_t BGl_list1945z00zz__rgc_posixz00 = BUNSPEC;
	static obj_t BGl_gczd2rootszd2initz00zz__rgc_posixz00();
	static obj_t BGl_parsezd2posixzd2piecez00zz__rgc_posixz00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__rgc_posixz00();
	static obj_t BGl_parsezd2posixzd2atomz00zz__rgc_posixz00(obj_t, obj_t);
	extern obj_t c_substring(obj_t, long, long);
	static obj_t BGl_makezd2rgczd2orz00zz__rgc_posixz00(obj_t);
	static obj_t BGl_parsezd2posixzd2bracketz00zz__rgc_posixz00(obj_t, long);
	static obj_t BGl_parsezd2posixzd2bracesz00zz__rgc_posixz00(obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string1918z00zz__rgc_posixz00,
		BgL_bgl_string1918za700za7za7_1955za7,
		"RGC:Illegal Posix regexp -- terminated early", 44);
	      DEFINE_STRING(BGl_string1919z00zz__rgc_posixz00,
		BgL_bgl_string1919za700za7za7_1956za7, "/tmp/4.4a/runtime/Rgc/rgcposix.scm",
		34);
	      DEFINE_STRING(BGl_string1920z00zz__rgc_posixz00,
		BgL_bgl_string1920za700za7za7_1957za7, "&posix->rgc", 11);
	      DEFINE_STRING(BGl_string1921z00zz__rgc_posixz00,
		BgL_bgl_string1921za700za7za7_1958za7, "bstring", 7);
	      DEFINE_STRING(BGl_string1923z00zz__rgc_posixz00,
		BgL_bgl_string1923za700za7za7_1959za7, "*", 1);
	      DEFINE_STRING(BGl_string1925z00zz__rgc_posixz00,
		BgL_bgl_string1925za700za7za7_1960za7, "+", 1);
	      DEFINE_STRING(BGl_string1927z00zz__rgc_posixz00,
		BgL_bgl_string1927za700za7za7_1961za7, "?", 1);
	      DEFINE_STRING(BGl_string1929z00zz__rgc_posixz00,
		BgL_bgl_string1929za700za7za7_1962za7, "**", 2);
	      DEFINE_STRING(BGl_string1931z00zz__rgc_posixz00,
		BgL_bgl_string1931za700za7za7_1963za7, ">=", 2);
	      DEFINE_STRING(BGl_string1932z00zz__rgc_posixz00,
		BgL_bgl_string1932za700za7za7_1964za7, "RGC:Illegal posix string", 24);
	      DEFINE_STRING(BGl_string1934z00zz__rgc_posixz00,
		BgL_bgl_string1934za700za7za7_1965za7, "or", 2);
	      DEFINE_STRING(BGl_string1936z00zz__rgc_posixz00,
		BgL_bgl_string1936za700za7za7_1966za7, ":", 1);
	      DEFINE_STRING(BGl_string1937z00zz__rgc_posixz00,
		BgL_bgl_string1937za700za7za7_1967za7, "RGC: `^' regexps not supported.",
		31);
	      DEFINE_STRING(BGl_string1938z00zz__rgc_posixz00,
		BgL_bgl_string1938za700za7za7_1968za7, "RGC: `$' regexps not supported.",
		31);
	      DEFINE_STRING(BGl_string1940z00zz__rgc_posixz00,
		BgL_bgl_string1940za700za7za7_1969za7, "all", 3);
	      DEFINE_STRING(BGl_string1942z00zz__rgc_posixz00,
		BgL_bgl_string1942za700za7za7_1970za7, "submatch", 8);
	      DEFINE_STRING(BGl_string1943z00zz__rgc_posixz00,
		BgL_bgl_string1943za700za7za7_1971za7,
		"RGC:subexpression has no terminating close parenthesis", 54);
	      DEFINE_STRING(BGl_string1944z00zz__rgc_posixz00,
		BgL_bgl_string1944za700za7za7_1972za7,
		"RGC:expression may not terminate with a backslash", 49);
	      DEFINE_STRING(BGl_string1946z00zz__rgc_posixz00,
		BgL_bgl_string1946za700za7za7_1973za7,
		"double-bracket regexps not supported.", 37);
	      DEFINE_STRING(BGl_string1948z00zz__rgc_posixz00,
		BgL_bgl_string1948za700za7za7_1974za7, "out", 3);
	      DEFINE_STRING(BGl_string1950z00zz__rgc_posixz00,
		BgL_bgl_string1950za700za7za7_1975za7, "in", 2);
	      DEFINE_STRING(BGl_string1951z00zz__rgc_posixz00,
		BgL_bgl_string1951za700za7za7_1976za7, "Illegal - in [...] regexp", 25);
	      DEFINE_STRING(BGl_string1952z00zz__rgc_posixz00,
		BgL_bgl_string1952za700za7za7_1977za7,
		"Missing close right bracket in regexp", 37);
	      DEFINE_STRING(BGl_string1953z00zz__rgc_posixz00,
		BgL_bgl_string1953za700za7za7_1978za7, "Missing close brace in regexp", 29);
	      DEFINE_STRING(BGl_string1954z00zz__rgc_posixz00,
		BgL_bgl_string1954za700za7za7_1979za7, "__rgc_posix", 11);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_posixzd2ze3rgczd2envze3zz__rgc_posixz00,
		BgL_bgl_za762posixza7d2za7e3rg1980za7,
		BGl_z62posixzd2ze3rgcz53zz__rgc_posixz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_symbol1922z00zz__rgc_posixz00));
		     ADD_ROOT((void *) (&BGl_symbol1924z00zz__rgc_posixz00));
		     ADD_ROOT((void *) (&BGl_symbol1926z00zz__rgc_posixz00));
		     ADD_ROOT((void *) (&BGl_symbol1928z00zz__rgc_posixz00));
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__rgc_posixz00));
		     ADD_ROOT((void *) (&BGl_symbol1930z00zz__rgc_posixz00));
		     ADD_ROOT((void *) (&BGl_symbol1933z00zz__rgc_posixz00));
		     ADD_ROOT((void *) (&BGl_symbol1935z00zz__rgc_posixz00));
		     ADD_ROOT((void *) (&BGl_symbol1939z00zz__rgc_posixz00));
		     ADD_ROOT((void *) (&BGl_symbol1941z00zz__rgc_posixz00));
		     ADD_ROOT((void *) (&BGl_symbol1947z00zz__rgc_posixz00));
		     ADD_ROOT((void *) (&BGl_symbol1949z00zz__rgc_posixz00));
		     ADD_ROOT((void *) (&BGl_za2errzd2stringza2zd2zz__rgc_posixz00));
		     ADD_ROOT((void *) (&BGl_list1945z00zz__rgc_posixz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__rgc_posixz00(long
		BgL_checksumz00_2437, char *BgL_fromz00_2438)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__rgc_posixz00))
				{
					BGl_requirezd2initializa7ationz75zz__rgc_posixz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__rgc_posixz00();
					BGl_cnstzd2initzd2zz__rgc_posixz00();
					BGl_importedzd2moduleszd2initz00zz__rgc_posixz00();
					return BGl_toplevelzd2initzd2zz__rgc_posixz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__rgc_posixz00()
	{
		{	/* Rgc/rgcposix.scm 14 */
			BGl_symbol1922z00zz__rgc_posixz00 =
				bstring_to_symbol(BGl_string1923z00zz__rgc_posixz00);
			BGl_symbol1924z00zz__rgc_posixz00 =
				bstring_to_symbol(BGl_string1925z00zz__rgc_posixz00);
			BGl_symbol1926z00zz__rgc_posixz00 =
				bstring_to_symbol(BGl_string1927z00zz__rgc_posixz00);
			BGl_symbol1928z00zz__rgc_posixz00 =
				bstring_to_symbol(BGl_string1929z00zz__rgc_posixz00);
			BGl_symbol1930z00zz__rgc_posixz00 =
				bstring_to_symbol(BGl_string1931z00zz__rgc_posixz00);
			BGl_symbol1933z00zz__rgc_posixz00 =
				bstring_to_symbol(BGl_string1934z00zz__rgc_posixz00);
			BGl_symbol1935z00zz__rgc_posixz00 =
				bstring_to_symbol(BGl_string1936z00zz__rgc_posixz00);
			BGl_symbol1939z00zz__rgc_posixz00 =
				bstring_to_symbol(BGl_string1940z00zz__rgc_posixz00);
			BGl_symbol1941z00zz__rgc_posixz00 =
				bstring_to_symbol(BGl_string1942z00zz__rgc_posixz00);
			BGl_list1945z00zz__rgc_posixz00 =
				MAKE_YOUNG_PAIR(BCHAR(((unsigned char) '.')),
				MAKE_YOUNG_PAIR(BCHAR(((unsigned char) '=')),
					MAKE_YOUNG_PAIR(BCHAR(((unsigned char) ':')), BNIL)));
			BGl_symbol1947z00zz__rgc_posixz00 =
				bstring_to_symbol(BGl_string1948z00zz__rgc_posixz00);
			return (BGl_symbol1949z00zz__rgc_posixz00 =
				bstring_to_symbol(BGl_string1950z00zz__rgc_posixz00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__rgc_posixz00()
	{
		{	/* Rgc/rgcposix.scm 14 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__rgc_posixz00()
	{
		{	/* Rgc/rgcposix.scm 14 */
			return (BGl_za2errzd2stringza2zd2zz__rgc_posixz00 = BUNSPEC, BUNSPEC);
		}

	}



/* posix->rgc */
	BGL_EXPORTED_DEF obj_t BGl_posixzd2ze3rgcz31zz__rgc_posixz00(obj_t BgL_sz00_3)
	{
		{	/* Rgc/rgcposix.scm 52 */
			BGl_za2errzd2stringza2zd2zz__rgc_posixz00 = BgL_sz00_3;
			{	/* Rgc/rgcposix.scm 54 */
				obj_t BgL_rgcz00_1139;

				BgL_rgcz00_1139 =
					BGl_parsezd2posixzd2expz00zz__rgc_posixz00(BgL_sz00_3, ((long) 0));
				{	/* Rgc/rgcposix.scm 55 */
					obj_t BgL_iz00_1140;

					{	/* Rgc/rgcposix.scm 56 */
						int BgL_tmpz00_2465;

						BgL_tmpz00_2465 = (int) (((long) 1));
						BgL_iz00_1140 = BGL_MVALUES_VAL(BgL_tmpz00_2465);
					}
					if (((long) CINT(BgL_iz00_1140) == STRING_LENGTH(BgL_sz00_3)))
						{	/* Rgc/rgcposix.scm 56 */
							return BgL_rgcz00_1139;
						}
					else
						{	/* Rgc/rgcposix.scm 56 */
							return
								BGl_errorz00zz__errorz00(BFALSE,
								BGl_string1918z00zz__rgc_posixz00,
								BGl_za2errzd2stringza2zd2zz__rgc_posixz00);
						}
				}
			}
		}

	}



/* &posix->rgc */
	obj_t BGl_z62posixzd2ze3rgcz53zz__rgc_posixz00(obj_t BgL_envz00_2433,
		obj_t BgL_sz00_2434)
	{
		{	/* Rgc/rgcposix.scm 52 */
			{	/* Rgc/rgcposix.scm 53 */
				obj_t BgL_auxz00_2473;

				if (STRINGP(BgL_sz00_2434))
					{	/* Rgc/rgcposix.scm 53 */
						BgL_auxz00_2473 = BgL_sz00_2434;
					}
				else
					{
						obj_t BgL_auxz00_2476;

						BgL_auxz00_2476 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1919z00zz__rgc_posixz00,
							BINT(((long) 1819)), BGl_string1920z00zz__rgc_posixz00,
							BGl_string1921z00zz__rgc_posixz00, BgL_sz00_2434);
						FAILURE(BgL_auxz00_2476, BFALSE, BFALSE);
					}
				return BGl_posixzd2ze3rgcz31zz__rgc_posixz00(BgL_auxz00_2473);
			}
		}

	}



/* make-rgc-repeat */
	obj_t BGl_makezd2rgczd2repeatz00zz__rgc_posixz00(obj_t BgL_minz00_5,
		obj_t BgL_maxz00_6, obj_t BgL_rgcz00_7)
	{
		{	/* Rgc/rgcposix.scm 77 */
			{	/* Rgc/rgcposix.scm 79 */
				bool_t BgL_test1984z00_2481;

				if ((BgL_minz00_5 == BINT(((long) 0))))
					{	/* Rgc/rgcposix.scm 79 */
						if (CBOOL(BgL_maxz00_6))
							{	/* Rgc/rgcposix.scm 79 */
								BgL_test1984z00_2481 = ((bool_t) 0);
							}
						else
							{	/* Rgc/rgcposix.scm 79 */
								BgL_test1984z00_2481 = ((bool_t) 1);
							}
					}
				else
					{	/* Rgc/rgcposix.scm 79 */
						BgL_test1984z00_2481 = ((bool_t) 0);
					}
				if (BgL_test1984z00_2481)
					{	/* Rgc/rgcposix.scm 80 */
						obj_t BgL_arg1258z00_1146;

						BgL_arg1258z00_1146 = MAKE_YOUNG_PAIR(BgL_rgcz00_7, BNIL);
						return
							MAKE_YOUNG_PAIR(BGl_symbol1922z00zz__rgc_posixz00,
							BgL_arg1258z00_1146);
					}
				else
					{	/* Rgc/rgcposix.scm 81 */
						bool_t BgL_test1987z00_2489;

						if ((BgL_minz00_5 == BINT(((long) 1))))
							{	/* Rgc/rgcposix.scm 81 */
								if (CBOOL(BgL_maxz00_6))
									{	/* Rgc/rgcposix.scm 81 */
										BgL_test1987z00_2489 = ((bool_t) 0);
									}
								else
									{	/* Rgc/rgcposix.scm 81 */
										BgL_test1987z00_2489 = ((bool_t) 1);
									}
							}
						else
							{	/* Rgc/rgcposix.scm 81 */
								BgL_test1987z00_2489 = ((bool_t) 0);
							}
						if (BgL_test1987z00_2489)
							{	/* Rgc/rgcposix.scm 82 */
								obj_t BgL_arg1263z00_1149;

								BgL_arg1263z00_1149 = MAKE_YOUNG_PAIR(BgL_rgcz00_7, BNIL);
								return
									MAKE_YOUNG_PAIR(BGl_symbol1924z00zz__rgc_posixz00,
									BgL_arg1263z00_1149);
							}
						else
							{	/* Rgc/rgcposix.scm 83 */
								bool_t BgL_test1990z00_2497;

								if ((BgL_minz00_5 == BINT(((long) 0))))
									{	/* Rgc/rgcposix.scm 83 */
										BgL_test1990z00_2497 = (BgL_maxz00_6 == BINT(((long) 1)));
									}
								else
									{	/* Rgc/rgcposix.scm 83 */
										BgL_test1990z00_2497 = ((bool_t) 0);
									}
								if (BgL_test1990z00_2497)
									{	/* Rgc/rgcposix.scm 84 */
										obj_t BgL_arg1268z00_1152;

										BgL_arg1268z00_1152 = MAKE_YOUNG_PAIR(BgL_rgcz00_7, BNIL);
										return
											MAKE_YOUNG_PAIR(BGl_symbol1926z00zz__rgc_posixz00,
											BgL_arg1268z00_1152);
									}
								else
									{	/* Rgc/rgcposix.scm 83 */
										if (CBOOL(BgL_maxz00_6))
											{	/* Rgc/rgcposix.scm 88 */
												obj_t BgL_arg1270z00_1153;

												{	/* Rgc/rgcposix.scm 88 */
													obj_t BgL_arg1271z00_1154;

													{	/* Rgc/rgcposix.scm 88 */
														obj_t BgL_arg1273z00_1155;

														BgL_arg1273z00_1155 =
															MAKE_YOUNG_PAIR(BgL_rgcz00_7, BNIL);
														BgL_arg1271z00_1154 =
															MAKE_YOUNG_PAIR(BgL_maxz00_6,
															BgL_arg1273z00_1155);
													}
													BgL_arg1270z00_1153 =
														MAKE_YOUNG_PAIR(BgL_minz00_5, BgL_arg1271z00_1154);
												}
												return
													MAKE_YOUNG_PAIR(BGl_symbol1928z00zz__rgc_posixz00,
													BgL_arg1270z00_1153);
											}
										else
											{	/* Rgc/rgcposix.scm 86 */
												obj_t BgL_arg1274z00_1156;

												{	/* Rgc/rgcposix.scm 86 */
													obj_t BgL_arg1275z00_1157;

													BgL_arg1275z00_1157 =
														MAKE_YOUNG_PAIR(BgL_rgcz00_7, BNIL);
													BgL_arg1274z00_1156 =
														MAKE_YOUNG_PAIR(BgL_minz00_5, BgL_arg1275z00_1157);
												}
												return
													MAKE_YOUNG_PAIR(BGl_symbol1930z00zz__rgc_posixz00,
													BgL_arg1274z00_1156);
											}
									}
							}
					}
			}
		}

	}



/* make-rgc-or */
	obj_t BGl_makezd2rgczd2orz00zz__rgc_posixz00(obj_t BgL_rgcsz00_8)
	{
		{	/* Rgc/rgcposix.scm 93 */
			if (NULLP(BgL_rgcsz00_8))
				{	/* Rgc/rgcposix.scm 95 */
					return
						BGl_errorz00zz__errorz00(BFALSE, BGl_string1932z00zz__rgc_posixz00,
						BGl_za2errzd2stringza2zd2zz__rgc_posixz00);
				}
			else
				{	/* Rgc/rgcposix.scm 95 */
					if (NULLP(CDR(BgL_rgcsz00_8)))
						{	/* Rgc/rgcposix.scm 97 */
							return CAR(BgL_rgcsz00_8);
						}
					else
						{	/* Rgc/rgcposix.scm 100 */
							obj_t BgL_arg1280z00_1164;

							BgL_arg1280z00_1164 =
								BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(BgL_rgcsz00_8,
								BNIL);
							return MAKE_YOUNG_PAIR(BGl_symbol1933z00zz__rgc_posixz00,
								BgL_arg1280z00_1164);
						}
				}
		}

	}



/* make-rgc-sequence */
	obj_t BGl_makezd2rgczd2sequencez00zz__rgc_posixz00(obj_t BgL_rgcsz00_9)
	{
		{	/* Rgc/rgcposix.scm 105 */
			if (NULLP(BgL_rgcsz00_9))
				{	/* Rgc/rgcposix.scm 107 */
					return
						BGl_errorz00zz__errorz00(BFALSE, BGl_string1932z00zz__rgc_posixz00,
						BGl_za2errzd2stringza2zd2zz__rgc_posixz00);
				}
			else
				{	/* Rgc/rgcposix.scm 107 */
					if (NULLP(CDR(BgL_rgcsz00_9)))
						{	/* Rgc/rgcposix.scm 109 */
							return CAR(BgL_rgcsz00_9);
						}
					else
						{	/* Rgc/rgcposix.scm 112 */
							obj_t BgL_arg1286z00_1169;

							BgL_arg1286z00_1169 =
								BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(BgL_rgcsz00_9,
								BNIL);
							return MAKE_YOUNG_PAIR(BGl_symbol1935z00zz__rgc_posixz00,
								BgL_arg1286z00_1169);
						}
				}
		}

	}



/* parse-posix-exp */
	obj_t BGl_parsezd2posixzd2expz00zz__rgc_posixz00(obj_t BgL_sz00_10,
		long BgL_iz00_11)
	{
		{	/* Rgc/rgcposix.scm 119 */
			{	/* Rgc/rgcposix.scm 120 */
				long BgL_lenz00_1171;

				BgL_lenz00_1171 = STRING_LENGTH(BgL_sz00_10);
				if ((BgL_iz00_11 < BgL_lenz00_1171))
					{
						long BgL_iz00_1175;
						obj_t BgL_branchesz00_1176;

						BgL_iz00_1175 = BgL_iz00_11;
						BgL_branchesz00_1176 = BNIL;
					BgL_zc3z04anonymousza31289ze3z87_1177:
						{	/* Rgc/rgcposix.scm 124 */
							obj_t BgL_branchz00_1178;

							BgL_branchz00_1178 =
								BGl_parsezd2posixzd2branchz00zz__rgc_posixz00(BgL_sz00_10,
								BgL_iz00_1175);
							{	/* Rgc/rgcposix.scm 125 */
								obj_t BgL_iz00_1179;

								{	/* Rgc/rgcposix.scm 126 */
									int BgL_tmpz00_2536;

									BgL_tmpz00_2536 = (int) (((long) 1));
									BgL_iz00_1179 = BGL_MVALUES_VAL(BgL_tmpz00_2536);
								}
								{	/* Rgc/rgcposix.scm 126 */
									obj_t BgL_branchesz00_1180;

									BgL_branchesz00_1180 =
										MAKE_YOUNG_PAIR(BgL_branchz00_1178, BgL_branchesz00_1176);
									{	/* Rgc/rgcposix.scm 127 */
										bool_t BgL_test1998z00_2540;

										if (((long) CINT(BgL_iz00_1179) < BgL_lenz00_1171))
											{	/* Rgc/rgcposix.scm 127 */
												BgL_test1998z00_2540 =
													(((unsigned char) '|') ==
													STRING_REF(BgL_sz00_10, (long) CINT(BgL_iz00_1179)));
											}
										else
											{	/* Rgc/rgcposix.scm 127 */
												BgL_test1998z00_2540 = ((bool_t) 0);
											}
										if (BgL_test1998z00_2540)
											{
												obj_t BgL_branchesz00_2550;
												long BgL_iz00_2547;

												BgL_iz00_2547 =
													((long) CINT(BgL_iz00_1179) + ((long) 1));
												BgL_branchesz00_2550 = BgL_branchesz00_1180;
												BgL_branchesz00_1176 = BgL_branchesz00_2550;
												BgL_iz00_1175 = BgL_iz00_2547;
												goto BgL_zc3z04anonymousza31289ze3z87_1177;
											}
										else
											{	/* Rgc/rgcposix.scm 129 */
												obj_t BgL_val0_1100z00_1185;

												BgL_val0_1100z00_1185 =
													BGl_makezd2rgczd2orz00zz__rgc_posixz00(bgl_reverse
													(BgL_branchesz00_1180));
												{	/* Rgc/rgcposix.scm 129 */
													int BgL_res1738z00_1841;

													{	/* Rgc/rgcposix.scm 129 */
														int BgL_tmpz00_2553;

														BgL_tmpz00_2553 = (int) (((long) 2));
														BgL_res1738z00_1841 =
															BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2553);
													} BgL_res1738z00_1841;
												}
												{	/* Rgc/rgcposix.scm 129 */
													int BgL_tmpz00_2556;

													BgL_tmpz00_2556 = (int) (((long) 1));
													BGL_MVALUES_VAL_SET(BgL_tmpz00_2556, BgL_iz00_1179);
												}
												return BgL_val0_1100z00_1185;
											}
									}
								}
							}
						}
					}
				else
					{	/* Rgc/rgcposix.scm 121 */
						{	/* Rgc/rgcposix.scm 130 */
							int BgL_res1739z00_1842;

							{	/* Rgc/rgcposix.scm 130 */
								int BgL_tmpz00_2559;

								BgL_tmpz00_2559 = (int) (((long) 2));
								BgL_res1739z00_1842 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2559);
							} BgL_res1739z00_1842;
						}
						{	/* Rgc/rgcposix.scm 130 */
							obj_t BgL_auxz00_2564;
							int BgL_tmpz00_2562;

							BgL_auxz00_2564 = BINT(BgL_iz00_11);
							BgL_tmpz00_2562 = (int) (((long) 1));
							BGL_MVALUES_VAL_SET(BgL_tmpz00_2562, BgL_auxz00_2564);
						}
						return BNIL;
					}
			}
		}

	}



/* parse-posix-branch */
	obj_t BGl_parsezd2posixzd2branchz00zz__rgc_posixz00(obj_t BgL_sz00_12,
		long BgL_iz00_13)
	{
		{	/* Rgc/rgcposix.scm 138 */
			{	/* Rgc/rgcposix.scm 139 */
				long BgL_lenz00_1193;

				BgL_lenz00_1193 = STRING_LENGTH(BgL_sz00_12);
				{
					obj_t BgL_iz00_1196;
					obj_t BgL_piecesz00_1197;

					BgL_iz00_1196 = BINT(BgL_iz00_13);
					BgL_piecesz00_1197 = BNIL;
				BgL_zc3z04anonymousza31298ze3z87_1198:
					if (((long) CINT(BgL_iz00_1196) < BgL_lenz00_1193))
						{	/* Rgc/rgcposix.scm 143 */
							obj_t BgL_piecez00_1200;

							BgL_piecez00_1200 =
								BGl_parsezd2posixzd2piecez00zz__rgc_posixz00(BgL_sz00_12,
								BgL_iz00_1196);
							{	/* Rgc/rgcposix.scm 144 */
								obj_t BgL_iz00_1201;

								{	/* Rgc/rgcposix.scm 145 */
									int BgL_tmpz00_2572;

									BgL_tmpz00_2572 = (int) (((long) 1));
									BgL_iz00_1201 = BGL_MVALUES_VAL(BgL_tmpz00_2572);
								}
								{	/* Rgc/rgcposix.scm 145 */
									obj_t BgL_piecesz00_1202;

									BgL_piecesz00_1202 =
										MAKE_YOUNG_PAIR(BgL_piecez00_1200, BgL_piecesz00_1197);
									if (((long) CINT(BgL_iz00_1201) < BgL_lenz00_1193))
										{	/* Rgc/rgcposix.scm 147 */
											unsigned char BgL_aux1042z00_1205;

											BgL_aux1042z00_1205 =
												STRING_REF(BgL_sz00_12, (long) CINT(BgL_iz00_1201));
											switch (BgL_aux1042z00_1205)
												{
												case ((unsigned char) ')'):
												case ((unsigned char) '|'):

													{	/* Rgc/rgcposix.scm 149 */
														obj_t BgL_val0_1104z00_1207;

														BgL_val0_1104z00_1207 =
															BGl_makezd2rgczd2sequencez00zz__rgc_posixz00
															(bgl_reverse(BgL_piecesz00_1202));
														{	/* Rgc/rgcposix.scm 149 */
															int BgL_res1744z00_1854;

															{	/* Rgc/rgcposix.scm 149 */
																int BgL_tmpz00_2583;

																BgL_tmpz00_2583 = (int) (((long) 2));
																BgL_res1744z00_1854 =
																	BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2583);
															} BgL_res1744z00_1854;
														}
														{	/* Rgc/rgcposix.scm 149 */
															int BgL_tmpz00_2586;

															BgL_tmpz00_2586 = (int) (((long) 1));
															BGL_MVALUES_VAL_SET(BgL_tmpz00_2586,
																BgL_iz00_1201);
														}
														return BgL_val0_1104z00_1207;
													}
													break;
												default:
													{
														obj_t BgL_piecesz00_2590;
														obj_t BgL_iz00_2589;

														BgL_iz00_2589 = BgL_iz00_1201;
														BgL_piecesz00_2590 = BgL_piecesz00_1202;
														BgL_piecesz00_1197 = BgL_piecesz00_2590;
														BgL_iz00_1196 = BgL_iz00_2589;
														goto BgL_zc3z04anonymousza31298ze3z87_1198;
													}
												}
										}
									else
										{	/* Rgc/rgcposix.scm 152 */
											obj_t BgL_val0_1106z00_1210;

											BgL_val0_1106z00_1210 =
												BGl_makezd2rgczd2sequencez00zz__rgc_posixz00(bgl_reverse
												(BgL_piecesz00_1202));
											{	/* Rgc/rgcposix.scm 152 */
												int BgL_res1745z00_1855;

												{	/* Rgc/rgcposix.scm 152 */
													int BgL_tmpz00_2594;

													BgL_tmpz00_2594 = (int) (((long) 2));
													BgL_res1745z00_1855 =
														BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2594);
												} BgL_res1745z00_1855;
											}
											{	/* Rgc/rgcposix.scm 152 */
												int BgL_tmpz00_2597;

												BgL_tmpz00_2597 = (int) (((long) 1));
												BGL_MVALUES_VAL_SET(BgL_tmpz00_2597, BgL_iz00_1201);
											}
											return BgL_val0_1106z00_1210;
										}
								}
							}
						}
					else
						{	/* Rgc/rgcposix.scm 153 */
							obj_t BgL_val0_1108z00_1213;

							BgL_val0_1108z00_1213 =
								BGl_makezd2rgczd2sequencez00zz__rgc_posixz00(bgl_reverse
								(BgL_piecesz00_1197));
							{	/* Rgc/rgcposix.scm 153 */
								int BgL_res1746z00_1856;

								{	/* Rgc/rgcposix.scm 153 */
									int BgL_tmpz00_2602;

									BgL_tmpz00_2602 = (int) (((long) 2));
									BgL_res1746z00_1856 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2602);
								} BgL_res1746z00_1856;
							}
							{	/* Rgc/rgcposix.scm 153 */
								int BgL_tmpz00_2605;

								BgL_tmpz00_2605 = (int) (((long) 1));
								BGL_MVALUES_VAL_SET(BgL_tmpz00_2605, BgL_iz00_1196);
							}
							return BgL_val0_1108z00_1213;
						}
				}
			}
		}

	}



/* parse-posix-piece */
	obj_t BGl_parsezd2posixzd2piecez00zz__rgc_posixz00(obj_t BgL_sz00_14,
		obj_t BgL_iz00_15)
	{
		{	/* Rgc/rgcposix.scm 161 */
			{	/* Rgc/rgcposix.scm 162 */
				long BgL_lenz00_1217;

				BgL_lenz00_1217 = STRING_LENGTH(BgL_sz00_14);
				{	/* Rgc/rgcposix.scm 163 */
					obj_t BgL_atomz00_1218;

					BgL_atomz00_1218 =
						BGl_parsezd2posixzd2atomz00zz__rgc_posixz00(BgL_sz00_14,
						BgL_iz00_15);
					{	/* Rgc/rgcposix.scm 164 */
						obj_t BgL_iz00_1219;

						{	/* Rgc/rgcposix.scm 165 */
							int BgL_tmpz00_2611;

							BgL_tmpz00_2611 = (int) (((long) 1));
							BgL_iz00_1219 = BGL_MVALUES_VAL(BgL_tmpz00_2611);
						}
						if (((long) CINT(BgL_iz00_1219) < BgL_lenz00_1217))
							{

								{	/* Rgc/rgcposix.scm 166 */
									unsigned char BgL_aux1044z00_1222;

									BgL_aux1044z00_1222 =
										STRING_REF(BgL_sz00_14, (long) CINT(BgL_iz00_1219));
									switch (BgL_aux1044z00_1222)
										{
										case ((unsigned char) '*'):
										case ((unsigned char) '+'):
										case ((unsigned char) '?'):

											{	/* Rgc/rgcposix.scm 168 */
												obj_t BgL_fromz00_1224;

												switch (BgL_aux1044z00_1222)
													{
													case ((unsigned char) '*'):

														{	/* Rgc/rgcposix.scm 170 */
															int BgL_res1752z00_1869;

															{	/* Rgc/rgcposix.scm 170 */
																int BgL_tmpz00_2619;

																BgL_tmpz00_2619 = (int) (((long) 2));
																BgL_res1752z00_1869 =
																	BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2619);
															} BgL_res1752z00_1869;
														}
														{	/* Rgc/rgcposix.scm 170 */
															int BgL_tmpz00_2622;

															BgL_tmpz00_2622 = (int) (((long) 1));
															BGL_MVALUES_VAL_SET(BgL_tmpz00_2622, BFALSE);
														}
														BgL_fromz00_1224 = BINT(((long) 0));
														break;
													case ((unsigned char) '+'):

														{	/* Rgc/rgcposix.scm 171 */
															int BgL_res1753z00_1870;

															{	/* Rgc/rgcposix.scm 171 */
																int BgL_tmpz00_2626;

																BgL_tmpz00_2626 = (int) (((long) 2));
																BgL_res1753z00_1870 =
																	BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2626);
															} BgL_res1753z00_1870;
														}
														{	/* Rgc/rgcposix.scm 171 */
															int BgL_tmpz00_2629;

															BgL_tmpz00_2629 = (int) (((long) 1));
															BGL_MVALUES_VAL_SET(BgL_tmpz00_2629, BFALSE);
														}
														BgL_fromz00_1224 = BINT(((long) 1));
														break;
													case ((unsigned char) '?'):

														{	/* Rgc/rgcposix.scm 172 */
															int BgL_res1754z00_1871;

															{	/* Rgc/rgcposix.scm 172 */
																int BgL_tmpz00_2633;

																BgL_tmpz00_2633 = (int) (((long) 2));
																BgL_res1754z00_1871 =
																	BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2633);
															} BgL_res1754z00_1871;
														}
														{	/* Rgc/rgcposix.scm 172 */
															obj_t BgL_auxz00_2638;
															int BgL_tmpz00_2636;

															BgL_auxz00_2638 = BINT(((long) 1));
															BgL_tmpz00_2636 = (int) (((long) 1));
															BGL_MVALUES_VAL_SET(BgL_tmpz00_2636,
																BgL_auxz00_2638);
														}
														BgL_fromz00_1224 = BINT(((long) 0));
														break;
													default:
														BgL_fromz00_1224 = BUNSPEC;
													}
												{	/* Rgc/rgcposix.scm 169 */
													obj_t BgL_toz00_1225;

													{	/* Rgc/rgcposix.scm 173 */
														int BgL_tmpz00_2643;

														BgL_tmpz00_2643 = (int) (((long) 1));
														BgL_toz00_1225 = BGL_MVALUES_VAL(BgL_tmpz00_2643);
													}
													{	/* Rgc/rgcposix.scm 173 */
														obj_t BgL_val0_1118z00_1226;
														long BgL_val1_1119z00_1227;

														BgL_val0_1118z00_1226 =
															BGl_makezd2rgczd2repeatz00zz__rgc_posixz00
															(BgL_fromz00_1224, BgL_toz00_1225,
															BgL_atomz00_1218);
														BgL_val1_1119z00_1227 =
															((long) CINT(BgL_iz00_1219) + ((long) 1));
														{	/* Rgc/rgcposix.scm 173 */
															int BgL_res1756z00_1874;

															{	/* Rgc/rgcposix.scm 173 */
																int BgL_tmpz00_2649;

																BgL_tmpz00_2649 = (int) (((long) 2));
																BgL_res1756z00_1874 =
																	BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2649);
															} BgL_res1756z00_1874;
														}
														{	/* Rgc/rgcposix.scm 173 */
															obj_t BgL_auxz00_2654;
															int BgL_tmpz00_2652;

															BgL_auxz00_2654 = BINT(BgL_val1_1119z00_1227);
															BgL_tmpz00_2652 = (int) (((long) 1));
															BGL_MVALUES_VAL_SET(BgL_tmpz00_2652,
																BgL_auxz00_2654);
														}
														return BgL_val0_1118z00_1226;
													}
												}
											}
											break;
										case ((unsigned char) '{'):

											{	/* Rgc/rgcposix.scm 175 */
												obj_t BgL_fromz00_1237;

												{	/* Rgc/rgcposix.scm 176 */
													obj_t BgL_arg1308z00_1242;

													if (INTEGERP(BgL_iz00_1219))
														{	/* Rgc/rgcposix.scm 176 */
															BgL_arg1308z00_1242 =
																ADDFX(BgL_iz00_1219, BINT(((long) 1)));
														}
													else
														{	/* Rgc/rgcposix.scm 176 */
															BgL_arg1308z00_1242 =
																BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1219,
																BINT(((long) 1)));
														}
													BgL_fromz00_1237 =
														BGl_parsezd2posixzd2bracesz00zz__rgc_posixz00
														(BgL_sz00_14, BgL_arg1308z00_1242);
												}
												{	/* Rgc/rgcposix.scm 176 */
													obj_t BgL_toz00_1238;
													obj_t BgL_iz00_1239;

													{	/* Rgc/rgcposix.scm 177 */
														int BgL_tmpz00_2664;

														BgL_tmpz00_2664 = (int) (((long) 1));
														BgL_toz00_1238 = BGL_MVALUES_VAL(BgL_tmpz00_2664);
													}
													{	/* Rgc/rgcposix.scm 177 */
														int BgL_tmpz00_2667;

														BgL_tmpz00_2667 = (int) (((long) 2));
														BgL_iz00_1239 = BGL_MVALUES_VAL(BgL_tmpz00_2667);
													}
													{	/* Rgc/rgcposix.scm 177 */
														obj_t BgL_val0_1120z00_1240;

														BgL_val0_1120z00_1240 =
															BGl_makezd2rgczd2repeatz00zz__rgc_posixz00
															(BgL_fromz00_1237, BgL_toz00_1238,
															BgL_atomz00_1218);
														{	/* Rgc/rgcposix.scm 177 */
															int BgL_res1759z00_1878;

															{	/* Rgc/rgcposix.scm 177 */
																int BgL_tmpz00_2671;

																BgL_tmpz00_2671 = (int) (((long) 2));
																BgL_res1759z00_1878 =
																	BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2671);
															} BgL_res1759z00_1878;
														}
														{	/* Rgc/rgcposix.scm 177 */
															int BgL_tmpz00_2674;

															BgL_tmpz00_2674 = (int) (((long) 1));
															BGL_MVALUES_VAL_SET(BgL_tmpz00_2674,
																BgL_iz00_1239);
														}
														return BgL_val0_1120z00_1240;
													}
												}
											}
											break;
										default:
											{	/* Rgc/rgcposix.scm 178 */
												int BgL_res1749z00_1862;

												{	/* Rgc/rgcposix.scm 178 */
													int BgL_tmpz00_2677;

													BgL_tmpz00_2677 = (int) (((long) 2));
													BgL_res1749z00_1862 =
														BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2677);
												} BgL_res1749z00_1862;
											}
											{	/* Rgc/rgcposix.scm 178 */
												int BgL_tmpz00_2680;

												BgL_tmpz00_2680 = (int) (((long) 1));
												BGL_MVALUES_VAL_SET(BgL_tmpz00_2680, BgL_iz00_1219);
											}
											return BgL_atomz00_1218;
										}
								}
							}
						else
							{	/* Rgc/rgcposix.scm 165 */
								{	/* Rgc/rgcposix.scm 179 */
									int BgL_res1760z00_1879;

									{	/* Rgc/rgcposix.scm 179 */
										int BgL_tmpz00_2684;

										BgL_tmpz00_2684 = (int) (((long) 2));
										BgL_res1760z00_1879 =
											BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2684);
									} BgL_res1760z00_1879;
								}
								{	/* Rgc/rgcposix.scm 179 */
									int BgL_tmpz00_2687;

									BgL_tmpz00_2687 = (int) (((long) 1));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_2687, BgL_iz00_1219);
								}
								return BgL_atomz00_1218;
							}
					}
				}
			}
		}

	}



/* parse-posix-atom */
	obj_t BGl_parsezd2posixzd2atomz00zz__rgc_posixz00(obj_t BgL_sz00_16,
		obj_t BgL_iz00_17)
	{
		{	/* Rgc/rgcposix.scm 187 */
			{	/* Rgc/rgcposix.scm 188 */
				long BgL_lenz00_1248;

				BgL_lenz00_1248 = STRING_LENGTH(BgL_sz00_16);
				if (((long) CINT(BgL_iz00_17) < BgL_lenz00_1248))
					{	/* Rgc/rgcposix.scm 190 */
						unsigned char BgL_cz00_1251;

						BgL_cz00_1251 = STRING_REF(BgL_sz00_16, (long) CINT(BgL_iz00_17));
						{

							switch (BgL_cz00_1251)
								{
								case ((unsigned char) '^'):

									return
										BGl_errorz00zz__errorz00(BFALSE,
										BGl_string1937z00zz__rgc_posixz00,
										BGl_za2errzd2stringza2zd2zz__rgc_posixz00);
									break;
								case ((unsigned char) '$'):

									return
										BGl_errorz00zz__errorz00(BFALSE,
										BGl_string1938z00zz__rgc_posixz00,
										BGl_za2errzd2stringza2zd2zz__rgc_posixz00);
									break;
								case ((unsigned char) '.'):

									{	/* Rgc/rgcposix.scm 194 */
										obj_t BgL_val0_1126z00_1255;
										long BgL_val1_1127z00_1256;

										BgL_val0_1126z00_1255 = BGl_symbol1939z00zz__rgc_posixz00;
										BgL_val1_1127z00_1256 =
											((long) CINT(BgL_iz00_17) + ((long) 1));
										{	/* Rgc/rgcposix.scm 194 */
											int BgL_res1769z00_1896;

											{	/* Rgc/rgcposix.scm 194 */
												int BgL_tmpz00_2700;

												BgL_tmpz00_2700 = (int) (((long) 2));
												BgL_res1769z00_1896 =
													BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2700);
											} BgL_res1769z00_1896;
										}
										{	/* Rgc/rgcposix.scm 194 */
											obj_t BgL_auxz00_2705;
											int BgL_tmpz00_2703;

											BgL_auxz00_2705 = BINT(BgL_val1_1127z00_1256);
											BgL_tmpz00_2703 = (int) (((long) 1));
											BGL_MVALUES_VAL_SET(BgL_tmpz00_2703, BgL_auxz00_2705);
										}
										return BgL_val0_1126z00_1255;
									}
									break;
								case ((unsigned char) '['):

									return
										BGl_parsezd2posixzd2bracketz00zz__rgc_posixz00(BgL_sz00_16,
										((long) CINT(BgL_iz00_17) + ((long) 1)));
									break;
								case ((unsigned char) '('):

									{	/* Rgc/rgcposix.scm 196 */
										obj_t BgL_rez00_1258;

										BgL_rez00_1258 =
											BGl_parsezd2posixzd2expz00zz__rgc_posixz00(BgL_sz00_16,
											((long) CINT(BgL_iz00_17) + ((long) 1)));
										{	/* Rgc/rgcposix.scm 197 */
											obj_t BgL_iz00_1259;

											{	/* Rgc/rgcposix.scm 198 */
												int BgL_tmpz00_2714;

												BgL_tmpz00_2714 = (int) (((long) 1));
												BgL_iz00_1259 = BGL_MVALUES_VAL(BgL_tmpz00_2714);
											}
											{	/* Rgc/rgcposix.scm 198 */
												bool_t BgL_test2005z00_2717;

												if (((long) CINT(BgL_iz00_1259) < BgL_lenz00_1248))
													{	/* Rgc/rgcposix.scm 198 */
														BgL_test2005z00_2717 =
															(((unsigned char) ')') ==
															STRING_REF(BgL_sz00_16,
																(long) CINT(BgL_iz00_1259)));
													}
												else
													{	/* Rgc/rgcposix.scm 198 */
														BgL_test2005z00_2717 = ((bool_t) 0);
													}
												if (BgL_test2005z00_2717)
													{	/* Rgc/rgcposix.scm 199 */
														obj_t BgL_val0_1128z00_1263;
														long BgL_val1_1129z00_1264;

														{	/* Rgc/rgcposix.scm 199 */
															obj_t BgL_arg1317z00_1265;

															BgL_arg1317z00_1265 =
																MAKE_YOUNG_PAIR(BgL_rez00_1258, BNIL);
															BgL_val0_1128z00_1263 =
																MAKE_YOUNG_PAIR
																(BGl_symbol1941z00zz__rgc_posixz00,
																BgL_arg1317z00_1265);
														}
														BgL_val1_1129z00_1264 =
															((long) CINT(BgL_iz00_1259) + ((long) 1));
														{	/* Rgc/rgcposix.scm 199 */
															int BgL_res1776z00_1912;

															{	/* Rgc/rgcposix.scm 199 */
																int BgL_tmpz00_2728;

																BgL_tmpz00_2728 = (int) (((long) 2));
																BgL_res1776z00_1912 =
																	BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2728);
															} BgL_res1776z00_1912;
														}
														{	/* Rgc/rgcposix.scm 199 */
															obj_t BgL_auxz00_2733;
															int BgL_tmpz00_2731;

															BgL_auxz00_2733 = BINT(BgL_val1_1129z00_1264);
															BgL_tmpz00_2731 = (int) (((long) 1));
															BGL_MVALUES_VAL_SET(BgL_tmpz00_2731,
																BgL_auxz00_2733);
														}
														return BgL_val0_1128z00_1263;
													}
												else
													{	/* Rgc/rgcposix.scm 198 */
														return
															BGl_errorz00zz__errorz00(BFALSE,
															BGl_string1943z00zz__rgc_posixz00,
															BGl_za2errzd2stringza2zd2zz__rgc_posixz00);
													}
											}
										}
									}
									break;
								case ((unsigned char) '\\'):

									{	/* Rgc/rgcposix.scm 201 */
										long BgL_iz00_1269;

										BgL_iz00_1269 = ((long) CINT(BgL_iz00_17) + ((long) 1));
										if ((BgL_iz00_1269 < BgL_lenz00_1248))
											{	/* Rgc/rgcposix.scm 203 */
												obj_t BgL_val0_1130z00_1271;
												long BgL_val1_1131z00_1272;

												{	/* Rgc/rgcposix.scm 203 */
													unsigned char BgL_arg1322z00_1273;

													BgL_arg1322z00_1273 =
														STRING_REF(BgL_sz00_16, BgL_iz00_1269);
													{	/* Rgc/rgcposix.scm 203 */
														obj_t BgL_list1323z00_1274;

														BgL_list1323z00_1274 =
															MAKE_YOUNG_PAIR(BCHAR(BgL_arg1322z00_1273), BNIL);
														BgL_val0_1130z00_1271 =
															BGl_listzd2ze3stringz31zz__r4_strings_6_7z00
															(BgL_list1323z00_1274);
												}}
												BgL_val1_1131z00_1272 = (BgL_iz00_1269 + ((long) 1));
												{	/* Rgc/rgcposix.scm 203 */
													int BgL_res1782z00_1924;

													{	/* Rgc/rgcposix.scm 203 */
														int BgL_tmpz00_2746;

														BgL_tmpz00_2746 = (int) (((long) 2));
														BgL_res1782z00_1924 =
															BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2746);
													} BgL_res1782z00_1924;
												}
												{	/* Rgc/rgcposix.scm 203 */
													obj_t BgL_auxz00_2751;
													int BgL_tmpz00_2749;

													BgL_auxz00_2751 = BINT(BgL_val1_1131z00_1272);
													BgL_tmpz00_2749 = (int) (((long) 1));
													BGL_MVALUES_VAL_SET(BgL_tmpz00_2749, BgL_auxz00_2751);
												}
												return BgL_val0_1130z00_1271;
											}
										else
											{	/* Rgc/rgcposix.scm 202 */
												return
													BGl_errorz00zz__errorz00(BFALSE,
													BGl_string1944z00zz__rgc_posixz00,
													BGl_za2errzd2stringza2zd2zz__rgc_posixz00);
											}
									}
									break;
								case ((unsigned char) ')'):
								case ((unsigned char) '|'):
								case ((unsigned char) '*'):
								case ((unsigned char) '+'):
								case ((unsigned char) '?'):
								case ((unsigned char) '{'):

									{	/* Rgc/rgcposix.scm 206 */
										int BgL_res1783z00_1925;

										{	/* Rgc/rgcposix.scm 206 */
											int BgL_tmpz00_2755;

											BgL_tmpz00_2755 = (int) (((long) 2));
											BgL_res1783z00_1925 =
												BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2755);
										} BgL_res1783z00_1925;
									}
									{	/* Rgc/rgcposix.scm 206 */
										int BgL_tmpz00_2758;

										BgL_tmpz00_2758 = (int) (((long) 1));
										BGL_MVALUES_VAL_SET(BgL_tmpz00_2758, BgL_iz00_17);
									}
									return BNIL;
									break;
								default:
									{	/* Rgc/rgcposix.scm 207 */
										obj_t BgL_val0_1124z00_1277;
										long BgL_val1_1125z00_1278;

										{	/* Rgc/rgcposix.scm 207 */
											obj_t BgL_list1324z00_1279;

											BgL_list1324z00_1279 =
												MAKE_YOUNG_PAIR(BCHAR(BgL_cz00_1251), BNIL);
											BgL_val0_1124z00_1277 =
												BGl_listzd2ze3stringz31zz__r4_strings_6_7z00
												(BgL_list1324z00_1279);
										}
										BgL_val1_1125z00_1278 =
											((long) CINT(BgL_iz00_17) + ((long) 1));
										{	/* Rgc/rgcposix.scm 207 */
											int BgL_res1767z00_1893;

											{	/* Rgc/rgcposix.scm 207 */
												int BgL_tmpz00_2766;

												BgL_tmpz00_2766 = (int) (((long) 2));
												BgL_res1767z00_1893 =
													BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2766);
											} BgL_res1767z00_1893;
										}
										{	/* Rgc/rgcposix.scm 207 */
											obj_t BgL_auxz00_2771;
											int BgL_tmpz00_2769;

											BgL_auxz00_2771 = BINT(BgL_val1_1125z00_1278);
											BgL_tmpz00_2769 = (int) (((long) 1));
											BGL_MVALUES_VAL_SET(BgL_tmpz00_2769, BgL_auxz00_2771);
										}
										return BgL_val0_1124z00_1277;
									}
								}
						}
					}
				else
					{	/* Rgc/rgcposix.scm 189 */
						{	/* Rgc/rgcposix.scm 208 */
							int BgL_res1784z00_1926;

							{	/* Rgc/rgcposix.scm 208 */
								int BgL_tmpz00_2775;

								BgL_tmpz00_2775 = (int) (((long) 2));
								BgL_res1784z00_1926 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2775);
							} BgL_res1784z00_1926;
						}
						{	/* Rgc/rgcposix.scm 208 */
							int BgL_tmpz00_2778;

							BgL_tmpz00_2778 = (int) (((long) 1));
							BGL_MVALUES_VAL_SET(BgL_tmpz00_2778, BgL_iz00_17);
						}
						return BNIL;
					}
			}
		}

	}



/* parse-posix-bracket */
	obj_t BGl_parsezd2posixzd2bracketz00zz__rgc_posixz00(obj_t BgL_sz00_18,
		long BgL_iz00_19)
	{
		{	/* Rgc/rgcposix.scm 216 */
			{	/* Rgc/rgcposix.scm 217 */
				long BgL_lenz00_1283;

				BgL_lenz00_1283 = STRING_LENGTH(BgL_sz00_18);
				if ((BgL_iz00_19 < BgL_lenz00_1283))
					{	/* Rgc/rgcposix.scm 219 */
						bool_t BgL_negatezf3zf3_1285;

						{	/* Rgc/rgcposix.scm 220 */
							unsigned char BgL_cz00_1351;

							BgL_cz00_1351 = STRING_REF(BgL_sz00_18, BgL_iz00_19);
							if ((BgL_cz00_1351 == ((unsigned char) '^')))
								{	/* Rgc/rgcposix.scm 222 */
									long BgL_val1_1137z00_1354;

									BgL_val1_1137z00_1354 = (BgL_iz00_19 + ((long) 1));
									{	/* Rgc/rgcposix.scm 222 */
										int BgL_res1790z00_1940;

										{	/* Rgc/rgcposix.scm 222 */
											int BgL_tmpz00_2788;

											BgL_tmpz00_2788 = (int) (((long) 2));
											BgL_res1790z00_1940 =
												BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2788);
										} BgL_res1790z00_1940;
									}
									{	/* Rgc/rgcposix.scm 222 */
										obj_t BgL_auxz00_2793;
										int BgL_tmpz00_2791;

										BgL_auxz00_2793 = BINT(BgL_val1_1137z00_1354);
										BgL_tmpz00_2791 = (int) (((long) 1));
										BGL_MVALUES_VAL_SET(BgL_tmpz00_2791, BgL_auxz00_2793);
									}
									BgL_negatezf3zf3_1285 = ((bool_t) 1);
								}
							else
								{	/* Rgc/rgcposix.scm 221 */
									{	/* Rgc/rgcposix.scm 223 */
										int BgL_res1791z00_1941;

										{	/* Rgc/rgcposix.scm 223 */
											int BgL_tmpz00_2796;

											BgL_tmpz00_2796 = (int) (((long) 2));
											BgL_res1791z00_1941 =
												BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2796);
										} BgL_res1791z00_1941;
									}
									{	/* Rgc/rgcposix.scm 223 */
										obj_t BgL_auxz00_2801;
										int BgL_tmpz00_2799;

										BgL_auxz00_2801 = BINT(BgL_iz00_19);
										BgL_tmpz00_2799 = (int) (((long) 1));
										BGL_MVALUES_VAL_SET(BgL_tmpz00_2799, BgL_auxz00_2801);
									}
									BgL_negatezf3zf3_1285 = ((bool_t) 0);
						}}
						{	/* Rgc/rgcposix.scm 220 */
							obj_t BgL_i0z00_1286;

							{	/* Rgc/rgcposix.scm 224 */
								int BgL_tmpz00_2804;

								BgL_tmpz00_2804 = (int) (((long) 1));
								BgL_i0z00_1286 = BGL_MVALUES_VAL(BgL_tmpz00_2804);
							}
							{
								obj_t BgL_iz00_1289;
								obj_t BgL_csetz00_1290;

								BgL_iz00_1289 = BgL_i0z00_1286;
								BgL_csetz00_1290 = BNIL;
							BgL_zc3z04anonymousza31327ze3z87_1291:
								if (((long) CINT(BgL_iz00_1289) < BgL_lenz00_1283))
									{	/* Rgc/rgcposix.scm 227 */
										unsigned char BgL_cz00_1293;

										BgL_cz00_1293 =
											STRING_REF(BgL_sz00_18, (long) CINT(BgL_iz00_1289));
										{

											switch (BgL_cz00_1293)
												{
												case ((unsigned char) '['):

													{	/* Rgc/rgcposix.scm 231 */
														long BgL_i1z00_1297;

														BgL_i1z00_1297 =
															((long) CINT(BgL_iz00_1289) + ((long) 1));
														{	/* Rgc/rgcposix.scm 233 */
															bool_t BgL_test2011z00_2814;

															if ((BgL_i1z00_1297 < BgL_lenz00_1283))
																{	/* Rgc/rgcposix.scm 233 */
																	BgL_test2011z00_2814 =
																		CBOOL
																		(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																		(BCHAR(STRING_REF(BgL_sz00_18,
																					BgL_i1z00_1297)),
																			BGl_list1945z00zz__rgc_posixz00));
																}
															else
																{	/* Rgc/rgcposix.scm 233 */
																	BgL_test2011z00_2814 = ((bool_t) 0);
																}
															if (BgL_test2011z00_2814)
																{	/* Rgc/rgcposix.scm 233 */
																	return
																		BGl_errorz00zz__errorz00(BFALSE,
																		BGl_string1946z00zz__rgc_posixz00,
																		BGl_za2errzd2stringza2zd2zz__rgc_posixz00);
																}
															else
																{	/* Rgc/rgcposix.scm 238 */
																	obj_t BgL_arg1333z00_1301;

																	BgL_arg1333z00_1301 =
																		MAKE_YOUNG_PAIR(BCHAR(((unsigned char)
																				'[')), BgL_csetz00_1290);
																	{
																		obj_t BgL_csetz00_2826;
																		obj_t BgL_iz00_2824;

																		BgL_iz00_2824 = BINT(BgL_i1z00_1297);
																		BgL_csetz00_2826 = BgL_arg1333z00_1301;
																		BgL_csetz00_1290 = BgL_csetz00_2826;
																		BgL_iz00_1289 = BgL_iz00_2824;
																		goto BgL_zc3z04anonymousza31327ze3z87_1291;
																	}
																}
														}
													}
													break;
												case ((unsigned char) ']'):

													if (
														((long) CINT(BgL_iz00_1289) ==
															(long) CINT(BgL_i0z00_1286)))
														{	/* Rgc/rgcposix.scm 242 */
															long BgL_arg1337z00_1305;
															obj_t BgL_arg1338z00_1306;

															BgL_arg1337z00_1305 =
																((long) CINT(BgL_iz00_1289) + ((long) 1));
															BgL_arg1338z00_1306 =
																MAKE_YOUNG_PAIR(BCHAR(((unsigned char) ']')),
																BgL_csetz00_1290);
															{
																obj_t BgL_csetz00_2837;
																obj_t BgL_iz00_2835;

																BgL_iz00_2835 = BINT(BgL_arg1337z00_1305);
																BgL_csetz00_2837 = BgL_arg1338z00_1306;
																BgL_csetz00_1290 = BgL_csetz00_2837;
																BgL_iz00_1289 = BgL_iz00_2835;
																goto BgL_zc3z04anonymousza31327ze3z87_1291;
															}
														}
													else
														{	/* Rgc/rgcposix.scm 241 */
															if (BgL_negatezf3zf3_1285)
																{	/* Rgc/rgcposix.scm 246 */
																	obj_t BgL_val0_1140z00_1307;
																	long BgL_val1_1141z00_1308;

																	{	/* Rgc/rgcposix.scm 246 */
																		obj_t BgL_arg1339z00_1309;

																		BgL_arg1339z00_1309 =
																			BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																			(BgL_csetz00_1290, BNIL);
																		BgL_val0_1140z00_1307 =
																			MAKE_YOUNG_PAIR
																			(BGl_symbol1947z00zz__rgc_posixz00,
																			BgL_arg1339z00_1309);
																	}
																	BgL_val1_1141z00_1308 =
																		((long) CINT(BgL_iz00_1289) + ((long) 1));
																	{	/* Rgc/rgcposix.scm 246 */
																		int BgL_res1821z00_2035;

																		{	/* Rgc/rgcposix.scm 246 */
																			int BgL_tmpz00_2843;

																			BgL_tmpz00_2843 = (int) (((long) 2));
																			BgL_res1821z00_2035 =
																				BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2843);
																		} BgL_res1821z00_2035;
																	}
																	{	/* Rgc/rgcposix.scm 246 */
																		obj_t BgL_auxz00_2848;
																		int BgL_tmpz00_2846;

																		BgL_auxz00_2848 =
																			BINT(BgL_val1_1141z00_1308);
																		BgL_tmpz00_2846 = (int) (((long) 1));
																		BGL_MVALUES_VAL_SET(BgL_tmpz00_2846,
																			BgL_auxz00_2848);
																	}
																	return BgL_val0_1140z00_1307;
																}
															else
																{	/* Rgc/rgcposix.scm 247 */
																	obj_t BgL_val0_1142z00_1310;
																	long BgL_val1_1143z00_1311;

																	{	/* Rgc/rgcposix.scm 247 */
																		obj_t BgL_arg1340z00_1312;

																		BgL_arg1340z00_1312 =
																			BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																			(BgL_csetz00_1290, BNIL);
																		BgL_val0_1142z00_1310 =
																			MAKE_YOUNG_PAIR
																			(BGl_symbol1949z00zz__rgc_posixz00,
																			BgL_arg1340z00_1312);
																	}
																	BgL_val1_1143z00_1311 =
																		((long) CINT(BgL_iz00_1289) + ((long) 1));
																	{	/* Rgc/rgcposix.scm 247 */
																		int BgL_res1823z00_2038;

																		{	/* Rgc/rgcposix.scm 247 */
																			int BgL_tmpz00_2855;

																			BgL_tmpz00_2855 = (int) (((long) 2));
																			BgL_res1823z00_2038 =
																				BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2855);
																		} BgL_res1823z00_2038;
																	}
																	{	/* Rgc/rgcposix.scm 247 */
																		obj_t BgL_auxz00_2860;
																		int BgL_tmpz00_2858;

																		BgL_auxz00_2860 =
																			BINT(BgL_val1_1143z00_1311);
																		BgL_tmpz00_2858 = (int) (((long) 1));
																		BGL_MVALUES_VAL_SET(BgL_tmpz00_2858,
																			BgL_auxz00_2860);
																	}
																	return BgL_val0_1142z00_1310;
																}
														}
													break;
												case ((unsigned char) '-'):

													{	/* Rgc/rgcposix.scm 250 */
														bool_t BgL_test2015z00_2863;

														if (
															((long) CINT(BgL_iz00_1289) ==
																(long) CINT(BgL_i0z00_1286)))
															{	/* Rgc/rgcposix.scm 250 */
																BgL_test2015z00_2863 = ((bool_t) 1);
															}
														else
															{	/* Rgc/rgcposix.scm 250 */
																if (
																	(((long) CINT(BgL_iz00_1289) + ((long) 1)) <
																		BgL_lenz00_1283))
																	{	/* Rgc/rgcposix.scm 251 */
																		BgL_test2015z00_2863 =
																			(((unsigned char) ']') ==
																			STRING_REF(BgL_sz00_18,
																				((long) CINT(BgL_iz00_1289) +
																					((long) 1))));
																	}
																else
																	{	/* Rgc/rgcposix.scm 251 */
																		BgL_test2015z00_2863 = ((bool_t) 0);
																	}
															}
														if (BgL_test2015z00_2863)
															{	/* Rgc/rgcposix.scm 253 */
																long BgL_arg1346z00_1319;
																obj_t BgL_arg1347z00_1320;

																BgL_arg1346z00_1319 =
																	((long) CINT(BgL_iz00_1289) + ((long) 1));
																BgL_arg1347z00_1320 =
																	MAKE_YOUNG_PAIR(BCHAR(((unsigned char) '-')),
																	BgL_csetz00_1290);
																{
																	obj_t BgL_csetz00_2882;
																	obj_t BgL_iz00_2880;

																	BgL_iz00_2880 = BINT(BgL_arg1346z00_1319);
																	BgL_csetz00_2882 = BgL_arg1347z00_1320;
																	BgL_csetz00_1290 = BgL_csetz00_2882;
																	BgL_iz00_1289 = BgL_iz00_2880;
																	goto BgL_zc3z04anonymousza31327ze3z87_1291;
																}
															}
														else
															{	/* Rgc/rgcposix.scm 250 */
																return
																	BGl_errorz00zz__errorz00(BFALSE,
																	BGl_string1951z00zz__rgc_posixz00,
																	BGl_za2errzd2stringza2zd2zz__rgc_posixz00);
															}
													}
													break;
												default:
													{	/* Rgc/rgcposix.scm 260 */
														long BgL_iz00_1326;

														BgL_iz00_1326 =
															((long) CINT(BgL_iz00_1289) + ((long) 1));
														{	/* Rgc/rgcposix.scm 261 */
															bool_t BgL_test2018z00_2886;

															if (
																((BgL_iz00_1326 + ((long) 1)) <
																	BgL_lenz00_1283))
																{	/* Rgc/rgcposix.scm 261 */
																	BgL_test2018z00_2886 =
																		(((unsigned char) '-') ==
																		STRING_REF(BgL_sz00_18, BgL_iz00_1326));
																}
															else
																{	/* Rgc/rgcposix.scm 261 */
																	BgL_test2018z00_2886 = ((bool_t) 0);
																}
															if (BgL_test2018z00_2886)
																{	/* Rgc/rgcposix.scm 264 */
																	long BgL_iz00_1332;

																	BgL_iz00_1332 = (BgL_iz00_1326 + ((long) 1));
																	{	/* Rgc/rgcposix.scm 264 */
																		long BgL_toz00_1333;

																		BgL_toz00_1333 =
																			(STRING_REF(BgL_sz00_18, BgL_iz00_1332));
																		{	/* Rgc/rgcposix.scm 265 */

																			{	/* Rgc/rgcposix.scm 266 */
																				long BgL_g1050z00_1334;

																				BgL_g1050z00_1334 = (BgL_cz00_1293);
																				{
																					long BgL_jz00_1999;
																					obj_t BgL_csetz00_2000;

																					BgL_jz00_1999 = BgL_g1050z00_1334;
																					BgL_csetz00_2000 = BgL_csetz00_1290;
																				BgL_laapz00_1998:
																					if ((BgL_jz00_1999 > BgL_toz00_1333))
																						{	/* Rgc/rgcposix.scm 269 */
																							long BgL_arg1359z00_2007;

																							BgL_arg1359z00_2007 =
																								(BgL_iz00_1332 + ((long) 1));
																							{
																								obj_t BgL_csetz00_2901;
																								obj_t BgL_iz00_2899;

																								BgL_iz00_2899 =
																									BINT(BgL_arg1359z00_2007);
																								BgL_csetz00_2901 =
																									BgL_csetz00_2000;
																								BgL_csetz00_1290 =
																									BgL_csetz00_2901;
																								BgL_iz00_1289 = BgL_iz00_2899;
																								goto
																									BgL_zc3z04anonymousza31327ze3z87_1291;
																							}
																						}
																					else
																						{	/* Rgc/rgcposix.scm 271 */
																							long BgL_arg1360z00_2008;
																							obj_t BgL_arg1361z00_2009;

																							BgL_arg1360z00_2008 =
																								(BgL_jz00_1999 + ((long) 1));
																							{	/* Rgc/rgcposix.scm 272 */
																								unsigned char
																									BgL_arg1362z00_2010;
																								BgL_arg1362z00_2010 =
																									(BgL_jz00_1999);
																								BgL_arg1361z00_2009 =
																									MAKE_YOUNG_PAIR(BCHAR
																									(BgL_arg1362z00_2010),
																									BgL_csetz00_2000);
																							}
																							{
																								obj_t BgL_csetz00_2907;
																								long BgL_jz00_2906;

																								BgL_jz00_2906 =
																									BgL_arg1360z00_2008;
																								BgL_csetz00_2907 =
																									BgL_arg1361z00_2009;
																								BgL_csetz00_2000 =
																									BgL_csetz00_2907;
																								BgL_jz00_1999 = BgL_jz00_2906;
																								goto BgL_laapz00_1998;
																							}
																						}
																				}
																			}
																		}
																	}
																}
															else
																{	/* Rgc/rgcposix.scm 275 */
																	obj_t BgL_arg1364z00_1346;

																	BgL_arg1364z00_1346 =
																		MAKE_YOUNG_PAIR(BCHAR(BgL_cz00_1293),
																		BgL_csetz00_1290);
																	{
																		obj_t BgL_csetz00_2912;
																		obj_t BgL_iz00_2910;

																		BgL_iz00_2910 = BINT(BgL_iz00_1326);
																		BgL_csetz00_2912 = BgL_arg1364z00_1346;
																		BgL_csetz00_1290 = BgL_csetz00_2912;
																		BgL_iz00_1289 = BgL_iz00_2910;
																		goto BgL_zc3z04anonymousza31327ze3z87_1291;
																	}
																}
														}
													}
												}
										}
									}
								else
									{	/* Rgc/rgcposix.scm 226 */
										return
											BGl_errorz00zz__errorz00(BFALSE,
											BGl_string1952z00zz__rgc_posixz00,
											BGl_za2errzd2stringza2zd2zz__rgc_posixz00);
									}
							}
						}
					}
				else
					{	/* Rgc/rgcposix.scm 218 */
						return
							BGl_errorz00zz__errorz00(BFALSE,
							BGl_string1952z00zz__rgc_posixz00,
							BGl_za2errzd2stringza2zd2zz__rgc_posixz00);
					}
			}
		}

	}



/* parse-posix-braces */
	obj_t BGl_parsezd2posixzd2bracesz00zz__rgc_posixz00(obj_t BgL_sz00_20,
		obj_t BgL_iz00_21)
	{
		{	/* Rgc/rgcposix.scm 285 */
			{	/* Rgc/rgcposix.scm 296 */
				obj_t BgL_commaz00_1358;
				obj_t BgL_rbz00_1359;

				{	/* Rgc/rgcposix.scm 287 */
					long BgL_lenz00_2077;

					BgL_lenz00_2077 = STRING_LENGTH(BgL_sz00_20);
					{
						obj_t BgL_offsetz00_2079;

						BgL_offsetz00_2079 = BgL_iz00_21;
					BgL_loopz00_2078:
						if (((long) CINT(BgL_offsetz00_2079) >= BgL_lenz00_2077))
							{	/* Rgc/rgcposix.scm 290 */
								BgL_commaz00_1358 = BFALSE;
							}
						else
							{	/* Rgc/rgcposix.scm 290 */
								if (
									(STRING_REF(BgL_sz00_20,
											(long) CINT(BgL_offsetz00_2079)) ==
										((unsigned char) ',')))
									{	/* Rgc/rgcposix.scm 292 */
										BgL_commaz00_1358 = BgL_offsetz00_2079;
									}
								else
									{
										obj_t BgL_offsetz00_2924;

										BgL_offsetz00_2924 =
											ADDFX(BgL_offsetz00_2079, BINT(((long) 1)));
										BgL_offsetz00_2079 = BgL_offsetz00_2924;
										goto BgL_loopz00_2078;
									}
							}
					}
				}
				{	/* Rgc/rgcposix.scm 287 */
					long BgL_lenz00_2097;

					BgL_lenz00_2097 = STRING_LENGTH(BgL_sz00_20);
					{
						obj_t BgL_offsetz00_2099;

						BgL_offsetz00_2099 = BgL_iz00_21;
					BgL_loopz00_2098:
						if (((long) CINT(BgL_offsetz00_2099) >= BgL_lenz00_2097))
							{	/* Rgc/rgcposix.scm 290 */
								BgL_rbz00_1359 = BFALSE;
							}
						else
							{	/* Rgc/rgcposix.scm 290 */
								if (
									(STRING_REF(BgL_sz00_20,
											(long) CINT(BgL_offsetz00_2099)) ==
										((unsigned char) '}')))
									{	/* Rgc/rgcposix.scm 292 */
										BgL_rbz00_1359 = BgL_offsetz00_2099;
									}
								else
									{
										obj_t BgL_offsetz00_2935;

										BgL_offsetz00_2935 =
											ADDFX(BgL_offsetz00_2099, BINT(((long) 1)));
										BgL_offsetz00_2099 = BgL_offsetz00_2935;
										goto BgL_loopz00_2098;
									}
							}
					}
				}
				if (CBOOL(BgL_rbz00_1359))
					{	/* Rgc/rgcposix.scm 299 */
						bool_t BgL_test2026z00_2940;

						if (CBOOL(BgL_commaz00_1358))
							{	/* Rgc/rgcposix.scm 299 */
								BgL_test2026z00_2940 =
									(
									(long) CINT(BgL_commaz00_1358) < (long) CINT(BgL_rbz00_1359));
							}
						else
							{	/* Rgc/rgcposix.scm 299 */
								BgL_test2026z00_2940 = ((bool_t) 0);
							}
						if (BgL_test2026z00_2940)
							{	/* Rgc/rgcposix.scm 300 */
								obj_t BgL_val0_1144z00_1361;
								obj_t BgL_val1_1145z00_1362;
								long BgL_val2_1146z00_1363;

								{	/* Rgc/rgcposix.scm 300 */
									obj_t BgL_arg1370z00_1364;

									BgL_arg1370z00_1364 =
										c_substring(BgL_sz00_20,
										(long) CINT(BgL_iz00_21), (long) CINT(BgL_commaz00_1358));
									{	/* Ieee/number.scm 165 */

										BgL_val0_1144z00_1361 =
											BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00
											(BgL_arg1370z00_1364, BINT(((long) 10)));
								}}
								if (
									(((long) CINT(BgL_commaz00_1358) + ((long) 1)) ==
										(long) CINT(BgL_rbz00_1359)))
									{	/* Rgc/rgcposix.scm 301 */
										BgL_val1_1145z00_1362 = BFALSE;
									}
								else
									{	/* Rgc/rgcposix.scm 302 */
										obj_t BgL_arg1372z00_1368;

										BgL_arg1372z00_1368 =
											c_substring(BgL_sz00_20,
											((long) CINT(BgL_commaz00_1358) + ((long) 1)),
											(long) CINT(BgL_rbz00_1359));
										{	/* Ieee/number.scm 165 */

											BgL_val1_1145z00_1362 =
												BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00
												(BgL_arg1372z00_1368, BINT(((long) 10)));
									}}
								BgL_val2_1146z00_1363 =
									((long) CINT(BgL_rbz00_1359) + ((long) 1));
								{	/* Rgc/rgcposix.scm 300 */
									int BgL_res1853z00_2137;

									{	/* Rgc/rgcposix.scm 300 */
										int BgL_tmpz00_2964;

										BgL_tmpz00_2964 = (int) (((long) 3));
										BgL_res1853z00_2137 =
											BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2964);
									} BgL_res1853z00_2137;
								}
								{	/* Rgc/rgcposix.scm 300 */
									int BgL_tmpz00_2967;

									BgL_tmpz00_2967 = (int) (((long) 1));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_2967, BgL_val1_1145z00_1362);
								}
								{	/* Rgc/rgcposix.scm 300 */
									obj_t BgL_auxz00_2972;
									int BgL_tmpz00_2970;

									BgL_auxz00_2972 = BINT(BgL_val2_1146z00_1363);
									BgL_tmpz00_2970 = (int) (((long) 2));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_2970, BgL_auxz00_2972);
								}
								return BgL_val0_1144z00_1361;
							}
						else
							{	/* Rgc/rgcposix.scm 304 */
								obj_t BgL_mz00_1373;

								{	/* Rgc/rgcposix.scm 304 */
									obj_t BgL_arg1375z00_1377;

									BgL_arg1375z00_1377 =
										c_substring(BgL_sz00_20,
										(long) CINT(BgL_iz00_21), (long) CINT(BgL_rbz00_1359));
									{	/* Ieee/number.scm 165 */

										BgL_mz00_1373 =
											BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00
											(BgL_arg1375z00_1377, BINT(((long) 10)));
								}}
								{	/* Rgc/rgcposix.scm 305 */
									long BgL_val2_1149z00_1376;

									BgL_val2_1149z00_1376 =
										((long) CINT(BgL_rbz00_1359) + ((long) 1));
									{	/* Rgc/rgcposix.scm 305 */
										int BgL_res1856z00_2144;

										{	/* Rgc/rgcposix.scm 305 */
											int BgL_tmpz00_2982;

											BgL_tmpz00_2982 = (int) (((long) 3));
											BgL_res1856z00_2144 =
												BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2982);
										} BgL_res1856z00_2144;
									}
									{	/* Rgc/rgcposix.scm 305 */
										int BgL_tmpz00_2985;

										BgL_tmpz00_2985 = (int) (((long) 1));
										BGL_MVALUES_VAL_SET(BgL_tmpz00_2985, BgL_mz00_1373);
									}
									{	/* Rgc/rgcposix.scm 305 */
										obj_t BgL_auxz00_2990;
										int BgL_tmpz00_2988;

										BgL_auxz00_2990 = BINT(BgL_val2_1149z00_1376);
										BgL_tmpz00_2988 = (int) (((long) 2));
										BGL_MVALUES_VAL_SET(BgL_tmpz00_2988, BgL_auxz00_2990);
									}
									return BgL_mz00_1373;
								}
							}
					}
				else
					{	/* Rgc/rgcposix.scm 298 */
						return
							BGl_errorz00zz__errorz00(BFALSE,
							BGl_string1953z00zz__rgc_posixz00,
							BGl_za2errzd2stringza2zd2zz__rgc_posixz00);
					}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__rgc_posixz00()
	{
		{	/* Rgc/rgcposix.scm 14 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__rgc_posixz00()
	{
		{	/* Rgc/rgcposix.scm 14 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__rgc_posixz00()
	{
		{	/* Rgc/rgcposix.scm 14 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__rgc_posixz00()
	{
		{	/* Rgc/rgcposix.scm 14 */
			return
				BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string1954z00zz__rgc_posixz00));
		}

	}

#ifdef __cplusplus
}
#endif
