/*===========================================================================*/
/*   (Lalr/gen.scm)                                                          */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Lalr/gen.scm -indent -o objs/obj_u/Lalr/gen.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_symbol1831z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_symbol1833z00zz__lalr_genz00 = BUNSPEC;
	extern obj_t BGl_nvarsz00zz__lalr_globalz00;
	static obj_t BGl_symbol1835z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_symbol1837z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_symbol1839z00zz__lalr_genz00 = BUNSPEC;
	extern obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_symbol1842z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_symbol1846z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_symbol1849z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_requirezd2initializa7ationz75zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_symbol1852z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_symbol1855z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_symbol1858z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_symbol1862z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_symbol1865z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_symbol1868z00zz__lalr_genz00 = BUNSPEC;
	extern obj_t BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_genzd2lalrzd2codez00zz__lalr_genz00();
	static obj_t BGl_symbol1872z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_symbol1874z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_symbol1876z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_symbol1878z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_symbol1880z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_symbol1882z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_symbol1884z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_symbol1886z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_symbol1888z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zz__lalr_genz00();
	static obj_t BGl_loopzd2pze70z35zz__lalr_genz00(obj_t, obj_t, obj_t, long);
	extern obj_t BGl_acceszd2symbolzd2zz__lalr_globalz00;
	static obj_t BGl_symbol1890z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_symbol1892z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_symbol1894z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_symbol1896z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_objectzd2initzd2zz__lalr_genz00();
	extern bool_t BGl_2zd3zd3zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_genzd2reductionzd2tablez00zz__lalr_genz00();
	static obj_t BGl_loopzd2aze70z35zz__lalr_genz00(long);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_methodzd2initzd2zz__lalr_genz00();
	extern obj_t BGl_grammarz00zz__lalr_globalz00;
	static obj_t BGl_genzd2gotozd2tablez00zz__lalr_genz00();
	extern obj_t BGl_actionzd2tablezd2zz__lalr_globalz00;
	extern obj_t BGl_za2symvza2z00zz__lalr_rewritez00;
	static obj_t BGl_genzd2actionzd2tablez00zz__lalr_genz00();
	static obj_t BGl_list1824z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_list1827z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_list1830z00zz__lalr_genz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__lalr_genz00(long,
		char *);
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
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(long,
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
	extern obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__rgcz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bignumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__tvectorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__lalr_rewritez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__lalr_globalz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_reductionsze70ze7zz__lalr_genz00();
	static obj_t BGl_loopzd2gze70z35zz__lalr_genz00(long);
	static obj_t BGl_list1841z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_list1844z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_list1845z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_list1848z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_list1851z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_list1854z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_list1857z00zz__lalr_genz00 = BUNSPEC;
	extern obj_t BGl_shiftzd2tablezd2zz__lalr_globalz00;
	static obj_t BGl_cnstzd2initzd2zz__lalr_genz00();
	extern long bgl_list_length(obj_t);
	extern obj_t BGl_nstatesz00zz__lalr_globalz00;
	static obj_t BGl_list1860z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_list1861z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_list1864z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_list1867z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_gczd2rootszd2initz00zz__lalr_genz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__lalr_genz00();
	static obj_t BGl_list1870z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_list1871z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_gotosze70ze7zz__lalr_genz00();
	static obj_t BGl_z62genzd2lalrzd2codez62zz__lalr_genz00(obj_t);
	static obj_t BGl_loopze70ze7zz__lalr_genz00(long, obj_t);
	static obj_t BGl_loopze71ze7zz__lalr_genz00(obj_t);
	static obj_t BGl_loopze72ze7zz__lalr_genz00(obj_t);
	static obj_t BGl_actionsze70ze7zz__lalr_genz00();
	static obj_t BGl_loopzd2lze70z35zz__lalr_genz00(obj_t, long);
	static obj_t BGl_symbol1825z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_symbol1828z00zz__lalr_genz00 = BUNSPEC;
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_genzd2lalrzd2codezd2envzd2zz__lalr_genz00,
		BgL_bgl_za762genza7d2lalrza7d21899za7,
		BGl_z62genzd2lalrzd2codez62zz__lalr_genz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1826z00zz__lalr_genz00,
		BgL_bgl_string1826za700za7za7_1900za7, "__push", 6);
	      DEFINE_STRING(BGl_string1829z00zz__lalr_genz00,
		BgL_bgl_string1829za700za7za7_1901za7, "lambda", 6);
	      DEFINE_STRING(BGl_string1832z00zz__lalr_genz00,
		BgL_bgl_string1832za700za7za7_1902za7, "stack", 5);
	      DEFINE_STRING(BGl_string1834z00zz__lalr_genz00,
		BgL_bgl_string1834za700za7za7_1903za7, "sp", 2);
	      DEFINE_STRING(BGl_string1836z00zz__lalr_genz00,
		BgL_bgl_string1836za700za7za7_1904za7, "new-cat", 7);
	      DEFINE_STRING(BGl_string1838z00zz__lalr_genz00,
		BgL_bgl_string1838za700za7za7_1905za7, "goto-table", 10);
	      DEFINE_STRING(BGl_string1840z00zz__lalr_genz00,
		BgL_bgl_string1840za700za7za7_1906za7, "lval", 4);
	      DEFINE_STRING(BGl_string1843z00zz__lalr_genz00,
		BgL_bgl_string1843za700za7za7_1907za7, "let*", 4);
	      DEFINE_STRING(BGl_string1847z00zz__lalr_genz00,
		BgL_bgl_string1847za700za7za7_1908za7, "state", 5);
	      DEFINE_STRING(BGl_string1850z00zz__lalr_genz00,
		BgL_bgl_string1850za700za7za7_1909za7, "vector-ref", 10);
	      DEFINE_STRING(BGl_string1853z00zz__lalr_genz00,
		BgL_bgl_string1853za700za7za7_1910za7, "new-state", 9);
	      DEFINE_STRING(BGl_string1856z00zz__lalr_genz00,
		BgL_bgl_string1856za700za7za7_1911za7, "cdr", 3);
	      DEFINE_STRING(BGl_string1859z00zz__lalr_genz00,
		BgL_bgl_string1859za700za7za7_1912za7, "assq", 4);
	      DEFINE_STRING(BGl_string1863z00zz__lalr_genz00,
		BgL_bgl_string1863za700za7za7_1913za7, "new-sp", 6);
	      DEFINE_STRING(BGl_string1866z00zz__lalr_genz00,
		BgL_bgl_string1866za700za7za7_1914za7, "+fx", 3);
	      DEFINE_STRING(BGl_string1869z00zz__lalr_genz00,
		BgL_bgl_string1869za700za7za7_1915za7, "vector-set!", 11);
	      DEFINE_STRING(BGl_string1873z00zz__lalr_genz00,
		BgL_bgl_string1873za700za7za7_1916za7, "-fx", 3);
	      DEFINE_STRING(BGl_string1875z00zz__lalr_genz00,
		BgL_bgl_string1875za700za7za7_1917za7, "__reduce", 8);
	      DEFINE_STRING(BGl_string1877z00zz__lalr_genz00,
		BgL_bgl_string1877za700za7za7_1918za7, "__action-table", 14);
	      DEFINE_STRING(BGl_string1879z00zz__lalr_genz00,
		BgL_bgl_string1879za700za7za7_1919za7, "__make-parser", 13);
	      DEFINE_STRING(BGl_string1881z00zz__lalr_genz00,
		BgL_bgl_string1881za700za7za7_1920za7, "quote", 5);
	      DEFINE_STRING(BGl_string1883z00zz__lalr_genz00,
		BgL_bgl_string1883za700za7za7_1921za7, "__goto-table", 12);
	      DEFINE_STRING(BGl_string1885z00zz__lalr_genz00,
		BgL_bgl_string1885za700za7za7_1922za7, "__sp", 4);
	      DEFINE_STRING(BGl_string1887z00zz__lalr_genz00,
		BgL_bgl_string1887za700za7za7_1923za7, "__stack", 7);
	      DEFINE_STRING(BGl_string1889z00zz__lalr_genz00,
		BgL_bgl_string1889za700za7za7_1924za7, "n", 1);
	      DEFINE_STRING(BGl_string1891z00zz__lalr_genz00,
		BgL_bgl_string1891za700za7za7_1925za7, "case", 4);
	      DEFINE_STRING(BGl_string1893z00zz__lalr_genz00,
		BgL_bgl_string1893za700za7za7_1926za7, "vector-ref-ur", 13);
	      DEFINE_STRING(BGl_string1895z00zz__lalr_genz00,
		BgL_bgl_string1895za700za7za7_1927za7, "*start*", 7);
	      DEFINE_STRING(BGl_string1897z00zz__lalr_genz00,
		BgL_bgl_string1897za700za7za7_1928za7, "let", 3);
	      DEFINE_STRING(BGl_string1898z00zz__lalr_genz00,
		BgL_bgl_string1898za700za7za7_1929za7, "__lalr_gen", 10);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_symbol1831z00zz__lalr_genz00));
		     ADD_ROOT((void *) (&BGl_symbol1833z00zz__lalr_genz00));
		     ADD_ROOT((void *) (&BGl_symbol1835z00zz__lalr_genz00));
		     ADD_ROOT((void *) (&BGl_symbol1837z00zz__lalr_genz00));
		     ADD_ROOT((void *) (&BGl_symbol1839z00zz__lalr_genz00));
		     ADD_ROOT((void *) (&BGl_symbol1842z00zz__lalr_genz00));
		     ADD_ROOT((void *) (&BGl_symbol1846z00zz__lalr_genz00));
		     ADD_ROOT((void *) (&BGl_symbol1849z00zz__lalr_genz00));
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__lalr_genz00));
		     ADD_ROOT((void *) (&BGl_symbol1852z00zz__lalr_genz00));
		     ADD_ROOT((void *) (&BGl_symbol1855z00zz__lalr_genz00));
		     ADD_ROOT((void *) (&BGl_symbol1858z00zz__lalr_genz00));
		     ADD_ROOT((void *) (&BGl_symbol1862z00zz__lalr_genz00));
		     ADD_ROOT((void *) (&BGl_symbol1865z00zz__lalr_genz00));
		     ADD_ROOT((void *) (&BGl_symbol1868z00zz__lalr_genz00));
		     ADD_ROOT((void *) (&BGl_symbol1872z00zz__lalr_genz00));
		     ADD_ROOT((void *) (&BGl_symbol1874z00zz__lalr_genz00));
		     ADD_ROOT((void *) (&BGl_symbol1876z00zz__lalr_genz00));
		     ADD_ROOT((void *) (&BGl_symbol1878z00zz__lalr_genz00));
		     ADD_ROOT((void *) (&BGl_symbol1880z00zz__lalr_genz00));
		     ADD_ROOT((void *) (&BGl_symbol1882z00zz__lalr_genz00));
		     ADD_ROOT((void *) (&BGl_symbol1884z00zz__lalr_genz00));
		     ADD_ROOT((void *) (&BGl_symbol1886z00zz__lalr_genz00));
		     ADD_ROOT((void *) (&BGl_symbol1888z00zz__lalr_genz00));
		     ADD_ROOT((void *) (&BGl_symbol1890z00zz__lalr_genz00));
		     ADD_ROOT((void *) (&BGl_symbol1892z00zz__lalr_genz00));
		     ADD_ROOT((void *) (&BGl_symbol1894z00zz__lalr_genz00));
		     ADD_ROOT((void *) (&BGl_symbol1896z00zz__lalr_genz00));
		     ADD_ROOT((void *) (&BGl_list1824z00zz__lalr_genz00));
		     ADD_ROOT((void *) (&BGl_list1827z00zz__lalr_genz00));
		     ADD_ROOT((void *) (&BGl_list1830z00zz__lalr_genz00));
		     ADD_ROOT((void *) (&BGl_list1841z00zz__lalr_genz00));
		     ADD_ROOT((void *) (&BGl_list1844z00zz__lalr_genz00));
		     ADD_ROOT((void *) (&BGl_list1845z00zz__lalr_genz00));
		     ADD_ROOT((void *) (&BGl_list1848z00zz__lalr_genz00));
		     ADD_ROOT((void *) (&BGl_list1851z00zz__lalr_genz00));
		     ADD_ROOT((void *) (&BGl_list1854z00zz__lalr_genz00));
		     ADD_ROOT((void *) (&BGl_list1857z00zz__lalr_genz00));
		     ADD_ROOT((void *) (&BGl_list1860z00zz__lalr_genz00));
		     ADD_ROOT((void *) (&BGl_list1861z00zz__lalr_genz00));
		     ADD_ROOT((void *) (&BGl_list1864z00zz__lalr_genz00));
		     ADD_ROOT((void *) (&BGl_list1867z00zz__lalr_genz00));
		     ADD_ROOT((void *) (&BGl_list1870z00zz__lalr_genz00));
		     ADD_ROOT((void *) (&BGl_list1871z00zz__lalr_genz00));
		     ADD_ROOT((void *) (&BGl_symbol1825z00zz__lalr_genz00));
		     ADD_ROOT((void *) (&BGl_symbol1828z00zz__lalr_genz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__lalr_genz00(long
		BgL_checksumz00_2086, char *BgL_fromz00_2087)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__lalr_genz00))
				{
					BGl_requirezd2initializa7ationz75zz__lalr_genz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__lalr_genz00();
					BGl_cnstzd2initzd2zz__lalr_genz00();
					BGl_importedzd2moduleszd2initz00zz__lalr_genz00();
					return BGl_methodzd2initzd2zz__lalr_genz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__lalr_genz00()
	{
		{	/* Lalr/gen.scm 11 */
			BGl_symbol1825z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string1826z00zz__lalr_genz00);
			BGl_symbol1828z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string1829z00zz__lalr_genz00);
			BGl_symbol1831z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string1832z00zz__lalr_genz00);
			BGl_symbol1833z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string1834z00zz__lalr_genz00);
			BGl_symbol1835z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string1836z00zz__lalr_genz00);
			BGl_symbol1837z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string1838z00zz__lalr_genz00);
			BGl_symbol1839z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string1840z00zz__lalr_genz00);
			BGl_list1830z00zz__lalr_genz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1831z00zz__lalr_genz00,
				MAKE_YOUNG_PAIR(BGl_symbol1833z00zz__lalr_genz00,
					MAKE_YOUNG_PAIR(BGl_symbol1835z00zz__lalr_genz00,
						MAKE_YOUNG_PAIR(BGl_symbol1837z00zz__lalr_genz00,
							MAKE_YOUNG_PAIR(BGl_symbol1839z00zz__lalr_genz00, BNIL)))));
			BGl_symbol1842z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string1843z00zz__lalr_genz00);
			BGl_symbol1846z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string1847z00zz__lalr_genz00);
			BGl_symbol1849z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string1850z00zz__lalr_genz00);
			BGl_list1848z00zz__lalr_genz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1849z00zz__lalr_genz00,
				MAKE_YOUNG_PAIR(BGl_symbol1831z00zz__lalr_genz00,
					MAKE_YOUNG_PAIR(BGl_symbol1833z00zz__lalr_genz00, BNIL)));
			BGl_list1845z00zz__lalr_genz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1846z00zz__lalr_genz00,
				MAKE_YOUNG_PAIR(BGl_list1848z00zz__lalr_genz00, BNIL));
			BGl_symbol1852z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string1853z00zz__lalr_genz00);
			BGl_symbol1855z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string1856z00zz__lalr_genz00);
			BGl_symbol1858z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string1859z00zz__lalr_genz00);
			BGl_list1860z00zz__lalr_genz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1849z00zz__lalr_genz00,
				MAKE_YOUNG_PAIR(BGl_symbol1837z00zz__lalr_genz00,
					MAKE_YOUNG_PAIR(BGl_symbol1846z00zz__lalr_genz00, BNIL)));
			BGl_list1857z00zz__lalr_genz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1858z00zz__lalr_genz00,
				MAKE_YOUNG_PAIR(BGl_symbol1835z00zz__lalr_genz00,
					MAKE_YOUNG_PAIR(BGl_list1860z00zz__lalr_genz00, BNIL)));
			BGl_list1854z00zz__lalr_genz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1855z00zz__lalr_genz00,
				MAKE_YOUNG_PAIR(BGl_list1857z00zz__lalr_genz00, BNIL));
			BGl_list1851z00zz__lalr_genz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1852z00zz__lalr_genz00,
				MAKE_YOUNG_PAIR(BGl_list1854z00zz__lalr_genz00, BNIL));
			BGl_symbol1862z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string1863z00zz__lalr_genz00);
			BGl_symbol1865z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string1866z00zz__lalr_genz00);
			BGl_list1864z00zz__lalr_genz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1865z00zz__lalr_genz00,
				MAKE_YOUNG_PAIR(BGl_symbol1833z00zz__lalr_genz00,
					MAKE_YOUNG_PAIR(BINT(((long) 2)), BNIL)));
			BGl_list1861z00zz__lalr_genz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1862z00zz__lalr_genz00,
				MAKE_YOUNG_PAIR(BGl_list1864z00zz__lalr_genz00, BNIL));
			BGl_list1844z00zz__lalr_genz00 =
				MAKE_YOUNG_PAIR(BGl_list1845z00zz__lalr_genz00,
				MAKE_YOUNG_PAIR(BGl_list1851z00zz__lalr_genz00,
					MAKE_YOUNG_PAIR(BGl_list1861z00zz__lalr_genz00, BNIL)));
			BGl_symbol1868z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string1869z00zz__lalr_genz00);
			BGl_list1867z00zz__lalr_genz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1868z00zz__lalr_genz00,
				MAKE_YOUNG_PAIR(BGl_symbol1831z00zz__lalr_genz00,
					MAKE_YOUNG_PAIR(BGl_symbol1862z00zz__lalr_genz00,
						MAKE_YOUNG_PAIR(BGl_symbol1852z00zz__lalr_genz00, BNIL))));
			BGl_symbol1872z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string1873z00zz__lalr_genz00);
			BGl_list1871z00zz__lalr_genz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1872z00zz__lalr_genz00,
				MAKE_YOUNG_PAIR(BGl_symbol1862z00zz__lalr_genz00,
					MAKE_YOUNG_PAIR(BINT(((long) 1)), BNIL)));
			BGl_list1870z00zz__lalr_genz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1868z00zz__lalr_genz00,
				MAKE_YOUNG_PAIR(BGl_symbol1831z00zz__lalr_genz00,
					MAKE_YOUNG_PAIR(BGl_list1871z00zz__lalr_genz00,
						MAKE_YOUNG_PAIR(BGl_symbol1839z00zz__lalr_genz00, BNIL))));
			BGl_list1841z00zz__lalr_genz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1842z00zz__lalr_genz00,
				MAKE_YOUNG_PAIR(BGl_list1844z00zz__lalr_genz00,
					MAKE_YOUNG_PAIR(BGl_list1867z00zz__lalr_genz00,
						MAKE_YOUNG_PAIR(BGl_list1870z00zz__lalr_genz00,
							MAKE_YOUNG_PAIR(BGl_symbol1862z00zz__lalr_genz00, BNIL)))));
			BGl_list1827z00zz__lalr_genz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1828z00zz__lalr_genz00,
				MAKE_YOUNG_PAIR(BGl_list1830z00zz__lalr_genz00,
					MAKE_YOUNG_PAIR(BGl_list1841z00zz__lalr_genz00, BNIL)));
			BGl_list1824z00zz__lalr_genz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1825z00zz__lalr_genz00,
				MAKE_YOUNG_PAIR(BGl_list1827z00zz__lalr_genz00, BNIL));
			BGl_symbol1874z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string1875z00zz__lalr_genz00);
			BGl_symbol1876z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string1877z00zz__lalr_genz00);
			BGl_symbol1878z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string1879z00zz__lalr_genz00);
			BGl_symbol1880z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string1881z00zz__lalr_genz00);
			BGl_symbol1882z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string1883z00zz__lalr_genz00);
			BGl_symbol1884z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string1885z00zz__lalr_genz00);
			BGl_symbol1886z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string1887z00zz__lalr_genz00);
			BGl_symbol1888z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string1889z00zz__lalr_genz00);
			BGl_symbol1890z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string1891z00zz__lalr_genz00);
			BGl_symbol1892z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string1893z00zz__lalr_genz00);
			BGl_symbol1894z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string1895z00zz__lalr_genz00);
			return (BGl_symbol1896z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string1897z00zz__lalr_genz00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__lalr_genz00()
	{
		{	/* Lalr/gen.scm 11 */
			return bgl_gc_roots_register();
		}

	}



/* gen-lalr-code */
	BGL_EXPORTED_DEF obj_t BGl_genzd2lalrzd2codez00zz__lalr_genz00()
	{
		{	/* Lalr/gen.scm 51 */
			{	/* Lalr/gen.scm 52 */
				obj_t BgL_arg1275z00_1131;

				{	/* Lalr/gen.scm 52 */
					obj_t BgL_arg1276z00_1132;
					obj_t BgL_arg1277z00_1133;

					{	/* Lalr/gen.scm 52 */
						obj_t BgL_arg1280z00_1134;
						obj_t BgL_arg1281z00_1135;

						BgL_arg1280z00_1134 = BGl_genzd2actionzd2tablez00zz__lalr_genz00();
						{	/* Lalr/gen.scm 53 */
							obj_t BgL_arg1282z00_1136;
							obj_t BgL_arg1284z00_1137;

							BgL_arg1282z00_1136 = BGl_genzd2gotozd2tablez00zz__lalr_genz00();
							{	/* Lalr/gen.scm 54 */
								obj_t BgL_arg1285z00_1138;
								obj_t BgL_arg1286z00_1139;

								BgL_arg1285z00_1138 = BGl_list1824z00zz__lalr_genz00;
								BgL_arg1286z00_1139 =
									MAKE_YOUNG_PAIR(BGl_genzd2reductionzd2tablez00zz__lalr_genz00
									(), BNIL);
								BgL_arg1284z00_1137 =
									MAKE_YOUNG_PAIR(BgL_arg1285z00_1138, BgL_arg1286z00_1139);
							}
							BgL_arg1281z00_1135 =
								MAKE_YOUNG_PAIR(BgL_arg1282z00_1136, BgL_arg1284z00_1137);
						}
						BgL_arg1276z00_1132 =
							MAKE_YOUNG_PAIR(BgL_arg1280z00_1134, BgL_arg1281z00_1135);
					}
					{	/* Lalr/gen.scm 56 */
						obj_t BgL_arg1288z00_1141;

						{	/* Lalr/gen.scm 56 */
							obj_t BgL_arg1289z00_1142;

							{	/* Lalr/gen.scm 56 */
								obj_t BgL_arg1290z00_1143;

								BgL_arg1290z00_1143 =
									MAKE_YOUNG_PAIR(BGl_symbol1874z00zz__lalr_genz00, BNIL);
								BgL_arg1289z00_1142 =
									MAKE_YOUNG_PAIR(BGl_symbol1876z00zz__lalr_genz00,
									BgL_arg1290z00_1143);
							}
							BgL_arg1288z00_1141 =
								MAKE_YOUNG_PAIR(BGl_symbol1878z00zz__lalr_genz00,
								BgL_arg1289z00_1142);
						}
						BgL_arg1277z00_1133 = MAKE_YOUNG_PAIR(BgL_arg1288z00_1141, BNIL);
					}
					BgL_arg1275z00_1131 =
						MAKE_YOUNG_PAIR(BgL_arg1276z00_1132, BgL_arg1277z00_1133);
				}
				return
					MAKE_YOUNG_PAIR(BGl_symbol1842z00zz__lalr_genz00,
					BgL_arg1275z00_1131);
			}
		}

	}



/* &gen-lalr-code */
	obj_t BGl_z62genzd2lalrzd2codez62zz__lalr_genz00(obj_t BgL_envz00_2082)
	{
		{	/* Lalr/gen.scm 51 */
			return BGl_genzd2lalrzd2codez00zz__lalr_genz00();
		}

	}



/* gen-action-table */
	obj_t BGl_genzd2actionzd2tablez00zz__lalr_genz00()
	{
		{	/* Lalr/gen.scm 69 */
			{	/* Lalr/gen.scm 86 */
				obj_t BgL_arg1291z00_1145;

				{	/* Lalr/gen.scm 86 */
					obj_t BgL_arg1292z00_1146;

					{	/* Lalr/gen.scm 86 */
						obj_t BgL_arg1295z00_1147;

						BgL_arg1295z00_1147 =
							MAKE_YOUNG_PAIR(BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00
							(BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
								(BGl_actionsze70ze7zz__lalr_genz00(), BNIL)), BNIL);
						BgL_arg1292z00_1146 =
							MAKE_YOUNG_PAIR(BGl_symbol1880z00zz__lalr_genz00,
							BgL_arg1295z00_1147);
					}
					BgL_arg1291z00_1145 = MAKE_YOUNG_PAIR(BgL_arg1292z00_1146, BNIL);
				}
				return
					MAKE_YOUNG_PAIR(BGl_symbol1876z00zz__lalr_genz00,
					BgL_arg1291z00_1145);
			}
		}

	}



/* loop~2 */
	obj_t BGl_loopze72ze7zz__lalr_genz00(obj_t BgL_lz00_1160)
	{
		{	/* Lalr/gen.scm 75 */
			if (NULLP(BgL_lz00_1160))
				{	/* Lalr/gen.scm 76 */
					return BNIL;
				}
			else
				{	/* Lalr/gen.scm 78 */
					obj_t BgL_pz00_1163;

					BgL_pz00_1163 = CAR(((obj_t) BgL_lz00_1160));
					{	/* Lalr/gen.scm 78 */
						obj_t BgL_xz00_1164;

						BgL_xz00_1164 = CAR(((obj_t) BgL_pz00_1163));
						{	/* Lalr/gen.scm 78 */
							obj_t BgL_yz00_1165;

							BgL_yz00_1165 = CDR(((obj_t) BgL_pz00_1163));
							{	/* Lalr/gen.scm 78 */

								{	/* Lalr/gen.scm 81 */
									obj_t BgL_arg1306z00_1166;
									obj_t BgL_arg1307z00_1167;

									{	/* Lalr/gen.scm 81 */
										obj_t BgL_arg1308z00_1168;

										if (INTEGERP(BgL_xz00_1164))
											{	/* Lalr/gen.scm 81 */
												BgL_arg1308z00_1168 =
													VECTOR_REF(BGl_za2symvza2z00zz__lalr_rewritez00,
													((long) CINT(BGl_nvarsz00zz__lalr_globalz00) +
														(long) CINT(BgL_xz00_1164)));
											}
										else
											{	/* Lalr/gen.scm 81 */
												BgL_arg1308z00_1168 = BgL_xz00_1164;
											}
										BgL_arg1306z00_1166 =
											MAKE_YOUNG_PAIR(BgL_arg1308z00_1168, BgL_yz00_1165);
									}
									{	/* Lalr/gen.scm 83 */
										obj_t BgL_arg1311z00_1171;

										BgL_arg1311z00_1171 = CDR(((obj_t) BgL_lz00_1160));
										BgL_arg1307z00_1167 =
											BGl_loopze72ze7zz__lalr_genz00(BgL_arg1311z00_1171);
									}
									return
										MAKE_YOUNG_PAIR(BgL_arg1306z00_1166, BgL_arg1307z00_1167);
								}
							}
						}
					}
				}
		}

	}



/* loop-a~0 */
	obj_t BGl_loopzd2aze70z35zz__lalr_genz00(long BgL_iz00_1153)
	{
		{	/* Lalr/gen.scm 71 */
			if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BINT(BgL_iz00_1153),
					BGl_nstatesz00zz__lalr_globalz00))
				{	/* Lalr/gen.scm 72 */
					return BNIL;
				}
			else
				{	/* Lalr/gen.scm 72 */
					return
						MAKE_YOUNG_PAIR(BGl_loopze72ze7zz__lalr_genz00(VECTOR_REF
							(BGl_actionzd2tablezd2zz__lalr_globalz00, BgL_iz00_1153)),
						BGl_loopzd2aze70z35zz__lalr_genz00((BgL_iz00_1153 + ((long) 1))));
		}}

	}



