/*===========================================================================*/
/*   (Eval/expdsrfi0.scm)                                                    */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Eval/expdsrfi0.scm -indent -o objs/obj_u/Eval/expdsrfi0.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_bigloozd2intzd2siza7eza7zz__expander_srfi0z00();
	extern obj_t BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_symbol1922z00zz__expander_srfi0z00 = BUNSPEC;
	static obj_t BGl_symbol1924z00zz__expander_srfi0z00 = BUNSPEC;
	static obj_t BGl_symbol1928z00zz__expander_srfi0z00 = BUNSPEC;
	extern obj_t BGl_expandzd2errorzd2zz__expandz00(obj_t, obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__expander_srfi0z00 = BUNSPEC;
	static obj_t BGl_symbol1933z00zz__expander_srfi0z00 = BUNSPEC;
	static obj_t BGl_symbol1935z00zz__expander_srfi0z00 = BUNSPEC;
	static obj_t BGl_symbol1937z00zz__expander_srfi0z00 = BUNSPEC;
	static obj_t BGl_symbol1939z00zz__expander_srfi0z00 = BUNSPEC;
	extern bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol1941z00zz__expander_srfi0z00 = BUNSPEC;
	static obj_t BGl_symbol1943z00zz__expander_srfi0z00 = BUNSPEC;
	static obj_t BGl_symbol1945z00zz__expander_srfi0z00 = BUNSPEC;
	static obj_t BGl_symbol1947z00zz__expander_srfi0z00 = BUNSPEC;
	static obj_t BGl_symbol1949z00zz__expander_srfi0z00 = BUNSPEC;
	static obj_t BGl_symbol1951z00zz__expander_srfi0z00 = BUNSPEC;
	static obj_t BGl_symbol1953z00zz__expander_srfi0z00 = BUNSPEC;
	static obj_t BGl_symbol1955z00zz__expander_srfi0z00 = BUNSPEC;
	static obj_t BGl_symbol1957z00zz__expander_srfi0z00 = BUNSPEC;
	static obj_t BGl_symbol1959z00zz__expander_srfi0z00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zz__expander_srfi0z00();
	static obj_t BGl_symbol1961z00zz__expander_srfi0z00 = BUNSPEC;
	static obj_t BGl_symbol1963z00zz__expander_srfi0z00 = BUNSPEC;
	static obj_t BGl_za2srfizd2mutexza2zd2zz__expander_srfi0z00 = BUNSPEC;
	static obj_t BGl_symbol1965z00zz__expander_srfi0z00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zz__expander_srfi0z00();
	BGL_EXPORTED_DECL obj_t
		BGl_unregisterzd2evalzd2srfiz12z12zz__expander_srfi0z00(obj_t);
	static obj_t BGl_objectzd2initzd2zz__expander_srfi0z00();
	BGL_EXPORTED_DECL obj_t bgl_register_eval_srfi(obj_t);
	static obj_t BGl_symbol1981z00zz__expander_srfi0z00 = BUNSPEC;
	extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_symbol1985z00zz__expander_srfi0z00 = BUNSPEC;
	static obj_t BGl_symbol1986z00zz__expander_srfi0z00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_unregisterzd2compilezd2srfiz12z12zz__expander_srfi0z00(obj_t);
	static obj_t BGl_symbol1988z00zz__expander_srfi0z00 = BUNSPEC;
	static obj_t BGl_symbol1990z00zz__expander_srfi0z00 = BUNSPEC;
	static obj_t BGl_expandzd2condzd2expandzd2andzd2zz__expander_srfi0z00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_symbol1992z00zz__expander_srfi0z00 = BUNSPEC;
	static obj_t BGl_symbol1994z00zz__expander_srfi0z00 = BUNSPEC;
	static obj_t BGl_symbol1996z00zz__expander_srfi0z00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_unregisterzd2srfiz12zc0zz__expander_srfi0z00(obj_t);
	static obj_t
		BGl_z62registerzd2compilezd2srfiz12z70zz__expander_srfi0z00(obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_z62unregisterzd2evalzd2srfiz12z70zz__expander_srfi0z00(obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zz__expander_srfi0z00();
	static obj_t BGl_z62expandzd2condzd2expandz62zz__expander_srfi0z00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2evalzd2condzd2expandzd2zz__expander_srfi0z00(obj_t, obj_t);
	extern obj_t string_append(obj_t, obj_t);
	static obj_t BGl_z62unregisterzd2srfiz12za2zz__expander_srfi0z00(obj_t,
		obj_t);
	static obj_t BGl_za2srfizd2evalzd2listza2z00zz__expander_srfi0z00 = BUNSPEC;
	extern bool_t BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	extern obj_t bgl_remq_bang(obj_t, obj_t);
	static obj_t BGl_srfizd2commonzd2listz00zz__expander_srfi0z00();
	static obj_t BGl_za2srfizd2compilezd2listza2z00zz__expander_srfi0z00 =
		BUNSPEC;
	static obj_t BGl_z62registerzd2srfiz12za2zz__expander_srfi0z00(obj_t, obj_t);
	static obj_t BGl_z62compilezd2srfizf3z43zz__expander_srfi0z00(obj_t, obj_t);
	extern obj_t BGl_evepairifyz00zz__prognz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__expander_srfi0z00(long, char *);
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
	extern obj_t BGl_modulezd2initializa7ationz75zz__libraryz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bignumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__tvectorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern bool_t BGl_numberzf3zf3zz__r4_numbers_6_5z00(obj_t);
	static obj_t BGl_expandzd2condzd2expandzd2orzd2zz__expander_srfi0z00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_list1932z00zz__expander_srfi0z00 = BUNSPEC;
	static obj_t BGl_cnstzd2initzd2zz__expander_srfi0z00();
	static obj_t BGl_gczd2rootszd2initz00zz__expander_srfi0z00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__expander_srfi0z00();
	extern obj_t BGl_bigloozd2configzd2zz__configurez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_registerzd2srfiz12zc0zz__expander_srfi0z00(obj_t);
	static obj_t BGl_bigloozd2elongzd2siza7eza7zz__expander_srfi0z00();
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2condzd2expandz00zz__expander_srfi0z00(obj_t, obj_t, obj_t);
	extern obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_srfizd2evalzd2listz00zz__expander_srfi0z00();
	extern obj_t BGl_libraryzd2existszf3z21zz__libraryz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_evalzd2srfizf3z21zz__expander_srfi0z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2compilezd2condzd2expandzd2zz__expander_srfi0z00(obj_t, obj_t);
	static obj_t
		BGl_z62unregisterzd2compilezd2srfiz12z70zz__expander_srfi0z00(obj_t, obj_t);
	static obj_t
		BGl_z62expandzd2evalzd2condzd2expandzb0zz__expander_srfi0z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_compilezd2srfizf3z21zz__expander_srfi0z00(obj_t);
	static obj_t BGl_z62evalzd2srfizf3z43zz__expander_srfi0z00(obj_t, obj_t);
	static obj_t BGl_srfizd2compilezd2listz00zz__expander_srfi0z00();
	BGL_EXPORTED_DECL obj_t
		BGl_registerzd2compilezd2srfiz12z12zz__expander_srfi0z00(obj_t);
	static obj_t
		BGl_z62expandzd2compilezd2condzd2expandzb0zz__expander_srfi0z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62registerzd2evalzd2srfiz12z70zz__expander_srfi0z00(obj_t,
		obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_unregisterzd2evalzd2srfiz12zd2envzc0zz__expander_srfi0z00,
		BgL_bgl_za762unregisterza7d22000z00,
		BGl_z62unregisterzd2evalzd2srfiz12z70zz__expander_srfi0z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_compilezd2srfizf3zd2envzf3zz__expander_srfi0z00,
		BgL_bgl_za762compileza7d2srf2001z00,
		BGl_z62compilezd2srfizf3z43zz__expander_srfi0z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_unregisterzd2compilezd2srfiz12zd2envzc0zz__expander_srfi0z00,
		BgL_bgl_za762unregisterza7d22002z00,
		BGl_z62unregisterzd2compilezd2srfiz12z70zz__expander_srfi0z00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2compilezd2condzd2expandzd2envz00zz__expander_srfi0z00,
		BgL_bgl_za762expandza7d2comp2003z00,
		BGl_z62expandzd2compilezd2condzd2expandzb0zz__expander_srfi0z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1923z00zz__expander_srfi0z00,
		BgL_bgl_string1923za700za7za7_2004za7, "srfi0", 5);
	      DEFINE_STRING(BGl_string1925z00zz__expander_srfi0z00,
		BgL_bgl_string1925za700za7za7_2005za7, "int-size", 8);
	      DEFINE_STRING(BGl_string1926z00zz__expander_srfi0z00,
		BgL_bgl_string1926za700za7za7_2006za7, "30", 2);
	      DEFINE_STRING(BGl_string1927z00zz__expander_srfi0z00,
		BgL_bgl_string1927za700za7za7_2007za7, "bint", 4);
	      DEFINE_STRING(BGl_string1929z00zz__expander_srfi0z00,
		BgL_bgl_string1929za700za7za7_2008za7, "elong-size", 10);
	      DEFINE_STRING(BGl_string1930z00zz__expander_srfi0z00,
		BgL_bgl_string1930za700za7za7_2009za7, "32", 2);
	      DEFINE_STRING(BGl_string1931z00zz__expander_srfi0z00,
		BgL_bgl_string1931za700za7za7_2010za7, "elong", 5);
	      DEFINE_STRING(BGl_string1934z00zz__expander_srfi0z00,
		BgL_bgl_string1934za700za7za7_2011za7, "srfi-0", 6);
	      DEFINE_STRING(BGl_string1936z00zz__expander_srfi0z00,
		BgL_bgl_string1936za700za7za7_2012za7, "srfi-2", 6);
	      DEFINE_STRING(BGl_string1938z00zz__expander_srfi0z00,
		BgL_bgl_string1938za700za7za7_2013za7, "srfi-4", 6);
	      DEFINE_STRING(BGl_string1940z00zz__expander_srfi0z00,
		BgL_bgl_string1940za700za7za7_2014za7, "srfi-6", 6);
	      DEFINE_STRING(BGl_string1942z00zz__expander_srfi0z00,
		BgL_bgl_string1942za700za7za7_2015za7, "srfi-8", 6);
	      DEFINE_STRING(BGl_string1944z00zz__expander_srfi0z00,
		BgL_bgl_string1944za700za7za7_2016za7, "srfi-9", 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_unregisterzd2srfiz12zd2envz12zz__expander_srfi0z00,
		BgL_bgl_za762unregisterza7d22017z00,
		BGl_z62unregisterzd2srfiz12za2zz__expander_srfi0z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1946z00zz__expander_srfi0z00,
		BgL_bgl_string1946za700za7za7_2018za7, "srfi-10", 7);
	      DEFINE_STRING(BGl_string1948z00zz__expander_srfi0z00,
		BgL_bgl_string1948za700za7za7_2019za7, "srfi-22", 7);
	      DEFINE_STRING(BGl_string1950z00zz__expander_srfi0z00,
		BgL_bgl_string1950za700za7za7_2020za7, "srfi-28", 7);
	      DEFINE_STRING(BGl_string1952z00zz__expander_srfi0z00,
		BgL_bgl_string1952za700za7za7_2021za7, "srfi-30", 7);
	      DEFINE_STRING(BGl_string1954z00zz__expander_srfi0z00,
		BgL_bgl_string1954za700za7za7_2022za7, "bigloo", 6);
	      DEFINE_STRING(BGl_string1956z00zz__expander_srfi0z00,
		BgL_bgl_string1956za700za7za7_2023za7, "bigloo4", 7);
	      DEFINE_STRING(BGl_string1958z00zz__expander_srfi0z00,
		BgL_bgl_string1958za700za7za7_2024za7, "bigloo4.4", 9);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2condzd2expandzd2envzd2zz__expander_srfi0z00,
		BgL_bgl_za762expandza7d2cond2025z00,
		BGl_z62expandzd2condzd2expandz62zz__expander_srfi0z00, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string1960z00zz__expander_srfi0z00,
		BgL_bgl_string1960za700za7za7_2026za7, "bigloo4.4a", 10);
	      DEFINE_STRING(BGl_string1962z00zz__expander_srfi0z00,
		BgL_bgl_string1962za700za7za7_2027za7, "bigloo-weakptr", 14);
	      DEFINE_STRING(BGl_string1964z00zz__expander_srfi0z00,
		BgL_bgl_string1964za700za7za7_2028za7, "bigloo-finalizer", 16);
	      DEFINE_STRING(BGl_string1966z00zz__expander_srfi0z00,
		BgL_bgl_string1966za700za7za7_2029za7, "bigloo-eval", 11);
	      DEFINE_STRING(BGl_string1967z00zz__expander_srfi0z00,
		BgL_bgl_string1967za700za7za7_2030za7,
		"/tmp/4.4a/runtime/Eval/expdsrfi0.scm", 36);
	      DEFINE_STRING(BGl_string1968z00zz__expander_srfi0z00,
		BgL_bgl_string1968za700za7za7_2031za7, "&register-eval-srfi!", 20);
	      DEFINE_STRING(BGl_string1969z00zz__expander_srfi0z00,
		BgL_bgl_string1969za700za7za7_2032za7, "symbol", 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_registerzd2compilezd2srfiz12zd2envzc0zz__expander_srfi0z00,
		BgL_bgl_za762registerza7d2co2033z00,
		BGl_z62registerzd2compilezd2srfiz12z70zz__expander_srfi0z00, 0L, BUNSPEC,
		1);
	      DEFINE_STRING(BGl_string1970z00zz__expander_srfi0z00,
		BgL_bgl_string1970za700za7za7_2034za7, "&unregister-eval-srfi!", 22);
	      DEFINE_STRING(BGl_string1971z00zz__expander_srfi0z00,
		BgL_bgl_string1971za700za7za7_2035za7, "&register-compile-srfi!", 23);
	      DEFINE_STRING(BGl_string1972z00zz__expander_srfi0z00,
		BgL_bgl_string1972za700za7za7_2036za7, "&unregister-compile-srfi!", 25);
	      DEFINE_STRING(BGl_string1973z00zz__expander_srfi0z00,
		BgL_bgl_string1973za700za7za7_2037za7, "&register-srfi!", 15);
	      DEFINE_STRING(BGl_string1974z00zz__expander_srfi0z00,
		BgL_bgl_string1974za700za7za7_2038za7, "&unregister-srfi!", 17);
	      DEFINE_STRING(BGl_string1975z00zz__expander_srfi0z00,
		BgL_bgl_string1975za700za7za7_2039za7, "&expand-eval-cond-expand", 24);
	      DEFINE_STRING(BGl_string1976z00zz__expander_srfi0z00,
		BgL_bgl_string1976za700za7za7_2040za7, "pair-nil", 8);
	      DEFINE_STRING(BGl_string1977z00zz__expander_srfi0z00,
		BgL_bgl_string1977za700za7za7_2041za7, "procedure", 9);
	      DEFINE_STRING(BGl_string1978z00zz__expander_srfi0z00,
		BgL_bgl_string1978za700za7za7_2042za7, "&expand-compile-cond-expand", 27);
	      DEFINE_STRING(BGl_string1979z00zz__expander_srfi0z00,
		BgL_bgl_string1979za700za7za7_2043za7, "&compile-srfi?", 14);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_registerzd2srfiz12zd2envz12zz__expander_srfi0z00,
		BgL_bgl_za762registerza7d2sr2044z00,
		BGl_z62registerzd2srfiz12za2zz__expander_srfi0z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1980z00zz__expander_srfi0z00,
		BgL_bgl_string1980za700za7za7_2045za7, "&eval-srfi?", 11);
	      DEFINE_STRING(BGl_string1982z00zz__expander_srfi0z00,
		BgL_bgl_string1982za700za7za7_2046za7, "begin", 5);
	      DEFINE_STRING(BGl_string1983z00zz__expander_srfi0z00,
		BgL_bgl_string1983za700za7za7_2047za7, "cond-expand", 11);
	      DEFINE_STRING(BGl_string1984z00zz__expander_srfi0z00,
		BgL_bgl_string1984za700za7za7_2048za7, "Illegal form", 12);
	      DEFINE_STRING(BGl_string1987z00zz__expander_srfi0z00,
		BgL_bgl_string1987za700za7za7_2049za7, "else", 4);
	      DEFINE_STRING(BGl_string1989z00zz__expander_srfi0z00,
		BgL_bgl_string1989za700za7za7_2050za7, "and", 3);
	      DEFINE_STRING(BGl_string1991z00zz__expander_srfi0z00,
		BgL_bgl_string1991za700za7za7_2051za7, "or", 2);
	      DEFINE_STRING(BGl_string1993z00zz__expander_srfi0z00,
		BgL_bgl_string1993za700za7za7_2052za7, "not", 3);
	      DEFINE_STRING(BGl_string1995z00zz__expander_srfi0z00,
		BgL_bgl_string1995za700za7za7_2053za7, "library", 7);
	      DEFINE_STRING(BGl_string1997z00zz__expander_srfi0z00,
		BgL_bgl_string1997za700za7za7_2054za7, "config", 6);
	      DEFINE_STRING(BGl_string1998z00zz__expander_srfi0z00,
		BgL_bgl_string1998za700za7za7_2055za7, "&expand-cond-expand", 19);
	      DEFINE_STRING(BGl_string1999z00zz__expander_srfi0z00,
		BgL_bgl_string1999za700za7za7_2056za7, "__expander_srfi0", 16);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_registerzd2evalzd2srfiz12zd2envzc0zz__expander_srfi0z00,
		BgL_bgl_za762registerza7d2ev2057z00,
		BGl_z62registerzd2evalzd2srfiz12z70zz__expander_srfi0z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2evalzd2condzd2expandzd2envz00zz__expander_srfi0z00,
		BgL_bgl_za762expandza7d2eval2058z00,
		BGl_z62expandzd2evalzd2condzd2expandzb0zz__expander_srfi0z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_evalzd2srfizf3zd2envzf3zz__expander_srfi0z00,
		BgL_bgl_za762evalza7d2srfiza7f2059za7,
		BGl_z62evalzd2srfizf3z43zz__expander_srfi0z00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_symbol1922z00zz__expander_srfi0z00));
		     ADD_ROOT((void *) (&BGl_symbol1924z00zz__expander_srfi0z00));
		     ADD_ROOT((void *) (&BGl_symbol1928z00zz__expander_srfi0z00));
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zz__expander_srfi0z00));
		     ADD_ROOT((void *) (&BGl_symbol1933z00zz__expander_srfi0z00));
		     ADD_ROOT((void *) (&BGl_symbol1935z00zz__expander_srfi0z00));
		     ADD_ROOT((void *) (&BGl_symbol1937z00zz__expander_srfi0z00));
		     ADD_ROOT((void *) (&BGl_symbol1939z00zz__expander_srfi0z00));
		     ADD_ROOT((void *) (&BGl_symbol1941z00zz__expander_srfi0z00));
		     ADD_ROOT((void *) (&BGl_symbol1943z00zz__expander_srfi0z00));
		     ADD_ROOT((void *) (&BGl_symbol1945z00zz__expander_srfi0z00));
		     ADD_ROOT((void *) (&BGl_symbol1947z00zz__expander_srfi0z00));
		     ADD_ROOT((void *) (&BGl_symbol1949z00zz__expander_srfi0z00));
		     ADD_ROOT((void *) (&BGl_symbol1951z00zz__expander_srfi0z00));
		     ADD_ROOT((void *) (&BGl_symbol1953z00zz__expander_srfi0z00));
		     ADD_ROOT((void *) (&BGl_symbol1955z00zz__expander_srfi0z00));
		     ADD_ROOT((void *) (&BGl_symbol1957z00zz__expander_srfi0z00));
		     ADD_ROOT((void *) (&BGl_symbol1959z00zz__expander_srfi0z00));
		     ADD_ROOT((void *) (&BGl_symbol1961z00zz__expander_srfi0z00));
		     ADD_ROOT((void *) (&BGl_symbol1963z00zz__expander_srfi0z00));
		     ADD_ROOT((void *) (&BGl_za2srfizd2mutexza2zd2zz__expander_srfi0z00));
		     ADD_ROOT((void *) (&BGl_symbol1965z00zz__expander_srfi0z00));
		     ADD_ROOT((void *) (&BGl_symbol1981z00zz__expander_srfi0z00));
		     ADD_ROOT((void *) (&BGl_symbol1985z00zz__expander_srfi0z00));
		     ADD_ROOT((void *) (&BGl_symbol1986z00zz__expander_srfi0z00));
		     ADD_ROOT((void *) (&BGl_symbol1988z00zz__expander_srfi0z00));
		     ADD_ROOT((void *) (&BGl_symbol1990z00zz__expander_srfi0z00));
		     ADD_ROOT((void *) (&BGl_symbol1992z00zz__expander_srfi0z00));
		     ADD_ROOT((void *) (&BGl_symbol1994z00zz__expander_srfi0z00));
		     ADD_ROOT((void *) (&BGl_symbol1996z00zz__expander_srfi0z00));
		   
			 ADD_ROOT((void
				*) (&BGl_za2srfizd2evalzd2listza2z00zz__expander_srfi0z00));
		     ADD_ROOT((void
				*) (&BGl_za2srfizd2compilezd2listza2z00zz__expander_srfi0z00));
		     ADD_ROOT((void *) (&BGl_list1932z00zz__expander_srfi0z00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__expander_srfi0z00(long
		BgL_checksumz00_2311, char *BgL_fromz00_2312)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__expander_srfi0z00))
				{
					BGl_requirezd2initializa7ationz75zz__expander_srfi0z00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__expander_srfi0z00();
					BGl_cnstzd2initzd2zz__expander_srfi0z00();
					BGl_importedzd2moduleszd2initz00zz__expander_srfi0z00();
					return BGl_toplevelzd2initzd2zz__expander_srfi0z00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__expander_srfi0z00()
	{
		{	/* Eval/expdsrfi0.scm 15 */
			BGl_symbol1922z00zz__expander_srfi0z00 =
				bstring_to_symbol(BGl_string1923z00zz__expander_srfi0z00);
			BGl_symbol1924z00zz__expander_srfi0z00 =
				bstring_to_symbol(BGl_string1925z00zz__expander_srfi0z00);
			BGl_symbol1928z00zz__expander_srfi0z00 =
				bstring_to_symbol(BGl_string1929z00zz__expander_srfi0z00);
			BGl_symbol1933z00zz__expander_srfi0z00 =
				bstring_to_symbol(BGl_string1934z00zz__expander_srfi0z00);
			BGl_symbol1935z00zz__expander_srfi0z00 =
				bstring_to_symbol(BGl_string1936z00zz__expander_srfi0z00);
			BGl_symbol1937z00zz__expander_srfi0z00 =
				bstring_to_symbol(BGl_string1938z00zz__expander_srfi0z00);
			BGl_symbol1939z00zz__expander_srfi0z00 =
				bstring_to_symbol(BGl_string1940z00zz__expander_srfi0z00);
			BGl_symbol1941z00zz__expander_srfi0z00 =
				bstring_to_symbol(BGl_string1942z00zz__expander_srfi0z00);
			BGl_symbol1943z00zz__expander_srfi0z00 =
				bstring_to_symbol(BGl_string1944z00zz__expander_srfi0z00);
			BGl_symbol1945z00zz__expander_srfi0z00 =
				bstring_to_symbol(BGl_string1946z00zz__expander_srfi0z00);
			BGl_symbol1947z00zz__expander_srfi0z00 =
				bstring_to_symbol(BGl_string1948z00zz__expander_srfi0z00);
			BGl_symbol1949z00zz__expander_srfi0z00 =
				bstring_to_symbol(BGl_string1950z00zz__expander_srfi0z00);
			BGl_symbol1951z00zz__expander_srfi0z00 =
				bstring_to_symbol(BGl_string1952z00zz__expander_srfi0z00);
			BGl_list1932z00zz__expander_srfi0z00 =
				MAKE_YOUNG_PAIR(BGl_symbol1933z00zz__expander_srfi0z00,
				MAKE_YOUNG_PAIR(BGl_symbol1935z00zz__expander_srfi0z00,
					MAKE_YOUNG_PAIR(BGl_symbol1937z00zz__expander_srfi0z00,
						MAKE_YOUNG_PAIR(BGl_symbol1939z00zz__expander_srfi0z00,
							MAKE_YOUNG_PAIR(BGl_symbol1941z00zz__expander_srfi0z00,
								MAKE_YOUNG_PAIR(BGl_symbol1943z00zz__expander_srfi0z00,
									MAKE_YOUNG_PAIR(BGl_symbol1945z00zz__expander_srfi0z00,
										MAKE_YOUNG_PAIR(BGl_symbol1947z00zz__expander_srfi0z00,
											MAKE_YOUNG_PAIR(BGl_symbol1949z00zz__expander_srfi0z00,
												MAKE_YOUNG_PAIR(BGl_symbol1951z00zz__expander_srfi0z00,
													BNIL))))))))));
			BGl_symbol1953z00zz__expander_srfi0z00 =
				bstring_to_symbol(BGl_string1954z00zz__expander_srfi0z00);
			BGl_symbol1955z00zz__expander_srfi0z00 =
				bstring_to_symbol(BGl_string1956z00zz__expander_srfi0z00);
			BGl_symbol1957z00zz__expander_srfi0z00 =
				bstring_to_symbol(BGl_string1958z00zz__expander_srfi0z00);
			BGl_symbol1959z00zz__expander_srfi0z00 =
				bstring_to_symbol(BGl_string1960z00zz__expander_srfi0z00);
			BGl_symbol1961z00zz__expander_srfi0z00 =
				bstring_to_symbol(BGl_string1962z00zz__expander_srfi0z00);
			BGl_symbol1963z00zz__expander_srfi0z00 =
				bstring_to_symbol(BGl_string1964z00zz__expander_srfi0z00);
			BGl_symbol1965z00zz__expander_srfi0z00 =
				bstring_to_symbol(BGl_string1966z00zz__expander_srfi0z00);
			BGl_symbol1981z00zz__expander_srfi0z00 =
				bstring_to_symbol(BGl_string1982z00zz__expander_srfi0z00);
			BGl_symbol1985z00zz__expander_srfi0z00 =
				bstring_to_symbol(BGl_string1983z00zz__expander_srfi0z00);
			BGl_symbol1986z00zz__expander_srfi0z00 =
				bstring_to_symbol(BGl_string1987z00zz__expander_srfi0z00);
			BGl_symbol1988z00zz__expander_srfi0z00 =
				bstring_to_symbol(BGl_string1989z00zz__expander_srfi0z00);
			BGl_symbol1990z00zz__expander_srfi0z00 =
				bstring_to_symbol(BGl_string1991z00zz__expander_srfi0z00);
			BGl_symbol1992z00zz__expander_srfi0z00 =
				bstring_to_symbol(BGl_string1993z00zz__expander_srfi0z00);
			BGl_symbol1994z00zz__expander_srfi0z00 =
				bstring_to_symbol(BGl_string1995z00zz__expander_srfi0z00);
			return (BGl_symbol1996z00zz__expander_srfi0z00 =
				bstring_to_symbol(BGl_string1997z00zz__expander_srfi0z00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__expander_srfi0z00()
	{
		{	/* Eval/expdsrfi0.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__expander_srfi0z00()
	{
		{	/* Eval/expdsrfi0.scm 15 */
			{	/* Eval/expdsrfi0.scm 117 */
				obj_t BgL_res1802z00_1793;

				BgL_res1802z00_1793 =
					bgl_make_mutex(BGl_symbol1922z00zz__expander_srfi0z00);
				BGl_za2srfizd2mutexza2zd2zz__expander_srfi0z00 = BgL_res1802z00_1793;
			}
			BGl_za2srfizd2evalzd2listza2z00zz__expander_srfi0z00 = BFALSE;
			return (BGl_za2srfizd2compilezd2listza2z00zz__expander_srfi0z00 =
				BFALSE, BUNSPEC);
		}

	}



/* bigloo-int-size */
	obj_t BGl_bigloozd2intzd2siza7eza7zz__expander_srfi0z00()
	{
		{	/* Eval/expdsrfi0.scm 99 */
			{	/* Eval/expdsrfi0.scm 100 */
				obj_t BgL_isiza7eza7_1089;

				BgL_isiza7eza7_1089 =
					BGl_bigloozd2configzd2zz__configurez00
					(BGl_symbol1924z00zz__expander_srfi0z00);
				{	/* Eval/expdsrfi0.scm 103 */
					obj_t BgL_arg1170z00_1090;

					{	/* Eval/expdsrfi0.scm 103 */
						obj_t BgL_arg1172z00_1091;

						if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_isiza7eza7_1089))
							{	/* Ieee/number.scm 164 */

								BgL_arg1172z00_1091 =
									BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
									(BgL_isiza7eza7_1089, BINT(((long) 10)));
							}
						else
							{	/* Eval/expdsrfi0.scm 103 */
								BgL_arg1172z00_1091 = BGl_string1926z00zz__expander_srfi0z00;
							}
						BgL_arg1170z00_1090 =
							string_append(BGl_string1927z00zz__expander_srfi0z00,
							BgL_arg1172z00_1091);
					}
					return bstring_to_symbol(BgL_arg1170z00_1090);
				}
			}
		}

	}



/* bigloo-elong-size */
	obj_t BGl_bigloozd2elongzd2siza7eza7zz__expander_srfi0z00()
	{
		{	/* Eval/expdsrfi0.scm 108 */
			{	/* Eval/expdsrfi0.scm 109 */
				obj_t BgL_esiza7eza7_1095;

				BgL_esiza7eza7_1095 =
					BGl_bigloozd2configzd2zz__configurez00
					(BGl_symbol1928z00zz__expander_srfi0z00);
				{	/* Eval/expdsrfi0.scm 112 */
					obj_t BgL_arg1174z00_1096;

					{	/* Eval/expdsrfi0.scm 112 */
						obj_t BgL_arg1175z00_1097;

						if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_esiza7eza7_1095))
							{	/* Ieee/number.scm 164 */

								BgL_arg1175z00_1097 =
									BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
									(BgL_esiza7eza7_1095, BINT(((long) 10)));
							}
						else
							{	/* Eval/expdsrfi0.scm 112 */
								BgL_arg1175z00_1097 = BGl_string1930z00zz__expander_srfi0z00;
							}
						BgL_arg1174z00_1096 =
							string_append(BGl_string1931z00zz__expander_srfi0z00,
							BgL_arg1175z00_1097);
					}
					return bstring_to_symbol(BgL_arg1174z00_1096);
				}
			}
		}

	}



/* srfi-common-list */
	obj_t BGl_srfizd2commonzd2listz00zz__expander_srfi0z00()
	{
		{	/* Eval/expdsrfi0.scm 137 */
			{	/* Eval/expdsrfi0.scm 138 */
				obj_t BgL_lz00_1101;

				{	/* Eval/expdsrfi0.scm 142 */
					obj_t BgL_arg1178z00_1103;

					{	/* Eval/expdsrfi0.scm 142 */
						obj_t BgL_arg1179z00_1104;

						{	/* Eval/expdsrfi0.scm 142 */
							obj_t BgL_arg1186z00_1105;

							{	/* Eval/expdsrfi0.scm 142 */
								obj_t BgL_arg1190z00_1106;

								{	/* Eval/expdsrfi0.scm 142 */
									obj_t BgL_arg1194z00_1107;
									obj_t BgL_arg1197z00_1108;

									BgL_arg1194z00_1107 =
										BGl_bigloozd2intzd2siza7eza7zz__expander_srfi0z00();
									{	/* Eval/expdsrfi0.scm 143 */
										obj_t BgL_arg1201z00_1109;

										BgL_arg1201z00_1109 =
											BGl_bigloozd2elongzd2siza7eza7zz__expander_srfi0z00();
										BgL_arg1197z00_1108 =
											MAKE_YOUNG_PAIR(BgL_arg1201z00_1109,
											BGl_list1932z00zz__expander_srfi0z00);
									}
									BgL_arg1190z00_1106 =
										MAKE_YOUNG_PAIR(BgL_arg1194z00_1107, BgL_arg1197z00_1108);
								}
								BgL_arg1186z00_1105 =
									MAKE_YOUNG_PAIR(BGl_symbol1953z00zz__expander_srfi0z00,
									BgL_arg1190z00_1106);
							}
							BgL_arg1179z00_1104 =
								MAKE_YOUNG_PAIR(BGl_symbol1955z00zz__expander_srfi0z00,
								BgL_arg1186z00_1105);
						}
						BgL_arg1178z00_1103 =
							MAKE_YOUNG_PAIR(BGl_symbol1957z00zz__expander_srfi0z00,
							BgL_arg1179z00_1104);
					}
					BgL_lz00_1101 =
						MAKE_YOUNG_PAIR(BGl_symbol1959z00zz__expander_srfi0z00,
						BgL_arg1178z00_1103);
				}
				if (BGL_AUTO_FINALIZER)
					{	/* Eval/expdsrfi0.scm 155 */
						obj_t BgL_arg1177z00_1102;

						BgL_arg1177z00_1102 =
							MAKE_YOUNG_PAIR(BGl_symbol1961z00zz__expander_srfi0z00,
							BgL_lz00_1101);
						return MAKE_YOUNG_PAIR(BGl_symbol1963z00zz__expander_srfi0z00,
							BgL_arg1177z00_1102);
					}
				else
					{	/* Eval/expdsrfi0.scm 154 */
						return BgL_lz00_1101;
					}
			}
		}

	}



/* srfi-compile-list */
	obj_t BGl_srfizd2compilezd2listz00zz__expander_srfi0z00()
	{
		{	/* Eval/expdsrfi0.scm 167 */
			if (CBOOL(BGl_za2srfizd2compilezd2listza2z00zz__expander_srfi0z00))
				{	/* Eval/expdsrfi0.scm 168 */
					BFALSE;
				}
			else
				{	/* Eval/expdsrfi0.scm 168 */
					BGl_za2srfizd2compilezd2listza2z00zz__expander_srfi0z00 =
						BGl_srfizd2commonzd2listz00zz__expander_srfi0z00();
				}
			return BGl_za2srfizd2compilezd2listza2z00zz__expander_srfi0z00;
		}

	}



/* srfi-eval-list */
	obj_t BGl_srfizd2evalzd2listz00zz__expander_srfi0z00()
	{
		{	/* Eval/expdsrfi0.scm 175 */
			if (CBOOL(BGl_za2srfizd2evalzd2listza2z00zz__expander_srfi0z00))
				{	/* Eval/expdsrfi0.scm 176 */
					BFALSE;
				}
			else
				{	/* Eval/expdsrfi0.scm 177 */
					obj_t BgL_arg1208z00_1110;

					BgL_arg1208z00_1110 =
						BGl_srfizd2commonzd2listz00zz__expander_srfi0z00();
					BGl_za2srfizd2evalzd2listza2z00zz__expander_srfi0z00 =
						MAKE_YOUNG_PAIR(BGl_symbol1965z00zz__expander_srfi0z00,
						BgL_arg1208z00_1110);
				}
			return BGl_za2srfizd2evalzd2listza2z00zz__expander_srfi0z00;
		}

	}



/* register-eval-srfi! */
	BGL_EXPORTED_DEF obj_t bgl_register_eval_srfi(obj_t BgL_srfiz00_3)
	{
		{	/* Eval/expdsrfi0.scm 183 */
			{	/* Eval/expdsrfi0.scm 184 */
				obj_t BgL_top2067z00_2393;

				BgL_top2067z00_2393 = BGL_EXITD_TOP_AS_OBJ();
				BGL_MUTEX_LOCK(BGl_za2srfizd2mutexza2zd2zz__expander_srfi0z00);
				BGL_EXITD_PUSH_PROTECT(BgL_top2067z00_2393,
					BGl_za2srfizd2mutexza2zd2zz__expander_srfi0z00);
				BUNSPEC;
				{	/* Eval/expdsrfi0.scm 184 */
					obj_t BgL_tmp2066z00_2392;

					BgL_tmp2066z00_2392 =
						(BGl_za2srfizd2evalzd2listza2z00zz__expander_srfi0z00 =
						MAKE_YOUNG_PAIR(BgL_srfiz00_3,
							BGl_srfizd2evalzd2listz00zz__expander_srfi0z00()), BUNSPEC);
					BGL_EXITD_POP_PROTECT(BgL_top2067z00_2393);
					BUNSPEC;
					BGL_MUTEX_UNLOCK(BGl_za2srfizd2mutexza2zd2zz__expander_srfi0z00);
					return BgL_tmp2066z00_2392;
				}
			}
		}

	}



/* &register-eval-srfi! */
	obj_t BGl_z62registerzd2evalzd2srfiz12z70zz__expander_srfi0z00(obj_t
		BgL_envz00_2255, obj_t BgL_srfiz00_2256)
	{
		{	/* Eval/expdsrfi0.scm 183 */
			{	/* Eval/expdsrfi0.scm 184 */
				obj_t BgL_auxz00_2401;

				if (SYMBOLP(BgL_srfiz00_2256))
					{	/* Eval/expdsrfi0.scm 184 */
						BgL_auxz00_2401 = BgL_srfiz00_2256;
					}
				else
					{
						obj_t BgL_auxz00_2404;

						BgL_auxz00_2404 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1967z00zz__expander_srfi0z00, BINT(((long) 7598)),
							BGl_string1968z00zz__expander_srfi0z00,
							BGl_string1969z00zz__expander_srfi0z00, BgL_srfiz00_2256);
						FAILURE(BgL_auxz00_2404, BFALSE, BFALSE);
					}
				return bgl_register_eval_srfi(BgL_auxz00_2401);
			}
		}

	}



