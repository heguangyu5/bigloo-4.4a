/*===========================================================================*/
/*   (Unsafe/pcre.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Unsafe/pcre.scm -indent -o objs/obj_u/Unsafe/pcre.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_EXPORTED_DECL obj_t BGl_regexpzd2patternzd2zz__regexpz00(obj_t);
	static obj_t BGl_z62regexpzf3z91zz__regexpz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__regexpz00 = BUNSPEC;
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62pregexpzd2quotezb0zz__regexpz00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zz__regexpz00();
	static obj_t BGl__pregexpzd2matchzd2positionsz00zz__regexpz00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zz__regexpz00();
	extern obj_t BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_memvz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_pregexpz00zz__regexpz00(obj_t, obj_t);
	extern obj_t bgl_reverse_bang(obj_t);
	extern obj_t string_append_3(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_pregexpzd2replacezd2zz__regexpz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62pregexpzd2replacezb0zz__regexpz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zz__regexpz00();
	static obj_t BGl_z62regexpzd2capturezd2countz62zz__regexpz00(obj_t, obj_t);
	static obj_t BGl_z62pregexpzd2splitzb0zz__regexpz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_regexpzd2capturezd2countz00zz__regexpz00(obj_t);
	extern obj_t string_append(obj_t, obj_t);
	extern obj_t BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_pregexpzd2quotezd2zz__regexpz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_regexpzf3zf3zz__regexpz00(obj_t);
	static obj_t BGl_pregexpzd2readzd2escapedzd2numberzd2zz__regexpz00(obj_t,
		obj_t, long);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__regexpz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_pregexpzd2listzd2refz00zz__regexpz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_pregexpzd2replaceza2z70zz__regexpz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL long
		BGl_pregexpzd2matchzd2nzd2positionsz12zc0zz__regexpz00(obj_t, obj_t, obj_t,
		long, long);
	BGL_EXPORTED_DECL obj_t BGl_pregexpzd2matchzd2positionsz00zz__regexpz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__regexpz00();
	static obj_t BGl_gczd2rootszd2initz00zz__regexpz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__regexpz00();
	static obj_t BGl_z62pregexpzd2matchzd2nzd2positionsz12za2zz__regexpz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_pregexpzd2replacezd2auxz00zz__regexpz00(obj_t, obj_t, long,
		obj_t);
	static obj_t BGl__pregexpzd2matchzd2zz__regexpz00(obj_t, obj_t);
	static obj_t BGl_z62pregexpz62zz__regexpz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_pregexpzd2splitzd2zz__regexpz00(obj_t, obj_t);
	static obj_t BGl_list1890z00zz__regexpz00 = BUNSPEC;
	extern obj_t bgl_regcomp(obj_t, obj_t, bool_t);
	static obj_t BGl_z62pregexpzd2replaceza2z12zz__regexpz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t c_substring(obj_t, long, long);
	static obj_t BGl_z62regexpzd2patternzb0zz__regexpz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_pregexpzd2matchzd2zz__regexpz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_pregexpzd2splitzd2envz00zz__regexpz00,
		BgL_bgl_za762pregexpza7d2spl1893z00, BGl_z62pregexpzd2splitzb0zz__regexpz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_pregexpzd2quotezd2envz00zz__regexpz00,
		BgL_bgl_za762pregexpza7d2quo1894z00, BGl_z62pregexpzd2quotezb0zz__regexpz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_pregexpzd2replaceza2zd2envza2zz__regexpz00,
		BgL_bgl_za762pregexpza7d2rep1895z00,
		BGl_z62pregexpzd2replaceza2z12zz__regexpz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_pregexpzd2matchzd2nzd2positionsz12zd2envz12zz__regexpz00,
		BgL_bgl_za762pregexpza7d2mat1896z00,
		BGl_z62pregexpzd2matchzd2nzd2positionsz12za2zz__regexpz00, 0L, BUNSPEC, 5);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_pregexpzd2matchzd2envz00zz__regexpz00,
		BgL_bgl__pregexpza7d2match1897za7, opt_generic_entry,
		BGl__pregexpzd2matchzd2zz__regexpz00, BFALSE, -1);
	      DEFINE_STRING(BGl_string1875z00zz__regexpz00,
		BgL_bgl_string1875za700za7za7_1898za7, "/tmp/4.4a/runtime/Unsafe/pcre.scm",
		33);
	      DEFINE_STRING(BGl_string1876z00zz__regexpz00,
		BgL_bgl_string1876za700za7za7_1899za7, "&regexp-pattern", 15);
	      DEFINE_STRING(BGl_string1877z00zz__regexpz00,
		BgL_bgl_string1877za700za7za7_1900za7, "regexp", 6);
	      DEFINE_STRING(BGl_string1878z00zz__regexpz00,
		BgL_bgl_string1878za700za7za7_1901za7, "&regexp-capture-count", 21);
	      DEFINE_STRING(BGl_string1879z00zz__regexpz00,
		BgL_bgl_string1879za700za7za7_1902za7, "&pregexp", 8);
	      DEFINE_STRING(BGl_string1880z00zz__regexpz00,
		BgL_bgl_string1880za700za7za7_1903za7, "bstring", 7);
	      DEFINE_STRING(BGl_string1881z00zz__regexpz00,
		BgL_bgl_string1881za700za7za7_1904za7, "_pregexp-match-positions", 24);
	      DEFINE_STRING(BGl_string1882z00zz__regexpz00,
		BgL_bgl_string1882za700za7za7_1905za7, "bint", 4);
	      DEFINE_STRING(BGl_string1883z00zz__regexpz00,
		BgL_bgl_string1883za700za7za7_1906za7, "&pregexp-match-n-positions!", 27);
	      DEFINE_STRING(BGl_string1884z00zz__regexpz00,
		BgL_bgl_string1884za700za7za7_1907za7, "vector", 6);
	      DEFINE_STRING(BGl_string1885z00zz__regexpz00,
		BgL_bgl_string1885za700za7za7_1908za7, "_pregexp-match", 14);
	      DEFINE_STRING(BGl_string1886z00zz__regexpz00,
		BgL_bgl_string1886za700za7za7_1909za7, "", 0);
	      DEFINE_STRING(BGl_string1887z00zz__regexpz00,
		BgL_bgl_string1887za700za7za7_1910za7, "&pregexp-split", 14);
	      DEFINE_STRING(BGl_string1888z00zz__regexpz00,
		BgL_bgl_string1888za700za7za7_1911za7, "&pregexp-replace", 16);
	      DEFINE_STRING(BGl_string1889z00zz__regexpz00,
		BgL_bgl_string1889za700za7za7_1912za7, "&pregexp-replace*", 17);
	      DEFINE_STRING(BGl_string1891z00zz__regexpz00,
		BgL_bgl_string1891za700za7za7_1913za7, "&pregexp-quote", 14);
	      DEFINE_STRING(BGl_string1892z00zz__regexpz00,
		BgL_bgl_string1892za700za7za7_1914za7, "__regexp", 8);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_pregexpzd2envzd2zz__regexpz00,
		BgL_bgl_za762pregexpza762za7za7_1915z00, va_generic_entry,
		BGl_z62pregexpz62zz__regexpz00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_regexpzd2capturezd2countzd2envzd2zz__regexpz00,
		BgL_bgl_za762regexpza7d2capt1916z00,
		BGl_z62regexpzd2capturezd2countz62zz__regexpz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_regexpzd2patternzd2envz00zz__regexpz00,
		BgL_bgl_za762regexpza7d2patt1917z00,
		BGl_z62regexpzd2patternzb0zz__regexpz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_regexpzf3zd2envz21zz__regexpz00,
		BgL_bgl_za762regexpza7f3za791za71918z00, BGl_z62regexpzf3z91zz__regexpz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_pregexpzd2replacezd2envz00zz__regexpz00,
		BgL_bgl_za762pregexpza7d2rep1919z00,
		BGl_z62pregexpzd2replacezb0zz__regexpz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_pregexpzd2matchzd2positionszd2envzd2zz__regexpz00,
		BgL_bgl__pregexpza7d2match1920za7, opt_generic_entry,
		BGl__pregexpzd2matchzd2positionsz00zz__regexpz00, BFALSE, -1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_list1890z00zz__regexpz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__regexpz00(long
		BgL_checksumz00_2331, char *BgL_fromz00_2332)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__regexpz00))
				{
					BGl_requirezd2initializa7ationz75zz__regexpz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__regexpz00();
					BGl_cnstzd2initzd2zz__regexpz00();
					BGl_importedzd2moduleszd2initz00zz__regexpz00();
					return BGl_methodzd2initzd2zz__regexpz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__regexpz00()
	{
		{	/* Unsafe/pcre.scm 15 */
			return (BGl_list1890z00zz__regexpz00 =
				MAKE_YOUNG_PAIR(BCHAR(((unsigned char) '\\')),
					MAKE_YOUNG_PAIR(BCHAR(((unsigned char) '.')),
						MAKE_YOUNG_PAIR(BCHAR(((unsigned char) '?')),
							MAKE_YOUNG_PAIR(BCHAR(((unsigned char) '*')),
								MAKE_YOUNG_PAIR(BCHAR(((unsigned char) '+')),
									MAKE_YOUNG_PAIR(BCHAR(((unsigned char) '|')),
										MAKE_YOUNG_PAIR(BCHAR(((unsigned char) '^')),
											MAKE_YOUNG_PAIR(BCHAR(((unsigned char) '$')),
												MAKE_YOUNG_PAIR(BCHAR(((unsigned char) '[')),
													MAKE_YOUNG_PAIR(BCHAR(((unsigned char) ']')),
														MAKE_YOUNG_PAIR(BCHAR(((unsigned char) '{')),
															MAKE_YOUNG_PAIR(BCHAR(((unsigned char) '}')),
																MAKE_YOUNG_PAIR(BCHAR(((unsigned char) '(')),
																	MAKE_YOUNG_PAIR(BCHAR(((unsigned char) ')')),
																		BNIL)))))))))))))), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__regexpz00()
	{
		{	/* Unsafe/pcre.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* regexp? */
	BGL_EXPORTED_DEF bool_t BGl_regexpzf3zf3zz__regexpz00(obj_t BgL_objz00_3)
	{
		{	/* Unsafe/pcre.scm 92 */
			return BGL_REGEXPP(BgL_objz00_3);
		}

	}



/* &regexp? */
	obj_t BGl_z62regexpzf3z91zz__regexpz00(obj_t BgL_envz00_2207,
		obj_t BgL_objz00_2208)
	{
		{	/* Unsafe/pcre.scm 92 */
			return BBOOL(BGl_regexpzf3zf3zz__regexpz00(BgL_objz00_2208));
		}

	}



/* regexp-pattern */
	BGL_EXPORTED_DEF obj_t BGl_regexpzd2patternzd2zz__regexpz00(obj_t BgL_rez00_4)
	{
		{	/* Unsafe/pcre.scm 98 */
			return BGL_REGEXP_PAT(BgL_rez00_4);
		}

	}



/* &regexp-pattern */
	obj_t BGl_z62regexpzd2patternzb0zz__regexpz00(obj_t BgL_envz00_2209,
		obj_t BgL_rez00_2210)
	{
		{	/* Unsafe/pcre.scm 98 */
			{	/* Unsafe/pcre.scm 99 */
				obj_t BgL_auxz00_2373;

				if (BGl_regexpzf3zf3zz__regexpz00(BgL_rez00_2210))
					{	/* Unsafe/pcre.scm 99 */
						BgL_auxz00_2373 = BgL_rez00_2210;
					}
				else
					{
						obj_t BgL_auxz00_2376;

						BgL_auxz00_2376 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1875z00zz__regexpz00,
							BINT(((long) 4196)), BGl_string1876z00zz__regexpz00,
							BGl_string1877z00zz__regexpz00, BgL_rez00_2210);
						FAILURE(BgL_auxz00_2376, BFALSE, BFALSE);
					}
				return BGl_regexpzd2patternzd2zz__regexpz00(BgL_auxz00_2373);
			}
		}

	}



/* regexp-capture-count */
	BGL_EXPORTED_DEF long BGl_regexpzd2capturezd2countz00zz__regexpz00(obj_t
		BgL_rez00_5)
	{
		{	/* Unsafe/pcre.scm 104 */
			return BGL_REGEXP_CAPTURE_COUNT(BgL_rez00_5);
		}

	}



/* &regexp-capture-count */
	obj_t BGl_z62regexpzd2capturezd2countz62zz__regexpz00(obj_t BgL_envz00_2211,
		obj_t BgL_rez00_2212)
	{
		{	/* Unsafe/pcre.scm 104 */
			{	/* Unsafe/pcre.scm 105 */
				long BgL_tmpz00_2382;

				{	/* Unsafe/pcre.scm 105 */
					obj_t BgL_auxz00_2383;

					if (BGl_regexpzf3zf3zz__regexpz00(BgL_rez00_2212))
						{	/* Unsafe/pcre.scm 105 */
							BgL_auxz00_2383 = BgL_rez00_2212;
						}
					else
						{
							obj_t BgL_auxz00_2386;

							BgL_auxz00_2386 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1875z00zz__regexpz00,
								BINT(((long) 4485)), BGl_string1878z00zz__regexpz00,
								BGl_string1877z00zz__regexpz00, BgL_rez00_2212);
							FAILURE(BgL_auxz00_2386, BFALSE, BFALSE);
						}
					BgL_tmpz00_2382 =
						BGl_regexpzd2capturezd2countz00zz__regexpz00(BgL_auxz00_2383);
				}
				return BINT(BgL_tmpz00_2382);
			}
		}

	}



/* pregexp */
	BGL_EXPORTED_DEF obj_t BGl_pregexpz00zz__regexpz00(obj_t BgL_rez00_6,
		obj_t BgL_optzd2argszd2_7)
	{
		{	/* Unsafe/pcre.scm 119 */
			return bgl_regcomp(BgL_rez00_6, BgL_optzd2argszd2_7, ((bool_t) 1));
		}

	}



/* &pregexp */
	obj_t BGl_z62pregexpz62zz__regexpz00(obj_t BgL_envz00_2213,
		obj_t BgL_rez00_2214, obj_t BgL_optzd2argszd2_2215)
	{
		{	/* Unsafe/pcre.scm 119 */
			{	/* Unsafe/pcre.scm 120 */
				obj_t BgL_auxz00_2393;

				if (STRINGP(BgL_rez00_2214))
					{	/* Unsafe/pcre.scm 120 */
						BgL_auxz00_2393 = BgL_rez00_2214;
					}
				else
					{
						obj_t BgL_auxz00_2396;

						BgL_auxz00_2396 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1875z00zz__regexpz00,
							BINT(((long) 5115)), BGl_string1879z00zz__regexpz00,
							BGl_string1880z00zz__regexpz00, BgL_rez00_2214);
						FAILURE(BgL_auxz00_2396, BFALSE, BFALSE);
					}
				return
					BGl_pregexpz00zz__regexpz00(BgL_auxz00_2393, BgL_optzd2argszd2_2215);
			}
		}

	}