/* actions~0 */
	obj_t BGl_actionsze70ze7zz__lalr_genz00()
	{
		{	/* Lalr/gen.scm 84 */
			return BGl_loopzd2aze70z35zz__lalr_genz00(((long) 0));
		}

	}



/* gen-goto-table */
	obj_t BGl_genzd2gotozd2tablez00zz__lalr_genz00()
	{
		{	/* Lalr/gen.scm 88 */
			{	/* Lalr/gen.scm 109 */
				obj_t BgL_arg1313z00_1177;

				{	/* Lalr/gen.scm 109 */
					obj_t BgL_arg1314z00_1178;

					{	/* Lalr/gen.scm 109 */
						obj_t BgL_arg1315z00_1179;

						BgL_arg1315z00_1179 =
							MAKE_YOUNG_PAIR(BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00
							(BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
								(BGl_gotosze70ze7zz__lalr_genz00(), BNIL)), BNIL);
						BgL_arg1314z00_1178 =
							MAKE_YOUNG_PAIR(BGl_symbol1880z00zz__lalr_genz00,
							BgL_arg1315z00_1179);
					}
					BgL_arg1313z00_1177 = MAKE_YOUNG_PAIR(BgL_arg1314z00_1178, BNIL);
				}
				return
					MAKE_YOUNG_PAIR(BGl_symbol1882z00zz__lalr_genz00,
					BgL_arg1313z00_1177);
			}
		}

	}