/* unregister-eval-srfi! */
	BGL_EXPORTED_DEF obj_t
		BGl_unregisterzd2evalzd2srfiz12z12zz__expander_srfi0z00(obj_t BgL_srfiz00_4)
	{
		{	/* Eval/expdsrfi0.scm 190 */
			{	/* Eval/expdsrfi0.scm 191 */
				obj_t BgL_top2070z00_2410;

				BgL_top2070z00_2410 = BGL_EXITD_TOP_AS_OBJ();
				BGL_MUTEX_LOCK(BGl_za2srfizd2mutexza2zd2zz__expander_srfi0z00);
				BGL_EXITD_PUSH_PROTECT(BgL_top2070z00_2410,
					BGl_za2srfizd2mutexza2zd2zz__expander_srfi0z00);
				BUNSPEC;
				{	/* Eval/expdsrfi0.scm 191 */
					obj_t BgL_tmp2069z00_2409;

					BgL_tmp2069z00_2409 =
						(BGl_za2srfizd2evalzd2listza2z00zz__expander_srfi0z00 =
						bgl_remq_bang(BgL_srfiz00_4,
							BGl_srfizd2evalzd2listz00zz__expander_srfi0z00()), BUNSPEC);
					BGL_EXITD_POP_PROTECT(BgL_top2070z00_2410);
					BUNSPEC;
					BGL_MUTEX_UNLOCK(BGl_za2srfizd2mutexza2zd2zz__expander_srfi0z00);
					return BgL_tmp2069z00_2409;
				}
			}
		}

	}