/* _pregexp-match-positions */
	obj_t BGl__pregexpzd2matchzd2positionsz00zz__regexpz00(obj_t
		BgL_env1108z00_18, obj_t BgL_opt1107z00_17)
	{
		{	/* Unsafe/pcre.scm 136 */
			{	/* Unsafe/pcre.scm 136 */
				obj_t BgL_patz00_1125;
				obj_t BgL_strz00_1126;

				BgL_patz00_1125 = VECTOR_REF(BgL_opt1107z00_17, ((long) 0));
				BgL_strz00_1126 = VECTOR_REF(BgL_opt1107z00_17, ((long) 1));
				switch (VECTOR_LENGTH(BgL_opt1107z00_17))
					{
					case ((long) 2):

						{	/* Unsafe/pcre.scm 136 */
							long BgL_endz00_1131;

							{	/* Unsafe/pcre.scm 136 */
								obj_t BgL_stringz00_1698;

								if (STRINGP(BgL_strz00_1126))
									{	/* Unsafe/pcre.scm 136 */
										BgL_stringz00_1698 = BgL_strz00_1126;
									}
								else
									{
										obj_t BgL_auxz00_2405;

										BgL_auxz00_2405 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string1875z00zz__regexpz00, BINT(((long) 5874)),
											BGl_string1881z00zz__regexpz00,
											BGl_string1880z00zz__regexpz00, BgL_strz00_1126);
										FAILURE(BgL_auxz00_2405, BFALSE, BFALSE);
									}
								BgL_endz00_1131 = STRING_LENGTH(BgL_stringz00_1698);
							}
							{	/* Unsafe/pcre.scm 136 */

								{	/* Unsafe/pcre.scm 136 */
									obj_t BgL_strz00_1700;

									if (STRINGP(BgL_strz00_1126))
										{	/* Unsafe/pcre.scm 136 */
											BgL_strz00_1700 = BgL_strz00_1126;
										}
									else
										{
											obj_t BgL_auxz00_2412;

											BgL_auxz00_2412 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string1875z00zz__regexpz00, BINT(((long) 5809)),
												BGl_string1881z00zz__regexpz00,
												BGl_string1880z00zz__regexpz00, BgL_strz00_1126);
											FAILURE(BgL_auxz00_2412, BFALSE, BFALSE);
										}
									{	/* Unsafe/pcre.scm 126 */
										bool_t BgL_test1927z00_2416;

										{	/* Unsafe/pcre.scm 126 */
											bool_t BgL_res1653z00_1704;

											BgL_res1653z00_1704 = BGL_REGEXPP(BgL_patz00_1125);
											BgL_test1927z00_2416 = BgL_res1653z00_1704;
										}
										if (BgL_test1927z00_2416)
											{	/* Unsafe/pcre.scm 127 */
												int BgL_auxz00_2429;
												int BgL_auxz00_2427;
												char *BgL_auxz00_2425;
												obj_t BgL_tmpz00_2418;

												BgL_auxz00_2429 = (int) (BgL_endz00_1131);
												BgL_auxz00_2427 = (int) (((long) 0));
												BgL_auxz00_2425 = BSTRING_TO_STRING(BgL_strz00_1700);
												if (BGl_regexpzf3zf3zz__regexpz00(BgL_patz00_1125))
													{	/* Unsafe/pcre.scm 127 */
														BgL_tmpz00_2418 = BgL_patz00_1125;
													}
												else
													{
														obj_t BgL_auxz00_2421;

														BgL_auxz00_2421 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string1875z00zz__regexpz00,
															BINT(((long) 5444)),
															BGl_string1881z00zz__regexpz00,
															BGl_string1877z00zz__regexpz00, BgL_patz00_1125);
														FAILURE(BgL_auxz00_2421, BFALSE, BFALSE);
													}
												return
													BGL_REGEXP_MATCH(BgL_tmpz00_2418, BgL_auxz00_2425,
													((bool_t) 0), BgL_auxz00_2427, BgL_auxz00_2429);
											}
										else
											{	/* Unsafe/pcre.scm 128 */
												obj_t BgL_rxz00_1702;

												{	/* Unsafe/pcre.scm 128 */
													obj_t BgL_tmpz00_2432;

													if (STRINGP(BgL_patz00_1125))
														{	/* Unsafe/pcre.scm 128 */
															BgL_tmpz00_2432 = BgL_patz00_1125;
														}
													else
														{
															obj_t BgL_auxz00_2435;

															BgL_auxz00_2435 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string1875z00zz__regexpz00,
																BINT(((long) 5497)),
																BGl_string1881z00zz__regexpz00,
																BGl_string1880z00zz__regexpz00,
																BgL_patz00_1125);
															FAILURE(BgL_auxz00_2435, BFALSE, BFALSE);
														}
													BgL_rxz00_1702 =
														bgl_regcomp(BgL_tmpz00_2432, BNIL, ((bool_t) 0));
												}
												{	/* Unsafe/pcre.scm 128 */
													obj_t BgL_valz00_1703;

													{	/* Unsafe/pcre.scm 129 */
														int BgL_auxz00_2444;
														int BgL_auxz00_2442;
														char *BgL_tmpz00_2440;

														BgL_auxz00_2444 = (int) (BgL_endz00_1131);
														BgL_auxz00_2442 = (int) (((long) 0));
														BgL_tmpz00_2440 =
															BSTRING_TO_STRING(BgL_strz00_1700);
														BgL_valz00_1703 =
															BGL_REGEXP_MATCH(BgL_rxz00_1702, BgL_tmpz00_2440,
															((bool_t) 0), BgL_auxz00_2442, BgL_auxz00_2444);
													}
													{	/* Unsafe/pcre.scm 129 */

														BGL_REGEXP_FREE(BgL_rxz00_1702);
														return BgL_valz00_1703;
													}
												}
											}
									}
								}
							}
						}
						break;
					case ((long) 3):

						{	/* Unsafe/pcre.scm 136 */
							obj_t BgL_begz00_1132;

							BgL_begz00_1132 = VECTOR_REF(BgL_opt1107z00_17, ((long) 2));
							{	/* Unsafe/pcre.scm 136 */
								long BgL_endz00_1133;

								{	/* Unsafe/pcre.scm 136 */
									obj_t BgL_stringz00_1705;

									if (STRINGP(BgL_strz00_1126))
										{	/* Unsafe/pcre.scm 136 */
											BgL_stringz00_1705 = BgL_strz00_1126;
										}
									else
										{
											obj_t BgL_auxz00_2451;

											BgL_auxz00_2451 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string1875z00zz__regexpz00, BINT(((long) 5874)),
												BGl_string1881z00zz__regexpz00,
												BGl_string1880z00zz__regexpz00, BgL_strz00_1126);
											FAILURE(BgL_auxz00_2451, BFALSE, BFALSE);
										}
									BgL_endz00_1133 = STRING_LENGTH(BgL_stringz00_1705);
								}
								{	/* Unsafe/pcre.scm 136 */

									{	/* Unsafe/pcre.scm 136 */
										obj_t BgL_strz00_1707;

										if (STRINGP(BgL_strz00_1126))
											{	/* Unsafe/pcre.scm 136 */
												BgL_strz00_1707 = BgL_strz00_1126;
											}
										else
											{
												obj_t BgL_auxz00_2458;

												BgL_auxz00_2458 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string1875z00zz__regexpz00, BINT(((long) 5809)),
													BGl_string1881z00zz__regexpz00,
													BGl_string1880z00zz__regexpz00, BgL_strz00_1126);
												FAILURE(BgL_auxz00_2458, BFALSE, BFALSE);
											}
										{	/* Unsafe/pcre.scm 126 */
											bool_t BgL_test1932z00_2462;

											{	/* Unsafe/pcre.scm 126 */
												bool_t BgL_res1655z00_1711;

												BgL_res1655z00_1711 = BGL_REGEXPP(BgL_patz00_1125);
												BgL_test1932z00_2462 = BgL_res1655z00_1711;
											}
											if (BgL_test1932z00_2462)
												{	/* Unsafe/pcre.scm 127 */
													int BgL_auxz00_2482;
													int BgL_auxz00_2473;
													char *BgL_auxz00_2471;
													obj_t BgL_tmpz00_2464;

													BgL_auxz00_2482 = (int) (BgL_endz00_1133);
													{	/* Unsafe/pcre.scm 127 */
														obj_t BgL_tmpz00_2474;

														if (INTEGERP(BgL_begz00_1132))
															{	/* Unsafe/pcre.scm 127 */
																BgL_tmpz00_2474 = BgL_begz00_1132;
															}
														else
															{
																obj_t BgL_auxz00_2477;

																BgL_auxz00_2477 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string1875z00zz__regexpz00,
																	BINT(((long) 5460)),
																	BGl_string1881z00zz__regexpz00,
																	BGl_string1882z00zz__regexpz00,
																	BgL_begz00_1132);
																FAILURE(BgL_auxz00_2477, BFALSE, BFALSE);
															}
														BgL_auxz00_2473 = CINT(BgL_tmpz00_2474);
													}
													BgL_auxz00_2471 = BSTRING_TO_STRING(BgL_strz00_1707);
													if (BGl_regexpzf3zf3zz__regexpz00(BgL_patz00_1125))
														{	/* Unsafe/pcre.scm 127 */
															BgL_tmpz00_2464 = BgL_patz00_1125;
														}
													else
														{
															obj_t BgL_auxz00_2467;

															BgL_auxz00_2467 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string1875z00zz__regexpz00,
																BINT(((long) 5444)),
																BGl_string1881z00zz__regexpz00,
																BGl_string1877z00zz__regexpz00,
																BgL_patz00_1125);
															FAILURE(BgL_auxz00_2467, BFALSE, BFALSE);
														}
													return
														BGL_REGEXP_MATCH(BgL_tmpz00_2464, BgL_auxz00_2471,
														((bool_t) 0), BgL_auxz00_2473, BgL_auxz00_2482);
												}
											else
												{	/* Unsafe/pcre.scm 128 */
													obj_t BgL_rxz00_1709;

													{	/* Unsafe/pcre.scm 128 */
														obj_t BgL_tmpz00_2485;

														if (STRINGP(BgL_patz00_1125))
															{	/* Unsafe/pcre.scm 128 */
																BgL_tmpz00_2485 = BgL_patz00_1125;
															}
														else
															{
																obj_t BgL_auxz00_2488;

																BgL_auxz00_2488 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string1875z00zz__regexpz00,
																	BINT(((long) 5497)),
																	BGl_string1881z00zz__regexpz00,
																	BGl_string1880z00zz__regexpz00,
																	BgL_patz00_1125);
																FAILURE(BgL_auxz00_2488, BFALSE, BFALSE);
															}
														BgL_rxz00_1709 =
															bgl_regcomp(BgL_tmpz00_2485, BNIL, ((bool_t) 0));
													}
													{	/* Unsafe/pcre.scm 128 */
														obj_t BgL_valz00_1710;

														{	/* Unsafe/pcre.scm 129 */
															int BgL_auxz00_2504;
															int BgL_auxz00_2495;
															char *BgL_tmpz00_2493;

															BgL_auxz00_2504 = (int) (BgL_endz00_1133);
															{	/* Unsafe/pcre.scm 129 */
																obj_t BgL_tmpz00_2496;

																if (INTEGERP(BgL_begz00_1132))
																	{	/* Unsafe/pcre.scm 129 */
																		BgL_tmpz00_2496 = BgL_begz00_1132;
																	}
																else
																	{
																		obj_t BgL_auxz00_2499;

																		BgL_auxz00_2499 =
																			BGl_typezd2errorzd2zz__errorz00
																			(BGl_string1875z00zz__regexpz00,
																			BINT(((long) 5548)),
																			BGl_string1881z00zz__regexpz00,
																			BGl_string1882z00zz__regexpz00,
																			BgL_begz00_1132);
																		FAILURE(BgL_auxz00_2499, BFALSE, BFALSE);
																	}
																BgL_auxz00_2495 = CINT(BgL_tmpz00_2496);
															}
															BgL_tmpz00_2493 =
																BSTRING_TO_STRING(BgL_strz00_1707);
															BgL_valz00_1710 =
																BGL_REGEXP_MATCH(BgL_rxz00_1709,
																BgL_tmpz00_2493, ((bool_t) 0), BgL_auxz00_2495,
																BgL_auxz00_2504);
														}
														{	/* Unsafe/pcre.scm 129 */

															BGL_REGEXP_FREE(BgL_rxz00_1709);
															return BgL_valz00_1710;
														}
													}
												}
										}
									}
								}
							}
						}
						break;
					case ((long) 4):

						{	/* Unsafe/pcre.scm 136 */
							obj_t BgL_begz00_1134;

							BgL_begz00_1134 = VECTOR_REF(BgL_opt1107z00_17, ((long) 2));
							{	/* Unsafe/pcre.scm 136 */
								obj_t BgL_endz00_1135;

								BgL_endz00_1135 = VECTOR_REF(BgL_opt1107z00_17, ((long) 3));
								{	/* Unsafe/pcre.scm 136 */

									{	/* Unsafe/pcre.scm 136 */
										obj_t BgL_strz00_1712;

										if (STRINGP(BgL_strz00_1126))
											{	/* Unsafe/pcre.scm 136 */
												BgL_strz00_1712 = BgL_strz00_1126;
											}
										else
											{
												obj_t BgL_auxz00_2512;

												BgL_auxz00_2512 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string1875z00zz__regexpz00, BINT(((long) 5809)),
													BGl_string1881z00zz__regexpz00,
													BGl_string1880z00zz__regexpz00, BgL_strz00_1126);
												FAILURE(BgL_auxz00_2512, BFALSE, BFALSE);
											}
										{	/* Unsafe/pcre.scm 126 */
											bool_t BgL_test1938z00_2516;

											{	/* Unsafe/pcre.scm 126 */
												bool_t BgL_res1656z00_1716;

												BgL_res1656z00_1716 = BGL_REGEXPP(BgL_patz00_1125);
												BgL_test1938z00_2516 = BgL_res1656z00_1716;
											}
											if (BgL_test1938z00_2516)
												{	/* Unsafe/pcre.scm 127 */
													int BgL_auxz00_2536;
													int BgL_auxz00_2527;
													char *BgL_auxz00_2525;
													obj_t BgL_tmpz00_2518;

													{	/* Unsafe/pcre.scm 127 */
														obj_t BgL_tmpz00_2537;

														if (INTEGERP(BgL_endz00_1135))
															{	/* Unsafe/pcre.scm 127 */
																BgL_tmpz00_2537 = BgL_endz00_1135;
															}
														else
															{
																obj_t BgL_auxz00_2540;

																BgL_auxz00_2540 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string1875z00zz__regexpz00,
																	BINT(((long) 5464)),
																	BGl_string1881z00zz__regexpz00,
																	BGl_string1882z00zz__regexpz00,
																	BgL_endz00_1135);
																FAILURE(BgL_auxz00_2540, BFALSE, BFALSE);
															}
														BgL_auxz00_2536 = CINT(BgL_tmpz00_2537);
													}
													{	/* Unsafe/pcre.scm 127 */
														obj_t BgL_tmpz00_2528;

														if (INTEGERP(BgL_begz00_1134))
															{	/* Unsafe/pcre.scm 127 */
																BgL_tmpz00_2528 = BgL_begz00_1134;
															}
														else
															{
																obj_t BgL_auxz00_2531;

																BgL_auxz00_2531 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string1875z00zz__regexpz00,
																	BINT(((long) 5460)),
																	BGl_string1881z00zz__regexpz00,
																	BGl_string1882z00zz__regexpz00,
																	BgL_begz00_1134);
																FAILURE(BgL_auxz00_2531, BFALSE, BFALSE);
															}
														BgL_auxz00_2527 = CINT(BgL_tmpz00_2528);
													}
													BgL_auxz00_2525 = BSTRING_TO_STRING(BgL_strz00_1712);
													if (BGl_regexpzf3zf3zz__regexpz00(BgL_patz00_1125))
														{	/* Unsafe/pcre.scm 127 */
															BgL_tmpz00_2518 = BgL_patz00_1125;
														}
													else
														{
															obj_t BgL_auxz00_2521;

															BgL_auxz00_2521 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string1875z00zz__regexpz00,
																BINT(((long) 5444)),
																BGl_string1881z00zz__regexpz00,
																BGl_string1877z00zz__regexpz00,
																BgL_patz00_1125);
															FAILURE(BgL_auxz00_2521, BFALSE, BFALSE);
														}
													return
														BGL_REGEXP_MATCH(BgL_tmpz00_2518, BgL_auxz00_2525,
														((bool_t) 0), BgL_auxz00_2527, BgL_auxz00_2536);
												}
											else
												{	/* Unsafe/pcre.scm 128 */
													obj_t BgL_rxz00_1714;

													{	/* Unsafe/pcre.scm 128 */
														obj_t BgL_tmpz00_2546;

														if (STRINGP(BgL_patz00_1125))
															{	/* Unsafe/pcre.scm 128 */
																BgL_tmpz00_2546 = BgL_patz00_1125;
															}
														else
															{
																obj_t BgL_auxz00_2549;

																BgL_auxz00_2549 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string1875z00zz__regexpz00,
																	BINT(((long) 5497)),
																	BGl_string1881z00zz__regexpz00,
																	BGl_string1880z00zz__regexpz00,
																	BgL_patz00_1125);
																FAILURE(BgL_auxz00_2549, BFALSE, BFALSE);
															}
														BgL_rxz00_1714 =
															bgl_regcomp(BgL_tmpz00_2546, BNIL, ((bool_t) 0));
													}
													{	/* Unsafe/pcre.scm 128 */
														obj_t BgL_valz00_1715;

														{	/* Unsafe/pcre.scm 129 */
															int BgL_auxz00_2565;
															int BgL_auxz00_2556;
															char *BgL_tmpz00_2554;

															{	/* Unsafe/pcre.scm 129 */
																obj_t BgL_tmpz00_2566;

																if (INTEGERP(BgL_endz00_1135))
																	{	/* Unsafe/pcre.scm 129 */
																		BgL_tmpz00_2566 = BgL_endz00_1135;
																	}
																else
																	{
																		obj_t BgL_auxz00_2569;

																		BgL_auxz00_2569 =
																			BGl_typezd2errorzd2zz__errorz00
																			(BGl_string1875z00zz__regexpz00,
																			BINT(((long) 5552)),
																			BGl_string1881z00zz__regexpz00,
																			BGl_string1882z00zz__regexpz00,
																			BgL_endz00_1135);
																		FAILURE(BgL_auxz00_2569, BFALSE, BFALSE);
																	}
																BgL_auxz00_2565 = CINT(BgL_tmpz00_2566);
															}
															{	/* Unsafe/pcre.scm 129 */
																obj_t BgL_tmpz00_2557;

																if (INTEGERP(BgL_begz00_1134))
																	{	/* Unsafe/pcre.scm 129 */
																		BgL_tmpz00_2557 = BgL_begz00_1134;
																	}
																else
																	{
																		obj_t BgL_auxz00_2560;

																		BgL_auxz00_2560 =
																			BGl_typezd2errorzd2zz__errorz00
																			(BGl_string1875z00zz__regexpz00,
																			BINT(((long) 5548)),
																			BGl_string1881z00zz__regexpz00,
																			BGl_string1882z00zz__regexpz00,
																			BgL_begz00_1134);
																		FAILURE(BgL_auxz00_2560, BFALSE, BFALSE);
																	}
																BgL_auxz00_2556 = CINT(BgL_tmpz00_2557);
															}
															BgL_tmpz00_2554 =
																BSTRING_TO_STRING(BgL_strz00_1712);
															BgL_valz00_1715 =
																BGL_REGEXP_MATCH(BgL_rxz00_1714,
																BgL_tmpz00_2554, ((bool_t) 0), BgL_auxz00_2556,
																BgL_auxz00_2565);
														}
														{	/* Unsafe/pcre.scm 129 */

															BGL_REGEXP_FREE(BgL_rxz00_1714);
															return BgL_valz00_1715;
														}
													}
												}
										}
									}
								}
							}
						}
						break;
					default:
						return BUNSPEC;
					}
			}
		}

	}



