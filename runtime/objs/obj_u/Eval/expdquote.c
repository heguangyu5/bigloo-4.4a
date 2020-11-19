/*===========================================================================*/
/*   (Eval/expdquote.scm)                                                    */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Eval/expdquote.scm -indent -o objs/obj_u/Eval/expdquote.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern obj_t BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00(obj_t);
	static obj_t BGl_symbol1836z00zz__expander_quotez00 = BUNSPEC;
	static obj_t BGl_symbol1839z00zz__expander_quotez00 = BUNSPEC;
	static obj_t BGl_symbol1840z00zz__expander_quotez00 = BUNSPEC;
	static obj_t BGl_symbol1843z00zz__expander_quotez00 = BUNSPEC;
	static obj_t BGl_symbol1846z00zz__expander_quotez00 = BUNSPEC;
	static obj_t BGl_symbol1848z00zz__expander_quotez00 = BUNSPEC;
	static obj_t BGl_templatezd2orzd2splicezd2listzd2zz__expander_quotez00(obj_t,
		obj_t);
	extern obj_t BGl_expandzd2errorzd2zz__expandz00(obj_t, obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__expander_quotez00 = BUNSPEC;
	static obj_t BGl_symbol1850z00zz__expander_quotez00 = BUNSPEC;
	static obj_t BGl_symbol1852z00zz__expander_quotez00 = BUNSPEC;
	static obj_t BGl_symbol1856z00zz__expander_quotez00 = BUNSPEC;
	static obj_t BGl_symbol1858z00zz__expander_quotez00 = BUNSPEC;
	static obj_t BGl_listzd2templatezd2zz__expander_quotez00(obj_t, obj_t);
	static obj_t BGl_z62quasiquotationz62zz__expander_quotez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zz__expander_quotez00();
	extern obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zz__expander_quotez00();
	static obj_t BGl_z62expandzd2quotezb0zz__expander_quotez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_templatezd2orzd2splicez00zz__expander_quotez00(obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_methodzd2initzd2zz__expander_quotez00();
	BGL_EXPORTED_DECL obj_t BGl_quasiquotationz00zz__expander_quotez00(obj_t,
		obj_t);
	static obj_t BGl_templatez00zz__expander_quotez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__expander_quotez00(long, char *);
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
	static obj_t BGl_list1838z00zz__expander_quotez00 = BUNSPEC;
	static obj_t BGl_list1845z00zz__expander_quotez00 = BUNSPEC;
	static obj_t BGl_list1854z00zz__expander_quotez00 = BUNSPEC;
	static obj_t BGl_list1855z00zz__expander_quotez00 = BUNSPEC;
	static obj_t BGl_cnstzd2initzd2zz__expander_quotez00();
	static obj_t BGl_list1860z00zz__expander_quotez00 = BUNSPEC;
	static obj_t BGl_gczd2rootszd2initz00zz__expander_quotez00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__expander_quotez00();
	BGL_EXPORTED_DECL obj_t BGl_expandzd2quotezd2zz__expander_quotez00(obj_t,
		obj_t);
	extern obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_vectorzd2templatezd2zz__expander_quotez00(obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2quotezd2envz00zz__expander_quotez00,
		BgL_bgl_za762expandza7d2quot1863z00,
		BGl_z62expandzd2quotezb0zz__expander_quotez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_quasiquotationzd2envzd2zz__expander_quotez00,
		BgL_bgl_za762quasiquotatio1864za7,
		BGl_z62quasiquotationz62zz__expander_quotez00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1832z00zz__expander_quotez00,
		BgL_bgl_string1832za700za7za7_1865za7, "quote", 5);
	      DEFINE_STRING(BGl_string1833z00zz__expander_quotez00,
		BgL_bgl_string1833za700za7za7_1866za7, "Illegal `quote' form", 20);
	      DEFINE_STRING(BGl_string1834z00zz__expander_quotez00,
		BgL_bgl_string1834za700za7za7_1867za7, "quasiquotation", 14);
	      DEFINE_STRING(BGl_string1835z00zz__expander_quotez00,
		BgL_bgl_string1835za700za7za7_1868za7, "illegal `quasiquote' form", 25);
	      DEFINE_STRING(BGl_string1837z00zz__expander_quotez00,
		BgL_bgl_string1837za700za7za7_1869za7, "unquote", 7);
	      DEFINE_STRING(BGl_string1841z00zz__expander_quotez00,
		BgL_bgl_string1841za700za7za7_1870za7, "list", 4);
	      DEFINE_STRING(BGl_string1842z00zz__expander_quotez00,
		BgL_bgl_string1842za700za7za7_1871za7, "Illegal `unquote' form", 22);
	      DEFINE_STRING(BGl_string1844z00zz__expander_quotez00,
		BgL_bgl_string1844za700za7za7_1872za7, "quasiquote", 10);
	      DEFINE_STRING(BGl_string1847z00zz__expander_quotez00,
		BgL_bgl_string1847za700za7za7_1873za7, "cons*", 5);
	      DEFINE_STRING(BGl_string1849z00zz__expander_quotez00,
		BgL_bgl_string1849za700za7za7_1874za7, "list->vector", 12);
	      DEFINE_STRING(BGl_string1851z00zz__expander_quotez00,
		BgL_bgl_string1851za700za7za7_1875za7, "vector-tag-set!", 15);
	      DEFINE_STRING(BGl_string1853z00zz__expander_quotez00,
		BgL_bgl_string1853za700za7za7_1876za7, "let", 3);
	      DEFINE_STRING(BGl_string1857z00zz__expander_quotez00,
		BgL_bgl_string1857za700za7za7_1877za7, "unquote-splicing", 16);
	      DEFINE_STRING(BGl_string1859z00zz__expander_quotez00,
		BgL_bgl_string1859za700za7za7_1878za7, "eappend", 7);
	      DEFINE_STRING(BGl_string1861z00zz__expander_quotez00,
		BgL_bgl_string1861za700za7za7_1879za7, "Illegal `unquote-splicing' form",
		31);
	      DEFINE_STRING(BGl_string1862z00zz__expander_quotez00,
		BgL_bgl_string1862za700za7za7_1880za7, "__expander_quote", 16);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_symbol1836z00zz__expander_quotez00));
		     ADD_ROOT((void *) (&BGl_symbol1839z00zz__expander_quotez00));
		     ADD_ROOT((void *) (&BGl_symbol1840z00zz__expander_quotez00));
		     ADD_ROOT((void *) (&BGl_symbol1843z00zz__expander_quotez00));
		     ADD_ROOT((void *) (&BGl_symbol1846z00zz__expander_quotez00));
		     ADD_ROOT((void *) (&BGl_symbol1848z00zz__expander_quotez00));
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zz__expander_quotez00));
		     ADD_ROOT((void *) (&BGl_symbol1850z00zz__expander_quotez00));
		     ADD_ROOT((void *) (&BGl_symbol1852z00zz__expander_quotez00));
		     ADD_ROOT((void *) (&BGl_symbol1856z00zz__expander_quotez00));
		     ADD_ROOT((void *) (&BGl_symbol1858z00zz__expander_quotez00));
		     ADD_ROOT((void *) (&BGl_list1838z00zz__expander_quotez00));
		     ADD_ROOT((void *) (&BGl_list1845z00zz__expander_quotez00));
		     ADD_ROOT((void *) (&BGl_list1854z00zz__expander_quotez00));
		     ADD_ROOT((void *) (&BGl_list1855z00zz__expander_quotez00));
		     ADD_ROOT((void *) (&BGl_list1860z00zz__expander_quotez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__expander_quotez00(long
		BgL_checksumz00_2041, char *BgL_fromz00_2042)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__expander_quotez00))
				{
					BGl_requirezd2initializa7ationz75zz__expander_quotez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__expander_quotez00();
					BGl_cnstzd2initzd2zz__expander_quotez00();
					BGl_importedzd2moduleszd2initz00zz__expander_quotez00();
					return BGl_methodzd2initzd2zz__expander_quotez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__expander_quotez00()
	{
		{	/* Eval/expdquote.scm 14 */
			BGl_symbol1836z00zz__expander_quotez00 =
				bstring_to_symbol(BGl_string1837z00zz__expander_quotez00);
			BGl_symbol1839z00zz__expander_quotez00 =
				bstring_to_symbol(BGl_string1832z00zz__expander_quotez00);
			BGl_list1838z00zz__expander_quotez00 =
				MAKE_YOUNG_PAIR(BGl_symbol1839z00zz__expander_quotez00,
				MAKE_YOUNG_PAIR(BGl_symbol1836z00zz__expander_quotez00, BNIL));
			BGl_symbol1840z00zz__expander_quotez00 =
				bstring_to_symbol(BGl_string1841z00zz__expander_quotez00);
			BGl_symbol1843z00zz__expander_quotez00 =
				bstring_to_symbol(BGl_string1844z00zz__expander_quotez00);
			BGl_list1845z00zz__expander_quotez00 =
				MAKE_YOUNG_PAIR(BGl_symbol1839z00zz__expander_quotez00,
				MAKE_YOUNG_PAIR(BGl_symbol1843z00zz__expander_quotez00, BNIL));
			BGl_symbol1846z00zz__expander_quotez00 =
				bstring_to_symbol(BGl_string1847z00zz__expander_quotez00);
			BGl_symbol1848z00zz__expander_quotez00 =
				bstring_to_symbol(BGl_string1849z00zz__expander_quotez00);
			BGl_symbol1850z00zz__expander_quotez00 =
				bstring_to_symbol(BGl_string1851z00zz__expander_quotez00);
			BGl_symbol1852z00zz__expander_quotez00 =
				bstring_to_symbol(BGl_string1853z00zz__expander_quotez00);
			BGl_list1855z00zz__expander_quotez00 =
				MAKE_YOUNG_PAIR(BGl_symbol1839z00zz__expander_quotez00,
				MAKE_YOUNG_PAIR(BNIL, BNIL));
			BGl_list1854z00zz__expander_quotez00 =
				MAKE_YOUNG_PAIR(BGl_list1855z00zz__expander_quotez00, BNIL);
			BGl_symbol1856z00zz__expander_quotez00 =
				bstring_to_symbol(BGl_string1857z00zz__expander_quotez00);
			BGl_symbol1858z00zz__expander_quotez00 =
				bstring_to_symbol(BGl_string1859z00zz__expander_quotez00);
			return (BGl_list1860z00zz__expander_quotez00 =
				MAKE_YOUNG_PAIR(BGl_symbol1839z00zz__expander_quotez00,
					MAKE_YOUNG_PAIR(BGl_symbol1856z00zz__expander_quotez00, BNIL)),
				BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__expander_quotez00()
	{
		{	/* Eval/expdquote.scm 14 */
			return bgl_gc_roots_register();
		}

	}



/* expand-quote */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2quotezd2zz__expander_quotez00(obj_t
		BgL_xz00_3, obj_t BgL_ez00_4)
	{
		{	/* Eval/expdquote.scm 54 */
			if (PAIRP(BgL_xz00_3))
				{	/* Eval/expdquote.scm 55 */
					obj_t BgL_cdrzd2107zd2_1080;

					BgL_cdrzd2107zd2_1080 = CDR(BgL_xz00_3);
					if (PAIRP(BgL_cdrzd2107zd2_1080))
						{	/* Eval/expdquote.scm 55 */
							if (NULLP(CDR(BgL_cdrzd2107zd2_1080)))
								{	/* Eval/expdquote.scm 55 */
									return BgL_xz00_3;
								}
							else
								{	/* Eval/expdquote.scm 55 */
									return
										BGl_expandzd2errorzd2zz__expandz00
										(BGl_string1832z00zz__expander_quotez00,
										BGl_string1833z00zz__expander_quotez00, BgL_xz00_3);
								}
						}
					else
						{	/* Eval/expdquote.scm 55 */
							return
								BGl_expandzd2errorzd2zz__expandz00
								(BGl_string1832z00zz__expander_quotez00,
								BGl_string1833z00zz__expander_quotez00, BgL_xz00_3);
						}
				}
			else
				{	/* Eval/expdquote.scm 55 */
					return
						BGl_expandzd2errorzd2zz__expandz00
						(BGl_string1832z00zz__expander_quotez00,
						BGl_string1833z00zz__expander_quotez00, BgL_xz00_3);
				}
		}

	}



/* &expand-quote */
	obj_t BGl_z62expandzd2quotezb0zz__expander_quotez00(obj_t BgL_envz00_2035,
		obj_t BgL_xz00_2036, obj_t BgL_ez00_2037)
	{
		{	/* Eval/expdquote.scm 54 */
			return
				BGl_expandzd2quotezd2zz__expander_quotez00(BgL_xz00_2036,
				BgL_ez00_2037);
		}

	}



/* quasiquotation */
	BGL_EXPORTED_DEF obj_t BGl_quasiquotationz00zz__expander_quotez00(obj_t
		BgL_dz00_5, obj_t BgL_expz00_6)
	{
		{	/* Eval/expdquote.scm 82 */
			{	/* Eval/expdquote.scm 83 */
				bool_t BgL_test1885z00_2082;

				if (PAIRP(BgL_expz00_6))
					{	/* Eval/expdquote.scm 83 */
						bool_t BgL_test1887z00_2085;

						{	/* Eval/expdquote.scm 83 */
							obj_t BgL_tmpz00_2086;

							BgL_tmpz00_2086 = CDR(BgL_expz00_6);
							BgL_test1887z00_2085 = PAIRP(BgL_tmpz00_2086);
						}
						if (BgL_test1887z00_2085)
							{	/* Eval/expdquote.scm 83 */
								BgL_test1885z00_2082 = NULLP(CDR(CDR(BgL_expz00_6)));
							}
						else
							{	/* Eval/expdquote.scm 83 */
								BgL_test1885z00_2082 = ((bool_t) 0);
							}
					}
				else
					{	/* Eval/expdquote.scm 83 */
						BgL_test1885z00_2082 = ((bool_t) 0);
					}
				if (BgL_test1885z00_2082)
					{	/* Eval/expdquote.scm 83 */
						return
							BGl_templatez00zz__expander_quotez00(BgL_dz00_5,
							CAR(CDR(BgL_expz00_6)));
					}
				else
					{	/* Eval/expdquote.scm 83 */
						return
							BGl_expandzd2errorzd2zz__expandz00
							(BGl_string1834z00zz__expander_quotez00,
							BGl_string1835z00zz__expander_quotez00, BgL_expz00_6);
					}
			}
		}

	}



/* &quasiquotation */
	obj_t BGl_z62quasiquotationz62zz__expander_quotez00(obj_t BgL_envz00_2038,
		obj_t BgL_dz00_2039, obj_t BgL_expz00_2040)
	{
		{	/* Eval/expdquote.scm 82 */
			return
				BGl_quasiquotationz00zz__expander_quotez00(BgL_dz00_2039,
				BgL_expz00_2040);
		}

	}



/* template */
	obj_t BGl_templatez00zz__expander_quotez00(obj_t BgL_dz00_7,
		obj_t BgL_expz00_8)
	{
		{	/* Eval/expdquote.scm 90 */
		BGl_templatez00zz__expander_quotez00:
			if (((long) CINT(BgL_dz00_7) == ((long) 0)))
				{	/* Eval/expdquote.scm 91 */
					return BgL_expz00_8;
				}
			else
				{	/* Eval/expdquote.scm 93 */
					bool_t BgL_test1889z00_2100;

					if (PAIRP(BgL_expz00_8))
						{	/* Eval/expdquote.scm 93 */
							BgL_test1889z00_2100 =
								(CAR(BgL_expz00_8) == BGl_symbol1836z00zz__expander_quotez00);
						}
					else
						{	/* Eval/expdquote.scm 93 */
							BgL_test1889z00_2100 = ((bool_t) 0);
						}
					if (BgL_test1889z00_2100)
						{	/* Eval/expdquote.scm 94 */
							bool_t BgL_test1891z00_2105;

							{	/* Eval/expdquote.scm 94 */
								bool_t BgL_test1892z00_2106;

								{	/* Eval/expdquote.scm 94 */
									obj_t BgL_tmpz00_2107;

									BgL_tmpz00_2107 = CDR(BgL_expz00_8);
									BgL_test1892z00_2106 = PAIRP(BgL_tmpz00_2107);
								}
								if (BgL_test1892z00_2106)
									{	/* Eval/expdquote.scm 94 */
										BgL_test1891z00_2105 = NULLP(CDR(CDR(BgL_expz00_8)));
									}
								else
									{	/* Eval/expdquote.scm 94 */
										BgL_test1891z00_2105 = ((bool_t) 0);
									}
							}
							if (BgL_test1891z00_2105)
								{	/* Eval/expdquote.scm 94 */
									if ((BgL_dz00_7 == BINT(((long) 1))))
										{	/* Eval/expdquote.scm 96 */
											long BgL_arg1227z00_1113;
											obj_t BgL_arg1229z00_1114;

											BgL_arg1227z00_1113 =
												((long) CINT(BgL_dz00_7) - ((long) 1));
											BgL_arg1229z00_1114 = CAR(CDR(BgL_expz00_8));
											{
												obj_t BgL_expz00_2122;
												obj_t BgL_dz00_2120;

												BgL_dz00_2120 = BINT(BgL_arg1227z00_1113);
												BgL_expz00_2122 = BgL_arg1229z00_1114;
												BgL_expz00_8 = BgL_expz00_2122;
												BgL_dz00_7 = BgL_dz00_2120;
												goto BGl_templatez00zz__expander_quotez00;
											}
										}
									else
										{	/* Eval/expdquote.scm 97 */
											obj_t BgL_arg1232z00_1115;

											{	/* Eval/expdquote.scm 97 */
												long BgL_arg1243z00_1119;
												obj_t BgL_arg1245z00_1120;

												BgL_arg1243z00_1119 =
													((long) CINT(BgL_dz00_7) - ((long) 1));
												BgL_arg1245z00_1120 = CAR(CDR(BgL_expz00_8));
												BgL_arg1232z00_1115 =
													BGl_templatez00zz__expander_quotez00(BINT
													(BgL_arg1243z00_1119), BgL_arg1245z00_1120);
											}
											{	/* Eval/expdquote.scm 97 */
												obj_t BgL_list1233z00_1116;

												{	/* Eval/expdquote.scm 97 */
													obj_t BgL_arg1239z00_1117;

													{	/* Eval/expdquote.scm 97 */
														obj_t BgL_arg1242z00_1118;

														BgL_arg1242z00_1118 =
															MAKE_YOUNG_PAIR(BgL_arg1232z00_1115, BNIL);
														BgL_arg1239z00_1117 =
															MAKE_YOUNG_PAIR
															(BGl_list1838z00zz__expander_quotez00,
															BgL_arg1242z00_1118);
													}
													BgL_list1233z00_1116 =
														MAKE_YOUNG_PAIR
														(BGl_symbol1840z00zz__expander_quotez00,
														BgL_arg1239z00_1117);
												}
												return BgL_list1233z00_1116;
											}
										}
								}
							else
								{	/* Eval/expdquote.scm 94 */
									return
										BGl_expandzd2errorzd2zz__expandz00
										(BGl_string1837z00zz__expander_quotez00,
										BGl_string1842z00zz__expander_quotez00, BgL_expz00_8);
								}
						}
					else
						{	/* Eval/expdquote.scm 93 */
							if (VECTORP(BgL_expz00_8))
								{	/* Eval/expdquote.scm 99 */
									return
										BGl_vectorzd2templatezd2zz__expander_quotez00(BgL_dz00_7,
										BgL_expz00_8);
								}
							else
								{	/* Eval/expdquote.scm 99 */
									if (PAIRP(BgL_expz00_8))
										{	/* Eval/expdquote.scm 101 */
											return
												BGl_listzd2templatezd2zz__expander_quotez00(BgL_dz00_7,
												BgL_expz00_8);
										}
									else
										{	/* Eval/expdquote.scm 101 */
											if (NULLP(BgL_expz00_8))
												{	/* Eval/expdquote.scm 104 */
													obj_t BgL_list1251z00_1127;

													{	/* Eval/expdquote.scm 104 */
														obj_t BgL_arg1252z00_1128;

														BgL_arg1252z00_1128 =
															MAKE_YOUNG_PAIR(BgL_expz00_8, BNIL);
														BgL_list1251z00_1127 =
															MAKE_YOUNG_PAIR
															(BGl_symbol1839z00zz__expander_quotez00,
															BgL_arg1252z00_1128);
													}
													return BgL_list1251z00_1127;
												}
											else
												{	/* Eval/expdquote.scm 105 */
													bool_t BgL_test1897z00_2143;

													if (CHARP(BgL_expz00_8))
														{	/* Eval/expdquote.scm 105 */
															BgL_test1897z00_2143 = ((bool_t) 1);
														}
													else
														{	/* Eval/expdquote.scm 105 */
															if (INTEGERP(BgL_expz00_8))
																{	/* Eval/expdquote.scm 105 */
																	BgL_test1897z00_2143 = ((bool_t) 1);
																}
															else
																{	/* Eval/expdquote.scm 105 */
																	if (STRINGP(BgL_expz00_8))
																		{	/* Eval/expdquote.scm 105 */
																			BgL_test1897z00_2143 = ((bool_t) 1);
																		}
																	else
																		{	/* Eval/expdquote.scm 105 */
																			BgL_test1897z00_2143 =
																				CNSTP(BgL_expz00_8);
																		}
																}
														}
													if (BgL_test1897z00_2143)
														{	/* Eval/expdquote.scm 105 */
															return BgL_expz00_8;
														}
													else
														{	/* Eval/expdquote.scm 108 */
															obj_t BgL_list1257z00_1133;

															{	/* Eval/expdquote.scm 108 */
																obj_t BgL_arg1258z00_1134;

																BgL_arg1258z00_1134 =
																	MAKE_YOUNG_PAIR(BgL_expz00_8, BNIL);
																BgL_list1257z00_1133 =
																	MAKE_YOUNG_PAIR
																	(BGl_symbol1839z00zz__expander_quotez00,
																	BgL_arg1258z00_1134);
															}
															return BgL_list1257z00_1133;
														}
												}
										}
								}
						}
				}
		}

	}



/* list-template */
	obj_t BGl_listzd2templatezd2zz__expander_quotez00(obj_t BgL_dz00_9,
		obj_t BgL_expz00_10)
	{
		{	/* Eval/expdquote.scm 113 */
			{	/* Eval/expdquote.scm 114 */
				bool_t BgL_test1901z00_2153;

				{	/* Eval/expdquote.scm 114 */
					bool_t BgL_test1902z00_2154;

					{	/* Eval/expdquote.scm 114 */
						bool_t BgL_test1903z00_2155;

						{	/* Eval/expdquote.scm 114 */
							obj_t BgL_tmpz00_2156;

							BgL_tmpz00_2156 = CDR(BgL_expz00_10);
							BgL_test1903z00_2155 = PAIRP(BgL_tmpz00_2156);
						}
						if (BgL_test1903z00_2155)
							{	/* Eval/expdquote.scm 114 */
								BgL_test1902z00_2154 = NULLP(CDR(CDR(BgL_expz00_10)));
							}
						else
							{	/* Eval/expdquote.scm 114 */
								BgL_test1902z00_2154 = ((bool_t) 0);
							}
					}
					if (BgL_test1902z00_2154)
						{	/* Eval/expdquote.scm 114 */
							if (
								(CAR(BgL_expz00_10) == BGl_symbol1839z00zz__expander_quotez00))
								{	/* Eval/expdquote.scm 115 */
									bool_t BgL_test1905z00_2165;

									{	/* Eval/expdquote.scm 115 */
										obj_t BgL_tmpz00_2166;

										BgL_tmpz00_2166 = CAR(CDR(BgL_expz00_10));
										BgL_test1905z00_2165 = PAIRP(BgL_tmpz00_2166);
									}
									if (BgL_test1905z00_2165)
										{	/* Eval/expdquote.scm 115 */
											BgL_test1901z00_2153 =
												(CAR(CAR(CDR(BgL_expz00_10))) ==
												BGl_symbol1843z00zz__expander_quotez00);
										}
									else
										{	/* Eval/expdquote.scm 115 */
											BgL_test1901z00_2153 = ((bool_t) 0);
										}
								}
							else
								{	/* Eval/expdquote.scm 115 */
									BgL_test1901z00_2153 = ((bool_t) 0);
								}
						}
					else
						{	/* Eval/expdquote.scm 114 */
							BgL_test1901z00_2153 = ((bool_t) 0);
						}
				}
				if (BgL_test1901z00_2153)
					{	/* Eval/expdquote.scm 114 */
						return
							BGl_quasiquotationz00zz__expander_quotez00(BgL_dz00_9,
							CAR(CDR(BgL_expz00_10)));
					}
				else
					{	/* Eval/expdquote.scm 114 */
						if ((CAR(BgL_expz00_10) == BGl_symbol1843z00zz__expander_quotez00))
							{	/* Eval/expdquote.scm 118 */
								if ((BgL_dz00_9 == BINT(((long) 0))))
									{	/* Eval/expdquote.scm 120 */
										obj_t BgL_arg1291z00_1163;

										if (INTEGERP(BgL_dz00_9))
											{	/* Eval/expdquote.scm 120 */
												BgL_arg1291z00_1163 =
													ADDFX(BgL_dz00_9, BINT(((long) 1)));
											}
										else
											{	/* Eval/expdquote.scm 120 */
												BgL_arg1291z00_1163 =
													BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_dz00_9,
													BINT(((long) 1)));
											}
										return
											BGl_quasiquotationz00zz__expander_quotez00
											(BgL_arg1291z00_1163, BgL_expz00_10);
									}
								else
									{	/* Eval/expdquote.scm 121 */
										obj_t BgL_arg1295z00_1165;

										{	/* Eval/expdquote.scm 121 */
											obj_t BgL_arg1299z00_1169;

											if (INTEGERP(BgL_dz00_9))
												{	/* Eval/expdquote.scm 121 */
													BgL_arg1299z00_1169 =
														ADDFX(BgL_dz00_9, BINT(((long) 1)));
												}
											else
												{	/* Eval/expdquote.scm 121 */
													BgL_arg1299z00_1169 =
														BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_dz00_9,
														BINT(((long) 1)));
												}
											BgL_arg1295z00_1165 =
												BGl_quasiquotationz00zz__expander_quotez00
												(BgL_arg1299z00_1169, BgL_expz00_10);
										}
										{	/* Eval/expdquote.scm 121 */
											obj_t BgL_list1296z00_1166;

											{	/* Eval/expdquote.scm 121 */
												obj_t BgL_arg1297z00_1167;

												{	/* Eval/expdquote.scm 121 */
													obj_t BgL_arg1298z00_1168;

													BgL_arg1298z00_1168 =
														MAKE_YOUNG_PAIR(BgL_arg1295z00_1165, BNIL);
													BgL_arg1297z00_1167 =
														MAKE_YOUNG_PAIR
														(BGl_list1845z00zz__expander_quotez00,
														BgL_arg1298z00_1168);
												}
												BgL_list1296z00_1166 =
													MAKE_YOUNG_PAIR
													(BGl_symbol1840z00zz__expander_quotez00,
													BgL_arg1297z00_1167);
											}
											return BgL_list1296z00_1166;
										}
									}
							}
						else
							{	/* Eval/expdquote.scm 123 */
								bool_t BgL_test1910z00_2200;

								{	/* Eval/expdquote.scm 123 */
									bool_t BgL_res1762z00_1743;

									BgL_res1762z00_1743 = EPAIRP(BgL_expz00_10);
									BgL_test1910z00_2200 = BgL_res1762z00_1743;
								}
								if (BgL_test1910z00_2200)
									{	/* Eval/expdquote.scm 124 */
										obj_t BgL_erz00_1172;

										BgL_erz00_1172 = CER(BgL_expz00_10);
										{	/* Eval/expdquote.scm 125 */
											obj_t BgL_arg1302z00_1173;

											BgL_arg1302z00_1173 =
												BGl_templatezd2orzd2splicezd2listzd2zz__expander_quotez00
												(BgL_dz00_9, BgL_expz00_10);
											{	/* Eval/expdquote.scm 125 */
												obj_t BgL_res1763z00_1746;

												BgL_res1763z00_1746 =
													MAKE_YOUNG_EPAIR
													(BGl_symbol1846z00zz__expander_quotez00,
													BgL_arg1302z00_1173, BgL_erz00_1172);
												return BgL_res1763z00_1746;
											}
										}
									}
								else
									{	/* Eval/expdquote.scm 126 */
										obj_t BgL_arg1303z00_1174;

										BgL_arg1303z00_1174 =
											BGl_templatezd2orzd2splicezd2listzd2zz__expander_quotez00
											(BgL_dz00_9, BgL_expz00_10);
										return
											MAKE_YOUNG_PAIR(BGl_symbol1846z00zz__expander_quotez00,
											BgL_arg1303z00_1174);
									}
							}
					}
			}
		}

	}



/* vector-template */
	obj_t BGl_vectorzd2templatezd2zz__expander_quotez00(obj_t BgL_dz00_11,
		obj_t BgL_expz00_12)
	{
		{	/* Eval/expdquote.scm 131 */
			{	/* Eval/expdquote.scm 132 */
				int BgL_tagzd2valzd2_1187;
				obj_t BgL_reszd2valzd2_1188;

				{	/* Eval/expdquote.scm 132 */
					int BgL_res1764z00_1748;

					BgL_res1764z00_1748 = VECTOR_TAG(BgL_expz00_12);
					BgL_tagzd2valzd2_1187 = BgL_res1764z00_1748;
				}
				{	/* Eval/expdquote.scm 136 */
					obj_t BgL_arg1325z00_1201;

					{	/* Eval/expdquote.scm 136 */
						obj_t BgL_arg1328z00_1204;

						BgL_arg1328z00_1204 =
							BGl_templatezd2orzd2splicezd2listzd2zz__expander_quotez00
							(BgL_dz00_11,
							BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00(BgL_expz00_12));
						BgL_arg1325z00_1201 =
							MAKE_YOUNG_PAIR(BGl_symbol1846z00zz__expander_quotez00,
							BgL_arg1328z00_1204);
					}
					{	/* Eval/expdquote.scm 133 */
						obj_t BgL_list1326z00_1202;

						{	/* Eval/expdquote.scm 133 */
							obj_t BgL_arg1327z00_1203;

							BgL_arg1327z00_1203 = MAKE_YOUNG_PAIR(BgL_arg1325z00_1201, BNIL);
							BgL_list1326z00_1202 =
								MAKE_YOUNG_PAIR(BGl_symbol1848z00zz__expander_quotez00,
								BgL_arg1327z00_1203);
						}
						BgL_reszd2valzd2_1188 = BgL_list1326z00_1202;
				}}
				if (((long) (BgL_tagzd2valzd2_1187) == ((long) 0)))
					{	/* Eval/expdquote.scm 137 */
						return BgL_reszd2valzd2_1188;
					}
				else
					{	/* Eval/expdquote.scm 139 */
						obj_t BgL_reszd2varzd2_1190;

						{	/* Eval/expdquote.scm 139 */

							{	/* Eval/expdquote.scm 139 */

								BgL_reszd2varzd2_1190 =
									BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
							}
						}
						{	/* Eval/expdquote.scm 140 */
							obj_t BgL_arg1313z00_1191;

							{	/* Eval/expdquote.scm 140 */
								obj_t BgL_arg1314z00_1192;
								obj_t BgL_arg1315z00_1193;

								{	/* Eval/expdquote.scm 140 */
									obj_t BgL_arg1316z00_1194;

									{	/* Eval/expdquote.scm 140 */
										obj_t BgL_arg1317z00_1195;

										BgL_arg1317z00_1195 =
											MAKE_YOUNG_PAIR(BgL_reszd2valzd2_1188, BNIL);
										BgL_arg1316z00_1194 =
											MAKE_YOUNG_PAIR(BgL_reszd2varzd2_1190,
											BgL_arg1317z00_1195);
									}
									BgL_arg1314z00_1192 =
										MAKE_YOUNG_PAIR(BgL_arg1316z00_1194, BNIL);
								}
								{	/* Eval/expdquote.scm 141 */
									obj_t BgL_arg1318z00_1196;
									obj_t BgL_arg1319z00_1197;

									{	/* Eval/expdquote.scm 141 */
										obj_t BgL_arg1322z00_1198;

										{	/* Eval/expdquote.scm 141 */
											obj_t BgL_arg1324z00_1199;

											BgL_arg1324z00_1199 =
												MAKE_YOUNG_PAIR(BINT(BgL_tagzd2valzd2_1187), BNIL);
											BgL_arg1322z00_1198 =
												MAKE_YOUNG_PAIR(BgL_reszd2varzd2_1190,
												BgL_arg1324z00_1199);
										}
										BgL_arg1318z00_1196 =
											MAKE_YOUNG_PAIR(BGl_symbol1850z00zz__expander_quotez00,
											BgL_arg1322z00_1198);
									}
									BgL_arg1319z00_1197 =
										MAKE_YOUNG_PAIR(BgL_reszd2varzd2_1190, BNIL);
									BgL_arg1315z00_1193 =
										MAKE_YOUNG_PAIR(BgL_arg1318z00_1196, BgL_arg1319z00_1197);
								}
								BgL_arg1313z00_1191 =
									MAKE_YOUNG_PAIR(BgL_arg1314z00_1192, BgL_arg1315z00_1193);
							}
							return
								MAKE_YOUNG_PAIR(BGl_symbol1852z00zz__expander_quotez00,
								BgL_arg1313z00_1191);
						}
					}
			}
		}

	}



/* template-or-splice-list */
	obj_t BGl_templatezd2orzd2splicezd2listzd2zz__expander_quotez00(obj_t
		BgL_dz00_13, obj_t BgL_expz00_14)
	{
		{	/* Eval/expdquote.scm 147 */
			if (NULLP(BgL_expz00_14))
				{	/* Eval/expdquote.scm 148 */
					return BGl_list1854z00zz__expander_quotez00;
				}
			else
				{	/* Eval/expdquote.scm 148 */
					if (PAIRP(BgL_expz00_14))
						{	/* Eval/expdquote.scm 149 */
							if (
								(CAR(BgL_expz00_14) == BGl_symbol1836z00zz__expander_quotez00))
								{	/* Eval/expdquote.scm 151 */
									obj_t BgL_arg1335z00_1210;

									BgL_arg1335z00_1210 =
										BGl_templatez00zz__expander_quotez00(BgL_dz00_13,
										BgL_expz00_14);
									{	/* Eval/expdquote.scm 151 */
										obj_t BgL_list1336z00_1211;

										BgL_list1336z00_1211 =
											MAKE_YOUNG_PAIR(BgL_arg1335z00_1210, BNIL);
										return BgL_list1336z00_1211;
									}
								}
							else
								{	/* Eval/expdquote.scm 152 */
									bool_t BgL_test1915z00_2237;

									{	/* Eval/expdquote.scm 152 */
										bool_t BgL_test1916z00_2238;

										{	/* Eval/expdquote.scm 152 */
											obj_t BgL_tmpz00_2239;

											BgL_tmpz00_2239 = CAR(BgL_expz00_14);
											BgL_test1916z00_2238 = PAIRP(BgL_tmpz00_2239);
										}
										if (BgL_test1916z00_2238)
											{	/* Eval/expdquote.scm 152 */
												BgL_test1915z00_2237 =
													(CAR(CAR(BgL_expz00_14)) ==
													BGl_symbol1856z00zz__expander_quotez00);
											}
										else
											{	/* Eval/expdquote.scm 152 */
												BgL_test1915z00_2237 = ((bool_t) 0);
											}
									}
									if (BgL_test1915z00_2237)
										{	/* Eval/expdquote.scm 155 */
											obj_t BgL_arg1343z00_1218;

											{	/* Eval/expdquote.scm 155 */
												obj_t BgL_arg1345z00_1220;
												obj_t BgL_arg1346z00_1221;

												BgL_arg1345z00_1220 =
													BGl_templatezd2orzd2splicez00zz__expander_quotez00
													(BgL_dz00_13, CAR(BgL_expz00_14));
												{	/* Eval/expdquote.scm 157 */
													obj_t BgL_arg1352z00_1226;

													BgL_arg1352z00_1226 =
														BGl_templatezd2orzd2splicezd2listzd2zz__expander_quotez00
														(BgL_dz00_13, CDR(BgL_expz00_14));
													BgL_arg1346z00_1221 =
														MAKE_YOUNG_PAIR
														(BGl_symbol1846z00zz__expander_quotez00,
														BgL_arg1352z00_1226);
												}
												{	/* Eval/expdquote.scm 154 */
													obj_t BgL_list1347z00_1222;

													{	/* Eval/expdquote.scm 154 */
														obj_t BgL_arg1348z00_1223;

														{	/* Eval/expdquote.scm 154 */
															obj_t BgL_arg1350z00_1224;

															BgL_arg1350z00_1224 =
																MAKE_YOUNG_PAIR(BgL_arg1346z00_1221, BNIL);
															BgL_arg1348z00_1223 =
																MAKE_YOUNG_PAIR(BgL_arg1345z00_1220,
																BgL_arg1350z00_1224);
														}
														BgL_list1347z00_1222 =
															MAKE_YOUNG_PAIR
															(BGl_symbol1858z00zz__expander_quotez00,
															BgL_arg1348z00_1223);
													}
													BgL_arg1343z00_1218 = BgL_list1347z00_1222;
												}
											}
											{	/* Eval/expdquote.scm 154 */
												obj_t BgL_list1344z00_1219;

												BgL_list1344z00_1219 =
													MAKE_YOUNG_PAIR(BgL_arg1343z00_1218, BNIL);
												return BgL_list1344z00_1219;
											}
										}
									else
										{	/* Eval/expdquote.scm 152 */
											return
												MAKE_YOUNG_PAIR
												(BGl_templatezd2orzd2splicez00zz__expander_quotez00
												(BgL_dz00_13, CAR(BgL_expz00_14)),
												BGl_templatezd2orzd2splicezd2listzd2zz__expander_quotez00
												(BgL_dz00_13, CDR(BgL_expz00_14)));
										}
								}
						}
					else
						{	/* Eval/expdquote.scm 160 */
							obj_t BgL_arg1363z00_1237;

							BgL_arg1363z00_1237 =
								BGl_templatezd2orzd2splicez00zz__expander_quotez00(BgL_dz00_13,
								BgL_expz00_14);
							{	/* Eval/expdquote.scm 160 */
								obj_t BgL_list1364z00_1238;

								BgL_list1364z00_1238 =
									MAKE_YOUNG_PAIR(BgL_arg1363z00_1237, BNIL);
								return BgL_list1364z00_1238;
							}
						}
				}
		}

	}



/* template-or-splice */
	obj_t BGl_templatezd2orzd2splicez00zz__expander_quotez00(obj_t BgL_dz00_15,
		obj_t BgL_expz00_16)
	{
		{	/* Eval/expdquote.scm 165 */
			{	/* Eval/expdquote.scm 166 */
				bool_t BgL_test1917z00_2261;

				if (PAIRP(BgL_expz00_16))
					{	/* Eval/expdquote.scm 166 */
						BgL_test1917z00_2261 =
							(CAR(BgL_expz00_16) == BGl_symbol1856z00zz__expander_quotez00);
					}
				else
					{	/* Eval/expdquote.scm 166 */
						BgL_test1917z00_2261 = ((bool_t) 0);
					}
				if (BgL_test1917z00_2261)
					{	/* Eval/expdquote.scm 167 */
						bool_t BgL_test1919z00_2266;

						{	/* Eval/expdquote.scm 167 */
							bool_t BgL_test1920z00_2267;

							{	/* Eval/expdquote.scm 167 */
								obj_t BgL_tmpz00_2268;

								BgL_tmpz00_2268 = CDR(BgL_expz00_16);
								BgL_test1920z00_2267 = PAIRP(BgL_tmpz00_2268);
							}
							if (BgL_test1920z00_2267)
								{	/* Eval/expdquote.scm 167 */
									BgL_test1919z00_2266 = NULLP(CDR(CDR(BgL_expz00_16)));
								}
							else
								{	/* Eval/expdquote.scm 167 */
									BgL_test1919z00_2266 = ((bool_t) 0);
								}
						}
						if (BgL_test1919z00_2266)
							{	/* Eval/expdquote.scm 167 */
								if ((BgL_dz00_15 == BINT(((long) 1))))
									{	/* Eval/expdquote.scm 169 */
										long BgL_arg1376z00_1249;
										obj_t BgL_arg1377z00_1250;

										BgL_arg1376z00_1249 =
											((long) CINT(BgL_dz00_15) - ((long) 1));
										BgL_arg1377z00_1250 = CAR(CDR(BgL_expz00_16));
										return
											BGl_templatez00zz__expander_quotez00(BINT
											(BgL_arg1376z00_1249), BgL_arg1377z00_1250);
									}
								else
									{	/* Eval/expdquote.scm 171 */
										obj_t BgL_arg1378z00_1251;

										{	/* Eval/expdquote.scm 171 */
											obj_t BgL_arg1381z00_1254;

											{	/* Eval/expdquote.scm 171 */
												long BgL_arg1385z00_1258;
												obj_t BgL_arg1386z00_1259;

												BgL_arg1385z00_1258 =
													((long) CINT(BgL_dz00_15) - ((long) 1));
												BgL_arg1386z00_1259 = CAR(CDR(BgL_expz00_16));
												BgL_arg1381z00_1254 =
													BGl_templatez00zz__expander_quotez00(BINT
													(BgL_arg1385z00_1258), BgL_arg1386z00_1259);
											}
											{	/* Eval/expdquote.scm 170 */
												obj_t BgL_list1382z00_1255;

												{	/* Eval/expdquote.scm 170 */
													obj_t BgL_arg1383z00_1256;

													{	/* Eval/expdquote.scm 170 */
														obj_t BgL_arg1384z00_1257;

														BgL_arg1384z00_1257 =
															MAKE_YOUNG_PAIR(BgL_arg1381z00_1254, BNIL);
														BgL_arg1383z00_1256 =
															MAKE_YOUNG_PAIR
															(BGl_list1860z00zz__expander_quotez00,
															BgL_arg1384z00_1257);
													}
													BgL_list1382z00_1255 =
														MAKE_YOUNG_PAIR
														(BGl_symbol1840z00zz__expander_quotez00,
														BgL_arg1383z00_1256);
												}
												BgL_arg1378z00_1251 = BgL_list1382z00_1255;
										}}
										{	/* Eval/expdquote.scm 170 */
											obj_t BgL_list1379z00_1252;

											{	/* Eval/expdquote.scm 170 */
												obj_t BgL_arg1380z00_1253;

												BgL_arg1380z00_1253 =
													MAKE_YOUNG_PAIR(BgL_arg1378z00_1251, BNIL);
												BgL_list1379z00_1252 =
													MAKE_YOUNG_PAIR
													(BGl_symbol1840z00zz__expander_quotez00,
													BgL_arg1380z00_1253);
											}
											return BgL_list1379z00_1252;
										}
									}
							}
						else
							{	/* Eval/expdquote.scm 167 */
								return
									BGl_expandzd2errorzd2zz__expandz00
									(BGl_string1857z00zz__expander_quotez00,
									BGl_string1861z00zz__expander_quotez00, BgL_expz00_16);
							}
					}
				else
					{	/* Eval/expdquote.scm 166 */
						return
							BGl_templatez00zz__expander_quotez00(BgL_dz00_15, BgL_expz00_16);
					}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__expander_quotez00()
	{
		{	/* Eval/expdquote.scm 14 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__expander_quotez00()
	{
		{	/* Eval/expdquote.scm 14 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__expander_quotez00()
	{
		{	/* Eval/expdquote.scm 14 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__expander_quotez00()
	{
		{	/* Eval/expdquote.scm 14 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string1862z00zz__expander_quotez00));
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 70989162),
				BSTRING_TO_STRING(BGl_string1862z00zz__expander_quotez00));
			BGl_modulezd2initializa7ationz75zz__tvectorz00(((long) 135277364),
				BSTRING_TO_STRING(BGl_string1862z00zz__expander_quotez00));
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 128218115),
				BSTRING_TO_STRING(BGl_string1862z00zz__expander_quotez00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 340267996),
				BSTRING_TO_STRING(BGl_string1862z00zz__expander_quotez00));
			BGl_modulezd2initializa7ationz75zz__bignumz00(((long) 6519875),
				BSTRING_TO_STRING(BGl_string1862z00zz__expander_quotez00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string1862z00zz__expander_quotez00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 193422032),
				BSTRING_TO_STRING(BGl_string1862z00zz__expander_quotez00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 224967910),
				BSTRING_TO_STRING(BGl_string1862z00zz__expander_quotez00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 68572481),
				BSTRING_TO_STRING(BGl_string1862z00zz__expander_quotez00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long)
					420334581),
				BSTRING_TO_STRING(BGl_string1862z00zz__expander_quotez00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long)
					437057945),
				BSTRING_TO_STRING(BGl_string1862z00zz__expander_quotez00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonum_dtoaz00(((long)
					268155874),
				BSTRING_TO_STRING(BGl_string1862z00zz__expander_quotez00));
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long)
					198621048),
				BSTRING_TO_STRING(BGl_string1862z00zz__expander_quotez00));
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long)
					473309694),
				BSTRING_TO_STRING(BGl_string1862z00zz__expander_quotez00));
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 459519474),
				BSTRING_TO_STRING(BGl_string1862z00zz__expander_quotez00));
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 460263341),
				BSTRING_TO_STRING(BGl_string1862z00zz__expander_quotez00));
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) -44274296),
				BSTRING_TO_STRING(BGl_string1862z00zz__expander_quotez00));
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long)
					9614573), BSTRING_TO_STRING(BGl_string1862z00zz__expander_quotez00));
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long)
					376927845),
				BSTRING_TO_STRING(BGl_string1862z00zz__expander_quotez00));
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 190906089),
				BSTRING_TO_STRING(BGl_string1862z00zz__expander_quotez00));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 331540733),
				BSTRING_TO_STRING(BGl_string1862z00zz__expander_quotez00));
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 86988972),
				BSTRING_TO_STRING(BGl_string1862z00zz__expander_quotez00));
			return BGl_modulezd2initializa7ationz75zz__expandz00(((long) 414007030),
				BSTRING_TO_STRING(BGl_string1862z00zz__expander_quotez00));
		}

	}

#ifdef __cplusplus
}
#endif