/* &unregister-eval-srfi! */
	obj_t BGl_z62unregisterzd2evalzd2srfiz12z70zz__expander_srfi0z00(obj_t
		BgL_envz00_2257, obj_t BgL_srfiz00_2258)
	{
		{	/* Eval/expdsrfi0.scm 190 */
			{	/* Eval/expdsrfi0.scm 191 */
				obj_t BgL_auxz00_2418;

				if (SYMBOLP(BgL_srfiz00_2258))
					{	/* Eval/expdsrfi0.scm 191 */
						BgL_auxz00_2418 = BgL_srfiz00_2258;
					}
				else
					{
						obj_t BgL_auxz00_2421;

						BgL_auxz00_2421 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1967z00zz__expander_srfi0z00, BINT(((long) 7956)),
							BGl_string1970z00zz__expander_srfi0z00,
							BGl_string1969z00zz__expander_srfi0z00, BgL_srfiz00_2258);
						FAILURE(BgL_auxz00_2421, BFALSE, BFALSE);
					}
				return
					BGl_unregisterzd2evalzd2srfiz12z12zz__expander_srfi0z00
					(BgL_auxz00_2418);
			}
		}

	}



/* register-compile-srfi! */
	BGL_EXPORTED_DEF obj_t
		BGl_registerzd2compilezd2srfiz12z12zz__expander_srfi0z00(obj_t
		BgL_srfiz00_5)
	{
		{	/* Eval/expdsrfi0.scm 197 */
			{	/* Eval/expdsrfi0.scm 198 */
				obj_t BgL_top2073z00_2427;

				BgL_top2073z00_2427 = BGL_EXITD_TOP_AS_OBJ();
				BGL_MUTEX_LOCK(BGl_za2srfizd2mutexza2zd2zz__expander_srfi0z00);
				BGL_EXITD_PUSH_PROTECT(BgL_top2073z00_2427,
					BGl_za2srfizd2mutexza2zd2zz__expander_srfi0z00);
				BUNSPEC;
				{	/* Eval/expdsrfi0.scm 198 */
					obj_t BgL_tmp2072z00_2426;

					{	/* Eval/expdsrfi0.scm 199 */
						obj_t BgL_arg1221z00_1800;

						if (CBOOL(BGl_za2srfizd2compilezd2listza2z00zz__expander_srfi0z00))
							{	/* Eval/expdsrfi0.scm 168 */
								BFALSE;
							}
						else
							{	/* Eval/expdsrfi0.scm 168 */
								BGl_za2srfizd2compilezd2listza2z00zz__expander_srfi0z00 =
									BGl_srfizd2commonzd2listz00zz__expander_srfi0z00();
							}
						BgL_arg1221z00_1800 =
							BGl_za2srfizd2compilezd2listza2z00zz__expander_srfi0z00;
						BgL_tmp2072z00_2426 =
							(BGl_za2srfizd2compilezd2listza2z00zz__expander_srfi0z00 =
							MAKE_YOUNG_PAIR(BgL_srfiz00_5, BgL_arg1221z00_1800), BUNSPEC);
					}
					BGL_EXITD_POP_PROTECT(BgL_top2073z00_2427);
					BUNSPEC;
					BGL_MUTEX_UNLOCK(BGl_za2srfizd2mutexza2zd2zz__expander_srfi0z00);
					return BgL_tmp2072z00_2426;
				}
			}
		}

	}



/* &register-compile-srfi! */
	obj_t BGl_z62registerzd2compilezd2srfiz12z70zz__expander_srfi0z00(obj_t
		BgL_envz00_2259, obj_t BgL_srfiz00_2260)
	{
		{	/* Eval/expdsrfi0.scm 197 */
			{	/* Eval/expdsrfi0.scm 198 */
				obj_t BgL_auxz00_2437;

				if (SYMBOLP(BgL_srfiz00_2260))
					{	/* Eval/expdsrfi0.scm 198 */
						BgL_auxz00_2437 = BgL_srfiz00_2260;
					}
				else
					{
						obj_t BgL_auxz00_2440;

						BgL_auxz00_2440 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1967z00zz__expander_srfi0z00, BINT(((long) 8316)),
							BGl_string1971z00zz__expander_srfi0z00,
							BGl_string1969z00zz__expander_srfi0z00, BgL_srfiz00_2260);
						FAILURE(BgL_auxz00_2440, BFALSE, BFALSE);
					}
				return
					BGl_registerzd2compilezd2srfiz12z12zz__expander_srfi0z00
					(BgL_auxz00_2437);
			}
		}

	}



/* unregister-compile-srfi! */
	BGL_EXPORTED_DEF obj_t
		BGl_unregisterzd2compilezd2srfiz12z12zz__expander_srfi0z00(obj_t
		BgL_srfiz00_6)
	{
		{	/* Eval/expdsrfi0.scm 204 */
			{	/* Eval/expdsrfi0.scm 205 */
				obj_t BgL_top2077z00_2446;

				BgL_top2077z00_2446 = BGL_EXITD_TOP_AS_OBJ();
				BGL_MUTEX_LOCK(BGl_za2srfizd2mutexza2zd2zz__expander_srfi0z00);
				BGL_EXITD_PUSH_PROTECT(BgL_top2077z00_2446,
					BGl_za2srfizd2mutexza2zd2zz__expander_srfi0z00);
				BUNSPEC;
				{	/* Eval/expdsrfi0.scm 205 */
					obj_t BgL_tmp2076z00_2445;

					{	/* Eval/expdsrfi0.scm 206 */
						obj_t BgL_arg1223z00_1801;

						if (CBOOL(BGl_za2srfizd2compilezd2listza2z00zz__expander_srfi0z00))
							{	/* Eval/expdsrfi0.scm 168 */
								BFALSE;
							}
						else
							{	/* Eval/expdsrfi0.scm 168 */
								BGl_za2srfizd2compilezd2listza2z00zz__expander_srfi0z00 =
									BGl_srfizd2commonzd2listz00zz__expander_srfi0z00();
							}
						BgL_arg1223z00_1801 =
							BGl_za2srfizd2compilezd2listza2z00zz__expander_srfi0z00;
						BgL_tmp2076z00_2445 =
							(BGl_za2srfizd2compilezd2listza2z00zz__expander_srfi0z00 =
							bgl_remq_bang(BgL_srfiz00_6, BgL_arg1223z00_1801), BUNSPEC);
					}
					BGL_EXITD_POP_PROTECT(BgL_top2077z00_2446);
					BUNSPEC;
					BGL_MUTEX_UNLOCK(BGl_za2srfizd2mutexza2zd2zz__expander_srfi0z00);
					return BgL_tmp2076z00_2445;
				}
			}
		}

	}



/* &unregister-compile-srfi! */
	obj_t BGl_z62unregisterzd2compilezd2srfiz12z70zz__expander_srfi0z00(obj_t
		BgL_envz00_2261, obj_t BgL_srfiz00_2262)
	{
		{	/* Eval/expdsrfi0.scm 204 */
			{	/* Eval/expdsrfi0.scm 205 */
				obj_t BgL_auxz00_2456;

				if (SYMBOLP(BgL_srfiz00_2262))
					{	/* Eval/expdsrfi0.scm 205 */
						BgL_auxz00_2456 = BgL_srfiz00_2262;
					}
				else
					{
						obj_t BgL_auxz00_2459;

						BgL_auxz00_2459 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1967z00zz__expander_srfi0z00, BINT(((long) 8683)),
							BGl_string1972z00zz__expander_srfi0z00,
							BGl_string1969z00zz__expander_srfi0z00, BgL_srfiz00_2262);
						FAILURE(BgL_auxz00_2459, BFALSE, BFALSE);
					}
				return
					BGl_unregisterzd2compilezd2srfiz12z12zz__expander_srfi0z00
					(BgL_auxz00_2456);
			}
		}

	}