/* pregexp-match-positions */
	BGL_EXPORTED_DEF obj_t BGl_pregexpzd2matchzd2positionsz00zz__regexpz00(obj_t
		BgL_patz00_13, obj_t BgL_strz00_14, obj_t BgL_begz00_15,
		obj_t BgL_endz00_16)
	{
		{	/* Unsafe/pcre.scm 136 */
			{	/* Unsafe/pcre.scm 126 */
				bool_t BgL_test1945z00_2578;

				{	/* Unsafe/pcre.scm 126 */
					bool_t BgL_res1657z00_1720;

					BgL_res1657z00_1720 = BGL_REGEXPP(BgL_patz00_13);
					BgL_test1945z00_2578 = BgL_res1657z00_1720;
				}
				if (BgL_test1945z00_2578)
					{	/* Unsafe/pcre.scm 127 */
						int BgL_auxz00_2584;
						int BgL_auxz00_2582;
						char *BgL_tmpz00_2580;

						BgL_auxz00_2584 = CINT(BgL_endz00_16);
						BgL_auxz00_2582 = CINT(BgL_begz00_15);
						BgL_tmpz00_2580 = BSTRING_TO_STRING(BgL_strz00_14);
						return
							BGL_REGEXP_MATCH(BgL_patz00_13, BgL_tmpz00_2580, ((bool_t) 0),
							BgL_auxz00_2582, BgL_auxz00_2584);
					}
				else
					{	/* Unsafe/pcre.scm 128 */
						obj_t BgL_rxz00_1718;

						BgL_rxz00_1718 = bgl_regcomp(BgL_patz00_13, BNIL, ((bool_t) 0));
						{	/* Unsafe/pcre.scm 128 */
							obj_t BgL_valz00_1719;

							{	/* Unsafe/pcre.scm 129 */
								int BgL_auxz00_2592;
								int BgL_auxz00_2590;
								char *BgL_tmpz00_2588;

								BgL_auxz00_2592 = CINT(BgL_endz00_16);
								BgL_auxz00_2590 = CINT(BgL_begz00_15);
								BgL_tmpz00_2588 = BSTRING_TO_STRING(BgL_strz00_14);
								BgL_valz00_1719 =
									BGL_REGEXP_MATCH(BgL_rxz00_1718, BgL_tmpz00_2588,
									((bool_t) 0), BgL_auxz00_2590, BgL_auxz00_2592);
							}
							{	/* Unsafe/pcre.scm 129 */

								BGL_REGEXP_FREE(BgL_rxz00_1718);
								return BgL_valz00_1719;
							}
						}
					}
			}
		}

	}



/* pregexp-match-n-positions! */
	BGL_EXPORTED_DEF long
		BGl_pregexpzd2matchzd2nzd2positionsz12zc0zz__regexpz00(obj_t BgL_patz00_19,
		obj_t BgL_strz00_20, obj_t BgL_vresz00_21, long BgL_begz00_22,
		long BgL_endz00_23)
	{
		{	/* Unsafe/pcre.scm 142 */
			{	/* Unsafe/pcre.scm 143 */
				int BgL_auxz00_2600;
				int BgL_auxz00_2598;
				char *BgL_tmpz00_2596;

				BgL_auxz00_2600 = (int) (BgL_endz00_23);
				BgL_auxz00_2598 = (int) (BgL_begz00_22);
				BgL_tmpz00_2596 = BSTRING_TO_STRING(BgL_strz00_20);
				return
					BGL_REGEXP_MATCH_N(BgL_patz00_19, BgL_tmpz00_2596, BgL_vresz00_21,
					BgL_auxz00_2598, BgL_auxz00_2600);
			}
		}

	}