/* loop~1 */
	obj_t BGl_loopze71ze7zz__lalr_genz00(obj_t BgL_lz00_1193)
	{
		{	/* Lalr/gen.scm 96 */
		BGl_loopze71ze7zz__lalr_genz00:
			if (NULLP(BgL_lz00_1193))
				{	/* Lalr/gen.scm 97 */
					return BNIL;
				}
			else
				{	/* Lalr/gen.scm 99 */
					obj_t BgL_statez00_1196;

					BgL_statez00_1196 = CAR(((obj_t) BgL_lz00_1193));
					{	/* Lalr/gen.scm 99 */
						obj_t BgL_symbolz00_1197;

						BgL_symbolz00_1197 =
							VECTOR_REF(BGl_acceszd2symbolzd2zz__lalr_globalz00,
							(long) CINT(BgL_statez00_1196));
						{	/* Lalr/gen.scm 100 */

							if (
								((long) CINT(BgL_symbolz00_1197) <
									(long) CINT(BGl_nvarsz00zz__lalr_globalz00)))
								{	/* Lalr/gen.scm 103 */
									obj_t BgL_arg1328z00_1199;
									obj_t BgL_arg1329z00_1200;

									BgL_arg1328z00_1199 =
										MAKE_YOUNG_PAIR(VECTOR_REF
										(BGl_za2symvza2z00zz__lalr_rewritez00,
											(long) CINT(BgL_symbolz00_1197)), BgL_statez00_1196);
									{	/* Lalr/gen.scm 104 */
										obj_t BgL_arg1331z00_1202;

										BgL_arg1331z00_1202 = CDR(((obj_t) BgL_lz00_1193));
										BgL_arg1329z00_1200 =
											BGl_loopze71ze7zz__lalr_genz00(BgL_arg1331z00_1202);
									}
									return
										MAKE_YOUNG_PAIR(BgL_arg1328z00_1199, BgL_arg1329z00_1200);
								}
							else
								{	/* Lalr/gen.scm 105 */
									obj_t BgL_arg1333z00_1203;

									BgL_arg1333z00_1203 = CDR(((obj_t) BgL_lz00_1193));
									{
										obj_t BgL_lz00_2251;

										BgL_lz00_2251 = BgL_arg1333z00_1203;
										BgL_lz00_1193 = BgL_lz00_2251;
										goto BGl_loopze71ze7zz__lalr_genz00;
									}
								}
						}
					}
				}
		}

	}



