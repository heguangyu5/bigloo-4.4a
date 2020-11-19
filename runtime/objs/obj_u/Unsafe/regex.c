/*===========================================================================*/
/*   (Unsafe/regex.scm)                                                      */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Unsafe/regex.scm -indent -o objs/obj_u/Unsafe/regex.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern obj_t bgl_regfree(obj_t);
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
	static obj_t BGl_list2046z00zz__regexpz00 = BUNSPEC;
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
	extern obj_t make_string(long, unsigned char);
	BGL_EXPORTED_DECL long BGl_regexpzd2capturezd2countz00zz__regexpz00(obj_t);
	extern obj_t string_append(obj_t, obj_t);
	extern obj_t BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_pregexpzd2quotezd2zz__regexpz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_regexpzf3zf3zz__regexpz00(obj_t);
	extern obj_t bgl_regmatch(obj_t, char *, bool_t, int, int);
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
	static obj_t BGl_pregexpzd2normaliza7ez75zz__regexpz00(obj_t);
	static obj_t BGl_pregexpzd2replacezd2auxz00zz__regexpz00(obj_t, obj_t, long,
		obj_t);
	static obj_t BGl__pregexpzd2matchzd2zz__regexpz00(obj_t, obj_t);
	static obj_t BGl_z62pregexpz62zz__regexpz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_pregexpzd2splitzd2zz__regexpz00(obj_t, obj_t);
	extern obj_t bgl_regcomp(obj_t, obj_t, bool_t);
	static obj_t BGl_z62pregexpzd2replaceza2z12zz__regexpz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t c_substring(obj_t, long, long);
	static obj_t BGl_z62regexpzd2patternzb0zz__regexpz00(obj_t, obj_t);
	extern obj_t blit_string(obj_t, long, obj_t, long, long);
	BGL_EXPORTED_DECL obj_t BGl_pregexpzd2matchzd2zz__regexpz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string2040z00zz__regexpz00,
		BgL_bgl_string2040za700za7za7_2049za7, "&pregexp-match-n-positions!", 27);
	      DEFINE_STRING(BGl_string2041z00zz__regexpz00,
		BgL_bgl_string2041za700za7za7_2050za7, "vector", 6);
	      DEFINE_STRING(BGl_string2042z00zz__regexpz00,
		BgL_bgl_string2042za700za7za7_2051za7, "", 0);
	      DEFINE_STRING(BGl_string2043z00zz__regexpz00,
		BgL_bgl_string2043za700za7za7_2052za7, "&pregexp-split", 14);
	      DEFINE_STRING(BGl_string2044z00zz__regexpz00,
		BgL_bgl_string2044za700za7za7_2053za7, "&pregexp-replace", 16);
	      DEFINE_STRING(BGl_string2045z00zz__regexpz00,
		BgL_bgl_string2045za700za7za7_2054za7, "&pregexp-replace*", 17);
	      DEFINE_STRING(BGl_string2047z00zz__regexpz00,
		BgL_bgl_string2047za700za7za7_2055za7, "&pregexp-quote", 14);
	      DEFINE_STRING(BGl_string2048z00zz__regexpz00,
		BgL_bgl_string2048za700za7za7_2056za7, "__regexp", 8);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_pregexpzd2splitzd2envz00zz__regexpz00,
		BgL_bgl_za762pregexpza7d2spl2057z00, BGl_z62pregexpzd2splitzb0zz__regexpz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_pregexpzd2quotezd2envz00zz__regexpz00,
		BgL_bgl_za762pregexpza7d2quo2058z00, BGl_z62pregexpzd2quotezb0zz__regexpz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_pregexpzd2replaceza2zd2envza2zz__regexpz00,
		BgL_bgl_za762pregexpza7d2rep2059z00,
		BGl_z62pregexpzd2replaceza2z12zz__regexpz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_pregexpzd2matchzd2nzd2positionsz12zd2envz12zz__regexpz00,
		BgL_bgl_za762pregexpza7d2mat2060z00,
		BGl_z62pregexpzd2matchzd2nzd2positionsz12za2zz__regexpz00, 0L, BUNSPEC, 5);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_pregexpzd2matchzd2envz00zz__regexpz00,
		BgL_bgl__pregexpza7d2match2061za7, opt_generic_entry,
		BGl__pregexpzd2matchzd2zz__regexpz00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_pregexpzd2envzd2zz__regexpz00,
		BgL_bgl_za762pregexpza762za7za7_2062z00, va_generic_entry,
		BGl_z62pregexpz62zz__regexpz00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_regexpzd2capturezd2countzd2envzd2zz__regexpz00,
		BgL_bgl_za762regexpza7d2capt2063z00,
		BGl_z62regexpzd2capturezd2countz62zz__regexpz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_regexpzd2patternzd2envz00zz__regexpz00,
		BgL_bgl_za762regexpza7d2patt2064z00,
		BGl_z62regexpzd2patternzb0zz__regexpz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_regexpzf3zd2envz21zz__regexpz00,
		BgL_bgl_za762regexpza7f3za791za72065z00, BGl_z62regexpzf3z91zz__regexpz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_pregexpzd2replacezd2envz00zz__regexpz00,
		BgL_bgl_za762pregexpza7d2rep2066z00,
		BGl_z62pregexpzd2replacezb0zz__regexpz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_pregexpzd2matchzd2positionszd2envzd2zz__regexpz00,
		BgL_bgl__pregexpza7d2match2067za7, opt_generic_entry,
		BGl__pregexpzd2matchzd2positionsz00zz__regexpz00, BFALSE, -1);
	      DEFINE_STRING(BGl_string2025z00zz__regexpz00,
		BgL_bgl_string2025za700za7za7_2068za7, "/tmp/4.4a/runtime/Unsafe/regex.scm",
		34);
	      DEFINE_STRING(BGl_string2026z00zz__regexpz00,
		BgL_bgl_string2026za700za7za7_2069za7, "&regexp-pattern", 15);
	      DEFINE_STRING(BGl_string2027z00zz__regexpz00,
		BgL_bgl_string2027za700za7za7_2070za7, "regexp", 6);
	      DEFINE_STRING(BGl_string2028z00zz__regexpz00,
		BgL_bgl_string2028za700za7za7_2071za7, "&regexp-capture-count", 21);
	      DEFINE_STRING(BGl_string2029z00zz__regexpz00,
		BgL_bgl_string2029za700za7za7_2072za7, "[A-Za-z0-9_]", 12);
	      DEFINE_STRING(BGl_string2030z00zz__regexpz00,
		BgL_bgl_string2030za700za7za7_2073za7, "[^A-Za-z0-9_]", 13);
	      DEFINE_STRING(BGl_string2031z00zz__regexpz00,
		BgL_bgl_string2031za700za7za7_2074za7, "[0-9]", 5);
	      DEFINE_STRING(BGl_string2032z00zz__regexpz00,
		BgL_bgl_string2032za700za7za7_2075za7, "[^0-9]", 6);
	      DEFINE_STRING(BGl_string2033z00zz__regexpz00,
		BgL_bgl_string2033za700za7za7_2076za7, "[ \t\r\n\v\f]", 8);
	      DEFINE_STRING(BGl_string2034z00zz__regexpz00,
		BgL_bgl_string2034za700za7za7_2077za7, "[^ \t\r\n\v\f]", 9);
	      DEFINE_STRING(BGl_string2035z00zz__regexpz00,
		BgL_bgl_string2035za700za7za7_2078za7, "&pregexp", 8);
	      DEFINE_STRING(BGl_string2036z00zz__regexpz00,
		BgL_bgl_string2036za700za7za7_2079za7, "bstring", 7);
	      DEFINE_STRING(BGl_string2037z00zz__regexpz00,
		BgL_bgl_string2037za700za7za7_2080za7, "_pregexp-match-positions", 24);
	      DEFINE_STRING(BGl_string2038z00zz__regexpz00,
		BgL_bgl_string2038za700za7za7_2081za7, "bint", 4);
	      DEFINE_STRING(BGl_string2039z00zz__regexpz00,
		BgL_bgl_string2039za700za7za7_2082za7, "_pregexp-match", 14);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__regexpz00));
		     ADD_ROOT((void *) (&BGl_list2046z00zz__regexpz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__regexpz00(long
		BgL_checksumz00_2630, char *BgL_fromz00_2631)
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
		{	/* Unsafe/regex.scm 15 */
			return (BGl_list2046z00zz__regexpz00 =
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
		{	/* Unsafe/regex.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* regexp? */
	BGL_EXPORTED_DEF bool_t BGl_regexpzf3zf3zz__regexpz00(obj_t BgL_objz00_3)
	{
		{	/* Unsafe/regex.scm 83 */
			return BGL_REGEXPP(BgL_objz00_3);
		}

	}



/* &regexp? */
	obj_t BGl_z62regexpzf3z91zz__regexpz00(obj_t BgL_envz00_2506,
		obj_t BgL_objz00_2507)
	{
		{	/* Unsafe/regex.scm 83 */
			return BBOOL(BGl_regexpzf3zf3zz__regexpz00(BgL_objz00_2507));
		}

	}



/* regexp-pattern */
	BGL_EXPORTED_DEF obj_t BGl_regexpzd2patternzd2zz__regexpz00(obj_t BgL_rez00_4)
	{
		{	/* Unsafe/regex.scm 89 */
			return BGL_REGEXP_PAT(BgL_rez00_4);
		}

	}



/* &regexp-pattern */
	obj_t BGl_z62regexpzd2patternzb0zz__regexpz00(obj_t BgL_envz00_2508,
		obj_t BgL_rez00_2509)
	{
		{	/* Unsafe/regex.scm 89 */
			{	/* Unsafe/regex.scm 90 */
				obj_t BgL_auxz00_2672;

				if (BGl_regexpzf3zf3zz__regexpz00(BgL_rez00_2509))
					{	/* Unsafe/regex.scm 90 */
						BgL_auxz00_2672 = BgL_rez00_2509;
					}
				else
					{
						obj_t BgL_auxz00_2675;

						BgL_auxz00_2675 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2025z00zz__regexpz00,
							BINT(((long) 3726)), BGl_string2026z00zz__regexpz00,
							BGl_string2027z00zz__regexpz00, BgL_rez00_2509);
						FAILURE(BgL_auxz00_2675, BFALSE, BFALSE);
					}
				return BGl_regexpzd2patternzd2zz__regexpz00(BgL_auxz00_2672);
			}
		}

	}



/* regexp-capture-count */
	BGL_EXPORTED_DEF long BGl_regexpzd2capturezd2countz00zz__regexpz00(obj_t
		BgL_rez00_5)
	{
		{	/* Unsafe/regex.scm 95 */
			return BGL_REGEXP_CAPTURE_COUNT(BgL_rez00_5);
		}

	}



/* &regexp-capture-count */
	obj_t BGl_z62regexpzd2capturezd2countz62zz__regexpz00(obj_t BgL_envz00_2510,
		obj_t BgL_rez00_2511)
	{
		{	/* Unsafe/regex.scm 95 */
			{	/* Unsafe/regex.scm 96 */
				long BgL_tmpz00_2681;

				{	/* Unsafe/regex.scm 96 */
					obj_t BgL_auxz00_2682;

					if (BGl_regexpzf3zf3zz__regexpz00(BgL_rez00_2511))
						{	/* Unsafe/regex.scm 96 */
							BgL_auxz00_2682 = BgL_rez00_2511;
						}
					else
						{
							obj_t BgL_auxz00_2685;

							BgL_auxz00_2685 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2025z00zz__regexpz00,
								BINT(((long) 4015)), BGl_string2028z00zz__regexpz00,
								BGl_string2027z00zz__regexpz00, BgL_rez00_2511);
							FAILURE(BgL_auxz00_2685, BFALSE, BFALSE);
						}
					BgL_tmpz00_2681 =
						BGl_regexpzd2capturezd2countz00zz__regexpz00(BgL_auxz00_2682);
				}
				return BINT(BgL_tmpz00_2681);
			}
		}

	}



/* pregexp-normalize */
	obj_t BGl_pregexpzd2normaliza7ez75zz__regexpz00(obj_t BgL_rez00_6)
	{
		{	/* Unsafe/regex.scm 110 */
			{
				obj_t BgL_rez00_1152;
				long BgL_cz00_1153;
				obj_t BgL_rez00_1127;

				{	/* Unsafe/regex.scm 164 */
					long BgL_cz00_1125;

					BgL_rez00_1127 = BgL_rez00_6;
					{	/* Unsafe/regex.scm 113 */
						long BgL_lenz00_1129;

						BgL_lenz00_1129 = STRING_LENGTH(((obj_t) BgL_rez00_1127));
						{
							long BgL_iz00_1131;
							long BgL_cz00_1132;

							BgL_iz00_1131 = ((long) 0);
							BgL_cz00_1132 = ((long) 0);
						BgL_zc3z04anonymousza31197ze3z87_1133:
							if ((BgL_iz00_1131 >= (BgL_lenz00_1129 - ((long) 1))))
								{	/* Unsafe/regex.scm 117 */
									BgL_cz00_1125 = BgL_cz00_1132;
								}
							else
								{	/* Unsafe/regex.scm 117 */
									if (
										(STRING_REF(
												((obj_t) BgL_rez00_1127),
												BgL_iz00_1131) == ((unsigned char) '\\')))
										{
											long BgL_cz00_2702;
											long BgL_iz00_2700;

											BgL_iz00_2700 = (BgL_iz00_1131 + ((long) 2));
											{	/* Unsafe/regex.scm 121 */
												long BgL_tmpz00_2703;

												switch (CCHAR(BCHAR(STRING_REF(
																((obj_t) BgL_rez00_1127),
																(BgL_iz00_1131 + ((long) 1))))))
													{
													case ((unsigned char) 'w'):

														BgL_tmpz00_2703 = ((long) 10);
														break;
													case ((unsigned char) 'W'):

														BgL_tmpz00_2703 = ((long) 11);
														break;
													case ((unsigned char) 'd'):

														BgL_tmpz00_2703 = ((long) 3);
														break;
													case ((unsigned char) 'D'):

														BgL_tmpz00_2703 = ((long) 4);
														break;
													case ((unsigned char) 's'):

														BgL_tmpz00_2703 = ((long) 6);
														break;
													case ((unsigned char) 'S'):

														BgL_tmpz00_2703 = ((long) 7);
														break;
													default:
														BgL_tmpz00_2703 = ((long) 0);
													}
												BgL_cz00_2702 = (BgL_cz00_1132 + BgL_tmpz00_2703);
											}
											BgL_cz00_1132 = BgL_cz00_2702;
											BgL_iz00_1131 = BgL_iz00_2700;
											goto BgL_zc3z04anonymousza31197ze3z87_1133;
										}
									else
										{
											long BgL_iz00_2711;

											BgL_iz00_2711 = (BgL_iz00_1131 + ((long) 1));
											BgL_iz00_1131 = BgL_iz00_2711;
											goto BgL_zc3z04anonymousza31197ze3z87_1133;
										}
								}
						}
					}
					if ((BgL_cz00_1125 == ((long) 0)))
						{	/* Unsafe/regex.scm 165 */
							return BgL_rez00_6;
						}
					else
						{	/* Unsafe/regex.scm 165 */
							BgL_rez00_1152 = BgL_rez00_6;
							BgL_cz00_1153 = BgL_cz00_1125;
							{	/* Unsafe/regex.scm 133 */
								long BgL_lenz00_1155;

								BgL_lenz00_1155 = STRING_LENGTH(((obj_t) BgL_rez00_1152));
								{	/* Unsafe/regex.scm 133 */
									obj_t BgL_newz00_1156;

									{	/* Unsafe/regex.scm 134 */
										long BgL_arg1295z00_1200;

										BgL_arg1295z00_1200 = (BgL_lenz00_1155 + BgL_cz00_1153);
										{	/* Ieee/string.scm 168 */

											BgL_newz00_1156 =
												make_string(BgL_arg1295z00_1200, ((unsigned char) ' '));
									}}
									{	/* Unsafe/regex.scm 134 */

										{
											long BgL_iz00_1158;
											long BgL_jz00_1159;

											BgL_iz00_1158 = ((long) 0);
											BgL_jz00_1159 = ((long) 0);
										BgL_zc3z04anonymousza31234ze3z87_1160:
											if ((BgL_iz00_1158 >= (BgL_lenz00_1155 - ((long) 1))))
												{	/* Unsafe/regex.scm 138 */
													if ((BgL_iz00_1158 < BgL_lenz00_1155))
														{	/* Unsafe/regex.scm 140 */
															unsigned char BgL_arg1242z00_1164;

															BgL_arg1242z00_1164 =
																STRING_REF(
																((obj_t) BgL_rez00_1152), BgL_iz00_1158);
															STRING_SET(BgL_newz00_1156, BgL_jz00_1159,
																BgL_arg1242z00_1164);
														}
													else
														{	/* Unsafe/regex.scm 139 */
															BFALSE;
														}
													return BgL_newz00_1156;
												}
											else
												{	/* Unsafe/regex.scm 138 */
													if (
														(STRING_REF(
																((obj_t) BgL_rez00_1152),
																BgL_iz00_1158) == ((unsigned char) '\\')))
														{

															{	/* Unsafe/regex.scm 143 */
																unsigned char BgL_aux1045z00_1168;

																BgL_aux1045z00_1168 =
																	STRING_REF(
																	((obj_t) BgL_rez00_1152),
																	(BgL_iz00_1158 + ((long) 1)));
																switch (BgL_aux1045z00_1168)
																	{
																	case ((unsigned char) 'w'):

																		{	/* Unsafe/regex.scm 145 */
																			long BgL_arg1246z00_1170;
																			long BgL_arg1247z00_1171;

																			BgL_arg1246z00_1170 =
																				(BgL_iz00_1158 + ((long) 2));
																			{	/* Unsafe/regex.scm 145 */
																				long BgL_arg1250z00_1172;

																				blit_string
																					(BGl_string2029z00zz__regexpz00,
																					((long) 0), BgL_newz00_1156,
																					BgL_jz00_1159, ((long) 12));
																				BgL_arg1250z00_1172 = ((long) 12);
																				BgL_arg1247z00_1171 =
																					(BgL_jz00_1159 + BgL_arg1250z00_1172);
																			}
																			{
																				long BgL_jz00_2738;
																				long BgL_iz00_2737;

																				BgL_iz00_2737 = BgL_arg1246z00_1170;
																				BgL_jz00_2738 = BgL_arg1247z00_1171;
																				BgL_jz00_1159 = BgL_jz00_2738;
																				BgL_iz00_1158 = BgL_iz00_2737;
																				goto
																					BgL_zc3z04anonymousza31234ze3z87_1160;
																			}
																		}
																		break;
																	case ((unsigned char) 'W'):

																		{	/* Unsafe/regex.scm 147 */
																			long BgL_arg1252z00_1173;
																			long BgL_arg1253z00_1174;

																			BgL_arg1252z00_1173 =
																				(BgL_iz00_1158 + ((long) 2));
																			{	/* Unsafe/regex.scm 147 */
																				long BgL_arg1254z00_1175;

																				blit_string
																					(BGl_string2030z00zz__regexpz00,
																					((long) 0), BgL_newz00_1156,
																					BgL_jz00_1159, ((long) 13));
																				BgL_arg1254z00_1175 = ((long) 13);
																				BgL_arg1253z00_1174 =
																					(BgL_jz00_1159 + BgL_arg1254z00_1175);
																			}
																			{
																				long BgL_jz00_2743;
																				long BgL_iz00_2742;

																				BgL_iz00_2742 = BgL_arg1252z00_1173;
																				BgL_jz00_2743 = BgL_arg1253z00_1174;
																				BgL_jz00_1159 = BgL_jz00_2743;
																				BgL_iz00_1158 = BgL_iz00_2742;
																				goto
																					BgL_zc3z04anonymousza31234ze3z87_1160;
																			}
																		}
																		break;
																	case ((unsigned char) 'd'):

																		{	/* Unsafe/regex.scm 149 */
																			long BgL_arg1256z00_1176;
																			long BgL_arg1258z00_1177;

																			BgL_arg1256z00_1176 =
																				(BgL_iz00_1158 + ((long) 2));
																			{	/* Unsafe/regex.scm 149 */
																				long BgL_arg1263z00_1178;

																				blit_string
																					(BGl_string2031z00zz__regexpz00,
																					((long) 0), BgL_newz00_1156,
																					BgL_jz00_1159, ((long) 5));
																				BgL_arg1263z00_1178 = ((long) 5);
																				BgL_arg1258z00_1177 =
																					(BgL_jz00_1159 + BgL_arg1263z00_1178);
																			}
																			{
																				long BgL_jz00_2748;
																				long BgL_iz00_2747;

																				BgL_iz00_2747 = BgL_arg1256z00_1176;
																				BgL_jz00_2748 = BgL_arg1258z00_1177;
																				BgL_jz00_1159 = BgL_jz00_2748;
																				BgL_iz00_1158 = BgL_iz00_2747;
																				goto
																					BgL_zc3z04anonymousza31234ze3z87_1160;
																			}
																		}
																		break;
																	case ((unsigned char) 'D'):

																		{	/* Unsafe/regex.scm 151 */
																			long BgL_arg1268z00_1179;
																			long BgL_arg1270z00_1180;

																			BgL_arg1268z00_1179 =
																				(BgL_iz00_1158 + ((long) 2));
																			{	/* Unsafe/regex.scm 151 */
																				long BgL_arg1271z00_1181;

																				blit_string
																					(BGl_string2032z00zz__regexpz00,
																					((long) 0), BgL_newz00_1156,
																					BgL_jz00_1159, ((long) 6));
																				BgL_arg1271z00_1181 = ((long) 6);
																				BgL_arg1270z00_1180 =
																					(BgL_jz00_1159 + BgL_arg1271z00_1181);
																			}
																			{
																				long BgL_jz00_2753;
																				long BgL_iz00_2752;

																				BgL_iz00_2752 = BgL_arg1268z00_1179;
																				BgL_jz00_2753 = BgL_arg1270z00_1180;
																				BgL_jz00_1159 = BgL_jz00_2753;
																				BgL_iz00_1158 = BgL_iz00_2752;
																				goto
																					BgL_zc3z04anonymousza31234ze3z87_1160;
																			}
																		}
																		break;
																	case ((unsigned char) 's'):

																		{	/* Unsafe/regex.scm 153 */
																			long BgL_arg1273z00_1182;
																			long BgL_arg1274z00_1183;

																			BgL_arg1273z00_1182 =
																				(BgL_iz00_1158 + ((long) 2));
																			{	/* Unsafe/regex.scm 153 */
																				long BgL_arg1275z00_1184;

																				blit_string
																					(BGl_string2033z00zz__regexpz00,
																					((long) 0), BgL_newz00_1156,
																					BgL_jz00_1159, ((long) 8));
																				BgL_arg1275z00_1184 = ((long) 8);
																				BgL_arg1274z00_1183 =
																					(BgL_jz00_1159 + BgL_arg1275z00_1184);
																			}
																			{
																				long BgL_jz00_2758;
																				long BgL_iz00_2757;

																				BgL_iz00_2757 = BgL_arg1273z00_1182;
																				BgL_jz00_2758 = BgL_arg1274z00_1183;
																				BgL_jz00_1159 = BgL_jz00_2758;
																				BgL_iz00_1158 = BgL_iz00_2757;
																				goto
																					BgL_zc3z04anonymousza31234ze3z87_1160;
																			}
																		}
																		break;
																	case ((unsigned char) 'S'):

																		{	/* Unsafe/regex.scm 155 */
																			long BgL_arg1276z00_1185;
																			long BgL_arg1277z00_1186;

																			BgL_arg1276z00_1185 =
																				(BgL_iz00_1158 + ((long) 2));
																			{	/* Unsafe/regex.scm 155 */
																				long BgL_arg1280z00_1187;

																				blit_string
																					(BGl_string2034z00zz__regexpz00,
																					((long) 0), BgL_newz00_1156,
																					BgL_jz00_1159, ((long) 9));
																				BgL_arg1280z00_1187 = ((long) 9);
																				BgL_arg1277z00_1186 =
																					(BgL_jz00_1159 + BgL_arg1280z00_1187);
																			}
																			{
																				long BgL_jz00_2763;
																				long BgL_iz00_2762;

																				BgL_iz00_2762 = BgL_arg1276z00_1185;
																				BgL_jz00_2763 = BgL_arg1277z00_1186;
																				BgL_jz00_1159 = BgL_jz00_2763;
																				BgL_iz00_1158 = BgL_iz00_2762;
																				goto
																					BgL_zc3z04anonymousza31234ze3z87_1160;
																			}
																		}
																		break;
																	default:
																		STRING_SET(BgL_newz00_1156, BgL_jz00_1159,
																			((unsigned char) '\\'));
																		{	/* Unsafe/regex.scm 158 */
																			long BgL_arg1282z00_1189;
																			unsigned char BgL_arg1284z00_1190;

																			BgL_arg1282z00_1189 =
																				(BgL_jz00_1159 + ((long) 1));
																			BgL_arg1284z00_1190 =
																				STRING_REF(
																				((obj_t) BgL_rez00_1152),
																				(BgL_iz00_1158 + ((long) 1)));
																			STRING_SET(BgL_newz00_1156,
																				BgL_arg1282z00_1189,
																				BgL_arg1284z00_1190);
																		}
																		{
																			long BgL_jz00_2772;
																			long BgL_iz00_2770;

																			BgL_iz00_2770 =
																				(BgL_iz00_1158 + ((long) 2));
																			BgL_jz00_2772 =
																				(BgL_jz00_1159 + ((long) 2));
																			BgL_jz00_1159 = BgL_jz00_2772;
																			BgL_iz00_1158 = BgL_iz00_2770;
																			goto
																				BgL_zc3z04anonymousza31234ze3z87_1160;
																		}
																	}
															}
														}
													else
														{	/* Unsafe/regex.scm 142 */
															{	/* Unsafe/regex.scm 161 */
																unsigned char BgL_arg1288z00_1194;

																BgL_arg1288z00_1194 =
																	STRING_REF(
																	((obj_t) BgL_rez00_1152), BgL_iz00_1158);
																STRING_SET(BgL_newz00_1156, BgL_jz00_1159,
																	BgL_arg1288z00_1194);
															}
															{
																long BgL_jz00_2780;
																long BgL_iz00_2778;

																BgL_iz00_2778 = (BgL_iz00_1158 + ((long) 1));
																BgL_jz00_2780 = (BgL_jz00_1159 + ((long) 1));
																BgL_jz00_1159 = BgL_jz00_2780;
																BgL_iz00_1158 = BgL_iz00_2778;
																goto BgL_zc3z04anonymousza31234ze3z87_1160;
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



/* pregexp */
	BGL_EXPORTED_DEF obj_t BGl_pregexpz00zz__regexpz00(obj_t BgL_rez00_7,
		obj_t BgL_optzd2argszd2_8)
	{
		{	/* Unsafe/regex.scm 172 */
			return
				bgl_regcomp(BGl_pregexpzd2normaliza7ez75zz__regexpz00(BgL_rez00_7),
				BgL_optzd2argszd2_8, ((bool_t) 1));
		}

	}



/* &pregexp */
	obj_t BGl_z62pregexpz62zz__regexpz00(obj_t BgL_envz00_2512,
		obj_t BgL_rez00_2513, obj_t BgL_optzd2argszd2_2514)
	{
		{	/* Unsafe/regex.scm 172 */
			{	/* Unsafe/regex.scm 173 */
				obj_t BgL_auxz00_2784;

				if (STRINGP(BgL_rez00_2513))
					{	/* Unsafe/regex.scm 173 */
						BgL_auxz00_2784 = BgL_rez00_2513;
					}
				else
					{
						obj_t BgL_auxz00_2787;

						BgL_auxz00_2787 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2025z00zz__regexpz00,
							BINT(((long) 6594)), BGl_string2035z00zz__regexpz00,
							BGl_string2036z00zz__regexpz00, BgL_rez00_2513);
						FAILURE(BgL_auxz00_2787, BFALSE, BFALSE);
					}
				return
					BGl_pregexpz00zz__regexpz00(BgL_auxz00_2784, BgL_optzd2argszd2_2514);
			}
		}

	}



/* _pregexp-match-positions */
	obj_t BGl__pregexpzd2matchzd2positionsz00zz__regexpz00(obj_t
		BgL_env1114z00_19, obj_t BgL_opt1113z00_18)
	{
		{	/* Unsafe/regex.scm 189 */
			{	/* Unsafe/regex.scm 189 */
				obj_t BgL_patz00_1210;
				obj_t BgL_strz00_1211;

				BgL_patz00_1210 = VECTOR_REF(BgL_opt1113z00_18, ((long) 0));
				BgL_strz00_1211 = VECTOR_REF(BgL_opt1113z00_18, ((long) 1));
				switch (VECTOR_LENGTH(BgL_opt1113z00_18))
					{
					case ((long) 2):

						{	/* Unsafe/regex.scm 189 */
							long BgL_endz00_1216;

							{	/* Unsafe/regex.scm 189 */
								obj_t BgL_stringz00_1942;

								if (STRINGP(BgL_strz00_1211))
									{	/* Unsafe/regex.scm 189 */
										BgL_stringz00_1942 = BgL_strz00_1211;
									}
								else
									{
										obj_t BgL_auxz00_2796;

										BgL_auxz00_2796 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string2025z00zz__regexpz00, BINT(((long) 7383)),
											BGl_string2037z00zz__regexpz00,
											BGl_string2036z00zz__regexpz00, BgL_strz00_1211);
										FAILURE(BgL_auxz00_2796, BFALSE, BFALSE);
									}
								BgL_endz00_1216 = STRING_LENGTH(BgL_stringz00_1942);
							}
							{	/* Unsafe/regex.scm 189 */

								{	/* Unsafe/regex.scm 189 */
									obj_t BgL_strz00_1944;

									if (STRINGP(BgL_strz00_1211))
										{	/* Unsafe/regex.scm 189 */
											BgL_strz00_1944 = BgL_strz00_1211;
										}
									else
										{
											obj_t BgL_auxz00_2803;

											BgL_auxz00_2803 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2025z00zz__regexpz00, BINT(((long) 7318)),
												BGl_string2037z00zz__regexpz00,
												BGl_string2036z00zz__regexpz00, BgL_strz00_1211);
											FAILURE(BgL_auxz00_2803, BFALSE, BFALSE);
										}
									{	/* Unsafe/regex.scm 179 */
										bool_t BgL_test2095z00_2807;

										{	/* Unsafe/regex.scm 179 */
											bool_t BgL_res1793z00_1949;

											BgL_res1793z00_1949 = BGL_REGEXPP(BgL_patz00_1210);
											BgL_test2095z00_2807 = BgL_res1793z00_1949;
										}
										if (BgL_test2095z00_2807)
											{	/* Unsafe/regex.scm 180 */
												obj_t BgL_tmpz00_2809;

												if (BGl_regexpzf3zf3zz__regexpz00(BgL_patz00_1210))
													{	/* Unsafe/regex.scm 180 */
														BgL_tmpz00_2809 = BgL_patz00_1210;
													}
												else
													{
														obj_t BgL_auxz00_2812;

														BgL_auxz00_2812 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2025z00zz__regexpz00,
															BINT(((long) 6933)),
															BGl_string2037z00zz__regexpz00,
															BGl_string2027z00zz__regexpz00, BgL_patz00_1210);
														FAILURE(BgL_auxz00_2812, BFALSE, BFALSE);
													}
												return
													bgl_regmatch(BgL_tmpz00_2809,
													BSTRING_TO_STRING(BgL_strz00_1944), ((bool_t) 0),
													(int) (((long) 0)), (int) (BgL_endz00_1216));
											}
										else
											{	/* Unsafe/regex.scm 181 */
												obj_t BgL_rxz00_1946;

												{	/* Unsafe/regex.scm 181 */
													obj_t BgL_arg1298z00_1947;

													BgL_arg1298z00_1947 =
														BGl_pregexpzd2normaliza7ez75zz__regexpz00
														(BgL_patz00_1210);
													{	/* Unsafe/regex.scm 181 */
														obj_t BgL_tmpz00_2821;

														if (STRINGP(BgL_arg1298z00_1947))
															{	/* Unsafe/regex.scm 181 */
																BgL_tmpz00_2821 = BgL_arg1298z00_1947;
															}
														else
															{
																obj_t BgL_auxz00_2824;

																BgL_auxz00_2824 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string2025z00zz__regexpz00,
																	BINT(((long) 7008)),
																	BGl_string2037z00zz__regexpz00,
																	BGl_string2036z00zz__regexpz00,
																	BgL_arg1298z00_1947);
																FAILURE(BgL_auxz00_2824, BFALSE, BFALSE);
															}
														BgL_rxz00_1946 =
															bgl_regcomp(BgL_tmpz00_2821, BNIL, ((bool_t) 0));
												}}
												{	/* Unsafe/regex.scm 181 */
													obj_t BgL_valz00_1948;

													BgL_valz00_1948 =
														bgl_regmatch(BgL_rxz00_1946,
														BSTRING_TO_STRING(BgL_strz00_1944), ((bool_t) 0),
														(int) (((long) 0)), (int) (BgL_endz00_1216));
													{	/* Unsafe/regex.scm 182 */

														bgl_regfree(BgL_rxz00_1946);
														return BgL_valz00_1948;
													}
												}
											}
									}
								}
							}
						}
						break;
					case ((long) 3):

						{	/* Unsafe/regex.scm 189 */
							obj_t BgL_begz00_1217;

							BgL_begz00_1217 = VECTOR_REF(BgL_opt1113z00_18, ((long) 2));
							{	/* Unsafe/regex.scm 189 */
								long BgL_endz00_1218;

								{	/* Unsafe/regex.scm 189 */
									obj_t BgL_stringz00_1950;

									if (STRINGP(BgL_strz00_1211))
										{	/* Unsafe/regex.scm 189 */
											BgL_stringz00_1950 = BgL_strz00_1211;
										}
									else
										{
											obj_t BgL_auxz00_2837;

											BgL_auxz00_2837 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2025z00zz__regexpz00, BINT(((long) 7383)),
												BGl_string2037z00zz__regexpz00,
												BGl_string2036z00zz__regexpz00, BgL_strz00_1211);
											FAILURE(BgL_auxz00_2837, BFALSE, BFALSE);
										}
									BgL_endz00_1218 = STRING_LENGTH(BgL_stringz00_1950);
								}
								{	/* Unsafe/regex.scm 189 */

									{	/* Unsafe/regex.scm 189 */
										obj_t BgL_strz00_1952;

										if (STRINGP(BgL_strz00_1211))
											{	/* Unsafe/regex.scm 189 */
												BgL_strz00_1952 = BgL_strz00_1211;
											}
										else
											{
												obj_t BgL_auxz00_2844;

												BgL_auxz00_2844 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2025z00zz__regexpz00, BINT(((long) 7318)),
													BGl_string2037z00zz__regexpz00,
													BGl_string2036z00zz__regexpz00, BgL_strz00_1211);
												FAILURE(BgL_auxz00_2844, BFALSE, BFALSE);
											}
										{	/* Unsafe/regex.scm 179 */
											bool_t BgL_test2100z00_2848;

											{	/* Unsafe/regex.scm 179 */
												bool_t BgL_res1795z00_1957;

												BgL_res1795z00_1957 = BGL_REGEXPP(BgL_patz00_1210);
												BgL_test2100z00_2848 = BgL_res1795z00_1957;
											}
											if (BgL_test2100z00_2848)
												{	/* Unsafe/regex.scm 180 */
													int BgL_auxz00_2857;
													obj_t BgL_tmpz00_2850;

													{	/* Unsafe/regex.scm 180 */
														obj_t BgL_tmpz00_2859;

														if (INTEGERP(BgL_begz00_1217))
															{	/* Unsafe/regex.scm 180 */
																BgL_tmpz00_2859 = BgL_begz00_1217;
															}
														else
															{
																obj_t BgL_auxz00_2862;

																BgL_auxz00_2862 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string2025z00zz__regexpz00,
																	BINT(((long) 6949)),
																	BGl_string2037z00zz__regexpz00,
																	BGl_string2038z00zz__regexpz00,
																	BgL_begz00_1217);
																FAILURE(BgL_auxz00_2862, BFALSE, BFALSE);
															}
														BgL_auxz00_2857 = CINT(BgL_tmpz00_2859);
													}
													if (BGl_regexpzf3zf3zz__regexpz00(BgL_patz00_1210))
														{	/* Unsafe/regex.scm 180 */
															BgL_tmpz00_2850 = BgL_patz00_1210;
														}
													else
														{
															obj_t BgL_auxz00_2853;

															BgL_auxz00_2853 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string2025z00zz__regexpz00,
																BINT(((long) 6933)),
																BGl_string2037z00zz__regexpz00,
																BGl_string2027z00zz__regexpz00,
																BgL_patz00_1210);
															FAILURE(BgL_auxz00_2853, BFALSE, BFALSE);
														}
													return
														bgl_regmatch(BgL_tmpz00_2850,
														BSTRING_TO_STRING(BgL_strz00_1952), ((bool_t) 0),
														BgL_auxz00_2857, (int) (BgL_endz00_1218));
												}
											else
												{	/* Unsafe/regex.scm 181 */
													obj_t BgL_rxz00_1954;

													{	/* Unsafe/regex.scm 181 */
														obj_t BgL_arg1298z00_1955;

														BgL_arg1298z00_1955 =
															BGl_pregexpzd2normaliza7ez75zz__regexpz00
															(BgL_patz00_1210);
														{	/* Unsafe/regex.scm 181 */
															obj_t BgL_tmpz00_2870;

															if (STRINGP(BgL_arg1298z00_1955))
																{	/* Unsafe/regex.scm 181 */
																	BgL_tmpz00_2870 = BgL_arg1298z00_1955;
																}
															else
																{
																	obj_t BgL_auxz00_2873;

																	BgL_auxz00_2873 =
																		BGl_typezd2errorzd2zz__errorz00
																		(BGl_string2025z00zz__regexpz00,
																		BINT(((long) 7008)),
																		BGl_string2037z00zz__regexpz00,
																		BGl_string2036z00zz__regexpz00,
																		BgL_arg1298z00_1955);
																	FAILURE(BgL_auxz00_2873, BFALSE, BFALSE);
																}
															BgL_rxz00_1954 =
																bgl_regcomp(BgL_tmpz00_2870, BNIL,
																((bool_t) 0));
													}}
													{	/* Unsafe/regex.scm 181 */
														obj_t BgL_valz00_1956;

														{	/* Unsafe/regex.scm 182 */
															int BgL_tmpz00_2878;

															{	/* Unsafe/regex.scm 182 */
																obj_t BgL_tmpz00_2880;

																if (INTEGERP(BgL_begz00_1217))
																	{	/* Unsafe/regex.scm 182 */
																		BgL_tmpz00_2880 = BgL_begz00_1217;
																	}
																else
																	{
																		obj_t BgL_auxz00_2883;

																		BgL_auxz00_2883 =
																			BGl_typezd2errorzd2zz__errorz00
																			(BGl_string2025z00zz__regexpz00,
																			BINT(((long) 7057)),
																			BGl_string2037z00zz__regexpz00,
																			BGl_string2038z00zz__regexpz00,
																			BgL_begz00_1217);
																		FAILURE(BgL_auxz00_2883, BFALSE, BFALSE);
																	}
																BgL_tmpz00_2878 = CINT(BgL_tmpz00_2880);
															}
															BgL_valz00_1956 =
																bgl_regmatch(BgL_rxz00_1954,
																BSTRING_TO_STRING(BgL_strz00_1952),
																((bool_t) 0), BgL_tmpz00_2878,
																(int) (BgL_endz00_1218));
														}
														{	/* Unsafe/regex.scm 182 */

															bgl_regfree(BgL_rxz00_1954);
															return BgL_valz00_1956;
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

						{	/* Unsafe/regex.scm 189 */
							obj_t BgL_begz00_1219;

							BgL_begz00_1219 = VECTOR_REF(BgL_opt1113z00_18, ((long) 2));
							{	/* Unsafe/regex.scm 189 */
								obj_t BgL_endz00_1220;

								BgL_endz00_1220 = VECTOR_REF(BgL_opt1113z00_18, ((long) 3));
								{	/* Unsafe/regex.scm 189 */

									{	/* Unsafe/regex.scm 189 */
										obj_t BgL_strz00_1958;

										if (STRINGP(BgL_strz00_1211))
											{	/* Unsafe/regex.scm 189 */
												BgL_strz00_1958 = BgL_strz00_1211;
											}
										else
											{
												obj_t BgL_auxz00_2895;

												BgL_auxz00_2895 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2025z00zz__regexpz00, BINT(((long) 7318)),
													BGl_string2037z00zz__regexpz00,
													BGl_string2036z00zz__regexpz00, BgL_strz00_1211);
												FAILURE(BgL_auxz00_2895, BFALSE, BFALSE);
											}
										{	/* Unsafe/regex.scm 179 */
											bool_t BgL_test2106z00_2899;

											{	/* Unsafe/regex.scm 179 */
												bool_t BgL_res1796z00_1963;

												BgL_res1796z00_1963 = BGL_REGEXPP(BgL_patz00_1210);
												BgL_test2106z00_2899 = BgL_res1796z00_1963;
											}
											if (BgL_test2106z00_2899)
												{	/* Unsafe/regex.scm 180 */
													int BgL_auxz00_2918;
													int BgL_auxz00_2908;
													obj_t BgL_tmpz00_2901;

													{	/* Unsafe/regex.scm 180 */
														obj_t BgL_tmpz00_2919;

														if (INTEGERP(BgL_endz00_1220))
															{	/* Unsafe/regex.scm 180 */
																BgL_tmpz00_2919 = BgL_endz00_1220;
															}
														else
															{
																obj_t BgL_auxz00_2922;

																BgL_auxz00_2922 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string2025z00zz__regexpz00,
																	BINT(((long) 6953)),
																	BGl_string2037z00zz__regexpz00,
																	BGl_string2038z00zz__regexpz00,
																	BgL_endz00_1220);
																FAILURE(BgL_auxz00_2922, BFALSE, BFALSE);
															}
														BgL_auxz00_2918 = CINT(BgL_tmpz00_2919);
													}
													{	/* Unsafe/regex.scm 180 */
														obj_t BgL_tmpz00_2910;

														if (INTEGERP(BgL_begz00_1219))
															{	/* Unsafe/regex.scm 180 */
																BgL_tmpz00_2910 = BgL_begz00_1219;
															}
														else
															{
																obj_t BgL_auxz00_2913;

																BgL_auxz00_2913 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string2025z00zz__regexpz00,
																	BINT(((long) 6949)),
																	BGl_string2037z00zz__regexpz00,
																	BGl_string2038z00zz__regexpz00,
																	BgL_begz00_1219);
																FAILURE(BgL_auxz00_2913, BFALSE, BFALSE);
															}
														BgL_auxz00_2908 = CINT(BgL_tmpz00_2910);
													}
													if (BGl_regexpzf3zf3zz__regexpz00(BgL_patz00_1210))
														{	/* Unsafe/regex.scm 180 */
															BgL_tmpz00_2901 = BgL_patz00_1210;
														}
													else
														{
															obj_t BgL_auxz00_2904;

															BgL_auxz00_2904 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string2025z00zz__regexpz00,
																BINT(((long) 6933)),
																BGl_string2037z00zz__regexpz00,
																BGl_string2027z00zz__regexpz00,
																BgL_patz00_1210);
															FAILURE(BgL_auxz00_2904, BFALSE, BFALSE);
														}
													return
														bgl_regmatch(BgL_tmpz00_2901,
														BSTRING_TO_STRING(BgL_strz00_1958), ((bool_t) 0),
														BgL_auxz00_2908, BgL_auxz00_2918);
												}
											else
												{	/* Unsafe/regex.scm 181 */
													obj_t BgL_rxz00_1960;

													{	/* Unsafe/regex.scm 181 */
														obj_t BgL_arg1298z00_1961;

														BgL_arg1298z00_1961 =
															BGl_pregexpzd2normaliza7ez75zz__regexpz00
															(BgL_patz00_1210);
														{	/* Unsafe/regex.scm 181 */
															obj_t BgL_tmpz00_2929;

															if (STRINGP(BgL_arg1298z00_1961))
																{	/* Unsafe/regex.scm 181 */
																	BgL_tmpz00_2929 = BgL_arg1298z00_1961;
																}
															else
																{
																	obj_t BgL_auxz00_2932;

																	BgL_auxz00_2932 =
																		BGl_typezd2errorzd2zz__errorz00
																		(BGl_string2025z00zz__regexpz00,
																		BINT(((long) 7008)),
																		BGl_string2037z00zz__regexpz00,
																		BGl_string2036z00zz__regexpz00,
																		BgL_arg1298z00_1961);
																	FAILURE(BgL_auxz00_2932, BFALSE, BFALSE);
																}
															BgL_rxz00_1960 =
																bgl_regcomp(BgL_tmpz00_2929, BNIL,
																((bool_t) 0));
													}}
													{	/* Unsafe/regex.scm 181 */
														obj_t BgL_valz00_1962;

														{	/* Unsafe/regex.scm 182 */
															int BgL_auxz00_2947;
															int BgL_tmpz00_2937;

															{	/* Unsafe/regex.scm 182 */
																obj_t BgL_tmpz00_2948;

																if (INTEGERP(BgL_endz00_1220))
																	{	/* Unsafe/regex.scm 182 */
																		BgL_tmpz00_2948 = BgL_endz00_1220;
																	}
																else
																	{
																		obj_t BgL_auxz00_2951;

																		BgL_auxz00_2951 =
																			BGl_typezd2errorzd2zz__errorz00
																			(BGl_string2025z00zz__regexpz00,
																			BINT(((long) 7061)),
																			BGl_string2037z00zz__regexpz00,
																			BGl_string2038z00zz__regexpz00,
																			BgL_endz00_1220);
																		FAILURE(BgL_auxz00_2951, BFALSE, BFALSE);
																	}
																BgL_auxz00_2947 = CINT(BgL_tmpz00_2948);
															}
															{	/* Unsafe/regex.scm 182 */
																obj_t BgL_tmpz00_2939;

																if (INTEGERP(BgL_begz00_1219))
																	{	/* Unsafe/regex.scm 182 */
																		BgL_tmpz00_2939 = BgL_begz00_1219;
																	}
																else
																	{
																		obj_t BgL_auxz00_2942;

																		BgL_auxz00_2942 =
																			BGl_typezd2errorzd2zz__errorz00
																			(BGl_string2025z00zz__regexpz00,
																			BINT(((long) 7057)),
																			BGl_string2037z00zz__regexpz00,
																			BGl_string2038z00zz__regexpz00,
																			BgL_begz00_1219);
																		FAILURE(BgL_auxz00_2942, BFALSE, BFALSE);
																	}
																BgL_tmpz00_2937 = CINT(BgL_tmpz00_2939);
															}
															BgL_valz00_1962 =
																bgl_regmatch(BgL_rxz00_1960,
																BSTRING_TO_STRING(BgL_strz00_1958),
																((bool_t) 0), BgL_tmpz00_2937, BgL_auxz00_2947);
														}
														{	/* Unsafe/regex.scm 182 */

															bgl_regfree(BgL_rxz00_1960);
															return BgL_valz00_1962;
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
		BgL_patz00_14, obj_t BgL_strz00_15, obj_t BgL_begz00_16,
		obj_t BgL_endz00_17)
	{
		{	/* Unsafe/regex.scm 189 */
			{	/* Unsafe/regex.scm 179 */
				bool_t BgL_test2113z00_2960;

				{	/* Unsafe/regex.scm 179 */
					bool_t BgL_res1797z00_1968;

					BgL_res1797z00_1968 = BGL_REGEXPP(BgL_patz00_14);
					BgL_test2113z00_2960 = BgL_res1797z00_1968;
				}
				if (BgL_test2113z00_2960)
					{	/* Unsafe/regex.scm 179 */
						return
							bgl_regmatch(BgL_patz00_14,
							BSTRING_TO_STRING(BgL_strz00_15), ((bool_t) 0),
							CINT(BgL_begz00_16), CINT(BgL_endz00_17));
					}
				else
					{	/* Unsafe/regex.scm 181 */
						obj_t BgL_rxz00_1965;

						BgL_rxz00_1965 =
							bgl_regcomp(BGl_pregexpzd2normaliza7ez75zz__regexpz00
							(BgL_patz00_14), BNIL, ((bool_t) 0));
						{	/* Unsafe/regex.scm 181 */
							obj_t BgL_valz00_1967;

							BgL_valz00_1967 =
								bgl_regmatch(BgL_rxz00_1965,
								BSTRING_TO_STRING(BgL_strz00_15), ((bool_t) 0),
								CINT(BgL_begz00_16), CINT(BgL_endz00_17));
							{	/* Unsafe/regex.scm 182 */

								bgl_regfree(BgL_rxz00_1965);
								return BgL_valz00_1967;
							}
						}
					}
			}
		}

	}



/* _pregexp-match */
	obj_t BGl__pregexpzd2matchzd2zz__regexpz00(obj_t BgL_env1118z00_25,
		obj_t BgL_opt1117z00_24)
	{
		{	/* Unsafe/regex.scm 195 */
			{	/* Unsafe/regex.scm 195 */
				obj_t BgL_patz00_1221;
				obj_t BgL_strz00_1222;

				BgL_patz00_1221 = VECTOR_REF(BgL_opt1117z00_24, ((long) 0));
				BgL_strz00_1222 = VECTOR_REF(BgL_opt1117z00_24, ((long) 1));
				switch (VECTOR_LENGTH(BgL_opt1117z00_24))
					{
					case ((long) 2):

						{	/* Unsafe/regex.scm 195 */
							long BgL_endz00_1227;

							{	/* Unsafe/regex.scm 195 */
								obj_t BgL_stringz00_1969;

								if (STRINGP(BgL_strz00_1222))
									{	/* Unsafe/regex.scm 195 */
										BgL_stringz00_1969 = BgL_strz00_1222;
									}
								else
									{
										obj_t BgL_auxz00_2977;

										BgL_auxz00_2977 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string2025z00zz__regexpz00, BINT(((long) 7714)),
											BGl_string2039z00zz__regexpz00,
											BGl_string2036z00zz__regexpz00, BgL_strz00_1222);
										FAILURE(BgL_auxz00_2977, BFALSE, BFALSE);
									}
								BgL_endz00_1227 = STRING_LENGTH(BgL_stringz00_1969);
							}
							{	/* Unsafe/regex.scm 195 */

								{	/* Unsafe/regex.scm 195 */
									obj_t BgL_strz00_1971;

									if (STRINGP(BgL_strz00_1222))
										{	/* Unsafe/regex.scm 195 */
											BgL_strz00_1971 = BgL_strz00_1222;
										}
									else
										{
											obj_t BgL_auxz00_2984;

											BgL_auxz00_2984 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2025z00zz__regexpz00, BINT(((long) 7659)),
												BGl_string2039z00zz__regexpz00,
												BGl_string2036z00zz__regexpz00, BgL_strz00_1222);
											FAILURE(BgL_auxz00_2984, BFALSE, BFALSE);
										}
									{	/* Unsafe/regex.scm 179 */
										bool_t BgL_test2116z00_2988;

										{	/* Unsafe/regex.scm 179 */
											bool_t BgL_res1799z00_1976;

											BgL_res1799z00_1976 = BGL_REGEXPP(BgL_patz00_1221);
											BgL_test2116z00_2988 = BgL_res1799z00_1976;
										}
										if (BgL_test2116z00_2988)
											{	/* Unsafe/regex.scm 180 */
												obj_t BgL_tmpz00_2990;

												if (BGl_regexpzf3zf3zz__regexpz00(BgL_patz00_1221))
													{	/* Unsafe/regex.scm 180 */
														BgL_tmpz00_2990 = BgL_patz00_1221;
													}
												else
													{
														obj_t BgL_auxz00_2993;

														BgL_auxz00_2993 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2025z00zz__regexpz00,
															BINT(((long) 6933)),
															BGl_string2039z00zz__regexpz00,
															BGl_string2027z00zz__regexpz00, BgL_patz00_1221);
														FAILURE(BgL_auxz00_2993, BFALSE, BFALSE);
													}
												return
													bgl_regmatch(BgL_tmpz00_2990,
													BSTRING_TO_STRING(BgL_strz00_1971), ((bool_t) 1),
													(int) (((long) 0)), (int) (BgL_endz00_1227));
											}
										else
											{	/* Unsafe/regex.scm 181 */
												obj_t BgL_rxz00_1973;

												{	/* Unsafe/regex.scm 181 */
													obj_t BgL_arg1298z00_1974;

													BgL_arg1298z00_1974 =
														BGl_pregexpzd2normaliza7ez75zz__regexpz00
														(BgL_patz00_1221);
													{	/* Unsafe/regex.scm 181 */
														obj_t BgL_tmpz00_3002;

														if (STRINGP(BgL_arg1298z00_1974))
															{	/* Unsafe/regex.scm 181 */
																BgL_tmpz00_3002 = BgL_arg1298z00_1974;
															}
														else
															{
																obj_t BgL_auxz00_3005;

																BgL_auxz00_3005 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string2025z00zz__regexpz00,
																	BINT(((long) 7008)),
																	BGl_string2039z00zz__regexpz00,
																	BGl_string2036z00zz__regexpz00,
																	BgL_arg1298z00_1974);
																FAILURE(BgL_auxz00_3005, BFALSE, BFALSE);
															}
														BgL_rxz00_1973 =
															bgl_regcomp(BgL_tmpz00_3002, BNIL, ((bool_t) 0));
												}}
												{	/* Unsafe/regex.scm 181 */
													obj_t BgL_valz00_1975;

													BgL_valz00_1975 =
														bgl_regmatch(BgL_rxz00_1973,
														BSTRING_TO_STRING(BgL_strz00_1971), ((bool_t) 1),
														(int) (((long) 0)), (int) (BgL_endz00_1227));
													{	/* Unsafe/regex.scm 182 */

														bgl_regfree(BgL_rxz00_1973);
														return BgL_valz00_1975;
													}
												}
											}
									}
								}
							}
						}
						break;
					case ((long) 3):

						{	/* Unsafe/regex.scm 195 */
							obj_t BgL_begz00_1228;

							BgL_begz00_1228 = VECTOR_REF(BgL_opt1117z00_24, ((long) 2));
							{	/* Unsafe/regex.scm 195 */
								long BgL_endz00_1229;

								{	/* Unsafe/regex.scm 195 */
									obj_t BgL_stringz00_1977;

									if (STRINGP(BgL_strz00_1222))
										{	/* Unsafe/regex.scm 195 */
											BgL_stringz00_1977 = BgL_strz00_1222;
										}
									else
										{
											obj_t BgL_auxz00_3018;

											BgL_auxz00_3018 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2025z00zz__regexpz00, BINT(((long) 7714)),
												BGl_string2039z00zz__regexpz00,
												BGl_string2036z00zz__regexpz00, BgL_strz00_1222);
											FAILURE(BgL_auxz00_3018, BFALSE, BFALSE);
										}
									BgL_endz00_1229 = STRING_LENGTH(BgL_stringz00_1977);
								}
								{	/* Unsafe/regex.scm 195 */

									{	/* Unsafe/regex.scm 195 */
										obj_t BgL_strz00_1979;

										if (STRINGP(BgL_strz00_1222))
											{	/* Unsafe/regex.scm 195 */
												BgL_strz00_1979 = BgL_strz00_1222;
											}
										else
											{
												obj_t BgL_auxz00_3025;

												BgL_auxz00_3025 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2025z00zz__regexpz00, BINT(((long) 7659)),
													BGl_string2039z00zz__regexpz00,
													BGl_string2036z00zz__regexpz00, BgL_strz00_1222);
												FAILURE(BgL_auxz00_3025, BFALSE, BFALSE);
											}
										{	/* Unsafe/regex.scm 179 */
											bool_t BgL_test2121z00_3029;

											{	/* Unsafe/regex.scm 179 */
												bool_t BgL_res1801z00_1984;

												BgL_res1801z00_1984 = BGL_REGEXPP(BgL_patz00_1221);
												BgL_test2121z00_3029 = BgL_res1801z00_1984;
											}
											if (BgL_test2121z00_3029)
												{	/* Unsafe/regex.scm 180 */
													int BgL_auxz00_3038;
													obj_t BgL_tmpz00_3031;

													{	/* Unsafe/regex.scm 180 */
														obj_t BgL_tmpz00_3040;

														if (INTEGERP(BgL_begz00_1228))
															{	/* Unsafe/regex.scm 180 */
																BgL_tmpz00_3040 = BgL_begz00_1228;
															}
														else
															{
																obj_t BgL_auxz00_3043;

																BgL_auxz00_3043 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string2025z00zz__regexpz00,
																	BINT(((long) 6949)),
																	BGl_string2039z00zz__regexpz00,
																	BGl_string2038z00zz__regexpz00,
																	BgL_begz00_1228);
																FAILURE(BgL_auxz00_3043, BFALSE, BFALSE);
															}
														BgL_auxz00_3038 = CINT(BgL_tmpz00_3040);
													}
													if (BGl_regexpzf3zf3zz__regexpz00(BgL_patz00_1221))
														{	/* Unsafe/regex.scm 180 */
															BgL_tmpz00_3031 = BgL_patz00_1221;
														}
													else
														{
															obj_t BgL_auxz00_3034;

															BgL_auxz00_3034 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string2025z00zz__regexpz00,
																BINT(((long) 6933)),
																BGl_string2039z00zz__regexpz00,
																BGl_string2027z00zz__regexpz00,
																BgL_patz00_1221);
															FAILURE(BgL_auxz00_3034, BFALSE, BFALSE);
														}
													return
														bgl_regmatch(BgL_tmpz00_3031,
														BSTRING_TO_STRING(BgL_strz00_1979), ((bool_t) 1),
														BgL_auxz00_3038, (int) (BgL_endz00_1229));
												}
											else
												{	/* Unsafe/regex.scm 181 */
													obj_t BgL_rxz00_1981;

													{	/* Unsafe/regex.scm 181 */
														obj_t BgL_arg1298z00_1982;

														BgL_arg1298z00_1982 =
															BGl_pregexpzd2normaliza7ez75zz__regexpz00
															(BgL_patz00_1221);
														{	/* Unsafe/regex.scm 181 */
															obj_t BgL_tmpz00_3051;

															if (STRINGP(BgL_arg1298z00_1982))
																{	/* Unsafe/regex.scm 181 */
																	BgL_tmpz00_3051 = BgL_arg1298z00_1982;
																}
															else
																{
																	obj_t BgL_auxz00_3054;

																	BgL_auxz00_3054 =
																		BGl_typezd2errorzd2zz__errorz00
																		(BGl_string2025z00zz__regexpz00,
																		BINT(((long) 7008)),
																		BGl_string2039z00zz__regexpz00,
																		BGl_string2036z00zz__regexpz00,
																		BgL_arg1298z00_1982);
																	FAILURE(BgL_auxz00_3054, BFALSE, BFALSE);
																}
															BgL_rxz00_1981 =
																bgl_regcomp(BgL_tmpz00_3051, BNIL,
																((bool_t) 0));
													}}
													{	/* Unsafe/regex.scm 181 */
														obj_t BgL_valz00_1983;

														{	/* Unsafe/regex.scm 182 */
															int BgL_tmpz00_3059;

															{	/* Unsafe/regex.scm 182 */
																obj_t BgL_tmpz00_3061;

																if (INTEGERP(BgL_begz00_1228))
																	{	/* Unsafe/regex.scm 182 */
																		BgL_tmpz00_3061 = BgL_begz00_1228;
																	}
																else
																	{
																		obj_t BgL_auxz00_3064;

																		BgL_auxz00_3064 =
																			BGl_typezd2errorzd2zz__errorz00
																			(BGl_string2025z00zz__regexpz00,
																			BINT(((long) 7057)),
																			BGl_string2039z00zz__regexpz00,
																			BGl_string2038z00zz__regexpz00,
																			BgL_begz00_1228);
																		FAILURE(BgL_auxz00_3064, BFALSE, BFALSE);
																	}
																BgL_tmpz00_3059 = CINT(BgL_tmpz00_3061);
															}
															BgL_valz00_1983 =
																bgl_regmatch(BgL_rxz00_1981,
																BSTRING_TO_STRING(BgL_strz00_1979),
																((bool_t) 1), BgL_tmpz00_3059,
																(int) (BgL_endz00_1229));
														}
														{	/* Unsafe/regex.scm 182 */

															bgl_regfree(BgL_rxz00_1981);
															return BgL_valz00_1983;
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

						{	/* Unsafe/regex.scm 195 */
							obj_t BgL_begz00_1230;

							BgL_begz00_1230 = VECTOR_REF(BgL_opt1117z00_24, ((long) 2));
							{	/* Unsafe/regex.scm 195 */
								obj_t BgL_endz00_1231;

								BgL_endz00_1231 = VECTOR_REF(BgL_opt1117z00_24, ((long) 3));
								{	/* Unsafe/regex.scm 195 */

									{	/* Unsafe/regex.scm 195 */
										obj_t BgL_strz00_1985;

										if (STRINGP(BgL_strz00_1222))
											{	/* Unsafe/regex.scm 195 */
												BgL_strz00_1985 = BgL_strz00_1222;
											}
										else
											{
												obj_t BgL_auxz00_3076;

												BgL_auxz00_3076 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2025z00zz__regexpz00, BINT(((long) 7659)),
													BGl_string2039z00zz__regexpz00,
													BGl_string2036z00zz__regexpz00, BgL_strz00_1222);
												FAILURE(BgL_auxz00_3076, BFALSE, BFALSE);
											}
										{	/* Unsafe/regex.scm 179 */
											bool_t BgL_test2127z00_3080;

											{	/* Unsafe/regex.scm 179 */
												bool_t BgL_res1802z00_1990;

												BgL_res1802z00_1990 = BGL_REGEXPP(BgL_patz00_1221);
												BgL_test2127z00_3080 = BgL_res1802z00_1990;
											}
											if (BgL_test2127z00_3080)
												{	/* Unsafe/regex.scm 180 */
													int BgL_auxz00_3099;
													int BgL_auxz00_3089;
													obj_t BgL_tmpz00_3082;

													{	/* Unsafe/regex.scm 180 */
														obj_t BgL_tmpz00_3100;

														if (INTEGERP(BgL_endz00_1231))
															{	/* Unsafe/regex.scm 180 */
																BgL_tmpz00_3100 = BgL_endz00_1231;
															}
														else
															{
																obj_t BgL_auxz00_3103;

																BgL_auxz00_3103 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string2025z00zz__regexpz00,
																	BINT(((long) 6953)),
																	BGl_string2039z00zz__regexpz00,
																	BGl_string2038z00zz__regexpz00,
																	BgL_endz00_1231);
																FAILURE(BgL_auxz00_3103, BFALSE, BFALSE);
															}
														BgL_auxz00_3099 = CINT(BgL_tmpz00_3100);
													}
													{	/* Unsafe/regex.scm 180 */
														obj_t BgL_tmpz00_3091;

														if (INTEGERP(BgL_begz00_1230))
															{	/* Unsafe/regex.scm 180 */
																BgL_tmpz00_3091 = BgL_begz00_1230;
															}
														else
															{
																obj_t BgL_auxz00_3094;

																BgL_auxz00_3094 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string2025z00zz__regexpz00,
																	BINT(((long) 6949)),
																	BGl_string2039z00zz__regexpz00,
																	BGl_string2038z00zz__regexpz00,
																	BgL_begz00_1230);
																FAILURE(BgL_auxz00_3094, BFALSE, BFALSE);
															}
														BgL_auxz00_3089 = CINT(BgL_tmpz00_3091);
													}
													if (BGl_regexpzf3zf3zz__regexpz00(BgL_patz00_1221))
														{	/* Unsafe/regex.scm 180 */
															BgL_tmpz00_3082 = BgL_patz00_1221;
														}
													else
														{
															obj_t BgL_auxz00_3085;

															BgL_auxz00_3085 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string2025z00zz__regexpz00,
																BINT(((long) 6933)),
																BGl_string2039z00zz__regexpz00,
																BGl_string2027z00zz__regexpz00,
																BgL_patz00_1221);
															FAILURE(BgL_auxz00_3085, BFALSE, BFALSE);
														}
													return
														bgl_regmatch(BgL_tmpz00_3082,
														BSTRING_TO_STRING(BgL_strz00_1985), ((bool_t) 1),
														BgL_auxz00_3089, BgL_auxz00_3099);
												}
											else
												{	/* Unsafe/regex.scm 181 */
													obj_t BgL_rxz00_1987;

													{	/* Unsafe/regex.scm 181 */
														obj_t BgL_arg1298z00_1988;

														BgL_arg1298z00_1988 =
															BGl_pregexpzd2normaliza7ez75zz__regexpz00
															(BgL_patz00_1221);
														{	/* Unsafe/regex.scm 181 */
															obj_t BgL_tmpz00_3110;

															if (STRINGP(BgL_arg1298z00_1988))
																{	/* Unsafe/regex.scm 181 */
																	BgL_tmpz00_3110 = BgL_arg1298z00_1988;
																}
															else
																{
																	obj_t BgL_auxz00_3113;

																	BgL_auxz00_3113 =
																		BGl_typezd2errorzd2zz__errorz00
																		(BGl_string2025z00zz__regexpz00,
																		BINT(((long) 7008)),
																		BGl_string2039z00zz__regexpz00,
																		BGl_string2036z00zz__regexpz00,
																		BgL_arg1298z00_1988);
																	FAILURE(BgL_auxz00_3113, BFALSE, BFALSE);
																}
															BgL_rxz00_1987 =
																bgl_regcomp(BgL_tmpz00_3110, BNIL,
																((bool_t) 0));
													}}
													{	/* Unsafe/regex.scm 181 */
														obj_t BgL_valz00_1989;

														{	/* Unsafe/regex.scm 182 */
															int BgL_auxz00_3128;
															int BgL_tmpz00_3118;

															{	/* Unsafe/regex.scm 182 */
																obj_t BgL_tmpz00_3129;

																if (INTEGERP(BgL_endz00_1231))
																	{	/* Unsafe/regex.scm 182 */
																		BgL_tmpz00_3129 = BgL_endz00_1231;
																	}
																else
																	{
																		obj_t BgL_auxz00_3132;

																		BgL_auxz00_3132 =
																			BGl_typezd2errorzd2zz__errorz00
																			(BGl_string2025z00zz__regexpz00,
																			BINT(((long) 7061)),
																			BGl_string2039z00zz__regexpz00,
																			BGl_string2038z00zz__regexpz00,
																			BgL_endz00_1231);
																		FAILURE(BgL_auxz00_3132, BFALSE, BFALSE);
																	}
																BgL_auxz00_3128 = CINT(BgL_tmpz00_3129);
															}
															{	/* Unsafe/regex.scm 182 */
																obj_t BgL_tmpz00_3120;

																if (INTEGERP(BgL_begz00_1230))
																	{	/* Unsafe/regex.scm 182 */
																		BgL_tmpz00_3120 = BgL_begz00_1230;
																	}
																else
																	{
																		obj_t BgL_auxz00_3123;

																		BgL_auxz00_3123 =
																			BGl_typezd2errorzd2zz__errorz00
																			(BGl_string2025z00zz__regexpz00,
																			BINT(((long) 7057)),
																			BGl_string2039z00zz__regexpz00,
																			BGl_string2038z00zz__regexpz00,
																			BgL_begz00_1230);
																		FAILURE(BgL_auxz00_3123, BFALSE, BFALSE);
																	}
																BgL_tmpz00_3118 = CINT(BgL_tmpz00_3120);
															}
															BgL_valz00_1989 =
																bgl_regmatch(BgL_rxz00_1987,
																BSTRING_TO_STRING(BgL_strz00_1985),
																((bool_t) 1), BgL_tmpz00_3118, BgL_auxz00_3128);
														}
														{	/* Unsafe/regex.scm 182 */

															bgl_regfree(BgL_rxz00_1987);
															return BgL_valz00_1989;
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
		BgL_patz00_20, obj_t BgL_strz00_21, obj_t BgL_begz00_22,
		obj_t BgL_endz00_23)
	{
		{	/* Unsafe/regex.scm 195 */
			{	/* Unsafe/regex.scm 179 */
				bool_t BgL_test2134z00_3141;

				{	/* Unsafe/regex.scm 179 */
					bool_t BgL_res1803z00_1995;

					BgL_res1803z00_1995 = BGL_REGEXPP(BgL_patz00_20);
					BgL_test2134z00_3141 = BgL_res1803z00_1995;
				}
				if (BgL_test2134z00_3141)
					{	/* Unsafe/regex.scm 179 */
						return
							bgl_regmatch(BgL_patz00_20,
							BSTRING_TO_STRING(BgL_strz00_21), ((bool_t) 1),
							CINT(BgL_begz00_22), CINT(BgL_endz00_23));
					}
				else
					{	/* Unsafe/regex.scm 181 */
						obj_t BgL_rxz00_1992;

						BgL_rxz00_1992 =
							bgl_regcomp(BGl_pregexpzd2normaliza7ez75zz__regexpz00
							(BgL_patz00_20), BNIL, ((bool_t) 0));
						{	/* Unsafe/regex.scm 181 */
							obj_t BgL_valz00_1994;

							BgL_valz00_1994 =
								bgl_regmatch(BgL_rxz00_1992,
								BSTRING_TO_STRING(BgL_strz00_21), ((bool_t) 1),
								CINT(BgL_begz00_22), CINT(BgL_endz00_23));
							{	/* Unsafe/regex.scm 182 */

								bgl_regfree(BgL_rxz00_1992);
								return BgL_valz00_1994;
							}
						}
					}
			}
		}

	}



/* pregexp-match-n-positions! */
	BGL_EXPORTED_DEF long
		BGl_pregexpzd2matchzd2nzd2positionsz12zc0zz__regexpz00(obj_t BgL_patz00_26,
		obj_t BgL_strz00_27, obj_t BgL_vresz00_28, long BgL_begz00_29,
		long BgL_endz00_30)
	{
		{	/* Unsafe/regex.scm 201 */
			{	/* Unsafe/regex.scm 202 */
				obj_t BgL_posz00_1232;
				long BgL_lenz00_1233;

				{	/* Unsafe/regex.scm 179 */
					bool_t BgL_test2135z00_3154;

					{	/* Unsafe/regex.scm 179 */
						bool_t BgL_res1804z00_2001;

						BgL_res1804z00_2001 = BGL_REGEXPP(BgL_patz00_26);
						BgL_test2135z00_3154 = BgL_res1804z00_2001;
					}
					if (BgL_test2135z00_3154)
						{	/* Unsafe/regex.scm 179 */
							BgL_posz00_1232 =
								bgl_regmatch(BgL_patz00_26,
								BSTRING_TO_STRING(BgL_strz00_27), ((bool_t) 0),
								(int) (BgL_begz00_29), (int) (BgL_endz00_30));
						}
					else
						{	/* Unsafe/regex.scm 181 */
							obj_t BgL_rxz00_1998;

							BgL_rxz00_1998 =
								bgl_regcomp(BGl_pregexpzd2normaliza7ez75zz__regexpz00
								(BgL_patz00_26), BNIL, ((bool_t) 0));
							{	/* Unsafe/regex.scm 181 */
								obj_t BgL_valz00_2000;

								BgL_valz00_2000 =
									bgl_regmatch(BgL_rxz00_1998,
									BSTRING_TO_STRING(BgL_strz00_27), ((bool_t) 0),
									(int) (BgL_begz00_29), (int) (BgL_endz00_30));
								{	/* Unsafe/regex.scm 182 */

									bgl_regfree(BgL_rxz00_1998);
									BgL_posz00_1232 = BgL_valz00_2000;
				}}}}
				BgL_lenz00_1233 = (VECTOR_LENGTH(BgL_vresz00_28) & ~(((long) 1)));
				{
					long BgL_iz00_1235;
					obj_t BgL_posz00_1236;

					BgL_iz00_1235 = ((long) 0);
					BgL_posz00_1236 = BgL_posz00_1232;
				BgL_zc3z04anonymousza31301ze3z87_1237:
					{	/* Unsafe/regex.scm 207 */
						bool_t BgL_test2136z00_3170;

						if ((BgL_iz00_1235 == BgL_lenz00_1233))
							{	/* Unsafe/regex.scm 207 */
								BgL_test2136z00_3170 = ((bool_t) 1);
							}
						else
							{	/* Unsafe/regex.scm 207 */
								BgL_test2136z00_3170 = NULLP(BgL_posz00_1236);
							}
						if (BgL_test2136z00_3170)
							{	/* Unsafe/regex.scm 207 */
								return BgL_iz00_1235;
							}
						else
							{	/* Unsafe/regex.scm 209 */
								bool_t BgL_test2138z00_3174;

								{	/* Unsafe/regex.scm 209 */
									obj_t BgL_tmpz00_3175;

									BgL_tmpz00_3175 = CAR(((obj_t) BgL_posz00_1236));
									BgL_test2138z00_3174 = PAIRP(BgL_tmpz00_3175);
								}
								if (BgL_test2138z00_3174)
									{	/* Unsafe/regex.scm 209 */
										{	/* Unsafe/regex.scm 210 */
											obj_t BgL_arg1306z00_1242;

											{	/* Unsafe/regex.scm 210 */
												obj_t BgL_pairz00_2016;

												BgL_pairz00_2016 = CAR(((obj_t) BgL_posz00_1236));
												BgL_arg1306z00_1242 = CAR(BgL_pairz00_2016);
											}
											VECTOR_SET(BgL_vresz00_28, BgL_iz00_1235,
												BgL_arg1306z00_1242);
										}
										{	/* Unsafe/regex.scm 211 */
											long BgL_arg1307z00_1243;
											obj_t BgL_arg1308z00_1244;

											BgL_arg1307z00_1243 = (BgL_iz00_1235 + ((long) 2));
											{	/* Unsafe/regex.scm 211 */
												obj_t BgL_pairz00_2024;

												BgL_pairz00_2024 = CDR(((obj_t) BgL_posz00_1236));
												BgL_arg1308z00_1244 = CAR(BgL_pairz00_2024);
											}
											VECTOR_SET(BgL_vresz00_28, BgL_arg1307z00_1243,
												BgL_arg1308z00_1244);
										}
										{	/* Unsafe/regex.scm 212 */
											long BgL_arg1309z00_1245;
											obj_t BgL_arg1310z00_1246;

											BgL_arg1309z00_1245 = (BgL_iz00_1235 + ((long) 2));
											BgL_arg1310z00_1246 = CDR(((obj_t) BgL_posz00_1236));
											{
												obj_t BgL_posz00_3192;
												long BgL_iz00_3191;

												BgL_iz00_3191 = BgL_arg1309z00_1245;
												BgL_posz00_3192 = BgL_arg1310z00_1246;
												BgL_posz00_1236 = BgL_posz00_3192;
												BgL_iz00_1235 = BgL_iz00_3191;
												goto BgL_zc3z04anonymousza31301ze3z87_1237;
											}
										}
									}
								else
									{	/* Unsafe/regex.scm 209 */
										VECTOR_SET(BgL_vresz00_28, BgL_iz00_1235,
											BINT(((long) -1)));
										VECTOR_SET(BgL_vresz00_28,
											(BgL_iz00_1235 + ((long) 2)), BINT(((long) -1)));
										{	/* Unsafe/regex.scm 216 */
											long BgL_arg1312z00_1248;
											obj_t BgL_arg1313z00_1249;

											BgL_arg1312z00_1248 = (BgL_iz00_1235 + ((long) 2));
											BgL_arg1313z00_1249 = CDR(((obj_t) BgL_posz00_1236));
											{
												obj_t BgL_posz00_3202;
												long BgL_iz00_3201;

												BgL_iz00_3201 = BgL_arg1312z00_1248;
												BgL_posz00_3202 = BgL_arg1313z00_1249;
												BgL_posz00_1236 = BgL_posz00_3202;
												BgL_iz00_1235 = BgL_iz00_3201;
												goto BgL_zc3z04anonymousza31301ze3z87_1237;
											}
										}
									}
							}
					}
				}
			}
		}

	}



/* &pregexp-match-n-positions! */
	obj_t BGl_z62pregexpzd2matchzd2nzd2positionsz12za2zz__regexpz00(obj_t
		BgL_envz00_2515, obj_t BgL_patz00_2516, obj_t BgL_strz00_2517,
		obj_t BgL_vresz00_2518, obj_t BgL_begz00_2519, obj_t BgL_endz00_2520)
	{
		{	/* Unsafe/regex.scm 201 */
			{	/* Unsafe/regex.scm 202 */
				long BgL_tmpz00_3203;

				{	/* Unsafe/regex.scm 202 */
					long BgL_auxz00_3234;
					long BgL_auxz00_3225;
					obj_t BgL_auxz00_3218;
					obj_t BgL_auxz00_3211;
					obj_t BgL_auxz00_3204;

					{	/* Unsafe/regex.scm 202 */
						obj_t BgL_tmpz00_3235;

						if (INTEGERP(BgL_endz00_2520))
							{	/* Unsafe/regex.scm 202 */
								BgL_tmpz00_3235 = BgL_endz00_2520;
							}
						else
							{
								obj_t BgL_auxz00_3238;

								BgL_auxz00_3238 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2025z00zz__regexpz00, BINT(((long) 8051)),
									BGl_string2040z00zz__regexpz00,
									BGl_string2038z00zz__regexpz00, BgL_endz00_2520);
								FAILURE(BgL_auxz00_3238, BFALSE, BFALSE);
							}
						BgL_auxz00_3234 = (long) CINT(BgL_tmpz00_3235);
					}
					{	/* Unsafe/regex.scm 202 */
						obj_t BgL_tmpz00_3226;

						if (INTEGERP(BgL_begz00_2519))
							{	/* Unsafe/regex.scm 202 */
								BgL_tmpz00_3226 = BgL_begz00_2519;
							}
						else
							{
								obj_t BgL_auxz00_3229;

								BgL_auxz00_3229 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2025z00zz__regexpz00, BINT(((long) 8051)),
									BGl_string2040z00zz__regexpz00,
									BGl_string2038z00zz__regexpz00, BgL_begz00_2519);
								FAILURE(BgL_auxz00_3229, BFALSE, BFALSE);
							}
						BgL_auxz00_3225 = (long) CINT(BgL_tmpz00_3226);
					}
					if (VECTORP(BgL_vresz00_2518))
						{	/* Unsafe/regex.scm 202 */
							BgL_auxz00_3218 = BgL_vresz00_2518;
						}
					else
						{
							obj_t BgL_auxz00_3221;

							BgL_auxz00_3221 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2025z00zz__regexpz00,
								BINT(((long) 8051)), BGl_string2040z00zz__regexpz00,
								BGl_string2041z00zz__regexpz00, BgL_vresz00_2518);
							FAILURE(BgL_auxz00_3221, BFALSE, BFALSE);
						}
					if (STRINGP(BgL_strz00_2517))
						{	/* Unsafe/regex.scm 202 */
							BgL_auxz00_3211 = BgL_strz00_2517;
						}
					else
						{
							obj_t BgL_auxz00_3214;

							BgL_auxz00_3214 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2025z00zz__regexpz00,
								BINT(((long) 8051)), BGl_string2040z00zz__regexpz00,
								BGl_string2036z00zz__regexpz00, BgL_strz00_2517);
							FAILURE(BgL_auxz00_3214, BFALSE, BFALSE);
						}
					if (BGl_regexpzf3zf3zz__regexpz00(BgL_patz00_2516))
						{	/* Unsafe/regex.scm 202 */
							BgL_auxz00_3204 = BgL_patz00_2516;
						}
					else
						{
							obj_t BgL_auxz00_3207;

							BgL_auxz00_3207 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2025z00zz__regexpz00,
								BINT(((long) 8051)), BGl_string2040z00zz__regexpz00,
								BGl_string2027z00zz__regexpz00, BgL_patz00_2516);
							FAILURE(BgL_auxz00_3207, BFALSE, BFALSE);
						}
					BgL_tmpz00_3203 =
						BGl_pregexpzd2matchzd2nzd2positionsz12zc0zz__regexpz00
						(BgL_auxz00_3204, BgL_auxz00_3211, BgL_auxz00_3218, BgL_auxz00_3225,
						BgL_auxz00_3234);
				}
				return BINT(BgL_tmpz00_3203);
			}
		}

	}



/* pregexp-read-escaped-number */
	obj_t BGl_pregexpzd2readzd2escapedzd2numberzd2zz__regexpz00(obj_t BgL_sz00_31,
		obj_t BgL_iz00_32, long BgL_nz00_33)
	{
		{	/* Unsafe/regex.scm 221 */
			if ((((long) CINT(BgL_iz00_32) + ((long) 1)) < BgL_nz00_33))
				{	/* Unsafe/regex.scm 224 */
					unsigned char BgL_cz00_1256;

					BgL_cz00_1256 =
						STRING_REF(BgL_sz00_31, ((long) CINT(BgL_iz00_32) + ((long) 1)));
					{	/* Unsafe/regex.scm 225 */
						bool_t BgL_test2145z00_3252;

						{	/* Unsafe/regex.scm 225 */
							bool_t BgL_res1818z00_2050;

							BgL_res1818z00_2050 = isdigit(BgL_cz00_1256);
							BgL_test2145z00_3252 = BgL_res1818z00_2050;
						}
						if (BgL_test2145z00_3252)
							{	/* Unsafe/regex.scm 226 */
								long BgL_g1050z00_1258;
								obj_t BgL_g1051z00_1259;

								BgL_g1050z00_1258 = ((long) CINT(BgL_iz00_32) + ((long) 2));
								{	/* Unsafe/regex.scm 226 */
									obj_t BgL_list1336z00_1284;

									BgL_list1336z00_1284 =
										MAKE_YOUNG_PAIR(BCHAR(BgL_cz00_1256), BNIL);
									BgL_g1051z00_1259 = BgL_list1336z00_1284;
								}
								{
									long BgL_iz00_1261;
									obj_t BgL_rz00_1262;

									BgL_iz00_1261 = BgL_g1050z00_1258;
									BgL_rz00_1262 = BgL_g1051z00_1259;
								BgL_zc3z04anonymousza31317ze3z87_1263:
									if ((BgL_iz00_1261 >= BgL_nz00_33))
										{	/* Unsafe/regex.scm 228 */
											obj_t BgL_arg1319z00_1265;

											{	/* Unsafe/regex.scm 228 */
												obj_t BgL_arg1324z00_1268;

												BgL_arg1324z00_1268 =
													BGl_listzd2ze3stringz31zz__r4_strings_6_7z00
													(bgl_reverse_bang(BgL_rz00_1262));
												{	/* Ieee/number.scm 165 */

													BgL_arg1319z00_1265 =
														BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00
														(BgL_arg1324z00_1268, BINT(((long) 10)));
											}}
											{	/* Unsafe/regex.scm 228 */
												obj_t BgL_list1320z00_1266;

												{	/* Unsafe/regex.scm 228 */
													obj_t BgL_arg1322z00_1267;

													BgL_arg1322z00_1267 =
														MAKE_YOUNG_PAIR(BINT(BgL_iz00_1261), BNIL);
													BgL_list1320z00_1266 =
														MAKE_YOUNG_PAIR(BgL_arg1319z00_1265,
														BgL_arg1322z00_1267);
												}
												return BgL_list1320z00_1266;
											}
										}
									else
										{	/* Unsafe/regex.scm 229 */
											unsigned char BgL_cz00_1272;

											BgL_cz00_1272 = STRING_REF(BgL_sz00_31, BgL_iz00_1261);
											{	/* Unsafe/regex.scm 230 */
												bool_t BgL_test2147z00_3268;

												{	/* Unsafe/regex.scm 230 */
													bool_t BgL_res1824z00_2062;

													BgL_res1824z00_2062 = isdigit(BgL_cz00_1272);
													BgL_test2147z00_3268 = BgL_res1824z00_2062;
												}
												if (BgL_test2147z00_3268)
													{	/* Unsafe/regex.scm 231 */
														long BgL_arg1328z00_1274;
														obj_t BgL_arg1329z00_1275;

														BgL_arg1328z00_1274 = (BgL_iz00_1261 + ((long) 1));
														BgL_arg1329z00_1275 =
															MAKE_YOUNG_PAIR(BCHAR(BgL_cz00_1272),
															BgL_rz00_1262);
														{
															obj_t BgL_rz00_3274;
															long BgL_iz00_3273;

															BgL_iz00_3273 = BgL_arg1328z00_1274;
															BgL_rz00_3274 = BgL_arg1329z00_1275;
															BgL_rz00_1262 = BgL_rz00_3274;
															BgL_iz00_1261 = BgL_iz00_3273;
															goto BgL_zc3z04anonymousza31317ze3z87_1263;
														}
													}
												else
													{	/* Unsafe/regex.scm 232 */
														obj_t BgL_arg1330z00_1276;

														{	/* Unsafe/regex.scm 232 */
															obj_t BgL_arg1334z00_1279;

															BgL_arg1334z00_1279 =
																BGl_listzd2ze3stringz31zz__r4_strings_6_7z00
																(bgl_reverse_bang(BgL_rz00_1262));
															{	/* Ieee/number.scm 165 */

																BgL_arg1330z00_1276 =
																	BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00
																	(BgL_arg1334z00_1279, BINT(((long) 10)));
														}}
														{	/* Unsafe/regex.scm 232 */
															obj_t BgL_list1331z00_1277;

															{	/* Unsafe/regex.scm 232 */
																obj_t BgL_arg1333z00_1278;

																BgL_arg1333z00_1278 =
																	MAKE_YOUNG_PAIR(BINT(BgL_iz00_1261), BNIL);
																BgL_list1331z00_1277 =
																	MAKE_YOUNG_PAIR(BgL_arg1330z00_1276,
																	BgL_arg1333z00_1278);
															}
															return BgL_list1331z00_1277;
														}
													}
											}
										}
								}
							}
						else
							{	/* Unsafe/regex.scm 225 */
								return BFALSE;
							}
					}
				}
			else
				{	/* Unsafe/regex.scm 223 */
					return BFALSE;
				}
		}

	}



/* pregexp-list-ref */
	obj_t BGl_pregexpzd2listzd2refz00zz__regexpz00(obj_t BgL_sz00_34,
		obj_t BgL_iz00_35)
	{
		{	/* Unsafe/regex.scm 238 */
			{
				obj_t BgL_sz00_2091;
				long BgL_kz00_2092;

				BgL_sz00_2091 = BgL_sz00_34;
				BgL_kz00_2092 = ((long) 0);
			BgL_loopz00_2090:
				if (NULLP(BgL_sz00_2091))
					{	/* Unsafe/regex.scm 242 */
						return BFALSE;
					}
				else
					{	/* Unsafe/regex.scm 242 */
						if ((BgL_kz00_2092 == (long) CINT(BgL_iz00_35)))
							{	/* Unsafe/regex.scm 243 */
								return CAR(((obj_t) BgL_sz00_2091));
							}
						else
							{
								long BgL_kz00_3292;
								obj_t BgL_sz00_3289;

								BgL_sz00_3289 = CDR(((obj_t) BgL_sz00_2091));
								BgL_kz00_3292 = (BgL_kz00_2092 + ((long) 1));
								BgL_kz00_2092 = BgL_kz00_3292;
								BgL_sz00_2091 = BgL_sz00_3289;
								goto BgL_loopz00_2090;
							}
					}
			}
		}

	}



/* pregexp-replace-aux */
	obj_t BGl_pregexpzd2replacezd2auxz00zz__regexpz00(obj_t BgL_strz00_36,
		obj_t BgL_insz00_37, long BgL_nz00_38, obj_t BgL_backrefsz00_39)
	{
		{	/* Unsafe/regex.scm 249 */
			{
				obj_t BgL_iz00_1297;
				obj_t BgL_rz00_1298;

				BgL_iz00_1297 = BINT(((long) 0));
				BgL_rz00_1298 = BGl_string2042z00zz__regexpz00;
			BgL_zc3z04anonymousza31344ze3z87_1299:
				if (((long) CINT(BgL_iz00_1297) >= BgL_nz00_38))
					{	/* Unsafe/regex.scm 251 */
						return BgL_rz00_1298;
					}
				else
					{	/* Unsafe/regex.scm 252 */
						unsigned char BgL_cz00_1301;

						BgL_cz00_1301 =
							STRING_REF(BgL_insz00_37, (long) CINT(BgL_iz00_1297));
						if ((BgL_cz00_1301 == ((unsigned char) '\\')))
							{	/* Unsafe/regex.scm 254 */
								obj_t BgL_brzd2izd2_1303;

								BgL_brzd2izd2_1303 =
									BGl_pregexpzd2readzd2escapedzd2numberzd2zz__regexpz00
									(BgL_insz00_37, BgL_iz00_1297, BgL_nz00_38);
								{	/* Unsafe/regex.scm 254 */
									obj_t BgL_brz00_1304;

									if (CBOOL(BgL_brzd2izd2_1303))
										{	/* Unsafe/regex.scm 255 */
											BgL_brz00_1304 = CAR(((obj_t) BgL_brzd2izd2_1303));
										}
									else
										{	/* Unsafe/regex.scm 255 */
											if (
												(STRING_REF(BgL_insz00_37,
														((long) CINT(BgL_iz00_1297) + ((long) 1))) ==
													((unsigned char) '&')))
												{	/* Unsafe/regex.scm 256 */
													BgL_brz00_1304 = BINT(((long) 0));
												}
											else
												{	/* Unsafe/regex.scm 256 */
													BgL_brz00_1304 = BFALSE;
												}
										}
									{	/* Unsafe/regex.scm 255 */
										obj_t BgL_iz00_1305;

										if (CBOOL(BgL_brzd2izd2_1303))
											{	/* Unsafe/regex.scm 258 */
												obj_t BgL_pairz00_2130;

												BgL_pairz00_2130 = CDR(((obj_t) BgL_brzd2izd2_1303));
												BgL_iz00_1305 = CAR(BgL_pairz00_2130);
											}
										else
											{	/* Unsafe/regex.scm 258 */
												if (CBOOL(BgL_brz00_1304))
													{	/* Unsafe/regex.scm 259 */
														BgL_iz00_1305 =
															ADDFX(BgL_iz00_1297, BINT(((long) 2)));
													}
												else
													{	/* Unsafe/regex.scm 259 */
														BgL_iz00_1305 =
															ADDFX(BgL_iz00_1297, BINT(((long) 1)));
											}}
										{	/* Unsafe/regex.scm 258 */

											if (CBOOL(BgL_brz00_1304))
												{	/* Unsafe/regex.scm 267 */
													obj_t BgL_arg1347z00_1306;

													{	/* Unsafe/regex.scm 267 */
														obj_t BgL_backrefz00_1307;

														BgL_backrefz00_1307 =
															BGl_pregexpzd2listzd2refz00zz__regexpz00
															(BgL_backrefsz00_39, BgL_brz00_1304);
														if (CBOOL(BgL_backrefz00_1307))
															{	/* Unsafe/regex.scm 270 */
																obj_t BgL_arg1348z00_1308;

																{	/* Unsafe/regex.scm 270 */
																	obj_t BgL_arg1350z00_1309;
																	obj_t BgL_arg1351z00_1310;

																	BgL_arg1350z00_1309 =
																		CAR(((obj_t) BgL_backrefz00_1307));
																	BgL_arg1351z00_1310 =
																		CDR(((obj_t) BgL_backrefz00_1307));
																	BgL_arg1348z00_1308 =
																		c_substring(BgL_strz00_36,
																		(long) CINT(BgL_arg1350z00_1309),
																		(long) CINT(BgL_arg1351z00_1310));
																}
																BgL_arg1347z00_1306 =
																	string_append(BgL_rz00_1298,
																	BgL_arg1348z00_1308);
															}
														else
															{	/* Unsafe/regex.scm 268 */
																BgL_arg1347z00_1306 = BgL_rz00_1298;
															}
													}
													{
														obj_t BgL_rz00_3337;
														obj_t BgL_iz00_3336;

														BgL_iz00_3336 = BgL_iz00_1305;
														BgL_rz00_3337 = BgL_arg1347z00_1306;
														BgL_rz00_1298 = BgL_rz00_3337;
														BgL_iz00_1297 = BgL_iz00_3336;
														goto BgL_zc3z04anonymousza31344ze3z87_1299;
													}
												}
											else
												{	/* Unsafe/regex.scm 262 */
													unsigned char BgL_c2z00_1311;

													BgL_c2z00_1311 =
														STRING_REF(BgL_insz00_37,
														(long) CINT(BgL_iz00_1305));
													{	/* Unsafe/regex.scm 263 */
														long BgL_arg1352z00_1312;
														obj_t BgL_arg1353z00_1313;

														BgL_arg1352z00_1312 =
															((long) CINT(BgL_iz00_1305) + ((long) 1));
														if ((BgL_c2z00_1311 == ((unsigned char) '$')))
															{	/* Unsafe/regex.scm 264 */
																BgL_arg1353z00_1313 = BgL_rz00_1298;
															}
														else
															{	/* Unsafe/regex.scm 265 */
																obj_t BgL_arg1355z00_1315;

																{	/* Unsafe/regex.scm 265 */
																	obj_t BgL_list1356z00_1316;

																	BgL_list1356z00_1316 =
																		MAKE_YOUNG_PAIR(BCHAR(BgL_c2z00_1311),
																		BNIL);
																	BgL_arg1355z00_1315 =
																		BGl_listzd2ze3stringz31zz__r4_strings_6_7z00
																		(BgL_list1356z00_1316);
																}
																BgL_arg1353z00_1313 =
																	string_append(BgL_rz00_1298,
																	BgL_arg1355z00_1315);
															}
														{
															obj_t BgL_rz00_3350;
															obj_t BgL_iz00_3348;

															BgL_iz00_3348 = BINT(BgL_arg1352z00_1312);
															BgL_rz00_3350 = BgL_arg1353z00_1313;
															BgL_rz00_1298 = BgL_rz00_3350;
															BgL_iz00_1297 = BgL_iz00_3348;
															goto BgL_zc3z04anonymousza31344ze3z87_1299;
														}
													}
												}
										}
									}
								}
							}
						else
							{	/* Unsafe/regex.scm 272 */
								long BgL_arg1363z00_1322;
								obj_t BgL_arg1364z00_1323;

								BgL_arg1363z00_1322 = ((long) CINT(BgL_iz00_1297) + ((long) 1));
								{	/* Unsafe/regex.scm 272 */
									obj_t BgL_arg1365z00_1324;

									{	/* Unsafe/regex.scm 272 */
										obj_t BgL_list1366z00_1325;

										BgL_list1366z00_1325 =
											MAKE_YOUNG_PAIR(BCHAR(BgL_cz00_1301), BNIL);
										BgL_arg1365z00_1324 =
											BGl_listzd2ze3stringz31zz__r4_strings_6_7z00
											(BgL_list1366z00_1325);
									}
									BgL_arg1364z00_1323 =
										string_append(BgL_rz00_1298, BgL_arg1365z00_1324);
								}
								{
									obj_t BgL_rz00_3359;
									obj_t BgL_iz00_3357;

									BgL_iz00_3357 = BINT(BgL_arg1363z00_1322);
									BgL_rz00_3359 = BgL_arg1364z00_1323;
									BgL_rz00_1298 = BgL_rz00_3359;
									BgL_iz00_1297 = BgL_iz00_3357;
									goto BgL_zc3z04anonymousza31344ze3z87_1299;
								}
							}
					}
			}
		}

	}



/* pregexp-split */
	BGL_EXPORTED_DEF obj_t BGl_pregexpzd2splitzd2zz__regexpz00(obj_t
		BgL_patz00_40, obj_t BgL_strz00_41)
	{
		{	/* Unsafe/regex.scm 277 */
			{	/* Unsafe/regex.scm 279 */
				long BgL_nz00_1327;

				BgL_nz00_1327 = STRING_LENGTH(BgL_strz00_41);
				{
					obj_t BgL_iz00_1330;
					obj_t BgL_rz00_1331;
					bool_t BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_1332;

					BgL_iz00_1330 = BINT(((long) 0));
					BgL_rz00_1331 = BNIL;
					BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_1332 = ((bool_t) 0);
				BgL_zc3z04anonymousza31367ze3z87_1333:
					if (((long) CINT(BgL_iz00_1330) >= BgL_nz00_1327))
						{	/* Unsafe/regex.scm 281 */
							return bgl_reverse_bang(BgL_rz00_1331);
						}
					else
						{	/* Unsafe/regex.scm 282 */
							obj_t BgL_g1053z00_1335;

							{	/* Unsafe/regex.scm 179 */
								bool_t BgL_test2160z00_3366;

								{	/* Unsafe/regex.scm 179 */
									bool_t BgL_res1853z00_2163;

									BgL_res1853z00_2163 = BGL_REGEXPP(BgL_patz00_40);
									BgL_test2160z00_3366 = BgL_res1853z00_2163;
								}
								if (BgL_test2160z00_3366)
									{	/* Unsafe/regex.scm 179 */
										BgL_g1053z00_1335 =
											bgl_regmatch(BgL_patz00_40,
											BSTRING_TO_STRING(BgL_strz00_41), ((bool_t) 0),
											CINT(BgL_iz00_1330), (int) (BgL_nz00_1327));
									}
								else
									{	/* Unsafe/regex.scm 181 */
										obj_t BgL_rxz00_2160;

										BgL_rxz00_2160 =
											bgl_regcomp(BGl_pregexpzd2normaliza7ez75zz__regexpz00
											(BgL_patz00_40), BNIL, ((bool_t) 0));
										{	/* Unsafe/regex.scm 181 */
											obj_t BgL_valz00_2162;

											BgL_valz00_2162 =
												bgl_regmatch(BgL_rxz00_2160,
												BSTRING_TO_STRING(BgL_strz00_41), ((bool_t) 0),
												CINT(BgL_iz00_1330), (int) (BgL_nz00_1327));
											{	/* Unsafe/regex.scm 182 */

												bgl_regfree(BgL_rxz00_2160);
												BgL_g1053z00_1335 = BgL_valz00_2162;
							}}}}
							if (CBOOL(BgL_g1053z00_1335))
								{	/* Unsafe/regex.scm 285 */
									obj_t BgL_jkz00_1338;

									BgL_jkz00_1338 = CAR(((obj_t) BgL_g1053z00_1335));
									{	/* Unsafe/regex.scm 286 */
										obj_t BgL_jz00_1339;
										obj_t BgL_kz00_1340;

										BgL_jz00_1339 = CAR(((obj_t) BgL_jkz00_1338));
										BgL_kz00_1340 = CDR(((obj_t) BgL_jkz00_1338));
										if (
											((long) CINT(BgL_jz00_1339) ==
												(long) CINT(BgL_kz00_1340)))
											{	/* Unsafe/regex.scm 290 */
												long BgL_arg1370z00_1342;
												obj_t BgL_arg1371z00_1343;

												BgL_arg1370z00_1342 =
													((long) CINT(BgL_kz00_1340) + ((long) 1));
												BgL_arg1371z00_1343 =
													MAKE_YOUNG_PAIR(c_substring(BgL_strz00_41,
														(long) CINT(BgL_iz00_1330),
														((long) CINT(BgL_jz00_1339) + ((long) 1))),
													BgL_rz00_1331);
												{
													bool_t
														BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_3401;
													obj_t BgL_rz00_3400;
													obj_t BgL_iz00_3398;

													BgL_iz00_3398 = BINT(BgL_arg1370z00_1342);
													BgL_rz00_3400 = BgL_arg1371z00_1343;
													BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_3401
														= ((bool_t) 1);
													BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_1332
														=
														BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_3401;
													BgL_rz00_1331 = BgL_rz00_3400;
													BgL_iz00_1330 = BgL_iz00_3398;
													goto BgL_zc3z04anonymousza31367ze3z87_1333;
												}
											}
										else
											{	/* Unsafe/regex.scm 292 */
												bool_t BgL_test2163z00_3402;

												if (
													((long) CINT(BgL_jz00_1339) ==
														(long) CINT(BgL_iz00_1330)))
													{	/* Unsafe/regex.scm 292 */
														BgL_test2163z00_3402 =
															BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_1332;
													}
												else
													{	/* Unsafe/regex.scm 292 */
														BgL_test2163z00_3402 = ((bool_t) 0);
													}
												if (BgL_test2163z00_3402)
													{
														bool_t
															BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_3408;
														obj_t BgL_iz00_3407;

														BgL_iz00_3407 = BgL_kz00_1340;
														BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_3408
															= ((bool_t) 0);
														BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_1332
															=
															BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_3408;
														BgL_iz00_1330 = BgL_iz00_3407;
														goto BgL_zc3z04anonymousza31367ze3z87_1333;
													}
												else
													{	/* Unsafe/regex.scm 296 */
														obj_t BgL_arg1376z00_1348;

														BgL_arg1376z00_1348 =
															MAKE_YOUNG_PAIR(c_substring(BgL_strz00_41,
																(long) CINT(BgL_iz00_1330),
																(long) CINT(BgL_jz00_1339)), BgL_rz00_1331);
														{
															bool_t
																BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_3415;
															obj_t BgL_rz00_3414;
															obj_t BgL_iz00_3413;

															BgL_iz00_3413 = BgL_kz00_1340;
															BgL_rz00_3414 = BgL_arg1376z00_1348;
															BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_3415
																= ((bool_t) 0);
															BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_1332
																=
																BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_3415;
															BgL_rz00_1331 = BgL_rz00_3414;
															BgL_iz00_1330 = BgL_iz00_3413;
															goto BgL_zc3z04anonymousza31367ze3z87_1333;
														}
													}
											}
									}
								}
							else
								{	/* Unsafe/regex.scm 297 */
									obj_t BgL_arg1378z00_1351;

									BgL_arg1378z00_1351 =
										MAKE_YOUNG_PAIR(c_substring(BgL_strz00_41,
											(long) CINT(BgL_iz00_1330), BgL_nz00_1327),
										BgL_rz00_1331);
									{
										bool_t
											BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_3422;
										obj_t BgL_rz00_3421;
										obj_t BgL_iz00_3419;

										BgL_iz00_3419 = BINT(BgL_nz00_1327);
										BgL_rz00_3421 = BgL_arg1378z00_1351;
										BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_3422 =
											((bool_t) 0);
										BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_1332 =
											BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_3422;
										BgL_rz00_1331 = BgL_rz00_3421;
										BgL_iz00_1330 = BgL_iz00_3419;
										goto BgL_zc3z04anonymousza31367ze3z87_1333;
									}
								}
						}
				}
			}
		}

	}



/* &pregexp-split */
	obj_t BGl_z62pregexpzd2splitzb0zz__regexpz00(obj_t BgL_envz00_2521,
		obj_t BgL_patz00_2522, obj_t BgL_strz00_2523)
	{
		{	/* Unsafe/regex.scm 277 */
			{	/* Unsafe/regex.scm 279 */
				obj_t BgL_auxz00_3424;

				if (STRINGP(BgL_strz00_2523))
					{	/* Unsafe/regex.scm 279 */
						BgL_auxz00_3424 = BgL_strz00_2523;
					}
				else
					{
						obj_t BgL_auxz00_3427;

						BgL_auxz00_3427 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2025z00zz__regexpz00,
							BINT(((long) 10923)), BGl_string2043z00zz__regexpz00,
							BGl_string2036z00zz__regexpz00, BgL_strz00_2523);
						FAILURE(BgL_auxz00_3427, BFALSE, BFALSE);
					}
				return
					BGl_pregexpzd2splitzd2zz__regexpz00(BgL_patz00_2522, BgL_auxz00_3424);
			}
		}

	}



/* pregexp-replace */
	BGL_EXPORTED_DEF obj_t BGl_pregexpzd2replacezd2zz__regexpz00(obj_t
		BgL_patz00_42, obj_t BgL_strz00_43, obj_t BgL_insz00_44)
	{
		{	/* Unsafe/regex.scm 302 */
			{	/* Unsafe/regex.scm 303 */
				long BgL_nz00_1354;

				BgL_nz00_1354 = STRING_LENGTH(BgL_strz00_43);
				{	/* Unsafe/regex.scm 303 */
					obj_t BgL_ppz00_1355;

					{	/* Unsafe/regex.scm 179 */
						bool_t BgL_test2166z00_3433;

						{	/* Unsafe/regex.scm 179 */
							bool_t BgL_res1862z00_2196;

							BgL_res1862z00_2196 = BGL_REGEXPP(BgL_patz00_42);
							BgL_test2166z00_3433 = BgL_res1862z00_2196;
						}
						if (BgL_test2166z00_3433)
							{	/* Unsafe/regex.scm 179 */
								BgL_ppz00_1355 =
									bgl_regmatch(BgL_patz00_42,
									BSTRING_TO_STRING(BgL_strz00_43), ((bool_t) 0),
									(int) (((long) 0)), (int) (BgL_nz00_1354));
							}
						else
							{	/* Unsafe/regex.scm 181 */
								obj_t BgL_rxz00_2193;

								BgL_rxz00_2193 =
									bgl_regcomp(BGl_pregexpzd2normaliza7ez75zz__regexpz00
									(BgL_patz00_42), BNIL, ((bool_t) 0));
								{	/* Unsafe/regex.scm 181 */
									obj_t BgL_valz00_2195;

									BgL_valz00_2195 =
										bgl_regmatch(BgL_rxz00_2193,
										BSTRING_TO_STRING(BgL_strz00_43), ((bool_t) 0),
										(int) (((long) 0)), (int) (BgL_nz00_1354));
									{	/* Unsafe/regex.scm 182 */

										bgl_regfree(BgL_rxz00_2193);
										BgL_ppz00_1355 = BgL_valz00_2195;
					}}}}
					{	/* Unsafe/regex.scm 304 */

						if (CBOOL(BgL_ppz00_1355))
							{	/* Unsafe/regex.scm 306 */
								long BgL_inszd2lenzd2_1356;
								obj_t BgL_mzd2izd2_1357;
								obj_t BgL_mzd2nzd2_1358;

								BgL_inszd2lenzd2_1356 = STRING_LENGTH(BgL_insz00_44);
								{	/* Unsafe/regex.scm 307 */
									obj_t BgL_pairz00_2202;

									BgL_pairz00_2202 = CAR(((obj_t) BgL_ppz00_1355));
									BgL_mzd2izd2_1357 = CAR(BgL_pairz00_2202);
								}
								{	/* Unsafe/regex.scm 308 */
									obj_t BgL_pairz00_2206;

									BgL_pairz00_2206 = CAR(((obj_t) BgL_ppz00_1355));
									BgL_mzd2nzd2_1358 = CDR(BgL_pairz00_2206);
								}
								return
									string_append_3(c_substring(BgL_strz00_43, ((long) 0),
										(long) CINT(BgL_mzd2izd2_1357)),
									BGl_pregexpzd2replacezd2auxz00zz__regexpz00(BgL_strz00_43,
										BgL_insz00_44, BgL_inszd2lenzd2_1356, BgL_ppz00_1355),
									c_substring(BgL_strz00_43, (long) CINT(BgL_mzd2nzd2_1358),
										BgL_nz00_1354));
							}
						else
							{	/* Unsafe/regex.scm 305 */
								return BgL_strz00_43;
							}
					}
				}
			}
		}

	}



/* &pregexp-replace */
	obj_t BGl_z62pregexpzd2replacezb0zz__regexpz00(obj_t BgL_envz00_2524,
		obj_t BgL_patz00_2525, obj_t BgL_strz00_2526, obj_t BgL_insz00_2527)
	{
		{	/* Unsafe/regex.scm 302 */
			{	/* Unsafe/regex.scm 303 */
				obj_t BgL_auxz00_3468;
				obj_t BgL_auxz00_3461;

				if (STRINGP(BgL_insz00_2527))
					{	/* Unsafe/regex.scm 303 */
						BgL_auxz00_3468 = BgL_insz00_2527;
					}
				else
					{
						obj_t BgL_auxz00_3471;

						BgL_auxz00_3471 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2025z00zz__regexpz00,
							BINT(((long) 11894)), BGl_string2044z00zz__regexpz00,
							BGl_string2036z00zz__regexpz00, BgL_insz00_2527);
						FAILURE(BgL_auxz00_3471, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_strz00_2526))
					{	/* Unsafe/regex.scm 303 */
						BgL_auxz00_3461 = BgL_strz00_2526;
					}
				else
					{
						obj_t BgL_auxz00_3464;

						BgL_auxz00_3464 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2025z00zz__regexpz00,
							BINT(((long) 11894)), BGl_string2044z00zz__regexpz00,
							BGl_string2036z00zz__regexpz00, BgL_strz00_2526);
						FAILURE(BgL_auxz00_3464, BFALSE, BFALSE);
					}
				return
					BGl_pregexpzd2replacezd2zz__regexpz00(BgL_patz00_2525,
					BgL_auxz00_3461, BgL_auxz00_3468);
			}
		}

	}



/* pregexp-replace* */
	BGL_EXPORTED_DEF obj_t BGl_pregexpzd2replaceza2z70zz__regexpz00(obj_t
		BgL_patz00_45, obj_t BgL_strz00_46, obj_t BgL_insz00_47)
	{
		{	/* Unsafe/regex.scm 317 */
			{	/* Unsafe/regex.scm 320 */
				obj_t BgL_patz00_1362;
				long BgL_nz00_1363;
				long BgL_inszd2lenzd2_1364;

				if (STRINGP(BgL_patz00_45))
					{	/* Unsafe/regex.scm 320 */
						BgL_patz00_1362 =
							bgl_regcomp(BGl_pregexpzd2normaliza7ez75zz__regexpz00
							(BgL_patz00_45), BNIL, ((bool_t) 1));
					}
				else
					{	/* Unsafe/regex.scm 320 */
						BgL_patz00_1362 = BgL_patz00_45;
					}
				BgL_nz00_1363 = STRING_LENGTH(BgL_strz00_46);
				BgL_inszd2lenzd2_1364 = STRING_LENGTH(BgL_insz00_47);
				{
					obj_t BgL_iz00_1366;
					obj_t BgL_rz00_1367;

					BgL_iz00_1366 = BINT(((long) 0));
					BgL_rz00_1367 = BGl_string2042z00zz__regexpz00;
				BgL_zc3z04anonymousza31383ze3z87_1368:
					if (((long) CINT(BgL_iz00_1366) >= BgL_nz00_1363))
						{	/* Unsafe/regex.scm 326 */
							return BgL_rz00_1367;
						}
					else
						{	/* Unsafe/regex.scm 327 */
							obj_t BgL_ppz00_1370;

							{	/* Unsafe/regex.scm 179 */
								bool_t BgL_test2172z00_3485;

								{	/* Unsafe/regex.scm 179 */
									bool_t BgL_res1870z00_2229;

									BgL_res1870z00_2229 = BGL_REGEXPP(BgL_patz00_1362);
									BgL_test2172z00_3485 = BgL_res1870z00_2229;
								}
								if (BgL_test2172z00_3485)
									{	/* Unsafe/regex.scm 179 */
										BgL_ppz00_1370 =
											bgl_regmatch(BgL_patz00_1362,
											BSTRING_TO_STRING(BgL_strz00_46), ((bool_t) 0),
											CINT(BgL_iz00_1366), (int) (BgL_nz00_1363));
									}
								else
									{	/* Unsafe/regex.scm 181 */
										obj_t BgL_rxz00_2226;

										BgL_rxz00_2226 =
											bgl_regcomp(BGl_pregexpzd2normaliza7ez75zz__regexpz00
											(BgL_patz00_1362), BNIL, ((bool_t) 0));
										{	/* Unsafe/regex.scm 181 */
											obj_t BgL_valz00_2228;

											BgL_valz00_2228 =
												bgl_regmatch(BgL_rxz00_2226,
												BSTRING_TO_STRING(BgL_strz00_46), ((bool_t) 0),
												CINT(BgL_iz00_1366), (int) (BgL_nz00_1363));
											{	/* Unsafe/regex.scm 182 */

												bgl_regfree(BgL_rxz00_2226);
												BgL_ppz00_1370 = BgL_valz00_2228;
							}}}}
							if (CBOOL(BgL_ppz00_1370))
								{	/* Unsafe/regex.scm 338 */
									obj_t BgL_arg1385z00_1371;
									obj_t BgL_arg1386z00_1372;

									{	/* Unsafe/regex.scm 338 */
										obj_t BgL_pairz00_2233;

										BgL_pairz00_2233 = CAR(((obj_t) BgL_ppz00_1370));
										BgL_arg1385z00_1371 = CDR(BgL_pairz00_2233);
									}
									{	/* Unsafe/regex.scm 341 */
										obj_t BgL_arg1387z00_1373;
										obj_t BgL_arg1388z00_1374;

										{	/* Unsafe/regex.scm 341 */
											obj_t BgL_arg1389z00_1375;

											{	/* Unsafe/regex.scm 341 */
												obj_t BgL_pairz00_2237;

												BgL_pairz00_2237 = CAR(((obj_t) BgL_ppz00_1370));
												BgL_arg1389z00_1375 = CAR(BgL_pairz00_2237);
											}
											BgL_arg1387z00_1373 =
												c_substring(BgL_strz00_46,
												(long) CINT(BgL_iz00_1366),
												(long) CINT(BgL_arg1389z00_1375));
										}
										BgL_arg1388z00_1374 =
											BGl_pregexpzd2replacezd2auxz00zz__regexpz00(BgL_strz00_46,
											BgL_insz00_47, BgL_inszd2lenzd2_1364, BgL_ppz00_1370);
										BgL_arg1386z00_1372 =
											string_append_3(BgL_rz00_1367, BgL_arg1387z00_1373,
											BgL_arg1388z00_1374);
									}
									{
										obj_t BgL_rz00_3512;
										obj_t BgL_iz00_3511;

										BgL_iz00_3511 = BgL_arg1385z00_1371;
										BgL_rz00_3512 = BgL_arg1386z00_1372;
										BgL_rz00_1367 = BgL_rz00_3512;
										BgL_iz00_1366 = BgL_iz00_3511;
										goto BgL_zc3z04anonymousza31383ze3z87_1368;
									}
								}
							else
								{	/* Unsafe/regex.scm 328 */
									if (((long) CINT(BgL_iz00_1366) == ((long) 0)))
										{	/* Unsafe/regex.scm 329 */
											return BgL_strz00_46;
										}
									else
										{	/* Unsafe/regex.scm 329 */
											return
												string_append(BgL_rz00_1367,
												c_substring(BgL_strz00_46,
													(long) CINT(BgL_iz00_1366), BgL_nz00_1363));
		}}}}}}

	}



/* &pregexp-replace* */
	obj_t BGl_z62pregexpzd2replaceza2z12zz__regexpz00(obj_t BgL_envz00_2528,
		obj_t BgL_patz00_2529, obj_t BgL_strz00_2530, obj_t BgL_insz00_2531)
	{
		{	/* Unsafe/regex.scm 317 */
			{	/* Unsafe/regex.scm 320 */
				obj_t BgL_auxz00_3527;
				obj_t BgL_auxz00_3520;

				if (STRINGP(BgL_insz00_2531))
					{	/* Unsafe/regex.scm 320 */
						BgL_auxz00_3527 = BgL_insz00_2531;
					}
				else
					{
						obj_t BgL_auxz00_3530;

						BgL_auxz00_3530 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2025z00zz__regexpz00,
							BINT(((long) 12518)), BGl_string2045z00zz__regexpz00,
							BGl_string2036z00zz__regexpz00, BgL_insz00_2531);
						FAILURE(BgL_auxz00_3530, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_strz00_2530))
					{	/* Unsafe/regex.scm 320 */
						BgL_auxz00_3520 = BgL_strz00_2530;
					}
				else
					{
						obj_t BgL_auxz00_3523;

						BgL_auxz00_3523 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2025z00zz__regexpz00,
							BINT(((long) 12518)), BGl_string2045z00zz__regexpz00,
							BGl_string2036z00zz__regexpz00, BgL_strz00_2530);
						FAILURE(BgL_auxz00_3523, BFALSE, BFALSE);
					}
				return
					BGl_pregexpzd2replaceza2z70zz__regexpz00(BgL_patz00_2529,
					BgL_auxz00_3520, BgL_auxz00_3527);
			}
		}

	}



/* pregexp-quote */
	BGL_EXPORTED_DEF obj_t BGl_pregexpzd2quotezd2zz__regexpz00(obj_t BgL_sz00_48)
	{
		{	/* Unsafe/regex.scm 347 */
			{	/* Unsafe/regex.scm 348 */
				long BgL_g1055z00_1381;

				BgL_g1055z00_1381 = (STRING_LENGTH(BgL_sz00_48) - ((long) 1));
				{
					long BgL_iz00_1384;
					obj_t BgL_rz00_1385;

					BgL_iz00_1384 = BgL_g1055z00_1381;
					BgL_rz00_1385 = BNIL;
				BgL_zc3z04anonymousza31394ze3z87_1386:
					if ((BgL_iz00_1384 < ((long) 0)))
						{	/* Unsafe/regex.scm 349 */
							return
								BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(BgL_rz00_1385);
						}
					else
						{	/* Unsafe/regex.scm 351 */
							long BgL_arg1396z00_1388;
							obj_t BgL_arg1397z00_1389;

							BgL_arg1396z00_1388 = (BgL_iz00_1384 - ((long) 1));
							{	/* Unsafe/regex.scm 352 */
								unsigned char BgL_cz00_1390;

								BgL_cz00_1390 = STRING_REF(BgL_sz00_48, BgL_iz00_1384);
								if (CBOOL(BGl_memvz00zz__r4_pairs_and_lists_6_3z00(BCHAR
											(BgL_cz00_1390), BGl_list2046z00zz__regexpz00)))
									{	/* Unsafe/regex.scm 355 */
										obj_t BgL_arg1399z00_1392;

										BgL_arg1399z00_1392 =
											MAKE_YOUNG_PAIR(BCHAR(BgL_cz00_1390), BgL_rz00_1385);
										BgL_arg1397z00_1389 =
											MAKE_YOUNG_PAIR(BCHAR(((unsigned char) '\\')),
											BgL_arg1399z00_1392);
									}
								else
									{	/* Unsafe/regex.scm 353 */
										BgL_arg1397z00_1389 =
											MAKE_YOUNG_PAIR(BCHAR(BgL_cz00_1390), BgL_rz00_1385);
									}
							}
							{
								obj_t BgL_rz00_3553;
								long BgL_iz00_3552;

								BgL_iz00_3552 = BgL_arg1396z00_1388;
								BgL_rz00_3553 = BgL_arg1397z00_1389;
								BgL_rz00_1385 = BgL_rz00_3553;
								BgL_iz00_1384 = BgL_iz00_3552;
								goto BgL_zc3z04anonymousza31394ze3z87_1386;
							}
						}
				}
			}
		}

	}



/* &pregexp-quote */
	obj_t BGl_z62pregexpzd2quotezb0zz__regexpz00(obj_t BgL_envz00_2532,
		obj_t BgL_sz00_2533)
	{
		{	/* Unsafe/regex.scm 347 */
			{	/* Unsafe/regex.scm 348 */
				obj_t BgL_auxz00_3554;

				if (STRINGP(BgL_sz00_2533))
					{	/* Unsafe/regex.scm 348 */
						BgL_auxz00_3554 = BgL_sz00_2533;
					}
				else
					{
						obj_t BgL_auxz00_3557;

						BgL_auxz00_3557 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2025z00zz__regexpz00,
							BINT(((long) 13479)), BGl_string2047z00zz__regexpz00,
							BGl_string2036z00zz__regexpz00, BgL_sz00_2533);
						FAILURE(BgL_auxz00_3557, BFALSE, BFALSE);
					}
				return BGl_pregexpzd2quotezd2zz__regexpz00(BgL_auxz00_3554);
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__regexpz00()
	{
		{	/* Unsafe/regex.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__regexpz00()
	{
		{	/* Unsafe/regex.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__regexpz00()
	{
		{	/* Unsafe/regex.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__regexpz00()
	{
		{	/* Unsafe/regex.scm 15 */
			return
				BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string2048z00zz__regexpz00));
		}

	}

#ifdef __cplusplus
}
#endif