/* &pregexp-match-n-positions! */
	obj_t BGl_z62pregexpzd2matchzd2nzd2positionsz12za2zz__regexpz00(obj_t
		BgL_envz00_2216, obj_t BgL_patz00_2217, obj_t BgL_strz00_2218,
		obj_t BgL_vresz00_2219, obj_t BgL_begz00_2220, obj_t BgL_endz00_2221)
	{
		{	/* Unsafe/pcre.scm 142 */
			{	/* Unsafe/pcre.scm 143 */
				long BgL_tmpz00_2603;

				{	/* Unsafe/pcre.scm 143 */
					long BgL_auxz00_2634;
					long BgL_auxz00_2625;
					obj_t BgL_auxz00_2618;
					obj_t BgL_auxz00_2611;
					obj_t BgL_auxz00_2604;

					{	/* Unsafe/pcre.scm 143 */
						obj_t BgL_tmpz00_2635;

						if (INTEGERP(BgL_endz00_2221))
							{	/* Unsafe/pcre.scm 143 */
								BgL_tmpz00_2635 = BgL_endz00_2221;
							}
						else
							{
								obj_t BgL_auxz00_2638;

								BgL_auxz00_2638 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1875z00zz__regexpz00, BINT(((long) 6226)),
									BGl_string1883z00zz__regexpz00,
									BGl_string1882z00zz__regexpz00, BgL_endz00_2221);
								FAILURE(BgL_auxz00_2638, BFALSE, BFALSE);
							}
						BgL_auxz00_2634 = (long) CINT(BgL_tmpz00_2635);
					}
					{	/* Unsafe/pcre.scm 143 */
						obj_t BgL_tmpz00_2626;

						if (INTEGERP(BgL_begz00_2220))
							{	/* Unsafe/pcre.scm 143 */
								BgL_tmpz00_2626 = BgL_begz00_2220;
							}
						else
							{
								obj_t BgL_auxz00_2629;

								BgL_auxz00_2629 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1875z00zz__regexpz00, BINT(((long) 6226)),
									BGl_string1883z00zz__regexpz00,
									BGl_string1882z00zz__regexpz00, BgL_begz00_2220);
								FAILURE(BgL_auxz00_2629, BFALSE, BFALSE);
							}
						BgL_auxz00_2625 = (long) CINT(BgL_tmpz00_2626);
					}
					if (VECTORP(BgL_vresz00_2219))
						{	/* Unsafe/pcre.scm 143 */
							BgL_auxz00_2618 = BgL_vresz00_2219;
						}
					else
						{
							obj_t BgL_auxz00_2621;

							BgL_auxz00_2621 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1875z00zz__regexpz00,
								BINT(((long) 6226)), BGl_string1883z00zz__regexpz00,
								BGl_string1884z00zz__regexpz00, BgL_vresz00_2219);
							FAILURE(BgL_auxz00_2621, BFALSE, BFALSE);
						}
					if (STRINGP(BgL_strz00_2218))
						{	/* Unsafe/pcre.scm 143 */
							BgL_auxz00_2611 = BgL_strz00_2218;
						}
					else
						{
							obj_t BgL_auxz00_2614;

							BgL_auxz00_2614 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1875z00zz__regexpz00,
								BINT(((long) 6226)), BGl_string1883z00zz__regexpz00,
								BGl_string1880z00zz__regexpz00, BgL_strz00_2218);
							FAILURE(BgL_auxz00_2614, BFALSE, BFALSE);
						}
					if (BGl_regexpzf3zf3zz__regexpz00(BgL_patz00_2217))
						{	/* Unsafe/pcre.scm 143 */
							BgL_auxz00_2604 = BgL_patz00_2217;
						}
					else
						{
							obj_t BgL_auxz00_2607;

							BgL_auxz00_2607 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1875z00zz__regexpz00,
								BINT(((long) 6226)), BGl_string1883z00zz__regexpz00,
								BGl_string1877z00zz__regexpz00, BgL_patz00_2217);
							FAILURE(BgL_auxz00_2607, BFALSE, BFALSE);
						}
					BgL_tmpz00_2603 =
						BGl_pregexpzd2matchzd2nzd2positionsz12zc0zz__regexpz00
						(BgL_auxz00_2604, BgL_auxz00_2611, BgL_auxz00_2618, BgL_auxz00_2625,
						BgL_auxz00_2634);
				}
				return BINT(BgL_tmpz00_2603);
			}
		}

	}



/* _pregexp-match */
	obj_t BGl__pregexpzd2matchzd2zz__regexpz00(obj_t BgL_env1112z00_29,
		obj_t BgL_opt1111z00_28)
	{
		{	/* Unsafe/pcre.scm 148 */
			{	/* Unsafe/pcre.scm 148 */
				obj_t BgL_patz00_1136;
				obj_t BgL_strz00_1137;

				BgL_patz00_1136 = VECTOR_REF(BgL_opt1111z00_28, ((long) 0));
				BgL_strz00_1137 = VECTOR_REF(BgL_opt1111z00_28, ((long) 1));
				switch (VECTOR_LENGTH(BgL_opt1111z00_28))
					{
					case ((long) 2):

						{	/* Unsafe/pcre.scm 148 */
							long BgL_endz00_1142;

							{	/* Unsafe/pcre.scm 148 */
								obj_t BgL_stringz00_1721;

								if (STRINGP(BgL_strz00_1137))
									{	/* Unsafe/pcre.scm 148 */
										BgL_stringz00_1721 = BgL_strz00_1137;
									}
								else
									{
										obj_t BgL_auxz00_2649;

										BgL_auxz00_2649 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string1875z00zz__regexpz00, BINT(((long) 6540)),
											BGl_string1885z00zz__regexpz00,
											BGl_string1880z00zz__regexpz00, BgL_strz00_1137);
										FAILURE(BgL_auxz00_2649, BFALSE, BFALSE);
									}
								BgL_endz00_1142 = STRING_LENGTH(BgL_stringz00_1721);
							}
							{	/* Unsafe/pcre.scm 148 */

								{	/* Unsafe/pcre.scm 148 */
									obj_t BgL_strz00_1723;

									if (STRINGP(BgL_strz00_1137))
										{	/* Unsafe/pcre.scm 148 */
											BgL_strz00_1723 = BgL_strz00_1137;
										}
									else
										{
											obj_t BgL_auxz00_2656;

											BgL_auxz00_2656 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string1875z00zz__regexpz00, BINT(((long) 6485)),
												BGl_string1885z00zz__regexpz00,
												BGl_string1880z00zz__regexpz00, BgL_strz00_1137);
											FAILURE(BgL_auxz00_2656, BFALSE, BFALSE);
										}
									{	/* Unsafe/pcre.scm 126 */
										bool_t BgL_test1953z00_2660;

										{	/* Unsafe/pcre.scm 126 */
											bool_t BgL_res1659z00_1727;

											BgL_res1659z00_1727 = BGL_REGEXPP(BgL_patz00_1136);
											BgL_test1953z00_2660 = BgL_res1659z00_1727;
										}
										if (BgL_test1953z00_2660)
											{	/* Unsafe/pcre.scm 127 */
												int BgL_auxz00_2673;
												int BgL_auxz00_2671;
												char *BgL_auxz00_2669;
												obj_t BgL_tmpz00_2662;

												BgL_auxz00_2673 = (int) (BgL_endz00_1142);
												BgL_auxz00_2671 = (int) (((long) 0));
												BgL_auxz00_2669 = BSTRING_TO_STRING(BgL_strz00_1723);
												if (BGl_regexpzf3zf3zz__regexpz00(BgL_patz00_1136))
													{	/* Unsafe/pcre.scm 127 */
														BgL_tmpz00_2662 = BgL_patz00_1136;
													}
												else
													{
														obj_t BgL_auxz00_2665;

														BgL_auxz00_2665 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string1875z00zz__regexpz00,
															BINT(((long) 5444)),
															BGl_string1885z00zz__regexpz00,
															BGl_string1877z00zz__regexpz00, BgL_patz00_1136);
														FAILURE(BgL_auxz00_2665, BFALSE, BFALSE);
													}
												return
													BGL_REGEXP_MATCH(BgL_tmpz00_2662, BgL_auxz00_2669,
													((bool_t) 1), BgL_auxz00_2671, BgL_auxz00_2673);
											}
										else
											{	/* Unsafe/pcre.scm 128 */
												obj_t BgL_rxz00_1725;

												{	/* Unsafe/pcre.scm 128 */
													obj_t BgL_tmpz00_2676;

													if (STRINGP(BgL_patz00_1136))
														{	/* Unsafe/pcre.scm 128 */
															BgL_tmpz00_2676 = BgL_patz00_1136;
														}
													else
														{
															obj_t BgL_auxz00_2679;

															BgL_auxz00_2679 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string1875z00zz__regexpz00,
																BINT(((long) 5497)),
																BGl_string1885z00zz__regexpz00,
																BGl_string1880z00zz__regexpz00,
																BgL_patz00_1136);
															FAILURE(BgL_auxz00_2679, BFALSE, BFALSE);
														}
													BgL_rxz00_1725 =
														bgl_regcomp(BgL_tmpz00_2676, BNIL, ((bool_t) 0));
												}
												{	/* Unsafe/pcre.scm 128 */
													obj_t BgL_valz00_1726;

													{	/* Unsafe/pcre.scm 129 */
														int BgL_auxz00_2688;
														int BgL_auxz00_2686;
														char *BgL_tmpz00_2684;

														BgL_auxz00_2688 = (int) (BgL_endz00_1142);
														BgL_auxz00_2686 = (int) (((long) 0));
														BgL_tmpz00_2684 =
															BSTRING_TO_STRING(BgL_strz00_1723);
														BgL_valz00_1726 =
															BGL_REGEXP_MATCH(BgL_rxz00_1725, BgL_tmpz00_2684,
															((bool_t) 1), BgL_auxz00_2686, BgL_auxz00_2688);
													}
													{	/* Unsafe/pcre.scm 129 */

														BGL_REGEXP_FREE(BgL_rxz00_1725);
														return BgL_valz00_1726;
													}
												}
											}
									}
								}
							}
						}
						break;
					case ((long) 3):

						{	/* Unsafe/pcre.scm 148 */
							obj_t BgL_begz00_1143;

							BgL_begz00_1143 = VECTOR_REF(BgL_opt1111z00_28, ((long) 2));
							{	/* Unsafe/pcre.scm 148 */
								long BgL_endz00_1144;

								{	/* Unsafe/pcre.scm 148 */
									obj_t BgL_stringz00_1728;

									if (STRINGP(BgL_strz00_1137))
										{	/* Unsafe/pcre.scm 148 */
											BgL_stringz00_1728 = BgL_strz00_1137;
										}
									else
										{
											obj_t BgL_auxz00_2695;

											BgL_auxz00_2695 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string1875z00zz__regexpz00, BINT(((long) 6540)),
												BGl_string1885z00zz__regexpz00,
												BGl_string1880z00zz__regexpz00, BgL_strz00_1137);
											FAILURE(BgL_auxz00_2695, BFALSE, BFALSE);
										}
									BgL_endz00_1144 = STRING_LENGTH(BgL_stringz00_1728);
								}
								{	/* Unsafe/pcre.scm 148 */

									{	/* Unsafe/pcre.scm 148 */
										obj_t BgL_strz00_1730;

										if (STRINGP(BgL_strz00_1137))
											{	/* Unsafe/pcre.scm 148 */
												BgL_strz00_1730 = BgL_strz00_1137;
											}
										else
											{
												obj_t BgL_auxz00_2702;

												BgL_auxz00_2702 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string1875z00zz__regexpz00, BINT(((long) 6485)),
													BGl_string1885z00zz__regexpz00,
													BGl_string1880z00zz__regexpz00, BgL_strz00_1137);
												FAILURE(BgL_auxz00_2702, BFALSE, BFALSE);
											}
										{	/* Unsafe/pcre.scm 126 */
											bool_t BgL_test1958z00_2706;

											{	/* Unsafe/pcre.scm 126 */
												bool_t BgL_res1661z00_1734;

												BgL_res1661z00_1734 = BGL_REGEXPP(BgL_patz00_1136);
												BgL_test1958z00_2706 = BgL_res1661z00_1734;
											}
											if (BgL_test1958z00_2706)
												{	/* Unsafe/pcre.scm 127 */
													int BgL_auxz00_2726;
													int BgL_auxz00_2717;
													char *BgL_auxz00_2715;
													obj_t BgL_tmpz00_2708;

													BgL_auxz00_2726 = (int) (BgL_endz00_1144);
													{	/* Unsafe/pcre.scm 127 */
														obj_t BgL_tmpz00_2718;

														if (INTEGERP(BgL_begz00_1143))
															{	/* Unsafe/pcre.scm 127 */
																BgL_tmpz00_2718 = BgL_begz00_1143;
															}
														else
															{
																obj_t BgL_auxz00_2721;

																BgL_auxz00_2721 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string1875z00zz__regexpz00,
																	BINT(((long) 5460)),
																	BGl_string1885z00zz__regexpz00,
																	BGl_string1882z00zz__regexpz00,
																	BgL_begz00_1143);
																FAILURE(BgL_auxz00_2721, BFALSE, BFALSE);
															}
														BgL_auxz00_2717 = CINT(BgL_tmpz00_2718);
													}
													BgL_auxz00_2715 = BSTRING_TO_STRING(BgL_strz00_1730);
													if (BGl_regexpzf3zf3zz__regexpz00(BgL_patz00_1136))
														{	/* Unsafe/pcre.scm 127 */
															BgL_tmpz00_2708 = BgL_patz00_1136;
														}
													else
														{
															obj_t BgL_auxz00_2711;

															BgL_auxz00_2711 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string1875z00zz__regexpz00,
																BINT(((long) 5444)),
																BGl_string1885z00zz__regexpz00,
																BGl_string1877z00zz__regexpz00,
																BgL_patz00_1136);
															FAILURE(BgL_auxz00_2711, BFALSE, BFALSE);
														}
													return
														BGL_REGEXP_MATCH(BgL_tmpz00_2708, BgL_auxz00_2715,
														((bool_t) 1), BgL_auxz00_2717, BgL_auxz00_2726);
												}
											else
												{	/* Unsafe/pcre.scm 128 */
													obj_t BgL_rxz00_1732;

													{	/* Unsafe/pcre.scm 128 */
														obj_t BgL_tmpz00_2729;

														if (STRINGP(BgL_patz00_1136))
															{	/* Unsafe/pcre.scm 128 */
																BgL_tmpz00_2729 = BgL_patz00_1136;
															}
														else
															{
																obj_t BgL_auxz00_2732;

																BgL_auxz00_2732 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string1875z00zz__regexpz00,
																	BINT(((long) 5497)),
																	BGl_string1885z00zz__regexpz00,
																	BGl_string1880z00zz__regexpz00,
																	BgL_patz00_1136);
																FAILURE(BgL_auxz00_2732, BFALSE, BFALSE);
															}
														BgL_rxz00_1732 =
															bgl_regcomp(BgL_tmpz00_2729, BNIL, ((bool_t) 0));
													}
													{	/* Unsafe/pcre.scm 128 */
														obj_t BgL_valz00_1733;

														{	/* Unsafe/pcre.scm 129 */
															int BgL_auxz00_2748;
															int BgL_auxz00_2739;
															char *BgL_tmpz00_2737;

															BgL_auxz00_2748 = (int) (BgL_endz00_1144);
															{	/* Unsafe/pcre.scm 129 */
																obj_t BgL_tmpz00_2740;

																if (INTEGERP(BgL_begz00_1143))
																	{	/* Unsafe/pcre.scm 129 */
																		BgL_tmpz00_2740 = BgL_begz00_1143;
																	}
																else
																	{
																		obj_t BgL_auxz00_2743;

																		BgL_auxz00_2743 =
																			BGl_typezd2errorzd2zz__errorz00
																			(BGl_string1875z00zz__regexpz00,
																			BINT(((long) 5548)),
																			BGl_string1885z00zz__regexpz00,
																			BGl_string1882z00zz__regexpz00,
																			BgL_begz00_1143);
																		FAILURE(BgL_auxz00_2743, BFALSE, BFALSE);
																	}
																BgL_auxz00_2739 = CINT(BgL_tmpz00_2740);
															}
															BgL_tmpz00_2737 =
																BSTRING_TO_STRING(BgL_strz00_1730);
															BgL_valz00_1733 =
																BGL_REGEXP_MATCH(BgL_rxz00_1732,
																BgL_tmpz00_2737, ((bool_t) 1), BgL_auxz00_2739,
																BgL_auxz00_2748);
														}
														{	/* Unsafe/pcre.scm 129 */

															BGL_REGEXP_FREE(BgL_rxz00_1732);
															return BgL_valz00_1733;
														}
													}
												}
										}
									}
								}
							}
						}
						break;
					case ((long) 4):

						{	/* Unsafe/pcre.scm 148 */
							obj_t BgL_begz00_1145;

							BgL_begz00_1145 = VECTOR_REF(BgL_opt1111z00_28, ((long) 2));
							{	/* Unsafe/pcre.scm 148 */
								obj_t BgL_endz00_1146;

								BgL_endz00_1146 = VECTOR_REF(BgL_opt1111z00_28, ((long) 3));
								{	/* Unsafe/pcre.scm 148 */

									{	/* Unsafe/pcre.scm 148 */
										obj_t BgL_strz00_1735;

										if (STRINGP(BgL_strz00_1137))
											{	/* Unsafe/pcre.scm 148 */
												BgL_strz00_1735 = BgL_strz00_1137;
											}
										else
											{
												obj_t BgL_auxz00_2756;

												BgL_auxz00_2756 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string1875z00zz__regexpz00, BINT(((long) 6485)),
													BGl_string1885z00zz__regexpz00,
													BGl_string1880z00zz__regexpz00, BgL_strz00_1137);
												FAILURE(BgL_auxz00_2756, BFALSE, BFALSE);
											}
										{	/* Unsafe/pcre.scm 126 */
											bool_t BgL_test1964z00_2760;

											{	/* Unsafe/pcre.scm 126 */
												bool_t BgL_res1662z00_1739;

												BgL_res1662z00_1739 = BGL_REGEXPP(BgL_patz00_1136);
												BgL_test1964z00_2760 = BgL_res1662z00_1739;
											}
											if (BgL_test1964z00_2760)
												{	/* Unsafe/pcre.scm 127 */
													int BgL_auxz00_2780;
													int BgL_auxz00_2771;
													char *BgL_auxz00_2769;
													obj_t BgL_tmpz00_2762;

													{	/* Unsafe/pcre.scm 127 */
														obj_t BgL_tmpz00_2781;

														if (INTEGERP(BgL_endz00_1146))
															{	/* Unsafe/pcre.scm 127 */
																BgL_tmpz00_2781 = BgL_endz00_1146;
															}
														else
															{
																obj_t BgL_auxz00_2784;

																BgL_auxz00_2784 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string1875z00zz__regexpz00,
																	BINT(((long) 5464)),
																	BGl_string1885z00zz__regexpz00,
																	BGl_string1882z00zz__regexpz00,
																	BgL_endz00_1146);
																FAILURE(BgL_auxz00_2784, BFALSE, BFALSE);
															}
														BgL_auxz00_2780 = CINT(BgL_tmpz00_2781);
													}
													{	/* Unsafe/pcre.scm 127 */
														obj_t BgL_tmpz00_2772;

														if (INTEGERP(BgL_begz00_1145))
															{	/* Unsafe/pcre.scm 127 */
																BgL_tmpz00_2772 = BgL_begz00_1145;
															}
														else
															{
																obj_t BgL_auxz00_2775;

																BgL_auxz00_2775 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string1875z00zz__regexpz00,
																	BINT(((long) 5460)),
																	BGl_string1885z00zz__regexpz00,
																	BGl_string1882z00zz__regexpz00,
																	BgL_begz00_1145);
																FAILURE(BgL_auxz00_2775, BFALSE, BFALSE);
															}
														BgL_auxz00_2771 = CINT(BgL_tmpz00_2772);
													}
													BgL_auxz00_2769 = BSTRING_TO_STRING(BgL_strz00_1735);
													if (BGl_regexpzf3zf3zz__regexpz00(BgL_patz00_1136))
														{	/* Unsafe/pcre.scm 127 */
															BgL_tmpz00_2762 = BgL_patz00_1136;
														}
													else
														{
															obj_t BgL_auxz00_2765;

															BgL_auxz00_2765 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string1875z00zz__regexpz00,
																BINT(((long) 5444)),
																BGl_string1885z00zz__regexpz00,
																BGl_string1877z00zz__regexpz00,
																BgL_patz00_1136);
															FAILURE(BgL_auxz00_2765, BFALSE, BFALSE);
														}
													return
														BGL_REGEXP_MATCH(BgL_tmpz00_2762, BgL_auxz00_2769,
														((bool_t) 1), BgL_auxz00_2771, BgL_auxz00_2780);
												}
											else
												{	/* Unsafe/pcre.scm 128 */
													obj_t BgL_rxz00_1737;

													{	/* Unsafe/pcre.scm 128 */
														obj_t BgL_tmpz00_2790;

														if (STRINGP(BgL_patz00_1136))
															{	/* Unsafe/pcre.scm 128 */
																BgL_tmpz00_2790 = BgL_patz00_1136;
															}
														else
															{
																obj_t BgL_auxz00_2793;

																BgL_auxz00_2793 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string1875z00zz__regexpz00,
																	BINT(((long) 5497)),
																	BGl_string1885z00zz__regexpz00,
																	BGl_string1880z00zz__regexpz00,
																	BgL_patz00_1136);
																FAILURE(BgL_auxz00_2793, BFALSE, BFALSE);
															}
														BgL_rxz00_1737 =
															bgl_regcomp(BgL_tmpz00_2790, BNIL, ((bool_t) 0));
													}
													{	/* Unsafe/pcre.scm 128 */
														obj_t BgL_valz00_1738;

														{	/* Unsafe/pcre.scm 129 */
															int BgL_auxz00_2809;
															int BgL_auxz00_2800;
															char *BgL_tmpz00_2798;

															{	/* Unsafe/pcre.scm 129 */
																obj_t BgL_tmpz00_2810;

																if (INTEGERP(BgL_endz00_1146))
																	{	/* Unsafe/pcre.scm 129 */
																		BgL_tmpz00_2810 = BgL_endz00_1146;
																	}
																else
																	{
																		obj_t BgL_auxz00_2813;

																		BgL_auxz00_2813 =
																			BGl_typezd2errorzd2zz__errorz00
																			(BGl_string1875z00zz__regexpz00,
																			BINT(((long) 5552)),
																			BGl_string1885z00zz__regexpz00,
																			BGl_string1882z00zz__regexpz00,
																			BgL_endz00_1146);
																		FAILURE(BgL_auxz00_2813, BFALSE, BFALSE);
																	}
																BgL_auxz00_2809 = CINT(BgL_tmpz00_2810);
															}
															{	/* Unsafe/pcre.scm 129 */
																obj_t BgL_tmpz00_2801;

																if (INTEGERP(BgL_begz00_1145))
																	{	/* Unsafe/pcre.scm 129 */
																		BgL_tmpz00_2801 = BgL_begz00_1145;
																	}
																else
																	{
																		obj_t BgL_auxz00_2804;

																		BgL_auxz00_2804 =
																			BGl_typezd2errorzd2zz__errorz00
																			(BGl_string1875z00zz__regexpz00,
																			BINT(((long) 5548)),
																			BGl_string1885z00zz__regexpz00,
																			BGl_string1882z00zz__regexpz00,
																			BgL_begz00_1145);
																		FAILURE(BgL_auxz00_2804, BFALSE, BFALSE);
																	}
																BgL_auxz00_2800 = CINT(BgL_tmpz00_2801);
															}
															BgL_tmpz00_2798 =
																BSTRING_TO_STRING(BgL_strz00_1735);
															BgL_valz00_1738 =
																BGL_REGEXP_MATCH(BgL_rxz00_1737,
																BgL_tmpz00_2798, ((bool_t) 1), BgL_auxz00_2800,
																BgL_auxz00_2809);
														}
														{	/* Unsafe/pcre.scm 129 */

															BGL_REGEXP_FREE(BgL_rxz00_1737);
															return BgL_valz00_1738;
														}
													}
												}
										}
									}
								}
							}
						}
						break;
					default:
						return BUNSPEC;
					}
			}
		}

	}