/* loop-g~0 */
	obj_t BGl_loopzd2gze70z35zz__lalr_genz00(long BgL_iz00_1185)
	{
		{	/* Lalr/gen.scm 90 */
			if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BINT(BgL_iz00_1185),
					BGl_nstatesz00zz__lalr_globalz00))
				{	/* Lalr/gen.scm 91 */
					return BNIL;
				}
			else
				{	/* Lalr/gen.scm 94 */
					obj_t BgL_arg1322z00_1188;
					obj_t BgL_arg1324z00_1189;

					{	/* Lalr/gen.scm 94 */
						obj_t BgL_shiftsz00_1190;

						BgL_shiftsz00_1190 =
							VECTOR_REF(BGl_shiftzd2tablezd2zz__lalr_globalz00, BgL_iz00_1185);
						if (CBOOL(BgL_shiftsz00_1190))
							{	/* Lalr/gen.scm 96 */
								obj_t BgL_g1128z00_1191;

								BgL_g1128z00_1191 =
									VECTOR_REF(((obj_t) BgL_shiftsz00_1190), ((long) 2));
								BgL_arg1322z00_1188 =
									BGl_loopze71ze7zz__lalr_genz00(BgL_g1128z00_1191);
							}
						else
							{	/* Lalr/gen.scm 95 */
								BgL_arg1322z00_1188 = BNIL;
							}
					}
					BgL_arg1324z00_1189 =
						BGl_loopzd2gze70z35zz__lalr_genz00((BgL_iz00_1185 + ((long) 1)));
					return MAKE_YOUNG_PAIR(BgL_arg1322z00_1188, BgL_arg1324z00_1189);
				}
		}

	}