/* register-srfi! */
	BGL_EXPORTED_DEF obj_t BGl_registerzd2srfiz12zc0zz__expander_srfi0z00(obj_t
		BgL_srfiz00_7)
	{
		{	/* Eval/expdsrfi0.scm 211 */
			{	/* Eval/expdsrfi0.scm 184 */
				obj_t BgL_top2081z00_2465;

				BgL_top2081z00_2465 = BGL_EXITD_TOP_AS_OBJ();
				BGL_MUTEX_LOCK(BGl_za2srfizd2mutexza2zd2zz__expander_srfi0z00);
				BGL_EXITD_PUSH_PROTECT(BgL_top2081z00_2465,
					BGl_za2srfizd2mutexza2zd2zz__expander_srfi0z00);
				BUNSPEC;
				{	/* Eval/expdsrfi0.scm 184 */
					obj_t BgL_tmp2080z00_2464;

					BgL_tmp2080z00_2464 =
						(BGl_za2srfizd2evalzd2listza2z00zz__expander_srfi0z00 =
						MAKE_YOUNG_PAIR(BgL_srfiz00_7,
							BGl_srfizd2evalzd2listz00zz__expander_srfi0z00()), BUNSPEC);
					BGL_EXITD_POP_PROTECT(BgL_top2081z00_2465);
					BUNSPEC;
					BGL_MUTEX_UNLOCK(BGl_za2srfizd2mutexza2zd2zz__expander_srfi0z00);
					BgL_tmp2080z00_2464;
				}
			}
			{	/* Eval/expdsrfi0.scm 198 */
				obj_t BgL_top2083z00_2474;

				BgL_top2083z00_2474 = BGL_EXITD_TOP_AS_OBJ();
				BGL_MUTEX_LOCK(BGl_za2srfizd2mutexza2zd2zz__expander_srfi0z00);
				BGL_EXITD_PUSH_PROTECT(BgL_top2083z00_2474,
					BGl_za2srfizd2mutexza2zd2zz__expander_srfi0z00);
				BUNSPEC;
				{	/* Eval/expdsrfi0.scm 198 */
					obj_t BgL_tmp2082z00_2473;

					BgL_tmp2082z00_2473 =
						(BGl_za2srfizd2compilezd2listza2z00zz__expander_srfi0z00 =
						MAKE_YOUNG_PAIR(BgL_srfiz00_7,
							BGl_srfizd2compilezd2listz00zz__expander_srfi0z00()), BUNSPEC);
					BGL_EXITD_POP_PROTECT(BgL_top2083z00_2474);
					BUNSPEC;
					BGL_MUTEX_UNLOCK(BGl_za2srfizd2mutexza2zd2zz__expander_srfi0z00);
					return BgL_tmp2082z00_2473;
				}
			}
		}

	}



/* &register-srfi! */
	obj_t BGl_z62registerzd2srfiz12za2zz__expander_srfi0z00(obj_t BgL_envz00_2263,
		obj_t BgL_srfiz00_2264)
	{
		{	/* Eval/expdsrfi0.scm 211 */
			{	/* Eval/expdsrfi0.scm 212 */
				obj_t BgL_auxz00_2482;

				if (SYMBOLP(BgL_srfiz00_2264))
					{	/* Eval/expdsrfi0.scm 212 */
						BgL_auxz00_2482 = BgL_srfiz00_2264;
					}
				else
					{
						obj_t BgL_auxz00_2485;

						BgL_auxz00_2485 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1967z00zz__expander_srfi0z00, BINT(((long) 9066)),
							BGl_string1973z00zz__expander_srfi0z00,
							BGl_string1969z00zz__expander_srfi0z00, BgL_srfiz00_2264);
						FAILURE(BgL_auxz00_2485, BFALSE, BFALSE);
					}
				return BGl_registerzd2srfiz12zc0zz__expander_srfi0z00(BgL_auxz00_2482);
			}
		}

	}



/* unregister-srfi! */
	BGL_EXPORTED_DEF obj_t BGl_unregisterzd2srfiz12zc0zz__expander_srfi0z00(obj_t
		BgL_srfiz00_8)
	{
		{	/* Eval/expdsrfi0.scm 218 */
			{	/* Eval/expdsrfi0.scm 191 */
				obj_t BgL_top2086z00_2491;

				BgL_top2086z00_2491 = BGL_EXITD_TOP_AS_OBJ();
				BGL_MUTEX_LOCK(BGl_za2srfizd2mutexza2zd2zz__expander_srfi0z00);
				BGL_EXITD_PUSH_PROTECT(BgL_top2086z00_2491,
					BGl_za2srfizd2mutexza2zd2zz__expander_srfi0z00);
				BUNSPEC;
				{	/* Eval/expdsrfi0.scm 191 */
					obj_t BgL_tmp2085z00_2490;

					BgL_tmp2085z00_2490 =
						(BGl_za2srfizd2evalzd2listza2z00zz__expander_srfi0z00 =
						bgl_remq_bang(BgL_srfiz00_8,
							BGl_srfizd2evalzd2listz00zz__expander_srfi0z00()), BUNSPEC);
					BGL_EXITD_POP_PROTECT(BgL_top2086z00_2491);
					BUNSPEC;
					BGL_MUTEX_UNLOCK(BGl_za2srfizd2mutexza2zd2zz__expander_srfi0z00);
					BgL_tmp2085z00_2490;
				}
			}
			{	/* Eval/expdsrfi0.scm 205 */
				obj_t BgL_top2088z00_2500;

				BgL_top2088z00_2500 = BGL_EXITD_TOP_AS_OBJ();
				BGL_MUTEX_LOCK(BGl_za2srfizd2mutexza2zd2zz__expander_srfi0z00);
				BGL_EXITD_PUSH_PROTECT(BgL_top2088z00_2500,
					BGl_za2srfizd2mutexza2zd2zz__expander_srfi0z00);
				BUNSPEC;
				{	/* Eval/expdsrfi0.scm 205 */
					obj_t BgL_tmp2087z00_2499;

					BgL_tmp2087z00_2499 =
						(BGl_za2srfizd2compilezd2listza2z00zz__expander_srfi0z00 =
						bgl_remq_bang(BgL_srfiz00_8,
							BGl_srfizd2compilezd2listz00zz__expander_srfi0z00()), BUNSPEC);
					BGL_EXITD_POP_PROTECT(BgL_top2088z00_2500);
					BUNSPEC;
					BGL_MUTEX_UNLOCK(BGl_za2srfizd2mutexza2zd2zz__expander_srfi0z00);
					return BgL_tmp2087z00_2499;
				}
			}
		}

	}



/* &unregister-srfi! */
	obj_t BGl_z62unregisterzd2srfiz12za2zz__expander_srfi0z00(obj_t
		BgL_envz00_2265, obj_t BgL_srfiz00_2266)
	{
		{	/* Eval/expdsrfi0.scm 218 */
			{	/* Eval/expdsrfi0.scm 219 */
				obj_t BgL_auxz00_2508;

				if (SYMBOLP(BgL_srfiz00_2266))
					{	/* Eval/expdsrfi0.scm 219 */
						BgL_auxz00_2508 = BgL_srfiz00_2266;
					}
				else
					{
						obj_t BgL_auxz00_2511;

						BgL_auxz00_2511 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1967z00zz__expander_srfi0z00, BINT(((long) 9395)),
							BGl_string1974z00zz__expander_srfi0z00,
							BGl_string1969z00zz__expander_srfi0z00, BgL_srfiz00_2266);
						FAILURE(BgL_auxz00_2511, BFALSE, BFALSE);
					}
				return
					BGl_unregisterzd2srfiz12zc0zz__expander_srfi0z00(BgL_auxz00_2508);
			}
		}

	}



/* expand-eval-cond-expand */
	BGL_EXPORTED_DEF obj_t
		BGl_expandzd2evalzd2condzd2expandzd2zz__expander_srfi0z00(obj_t BgL_xz00_9,
		obj_t BgL_ez00_10)
	{
		{	/* Eval/expdsrfi0.scm 225 */
			return
				BGl_expandzd2condzd2expandz00zz__expander_srfi0z00(BgL_xz00_9,
				BgL_ez00_10, BGl_srfizd2evalzd2listz00zz__expander_srfi0z00());
		}

	}



/* &expand-eval-cond-expand */
	obj_t BGl_z62expandzd2evalzd2condzd2expandzb0zz__expander_srfi0z00(obj_t
		BgL_envz00_2267, obj_t BgL_xz00_2268, obj_t BgL_ez00_2269)
	{
		{	/* Eval/expdsrfi0.scm 225 */
			{	/* Eval/expdsrfi0.scm 226 */
				obj_t BgL_auxz00_2525;
				obj_t BgL_auxz00_2518;

				if (PROCEDUREP(BgL_ez00_2269))
					{	/* Eval/expdsrfi0.scm 226 */
						BgL_auxz00_2525 = BgL_ez00_2269;
					}
				else
					{
						obj_t BgL_auxz00_2528;

						BgL_auxz00_2528 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1967z00zz__expander_srfi0z00, BINT(((long) 9721)),
							BGl_string1975z00zz__expander_srfi0z00,
							BGl_string1977z00zz__expander_srfi0z00, BgL_ez00_2269);
						FAILURE(BgL_auxz00_2528, BFALSE, BFALSE);
					}
				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_xz00_2268))
					{	/* Eval/expdsrfi0.scm 226 */
						BgL_auxz00_2518 = BgL_xz00_2268;
					}
				else
					{
						obj_t BgL_auxz00_2521;

						BgL_auxz00_2521 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1967z00zz__expander_srfi0z00, BINT(((long) 9721)),
							BGl_string1975z00zz__expander_srfi0z00,
							BGl_string1976z00zz__expander_srfi0z00, BgL_xz00_2268);
						FAILURE(BgL_auxz00_2521, BFALSE, BFALSE);
					}
				return
					BGl_expandzd2evalzd2condzd2expandzd2zz__expander_srfi0z00
					(BgL_auxz00_2518, BgL_auxz00_2525);
			}
		}

	}



/* expand-compile-cond-expand */
	BGL_EXPORTED_DEF obj_t
		BGl_expandzd2compilezd2condzd2expandzd2zz__expander_srfi0z00(obj_t
		BgL_xz00_11, obj_t BgL_ez00_12)
	{
		{	/* Eval/expdsrfi0.scm 231 */
			{	/* Eval/expdsrfi0.scm 232 */
				obj_t BgL_arg1227z00_1811;

				if (CBOOL(BGl_za2srfizd2compilezd2listza2z00zz__expander_srfi0z00))
					{	/* Eval/expdsrfi0.scm 168 */
						BFALSE;
					}
				else
					{	/* Eval/expdsrfi0.scm 168 */
						BGl_za2srfizd2compilezd2listza2z00zz__expander_srfi0z00 =
							BGl_srfizd2commonzd2listz00zz__expander_srfi0z00();
					}
				BgL_arg1227z00_1811 =
					BGl_za2srfizd2compilezd2listza2z00zz__expander_srfi0z00;
				return BGl_expandzd2condzd2expandz00zz__expander_srfi0z00(BgL_xz00_11,
					BgL_ez00_12, BgL_arg1227z00_1811);
			}
		}

	}



/* &expand-compile-cond-expand */
	obj_t BGl_z62expandzd2compilezd2condzd2expandzb0zz__expander_srfi0z00(obj_t
		BgL_envz00_2270, obj_t BgL_xz00_2271, obj_t BgL_ez00_2272)
	{
		{	/* Eval/expdsrfi0.scm 231 */
			{	/* Eval/expdsrfi0.scm 232 */
				obj_t BgL_auxz00_2544;
				obj_t BgL_auxz00_2537;

				if (PROCEDUREP(BgL_ez00_2272))
					{	/* Eval/expdsrfi0.scm 232 */
						BgL_auxz00_2544 = BgL_ez00_2272;
					}
				else
					{
						obj_t BgL_auxz00_2547;

						BgL_auxz00_2547 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1967z00zz__expander_srfi0z00, BINT(((long) 10031)),
							BGl_string1978z00zz__expander_srfi0z00,
							BGl_string1977z00zz__expander_srfi0z00, BgL_ez00_2272);
						FAILURE(BgL_auxz00_2547, BFALSE, BFALSE);
					}
				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_xz00_2271))
					{	/* Eval/expdsrfi0.scm 232 */
						BgL_auxz00_2537 = BgL_xz00_2271;
					}
				else
					{
						obj_t BgL_auxz00_2540;

						BgL_auxz00_2540 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1967z00zz__expander_srfi0z00, BINT(((long) 10031)),
							BGl_string1978z00zz__expander_srfi0z00,
							BGl_string1976z00zz__expander_srfi0z00, BgL_xz00_2271);
						FAILURE(BgL_auxz00_2540, BFALSE, BFALSE);
					}
				return
					BGl_expandzd2compilezd2condzd2expandzd2zz__expander_srfi0z00
					(BgL_auxz00_2537, BgL_auxz00_2544);
			}
		}

	}



/* compile-srfi? */
	BGL_EXPORTED_DEF bool_t BGl_compilezd2srfizf3z21zz__expander_srfi0z00(obj_t
		BgL_srfiz00_13)
	{
		{	/* Eval/expdsrfi0.scm 237 */
			{	/* Eval/expdsrfi0.scm 238 */
				obj_t BgL_top2096z00_2553;

				BgL_top2096z00_2553 = BGL_EXITD_TOP_AS_OBJ();
				BGL_MUTEX_LOCK(BGl_za2srfizd2mutexza2zd2zz__expander_srfi0z00);
				BGL_EXITD_PUSH_PROTECT(BgL_top2096z00_2553,
					BGl_za2srfizd2mutexza2zd2zz__expander_srfi0z00);
				BUNSPEC;
				{	/* Eval/expdsrfi0.scm 238 */
					bool_t BgL_tmp2095z00_2552;

					{	/* Eval/expdsrfi0.scm 239 */
						obj_t BgL_arg1229z00_1812;

						if (CBOOL(BGl_za2srfizd2compilezd2listza2z00zz__expander_srfi0z00))
							{	/* Eval/expdsrfi0.scm 168 */
								BFALSE;
							}
						else
							{	/* Eval/expdsrfi0.scm 168 */
								BGl_za2srfizd2compilezd2listza2z00zz__expander_srfi0z00 =
									BGl_srfizd2commonzd2listz00zz__expander_srfi0z00();
							}
						BgL_arg1229z00_1812 =
							BGl_za2srfizd2compilezd2listza2z00zz__expander_srfi0z00;
						BgL_tmp2095z00_2552 =
							CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_srfiz00_13,
								BgL_arg1229z00_1812));
					}
					BGL_EXITD_POP_PROTECT(BgL_top2096z00_2553);
					BUNSPEC;
					BGL_MUTEX_UNLOCK(BGl_za2srfizd2mutexza2zd2zz__expander_srfi0z00);
					return BgL_tmp2095z00_2552;
				}
			}
		}

	}



/* &compile-srfi? */
	obj_t BGl_z62compilezd2srfizf3z43zz__expander_srfi0z00(obj_t BgL_envz00_2273,
		obj_t BgL_srfiz00_2274)
	{
		{	/* Eval/expdsrfi0.scm 237 */
			{	/* Eval/expdsrfi0.scm 238 */
				bool_t BgL_tmpz00_2564;

				{	/* Eval/expdsrfi0.scm 238 */
					obj_t BgL_auxz00_2565;

					if (SYMBOLP(BgL_srfiz00_2274))
						{	/* Eval/expdsrfi0.scm 238 */
							BgL_auxz00_2565 = BgL_srfiz00_2274;
						}
					else
						{
							obj_t BgL_auxz00_2568;

							BgL_auxz00_2568 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string1967z00zz__expander_srfi0z00, BINT(((long) 10308)),
								BGl_string1979z00zz__expander_srfi0z00,
								BGl_string1969z00zz__expander_srfi0z00, BgL_srfiz00_2274);
							FAILURE(BgL_auxz00_2568, BFALSE, BFALSE);
						}
					BgL_tmpz00_2564 =
						BGl_compilezd2srfizf3z21zz__expander_srfi0z00(BgL_auxz00_2565);
				}
				return BBOOL(BgL_tmpz00_2564);
			}
		}

	}