/* pregexp-match */
	BGL_EXPORTED_DEF obj_t BGl_pregexpzd2matchzd2zz__regexpz00(obj_t
		BgL_patz00_24, obj_t BgL_strz00_25, obj_t BgL_begz00_26,
		obj_t BgL_endz00_27)
	{
		{	/* Unsafe/pcre.scm 148 */
			{	/* Unsafe/pcre.scm 126 */
				bool_t BgL_test1971z00_2822;

				{	/* Unsafe/pcre.scm 126 */
					bool_t BgL_res1663z00_1743;

					BgL_res1663z00_1743 = BGL_REGEXPP(BgL_patz00_24);
					BgL_test1971z00_2822 = BgL_res1663z00_1743;
				}
				if (BgL_test1971z00_2822)
					{	/* Unsafe/pcre.scm 127 */
						int BgL_auxz00_2828;
						int BgL_auxz00_2826;
						char *BgL_tmpz00_2824;

						BgL_auxz00_2828 = CINT(BgL_endz00_27);
						BgL_auxz00_2826 = CINT(BgL_begz00_26);
						BgL_tmpz00_2824 = BSTRING_TO_STRING(BgL_strz00_25);
						return
							BGL_REGEXP_MATCH(BgL_patz00_24, BgL_tmpz00_2824, ((bool_t) 1),
							BgL_auxz00_2826, BgL_auxz00_2828);
					}
				else
					{	/* Unsafe/pcre.scm 128 */
						obj_t BgL_rxz00_1741;

						BgL_rxz00_1741 = bgl_regcomp(BgL_patz00_24, BNIL, ((bool_t) 0));
						{	/* Unsafe/pcre.scm 128 */
							obj_t BgL_valz00_1742;

							{	/* Unsafe/pcre.scm 129 */
								int BgL_auxz00_2836;
								int BgL_auxz00_2834;
								char *BgL_tmpz00_2832;

								BgL_auxz00_2836 = CINT(BgL_endz00_27);
								BgL_auxz00_2834 = CINT(BgL_begz00_26);
								BgL_tmpz00_2832 = BSTRING_TO_STRING(BgL_strz00_25);
								BgL_valz00_1742 =
									BGL_REGEXP_MATCH(BgL_rxz00_1741, BgL_tmpz00_2832,
									((bool_t) 1), BgL_auxz00_2834, BgL_auxz00_2836);
							}
							{	/* Unsafe/pcre.scm 129 */

								BGL_REGEXP_FREE(BgL_rxz00_1741);
								return BgL_valz00_1742;
							}
						}
					}
			}
		}

	}