/* gotos~0 */
	obj_t BGl_gotosze70ze7zz__lalr_genz00()
	{
		{	/* Lalr/gen.scm 107 */
			return BGl_loopzd2gze70z35zz__lalr_genz00(((long) 0));
		}

	}



/* gen-reduction-table */
	obj_t BGl_genzd2reductionzd2tablez00zz__lalr_genz00()
	{
		{	/* Lalr/gen.scm 111 */
			{	/* Lalr/gen.scm 148 */
				obj_t BgL_arg1335z00_1211;

				{	/* Lalr/gen.scm 148 */
					obj_t BgL_arg1337z00_1212;

					{	/* Lalr/gen.scm 148 */
						obj_t BgL_arg1338z00_1213;

						{	/* Lalr/gen.scm 148 */
							obj_t BgL_arg1339z00_1214;
							obj_t BgL_arg1340z00_1215;

							{	/* Lalr/gen.scm 148 */
								obj_t BgL_arg1341z00_1216;

								{	/* Lalr/gen.scm 148 */
									obj_t BgL_arg1342z00_1217;

									BgL_arg1342z00_1217 =
										MAKE_YOUNG_PAIR(BGl_symbol1884z00zz__lalr_genz00, BNIL);
									BgL_arg1341z00_1216 =
										MAKE_YOUNG_PAIR(BGl_symbol1886z00zz__lalr_genz00,
										BgL_arg1342z00_1217);
								}
								BgL_arg1339z00_1214 =
									MAKE_YOUNG_PAIR(BGl_symbol1888z00zz__lalr_genz00,
									BgL_arg1341z00_1216);
							}
							{	/* Lalr/gen.scm 150 */
								obj_t BgL_arg1343z00_1218;

								{	/* Lalr/gen.scm 150 */
									obj_t BgL_arg1344z00_1219;

									{	/* Lalr/gen.scm 150 */
										obj_t BgL_arg1345z00_1220;

										BgL_arg1345z00_1220 =
											BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
											(BGl_reductionsze70ze7zz__lalr_genz00(), BNIL);
										BgL_arg1344z00_1219 =
											MAKE_YOUNG_PAIR(BGl_symbol1888z00zz__lalr_genz00,
											BgL_arg1345z00_1220);
									}
									BgL_arg1343z00_1218 =
										MAKE_YOUNG_PAIR(BGl_symbol1890z00zz__lalr_genz00,
										BgL_arg1344z00_1219);
								}
								BgL_arg1340z00_1215 =
									MAKE_YOUNG_PAIR(BgL_arg1343z00_1218, BNIL);
							}
							BgL_arg1338z00_1213 =
								MAKE_YOUNG_PAIR(BgL_arg1339z00_1214, BgL_arg1340z00_1215);
						}
						BgL_arg1337z00_1212 =
							MAKE_YOUNG_PAIR(BGl_symbol1828z00zz__lalr_genz00,
							BgL_arg1338z00_1213);
					}
					BgL_arg1335z00_1211 = MAKE_YOUNG_PAIR(BgL_arg1337z00_1212, BNIL);
				}
				return
					MAKE_YOUNG_PAIR(BGl_symbol1874z00zz__lalr_genz00,
					BgL_arg1335z00_1211);
			}
		}

	}