/* eval-srfi? */
	BGL_EXPORTED_DEF bool_t BGl_evalzd2srfizf3z21zz__expander_srfi0z00(obj_t
		BgL_srfiz00_14)
	{
		{	/* Eval/expdsrfi0.scm 244 */
			{	/* Eval/expdsrfi0.scm 245 */
				obj_t BgL_top2100z00_2575;

				BgL_top2100z00_2575 = BGL_EXITD_TOP_AS_OBJ();
				BGL_MUTEX_LOCK(BGl_za2srfizd2mutexza2zd2zz__expander_srfi0z00);
				BGL_EXITD_PUSH_PROTECT(BgL_top2100z00_2575,
					BGl_za2srfizd2mutexza2zd2zz__expander_srfi0z00);
				BUNSPEC;
				{	/* Eval/expdsrfi0.scm 245 */
					bool_t BgL_tmp2099z00_2574;

					{	/* Eval/expdsrfi0.scm 246 */
						obj_t BgL_arg1232z00_1813;

						BgL_arg1232z00_1813 =
							BGl_srfizd2evalzd2listz00zz__expander_srfi0z00();
						BgL_tmp2099z00_2574 =
							CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_srfiz00_14,
								BgL_arg1232z00_1813));
					}
					BGL_EXITD_POP_PROTECT(BgL_top2100z00_2575);
					BUNSPEC;
					BGL_MUTEX_UNLOCK(BGl_za2srfizd2mutexza2zd2zz__expander_srfi0z00);
					return BgL_tmp2099z00_2574;
				}
			}
		}

	}



/* &eval-srfi? */
	obj_t BGl_z62evalzd2srfizf3z43zz__expander_srfi0z00(obj_t BgL_envz00_2275,
		obj_t BgL_srfiz00_2276)
	{
		{	/* Eval/expdsrfi0.scm 244 */
			{	/* Eval/expdsrfi0.scm 245 */
				bool_t BgL_tmpz00_2584;

				{	/* Eval/expdsrfi0.scm 245 */
					obj_t BgL_auxz00_2585;

					if (SYMBOLP(BgL_srfiz00_2276))
						{	/* Eval/expdsrfi0.scm 245 */
							BgL_auxz00_2585 = BgL_srfiz00_2276;
						}
					else
						{
							obj_t BgL_auxz00_2588;

							BgL_auxz00_2588 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string1967z00zz__expander_srfi0z00, BINT(((long) 10629)),
								BGl_string1980z00zz__expander_srfi0z00,
								BGl_string1969z00zz__expander_srfi0z00, BgL_srfiz00_2276);
							FAILURE(BgL_auxz00_2588, BFALSE, BFALSE);
						}
					BgL_tmpz00_2584 =
						BGl_evalzd2srfizf3z21zz__expander_srfi0z00(BgL_auxz00_2585);
				}
				return BBOOL(BgL_tmpz00_2584);
			}
		}

	}