/* pregexp-read-escaped-number */
	obj_t BGl_pregexpzd2readzd2escapedzd2numberzd2zz__regexpz00(obj_t BgL_sz00_30,
		obj_t BgL_iz00_31, long BgL_nz00_32)
	{
		{	/* Unsafe/pcre.scm 154 */
			if ((((long) CINT(BgL_iz00_31) + ((long) 1)) < BgL_nz00_32))
				{	/* Unsafe/pcre.scm 157 */
					unsigned char BgL_cz00_1148;

					BgL_cz00_1148 =
						STRING_REF(BgL_sz00_30, ((long) CINT(BgL_iz00_31) + ((long) 1)));
					{	/* Unsafe/pcre.scm 158 */
						bool_t BgL_test1973z00_2847;

						{	/* Unsafe/pcre.scm 158 */
							bool_t BgL_res1668z00_1755;

							BgL_res1668z00_1755 = isdigit(BgL_cz00_1148);
							BgL_test1973z00_2847 = BgL_res1668z00_1755;
						}
						if (BgL_test1973z00_2847)
							{	/* Unsafe/pcre.scm 159 */
								long BgL_g1046z00_1150;
								obj_t BgL_g1047z00_1151;

								BgL_g1046z00_1150 = ((long) CINT(BgL_iz00_31) + ((long) 2));
								{	/* Unsafe/pcre.scm 159 */
									obj_t BgL_list1230z00_1176;

									BgL_list1230z00_1176 =
										MAKE_YOUNG_PAIR(BCHAR(BgL_cz00_1148), BNIL);
									BgL_g1047z00_1151 = BgL_list1230z00_1176;
								}
								{
									long BgL_iz00_1153;
									obj_t BgL_rz00_1154;

									BgL_iz00_1153 = BgL_g1046z00_1150;
									BgL_rz00_1154 = BgL_g1047z00_1151;
								BgL_zc3z04anonymousza31194ze3z87_1155:
									if ((BgL_iz00_1153 >= BgL_nz00_32))
										{	/* Unsafe/pcre.scm 161 */
											obj_t BgL_arg1197z00_1157;

											{	/* Unsafe/pcre.scm 161 */
												obj_t BgL_arg1208z00_1160;

												BgL_arg1208z00_1160 =
													BGl_listzd2ze3stringz31zz__r4_strings_6_7z00
													(bgl_reverse_bang(BgL_rz00_1154));
												{	/* Ieee/number.scm 165 */

													BgL_arg1197z00_1157 =
														BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00
														(BgL_arg1208z00_1160, BINT(((long) 10)));
											}}
											{	/* Unsafe/pcre.scm 161 */
												obj_t BgL_list1198z00_1158;

												{	/* Unsafe/pcre.scm 161 */
													obj_t BgL_arg1201z00_1159;

													BgL_arg1201z00_1159 =
														MAKE_YOUNG_PAIR(BINT(BgL_iz00_1153), BNIL);
													BgL_list1198z00_1158 =
														MAKE_YOUNG_PAIR(BgL_arg1197z00_1157,
														BgL_arg1201z00_1159);
												}
												return BgL_list1198z00_1158;
											}
										}
									else
										{	/* Unsafe/pcre.scm 162 */
											unsigned char BgL_cz00_1164;

											BgL_cz00_1164 = STRING_REF(BgL_sz00_30, BgL_iz00_1153);
											{	/* Unsafe/pcre.scm 163 */
												bool_t BgL_test1975z00_2863;

												{	/* Unsafe/pcre.scm 163 */
													bool_t BgL_res1674z00_1767;

													BgL_res1674z00_1767 = isdigit(BgL_cz00_1164);
													BgL_test1975z00_2863 = BgL_res1674z00_1767;
												}
												if (BgL_test1975z00_2863)
													{	/* Unsafe/pcre.scm 164 */
														long BgL_arg1216z00_1166;
														obj_t BgL_arg1221z00_1167;

														BgL_arg1216z00_1166 = (BgL_iz00_1153 + ((long) 1));
														BgL_arg1221z00_1167 =
															MAKE_YOUNG_PAIR(BCHAR(BgL_cz00_1164),
															BgL_rz00_1154);
														{
															obj_t BgL_rz00_2869;
															long BgL_iz00_2868;

															BgL_iz00_2868 = BgL_arg1216z00_1166;
															BgL_rz00_2869 = BgL_arg1221z00_1167;
															BgL_rz00_1154 = BgL_rz00_2869;
															BgL_iz00_1153 = BgL_iz00_2868;
															goto BgL_zc3z04anonymousza31194ze3z87_1155;
														}
													}
												else
													{	/* Unsafe/pcre.scm 165 */
														obj_t BgL_arg1223z00_1168;

														{	/* Unsafe/pcre.scm 165 */
															obj_t BgL_arg1227z00_1171;

															BgL_arg1227z00_1171 =
																BGl_listzd2ze3stringz31zz__r4_strings_6_7z00
																(bgl_reverse_bang(BgL_rz00_1154));
															{	/* Ieee/number.scm 165 */

																BgL_arg1223z00_1168 =
																	BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00
																	(BgL_arg1227z00_1171, BINT(((long) 10)));
														}}
														{	/* Unsafe/pcre.scm 165 */
															obj_t BgL_list1224z00_1169;

															{	/* Unsafe/pcre.scm 165 */
																obj_t BgL_arg1225z00_1170;

																BgL_arg1225z00_1170 =
																	MAKE_YOUNG_PAIR(BINT(BgL_iz00_1153), BNIL);
																BgL_list1224z00_1169 =
																	MAKE_YOUNG_PAIR(BgL_arg1223z00_1168,
																	BgL_arg1225z00_1170);
															}
															return BgL_list1224z00_1169;
														}
													}
											}
										}
								}
							}
						else
							{	/* Unsafe/pcre.scm 158 */
								return BFALSE;
							}
					}
				}
			else
				{	/* Unsafe/pcre.scm 156 */
					return BFALSE;
				}
		}

	}



/* pregexp-list-ref */
	obj_t BGl_pregexpzd2listzd2refz00zz__regexpz00(obj_t BgL_sz00_33,
		obj_t BgL_iz00_34)
	{
		{	/* Unsafe/pcre.scm 171 */
			{
				obj_t BgL_sz00_1796;
				long BgL_kz00_1797;

				BgL_sz00_1796 = BgL_sz00_33;
				BgL_kz00_1797 = ((long) 0);
			BgL_loopz00_1795:
				if (NULLP(BgL_sz00_1796))
					{	/* Unsafe/pcre.scm 175 */
						return BFALSE;
					}
				else
					{	/* Unsafe/pcre.scm 175 */
						if ((BgL_kz00_1797 == (long) CINT(BgL_iz00_34)))
							{	/* Unsafe/pcre.scm 176 */
								return CAR(((obj_t) BgL_sz00_1796));
							}
						else
							{
								long BgL_kz00_2887;
								obj_t BgL_sz00_2884;

								BgL_sz00_2884 = CDR(((obj_t) BgL_sz00_1796));
								BgL_kz00_2887 = (BgL_kz00_1797 + ((long) 1));
								BgL_kz00_1797 = BgL_kz00_2887;
								BgL_sz00_1796 = BgL_sz00_2884;
								goto BgL_loopz00_1795;
							}
					}
			}
		}

	}



/* pregexp-replace-aux */
	obj_t BGl_pregexpzd2replacezd2auxz00zz__regexpz00(obj_t BgL_strz00_35,
		obj_t BgL_insz00_36, long BgL_nz00_37, obj_t BgL_backrefsz00_38)
	{
		{	/* Unsafe/pcre.scm 182 */
			{
				obj_t BgL_iz00_1189;
				obj_t BgL_rz00_1190;

				BgL_iz00_1189 = BINT(((long) 0));
				BgL_rz00_1190 = BGl_string1886z00zz__regexpz00;
			BgL_zc3z04anonymousza31246ze3z87_1191:
				if (((long) CINT(BgL_iz00_1189) >= BgL_nz00_37))
					{	/* Unsafe/pcre.scm 184 */
						return BgL_rz00_1190;
					}
				else
					{	/* Unsafe/pcre.scm 185 */
						unsigned char BgL_cz00_1193;

						BgL_cz00_1193 =
							STRING_REF(BgL_insz00_36, (long) CINT(BgL_iz00_1189));
						if ((BgL_cz00_1193 == ((unsigned char) '\\')))
							{	/* Unsafe/pcre.scm 187 */
								obj_t BgL_brzd2izd2_1195;

								BgL_brzd2izd2_1195 =
									BGl_pregexpzd2readzd2escapedzd2numberzd2zz__regexpz00
									(BgL_insz00_36, BgL_iz00_1189, BgL_nz00_37);
								{	/* Unsafe/pcre.scm 187 */
									obj_t BgL_brz00_1196;

									if (CBOOL(BgL_brzd2izd2_1195))
										{	/* Unsafe/pcre.scm 188 */
											BgL_brz00_1196 = CAR(((obj_t) BgL_brzd2izd2_1195));
										}
									else
										{	/* Unsafe/pcre.scm 188 */
											if (
												(STRING_REF(BgL_insz00_36,
														((long) CINT(BgL_iz00_1189) + ((long) 1))) ==
													((unsigned char) '&')))
												{	/* Unsafe/pcre.scm 189 */
													BgL_brz00_1196 = BINT(((long) 0));
												}
											else
												{	/* Unsafe/pcre.scm 189 */
													BgL_brz00_1196 = BFALSE;
												}
										}
									{	/* Unsafe/pcre.scm 188 */
										obj_t BgL_iz00_1197;

										if (CBOOL(BgL_brzd2izd2_1195))
											{	/* Unsafe/pcre.scm 191 */
												obj_t BgL_pairz00_1835;

												BgL_pairz00_1835 = CDR(((obj_t) BgL_brzd2izd2_1195));
												BgL_iz00_1197 = CAR(BgL_pairz00_1835);
											}
										else
											{	/* Unsafe/pcre.scm 191 */
												if (CBOOL(BgL_brz00_1196))
													{	/* Unsafe/pcre.scm 192 */
														BgL_iz00_1197 =
															ADDFX(BgL_iz00_1189, BINT(((long) 2)));
													}
												else
													{	/* Unsafe/pcre.scm 192 */
														BgL_iz00_1197 =
															ADDFX(BgL_iz00_1189, BINT(((long) 1)));
											}}
										{	/* Unsafe/pcre.scm 191 */

											if (CBOOL(BgL_brz00_1196))
												{	/* Unsafe/pcre.scm 200 */
													obj_t BgL_arg1250z00_1198;

													{	/* Unsafe/pcre.scm 200 */
														obj_t BgL_backrefz00_1199;

														BgL_backrefz00_1199 =
															BGl_pregexpzd2listzd2refz00zz__regexpz00
															(BgL_backrefsz00_38, BgL_brz00_1196);
														if (CBOOL(BgL_backrefz00_1199))
															{	/* Unsafe/pcre.scm 203 */
																obj_t BgL_arg1252z00_1200;

																{	/* Unsafe/pcre.scm 203 */
																	obj_t BgL_arg1253z00_1201;
																	obj_t BgL_arg1254z00_1202;

																	BgL_arg1253z00_1201 =
																		CAR(((obj_t) BgL_backrefz00_1199));
																	BgL_arg1254z00_1202 =
																		CDR(((obj_t) BgL_backrefz00_1199));
																	BgL_arg1252z00_1200 =
																		c_substring(BgL_strz00_35,
																		(long) CINT(BgL_arg1253z00_1201),
																		(long) CINT(BgL_arg1254z00_1202));
																}
																BgL_arg1250z00_1198 =
																	string_append(BgL_rz00_1190,
																	BgL_arg1252z00_1200);
															}
														else
															{	/* Unsafe/pcre.scm 201 */
																BgL_arg1250z00_1198 = BgL_rz00_1190;
															}
													}
													{
														obj_t BgL_rz00_2932;
														obj_t BgL_iz00_2931;

														BgL_iz00_2931 = BgL_iz00_1197;
														BgL_rz00_2932 = BgL_arg1250z00_1198;
														BgL_rz00_1190 = BgL_rz00_2932;
														BgL_iz00_1189 = BgL_iz00_2931;
														goto BgL_zc3z04anonymousza31246ze3z87_1191;
													}
												}
											else
												{	/* Unsafe/pcre.scm 195 */
													unsigned char BgL_c2z00_1203;

													BgL_c2z00_1203 =
														STRING_REF(BgL_insz00_36,
														(long) CINT(BgL_iz00_1197));
													{	/* Unsafe/pcre.scm 196 */
														long BgL_arg1256z00_1204;
														obj_t BgL_arg1258z00_1205;

														BgL_arg1256z00_1204 =
															((long) CINT(BgL_iz00_1197) + ((long) 1));
														if ((BgL_c2z00_1203 == ((unsigned char) '$')))
															{	/* Unsafe/pcre.scm 197 */
																BgL_arg1258z00_1205 = BgL_rz00_1190;
															}
														else
															{	/* Unsafe/pcre.scm 198 */
																obj_t BgL_arg1263z00_1207;

																{	/* Unsafe/pcre.scm 198 */
																	obj_t BgL_list1264z00_1208;

																	BgL_list1264z00_1208 =
																		MAKE_YOUNG_PAIR(BCHAR(BgL_c2z00_1203),
																		BNIL);
																	BgL_arg1263z00_1207 =
																		BGl_listzd2ze3stringz31zz__r4_strings_6_7z00
																		(BgL_list1264z00_1208);
																}
																BgL_arg1258z00_1205 =
																	string_append(BgL_rz00_1190,
																	BgL_arg1263z00_1207);
															}
														{
															obj_t BgL_rz00_2945;
															obj_t BgL_iz00_2943;

															BgL_iz00_2943 = BINT(BgL_arg1256z00_1204);
															BgL_rz00_2945 = BgL_arg1258z00_1205;
															BgL_rz00_1190 = BgL_rz00_2945;
															BgL_iz00_1189 = BgL_iz00_2943;
															goto BgL_zc3z04anonymousza31246ze3z87_1191;
														}
													}
												}
										}
									}
								}
							}
						else
							{	/* Unsafe/pcre.scm 205 */
								long BgL_arg1275z00_1214;
								obj_t BgL_arg1276z00_1215;

								BgL_arg1275z00_1214 = ((long) CINT(BgL_iz00_1189) + ((long) 1));
								{	/* Unsafe/pcre.scm 205 */
									obj_t BgL_arg1277z00_1216;

									{	/* Unsafe/pcre.scm 205 */
										obj_t BgL_list1278z00_1217;

										BgL_list1278z00_1217 =
											MAKE_YOUNG_PAIR(BCHAR(BgL_cz00_1193), BNIL);
										BgL_arg1277z00_1216 =
											BGl_listzd2ze3stringz31zz__r4_strings_6_7z00
											(BgL_list1278z00_1217);
									}
									BgL_arg1276z00_1215 =
										string_append(BgL_rz00_1190, BgL_arg1277z00_1216);
								}
								{
									obj_t BgL_rz00_2954;
									obj_t BgL_iz00_2952;

									BgL_iz00_2952 = BINT(BgL_arg1275z00_1214);
									BgL_rz00_2954 = BgL_arg1276z00_1215;
									BgL_rz00_1190 = BgL_rz00_2954;
									BgL_iz00_1189 = BgL_iz00_2952;
									goto BgL_zc3z04anonymousza31246ze3z87_1191;
								}
							}
					}
			}
		}

	}