/* loop-l~0 */
	obj_t BGl_loopzd2lze70z35zz__lalr_genz00(obj_t BgL_lz00_1269,
		long BgL_noz00_1270)
	{
		{	/* Lalr/gen.scm 131 */
			if (NULLP(BgL_lz00_1269))
				{	/* Lalr/gen.scm 132 */
					return BNIL;
				}
			else
				{	/* Lalr/gen.scm 134 */
					obj_t BgL_defz00_1273;

					BgL_defz00_1273 = CAR(((obj_t) BgL_lz00_1269));
					{	/* Lalr/gen.scm 134 */
						obj_t BgL_ntz00_1274;

						BgL_ntz00_1274 = CAR(((obj_t) BgL_defz00_1273));
						{	/* Lalr/gen.scm 135 */

							{	/* Lalr/gen.scm 136 */
								obj_t BgL_g1129z00_1275;

								BgL_g1129z00_1275 = CDR(((obj_t) BgL_defz00_1273));
								return
									BGl_loopzd2pze70z35zz__lalr_genz00(BgL_lz00_1269,
									BgL_ntz00_1274, BgL_g1129z00_1275, BgL_noz00_1270);
							}
						}
					}
				}
		}

	}



/* loop~0 */
	obj_t BGl_loopze70ze7zz__lalr_genz00(long BgL_iz00_1227, obj_t BgL_lz00_1228)
	{
		{	/* Lalr/gen.scm 113 */
			if (NULLP(BgL_lz00_1228))
				{	/* Lalr/gen.scm 114 */
					return BNIL;
				}
			else
				{	/* Lalr/gen.scm 116 */
					obj_t BgL_symz00_1231;

					BgL_symz00_1231 = CAR(((obj_t) BgL_lz00_1228));
					{	/* Lalr/gen.scm 118 */
						obj_t BgL_arg1350z00_1232;
						obj_t BgL_arg1351z00_1233;

						{	/* Lalr/gen.scm 118 */
							obj_t BgL_arg1352z00_1234;
							obj_t BgL_arg1353z00_1235;

							if (PAIRP(BgL_symz00_1231))
								{	/* Lalr/gen.scm 118 */
									BgL_arg1352z00_1234 = CDR(BgL_symz00_1231);
								}
							else
								{	/* Lalr/gen.scm 118 */
									BgL_arg1352z00_1234 = BgL_symz00_1231;
								}
							{	/* Lalr/gen.scm 119 */
								obj_t BgL_arg1355z00_1237;

								{	/* Lalr/gen.scm 119 */
									obj_t BgL_arg1356z00_1238;

									{	/* Lalr/gen.scm 119 */
										obj_t BgL_arg1357z00_1239;

										{	/* Lalr/gen.scm 119 */
											obj_t BgL_arg1359z00_1240;

											{	/* Lalr/gen.scm 119 */
												obj_t BgL_arg1360z00_1241;

												{	/* Lalr/gen.scm 119 */
													obj_t BgL_arg1361z00_1242;

													{	/* Lalr/gen.scm 119 */
														long BgL_arg1362z00_1243;

														BgL_arg1362z00_1243 =
															((BgL_iz00_1227 * ((long) 2)) - ((long) 1));
														BgL_arg1361z00_1242 =
															MAKE_YOUNG_PAIR(BINT(BgL_arg1362z00_1243), BNIL);
													}
													BgL_arg1360z00_1241 =
														MAKE_YOUNG_PAIR(BGl_symbol1884z00zz__lalr_genz00,
														BgL_arg1361z00_1242);
												}
												BgL_arg1359z00_1240 =
													MAKE_YOUNG_PAIR(BGl_symbol1872z00zz__lalr_genz00,
													BgL_arg1360z00_1241);
											}
											BgL_arg1357z00_1239 =
												MAKE_YOUNG_PAIR(BgL_arg1359z00_1240, BNIL);
										}
										BgL_arg1356z00_1238 =
											MAKE_YOUNG_PAIR(BGl_symbol1886z00zz__lalr_genz00,
											BgL_arg1357z00_1239);
									}
									BgL_arg1355z00_1237 =
										MAKE_YOUNG_PAIR(BGl_symbol1892z00zz__lalr_genz00,
										BgL_arg1356z00_1238);
								}
								BgL_arg1353z00_1235 =
									MAKE_YOUNG_PAIR(BgL_arg1355z00_1237, BNIL);
							}
							BgL_arg1350z00_1232 =
								MAKE_YOUNG_PAIR(BgL_arg1352z00_1234, BgL_arg1353z00_1235);
						}
						{	/* Lalr/gen.scm 120 */
							long BgL_arg1364z00_1245;
							obj_t BgL_arg1365z00_1246;

							BgL_arg1364z00_1245 = (BgL_iz00_1227 - ((long) 1));
							BgL_arg1365z00_1246 = CDR(((obj_t) BgL_lz00_1228));
							BgL_arg1351z00_1233 =
								BGl_loopze70ze7zz__lalr_genz00(BgL_arg1364z00_1245,
								BgL_arg1365z00_1246);
						}
						return MAKE_YOUNG_PAIR(BgL_arg1350z00_1232, BgL_arg1351z00_1233);
					}
				}
		}

	}