/* expand-cond-expand */
	BGL_EXPORTED_DEF obj_t
		BGl_expandzd2condzd2expandz00zz__expander_srfi0z00(obj_t BgL_xz00_15,
		obj_t BgL_ez00_16, obj_t BgL_featuresz00_17)
	{
		{	/* Eval/expdsrfi0.scm 251 */
			{
				obj_t BgL_clausez00_1120;
				obj_t BgL_elsez00_1121;

				if (NULLP(BgL_xz00_15))
					{	/* Eval/expdsrfi0.scm 252 */
						return
							BGl_expandzd2errorzd2zz__expandz00
							(BGl_string1983z00zz__expander_srfi0z00,
							BGl_string1984z00zz__expander_srfi0z00, BgL_xz00_15);
					}
				else
					{	/* Eval/expdsrfi0.scm 252 */
						if ((CAR(BgL_xz00_15) == BGl_symbol1985z00zz__expander_srfi0z00))
							{	/* Eval/expdsrfi0.scm 252 */
								if (NULLP(CDR(BgL_xz00_15)))
									{	/* Eval/expdsrfi0.scm 252 */
										return BUNSPEC;
									}
								else
									{	/* Eval/expdsrfi0.scm 252 */
										obj_t BgL_cdrzd2165zd2_1130;

										BgL_cdrzd2165zd2_1130 = CDR(BgL_xz00_15);
										if (PAIRP(BgL_cdrzd2165zd2_1130))
											{	/* Eval/expdsrfi0.scm 252 */
												BgL_clausez00_1120 = CAR(BgL_cdrzd2165zd2_1130);
												BgL_elsez00_1121 = CDR(BgL_cdrzd2165zd2_1130);
											BgL_tagzd2153zd2_1122:
												{
													obj_t BgL_featurez00_1172;
													obj_t BgL_bodyz00_1173;
													obj_t BgL_libz00_1165;
													obj_t BgL_bodyz00_1166;
													obj_t BgL_reqz00_1162;
													obj_t BgL_bodyz00_1163;
													obj_t BgL_bodyz00_1140;

													if (PAIRP(BgL_clausez00_1120))
														{	/* Eval/expdsrfi0.scm 252 */
															if (
																(CAR(BgL_clausez00_1120) ==
																	BGl_symbol1986z00zz__expander_srfi0z00))
																{	/* Eval/expdsrfi0.scm 252 */
																	BgL_bodyz00_1140 = CDR(BgL_clausez00_1120);
																	if (NULLP(BgL_elsez00_1121))
																		{	/* Eval/expdsrfi0.scm 259 */
																			obj_t BgL_arg1375z00_1311;

																			{	/* Eval/expdsrfi0.scm 259 */
																				obj_t BgL_arg1376z00_1312;

																				{	/* Eval/expdsrfi0.scm 259 */
																					obj_t BgL_arg1377z00_1313;

																					BgL_arg1377z00_1313 =
																						BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																						(BgL_bodyz00_1140, BNIL);
																					BgL_arg1376z00_1312 =
																						MAKE_YOUNG_PAIR
																						(BGl_symbol1981z00zz__expander_srfi0z00,
																						BgL_arg1377z00_1313);
																				}
																				BgL_arg1375z00_1311 =
																					BGl_evepairifyz00zz__prognz00
																					(BgL_arg1376z00_1312, BgL_xz00_15);
																			}
																			return
																				PROCEDURE_ENTRY(BgL_ez00_16)
																				(BgL_ez00_16, BgL_arg1375z00_1311,
																				BgL_ez00_16, BEOA);
																		}
																	else
																		{	/* Eval/expdsrfi0.scm 258 */
																			return
																				BGl_expandzd2errorzd2zz__expandz00
																				(BGl_string1983z00zz__expander_srfi0z00,
																				BGl_string1984z00zz__expander_srfi0z00,
																				BgL_xz00_15);
																		}
																}
															else
																{	/* Eval/expdsrfi0.scm 252 */
																	obj_t BgL_carzd2224zd2_1181;

																	BgL_carzd2224zd2_1181 =
																		CAR(BgL_clausez00_1120);
																	if (PAIRP(BgL_carzd2224zd2_1181))
																		{	/* Eval/expdsrfi0.scm 252 */
																			if (
																				(CAR(BgL_carzd2224zd2_1181) ==
																					BGl_symbol1988z00zz__expander_srfi0z00))
																				{	/* Eval/expdsrfi0.scm 252 */
																					if (NULLP(CDR(BgL_carzd2224zd2_1181)))
																						{	/* Eval/expdsrfi0.scm 252 */
																							obj_t BgL_arg1270z00_1187;

																							BgL_arg1270z00_1187 =
																								CDR(BgL_clausez00_1120);
																							{	/* Eval/expdsrfi0.scm 262 */
																								obj_t BgL_arg1378z00_1862;

																								{	/* Eval/expdsrfi0.scm 262 */
																									obj_t BgL_arg1379z00_1863;

																									{	/* Eval/expdsrfi0.scm 262 */
																										obj_t BgL_arg1380z00_1864;

																										BgL_arg1380z00_1864 =
																											BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																											(BgL_arg1270z00_1187,
																											BNIL);
																										BgL_arg1379z00_1863 =
																											MAKE_YOUNG_PAIR
																											(BGl_symbol1981z00zz__expander_srfi0z00,
																											BgL_arg1380z00_1864);
																									}
																									BgL_arg1378z00_1862 =
																										BGl_evepairifyz00zz__prognz00
																										(BgL_arg1379z00_1863,
																										BgL_xz00_15);
																								}
																								return
																									PROCEDURE_ENTRY(BgL_ez00_16)
																									(BgL_ez00_16,
																									BgL_arg1378z00_1862,
																									BgL_ez00_16, BEOA);
																							}
																						}
																					else
																						{	/* Eval/expdsrfi0.scm 252 */
																							obj_t BgL_cdrzd2244zd2_1188;

																							BgL_cdrzd2244zd2_1188 =
																								CDR(
																								((obj_t)
																									BgL_carzd2224zd2_1181));
																							if (PAIRP(BgL_cdrzd2244zd2_1188))
																								{	/* Eval/expdsrfi0.scm 252 */
																									if (NULLP(CDR
																											(BgL_cdrzd2244zd2_1188)))
																										{	/* Eval/expdsrfi0.scm 252 */
																											obj_t BgL_arg1275z00_1192;
																											obj_t BgL_arg1276z00_1193;

																											BgL_arg1275z00_1192 =
																												CAR
																												(BgL_cdrzd2244zd2_1188);
																											BgL_arg1276z00_1193 =
																												CDR(BgL_clausez00_1120);
																											{	/* Eval/expdsrfi0.scm 265 */
																												obj_t
																													BgL_arg1381z00_1872;
																												{	/* Eval/expdsrfi0.scm 265 */
																													obj_t
																														BgL_arg1382z00_1873;
																													{	/* Eval/expdsrfi0.scm 265 */
																														obj_t
																															BgL_arg1383z00_1874;
																														{	/* Eval/expdsrfi0.scm 265 */
																															obj_t
																																BgL_arg1384z00_1875;
																															obj_t
																																BgL_arg1385z00_1876;
																															BgL_arg1384z00_1875
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_arg1275z00_1192,
																																BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																(BgL_arg1276z00_1193,
																																	BNIL));
																															BgL_arg1385z00_1876
																																=
																																BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																(BgL_elsez00_1121,
																																BNIL);
																															BgL_arg1383z00_1874
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_arg1384z00_1875,
																																BgL_arg1385z00_1876);
																														}
																														BgL_arg1382z00_1873
																															=
																															MAKE_YOUNG_PAIR
																															(BGl_symbol1985z00zz__expander_srfi0z00,
																															BgL_arg1383z00_1874);
																													}
																													BgL_arg1381z00_1872 =
																														BGl_evepairifyz00zz__prognz00
																														(BgL_arg1382z00_1873,
																														BgL_xz00_15);
																												}
																												return
																													PROCEDURE_ENTRY
																													(BgL_ez00_16)
																													(BgL_ez00_16,
																													BgL_arg1381z00_1872,
																													BgL_ez00_16, BEOA);
																											}
																										}
																									else
																										{	/* Eval/expdsrfi0.scm 252 */
																											obj_t
																												BgL_cdrzd2271zd2_1194;
																											BgL_cdrzd2271zd2_1194 =
																												CDR(CAR
																												(BgL_clausez00_1120));
																											{	/* Eval/expdsrfi0.scm 252 */
																												obj_t
																													BgL_cdrzd2277zd2_1195;
																												BgL_cdrzd2277zd2_1195 =
																													CDR(((obj_t)
																														BgL_cdrzd2271zd2_1194));
																												if (PAIRP
																													(BgL_cdrzd2277zd2_1195))
																													{	/* Eval/expdsrfi0.scm 252 */
																														obj_t
																															BgL_arg1280z00_1197;
																														obj_t
																															BgL_arg1281z00_1198;
																														obj_t
																															BgL_arg1282z00_1199;
																														obj_t
																															BgL_arg1284z00_1200;
																														BgL_arg1280z00_1197
																															=
																															CAR(((obj_t)
																																BgL_cdrzd2271zd2_1194));
																														BgL_arg1281z00_1198
																															=
																															CAR
																															(BgL_cdrzd2277zd2_1195);
																														BgL_arg1282z00_1199
																															=
																															CDR
																															(BgL_cdrzd2277zd2_1195);
																														BgL_arg1284z00_1200
																															=
																															CDR
																															(BgL_clausez00_1120);
																														return
																															BGl_expandzd2condzd2expandzd2andzd2zz__expander_srfi0z00
																															(BgL_xz00_15,
																															BgL_ez00_16,
																															BgL_arg1280z00_1197,
																															BgL_arg1281z00_1198,
																															BgL_arg1282z00_1199,
																															BgL_arg1284z00_1200,
																															BgL_elsez00_1121);
																													}
																												else
																													{	/* Eval/expdsrfi0.scm 252 */
																														obj_t
																															BgL_carzd2347zd2_1201;
																														BgL_carzd2347zd2_1201
																															=
																															CAR
																															(BgL_clausez00_1120);
																														if (SYMBOLP
																															(BgL_carzd2347zd2_1201))
																															{	/* Eval/expdsrfi0.scm 252 */
																																BgL_featurez00_1172
																																	=
																																	BgL_carzd2347zd2_1201;
																																BgL_bodyz00_1173
																																	=
																																	CDR
																																	(BgL_clausez00_1120);
																															BgL_tagzd2198zd2_1174:
																																{	/* Eval/expdsrfi0.scm 300 */
																																	obj_t
																																		BgL_arg1422z00_1356;
																																	{	/* Eval/expdsrfi0.scm 300 */
																																		obj_t
																																			BgL_arg1424z00_1357;
																																		if (CBOOL
																																			(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																																				(BgL_featurez00_1172,
																																					BgL_featuresz00_17)))
																																			{	/* Eval/expdsrfi0.scm 301 */
																																				obj_t
																																					BgL_arg1426z00_1359;
																																				BgL_arg1426z00_1359
																																					=
																																					BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																					(BgL_bodyz00_1173,
																																					BNIL);
																																				BgL_arg1424z00_1357
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BGl_symbol1981z00zz__expander_srfi0z00,
																																					BgL_arg1426z00_1359);
																																			}
																																		else
																																			{	/* Eval/expdsrfi0.scm 302 */
																																				obj_t
																																					BgL_arg1427z00_1360;
																																				BgL_arg1427z00_1360
																																					=
																																					BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																					(BgL_elsez00_1121,
																																					BNIL);
																																				BgL_arg1424z00_1357
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BGl_symbol1985z00zz__expander_srfi0z00,
																																					BgL_arg1427z00_1360);
																																			}
																																		BgL_arg1422z00_1356
																																			=
																																			BGl_evepairifyz00zz__prognz00
																																			(BgL_arg1424z00_1357,
																																			BgL_xz00_15);
																																	}
																																	return
																																		PROCEDURE_ENTRY
																																		(BgL_ez00_16)
																																		(BgL_ez00_16,
																																		BgL_arg1422z00_1356,
																																		BgL_ez00_16,
																																		BEOA);
																																}
																															}
																														else
																															{	/* Eval/expdsrfi0.scm 252 */
																																return
																																	BGl_expandzd2errorzd2zz__expandz00
																																	(BGl_string1983z00zz__expander_srfi0z00,
																																	BGl_string1984z00zz__expander_srfi0z00,
																																	BgL_xz00_15);
																															}
																													}
																											}
																										}
																								}
																							else
																								{	/* Eval/expdsrfi0.scm 252 */
																									obj_t BgL_carzd2426zd2_1206;

																									BgL_carzd2426zd2_1206 =
																										CAR(BgL_clausez00_1120);
																									if (SYMBOLP
																										(BgL_carzd2426zd2_1206))
																										{
																											obj_t BgL_bodyz00_2695;
																											obj_t BgL_featurez00_2694;

																											BgL_featurez00_2694 =
																												BgL_carzd2426zd2_1206;
																											BgL_bodyz00_2695 =
																												CDR(BgL_clausez00_1120);
																											BgL_bodyz00_1173 =
																												BgL_bodyz00_2695;
																											BgL_featurez00_1172 =
																												BgL_featurez00_2694;
																											goto
																												BgL_tagzd2198zd2_1174;
																										}
																									else
																										{	/* Eval/expdsrfi0.scm 252 */
																											return
																												BGl_expandzd2errorzd2zz__expandz00
																												(BGl_string1983z00zz__expander_srfi0z00,
																												BGl_string1984z00zz__expander_srfi0z00,
																												BgL_xz00_15);
																										}
																								}
																						}
																				}
																			else
																				{	/* Eval/expdsrfi0.scm 252 */
																					if (
																						(CAR(
																								((obj_t) BgL_carzd2224zd2_1181))
																							==
																							BGl_symbol1990z00zz__expander_srfi0z00))
																						{	/* Eval/expdsrfi0.scm 252 */
																							if (NULLP(CDR(
																										((obj_t)
																											BgL_carzd2224zd2_1181))))
																								{	/* Eval/expdsrfi0.scm 272 */
																									obj_t BgL_arg1387z00_1897;

																									{	/* Eval/expdsrfi0.scm 272 */
																										obj_t BgL_arg1388z00_1898;

																										{	/* Eval/expdsrfi0.scm 272 */
																											obj_t BgL_arg1389z00_1899;

																											BgL_arg1389z00_1899 =
																												BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																												(BgL_elsez00_1121,
																												BNIL);
																											BgL_arg1388z00_1898 =
																												MAKE_YOUNG_PAIR
																												(BGl_symbol1985z00zz__expander_srfi0z00,
																												BgL_arg1389z00_1899);
																										}
																										BgL_arg1387z00_1897 =
																											BGl_evepairifyz00zz__prognz00
																											(BgL_arg1388z00_1898,
																											BgL_xz00_15);
																									}
																									return
																										PROCEDURE_ENTRY(BgL_ez00_16)
																										(BgL_ez00_16,
																										BgL_arg1387z00_1897,
																										BgL_ez00_16, BEOA);
																								}
																							else
																								{	/* Eval/expdsrfi0.scm 252 */
																									obj_t BgL_cdrzd2486zd2_1217;

																									BgL_cdrzd2486zd2_1217 =
																										CDR(CAR
																										(BgL_clausez00_1120));
																									if (PAIRP
																										(BgL_cdrzd2486zd2_1217))
																										{	/* Eval/expdsrfi0.scm 252 */
																											if (NULLP(CDR
																													(BgL_cdrzd2486zd2_1217)))
																												{	/* Eval/expdsrfi0.scm 252 */
																													obj_t
																														BgL_arg1303z00_1221;
																													obj_t
																														BgL_arg1304z00_1222;
																													BgL_arg1303z00_1221 =
																														CAR
																														(BgL_cdrzd2486zd2_1217);
																													BgL_arg1304z00_1222 =
																														CDR
																														(BgL_clausez00_1120);
																													{	/* Eval/expdsrfi0.scm 275 */
																														obj_t
																															BgL_arg1390z00_1907;
																														{	/* Eval/expdsrfi0.scm 275 */
																															obj_t
																																BgL_arg1391z00_1908;
																															{	/* Eval/expdsrfi0.scm 275 */
																																obj_t
																																	BgL_arg1392z00_1909;
																																{	/* Eval/expdsrfi0.scm 275 */
																																	obj_t
																																		BgL_arg1393z00_1910;
																																	obj_t
																																		BgL_arg1394z00_1911;
																																	BgL_arg1393z00_1910
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg1303z00_1221,
																																		BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																		(BgL_arg1304z00_1222,
																																			BNIL));
																																	BgL_arg1394z00_1911
																																		=
																																		BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																		(BgL_elsez00_1121,
																																		BNIL);
																																	BgL_arg1392z00_1909
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg1393z00_1910,
																																		BgL_arg1394z00_1911);
																																}
																																BgL_arg1391z00_1908
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BGl_symbol1985z00zz__expander_srfi0z00,
																																	BgL_arg1392z00_1909);
																															}
																															BgL_arg1390z00_1907
																																=
																																BGl_evepairifyz00zz__prognz00
																																(BgL_arg1391z00_1908,
																																BgL_xz00_15);
																														}
																														return
																															PROCEDURE_ENTRY
																															(BgL_ez00_16)
																															(BgL_ez00_16,
																															BgL_arg1390z00_1907,
																															BgL_ez00_16,
																															BEOA);
																													}
																												}
																											else
																												{	/* Eval/expdsrfi0.scm 252 */
																													obj_t
																														BgL_cdrzd2519zd2_1224;
																													BgL_cdrzd2519zd2_1224
																														=
																														CDR(((obj_t)
																															BgL_cdrzd2486zd2_1217));
																													if (PAIRP
																														(BgL_cdrzd2519zd2_1224))
																														{	/* Eval/expdsrfi0.scm 252 */
																															obj_t
																																BgL_arg1306z00_1226;
																															obj_t
																																BgL_arg1307z00_1227;
																															obj_t
																																BgL_arg1308z00_1228;
																															obj_t
																																BgL_arg1309z00_1229;
																															BgL_arg1306z00_1226
																																=
																																CAR(((obj_t)
																																	BgL_cdrzd2486zd2_1217));
																															BgL_arg1307z00_1227
																																=
																																CAR
																																(BgL_cdrzd2519zd2_1224);
																															BgL_arg1308z00_1228
																																=
																																CDR
																																(BgL_cdrzd2519zd2_1224);
																															BgL_arg1309z00_1229
																																=
																																CDR
																																(BgL_clausez00_1120);
																															return
																																BGl_expandzd2condzd2expandzd2orzd2zz__expander_srfi0z00
																																(BgL_xz00_15,
																																BgL_ez00_16,
																																BgL_arg1306z00_1226,
																																BgL_arg1307z00_1227,
																																BgL_arg1308z00_1228,
																																BgL_arg1309z00_1229,
																																BgL_elsez00_1121);
																														}
																													else
																														{	/* Eval/expdsrfi0.scm 252 */
																															obj_t
																																BgL_carzd2555zd2_1230;
																															BgL_carzd2555zd2_1230
																																=
																																CAR
																																(BgL_clausez00_1120);
																															if (SYMBOLP
																																(BgL_carzd2555zd2_1230))
																																{
																																	obj_t
																																		BgL_bodyz00_2748;
																																	obj_t
																																		BgL_featurez00_2747;
																																	BgL_featurez00_2747
																																		=
																																		BgL_carzd2555zd2_1230;
																																	BgL_bodyz00_2748
																																		=
																																		CDR
																																		(BgL_clausez00_1120);
																																	BgL_bodyz00_1173
																																		=
																																		BgL_bodyz00_2748;
																																	BgL_featurez00_1172
																																		=
																																		BgL_featurez00_2747;
																																	goto
																																		BgL_tagzd2198zd2_1174;
																																}
																															else
																																{	/* Eval/expdsrfi0.scm 252 */
																																	return
																																		BGl_expandzd2errorzd2zz__expandz00
																																		(BGl_string1983z00zz__expander_srfi0z00,
																																		BGl_string1984z00zz__expander_srfi0z00,
																																		BgL_xz00_15);
																																}
																														}
																												}
																										}
																									else
																										{	/* Eval/expdsrfi0.scm 252 */
																											obj_t
																												BgL_carzd2600zd2_1235;
																											BgL_carzd2600zd2_1235 =
																												CAR(BgL_clausez00_1120);
																											if (SYMBOLP
																												(BgL_carzd2600zd2_1235))
																												{
																													obj_t
																														BgL_bodyz00_2755;
																													obj_t
																														BgL_featurez00_2754;
																													BgL_featurez00_2754 =
																														BgL_carzd2600zd2_1235;
																													BgL_bodyz00_2755 =
																														CDR
																														(BgL_clausez00_1120);
																													BgL_bodyz00_1173 =
																														BgL_bodyz00_2755;
																													BgL_featurez00_1172 =
																														BgL_featurez00_2754;
																													goto
																														BgL_tagzd2198zd2_1174;
																												}
																											else
																												{	/* Eval/expdsrfi0.scm 252 */
																													return
																														BGl_expandzd2errorzd2zz__expandz00
																														(BGl_string1983z00zz__expander_srfi0z00,
																														BGl_string1984z00zz__expander_srfi0z00,
																														BgL_xz00_15);
																												}
																										}
																								}
																						}
																					else
																						{	/* Eval/expdsrfi0.scm 252 */
																							obj_t BgL_carzd2638zd2_1240;

																							BgL_carzd2638zd2_1240 =
																								CAR(BgL_clausez00_1120);
																							{	/* Eval/expdsrfi0.scm 252 */
																								obj_t BgL_cdrzd2642zd2_1241;

																								BgL_cdrzd2642zd2_1241 =
																									CDR(
																									((obj_t)
																										BgL_carzd2638zd2_1240));
																								if ((CAR(((obj_t)
																												BgL_carzd2638zd2_1240))
																										==
																										BGl_symbol1992z00zz__expander_srfi0z00))
																									{	/* Eval/expdsrfi0.scm 252 */
																										if (PAIRP
																											(BgL_cdrzd2642zd2_1241))
																											{	/* Eval/expdsrfi0.scm 252 */
																												if (NULLP(CDR
																														(BgL_cdrzd2642zd2_1241)))
																													{	/* Eval/expdsrfi0.scm 252 */
																														BgL_reqz00_1162 =
																															CAR
																															(BgL_cdrzd2642zd2_1241);
																														BgL_bodyz00_1163 =
																															CDR
																															(BgL_clausez00_1120);
																														{	/* Eval/expdsrfi0.scm 283 */
																															obj_t
																																BgL_arg1396z00_1332;
																															{	/* Eval/expdsrfi0.scm 283 */
																																obj_t
																																	BgL_arg1397z00_1333;
																																{	/* Eval/expdsrfi0.scm 283 */
																																	obj_t
																																		BgL_arg1398z00_1334;
																																	{	/* Eval/expdsrfi0.scm 283 */
																																		obj_t
																																			BgL_arg1399z00_1335;
																																		obj_t
																																			BgL_arg1400z00_1336;
																																		{	/* Eval/expdsrfi0.scm 283 */
																																			obj_t
																																				BgL_arg1401z00_1337;
																																			{	/* Eval/expdsrfi0.scm 283 */
																																				obj_t
																																					BgL_arg1402z00_1338;
																																				{	/* Eval/expdsrfi0.scm 283 */
																																					obj_t
																																						BgL_arg1404z00_1339;
																																					BgL_arg1404z00_1339
																																						=
																																						BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																						(BgL_elsez00_1121,
																																						BNIL);
																																					BgL_arg1402z00_1338
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BGl_symbol1985z00zz__expander_srfi0z00,
																																						BgL_arg1404z00_1339);
																																				}
																																				BgL_arg1401z00_1337
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_arg1402z00_1338,
																																					BNIL);
																																			}
																																			BgL_arg1399z00_1335
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_reqz00_1162,
																																				BgL_arg1401z00_1337);
																																		}
																																		{	/* Eval/expdsrfi0.scm 284 */
																																			obj_t
																																				BgL_arg1405z00_1340;
																																			{	/* Eval/expdsrfi0.scm 284 */
																																				obj_t
																																					BgL_arg1406z00_1341;
																																				BgL_arg1406z00_1341
																																					=
																																					BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																					(BgL_bodyz00_1163,
																																					BNIL);
																																				BgL_arg1405z00_1340
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BGl_symbol1986z00zz__expander_srfi0z00,
																																					BgL_arg1406z00_1341);
																																			}
																																			BgL_arg1400z00_1336
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_arg1405z00_1340,
																																				BNIL);
																																		}
																																		BgL_arg1398z00_1334
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg1399z00_1335,
																																			BgL_arg1400z00_1336);
																																	}
																																	BgL_arg1397z00_1333
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BGl_symbol1985z00zz__expander_srfi0z00,
																																		BgL_arg1398z00_1334);
																																}
																																BgL_arg1396z00_1332
																																	=
																																	BGl_evepairifyz00zz__prognz00
																																	(BgL_arg1397z00_1333,
																																	BgL_xz00_15);
																															}
																															return
																																PROCEDURE_ENTRY
																																(BgL_ez00_16)
																																(BgL_ez00_16,
																																BgL_arg1396z00_1332,
																																BgL_ez00_16,
																																BEOA);
																														}
																													}
																												else
																													{	/* Eval/expdsrfi0.scm 252 */
																														if (SYMBOLP
																															(BgL_carzd2638zd2_1240))
																															{
																																obj_t
																																	BgL_bodyz00_2790;
																																obj_t
																																	BgL_featurez00_2789;
																																BgL_featurez00_2789
																																	=
																																	BgL_carzd2638zd2_1240;
																																BgL_bodyz00_2790
																																	=
																																	CDR
																																	(BgL_clausez00_1120);
																																BgL_bodyz00_1173
																																	=
																																	BgL_bodyz00_2790;
																																BgL_featurez00_1172
																																	=
																																	BgL_featurez00_2789;
																																goto
																																	BgL_tagzd2198zd2_1174;
																															}
																														else
																															{	/* Eval/expdsrfi0.scm 252 */
																																return
																																	BGl_expandzd2errorzd2zz__expandz00
																																	(BGl_string1983z00zz__expander_srfi0z00,
																																	BGl_string1984z00zz__expander_srfi0z00,
																																	BgL_xz00_15);
																															}
																													}
																											}
																										else
																											{	/* Eval/expdsrfi0.scm 252 */
																												if (SYMBOLP
																													(BgL_carzd2638zd2_1240))
																													{
																														obj_t
																															BgL_bodyz00_2796;
																														obj_t
																															BgL_featurez00_2795;
																														BgL_featurez00_2795
																															=
																															BgL_carzd2638zd2_1240;
																														BgL_bodyz00_2796 =
																															CDR
																															(BgL_clausez00_1120);
																														BgL_bodyz00_1173 =
																															BgL_bodyz00_2796;
																														BgL_featurez00_1172
																															=
																															BgL_featurez00_2795;
																														goto
																															BgL_tagzd2198zd2_1174;
																													}
																												else
																													{	/* Eval/expdsrfi0.scm 252 */
																														return
																															BGl_expandzd2errorzd2zz__expandz00
																															(BGl_string1983z00zz__expander_srfi0z00,
																															BGl_string1984z00zz__expander_srfi0z00,
																															BgL_xz00_15);
																													}
																											}
																									}
																								else
																									{	/* Eval/expdsrfi0.scm 252 */
																										obj_t BgL_cdrzd2707zd2_1257;

																										BgL_cdrzd2707zd2_1257 =
																											CDR(
																											((obj_t)
																												BgL_carzd2638zd2_1240));
																										if ((CAR(((obj_t)
																														BgL_carzd2638zd2_1240))
																												==
																												BGl_symbol1994z00zz__expander_srfi0z00))
																											{	/* Eval/expdsrfi0.scm 252 */
																												if (PAIRP
																													(BgL_cdrzd2707zd2_1257))
																													{	/* Eval/expdsrfi0.scm 252 */
																														obj_t
																															BgL_carzd2709zd2_1261;
																														BgL_carzd2709zd2_1261
																															=
																															CAR
																															(BgL_cdrzd2707zd2_1257);
																														if (SYMBOLP
																															(BgL_carzd2709zd2_1261))
																															{	/* Eval/expdsrfi0.scm 252 */
																																if (NULLP(CDR
																																		(BgL_cdrzd2707zd2_1257)))
																																	{	/* Eval/expdsrfi0.scm 252 */
																																		BgL_libz00_1165
																																			=
																																			BgL_carzd2709zd2_1261;
																																		BgL_bodyz00_1166
																																			=
																																			CDR
																																			(BgL_clausez00_1120);
																																		{	/* Eval/expdsrfi0.scm 288 */
																																			obj_t
																																				BgL_arg1407z00_1342;
																																			{	/* Eval/expdsrfi0.scm 288 */
																																				obj_t
																																					BgL_arg1409z00_1343;
																																				if (CBOOL(BGl_libraryzd2existszf3z21zz__libraryz00(BgL_libz00_1165, BNIL)))
																																					{	/* Eval/expdsrfi0.scm 289 */
																																						obj_t
																																							BgL_arg1412z00_1346;
																																						BgL_arg1412z00_1346
																																							=
																																							BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																							(BgL_bodyz00_1166,
																																							BNIL);
																																						BgL_arg1409z00_1343
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BGl_symbol1981z00zz__expander_srfi0z00,
																																							BgL_arg1412z00_1346);
																																					}
																																				else
																																					{	/* Eval/expdsrfi0.scm 290 */
																																						obj_t
																																							BgL_arg1413z00_1347;
																																						BgL_arg1413z00_1347
																																							=
																																							BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																							(BgL_elsez00_1121,
																																							BNIL);
																																						BgL_arg1409z00_1343
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BGl_symbol1985z00zz__expander_srfi0z00,
																																							BgL_arg1413z00_1347);
																																					}
																																				BgL_arg1407z00_1342
																																					=
																																					BGl_evepairifyz00zz__prognz00
																																					(BgL_arg1409z00_1343,
																																					BgL_xz00_15);
																																			}
																																			return
																																				PROCEDURE_ENTRY
																																				(BgL_ez00_16)
																																				(BgL_ez00_16,
																																				BgL_arg1407z00_1342,
																																				BgL_ez00_16,
																																				BEOA);
																																		}
																																	}
																																else
																																	{	/* Eval/expdsrfi0.scm 252 */
																																		obj_t
																																			BgL_carzd2726zd2_1266;
																																		BgL_carzd2726zd2_1266
																																			=
																																			CAR
																																			(BgL_clausez00_1120);
																																		if (SYMBOLP
																																			(BgL_carzd2726zd2_1266))
																																			{
																																				obj_t
																																					BgL_bodyz00_2831;
																																				obj_t
																																					BgL_featurez00_2830;
																																				BgL_featurez00_2830
																																					=
																																					BgL_carzd2726zd2_1266;
																																				BgL_bodyz00_2831
																																					=
																																					CDR
																																					(BgL_clausez00_1120);
																																				BgL_bodyz00_1173
																																					=
																																					BgL_bodyz00_2831;
																																				BgL_featurez00_1172
																																					=
																																					BgL_featurez00_2830;
																																				goto
																																					BgL_tagzd2198zd2_1174;
																																			}
																																		else
																																			{	/* Eval/expdsrfi0.scm 252 */
																																				return
																																					BGl_expandzd2errorzd2zz__expandz00
																																					(BGl_string1983z00zz__expander_srfi0z00,
																																					BGl_string1984z00zz__expander_srfi0z00,
																																					BgL_xz00_15);
																																			}
																																	}
																															}
																														else
																															{	/* Eval/expdsrfi0.scm 252 */
																																obj_t
																																	BgL_carzd2743zd2_1270;
																																BgL_carzd2743zd2_1270
																																	=
																																	CAR
																																	(BgL_clausez00_1120);
																																if (SYMBOLP
																																	(BgL_carzd2743zd2_1270))
																																	{
																																		obj_t
																																			BgL_bodyz00_2838;
																																		obj_t
																																			BgL_featurez00_2837;
																																		BgL_featurez00_2837
																																			=
																																			BgL_carzd2743zd2_1270;
																																		BgL_bodyz00_2838
																																			=
																																			CDR
																																			(BgL_clausez00_1120);
																																		BgL_bodyz00_1173
																																			=
																																			BgL_bodyz00_2838;
																																		BgL_featurez00_1172
																																			=
																																			BgL_featurez00_2837;
																																		goto
																																			BgL_tagzd2198zd2_1174;
																																	}
																																else
																																	{	/* Eval/expdsrfi0.scm 252 */
																																		return
																																			BGl_expandzd2errorzd2zz__expandz00
																																			(BGl_string1983z00zz__expander_srfi0z00,
																																			BGl_string1984z00zz__expander_srfi0z00,
																																			BgL_xz00_15);
																																	}
																															}
																													}
																												else
																													{	/* Eval/expdsrfi0.scm 252 */
																														obj_t
																															BgL_carzd2760zd2_1273;
																														BgL_carzd2760zd2_1273
																															=
																															CAR
																															(BgL_clausez00_1120);
																														if (SYMBOLP
																															(BgL_carzd2760zd2_1273))
																															{
																																obj_t
																																	BgL_bodyz00_2845;
																																obj_t
																																	BgL_featurez00_2844;
																																BgL_featurez00_2844
																																	=
																																	BgL_carzd2760zd2_1273;
																																BgL_bodyz00_2845
																																	=
																																	CDR
																																	(BgL_clausez00_1120);
																																BgL_bodyz00_1173
																																	=
																																	BgL_bodyz00_2845;
																																BgL_featurez00_1172
																																	=
																																	BgL_featurez00_2844;
																																goto
																																	BgL_tagzd2198zd2_1174;
																															}
																														else
																															{	/* Eval/expdsrfi0.scm 252 */
																																return
																																	BGl_expandzd2errorzd2zz__expandz00
																																	(BGl_string1983z00zz__expander_srfi0z00,
																																	BGl_string1984z00zz__expander_srfi0z00,
																																	BgL_xz00_15);
																															}
																													}
																											}
																										else
																											{	/* Eval/expdsrfi0.scm 252 */
																												obj_t
																													BgL_carzd2773zd2_1276;
																												BgL_carzd2773zd2_1276 =
																													CAR
																													(BgL_clausez00_1120);
																												{	/* Eval/expdsrfi0.scm 252 */
																													obj_t
																														BgL_cdrzd2778zd2_1277;
																													BgL_cdrzd2778zd2_1277
																														=
																														CDR(((obj_t)
																															BgL_carzd2773zd2_1276));
																													if ((CAR(((obj_t)
																																	BgL_carzd2773zd2_1276))
																															==
																															BGl_symbol1996z00zz__expander_srfi0z00))
																														{	/* Eval/expdsrfi0.scm 252 */
																															if (PAIRP
																																(BgL_cdrzd2778zd2_1277))
																																{	/* Eval/expdsrfi0.scm 252 */
																																	obj_t
																																		BgL_cdrzd2782zd2_1281;
																																	BgL_cdrzd2782zd2_1281
																																		=
																																		CDR
																																		(BgL_cdrzd2778zd2_1277);
																																	if (PAIRP
																																		(BgL_cdrzd2782zd2_1281))
																																		{	/* Eval/expdsrfi0.scm 252 */
																																			if (NULLP
																																				(CDR
																																					(BgL_cdrzd2782zd2_1281)))
																																				{	/* Eval/expdsrfi0.scm 252 */
																																					obj_t
																																						BgL_arg1352z00_1285;
																																					obj_t
																																						BgL_arg1353z00_1286;
																																					obj_t
																																						BgL_arg1354z00_1287;
																																					BgL_arg1352z00_1285
																																						=
																																						CAR
																																						(BgL_cdrzd2778zd2_1277);
																																					BgL_arg1353z00_1286
																																						=
																																						CAR
																																						(BgL_cdrzd2782zd2_1281);
																																					BgL_arg1354z00_1287
																																						=
																																						CDR
																																						(BgL_clausez00_1120);
																																					{	/* Eval/expdsrfi0.scm 294 */
																																						obj_t
																																							BgL_arg1415z00_1970;
																																						{	/* Eval/expdsrfi0.scm 294 */
																																							obj_t
																																								BgL_arg1416z00_1971;
																																							if (BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BGl_bigloozd2configzd2zz__configurez00(BgL_arg1352z00_1285), BgL_arg1353z00_1286))
																																								{	/* Eval/expdsrfi0.scm 295 */
																																									obj_t
																																										BgL_arg1419z00_1974;
																																									BgL_arg1419z00_1974
																																										=
																																										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																										(BgL_arg1354z00_1287,
																																										BNIL);
																																									BgL_arg1416z00_1971
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BGl_symbol1981z00zz__expander_srfi0z00,
																																										BgL_arg1419z00_1974);
																																								}
																																							else
																																								{	/* Eval/expdsrfi0.scm 296 */
																																									obj_t
																																										BgL_arg1420z00_1975;
																																									BgL_arg1420z00_1975
																																										=
																																										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																										(BgL_elsez00_1121,
																																										BNIL);
																																									BgL_arg1416z00_1971
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BGl_symbol1985z00zz__expander_srfi0z00,
																																										BgL_arg1420z00_1975);
																																								}
																																							BgL_arg1415z00_1970
																																								=
																																								BGl_evepairifyz00zz__prognz00
																																								(BgL_arg1416z00_1971,
																																								BgL_xz00_15);
																																						}
																																						return
																																							PROCEDURE_ENTRY
																																							(BgL_ez00_16)
																																							(BgL_ez00_16,
																																							BgL_arg1415z00_1970,
																																							BgL_ez00_16,
																																							BEOA);
																																					}
																																				}
																																			else
																																				{	/* Eval/expdsrfi0.scm 252 */
																																					if (SYMBOLP(BgL_carzd2773zd2_1276))
																																						{
																																							obj_t
																																								BgL_bodyz00_2882;
																																							obj_t
																																								BgL_featurez00_2881;
																																							BgL_featurez00_2881
																																								=
																																								BgL_carzd2773zd2_1276;
																																							BgL_bodyz00_2882
																																								=
																																								CDR
																																								(BgL_clausez00_1120);
																																							BgL_bodyz00_1173
																																								=
																																								BgL_bodyz00_2882;
																																							BgL_featurez00_1172
																																								=
																																								BgL_featurez00_2881;
																																							goto
																																								BgL_tagzd2198zd2_1174;
																																						}
																																					else
																																						{	/* Eval/expdsrfi0.scm 252 */
																																							return
																																								BGl_expandzd2errorzd2zz__expandz00
																																								(BGl_string1983z00zz__expander_srfi0z00,
																																								BGl_string1984z00zz__expander_srfi0z00,
																																								BgL_xz00_15);
																																						}
																																				}
																																		}
																																	else
																																		{	/* Eval/expdsrfi0.scm 252 */
																																			if (SYMBOLP(BgL_carzd2773zd2_1276))
																																				{
																																					obj_t
																																						BgL_bodyz00_2888;
																																					obj_t
																																						BgL_featurez00_2887;
																																					BgL_featurez00_2887
																																						=
																																						BgL_carzd2773zd2_1276;
																																					BgL_bodyz00_2888
																																						=
																																						CDR
																																						(BgL_clausez00_1120);
																																					BgL_bodyz00_1173
																																						=
																																						BgL_bodyz00_2888;
																																					BgL_featurez00_1172
																																						=
																																						BgL_featurez00_2887;
																																					goto
																																						BgL_tagzd2198zd2_1174;
																																				}
																																			else
																																				{	/* Eval/expdsrfi0.scm 252 */
																																					return
																																						BGl_expandzd2errorzd2zz__expandz00
																																						(BGl_string1983z00zz__expander_srfi0z00,
																																						BGl_string1984z00zz__expander_srfi0z00,
																																						BgL_xz00_15);
																																				}
																																		}
																																}
																															else
																																{	/* Eval/expdsrfi0.scm 252 */
																																	if (SYMBOLP
																																		(BgL_carzd2773zd2_1276))
																																		{
																																			obj_t
																																				BgL_bodyz00_2894;
																																			obj_t
																																				BgL_featurez00_2893;
																																			BgL_featurez00_2893
																																				=
																																				BgL_carzd2773zd2_1276;
																																			BgL_bodyz00_2894
																																				=
																																				CDR
																																				(BgL_clausez00_1120);
																																			BgL_bodyz00_1173
																																				=
																																				BgL_bodyz00_2894;
																																			BgL_featurez00_1172
																																				=
																																				BgL_featurez00_2893;
																																			goto
																																				BgL_tagzd2198zd2_1174;
																																		}
																																	else
																																		{	/* Eval/expdsrfi0.scm 252 */
																																			return
																																				BGl_expandzd2errorzd2zz__expandz00
																																				(BGl_string1983z00zz__expander_srfi0z00,
																																				BGl_string1984z00zz__expander_srfi0z00,
																																				BgL_xz00_15);
																																		}
																																}
																														}
																													else
																														{	/* Eval/expdsrfi0.scm 252 */
																															if (SYMBOLP
																																(BgL_carzd2773zd2_1276))
																																{
																																	obj_t
																																		BgL_bodyz00_2900;
																																	obj_t
																																		BgL_featurez00_2899;
																																	BgL_featurez00_2899
																																		=
																																		BgL_carzd2773zd2_1276;
																																	BgL_bodyz00_2900
																																		=
																																		CDR
																																		(BgL_clausez00_1120);
																																	BgL_bodyz00_1173
																																		=
																																		BgL_bodyz00_2900;
																																	BgL_featurez00_1172
																																		=
																																		BgL_featurez00_2899;
																																	goto
																																		BgL_tagzd2198zd2_1174;
																																}
																															else
																																{	/* Eval/expdsrfi0.scm 252 */
																																	return
																																		BGl_expandzd2errorzd2zz__expandz00
																																		(BGl_string1983z00zz__expander_srfi0z00,
																																		BGl_string1984z00zz__expander_srfi0z00,
																																		BgL_xz00_15);
																																}
																														}
																												}
																											}
																									}
																							}
																						}
																				}
																		}
																	else
																		{	/* Eval/expdsrfi0.scm 252 */
																			if (SYMBOLP(BgL_carzd2224zd2_1181))
																				{
																					obj_t BgL_bodyz00_2906;
																					obj_t BgL_featurez00_2905;

																					BgL_featurez00_2905 =
																						BgL_carzd2224zd2_1181;
																					BgL_bodyz00_2906 =
																						CDR(BgL_clausez00_1120);
																					BgL_bodyz00_1173 = BgL_bodyz00_2906;
																					BgL_featurez00_1172 =
																						BgL_featurez00_2905;
																					goto BgL_tagzd2198zd2_1174;
																				}
																			else
																				{	/* Eval/expdsrfi0.scm 252 */
																					return
																						BGl_expandzd2errorzd2zz__expandz00
																						(BGl_string1983z00zz__expander_srfi0z00,
																						BGl_string1984z00zz__expander_srfi0z00,
																						BgL_xz00_15);
																				}
																		}
																}
														}
													else
														{	/* Eval/expdsrfi0.scm 252 */
															return
																BGl_expandzd2errorzd2zz__expandz00
																(BGl_string1983z00zz__expander_srfi0z00,
																BGl_string1984z00zz__expander_srfi0z00,
																BgL_xz00_15);
														}
												}
											}
										else
											{	/* Eval/expdsrfi0.scm 252 */
												return
													BGl_expandzd2errorzd2zz__expandz00
													(BGl_string1983z00zz__expander_srfi0z00,
													BGl_string1984z00zz__expander_srfi0z00, BgL_xz00_15);
											}
									}
							}
						else
							{	/* Eval/expdsrfi0.scm 252 */
								obj_t BgL_cdrzd2177zd2_1135;

								BgL_cdrzd2177zd2_1135 = CDR(BgL_xz00_15);
								if (PAIRP(BgL_cdrzd2177zd2_1135))
									{
										obj_t BgL_elsez00_2918;
										obj_t BgL_clausez00_2916;

										BgL_clausez00_2916 = CAR(BgL_cdrzd2177zd2_1135);
										BgL_elsez00_2918 = CDR(BgL_cdrzd2177zd2_1135);
										BgL_elsez00_1121 = BgL_elsez00_2918;
										BgL_clausez00_1120 = BgL_clausez00_2916;
										goto BgL_tagzd2153zd2_1122;
									}
								else
									{	/* Eval/expdsrfi0.scm 252 */
										return
											BGl_expandzd2errorzd2zz__expandz00
											(BGl_string1983z00zz__expander_srfi0z00,
											BGl_string1984z00zz__expander_srfi0z00, BgL_xz00_15);
									}
							}
					}
			}
		}

	}