/* pregexp-split */
	BGL_EXPORTED_DEF obj_t BGl_pregexpzd2splitzd2zz__regexpz00(obj_t
		BgL_patz00_39, obj_t BgL_strz00_40)
	{
		{	/* Unsafe/pcre.scm 210 */
			{	/* Unsafe/pcre.scm 212 */
				long BgL_nz00_1219;

				BgL_nz00_1219 = STRING_LENGTH(BgL_strz00_40);
				{
					obj_t BgL_iz00_1222;
					obj_t BgL_rz00_1223;
					bool_t BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_1224;

					BgL_iz00_1222 = BINT(((long) 0));
					BgL_rz00_1223 = BNIL;
					BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_1224 = ((bool_t) 0);
				BgL_zc3z04anonymousza31279ze3z87_1225:
					if (((long) CINT(BgL_iz00_1222) >= BgL_nz00_1219))
						{	/* Unsafe/pcre.scm 214 */
							return bgl_reverse_bang(BgL_rz00_1223);
						}
					else
						{	/* Unsafe/pcre.scm 215 */
							obj_t BgL_g1049z00_1227;

							{	/* Unsafe/pcre.scm 126 */
								bool_t BgL_test1988z00_2961;

								{	/* Unsafe/pcre.scm 126 */
									bool_t BgL_res1703z00_1867;

									BgL_res1703z00_1867 = BGL_REGEXPP(BgL_patz00_39);
									BgL_test1988z00_2961 = BgL_res1703z00_1867;
								}
								if (BgL_test1988z00_2961)
									{	/* Unsafe/pcre.scm 127 */
										int BgL_auxz00_2967;
										int BgL_auxz00_2965;
										char *BgL_tmpz00_2963;

										BgL_auxz00_2967 = (int) (BgL_nz00_1219);
										BgL_auxz00_2965 = CINT(BgL_iz00_1222);
										BgL_tmpz00_2963 = BSTRING_TO_STRING(BgL_strz00_40);
										BgL_g1049z00_1227 =
											BGL_REGEXP_MATCH(BgL_patz00_39, BgL_tmpz00_2963,
											((bool_t) 0), BgL_auxz00_2965, BgL_auxz00_2967);
									}
								else
									{	/* Unsafe/pcre.scm 128 */
										obj_t BgL_rxz00_1865;

										BgL_rxz00_1865 =
											bgl_regcomp(BgL_patz00_39, BNIL, ((bool_t) 0));
										{	/* Unsafe/pcre.scm 128 */
											obj_t BgL_valz00_1866;

											{	/* Unsafe/pcre.scm 129 */
												int BgL_auxz00_2975;
												int BgL_auxz00_2973;
												char *BgL_tmpz00_2971;

												BgL_auxz00_2975 = (int) (BgL_nz00_1219);
												BgL_auxz00_2973 = CINT(BgL_iz00_1222);
												BgL_tmpz00_2971 = BSTRING_TO_STRING(BgL_strz00_40);
												BgL_valz00_1866 =
													BGL_REGEXP_MATCH(BgL_rxz00_1865, BgL_tmpz00_2971,
													((bool_t) 0), BgL_auxz00_2973, BgL_auxz00_2975);
											}
											{	/* Unsafe/pcre.scm 129 */

												BGL_REGEXP_FREE(BgL_rxz00_1865);
												BgL_g1049z00_1227 = BgL_valz00_1866;
							}}}}
							if (CBOOL(BgL_g1049z00_1227))
								{	/* Unsafe/pcre.scm 218 */
									obj_t BgL_jkz00_1230;

									BgL_jkz00_1230 = CAR(((obj_t) BgL_g1049z00_1227));
									{	/* Unsafe/pcre.scm 219 */
										obj_t BgL_jz00_1231;
										obj_t BgL_kz00_1232;

										BgL_jz00_1231 = CAR(((obj_t) BgL_jkz00_1230));
										BgL_kz00_1232 = CDR(((obj_t) BgL_jkz00_1230));
										if (
											((long) CINT(BgL_jz00_1231) ==
												(long) CINT(BgL_kz00_1232)))
											{	/* Unsafe/pcre.scm 221 */
												long BgL_arg1282z00_1234;
												obj_t BgL_arg1284z00_1235;

												BgL_arg1282z00_1234 =
													((long) CINT(BgL_kz00_1232) + ((long) 1));
												BgL_arg1284z00_1235 =
													MAKE_YOUNG_PAIR(c_substring(BgL_strz00_40,
														(long) CINT(BgL_iz00_1222),
														((long) CINT(BgL_jz00_1231) + ((long) 1))),
													BgL_rz00_1223);
												{
													bool_t
														BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_3001;
													obj_t BgL_rz00_3000;
													obj_t BgL_iz00_2998;

													BgL_iz00_2998 = BINT(BgL_arg1282z00_1234);
													BgL_rz00_3000 = BgL_arg1284z00_1235;
													BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_3001
														= ((bool_t) 1);
													BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_1224
														=
														BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_3001;
													BgL_rz00_1223 = BgL_rz00_3000;
													BgL_iz00_1222 = BgL_iz00_2998;
													goto BgL_zc3z04anonymousza31279ze3z87_1225;
												}
											}
										else
											{	/* Unsafe/pcre.scm 223 */
												bool_t BgL_test1991z00_3002;

												if (
													((long) CINT(BgL_jz00_1231) ==
														(long) CINT(BgL_iz00_1222)))
													{	/* Unsafe/pcre.scm 223 */
														BgL_test1991z00_3002 =
															BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_1224;
													}
												else
													{	/* Unsafe/pcre.scm 223 */
														BgL_test1991z00_3002 = ((bool_t) 0);
													}
												if (BgL_test1991z00_3002)
													{
														bool_t
															BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_3008;
														obj_t BgL_iz00_3007;

														BgL_iz00_3007 = BgL_kz00_1232;
														BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_3008
															= ((bool_t) 0);
														BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_1224
															=
															BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_3008;
														BgL_iz00_1222 = BgL_iz00_3007;
														goto BgL_zc3z04anonymousza31279ze3z87_1225;
													}
												else
													{	/* Unsafe/pcre.scm 226 */
														obj_t BgL_arg1289z00_1240;

														BgL_arg1289z00_1240 =
															MAKE_YOUNG_PAIR(c_substring(BgL_strz00_40,
																(long) CINT(BgL_iz00_1222),
																(long) CINT(BgL_jz00_1231)), BgL_rz00_1223);
														{
															bool_t
																BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_3015;
															obj_t BgL_rz00_3014;
															obj_t BgL_iz00_3013;

															BgL_iz00_3013 = BgL_kz00_1232;
															BgL_rz00_3014 = BgL_arg1289z00_1240;
															BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_3015
																= ((bool_t) 0);
															BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_1224
																=
																BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_3015;
															BgL_rz00_1223 = BgL_rz00_3014;
															BgL_iz00_1222 = BgL_iz00_3013;
															goto BgL_zc3z04anonymousza31279ze3z87_1225;
														}
													}
											}
									}
								}
							else
								{	/* Unsafe/pcre.scm 227 */
									obj_t BgL_arg1291z00_1243;

									BgL_arg1291z00_1243 =
										MAKE_YOUNG_PAIR(c_substring(BgL_strz00_40,
											(long) CINT(BgL_iz00_1222), BgL_nz00_1219),
										BgL_rz00_1223);
									{
										bool_t
											BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_3022;
										obj_t BgL_rz00_3021;
										obj_t BgL_iz00_3019;

										BgL_iz00_3019 = BINT(BgL_nz00_1219);
										BgL_rz00_3021 = BgL_arg1291z00_1243;
										BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_3022 =
											((bool_t) 0);
										BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_1224 =
											BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_3022;
										BgL_rz00_1223 = BgL_rz00_3021;
										BgL_iz00_1222 = BgL_iz00_3019;
										goto BgL_zc3z04anonymousza31279ze3z87_1225;
									}
								}
						}
				}
			}
		}

	}



/* &pregexp-split */
	obj_t BGl_z62pregexpzd2splitzb0zz__regexpz00(obj_t BgL_envz00_2222,
		obj_t BgL_patz00_2223, obj_t BgL_strz00_2224)
	{
		{	/* Unsafe/pcre.scm 210 */
			{	/* Unsafe/pcre.scm 212 */
				obj_t BgL_auxz00_3024;

				if (STRINGP(BgL_strz00_2224))
					{	/* Unsafe/pcre.scm 212 */
						BgL_auxz00_3024 = BgL_strz00_2224;
					}
				else
					{
						obj_t BgL_auxz00_3027;

						BgL_auxz00_3027 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1875z00zz__regexpz00,
							BINT(((long) 9011)), BGl_string1887z00zz__regexpz00,
							BGl_string1880z00zz__regexpz00, BgL_strz00_2224);
						FAILURE(BgL_auxz00_3027, BFALSE, BFALSE);
					}
				return
					BGl_pregexpzd2splitzd2zz__regexpz00(BgL_patz00_2223, BgL_auxz00_3024);
			}
		}

	}



/* pregexp-replace */
	BGL_EXPORTED_DEF obj_t BGl_pregexpzd2replacezd2zz__regexpz00(obj_t
		BgL_patz00_41, obj_t BgL_strz00_42, obj_t BgL_insz00_43)
	{
		{	/* Unsafe/pcre.scm 232 */
			{	/* Unsafe/pcre.scm 233 */
				long BgL_nz00_1246;

				BgL_nz00_1246 = STRING_LENGTH(BgL_strz00_42);
				{	/* Unsafe/pcre.scm 233 */
					obj_t BgL_ppz00_1247;

					{	/* Unsafe/pcre.scm 126 */
						bool_t BgL_test1994z00_3033;

						{	/* Unsafe/pcre.scm 126 */
							bool_t BgL_res1712z00_1899;

							BgL_res1712z00_1899 = BGL_REGEXPP(BgL_patz00_41);
							BgL_test1994z00_3033 = BgL_res1712z00_1899;
						}
						if (BgL_test1994z00_3033)
							{	/* Unsafe/pcre.scm 127 */
								int BgL_auxz00_3039;
								int BgL_auxz00_3037;
								char *BgL_tmpz00_3035;

								BgL_auxz00_3039 = (int) (BgL_nz00_1246);
								BgL_auxz00_3037 = (int) (((long) 0));
								BgL_tmpz00_3035 = BSTRING_TO_STRING(BgL_strz00_42);
								BgL_ppz00_1247 =
									BGL_REGEXP_MATCH(BgL_patz00_41, BgL_tmpz00_3035, ((bool_t) 0),
									BgL_auxz00_3037, BgL_auxz00_3039);
							}
						else
							{	/* Unsafe/pcre.scm 128 */
								obj_t BgL_rxz00_1897;

								BgL_rxz00_1897 = bgl_regcomp(BgL_patz00_41, BNIL, ((bool_t) 0));
								{	/* Unsafe/pcre.scm 128 */
									obj_t BgL_valz00_1898;

									{	/* Unsafe/pcre.scm 129 */
										int BgL_auxz00_3047;
										int BgL_auxz00_3045;
										char *BgL_tmpz00_3043;

										BgL_auxz00_3047 = (int) (BgL_nz00_1246);
										BgL_auxz00_3045 = (int) (((long) 0));
										BgL_tmpz00_3043 = BSTRING_TO_STRING(BgL_strz00_42);
										BgL_valz00_1898 =
											BGL_REGEXP_MATCH(BgL_rxz00_1897, BgL_tmpz00_3043,
											((bool_t) 0), BgL_auxz00_3045, BgL_auxz00_3047);
									}
									{	/* Unsafe/pcre.scm 129 */

										BGL_REGEXP_FREE(BgL_rxz00_1897);
										BgL_ppz00_1247 = BgL_valz00_1898;
					}}}}
					{	/* Unsafe/pcre.scm 234 */

						if (CBOOL(BgL_ppz00_1247))
							{	/* Unsafe/pcre.scm 236 */
								long BgL_inszd2lenzd2_1248;
								obj_t BgL_mzd2izd2_1249;
								obj_t BgL_mzd2nzd2_1250;

								BgL_inszd2lenzd2_1248 = STRING_LENGTH(BgL_insz00_43);
								{	/* Unsafe/pcre.scm 237 */
									obj_t BgL_pairz00_1905;

									BgL_pairz00_1905 = CAR(((obj_t) BgL_ppz00_1247));
									BgL_mzd2izd2_1249 = CAR(BgL_pairz00_1905);
								}
								{	/* Unsafe/pcre.scm 238 */
									obj_t BgL_pairz00_1909;

									BgL_pairz00_1909 = CAR(((obj_t) BgL_ppz00_1247));
									BgL_mzd2nzd2_1250 = CDR(BgL_pairz00_1909);
								}
								return
									string_append_3(c_substring(BgL_strz00_42, ((long) 0),
										(long) CINT(BgL_mzd2izd2_1249)),
									BGl_pregexpzd2replacezd2auxz00zz__regexpz00(BgL_strz00_42,
										BgL_insz00_43, BgL_inszd2lenzd2_1248, BgL_ppz00_1247),
									c_substring(BgL_strz00_42, (long) CINT(BgL_mzd2nzd2_1250),
										BgL_nz00_1246));
							}
						else
							{	/* Unsafe/pcre.scm 235 */
								return BgL_strz00_42;
							}
					}
				}
			}
		}

	}