/* loop-p~0 */
	obj_t BGl_loopzd2pze70z35zz__lalr_genz00(obj_t BgL_lz00_2084,
		obj_t BgL_ntz00_2083, obj_t BgL_prodsz00_1277, long BgL_noz00_1278)
	{
		{	/* Lalr/gen.scm 136 */
			{
				obj_t BgL_ntz00_1248;
				long BgL_nz00_1249;
				obj_t BgL_actz00_1250;

				if (NULLP(BgL_prodsz00_1277))
					{	/* Lalr/gen.scm 138 */
						obj_t BgL_arg1388z00_1281;

						BgL_arg1388z00_1281 = CDR(((obj_t) BgL_lz00_2084));
						return
							BGl_loopzd2lze70z35zz__lalr_genz00(BgL_arg1388z00_1281,
							BgL_noz00_1278);
					}
				else
					{	/* Lalr/gen.scm 139 */
						obj_t BgL_rhsz00_1282;

						{	/* Lalr/gen.scm 139 */
							obj_t BgL_pairz00_1778;

							BgL_pairz00_1778 = CAR(((obj_t) BgL_prodsz00_1277));
							BgL_rhsz00_1282 = CAR(BgL_pairz00_1778);
						}
						{	/* Lalr/gen.scm 139 */
							obj_t BgL_actz00_1283;

							{	/* Lalr/gen.scm 139 */
								obj_t BgL_pairz00_1782;

								BgL_pairz00_1782 = CAR(((obj_t) BgL_prodsz00_1277));
								BgL_actz00_1283 = CDR(BgL_pairz00_1782);
							}
							{	/* Lalr/gen.scm 139 */
								long BgL_nz00_1284;

								BgL_nz00_1284 = bgl_list_length(BgL_rhsz00_1282);
								{	/* Lalr/gen.scm 139 */

									{	/* Lalr/gen.scm 142 */
										obj_t BgL_arg1389z00_1285;
										obj_t BgL_arg1390z00_1286;

										{	/* Lalr/gen.scm 142 */
											obj_t BgL_arg1391z00_1287;
											obj_t BgL_arg1392z00_1288;

											{	/* Lalr/gen.scm 142 */
												obj_t BgL_list1395z00_1291;

												BgL_list1395z00_1291 =
													MAKE_YOUNG_PAIR(BINT(BgL_noz00_1278), BNIL);
												BgL_arg1391z00_1287 = BgL_list1395z00_1291;
											}
											{	/* Lalr/gen.scm 143 */
												obj_t BgL_arg1396z00_1292;

												{	/* Lalr/gen.scm 143 */
													obj_t BgL_arg1397z00_1293;
													obj_t BgL_arg1398z00_1294;

													BgL_arg1397z00_1293 =
														BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
														(BGl_loopze70ze7zz__lalr_genz00(BgL_nz00_1284,
															BgL_rhsz00_1282), BNIL);
													{	/* Lalr/gen.scm 143 */
														obj_t BgL_tmpz00_2325;

														BgL_ntz00_1248 = BgL_ntz00_2083;
														BgL_nz00_1249 = BgL_nz00_1284;
														BgL_actz00_1250 = BgL_actz00_1283;
														if (
															(BgL_ntz00_1248 ==
																BGl_symbol1894z00zz__lalr_genz00))
															{	/* Lalr/gen.scm 123 */
																BgL_tmpz00_2325 =
																	VECTOR_REF
																	(BGl_za2symvza2z00zz__lalr_rewritez00,
																	((long) 1));
															}
														else
															{	/* Lalr/gen.scm 125 */
																obj_t BgL_arg1368z00_1253;

																{	/* Lalr/gen.scm 125 */
																	obj_t BgL_arg1370z00_1254;

																	{	/* Lalr/gen.scm 125 */
																		obj_t BgL_arg1371z00_1255;
																		obj_t BgL_arg1372z00_1256;

																		{	/* Lalr/gen.scm 125 */
																			obj_t BgL_arg1373z00_1257;

																			{	/* Lalr/gen.scm 125 */
																				obj_t BgL_arg1374z00_1258;

																				{	/* Lalr/gen.scm 125 */
																					long BgL_arg1375z00_1259;

																					BgL_arg1375z00_1259 =
																						(((long) 2) * BgL_nz00_1249);
																					BgL_arg1374z00_1258 =
																						MAKE_YOUNG_PAIR(BINT
																						(BgL_arg1375z00_1259), BNIL);
																				}
																				BgL_arg1373z00_1257 =
																					MAKE_YOUNG_PAIR
																					(BGl_symbol1884z00zz__lalr_genz00,
																					BgL_arg1374z00_1258);
																			}
																			BgL_arg1371z00_1255 =
																				MAKE_YOUNG_PAIR
																				(BGl_symbol1872z00zz__lalr_genz00,
																				BgL_arg1373z00_1257);
																		}
																		{	/* Lalr/gen.scm 126 */
																			obj_t BgL_arg1376z00_1260;
																			obj_t BgL_arg1377z00_1261;

																			{	/* Lalr/gen.scm 126 */
																				obj_t BgL_arg1378z00_1262;

																				BgL_arg1378z00_1262 =
																					MAKE_YOUNG_PAIR(BgL_ntz00_1248, BNIL);
																				BgL_arg1376z00_1260 =
																					MAKE_YOUNG_PAIR
																					(BGl_symbol1880z00zz__lalr_genz00,
																					BgL_arg1378z00_1262);
																			}
																			{	/* Lalr/gen.scm 128 */
																				obj_t BgL_arg1379z00_1263;

																				{	/* Lalr/gen.scm 128 */
																					obj_t BgL_arg1380z00_1264;

																					{	/* Lalr/gen.scm 128 */
																						obj_t BgL_arg1381z00_1265;

																						BgL_arg1381z00_1265 =
																							MAKE_YOUNG_PAIR(BNIL,
																							BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																							(BgL_actz00_1250, BNIL));
																						BgL_arg1380z00_1264 =
																							MAKE_YOUNG_PAIR
																							(BGl_symbol1896z00zz__lalr_genz00,
																							BgL_arg1381z00_1265);
																					}
																					BgL_arg1379z00_1263 =
																						MAKE_YOUNG_PAIR(BgL_arg1380z00_1264,
																						BNIL);
																				}
																				BgL_arg1377z00_1261 =
																					MAKE_YOUNG_PAIR
																					(BGl_symbol1882z00zz__lalr_genz00,
																					BgL_arg1379z00_1263);
																			}
																			BgL_arg1372z00_1256 =
																				MAKE_YOUNG_PAIR(BgL_arg1376z00_1260,
																				BgL_arg1377z00_1261);
																		}
																		BgL_arg1370z00_1254 =
																			MAKE_YOUNG_PAIR(BgL_arg1371z00_1255,
																			BgL_arg1372z00_1256);
																	}
																	BgL_arg1368z00_1253 =
																		MAKE_YOUNG_PAIR
																		(BGl_symbol1886z00zz__lalr_genz00,
																		BgL_arg1370z00_1254);
																}
																BgL_tmpz00_2325 =
																	MAKE_YOUNG_PAIR
																	(BGl_symbol1825z00zz__lalr_genz00,
																	BgL_arg1368z00_1253);
															}
														BgL_arg1398z00_1294 =
															MAKE_YOUNG_PAIR(BgL_tmpz00_2325, BNIL);
													}
													BgL_arg1396z00_1292 =
														MAKE_YOUNG_PAIR(BgL_arg1397z00_1293,
														BgL_arg1398z00_1294);
												}
												BgL_arg1392z00_1288 =
													MAKE_YOUNG_PAIR(BGl_symbol1896z00zz__lalr_genz00,
													BgL_arg1396z00_1292);
											}
											{	/* Lalr/gen.scm 141 */
												obj_t BgL_list1393z00_1289;

												{	/* Lalr/gen.scm 141 */
													obj_t BgL_arg1394z00_1290;

													BgL_arg1394z00_1290 =
														MAKE_YOUNG_PAIR(BgL_arg1392z00_1288, BNIL);
													BgL_list1393z00_1289 =
														MAKE_YOUNG_PAIR(BgL_arg1391z00_1287,
														BgL_arg1394z00_1290);
												}
												BgL_arg1389z00_1285 = BgL_list1393z00_1289;
										}}
										{	/* Lalr/gen.scm 145 */
											obj_t BgL_arg1401z00_1297;
											long BgL_arg1402z00_1298;

											BgL_arg1401z00_1297 = CDR(((obj_t) BgL_prodsz00_1277));
											BgL_arg1402z00_1298 = (BgL_noz00_1278 + ((long) 1));
											BgL_arg1390z00_1286 =
												BGl_loopzd2pze70z35zz__lalr_genz00(BgL_lz00_2084,
												BgL_ntz00_2083, BgL_arg1401z00_1297,
												BgL_arg1402z00_1298);
										}
										return
											MAKE_YOUNG_PAIR(BgL_arg1389z00_1285, BgL_arg1390z00_1286);
									}
								}
							}
						}
					}
			}
		}

	}