/* &expand-cond-expand */
	obj_t BGl_z62expandzd2condzd2expandz62zz__expander_srfi0z00(obj_t
		BgL_envz00_2277, obj_t BgL_xz00_2278, obj_t BgL_ez00_2279,
		obj_t BgL_featuresz00_2280)
	{
		{	/* Eval/expdsrfi0.scm 251 */
			{	/* Eval/expdsrfi0.scm 252 */
				obj_t BgL_auxz00_2935;
				obj_t BgL_auxz00_2928;
				obj_t BgL_auxz00_2921;

				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_featuresz00_2280))
					{	/* Eval/expdsrfi0.scm 252 */
						BgL_auxz00_2935 = BgL_featuresz00_2280;
					}
				else
					{
						obj_t BgL_auxz00_2938;

						BgL_auxz00_2938 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1967z00zz__expander_srfi0z00, BINT(((long) 10963)),
							BGl_string1998z00zz__expander_srfi0z00,
							BGl_string1976z00zz__expander_srfi0z00, BgL_featuresz00_2280);
						FAILURE(BgL_auxz00_2938, BFALSE, BFALSE);
					}
				if (PROCEDUREP(BgL_ez00_2279))
					{	/* Eval/expdsrfi0.scm 252 */
						BgL_auxz00_2928 = BgL_ez00_2279;
					}
				else
					{
						obj_t BgL_auxz00_2931;

						BgL_auxz00_2931 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1967z00zz__expander_srfi0z00, BINT(((long) 10963)),
							BGl_string1998z00zz__expander_srfi0z00,
							BGl_string1977z00zz__expander_srfi0z00, BgL_ez00_2279);
						FAILURE(BgL_auxz00_2931, BFALSE, BFALSE);
					}
				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_xz00_2278))
					{	/* Eval/expdsrfi0.scm 252 */
						BgL_auxz00_2921 = BgL_xz00_2278;
					}
				else
					{
						obj_t BgL_auxz00_2924;

						BgL_auxz00_2924 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1967z00zz__expander_srfi0z00, BINT(((long) 10963)),
							BGl_string1998z00zz__expander_srfi0z00,
							BGl_string1976z00zz__expander_srfi0z00, BgL_xz00_2278);
						FAILURE(BgL_auxz00_2924, BFALSE, BFALSE);
					}
				return
					BGl_expandzd2condzd2expandz00zz__expander_srfi0z00(BgL_auxz00_2921,
					BgL_auxz00_2928, BgL_auxz00_2935);
			}
		}

	}