/* &pregexp-replace */
	obj_t BGl_z62pregexpzd2replacezb0zz__regexpz00(obj_t BgL_envz00_2225,
		obj_t BgL_patz00_2226, obj_t BgL_strz00_2227, obj_t BgL_insz00_2228)
	{
		{	/* Unsafe/pcre.scm 232 */
			{	/* Unsafe/pcre.scm 233 */
				obj_t BgL_auxz00_3073;
				obj_t BgL_auxz00_3066;

				if (STRINGP(BgL_insz00_2228))
					{	/* Unsafe/pcre.scm 233 */
						BgL_auxz00_3073 = BgL_insz00_2228;
					}
				else
					{
						obj_t BgL_auxz00_3076;

						BgL_auxz00_3076 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1875z00zz__regexpz00,
							BINT(((long) 9827)), BGl_string1888z00zz__regexpz00,
							BGl_string1880z00zz__regexpz00, BgL_insz00_2228);
						FAILURE(BgL_auxz00_3076, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_strz00_2227))
					{	/* Unsafe/pcre.scm 233 */
						BgL_auxz00_3066 = BgL_strz00_2227;
					}
				else
					{
						obj_t BgL_auxz00_3069;

						BgL_auxz00_3069 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1875z00zz__regexpz00,
							BINT(((long) 9827)), BGl_string1888z00zz__regexpz00,
							BGl_string1880z00zz__regexpz00, BgL_strz00_2227);
						FAILURE(BgL_auxz00_3069, BFALSE, BFALSE);
					}
				return
					BGl_pregexpzd2replacezd2zz__regexpz00(BgL_patz00_2226,
					BgL_auxz00_3066, BgL_auxz00_3073);
			}
		}

	}



/* pregexp-replace* */
	BGL_EXPORTED_DEF obj_t BGl_pregexpzd2replaceza2z70zz__regexpz00(obj_t
		BgL_patz00_44, obj_t BgL_strz00_45, obj_t BgL_insz00_46)
	{
		{	/* Unsafe/pcre.scm 247 */
			{	/* Unsafe/pcre.scm 250 */
				obj_t BgL_patz00_1254;
				long BgL_nz00_1255;
				long BgL_inszd2lenzd2_1256;

				if (STRINGP(BgL_patz00_44))
					{	/* Unsafe/pcre.scm 250 */
						BgL_patz00_1254 = bgl_regcomp(BgL_patz00_44, BNIL, ((bool_t) 1));
					}
				else
					{	/* Unsafe/pcre.scm 250 */
						BgL_patz00_1254 = BgL_patz00_44;
					}
				BgL_nz00_1255 = STRING_LENGTH(BgL_strz00_45);
				BgL_inszd2lenzd2_1256 = STRING_LENGTH(BgL_insz00_46);
				{
					obj_t BgL_iz00_1258;
					obj_t BgL_rz00_1259;

					BgL_iz00_1258 = BINT(((long) 0));
					BgL_rz00_1259 = BGl_string1886z00zz__regexpz00;
				BgL_zc3z04anonymousza31298ze3z87_1260:
					if (((long) CINT(BgL_iz00_1258) >= BgL_nz00_1255))
						{	/* Unsafe/pcre.scm 256 */
							return BgL_rz00_1259;
						}
					else
						{	/* Unsafe/pcre.scm 257 */
							obj_t BgL_ppz00_1262;

							{	/* Unsafe/pcre.scm 126 */
								bool_t BgL_test2000z00_3089;

								{	/* Unsafe/pcre.scm 126 */
									bool_t BgL_res1720z00_1930;

									BgL_res1720z00_1930 = BGL_REGEXPP(BgL_patz00_1254);
									BgL_test2000z00_3089 = BgL_res1720z00_1930;
								}
								if (BgL_test2000z00_3089)
									{	/* Unsafe/pcre.scm 127 */
										int BgL_auxz00_3095;
										int BgL_auxz00_3093;
										char *BgL_tmpz00_3091;

										BgL_auxz00_3095 = (int) (BgL_nz00_1255);
										BgL_auxz00_3093 = CINT(BgL_iz00_1258);
										BgL_tmpz00_3091 = BSTRING_TO_STRING(BgL_strz00_45);
										BgL_ppz00_1262 =
											BGL_REGEXP_MATCH(BgL_patz00_1254, BgL_tmpz00_3091,
											((bool_t) 0), BgL_auxz00_3093, BgL_auxz00_3095);
									}
								else
									{	/* Unsafe/pcre.scm 128 */
										obj_t BgL_rxz00_1928;

										BgL_rxz00_1928 =
											bgl_regcomp(BgL_patz00_1254, BNIL, ((bool_t) 0));
										{	/* Unsafe/pcre.scm 128 */
											obj_t BgL_valz00_1929;

											{	/* Unsafe/pcre.scm 129 */
												int BgL_auxz00_3103;
												int BgL_auxz00_3101;
												char *BgL_tmpz00_3099;

												BgL_auxz00_3103 = (int) (BgL_nz00_1255);
												BgL_auxz00_3101 = CINT(BgL_iz00_1258);
												BgL_tmpz00_3099 = BSTRING_TO_STRING(BgL_strz00_45);
												BgL_valz00_1929 =
													BGL_REGEXP_MATCH(BgL_rxz00_1928, BgL_tmpz00_3099,
													((bool_t) 0), BgL_auxz00_3101, BgL_auxz00_3103);
											}
											{	/* Unsafe/pcre.scm 129 */

												BGL_REGEXP_FREE(BgL_rxz00_1928);
												BgL_ppz00_1262 = BgL_valz00_1929;
							}}}}
							if (CBOOL(BgL_ppz00_1262))
								{	/* Unsafe/pcre.scm 268 */
									obj_t BgL_arg1300z00_1263;
									obj_t BgL_arg1301z00_1264;

									{	/* Unsafe/pcre.scm 268 */
										obj_t BgL_pairz00_1934;

										BgL_pairz00_1934 = CAR(((obj_t) BgL_ppz00_1262));
										BgL_arg1300z00_1263 = CDR(BgL_pairz00_1934);
									}
									{	/* Unsafe/pcre.scm 271 */
										obj_t BgL_arg1302z00_1265;
										obj_t BgL_arg1303z00_1266;

										{	/* Unsafe/pcre.scm 271 */
											obj_t BgL_arg1304z00_1267;

											{	/* Unsafe/pcre.scm 271 */
												obj_t BgL_pairz00_1938;

												BgL_pairz00_1938 = CAR(((obj_t) BgL_ppz00_1262));
												BgL_arg1304z00_1267 = CAR(BgL_pairz00_1938);
											}
											BgL_arg1302z00_1265 =
												c_substring(BgL_strz00_45,
												(long) CINT(BgL_iz00_1258),
												(long) CINT(BgL_arg1304z00_1267));
										}
										BgL_arg1303z00_1266 =
											BGl_pregexpzd2replacezd2auxz00zz__regexpz00(BgL_strz00_45,
											BgL_insz00_46, BgL_inszd2lenzd2_1256, BgL_ppz00_1262);
										BgL_arg1301z00_1264 =
											string_append_3(BgL_rz00_1259, BgL_arg1302z00_1265,
											BgL_arg1303z00_1266);
									}
									{
										obj_t BgL_rz00_3121;
										obj_t BgL_iz00_3120;

										BgL_iz00_3120 = BgL_arg1300z00_1263;
										BgL_rz00_3121 = BgL_arg1301z00_1264;
										BgL_rz00_1259 = BgL_rz00_3121;
										BgL_iz00_1258 = BgL_iz00_3120;
										goto BgL_zc3z04anonymousza31298ze3z87_1260;
									}
								}
							else
								{	/* Unsafe/pcre.scm 258 */
									if (((long) CINT(BgL_iz00_1258) == ((long) 0)))
										{	/* Unsafe/pcre.scm 259 */
											return BgL_strz00_45;
										}
									else
										{	/* Unsafe/pcre.scm 259 */
											return
												string_append(BgL_rz00_1259,
												c_substring(BgL_strz00_45,
													(long) CINT(BgL_iz00_1258), BgL_nz00_1255));
		}}}}}}

	}



/* &pregexp-replace* */
	obj_t BGl_z62pregexpzd2replaceza2z12zz__regexpz00(obj_t BgL_envz00_2229,
		obj_t BgL_patz00_2230, obj_t BgL_strz00_2231, obj_t BgL_insz00_2232)
	{
		{	/* Unsafe/pcre.scm 247 */
			{	/* Unsafe/pcre.scm 250 */
				obj_t BgL_auxz00_3136;
				obj_t BgL_auxz00_3129;

				if (STRINGP(BgL_insz00_2232))
					{	/* Unsafe/pcre.scm 250 */
						BgL_auxz00_3136 = BgL_insz00_2232;
					}
				else
					{
						obj_t BgL_auxz00_3139;

						BgL_auxz00_3139 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1875z00zz__regexpz00,
							BINT(((long) 10451)), BGl_string1889z00zz__regexpz00,
							BGl_string1880z00zz__regexpz00, BgL_insz00_2232);
						FAILURE(BgL_auxz00_3139, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_strz00_2231))
					{	/* Unsafe/pcre.scm 250 */
						BgL_auxz00_3129 = BgL_strz00_2231;
					}
				else
					{
						obj_t BgL_auxz00_3132;

						BgL_auxz00_3132 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1875z00zz__regexpz00,
							BINT(((long) 10451)), BGl_string1889z00zz__regexpz00,
							BGl_string1880z00zz__regexpz00, BgL_strz00_2231);
						FAILURE(BgL_auxz00_3132, BFALSE, BFALSE);
					}
				return
					BGl_pregexpzd2replaceza2z70zz__regexpz00(BgL_patz00_2230,
					BgL_auxz00_3129, BgL_auxz00_3136);
			}
		}

	}



/* pregexp-quote */
	BGL_EXPORTED_DEF obj_t BGl_pregexpzd2quotezd2zz__regexpz00(obj_t BgL_sz00_47)
	{
		{	/* Unsafe/pcre.scm 277 */
			{	/* Unsafe/pcre.scm 278 */
				long BgL_g1051z00_1273;

				BgL_g1051z00_1273 = (STRING_LENGTH(BgL_sz00_47) - ((long) 1));
				{
					long BgL_iz00_1276;
					obj_t BgL_rz00_1277;

					BgL_iz00_1276 = BgL_g1051z00_1273;
					BgL_rz00_1277 = BNIL;
				BgL_zc3z04anonymousza31309ze3z87_1278:
					if ((BgL_iz00_1276 < ((long) 0)))
						{	/* Unsafe/pcre.scm 279 */
							return
								BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(BgL_rz00_1277);
						}
					else
						{	/* Unsafe/pcre.scm 281 */
							long BgL_arg1311z00_1280;
							obj_t BgL_arg1312z00_1281;

							BgL_arg1311z00_1280 = (BgL_iz00_1276 - ((long) 1));
							{	/* Unsafe/pcre.scm 282 */
								unsigned char BgL_cz00_1282;

								BgL_cz00_1282 = STRING_REF(BgL_sz00_47, BgL_iz00_1276);
								if (CBOOL(BGl_memvz00zz__r4_pairs_and_lists_6_3z00(BCHAR
											(BgL_cz00_1282), BGl_list1890z00zz__regexpz00)))
									{	/* Unsafe/pcre.scm 285 */
										obj_t BgL_arg1314z00_1284;

										BgL_arg1314z00_1284 =
											MAKE_YOUNG_PAIR(BCHAR(BgL_cz00_1282), BgL_rz00_1277);
										BgL_arg1312z00_1281 =
											MAKE_YOUNG_PAIR(BCHAR(((unsigned char) '\\')),
											BgL_arg1314z00_1284);
									}
								else
									{	/* Unsafe/pcre.scm 283 */
										BgL_arg1312z00_1281 =
											MAKE_YOUNG_PAIR(BCHAR(BgL_cz00_1282), BgL_rz00_1277);
									}
							}
							{
								obj_t BgL_rz00_3162;
								long BgL_iz00_3161;

								BgL_iz00_3161 = BgL_arg1311z00_1280;
								BgL_rz00_3162 = BgL_arg1312z00_1281;
								BgL_rz00_1277 = BgL_rz00_3162;
								BgL_iz00_1276 = BgL_iz00_3161;
								goto BgL_zc3z04anonymousza31309ze3z87_1278;
							}
						}
				}
			}
		}

	}



/* &pregexp-quote */
	obj_t BGl_z62pregexpzd2quotezb0zz__regexpz00(obj_t BgL_envz00_2233,
		obj_t BgL_sz00_2234)
	{
		{	/* Unsafe/pcre.scm 277 */
			{	/* Unsafe/pcre.scm 278 */
				obj_t BgL_auxz00_3163;

				if (STRINGP(BgL_sz00_2234))
					{	/* Unsafe/pcre.scm 278 */
						BgL_auxz00_3163 = BgL_sz00_2234;
					}
				else
					{
						obj_t BgL_auxz00_3166;

						BgL_auxz00_3166 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1875z00zz__regexpz00,
							BINT(((long) 11412)), BGl_string1891z00zz__regexpz00,
							BGl_string1880z00zz__regexpz00, BgL_sz00_2234);
						FAILURE(BgL_auxz00_3166, BFALSE, BFALSE);
					}
				return BGl_pregexpzd2quotezd2zz__regexpz00(BgL_auxz00_3163);
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__regexpz00()
	{
		{	/* Unsafe/pcre.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__regexpz00()
	{
		{	/* Unsafe/pcre.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__regexpz00()
	{
		{	/* Unsafe/pcre.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__regexpz00()
	{
		{	/* Unsafe/pcre.scm 15 */
			return
				BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string1892z00zz__regexpz00));
		}

	}

#ifdef __cplusplus
}
#endif