/* reductions~0 */
	obj_t BGl_reductionsze70ze7zz__lalr_genz00()
	{
		{	/* Lalr/gen.scm 145 */
			return
				BGl_loopzd2lze70z35zz__lalr_genz00(BGl_grammarz00zz__lalr_globalz00,
				((long) 1));
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__lalr_genz00()
	{
		{	/* Lalr/gen.scm 11 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__lalr_genz00()
	{
		{	/* Lalr/gen.scm 11 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__lalr_genz00()
	{
		{	/* Lalr/gen.scm 11 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__lalr_genz00()
	{
		{	/* Lalr/gen.scm 11 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string1898z00zz__lalr_genz00));
			BGl_modulezd2initializa7ationz75zz__lalr_globalz00(((long) 39276813),
				BSTRING_TO_STRING(BGl_string1898z00zz__lalr_genz00));
			BGl_modulezd2initializa7ationz75zz__lalr_rewritez00(((long) 80638298),
				BSTRING_TO_STRING(BGl_string1898z00zz__lalr_genz00));
			BGl_modulezd2initializa7ationz75zz__typez00(((long) 121046386),
				BSTRING_TO_STRING(BGl_string1898z00zz__lalr_genz00));
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 70989162),
				BSTRING_TO_STRING(BGl_string1898z00zz__lalr_genz00));
			BGl_modulezd2initializa7ationz75zz__tvectorz00(((long) 135277364),
				BSTRING_TO_STRING(BGl_string1898z00zz__lalr_genz00));
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 128218115),
				BSTRING_TO_STRING(BGl_string1898z00zz__lalr_genz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string1898z00zz__lalr_genz00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 340267996),
				BSTRING_TO_STRING(BGl_string1898z00zz__lalr_genz00));
			BGl_modulezd2initializa7ationz75zz__bignumz00(((long) 6519875),
				BSTRING_TO_STRING(BGl_string1898z00zz__lalr_genz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 193422032),
				BSTRING_TO_STRING(BGl_string1898z00zz__lalr_genz00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 224967910),
				BSTRING_TO_STRING(BGl_string1898z00zz__lalr_genz00));
			BGl_modulezd2initializa7ationz75zz__rgcz00(((long) 352596942),
				BSTRING_TO_STRING(BGl_string1898z00zz__lalr_genz00));
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 439352636),
				BSTRING_TO_STRING(BGl_string1898z00zz__lalr_genz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 68572481),
				BSTRING_TO_STRING(BGl_string1898z00zz__lalr_genz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long)
					420334581), BSTRING_TO_STRING(BGl_string1898z00zz__lalr_genz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long)
					437057945), BSTRING_TO_STRING(BGl_string1898z00zz__lalr_genz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonum_dtoaz00(((long)
					268155874), BSTRING_TO_STRING(BGl_string1898z00zz__lalr_genz00));
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long)
					198621048), BSTRING_TO_STRING(BGl_string1898z00zz__lalr_genz00));
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long)
					473309694), BSTRING_TO_STRING(BGl_string1898z00zz__lalr_genz00));
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 459519474),
				BSTRING_TO_STRING(BGl_string1898z00zz__lalr_genz00));
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 460263341),
				BSTRING_TO_STRING(BGl_string1898z00zz__lalr_genz00));
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) -44274296),
				BSTRING_TO_STRING(BGl_string1898z00zz__lalr_genz00));
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long)
					9614573), BSTRING_TO_STRING(BGl_string1898z00zz__lalr_genz00));
			BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(((long) 323064336),
				BSTRING_TO_STRING(BGl_string1898z00zz__lalr_genz00));
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long)
					376927845), BSTRING_TO_STRING(BGl_string1898z00zz__lalr_genz00));
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 190906089),
				BSTRING_TO_STRING(BGl_string1898z00zz__lalr_genz00));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 331540733),
				BSTRING_TO_STRING(BGl_string1898z00zz__lalr_genz00));
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 86988972),
				BSTRING_TO_STRING(BGl_string1898z00zz__lalr_genz00));
			return BGl_modulezd2initializa7ationz75zz__evenvz00(((long) 528345319),
				BSTRING_TO_STRING(BGl_string1898z00zz__lalr_genz00));
		}

	}

#ifdef __cplusplus
}
#endif