/* expand-cond-expand-and */
	obj_t BGl_expandzd2condzd2expandzd2andzd2zz__expander_srfi0z00(obj_t
		BgL_xz00_18, obj_t BgL_ez00_19, obj_t BgL_req1z00_20, obj_t BgL_req2z00_21,
		obj_t BgL_reqsz00_22, obj_t BgL_bodyz00_23, obj_t BgL_elsez00_24)
	{
		{	/* Eval/expdsrfi0.scm 313 */
			{	/* Eval/expdsrfi0.scm 316 */
				obj_t BgL_arg1428z00_2003;

				{	/* Eval/expdsrfi0.scm 316 */
					obj_t BgL_arg1429z00_2004;

					{	/* Eval/expdsrfi0.scm 316 */
						obj_t BgL_arg1430z00_2005;

						{	/* Eval/expdsrfi0.scm 316 */
							obj_t BgL_arg1431z00_2006;
							obj_t BgL_arg1432z00_2007;

							{	/* Eval/expdsrfi0.scm 316 */
								obj_t BgL_arg1433z00_2008;

								{	/* Eval/expdsrfi0.scm 316 */
									obj_t BgL_arg1434z00_2009;

									{	/* Eval/expdsrfi0.scm 316 */
										obj_t BgL_arg1435z00_2010;

										{	/* Eval/expdsrfi0.scm 316 */
											obj_t BgL_arg1436z00_2011;
											obj_t BgL_arg1437z00_2012;

											{	/* Eval/expdsrfi0.scm 316 */
												obj_t BgL_arg1438z00_2013;
												obj_t BgL_arg1439z00_2014;

												{	/* Eval/expdsrfi0.scm 316 */
													obj_t BgL_arg1440z00_2015;

													BgL_arg1440z00_2015 =
														MAKE_YOUNG_PAIR(BgL_req2z00_21,
														BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
														(BgL_reqsz00_22, BNIL));
													BgL_arg1438z00_2013 =
														MAKE_YOUNG_PAIR
														(BGl_symbol1988z00zz__expander_srfi0z00,
														BgL_arg1440z00_2015);
												}
												BgL_arg1439z00_2014 =
													BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
													(BgL_bodyz00_23, BNIL);
												BgL_arg1436z00_2011 =
													MAKE_YOUNG_PAIR(BgL_arg1438z00_2013,
													BgL_arg1439z00_2014);
											}
											BgL_arg1437z00_2012 =
												BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
												(BgL_elsez00_24, BNIL);
											BgL_arg1435z00_2010 =
												MAKE_YOUNG_PAIR(BgL_arg1436z00_2011,
												BgL_arg1437z00_2012);
										}
										BgL_arg1434z00_2009 =
											MAKE_YOUNG_PAIR(BGl_symbol1985z00zz__expander_srfi0z00,
											BgL_arg1435z00_2010);
									}
									BgL_arg1433z00_2008 =
										MAKE_YOUNG_PAIR(BgL_arg1434z00_2009, BNIL);
								}
								BgL_arg1431z00_2006 =
									MAKE_YOUNG_PAIR(BgL_req1z00_20, BgL_arg1433z00_2008);
							}
							BgL_arg1432z00_2007 =
								BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(BgL_elsez00_24,
								BNIL);
							BgL_arg1430z00_2005 =
								MAKE_YOUNG_PAIR(BgL_arg1431z00_2006, BgL_arg1432z00_2007);
						}
						BgL_arg1429z00_2004 =
							MAKE_YOUNG_PAIR(BGl_symbol1985z00zz__expander_srfi0z00,
							BgL_arg1430z00_2005);
					}
					BgL_arg1428z00_2003 =
						BGl_evepairifyz00zz__prognz00(BgL_arg1429z00_2004, BgL_xz00_18);
				}
				return
					PROCEDURE_ENTRY(BgL_ez00_19) (BgL_ez00_19, BgL_arg1428z00_2003,
					BgL_ez00_19, BEOA);
			}
		}

	}



/* expand-cond-expand-or */
	obj_t BGl_expandzd2condzd2expandzd2orzd2zz__expander_srfi0z00(obj_t
		BgL_xz00_25, obj_t BgL_ez00_26, obj_t BgL_req1z00_27, obj_t BgL_req2z00_28,
		obj_t BgL_reqsz00_29, obj_t BgL_bodyz00_30, obj_t BgL_elsez00_31)
	{
		{	/* Eval/expdsrfi0.scm 325 */
			{	/* Eval/expdsrfi0.scm 326 */
				obj_t BgL_bdz00_1375;

				{	/* Eval/expdsrfi0.scm 326 */

					{	/* Eval/expdsrfi0.scm 326 */

						BgL_bdz00_1375 = BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
					}
				}
				{	/* Eval/expdsrfi0.scm 328 */
					obj_t BgL_arg1442z00_1376;

					{	/* Eval/expdsrfi0.scm 328 */
						obj_t BgL_arg1443z00_1377;

						{	/* Eval/expdsrfi0.scm 328 */
							obj_t BgL_arg1444z00_1378;

							{	/* Eval/expdsrfi0.scm 328 */
								obj_t BgL_arg1445z00_1379;
								obj_t BgL_arg1446z00_1380;

								{	/* Eval/expdsrfi0.scm 328 */
									obj_t BgL_arg1448z00_1381;

									{	/* Eval/expdsrfi0.scm 328 */
										obj_t BgL_arg1449z00_1382;

										{	/* Eval/expdsrfi0.scm 328 */
											obj_t BgL_arg1451z00_1383;

											{	/* Eval/expdsrfi0.scm 328 */
												obj_t BgL_arg1452z00_1384;

												BgL_arg1452z00_1384 =
													BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
													(BgL_bodyz00_30, BNIL);
												BgL_arg1451z00_1383 =
													MAKE_YOUNG_PAIR
													(BGl_symbol1981z00zz__expander_srfi0z00,
													BgL_arg1452z00_1384);
											}
											BgL_arg1449z00_1382 =
												BGl_evepairifyz00zz__prognz00(BgL_arg1451z00_1383,
												BgL_bodyz00_30);
										}
										BgL_arg1448z00_1381 =
											MAKE_YOUNG_PAIR(BgL_arg1449z00_1382, BNIL);
									}
									BgL_arg1445z00_1379 =
										MAKE_YOUNG_PAIR(BgL_req1z00_27, BgL_arg1448z00_1381);
								}
								{	/* Eval/expdsrfi0.scm 331 */
									obj_t BgL_arg1453z00_1385;

									{	/* Eval/expdsrfi0.scm 331 */
										obj_t BgL_arg1454z00_1386;

										{	/* Eval/expdsrfi0.scm 331 */
											obj_t BgL_arg1455z00_1387;

											{	/* Eval/expdsrfi0.scm 331 */
												obj_t BgL_arg1456z00_1388;

												{	/* Eval/expdsrfi0.scm 331 */
													obj_t BgL_arg1457z00_1389;
													obj_t BgL_arg1458z00_1390;

													{	/* Eval/expdsrfi0.scm 331 */
														obj_t BgL_arg1459z00_1391;
														obj_t BgL_arg1460z00_1392;

														{	/* Eval/expdsrfi0.scm 331 */
															obj_t BgL_arg1461z00_1393;

															BgL_arg1461z00_1393 =
																MAKE_YOUNG_PAIR(BgL_req2z00_28,
																BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																(BgL_reqsz00_29, BNIL));
															BgL_arg1459z00_1391 =
																MAKE_YOUNG_PAIR
																(BGl_symbol1990z00zz__expander_srfi0z00,
																BgL_arg1461z00_1393);
														}
														BgL_arg1460z00_1392 =
															BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
															(BgL_bodyz00_30, BNIL);
														BgL_arg1457z00_1389 =
															MAKE_YOUNG_PAIR(BgL_arg1459z00_1391,
															BgL_arg1460z00_1392);
													}
													BgL_arg1458z00_1390 =
														BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
														(BgL_elsez00_31, BNIL);
													BgL_arg1456z00_1388 =
														MAKE_YOUNG_PAIR(BgL_arg1457z00_1389,
														BgL_arg1458z00_1390);
												}
												BgL_arg1455z00_1387 =
													MAKE_YOUNG_PAIR
													(BGl_symbol1985z00zz__expander_srfi0z00,
													BgL_arg1456z00_1388);
											}
											BgL_arg1454z00_1386 =
												MAKE_YOUNG_PAIR(BgL_arg1455z00_1387, BNIL);
										}
										BgL_arg1453z00_1385 =
											MAKE_YOUNG_PAIR(BGl_symbol1986z00zz__expander_srfi0z00,
											BgL_arg1454z00_1386);
									}
									BgL_arg1446z00_1380 =
										MAKE_YOUNG_PAIR(BgL_arg1453z00_1385, BNIL);
								}
								BgL_arg1444z00_1378 =
									MAKE_YOUNG_PAIR(BgL_arg1445z00_1379, BgL_arg1446z00_1380);
							}
							BgL_arg1443z00_1377 =
								MAKE_YOUNG_PAIR(BGl_symbol1985z00zz__expander_srfi0z00,
								BgL_arg1444z00_1378);
						}
						BgL_arg1442z00_1376 =
							BGl_evepairifyz00zz__prognz00(BgL_arg1443z00_1377, BgL_xz00_25);
					}
					return
						PROCEDURE_ENTRY(BgL_ez00_26) (BgL_ez00_26, BgL_arg1442z00_1376,
						BgL_ez00_26, BEOA);
				}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__expander_srfi0z00()
	{
		{	/* Eval/expdsrfi0.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__expander_srfi0z00()
	{
		{	/* Eval/expdsrfi0.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__expander_srfi0z00()
	{
		{	/* Eval/expdsrfi0.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__expander_srfi0z00()
	{
		{	/* Eval/expdsrfi0.scm 15 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string1999z00zz__expander_srfi0z00));
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 70989162),
				BSTRING_TO_STRING(BGl_string1999z00zz__expander_srfi0z00));
			BGl_modulezd2initializa7ationz75zz__tvectorz00(((long) 135277364),
				BSTRING_TO_STRING(BGl_string1999z00zz__expander_srfi0z00));
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 128218115),
				BSTRING_TO_STRING(BGl_string1999z00zz__expander_srfi0z00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 340267996),
				BSTRING_TO_STRING(BGl_string1999z00zz__expander_srfi0z00));
			BGl_modulezd2initializa7ationz75zz__bignumz00(((long) 6519875),
				BSTRING_TO_STRING(BGl_string1999z00zz__expander_srfi0z00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string1999z00zz__expander_srfi0z00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 193422032),
				BSTRING_TO_STRING(BGl_string1999z00zz__expander_srfi0z00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 224967910),
				BSTRING_TO_STRING(BGl_string1999z00zz__expander_srfi0z00));
			BGl_modulezd2initializa7ationz75zz__libraryz00(((long) 143145303),
				BSTRING_TO_STRING(BGl_string1999z00zz__expander_srfi0z00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 68572481),
				BSTRING_TO_STRING(BGl_string1999z00zz__expander_srfi0z00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long)
					420334581),
				BSTRING_TO_STRING(BGl_string1999z00zz__expander_srfi0z00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long)
					437057945),
				BSTRING_TO_STRING(BGl_string1999z00zz__expander_srfi0z00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonum_dtoaz00(((long)
					268155874),
				BSTRING_TO_STRING(BGl_string1999z00zz__expander_srfi0z00));
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long)
					198621048),
				BSTRING_TO_STRING(BGl_string1999z00zz__expander_srfi0z00));
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long)
					473309694),
				BSTRING_TO_STRING(BGl_string1999z00zz__expander_srfi0z00));
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 459519474),
				BSTRING_TO_STRING(BGl_string1999z00zz__expander_srfi0z00));
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 460263341),
				BSTRING_TO_STRING(BGl_string1999z00zz__expander_srfi0z00));
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) -44274296),
				BSTRING_TO_STRING(BGl_string1999z00zz__expander_srfi0z00));
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long)
					9614573), BSTRING_TO_STRING(BGl_string1999z00zz__expander_srfi0z00));
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long)
					376927845),
				BSTRING_TO_STRING(BGl_string1999z00zz__expander_srfi0z00));
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 190906089),
				BSTRING_TO_STRING(BGl_string1999z00zz__expander_srfi0z00));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 331540733),
				BSTRING_TO_STRING(BGl_string1999z00zz__expander_srfi0z00));
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 86988972),
				BSTRING_TO_STRING(BGl_string1999z00zz__expander_srfi0z00));
			BGl_modulezd2initializa7ationz75zz__prognz00(((long) 177147628),
				BSTRING_TO_STRING(BGl_string1999z00zz__expander_srfi0z00));
			return BGl_modulezd2initializa7ationz75zz__expandz00(((long) 414007030),
				BSTRING_TO_STRING(BGl_string1999z00zz__expander_srfi0z00));
		}

	}

#ifdef __cplusplus
}
#endif
